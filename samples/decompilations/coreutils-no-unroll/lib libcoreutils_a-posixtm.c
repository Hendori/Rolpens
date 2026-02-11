
undefined8 posixtime(long *param_1,char *param_2,uint param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  time_t tVar5;
  undefined8 uVar6;
  tm *ptVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  byte local_a1;
  tm local_98;
  int aiStack_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(param_2);
  sVar4 = sVar2;
  if ((param_3 & 4) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = strchr(param_2,0x2e);
    if ((pcVar3 != (char *)0x0) && (sVar4 = (long)pcVar3 - (long)param_2, sVar2 - sVar4 != 3))
    goto LAB_00100070;
  }
  if ((4 < sVar4 - 8) || (uVar9 = (ulong)((uint)sVar4 & 1), (sVar4 & 1) != 0)) goto LAB_00100070;
  do {
    if (9 < (int)param_2[uVar9] - 0x30U) goto LAB_00100070;
    uVar9 = uVar9 + 1;
  } while ((long)uVar9 < (long)sVar4);
  lVar13 = (long)sVar4 >> 1;
  iVar8 = (int)param_2[1] + (*param_2 * 5 + -0xf0) * 2;
  iVar10 = iVar8 + -0x30;
  aiStack_60[2] = iVar10;
  iVar14 = param_2[3] + -0x30 + (param_2[2] * 5 + -0xf0) * 2;
  aiStack_60[3] = iVar14;
  iVar15 = param_2[5] + -0x30 + (param_2[4] * 5 + -0xf0) * 2;
  aiStack_60[4] = iVar15;
  iVar1 = param_2[7] + -0x30 + (param_2[6] * 5 + -0xf0) * 2;
  aiStack_60[5] = iVar1;
  if (lVar13 == 4) {
    if ((param_3 & 1) == 0) {
      local_98._0_8_ = rpl_time(0);
      ptVar7 = localtime((time_t *)&local_98);
      if (ptVar7 == (tm *)0x0) goto LAB_00100070;
      iVar10 = ptVar7->tm_year;
      goto LAB_001002d5;
    }
    iVar8 = iVar8 + -0x31;
    local_98._0_8_ = rpl_time(0);
    ptVar7 = localtime((time_t *)&local_98);
    if (ptVar7 == (tm *)0x0) goto LAB_00100070;
    iVar11 = ptVar7->tm_year;
  }
  else {
    iVar12 = (int)param_2[9] + (param_2[8] * 5 + -0xf0) * 2;
    iVar11 = iVar12 + -0x30;
    aiStack_60[6] = iVar11;
    if (lVar13 == 6) {
      aiStack_60[7] = param_2[0xb] + -0x30 + (param_2[10] * 5 + -0xf0) * 2;
      if ((param_3 & 1) == 0) {
        if ((param_3 & 2) == 0) goto LAB_00100070;
        iVar10 = iVar14 + -0x76c + iVar10 * 100;
LAB_001002d5:
        iVar14 = aiStack_60[lVar13 + -1];
        iVar15 = aiStack_60[lVar13];
        iVar1 = aiStack_60[lVar13 + 1];
        iVar8 = aiStack_60[lVar13 + -2] + -1;
        iVar11 = iVar10;
      }
      else {
        if ((param_3 & 2) == 0) goto LAB_00100070;
        iVar8 = iVar8 + -0x31;
        iVar11 = aiStack_60[7] + -0x76c + iVar11 * 100;
      }
    }
    else {
      if ((param_3 & 1) == 0) {
        if ((iVar10 < 0x45) && (iVar10 = iVar8 + 0x34, (param_3 & 8) != 0)) goto LAB_00100070;
        goto LAB_001002d5;
      }
      iVar8 = iVar8 + -0x31;
      if ((iVar11 < 0x45) && (iVar11 = iVar12 + 0x34, (param_3 & 8) != 0)) goto LAB_00100070;
    }
  }
  if (pcVar3 == (char *)0x0) {
    iVar10 = 0;
  }
  else {
    if ((9 < (int)pcVar3[1] - 0x30U) || (9 < (int)pcVar3[2] - 0x30U)) goto LAB_00100070;
    iVar10 = pcVar3[2] + -0x30 + ((int)pcVar3[1] - 0x30U) * 10;
  }
  local_a1 = 0;
  uVar6._4_4_ = iVar14;
  uVar6._0_4_ = iVar15;
  while( true ) {
    local_98.tm_min = iVar1;
    local_98.tm_sec = iVar10;
    local_98.tm_wday = -1;
    local_98.tm_isdst = -1;
    local_98._8_8_ = uVar6;
    local_98.tm_mon = iVar8;
    local_98.tm_year = iVar11;
    tVar5 = mktime(&local_98);
    if (local_98.tm_wday < 0) break;
    if (((((local_98.tm_year == iVar11 && local_98.tm_mon == iVar8) && local_98.tm_mday == iVar14)
         && local_98.tm_hour == iVar15) && iVar1 == local_98.tm_min) && local_98.tm_sec == iVar10) {
      if (!SCARRY8((ulong)local_a1,tVar5)) {
        *param_1 = (ulong)local_a1 + tVar5;
        uVar6 = 1;
        goto LAB_00100072;
      }
      break;
    }
    if (iVar10 != 0x3c) break;
    local_a1 = 1;
    iVar10 = 0x3b;
  }
LAB_00100070:
  uVar6 = 0;
LAB_00100072:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


