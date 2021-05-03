#include "traps.h"

mtrap_fptr_t mcause_trap_table[MAX_TRAP_VALUE];
mtrap_fptr_t mcause_interrupt_table[MAX_INTERRUPT_VALUE];

/** @fn unsigned int extract_ie_code(unsigned int num)
 * @brief Extract the exception code from the mcause value
 * @details Extract the exception code from the mcause value
 *	    by masking the most significant bit and return
 *	    the exception code.
 * @param unsigned int num - mcause value
 * @return unsigned int
 */
unsigned int extract_ie_code(unsigned int num)
{
	unsigned int exception_code;

	exception_code = (num & 0X7FFFFFFF);

	return exception_code;
}

/** @fn void default_handler(uintptr_t mcause, uintptr_t epc)
 * @brief default handler that loops infinitely 
 * @param unsigned int ptr mcause
 * @param unsigned int ptr epc
 */
void default_handler(__attribute__((unused)) uintptr_t mcause, __attribute__((unused)) uintptr_t epc)
{

	while(1);

}

/** @fn uintptr_t handle_trap(uintptr_t mcause, uintptr_t epc)
 * @brief Handles the trap, exception or interrupt is determined here
 * @details Trap handler routine, which identifies the cause of trap 
 *	    and calls the respective trap handler.
 * @param unsigned int ptr mcause
 * @param unsigned int ptr epc
 * @return unsigned int ptr
 */
uintptr_t handle_trap(uintptr_t mcause, uintptr_t epc)
{
	unsigned int ie_entry = 0;;
	uint32_t shift_length = 0;

	/*
	   risc v priv spec v1.10 section 3.1.20 Machine Cause Register (mcause)

	   XLEN -1   XLEN-2                                           0
	   ------------------------------------------------------------
	   | Interrupt |    Exception code                            |
	   ------------------------------------------------------------
	   1                            XLEN-1

	   The mcause register is an XLEN-bit read-write register formatted as shown in Figure 3.2
	   1. When a trap is taken into M-mode, mcause is written with a code indicating the event that caused the trap.
	   Otherwise, mcause is never written by the implementation, though it may be explicitly written by software.
	 */


	/*
	   The Interrupt bit in the mcause register is set if the trap was caused by an interrupt.
	   The Exception Code field contains a code identifying the last exception
	 */
	shift_length = __riscv_xlen - 1;

	 /* checking for type of trap */
	if (mcause & (1 << (shift_length))){

		ie_entry = extract_ie_code(mcause);

		mcause_interrupt_table[ie_entry](mcause, epc);
	}
	else{
		mcause_trap_table[mcause](mcause, epc);
	}

return epc;
}
