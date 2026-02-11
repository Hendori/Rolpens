
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* astc::rand_init(unsigned long*) */

void astc::rand_init(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = _UNK_00100058;
  *param_1 = __LC0;
  param_1[1] = uVar1;
  return;
}



/* astc::rand(unsigned long*) */

long astc::rand(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = uVar1 ^ uVar2;
  param_1[1] = uVar3 >> 0x1b | uVar3 << 0x25;
  *param_1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar3 ^ uVar3 << 0x10;
  return uVar1 + uVar2;
}


