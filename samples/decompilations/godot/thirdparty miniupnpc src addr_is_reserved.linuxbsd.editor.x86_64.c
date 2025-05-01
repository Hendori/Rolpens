
undefined8 addr_is_reserved(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = inet_pton(2,param_1,&local_14);
  uVar2 = 1;
  if (0 < iVar1) {
    puVar3 = &reserved;
    do {
      if ((local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
          local_14 << 0x18) >> ((byte)puVar3[1] & 0x1f) == *puVar3 >> ((byte)puVar3[1] & 0x1f)) {
        uVar2 = 1;
        goto LAB_0010006d;
      }
      puVar3 = puVar3 + 2;
    } while ((NoteGnuProperty_4 *)puVar3 != &NoteGnuProperty_4_00100130);
    uVar2 = 0;
  }
LAB_0010006d:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


