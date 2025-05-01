
/* WARNING: Unknown calling convention */

size_t strnlen1(char *string,size_t maxlen)

{
  void *pvVar1;
  
  pvVar1 = memchr(string,0,maxlen);
  if (pvVar1 != (void *)0x0) {
    maxlen = (long)pvVar1 + (1 - (long)string);
  }
  return maxlen;
}


