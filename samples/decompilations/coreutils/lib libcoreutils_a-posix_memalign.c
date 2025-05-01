
/* WARNING: Unknown calling convention */

int rpl_posix_memalign(void **memptr,size_t alignment,size_t size)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (alignment - 1) + (ulong)(size == 0);
  if (!CARRY8(uVar2,size)) {
    iVar1 = posix_memalign(memptr,alignment,-alignment & uVar2 + size);
    return iVar1;
  }
  return 0xc;
}


