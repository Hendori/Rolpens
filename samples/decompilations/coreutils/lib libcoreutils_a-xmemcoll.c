
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void collate_error(int collation_errno,char *s1,size_t s1len,char *s2,size_t s2len)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = dcgettext("gnulib","string comparison failed",5);
  error(0,collation_errno,&_LC2,uVar2);
  uVar2 = dcgettext("gnulib","Set LC_ALL=\'C\' to work around the problem.",5);
  error(0,0,&_LC2,uVar2);
  uVar1 = _exit_failure;
  uVar2 = quotearg_n_style_mem(1,8,s2,s2len);
  uVar3 = quotearg_n_style_mem(0,8,s1,s1len);
  uVar4 = dcgettext("gnulib","The strings compared were %s and %s.",5);
  error(uVar1,0,uVar4,uVar3,uVar2);
  return;
}



/* WARNING: Unknown calling convention */

int xmemcoll(char *s1,size_t s1len,char *s2,size_t s2len)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = memcoll();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return iVar1;
  }
  collate_error(*piVar2,s1,s1len,s2,s2len);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int xmemcoll0(char *s1,size_t s1size,char *s2,size_t s2size)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = memcoll0();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return iVar1;
  }
  collate_error(*piVar2,s1,s1size - 1,s2,s2size - 1);
  return iVar1;
}


