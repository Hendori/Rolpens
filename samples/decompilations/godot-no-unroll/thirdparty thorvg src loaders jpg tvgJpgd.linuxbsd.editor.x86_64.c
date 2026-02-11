
/* jpeg_decoder_mem_stream::read(unsigned char*, int, bool*) */

uint __thiscall
jpeg_decoder_mem_stream::read
          (jpeg_decoder_mem_stream *this,uchar *param_1,int param_2,bool *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)(this + 8);
  *param_3 = false;
  if (lVar2 == 0) {
    param_2 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(this + 0x10);
    uVar3 = *(int *)(this + 0x14) - uVar1;
    if (uVar3 < (uint)param_2) {
      *param_3 = true;
      param_2 = uVar3;
    }
    memcpy(param_1,(void *)(lVar2 + (ulong)uVar1),(long)param_2);
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
  }
  return param_2;
}



/* jpeg_decoder_file_stream::read(unsigned char*, int, bool*) */

ulong __thiscall
jpeg_decoder_file_stream::read
          (jpeg_decoder_file_stream *this,uchar *param_1,int param_2,bool *param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    if (this[0x10] != (jpeg_decoder_file_stream)0x0) {
      *param_3 = true;
      return 0;
    }
    if (this[0x11] == (jpeg_decoder_file_stream)0x0) {
      sVar2 = fread(param_1,1,(long)param_2,*(FILE **)(this + 8));
      if (param_2 <= (int)sVar2) {
        return sVar2 & 0xffffffff;
      }
      iVar1 = ferror(*(FILE **)(this + 8));
      if (iVar1 == 0) {
        this[0x10] = (jpeg_decoder_file_stream)0x1;
        *param_3 = true;
        return sVar2 & 0xffffffff;
      }
      this[0x11] = (jpeg_decoder_file_stream)0x1;
    }
  }
  return 0xffffffff;
}



/* jpeg_decoder_file_stream::~jpeg_decoder_file_stream() */

void __thiscall jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *this)

{
  *(undefined ***)this = &PTR__jpeg_decoder_file_stream_00112bc8;
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 8));
    return;
  }
  return;
}



/* jpeg_decoder_file_stream::~jpeg_decoder_file_stream() */

void __thiscall jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *this)

{
  *(undefined ***)this = &PTR__jpeg_decoder_file_stream_00112bc8;
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 8));
  }
  operator_delete(this,0x18);
  return;
}



/* jpeg_decoder::free_all_blocks() */

void __thiscall jpeg_decoder::free_all_blocks(jpeg_decoder *this)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  *(undefined8 *)(this + 0xd8) = 0;
  __ptr = *(undefined8 **)(this + 200);
  while (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  *(undefined8 *)(this + 200) = 0;
  return;
}



/* jpeg_decoder::stop_decoding(jpgd_status) */

void __thiscall jpeg_decoder::stop_decoding(jpeg_decoder *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x3548) = param_2;
  free_all_blocks(this);
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(this,param_2);
}



/* jpeg_decoder::alloc(unsigned long, bool) */

undefined8 * __thiscall jpeg_decoder::alloc(jpeg_decoder *this,ulong param_1,bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar6 = 1;
  if (param_1 != 0) {
    uVar6 = param_1;
  }
  puVar1 = *(undefined8 **)(this + 200);
  uVar6 = uVar6 + 3 & 0xfffffffffffffffc;
  puVar3 = puVar1;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = uVar6 + 0x7ff & 0xfffffffffffff800;
      if (uVar4 < 0x7f00) {
        uVar4 = 0x7f00;
      }
      puVar5 = (undefined8 *)malloc((long)(int)uVar4 + 0x20);
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff20);
      }
      *puVar5 = puVar1;
      puVar3 = puVar5 + 3;
      *(undefined8 **)(this + 200) = puVar5;
      puVar5[1] = uVar6;
      puVar5[2] = (long)(int)uVar4;
joined_r0x001002c3:
      if (!param_2) {
        return puVar3;
      }
      puVar3 = (undefined8 *)memset(puVar3,0,uVar6);
      return puVar3;
    }
    lVar2 = puVar3[1];
    uVar4 = lVar2 + uVar6;
    if (uVar4 <= (ulong)puVar3[2]) {
      puVar3[1] = uVar4;
      puVar3 = (undefined8 *)((long)puVar3 + lVar2 + 0x18);
      goto joined_r0x001002c3;
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



/* jpeg_decoder::word_clear(void*, unsigned short, unsigned int) */

void __thiscall
jpeg_decoder::word_clear(jpeg_decoder *this,void *param_1,ushort param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (ushort *)param_1;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = param_2;
      puVar1 = puVar2;
    } while (puVar2 != (ushort *)((long)param_1 + (ulong)param_3 * 2));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* jpeg_decoder::prep_in_buffer() */

void __thiscall jpeg_decoder::prep_in_buffer(jpeg_decoder *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(this + 0x330) = 0;
  *(jpeg_decoder **)(this + 0x328) = this + 0x3b9;
  if (this[0x338] == (jpeg_decoder)0x0) {
    iVar4 = 0;
    do {
      iVar4 = (**(code **)(**(long **)(this + 0xd8) + 0x10))
                        (*(long **)(this + 0xd8),this + 0x3b9 + iVar4,0x2000 - iVar4,this + 0x338);
      if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff1f);
      }
      iVar4 = iVar4 + *(int *)(this + 0x330);
      *(int *)(this + 0x330) = iVar4;
    } while ((iVar4 < 0x2000) && (this[0x338] == (jpeg_decoder)0x0));
    *(int *)(this + 0x3550) = *(int *)(this + 0x3550) + iVar4;
    uVar3 = _UNK_00112c18;
    uVar2 = __LC0;
    puVar5 = (undefined8 *)((long)iVar4 + *(long *)(this + 0x328));
    puVar1 = puVar5 + 0x10;
    do {
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  return;
}



/* jpeg_decoder::decode_block_dc_first(jpeg_decoder*, int, int, int) */

void jpeg_decoder::decode_block_dc_first(jpeg_decoder *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = (long)param_2;
  plVar2 = *(long **)(param_1 + lVar10 * 8 + 0x2d0);
  lVar5 = plVar2[3];
  lVar6 = plVar2[1];
  lVar3 = *plVar2;
  lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + lVar10 * 4 + 0x20c) * 8 + 0x290);
  uVar9 = *(uint *)(lVar4 + 4 + (ulong)(*(uint *)(param_1 + 0x24c0) >> 0x18) * 4);
  if ((int)uVar9 < 0) {
    iVar8 = 0x17;
    do {
      bVar7 = (byte)iVar8;
      iVar8 = iVar8 + -1;
      uVar9 = *(uint *)(lVar4 + 0x904 +
                       (long)(int)-((*(uint *)(param_1 + 0x24c0) >> (bVar7 & 0x1f) & 1) + uVar9) * 4
                       );
    } while ((int)uVar9 < 0);
    get_bits_no_markers(param_1,0x1f - iVar8);
  }
  else {
    get_bits_no_markers(param_1,(uint)*(byte *)(lVar4 + 0x804 + (long)(int)uVar9));
  }
  iVar8 = 0;
  if (uVar9 != 0) {
    iVar8 = get_bits_no_markers(param_1,uVar9);
    if (iVar8 < *(int *)(s_extend_test + (ulong)(uVar9 & 0xf) * 4)) {
      iVar8 = iVar8 + *(int *)(s_extend_offset + (ulong)(uVar9 & 0xf) * 4);
    }
  }
  iVar1 = *(int *)(param_1 + lVar10 * 4 + 0x24ec);
  *(int *)(param_1 + lVar10 * 4 + 0x24ec) = iVar8 + iVar1;
  *(short *)((long)((int)lVar6 * (int)lVar5 * param_4) + (long)(param_3 * (int)lVar5) + lVar3) =
       (short)(iVar8 + iVar1 << ((byte)*(undefined4 *)(param_1 + 0x234) & 0x1f));
  return;
}



/* jpeg_decoder::decode_block_dc_refine(jpeg_decoder*, int, int, int) */

void jpeg_decoder::decode_block_dc_refine(jpeg_decoder *param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = get_bits_no_markers(param_1,1);
  if (iVar2 != 0) {
    plVar1 = *(long **)(param_1 + (long)param_2 * 8 + 0x2d0);
    puVar3 = (ushort *)
             ((long)((int)plVar1[1] * (int)plVar1[3] * param_4) + (long)(param_3 * (int)plVar1[3]) +
             *plVar1);
    *puVar3 = *puVar3 | (ushort)(1 << ((byte)*(undefined4 *)(param_1 + 0x234) & 0x1f));
  }
  return;
}



/* jpeg_decoder::decode_block_ac_first(jpeg_decoder*, int, int, int) */

void jpeg_decoder::decode_block_ac_first(jpeg_decoder *param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_1 + 0x310);
  if (iVar8 != 0) {
LAB_00100707:
    *(int *)(param_1 + 0x310) = iVar8 + -1;
    return;
  }
  plVar1 = *(long **)(param_1 + (long)param_2 * 8 + 0x2f0);
  lVar4 = plVar1[3];
  lVar5 = plVar1[1];
  lVar2 = *plVar1;
  iVar8 = *(int *)(param_1 + 0x22c);
  if (iVar8 <= *(int *)(param_1 + 0x230)) {
    do {
      lVar3 = *(long *)(param_1 +
                       (long)*(int *)(param_1 + ((long)param_2 + 0x84) * 4 + 0xc) * 8 + 0x290);
      uVar9 = *(uint *)(lVar3 + 4 + (ulong)(*(uint *)(param_1 + 0x24c0) >> 0x18) * 4);
      if ((int)uVar9 < 0) {
        iVar7 = 0x17;
        do {
          bVar6 = (byte)iVar7;
          iVar7 = iVar7 + -1;
          uVar9 = *(uint *)(lVar3 + 0x904 +
                           (long)(int)-((*(uint *)(param_1 + 0x24c0) >> (bVar6 & 0x1f) & 1) + uVar9)
                           * 4);
        } while ((int)uVar9 < 0);
        get_bits_no_markers(param_1,0x1f - iVar7);
      }
      else {
        get_bits_no_markers(param_1,(uint)*(byte *)(lVar3 + 0x804 + (long)(int)uVar9));
      }
      iVar7 = (int)uVar9 >> 4;
      uVar9 = uVar9 & 0xf;
      if (uVar9 == 0) {
        if (iVar7 != 0xf) {
          *(int *)(param_1 + 0x310) = 1 << ((byte)iVar7 & 0x1f);
          iVar8 = 1;
          if (iVar7 != 0) {
            iVar8 = get_bits_no_markers(param_1,iVar7);
            iVar8 = iVar8 + *(int *)(param_1 + 0x310);
          }
          goto LAB_00100707;
        }
        iVar8 = iVar8 + 0xf;
        if (0x3f < iVar8) goto LAB_001006c5;
      }
      else {
        iVar8 = iVar8 + iVar7;
        if (0x3f < iVar8) {
LAB_001006c5:
                    /* WARNING: Subroutine does not return */
          stop_decoding(param_1,0xffffff1a);
        }
        iVar7 = get_bits_no_markers(param_1,uVar9);
        if (iVar7 < *(int *)(s_extend_test + (long)(int)uVar9 * 4)) {
          iVar7 = iVar7 + *(int *)(s_extend_offset + (long)(int)uVar9 * 4);
        }
        *(short *)(lVar2 + (long)*(int *)(g_ZAG + (long)iVar8 * 4) * 2 +
                  (long)(param_3 * (int)lVar4) + (long)((int)lVar5 * (int)lVar4 * param_4)) =
             (short)(iVar7 << ((byte)*(undefined4 *)(param_1 + 0x234) & 0x1f));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= *(int *)(param_1 + 0x230));
  }
  return;
}



/* jpeg_decoder::decode_block_ac_refine(jpeg_decoder*, int, int, int) */

void jpeg_decoder::decode_block_ac_refine(jpeg_decoder *param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  bool bVar21;
  uint local_54;
  short local_48;
  
  uVar17 = *(uint *)(param_1 + 0x22c);
  uVar10 = 1 << ((byte)*(undefined4 *)(param_1 + 0x234) & 0x1f);
  uVar11 = -1 << ((byte)*(undefined4 *)(param_1 + 0x234) & 0x1f);
  plVar6 = *(long **)(param_1 + (long)param_2 * 8 + 0x2f0);
  iVar13 = *(int *)(param_1 + 0x310);
  lVar20 = (long)((int)plVar6[1] * (int)plVar6[3] * param_4) + (long)(param_3 * (int)plVar6[3]) +
           *plVar6;
  local_48 = (short)uVar11;
  if (iVar13 == 0) {
    if (*(int *)(param_1 + 0x230) < (int)uVar17) {
      return;
    }
    do {
      lVar7 = *(long *)(param_1 + (long)*(int *)(param_1 + (long)param_2 * 4 + 0x21c) * 8 + 0x290);
      uVar16 = *(uint *)(lVar7 + 4 + (ulong)(*(uint *)(param_1 + 0x24c0) >> 0x18) * 4);
      if ((int)uVar16 < 0) {
        iVar13 = 0x17;
        do {
          bVar12 = (byte)iVar13;
          iVar13 = iVar13 + -1;
          uVar16 = *(uint *)(lVar7 + 0x904 +
                            (long)(int)-((*(uint *)(param_1 + 0x24c0) >> (bVar12 & 0x1f) & 1) +
                                        uVar16) * 4);
        } while ((int)uVar16 < 0);
        get_bits_no_markers(param_1,0x1f - iVar13);
      }
      else {
        get_bits_no_markers(param_1,(uint)*(byte *)(lVar7 + 0x804 + (long)(int)uVar16));
      }
      iVar19 = (int)uVar16 >> 4;
      if ((uVar16 & 0xf) == 0) {
        if (iVar19 != 0xf) {
          *(int *)(param_1 + 0x310) = 1 << ((byte)iVar19 & 0x1f);
          iVar13 = 1;
          if (iVar19 == 0) goto LAB_00100955;
          iVar13 = get_bits_no_markers(param_1,iVar19);
          iVar13 = iVar13 + *(int *)(param_1 + 0x310);
          *(int *)(param_1 + 0x310) = iVar13;
          goto LAB_0010094d;
        }
        bVar21 = false;
        local_54 = 0;
      }
      else {
        if ((uVar16 & 0xf) != 1) {
                    /* WARNING: Subroutine does not return */
          stop_decoding(param_1,0xffffff1a);
        }
        iVar13 = get_bits_no_markers(param_1,1);
        if (iVar13 == 0) {
          bVar21 = true;
          local_54 = uVar11;
        }
        else {
          bVar21 = uVar10 != 0;
          local_54 = uVar10;
        }
      }
LAB_0010089d:
      do {
        uVar16 = uVar17;
        psVar1 = (short *)(lVar20 + (long)*(int *)(g_ZAG + (ulong)(uVar16 & 0x3f) * 4) * 2);
        if (*psVar1 == 0) {
          iVar19 = iVar19 + -1;
          if (iVar19 < 0) {
            iVar13 = *(int *)(param_1 + 0x230);
            goto LAB_00100924;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x24bc);
          iVar5 = *(int *)(param_1 + 0x24c0);
          iVar13 = iVar4 + -1;
          *(int *)(param_1 + 0x24bc) = iVar13;
          if (iVar13 < 1) {
            iVar18 = *(int *)(param_1 + 0x330);
            uVar17 = iVar5 << ((byte)iVar4 & 0x1f);
            *(uint *)(param_1 + 0x24c0) = uVar17;
            if (iVar18 < 2) {
              if (iVar18 == 0) {
                prep_in_buffer(param_1);
                iVar18 = *(int *)(param_1 + 0x330);
                if (iVar18 != 0) goto LAB_00100c60;
                uVar17 = *(uint *)(param_1 + 0x334);
                *(uint *)(param_1 + 0x334) = uVar17 ^ 1;
                uVar17 = (-(uint)(uVar17 == 0) & 0x2600) + 0xd900;
              }
              else {
LAB_00100c60:
                pbVar8 = *(byte **)(param_1 + 0x328);
                iVar18 = iVar18 + -1;
                pbVar15 = pbVar8 + 1;
                *(byte **)(param_1 + 0x328) = pbVar15;
                bVar12 = *pbVar8;
                *(int *)(param_1 + 0x330) = iVar18;
                uVar17 = (uint)bVar12;
                if (uVar17 == 0xff) {
                  if (iVar18 == 0) {
                    prep_in_buffer(param_1);
                    iVar18 = *(int *)(param_1 + 0x330);
                    if (iVar18 == 0) {
                      lVar7 = *(long *)(param_1 + 0x328);
                      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) ^ 1;
                      *(long *)(param_1 + 0x328) = lVar7 + -1;
                      *(undefined1 *)(lVar7 + -1) = 0xff;
                      iVar18 = *(int *)(param_1 + 0x330) + 1;
                      uVar17 = 0xff00;
                      *(int *)(param_1 + 0x330) = iVar18;
                      goto LAB_00100c8c;
                    }
                    pbVar15 = *(byte **)(param_1 + 0x328);
                  }
LAB_00100ccf:
                  iVar18 = iVar18 + -1;
                  *(byte **)(param_1 + 0x328) = pbVar15 + 1;
                  bVar12 = *pbVar15;
                  uVar17 = 0xff00;
                  *(int *)(param_1 + 0x330) = iVar18;
                  if (bVar12 != 0) {
                    *(byte **)(param_1 + 0x328) = pbVar15;
                    *pbVar15 = bVar12;
                    lVar7 = *(long *)(param_1 + 0x328);
                    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
                    *(long *)(param_1 + 0x328) = lVar7 + -1;
                    *(undefined1 *)(lVar7 + -1) = 0xff;
                    iVar18 = *(int *)(param_1 + 0x330) + 1;
                    *(int *)(param_1 + 0x330) = iVar18;
                  }
                }
                else {
                  uVar17 = uVar17 << 8;
                }
LAB_00100c8c:
                if (iVar18 != 0) goto LAB_00100bb8;
              }
              prep_in_buffer(param_1);
              iVar18 = *(int *)(param_1 + 0x330);
              if (iVar18 == 0) {
                uVar14 = *(uint *)(param_1 + 0x334);
                *(uint *)(param_1 + 0x334) = uVar14 ^ 1;
                uVar14 = (-(uint)(uVar14 == 0) & 0x26) + 0xd9;
              }
              else {
LAB_00100bb8:
                pbVar8 = *(byte **)(param_1 + 0x328);
                iVar18 = iVar18 + -1;
                pbVar15 = pbVar8 + 1;
                *(byte **)(param_1 + 0x328) = pbVar15;
                uVar14 = (uint)*pbVar8;
                *(int *)(param_1 + 0x330) = iVar18;
                if (uVar14 == 0xff) {
                  if (iVar18 == 0) {
                    prep_in_buffer(param_1);
                    iVar18 = *(int *)(param_1 + 0x330);
                    if (iVar18 != 0) {
                      pbVar15 = *(byte **)(param_1 + 0x328);
                      goto LAB_00100bea;
                    }
                    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) ^ 1;
                  }
                  else {
LAB_00100bea:
                    *(byte **)(param_1 + 0x328) = pbVar15 + 1;
                    bVar12 = *pbVar15;
                    *(int *)(param_1 + 0x330) = iVar18 + -1;
                    if (bVar12 == 0) goto LAB_00100b70;
                    *(byte **)(param_1 + 0x328) = pbVar15;
                    *pbVar15 = bVar12;
                    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
                  }
                  lVar7 = *(long *)(param_1 + 0x328);
                  *(long *)(param_1 + 0x328) = lVar7 + -1;
                  *(undefined1 *)(lVar7 + -1) = 0xff;
                  *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
                }
              }
LAB_00100b70:
              uVar17 = uVar14 | uVar17 | *(uint *)(param_1 + 0x24c0);
              iVar13 = *(int *)(param_1 + 0x24bc);
            }
            else {
              pbVar8 = *(byte **)(param_1 + 0x328);
              bVar12 = *pbVar8;
              if ((bVar12 == 0xff) || (bVar2 = pbVar8[1], bVar2 == 0xff)) {
                pbVar15 = pbVar8 + 1;
                iVar18 = iVar18 + -1;
                *(byte **)(param_1 + 0x328) = pbVar15;
                bVar12 = *pbVar8;
                *(int *)(param_1 + 0x330) = iVar18;
                if (bVar12 == 0xff) goto LAB_00100ccf;
                uVar17 = (uint)bVar12 << 8;
                goto LAB_00100bb8;
              }
              *(int *)(param_1 + 0x330) = iVar18 + -2;
              uVar17 = bVar2 | uVar17 | (uint)bVar12 << 8;
              *(byte **)(param_1 + 0x328) = pbVar8 + 2;
            }
            *(int *)(param_1 + 0x24bc) = iVar13 + 0x10;
            *(uint *)(param_1 + 0x24c0) = uVar17 << (-(char)iVar13 & 0x1fU);
          }
          else {
            *(int *)(param_1 + 0x24c0) = iVar5 * 2;
          }
          if ((iVar5 < 0) && (sVar3 = *psVar1, (uVar10 & (int)sVar3) == 0)) {
            sVar9 = local_48;
            if (-1 < sVar3) {
              sVar9 = (short)uVar10;
            }
            *psVar1 = sVar3 + sVar9;
            iVar13 = *(int *)(param_1 + 0x230);
            uVar17 = uVar16 + 1;
            if (iVar13 < (int)(uVar16 + 1)) break;
            goto LAB_0010089d;
          }
        }
        iVar13 = *(int *)(param_1 + 0x230);
        uVar17 = uVar16 + 1;
      } while ((int)(uVar16 + 1) <= iVar13);
      uVar16 = uVar16 + 1;
LAB_00100924:
      if (((int)uVar16 < 0x40) && (bVar21)) {
        *(short *)(lVar20 + (long)*(int *)(g_ZAG + (long)(int)uVar16 * 4) * 2) = (short)local_54;
      }
      uVar17 = uVar16 + 1;
    } while ((int)uVar17 <= iVar13);
    iVar13 = *(int *)(param_1 + 0x310);
  }
LAB_0010094d:
  if (0 < iVar13) {
LAB_00100955:
    if ((int)uVar17 <= *(int *)(param_1 + 0x230)) {
      do {
        while (((psVar1 = (short *)(lVar20 + (long)*(int *)(g_ZAG + (ulong)(uVar17 & 0x3f) * 4) * 2)
                , *psVar1 != 0 && (iVar13 = get_bits_no_markers(param_1,1), iVar13 != 0)) &&
               (sVar3 = *psVar1, ((int)sVar3 & uVar10) == 0))) {
          sVar9 = local_48;
          if (-1 < sVar3) {
            sVar9 = (short)uVar10;
          }
          uVar17 = uVar17 + 1;
          *psVar1 = sVar3 + sVar9;
          if (*(int *)(param_1 + 0x230) < (int)uVar17) goto LAB_001009d0;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 <= *(int *)(param_1 + 0x230));
LAB_001009d0:
      iVar13 = *(int *)(param_1 + 0x310);
    }
    *(int *)(param_1 + 0x310) = iVar13 + -1;
  }
  return;
}



/* jpeg_decoder::read_dht_marker() */

void __thiscall jpeg_decoder::read_dht_marker(jpeg_decoder *this)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint7 *puVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  uint7 uStack_167;
  long lStack_160;
  undefined1 local_158;
  undefined1 local_157 [15];
  undefined8 local_148 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  iVar8 = *(int *)(this + 0x24bc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(this + 0x24c0);
  iVar10 = iVar8 + -0x10;
  *(int *)(this + 0x24bc) = iVar10;
  if (0 < iVar10) {
    *(uint *)(this + 0x24c0) = uVar18 << 0x10;
    goto LAB_00100e78;
  }
  *(uint *)(this + 0x24c0) = uVar18 << ((byte)iVar8 & 0x1f);
  iVar8 = *(int *)(this + 0x330);
  if (iVar8 == 0) {
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 != 0) goto LAB_001014b3;
    uVar14 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar14 ^ 1;
    uVar14 = (-(uint)(uVar14 == 0) & 0x2600) + 0xd900;
LAB_0010154d:
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 != 0) {
      pbVar12 = *(byte **)(this + 0x328);
      goto LAB_001014d8;
    }
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_001014b3:
    pbVar4 = *(byte **)(this + 0x328);
    iVar8 = iVar8 + -1;
    pbVar12 = pbVar4 + 1;
    *(byte **)(this + 0x328) = pbVar12;
    bVar1 = *pbVar4;
    *(int *)(this + 0x330) = iVar8;
    uVar14 = (uint)bVar1 << 8;
    if (iVar8 == 0) goto LAB_0010154d;
LAB_001014d8:
    *(byte **)(this + 0x328) = pbVar12 + 1;
    uVar6 = (uint)*pbVar12;
    *(int *)(this + 0x330) = iVar8 + -1;
  }
  iVar8 = *(int *)(this + 0x24bc);
  iVar10 = iVar8 + 0x10;
  *(int *)(this + 0x24bc) = iVar10;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar14) << (-(char)iVar8 & 0x1fU);
LAB_00100e78:
  if (uVar18 >> 0x10 < 2) {
LAB_001015b2:
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff02);
  }
  uVar18 = (uVar18 >> 0x10) - 2;
  if (uVar18 == 0) {
LAB_00101478:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100ea0:
  uVar14 = *(uint *)(this + 0x24c0);
  iVar8 = iVar10 + -8;
  *(int *)(this + 0x24bc) = iVar8;
  uVar6 = uVar14 << 8;
  if (0 < iVar8) goto LAB_00100ec5;
  iVar8 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar14 << ((byte)iVar10 & 0x1f);
  if (iVar8 == 0) {
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 != 0) goto LAB_00101358;
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x2600) + 0xd900;
LAB_00101436:
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 != 0) {
      pbVar12 = *(byte **)(this + 0x328);
      goto LAB_00101383;
    }
    uVar16 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar16 ^ 1;
    uVar16 = (-(uint)(uVar16 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00101358:
    pbVar4 = *(byte **)(this + 0x328);
    iVar8 = iVar8 + -1;
    pbVar12 = pbVar4 + 1;
    *(byte **)(this + 0x328) = pbVar12;
    bVar1 = *pbVar4;
    *(int *)(this + 0x330) = iVar8;
    uVar6 = (uint)bVar1 << 8;
    if (iVar8 == 0) goto LAB_00101436;
LAB_00101383:
    *(byte **)(this + 0x328) = pbVar12 + 1;
    uVar16 = (uint)*pbVar12;
    *(int *)(this + 0x330) = iVar8 + -1;
  }
  uVar6 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar16 | uVar6) <<
          (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  iVar8 = *(int *)(this + 0x24bc) + 0x10;
LAB_00100ec5:
  iVar10 = 0;
  puVar19 = &uStack_167;
  do {
    *(int *)(this + 0x24bc) = iVar8 + -8;
    uVar13 = (undefined1)(uVar6 >> 0x18);
    if (iVar8 + -8 < 1) {
      *(uint *)(this + 0x24c0) = uVar6 << ((byte)iVar8 & 0x1f);
      iVar8 = *(int *)(this + 0x330);
      if (iVar8 == 0) {
        prep_in_buffer(this);
        iVar8 = *(int *)(this + 0x330);
        if (iVar8 != 0) goto LAB_00100f20;
        uVar16 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar16 ^ 1;
        uVar16 = (-(uint)(uVar16 == 0) & 0x2600) + 0xd900;
LAB_0010123b:
        prep_in_buffer(this);
        iVar8 = *(int *)(this + 0x330);
        if (iVar8 != 0) {
          pbVar12 = *(byte **)(this + 0x328);
          goto LAB_00100f4b;
        }
        uVar9 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar9 ^ 1;
        uVar9 = (-(uint)(uVar9 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00100f20:
        pbVar4 = *(byte **)(this + 0x328);
        iVar8 = iVar8 + -1;
        pbVar12 = pbVar4 + 1;
        *(byte **)(this + 0x328) = pbVar12;
        bVar1 = *pbVar4;
        *(int *)(this + 0x330) = iVar8;
        uVar16 = (uint)bVar1 << 8;
        if (iVar8 == 0) goto LAB_0010123b;
LAB_00100f4b:
        *(byte **)(this + 0x328) = pbVar12 + 1;
        uVar9 = (uint)*pbVar12;
        *(int *)(this + 0x330) = iVar8 + -1;
      }
      uVar2 = *(uint *)(this + 0x24c0);
      *(undefined1 *)puVar19 = uVar13;
      iVar8 = *(int *)(this + 0x24bc);
      *(int *)(this + 0x24bc) = iVar8 + 0x10;
      *(uint *)(this + 0x24c0) = (uVar2 & 0xffff0000 | uVar9 | uVar16) << (-(char)iVar8 & 0x1fU);
    }
    else {
      *(undefined1 *)puVar19 = uVar13;
      *(uint *)(this + 0x24c0) = uVar6 << 8;
    }
    if ((undefined1 *)((long)puVar19 + 1) == local_157) break;
    iVar10 = iVar10 + (uVar6 >> 0x18);
    puVar19 = (uint7 *)((long)puVar19 + 1);
    uVar6 = *(uint *)(this + 0x24c0);
    iVar8 = *(int *)(this + 0x24bc);
  } while( true );
  iVar10 = iVar10 + (uVar6 >> 0x18);
  if (0xff < iVar10) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff00);
  }
  if (0 < iVar10) {
    puVar20 = local_148;
    puVar17 = (undefined8 *)((long)iVar10 + (long)puVar20);
    iVar8 = *(int *)(this + 0x24bc);
    do {
      while( true ) {
        iVar3 = *(int *)(this + 0x24c0);
        iVar11 = iVar8 + -8;
        *(int *)(this + 0x24bc) = iVar11;
        uVar13 = (undefined1)((uint)iVar3 >> 0x18);
        if (0 < iVar11) break;
        *(int *)(this + 0x24c0) = iVar3 << ((byte)iVar8 & 0x1f);
        iVar8 = *(int *)(this + 0x330);
        if (iVar8 == 0) {
          prep_in_buffer(this);
          iVar8 = *(int *)(this + 0x330);
          if (iVar8 != 0) goto LAB_00101019;
          uVar6 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar6 ^ 1;
          uVar6 = (-(uint)(uVar6 == 0) & 0x2600) + 0xd900;
LAB_001012b0:
          prep_in_buffer(this);
          iVar8 = *(int *)(this + 0x330);
          if (iVar8 != 0) {
            pbVar12 = *(byte **)(this + 0x328);
            goto LAB_00101042;
          }
          uVar16 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar16 ^ 1;
          uVar16 = (-(uint)(uVar16 == 0) & 0x26) + 0xd9;
        }
        else {
LAB_00101019:
          pbVar4 = *(byte **)(this + 0x328);
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar4 + 1;
          *(byte **)(this + 0x328) = pbVar12;
          bVar1 = *pbVar4;
          *(int *)(this + 0x330) = iVar8;
          uVar6 = (uint)bVar1 << 8;
          if (iVar8 == 0) goto LAB_001012b0;
LAB_00101042:
          *(byte **)(this + 0x328) = pbVar12 + 1;
          uVar16 = (uint)*pbVar12;
          *(int *)(this + 0x330) = iVar8 + -1;
        }
        iVar3 = *(int *)(this + 0x24bc);
        *(undefined1 *)puVar20 = uVar13;
        puVar20 = (undefined8 *)((long)puVar20 + 1);
        iVar8 = iVar3 + 0x10;
        *(int *)(this + 0x24bc) = iVar8;
        *(uint *)(this + 0x24c0) =
             (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar16 | uVar6) << (-(char)iVar3 & 0x1fU);
        if (puVar17 == puVar20) goto LAB_00101091;
      }
      *(undefined1 *)puVar20 = uVar13;
      puVar20 = (undefined8 *)((long)puVar20 + 1);
      *(int *)(this + 0x24c0) = iVar3 << 8;
      iVar8 = iVar11;
    } while (puVar17 != puVar20);
  }
LAB_00101091:
  if (uVar18 < iVar10 + 0x11U) goto LAB_001015b2;
  uVar18 = uVar18 - (iVar10 + 0x11U);
  uVar14 = (uVar14 >> 0x18 & 0xf) + (uVar14 >> 0x1a & 4);
  if (7 < uVar14) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff01);
  }
  lVar15 = (long)(int)uVar14;
  if (*(long *)(this + lVar15 * 8 + 0xf0) == 0) {
    uVar7 = alloc(this,0x11,false);
    *(undefined8 *)(this + lVar15 * 8 + 0xf0) = uVar7;
  }
  if (*(long *)(this + lVar15 * 8 + 0x130) == 0) {
    uVar7 = alloc(this,0x100,false);
    *(undefined8 *)(this + lVar15 * 8 + 0x130) = uVar7;
  }
  this[lVar15 + 0xe4] = (jpeg_decoder)0x0;
  plVar5 = *(long **)(this + lVar15 * 8 + 0xf0);
  *(undefined1 *)(plVar5 + 2) = local_158;
  *plVar5 = (ulong)uStack_167 << 8;
  plVar5[1] = lStack_160;
  puVar20 = *(undefined8 **)(this + lVar15 * 8 + 0x130);
  *puVar20 = local_148[0];
  puVar20[1] = local_148[1];
  puVar20[2] = local_148[2];
  puVar20[3] = local_148[3];
  puVar20[4] = local_128;
  puVar20[5] = uStack_120;
  puVar20[6] = local_118;
  puVar20[7] = uStack_110;
  puVar20[10] = local_f8;
  puVar20[0xb] = uStack_f0;
  puVar20[0xc] = local_e8;
  puVar20[0xd] = uStack_e0;
  puVar20[0xe] = local_d8;
  puVar20[0xf] = uStack_d0;
  puVar20[8] = local_108;
  puVar20[9] = uStack_100;
  puVar20[0x10] = local_c8;
  puVar20[0x11] = uStack_c0;
  puVar20[0x12] = local_b8;
  puVar20[0x13] = uStack_b0;
  puVar20[0x14] = local_a8;
  puVar20[0x15] = uStack_a0;
  puVar20[0x16] = local_98;
  puVar20[0x17] = uStack_90;
  puVar20[0x18] = local_88;
  puVar20[0x19] = uStack_80;
  puVar20[0x1a] = local_78;
  puVar20[0x1b] = uStack_70;
  puVar20[0x1c] = local_68;
  puVar20[0x1d] = uStack_60;
  puVar20[0x1e] = local_58;
  puVar20[0x1f] = uStack_50;
  if (uVar18 == 0) goto LAB_00101478;
  iVar10 = *(int *)(this + 0x24bc);
  goto LAB_00100ea0;
}



/* jpeg_decoder::read_dqt_marker() */

void __thiscall jpeg_decoder::read_dqt_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ushort uVar14;
  ulong uVar15;
  
  iVar5 = *(int *)(this + 0x24bc);
  uVar11 = *(uint *)(this + 0x24c0);
  iVar4 = iVar5 + -0x10;
  *(int *)(this + 0x24bc) = iVar4;
  if (0 < iVar4) {
    *(uint *)(this + 0x24c0) = uVar11 << 0x10;
    goto LAB_00101602;
  }
  iVar4 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar11 << ((byte)iVar5 & 0x1f);
  if (iVar4 == 0) {
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) goto LAB_00101a8f;
    uVar9 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar9 ^ 1;
    uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00101b2f:
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) {
      pbVar10 = *(byte **)(this + 0x328);
      goto LAB_00101ab6;
    }
    uVar12 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar12 ^ 1;
    uVar12 = (-(uint)(uVar12 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00101a8f:
    pbVar3 = *(byte **)(this + 0x328);
    iVar4 = iVar4 + -1;
    pbVar10 = pbVar3 + 1;
    *(byte **)(this + 0x328) = pbVar10;
    bVar2 = *pbVar3;
    *(int *)(this + 0x330) = iVar4;
    uVar9 = (uint)bVar2 << 8;
    if (iVar4 == 0) goto LAB_00101b2f;
LAB_00101ab6:
    *(byte **)(this + 0x328) = pbVar10 + 1;
    uVar12 = (uint)*pbVar10;
    *(int *)(this + 0x330) = iVar4 + -1;
  }
  iVar5 = *(int *)(this + 0x24bc);
  iVar4 = iVar5 + 0x10;
  *(int *)(this + 0x24bc) = iVar4;
  *(uint *)(this + 0x24c0) =
       (uVar12 | uVar9 | *(uint *)(this + 0x24c0) & 0xffff0000) << (-(char)iVar5 & 0x1fU);
LAB_00101602:
  if (uVar11 >> 0x10 < 2) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff03);
  }
  uVar11 = (uVar11 >> 0x10) - 2;
  do {
    if (uVar11 == 0) {
      return;
    }
    uVar9 = *(uint *)(this + 0x24c0);
    iVar5 = iVar4 + -8;
    *(int *)(this + 0x24bc) = iVar5;
    uVar12 = uVar9 >> 0x18;
    if (iVar5 < 1) {
      iVar5 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar4 & 0x1f);
      if (iVar5 == 0) {
        prep_in_buffer(this);
        iVar5 = *(int *)(this + 0x330);
        if (iVar5 != 0) goto LAB_00101972;
        uVar9 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar9 ^ 1;
        uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00101a3b:
        prep_in_buffer(this);
        iVar5 = *(int *)(this + 0x330);
        if (iVar5 != 0) {
          pbVar10 = *(byte **)(this + 0x328);
          goto LAB_0010199d;
        }
        uVar8 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar8 ^ 1;
        uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00101972:
        pbVar3 = *(byte **)(this + 0x328);
        iVar5 = iVar5 + -1;
        pbVar10 = pbVar3 + 1;
        *(byte **)(this + 0x328) = pbVar10;
        bVar2 = *pbVar3;
        *(int *)(this + 0x330) = iVar5;
        uVar9 = (uint)bVar2 << 8;
        if (iVar5 == 0) goto LAB_00101a3b;
LAB_0010199d:
        *(byte **)(this + 0x328) = pbVar10 + 1;
        uVar8 = (uint)*pbVar10;
        *(int *)(this + 0x330) = iVar5 + -1;
      }
      iVar4 = *(int *)(this + 0x24bc);
      iVar5 = iVar4 + 0x10;
      *(int *)(this + 0x24bc) = iVar5;
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar9) << (-(char)iVar4 & 0x1fU);
    }
    else {
      *(uint *)(this + 0x24c0) = uVar9 << 8;
    }
    uVar15 = (ulong)(uVar12 & 0xf);
    if ((uVar12 & 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff04);
    }
    if (*(long *)(this + uVar15 * 8 + 0x170) == 0) {
      uVar7 = alloc(this,0x80,false);
      *(undefined8 *)(this + (uVar15 + 0x2e) * 8) = uVar7;
      iVar5 = *(int *)(this + 0x24bc);
    }
    lVar13 = 0;
    do {
      iVar4 = *(int *)(this + 0x24c0);
      iVar6 = iVar5 + -8;
      *(int *)(this + 0x24bc) = iVar6;
      bVar2 = (byte)((uint)iVar4 >> 0x18);
      uVar14 = (ushort)bVar2;
      if (iVar6 < 1) {
        iVar6 = *(int *)(this + 0x330);
        *(int *)(this + 0x24c0) = iVar4 << ((byte)iVar5 & 0x1f);
        if (iVar6 == 0) {
          prep_in_buffer(this);
          iVar6 = *(int *)(this + 0x330);
          if (iVar6 != 0) goto LAB_0010170e;
          uVar9 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar9 ^ 1;
          uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00101848:
          prep_in_buffer(this);
          iVar6 = *(int *)(this + 0x330);
          if (iVar6 != 0) {
            pbVar10 = *(byte **)(this + 0x328);
            goto LAB_00101739;
          }
          uVar8 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar8 ^ 1;
          uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
        }
        else {
LAB_0010170e:
          pbVar3 = *(byte **)(this + 0x328);
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar3 + 1;
          *(byte **)(this + 0x328) = pbVar10;
          bVar1 = *pbVar3;
          *(int *)(this + 0x330) = iVar6;
          uVar9 = (uint)bVar1 << 8;
          if (iVar6 == 0) goto LAB_00101848;
LAB_00101739:
          *(byte **)(this + 0x328) = pbVar10 + 1;
          uVar8 = (uint)*pbVar10;
          *(int *)(this + 0x330) = iVar6 + -1;
        }
        iVar4 = *(int *)(this + 0x24bc);
        iVar5 = iVar4 + 0x10;
        *(int *)(this + 0x24bc) = iVar5;
        *(uint *)(this + 0x24c0) =
             (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar9) << (-(char)iVar4 & 0x1fU);
      }
      else {
        *(int *)(this + 0x24c0) = iVar4 << 8;
        iVar5 = iVar6;
      }
      if ((int)uVar12 >> 4 != 0) {
        iVar4 = *(int *)(this + 0x24c0);
        iVar6 = iVar5 + -8;
        *(int *)(this + 0x24bc) = iVar6;
        if (iVar6 < 1) {
          iVar6 = *(int *)(this + 0x330);
          *(int *)(this + 0x24c0) = iVar4 << ((byte)iVar5 & 0x1f);
          if (iVar6 == 0) {
            prep_in_buffer(this);
            iVar6 = *(int *)(this + 0x330);
            if (iVar6 != 0) goto LAB_00101796;
            uVar9 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar9 ^ 1;
            uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_001018d3:
            prep_in_buffer(this);
            iVar6 = *(int *)(this + 0x330);
            if (iVar6 != 0) {
              pbVar10 = *(byte **)(this + 0x328);
              goto LAB_001017c1;
            }
            uVar8 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar8 ^ 1;
            uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
          }
          else {
LAB_00101796:
            pbVar3 = *(byte **)(this + 0x328);
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar3 + 1;
            *(byte **)(this + 0x328) = pbVar10;
            bVar1 = *pbVar3;
            *(int *)(this + 0x330) = iVar6;
            uVar9 = (uint)bVar1 << 8;
            if (iVar6 == 0) goto LAB_001018d3;
LAB_001017c1:
            *(byte **)(this + 0x328) = pbVar10 + 1;
            uVar8 = (uint)*pbVar10;
            *(int *)(this + 0x330) = iVar6 + -1;
          }
          iVar6 = *(int *)(this + 0x24bc);
          iVar5 = iVar6 + 0x10;
          *(int *)(this + 0x24bc) = iVar5;
          *(uint *)(this + 0x24c0) =
               (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar9) << (-(char)iVar6 & 0x1fU);
        }
        else {
          *(int *)(this + 0x24c0) = iVar4 << 8;
          iVar5 = iVar6;
        }
        uVar14 = (ushort)bVar2 * 0x100 + (ushort)(byte)((uint)iVar4 >> 0x18);
      }
      *(ushort *)(*(long *)(this + (uVar15 + 0x2e) * 8) + lVar13) = uVar14;
      lVar13 = lVar13 + 2;
    } while (lVar13 != 0x80);
    uVar9 = (-(uint)((int)uVar12 >> 4 == 0) & 0xffffffc0) + 0x81;
    if (uVar11 < uVar9) {
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff13);
    }
    uVar11 = uVar11 - uVar9;
    iVar4 = iVar5;
  } while( true );
}



/* jpeg_decoder::read_sof_marker() */

void __thiscall jpeg_decoder::read_sof_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = *(uint *)(this + 0x24c0);
  iVar4 = *(int *)(this + 0x24bc);
  iVar6 = iVar4 + -0x10;
  *(int *)(this + 0x24bc) = iVar6;
  uVar3 = uVar7 << 0x10;
  if (iVar6 < 1) {
    iVar6 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar7 << ((byte)iVar4 & 0x1f);
    if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) goto LAB_001021a6;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00102630:
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) {
        pbVar8 = *(byte **)(this + 0x328);
        goto LAB_001021d1;
      }
      uVar10 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar10 ^ 1;
      uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001021a6:
      pbVar2 = *(byte **)(this + 0x328);
      iVar6 = iVar6 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar8;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar6;
      uVar3 = (uint)bVar1 << 8;
      if (iVar6 == 0) goto LAB_00102630;
LAB_001021d1:
      *(byte **)(this + 0x328) = pbVar8 + 1;
      uVar10 = (uint)*pbVar8;
      *(int *)(this + 0x330) = iVar6 + -1;
    }
    iVar6 = *(int *)(this + 0x24bc) + 0x10;
    uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar3) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(int *)(this + 0x24bc) = iVar6 + -8;
  if (iVar6 + -8 < 1) {
    *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) goto LAB_00102348;
      uVar10 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar10 ^ 1;
      uVar10 = (-(uint)(uVar10 == 0) & 0x2600) + 0xd900;
LAB_001024cb:
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) {
        pbVar8 = *(byte **)(this + 0x328);
        goto LAB_00102373;
      }
      uVar11 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar11 ^ 1;
      uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_00102348:
      pbVar2 = *(byte **)(this + 0x328);
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar8;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar4;
      uVar10 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_001024cb;
LAB_00102373:
      *(byte **)(this + 0x328) = pbVar8 + 1;
      uVar11 = (uint)*pbVar8;
      *(int *)(this + 0x330) = iVar4 + -1;
    }
    iVar4 = *(int *)(this + 0x24bc);
    *(int *)(this + 0x24bc) = iVar4 + 0x10;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar10) << (-(char)iVar4 & 0x1fU);
  }
  else {
    *(uint *)(this + 0x24c0) = uVar3 << 8;
  }
  if (uVar3 >> 0x18 != 8) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff05);
  }
  iVar4 = *(int *)(this + 0x24bc);
  uVar3 = *(uint *)(this + 0x24c0);
  iVar6 = iVar4 + -0x10;
  *(int *)(this + 0x24bc) = iVar6;
  if (iVar6 < 1) {
    iVar6 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
    if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) goto LAB_001022b6;
      uVar10 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar10 ^ 1;
      uVar10 = (-(uint)(uVar10 == 0) & 0x2600) + 0xd900;
LAB_00102543:
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) {
        pbVar8 = *(byte **)(this + 0x328);
        goto LAB_001022e1;
      }
      uVar11 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar11 ^ 1;
      uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001022b6:
      pbVar2 = *(byte **)(this + 0x328);
      iVar6 = iVar6 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar8;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar6;
      uVar10 = (uint)bVar1 << 8;
      if (iVar6 == 0) goto LAB_00102543;
LAB_001022e1:
      *(byte **)(this + 0x328) = pbVar8 + 1;
      uVar11 = (uint)*pbVar8;
      *(int *)(this + 0x330) = iVar6 + -1;
    }
    iVar4 = *(int *)(this + 0x24bc);
    iVar6 = iVar4 + 0x10;
    *(int *)(this + 0x24bc) = iVar6;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar10) << (-(char)iVar4 & 0x1fU);
  }
  else {
    *(uint *)(this + 0x24c0) = uVar3 << 0x10;
  }
  *(uint *)(this + 0xd4) = uVar3 >> 0x10;
  if (0x3fff < (uVar3 >> 0x10) - 1) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff06);
  }
  uVar3 = *(uint *)(this + 0x24c0);
  iVar4 = iVar6 + -0x10;
  *(int *)(this + 0x24bc) = iVar4;
  if (iVar4 < 1) {
    iVar4 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
    if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) goto LAB_00102226;
      uVar10 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar10 ^ 1;
      uVar10 = (-(uint)(uVar10 == 0) & 0x2600) + 0xd900;
LAB_001025bb:
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) {
        pbVar8 = *(byte **)(this + 0x328);
        goto LAB_00102251;
      }
      uVar11 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar11 ^ 1;
      uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_00102226:
      pbVar2 = *(byte **)(this + 0x328);
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar8;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar4;
      uVar10 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_001025bb;
LAB_00102251:
      *(byte **)(this + 0x328) = pbVar8 + 1;
      uVar11 = (uint)*pbVar8;
      *(int *)(this + 0x330) = iVar4 + -1;
    }
    iVar6 = *(int *)(this + 0x24bc);
    iVar4 = iVar6 + 0x10;
    *(int *)(this + 0x24bc) = iVar4;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar10) << (-(char)iVar6 & 0x1fU);
  }
  else {
    *(uint *)(this + 0x24c0) = uVar3 << 0x10;
  }
  *(uint *)(this + 0xd0) = uVar3 >> 0x10;
  if (0x3fff < (uVar3 >> 0x10) - 1) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff07);
  }
  uVar3 = *(uint *)(this + 0x24c0);
  iVar6 = iVar4 + -8;
  *(int *)(this + 0x24bc) = iVar6;
  uVar10 = uVar3 >> 0x18;
  if (0 < iVar6) {
    *(uint *)(this + 0x24c0) = uVar3 << 8;
    goto LAB_00101cb2;
  }
  iVar6 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
  if (iVar6 == 0) {
    prep_in_buffer(this);
    iVar6 = *(int *)(this + 0x330);
    if (iVar6 != 0) goto LAB_001023d6;
    uVar11 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar11 ^ 1;
    uVar11 = (-(uint)(uVar11 == 0) & 0x2600) + 0xd900;
LAB_001026ab:
    prep_in_buffer(this);
    iVar6 = *(int *)(this + 0x330);
    if (iVar6 != 0) {
      pbVar8 = *(byte **)(this + 0x328);
      goto LAB_00102401;
    }
    uVar5 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar5 ^ 1;
    uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_001023d6:
    pbVar2 = *(byte **)(this + 0x328);
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar8;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar6;
    uVar11 = (uint)bVar1 << 8;
    if (iVar6 == 0) goto LAB_001026ab;
LAB_00102401:
    *(byte **)(this + 0x328) = pbVar8 + 1;
    uVar5 = (uint)*pbVar8;
    *(int *)(this + 0x330) = iVar6 + -1;
  }
  iVar4 = *(int *)(this + 0x24bc);
  iVar6 = iVar4 + 0x10;
  *(int *)(this + 0x24bc) = iVar6;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar11) << (-(char)iVar4 & 0x1fU);
LAB_00101cb2:
  *(uint *)(this + 0x194) = uVar10;
  if (4 < uVar10) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff08);
  }
  if (uVar10 * 3 + 8 != uVar7 >> 0x10) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff09);
  }
  lVar9 = 0;
  if (uVar3 >> 0x18 == 0) {
    return;
  }
  do {
    uVar7 = *(uint *)(this + 0x24c0);
    iVar4 = iVar6 + -8;
    *(int *)(this + 0x24bc) = iVar4;
    uVar3 = uVar7 << 8;
    if (iVar4 < 1) {
      iVar4 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar7 << ((byte)iVar6 & 0x1f);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_00101db0;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00101feb:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar8 = *(byte **)(this + 0x328);
          goto LAB_00101ddb;
        }
        uVar10 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar10 ^ 1;
        uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00101db0:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar8 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar8;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar3 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_00101feb;
LAB_00101ddb:
        *(byte **)(this + 0x328) = pbVar8 + 1;
        uVar10 = (uint)*pbVar8;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar4 = *(int *)(this + 0x24bc) + 0x10;
    }
    *(uint *)(this + lVar9 * 4 + 0x1c8) = uVar7 >> 0x18;
    iVar6 = iVar4 + -4;
    *(int *)(this + 0x24bc) = iVar6;
    uVar7 = uVar3 << 4;
    if (iVar6 < 1) {
      iVar6 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
      if (iVar6 == 0) {
        prep_in_buffer(this);
        iVar6 = *(int *)(this + 0x330);
        if (iVar6 != 0) goto LAB_00101f36;
        uVar7 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar7 ^ 1;
        uVar7 = (-(uint)(uVar7 == 0) & 0x2600) + 0xd900;
LAB_00102063:
        prep_in_buffer(this);
        iVar6 = *(int *)(this + 0x330);
        if (iVar6 != 0) {
          pbVar8 = *(byte **)(this + 0x328);
          goto LAB_00101f61;
        }
        uVar10 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar10 ^ 1;
        uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00101f36:
        pbVar2 = *(byte **)(this + 0x328);
        iVar6 = iVar6 + -1;
        pbVar8 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar8;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar6;
        uVar7 = (uint)bVar1 << 8;
        if (iVar6 == 0) goto LAB_00102063;
LAB_00101f61:
        *(byte **)(this + 0x328) = pbVar8 + 1;
        uVar10 = (uint)*pbVar8;
        *(int *)(this + 0x330) = iVar6 + -1;
      }
      iVar6 = *(int *)(this + 0x24bc) + 0x10;
      uVar7 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar7) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
    }
    *(uint *)(this + lVar9 * 4 + 0x198) = uVar3 >> 0x1c;
    iVar4 = iVar6 + -4;
    *(int *)(this + 0x24bc) = iVar4;
    uVar3 = uVar7 << 4;
    if (iVar4 < 1) {
      iVar4 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar7 << ((byte)iVar6 & 0x1f);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_00101eb8;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_001020db:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar8 = *(byte **)(this + 0x328);
          goto LAB_00101ee3;
        }
        uVar10 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar10 ^ 1;
        uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00101eb8:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar8 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar8;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar3 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_001020db;
LAB_00101ee3:
        *(byte **)(this + 0x328) = pbVar8 + 1;
        uVar10 = (uint)*pbVar8;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar4 = *(int *)(this + 0x24bc) + 0x10;
    }
    *(uint *)(this + lVar9 * 4 + 0x1a8) = uVar7 >> 0x1c;
    *(int *)(this + 0x24bc) = iVar4 + -8;
    if (iVar4 + -8 < 1) {
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_00101e2e;
        uVar7 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar7 ^ 1;
        uVar7 = (-(uint)(uVar7 == 0) & 0x2600) + 0xd900;
LAB_00102153:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar8 = *(byte **)(this + 0x328);
          goto LAB_00101e59;
        }
        uVar10 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar10 ^ 1;
        uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00101e2e:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar8 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar8;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar7 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_00102153;
LAB_00101e59:
        *(byte **)(this + 0x328) = pbVar8 + 1;
        uVar10 = (uint)*pbVar8;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      iVar4 = *(int *)(this + 0x24bc);
      *(int *)(this + 0x24bc) = iVar4 + 0x10;
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar7) << (-(char)iVar4 & 0x1fU);
    }
    else {
      *(uint *)(this + 0x24c0) = uVar3 << 8;
    }
    *(uint *)(this + lVar9 * 4 + 0x1b8) = uVar3 >> 0x18;
    lVar9 = lVar9 + 1;
    if (*(int *)(this + 0x194) <= (int)lVar9) {
      return;
    }
    iVar6 = *(int *)(this + 0x24bc);
  } while( true );
}



/* jpeg_decoder::skip_variable_marker() */

void __thiscall jpeg_decoder::skip_variable_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(this + 0x24bc);
  uVar9 = *(uint *)(this + 0x24c0);
  iVar3 = iVar8 + -0x10;
  *(int *)(this + 0x24bc) = iVar3;
  if (0 < iVar3) {
    *(uint *)(this + 0x24c0) = uVar9 << 0x10;
    goto LAB_00102798;
  }
  iVar3 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar8 & 0x1f);
  if (iVar3 == 0) {
    prep_in_buffer(this);
    iVar3 = *(int *)(this + 0x330);
    if (iVar3 != 0) goto LAB_00102902;
    uVar5 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar5 ^ 1;
    uVar5 = (-(uint)(uVar5 == 0) & 0x2600) + 0xd900;
LAB_001029a2:
    prep_in_buffer(this);
    iVar3 = *(int *)(this + 0x330);
    if (iVar3 != 0) {
      pbVar7 = *(byte **)(this + 0x328);
      goto LAB_00102929;
    }
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00102902:
    pbVar2 = *(byte **)(this + 0x328);
    iVar3 = iVar3 + -1;
    pbVar7 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar7;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar3;
    uVar5 = (uint)bVar1 << 8;
    if (iVar3 == 0) goto LAB_001029a2;
LAB_00102929:
    *(byte **)(this + 0x328) = pbVar7 + 1;
    uVar6 = (uint)*pbVar7;
    *(int *)(this + 0x330) = iVar3 + -1;
  }
  iVar8 = *(int *)(this + 0x24bc);
  iVar3 = iVar8 + 0x10;
  *(int *)(this + 0x24bc) = iVar3;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar5) << (-(char)iVar8 & 0x1fU);
LAB_00102798:
  if (uVar9 >> 0x10 < 2) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff0a);
  }
  iVar8 = (uVar9 >> 0x10) - 2;
  do {
    if (iVar8 == 0) {
      return;
    }
    while( true ) {
      iVar4 = iVar3 + -8;
      *(int *)(this + 0x24bc) = iVar4;
      if (0 < iVar4) break;
      iVar4 = *(int *)(this + 0x330);
      *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << ((byte)iVar3 & 0x1f);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_001027e9;
        uVar9 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar9 ^ 1;
        uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_001028a3:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar7 = *(byte **)(this + 0x328);
          goto LAB_00102814;
        }
        uVar5 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar5 ^ 1;
        uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_001027e9:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar7 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar7;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar9 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_001028a3;
LAB_00102814:
        *(byte **)(this + 0x328) = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      iVar4 = *(int *)(this + 0x24bc);
      iVar3 = iVar4 + 0x10;
      *(int *)(this + 0x24bc) = iVar3;
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar9) << (-(char)iVar4 & 0x1fU);
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        return;
      }
    }
    *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << 8;
    iVar8 = iVar8 + -1;
    iVar3 = iVar4;
  } while( true );
}



/* jpeg_decoder::read_dri_marker() */

void __thiscall jpeg_decoder::read_dri_marker(jpeg_decoder *this)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar5 = *(int *)(this + 0x24bc);
  uVar2 = *(uint *)(this + 0x24c0);
  iVar4 = iVar5 + -0x10;
  *(int *)(this + 0x24bc) = iVar4;
  if (iVar4 < 1) {
    iVar4 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar2 << ((byte)iVar5 & 0x1f);
    if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) goto LAB_00102a86;
      uVar8 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar8 ^ 1;
      uVar8 = (-(uint)(uVar8 == 0) & 0x2600) + 0xd900;
LAB_00102bc8:
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_00102ab1;
      }
      uVar6 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar6 ^ 1;
      uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_00102a86:
      pbVar3 = *(byte **)(this + 0x328);
      iVar4 = iVar4 + -1;
      pbVar7 = pbVar3 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar3;
      *(int *)(this + 0x330) = iVar4;
      uVar8 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_00102bc8;
LAB_00102ab1:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar6 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar4 + -1;
    }
    iVar5 = *(int *)(this + 0x24bc);
    iVar4 = iVar5 + 0x10;
    *(int *)(this + 0x24bc) = iVar4;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar8) << (-(char)iVar5 & 0x1fU);
  }
  else {
    *(uint *)(this + 0x24c0) = uVar2 << 0x10;
  }
  if (uVar2 >> 0x10 != 4) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff0b);
  }
  uVar2 = *(uint *)(this + 0x24c0);
  *(int *)(this + 0x24bc) = iVar4 + -0x10;
  if (0 < iVar4 + -0x10) {
    *(uint *)(this + 0x24c4) = uVar2 >> 0x10;
    *(uint *)(this + 0x24c0) = uVar2 << 0x10;
    return;
  }
  iVar5 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar2 << ((byte)iVar4 & 0x1f);
  if (iVar5 == 0) {
    prep_in_buffer(this);
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 != 0) goto LAB_00102b18;
    uVar8 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar8 ^ 1;
    uVar8 = (-(uint)(uVar8 == 0) & 0x2600) + 0xd900;
LAB_00102c43:
    prep_in_buffer(this);
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 == 0) {
      uVar6 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar6 ^ 1;
      uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
      goto LAB_00102b5a;
    }
    pbVar7 = *(byte **)(this + 0x328);
  }
  else {
LAB_00102b18:
    pbVar3 = *(byte **)(this + 0x328);
    iVar5 = iVar5 + -1;
    pbVar7 = pbVar3 + 1;
    *(byte **)(this + 0x328) = pbVar7;
    bVar1 = *pbVar3;
    *(int *)(this + 0x330) = iVar5;
    uVar8 = (uint)bVar1 << 8;
    if (iVar5 == 0) goto LAB_00102c43;
  }
  *(byte **)(this + 0x328) = pbVar7 + 1;
  uVar6 = (uint)*pbVar7;
  *(int *)(this + 0x330) = iVar5 + -1;
LAB_00102b5a:
  iVar5 = *(int *)(this + 0x24bc);
  *(uint *)(this + 0x24c4) = uVar2 >> 0x10;
  *(int *)(this + 0x24bc) = iVar5 + 0x10;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar8) << (-(char)iVar5 & 0x1fU);
  return;
}



/* jpeg_decoder::read_sos_marker() */

void __thiscall jpeg_decoder::read_sos_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  uVar9 = *(uint *)(this + 0x24c0);
  iVar11 = *(int *)(this + 0x24bc);
  iVar6 = iVar11 + -0x10;
  *(int *)(this + 0x24bc) = iVar6;
  uVar3 = uVar9 << 0x10;
  if (iVar6 < 1) {
    iVar6 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar11 & 0x1f);
    if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) goto LAB_001033ba;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_0010362a:
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_001033e3;
      }
      uVar13 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar13 ^ 1;
      uVar13 = (-(uint)(uVar13 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001033ba:
      pbVar2 = *(byte **)(this + 0x328);
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar6;
      uVar3 = (uint)bVar1 << 8;
      if (iVar6 == 0) goto LAB_0010362a;
LAB_001033e3:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar13 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar6 + -1;
    }
    iVar6 = *(int *)(this + 0x24bc) + 0x10;
    uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar13 | uVar3) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(int *)(this + 0x24bc) = iVar6 + -8;
  uVar13 = uVar3 >> 0x18;
  if (iVar6 + -8 < 1) {
    *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
    iVar11 = *(int *)(this + 0x330);
    if (iVar11 == 0) {
      prep_in_buffer(this);
      iVar11 = *(int *)(this + 0x330);
      if (iVar11 != 0) goto LAB_001034a9;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00103546:
      prep_in_buffer(this);
      iVar11 = *(int *)(this + 0x330);
      if (iVar11 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_001034ce;
      }
      uVar8 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar8 ^ 1;
      uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001034a9:
      pbVar2 = *(byte **)(this + 0x328);
      iVar11 = iVar11 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar11;
      uVar3 = (uint)bVar1 << 8;
      if (iVar11 == 0) goto LAB_00103546;
LAB_001034ce:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar11 + -1;
    }
    iVar11 = *(int *)(this + 0x24bc);
    *(int *)(this + 0x24bc) = iVar11 + 0x10;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar3) << (-(char)iVar11 & 0x1fU);
  }
  else {
    *(uint *)(this + 0x24c0) = uVar3 << 8;
  }
  iVar11 = (uVar9 >> 0x10) - 3;
  *(uint *)(this + 0x1f8) = uVar13;
  if ((uVar13 * 2 + 3 != iVar11) || (3 < uVar13 - 1)) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff0c);
  }
  lVar10 = 0;
  do {
    iVar12 = iVar11;
    uVar9 = *(uint *)(this + 0x24c0);
    iVar11 = *(int *)(this + 0x24bc);
    iVar6 = iVar11 + -8;
    *(int *)(this + 0x24bc) = iVar6;
    uVar3 = uVar9 << 8;
    if (iVar6 < 1) {
      iVar6 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar11 & 0x1f);
      if (iVar6 == 0) {
        prep_in_buffer(this);
        iVar6 = *(int *)(this + 0x330);
        if (iVar6 != 0) goto LAB_00102eb6;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00102fb7:
        prep_in_buffer(this);
        iVar6 = *(int *)(this + 0x330);
        if (iVar6 != 0) {
          pbVar7 = *(byte **)(this + 0x328);
          goto LAB_00102ee1;
        }
        uVar8 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar8 ^ 1;
        uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00102eb6:
        pbVar2 = *(byte **)(this + 0x328);
        iVar6 = iVar6 + -1;
        pbVar7 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar7;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar6;
        uVar3 = (uint)bVar1 << 8;
        if (iVar6 == 0) goto LAB_00102fb7;
LAB_00102ee1:
        *(byte **)(this + 0x328) = pbVar7 + 1;
        uVar8 = (uint)*pbVar7;
        *(int *)(this + 0x330) = iVar6 + -1;
      }
      iVar6 = *(int *)(this + 0x24bc) + 0x10;
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
    }
    *(int *)(this + 0x24bc) = iVar6 + -8;
    if (iVar6 + -8 < 1) {
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
      iVar11 = *(int *)(this + 0x330);
      if (iVar11 == 0) {
        prep_in_buffer(this);
        iVar11 = *(int *)(this + 0x330);
        if (iVar11 != 0) goto LAB_00102e10;
        uVar8 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar8 ^ 1;
        uVar8 = (-(uint)(uVar8 == 0) & 0x2600) + 0xd900;
LAB_00102f52:
        prep_in_buffer(this);
        iVar11 = *(int *)(this + 0x330);
        if (iVar11 != 0) {
          pbVar7 = *(byte **)(this + 0x328);
          goto LAB_00102e39;
        }
        uVar5 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar5 ^ 1;
        uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00102e10:
        pbVar2 = *(byte **)(this + 0x328);
        iVar11 = iVar11 + -1;
        pbVar7 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar7;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar11;
        uVar8 = (uint)bVar1 << 8;
        if (iVar11 == 0) goto LAB_00102f52;
LAB_00102e39:
        *(byte **)(this + 0x328) = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
        *(int *)(this + 0x330) = iVar11 + -1;
      }
      iVar11 = *(int *)(this + 0x24bc);
      *(int *)(this + 0x24bc) = iVar11 + 0x10;
      iVar6 = *(int *)(this + 0x194);
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar8) << (-(char)iVar11 & 0x1fU);
    }
    else {
      iVar6 = *(int *)(this + 0x194);
      *(uint *)(this + 0x24c0) = uVar3 << 8;
    }
    if (iVar6 < 1) {
LAB_00102e90:
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff0d);
    }
    lVar4 = 0;
    while (*(uint *)(this + lVar4 * 4 + 0x1c8) != uVar9 >> 0x18) {
      lVar4 = lVar4 + 1;
      if (iVar6 == lVar4) goto LAB_00102e90;
    }
    iVar11 = (int)lVar4;
    *(int *)(this + lVar10 * 4 + 0x1fc) = iVar11;
    lVar10 = lVar10 + 1;
    *(int *)(this + (long)iVar11 * 4 + 0x20c) = (int)(uVar3 >> 0x18) >> 4;
    *(uint *)(this + (long)iVar11 * 4 + 0x21c) = (uVar3 >> 0x18 & 0xf) + 4;
    iVar11 = iVar12 + -2;
  } while ((int)lVar10 < (int)uVar13);
  uVar9 = *(uint *)(this + 0x24c0);
  iVar11 = *(int *)(this + 0x24bc);
  iVar6 = iVar11 + -8;
  *(int *)(this + 0x24bc) = iVar6;
  uVar3 = uVar9 << 8;
  if (iVar6 < 1) {
    iVar6 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar11 & 0x1f);
    if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) goto LAB_00103431;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_001035bb:
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_0010345c;
      }
      uVar13 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar13 ^ 1;
      uVar13 = (-(uint)(uVar13 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_00103431:
      pbVar2 = *(byte **)(this + 0x328);
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar6;
      uVar3 = (uint)bVar1 << 8;
      if (iVar6 == 0) goto LAB_001035bb;
LAB_0010345c:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar13 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar6 + -1;
    }
    iVar6 = *(int *)(this + 0x24bc) + 0x10;
    uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar13 | uVar3) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(uint *)(this + 0x22c) = uVar9 >> 0x18;
  iVar11 = iVar6 + -8;
  *(int *)(this + 0x24bc) = iVar11;
  uVar9 = uVar3 << 8;
  if (iVar11 < 1) {
    iVar11 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
    if (iVar11 == 0) {
      prep_in_buffer(this);
      iVar11 = *(int *)(this + 0x330);
      if (iVar11 != 0) goto LAB_001032b8;
      uVar9 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar9 ^ 1;
      uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00103714:
      prep_in_buffer(this);
      iVar11 = *(int *)(this + 0x330);
      if (iVar11 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_001032e3;
      }
      uVar13 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar13 ^ 1;
      uVar13 = (-(uint)(uVar13 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001032b8:
      pbVar2 = *(byte **)(this + 0x328);
      iVar11 = iVar11 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar11;
      uVar9 = (uint)bVar1 << 8;
      if (iVar11 == 0) goto LAB_00103714;
LAB_001032e3:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar13 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar11 + -1;
    }
    iVar11 = *(int *)(this + 0x24bc) + 0x10;
    uVar9 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar13 | uVar9) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(uint *)(this + 0x230) = uVar3 >> 0x18;
  iVar6 = iVar11 + -4;
  *(int *)(this + 0x24bc) = iVar6;
  uVar3 = uVar9 << 4;
  if (iVar6 < 1) {
    iVar6 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar11 & 0x1f);
    if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) goto LAB_0010323c;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00103789:
      prep_in_buffer(this);
      iVar6 = *(int *)(this + 0x330);
      if (iVar6 != 0) {
        pbVar7 = *(byte **)(this + 0x328);
        goto LAB_00103267;
      }
      uVar13 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar13 ^ 1;
      uVar13 = (-(uint)(uVar13 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_0010323c:
      pbVar2 = *(byte **)(this + 0x328);
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar7;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar6;
      uVar3 = (uint)bVar1 << 8;
      if (iVar6 == 0) goto LAB_00103789;
LAB_00103267:
      *(byte **)(this + 0x328) = pbVar7 + 1;
      uVar13 = (uint)*pbVar7;
      *(int *)(this + 0x330) = iVar6 + -1;
    }
    iVar6 = *(int *)(this + 0x24bc) + 0x10;
    uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar13 | uVar3) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(uint *)(this + 0x238) = uVar9 >> 0x1c;
  *(int *)(this + 0x24bc) = iVar6 + -4;
  if (0 < iVar6 + -4) {
    *(uint *)(this + 0x24c0) = uVar3 << 4;
    goto LAB_00103067;
  }
  *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar6 & 0x1f);
  iVar11 = *(int *)(this + 0x330);
  if (iVar11 == 0) {
    prep_in_buffer(this);
    iVar11 = *(int *)(this + 0x330);
    if (iVar11 != 0) goto LAB_00103334;
    uVar9 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar9 ^ 1;
    uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_0010369f:
    prep_in_buffer(this);
    iVar11 = *(int *)(this + 0x330);
    if (iVar11 != 0) {
      pbVar7 = *(byte **)(this + 0x328);
      goto LAB_0010335f;
    }
    uVar13 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar13 ^ 1;
    uVar13 = (-(uint)(uVar13 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00103334:
    pbVar2 = *(byte **)(this + 0x328);
    iVar11 = iVar11 + -1;
    pbVar7 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar7;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar11;
    uVar9 = (uint)bVar1 << 8;
    if (iVar11 == 0) goto LAB_0010369f;
LAB_0010335f:
    *(byte **)(this + 0x328) = pbVar7 + 1;
    uVar13 = (uint)*pbVar7;
    *(int *)(this + 0x330) = iVar11 + -1;
  }
  iVar11 = *(int *)(this + 0x24bc);
  *(int *)(this + 0x24bc) = iVar11 + 0x10;
  *(uint *)(this + 0x24c0) =
       (uVar13 | uVar9 | *(uint *)(this + 0x24c0) & 0xffff0000) << (-(char)iVar11 & 0x1fU);
LAB_00103067:
  *(uint *)(this + 0x234) = uVar3 >> 0x1c;
  if (*(int *)(this + 0xe0) == 0) {
    *(undefined8 *)(this + 0x22c) = _LC1;
  }
  iVar12 = iVar12 + -5;
  if (iVar12 != 0) {
    iVar11 = *(int *)(this + 0x24bc);
    do {
      while( true ) {
        iVar6 = iVar11 + -8;
        *(int *)(this + 0x24bc) = iVar6;
        if (0 < iVar6) break;
        iVar6 = *(int *)(this + 0x330);
        *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << ((byte)iVar11 & 0x1f);
        if (iVar6 == 0) {
          prep_in_buffer(this);
          iVar6 = *(int *)(this + 0x330);
          if (iVar6 != 0) goto LAB_001030ce;
          uVar9 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar9 ^ 1;
          uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_001031cf:
          prep_in_buffer(this);
          iVar6 = *(int *)(this + 0x330);
          if (iVar6 != 0) {
            pbVar7 = *(byte **)(this + 0x328);
            goto LAB_001030f7;
          }
          uVar3 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar3 ^ 1;
          uVar3 = (-(uint)(uVar3 == 0) & 0x26) + 0xd9;
        }
        else {
LAB_001030ce:
          pbVar2 = *(byte **)(this + 0x328);
          iVar6 = iVar6 + -1;
          pbVar7 = pbVar2 + 1;
          *(byte **)(this + 0x328) = pbVar7;
          bVar1 = *pbVar2;
          *(int *)(this + 0x330) = iVar6;
          uVar9 = (uint)bVar1 << 8;
          if (iVar6 == 0) goto LAB_001031cf;
LAB_001030f7:
          *(byte **)(this + 0x328) = pbVar7 + 1;
          uVar3 = (uint)*pbVar7;
          *(int *)(this + 0x330) = iVar6 + -1;
        }
        iVar6 = *(int *)(this + 0x24bc);
        iVar11 = iVar6 + 0x10;
        *(int *)(this + 0x24bc) = iVar11;
        *(uint *)(this + 0x24c0) =
             (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar3 | uVar9) << (-(char)iVar6 & 0x1fU);
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          return;
        }
      }
      *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << 8;
      iVar12 = iVar12 + -1;
      iVar11 = iVar6;
    } while (iVar12 != 0);
  }
  return;
}



/* jpeg_decoder::next_marker() */

uint __thiscall jpeg_decoder::next_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
LAB_00103830:
  uVar4 = *(uint *)(this + 0x24c0);
  iVar3 = *(int *)(this + 0x24bc);
  do {
    iVar6 = iVar3 + -8;
    *(int *)(this + 0x24bc) = iVar6;
    uVar8 = uVar4 >> 0x18;
    if (iVar6 < 1) {
      *(uint *)(this + 0x24c0) = uVar4 << ((byte)iVar3 & 0x1f);
      iVar3 = *(int *)(this + 0x330);
      if (iVar3 == 0) {
        prep_in_buffer(this);
        iVar3 = *(int *)(this + 0x330);
        if (iVar3 != 0) goto LAB_0010387f;
        uVar4 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar4 ^ 1;
        uVar4 = (-(uint)(uVar4 == 0) & 0x2600) + 0xd900;
LAB_001039fb:
        prep_in_buffer(this);
        iVar3 = *(int *)(this + 0x330);
        if (iVar3 != 0) {
          pbVar7 = *(byte **)(this + 0x328);
          goto LAB_001038aa;
        }
        uVar5 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar5 ^ 1;
        uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_0010387f:
        pbVar2 = *(byte **)(this + 0x328);
        iVar3 = iVar3 + -1;
        pbVar7 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar7;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar3;
        uVar4 = (uint)bVar1 << 8;
        if (iVar3 == 0) goto LAB_001039fb;
LAB_001038aa:
        *(byte **)(this + 0x328) = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
        *(int *)(this + 0x330) = iVar3 + -1;
      }
      uVar4 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar4) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar6 = *(int *)(this + 0x24bc) + 0x10;
      *(uint *)(this + 0x24c0) = uVar4;
      *(int *)(this + 0x24bc) = iVar6;
    }
    else {
      uVar4 = uVar4 << 8;
      *(uint *)(this + 0x24c0) = uVar4;
    }
    iVar3 = iVar6;
  } while (uVar8 != 0xff);
  do {
    *(int *)(this + 0x24bc) = iVar6 + -8;
    uVar8 = uVar4 >> 0x18;
    if (iVar6 + -8 < 1) {
      *(uint *)(this + 0x24c0) = uVar4 << ((byte)iVar6 & 0x1f);
      iVar3 = *(int *)(this + 0x330);
      if (iVar3 == 0) {
        prep_in_buffer(this);
        iVar3 = *(int *)(this + 0x330);
        if (iVar3 != 0) goto LAB_00103939;
        uVar4 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar4 ^ 1;
        uVar4 = (-(uint)(uVar4 == 0) & 0x2600) + 0xd900;
LAB_00103a5b:
        prep_in_buffer(this);
        iVar3 = *(int *)(this + 0x330);
        if (iVar3 != 0) {
          pbVar7 = *(byte **)(this + 0x328);
          goto LAB_00103964;
        }
        uVar5 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar5 ^ 1;
        uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00103939:
        pbVar2 = *(byte **)(this + 0x328);
        iVar3 = iVar3 + -1;
        pbVar7 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar7;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar3;
        uVar4 = (uint)bVar1 << 8;
        if (iVar3 == 0) goto LAB_00103a5b;
LAB_00103964:
        *(byte **)(this + 0x328) = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
        *(int *)(this + 0x330) = iVar3 + -1;
      }
      iVar3 = *(int *)(this + 0x24bc);
      *(int *)(this + 0x24bc) = iVar3 + 0x10;
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar4) << (-(char)iVar3 & 0x1fU);
    }
    else {
      *(uint *)(this + 0x24c0) = uVar4 << 8;
    }
    if (uVar8 != 0xff) break;
    uVar4 = *(uint *)(this + 0x24c0);
    iVar6 = *(int *)(this + 0x24bc);
  } while( true );
  if (uVar8 != 0) {
    return uVar8;
  }
  goto LAB_00103830;
}



/* jpeg_decoder::process_markers() */

uint __thiscall jpeg_decoder::process_markers(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
LAB_00103ae8:
  uVar3 = *(uint *)(this + 0x24c0);
  iVar4 = *(int *)(this + 0x24bc);
LAB_00103b17:
  do {
    iVar9 = iVar4 + -8;
    *(int *)(this + 0x24bc) = iVar9;
    uVar11 = uVar3 >> 0x18;
    if (iVar9 < 1) {
      iVar9 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
      if (iVar9 == 0) {
        prep_in_buffer(this);
        iVar9 = *(int *)(this + 0x330);
        if (iVar9 != 0) goto LAB_00103b3f;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00103d1b:
        prep_in_buffer(this);
        iVar9 = *(int *)(this + 0x330);
        if (iVar9 != 0) {
          pbVar5 = *(byte **)(this + 0x328);
          goto LAB_00103b6a;
        }
        uVar8 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar8 ^ 1;
        uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00103b3f:
        pbVar2 = *(byte **)(this + 0x328);
        iVar9 = iVar9 + -1;
        pbVar5 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar5;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar9;
        uVar3 = (uint)bVar1 << 8;
        if (iVar9 == 0) goto LAB_00103d1b;
LAB_00103b6a:
        *(byte **)(this + 0x328) = pbVar5 + 1;
        uVar8 = (uint)*pbVar5;
        *(int *)(this + 0x330) = iVar9 + -1;
      }
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar9 = *(int *)(this + 0x24bc) + 0x10;
      *(uint *)(this + 0x24c0) = uVar3;
      *(int *)(this + 0x24bc) = iVar9;
    }
    else {
      uVar3 = uVar3 << 8;
      *(uint *)(this + 0x24c0) = uVar3;
    }
    iVar4 = iVar9;
    if (uVar11 == 0xff) {
      do {
        *(int *)(this + 0x24bc) = iVar9 + -8;
        uVar11 = uVar3 >> 0x18;
        if (iVar9 + -8 < 1) {
          *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar9 & 0x1f);
          iVar4 = *(int *)(this + 0x330);
          if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int *)(this + 0x330);
            if (iVar4 != 0) goto LAB_00103bfc;
            uVar8 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar8 ^ 1;
            uVar8 = (-(uint)(uVar8 == 0) & 0x2600) + 0xd900;
LAB_00103d7b:
            prep_in_buffer(this);
            iVar4 = *(int *)(this + 0x330);
            if (iVar4 != 0) {
              pbVar5 = *(byte **)(this + 0x328);
              goto LAB_00103c27;
            }
            uVar7 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar7 ^ 1;
            uVar7 = (-(uint)(uVar7 == 0) & 0x26) + 0xd9;
          }
          else {
LAB_00103bfc:
            pbVar2 = *(byte **)(this + 0x328);
            iVar4 = iVar4 + -1;
            pbVar5 = pbVar2 + 1;
            *(byte **)(this + 0x328) = pbVar5;
            bVar1 = *pbVar2;
            *(int *)(this + 0x330) = iVar4;
            uVar8 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_00103d7b;
LAB_00103c27:
            *(byte **)(this + 0x328) = pbVar5 + 1;
            uVar7 = (uint)*pbVar5;
            *(int *)(this + 0x330) = iVar4 + -1;
          }
          iVar4 = *(int *)(this + 0x24bc);
          *(int *)(this + 0x24bc) = iVar4 + 0x10;
          *(uint *)(this + 0x24c0) =
               (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar7 | uVar8) << (-(char)iVar4 & 0x1fU);
        }
        else {
          *(uint *)(this + 0x24c0) = uVar3 << 8;
        }
        if (uVar11 != 0xff) goto LAB_00103c74;
        uVar3 = *(uint *)(this + 0x24c0);
        iVar9 = *(int *)(this + 0x24bc);
      } while( true );
    }
  } while( true );
LAB_00103c74:
  if (uVar11 == 0) goto LAB_00103ae8;
  if (uVar11 < 0xdb) {
    if (0xd7 < uVar11) {
      return uVar11;
    }
    if (uVar11 == 0xc4) {
      read_dht_marker(this);
      uVar3 = *(uint *)(this + 0x24c0);
      iVar4 = *(int *)(this + 0x24bc);
      goto LAB_00103b17;
    }
    if (0xc4 < uVar11) {
      uVar6 = 1L << ((char)(uVar3 >> 0x18) + 0x3bU & 0x3f);
      if ((uVar6 & 0x7f808) == 0) {
        if ((uVar6 & 0x777) != 0) {
          return uVar11;
        }
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff0f);
      }
LAB_00104331:
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff10);
    }
    if (uVar11 == 1) goto LAB_00104331;
    if (uVar11 - 0xc0 < 4) {
      return uVar11;
    }
  }
  else {
    if (uVar11 == 0xdb) {
      read_dqt_marker(this);
      uVar3 = *(uint *)(this + 0x24c0);
      iVar4 = *(int *)(this + 0x24bc);
      goto LAB_00103b17;
    }
    if (uVar11 == 0xdd) {
      iVar4 = *(int *)(this + 0x24bc);
      uVar3 = *(uint *)(this + 0x24c0);
      iVar9 = iVar4 + -0x10;
      *(int *)(this + 0x24bc) = iVar9;
      if (iVar9 < 1) {
        *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 == 0) {
          prep_in_buffer(this);
          iVar4 = *(int *)(this + 0x330);
          if (iVar4 != 0) goto LAB_00104043;
          uVar11 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar11 ^ 1;
          uVar11 = (-(uint)(uVar11 == 0) & 0x2600) + 0xd900;
LAB_001042ca:
          prep_in_buffer(this);
          iVar4 = *(int *)(this + 0x330);
          if (iVar4 != 0) {
            pbVar5 = *(byte **)(this + 0x328);
            goto LAB_0010406e;
          }
          uVar8 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar8 ^ 1;
          uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
        }
        else {
LAB_00104043:
          pbVar2 = *(byte **)(this + 0x328);
          iVar4 = iVar4 + -1;
          pbVar5 = pbVar2 + 1;
          *(byte **)(this + 0x328) = pbVar5;
          bVar1 = *pbVar2;
          *(int *)(this + 0x330) = iVar4;
          uVar11 = (uint)bVar1 << 8;
          if (iVar4 == 0) goto LAB_001042ca;
LAB_0010406e:
          *(byte **)(this + 0x328) = pbVar5 + 1;
          uVar8 = (uint)*pbVar5;
          *(int *)(this + 0x330) = iVar4 + -1;
        }
        iVar4 = *(int *)(this + 0x24bc);
        iVar9 = iVar4 + 0x10;
        *(int *)(this + 0x24bc) = iVar9;
        *(uint *)(this + 0x24c0) =
             (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar11) << (-(char)iVar4 & 0x1fU);
      }
      else {
        *(uint *)(this + 0x24c0) = uVar3 << 0x10;
      }
      if (uVar3 >> 0x10 != 4) {
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff0b);
      }
      uVar11 = *(uint *)(this + 0x24c0);
      iVar4 = iVar9 + -0x10;
      *(int *)(this + 0x24bc) = iVar4;
      uVar3 = uVar11 << 0x10;
      if (0 < iVar4) goto LAB_00103e60;
      iVar4 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar11 << ((byte)iVar9 & 0x1f);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_0010414d;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_001041e4:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar5 = *(byte **)(this + 0x328);
          goto LAB_00104174;
        }
        uVar8 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar8 ^ 1;
        uVar7 = 0xff;
        if (uVar8 != 0) {
          uVar7 = 0xd9;
        }
      }
      else {
LAB_0010414d:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar5 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar5;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar3 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_001041e4;
LAB_00104174:
        *(byte **)(this + 0x328) = pbVar5 + 1;
        uVar7 = (uint)*pbVar5;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar7 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar4 = *(int *)(this + 0x24bc) + 0x10;
LAB_00103e60:
      *(uint *)(this + 0x24c4) = uVar11 >> 0x10;
      goto LAB_00103b17;
    }
  }
  iVar9 = *(int *)(this + 0x24bc);
  uVar11 = *(uint *)(this + 0x24c0);
  iVar4 = iVar9 + -0x10;
  *(int *)(this + 0x24bc) = iVar4;
  if (0 < iVar4) {
    *(uint *)(this + 0x24c0) = uVar11 << 0x10;
    goto LAB_00103ecb;
  }
  *(uint *)(this + 0x24c0) = uVar11 << ((byte)iVar9 & 0x1f);
  iVar4 = *(int *)(this + 0x330);
  if (iVar4 == 0) {
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) goto LAB_001040c9;
    uVar3 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar3 ^ 1;
    uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00104255:
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) {
      pbVar5 = *(byte **)(this + 0x328);
      goto LAB_001040f4;
    }
    uVar8 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar8 ^ 1;
    uVar8 = (-(uint)(uVar8 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_001040c9:
    pbVar2 = *(byte **)(this + 0x328);
    iVar4 = iVar4 + -1;
    pbVar5 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar5;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar4;
    uVar3 = (uint)bVar1 << 8;
    if (iVar4 == 0) goto LAB_00104255;
LAB_001040f4:
    *(byte **)(this + 0x328) = pbVar5 + 1;
    uVar8 = (uint)*pbVar5;
    *(int *)(this + 0x330) = iVar4 + -1;
  }
  iVar9 = *(int *)(this + 0x24bc);
  iVar4 = iVar9 + 0x10;
  *(int *)(this + 0x24bc) = iVar4;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar8 | uVar3) << (-(char)iVar9 & 0x1fU);
LAB_00103ecb:
  if (uVar11 >> 0x10 < 2) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff0a);
  }
  uVar3 = *(uint *)(this + 0x24c0);
  for (iVar9 = (uVar11 >> 0x10) - 2; iVar9 != 0; iVar9 = iVar9 + -1) {
    iVar10 = iVar4 + -8;
    *(int *)(this + 0x24bc) = iVar10;
    if (iVar10 < 1) {
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar4 & 0x1f);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_00103f27;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_00103feb:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar5 = *(byte **)(this + 0x328);
          goto LAB_00103f52;
        }
        uVar11 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar11 ^ 1;
        uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_00103f27:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar5 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar5;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar3 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_00103feb;
LAB_00103f52:
        *(byte **)(this + 0x328) = pbVar5 + 1;
        uVar11 = (uint)*pbVar5;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar3) <<
              (-(char)*(int *)(this + 0x24bc) & 0x1fU);
      iVar10 = *(int *)(this + 0x24bc) + 0x10;
      *(uint *)(this + 0x24c0) = uVar3;
      *(int *)(this + 0x24bc) = iVar10;
    }
    else {
      uVar3 = uVar3 << 8;
      *(uint *)(this + 0x24c0) = uVar3;
    }
    iVar4 = iVar10;
  }
  goto LAB_00103b17;
}



/* jpeg_decoder::locate_soi_marker() */

void __thiscall jpeg_decoder::locate_soi_marker(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(this + 0x24c0);
  iVar5 = *(int *)(this + 0x24bc);
  iVar7 = iVar5 + -8;
  uVar3 = uVar9 << 8;
  *(int *)(this + 0x24bc) = iVar7;
  if (iVar7 < 1) {
    iVar7 = *(int *)(this + 0x330);
    *(uint *)(this + 0x24c0) = uVar9 << ((byte)iVar5 & 0x1f);
    if (iVar7 == 0) {
      prep_in_buffer(this);
      iVar7 = *(int *)(this + 0x330);
      if (iVar7 != 0) goto LAB_0010460d;
      uVar3 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar3 ^ 1;
      uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_001046a1:
      prep_in_buffer(this);
      iVar7 = *(int *)(this + 0x330);
      if (iVar7 != 0) {
        pbVar8 = *(byte **)(this + 0x328);
        goto LAB_00104634;
      }
      uVar10 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar10 ^ 1;
      uVar10 = (-(uint)(uVar10 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_0010460d:
      pbVar2 = *(byte **)(this + 0x328);
      iVar7 = iVar7 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar8;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar7;
      uVar3 = (uint)bVar1 << 8;
      if (iVar7 == 0) goto LAB_001046a1;
LAB_00104634:
      *(byte **)(this + 0x328) = pbVar8 + 1;
      uVar10 = (uint)*pbVar8;
      *(int *)(this + 0x330) = iVar7 + -1;
    }
    iVar7 = *(int *)(this + 0x24bc) + 0x10;
    uVar3 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar10 | uVar3) <<
            (-(char)*(int *)(this + 0x24bc) & 0x1fU);
  }
  *(int *)(this + 0x24bc) = iVar7 + -8;
  if (0 < iVar7 + -8) {
    *(uint *)(this + 0x24c0) = uVar3 << 8;
    goto LAB_001043b7;
  }
  *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar7 & 0x1f);
  iVar5 = *(int *)(this + 0x330);
  if (iVar5 == 0) {
    prep_in_buffer(this);
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 != 0) goto LAB_0010458b;
    uVar10 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar10 ^ 1;
    uVar10 = (-(uint)(uVar10 == 0) & 0x2600) + 0xd900;
LAB_00104716:
    prep_in_buffer(this);
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 != 0) {
      pbVar8 = *(byte **)(this + 0x328);
      goto LAB_001045b6;
    }
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_0010458b:
    pbVar2 = *(byte **)(this + 0x328);
    iVar5 = iVar5 + -1;
    pbVar8 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar8;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar5;
    uVar10 = (uint)bVar1 << 8;
    if (iVar5 == 0) goto LAB_00104716;
LAB_001045b6:
    *(byte **)(this + 0x328) = pbVar8 + 1;
    uVar6 = (uint)*pbVar8;
    *(int *)(this + 0x330) = iVar5 + -1;
  }
  iVar5 = *(int *)(this + 0x24bc);
  *(int *)(this + 0x24bc) = iVar5 + 0x10;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar10) << (-(char)iVar5 & 0x1fU);
LAB_001043b7:
  if ((uVar9 >> 0x18 == 0xff) && (uVar3 >> 0x18 == 0xd8)) {
    return;
  }
  iVar5 = *(int *)(this + 0x24bc);
  iVar7 = 0xfff;
  uVar9 = uVar3 >> 0x18;
  do {
    uVar3 = *(uint *)(this + 0x24c0);
    iVar4 = iVar5 + -8;
    *(int *)(this + 0x24bc) = iVar4;
    uVar10 = uVar3 >> 0x18;
    if (iVar4 < 1) {
      iVar4 = *(int *)(this + 0x330);
      *(uint *)(this + 0x24c0) = uVar3 << ((byte)iVar5 & 0x1f);
      if (iVar4 == 0) {
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) goto LAB_0010445a;
        uVar3 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar3 ^ 1;
        uVar3 = (-(uint)(uVar3 == 0) & 0x2600) + 0xd900;
LAB_0010450b:
        prep_in_buffer(this);
        iVar4 = *(int *)(this + 0x330);
        if (iVar4 != 0) {
          pbVar8 = *(byte **)(this + 0x328);
          goto LAB_00104485;
        }
        uVar6 = *(uint *)(this + 0x334);
        *(uint *)(this + 0x334) = uVar6 ^ 1;
        uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
      }
      else {
LAB_0010445a:
        pbVar2 = *(byte **)(this + 0x328);
        iVar4 = iVar4 + -1;
        pbVar8 = pbVar2 + 1;
        *(byte **)(this + 0x328) = pbVar8;
        bVar1 = *pbVar2;
        *(int *)(this + 0x330) = iVar4;
        uVar3 = (uint)bVar1 << 8;
        if (iVar4 == 0) goto LAB_0010450b;
LAB_00104485:
        *(byte **)(this + 0x328) = pbVar8 + 1;
        uVar6 = (uint)*pbVar8;
        *(int *)(this + 0x330) = iVar4 + -1;
      }
      iVar4 = *(int *)(this + 0x24bc);
      iVar5 = iVar4 + 0x10;
      *(int *)(this + 0x24bc) = iVar5;
      *(uint *)(this + 0x24c0) =
           (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar3) << (-(char)iVar4 & 0x1fU);
    }
    else {
      *(uint *)(this + 0x24c0) = uVar3 << 8;
      iVar5 = iVar4;
    }
    if (uVar9 == 0xff) {
      if (uVar10 == 0xd8) {
        if (this[0x24c3] == (jpeg_decoder)0xff) {
          return;
        }
        break;
      }
      if (uVar10 == 0xd9) break;
    }
    iVar7 = iVar7 + -1;
    uVar9 = uVar10;
  } while (iVar7 != 0);
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff11);
}



/* jpeg_decoder::locate_sof_marker() */

void __thiscall jpeg_decoder::locate_sof_marker(jpeg_decoder *this)

{
  int iVar1;
  
  locate_soi_marker(this);
  iVar1 = process_markers(this);
  if (iVar1 == 0xc2) {
    *(undefined4 *)(this + 0xe0) = 1;
    read_sof_marker(this);
    return;
  }
  if (iVar1 < 0xc3) {
    if (iVar1 - 0xc0U < 2) {
      read_sof_marker(this);
      return;
    }
  }
  else if (iVar1 == 0xc9) {
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff0f);
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff12);
}



/* jpeg_decoder::locate_sos_marker() */

undefined8 __thiscall jpeg_decoder::locate_sos_marker(jpeg_decoder *this)

{
  int iVar1;
  
  iVar1 = process_markers(this);
  if (iVar1 == 0xd9) {
    return 0;
  }
  if (iVar1 == 0xda) {
    read_sos_marker(this);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff10);
}



/* jpeg_decoder::init(jpeg_decoder_stream*) */

void __thiscall jpeg_decoder::init(jpeg_decoder *this,jpeg_decoder_stream *param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  jpeg_decoder *pjVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1fc) = (undefined1  [16])0x0;
  *(jpeg_decoder_stream **)(this + 0xd8) = param_1;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x3548) = 0;
  this[0x354c] = (jpeg_decoder)0x0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined1 (*) [16])(this + 0x20c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x21c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x22c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x23c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x254) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x264) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x27c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x300) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x314) = (undefined1  [16])0x0;
  *(jpeg_decoder **)(this + 0x328) = this + 0x3b9;
  *(undefined8 *)(this + 0x24c) = 0;
  *(undefined8 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  this[0x338] = (jpeg_decoder)0x0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x339) = 0;
  *(undefined8 *)(this + 0x3b1) = 0;
  puVar10 = (undefined8 *)((ulong)(this + 0x341) & 0xfffffffffffffff8);
  for (uVar7 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x341) & 0xfffffffffffffff8))
                       + 0x3b9U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  memset(this + 0x3b9,0,0x2080);
  *(undefined8 *)(this + 0x2439) = 0;
  *(undefined8 *)(this + 0x24b1) = 0;
  puVar10 = (undefined8 *)((ulong)(this + 0x2441) & 0xfffffffffffffff8);
  for (uVar7 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x2441) & 0xfffffffffffffff8)
                       ) + 0x24b9U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
  }
  this[0x24e4] = (jpeg_decoder)0x0;
  *(undefined8 *)(this + 0x24d4) = 0;
  *(undefined8 *)(this + 0x24dc) = 0;
  *(undefined4 *)(this + 0x24e8) = 0;
  *(undefined8 *)(this + 0x2500) = 0;
  *(undefined8 *)(this + 0x2530) = 0;
  *(undefined4 *)(this + 0x3550) = 0;
  *(undefined1 (*) [16])(this + 0x24ec) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x24c4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3538) = (undefined1  [16])0x0;
  prep_in_buffer(this);
  iVar4 = *(int *)(this + 0x330);
  *(undefined8 *)(this + 0x24bc) = 0;
  if (iVar4 == 0) {
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) goto LAB_00104aaf;
    uVar9 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar9 ^ 1;
    uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00104c68:
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) {
      pbVar8 = *(byte **)(this + 0x328);
      goto LAB_00104ad8;
    }
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00104aaf:
    pbVar1 = *(byte **)(this + 0x328);
    iVar4 = iVar4 + -1;
    pbVar8 = pbVar1 + 1;
    *(byte **)(this + 0x328) = pbVar8;
    bVar11 = *pbVar1;
    *(int *)(this + 0x330) = iVar4;
    uVar9 = (uint)bVar11 << 8;
    if (iVar4 == 0) goto LAB_00104c68;
LAB_00104ad8:
    *(byte **)(this + 0x328) = pbVar8 + 1;
    uVar6 = (uint)*pbVar8;
    *(int *)(this + 0x330) = iVar4 + -1;
  }
  cVar2 = (char)*(int *)(this + 0x24bc);
  iVar4 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar9) << (-cVar2 & 0x1fU);
  if (0 < *(int *)(this + 0x24bc)) {
    *(int *)(this + 0x24c0) = iVar4 << 0x10;
    goto LAB_00104b15;
  }
  *(int *)(this + 0x24c0) = iVar4 << (cVar2 + 0x10U & 0x1f);
  iVar4 = *(int *)(this + 0x330);
  if (iVar4 == 0) {
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) goto LAB_00104b55;
    uVar9 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar9 ^ 1;
    uVar9 = (-(uint)(uVar9 == 0) & 0x2600) + 0xd900;
LAB_00104bf2:
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) {
      pbVar8 = *(byte **)(this + 0x328);
      goto LAB_00104b7a;
    }
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    uVar6 = (-(uint)(uVar6 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_00104b55:
    pbVar1 = *(byte **)(this + 0x328);
    iVar4 = iVar4 + -1;
    pbVar8 = pbVar1 + 1;
    *(byte **)(this + 0x328) = pbVar8;
    bVar11 = *pbVar1;
    *(int *)(this + 0x330) = iVar4;
    uVar9 = (uint)bVar11 << 8;
    if (iVar4 == 0) goto LAB_00104bf2;
LAB_00104b7a:
    *(byte **)(this + 0x328) = pbVar8 + 1;
    uVar6 = (uint)*pbVar8;
    *(int *)(this + 0x330) = iVar4 + -1;
  }
  iVar4 = *(int *)(this + 0x24bc);
  *(int *)(this + 0x24bc) = iVar4 + 0x10;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar6 | uVar9) << (-(char)iVar4 & 0x1fU);
LAB_00104b15:
  uVar3 = _LC2;
  pjVar5 = this + 0x2508;
  do {
    *(undefined8 *)pjVar5 = uVar3;
    pjVar5 = pjVar5 + 8;
  } while (this + 0x2530 != pjVar5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* jpeg_decoder::create_look_ups() */

void __thiscall jpeg_decoder::create_look_ups(jpeg_decoder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  jpeg_decoder *pjVar13;
  jpeg_decoder *pjVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar12 = _UNK_00112c5c;
  iVar11 = _UNK_00112c58;
  iVar10 = _UNK_00112c54;
  iVar9 = __LC9;
  iVar8 = _UNK_00112c4c;
  iVar7 = _UNK_00112c48;
  iVar6 = _UNK_00112c44;
  iVar5 = __LC8;
  iVar4 = _UNK_00112c3c;
  iVar3 = _UNK_00112c38;
  iVar2 = _UNK_00112c34;
  iVar1 = __LC7;
  pjVar13 = this + 0x2538;
  iVar19 = __LC6;
  iVar20 = _UNK_00112c24;
  iVar21 = _UNK_00112c28;
  iVar22 = _UNK_00112c2c;
  do {
    pjVar14 = pjVar13 + 0x10;
    iVar15 = iVar19 + iVar5;
    iVar16 = iVar20 + iVar6;
    iVar17 = iVar21 + iVar7;
    iVar18 = iVar22 + iVar8;
    *(int *)pjVar13 = iVar15 * 0x166e9 + iVar9 >> 0x10;
    *(int *)(pjVar13 + 4) = iVar16 * 0x166e9 + iVar10 >> 0x10;
    *(int *)(pjVar13 + 8) = iVar17 * 0x166e9 + iVar11 >> 0x10;
    *(int *)(pjVar13 + 0xc) = iVar18 * 0x166e9 + iVar12 >> 0x10;
    *(int *)(pjVar13 + 0x400) = iVar15 * 0x1c5a2 + iVar9 >> 0x10;
    *(int *)(pjVar13 + 0x404) = iVar16 * 0x1c5a2 + iVar10 >> 0x10;
    *(int *)(pjVar13 + 0x408) = iVar17 * 0x1c5a2 + iVar11 >> 0x10;
    *(int *)(pjVar13 + 0x40c) = iVar18 * 0x1c5a2 + iVar12 >> 0x10;
    *(int *)(pjVar13 + 0x800) = iVar15 * -0xb6d2;
    *(int *)(pjVar13 + 0x804) = iVar16 * -0xb6d2;
    *(int *)(pjVar13 + 0x808) = iVar17 * -0xb6d2;
    *(int *)(pjVar13 + 0x80c) = iVar18 * -0xb6d2;
    *(int *)(pjVar13 + 0xc00) = iVar9 + iVar15 * -0x581a;
    *(int *)(pjVar13 + 0xc04) = iVar10 + iVar16 * -0x581a;
    *(int *)(pjVar13 + 0xc08) = iVar11 + iVar17 * -0x581a;
    *(int *)(pjVar13 + 0xc0c) = iVar12 + iVar18 * -0x581a;
    pjVar13 = pjVar14;
    iVar19 = iVar19 + iVar1;
    iVar20 = iVar20 + iVar2;
    iVar21 = iVar21 + iVar3;
    iVar22 = iVar22 + iVar4;
  } while (this + 0x2938 != pjVar14);
  return;
}



/* jpeg_decoder::fix_in_buffer() */

void __thiscall jpeg_decoder::fix_in_buffer(jpeg_decoder *this)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x24bc);
  if (iVar2 == 0x10) {
    lVar1 = *(long *)(this + 0x328);
    *(long *)(this + 0x328) = lVar1 + -1;
    *(char *)(lVar1 + -1) = (char)*(undefined4 *)(this + 0x24c0);
    iVar2 = *(int *)(this + 0x24bc);
    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
  }
  if (7 < iVar2) {
    lVar1 = *(long *)(this + 0x328);
    *(long *)(this + 0x328) = lVar1 + -1;
    *(char *)(lVar1 + -1) = (char)((uint)*(undefined4 *)(this + 0x24c0) >> 8);
    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
  }
  lVar1 = *(long *)(this + 0x328);
  *(long *)(this + 0x328) = lVar1 + -1;
  *(char *)(lVar1 + -1) = (char)*(undefined2 *)(this + 0x24c2);
  lVar1 = *(long *)(this + 0x328);
  *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
  *(long *)(this + 0x328) = lVar1 + -1;
  *(jpeg_decoder *)(lVar1 + -1) = this[0x24c3];
  *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
  *(undefined4 *)(this + 0x24bc) = 0x10;
  get_bits_no_markers(this,0x10);
  get_bits_no_markers(this,0x10);
  return;
}



/* jpeg_decoder::process_restart() */

void __thiscall jpeg_decoder::process_restart(jpeg_decoder *this)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0x600;
  do {
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int *)(this + 0x330);
      if (iVar5 != 0) goto LAB_00104ef8;
      uVar6 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar6 ^ 1;
      iVar5 = 0;
      if (uVar6 == 0) goto LAB_00104f94;
    }
    else {
LAB_00104ef8:
      pcVar3 = *(char **)(this + 0x328);
      iVar5 = iVar5 + -1;
      *(char **)(this + 0x328) = pcVar3 + 1;
      cVar1 = *pcVar3;
      *(int *)(this + 0x330) = iVar5;
      if (cVar1 == -1) goto LAB_00104f94;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
LAB_00105050:
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff1b);
LAB_00104f94:
  if (iVar5 == 0) {
    prep_in_buffer(this);
    iVar5 = *(int *)(this + 0x330);
    if (iVar5 != 0) goto LAB_00104f60;
    uVar6 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar6 ^ 1;
    if (uVar6 != 0) {
      uVar6 = 0xd9;
      goto LAB_00104fc4;
    }
  }
  else {
LAB_00104f60:
    pbVar4 = *(byte **)(this + 0x328);
    *(byte **)(this + 0x328) = pbVar4 + 1;
    bVar2 = *pbVar4;
    uVar6 = (uint)bVar2;
    *(int *)(this + 0x330) = iVar5 + -1;
    if (bVar2 != 0xff) {
LAB_00104fc4:
      iVar7 = *(int *)(this + 0x24cc);
      if (iVar7 + 0xd0U == uVar6) {
        memset(this + 0x24ec,0,(long)*(int *)(this + 0x194) << 2);
        *(undefined4 *)(this + 0x310) = 0;
        *(undefined4 *)(this + 0x24bc) = 0x10;
        *(ulong *)(this + 0x24c8) = CONCAT44(iVar7 + 1,*(undefined4 *)(this + 0x24c4)) & 0x7ffffffff
        ;
        get_bits_no_markers(this,0x10);
        get_bits_no_markers(this,0x10);
        return;
      }
      goto LAB_00105050;
    }
  }
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) goto LAB_00105050;
  iVar5 = *(int *)(this + 0x330);
  goto LAB_00104f94;
}



/* jpeg_decoder::H1V1Convert() */

void __thiscall jpeg_decoder::H1V1Convert(jpeg_decoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  iVar4 = *(int *)(this + 0x24d0);
  lVar5 = *(long *)(this + 0x3538);
  pbVar11 = (byte *)((long)((*(int *)(this + 0x240) - *(int *)(this + 0x280)) * 8) +
                    *(long *)(this + 0x2530));
  if (0 < iVar4) {
    puVar10 = (undefined1 *)(lVar5 + 0x20);
    do {
      puVar7 = puVar10 + -0x20;
      pbVar9 = pbVar11;
      do {
        bVar1 = pbVar9[0x80];
        bVar2 = *pbVar9;
        bVar3 = pbVar9[0x40];
        uVar6 = *(int *)(this + (ulong)bVar1 * 4 + 0x2538) + (uint)bVar2;
        if (0xff < uVar6) {
          uVar6 = (int)~uVar6 >> 0x1f & 0xff;
        }
        *puVar7 = (char)uVar6;
        uVar6 = (*(int *)(this + (ulong)bVar3 * 4 + 0x3138) +
                 *(int *)(this + (ulong)bVar1 * 4 + 0x2d38) >> 0x10) + (uint)bVar2;
        if (0xff < uVar6) {
          uVar6 = (int)~uVar6 >> 0x1f & 0xff;
        }
        puVar7[1] = (char)uVar6;
        uVar6 = *(int *)(this + (ulong)bVar3 * 4 + 0x2938) + (uint)bVar2;
        if (0xff < uVar6) {
          uVar6 = (int)~uVar6 >> 0x1f & 0xff;
        }
        puVar7[2] = (char)uVar6;
        puVar8 = puVar7 + 4;
        pbVar9 = pbVar9 + 1;
        puVar7[3] = 0xff;
        puVar7 = puVar8;
      } while (puVar8 != puVar10);
      puVar10 = puVar10 + 0x20;
      pbVar11 = pbVar11 + 0xc0;
    } while ((undefined1 *)(lVar5 + 0x40 + (ulong)(iVar4 - 1) * 0x20) != puVar10);
    return;
  }
  return;
}



/* jpeg_decoder::H2V1Convert() */

void __thiscall jpeg_decoder::H2V1Convert(jpeg_decoder *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  uint uVar18;
  
  lVar5 = *(long *)(this + 0x2530);
  puVar17 = *(undefined1 **)(this + 0x3538);
  lVar7 = (long)((*(int *)(this + 0x240) - *(int *)(this + 0x280)) * 8);
  lVar11 = lVar5 + 0x80 + lVar7;
  iVar2 = *(int *)(this + 0x24d0);
  if (0 < iVar2) {
    lVar16 = lVar11;
    do {
      lVar14 = lVar11 + -0x80;
      puVar10 = puVar17;
      lVar15 = lVar16;
      do {
        lVar13 = 0;
        puVar9 = puVar10;
        do {
          uVar12 = (ulong)*(byte *)(lVar15 + 0x40 + lVar13);
          iVar3 = *(int *)(this + uVar12 * 4 + 0x2538);
          iVar4 = *(int *)(this + (ulong)*(byte *)(lVar15 + lVar13) * 4 + 0x2938);
          uVar8 = (uint)*(byte *)(lVar14 + lVar13 * 2);
          iVar6 = *(int *)(this + (ulong)*(byte *)(lVar15 + lVar13) * 4 + 0x3138) +
                  *(int *)(this + uVar12 * 4 + 0x2d38) >> 0x10;
          uVar18 = iVar3 + uVar8;
          if (0xff < uVar18) {
            uVar18 = (int)~uVar18 >> 0x1f & 0xff;
          }
          *puVar9 = (char)uVar18;
          uVar18 = iVar6 + uVar8;
          if (0xff < uVar18) {
            uVar18 = (int)~uVar18 >> 0x1f & 0xff;
          }
          uVar8 = uVar8 + iVar4;
          puVar9[1] = (char)uVar18;
          if (0xff < uVar8) {
            uVar8 = (int)~uVar8 >> 0x1f & 0xff;
          }
          puVar9[2] = (char)uVar8;
          puVar9[3] = 0xff;
          bVar1 = *(byte *)(lVar14 + 1 + lVar13 * 2);
          uVar18 = iVar3 + (uint)bVar1;
          if (0xff < uVar18) {
            uVar18 = (int)~uVar18 >> 0x1f & 0xff;
          }
          uVar8 = iVar6 + (uint)bVar1;
          puVar9[4] = (char)uVar18;
          if (0xff < uVar8) {
            uVar8 = (int)~uVar8 >> 0x1f & 0xff;
          }
          uVar18 = iVar4 + (uint)bVar1;
          puVar9[5] = (char)uVar8;
          if (0xff < uVar18) {
            uVar18 = (int)~uVar18 >> 0x1f & 0xff;
          }
          lVar13 = lVar13 + 1;
          puVar9[6] = (char)uVar18;
          puVar9[7] = 0xff;
          puVar9 = puVar9 + 8;
        } while (lVar13 != 4);
        lVar14 = lVar14 + 0x40;
        puVar10 = puVar10 + 0x20;
        lVar15 = lVar15 + 4;
      } while (lVar14 != lVar11);
      lVar11 = lVar11 + 0x100;
      puVar17 = puVar17 + 0x40;
      lVar16 = lVar16 + 0x100;
    } while (lVar5 + lVar7 + 0x180 + (ulong)(iVar2 - 1) * 0x100 != lVar11);
  }
  return;
}



/* jpeg_decoder::H1V2Convert() */

void __thiscall jpeg_decoder::H1V2Convert(jpeg_decoder *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar4 = *(int *)(this + 0x240) - *(int *)(this + 0x280);
  lVar10 = *(long *)(this + 0x3540);
  lVar11 = *(long *)(this + 0x3538);
  lVar13 = *(long *)(this + 0x2530);
  if ((int)uVar4 < 8) {
    lVar12 = (int)(uVar4 * 8) + lVar13;
  }
  else {
    lVar12 = lVar13 + 0x40 + (ulong)(uVar4 & 7) * 8;
  }
  lVar13 = lVar13 + 0x80 + (long)(((int)uVar4 >> 1) << 3);
  if (0 < (int)*(uint *)(this + 0x24d0)) {
    lVar1 = lVar10 + (ulong)*(uint *)(this + 0x24d0) * 0x20;
    do {
      lVar5 = 0;
      do {
        uVar9 = (ulong)*(byte *)(lVar13 + 0x40 + lVar5);
        iVar2 = *(int *)(this + uVar9 * 4 + 0x2538);
        iVar3 = *(int *)(this + (ulong)*(byte *)(lVar13 + lVar5) * 4 + 0x2938);
        uVar8 = (uint)*(byte *)(lVar12 + lVar5);
        iVar6 = *(int *)(this + (ulong)*(byte *)(lVar13 + lVar5) * 4 + 0x3138) +
                *(int *)(this + uVar9 * 4 + 0x2d38) >> 0x10;
        uVar4 = iVar2 + uVar8;
        if (0xff < uVar4) {
          uVar4 = (int)~uVar4 >> 0x1f & 0xff;
        }
        *(char *)(lVar11 + lVar5 * 4) = (char)uVar4;
        uVar4 = iVar6 + uVar8;
        if (0xff < uVar4) {
          uVar4 = (int)~uVar4 >> 0x1f & 0xff;
        }
        uVar8 = uVar8 + iVar3;
        *(char *)(lVar11 + 1 + lVar5 * 4) = (char)uVar4;
        if (0xff < uVar8) {
          uVar8 = (int)~uVar8 >> 0x1f & 0xff;
        }
        *(char *)(lVar11 + 2 + lVar5 * 4) = (char)uVar8;
        *(undefined1 *)(lVar11 + 3 + lVar5 * 4) = 0xff;
        uVar4 = (uint)*(byte *)(lVar12 + 8 + lVar5);
        uVar8 = iVar2 + uVar4;
        if (0xff < uVar8) {
          uVar8 = (int)~uVar8 >> 0x1f & 0xff;
        }
        uVar7 = iVar6 + uVar4;
        *(char *)(lVar10 + lVar5 * 4) = (char)uVar8;
        if (0xff < uVar7) {
          uVar7 = (int)~uVar7 >> 0x1f & 0xff;
        }
        uVar4 = iVar3 + uVar4;
        *(char *)(lVar10 + 1 + lVar5 * 4) = (char)uVar7;
        if (0xff < uVar4) {
          uVar4 = (int)~uVar4 >> 0x1f & 0xff;
        }
        *(char *)(lVar10 + 2 + lVar5 * 4) = (char)uVar4;
        *(undefined1 *)(lVar10 + 3 + lVar5 * 4) = 0xff;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      lVar10 = lVar10 + 0x20;
      lVar11 = lVar11 + 0x20;
      lVar12 = lVar12 + 0x100;
      lVar13 = lVar13 + 0x100;
    } while (lVar10 != lVar1);
    return;
  }
  return;
}



/* jpeg_decoder::H2V2Convert() */

void __thiscall jpeg_decoder::H2V2Convert(jpeg_decoder *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  
  lVar6 = *(long *)(this + 0x2530);
  uVar4 = *(int *)(this + 0x240) - *(int *)(this + 0x280);
  puVar10 = *(undefined1 **)(this + 0x3538);
  puVar12 = *(undefined1 **)(this + 0x3540);
  if ((int)uVar4 < 8) {
    lVar18 = (int)(uVar4 * 8) + lVar6;
  }
  else {
    lVar18 = lVar6 + 0x80 + (ulong)(uVar4 & 7) * 8;
  }
  lVar6 = lVar6 + 0x100 + (long)(((int)uVar4 >> 1) << 3);
  if (0 < (int)*(uint *)(this + 0x24d0)) {
    lVar18 = lVar18 + 0x80;
    puVar5 = puVar10 + (ulong)*(uint *)(this + 0x24d0) * 0x40;
    do {
      lVar8 = lVar18 + -0x80;
      lVar9 = lVar6;
      puVar17 = puVar10;
      puVar19 = puVar12;
      do {
        lVar16 = 0;
        puVar11 = puVar17;
        puVar13 = puVar19;
        do {
          uVar15 = (ulong)*(byte *)(lVar9 + 0x40 + lVar16);
          iVar2 = *(int *)(this + uVar15 * 4 + 0x2538);
          uVar14 = (uint)*(byte *)(lVar8 + lVar16 * 2);
          iVar3 = *(int *)(this + (ulong)*(byte *)(lVar9 + lVar16) * 4 + 0x2938);
          iVar7 = *(int *)(this + (ulong)*(byte *)(lVar9 + lVar16) * 4 + 0x3138) +
                  *(int *)(this + uVar15 * 4 + 0x2d38) >> 0x10;
          uVar4 = iVar2 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          *puVar11 = (char)uVar4;
          uVar4 = iVar7 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          uVar14 = uVar14 + iVar3;
          puVar11[1] = (char)uVar4;
          if (0xff < uVar14) {
            uVar14 = (int)~uVar14 >> 0x1f & 0xff;
          }
          puVar11[2] = (char)uVar14;
          puVar11[3] = 0xff;
          uVar14 = (uint)*(byte *)(lVar8 + 1 + lVar16 * 2);
          uVar4 = iVar2 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          puVar11[4] = (char)uVar4;
          uVar4 = iVar7 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          uVar14 = uVar14 + iVar3;
          puVar11[5] = (char)uVar4;
          if (0xff < uVar14) {
            uVar14 = (int)~uVar14 >> 0x1f & 0xff;
          }
          puVar11[6] = (char)uVar14;
          puVar11[7] = 0xff;
          uVar14 = (uint)*(byte *)(lVar8 + 8 + lVar16 * 2);
          uVar4 = iVar2 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          *puVar13 = (char)uVar4;
          uVar4 = iVar7 + uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          uVar14 = uVar14 + iVar3;
          puVar13[1] = (char)uVar4;
          if (0xff < uVar14) {
            uVar14 = (int)~uVar14 >> 0x1f & 0xff;
          }
          puVar13[2] = (char)uVar14;
          puVar13[3] = 0xff;
          bVar1 = *(byte *)(lVar8 + 9 + lVar16 * 2);
          uVar4 = iVar2 + (uint)bVar1;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          uVar14 = iVar7 + (uint)bVar1;
          puVar13[4] = (char)uVar4;
          if (0xff < uVar14) {
            uVar14 = (int)~uVar14 >> 0x1f & 0xff;
          }
          uVar4 = iVar3 + (uint)bVar1;
          puVar13[5] = (char)uVar14;
          if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
          }
          lVar16 = lVar16 + 1;
          puVar13[6] = (char)uVar4;
          puVar11 = puVar11 + 8;
          puVar13[7] = 0xff;
          puVar13 = puVar13 + 8;
        } while (lVar16 != 4);
        lVar8 = lVar8 + 0x40;
        puVar17 = puVar17 + 0x20;
        puVar19 = puVar19 + 0x20;
        lVar9 = lVar9 + 4;
      } while (lVar8 != lVar18);
      lVar18 = lVar18 + 0x180;
      puVar10 = puVar10 + 0x40;
      lVar6 = lVar6 + 0x180;
      puVar12 = puVar12 + 0x40;
    } while (puVar5 != puVar10);
  }
  return;
}



/* jpeg_decoder::gray_convert() */

void __thiscall jpeg_decoder::gray_convert(jpeg_decoder *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(this + 0x24d0);
  puVar2 = *(undefined4 **)(this + 0x3538);
  if (0 < (int)uVar1) {
    puVar3 = puVar2;
    puVar5 = (undefined4 *)
             ((long)((*(int *)(this + 0x240) - *(int *)(this + 0x280)) * 8) +
             *(long *)(this + 0x2530));
    do {
      puVar4 = puVar3 + 2;
      *puVar3 = *puVar5;
      puVar3[1] = puVar5[1];
      puVar3 = puVar4;
      puVar5 = puVar5 + 0x10;
    } while (puVar4 != puVar2 + (ulong)uVar1 * 2);
  }
  return;
}



/* jpeg_decoder::expanded_convert() */

void __thiscall jpeg_decoder::expanded_convert(jpeg_decoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  iVar4 = *(int *)(this + 0x240) - *(int *)(this + 0x280);
  iVar14 = *(int *)(this + 0x24d0);
  puVar7 = *(undefined1 **)(this + 0x3538);
  iVar9 = iVar4 + 7;
  if (-1 < iVar4) {
    iVar9 = iVar4;
  }
  lVar10 = (long)((iVar9 >> 3) * *(int *)(this + 0x198) * 0x40) + (ulong)(iVar4 * 8 & 0x38) +
           *(long *)(this + 0x2530);
  if (0 < iVar14) {
    do {
      puVar8 = puVar7 + 0x20;
      lVar13 = 0;
      if (0 < *(int *)(this + 0x23c)) {
        do {
          iVar9 = *(int *)(this + 0x24e0);
          iVar4 = iVar9 * 0x40 + (int)lVar13 * 8;
          lVar12 = (long)iVar4;
          pbVar11 = (byte *)(lVar10 + lVar12);
          puVar7 = puVar8 + -0x20;
          do {
            puVar6 = puVar7;
            bVar1 = *pbVar11;
            bVar2 = pbVar11[(iVar9 * 0x40 + iVar4) - lVar12];
            bVar3 = pbVar11[lVar13 * 8 - lVar12];
            uVar5 = *(int *)(this + (ulong)bVar2 * 4 + 0x2538) + (uint)bVar3;
            if (0xff < uVar5) {
              uVar5 = (int)~uVar5 >> 0x1f & 0xff;
            }
            *puVar6 = (char)uVar5;
            uVar5 = (*(int *)(this + (ulong)bVar1 * 4 + 0x3138) +
                     *(int *)(this + (ulong)bVar2 * 4 + 0x2d38) >> 0x10) + (uint)bVar3;
            if (0xff < uVar5) {
              uVar5 = (int)~uVar5 >> 0x1f & 0xff;
            }
            puVar6[1] = (char)uVar5;
            uVar5 = (uint)bVar3 + *(int *)(this + (ulong)bVar1 * 4 + 0x2938);
            if (0xff < uVar5) {
              uVar5 = (int)~uVar5 >> 0x1f & 0xff;
            }
            puVar6[2] = (char)uVar5;
            puVar7 = puVar6 + 4;
            pbVar11 = pbVar11 + 1;
            puVar6[3] = 0xff;
          } while (puVar7 != puVar8);
          puVar8 = puVar6 + 0x24;
          lVar13 = lVar13 + 8;
        } while ((int)lVar13 < *(int *)(this + 0x23c));
      }
      lVar10 = lVar10 + (*(int *)(this + 0x24d8) << 6);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



/* jpeg_decoder::find_eoi() */

void __thiscall jpeg_decoder::find_eoi(jpeg_decoder *this)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (*(int *)(this + 0xe0) != 0) goto LAB_00105917;
  iVar4 = *(int *)(this + 0x330);
  *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << 0x10;
  *(undefined4 *)(this + 0x24bc) = 0;
  if (iVar4 == 0) {
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) goto LAB_0010594f;
    uVar7 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar7 ^ 1;
    uVar7 = (-(uint)(uVar7 == 0) & 0x2600) + 0xd900;
LAB_00105a85:
    prep_in_buffer(this);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 != 0) {
      pbVar6 = *(byte **)(this + 0x328);
      goto LAB_00105978;
    }
    uVar5 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar5 ^ 1;
    uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
  }
  else {
LAB_0010594f:
    pbVar2 = *(byte **)(this + 0x328);
    iVar4 = iVar4 + -1;
    pbVar6 = pbVar2 + 1;
    *(byte **)(this + 0x328) = pbVar6;
    bVar1 = *pbVar2;
    *(int *)(this + 0x330) = iVar4;
    uVar7 = (uint)bVar1 << 8;
    if (iVar4 == 0) goto LAB_00105a85;
LAB_00105978:
    *(byte **)(this + 0x328) = pbVar6 + 1;
    uVar5 = (uint)*pbVar6;
    *(int *)(this + 0x330) = iVar4 + -1;
  }
  cVar3 = (char)*(int *)(this + 0x24bc);
  iVar4 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar7) << (-cVar3 & 0x1fU);
  if (*(int *)(this + 0x24bc) < 1) {
    *(int *)(this + 0x24c0) = iVar4 << (cVar3 + 0x10U & 0x1f);
    iVar4 = *(int *)(this + 0x330);
    if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) goto LAB_001059e1;
      uVar7 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar7 ^ 1;
      uVar7 = (-(uint)(uVar7 == 0) & 0x2600) + 0xd900;
LAB_00105ae0:
      prep_in_buffer(this);
      iVar4 = *(int *)(this + 0x330);
      if (iVar4 != 0) {
        pbVar6 = *(byte **)(this + 0x328);
        goto LAB_00105a0a;
      }
      uVar5 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar5 ^ 1;
      uVar5 = (-(uint)(uVar5 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_001059e1:
      pbVar2 = *(byte **)(this + 0x328);
      iVar4 = iVar4 + -1;
      pbVar6 = pbVar2 + 1;
      *(byte **)(this + 0x328) = pbVar6;
      bVar1 = *pbVar2;
      *(int *)(this + 0x330) = iVar4;
      uVar7 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_00105ae0;
LAB_00105a0a:
      *(byte **)(this + 0x328) = pbVar6 + 1;
      uVar5 = (uint)*pbVar6;
      *(int *)(this + 0x330) = iVar4 + -1;
    }
    iVar4 = *(int *)(this + 0x24bc);
    *(int *)(this + 0x24bc) = iVar4 + 0x10;
    *(uint *)(this + 0x24c0) =
         (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar5 | uVar7) << (-(char)iVar4 & 0x1fU);
  }
  else {
    *(int *)(this + 0x24c0) = iVar4 << 0x10;
  }
  process_markers(this);
LAB_00105917:
  *(int *)(this + 0x3550) = *(int *)(this + 0x3550) - *(int *)(this + 0x330);
  return;
}



/* jpeg_decoder::make_huff_table(int, jpeg_decoder::huff_tables*) */

void __thiscall jpeg_decoder::make_huff_table(jpeg_decoder *this,int param_1,huff_tables *param_2)

{
  long lVar1;
  byte bVar2;
  huff_tables hVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long in_FS_OFFSET;
  uint local_558 [258];
  byte abStack_150 [4];
  byte abStack_14c [4];
  huff_tables local_148;
  byte abStack_147 [7];
  undefined1 local_140 [256];
  long local_40;
  
  lVar17 = (long)param_1;
  uVar16 = 1;
  lVar6 = *(long *)(this + lVar17 * 8 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = (huff_tables)(this[lVar17 + 0xe4] != (jpeg_decoder)0x0);
  iVar18 = 0;
  do {
    bVar2 = *(byte *)(lVar6 + uVar16);
    if (bVar2 != 0) {
      uVar10 = (uint)bVar2;
      lVar5 = (uVar16 & 0xff) * 0x101010101010101;
      pbVar8 = abStack_147 + (long)iVar18 + -1;
      if (uVar10 < 8) {
        if ((bVar2 & 4) == 0) {
          if ((uVar10 != 0) && (*pbVar8 = (byte)lVar5, (bVar2 & 2) != 0)) {
            *(short *)(pbVar8 + ((ulong)uVar10 - 2)) = (short)lVar5;
          }
        }
        else {
          *(int *)pbVar8 = (int)lVar5;
          *(int *)(pbVar8 + ((ulong)uVar10 - 4)) = (int)lVar5;
        }
      }
      else {
        *(long *)pbVar8 = lVar5;
        *(long *)(pbVar8 + ((ulong)uVar10 - 8)) = lVar5;
        plVar14 = (long *)((ulong)(local_140 + iVar18) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)(((int)pbVar8 -
                             (int)(long *)((ulong)(local_140 + iVar18) & 0xfffffffffffffff8)) +
                             uVar10 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
          *plVar14 = lVar5;
          plVar14 = plVar14 + 1;
        }
      }
      iVar18 = iVar18 + (uint)bVar2;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x11);
  lVar6 = (long)iVar18;
  abStack_147[lVar6 + -1] = 0;
  uVar7 = (uint)(byte)local_148;
  uVar10 = (uint)(byte)local_148;
  if (local_148 != (huff_tables)0x0) {
    uVar11 = 0;
    lVar5 = 0;
    do {
      for (; lVar1 = (long)((int)lVar5 + 1), uVar7 != uVar10; uVar10 = uVar10 + 1) {
        uVar11 = uVar11 * 2;
      }
      do {
        lVar5 = lVar1;
        bVar2 = abStack_147[lVar5 + -1];
        uVar7 = (uint)bVar2;
        local_558[lVar5 + -1] = uVar11;
        uVar11 = uVar11 + 1;
        lVar1 = lVar5 + 1;
      } while (uVar7 == uVar10);
      uVar11 = uVar11 * 2;
      uVar10 = uVar10 + 1;
    } while (bVar2 != 0);
  }
  iVar12 = (int)param_2;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0x3fc) = 0;
  puVar15 = (undefined8 *)((ulong)(param_2 + 0xc) & 0xfffffffffffffff8);
  for (uVar16 = (ulong)((iVar12 - (int)(undefined8 *)((ulong)(param_2 + 0xc) & 0xfffffffffffffff8))
                        + 0x404U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined8 *)(param_2 + 0x404) = 0;
  *(undefined8 *)(param_2 + 0x7fc) = 0;
  puVar15 = (undefined8 *)((ulong)(param_2 + 0x40c) & 0xfffffffffffffff8);
  for (uVar16 = (ulong)((iVar12 - (int)(undefined8 *)((ulong)(param_2 + 0x40c) & 0xfffffffffffffff8)
                        ) + 0x804U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined8 *)(param_2 + 0x904) = 0;
  *(undefined8 *)(param_2 + 0x10fc) = 0;
  puVar15 = (undefined8 *)((ulong)(param_2 + 0x90c) & 0xfffffffffffffff8);
  for (uVar16 = (ulong)((iVar12 - (int)(undefined8 *)((ulong)(param_2 + 0x90c) & 0xfffffffffffffff8)
                        ) + 0x1104U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined8 *)(param_2 + 0x804) = 0;
  *(undefined8 *)(param_2 + 0x8fc) = 0;
  puVar15 = (undefined8 *)((ulong)(param_2 + 0x80c) & 0xfffffffffffffff8);
  for (uVar16 = (ulong)((iVar12 - (int)(undefined8 *)((ulong)(param_2 + 0x80c) & 0xfffffffffffffff8)
                        ) + 0x904U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  if (0 < iVar18) {
    lVar5 = 0;
    iVar18 = -1;
    do {
      while( true ) {
        hVar3 = *(huff_tables *)(abStack_147 + lVar5 + -1);
        bVar2 = *(byte *)(*(long *)(this + (lVar17 + 0x26) * 8) + lVar5);
        uVar10 = local_558[lVar5];
        param_2[(ulong)bVar2 + 0x804] = hVar3;
        uVar7 = (uint)(byte)hVar3;
        if (8 < (byte)hVar3) break;
        uVar10 = uVar10 << (8U - (char)hVar3 & 0x1f);
        uVar19 = (1 << (8U - (char)hVar3 & 0x1f)) + uVar10;
        uVar11 = (uint)bVar2;
        if ((bVar2 & 0xf) == 0) {
          do {
            uVar16 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            *(uint *)(param_2 + uVar16 * 4 + 4) = uVar11;
            *(uint *)(param_2 + uVar16 * 4 + 0x404) = (uint)CONCAT11(hVar3,bVar2);
          } while (uVar10 != uVar19);
        }
        else {
          uVar7 = uVar7 + (bVar2 & 0xf);
          do {
            while (8 < uVar7) {
              uVar4 = uVar10 + 1;
              *(uint *)(param_2 + (ulong)uVar10 * 4 + 4) = uVar11;
              *(uint *)(param_2 + (ulong)uVar10 * 4 + 0x404) = (uint)CONCAT11(hVar3,bVar2);
              uVar10 = uVar4;
              if (uVar19 == uVar4) goto joined_r0x00105f0b;
            }
            uVar4 = uVar10 + 1;
            *(uint *)(param_2 + (ulong)uVar10 * 4 + 4) = (uint)bVar2;
            *(uint *)(param_2 + (ulong)uVar10 * 4 + 0x404) =
                 (uVar10 >> (8U - (char)uVar7 & 0x1f) & (1 << (sbyte)(bVar2 & 0xf)) - 1U) << 0x10 |
                 uVar11 | uVar7 * 0x100 | 0x8000;
            uVar10 = uVar4;
          } while (uVar4 != uVar19);
        }
joined_r0x00105f0b:
        lVar5 = lVar5 + 1;
        if (lVar6 == lVar5) goto LAB_00105dea;
      }
      uVar11 = uVar10 >> ((char)hVar3 - 8U & 0x1f) & 0xff;
      iVar12 = *(int *)(param_2 + (ulong)uVar11 * 4 + 4);
      iVar13 = iVar18;
      if (*(int *)(param_2 + (ulong)uVar11 * 4 + 4) == 0) {
        *(int *)(param_2 + (ulong)uVar11 * 4 + 4) = iVar18;
        *(int *)(param_2 + (ulong)uVar11 * 4 + 0x404) = iVar18;
        iVar13 = iVar18 + -2;
        iVar12 = iVar18;
      }
      uVar10 = uVar10 << (0x18U - (char)hVar3 & 0x1f);
      iVar18 = iVar13;
      for (; uVar7 != 9; uVar7 = uVar7 - 1) {
        lVar1 = (long)(int)~(iVar12 - (uint)((uVar10 & 0x8000) == 0)) + 0x240;
        iVar12 = *(int *)(param_2 + lVar1 * 4 + 4);
        iVar13 = iVar18;
        if (*(int *)(param_2 + lVar1 * 4 + 4) == 0) {
          *(int *)(param_2 + lVar1 * 4 + 4) = iVar18;
          iVar13 = iVar18 + -2;
          iVar12 = iVar18;
        }
        uVar10 = uVar10 * 2;
        iVar18 = iVar13;
      }
      lVar5 = lVar5 + 1;
      *(uint *)(param_2 + (long)(int)~(iVar12 - (uint)((uVar10 & 0x8000) == 0)) * 4 + 0x904) =
           (uint)bVar2;
    } while (lVar6 != lVar5);
  }
LAB_00105dea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* jpeg_decoder::check_quant_tables() */

void __thiscall jpeg_decoder::check_quant_tables(jpeg_decoder *this)

{
  jpeg_decoder *pjVar1;
  
  if (0 < *(int *)(this + 0x1f8)) {
    pjVar1 = this;
    do {
      if (*(long *)(this + (long)*(int *)(this + (long)*(int *)(pjVar1 + 0x1fc) * 4 + 0x1b8) * 8 +
                           0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff15);
      }
      pjVar1 = pjVar1 + 4;
    } while (pjVar1 != this + (long)*(int *)(this + 0x1f8) * 4);
  }
  return;
}



/* jpeg_decoder::check_huff_tables() */

void __thiscall jpeg_decoder::check_huff_tables(jpeg_decoder *this)

{
  jpeg_decoder *pjVar1;
  huff_tables *phVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x1f8)) {
    pjVar1 = this;
    do {
      if (*(int *)(this + 0x22c) == 0) {
        while( true ) {
          if (*(long *)(this + (long)*(int *)(this + (long)*(int *)(pjVar1 + 0x1fc) * 4 + 0x20c) * 8
                               + 0xf0) == 0) goto LAB_001060d7;
          if (0 < *(int *)(this + 0x230)) break;
          pjVar1 = pjVar1 + 4;
          if (pjVar1 == this + (long)*(int *)(this + 0x1f8) * 4) goto LAB_00106078;
        }
LAB_0010601a:
        if (*(long *)(this + (long)*(int *)(this + (long)*(int *)(pjVar1 + 0x1fc) * 4 + 0x21c) * 8 +
                             0xf0) == 0) {
LAB_001060d7:
                    /* WARNING: Subroutine does not return */
          stop_decoding(this,0xffffff16);
        }
      }
      else if (0 < *(int *)(this + 0x230)) goto LAB_0010601a;
      pjVar1 = pjVar1 + 4;
    } while (pjVar1 != this + (long)*(int *)(this + 0x1f8) * 4);
  }
LAB_00106078:
  lVar3 = 0;
  do {
    if (*(long *)(this + lVar3 * 8 + 0xf0) != 0) {
      phVar2 = *(huff_tables **)(this + lVar3 * 8 + 0x290);
      if (phVar2 == (huff_tables *)0x0) {
        phVar2 = (huff_tables *)alloc(this,0x1104,false);
        *(huff_tables **)(this + lVar3 * 8 + 0x290) = phVar2;
      }
      make_huff_table(this,(int)lVar3,phVar2);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  return;
}



/* jpeg_decoder::calc_mcu_block_order() */

void __thiscall jpeg_decoder::calc_mcu_block_order(jpeg_decoder *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  jpeg_decoder *pjVar7;
  jpeg_decoder *pjVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 < 1) {
    iVar11 = 0;
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    iVar11 = 0;
    pjVar7 = this;
    do {
      if (iVar12 < *(int *)(pjVar7 + 0x198)) {
        iVar12 = *(int *)(pjVar7 + 0x198);
      }
      if (iVar11 < *(int *)(pjVar7 + 0x1a8)) {
        iVar11 = *(int *)(pjVar7 + 0x1a8);
      }
      pjVar7 = pjVar7 + 4;
    } while (this + (long)iVar2 * 4 != pjVar7);
    iVar10 = *(int *)(this + 0xd0);
    iVar9 = *(int *)(this + 0xd4);
    pjVar7 = this;
    do {
      iVar5 = (*(int *)(pjVar7 + 0x198) * iVar10 + iVar12 + -1) / iVar12;
      iVar6 = iVar5 + 7;
      iVar5 = iVar5 + 0xe;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      *(int *)(pjVar7 + 0x1d8) = iVar5 >> 3;
      iVar5 = (*(int *)(pjVar7 + 0x1a8) * iVar9 + iVar11 + -1) / iVar11;
      iVar6 = iVar5 + 7;
      iVar5 = iVar5 + 0xe;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      pjVar8 = pjVar7 + 4;
      *(int *)(pjVar7 + 0x1e8) = iVar5 >> 3;
      pjVar7 = pjVar8;
    } while (this + (long)iVar2 * 4 != pjVar8);
  }
  iVar2 = *(int *)(this + 0x1f8);
  if (iVar2 != 1) {
    *(undefined4 *)(this + 0x244) = 0;
    iVar9 = *(int *)(this + 0xd0) + 7;
    iVar10 = *(int *)(this + 0xd0) + 0xe;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    *(int *)(this + 0x24c) = (iVar12 + -1 + (iVar10 >> 3)) / iVar12;
    iVar10 = *(int *)(this + 0xd4) + 7;
    iVar12 = *(int *)(this + 0xd4) + 0xe;
    if (-1 < iVar10) {
      iVar12 = iVar10;
    }
    *(int *)(this + 0x250) = (iVar11 + -1 + (iVar12 >> 3)) / iVar11;
    if (0 < iVar2) {
      pjVar7 = this;
      do {
        iVar12 = *(int *)(pjVar7 + 0x1fc);
        uVar1 = *(int *)(this + (long)iVar12 * 4 + 0x198) *
                *(int *)(this + (long)iVar12 * 4 + 0x1a8) - 1;
        if (*(int *)(this + (long)iVar12 * 4 + 0x198) * *(int *)(this + (long)iVar12 * 4 + 0x1a8) !=
            0) {
          iVar11 = *(int *)(this + 0x244);
          pjVar8 = this + (long)iVar11 * 4;
          do {
            *(int *)(pjVar8 + 0x254) = iVar12;
            pjVar8 = pjVar8 + 4;
          } while (pjVar8 != this + ((ulong)uVar1 + (long)iVar11) * 4 + 4);
          *(uint *)(this + 0x244) = iVar11 + 1 + uVar1;
        }
        pjVar7 = pjVar7 + 4;
      } while (this + (long)iVar2 * 4 != pjVar7);
    }
    return;
  }
  iVar2 = *(int *)(this + 0x1fc);
  uVar3 = *(undefined4 *)(this + (long)iVar2 * 4 + 0x1d8);
  uVar4 = *(undefined4 *)(this + (long)iVar2 * 4 + 0x1e8);
  *(int *)(this + 0x254) = iVar2;
  *(undefined4 *)(this + 0x244) = 1;
  *(ulong *)(this + 0x24c) = CONCAT44(uVar4,uVar3);
  return;
}



/* jpeg_decoder::init_scan() [clone .part.0] */

undefined8 __thiscall jpeg_decoder::init_scan(jpeg_decoder *this)

{
  jpeg_decoder *pjVar1;
  
  calc_mcu_block_order(this);
  check_huff_tables(this);
  if (0 < *(int *)(this + 0x1f8)) {
    pjVar1 = this;
    do {
      if (*(long *)(this + (long)*(int *)(this + (long)*(int *)(pjVar1 + 0x1fc) * 4 + 0x1b8) * 8 +
                           0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        stop_decoding(this,0xffffff15);
      }
      pjVar1 = pjVar1 + 4;
    } while (pjVar1 != this + (long)*(int *)(this + 0x1f8) * 4);
  }
  memset(this + 0x24ec,0,(long)*(int *)(this + 0x194) << 2);
  *(undefined4 *)(this + 0x310) = 0;
  if (*(int *)(this + 0x24c4) != 0) {
    *(int *)(this + 0x24c8) = *(int *)(this + 0x24c4);
    *(undefined4 *)(this + 0x24cc) = 0;
  }
  fix_in_buffer(this);
  return 1;
}



/* jpeg_decoder::init_scan() */

undefined8 __thiscall jpeg_decoder::init_scan(jpeg_decoder *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = process_markers(this);
  if (iVar1 == 0xd9) {
    return 0;
  }
  if (iVar1 == 0xda) {
    read_sos_marker(this);
    uVar2 = init_scan(this);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff10);
}



/* jpeg_decoder::init_frame() */

void __thiscall jpeg_decoder::init_frame(jpeg_decoder *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  jpeg_decoder *pjVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(this + 0x194) == 1) {
    if (*(int *)(this + 0x198) == 1) {
      if (*(int *)(this + 0x1a8) == 1) {
        iVar2 = 0;
        iVar7 = 7;
        iVar5 = 7;
        iVar8 = 8;
        iVar9 = 8;
        uVar6 = 1;
        goto LAB_0010648c;
      }
    }
  }
  else {
    if (*(int *)(this + 0x194) != 3) {
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff18);
    }
    if ((((*(int *)(this + 0x19c) == 1) && (*(int *)(this + 0x1ac) == 1)) &&
        (*(int *)(this + 0x1a0) == 1)) && (*(int *)(this + 0x1b0) == 1)) {
      if (*(int *)(this + 0x198) == 1) {
        if (*(int *)(this + 0x1a8) == 1) {
          iVar7 = 7;
          iVar8 = 8;
          iVar5 = 7;
          iVar9 = 8;
          uVar6 = 3;
          iVar2 = 1;
        }
        else {
          if (*(int *)(this + 0x1a8) != 2) goto LAB_00106418;
          iVar2 = 3;
          uVar6 = 4;
          iVar7 = 0xf;
          iVar8 = 0x10;
          iVar5 = 7;
          iVar9 = 8;
        }
      }
      else {
        if (*(int *)(this + 0x198) != 2) goto LAB_00106418;
        if (*(int *)(this + 0x1a8) == 1) {
          uVar6 = 4;
          iVar7 = 7;
          iVar5 = 0xf;
          iVar8 = 8;
          iVar9 = 0x10;
          iVar2 = 2;
        }
        else {
          if (*(int *)(this + 0x1a8) != 2) goto LAB_00106418;
          uVar6 = 6;
          iVar2 = 4;
          iVar7 = 0xf;
          iVar8 = 0x10;
          iVar5 = 0xf;
          iVar9 = 0x10;
        }
      }
LAB_0010648c:
      iVar1 = *(int *)(this + 0xd0);
      *(undefined4 *)(this + 0x24d4) = uVar6;
      *(int *)(this + 400) = iVar2;
      *(int *)(this + 0x23c) = iVar9;
      *(int *)(this + 0x240) = iVar8;
      *(int *)(this + 0x24d0) = (iVar5 + iVar1) / iVar9;
      *(int *)(this + 0x24e8) = (*(int *)(this + 0xd4) + iVar7) / iVar8;
      if (iVar2 == 0) {
        iVar5 = 1;
        iVar2 = iVar1;
      }
      else {
        iVar5 = 4;
        iVar2 = iVar1 * 4;
      }
      *(int *)(this + 0x284) = iVar2;
      *(int *)(this + 0x28c) = iVar5;
      iVar5 = (iVar1 + 0xfU & 0xfff0) * iVar5;
      *(int *)(this + 0x288) = iVar5;
      uVar3 = alloc(this,(long)iVar5,true);
      *(undefined8 *)(this + 0x3538) = uVar3;
      if (*(int *)(this + 400) - 3U < 2) {
        uVar3 = alloc(this,(long)*(int *)(this + 0x288),true);
        *(undefined8 *)(this + 0x3540) = uVar3;
      }
      iVar2 = *(int *)(this + 0x24d0) * *(int *)(this + 0x24d4);
      *(int *)(this + 0x248) = iVar2;
      if (iVar2 < 0x2001) {
        uVar3 = alloc(this,(long)(*(int *)(this + 0x24d4) << 6) * 2,false);
        iVar2 = *(int *)(this + 0x24d4);
        *(undefined8 *)(this + 0x2500) = uVar3;
        if (0 < iVar2) {
          pjVar4 = this;
          do {
            *(undefined4 *)(pjVar4 + 0x2508) = 0x40;
            pjVar4 = pjVar4 + 4;
          } while (pjVar4 != this + (long)iVar2 * 4);
        }
        *(int *)(this + 0x24e0) = *(int *)(this + 0x198) * *(int *)(this + 0x1a8);
        iVar5 = *(int *)(this + 0x198) * *(int *)(this + 0x1a8) * *(int *)(this + 0x194);
        iVar2 = *(int *)(this + 0x24d0) * iVar5;
        *(int *)(this + 0x24d8) = iVar5;
        this[0x24e4] = (jpeg_decoder)(iVar5 == 0xc);
        *(int *)(this + 0x24dc) = iVar2;
        if (iVar5 != 0xc) {
          iVar2 = *(int *)(this + 0x248);
        }
        uVar3 = alloc(this,(long)(iVar2 << 6),false);
        *(undefined4 *)(this + 0x280) = 0;
        *(undefined8 *)(this + 0x2530) = uVar3;
        *(undefined4 *)(this + 0x27c) = *(undefined4 *)(this + 0xd4);
        create_look_ups(this);
        return;
      }
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff1c);
    }
  }
LAB_00106418:
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff19);
}



/* jpeg_decoder::coeff_buf_open(int, int, int, int) */

undefined8 * __thiscall
jpeg_decoder::coeff_buf_open(jpeg_decoder *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = param_3 * param_4 * 2;
  puVar2 = (undefined8 *)alloc(this,0x20,false);
  *(int *)(puVar2 + 3) = iVar1;
  puVar2[1] = CONCAT44(param_2,param_1);
  puVar2[2] = CONCAT44(param_4,param_3);
  uVar3 = alloc(this,(long)(iVar1 * param_1 * param_2),true);
  *puVar2 = uVar3;
  return puVar2;
}



/* jpeg_decoder::decode_scan(void (*)(jpeg_decoder*, int, int, int)) */

void __thiscall
jpeg_decoder::decode_scan(jpeg_decoder *this,_func_void_jpeg_decoder_ptr_int_int_int *param_1)

{
  jpeg_decoder *pjVar1;
  jpeg_decoder *pjVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_78;
  int local_74;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  if (0 < *(int *)(this + 0x250)) {
    local_74 = 0;
    do {
      local_68 = (undefined1  [16])0x0;
      if (0 < *(int *)(this + 0x24c)) {
        local_78 = 0;
        do {
          if ((*(int *)(this + 0x24c4) != 0) && (*(int *)(this + 0x24c8) == 0)) {
            process_restart(this);
          }
          if (0 < *(int *)(this + 0x244)) {
            lVar6 = 0;
            iVar3 = 0;
            iVar7 = 0;
            do {
              while( true ) {
                lVar5 = (long)*(int *)(this + lVar6 * 4 + 0x254);
                iVar4 = *(int *)(local_68 + lVar5 * 4);
                (*param_1)(this,*(int *)(this + lVar6 * 4 + 0x254),iVar4 + iVar7,
                           *(int *)(local_58 + lVar5 * 4) + iVar3);
                if (*(int *)(this + 0x1f8) != 1) break;
                lVar6 = lVar6 + 1;
                *(int *)(local_68 + lVar5 * 4) = iVar4 + 1;
                if (*(int *)(this + 0x244) <= (int)lVar6) goto LAB_00106874;
              }
              iVar7 = iVar7 + 1;
              if (*(int *)(this + lVar5 * 4 + 0x198) == iVar7) {
                iVar3 = iVar3 + 1;
                if (*(int *)(this + lVar5 * 4 + 0x1a8) == iVar3) {
                  iVar4 = iVar4 + iVar7;
                  iVar3 = 0;
                  iVar7 = 0;
                  *(int *)(local_68 + lVar5 * 4) = iVar4;
                }
                else {
                  iVar7 = 0;
                }
              }
              lVar6 = lVar6 + 1;
            } while ((int)lVar6 < *(int *)(this + 0x244));
          }
LAB_00106874:
          local_78 = local_78 + 1;
          *(int *)(this + 0x24c8) = *(int *)(this + 0x24c8) + -1;
        } while (local_78 < *(int *)(this + 0x24c));
      }
      iVar3 = *(int *)(this + 0x1f8);
      if (iVar3 == 1) {
        *(int *)(local_58 + (long)*(int *)(this + 0x1fc) * 4) =
             *(int *)(local_58 + (long)*(int *)(this + 0x1fc) * 4) + 1;
      }
      else if (0 < iVar3) {
        pjVar2 = this;
        do {
          pjVar1 = pjVar2 + 0x1fc;
          pjVar2 = pjVar2 + 4;
          *(int *)(local_58 + (long)*(int *)pjVar1 * 4) =
               *(int *)(local_58 + (long)*(int *)pjVar1 * 4) +
               *(int *)(this + (long)*(int *)pjVar1 * 4 + 0x1a8);
        } while (this + (long)iVar3 * 4 != pjVar2);
      }
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(this + 0x250));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* jpeg_decoder::init_progressive() [clone .part.0] */

void __thiscall jpeg_decoder::init_progressive(jpeg_decoder *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  
  uVar7 = _LC10;
  lVar14 = 0;
  if (0 < *(int *)(this + 0x194)) {
    do {
      iVar8 = *(int *)(this + 0x24d0);
      iVar2 = *(int *)(this + lVar14 * 4 + 0x198);
      iVar3 = *(int *)(this + 0x24e8);
      iVar4 = *(int *)(this + lVar14 * 4 + 0x1a8);
      puVar9 = (undefined8 *)alloc(this,0x20,false);
      *(int *)((long)puVar9 + 0xc) = iVar3 * iVar4;
      *(int *)(puVar9 + 1) = iVar8 * iVar2;
      puVar9[2] = uVar7;
      *(undefined4 *)(puVar9 + 3) = 2;
      uVar10 = alloc(this,(long)(iVar3 * iVar4 * iVar8 * iVar2 * 2),true);
      iVar8 = *(int *)(this + 0x24d0);
      *puVar9 = uVar10;
      iVar2 = *(int *)(this + 0x24e8);
      iVar3 = *(int *)(this + lVar14 * 4 + 0x198);
      *(undefined8 **)(this + lVar14 * 8 + 0x2d0) = puVar9;
      iVar4 = *(int *)(this + lVar14 * 4 + 0x1a8);
      puVar9 = (undefined8 *)alloc(this,0x20,false);
      *(int *)((long)puVar9 + 0xc) = iVar2 * iVar4;
      *(int *)(puVar9 + 1) = iVar8 * iVar3;
      uVar10 = _LC11;
      *(undefined4 *)(puVar9 + 3) = 0x80;
      puVar9[2] = uVar10;
      uVar10 = alloc(this,(long)(iVar2 * iVar4 * iVar8 * iVar3 * 0x80),true);
      *puVar9 = uVar10;
      *(undefined8 **)(this + lVar14 * 8 + 0x2f0) = puVar9;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < *(int *)(this + 0x194));
  }
LAB_00106a80:
  iVar8 = process_markers(this);
  do {
    if (iVar8 == 0xd9) {
LAB_00106ba9:
      iVar8 = *(int *)(this + 0x194);
      lVar14 = 0;
      *(int *)(this + 0x1f8) = iVar8;
      if (0 < iVar8) {
        do {
          *(int *)(this + lVar14 * 4 + 0x1fc) = (int)lVar14;
          lVar14 = lVar14 + 1;
        } while (iVar8 != lVar14);
      }
      calc_mcu_block_order(this);
      return;
    }
    if (iVar8 != 0xda) {
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff10);
    }
    read_sos_marker(this);
    iVar8 = init_scan(this);
    if (iVar8 == 0) goto LAB_00106ba9;
    iVar8 = *(int *)(this + 0x230);
    iVar2 = *(int *)(this + 0x238);
    if ((iVar8 < *(int *)(this + 0x22c)) || (0x3f < iVar8)) {
LAB_00106dbc:
                    /* WARNING: Subroutine does not return */
      stop_decoding(this,0xffffff1d);
    }
    if (*(int *)(this + 0x22c) == 0) {
      if (iVar8 != 0) goto LAB_00106dbc;
      pcVar13 = decode_block_dc_first;
      if (iVar2 != 0) {
        if (iVar2 + -1 != *(int *)(this + 0x234)) {
LAB_00106dd6:
                    /* WARNING: Subroutine does not return */
          stop_decoding(this,0xffffff1e);
        }
        pcVar13 = decode_block_dc_refine;
      }
    }
    else {
      if (*(int *)(this + 0x1f8) != 1) goto LAB_00106dbc;
      pcVar13 = decode_block_ac_first;
      if (iVar2 != 0) {
        if (iVar2 + -1 != *(int *)(this + 0x234)) goto LAB_00106dd6;
        pcVar13 = decode_block_ac_refine;
      }
    }
    decode_scan(this,pcVar13);
    iVar8 = *(int *)(this + 0x330);
    *(undefined4 *)(this + 0x24bc) = 0;
    *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << 0x10;
    if (iVar8 == 0) {
      prep_in_buffer(this);
      iVar8 = *(int *)(this + 0x330);
      if (iVar8 != 0) goto LAB_00106b29;
      uVar15 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar15 ^ 1;
      uVar15 = (-(uint)(uVar15 == 0) & 0x2600) + 0xd900;
LAB_00106ceb:
      prep_in_buffer(this);
      iVar8 = *(int *)(this + 0x330);
      if (iVar8 != 0) {
        pbVar12 = *(byte **)(this + 0x328);
        goto LAB_00106b54;
      }
      uVar11 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar11 ^ 1;
      uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
    }
    else {
LAB_00106b29:
      pbVar5 = *(byte **)(this + 0x328);
      iVar8 = iVar8 + -1;
      pbVar12 = pbVar5 + 1;
      *(byte **)(this + 0x328) = pbVar12;
      bVar1 = *pbVar5;
      *(int *)(this + 0x330) = iVar8;
      uVar15 = (uint)bVar1 << 8;
      if (iVar8 == 0) goto LAB_00106ceb;
LAB_00106b54:
      *(byte **)(this + 0x328) = pbVar12 + 1;
      uVar11 = (uint)*pbVar12;
      *(int *)(this + 0x330) = iVar8 + -1;
    }
    cVar6 = (char)*(int *)(this + 0x24bc);
    iVar8 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar15) << (-cVar6 & 0x1fU);
    if (*(int *)(this + 0x24bc) < 1) break;
    *(int *)(this + 0x24c0) = iVar8 << 0x10;
    iVar8 = process_markers(this);
  } while( true );
  *(int *)(this + 0x24c0) = iVar8 << (cVar6 + 0x10U & 0x1f);
  iVar8 = *(int *)(this + 0x330);
  if (iVar8 == 0) {
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 != 0) goto LAB_00106c39;
    uVar15 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar15 ^ 1;
    uVar15 = (-(uint)(uVar15 == 0) & 0x2600) + 0xd900;
LAB_00106d4b:
    prep_in_buffer(this);
    iVar8 = *(int *)(this + 0x330);
    if (iVar8 == 0) {
      uVar11 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar11 ^ 1;
      uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
      goto LAB_00106c7c;
    }
    pbVar12 = *(byte **)(this + 0x328);
  }
  else {
LAB_00106c39:
    pbVar5 = *(byte **)(this + 0x328);
    iVar8 = iVar8 + -1;
    pbVar12 = pbVar5 + 1;
    *(byte **)(this + 0x328) = pbVar12;
    bVar1 = *pbVar5;
    *(int *)(this + 0x330) = iVar8;
    uVar15 = (uint)bVar1 << 8;
    if (iVar8 == 0) goto LAB_00106d4b;
  }
  *(byte **)(this + 0x328) = pbVar12 + 1;
  uVar11 = (uint)*pbVar12;
  *(int *)(this + 0x330) = iVar8 + -1;
LAB_00106c7c:
  iVar8 = *(int *)(this + 0x24bc);
  *(int *)(this + 0x24bc) = iVar8 + 0x10;
  *(uint *)(this + 0x24c0) =
       (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar11 | uVar15) << (-(char)iVar8 & 0x1fU);
  goto LAB_00106a80;
}



/* jpeg_decoder::init_progressive() */

void __thiscall jpeg_decoder::init_progressive(jpeg_decoder *this)

{
  if (*(int *)(this + 0x194) != 4) {
    init_progressive(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff18);
}



/* jpeg_decoder::init_sequential() */

void __thiscall jpeg_decoder::init_sequential(jpeg_decoder *this)

{
  int iVar1;
  
  iVar1 = process_markers(this);
  if ((iVar1 != 0xd9) && (iVar1 == 0xda)) {
    read_sos_marker(this);
    iVar1 = init_scan(this);
    if (iVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff10);
}



/* jpeg_decoder::decode_start() */

void __thiscall jpeg_decoder::decode_start(jpeg_decoder *this)

{
  int iVar1;
  
  init_frame(this);
  if (*(int *)(this + 0xe0) == 0) {
    iVar1 = process_markers(this);
    if ((iVar1 != 0xd9) && (iVar1 == 0xda)) {
      read_sos_marker(this);
      iVar1 = init_scan(this);
      if (iVar1 != 0) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    stop_decoding(this,0xffffff10);
  }
  if (*(int *)(this + 0x194) != 4) {
    init_progressive(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stop_decoding(this,0xffffff18);
}



/* jpeg_decoder::decode_init(jpeg_decoder_stream*) */

void __thiscall jpeg_decoder::decode_init(jpeg_decoder *this,jpeg_decoder_stream *param_1)

{
  init(this,param_1);
  locate_sof_marker(this);
  return;
}



/* jpeg_decoder::jpeg_decoder(jpeg_decoder_stream*) */

void __thiscall jpeg_decoder::jpeg_decoder(jpeg_decoder *this,jpeg_decoder_stream *param_1)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)this);
  if (iVar1 == 0) {
    init(this,param_1);
    locate_sof_marker(this);
  }
  return;
}



/* jpeg_decoder::begin_decoding() */

undefined8 __thiscall jpeg_decoder::begin_decoding(jpeg_decoder *this)

{
  int iVar1;
  undefined8 uVar2;
  
  if (this[0x354c] == (jpeg_decoder)0x0) {
    if (*(int *)(this + 0x3548) == 0) {
      iVar1 = _setjmp((__jmp_buf_tag *)this);
      if (iVar1 == 0) {
        decode_start(this);
        this[0x354c] = (jpeg_decoder)0x1;
        goto LAB_00106f77;
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_00106f77:
    uVar2 = 0;
  }
  return uVar2;
}



/* jpeg_decoder::~jpeg_decoder() */

void __thiscall jpeg_decoder::~jpeg_decoder(jpeg_decoder *this)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  __ptr = *(undefined8 **)(this + 200);
  while (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  return;
}



/* jpeg_decoder_file_stream::close() */

void __thiscall jpeg_decoder_file_stream::close(jpeg_decoder_file_stream *this)

{
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined2 *)(this + 0x10) = 0;
  return;
}



/* jpeg_decoder_file_stream::open(char const*) */

bool __thiscall jpeg_decoder_file_stream::open(jpeg_decoder_file_stream *this,char *param_1)

{
  FILE *pFVar1;
  
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined2 *)(this + 0x10) = 0;
  pFVar1 = fopen64(param_1,"rb");
  *(FILE **)(this + 8) = pFVar1;
  return pFVar1 != (FILE *)0x0;
}



/* jpeg_decoder_mem_stream::open(unsigned char const*, unsigned int) */

undefined8 __thiscall
jpeg_decoder_mem_stream::open(jpeg_decoder_mem_stream *this,uchar *param_1,uint param_2)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(uchar **)(this + 8) = param_1;
  *(uint *)(this + 0x14) = param_2;
  return 1;
}



/* jpgdHeader(char const*, int, int*, int*) */

jpeg_decoder * jpgdHeader(char *param_1,int param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  jpeg_decoder *this;
  jpeg_decoder_stream *pjVar2;
  jpeg_decoder *pjVar3;
  
  this = (jpeg_decoder *)operator_new(0x3558);
  pjVar2 = (jpeg_decoder_stream *)operator_new(0x18);
  *(undefined ***)pjVar2 = &PTR__jpeg_decoder_mem_stream_00112bf0;
  *(char **)(pjVar2 + 8) = param_1;
  *(undefined4 *)(pjVar2 + 0x10) = 0;
  *(int *)(pjVar2 + 0x14) = param_2;
  jpeg_decoder::jpeg_decoder(this,pjVar2);
  if (*(int *)(this + 0x3548) == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(this + 0xd0);
    }
    pjVar3 = this;
    if (param_4 != (int *)0x0) {
      *param_4 = *(int *)(this + 0xd4);
    }
  }
  else {
    if (*(long **)(this + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xd8) + 8))();
    }
    __ptr = *(undefined8 **)(this + 200);
    while (__ptr != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*__ptr;
      free(__ptr);
      __ptr = puVar1;
    }
    pjVar3 = (jpeg_decoder *)0x0;
    operator_delete(this,0x3558);
  }
  return pjVar3;
}



/* jpgdHeader(char const*, int*, int*) */

jpeg_decoder * jpgdHeader(char *param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  jpeg_decoder_stream *pjVar2;
  FILE *pFVar3;
  jpeg_decoder *this;
  
  pjVar2 = (jpeg_decoder_stream *)operator_new(0x18);
  *(undefined ***)pjVar2 = &PTR__jpeg_decoder_file_stream_00112bc8;
  *(undefined8 *)(pjVar2 + 8) = 0;
  *(undefined2 *)(pjVar2 + 0x10) = 0;
  pFVar3 = fopen64(param_1,"rb");
  *(FILE **)(pjVar2 + 8) = pFVar3;
  if (pFVar3 == (FILE *)0x0) {
    if (*(code **)(*(long *)pjVar2 + 8) == jpeg_decoder_file_stream::~jpeg_decoder_file_stream) {
      operator_delete(pjVar2,0x18);
    }
    else {
      (**(code **)(*(long *)pjVar2 + 8))(pjVar2);
    }
  }
  else {
    this = (jpeg_decoder *)operator_new(0x3558);
    jpeg_decoder::jpeg_decoder(this,pjVar2);
    if (*(int *)(this + 0x3548) == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(this + 0xd0);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = *(int *)(this + 0xd4);
      }
      return this;
    }
    if (*(code **)(*(long *)pjVar2 + 8) == jpeg_decoder_file_stream::~jpeg_decoder_file_stream) {
      *(undefined ***)pjVar2 = &PTR__jpeg_decoder_file_stream_00112bc8;
      if (*(FILE **)(pjVar2 + 8) != (FILE *)0x0) {
        fclose(*(FILE **)(pjVar2 + 8));
      }
      operator_delete(pjVar2,0x18);
    }
    else {
      (**(code **)(*(long *)pjVar2 + 8))(pjVar2);
    }
    if (*(long **)(this + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xd8) + 8))();
    }
    __ptr = *(undefined8 **)(this + 200);
    while (__ptr != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*__ptr;
      free(__ptr);
      __ptr = puVar1;
    }
    operator_delete(this,0x3558);
  }
  return (jpeg_decoder *)0x0;
}



/* jpgdDelete(jpeg_decoder*) */

void jpgdDelete(jpeg_decoder *param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (param_1 == (jpeg_decoder *)0x0) {
    return;
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  }
  __ptr = *(undefined8 **)(param_1 + 200);
  while (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  operator_delete(param_1,0x3558);
  return;
}



/* idct_4x4(short const*, unsigned char*) */

void idct_4x4(short *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  int local_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar9 = local_148;
  do {
    iVar6 = (int)param_1[2];
    iVar4 = *param_1 * 0x2000;
    iVar1 = iVar6 * 0x1151 + iVar4;
    iVar2 = iVar6 * 0x29cf + iVar4;
    iVar11 = iVar4 + iVar6 * -0x29cf;
    iVar4 = iVar4 + iVar6 * -0x1151;
    iVar7 = (int)param_1[3];
    iVar5 = (int)param_1[1];
    iVar12 = (iVar7 + iVar5) * 0x25a1;
    iVar8 = iVar7 * -0x3ec5 + iVar12;
    iVar12 = iVar5 * -0xc7c + iVar12;
    iVar6 = iVar5 * -0x1ccd + iVar8;
    iVar3 = iVar7 * -0x5203 + iVar12;
    iVar8 = iVar7 * 0x1051 + iVar8;
    iVar12 = iVar5 * 0x133e + iVar12;
    *piVar9 = iVar2 + 0x400 + iVar12 >> 0xb;
    piVar9[1] = iVar1 + 0x400 + iVar8 >> 0xb;
    piVar9[5] = (iVar4 - iVar3) + 0x400 >> 0xb;
    piVar9[7] = (iVar2 - iVar12) + 0x400 >> 0xb;
    piVar10 = piVar9 + 8;
    piVar9[6] = (iVar1 - iVar8) + 0x400 >> 0xb;
    param_1 = param_1 + 8;
    piVar9[2] = iVar4 + 0x400 + iVar3 >> 0xb;
    piVar9[3] = iVar11 + 0x400 + iVar6 >> 0xb;
    piVar9[4] = (iVar11 - iVar6) + 0x400 >> 0xb;
    piVar9 = piVar10;
  } while (piVar10 != local_148 + 0x20);
  piVar9 = local_148;
  do {
    piVar10 = piVar9 + 1;
    Col<4>::idct(param_2,piVar9);
    param_2 = param_2 + 1;
    piVar9 = piVar10;
  } while (piVar10 != local_148 + 8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* idct(short const*, unsigned char*, int) */

void idct(short *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined1 *puVar19;
  long in_FS_OFFSET;
  int local_148 [64];
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 2) {
    uVar2 = (*param_1 + 4 >> 3) + 0x80;
    if (0xff < uVar2) {
      uVar2 = (int)~uVar2 >> 0x1f & 0xff;
    }
    iVar3 = uVar2 * 0x1010101;
    *(int *)param_2 = iVar3;
    *(int *)(param_2 + 4) = iVar3;
    *(int *)(param_2 + 8) = iVar3;
    *(int *)(param_2 + 0xc) = iVar3;
    *(int *)(param_2 + 0x10) = iVar3;
    *(int *)(param_2 + 0x14) = iVar3;
    *(int *)(param_2 + 0x18) = iVar3;
    *(int *)(param_2 + 0x1c) = iVar3;
    *(int *)(param_2 + 0x20) = iVar3;
    *(int *)(param_2 + 0x24) = iVar3;
    *(int *)(param_2 + 0x28) = iVar3;
    *(int *)(param_2 + 0x2c) = iVar3;
    *(int *)(param_2 + 0x30) = iVar3;
    *(int *)(param_2 + 0x34) = iVar3;
    *(int *)(param_2 + 0x38) = iVar3;
    *(int *)(param_2 + 0x3c) = iVar3;
  }
  else {
    piVar18 = local_148;
    puVar19 = s_idct_row_table + (param_3 + -1) * 8;
    piVar4 = piVar18;
    do {
      switch(*puVar19) {
      case 1:
        iVar3 = *param_1 * 4;
        *piVar4 = iVar3;
        piVar4[1] = iVar3;
        piVar4[2] = iVar3;
        piVar4[3] = iVar3;
        piVar4[4] = iVar3;
        piVar4[5] = iVar3;
        piVar4[6] = iVar3;
        piVar4[7] = iVar3;
        break;
      case 2:
        iVar3 = *param_1 * 0x2000;
        iVar5 = (int)param_1[1];
        *piVar4 = iVar5 * 0x2c63 + iVar3 + __LC13 >> 0xb;
        piVar4[1] = iVar5 * 0x25a1 + iVar3 + _UNK_00112c64 >> 0xb;
        piVar4[2] = iVar5 * 0x1925 + iVar3 + _UNK_00112c68 >> 0xb;
        piVar4[3] = iVar5 * 0x8d4 + iVar3 + _UNK_00112c6c >> 0xb;
        piVar4[4] = iVar3 + iVar5 * -0x8d4 + __LC13 >> 0xb;
        piVar4[5] = iVar3 + iVar5 * -0x1925 + _UNK_00112c64 >> 0xb;
        piVar4[6] = iVar3 + iVar5 * -0x25a1 + _UNK_00112c68 >> 0xb;
        piVar4[7] = iVar3 + iVar5 * -0x2c63 + _UNK_00112c6c >> 0xb;
        break;
      case 3:
        iVar7 = (int)param_1[2];
        iVar6 = *param_1 * 0x2000;
        iVar3 = iVar7 * 0x1151 + iVar6;
        iVar5 = iVar7 * 0x29cf + iVar6;
        iVar8 = iVar6 + iVar7 * -0x29cf;
        iVar16 = (int)param_1[1];
        iVar6 = iVar6 + iVar7 * -0x1151;
        piVar4[1] = iVar3 + 0x400 + iVar16 * 0x25a1 >> 0xb;
        *piVar4 = iVar5 + 0x400 + iVar16 * 0x2c63 >> 0xb;
        piVar4[7] = iVar5 + iVar16 * -0x2c63 + 0x400 >> 0xb;
        piVar4[5] = iVar6 + iVar16 * -0x1925 + 0x400 >> 0xb;
        piVar4[6] = iVar3 + iVar16 * -0x25a1 + 0x400 >> 0xb;
        piVar4[2] = iVar6 + 0x400 + iVar16 * 0x1925 >> 0xb;
        piVar4[3] = iVar8 + 0x400 + iVar16 * 0x8d4 >> 0xb;
        piVar4[4] = iVar8 + iVar16 * -0x8d4 + 0x400 >> 0xb;
        break;
      case 4:
        iVar6 = (int)param_1[2];
        iVar16 = *param_1 * 0x2000;
        iVar3 = iVar6 * 0x1151 + iVar16;
        iVar5 = iVar6 * 0x29cf + iVar16;
        iVar13 = iVar16 + iVar6 * -0x29cf;
        iVar16 = iVar16 + iVar6 * -0x1151;
        iVar11 = (int)param_1[3];
        iVar12 = (int)param_1[1];
        iVar9 = (iVar11 + iVar12) * 0x25a1;
        iVar8 = iVar11 * -0x3ec5 + iVar9;
        iVar9 = iVar12 * -0xc7c + iVar9;
        iVar7 = iVar12 * -0x1ccd + iVar8;
        iVar6 = iVar11 * -0x5203 + iVar9;
        iVar8 = iVar11 * 0x1051 + iVar8;
        iVar9 = iVar12 * 0x133e + iVar9;
        *piVar4 = iVar5 + 0x400 + iVar9 >> 0xb;
        piVar4[1] = iVar3 + 0x400 + iVar8 >> 0xb;
        piVar4[5] = (iVar16 - iVar6) + 0x400 >> 0xb;
        piVar4[7] = (iVar5 - iVar9) + 0x400 >> 0xb;
        piVar4[6] = (iVar3 - iVar8) + 0x400 >> 0xb;
        piVar4[2] = iVar16 + 0x400 + iVar6 >> 0xb;
        piVar4[3] = iVar13 + 0x400 + iVar7 >> 0xb;
        piVar4[4] = (iVar13 - iVar7) + 0x400 >> 0xb;
        break;
      case 5:
        iVar6 = (int)param_1[2];
        iVar11 = ((int)*param_1 + (int)param_1[4]) * 0x2000;
        iVar16 = ((int)*param_1 - (int)param_1[4]) * 0x2000;
        iVar3 = iVar6 * 0x1151 + iVar16;
        iVar16 = iVar16 + iVar6 * -0x1151;
        iVar12 = (int)param_1[3];
        iVar5 = iVar6 * 0x29cf + iVar11;
        iVar11 = iVar11 + iVar6 * -0x29cf;
        iVar13 = (int)param_1[1];
        iVar9 = (iVar12 + iVar13) * 0x25a1;
        iVar8 = iVar12 * -0x3ec5 + iVar9;
        iVar9 = iVar13 * -0xc7c + iVar9;
        iVar7 = iVar13 * -0x1ccd + iVar8;
        iVar6 = iVar12 * -0x5203 + iVar9;
        iVar8 = iVar12 * 0x1051 + iVar8;
        iVar9 = iVar13 * 0x133e + iVar9;
        *piVar4 = iVar5 + 0x400 + iVar9 >> 0xb;
        piVar4[1] = iVar3 + 0x400 + iVar8 >> 0xb;
        piVar4[7] = (iVar5 - iVar9) + 0x400 >> 0xb;
        piVar4[5] = (iVar16 - iVar6) + 0x400 >> 0xb;
        piVar4[6] = (iVar3 - iVar8) + 0x400 >> 0xb;
        piVar4[2] = iVar16 + 0x400 + iVar6 >> 0xb;
        piVar4[3] = iVar11 + 0x400 + iVar7 >> 0xb;
        piVar4[4] = (iVar11 - iVar7) + 0x400 >> 0xb;
        break;
      case 6:
        iVar5 = param_1[2] * 0x1151;
        iVar3 = param_1[2] * 0x29cf;
        goto LAB_00107755;
      case 7:
        iVar3 = ((int)param_1[2] + (int)param_1[6]) * 0x1151;
        iVar5 = param_1[6] * -0x3b21 + iVar3;
        iVar3 = param_1[2] * 0x187e + iVar3;
LAB_00107755:
        iVar13 = (int)param_1[1];
        iVar9 = ((int)*param_1 + (int)param_1[4]) * 0x2000;
        iVar7 = ((int)*param_1 - (int)param_1[4]) * 0x2000;
        iVar6 = iVar3 + iVar9;
        iVar9 = iVar9 - iVar3;
        iVar12 = (int)param_1[5];
        iVar3 = iVar5 + iVar7;
        iVar7 = iVar7 - iVar5;
        iVar11 = (int)param_1[3];
        iVar16 = (iVar11 + iVar12 + iVar13) * 0x25a1;
        iVar14 = (iVar12 + iVar11) * -0x5203;
        iVar8 = iVar11 * -0x3ec5 + iVar16;
        iVar16 = (iVar12 + iVar13) * -0xc7c + iVar16;
        iVar5 = iVar13 * -0x1ccd + iVar8;
        iVar12 = iVar12 * 0x41b3 + iVar14 + iVar16;
        iVar8 = iVar11 * 0x6254 + iVar14 + iVar8;
        iVar16 = iVar13 * 0x133e + iVar16;
        *piVar4 = iVar6 + 0x400 + iVar16 >> 0xb;
        piVar4[7] = (iVar6 - iVar16) + 0x400 >> 0xb;
        piVar4[1] = iVar3 + 0x400 + iVar8 >> 0xb;
        piVar4[5] = (iVar7 - iVar12) + 0x400 >> 0xb;
        piVar4[6] = (iVar3 - iVar8) + 0x400 >> 0xb;
        piVar4[2] = iVar7 + 0x400 + iVar12 >> 0xb;
        piVar4[3] = iVar9 + 0x400 + iVar5 >> 0xb;
        piVar4[4] = (iVar9 - iVar5) + 0x400 >> 0xb;
        break;
      case 8:
        iVar5 = ((int)param_1[2] + (int)param_1[6]) * 0x1151;
        iVar7 = param_1[6] * -0x3b21 + iVar5;
        iVar5 = param_1[2] * 0x187e + iVar5;
        iVar13 = (int)param_1[1];
        iVar11 = ((int)*param_1 + (int)param_1[4]) * 0x2000;
        iVar6 = ((int)*param_1 - (int)param_1[4]) * 0x2000;
        iVar3 = iVar5 + iVar11;
        iVar11 = iVar11 - iVar5;
        iVar5 = iVar7 + iVar6;
        iVar9 = (int)param_1[5];
        iVar6 = iVar6 - iVar7;
        iVar8 = (int)param_1[7];
        iVar12 = (int)param_1[3];
        iVar14 = (iVar8 + iVar13) * -0x1ccd;
        iVar16 = (iVar8 + iVar12 + iVar9 + iVar13) * 0x25a1;
        iVar15 = (iVar9 + iVar12) * -0x5203;
        iVar7 = (iVar9 + iVar13) * -0xc7c + iVar16;
        iVar13 = iVar13 * 0x300b + iVar14 + iVar7;
        iVar7 = iVar9 * 0x41b3 + iVar15 + iVar7;
        iVar16 = (iVar8 + iVar12) * -0x3ec5 + iVar16;
        iVar9 = iVar12 * 0x6254 + iVar15 + iVar16;
        *piVar4 = iVar3 + 0x400 + iVar13 >> 0xb;
        iVar16 = iVar8 * 0x98e + iVar14 + iVar16;
        piVar4[7] = (iVar3 - iVar13) + 0x400 >> 0xb;
        piVar4[1] = iVar5 + 0x400 + iVar9 >> 0xb;
        piVar4[5] = (iVar6 - iVar7) + 0x400 >> 0xb;
        piVar4[6] = (iVar5 - iVar9) + 0x400 >> 0xb;
        piVar4[3] = iVar11 + 0x400 + iVar16 >> 0xb;
        piVar4[2] = iVar6 + 0x400 + iVar7 >> 0xb;
        piVar4[4] = (iVar11 - iVar16) + 0x400 >> 0xb;
      }
      piVar4 = piVar4 + 8;
      param_1 = param_1 + 8;
      puVar19 = puVar19 + 1;
    } while (piVar4 != local_48);
    piVar4 = local_148 + 8;
    do {
      switch(s_idct_col_table[param_3 + -1]) {
      case 1:
        goto switchD_00107723_caseD_1;
      case 2:
        goto switchD_00107723_caseD_2;
      case 3:
        goto switchD_00107723_caseD_3;
      case 4:
        goto switchD_00107723_caseD_4;
      case 5:
        goto switchD_00107723_caseD_5;
      case 6:
        goto switchD_00107723_caseD_6;
      case 7:
        goto switchD_00107723_caseD_7;
      case 8:
        goto switchD_00107723_caseD_8;
      }
      piVar18 = piVar18 + 1;
      param_2 = param_2 + 1;
    } while (piVar18 != piVar4);
  }
LAB_00107c78:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00107723_caseD_8:
  do {
    piVar17 = piVar18 + 1;
    Col<8>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_7:
  do {
    piVar17 = piVar18 + 1;
    Col<7>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_6:
  do {
    piVar17 = piVar18 + 1;
    Col<6>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_5:
  do {
    piVar17 = piVar18 + 1;
    Col<5>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_4:
  do {
    piVar17 = piVar18 + 1;
    Col<4>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_3:
  do {
    piVar17 = piVar18 + 1;
    Col<3>::idct(param_2,piVar18);
    param_2 = param_2 + 1;
    piVar18 = piVar17;
  } while (piVar17 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_2:
  do {
    iVar5 = piVar18[8];
    iVar6 = *piVar18 * 0x2000;
    iVar3 = iVar6 + 0x2020000 + iVar5 * 0x2c63;
    uVar2 = iVar3 >> 0x12;
    uVar1 = (char)~(byte)(iVar3 >> 0x1f) >> 7;
    if (uVar2 < 0x100) {
      uVar1 = (uchar)uVar2;
    }
    *param_2 = uVar1;
    uVar2 = iVar6 + iVar5 * -0x2c63 + 0x2020000 >> 0x12;
    if (0xff < uVar2) {
      uVar2 = (int)~uVar2 >> 0x1f;
    }
    iVar3 = iVar6 + 0x2020000 + iVar5 * 0x25a1;
    uVar10 = iVar3 >> 0x12;
    param_2[0x38] = (uchar)uVar2;
    uVar1 = (char)~(byte)(iVar3 >> 0x1f) >> 7;
    if (uVar10 < 0x100) {
      uVar1 = (uchar)uVar10;
    }
    param_2[8] = uVar1;
    uVar2 = iVar6 + iVar5 * -0x25a1 + 0x2020000 >> 0x12;
    if (0xff < uVar2) {
      uVar2 = (int)~uVar2 >> 0x1f;
    }
    iVar3 = iVar6 + 0x2020000 + iVar5 * 0x1925;
    uVar10 = iVar3 >> 0x12;
    param_2[0x30] = (uchar)uVar2;
    uVar1 = (char)~(byte)(iVar3 >> 0x1f) >> 7;
    if (uVar10 < 0x100) {
      uVar1 = (uchar)uVar10;
    }
    param_2[0x10] = uVar1;
    uVar2 = iVar6 + iVar5 * -0x1925 + 0x2020000 >> 0x12;
    if (0xff < uVar2) {
      uVar2 = (int)~uVar2 >> 0x1f;
    }
    uVar10 = iVar6 + 0x2020000 + iVar5 * 0x8d4 >> 0x12;
    param_2[0x28] = (uchar)uVar2;
    uVar2 = (int)~uVar10 >> 0x1f;
    if (uVar10 < 0x100) {
      uVar2 = uVar10;
    }
    uVar10 = iVar6 + iVar5 * -0x8d4 + 0x2020000 >> 0x12;
    param_2[0x18] = (uchar)uVar2;
    if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
    }
    piVar18 = piVar18 + 1;
    param_2[0x20] = (uchar)uVar10;
    param_2 = param_2 + 1;
  } while (piVar18 != piVar4);
  goto LAB_00107c78;
switchD_00107723_caseD_1:
  do {
    uVar10 = *piVar18 + 0x1010 >> 5;
    uVar2 = (int)~uVar10 >> 0x1f;
    if (uVar10 < 0x100) {
      uVar2 = uVar10;
    }
    piVar18 = piVar18 + 1;
    uVar1 = (uchar)uVar2;
    *param_2 = uVar1;
    param_2[8] = uVar1;
    param_2[0x10] = uVar1;
    param_2[0x18] = uVar1;
    param_2[0x20] = uVar1;
    param_2[0x28] = uVar1;
    param_2[0x30] = uVar1;
    param_2[0x38] = uVar1;
    param_2 = param_2 + 1;
  } while (piVar18 != piVar4);
  goto LAB_00107c78;
}



/* jpeg_decoder::transform_mcu(int) */

void __thiscall jpeg_decoder::transform_mcu(jpeg_decoder *this,int param_1)

{
  long lVar1;
  uchar *puVar2;
  long lVar3;
  short *psVar4;
  
  if (0 < *(int *)(this + 0x244)) {
    lVar3 = 0;
    puVar2 = (uchar *)((long)(param_1 * *(int *)(this + 0x244) * 0x40) + *(long *)(this + 0x2530));
    psVar4 = *(short **)(this + 0x2500);
    do {
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
      idct(psVar4,puVar2,*(int *)(this + lVar1 + 0x2508));
      puVar2 = puVar2 + 0x40;
      psVar4 = psVar4 + 0x40;
    } while ((int)lVar3 < *(int *)(this + 0x244));
  }
  return;
}



/* jpeg_decoder::transform_mcu_expand(int) */

void __thiscall jpeg_decoder::transform_mcu_expand(jpeg_decoder *this,int param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uchar *puVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  jpeg_decoder *pjVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uchar *puVar42;
  short *psVar43;
  short *psVar44;
  long in_FS_OFFSET;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  int local_248 [2];
  undefined8 uStack_240;
  undefined8 local_238;
  long local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  long local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  int local_188 [48];
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  long local_40;
  
  psVar44 = *(short **)(this + 0x2500);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar21 = (uchar *)((long)(*(int *)(this + 0x24d8) * param_1 * 0x40) + *(long *)(this + 0x2530));
  if (*(int *)(this + 0x24e0) < 1) {
    lVar22 = 0;
  }
  else {
    lVar17 = 1;
    puVar42 = puVar21;
    psVar43 = psVar44;
    do {
      lVar22 = lVar17;
      puVar21 = puVar42 + 0x40;
      psVar44 = psVar43 + 0x40;
      idct(psVar43,puVar42,*(int *)(this + lVar22 * 4 + 0x2504));
      lVar17 = lVar22 + 1;
      puVar42 = puVar21;
      psVar43 = psVar44;
    } while ((int)lVar22 < *(int *)(this + 0x24e0));
  }
  psVar43 = psVar44 + 0x80;
  pjVar30 = this + (long)(int)lVar22 * 4;
  do {
    iVar18 = *(int *)(pjVar30 + 0x2508) + -1;
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    uVar14 = local_1c8._12_4_;
    uVar13 = local_1c8._0_8_;
    auVar4 = local_1b8._4_12_;
    uVar16 = local_1a8._12_4_;
    uVar15 = local_1b8._12_4_;
    switch(s_max_rc[iVar18]) {
    case 0x11:
      local_248[1] = 0;
      uStack_240 = 0;
      local_248[0] = (int)*psVar44;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      local_1e8 = (undefined1  [16])0x0;
      local_1d8 = (undefined1  [16])0x0;
      local_1c8 = (undefined1  [16])0x0;
      local_1b8 = (undefined1  [16])0x0;
      local_1a8 = (undefined1  [16])0x0;
      local_198 = (undefined1  [16])0x0;
      goto LAB_001089a1;
    case 0x12:
      iVar18 = (int)psVar44[1];
      local_248[1] = 0;
      uStack_240 = 0;
      local_248[0] = (int)*psVar44;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_238 = (ulong)(uint)(iVar18 * 0x1aa + 0x200 >> 10);
      local_210 = 0;
      local_218 = (ulong)(uint)(iVar18 * 0x17 + 0x200 >> 10);
      local_1b8 = ZEXT816(0);
      local_1c8 = ZEXT416((uint)(iVar18 * 0x3a0 + 0x200 >> 10));
      local_1a8 = ZEXT416((uint)(iVar18 * -0x4b + 0x200 >> 10));
      local_198 = ZEXT816(0);
      local_208 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      local_1e8 = (undefined1  [16])0x0;
      local_1d8 = (undefined1  [16])0x0;
LAB_001089a1:
      local_1d8 = (undefined1  [16])0x0;
      local_1e8 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      local_208 = (undefined1  [16])0x0;
      local_210 = 0;
      local_220 = 0;
      local_228 = 0;
      local_230 = 0;
      uStack_240 = 0;
      local_248[1] = 0;
      local_188[0] = 0;
      local_188[1] = 0;
      local_188[2] = 0;
      local_188[3] = 0;
      local_188[4] = 0;
      local_188[5] = 0;
      local_188[6] = 0;
      local_188[7] = 0;
      local_188[8] = 0;
      local_188[9] = 0;
      local_188[10] = 0;
      local_188[0xb] = 0;
      local_188[0xc] = 0;
      local_188[0xd] = 0;
      local_188[0xe] = 0;
      local_188[0xf] = 0;
      break;
    default:
      goto switchD_0010806a_caseD_13;
    case 0x22:
      iVar20 = (int)psVar44[8];
      iVar37 = (int)psVar44[1];
      iVar18 = (int)psVar44[9];
      local_248[0] = (int)*psVar44;
      local_228 = 0;
      local_220 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_208._8_8_;
      local_208 = auVar10 << 0x40;
      local_248[1] = iVar20 * 0x1aa + 0x200 >> 10;
      iVar27 = iVar18 * 0x1aa + 0x200 >> 10;
      iVar19 = iVar18 * 0x17 + 0x200 >> 10;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_1f8._8_8_;
      local_1f8 = auVar11 << 0x40;
      local_1e8 = ZEXT816(0);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_1d8._8_8_;
      local_1d8 = auVar12 << 0x40;
      local_238 = CONCAT44(iVar27 * 0x1aa + 0x200 >> 10,iVar37 * 0x1aa + 0x200 >> 10);
      local_218 = CONCAT44(iVar19 * 0x1aa + 0x200 >> 10,iVar37 * 0x17 + 0x200 >> 10);
      auVar1._4_8_ = local_208._4_8_;
      auVar1._0_4_ = iVar20 * 0x3a0 + 0x200 >> 10;
      local_208._0_8_ = auVar1._0_8_;
      local_208._8_4_ = iVar20 * -0x4b + 0x200 >> 10;
      auVar2._4_8_ = local_1f8._4_8_;
      auVar2._0_4_ = iVar27 * 0x3a0 + 0x200 >> 10;
      local_1f8._0_8_ = auVar2._0_8_;
      local_1f8._8_4_ = iVar27 * -0x4b + 0x200 >> 10;
      auVar3._4_8_ = local_1d8._4_8_;
      auVar3._0_4_ = iVar19 * 0x3a0 + 0x200 >> 10;
      local_1d8._0_8_ = auVar3._0_8_;
      local_1d8._8_4_ = iVar19 * -0x4b + 0x200 >> 10;
      iVar28 = iVar37 * 0x3a0 + 0x200 >> 10;
      iVar31 = iVar18 * 0x3a0 + 0x200 >> 10;
      local_1c8._0_4_ = iVar28;
      iVar26 = iVar18 * -0x4b + 0x200 >> 10;
      local_1c8._8_4_ = 0;
      local_1c8 = CONCAT412(uVar14,local_1c8._0_12_);
      local_1b8 = ZEXT816(0);
      local_1a8._8_4_ = 0;
      local_1c8._4_4_ = iVar31 * 0x1aa + 0x200 >> 10;
      local_198 = ZEXT816(0);
      local_188[1] = 0;
      local_188[3] = 0;
      local_188[4] = 0;
      local_188[5] = 0;
      local_1c8._12_4_ = iVar31 * 0x17 + 0x200 >> 10;
      local_188[6] = 0;
      local_188[7] = 0;
      local_188[9] = 0;
      local_1a8._4_4_ = iVar26 * 0x1aa + 0x200 >> 10;
      local_1a8._0_4_ = iVar37 * -0x4b + 0x200 >> 10;
      local_1a8._12_4_ = iVar26 * 0x17 + 0x200 >> 10;
      local_188[0] = iVar31 * 0x3a0 + 0x200 >> 10;
      local_188[2] = iVar31 * -0x4b + 0x200 >> 10;
      local_188[8] = iVar26 * 0x3a0 + 0x200 >> 10;
      goto LAB_00108e51;
    case 0x32:
      iVar26 = (int)psVar44[8];
      iVar20 = (int)psVar44[1];
      iVar28 = (int)psVar44[9];
      iVar19 = (int)psVar44[0x11];
      local_248[0] = (int)*psVar44;
      local_228 = 0;
      local_220 = 0;
      auVar4._4_8_ = local_208._8_8_;
      auVar4._0_4_ = (int)psVar44[0x10];
      local_248[1] = iVar26 * 0x1aa + 0x200 >> 10;
      iVar27 = iVar28 * 0x1aa + 0x200 >> 10;
      iVar18 = iVar28 * 0x17 + 0x200 >> 10;
      local_1e8 = ZEXT816(0);
      uStack_240 = (ulong)(uint)(iVar26 * 0x17 + 0x200 >> 10) << 0x20;
      local_238 = CONCAT44(iVar27 * 0x1aa + 0x200 >> 10,iVar20 * 0x1aa + 0x200 >> 10);
      local_230 = (ulong)(uint)(iVar27 * 0x17 + 0x200 >> 10) << 0x20;
      local_218 = CONCAT44(iVar18 * 0x1aa + 0x200 >> 10,iVar20 * 0x17 + 0x200 >> 10);
      local_210 = (ulong)(uint)(iVar18 * 0x17 + 0x200 >> 10) << 0x20;
      auVar5._4_8_ = auVar4._0_8_;
      auVar5._0_4_ = iVar26 * 0x3a0 + 0x200 >> 10;
      local_208._0_8_ = auVar5._0_8_;
      local_208._8_4_ = iVar26 * -0x4b + 0x200 >> 10;
      local_208._12_4_ = 0;
      local_1f8._4_4_ = iVar19 * 0x1aa + 0x200 >> 10;
      local_1f8._0_4_ = iVar27 * 0x3a0 + 0x200 >> 10;
      local_1f8._8_4_ = iVar27 * -0x4b + 0x200 >> 10;
      local_1f8._12_4_ = 0;
      iVar26 = iVar20 * 0x3a0 + 0x200 >> 10;
      local_1d8._4_4_ = iVar19 * 0x17 + 0x200 >> 10;
      local_1d8._0_4_ = iVar18 * 0x3a0 + 0x200 >> 10;
      local_1d8._8_4_ = iVar18 * -0x4b + 0x200 >> 10;
      local_1c8._0_4_ = iVar26;
      local_1d8._12_4_ = 0;
      iVar27 = iVar28 * 0x3a0 + 0x200 >> 10;
      local_1c8._8_4_ = 0;
      local_1c8 = CONCAT412(uVar14,local_1c8._0_12_);
      iVar18 = iVar28 * -0x4b + 0x200 >> 10;
      local_1b8 = ZEXT816(0);
      local_1a8._8_4_ = 0;
      local_198 = ZEXT816(0);
      local_1c8._4_4_ = iVar27 * 0x1aa + 0x200 >> 10;
      local_188[3] = 0;
      local_188[4] = 0;
      local_188[5] = 0;
      local_188[6] = 0;
      local_188[0xb] = 0;
      local_188[0xc] = 0;
      local_188[0xd] = 0;
      local_188[0xe] = 0;
      local_188[7] = 0;
      local_1c8._12_4_ = iVar27 * 0x17 + 0x200 >> 10;
      local_188[0xf] = 0;
      local_1a8._4_4_ = iVar18 * 0x1aa + 0x200 >> 10;
      local_1a8._0_4_ = iVar20 * -0x4b + 0x200 >> 10;
      local_1a8._12_4_ = iVar18 * 0x17 + 0x200 >> 10;
      local_188[0] = iVar27 * 0x3a0 + 0x200 >> 10;
      local_188[2] = iVar27 * -0x4b + 0x200 >> 10;
      local_188[1] = iVar19 * 0x3a0 + 0x200 >> 10;
      local_188[9] = iVar19 * -0x4b + 0x200 >> 10;
      local_188[8] = iVar18 * 0x3a0 + 0x200 >> 10;
      local_188[10] = iVar18 * -0x4b + 0x200 >> 10;
      break;
    case 0x33:
      iVar20 = (int)psVar44[8];
      iVar26 = (int)psVar44[9];
      iVar37 = (int)psVar44[1];
      iVar18 = (int)psVar44[0x11];
      local_248[0] = (int)*psVar44;
      local_228 = 0;
      local_220 = 0;
      auVar6._4_8_ = local_208._8_8_;
      auVar6._0_4_ = (int)psVar44[0x10];
      local_248[1] = iVar20 * 0x1aa + 0x200 >> 10;
      iVar27 = iVar26 * 0x1aa + 0x200 >> 10;
      iVar19 = iVar26 * 0x17 + 0x200 >> 10;
      local_1e8 = ZEXT816(0);
      local_238 = CONCAT44(iVar27 * 0x1aa + 0x200 >> 10,iVar37 * 0x1aa + 0x200 >> 10);
      local_218 = CONCAT44(iVar19 * 0x1aa + 0x200 >> 10,iVar37 * 0x17 + 0x200 >> 10);
      auVar7._4_8_ = auVar6._0_8_;
      auVar7._0_4_ = iVar20 * 0x3a0 + 0x200 >> 10;
      local_208._0_8_ = auVar7._0_8_;
      local_208._8_4_ = iVar20 * -0x4b + 0x200 >> 10;
      local_1f8._4_4_ = iVar18 * 0x1aa + 0x200 >> 10;
      local_1f8._0_4_ = iVar27 * 0x3a0 + 0x200 >> 10;
      local_1f8._8_4_ = iVar27 * -0x4b + 0x200 >> 10;
      local_1d8._4_4_ = iVar18 * 0x17 + 0x200 >> 10;
      local_1d8._0_4_ = iVar19 * 0x3a0 + 0x200 >> 10;
      iVar31 = iVar26 * 0x3a0 + 0x200 >> 10;
      local_1d8._8_4_ = iVar19 * -0x4b + 0x200 >> 10;
      iVar28 = (int)psVar44[10];
      local_1c8._8_4_ = 0;
      local_1c8._0_12_ = CONCAT48(local_1c8._8_4_,uVar13);
      local_1c8 = CONCAT412(uVar14,local_1c8._0_12_);
      local_1b8._0_4_ = (int)psVar44[2];
      local_1b8 = CONCAT124(auVar4,local_1b8._0_4_);
      iVar26 = iVar26 * -0x4b + 0x200 >> 10;
      local_1b8._8_4_ = 0;
      local_1b8 = CONCAT412(uVar15,local_1b8._0_12_);
      local_1a8._8_4_ = 0;
      local_198 = ZEXT816(0);
      local_188[3] = 0;
      local_188[5] = (int)psVar44[0x12];
      local_1c8._4_4_ = iVar31 * 0x1aa + 0x200 >> 10;
      local_1c8._0_4_ = iVar37 * 0x3a0 + 0x200 >> 10;
      local_188[7] = 0;
      local_1c8._12_4_ = iVar31 * 0x17 + 0x200 >> 10;
      local_1a8._4_4_ = iVar26 * 0x1aa + 0x200 >> 10;
      local_1a8._0_4_ = iVar37 * -0x4b + 0x200 >> 10;
      local_1b8._4_4_ = iVar28 * 0x1aa + 0x200 >> 10;
      local_1a8._12_4_ = iVar26 * 0x17 + 0x200 >> 10;
      local_1b8._12_4_ = iVar28 * 0x17 + 0x200 >> 10;
      local_188[0] = iVar31 * 0x3a0 + 0x200 >> 10;
      local_188[2] = iVar31 * -0x4b + 0x200 >> 10;
      local_188[1] = iVar18 * 0x3a0 + 0x200 >> 10;
      local_188[4] = iVar28 * 0x3a0 + 0x200 >> 10;
      iVar18 = iVar18 * -0x4b + 0x200;
      local_188[6] = iVar28 * -0x4b + 0x200 >> 10;
      local_188[8] = iVar26 * 0x3a0 + 0x200 >> 10;
      goto LAB_00109624;
    case 0x34:
      iVar34 = (int)psVar44[9];
      iVar26 = (int)psVar44[0xb];
      iVar20 = (int)psVar44[8];
      iVar33 = (int)psVar44[1];
      iVar32 = (int)psVar44[3];
      iVar37 = (int)psVar44[0x11];
      local_228 = 0;
      iVar31 = (int)psVar44[0x13];
      local_220 = 0;
      auVar8._4_8_ = local_208._8_8_;
      auVar8._0_4_ = (int)psVar44[0x10];
      iVar27 = iVar34 * 0x1aa + 0x200 + iVar26 * 0x32a >> 10;
      iVar19 = iVar34 * 0x17 + 0x200 + iVar26 * -99 >> 10;
      local_248[0] = (int)*psVar44;
      local_248[1] = iVar20 * 0x1aa + 0x200 >> 10;
      local_238 = CONCAT44(iVar27 * 0x1aa + 0x200 >> 10,
                           iVar33 * 0x1aa + 0x200 + iVar32 * 0x32a >> 10);
      local_218 = CONCAT44(iVar19 * 0x1aa + 0x200 >> 10,iVar33 * 0x17 + 0x200 + iVar32 * -99 >> 10);
      auVar9._4_8_ = auVar8._0_8_;
      auVar9._0_4_ = iVar20 * 0x3a0 + 0x200 >> 10;
      local_208._0_8_ = auVar9._0_8_;
      local_208._8_4_ = iVar20 * -0x4b + 0x200 >> 10;
      local_1f8._4_4_ = iVar37 * 0x1aa + 0x200 + iVar31 * 0x32a >> 10;
      local_1f8._0_4_ = iVar27 * 0x3a0 + 0x200 >> 10;
      local_1f8._8_4_ = iVar27 * -0x4b + 0x200 >> 10;
      local_1e8 = ZEXT816(0);
      local_1b8._0_4_ = (int)psVar44[2];
      local_1b8 = CONCAT124(auVar4,local_1b8._0_4_);
      local_1c8._8_4_ = 0;
      local_1c8._0_12_ = CONCAT48(local_1c8._8_4_,uVar13);
      local_1c8 = CONCAT412(uVar14,local_1c8._0_12_);
      local_1d8._4_4_ = iVar37 * 0x17 + 0x200 + iVar31 * -99 >> 10;
      local_1d8._0_4_ = iVar19 * 0x3a0 + 0x200 >> 10;
      local_1d8._8_4_ = iVar19 * -0x4b + 0x200 >> 10;
      local_1b8._8_4_ = 0;
      local_1b8 = CONCAT412(uVar15,local_1b8._0_12_);
      local_1a8._8_4_ = 0;
      iVar28 = (int)psVar44[10];
      iVar18 = iVar34 * 0x3a0 + 0x200 + iVar26 * -0x145 >> 10;
      local_198 = ZEXT816(0);
      iVar26 = iVar34 * -0x4b + 0x200 + iVar26 * 0x20e >> 10;
      local_188[3] = 0;
      local_188[5] = (int)psVar44[0x12];
      local_188[7] = 0;
      local_1c8._4_4_ = iVar18 * 0x1aa + 0x200 >> 10;
      local_1c8._0_4_ = iVar33 * 0x3a0 + 0x200 + iVar32 * -0x145 >> 10;
      local_1c8._12_4_ = iVar18 * 0x17 + 0x200 >> 10;
      local_1a8._4_4_ = iVar26 * 0x1aa + 0x200 >> 10;
      local_1a8._0_4_ = iVar33 * -0x4b + 0x200 + iVar32 * 0x20e >> 10;
      local_1b8._4_4_ = iVar28 * 0x1aa + 0x200 >> 10;
      local_1a8._12_4_ = iVar26 * 0x17 + 0x200 >> 10;
      local_1b8._12_4_ = iVar28 * 0x17 + 0x200 >> 10;
      local_188[0] = iVar18 * 0x3a0 + 0x200 >> 10;
      local_188[2] = iVar18 * -0x4b + 0x200 >> 10;
      local_188[1] = iVar37 * 0x3a0 + 0x200 + iVar31 * -0x145 >> 10;
      local_188[4] = iVar28 * 0x3a0 + 0x200 >> 10;
      local_188[6] = iVar28 * -0x4b + 0x200 >> 10;
      local_188[8] = iVar26 * 0x3a0 + 0x200 >> 10;
      iVar18 = iVar37 * -0x4b + 0x200 + iVar31 * 0x20e;
LAB_00109624:
      local_188[9] = iVar18 >> 10;
LAB_00108e51:
      iVar19 = iVar19 * 0x17 + 0x200;
      iVar27 = iVar27 * 0x17 + 0x200;
      iVar18 = iVar20 * 0x17 + 0x200;
      iVar20 = iVar26 * -0x4b + 0x200;
LAB_00108e59:
      local_210 = (ulong)(uint)(iVar19 >> 10) << 0x20;
      local_230 = (ulong)(uint)(iVar27 >> 10) << 0x20;
      uStack_240 = (ulong)(uint)(iVar18 >> 10) << 0x20;
      local_198 = ZEXT816(0);
      local_1d8._12_4_ = 0;
      local_1e8 = ZEXT816(0);
      local_1f8._12_4_ = 0;
      local_208._12_4_ = 0;
      local_188[7] = 0;
      local_188[3] = 0;
      local_220 = 0;
      local_228 = 0;
      local_188[0xb] = 0;
      local_188[10] = iVar20 >> 10;
      local_188[0xc] = 0;
      local_188[0xd] = 0;
      local_188[0xe] = 0;
      local_188[0xf] = 0;
      break;
    case 0x44:
      iVar36 = (int)psVar44[9];
      iVar35 = (int)psVar44[0xb];
      iVar34 = (int)psVar44[0x19];
      iVar33 = (int)psVar44[0x1b];
      iVar38 = (int)psVar44[0x13];
      local_228 = 0;
      iVar40 = (int)psVar44[0x11];
      iVar31 = (int)psVar44[8];
      iVar37 = (int)psVar44[0x18];
      iVar32 = (int)psVar44[1];
      iVar26 = (int)psVar44[3];
      local_220 = 0;
      iVar28 = iVar36 * 0x1aa + 0x200 + iVar35 * 0x32a >> 10;
      iVar20 = iVar34 * 0x1aa + 0x200 + iVar33 * 0x32a >> 10;
      iVar39 = iVar36 * 0x17 + 0x200 + iVar35 * -99 >> 10;
      iVar41 = iVar34 * 0x17 + 0x200 + iVar33 * -99 >> 10;
      local_248[0] = (int)*psVar44;
      local_248[1] = iVar31 * 0x1aa + 0x200 + iVar37 * 0x32a >> 10;
      iVar18 = iVar31 * 0x17 + 0x200 + iVar37 * -99;
      local_238 = CONCAT44(iVar28 * 0x1aa + 0x200 + iVar20 * 0x32a >> 10,
                           iVar32 * 0x1aa + 0x200 + iVar26 * 0x32a >> 10);
      iVar27 = iVar28 * 0x17 + 0x200 + iVar20 * -99;
      local_218 = CONCAT44(iVar39 * 0x1aa + 0x200 + iVar41 * 0x32a >> 10,
                           iVar32 * 0x17 + 0x200 + iVar26 * -99 >> 10);
      iVar19 = iVar39 * 0x17 + 0x200 + iVar41 * -99;
      local_1c8._8_4_ = 0;
      local_1c8._0_12_ = CONCAT48(local_1c8._8_4_,uVar13);
      local_1c8 = CONCAT412(uVar14,local_1c8._0_12_);
      local_208._4_4_ = (int)psVar44[0x10];
      local_208._0_4_ = iVar31 * 0x3a0 + 0x200 + iVar37 * -0x145 >> 10;
      local_208._8_4_ = iVar31 * -0x4b + 0x200 + iVar37 * 0x20e >> 10;
      local_1f8._4_4_ = iVar40 * 0x1aa + 0x200 + iVar38 * 0x32a >> 10;
      local_1f8._0_4_ = iVar28 * 0x3a0 + 0x200 + iVar20 * -0x145 >> 10;
      local_1f8._8_4_ = iVar28 * -0x4b + 0x200 + iVar20 * 0x20e >> 10;
      local_1d8._4_4_ = iVar40 * 0x17 + 0x200 + iVar38 * -99 >> 10;
      local_1d8._0_4_ = iVar39 * 0x3a0 + 0x200 + iVar41 * -0x145 >> 10;
      iVar37 = (int)psVar44[10];
      local_1d8._8_4_ = iVar39 * -0x4b + 0x200 + iVar41 * 0x20e >> 10;
      iVar31 = iVar36 * 0x3a0 + 0x200 + iVar35 * -0x145 >> 10;
      iVar39 = (int)psVar44[0x1a];
      iVar20 = iVar34 * 0x3a0 + 0x200 + iVar33 * -0x145 >> 10;
      iVar35 = iVar36 * -0x4b + 0x200 + iVar35 * 0x20e >> 10;
      iVar33 = iVar34 * -0x4b + 0x200 + iVar33 * 0x20e >> 10;
      iVar28 = iVar32 * -0x4b + 0x200 + iVar26 * 0x20e >> 10;
      local_1c8._4_4_ = iVar31 * 0x1aa + 0x200 + iVar20 * 0x32a >> 10;
      local_1c8._0_4_ = iVar32 * 0x3a0 + 0x200 + iVar26 * -0x145 >> 10;
      local_1c8._12_4_ = iVar31 * 0x17 + 0x200 + iVar20 * -99 >> 10;
      local_1b8._4_4_ = iVar37 * 0x1aa + 0x200 + iVar39 * 0x32a >> 10;
      local_1b8._0_4_ = (int)psVar44[2];
      local_1b8._8_4_ = 0;
      local_1a8._0_4_ = iVar28;
      local_1a8._8_4_ = 0;
      local_1a8 = CONCAT412(uVar16,local_1a8._0_12_);
      local_1b8._12_4_ = iVar37 * 0x17 + 0x200 + iVar39 * -99 >> 10;
      local_1a8._4_4_ = iVar35 * 0x1aa + 0x200 + iVar33 * 0x32a >> 10;
      local_188[3] = 0;
      local_188[5] = (int)psVar44[0x12];
      local_188[7] = 0;
      local_1a8._12_4_ = iVar35 * 0x17 + 0x200 + iVar33 * -99 >> 10;
      local_188[0] = iVar31 * 0x3a0 + 0x200 + iVar20 * -0x145 >> 10;
      local_188[2] = iVar31 * -0x4b + 0x200 + iVar20 * 0x20e >> 10;
      local_188[4] = iVar37 * 0x3a0 + 0x200 + iVar39 * -0x145 >> 10;
      local_188[6] = iVar37 * -0x4b + 0x200 + iVar39 * 0x20e >> 10;
      local_188[1] = iVar40 * 0x3a0 + 0x200 + iVar38 * -0x145 >> 10;
      local_188[8] = iVar35 * 0x3a0 + 0x200 + iVar33 * -0x145 >> 10;
      local_188[9] = iVar40 * -0x4b + 0x200 + iVar38 * 0x20e >> 10;
      iVar20 = iVar35 * -0x4b + 0x200 + iVar33 * 0x20e;
      goto LAB_00108e59;
    case 0x54:
      DCT_Upsample::P_Q<5,4>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<5,4>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x55:
      DCT_Upsample::P_Q<5,5>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<5,5>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x56:
      DCT_Upsample::P_Q<5,6>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<5,6>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x66:
      DCT_Upsample::P_Q<6,6>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<6,6>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x76:
      DCT_Upsample::P_Q<7,6>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<7,6>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x77:
      DCT_Upsample::P_Q<7,7>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<7,7>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x78:
      DCT_Upsample::P_Q<7,8>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<7,8>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
      break;
    case 0x88:
      DCT_Upsample::P_Q<8,8>::calc((Matrix44 *)local_248,(Matrix44 *)local_208,psVar44);
      DCT_Upsample::R_S<8,8>::calc((Matrix44 *)local_1c8,(Matrix44 *)local_188,psVar44);
    }
    piVar23 = local_248;
    piVar25 = (int *)local_1c8;
    lVar22 = 0;
    do {
      iVar18 = *(int *)(local_208 + lVar22 + 4);
      iVar27 = *(int *)(local_208 + lVar22 + 8);
      iVar19 = *(int *)(local_208 + lVar22 + 0xc);
      iVar20 = *(int *)((long)local_248 + lVar22 + 4);
      iVar26 = *(int *)((long)&uStack_240 + lVar22);
      iVar28 = *(int *)((long)&uStack_240 + lVar22 + 4);
      *(int *)((long)local_188 + lVar22 + 0x40) =
           *(int *)(lVar22 + (long)local_208) + *(int *)((long)piVar23 + lVar22);
      *(int *)((long)local_188 + lVar22 + 0x44) = iVar18 + iVar20;
      *(int *)((long)local_188 + lVar22 + 0x48) = iVar27 + iVar26;
      *(int *)((long)local_188 + lVar22 + 0x4c) = iVar19 + iVar28;
      lVar22 = lVar22 + 0x10;
      piVar29 = (int *)local_208;
    } while (lVar22 != 0x40);
    do {
      iVar18 = piVar29[1];
      iVar27 = piVar29[2];
      iVar19 = piVar29[3];
      piVar24 = piVar23 + 4;
      *piVar23 = *piVar23 - *piVar29;
      piVar23[1] = piVar23[1] - iVar18;
      piVar23[2] = piVar23[2] - iVar27;
      piVar23[3] = piVar23[3] - iVar19;
      piVar23 = piVar24;
      piVar29 = piVar29 + 4;
    } while (piVar24 != (int *)local_208);
    lVar22 = 0;
    do {
      iVar18 = *(int *)(local_1c8 + lVar22 + 4);
      iVar27 = *(int *)(local_1c8 + lVar22 + 8);
      iVar19 = *(int *)(local_1c8 + lVar22 + 0xc);
      *(int *)((long)local_188 + lVar22 + 0x80) =
           *(int *)(lVar22 + (long)local_188) + *(int *)((long)piVar25 + lVar22);
      *(int *)((long)local_188 + lVar22 + 0x84) = *(int *)((long)local_188 + lVar22 + 4) + iVar18;
      *(int *)((long)local_188 + lVar22 + 0x88) = *(int *)((long)local_188 + lVar22 + 8) + iVar27;
      *(int *)((long)local_188 + lVar22 + 0x8c) = *(int *)((long)local_188 + lVar22 + 0xc) + iVar19;
      lVar22 = lVar22 + 0x10;
      piVar23 = local_188;
    } while (lVar22 != 0x40);
    do {
      iVar18 = piVar23[1];
      iVar27 = piVar23[2];
      iVar19 = piVar23[3];
      piVar29 = piVar25 + 4;
      *piVar25 = *piVar25 - *piVar23;
      piVar25[1] = piVar25[1] - iVar18;
      piVar25[2] = piVar25[2] - iVar27;
      piVar25[3] = piVar25[3] - iVar19;
      piVar25 = piVar29;
      piVar23 = piVar23 + 4;
    } while (local_188 != piVar29);
    psVar44 = psVar44 + 0x40;
    pjVar30 = pjVar30 + 4;
    sVar47 = (short)local_188._112_8_;
    sVar52 = (short)local_188._80_8_;
    sVar45 = (short)local_188._96_8_;
    sVar49 = (short)local_188._64_8_;
    sVar53 = (short)local_188._176_8_;
    sVar57 = (short)local_188._144_8_;
    sVar50 = (short)local_188._160_8_;
    sVar60 = (short)local_188._128_8_;
    local_c8[0] = CONCAT26(sVar53 + sVar47,
                           CONCAT24(sVar50 + sVar45,CONCAT22(sVar57 + sVar52,sVar60 + sVar49)));
    sVar58 = SUB82(local_188._112_8_,4);
    sVar54 = SUB82(local_188._80_8_,4);
    sVar51 = SUB82(local_188._64_8_,4);
    sVar55 = SUB82(local_188._96_8_,4);
    sVar64 = SUB82(local_188._120_8_,4);
    sVar70 = SUB82(local_188._88_8_,4);
    sVar63 = SUB82(local_188._104_8_,4);
    sVar69 = SUB82(local_188._72_8_,4);
    sVar59 = SUB82(local_188._176_8_,4);
    sVar67 = SUB82(local_188._144_8_,4);
    sVar56 = SUB82(local_188._160_8_,4);
    sVar68 = SUB82(local_188._128_8_,4);
    sVar62 = SUB82(local_188._184_8_,4);
    sVar48 = SUB82(local_188._152_8_,4);
    sVar46 = SUB82(local_188._136_8_,4);
    sVar61 = SUB82(local_188._168_8_,4);
    local_b8 = CONCAT26(sVar59 + sVar58,
                        CONCAT24(sVar56 + sVar55,CONCAT22(sVar67 + sVar54,sVar68 + sVar51)));
    local_98 = CONCAT26(sVar62 + sVar64,
                        CONCAT24(sVar61 + sVar63,CONCAT22(sVar48 + sVar70,sVar46 + sVar69)));
    sVar75 = (short)local_188._120_8_;
    sVar66 = (short)local_188._88_8_;
    sVar65 = (short)local_188._72_8_;
    sVar73 = (short)local_188._104_8_;
    sVar72 = (short)local_188._184_8_;
    sVar76 = (short)local_188._152_8_;
    sVar71 = (short)local_188._168_8_;
    sVar74 = (short)local_188._136_8_;
    local_a8 = CONCAT26(sVar72 + sVar75,
                        CONCAT24(sVar71 + sVar73,CONCAT22(sVar76 + sVar66,sVar74 + sVar65)));
    idct_4x4((short *)local_c8,puVar21);
    local_c8[0] = CONCAT26(sVar47 - sVar53,
                           CONCAT24(sVar45 - sVar50,CONCAT22(sVar52 - sVar57,sVar49 - sVar60)));
    local_b8 = CONCAT26(sVar58 - sVar59,
                        CONCAT24(sVar55 - sVar56,CONCAT22(sVar54 - sVar67,sVar51 - sVar68)));
    local_a8 = CONCAT26(sVar75 - sVar72,
                        CONCAT24(sVar73 - sVar71,CONCAT22(sVar66 - sVar76,sVar65 - sVar74)));
    local_98 = CONCAT26(sVar64 - sVar62,
                        CONCAT24(sVar63 - sVar61,CONCAT22(sVar70 - sVar48,sVar69 - sVar46)));
    idct_4x4((short *)local_c8,puVar21 + 0x40);
    sVar49 = (short)local_218;
    sVar54 = (short)local_238;
    sVar47 = (short)local_228;
    sVar51 = (short)local_248[0];
    sVar60 = local_198._0_2_;
    sVar68 = local_1b8._0_2_;
    sVar52 = local_1a8._0_2_;
    sVar65 = local_1c8._0_2_;
    local_c8[0] = CONCAT26(sVar60 + sVar49,
                           CONCAT24(sVar52 + sVar47,CONCAT22(sVar68 + sVar54,sVar65 + sVar51)));
    sVar67 = (short)(local_218 >> 0x20);
    sVar55 = (short)(local_238 >> 0x20);
    sVar53 = (short)local_248[1];
    sVar66 = (short)((ulong)local_228 >> 0x20);
    sVar72 = local_198._4_2_;
    sVar58 = local_1b8._4_2_;
    sVar56 = local_1c8._4_2_;
    sVar69 = local_1a8._4_2_;
    local_b8 = CONCAT26(sVar72 + sVar67,
                        CONCAT24(sVar69 + sVar66,CONCAT22(sVar58 + sVar55,sVar56 + sVar53)));
    sVar73 = (short)local_210;
    sVar59 = (short)local_230;
    sVar57 = (short)uStack_240;
    sVar70 = (short)local_220;
    sVar76 = local_198._8_2_;
    sVar74 = local_1b8._8_2_;
    sVar71 = local_1c8._8_2_;
    sVar75 = local_1a8._8_2_;
    local_a8 = CONCAT26(sVar76 + sVar73,
                        CONCAT24(sVar75 + sVar70,CONCAT22(sVar74 + sVar59,sVar71 + sVar57)));
    sVar64 = (short)((ulong)local_210 >> 0x20);
    sVar46 = (short)((ulong)local_230 >> 0x20);
    sVar45 = (short)((ulong)uStack_240 >> 0x20);
    sVar63 = (short)((ulong)local_220 >> 0x20);
    sVar62 = local_198._12_2_;
    sVar50 = local_1b8._12_2_;
    sVar48 = local_1c8._12_2_;
    sVar61 = local_1a8._12_2_;
    local_98 = CONCAT26(sVar62 + sVar64,
                        CONCAT24(sVar61 + sVar63,CONCAT22(sVar50 + sVar46,sVar48 + sVar45)));
    idct_4x4((short *)local_c8,puVar21 + 0x80);
    puVar42 = puVar21 + 0xc0;
    puVar21 = puVar21 + 0x100;
    local_c8[0] = CONCAT26(sVar49 - sVar60,
                           CONCAT24(sVar47 - sVar52,CONCAT22(sVar54 - sVar68,sVar51 - sVar65)));
    local_b8 = CONCAT26(sVar67 - sVar72,
                        CONCAT24(sVar66 - sVar69,CONCAT22(sVar55 - sVar58,sVar53 - sVar56)));
    local_a8 = CONCAT26(sVar73 - sVar76,
                        CONCAT24(sVar70 - sVar75,CONCAT22(sVar59 - sVar74,sVar57 - sVar71)));
    local_98 = CONCAT26(sVar64 - sVar62,
                        CONCAT24(sVar63 - sVar61,CONCAT22(sVar46 - sVar50,sVar45 - sVar48)));
    idct_4x4((short *)local_c8,puVar42);
  } while (psVar44 != psVar43);
switchD_0010806a_caseD_13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* jpeg_decoder::load_next_row() */

void __thiscall jpeg_decoder::load_next_row(jpeg_decoder *this)

{
  jpeg_decoder *pjVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  short *psVar8;
  jpeg_decoder *pjVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uchar *puVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  iVar15 = 0;
  if (0 < *(int *)(this + 0x24c)) {
    do {
      while( true ) {
        lVar20 = 0;
        iVar17 = 0;
        iVar18 = 0;
        if (*(int *)(this + 0x244) < 1) break;
        do {
          lVar16 = (long)*(int *)(this + lVar20 * 4 + 0x254);
          plVar4 = *(long **)(this + lVar16 * 8 + 0x2f0);
          iVar3 = *(int *)(local_58 + lVar16 * 4);
          plVar5 = *(long **)(this + lVar16 * 8 + 0x2d0);
          lVar6 = *(long *)(this + (long)*(int *)(this + lVar16 * 4 + 0x1b8) * 8 + 0x170);
          psVar8 = (short *)(lVar20 * 0x80 + *(long *)(this + 0x2500));
          sVar2 = *(short *)((long)((int)plVar5[1] * (int)plVar5[3] *
                                   (*(int *)(this + lVar16 * 4 + 0x314) + iVar17)) + *plVar5 +
                            (long)((int)plVar5[3] * (iVar3 + iVar18)));
          lVar14 = 0x3f;
          puVar10 = (undefined8 *)
                    ((long)((int)plVar4[1] * (int)plVar4[3] *
                           (*(int *)(this + lVar16 * 4 + 0x314) + iVar17)) + 2 +
                     (long)((iVar3 + iVar18) * (int)plVar4[3]) + *plVar4);
          *psVar8 = sVar2;
          uVar7 = puVar10[1];
          *(undefined8 *)(psVar8 + 1) = *puVar10;
          *(undefined8 *)(psVar8 + 5) = uVar7;
          uVar7 = puVar10[3];
          *(undefined8 *)(psVar8 + 9) = puVar10[2];
          *(undefined8 *)(psVar8 + 0xd) = uVar7;
          uVar7 = puVar10[5];
          *(undefined8 *)(psVar8 + 0x11) = puVar10[4];
          *(undefined8 *)(psVar8 + 0x15) = uVar7;
          uVar7 = puVar10[7];
          *(undefined8 *)(psVar8 + 0x19) = puVar10[6];
          *(undefined8 *)(psVar8 + 0x1d) = uVar7;
          uVar7 = puVar10[9];
          *(undefined8 *)(psVar8 + 0x21) = puVar10[8];
          *(undefined8 *)(psVar8 + 0x25) = uVar7;
          uVar7 = puVar10[0xb];
          *(undefined8 *)(psVar8 + 0x29) = puVar10[10];
          *(undefined8 *)(psVar8 + 0x2d) = uVar7;
          uVar7 = puVar10[0xd];
          *(undefined8 *)(psVar8 + 0x31) = puVar10[0xc];
          *(undefined8 *)(psVar8 + 0x35) = uVar7;
          uVar7 = *(undefined8 *)((long)puVar10 + 0x76);
          *(undefined8 *)(psVar8 + 0x38) = *(undefined8 *)((long)puVar10 + 0x6e);
          *(undefined8 *)(psVar8 + 0x3c) = uVar7;
          lVar11 = 0x3f;
          while (psVar8[lVar11] == 0) {
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) {
              iVar13 = 1;
              iVar12 = 0;
              goto LAB_0010a3d5;
            }
            lVar11 = (long)*(int *)(g_ZAG + lVar14 * 4);
          }
          iVar12 = (int)lVar14;
          iVar13 = iVar12 + 1;
          sVar2 = psVar8[lVar11];
LAB_0010a3d5:
          *(int *)(this + lVar20 * 4 + 0x2508) = iVar13;
          lVar11 = (long)iVar12;
          while( true ) {
            if (sVar2 != 0) {
              psVar8[*(int *)(g_ZAG + lVar11 * 4)] = sVar2 * *(short *)(lVar6 + lVar11 * 2);
            }
            lVar11 = lVar11 + -1;
            if ((int)lVar11 == -1) break;
            sVar2 = psVar8[*(int *)(g_ZAG + lVar11 * 4)];
          }
          if (*(int *)(this + 0x1f8) == 1) {
            *(int *)(local_58 + lVar16 * 4) = iVar3 + 1;
          }
          else {
            iVar18 = iVar18 + 1;
            if (*(int *)(this + lVar16 * 4 + 0x198) == iVar18) {
              iVar18 = 0;
            }
            iVar17 = iVar17 + 1;
            if (*(int *)(this + lVar16 * 4 + 0x1a8) == iVar17) {
              iVar17 = 0;
              *(int *)(local_58 + lVar16 * 4) = iVar3 + *(int *)(this + lVar16 * 4 + 0x198);
            }
          }
          iVar3 = *(int *)(this + 0x244);
          lVar20 = lVar20 + 1;
        } while ((int)lVar20 < iVar3);
        if (this[0x24e4] != (jpeg_decoder)0x0) goto LAB_0010a55c;
        if (0 < iVar3) {
          lVar20 = 0;
          puVar19 = (uchar *)((long)(iVar3 * iVar15 * 0x40) + *(long *)(this + 0x2530));
          psVar8 = *(short **)(this + 0x2500);
          do {
            lVar6 = lVar20 * 4;
            lVar20 = lVar20 + 1;
            idct(psVar8,puVar19,*(int *)(this + lVar6 + 0x2508));
            puVar19 = puVar19 + 0x40;
            psVar8 = psVar8 + 0x40;
          } while ((int)lVar20 < *(int *)(this + 0x244));
        }
LAB_0010a4c0:
        iVar15 = iVar15 + 1;
        if (*(int *)(this + 0x24c) <= iVar15) goto LAB_0010a4d0;
      }
      if (this[0x24e4] == (jpeg_decoder)0x0) goto LAB_0010a4c0;
LAB_0010a55c:
      iVar17 = iVar15 + 1;
      transform_mcu_expand(this,iVar15);
      iVar15 = iVar17;
    } while (iVar17 < *(int *)(this + 0x24c));
  }
LAB_0010a4d0:
  iVar15 = *(int *)(this + 0x1f8);
  if (iVar15 == 1) {
    *(int *)(this + (long)*(int *)(this + 0x1fc) * 4 + 0x314) =
         *(int *)(this + (long)*(int *)(this + 0x1fc) * 4 + 0x314) + 1;
  }
  else if (0 < iVar15) {
    pjVar9 = this;
    do {
      pjVar1 = pjVar9 + 0x1fc;
      pjVar9 = pjVar9 + 4;
      *(int *)(this + (long)*(int *)pjVar1 * 4 + 0x314) =
           *(int *)(this + (long)*(int *)pjVar1 * 4 + 0x314) +
           *(int *)(this + (long)*(int *)pjVar1 * 4 + 0x1a8);
    } while (pjVar9 != this + (long)iVar15 * 4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* jpeg_decoder::decode_next_row() */

void __thiscall jpeg_decoder::decode_next_row(jpeg_decoder *this)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  int *piVar7;
  byte *pbVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  short *psVar23;
  
  if (*(int *)(this + 0x24c) < 1) {
    return;
  }
  iVar21 = 0;
  do {
    if ((*(int *)(this + 0x24c4) != 0) && (*(int *)(this + 0x24c8) == 0)) {
      process_restart(this);
    }
    psVar23 = *(short **)(this + 0x2500);
    if (*(int *)(this + 0x244) < 1) {
      if (this[0x24e4] != (jpeg_decoder)0x0) goto LAB_0010a92f;
    }
    else {
      lVar19 = 0;
      do {
        iVar10 = *(int *)(this + lVar19 * 4 + 0x254);
        psVar3 = *(short **)(this + (long)*(int *)(this + (long)iVar10 * 4 + 0x1b8) * 8 + 0x170);
        uVar12 = *(uint *)(*(long *)(this + (long)*(int *)(this + (long)iVar10 * 4 + 0x20c) * 8 +
                                            0x290) + 0x404 +
                          (ulong)(*(uint *)(this + 0x24c0) >> 0x18) * 4);
        if ((int)uVar12 < 0) {
          iVar14 = 0x17;
          do {
            bVar9 = (byte)iVar14;
            iVar14 = iVar14 + -1;
            uVar12 = *(uint *)(*(long *)(this + (long)*(int *)(this + (long)iVar10 * 4 + 0x20c) * 8
                                                + 0x290) + 0x904 +
                              (long)(int)-((*(uint *)(this + 0x24c0) >> (bVar9 & 0x1f) & 1) + uVar12
                                          ) * 4);
          } while ((int)uVar12 < 0);
          uVar12 = uVar12 & 0xf;
          get_bits_no_markers(this,0x1f - iVar14);
          uVar15 = get_bits_no_markers(this,uVar12);
        }
        else {
          uVar15 = (int)uVar12 >> 8 & 0x1f;
          if ((uVar12 & 0x8000) == 0) {
            uVar20 = uVar12 & 0xf;
            if (*(int *)(this + 0x24bc) + 0x10 < (int)(uVar20 + uVar15)) {
              get_bits_no_markers(this,uVar15);
              uVar15 = get_bits_no_markers(this,uVar20);
            }
            else {
              uVar15 = get_bits_no_markers(this,uVar20 + uVar15);
              uVar15 = (1 << (sbyte)uVar20) - 1U & uVar15;
            }
          }
          else {
            get_bits_no_markers(this,uVar15);
            uVar15 = (int)uVar12 >> 0x10;
          }
          uVar12 = uVar12 & 0xf;
        }
        if ((int)uVar15 < *(int *)(s_extend_test + (long)(int)uVar12 * 4)) {
          uVar15 = uVar15 + *(int *)(s_extend_offset + (long)(int)uVar12 * 4);
        }
        iVar14 = *(int *)(this + (long)iVar10 * 4 + 0x24ec);
        *(uint *)(this + (long)iVar10 * 4 + 0x24ec) = uVar15 + iVar14;
        iVar2 = *(int *)(this + lVar19 * 4 + 0x2508);
        *psVar23 = (short)(uVar15 + iVar14) * *psVar3;
        iVar14 = 1;
        lVar4 = *(long *)(this + (long)*(int *)(this + (long)iVar10 * 4 + 0x21c) * 8 + 0x290);
        do {
          while( true ) {
            uVar12 = *(uint *)(this + 0x24c0);
            uVar15 = *(uint *)(lVar4 + 0x404 + (ulong)(uVar12 >> 0x18) * 4);
            if (-1 < (int)uVar15) break;
            iVar10 = 0x17;
            do {
              bVar9 = (byte)iVar10;
              iVar10 = iVar10 + -1;
              uVar15 = *(uint *)(lVar4 + 0x904 +
                                (long)(int)-((uVar12 >> (bVar9 & 0x1f) & 1) + uVar15) * 4);
            } while ((int)uVar15 < 0);
            iVar16 = *(int *)(this + 0x24bc);
            iVar17 = iVar16 - (0x1f - iVar10);
            *(int *)(this + 0x24bc) = iVar17;
            if (iVar17 < 1) {
              iVar10 = *(int *)(this + 0x330);
              uVar12 = uVar12 << ((byte)iVar16 & 0x1f);
              *(uint *)(this + 0x24c0) = uVar12;
              if (iVar10 < 2) {
                if (iVar10 == 0) {
                  prep_in_buffer(this);
                  iVar10 = *(int *)(this + 0x330);
                  if (iVar10 != 0) goto LAB_0010b160;
                  uVar12 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar12 ^ 1;
                  uVar12 = (-(uint)(uVar12 == 0) & 0x2600) + 0xd900;
                }
                else {
LAB_0010b160:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  uVar12 = (uint)bVar9;
                  if (uVar12 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 == 0) {
                        lVar6 = *(long *)(this + 0x328);
                        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                        *(long *)(this + 0x328) = lVar6 + -1;
                        uVar12 = 0xff00;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        iVar10 = *(int *)(this + 0x330) + 1;
                        *(int *)(this + 0x330) = iVar10;
                        goto LAB_0010b18e;
                      }
                      pbVar8 = *(byte **)(this + 0x328);
                    }
LAB_0010b9a0:
                    iVar10 = iVar10 + -1;
                    *(byte **)(this + 0x328) = pbVar8 + 1;
                    bVar9 = *pbVar8;
                    uVar12 = 0xff00;
                    *(int *)(this + 0x330) = iVar10;
                    if (bVar9 != 0) {
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      lVar6 = *(long *)(this + 0x328);
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      *(long *)(this + 0x328) = lVar6 + -1;
                      *(undefined1 *)(lVar6 + -1) = 0xff;
                      iVar10 = *(int *)(this + 0x330) + 1;
                      *(int *)(this + 0x330) = iVar10;
                    }
                  }
                  else {
                    uVar12 = uVar12 << 8;
                  }
LAB_0010b18e:
                  if (iVar10 != 0) goto LAB_0010b058;
                }
                prep_in_buffer(this);
                iVar10 = *(int *)(this + 0x330);
                if (iVar10 == 0) {
                  uVar20 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar20 ^ 1;
                  uVar20 = (-(uint)(uVar20 == 0) & 0x26) + 0xd9;
                }
                else {
LAB_0010b058:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  uVar20 = (uint)*pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (uVar20 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 != 0) {
                        pbVar8 = *(byte **)(this + 0x328);
                        goto LAB_0010b089;
                      }
                      *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                    }
                    else {
LAB_0010b089:
                      *(byte **)(this + 0x328) = pbVar8 + 1;
                      bVar9 = *pbVar8;
                      *(int *)(this + 0x330) = iVar10 + -1;
                      if (bVar9 == 0) goto LAB_0010b018;
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                    }
                    lVar6 = *(long *)(this + 0x328);
                    *(long *)(this + 0x328) = lVar6 + -1;
                    *(undefined1 *)(lVar6 + -1) = 0xff;
                    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                  }
                }
LAB_0010b018:
                iVar17 = *(int *)(this + 0x24bc);
                uVar12 = uVar20 | uVar12 | *(uint *)(this + 0x24c0);
              }
              else {
                pbVar5 = *(byte **)(this + 0x328);
                bVar9 = *pbVar5;
                if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                  pbVar8 = pbVar5 + 1;
                  iVar10 = iVar10 + -1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (bVar9 == 0xff) goto LAB_0010b9a0;
                  uVar12 = (uint)bVar9 << 8;
                  goto LAB_0010b058;
                }
                *(int *)(this + 0x330) = iVar10 + -2;
                *(byte **)(this + 0x328) = pbVar5 + 2;
                uVar12 = bVar1 | uVar12 | (uint)bVar9 << 8;
              }
              *(int *)(this + 0x24bc) = iVar17 + 0x10;
              *(uint *)(this + 0x24c0) = uVar12 << (-(char)iVar17 & 0x1fU);
            }
            else {
              *(uint *)(this + 0x24c0) = uVar12 << ((byte)(0x1f - iVar10) & 0x1f);
            }
            uVar20 = uVar15 & 0xf;
            uVar12 = (int)uVar15 >> 4;
            if (uVar20 == 0) goto LAB_0010a8c5;
            iVar10 = *(int *)(this + 0x24bc);
            uVar22 = *(uint *)(this + 0x24c0);
            iVar16 = iVar10 - uVar20;
            *(int *)(this + 0x24bc) = iVar16;
            if (iVar16 < 1) {
              uVar18 = uVar22 << ((byte)iVar10 & 0x1f);
              *(uint *)(this + 0x24c0) = uVar18;
              iVar10 = *(int *)(this + 0x330);
              if (iVar10 < 2) {
                if (iVar10 == 0) {
                  prep_in_buffer(this);
                  iVar10 = *(int *)(this + 0x330);
                  if (iVar10 != 0) goto LAB_0010aea9;
                  uVar18 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar18 ^ 1;
                  uVar18 = (-(uint)(uVar18 == 0) & 0x2600) + 0xd900;
                }
                else {
LAB_0010aea9:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  uVar18 = (uint)bVar9;
                  if (uVar18 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 == 0) {
                        lVar6 = *(long *)(this + 0x328);
                        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                        uVar18 = 0xff00;
                        *(long *)(this + 0x328) = lVar6 + -1;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        iVar10 = *(int *)(this + 0x330) + 1;
                        *(int *)(this + 0x330) = iVar10;
                        goto LAB_0010aeda;
                      }
                      pbVar8 = *(byte **)(this + 0x328);
                    }
LAB_0010b905:
                    iVar10 = iVar10 + -1;
                    uVar18 = 0xff00;
                    *(byte **)(this + 0x328) = pbVar8 + 1;
                    bVar9 = *pbVar8;
                    *(int *)(this + 0x330) = iVar10;
                    if (bVar9 != 0) {
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      lVar6 = *(long *)(this + 0x328);
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      *(long *)(this + 0x328) = lVar6 + -1;
                      *(undefined1 *)(lVar6 + -1) = 0xff;
                      iVar10 = *(int *)(this + 0x330) + 1;
                      *(int *)(this + 0x330) = iVar10;
                    }
                  }
                  else {
                    uVar18 = uVar18 << 8;
                  }
LAB_0010aeda:
                  if (iVar10 != 0) goto LAB_0010aee2;
                }
                prep_in_buffer(this);
                iVar10 = *(int *)(this + 0x330);
                if (iVar10 == 0) {
                  uVar11 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar11 ^ 1;
                  uVar11 = (-(uint)(uVar11 == 0) & 0x26) + 0xd9;
                }
                else {
LAB_0010aee2:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  uVar11 = (uint)*pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (uVar11 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 != 0) {
                        pbVar8 = *(byte **)(this + 0x328);
                        goto LAB_0010af11;
                      }
                      *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                    }
                    else {
LAB_0010af11:
                      *(byte **)(this + 0x328) = pbVar8 + 1;
                      bVar9 = *pbVar8;
                      *(int *)(this + 0x330) = iVar10 + -1;
                      if (bVar9 == 0) goto LAB_0010ae90;
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                    }
                    lVar6 = *(long *)(this + 0x328);
                    *(long *)(this + 0x328) = lVar6 + -1;
                    *(undefined1 *)(lVar6 + -1) = 0xff;
                    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                  }
                }
LAB_0010ae90:
                uVar18 = uVar11 | uVar18 | *(uint *)(this + 0x24c0);
                iVar16 = *(int *)(this + 0x24bc);
              }
              else {
                pbVar5 = *(byte **)(this + 0x328);
                bVar9 = *pbVar5;
                if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                  pbVar8 = pbVar5 + 1;
                  iVar10 = iVar10 + -1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (bVar9 == 0xff) goto LAB_0010b905;
                  uVar18 = (uint)bVar9 << 8;
                  goto LAB_0010aee2;
                }
                *(int *)(this + 0x330) = iVar10 + -2;
                *(byte **)(this + 0x328) = pbVar5 + 2;
                uVar18 = (uint)bVar9 << 8 | uVar18 | bVar1;
              }
              *(int *)(this + 0x24bc) = iVar16 + 0x10;
              *(uint *)(this + 0x24c0) = uVar18 << (-(char)iVar16 & 0x1fU);
            }
            else {
              *(uint *)(this + 0x24c0) = uVar22 << (sbyte)uVar20;
            }
            uVar15 = uVar15 & 0xf;
            uVar22 = uVar22 >> (0x20U - (sbyte)uVar20 & 0x1f);
LAB_0010a79b:
            iVar10 = iVar14;
            if (uVar12 != 0) {
              iVar10 = uVar12 + iVar14;
              if (0x3f < iVar10) {
LAB_0010c00c:
                    /* WARNING: Subroutine does not return */
                stop_decoding(this,0xffffff1a);
              }
              if (iVar14 < iVar2) {
                piVar7 = (int *)(g_ZAG + (long)iVar14 * 4);
                uVar20 = iVar2 - iVar14;
                if ((int)uVar12 < iVar2 - iVar14) {
                  uVar20 = uVar12;
                }
                do {
                  iVar16 = *piVar7;
                  piVar7 = piVar7 + 1;
                  psVar23[iVar16] = 0;
                } while (piVar7 != (int *)(g_ZAG + ((ulong)(uVar20 - 1) + (long)iVar14) * 4 + 4));
              }
            }
            if ((int)uVar22 < *(int *)(s_extend_test + (long)(int)uVar15 * 4)) {
              uVar22 = uVar22 + *(int *)(s_extend_offset + (long)(int)uVar15 * 4);
            }
            iVar14 = iVar10 + 1;
            psVar23[*(int *)(g_ZAG + (long)iVar10 * 4)] = psVar3[iVar10] * (short)uVar22;
            if (iVar14 == 0x40) goto LAB_0010a8eb;
          }
          uVar20 = (int)uVar15 >> 8 & 0x1f;
          if ((uVar15 & 0x8000) == 0) {
            iVar16 = *(int *)(this + 0x24bc);
            iVar10 = (uVar15 & 0xf) + uVar20;
            if (iVar16 + 0x10 < iVar10) {
              if (uVar20 != 0) {
                iVar10 = iVar16 - uVar20;
                *(int *)(this + 0x24bc) = iVar10;
                if (iVar10 < 1) {
                  iVar17 = *(int *)(this + 0x330);
                  uVar12 = uVar12 << ((byte)iVar16 & 0x1f);
                  *(uint *)(this + 0x24c0) = uVar12;
                  if (iVar17 < 2) {
                    if (iVar17 == 0) {
                      prep_in_buffer(this);
                      iVar17 = *(int *)(this + 0x330);
                      if (iVar17 != 0) goto LAB_0010b55f;
                      uVar12 = *(uint *)(this + 0x334);
                      *(uint *)(this + 0x334) = uVar12 ^ 1;
                      uVar12 = (-(uint)(uVar12 == 0) & 0x2600) + 0xd900;
                    }
                    else {
LAB_0010b55f:
                      pbVar5 = *(byte **)(this + 0x328);
                      iVar17 = iVar17 + -1;
                      pbVar8 = pbVar5 + 1;
                      *(byte **)(this + 0x328) = pbVar8;
                      bVar9 = *pbVar5;
                      *(int *)(this + 0x330) = iVar17;
                      if (bVar9 == 0xff) {
                        if (iVar17 == 0) {
                          prep_in_buffer(this);
                          iVar17 = *(int *)(this + 0x330);
                          if (iVar17 == 0) {
                            lVar6 = *(long *)(this + 0x328);
                            *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                            uVar12 = 0xff00;
                            *(long *)(this + 0x328) = lVar6 + -1;
                            *(undefined1 *)(lVar6 + -1) = 0xff;
                            iVar17 = *(int *)(this + 0x330) + 1;
                            *(int *)(this + 0x330) = iVar17;
                            goto LAB_0010b591;
                          }
                          pbVar8 = *(byte **)(this + 0x328);
                        }
LAB_0010ba44:
                        iVar17 = iVar17 + -1;
                        uVar12 = 0xff00;
                        *(byte **)(this + 0x328) = pbVar8 + 1;
                        bVar9 = *pbVar8;
                        *(int *)(this + 0x330) = iVar17;
                        if (bVar9 != 0) {
                          *(byte **)(this + 0x328) = pbVar8;
                          *pbVar8 = bVar9;
                          lVar6 = *(long *)(this + 0x328);
                          *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                          *(long *)(this + 0x328) = lVar6 + -1;
                          *(undefined1 *)(lVar6 + -1) = 0xff;
                          iVar17 = *(int *)(this + 0x330) + 1;
                          *(int *)(this + 0x330) = iVar17;
                        }
                      }
                      else {
                        uVar12 = (uint)bVar9 << 8;
                      }
LAB_0010b591:
                      if (iVar17 != 0) goto LAB_0010b59a;
                    }
                    prep_in_buffer(this);
                    iVar17 = *(int *)(this + 0x330);
                    if (iVar17 == 0) {
                      uVar20 = *(uint *)(this + 0x334);
                      *(uint *)(this + 0x334) = uVar20 ^ 1;
                      uVar20 = (-(uint)(uVar20 == 0) & 0x26) + 0xd9;
                    }
                    else {
LAB_0010b59a:
                      pbVar5 = *(byte **)(this + 0x328);
                      iVar17 = iVar17 + -1;
                      pbVar8 = pbVar5 + 1;
                      *(byte **)(this + 0x328) = pbVar8;
                      uVar20 = (uint)*pbVar5;
                      *(int *)(this + 0x330) = iVar17;
                      if (uVar20 == 0xff) {
                        if (iVar17 == 0) {
                          prep_in_buffer(this);
                          iVar17 = *(int *)(this + 0x330);
                          if (iVar17 != 0) {
                            pbVar8 = *(byte **)(this + 0x328);
                            goto LAB_0010b5cb;
                          }
                          *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                        }
                        else {
LAB_0010b5cb:
                          *(byte **)(this + 0x328) = pbVar8 + 1;
                          bVar9 = *pbVar8;
                          *(int *)(this + 0x330) = iVar17 + -1;
                          if (bVar9 == 0) goto LAB_0010b547;
                          *(byte **)(this + 0x328) = pbVar8;
                          *pbVar8 = bVar9;
                          *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                        }
                        lVar6 = *(long *)(this + 0x328);
                        *(long *)(this + 0x328) = lVar6 + -1;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      }
                    }
LAB_0010b547:
                    iVar10 = *(int *)(this + 0x24bc);
                    uVar12 = *(uint *)(this + 0x24c0) | uVar20 | uVar12;
                  }
                  else {
                    pbVar5 = *(byte **)(this + 0x328);
                    bVar9 = *pbVar5;
                    if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                      pbVar8 = pbVar5 + 1;
                      iVar17 = iVar17 + -1;
                      *(byte **)(this + 0x328) = pbVar8;
                      bVar9 = *pbVar5;
                      *(int *)(this + 0x330) = iVar17;
                      if (bVar9 == 0xff) goto LAB_0010ba44;
                      uVar12 = (uint)bVar9 << 8;
                      goto LAB_0010b59a;
                    }
                    *(int *)(this + 0x330) = iVar17 + -2;
                    *(byte **)(this + 0x328) = pbVar5 + 2;
                    uVar12 = (uint)bVar9 << 8 | bVar1 | uVar12;
                  }
                  *(int *)(this + 0x24bc) = iVar10 + 0x10;
                  *(uint *)(this + 0x24c0) = uVar12 << (-(char)iVar10 & 0x1fU);
                }
                else {
                  *(uint *)(this + 0x24c0) = uVar12 << (sbyte)uVar20;
                }
              }
              uVar12 = uVar15 & 0xf;
              if (uVar12 == 0) goto LAB_0010aa08;
              uVar20 = *(uint *)(this + 0x24c0);
              uVar22 = uVar20 >> (0x20U - (sbyte)uVar12 & 0x1f);
              iVar10 = *(int *)(this + 0x24bc);
              iVar16 = iVar10 - uVar12;
              *(int *)(this + 0x24bc) = iVar16;
              if (0 < iVar16) {
                *(uint *)(this + 0x24c0) = uVar20 << (sbyte)uVar12;
                goto LAB_0010a788;
              }
              iVar17 = *(int *)(this + 0x330);
              uVar20 = uVar20 << ((byte)iVar10 & 0x1f);
              *(uint *)(this + 0x24c0) = uVar20;
              if (iVar17 < 2) {
                if (iVar17 == 0) {
                  prep_in_buffer(this);
                  iVar17 = *(int *)(this + 0x330);
                  if (iVar17 != 0) goto LAB_0010b3d7;
                  uVar12 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar12 ^ 1;
                  uVar12 = (-(uint)(uVar12 == 0) & 0x2600) + 0xd900;
                }
                else {
LAB_0010b3d7:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar17 = iVar17 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar17;
                  uVar12 = (uint)bVar9;
                  if (uVar12 == 0xff) {
                    if (iVar17 == 0) {
                      prep_in_buffer(this);
                      iVar17 = *(int *)(this + 0x330);
                      if (iVar17 == 0) {
                        lVar6 = *(long *)(this + 0x328);
                        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                        *(long *)(this + 0x328) = lVar6 + -1;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        iVar17 = *(int *)(this + 0x330) + 1;
                        uVar12 = 0xff00;
                        *(int *)(this + 0x330) = iVar17;
                        goto LAB_0010b404;
                      }
                      pbVar8 = *(byte **)(this + 0x328);
                    }
LAB_0010badf:
                    iVar17 = iVar17 + -1;
                    *(byte **)(this + 0x328) = pbVar8 + 1;
                    bVar9 = *pbVar8;
                    uVar12 = 0xff00;
                    *(int *)(this + 0x330) = iVar17;
                    if (bVar9 != 0) {
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      lVar6 = *(long *)(this + 0x328);
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      *(long *)(this + 0x328) = lVar6 + -1;
                      *(undefined1 *)(lVar6 + -1) = 0xff;
                      iVar17 = *(int *)(this + 0x330) + 1;
                      *(int *)(this + 0x330) = iVar17;
                    }
                  }
                  else {
                    uVar12 = uVar12 << 8;
                  }
LAB_0010b404:
                  if (iVar17 != 0) goto LAB_0010b40c;
                }
                prep_in_buffer(this);
                iVar17 = *(int *)(this + 0x330);
                if (iVar17 == 0) {
                  uVar20 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar20 ^ 1;
                  uVar20 = (-(uint)(uVar20 == 0) & 0x26) + 0xd9;
                }
                else {
LAB_0010b40c:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar17 = iVar17 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  uVar20 = (uint)*pbVar5;
                  *(int *)(this + 0x330) = iVar17;
                  if (uVar20 == 0xff) {
                    if (iVar17 == 0) {
                      prep_in_buffer(this);
                      iVar17 = *(int *)(this + 0x330);
                      if (iVar17 != 0) {
                        pbVar8 = *(byte **)(this + 0x328);
                        goto LAB_0010b43b;
                      }
                      *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                    }
                    else {
LAB_0010b43b:
                      *(byte **)(this + 0x328) = pbVar8 + 1;
                      bVar9 = *pbVar8;
                      *(int *)(this + 0x330) = iVar17 + -1;
                      if (bVar9 == 0) goto LAB_0010b3c0;
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                    }
                    lVar6 = *(long *)(this + 0x328);
                    *(long *)(this + 0x328) = lVar6 + -1;
                    *(undefined1 *)(lVar6 + -1) = 0xff;
                    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                  }
                }
LAB_0010b3c0:
                iVar16 = *(int *)(this + 0x24bc);
                uVar12 = *(uint *)(this + 0x24c0) | uVar20 | uVar12;
              }
              else {
                pbVar5 = *(byte **)(this + 0x328);
                bVar9 = *pbVar5;
                if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                  pbVar8 = pbVar5 + 1;
                  iVar17 = iVar17 + -1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar17;
                  if (bVar9 == 0xff) goto LAB_0010badf;
                  uVar12 = (uint)bVar9 << 8;
                  goto LAB_0010b40c;
                }
                *(int *)(this + 0x330) = iVar17 + -2;
                *(byte **)(this + 0x328) = pbVar5 + 2;
                uVar12 = (uint)bVar9 << 8 | bVar1 | uVar20;
              }
              *(int *)(this + 0x24bc) = iVar16 + 0x10;
              *(uint *)(this + 0x24c0) = uVar12 << (-(char)iVar16 & 0x1fU);
            }
            else {
              if (iVar10 == 0) {
LAB_0010aa08:
                uVar12 = (int)uVar15 >> 4 & 0xf;
                goto LAB_0010a8c5;
              }
              iVar17 = iVar16 - iVar10;
              *(int *)(this + 0x24bc) = iVar17;
              uVar22 = (1 << (sbyte)(uVar15 & 0xf)) - 1U & uVar12 >> (0x20 - (byte)iVar10 & 0x1f);
              if (0 < iVar17) {
                *(uint *)(this + 0x24c0) = uVar12 << ((byte)iVar10 & 0x1f);
                goto LAB_0010a788;
              }
              iVar10 = *(int *)(this + 0x330);
              uVar12 = uVar12 << ((byte)iVar16 & 0x1f);
              *(uint *)(this + 0x24c0) = uVar12;
              if (iVar10 < 2) {
                if (iVar10 == 0) {
                  prep_in_buffer(this);
                  iVar10 = *(int *)(this + 0x330);
                  if (iVar10 != 0) goto LAB_0010b25f;
                  uVar12 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar12 ^ 1;
                  uVar12 = (-(uint)(uVar12 == 0) & 0x2600) + 0xd900;
                }
                else {
LAB_0010b25f:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  uVar12 = (uint)bVar9;
                  if (uVar12 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 == 0) {
                        lVar6 = *(long *)(this + 0x328);
                        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                        uVar12 = 0xff00;
                        *(long *)(this + 0x328) = lVar6 + -1;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        iVar10 = *(int *)(this + 0x330) + 1;
                        *(int *)(this + 0x330) = iVar10;
                        goto LAB_0010b290;
                      }
                      pbVar8 = *(byte **)(this + 0x328);
                    }
LAB_0010bb79:
                    iVar10 = iVar10 + -1;
                    uVar12 = 0xff00;
                    *(byte **)(this + 0x328) = pbVar8 + 1;
                    bVar9 = *pbVar8;
                    *(int *)(this + 0x330) = iVar10;
                    if (bVar9 != 0) {
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      lVar6 = *(long *)(this + 0x328);
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      *(long *)(this + 0x328) = lVar6 + -1;
                      *(undefined1 *)(lVar6 + -1) = 0xff;
                      iVar10 = *(int *)(this + 0x330) + 1;
                      *(int *)(this + 0x330) = iVar10;
                    }
                  }
                  else {
                    uVar12 = uVar12 << 8;
                  }
LAB_0010b290:
                  if (iVar10 != 0) goto LAB_0010b298;
                }
                prep_in_buffer(this);
                iVar10 = *(int *)(this + 0x330);
                if (iVar10 == 0) {
                  uVar20 = *(uint *)(this + 0x334);
                  *(uint *)(this + 0x334) = uVar20 ^ 1;
                  uVar20 = (-(uint)(uVar20 == 0) & 0x26) + 0xd9;
                }
                else {
LAB_0010b298:
                  pbVar5 = *(byte **)(this + 0x328);
                  iVar10 = iVar10 + -1;
                  pbVar8 = pbVar5 + 1;
                  *(byte **)(this + 0x328) = pbVar8;
                  uVar20 = (uint)*pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (uVar20 == 0xff) {
                    if (iVar10 == 0) {
                      prep_in_buffer(this);
                      iVar10 = *(int *)(this + 0x330);
                      if (iVar10 != 0) {
                        pbVar8 = *(byte **)(this + 0x328);
                        goto LAB_0010b2c7;
                      }
                      *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                    }
                    else {
LAB_0010b2c7:
                      *(byte **)(this + 0x328) = pbVar8 + 1;
                      bVar9 = *pbVar8;
                      *(int *)(this + 0x330) = iVar10 + -1;
                      if (bVar9 == 0) goto LAB_0010b247;
                      *(byte **)(this + 0x328) = pbVar8;
                      *pbVar8 = bVar9;
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                    }
                    lVar6 = *(long *)(this + 0x328);
                    *(long *)(this + 0x328) = lVar6 + -1;
                    *(undefined1 *)(lVar6 + -1) = 0xff;
                    *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                  }
                }
LAB_0010b247:
                iVar17 = *(int *)(this + 0x24bc);
                uVar12 = *(uint *)(this + 0x24c0) | uVar20 | uVar12;
              }
              else {
                pbVar5 = *(byte **)(this + 0x328);
                bVar9 = *pbVar5;
                if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                  pbVar8 = pbVar5 + 1;
                  iVar10 = iVar10 + -1;
                  *(byte **)(this + 0x328) = pbVar8;
                  bVar9 = *pbVar5;
                  *(int *)(this + 0x330) = iVar10;
                  if (bVar9 == 0xff) goto LAB_0010bb79;
                  uVar12 = (uint)bVar9 << 8;
                  goto LAB_0010b298;
                }
                *(int *)(this + 0x330) = iVar10 + -2;
                *(byte **)(this + 0x328) = pbVar5 + 2;
                uVar12 = (uint)bVar9 << 8 | bVar1 | uVar12;
              }
              *(int *)(this + 0x24bc) = iVar17 + 0x10;
              *(uint *)(this + 0x24c0) = uVar12 << (-(char)iVar17 & 0x1fU);
            }
          }
          else {
            if (uVar20 != 0) {
              iVar10 = *(int *)(this + 0x24bc);
              iVar16 = iVar10 - uVar20;
              *(int *)(this + 0x24bc) = iVar16;
              if (iVar16 < 1) {
                iVar17 = *(int *)(this + 0x330);
                uVar12 = uVar12 << ((byte)iVar10 & 0x1f);
                *(uint *)(this + 0x24c0) = uVar12;
                if (iVar17 < 2) {
                  if (iVar17 == 0) {
                    prep_in_buffer(this);
                    iVar17 = *(int *)(this + 0x330);
                    if (iVar17 != 0) goto LAB_0010b6e0;
                    uVar12 = *(uint *)(this + 0x334);
                    *(uint *)(this + 0x334) = uVar12 ^ 1;
                    uVar12 = (-(uint)(uVar12 == 0) & 0x2600) + 0xd900;
                  }
                  else {
LAB_0010b6e0:
                    pbVar5 = *(byte **)(this + 0x328);
                    iVar17 = iVar17 + -1;
                    pbVar8 = pbVar5 + 1;
                    *(byte **)(this + 0x328) = pbVar8;
                    bVar9 = *pbVar5;
                    *(int *)(this + 0x330) = iVar17;
                    uVar12 = (uint)bVar9;
                    if (uVar12 == 0xff) {
                      if (iVar17 == 0) {
                        prep_in_buffer(this);
                        iVar17 = *(int *)(this + 0x330);
                        if (iVar17 == 0) {
                          lVar6 = *(long *)(this + 0x328);
                          *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                          *(long *)(this + 0x328) = lVar6 + -1;
                          uVar12 = 0xff00;
                          *(undefined1 *)(lVar6 + -1) = 0xff;
                          iVar17 = *(int *)(this + 0x330) + 1;
                          *(int *)(this + 0x330) = iVar17;
                          goto LAB_0010b70e;
                        }
                        pbVar8 = *(byte **)(this + 0x328);
                      }
LAB_0010bc12:
                      iVar17 = iVar17 + -1;
                      *(byte **)(this + 0x328) = pbVar8 + 1;
                      bVar9 = *pbVar8;
                      uVar12 = 0xff00;
                      *(int *)(this + 0x330) = iVar17;
                      if (bVar9 != 0) {
                        *(byte **)(this + 0x328) = pbVar8;
                        *pbVar8 = bVar9;
                        lVar6 = *(long *)(this + 0x328);
                        *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                        *(long *)(this + 0x328) = lVar6 + -1;
                        *(undefined1 *)(lVar6 + -1) = 0xff;
                        iVar17 = *(int *)(this + 0x330) + 1;
                        *(int *)(this + 0x330) = iVar17;
                      }
                    }
                    else {
                      uVar12 = uVar12 << 8;
                    }
LAB_0010b70e:
                    if (iVar17 != 0) goto LAB_0010b716;
                  }
                  prep_in_buffer(this);
                  iVar17 = *(int *)(this + 0x330);
                  if (iVar17 == 0) {
                    uVar20 = *(uint *)(this + 0x334);
                    *(uint *)(this + 0x334) = uVar20 ^ 1;
                    uVar20 = (-(uint)(uVar20 == 0) & 0x26) + 0xd9;
                  }
                  else {
LAB_0010b716:
                    pbVar5 = *(byte **)(this + 0x328);
                    iVar17 = iVar17 + -1;
                    pbVar8 = pbVar5 + 1;
                    *(byte **)(this + 0x328) = pbVar8;
                    uVar20 = (uint)*pbVar5;
                    *(int *)(this + 0x330) = iVar17;
                    if (uVar20 == 0xff) {
                      if (iVar17 == 0) {
                        prep_in_buffer(this);
                        iVar17 = *(int *)(this + 0x330);
                        if (iVar17 != 0) {
                          pbVar8 = *(byte **)(this + 0x328);
                          goto LAB_0010b747;
                        }
                        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
                      }
                      else {
LAB_0010b747:
                        *(byte **)(this + 0x328) = pbVar8 + 1;
                        bVar9 = *pbVar8;
                        *(int *)(this + 0x330) = iVar17 + -1;
                        if (bVar9 == 0) goto LAB_0010b6ca;
                        *(byte **)(this + 0x328) = pbVar8;
                        *pbVar8 = bVar9;
                        *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                      }
                      lVar6 = *(long *)(this + 0x328);
                      *(long *)(this + 0x328) = lVar6 + -1;
                      *(undefined1 *)(lVar6 + -1) = 0xff;
                      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
                    }
                  }
LAB_0010b6ca:
                  iVar16 = *(int *)(this + 0x24bc);
                  uVar12 = uVar20 | uVar12 | *(uint *)(this + 0x24c0);
                }
                else {
                  pbVar5 = *(byte **)(this + 0x328);
                  bVar9 = *pbVar5;
                  if ((bVar9 == 0xff) || (bVar1 = pbVar5[1], bVar1 == 0xff)) {
                    pbVar8 = pbVar5 + 1;
                    iVar17 = iVar17 + -1;
                    *(byte **)(this + 0x328) = pbVar8;
                    bVar9 = *pbVar5;
                    *(int *)(this + 0x330) = iVar17;
                    if (bVar9 == 0xff) goto LAB_0010bc12;
                    uVar12 = (uint)bVar9 << 8;
                    goto LAB_0010b716;
                  }
                  *(int *)(this + 0x330) = iVar17 + -2;
                  *(byte **)(this + 0x328) = pbVar5 + 2;
                  uVar12 = bVar1 | uVar12 | (uint)bVar9 << 8;
                }
                *(int *)(this + 0x24bc) = iVar16 + 0x10;
                *(uint *)(this + 0x24c0) = uVar12 << (-(char)iVar16 & 0x1fU);
              }
              else {
                *(uint *)(this + 0x24c0) = uVar12 << (sbyte)uVar20;
              }
            }
            uVar22 = (int)uVar15 >> 0x10;
          }
LAB_0010a788:
          uVar12 = (int)uVar15 >> 4 & 0xf;
          uVar15 = uVar15 & 0xf;
          if (uVar15 != 0) goto LAB_0010a79b;
LAB_0010a8c5:
          if (uVar12 != 0xf) break;
          if (0x30 < iVar14) goto LAB_0010c00c;
          if (iVar14 < iVar2) {
            iVar10 = iVar2 - iVar14;
            piVar7 = (int *)(g_ZAG + (long)iVar14 * 4);
            if (0x10 < iVar10) {
              iVar10 = 0x10;
            }
            do {
              iVar16 = *piVar7;
              piVar7 = piVar7 + 1;
              psVar23[iVar16] = 0;
            } while (piVar7 != (int *)(g_ZAG + ((ulong)(iVar10 - 1) + (long)iVar14) * 4 + 4));
          }
          iVar14 = iVar14 + 0x10;
        } while (iVar14 != 0x40);
LAB_0010a8eb:
        if (iVar14 < iVar2) {
          piVar7 = (int *)(g_ZAG + (long)iVar14 * 4);
          do {
            iVar10 = *piVar7;
            piVar7 = piVar7 + 1;
            psVar23[iVar10] = 0;
          } while (piVar7 != (int *)(g_ZAG + ((ulong)(uint)(iVar2 - iVar14) + (long)iVar14) * 4));
        }
        *(int *)(this + lVar19 * 4 + 0x2508) = iVar14;
        lVar19 = lVar19 + 1;
        psVar23 = psVar23 + 0x40;
        iVar10 = *(int *)(this + 0x244);
      } while ((int)lVar19 < iVar10);
      if (this[0x24e4] == (jpeg_decoder)0x0) {
        lVar19 = 0;
        puVar13 = (uchar *)((long)(iVar10 * iVar21 * 0x40) + *(long *)(this + 0x2530));
        psVar23 = *(short **)(this + 0x2500);
        if (0 < iVar10) {
          do {
            lVar4 = lVar19 * 4;
            lVar19 = lVar19 + 1;
            idct(psVar23,puVar13,*(int *)(this + lVar4 + 0x2508));
            puVar13 = puVar13 + 0x40;
            psVar23 = psVar23 + 0x40;
          } while ((int)lVar19 < *(int *)(this + 0x244));
        }
      }
      else {
LAB_0010a92f:
        transform_mcu_expand(this,iVar21);
      }
    }
    *(int *)(this + 0x24c8) = *(int *)(this + 0x24c8) + -1;
    iVar21 = iVar21 + 1;
    if (*(int *)(this + 0x24c) <= iVar21) {
      return;
    }
  } while( true );
}



/* jpeg_decoder::decode(void const**, unsigned int*) */

undefined4 __thiscall jpeg_decoder::decode(jpeg_decoder *this,void **param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  jpeg_decoder *pjVar13;
  
  if ((*(int *)(this + 0x3548) != 0) || (this[0x354c] == (jpeg_decoder)0x0)) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0x27c) == 0) {
    return 1;
  }
  if (*(int *)(this + 0x280) == 0) {
    iVar4 = _setjmp((__jmp_buf_tag *)this);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    if (*(int *)(this + 0xe0) == 0) {
      decode_next_row(this);
    }
    else {
      load_next_row(this);
    }
    iVar4 = *(int *)(this + 0x240);
    if (*(int *)(this + 0x27c) <= iVar4) {
      iVar10 = *(int *)(this + 0x330);
      if (*(int *)(this + 0xe0) == 0) {
        *(undefined4 *)(this + 0x24bc) = 0;
        *(int *)(this + 0x24c0) = *(int *)(this + 0x24c0) << 0x10;
        if (iVar10 == 0) {
          prep_in_buffer(this);
          iVar10 = *(int *)(this + 0x330);
          if (iVar10 != 0) goto LAB_0010c319;
          uVar12 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar12 ^ 1;
          uVar12 = (-(uint)(uVar12 == 0) & 0x26) + 0xd9;
LAB_0010c49d:
          prep_in_buffer(this);
          iVar10 = *(int *)(this + 0x330);
          if (iVar10 != 0) {
            pbVar8 = *(byte **)(this + 0x328);
            goto LAB_0010c342;
          }
          uVar9 = *(uint *)(this + 0x334);
          *(uint *)(this + 0x334) = uVar9 ^ 1;
          uVar9 = (-(uint)(uVar9 == 0) & 0x26) + 0xd9;
        }
        else {
LAB_0010c319:
          iVar10 = iVar10 + -1;
          pbVar2 = *(byte **)(this + 0x328);
          pbVar8 = pbVar2 + 1;
          *(byte **)(this + 0x328) = pbVar8;
          uVar12 = (uint)*pbVar2;
          *(int *)(this + 0x330) = iVar10;
          if (iVar10 == 0) goto LAB_0010c49d;
LAB_0010c342:
          *(byte **)(this + 0x328) = pbVar8 + 1;
          uVar9 = (uint)*pbVar8;
          *(int *)(this + 0x330) = iVar10 + -1;
        }
        cVar3 = (char)*(int *)(this + 0x24bc);
        iVar4 = (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar9 | uVar12 << 8) << (-cVar3 & 0x1fU);
        if (*(int *)(this + 0x24bc) < 1) {
          *(int *)(this + 0x24c0) = iVar4 << (cVar3 + 0x10U & 0x1f);
          iVar4 = *(int *)(this + 0x330);
          if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int *)(this + 0x330);
            if (iVar4 != 0) goto LAB_0010c3ea;
            uVar12 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar12 ^ 1;
            uVar12 = (-(uint)(uVar12 == 0) & 0x26) + 0xd9;
LAB_0010c4f9:
            prep_in_buffer(this);
            iVar4 = *(int *)(this + 0x330);
            if (iVar4 != 0) {
              pbVar8 = *(byte **)(this + 0x328);
              goto LAB_0010c413;
            }
            uVar9 = *(uint *)(this + 0x334);
            *(uint *)(this + 0x334) = uVar9 ^ 1;
            uVar9 = (-(uint)(uVar9 == 0) & 0x26) + 0xd9;
          }
          else {
LAB_0010c3ea:
            iVar4 = iVar4 + -1;
            pbVar2 = *(byte **)(this + 0x328);
            pbVar8 = pbVar2 + 1;
            *(byte **)(this + 0x328) = pbVar8;
            uVar12 = (uint)*pbVar2;
            *(int *)(this + 0x330) = iVar4;
            if (iVar4 == 0) goto LAB_0010c4f9;
LAB_0010c413:
            *(byte **)(this + 0x328) = pbVar8 + 1;
            uVar9 = (uint)*pbVar8;
            *(int *)(this + 0x330) = iVar4 + -1;
          }
          iVar4 = *(int *)(this + 0x24bc);
          *(int *)(this + 0x24bc) = iVar4 + 0x10;
          *(uint *)(this + 0x24c0) =
               (*(uint *)(this + 0x24c0) & 0xffff0000 | uVar9 | uVar12 << 8) <<
               (-(char)iVar4 & 0x1fU);
        }
        else {
          *(int *)(this + 0x24c0) = iVar4 << 0x10;
        }
        process_markers(this);
        iVar4 = *(int *)(this + 0x240);
      }
      *(int *)(this + 0x3550) = *(int *)(this + 0x3550) - *(int *)(this + 0x330);
    }
    *(int *)(this + 0x280) = iVar4;
  }
  if (this[0x24e4] != (jpeg_decoder)0x0) {
    pjVar13 = this;
    expanded_convert(this);
    *param_1 = *(void **)(pjVar13 + 0x3538);
    goto switchD_0010c117_default;
  }
  switch(*(undefined4 *)(this + 400)) {
  case 0:
    uVar12 = *(uint *)(this + 0x24d0);
    puVar1 = *(undefined4 **)(this + 0x3538);
    puVar5 = (undefined4 *)
             ((long)((*(int *)(this + 0x240) - *(int *)(this + 0x280)) * 8) +
             *(long *)(this + 0x2530));
    if (0 < (int)uVar12) {
      puVar6 = puVar5;
      puVar11 = puVar1;
      do {
        puVar7 = puVar6 + 0x10;
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar6 = puVar7;
        puVar11 = puVar11 + 2;
      } while (puVar7 != puVar5 + (ulong)uVar12 * 0x10);
    }
    *param_1 = puVar1;
    break;
  case 1:
    pjVar13 = this;
    H1V1Convert(this);
    *param_1 = *(void **)(pjVar13 + 0x3538);
    break;
  case 2:
    H2V1Convert(this);
    *param_1 = *(void **)(this + 0x3538);
    break;
  case 3:
    if (((byte)this[0x280] & 1) == 0) {
      H1V2Convert(this);
      *param_1 = *(void **)(this + 0x3538);
      break;
    }
    goto LAB_0010c1ca;
  case 4:
    if (((byte)this[0x280] & 1) == 0) {
      H2V2Convert(this);
      *param_1 = *(void **)(this + 0x3538);
      break;
    }
LAB_0010c1ca:
    *param_1 = *(void **)(this + 0x3540);
  }
switchD_0010c117_default:
  iVar10 = _LC15._4_4_;
  iVar4 = (int)_LC15;
  *param_2 = *(uint *)(this + 0x284);
  *(ulong *)(this + 0x27c) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x27c) >> 0x20) + iVar10,
                (int)*(undefined8 *)(this + 0x27c) + iVar4);
  return 0;
}



/* jpgdDecompress(jpeg_decoder*) */

void * jpgdDecompress(jpeg_decoder *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  long in_FS_OFFSET;
  void *local_60;
  uint local_4c;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (jpeg_decoder *)0x0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    iVar3 = *(int *)(param_1 + 0xd4);
    iVar4 = jpeg_decoder::begin_decoding(param_1);
    if (iVar4 == 0) {
      local_60 = malloc((long)(iVar2 * 4 * iVar3));
      if (local_60 != (void *)0x0) {
        if (0 < iVar3) {
          lVar8 = (long)(iVar2 * 4);
          puVar10 = (undefined2 *)((long)local_60 + lVar8);
          iVar4 = 0;
          do {
            while( true ) {
              iVar5 = jpeg_decoder::decode(param_1,&local_48,&local_4c);
              if (iVar5 != 0) {
                free(local_60);
                goto LAB_0010c712;
              }
              puVar7 = puVar10 + (long)iVar2 * -2;
              if (*(int *)(param_1 + 0x194) == 3) break;
              if ((*(int *)(param_1 + 0x194) == 1) && (puVar9 = local_48, 0 < iVar2)) {
                do {
                  uVar1 = *puVar9;
                  puVar6 = puVar7 + 2;
                  *(undefined1 *)((long)puVar7 + 3) = 0xff;
                  puVar9 = puVar9 + 1;
                  *(undefined1 *)(puVar7 + 1) = uVar1;
                  *puVar7 = CONCAT11(uVar1,uVar1);
                  puVar7 = puVar6;
                } while (puVar6 != puVar10);
              }
LAB_0010c621:
              iVar4 = iVar4 + 1;
              puVar10 = (undefined2 *)((long)puVar10 + lVar8);
              if (iVar3 == iVar4) goto LAB_0010c6a0;
            }
            puVar9 = local_48;
            if (iVar2 < 1) goto LAB_0010c621;
            do {
              puVar6 = puVar7 + 2;
              *(undefined1 *)puVar7 = puVar9[2];
              *(undefined1 *)((long)puVar7 + 1) = puVar9[1];
              uVar1 = *puVar9;
              *(undefined1 *)((long)puVar7 + 3) = 0xff;
              *(undefined1 *)(puVar7 + 1) = uVar1;
              puVar7 = puVar6;
              puVar9 = puVar9 + 4;
            } while (puVar6 != puVar10);
            iVar4 = iVar4 + 1;
            puVar10 = (undefined2 *)((long)puVar10 + lVar8);
          } while (iVar3 != iVar4);
        }
        goto LAB_0010c6a0;
      }
    }
  }
LAB_0010c712:
  local_60 = (void *)0x0;
LAB_0010c6a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}



/* jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */

void __thiscall jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this)

{
  return;
}



/* jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */

void __thiscall jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this)

{
  operator_delete(this,0x18);
  return;
}



/* jpeg_decoder::get_bits_no_markers(int) */

uint __thiscall jpeg_decoder::get_bits_no_markers(jpeg_decoder *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(this + 0x24c0);
  uVar10 = uVar5 >> (0x20 - (byte)param_1 & 0x1f);
  iVar7 = *(int *)(this + 0x24bc);
  iVar8 = iVar7 - param_1;
  *(int *)(this + 0x24bc) = iVar8;
  if (0 < iVar8) {
    *(uint *)(this + 0x24c0) = uVar5 << ((byte)param_1 & 0x1f);
    return uVar10;
  }
  uVar5 = uVar5 << ((byte)iVar7 & 0x1f);
  iVar7 = *(int *)(this + 0x330);
  *(uint *)(this + 0x24c0) = uVar5;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      prep_in_buffer(this);
      iVar7 = *(int *)(this + 0x330);
      if (iVar7 != 0) goto LAB_0010c8a7;
      uVar5 = *(uint *)(this + 0x334);
      *(uint *)(this + 0x334) = uVar5 ^ 1;
      uVar5 = (-(uint)(uVar5 == 0) & 0x2600) + 0xd900;
    }
    else {
LAB_0010c8a7:
      pbVar3 = *(byte **)(this + 0x328);
      iVar7 = iVar7 + -1;
      pbVar6 = pbVar3 + 1;
      *(byte **)(this + 0x328) = pbVar6;
      bVar1 = *pbVar3;
      *(int *)(this + 0x330) = iVar7;
      if (bVar1 == 0xff) {
        if (iVar7 == 0) {
          prep_in_buffer(this);
          iVar7 = *(int *)(this + 0x330);
          if (iVar7 == 0) {
            lVar4 = *(long *)(this + 0x328);
            *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
            uVar5 = 0xff00;
            *(long *)(this + 0x328) = lVar4 + -1;
            *(undefined1 *)(lVar4 + -1) = 0xff;
            iVar7 = *(int *)(this + 0x330) + 1;
            *(int *)(this + 0x330) = iVar7;
            goto LAB_0010c950;
          }
          pbVar6 = *(byte **)(this + 0x328);
        }
LAB_0010c8f8:
        iVar7 = iVar7 + -1;
        uVar5 = 0xff00;
        *(byte **)(this + 0x328) = pbVar6 + 1;
        bVar1 = *pbVar6;
        *(int *)(this + 0x330) = iVar7;
        if (bVar1 != 0) {
          *(byte **)(this + 0x328) = pbVar6;
          *pbVar6 = bVar1;
          lVar4 = *(long *)(this + 0x328);
          *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
          *(long *)(this + 0x328) = lVar4 + -1;
          *(undefined1 *)(lVar4 + -1) = 0xff;
          iVar7 = *(int *)(this + 0x330) + 1;
          *(int *)(this + 0x330) = iVar7;
        }
      }
      else {
        uVar5 = (uint)bVar1 << 8;
      }
LAB_0010c950:
      if (iVar7 != 0) goto LAB_0010c849;
    }
    prep_in_buffer(this);
    iVar7 = *(int *)(this + 0x330);
    if (iVar7 != 0) goto LAB_0010c849;
    uVar9 = *(uint *)(this + 0x334);
    *(uint *)(this + 0x334) = uVar9 ^ 1;
    uVar9 = (-(uint)(uVar9 == 0) & 0x26) + 0xd9;
  }
  else {
    pbVar3 = *(byte **)(this + 0x328);
    bVar1 = *pbVar3;
    if ((bVar1 != 0xff) && (bVar2 = pbVar3[1], bVar2 != 0xff)) {
      *(int *)(this + 0x330) = iVar7 + -2;
      uVar5 = (uint)bVar1 << 8 | bVar2 | uVar5;
      *(byte **)(this + 0x328) = pbVar3 + 2;
      goto LAB_0010c7fc;
    }
    pbVar6 = pbVar3 + 1;
    iVar7 = iVar7 + -1;
    *(byte **)(this + 0x328) = pbVar6;
    bVar1 = *pbVar3;
    *(int *)(this + 0x330) = iVar7;
    if (bVar1 == 0xff) goto LAB_0010c8f8;
    uVar5 = (uint)bVar1 << 8;
LAB_0010c849:
    pbVar3 = *(byte **)(this + 0x328);
    iVar7 = iVar7 + -1;
    pbVar6 = pbVar3 + 1;
    *(byte **)(this + 0x328) = pbVar6;
    bVar1 = *pbVar3;
    uVar9 = (uint)bVar1;
    *(int *)(this + 0x330) = iVar7;
    if (bVar1 == 0xff) {
      if (iVar7 == 0) {
        prep_in_buffer(this);
        iVar7 = *(int *)(this + 0x330);
        if (iVar7 != 0) {
          pbVar6 = *(byte **)(this + 0x328);
          goto LAB_0010c9d8;
        }
        *(uint *)(this + 0x334) = *(uint *)(this + 0x334) ^ 1;
      }
      else {
LAB_0010c9d8:
        *(byte **)(this + 0x328) = pbVar6 + 1;
        bVar1 = *pbVar6;
        *(int *)(this + 0x330) = iVar7 + -1;
        if (bVar1 == 0) goto LAB_0010c873;
        *(byte **)(this + 0x328) = pbVar6;
        *pbVar6 = bVar1;
        *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
      }
      lVar4 = *(long *)(this + 0x328);
      *(long *)(this + 0x328) = lVar4 + -1;
      *(undefined1 *)(lVar4 + -1) = 0xff;
      *(int *)(this + 0x330) = *(int *)(this + 0x330) + 1;
    }
  }
LAB_0010c873:
  iVar8 = *(int *)(this + 0x24bc);
  uVar5 = uVar9 | uVar5 | *(uint *)(this + 0x24c0);
LAB_0010c7fc:
  *(int *)(this + 0x24bc) = iVar8 + 0x10;
  *(uint *)(this + 0x24c0) = uVar5 << (-(char)iVar8 & 0x1fU);
  return uVar10;
}



/* Col<3>::idct(unsigned char*, int const*) */

void Col<3>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar2 = param_2[0x10];
  iVar7 = *param_2 * 0x2000;
  iVar6 = iVar2 * 0x1151 + iVar7;
  iVar1 = iVar2 * 0x29cf + iVar7;
  iVar9 = iVar7 + iVar2 * -0x29cf;
  iVar3 = param_2[8];
  iVar7 = iVar7 + iVar2 * -0x1151;
  uVar8 = iVar1 + 0x2020000 + iVar3 * 0x2c63 >> 0x12;
  uVar5 = (int)~uVar8 >> 0x1f;
  if (uVar8 < 0x100) {
    uVar5 = uVar8;
  }
  uVar8 = iVar1 + iVar3 * -0x2c63 + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar5;
  if (0xff < uVar8) {
    uVar8 = (int)~uVar8 >> 0x1f;
  }
  uVar10 = iVar6 + 0x2020000 + iVar3 * 0x25a1 >> 0x12;
  param_1[0x38] = (uchar)uVar8;
  uVar5 = (int)~uVar10 >> 0x1f;
  if (uVar10 < 0x100) {
    uVar5 = uVar10;
  }
  param_1[8] = (uchar)uVar5;
  uVar5 = iVar6 + iVar3 * -0x25a1 + 0x2020000 >> 0x12;
  if (0xff < uVar5) {
    uVar5 = (int)~uVar5 >> 0x1f;
  }
  uVar8 = iVar7 + 0x2020000 + iVar3 * 0x1925 >> 0x12;
  param_1[0x30] = (uchar)uVar5;
  uVar5 = (int)~uVar8 >> 0x1f;
  if (uVar8 < 0x100) {
    uVar5 = uVar8;
  }
  uVar8 = iVar7 + iVar3 * -0x1925 + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar5;
  uVar5 = (int)~uVar8 >> 0x1f;
  if (uVar8 < 0x100) {
    uVar5 = uVar8;
  }
  iVar6 = iVar9 + 0x2020000 + iVar3 * 0x8d4;
  uVar8 = iVar6 >> 0x12;
  param_1[0x28] = (uchar)uVar5;
  uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  if (uVar8 < 0x100) {
    uVar4 = (uchar)uVar8;
  }
  param_1[0x18] = uVar4;
  iVar6 = iVar9 + iVar3 * -0x8d4 + 0x2020000;
  uVar5 = iVar6 >> 0x12;
  uVar4 = (uchar)uVar5;
  if (0xff < uVar5) {
    uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar4;
  return;
}



/* Col<4>::idct(unsigned char*, int const*) */

void Col<4>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  iVar2 = param_2[0x10];
  iVar7 = *param_2 * 0x2000;
  iVar5 = iVar2 * 0x1151 + iVar7;
  iVar1 = iVar2 * 0x29cf + iVar7;
  iVar11 = iVar7 + iVar2 * -0x29cf;
  iVar7 = iVar7 + iVar2 * -0x1151;
  iVar3 = param_2[0x18];
  iVar8 = param_2[8];
  iVar10 = (iVar3 + iVar8) * 0x25a1;
  iVar13 = iVar3 * -0x3ec5 + iVar10;
  iVar10 = iVar8 * -0xc7c + iVar10;
  iVar2 = iVar8 * -0x1ccd + iVar13;
  iVar8 = iVar8 * 0x133e + iVar10;
  iVar10 = iVar3 * -0x5203 + iVar10;
  uVar9 = iVar1 + 0x2020000 + iVar8 >> 0x12;
  iVar13 = iVar3 * 0x1051 + iVar13;
  uVar6 = (int)~uVar9 >> 0x1f;
  if (uVar9 < 0x100) {
    uVar6 = uVar9;
  }
  uVar9 = (iVar1 - iVar8) + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar6;
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar12 = iVar5 + 0x2020000 + iVar13 >> 0x12;
  param_1[0x38] = (uchar)uVar9;
  uVar6 = (int)~uVar12 >> 0x1f;
  if (uVar12 < 0x100) {
    uVar6 = uVar12;
  }
  uVar9 = (iVar5 - iVar13) + 0x2020000 >> 0x12;
  param_1[8] = (uchar)uVar6;
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar12 = iVar7 + 0x2020000 + iVar10 >> 0x12;
  param_1[0x30] = (uchar)uVar9;
  uVar6 = (int)~uVar12 >> 0x1f;
  if (uVar12 < 0x100) {
    uVar6 = uVar12;
  }
  uVar9 = (iVar7 - iVar10) + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar6;
  uVar6 = (int)~uVar9 >> 0x1f;
  if (uVar9 < 0x100) {
    uVar6 = uVar9;
  }
  iVar5 = iVar11 + 0x2020000 + iVar2;
  uVar9 = iVar5 >> 0x12;
  param_1[0x28] = (uchar)uVar6;
  uVar4 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
  if (uVar9 < 0x100) {
    uVar4 = (uchar)uVar9;
  }
  param_1[0x18] = uVar4;
  iVar5 = (iVar11 - iVar2) + 0x2020000;
  uVar6 = iVar5 >> 0x12;
  uVar4 = (uchar)uVar6;
  if (0xff < uVar6) {
    uVar4 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar4;
  return;
}



/* Col<5>::idct(unsigned char*, int const*) */

void Col<5>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar2 = param_2[0x10];
  iVar5 = (*param_2 + param_2[0x20]) * 0x2000;
  iVar8 = (*param_2 - param_2[0x20]) * 0x2000;
  iVar6 = iVar2 * 0x1151 + iVar8;
  iVar8 = iVar8 + iVar2 * -0x1151;
  iVar1 = iVar2 * 0x29cf + iVar5;
  iVar5 = iVar5 + iVar2 * -0x29cf;
  iVar2 = param_2[8];
  iVar3 = param_2[0x18];
  iVar12 = (iVar3 + iVar2) * 0x25a1;
  iVar10 = iVar2 * -0xc7c + iVar12;
  iVar9 = iVar2 * 0x133e + iVar10;
  iVar12 = iVar3 * -0x3ec5 + iVar12;
  iVar2 = iVar2 * -0x1ccd + iVar12;
  uVar11 = iVar1 + 0x2020000 + iVar9 >> 0x12;
  iVar10 = iVar3 * -0x5203 + iVar10;
  iVar12 = iVar3 * 0x1051 + iVar12;
  uVar7 = (int)~uVar11 >> 0x1f;
  if (uVar11 < 0x100) {
    uVar7 = uVar11;
  }
  uVar11 = (iVar1 - iVar9) + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar7;
  if (0xff < uVar11) {
    uVar11 = (int)~uVar11 >> 0x1f;
  }
  uVar13 = iVar6 + 0x2020000 + iVar12 >> 0x12;
  param_1[0x38] = (uchar)uVar11;
  uVar7 = (int)~uVar13 >> 0x1f;
  if (uVar13 < 0x100) {
    uVar7 = uVar13;
  }
  uVar11 = (iVar6 - iVar12) + 0x2020000 >> 0x12;
  param_1[8] = (uchar)uVar7;
  if (0xff < uVar11) {
    uVar11 = (int)~uVar11 >> 0x1f;
  }
  uVar13 = iVar8 + 0x2020000 + iVar10 >> 0x12;
  param_1[0x30] = (uchar)uVar11;
  uVar7 = (int)~uVar13 >> 0x1f;
  if (uVar13 < 0x100) {
    uVar7 = uVar13;
  }
  uVar11 = (iVar8 - iVar10) + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar7;
  uVar7 = (int)~uVar11 >> 0x1f;
  if (uVar11 < 0x100) {
    uVar7 = uVar11;
  }
  iVar6 = iVar5 + 0x2020000 + iVar2;
  uVar11 = iVar6 >> 0x12;
  param_1[0x28] = (uchar)uVar7;
  uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  if (uVar11 < 0x100) {
    uVar4 = (uchar)uVar11;
  }
  param_1[0x18] = uVar4;
  iVar6 = (iVar5 - iVar2) + 0x2020000;
  uVar7 = iVar6 >> 0x12;
  uVar4 = (uchar)uVar7;
  if (0xff < uVar7) {
    uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar4;
  return;
}



/* Col<6>::idct(unsigned char*, int const*) */

void Col<6>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  iVar2 = param_2[0x10];
  iVar7 = (*param_2 + param_2[0x20]) * 0x2000;
  iVar10 = (*param_2 - param_2[0x20]) * 0x2000;
  iVar8 = iVar2 * 0x1151 + iVar10;
  iVar10 = iVar10 + iVar2 * -0x1151;
  iVar3 = param_2[8];
  iVar1 = iVar2 * 0x29cf + iVar7;
  iVar7 = iVar7 + iVar2 * -0x29cf;
  iVar4 = param_2[0x28];
  iVar5 = param_2[0x18];
  iVar13 = (iVar5 + iVar4 + iVar3) * 0x25a1;
  iVar11 = (iVar4 + iVar3) * -0xc7c + iVar13;
  iVar16 = (iVar4 + iVar5) * -0x5203;
  iVar14 = iVar3 * 0x133e + iVar11;
  iVar13 = iVar5 * -0x3ec5 + iVar13;
  iVar2 = iVar3 * -0x1ccd + iVar13;
  uVar12 = iVar1 + 0x2020000 + iVar14 >> 0x12;
  iVar11 = iVar4 * 0x41b3 + iVar16 + iVar11;
  iVar13 = iVar5 * 0x6254 + iVar16 + iVar13;
  uVar9 = (int)~uVar12 >> 0x1f;
  if (uVar12 < 0x100) {
    uVar9 = uVar12;
  }
  uVar12 = (iVar1 - iVar14) + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar9;
  if (0xff < uVar12) {
    uVar12 = (int)~uVar12 >> 0x1f;
  }
  uVar15 = iVar8 + 0x2020000 + iVar13 >> 0x12;
  param_1[0x38] = (uchar)uVar12;
  uVar9 = (int)~uVar15 >> 0x1f;
  if (uVar15 < 0x100) {
    uVar9 = uVar15;
  }
  uVar12 = (iVar8 - iVar13) + 0x2020000 >> 0x12;
  param_1[8] = (uchar)uVar9;
  if (0xff < uVar12) {
    uVar12 = (int)~uVar12 >> 0x1f;
  }
  uVar15 = iVar10 + 0x2020000 + iVar11 >> 0x12;
  param_1[0x30] = (uchar)uVar12;
  uVar9 = (int)~uVar15 >> 0x1f;
  if (uVar15 < 0x100) {
    uVar9 = uVar15;
  }
  uVar12 = (iVar10 - iVar11) + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar9;
  uVar9 = (int)~uVar12 >> 0x1f;
  if (uVar12 < 0x100) {
    uVar9 = uVar12;
  }
  iVar8 = iVar7 + 0x2020000 + iVar2;
  uVar12 = iVar8 >> 0x12;
  param_1[0x28] = (uchar)uVar9;
  uVar6 = (char)~(byte)(iVar8 >> 0x1f) >> 7;
  if (uVar12 < 0x100) {
    uVar6 = (uchar)uVar12;
  }
  param_1[0x18] = uVar6;
  iVar8 = (iVar7 - iVar2) + 0x2020000;
  uVar9 = iVar8 >> 0x12;
  uVar6 = (uchar)uVar9;
  if (0xff < uVar9) {
    uVar6 = (char)~(byte)(iVar8 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar6;
  return;
}



/* Col<7>::idct(unsigned char*, int const*) */

void Col<7>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar1 = param_2[8];
  iVar4 = (param_2[0x10] + param_2[0x30]) * 0x1151;
  iVar11 = param_2[0x30] * -0x3b21 + iVar4;
  iVar4 = param_2[0x10] * 0x187e + iVar4;
  iVar5 = (*param_2 + param_2[0x20]) * 0x2000;
  iVar8 = (*param_2 - param_2[0x20]) * 0x2000;
  iVar6 = iVar4 + iVar5;
  iVar5 = iVar5 - iVar4;
  iVar4 = iVar11 + iVar8;
  iVar8 = iVar8 - iVar11;
  iVar11 = param_2[0x28];
  iVar2 = param_2[0x18];
  iVar12 = (iVar2 + iVar11 + iVar1) * 0x25a1;
  iVar15 = (iVar11 + iVar2) * -0x5203;
  iVar9 = (iVar11 + iVar1) * -0xc7c + iVar12;
  iVar13 = iVar1 * 0x133e + iVar9;
  iVar12 = iVar2 * -0x3ec5 + iVar12;
  iVar1 = iVar1 * -0x1ccd + iVar12;
  uVar10 = iVar6 + 0x2020000 + iVar13 >> 0x12;
  iVar9 = iVar11 * 0x41b3 + iVar15 + iVar9;
  iVar12 = iVar2 * 0x6254 + iVar15 + iVar12;
  uVar7 = (int)~uVar10 >> 0x1f;
  if (uVar10 < 0x100) {
    uVar7 = uVar10;
  }
  uVar10 = (iVar6 - iVar13) + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar7;
  if (0xff < uVar10) {
    uVar10 = (int)~uVar10 >> 0x1f;
  }
  uVar14 = iVar4 + 0x2020000 + iVar12 >> 0x12;
  param_1[0x38] = (uchar)uVar10;
  uVar7 = (int)~uVar14 >> 0x1f;
  if (uVar14 < 0x100) {
    uVar7 = uVar14;
  }
  uVar10 = (iVar4 - iVar12) + 0x2020000 >> 0x12;
  param_1[8] = (uchar)uVar7;
  if (0xff < uVar10) {
    uVar10 = (int)~uVar10 >> 0x1f;
  }
  uVar14 = iVar8 + 0x2020000 + iVar9 >> 0x12;
  param_1[0x30] = (uchar)uVar10;
  uVar7 = (int)~uVar14 >> 0x1f;
  if (uVar14 < 0x100) {
    uVar7 = uVar14;
  }
  uVar10 = (iVar8 - iVar9) + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar7;
  uVar7 = (int)~uVar10 >> 0x1f;
  if (uVar10 < 0x100) {
    uVar7 = uVar10;
  }
  iVar6 = iVar5 + 0x2020000 + iVar1;
  uVar10 = iVar6 >> 0x12;
  param_1[0x28] = (uchar)uVar7;
  uVar3 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  if (uVar10 < 0x100) {
    uVar3 = (uchar)uVar10;
  }
  param_1[0x18] = uVar3;
  iVar6 = (iVar5 - iVar1) + 0x2020000;
  uVar7 = iVar6 >> 0x12;
  uVar3 = (uchar)uVar7;
  if (0xff < uVar7) {
    uVar3 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar3;
  return;
}



/* Col<8>::idct(unsigned char*, int const*) */

void Col<8>::idct(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar2 = param_2[0x18];
  iVar5 = (param_2[0x10] + param_2[0x30]) * 0x1151;
  iVar11 = param_2[0x30] * -0x3b21 + iVar5;
  iVar5 = param_2[0x10] * 0x187e + iVar5;
  iVar6 = (*param_2 + param_2[0x20]) * 0x2000;
  iVar8 = (*param_2 - param_2[0x20]) * 0x2000;
  iVar7 = iVar5 + iVar6;
  iVar1 = iVar11 + iVar8;
  iVar6 = iVar6 - iVar5;
  iVar8 = iVar8 - iVar11;
  iVar5 = param_2[0x28];
  iVar11 = param_2[0x38];
  iVar12 = param_2[8];
  iVar14 = (iVar11 + iVar12) * -0x1ccd;
  iVar16 = (iVar11 + iVar2 + iVar5 + iVar12) * 0x25a1;
  iVar15 = (iVar5 + iVar2) * -0x5203;
  iVar9 = (iVar5 + iVar12) * -0xc7c + iVar16;
  iVar12 = iVar12 * 0x300b + iVar14 + iVar9;
  iVar16 = (iVar11 + iVar2) * -0x3ec5 + iVar16;
  iVar11 = iVar11 * 0x98e + iVar14 + iVar16;
  iVar16 = iVar2 * 0x6254 + iVar15 + iVar16;
  uVar10 = iVar7 + 0x2020000 + iVar12 >> 0x12;
  iVar9 = iVar5 * 0x41b3 + iVar15 + iVar9;
  uVar3 = (int)~uVar10 >> 0x1f;
  if (uVar10 < 0x100) {
    uVar3 = uVar10;
  }
  uVar10 = (iVar7 - iVar12) + 0x2020000 >> 0x12;
  *param_1 = (uchar)uVar3;
  if (0xff < uVar10) {
    uVar10 = (int)~uVar10 >> 0x1f;
  }
  uVar13 = iVar1 + 0x2020000 + iVar16 >> 0x12;
  param_1[0x38] = (uchar)uVar10;
  uVar3 = (int)~uVar13 >> 0x1f;
  if (uVar13 < 0x100) {
    uVar3 = uVar13;
  }
  uVar10 = (iVar1 - iVar16) + 0x2020000 >> 0x12;
  param_1[8] = (uchar)uVar3;
  if (0xff < uVar10) {
    uVar10 = (int)~uVar10 >> 0x1f;
  }
  uVar13 = iVar8 + 0x2020000 + iVar9 >> 0x12;
  param_1[0x30] = (uchar)uVar10;
  uVar3 = (int)~uVar13 >> 0x1f;
  if (uVar13 < 0x100) {
    uVar3 = uVar13;
  }
  uVar10 = (iVar8 - iVar9) + 0x2020000 >> 0x12;
  param_1[0x10] = (uchar)uVar3;
  if (0xff < uVar10) {
    uVar10 = (int)~uVar10 >> 0x1f;
  }
  uVar13 = iVar6 + 0x2020000 + iVar11 >> 0x12;
  param_1[0x28] = (uchar)uVar10;
  uVar3 = (int)~uVar13 >> 0x1f;
  if (uVar13 < 0x100) {
    uVar3 = uVar13;
  }
  iVar7 = (iVar6 - iVar11) + 0x2020000;
  uVar10 = iVar7 >> 0x12;
  param_1[0x18] = (uchar)uVar3;
  uVar4 = (uchar)uVar10;
  if (0xff < uVar10) {
    uVar4 = (char)~(byte)(iVar7 >> 0x1f) >> 7;
  }
  param_1[0x20] = uVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::P_Q<5, 4>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<5,4>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  sVar1 = param_3[3];
  sVar2 = param_3[0x20];
  sVar3 = param_3[0x19];
  sVar4 = param_3[0x1b];
  sVar5 = param_3[0x10];
  iVar15 = (int)param_3[8];
  sVar6 = param_3[0x11];
  iVar14 = (int)param_3[0x18];
  sVar7 = param_3[0x13];
  sVar8 = param_3[0x23];
  sVar9 = param_3[1];
  iVar13 = param_3[9] * 0x1aa + 0x200 + param_3[0xb] * 0x32a >> 10;
  iVar16 = param_3[9] * 0x17 + 0x200 + param_3[0xb] * -99 >> 10;
  sVar10 = param_3[0x21];
  iVar12 = sVar3 * 0x1aa + 0x200 + sVar4 * 0x32a >> 10;
  *(int *)param_1 = (int)*param_3;
  iVar11 = sVar3 * 0x17 + 0x200 + sVar4 * -99 >> 10;
  *(int *)(param_1 + 4) = iVar15 * 0x1aa + 0x200 + iVar14 * 0x32a >> 10;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(int *)(param_1 + 8) = (int)sVar2;
  *(int *)(param_1 + 0xc) = iVar15 * 0x17 + 0x200 + iVar14 * -99 >> 10;
  *(int *)(param_1 + 0x10) = sVar9 * 0x1aa + 0x200 + sVar1 * 0x32a >> 10;
  *(int *)(param_1 + 0x14) = iVar13 * 0x1aa + 0x200 + iVar12 * 0x32a >> 10;
  *(int *)(param_1 + 0x18) = sVar10 * 0x1aa + 0x200 + sVar8 * 0x32a >> 10;
  *(int *)(param_1 + 0x1c) = iVar13 * 0x17 + 0x200 + iVar12 * -99 >> 10;
  iVar17 = iVar16 * 0x1aa + iVar11 * 0x32a + _UNK_00112c74;
  iVar18 = sVar10 * 0x17 + sVar8 * -99 + _UNK_00112c78;
  iVar19 = iVar16 * 0x17 + iVar11 * -99 + _UNK_00112c7c;
  *(int *)(param_1 + 0x30) = sVar9 * 0x17 + sVar1 * -99 + __LC14 >> 10;
  *(int *)(param_1 + 0x34) = iVar17 >> 10;
  *(int *)(param_1 + 0x38) = iVar18 >> 10;
  *(int *)(param_1 + 0x3c) = iVar19 >> 10;
  *(int *)param_2 = iVar15 * 0x3a0 + 0x200 + iVar14 * -0x145 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 4) = (int)sVar5;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(int *)(param_2 + 8) = iVar15 * -0x4b + 0x200 + iVar14 * 0x20e >> 10;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)(param_2 + 0x10) = iVar13 * 0x3a0 + 0x200 + iVar12 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = sVar6 * 0x1aa + 0x200 + sVar7 * 0x32a >> 10;
  *(int *)(param_2 + 0x18) = iVar13 * -0x4b + 0x200 + iVar12 * 0x20e >> 10;
  *(int *)(param_2 + 0x30) = iVar16 * 0x3a0 + 0x200 + iVar11 * -0x145 >> 10;
  *(int *)(param_2 + 0x34) = sVar6 * 0x17 + 0x200 + sVar7 * -99 >> 10;
  *(int *)(param_2 + 0x38) = iVar16 * -0x4b + 0x200 + iVar11 * 0x20e >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<5, 4>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<5,4>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[0x13];
  sVar4 = param_3[0x23];
  sVar5 = param_3[0x21];
  iVar12 = (int)param_3[10];
  sVar6 = param_3[0x11];
  iVar10 = param_3[9] * 0x3a0 + 0x200 + param_3[0xb] * -0x145 >> 10;
  iVar14 = param_3[9] * -0x4b + 0x200 + param_3[0xb] * 0x20e >> 10;
  sVar7 = param_3[0x12];
  iVar9 = param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1b] * -0x145 >> 10;
  iVar11 = (int)param_3[0x1a];
  iVar13 = param_3[0x19] * -0x4b + 0x200 + param_3[0x1b] * 0x20e >> 10;
  sVar8 = param_3[0x22];
  iVar15 = sVar2 * -0x145 + sVar1 * 0x3a0 + __LC14;
  iVar16 = iVar10 * 0x1aa + iVar9 * 0x32a + _UNK_00112c74;
  iVar17 = sVar5 * 0x3a0 + sVar4 * -0x145 + _UNK_00112c78;
  iVar18 = iVar10 * 0x17 + iVar9 * -99 + _UNK_00112c7c;
  *(int *)(param_1 + 0x10) = (int)param_3[2];
  *(int *)param_1 = iVar15 >> 10;
  *(int *)(param_1 + 4) = iVar16 >> 10;
  *(int *)(param_1 + 8) = iVar17 >> 10;
  *(int *)(param_1 + 0xc) = iVar18 >> 10;
  *(int *)(param_1 + 0x18) = (int)sVar8;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(int *)(param_1 + 0x14) = iVar12 * 0x1aa + 0x200 + iVar11 * 0x32a >> 10;
  *(int *)(param_1 + 0x1c) = iVar12 * 0x17 + 0x200 + iVar11 * -99 >> 10;
  *(int *)(param_1 + 0x20) = sVar1 * -0x4b + 0x200 + sVar2 * 0x20e >> 10;
  *(int *)(param_1 + 0x24) = iVar14 * 0x1aa + 0x200 + iVar13 * 0x32a >> 10;
  *(int *)(param_1 + 0x28) = sVar5 * -0x4b + 0x200 + sVar4 * 0x20e >> 10;
  *(int *)(param_1 + 0x2c) = iVar14 * 0x17 + 0x200 + iVar13 * -99 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)param_2 = iVar10 * 0x3a0 + 0x200 + iVar9 * -0x145 >> 10;
  *(int *)(param_2 + 4) = sVar6 * 0x3a0 + 0x200 + sVar3 * -0x145 >> 10;
  *(int *)(param_2 + 8) = iVar10 * -0x4b + 0x200 + iVar9 * 0x20e >> 10;
  *(int *)(param_2 + 0x10) = iVar12 * 0x3a0 + 0x200 + iVar11 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar7;
  *(int *)(param_2 + 0x18) = iVar12 * -0x4b + 0x200 + iVar11 * 0x20e >> 10;
  *(int *)(param_2 + 0x20) = iVar14 * 0x3a0 + 0x200 + iVar13 * -0x145 >> 10;
  *(int *)(param_2 + 0x24) = sVar6 * -0x4b + 0x200 + sVar3 * 0x20e >> 10;
  *(int *)(param_2 + 0x28) = iVar14 * -0x4b + 0x200 + iVar13 * 0x20e >> 10;
  return;
}



/* DCT_Upsample::P_Q<5, 5>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<5,5>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  sVar1 = param_3[0x20];
  sVar2 = param_3[1];
  sVar3 = param_3[0x10];
  iVar18 = (int)param_3[8];
  iVar17 = (int)param_3[0x18];
  sVar4 = param_3[3];
  sVar5 = param_3[0x21];
  sVar6 = param_3[0x13];
  sVar7 = param_3[0x11];
  iVar14 = param_3[9] * 0x1aa + 0x200 + param_3[0xb] * 0x32a >> 10;
  sVar8 = param_3[0x23];
  iVar19 = param_3[9] * 0x17 + 0x200 + param_3[0xb] * -99 >> 10;
  iVar12 = param_3[0x19] * 0x1aa + 0x200 + param_3[0x1b] * 0x32a >> 10;
  sVar9 = param_3[4];
  iVar13 = param_3[0x19] * 0x17 + 0x200 + param_3[0x1b] * -99 >> 10;
  sVar10 = param_3[0x14];
  iVar16 = (int)param_3[0xc];
  iVar15 = (int)param_3[0x1c];
  sVar11 = *param_3;
  *(int *)(param_1 + 0x28) = (int)param_3[0x24];
  *(int *)param_1 = (int)sVar11;
  *(int *)(param_1 + 4) = iVar18 * 0x1aa + 0x200 + iVar17 * 0x32a >> 10;
  *(int *)(param_1 + 8) = (int)sVar1;
  *(int *)(param_1 + 0xc) = iVar18 * 0x17 + 0x200 + iVar17 * -99 >> 10;
  *(int *)(param_1 + 0x10) = sVar2 * 0x1aa + 0x200 + sVar4 * 0x32a >> 10;
  *(int *)(param_1 + 0x14) = iVar14 * 0x1aa + 0x200 + iVar12 * 0x32a >> 10;
  *(int *)(param_1 + 0x18) = sVar5 * 0x1aa + 0x200 + sVar8 * 0x32a >> 10;
  *(int *)(param_1 + 0x1c) = iVar14 * 0x17 + 0x200 + iVar12 * -99 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar9;
  *(int *)(param_1 + 0x24) = iVar16 * 0x1aa + 0x200 + iVar15 * 0x32a >> 10;
  *(int *)(param_1 + 0x2c) = iVar16 * 0x17 + 0x200 + iVar15 * -99 >> 10;
  *(int *)(param_1 + 0x30) = sVar2 * 0x17 + 0x200 + sVar4 * -99 >> 10;
  *(int *)(param_1 + 0x34) = iVar19 * 0x1aa + 0x200 + iVar13 * 0x32a >> 10;
  *(int *)(param_1 + 0x38) = sVar5 * 0x17 + 0x200 + sVar8 * -99 >> 10;
  *(int *)(param_1 + 0x3c) = iVar19 * 0x17 + 0x200 + iVar13 * -99 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)param_2 = iVar18 * 0x3a0 + 0x200 + iVar17 * -0x145 >> 10;
  *(int *)(param_2 + 4) = (int)sVar3;
  *(int *)(param_2 + 8) = iVar18 * -0x4b + 0x200 + iVar17 * 0x20e >> 10;
  *(int *)(param_2 + 0x10) = iVar14 * 0x3a0 + 0x200 + iVar12 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = sVar7 * 0x1aa + 0x200 + sVar6 * 0x32a >> 10;
  *(int *)(param_2 + 0x18) = iVar14 * -0x4b + 0x200 + iVar12 * 0x20e >> 10;
  *(int *)(param_2 + 0x20) = iVar16 * 0x3a0 + 0x200 + iVar15 * -0x145 >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar10;
  *(int *)(param_2 + 0x28) = iVar16 * -0x4b + 0x200 + iVar15 * 0x20e >> 10;
  *(int *)(param_2 + 0x30) = iVar19 * 0x3a0 + 0x200 + iVar13 * -0x145 >> 10;
  *(int *)(param_2 + 0x34) = sVar7 * 0x17 + 0x200 + sVar6 * -99 >> 10;
  *(int *)(param_2 + 0x38) = iVar19 * -0x4b + 0x200 + iVar13 * 0x20e >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<5, 5>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<5,5>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[0x13];
  sVar4 = param_3[0x23];
  sVar5 = param_3[0x21];
  iVar12 = (int)param_3[10];
  sVar6 = param_3[0x11];
  iVar10 = param_3[9] * 0x3a0 + 0x200 + param_3[0xb] * -0x145 >> 10;
  iVar14 = param_3[9] * -0x4b + 0x200 + param_3[0xb] * 0x20e >> 10;
  sVar7 = param_3[0x12];
  iVar9 = param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1b] * -0x145 >> 10;
  iVar11 = (int)param_3[0x1a];
  iVar13 = param_3[0x19] * -0x4b + 0x200 + param_3[0x1b] * 0x20e >> 10;
  sVar8 = param_3[0x22];
  iVar15 = sVar2 * -0x145 + sVar1 * 0x3a0 + __LC14;
  iVar16 = iVar10 * 0x1aa + iVar9 * 0x32a + _UNK_00112c74;
  iVar17 = sVar5 * 0x3a0 + sVar4 * -0x145 + _UNK_00112c78;
  iVar18 = iVar10 * 0x17 + iVar9 * -99 + _UNK_00112c7c;
  *(int *)(param_1 + 0x10) = (int)param_3[2];
  *(int *)param_1 = iVar15 >> 10;
  *(int *)(param_1 + 4) = iVar16 >> 10;
  *(int *)(param_1 + 8) = iVar17 >> 10;
  *(int *)(param_1 + 0xc) = iVar18 >> 10;
  *(int *)(param_1 + 0x18) = (int)sVar8;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(int *)(param_1 + 0x14) = iVar12 * 0x1aa + 0x200 + iVar11 * 0x32a >> 10;
  *(int *)(param_1 + 0x1c) = iVar12 * 0x17 + 0x200 + iVar11 * -99 >> 10;
  *(int *)(param_1 + 0x20) = sVar1 * -0x4b + 0x200 + sVar2 * 0x20e >> 10;
  *(int *)(param_1 + 0x24) = iVar14 * 0x1aa + 0x200 + iVar13 * 0x32a >> 10;
  *(int *)(param_1 + 0x28) = sVar5 * -0x4b + 0x200 + sVar4 * 0x20e >> 10;
  *(int *)(param_1 + 0x2c) = iVar14 * 0x17 + 0x200 + iVar13 * -99 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)param_2 = iVar10 * 0x3a0 + 0x200 + iVar9 * -0x145 >> 10;
  *(int *)(param_2 + 4) = sVar6 * 0x3a0 + 0x200 + sVar3 * -0x145 >> 10;
  *(int *)(param_2 + 8) = iVar10 * -0x4b + 0x200 + iVar9 * 0x20e >> 10;
  *(int *)(param_2 + 0x10) = iVar12 * 0x3a0 + 0x200 + iVar11 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar7;
  *(int *)(param_2 + 0x18) = iVar12 * -0x4b + 0x200 + iVar11 * 0x20e >> 10;
  *(int *)(param_2 + 0x20) = iVar14 * 0x3a0 + 0x200 + iVar13 * -0x145 >> 10;
  *(int *)(param_2 + 0x24) = sVar6 * -0x4b + 0x200 + sVar3 * 0x20e >> 10;
  *(int *)(param_2 + 0x28) = iVar14 * -0x4b + 0x200 + iVar13 * 0x20e >> 10;
  return;
}



/* DCT_Upsample::P_Q<5, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<5,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  sVar1 = param_3[0x10];
  sVar2 = param_3[1];
  sVar3 = param_3[0x20];
  sVar4 = param_3[5];
  iVar21 = (int)param_3[8];
  iVar20 = (int)param_3[0x18];
  sVar5 = param_3[3];
  sVar6 = param_3[0x11];
  iVar15 = param_3[9] * 0x1aa + param_3[0xb] * 0x32a + 0x200 + param_3[0xd] * -0x168 >> 10;
  sVar7 = param_3[0x13];
  iVar17 = param_3[0xb] * -99 + param_3[9] * 0x17 + 0x200 + param_3[0xd] * 0x1f6 >> 10;
  sVar8 = param_3[0x15];
  sVar9 = param_3[0x24];
  sVar10 = param_3[0x23];
  sVar11 = param_3[4];
  iVar19 = (int)param_3[0xc];
  sVar12 = param_3[0x21];
  iVar16 = param_3[0x1b] * 0x32a + param_3[0x19] * 0x1aa + 0x200 + param_3[0x1d] * -0x168 >> 10;
  sVar13 = param_3[0x25];
  iVar22 = param_3[0x1b] * -99 + param_3[0x19] * 0x17 + 0x200 + param_3[0x1d] * 0x1f6 >> 10;
  sVar14 = param_3[0x14];
  iVar18 = (int)param_3[0x1c];
  *(int *)param_1 = (int)*param_3;
  *(int *)(param_1 + 4) = iVar21 * 0x1aa + 0x200 + iVar20 * 0x32a >> 10;
  *(int *)(param_1 + 8) = (int)sVar3;
  *(int *)(param_1 + 0xc) = iVar21 * 0x17 + 0x200 + iVar20 * -99 >> 10;
  *(int *)(param_1 + 0x10) = sVar5 * 0x32a + sVar2 * 0x1aa + 0x200 + sVar4 * -0x168 >> 10;
  *(int *)(param_1 + 0x14) = iVar15 * 0x1aa + 0x200 + iVar16 * 0x32a >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar9;
  *(int *)(param_1 + 0x18) = sVar10 * 0x32a + sVar12 * 0x1aa + 0x200 + sVar13 * -0x168 >> 10;
  *(int *)(param_1 + 0x1c) = iVar15 * 0x17 + 0x200 + iVar16 * -99 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar11;
  *(int *)(param_1 + 0x24) = iVar19 * 0x1aa + 0x200 + iVar18 * 0x32a >> 10;
  *(int *)(param_1 + 0x2c) = iVar19 * 0x17 + 0x200 + iVar18 * -99 >> 10;
  *(int *)(param_1 + 0x30) = sVar5 * -99 + sVar2 * 0x17 + 0x200 + sVar4 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x34) = iVar17 * 0x1aa + 0x200 + iVar22 * 0x32a >> 10;
  *(int *)(param_1 + 0x38) = sVar10 * -99 + sVar12 * 0x17 + 0x200 + sVar13 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x3c) = iVar17 * 0x17 + 0x200 + iVar22 * -99 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(int *)param_2 = iVar21 * 0x3a0 + 0x200 + iVar20 * -0x145 >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 8) = iVar21 * -0x4b + 0x200 + iVar20 * 0x20e >> 10;
  *(int *)(param_2 + 0x10) = iVar15 * 0x3a0 + 0x200 + iVar16 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = sVar6 * 0x1aa + sVar7 * 0x32a + 0x200 + sVar8 * -0x168 >> 10;
  *(int *)(param_2 + 0x18) = iVar15 * -0x4b + 0x200 + iVar16 * 0x20e >> 10;
  *(int *)(param_2 + 0x20) = iVar19 * 0x3a0 + 0x200 + iVar18 * -0x145 >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar14;
  *(int *)(param_2 + 0x28) = iVar19 * -0x4b + 0x200 + iVar18 * 0x20e >> 10;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)(param_2 + 0x30) = iVar17 * 0x3a0 + 0x200 + iVar22 * -0x145 >> 10;
  *(int *)(param_2 + 0x34) = sVar6 * 0x17 + sVar7 * -99 + 0x200 + sVar8 * 0x1f6 >> 10;
  *(int *)(param_2 + 0x38) = iVar17 * -0x4b + 0x200 + iVar22 * 0x20e >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<5, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<5,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[5];
  sVar4 = param_3[0x13];
  sVar5 = param_3[0x11];
  sVar6 = param_3[0x23];
  sVar7 = param_3[0x15];
  iVar14 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + 0x200 + param_3[0xd] * 0xda >> 10;
  iVar17 = param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 + param_3[0xd] * 0x313 >> 10;
  sVar8 = param_3[0x21];
  iVar12 = param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1d] * 0xda >> 10;
  sVar9 = param_3[0x25];
  iVar13 = param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 + param_3[0x1d] * 0x313 >> 10;
  sVar10 = param_3[2];
  sVar11 = param_3[0x12];
  iVar16 = (int)param_3[10];
  iVar15 = (int)param_3[0x1a];
  *(int *)(param_1 + 0x18) = (int)param_3[0x22];
  *(int *)(param_1 + 0x10) = (int)sVar10;
  iVar18 = sVar2 * -0x145 + sVar1 * 0x3a0 + sVar3 * 0xda + __LC14;
  iVar19 = iVar14 * 0x1aa + iVar12 * 0x32a + _UNK_00112c74;
  iVar20 = sVar6 * -0x145 + sVar8 * 0x3a0 + sVar9 * 0xda + _UNK_00112c78;
  iVar21 = iVar14 * 0x17 + iVar12 * -99 + _UNK_00112c7c;
  *(int *)(param_1 + 0x14) = iVar16 * 0x1aa + 0x200 + iVar15 * 0x32a >> 10;
  *(int *)param_1 = iVar18 >> 10;
  *(int *)(param_1 + 4) = iVar19 >> 10;
  *(int *)(param_1 + 8) = iVar20 >> 10;
  *(int *)(param_1 + 0xc) = iVar21 >> 10;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(int *)(param_1 + 0x1c) = iVar16 * 0x17 + 0x200 + iVar15 * -99 >> 10;
  *(int *)(param_1 + 0x20) = sVar2 * 0x20e + sVar1 * -0x4b + 0x200 + sVar3 * 0x313 >> 10;
  *(int *)(param_1 + 0x24) = iVar17 * 0x1aa + 0x200 + iVar13 * 0x32a >> 10;
  *(int *)(param_1 + 0x28) = sVar6 * 0x20e + sVar8 * -0x4b + 0x200 + sVar9 * 0x313 >> 10;
  *(int *)(param_1 + 0x2c) = iVar17 * 0x17 + 0x200 + iVar13 * -99 >> 10;
  *(int *)param_2 = iVar14 * 0x3a0 + 0x200 + iVar12 * -0x145 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)(param_2 + 4) = sVar5 * 0x3a0 + sVar4 * -0x145 + 0x200 + sVar7 * 0xda >> 10;
  *(int *)(param_2 + 8) = iVar14 * -0x4b + 0x200 + iVar12 * 0x20e >> 10;
  *(int *)(param_2 + 0x10) = iVar16 * 0x3a0 + 0x200 + iVar15 * -0x145 >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar11;
  *(int *)(param_2 + 0x18) = iVar16 * -0x4b + 0x200 + iVar15 * 0x20e >> 10;
  *(int *)(param_2 + 0x20) = iVar17 * 0x3a0 + 0x200 + iVar13 * -0x145 >> 10;
  *(int *)(param_2 + 0x24) = sVar5 * -0x4b + sVar4 * 0x20e + 0x200 + sVar7 * 0x313 >> 10;
  *(int *)(param_2 + 0x28) = iVar17 * -0x4b + 0x200 + iVar13 * 0x20e >> 10;
  return;
}



/* DCT_Upsample::P_Q<6, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<6,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
  iVar17 = (int)param_3[8];
  sVar1 = param_3[0x10];
  iVar25 = (int)param_3[0x18];
  sVar2 = param_3[0x20];
  sVar3 = param_3[1];
  iVar26 = (int)param_3[0x28];
  sVar4 = param_3[3];
  sVar5 = param_3[5];
  iVar15 = param_3[0xb] * 0x32a + param_3[9] * 0x1aa + 0x200 + param_3[0xd] * -0x168 >> 10;
  sVar6 = param_3[0x11];
  iVar24 = param_3[0xb] * -99 + param_3[9] * 0x17 + 0x200 + param_3[0xd] * 0x1f6 >> 10;
  sVar7 = param_3[0x13];
  sVar8 = param_3[0x15];
  sVar9 = param_3[0x23];
  sVar10 = param_3[0x21];
  sVar11 = param_3[4];
  iVar20 = (int)param_3[0xc];
  iVar21 = (int)param_3[0x1c];
  sVar12 = param_3[0x25];
  iVar18 = param_3[0x1b] * 0x32a + param_3[0x19] * 0x1aa + 0x200 + param_3[0x1d] * -0x168 >> 10;
  iVar23 = param_3[0x1b] * -99 + param_3[0x19] * 0x17 + 0x200 + param_3[0x1d] * 0x1f6 >> 10;
  sVar13 = param_3[0x14];
  iVar16 = param_3[0x2b] * 0x32a + param_3[0x29] * 0x1aa + 0x200 + param_3[0x2d] * -0x168 >> 10;
  sVar14 = param_3[0x24];
  iVar22 = param_3[0x2b] * -99 + param_3[0x29] * 0x17 + 0x200 + param_3[0x2d] * 0x1f6 >> 10;
  iVar19 = (int)param_3[0x2c];
  *(int *)param_1 = (int)*param_3;
  *(int *)(param_1 + 8) = (int)sVar2;
  *(int *)(param_1 + 4) = iVar25 * 0x32a + iVar17 * 0x1aa + 0x200 + iVar26 * -0x168 >> 10;
  *(int *)(param_1 + 0xc) = iVar25 * -99 + iVar17 * 0x17 + 0x200 + iVar26 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x10) = sVar4 * 0x32a + sVar3 * 0x1aa + 0x200 + sVar5 * -0x168 >> 10;
  *(int *)(param_1 + 0x14) = iVar18 * 0x32a + iVar15 * 0x1aa + 0x200 + iVar16 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) = sVar9 * 0x32a + sVar10 * 0x1aa + 0x200 + sVar12 * -0x168 >> 10;
  *(int *)(param_1 + 0x1c) = iVar18 * -99 + iVar15 * 0x17 + 0x200 + iVar16 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar11;
  *(int *)(param_1 + 0x24) = iVar21 * 0x32a + iVar20 * 0x1aa + 0x200 + iVar19 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar14;
  *(int *)(param_1 + 0x2c) = iVar21 * -99 + iVar20 * 0x17 + 0x200 + iVar19 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x30) = sVar4 * -99 + sVar3 * 0x17 + 0x200 + sVar5 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x34) = iVar23 * 0x32a + iVar24 * 0x1aa + 0x200 + iVar22 * -0x168 >> 10;
  *(int *)(param_1 + 0x38) = sVar9 * -99 + sVar10 * 0x17 + 0x200 + sVar12 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x3c) = iVar23 * -99 + iVar24 * 0x17 + 0x200 + iVar22 * 0x1f6 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)param_2 = iVar25 * -0x145 + iVar17 * 0x3a0 + 0x200 + iVar26 * 0xda >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 8) = iVar25 * 0x20e + iVar17 * -0x4b + 0x200 + iVar26 * 0x313 >> 10;
  *(int *)(param_2 + 0x10) = iVar18 * -0x145 + iVar15 * 0x3a0 + 0x200 + iVar16 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = sVar7 * 0x32a + sVar6 * 0x1aa + 0x200 + sVar8 * -0x168 >> 10;
  *(int *)(param_2 + 0x18) = iVar15 * -0x4b + iVar18 * 0x20e + 0x200 + iVar16 * 0x313 >> 10;
  *(int *)(param_2 + 0x20) = iVar20 * 0x3a0 + iVar21 * -0x145 + 0x200 + iVar19 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar13;
  *(int *)(param_2 + 0x28) = iVar20 * -0x4b + iVar21 * 0x20e + 0x200 + iVar19 * 0x313 >> 10;
  *(int *)(param_2 + 0x30) = iVar24 * 0x3a0 + iVar23 * -0x145 + 0x200 + iVar22 * 0xda >> 10;
  *(int *)(param_2 + 0x34) = sVar6 * 0x17 + sVar7 * -99 + 0x200 + sVar8 * 0x1f6 >> 10;
  *(int *)(param_2 + 0x38) = iVar24 * -0x4b + iVar23 * 0x20e + 0x200 + iVar22 * 0x313 >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<6, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<6,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[5];
  sVar4 = param_3[0x13];
  sVar5 = param_3[0x15];
  sVar6 = param_3[0x11];
  iVar14 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + 0x200 + param_3[0xd] * 0xda >> 10;
  iVar16 = param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1d] * 0xda >> 10;
  iVar20 = param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 + param_3[0x1d] * 0x313 >> 10;
  sVar7 = param_3[0x25];
  sVar8 = param_3[0x21];
  sVar9 = param_3[0x22];
  sVar10 = param_3[0x23];
  sVar11 = param_3[0x12];
  iVar19 = (int)param_3[0x1a];
  sVar12 = param_3[2];
  iVar18 = param_3[0x2b] * -0x145 + param_3[0x29] * 0x3a0 + 0x200 + param_3[0x2d] * 0xda >> 10;
  iVar21 = param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 + param_3[0xd] * 0x313 >> 10;
  iVar17 = param_3[0x2b] * 0x20e + param_3[0x29] * -0x4b + 0x200 + param_3[0x2d] * 0x313 >> 10;
  iVar15 = (int)param_3[10];
  iVar13 = (int)param_3[0x2a];
  *(int *)(param_1 + 0x14) = iVar19 * 0x32a + iVar15 * 0x1aa + 0x200 + iVar13 * -0x168 >> 10;
  *(int *)(param_1 + 0x10) = (int)sVar12;
  iVar22 = iVar16 * 0x32a + iVar14 * 0x1aa + iVar18 * -0x168 + _UNK_00112c74;
  iVar23 = sVar7 * 0xda + sVar10 * -0x145 + sVar8 * 0x3a0 + _UNK_00112c78;
  iVar24 = iVar16 * -99 + iVar14 * 0x17 + iVar18 * 0x1f6 + _UNK_00112c7c;
  *(int *)param_1 = sVar2 * -0x145 + sVar1 * 0x3a0 + sVar3 * 0xda + __LC14 >> 10;
  *(int *)(param_1 + 4) = iVar22 >> 10;
  *(int *)(param_1 + 8) = iVar23 >> 10;
  *(int *)(param_1 + 0xc) = iVar24 >> 10;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(int *)(param_1 + 0x18) = (int)sVar9;
  *(int *)(param_1 + 0x1c) = iVar19 * -99 + iVar15 * 0x17 + 0x200 + iVar13 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = sVar2 * 0x20e + sVar1 * -0x4b + 0x200 + sVar3 * 0x313 >> 10;
  *(int *)(param_1 + 0x24) = iVar20 * 0x32a + iVar21 * 0x1aa + 0x200 + iVar17 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = sVar10 * 0x20e + sVar8 * -0x4b + 0x200 + sVar7 * 0x313 >> 10;
  *(int *)(param_1 + 0x2c) = iVar20 * -99 + iVar21 * 0x17 + 0x200 + iVar17 * 0x1f6 >> 10;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)param_2 = iVar16 * -0x145 + iVar14 * 0x3a0 + 0x200 + iVar18 * 0xda >> 10;
  *(int *)(param_2 + 4) = sVar4 * -0x145 + sVar6 * 0x3a0 + 0x200 + sVar5 * 0xda >> 10;
  *(int *)(param_2 + 8) = iVar14 * -0x4b + iVar16 * 0x20e + 0x200 + iVar18 * 0x313 >> 10;
  *(int *)(param_2 + 0x10) = iVar15 * 0x3a0 + iVar19 * -0x145 + 0x200 + iVar13 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar11;
  *(int *)(param_2 + 0x18) = iVar15 * -0x4b + iVar19 * 0x20e + 0x200 + iVar13 * 0x313 >> 10;
  *(int *)(param_2 + 0x20) = iVar21 * 0x3a0 + iVar20 * -0x145 + 0x200 + iVar17 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = sVar6 * -0x4b + sVar4 * 0x20e + 0x200 + sVar5 * 0x313 >> 10;
  *(int *)(param_2 + 0x28) = iVar21 * -0x4b + iVar20 * 0x20e + 0x200 + iVar17 * 0x313 >> 10;
  return;
}



/* DCT_Upsample::P_Q<7, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<7,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  
  iVar29 = (int)param_3[8];
  sVar1 = param_3[0x10];
  iVar30 = (int)param_3[0x28];
  iVar25 = (int)param_3[0x18];
  sVar2 = param_3[0x30];
  sVar3 = param_3[0xb];
  sVar4 = param_3[1];
  sVar5 = param_3[9];
  sVar6 = param_3[5];
  sVar7 = param_3[3];
  sVar8 = param_3[0xd];
  sVar9 = param_3[0x15];
  sVar10 = param_3[0x13];
  sVar11 = param_3[0x21];
  sVar12 = param_3[0x11];
  iVar23 = sVar3 * 0x32a + sVar5 * 0x1aa + 0x200 + sVar8 * -0x168 >> 10;
  sVar13 = param_3[0x25];
  sVar14 = param_3[0x23];
  sVar15 = param_3[0x31];
  sVar16 = param_3[0x35];
  iVar28 = param_3[0x1b] * 0x32a + param_3[0x19] * 0x1aa + 0x200 + param_3[0x1d] * -0x168 >> 10;
  iVar26 = param_3[0x1b] * -99 + param_3[0x19] * 0x17 + 0x200 + param_3[0x1d] * 0x1f6 >> 10;
  iVar32 = (int)param_3[0xc];
  sVar17 = param_3[0x33];
  iVar31 = param_3[0x2b] * 0x32a + param_3[0x29] * 0x1aa + 0x200 + param_3[0x2d] * -0x168 >> 10;
  sVar18 = param_3[4];
  iVar24 = param_3[0x2b] * -99 + param_3[0x29] * 0x17 + 0x200 + param_3[0x2d] * 0x1f6 >> 10;
  sVar19 = param_3[0x14];
  sVar20 = param_3[0x34];
  iVar33 = (int)param_3[0x1c];
  sVar21 = param_3[0x24];
  iVar34 = (int)param_3[0x2c];
  sVar22 = *param_3;
  *(int *)(param_1 + 8) = (int)param_3[0x20];
  iVar27 = sVar3 * -99 + sVar5 * 0x17 + 0x200 + sVar8 * 0x1f6 >> 10;
  *(int *)param_1 = (int)sVar22;
  *(int *)(param_1 + 4) = iVar25 * 0x32a + iVar29 * 0x1aa + 0x200 + iVar30 * -0x168 >> 10;
  *(int *)(param_1 + 0xc) = iVar25 * -99 + iVar29 * 0x17 + 0x200 + iVar30 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x10) = sVar7 * 0x32a + sVar4 * 0x1aa + 0x200 + sVar6 * -0x168 >> 10;
  *(int *)(param_1 + 0x14) = iVar28 * 0x32a + iVar23 * 0x1aa + 0x200 + iVar31 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) = sVar14 * 0x32a + sVar11 * 0x1aa + 0x200 + sVar13 * -0x168 >> 10;
  *(int *)(param_1 + 0x1c) = iVar28 * -99 + iVar23 * 0x17 + 0x200 + iVar31 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar18;
  *(int *)(param_1 + 0x24) = iVar33 * 0x32a + iVar32 * 0x1aa + 0x200 + iVar34 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar21;
  *(int *)(param_1 + 0x2c) = iVar33 * -99 + iVar32 * 0x17 + 0x200 + iVar34 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x30) = sVar7 * -99 + sVar4 * 0x17 + 0x200 + sVar6 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x34) = iVar26 * 0x32a + iVar27 * 0x1aa + 0x200 + iVar24 * -0x168 >> 10;
  *(int *)(param_1 + 0x38) = sVar14 * -99 + sVar11 * 0x17 + 0x200 + sVar13 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x3c) = iVar26 * -99 + iVar27 * 0x17 + 0x200 + iVar24 * 0x1f6 >> 10;
  *(int *)param_2 = iVar25 * -0x145 + iVar29 * 0x3a0 + 0x200 + iVar30 * 0xda >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 8) = iVar25 * 0x20e + iVar29 * -0x4b + 0x200 + iVar30 * 0x313 >> 10;
  *(int *)(param_2 + 0xc) = (int)sVar2;
  *(int *)(param_2 + 0x10) = iVar28 * -0x145 + iVar23 * 0x3a0 + 0x200 + iVar31 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = sVar10 * 0x32a + sVar12 * 0x1aa + 0x200 + sVar9 * -0x168 >> 10;
  *(int *)(param_2 + 0x18) = iVar28 * 0x20e + iVar23 * -0x4b + 0x200 + iVar31 * 0x313 >> 10;
  *(int *)(param_2 + 0x1c) = sVar17 * 0x32a + sVar15 * 0x1aa + 0x200 + sVar16 * -0x168 >> 10;
  *(int *)(param_2 + 0x20) = iVar33 * -0x145 + iVar32 * 0x3a0 + 0x200 + iVar34 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar19;
  *(int *)(param_2 + 0x28) = iVar32 * -0x4b + iVar33 * 0x20e + 0x200 + iVar34 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) = (int)sVar20;
  *(int *)(param_2 + 0x30) = iVar27 * 0x3a0 + iVar26 * -0x145 + 0x200 + iVar24 * 0xda >> 10;
  *(int *)(param_2 + 0x34) = sVar12 * 0x17 + sVar10 * -99 + 0x200 + sVar9 * 0x1f6 >> 10;
  *(int *)(param_2 + 0x38) = iVar27 * -0x4b + iVar26 * 0x20e + 0x200 + iVar24 * 0x313 >> 10;
  *(int *)(param_2 + 0x3c) = sVar15 * 0x17 + sVar17 * -99 + 0x200 + sVar16 * 0x1f6 >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<7, 6>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<7,6>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[5];
  sVar4 = param_3[0x13];
  sVar5 = param_3[0x15];
  sVar6 = param_3[0x11];
  iVar22 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + 0x200 + param_3[0xd] * 0xda >> 10;
  iVar24 = param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1d] * 0xda >> 10;
  iVar27 = param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 + param_3[0x1d] * 0x313 >> 10;
  sVar7 = param_3[0x21];
  sVar8 = param_3[0x23];
  sVar9 = param_3[0x25];
  sVar10 = param_3[0x33];
  sVar11 = param_3[2];
  sVar12 = param_3[0x12];
  iVar29 = (int)param_3[0x1a];
  sVar13 = param_3[0x31];
  iVar23 = param_3[0x2b] * -0x145 + param_3[0x29] * 0x3a0 + 0x200 + param_3[0x2d] * 0xda >> 10;
  sVar14 = param_3[0x35];
  iVar25 = (int)param_3[10];
  sVar15 = param_3[0x22];
  iVar26 = (int)param_3[0x2a];
  sVar16 = param_3[0x32];
  iVar21 = param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 + param_3[0xd] * 0x313 >> 10;
  iVar28 = param_3[0x2b] * 0x20e + param_3[0x29] * -0x4b + 0x200 + param_3[0x2d] * 0x313 >> 10;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  iVar20 = _UNK_00112c7c;
  iVar19 = _UNK_00112c78;
  iVar18 = _UNK_00112c74;
  iVar17 = __LC14;
  *(int *)(param_1 + 0x10) = (int)sVar11;
  *(int *)(param_1 + 0x14) = iVar29 * 0x32a + iVar25 * 0x1aa + 0x200 + iVar26 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) = (int)sVar15;
  *(int *)param_1 = sVar2 * -0x145 + sVar1 * 0x3a0 + sVar3 * 0xda + iVar17 >> 10;
  *(int *)(param_1 + 4) = iVar24 * 0x32a + iVar22 * 0x1aa + iVar23 * -0x168 + iVar18 >> 10;
  *(int *)(param_1 + 8) = sVar9 * 0xda + sVar8 * -0x145 + sVar7 * 0x3a0 + iVar19 >> 10;
  *(int *)(param_1 + 0xc) = iVar24 * -99 + iVar22 * 0x17 + iVar23 * 0x1f6 + iVar20 >> 10;
  *(int *)(param_1 + 0x1c) = iVar29 * -99 + iVar25 * 0x17 + 0x200 + iVar26 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = sVar2 * 0x20e + sVar1 * -0x4b + 0x200 + sVar3 * 0x313 >> 10;
  *(int *)(param_1 + 0x24) = iVar27 * 0x32a + iVar21 * 0x1aa + 0x200 + iVar28 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = sVar8 * 0x20e + sVar7 * -0x4b + 0x200 + sVar9 * 0x313 >> 10;
  *(int *)(param_1 + 0x2c) = iVar27 * -99 + iVar21 * 0x17 + 0x200 + iVar28 * 0x1f6 >> 10;
  *(int *)param_2 = iVar23 * 0xda + iVar24 * -0x145 + iVar22 * 0x3a0 + iVar17 >> 10;
  *(int *)(param_2 + 4) = sVar4 * -0x145 + sVar6 * 0x3a0 + sVar5 * 0xda + iVar18 >> 10;
  *(int *)(param_2 + 8) = iVar24 * 0x20e + iVar22 * -0x4b + iVar23 * 0x313 + iVar19 >> 10;
  *(int *)(param_2 + 0xc) = sVar10 * -0x145 + sVar13 * 0x3a0 + sVar14 * 0xda + iVar20 >> 10;
  *(int *)(param_2 + 0x10) = iVar29 * -0x145 + iVar25 * 0x3a0 + 0x200 + iVar26 * 0xda >> 10;
  *(ulong *)(param_2 + 0x14) =
       CONCAT44(iVar25 * -0x4b + iVar29 * 0x20e + 0x200 + iVar26 * 0x313 >> 10,(int)sVar12);
  *(ulong *)(param_2 + 0x1c) =
       CONCAT44(iVar21 * 0x3a0 + iVar27 * -0x145 + 0x200 + iVar28 * 0xda >> 10,(int)sVar16);
  *(int *)(param_2 + 0x28) = iVar21 * -0x4b + iVar27 * 0x20e + 0x200 + iVar28 * 0x313 >> 10;
  *(undefined1 (*) [16])(param_2 + 0x30) = (undefined1  [16])0x0;
  *(int *)(param_2 + 0x24) = sVar6 * -0x4b + sVar4 * 0x20e + 0x200 + sVar5 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) = sVar13 * -0x4b + sVar10 * 0x20e + 0x200 + sVar14 * 0x313 >> 10;
  return;
}



/* DCT_Upsample::P_Q<7, 7>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<7,7>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  
  iVar29 = (int)param_3[8];
  sVar1 = param_3[0x10];
  iVar30 = (int)param_3[0x28];
  iVar25 = (int)param_3[0x18];
  sVar2 = param_3[0x30];
  sVar3 = param_3[0xb];
  sVar4 = param_3[1];
  sVar5 = param_3[9];
  sVar6 = param_3[5];
  sVar7 = param_3[3];
  sVar8 = param_3[0xd];
  sVar9 = param_3[0x15];
  sVar10 = param_3[0x13];
  sVar11 = param_3[0x21];
  sVar12 = param_3[0x11];
  iVar23 = sVar3 * 0x32a + sVar5 * 0x1aa + 0x200 + sVar8 * -0x168 >> 10;
  sVar13 = param_3[0x25];
  sVar14 = param_3[0x23];
  sVar15 = param_3[0x31];
  sVar16 = param_3[0x35];
  iVar28 = param_3[0x1b] * 0x32a + param_3[0x19] * 0x1aa + 0x200 + param_3[0x1d] * -0x168 >> 10;
  iVar26 = param_3[0x1b] * -99 + param_3[0x19] * 0x17 + 0x200 + param_3[0x1d] * 0x1f6 >> 10;
  iVar32 = (int)param_3[0xc];
  sVar17 = param_3[0x33];
  iVar31 = param_3[0x2b] * 0x32a + param_3[0x29] * 0x1aa + 0x200 + param_3[0x2d] * -0x168 >> 10;
  sVar18 = param_3[4];
  iVar24 = param_3[0x2b] * -99 + param_3[0x29] * 0x17 + 0x200 + param_3[0x2d] * 0x1f6 >> 10;
  sVar19 = param_3[0x14];
  sVar20 = param_3[0x34];
  iVar33 = (int)param_3[0x1c];
  sVar21 = param_3[0x24];
  iVar34 = (int)param_3[0x2c];
  sVar22 = *param_3;
  *(int *)(param_1 + 8) = (int)param_3[0x20];
  iVar27 = sVar3 * -99 + sVar5 * 0x17 + 0x200 + sVar8 * 0x1f6 >> 10;
  *(int *)param_1 = (int)sVar22;
  *(int *)(param_1 + 4) = iVar25 * 0x32a + iVar29 * 0x1aa + 0x200 + iVar30 * -0x168 >> 10;
  *(int *)(param_1 + 0xc) = iVar25 * -99 + iVar29 * 0x17 + 0x200 + iVar30 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x10) = sVar7 * 0x32a + sVar4 * 0x1aa + 0x200 + sVar6 * -0x168 >> 10;
  *(int *)(param_1 + 0x14) = iVar28 * 0x32a + iVar23 * 0x1aa + 0x200 + iVar31 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) = sVar14 * 0x32a + sVar11 * 0x1aa + 0x200 + sVar13 * -0x168 >> 10;
  *(int *)(param_1 + 0x1c) = iVar28 * -99 + iVar23 * 0x17 + 0x200 + iVar31 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar18;
  *(int *)(param_1 + 0x24) = iVar33 * 0x32a + iVar32 * 0x1aa + 0x200 + iVar34 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar21;
  *(int *)(param_1 + 0x2c) = iVar33 * -99 + iVar32 * 0x17 + 0x200 + iVar34 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x30) = sVar7 * -99 + sVar4 * 0x17 + 0x200 + sVar6 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x34) = iVar26 * 0x32a + iVar27 * 0x1aa + 0x200 + iVar24 * -0x168 >> 10;
  *(int *)(param_1 + 0x38) = sVar14 * -99 + sVar11 * 0x17 + 0x200 + sVar13 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x3c) = iVar26 * -99 + iVar27 * 0x17 + 0x200 + iVar24 * 0x1f6 >> 10;
  *(int *)param_2 = iVar25 * -0x145 + iVar29 * 0x3a0 + 0x200 + iVar30 * 0xda >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 8) = iVar25 * 0x20e + iVar29 * -0x4b + 0x200 + iVar30 * 0x313 >> 10;
  *(int *)(param_2 + 0xc) = (int)sVar2;
  *(int *)(param_2 + 0x10) = iVar28 * -0x145 + iVar23 * 0x3a0 + 0x200 + iVar31 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = sVar10 * 0x32a + sVar12 * 0x1aa + 0x200 + sVar9 * -0x168 >> 10;
  *(int *)(param_2 + 0x18) = iVar28 * 0x20e + iVar23 * -0x4b + 0x200 + iVar31 * 0x313 >> 10;
  *(int *)(param_2 + 0x1c) = sVar17 * 0x32a + sVar15 * 0x1aa + 0x200 + sVar16 * -0x168 >> 10;
  *(int *)(param_2 + 0x20) = iVar33 * -0x145 + iVar32 * 0x3a0 + 0x200 + iVar34 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar19;
  *(int *)(param_2 + 0x28) = iVar32 * -0x4b + iVar33 * 0x20e + 0x200 + iVar34 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) = (int)sVar20;
  *(int *)(param_2 + 0x30) = iVar27 * 0x3a0 + iVar26 * -0x145 + 0x200 + iVar24 * 0xda >> 10;
  *(int *)(param_2 + 0x34) = sVar12 * 0x17 + sVar10 * -99 + 0x200 + sVar9 * 0x1f6 >> 10;
  *(int *)(param_2 + 0x38) = iVar27 * -0x4b + iVar26 * 0x20e + 0x200 + iVar24 * 0x313 >> 10;
  *(int *)(param_2 + 0x3c) = sVar15 * 0x17 + sVar17 * -99 + 0x200 + sVar16 * 0x1f6 >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<7, 7>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<7,7>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  
  iVar23 = _UNK_00112c7c;
  iVar22 = _UNK_00112c78;
  iVar21 = _UNK_00112c74;
  iVar20 = __LC14;
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[5];
  sVar4 = param_3[0x11];
  sVar5 = param_3[0x13];
  sVar6 = param_3[0x15];
  iVar24 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + 0x200 + param_3[0xd] * 0xda >> 10;
  iVar30 = param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 + param_3[0xd] * 0x313 >> 10;
  iVar26 = param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 + param_3[0x1d] * 0xda >> 10;
  sVar7 = param_3[0x23];
  sVar8 = param_3[0x25];
  sVar9 = param_3[0x21];
  sVar10 = param_3[0x32];
  sVar11 = param_3[6];
  sVar12 = param_3[0x31];
  sVar13 = param_3[0x35];
  sVar14 = param_3[0x16];
  sVar15 = param_3[0x33];
  iVar34 = (int)param_3[10];
  iVar25 = param_3[0x2b] * -0x145 + param_3[0x29] * 0x3a0 + 0x200 + param_3[0x2d] * 0xda >> 10;
  iVar28 = param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 + param_3[0x1d] * 0x313 >> 10;
  iVar35 = (int)param_3[0x1a];
  sVar16 = param_3[0x12];
  iVar27 = (int)param_3[0xe];
  iVar29 = param_3[0x2b] * 0x20e + param_3[0x29] * -0x4b + 0x200 + param_3[0x2d] * 0x313 >> 10;
  sVar17 = param_3[0x22];
  iVar33 = (int)param_3[0x2a];
  sVar18 = param_3[0x26];
  sVar19 = param_3[0x36];
  iVar32 = (int)param_3[0x1e];
  iVar31 = (int)param_3[0x2e];
  *(int *)(param_1 + 0x10) = (int)param_3[2];
  *(int *)(param_1 + 0x18) = (int)sVar17;
  *(int *)param_1 = sVar2 * -0x145 + sVar1 * 0x3a0 + sVar3 * 0xda + iVar20 >> 10;
  *(int *)(param_1 + 4) = iVar26 * 0x32a + iVar24 * 0x1aa + iVar25 * -0x168 + iVar21 >> 10;
  *(int *)(param_1 + 8) = sVar8 * 0xda + sVar7 * -0x145 + sVar9 * 0x3a0 + iVar22 >> 10;
  *(int *)(param_1 + 0xc) = iVar26 * -99 + iVar24 * 0x17 + iVar25 * 0x1f6 + iVar23 >> 10;
  *(int *)(param_1 + 0x14) = iVar35 * 0x32a + iVar34 * 0x1aa + 0x200 + iVar33 * -0x168 >> 10;
  *(int *)(param_1 + 0x1c) = iVar35 * -99 + iVar34 * 0x17 + 0x200 + iVar33 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) = sVar2 * 0x20e + sVar1 * -0x4b + 0x200 + sVar3 * 0x313 >> 10;
  *(int *)(param_1 + 0x24) = iVar28 * 0x32a + iVar30 * 0x1aa + 0x200 + iVar29 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = sVar7 * 0x20e + sVar9 * -0x4b + 0x200 + sVar8 * 0x313 >> 10;
  *(int *)(param_1 + 0x2c) = iVar28 * -99 + iVar30 * 0x17 + 0x200 + iVar29 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x30) = (int)sVar11;
  *(int *)(param_1 + 0x34) = iVar32 * 0x32a + iVar27 * 0x1aa + 0x200 + iVar31 * -0x168 >> 10;
  *(int *)(param_1 + 0x38) = (int)sVar18;
  *(int *)(param_1 + 0x3c) = iVar32 * -99 + iVar27 * 0x17 + 0x200 + iVar31 * 0x1f6 >> 10;
  *(int *)param_2 = iVar25 * 0xda + iVar26 * -0x145 + iVar24 * 0x3a0 + iVar20 >> 10;
  *(int *)(param_2 + 4) = sVar5 * -0x145 + sVar4 * 0x3a0 + sVar6 * 0xda + iVar21 >> 10;
  *(int *)(param_2 + 8) = iVar26 * 0x20e + iVar24 * -0x4b + iVar25 * 0x313 + iVar22 >> 10;
  *(int *)(param_2 + 0xc) = sVar15 * -0x145 + sVar12 * 0x3a0 + sVar13 * 0xda + iVar23 >> 10;
  *(int *)(param_2 + 0x10) = iVar35 * -0x145 + iVar34 * 0x3a0 + 0x200 + iVar33 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar16;
  *(int *)(param_2 + 0x18) = iVar35 * 0x20e + iVar34 * -0x4b + 0x200 + iVar33 * 0x313 >> 10;
  *(int *)(param_2 + 0x1c) = (int)sVar10;
  *(int *)(param_2 + 0x20) = iVar28 * -0x145 + iVar30 * 0x3a0 + 0x200 + iVar29 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = sVar5 * 0x20e + sVar4 * -0x4b + 0x200 + sVar6 * 0x313 >> 10;
  *(int *)(param_2 + 0x28) = iVar30 * -0x4b + iVar28 * 0x20e + 0x200 + iVar29 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) = sVar12 * -0x4b + sVar15 * 0x20e + 0x200 + sVar13 * 0x313 >> 10;
  *(int *)(param_2 + 0x30) = iVar27 * 0x3a0 + iVar32 * -0x145 + 0x200 + iVar31 * 0xda >> 10;
  *(int *)(param_2 + 0x34) = (int)sVar14;
  *(int *)(param_2 + 0x3c) = (int)sVar19;
  *(int *)(param_2 + 0x38) = iVar27 * -0x4b + iVar32 * 0x20e + 0x200 + iVar31 * 0x313 >> 10;
  return;
}



/* DCT_Upsample::P_Q<7, 8>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<7,8>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  
  iVar28 = (int)param_3[8];
  sVar1 = param_3[0x10];
  iVar26 = (int)param_3[0x18];
  sVar2 = param_3[0x20];
  iVar31 = (int)param_3[0x28];
  sVar3 = param_3[0x30];
  sVar4 = param_3[5];
  sVar5 = param_3[1];
  sVar6 = param_3[3];
  sVar7 = param_3[7];
  sVar8 = param_3[0x13];
  sVar9 = param_3[0x15];
  sVar10 = param_3[0x25];
  sVar11 = param_3[0x21];
  sVar12 = param_3[0x23];
  sVar13 = param_3[0x11];
  iVar24 = param_3[0xd] * -0x168 + param_3[0xb] * 0x32a + param_3[9] * 0x1aa + 0x200 +
           param_3[0xf] * 0x11c >> 10;
  sVar14 = param_3[0x17];
  sVar15 = param_3[0x27];
  iVar30 = param_3[0x1d] * -0x168 + param_3[0x1b] * 0x32a + param_3[0x19] * 0x1aa + 0x200 +
           param_3[0x1f] * 0x11c >> 10;
  sVar16 = param_3[0x34];
  sVar17 = param_3[0x31];
  iVar32 = param_3[0x2d] * -0x168 + param_3[0x2b] * 0x32a + param_3[0x29] * 0x1aa + 0x200 +
           param_3[0x2f] * 0x11c >> 10;
  sVar18 = param_3[0x33];
  iVar29 = param_3[0xd] * 0x1f6 + param_3[0xb] * -99 + param_3[9] * 0x17 + 0x200 +
           param_3[0xf] * 0x377 >> 10;
  sVar19 = param_3[0x35];
  sVar20 = param_3[0x37];
  sVar21 = param_3[4];
  iVar27 = param_3[0x1d] * 0x1f6 + param_3[0x1b] * -99 + param_3[0x19] * 0x17 + 0x200 +
           param_3[0x1f] * 0x377 >> 10;
  iVar33 = (int)param_3[0xc];
  sVar22 = param_3[0x14];
  iVar25 = param_3[0x2d] * 0x1f6 + param_3[0x2b] * -99 + param_3[0x29] * 0x17 + 0x200 +
           param_3[0x2f] * 0x377 >> 10;
  iVar34 = (int)param_3[0x1c];
  sVar23 = param_3[0x24];
  iVar35 = (int)param_3[0x2c];
  *(int *)param_1 = (int)*param_3;
  *(int *)(param_1 + 4) = iVar26 * 0x32a + iVar28 * 0x1aa + 0x200 + iVar31 * -0x168 >> 10;
  *(int *)(param_1 + 8) = (int)sVar2;
  *(int *)(param_1 + 0x20) = (int)sVar21;
  *(int *)(param_1 + 0xc) = iVar26 * -99 + iVar28 * 0x17 + 0x200 + iVar31 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x10) =
       sVar4 * -0x168 + sVar6 * 0x32a + sVar5 * 0x1aa + 0x200 + sVar7 * 0x11c >> 10;
  *(int *)(param_1 + 0x14) = iVar30 * 0x32a + iVar24 * 0x1aa + 0x200 + iVar32 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) =
       sVar10 * -0x168 + sVar12 * 0x32a + sVar11 * 0x1aa + 0x200 + sVar15 * 0x11c >> 10;
  *(int *)(param_1 + 0x1c) = iVar30 * -99 + iVar24 * 0x17 + 0x200 + iVar32 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x24) = iVar34 * 0x32a + iVar33 * 0x1aa + 0x200 + iVar35 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar23;
  *(int *)(param_1 + 0x2c) = iVar34 * -99 + iVar33 * 0x17 + 0x200 + iVar35 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x30) =
       sVar4 * 0x1f6 + sVar6 * -99 + sVar5 * 0x17 + 0x200 + sVar7 * 0x377 >> 10;
  *(int *)(param_1 + 0x34) = iVar27 * 0x32a + iVar29 * 0x1aa + 0x200 + iVar25 * -0x168 >> 10;
  *(int *)(param_1 + 0x38) =
       sVar10 * 0x1f6 + sVar12 * -99 + sVar11 * 0x17 + 0x200 + sVar15 * 0x377 >> 10;
  *(int *)(param_1 + 0x3c) = iVar27 * -99 + iVar29 * 0x17 + 0x200 + iVar25 * 0x1f6 >> 10;
  *(int *)param_2 = iVar26 * -0x145 + iVar28 * 0x3a0 + 0x200 + iVar31 * 0xda >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 0xc) = (int)sVar3;
  *(int *)(param_2 + 8) = iVar26 * 0x20e + iVar28 * -0x4b + 0x200 + iVar31 * 0x313 >> 10;
  *(int *)(param_2 + 0x10) = iVar30 * -0x145 + iVar24 * 0x3a0 + 0x200 + iVar32 * 0xda >> 10;
  *(int *)(param_2 + 0x14) =
       sVar9 * -0x168 + sVar8 * 0x32a + sVar13 * 0x1aa + 0x200 + sVar14 * 0x11c >> 10;
  *(int *)(param_2 + 0x18) = iVar30 * 0x20e + iVar24 * -0x4b + 0x200 + iVar32 * 0x313 >> 10;
  *(int *)(param_2 + 0x1c) =
       sVar19 * -0x168 + sVar18 * 0x32a + sVar17 * 0x1aa + 0x200 + sVar20 * 0x11c >> 10;
  *(int *)(param_2 + 0x20) = iVar34 * -0x145 + iVar33 * 0x3a0 + 0x200 + iVar35 * 0xda >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar22;
  *(int *)(param_2 + 0x28) = iVar34 * 0x20e + iVar33 * -0x4b + 0x200 + iVar35 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) = (int)sVar16;
  *(int *)(param_2 + 0x30) = iVar29 * 0x3a0 + iVar27 * -0x145 + 0x200 + iVar25 * 0xda >> 10;
  *(int *)(param_2 + 0x34) =
       sVar13 * 0x17 + sVar8 * -99 + sVar9 * 0x1f6 + 0x200 + sVar14 * 0x377 >> 10;
  *(int *)(param_2 + 0x38) = iVar29 * -0x4b + iVar27 * 0x20e + 0x200 + iVar25 * 0x313 >> 10;
  *(int *)(param_2 + 0x3c) =
       sVar17 * 0x17 + sVar18 * -99 + sVar19 * 0x1f6 + 0x200 + sVar20 * 0x377 >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<7, 8>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<7,8>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  
  sVar1 = param_3[5];
  sVar2 = param_3[1];
  sVar3 = param_3[3];
  sVar4 = param_3[7];
  sVar5 = param_3[0x13];
  sVar6 = param_3[0x15];
  sVar7 = param_3[0x11];
  iVar28 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + param_3[0xd] * 0xda + 0x200 +
           param_3[0xf] * -0xb8 >> 10;
  sVar8 = param_3[0x17];
  sVar9 = param_3[0x25];
  sVar10 = param_3[0x27];
  sVar11 = param_3[0x23];
  sVar12 = param_3[0x21];
  iVar34 = param_3[0x1d] * 0xda + param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 +
           param_3[0x1f] * -0xb8 >> 10;
  iVar36 = param_3[0x2d] * 0xda + param_3[0x2b] * -0x145 + param_3[0x29] * 0x3a0 + 0x200 +
           param_3[0x2f] * -0xb8 >> 10;
  sVar13 = param_3[0x31];
  sVar14 = param_3[0x33];
  sVar15 = param_3[0x35];
  sVar16 = param_3[0x37];
  sVar17 = param_3[2];
  iVar37 = (int)param_3[10];
  sVar18 = param_3[0x32];
  sVar19 = param_3[0x12];
  sVar20 = param_3[0x36];
  iVar38 = (int)param_3[0x1a];
  sVar21 = param_3[0x22];
  iVar35 = param_3[0xd] * 0x313 + param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 +
           param_3[0xf] * -0x17f >> 10;
  iVar39 = (int)param_3[0x2a];
  sVar22 = param_3[0x16];
  iVar31 = param_3[0x1d] * 0x313 + param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 +
           param_3[0x1f] * -0x17f >> 10;
  sVar23 = param_3[0x26];
  iVar33 = (int)param_3[0x1e];
  iVar29 = (int)param_3[0xe];
  iVar32 = (int)param_3[0x2e];
  iVar30 = param_3[0x2d] * 0x313 + param_3[0x2b] * 0x20e + param_3[0x29] * -0x4b + 0x200 +
           param_3[0x2f] * -0x17f >> 10;
  *(int *)(param_1 + 0x30) = (int)param_3[6];
  iVar27 = _UNK_00112c7c;
  iVar26 = _UNK_00112c78;
  iVar25 = _UNK_00112c74;
  iVar24 = __LC14;
  *(int *)(param_1 + 0x10) = (int)sVar17;
  *(int *)(param_1 + 0x38) = (int)sVar23;
  *(int *)param_1 = sVar1 * 0xda + sVar3 * -0x145 + sVar2 * 0x3a0 + sVar4 * -0xb8 + iVar24 >> 10;
  *(int *)(param_1 + 4) = iVar34 * 0x32a + iVar28 * 0x1aa + iVar36 * -0x168 + iVar25 >> 10;
  *(int *)(param_1 + 8) =
       sVar9 * 0xda + sVar11 * -0x145 + sVar12 * 0x3a0 + sVar10 * -0xb8 + iVar26 >> 10;
  *(int *)(param_1 + 0xc) = iVar34 * -99 + iVar28 * 0x17 + iVar36 * 0x1f6 + iVar27 >> 10;
  *(int *)(param_1 + 0x14) = iVar38 * 0x32a + iVar37 * 0x1aa + 0x200 + iVar39 * -0x168 >> 10;
  *(int *)(param_1 + 0x18) = (int)sVar21;
  *(int *)(param_1 + 0x1c) = iVar38 * -99 + iVar37 * 0x17 + 0x200 + iVar39 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x20) =
       sVar1 * 0x313 + sVar3 * 0x20e + sVar2 * -0x4b + 0x200 + sVar4 * -0x17f >> 10;
  *(int *)(param_1 + 0x24) = iVar31 * 0x32a + iVar35 * 0x1aa + 0x200 + iVar30 * -0x168 >> 10;
  *(int *)(param_1 + 0x28) =
       sVar9 * 0x313 + sVar11 * 0x20e + sVar12 * -0x4b + 0x200 + sVar10 * -0x17f >> 10;
  *(int *)(param_1 + 0x2c) = iVar31 * -99 + iVar35 * 0x17 + 0x200 + iVar30 * 0x1f6 >> 10;
  *(int *)(param_1 + 0x34) = iVar33 * 0x32a + iVar29 * 0x1aa + 0x200 + iVar32 * -0x168 >> 10;
  *(int *)(param_1 + 0x3c) = iVar33 * -99 + iVar29 * 0x17 + 0x200 + iVar32 * 0x1f6 >> 10;
  *(int *)(param_2 + 0x3c) = (int)sVar20;
  *(int *)param_2 = iVar34 * -0x145 + iVar28 * 0x3a0 + iVar36 * 0xda + iVar24 >> 10;
  *(int *)(param_2 + 4) =
       sVar6 * 0xda + sVar5 * -0x145 + sVar7 * 0x3a0 + sVar8 * -0xb8 + iVar25 >> 10;
  *(int *)(param_2 + 8) = iVar34 * 0x20e + iVar28 * -0x4b + iVar36 * 0x313 + iVar26 >> 10;
  *(int *)(param_2 + 0xc) =
       sVar15 * 0xda + sVar14 * -0x145 + sVar13 * 0x3a0 + sVar16 * -0xb8 + iVar27 >> 10;
  *(int *)(param_2 + 0x10) = iVar38 * -0x145 + iVar37 * 0x3a0 + 0x200 + iVar39 * 0xda >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar19;
  *(int *)(param_2 + 0x18) = iVar38 * 0x20e + iVar37 * -0x4b + 0x200 + iVar39 * 0x313 >> 10;
  *(int *)(param_2 + 0x1c) = (int)sVar18;
  *(int *)(param_2 + 0x20) = iVar31 * -0x145 + iVar35 * 0x3a0 + 0x200 + iVar30 * 0xda >> 10;
  *(int *)(param_2 + 0x24) =
       sVar6 * 0x313 + sVar5 * 0x20e + sVar7 * -0x4b + 0x200 + sVar8 * -0x17f >> 10;
  *(int *)(param_2 + 0x28) = iVar35 * -0x4b + iVar31 * 0x20e + 0x200 + iVar30 * 0x313 >> 10;
  *(int *)(param_2 + 0x2c) =
       sVar13 * -0x4b + sVar14 * 0x20e + sVar15 * 0x313 + 0x200 + sVar16 * -0x17f >> 10;
  *(int *)(param_2 + 0x30) = iVar29 * 0x3a0 + iVar33 * -0x145 + 0x200 + iVar32 * 0xda >> 10;
  *(int *)(param_2 + 0x34) = (int)sVar22;
  *(int *)(param_2 + 0x38) = iVar29 * -0x4b + iVar33 * 0x20e + 0x200 + iVar32 * 0x313 >> 10;
  return;
}



/* DCT_Upsample::P_Q<8, 8>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::P_Q<8,8>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  
  iVar44 = (int)param_3[8];
  sVar1 = param_3[0x10];
  iVar50 = (int)param_3[0x18];
  sVar2 = param_3[0x30];
  sVar3 = param_3[0x20];
  iVar51 = (int)param_3[0x28];
  iVar43 = (int)param_3[0x38];
  sVar4 = param_3[3];
  sVar5 = param_3[1];
  sVar6 = param_3[5];
  sVar7 = param_3[9];
  sVar8 = param_3[0xb];
  sVar9 = param_3[0xd];
  sVar10 = param_3[7];
  sVar11 = param_3[0xf];
  sVar12 = param_3[0x13];
  sVar13 = param_3[0x11];
  sVar14 = param_3[0x21];
  sVar15 = param_3[0x23];
  sVar16 = param_3[0x19];
  sVar17 = param_3[0x1b];
  sVar18 = param_3[0x1d];
  sVar19 = param_3[0x1f];
  sVar20 = param_3[0x15];
  iVar40 = sVar9 * -0x168 + sVar8 * 0x32a + sVar7 * 0x1aa + 0x200 + sVar11 * 0x11c >> 10;
  sVar21 = param_3[0x17];
  iVar41 = sVar18 * -0x168 + sVar17 * 0x32a + sVar16 * 0x1aa + 0x200 + sVar19 * 0x11c >> 10;
  sVar22 = param_3[0x25];
  sVar23 = param_3[0x29];
  sVar24 = param_3[0x2b];
  sVar25 = param_3[0x2d];
  sVar26 = param_3[0x27];
  sVar27 = param_3[0x35];
  sVar28 = param_3[0x31];
  sVar29 = param_3[0x3f];
  sVar30 = param_3[0x2f];
  sVar31 = param_3[0x39];
  sVar32 = param_3[0x33];
  iVar45 = sVar25 * -0x168 + sVar24 * 0x32a + sVar23 * 0x1aa + 0x200 + sVar30 * 0x11c >> 10;
  sVar33 = param_3[0x3b];
  sVar34 = param_3[0x37];
  sVar35 = param_3[0x3d];
  sVar36 = param_3[4];
  iVar48 = sVar35 * -0x168 + sVar33 * 0x32a + sVar31 * 0x1aa + 0x200 + sVar29 * 0x11c >> 10;
  iVar52 = (int)param_3[0xc];
  sVar37 = param_3[0x24];
  sVar38 = param_3[0x14];
  iVar53 = (int)param_3[0x1c];
  iVar54 = (int)param_3[0x2c];
  sVar39 = param_3[0x34];
  iVar49 = (int)param_3[0x3c];
  *(int *)param_1 = (int)*param_3;
  iVar46 = sVar25 * 0x1f6 + sVar24 * -99 + sVar23 * 0x17 + 0x200 + sVar30 * 0x377 >> 10;
  *(int *)(param_1 + 8) = (int)sVar3;
  iVar42 = sVar35 * 0x1f6 + sVar33 * -99 + sVar31 * 0x17 + 0x200 + sVar29 * 0x377 >> 10;
  iVar55 = sVar9 * 0x1f6 + sVar8 * -99 + sVar7 * 0x17 + 0x200 + sVar11 * 0x377 >> 10;
  iVar47 = sVar18 * 0x1f6 + sVar17 * -99 + sVar16 * 0x17 + 0x200 + sVar19 * 0x377 >> 10;
  *(int *)(param_1 + 4) =
       iVar51 * -0x168 + iVar50 * 0x32a + iVar44 * 0x1aa + 0x200 + iVar43 * 0x11c >> 10;
  *(int *)(param_1 + 0xc) =
       iVar51 * 0x1f6 + iVar50 * -99 + iVar44 * 0x17 + 0x200 + iVar43 * 0x377 >> 10;
  *(int *)(param_1 + 0x10) =
       sVar6 * -0x168 + sVar4 * 0x32a + sVar5 * 0x1aa + 0x200 + sVar10 * 0x11c >> 10;
  *(int *)(param_1 + 0x14) =
       iVar45 * -0x168 + iVar41 * 0x32a + iVar40 * 0x1aa + 0x200 + iVar48 * 0x11c >> 10;
  *(int *)(param_1 + 0x18) =
       sVar22 * -0x168 + sVar15 * 0x32a + sVar14 * 0x1aa + 0x200 + sVar26 * 0x11c >> 10;
  *(int *)(param_1 + 0x1c) =
       iVar45 * 0x1f6 + iVar41 * -99 + iVar40 * 0x17 + 0x200 + iVar48 * 0x377 >> 10;
  *(int *)(param_1 + 0x20) = (int)sVar36;
  *(int *)(param_1 + 0x24) =
       iVar54 * -0x168 + iVar53 * 0x32a + iVar52 * 0x1aa + 0x200 + iVar49 * 0x11c >> 10;
  *(int *)(param_1 + 0x28) = (int)sVar37;
  *(int *)(param_1 + 0x2c) =
       iVar54 * 0x1f6 + iVar53 * -99 + iVar52 * 0x17 + 0x200 + iVar49 * 0x377 >> 10;
  *(int *)(param_1 + 0x30) =
       sVar6 * 0x1f6 + sVar4 * -99 + sVar5 * 0x17 + 0x200 + sVar10 * 0x377 >> 10;
  *(int *)(param_1 + 0x34) =
       iVar46 * -0x168 + iVar47 * 0x32a + iVar55 * 0x1aa + 0x200 + iVar42 * 0x11c >> 10;
  *(int *)(param_1 + 0x38) =
       sVar22 * 0x1f6 + sVar15 * -99 + sVar14 * 0x17 + 0x200 + sVar26 * 0x377 >> 10;
  *(int *)(param_1 + 0x3c) =
       iVar46 * 0x1f6 + iVar47 * -99 + iVar55 * 0x17 + 0x200 + iVar42 * 0x377 >> 10;
  *(int *)param_2 = iVar51 * 0xda + iVar50 * -0x145 + iVar44 * 0x3a0 + 0x200 + iVar43 * -0xb8 >> 10;
  *(int *)(param_2 + 4) = (int)sVar1;
  *(int *)(param_2 + 0xc) = (int)sVar2;
  *(int *)(param_2 + 8) =
       iVar51 * 0x313 + iVar50 * 0x20e + iVar44 * -0x4b + 0x200 + iVar43 * -0x17f >> 10;
  *(int *)(param_2 + 0x10) =
       iVar45 * 0xda + iVar41 * -0x145 + iVar40 * 0x3a0 + 0x200 + iVar48 * -0xb8 >> 10;
  *(int *)(param_2 + 0x14) =
       sVar20 * -0x168 + sVar12 * 0x32a + sVar13 * 0x1aa + 0x200 + sVar21 * 0x11c >> 10;
  *(int *)(param_2 + 0x18) =
       iVar45 * 0x313 + iVar41 * 0x20e + iVar40 * -0x4b + 0x200 + iVar48 * -0x17f >> 10;
  *(int *)(param_2 + 0x1c) =
       sVar27 * -0x168 + sVar32 * 0x32a + sVar28 * 0x1aa + 0x200 + sVar34 * 0x11c >> 10;
  *(int *)(param_2 + 0x20) =
       iVar54 * 0xda + iVar53 * -0x145 + iVar52 * 0x3a0 + 0x200 + iVar49 * -0xb8 >> 10;
  *(int *)(param_2 + 0x24) = (int)sVar38;
  *(int *)(param_2 + 0x28) =
       iVar54 * 0x313 + iVar53 * 0x20e + iVar52 * -0x4b + 0x200 + iVar49 * -0x17f >> 10;
  *(int *)(param_2 + 0x2c) = (int)sVar39;
  *(int *)(param_2 + 0x30) =
       iVar55 * 0x3a0 + iVar47 * -0x145 + iVar46 * 0xda + 0x200 + iVar42 * -0xb8 >> 10;
  *(int *)(param_2 + 0x34) =
       sVar13 * 0x17 + sVar12 * -99 + sVar20 * 0x1f6 + 0x200 + sVar21 * 0x377 >> 10;
  *(int *)(param_2 + 0x38) =
       iVar55 * -0x4b + iVar47 * 0x20e + iVar46 * 0x313 + 0x200 + iVar42 * -0x17f >> 10;
  *(int *)(param_2 + 0x3c) =
       sVar28 * 0x17 + sVar32 * -99 + sVar27 * 0x1f6 + 0x200 + sVar34 * 0x377 >> 10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DCT_Upsample::R_S<8, 8>::calc(DCT_Upsample::Matrix44&, DCT_Upsample::Matrix44&, short const*) */

void DCT_Upsample::R_S<8,8>::calc(Matrix44 *param_1,Matrix44 *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  
  iVar27 = _UNK_00112c7c;
  iVar26 = _UNK_00112c78;
  iVar25 = _UNK_00112c74;
  iVar24 = __LC14;
  sVar1 = param_3[1];
  sVar2 = param_3[3];
  sVar3 = param_3[5];
  sVar4 = param_3[7];
  sVar5 = param_3[0x11];
  sVar6 = param_3[0x13];
  iVar28 = param_3[9] * 0x3a0 + param_3[0xb] * -0x145 + param_3[0xd] * 0xda + 0x200 +
           param_3[0xf] * -0xb8 >> 10;
  sVar7 = param_3[0x17];
  sVar8 = param_3[0x15];
  sVar9 = param_3[0x25];
  sVar10 = param_3[0x27];
  sVar11 = param_3[0x33];
  sVar12 = param_3[0x35];
  sVar13 = param_3[0x23];
  sVar14 = param_3[0x21];
  iVar31 = param_3[0x1d] * 0xda + param_3[0x1b] * -0x145 + param_3[0x19] * 0x3a0 + 0x200 +
           param_3[0x1f] * -0xb8 >> 10;
  sVar15 = param_3[0x31];
  iVar29 = param_3[0x2d] * 0xda + param_3[0x2b] * -0x145 + param_3[0x29] * 0x3a0 + 0x200 +
           param_3[0x2f] * -0xb8 >> 10;
  sVar16 = param_3[0x37];
  iVar39 = param_3[0x3d] * 0xda + param_3[0x3b] * -0x145 + param_3[0x39] * 0x3a0 + 0x200 +
           param_3[0x3f] * -0xb8 >> 10;
  iVar40 = (int)param_3[10];
  sVar17 = param_3[0x12];
  iVar41 = (int)param_3[0x1a];
  iVar36 = param_3[0xd] * 0x313 + param_3[0xb] * 0x20e + param_3[9] * -0x4b + 0x200 +
           param_3[0xf] * -0x17f >> 10;
  sVar18 = param_3[6];
  iVar33 = param_3[0x2d] * 0x313 + param_3[0x2b] * 0x20e + param_3[0x29] * -0x4b + 0x200 +
           param_3[0x2f] * -0x17f >> 10;
  sVar19 = param_3[0x22];
  sVar20 = param_3[0x16];
  iVar42 = (int)param_3[0x2a];
  sVar21 = param_3[0x32];
  iVar30 = (int)param_3[0xe];
  iVar32 = param_3[0x3d] * 0x313 + param_3[0x3b] * 0x20e + param_3[0x39] * -0x4b + 0x200 +
           param_3[0x3f] * -0x17f >> 10;
  iVar43 = (int)param_3[0x3a];
  iVar35 = (int)param_3[0x1e];
  iVar34 = (int)param_3[0x2e];
  sVar22 = param_3[0x26];
  iVar38 = param_3[0x1d] * 0x313 + param_3[0x1b] * 0x20e + param_3[0x19] * -0x4b + 0x200 +
           param_3[0x1f] * -0x17f >> 10;
  sVar23 = param_3[0x36];
  iVar37 = (int)param_3[0x3e];
  *(int *)(param_1 + 0x10) = (int)param_3[2];
  *(int *)param_1 = sVar3 * 0xda + sVar2 * -0x145 + sVar1 * 0x3a0 + sVar4 * -0xb8 + iVar24 >> 10;
  *(int *)(param_1 + 4) =
       iVar29 * -0x168 + iVar31 * 0x32a + iVar28 * 0x1aa + iVar39 * 0x11c + iVar25 >> 10;
  *(int *)(param_1 + 8) =
       sVar9 * 0xda + sVar13 * -0x145 + sVar14 * 0x3a0 + sVar10 * -0xb8 + iVar26 >> 10;
  *(int *)(param_1 + 0xc) =
       iVar29 * 0x1f6 + iVar31 * -99 + iVar28 * 0x17 + iVar39 * 0x377 + iVar27 >> 10;
  *(int *)(param_1 + 0x14) =
       iVar42 * -0x168 + iVar41 * 0x32a + iVar40 * 0x1aa + 0x200 + iVar43 * 0x11c >> 10;
  *(int *)(param_1 + 0x18) = (int)sVar19;
  *(int *)(param_1 + 0x1c) =
       iVar42 * 0x1f6 + iVar41 * -99 + iVar40 * 0x17 + 0x200 + iVar43 * 0x377 >> 10;
  *(int *)(param_1 + 0x20) =
       sVar3 * 0x313 + sVar2 * 0x20e + sVar1 * -0x4b + 0x200 + sVar4 * -0x17f >> 10;
  *(int *)(param_1 + 0x24) =
       iVar33 * -0x168 + iVar38 * 0x32a + iVar36 * 0x1aa + 0x200 + iVar32 * 0x11c >> 10;
  *(int *)(param_1 + 0x28) =
       sVar9 * 0x313 + sVar13 * 0x20e + sVar14 * -0x4b + 0x200 + sVar10 * -0x17f >> 10;
  *(int *)(param_1 + 0x2c) =
       iVar33 * 0x1f6 + iVar38 * -99 + iVar36 * 0x17 + 0x200 + iVar32 * 0x377 >> 10;
  *(int *)(param_1 + 0x30) = (int)sVar18;
  *(int *)(param_1 + 0x34) =
       iVar34 * -0x168 + iVar35 * 0x32a + iVar30 * 0x1aa + 0x200 + iVar37 * 0x11c >> 10;
  *(int *)(param_1 + 0x38) = (int)sVar22;
  *(int *)(param_1 + 0x3c) =
       iVar34 * 0x1f6 + iVar35 * -99 + iVar30 * 0x17 + 0x200 + iVar37 * 0x377 >> 10;
  *(int *)param_2 = iVar39 * -0xb8 + iVar29 * 0xda + iVar31 * -0x145 + iVar28 * 0x3a0 + iVar24 >> 10
  ;
  *(int *)(param_2 + 4) =
       sVar8 * 0xda + sVar6 * -0x145 + sVar5 * 0x3a0 + sVar7 * -0xb8 + iVar25 >> 10;
  *(int *)(param_2 + 8) =
       iVar39 * -0x17f + iVar29 * 0x313 + iVar31 * 0x20e + iVar28 * -0x4b + iVar26 >> 10;
  *(int *)(param_2 + 0xc) =
       sVar12 * 0xda + sVar11 * -0x145 + sVar15 * 0x3a0 + sVar16 * -0xb8 + iVar27 >> 10;
  *(int *)(param_2 + 0x10) =
       iVar42 * 0xda + iVar41 * -0x145 + iVar40 * 0x3a0 + 0x200 + iVar43 * -0xb8 >> 10;
  *(int *)(param_2 + 0x14) = (int)sVar17;
  *(int *)(param_2 + 0x1c) = (int)sVar21;
  *(int *)(param_2 + 0x18) =
       iVar42 * 0x313 + iVar41 * 0x20e + iVar40 * -0x4b + 0x200 + iVar43 * -0x17f >> 10;
  *(int *)(param_2 + 0x20) =
       iVar33 * 0xda + iVar38 * -0x145 + iVar36 * 0x3a0 + 0x200 + iVar32 * -0xb8 >> 10;
  *(int *)(param_2 + 0x24) =
       sVar8 * 0x313 + sVar6 * 0x20e + sVar5 * -0x4b + 0x200 + sVar7 * -0x17f >> 10;
  *(int *)(param_2 + 0x28) =
       iVar36 * -0x4b + iVar38 * 0x20e + iVar33 * 0x313 + 0x200 + iVar32 * -0x17f >> 10;
  *(int *)(param_2 + 0x2c) =
       sVar15 * -0x4b + sVar11 * 0x20e + sVar12 * 0x313 + 0x200 + sVar16 * -0x17f >> 10;
  *(int *)(param_2 + 0x30) =
       iVar30 * 0x3a0 + iVar35 * -0x145 + iVar34 * 0xda + 0x200 + iVar37 * -0xb8 >> 10;
  *(int *)(param_2 + 0x34) = (int)sVar20;
  *(int *)(param_2 + 0x38) =
       iVar30 * -0x4b + iVar35 * 0x20e + iVar34 * 0x313 + 0x200 + iVar37 * -0x17f >> 10;
  *(int *)(param_2 + 0x3c) = (int)sVar23;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */

void __thiscall jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


