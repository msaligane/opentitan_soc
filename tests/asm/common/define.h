#ifndef DEFINES_H
#define DEFINES_H
#define REGSIZE __riscv_xlen/8
#if __riscv_xlen == 64
#define LREG ld
#define SREG sd
#else
#define LREG lw
#define SREG sw
#endif

#endif