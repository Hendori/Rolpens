
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
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  long local_40;
  
  uVar1 = param_2 + 1;
  uVar2 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = param_1[2];
  uVar7 = param_1[1];
  do {
    if (uVar6 < param_2) {
      lVar3 = 0;
      uVar5 = uVar6;
      do {
        lVar3 = lVar3 + 1;
        uVar5 = uVar5 * 0x100 + 0xff;
      } while (uVar5 < param_2);
      uVar6 = uVar6 * 0x100 + 0xff;
      randread(uVar2,&local_48,lVar3);
      uVar7 = uVar7 * 0x100 + (ulong)local_48;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_47;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_46;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_45;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_44;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_43;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = uVar6 * 0x100 + 0xff;
      uVar7 = uVar7 * 0x100 + (ulong)local_42;
      if (param_2 <= uVar6) goto LAB_00100098;
      uVar6 = 0xffffffffffffffff;
      uVar7 = uVar7 * 0x100 + (ulong)local_41;
      if (param_2 != 0xffffffffffffffff) goto LAB_001000a1;
LAB_00100200:
      *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
      uVar5 = uVar7;
      goto LAB_0010020a;
    }
LAB_00100098:
    if (uVar6 == param_2) goto LAB_00100200;
LAB_001000a1:
    uVar4 = (uVar6 - param_2) % uVar1;
    uVar5 = uVar7 % uVar1;
    if (uVar7 <= uVar6 - uVar4) {
      param_1[1] = uVar7 / uVar1;
      param_1[2] = (uVar6 - param_2) / uVar1;
LAB_0010020a:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar6 = uVar4 - 1;
    uVar7 = uVar5;
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


