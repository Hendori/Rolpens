
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int WebPEstimateBestFilter(long param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar12 = local_148;
  piVar13 = piVar12;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    piVar13[0] = 0;
    piVar13[1] = 0;
    piVar13 = piVar13 + 2;
  }
  if (3 < param_3) {
    lVar8 = (long)param_2;
    lVar14 = (long)(param_4 * 2);
    iVar21 = 2;
    pbVar11 = (byte *)(param_1 + lVar14);
    pbVar20 = (byte *)(param_1 + 1 + (lVar14 - lVar8));
    do {
      uVar17 = (uint)*pbVar11;
      pbVar16 = pbVar20;
      if (3 < param_2) {
        do {
          bVar1 = pbVar16[lVar8 + 1];
          uVar6 = (uint)bVar1;
          iVar19 = uVar6 - uVar17;
          iVar15 = -iVar19;
          if (0 < iVar19) {
            iVar15 = iVar19;
          }
          iVar9 = uVar6 - pbVar16[lVar8];
          iVar23 = -iVar9;
          if (0 < iVar9) {
            iVar23 = iVar9;
          }
          iVar10 = uVar6 - pbVar16[1];
          iVar9 = -iVar10;
          if (0 < iVar10) {
            iVar9 = iVar10;
          }
          uVar18 = ((uint)pbVar16[1] + (uint)pbVar16[lVar8]) - (uint)*pbVar16;
          if (uVar18 < 0x100) {
            uVar6 = uVar6 - uVar18;
            if ((int)uVar6 < 1) {
              uVar6 = -uVar6;
            }
          }
          else {
            uVar6 = (uint)bVar1;
            if (-1 < (int)uVar18) {
              uVar6 = 0xff - bVar1;
            }
          }
          pbVar16 = pbVar16 + 2;
          local_148[iVar15 >> 4] = 1;
          uVar17 = (int)(iVar19 + 2 + uVar17 * 4) >> 2;
          local_148[(long)(iVar23 >> 4) + 0x10] = 1;
          local_148[(long)(iVar9 >> 4) + 0x20] = 1;
          local_148[(long)((int)uVar6 >> 4) + 0x30] = 1;
        } while (pbVar20 + (ulong)((param_2 - 4U >> 1) + 1) * 2 != pbVar16);
      }
      iVar21 = iVar21 + 2;
      pbVar11 = pbVar11 + lVar14;
      pbVar20 = pbVar20 + lVar14;
    } while (iVar21 < param_3 + -1);
  }
  piVar13 = local_148;
  iVar21 = 0x7fffffff;
  iVar15 = 0;
  iVar19 = 0;
  do {
    piVar13 = piVar13 + 0x10;
    iVar23 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar24 = 0;
    piVar7 = piVar12;
    auVar25 = __LC0;
    do {
      iVar2 = *piVar7;
      piVar3 = piVar7 + 1;
      piVar4 = piVar7 + 2;
      piVar5 = piVar7 + 3;
      piVar7 = piVar7 + 4;
      auVar26._0_4_ = auVar25._0_4_ + SUB164(__LC1,0);
      auVar26._4_4_ = auVar25._4_4_ + SUB164(__LC1,4);
      auVar26._8_4_ = auVar25._8_4_ + SUB164(__LC1,8);
      auVar26._12_4_ = auVar25._12_4_ + SUB164(__LC1,0xc);
      auVar22._0_4_ = -(uint)(0 < iVar2);
      auVar22._4_4_ = -(uint)(0 < *piVar3);
      auVar22._8_4_ = -(uint)(0 < *piVar4);
      auVar22._12_4_ = -(uint)(0 < *piVar5);
      auVar22 = auVar22 & auVar25;
      iVar23 = iVar23 + auVar22._0_4_;
      iVar9 = iVar9 + auVar22._4_4_;
      iVar10 = iVar10 + auVar22._8_4_;
      iVar24 = iVar24 + auVar22._12_4_;
      auVar25 = auVar26;
    } while (piVar13 != piVar7);
    iVar23 = iVar23 + iVar10 + iVar9 + iVar24;
    if (iVar23 < iVar21) {
      iVar21 = iVar23;
      iVar15 = iVar19;
    }
    iVar19 = iVar19 + 1;
    piVar12 = piVar12 + 0x10;
  } while (iVar19 != 4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}


