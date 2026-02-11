
undefined1 * xstrcat(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 *local_60;
  ulong local_58;
  undefined8 *puStack_50;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = *param_2;
  puStack_50 = (undefined8 *)param_2[1];
  uVar8 = param_2[2];
  if (param_1 == 0) {
    puVar10 = (undefined1 *)xmalloc(1);
    local_60 = puVar10;
  }
  else {
    uVar9 = 0;
    lVar7 = param_1;
    do {
      uVar4 = local_58 & 0xffffffff;
      if ((uint)local_58 < 0x30) {
        local_58 = (ulong)((uint)local_58 + 8);
        puVar6 = (undefined8 *)(uVar4 + uVar8);
      }
      else {
        puVar6 = puStack_50;
        puStack_50 = puStack_50 + 1;
      }
      sVar3 = strlen((char *)*puVar6);
      bVar11 = CARRY8(uVar9,sVar3);
      uVar9 = uVar9 + sVar3;
      if (bVar11) {
        uVar9 = 0xffffffffffffffff;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (uVar9 == 0xffffffffffffffff) {
      xalloc_die();
      goto LAB_00100175;
    }
    uVar9 = uVar9 + 1;
    local_60 = (undefined1 *)xmalloc(uVar9);
    uVar8 = uVar9;
    puVar10 = local_60;
    do {
      uVar1 = (uint)*param_2;
      if (uVar1 < 0x30) {
        puVar6 = (undefined8 *)((ulong)uVar1 + param_2[2]);
        *(uint *)param_2 = uVar1 + 8;
      }
      else {
        puVar6 = (undefined8 *)param_2[1];
        param_2[1] = (ulong)(puVar6 + 1);
      }
      __s = (char *)*puVar6;
      sVar3 = strlen(__s);
      __memcpy_chk(puVar10,__s,sVar3,uVar8);
      uVar4 = uVar8;
      if (uVar8 <= uVar9) {
        uVar4 = uVar9;
      }
      uVar5 = (sVar3 + uVar4) - uVar8;
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
      puVar10 = puVar10 + sVar3;
      uVar8 = (uVar8 - (sVar3 + uVar4)) + uVar5;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *puVar10 = 0;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
LAB_00100175:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00100218:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = xstrcat();
        return uVar5;
      }
LAB_00100235:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((cVar1 != '%') || (param_1[lVar3 * 2 + 1] != 's')) {
      lVar3 = vaszprintf(&local_40,param_1,param_2);
      if (-1 < lVar3) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return local_40;
        }
        goto LAB_00100235;
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
      goto LAB_00100218;
    }
    lVar3 = lVar3 + 1;
    cVar1 = param_1[lVar3 * 2];
  } while( true );
}


