
undefined8 year(long param_1,int *param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  tm *ptVar3;
  long in_FS_OFFSET;
  time_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    iVar1 = *param_2;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 0x45) {
      if ((param_4 & 8) != 0) goto LAB_001000a0;
      *(int *)(param_1 + 0x14) = iVar1 + 100;
    }
  }
  else if (param_3 == 2) {
    if ((param_4 & 2) == 0) {
LAB_001000a0:
      uVar2 = 0;
      goto LAB_0010003c;
    }
    *(int *)(param_1 + 0x14) = *param_2 * 100 + param_2[1] + -0x76c;
  }
  else {
    local_18 = rpl_time(0);
    ptVar3 = localtime(&local_18);
    if (ptVar3 == (tm *)0x0) goto LAB_001000a0;
    *(int *)(param_1 + 0x14) = ptVar3->tm_year;
  }
  uVar2 = 1;
LAB_0010003c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 posixtime(long *param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  char *pcVar7;
  size_t sVar8;
  time_t tVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined8 uVar15;
  byte local_e1;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  tm local_98;
  int aiStack_60 [6];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar6 = strlen(param_2);
  sVar8 = sVar6;
  if ((param_3 & 4) == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = strchr(param_2,0x2e);
    if ((pcVar7 != (char *)0x0) && (sVar8 = (long)pcVar7 - (long)param_2, sVar6 - sVar8 != 3))
    goto LAB_00100120;
  }
  if ((sVar8 - 8 < 5) && (uVar11 = (ulong)((uint)sVar8 & 1), (sVar8 & 1) == 0)) {
    lVar12 = 0;
    do {
      if (9 < (int)param_2[lVar12] - 0x30U) goto LAB_00100120;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (long)sVar8);
    uVar14 = (long)sVar8 >> 1;
    do {
      (aiStack_60 + 2)[uVar11] =
           param_2[uVar11 * 2 + 1] + -0x30 + (param_2[uVar11 * 2] * 5 + -0xf0) * 2;
      uVar11 = uVar11 + 1;
    } while (uVar14 != uVar11);
    if ((param_3 & 1) == 0) {
      cVar5 = year(local_d8,aiStack_60 + 2,uVar14 - 4,param_3);
      if (cVar5 == '\0') goto LAB_00100120;
      iStack_cc = aiStack_60[uVar14 - 1];
      iStack_c8 = aiStack_60[uVar14 - 2] + -1;
      local_d4 = CONCAT44(aiStack_60[uVar14],aiStack_60[uVar14 + 1]);
    }
    else {
      iStack_c8 = aiStack_60[2] + -1;
      local_d4 = CONCAT44(aiStack_60[4],aiStack_60[5]);
      iStack_cc = aiStack_60[3];
      cVar5 = year(local_d8,local_48,uVar14 - 4,param_3);
      if (cVar5 == '\0') goto LAB_00100120;
    }
    iVar4 = iStack_c8;
    iVar3 = iStack_cc;
    if (pcVar7 == (char *)0x0) {
      iVar13 = 0;
    }
    else {
      if ((9 < (int)pcVar7[1] - 0x30U) || (9 < (int)pcVar7[2] - 0x30U)) goto LAB_00100120;
      iVar13 = pcVar7[2] + -0x30 + ((int)pcVar7[1] - 0x30U) * 10;
    }
    uVar10._4_4_ = iStack_c4;
    uVar10._0_4_ = iStack_c8;
    iVar2 = local_d4._4_4_;
    local_e1 = 0;
    iVar1 = (int)local_d4;
    uVar15._4_4_ = iStack_cc;
    uVar15._0_4_ = local_d4._4_4_;
    while( true ) {
      local_98.tm_wday = -1;
      local_98.tm_min = iVar1;
      local_98.tm_sec = iVar13;
      local_98.tm_isdst = -1;
      local_98._8_8_ = uVar15;
      local_98._16_8_ = uVar10;
      tVar9 = mktime(&local_98);
      if (local_98.tm_wday < 0) break;
      if (((((local_98.tm_mday == iVar3 && local_98.tm_hour == iVar2) && local_98.tm_min == iVar1)
           && local_98.tm_year == iStack_c4) && local_98.tm_mon == iVar4) &&
          local_98.tm_sec == iVar13) {
        if (!SCARRY8(tVar9,(ulong)local_e1)) {
          *param_1 = tVar9 + (ulong)local_e1;
          uVar10 = 1;
          goto LAB_00100122;
        }
        break;
      }
      if (iVar13 != 0x3c) break;
      local_e1 = 1;
      iVar13 = 0x3b;
    }
  }
LAB_00100120:
  uVar10 = 0;
LAB_00100122:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


