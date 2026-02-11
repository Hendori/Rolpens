
undefined8 bsd_sum_stream(uint *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  byte *__ptr;
  long lVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  __ptr = (byte *)malloc(0x8000);
  if (__ptr == (byte *)0x0) {
    return 0xffffffff;
  }
  uVar9 = 0;
  uVar8 = 0;
  do {
    uVar10 = 0;
LAB_0010005c:
    uVar7 = 0x8000;
    if (0x7fff < uVar10) {
      uVar7 = uVar10;
    }
    lVar2 = __fread_unlocked_chk(__ptr + uVar10,uVar7 - uVar10,1,0x8000 - uVar10,param_1);
    uVar10 = uVar10 + lVar2;
    if (uVar10 != 0x8000) {
      if (lVar2 != 0) goto code_r0x00100053;
      if ((*param_1 & 0x20) == 0) goto LAB_001000ed;
      goto LAB_001000dc;
    }
    pbVar4 = __ptr;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + (uint)bVar1 & 0xffff;
    } while (pbVar4 != __ptr + 0x8000);
    bVar11 = uVar8 < 0xffffffffffff8000;
    uVar8 = uVar8 + 0x8000;
  } while (bVar11);
LAB_001000d1:
  piVar3 = __errno_location();
  *piVar3 = 0x4b;
LAB_001000dc:
  uVar6 = 0xffffffff;
LAB_0010013f:
  free(__ptr);
  return uVar6;
code_r0x00100053:
  if ((*param_1 & 0x10) == 0) goto LAB_0010005c;
LAB_001000ed:
  pbVar4 = __ptr;
  if (uVar10 == 0) goto LAB_0010012e;
  do {
    pbVar5 = pbVar4 + 1;
    uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + (uint)*pbVar4 & 0xffff;
    pbVar4 = pbVar5;
  } while (pbVar5 != __ptr + uVar10);
  if (!CARRY8(uVar8,uVar10)) {
LAB_0010012e:
    uVar6 = 0;
    *param_2 = uVar9;
    *param_3 = uVar8 + uVar10;
    goto LAB_0010013f;
  }
  goto LAB_001000d1;
}



undefined8 sysv_sum_stream(uint *param_1,int *param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  uint uVar10;
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  unkuint9 Var16;
  undefined1 auVar17 [11];
  undefined1 auVar18 [13];
  undefined1 auVar19 [14];
  undefined1 auVar20 [13];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  uint6 uVar23;
  undefined1 *puVar24;
  undefined1 (*__ptr) [16];
  long lVar25;
  int *piVar26;
  undefined1 (*pauVar27) [16];
  undefined8 uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  bool bVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  
  __ptr = (undefined1 (*) [16])malloc(0x8000);
  if (__ptr == (undefined1 (*) [16])0x0) {
    return 0xffffffff;
  }
  uVar30 = 0;
  uVar31 = 0;
  do {
    uVar32 = 0;
LAB_001001bc:
    uVar29 = 0x8000;
    if (0x7fff < uVar32) {
      uVar29 = uVar32;
    }
    lVar25 = __fread_unlocked_chk(*__ptr + uVar32,uVar29 - uVar32,1,0x8000 - uVar32,param_1);
    uVar32 = uVar32 + lVar25;
    if (uVar32 != 0x8000) {
      if (lVar25 != 0) goto code_r0x001001b3;
      if ((*param_1 & 0x20) == 0) goto LAB_00100295;
      goto LAB_00100282;
    }
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar38 = 0;
    pauVar27 = __ptr;
    do {
      auVar1 = *pauVar27;
      pauVar27 = pauVar27 + 1;
      uVar34 = CONCAT13(0,CONCAT12(auVar1[9],(ushort)auVar1[8]));
      auVar3[0xd] = 0;
      auVar3._0_13_ = auVar1._0_13_;
      auVar3[0xe] = auVar1[7];
      auVar4[0xc] = auVar1[6];
      auVar4._0_12_ = auVar1._0_12_;
      auVar4._13_2_ = auVar3._13_2_;
      auVar5[0xb] = 0;
      auVar5._0_11_ = auVar1._0_11_;
      auVar5._12_3_ = auVar4._12_3_;
      uVar10 = auVar5._11_4_;
      auVar11[10] = auVar1[5];
      auVar11._0_10_ = auVar1._0_10_;
      auVar11._11_4_ = uVar10;
      auVar12[9] = 0;
      auVar12._0_9_ = auVar1._0_9_;
      auVar12._10_5_ = auVar11._10_5_;
      auVar13[8] = auVar1[4];
      auVar13._0_8_ = auVar1._0_8_;
      auVar13._9_6_ = auVar12._9_6_;
      auVar15._7_8_ = 0;
      auVar15._0_7_ = auVar13._8_7_;
      Var16 = CONCAT81(SUB158(auVar15 << 0x40,7),auVar1[3]);
      auVar21._9_6_ = 0;
      auVar21._0_9_ = Var16;
      auVar17._1_10_ = SUB1510(auVar21 << 0x30,5);
      auVar17[0] = auVar1[2];
      auVar22._11_4_ = 0;
      auVar22._0_11_ = auVar17;
      auVar18._1_12_ = SUB1512(auVar22 << 0x20,3);
      auVar18[0] = auVar1[1];
      auVar14[1] = 0;
      auVar14[0] = auVar1[0];
      auVar14._2_13_ = auVar18;
      auVar2._10_2_ = 0;
      auVar2._0_10_ = auVar14._0_10_;
      auVar2._12_2_ = (short)Var16;
      uVar23 = CONCAT42(auVar2._10_4_,auVar17._0_2_);
      auVar19._6_8_ = 0;
      auVar19._0_6_ = uVar23;
      auVar6._4_2_ = auVar18._0_2_;
      auVar6._0_4_ = auVar14._0_4_;
      auVar6._6_8_ = SUB148(auVar19 << 0x40,6);
      auVar7[0xc] = auVar1[0xb];
      auVar7._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
      auVar8._10_3_ = auVar7._10_3_;
      auVar8._0_10_ = (unkuint10)auVar1[10] << 0x40;
      auVar20._5_8_ = 0;
      auVar20._0_5_ = auVar8._8_5_;
      auVar9[4] = auVar1[9];
      auVar9._0_4_ = uVar34;
      auVar9[5] = 0;
      auVar9._6_7_ = SUB137(auVar20 << 0x40,6);
      iVar35 = iVar35 + (uint)auVar13._8_2_ + (auVar14._0_4_ & 0xffff) +
                        (uVar34 & 0xffff) + (uint)auVar1[0xc];
      iVar36 = iVar36 + (uint)auVar11._10_2_ + auVar6._4_4_ + auVar9._4_4_ + (uint)auVar1[0xd];
      iVar37 = iVar37 + (uVar10 >> 8 & 0xffff) + (int)uVar23 + auVar8._8_4_ + (uint)auVar1[0xe];
      iVar38 = iVar38 + (uVar10 >> 0x18) + (auVar2._10_4_ >> 0x10) +
                        (uint)(uint3)(auVar7._10_3_ >> 0x10) + (uint)auVar1[0xf];
    } while (pauVar27 != __ptr + 0x800);
    uVar30 = uVar30 + iVar35 + iVar37 + iVar36 + iVar38;
    bVar33 = uVar31 < 0xffffffffffff8000;
    uVar31 = uVar31 + 0x8000;
  } while (bVar33);
LAB_00100277:
  piVar26 = __errno_location();
  *piVar26 = 0x4b;
LAB_00100282:
  uVar28 = 0xffffffff;
LAB_001002eb:
  free(__ptr);
  return uVar28;
code_r0x001001b3:
  if ((*param_1 & 0x10) == 0) goto LAB_001001bc;
LAB_00100295:
  pauVar27 = __ptr;
  if (uVar32 == 0) goto LAB_001002c4;
  do {
    puVar24 = *pauVar27;
    uVar30 = uVar30 + (byte)(*pauVar27)[0];
    pauVar27 = (undefined1 (*) [16])(puVar24 + 1);
  } while ((undefined1 (*) [16])(*__ptr + uVar32) != (undefined1 (*) [16])(puVar24 + 1));
  if (!CARRY8(uVar31,uVar32)) {
LAB_001002c4:
    *param_2 = ((int)((uVar30 & 0xffff) + (uVar30 >> 0x10)) >> 0x10) +
               ((uVar30 >> 0x10) + uVar30 & 0xffff);
    uVar28 = 0;
    *param_3 = uVar31 + uVar32;
    goto LAB_001002eb;
  }
  goto LAB_00100277;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_bsd(undefined8 param_1,undefined8 param_2,ushort *param_3,char param_4,
               undefined8 param_5,byte param_6,char param_7,undefined8 param_8)

{
  byte *pbVar1;
  ushort uVar2;
  _IO_FILE *p_Var3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  ushort local_2ca;
  ushort local_2c8 [332];
  long local_30;
  ushort *puVar7;
  
  p_Var3 = _stdout;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == '\0') {
    uVar5 = human_readable(param_8,local_2c8,0,1,0x400);
    __printf_chk(2,"%05d %5s",*(undefined4 *)param_3,uVar5);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC1,param_1);
    }
    pbVar1 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
      *pbVar1 = param_6;
    }
    else {
      __overflow(_stdout,(uint)param_6);
    }
  }
  else {
    local_2ca = *param_3 << 8 | *param_3 >> 8;
    puVar7 = &local_2ca;
    do {
      puVar6 = (ushort *)((long)puVar7 + 1);
      pbVar1 = (byte *)p_Var3->_IO_write_ptr;
      uVar2 = *puVar7;
      if (pbVar1 < p_Var3->_IO_write_end) {
        p_Var3->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = (byte)uVar2;
      }
      else {
        iVar4 = __overflow(p_Var3,(uint)(byte)uVar2);
        if (iVar4 == -1) break;
      }
      puVar7 = puVar6;
    } while (puVar6 != local_2c8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_sysv(undefined8 param_1,undefined8 param_2,ushort *param_3,char param_4,
                undefined8 param_5,byte param_6,char param_7,undefined8 param_8)

{
  byte *pbVar1;
  ushort uVar2;
  _IO_FILE *p_Var3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  ushort local_2ca;
  ushort local_2c8 [332];
  long local_30;
  ushort *puVar7;
  
  p_Var3 = _stdout;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == '\0') {
    uVar5 = human_readable(param_8,local_2c8,0,1,0x200);
    __printf_chk(2,"%d %s",*(undefined4 *)param_3,uVar5);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC1,param_1);
    }
    pbVar1 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
      *pbVar1 = param_6;
    }
    else {
      __overflow(_stdout,(uint)param_6);
    }
  }
  else {
    local_2ca = *param_3 << 8 | *param_3 >> 8;
    puVar7 = &local_2ca;
    do {
      puVar6 = (ushort *)((long)puVar7 + 1);
      pbVar1 = (byte *)p_Var3->_IO_write_ptr;
      uVar2 = *puVar7;
      if (pbVar1 < p_Var3->_IO_write_end) {
        p_Var3->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = (byte)uVar2;
      }
      else {
        iVar4 = __overflow(p_Var3,(uint)(byte)uVar2);
        if (iVar4 == -1) break;
      }
      puVar7 = puVar6;
    } while (puVar6 != local_2c8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


