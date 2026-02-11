
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void collate_error(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = dcgettext("gnulib","string comparison failed",5);
  error(0,param_1,&_LC2,uVar2);
  uVar2 = dcgettext("gnulib","Set LC_ALL=\'C\' to work around the problem.",5);
  error(0,0,&_LC2,uVar2);
  uVar1 = _exit_failure;
  uVar2 = quotearg_n_style_mem(1,8,param_4,param_5);
  uVar3 = quotearg_n_style_mem(0,8,param_2,param_3);
  uVar4 = dcgettext("gnulib","The strings compared were %s and %s.",5);
  error(uVar1,0,uVar4,uVar3,uVar2);
  return;
}



undefined4 xmemcoll(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = memcoll();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  collate_error(*piVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}



undefined4 xmemcoll0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = memcoll0();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  collate_error(*piVar2,param_1,param_2 + -1,param_3,param_4 + -1);
  return uVar1;
}


