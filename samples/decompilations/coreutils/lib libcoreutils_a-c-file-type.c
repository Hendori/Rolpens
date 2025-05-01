
/* WARNING: Unknown calling convention */

char * c_file_type(stat *st)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = st->st_mode & 0xf000;
  if (uVar1 != 0x8000) {
    pcVar2 = "directory";
    if ((((uVar1 != 0x4000) && (pcVar2 = "symbolic link", uVar1 != 0xa000)) &&
        (pcVar2 = "block special file", uVar1 != 0x6000)) &&
       (((pcVar2 = "character special file", uVar1 != 0x2000 && (pcVar2 = "fifo", uVar1 != 0x1000))
        && (pcVar2 = "socket", uVar1 != 0xc000)))) {
      pcVar2 = "weird file";
    }
    return pcVar2;
  }
  pcVar2 = "regular file";
  if (st->st_size == 0) {
    pcVar2 = "regular empty file";
  }
  return pcVar2;
}


