
/* WARNING: Unknown calling convention */

int setlocale_null_r(int category,char *buf,size_t bufsize)

{
  int iVar1;
  
  iVar1 = setlocale_null_r_unlocked();
  return iVar1;
}



/* WARNING: Unknown calling convention */

char * setlocale_null(int category)

{
  char *pcVar1;
  
  pcVar1 = (char *)setlocale_null_unlocked();
  return pcVar1;
}


