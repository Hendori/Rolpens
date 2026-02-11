
long ydhms_diff(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
               int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ((int)((long)param_1 >> 2) + 0x1db) - (uint)((param_1 & 3) == 0);
  iVar4 = ((int)((long)(int)param_6 >> 2) + 0x1db) - (uint)((param_6 & 3) == 0);
  iVar3 = (iVar1 - (iVar1 >> 0x1f)) / 0x19 + (iVar1 >> 0x1f);
  iVar2 = (iVar4 - (iVar4 >> 0x1f)) / 0x19 + (iVar4 >> 0x1f);
  return ((long)param_5 +
         (((long)param_4 +
          (((long)param_3 +
           ((long)(((iVar1 - iVar4) - (iVar3 - iVar2)) + ((iVar3 >> 2) - (iVar2 >> 2))) +
           (((param_1 - (long)(int)param_6) * 0x16d + param_2) - (long)param_7)) * 0x18) -
          (long)param_8) * 0x3c) - (long)param_9) * 0x3c) - (long)param_10;
}



tm * ranged_convert(char param_1,long *param_2,tm *param_3)

{
  int *piVar1;
  tm *ptVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  int local_74;
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
      do {
        local_48 = lVar4;
        if (param_1 == '\0') {
          ptVar2 = gmtime_r(&local_48,param_3);
          if (ptVar2 == (tm *)0x0) goto LAB_00100268;
LAB_001001f2:
          local_74 = param_3->tm_isdst;
          local_98._0_4_ = param_3->tm_sec;
          local_98._4_4_ = param_3->tm_min;
          local_98._8_4_ = param_3->tm_hour;
          local_98._12_4_ = param_3->tm_mday;
          local_88._0_4_ = param_3->tm_mon;
          local_88._4_4_ = param_3->tm_year;
          local_88._8_4_ = param_3->tm_wday;
          local_88._12_4_ = param_3->tm_yday;
          local_68 = param_3->tm_gmtoff;
          local_70 = param_3->tm_zone;
          lVar3 = lVar4;
        }
        else {
          ptVar2 = localtime_r(&local_48,param_3);
          if (ptVar2 != (tm *)0x0) goto LAB_001001f2;
LAB_00100268:
          lVar5 = lVar4;
          if (*piVar1 != 0x4b) goto LAB_0010015a;
        }
        lVar4 = (lVar3 >> 1) + (lVar5 >> 1) + (ulong)(((uint)lVar3 | (uint)lVar5) & 1);
      } while ((lVar4 != lVar3) && (lVar4 != lVar5));
      if (-1 < (int)local_98._0_4_) {
        *param_2 = lVar3;
        param_3->tm_sec = local_98._0_4_;
        param_3->tm_min = local_98._4_4_;
        param_3->tm_hour = local_98._8_4_;
        param_3->tm_mday = local_98._12_4_;
        param_3->tm_isdst = local_74;
        param_3->tm_mon = local_88._0_4_;
        param_3->tm_year = local_88._4_4_;
        param_3->tm_wday = local_88._8_4_;
        param_3->tm_yday = local_88._12_4_;
        param_3->tm_gmtoff = local_68;
        param_3->tm_zone = local_70;
        local_60 = param_3;
      }
    }
  }
  else {
    *param_2 = lVar5;
  }
LAB_0010015a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mktime_internal(int *param_1,char param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  tm *ptVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_138;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  tm local_b8;
  ulong local_78;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_5c;
  int local_58;
  long local_40;
  
  iVar2 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *param_1;
  iVar4 = param_1[2];
  uVar5 = param_1[8];
  uVar14 = 0;
  iVar13 = param_1[4] % 0xc;
  uVar6 = iVar13 >> 0x1f;
  uVar1 = (long)(int)(param_1[4] / 0xc + uVar6) + (long)param_1[5];
  if (((uVar1 & 3) == 0) &&
     (uVar14 = 1,
     (uVar1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar1 * -0x70a3d70a3d70a3d7 << 0x3e) <
     0x28f5c28f5c28f5d)) {
    uVar14 = (ulong)(((int)((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar1),8) +
                                  uVar1) >> 6) - (int)((long)uVar1 >> 0x3f) & 3U) == 1);
  }
  lVar9 = (long)(int)(*(ushort *)
                       (__mon_yday + ((long)(int)((uVar6 & 0xc) + iVar13) + uVar14 * 0xd) * 2) - 1)
          + (long)param_1[3];
  iVar13 = 0x3b;
  if (iVar3 < 0x3c) {
    iVar13 = iVar3;
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  local_138 = (int)*param_3;
  uVar7 = ydhms_diff(uVar1,lVar9,iVar4,iVar2,iVar13,0x46,0,0,0,-local_138);
  iVar17 = 0xc;
  bVar21 = false;
  uVar14 = uVar7;
  uVar16 = uVar7;
  local_d0 = uVar7;
  while( true ) {
    uVar15 = uVar14;
    lVar8 = ranged_convert(param_2,&local_d0,&local_b8);
    iVar19 = local_b8.tm_sec;
    if (lVar8 == 0) goto LAB_00100643;
    lVar8 = ydhms_diff(uVar1,lVar9,iVar4,iVar2,iVar13,local_b8.tm_year,local_b8.tm_yday,
                       local_b8.tm_hour,local_b8.tm_min,local_b8.tm_sec);
    uVar14 = local_d0;
    uVar10 = uVar14;
    if (lVar8 == 0) break;
    if ((uVar15 != local_d0) && (uVar16 == local_d0)) {
      if (local_b8.tm_isdst < 0) goto LAB_0010055f;
      if ((int)uVar5 < 0) {
        if (bVar21 <= (local_b8.tm_isdst != 0U)) goto LAB_0010055f;
      }
      else if ((uVar5 != 0) != (local_b8.tm_isdst != 0U)) goto LAB_0010055f;
    }
    if (iVar17 == 1) goto LAB_00100638;
    iVar17 = iVar17 + -1;
    bVar21 = local_b8.tm_isdst != 0;
    uVar16 = uVar15;
    local_d0 = lVar8 + local_d0;
  }
  if (((local_b8.tm_isdst == 0U) != (uVar5 == 0)) && (-1 < (int)(local_b8.tm_isdst | uVar5))) {
    iVar17 = 0x92c70;
    do {
      iVar20 = 2;
      iVar18 = -iVar17;
      local_c8 = (long)iVar18 + uVar14;
      if (!SCARRY8((long)iVar18,uVar14)) goto LAB_00100764;
LAB_00100741:
      if (iVar20 != 1) {
        while( true ) {
          iVar18 = iVar18 + iVar17 * 2;
          iVar20 = 1;
          local_c8 = (long)iVar18 + uVar14;
          if (SCARRY8((long)iVar18,uVar14)) break;
LAB_00100764:
          lVar8 = ranged_convert(param_2,&local_c8,&local_78);
          if (lVar8 == 0) goto LAB_00100643;
          if (((local_58 == 0) != (uVar5 == 0)) && (-1 < local_58)) break;
          lVar8 = ydhms_diff(uVar1,lVar9,iVar4,iVar2,iVar13,local_64,local_5c,local_70,
                             local_78 >> 0x20,local_78 & 0xffffffff);
          uVar10 = lVar8 + local_c8;
          local_c0 = uVar10;
          if (param_2 == '\0') {
            ptVar11 = gmtime_r((time_t *)&local_c0,&local_b8);
          }
          else {
            ptVar11 = localtime_r((time_t *)&local_c0,&local_b8);
          }
          iVar19 = local_b8.tm_sec;
          if (ptVar11 != (tm *)0x0) goto LAB_0010055f;
          piVar12 = __errno_location();
          if (*piVar12 != 0x4b) goto LAB_00100643;
          if (iVar20 == 1) goto LAB_00100840;
        }
        goto LAB_00100741;
      }
LAB_00100840:
      iVar17 = iVar17 + 0x92c70;
      uVar10 = uVar14;
      iVar19 = local_b8.tm_sec;
    } while (iVar17 != 0x1ef5fa0);
  }
LAB_0010055f:
  *param_3 = uVar10 - (uVar7 + (long)-local_138);
  if (iVar3 == iVar19) {
LAB_001005e7:
    *(char **)(param_1 + 0xc) = local_b8.tm_zone;
    *(ulong *)param_1 = CONCAT44(local_b8.tm_min,local_b8.tm_sec);
    *(ulong *)(param_1 + 2) = CONCAT44(local_b8.tm_mday,local_b8.tm_hour);
    *(ulong *)(param_1 + 4) = CONCAT44(local_b8.tm_year,local_b8.tm_mon);
    *(ulong *)(param_1 + 6) = CONCAT44(local_b8.tm_yday,local_b8.tm_wday);
    *(ulong *)(param_1 + 8) = CONCAT44(local_b8._36_4_,local_b8.tm_isdst);
    *(long *)(param_1 + 10) = local_b8.tm_gmtoff;
  }
  else {
    lVar9 = (long)iVar3 + ((ulong)(iVar19 == 0x3c && iVar3 < 1) - (long)iVar13);
    bVar21 = SCARRY8(lVar9,uVar10);
    uVar10 = lVar9 + uVar10;
    local_d0 = uVar10;
    if (bVar21) {
LAB_00100638:
      piVar12 = __errno_location();
      *piVar12 = 0x4b;
    }
    else {
      local_78 = uVar10;
      if (param_2 == '\0') {
        ptVar11 = gmtime_r((time_t *)&local_78,&local_b8);
      }
      else {
        ptVar11 = localtime_r((time_t *)&local_78,&local_b8);
      }
      if (ptVar11 != (tm *)0x0) goto LAB_001005e7;
    }
LAB_00100643:
    uVar10 = 0xffffffffffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


