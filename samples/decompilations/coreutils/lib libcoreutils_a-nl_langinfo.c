
/* WARNING: Unknown calling convention */

char * rpl_nl_langinfo(nl_item item)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(item);
  return pcVar1;
}


