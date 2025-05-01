
/* WARNING: Unknown calling convention */

wc_lines * wc_lines_avx2(int fd)

{
  undefined1 (*__buf) [32];
  undefined1 auVar1 [32];
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 (*pauVar6) [32];
  int *piVar7;
  undefined1 (*pauVar8) [32];
  long lVar9;
  undefined1 *puVar10;
  undefined8 in_RDI;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [32];
  __m256i avx_buf [8192];
  undefined1 auStack_40040 [262144];
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  do {
    puVar10 = puVar3;
    *(undefined8 *)(puVar10 + -0x1000) = *(undefined8 *)(puVar10 + -0x1000);
    puVar3 = puVar10 + -0x1000;
  } while (puVar10 + -0x1000 != auStack_40040);
  lVar9 = 0;
  lVar12 = 0;
  *(undefined8 *)(puVar10 + -0x1028) = in_RDI;
  __buf = (undefined1 (*) [32])(puVar10 + -0x1020);
  *(undefined8 *)(puVar10 + 0x3eff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  while( true ) {
    *(undefined8 *)(puVar10 + -0x1048) = 0x100070;
    lVar5 = read(fd,__buf,0x40000);
    if (lVar5 < 1) break;
    lVar9 = lVar9 + lVar5;
    pauVar8 = __buf;
    if (0x1f < lVar5) {
      auVar13[8] = 10;
      auVar13._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar13[9] = 10;
      auVar13[10] = 10;
      auVar13[0xb] = 10;
      auVar13[0xc] = 10;
      auVar13[0xd] = 10;
      auVar13[0xe] = 10;
      auVar13[0xf] = 10;
      auVar13[0x10] = 10;
      auVar13[0x11] = 10;
      auVar13[0x12] = 10;
      auVar13[0x13] = 10;
      auVar13[0x14] = 10;
      auVar13[0x15] = 10;
      auVar13[0x16] = 10;
      auVar13[0x17] = 10;
      auVar13[0x18] = 10;
      auVar13[0x19] = 10;
      auVar13[0x1a] = 10;
      auVar13[0x1b] = 10;
      auVar13[0x1c] = 10;
      auVar13[0x1d] = 10;
      auVar13[0x1e] = 10;
      auVar13[0x1f] = 10;
      uVar11 = lVar5 - 0x20U >> 5;
      do {
        auVar1 = vpcmpeqb_avx2(auVar13,*pauVar8);
        pauVar8 = pauVar8 + 1;
        lVar12 = lVar12 + (ulong)(uint)POPCOUNT((uint)(SUB321(auVar1 >> 7,0) & 1) |
                                                (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
                                                (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 |
                                                (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
                                                (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
                                                (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
                                                (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 |
                                                (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
                                                (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 |
                                                (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
                                                (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
                                                (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
                                                (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
                                                (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
                                                (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe |
                                                (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
                                                (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
                                                (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
                                                (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
                                                (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
                                                (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
                                                (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
                                                (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 |
                                                (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
                                                (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
                                                (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                                                (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                                                (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                                                (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                                                (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                                                (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                                                (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f);
      } while (__buf + uVar11 + 1 != pauVar8);
      lVar5 = (lVar5 - 0x20U) + uVar11 * -0x20;
      pauVar8 = __buf + uVar11 + 1;
    }
    pauVar6 = (undefined1 (*) [32])((long)*pauVar8 + lVar5);
    if (pauVar8 < pauVar6) {
      do {
        pvVar2 = *pauVar8;
                    /* WARNING: Load size is inaccurate */
        pauVar8 = (undefined1 (*) [32])((long)*pauVar8 + 1);
        lVar12 = lVar12 + (ulong)(*pvVar2 == '\n');
      } while (pauVar6 != pauVar8);
    }
  }
  iVar4 = 0;
  if (lVar5 != 0) {
    *(undefined8 *)(puVar10 + -0x1048) = 0x10010c;
    piVar7 = __errno_location();
    iVar4 = *piVar7;
  }
  piVar7 = *(int **)(puVar10 + -0x1028);
  *piVar7 = iVar4;
  *(long *)(piVar7 + 2) = lVar12;
  *(long *)(piVar7 + 4) = lVar9;
  if (*(long *)(puVar10 + 0x3eff8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar10 + -0x1048) = 0x100152;
    __stack_chk_fail();
  }
  return *(wc_lines **)(puVar10 + -0x1028);
}


