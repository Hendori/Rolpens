
void scalar_ntt(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  
  iVar11 = 7;
  iVar7 = 0x80;
  puVar12 = kNTTRoots;
  do {
    puVar10 = param_1;
    do {
      uVar2 = *(ushort *)(puVar12 + 2);
      puVar12 = puVar12 + 2;
      puVar1 = puVar10 + iVar7;
      puVar8 = puVar10;
      puVar13 = puVar1;
      do {
        puVar9 = puVar8 + 1;
        uVar5 = (short)((uint)*puVar13 * (uint)uVar2) +
                (short)((ulong)((uint)*puVar13 * (uint)uVar2) * 0x13af >> 0x18) * -0xd01;
        uVar4 = uVar5 - 0xd01;
        uVar4 = (short)uVar4 >> 0xf & (uVar5 ^ uVar4) ^ uVar4;
        uVar5 = *puVar8 - uVar4;
        uVar4 = *puVar8 + uVar4;
        uVar3 = uVar4 - 0xd01;
        *puVar13 = (uVar5 + 0xd01 ^ uVar5) & (short)uVar5 >> 0xf ^ uVar5;
        *puVar8 = (short)uVar3 >> 0xf & (uVar4 ^ uVar3) ^ uVar3;
        puVar8 = puVar9;
        puVar13 = puVar13 + 1;
      } while (puVar9 < puVar1);
      lVar6 = (((long)iVar7 * 2 - 1U >> 1) + 1) * 2;
      if (puVar1 < (ushort *)((long)puVar10 + 1U)) {
        lVar6 = 2;
      }
      puVar10 = (ushort *)((long)puVar1 + lVar6);
    } while (puVar10 < param_1 + 0x100);
    iVar7 = iVar7 >> 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}



void scalar_mult(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)(param_2 + 2 + lVar4 * 2);
    uVar9 = (uint)*(ushort *)(param_3 + 2 + lVar4 * 2);
    uVar6 = uVar1 * uVar9;
    uVar6 = uVar6 + (int)((ulong)uVar6 * 0x13af >> 0x18) * -0xd01;
    uVar7 = uVar6 - 0xd01;
    uVar5 = (uint)*(ushort *)(param_2 + lVar4 * 2);
    uVar8 = (uint)*(ushort *)(param_3 + lVar4 * 2);
    uVar7 = uVar5 * uVar8 +
            (((uint)(ushort)((short)uVar7 >> 0xf) & (uVar6 ^ uVar7) ^ uVar7) & 0xffff) *
            (uint)*(ushort *)((long)&kModRoots + lVar4);
    uVar2 = (short)uVar7 + (short)((ulong)uVar7 * 0x13af >> 0x18) * -0xd01;
    uVar3 = uVar2 - 0xd01;
    *(ushort *)(param_1 + lVar4 * 2) = (uVar2 ^ uVar3) & (short)uVar3 >> 0xf ^ uVar3;
    uVar7 = uVar5 * uVar9 + uVar8 * uVar1;
    uVar3 = (short)uVar7 + (short)((ulong)uVar7 * 0x13af >> 0x18) * -0xd01;
    uVar1 = uVar3 - 0xd01;
    *(ushort *)(param_1 + 2 + lVar4 * 2) = (short)uVar1 >> 0xf & (uVar3 ^ uVar1) ^ uVar1;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x100);
  return;
}



void scalar_decode(ushort *param_1,ulong *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 0;
  uVar9 = 0;
  iVar2 = 0;
  bVar3 = (byte)param_3;
  puVar1 = param_1 + 0x100;
  uVar4 = (1 << (bVar3 & 0x1f)) - 1;
  iVar7 = param_3;
  uVar8 = uVar4;
  do {
    if (iVar2 == 0) {
      uVar6 = *param_2;
      iVar2 = 0x40;
      param_2 = param_2 + 1;
    }
    uVar5 = uVar8 & (uint)uVar6;
    if ((iVar7 == param_3) && (param_3 <= iVar2)) {
      *param_1 = (ushort)uVar5;
      iVar2 = iVar2 - param_3;
      param_1 = param_1 + 1;
      uVar6 = uVar6 >> (bVar3 & 0x3f);
    }
    else if (iVar2 < iVar7) {
      iVar7 = iVar7 - iVar2;
      uVar8 = (int)(uVar4 & 0xffff) >> ((byte)iVar2 & 0x1f);
      iVar2 = 0;
      uVar9 = uVar5;
    }
    else {
      iVar2 = iVar2 - iVar7;
      uVar6 = uVar6 >> ((byte)iVar7 & 0x3f);
      *param_1 = (ushort)((uVar5 & 0xffff) << (bVar3 - (byte)iVar7 & 0x1f)) | (ushort)uVar9;
      param_1 = param_1 + 1;
      iVar7 = param_3;
      uVar8 = uVar4;
      uVar9 = 0;
    }
  } while (param_1 < puVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scalar_compress(undefined1 (*param_1) [16],int param_2)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  uint uVar5;
  undefined1 auVar6 [14];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  int iVar13;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined1 auVar14 [16];
  long lVar19;
  long lVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  int iVar24;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  ushort uVar30;
  int iVar31;
  long lVar32;
  uint uVar33;
  ushort uVar36;
  uint uVar35;
  ushort uVar37;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  auVar10 = __LC2;
  auVar9 = __LC1;
  uVar8 = _UNK_001052f8;
  uVar7 = __LC0;
  uVar30 = (ushort)((1 << ((byte)param_2 & 0x1f)) + -1);
  pauVar11 = param_1;
  do {
    auVar14 = *pauVar11;
    pauVar12 = pauVar11 + 1;
    uVar36 = auVar14._10_2_;
    uVar37 = auVar14._14_2_;
    auVar1._10_2_ = 0;
    auVar1._0_10_ = auVar14._0_10_;
    auVar1._12_2_ = auVar14._6_2_;
    auVar4._8_2_ = auVar14._4_2_;
    auVar4._0_8_ = auVar14._0_8_;
    auVar4._10_4_ = auVar1._10_4_;
    auVar6._6_8_ = 0;
    auVar6._0_6_ = auVar4._8_6_;
    uVar33 = (uint)auVar14._8_2_ << param_2;
    uVar35 = (uint)auVar14._12_2_;
    uVar23 = (uint)auVar14._0_2_ << param_2;
    uVar26 = (uint)CONCAT82(SUB148(auVar6 << 0x40,6),auVar14._2_2_);
    iVar16 = auVar4._8_4_;
    uVar5 = auVar1._10_4_ >> 0x10;
    auVar2._12_2_ = uVar36;
    auVar2._0_12_ = ZEXT212(uVar36) << 0x40;
    auVar21._4_4_ = iVar16;
    auVar21._0_4_ = iVar16;
    auVar21._8_4_ = uVar5;
    auVar21._12_4_ = uVar5;
    lVar19 = ((ulong)auVar4._8_6_ & 0xffffffff) * (ulong)uVar7;
    lVar22 = (auVar21._8_8_ & 0xffffffff) * (ulong)uVar8;
    lVar32 = ((ulong)auVar2._8_6_ & 0xffffffff) * (ulong)uVar8;
    auVar3._12_2_ = uVar37;
    auVar3._0_12_ = ZEXT212(uVar37) << 0x40;
    iVar18 = (int)((ulong)lVar19 >> 0x18);
    iVar24 = (int)((ulong)lVar22 >> 0x18);
    iVar13 = (int)((ulong)uVar23 * (ulong)uVar7 >> 0x18);
    iVar15 = (int)((ulong)uVar26 * (ulong)uVar8 >> 0x18);
    lVar17 = ((ulong)auVar3._8_6_ & 0xffffffff) * (ulong)uVar8;
    iVar28 = (int)((ulong)uVar35 * (ulong)uVar7 >> 0x18);
    iVar29 = (int)((ulong)lVar17 >> 0x18);
    iVar27 = (int)((ulong)uVar33 * (ulong)uVar7 >> 0x18);
    iVar31 = (int)((ulong)lVar32 >> 0x18);
    auVar39._0_4_ = uVar23 + iVar13 * -0xd01;
    auVar39._4_4_ = uVar26 + iVar15 * -0xd01;
    auVar39._8_4_ = iVar16 + iVar18 * -0xd01;
    auVar39._12_4_ = uVar5 + iVar24 * -0xd01;
    iVar13 = iVar13 * 0xd01 - uVar23;
    iVar15 = iVar15 * 0xd01 - uVar26;
    iVar16 = iVar18 * 0xd01 - iVar16;
    iVar18 = iVar24 * 0xd01 - uVar5;
    auVar38._0_4_ = uVar33 + iVar27 * -0xd01;
    auVar38._4_4_ = (uint)uVar36 + iVar31 * -0xd01;
    auVar38._8_4_ = uVar35 + iVar28 * -0xd01;
    auVar38._12_4_ = (uint)uVar37 + iVar29 * -0xd01;
    iVar24 = iVar27 * 0xd01 - uVar33;
    iVar27 = iVar31 * 0xd01 - (uint)uVar36;
    iVar28 = iVar28 * 0xd01 - uVar35;
    iVar29 = iVar29 * 0xd01 - (uint)uVar37;
    auVar14._0_4_ = iVar13 + auVar9._0_4_;
    auVar14._4_4_ = iVar15 + auVar9._4_4_;
    auVar14._8_4_ = iVar16 + auVar9._8_4_;
    auVar14._12_4_ = iVar18 + auVar9._12_4_;
    auVar34._0_4_ = iVar24 + auVar9._0_4_;
    auVar34._4_4_ = iVar27 + auVar9._4_4_;
    auVar34._8_4_ = iVar28 + auVar9._8_4_;
    auVar34._12_4_ = iVar29 + auVar9._12_4_;
    auVar14 = auVar14 ^ auVar39 | auVar39 ^ auVar9;
    auVar25._0_4_ = iVar24 + auVar10._0_4_;
    auVar25._4_4_ = iVar27 + auVar10._4_4_;
    auVar25._8_4_ = iVar28 + auVar10._8_4_;
    auVar25._12_4_ = iVar29 + auVar10._12_4_;
    auVar34 = auVar34 ^ auVar38 | auVar38 ^ auVar9;
    auVar25 = auVar25 ^ auVar38 | auVar38 ^ auVar10;
    auVar20._0_4_ = iVar13 + auVar10._0_4_;
    auVar20._4_4_ = iVar15 + auVar10._4_4_;
    auVar20._8_4_ = iVar16 + auVar10._8_4_;
    auVar20._12_4_ = iVar18 + auVar10._12_4_;
    auVar21 = auVar20 ^ auVar39 | auVar39 ^ auVar10;
    *(ushort *)*pauVar11 =
         (short)((ulong)uVar23 * (ulong)uVar7 >> 0x18) +
         (-(auVar21._2_2_ >> 0xf) - (auVar14._2_2_ >> 0xf)) & uVar30;
    *(ushort *)(*pauVar11 + 2) =
         (short)((ulong)uVar26 * (ulong)uVar8 >> 0x18) +
         (-(auVar21._6_2_ >> 0xf) - (auVar14._6_2_ >> 0xf)) & uVar30;
    *(ushort *)(*pauVar11 + 4) =
         (short)((ulong)lVar19 >> 0x18) + (-(auVar21._10_2_ >> 0xf) - (auVar14._10_2_ >> 0xf)) &
         uVar30;
    *(ushort *)(*pauVar11 + 6) =
         (short)((ulong)lVar22 >> 0x18) + (-(auVar21._14_2_ >> 0xf) - (auVar14._14_2_ >> 0xf)) &
         uVar30;
    *(ushort *)(*pauVar11 + 8) =
         (short)((ulong)uVar33 * (ulong)uVar7 >> 0x18) +
         (-(auVar25._2_2_ >> 0xf) - (auVar34._2_2_ >> 0xf)) & uVar30;
    *(ushort *)(*pauVar11 + 10) =
         (short)((ulong)lVar32 >> 0x18) + (-(auVar25._6_2_ >> 0xf) - (auVar34._6_2_ >> 0xf)) &
         uVar30;
    *(ushort *)(*pauVar11 + 0xc) =
         (short)((ulong)uVar35 * (ulong)uVar7 >> 0x18) +
         (-(auVar25._10_2_ >> 0xf) - (auVar34._10_2_ >> 0xf)) & uVar30;
    *(ushort *)(*pauVar11 + 0xe) =
         (short)((ulong)lVar17 >> 0x18) + (-(auVar25._14_2_ >> 0xf) - (auVar34._14_2_ >> 0xf)) &
         uVar30;
    pauVar11 = pauVar12;
  } while (param_1 + 0x20 != pauVar12);
  return;
}



undefined8 vector_decode_12(ushort *param_1,long param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort *puVar6;
  byte *pbVar7;
  
  if (0 < param_3) {
    pbVar7 = (byte *)(param_2 + 0x180);
    puVar1 = param_1 + (ulong)(param_3 - 1) * 0x100 + 0x100;
    do {
      pbVar3 = pbVar7 + -0x180;
      puVar6 = param_1;
      do {
        pbVar4 = pbVar3 + 3;
        uVar2 = (ushort)(pbVar3[1] >> 4) | (ushort)pbVar3[2] << 4;
        uVar5 = (pbVar3[1] & 0xf) << 8 | (ushort)*pbVar3;
        *puVar6 = uVar5;
        puVar6[1] = uVar2;
        if ((0xd00 < uVar5) || (0xd00 < uVar2)) {
          return 0;
        }
        pbVar3 = pbVar4;
        puVar6 = puVar6 + 2;
      } while (pbVar4 != pbVar7);
      param_1 = param_1 + 0x100;
      pbVar7 = pbVar7 + 0x180;
    } while (puVar1 != param_1);
  }
  return 1;
}



undefined8 add_storage(long param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(*param_3 + 0x48);
    param_3[6] = (long)param_3 + 0x6c;
    param_3[7] = (long)param_3 + 0x8c;
    param_3[8] = param_1;
    *(undefined1 (*) [16])((long)param_3 + 0x6c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_3 + 0x7c) = (undefined1  [16])0x0;
    param_1 = param_1 + (long)iVar1 * 0x200;
    *(undefined1 (*) [16])((long)param_3 + 0x8c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_3 + 0x9c) = (undefined1  [16])0x0;
    param_3[9] = param_1;
    *(undefined1 (*) [16])(param_3 + 0xb) = (undefined1  [16])0x0;
    if (param_2 != 0) {
      param_1 = param_1 + (long)(iVar1 * iVar1) * 0x200;
      param_3[10] = param_1;
      param_3[0xb] = param_1 + (long)iVar1 * 0x200;
    }
    uVar2 = 1;
  }
  return uVar2;
}



ulong single_keccak(uchar *param_1,ulong param_2,void *param_3,size_t param_4,EVP_MD_CTX *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = (uint)param_2;
  iVar1 = EVP_DigestUpdate(param_5,param_3,param_4);
  if (iVar1 != 0) {
    uVar2 = EVP_MD_CTX_get0_md(param_5);
    iVar1 = EVP_MD_xof(uVar2);
    if (iVar1 != 0) {
      uVar3 = EVP_DigestFinalXOF(param_5,param_1,param_2);
      goto LAB_00100689;
    }
    iVar1 = EVP_DigestFinal_ex(param_5,param_1,&local_24);
    if (iVar1 != 0) {
      uVar3 = (ulong)(local_24 == param_2);
      goto LAB_00100689;
    }
  }
  uVar3 = 0;
LAB_00100689:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 matrix_expand(EVP_MD_CTX *param_1,long *param_2)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ushort *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  ushort *puVar15;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  char local_f7;
  byte local_e8 [168];
  long local_40 [2];
  
  puVar15 = (ushort *)param_2[9];
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)(*param_2 + 0x48);
  puVar5 = (undefined8 *)param_2[6];
  local_118 = *puVar5;
  uStack_110 = puVar5[1];
  local_108 = puVar5[2];
  uStack_100 = puVar5[3];
  if (0 < iVar4) {
    iVar11 = 0;
    do {
      cVar14 = '\0';
      puVar8 = puVar15 + (long)iVar4 * 0x100;
      puVar10 = puVar15;
      do {
        local_f8 = (char)iVar11;
        local_f7 = cVar14;
        iVar7 = EVP_DigestInit_ex(param_1,(EVP_MD *)param_2[2],(ENGINE *)0x0);
        if ((iVar7 == 0) || (iVar7 = EVP_DigestUpdate(param_1,&local_118,0x22), iVar7 == 0)) {
LAB_001008c0:
          uVar9 = 0;
          goto LAB_001008c2;
        }
        puVar15 = puVar10 + 0x100;
        do {
          iVar7 = EVP_DigestSqueeze(param_1,local_e8,0xa8);
          pbVar12 = local_e8;
          if (iVar7 == 0) goto LAB_001008c0;
          do {
            bVar2 = pbVar12[1];
            pbVar13 = pbVar12 + 3;
            bVar3 = pbVar12[2];
            if (puVar15 <= puVar10) goto LAB_0010087d;
            uVar6 = (bVar2 & 0xf) * 0x100 + (ushort)*pbVar12;
            if (uVar6 < 0xd01) {
              puVar1 = puVar10 + 1;
              *puVar10 = uVar6;
              puVar10 = puVar1;
              if (puVar15 <= puVar1) goto LAB_0010087d;
            }
            uVar6 = (ushort)bVar3 * 0x10 + (ushort)(bVar2 >> 4);
            if (uVar6 < 0xd01) {
              *puVar10 = uVar6;
              puVar10 = puVar10 + 1;
            }
            pbVar12 = pbVar13;
          } while (pbVar13 != (byte *)local_40);
        } while (puVar10 < puVar15);
LAB_0010087d:
        cVar14 = cVar14 + '\x01';
        puVar10 = puVar15;
      } while (puVar15 != puVar8);
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
  }
  uVar9 = 1;
LAB_001008c2:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void scalar_inverse_ntt(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  
  iVar9 = 7;
  puVar1 = param_1 + 0x100;
  iVar13 = 2;
  puVar10 = kInverseNTTRoots;
  do {
    puVar15 = param_1;
    do {
      uVar3 = *(ushort *)(puVar10 + 2);
      puVar10 = puVar10 + 2;
      puVar2 = puVar15 + iVar13;
      puVar11 = puVar15;
      puVar14 = puVar2;
      do {
        puVar12 = puVar11 + 1;
        uVar5 = *puVar11 + *puVar14;
        uVar7 = (((uint)*puVar11 - (uint)*puVar14) + 0xd01) * (uint)uVar3;
        uVar4 = (short)uVar7 + (short)((ulong)uVar7 * 0x13af >> 0x18) * -0xd01;
        uVar6 = uVar4 - 0xd01;
        *puVar14 = (short)uVar6 >> 0xf & (uVar4 ^ uVar6) ^ uVar6;
        uVar6 = uVar5 - 0xd01;
        *puVar11 = (short)uVar6 >> 0xf & (uVar5 ^ uVar6) ^ uVar6;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (puVar12 < puVar2);
      lVar8 = (((long)iVar13 * 2 - 1U >> 1) + 1) * 2;
      if (puVar2 < (ushort *)((long)puVar15 + 1U)) {
        lVar8 = 2;
      }
      puVar15 = (ushort *)((long)puVar2 + lVar8);
    } while (puVar15 < puVar1);
    iVar13 = iVar13 * 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  do {
    puVar15 = param_1 + 1;
    uVar6 = (short)((uint)*param_1 * 0xce7) +
            (short)((ulong)((long)(int)((uint)*param_1 * 0xce7) * 0x13af) >> 0x18) * -0xd01;
    uVar3 = uVar6 - 0xd01;
    *param_1 = (uVar6 ^ uVar3) & (short)uVar3 >> 0xf ^ uVar3;
    param_1 = puVar15;
  } while (puVar15 < puVar1);
  return;
}



undefined8 cbd_3(short *param_1,undefined8 param_2,EVP_MD_CTX *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  short sVar8;
  long in_FS_OFFSET;
  byte local_f8 [192];
  byte local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = EVP_DigestInit_ex(param_3,*(EVP_MD **)(param_4 + 0x18),(ENGINE *)0x0);
  if (iVar4 != 0) {
    iVar4 = single_keccak(local_f8,0xc0,param_2,0x21,param_3);
    if (iVar4 != 0) {
      pbVar6 = local_f8;
      do {
        bVar1 = *pbVar6;
        bVar2 = pbVar6[1];
        pbVar7 = pbVar6 + 3;
        bVar3 = pbVar6[2];
        sVar8 = ((((bVar1 >> 1 & 1) + (bVar1 >> 2 & 1) + (bVar1 & 1)) - (bVar1 >> 3 & 1)) -
                (bVar1 >> 4 & 1)) - (bVar1 >> 5 & 1);
        *param_1 = sVar8 + (sVar8 >> 0xf & 0xd01U);
        sVar8 = ((((ushort)(bVar1 >> 7) + (bVar2 & 1) + (bVar1 >> 6 & 1)) - (bVar2 >> 1 & 1)) -
                (bVar2 >> 2 & 1)) - (bVar2 >> 3 & 1);
        param_1[1] = sVar8 + (sVar8 >> 0xf & 0xd01U);
        sVar8 = ((((bVar2 >> 4 & 1) + (bVar2 >> 5 & 1) + (bVar2 >> 6 & 1)) - (ushort)(bVar2 >> 7)) -
                (bVar3 & 1)) - (bVar3 >> 1 & 1);
        param_1[2] = sVar8 + (sVar8 >> 0xf & 0xd01U);
        sVar8 = ((((bVar3 >> 2 & 1) + (bVar3 >> 3 & 1) + (bVar3 >> 4 & 1)) - (ushort)(bVar3 >> 7)) -
                (bVar3 >> 5 & 1)) - (bVar3 >> 6 & 1);
        param_1[3] = sVar8 + (sVar8 >> 0xf & 0xd01U);
        pbVar6 = pbVar7;
        param_1 = param_1 + 4;
      } while (pbVar7 != local_38);
      uVar5 = 1;
      goto LAB_00100ac1;
    }
  }
  uVar5 = 0;
LAB_00100ac1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void scalar_encode(ulong *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  
  puVar1 = param_2 + 0x100;
  uVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      uVar3 = *param_2;
      iVar2 = iVar4 + param_3;
      param_2 = param_2 + 1;
      uVar5 = uVar5 | (ulong)uVar3 << ((byte)iVar4 & 0x3f);
      if (0x3f < iVar2) break;
      iVar4 = iVar2;
      if (param_2 == puVar1) {
        return;
      }
    }
    *param_1 = uVar5;
    param_1 = param_1 + 1;
    if (iVar2 == 0x40) {
      iVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)(uVar3 >> (-(byte)iVar4 & 0x3f));
      iVar4 = iVar2 + -0x40;
    }
  } while (param_2 != puVar1);
  return;
}



void encode_pubkey(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_2;
  puVar3 = (undefined8 *)param_2[6];
  lVar4 = param_2[8];
  uVar1 = *(uint *)(lVar2 + 0x48);
  if (0 < (int)uVar1) {
    lVar6 = lVar4;
    lVar8 = param_1;
    do {
      lVar7 = lVar6 + 0x200;
      scalar_encode(lVar8,lVar6,0xc);
      lVar8 = lVar8 + 0x180;
      lVar6 = lVar7;
    } while ((ulong)uVar1 * 0x200 + lVar4 != lVar7);
  }
  uVar5 = puVar3[1];
  puVar9 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x30));
  *puVar9 = *puVar3;
  puVar9[1] = uVar5;
  uVar5 = puVar3[3];
  puVar9[2] = puVar3[2];
  puVar9[3] = uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cbd_2(short *param_1,undefined8 param_2,EVP_MD_CTX *param_3,long param_4)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  ushort uVar31;
  undefined1 auVar32 [15];
  unkuint9 Var33;
  undefined1 auVar34 [11];
  undefined1 auVar35 [15];
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [13];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  undefined1 auVar42 [15];
  undefined1 auVar43 [11];
  undefined1 auVar44 [13];
  undefined1 auVar45 [15];
  undefined1 auVar46 [11];
  undefined1 auVar47 [15];
  undefined1 auVar48 [11];
  undefined3 uVar49;
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  uint uVar62;
  undefined5 uVar63;
  undefined1 auVar64 [12];
  undefined8 uVar65;
  undefined1 auVar66 [12];
  undefined1 auVar67 [14];
  undefined8 uVar68;
  undefined1 auVar69 [14];
  uint7 uVar70;
  uint7 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  int iVar80;
  undefined8 uVar81;
  undefined1 (*pauVar82) [16];
  long in_FS_OFFSET;
  ushort uVar83;
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  byte bVar90;
  ushort uVar91;
  byte bVar93;
  ushort uVar94;
  byte bVar96;
  ushort uVar97;
  ushort uVar98;
  undefined1 auVar84 [16];
  char cVar89;
  byte bVar92;
  byte bVar95;
  undefined1 auVar85 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 local_b8 [128];
  undefined1 local_38 [8];
  long local_30;
  
  pauVar82 = (undefined1 (*) [16])local_b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar80 = EVP_DigestInit_ex(param_3,*(EVP_MD **)(param_4 + 0x18),(ENGINE *)0x0);
  if (iVar80 != 0) {
    iVar80 = single_keccak(local_b8,0x80,param_2,0x21,param_3);
    auVar79 = __LC10;
    auVar78 = __LC9;
    auVar77 = __LC8;
    auVar76 = __LC7;
    auVar75 = __LC6;
    auVar74 = __LC5;
    auVar73 = __LC4;
    auVar72 = __LC3;
    if (iVar80 != 0) {
      do {
        auVar99 = *pauVar82;
        pauVar82 = pauVar82 + 1;
        uVar83 = auVar99._0_2_;
        auVar84._0_2_ = uVar83 >> 1;
        uVar86 = auVar99._2_2_;
        auVar84._2_2_ = uVar86 >> 1;
        uVar87 = auVar99._4_2_;
        auVar84._4_2_ = uVar87 >> 1;
        uVar88 = auVar99._6_2_;
        auVar84._6_2_ = uVar88 >> 1;
        uVar91 = auVar99._8_2_;
        auVar84._8_2_ = uVar91 >> 1;
        uVar94 = auVar99._10_2_;
        auVar84._10_2_ = uVar94 >> 1;
        uVar97 = auVar99._12_2_;
        uVar98 = auVar99._14_2_;
        auVar84._12_2_ = uVar97 >> 1;
        auVar84._14_2_ = uVar98 >> 1;
        auVar103._0_2_ = uVar83 >> 2;
        auVar103._2_2_ = uVar86 >> 2;
        auVar103._4_2_ = uVar87 >> 2;
        auVar103._6_2_ = uVar88 >> 2;
        auVar103._8_2_ = uVar91 >> 2;
        auVar103._10_2_ = uVar94 >> 2;
        auVar103._12_2_ = uVar97 >> 2;
        auVar103._14_2_ = uVar98 >> 2;
        auVar99 = auVar99 & auVar73;
        auVar84 = auVar84 & auVar72 & auVar73;
        auVar104 = auVar103 & auVar74 & auVar73;
        cVar89 = auVar84[7] + auVar99[7];
        bVar90 = auVar84[8] + auVar99[8];
        uVar31 = CONCAT11(bVar90,cVar89);
        bVar92 = auVar84[9] + auVar99[9];
        uVar49 = CONCAT12(bVar92,uVar31);
        bVar93 = auVar84[10] + auVar99[10];
        uVar62 = CONCAT13(bVar93,uVar49);
        bVar95 = auVar84[0xb] + auVar99[0xb];
        uVar63 = CONCAT14(bVar95,uVar62);
        bVar96 = auVar84[0xc] + auVar99[0xc];
        auVar67[5] = bVar96;
        auVar67._0_5_ = uVar63;
        auVar101._0_2_ = uVar83 >> 3;
        auVar101._2_2_ = uVar86 >> 3;
        auVar101._4_2_ = uVar87 >> 3;
        auVar101._6_2_ = uVar88 >> 3;
        auVar101._8_2_ = uVar91 >> 3;
        auVar101._10_2_ = uVar94 >> 3;
        auVar101._12_2_ = uVar97 >> 3;
        auVar101._14_2_ = uVar98 >> 3;
        auVar1[0xd] = 0;
        auVar1._0_13_ = auVar104._0_13_;
        auVar1[0xe] = auVar104[7];
        auVar7[0xc] = auVar104[6];
        auVar7._0_12_ = auVar104._0_12_;
        auVar7._13_2_ = auVar1._13_2_;
        auVar11[0xb] = 0;
        auVar11._0_11_ = auVar104._0_11_;
        auVar11._12_3_ = auVar7._12_3_;
        auVar17[10] = auVar104[5];
        auVar17._0_10_ = auVar104._0_10_;
        auVar17._11_4_ = auVar11._11_4_;
        auVar21[9] = 0;
        auVar21._0_9_ = auVar104._0_9_;
        auVar21._10_5_ = auVar17._10_5_;
        uVar70 = CONCAT61(auVar21._9_6_,auVar104[4]);
        auVar32._7_8_ = 0;
        auVar32._0_7_ = uVar70;
        Var33 = CONCAT81(SUB158(auVar32 << 0x40,7),auVar104[3]);
        auVar50._9_6_ = 0;
        auVar50._0_9_ = Var33;
        auVar34._1_10_ = SUB1510(auVar50 << 0x30,5);
        auVar34[0] = auVar104[2];
        auVar51._11_4_ = 0;
        auVar51._0_11_ = auVar34;
        auVar27[2] = auVar104[1];
        auVar27._0_2_ = auVar104._0_2_;
        auVar27._3_12_ = SUB1512(auVar51 << 0x20,3);
        auVar67._6_8_ = 0;
        auVar2[0xe] = cVar89;
        auVar2._0_14_ = auVar67 << 0x38;
        uVar68 = CONCAT26(auVar2._13_2_,CONCAT15(auVar84[6] + auVar99[6],uVar63));
        auVar64._4_8_ = 0;
        auVar64._0_4_ = uVar62;
        auVar12._12_3_ = (int3)((ulong)uVar68 >> 0x28);
        auVar12._0_12_ = auVar64 << 0x38;
        uVar65 = CONCAT44(auVar12._11_4_,CONCAT13(auVar84[5] + auVar99[5],uVar49));
        auVar22._10_5_ = (int5)((ulong)uVar65 >> 0x18);
        auVar22._0_10_ = (unkuint10)uVar31 << 0x38;
        uVar81 = CONCAT62(auVar22._9_6_,CONCAT11(auVar84[4] + auVar99[4],cVar89));
        auVar35._7_8_ = 0;
        auVar35._0_7_ = (uint7)((ulong)uVar81 >> 8);
        Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),auVar84[3] + auVar99[3]);
        auVar52._9_6_ = 0;
        auVar52._0_9_ = Var36;
        auVar37._1_10_ = SUB1510(auVar52 << 0x30,5);
        auVar37[0] = auVar84[2] + auVar99[2];
        auVar53._11_4_ = 0;
        auVar53._0_11_ = auVar37;
        auVar38._1_12_ = SUB1512(auVar53 << 0x20,3);
        auVar38[0] = auVar84[1] + auVar99[1];
        auVar100 = auVar101 & auVar75 & auVar73;
        auVar3[0xd] = 0;
        auVar3._0_13_ = auVar100._0_13_;
        auVar3[0xe] = auVar100[7];
        auVar8[0xc] = auVar100[6];
        auVar8._0_12_ = auVar100._0_12_;
        auVar8._13_2_ = auVar3._13_2_;
        auVar13[0xb] = 0;
        auVar13._0_11_ = auVar100._0_11_;
        auVar13._12_3_ = auVar8._12_3_;
        auVar18[10] = auVar100[5];
        auVar18._0_10_ = auVar100._0_10_;
        auVar18._11_4_ = auVar13._11_4_;
        auVar23[9] = 0;
        auVar23._0_9_ = auVar100._0_9_;
        auVar23._10_5_ = auVar18._10_5_;
        uVar71 = CONCAT61(auVar23._9_6_,auVar100[4]);
        auVar39._7_8_ = 0;
        auVar39._0_7_ = uVar71;
        Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),auVar100[3]);
        auVar54._9_6_ = 0;
        auVar54._0_9_ = Var40;
        auVar41._1_10_ = SUB1510(auVar54 << 0x30,5);
        auVar41[0] = auVar100[2];
        auVar55._11_4_ = 0;
        auVar55._0_11_ = auVar41;
        auVar28[2] = auVar100[1];
        auVar28._0_2_ = auVar100._0_2_;
        auVar28._3_12_ = SUB1512(auVar55 << 0x20,3);
        auVar85._0_2_ = ((ushort)bVar90 - (ushort)auVar104[8]) - (ushort)auVar100[8];
        auVar85._2_2_ = ((ushort)bVar92 - (ushort)auVar104[9]) - (ushort)auVar100[9];
        auVar85._4_2_ = ((ushort)bVar93 - (ushort)auVar104[10]) - (ushort)auVar100[10];
        auVar85._6_2_ = ((ushort)bVar95 - (ushort)auVar104[0xb]) - (ushort)auVar100[0xb];
        auVar85._8_2_ = ((ushort)bVar96 - (ushort)auVar104[0xc]) - (ushort)auVar100[0xc];
        auVar85._10_2_ =
             ((ushort)(byte)(auVar84[0xd] + auVar99[0xd]) - (ushort)auVar104[0xd]) -
             (ushort)auVar100[0xd];
        auVar85._12_2_ =
             ((ushort)(byte)(auVar84[0xe] + auVar99[0xe]) - (ushort)auVar104[0xe]) -
             (ushort)auVar100[0xe];
        auVar85._14_2_ =
             ((ushort)(byte)(auVar84[0xf] + auVar99[0xf]) - (ushort)auVar104[0xf]) -
             (ushort)auVar100[0xf];
        auVar102._0_2_ =
             ((ushort)(byte)(auVar84[0] + auVar99[0]) - (auVar104._0_2_ & 0xff)) -
             (auVar100._0_2_ & 0xff);
        auVar102._2_2_ = (auVar38._0_2_ - auVar27._2_2_) - auVar28._2_2_;
        auVar102._4_2_ = (auVar37._0_2_ - auVar34._0_2_) - auVar41._0_2_;
        auVar102._6_2_ = ((short)Var36 - (short)Var33) - (short)Var40;
        auVar102._8_2_ = ((short)((ulong)uVar81 >> 8) - (short)uVar70) - (short)uVar71;
        auVar102._10_2_ = ((short)((ulong)uVar65 >> 0x18) - auVar17._10_2_) - auVar18._10_2_;
        auVar102._12_2_ = ((short)((ulong)uVar68 >> 0x28) - auVar7._12_2_) - auVar8._12_2_;
        auVar102._14_2_ = ((auVar2._13_2_ >> 8) - (auVar1._13_2_ >> 8)) - (auVar3._13_2_ >> 8);
        auVar106._0_2_ = uVar83 >> 4;
        auVar106._2_2_ = uVar86 >> 4;
        auVar106._4_2_ = uVar87 >> 4;
        auVar106._6_2_ = uVar88 >> 4;
        auVar106._8_2_ = uVar91 >> 4;
        auVar106._10_2_ = uVar94 >> 4;
        auVar106._12_2_ = uVar97 >> 4;
        auVar106._14_2_ = uVar98 >> 4;
        auVar101 = psraw(auVar102,0xf);
        auVar84 = auVar106 & auVar78 & auVar73;
        auVar101 = auVar101 & auVar76;
        auVar103 = psraw(auVar85,0xf);
        auVar103 = auVar103 & auVar76;
        auVar99._0_2_ = uVar83 >> 5;
        auVar99._2_2_ = uVar86 >> 5;
        auVar99._4_2_ = uVar87 >> 5;
        auVar99._6_2_ = uVar88 >> 5;
        auVar99._8_2_ = uVar91 >> 5;
        auVar99._10_2_ = uVar94 >> 5;
        auVar99._12_2_ = uVar97 >> 5;
        auVar99._14_2_ = uVar98 >> 5;
        auVar99 = auVar99 & auVar77 & auVar73;
        cVar89 = auVar99[7] + auVar84[7];
        bVar90 = auVar99[8] + auVar84[8];
        uVar31 = CONCAT11(bVar90,cVar89);
        bVar92 = auVar99[9] + auVar84[9];
        uVar49 = CONCAT12(bVar92,uVar31);
        bVar93 = auVar99[10] + auVar84[10];
        uVar62 = CONCAT13(bVar93,uVar49);
        bVar95 = auVar99[0xb] + auVar84[0xb];
        uVar63 = CONCAT14(bVar95,uVar62);
        bVar96 = auVar99[0xc] + auVar84[0xc];
        auVar69[5] = bVar96;
        auVar69._0_5_ = uVar63;
        auVar105._0_2_ = uVar83 >> 6;
        auVar105._2_2_ = uVar86 >> 6;
        auVar105._4_2_ = uVar87 >> 6;
        auVar105._6_2_ = uVar88 >> 6;
        auVar105._8_2_ = uVar91 >> 6;
        auVar105._10_2_ = uVar94 >> 6;
        auVar105._12_2_ = uVar97 >> 6;
        auVar105._14_2_ = uVar98 >> 6;
        auVar104._0_2_ = uVar83 >> 7;
        auVar104._2_2_ = uVar86 >> 7;
        auVar104._4_2_ = uVar87 >> 7;
        auVar104._6_2_ = uVar88 >> 7;
        auVar104._8_2_ = uVar91 >> 7;
        auVar104._10_2_ = uVar94 >> 7;
        auVar104._12_2_ = uVar97 >> 7;
        auVar104._14_2_ = uVar98 >> 7;
        auVar104 = auVar104 & auVar73;
        auVar69._6_8_ = 0;
        auVar4[0xe] = cVar89;
        auVar4._0_14_ = auVar69 << 0x38;
        uVar68 = CONCAT26(auVar4._13_2_,CONCAT15(auVar99[6] + auVar84[6],uVar63));
        auVar66._4_8_ = 0;
        auVar66._0_4_ = uVar62;
        auVar14._12_3_ = (int3)((ulong)uVar68 >> 0x28);
        auVar14._0_12_ = auVar66 << 0x38;
        uVar65 = CONCAT44(auVar14._11_4_,CONCAT13(auVar99[5] + auVar84[5],uVar49));
        auVar24._10_5_ = (int5)((ulong)uVar65 >> 0x18);
        auVar24._0_10_ = (unkuint10)uVar31 << 0x38;
        uVar81 = CONCAT62(auVar24._9_6_,CONCAT11(auVar99[4] + auVar84[4],cVar89));
        auVar42._7_8_ = 0;
        auVar42._0_7_ = (uint7)((ulong)uVar81 >> 8);
        Var33 = CONCAT81(SUB158(auVar42 << 0x40,7),auVar99[3] + auVar84[3]);
        auVar56._9_6_ = 0;
        auVar56._0_9_ = Var33;
        auVar43._1_10_ = SUB1510(auVar56 << 0x30,5);
        auVar43[0] = auVar99[2] + auVar84[2];
        auVar57._11_4_ = 0;
        auVar57._0_11_ = auVar43;
        auVar44._1_12_ = SUB1512(auVar57 << 0x20,3);
        auVar44[0] = auVar99[1] + auVar84[1];
        auVar106 = auVar105 & auVar79 & auVar73;
        auVar5[0xd] = 0;
        auVar5._0_13_ = auVar106._0_13_;
        auVar5[0xe] = auVar106[7];
        auVar9[0xc] = auVar106[6];
        auVar9._0_12_ = auVar106._0_12_;
        auVar9._13_2_ = auVar5._13_2_;
        auVar15[0xb] = 0;
        auVar15._0_11_ = auVar106._0_11_;
        auVar15._12_3_ = auVar9._12_3_;
        auVar19[10] = auVar106[5];
        auVar19._0_10_ = auVar106._0_10_;
        auVar19._11_4_ = auVar15._11_4_;
        auVar25[9] = 0;
        auVar25._0_9_ = auVar106._0_9_;
        auVar25._10_5_ = auVar19._10_5_;
        uVar70 = CONCAT61(auVar25._9_6_,auVar106[4]);
        auVar45._7_8_ = 0;
        auVar45._0_7_ = uVar70;
        Var36 = CONCAT81(SUB158(auVar45 << 0x40,7),auVar106[3]);
        auVar58._9_6_ = 0;
        auVar58._0_9_ = Var36;
        auVar46._1_10_ = SUB1510(auVar58 << 0x30,5);
        auVar46[0] = auVar106[2];
        auVar59._11_4_ = 0;
        auVar59._0_11_ = auVar46;
        auVar29[2] = auVar106[1];
        auVar29._0_2_ = auVar106._0_2_;
        auVar29._3_12_ = SUB1512(auVar59 << 0x20,3);
        auVar6[0xd] = 0;
        auVar6._0_13_ = auVar104._0_13_;
        auVar6[0xe] = auVar104[7];
        auVar10[0xc] = auVar104[6];
        auVar10._0_12_ = auVar104._0_12_;
        auVar10._13_2_ = auVar6._13_2_;
        auVar16[0xb] = 0;
        auVar16._0_11_ = auVar104._0_11_;
        auVar16._12_3_ = auVar10._12_3_;
        auVar20[10] = auVar104[5];
        auVar20._0_10_ = auVar104._0_10_;
        auVar20._11_4_ = auVar16._11_4_;
        auVar26[9] = 0;
        auVar26._0_9_ = auVar104._0_9_;
        auVar26._10_5_ = auVar20._10_5_;
        uVar71 = CONCAT61(auVar26._9_6_,auVar104[4]);
        auVar47._7_8_ = 0;
        auVar47._0_7_ = uVar71;
        Var40 = CONCAT81(SUB158(auVar47 << 0x40,7),auVar104[3]);
        auVar60._9_6_ = 0;
        auVar60._0_9_ = Var40;
        auVar48._1_10_ = SUB1510(auVar60 << 0x30,5);
        auVar48[0] = auVar104[2];
        auVar61._11_4_ = 0;
        auVar61._0_11_ = auVar48;
        auVar30[2] = auVar104[1];
        auVar30._0_2_ = auVar104._0_2_;
        auVar30._3_12_ = SUB1512(auVar61 << 0x20,3);
        auVar100._0_2_ = ((ushort)bVar90 - (ushort)auVar106[8]) - (ushort)auVar104[8];
        auVar100._2_2_ = ((ushort)bVar92 - (ushort)auVar106[9]) - (ushort)auVar104[9];
        auVar100._4_2_ = ((ushort)bVar93 - (ushort)auVar106[10]) - (ushort)auVar104[10];
        auVar100._6_2_ = ((ushort)bVar95 - (ushort)auVar106[0xb]) - (ushort)auVar104[0xb];
        auVar100._8_2_ = ((ushort)bVar96 - (ushort)auVar106[0xc]) - (ushort)auVar104[0xc];
        auVar100._10_2_ =
             ((ushort)(byte)(auVar99[0xd] + auVar84[0xd]) - (ushort)auVar106[0xd]) -
             (ushort)auVar104[0xd];
        auVar100._12_2_ =
             ((ushort)(byte)(auVar99[0xe] + auVar84[0xe]) - (ushort)auVar106[0xe]) -
             (ushort)auVar104[0xe];
        auVar100._14_2_ =
             ((ushort)(byte)(auVar99[0xf] + auVar84[0xf]) - (ushort)auVar106[0xf]) -
             (ushort)auVar104[0xf];
        auVar107._0_2_ =
             ((ushort)(byte)(auVar99[0] + auVar84[0]) - (auVar106._0_2_ & 0xff)) -
             (auVar104._0_2_ & 0xff);
        auVar107._2_2_ = (auVar44._0_2_ - auVar29._2_2_) - auVar30._2_2_;
        auVar107._4_2_ = (auVar43._0_2_ - auVar46._0_2_) - auVar48._0_2_;
        auVar107._6_2_ = ((short)Var33 - (short)Var36) - (short)Var40;
        auVar107._8_2_ = ((short)((ulong)uVar81 >> 8) - (short)uVar70) - (short)uVar71;
        auVar107._10_2_ = ((short)((ulong)uVar65 >> 0x18) - auVar19._10_2_) - auVar20._10_2_;
        auVar107._12_2_ = ((short)((ulong)uVar68 >> 0x28) - auVar9._12_2_) - auVar10._12_2_;
        auVar107._14_2_ = ((auVar4._13_2_ >> 8) - (auVar5._13_2_ >> 8)) - (auVar6._13_2_ >> 8);
        auVar99 = psraw(auVar100,0xf);
        auVar84 = psraw(auVar107,0xf);
        auVar99 = auVar99 & auVar76;
        auVar84 = auVar84 & auVar76;
        *param_1 = auVar101._0_2_ + auVar102._0_2_;
        param_1[1] = auVar84._0_2_ + auVar107._0_2_;
        param_1[2] = auVar101._2_2_ + auVar102._2_2_;
        param_1[3] = auVar84._2_2_ + auVar107._2_2_;
        param_1[4] = auVar101._4_2_ + auVar102._4_2_;
        param_1[5] = auVar84._4_2_ + auVar107._4_2_;
        param_1[6] = auVar101._6_2_ + auVar102._6_2_;
        param_1[7] = auVar84._6_2_ + auVar107._6_2_;
        param_1[8] = auVar101._8_2_ + auVar102._8_2_;
        param_1[9] = auVar84._8_2_ + auVar107._8_2_;
        param_1[10] = auVar101._10_2_ + auVar102._10_2_;
        param_1[0xb] = auVar84._10_2_ + auVar107._10_2_;
        param_1[0xc] = auVar101._12_2_ + auVar102._12_2_;
        param_1[0xd] = auVar84._12_2_ + auVar107._12_2_;
        param_1[0xe] = auVar101._14_2_ + auVar102._14_2_;
        param_1[0xf] = auVar84._14_2_ + auVar107._14_2_;
        param_1[0x10] = auVar103._0_2_ + auVar85._0_2_;
        param_1[0x11] = auVar99._0_2_ + auVar100._0_2_;
        param_1[0x12] = auVar103._2_2_ + auVar85._2_2_;
        param_1[0x13] = auVar99._2_2_ + auVar100._2_2_;
        param_1[0x14] = auVar103._4_2_ + auVar85._4_2_;
        param_1[0x15] = auVar99._4_2_ + auVar100._4_2_;
        param_1[0x16] = auVar103._6_2_ + auVar85._6_2_;
        param_1[0x17] = auVar99._6_2_ + auVar100._6_2_;
        param_1[0x18] = auVar103._8_2_ + auVar85._8_2_;
        param_1[0x19] = auVar99._8_2_ + auVar100._8_2_;
        param_1[0x1a] = auVar103._10_2_ + auVar85._10_2_;
        param_1[0x1b] = auVar99._10_2_ + auVar100._10_2_;
        param_1[0x1c] = auVar103._12_2_ + auVar85._12_2_;
        param_1[0x1d] = auVar99._12_2_ + auVar100._12_2_;
        param_1[0x1e] = auVar103._14_2_ + auVar85._14_2_;
        param_1[0x1f] = auVar99._14_2_ + auVar100._14_2_;
        param_1 = param_1 + 0x20;
      } while (pauVar82 != (undefined1 (*) [16])local_38);
      uVar81 = 1;
      goto LAB_00100e01;
    }
  }
  uVar81 = 0;
LAB_00100e01:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar81;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool parse_pubkey(long param_1,EVP_MD_CTX *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_3;
  iVar4 = vector_decode_12(param_3[8],param_1,*(undefined4 *)(lVar1 + 0x48));
  if (iVar4 != 0) {
    puVar2 = (undefined8 *)param_3[6];
    puVar5 = (undefined8 *)(*(long *)(lVar1 + 0x30) + param_1);
    uVar3 = puVar5[1];
    *puVar2 = *puVar5;
    puVar2[1] = uVar3;
    uVar3 = puVar5[3];
    puVar2[2] = puVar5[2];
    puVar2[3] = uVar3;
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = param_3[7];
    iVar4 = EVP_DigestInit_ex(param_2,(EVP_MD *)param_3[4],(ENGINE *)0x0);
    if (iVar4 != 0) {
      iVar4 = single_keccak(lVar1,0x20,param_1,uVar3,param_2);
      if (iVar4 != 0) {
        iVar4 = matrix_expand(param_2,param_3);
        return iVar4 != 0;
      }
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
encrypt_cpa(long param_1,long param_2,undefined8 *param_3,short *param_4,undefined8 param_5,
           long *param_6)

{
  short *psVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined2 uVar62;
  short *psVar63;
  short *psVar64;
  short *psVar65;
  short *psVar66;
  short *psVar67;
  short sVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [12];
  undefined1 auVar78 [14];
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  undefined1 auVar81 [12];
  undefined1 auVar82 [12];
  undefined1 auVar83 [14];
  undefined1 auVar84 [15];
  unkuint9 Var85;
  undefined1 auVar86 [11];
  undefined1 auVar87 [13];
  undefined1 auVar88 [15];
  undefined1 auVar89 [11];
  undefined1 auVar90 [15];
  undefined1 auVar91 [11];
  undefined1 auVar92 [13];
  undefined1 auVar93 [15];
  undefined1 auVar94 [11];
  undefined1 auVar95 [13];
  undefined1 auVar96 [15];
  undefined1 auVar97 [11];
  undefined1 auVar98 [13];
  undefined1 auVar99 [15];
  undefined1 auVar100 [11];
  undefined1 auVar101 [15];
  undefined1 auVar102 [11];
  undefined1 auVar103 [15];
  undefined1 auVar104 [11];
  undefined1 auVar105 [13];
  unkbyte10 Var106;
  unkbyte10 Var107;
  undefined1 auVar108 [12];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  int iVar125;
  uint7 uVar126;
  ulong uVar127;
  int iVar128;
  int iVar129;
  code *pcVar130;
  long lVar131;
  long lVar132;
  undefined1 (*pauVar133) [16];
  undefined8 uVar134;
  long lVar135;
  long lVar136;
  long extraout_RDX;
  undefined1 (*pauVar137) [16];
  uint uVar138;
  long lVar139;
  short *psVar140;
  long lVar141;
  short *psVar142;
  ulong uVar143;
  char cVar144;
  char cVar145;
  long in_FS_OFFSET;
  bool bVar146;
  uint uVar147;
  undefined1 auVar148 [12];
  int iVar172;
  short sVar173;
  short sVar174;
  short sVar178;
  short sVar179;
  short sVar180;
  short sVar181;
  short sVar182;
  short sVar183;
  undefined2 uVar184;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  uint uVar176;
  undefined1 auVar154 [16];
  undefined1 auVar149 [12];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  uint uVar185;
  int iVar202;
  uint uVar203;
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  short sVar212;
  short sVar215;
  short sVar216;
  short sVar217;
  short sVar218;
  short sVar219;
  short sVar220;
  short sVar221;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  short sVar228;
  short sVar229;
  short sVar230;
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar231 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar240 [16];
  undefined1 auVar244 [16];
  undefined1 auVar248 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [12];
  short sVar256;
  short sVar257;
  short sVar258;
  undefined1 auVar254 [16];
  uint6 uVar259;
  short sVar267;
  undefined4 uVar266;
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar268 [16];
  undefined1 auVar271 [16];
  undefined1 auVar274 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  ushort uVar280;
  short sVar281;
  undefined1 auVar282 [12];
  ushort uVar287;
  short sVar288;
  short sVar289;
  ushort uVar290;
  short sVar291;
  ushort uVar292;
  short sVar293;
  ushort uVar294;
  short sVar295;
  ushort uVar296;
  short sVar297;
  undefined1 auVar283 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  ushort uVar298;
  short sVar299;
  undefined1 auVar300 [16];
  undefined1 auVar304 [16];
  undefined1 auVar308 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  short sVar316;
  short sVar317;
  short sVar318;
  short sVar319;
  short sVar320;
  short sVar321;
  short sVar322;
  short sVar323;
  undefined2 local_438;
  undefined2 uStack_436;
  undefined2 uStack_434;
  undefined2 uStack_432;
  undefined2 local_3c8;
  undefined2 uStack_3c6;
  undefined2 uStack_3c4;
  undefined2 uStack_3c2;
  undefined2 uStack_3c0;
  undefined2 uStack_3be;
  undefined2 uStack_3bc;
  undefined2 uStack_3ba;
  undefined1 local_268 [512];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  long local_40;
  undefined1 auVar153 [16];
  undefined1 auVar155 [16];
  undefined4 uVar175;
  ulong uVar177;
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  ushort uVar237;
  undefined2 uVar238;
  undefined2 uVar239;
  undefined1 auVar241 [16];
  undefined1 auVar245 [16];
  undefined1 auVar249 [16];
  undefined1 auVar242 [16];
  undefined1 auVar246 [16];
  undefined1 auVar250 [16];
  undefined1 auVar243 [16];
  undefined1 auVar247 [16];
  undefined1 auVar251 [16];
  undefined1 auVar255 [16];
  undefined1 auVar260 [12];
  undefined1 auVar261 [16];
  undefined1 auVar275 [16];
  undefined1 auVar269 [16];
  undefined1 auVar272 [16];
  undefined1 auVar276 [16];
  undefined1 auVar270 [16];
  undefined1 auVar273 [16];
  undefined1 auVar277 [16];
  undefined1 auVar284 [16];
  undefined1 auVar301 [16];
  undefined1 auVar305 [16];
  undefined1 auVar302 [16];
  undefined1 auVar306 [16];
  undefined1 auVar309 [16];
  undefined1 auVar303 [16];
  undefined1 auVar307 [16];
  undefined1 auVar310 [16];
  
  local_68._0_8_ = *param_3;
  local_68._8_8_ = param_3[1];
  lVar5 = *param_6;
  uVar3 = *(uint *)(lVar5 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar130 = cbd_3;
  if (*(int *)(lVar5 + 0x40) != 0x5ae) {
    pcVar130 = cbd_2;
  }
  iVar129 = *(int *)(lVar5 + 0x4c);
  uVar4 = *(undefined4 *)(lVar5 + 0x50);
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  psVar140 = param_4;
  uVar138 = uVar3;
  cVar144 = '\0';
  do {
    local_48 = cVar144;
    cVar144 = local_48 + '\x01';
    iVar128 = (*pcVar130)(psVar140,&local_68,param_5,param_6);
    if (iVar128 == 0) goto LAB_00101209;
    uVar138 = uVar138 - 1;
    scalar_ntt(psVar140);
    psVar140 = psVar140 + 0x100;
  } while (0 < (int)uVar138);
  lVar135 = param_6[8];
  scalar_mult((undefined1 (*) [16])local_268,lVar135,param_4);
  sVar323 = _UNK_001053ae;
  sVar322 = _UNK_001053ac;
  sVar321 = _UNK_001053aa;
  sVar320 = _UNK_001053a8;
  sVar319 = _UNK_001053a6;
  sVar318 = _UNK_001053a4;
  sVar317 = _UNK_001053a2;
  sVar316 = __LC11;
  auVar204 = __LC7;
  uVar127 = _UNK_001052f8;
  uVar143 = __LC0;
  uVar138 = uVar3 - 1;
  if ((int)uVar138 < 1) {
    psVar140 = param_4 + (long)(int)uVar3 * 0x100;
    local_438 = SUB82(psVar140,0);
    uStack_436 = (undefined2)((ulong)psVar140 >> 0x10);
    uStack_434 = (undefined2)((ulong)psVar140 >> 0x20);
    uStack_432 = (undefined2)((ulong)psVar140 >> 0x30);
    scalar_inverse_ntt((undefined1 (*) [16])local_268);
    if (uVar3 != 1) goto LAB_001018f5;
    lVar135 = param_6[9];
  }
  else {
    lVar132 = lVar135;
    psVar140 = param_4;
    do {
      lVar131 = 0;
      lVar139 = lVar132 + 0x200;
      pauVar133 = (undefined1 (*) [16])local_268;
      do {
        auVar191 = *(undefined1 (*) [16])(lVar132 + 0x200 + lVar131 * 2);
        psVar142 = (short *)(lVar132 + 0x210 + lVar131 * 2);
        sVar281 = *psVar142;
        sVar54 = psVar142[1];
        sVar288 = psVar142[2];
        sVar55 = psVar142[3];
        sVar289 = psVar142[4];
        sVar56 = psVar142[5];
        sVar291 = psVar142[6];
        sVar57 = psVar142[7];
        sVar258 = auVar191._6_2_;
        sVar257 = auVar191._4_2_;
        sVar256 = auVar191._2_2_;
        auVar270._12_2_ = sVar258;
        auVar270._0_12_ = auVar191._0_12_;
        auVar270._14_2_ = sVar55;
        auVar269._12_4_ = auVar270._12_4_;
        auVar269._10_2_ = sVar288;
        auVar269._0_10_ = auVar191._0_10_;
        auVar268._10_6_ = auVar269._10_6_;
        auVar268._8_2_ = sVar257;
        auVar268._0_8_ = auVar191._0_8_;
        auVar312._2_8_ = auVar268._8_8_;
        auVar312._0_2_ = sVar54;
        auVar312._10_6_ = 0;
        auVar274._0_2_ = auVar191._0_2_;
        auVar186._12_4_ = 0;
        auVar186._0_12_ = SUB1612(auVar312 << 0x30,4);
        auVar186 = auVar186 << 0x20;
        sVar173 = auVar191._8_2_;
        sVar178 = auVar191._10_2_;
        sVar180 = auVar191._12_2_;
        sVar182 = auVar191._14_2_;
        psVar142 = psVar140 + lVar131 + 0x108;
        sVar293 = *psVar142;
        sVar58 = psVar142[1];
        sVar295 = psVar142[2];
        sVar59 = psVar142[3];
        sVar297 = psVar142[4];
        sVar60 = psVar142[5];
        sVar299 = psVar142[6];
        sVar61 = psVar142[7];
        auVar273._0_12_ = auVar186._0_12_;
        auVar273._12_2_ = sVar54;
        auVar273._14_2_ = sVar56;
        auVar272._12_4_ = auVar273._12_4_;
        auVar272._0_10_ = auVar186._0_10_;
        auVar272._10_2_ = sVar178;
        auVar271._10_6_ = auVar272._10_6_;
        auVar271._0_8_ = auVar186._0_8_;
        auVar271._8_2_ = sVar256;
        auVar70._2_8_ = auVar271._8_8_;
        auVar70._0_2_ = sVar289;
        auVar70._10_6_ = 0;
        auVar191._12_4_ = 0;
        auVar191._0_12_ = SUB1612(auVar70 << 0x30,4);
        auVar191 = auVar191 << 0x20;
        auVar254._2_2_ = sVar258;
        auVar254._0_2_ = sVar256;
        auVar254._4_2_ = sVar178;
        auVar254._6_2_ = sVar182;
        auVar254._8_2_ = sVar54;
        auVar254._10_2_ = sVar55;
        auVar254._12_2_ = sVar56;
        auVar254._14_2_ = sVar57;
        auVar277._0_12_ = auVar191._0_12_;
        auVar277._12_2_ = sVar289;
        auVar277._14_2_ = sVar291;
        auVar276._12_4_ = auVar277._12_4_;
        auVar276._0_10_ = auVar191._0_10_;
        auVar276._10_2_ = sVar288;
        auVar275._10_6_ = auVar276._10_6_;
        auVar275._0_8_ = auVar191._0_8_;
        auVar275._8_2_ = sVar281;
        auVar274._8_8_ = auVar275._8_8_;
        auVar274._6_2_ = sVar180;
        auVar274._4_2_ = sVar173;
        auVar274._2_2_ = sVar257;
        auVar191 = *(undefined1 (*) [16])(psVar140 + lVar131 + 0x100);
        sVar230 = auVar191._6_2_;
        sVar229 = auVar191._4_2_;
        sVar228 = auVar191._2_2_;
        auVar243._12_2_ = sVar230;
        auVar243._0_12_ = auVar191._0_12_;
        auVar243._14_2_ = sVar59;
        auVar242._12_4_ = auVar243._12_4_;
        auVar242._10_2_ = sVar295;
        auVar242._0_10_ = auVar191._0_10_;
        auVar241._10_6_ = auVar242._10_6_;
        auVar241._8_2_ = sVar229;
        auVar241._0_8_ = auVar191._0_8_;
        auVar71._2_8_ = auVar241._8_8_;
        auVar71._0_2_ = sVar58;
        auVar71._10_6_ = 0;
        auVar248._0_2_ = auVar191._0_2_;
        auVar240._12_4_ = 0;
        auVar240._0_12_ = SUB1612(auVar71 << 0x30,4);
        auVar240 = auVar240 << 0x20;
        sVar174 = auVar191._8_2_;
        sVar179 = auVar191._10_2_;
        sVar181 = auVar191._12_2_;
        sVar183 = auVar191._14_2_;
        uVar62 = *(undefined2 *)(pauVar133[1] + 2);
        uVar280 = *(ushort *)(pauVar133[1] + 4);
        uVar287 = *(ushort *)(pauVar133[1] + 6);
        auVar247._0_12_ = auVar240._0_12_;
        auVar247._12_2_ = sVar58;
        auVar247._14_2_ = sVar60;
        auVar246._12_4_ = auVar247._12_4_;
        auVar246._0_10_ = auVar240._0_10_;
        auVar246._10_2_ = sVar179;
        auVar245._10_6_ = auVar246._10_6_;
        auVar245._0_8_ = auVar240._0_8_;
        auVar245._8_2_ = sVar228;
        auVar72._2_8_ = auVar245._8_8_;
        auVar72._0_2_ = sVar297;
        auVar72._10_6_ = 0;
        auVar244._12_4_ = 0;
        auVar244._0_12_ = SUB1612(auVar72 << 0x30,4);
        auVar244 = auVar244 << 0x20;
        auVar251._0_12_ = auVar244._0_12_;
        auVar251._12_2_ = sVar297;
        auVar251._14_2_ = sVar299;
        auVar250._12_4_ = auVar251._12_4_;
        auVar250._0_10_ = auVar244._0_10_;
        auVar250._10_2_ = sVar295;
        auVar249._10_6_ = auVar250._10_6_;
        auVar249._0_8_ = auVar244._0_8_;
        auVar249._8_2_ = sVar293;
        auVar248._8_8_ = auVar249._8_8_;
        auVar248._6_2_ = sVar181;
        auVar248._4_2_ = sVar174;
        auVar248._2_2_ = sVar229;
        auVar222._2_2_ = sVar230;
        auVar222._0_2_ = sVar228;
        auVar222._4_2_ = sVar179;
        auVar222._6_2_ = sVar183;
        auVar222._8_2_ = sVar58;
        auVar222._10_2_ = sVar59;
        auVar222._12_2_ = sVar60;
        auVar222._14_2_ = sVar61;
        auVar191 = *pauVar133;
        uVar239 = auVar191._6_2_;
        auVar233._0_12_ = auVar191._0_12_;
        auVar233._12_2_ = uVar239;
        auVar233._14_2_ = uVar287;
        auVar232._12_4_ = auVar233._12_4_;
        auVar232._0_10_ = auVar191._0_10_;
        auVar232._10_2_ = uVar280;
        uVar238 = auVar191._4_2_;
        auVar231._10_6_ = auVar232._10_6_;
        auVar231._0_8_ = auVar191._0_8_;
        auVar231._8_2_ = uVar238;
        auVar6._4_8_ = auVar231._8_8_;
        auVar6._2_2_ = uVar62;
        uVar237 = auVar191._2_2_;
        auVar6._0_2_ = uVar237;
        auVar234._0_12_ = auVar6 << 0x20;
        auVar303._12_2_ = uVar239;
        auVar303._0_12_ = auVar233._0_12_;
        auVar303._14_2_ = uVar287;
        auVar302._12_4_ = auVar303._12_4_;
        auVar302._10_2_ = uVar280;
        auVar302._0_10_ = auVar232._0_10_;
        auVar301._10_6_ = auVar302._10_6_;
        auVar301._8_2_ = uVar238;
        auVar301._0_8_ = auVar231._0_8_;
        auVar73._2_8_ = auVar301._8_8_;
        auVar73._0_2_ = uVar62;
        auVar73._10_6_ = 0;
        auVar300._12_4_ = 0;
        auVar300._0_12_ = SUB1612(auVar73 << 0x30,4);
        auVar300 = auVar300 << 0x20;
        uVar184 = auVar191._14_2_;
        auVar234._12_2_ = uVar62;
        auVar234._14_2_ = *(undefined2 *)(pauVar133[1] + 10);
        auVar307._0_12_ = auVar300._0_12_;
        auVar307._12_2_ = uVar62;
        auVar307._14_2_ = *(undefined2 *)(pauVar133[1] + 10);
        auVar306._12_4_ = auVar307._12_4_;
        auVar306._0_10_ = auVar300._0_10_;
        auVar306._10_2_ = auVar191._10_2_;
        auVar305._10_6_ = auVar306._10_6_;
        auVar305._0_8_ = auVar300._0_8_;
        auVar305._8_2_ = uVar237;
        auVar74._2_8_ = auVar305._8_8_;
        auVar74._0_2_ = *(undefined2 *)(pauVar133[1] + 8);
        auVar74._10_6_ = 0;
        auVar304._12_4_ = 0;
        auVar304._0_12_ = SUB1612(auVar74 << 0x30,4);
        auVar304 = auVar304 << 0x20;
        auVar186 = pmulhuw(auVar254,auVar222);
        auVar310._0_12_ = auVar304._0_12_;
        auVar310._12_2_ = *(undefined2 *)(pauVar133[1] + 8);
        auVar310._14_2_ = *(undefined2 *)(pauVar133[1] + 0xc);
        auVar309._12_4_ = auVar310._12_4_;
        auVar309._0_10_ = auVar304._0_10_;
        auVar309._10_2_ = uVar280;
        auVar308._10_6_ = auVar309._10_6_;
        auVar308._0_8_ = auVar304._0_8_;
        auVar308._8_2_ = *(ushort *)pauVar133[1];
        auVar76._2_8_ = auVar308._8_8_;
        auVar76._0_2_ = auVar191._12_2_;
        auVar76._10_6_ = 0;
        auVar75._12_4_ = 0;
        auVar75._0_12_ = SUB1612(auVar76 << 0x30,4);
        auVar108._2_2_ = uVar62;
        auVar108._0_2_ = uVar184;
        sVar267 = sVar182 * sVar183;
        uVar259 = CONCAT24(sVar55 * sVar59,CONCAT22(auVar186._8_2_,sVar54 * sVar58));
        auVar260._0_8_ = CONCAT26(auVar186._10_2_,uVar259);
        auVar260._8_2_ = sVar56 * sVar60;
        auVar260._10_2_ = auVar186._12_2_;
        auVar261._12_2_ = sVar57 * sVar61;
        auVar261._0_12_ = auVar260;
        auVar261._14_2_ = auVar186._14_2_;
        uVar266 = CONCAT22(auVar186._6_2_,sVar267);
        Var106 = CONCAT64(CONCAT42(uVar266,auVar186._4_2_),CONCAT22(sVar178 * sVar179,sVar267));
        uVar177 = (ulong)((unkuint10)Var106 >> 0x10);
        auVar77._4_8_ = uVar177;
        auVar77._2_2_ = auVar186._2_2_;
        auVar77._0_2_ = sVar258 * sVar230;
        auVar150._2_2_ = auVar186._0_2_;
        auVar150._0_2_ = sVar256 * sVar228;
        auVar150._4_12_ = auVar77;
        auVar187._8_4_ = auVar77._0_4_;
        auVar187._0_8_ = auVar150._0_8_;
        auVar187._12_4_ = auVar77._0_4_;
        uVar175 = (undefined4)((unkuint10)Var106 >> 0x10);
        auVar151._4_4_ = uVar175;
        auVar151._0_4_ = uVar175;
        auVar151._8_4_ = uVar266;
        auVar151._12_4_ = uVar266;
        auVar312 = pmulhuw(auVar274,auVar248);
        uVar266 = (undefined4)((ulong)auVar260._0_8_ >> 0x20);
        auVar152._8_4_ = uVar266;
        auVar152._0_8_ = auVar260._0_8_;
        auVar152._12_4_ = uVar266;
        uVar147 = auVar260._8_4_;
        auVar262._4_4_ = uVar147;
        auVar262._0_4_ = uVar147;
        auVar262._12_4_ = auVar261._12_4_;
        auVar262._8_4_ = auVar262._12_4_;
        sVar212 = auVar204._0_2_;
        sVar215 = auVar204._2_2_;
        sVar216 = auVar204._4_2_;
        sVar217 = auVar204._6_2_;
        sVar218 = auVar204._8_2_;
        sVar219 = auVar204._10_2_;
        sVar220 = auVar204._12_2_;
        sVar221 = auVar204._14_2_;
        auVar283._0_2_ =
             sVar256 * sVar228 -
             (short)((auVar150._0_8_ & 0xffffffff) * (uVar143 & 0xffffffff) >> 0x18) * sVar212;
        auVar283._2_2_ =
             sVar258 * sVar230 -
             (short)((auVar187._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar215;
        auVar283._4_2_ =
             sVar178 * sVar179 -
             (short)((uVar177 & 0xffffffff) * (uVar143 & 0xffffffff) >> 0x18) * sVar216;
        auVar283._6_2_ =
             sVar267 - (short)((auVar151._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) *
                       sVar217;
        auVar283._8_2_ =
             sVar54 * sVar58 -
             (short)(((ulong)uVar259 & 0xffffffff) * (uVar143 & 0xffffffff) >> 0x18) * sVar218;
        auVar283._10_2_ =
             sVar55 * sVar59 -
             (short)((auVar152._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar219;
        auVar283._12_2_ =
             sVar56 * sVar60 - (short)((ulong)uVar147 * (uVar143 & 0xffffffff) >> 0x18) * sVar220;
        auVar283._14_2_ =
             sVar57 * sVar61 -
             (short)((auVar262._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar221;
        auVar263._0_2_ = auVar283._0_2_ + sVar316;
        auVar263._2_2_ = auVar283._2_2_ + sVar317;
        auVar263._4_2_ = auVar283._4_2_ + sVar318;
        auVar263._6_2_ = auVar283._6_2_ + sVar319;
        auVar263._8_2_ = auVar283._8_2_ + sVar320;
        auVar263._10_2_ = auVar283._10_2_ + sVar321;
        auVar263._12_2_ = auVar283._12_2_ + sVar322;
        auVar263._14_2_ = auVar283._14_2_ + sVar323;
        auVar186 = psraw(auVar263,0xf);
        auVar263 = auVar186 & (auVar283 ^ auVar263) ^ auVar263;
        auVar7._10_2_ = 0;
        auVar7._0_10_ = SUB1610(auVar75 << 0x20,0);
        auVar7._12_2_ = auVar191._12_2_;
        auVar13._8_2_ = auVar191._8_2_;
        auVar13._0_8_ = SUB168(auVar75 << 0x20,0);
        auVar13._10_4_ = auVar7._10_4_;
        auVar78._6_8_ = 0;
        auVar78._0_6_ = auVar13._8_6_;
        iVar172 = CONCAT22(auVar312._8_2_,sVar281 * sVar293);
        auVar148._0_8_ = CONCAT26(auVar312._10_2_,CONCAT24(sVar288 * sVar295,iVar172));
        auVar148._8_2_ = sVar289 * sVar297;
        auVar148._10_2_ = auVar312._12_2_;
        auVar153._12_2_ = sVar291 * sVar299;
        auVar153._0_12_ = auVar148;
        auVar153._14_2_ = auVar312._14_2_;
        iVar128 = CONCAT22(auVar312._6_2_,sVar180 * sVar181);
        Var106 = CONCAT64(CONCAT42(iVar128,auVar312._4_2_),
                          CONCAT22(sVar173 * sVar174,sVar180 * sVar181));
        auVar79._4_8_ = (long)((unkuint10)Var106 >> 0x10);
        auVar79._2_2_ = auVar312._2_2_;
        auVar79._0_2_ = sVar257 * sVar229;
        psVar142 = (short *)((long)&kModRoots + lVar131);
        psVar1 = (short *)((long)&DAT_00104ee2 + lVar131);
        psVar63 = (short *)(&UNK_00104ee4 + lVar131);
        psVar64 = (short *)(&UNK_00104ee8 + lVar131);
        psVar65 = (short *)(&UNK_00104eea + lVar131);
        psVar66 = (short *)(&UNK_00104eec + lVar131);
        psVar67 = (short *)(&UNK_00104eee + lVar131);
        sVar267 = *(short *)(&UNK_00104ee6 + lVar131) * auVar263._6_2_;
        auVar186 = pmulhuw(auVar263,*(undefined1 (*) [16])((long)&kModRoots + lVar131));
        lVar131 = lVar131 + 0x10;
        iVar202 = CONCAT22(auVar186._8_2_,*psVar64 * auVar263._8_2_);
        auVar282._0_8_ = CONCAT26(auVar186._10_2_,CONCAT24(*psVar65 * auVar263._10_2_,iVar202));
        auVar282._8_2_ = *psVar66 * auVar263._12_2_;
        auVar282._10_2_ = auVar186._12_2_;
        auVar284._12_2_ = *psVar67 * auVar263._14_2_;
        auVar284._0_12_ = auVar282;
        auVar284._14_2_ = auVar186._14_2_;
        iVar125 = CONCAT22(auVar186._6_2_,sVar267);
        Var107 = CONCAT64(CONCAT42(iVar125,auVar186._4_2_),
                          CONCAT22(*psVar63 * auVar263._4_2_,sVar267));
        auVar80._4_8_ = (long)((unkuint10)Var107 >> 0x10);
        auVar80._2_2_ = auVar186._2_2_;
        auVar80._0_2_ = *psVar1 * auVar263._2_2_;
        uVar147 = iVar172 + (uint)*(ushort *)pauVar133[1] + iVar202;
        iVar172 = (int)((ulong)auVar148._0_8_ >> 0x20) + (uint)uVar280 +
                  (int)((ulong)auVar282._0_8_ >> 0x20);
        auVar189._4_4_ = iVar172;
        auVar189._0_4_ = uVar147;
        uVar176 = auVar148._8_4_ + (auVar309._12_4_ & 0xffff) + auVar282._8_4_;
        auVar154._12_4_ = auVar153._12_4_ + (auVar309._12_4_ >> 0x10) + auVar284._12_4_;
        uVar185 = CONCAT22(auVar312._0_2_,auVar274._0_2_ * auVar248._0_2_) + (uint)auVar191._0_2_ +
                  CONCAT22(auVar186._0_2_,*psVar142 * auVar263._0_2_);
        iVar202 = auVar79._0_4_ + (int)CONCAT82(SUB148(auVar78 << 0x40,6),uVar238) + auVar80._0_4_;
        auVar285._4_4_ = iVar202;
        auVar285._0_4_ = uVar185;
        uVar203 = (int)((unkuint10)Var106 >> 0x10) + auVar13._8_4_ +
                  (int)((unkuint10)Var107 >> 0x10);
        auVar188._12_4_ = iVar128 + (auVar7._10_4_ >> 0x10) + iVar125;
        auVar285._8_4_ = iVar202;
        auVar285._12_4_ = iVar202;
        auVar188._4_4_ = uVar203;
        auVar188._0_4_ = uVar203;
        auVar188._8_4_ = auVar188._12_4_;
        auVar189._8_4_ = iVar172;
        auVar189._12_4_ = iVar172;
        auVar154._4_4_ = uVar176;
        auVar154._0_4_ = uVar176;
        auVar154._8_4_ = auVar154._12_4_;
        auVar312 = pmulhuw(auVar248,auVar254);
        iVar128 = CONCAT22(auVar312._6_2_,sVar182 * sVar181);
        Var106 = CONCAT64(CONCAT42(iVar128,auVar312._4_2_),
                          CONCAT22(sVar178 * sVar174,sVar182 * sVar181));
        auVar81._4_8_ = (long)((unkuint10)Var106 >> 0x10);
        auVar81._2_2_ = auVar312._2_2_;
        auVar81._0_2_ = sVar258 * sVar229;
        auVar264._0_2_ =
             (short)uVar185 - (short)((ulong)uVar185 * (uVar143 & 0xffffffff) >> 0x18) * sVar212;
        auVar264._2_2_ =
             (short)iVar202 -
             (short)((auVar285._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar215;
        auVar264._4_2_ =
             (short)uVar203 - (short)((ulong)uVar203 * (uVar143 & 0xffffffff) >> 0x18) * sVar216;
        auVar264._6_2_ =
             (short)auVar188._12_4_ -
             (short)((auVar188._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar217;
        auVar264._8_2_ =
             (short)uVar147 - (short)((ulong)uVar147 * (uVar143 & 0xffffffff) >> 0x18) * sVar218;
        auVar264._10_2_ =
             (short)iVar172 -
             (short)((auVar189._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar219;
        auVar264._12_2_ =
             (short)uVar176 - (short)((ulong)uVar176 * (uVar143 & 0xffffffff) >> 0x18) * sVar220;
        auVar264._14_2_ =
             (short)auVar154._12_4_ -
             (short)((auVar154._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar221;
        auVar265._0_2_ = auVar264._0_2_ + sVar316;
        auVar265._2_2_ = auVar264._2_2_ + sVar317;
        auVar265._4_2_ = auVar264._4_2_ + sVar318;
        auVar265._6_2_ = auVar264._6_2_ + sVar319;
        auVar265._8_2_ = auVar264._8_2_ + sVar320;
        auVar265._10_2_ = auVar264._10_2_ + sVar321;
        auVar265._12_2_ = auVar264._12_2_ + sVar322;
        auVar265._14_2_ = auVar264._14_2_ + sVar323;
        auVar186 = psraw(auVar265,0xf);
        auVar265 = (auVar264 ^ auVar265) & auVar186 ^ auVar265;
        auVar186 = pmulhuw(auVar222,auVar274);
        iVar172 = CONCAT22(auVar186._8_2_,sVar281 * sVar58);
        auVar149._0_8_ = CONCAT26(auVar186._10_2_,CONCAT24(sVar288 * sVar59,iVar172));
        auVar149._8_2_ = sVar289 * sVar60;
        auVar149._10_2_ = auVar186._12_2_;
        auVar155._12_2_ = sVar291 * sVar61;
        auVar155._0_12_ = auVar149;
        auVar155._14_2_ = auVar186._14_2_;
        iVar125 = CONCAT22(auVar186._6_2_,sVar180 * sVar183);
        Var107 = CONCAT64(CONCAT42(iVar125,auVar186._4_2_),
                          CONCAT22(sVar173 * sVar179,sVar180 * sVar183));
        auVar82._4_8_ = (long)((unkuint10)Var107 >> 0x10);
        auVar82._2_2_ = auVar186._2_2_;
        auVar82._0_2_ = sVar257 * sVar230;
        auVar108._4_8_ = 0;
        auVar8._12_2_ = uVar184;
        auVar8._0_12_ = auVar108 << 0x30;
        uVar134 = CONCAT44(auVar8._10_4_,CONCAT22(auVar191._10_2_,uVar184));
        auVar83._6_8_ = 0;
        auVar83._0_6_ = (uint6)((ulong)uVar134 >> 0x10);
        uVar185 = CONCAT22(auVar186._0_2_,auVar274._0_2_ * sVar228) +
                  CONCAT22(auVar312._0_2_,sVar256 * auVar248._0_2_) + (uint)uVar237;
        iVar202 = auVar82._0_4_ + auVar81._0_4_ + (int)CONCAT82(SUB148(auVar83 << 0x40,6),uVar239);
        auVar223._4_4_ = iVar202;
        auVar223._0_4_ = uVar185;
        uVar203 = (int)((unkuint10)Var107 >> 0x10) + (int)((unkuint10)Var106 >> 0x10) +
                  (int)((ulong)uVar134 >> 0x10);
        auVar190._12_4_ = iVar125 + iVar128 + (auVar8._10_4_ >> 0x10);
        iVar128 = CONCAT22(auVar312._8_2_,sVar54 * sVar293);
        auVar253._0_8_ = CONCAT26(auVar312._10_2_,CONCAT24(sVar55 * sVar295,iVar128));
        auVar253._8_2_ = sVar56 * sVar297;
        auVar253._10_2_ = auVar312._12_2_;
        auVar255._12_2_ = sVar57 * sVar299;
        auVar255._0_12_ = auVar253;
        auVar255._14_2_ = auVar312._14_2_;
        uVar147 = iVar172 + iVar128 + (auVar234._12_4_ & 0xffff);
        iVar128 = (int)((ulong)auVar149._0_8_ >> 0x20) + (int)((ulong)auVar253._0_8_ >> 0x20) +
                  (uint)uVar287;
        auVar252._4_4_ = iVar128;
        auVar252._0_4_ = uVar147;
        uVar176 = auVar149._8_4_ + auVar253._8_4_ + (auVar234._12_4_ >> 0x10);
        auVar156._12_4_ = auVar155._12_4_ + auVar255._12_4_ + (uint)*(ushort *)(pauVar133[1] + 0xe);
        auVar223._8_4_ = iVar202;
        auVar223._12_4_ = iVar202;
        auVar190._4_4_ = uVar203;
        auVar190._0_4_ = uVar203;
        auVar190._8_4_ = auVar190._12_4_;
        auVar252._8_4_ = iVar128;
        auVar252._12_4_ = iVar128;
        auVar156._4_4_ = uVar176;
        auVar156._0_4_ = uVar176;
        auVar156._8_4_ = auVar156._12_4_;
        auVar235._0_2_ =
             (short)uVar185 - (short)((ulong)uVar185 * (uVar143 & 0xffffffff) >> 0x18) * sVar212;
        auVar235._2_2_ =
             (short)iVar202 -
             (short)((auVar223._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar215;
        auVar235._4_2_ =
             (short)uVar203 - (short)((ulong)uVar203 * (uVar143 & 0xffffffff) >> 0x18) * sVar216;
        auVar235._6_2_ =
             (short)auVar190._12_4_ -
             (short)((auVar190._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar217;
        auVar235._8_2_ =
             (short)uVar147 - (short)((ulong)uVar147 * (uVar143 & 0xffffffff) >> 0x18) * sVar218;
        auVar235._10_2_ =
             (short)iVar128 -
             (short)((auVar252._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar219;
        auVar235._12_2_ =
             (short)uVar176 - (short)((ulong)uVar176 * (uVar143 & 0xffffffff) >> 0x18) * sVar220;
        auVar235._14_2_ =
             (short)auVar156._12_4_ -
             (short)((auVar156._8_8_ & 0xffffffff) * (uVar127 & 0xffffffff) >> 0x18) * sVar221;
        auVar157._0_2_ = auVar235._0_2_ + sVar316;
        auVar157._2_2_ = auVar235._2_2_ + sVar317;
        auVar157._4_2_ = auVar235._4_2_ + sVar318;
        auVar157._6_2_ = auVar235._6_2_ + sVar319;
        auVar157._8_2_ = auVar235._8_2_ + sVar320;
        auVar157._10_2_ = auVar235._10_2_ + sVar321;
        auVar157._12_2_ = auVar235._12_2_ + sVar322;
        auVar157._14_2_ = auVar235._14_2_ + sVar323;
        auVar191 = psraw(auVar157,0xf);
        auVar157 = (auVar235 ^ auVar157) & auVar191 ^ auVar157;
        auVar195._0_12_ = auVar265._0_12_;
        auVar195._12_2_ = auVar265._6_2_;
        auVar195._14_2_ = auVar157._6_2_;
        auVar194._12_4_ = auVar195._12_4_;
        auVar194._0_10_ = auVar265._0_10_;
        auVar194._10_2_ = auVar157._4_2_;
        auVar193._10_6_ = auVar194._10_6_;
        auVar193._0_8_ = auVar265._0_8_;
        auVar193._8_2_ = auVar265._4_2_;
        auVar192._8_8_ = auVar193._8_8_;
        auVar192._6_2_ = auVar157._2_2_;
        auVar192._4_2_ = auVar265._2_2_;
        auVar192._0_2_ = auVar265._0_2_;
        auVar192._2_2_ = auVar157._0_2_;
        *pauVar133 = auVar192;
        *(short *)pauVar133[1] = auVar265._8_2_;
        *(short *)(pauVar133[1] + 2) = auVar157._8_2_;
        *(short *)(pauVar133[1] + 4) = auVar265._10_2_;
        *(short *)(pauVar133[1] + 6) = auVar157._10_2_;
        *(short *)(pauVar133[1] + 8) = auVar265._12_2_;
        *(short *)(pauVar133[1] + 10) = auVar157._12_2_;
        *(short *)(pauVar133[1] + 0xc) = auVar265._14_2_;
        *(short *)(pauVar133[1] + 0xe) = auVar157._14_2_;
        pauVar133 = pauVar133 + 2;
      } while (lVar131 != 0x100);
      lVar132 = lVar139;
      psVar140 = psVar140 + 0x100;
    } while (lVar139 != (ulong)uVar138 * 0x200 + lVar135);
    psVar140 = param_4 + (long)(int)uVar3 * 0x100;
    local_438 = SUB82(psVar140,0);
    uStack_436 = (undefined2)((ulong)psVar140 >> 0x10);
    uStack_434 = (undefined2)((ulong)psVar140 >> 0x20);
    uStack_432 = (undefined2)((ulong)psVar140 >> 0x30);
    scalar_inverse_ntt((undefined1 (*) [16])local_268);
    lVar135 = param_6[9];
  }
  lVar132 = CONCAT26(uStack_432,CONCAT24(uStack_434,CONCAT22(uStack_436,local_438)));
  lVar139 = (ulong)(uVar3 - 2) + 1;
  lVar131 = lVar132;
  do {
    lVar141 = lVar135 + 0x200;
    scalar_mult(lVar131,lVar135,param_4);
    psVar140 = param_4;
    lVar135 = lVar141;
    if (uVar138 != 0) {
      do {
        psVar142 = psVar140 + 0x100;
        lVar136 = 0;
        do {
          uVar280 = *(ushort *)(lVar135 + 2 + lVar136 * 2);
          uVar176 = (uint)uVar280 * (uint)(ushort)psVar140[lVar136 + 0x101];
          uVar176 = uVar176 + (int)((ulong)uVar176 * 0x13af >> 0x18) * -0xd01;
          uVar147 = uVar176 - 0xd01;
          uVar185 = (uint)*(ushort *)(lVar135 + lVar136 * 2);
          uVar147 = (((uint)(ushort)((short)uVar147 >> 0xf) & (uVar176 ^ uVar147) ^ uVar147) &
                    0xffff) * (uint)*(ushort *)((long)&kModRoots + lVar136) +
                    (uint)*(ushort *)(lVar131 + lVar136 * 2) +
                    uVar185 * (ushort)psVar140[lVar136 + 0x100];
          uVar237 = (short)uVar147 + (short)((ulong)uVar147 * 0x13af >> 0x18) * -0xd01;
          uVar287 = uVar237 - 0xd01;
          uVar147 = (uint)*(ushort *)(lVar131 + 2 + lVar136 * 2) +
                    (uint)(ushort)psVar140[lVar136 + 0x100] * (uint)uVar280 +
                    uVar185 * (ushort)psVar140[lVar136 + 0x101];
          *(ushort *)(lVar131 + lVar136 * 2) = (short)uVar287 >> 0xf & (uVar237 ^ uVar287) ^ uVar287
          ;
          uVar287 = (short)uVar147 + (short)((ulong)uVar147 * 0x13af >> 0x18) * -0xd01;
          uVar280 = uVar287 - 0xd01;
          *(ushort *)(lVar131 + 2 + lVar136 * 2) =
               (uVar287 ^ uVar280) & (short)uVar280 >> 0xf ^ uVar280;
          lVar136 = lVar136 + 2;
        } while (lVar136 != 0x100);
        psVar140 = psVar142;
        lVar135 = lVar135 + 0x200;
      } while (psVar142 != param_4 + lVar139 * 0x100);
      lVar141 = lVar141 + lVar139 * 0x200;
    }
    scalar_inverse_ntt(lVar131);
    bVar146 = lVar131 != (ulong)uVar138 * 0x200 + lVar132;
    lVar131 = lVar131 + 0x200;
    lVar135 = lVar141;
  } while (bVar146);
LAB_001018f5:
  local_68._0_8_ = *param_3;
  local_68._8_8_ = param_3[1];
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  psVar140 = param_4;
  uVar138 = uVar3;
  do {
    cVar145 = cVar144 + '\x01';
    local_48 = cVar144;
    iVar128 = cbd_2(psVar140,&local_68,param_5,param_6);
    sVar323 = _UNK_001053ae;
    sVar322 = _UNK_001053ac;
    sVar321 = _UNK_001053aa;
    sVar320 = _UNK_001053a8;
    sVar319 = _UNK_001053a6;
    sVar318 = _UNK_001053a4;
    sVar317 = _UNK_001053a2;
    sVar316 = __LC11;
    if (iVar128 == 0) goto LAB_00101209;
    uVar138 = uVar138 - 1;
    psVar140 = psVar140 + 0x100;
    cVar144 = cVar145;
  } while (0 < (int)uVar138);
  lVar135 = CONCAT26(uStack_432,CONCAT24(uStack_434,CONCAT22(uStack_436,local_438)));
  psVar140 = param_4;
  uVar138 = uVar3;
  do {
    lVar132 = 0;
    do {
      psVar142 = (short *)((long)psVar140 + lVar132);
      psVar1 = (short *)(lVar135 + lVar132);
      auVar204._0_2_ = *psVar142 + *psVar1;
      auVar204._2_2_ = psVar142[1] + psVar1[1];
      auVar204._4_2_ = psVar142[2] + psVar1[2];
      auVar204._6_2_ = psVar142[3] + psVar1[3];
      auVar204._8_2_ = psVar142[4] + psVar1[4];
      auVar204._10_2_ = psVar142[5] + psVar1[5];
      auVar204._12_2_ = psVar142[6] + psVar1[6];
      auVar204._14_2_ = psVar142[7] + psVar1[7];
      auVar196._0_2_ = auVar204._0_2_ + sVar316;
      auVar196._2_2_ = auVar204._2_2_ + sVar317;
      auVar196._4_2_ = auVar204._4_2_ + sVar318;
      auVar196._6_2_ = auVar204._6_2_ + sVar319;
      auVar196._8_2_ = auVar204._8_2_ + sVar320;
      auVar196._10_2_ = auVar204._10_2_ + sVar321;
      auVar196._12_2_ = auVar204._12_2_ + sVar322;
      auVar196._14_2_ = auVar204._14_2_ + sVar323;
      auVar191 = psraw(auVar196,0xf);
      *(undefined1 (*) [16])(lVar135 + lVar132) = (auVar204 ^ auVar196) & auVar191 ^ auVar196;
      lVar132 = lVar132 + 0x10;
    } while (lVar132 != 0x200);
    uVar138 = uVar138 - 1;
    lVar135 = lVar135 + 0x200;
    psVar140 = psVar140 + 0x100;
  } while (0 < (int)uVar138);
  lVar135 = CONCAT26(uStack_432,CONCAT24(uStack_434,CONCAT22(uStack_436,local_438)));
  uVar143 = (ulong)uVar3;
  do {
    uVar143 = (ulong)((int)uVar143 - 1);
    scalar_compress(lVar135,iVar129,lVar135 + 0x200);
    lVar135 = extraout_RDX;
  } while (0 < (int)uVar143);
  if (0 < (int)uVar3) {
    lVar135 = CONCAT26(uStack_432,CONCAT24(uStack_434,CONCAT22(uStack_436,local_438)));
    lVar132 = param_1;
    lVar131 = lVar135;
    do {
      lVar139 = lVar131 + 0x200;
      scalar_encode(lVar132,lVar131,iVar129);
      lVar132 = lVar132 + (iVar129 << 5);
      lVar131 = lVar139;
    } while (lVar139 != lVar135 + (ulong)uVar3 * 0x200);
  }
  local_68._0_8_ = *param_3;
  local_68._8_8_ = param_3[1];
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  local_48 = cVar145;
  iVar129 = cbd_2(param_4,&local_68,param_5,param_6);
  pauVar133 = (undefined1 (*) [16])local_268;
  if (iVar129 == 0) {
LAB_00101209:
    uVar134 = 0;
  }
  else {
    do {
      auVar158._0_2_ = *param_4 + *(short *)*pauVar133;
      auVar158._2_2_ = param_4[1] + *(short *)(*pauVar133 + 2);
      auVar158._4_2_ = param_4[2] + *(short *)(*pauVar133 + 4);
      auVar158._6_2_ = param_4[3] + *(short *)(*pauVar133 + 6);
      auVar158._8_2_ = param_4[4] + *(short *)(*pauVar133 + 8);
      auVar158._10_2_ = param_4[5] + *(short *)(*pauVar133 + 10);
      auVar158._12_2_ = param_4[6] + *(short *)(*pauVar133 + 0xc);
      auVar158._14_2_ = param_4[7] + *(short *)(*pauVar133 + 0xe);
      pauVar137 = pauVar133 + 1;
      param_4 = param_4 + 8;
      auVar197._0_2_ = auVar158._0_2_ + sVar316;
      auVar197._2_2_ = auVar158._2_2_ + sVar317;
      auVar197._4_2_ = auVar158._4_2_ + sVar318;
      auVar197._6_2_ = auVar158._6_2_ + sVar319;
      auVar197._8_2_ = auVar158._8_2_ + sVar320;
      auVar197._10_2_ = auVar158._10_2_ + sVar321;
      auVar197._12_2_ = auVar158._12_2_ + sVar322;
      auVar197._14_2_ = auVar158._14_2_ + sVar323;
      auVar204 = psraw(auVar197,0xf);
      *pauVar133 = (auVar158 ^ auVar197) & auVar204 ^ auVar197;
      pauVar133 = pauVar137;
    } while (pauVar137 != &local_68);
    lVar135 = 0;
    pauVar133 = (undefined1 (*) [16])local_268;
    do {
      uVar298 = _UNK_001053be;
      uVar296 = _UNK_001053bc;
      uVar294 = _UNK_001053ba;
      uVar292 = _UNK_001053b8;
      uVar290 = _UNK_001053b6;
      uVar237 = _UNK_001053b4;
      uVar287 = _UNK_001053b2;
      uVar280 = __LC12;
      sVar281 = *(short *)(*pauVar133 + 0xc);
      sVar54 = *(short *)(*pauVar133 + 0xe);
      sVar288 = *(short *)(pauVar133[1] + 0xc);
      sVar55 = *(short *)(pauVar133[1] + 0xe);
      sVar289 = *(short *)(pauVar133[2] + 0xc);
      sVar56 = *(short *)(pauVar133[2] + 0xe);
      sVar291 = *(short *)(pauVar133[3] + 0xc);
      sVar57 = *(short *)(pauVar133[3] + 0xe);
      sVar293 = *(short *)(pauVar133[4] + 0xc);
      sVar58 = *(short *)(pauVar133[4] + 0xe);
      sVar295 = *(short *)(pauVar133[5] + 0xc);
      sVar59 = *(short *)(pauVar133[5] + 0xe);
      sVar297 = *(short *)(pauVar133[6] + 0xc);
      sVar60 = *(short *)(pauVar133[6] + 0xe);
      sVar299 = *(short *)(pauVar133[7] + 0xc);
      sVar61 = *(short *)(pauVar133[7] + 0xe);
      sVar173 = *(short *)(pauVar133[0xb] + 10);
      sVar174 = *(short *)(pauVar133[0xb] + 0xc);
      sVar178 = *(short *)(pauVar133[0xb] + 0xe);
      sVar179 = *(short *)(pauVar133[0xf] + 10);
      sVar180 = *(short *)(pauVar133[0xf] + 0xc);
      sVar181 = *(short *)(pauVar133[0xf] + 0xe);
      sVar182 = *(short *)(pauVar133[10] + 10);
      sVar183 = *(short *)(pauVar133[10] + 0xc);
      sVar212 = *(short *)(pauVar133[10] + 0xe);
      sVar215 = *(short *)(pauVar133[8] + 10);
      sVar216 = *(short *)(pauVar133[8] + 0xc);
      sVar217 = *(short *)(pauVar133[8] + 0xe);
      sVar218 = *(short *)(pauVar133[9] + 10);
      sVar219 = *(short *)(pauVar133[9] + 0xc);
      sVar220 = *(short *)(pauVar133[9] + 0xe);
      sVar221 = *(short *)(pauVar133[0xd] + 10);
      sVar228 = *(short *)(pauVar133[0xd] + 0xc);
      sVar229 = *(short *)(pauVar133[0xd] + 0xe);
      sVar230 = *(short *)(pauVar133[0xc] + 10);
      sVar256 = *(short *)(pauVar133[0xc] + 0xc);
      sVar257 = *(short *)(pauVar133[0xc] + 0xe);
      sVar258 = *(short *)(pauVar133[0xe] + 10);
      sVar267 = *(short *)(pauVar133[0xe] + 0xc);
      sVar68 = *(short *)(pauVar133[0xe] + 0xe);
      auVar204 = *(undefined1 (*) [16])(param_2 + lVar135) & __LC4;
      auVar14[0xd] = 0;
      auVar14._0_13_ = auVar204._0_13_;
      auVar14[0xe] = auVar204[7];
      auVar22[0xc] = auVar204[6];
      auVar22._0_12_ = auVar204._0_12_;
      auVar22._13_2_ = auVar14._13_2_;
      auVar30[0xb] = 0;
      auVar30._0_11_ = auVar204._0_11_;
      auVar30._12_3_ = auVar22._12_3_;
      auVar38[10] = auVar204[5];
      auVar38._0_10_ = auVar204._0_10_;
      auVar38._11_4_ = auVar30._11_4_;
      auVar46[9] = 0;
      auVar46._0_9_ = auVar204._0_9_;
      auVar46._10_5_ = auVar38._10_5_;
      auVar50[8] = auVar204[4];
      auVar50._0_8_ = auVar204._0_8_;
      auVar50._9_6_ = auVar46._9_6_;
      auVar84._7_8_ = 0;
      auVar84._0_7_ = auVar50._8_7_;
      Var85 = CONCAT81(SUB158(auVar84 << 0x40,7),auVar204[3]);
      auVar109._9_6_ = 0;
      auVar109._0_9_ = Var85;
      auVar86._1_10_ = SUB1510(auVar109 << 0x30,5);
      auVar86[0] = auVar204[2];
      auVar110._11_4_ = 0;
      auVar110._0_11_ = auVar86;
      auVar87._1_12_ = SUB1512(auVar110 << 0x20,3);
      auVar87[0] = auVar204[1];
      auVar205._0_2_ = (-(ushort)auVar204[0] & __LC12) + *(short *)*pauVar133;
      auVar205._2_2_ = (-auVar87._0_2_ & _UNK_001053b2) + *(short *)pauVar133[1];
      auVar205._4_2_ = (-auVar86._0_2_ & _UNK_001053b4) + *(short *)pauVar133[2];
      auVar205._6_2_ = (-(short)Var85 & _UNK_001053b6) + *(short *)pauVar133[3];
      auVar205._8_2_ = (-auVar50._8_2_ & _UNK_001053b8) + *(short *)pauVar133[4];
      auVar205._10_2_ = (-auVar38._10_2_ & _UNK_001053ba) + *(short *)pauVar133[5];
      auVar205._12_2_ = (-auVar22._12_2_ & _UNK_001053bc) + *(short *)pauVar133[6];
      auVar205._14_2_ = (-(auVar14._13_2_ >> 8) & _UNK_001053be) + *(short *)pauVar133[7];
      auVar198._0_2_ = (-(ushort)auVar204[8] & __LC12) + *(short *)pauVar133[8];
      auVar198._2_2_ = (-(ushort)auVar204[9] & _UNK_001053b2) + *(short *)pauVar133[9];
      auVar198._4_2_ = (-(ushort)auVar204[10] & _UNK_001053b4) + *(short *)pauVar133[10];
      auVar198._6_2_ = (-(ushort)auVar204[0xb] & _UNK_001053b6) + *(short *)pauVar133[0xb];
      auVar198._8_2_ = (-(ushort)auVar204[0xc] & _UNK_001053b8) + *(short *)pauVar133[0xc];
      auVar198._10_2_ = (-(ushort)auVar204[0xd] & _UNK_001053ba) + *(short *)pauVar133[0xd];
      auVar198._12_2_ = (-(ushort)auVar204[0xe] & _UNK_001053bc) + *(short *)pauVar133[0xe];
      auVar198._14_2_ = (-(ushort)auVar204[0xf] & _UNK_001053be) + *(short *)pauVar133[0xf];
      auVar206._0_2_ = auVar205._0_2_ + sVar316;
      auVar206._2_2_ = auVar205._2_2_ + sVar317;
      auVar206._4_2_ = auVar205._4_2_ + sVar318;
      auVar206._6_2_ = auVar205._6_2_ + sVar319;
      auVar206._8_2_ = auVar205._8_2_ + sVar320;
      auVar206._10_2_ = auVar205._10_2_ + sVar321;
      auVar206._12_2_ = auVar205._12_2_ + sVar322;
      auVar206._14_2_ = auVar205._14_2_ + sVar323;
      auVar199._0_2_ = auVar198._0_2_ + sVar316;
      auVar199._2_2_ = auVar198._2_2_ + sVar317;
      auVar199._4_2_ = auVar198._4_2_ + sVar318;
      auVar199._6_2_ = auVar198._6_2_ + sVar319;
      auVar199._8_2_ = auVar198._8_2_ + sVar320;
      auVar199._10_2_ = auVar198._10_2_ + sVar321;
      auVar199._12_2_ = auVar198._12_2_ + sVar322;
      auVar199._14_2_ = auVar198._14_2_ + sVar323;
      auVar204 = psraw(auVar206,0xf);
      auVar206 = (auVar205 ^ auVar206) & auVar204 ^ auVar206;
      auVar204 = psraw(auVar199,0xf);
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar199 = (auVar198 ^ auVar199) & auVar204 ^ auVar199;
      auVar207._0_2_ = *puVar2 >> 1;
      auVar207._2_2_ = puVar2[1] >> 1;
      auVar207._4_2_ = puVar2[2] >> 1;
      auVar207._6_2_ = puVar2[3] >> 1;
      auVar207._8_2_ = puVar2[4] >> 1;
      auVar207._10_2_ = puVar2[5] >> 1;
      auVar207._12_2_ = puVar2[6] >> 1;
      auVar207._14_2_ = puVar2[7] >> 1;
      auVar204 = auVar207 & __LC3 & __LC4;
      auVar9[0xd] = 0;
      auVar9._0_13_ = auVar204._0_13_;
      auVar9[0xe] = auVar204[7];
      auVar15[0xc] = auVar204[6];
      auVar15._0_12_ = auVar204._0_12_;
      auVar15._13_2_ = auVar9._13_2_;
      auVar23[0xb] = 0;
      auVar23._0_11_ = auVar204._0_11_;
      auVar23._12_3_ = auVar15._12_3_;
      auVar31[10] = auVar204[5];
      auVar31._0_10_ = auVar204._0_10_;
      auVar31._11_4_ = auVar23._11_4_;
      auVar39[9] = 0;
      auVar39._0_9_ = auVar204._0_9_;
      auVar39._10_5_ = auVar31._10_5_;
      uVar126 = CONCAT61(auVar39._9_6_,auVar204[4]);
      auVar88._7_8_ = 0;
      auVar88._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar88 << 0x40,7),auVar204[3]);
      auVar111._9_6_ = 0;
      auVar111._0_9_ = Var85;
      auVar89._1_10_ = SUB1510(auVar111 << 0x30,5);
      auVar89[0] = auVar204[2];
      auVar112._11_4_ = 0;
      auVar112._0_11_ = auVar89;
      auVar51[2] = auVar204[1];
      auVar51._0_2_ = auVar204._0_2_;
      auVar51._3_12_ = SUB1512(auVar112 << 0x20,3);
      auVar159._0_2_ = (__LC12 & -(auVar204._0_2_ & 0xff)) + *(short *)(*pauVar133 + 2);
      auVar159._2_2_ = (_UNK_001053b2 & -auVar51._2_2_) + *(short *)(pauVar133[1] + 2);
      auVar159._4_2_ = (_UNK_001053b4 & -auVar89._0_2_) + *(short *)(pauVar133[2] + 2);
      auVar159._6_2_ = (_UNK_001053b6 & -(short)Var85) + *(short *)(pauVar133[3] + 2);
      auVar159._8_2_ = (_UNK_001053b8 & -(short)uVar126) + *(short *)(pauVar133[4] + 2);
      auVar159._10_2_ = (_UNK_001053ba & -auVar31._10_2_) + *(short *)(pauVar133[5] + 2);
      auVar159._12_2_ = (_UNK_001053bc & -auVar15._12_2_) + *(short *)(pauVar133[6] + 2);
      auVar159._14_2_ = (_UNK_001053be & -(auVar9._13_2_ >> 8)) + *(short *)(pauVar133[7] + 2);
      auVar160._0_2_ = auVar159._0_2_ + sVar316;
      auVar160._2_2_ = auVar159._2_2_ + sVar317;
      auVar160._4_2_ = auVar159._4_2_ + sVar318;
      auVar160._6_2_ = auVar159._6_2_ + sVar319;
      auVar160._8_2_ = auVar159._8_2_ + sVar320;
      auVar160._10_2_ = auVar159._10_2_ + sVar321;
      auVar160._12_2_ = auVar159._12_2_ + sVar322;
      auVar160._14_2_ = auVar159._14_2_ + sVar323;
      auVar208._0_2_ = (__LC12 & -(ushort)auVar204[8]) + *(short *)(pauVar133[8] + 2);
      auVar208._2_2_ = (_UNK_001053b2 & -(ushort)auVar204[9]) + *(short *)(pauVar133[9] + 2);
      auVar208._4_2_ = (_UNK_001053b4 & -(ushort)auVar204[10]) + *(short *)(pauVar133[10] + 2);
      auVar208._6_2_ = (_UNK_001053b6 & -(ushort)auVar204[0xb]) + *(short *)(pauVar133[0xb] + 2);
      auVar208._8_2_ = (_UNK_001053b8 & -(ushort)auVar204[0xc]) + *(short *)(pauVar133[0xc] + 2);
      auVar208._10_2_ = (_UNK_001053ba & -(ushort)auVar204[0xd]) + *(short *)(pauVar133[0xd] + 2);
      auVar208._12_2_ = (_UNK_001053bc & -(ushort)auVar204[0xe]) + *(short *)(pauVar133[0xe] + 2);
      auVar208._14_2_ = (_UNK_001053be & -(ushort)auVar204[0xf]) + *(short *)(pauVar133[0xf] + 2);
      auVar209._0_2_ = auVar208._0_2_ + sVar316;
      auVar209._2_2_ = auVar208._2_2_ + sVar317;
      auVar209._4_2_ = auVar208._4_2_ + sVar318;
      auVar209._6_2_ = auVar208._6_2_ + sVar319;
      auVar209._8_2_ = auVar208._8_2_ + sVar320;
      auVar209._10_2_ = auVar208._10_2_ + sVar321;
      auVar209._12_2_ = auVar208._12_2_ + sVar322;
      auVar209._14_2_ = auVar208._14_2_ + sVar323;
      auVar204 = psraw(auVar160,0xf);
      auVar160 = (auVar159 ^ auVar160) & auVar204 ^ auVar160;
      auVar204 = psraw(auVar209,0xf);
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar209 = (auVar208 ^ auVar209) & auVar204 ^ auVar209;
      auVar161._0_2_ = *puVar2 >> 2;
      auVar161._2_2_ = puVar2[1] >> 2;
      auVar161._4_2_ = puVar2[2] >> 2;
      auVar161._6_2_ = puVar2[3] >> 2;
      auVar161._8_2_ = puVar2[4] >> 2;
      auVar161._10_2_ = puVar2[5] >> 2;
      auVar161._12_2_ = puVar2[6] >> 2;
      auVar161._14_2_ = puVar2[7] >> 2;
      auVar204 = __LC4 & auVar161 & __LC5;
      auVar10[0xd] = 0;
      auVar10._0_13_ = auVar204._0_13_;
      auVar10[0xe] = auVar204[7];
      auVar16[0xc] = auVar204[6];
      auVar16._0_12_ = auVar204._0_12_;
      auVar16._13_2_ = auVar10._13_2_;
      auVar24[0xb] = 0;
      auVar24._0_11_ = auVar204._0_11_;
      auVar24._12_3_ = auVar16._12_3_;
      auVar32[10] = auVar204[5];
      auVar32._0_10_ = auVar204._0_10_;
      auVar32._11_4_ = auVar24._11_4_;
      auVar40[9] = 0;
      auVar40._0_9_ = auVar204._0_9_;
      auVar40._10_5_ = auVar32._10_5_;
      uVar126 = CONCAT61(auVar40._9_6_,auVar204[4]);
      auVar90._7_8_ = 0;
      auVar90._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar90 << 0x40,7),auVar204[3]);
      auVar113._9_6_ = 0;
      auVar113._0_9_ = Var85;
      auVar91._1_10_ = SUB1510(auVar113 << 0x30,5);
      auVar91[0] = auVar204[2];
      auVar114._11_4_ = 0;
      auVar114._0_11_ = auVar91;
      auVar92._1_12_ = SUB1512(auVar114 << 0x20,3);
      auVar92[0] = auVar204[1];
      auVar162._0_2_ = (__LC12 & -(ushort)auVar204[0]) + *(short *)(*pauVar133 + 4);
      auVar162._2_2_ = (_UNK_001053b2 & -auVar92._0_2_) + *(short *)(pauVar133[1] + 4);
      auVar162._4_2_ = (_UNK_001053b4 & -auVar91._0_2_) + *(short *)(pauVar133[2] + 4);
      auVar162._6_2_ = (_UNK_001053b6 & -(short)Var85) + *(short *)(pauVar133[3] + 4);
      auVar162._8_2_ = (_UNK_001053b8 & -(short)uVar126) + *(short *)(pauVar133[4] + 4);
      auVar162._10_2_ = (_UNK_001053ba & -auVar32._10_2_) + *(short *)(pauVar133[5] + 4);
      auVar162._12_2_ = (_UNK_001053bc & -auVar16._12_2_) + *(short *)(pauVar133[6] + 4);
      auVar162._14_2_ = (_UNK_001053be & -(auVar10._13_2_ >> 8)) + *(short *)(pauVar133[7] + 4);
      auVar210._0_2_ = (-(ushort)auVar204[8] & __LC12) + *(short *)(pauVar133[8] + 4);
      auVar210._2_2_ = (-(ushort)auVar204[9] & _UNK_001053b2) + *(short *)(pauVar133[9] + 4);
      auVar210._4_2_ = (-(ushort)auVar204[10] & _UNK_001053b4) + *(short *)(pauVar133[10] + 4);
      auVar210._6_2_ = (-(ushort)auVar204[0xb] & _UNK_001053b6) + *(short *)(pauVar133[0xb] + 4);
      auVar210._8_2_ = (-(ushort)auVar204[0xc] & _UNK_001053b8) + *(short *)(pauVar133[0xc] + 4);
      auVar210._10_2_ = (-(ushort)auVar204[0xd] & _UNK_001053ba) + *(short *)(pauVar133[0xd] + 4);
      auVar210._12_2_ = (-(ushort)auVar204[0xe] & _UNK_001053bc) + *(short *)(pauVar133[0xe] + 4);
      auVar210._14_2_ = (-(ushort)auVar204[0xf] & _UNK_001053be) + *(short *)(pauVar133[0xf] + 4);
      auVar163._0_2_ = auVar162._0_2_ + sVar316;
      auVar163._2_2_ = auVar162._2_2_ + sVar317;
      auVar163._4_2_ = auVar162._4_2_ + sVar318;
      auVar163._6_2_ = auVar162._6_2_ + sVar319;
      auVar163._8_2_ = auVar162._8_2_ + sVar320;
      auVar163._10_2_ = auVar162._10_2_ + sVar321;
      auVar163._12_2_ = auVar162._12_2_ + sVar322;
      auVar163._14_2_ = auVar162._14_2_ + sVar323;
      auVar211._0_2_ = auVar210._0_2_ + sVar316;
      auVar211._2_2_ = auVar210._2_2_ + sVar317;
      auVar211._4_2_ = auVar210._4_2_ + sVar318;
      auVar211._6_2_ = auVar210._6_2_ + sVar319;
      auVar211._8_2_ = auVar210._8_2_ + sVar320;
      auVar211._10_2_ = auVar210._10_2_ + sVar321;
      auVar211._12_2_ = auVar210._12_2_ + sVar322;
      auVar211._14_2_ = auVar210._14_2_ + sVar323;
      auVar204 = psraw(auVar163,0xf);
      auVar163 = (auVar162 ^ auVar163) & auVar204 ^ auVar163;
      auVar204 = psraw(auVar211,0xf);
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar211 = (auVar210 ^ auVar211) & auVar204 ^ auVar211;
      auVar164._0_2_ = *puVar2 >> 3;
      auVar164._2_2_ = puVar2[1] >> 3;
      auVar164._4_2_ = puVar2[2] >> 3;
      auVar164._6_2_ = puVar2[3] >> 3;
      auVar164._8_2_ = puVar2[4] >> 3;
      auVar164._10_2_ = puVar2[5] >> 3;
      auVar164._12_2_ = puVar2[6] >> 3;
      auVar164._14_2_ = puVar2[7] >> 3;
      auVar204 = __LC4 & auVar164 & __LC6;
      auVar17[0xd] = 0;
      auVar17._0_13_ = auVar204._0_13_;
      auVar17[0xe] = auVar204[7];
      auVar25[0xc] = auVar204[6];
      auVar25._0_12_ = auVar204._0_12_;
      auVar25._13_2_ = auVar17._13_2_;
      auVar33[0xb] = 0;
      auVar33._0_11_ = auVar204._0_11_;
      auVar33._12_3_ = auVar25._12_3_;
      auVar41[10] = auVar204[5];
      auVar41._0_10_ = auVar204._0_10_;
      auVar41._11_4_ = auVar33._11_4_;
      auVar47[9] = 0;
      auVar47._0_9_ = auVar204._0_9_;
      auVar47._10_5_ = auVar41._10_5_;
      uVar126 = CONCAT61(auVar47._9_6_,auVar204[4]);
      auVar93._7_8_ = 0;
      auVar93._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar93 << 0x40,7),auVar204[3]);
      auVar115._9_6_ = 0;
      auVar115._0_9_ = Var85;
      auVar94._1_10_ = SUB1510(auVar115 << 0x30,5);
      auVar94[0] = auVar204[2];
      auVar116._11_4_ = 0;
      auVar116._0_11_ = auVar94;
      auVar95._1_12_ = SUB1512(auVar116 << 0x20,3);
      auVar95[0] = auVar204[1];
      auVar278._0_2_ = (__LC12 & -(ushort)auVar204[0]) + *(short *)(*pauVar133 + 6);
      auVar278._2_2_ = (_UNK_001053b2 & -auVar95._0_2_) + *(short *)(pauVar133[1] + 6);
      auVar278._4_2_ = (_UNK_001053b4 & -auVar94._0_2_) + *(short *)(pauVar133[2] + 6);
      auVar278._6_2_ = (_UNK_001053b6 & -(short)Var85) + *(short *)(pauVar133[3] + 6);
      auVar278._8_2_ = (_UNK_001053b8 & -(short)uVar126) + *(short *)(pauVar133[4] + 6);
      auVar278._10_2_ = (_UNK_001053ba & -auVar41._10_2_) + *(short *)(pauVar133[5] + 6);
      auVar278._12_2_ = (_UNK_001053bc & -auVar25._12_2_) + *(short *)(pauVar133[6] + 6);
      auVar278._14_2_ = (_UNK_001053be & -(auVar17._13_2_ >> 8)) + *(short *)(pauVar133[7] + 6);
      auVar279._0_2_ = auVar278._0_2_ + sVar316;
      auVar279._2_2_ = auVar278._2_2_ + sVar317;
      auVar279._4_2_ = auVar278._4_2_ + sVar318;
      auVar279._6_2_ = auVar278._6_2_ + sVar319;
      auVar279._8_2_ = auVar278._8_2_ + sVar320;
      auVar279._10_2_ = auVar278._10_2_ + sVar321;
      auVar279._12_2_ = auVar278._12_2_ + sVar322;
      auVar279._14_2_ = auVar278._14_2_ + sVar323;
      auVar213._0_2_ = (-(ushort)auVar204[8] & __LC12) + *(short *)(pauVar133[8] + 6);
      auVar213._2_2_ = (-(ushort)auVar204[9] & _UNK_001053b2) + *(short *)(pauVar133[9] + 6);
      auVar213._4_2_ = (-(ushort)auVar204[10] & _UNK_001053b4) + *(short *)(pauVar133[10] + 6);
      auVar213._6_2_ = (-(ushort)auVar204[0xb] & _UNK_001053b6) + *(short *)(pauVar133[0xb] + 6);
      auVar213._8_2_ = (-(ushort)auVar204[0xc] & _UNK_001053b8) + *(short *)(pauVar133[0xc] + 6);
      auVar213._10_2_ = (-(ushort)auVar204[0xd] & _UNK_001053ba) + *(short *)(pauVar133[0xd] + 6);
      auVar213._12_2_ = (-(ushort)auVar204[0xe] & _UNK_001053bc) + *(short *)(pauVar133[0xe] + 6);
      auVar213._14_2_ = (-(ushort)auVar204[0xf] & _UNK_001053be) + *(short *)(pauVar133[0xf] + 6);
      auVar214._0_2_ = auVar213._0_2_ + sVar316;
      auVar214._2_2_ = auVar213._2_2_ + sVar317;
      auVar214._4_2_ = auVar213._4_2_ + sVar318;
      auVar214._6_2_ = auVar213._6_2_ + sVar319;
      auVar214._8_2_ = auVar213._8_2_ + sVar320;
      auVar214._10_2_ = auVar213._10_2_ + sVar321;
      auVar214._12_2_ = auVar213._12_2_ + sVar322;
      auVar214._14_2_ = auVar213._14_2_ + sVar323;
      auVar204 = psraw(auVar279,0xf);
      auVar191 = psraw(auVar214,0xf);
      auVar279 = (auVar278 ^ auVar279) & auVar204 ^ auVar279;
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar214 = (auVar213 ^ auVar214) & auVar191 ^ auVar214;
      auVar165._0_2_ = *puVar2 >> 4;
      auVar165._2_2_ = puVar2[1] >> 4;
      auVar165._4_2_ = puVar2[2] >> 4;
      auVar165._6_2_ = puVar2[3] >> 4;
      auVar165._8_2_ = puVar2[4] >> 4;
      auVar165._10_2_ = puVar2[5] >> 4;
      auVar165._12_2_ = puVar2[6] >> 4;
      auVar165._14_2_ = puVar2[7] >> 4;
      auVar204 = __LC4 & auVar165 & __LC9;
      auVar18[0xd] = 0;
      auVar18._0_13_ = auVar204._0_13_;
      auVar18[0xe] = auVar204[7];
      auVar26[0xc] = auVar204[6];
      auVar26._0_12_ = auVar204._0_12_;
      auVar26._13_2_ = auVar18._13_2_;
      auVar34[0xb] = 0;
      auVar34._0_11_ = auVar204._0_11_;
      auVar34._12_3_ = auVar26._12_3_;
      auVar42[10] = auVar204[5];
      auVar42._0_10_ = auVar204._0_10_;
      auVar42._11_4_ = auVar34._11_4_;
      auVar48[9] = 0;
      auVar48._0_9_ = auVar204._0_9_;
      auVar48._10_5_ = auVar42._10_5_;
      uVar126 = CONCAT61(auVar48._9_6_,auVar204[4]);
      auVar96._7_8_ = 0;
      auVar96._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar96 << 0x40,7),auVar204[3]);
      auVar117._9_6_ = 0;
      auVar117._0_9_ = Var85;
      auVar97._1_10_ = SUB1510(auVar117 << 0x30,5);
      auVar97[0] = auVar204[2];
      auVar118._11_4_ = 0;
      auVar118._0_11_ = auVar97;
      auVar98._1_12_ = SUB1512(auVar118 << 0x20,3);
      auVar98[0] = auVar204[1];
      auVar311._0_2_ = (-(ushort)auVar204[0] & __LC12) + *(short *)(*pauVar133 + 8);
      auVar311._2_2_ = (-auVar98._0_2_ & _UNK_001053b2) + *(short *)(pauVar133[1] + 8);
      auVar311._4_2_ = (-auVar97._0_2_ & _UNK_001053b4) + *(short *)(pauVar133[2] + 8);
      auVar311._6_2_ = (-(short)Var85 & _UNK_001053b6) + *(short *)(pauVar133[3] + 8);
      auVar311._8_2_ = (-(short)uVar126 & _UNK_001053b8) + *(short *)(pauVar133[4] + 8);
      auVar311._10_2_ = (-auVar42._10_2_ & _UNK_001053ba) + *(short *)(pauVar133[5] + 8);
      auVar311._12_2_ = (-auVar26._12_2_ & _UNK_001053bc) + *(short *)(pauVar133[6] + 8);
      auVar311._14_2_ = (-(auVar18._13_2_ >> 8) & _UNK_001053be) + *(short *)(pauVar133[7] + 8);
      auVar236._0_2_ = auVar311._0_2_ + sVar316;
      auVar236._2_2_ = auVar311._2_2_ + sVar317;
      auVar236._4_2_ = auVar311._4_2_ + sVar318;
      auVar236._6_2_ = auVar311._6_2_ + sVar319;
      auVar236._8_2_ = auVar311._8_2_ + sVar320;
      auVar236._10_2_ = auVar311._10_2_ + sVar321;
      auVar236._12_2_ = auVar311._12_2_ + sVar322;
      auVar236._14_2_ = auVar311._14_2_ + sVar323;
      auVar224._0_2_ = *(short *)(pauVar133[8] + 8) + (__LC12 & -(ushort)auVar204[8]);
      auVar224._2_2_ = *(short *)(pauVar133[9] + 8) + (_UNK_001053b2 & -(ushort)auVar204[9]);
      auVar224._4_2_ = *(short *)(pauVar133[10] + 8) + (_UNK_001053b4 & -(ushort)auVar204[10]);
      auVar224._6_2_ = *(short *)(pauVar133[0xb] + 8) + (_UNK_001053b6 & -(ushort)auVar204[0xb]);
      auVar224._8_2_ = *(short *)(pauVar133[0xc] + 8) + (_UNK_001053b8 & -(ushort)auVar204[0xc]);
      auVar224._10_2_ = *(short *)(pauVar133[0xd] + 8) + (_UNK_001053ba & -(ushort)auVar204[0xd]);
      auVar224._12_2_ = *(short *)(pauVar133[0xe] + 8) + (_UNK_001053bc & -(ushort)auVar204[0xe]);
      auVar224._14_2_ = *(short *)(pauVar133[0xf] + 8) + (_UNK_001053be & -(ushort)auVar204[0xf]);
      auVar225._0_2_ = auVar224._0_2_ + sVar316;
      auVar225._2_2_ = auVar224._2_2_ + sVar317;
      auVar225._4_2_ = auVar224._4_2_ + sVar318;
      auVar225._6_2_ = auVar224._6_2_ + sVar319;
      auVar225._8_2_ = auVar224._8_2_ + sVar320;
      auVar225._10_2_ = auVar224._10_2_ + sVar321;
      auVar225._12_2_ = auVar224._12_2_ + sVar322;
      auVar225._14_2_ = auVar224._14_2_ + sVar323;
      auVar204 = psraw(auVar236,0xf);
      auVar191 = psraw(auVar225,0xf);
      auVar236 = (auVar311 ^ auVar236) & auVar204 ^ auVar236;
      auVar225 = (auVar224 ^ auVar225) & auVar191 ^ auVar225;
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar226._0_2_ = *puVar2 >> 5;
      auVar226._2_2_ = puVar2[1] >> 5;
      auVar226._4_2_ = puVar2[2] >> 5;
      auVar226._6_2_ = puVar2[3] >> 5;
      auVar226._8_2_ = puVar2[4] >> 5;
      auVar226._10_2_ = puVar2[5] >> 5;
      auVar226._12_2_ = puVar2[6] >> 5;
      auVar226._14_2_ = puVar2[7] >> 5;
      auVar204 = auVar226 & __LC8 & __LC4;
      auVar11[0xd] = 0;
      auVar11._0_13_ = auVar204._0_13_;
      auVar11[0xe] = auVar204[7];
      auVar19[0xc] = auVar204[6];
      auVar19._0_12_ = auVar204._0_12_;
      auVar19._13_2_ = auVar11._13_2_;
      auVar27[0xb] = 0;
      auVar27._0_11_ = auVar204._0_11_;
      auVar27._12_3_ = auVar19._12_3_;
      auVar35[10] = auVar204[5];
      auVar35._0_10_ = auVar204._0_10_;
      auVar35._11_4_ = auVar27._11_4_;
      auVar43[9] = 0;
      auVar43._0_9_ = auVar204._0_9_;
      auVar43._10_5_ = auVar35._10_5_;
      uVar126 = CONCAT61(auVar43._9_6_,auVar204[4]);
      auVar99._7_8_ = 0;
      auVar99._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar99 << 0x40,7),auVar204[3]);
      auVar119._9_6_ = 0;
      auVar119._0_9_ = Var85;
      auVar100._1_10_ = SUB1510(auVar119 << 0x30,5);
      auVar100[0] = auVar204[2];
      auVar120._11_4_ = 0;
      auVar120._0_11_ = auVar100;
      auVar52[2] = auVar204[1];
      auVar52._0_2_ = auVar204._0_2_;
      auVar52._3_12_ = SUB1512(auVar120 << 0x20,3);
      auVar314._0_2_ = (-(auVar204._0_2_ & 0xff) & __LC12) + *(short *)(*pauVar133 + 10);
      auVar314._2_2_ = (-auVar52._2_2_ & _UNK_001053b2) + *(short *)(pauVar133[1] + 10);
      auVar314._4_2_ = (-auVar100._0_2_ & _UNK_001053b4) + *(short *)(pauVar133[2] + 10);
      auVar314._6_2_ = (-(short)Var85 & _UNK_001053b6) + *(short *)(pauVar133[3] + 10);
      auVar314._8_2_ = (-(short)uVar126 & _UNK_001053b8) + *(short *)(pauVar133[4] + 10);
      auVar314._10_2_ = (-auVar35._10_2_ & _UNK_001053ba) + *(short *)(pauVar133[5] + 10);
      auVar314._12_2_ = (-auVar19._12_2_ & _UNK_001053bc) + *(short *)(pauVar133[6] + 10);
      auVar314._14_2_ = (-(auVar11._13_2_ >> 8) & _UNK_001053be) + *(short *)(pauVar133[7] + 10);
      *(ulong *)*pauVar133 =
           CONCAT62(CONCAT42(CONCAT22(auVar279._0_2_,auVar163._0_2_),auVar160._0_2_),auVar206._0_2_)
      ;
      auVar227._0_2_ = auVar314._0_2_ + sVar316;
      auVar227._2_2_ = auVar314._2_2_ + sVar317;
      auVar227._4_2_ = auVar314._4_2_ + sVar318;
      auVar227._6_2_ = auVar314._6_2_ + sVar319;
      auVar227._8_2_ = auVar314._8_2_ + sVar320;
      auVar227._10_2_ = auVar314._10_2_ + sVar321;
      auVar227._12_2_ = auVar314._12_2_ + sVar322;
      auVar227._14_2_ = auVar314._14_2_ + sVar323;
      auVar166._0_2_ = sVar215 + (uVar280 & -(ushort)auVar204[8]);
      auVar166._2_2_ = sVar218 + (uVar287 & -(ushort)auVar204[9]);
      auVar166._4_2_ = sVar182 + (uVar237 & -(ushort)auVar204[10]);
      auVar166._6_2_ = sVar173 + (uVar290 & -(ushort)auVar204[0xb]);
      auVar166._8_2_ = sVar230 + (uVar292 & -(ushort)auVar204[0xc]);
      auVar166._10_2_ = sVar221 + (uVar294 & -(ushort)auVar204[0xd]);
      auVar166._12_2_ = sVar258 + (uVar296 & -(ushort)auVar204[0xe]);
      auVar166._14_2_ = sVar179 + (uVar298 & -(ushort)auVar204[0xf]);
      *(ulong *)pauVar133[1] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._2_2_,auVar163._2_2_),auVar160._2_2_),auVar206._2_2_)
      ;
      auVar315._0_2_ = auVar166._0_2_ + sVar316;
      auVar315._2_2_ = auVar166._2_2_ + sVar317;
      auVar315._4_2_ = auVar166._4_2_ + sVar318;
      auVar315._6_2_ = auVar166._6_2_ + sVar319;
      auVar315._8_2_ = auVar166._8_2_ + sVar320;
      auVar315._10_2_ = auVar166._10_2_ + sVar321;
      auVar315._12_2_ = auVar166._12_2_ + sVar322;
      auVar315._14_2_ = auVar166._14_2_ + sVar323;
      auVar204 = psraw(auVar227,0xf);
      auVar227 = (auVar314 ^ auVar227) & auVar204 ^ auVar227;
      auVar204 = psraw(auVar315,0xf);
      *(ulong *)pauVar133[2] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._4_2_,auVar163._4_2_),auVar160._4_2_),auVar206._4_2_)
      ;
      auVar315 = (auVar166 ^ auVar315) & auVar204 ^ auVar315;
      puVar2 = (ushort *)(param_2 + lVar135);
      auVar286._0_2_ = *puVar2 >> 6;
      auVar286._2_2_ = puVar2[1] >> 6;
      auVar286._4_2_ = puVar2[2] >> 6;
      auVar286._6_2_ = puVar2[3] >> 6;
      auVar286._8_2_ = puVar2[4] >> 6;
      auVar286._10_2_ = puVar2[5] >> 6;
      auVar286._12_2_ = puVar2[6] >> 6;
      auVar286._14_2_ = puVar2[7] >> 6;
      auVar204 = __LC4 & auVar286 & __LC10;
      *(ulong *)pauVar133[3] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._6_2_,auVar163._6_2_),auVar160._6_2_),auVar206._6_2_)
      ;
      auVar12[0xd] = 0;
      auVar12._0_13_ = auVar204._0_13_;
      auVar12[0xe] = auVar204[7];
      auVar20[0xc] = auVar204[6];
      auVar20._0_12_ = auVar204._0_12_;
      auVar20._13_2_ = auVar12._13_2_;
      auVar28[0xb] = 0;
      auVar28._0_11_ = auVar204._0_11_;
      auVar28._12_3_ = auVar20._12_3_;
      auVar36[10] = auVar204[5];
      auVar36._0_10_ = auVar204._0_10_;
      auVar36._11_4_ = auVar28._11_4_;
      auVar44[9] = 0;
      auVar44._0_9_ = auVar204._0_9_;
      auVar44._10_5_ = auVar36._10_5_;
      uVar126 = CONCAT61(auVar44._9_6_,auVar204[4]);
      auVar101._7_8_ = 0;
      auVar101._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar101 << 0x40,7),auVar204[3]);
      auVar121._9_6_ = 0;
      auVar121._0_9_ = Var85;
      auVar102._1_10_ = SUB1510(auVar121 << 0x30,5);
      auVar102[0] = auVar204[2];
      auVar122._11_4_ = 0;
      auVar122._0_11_ = auVar102;
      auVar53[2] = auVar204[1];
      auVar53._0_2_ = auVar204._0_2_;
      auVar53._3_12_ = SUB1512(auVar122 << 0x20,3);
      uVar280 = __LC12 & -(auVar204._0_2_ & 0xff);
      uVar287 = _UNK_001053b2 & -auVar53._2_2_;
      uVar237 = _UNK_001053b4 & -auVar102._0_2_;
      uVar290 = _UNK_001053b6 & -(short)Var85;
      uVar292 = _UNK_001053b8 & -(short)uVar126;
      uVar294 = _UNK_001053ba & -auVar36._10_2_;
      uVar296 = _UNK_001053bc & -auVar20._12_2_;
      uVar298 = _UNK_001053be & -(auVar12._13_2_ >> 8);
      *(ulong *)pauVar133[4] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._8_2_,auVar163._8_2_),auVar160._8_2_),auVar206._8_2_)
      ;
      sVar281 = uVar280 + sVar281;
      sVar288 = uVar287 + sVar288;
      sVar289 = uVar237 + sVar289;
      sVar291 = uVar290 + sVar291;
      sVar293 = uVar292 + sVar293;
      sVar295 = uVar294 + sVar295;
      sVar297 = uVar296 + sVar297;
      sVar299 = uVar298 + sVar299;
      uVar280 = -(ushort)auVar204[8] & __LC12;
      uVar287 = -(ushort)auVar204[9] & _UNK_001053b2;
      uVar237 = -(ushort)auVar204[10] & _UNK_001053b4;
      uVar290 = -(ushort)auVar204[0xb] & _UNK_001053b6;
      uVar292 = -(ushort)auVar204[0xc] & _UNK_001053b8;
      uVar294 = -(ushort)auVar204[0xd] & _UNK_001053ba;
      uVar296 = -(ushort)auVar204[0xe] & _UNK_001053bc;
      uVar298 = -(ushort)auVar204[0xf] & _UNK_001053be;
      *(ulong *)pauVar133[5] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._10_2_,auVar163._10_2_),auVar160._10_2_),
                    auVar206._10_2_);
      auVar167._0_2_ = sVar216 + uVar280;
      auVar167._2_2_ = sVar219 + uVar287;
      auVar167._4_2_ = sVar183 + uVar237;
      auVar167._6_2_ = sVar174 + uVar290;
      auVar167._8_2_ = sVar256 + uVar292;
      auVar167._10_2_ = sVar228 + uVar294;
      auVar167._12_2_ = sVar267 + uVar296;
      auVar167._14_2_ = sVar180 + uVar298;
      auVar69._2_2_ = sVar288;
      auVar69._0_2_ = sVar281;
      auVar69._4_2_ = sVar289;
      auVar69._6_2_ = sVar291;
      auVar69._8_2_ = sVar293;
      auVar69._10_2_ = sVar295;
      auVar69._12_2_ = sVar297;
      auVar69._14_2_ = sVar299;
      auVar313._0_2_ = sVar281 + sVar316;
      auVar313._2_2_ = sVar288 + sVar317;
      auVar313._4_2_ = sVar289 + sVar318;
      auVar313._6_2_ = sVar291 + sVar319;
      auVar313._8_2_ = sVar293 + sVar320;
      auVar313._10_2_ = sVar295 + sVar321;
      auVar313._12_2_ = sVar297 + sVar322;
      auVar313._14_2_ = sVar299 + sVar323;
      *(ulong *)pauVar133[6] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._12_2_,auVar163._12_2_),auVar160._12_2_),
                    auVar206._12_2_);
      auVar204 = psraw(auVar313,0xf);
      auVar313 = auVar313 ^ (auVar69 ^ auVar313) & auVar204;
      auVar168._0_2_ = auVar167._0_2_ + sVar316;
      auVar168._2_2_ = auVar167._2_2_ + sVar317;
      auVar168._4_2_ = auVar167._4_2_ + sVar318;
      auVar168._6_2_ = auVar167._6_2_ + sVar319;
      auVar168._8_2_ = auVar167._8_2_ + sVar320;
      auVar168._10_2_ = auVar167._10_2_ + sVar321;
      auVar168._12_2_ = auVar167._12_2_ + sVar322;
      auVar168._14_2_ = auVar167._14_2_ + sVar323;
      auVar204 = psraw(auVar168,0xf);
      *(ulong *)pauVar133[7] =
           CONCAT62(CONCAT42(CONCAT22(auVar279._14_2_,auVar163._14_2_),auVar160._14_2_),
                    auVar206._14_2_);
      auVar168 = (auVar167 ^ auVar168) & auVar204 ^ auVar168;
      *(ulong *)pauVar133[8] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._0_2_,auVar211._0_2_),auVar209._0_2_),auVar199._0_2_)
      ;
      *(ulong *)pauVar133[9] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._2_2_,auVar211._2_2_),auVar209._2_2_),auVar199._2_2_)
      ;
      *(ulong *)pauVar133[10] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._4_2_,auVar211._4_2_),auVar209._4_2_),auVar199._4_2_)
      ;
      *(ulong *)pauVar133[0xb] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._6_2_,auVar211._6_2_),auVar209._6_2_),auVar199._6_2_)
      ;
      *(ulong *)pauVar133[0xc] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._8_2_,auVar211._8_2_),auVar209._8_2_),auVar199._8_2_)
      ;
      *(ulong *)pauVar133[0xd] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._10_2_,auVar211._10_2_),auVar209._10_2_),
                    auVar199._10_2_);
      *(ulong *)pauVar133[0xe] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._12_2_,auVar211._12_2_),auVar209._12_2_),
                    auVar199._12_2_);
      local_3c8 = auVar225._0_2_;
      uStack_3c6 = auVar225._2_2_;
      uStack_3c4 = auVar225._4_2_;
      uStack_3c2 = auVar225._6_2_;
      uStack_3c0 = auVar225._8_2_;
      uStack_3be = auVar225._10_2_;
      uStack_3bc = auVar225._12_2_;
      uStack_3ba = auVar225._14_2_;
      *(ulong *)pauVar133[0xf] =
           CONCAT62(CONCAT42(CONCAT22(auVar214._14_2_,auVar211._14_2_),auVar209._14_2_),
                    auVar199._14_2_);
      *(uint *)(*pauVar133 + 8) = CONCAT22(auVar227._0_2_,auVar236._0_2_);
      *(uint *)(pauVar133[1] + 8) = CONCAT22(auVar227._2_2_,auVar236._2_2_);
      *(uint *)(pauVar133[2] + 8) = CONCAT22(auVar227._4_2_,auVar236._4_2_);
      *(uint *)(pauVar133[3] + 8) = CONCAT22(auVar227._6_2_,auVar236._6_2_);
      *(uint *)(pauVar133[4] + 8) = CONCAT22(auVar227._8_2_,auVar236._8_2_);
      *(uint *)(pauVar133[5] + 8) = CONCAT22(auVar227._10_2_,auVar236._10_2_);
      *(uint *)(pauVar133[6] + 8) = CONCAT22(auVar227._12_2_,auVar236._12_2_);
      *(uint *)(pauVar133[7] + 8) = CONCAT22(auVar227._14_2_,auVar236._14_2_);
      *(uint *)(pauVar133[8] + 8) = CONCAT22(auVar315._0_2_,local_3c8);
      *(uint *)(pauVar133[9] + 8) = CONCAT22(auVar315._2_2_,uStack_3c6);
      *(uint *)(pauVar133[10] + 8) = CONCAT22(auVar315._4_2_,uStack_3c4);
      *(uint *)(pauVar133[0xb] + 8) = CONCAT22(auVar315._6_2_,uStack_3c2);
      *(uint *)(pauVar133[0xc] + 8) = CONCAT22(auVar315._8_2_,uStack_3c0);
      *(uint *)(pauVar133[0xd] + 8) = CONCAT22(auVar315._10_2_,uStack_3be);
      *(uint *)(pauVar133[0xe] + 8) = CONCAT22(auVar315._12_2_,uStack_3bc);
      *(uint *)(pauVar133[0xf] + 8) = CONCAT22(auVar315._14_2_,uStack_3ba);
      *(short *)(*pauVar133 + 0xc) = auVar313._0_2_;
      *(short *)(pauVar133[1] + 0xc) = auVar313._2_2_;
      *(short *)(pauVar133[2] + 0xc) = auVar313._4_2_;
      *(short *)(pauVar133[3] + 0xc) = auVar313._6_2_;
      *(short *)(pauVar133[4] + 0xc) = auVar313._8_2_;
      *(short *)(pauVar133[5] + 0xc) = auVar313._10_2_;
      *(short *)(pauVar133[6] + 0xc) = auVar313._12_2_;
      *(short *)(pauVar133[7] + 0xc) = auVar313._14_2_;
      *(short *)(pauVar133[8] + 0xc) = auVar168._0_2_;
      *(short *)(pauVar133[9] + 0xc) = auVar168._2_2_;
      *(short *)(pauVar133[10] + 0xc) = auVar168._4_2_;
      *(short *)(pauVar133[0xb] + 0xc) = auVar168._6_2_;
      *(short *)(pauVar133[0xc] + 0xc) = auVar168._8_2_;
      *(short *)(pauVar133[0xd] + 0xc) = auVar168._10_2_;
      *(short *)(pauVar133[0xe] + 0xc) = auVar168._12_2_;
      puVar2 = (ushort *)(param_2 + lVar135);
      uVar280 = *puVar2;
      uVar287 = puVar2[1];
      uVar237 = puVar2[2];
      uVar290 = puVar2[3];
      uVar292 = puVar2[4];
      uVar294 = puVar2[5];
      uVar296 = puVar2[6];
      uVar298 = puVar2[7];
      *(short *)(pauVar133[0xf] + 0xc) = auVar168._14_2_;
      auVar169._0_2_ = uVar280 >> 7;
      auVar169._2_2_ = uVar287 >> 7;
      auVar169._4_2_ = uVar237 >> 7;
      auVar169._6_2_ = uVar290 >> 7;
      auVar169._8_2_ = uVar292 >> 7;
      auVar169._10_2_ = uVar294 >> 7;
      auVar169._12_2_ = uVar296 >> 7;
      auVar169._14_2_ = uVar298 >> 7;
      auVar169 = auVar169 & __LC4;
      auVar21[0xd] = 0;
      auVar21._0_13_ = auVar169._0_13_;
      auVar21[0xe] = auVar169[7];
      auVar29[0xc] = auVar169[6];
      auVar29._0_12_ = auVar169._0_12_;
      auVar29._13_2_ = auVar21._13_2_;
      auVar37[0xb] = 0;
      auVar37._0_11_ = auVar169._0_11_;
      auVar37._12_3_ = auVar29._12_3_;
      auVar45[10] = auVar169[5];
      auVar45._0_10_ = auVar169._0_10_;
      auVar45._11_4_ = auVar37._11_4_;
      auVar49[9] = 0;
      auVar49._0_9_ = auVar169._0_9_;
      auVar49._10_5_ = auVar45._10_5_;
      uVar126 = CONCAT61(auVar49._9_6_,auVar169[4]);
      auVar103._7_8_ = 0;
      auVar103._0_7_ = uVar126;
      Var85 = CONCAT81(SUB158(auVar103 << 0x40,7),auVar169[3]);
      auVar123._9_6_ = 0;
      auVar123._0_9_ = Var85;
      auVar104._1_10_ = SUB1510(auVar123 << 0x30,5);
      auVar104[0] = auVar169[2];
      auVar124._11_4_ = 0;
      auVar124._0_11_ = auVar104;
      auVar105._1_12_ = SUB1512(auVar124 << 0x20,3);
      auVar105[0] = auVar169[1];
      auVar200._0_2_ = (__LC12 & -(ushort)auVar169[0]) + sVar54;
      auVar200._2_2_ = (_UNK_001053b2 & -auVar105._0_2_) + sVar55;
      auVar200._4_2_ = (_UNK_001053b4 & -auVar104._0_2_) + sVar56;
      auVar200._6_2_ = (_UNK_001053b6 & -(short)Var85) + sVar57;
      auVar200._8_2_ = (_UNK_001053b8 & -(short)uVar126) + sVar58;
      auVar200._10_2_ = (_UNK_001053ba & -auVar45._10_2_) + sVar59;
      auVar200._12_2_ = (_UNK_001053bc & -auVar29._12_2_) + sVar60;
      auVar200._14_2_ = (_UNK_001053be & -(auVar21._13_2_ >> 8)) + sVar61;
      auVar201._0_2_ = auVar200._0_2_ + sVar316;
      auVar201._2_2_ = auVar200._2_2_ + sVar317;
      auVar201._4_2_ = auVar200._4_2_ + sVar318;
      auVar201._6_2_ = auVar200._6_2_ + sVar319;
      auVar201._8_2_ = auVar200._8_2_ + sVar320;
      auVar201._10_2_ = auVar200._10_2_ + sVar321;
      auVar201._12_2_ = auVar200._12_2_ + sVar322;
      auVar201._14_2_ = auVar200._14_2_ + sVar323;
      auVar204 = psraw(auVar201,0xf);
      auVar170._0_2_ = (__LC12 & -(ushort)auVar169[8]) + sVar217;
      auVar170._2_2_ = (_UNK_001053b2 & -(ushort)auVar169[9]) + sVar220;
      auVar170._4_2_ = (_UNK_001053b4 & -(ushort)auVar169[10]) + sVar212;
      auVar170._6_2_ = (_UNK_001053b6 & -(ushort)auVar169[0xb]) + sVar178;
      auVar170._8_2_ = (_UNK_001053b8 & -(ushort)auVar169[0xc]) + sVar257;
      auVar170._10_2_ = (_UNK_001053ba & -(ushort)auVar169[0xd]) + sVar229;
      auVar170._12_2_ = (_UNK_001053bc & -(ushort)auVar169[0xe]) + sVar68;
      auVar170._14_2_ = (_UNK_001053be & -(ushort)auVar169[0xf]) + sVar181;
      auVar201 = (auVar200 ^ auVar201) & auVar204 ^ auVar201;
      auVar171._0_2_ = auVar170._0_2_ + sVar316;
      auVar171._2_2_ = auVar170._2_2_ + sVar317;
      auVar171._4_2_ = auVar170._4_2_ + sVar318;
      auVar171._6_2_ = auVar170._6_2_ + sVar319;
      auVar171._8_2_ = auVar170._8_2_ + sVar320;
      auVar171._10_2_ = auVar170._10_2_ + sVar321;
      auVar171._12_2_ = auVar170._12_2_ + sVar322;
      auVar171._14_2_ = auVar170._14_2_ + sVar323;
      *(short *)(*pauVar133 + 0xe) = auVar201._0_2_;
      auVar204 = psraw(auVar171,0xf);
      *(short *)(pauVar133[1] + 0xe) = auVar201._2_2_;
      *(short *)(pauVar133[2] + 0xe) = auVar201._4_2_;
      auVar171 = (auVar170 ^ auVar171) & auVar204 ^ auVar171;
      *(short *)(pauVar133[3] + 0xe) = auVar201._6_2_;
      *(short *)(pauVar133[4] + 0xe) = auVar201._8_2_;
      *(short *)(pauVar133[5] + 0xe) = auVar201._10_2_;
      *(short *)(pauVar133[6] + 0xe) = auVar201._12_2_;
      *(short *)(pauVar133[7] + 0xe) = auVar201._14_2_;
      *(short *)(pauVar133[8] + 0xe) = auVar171._0_2_;
      *(short *)(pauVar133[9] + 0xe) = auVar171._2_2_;
      *(short *)(pauVar133[10] + 0xe) = auVar171._4_2_;
      *(short *)(pauVar133[0xb] + 0xe) = auVar171._6_2_;
      *(short *)(pauVar133[0xc] + 0xe) = auVar171._8_2_;
      *(short *)(pauVar133[0xd] + 0xe) = auVar171._10_2_;
      *(short *)(pauVar133[0xe] + 0xe) = auVar171._12_2_;
      *(short *)(pauVar133[0xf] + 0xe) = auVar171._14_2_;
      lVar135 = lVar135 + 0x10;
      pauVar133 = pauVar133 + 0x10;
    } while (lVar135 != 0x20);
    scalar_compress((undefined1 (*) [16])local_268,uVar4);
    scalar_encode(param_1 + *(long *)(lVar5 + 0x38),(undefined1 (*) [16])local_268);
    uVar134 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar134;
}



undefined8
encap(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
     EVP_MD_CTX *param_5,long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [40];
  long local_40;
  
  local_c8 = *param_3;
  uStack_c0 = param_3[1];
  local_b8 = param_3[2];
  uStack_b0 = param_3[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_6 + 0x38);
  local_a8 = *puVar1;
  uStack_a0 = puVar1[1];
  local_98 = puVar1[2];
  uStack_90 = puVar1[3];
  iVar2 = EVP_DigestInit_ex(param_5,*(EVP_MD **)(param_6 + 0x28),(ENGINE *)0x0);
  if (iVar2 != 0) {
    iVar2 = single_keccak(&local_88,0x40,&local_c8,0x40,param_5);
    if (iVar2 != 0) {
      iVar2 = encrypt_cpa(param_1,param_3,local_68,param_4,param_5,param_6);
      if (iVar2 != 0) {
        uVar3 = 1;
        *param_2 = local_88;
        param_2[1] = uStack_80;
        param_2[2] = local_78;
        param_2[3] = uStack_70;
        goto LAB_00102eab;
      }
    }
  }
  uVar3 = 0;
LAB_00102eab:
  OPENSSL_cleanse(&local_c8,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
decap(undefined8 *param_1,void *param_2,void *param_3,long param_4,EVP_MD_CTX *param_5,long *param_6
     )

{
  short *psVar1;
  undefined8 *puVar2;
  size_t cnt;
  undefined1 auVar3 [12];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined2 uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auVar42 [14];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [14];
  undefined1 auVar47 [12];
  unkbyte10 Var48;
  unkbyte10 Var49;
  undefined1 auVar50 [12];
  int iVar51;
  int iVar52;
  long lVar53;
  undefined1 (*pauVar54) [16];
  undefined8 uVar55;
  long lVar56;
  byte bVar57;
  long lVar58;
  int extraout_EDX;
  ulong uVar59;
  undefined1 (*pauVar60) [16];
  void *pvVar61;
  int iVar62;
  undefined1 *puVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [16];
  long in_FS_OFFSET;
  uint uVar69;
  undefined1 auVar70 [12];
  int iVar91;
  short sVar92;
  short sVar97;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  short sVar93;
  short sVar95;
  short sVar96;
  short sVar98;
  short sVar99;
  short sVar100;
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  uint uVar94;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined2 uVar110;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  short sVar114;
  undefined1 auVar111 [12];
  undefined1 auVar112 [12];
  short sVar115;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  undefined1 auVar116 [16];
  short sVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  short sVar129;
  short sVar130;
  short sVar131;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar141 [16];
  undefined1 auVar145 [16];
  undefined1 auVar149 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar158 [16];
  undefined1 auVar162 [16];
  undefined1 auVar169 [12];
  undefined1 auVar170 [16];
  uint6 uVar172;
  undefined1 auVar174 [12];
  undefined1 auVar175 [12];
  short sVar182;
  undefined4 uVar181;
  undefined1 auVar177 [16];
  undefined1 auVar179 [16];
  uint uVar183;
  int iVar188;
  uint uVar190;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 (*pauVar191) [16];
  undefined8 uVar192;
  short local_4e8 [256];
  short local_2e8 [256];
  undefined8 local_e8 [4];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  byte local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar82 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar113 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  ushort uVar138;
  undefined2 uVar139;
  undefined2 uVar140;
  undefined1 auVar142 [16];
  undefined1 auVar146 [16];
  undefined1 auVar150 [16];
  undefined1 auVar143 [16];
  undefined1 auVar147 [16];
  undefined1 auVar151 [16];
  undefined1 auVar144 [16];
  undefined1 auVar148 [16];
  undefined1 auVar152 [16];
  undefined1 auVar159 [16];
  undefined1 auVar163 [16];
  undefined1 auVar156 [16];
  undefined1 auVar160 [16];
  undefined1 auVar164 [16];
  undefined1 auVar157 [16];
  undefined1 auVar161 [16];
  undefined1 auVar165 [16];
  short sVar166;
  short sVar167;
  short sVar168;
  undefined1 auVar171 [16];
  undefined1 auVar173 [12];
  undefined1 auVar176 [16];
  undefined1 auVar178 [16];
  undefined1 auVar180 [16];
  undefined4 uVar189;
  
  pvVar61 = (void *)param_6[0xb];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)param_6[7];
  lVar56 = *param_6;
  cnt = *(size_t *)(lVar56 + 0x28);
  iVar51 = EVP_DigestInit_ex(param_5,(EVP_MD *)param_6[3],(ENGINE *)0x0);
  if (((iVar51 != 0) && (iVar51 = EVP_DigestUpdate(param_5,pvVar61,0x20), iVar51 != 0)) &&
     (iVar51 = EVP_DigestUpdate(param_5,param_2,cnt), iVar51 != 0)) {
    iVar51 = EVP_DigestFinalXOF(param_5,local_e8,0x20);
    if (iVar51 != 0) {
      lVar58 = *param_6;
      uVar69 = *(uint *)(lVar58 + 0x4c);
      iVar51 = *(int *)(lVar58 + 0x48);
      uVar94 = *(uint *)(lVar58 + 0x50);
      auVar116 = __LC7;
      if (0 < iVar51) {
        auVar126 = ZEXT416(uVar69);
        iVar52 = (1 << ((byte)uVar69 & 0x1f)) + -1;
        auVar72._4_4_ = iVar52;
        auVar72._0_4_ = iVar52;
        auVar72._8_4_ = iVar52;
        auVar72._12_4_ = iVar52;
        pauVar68 = (undefined1 (*) [16])(param_4 + 0x200);
        pauVar54 = (undefined1 (*) [16])(param_4 + 0x400 + (ulong)(iVar51 - 1) * 0x200);
        auVar132 = ZEXT416(uVar69 - 1);
        pvVar61 = param_2;
        do {
          pauVar191 = pauVar68 + -0x20;
          scalar_decode(pauVar191,pvVar61,uVar69);
          pauVar60 = pauVar191;
          do {
            pauVar67 = pauVar60 + 1;
            sVar114 = *(short *)(*pauVar60 + 6) * auVar116._6_2_;
            auVar71 = pmulhuw(*pauVar60,auVar116);
            uVar190 = CONCAT22(auVar71._8_2_,*(short *)(*pauVar60 + 8) * auVar116._8_2_);
            auVar111._0_8_ =
                 CONCAT26(auVar71._10_2_,
                          CONCAT24(*(short *)(*pauVar60 + 10) * auVar116._10_2_,uVar190));
            auVar111._8_2_ = *(short *)(*pauVar60 + 0xc) * auVar116._12_2_;
            auVar111._10_2_ = auVar71._12_2_;
            auVar113._12_2_ = *(short *)(*pauVar60 + 0xe) * auVar116._14_2_;
            auVar113._0_12_ = auVar111;
            auVar113._14_2_ = auVar71._14_2_;
            uVar183 = CONCAT22(auVar71._6_2_,sVar114);
            Var48 = CONCAT64(CONCAT42(uVar183,auVar71._4_2_),
                             CONCAT22(*(short *)(*pauVar60 + 4) * auVar116._4_2_,sVar114));
            auVar31._4_8_ = (long)((unkuint10)Var48 >> 0x10);
            auVar31._2_2_ = auVar71._2_2_;
            auVar31._0_2_ = *(short *)(*pauVar60 + 2) * auVar116._2_2_;
            auVar125._0_4_ = CONCAT22(auVar71._0_2_,*(short *)*pauVar60 * auVar116._0_2_);
            auVar125._4_12_ = auVar31;
            auVar124 = auVar72 & auVar113;
            lVar66 = auVar132._0_8_;
            lVar64 = auVar126._0_8_;
            auVar71 = auVar72 & auVar125;
            *(short *)*pauVar60 =
                 (short)(auVar71._0_4_ >> lVar66) + (short)(auVar125._0_4_ >> lVar64);
            *(short *)(*pauVar60 + 2) =
                 (short)(auVar71._4_4_ >> lVar66) + (short)(auVar31._0_4_ >> lVar64);
            *(short *)(*pauVar60 + 4) =
                 (short)(auVar71._8_4_ >> lVar66) +
                 (short)((uint)((unkuint10)Var48 >> 0x10) >> lVar64);
            *(short *)(*pauVar60 + 6) =
                 (short)(auVar71._12_4_ >> lVar66) + (short)(uVar183 >> lVar64);
            *(short *)(*pauVar60 + 8) =
                 (short)(auVar124._0_4_ >> lVar66) + (short)(uVar190 >> lVar64);
            *(short *)(*pauVar60 + 10) =
                 (short)(auVar124._4_4_ >> lVar66) +
                 (short)((uint)((ulong)auVar111._0_8_ >> 0x20) >> lVar64);
            *(short *)(*pauVar60 + 0xc) =
                 (short)(auVar124._8_4_ >> lVar66) + (short)(auVar111._8_4_ >> lVar64);
            *(short *)(*pauVar60 + 0xe) =
                 (short)(auVar124._12_4_ >> lVar66) + (short)(auVar113._12_4_ >> lVar64);
            pauVar60 = pauVar67;
          } while (pauVar67 != pauVar68);
          pauVar68 = pauVar68 + 0x20;
          pvVar61 = (void *)((long)pvVar61 + (long)(int)(uVar69 << 5));
          scalar_ntt(pauVar191);
        } while (pauVar68 != pauVar54);
      }
      uVar59 = (ulong)uVar94;
      pauVar68 = (undefined1 (*) [16])local_4e8;
      pauVar191 = pauVar68;
      scalar_decode(pauVar68,(long)param_2 + *(long *)(lVar58 + 0x38));
      iVar62 = extraout_EDX + -1;
      iVar52 = (1 << ((byte)extraout_EDX & 0x1f)) + -1;
      auVar126._4_4_ = iVar52;
      auVar126._0_4_ = iVar52;
      auVar126._8_4_ = iVar52;
      auVar126._12_4_ = iVar52;
      pauVar54 = pauVar68;
      do {
        auVar72 = pmulhuw(auVar116,*pauVar54);
        pauVar60 = pauVar54 + 1;
        sVar114 = *(short *)(*pauVar54 + 6) * auVar116._6_2_;
        uVar94 = CONCAT22(auVar72._8_2_,*(short *)(*pauVar54 + 8) * auVar116._8_2_);
        auVar112._0_8_ =
             CONCAT26(auVar72._10_2_,CONCAT24(*(short *)(*pauVar54 + 10) * auVar116._10_2_,uVar94));
        auVar112._8_2_ = *(short *)(*pauVar54 + 0xc) * auVar116._12_2_;
        auVar112._10_2_ = auVar72._12_2_;
        auVar71._12_2_ = *(short *)(*pauVar54 + 0xe) * auVar116._14_2_;
        auVar71._0_12_ = auVar112;
        auVar71._14_2_ = auVar72._14_2_;
        uVar69 = CONCAT22(auVar72._6_2_,sVar114);
        Var48 = CONCAT64(CONCAT42(uVar69,auVar72._4_2_),
                         CONCAT22(*(short *)(*pauVar54 + 4) * auVar116._4_2_,sVar114));
        auVar32._4_8_ = (long)((unkuint10)Var48 >> 0x10);
        auVar32._2_2_ = auVar72._2_2_;
        auVar32._0_2_ = *(short *)(*pauVar54 + 2) * auVar116._2_2_;
        auVar132._0_4_ = CONCAT22(auVar72._0_2_,*(short *)*pauVar54 * auVar116._0_2_);
        auVar132._4_12_ = auVar32;
        auVar125 = auVar126 & auVar71;
        auVar72 = auVar126 & auVar132;
        *(short *)*pauVar54 = (short)(auVar72._0_4_ >> iVar62) + (short)(auVar132._0_4_ >> uVar59);
        *(short *)(*pauVar54 + 2) =
             (short)(auVar72._4_4_ >> iVar62) + (short)(auVar32._0_4_ >> uVar59);
        *(short *)(*pauVar54 + 4) =
             (short)(auVar72._8_4_ >> iVar62) + (short)((uint)((unkuint10)Var48 >> 0x10) >> uVar59);
        *(short *)(*pauVar54 + 6) = (short)(auVar72._12_4_ >> iVar62) + (short)(uVar69 >> uVar59);
        *(short *)(*pauVar54 + 8) = (short)(auVar125._0_4_ >> iVar62) + (short)(uVar94 >> uVar59);
        *(short *)(*pauVar54 + 10) =
             (short)(auVar125._4_4_ >> iVar62) +
             (short)((uint)((ulong)auVar112._0_8_ >> 0x20) >> uVar59);
        *(short *)(*pauVar54 + 0xc) =
             (short)(auVar125._8_4_ >> iVar62) + (short)(auVar112._8_4_ >> uVar59);
        *(short *)(*pauVar54 + 0xe) =
             (short)(auVar125._12_4_ >> iVar62) + (short)(auVar71._12_4_ >> uVar59);
        pauVar54 = pauVar60;
      } while ((undefined1 (*) [16])local_2e8 != pauVar60);
      lVar58 = param_6[10];
      scalar_mult((undefined1 (*) [16])local_2e8,lVar58,param_4);
      if (1 < iVar51) {
        lVar64 = lVar58;
        lVar66 = param_4;
        do {
          lVar65 = lVar64 + 0x200;
          lVar53 = 0;
          pauVar54 = (undefined1 (*) [16])local_2e8;
          do {
            auVar72 = *(undefined1 (*) [16])(lVar64 + 0x200 + lVar53 * 2);
            uVar7 = *(undefined2 *)(pauVar54[1] + 2);
            uVar8 = *(ushort *)(pauVar54[1] + 4);
            uVar9 = *(ushort *)(pauVar54[1] + 6);
            psVar1 = (short *)(lVar64 + 0x210 + lVar53 * 2);
            sVar114 = *psVar1;
            sVar10 = psVar1[1];
            sVar11 = psVar1[2];
            sVar12 = psVar1[3];
            sVar13 = psVar1[4];
            sVar14 = psVar1[5];
            sVar15 = psVar1[6];
            sVar16 = psVar1[7];
            sVar168 = auVar72._6_2_;
            auVar157._0_12_ = auVar72._0_12_;
            auVar157._12_2_ = sVar168;
            auVar157._14_2_ = sVar12;
            auVar156._12_4_ = auVar157._12_4_;
            auVar156._0_10_ = auVar72._0_10_;
            auVar156._10_2_ = sVar11;
            sVar167 = auVar72._4_2_;
            auVar155._10_6_ = auVar156._10_6_;
            auVar155._0_8_ = auVar72._0_8_;
            auVar155._8_2_ = sVar167;
            auVar33._2_8_ = auVar155._8_8_;
            auVar33._0_2_ = sVar10;
            sVar166 = auVar72._2_2_;
            auVar33._10_6_ = 0;
            auVar162._0_2_ = auVar72._0_2_;
            auVar124._12_4_ = 0;
            auVar124._0_12_ = SUB1612(auVar33 << 0x30,4);
            auVar124 = auVar124 << 0x20;
            sVar92 = auVar72._8_2_;
            sVar95 = auVar72._10_2_;
            sVar97 = auVar72._12_2_;
            sVar99 = auVar72._14_2_;
            psVar1 = (short *)(lVar66 + 0x210 + lVar53 * 2);
            sVar17 = *psVar1;
            sVar18 = psVar1[1];
            sVar19 = psVar1[2];
            sVar20 = psVar1[3];
            sVar21 = psVar1[4];
            sVar22 = psVar1[5];
            sVar23 = psVar1[6];
            sVar24 = psVar1[7];
            auVar161._0_12_ = auVar124._0_12_;
            auVar161._12_2_ = sVar10;
            auVar161._14_2_ = sVar14;
            auVar160._12_4_ = auVar161._12_4_;
            auVar160._0_10_ = auVar124._0_10_;
            auVar160._10_2_ = sVar95;
            auVar159._10_6_ = auVar160._10_6_;
            auVar159._0_8_ = auVar124._0_8_;
            auVar159._8_2_ = sVar166;
            auVar34._2_8_ = auVar159._8_8_;
            auVar34._0_2_ = sVar13;
            auVar34._10_6_ = 0;
            auVar158._12_4_ = 0;
            auVar158._0_12_ = SUB1612(auVar34 << 0x30,4);
            auVar158 = auVar158 << 0x20;
            auVar165._0_12_ = auVar158._0_12_;
            auVar165._12_2_ = sVar13;
            auVar165._14_2_ = sVar15;
            auVar164._12_4_ = auVar165._12_4_;
            auVar164._0_10_ = auVar158._0_10_;
            auVar164._10_2_ = sVar11;
            auVar163._10_6_ = auVar164._10_6_;
            auVar163._0_8_ = auVar158._0_8_;
            auVar163._8_2_ = sVar114;
            auVar162._8_8_ = auVar163._8_8_;
            auVar162._6_2_ = sVar97;
            auVar162._4_2_ = sVar92;
            auVar162._2_2_ = sVar167;
            auVar154._2_2_ = sVar168;
            auVar154._0_2_ = sVar166;
            auVar154._4_2_ = sVar95;
            auVar154._6_2_ = sVar99;
            auVar154._8_2_ = sVar10;
            auVar154._10_2_ = sVar12;
            auVar154._12_2_ = sVar14;
            auVar154._14_2_ = sVar16;
            auVar72 = *(undefined1 (*) [16])(lVar66 + 0x200 + lVar53 * 2);
            sVar131 = auVar72._6_2_;
            sVar130 = auVar72._4_2_;
            sVar129 = auVar72._2_2_;
            auVar144._12_2_ = sVar131;
            auVar144._0_12_ = auVar72._0_12_;
            auVar144._14_2_ = sVar20;
            auVar143._12_4_ = auVar144._12_4_;
            auVar143._10_2_ = sVar19;
            auVar143._0_10_ = auVar72._0_10_;
            auVar142._10_6_ = auVar143._10_6_;
            auVar142._8_2_ = sVar130;
            auVar142._0_8_ = auVar72._0_8_;
            auVar35._2_8_ = auVar142._8_8_;
            auVar35._0_2_ = sVar18;
            auVar35._10_6_ = 0;
            auVar149._0_2_ = auVar72._0_2_;
            auVar141._12_4_ = 0;
            auVar141._0_12_ = SUB1612(auVar35 << 0x30,4);
            auVar141 = auVar141 << 0x20;
            sVar93 = auVar72._8_2_;
            sVar96 = auVar72._10_2_;
            sVar98 = auVar72._12_2_;
            sVar100 = auVar72._14_2_;
            auVar148._0_12_ = auVar141._0_12_;
            auVar148._12_2_ = sVar18;
            auVar148._14_2_ = sVar22;
            auVar147._12_4_ = auVar148._12_4_;
            auVar147._0_10_ = auVar141._0_10_;
            auVar147._10_2_ = sVar96;
            auVar146._10_6_ = auVar147._10_6_;
            auVar146._0_8_ = auVar141._0_8_;
            auVar146._8_2_ = sVar129;
            auVar36._2_8_ = auVar146._8_8_;
            auVar36._0_2_ = sVar21;
            auVar36._10_6_ = 0;
            auVar145._12_4_ = 0;
            auVar145._0_12_ = SUB1612(auVar36 << 0x30,4);
            auVar145 = auVar145 << 0x20;
            auVar152._0_12_ = auVar145._0_12_;
            auVar152._12_2_ = sVar21;
            auVar152._14_2_ = sVar23;
            auVar151._12_4_ = auVar152._12_4_;
            auVar151._0_10_ = auVar145._0_10_;
            auVar151._10_2_ = sVar19;
            auVar150._10_6_ = auVar151._10_6_;
            auVar150._0_8_ = auVar145._0_8_;
            auVar150._8_2_ = sVar17;
            auVar149._8_8_ = auVar150._8_8_;
            auVar149._6_2_ = sVar98;
            auVar149._4_2_ = sVar93;
            auVar149._2_2_ = sVar130;
            auVar127._2_2_ = sVar131;
            auVar127._0_2_ = sVar129;
            auVar127._4_2_ = sVar96;
            auVar127._6_2_ = sVar100;
            auVar127._8_2_ = sVar18;
            auVar127._10_2_ = sVar20;
            auVar127._12_2_ = sVar22;
            auVar127._14_2_ = sVar24;
            auVar72 = *pauVar54;
            uVar140 = auVar72._6_2_;
            auVar135._0_12_ = auVar72._0_12_;
            auVar135._12_2_ = uVar140;
            auVar135._14_2_ = uVar9;
            auVar134._12_4_ = auVar135._12_4_;
            auVar134._0_10_ = auVar72._0_10_;
            auVar134._10_2_ = uVar8;
            uVar139 = auVar72._4_2_;
            auVar133._10_6_ = auVar134._10_6_;
            auVar133._0_8_ = auVar72._0_8_;
            auVar133._8_2_ = uVar139;
            auVar3._4_8_ = auVar133._8_8_;
            auVar3._2_2_ = uVar7;
            uVar138 = auVar72._2_2_;
            auVar3._0_2_ = uVar138;
            auVar136._0_12_ = auVar3 << 0x20;
            auVar76._12_2_ = uVar140;
            auVar76._0_12_ = auVar135._0_12_;
            auVar76._14_2_ = uVar9;
            auVar75._12_4_ = auVar76._12_4_;
            auVar75._10_2_ = uVar8;
            auVar75._0_10_ = auVar134._0_10_;
            auVar74._10_6_ = auVar75._10_6_;
            auVar74._8_2_ = uVar139;
            auVar74._0_8_ = auVar133._0_8_;
            auVar37._2_8_ = auVar74._8_8_;
            auVar37._0_2_ = uVar7;
            auVar37._10_6_ = 0;
            auVar73._12_4_ = 0;
            auVar73._0_12_ = SUB1612(auVar37 << 0x30,4);
            auVar73 = auVar73 << 0x20;
            uVar110 = auVar72._14_2_;
            auVar136._12_2_ = uVar7;
            auVar136._14_2_ = *(undefined2 *)(pauVar54[1] + 10);
            auVar80._0_12_ = auVar73._0_12_;
            auVar80._12_2_ = uVar7;
            auVar80._14_2_ = *(undefined2 *)(pauVar54[1] + 10);
            auVar79._12_4_ = auVar80._12_4_;
            auVar79._0_10_ = auVar73._0_10_;
            auVar79._10_2_ = auVar72._10_2_;
            auVar78._10_6_ = auVar79._10_6_;
            auVar78._0_8_ = auVar73._0_8_;
            auVar78._8_2_ = uVar138;
            auVar38._2_8_ = auVar78._8_8_;
            auVar38._0_2_ = *(undefined2 *)(pauVar54[1] + 8);
            auVar38._10_6_ = 0;
            auVar77._12_4_ = 0;
            auVar77._0_12_ = SUB1612(auVar38 << 0x30,4);
            auVar77 = auVar77 << 0x20;
            auVar83._0_12_ = auVar77._0_12_;
            auVar83._12_2_ = *(undefined2 *)(pauVar54[1] + 8);
            auVar83._14_2_ = *(undefined2 *)(pauVar54[1] + 0xc);
            auVar82._12_4_ = auVar83._12_4_;
            auVar82._0_10_ = auVar77._0_10_;
            auVar82._10_2_ = uVar8;
            auVar81._10_6_ = auVar82._10_6_;
            auVar81._0_8_ = auVar77._0_8_;
            auVar81._8_2_ = *(ushort *)pauVar54[1];
            auVar40._2_8_ = auVar81._8_8_;
            auVar40._0_2_ = auVar72._12_2_;
            auVar40._10_6_ = 0;
            auVar39._12_4_ = 0;
            auVar39._0_12_ = SUB1612(auVar40 << 0x30,4);
            auVar126 = pmulhuw(auVar127,auVar154);
            auVar50._2_2_ = uVar7;
            auVar50._0_2_ = uVar110;
            sVar182 = sVar100 * sVar99;
            uVar172 = CONCAT24(sVar20 * sVar12,CONCAT22(auVar126._8_2_,sVar18 * sVar10));
            auVar173._0_8_ = CONCAT26(auVar126._10_2_,uVar172);
            auVar173._8_2_ = sVar22 * sVar14;
            auVar173._10_2_ = auVar126._12_2_;
            auVar176._12_2_ = sVar24 * sVar16;
            auVar176._0_12_ = auVar173;
            auVar176._14_2_ = auVar126._14_2_;
            uVar181 = CONCAT22(auVar126._6_2_,sVar182);
            Var48 = CONCAT64(CONCAT42(uVar181,auVar126._4_2_),CONCAT22(sVar96 * sVar95,sVar182));
            uVar59 = (ulong)((unkuint10)Var48 >> 0x10);
            auVar41._4_8_ = uVar59;
            auVar41._2_2_ = auVar126._2_2_;
            auVar41._0_2_ = sVar131 * sVar168;
            auVar184._2_2_ = auVar126._0_2_;
            auVar184._0_2_ = sVar129 * sVar166;
            auVar184._4_12_ = auVar41;
            auVar170._8_4_ = auVar41._0_4_;
            auVar170._0_8_ = auVar184._0_8_;
            auVar170._12_4_ = auVar41._0_4_;
            uVar189 = (undefined4)((unkuint10)Var48 >> 0x10);
            auVar185._4_4_ = uVar189;
            auVar185._0_4_ = uVar189;
            auVar185._8_4_ = uVar181;
            auVar185._12_4_ = uVar181;
            auVar132 = pmulhuw(auVar149,auVar162);
            uVar181 = (undefined4)((ulong)auVar173._0_8_ >> 0x20);
            auVar186._8_4_ = uVar181;
            auVar186._0_8_ = auVar173._0_8_;
            auVar186._12_4_ = uVar181;
            uVar69 = auVar173._8_4_;
            auVar177._4_4_ = uVar69;
            auVar177._0_4_ = uVar69;
            auVar177._12_4_ = auVar176._12_4_;
            auVar177._8_4_ = auVar177._12_4_;
            sVar115 = auVar116._0_2_;
            sVar117 = auVar116._2_2_;
            sVar118 = auVar116._4_2_;
            sVar119 = auVar116._6_2_;
            sVar120 = auVar116._8_2_;
            sVar121 = auVar116._10_2_;
            sVar122 = auVar116._12_2_;
            sVar123 = auVar116._14_2_;
            auVar4._10_2_ = 0;
            auVar4._0_10_ = SUB1610(auVar39 << 0x20,0);
            auVar4._12_2_ = auVar72._12_2_;
            auVar6._8_2_ = auVar72._8_2_;
            auVar6._0_8_ = SUB168(auVar39 << 0x20,0);
            auVar6._10_4_ = auVar4._10_4_;
            auVar42._6_8_ = 0;
            auVar42._0_6_ = auVar6._8_6_;
            auVar101._0_2_ =
                 sVar129 * sVar166 -
                 (short)((auVar184._0_8_ & 0xffffffff) * (ulong)__LC0 >> 0x18) * sVar115;
            auVar101._2_2_ =
                 sVar131 * sVar168 -
                 (short)((auVar170._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar117;
            auVar101._4_2_ =
                 sVar96 * sVar95 - (short)((uVar59 & 0xffffffff) * (ulong)__LC0 >> 0x18) * sVar118;
            auVar101._6_2_ =
                 sVar182 - (short)((auVar185._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) *
                           sVar119;
            auVar101._8_2_ =
                 sVar18 * sVar10 -
                 (short)(((ulong)uVar172 & 0xffffffff) * (ulong)__LC0 >> 0x18) * sVar120;
            auVar101._10_2_ =
                 sVar20 * sVar12 -
                 (short)((auVar186._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar121;
            auVar101._12_2_ =
                 sVar22 * sVar14 - (short)((ulong)uVar69 * (ulong)__LC0 >> 0x18) * sVar122;
            auVar101._14_2_ =
                 sVar24 * sVar16 -
                 (short)((auVar177._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar123;
            auVar102._0_2_ = auVar101._0_2_ + __LC11;
            auVar102._2_2_ = auVar101._2_2_ + _UNK_001053a2;
            auVar102._4_2_ = auVar101._4_2_ + _UNK_001053a4;
            auVar102._6_2_ = auVar101._6_2_ + _UNK_001053a6;
            auVar102._8_2_ = auVar101._8_2_ + _UNK_001053a8;
            auVar102._10_2_ = auVar101._10_2_ + _UNK_001053aa;
            auVar102._12_2_ = auVar101._12_2_ + _UNK_001053ac;
            auVar102._14_2_ = auVar101._14_2_ + _UNK_001053ae;
            auVar126 = psraw(auVar102,0xf);
            auVar102 = (auVar101 ^ auVar102) & auVar126 ^ auVar102;
            iVar188 = CONCAT22(auVar132._8_2_,sVar17 * sVar114);
            auVar174._0_8_ = CONCAT26(auVar132._10_2_,CONCAT24(sVar19 * sVar11,iVar188));
            auVar174._8_2_ = sVar21 * sVar13;
            auVar174._10_2_ = auVar132._12_2_;
            auVar178._12_2_ = sVar23 * sVar15;
            auVar178._0_12_ = auVar174;
            auVar178._14_2_ = auVar132._14_2_;
            iVar52 = CONCAT22(auVar132._6_2_,sVar98 * sVar97);
            Var48 = CONCAT64(CONCAT42(iVar52,auVar132._4_2_),
                             CONCAT22(sVar93 * sVar92,sVar98 * sVar97));
            auVar43._4_8_ = (long)((unkuint10)Var48 >> 0x10);
            auVar43._2_2_ = auVar132._2_2_;
            auVar43._0_2_ = sVar130 * sVar167;
            psVar1 = (short *)((long)&kModRoots + lVar53);
            psVar25 = (short *)((long)&DAT_00104ee2 + lVar53);
            psVar26 = (short *)(&UNK_00104ee4 + lVar53);
            psVar27 = (short *)(&UNK_00104ee8 + lVar53);
            psVar28 = (short *)(&UNK_00104eea + lVar53);
            psVar29 = (short *)(&UNK_00104eec + lVar53);
            psVar30 = (short *)(&UNK_00104eee + lVar53);
            sVar182 = *(short *)(&UNK_00104ee6 + lVar53) * auVar102._6_2_;
            auVar126 = pmulhuw(auVar102,*(undefined1 (*) [16])((long)&kModRoots + lVar53));
            lVar53 = lVar53 + 0x10;
            iVar91 = CONCAT22(auVar126._8_2_,*psVar27 * auVar102._8_2_);
            auVar169._0_8_ = CONCAT26(auVar126._10_2_,CONCAT24(*psVar28 * auVar102._10_2_,iVar91));
            auVar169._8_2_ = *psVar29 * auVar102._12_2_;
            auVar169._10_2_ = auVar126._12_2_;
            auVar171._12_2_ = *psVar30 * auVar102._14_2_;
            auVar171._0_12_ = auVar169;
            auVar171._14_2_ = auVar126._14_2_;
            iVar62 = CONCAT22(auVar126._6_2_,sVar182);
            Var49 = CONCAT64(CONCAT42(iVar62,auVar126._4_2_),
                             CONCAT22(*psVar26 * auVar102._4_2_,sVar182));
            auVar44._4_8_ = (long)((unkuint10)Var49 >> 0x10);
            auVar44._2_2_ = auVar126._2_2_;
            auVar44._0_2_ = *psVar25 * auVar102._2_2_;
            uVar69 = (uint)*(ushort *)pauVar54[1] + iVar188 + iVar91;
            iVar91 = (uint)uVar8 + (int)((ulong)auVar174._0_8_ >> 0x20) +
                     (int)((ulong)auVar169._0_8_ >> 0x20);
            auVar187._4_4_ = iVar91;
            auVar187._0_4_ = uVar69;
            uVar94 = (auVar82._12_4_ & 0xffff) + auVar174._8_4_ + auVar169._8_4_;
            auVar84._12_4_ = (auVar82._12_4_ >> 0x10) + auVar178._12_4_ + auVar171._12_4_;
            uVar183 = (uint)auVar72._0_2_ + CONCAT22(auVar132._0_2_,auVar149._0_2_ * auVar162._0_2_)
                      + CONCAT22(auVar126._0_2_,*psVar1 * auVar102._0_2_);
            iVar188 = (int)CONCAT82(SUB148(auVar42 << 0x40,6),uVar139) + auVar43._0_4_ +
                      auVar44._0_4_;
            auVar179._4_4_ = iVar188;
            auVar179._0_4_ = uVar183;
            uVar190 = auVar6._8_4_ + (int)((unkuint10)Var48 >> 0x10) +
                      (int)((unkuint10)Var49 >> 0x10);
            iVar62 = (auVar4._10_4_ >> 0x10) + iVar52 + iVar62;
            auVar103._4_4_ = uVar190;
            auVar103._0_4_ = uVar190;
            auVar103._8_4_ = iVar62;
            auVar103._12_4_ = iVar62;
            auVar179._8_4_ = iVar188;
            auVar179._12_4_ = iVar188;
            auVar187._8_4_ = iVar91;
            auVar187._12_4_ = iVar91;
            auVar84._4_4_ = uVar94;
            auVar84._0_4_ = uVar94;
            auVar84._8_4_ = auVar84._12_4_;
            auVar126 = pmulhuw(auVar127,auVar162);
            auVar85._0_2_ =
                 (short)uVar183 - (short)((ulong)uVar183 * (ulong)__LC0 >> 0x18) * sVar115;
            auVar85._2_2_ =
                 (short)iVar188 -
                 (short)((auVar179._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar117;
            auVar85._4_2_ =
                 (short)uVar190 - (short)((ulong)uVar190 * (ulong)__LC0 >> 0x18) * sVar118;
            auVar85._6_2_ =
                 (short)iVar62 -
                 (short)((auVar103._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar119;
            auVar85._8_2_ = (short)uVar69 - (short)((ulong)uVar69 * (ulong)__LC0 >> 0x18) * sVar120;
            auVar85._10_2_ =
                 (short)iVar91 -
                 (short)((auVar187._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar121;
            auVar85._12_2_ = (short)uVar94 - (short)((ulong)uVar94 * (ulong)__LC0 >> 0x18) * sVar122
            ;
            auVar85._14_2_ =
                 (short)auVar84._12_4_ -
                 (short)((auVar84._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar123;
            iVar52 = CONCAT22(auVar126._6_2_,sVar100 * sVar97);
            Var48 = CONCAT64(CONCAT42(iVar52,auVar126._4_2_),
                             CONCAT22(sVar96 * sVar92,sVar100 * sVar97));
            auVar45._4_8_ = (long)((unkuint10)Var48 >> 0x10);
            auVar45._2_2_ = auVar126._2_2_;
            auVar45._0_2_ = sVar131 * sVar167;
            iVar188 = CONCAT22(auVar126._8_2_,sVar18 * sVar114);
            auVar175._0_8_ = CONCAT26(auVar126._10_2_,CONCAT24(sVar20 * sVar11,iVar188));
            auVar175._8_2_ = sVar22 * sVar13;
            auVar175._10_2_ = auVar126._12_2_;
            auVar180._12_2_ = sVar24 * sVar15;
            auVar180._0_12_ = auVar175;
            auVar180._14_2_ = auVar126._14_2_;
            auVar86._0_2_ = auVar85._0_2_ + __LC11;
            auVar86._2_2_ = auVar85._2_2_ + _UNK_001053a2;
            auVar86._4_2_ = auVar85._4_2_ + _UNK_001053a4;
            auVar86._6_2_ = auVar85._6_2_ + _UNK_001053a6;
            auVar86._8_2_ = auVar85._8_2_ + _UNK_001053a8;
            auVar86._10_2_ = auVar85._10_2_ + _UNK_001053aa;
            auVar86._12_2_ = auVar85._12_2_ + _UNK_001053ac;
            auVar86._14_2_ = auVar85._14_2_ + _UNK_001053ae;
            auVar132 = psraw(auVar86,0xf);
            auVar86 = (auVar85 ^ auVar86) & auVar132 ^ auVar86;
            auVar132 = pmulhuw(auVar149,auVar154);
            auVar50._4_8_ = 0;
            auVar5._12_2_ = uVar110;
            auVar5._0_12_ = auVar50 << 0x30;
            uVar55 = CONCAT44(auVar5._10_4_,CONCAT22(auVar72._10_2_,uVar110));
            auVar46._6_8_ = 0;
            auVar46._0_6_ = (uint6)((ulong)uVar55 >> 0x10);
            iVar91 = CONCAT22(auVar132._8_2_,sVar17 * sVar10);
            auVar70._0_8_ = CONCAT26(auVar132._10_2_,CONCAT24(sVar19 * sVar12,iVar91));
            auVar70._8_2_ = sVar21 * sVar14;
            auVar70._10_2_ = auVar132._12_2_;
            auVar87._12_2_ = sVar23 * sVar16;
            auVar87._0_12_ = auVar70;
            auVar87._14_2_ = auVar132._14_2_;
            iVar62 = CONCAT22(auVar132._6_2_,sVar98 * sVar99);
            Var49 = CONCAT64(CONCAT42(iVar62,auVar132._4_2_),
                             CONCAT22(sVar93 * sVar95,sVar98 * sVar99));
            auVar47._4_8_ = (long)((unkuint10)Var49 >> 0x10);
            auVar47._2_2_ = auVar132._2_2_;
            auVar47._0_2_ = sVar130 * sVar168;
            uVar69 = iVar91 + iVar188 + (auVar136._12_4_ & 0xffff);
            iVar91 = (int)((ulong)auVar70._0_8_ >> 0x20) + (int)((ulong)auVar175._0_8_ >> 0x20) +
                     (uint)uVar9;
            auVar153._4_4_ = iVar91;
            auVar153._0_4_ = uVar69;
            uVar94 = auVar70._8_4_ + auVar175._8_4_ + (auVar136._12_4_ >> 0x10);
            auVar88._12_4_ = auVar87._12_4_ + auVar180._12_4_ + (uint)*(ushort *)(pauVar54[1] + 0xe)
            ;
            uVar183 = CONCAT22(auVar132._0_2_,auVar149._0_2_ * sVar166) +
                      CONCAT22(auVar126._0_2_,sVar129 * auVar162._0_2_) + (uint)uVar138;
            iVar188 = auVar47._0_4_ + auVar45._0_4_ +
                      (int)CONCAT82(SUB148(auVar46 << 0x40,6),uVar140);
            auVar128._4_4_ = iVar188;
            auVar128._0_4_ = uVar183;
            uVar190 = (int)((unkuint10)Var49 >> 0x10) + (int)((unkuint10)Var48 >> 0x10) +
                      (int)((ulong)uVar55 >> 0x10);
            auVar104._12_4_ = iVar62 + iVar52 + (auVar5._10_4_ >> 0x10);
            auVar128._8_4_ = iVar188;
            auVar128._12_4_ = iVar188;
            auVar104._4_4_ = uVar190;
            auVar104._0_4_ = uVar190;
            auVar104._8_4_ = auVar104._12_4_;
            auVar153._8_4_ = iVar91;
            auVar153._12_4_ = iVar91;
            auVar88._4_4_ = uVar94;
            auVar88._0_4_ = uVar94;
            auVar88._8_4_ = auVar88._12_4_;
            auVar137._0_2_ =
                 (short)uVar183 - (short)((ulong)uVar183 * (ulong)__LC0 >> 0x18) * sVar115;
            auVar137._2_2_ =
                 (short)iVar188 -
                 (short)((auVar128._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar117;
            auVar137._4_2_ =
                 (short)uVar190 - (short)((ulong)uVar190 * (ulong)__LC0 >> 0x18) * sVar118;
            auVar137._6_2_ =
                 (short)auVar104._12_4_ -
                 (short)((auVar104._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar119;
            auVar137._8_2_ = (short)uVar69 - (short)((ulong)uVar69 * (ulong)__LC0 >> 0x18) * sVar120
            ;
            auVar137._10_2_ =
                 (short)iVar91 -
                 (short)((auVar153._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar121;
            auVar137._12_2_ =
                 (short)uVar94 - (short)((ulong)uVar94 * (ulong)__LC0 >> 0x18) * sVar122;
            auVar137._14_2_ =
                 (short)auVar88._12_4_ -
                 (short)((auVar88._8_8_ & 0xffffffff) * (ulong)_UNK_001052f8 >> 0x18) * sVar123;
            auVar89._0_2_ = auVar137._0_2_ + __LC11;
            auVar89._2_2_ = auVar137._2_2_ + _UNK_001053a2;
            auVar89._4_2_ = auVar137._4_2_ + _UNK_001053a4;
            auVar89._6_2_ = auVar137._6_2_ + _UNK_001053a6;
            auVar89._8_2_ = auVar137._8_2_ + _UNK_001053a8;
            auVar89._10_2_ = auVar137._10_2_ + _UNK_001053aa;
            auVar89._12_2_ = auVar137._12_2_ + _UNK_001053ac;
            auVar89._14_2_ = auVar137._14_2_ + _UNK_001053ae;
            auVar72 = psraw(auVar89,0xf);
            auVar89 = (auVar137 ^ auVar89) & auVar72 ^ auVar89;
            auVar108._0_12_ = auVar86._0_12_;
            auVar108._12_2_ = auVar86._6_2_;
            auVar108._14_2_ = auVar89._6_2_;
            auVar107._12_4_ = auVar108._12_4_;
            auVar107._0_10_ = auVar86._0_10_;
            auVar107._10_2_ = auVar89._4_2_;
            auVar106._10_6_ = auVar107._10_6_;
            auVar106._0_8_ = auVar86._0_8_;
            auVar106._8_2_ = auVar86._4_2_;
            auVar105._8_8_ = auVar106._8_8_;
            auVar105._6_2_ = auVar89._2_2_;
            auVar105._4_2_ = auVar86._2_2_;
            auVar105._0_2_ = auVar86._0_2_;
            auVar105._2_2_ = auVar89._0_2_;
            *pauVar54 = auVar105;
            *(short *)pauVar54[1] = auVar86._8_2_;
            *(short *)(pauVar54[1] + 2) = auVar89._8_2_;
            *(short *)(pauVar54[1] + 4) = auVar86._10_2_;
            *(short *)(pauVar54[1] + 6) = auVar89._10_2_;
            *(short *)(pauVar54[1] + 8) = auVar86._12_2_;
            *(short *)(pauVar54[1] + 10) = auVar89._12_2_;
            *(short *)(pauVar54[1] + 0xc) = auVar86._14_2_;
            *(short *)(pauVar54[1] + 0xe) = auVar89._14_2_;
            pauVar54 = pauVar54 + 2;
          } while (lVar53 != 0x100);
          lVar64 = lVar65;
          lVar66 = lVar66 + 0x200;
        } while (lVar65 != (ulong)(iVar51 - 1) * 0x200 + lVar58);
      }
      scalar_inverse_ntt((undefined1 (*) [16])local_2e8);
      pauVar54 = pauVar191;
      pauVar60 = (undefined1 (*) [16])local_2e8;
      do {
        auVar109._0_2_ = *(short *)*pauVar54 - *(short *)*pauVar60;
        auVar109._2_2_ = *(short *)(*pauVar54 + 2) - *(short *)(*pauVar60 + 2);
        auVar109._4_2_ = *(short *)(*pauVar54 + 4) - *(short *)(*pauVar60 + 4);
        auVar109._6_2_ = *(short *)(*pauVar54 + 6) - *(short *)(*pauVar60 + 6);
        auVar109._8_2_ = *(short *)(*pauVar54 + 8) - *(short *)(*pauVar60 + 8);
        auVar109._10_2_ = *(short *)(*pauVar54 + 10) - *(short *)(*pauVar60 + 10);
        auVar109._12_2_ = *(short *)(*pauVar54 + 0xc) - *(short *)(*pauVar60 + 0xc);
        auVar109._14_2_ = *(short *)(*pauVar54 + 0xe) - *(short *)(*pauVar60 + 0xe);
        pauVar67 = pauVar54 + 1;
        pauVar60 = pauVar60 + 1;
        auVar90._0_2_ = auVar109._0_2_ + auVar116._0_2_;
        auVar90._2_2_ = auVar109._2_2_ + auVar116._2_2_;
        auVar90._4_2_ = auVar109._4_2_ + auVar116._4_2_;
        auVar90._6_2_ = auVar109._6_2_ + auVar116._6_2_;
        auVar90._8_2_ = auVar109._8_2_ + auVar116._8_2_;
        auVar90._10_2_ = auVar109._10_2_ + auVar116._10_2_;
        auVar90._12_2_ = auVar109._12_2_ + auVar116._12_2_;
        auVar90._14_2_ = auVar109._14_2_ + auVar116._14_2_;
        auVar72 = psraw(auVar109,0xf);
        *pauVar54 = (auVar90 ^ auVar109) & auVar72 ^ auVar109;
        pauVar54 = pauVar67;
      } while (pauVar67 != (undefined1 (*) [16])local_2e8);
      scalar_compress(pauVar191);
      iVar51 = 0;
      puVar63 = local_c8;
      do {
        lVar58 = 0;
        uVar69 = 0;
        do {
          lVar64 = lVar58 * 2;
          bVar57 = (byte)lVar58;
          lVar58 = lVar58 + 1;
          uVar69 = uVar69 | (*(ushort *)(*pauVar68 + lVar64) & 1) << (bVar57 & 0x1f);
        } while (lVar58 != 8);
        iVar51 = iVar51 + 8;
        *puVar63 = (char)uVar69;
        pauVar68 = pauVar68 + 1;
        puVar63 = puVar63 + 1;
      } while (iVar51 != 0x100);
      uVar55 = *puVar2;
      uVar192 = puVar2[1];
      local_98 = puVar2[2];
      uStack_90 = puVar2[3];
      local_a8 = uVar55;
      uStack_a0 = uVar192;
      iVar51 = EVP_DigestInit_ex(param_5,(EVP_MD *)param_6[5],(ENGINE *)0x0);
      if (iVar51 == 0) {
LAB_0010380f:
        *param_1 = local_e8[0];
        param_1[1] = local_e8[1];
        param_1[2] = local_e8[2];
        param_1[3] = local_e8[3];
        OPENSSL_cleanse(local_c8,0x20);
      }
      else {
        iVar51 = single_keccak(local_88,0x40,local_c8,0x40,param_5);
        if ((iVar51 == 0) ||
           (iVar51 = encrypt_cpa(param_3,local_c8,local_68,param_4,param_5,param_6,uVar55,uVar192),
           iVar51 == 0)) goto LAB_0010380f;
        iVar51 = CRYPTO_memcmp(param_2,param_3,*(size_t *)(lVar56 + 0x28));
        lVar56 = 0;
        bVar57 = (char)(~(byte)((uint)iVar51 >> 0x18) & (byte)((uint)(iVar51 + -1) >> 0x18)) >> 7;
        do {
          *(byte *)((long)param_1 + lVar56) =
               local_88[lVar56] & bVar57 | *(byte *)((long)local_e8 + lVar56) & ~bVar57;
          lVar56 = lVar56 + 1;
        } while (lVar56 != 0x20);
        OPENSSL_cleanse(local_c8,0x20);
        OPENSSL_cleanse(local_88,0x40);
      }
      uVar55 = 1;
      goto LAB_00102fb7;
    }
  }
  uVar55 = 0;
LAB_00102fb7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar55;
}



void ossl_ml_kem_key_reset(long *param_1)

{
  void *ptr;
  
  ptr = (void *)param_1[8];
  if (ptr != (void *)0x0) {
    if ((void *)param_1[10] != (void *)0x0) {
      OPENSSL_cleanse((void *)param_1[10],*(long *)(*param_1 + 0x30) + 0x40);
      ptr = (void *)param_1[8];
    }
    CRYPTO_free(ptr);
    param_1[0xc] = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  }
  return;
}



undefined1 * ossl_ml_kem_get_vinfo(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x105238;
  if (((param_1 != 0x5af) && (puVar1 = (undefined1 *)0x105290, param_1 != 0x5b0)) &&
     (puVar1 = vinfo_map, param_1 != 0x5ae)) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



long * ossl_ml_kem_key_dup(long *param_1,uint param_2)

{
  int iVar1;
  long *ptr;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1[0x16] != 0) {
    return (long *)0x0;
  }
  if ((param_1[10] == 0) && (param_1[0xc] != 0)) {
    return (long *)0x0;
  }
  ptr = (long *)CRYPTO_memdup(param_1,0xb8,"crypto/ml_kem/ml_kem.c",0x658);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = param_1[8];
  ptr[0xc] = 0;
  *(undefined1 (*) [16])(ptr + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(ptr + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(ptr + 10) = (undefined1  [16])0x0;
  if (lVar3 != 0) {
    if (param_1[10] == 0) {
      if ((param_2 & 2) == 0) goto LAB_00103a7c;
    }
    else {
      param_2 = param_2 & 3;
      if (param_2 == 1) {
        uVar2 = CRYPTO_memdup(lVar3,*(undefined8 *)(*param_1 + 0x10),"crypto/ml_kem/ml_kem.c",0x66d)
        ;
        iVar1 = add_storage(uVar2,1,ptr);
        if (param_1[0xc] != 0) {
          ptr[0xc] = ptr[0xb] + 0x20;
        }
        if (iVar1 != 0) goto LAB_00103a7c;
        goto LAB_00103ad9;
      }
      if (param_2 != 2) {
        if (param_2 == 0) goto LAB_00103a7c;
        goto LAB_00103ad9;
      }
    }
    lVar3 = CRYPTO_memdup(lVar3,*(undefined8 *)(*param_1 + 0x20),"crypto/ml_kem/ml_kem.c",0x668);
    iVar1 = *(int *)(*ptr + 0x48);
    if (lVar3 == 0) {
      ptr[7] = (long)ptr + 0x8c;
      ptr[6] = (long)ptr + 0x6c;
LAB_00103ad9:
      CRYPTO_free(ptr);
      return (long *)0x0;
    }
    ptr[8] = lVar3;
    *(undefined1 (*) [16])((long)ptr + 0x6c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)ptr + 0x7c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)ptr + 0x8c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)ptr + 0x9c) = (undefined1  [16])0x0;
    ptr[9] = lVar3 + (long)iVar1 * 0x200;
    ptr[6] = (long)ptr + 0x6c;
    ptr[7] = (long)ptr + 0x8c;
    *(undefined1 (*) [16])(ptr + 0xb) = (undefined1  [16])0x0;
  }
LAB_00103a7c:
  EVP_MD_up_ref(ptr[2]);
  EVP_MD_up_ref(ptr[3]);
  EVP_MD_up_ref(ptr[4]);
  EVP_MD_up_ref(ptr[5]);
  return ptr;
}



void ossl_ml_kem_key_free(long *param_1)

{
  if (param_1 != (long *)0x0) {
    EVP_MD_free(param_1[2]);
    EVP_MD_free(param_1[3]);
    EVP_MD_free(param_1[4]);
    EVP_MD_free(param_1[5]);
    if ((param_1[0x16] != 0) || ((param_1[10] == 0 && (param_1[0xc] != 0)))) {
      OPENSSL_cleanse((void *)((long)param_1 + 0x6c),0x40);
      if ((void *)param_1[0x16] != (void *)0x0) {
        OPENSSL_cleanse((void *)param_1[0x16],*(size_t *)(*param_1 + 8));
        CRYPTO_free((void *)param_1[0x16]);
      }
    }
    ossl_ml_kem_key_reset(param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * ossl_ml_kem_key_new(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = ossl_ml_kem_get_vinfo(param_3);
  if (lVar1 != 0) {
    plVar2 = (long *)CRYPTO_malloc(0xb8,"crypto/ml_kem/ml_kem.c",0x634);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = param_1;
      *(undefined4 *)(plVar2 + 0xd) = 0xd;
      lVar1 = EVP_MD_fetch(param_1,"SHAKE128",param_2);
      plVar2[2] = lVar1;
      lVar1 = EVP_MD_fetch(param_1,"SHAKE256",param_2);
      plVar2[3] = lVar1;
      lVar1 = EVP_MD_fetch(param_1,"SHA3-256",param_2);
      plVar2[4] = lVar1;
      lVar1 = EVP_MD_fetch(param_1,"SHA3-512",param_2);
      plVar2[0x16] = 0;
      plVar2[5] = lVar1;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[0xb] = 0;
      plVar2[0xc] = 0;
      plVar2[8] = 0;
      plVar2[9] = 0;
      plVar2[10] = 0;
      if ((((plVar2[2] != 0) && (plVar2[3] != 0)) && (plVar2[4] != 0)) && (lVar1 != 0)) {
        return plVar2;
      }
      ossl_ml_kem_key_free(plVar2);
    }
  }
  return (long *)0x0;
}



undefined8 ossl_ml_kem_encode_public_key(undefined8 param_1,long param_2,long *param_3)

{
  if (param_3[8] == 0) {
    return 0;
  }
  if (*(long *)(*param_3 + 0x18) != param_2) {
    return 0;
  }
  encode_pubkey(param_1,param_3);
  return 1;
}



undefined8 ossl_ml_kem_encode_private_key(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar2 = param_3[10];
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = *param_3;
  if (*(long *)(lVar3 + 8) != param_2) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x48);
  if (0 < (int)uVar1) {
    lVar6 = lVar2;
    lVar8 = param_1;
    do {
      lVar7 = lVar6 + 0x200;
      scalar_encode(lVar8,lVar6,0xc);
      lVar8 = lVar8 + 0x180;
      lVar6 = lVar7;
    } while ((ulong)uVar1 * 0x200 + lVar2 != lVar7);
  }
  param_1 = param_1 + *(long *)(lVar3 + 0x30);
  encode_pubkey(param_1,param_3);
  puVar4 = (undefined8 *)param_3[7];
  puVar9 = (undefined8 *)(param_1 + *(long *)(lVar3 + 0x18));
  uVar5 = puVar4[1];
  *puVar9 = *puVar4;
  puVar9[1] = uVar5;
  uVar5 = puVar4[3];
  puVar9[2] = puVar4[2];
  puVar9[3] = uVar5;
  puVar4 = (undefined8 *)param_3[0xb];
  uVar5 = puVar4[1];
  puVar9[4] = *puVar4;
  puVar9[5] = uVar5;
  uVar5 = puVar4[3];
  puVar9[6] = puVar4[2];
  puVar9[7] = uVar5;
  return 1;
}



undefined8 ossl_ml_kem_encode_seed(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (((param_3 != 0) && (puVar1 = *(undefined8 **)(param_3 + 0x60), puVar1 != (undefined8 *)0x0))
     && (param_2 == 0x40)) {
    uVar2 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    uVar2 = puVar1[3];
    param_1[2] = puVar1[2];
    param_1[3] = uVar2;
    puVar1 = *(undefined8 **)(param_3 + 0x58);
    uVar2 = puVar1[1];
    param_1[4] = *puVar1;
    param_1[5] = uVar2;
    uVar2 = puVar1[3];
    param_1[6] = puVar1[2];
    param_1[7] = uVar2;
    return 1;
  }
  return 0;
}



long ossl_ml_kem_set_seed(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((((param_3 != 0) && (*(long *)(param_3 + 0x40) == 0)) && (*(long *)(param_3 + 0x60) == 0)) &&
     (param_2 == 0x40)) {
    *(long *)(param_3 + 0x58) = param_3 + 0x6c;
    *(long *)(param_3 + 0x60) = param_3 + 0x8c;
    uVar1 = param_1[1];
    *(undefined8 *)(param_3 + 0x8c) = *param_1;
    *(undefined8 *)(param_3 + 0x94) = uVar1;
    uVar1 = param_1[3];
    *(undefined8 *)(param_3 + 0x9c) = param_1[2];
    *(undefined8 *)(param_3 + 0xa4) = uVar1;
    uVar1 = param_1[5];
    *(undefined8 *)(param_3 + 0x6c) = param_1[4];
    *(undefined8 *)(param_3 + 0x74) = uVar1;
    uVar1 = param_1[7];
    *(undefined8 *)(param_3 + 0x7c) = param_1[6];
    *(undefined8 *)(param_3 + 0x84) = uVar1;
    return param_3;
  }
  return 0;
}



int ossl_ml_kem_parse_public_key(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if ((((param_3[8] != 0) || (param_3[0x16] != 0)) ||
      (lVar1 = *param_3, *(long *)(lVar1 + 0x18) != param_2)) ||
     (lVar3 = EVP_MD_CTX_new(), lVar3 == 0)) {
    return 0;
  }
  pvVar4 = CRYPTO_malloc((int)*(undefined8 *)(lVar1 + 0x20),"crypto/ml_kem/ml_kem.c",0x6e5);
  iVar2 = *(int *)(*param_3 + 0x48);
  if (pvVar4 != (void *)0x0) {
    param_3[8] = (long)pvVar4;
    param_3[6] = (long)param_3 + 0x6c;
    param_3[9] = (long)((long)pvVar4 + (long)iVar2 * 0x200);
    param_3[7] = (long)param_3 + 0x8c;
    *(undefined1 (*) [16])((long)param_3 + 0x6c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_3 + 0x7c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_3 + 0x8c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_3 + 0x9c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0xb) = (undefined1  [16])0x0;
    iVar2 = parse_pubkey(param_1,lVar3,param_3);
    if (iVar2 != 0) goto LAB_00104076;
  }
  ossl_ml_kem_key_reset(param_3);
  iVar2 = 0;
LAB_00104076:
  EVP_MD_CTX_free(lVar3);
  return iVar2;
}



undefined4 ossl_ml_kem_parse_private_key(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if ((((param_3[8] != 0) || (param_3[0x16] != 0)) ||
      (lVar1 = *param_3, *(long *)(lVar1 + 8) != param_2)) || (lVar5 = EVP_MD_CTX_new(), lVar5 == 0)
     ) {
    return 0;
  }
  pvVar6 = CRYPTO_malloc((int)*(undefined8 *)(lVar1 + 0x10),"crypto/ml_kem/ml_kem.c",0x701);
  iVar3 = add_storage(pvVar6,1,param_3);
  if (iVar3 != 0) {
    lVar1 = *param_3;
    iVar3 = vector_decode_12(param_3[10],param_1,*(undefined4 *)(lVar1 + 0x48));
    if (iVar3 != 0) {
      param_1 = param_1 + *(long *)(lVar1 + 0x30);
      iVar3 = parse_pubkey(param_1,lVar5,param_3);
      if (iVar3 != 0) {
        plVar2 = (long *)param_3[7];
        plVar7 = (long *)(param_1 + *(long *)(lVar1 + 0x18));
        if ((*plVar2 == *plVar7 && plVar2[1] == plVar7[1]) &&
           (plVar2[2] == plVar7[2] && plVar2[3] == plVar7[3])) {
          plVar2 = (long *)param_3[0xb];
          lVar1 = plVar7[5];
          *plVar2 = plVar7[4];
          plVar2[1] = lVar1;
          lVar1 = plVar7[7];
          plVar2[2] = plVar7[6];
          plVar2[3] = lVar1;
          uVar4 = 1;
          goto LAB_00104172;
        }
      }
    }
  }
  ossl_ml_kem_key_reset(param_3);
  uVar4 = 0;
LAB_00104172:
  EVP_MD_CTX_free(lVar5);
  return uVar4;
}



undefined8 ossl_ml_kem_genkey(long param_1,long param_2,long *param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uchar *md;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  EVP_MD_CTX *ctx;
  void *pvVar11;
  code *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  uint local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  char local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  char local_1a8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_3 != (long *)0x0) && (param_3[8] == 0)) && (param_3[0x16] == 0)) &&
     ((lVar3 = *param_3, param_1 == 0 || (*(long *)(lVar3 + 0x18) == param_2)))) {
    if (param_3[0xc] == 0) {
      iVar8 = RAND_priv_bytes_ex(param_3[1],&local_248,0x40,*(undefined4 *)(lVar3 + 0x54));
      if (0 < iVar8) goto LAB_0010429a;
    }
    else {
      iVar8 = ossl_ml_kem_encode_seed(&local_248,0x40,param_3);
      if (iVar8 != 0) {
        *(undefined1 (*) [16])(param_3 + 0xb) = (undefined1  [16])0x0;
LAB_0010429a:
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx != (EVP_MD_CTX *)0x0) {
          pvVar11 = CRYPTO_malloc((int)*(undefined8 *)(lVar3 + 0x10),"crypto/ml_kem/ml_kem.c",0x730)
          ;
          iVar8 = add_storage(pvVar11,1,param_3);
          if (iVar8 != 0) {
            pcVar12 = cbd_3;
            lVar3 = *param_3;
            local_278 = local_248;
            uStack_270 = uStack_240;
            local_268 = local_238;
            uStack_260 = uStack_230;
            uVar2 = *(uint *)(lVar3 + 0x48);
            if (*(int *)(lVar3 + 0x40) != 0x5ae) {
              pcVar12 = cbd_2;
            }
            local_258 = (char)uVar2;
            iVar8 = EVP_DigestInit_ex(ctx,(EVP_MD *)param_3[5],(ENGINE *)0x0);
            if ((iVar8 != 0) &&
               (iVar8 = single_keccak(&local_208,0x40,&local_278,0x21,ctx), iVar8 != 0)) {
              puVar4 = (undefined8 *)param_3[6];
              *puVar4 = local_208;
              puVar4[1] = uStack_200;
              puVar4[2] = local_1f8;
              puVar4[3] = uStack_1f0;
              iVar8 = matrix_expand(ctx,param_3);
              if (iVar8 != 0) {
                local_1c8 = local_1e8;
                uStack_1c0 = uStack_1e0;
                local_1b8 = local_1d8;
                uStack_1b0 = uStack_1d0;
                lVar17 = param_3[10];
                uVar25 = uVar2;
                local_1a8 = '\0';
                do {
                  cVar22 = local_1a8 + '\x01';
                  iVar8 = (*pcVar12)(lVar17,&local_1c8,ctx,param_3);
                  if (iVar8 == 0) goto LAB_00104381;
                  uVar25 = uVar25 - 1;
                  scalar_ntt(lVar17);
                  lVar17 = lVar17 + 0x200;
                  local_1a8 = cVar22;
                } while (0 < (int)uVar25);
                local_1c8 = local_1e8;
                uStack_1c0 = uStack_1e0;
                local_1b8 = local_1d8;
                uStack_1b0 = uStack_1d0;
                lVar17 = param_3[8];
                uVar25 = uVar2;
                do {
                  local_1a8 = ((char)uVar2 + cVar22) - (char)uVar25;
                  iVar8 = (*pcVar12)(lVar17,&local_1c8,ctx,param_3);
                  if (iVar8 == 0) goto LAB_00104381;
                  uVar25 = uVar25 - 1;
                  scalar_ntt(lVar17);
                  lVar17 = lVar17 + 0x200;
                } while (0 < (int)uVar25);
                lVar17 = param_3[10];
                lVar19 = param_3[9];
                uVar5 = param_3[8];
                if (0 < (int)uVar2) {
                  uVar24 = uVar5;
                  do {
                    uVar26 = uVar24 + 0x200;
                    lVar15 = 0;
                    do {
                      uVar1 = *(ushort *)(lVar19 + 2 + lVar15 * 2);
                      uVar20 = (uint)*(ushort *)(lVar17 + 2 + lVar15 * 2);
                      uVar14 = uVar1 * uVar20;
                      uVar14 = uVar14 + (int)((ulong)uVar14 * 0x13af >> 0x18) * -0xd01;
                      uVar25 = uVar14 - 0xd01;
                      uVar9 = (uint)*(ushort *)(lVar19 + lVar15 * 2);
                      uVar18 = (uint)*(ushort *)(lVar17 + lVar15 * 2);
                      uVar25 = (((uint)(ushort)((short)uVar25 >> 0xf) & (uVar14 ^ uVar25) ^ uVar25)
                               & 0xffff) * (uint)*(ushort *)((long)&kModRoots + lVar15) +
                               uVar9 * uVar18 + (uint)*(ushort *)(uVar24 + lVar15 * 2);
                      uVar6 = (short)uVar25 + (short)((ulong)uVar25 * 0x13af >> 0x18) * -0xd01;
                      uVar7 = uVar6 - 0xd01;
                      uVar25 = (uint)*(ushort *)(uVar24 + 2 + lVar15 * 2) +
                               uVar9 * uVar20 + uVar18 * uVar1;
                      *(ushort *)(uVar24 + lVar15 * 2) =
                           (short)uVar7 >> 0xf & (uVar6 ^ uVar7) ^ uVar7;
                      uVar7 = (short)uVar25 + (short)((ulong)uVar25 * 0x13af >> 0x18) * -0xd01;
                      uVar1 = uVar7 - 0xd01;
                      *(ushort *)(uVar24 + 2 + lVar15 * 2) =
                           (short)uVar1 >> 0xf & (uVar7 ^ uVar1) ^ uVar1;
                      lVar15 = lVar15 + 2;
                    } while (lVar15 != 0x100);
                    lVar15 = lVar17;
                    lVar23 = lVar19;
                    if (uVar2 != 1) {
                      do {
                        lVar21 = lVar15 + 0x200;
                        lVar16 = 0;
                        lVar23 = lVar23 + (long)(int)uVar2 * 0x200;
                        do {
                          uVar1 = *(ushort *)(lVar23 + 2 + lVar16 * 2);
                          uVar20 = (uint)*(ushort *)(lVar15 + 0x202 + lVar16 * 2);
                          uVar14 = uVar1 * uVar20;
                          uVar14 = uVar14 + (int)((ulong)uVar14 * 0x13af >> 0x18) * -0xd01;
                          uVar25 = uVar14 - 0xd01;
                          uVar9 = (uint)*(ushort *)(lVar23 + lVar16 * 2);
                          uVar18 = (uint)*(ushort *)(lVar15 + 0x200 + lVar16 * 2);
                          uVar25 = (((uint)(ushort)((short)uVar25 >> 0xf) & (uVar14 ^ uVar25) ^
                                    uVar25) & 0xffff) * (uint)*(ushort *)((long)&kModRoots + lVar16)
                                   + uVar9 * uVar18 + (uint)*(ushort *)(uVar24 + lVar16 * 2);
                          uVar6 = (short)uVar25 + (short)((ulong)uVar25 * 0x13af >> 0x18) * -0xd01;
                          uVar7 = uVar6 - 0xd01;
                          uVar25 = (uint)*(ushort *)(uVar24 + 2 + lVar16 * 2) +
                                   uVar9 * uVar20 + uVar18 * uVar1;
                          *(ushort *)(uVar24 + lVar16 * 2) =
                               (short)uVar7 >> 0xf & (uVar6 ^ uVar7) ^ uVar7;
                          uVar7 = (short)uVar25 + (short)((ulong)uVar25 * 0x13af >> 0x18) * -0xd01;
                          uVar1 = uVar7 - 0xd01;
                          *(ushort *)(uVar24 + 2 + lVar16 * 2) =
                               (short)uVar1 >> 0xf & (uVar7 ^ uVar1) ^ uVar1;
                          lVar16 = lVar16 + 2;
                        } while (lVar16 != 0x100);
                        lVar15 = lVar21;
                      } while (lVar21 != ((ulong)(uVar2 - 2) + 1) * 0x200 + lVar17);
                    }
                    lVar19 = lVar19 + 0x200;
                    uVar24 = uVar26;
                  } while (uVar26 != uVar5 + (ulong)uVar2 * 0x200);
                }
                if (param_1 == 0) {
                  md = (uchar *)param_3[7];
                  iVar8 = *(int *)(*param_3 + 0x48);
                  iVar10 = EVP_DigestInit_ex(ctx,(EVP_MD *)param_3[4],(ENGINE *)0x0);
                  if (iVar10 != 0) {
                    uVar24 = uVar5;
                    do {
                      uVar26 = uVar24 + 0x200;
                      scalar_encode(&local_1c8,uVar24,0xc);
                      iVar10 = EVP_DigestUpdate(ctx,&local_1c8,0x180);
                      if (iVar10 == 0) goto LAB_00104381;
                      uVar24 = uVar26;
                    } while (uVar26 < (long)iVar8 * 0x200 + uVar5);
                    iVar8 = EVP_DigestUpdate(ctx,(void *)param_3[6],0x20);
                    if (((iVar8 != 0) && (iVar8 = EVP_DigestFinal_ex(ctx,md,&local_27c), iVar8 != 0)
                        ) && (local_27c == 0x20)) goto LAB_001048bc;
                  }
                }
                else {
                  encode_pubkey(param_1,param_3);
                  lVar17 = param_3[7];
                  uVar13 = *(undefined8 *)(lVar3 + 0x18);
                  iVar8 = EVP_DigestInit_ex(ctx,(EVP_MD *)param_3[4],(ENGINE *)0x0);
                  if ((iVar8 != 0) &&
                     (iVar8 = single_keccak(lVar17,0x20,param_1,uVar13,ctx), iVar8 != 0)) {
LAB_001048bc:
                    puVar4 = (undefined8 *)param_3[0xb];
                    *puVar4 = local_228;
                    puVar4[1] = uStack_220;
                    puVar4[2] = local_218;
                    puVar4[3] = uStack_210;
                    lVar3 = param_3[0xb];
                    param_3[0xc] = lVar3 + 0x20;
                    if ((*(byte *)(param_3 + 0xd) & 8) == 0) {
                      OPENSSL_cleanse((void *)(lVar3 + 0x20),0x20);
                      param_3[0xc] = 0;
                    }
                    else {
                      *(undefined8 *)(lVar3 + 0x20) = local_248;
                      *(undefined8 *)(lVar3 + 0x28) = uStack_240;
                      *(undefined8 *)(lVar3 + 0x30) = local_238;
                      *(undefined8 *)(lVar3 + 0x38) = uStack_230;
                    }
                    OPENSSL_cleanse(&local_278,0x20);
                    OPENSSL_cleanse(&local_1e8,0x20);
                    OPENSSL_cleanse(&local_248,0x40);
                    EVP_MD_CTX_free(ctx);
                    uVar13 = 1;
                    goto LAB_00104210;
                  }
                }
              }
            }
LAB_00104381:
            OPENSSL_cleanse(&local_278,0x20);
            OPENSSL_cleanse(&local_1e8,0x20);
          }
          OPENSSL_cleanse(&local_248,0x40);
          EVP_MD_CTX_free(ctx);
          ossl_ml_kem_key_reset(param_3);
        }
      }
    }
  }
  uVar13 = 0;
LAB_00104210:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



undefined4
ossl_ml_kem_encap_seed
          (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
          long *param_7)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_7 != (long *)0x0) && (param_7[8] != 0)) {
    lVar2 = *param_7;
    if (((param_1 != 0) &&
        (((*(long *)(lVar2 + 0x28) == param_2 && (param_3 != 0)) && (param_4 == 0x20)))) &&
       ((param_5 != 0 && (param_6 == 0x20)))) {
      lVar4 = EVP_MD_CTX_new();
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar2 + 0x40);
        if (iVar1 == 0x5af) {
          uVar3 = encap(param_1,param_3,param_5,local_1038,lVar4,param_7);
          OPENSSL_cleanse(local_1038,0xc00);
        }
        else if (iVar1 == 0x5b0) {
          uVar3 = encap(param_1,param_3,param_5,local_1038,lVar4,param_7);
          OPENSSL_cleanse(local_1038,0x1000);
        }
        else {
          uVar3 = 0;
          if (iVar1 == 0x5ae) {
            uVar3 = encap(param_1,param_3,param_5,local_1038,lVar4,param_7);
            OPENSSL_cleanse(local_1038,0x800);
          }
        }
        EVP_MD_CTX_free(lVar4);
        goto LAB_00104a7a;
      }
    }
  }
  uVar3 = 0;
LAB_00104a7a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_ml_kem_encap_rand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (long *)0x0) {
    iVar1 = RAND_bytes_ex(param_5[1],auStack_68,0x20,*(undefined4 *)(*param_5 + 0x54));
    if (0 < iVar1) {
      uVar2 = ossl_ml_kem_encap_seed(param_1,param_2,param_3,param_4,auStack_68,0x20,param_5);
      goto LAB_00104c32;
    }
  }
  uVar2 = 0;
LAB_00104c32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_ml_kem_decap(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_1658 [4096];
  undefined1 local_658 [1576];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5[10] != 0) {
    lVar2 = *param_5;
    if (((param_2 == 0x20 && param_3 != 0) && (param_1 != 0)) &&
       (*(long *)(lVar2 + 0x28) == param_4)) {
      lVar4 = EVP_MD_CTX_new();
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar2 + 0x40);
        if (iVar1 == 0x5af) {
          uVar3 = decap(param_1,param_3,local_658,local_1658,lVar4,param_5);
          OPENSSL_cleanse(local_1658,0xc00);
        }
        else if (iVar1 == 0x5b0) {
          uVar3 = decap(param_1,param_3,local_658,local_1658,lVar4,param_5);
          OPENSSL_cleanse(local_1658,0x1000);
        }
        else {
          uVar3 = 0;
          if (iVar1 == 0x5ae) {
            uVar3 = decap(param_1,param_3,local_658,local_1658,lVar4,param_5);
            OPENSSL_cleanse(local_1658,0x800);
          }
        }
        EVP_MD_CTX_free(lVar4);
        goto LAB_00104cd8;
      }
    }
    RAND_bytes_ex(param_5[1],param_1,0x20,*(undefined4 *)(lVar2 + 0x54));
  }
  uVar3 = 0;
LAB_00104cd8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_ml_kem_pubkey_cmp(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_2 + 0x40) != 0)) {
    plVar1 = *(long **)(param_1 + 0x38);
    plVar2 = *(long **)(param_2 + 0x38);
    if ((*plVar1 == *plVar2 && plVar1[1] == plVar2[1]) &&
       (plVar1[2] == plVar2[2] && plVar1[3] == plVar2[3])) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    return (bool)(bVar3 ^ 1);
  }
  return (*(long *)(param_1 + 0x40) != 0) != (*(long *)(param_2 + 0x40) != 0);
}


