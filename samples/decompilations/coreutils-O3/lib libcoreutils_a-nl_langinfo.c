
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * rpl_nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(__item);
  return pcVar1;
}


