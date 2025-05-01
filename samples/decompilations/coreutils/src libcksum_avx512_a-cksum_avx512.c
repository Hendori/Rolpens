
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool cksum_avx512(FILE *fp,uint_fast32_t *crc_out,uintmax_t *length_out)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  _Bool _Var4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  __m512i buf [1024];
  undefined1 auStack_10040 [65536];
  undefined1 auStack_40 [16];
  byte *pbVar8;
  
  puVar3 = auStack_40;
  do {
    puVar12 = puVar3;
    *(undefined8 *)(puVar12 + -0x1000) = *(undefined8 *)(puVar12 + -0x1000);
    puVar3 = puVar12 + -0x1000;
  } while (puVar12 + -0x1000 != auStack_10040);
  *(uintmax_t **)(puVar12 + -0x1050) = length_out;
  *(undefined8 *)(puVar12 + 0xeff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((crc_out == (uint_fast32_t *)0x0 || length_out == (uintmax_t *)0x0) || (fp == (FILE *)0x0)) {
LAB_00100384:
    _Var4 = false;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    do {
      *(ulong *)(puVar12 + -0x1048) = uVar10;
      *(undefined8 *)(puVar12 + -0x1088) = 0x10009a;
      sVar6 = fread_unlocked(puVar12 + -0x1040,1,0x10000,(FILE *)fp);
      uVar10 = *(ulong *)(puVar12 + -0x1048);
      vmovdqa64_avx512f(_DAT_00100440);
      auVar14 = vmovdqa64_avx512f(_DAT_001003c0);
      vmovdqa64_avx512f(_DAT_00100400);
      if (sVar6 == 0) {
        uVar5 = fp->_flags;
        break;
      }
      bVar13 = CARRY8(uVar11,sVar6);
      uVar11 = uVar11 + sVar6;
      if (bVar13) {
        *(undefined8 *)(puVar12 + -0x1088) = 0x10037e;
        piVar9 = __errno_location();
        *piVar9 = 0x4b;
        goto LAB_00100384;
      }
      if (0x1ff < sVar6) {
        vmovdqa64_avx512f(auVar14);
        auVar17 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar12 + -0x1040));
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar10,3);
        auVar15 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar12 + -0x1000));
        auVar17 = vpshufb_avx512bw(auVar17,auVar14);
        auVar16 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar12 + -0xfc0));
        vpshufb_avx512bw(auVar15,auVar14);
        vpshufb_avx512bw(auVar16,auVar14);
        vpxord_avx512f(ZEXT1664(auVar2),auVar17);
        auVar17 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar12 + -0xf80));
        vpshufb_avx512bw(auVar17,auVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x7f < sVar6) {
        auVar14 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar12 + -0x1040));
        auVar17 = vmovdqa64_avx512f(_DAT_001003c0);
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar10,3);
        auVar14 = vpshufb_avx512bw(auVar14,auVar17);
        vpxord_avx512f(ZEXT1664(auVar2),auVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar8 = puVar12 + -0x1040;
      do {
        pbVar7 = pbVar8 + 1;
        uVar10 = uVar10 << 8 ^
                 *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar10 >> 0x18) ^ *pbVar8) * 8);
        pbVar8 = pbVar7;
      } while (pbVar7 != puVar12 + (sVar6 - 0x1040));
      uVar5 = fp->_flags;
    } while ((uVar5 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar12 + -0x1050);
    *crc_out = uVar10;
    *puVar1 = uVar11;
    _Var4 = (_Bool)(((byte)(uVar5 >> 5) ^ 1) & 1);
  }
  if (*(long *)(puVar12 + 0xeff8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar12 + -0x1088) = 0x10038d;
    __stack_chk_fail();
  }
  return _Var4;
}


