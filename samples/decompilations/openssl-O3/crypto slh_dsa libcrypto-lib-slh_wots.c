
undefined8
slh_wots_chain(long *param_1,undefined8 param_2,uint param_3,byte param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  ulong uVar8;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(long *)(lVar1 + 0xb0) + 0x18);
  pcVar3 = *(code **)(*(long *)(lVar1 + 0xa8) + 0x38);
  uVar6 = (ulong)*(uint *)(*(long *)(lVar1 + 0xa0) + 0x10);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = WPACKET_memcpy(param_7,param_2,uVar6);
      return uVar5;
    }
  }
  else {
    iVar4 = WPACKET_allocate_bytes(param_7,uVar6,&local_48);
    if (iVar4 != 0) {
      (*pcVar3)(param_6,param_3 & 0xff);
      iVar4 = (*pcVar2)(param_1,param_5,param_6,param_2,uVar6,local_48,uVar6);
      if (iVar4 != 0) {
        uVar7 = (ulong)(param_3 & 0xff);
        uVar8 = extraout_RDX;
        do {
          uVar7 = uVar7 + 1;
          if ((ulong)(long)(int)((param_3 & 0xff) + (uint)param_4) <= uVar7) {
            uVar5 = 1;
            goto LAB_00100121;
          }
          (*pcVar3)(param_6,uVar7 & 0xffffffff,uVar8);
          uVar8 = uVar6;
          iVar4 = (*pcVar2)(param_1,param_5,param_6,local_48,uVar6,local_48);
        } while (iVar4 != 0);
      }
    }
    uVar5 = 0;
LAB_00100121:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_slh_wots_pk_gen
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  ulong len;
  ulong uVar11;
  long in_FS_OFFSET;
  ulong local_9d0;
  undefined8 local_958;
  undefined8 local_950;
  undefined1 local_948 [64];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [2152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *param_1;
  local_958 = 0;
  lVar4 = *(long *)(lVar3 + 0xb0);
  lVar5 = *(long *)(lVar3 + 0xa8);
  pcVar6 = *(code **)(lVar4 + 8);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0xa0) + 0x10);
  pcVar7 = *(code **)(lVar5 + 0x28);
  iVar10 = WPACKET_init_static_len(local_948,local_8a8,0x860,0);
  if (iVar10 != 0) {
    len = (ulong)uVar1;
    (**(code **)(lVar5 + 0x50))(local_8e8,param_4);
    (**(code **)(lVar5 + 0x10))(local_8e8,5);
    (**(code **)(lVar5 + 0x20))(local_8e8,param_4);
    local_9d0 = 0;
    do {
      (*pcVar7)(local_8e8,local_9d0 & 0xffffffff);
      iVar10 = (*pcVar6)(param_1,param_3,param_2,local_8e8,local_908,0x20);
      if (iVar10 == 0) goto LAB_001003a3;
      (*pcVar7)(param_4,local_9d0 & 0xffffffff);
      lVar3 = *param_1;
      pcVar8 = *(code **)(*(long *)(lVar3 + 0xb0) + 0x18);
      pcVar9 = *(code **)(*(long *)(lVar3 + 0xa8) + 0x38);
      uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0xa0) + 0x10);
      iVar10 = WPACKET_allocate_bytes(local_948,uVar2,&local_950);
      if (iVar10 == 0) goto LAB_001003a3;
      (*pcVar9)(param_4,0);
      iVar10 = (*pcVar8)(param_1,param_3,param_4,local_908,uVar2,local_950,uVar2);
      if (iVar10 == 0) goto LAB_001003a3;
      uVar11 = 1;
      do {
        (*pcVar9)(param_4,uVar11 & 0xffffffff);
        iVar10 = (*pcVar8)(param_1,param_3,param_4,local_950,uVar2,local_950,uVar2);
        if (iVar10 == 0) goto LAB_001003a3;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0xf);
      local_9d0 = local_9d0 + 1;
    } while (local_9d0 < len * 2 + 3);
    iVar10 = WPACKET_get_total_written(local_948,&local_958);
    if (iVar10 == 0) {
LAB_001003a3:
      iVar10 = 0;
    }
    else {
      (**(code **)(lVar5 + 0x50))(local_8c8,param_4);
      (**(code **)(lVar5 + 0x10))(local_8c8,1);
      (**(code **)(lVar5 + 0x20))(local_8c8,param_4);
      iVar10 = (**(code **)(lVar4 + 0x28))
                         (param_1,param_3,local_8c8,local_8a8,local_958,param_5,param_6);
    }
    WPACKET_finish(local_948);
    OPENSSL_cleanse(local_8a8,0x860);
    OPENSSL_cleanse(local_908,len);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ossl_slh_wots_sign(long *param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
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
  unkuint9 Var27;
  undefined1 auVar28 [11];
  undefined1 auVar29 [13];
  undefined1 auVar30 [15];
  undefined1 auVar31 [11];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  int iVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined8 extraout_RDX;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 auVar44 [16];
  short sVar49;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  undefined1 auVar50 [16];
  short sVar57;
  undefined1 auVar58 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [56];
  long local_40;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *param_1;
  uVar41 = *(uint *)(*(long *)(lVar2 + 0xa0) + 0x10);
  uVar37 = (ulong)uVar41;
  uVar6 = uVar37 * 2;
  lVar3 = *(long *)(lVar2 + 0xa8);
  pcVar4 = *(code **)(lVar3 + 0x28);
  pcVar5 = *(code **)(*(long *)(lVar2 + 0xb0) + 8);
  if (uVar37 == 0) {
    uVar41 = 0;
    goto LAB_0010092b;
  }
  if (uVar37 - 1 < 0xf) {
    uVar42 = 0;
    pauVar40 = (undefined1 (*) [16])&local_88;
LAB_001005bc:
    bVar1 = (*param_2)[0];
    (*pauVar40)[1] = bVar1 & 0xf;
    (*pauVar40)[0] = bVar1 >> 4;
    if (uVar42 + 1 < uVar37) {
      bVar1 = (*param_2)[1];
      (*pauVar40)[3] = bVar1 & 0xf;
      (*pauVar40)[2] = bVar1 >> 4;
      if (uVar42 + 2 < uVar37) {
        bVar1 = (*param_2)[2];
        (*pauVar40)[5] = bVar1 & 0xf;
        (*pauVar40)[4] = bVar1 >> 4;
        if (uVar42 + 3 < uVar37) {
          bVar1 = (*param_2)[3];
          (*pauVar40)[7] = bVar1 & 0xf;
          (*pauVar40)[6] = bVar1 >> 4;
          if (uVar42 + 4 < uVar37) {
            bVar1 = (*param_2)[4];
            (*pauVar40)[9] = bVar1 & 0xf;
            (*pauVar40)[8] = bVar1 >> 4;
            if (uVar42 + 5 < uVar37) {
              bVar1 = (*param_2)[5];
              (*pauVar40)[0xb] = bVar1 & 0xf;
              (*pauVar40)[10] = bVar1 >> 4;
              if (uVar42 + 6 < uVar37) {
                bVar1 = (*param_2)[6];
                (*pauVar40)[0xd] = bVar1 & 0xf;
                (*pauVar40)[0xc] = bVar1 >> 4;
                if (uVar42 + 7 < uVar37) {
                  bVar1 = (*param_2)[7];
                  (*pauVar40)[0xf] = bVar1 & 0xf;
                  (*pauVar40)[0xe] = bVar1 >> 4;
                  if (uVar42 + 8 < uVar37) {
                    bVar1 = (*param_2)[8];
                    pauVar40[1][1] = bVar1 & 0xf;
                    pauVar40[1][0] = bVar1 >> 4;
                    if (uVar42 + 9 < uVar37) {
                      bVar1 = (*param_2)[9];
                      pauVar40[1][3] = bVar1 & 0xf;
                      pauVar40[1][2] = bVar1 >> 4;
                      if (uVar42 + 10 < uVar37) {
                        bVar1 = (*param_2)[10];
                        pauVar40[1][5] = bVar1 & 0xf;
                        pauVar40[1][4] = bVar1 >> 4;
                        if (uVar42 + 0xb < uVar37) {
                          bVar1 = (*param_2)[0xb];
                          pauVar40[1][7] = bVar1 & 0xf;
                          pauVar40[1][6] = bVar1 >> 4;
                          if (uVar42 + 0xc < uVar37) {
                            bVar1 = (*param_2)[0xc];
                            pauVar40[1][9] = bVar1 & 0xf;
                            pauVar40[1][8] = bVar1 >> 4;
                            if (uVar42 + 0xd < uVar37) {
                              bVar1 = (*param_2)[0xd];
                              pauVar40[1][0xb] = bVar1 & 0xf;
                              pauVar40[1][10] = bVar1 >> 4;
                              if (uVar42 + 0xe < uVar37) {
                                bVar1 = (*param_2)[0xe];
                                pauVar40[1][0xd] = bVar1 & 0xf;
                                pauVar40[1][0xc] = bVar1 >> 4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001007c4;
                }
              }
            }
          }
        }
      }
    }
    if (0xe < uVar6 - 1) goto LAB_001007c4;
    uVar38 = 0;
    uVar41 = 0;
    uVar37 = 0;
  }
  else {
    uVar43 = (ulong)(uVar41 >> 4);
    uVar42 = uVar43 * 0x10;
    pauVar40 = param_2 + uVar43;
    pauVar39 = (undefined1 (*) [16])&local_88;
    do {
      auVar58 = *param_2;
      param_2 = param_2 + 1;
      auVar50 = auVar58 & __LC0;
      auVar44._0_2_ = auVar58._0_2_ >> 4;
      auVar44._2_2_ = auVar58._2_2_ >> 4;
      auVar44._4_2_ = auVar58._4_2_ >> 4;
      auVar44._6_2_ = auVar58._6_2_ >> 4;
      auVar44._8_2_ = auVar58._8_2_ >> 4;
      auVar44._10_2_ = auVar58._10_2_ >> 4;
      auVar44._12_2_ = auVar58._12_2_ >> 4;
      auVar44._14_2_ = auVar58._14_2_ >> 4;
      auVar44 = auVar44 & __LC0;
      auVar64._0_14_ = auVar44._0_14_;
      auVar64[0xe] = auVar44[7];
      auVar64[0xf] = auVar50[7];
      auVar63._14_2_ = auVar64._14_2_;
      auVar63._0_13_ = auVar44._0_13_;
      auVar63[0xd] = auVar50[6];
      auVar62._13_3_ = auVar63._13_3_;
      auVar62._0_12_ = auVar44._0_12_;
      auVar62[0xc] = auVar44[6];
      auVar61._12_4_ = auVar62._12_4_;
      auVar61._0_11_ = auVar44._0_11_;
      auVar61[0xb] = auVar50[5];
      auVar60._11_5_ = auVar61._11_5_;
      auVar60._0_10_ = auVar44._0_10_;
      auVar60[10] = auVar44[5];
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._0_9_ = auVar44._0_9_;
      auVar59[9] = auVar50[4];
      auVar58._9_7_ = auVar59._9_7_;
      auVar58[8] = auVar44[4];
      auVar58[7] = auVar50[3];
      auVar58[6] = auVar44[3];
      auVar58[5] = auVar50[2];
      auVar58[4] = auVar44[2];
      auVar58[3] = auVar50[1];
      auVar58[2] = auVar44[1];
      auVar58[0] = auVar44[0];
      auVar58[1] = auVar50[0];
      pauVar39[1][0] = auVar44[8];
      pauVar39[1][1] = auVar50[8];
      pauVar39[1][2] = auVar44[9];
      pauVar39[1][3] = auVar50[9];
      pauVar39[1][4] = auVar44[10];
      pauVar39[1][5] = auVar50[10];
      pauVar39[1][6] = auVar44[0xb];
      pauVar39[1][7] = auVar50[0xb];
      pauVar39[1][8] = auVar44[0xc];
      pauVar39[1][9] = auVar50[0xc];
      pauVar39[1][10] = auVar44[0xd];
      pauVar39[1][0xb] = auVar50[0xd];
      pauVar39[1][0xc] = auVar44[0xe];
      pauVar39[1][0xd] = auVar50[0xe];
      pauVar39[1][0xe] = auVar44[0xf];
      pauVar39[1][0xf] = auVar50[0xf];
      *pauVar39 = auVar58;
      pauVar39 = pauVar39 + 2;
    } while (param_2 != pauVar40);
    pauVar40 = (undefined1 (*) [16])&local_88 + uVar43 * 2;
    if (uVar37 != uVar42) goto LAB_001005bc;
LAB_001007c4:
    sVar49 = 0;
    sVar51 = 0;
    sVar52 = 0;
    sVar53 = 0;
    sVar54 = 0;
    sVar55 = 0;
    sVar56 = 0;
    sVar57 = 0;
    uVar37 = uVar6 & 0xfffffffffffffff0;
    pauVar40 = (undefined1 (*) [16])&local_88;
    do {
      auVar58 = *pauVar40;
      pauVar40 = pauVar40 + 1;
      auVar8[0xd] = 0;
      auVar8._0_13_ = auVar58._0_13_;
      auVar8[0xe] = auVar58[7];
      auVar11[0xc] = auVar58[6];
      auVar11._0_12_ = auVar58._0_12_;
      auVar11._13_2_ = auVar8._13_2_;
      auVar14[0xb] = 0;
      auVar14._0_11_ = auVar58._0_11_;
      auVar14._12_3_ = auVar11._12_3_;
      auVar17[10] = auVar58[5];
      auVar17._0_10_ = auVar58._0_10_;
      auVar17._11_4_ = auVar14._11_4_;
      auVar20[9] = 0;
      auVar20._0_9_ = auVar58._0_9_;
      auVar20._10_5_ = auVar17._10_5_;
      auVar23[8] = auVar58[4];
      auVar23._0_8_ = auVar58._0_8_;
      auVar23._9_6_ = auVar20._9_6_;
      auVar26._7_8_ = 0;
      auVar26._0_7_ = auVar23._8_7_;
      Var27 = CONCAT81(SUB158(auVar26 << 0x40,7),auVar58[3]);
      auVar32._9_6_ = 0;
      auVar32._0_9_ = Var27;
      auVar28._1_10_ = SUB1510(auVar32 << 0x30,5);
      auVar28[0] = auVar58[2];
      auVar33._11_4_ = 0;
      auVar33._0_11_ = auVar28;
      auVar29._1_12_ = SUB1512(auVar33 << 0x20,3);
      auVar29[0] = auVar58[1];
      sVar49 = sVar49 + (ushort)auVar58[0] + (ushort)auVar58[8];
      sVar51 = sVar51 + auVar29._0_2_ + (ushort)auVar58[9];
      sVar52 = sVar52 + auVar28._0_2_ + (ushort)auVar58[10];
      sVar53 = sVar53 + (short)Var27 + (ushort)auVar58[0xb];
      sVar54 = sVar54 + auVar23._8_2_ + (ushort)auVar58[0xc];
      sVar55 = sVar55 + auVar17._10_2_ + (ushort)auVar58[0xd];
      sVar56 = sVar56 + auVar11._12_2_ + (ushort)auVar58[0xe];
      sVar57 = sVar57 + (auVar8._13_2_ >> 8) + (ushort)auVar58[0xf];
    } while ((undefined1 (*) [16])(*(undefined1 (*) [16])&local_88 + uVar37) != pauVar40);
    uVar38 = CONCAT26(sVar53 + sVar57,
                      CONCAT24(sVar52 + sVar56,CONCAT22(sVar51 + sVar55,sVar49 + sVar54)));
    uVar41 = (uint)(ushort)(sVar54 + sVar49 + sVar56 + sVar52 + sVar55 + sVar51 + sVar57 + sVar53);
    if (uVar6 == uVar37) goto LAB_0010092b;
  }
  uVar42 = uVar6 - uVar37;
  if (6 < uVar42 - 1) {
    uVar43 = *(ulong *)((long)&local_88 + uVar37);
    uVar48 = (undefined1)(uVar43 >> 0x38);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar43;
    auVar9[0xe] = uVar48;
    uVar47 = (undefined1)(uVar43 >> 0x30);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar43;
    auVar12[0xc] = uVar47;
    auVar12._13_2_ = auVar9._13_2_;
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar43;
    auVar15._12_3_ = auVar12._12_3_;
    uVar46 = (undefined1)(uVar43 >> 0x28);
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar43;
    auVar18[10] = uVar46;
    auVar18._11_4_ = auVar15._11_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar43;
    auVar21._10_5_ = auVar18._10_5_;
    uVar45 = (undefined1)(uVar43 >> 0x20);
    auVar24[8] = uVar45;
    auVar24._0_8_ = uVar43;
    auVar24._9_6_ = auVar21._9_6_;
    uVar37 = uVar37 + (uVar42 & 0xfffffffffffffff8);
    auVar7._8_6_ = 0;
    auVar7._0_8_ = uVar43;
    auVar7[0xe] = uVar48;
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar43;
    auVar10[0xc] = uVar47;
    auVar10._13_2_ = auVar7._13_2_;
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar43;
    auVar13._12_3_ = auVar10._12_3_;
    auVar16._8_2_ = 0;
    auVar16._0_8_ = uVar43;
    auVar16[10] = uVar46;
    auVar16._11_4_ = auVar13._11_4_;
    auVar19._8_2_ = 0;
    auVar19._0_8_ = uVar43;
    auVar19._10_5_ = auVar16._10_5_;
    auVar22[8] = uVar45;
    auVar22._0_8_ = uVar43;
    auVar22._9_6_ = auVar19._9_6_;
    auVar30._7_8_ = 0;
    auVar30._0_7_ = auVar22._8_7_;
    Var27 = CONCAT81(SUB158(auVar30 << 0x40,7),(char)(uVar43 >> 0x18));
    auVar34._9_6_ = 0;
    auVar34._0_9_ = Var27;
    auVar31._1_10_ = SUB1510(auVar34 << 0x30,5);
    auVar31[0] = (char)(uVar43 >> 0x10);
    auVar35._11_4_ = 0;
    auVar35._0_11_ = auVar31;
    auVar25[2] = (char)(uVar43 >> 8);
    auVar25._0_2_ = (ushort)uVar43;
    auVar25._3_12_ = SUB1512(auVar35 << 0x20,3);
    uVar41 = (uint)(ushort)(auVar24._8_2_ + ((ushort)uVar43 & 0xff) + (short)uVar38 +
                            auVar12._12_2_ + auVar31._0_2_ + (short)((ulong)uVar38 >> 0x20) +
                           auVar18._10_2_ + auVar25._2_2_ + (short)((ulong)uVar38 >> 0x10) +
                           (auVar9._13_2_ >> 8) + (short)Var27 + (short)((ulong)uVar38 >> 0x30));
    if ((uVar42 & 7) == 0) goto LAB_0010092b;
  }
  uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37);
  if ((((uVar37 + 1 < uVar6) &&
       (uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 1), uVar37 + 2 < uVar6)) &&
      (uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 2), uVar37 + 3 < uVar6)) &&
     ((uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 3), uVar37 + 4 < uVar6 &&
      (uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 4), uVar37 + 5 < uVar6)))) {
    uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 5);
    if (uVar37 + 6 < uVar6) {
      uVar41 = uVar41 + *(byte *)((long)&local_88 + uVar37 + 6);
    }
  }
LAB_0010092b:
  iVar36 = (int)uVar6 * 0xf - uVar41;
  (*(undefined1 (*) [16])&local_88)[uVar6] = (byte)((uint)iVar36 >> 8) & 0xf;
  bVar1 = (byte)iVar36;
  *(byte *)((long)&local_88 + uVar6 + 2) = bVar1 & 0xf;
  *(byte *)((long)&local_88 + uVar6 + 1) = bVar1 >> 4;
  (**(code **)(lVar3 + 0x50))(local_a8,param_5);
  (**(code **)(lVar3 + 0x10))(local_a8,5);
  (**(code **)(lVar3 + 0x20))(local_a8,param_5);
  uVar37 = 0;
  uVar38 = extraout_RDX;
  do {
    (*pcVar4)(local_a8,uVar37 & 0xffffffff,uVar38);
    iVar36 = (*pcVar5)(param_1,param_4,param_3,local_a8,local_c8,0x20);
    if (iVar36 == 0) {
LAB_001009f2:
      uVar38 = 0;
      goto LAB_001009f4;
    }
    (*pcVar4)(param_5,uVar37 & 0xffffffff);
    iVar36 = slh_wots_chain(param_1,local_c8,0,(*(undefined1 (*) [16])&local_88)[uVar37],param_4,
                            param_5);
    if (iVar36 == 0) goto LAB_001009f2;
    uVar37 = uVar37 + 1;
    uVar38 = param_6;
  } while (uVar37 < uVar6 + 3);
  uVar38 = 1;
LAB_001009f4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ossl_slh_wots_pk_from_sig
          (long *param_1,long *param_2,undefined1 (*param_3) [16],undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
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
  unkuint9 Var29;
  undefined1 auVar30 [11];
  undefined1 auVar31 [13];
  undefined1 auVar32 [15];
  undefined1 auVar33 [11];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  int iVar38;
  undefined4 uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined8 extraout_RDX;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  long in_FS_OFFSET;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  undefined1 auVar57 [16];
  undefined1 *puVar63;
  undefined8 local_960;
  undefined1 local_958 [64];
  undefined1 local_918 [32];
  undefined8 local_8f8;
  undefined1 local_8e8 [64];
  undefined1 local_8a8 [2152];
  long local_40;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_1;
  local_960 = 0;
  lVar5 = *(long *)(lVar4 + 0xb0);
  lVar6 = *(long *)(lVar4 + 0xa8);
  uVar43 = *(uint *)(*(long *)(lVar4 + 0xa0) + 0x10);
  uVar42 = (ulong)uVar43;
  pcVar7 = *(code **)(lVar6 + 0x28);
  iVar38 = WPACKET_init_static_len(local_958,local_8a8,0x860,0);
  if (iVar38 != 0) {
    uVar8 = uVar42 * 2;
    if (uVar42 == 0) {
      uVar43 = 0;
    }
    else {
      if (uVar42 - 1 < 0xf) {
        uVar44 = 0;
        pauVar40 = (undefined1 (*) [16])&local_8f8;
LAB_00100baa:
        bVar2 = (*param_3)[0];
        (*pauVar40)[1] = bVar2 & 0xf;
        (*pauVar40)[0] = bVar2 >> 4;
        if (uVar44 + 1 < uVar42) {
          bVar2 = (*param_3)[1];
          (*pauVar40)[3] = bVar2 & 0xf;
          (*pauVar40)[2] = bVar2 >> 4;
          if (uVar44 + 2 < uVar42) {
            bVar2 = (*param_3)[2];
            (*pauVar40)[5] = bVar2 & 0xf;
            (*pauVar40)[4] = bVar2 >> 4;
            if (uVar44 + 3 < uVar42) {
              bVar2 = (*param_3)[3];
              (*pauVar40)[7] = bVar2 & 0xf;
              (*pauVar40)[6] = bVar2 >> 4;
              if (uVar44 + 4 < uVar42) {
                bVar2 = (*param_3)[4];
                (*pauVar40)[9] = bVar2 & 0xf;
                (*pauVar40)[8] = bVar2 >> 4;
                if (uVar44 + 5 < uVar42) {
                  bVar2 = (*param_3)[5];
                  (*pauVar40)[0xb] = bVar2 & 0xf;
                  (*pauVar40)[10] = bVar2 >> 4;
                  if (uVar44 + 6 < uVar42) {
                    bVar2 = (*param_3)[6];
                    (*pauVar40)[0xd] = bVar2 & 0xf;
                    (*pauVar40)[0xc] = bVar2 >> 4;
                    if (uVar44 + 7 < uVar42) {
                      bVar2 = (*param_3)[7];
                      (*pauVar40)[0xf] = bVar2 & 0xf;
                      (*pauVar40)[0xe] = bVar2 >> 4;
                      if (uVar44 + 8 < uVar42) {
                        bVar2 = (*param_3)[8];
                        pauVar40[1][1] = bVar2 & 0xf;
                        pauVar40[1][0] = bVar2 >> 4;
                        if (uVar44 + 9 < uVar42) {
                          bVar2 = (*param_3)[9];
                          pauVar40[1][3] = bVar2 & 0xf;
                          pauVar40[1][2] = bVar2 >> 4;
                          if (uVar44 + 10 < uVar42) {
                            bVar2 = (*param_3)[10];
                            pauVar40[1][5] = bVar2 & 0xf;
                            pauVar40[1][4] = bVar2 >> 4;
                            if (uVar44 + 0xb < uVar42) {
                              bVar2 = (*param_3)[0xb];
                              pauVar40[1][7] = bVar2 & 0xf;
                              pauVar40[1][6] = bVar2 >> 4;
                              if (uVar44 + 0xc < uVar42) {
                                bVar2 = (*param_3)[0xc];
                                pauVar40[1][9] = bVar2 & 0xf;
                                pauVar40[1][8] = bVar2 >> 4;
                                if (uVar44 + 0xd < uVar42) {
                                  bVar2 = (*param_3)[0xd];
                                  pauVar40[1][0xb] = bVar2 & 0xf;
                                  pauVar40[1][10] = bVar2 >> 4;
                                  if (uVar44 + 0xe < uVar42) {
                                    bVar2 = (*param_3)[0xe];
                                    pauVar40[1][0xd] = bVar2 & 0xf;
                                    pauVar40[1][0xc] = bVar2 >> 4;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_00100d98;
                    }
                  }
                }
              }
            }
          }
        }
        if (0xe < uVar8 - 1) goto LAB_00100d98;
        sVar53 = 0;
        sVar54 = 0;
        sVar55 = 0;
        sVar56 = 0;
        uVar43 = 0;
        uVar44 = 0;
      }
      else {
        uVar45 = (ulong)(uVar43 >> 4);
        uVar44 = uVar45 * 0x10;
        pauVar40 = param_3 + uVar45;
        pauVar41 = (undefined1 (*) [16])&local_8f8;
        do {
          auVar52 = *param_3;
          param_3 = param_3 + 1;
          auVar51 = auVar52 & __LC0;
          auVar46._0_2_ = auVar52._0_2_ >> 4;
          auVar46._2_2_ = auVar52._2_2_ >> 4;
          auVar46._4_2_ = auVar52._4_2_ >> 4;
          auVar46._6_2_ = auVar52._6_2_ >> 4;
          auVar46._8_2_ = auVar52._8_2_ >> 4;
          auVar46._10_2_ = auVar52._10_2_ >> 4;
          auVar46._12_2_ = auVar52._12_2_ >> 4;
          auVar46._14_2_ = auVar52._14_2_ >> 4;
          auVar46 = auVar46 & __LC0;
          auVar62._0_14_ = auVar46._0_14_;
          auVar62[0xe] = auVar46[7];
          auVar62[0xf] = auVar51[7];
          auVar61._14_2_ = auVar62._14_2_;
          auVar61._0_13_ = auVar46._0_13_;
          auVar61[0xd] = auVar51[6];
          auVar60._13_3_ = auVar61._13_3_;
          auVar60._0_12_ = auVar46._0_12_;
          auVar60[0xc] = auVar46[6];
          auVar59._12_4_ = auVar60._12_4_;
          auVar59._0_11_ = auVar46._0_11_;
          auVar59[0xb] = auVar51[5];
          auVar58._11_5_ = auVar59._11_5_;
          auVar58._0_10_ = auVar46._0_10_;
          auVar58[10] = auVar46[5];
          auVar57._10_6_ = auVar58._10_6_;
          auVar57._0_9_ = auVar46._0_9_;
          auVar57[9] = auVar51[4];
          auVar52._9_7_ = auVar57._9_7_;
          auVar52[8] = auVar46[4];
          auVar52[7] = auVar51[3];
          auVar52[6] = auVar46[3];
          auVar52[5] = auVar51[2];
          auVar52[4] = auVar46[2];
          auVar52[3] = auVar51[1];
          auVar52[2] = auVar46[1];
          auVar52[0] = auVar46[0];
          auVar52[1] = auVar51[0];
          pauVar41[1][0] = auVar46[8];
          pauVar41[1][1] = auVar51[8];
          pauVar41[1][2] = auVar46[9];
          pauVar41[1][3] = auVar51[9];
          pauVar41[1][4] = auVar46[10];
          pauVar41[1][5] = auVar51[10];
          pauVar41[1][6] = auVar46[0xb];
          pauVar41[1][7] = auVar51[0xb];
          pauVar41[1][8] = auVar46[0xc];
          pauVar41[1][9] = auVar51[0xc];
          pauVar41[1][10] = auVar46[0xd];
          pauVar41[1][0xb] = auVar51[0xd];
          pauVar41[1][0xc] = auVar46[0xe];
          pauVar41[1][0xd] = auVar51[0xe];
          pauVar41[1][0xe] = auVar46[0xf];
          pauVar41[1][0xf] = auVar51[0xf];
          *pauVar41 = auVar52;
          pauVar41 = pauVar41 + 2;
        } while (param_3 != pauVar40);
        pauVar40 = (undefined1 (*) [16])&local_8f8 + uVar45 * 2;
        if (uVar42 != uVar44) goto LAB_00100baa;
LAB_00100d98:
        uVar44 = uVar8 & 0xfffffffffffffff0;
        pauVar40 = (undefined1 (*) [16])&local_8f8;
        auVar52 = (undefined1  [16])0x0;
        do {
          auVar46 = *pauVar40;
          pauVar40 = pauVar40 + 1;
          auVar10[0xd] = 0;
          auVar10._0_13_ = auVar46._0_13_;
          auVar10[0xe] = auVar46[7];
          auVar13[0xc] = auVar46[6];
          auVar13._0_12_ = auVar46._0_12_;
          auVar13._13_2_ = auVar10._13_2_;
          auVar16[0xb] = 0;
          auVar16._0_11_ = auVar46._0_11_;
          auVar16._12_3_ = auVar13._12_3_;
          auVar19[10] = auVar46[5];
          auVar19._0_10_ = auVar46._0_10_;
          auVar19._11_4_ = auVar16._11_4_;
          auVar22[9] = 0;
          auVar22._0_9_ = auVar46._0_9_;
          auVar22._10_5_ = auVar19._10_5_;
          auVar25[8] = auVar46[4];
          auVar25._0_8_ = auVar46._0_8_;
          auVar25._9_6_ = auVar22._9_6_;
          auVar28._7_8_ = 0;
          auVar28._0_7_ = auVar25._8_7_;
          Var29 = CONCAT81(SUB158(auVar28 << 0x40,7),auVar46[3]);
          auVar34._9_6_ = 0;
          auVar34._0_9_ = Var29;
          auVar30._1_10_ = SUB1510(auVar34 << 0x30,5);
          auVar30[0] = auVar46[2];
          auVar35._11_4_ = 0;
          auVar35._0_11_ = auVar30;
          auVar31._1_12_ = SUB1512(auVar35 << 0x20,3);
          auVar31[0] = auVar46[1];
          auVar51._0_2_ = auVar52._0_2_ + (ushort)auVar46[0] + (ushort)auVar46[8];
          auVar51._2_2_ = auVar52._2_2_ + auVar31._0_2_ + (ushort)auVar46[9];
          auVar51._4_2_ = auVar52._4_2_ + auVar30._0_2_ + (ushort)auVar46[10];
          auVar51._6_2_ = auVar52._6_2_ + (short)Var29 + (ushort)auVar46[0xb];
          auVar51._8_2_ = auVar52._8_2_ + auVar25._8_2_ + (ushort)auVar46[0xc];
          auVar51._10_2_ = auVar52._10_2_ + auVar19._10_2_ + (ushort)auVar46[0xd];
          auVar51._12_2_ = auVar52._12_2_ + auVar13._12_2_ + (ushort)auVar46[0xe];
          auVar51._14_2_ = auVar52._14_2_ + (auVar10._13_2_ >> 8) + (ushort)auVar46[0xf];
          auVar52 = auVar51;
        } while ((undefined1 (*) [16])(*(undefined1 (*) [16])&local_8f8 + uVar44) != pauVar40);
        sVar53 = auVar51._0_2_ + auVar51._8_2_;
        sVar54 = auVar51._2_2_ + auVar51._10_2_;
        sVar55 = auVar51._4_2_ + auVar51._12_2_;
        sVar56 = auVar51._6_2_ + auVar51._14_2_;
        uVar43 = (uint)(ushort)(auVar51._8_2_ + auVar51._0_2_ + auVar51._12_2_ + auVar51._4_2_ +
                               auVar51._10_2_ + auVar51._2_2_ + auVar51._14_2_ + auVar51._6_2_);
        if (uVar8 == uVar44) goto LAB_00100f08;
      }
      uVar45 = uVar8 - uVar44;
      if (6 < uVar45 - 1) {
        uVar1 = *(ulong *)((long)&local_8f8 + uVar44);
        uVar50 = (undefined1)(uVar1 >> 0x38);
        auVar11._8_6_ = 0;
        auVar11._0_8_ = uVar1;
        auVar11[0xe] = uVar50;
        uVar49 = (undefined1)(uVar1 >> 0x30);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar1;
        auVar14[0xc] = uVar49;
        auVar14._13_2_ = auVar11._13_2_;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar1;
        auVar17._12_3_ = auVar14._12_3_;
        uVar48 = (undefined1)(uVar1 >> 0x28);
        auVar20._8_2_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20[10] = uVar48;
        auVar20._11_4_ = auVar17._11_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar1;
        auVar23._10_5_ = auVar20._10_5_;
        uVar47 = (undefined1)(uVar1 >> 0x20);
        auVar26[8] = uVar47;
        auVar26._0_8_ = uVar1;
        auVar26._9_6_ = auVar23._9_6_;
        uVar44 = uVar44 + (uVar45 & 0xfffffffffffffff8);
        auVar9._8_6_ = 0;
        auVar9._0_8_ = uVar1;
        auVar9[0xe] = uVar50;
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar1;
        auVar12[0xc] = uVar49;
        auVar12._13_2_ = auVar9._13_2_;
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar1;
        auVar15._12_3_ = auVar12._12_3_;
        auVar18._8_2_ = 0;
        auVar18._0_8_ = uVar1;
        auVar18[10] = uVar48;
        auVar18._11_4_ = auVar15._11_4_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar1;
        auVar21._10_5_ = auVar18._10_5_;
        auVar24[8] = uVar47;
        auVar24._0_8_ = uVar1;
        auVar24._9_6_ = auVar21._9_6_;
        auVar32._7_8_ = 0;
        auVar32._0_7_ = auVar24._8_7_;
        Var29 = CONCAT81(SUB158(auVar32 << 0x40,7),(char)(uVar1 >> 0x18));
        auVar36._9_6_ = 0;
        auVar36._0_9_ = Var29;
        auVar33._1_10_ = SUB1510(auVar36 << 0x30,5);
        auVar33[0] = (char)(uVar1 >> 0x10);
        auVar37._11_4_ = 0;
        auVar37._0_11_ = auVar33;
        auVar27[2] = (char)(uVar1 >> 8);
        auVar27._0_2_ = (ushort)uVar1;
        auVar27._3_12_ = SUB1512(auVar37 << 0x20,3);
        uVar43 = (uint)(ushort)(auVar26._8_2_ + ((ushort)uVar1 & 0xff) + sVar53 +
                                auVar14._12_2_ + auVar33._0_2_ + sVar55 +
                               auVar20._10_2_ + auVar27._2_2_ + sVar54 +
                               (auVar11._13_2_ >> 8) + (short)Var29 + sVar56);
        if ((uVar45 & 7) == 0) goto LAB_00100f08;
      }
      uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44);
      if ((((uVar44 + 1 < uVar8) &&
           (uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 1), uVar44 + 2 < uVar8)) &&
          (uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 2), uVar44 + 3 < uVar8)) &&
         ((uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 3), uVar44 + 4 < uVar8 &&
          (uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 4), uVar44 + 5 < uVar8)))) {
        uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 5);
        if (uVar44 + 6 < uVar8) {
          uVar43 = uVar43 + *(byte *)((long)&local_8f8 + uVar44 + 6);
        }
      }
    }
LAB_00100f08:
    uVar44 = 0;
    iVar38 = (int)uVar8 * 0xf - uVar43;
    (*(undefined1 (*) [16])&local_8f8)[uVar8] = (byte)((uint)iVar38 >> 8) & 0xf;
    bVar2 = (byte)iVar38;
    *(byte *)((long)&local_8f8 + uVar8 + 2) = bVar2 & 0xf;
    *(byte *)((long)&local_8f8 + uVar8 + 1) = bVar2 >> 4;
    do {
      (*pcVar7)(param_5,uVar44 & 0xffffffff);
      if ((ulong)param_2[1] < uVar42) goto LAB_00101030;
      lVar4 = *param_2;
      param_2[1] = param_2[1] - uVar42;
      *param_2 = lVar4 + uVar42;
      cVar3 = (*(undefined1 (*) [16])&local_8f8)[uVar44];
      puVar63 = local_958;
      iVar38 = slh_wots_chain(param_1,lVar4,cVar3,'\x0f' - cVar3,param_4,param_5);
      if (iVar38 == 0) goto LAB_00101030;
      uVar44 = uVar44 + 1;
    } while (uVar44 < uVar8 + 3);
    (**(code **)(lVar6 + 0x50))(local_918,param_5,extraout_RDX,puVar63);
    (**(code **)(lVar6 + 0x10))(local_918,1);
    (**(code **)(lVar6 + 0x20))(local_918,param_5);
    iVar38 = WPACKET_get_total_written(local_958,&local_960);
    if (iVar38 == 0) {
LAB_00101030:
      uVar39 = 0;
    }
    else {
      uVar39 = (**(code **)(lVar5 + 0x28))
                         (param_1,param_4,local_918,local_8a8,local_960,param_6,param_7);
    }
    iVar38 = WPACKET_finish(local_958);
    if (iVar38 != 0) goto LAB_00101040;
  }
  uVar39 = 0;
LAB_00101040:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar39;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


