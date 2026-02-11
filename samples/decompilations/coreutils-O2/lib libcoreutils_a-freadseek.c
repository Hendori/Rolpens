
ulong freadseek(FILE *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  __off_t _Var5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_1040;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    for (lVar2 = freadahead(); lVar2 != 0; lVar2 = lVar2 + -1) {
      lVar3 = freadptr(param_1);
      if ((lVar3 != 0) && (local_1040 != 0)) {
        uVar6 = local_1040;
        if (param_2 < local_1040) {
          uVar6 = param_2;
        }
        param_1->_IO_read_ptr = param_1->_IO_read_ptr + uVar6;
        param_2 = param_2 - uVar6;
        if (param_2 == 0) goto LAB_00100128;
        lVar2 = lVar2 - uVar6;
        if (lVar2 == 0) break;
      }
      iVar1 = fgetc(param_1);
      if (iVar1 == -1) goto LAB_001000a9;
      param_2 = param_2 - 1;
      if (param_2 == 0) goto LAB_00100128;
    }
    iVar1 = fileno(param_1);
    if ((-1 < iVar1) && (_Var5 = lseek(iVar1,0,1), -1 < _Var5)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = rpl_fseeko(param_1,param_2,1);
        return uVar6;
      }
      goto LAB_00100173;
    }
    do {
      uVar6 = 0x1000;
      if (param_2 < 0x1001) {
        uVar6 = param_2;
      }
      sVar4 = fread(local_1038,1,uVar6,param_1);
      if (sVar4 < uVar6) goto LAB_001000a9;
      param_2 = param_2 - uVar6;
    } while (param_2 != 0);
  }
LAB_00100128:
  uVar6 = 0;
  goto LAB_001000b5;
LAB_001000a9:
  iVar1 = ferror(param_1);
  uVar6 = (ulong)-(uint)(iVar1 != 0);
LAB_001000b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00100173:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


