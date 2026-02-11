
undefined1 * xstrcat(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 *local_60;
  uint local_58;
  undefined8 *puStack_50;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_50 = *(undefined8 **)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 4);
  if (param_1 == 0) {
    puVar12 = (undefined1 *)xmalloc(1);
    local_60 = puVar12;
LAB_001001a8:
    *puVar12 = 0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_60;
    }
  }
  else {
    local_58 = (uint)*(undefined8 *)param_2;
    uVar6 = 0;
    lVar10 = param_1;
    do {
      if (local_58 < 0x30) {
        uVar11 = local_58 + 8;
        puVar9 = (undefined8 *)((ulong)local_58 + lVar2);
      }
      else {
        puVar9 = puStack_50;
        uVar11 = local_58;
        puStack_50 = puStack_50 + 1;
      }
      sVar4 = strlen((char *)*puVar9);
      bVar13 = CARRY8(sVar4,uVar6);
      uVar5 = sVar4 + uVar6;
      uVar6 = 0xffffffffffffffff;
      if (!bVar13) {
        uVar6 = uVar5;
      }
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) goto LAB_001000be;
      bVar13 = local_58 < 0x30;
      local_58 = uVar11;
    } while (bVar13);
    do {
      sVar4 = strlen((char *)*puStack_50);
      bVar13 = CARRY8(sVar4,uVar6);
      uVar6 = sVar4 + uVar6;
      if (bVar13) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar10 = lVar10 + -1;
      puStack_50 = puStack_50 + 1;
    } while (lVar10 != 0);
LAB_001000be:
    if (uVar6 != 0xffffffffffffffff) {
      uVar6 = uVar6 + 1;
      local_60 = (undefined1 *)xmalloc(uVar6);
      uVar5 = uVar6;
      puVar12 = local_60;
LAB_001000df:
      uVar11 = *param_2;
      if (uVar11 < 0x30) goto LAB_001001f0;
      puVar9 = *(undefined8 **)(param_2 + 2);
      *(undefined8 **)(param_2 + 2) = puVar9 + 1;
      pcVar3 = (char *)*puVar9;
      sVar4 = strlen(pcVar3);
      __memcpy_chk(puVar12,pcVar3,sVar4,uVar5);
      uVar8 = uVar5;
      if (uVar5 <= uVar6) {
        uVar8 = uVar6;
      }
      uVar7 = (sVar4 + uVar8) - uVar5;
      if (uVar7 < uVar8) {
        uVar7 = uVar8;
      }
      puVar12 = puVar12 + sVar4;
      uVar7 = (uVar5 - (sVar4 + uVar8)) + uVar7;
      while (param_1 = param_1 + -1, param_1 != 0) {
        puVar9 = *(undefined8 **)(param_2 + 2);
        *(undefined8 **)(param_2 + 2) = puVar9 + 1;
        pcVar3 = (char *)*puVar9;
        sVar4 = strlen(pcVar3);
        __memcpy_chk(puVar12,pcVar3,sVar4,uVar7);
        uVar5 = uVar7;
        if (uVar7 <= uVar6) {
          uVar5 = uVar6;
        }
        uVar8 = (uVar5 + sVar4) - uVar7;
        if (uVar8 < uVar5) {
          uVar8 = uVar5;
        }
        puVar12 = puVar12 + sVar4;
        uVar7 = (uVar7 - (uVar5 + sVar4)) + uVar8;
      }
      goto LAB_001001a8;
    }
    xalloc_die();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001001f0:
  *param_2 = uVar11 + 8;
  pcVar3 = *(char **)((ulong)uVar11 + *(long *)(param_2 + 4));
  sVar4 = strlen(pcVar3);
  __memcpy_chk(puVar12,pcVar3,sVar4,uVar5);
  uVar8 = uVar5;
  if (uVar5 <= uVar6) {
    uVar8 = uVar6;
  }
  uVar7 = (sVar4 + uVar8) - uVar5;
  if (uVar7 < uVar8) {
    uVar7 = uVar8;
  }
  puVar12 = puVar12 + sVar4;
  uVar5 = (uVar5 - (sVar4 + uVar8)) + uVar7;
  param_1 = param_1 + -1;
  if (param_1 == 0) goto LAB_001001a8;
  goto LAB_001000df;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 xvasprintf(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  lVar3 = 0;
  do {
    if (cVar1 == '\0') {
LAB_00100328:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = xstrcat();
        return uVar5;
      }
LAB_00100345:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((cVar1 != '%') || (param_1[lVar3 * 2 + 1] != 's')) {
      lVar3 = vaszprintf(&local_40,param_1,param_2);
      if (-1 < lVar3) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return local_40;
        }
        goto LAB_00100345;
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (iVar2 != 0xc) {
        puVar6 = (undefined1 *)strerrorname_np(iVar2);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = local_38;
          __sprintf_chk(puVar6,2,0x14,&_LC0,iVar2);
        }
        __fprintf_chk(_stderr,2,"vasprintf failed! format=\"%s\", errno=%s\n",param_1,puVar6);
        rpl_fflush(_stderr);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      xalloc_die();
      goto LAB_00100328;
    }
    lVar3 = lVar3 + 1;
    cVar1 = param_1[lVar3 * 2];
  } while( true );
}


