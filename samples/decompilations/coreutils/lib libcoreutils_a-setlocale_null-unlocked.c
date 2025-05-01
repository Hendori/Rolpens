
/* WARNING: Unknown calling convention */

char * setlocale_null_unlocked(int category)

{
  char *pcVar1;
  
  pcVar1 = setlocale(category,(char *)0x0);
  return pcVar1;
}



/* WARNING: Unknown calling convention */

int setlocale_null_r_unlocked(int category,char *buf,size_t bufsize)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  
  __s = setlocale(category,(char *)0x0);
  if (__s == (char *)0x0) {
    if (bufsize != 0) {
      *buf = '\0';
    }
    iVar1 = 0x16;
  }
  else {
    sVar2 = strlen(__s);
    if (bufsize <= sVar2) {
      if (bufsize != 0) {
        memcpy(buf,__s,bufsize - 1);
        buf[bufsize - 1] = '\0';
      }
      return 0x22;
    }
    memcpy(buf,__s,sVar2 + 1);
    iVar1 = 0;
  }
  return iVar1;
}


