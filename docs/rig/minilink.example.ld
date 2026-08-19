_start = 0x0010001C;
ENTRY(_start);
INCLUDE /data/agent-tom/kh2/rig-wt/out/generated/symbols.ld
SECTIONS {
  .kh2fn 0x00281100 : { KEEP(*(.text._ZN2Tz9PartyInfo11GetPartyMaxEv)) }
  .text.other 0x01e00000 : { *(.text*) }
  .rodata 0x01e80000 : { *(.rodata*) }
  .data 0x01f00000 : { *(.data*) *(.sdata*) *(.bss*) *(.sbss*) *(COMMON) }
  .reginfo : { *(.reginfo) }
  /DISCARD/ : { *(.MIPS.abiflags) *(.comment) *(.pdr) *(.mdebug*) *(.gnu.attributes) }
}
