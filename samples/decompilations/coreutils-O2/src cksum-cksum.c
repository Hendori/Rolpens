
uint cksum_slice8(FILE *param_1,ulong *param_2,long param_3)

{
  uint *__ptr;
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 auStack_10030 [65536];
  uint *puVar10;
  
  puVar4 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar4;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar4 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != auStack_10030);
  *(long *)(puVar11 + -0x1020) = param_3;
  *(undefined8 *)(puVar11 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_001001ef:
    uVar5 = 0;
  }
  else {
    uVar12 = 0;
    __ptr = (uint *)(puVar11 + -0x1018);
    uVar13 = 0;
    do {
      *(undefined8 *)(puVar11 + -0x1030) = 0x100095;
      sVar6 = fread_unlocked(__ptr,1,0x10000,param_1);
      if (sVar6 == 0) {
        uVar5 = param_1->_flags;
        break;
      }
      bVar14 = CARRY8(uVar12,sVar6);
      uVar12 = uVar12 + sVar6;
      if (bVar14) {
        *(undefined8 *)(puVar11 + -0x1030) = 0x1001e9;
        piVar7 = __errno_location();
        *piVar7 = 0x4b;
        goto LAB_001001ef;
      }
      puVar8 = __ptr;
      if (sVar6 < 8) {
LAB_0010016f:
        puVar10 = puVar8;
        do {
          puVar9 = (uint *)((long)puVar10 + 1);
          uVar13 = uVar13 << 8 ^
                   *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar13 >> 0x18) ^ (byte)*puVar10) * 8);
          puVar10 = puVar9;
        } while (puVar9 != (uint *)(sVar6 + (long)puVar8));
      }
      else {
        puVar8 = (uint *)(puVar11 + ((sVar6 - 8 & 0xfffffffffffffff8) - 0x1010));
        puVar10 = __ptr;
        do {
          uVar5 = *puVar10;
          uVar1 = puVar10[1];
          puVar10 = puVar10 + 2;
          uVar13 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                   ^ uVar13;
          uVar13 = *(ulong *)((uVar13 >> 8 & 0xff) * 8 + 0x103800) ^
                   *(ulong *)((uVar13 & 0xff) * 8 + 0x103000) ^
                   *(ulong *)((ulong)(uVar1 & 0xff) * 8 + 0x102800) ^
                   *(ulong *)(&crctab + (ulong)(uVar1 >> 0x18) * 8) ^
                   *(ulong *)((uVar13 >> 0x18 & 0xff) * 8 + 0x104800) ^
                   *(ulong *)((uVar13 >> 0x10 & 0xff) * 8 + 0x104000) ^
                   *(ulong *)((ulong)(uVar1 >> 8 & 0xff) * 8 + 0x102000) ^
                   *(ulong *)((ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x101800);
        } while (puVar10 != puVar8);
        uVar3 = sVar6 & 7;
        sVar6 = (size_t)((uint)sVar6 & 7);
        if (uVar3 != 0) goto LAB_0010016f;
      }
      uVar5 = param_1->_flags;
    } while ((uVar5 & 0x10) == 0);
    puVar2 = *(ulong **)(puVar11 + -0x1020);
    *param_2 = uVar13;
    *puVar2 = uVar12;
    uVar5 = (uVar5 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar11 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -0x1030) = &UNK_001001f8;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * pclmul_supported(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((~_DAT_0010102c & 0x80200) == 0) {
    if (cksum_debug != '\0') {
      uVar2 = dcgettext(0,"using pclmul hardware support",5);
      error(0,0,&_LC1,uVar2);
    }
    puVar1 = &cksum_pclmul;
  }
  else {
    if (cksum_debug != '\0') {
      uVar2 = dcgettext(0,"pclmul support not detected",5);
      error(0,0,&_LC1,uVar2);
    }
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
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
    if (((__cpu_features2 & 2) == 0) || ((~_DAT_0010102c & 0x208000) != 0)) {
      if (cksum_debug != '\0') {
        uVar2 = dcgettext(0,"avx512 support not detected",5);
        error(0,0,&_LC1,uVar2);
      }
      cksum_fp_0 = (code *)0x0;
      if (((__cpu_features2 & 2) == 0) || ((_DAT_0010102c & 0x400) == 0)) {
        if (cksum_debug != '\0') {
          uVar2 = dcgettext(0,"avx2 support not detected",5);
          error(0,0,&_LC1,uVar2);
        }
        cksum_fp_0 = (code *)0x0;
        cksum_fp_0 = (code *)pclmul_supported();
        if (cksum_fp_0 == (code *)0x0) {
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



int crc32b_sum_stream(FILE *param_1,undefined4 *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar7 = puVar1;
    *(undefined8 *)(puVar7 + -0x1000) = *(undefined8 *)(puVar7 + -0x1000);
    puVar1 = puVar7 + -0x1000;
  } while (puVar7 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar7 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (undefined4 *)0x0 || param_3 == (ulong *)0x0) || (param_1 == (FILE *)0x0)) {
LAB_001005fb:
    iVar3 = -1;
  }
  else {
    if (cksum_debug != '\0') {
      *(undefined8 *)(puVar7 + -0x1020) = 0x10060d;
      pclmul_supported();
    }
    uVar6 = 0;
    uVar2 = 0;
    do {
      *(undefined8 *)(puVar7 + -0x1020) = 0x1005ad;
      sVar4 = fread_unlocked(puVar7 + -0x1018,1,0x10000,param_1);
      if (sVar4 == 0) break;
      bVar8 = CARRY8(uVar6,sVar4);
      uVar6 = uVar6 + sVar4;
      if (bVar8) {
        *(undefined8 *)(puVar7 + -0x1020) = 0x1005f5;
        piVar5 = __errno_location();
        *piVar5 = 0x4b;
        goto LAB_001005fb;
      }
      *(undefined8 *)(puVar7 + -0x1020) = 0x10058f;
      uVar2 = crc32_update(uVar2,puVar7 + -0x1018);
    } while ((param_1->_flags & 0x10) == 0);
    *param_2 = uVar2;
    iVar3 = param_1->_flags;
    *param_3 = uVar6;
    iVar3 = (iVar3 << 0x1a) >> 0x1f;
  }
  if (*(long *)(puVar7 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -0x1020) = &UNK_00100617;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_crc(undefined8 param_1,undefined8 param_2,uint *param_3,char param_4,undefined8 param_5,
               byte param_6,char param_7,undefined8 param_8)

{
  uint uVar1;
  byte *pbVar2;
  _IO_FILE *p_Var3;
  int iVar4;
  uint *puVar5;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  uint *puVar6;
  
  p_Var3 = _stdout;
  uVar1 = *param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == '\0') {
    __printf_chk(2,"%u %ju",uVar1,param_8);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC8,param_1);
    }
    pbVar2 = (byte *)_stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pbVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        __overflow(_stdout,(uint)param_6);
        return;
      }
      goto LAB_00100740;
    }
    _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
    *pbVar2 = param_6;
  }
  else {
    local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar6 = &local_24;
    do {
      puVar5 = (uint *)((long)puVar6 + 1);
      pbVar2 = (byte *)p_Var3->_IO_write_ptr;
      uVar1 = *puVar6;
      if (pbVar2 < p_Var3->_IO_write_end) {
        p_Var3->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = (byte)uVar1;
      }
      else {
        iVar4 = __overflow(p_Var3,(uint)(byte)uVar1);
        if (iVar4 == -1) break;
      }
      puVar6 = puVar5;
    } while (puVar5 != (uint *)&local_20);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


