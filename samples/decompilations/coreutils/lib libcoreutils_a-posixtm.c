
/* WARNING: Unknown calling convention */

_Bool year(tm *tm,int *digit_pair,idx_t n,uint syntax_bits)

{
  int iVar1;
  _Bool _Var2;
  tm *ptVar3;
  long in_FS_OFFSET;
  time_t now;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (n == 1) {
    iVar1 = *digit_pair;
    tm->tm_year = iVar1;
    if (iVar1 < 0x45) {
      if ((syntax_bits & 8) != 0) goto LAB_001000a0;
      tm->tm_year = iVar1 + 100;
    }
  }
  else if (n == 2) {
    if ((syntax_bits & 2) == 0) {
LAB_001000a0:
      _Var2 = false;
      goto LAB_0010003c;
    }
    tm->tm_year = *digit_pair * 100 + digit_pair[1] + -0x76c;
  }
  else {
    now = rpl_time(0);
    ptVar3 = localtime(&now);
    if (ptVar3 == (tm *)0x0) goto LAB_001000a0;
    tm->tm_year = ptVar3->tm_year;
  }
  _Var2 = true;
LAB_0010003c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool posixtime(time_t *p,char *s,uint syntax_bits)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Bool _Var7;
  size_t sVar8;
  char *pcVar9;
  size_t sVar10;
  time_t tVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined8 uVar16;
  byte local_e1;
  tm tm0;
  tm tm1;
  int aiStack_60 [2];
  int pair [6];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar8 = strlen(s);
  sVar10 = sVar8;
  if ((syntax_bits & 4) == 0) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = strchr(s,0x2e);
    if ((pcVar9 != (char *)0x0) && (sVar10 = (long)pcVar9 - (long)s, sVar8 - sVar10 != 3))
    goto LAB_00100120;
  }
  if ((sVar10 - 8 < 5) && (uVar12 = (ulong)((uint)sVar10 & 1), (sVar10 & 1) == 0)) {
    lVar13 = 0;
    do {
      if (9 < (int)s[lVar13] - 0x30U) goto LAB_00100120;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (long)sVar10);
    uVar15 = (long)sVar10 >> 1;
    do {
      pair[uVar12] = s[uVar12 * 2 + 1] + -0x30 + (s[uVar12 * 2] * 5 + -0xf0) * 2;
      uVar12 = uVar12 + 1;
    } while (uVar15 != uVar12);
    if ((syntax_bits & 1) == 0) {
      _Var7 = year(&tm0,pair,uVar15 - 4,syntax_bits);
      if (!_Var7) goto LAB_00100120;
      tm0.tm_mday = aiStack_60[uVar15 - 1];
      tm0.tm_mon = aiStack_60[uVar15 - 2] + -1;
      tm0.tm_hour = aiStack_60[uVar15];
      tm0.tm_min = pair[uVar15 - 1];
    }
    else {
      tm0.tm_mon = pair[0] + -1;
      tm0.tm_hour = pair[2];
      tm0.tm_min = pair[3];
      tm0.tm_mday = pair[1];
      _Var7 = year(&tm0,pair + 4,uVar15 - 4,syntax_bits);
      if (!_Var7) goto LAB_00100120;
    }
    iVar6 = tm0.tm_mon;
    iVar5 = tm0.tm_mday;
    if (pcVar9 == (char *)0x0) {
      iVar14 = 0;
    }
    else {
      if ((9 < (int)pcVar9[1] - 0x30U) || (9 < (int)pcVar9[2] - 0x30U)) goto LAB_00100120;
      iVar14 = pcVar9[2] + -0x30 + ((int)pcVar9[1] - 0x30U) * 10;
    }
    uVar2._4_4_ = tm0.tm_year;
    uVar2._0_4_ = tm0.tm_mon;
    iVar4 = tm0.tm_hour;
    local_e1 = 0;
    iVar3 = tm0.tm_min;
    uVar16._4_4_ = tm0.tm_mday;
    uVar16._0_4_ = tm0.tm_hour;
    while( true ) {
      tm1.tm_wday = -1;
      tm1.tm_min = iVar3;
      tm1.tm_sec = iVar14;
      tm1.tm_isdst = -1;
      tm1._8_8_ = uVar16;
      tm1._16_8_ = uVar2;
      tVar11 = mktime((tm *)&tm1);
      if (tm1.tm_wday < 0) break;
      if (((((tm1.tm_mday == iVar5 && tm1.tm_hour == iVar4) && tm1.tm_min == iVar3) &&
           tm1.tm_year == tm0.tm_year) && tm1.tm_mon == iVar6) && tm1.tm_sec == iVar14) {
        if (!SCARRY8(tVar11,(ulong)local_e1)) {
          *p = tVar11 + (ulong)local_e1;
          _Var7 = true;
          goto LAB_00100122;
        }
        break;
      }
      if (iVar14 != 0x3c) break;
      local_e1 = 1;
      iVar14 = 0x3b;
    }
  }
LAB_00100120:
  _Var7 = false;
LAB_00100122:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var7;
}


