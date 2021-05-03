
#include "plic_driver.h"
#include <stddef.h>
// #include "utils.h"


plic_fptr_t isr_table[PLIC_MAX_INTERRUPT_SRC];
interrupt_data_t hart0_interrupt_matrix[PLIC_MAX_INTERRUPT_SRC];

unsigned long read_word(uint32_t *addr)
{
	return *addr;
}

/** @fn void write_word(int *addr, unsigned long val)
 * @brief  writes a value to an address
 * @param int*
 * @param unsigned long
 */
void write_word(uint32_t *addr, unsigned long val)
{
	*addr = val;
}

void interrupt_complete(uint32_t interrupt_id)
{

	uint32_t *claim_addr =  (uint32_t *) (PLIC_BASE_ADDRESS +
					      PLIC_CLAIM_OFFSET);

	*claim_addr = interrupt_id;
	hart0_interrupt_matrix[interrupt_id].state = SERVICED;
	hart0_interrupt_matrix[interrupt_id].count++;
}

void configure_interrupt_pin( __attribute__((unused)) uint32_t id)
{

	// uint32_t read_data;

	// /*
	//    GPIO0 -> Int id 7
	//    GPIO15 -> Int id 21
	//    Refer platform.h for full memory map.
	//  */

	// read_data = read_word(GPIO_DIRECTION_CNTRL_REG);

	// write_word(GPIO_DIRECTION_CNTRL_REG, (read_data) & \
	// 	   (0xFFFFFFFF & ~(1 << (id-7))));
}

uint32_t interrupt_claim_request()
{
	uint32_t *interrupt_claim_address = NULL;
	uint32_t interrupt_id;
	interrupt_claim_address = (uint32_t *)(PLIC_BASE_ADDRESS +
					       PLIC_CLAIM_OFFSET);
	interrupt_id = *interrupt_claim_address;
	return interrupt_id;
}

void mach_plic_handler( __attribute__((unused)) uintptr_t int_id, __attribute__((unused)) uintptr_t epc)
{
	uint32_t  interrupt_id;

	interrupt_id = interrupt_claim_request();

		hart0_interrupt_matrix[interrupt_id].state = ACTIVE;


	isr_table[interrupt_id](interrupt_id);

	interrupt_complete(interrupt_id);
}
void interrupt_enable(uint32_t interrupt_id)
{
	uint8_t *interrupt_enable_addr;
	uint8_t current_value = 0x00, new_value;

	interrupt_enable_addr = (uint8_t *) (PLIC_BASE_ADDRESS +
			PLIC_ENABLE_OFFSET +
			((interrupt_id) >> 3));

	current_value = *interrupt_enable_addr;

	/*set the bit corresponding to the interrupt src*/
	new_value = current_value | (0x1 << (interrupt_id % 8));

	*((uint8_t*)interrupt_enable_addr) = new_value;
}
void interrupt_disable(uint32_t interrupt_id)
{
	uint8_t *interrupt_disable_addr = 0;
	uint8_t current_value = 0x00, new_value;


	interrupt_disable_addr = (uint8_t *) (PLIC_BASE_ADDRESS +
					      PLIC_ENABLE_OFFSET +
					      (interrupt_id >> 3));

	current_value = *interrupt_disable_addr;


	/*unset the bit corresponding to the interrupt src*/
	new_value = current_value & (~(0x1 << (interrupt_id % 8)));

	*interrupt_disable_addr = new_value;

	hart0_interrupt_matrix[interrupt_id].state = INACTIVE;
}
void set_interrupt_threshold(uint32_t priority_value)
{

	uint32_t *interrupt_threshold_priority = NULL;

	interrupt_threshold_priority = (uint32_t *) (PLIC_BASE_ADDRESS +
						     PLIC_THRESHOLD_OFFSET);

	*interrupt_threshold_priority = priority_value;

}
void set_interrupt_priority(uint32_t priority_value, uint32_t int_id)
{

	uint32_t * interrupt_priority_address;

	/*
	   base address + priority offset + 4*interruptId
	 */

	interrupt_priority_address = (uint32_t *) (PLIC_BASE_ADDRESS +
						   PLIC_PRIORITY_OFFSET +
						   (int_id <<
						    PLIC_PRIORITY_SHIFT_PER_INT));

	*interrupt_priority_address = priority_value;

}

void isr_default(uint32_t interrupt_id)
{
	// log_trace("\nisr_default entered\n");

	// if( interrupt_id > 0 && interrupt_id < 7 )  //PWM Interrupts
	// {
	// 	/*
	// 	   Assuming 6 pwm's are there
	// 	 */

	// 	if(pwm_check_continuous_mode((6-interrupt_id)) == 0)
	// 	{
	// 		set_pwm_control_register((6-interrupt_id),0x80);
	// 	}
	// }

	// log_info("interrupt [%d] serviced\n",interrupt_id);

	// log_trace("\nisr_default exited\n");
}


void plic_init()
{
	uint32_t int_id = 0;


	mcause_interrupt_table[MACH_EXTERNAL_INTERRUPT] = mach_plic_handler;

	hart0_interrupt_matrix[0].state = INACTIVE;
	hart0_interrupt_matrix[0].id = 0;
	hart0_interrupt_matrix[0].priority = 0;
	hart0_interrupt_matrix[0].count = 0;

	for(int_id = 1; int_id < PLIC_MAX_INTERRUPT_SRC; int_id++)
	{
		hart0_interrupt_matrix[int_id].state = INACTIVE;
		hart0_interrupt_matrix[int_id].id = int_id;
		hart0_interrupt_matrix[int_id].priority = PLIC_PRIORITY_3;
		hart0_interrupt_matrix[int_id].count = 0;

		interrupt_disable(int_id);

		/*assign a default isr for all interrupts*/
		isr_table[int_id] = isr_default;

		/*set priority for all interrupts*/

		set_interrupt_priority(PLIC_PRIORITY_3, int_id);
	}

	set_interrupt_threshold(PLIC_PRIORITY_2);

}


void configure_interrupt(uint32_t int_id)
{

	/*
	   Call only for GPIO pins
	 */
	if(int_id >6 && int_id < 22)
	{
		configure_interrupt_pin(int_id);
	}

	interrupt_enable(int_id);

}

