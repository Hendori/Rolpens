
/* WARNING: Unknown calling convention */

int freadseek(FILE *fp,size_t offset)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  __off_t _Var7;
  ulong __n;
  long in_FS_OFFSET;
  size_t buffered;
  char buf [4096];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (offset != 0) {
    for (lVar3 = freadahead(); lVar3 != 0; lVar3 = lVar3 + -1) {
      lVar4 = freadptr(fp);
      if ((lVar4 != 0) && (buffered != 0)) {
        sVar5 = buffered;
        if (offset < buffered) {
          sVar5 = offset;
        }
        fp->_IO_read_ptr = fp->_IO_read_ptr + sVar5;
        offset = offset - sVar5;
        if (offset == 0) goto LAB_00100128;
        lVar3 = lVar3 - sVar5;
        if (lVar3 == 0) break;
      }
      iVar2 = fgetc((FILE *)fp);
      if (iVar2 == -1) goto LAB_001000a9;
      offset = offset - 1;
      if (offset == 0) goto LAB_00100128;
    }
    iVar2 = fileno((FILE *)fp);
    if ((-1 < iVar2) && (_Var7 = lseek(iVar2,0,1), -1 < _Var7)) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar2 = rpl_fseeko(fp,offset,1);
        return iVar2;
      }
      goto LAB_00100173;
    }
    do {
      __n = 0x1000;
      if (offset < 0x1001) {
        __n = offset;
      }
      sVar6 = fread(buf,1,__n,(FILE *)fp);
      if (sVar6 < __n) goto LAB_001000a9;
      offset = offset - __n;
    } while (offset != 0);
  }
LAB_00100128:
  iVar2 = 0;
  goto LAB_001000b5;
LAB_001000a9:
  iVar2 = ferror((FILE *)fp);
  iVar2 = -(uint)(iVar2 != 0);
LAB_001000b5:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_00100173:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


