
/* WARNING: Unknown calling convention */

long_int ydhms_diff(long_int year1,long_int yday1,int hour1,int min1,int sec1,int year0,int yday0,
                   int hour0,int min0,int sec0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ((int)(year1 >> 2) + 0x1db) - (uint)((year1 & 3U) == 0);
  iVar4 = ((int)((long)year0 >> 2) + 0x1db) - (uint)((year0 & 3U) == 0);
  iVar3 = (iVar1 - (iVar1 >> 0x1f)) / 0x19 + (iVar1 >> 0x1f);
  iVar2 = (iVar4 - (iVar4 >> 0x1f)) / 0x19 + (iVar4 >> 0x1f);
  return ((long)sec1 +
         (((long)min1 +
          (((long)hour1 +
           ((long)(((iVar1 - iVar4) - (iVar3 - iVar2)) + ((iVar3 >> 2) - (iVar2 >> 2))) +
           (((year1 - year0) * 0x16d + yday1) - (long)yday0)) * 0x18) - (long)hour0) * 0x3c) -
         (long)min0) * 0x3c) - (long)sec0;
}



/* WARNING: Unknown calling convention */

tm * ranged_convert(_Bool local,long_int *t,tm *tp)

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
  time_t x;
  long local_40;
  
  lVar5 = *t;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  x = lVar5;
  if (local) {
    local_60 = localtime_r(&x,(tm *)tp);
  }
  else {
    local_60 = gmtime_r(&x,(tm *)tp);
  }
  if (local_60 == (tm *)0x0) {
    piVar1 = __errno_location();
    if (((*piVar1 == 0x4b) && (lVar4 = (lVar5 >> 1) + (ulong)((uint)lVar5 & 1), lVar5 != lVar4)) &&
       (lVar4 != 0)) {
      lVar3 = 0;
      local_88 = (undefined1  [16])0x0;
      local_98 = ZEXT416(0xffffffff);
      do {
        x = lVar4;
        if (local) {
          ptVar2 = localtime_r(&x,(tm *)tp);
          if (ptVar2 != (tm *)0x0) goto LAB_001001f2;
LAB_00100268:
          lVar5 = lVar4;
          if (*piVar1 != 0x4b) goto LAB_0010015a;
        }
        else {
          ptVar2 = gmtime_r(&x,(tm *)tp);
          if (ptVar2 == (tm *)0x0) goto LAB_00100268;
LAB_001001f2:
          local_74 = tp->tm_isdst;
          local_98._0_4_ = tp->tm_sec;
          local_98._4_4_ = tp->tm_min;
          local_98._8_4_ = tp->tm_hour;
          local_98._12_4_ = tp->tm_mday;
          local_88._0_4_ = tp->tm_mon;
          local_88._4_4_ = tp->tm_year;
          local_88._8_4_ = tp->tm_wday;
          local_88._12_4_ = tp->tm_yday;
          local_68 = tp->tm_gmtoff;
          local_70 = tp->tm_zone;
          lVar3 = lVar4;
        }
        lVar4 = (lVar3 >> 1) + (lVar5 >> 1) + (ulong)(((uint)lVar3 | (uint)lVar5) & 1);
      } while ((lVar4 != lVar3) && (lVar4 != lVar5));
      if (-1 < (int)local_98._0_4_) {
        *t = lVar3;
        tp->tm_sec = local_98._0_4_;
        tp->tm_min = local_98._4_4_;
        tp->tm_hour = local_98._8_4_;
        tp->tm_mday = local_98._12_4_;
        tp->tm_isdst = local_74;
        tp->tm_mon = local_88._0_4_;
        tp->tm_year = local_88._4_4_;
        tp->tm_wday = local_88._8_4_;
        tp->tm_yday = local_88._12_4_;
        tp->tm_gmtoff = local_68;
        tp->tm_zone = local_70;
        local_60 = (tm *)tp;
      }
    }
  }
  else {
    *t = lVar5;
  }
LAB_0010015a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (tm *)local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

time_t mktime_internal(tm *tp,_Bool local,mktime_offset_t *offset)

{
  ulong year1;
  int min1;
  int iVar1;
  int hour1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long_int lVar5;
  long_int lVar6;
  tm *ptVar7;
  long_int lVar8;
  long lVar9;
  long lVar10;
  tm *ptVar11;
  int *piVar12;
  long_int lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_138;
  long_int t;
  long_int ot;
  time_t x;
  tm tm;
  tm otm;
  
  min1 = tp->tm_min;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = tp->tm_sec;
  hour1 = tp->tm_hour;
  uVar2 = tp->tm_isdst;
  uVar15 = 0;
  iVar14 = tp->tm_mon % 0xc;
  uVar4 = iVar14 >> 0x1f;
  year1 = (long)(int)(tp->tm_mon / 0xc + uVar4) + (long)tp->tm_year;
  if (((year1 & 3) == 0) &&
     (uVar15 = 1,
     (year1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | year1 * -0x70a3d70a3d70a3d7 << 0x3e) <
     0x28f5c28f5c28f5d)) {
    uVar15 = (ulong)(((int)((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)year1),8) +
                                  year1) >> 6) - (int)((long)year1 >> 0x3f) & 3U) == 1);
  }
  lVar9 = (long)(int)(__mon_yday[uVar15][(int)((uVar4 & 0xc) + iVar14)] - 1) + (long)tp->tm_mday;
  iVar14 = 0x3b;
  if (iVar1 < 0x3c) {
    iVar14 = iVar1;
  }
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  local_138 = (int)*offset;
  lVar6 = ydhms_diff(year1,lVar9,hour1,min1,iVar14,0x46,0,0,0,-local_138);
  iVar17 = 0xc;
  bVar21 = false;
  lVar5 = lVar6;
  lVar13 = lVar6;
  t = lVar6;
  while( true ) {
    lVar16 = lVar5;
    ptVar7 = ranged_convert(local,&t,&tm);
    iVar19 = tm.tm_sec;
    if (ptVar7 == (tm *)0x0) goto LAB_00100643;
    lVar8 = ydhms_diff(year1,lVar9,hour1,min1,iVar14,tm.tm_year,tm.tm_yday,tm.tm_hour,tm.tm_min,
                       tm.tm_sec);
    lVar5 = t;
    lVar10 = lVar5;
    if (lVar8 == 0) break;
    if ((lVar16 != t) && (lVar13 == t)) {
      if (tm.tm_isdst < 0) goto LAB_0010055f;
      if ((int)uVar2 < 0) {
        if (bVar21 <= (tm.tm_isdst != 0)) goto LAB_0010055f;
      }
      else if ((uVar2 != 0) != (tm.tm_isdst != 0)) goto LAB_0010055f;
    }
    if (iVar17 == 1) goto LAB_00100638;
    iVar17 = iVar17 + -1;
    bVar21 = tm.tm_isdst != 0;
    lVar13 = lVar16;
    t = lVar8 + t;
  }
  if (((tm.tm_isdst == 0) != (uVar2 == 0)) && (-1 < (int)(tm.tm_isdst | uVar2))) {
    iVar17 = 0x92c70;
    do {
      iVar20 = 2;
      iVar18 = -iVar17;
      ot = iVar18 + lVar5;
      if (!SCARRY8((long)iVar18,lVar5)) goto LAB_00100764;
LAB_00100741:
      if (iVar20 != 1) {
        while( true ) {
          iVar18 = iVar18 + iVar17 * 2;
          iVar20 = 1;
          ot = iVar18 + lVar5;
          if (SCARRY8((long)iVar18,lVar5)) break;
LAB_00100764:
          ptVar7 = ranged_convert(local,&ot,&otm);
          if (ptVar7 == (tm *)0x0) goto LAB_00100643;
          if (((otm.tm_isdst == 0) != (uVar2 == 0)) && (-1 < otm.tm_isdst)) break;
          lVar13 = ydhms_diff(year1,lVar9,hour1,min1,iVar14,otm.tm_year,otm.tm_yday,otm.tm_hour,
                              otm.tm_min,(int)otm._0_8_);
          lVar10 = lVar13 + ot;
          x = lVar10;
          if (local) {
            ptVar11 = localtime_r(&x,(tm *)&tm);
          }
          else {
            ptVar11 = gmtime_r(&x,(tm *)&tm);
          }
          iVar19 = tm.tm_sec;
          if (ptVar11 != (tm *)0x0) goto LAB_0010055f;
          piVar12 = __errno_location();
          if (*piVar12 != 0x4b) goto LAB_00100643;
          if (iVar20 == 1) goto LAB_00100840;
        }
        goto LAB_00100741;
      }
LAB_00100840:
      iVar17 = iVar17 + 0x92c70;
      lVar10 = lVar5;
      iVar19 = tm.tm_sec;
    } while (iVar17 != 0x1ef5fa0);
  }
LAB_0010055f:
  *offset = lVar10 - (lVar6 + -local_138);
  if (iVar1 == iVar19) {
LAB_001005e7:
    tp->tm_zone = tm.tm_zone;
    tp->tm_sec = (int)CONCAT44(tm.tm_min,tm.tm_sec);
    tp->tm_min = (int)(CONCAT44(tm.tm_min,tm.tm_sec) >> 0x20);
    tp->tm_hour = (int)CONCAT44(tm.tm_mday,tm.tm_hour);
    tp->tm_mday = (int)(CONCAT44(tm.tm_mday,tm.tm_hour) >> 0x20);
    tp->tm_mon = (int)CONCAT44(tm.tm_year,tm.tm_mon);
    tp->tm_year = (int)(CONCAT44(tm.tm_year,tm.tm_mon) >> 0x20);
    tp->tm_wday = (int)CONCAT44(tm.tm_yday,tm.tm_wday);
    tp->tm_yday = (int)(CONCAT44(tm.tm_yday,tm.tm_wday) >> 0x20);
    *(ulong *)&tp->tm_isdst = CONCAT44(tm._36_4_,tm.tm_isdst);
    tp->tm_gmtoff = tm.tm_gmtoff;
  }
  else {
    lVar9 = (long)iVar1 + ((ulong)(iVar19 == 0x3c && iVar1 < 1) - (long)iVar14);
    bVar21 = SCARRY8(lVar9,lVar10);
    lVar10 = lVar9 + lVar10;
    t = lVar10;
    if (bVar21) {
LAB_00100638:
      piVar12 = __errno_location();
      *piVar12 = 0x4b;
    }
    else {
      otm._0_8_ = lVar10;
      if (local) {
        ptVar11 = localtime_r((time_t *)&otm,(tm *)&tm);
      }
      else {
        ptVar11 = gmtime_r((time_t *)&otm,(tm *)&tm);
      }
      if (ptVar11 != (tm *)0x0) goto LAB_001005e7;
    }
LAB_00100643:
    lVar10 = -1;
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


