
uint FT_Get_Gasp(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 8) != 0)) &&
     (*(ushort *)(param_1 + 0x3a2) != 0)) {
    puVar2 = *(ushort **)(param_1 + 0x3a8);
    puVar1 = puVar2 + (ulong)*(ushort *)(param_1 + 0x3a2) * 2;
    do {
      if (param_2 <= *puVar2) {
        if (*(short *)(param_1 + 0x3a0) == 0) {
          return puVar2[1] & 3;
        }
        return (uint)puVar2[1];
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 < puVar1);
  }
  return 0xffffffff;
}


