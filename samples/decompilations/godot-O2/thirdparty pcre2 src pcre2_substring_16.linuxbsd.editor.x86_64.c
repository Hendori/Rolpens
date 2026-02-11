
void pcre2_substring_free_16(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 + -0x18,*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



uint pcre2_substring_length_bynumber_16(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 == 0xfffffffe) {
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      if (*(short *)(param_1 + 0x62) == 0) {
        return 0xffffffca;
      }
      uVar4 = *(ulong *)(param_1 + 0x68);
      param_2 = 0;
      goto LAB_00100084;
    }
  }
  else {
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      if (*(ushort *)(param_1 + 0x62) <= param_2) {
        return 0xffffffca;
      }
      if ((uVar1 != 0) && (uVar1 <= param_2)) {
        return 0xffffffc9;
      }
      param_2 = param_2 * 2;
      uVar4 = *(ulong *)(param_1 + 0x68 + (ulong)param_2 * 8);
      goto LAB_00100084;
    }
    if (*(ushort *)(*(long *)(param_1 + 0x18) + 0x80) < param_2) {
      return 0xffffffcf;
    }
  }
  if (*(ushort *)(param_1 + 0x62) <= param_2) {
    return 0xffffffca;
  }
  param_2 = param_2 * 2;
  uVar4 = *(ulong *)(param_1 + 0x68 + (ulong)param_2 * 8);
  if (uVar4 == 0xffffffffffffffff) {
    return 0xffffffc9;
  }
LAB_00100084:
  uVar2 = *(ulong *)(param_1 + 0x68 + (ulong)(param_2 + 1) * 8);
  uVar5 = uVar4;
  if (uVar4 <= uVar2) {
    uVar5 = uVar2;
  }
  if (*(ulong *)(param_1 + 0x40) < uVar5) {
    return 0xffffffbd;
  }
  if (param_3 != (long *)0x0) {
    lVar3 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
      lVar3 = 0;
    }
    *param_3 = lVar3;
  }
  return 0;
}



undefined8
pcre2_substring_copy_bynumber_16(long param_1,undefined8 param_2,void *param_3,ulong *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  iVar2 = (int)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = pcre2_substring_length_bynumber_16(param_1,param_2,&local_28);
  if (-1 < (int)uVar1) {
    if (*param_4 < local_28 + 1) {
      uVar1 = 0xffffffd0;
    }
    else {
      memcpy(param_3,(void *)(*(long *)(param_1 + 0x20) +
                             *(long *)(param_1 + 0x68 + (ulong)(uint)(iVar2 * 2) * 8) * 2),
             local_28 * 2);
      *(undefined2 *)((long)param_3 + local_28 * 2) = 0;
      uVar1 = 0;
      *param_4 = local_28;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
pcre2_substring_get_bynumber_16(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = pcre2_substring_length_bynumber_16(param_1,param_2,&local_38);
  if (-1 < (int)uVar1) {
    lVar2 = _pcre2_memctl_malloc_16(local_38 * 0x10 + 0x28,param_1);
    if (lVar2 == 0) {
      uVar1 = 0xffffffd0;
    }
    else {
      pvVar3 = memcpy((void *)(lVar2 + 0x18),
                      (void *)(*(long *)(param_1 + 0x20) +
                              *(long *)(param_1 + 0x68 + (ulong)(uint)((int)param_2 * 2) * 8) * 2),
                      local_38 * 2);
      *(undefined2 *)((long)pvVar3 + local_38 * 2) = 0;
      uVar1 = 0;
      *param_3 = pvVar3;
      *param_4 = local_38;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint pcre2_substring_list_get_16(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  long *__dest;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *local_48;
  
  uVar11 = *(uint *)(param_1 + 100);
  if ((int)uVar11 < 0) {
    return uVar11;
  }
  if (uVar11 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x62);
    uVar11 = (uint)uVar1;
    lVar7 = 0x20;
    if (param_3 != (undefined8 *)0x0) {
      lVar7 = (ulong)uVar1 * 8 + 0x20;
    }
    iVar8 = 0;
    if (uVar1 == 0) goto LAB_00100310;
    iVar8 = (uint)uVar1 + (uint)uVar1;
    uVar11 = (uint)uVar1;
  }
  else {
    iVar8 = uVar11 * 2;
    lVar7 = 0x20;
    if (param_3 != (undefined8 *)0x0) {
      lVar7 = (long)(int)uVar11 * 8 + 0x20;
    }
  }
  puVar5 = (ulong *)(param_1 + 0x68);
  do {
    lVar7 = lVar7 + 10;
    if (*puVar5 < puVar5[1]) {
      lVar7 = lVar7 + (puVar5[1] - *puVar5) * 2;
    }
    puVar5 = puVar5 + 2;
  } while (puVar5 != (ulong *)(param_1 + 0x78 + (ulong)(iVar8 - 1U >> 1) * 0x10));
LAB_00100310:
  lVar7 = _pcre2_memctl_malloc_16(lVar7,param_1);
  if (lVar7 == 0) {
    uVar11 = 0xffffffd0;
  }
  else {
    local_48 = (undefined8 *)(lVar7 + 0x18);
    *param_2 = local_48;
    plVar3 = local_48 + (int)(uVar11 + 1);
    if (param_3 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      __dest = plVar3;
    }
    else {
      *param_3 = plVar3;
      __dest = plVar3 + (long)(int)(uVar11 + 1) + -1;
      plVar10 = plVar3;
    }
    if (iVar8 != 0) {
      puVar5 = (ulong *)(param_1 + 0x70);
      uVar6 = (ulong)(iVar8 - 1U >> 1);
      do {
        uVar2 = puVar5[-1];
        if (uVar2 < *puVar5) {
          lVar4 = *puVar5 - uVar2;
          plVar3 = (long *)memcpy(__dest,(void *)(*(long *)(param_1 + 0x20) + uVar2 * 2),lVar4 * 2);
          __dest = (long *)((long)plVar3 + lVar4 * 2);
        }
        else {
          lVar4 = 0;
          plVar3 = __dest;
        }
        puVar9 = local_48 + 1;
        *local_48 = plVar3;
        if (plVar10 != (long *)0x0) {
          *plVar10 = lVar4;
          plVar10 = plVar10 + 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined2 *)__dest = 0;
        __dest = (long *)((long)__dest + 2);
        local_48 = puVar9;
      } while ((undefined8 *)(lVar7 + 0x20 + uVar6 * 8) != puVar9);
      local_48 = (undefined8 *)(lVar7 + 0x20 + uVar6 * 8);
    }
    uVar11 = 0;
    *local_48 = 0;
  }
  return uVar11;
}



void pcre2_substring_list_free_16(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 + -0x18,*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



ulong pcre2_substring_nametable_scan_16
                (long param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_48;
  
  puVar1 = (ushort *)(param_1 + 0x88);
  uVar6 = 0;
  uVar4 = *(ushort *)(param_1 + 0x84);
  uVar10 = (ulong)uVar4;
  uVar7 = (uint)*(ushort *)(param_1 + 0x86);
  if (*(ushort *)(param_1 + 0x86) != 0) {
    do {
      while( true ) {
        uVar11 = (int)(uVar7 + (uVar6 & 0xffff)) >> 1;
        puVar2 = puVar1 + (int)(uVar11 * uVar4);
        iVar5 = _pcre2_strcmp_16(param_2,puVar2 + 1);
        if (iVar5 == 0) {
          puVar3 = puVar1 + (int)((*(ushort *)(param_1 + 0x86) - 1) * (uint)uVar4);
          puVar8 = puVar2;
          puVar9 = puVar2;
          if (puVar1 < puVar2) {
            goto LAB_001005ad;
          }
          if (puVar2 < puVar3) goto LAB_001005c8;
          if (param_3 == (ulong *)0x0) goto LAB_0010062f;
          goto LAB_00100608;
        }
        if (0 < iVar5) break;
        uVar7 = uVar11;
        if ((ushort)uVar11 <= (ushort)uVar6) {
          return 0xffffffcf;
        }
      }
      uVar6 = uVar11 + 1;
    } while ((ushort)uVar6 < (ushort)uVar7);
  }
  return 0xffffffcf;
  while (puVar8 = puVar8 + -(ulong)uVar4, puVar1 < puVar8) {
LAB_001005ad:
    iVar5 = _pcre2_strcmp_16(param_2,puVar8 + (1 - (ulong)uVar4));
    if (iVar5 != 0) break;
  }
  if (puVar2 < puVar3) {
LAB_001005c8:
    local_48 = (ulong)uVar4;
    do {
      iVar5 = _pcre2_strcmp_16(param_2,puVar9 + local_48 + 1);
      if (iVar5 != 0) break;
      puVar9 = puVar9 + local_48;
    } while (puVar9 < puVar3);
  }
  if (param_3 == (ulong *)0x0) {
    uVar10 = 0xffffffce;
    if (puVar8 == puVar9) {
LAB_0010062f:
      uVar10 = (ulong)*puVar2;
    }
  }
  else {
LAB_00100608:
    *param_3 = (ulong)puVar8;
    *param_4 = (ulong)puVar9;
  }
  return uVar10;
}



undefined8
pcre2_substring_copy_byname_16
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ushort *local_30;
  ushort *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar3 = 0xffffffd7;
  }
  else {
    uVar3 = pcre2_substring_nametable_scan_16
                      (*(undefined8 *)(param_1 + 0x18),param_2,&local_30,&local_28);
    iVar2 = (int)uVar3;
    if (-1 < iVar2) {
      if (local_28 < local_30) {
        uVar3 = 0xffffffca;
      }
      else {
        uVar3 = 0xffffffca;
        do {
          uVar1 = *local_30;
          if (uVar1 < *(ushort *)(param_1 + 0x62)) {
            if (*(long *)(param_1 + 0x68 + (ulong)((uint)uVar1 + (uint)uVar1) * 8) != -1) {
              if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                uVar3 = pcre2_substring_copy_bynumber_16(param_1,uVar1,param_3,param_4);
                return uVar3;
              }
              goto LAB_00100754;
            }
            uVar3 = 0xffffffc9;
          }
          local_30 = local_30 + iVar2;
        } while (local_30 <= local_28);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100754:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
pcre2_substring_get_byname_16(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ushort *local_30;
  ushort *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar3 = 0xffffffd7;
  }
  else {
    uVar3 = pcre2_substring_nametable_scan_16
                      (*(undefined8 *)(param_1 + 0x18),param_2,&local_30,&local_28);
    iVar2 = (int)uVar3;
    if (-1 < iVar2) {
      if (local_28 < local_30) {
        uVar3 = 0xffffffca;
      }
      else {
        uVar3 = 0xffffffca;
        do {
          uVar1 = *local_30;
          if (uVar1 < *(ushort *)(param_1 + 0x62)) {
            if (*(long *)(param_1 + 0x68 + (ulong)((uint)uVar1 + (uint)uVar1) * 8) != -1) {
              if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                uVar3 = pcre2_substring_get_bynumber_16(param_1,uVar1,param_3,param_4);
                return uVar3;
              }
              goto LAB_00100844;
            }
            uVar3 = 0xffffffc9;
          }
          local_30 = local_30 + iVar2;
        } while (local_30 <= local_28);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100844:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pcre2_substring_length_byname_16(long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ushort *local_30;
  ushort *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar3 = 0xffffffd7;
  }
  else {
    uVar3 = pcre2_substring_nametable_scan_16
                      (*(undefined8 *)(param_1 + 0x18),param_2,&local_30,&local_28);
    iVar2 = (int)uVar3;
    if (-1 < iVar2) {
      if (local_28 < local_30) {
        uVar3 = 0xffffffca;
      }
      else {
        uVar3 = 0xffffffca;
        do {
          uVar1 = *local_30;
          if (uVar1 < *(ushort *)(param_1 + 0x62)) {
            if (*(long *)(param_1 + 0x68 + (ulong)((uint)uVar1 + (uint)uVar1) * 8) != -1) {
              if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                uVar3 = pcre2_substring_length_bynumber_16(param_1,uVar1,param_3);
                return uVar3;
              }
              goto LAB_0010091f;
            }
            uVar3 = 0xffffffc9;
          }
          local_30 = local_30 + iVar2;
        } while (local_30 <= local_28);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0010091f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pcre2_substring_number_from_name_16(undefined8 param_1,undefined8 param_2)

{
  pcre2_substring_nametable_scan_16(param_1,param_2,0,0);
  return;
}


