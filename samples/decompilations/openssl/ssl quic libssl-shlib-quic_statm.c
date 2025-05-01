
void ossl_statm_update_rtt(ulong *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    cVar1 = (char)param_1[4];
    param_3 = param_1[1];
  }
  else {
    cVar1 = (char)param_1[4];
    param_1[1] = param_3;
  }
  if (cVar1 == '\0') {
    param_1[2] = param_3;
    *param_1 = param_3;
    param_1[3] = param_3 >> 1;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  uVar6 = param_1[2];
  if (param_3 < uVar6) {
    param_1[2] = param_3;
    uVar6 = param_3;
    if (CARRY8(param_3,param_2)) goto LAB_00100044;
LAB_00100034:
    if ((param_3 <= uVar6 + param_2) && (param_3 < uVar6 + param_2)) goto LAB_00100044;
    if (param_3 < param_2) {
      param_3 = 0;
      goto LAB_00100044;
    }
  }
  else {
    if (!CARRY8(uVar6,param_2)) goto LAB_00100034;
    if (param_3 != 0xffffffffffffffff) goto LAB_00100044;
  }
  param_3 = param_3 - param_2;
LAB_00100044:
  uVar6 = *param_1;
  uVar5 = param_3 - uVar6;
  if (param_3 < uVar6) {
    uVar5 = uVar6 - param_3;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1[3];
  uVar4 = SUB168(ZEXT816(3) * auVar3,0);
  if (SUB168(ZEXT816(3) * auVar3,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  if (CARRY8(uVar4,uVar5)) {
    uVar5 = 0x3fffffffffffffff;
  }
  else {
    uVar5 = uVar4 + uVar5 >> 2;
  }
  param_1[3] = uVar5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  uVar6 = SUB168(auVar2 * ZEXT816(7),0);
  if (SUB168(auVar2 * ZEXT816(7),8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  if (CARRY8(param_3,uVar6)) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar6 = param_3 + uVar6 >> 3;
  }
  *param_1 = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_statm_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100198;
  uVar1 = __LC0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = _UNK_001001a8;
  param_1[2] = __LC1;
  param_1[3] = uVar1;
  return 1;
}



void ossl_statm_destroy(void)

{
  return;
}



void ossl_statm_get_rtt_info(undefined8 *param_1,undefined8 *param_2)

{
  param_2[3] = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = *param_1;
  param_2[2] = param_1[3];
  return;
}


