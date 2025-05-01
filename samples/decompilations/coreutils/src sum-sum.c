
/* WARNING: Unknown calling convention */

int bsd_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  byte bVar1;
  byte *__ptr;
  long lVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  __ptr = (byte *)malloc(0x8000);
  if (__ptr == (byte *)0x0) {
    return -1;
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
    lVar2 = __fread_unlocked_chk(__ptr + uVar10,uVar7 - uVar10,1,0x8000 - uVar10,stream);
    uVar10 = uVar10 + lVar2;
    if (uVar10 != 0x8000) {
      if (lVar2 != 0) goto code_r0x00100053;
      if ((stream->_flags & 0x20U) == 0) goto LAB_001000ed;
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
  iVar6 = -1;
LAB_0010013f:
  free(__ptr);
  return iVar6;
code_r0x00100053:
  if ((stream->_flags & 0x10U) == 0) goto LAB_0010005c;
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
    iVar6 = 0;
    *(uint *)resstream = uVar9;
    *length = uVar8 + uVar10;
    goto LAB_0010013f;
  }
  goto LAB_001000d1;
}



/* WARNING: Unknown calling convention */

int sysv_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

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
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  
  __ptr = (undefined1 (*) [16])malloc(0x8000);
  if (__ptr == (undefined1 (*) [16])0x0) {
    return -1;
  }
  uVar29 = 0;
  uVar30 = 0;
  do {
    uVar31 = 0;
LAB_001001bc:
    uVar28 = 0x8000;
    if (0x7fff < uVar31) {
      uVar28 = uVar31;
    }
    lVar25 = __fread_unlocked_chk(*__ptr + uVar31,uVar28 - uVar31,1,0x8000 - uVar31,stream);
    uVar31 = uVar31 + lVar25;
    if (uVar31 != 0x8000) {
      if (lVar25 != 0) goto code_r0x001001b3;
      if ((stream->_flags & 0x20U) == 0) goto LAB_00100295;
      goto LAB_00100282;
    }
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    pauVar27 = __ptr;
    do {
      auVar1 = *pauVar27;
      pauVar27 = pauVar27 + 1;
      uVar33 = CONCAT13(0,CONCAT12(auVar1[9],(ushort)auVar1[8]));
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
      auVar9._0_4_ = uVar33;
      auVar9[5] = 0;
      auVar9._6_7_ = SUB137(auVar20 << 0x40,6);
      iVar34 = iVar34 + (uint)auVar13._8_2_ + (auVar14._0_4_ & 0xffff) +
                        (uVar33 & 0xffff) + (uint)auVar1[0xc];
      iVar35 = iVar35 + (uint)auVar11._10_2_ + auVar6._4_4_ + auVar9._4_4_ + (uint)auVar1[0xd];
      iVar36 = iVar36 + (uVar10 >> 8 & 0xffff) + (int)uVar23 + auVar8._8_4_ + (uint)auVar1[0xe];
      iVar37 = iVar37 + (uVar10 >> 0x18) + (auVar2._10_4_ >> 0x10) +
                        (uint)(uint3)(auVar7._10_3_ >> 0x10) + (uint)auVar1[0xf];
    } while (pauVar27 != __ptr + 0x800);
    uVar29 = uVar29 + iVar34 + iVar36 + iVar35 + iVar37;
    bVar32 = uVar30 < 0xffffffffffff8000;
    uVar30 = uVar30 + 0x8000;
  } while (bVar32);
LAB_00100277:
  piVar26 = __errno_location();
  *piVar26 = 0x4b;
LAB_00100282:
  iVar34 = -1;
LAB_001002eb:
  free(__ptr);
  return iVar34;
code_r0x001001b3:
  if ((stream->_flags & 0x10U) == 0) goto LAB_001001bc;
LAB_00100295:
  pauVar27 = __ptr;
  if (uVar31 == 0) goto LAB_001002c4;
  do {
    puVar24 = *pauVar27;
    uVar29 = uVar29 + (byte)(*pauVar27)[0];
    pauVar27 = (undefined1 (*) [16])(puVar24 + 1);
  } while ((undefined1 (*) [16])(*__ptr + uVar31) != (undefined1 (*) [16])(puVar24 + 1));
  if (!CARRY8(uVar30,uVar31)) {
LAB_001002c4:
    *(uint *)resstream =
         ((int)((uVar29 & 0xffff) + (uVar29 >> 0x10)) >> 0x10) +
         ((uVar29 >> 0x10) + uVar29 & 0xffff);
    iVar34 = 0;
    *length = uVar30 + uVar31;
    goto LAB_001002eb;
  }
  goto LAB_00100277;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void output_bsd(char *file,int binary_file,void *digest,_Bool raw,_Bool tagged,uchar delim,
               _Bool args,uintmax_t length)

{
  long lVar1;
  byte *pbVar2;
  uchar *puVar3;
  uint16_t uVar4;
  _IO_FILE *p_Var5;
  int iVar6;
  undefined8 uVar7;
  uint16_t *puVar8;
  long in_FS_OFFSET;
  uint16_t out_int;
  char hbuf [652];
  uint16_t *puVar9;
  
  p_Var5 = _stdout;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (raw) {
                    /* WARNING: Load size is inaccurate */
    out_int = *digest << 8 | *digest >> 8;
    puVar9 = &out_int;
    do {
      puVar8 = (uint16_t *)((long)puVar9 + 1);
      pbVar2 = (byte *)p_Var5->_IO_write_ptr;
      uVar4 = *puVar9;
      if (pbVar2 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = (byte)uVar4;
      }
      else {
        iVar6 = __overflow(p_Var5,(uint)(byte)uVar4);
        if (iVar6 == -1) break;
      }
      puVar9 = puVar8;
    } while (puVar8 != (uint16_t *)hbuf);
  }
  else {
    uVar7 = human_readable(length,hbuf,0,1,0x400);
                    /* WARNING: Load size is inaccurate */
    __printf_chk(2,"%05d %5s",*digest,uVar7);
    if (args) {
      __printf_chk(2,&_LC1,file);
    }
    puVar3 = (uchar *)_stdout->_IO_write_ptr;
    if (puVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(puVar3 + 1);
      *puVar3 = delim;
    }
    else {
      __overflow(_stdout,(uint)delim);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void output_sysv(char *file,int binary_file,void *digest,_Bool raw,_Bool tagged,uchar delim,
                _Bool args,uintmax_t length)

{
  long lVar1;
  byte *pbVar2;
  uchar *puVar3;
  uint16_t uVar4;
  _IO_FILE *p_Var5;
  int iVar6;
  undefined8 uVar7;
  uint16_t *puVar8;
  long in_FS_OFFSET;
  uint16_t out_int;
  char hbuf [652];
  uint16_t *puVar9;
  
  p_Var5 = _stdout;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (raw) {
                    /* WARNING: Load size is inaccurate */
    out_int = *digest << 8 | *digest >> 8;
    puVar9 = &out_int;
    do {
      puVar8 = (uint16_t *)((long)puVar9 + 1);
      pbVar2 = (byte *)p_Var5->_IO_write_ptr;
      uVar4 = *puVar9;
      if (pbVar2 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = (byte)uVar4;
      }
      else {
        iVar6 = __overflow(p_Var5,(uint)(byte)uVar4);
        if (iVar6 == -1) break;
      }
      puVar9 = puVar8;
    } while (puVar8 != (uint16_t *)hbuf);
  }
  else {
    uVar7 = human_readable(length,hbuf,0,1,0x200);
                    /* WARNING: Load size is inaccurate */
    __printf_chk(2,"%d %s",*digest,uVar7);
    if (args) {
      __printf_chk(2,&_LC1,file);
    }
    puVar3 = (uchar *)_stdout->_IO_write_ptr;
    if (puVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(puVar3 + 1);
      *puVar3 = delim;
    }
    else {
      __overflow(_stdout,(uint)delim);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


