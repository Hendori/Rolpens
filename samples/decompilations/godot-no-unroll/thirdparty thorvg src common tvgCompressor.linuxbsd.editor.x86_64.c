
/* tvg::outputSequence(tvg::Dictionary const&, int, unsigned char*&, int, int&, int&) */

undefined8
tvg::outputSequence(Dictionary *param_1,int param_2,uchar **param_3,int param_4,int *param_5,
                   int *param_6)

{
  uchar uVar1;
  uint uVar2;
  uchar *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uchar *puVar9;
  long in_FS_OFFSET;
  undefined8 uStack_1020;
  uchar local_1018 [4104];
  long local_10;
  
  lVar6 = (long)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  do {
    lVar8 = lVar4;
    uVar2 = *(uint *)(param_1 + lVar6 * 8 + 8);
    iVar5 = *(int *)(param_1 + lVar6 * 8 + 4);
    lVar6 = (long)iVar5;
    local_1018[lVar8] = (uchar)uVar2;
    lVar4 = lVar8 + 1;
  } while (-1 < iVar5);
  *param_6 = uVar2 & 0xff;
  puVar9 = local_1018 + (int)lVar8;
  iVar5 = *param_5;
  do {
    if (param_4 <= iVar5) {
      uVar7 = 0;
      goto LAB_00100092;
    }
    puVar3 = *param_3;
    uVar1 = *puVar9;
    puVar9 = puVar9 + -1;
    *param_3 = puVar3 + 1;
    *puVar3 = uVar1;
    iVar5 = *param_5 + 1;
    *param_5 = iVar5;
  } while (puVar9 != local_1018 + ((int)lVar8 - lVar8) + -1);
  uVar7 = 1;
LAB_00100092:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  uStack_1020 = &UNK_001000b3;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::lzwDecode(unsigned char const*, unsigned int, unsigned int, unsigned int) */

void * tvg::lzwDecode(uchar *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_8030 [32768];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar2;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar2 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_8030);
  *(uchar **)(puVar11 + -0x1048) = param_1;
  *(uint *)(puVar11 + -0x103c) = param_4;
  *(undefined8 *)(puVar11 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(puVar11 + -0x1028) = 0;
  *(undefined4 *)(puVar11 + -0x1024) = 0;
  *(undefined8 *)(puVar11 + -0x1050) = 0x100120;
  pvVar4 = malloc((ulong)param_4);
  *(undefined4 *)(puVar11 + -0x1018) = 0x100;
  *(void **)(puVar11 + -0x1020) = pvVar4;
  puVar5 = (undefined8 *)(puVar11 + -0x1014);
  auVar19 = __LC0;
  do {
    auVar20._0_4_ = auVar19._0_4_ + __LC1;
    auVar20._4_4_ = auVar19._4_4_ + _UNK_00100af4;
    auVar20._8_4_ = auVar19._8_4_ + _UNK_00100af8;
    auVar20._12_4_ = auVar19._12_4_ + _UNK_00100afc;
    puVar6 = puVar5 + 4;
    *puVar5 = CONCAT44(auVar19._0_4_,0xffffffff);
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(int *)((long)puVar5 + 0x14) = auVar19._4_4_;
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(int *)((long)puVar5 + 0x14) = auVar19._8_4_;
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    *(int *)((long)puVar5 + 0x1c) = auVar19._12_4_;
    puVar5 = puVar6;
    auVar19 = auVar20;
  } while (puVar6 != (undefined8 *)(puVar11 + -0x814));
  if (0 < (int)param_3) {
    *(void **)(puVar11 + -0x1038) = pvVar4;
    iVar12 = 0;
    iVar10 = 0;
    iVar14 = 0;
    iVar16 = 9;
    iVar17 = -1;
    do {
      if (iVar16 < 1) {
        uVar13 = 0;
        iVar18 = 0;
        goto LAB_00100206;
      }
LAB_001001ab:
      uVar13 = 0;
      iVar18 = 0;
      do {
        if ((int)param_3 <= iVar12) break;
        lVar7 = (long)iVar14;
        bVar8 = (byte)iVar10;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 1;
        if (iVar10 == 8) {
          iVar14 = iVar14 + 1;
          iVar10 = 0;
        }
        iVar9 = iVar18 + 1;
        uVar13 = uVar13 ^ ((long)(int)-(uint)(((uint)*(byte *)(*(long *)(puVar11 + -0x1048) + lVar7)
                                              & 1 << (bVar8 & 0x1f)) != 0) ^ uVar13) &
                          1L << ((byte)iVar18 & 0x3f);
        iVar18 = iVar9;
      } while (iVar9 != iVar16);
      iVar18 = (int)uVar13;
LAB_00100206:
      if (iVar17 != -1) {
        iVar9 = *(int *)(puVar11 + -0x1018);
        *(int *)(puVar11 + -0x102c) = iVar14;
        if (iVar18 < iVar9) {
          *(int *)(puVar11 + -0x1030) = iVar17;
          *(undefined8 *)(puVar11 + -0x1050) = 0x100336;
          cVar3 = outputSequence((Dictionary *)(puVar11 + -0x1018),iVar18,
                                 (uchar **)(puVar11 + -0x1020),*(int *)(puVar11 + -0x103c),
                                 (int *)(puVar11 + -0x1024),(int *)(puVar11 + -0x1028));
          if (cVar3 == '\0') break;
          uVar1 = *(undefined4 *)(puVar11 + -0x1028);
          iVar14 = *(int *)(puVar11 + -0x102c);
          uVar15 = *(undefined4 *)(puVar11 + -0x1030);
        }
        else {
          *(int *)(puVar11 + -0x1030) = iVar17;
          *(undefined8 *)(puVar11 + -0x1050) = 0x100248;
          cVar3 = outputSequence((Dictionary *)(puVar11 + -0x1018),iVar17,
                                 (uchar **)(puVar11 + -0x1020),*(int *)(puVar11 + -0x103c),
                                 (int *)(puVar11 + -0x1024),(int *)(puVar11 + -0x1028));
          if ((cVar3 == '\0') || (*(int *)(puVar11 + -0x103c) <= *(int *)(puVar11 + -0x1024)))
          break;
          puVar2 = *(undefined1 **)(puVar11 + -0x1020);
          uVar1 = *(undefined4 *)(puVar11 + -0x1028);
          uVar15 = *(undefined4 *)(puVar11 + -0x1030);
          iVar14 = *(int *)(puVar11 + -0x102c);
          *(int *)(puVar11 + -0x1024) = *(int *)(puVar11 + -0x1024) + 1;
          *puVar2 = (char)uVar1;
          *(undefined1 **)(puVar11 + -0x1020) = puVar2 + 1;
        }
        if (iVar9 != 0x1000) {
          lVar7 = (long)iVar9;
          iVar9 = iVar9 + 1;
          *(undefined4 *)(puVar11 + lVar7 * 8 + -0x1014) = uVar15;
          *(undefined4 *)(puVar11 + lVar7 * 8 + -0x1010) = uVar1;
          *(int *)(puVar11 + -0x1018) = iVar9;
        }
        if ((1 << ((byte)iVar16 & 0x1f) != iVar9) || (iVar16 = iVar16 + 1, iVar16 < 0xd))
        goto LAB_001002ae;
        *(undefined4 *)(puVar11 + -0x1018) = 0x100;
        iVar17 = -1;
        iVar16 = 9;
        if ((int)param_3 <= iVar12) break;
        goto LAB_001001ab;
      }
      if (*(int *)(puVar11 + -0x103c) <= *(int *)(puVar11 + -0x1024)) break;
      puVar2 = *(undefined1 **)(puVar11 + -0x1020);
      *(int *)(puVar11 + -0x1028) = iVar18;
      *(int *)(puVar11 + -0x1024) = *(int *)(puVar11 + -0x1024) + 1;
      *puVar2 = (char)uVar13;
      *(undefined1 **)(puVar11 + -0x1020) = puVar2 + 1;
LAB_001002ae:
      iVar17 = iVar18;
    } while (iVar12 < (int)param_3);
    pvVar4 = *(void **)(puVar11 + -0x1038);
  }
  if (*(long *)(puVar11 + 0x6ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + -0x1050) = &UNK_0010039a;
    __stack_chk_fail();
  }
  return pvVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::lzwEncode(unsigned char const*, unsigned int, unsigned int*, unsigned int*) */

void * tvg::lzwEncode(uchar *param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint *puVar9;
  void *pvVar10;
  byte bVar11;
  size_t sVar12;
  int iVar13;
  ulong uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long in_FS_OFFSET;
  undefined1 local_8030 [32768];
  
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar15 = puVar3;
    *(undefined8 *)(puVar15 + -0x1000) = *(undefined8 *)(puVar15 + -0x1000);
    puVar3 = puVar15 + -0x1000;
  } while (puVar15 + -0x1000 != local_8030);
  *(undefined8 *)(puVar15 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(puVar15 + -0x1018) = 0x100;
  puVar6 = (undefined8 *)(puVar15 + -0x1014);
  iVar17 = __LC0;
  iVar20 = _UNK_00100ae4;
  iVar13 = _UNK_00100ae8;
  iVar21 = _UNK_00100aec;
  do {
    puVar7 = puVar6 + 4;
    *puVar6 = CONCAT44(iVar17,0xffffffff);
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(int *)((long)puVar6 + 0x14) = iVar20;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(int *)((long)puVar6 + 0x14) = iVar13;
    *(undefined4 *)(puVar6 + 3) = 0xffffffff;
    *(int *)((long)puVar6 + 0x1c) = iVar21;
    puVar6 = puVar7;
    iVar17 = iVar17 + __LC1;
    iVar20 = iVar20 + _UNK_00100af4;
    iVar13 = iVar13 + _UNK_00100af8;
    iVar21 = iVar21 + _UNK_00100afc;
  } while ((undefined8 *)(puVar15 + -0x814) != puVar7);
  *(undefined8 *)(puVar15 + -0x1070) = 0x100450;
  pvVar8 = calloc(0x400,1);
  if (param_2 == 0) {
    uVar18 = 0;
    uVar23 = 0;
  }
  else {
    *(undefined4 *)(puVar15 + -0x1060) = 0x400;
    pbVar19 = param_1 + param_2;
    iVar13 = 0;
    *(undefined4 *)(puVar15 + -0x1050) = 0;
    iVar17 = 0;
    uVar14 = 0xffffffff;
    *(uint **)(puVar15 + -0x1048) = param_3;
    iVar20 = 9;
    *(uint **)(puVar15 + -0x1040) = param_4;
    do {
      uVar18 = (uint)uVar14;
      uVar23 = (uint)*param_1;
      if (uVar18 == 0xffffffff) {
LAB_0010061e:
        uVar14 = (ulong)(int)uVar23;
      }
      else {
        iVar21 = *(int *)(puVar15 + -0x1018);
        if (0 < iVar21) {
          puVar9 = (uint *)(puVar15 + -0x1010);
          iVar22 = 0;
          do {
            if ((puVar9[-1] == uVar18) && (uVar23 == *puVar9)) {
              uVar14 = (ulong)iVar22;
              goto LAB_001004dc;
            }
            iVar22 = iVar22 + 1;
            puVar9 = puVar9 + 2;
          } while (iVar21 != iVar22);
        }
        if (0 < iVar20) {
          *(byte **)(puVar15 + -0x1058) = pbVar19;
          iVar16 = 0;
          iVar22 = *(int *)(puVar15 + -0x1060);
          *(uint *)(puVar15 + -0x1028) = uVar18;
          do {
            pbVar19 = (byte *)((long)iVar17 + (long)pvVar8);
            bVar11 = (byte)iVar13;
            iVar13 = iVar13 + 1;
            *pbVar19 = (-((1L << ((byte)iVar16 & 0x3f) & (long)(int)uVar18) != 0U) ^ *pbVar19) &
                       (byte)(1 << (bVar11 & 0x1f)) ^ *pbVar19;
            if (iVar13 == 8) {
              iVar17 = iVar17 + 1;
              iVar13 = 0;
              if (iVar17 == iVar22) {
                if (iVar22 << 4 < 1) {
                  *(undefined4 *)(puVar15 + -0x1060) = 1;
                  sVar12 = 1;
                }
                else {
                  iVar5 = (iVar22 << 4) >> 3;
                  *(int *)(puVar15 + -0x1060) = iVar5;
                  if (iVar5 <= iVar22) goto LAB_00100650;
                  sVar12 = (size_t)iVar5;
                }
                *(void **)(puVar15 + -0x1020) = pvVar8;
                *(int *)(puVar15 + -0x1024) = iVar20;
                *(int *)(puVar15 + -0x1030) = iVar22;
                *(undefined8 *)(puVar15 + -0x1070) = 0x1006fb;
                pvVar8 = malloc(sVar12);
                *(void **)(puVar15 + -0x1038) = pvVar8;
                *(undefined8 *)(puVar15 + -0x1070) = 0x100710;
                __memset_chk(pvVar8,0,sVar12,sVar12);
                lVar1 = *(long *)(puVar15 + -0x1020);
                iVar17 = *(int *)(puVar15 + -0x1030);
                iVar20 = *(int *)(puVar15 + -0x1024);
                if (lVar1 != 0) {
                  *(int *)(puVar15 + -0x1020) = iVar20;
                  *(int *)(puVar15 + -0x1024) = iVar17;
                  *(long *)(puVar15 + -0x1030) = lVar1;
                  *(undefined8 *)(puVar15 + -0x1070) = 0x10074c;
                  __memcpy_chk(*(undefined8 *)(puVar15 + -0x1038),lVar1,(long)iVar17,sVar12);
                  *(undefined8 *)(puVar15 + -0x1070) = 0x100756;
                  free(*(void **)(puVar15 + -0x1030));
                  iVar20 = *(int *)(puVar15 + -0x1020);
                  iVar17 = *(int *)(puVar15 + -0x1024);
                }
                pvVar8 = *(void **)(puVar15 + -0x1038);
                iVar22 = *(int *)(puVar15 + -0x1060);
                iVar13 = 0;
              }
            }
LAB_00100650:
            iVar16 = iVar16 + 1;
          } while (iVar16 != iVar20);
          *(int *)(puVar15 + -0x1050) = *(int *)(puVar15 + -0x1050) + iVar20;
          uVar18 = *(uint *)(puVar15 + -0x1028);
          *(int *)(puVar15 + -0x1060) = iVar22;
          pbVar19 = *(byte **)(puVar15 + -0x1058);
        }
        if ((1 << ((byte)iVar20 & 0x1f) != iVar21) || (iVar20 = iVar20 + 1, iVar20 < 0xd)) {
          if (iVar21 != 0x1000) {
            *(uint *)(puVar15 + (long)iVar21 * 8 + -0x1014) = uVar18;
            *(uint *)(puVar15 + (long)iVar21 * 8 + -0x1010) = uVar23;
            *(int *)(puVar15 + -0x1018) = iVar21 + 1;
          }
          goto LAB_0010061e;
        }
        *(undefined4 *)(puVar15 + -0x1018) = 0x100;
        uVar14 = (ulong)(int)uVar23;
        iVar20 = 9;
      }
LAB_001004dc:
      param_1 = param_1 + 1;
    } while (param_1 != pbVar19);
    uVar18 = *(uint *)(puVar15 + -0x1050);
    param_3 = *(uint **)(puVar15 + -0x1048);
    param_4 = *(uint **)(puVar15 + -0x1040);
    if (0 < iVar20) {
      iVar21 = *(int *)(puVar15 + -0x1060);
      iVar22 = 0;
LAB_00100529:
      do {
        pbVar19 = (byte *)((long)iVar17 + (long)pvVar8);
        bVar11 = (byte)iVar13;
        iVar13 = iVar13 + 1;
        *pbVar19 = (-((1L << ((byte)iVar22 & 0x3f) & uVar14) != 0) ^ *pbVar19) &
                   (byte)(1 << (bVar11 & 0x1f)) ^ *pbVar19;
        if (iVar13 == 8) {
          iVar17 = iVar17 + 1;
          iVar13 = 0;
          if (iVar17 == iVar21) {
            if (iVar21 << 4 < 1) {
              sVar12 = 1;
              iVar16 = 1;
            }
            else {
              iVar16 = (iVar21 << 4) >> 3;
              sVar12 = (size_t)iVar16;
              if (iVar16 <= iVar21) {
                iVar22 = iVar22 + 1;
                if (iVar20 == iVar22) break;
                goto LAB_00100529;
              }
            }
            *(uint **)(puVar15 + -0x1048) = param_4;
            *(uint **)(puVar15 + -0x1050) = param_3;
            *(int *)(puVar15 + -0x1058) = iVar20;
            *(int *)(puVar15 + -0x1028) = iVar21;
            *(size_t *)(puVar15 + -0x1060) = sVar12;
            *(undefined8 *)(puVar15 + -0x1070) = 0x1007a5;
            pvVar10 = malloc(sVar12);
            uVar2 = *(undefined8 *)(puVar15 + -0x1060);
            *(void **)(puVar15 + -0x1060) = pvVar10;
            *(undefined8 *)(puVar15 + -0x1040) = uVar2;
            *(undefined8 *)(puVar15 + -0x1070) = 0x1007c1;
            __memset_chk(pvVar10,0,uVar2);
            iVar17 = *(int *)(puVar15 + -0x1028);
            iVar20 = *(int *)(puVar15 + -0x1058);
            param_3 = *(uint **)(puVar15 + -0x1050);
            param_4 = *(uint **)(puVar15 + -0x1048);
            if (pvVar8 != (void *)0x0) {
              *(undefined8 *)(puVar15 + -0x1070) = 0x1007f2;
              __memcpy_chk(*(undefined8 *)(puVar15 + -0x1060),pvVar8,(long)iVar17,
                           *(undefined8 *)(puVar15 + -0x1040));
              *(undefined8 *)(puVar15 + -0x1070) = 0x1007fa;
              free(pvVar8);
              param_4 = *(uint **)(puVar15 + -0x1048);
              param_3 = *(uint **)(puVar15 + -0x1050);
              iVar20 = *(int *)(puVar15 + -0x1058);
              iVar17 = *(int *)(puVar15 + -0x1028);
            }
            pvVar8 = *(void **)(puVar15 + -0x1060);
            iVar13 = 0;
            iVar21 = iVar16;
          }
        }
        iVar22 = iVar22 + 1;
      } while (iVar20 != iVar22);
      uVar18 = uVar18 + iVar20;
    }
    uVar4 = uVar18 + 7;
    if (-1 < (int)uVar18) {
      uVar4 = uVar18;
    }
    uVar23 = ((int)uVar4 >> 3) + 1;
    if ((uVar18 & 7) == 0) {
      uVar23 = (int)uVar4 >> 3;
    }
  }
  *param_3 = uVar23;
  *param_4 = uVar18;
  if (*(long *)(puVar15 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -0x1070) = &UNK_0010082c;
  __stack_chk_fail();
}



/* tvg::b64Decode(char const*, unsigned long, char**) */

long tvg::b64Decode(char *param_1,ulong param_2,char **param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != (char *)0x0 && param_2 != 0) && (param_3 != (char **)0x0)) {
    lVar7 = (param_2 >> 2) * 3;
    pcVar5 = (char *)malloc(lVar7 + 4);
    if (pcVar5 != (char *)0x0) {
      pcVar5[lVar7 + 3] = '\0';
      if (*param_1 == '\0') {
        lVar7 = 0;
      }
      else {
        lVar6 = 0;
        cVar2 = *param_1;
        while( true ) {
          cVar4 = param_1[1];
          lVar7 = lVar6;
          if (cVar4 == '\0') break;
          if (cVar2 < '!') {
            param_1 = param_1 + 1;
            cVar2 = cVar4;
          }
          else {
            cVar4 = b64Decode(char_const*,unsigned_long,char**)::B64_INDEX[cVar4];
            lVar7 = lVar6 + 1;
            pcVar5[lVar6] =
                 (cVar4 >> 4 & 3U) +
                 b64Decode(char_const*,unsigned_long,char**)::B64_INDEX[cVar2] * '\x04';
            cVar2 = param_1[2];
            if (cVar2 == '\0') break;
            bVar3 = param_1[3];
            if (((char)bVar3 < '\0' || cVar2 == '=') || (cVar2 == '.')) break;
            cVar2 = b64Decode(char_const*,unsigned_long,char**)::B64_INDEX[cVar2];
            lVar1 = lVar6 + 2;
            pcVar5[lVar7] = (cVar2 >> 2 & 0xfU) + cVar4 * '\x10';
            if ((bVar3 < 0x3e) && ((0xdfffbffffffffffeU >> ((long)(char)bVar3 & 0x3fU) & 1) == 0)) {
              *param_3 = pcVar5;
              return lVar1;
            }
            lVar6 = lVar6 + 3;
            pcVar5[lVar1] =
                 cVar2 * '@' + b64Decode(char_const*,unsigned_long,char**)::B64_INDEX[(char)bVar3];
            cVar2 = param_1[4];
            param_1 = param_1 + 4;
            lVar7 = lVar6;
            if (cVar2 == '\0') break;
          }
        }
      }
      *param_3 = pcVar5;
      return lVar7;
    }
  }
  return 0;
}



/* tvg::djb2Encode(char const*) */

long tvg::djb2Encode(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar1 = *param_1;
  pcVar3 = param_1 + 1;
  lVar2 = 0x1505;
  if (cVar1 == '\0') {
    return lVar2;
  }
  do {
    lVar2 = lVar2 * 0x21 + (long)cVar1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return lVar2;
}


