// EPOS RISC-V 64 MMU Mediator Implementation

#include <architecture/rv64/rv64_mmu.h>

__BEGIN_SYS

RV32S_MMU::List RV32S_MMU::_free[colorful * COLORS + 1];
RV32S_MMU::Page_Directory * RV32S_MMU::_master;

__END_SYS
