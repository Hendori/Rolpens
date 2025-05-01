
/* icu_76_godot::isAcceptable(void*, char const*, char const*, UDataInfo const*) */

bool icu_76_godot::isAcceptable(void *param_1,char *param_2,char *param_3,UDataInfo *param_4)

{
  if ((((0x13 < *(ushort *)param_4) && (*(short *)(param_4 + 4) == 0)) &&
      (*(short *)(param_4 + 8) == 0x6e75)) && (*(short *)(param_4 + 10) == 0x6d61)) {
    return param_4[0xc] == (UDataInfo)0x1;
  }
  return false;
}



/* icu_76_godot::expandName(icu_76_godot::UCharNames*, unsigned char const*, unsigned short,
   UCharNameChoice, char*, unsigned short) */

int icu_76_godot::expandName
              (uint *param_1,ushort *param_2,short param_3,uint param_4,byte *param_5,short param_6)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  byte *pbVar5;
  short sVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar2 = (ushort)param_1[4];
  uVar3 = *param_1;
  if ((param_4 & 0xfffffffd) == 0) {
LAB_0010008d:
    if (param_3 != 0) {
      iVar9 = 0;
      do {
        bVar7 = (byte)*param_2;
        if (bVar7 < uVar2) {
          uVar4 = *(ushort *)((long)param_1 + (ulong)bVar7 * 2 + 0x12);
          puVar1 = (ushort *)((long)param_2 + 1);
          sVar6 = param_3 + -1;
          if (uVar4 == 0xfffe) {
            uVar4 = *(ushort *)
                     ((long)param_1 + (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8) * 2 + 0x12);
            puVar1 = param_2 + 1;
            sVar6 = param_3 + -2;
          }
          param_3 = sVar6;
          param_2 = puVar1;
          if (uVar4 == 0xffff) {
            if (bVar7 != 0x3b) goto LAB_001000aa;
            if ((((short)iVar9 != 0) || (param_4 != 2)) ||
               ((0x3b < uVar2 && ((short)param_1[0x22] != -1)))) break;
            iVar9 = 0;
          }
          else {
            pbVar10 = (byte *)((ulong)uVar4 + (ulong)uVar3 + (long)param_1);
            bVar7 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            pbVar5 = pbVar10;
            if (bVar7 != 0) {
              do {
                pbVar11 = pbVar5;
                if (param_6 != 0) {
                  *param_5 = bVar7;
                  param_6 = param_6 + -1;
                  param_5 = param_5 + 1;
                }
                bVar7 = *pbVar11;
                pbVar5 = pbVar11 + 1;
              } while (bVar7 != 0);
              iVar9 = ((iVar9 + 1) - (int)pbVar10) + (int)pbVar11;
            }
          }
        }
        else {
          param_2 = (ushort *)((long)param_2 + 1);
          param_3 = param_3 + -1;
          if (bVar7 == 0x3b) break;
LAB_001000aa:
          if (param_6 != 0) {
            *param_5 = bVar7;
            param_6 = param_6 + -1;
            param_5 = param_5 + 1;
          }
          iVar9 = iVar9 + 1;
        }
      } while (param_3 != 0);
      goto LAB_00100134;
    }
  }
  else if ((uVar2 < 0x3c) || ((short)param_1[0x22] == -1)) {
    uVar8 = 2;
    if (param_4 != 4) {
      uVar8 = param_4;
    }
LAB_00100070:
    do {
      if (param_3 != 0) {
        param_3 = param_3 + -1;
        puVar1 = (ushort *)((long)param_2 + 1);
        uVar4 = *param_2;
        param_2 = puVar1;
        if ((byte)uVar4 != 0x3b) goto LAB_00100070;
      }
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
    goto LAB_0010008d;
  }
  iVar9 = 0;
LAB_00100134:
  if (param_6 != 0) {
    *param_5 = 0;
  }
  return iVar9;
}



/* icu_76_godot::getGroup(icu_76_godot::UCharNames*, unsigned int) */

UCharNames * icu_76_godot::getGroup(UCharNames *param_1,uint param_2)

{
  uint uVar1;
  UCharNames *pUVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar2 = param_1 + *(uint *)(param_1 + 4);
  uVar3 = (uint)*(ushort *)pUVar2;
  uVar1 = 0;
  while (uVar4 = uVar1, (int)uVar4 < (int)(uVar3 - 1)) {
    uVar1 = (int)(uVar3 + uVar4) >> 1;
    if ((ushort)(param_2 >> 5) < *(ushort *)(pUVar2 + (long)(int)(uVar1 * 3) * 2 + 2)) {
      uVar3 = uVar1;
      uVar1 = uVar4;
    }
  }
  return pUVar2 + (long)(int)(uVar4 * 3) * 2 + 2;
}



/* icu_76_godot::expandGroupLengths(unsigned char const*, unsigned short*, unsigned short*) */

byte * icu_76_godot::expandGroupLengths(uchar *param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  
  uVar5 = 0;
  iVar10 = 0;
  uVar8 = 0;
  do {
    pbVar6 = param_1 + 1;
    bVar1 = *param_1;
    uVar9 = (ushort)iVar10;
    puVar2 = param_3 + 1;
    puVar3 = param_2 + 1;
    uVar4 = uVar8 + 1;
    if ((ushort)uVar5 < 0xc) {
      if (bVar1 < 0xc0) {
        uVar5 = (uint)(bVar1 >> 4);
        goto LAB_00100264;
      }
      *param_2 = uVar9;
      uVar5 = 0;
      iVar7 = (bVar1 & 0x3f) + 0xc;
      *param_3 = (ushort)iVar7;
      iVar10 = iVar10 + iVar7;
    }
    else {
      uVar5 = ((uVar5 & 3) << 4 | (uint)(bVar1 >> 4)) + 0xc;
LAB_00100264:
      iVar10 = iVar10 + uVar5;
      *param_2 = uVar9;
      *param_3 = (ushort)uVar5;
      uVar5 = bVar1 & 0xf;
      if ((bVar1 & 0xf) < 0xc) {
        param_2[1] = (ushort)iVar10;
        iVar10 = uVar5 + iVar10;
        param_3[1] = (ushort)uVar5;
        puVar2 = param_3 + 2;
        puVar3 = param_2 + 2;
        uVar4 = uVar8 + 2;
      }
    }
    uVar8 = uVar4;
    param_2 = puVar3;
    param_3 = puVar2;
    param_1 = pbVar6;
    if (0x1f < uVar8) {
      return pbVar6;
    }
  } while( true );
}



/* icu_76_godot::getName(icu_76_godot::UCharNames*, unsigned int, UCharNameChoice, char*, unsigned
   short) */

undefined8
icu_76_godot::getName
          (UCharNames *param_1,uint param_2,undefined4 param_3,undefined1 *param_4,short param_5)

{
  short *psVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ushort auStack_c8 [40];
  ushort local_78 [36];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  psVar1 = (short *)getGroup(param_1,param_2);
  if (*psVar1 == (short)(param_2 >> 5)) {
    lVar2 = expandGroupLengths((uchar *)(param_1 +
                                        (long)CONCAT22(psVar1[1],psVar1[2]) +
                                        (ulong)*(uint *)(param_1 + 8)),auStack_c8,local_78);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = expandName(param_1,lVar2 + (ulong)auStack_c8[param_2 & 0x1f],local_78[param_2 & 0x1f],
                         param_3,param_4,param_5);
      return uVar3;
    }
  }
  else {
    if (param_5 != 0) {
      *param_4 = 0;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::writeFactorSuffix(unsigned short const*, unsigned short, char const*, unsigned int,
   unsigned short*, char const**, char const**, char*, unsigned short) */

int icu_76_godot::writeFactorSuffix
              (ushort *param_1,ushort param_2,char *param_3,uint param_4,ushort *param_5,
              char **param_6,char **param_7,char *param_8,ushort param_9)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar6 = (ulong)param_4;
  if ((ushort)(param_2 - 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)(ushort)(param_2 - 1);
    uVar5 = uVar6;
    lVar10 = uVar11 * 2;
    do {
      uVar6 = uVar5 / *(ushort *)((long)param_1 + lVar10);
      *(short *)((long)param_5 + lVar10) =
           (short)(uVar5 % (ulong)*(ushort *)((long)param_1 + lVar10));
      bVar12 = lVar10 != (uVar11 - (param_2 - 2 & 0xffff)) * 2;
      uVar5 = uVar6;
      lVar10 = lVar10 + -2;
    } while (bVar12);
  }
  *param_5 = (ushort)uVar6;
  puVar1 = param_1 + uVar11;
  iVar9 = 0;
  while( true ) {
    if (param_6 != (char **)0x0) {
      *param_6 = param_3;
      param_6 = param_6 + 1;
    }
    for (uVar3 = *param_5; pcVar8 = param_3, uVar3 != 0; uVar3 = uVar3 - 1) {
      do {
        param_3 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = param_3;
      } while (cVar2 != '\0');
    }
    if (param_7 != (char **)0x0) {
      *param_7 = param_3;
      param_7 = param_7 + 1;
    }
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    pcVar8 = param_3;
    if (cVar2 != '\0') {
      do {
        pcVar7 = pcVar8;
        if (param_9 != 0) {
          *param_8 = cVar2;
          param_9 = param_9 - 1;
          param_8 = param_8 + 1;
        }
        cVar2 = *pcVar7;
        pcVar8 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar9 = ((iVar9 + 1) - (int)param_3) + (int)pcVar7;
      param_3 = pcVar7 + 1;
    }
    if (param_1 == puVar1) break;
    for (sVar4 = (*param_1 - 1) - *param_5; sVar4 != 0; sVar4 = sVar4 + -1) {
      do {
        pcVar8 = param_3 + 1;
        cVar2 = *param_3;
        param_3 = pcVar8;
      } while (cVar2 != '\0');
    }
    param_1 = param_1 + 1;
    param_5 = param_5 + 1;
  }
  if (param_9 != 0) {
    *param_8 = '\0';
  }
  return iVar9;
}



/* icu_76_godot::getAlgName(icu_76_godot::AlgorithmicRange*, unsigned int, UCharNameChoice, char*,
   unsigned short) */

int icu_76_godot::getAlgName(int *param_1,uint param_2,uint param_3,char *param_4,ushort param_5)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  ushort local_28 [12];
  long local_10;
  
  uVar9 = (ulong)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 0xfffffffd) == 0) {
    if ((char)param_1[2] == '\0') {
      cVar10 = (char)param_1[3];
      pcVar5 = (char *)((long)param_1 + 0xd);
      if (cVar10 == '\0') {
        iVar4 = 0;
      }
      else {
        do {
          pcVar11 = pcVar5;
          if (param_5 != 0) {
            *param_4 = cVar10;
            param_5 = param_5 - 1;
            param_4 = param_4 + 1;
          }
          cVar10 = *pcVar11;
          pcVar5 = pcVar11 + 1;
        } while (cVar10 != '\0');
        iVar4 = ((int)pcVar11 - (int)(char *)((long)param_1 + 0xd)) + 1;
      }
      bVar2 = *(byte *)((long)param_1 + 9);
      if (bVar2 < param_5) {
        param_4[bVar2] = '\0';
      }
      if (bVar2 != 0) {
        param_4 = param_4 + (bVar2 - 1 & 0xffff);
        uVar6 = (uint)bVar2;
        do {
          uVar6 = uVar6 - 1;
          if ((ushort)uVar6 < param_5) {
            bVar3 = (byte)uVar9 & 0xf;
            cVar10 = bVar3 + 0x37;
            if (bVar3 < 10) {
              cVar10 = bVar3 + 0x30;
            }
            *param_4 = cVar10;
          }
          uVar9 = uVar9 >> 4;
          param_4 = param_4 + -1;
        } while ((ushort)uVar6 != 0);
      }
      iVar4 = (uint)bVar2 + iVar4;
      goto LAB_001005f8;
    }
    if ((char)param_1[2] == '\x01') {
      bVar2 = *(byte *)((long)param_1 + 9);
      puVar1 = (ushort *)(param_1 + 3);
      cVar10 = (char)puVar1[bVar2];
      pcVar5 = (char *)((long)(puVar1 + bVar2) + 1);
      pcVar11 = pcVar5;
      if (cVar10 == '\0') {
        iVar7 = 0;
      }
      else {
        do {
          pcVar8 = pcVar11;
          if (param_5 != 0) {
            *param_4 = cVar10;
            param_5 = param_5 - 1;
            param_4 = param_4 + 1;
          }
          cVar10 = *pcVar8;
          pcVar11 = pcVar8 + 1;
        } while (cVar10 != '\0');
        iVar7 = ((int)pcVar8 - (int)pcVar5) + 1;
        pcVar5 = pcVar8 + 1;
      }
      iVar4 = writeFactorSuffix(puVar1,(ushort)bVar2,pcVar5,param_2 - *param_1,local_28,(char **)0x0
                                ,(char **)0x0,param_4,param_5);
      iVar4 = iVar4 + iVar7;
      goto LAB_001005f8;
    }
  }
  if (param_5 != 0) {
    *param_4 = '\0';
  }
  iVar4 = 0;
LAB_001005f8:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* icu_76_godot::enumAlgNames(icu_76_godot::AlgorithmicRange*, int, int, signed char (*)(void*, int,
   UCharNameChoice, char const*, int), void*, UCharNameChoice) */

undefined8
icu_76_godot::enumAlgNames
          (int *param_1,ulong param_2,int param_3,code *param_4,undefined8 param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  char **ppcVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  uint local_1c4;
  ushort local_198 [8];
  char *local_188 [8];
  char *local_148 [8];
  char local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_6 & 0xfffffffd) == 0) {
    uVar14 = param_2 & 0xffffffff;
    if ((char)param_1[2] == '\0') {
      sVar4 = getAlgName(param_1,param_2,param_6,local_108,200);
      if (sVar4 != 0) {
        cVar3 = (*param_4)(param_5,uVar14,param_6,local_108,sVar4);
        pcVar13 = local_108;
        if (cVar3 != '\0') {
          while (local_108[0] != '\0') {
            local_108[0] = pcVar13[1];
            pcVar13 = pcVar13 + 1;
          }
          do {
            uVar10 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar10;
            if (param_3 <= (int)uVar10) goto LAB_0010072e;
            cVar3 = pcVar13[-1];
            pcVar17 = pcVar13;
            while ((8 < (byte)(cVar3 - 0x30U) && (4 < (byte)(cVar3 + 0xbfU)))) {
              pcVar12 = pcVar17 + -1;
              if (cVar3 == '9') {
                *pcVar12 = 'A';
                goto LAB_00100819;
              }
              if (cVar3 == 'F') {
                *pcVar12 = '0';
              }
              cVar3 = pcVar17[-2];
              pcVar17 = pcVar12;
            }
            pcVar17[-1] = cVar3 + '\x01';
LAB_00100819:
            cVar3 = (*param_4)(param_5,uVar10,param_6,local_108,sVar4);
          } while (cVar3 != '\0');
        }
        goto LAB_00100832;
      }
    }
    else if ((char)param_1[2] == '\x01') {
      bVar2 = *(byte *)((long)param_1 + 9);
      puVar1 = (ushort *)(param_1 + 3);
      pcVar13 = (char *)((long)(puVar1 + bVar2) + 1);
      cVar3 = (char)puVar1[bVar2];
      if (cVar3 == '\0') {
        pcVar17 = local_108;
        uVar5 = 200;
        local_1c4 = 0;
      }
      else {
        pcVar17 = local_108;
        pcVar12 = pcVar13;
        do {
          pcVar9 = pcVar12;
          *pcVar17 = cVar3;
          pcVar17 = pcVar17 + 1;
          cVar3 = *pcVar9;
          pcVar12 = pcVar9 + 1;
        } while (cVar3 != '\0');
        uVar10 = ((int)pcVar9 - (int)pcVar13) + 1;
        local_1c4 = uVar10 & 0xffff;
        uVar5 = 200 - (short)uVar10;
        pcVar13 = pcVar9 + 1;
      }
      iVar6 = writeFactorSuffix(puVar1,(ushort)bVar2,pcVar13,(int)param_2 - *param_1,local_198,
                                local_188,local_148,pcVar17,uVar5);
      cVar3 = (*param_4)(param_5,uVar14,param_6,local_108,iVar6 + local_1c4 & 0xffff);
      if (cVar3 != '\0') {
        uVar10 = bVar2 - 1;
        do {
          uVar16 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar16;
          if (param_3 <= (int)uVar16) goto LAB_0010072e;
          uVar8 = (ulong)(int)(uVar10 & 0xffff);
          uVar5 = local_198[uVar8] + 1;
          uVar15 = uVar10;
          if (puVar1[uVar10 & 0xffff] <= uVar5) {
            do {
              local_198[uVar8] = 0;
              local_148[uVar8] = local_188[uVar8];
              uVar8 = (ulong)(uVar15 - 1 & 0xffff);
              uVar5 = local_198[uVar8] + 1;
              uVar15 = uVar15 - 1;
            } while (puVar1[uVar8] <= uVar5);
          }
          local_198[uVar8] = uVar5;
          pcVar13 = local_148[uVar8];
          do {
            pcVar12 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar12;
          } while (cVar3 != '\0');
          local_148[uVar8] = pcVar12;
          ppcVar11 = local_148;
          pcVar13 = pcVar17;
          pcVar12 = pcVar17;
          uVar15 = local_1c4;
          if (bVar2 != 0) {
            do {
              pcVar9 = *ppcVar11;
              cVar3 = *pcVar9;
              pcVar13 = pcVar12;
              if (cVar3 != '\0') {
                do {
                  pcVar9 = pcVar9 + 1;
                  *pcVar13 = cVar3;
                  pcVar13 = pcVar13 + 1;
                  cVar3 = *pcVar9;
                } while (cVar3 != '\0');
                uVar15 = (uVar15 - (int)pcVar12) + (int)pcVar13;
              }
              ppcVar11 = ppcVar11 + 1;
              pcVar12 = pcVar13;
            } while (ppcVar11 != local_148 + (ulong)(uVar10 & 0xffff) + 1);
          }
          *pcVar13 = '\0';
          cVar3 = (*param_4)(param_5,uVar16,param_6,local_108,uVar15 & 0xffff);
        } while (cVar3 != '\0');
        uVar7 = 0;
        goto LAB_00100733;
      }
LAB_00100832:
      uVar7 = 0;
      goto LAB_00100733;
    }
  }
LAB_0010072e:
  uVar7 = 1;
LAB_00100733:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* icu_76_godot::loadCharNames(UErrorCode&) */

void icu_76_godot::loadCharNames(UErrorCode *param_1)

{
  uCharNamesData = udata_openChoice_76_godot(0,&DATA_TYPE,"unames",0x100000,0,param_1);
  if (*(int *)param_1 < 1) {
    uCharNames = udata_getMemory_76_godot(uCharNamesData);
  }
  else {
    uCharNamesData = 0;
  }
  ucln_common_registerCleanup_76_godot(0x12,unames_cleanup);
  return;
}



/* icu_76_godot::unames_cleanup() */

undefined8 icu_76_godot::unames_cleanup(void)

{
  if (uCharNamesData != 0) {
    udata_close_76_godot();
    uCharNamesData = 0;
  }
  if (uCharNames != 0) {
    uCharNames = 0;
  }
  LOCK();
  gCharNamesInitOnce = 0;
  UNLOCK();
  gMaxNameLength = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* makeTokenMap(UDataSwapper const*, short*, unsigned short, unsigned char*, UErrorCode*) */

void makeTokenMap(UDataSwapper *param_1,short *param_2,ushort param_3,uchar *param_4,
                 UErrorCode *param_5)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  uchar *puVar25;
  uchar *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  char *pcVar30;
  ushort uVar31;
  long in_FS_OFFSET;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  byte local_14a;
  byte local_149;
  char local_148 [264];
  long local_40;
  
  uVar23 = _UNK_0010382e;
  uVar22 = _UNK_0010382c;
  uVar21 = _UNK_0010382a;
  uVar20 = _UNK_00103828;
  uVar19 = _UNK_00103826;
  uVar18 = _UNK_00103824;
  uVar24 = _UNK_00103822;
  uVar31 = __LC3;
  sVar17 = _UNK_0010381e;
  sVar16 = _UNK_0010381c;
  sVar15 = _UNK_0010381a;
  sVar14 = _UNK_00103818;
  sVar13 = _UNK_00103816;
  sVar12 = _UNK_00103814;
  sVar11 = _UNK_00103812;
  sVar10 = __LC2;
  sVar9 = _UNK_0010380e;
  sVar8 = _UNK_0010380c;
  sVar7 = _UNK_0010380a;
  sVar6 = _UNK_00103808;
  sVar5 = _UNK_00103806;
  sVar4 = _UNK_00103804;
  sVar3 = _UNK_00103802;
  sVar2 = __LC1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_5 < 1) {
    if (param_1[1] == param_1[3]) {
      puVar25 = param_4;
      uVar48 = __LC0;
      uVar49 = _UNK_001037f2;
      uVar50 = _UNK_001037f4;
      uVar51 = _UNK_001037f6;
      uVar52 = _UNK_001037f8;
      uVar53 = _UNK_001037fa;
      uVar54 = _UNK_001037fc;
      uVar55 = _UNK_001037fe;
      do {
        puVar26 = puVar25 + 0x10;
        uVar32 = uVar48 & uVar31;
        uVar33 = uVar49 & uVar24;
        uVar34 = uVar50 & uVar18;
        uVar35 = uVar51 & uVar19;
        uVar36 = uVar52 & uVar20;
        uVar37 = uVar53 & uVar21;
        uVar38 = uVar54 & uVar22;
        uVar39 = uVar55 & uVar23;
        uVar40 = uVar48 + sVar10 & uVar31;
        uVar41 = uVar49 + sVar11 & uVar24;
        uVar42 = uVar50 + sVar12 & uVar18;
        uVar43 = uVar51 + sVar13 & uVar19;
        uVar44 = uVar52 + sVar14 & uVar20;
        uVar45 = uVar53 + sVar15 & uVar21;
        uVar46 = uVar54 + sVar16 & uVar22;
        uVar47 = uVar55 + sVar17 & uVar23;
        *puVar25 = (0 < (short)uVar32) * ((short)uVar32 < 0x100) * (char)uVar32 -
                   (0xff < (short)uVar32);
        puVar25[1] = (0 < (short)uVar33) * ((short)uVar33 < 0x100) * (char)uVar33 -
                     (0xff < (short)uVar33);
        puVar25[2] = (0 < (short)uVar34) * ((short)uVar34 < 0x100) * (char)uVar34 -
                     (0xff < (short)uVar34);
        puVar25[3] = (0 < (short)uVar35) * ((short)uVar35 < 0x100) * (char)uVar35 -
                     (0xff < (short)uVar35);
        puVar25[4] = (0 < (short)uVar36) * ((short)uVar36 < 0x100) * (char)uVar36 -
                     (0xff < (short)uVar36);
        puVar25[5] = (0 < (short)uVar37) * ((short)uVar37 < 0x100) * (char)uVar37 -
                     (0xff < (short)uVar37);
        puVar25[6] = (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 -
                     (0xff < (short)uVar38);
        puVar25[7] = (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 -
                     (0xff < (short)uVar39);
        puVar25[8] = (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 -
                     (0xff < (short)uVar40);
        puVar25[9] = (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 -
                     (0xff < (short)uVar41);
        puVar25[10] = (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 -
                      (0xff < (short)uVar42);
        puVar25[0xb] = (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 -
                       (0xff < (short)uVar43);
        puVar25[0xc] = (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 -
                       (0xff < (short)uVar44);
        puVar25[0xd] = (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 -
                       (0xff < (short)uVar45);
        puVar25[0xe] = (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 -
                       (0xff < (short)uVar46);
        puVar25[0xf] = (0 < (short)uVar47) * ((short)uVar47 < 0x100) * (char)uVar47 -
                       (0xff < (short)uVar47);
        puVar25 = puVar26;
        uVar48 = uVar48 + sVar2;
        uVar49 = uVar49 + sVar3;
        uVar50 = uVar50 + sVar4;
        uVar51 = uVar51 + sVar5;
        uVar52 = uVar52 + sVar6;
        uVar53 = uVar53 + sVar7;
        uVar54 = uVar54 + sVar8;
        uVar55 = uVar55 + sVar9;
      } while (param_4 + 0x100 != puVar26);
    }
    else {
      param_4[0] = '\0';
      param_4[1] = '\0';
      param_4[2] = '\0';
      param_4[3] = '\0';
      param_4[4] = '\0';
      param_4[5] = '\0';
      param_4[6] = '\0';
      param_4[7] = '\0';
      param_4[0xf8] = '\0';
      param_4[0xf9] = '\0';
      param_4[0xfa] = '\0';
      param_4[0xfb] = '\0';
      param_4[0xfc] = '\0';
      param_4[0xfd] = '\0';
      param_4[0xfe] = '\0';
      param_4[0xff] = '\0';
      puVar29 = (undefined8 *)((ulong)(param_4 + 8) & 0xfffffffffffffff8);
      for (uVar27 = (ulong)(((int)param_4 -
                            (int)(undefined8 *)((ulong)(param_4 + 8) & 0xfffffffffffffff8)) + 0x100U
                           >> 3); uVar27 != 0; uVar27 = uVar27 - 1) {
        *puVar29 = 0;
        puVar29 = puVar29 + 1;
      }
      lVar28 = 0x20;
      pcVar30 = local_148;
      uVar31 = 0x100;
      if (param_3 < 0x101) {
        uVar31 = param_3;
      }
      for (; lVar28 != 0; lVar28 = lVar28 + -1) {
        pcVar30[0] = '\0';
        pcVar30[1] = '\0';
        pcVar30[2] = '\0';
        pcVar30[3] = '\0';
        pcVar30[4] = '\0';
        pcVar30[5] = '\0';
        pcVar30[6] = '\0';
        pcVar30[7] = '\0';
        pcVar30 = pcVar30 + 8;
      }
      if (1 < param_3) {
        uVar27 = 1;
        do {
          while (param_2[uVar27] == -1) {
            local_14a = (byte)uVar27;
            (**(code **)(param_1 + 0x48))(param_1,&local_14a,1,&local_149,param_5);
            if (0 < *(int *)param_5) {
              udata_printError_76_godot
                        (param_1,
                         "unames/makeTokenMap() finds variant character 0x%02x used (input charset family %d)\n"
                         ,uVar27 & 0xffff,param_1[1]);
              goto LAB_00100be1;
            }
            uVar27 = uVar27 + 1;
            param_4[local_14a] = local_149;
            local_148[local_149] = '\x01';
            if (uVar31 <= (ushort)uVar27) goto LAB_00100cc5;
          }
          uVar27 = uVar27 + 1;
        } while ((ushort)uVar27 < uVar31);
LAB_00100cc5:
        lVar28 = 1;
        uVar24 = 1;
        do {
          if (param_4[lVar28] == '\0') {
            cVar1 = local_148[uVar24];
            while (cVar1 != '\0') {
              uVar24 = uVar24 + 1;
              cVar1 = local_148[uVar24];
            }
            param_4[lVar28] = (uchar)uVar24;
            uVar24 = uVar24 + 1;
          }
          lVar28 = lVar28 + 1;
        } while ((ushort)lVar28 < uVar31);
      }
    }
  }
LAB_00100be1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::getExtName(unsigned int, char*, unsigned short) */

int icu_76_godot::getExtName(uint param_1,char *param_2,ushort param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  char *pcVar9;
  long lVar10;
  
  if ((int)param_1 < 0xfdd0) {
    bVar1 = u_charType_76_godot();
    if (bVar1 == 0x12) {
      pcVar9 = "lead surrogate";
      if ((param_1 & 0xfffffc00) != 0xd800) {
        pcVar9 = "trail surrogate";
      }
LAB_00100ecc:
      if (param_3 == 0) goto LAB_00100f00;
LAB_00100ed2:
      *param_2 = '<';
      cVar6 = *pcVar9;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      iVar5 = 2;
      if (cVar6 != '\0') goto LAB_00100dbe;
      goto LAB_00100dec;
    }
LAB_00100d8c:
    if (bVar1 < 0x21) {
      pcVar9 = (&charCatNames)[bVar1];
      goto LAB_00100ecc;
    }
    pcVar9 = "unknown";
    if (param_3 != 0) {
      *param_2 = '<';
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      pcVar9 = "unknown";
      cVar6 = 'u';
      goto LAB_00100dbe;
    }
LAB_00100f00:
    cVar6 = *pcVar9;
    param_3 = 0;
    if (cVar6 != '\0') goto LAB_00100dbe;
    iVar5 = 2;
    iVar7 = 3;
joined_r0x00100f23:
    sVar8 = 0;
    iVar3 = 4;
    if (param_1 == 0) goto LAB_00100e71;
LAB_00100e0a:
    iVar7 = 0;
    uVar2 = param_1;
    do {
      iVar7 = iVar7 + 1;
      uVar2 = (int)uVar2 >> 4;
    } while (uVar2 != 0);
    iVar3 = 4;
    if (3 < iVar7) {
      iVar3 = iVar7;
    }
  }
  else {
    if (((int)param_1 < 0xfdf0) || (((~param_1 & 0xfffe) == 0 && ((int)param_1 < 0x110000)))) {
      pcVar9 = "noncharacter";
      cVar6 = 'n';
      if (param_3 != 0) goto LAB_00100ed2;
    }
    else {
      bVar1 = u_charType_76_godot(param_1);
      if (bVar1 != 0x12) goto LAB_00100d8c;
      pcVar9 = "trail surrogate";
      if (param_3 != 0) goto LAB_00100ed2;
      cVar6 = 't';
    }
LAB_00100dbe:
    uVar2 = 1;
    do {
      uVar4 = uVar2;
      if (param_3 != 0) {
        *param_2 = cVar6;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      }
      uVar2 = uVar4 + 1;
      cVar6 = pcVar9[(ulong)(uVar2 & 0xffff) - 1];
    } while (cVar6 != '\0');
    iVar5 = uVar4 + 2;
LAB_00100dec:
    if (param_3 == 0) {
      iVar7 = iVar5 + 1;
      goto joined_r0x00100f23;
    }
    *param_2 = '-';
    param_2 = param_2 + 1;
    sVar8 = param_3 - 1;
    if (param_1 != 0) goto LAB_00100e0a;
    iVar3 = 4;
  }
  iVar7 = iVar5 + 1;
  if (sVar8 != 0) {
    lVar10 = (long)(iVar3 + -1);
    do {
      bVar1 = (byte)param_1 & 0xf;
      cVar6 = bVar1 + 0x37;
      if (bVar1 < 10) {
        cVar6 = bVar1 + 0x30;
      }
      sVar8 = sVar8 + -1;
      param_1 = (int)param_1 >> 4;
      param_2[lVar10] = cVar6;
      if ((param_1 == 0) && ((int)lVar10 < 1)) {
        if (sVar8 != 0) {
          param_2[iVar3] = '>';
        }
        break;
      }
      lVar10 = lVar10 + -1;
    } while (sVar8 != 0);
  }
LAB_00100e71:
  return iVar3 + iVar7;
}



/* icu_76_godot::enumGroupNames(icu_76_godot::UCharNames*, unsigned short const*, int, int, signed
   char (*)(void*, int, UCharNameChoice, char const*, int), void*, UCharNameChoice) */

undefined8
icu_76_godot::enumGroupNames
          (uint *param_1,long param_2,uint param_3,int param_4,code *param_5,undefined8 *param_6,
          uint param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort uVar15;
  ushort uVar16;
  long in_FS_OFFSET;
  ushort local_1a8 [40];
  ushort local_158 [40];
  char local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = expandGroupLengths((uchar *)((long)CONCAT22(*(undefined2 *)(param_2 + 2),
                                                      *(undefined2 *)(param_2 + 4)) +
                                       (ulong)param_1[2] + (long)param_1),local_1a8,local_158);
  if (param_5 == (code *)0x0) {
    pbVar4 = (byte *)*param_6;
    if ((int)param_3 <= param_4) {
      uVar7 = 2;
      if (param_7 != 4) {
        uVar7 = param_7;
      }
      uVar6 = (ushort)param_1[4];
      do {
        uVar16 = local_158[param_3 & 0x1f];
        puVar13 = (ushort *)((ulong)local_1a8[param_3 & 0x1f] + lVar9);
        pbVar12 = pbVar4;
        if ((param_7 & 0xfffffffd) == 0) {
joined_r0x0010117e:
          do {
            if (uVar16 == 0) goto LAB_0010114d;
            bVar2 = (byte)*puVar13;
            bVar1 = *pbVar12;
            uVar15 = uVar16 - 1;
            puVar14 = (ushort *)((long)puVar13 + 1);
            if ((uint)bVar2 < (uint)uVar6) {
              uVar3 = *(ushort *)((long)param_1 + (ulong)(uint)bVar2 * 2 + 0x12);
              if (uVar3 == 0xfffe) {
                uVar15 = uVar16 - 2;
                puVar14 = puVar13 + 1;
                uVar3 = *(ushort *)
                         ((long)param_1 + (ulong)(ushort)(*puVar13 << 8 | *puVar13 >> 8) * 2 + 0x12)
                ;
              }
              puVar13 = puVar14;
              uVar16 = uVar15;
              if (uVar3 != 0xffff) {
                pbVar11 = (byte *)((ulong)uVar3 + (ulong)*param_1 + (long)param_1);
                while( true ) {
                  bVar2 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  bVar1 = *pbVar12;
                  if (bVar2 == 0) break;
                  pbVar12 = pbVar12 + 1;
                  if (bVar2 != bVar1) goto LAB_00101156;
                }
                goto joined_r0x0010117e;
              }
              if (bVar2 == 0x3b) {
                if (((pbVar4 != pbVar12) || (param_7 != 2)) ||
                   ((0x3b < uVar6 && ((short)param_1[0x22] != -1)))) goto LAB_0010114d;
                goto joined_r0x0010117e;
              }
            }
            else if (bVar2 == 0x3b) goto LAB_0010114d;
            pbVar12 = pbVar12 + 1;
            puVar13 = puVar14;
            uVar16 = uVar15;
          } while (bVar2 == bVar1);
        }
        else {
          uVar8 = uVar7;
          if ((uVar6 < 0x3c) || ((short)param_1[0x22] == -1)) {
LAB_001012a8:
            do {
              if (uVar16 != 0) {
                uVar16 = uVar16 - 1;
                puVar14 = (ushort *)((long)puVar13 + 1);
                uVar15 = *puVar13;
                puVar13 = puVar14;
                if ((byte)uVar15 != 0x3b) goto LAB_001012a8;
              }
              uVar8 = uVar8 - 1;
            } while (0 < (int)uVar8);
            goto joined_r0x0010117e;
          }
LAB_0010114d:
          if (*pbVar12 == 0) {
            *(uint *)(param_6 + 1) = param_3;
            uVar10 = 0;
            goto LAB_001010c5;
          }
        }
LAB_00101156:
        param_3 = param_3 + 1;
      } while ((int)param_3 <= param_4);
    }
  }
  else if ((int)param_3 <= param_4) {
    do {
      uVar6 = expandName(param_1,(ulong)local_1a8[param_3 & 0x1f] + lVar9,local_158[param_3 & 0x1f],
                         param_7,local_108,200);
      if (uVar6 == 0) {
        if (param_7 == 2) {
          uVar6 = getExtName(param_3,local_108,200);
          local_108[uVar6] = '\0';
        }
        if (uVar6 != 0) goto LAB_0010109b;
      }
      else {
LAB_0010109b:
        cVar5 = (*param_5)(param_6,param_3,param_7,local_108,uVar6);
        if (cVar5 == '\0') {
          uVar10 = 0;
          goto LAB_001010c5;
        }
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 <= param_4);
  }
  uVar10 = 1;
LAB_001010c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* icu_76_godot::enumExtNames(int, int, signed char (*)(void*, int, UCharNameChoice, char const*,
   int), void*) */

char icu_76_godot::enumExtNames
               (int param_1,int param_2,
               _func_signed_void_ptr_int_UCharNameChoice_char_ptr_int *param_3,void *param_4)

{
  char cVar1;
  ushort uVar2;
  long in_FS_OFFSET;
  char acStack_f8 [200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (_func_signed_void_ptr_int_UCharNameChoice_char_ptr_int *)0x0) &&
     (param_1 <= param_2)) {
    do {
      uVar2 = getExtName(param_1,acStack_f8,200);
      acStack_f8[uVar2] = '\0';
      if (uVar2 != 0) {
        cVar1 = (*param_3)(param_4,param_1,2,acStack_f8,(int)uVar2);
        if (cVar1 == '\0') goto LAB_00101363;
      }
      param_1 = param_1 + 1;
    } while (param_1 <= param_2);
  }
  cVar1 = '\x01';
LAB_00101363:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar1;
}



/* icu_76_godot::enumNames(icu_76_godot::UCharNames*, int, int, signed char (*)(void*, int,
   UCharNameChoice, char const*, int), void*, UCharNameChoice) */

undefined8
icu_76_godot::enumNames
          (UCharNames *param_1,uint param_2,uint param_3,
          _func_signed_void_ptr_int_UCharNameChoice_char_ptr_int *param_4,void *param_5,int param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UCharNames *pUVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  UCharNames *pUVar13;
  UCharNames *pUVar14;
  UCharNames *pUVar15;
  ushort local_48;
  
  uVar3 = param_3 - 1;
  uVar12 = (ulong)param_2;
  iVar11 = param_6;
  pUVar6 = (UCharNames *)getGroup(param_1,param_2);
  uVar2 = *(ushort *)pUVar6;
  uVar10 = (ushort)((int)param_2 >> 5);
  uVar5 = (uint)uVar12;
  local_48 = (ushort)((int)uVar3 >> 5);
  if (uVar10 < uVar2) {
    if (iVar11 == 2) {
      uVar9 = (uint)uVar2 * 0x20;
      if ((int)param_3 < (int)((uint)uVar2 * 0x20)) {
        uVar9 = param_3;
      }
      uVar7 = (ulong)uVar9;
      cVar1 = enumExtNames(uVar5,uVar9 - 1,param_4,param_5);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = *(ushort *)pUVar6;
      if (uVar10 == local_48) {
        uVar5 = uVar9;
        if (uVar10 == uVar2) {
          uVar12 = (ulong)uVar9;
          goto LAB_0010166c;
        }
        goto LAB_00101493;
      }
      goto LAB_001014cf;
    }
    if (uVar10 == local_48) {
      return 1;
    }
    uVar7 = uVar12 & 0xffffffff;
    pUVar15 = param_1 + *(uint *)(param_1 + 4) +
              (long)(int)((uint)*(ushort *)(param_1 + *(uint *)(param_1 + 4)) * 3 + 1) * 2;
LAB_0010141b:
    uVar9 = (uint)uVar7;
    pUVar13 = pUVar6;
    pUVar14 = pUVar6;
    if (pUVar6 < pUVar15) {
LAB_00101428:
      while( true ) {
        uVar9 = (uint)uVar7;
        if (local_48 <= *(ushort *)pUVar13) break;
        uVar7 = (ulong)*(ushort *)pUVar13 << 5;
        uVar9 = (uint)uVar7;
        cVar1 = enumGroupNames(param_1,pUVar13,uVar7,uVar9 + 0x1f,param_4,param_5,param_6);
        if (cVar1 == '\0') {
          return 0;
        }
        pUVar14 = pUVar13 + 6;
        if (pUVar15 <= pUVar14) goto LAB_00101471;
        uVar2 = *(ushort *)pUVar13;
        pUVar13 = pUVar14;
        if ((param_6 == 2) && (uVar2 + 1 < (uint)*(ushort *)pUVar14)) {
          uVar5 = (uint)*(ushort *)pUVar14 * 0x20;
          if ((int)param_3 < (int)uVar5) {
            uVar5 = param_3;
          }
          cVar1 = enumExtNames((uVar2 + 1) * 0x20,uVar5 - 1,param_4,param_5);
          if (cVar1 == '\0') {
            return 0;
          }
        }
      }
      pUVar14 = pUVar13;
      if (pUVar13 < pUVar15) {
        if (*(ushort *)pUVar13 != local_48) {
          return 1;
        }
        uVar8 = enumGroupNames(param_1,pUVar13,uVar3 & 0xffffffe0,uVar3,param_4,param_5,param_6);
        return uVar8;
      }
    }
  }
  else {
    uVar7 = uVar12 & 0xffffffff;
    if (uVar10 == local_48) {
      if (uVar2 == uVar10) {
LAB_0010166c:
        uVar8 = enumGroupNames(param_1,pUVar6,uVar12 & 0xffffffff,uVar3,param_4,param_5,param_6);
        return uVar8;
      }
      if (iVar11 != 2) {
        return 1;
      }
      goto LAB_00101493;
    }
LAB_001014cf:
    pUVar15 = param_1 + *(uint *)(param_1 + 4) +
              (long)(int)((uint)*(ushort *)(param_1 + *(uint *)(param_1 + 4)) * 3 + 1) * 2;
    uVar9 = (uint)uVar7;
    if (uVar10 == uVar2) {
      if ((uVar7 & 0x1f) != 0) {
        cVar1 = enumGroupNames(param_1,pUVar6,uVar7,(uVar5 & 0x1fffe0) + 0x1f,param_4,param_5,
                               param_6);
        if (cVar1 == '\0') {
          return 0;
        }
        pUVar6 = pUVar6 + 6;
      }
      goto LAB_0010141b;
    }
    if (uVar10 <= uVar2) goto LAB_0010141b;
    pUVar13 = pUVar6 + 6;
    pUVar14 = pUVar13;
    if (pUVar13 < pUVar15) {
      if ((uVar10 < *(ushort *)(pUVar6 + 6)) && (param_6 == 2)) {
        uVar5 = (uint)*(ushort *)(pUVar6 + 6) * 0x20;
        if ((int)param_3 < (int)uVar5) {
          uVar5 = param_3;
        }
        cVar1 = enumExtNames(uVar9,uVar5 - 1,param_4,param_5);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      goto LAB_00101428;
    }
  }
LAB_00101471:
  if ((param_6 != 2) || (pUVar14 != pUVar15)) {
    return 1;
  }
  uVar4 = (*(ushort *)(pUVar14 + -6) + 1) * 0x20;
  uVar5 = uVar9;
  if ((int)uVar9 < (int)uVar4) {
    uVar5 = uVar4;
  }
LAB_00101493:
  uVar8 = enumExtNames(uVar5,uVar3,param_4,param_5);
  return uVar8;
}



/* icu_76_godot::calcNameSetLength(unsigned short const*, unsigned short, unsigned char const*,
   signed char*, unsigned int*, unsigned char const**, unsigned char const*) [clone .constprop.0] */

int icu_76_godot::calcNameSetLength
              (ushort *param_1,ushort param_2,uchar *param_3,signed *param_4,uint *param_5,
              uchar **param_6,uchar *param_7)

{
  char cVar1;
  ushort uVar2;
  uchar **ppuVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uchar **ppuVar9;
  byte *pbVar10;
  int iVar11;
  int local_38;
  
  iVar11 = 0;
  ppuVar3 = *(uchar ***)param_5;
  while (ppuVar9 = ppuVar3, ppuVar3 != param_6) {
    bVar6 = *(byte *)ppuVar3;
    uVar5 = (ushort)bVar6;
    ppuVar9 = (uchar **)((long)ppuVar3 + 1);
    if (bVar6 == 0x3b) break;
    if (bVar6 < param_2) {
      uVar2 = param_1[bVar6];
      if (uVar2 == 0xfffe) {
        ppuVar9 = (uchar **)((long)ppuVar3 + 2);
        uVar5 = *(ushort *)ppuVar3 << 8 | *(ushort *)ppuVar3 >> 8;
        uVar2 = param_1[uVar5];
      }
      ppuVar3 = ppuVar9;
      if (uVar2 == 0xffff) {
        iVar11 = iVar11 + 1;
        (&gNameSet)[(byte)((byte)uVar5 >> 5)] =
             (&gNameSet)[(byte)((byte)uVar5 >> 5)] | 1 << ((byte)uVar5 & 0x1f);
      }
      else if (param_4 == (signed *)0x0) {
        pbVar8 = param_3 + uVar2;
        bVar6 = *pbVar8;
        pbVar4 = pbVar8 + 1;
        if (bVar6 != 0) {
          do {
            pbVar10 = pbVar4;
            (&gNameSet)[bVar6 >> 5] = (&gNameSet)[bVar6 >> 5] | 1 << (bVar6 & 0x1f);
            bVar6 = *pbVar10;
            pbVar4 = pbVar10 + 1;
          } while (bVar6 != 0);
          iVar11 = iVar11 + (1 - (int)(pbVar8 + 1)) + (int)pbVar10;
        }
      }
      else {
        cVar1 = param_4[uVar5];
        if (cVar1 == '\0') {
          pbVar8 = param_3 + uVar2;
          uVar7 = (uint)*pbVar8;
          pbVar4 = pbVar8 + 1;
          if (*pbVar8 != 0) {
            do {
              pbVar10 = pbVar4;
              (&gNameSet)[(byte)((byte)uVar7 >> 5)] =
                   (&gNameSet)[(byte)((byte)uVar7 >> 5)] | 1 << ((byte)uVar7 & 0x1f);
              uVar7 = (uint)*pbVar10;
              pbVar4 = pbVar10 + 1;
            } while (*pbVar10 != 0);
            local_38 = (int)(pbVar8 + 1);
            uVar7 = (1 - local_38) + (int)pbVar10;
            iVar11 = iVar11 + uVar7;
          }
          param_4[uVar5] = (char)uVar7;
        }
        else {
          iVar11 = iVar11 + cVar1;
        }
      }
    }
    else {
      iVar11 = iVar11 + 1;
      (&gNameSet)[bVar6 >> 5] = (&gNameSet)[bVar6 >> 5] | 1 << (bVar6 & 0x1f);
      ppuVar3 = ppuVar9;
    }
  }
  *(uchar ***)param_5 = ppuVar9;
  return iVar11;
}



/* icu_76_godot::calcNameSetsLengths(UErrorCode*) [clone .constprop.0] */

undefined8 icu_76_godot::calcNameSetsLengths(UErrorCode *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  uint *puVar6;
  uint *puVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  signed *psVar11;
  ushort *puVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  ushort *puVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  int *piVar22;
  undefined **ppuVar23;
  uchar **ppuVar24;
  byte *pbVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  long in_FS_OFFSET;
  uchar *in_stack_fffffffffffffed8;
  uchar **local_e0;
  ushort local_d8 [40];
  ushort local_88 [36];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar29 = gMaxNameLength;
  if (gMaxNameLength == 0) {
    if (*(int *)param_1 < 1) {
      if ((gCharNamesInitOnce == 2) ||
         (cVar8 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCharNamesInitOnce),
         cVar8 == '\0')) {
        if (0 < DAT_0010324c) {
          *(int *)param_1 = DAT_0010324c;
          uVar10 = 0;
          goto LAB_00101903;
        }
      }
      else {
        loadCharNames(param_1);
        DAT_0010324c = *(int *)param_1;
        icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCharNamesInitOnce);
      }
      if (*(int *)param_1 < 1) {
        pcVar17 = "0123456789ABCDEF<>-";
        do {
          bVar1 = *pcVar17;
          pcVar17 = (char *)((byte *)pcVar17 + 1);
          (&gNameSet)[bVar1 >> 5] = (&gNameSet)[bVar1 >> 5] | 1 << (bVar1 & 0x1f);
          puVar6 = uCharNames;
        } while ((byte *)pcVar17 != (byte *)0x1036c3);
        iVar29 = 0;
        piVar22 = (int *)((ulong)uCharNames[3] + (long)uCharNames) + 1;
        puVar5 = charCatNames;
        for (iVar18 = *(int *)((ulong)uCharNames[3] + (long)uCharNames); charCatNames = puVar5,
            iVar18 != 0; iVar18 = iVar18 + -1) {
          if ((char)piVar22[2] == '\0') {
            bVar1 = *(byte *)(piVar22 + 3);
            pbVar21 = (byte *)((long)piVar22 + 0xd);
            if (bVar1 == 0) {
              iVar28 = 0;
            }
            else {
              do {
                pbVar20 = pbVar21;
                (&gNameSet)[bVar1 >> 5] = (&gNameSet)[bVar1 >> 5] | 1 << (bVar1 & 0x1f);
                bVar1 = *pbVar20;
                pbVar21 = pbVar20 + 1;
              } while (bVar1 != 0);
              iVar28 = (1 - (int)(byte *)((long)piVar22 + 0xd)) + (int)pbVar20;
            }
            iVar28 = (uint)*(byte *)((long)piVar22 + 9) + iVar28;
            if (iVar29 < iVar28) {
              iVar29 = iVar28;
            }
          }
          else if ((char)piVar22[2] == '\x01') {
            bVar1 = *(byte *)((long)piVar22 + 9);
            puVar12 = (ushort *)(piVar22 + 3);
            puVar16 = puVar12 + bVar1;
            bVar14 = (byte)*puVar16;
            pbVar21 = (byte *)((long)puVar16 + 1);
            pbVar20 = pbVar21;
            if (bVar14 == 0) {
              iVar28 = 0;
            }
            else {
              do {
                pbVar27 = pbVar20;
                (&gNameSet)[bVar14 >> 5] = (&gNameSet)[bVar14 >> 5] | 1 << (bVar14 & 0x1f);
                bVar14 = *pbVar27;
                pbVar20 = pbVar27 + 1;
              } while (bVar14 != 0);
              iVar28 = (1 - (int)pbVar21) + (int)pbVar27;
              pbVar21 = (byte *)((long)puVar16 + (long)iVar28 + 1);
            }
            if (bVar1 != 0) {
              do {
                uVar26 = (uint)*puVar12;
                iVar19 = 0;
                pbVar20 = pbVar21;
                if (*puVar12 != 0) {
                  do {
                    bVar14 = *pbVar20;
                    pbVar21 = pbVar20 + 1;
                    pbVar27 = pbVar21;
                    if (bVar14 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      do {
                        pbVar25 = pbVar27;
                        (&gNameSet)[bVar14 >> 5] = (&gNameSet)[bVar14 >> 5] | 1 << (bVar14 & 0x1f);
                        bVar14 = *pbVar25;
                        pbVar27 = pbVar25 + 1;
                      } while (bVar14 != 0);
                      iVar9 = (int)pbVar25 + (1 - (int)pbVar21);
                      pbVar21 = pbVar20 + (long)iVar9 + 1;
                    }
                    if (iVar19 < iVar9) {
                      iVar19 = iVar9;
                    }
                    uVar26 = uVar26 - 1;
                    pbVar20 = pbVar21;
                  } while (uVar26 != 0);
                  iVar28 = iVar28 + iVar19;
                }
                puVar12 = puVar12 + 1;
              } while ((ushort *)((long)piVar22 + (ulong)(bVar1 - 1) * 2 + 0xe) != puVar12);
            }
            if (iVar29 < iVar28) {
              iVar29 = iVar28;
            }
          }
          piVar22 = (int *)((long)piVar22 + (ulong)*(ushort *)((long)piVar22 + 10));
          puVar5 = charCatNames;
        }
        ppuVar23 = &charCatNames;
        uVar15 = 0x75;
LAB_00101b30:
        pbVar21 = puVar5 + 1;
        do {
          pbVar20 = pbVar21;
          (&gNameSet)[uVar15 >> 5] = (&gNameSet)[uVar15 >> 5] | 1 << ((byte)uVar15 & 0x1f);
          uVar15 = (ulong)*pbVar20;
          pbVar21 = pbVar20 + 1;
        } while (*pbVar20 != 0);
        iVar18 = (10 - (int)(puVar5 + 1)) + (int)pbVar20;
        if (iVar29 < iVar18) {
          iVar29 = iVar18;
        }
joined_r0x00101b70:
        ppuVar23 = ppuVar23 + 1;
        if (ppuVar23 != (undefined **)0x1037e8) {
          puVar5 = *ppuVar23;
          uVar15 = (ulong)(byte)**ppuVar23;
          if (**ppuVar23 == 0) goto LAB_00101b83;
          goto LAB_00101b30;
        }
        uVar26 = *puVar6;
        uVar2 = (ushort)puVar6[4];
        psVar11 = (signed *)uprv_malloc_76_godot(uVar2);
        if (psVar11 == (signed *)0x0) {
          puVar12 = (ushort *)((ulong)uCharNames[1] + (long)uCharNames);
          uVar3 = *puVar12;
          if (uVar3 == 0) goto LAB_001018fe;
        }
        else {
          __memset_chk(psVar11,0,uVar2,uVar2);
          puVar12 = (ushort *)((ulong)uCharNames[1] + (long)uCharNames);
          uVar3 = *puVar12;
          if (uVar3 == 0) goto LAB_00101cf5;
        }
        puVar7 = uCharNames;
        puVar16 = puVar12 + 1;
        do {
          lVar30 = 0;
          lVar13 = expandGroupLengths((uchar *)((long)CONCAT22(puVar16[1],puVar16[2]) +
                                                (ulong)puVar7[2] + (long)puVar7),local_d8,local_88);
          do {
            uVar4 = *(ushort *)((long)local_88 + lVar30);
            local_e0 = (uchar **)((ulong)*(ushort *)((long)local_d8 + lVar30) + lVar13);
            if (uVar4 != 0) {
              ppuVar24 = (uchar **)((long)local_e0 + (ulong)uVar4);
              iVar18 = calcNameSetLength((ushort *)((long)puVar6 + 0x12),uVar2,
                                         (uchar *)((long)puVar6 + (ulong)uVar26),psVar11,
                                         (uint *)&local_e0,ppuVar24,in_stack_fffffffffffffed8);
              if (iVar29 < iVar18) {
                iVar29 = iVar18;
              }
              if ((ppuVar24 != local_e0) &&
                 (iVar18 = calcNameSetLength((ushort *)((long)puVar6 + 0x12),uVar2,
                                             (uchar *)((long)puVar6 + (ulong)uVar26),psVar11,
                                             (uint *)&local_e0,ppuVar24,in_stack_fffffffffffffed8),
                 iVar29 < iVar18)) {
                iVar29 = iVar18;
              }
            }
            lVar30 = lVar30 + 2;
          } while (lVar30 != 0x40);
          puVar16 = puVar16 + 3;
        } while (puVar16 != puVar12 + (ulong)(uVar3 - 1) * 3 + 4);
        if (psVar11 != (signed *)0x0) {
LAB_00101cf5:
          uprv_free_76_godot(psVar11);
        }
        goto LAB_001018fe;
      }
    }
    uVar10 = 0;
  }
  else {
LAB_001018fe:
    gMaxNameLength = iVar29;
    uVar10 = 1;
  }
LAB_00101903:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101b83:
  if (iVar29 < 9) {
    iVar29 = 9;
  }
  goto joined_r0x00101b70;
}



/* charSetToUSet(unsigned int*, USetAdder const*) [clone .constprop.0] */

void charSetToUSet(uint *param_1,USetAdder *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_33c;
  short local_338 [256];
  byte local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_33c = 0;
  cVar1 = icu_76_godot::calcNameSetsLengths((UErrorCode *)&local_33c);
  if (cVar1 != '\0') {
    iVar4 = 0;
    uVar2 = 0;
    do {
      if (((uint)(&icu_76_godot::gNameSet)[(byte)((byte)uVar2 >> 5)] >> (uVar2 & 0x1f) & 1) != 0) {
        lVar3 = (long)iVar4;
        iVar4 = iVar4 + 1;
        local_138[lVar3] = (byte)uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x100);
    u_charsToUChars_76_godot(local_138,local_338,iVar4);
    if (0 < iVar4) {
      lVar3 = 0;
      do {
        if ((local_338[lVar3] != 0) || (local_138[lVar3] == 0)) {
          (**(code **)(param_1 + 2))(*(undefined8 *)param_1);
        }
        lVar3 = lVar3 + 1;
      } while (iVar4 != lVar3);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
u_charName_76_godot(uint param_1,int param_2,char *param_3,uint param_4,UErrorCode *param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  uint *puVar6;
  
  if (param_5 == (UErrorCode *)0x0) {
    return 0;
  }
  if (0 < *(int *)param_5) {
    return 0;
  }
  if (((3 < param_2) || ((int)param_4 < 0)) || ((0 < (int)param_4 && (param_3 == (char *)0x0)))) {
    *(undefined4 *)param_5 = 1;
    return 0;
  }
  if (param_1 < 0x110000) {
    if ((icu_76_godot::gCharNamesInitOnce == 2) ||
       (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce),
       cVar1 == '\0')) {
      if (0 < DAT_0010324c) {
        *(int *)param_5 = DAT_0010324c;
        goto LAB_00101fc0;
      }
    }
    else {
      icu_76_godot::loadCharNames(param_5);
      DAT_0010324c = *(int *)param_5;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce);
    }
    if (*(int *)param_5 < 1) {
      piVar5 = (int *)((ulong)*(uint *)(icu_76_godot::uCharNames + 0xc) + icu_76_godot::uCharNames);
      puVar6 = (uint *)(piVar5 + 1);
      for (iVar3 = *piVar5; iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((*puVar6 <= param_1) && (param_1 <= puVar6[1])) {
          sVar2 = icu_76_godot::getAlgName(puVar6,param_1,param_2,param_3,param_4 & 0xffff);
          goto LAB_00101fc5;
        }
        puVar6 = (uint *)((long)puVar6 + (ulong)*(ushort *)((long)puVar6 + 10));
      }
      if (param_2 == 2) {
        sVar2 = icu_76_godot::getName(icu_76_godot::uCharNames,param_1,2,param_3,param_4 & 0xffff);
        if (sVar2 == 0) {
          sVar2 = icu_76_godot::getExtName(param_1,param_3,(ushort)param_4);
        }
      }
      else {
        sVar2 = icu_76_godot::getName
                          (icu_76_godot::uCharNames,param_1,param_2,param_3,param_4 & 0xffff);
      }
      goto LAB_00101fc5;
    }
  }
LAB_00101fc0:
  sVar2 = 0;
LAB_00101fc5:
  uVar4 = u_terminateChars_76_godot(param_3,param_4,sVar2,param_5);
  return uVar4;
}



undefined8 u_getISOComment_76_godot(undefined8 param_1,long param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if ((-1 < param_3) && ((param_3 < 1 || (param_2 != 0)))) {
      uVar1 = u_terminateChars_76_godot(param_2,param_3,0);
      return uVar1;
    }
    *param_4 = 1;
  }
  return 0;
}



uint u_charFromName_76_godot(uint param_1,char *param_2,UErrorCode *param_3)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ushort uVar10;
  ushort *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  uint *puVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 *local_218;
  uint local_210;
  ushort local_208 [8];
  char *local_1f8 [8];
  char *local_1b8 [8];
  char local_178 [64];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_48 = 0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if ((param_3 != (UErrorCode *)0x0) && (*(int *)param_3 < 1)) {
    if (((int)param_1 < 4) && ((param_2 != (char *)0x0 && (*param_2 != '\0')))) {
      if ((icu_76_godot::gCharNamesInitOnce == 2) ||
         (cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce)
         , cVar3 == '\0')) {
        if (0 < DAT_0010324c) {
          *(int *)param_3 = DAT_0010324c;
          goto LAB_00102169;
        }
      }
      else {
        icu_76_godot::loadCharNames(param_3);
        DAT_0010324c = *(int *)param_3;
        icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce);
      }
      if (*(int *)param_3 < 1) {
        uVar19 = 0;
        do {
          lVar22 = icu_76_godot::uCharNames;
          cVar3 = param_2[uVar19];
          if (cVar3 == '\0') {
            local_b8[uVar19 & 0xffffffff] = 0;
            bVar25 = local_b8[0] != '<';
            local_138[uVar19 & 0xffffffff] = 0;
            if (bVar25) {
              piVar20 = (int *)((ulong)*(uint *)(icu_76_godot::uCharNames + 0xc) +
                               icu_76_godot::uCharNames);
              iVar23 = *piVar20;
              puVar21 = (uint *)(piVar20 + 1);
              if (iVar23 != 0) goto LAB_00102252;
              goto LAB_00102498;
            }
            if (param_1 == 2) {
              uVar7 = (int)uVar19 - 1;
              uVar9 = (ulong)uVar7;
              if (local_b8[uVar9] == '>') goto LAB_001025ad;
            }
            break;
          }
          uVar4 = uprv_toupper_76_godot((int)cVar3);
          local_138[uVar19] = uVar4;
          uVar4 = uprv_asciitolower_76_godot((int)cVar3);
          local_b8[uVar19] = uVar4;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x78);
        goto LAB_0010227b;
      }
    }
    else {
      *(undefined4 *)param_3 = 1;
    }
  }
  goto LAB_00102169;
  while( true ) {
    puVar21 = (uint *)((long)puVar21 + (ulong)*(ushort *)((long)puVar21 + 10));
    iVar23 = iVar23 + -1;
    if (iVar23 == 0) break;
LAB_00102252:
    if ((param_1 & 0xfffffffd) == 0) {
      goto LAB_001022b0;
    }
  }
LAB_00102498:
  local_218 = local_138;
  local_210 = 0xffff;
  icu_76_godot::enumNames(lVar22,0,0x110000,0,&local_218,param_1);
  uVar24 = local_210;
  if (local_210 == 0xffff) {
    *(undefined4 *)param_3 = 0xc;
  }
  goto LAB_0010216f;
LAB_001022b0:
  if ((char)puVar21[2] == '\0') {
    puVar14 = puVar21 + 3;
    pcVar8 = local_138;
    do {
      uVar24 = *puVar14;
      puVar14 = (uint *)((long)puVar14 + 1);
      cVar3 = *pcVar8;
      if ((char)uVar24 == '\0') {
        if (*(byte *)((long)puVar21 + 9) != 0) {
          pcVar13 = pcVar8 + *(byte *)((long)puVar21 + 9);
          uVar24 = 0;
          goto LAB_0010253f;
        }
        uVar24 = 0;
        pcVar13 = pcVar8;
        goto LAB_00102576;
      }
      pcVar8 = pcVar8 + 1;
    } while (cVar3 == (char)uVar24);
  }
  else if ((char)puVar21[2] == '\x01') {
    bVar5 = *(byte *)((long)puVar21 + 9);
    puVar14 = puVar21 + 3;
    puVar11 = (ushort *)((long)puVar14 + (ulong)bVar5 * 2);
    pcVar8 = local_138;
    do {
      uVar2 = *puVar11;
      puVar11 = (ushort *)((long)puVar11 + 1);
      if ((char)uVar2 == '\0') {
        uVar7 = puVar21[1];
        uVar24 = *puVar21;
        icu_76_godot::writeFactorSuffix
                  ((ushort *)puVar14,(ushort)bVar5,(char *)puVar11,0,local_208,local_1f8,local_1b8,
                   local_178,0x40);
        iVar6 = strcmp(pcVar8,local_178);
        if (iVar6 == 0) goto LAB_001024e5;
        uVar24 = uVar24 + 1;
        if ((int)uVar24 < (int)(uVar7 + 1)) {
          uVar19 = (ulong)(bVar5 - 1 & 0xffff);
          uVar2 = *(ushort *)((long)puVar14 + uVar19 * 2);
          goto LAB_00102390;
        }
        break;
      }
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 == (char)uVar2);
  }
  goto LAB_00102478;
LAB_0010253f:
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    if ((byte)(cVar3 - 0x30U) < 10) {
      uVar24 = uVar24 << 4 | (int)cVar3 - 0x30U;
    }
    else {
      if (5 < (byte)(cVar3 + 0xbfU)) goto LAB_00102478;
      uVar24 = uVar24 << 4 | (int)cVar3 - 0x37U;
    }
  } while (pcVar8 != pcVar13);
LAB_00102576:
  if (((*pcVar13 == '\0') && (*puVar21 <= uVar24)) && (uVar24 <= puVar21[1])) {
LAB_001024e5:
    if (uVar24 != 0xffff) goto LAB_0010216f;
  }
LAB_00102478:
  puVar21 = (uint *)((long)puVar21 + (ulong)*(ushort *)((long)puVar21 + 10));
  iVar23 = iVar23 + -1;
  if (iVar23 == 0) goto LAB_00102498;
  goto LAB_001022b0;
LAB_00102390:
  do {
    uVar10 = local_208[uVar19] + 1;
    uVar9 = uVar19;
    if (uVar2 <= uVar10) {
      uVar16 = (ulong)(bVar5 - 1);
      do {
        uVar16 = (ulong)((int)uVar16 - 1);
        local_208[uVar9] = 0;
        local_1b8[uVar9] = local_1f8[uVar9];
        uVar9 = uVar16 & 0xffff;
        uVar10 = local_208[uVar9] + 1;
      } while (*(ushort *)((long)puVar14 + uVar9 * 2) <= uVar10);
    }
    local_208[uVar9] = uVar10;
    pcVar13 = local_1b8[uVar9];
    do {
      pcVar12 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar3 != '\0');
    local_1b8[uVar9] = pcVar12;
    uVar17 = 0;
    uVar10 = (ushort)bVar5;
    pcVar13 = pcVar8;
    if (uVar10 == 0) {
LAB_001024e0:
      if (*pcVar13 == '\0') goto LAB_001024e5;
    }
    else {
LAB_00102422:
      do {
        pcVar12 = local_1b8[uVar17];
        cVar3 = *pcVar12;
        pcVar1 = pcVar13;
        while (cVar3 != '\0') {
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar1 + 1;
          if (*pcVar1 != cVar3) {
            uVar17 = 100;
            if (100 < uVar10) goto LAB_00102422;
            goto LAB_00102460;
          }
          pcVar1 = pcVar13;
          cVar3 = *pcVar12;
        }
        uVar17 = uVar17 + 1;
        pcVar13 = pcVar1;
      } while (uVar17 < uVar10);
LAB_00102460:
      if (uVar17 < 99) goto LAB_001024e0;
    }
    uVar24 = uVar24 + 1;
  } while (uVar7 + 1 != uVar24);
  goto LAB_00102478;
  while( true ) {
    uVar18 = uVar18 - 1;
    uVar9 = (ulong)uVar18;
    if (local_b8[uVar9] == '-') break;
LAB_001025ad:
    uVar18 = (uint)uVar9;
    if (uVar18 < 3) {
      if (uVar18 != 2) goto LAB_0010227b;
      uVar9 = 2;
      uVar18 = 2;
      break;
    }
  }
  if ((local_b8[uVar9] == '-') && (((int)uVar19 + -3) - uVar18 < 8)) {
    uVar18 = uVar18 + 1;
    local_b8[uVar9] = 0;
    if (uVar18 < uVar7) {
      puVar15 = local_b8 + uVar9;
      uVar24 = 0;
      do {
        cVar3 = puVar15[1];
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar23 = uVar24 * 0x10 + -0x30;
        }
        else {
          if (5 < (byte)(cVar3 + 0x9fU)) goto LAB_0010227b;
          iVar23 = uVar24 * 0x10 + -0x57;
        }
        uVar24 = iVar23 + cVar3;
        if (0x10ffff < (int)uVar24) goto LAB_0010227b;
        uVar18 = uVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (uVar18 < uVar7);
      if ((int)uVar24 < 0xfdd0) goto LAB_001026fe;
      bVar5 = 0x1e;
      if (((0xfdef < (int)uVar24) && ((~uVar24 & 0xfffe) != 0)) &&
         (bVar5 = u_charType_76_godot(uVar24), bVar5 == 0x12)) {
        bVar5 = 0x20;
      }
    }
    else {
      uVar24 = 0;
LAB_001026fe:
      bVar5 = u_charType_76_godot(uVar24);
      if (bVar5 == 0x12) {
        bVar5 = ((uVar24 & 0xfffffc00) != 0xd800) + 0x1f;
      }
    }
    lVar22 = 0;
    local_b8[uVar18] = 0;
    do {
      iVar23 = strcmp(local_b8 + 1,(&icu_76_godot::charCatNames)[lVar22]);
      if (iVar23 == 0) {
        if ((uint)bVar5 == (uint)lVar22) goto LAB_0010216f;
        break;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 != 0x21);
  }
LAB_0010227b:
  *(undefined4 *)param_3 = 0xc;
LAB_00102169:
  uVar24 = 0xffff;
LAB_0010216f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void u_enumCharNames_76_godot
               (uint param_1,uint param_2,long param_3,undefined8 param_4,int param_5,
               UErrorCode *param_6)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint local_44;
  
  if ((param_6 != (UErrorCode *)0x0) && (*(int *)param_6 < 1)) {
    if ((3 < param_5) || (param_3 == 0)) {
      *(undefined4 *)param_6 = 1;
      return;
    }
    local_44 = param_2;
    if (0x110000 < param_2) {
      local_44 = 0x110000;
    }
    if (param_1 < local_44) {
      if ((icu_76_godot::gCharNamesInitOnce == 2) ||
         (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce)
         , cVar1 == '\0')) {
        if (0 < DAT_0010324c) {
          *(int *)param_6 = DAT_0010324c;
          return;
        }
      }
      else {
        icu_76_godot::loadCharNames(param_6);
        DAT_0010324c = *(int *)param_6;
        icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::gCharNamesInitOnce);
      }
      if (*(int *)param_6 < 1) {
        piVar3 = (int *)((ulong)*(uint *)(icu_76_godot::uCharNames + 0xc) + icu_76_godot::uCharNames
                        );
        puVar4 = (uint *)(piVar3 + 1);
        for (iVar5 = *piVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar2 = *puVar4;
          if (param_1 < uVar2) {
            if (local_44 <= uVar2) break;
            cVar1 = icu_76_godot::enumNames
                              (icu_76_godot::uCharNames,param_1,uVar2,param_3,param_4,param_5);
            if (cVar1 == '\0') {
              return;
            }
            param_1 = *puVar4;
          }
          if (param_1 <= puVar4[1]) {
            uVar2 = puVar4[1] + 1;
            if (local_44 <= uVar2) {
              icu_76_godot::enumAlgNames(puVar4,param_1,local_44,param_3,param_4,param_5);
              return;
            }
            cVar1 = icu_76_godot::enumAlgNames(puVar4,param_1,uVar2,param_3,param_4,param_5);
            if (cVar1 == '\0') {
              return;
            }
            param_1 = puVar4[1] + 1;
          }
          puVar4 = (uint *)((long)puVar4 + (ulong)*(ushort *)((long)puVar4 + 10));
        }
        icu_76_godot::enumNames(icu_76_godot::uCharNames,param_1,local_44,param_3,param_4,param_5);
        return;
      }
    }
  }
  return;
}



undefined4 uprv_getMaxCharNameLength_76_godot(void)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  cVar1 = icu_76_godot::calcNameSetsLengths((UErrorCode *)&local_14);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = icu_76_godot::gMaxNameLength;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uprv_getCharNameCharacters_76_godot(uint *param_1,USetAdder *param_2)

{
  charSetToUSet(param_1,param_2);
  return;
}



int uchar_swapNames_76_godot
              (UDataSwapper *param_1,long param_2,int param_3,undefined4 *param_4,
              UErrorCode *param_5)

{
  byte *pbVar1;
  short *psVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  long lVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void *__src;
  byte *pbVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *__src_00;
  undefined8 *puVar23;
  int iVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint uVar28;
  long lVar29;
  long in_FS_OFFSET;
  byte bVar30;
  ushort local_6e8 [31];
  ushort local_6aa;
  ushort local_698 [31];
  ushort local_65a;
  undefined8 uStack_650;
  short local_648 [4];
  undefined1 auStack_640 [504];
  short local_448 [255];
  byte local_249 [257];
  byte local_148 [264];
  long local_40;
  
  bVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = udata_swapDataHeader_76_godot();
  if ((param_5 != (UErrorCode *)0x0) && (*(int *)param_5 < 1)) {
    if ((*(short *)(param_2 + 0xc) == 0x6e75) &&
       ((*(short *)(param_2 + 0xe) == 0x6d61 && (*(char *)(param_2 + 0x10) == '\x01')))) {
      __src_00 = (undefined4 *)(param_2 + iVar10);
      if (param_4 != (undefined4 *)0x0) {
        param_4 = (undefined4 *)((long)iVar10 + (long)param_4);
      }
      if (param_3 < 0) {
        iVar24 = 0;
        uVar28 = (**(code **)(param_1 + 0x10))(__src_00[3]);
        uVar11 = uVar28 + 4;
        iVar20 = (**(code **)(param_1 + 0x10))(*(undefined4 *)((long)__src_00 + (ulong)uVar28));
        if (iVar20 != 0) {
          do {
            iVar24 = iVar24 + 1;
            uVar7 = (**(code **)(param_1 + 8))(*(undefined2 *)((long)__src_00 + (ulong)uVar11 + 10))
            ;
            uVar11 = uVar11 + uVar7;
          } while (iVar20 != iVar24);
        }
LAB_00102fa5:
        iVar10 = uVar11 + iVar10;
        goto LAB_00102ef2;
      }
      uVar28 = param_3 - iVar10;
      if (((int)uVar28 < 0x14) ||
         (uVar11 = (**(code **)(param_1 + 0x10))(__src_00[3]), uVar28 < uVar11)) {
        udata_printError_76_godot
                  (param_1,"uchar_swapNames(): too few bytes (%d after header) for unames.icu\n",
                   uVar28);
        *(undefined4 *)param_5 = 8;
        goto LAB_00102ef0;
      }
      if (param_4 != __src_00) {
        memcpy(param_4,__src_00,(long)(int)uVar28);
      }
      uVar12 = (**(code **)(param_1 + 0x10))(*__src_00);
      uVar13 = (**(code **)(param_1 + 0x10))(__src_00[1]);
      uVar14 = (**(code **)(param_1 + 0x10))(__src_00[2]);
      (**(code **)(param_1 + 0x38))(param_1,__src_00,0x10,param_4,param_5);
      uVar7 = (**(code **)(param_1 + 8))(*(undefined2 *)(__src_00 + 4));
      (**(code **)(param_1 + 0x30))(param_1,__src_00 + 4,2,param_4 + 4,param_5);
      uVar9 = 0x200;
      if (uVar7 < 0x201) {
        uVar9 = uVar7;
      }
      uVar19 = (uint)uVar9;
      if (uVar7 == 0) {
        uVar19 = 0;
        uVar7 = 0;
LAB_00102b56:
        lVar25 = (ulong)uVar19 * 2;
        psVar2 = local_648 + uVar19;
        uVar19 = (0x200 - uVar19) * 2;
        if (uVar19 < 8) {
          if ((uVar19 & 4) == 0) {
            if ((uVar19 != 0) && (*(undefined1 *)psVar2 = 0, (uVar19 & 2) != 0)) {
              *(undefined2 *)((long)local_648 + (ulong)uVar19 + lVar25 + -2) = 0;
            }
          }
          else {
            psVar2[0] = 0;
            psVar2[1] = 0;
            *(undefined4 *)((long)local_648 + (ulong)uVar19 + lVar25 + -4) = 0;
          }
        }
        else {
          psVar2[0] = 0;
          psVar2[1] = 0;
          psVar2[2] = 0;
          psVar2[3] = 0;
          *(undefined8 *)((long)&uStack_650 + (ulong)uVar19 + lVar25) = 0;
          puVar23 = (undefined8 *)((ulong)(auStack_640 + lVar25) & 0xfffffffffffffff8);
          for (uVar18 = (ulong)(uVar19 + ((int)psVar2 -
                                         (int)(undefined8 *)
                                              ((ulong)(auStack_640 + lVar25) & 0xfffffffffffffff8))
                               >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar23 = 0;
            puVar23 = puVar23 + (ulong)bVar30 * -2 + 1;
          }
        }
      }
      else {
        lVar25 = 0;
        do {
          sVar8 = udata_readInt16_76_godot
                            (param_1,(int)*(short *)((long)__src_00 + lVar25 * 2 + 0x12));
          local_648[lVar25] = sVar8;
          lVar25 = lVar25 + 1;
        } while ((uint)lVar25 < uVar19);
        if (uVar7 < 0x200) goto LAB_00102b56;
      }
      uVar19 = (uint)uVar7;
      makeTokenMap(param_1,local_648,uVar7,local_249 + 1,param_5);
      uVar9 = 0x100;
      if (0xff < uVar7) {
        uVar9 = uVar7;
      }
      makeTokenMap(param_1,local_448,uVar9 - 0x100,local_148,param_5);
      if (*(int *)param_5 < 1) {
        __src = (void *)uprv_malloc_76_godot((long)(int)(uVar19 * 2));
        if (__src == (void *)0x0) {
          udata_printError_76_godot(param_1,"out of memory swapping %u unames.icu tokens\n",uVar19);
          *(undefined4 *)param_5 = 7;
        }
        else {
          lVar25 = (long)__src_00 + 0x12;
          if (uVar19 != 0) {
            lVar29 = 1;
            do {
              (**(code **)(param_1 + 0x30))
                        (param_1,lVar25,2,(void *)((long)__src + (ulong)local_249[lVar29] * 2),
                         param_5);
              if (uVar19 <= (uint)lVar29) goto LAB_00102ca8;
              lVar29 = lVar29 + 1;
              lVar25 = lVar25 + 2;
            } while (lVar29 != 0x101);
            if (0x100 < uVar19) {
              uVar18 = 0x100;
              lVar25 = (long)__src_00 + 0x212;
              do {
                uVar16 = uVar18 & 0xff;
                uVar21 = (uint)uVar18;
                uVar22 = uVar21 + 1;
                uVar18 = (ulong)uVar22;
                (**(code **)(param_1 + 0x30))
                          (param_1,lVar25,2,
                           (void *)((long)__src +
                                   ((ulong)local_148[uVar16] + (ulong)(uVar21 & 0xffffff00)) * 2),
                           param_5);
                lVar25 = lVar25 + 2;
              } while (uVar22 != uVar19);
            }
          }
LAB_00102ca8:
          memcpy((void *)((long)param_4 + 0x12),__src,(long)(int)(uVar19 * 2));
          uprv_free_76_godot(__src);
          udata_swapInvStringBlock_76_godot
                    (param_1,(long)__src_00 + (ulong)uVar12,uVar13 - uVar12,
                     (long)param_4 + (ulong)uVar12,param_5);
          if (*(int *)param_5 < 1) {
            puVar3 = (undefined2 *)((long)__src_00 + (ulong)uVar13);
            uVar7 = (**(code **)(param_1 + 8))(*puVar3);
            (**(code **)(param_1 + 0x30))
                      (param_1,puVar3,((uint)uVar7 + (uint)uVar7 * 2) * 2 + 2,
                       (long)param_4 + (ulong)uVar13,param_5);
            if (param_1[1] != param_1[3]) {
              uVar12 = uVar11 - uVar14;
              pbVar1 = (byte *)((long)__src_00 + (ulong)uVar14);
              pbVar27 = (byte *)((ulong)uVar14 + (long)param_4);
joined_r0x00102d5e:
              if (0x20 < uVar12) {
                pbVar15 = (byte *)icu_76_godot::expandGroupLengths(pbVar1,local_6e8,local_698);
                iVar20 = (uint)local_6aa + (uint)local_65a;
                pbVar26 = pbVar27 + ((long)pbVar15 - (long)pbVar1);
                uVar12 = (uVar12 - iVar20) - (int)((long)pbVar15 - (long)pbVar1);
                for (; pbVar27 = pbVar26, pbVar1 = pbVar15, iVar20 != 0; iVar20 = iVar20 + -2) {
                  while (sVar8 = local_648[*pbVar15], *pbVar27 = local_249[(ulong)*pbVar15 + 1],
                        sVar8 != -2) {
                    iVar20 = iVar20 + -1;
                    pbVar15 = pbVar15 + 1;
                    pbVar27 = pbVar27 + 1;
                    pbVar1 = pbVar15;
                    if (iVar20 == 0) goto joined_r0x00102d5e;
                  }
                  pbVar1 = pbVar15 + 1;
                  pbVar26 = pbVar27 + 2;
                  pbVar15 = pbVar15 + 2;
                  pbVar27[1] = local_148[*pbVar1];
                }
                goto joined_r0x00102d5e;
              }
            }
            puVar4 = (undefined4 *)((long)__src_00 + (ulong)uVar11);
            iVar20 = (**(code **)(param_1 + 0x10))(*puVar4);
            (**(code **)(param_1 + 0x38))(param_1,puVar4,4,(long)param_4 + (ulong)uVar11,param_5);
            uVar11 = uVar11 + 4;
            if (iVar20 != 0) {
              iVar24 = 0;
              do {
                if (uVar28 < uVar11) {
                  udata_printError_76_godot
                            (param_1,
                             "uchar_swapNames(): too few bytes (%d after header) for unames.icu algorithmic range %u\n"
                             ,uVar28,iVar24);
                  *(undefined4 *)param_5 = 8;
                  goto LAB_00102ef0;
                }
                lVar25 = (long)__src_00 + (ulong)uVar11;
                lVar29 = (ulong)uVar11 + (long)param_4;
                uVar7 = (**(code **)(param_1 + 8))(*(undefined2 *)(lVar25 + 10));
                uVar11 = uVar11 + uVar7;
                (**(code **)(param_1 + 0x38))(param_1,lVar25,8,lVar29,param_5);
                (**(code **)(param_1 + 0x30))(param_1,lVar25 + 10,2,lVar29 + 10,param_5);
                cVar5 = *(char *)(lVar25 + 8);
                if (cVar5 == '\0') {
                  sVar17 = strlen((char *)(lVar25 + 0xc));
                  (**(code **)(param_1 + 0x48))
                            (param_1,(char *)(lVar25 + 0xc),sVar17 & 0xffffffff,lVar29 + 0xc,param_5
                            );
                  if (0 < *(int *)param_5) {
                    udata_printError_76_godot
                              (param_1,
                               "uchar_swapNames(prefix string of algorithmic range %u) failed\n",
                               iVar24);
                    goto LAB_00102ef0;
                  }
                }
                else {
                  if (cVar5 != '\x01') {
                    udata_printError_76_godot
                              (param_1,
                               "uchar_swapNames(): unknown type %u of algorithmic range %u\n",cVar5,
                               iVar24);
                    *(undefined4 *)param_5 = 0x10;
                    goto LAB_00102ef0;
                  }
                  bVar30 = *(byte *)(lVar25 + 9);
                  (**(code **)(param_1 + 0x30))
                            (param_1,lVar25 + 0xc,(uint)bVar30 * 2,lVar29 + 0xc,param_5);
                  lVar6 = (ulong)bVar30 * 2;
                  lVar25 = lVar25 + 0xc + lVar6;
                  uVar12 = (uVar11 + (int)__src_00) - (int)lVar25;
                  do {
                    uVar13 = uVar12;
                    if (uVar13 == 0) {
                      uVar13 = 0;
                      break;
                    }
                    uVar12 = uVar13 - 1;
                  } while (*(char *)(lVar25 + (ulong)(uVar13 - 1)) != '\0');
                  (**(code **)(param_1 + 0x48))(param_1,lVar25,uVar13,lVar29 + 0xc + lVar6,param_5);
                }
                iVar24 = iVar24 + 1;
              } while (iVar20 != iVar24);
            }
            goto LAB_00102fa5;
          }
          udata_printError_76_godot(param_1,"uchar_swapNames(token strings) failed\n");
        }
      }
    }
    else {
      udata_printError_76_godot
                (param_1,
                 "uchar_swapNames(): data format %02x.%02x.%02x.%02x (format version %02x) is not recognized as unames.icu\n"
                 ,*(undefined1 *)(param_2 + 0xc),*(undefined1 *)(param_2 + 0xd),
                 *(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf),
                 *(char *)(param_2 + 0x10));
      *(undefined4 *)param_5 = 0x10;
    }
  }
LAB_00102ef0:
  iVar10 = 0;
LAB_00102ef2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}


