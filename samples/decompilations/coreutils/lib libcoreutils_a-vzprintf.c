
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

off64_t vzprintf(char *format,__va_list_tag *args)

{
  off64_t oVar1;
  
  oVar1 = vfzprintf(_stdout,format,args);
  return oVar1;
}


