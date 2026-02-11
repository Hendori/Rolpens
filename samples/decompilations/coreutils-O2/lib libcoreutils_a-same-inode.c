
undefined8 psame_inode(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ *param_2 | param_1[1] ^ param_2[1];
  return CONCAT71((int7)(uVar1 >> 8),uVar1 == 0);
}


