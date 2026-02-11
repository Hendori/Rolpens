
uint cksum_slice8(FILE *param_1,ulong *param_2,long param_3)

{
  uint *__ptr;
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  size_t sVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 auStack_10030 [65536];
  
  puVar4 = &stack0xffffffffffffffd0;
  do {
    puVar10 = puVar4;
    *(undefined8 *)(puVar10 + -0x1000) = *(undefined8 *)(puVar10 + -0x1000);
    puVar4 = puVar10 + -0x1000;
  } while (puVar10 + -0x1000 != auStack_10030);
  *(long *)(puVar10 + -0x1020) = param_3;
  *(undefined8 *)(puVar10 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_001002ac:
    uVar5 = 0;
  }
  else {
    uVar11 = 0;
    __ptr = (uint *)(puVar10 + -0x1018);
    uVar12 = 0;
    do {
      *(undefined8 *)(puVar10 + -0x1030) = 0x100095;
      sVar6 = fread_unlocked(__ptr,1,0x10000,param_1);
      *(size_t *)(puVar10 + -0x1028) = sVar6;
      if (sVar6 == 0) {
        uVar5 = param_1->_flags;
        break;
      }
      bVar13 = CARRY8(uVar11,sVar6);
      uVar11 = uVar11 + sVar6;
      if (bVar13) {
        *(undefined8 *)(puVar10 + -0x1030) = 0x1002a6;
        piVar8 = __errno_location();
        *piVar8 = 0x4b;
        goto LAB_001002ac;
      }
      puVar9 = __ptr;
      if (sVar6 < 8) {
LAB_00100172:
        uVar12 = uVar12 << 8 ^
                 *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar12 >> 0x18) ^ (byte)*puVar9) * 8);
        if (sVar6 != 1) {
          lVar2 = *(long *)(puVar10 + -0x1028);
          uVar12 = uVar12 << 8 ^
                   *(ulong *)(&crctab +
                             (ulong)(byte)((byte)(uVar12 >> 0x18) ^ *(byte *)((long)puVar9 + 1)) * 8
                             );
          if ((((lVar2 != 2) &&
               (uVar12 = uVar12 << 8 ^
                         *(ulong *)(&crctab +
                                   (ulong)(byte)((byte)(uVar12 >> 0x18) ^
                                                *(byte *)((long)puVar9 + 2)) * 8), lVar2 != 3)) &&
              (uVar12 = uVar12 << 8 ^
                        *(ulong *)(&crctab +
                                  (ulong)(byte)((byte)(uVar12 >> 0x18) ^ *(byte *)((long)puVar9 + 3)
                                               ) * 8), lVar2 != 4)) &&
             ((uVar12 = uVar12 << 8 ^
                        *(ulong *)(&crctab +
                                  (ulong)(byte)((byte)(uVar12 >> 0x18) ^ (byte)puVar9[1]) * 8),
              lVar2 != 5 &&
              (uVar12 = uVar12 << 8 ^
                        *(ulong *)(&crctab +
                                  (ulong)(byte)((byte)(uVar12 >> 0x18) ^ *(byte *)((long)puVar9 + 5)
                                               ) * 8), lVar2 != 6)))) {
            uVar12 = uVar12 << 8 ^
                     *(ulong *)(&crctab +
                               (ulong)(byte)((byte)(uVar12 >> 0x18) ^ *(byte *)((long)puVar9 + 6)) *
                               8);
          }
        }
      }
      else {
        uVar7 = sVar6 - 8;
        do {
          uVar5 = *puVar9;
          uVar1 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar12 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                   ^ uVar12;
          uVar12 = *(ulong *)((uVar12 & 0xff) * 8 + 0x103000) ^
                   *(ulong *)((ulong)(uVar1 & 0xff) * 8 + 0x102800) ^
                   *(ulong *)(&crctab + (ulong)(uVar1 >> 0x18) * 8) ^
                   *(ulong *)((uVar12 >> 0x18 & 0xff) * 8 + 0x104800) ^
                   *(ulong *)((uVar12 >> 0x10 & 0xff) * 8 + 0x104000) ^
                   *(ulong *)((uVar12 >> 8 & 0xff) * 8 + 0x103800) ^
                   *(ulong *)((ulong)(uVar1 >> 8 & 0xff) * 8 + 0x102000) ^
                   *(ulong *)((ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x101800);
        } while (puVar9 != (uint *)(puVar10 + ((uVar7 & 0xfffffffffffffff8) - 0x1010)));
        *(ulong *)(puVar10 + -0x1028) = *(ulong *)(puVar10 + -0x1028) & 7;
        sVar6 = *(size_t *)(puVar10 + -0x1028);
        puVar9 = (uint *)(puVar10 + ((uVar7 & 0xfffffffffffffff8) - 0x1010));
        if (sVar6 != 0) goto LAB_00100172;
      }
      uVar5 = param_1->_flags;
    } while ((uVar5 & 0x10) == 0);
    puVar3 = *(ulong **)(puVar10 + -0x1020);
    *param_2 = uVar12;
    *puVar3 = uVar11;
    uVar5 = (uVar5 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar10 + 0xeff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -0x1030) = &UNK_001002b5;
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 crc_sum_stream(undefined8 param_1,uint *param_2,ulong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  if (cksum_fp_0 == (code *)0x0) {
    if (((__cpu_features2 & 2) == 0) || ((~_DAT_0010103c & 0x208000) != 0)) {
      if (cksum_debug != '\0') {
        uVar2 = dcgettext(0,"avx512 support not detected",5);
        error(0,0,&_LC1,uVar2);
      }
      cksum_fp_0 = (code *)0x0;
      if (((__cpu_features2 & 2) == 0) || ((_DAT_0010103c & 0x400) == 0)) {
        if (cksum_debug != '\0') {
          uVar2 = dcgettext(0,"avx2 support not detected",5);
          error(0,0,&_LC1,uVar2);
        }
        cksum_fp_0 = (code *)0x0;
        if ((~_DAT_0010103c & 0x80200) == 0) {
          if (cksum_debug != '\0') {
            uVar2 = dcgettext(0,"using pclmul hardware support",5);
            error(0,0,&_LC1,uVar2);
          }
          cksum_fp_0 = cksum_pclmul;
        }
        else {
          if (cksum_debug != '\0') {
            uVar2 = dcgettext(0,"pclmul support not detected",5);
            error(0,0,&_LC1,uVar2);
          }
          cksum_fp_0 = cksum_slice8;
        }
      }
      else {
        if (cksum_debug != '\0') {
          uVar2 = dcgettext(0,"using avx2 hardware support",5);
          error(0,0,&_LC1,uVar2);
        }
        cksum_fp_0 = cksum_avx2;
      }
    }
    else {
      if (cksum_debug != '\0') {
        uVar2 = dcgettext(0,"using avx512 hardware support",5);
        error(0,0,&_LC1,uVar2);
      }
      cksum_fp_0 = cksum_avx512;
    }
  }
  cVar1 = (*cksum_fp_0)(param_1,&local_38,&local_40);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    *param_3 = local_40;
    uVar4 = local_38;
    for (uVar3 = local_40; uVar3 != 0; uVar3 = uVar3 >> 8) {
      uVar4 = uVar4 << 8 ^
              *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar4 >> 0x18) ^ (byte)uVar3) * 8);
    }
    uVar2 = 0;
    *param_2 = ~(uint)uVar4;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int crc32b_sum_stream(FILE *param_1,undefined4 *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar8 = puVar1;
    *(undefined8 *)(puVar8 + -0x1000) = *(undefined8 *)(puVar8 + -0x1000);
    puVar1 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar8 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (undefined4 *)0x0 || param_3 == (ulong *)0x0) || (param_1 == (FILE *)0x0)) {
LAB_0010069b:
    iVar3 = -1;
  }
  else {
    if (cksum_debug != '\0') {
      pcVar9 = "using pclmul hardware support";
      if ((~_DAT_0010103c & 0x80200) != 0) {
        pcVar9 = "pclmul support not detected";
      }
      *(undefined8 *)(puVar8 + -0x1020) = 0x1006d5;
      uVar6 = dcgettext(0,pcVar9,5);
      *(undefined8 *)(puVar8 + -0x1020) = 0x1006ea;
      error(0,0,&_LC1,uVar6);
    }
    uVar7 = 0;
    uVar2 = 0;
    do {
      *(undefined8 *)(puVar8 + -0x1020) = 0x10064d;
      sVar4 = fread_unlocked(puVar8 + -0x1018,1,0x10000,param_1);
      if (sVar4 == 0) break;
      bVar10 = CARRY8(uVar7,sVar4);
      uVar7 = uVar7 + sVar4;
      if (bVar10) {
        *(undefined8 *)(puVar8 + -0x1020) = 0x100695;
        piVar5 = __errno_location();
        *piVar5 = 0x4b;
        goto LAB_0010069b;
      }
      *(undefined8 *)(puVar8 + -0x1020) = 0x10062f;
      uVar2 = crc32_update(uVar2,puVar8 + -0x1018);
    } while ((param_1->_flags & 0x10) == 0);
    *param_2 = uVar2;
    iVar3 = param_1->_flags;
    *param_3 = uVar7;
    iVar3 = (iVar3 << 0x1a) >> 0x1f;
  }
  if (*(long *)(puVar8 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -0x1020) = &UNK_001006f4;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_crc(undefined8 param_1,undefined8 param_2,uint *param_3,char param_4,undefined8 param_5,
               byte param_6,char param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  _IO_FILE *p_Var5;
  byte bVar7;
  int iVar6;
  
  p_Var5 = _stdout;
  uVar1 = *param_3;
  if (param_4 == '\0') {
    __printf_chk(2,"%u %ju",uVar1,param_8);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC8,param_1);
    }
    pbVar3 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = param_6;
      return;
    }
    __overflow(_stdout,(uint)param_6);
    return;
  }
  uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8;
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)(uVar1 >> 0x18);
  }
  else {
    iVar6 = __overflow(_stdout,uVar1 >> 0x18);
    if (iVar6 == -1) {
      return;
    }
  }
  bVar7 = (byte)((uVar1 & 0xff0000) >> 0x10);
  pbVar3 = (byte *)p_Var5->_IO_write_ptr;
  if (pbVar3 < p_Var5->_IO_write_end) {
    p_Var5->_IO_write_ptr = (char *)(pbVar3 + 1);
    *pbVar3 = bVar7;
  }
  else {
    iVar6 = __overflow(p_Var5,(uint)bVar7);
    if (iVar6 == -1) {
      return;
    }
  }
  pcVar2 = p_Var5->_IO_write_ptr;
  if (pcVar2 < p_Var5->_IO_write_end) {
    p_Var5->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)((uVar1 & 0xff00) >> 8);
  }
  else {
    iVar6 = __overflow(p_Var5,(int)(uVar4 << 8) >> 0x18 & 0xff);
    if (iVar6 == -1) {
      return;
    }
  }
  pcVar2 = p_Var5->_IO_write_ptr;
  if (pcVar2 < p_Var5->_IO_write_end) {
    p_Var5->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar1;
    return;
  }
  __overflow(p_Var5,(int)(uVar4 | uVar1 << 0x18) >> 0x18 & 0xff);
  return;
}


