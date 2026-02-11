
ulong dev_info_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 dev_info_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



uint utimecmpat(int param_1,char *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  ulong local_150;
  undefined8 *local_148;
  uint local_128;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  timespec local_f8;
  ulong local_e8;
  long lStack_e0;
  stat local_d8;
  long local_40;
  
  uVar1 = param_3[0xb];
  uVar2 = *(ulong *)(param_4 + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar19 = uVar1 == uVar2;
  iVar17 = (int)*(undefined8 *)(param_4 + 0x60);
  param_5 = param_5 & 1;
  iVar16 = (int)param_3[0xc];
  uVar18 = uVar2;
  if (param_5 != 0) {
    bVar5 = iVar16 == iVar17 && bVar19;
    local_150 = (ulong)bVar5;
    if (bVar5) {
      param_5 = 0;
      goto LAB_00100174;
    }
    if ((long)uVar1 < (long)(uVar2 - 1)) {
LAB_001001a8:
      param_5 = 0xffffffff;
      goto LAB_00100174;
    }
    if ((long)uVar2 < (long)(uVar1 - 1)) goto LAB_00100174;
    if ((ht_1 == 0) && (ht_1 = hash_initialize(0x10,0,0x100000,dev_info_compare,&free), ht_1 == 0))
    {
LAB_001001fd:
      local_148 = &local_108;
      local_100 = 2000000000;
      local_fc = 0;
      iVar7 = 2000000000;
    }
    else {
      lVar4 = ht_1;
      puVar8 = new_dst_res_0;
      if (new_dst_res_0 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)malloc(0x10);
        new_dst_res_0 = puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar8 + 1) = 2000000000;
          *(undefined1 *)((long)puVar8 + 0xc) = 0;
          goto LAB_001000ca;
        }
LAB_00100658:
        local_108 = *param_3;
        local_148 = (undefined8 *)hash_lookup(ht_1,&local_108);
        if (local_148 == (undefined8 *)0x0) goto LAB_001001fd;
      }
      else {
LAB_001000ca:
        *puVar8 = *param_3;
        local_148 = (undefined8 *)hash_insert(lVar4);
        if (local_148 == (undefined8 *)0x0) {
          if (ht_1 == 0) goto LAB_001001fd;
          goto LAB_00100658;
        }
        if (new_dst_res_0 == local_148) {
          new_dst_res_0 = (undefined8 *)0x0;
        }
      }
      iVar7 = *(int *)(local_148 + 1);
      if (*(char *)((long)local_148 + 0xc) != '\0') {
        uVar18 = uVar2 & (long)(int)~(uint)(iVar7 == 2000000000);
        iVar17 = iVar17 - iVar17 % iVar7;
        bVar19 = uVar1 == uVar18;
        goto LAB_00100148;
      }
    }
    uVar3 = param_3[9];
    iVar9 = (int)param_3[10];
    iVar10 = iVar9 / 10;
    iVar6 = (int)param_3[0xe] / 10;
    iVar11 = iVar16 / 10;
    uVar12 = param_5;
    if (iVar16 % 10 == 0 && (iVar9 % 10 == 0 && (int)param_3[0xe] % 10 == 0)) {
      if ((iVar7 < 0xb) || (iVar14 = 8, iVar11 % 10 != 0 || (iVar10 % 10 != 0 || iVar6 % 10 != 0)))
      {
        local_128 = 10;
        uVar15 = 0xffffffffffffffff;
        *(undefined4 *)(local_148 + 1) = 10;
      }
      else {
        uVar13 = 10;
        do {
          uVar12 = uVar13 * 10;
          iVar10 = iVar10 / 10;
          iVar6 = iVar6 / 10;
          iVar11 = iVar11 / 10;
          local_128 = uVar12;
          if (iVar7 <= (int)uVar12) {
            local_150 = (ulong)(uVar13 == 200000000);
            *(uint *)(local_148 + 1) = uVar12;
            uVar15 = (ulong)(int)~(uint)(uVar13 == 200000000);
            uVar18 = uVar2 & uVar15;
            goto LAB_00100457;
          }
          if (iVar11 % 10 != 0 || (iVar10 % 10 != 0 || iVar6 % 10 != 0)) {
            local_150 = (ulong)(uVar13 == 200000000);
            *(uint *)(local_148 + 1) = uVar12;
            uVar15 = (ulong)(int)~(uint)(uVar13 == 200000000);
            uVar18 = uVar2 & uVar15;
            if (1 < (int)uVar12) goto LAB_00100457;
            iVar17 = iVar17 - iVar17 % (int)uVar12;
            bVar19 = uVar1 == uVar18;
            goto LAB_00100630;
          }
          iVar14 = iVar14 + -1;
          uVar13 = uVar12;
        } while (iVar14 != 0);
        if (((uVar3 | uVar1 | param_3[0xd]) & 1) == 0) {
          *(undefined4 *)(local_148 + 1) = 2000000000;
          uVar15 = 0xfffffffffffffffe;
          local_150 = 1;
          local_128 = 2000000000;
          uVar18 = uVar2 & 0xfffffffffffffffe;
        }
        else {
          *(undefined4 *)(local_148 + 1) = 1000000000;
          uVar15 = 0xffffffffffffffff;
          local_128 = 1000000000;
        }
      }
LAB_00100457:
      if (((long)uVar2 < (long)uVar1) || ((iVar17 <= iVar16 && (bVar19)))) goto LAB_00100174;
      if (((long)uVar1 < (long)uVar18) ||
         ((uVar1 == uVar18 && (iVar16 < iVar17 - iVar17 % (int)local_128)))) goto LAB_001001a8;
      local_e8 = local_150 | uVar1;
      lStack_e0 = (long)(int)(local_128 / 9 + iVar16);
      local_f8.tv_sec = uVar3;
      local_f8.tv_nsec = (long)iVar9;
      iVar7 = utimensat(param_1,param_2,&local_f8,0x100);
      if ((iVar7 != 0) ||
         ((iVar7 = fstatat(param_1,param_2,&local_d8,0x100),
          iVar7 != 0 || (iVar16 != local_d8.st_mtim.tv_nsec || local_d8.st_mtim.tv_sec != uVar1) &&
          (local_e8 = uVar1, lStack_e0 = (long)iVar16, utimensat(param_1,param_2,&local_f8,0x100),
          iVar7 != 0)))) {
        param_5 = 0xfffffffe;
        goto LAB_00100174;
      }
      iVar7 = (-((uint)local_d8.st_mtim.tv_sec & 1) & 1000000000) + (int)local_d8.st_mtim.tv_nsec;
      uVar12 = iVar7 * -0x33333333 + 0x19999998;
      if ((uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f) < 0x19999999) {
        if (local_128 == 10) {
          param_5 = 10;
          goto LAB_00100862;
        }
        iVar10 = 9;
        uVar12 = 10;
        do {
          iVar7 = iVar7 / 10;
          uVar13 = iVar7 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar13 >> 1 | (uint)((uVar13 & 1) != 0) << 0x1f)) {
            uVar15 = (ulong)(int)~(uint)(uVar12 == 2000000000);
            break;
          }
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) {
            uVar15 = 0xfffffffffffffffe;
            uVar12 = 2000000000;
            break;
          }
          uVar12 = uVar12 * 10;
        } while (uVar12 != local_128);
      }
      else {
LAB_00100862:
        uVar15 = 0xffffffffffffffff;
        uVar12 = param_5;
      }
      uVar18 = uVar2 & uVar15;
      iVar17 = iVar17 - iVar17 % (int)uVar12;
      bVar19 = uVar1 == uVar18;
    }
LAB_00100630:
    *(uint *)(local_148 + 1) = uVar12;
    *(undefined1 *)((long)local_148 + 0xc) = 1;
  }
LAB_00100148:
  param_5 = ((uint)(iVar17 < iVar16) - (uint)(iVar16 < iVar17) & -(uint)bVar19) +
            ((uint)((long)uVar18 < (long)uVar1) - (uint)((long)uVar1 < (long)uVar18));
LAB_00100174:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_5;
}



void utimecmp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  utimecmpat(0xffffff9c,param_1,param_2,param_3,param_4);
  return;
}


