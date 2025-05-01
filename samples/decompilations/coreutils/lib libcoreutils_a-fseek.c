
/* WARNING: Unknown calling convention */

int rpl_fseek(FILE *fp,long offset,int whence)

{
  int iVar1;
  
  iVar1 = rpl_fseeko();
  return iVar1;
}


