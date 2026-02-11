
long png_image_size(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x1fc);
  if ((0x7fff < uVar2) || (0x7fff < *(ulong *)(param_1 + 0x208))) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x264) == '\0') {
    return (*(ulong *)(param_1 + 0x208) + 1) * (ulong)uVar2;
  }
  lVar4 = 0;
  bVar1 = *(byte *)(param_1 + 0x26a);
  uVar3 = 0;
LAB_001000cf:
  do {
    uVar8 = uVar3;
    uVar3 = uVar8 + 1;
    uVar9 = (uVar8 & 1) << (3U - (char)((int)uVar3 >> 1) & 0x1f);
    if (uVar8 < 2) {
      uVar9 = (~uVar9 & 7) + *(int *)(param_1 + 0x1f8) >> 3;
      if (uVar9 == 0) goto LAB_001000cf;
LAB_00100108:
      if (bVar1 < 8) {
        uVar7 = (ulong)uVar9 * (ulong)bVar1 + 7 >> 3;
      }
      else {
        uVar7 = (ulong)uVar9 * (ulong)(bVar1 >> 3);
      }
      uVar9 = (~uVar8 & 1) << (3U - (char)((int)uVar8 >> 1) & 0x1f);
      if (uVar8 < 3) {
        lVar4 = lVar4 + (uVar7 + 1) * (ulong)((~uVar9 & 7) + uVar2 >> 3);
        goto LAB_001000cf;
      }
      bVar5 = (byte)((int)(8 - uVar8) >> 1);
      lVar4 = lVar4 + (ulong)((((1 << (bVar5 & 0x1f)) + -1) - (uVar9 & 7)) + uVar2 >> (bVar5 & 0x1f)
                             ) * (uVar7 + 1);
    }
    else {
      bVar5 = (byte)((int)(7 - uVar8) >> 1);
      uVar6 = (((1 << (bVar5 & 0x1f)) + -1) - (uVar9 & 7)) + *(int *)(param_1 + 0x1f8);
      bVar5 = bVar5 & 0x1f;
      uVar9 = uVar6 >> bVar5;
      if (uVar6 >> bVar5 != 0) goto LAB_00100108;
    }
    if (uVar3 == 7) {
      return lVar4;
    }
  } while( true );
}



int png_deflate_claim(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  uint local_88;
  undefined2 local_84;
  uint local_82;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x138) != 0) {
    local_84 = 0x203a;
    local_88 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
               param_2 << 0x18;
    local_82 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    png_safecat(&local_88,0x40,10," using zstream");
    png_warning(param_1,&local_88);
    if (*(int *)(param_1 + 0x138) == 0x49444154) {
      iVar2 = -2;
      *(char **)(param_1 + 0x170) = "in use by IDAT";
      goto LAB_001002d0;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  iVar8 = *(int *)(param_1 + 0x1c0);
  iVar7 = *(int *)(param_1 + 0x1c4);
  iVar5 = *(int *)(param_1 + 0x1c8);
  if (param_2 == 0x49444154) {
    if ((*(uint *)(param_1 + 0x130) & 1) == 0) {
      uVar6 = (uint)(*(char *)(param_1 + 0x266) != '\b');
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x1cc);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1d0);
    iVar8 = *(int *)(param_1 + 0x1d4);
    iVar7 = *(int *)(param_1 + 0x1d8);
    iVar5 = *(int *)(param_1 + 0x1dc);
    uVar6 = *(uint *)(param_1 + 0x1e0);
  }
  if (param_3 < 0x4001) {
    uVar1 = 1 << ((byte)(iVar7 + -1) & 0x1f);
    iVar3 = iVar7 + -1;
    if (param_3 + 0x106 <= (ulong)uVar1) {
      while (iVar7 = iVar3, uVar1 = uVar1 >> 1, param_3 + 0x106 <= (ulong)uVar1) {
        iVar3 = iVar7 + -1;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x130) & 2) == 0) {
LAB_0010026f:
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    iVar2 = deflateInit2_(param_1 + 0x140,iVar2,iVar8,iVar7,iVar5,uVar6,"1.3.1");
    uVar4 = 0x70;
    if (iVar2 != 0) {
LAB_001003a3:
      png_zstream_error(param_1,iVar2,uVar4);
      goto LAB_001002d0;
    }
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 2;
  }
  else {
    if ((((*(int *)(param_1 + 0x1e4) != iVar2) || (*(int *)(param_1 + 0x1e8) != iVar8)) ||
        (*(int *)(param_1 + 0x1ec) != iVar7)) ||
       ((*(int *)(param_1 + 0x1f0) != iVar5 || (*(uint *)(param_1 + 500) != uVar6)))) {
      iVar3 = deflateEnd(param_1 + 0x140);
      if (iVar3 != 0) {
        png_warning(param_1,"deflateEnd failed (ignored)");
      }
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffd;
      goto LAB_0010026f;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    iVar2 = deflateReset(param_1 + 0x140);
    uVar4 = extraout_RDX;
    if (iVar2 != 0) goto LAB_001003a3;
  }
  *(uint *)(param_1 + 0x138) = param_2;
  iVar2 = 0;
LAB_001002d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void optimize_cmf_part_0(byte *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  uVar5 = bVar1 & 0xf;
  if (((char)uVar5 == '\b') && ((bVar1 & 0xf0) < 0x71)) {
    uVar2 = (uint)(bVar1 >> 4);
    uVar4 = (ulong)(uint)(1 << (bVar1 >> 4) + 7);
    if (param_2 <= uVar4) {
      do {
        uVar4 = uVar4 >> 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
          iVar3 = 0x800;
          goto LAB_001004e3;
        }
      } while (param_2 <= uVar4);
      uVar5 = uVar2 * 0x10 | 8;
      iVar3 = uVar5 << 8;
LAB_001004e3:
      *param_1 = (byte)uVar5;
      uVar5 = iVar3 + (param_1[1] & 0xe0);
      uVar2 = uVar5 / 0x1f;
      param_1[1] = ((char)(param_1[1] & 0xe0) - (char)uVar5) + '\x1f' +
                   ((char)(uVar2 << 5) - (char)uVar2);
      return;
    }
  }
  return;
}



void png_write_chunk_header_part_0(long param_1,uint param_2,uint param_3)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x474) = 0x22;
  local_28 = (((((((ulong)(param_2 & 0xff) << 8 | (ulong)(param_2 >> 8 & 0xff)) << 8 |
                 (ulong)(param_2 >> 0x10 & 0xff)) << 8 | (ulong)(param_2 >> 0x18)) << 8 |
               (ulong)(byte)param_3) << 8 | (ulong)(byte)(param_3 >> 8)) << 8 |
             (ulong)(param_3 >> 0x10) & 0xff) << 8 | (ulong)(param_3 >> 0x18);
  png_write_data(param_1,&local_28,8);
  *(uint *)(param_1 + 0x218) = param_2;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,(long)&local_28 + 4,4);
  *(undefined4 *)(param_1 + 0x474) = 0x42;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int png_text_compress_constprop_0(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int local_4c;
  
  iVar2 = png_deflate_claim(param_1,param_2,param_3[1]);
  local_4c = iVar2;
  if (iVar2 == 0) {
    uVar1 = *param_3;
    uVar5 = param_3[1];
    *(undefined4 *)(param_1 + 0x160) = 0x400;
    iVar9 = 0x400;
    iVar6 = 0x400;
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    *(long *)(param_1 + 0x158) = (long)param_3 + 0x14;
    puVar7 = (undefined8 *)(param_1 + 0x1b0);
    while( true ) {
      uVar3 = 0xffffffff;
      if (uVar5 < 0x100000000) {
        uVar3 = uVar5;
      }
      *(int *)(param_1 + 0x148) = (int)uVar3;
      puVar4 = puVar7;
      if (iVar9 == 0) {
        if (param_4 + iVar6 < 0) {
          *(undefined4 *)(param_1 + 0x160) = 0;
          *(int *)(param_3 + 2) = iVar6;
          goto LAB_00100757;
        }
        puVar4 = (undefined8 *)*puVar7;
        uVar8 = *(uint *)(param_1 + 0x1b8);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)png_malloc_base(param_1,(ulong)uVar8 + 8);
          if (puVar4 == (undefined8 *)0x0) {
            iVar6 = iVar6 - *(int *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x160) = 0;
            *(int *)(param_3 + 2) = iVar6;
            if (0x7ffffffe < (uint)(param_4 + iVar6)) goto LAB_00100757;
            png_zstream_error(param_1,0xfffffffc);
            *(undefined4 *)(param_1 + 0x138) = 0;
            goto LAB_00100770;
          }
          *puVar4 = 0;
          uVar8 = *(uint *)(param_1 + 0x1b8);
          *puVar7 = puVar4;
        }
        *(uint *)(param_1 + 0x160) = uVar8;
        iVar6 = iVar6 + uVar8;
        *(undefined8 **)(param_1 + 0x158) = puVar4 + 1;
      }
      local_4c = deflate(param_1 + 0x140,(ulong)(uVar5 - uVar3 == 0) << 2);
      uVar8 = *(uint *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x148) = 0;
      uVar5 = (ulong)uVar8 + (uVar5 - uVar3);
      if (local_4c != 0) break;
      iVar9 = *(int *)(param_1 + 0x160);
      puVar7 = puVar4;
    }
    iVar6 = iVar6 - *(int *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(int *)(param_3 + 2) = iVar6;
    if ((uint)(param_4 + iVar6) < 0x7fffffff) {
      png_zstream_error(param_1,local_4c);
      *(undefined4 *)(param_1 + 0x138) = 0;
      if (((local_4c == 1) && (uVar5 == 0)) && (local_4c = iVar2, (ulong)param_3[1] < 0x4001)) {
        optimize_cmf_part_0((long)param_3 + 0x14);
      }
    }
    else {
LAB_00100757:
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(char **)(param_1 + 0x170) = "compressed data too long";
LAB_00100770:
      local_4c = -4;
    }
  }
  return local_4c;
}



void png_write_compressed_data_out(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_2 + 0x14);
  uVar1 = 0x400;
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar3 = *(undefined8 **)(param_1 + 0x1b0);
  while( true ) {
    if (uVar2 <= uVar1) {
      uVar1 = uVar2;
    }
    if (uVar1 != 0) {
      png_write_data(param_1,puVar4,uVar1);
      png_calculate_crc(param_1,puVar4,uVar1);
      uVar2 = uVar2 - uVar1;
    }
    if ((uVar2 == 0) || (puVar3 == (undefined8 *)0x0)) break;
    puVar4 = puVar3 + 1;
    uVar1 = *(uint *)(param_1 + 0x1b8);
    puVar3 = (undefined8 *)*puVar3;
  }
  if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
  return;
}



void png_write_complete_chunk(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    if (0x7fffffff < param_4) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"length exceeds PNG maximum");
    }
    png_write_chunk_header_part_0(param_1,param_2,(int)param_4);
    if ((param_3 != 0) && (param_4 != 0)) {
      png_write_data(param_1,param_3,param_4);
      png_calculate_crc(param_1,param_3,param_4);
    }
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_24,4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_save_uint_32(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  return;
}



void png_save_uint_16(ushort *param_1,ushort param_2)

{
  *param_1 = param_2 << 8 | param_2 >> 8;
  return;
}



void png_write_sig(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x474) = 0x12;
  local_18 = 0xa1a0a0d474e5089;
  png_write_data(param_1,(long)&local_18 + (ulong)*(byte *)(param_1 + 0x26d),
                 (long)(int)(8 - (uint)*(byte *)(param_1 + 0x26d)));
  if (*(byte *)(param_1 + 0x26d) < 3) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x1000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_chunk_start(long param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *param_2;
    png_write_chunk_header_part_0
              (param_1,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18);
    return;
  }
  return;
}



void png_write_chunk_data(long param_1,long param_2,long param_3)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    png_write_data();
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}



void png_write_chunk_end(long param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_14,4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_chunk(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  png_write_complete_chunk
            (param_1,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
            );
  return;
}



void png_free_buffer_list(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    *param_2 = 0;
    do {
      plVar1 = (long *)*plVar2;
      png_free(param_1,plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}



void png_write_IHDR(long param_1,uint param_2,ulong param_3,ulong param_4,uint param_5,int param_6,
                   int param_7,uint param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (6 < param_5) {
switchD_00100bcb_caseD_1:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid image color type specified");
  }
  uVar6 = (ulong)param_2;
  uVar4 = (uint)param_4;
  uVar1 = (undefined1)param_4;
  switch(param_5) {
  case 0:
    if ((0x10 < uVar4) || ((0x10116UL >> (param_4 & 0x3f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale image");
    }
    goto LAB_00100dc8;
  default:
    goto switchD_00100bcb_caseD_1;
  case 2:
    if ((uVar4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGB image");
    }
    uVar2 = 3;
    break;
  case 3:
    if ((8 < uVar4) || ((0x116UL >> (param_4 & 0x3f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for paletted image");
    }
LAB_00100dc8:
    *(undefined1 *)(param_1 + 0x26b) = 1;
    goto joined_r0x00100bea;
  case 4:
    if ((uVar4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    uVar2 = 2;
    break;
  case 6:
    if ((uVar4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGBA image");
    }
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 0x26b) = uVar2;
joined_r0x00100bea:
  if (param_6 != 0) {
    png_warning(param_1,"Invalid compression type specified");
  }
  if (((((*(byte *)(param_1 + 0x3e0) & 4) == 0) || ((*(byte *)(param_1 + 0x12d) & 0x10) != 0)) ||
      ((param_5 & 0xfffffffb) != 2)) || (uVar2 = 0x40, param_7 != 0x40)) {
    if (param_7 != 0) {
      png_warning(param_1,"Invalid filter type specified");
    }
    uVar2 = 0;
  }
  if (param_8 < 2) {
  }
  else {
    png_warning(param_1,"Invalid interlace type specified");
    param_8._0_1_ = 1;
  }
  *(undefined1 *)(param_1 + 0x268) = uVar1;
  *(char *)(param_1 + 0x267) = (char)param_5;
  *(undefined1 *)(param_1 + 0x264) = (undefined1)param_8;
  uVar4 = *(byte *)(param_1 + 0x26b) * uVar4;
  *(undefined1 *)(param_1 + 0x3e4) = uVar2;
  *(undefined1 *)(param_1 + 0x420) = 0;
  *(uint *)(param_1 + 0x1f8) = param_2;
  *(int *)(param_1 + 0x1fc) = (int)param_3;
  bVar3 = (byte)uVar4;
  *(byte *)(param_1 + 0x26a) = bVar3;
  if (bVar3 < 8) {
    uVar5 = (uVar4 & 0xff) * uVar6 + 7 >> 3;
  }
  else {
    uVar5 = (bVar3 >> 3) * uVar6;
  }
  *(byte *)(param_1 + 0x26c) = *(byte *)(param_1 + 0x26b);
  *(ulong *)(param_1 + 0x208) = uVar5;
  *(uint *)(param_1 + 0x204) = param_2;
  *(undefined1 *)(param_1 + 0x269) = uVar1;
  local_46 = 0;
  local_50 = (((((((param_3 & 0xff) << 8 | param_3 >> 8 & 0xff) << 8 | param_3 >> 0x10 & 0xff) << 8
                | (param_3 & 0xffffffff) >> 0x18) << 8 | uVar6 & 0xff) << 8 |
              (ulong)(byte)(param_2 >> 8)) << 8 | (ulong)(param_2 >> 0x10 & 0xff)) << 8 |
             (ulong)(param_2 >> 0x18);
  local_48 = uVar1;
  local_47 = (char)param_5;
  local_45 = uVar2;
  local_44 = (undefined1)param_8;
  png_write_complete_chunk(param_1,0x49484452,&local_50,0xd);
  if (*(char *)(param_1 + 0x266) == '\0') {
    if ((*(char *)(param_1 + 0x267) == '\x03') || (*(byte *)(param_1 + 0x268) < 8)) {
      *(undefined1 *)(param_1 + 0x266) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x266) = 0xf8;
    }
  }
  *(undefined4 *)(param_1 + 300) = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_PLTE(long param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  long in_FS_OFFSET;
  undefined2 local_38;
  undefined1 local_36;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 0x3e0) & 1;
  if (*(byte *)(param_1 + 0x267) == 3) {
    if ((uVar1 == 0 && param_3 == 0) || ((uint)(1 << (*(byte *)(param_1 + 0x268) & 0x1f)) < param_3)
       ) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid number of colors in palette");
    }
  }
  else {
    if ((uVar1 == 0 && param_3 == 0) || (0x100 < param_3)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar2 = "Invalid number of colors in palette";
LAB_00100f5c:
        png_warning(param_1,pcVar2);
        return;
      }
      goto LAB_0010107d;
    }
    if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010107d;
      pcVar2 = "Ignoring request to write a PLTE chunk in grayscale PNG";
      goto LAB_00100f5c;
    }
  }
  *(short *)(param_1 + 600) = (short)param_3;
  png_write_chunk_header_part_0(param_1,0x504c5445,param_3 * 3);
  if (param_3 != 0) {
    puVar3 = param_2;
    do {
      local_38 = *puVar3;
      puVar4 = (undefined2 *)((long)puVar3 + 3);
      local_36 = *(undefined1 *)(puVar3 + 1);
      png_write_data(param_1,&local_38,3);
      png_calculate_crc(param_1,&local_38,3);
      puVar3 = puVar4;
    } while (puVar4 != (undefined2 *)((ulong)param_3 * 3 + (long)param_2));
  }
  uVar1 = *(uint *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x474) = 0x82;
  local_34 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  png_write_data(param_1,&local_34,4);
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010107d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_compress_IDAT(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (*(int *)(param_1 + 0x138) != 0x49444154) {
    plVar3 = *(long **)(param_1 + 0x1b0);
    if (plVar3 == (long *)0x0) {
      puVar8 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_1 + 0x1b8) + 8);
      *(undefined8 **)(param_1 + 0x1b0) = puVar8;
      *puVar8 = 0;
    }
    else {
      plVar9 = (long *)*plVar3;
      if (plVar9 != (long *)0x0) {
        *plVar3 = 0;
        do {
          plVar3 = (long *)*plVar9;
          png_free(param_1,plVar9);
          plVar9 = plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
    uVar5 = png_image_size(param_1);
    iVar4 = png_deflate_claim(param_1,0x49444154,uVar5);
    if (iVar4 != 0) {
LAB_00101357:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x170));
    }
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x1b0) + 8;
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x1b8);
  }
  *(undefined8 *)(param_1 + 0x140) = param_2;
  do {
    while( true ) {
      uVar7 = 0xffffffff;
      if (param_3 < 0x100000000) {
        uVar7 = param_3;
      }
      *(int *)(param_1 + 0x148) = (int)uVar7;
      iVar4 = 0;
      if (param_3 - uVar7 == 0) {
        iVar4 = param_4;
      }
      iVar4 = deflate(param_1 + 0x140,iVar4);
      uVar2 = *(uint *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x148) = 0;
      param_3 = (ulong)uVar2 + (param_3 - uVar7);
      if (*(int *)(param_1 + 0x160) == 0) break;
LAB_00101218:
      if (iVar4 != 0) goto LAB_00101270;
      if (param_3 == 0) {
        if (param_4 != 4) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Z_OK on Z_FINISH with output space");
      }
    }
    uVar2 = *(uint *)(param_1 + 0x1b8);
    uVar7 = (ulong)uVar2;
    lVar1 = *(long *)(param_1 + 0x1b0) + 8;
    if (((*(byte *)(param_1 + 300) & 4) == 0) && (*(char *)(param_1 + 0x420) == '\0')) {
      uVar6 = png_image_size(param_1);
      uVar7 = (ulong)uVar2;
      if (uVar6 < 0x4001) {
        optimize_cmf_part_0(lVar1,uVar6);
      }
    }
    if ((int)uVar7 != 0) {
      png_write_complete_chunk(param_1,0x49444154,lVar1,uVar7 & 0xffffffff);
    }
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
    *(long *)(param_1 + 0x158) = lVar1;
    *(int *)(param_1 + 0x160) = (int)uVar7;
    if (iVar4 != 0) {
LAB_00101270:
      if ((iVar4 == 1) && (param_4 == 4)) {
        iVar4 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x160);
        lVar1 = *(long *)(param_1 + 0x1b0) + 8;
        if ((((*(byte *)(param_1 + 300) & 4) == 0) && (*(char *)(param_1 + 0x420) == '\0')) &&
           (uVar7 = png_image_size(param_1), uVar7 < 0x4001)) {
          optimize_cmf_part_0(lVar1,uVar7);
        }
        if (iVar4 != 0) {
          png_write_complete_chunk(param_1,0x49444154,lVar1,iVar4);
        }
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0xc;
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x138) = 0;
        return;
      }
      png_zstream_error(param_1,iVar4);
      goto LAB_00101357;
    }
    if (param_4 == 0) goto LAB_00101218;
  } while( true );
}



void png_write_IEND(long param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x49454e44,0);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_14,4);
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x10;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_gAMA_fixed(long param_1,uint param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_28 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x67414d41,4);
    png_write_data(param_1,&local_28,4);
    png_calculate_crc(param_1,&local_28,4);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_24,4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_sRGB(long param_1,int param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined1 local_25;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < param_2) {
    png_warning(param_1,"Invalid sRGB rendering intent specified");
  }
  local_25 = (char)param_2;
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x73524742,1);
    png_write_data(param_1,&local_25,1);
    png_calculate_crc(param_1,&local_25,1);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_24,4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_iCCP(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint *local_4a8;
  ulong local_4a0;
  int local_498;
  uint local_8c;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No profile for iCCP chunk");
  }
  uVar1 = *param_3;
  uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar4 < 0x84) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile too short");
  }
  if ((3 < (byte)param_3[2]) && ((uVar1 & 0x3000000) != 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  iVar2 = png_check_keyword(param_1,param_2,local_88);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iCCP: invalid keyword");
  }
  iVar3 = iVar2 + 2;
  local_88[iVar2 + 1] = 0;
  local_4a0 = (ulong)uVar4;
  local_498 = 0;
  local_4a8 = param_3;
  iVar2 = png_text_compress_constprop_0(param_1,0x69434350,&local_4a8,iVar3);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      png_write_compressed_data_out(0,&local_4a8,local_498 + iVar3);
    }
    else {
      png_write_chunk_header_part_0(param_1,0x69434350);
      if (iVar3 == 0) {
        png_write_compressed_data_out(param_1,&local_4a8);
      }
      else {
        png_write_data(param_1,local_88,iVar3);
        png_calculate_crc(param_1,local_88,iVar3);
        png_write_compressed_data_out(param_1,&local_4a8);
      }
      uVar1 = *(uint *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x474) = 0x82;
      local_8c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      png_write_data(param_1,&local_8c,4);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,*(undefined8 *)(param_1 + 0x170));
}



void png_write_sPLT(long param_1,undefined8 *param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  long in_FS_OFFSET;
  uint local_a8;
  uint local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  uint local_9e;
  undefined1 local_98 [88];
  long local_40;
  
  iVar7 = *(int *)(param_2 + 3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (uint)(*(char *)(param_2 + 1) != '\b') * 4 + 6;
  iVar9 = png_check_keyword(param_1,*param_2,local_98);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"sPLT: invalid keyword");
  }
  if (param_1 == 0) {
    uVar10 = (ulong)*(int *)(param_2 + 3);
    puVar11 = (ushort *)param_2[2];
    if (puVar11 + uVar10 * 5 <= puVar11) goto LAB_00101937;
LAB_001017ee:
    puVar12 = puVar11;
    do {
      uVar2 = puVar12[4];
      uVar3 = puVar12[2];
      local_9f = (undefined1)uVar3;
      uVar4 = *puVar12;
      uVar5 = puVar12[1];
      uVar6 = puVar12[3];
      if (*(char *)(param_2 + 1) == '\b') {
        local_a4 = (((uint)(byte)uVar6 << 8 | uVar3 & 0xff) << 8 | (uint)(byte)uVar5) << 8 |
                   (uint)(byte)uVar4;
        local_a0 = (undefined1)(uVar2 >> 8);
        local_9f = (char)uVar2;
      }
      else {
        local_a0 = (undefined1)(uVar3 >> 8);
        local_a4 = (((uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8)) << 8 | uVar4 & 0xff) << 8 |
                   (uint)(byte)(uVar4 >> 8);
        local_9e = (((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) << 8 | uVar6 & 0xff) << 8 |
                   (uint)(uVar6 >> 8);
      }
      if (param_1 != 0) {
        png_write_data(param_1,&local_a4,iVar1);
        png_calculate_crc(param_1,&local_a4,iVar1);
        uVar10 = (ulong)*(uint *)(param_2 + 3);
        puVar11 = (ushort *)param_2[2];
      }
      puVar12 = puVar12 + 5;
    } while (puVar12 < puVar11 + (long)(int)uVar10 * 5);
    if (param_1 == 0) goto LAB_00101937;
  }
  else {
    iVar13 = iVar9 + 1;
    png_write_chunk_header_part_0(param_1,0x73504c54,iVar9 + 2 + iVar7 * iVar1);
    if (iVar13 != 0) {
      png_write_data(param_1,local_98,iVar13);
      png_calculate_crc(param_1,local_98,iVar13);
    }
    png_write_data(param_1,param_2 + 1,1);
    png_calculate_crc(param_1,param_2 + 1,1);
    uVar10 = (ulong)*(int *)(param_2 + 3);
    puVar11 = (ushort *)param_2[2];
    if (puVar11 < puVar11 + uVar10 * 5) goto LAB_001017ee;
  }
  uVar8 = *(uint *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x474) = 0x82;
  local_a8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  png_write_data(param_1,&local_a8,4);
LAB_00101937:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_write_sBIT(long param_1,char *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined2 local_14;
  char local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 2) == 0) {
    bVar1 = param_2[3];
    if ((bVar1 != 0) && (bVar1 <= *(byte *)(param_1 + 0x269))) {
      local_14 = CONCAT11(local_14._1_1_,bVar1);
      lVar2 = 1;
      goto LAB_00101a51;
    }
  }
  else {
    bVar1 = 8;
    if (param_3 != 3) {
      bVar1 = *(byte *)(param_1 + 0x269);
    }
    if ((((byte)(*param_2 - 1U) < bVar1) && ((byte)(param_2[1] - 1U) < bVar1)) &&
       ((byte)(param_2[2] - 1U) < bVar1)) {
      lVar2 = 3;
      local_14 = *(undefined2 *)param_2;
      local_12 = param_2[2];
LAB_00101a51:
      if ((param_3 & 4) != 0) {
        bVar1 = param_2[4];
        if ((bVar1 == 0) || (*(byte *)(param_1 + 0x269) < bVar1)) goto LAB_00101a10;
        *(byte *)((long)&local_14 + lVar2) = bVar1;
        lVar2 = lVar2 + 1;
      }
      png_write_complete_chunk(param_1,0x73424954,&local_14,lVar2);
      goto LAB_00101a1c;
    }
  }
LAB_00101a10:
  png_warning(param_1,"Invalid sBIT depth specified");
LAB_00101a1c:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_write_cHRM_fixed(undefined8 param_1,undefined4 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  png_save_int_32(auStack_48,param_2[6]);
  png_save_int_32(local_44,param_2[7]);
  png_save_int_32(local_40,*param_2);
  png_save_int_32(local_3c,param_2[1]);
  png_save_int_32(local_38,param_2[2]);
  png_save_int_32(local_34,param_2[3]);
  png_save_int_32(local_30,param_2[4]);
  png_save_int_32(local_2c,param_2[5]);
  png_write_complete_chunk(param_1,0x6348524d,auStack_48,0x20);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_tRNS(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  long in_FS_OFFSET;
  uint local_18;
  ushort local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 3) {
    if ((param_4 < 1) || ((int)(uint)*(ushort *)(param_1 + 600) < param_4)) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_app_warning(param_1,"Invalid number of transparent colors specified",0);
        return;
      }
    }
    else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_write_complete_chunk(param_1,0x74524e53,param_2,(long)param_4);
      return;
    }
  }
  else {
    if (param_5 == 0) {
      if (1 << (*(byte *)(param_1 + 0x268) & 0x1f) <= (int)(uint)*(ushort *)(param_3 + 8)) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_app_warning(param_1,"Ignoring attempt to write tRNS chunk out-of-range for bit_depth")
          ;
          return;
        }
        goto LAB_00101d29;
      }
      local_18 = CONCAT22(local_18._2_2_,
                          *(ushort *)(param_3 + 8) << 8 | *(ushort *)(param_3 + 8) >> 8);
      png_write_complete_chunk(param_1,0x74524e53,&local_18,2);
    }
    else {
      if (param_5 != 2) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_app_warning(param_1,"Can\'t write tRNS with an alpha channel",0);
          return;
        }
        goto LAB_00101d29;
      }
      bVar2 = (byte)(*(ushort *)(param_3 + 4) >> 8);
      bVar1 = (byte)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
      local_18 = (((*(ushort *)(param_3 + 4) & 0xff) << 8 | (uint)bVar2) << 8 |
                 (uint)(byte)*(undefined2 *)(param_3 + 2)) << 8 | (uint)bVar1;
      local_14 = *(ushort *)(param_3 + 6) << 8 | *(ushort *)(param_3 + 6) >> 8;
      if ((*(char *)(param_1 + 0x268) == '\b') &&
         ((bVar1 != 0 || bVar2 != 0) || *(char *)(param_3 + 7) != '\0')) {
        png_app_warning(param_1,"Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
      }
      else {
        png_write_complete_chunk(param_1,0x74524e53,&local_18,6);
      }
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101d29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_bKGD(long param_1,byte *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  long in_FS_OFFSET;
  uint local_18;
  ushort local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = 0;
  if (param_3 == 3) {
    uVar1 = *(ushort *)(param_1 + 600);
    if (uVar1 == 0) {
      if ((*(byte *)(param_1 + 0x3e0) & 1) != 0) {
        bVar3 = *param_2;
LAB_00101e5a:
        local_18 = CONCAT31(local_18._1_3_,bVar3);
        png_write_complete_chunk(param_1,0x624b4744,&local_18,1);
        goto LAB_00101d96;
      }
    }
    else {
      bVar3 = *param_2;
      if (bVar3 < uVar1) goto LAB_00101e5a;
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_warning(param_1,"Invalid background palette index",uVar1,bVar3);
      return;
    }
  }
  else {
    if ((param_3 & 2) == 0) {
      if (1 << (*(byte *)(param_1 + 0x268) & 0x1f) <= (int)(uint)*(ushort *)(param_2 + 8)) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_warning(param_1,"Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
          return;
        }
        goto LAB_00101eb9;
      }
      local_18 = CONCAT22(local_18._2_2_,
                          *(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8);
      png_write_complete_chunk(param_1,0x624b4744,&local_18,2);
    }
    else {
      bVar3 = (byte)(*(ushort *)(param_2 + 2) >> 8);
      cVar2 = (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8);
      local_18 = ((uint)CONCAT11((char)*(undefined2 *)(param_2 + 4),cVar2) << 8 |
                 *(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)bVar3;
      local_14 = *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8;
      if ((*(byte *)(param_1 + 0x268) == 8) && ((bVar3 != 0 || cVar2 != '\0') || param_2[7] != 0)) {
        png_warning(param_1,"Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
      }
      else {
        png_write_complete_chunk(param_1,0x624b4744,&local_18,6);
      }
    }
LAB_00101d96:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101eb9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_cICP(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                   undefined1 param_5)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x63494350,4);
    local_28 = CONCAT31(CONCAT21(CONCAT11(param_5,param_4),param_3),param_2);
    png_write_data(param_1,&local_28,4);
    png_calculate_crc(param_1,&local_28,4);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_24,4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_eXIf(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_35;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (0 < param_3) goto LAB_00101fd1;
  }
  else {
    png_write_chunk_header_part_0(param_1,0x65584966);
    if (0 < param_3) {
LAB_00101fd1:
      lVar2 = 0;
LAB_00101fd3:
      local_35 = *(undefined1 *)(param_2 + lVar2);
      if (param_1 == 0) goto LAB_00102070;
      while( true ) {
        lVar2 = lVar2 + 1;
        png_write_data(param_1,&local_35,1);
        png_calculate_crc(param_1,&local_35,1);
        if (param_3 <= (int)lVar2) break;
        local_35 = *(undefined1 *)(param_2 + lVar2);
      }
      if (param_1 == 0) goto LAB_0010204f;
    }
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_34 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_34,4);
  }
LAB_0010204f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102070:
  lVar2 = lVar2 + 1;
  if (param_3 <= (int)lVar2) goto LAB_0010204f;
  goto LAB_00101fd3;
}



void png_write_hIST(long param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  ushort local_37;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)(uint)*(ushort *)(param_1 + 600) < param_3) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_warning(param_1,"Invalid number of histogram entries specified");
      return;
    }
  }
  else {
    png_write_chunk_header_part_0(param_1,0x68495354,param_3 * 2);
    if (0 < param_3) {
      puVar1 = param_2 + param_3;
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        local_37 = uVar2 << 8 | uVar2 >> 8;
        png_write_data(param_1,&local_37,2);
        png_calculate_crc(param_1,&local_37,2);
      } while (puVar1 != param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_34 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    png_write_data(param_1,&local_34,4);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_tEXt(long param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = png_check_keyword(param_1,param_2,local_88);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    iVar4 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = strlen(param_3);
    if (0x7ffffffe - iVar2 < sVar3) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
    iVar4 = (int)sVar3;
  }
  iVar2 = iVar2 + 1;
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x74455874,iVar4 + iVar2);
    if (iVar2 != 0) {
      png_write_data(param_1,local_88,iVar2);
      png_calculate_crc(param_1,local_88,iVar2);
    }
    if ((sVar3 != 0) && (param_3 != (char *)0x0)) {
      png_write_data(param_1,param_3,sVar3);
      png_calculate_crc(param_1,param_3,sVar3);
    }
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_8c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_8c,4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_zTXt(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_4a8;
  size_t local_4a0;
  int local_498;
  uint local_8c;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == -1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_write_tEXt();
      return;
    }
  }
  else {
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid compression type");
    }
    iVar2 = png_check_keyword(param_1,param_2,local_88);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid keyword");
    }
    iVar3 = iVar2 + 2;
    local_4a0 = 0;
    local_88[iVar2 + 1] = 0;
    if (param_3 != (char *)0x0) {
      local_4a0 = strlen(param_3);
    }
    local_498 = 0;
    local_4a8 = param_3;
    iVar2 = png_text_compress_constprop_0(param_1,0x7a545874,&local_4a8,iVar3);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x170));
    }
    if (param_1 == 0) {
      png_write_compressed_data_out(0,&local_4a8,local_498 + iVar3);
    }
    else {
      png_write_chunk_header_part_0(param_1,0x7a545874);
      if (iVar3 == 0) {
        png_write_compressed_data_out(param_1,&local_4a8);
      }
      else {
        png_write_data(param_1,local_88,iVar3);
        png_calculate_crc(param_1,local_88,iVar3);
        png_write_compressed_data_out(param_1,&local_4a8);
      }
      uVar1 = *(uint *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x474) = 0x82;
      local_8c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      png_write_data(param_1,&local_8c,4);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_iTXt(long param_1,int param_2,undefined8 param_3,char *param_4,char *param_5,
                   char *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  char **local_4c8;
  char *local_4b8;
  ulong local_4b0;
  int local_4a8;
  uint local_9c;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = png_check_keyword(param_1,param_3,local_98);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid keyword");
  }
  if (param_2 == 1) {
LAB_001026c8:
    bVar2 = false;
    local_98[iVar3 + 1] = 0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 == -1) goto LAB_001026c8;
      if (param_2 != 0) goto LAB_001026b2;
    }
    else if (param_2 != 2) {
LAB_001026b2:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: invalid compression");
    }
    bVar2 = true;
    local_98[iVar3 + 1] = 1;
  }
  iVar4 = iVar3 + 3;
  local_98[iVar3 + 2] = 0;
  if (param_4 == (char *)0x0) {
    uVar7 = 1;
    param_4 = "";
    if (param_5 != (char *)0x0) goto LAB_0010256f;
LAB_00102816:
    uVar8 = 1;
    param_5 = "";
    if (param_6 != (char *)0x0) goto LAB_00102584;
LAB_0010282c:
    local_4b0 = 0;
    param_6 = "";
  }
  else {
    sVar5 = strlen(param_4);
    uVar7 = sVar5 + 1;
    if (param_5 == (char *)0x0) goto LAB_00102816;
LAB_0010256f:
    sVar5 = strlen(param_5);
    uVar8 = sVar5 + 1;
    if (param_6 == (char *)0x0) goto LAB_0010282c;
LAB_00102584:
    local_4b0 = strlen(param_6);
  }
  iVar3 = 0x7fffffff;
  if (uVar7 <= 0x7fffffff - iVar4) {
    iVar6 = iVar4 + (int)uVar7;
    iVar3 = 0x7fffffff;
    if (uVar8 <= 0x7fffffff - iVar6) {
      iVar3 = iVar6 + (int)uVar8;
    }
  }
  local_4a8 = 0;
  local_4b8 = param_6;
  if (bVar2) {
    iVar6 = png_text_compress_constprop_0(param_1,0x69545874);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x170));
    }
    if (param_1 == 0) {
      png_write_compressed_data_out(0,&local_4b8);
      goto LAB_0010267b;
    }
    png_write_chunk_header_part_0(param_1,0x69545874,iVar3 + local_4a8);
    if (iVar4 != 0) goto LAB_001026e8;
    png_write_data(param_1,param_4,uVar7);
    png_calculate_crc(param_1,param_4,uVar7);
    png_write_data(param_1,param_5,uVar8);
    png_calculate_crc(param_1,param_5,uVar8);
LAB_00102758:
    local_4c8 = &local_4b8;
    png_write_compressed_data_out(param_1,local_4c8);
  }
  else {
    if (0x7fffffff - iVar3 < local_4b0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: uncompressed text too long");
    }
    local_4a8 = (int)local_4b0;
    if (param_1 == 0) goto LAB_0010267b;
    png_write_chunk_header_part_0(param_1,0x69545874,iVar3 + local_4a8);
    if (iVar4 == 0) {
      png_write_data(param_1,param_4,uVar7);
      png_calculate_crc(param_1,param_4,uVar7);
      png_write_data(param_1,param_5,uVar8);
      png_calculate_crc(param_1,param_5,uVar8);
    }
    else {
LAB_001026e8:
      png_write_data(param_1,local_98);
      png_calculate_crc(param_1,local_98,iVar4);
      png_write_data(param_1,param_4,uVar7);
      png_calculate_crc(param_1,param_4,uVar7);
      png_write_data(param_1,param_5,uVar8);
      png_calculate_crc(param_1,param_5,uVar8);
      if (bVar2) goto LAB_00102758;
    }
    iVar3 = local_4a8;
    if (local_4a8 != 0) {
      png_write_data(param_1,param_6,local_4a8);
      png_calculate_crc(param_1,param_6,iVar3);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x474) = 0x82;
  local_9c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  png_write_data(param_1,&local_9c,4);
LAB_0010267b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_write_oFFs(long param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_40;
  undefined1 local_39 [4];
  undefined1 local_35 [4];
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for oFFs chunk");
  }
  png_save_int_32(local_39,param_2);
  png_save_int_32(local_35,param_3);
  local_31 = (undefined1)param_4;
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x6f464673,9);
    png_write_data(param_1,local_39,9);
    png_calculate_crc(param_1,local_39,9);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_40 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_40,4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_pCAL(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,int param_6,char *param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_d0;
  undefined1 local_cc;
  uint local_a8;
  undefined1 local_a2 [4];
  undefined1 local_9e [4];
  undefined2 local_9a;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < param_5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unrecognized equation type for pCAL chunk");
  }
  iVar2 = png_check_keyword(param_1,param_2,local_98);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"pCAL: invalid keyword");
  }
  sVar3 = strlen(param_7);
  uVar8 = (ulong)(iVar2 + 1);
  lVar4 = (sVar3 + 1) - (ulong)(param_6 == 0);
  uVar7 = uVar8 + 10 + lVar4;
  lVar5 = png_malloc(param_1,(long)param_6 * 8);
  local_d0 = (undefined1)param_6;
  local_cc = (undefined1)param_5;
  if (param_6 < 1) {
    uVar7 = uVar7 & 0xffffffff;
    if (param_1 == 0) {
      png_save_int_32(local_a2,param_3,uVar7);
      png_save_int_32(local_9e,param_4);
      local_9a = CONCAT11(local_d0,local_cc);
      png_free(0,lVar5);
      goto LAB_00102b4c;
    }
LAB_00102aa5:
    png_write_chunk_header_part_0(param_1,0x7043414c,uVar7);
    if (uVar8 != 0) {
      png_write_data(param_1,local_98,uVar8);
      png_calculate_crc(param_1,local_98,uVar8);
    }
    png_save_int_32(local_a2,param_3);
    png_save_int_32(local_9e,param_4);
    local_9a = CONCAT11(local_d0,local_cc);
    png_write_data(param_1,local_a2,10);
    png_calculate_crc(param_1,local_a2,10);
    if (lVar4 != 0) {
      png_write_data(param_1,param_7,lVar4);
      png_calculate_crc(param_1,param_7,lVar4);
      if (0 < param_6) goto LAB_00102bda;
    }
    png_free(param_1,lVar5);
  }
  else {
    lVar9 = 0;
    do {
      sVar3 = strlen(*(char **)(param_8 + lVar9 * 8));
      lVar6 = (param_6 + -1 != (int)lVar9) + sVar3;
      *(long *)(lVar5 + lVar9 * 8) = lVar6;
      lVar9 = lVar9 + 1;
      uVar7 = uVar7 + lVar6;
    } while (param_6 != lVar9);
    if (param_1 != 0) {
      uVar7 = uVar7 & 0xffffffff;
      goto LAB_00102aa5;
    }
    png_save_int_32(local_a2,param_3);
    png_save_int_32(local_9e,param_4);
    local_9a = CONCAT11(local_d0,local_cc);
LAB_00102bda:
    lVar4 = 0;
    if (param_1 == 0) {
      do {
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < param_6);
      png_free(0,lVar5);
      goto LAB_00102b4c;
    }
    do {
      lVar9 = *(long *)(param_8 + lVar4 * 8);
      lVar6 = *(long *)(lVar5 + lVar4 * 8);
      if ((lVar9 != 0) && (lVar6 != 0)) {
        png_write_data(param_1,lVar9,lVar6);
        png_calculate_crc(param_1,lVar9,lVar6);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < param_6);
    png_free(param_1,lVar5);
    if (param_1 == 0) goto LAB_00102b4c;
  }
  uVar1 = *(uint *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x474) = 0x82;
  local_a8 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  png_write_data(param_1,&local_a8,4);
LAB_00102b4c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_sCAL_s(undefined8 param_1,undefined1 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_90 [5];
  undefined4 uStack_8b;
  undefined1 local_87 [71];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _auStack_90 = (undefined *)0x102d56;
  sVar3 = strlen(param_3);
  _auStack_90 = (undefined *)0x102d61;
  sVar4 = strlen(param_4);
  uVar1 = sVar3 + 2 + sVar4;
  if (uVar1 < 0x41) {
    uVar6 = sVar3 + 1;
    uVar2 = (uint)uVar6;
    uStack_8b._3_1_ = param_2;
    if (uVar2 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar2 != 0) && (local_87[0] = *param_3, (uVar6 & 2) != 0)) {
          *(undefined2 *)(auStack_90 + (uVar6 & 0xffffffff) + 7) =
               *(undefined2 *)(param_3 + ((uVar6 & 0xffffffff) - 2));
        }
      }
      else {
        local_87._0_4_ = *(undefined4 *)param_3;
        *(undefined4 *)(auStack_90 + (uVar6 & 0xffffffff) + 5) =
             *(undefined4 *)(param_3 + ((uVar6 & 0xffffffff) - 4));
      }
    }
    else {
      local_87._0_8_ = *(undefined8 *)param_3;
      *(undefined8 *)(auStack_90 + (uVar6 & 0xffffffff) + 1) =
           *(undefined8 *)(param_3 + ((uVar6 & 0xffffffff) - 8));
      uVar2 = uVar2 + (int)(local_87 + -(long)(local_87 + 7)) & 0xfffffff8;
      if (7 < uVar2) {
        uVar5 = 0;
        do {
          uVar6 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)(local_87 + 7 + uVar6) =
               *(undefined8 *)(param_3 + (uVar6 - (long)(local_87 + -(long)(local_87 + 7))));
        } while (uVar5 < uVar2);
      }
    }
    _auStack_90 = (undefined *)0x102de6;
    __memcpy_chk(local_87 + sVar3 + 1,param_4,sVar4,0x40 - (sVar3 + 2));
    _auStack_90 = (undefined *)0x102df9;
    png_write_complete_chunk(param_1,0x7343414c,(long)&uStack_8b + 3,uVar1);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    png_warning(param_1,"Can\'t write sCAL (buffer too small)");
    return;
  }
                    /* WARNING: Subroutine does not return */
  _auStack_90 = &UNK_00102e93;
  __stack_chk_fail();
}



void png_write_pHYs(long param_1,uint param_2,ulong param_3,int param_4)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_44;
  ulong local_40;
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for pHYs chunk");
  }
  local_40 = (((((((param_3 & 0xff) << 8 | (param_3 & 0xffffffff) >> 8 & 0xff) << 8 |
                 (param_3 & 0xffffffff) >> 0x10 & 0xff) << 8 | param_3 >> 0x18 & 0xff) << 8 |
               (ulong)param_2 & 0xff) << 8 | (ulong)(byte)(param_2 >> 8)) << 8 |
             (ulong)(param_2 >> 0x10) & 0xff) << 8 | (ulong)(param_2 >> 0x18);
  local_38 = (char)param_4;
  if (param_1 != 0) {
    png_write_chunk_header_part_0(param_1,0x70485973,9);
    png_write_data(param_1,&local_40,9);
    png_calculate_crc(param_1,&local_40,9);
    uVar1 = *(uint *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x474) = 0x82;
    local_44 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,&local_44,4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_tIME(undefined8 param_1,ushort *param_2)

{
  long in_FS_OFFSET;
  uint local_18;
  undefined2 local_14;
  byte local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((byte)((char)param_2[1] - 1U) < 0xc) {
    if (((byte)(*(char *)((long)param_2 + 3) - 1U) < 0x1f) && ((byte)param_2[2] < 0x18)) {
      if ((byte)param_2[3] < 0x3d) {
        local_18 = ((uint)CONCAT11(*(char *)((long)param_2 + 3),(char)param_2[1]) << 8 |
                   *param_2 & 0xff) << 8 | (uint)(byte)(*param_2 >> 8);
        local_14 = CONCAT11(*(undefined1 *)((long)param_2 + 5),(byte)param_2[2]);
        local_12 = (byte)param_2[3];
        png_write_complete_chunk(param_1,0x74494d45,&local_18,7);
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001030a9;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    png_warning(param_1,"Invalid time specified for tIME chunk");
    return;
  }
LAB_001030a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_start_row(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x26c) * (uint)*(byte *)(param_1 + 0x269);
  if (uVar1 < 8) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x1f8) * (long)(int)uVar1 + 7 >> 3;
  }
  else {
    uVar5 = ((ulong)(long)(int)uVar1 >> 3) * (ulong)*(uint *)(param_1 + 0x1f8);
  }
  lVar6 = uVar5 + 1;
  *(ushort *)(param_1 + 0x26e) = CONCAT11(*(undefined1 *)(param_1 + 0x26a),(char)uVar1);
  puVar2 = (undefined1 *)png_malloc(param_1,lVar6);
  bVar7 = *(byte *)(param_1 + 0x266);
  *(undefined1 **)(param_1 + 0x228) = puVar2;
  *puVar2 = 0;
  uVar1 = *(uint *)(param_1 + 0x1fc);
  if (uVar1 == 1) {
    if (*(int *)(param_1 + 0x1f8) != 1) {
      bVar7 = bVar7 & 0x1f;
      goto joined_r0x001031d7;
    }
    uVar4 = 1;
    if ((bVar7 & 0xf) != 0) {
      *(byte *)(param_1 + 0x266) = bVar7 & 0xf;
      goto LAB_0010316d;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1f8) == 1) {
      bVar7 = bVar7 & 0x2f;
    }
joined_r0x001031d7:
    if (bVar7 != 0) {
      *(byte *)(param_1 + 0x266) = bVar7;
      if (0xf < bVar7) {
        if (*(long *)(param_1 + 0x230) == 0) {
          uVar3 = png_malloc(param_1,lVar6);
          *(undefined8 *)(param_1 + 0x230) = uVar3;
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if (-1 < (char)bVar7) goto LAB_00103157;
            }
            else if ((char)bVar7 < '\0') goto LAB_00103238;
joined_r0x0010328b:
            if ((bVar7 & 0x10) == 0) goto LAB_0010324a;
          }
          else if (((bVar7 & 0x40) == 0) && (-1 < (char)bVar7)) goto joined_r0x0010328b;
LAB_00103238:
          uVar3 = png_malloc(param_1,lVar6);
          *(undefined8 *)(param_1 + 0x238) = uVar3;
LAB_0010324a:
          uVar3 = png_calloc(param_1,lVar6);
          *(undefined8 *)(param_1 + 0x220) = uVar3;
        }
        else {
LAB_00103157:
          if (0x1f < bVar7) goto LAB_0010324a;
        }
        uVar1 = *(uint *)(param_1 + 0x1fc);
      }
      uVar4 = *(uint *)(param_1 + 0x1f8);
      goto LAB_0010316d;
    }
    uVar4 = *(uint *)(param_1 + 0x1f8);
  }
  *(undefined1 *)(param_1 + 0x266) = 8;
LAB_0010316d:
  if ((*(char *)(param_1 + 0x264) != '\0') && ((*(byte *)(param_1 + 0x134) & 2) == 0)) {
    uVar1 = uVar1 + 7 >> 3;
    uVar4 = uVar4 + 7 >> 3;
  }
  *(uint *)(param_1 + 0x200) = uVar1;
  *(uint *)(param_1 + 0x204) = uVar4;
  return;
}



void png_write_finish_row(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(int *)(param_1 + 0x214) + 1;
  *(uint *)(param_1 + 0x214) = uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x200)) {
    return;
  }
  if (*(char *)(param_1 + 0x264) != '\0') {
    *(undefined4 *)(param_1 + 0x214) = 0;
    bVar4 = *(char *)(param_1 + 0x265) + 1;
    if ((*(byte *)(param_1 + 0x134) & 2) == 0) {
      uVar5 = (ulong)bVar4;
      do {
        bVar4 = (byte)uVar5;
        if (6 < bVar4) {
          *(byte *)(param_1 + 0x265) = bVar4;
          goto LAB_001032fa;
        }
        uVar7 = (uint)*(byte *)((long)&png_pass_inc + uVar5);
        bVar2 = *(byte *)((long)&png_pass_yinc + uVar5);
        uVar6 = ((uVar7 - 1) + *(int *)(param_1 + 0x1f8)) -
                (uint)*(byte *)((long)&png_pass_start + uVar5);
        *(uint *)(param_1 + 0x204) = uVar6 / uVar7;
        pbVar1 = (byte *)((long)&png_pass_ystart + uVar5);
        uVar5 = uVar5 + 1;
        uVar3 = ((bVar2 - 1) + *(int *)(param_1 + 0x1fc)) - (uint)*pbVar1;
        *(uint *)(param_1 + 0x200) = uVar3 / bVar2;
      } while ((uVar3 < bVar2) || (uVar6 < uVar7));
      *(byte *)(param_1 + 0x265) = bVar4;
    }
    else {
      *(byte *)(param_1 + 0x265) = bVar4;
      if (6 < bVar4) goto LAB_001032fa;
    }
    if (*(void **)(param_1 + 0x220) != (void *)0x0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x26c) * (uint)*(byte *)(param_1 + 0x269);
      if (uVar3 < 8) {
        uVar5 = (ulong)*(uint *)(param_1 + 0x1f8) * (long)(int)uVar3 + 7 >> 3;
      }
      else {
        uVar5 = ((ulong)(long)(int)uVar3 >> 3) * (ulong)*(uint *)(param_1 + 0x1f8);
      }
      memset(*(void **)(param_1 + 0x220),0,uVar5 + 1);
      return;
    }
    return;
  }
LAB_001032fa:
  png_compress_IDAT(param_1,0,0,4);
  return;
}



void png_do_write_interlace(uint *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  
  if (5 < param_3) {
    return;
  }
  lVar6 = (long)param_3;
  uVar9 = (uint)*(byte *)((long)&png_pass_start + lVar6);
  bVar1 = *(byte *)((long)param_1 + 0x13);
  uVar7 = (ulong)bVar1;
  uVar10 = *param_1;
  puVar16 = param_2;
  if (bVar1 == 2) {
    bVar1 = *(byte *)((long)&png_pass_inc + lVar6);
    uVar4 = (ulong)bVar1;
    if (uVar10 <= uVar9) {
LAB_00103738:
      uVar4 = ((uVar10 - 1) + ((int)uVar4 - uVar9)) / uVar4;
      *param_1 = (uint)uVar4;
      goto LAB_00103749;
    }
    uVar7 = (ulong)uVar9;
    uVar11 = 0;
    iVar12 = 6;
    do {
      while( true ) {
        uVar11 = uVar11 | ((int)(uint)*(byte *)((long)param_2 + (uVar7 >> 2)) >>
                           (~(byte)uVar7 * '\x02' & 6) & 3U) << ((byte)iVar12 & 0x1f);
        uVar13 = (undefined1)uVar11;
        if (iVar12 == 0) break;
        uVar5 = (int)uVar7 + (uint)bVar1;
        uVar7 = (ulong)uVar5;
        iVar12 = iVar12 + -2;
        if (uVar10 <= uVar5) goto LAB_001036a4;
      }
      uVar5 = (int)uVar7 + (uint)bVar1;
      uVar7 = (ulong)uVar5;
      *(undefined1 *)puVar16 = uVar13;
      iVar12 = 6;
      puVar16 = (undefined8 *)((long)puVar16 + 1);
      uVar11 = 0;
      uVar13 = 0;
    } while (uVar5 < uVar10);
LAB_001036a4:
    if (iVar12 == 6) goto LAB_00103564;
LAB_001035f4:
    *(undefined1 *)puVar16 = uVar13;
    uVar10 = *param_1;
    uVar7 = (ulong)*(byte *)((long)param_1 + 0x13);
  }
  else {
    if (bVar1 == 4) {
      bVar1 = *(byte *)((long)&png_pass_inc + lVar6);
      uVar4 = (ulong)bVar1;
      if (uVar10 <= uVar9) goto LAB_00103738;
      uVar7 = (ulong)uVar9;
      uVar11 = 0;
      iVar12 = 4;
      do {
        while( true ) {
          uVar5 = (uint)uVar7;
          uVar11 = uVar11 | ((int)(uint)*(byte *)((long)param_2 + (uVar7 >> 1)) >>
                             ((byte)(~uVar5 << 2) & 4) & 0xfU) << ((byte)iVar12 & 0x1f);
          uVar13 = (undefined1)uVar11;
          if (iVar12 == 0) break;
          uVar5 = uVar5 + bVar1;
          uVar7 = (ulong)uVar5;
          iVar12 = iVar12 + -4;
          if (uVar10 <= uVar5) goto LAB_00103724;
        }
        uVar5 = uVar5 + bVar1;
        uVar7 = (ulong)uVar5;
        *(undefined1 *)puVar16 = uVar13;
        iVar12 = 4;
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        uVar11 = 0;
        uVar13 = 0;
      } while (uVar5 < uVar10);
LAB_00103724:
      if (iVar12 != 4) goto LAB_001035f4;
    }
    else if (bVar1 == 1) {
      bVar1 = *(byte *)((long)&png_pass_inc + lVar6);
      uVar4 = (ulong)bVar1;
      if (uVar10 <= uVar9) goto LAB_00103738;
      uVar7 = (ulong)uVar9;
      uVar11 = 0;
      iVar12 = 7;
      do {
        while( true ) {
          uVar11 = uVar11 | ((int)(uint)*(byte *)((long)param_2 + (uVar7 >> 3)) >>
                             (~(byte)uVar7 & 7) & 1U) << ((byte)iVar12 & 0x1f);
          uVar13 = (undefined1)uVar11;
          if (iVar12 == 0) break;
          uVar5 = (int)uVar7 + (uint)bVar1;
          uVar7 = (ulong)uVar5;
          iVar12 = iVar12 + -1;
          if (uVar10 <= uVar5) goto LAB_001035ea;
        }
        uVar5 = (int)uVar7 + (uint)bVar1;
        uVar7 = (ulong)uVar5;
        *(undefined1 *)puVar16 = uVar13;
        iVar12 = 7;
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        uVar11 = 0;
        uVar13 = 0;
      } while (uVar5 < uVar10);
LAB_001035ea:
      if (iVar12 != 7) goto LAB_001035f4;
    }
    else {
      uVar11 = (uint)*(byte *)((long)&png_pass_start + lVar6);
      bVar1 = bVar1 >> 3;
      uVar4 = (ulong)bVar1;
      uVar5 = (uint)bVar1;
      if (uVar10 <= uVar11) {
        uVar4 = (ulong)*(byte *)((long)&png_pass_inc + lVar6);
        goto LAB_001035ff;
      }
      do {
        while (puVar3 = (undefined8 *)(uVar11 * uVar4 + (long)param_2), puVar3 == puVar16) {
LAB_001034d8:
          bVar2 = *(byte *)((long)&png_pass_inc + lVar6);
          uVar11 = uVar11 + bVar2;
          puVar16 = (undefined8 *)((long)puVar16 + uVar4);
          if (uVar10 <= uVar11) goto LAB_00103560;
        }
        if (uVar5 < 8) {
          if ((bVar1 & 4) == 0) {
            if ((uVar5 != 0) && (*(undefined1 *)puVar16 = *(undefined1 *)puVar3, (bVar1 & 2) != 0))
            {
              *(undefined2 *)((long)puVar16 + (uVar4 - 2)) =
                   *(undefined2 *)((long)puVar3 + (uVar4 - 2));
            }
          }
          else {
            *(undefined4 *)puVar16 = *(undefined4 *)puVar3;
            *(undefined4 *)((long)puVar16 + (uVar4 - 4)) =
                 *(undefined4 *)((long)puVar3 + (uVar4 - 4));
          }
          goto LAB_001034d8;
        }
        *puVar16 = *puVar3;
        *(undefined8 *)((long)puVar16 + ((ulong)uVar5 - 8)) =
             *(undefined8 *)((long)puVar3 + ((ulong)uVar5 - 8));
        lVar15 = (long)puVar16 - ((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
        uVar14 = (int)lVar15 + (uint)bVar1 & 0xfffffff8;
        if (uVar14 < 8) goto LAB_001034d8;
        uVar8 = 0;
        do {
          uVar7 = (ulong)uVar8;
          uVar8 = uVar8 + 8;
          *(undefined8 *)(((ulong)(puVar16 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)puVar3 + (uVar7 - lVar15));
        } while (uVar8 < uVar14);
        bVar2 = *(byte *)((long)&png_pass_inc + lVar6);
        uVar11 = uVar11 + bVar2;
        puVar16 = (undefined8 *)((long)puVar16 + uVar4);
      } while (uVar11 < uVar10);
LAB_00103560:
      uVar4 = (ulong)bVar2;
    }
LAB_00103564:
    uVar10 = *param_1;
    uVar7 = (ulong)*(byte *)((long)param_1 + 0x13);
  }
LAB_001035ff:
  uVar4 = ((uVar10 - 1) + ((int)uVar4 - uVar9)) / uVar4;
  *param_1 = (uint)uVar4;
  if (7 < (byte)uVar7) {
    *(ulong *)(param_1 + 2) = (byte)((byte)uVar7 >> 3) * uVar4;
    return;
  }
LAB_00103749:
  *(ulong *)(param_1 + 2) = uVar7 * uVar4 + 7 >> 3;
  return;
}



void png_write_find_filter(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *local_58;
  long local_50;
  
  uVar1 = *(ulong *)(param_2 + 8);
  bVar15 = *(byte *)(param_1 + 0x266);
  lVar24 = *(long *)(param_1 + 0x228);
  uVar6 = (int)(*(byte *)(param_2 + 0x13) + 7) >> 3;
  if (uVar1 < 0x1ffffffffffffff) {
    if ((bVar15 & 8) == 0) {
      uVar21 = 0xfffffffffffffeff;
      goto joined_r0x00103b37;
    }
    if (bVar15 != 8) {
      pbVar13 = (byte *)(lVar24 + 1);
      if (uVar1 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          bVar5 = *pbVar13;
          uVar8 = (ulong)bVar5;
          if ((char)bVar5 < '\0') {
            uVar8 = (ulong)(0x100 - bVar5);
          }
          pbVar13 = pbVar13 + 1;
          uVar21 = uVar21 + uVar8;
        } while ((byte *)(lVar24 + 1 + uVar1) != pbVar13);
      }
      goto joined_r0x00103b37;
    }
    uVar21 = 0xfffffffffffffeff;
LAB_00103dbf:
    if ((bVar15 & 0x80) != 0) {
      puVar22 = *(undefined1 **)(param_1 + 0x230);
      uVar23 = (ulong)(int)uVar6;
      uVar8 = 0;
      uVar18 = 0;
      lVar19 = *(long *)(param_1 + 0x220);
      lVar9 = *(long *)(param_1 + 0x228);
      local_58 = puVar22 + 1;
      *puVar22 = 4;
      local_50 = lVar19 + 1;
      lVar7 = lVar9 + 1;
      if (uVar6 == 0) {
        uVar23 = 0;
      }
      else {
        do {
          bVar15 = *(char *)(lVar9 + 1 + uVar8) - *(char *)(lVar19 + 1 + uVar8);
          puVar22[uVar8 + 1] = bVar15;
          uVar20 = (ulong)(0x100 - bVar15);
          if (-1 < (char)bVar15) {
            uVar20 = (ulong)bVar15;
          }
          uVar8 = uVar8 + 1;
          uVar18 = uVar18 + uVar20;
        } while (uVar23 != uVar8);
        local_50 = local_50 + uVar23;
        lVar7 = lVar7 + uVar23;
        local_58 = local_58 + uVar23;
      }
      if (uVar23 < uVar1) {
        lVar12 = 0;
        do {
          bVar15 = *(byte *)(lVar19 + 1 + lVar12);
          uVar6 = (uint)*(byte *)(lVar9 + 1 + lVar12);
          iVar16 = uVar6 - bVar15;
          iVar11 = (uint)*(byte *)(local_50 + lVar12) - (uint)bVar15;
          iVar3 = -iVar16;
          if (0 < iVar16) {
            iVar3 = iVar16;
          }
          iVar16 = iVar16 + iVar11;
          if (iVar16 < 1) {
            iVar16 = -iVar16;
          }
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          iVar14 = iVar16;
          if (iVar3 <= iVar16) {
            iVar14 = iVar3;
          }
          if ((iVar14 < iVar11) && (uVar6 = (uint)*(byte *)(local_50 + lVar12), iVar16 < iVar3)) {
            uVar6 = (uint)bVar15;
          }
          uVar6 = *(byte *)(lVar7 + lVar12) - uVar6;
          local_58[lVar12] = (char)uVar6;
          uVar4 = uVar6 & 0xff;
          if ((char)uVar6 < '\0') {
            uVar4 = 0x100 - (uVar6 & 0xff);
          }
          uVar18 = uVar18 + uVar4;
          if (uVar21 < uVar18) goto LAB_00103a61;
          lVar12 = lVar12 + 1;
        } while (lVar12 != uVar1 - uVar23);
      }
      if (uVar18 < uVar21) {
        lVar24 = *(long *)(param_1 + 0x230);
        if (*(long *)(param_1 + 0x238) != 0) {
          *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x238);
          *(long *)(param_1 + 0x238) = lVar24;
        }
      }
    }
  }
  else {
    uVar21 = 0xfffffffffffffeff;
    bVar15 = bVar15 & -bVar15;
joined_r0x00103b37:
    if (bVar15 == 0x10) {
      puVar2 = *(undefined1 **)(param_1 + 0x230);
      uVar21 = (ulong)(int)uVar6;
      lVar7 = lVar24 + 1;
      *puVar2 = 1;
      puVar22 = puVar2 + 1;
      if (uVar6 == 0) {
        uVar21 = 0;
      }
      else {
        uVar8 = 0;
        do {
          puVar2[uVar8 + 1] = *(undefined1 *)(lVar24 + 1 + uVar8);
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar21);
        lVar7 = lVar7 + uVar21;
        puVar22 = puVar22 + uVar21;
      }
      lVar19 = 0;
      if (uVar21 < uVar1) {
        do {
          puVar22[lVar19] = *(char *)(lVar7 + lVar19) - *(char *)(lVar24 + 1 + lVar19);
          lVar19 = lVar19 + 1;
        } while (lVar19 != uVar1 - uVar21);
        lVar24 = *(long *)(param_1 + 0x230);
        goto LAB_00103a61;
      }
    }
    else {
      if ((bVar15 & 0x10) != 0) {
        puVar2 = *(undefined1 **)(param_1 + 0x230);
        uVar8 = 0;
        uVar18 = 0;
        lVar7 = lVar24 + 1;
        *puVar2 = 1;
        puVar22 = puVar2 + 1;
        if (uVar6 != 0) {
          do {
            bVar5 = *(byte *)(lVar24 + 1 + uVar8);
            puVar2[uVar8 + 1] = bVar5;
            uVar23 = (ulong)(0x100 - bVar5);
            if (-1 < (char)bVar5) {
              uVar23 = (ulong)bVar5;
            }
            uVar8 = uVar8 + 1;
            uVar18 = uVar18 + uVar23;
          } while ((long)(int)uVar6 != uVar8);
          lVar7 = lVar7 + uVar8;
          puVar22 = puVar22 + uVar8;
        }
        if (uVar8 < uVar1) {
          lVar19 = 0;
          do {
            bVar5 = *(char *)(lVar7 + lVar19) - *(char *)(lVar24 + 1 + lVar19);
            puVar22[lVar19] = bVar5;
            uVar23 = (ulong)bVar5;
            if ((char)bVar5 < '\0') {
              uVar23 = (ulong)(0x100 - bVar5);
            }
            uVar18 = uVar18 + uVar23;
            if (uVar21 < uVar18) goto LAB_00103820;
            lVar19 = lVar19 + 1;
          } while (uVar1 - uVar8 != lVar19);
        }
        if (uVar18 < uVar21) {
          lVar24 = *(long *)(param_1 + 0x230);
          uVar21 = uVar18;
          if (*(long *)(param_1 + 0x238) != 0) {
            *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x238);
            *(long *)(param_1 + 0x238) = lVar24;
          }
        }
      }
LAB_00103820:
      if (bVar15 == 0x20) {
        puVar22 = *(undefined1 **)(param_1 + 0x230);
        lVar24 = *(long *)(param_1 + 0x228);
        uVar21 = 0;
        lVar7 = *(long *)(param_1 + 0x220);
        *puVar22 = 2;
        if (uVar1 != 0) {
          do {
            puVar22[uVar21 + 1] = *(char *)(lVar24 + 1 + uVar21) - *(char *)(lVar7 + 1 + uVar21);
            uVar21 = uVar21 + 1;
          } while (uVar1 != uVar21);
        }
      }
      else {
        if ((bVar15 & 0x20) != 0) {
          puVar22 = *(undefined1 **)(param_1 + 0x230);
          lVar7 = *(long *)(param_1 + 0x228);
          lVar19 = *(long *)(param_1 + 0x220);
          *puVar22 = 2;
          if (uVar1 == 0) {
            uVar8 = 0;
          }
          else {
            uVar18 = 0;
            uVar8 = 0;
            do {
              bVar5 = *(char *)(lVar7 + 1 + uVar18) - *(char *)(lVar19 + 1 + uVar18);
              puVar22[uVar18 + 1] = bVar5;
              uVar23 = (ulong)bVar5;
              if ((char)bVar5 < '\0') {
                uVar23 = (ulong)(0x100 - bVar5);
              }
              uVar8 = uVar8 + uVar23;
              if (uVar21 < uVar8) goto LAB_00103834;
              uVar18 = uVar18 + 1;
            } while (uVar1 != uVar18);
          }
          if (uVar8 < uVar21) {
            lVar24 = *(long *)(param_1 + 0x230);
            uVar21 = uVar8;
            if (*(long *)(param_1 + 0x238) != 0) {
              *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x238);
              *(long *)(param_1 + 0x238) = lVar24;
            }
          }
        }
LAB_00103834:
        if (bVar15 == 0x40) {
          puVar2 = *(undefined1 **)(param_1 + 0x230);
          lVar19 = *(long *)(param_1 + 0x228);
          lVar9 = *(long *)(param_1 + 0x220);
          *puVar2 = 3;
          lVar24 = lVar19 + 1;
          puVar22 = puVar2 + 1;
          lVar7 = lVar9 + 1;
          if (uVar6 == 0) {
            uVar21 = 0;
          }
          else {
            lVar12 = 1;
            do {
              puVar2[lVar12] = *(char *)(lVar19 + lVar12) - (*(byte *)(lVar9 + lVar12) >> 1);
              lVar12 = lVar12 + 1;
            } while (lVar12 != (ulong)(uVar6 - 1) + 2);
            uVar21 = (ulong)uVar6;
            lVar24 = lVar24 + uVar21;
            lVar7 = lVar7 + uVar21;
            puVar22 = puVar22 + uVar21;
            uVar21 = (ulong)(int)uVar6;
          }
          lVar9 = 0;
          if (uVar21 < uVar1) {
            do {
              iVar3 = (int)lVar9;
              puVar22[lVar9] =
                   *(char *)(lVar24 + lVar9) -
                   (char)((int)((uint)*(byte *)(lVar7 + lVar9) + (uint)*(byte *)(lVar19 + 1 + lVar9)
                               ) >> 1);
              lVar9 = lVar9 + 1;
            } while (uVar6 + 1 + iVar3 < uVar1);
            lVar24 = *(long *)(param_1 + 0x230);
            goto LAB_00103a61;
          }
        }
        else {
          if ((bVar15 & 0x40) != 0) {
            puVar22 = *(undefined1 **)(param_1 + 0x230);
            lVar19 = *(long *)(param_1 + 0x220);
            lVar9 = *(long *)(param_1 + 0x228);
            local_58 = puVar22 + 1;
            *puVar22 = 3;
            local_50 = lVar19 + 1;
            lVar7 = lVar9 + 1;
            if (uVar6 == 0) {
              uVar8 = 0;
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              lVar12 = 1;
              do {
                bVar5 = *(char *)(lVar9 + lVar12) - (*(byte *)(lVar19 + lVar12) >> 1);
                puVar22[lVar12] = bVar5;
                uVar4 = 0x100 - bVar5;
                if (-1 < (char)bVar5) {
                  uVar4 = (uint)bVar5;
                }
                lVar12 = lVar12 + 1;
                uVar18 = uVar18 + uVar4;
              } while (lVar12 != (ulong)(uVar6 - 1) + 2);
              uVar8 = (ulong)uVar6;
              local_50 = local_50 + uVar8;
              local_58 = local_58 + uVar8;
              lVar7 = lVar7 + uVar8;
            }
            if (uVar8 < uVar1) {
              lVar19 = 0;
              do {
                uVar10 = (uint)*(byte *)(lVar7 + lVar19) -
                         ((int)((uint)*(byte *)(local_50 + lVar19) +
                               (uint)*(byte *)(lVar9 + 1 + lVar19)) >> 1);
                local_58[lVar19] = (char)uVar10;
                uVar4 = 0x100 - (uVar10 & 0xff);
                if (-1 < (char)uVar10) {
                  uVar4 = uVar10 & 0xff;
                }
                uVar18 = uVar18 + uVar4;
                if (uVar21 < uVar18) goto LAB_00103980;
                iVar3 = (int)lVar19;
                lVar19 = lVar19 + 1;
              } while (uVar6 + 1 + iVar3 < uVar1);
            }
            if (uVar18 < uVar21) {
              lVar24 = *(long *)(param_1 + 0x230);
              uVar21 = uVar18;
              if (*(long *)(param_1 + 0x238) != 0) {
                *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x238);
                *(long *)(param_1 + 0x238) = lVar24;
              }
            }
          }
LAB_00103980:
          if (bVar15 != 0x80) goto LAB_00103dbf;
          puVar2 = *(undefined1 **)(param_1 + 0x230);
          lVar19 = *(long *)(param_1 + 0x228);
          lVar9 = *(long *)(param_1 + 0x220);
          uVar21 = (ulong)(int)uVar6;
          *puVar2 = 4;
          lVar24 = lVar19 + 1;
          puVar22 = puVar2 + 1;
          lVar7 = lVar9 + 1;
          if (uVar6 == 0) {
            uVar21 = 0;
          }
          else {
            uVar8 = 0;
            do {
              puVar2[uVar8 + 1] = *(char *)(lVar19 + 1 + uVar8) - *(char *)(lVar9 + 1 + uVar8);
              uVar8 = uVar8 + 1;
            } while (uVar21 != uVar8);
            lVar24 = lVar24 + uVar21;
            lVar7 = lVar7 + uVar21;
            puVar22 = puVar22 + uVar21;
          }
          lVar12 = 0;
          if (uVar21 < uVar1) {
            do {
              bVar15 = *(byte *)(lVar9 + 1 + lVar12);
              bVar5 = *(byte *)(lVar19 + 1 + lVar12);
              iVar16 = (uint)bVar5 - (uint)bVar15;
              iVar11 = (uint)*(byte *)(lVar7 + lVar12) - (uint)bVar15;
              iVar3 = -iVar16;
              if (0 < iVar16) {
                iVar3 = iVar16;
              }
              iVar16 = iVar16 + iVar11;
              if (iVar16 < 1) {
                iVar16 = -iVar16;
              }
              iVar14 = iVar3;
              if (iVar16 <= iVar3) {
                iVar14 = iVar16;
              }
              iVar17 = -iVar11;
              if (0 < iVar11) {
                iVar17 = iVar11;
              }
              if ((iVar14 < iVar17) && (bVar5 = *(byte *)(lVar7 + lVar12), iVar16 < iVar3)) {
                bVar5 = bVar15;
              }
              puVar22[lVar12] = *(char *)(lVar24 + lVar12) - bVar5;
              lVar12 = lVar12 + 1;
            } while (uVar1 - uVar21 != lVar12);
          }
        }
      }
    }
    lVar24 = *(long *)(param_1 + 0x230);
  }
LAB_00103a61:
  png_compress_IDAT(param_1,lVar24,*(long *)(param_2 + 8) + 1,0);
  lVar24 = *(long *)(param_1 + 0x220);
  if (lVar24 != 0) {
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x228);
    *(long *)(param_1 + 0x228) = lVar24;
  }
  png_write_finish_row(param_1);
  uVar6 = *(int *)(param_1 + 0x29c) + 1;
  *(uint *)(param_1 + 0x29c) = uVar6;
  if (uVar6 <= *(int *)(param_1 + 0x298) - 1U) {
    return;
  }
  png_write_flush(param_1);
  return;
}


