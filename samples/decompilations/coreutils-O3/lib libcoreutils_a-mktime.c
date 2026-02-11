
tm * ranged_convert(char param_1,long *param_2,tm *param_3)

{
  int *piVar1;
  tm *ptVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int unaff_R15D;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  char *local_70;
  long local_68;
  tm *local_60;
  long local_48;
  long local_40;
  
  lVar5 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = lVar5;
  if (param_1 == '\0') {
    local_60 = gmtime_r(&local_48,param_3);
  }
  else {
    local_60 = localtime_r(&local_48,param_3);
  }
  if (local_60 == (tm *)0x0) {
    piVar1 = __errno_location();
    if (((*piVar1 == 0x4b) && (lVar4 = (lVar5 >> 1) + (ulong)((uint)lVar5 & 1), lVar5 != lVar4)) &&
       (lVar4 != 0)) {
      lVar3 = 0;
      local_88 = (undefined1  [16])0x0;
      local_98 = ZEXT416(0xffffffff);
      if (param_1 == '\0') {
        do {
          local_48 = lVar4;
          ptVar2 = gmtime_r(&local_48,param_3);
          if (ptVar2 == (tm *)0x0) {
            lVar5 = lVar4;
            if (*piVar1 != 0x4b) goto LAB_0010005a;
          }
          else {
            local_68 = param_3->tm_gmtoff;
            local_98._0_4_ = param_3->tm_sec;
            local_98._4_4_ = param_3->tm_min;
            local_98._8_4_ = param_3->tm_hour;
            local_98._12_4_ = param_3->tm_mday;
            local_88._0_4_ = param_3->tm_mon;
            local_88._4_4_ = param_3->tm_year;
            local_88._8_4_ = param_3->tm_wday;
            local_88._12_4_ = param_3->tm_yday;
            unaff_R15D = param_3->tm_isdst;
            local_70 = param_3->tm_zone;
            lVar3 = lVar4;
          }
          lVar4 = (lVar3 >> 1) + (lVar5 >> 1) + (ulong)(((uint)lVar5 | (uint)lVar3) & 1);
        } while ((lVar3 != lVar4) && (lVar5 != lVar4));
      }
      else {
        do {
          local_48 = lVar4;
          ptVar2 = localtime_r(&local_48,param_3);
          if (ptVar2 == (tm *)0x0) {
            lVar5 = lVar4;
            if (*piVar1 != 0x4b) goto LAB_0010005a;
          }
          else {
            local_68 = param_3->tm_gmtoff;
            local_98._0_4_ = param_3->tm_sec;
            local_98._4_4_ = param_3->tm_min;
            local_98._8_4_ = param_3->tm_hour;
            local_98._12_4_ = param_3->tm_mday;
            local_88._0_4_ = param_3->tm_mon;
            local_88._4_4_ = param_3->tm_year;
            local_88._8_4_ = param_3->tm_wday;
            local_88._12_4_ = param_3->tm_yday;
            unaff_R15D = param_3->tm_isdst;
            local_70 = param_3->tm_zone;
            lVar3 = lVar4;
          }
          lVar4 = (lVar3 >> 1) + (lVar5 >> 1) + (ulong)(((uint)lVar3 | (uint)lVar5) & 1);
        } while ((lVar4 != lVar3) && (lVar4 != lVar5));
      }
      if (-1 < (int)local_98._0_4_) {
        *param_2 = lVar3;
        param_3->tm_isdst = unaff_R15D;
        param_3->tm_gmtoff = local_68;
        param_3->tm_sec = local_98._0_4_;
        param_3->tm_min = local_98._4_4_;
        param_3->tm_hour = local_98._8_4_;
        param_3->tm_mday = local_98._12_4_;
        param_3->tm_zone = local_70;
        param_3->tm_mon = local_88._0_4_;
        param_3->tm_year = local_88._4_4_;
        param_3->tm_wday = local_88._8_4_;
        param_3->tm_yday = local_88._12_4_;
        local_60 = param_3;
      }
    }
  }
  else {
    *param_2 = lVar5;
  }
LAB_0010005a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long mktime_internal(int *param_1,char param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  tm *ptVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  tm *local_140;
  long local_d0;
  long local_c8;
  long local_c0;
  tm local_b8;
  undefined8 local_78;
  int local_70;
  uint local_64;
  int local_5c;
  int local_58;
  long local_40;
  
  uVar2 = param_1[8];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *param_1;
  uVar14 = 0;
  iVar18 = param_1[4] % 0xc;
  uVar4 = iVar18 >> 0x1f;
  uVar1 = (long)(int)(param_1[4] / 0xc + uVar4) + (long)param_1[5];
  if (((uVar1 & 3) == 0) &&
     (uVar14 = 1,
     (uVar1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar1 * -0x70a3d70a3d70a3d7 << 0x3e) <
     0x28f5c28f5c28f5d)) {
    uVar14 = (ulong)(((int)((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar1),8) +
                                  uVar1) >> 6) - (int)((long)uVar1 >> 0x3f) & 3U) == 1);
  }
  lVar12 = (long)param_1[2];
  lVar15 = (long)param_1[1];
  lVar8 = (long)(int)(*(ushort *)
                       (__mon_yday + ((long)(int)((uVar4 & 0xc) + iVar18) + uVar14 * 0xd) * 2) - 1)
          + (long)param_1[3];
  iVar17 = 0xc;
  local_140._0_4_ = (int)*param_3;
  iVar13 = -(int)local_140;
  iVar22 = ((int)((long)uVar1 >> 2) + 0x1db) - (uint)((uVar1 & 3) == 0);
  iVar19 = (iVar22 - (iVar22 >> 0x1f)) / 0x19 + (iVar22 >> 0x1f);
  iVar21 = iVar19 >> 2;
  iVar18 = 0x3b;
  if (iVar3 < 0x3c) {
    iVar18 = iVar3;
  }
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  lVar23 = (long)iVar18;
  lVar5 = (lVar23 + (lVar15 + (lVar12 + ((long)((iVar22 - iVar19) + -0x1dd + iVar21) +
                                        (uVar1 - 0x46) * 0x16d + lVar8) * 0x18) * 0x3c) * 0x3c) -
          (long)iVar13;
  local_d0 = lVar5;
  if ((int)uVar2 < 0) {
    bVar25 = false;
    lVar6 = lVar5;
    lVar24 = lVar5;
    while( true ) {
      lVar16 = lVar6;
      local_140 = &local_b8;
      lVar6 = ranged_convert(param_2,&local_d0,local_140);
      if (lVar6 == 0) break;
      iVar20 = ((int)((long)local_b8.tm_year >> 2) + 0x1db) - (uint)((local_b8.tm_year & 3U) == 0);
      iVar18 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
      lVar11 = (lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)local_b8.tm_year) * 0x16d + lVar8)
                                                - (long)local_b8.tm_yday) +
                                               (long)(((iVar22 - iVar20) - (iVar19 - iVar18)) +
                                                     (iVar21 - (iVar18 >> 2)))) * 0x18) -
                                    (long)local_b8.tm_hour) * 0x3c) - (long)local_b8.tm_min) * 0x3c)
               - (long)local_b8.tm_sec;
      lVar6 = local_d0;
      if ((lVar11 == 0) ||
         (((lVar24 == local_d0 && (lVar16 != local_d0)) &&
          ((local_b8.tm_isdst < 0 || (bVar25 <= (local_b8.tm_isdst != 0U))))))) goto LAB_001005ed;
      iVar17 = iVar17 + -1;
      if (iVar17 == 0) goto LAB_001006a8;
      bVar25 = local_b8.tm_isdst != 0;
      lVar24 = lVar16;
      local_d0 = lVar11 + local_d0;
    }
  }
  else {
    lVar6 = lVar5;
    lVar24 = lVar5;
    while (lVar11 = lVar6, lVar6 = ranged_convert(param_2,&local_d0,&local_b8), lVar16 = local_d0,
          lVar6 != 0) {
      iVar20 = ((int)((long)local_b8.tm_year >> 2) + 0x1db) - (uint)((local_b8.tm_year & 3U) == 0);
      iVar18 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
      lVar7 = (lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)local_b8.tm_year) * 0x16d + lVar8) -
                                               (long)local_b8.tm_yday) +
                                              (long)(((iVar22 - iVar20) - (iVar19 - iVar18)) +
                                                    (iVar21 - (iVar18 >> 2)))) * 0x18) -
                                   (long)local_b8.tm_hour) * 0x3c) - (long)local_b8.tm_min) * 0x3c)
              - (long)local_b8.tm_sec;
      lVar6 = lVar16;
      if (lVar7 == 0) {
        bVar25 = uVar2 == 0;
        if ((bVar25 == (local_b8.tm_isdst == 0U)) || ((int)(local_b8.tm_isdst | uVar2) < 0))
        goto LAB_001005ed;
        if (param_2 == '\0') {
          iVar18 = 0x92c70;
          goto LAB_0010095e;
        }
        iVar18 = 0x92c70;
        goto LAB_00100b16;
      }
      if (((local_d0 != lVar11) && (local_d0 == lVar24)) &&
         ((local_b8.tm_isdst < 0 || ((local_b8.tm_isdst != 0U) != (uVar2 != 0)))))
      goto LAB_001005ed;
      iVar17 = iVar17 + -1;
      if (iVar17 == 0) goto LAB_001006a8;
      lVar6 = local_d0;
      lVar24 = lVar11;
      local_d0 = lVar7 + local_d0;
    }
  }
  goto LAB_001006b3;
  while( true ) {
    local_c8 = iVar18 + lVar16;
    if (!SCARRY8((long)iVar18,lVar16)) {
      lVar6 = ranged_convert(1,&local_c8,&local_78);
      if (lVar6 == 0) goto LAB_001006b3;
      if (((local_58 == 0) == bVar25) || (local_58 < 0)) {
        iVar20 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar17 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
        lVar6 = ((lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar8) -
                                                  (long)local_5c) +
                                                 (long)(((iVar22 - iVar20) - (iVar19 - iVar17)) +
                                                       (iVar21 - (iVar17 >> 2)))) * 0x18) -
                                      (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                (long)(int)local_78) + local_c8;
        local_c0 = lVar6;
        ptVar9 = localtime_r(&local_c0,local_140);
        if (ptVar9 != (tm *)0x0) break;
        piVar10 = __errno_location();
        if (*piVar10 != 0x4b) goto LAB_001006b3;
      }
    }
    iVar18 = iVar18 + 0x92c70;
    lVar6 = lVar16;
    if (iVar18 == 0x1ef5fa0) break;
LAB_00100b16:
    local_140 = &local_b8;
    local_c8 = -iVar18 + lVar16;
    if (!SCARRY8((long)-iVar18,lVar16)) {
      lVar6 = ranged_convert(1,&local_c8,&local_78);
      if (lVar6 == 0) goto LAB_001006b3;
      if (((local_58 == 0) == bVar25) || (local_58 < 0)) {
        iVar20 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar17 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
        lVar6 = ((lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar8) -
                                                  (long)local_5c) +
                                                 (long)(((iVar22 - iVar20) - (iVar19 - iVar17)) +
                                                       (iVar21 - (iVar17 >> 2)))) * 0x18) -
                                      (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                (long)(int)local_78) + local_c8;
        local_c0 = lVar6;
        ptVar9 = localtime_r(&local_c0,local_140);
        if (ptVar9 != (tm *)0x0) break;
        piVar10 = __errno_location();
        if (*piVar10 != 0x4b) goto LAB_001006b3;
      }
    }
  }
  goto LAB_001005ed;
  while( true ) {
    local_140 = &local_b8;
    local_c8 = iVar18 + lVar16;
    if (!SCARRY8((long)iVar18,lVar16)) {
      lVar6 = ranged_convert(0,&local_c8,&local_78);
      if (lVar6 == 0) goto LAB_001006b3;
      if (((local_58 == 0) == bVar25) || (local_58 < 0)) {
        iVar20 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar17 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
        lVar6 = ((lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar8) -
                                                  (long)local_5c) +
                                                 (long)(((iVar22 - iVar20) - (iVar19 - iVar17)) +
                                                       (iVar21 - (iVar17 >> 2)))) * 0x18) -
                                      (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                (long)(int)local_78) + local_c8;
        local_c0 = lVar6;
        ptVar9 = gmtime_r(&local_c0,local_140);
        if (ptVar9 != (tm *)0x0) break;
        piVar10 = __errno_location();
        if (*piVar10 != 0x4b) goto LAB_001006b3;
      }
    }
    iVar18 = iVar18 + 0x92c70;
    lVar6 = lVar16;
    if (iVar18 == 0x1ef5fa0) break;
LAB_0010095e:
    local_140 = &local_b8;
    local_c8 = -iVar18 + lVar16;
    if (!SCARRY8((long)-iVar18,lVar16)) {
      lVar6 = ranged_convert(0,&local_c8,&local_78);
      if (lVar6 == 0) goto LAB_001006b3;
      if (((local_58 == 0) == bVar25) || (local_58 < 0)) {
        iVar20 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar17 = (iVar20 - (iVar20 >> 0x1f)) / 0x19 + (iVar20 >> 0x1f);
        lVar6 = ((lVar23 + ((lVar15 + ((lVar12 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar8) -
                                                  (long)local_5c) +
                                                 (long)(((iVar22 - iVar20) - (iVar19 - iVar17)) +
                                                       (iVar21 - (iVar17 >> 2)))) * 0x18) -
                                      (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                (long)(int)local_78) + local_c8;
        local_c0 = lVar6;
        ptVar9 = gmtime_r(&local_c0,local_140);
        if (ptVar9 != (tm *)0x0) break;
        piVar10 = __errno_location();
        if (*piVar10 != 0x4b) goto LAB_001006b3;
      }
    }
  }
LAB_001005ed:
  local_140 = &local_b8;
  *param_3 = lVar6 - (iVar13 + lVar5);
  if (local_b8.tm_sec == iVar3) {
LAB_0010066a:
    *(char **)(param_1 + 0xc) = local_b8.tm_zone;
    *(ulong *)param_1 = CONCAT44(local_b8.tm_min,local_b8.tm_sec);
    *(ulong *)(param_1 + 2) = CONCAT44(local_b8.tm_mday,local_b8.tm_hour);
    *(ulong *)(param_1 + 4) = CONCAT44(local_b8.tm_year,local_b8.tm_mon);
    *(ulong *)(param_1 + 6) = CONCAT44(local_b8.tm_yday,local_b8.tm_wday);
    *(ulong *)(param_1 + 8) = CONCAT44(local_b8._36_4_,local_b8.tm_isdst);
    *(long *)(param_1 + 10) = local_b8.tm_gmtoff;
  }
  else {
    lVar8 = (long)iVar3 + ((ulong)(iVar3 < 1 && local_b8.tm_sec == 0x3c) - lVar23);
    bVar25 = SCARRY8(lVar8,lVar6);
    lVar6 = lVar8 + lVar6;
    local_d0 = lVar6;
    if (bVar25) {
LAB_001006a8:
      piVar10 = __errno_location();
      *piVar10 = 0x4b;
    }
    else {
      local_78 = lVar6;
      if (param_2 == '\0') {
        ptVar9 = gmtime_r(&local_78,local_140);
      }
      else {
        ptVar9 = localtime_r(&local_78,local_140);
      }
      if (ptVar9 != (tm *)0x0) goto LAB_0010066a;
    }
LAB_001006b3:
    lVar6 = -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


