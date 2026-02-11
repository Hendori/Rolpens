
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cksum_avx512(FILE *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  uint uVar4;
  size_t sVar5;
  byte *pbVar6;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auStack_10040 [65536];
  undefined1 auStack_40 [16];
  byte *pbVar7;
  
  puVar3 = auStack_40;
  do {
    puVar11 = puVar3;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar3 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != auStack_10040);
  *(long *)(puVar11 + -0x1050) = param_3;
  *(undefined8 *)(puVar11 + 0xeff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_0010048c:
    uVar4 = 0;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      *(ulong *)(puVar11 + -0x1048) = uVar9;
      *(undefined8 *)(puVar11 + -0x1088) = 0x10009a;
      sVar5 = fread_unlocked(puVar11 + -0x1040,1,0x10000,param_1);
      uVar9 = *(ulong *)(puVar11 + -0x1048);
      auVar13 = vmovdqa64_avx512f(_DAT_001004c0);
      vmovdqa64_avx512f(_DAT_00100500);
      if (sVar5 == 0) {
        uVar4 = param_1->_flags;
        break;
      }
      bVar12 = CARRY8(uVar10,sVar5);
      uVar10 = uVar10 + sVar5;
      if (bVar12) {
        *(undefined8 *)(puVar11 + -0x1088) = 0x100486;
        piVar8 = __errno_location();
        *piVar8 = 0x4b;
        goto LAB_0010048c;
      }
      if (0x1ff < sVar5) {
        auVar14 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0x1000));
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar9,3);
        auVar15 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0x1040));
        vmovdqa64_avx512f(auVar13);
        vpshufb_avx512bw(auVar14,auVar13);
        auVar14 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0xfc0));
        auVar15 = vpshufb_avx512bw(auVar15,auVar13);
        vpshufb_avx512bw(auVar14,auVar13);
        vpxord_avx512f(ZEXT1664(auVar2),auVar15);
        auVar14 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0xf80));
        vpshufb_avx512bw(auVar14,auVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x7f < sVar5) {
        auVar14 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0x1040));
        vmovdqa64_avx512f(_DAT_00100540);
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar9,3);
        vmovdqa64_avx512f(auVar13);
        auVar15 = vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar11 + -0x1000));
        auVar14 = vpshufb_avx512bw(auVar14,auVar13);
        vpxord_avx512f(ZEXT1664(auVar2),auVar14);
        vpshufb_avx512bw(auVar15,auVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar7 = puVar11 + -0x1040;
      do {
        pbVar6 = pbVar7 + 1;
        uVar9 = uVar9 << 8 ^
                *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar9 >> 0x18) ^ *pbVar7) * 8);
        pbVar7 = pbVar6;
      } while (pbVar6 != puVar11 + (sVar5 - 0x1040));
      uVar4 = param_1->_flags;
    } while ((uVar4 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar11 + -0x1050);
    *param_2 = uVar9;
    *puVar1 = uVar10;
    uVar4 = (uVar4 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar11 + 0xeff8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar11 + -0x1088) = 0x1004a6;
    __stack_chk_fail();
  }
  return uVar4;
}


