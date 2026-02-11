
void randint_new(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)xmalloc(0x18);
  *puVar1 = param_1;
  *(undefined1 (*) [16])(puVar1 + 1) = (undefined1  [16])0x0;
  return;
}



undefined8 randint_all_new(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = randread_new();
  if (lVar1 != 0) {
    uVar2 = randint_new(lVar1);
    return uVar2;
  }
  return 0;
}



undefined8 randint_get_source(undefined8 *param_1)

{
  return *param_1;
}



ulong randint_genmax(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  byte local_48 [8];
  long local_40;
  
  uVar1 = param_2 + 1;
  uVar8 = param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *param_1;
  uVar9 = param_1[1];
  do {
    if (param_2 <= uVar8) {
      if (uVar8 != param_2) goto LAB_001000a1;
LAB_0010012f:
      *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
      uVar4 = uVar9;
      goto LAB_00100138;
    }
    lVar7 = 0;
    uVar4 = uVar8;
    do {
      lVar7 = lVar7 + 1;
      uVar4 = uVar4 * 0x100 + 0xff;
    } while (uVar4 < param_2);
    randread(uVar3,local_48,lVar7);
    pbVar5 = local_48;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar8 = uVar8 * 0x100 + 0xff;
      uVar9 = uVar9 * 0x100 + (ulong)bVar2;
    } while (uVar8 < param_2);
    if (uVar8 == param_2) goto LAB_0010012f;
LAB_001000a1:
    uVar6 = (uVar8 - param_2) % uVar1;
    uVar4 = uVar9 % uVar1;
    if (uVar9 <= uVar8 - uVar6) {
      param_1[1] = uVar9 / uVar1;
      param_1[2] = (uVar8 - param_2) / uVar1;
LAB_00100138:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar8 = uVar6 - 1;
    uVar9 = uVar4;
  } while( true );
}



void randint_free(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}



undefined4 randint_all_free(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = randread_free(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  randint_free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


