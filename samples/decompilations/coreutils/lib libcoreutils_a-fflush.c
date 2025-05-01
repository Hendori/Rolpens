
/* WARNING: Unknown calling convention */

int rpl_fflush(FILE *stream)

{
  int iVar1;
  
  if (stream != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((stream->_flags & 0x100U) != 0)) {
      rpl_fseeko(stream,0,1);
      iVar1 = fflush((FILE *)stream);
      return iVar1;
    }
  }
  iVar1 = fflush((FILE *)stream);
  return iVar1;
}


