
/* WARNING: Unknown calling convention */

_Bool cksum_slice8(FILE *fp,uint_fast32_t *crc_out,uintmax_t *length_out)

{
  uint *__ptr;
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  _Bool _Var5;
  uint uVar6;
  size_t sVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  uint32_t buf [16384];
  uint *puVar11;
  
  puVar4 = &stack0xffffffffffffffd0;
  do {
    puVar12 = puVar4;
    *(undefined8 *)(puVar12 + -0x1000) = *(undefined8 *)(puVar12 + -0x1000);
    puVar4 = puVar12 + -0x1000;
  } while ((uint32_t *)(puVar12 + -0x1000) != buf + 6);
  *(uintmax_t **)(puVar12 + -0x1020) = length_out;
  *(undefined8 *)(puVar12 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((crc_out == (uint_fast32_t *)0x0 || length_out == (uintmax_t *)0x0) || (fp == (FILE *)0x0)) {
LAB_001001ef:
    _Var5 = false;
  }
  else {
    uVar13 = 0;
    __ptr = (uint *)(puVar12 + -0x1018);
    uVar14 = 0;
    do {
      *(undefined8 *)(puVar12 + -0x1030) = 0x100095;
      sVar7 = fread_unlocked(__ptr,1,0x10000,(FILE *)fp);
      if (sVar7 == 0) {
        uVar6 = fp->_flags;
        break;
      }
      bVar15 = CARRY8(uVar13,sVar7);
      uVar13 = uVar13 + sVar7;
      if (bVar15) {
        *(undefined8 *)(puVar12 + -0x1030) = 0x1001e9;
        piVar8 = __errno_location();
        *piVar8 = 0x4b;
        goto LAB_001001ef;
      }
      puVar9 = __ptr;
      if (sVar7 < 8) {
LAB_0010016f:
        puVar11 = puVar9;
        do {
          puVar10 = (uint *)((long)puVar11 + 1);
          uVar14 = uVar14 << 8 ^
                   *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar14 >> 0x18) ^ (byte)*puVar11) * 8);
          puVar11 = puVar10;
        } while (puVar10 != (uint *)(sVar7 + (long)puVar9));
      }
      else {
        puVar9 = (uint *)(puVar12 + ((sVar7 - 8 & 0xfffffffffffffff8) - 0x1010));
        puVar11 = __ptr;
        do {
          uVar6 = *puVar11;
          uVar1 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar14 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18)
                   ^ uVar14;
          uVar14 = *(ulong *)((uVar14 >> 8 & 0xff) * 8 + 0x103800) ^
                   *(ulong *)((uVar14 & 0xff) * 8 + 0x103000) ^
                   *(ulong *)((ulong)(uVar1 & 0xff) * 8 + 0x102800) ^
                   *(ulong *)(&crctab + (ulong)(uVar1 >> 0x18) * 8) ^
                   *(ulong *)((uVar14 >> 0x18 & 0xff) * 8 + 0x104800) ^
                   *(ulong *)((uVar14 >> 0x10 & 0xff) * 8 + 0x104000) ^
                   *(ulong *)((ulong)(uVar1 >> 8 & 0xff) * 8 + 0x102000) ^
                   *(ulong *)((ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x101800);
        } while (puVar11 != puVar9);
        uVar3 = sVar7 & 7;
        sVar7 = (size_t)((uint)sVar7 & 7);
        if (uVar3 != 0) goto LAB_0010016f;
      }
      uVar6 = fp->_flags;
    } while ((uVar6 & 0x10) == 0);
    puVar2 = *(ulong **)(puVar12 + -0x1020);
    *crc_out = uVar14;
    *puVar2 = uVar13;
    _Var5 = (_Bool)(((byte)(uVar6 >> 5) ^ 1) & 1);
  }
  if (*(long *)(puVar12 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x1030) = &UNK_001001f8;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

cksum_fp_t pclmul_supported(void)

{
  cksum_fp_t p_Var1;
  undefined8 uVar2;
  
  if ((~_DAT_0010102c & 0x80200) == 0) {
    if (cksum_debug != '\0') {
      uVar2 = dcgettext(0,"using pclmul hardware support",5);
      error(0,0,&_LC1,uVar2);
    }
    p_Var1 = (cksum_fp_t)&cksum_pclmul;
  }
  else {
    if (cksum_debug != '\0') {
      uVar2 = dcgettext(0,"pclmul support not detected",5);
      error(0,0,&_LC1,uVar2);
    }
    p_Var1 = (cksum_fp_t)0x0;
  }
  return p_Var1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int crc_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  _Bool _Var1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uintmax_t total_bytes;
  uint_fast32_t crc;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  total_bytes = 0;
  crc = 0;
  if (crc_sum_stream::cksum_fp == (cksum_fp_t)0x0) {
    if (((__cpu_features2 & 2) == 0) || ((~_DAT_0010102c & 0x208000) != 0)) {
      if (cksum_debug != '\0') {
        uVar3 = dcgettext(0,"avx512 support not detected",5);
        error(0,0,&_LC1,uVar3);
      }
      crc_sum_stream::cksum_fp = (cksum_fp_t)0x0;
      if (((__cpu_features2 & 2) == 0) || ((_DAT_0010102c & 0x400) == 0)) {
        if (cksum_debug != '\0') {
          uVar3 = dcgettext(0,"avx2 support not detected",5);
          error(0,0,&_LC1,uVar3);
        }
        crc_sum_stream::cksum_fp = (cksum_fp_t)0x0;
        crc_sum_stream::cksum_fp = pclmul_supported();
        if (crc_sum_stream::cksum_fp == (cksum_fp_t)0x0) {
          crc_sum_stream::cksum_fp = cksum_slice8;
        }
      }
      else {
        if (cksum_debug != '\0') {
          uVar3 = dcgettext(0,"using avx2 hardware support",5);
          error(0,0,&_LC1,uVar3);
        }
        crc_sum_stream::cksum_fp = cksum_avx2;
      }
    }
    else {
      if (cksum_debug != '\0') {
        uVar3 = dcgettext(0,"using avx512 hardware support",5);
        error(0,0,&_LC1,uVar3);
      }
      crc_sum_stream::cksum_fp = cksum_avx512;
    }
  }
  _Var1 = (*crc_sum_stream::cksum_fp)(stream,&crc,&total_bytes);
  if (_Var1) {
    *length = total_bytes;
    uVar5 = crc;
    for (uVar4 = total_bytes; uVar4 != 0; uVar4 = uVar4 >> 8) {
      uVar5 = uVar5 << 8 ^
              *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar5 >> 0x18) ^ (byte)uVar4) * 8);
    }
    iVar2 = 0;
    *(uint *)resstream = ~(uint)uVar5;
  }
  else {
    iVar2 = -1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int crc32b_sum_stream(FILE *stream,void *resstream,uintmax_t *reslen)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  uintmax_t uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  uint32_t buf [16384];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar7 = puVar1;
    *(undefined8 *)(puVar7 + -0x1000) = *(undefined8 *)(puVar7 + -0x1000);
    puVar1 = puVar7 + -0x1000;
  } while ((uint32_t *)(puVar7 + -0x1000) != buf + 6);
  *(undefined8 *)(puVar7 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((resstream == (void *)0x0 || reslen == (uintmax_t *)0x0) || (stream == (FILE *)0x0)) {
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
      sVar4 = fread_unlocked(puVar7 + -0x1018,1,0x10000,(FILE *)stream);
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
    } while ((stream->_flags & 0x10) == 0);
    *(undefined4 *)resstream = uVar2;
    iVar3 = stream->_flags;
    *reslen = uVar6;
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
/* WARNING: Unknown calling convention */

void output_crc(char *file,int binary_file,void *digest,_Bool raw,_Bool tagged,uchar delim,
               _Bool args,uintmax_t length)

{
  uint uVar1;
  byte *pbVar2;
  uchar *puVar3;
  uint32_t uVar4;
  _IO_FILE *p_Var5;
  int iVar6;
  uint32_t *puVar7;
  long in_FS_OFFSET;
  uint32_t out_int;
  long local_20;
  uint32_t *puVar8;
  
  p_Var5 = _stdout;
                    /* WARNING: Load size is inaccurate */
  uVar1 = *digest;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (raw) {
    out_int = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar8 = &out_int;
    do {
      puVar7 = (uint32_t *)((long)puVar8 + 1);
      pbVar2 = (byte *)p_Var5->_IO_write_ptr;
      uVar4 = *puVar8;
      if (pbVar2 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = (byte)uVar4;
      }
      else {
        iVar6 = __overflow(p_Var5,(uint)(byte)uVar4);
        if (iVar6 == -1) break;
      }
      puVar8 = puVar7;
    } while (puVar7 != (uint32_t *)&local_20);
  }
  else {
    __printf_chk(2,"%u %ju",uVar1,length);
    if (args) {
      __printf_chk(2,&_LC8,file);
    }
    puVar3 = (uchar *)_stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= puVar3) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        __overflow(_stdout,(uint)delim);
        return;
      }
      goto LAB_00100740;
    }
    _stdout->_IO_write_ptr = (char *)(puVar3 + 1);
    *puVar3 = delim;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


