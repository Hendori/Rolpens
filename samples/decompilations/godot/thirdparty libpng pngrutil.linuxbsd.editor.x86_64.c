
void png_read_filter_row_sub(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar3 = (ulong)((int)(*(byte *)(param_1 + 0x13) + 7) >> 3);
  pcVar2 = (char *)(param_2 + uVar3);
  if (uVar3 < uVar1) {
    do {
      *pcVar2 = *pcVar2 + pcVar2[-uVar3];
      pcVar2 = pcVar2 + 1;
    } while (pcVar2 != (char *)(param_2 + uVar1));
  }
  return;
}



void png_read_filter_row_up(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(char *)(param_2 + lVar2) = *(char *)(param_2 + lVar2) + *(char *)(param_3 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
  }
  return;
}



void png_read_filter_row_avg(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar2 = (int)(*(byte *)(param_1 + 0x13) + 7) >> 3;
  lVar4 = (long)iVar2;
  if (iVar2 != 0) {
    lVar3 = 0;
    do {
      *(char *)(param_2 + lVar3) = *(char *)(param_2 + lVar3) + (*(byte *)(param_3 + lVar3) >> 1);
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
    param_3 = param_3 + lVar4;
    param_2 = param_2 + lVar4;
  }
  lVar3 = 0;
  if (lVar1 != lVar4) {
    do {
      *(char *)(param_2 + lVar3) =
           *(char *)(param_2 + lVar3) +
           (char)((int)((uint)*(byte *)((param_2 - lVar4) + lVar3) +
                       (uint)*(byte *)(param_3 + lVar3)) >> 1);
      lVar3 = lVar3 + 1;
    } while (lVar1 - lVar4 != lVar3);
  }
  return;
}



void png_read_filter_row_paeth_1byte_pixel(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar11;
  uint uVar12;
  byte *pbVar10;
  
  bVar1 = *param_3;
  lVar2 = *(long *)(param_1 + 8);
  uVar4 = (uint)*param_2 + (uint)bVar1;
  *param_2 = bVar1 + *param_2;
  if (param_2 + 1 < param_2 + lVar2) {
    pbVar8 = param_2 + 1;
    pbVar10 = param_3 + 1;
    uVar11 = (uint)bVar1;
    do {
      pbVar9 = pbVar10 + 1;
      uVar4 = uVar4 & 0xff;
      uVar12 = (uint)*pbVar10;
      iVar3 = uVar4 - uVar11;
      iVar6 = uVar12 - uVar11;
      iVar7 = -iVar6;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      iVar5 = -iVar3;
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + iVar6;
      if (iVar3 < 1) {
        iVar3 = -iVar3;
      }
      if (iVar5 < iVar7) {
        iVar7 = iVar5;
        uVar4 = uVar12;
      }
      if (iVar7 <= iVar3) {
        uVar11 = uVar4;
      }
      uVar4 = *pbVar8 + uVar11;
      *pbVar8 = (byte)uVar4;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar9;
      uVar11 = uVar12;
    } while (pbVar9 != param_3 + lVar2);
  }
  return;
}



void png_read_filter_row_paeth_multibyte_pixel(long param_1,char *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  
  lVar10 = (long)((int)(*(byte *)(param_1 + 0x13) + 7) >> 3);
  pcVar1 = param_2 + lVar10;
  pcVar6 = param_2;
  pbVar11 = param_3;
  if (param_2 < pcVar1) {
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = *pcVar6 + *pbVar11;
      pcVar6 = pcVar7;
      pbVar11 = pbVar11 + 1;
    } while (pcVar1 != pcVar7);
    param_3 = param_3 + lVar10;
    pcVar6 = pcVar1;
  }
  pbVar11 = param_3 + ((long)(param_2 + *(long *)(param_1 + 8)) - (long)pcVar6);
  if (param_2 + *(long *)(param_1 + 8) <= pcVar6) {
    return;
  }
  do {
    bVar2 = param_3[-lVar10];
    bVar3 = *param_3;
    param_3 = param_3 + 1;
    iVar9 = (uint)bVar3 - (uint)bVar2;
    iVar5 = (uint)(byte)pcVar6[-lVar10] - (uint)bVar2;
    iVar4 = -iVar9;
    if (0 < iVar9) {
      iVar4 = iVar9;
    }
    iVar8 = -iVar5;
    if (0 < iVar5) {
      iVar8 = iVar5;
    }
    iVar5 = iVar5 + iVar9;
    if (iVar5 < 1) {
      iVar5 = -iVar5;
    }
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
      bVar3 = pcVar6[-lVar10];
    }
    if (iVar8 <= iVar5) {
      bVar2 = bVar3;
    }
    *pcVar6 = *pcVar6 + bVar2;
    pcVar6 = pcVar6 + 1;
  } while (pbVar11 != param_3);
  return;
}



int png_inflate_claim(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x138) != 0) {
    local_68[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_safecat(local_68,0x40,4," using zstream");
    png_chunk_warning(param_1,local_68);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  bVar4 = (*(uint *)(param_1 + 0x388) & 0xc) != 0xc;
  if (!bVar4) {
    uVar3 = 0xf;
  }
  *(bool *)(param_1 + 0x270) = bVar4;
  if ((*(byte *)(param_1 + 0x130) & 2) == 0) {
    iVar2 = inflateInit2_(param_1 + 0x140,uVar3,"1.3.1",0x70);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 2;
      goto LAB_0010033e;
    }
  }
  else {
    iVar2 = inflateReset2();
    if (iVar2 == 0) {
LAB_0010033e:
      *(undefined4 *)(param_1 + 0x138) = param_2;
      iVar2 = 0;
      goto LAB_001002fc;
    }
  }
  png_zstream_error(param_1,iVar2);
LAB_001002fc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * png_read_buffer(long param_1,ulong param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x460);
  if (pvVar1 != (void *)0x0) {
    if (param_2 <= *(ulong *)(param_1 + 0x468)) {
      return pvVar1;
    }
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    png_free(param_1,pvVar1);
  }
  pvVar1 = (void *)png_malloc_base(param_1);
  if (pvVar1 == (void *)0x0) {
    if (param_3 != 2) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"insufficient memory to read chunk");
      }
      png_chunk_warning();
    }
    return (void *)0x0;
  }
  memset(pvVar1,0,param_2);
  *(void **)(param_1 + 0x460) = pvVar1;
  *(ulong *)(param_1 + 0x468) = param_2;
  return pvVar1;
}



int png_inflate_constprop_0
              (long param_1,int param_2,undefined8 param_3,int *param_4,long param_5,long *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x138) == param_2) {
    lVar5 = *param_6;
    iVar3 = *param_4;
    *(undefined8 *)(param_1 + 0x140) = param_3;
    if (param_5 != 0) {
      *(long *)(param_1 + 0x158) = param_5;
    }
    uVar6 = 0x400;
    if (param_5 != 0) {
      uVar6 = 0xffffffff;
    }
    uVar4 = 0;
    iVar1 = 0;
    while( true ) {
      iVar3 = iVar3 + iVar1;
      uVar4 = uVar4 + lVar5;
      *(int *)(param_1 + 0x148) = iVar3;
      if (param_5 == 0) {
        *(undefined1 **)(param_1 + 0x158) = local_448;
      }
      uVar2 = uVar6;
      uVar7 = -(uint)(param_5 != 0) | 0x400;
      if (uVar4 < uVar6) {
        uVar2 = uVar4;
        uVar7 = (uint)uVar4;
      }
      *(uint *)(param_1 + 0x160) = uVar7;
      lVar5 = uVar4 - uVar2;
      if ((*(char *)(param_1 + 0x270) != '\0') && (iVar3 != 0)) {
        if (**(char **)(param_1 + 0x140) < '\0') {
          *(char **)(param_1 + 0x170) = "invalid window size (libpng)";
          if (param_5 == 0) {
            *(undefined8 *)(param_1 + 0x158) = 0;
          }
          if (uVar4 != 0) {
            iVar1 = -3;
            goto LAB_0010058b;
          }
          iVar1 = -3;
          goto LAB_001005f0;
        }
        *(undefined1 *)(param_1 + 0x270) = 0;
      }
      iVar1 = inflate(param_1 + 0x140,(ulong)(lVar5 == 0) << 2);
      if (iVar1 != 0) break;
      iVar1 = *(int *)(param_1 + 0x148);
      uVar4 = (ulong)*(uint *)(param_1 + 0x160);
      iVar3 = 0;
    }
    iVar3 = *(int *)(param_1 + 0x148);
    uVar4 = (ulong)*(uint *)(param_1 + 0x160) + lVar5;
    if (param_5 == 0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    if (uVar4 != 0) {
LAB_0010058b:
      *param_6 = *param_6 - uVar4;
    }
    if (iVar3 != 0) {
LAB_001005f0:
      *param_4 = *param_4 - iVar3;
    }
    png_zstream_error(param_1,iVar1);
  }
  else {
    *(char **)(param_1 + 0x170) = "zstream unclaimed";
    iVar1 = -2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int png_decompress_chunk_constprop_0(long param_1,int param_2,uint param_3,long *param_4)

{
  size_t __n;
  void *__src;
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar4 = (ulong)(param_3 + 1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(ulong *)(param_1 + 0x430);
  if (uVar5 == 0) {
    lVar2 = -1 - uVar4;
  }
  else {
    if (uVar5 < uVar4) {
      png_zstream_error(param_1,0xfffffffc);
      iVar1 = -4;
      goto LAB_001006b7;
    }
    lVar2 = uVar5 - uVar4;
  }
  if (lVar2 != -1) {
    *param_4 = lVar2;
  }
  iVar1 = png_inflate_claim(param_1,*(undefined4 *)(param_1 + 0x218));
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = -7;
    }
    goto LAB_001006b7;
  }
  uVar5 = (ulong)param_3;
  local_44 = param_2 - param_3;
  iVar1 = png_inflate_constprop_0
                    (param_1,*(undefined4 *)(param_1 + 0x218),*(long *)(param_1 + 0x460) + uVar5,
                     &local_44,0,param_4);
  if (iVar1 == 1) {
    iVar1 = inflateReset(param_1 + 0x140);
    if (iVar1 != 0) {
      png_zstream_error(param_1,1);
      goto LAB_0010073b;
    }
    lVar2 = *param_4;
    __n = uVar5 + 1 + lVar2;
    pvVar3 = (void *)png_malloc_base(param_1);
    if (pvVar3 == (void *)0x0) {
      png_zstream_error(param_1,0xfffffffc);
      iVar1 = -4;
    }
    else {
      pvVar3 = memset(pvVar3,0,__n);
      iVar1 = png_inflate_constprop_0
                        (param_1,*(undefined4 *)(param_1 + 0x218),*(long *)(param_1 + 0x460) + uVar5
                         ,&local_44,(long)pvVar3 + uVar5,param_4);
      if (iVar1 == 1) {
        if (lVar2 != *param_4) goto LAB_00100820;
        *(undefined1 *)((long)pvVar3 + uVar5 + lVar2) = 0;
        __src = *(void **)(param_1 + 0x460);
        if (param_3 != 0) {
          pvVar3 = memcpy(pvVar3,__src,uVar5);
        }
        *(void **)(param_1 + 0x460) = pvVar3;
        *(size_t *)(param_1 + 0x468) = __n;
        png_free(param_1,__src);
        if (param_2 - param_3 != local_44) {
          png_chunk_benign_error(param_1,"extra compressed data");
        }
      }
      else {
        if (iVar1 == 0) {
LAB_00100820:
          png_free(param_1,pvVar3);
          goto LAB_0010073b;
        }
        png_free(param_1,pvVar3);
      }
    }
  }
  else {
    if (iVar1 != 0) goto LAB_00100740;
LAB_0010073b:
    iVar1 = -7;
  }
LAB_00100740:
  *(undefined4 *)(param_1 + 0x138) = 0;
LAB_001006b7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void png_inflate_read_constprop_0_isra_0
               (long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong *param_5,
               int param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x218)) {
    *(char **)(param_1 + 0x170) = "zstream unclaimed";
    return;
  }
  *(undefined8 *)(param_1 + 0x158) = param_4;
  *(undefined4 *)(param_1 + 0x160) = 0;
  uVar5 = 0x400;
  do {
    uVar1 = *param_3;
    if (*(int *)(param_1 + 0x148) == 0) {
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      uVar1 = uVar1 - uVar5;
      *param_3 = uVar1;
      if (uVar5 != 0) {
        png_read_data(param_1,param_2);
        png_calculate_crc(param_1,param_2,uVar5);
        uVar1 = *param_3;
      }
      *(undefined8 *)(param_1 + 0x140) = param_2;
      *(uint *)(param_1 + 0x148) = uVar5;
    }
    if (*(int *)(param_1 + 0x160) == 0) {
      uVar3 = *param_5;
      uVar2 = 0xffffffff;
      if (uVar3 < 0x100000000) {
        uVar2 = uVar3;
      }
      *(int *)(param_1 + 0x160) = (int)uVar2;
      *param_5 = uVar3 - uVar2;
    }
    iVar4 = 0;
    if (uVar1 == 0) {
      iVar4 = (-(uint)(param_6 == 0) & 0xfffffffe) + 4;
    }
    if ((*(char *)(param_1 + 0x270) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
      if (**(char **)(param_1 + 0x140) < '\0') {
        uVar3 = *param_5;
        uVar2 = (ulong)*(uint *)(param_1 + 0x160);
        *(char **)(param_1 + 0x170) = "invalid window size (libpng)";
        iVar4 = -3;
        break;
      }
      *(undefined1 *)(param_1 + 0x270) = 0;
    }
    iVar4 = inflate(param_1 + 0x140,iVar4);
    uVar3 = *param_5;
    if (iVar4 != 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x160);
      break;
    }
  } while ((uVar3 != 0) ||
          (uVar2 = (ulong)*(uint *)(param_1 + 0x160), *(uint *)(param_1 + 0x160) != 0));
  *(undefined4 *)(param_1 + 0x160) = 0;
  *param_5 = uVar2 + uVar3;
  png_zstream_error(param_1,iVar4);
  return;
}



void png_get_uint_31(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (-1 < (int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"PNG unsigned integer out of range");
}



uint png_get_uint_32(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



uint png_get_int_32(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 == 0x80) {
    uVar2 = 0;
  }
  return uVar2;
}



ushort png_get_uint_16(ushort *param_1)

{
  return *param_1 << 8 | *param_1 >> 8;
}



void png_read_sig(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x26d);
  if (*(byte *)(param_1 + 0x26d) < 8) {
    *(undefined4 *)(param_1 + 0x474) = 0x11;
    png_read_data(param_1,param_2 + 0x2c + uVar2,8 - uVar2);
    *(undefined1 *)(param_1 + 0x26d) = 8;
    iVar1 = png_sig_cmp(param_2 + 0x2c,uVar2,8 - uVar2);
    if (iVar1 != 0) {
      if (uVar2 < 4) {
        iVar1 = png_sig_cmp(param_2 + 0x2c,uVar2,4 - uVar2);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Not a PNG file");
        }
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (uVar2 < 3) {
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x1000;
      return;
    }
  }
  return;
}



void png_crc_read(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    png_read_data(param_1,param_2,param_3);
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}



bool png_crc_error(long param_1)

{
  long in_FS_OFFSET;
  bool bVar1;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x21b) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x130) & 0x800) != 0) goto LAB_00100c6d;
  }
  else if ((~*(uint *)(param_1 + 0x130) & 0x300) == 0) {
LAB_00100c6d:
    *(undefined4 *)(param_1 + 0x474) = 0x81;
    png_read_data(param_1,&local_14,4);
    bVar1 = false;
    goto LAB_00100c4e;
  }
  *(undefined4 *)(param_1 + 0x474) = 0x81;
  png_read_data(param_1,&local_14,4);
  bVar1 = *(uint *)(param_1 + 0x24c) !=
          (local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
          local_14 << 0x18);
LAB_00100c4e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 png_crc_finish(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    do {
      uVar2 = 0x400;
      if (param_2 < 0x401) {
        uVar2 = param_2;
      }
      param_2 = param_2 - uVar2;
      if (param_1 != 0) goto LAB_00100d54;
    } while (param_2 != 0);
  }
LAB_00100ce2:
  uVar1 = png_crc_error(param_1);
  if ((int)uVar1 != 0) {
    if ((*(byte *)(param_1 + 0x21b) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x130) & 0x400) == 0) {
LAB_00100d85:
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"CRC error");
      }
    }
    else if ((*(uint *)(param_1 + 0x130) & 0x200) != 0) goto LAB_00100d85;
    png_chunk_warning(param_1,"CRC error");
    uVar1 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
LAB_00100d54:
  while( true ) {
    png_read_data(param_1,auStack_438,uVar2);
    png_calculate_crc(param_1,auStack_438,uVar2);
    if (param_2 == 0) break;
    uVar2 = 0x400;
    if (param_2 < 0x401) {
      uVar2 = param_2;
    }
    param_2 = param_2 - uVar2;
  }
  goto LAB_00100ce2;
}



undefined8 png_cache_unknown_chunk(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x440) != 0) {
    png_free();
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  uVar3 = (ulong)param_2;
  if ((*(ulong *)(param_1 + 0x430) - 1 < 0xfffffffffffffffe) &&
     (*(ulong *)(param_1 + 0x430) < uVar3)) {
    lVar2 = *(long *)(param_1 + 0x440);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x218);
    *(undefined1 *)(param_1 + 0x43c) = 0;
    *(ulong *)(param_1 + 0x448) = uVar3;
    *(uint *)(param_1 + 0x438) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(char *)(param_1 + 0x450) = (char)*(undefined4 *)(param_1 + 300);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x440) = 0;
      goto LAB_00100e16;
    }
    lVar2 = png_malloc_warn(param_1,uVar3);
    *(long *)(param_1 + 0x440) = lVar2;
  }
  if (lVar2 == 0) {
    png_crc_finish(param_1,param_2);
    png_chunk_benign_error(param_1,"unknown chunk exceeds memory limits");
    return 0;
  }
  png_read_data(param_1,lVar2,uVar3);
  png_calculate_crc(param_1,lVar2,uVar3);
LAB_00100e16:
  png_crc_finish(param_1,0);
  return 1;
}



undefined8 png_zlib_inflate(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x270) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
    if (**(char **)(param_1 + 0x140) < '\0') {
      *(char **)(param_1 + 0x170) = "invalid window size (libpng)";
      return 0xfffffffd;
    }
    *(undefined1 *)(param_1 + 0x270) = 0;
  }
  uVar1 = inflate(param_1 + 0x140);
  return uVar1;
}



void png_handle_IHDR(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  long in_FS_OFFSET;
  uint local_4d;
  uint local_49;
  undefined2 local_45;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  if (param_3 == 0xd) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 1;
    png_read_data(param_1,&local_4d,0xd);
    png_calculate_crc(param_1,&local_4d,0xd);
    png_crc_finish(param_1,0);
    uVar4 = local_4d >> 0x18 | (local_4d & 0xff0000) >> 8 | (local_4d & 0xff00) << 8 |
            local_4d << 0x18;
    if (-1 < (int)uVar4) {
      uVar3 = local_49 >> 0x18 | (local_49 & 0xff0000) >> 8 | (local_49 & 0xff00) << 8 |
              local_49 << 0x18;
      if (-1 < (int)uVar3) {
        uVar2 = (ulong)(byte)local_45;
        if (local_45._1_1_ == '\x04') {
          uVar2 = (ulong)((uint)(byte)local_45 * 2);
          uVar5 = 2;
        }
        else if (local_45._1_1_ == '\x06') {
          uVar2 = (ulong)(byte)local_45 << 2;
          uVar5 = 4;
        }
        else {
          uVar5 = 1;
          if (local_45._1_1_ == '\x02') {
            uVar2 = (ulong)((uint)(byte)local_45 + (uint)(byte)local_45 * 2);
            uVar5 = 3;
          }
        }
        *(uint *)(param_1 + 0x1f8) = uVar4;
        *(uint *)(param_1 + 0x1fc) = uVar3;
        *(undefined1 *)(param_1 + 0x264) = local_41;
        *(ushort *)(param_1 + 0x267) = local_45 << 8 | local_45 >> 8;
        *(undefined1 *)(param_1 + 0x3e4) = local_42;
        *(undefined1 *)(param_1 + 0x420) = local_43;
        *(undefined1 *)(param_1 + 0x26b) = uVar5;
        bVar1 = (byte)uVar2;
        *(byte *)(param_1 + 0x26a) = bVar1;
        if (bVar1 < 8) {
          uVar2 = (uVar2 & 0xff) * (ulong)uVar4 + 7 >> 3;
        }
        else {
          uVar2 = (ulong)(bVar1 >> 3) * (ulong)uVar4;
        }
        *(ulong *)(param_1 + 0x208) = uVar2;
        png_set_IHDR(param_1,param_2);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid");
}



void png_handle_PLTE(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long in_FS_OFFSET;
  undefined2 *local_350;
  undefined2 local_348 [386];
  undefined2 local_44;
  undefined1 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(param_1 + 300);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar3 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"duplicate");
  }
  if ((uVar3 & 4) != 0) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar2 = "out of place";
LAB_001012ce:
      png_chunk_benign_error(param_1,pcVar2);
      return;
    }
    goto LAB_001013fc;
  }
  *(uint *)(param_1 + 300) = uVar3 | 2;
  if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar2 = "ignored in grayscale PNG";
      goto LAB_001012ce;
    }
    goto LAB_001013fc;
  }
  if ((0x300 < param_3) || (0x55555555 < param_3 * -0x55555555)) {
    png_crc_finish(param_1,param_3);
    if (*(char *)(param_1 + 0x267) == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"invalid");
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar2 = "invalid";
      goto LAB_001012ce;
    }
    goto LAB_001013fc;
  }
  uVar3 = 0x100;
  if (*(byte *)(param_1 + 0x267) == 3) {
    uVar3 = 1 << (*(byte *)(param_1 + 0x268) & 0x1f);
  }
  uVar1 = param_3 / 3;
  if ((int)uVar3 <= (int)(param_3 / 3)) {
    uVar1 = uVar3;
  }
  if (0 < (int)uVar1) {
    puVar4 = local_348;
    do {
      puVar5 = (undefined2 *)((long)puVar4 + 3);
      png_read_data(param_1,&local_44,3);
      png_calculate_crc(param_1,&local_44,3);
      *puVar4 = local_44;
      *(undefined1 *)(puVar4 + 1) = local_42;
      puVar4 = puVar5;
    } while (puVar5 != (undefined2 *)((long)(int)uVar1 * 3 + (long)local_348));
  }
  local_350 = local_348;
  png_crc_finish(param_1,param_3 + uVar1 * -3);
  png_set_PLTE(param_1,param_2,local_350,uVar1);
  if (*(short *)(param_1 + 0x260) == 0) {
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_2 + 8);
      if ((uVar3 & 0x10) != 0) goto LAB_00101244;
      goto LAB_0010125c;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x260) = 0;
    if (param_2 == 0) {
      png_chunk_benign_error(param_1,"tRNS must be after");
    }
    else {
LAB_00101244:
      *(undefined2 *)(param_2 + 0x22) = 0;
      png_chunk_benign_error(param_1,"tRNS must be after");
      uVar3 = *(uint *)(param_2 + 8);
LAB_0010125c:
      if ((uVar3 & 0x40) != 0) {
        png_chunk_benign_error(param_1,"hIST must be after");
        uVar3 = *(uint *)(param_2 + 8);
      }
      if ((uVar3 & 0x20) != 0) {
        png_chunk_benign_error(param_1,"bKGD must be after");
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001013fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_IEND(long param_1,undefined8 param_2,int param_3)

{
  if ((~*(uint *)(param_1 + 300) & 5) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x18;
  png_crc_finish(param_1,param_3);
  if (param_3 == 0) {
    return;
  }
  png_chunk_benign_error(param_1,"invalid");
  return;
}



void png_handle_gAMA(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) == 0) {
    if (param_3 == 4) {
      png_read_data(param_1,&local_24,4);
      png_calculate_crc(param_1,&local_24,4);
      iVar1 = png_crc_finish(param_1,0);
      if (iVar1 == 0) {
        uVar2 = local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 |
                local_24 << 0x18;
        if ((int)uVar2 < 0) {
          uVar2 = 0xffffffff;
        }
        png_colorspace_set_gamma(param_1,param_1 + 0x4a0,uVar2);
        png_colorspace_sync(param_1,param_2);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"invalid");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_sBIT(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) != 0) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "out of place";
LAB_00101742:
      png_chunk_benign_error(param_1,pcVar4);
      return;
    }
    goto LAB_001017e8;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "duplicate";
      goto LAB_00101742;
    }
    goto LAB_001017e8;
  }
  if (*(char *)(param_1 + 0x267) == '\x03') {
    uVar7 = 3;
    bVar6 = 8;
    if (param_3 == 3) goto LAB_00101613;
  }
  else {
    uVar7 = (ulong)*(byte *)(param_1 + 0x26b);
    bVar6 = *(byte *)(param_1 + 0x268);
    if (*(byte *)(param_1 + 0x26b) == param_3) {
LAB_00101613:
      if (param_3 < 5) {
        pcVar4 = (char *)&local_44;
        auVar8 = pshuflw(in_XMM0,ZEXT216(CONCAT11(bVar6,bVar6)),0);
        local_44 = auVar8._0_4_;
        png_read_data(param_1,pcVar4,uVar7);
        png_calculate_crc(param_1,pcVar4,uVar7);
        iVar3 = png_crc_finish(param_1,0);
        auVar8._8_8_ = extraout_XMM0_Qb;
        auVar8._0_8_ = extraout_XMM0_Qa;
        if (iVar3 == 0) {
          if ((int)uVar7 != 0) {
            pcVar1 = pcVar4 + uVar7;
            do {
              if (bVar6 <= (byte)(*pcVar4 - 1U)) {
                png_chunk_benign_error(param_1,"invalid");
                goto LAB_0010169f;
              }
              pcVar4 = pcVar4 + 1;
            } while (pcVar1 != pcVar4);
          }
          uVar2 = (undefined2)local_44;
          if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
            uVar5 = (undefined1)((uint)local_44 >> 8);
            auVar8 = pshuflw(auVar8,ZEXT216(CONCAT11((char)local_44,(char)local_44)),0);
            *(int *)(param_1 + 0x2d8) = auVar8._0_4_;
          }
          else {
            *(undefined2 *)(param_1 + 0x2d8) = uVar2;
            *(undefined1 *)(param_1 + 0x2da) = local_44._2_1_;
            uVar5 = local_44._3_1_;
          }
          *(undefined1 *)(param_1 + 0x2dc) = uVar5;
          png_set_sBIT(param_1,param_2,param_1 + 0x2d8);
        }
LAB_0010169f:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001017e8;
      }
    }
  }
  png_chunk_benign_error(param_1,"invalid");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    png_crc_finish(param_1,param_3);
    return;
  }
LAB_001017e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_cHRM(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) == 0) {
    if (param_3 == 0x20) {
      png_read_data(param_1,&local_48,0x20);
      png_calculate_crc(param_1,&local_48,0x20);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 == 0) {
        uVar10 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
                 local_48 << 0x18;
        uVar9 = local_40 >> 0x18 | (local_40 & 0xff0000) >> 8 | (local_40 & 0xff00) << 8 |
                local_40 << 0x18;
        local_50 = 0xffffffff;
        if (-1 < (int)uVar10) {
          local_50 = uVar10;
        }
        uVar8 = local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 | (local_3c & 0xff00) << 8 |
                local_3c << 0x18;
        uVar7 = local_38 >> 0x18 | (local_38 & 0xff0000) >> 8 | (local_38 & 0xff00) << 8 |
                local_38 << 0x18;
        uVar6 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
                local_34 << 0x18;
        uVar4 = local_30 >> 0x18 | (local_30 & 0xff0000) >> 8 | (local_30 & 0xff00) << 8 |
                local_30 << 0x18;
        uVar3 = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
                local_44 << 0x18;
        local_4c = 0xffffffff;
        if (-1 < (int)uVar3) {
          local_4c = uVar3;
        }
        local_68 = 0xffffffff;
        if (-1 < (int)uVar9) {
          local_68 = uVar9;
        }
        local_64 = 0xffffffff;
        if (-1 < (int)uVar8) {
          local_64 = uVar8;
        }
        local_60 = 0xffffffff;
        if (-1 < (int)uVar7) {
          local_60 = uVar7;
        }
        local_5c = 0xffffffff;
        if (-1 < (int)uVar6) {
          local_5c = uVar6;
        }
        local_58 = 0xffffffff;
        if (-1 < (int)uVar4) {
          local_58 = uVar4;
        }
        uVar5 = local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
                local_2c << 0x18;
        local_54 = 0xffffffff;
        if (-1 < (int)uVar5) {
          local_54 = uVar5;
        }
        if ((int)(uVar3 | uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar4 | uVar5) < 0) {
          png_chunk_benign_error(param_1,"invalid values");
        }
        else {
          uVar1 = *(ushort *)(param_1 + 0x4ea);
          if (-1 < (short)uVar1) {
            if ((uVar1 & 0x10) == 0) {
              *(ushort *)(param_1 + 0x4ea) = uVar1 | 0x10;
              png_colorspace_set_chromaticities(param_1,param_1 + 0x4a0,&local_68,1);
              png_colorspace_sync(param_1,param_2);
            }
            else {
              *(ushort *)(param_1 + 0x4ea) = uVar1 | 0x8000;
              png_colorspace_sync(param_1,param_2);
              png_chunk_benign_error(param_1,"duplicate");
            }
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"invalid");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_sRGB(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) == 0) {
    if (param_3 == 1) {
      png_read_data(param_1,&local_21,1);
      png_calculate_crc(param_1,&local_21,1);
      iVar2 = png_crc_finish(param_1,0);
      if ((iVar2 == 0) && (uVar1 = *(ushort *)(param_1 + 0x4ea), -1 < (short)uVar1)) {
        if ((uVar1 & 4) == 0) {
          png_colorspace_set_sRGB(param_1,param_1 + 0x4a0,local_21);
          png_colorspace_sync(param_1,param_2);
        }
        else {
          *(ushort *)(param_1 + 0x4ea) = uVar1 | 0x8000;
          png_colorspace_sync(param_1,param_2);
          png_chunk_benign_error(param_1,"too many profiles");
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"invalid");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_iCCP(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  uint local_54c [3];
  ulong local_540;
  char local_538 [96];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  uint local_458;
  undefined1 local_448 [1032];
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54c[0] = param_3;
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) != 0) {
    png_crc_finish(param_1,param_3);
    png_chunk_benign_error(param_1,"out of place");
    goto LAB_00101ceb;
  }
  if (param_3 < 0xe) {
LAB_00101d18:
    local_54c[0] = param_3;
    png_crc_finish(param_1,param_3);
    png_chunk_benign_error(param_1,"too short");
    goto LAB_00101ceb;
  }
  if ((short)*(ushort *)(param_1 + 0x4ea) < 0) {
    png_crc_finish(param_1,param_3);
    goto LAB_00101ceb;
  }
  if ((*(ushort *)(param_1 + 0x4ea) & 4) != 0) {
    pcVar6 = "too many profiles";
    goto LAB_00101cbf;
  }
  uVar13 = 0x51;
  if (param_3 < 0x52) {
    uVar13 = param_3;
  }
  param_3 = param_3 - uVar13;
  png_read_data(param_1,local_538,uVar13);
  png_calculate_crc(param_1,local_538,uVar13);
  if (param_3 < 0xb) goto LAB_00101d18;
  pcVar6 = local_538;
  uVar12 = 0;
  while (uVar10 = uVar12, *pcVar6 != '\0') {
    uVar12 = uVar10 + 1;
    pcVar6 = pcVar6 + 1;
    uVar11 = uVar10;
    if ((0x4f < uVar12) || (uVar13 <= uVar12)) goto LAB_00101c93;
  }
  uVar11 = uVar10 - 1;
  uVar12 = uVar10;
LAB_00101c93:
  local_54c[0] = param_3;
  if (uVar11 < 0x4f) {
    if ((uVar13 <= uVar12 + 1) || (uVar5 = (ulong)(uVar12 + 1), local_538[uVar5] != '\0')) {
      pcVar6 = "bad compression method";
      goto LAB_00101cbf;
    }
    iVar2 = png_inflate_claim(param_1,0x69434350);
    if (iVar2 == 0) {
      *(char **)(param_1 + 0x140) = local_538 + (uVar12 + 2);
      *(uint *)(param_1 + 0x148) = (uVar13 - 2) - uVar12;
      local_458 = 0;
      local_540 = 0x84;
      local_4d8 = (undefined1  [16])0x0;
      local_4c8 = (undefined1  [16])0x0;
      local_4b8 = (undefined1  [16])0x0;
      local_4a8 = (undefined1  [16])0x0;
      local_498 = (undefined1  [16])0x0;
      local_488 = (undefined1  [16])0x0;
      local_478 = (undefined1  [16])0x0;
      local_468 = (undefined1  [16])0x0;
      png_inflate_read_constprop_0_isra_0(param_1,local_448,local_54c,local_4d8,&local_540,0);
      if (local_540 != 0) {
LAB_00101e84:
        *(undefined4 *)(param_1 + 0x138) = 0;
        pcVar6 = *(char **)(param_1 + 0x170);
        param_3 = local_54c[0];
        goto LAB_00101d9f;
      }
      lVar1 = param_1 + 0x4a0;
      uVar13 = (uint)local_4d8._0_4_ >> 0x18 | (local_4d8._0_4_ & 0xff0000) >> 8 |
               (local_4d8._0_4_ & 0xff00) << 8 | local_4d8._0_4_ << 0x18;
      iVar2 = png_icc_check_length(param_1,lVar1,local_538,uVar13);
      if ((iVar2 == 0) ||
         (iVar2 = png_icc_check_header
                            (param_1,lVar1,local_538,uVar13,local_4d8,
                             *(undefined1 *)(param_1 + 0x267)), uVar12 = local_458, iVar2 == 0)) {
LAB_00101ecb:
        *(undefined4 *)(param_1 + 0x138) = 0;
        png_crc_finish(param_1,local_54c[0]);
        *(ushort *)(param_1 + 0x4ea) = *(ushort *)(param_1 + 0x4ea) | 0x8000;
        png_colorspace_sync(param_1,param_2);
        goto LAB_00101ceb;
      }
      puVar3 = (undefined4 *)png_read_buffer(param_1,(ulong)uVar13,2);
      if (puVar3 == (undefined4 *)0x0) {
        pcVar6 = "out of memory";
        *(undefined4 *)(param_1 + 0x138) = 0;
        goto LAB_00101cbf;
      }
      puVar7 = (undefined4 *)local_4d8;
      puVar9 = puVar3;
      for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (ulong)bVar15 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar15 * -2 + 1;
      }
      uVar14 = (ulong)((uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18) * 0xc);
      local_540 = uVar14;
      png_inflate_read_constprop_0_isra_0(param_1,local_448,local_54c,puVar3 + 0x21,&local_540,0);
      if (local_540 != 0) goto LAB_00101e84;
      iVar2 = png_icc_check_tag_table(param_1,lVar1,local_538,uVar13,puVar3);
      if (iVar2 == 0) goto LAB_00101ecb;
      local_540 = ((ulong)uVar13 - 0x84) - uVar14;
      png_inflate_read_constprop_0_isra_0
                (param_1,local_448,local_54c,(long)puVar3 + uVar14 + 0x84,&local_540,1);
      uVar12 = local_54c[0];
      if (local_54c[0] == 0) {
        if (local_540 != 0) {
LAB_00102105:
          pcVar6 = *(char **)(param_1 + 0x170);
          *(undefined4 *)(param_1 + 0x138) = 0;
          param_3 = local_54c[0];
          goto LAB_00101d9f;
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x132) & 0x10) == 0) {
          pcVar6 = "extra compressed data";
          *(undefined4 *)(param_1 + 0x138) = 0;
          goto LAB_00101cbf;
        }
        if (local_540 != 0) goto LAB_00102105;
        png_chunk_warning(param_1,"extra compressed data");
      }
      png_crc_finish(param_1,uVar12);
      png_icc_set_sRGB(param_1,lVar1,puVar3);
      if (param_2 == 0) {
LAB_001020ec:
        *(undefined4 *)(param_1 + 0x138) = 0;
        goto LAB_00101ceb;
      }
      png_free_data(param_1,param_2,0x10);
      pcVar6 = (char *)png_malloc_base(param_1,uVar5);
      *(char **)(param_2 + 0x88) = pcVar6;
      if (pcVar6 != (char *)0x0) {
        *(uint *)(param_2 + 0x98) = uVar13;
        pcVar8 = local_538;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar6 = *pcVar8;
          pcVar8 = pcVar8 + (ulong)bVar15 * -2 + 1;
          pcVar6 = pcVar6 + (ulong)bVar15 * -2 + 1;
        }
        *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x10;
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
        *(undefined8 *)(param_1 + 0x460) = 0;
        *(undefined4 **)(param_2 + 0x90) = puVar3;
        png_colorspace_sync(param_1,param_2);
        goto LAB_001020ec;
      }
      *(ushort *)(param_1 + 0x4ea) = *(ushort *)(param_1 + 0x4ea) | 0x8000;
      pcVar6 = "out of memory";
      png_colorspace_sync(param_1,param_2);
      *(ushort *)(param_1 + 0x4ea) = *(ushort *)(param_1 + 0x4ea) | 0x8000;
      *(undefined4 *)(param_1 + 0x138) = 0;
      png_colorspace_sync(param_1,param_2);
    }
    else {
      pcVar6 = *(char **)(param_1 + 0x170);
LAB_00101d9f:
      png_crc_finish(param_1,param_3);
      *(ushort *)(param_1 + 0x4ea) = *(ushort *)(param_1 + 0x4ea) | 0x8000;
      png_colorspace_sync(param_1,param_2);
      if (pcVar6 == (char *)0x0) goto LAB_00101ceb;
    }
  }
  else {
    pcVar6 = "bad keyword";
LAB_00101cbf:
    png_crc_finish(param_1,local_54c[0]);
    *(ushort *)(param_1 + 0x4ea) = *(ushort *)(param_1 + 0x4ea) | 0x8000;
    png_colorspace_sync(param_1,param_2);
  }
  png_chunk_benign_error(param_1,pcVar6);
LAB_00101ceb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_handle_sPLT(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar8;
  char *pcVar9;
  ushort *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  char *local_58;
  char local_50;
  ushort *local_48;
  int local_40;
  long local_30;
  
  uVar11 = (ulong)param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(param_1 + 0x42c);
  if (iVar2 == 0) {
LAB_001021cc:
    if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"missing IHDR");
    }
    if ((*(uint *)(param_1 + 300) & 4) == 0) {
      pcVar3 = (char *)png_read_buffer(param_1,param_3 + 1,2);
      if (pcVar3 == (char *)0x0) {
        png_crc_finish(param_1,uVar11);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          pcVar3 = "out of memory";
          goto LAB_001023c6;
        }
      }
      else {
        png_read_data(param_1,pcVar3,uVar11);
        png_calculate_crc(param_1,pcVar3,uVar11);
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 == 0) {
          pcVar3[uVar11] = '\0';
          cVar1 = *pcVar3;
          pcVar9 = pcVar3;
          while (cVar1 != '\0') {
            pcVar9 = pcVar9 + 1;
            cVar1 = *pcVar9;
          }
          if ((param_3 < 2) || (pcVar3 + (param_3 - 2) < pcVar9 + 1)) {
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              png_warning(param_1,"malformed sPLT chunk");
              return;
            }
            goto LAB_0010249b;
          }
          local_50 = pcVar9[1];
          puVar10 = (ushort *)(pcVar9 + 2);
          param_3 = param_3 - ((int)puVar10 - (int)pcVar3);
          uVar6 = (uint)(local_50 != '\b') * 4 + 6;
          uVar11 = (ulong)param_3 / (ulong)uVar6;
          if (param_3 % uVar6 == 0) {
            local_40 = (int)uVar11;
            local_48 = (ushort *)png_malloc_warn(param_1,uVar11 * 10);
            if (local_48 == (ushort *)0x0) {
              png_warning(param_1,"sPLT chunk requires too much memory");
            }
            else {
              if (0 < local_40) {
                puVar5 = local_48;
                do {
                  if (local_50 == '\b') {
                    *puVar5 = (ushort)(byte)*puVar10;
                    puVar7 = puVar10 + 2;
                    puVar5[1] = (ushort)*(byte *)((long)puVar10 + 1);
                    puVar5[2] = (ushort)(byte)puVar10[1];
                    uVar8 = (ushort)*(byte *)((long)puVar10 + 3);
                  }
                  else {
                    puVar7 = puVar10 + 4;
                    *puVar5 = *puVar10 << 8 | *puVar10 >> 8;
                    puVar5[1] = puVar10[1] << 8 | puVar10[1] >> 8;
                    puVar5[2] = puVar10[2] << 8 | puVar10[2] >> 8;
                    uVar8 = puVar10[3] << 8 | puVar10[3] >> 8;
                  }
                  puVar5[3] = uVar8;
                  puVar4 = puVar5 + 5;
                  puVar10 = puVar7 + 1;
                  puVar5[4] = *puVar7 << 8 | *puVar7 >> 8;
                  puVar5 = puVar4;
                } while (puVar4 != local_48 + (long)local_40 * 5);
              }
              local_58 = pcVar3;
              png_set_sPLT(param_1,param_2,&local_58,1);
              png_free(param_1,local_48);
            }
          }
          else {
            png_warning(param_1,"sPLT chunk has bad length");
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
    }
    else {
      png_crc_finish(param_1,uVar11);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar3 = "out of place";
LAB_001023c6:
        png_chunk_benign_error(param_1,pcVar3);
        return;
      }
    }
  }
  else {
    if (iVar2 != 1) {
      *(int *)(param_1 + 0x42c) = iVar2 + -1;
      if (iVar2 + -1 != 1) goto LAB_001021cc;
      png_warning(param_1,"No space in chunk cache for sPLT");
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_crc_finish(param_1,uVar11);
      return;
    }
  }
LAB_0010249b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_tRNS(long param_1,long param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  uint local_138;
  ushort local_134;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_1 + 300);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) != 0) {
LAB_00102630:
    png_crc_finish(param_1,param_3);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "out of place";
      goto LAB_00102589;
    }
    goto LAB_00102793;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    png_crc_finish(param_1,param_3);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "duplicate";
      goto LAB_00102589;
    }
    goto LAB_00102793;
  }
  cVar1 = *(char *)(param_1 + 0x267);
  if (cVar1 == '\0') {
    if (param_3 == 2) {
      png_read_data(param_1,&local_138,2);
      png_calculate_crc(param_1,&local_138,2);
      *(undefined2 *)(param_1 + 0x260) = 1;
      *(ushort *)(param_1 + 0x2f8) = (ushort)local_138 << 8 | (ushort)local_138 >> 8;
LAB_001025e4:
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 == 0) {
        png_set_tRNS(param_1,param_2,&local_138,*(undefined2 *)(param_1 + 0x260),param_1 + 0x2f0);
      }
      else {
        *(undefined2 *)(param_1 + 0x260) = 0;
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102793;
    }
  }
  else if (cVar1 == '\x02') {
    if (param_3 == 6) {
      png_read_data(param_1,&local_138,6);
      png_calculate_crc(param_1,&local_138,6);
      *(undefined2 *)(param_1 + 0x260) = 1;
      auVar5 = psllw(ZEXT416(local_138),8);
      *(ushort *)(param_1 + 0x2f6) = local_134 << 8 | local_134 >> 8;
      *(uint *)(param_1 + 0x2f2) =
           auVar5._0_4_ | CONCAT22((ushort)(local_138 >> 0x18),(ushort)local_138 >> 8);
      goto LAB_001025e4;
    }
  }
  else {
    if (cVar1 != '\x03') {
      png_crc_finish(param_1,param_3);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar4 = "invalid with alpha channel";
        goto LAB_00102589;
      }
      goto LAB_00102793;
    }
    if ((uVar2 & 2) == 0) goto LAB_00102630;
    if ((param_3 <= *(ushort *)(param_1 + 600)) && (param_3 - 1 < 0x100)) {
      png_read_data(param_1,&local_138,param_3);
      png_calculate_crc(param_1,&local_138,param_3);
      *(short *)(param_1 + 0x260) = (short)param_3;
      goto LAB_001025e4;
    }
  }
  png_crc_finish(param_1,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    pcVar4 = "invalid";
LAB_00102589:
    png_chunk_benign_error(param_1,pcVar4);
    return;
  }
LAB_00102793:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_bKGD(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  byte local_48 [2];
  ulong local_46;
  undefined4 local_38;
  ushort local_34;
  long local_30;
  
  uVar2 = *(uint *)(param_1 + 300);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = uVar2 & 1;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) != 0) {
LAB_001028f5:
    png_crc_finish(param_1);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar8 = "out of place";
LAB_00102836:
      png_chunk_benign_error(param_1,pcVar8);
      return;
    }
    goto LAB_00102a80;
  }
  if (*(byte *)(param_1 + 0x267) == 3) {
    if ((uVar2 & 2) == 0) goto LAB_001028f5;
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) goto LAB_00102935;
  }
  else {
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
LAB_00102935:
      png_crc_finish(param_1);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar8 = "duplicate";
        goto LAB_00102836;
      }
      goto LAB_00102a80;
    }
    uVar5 = (-(uint)((*(byte *)(param_1 + 0x267) & 2) == 0) & 0xfffffffc) + 6;
  }
  if (uVar5 != param_3) {
    png_crc_finish(param_1);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar8 = "invalid";
      goto LAB_00102836;
    }
    goto LAB_00102a80;
  }
  png_read_data(param_1,&local_38,uVar5);
  png_calculate_crc(param_1,&local_38,uVar5);
  iVar6 = png_crc_finish(param_1,0);
  if (iVar6 != 0) goto LAB_001028d0;
  bVar3 = (byte)local_38;
  if (*(byte *)(param_1 + 0x267) == 3) {
    local_48[0] = (byte)local_38;
    if ((param_2 == 0) || (*(ushort *)(param_2 + 0x20) == 0)) {
      local_46 = 0;
    }
    else {
      if (*(ushort *)(param_2 + 0x20) <= (ushort)(byte)local_38) {
        png_chunk_benign_error(param_1,"invalid index");
        goto LAB_001028d0;
      }
      pbVar7 = (byte *)((ulong)(byte)local_38 * 3 + *(long *)(param_1 + 0x250));
      local_46._0_4_ = (uint)CONCAT12(pbVar7[1],(ushort)*pbVar7);
      local_46 = (ulong)CONCAT14(pbVar7[2],(uint)local_46);
    }
LAB_0010297c:
    png_set_bKGD(param_1,param_2,local_48);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x268);
    uVar4 = (ushort)local_38;
    if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
      if ((8 < bVar1) || ((bVar3 == 0 && (local_38._1_1_ >> (bVar1 & 0x1f) == 0)))) {
        local_48[0] = 0;
        auVar9 = ZEXT216((ushort)(uVar4 << 8 | uVar4 >> 8));
        auVar9 = pshuflw(auVar9,auVar9,0);
        local_46 = auVar9._0_8_;
        goto LAB_0010297c;
      }
      png_chunk_benign_error(param_1,"invalid gray level");
    }
    else {
      if ((8 < bVar1) || ((local_38._2_1_ == '\0' && bVar3 == 0) && (char)local_34 == '\0')) {
        local_48[0] = 0;
        auVar9 = psllw(ZEXT416(local_38),8);
        local_46 = (ulong)CONCAT24(local_34 << 8 | local_34 >> 8,
                                   auVar9._0_4_ |
                                   CONCAT22((ushort)(local_38 >> 0x18),(ushort)local_38 >> 8));
        goto LAB_0010297c;
      }
      png_chunk_benign_error(param_1,"invalid color");
    }
  }
LAB_001028d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102a80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_cICP(long param_1,long param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 10) & 2) == 0)) {
      if (param_3 == 4) {
        png_read_data(param_1,&local_24,4);
        png_calculate_crc(param_1,&local_24,4);
        iVar1 = png_crc_finish(param_1,0);
        if (iVar1 == 0) {
          png_set_cICP(param_1,param_2,local_24,local_23,local_22,local_21);
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_chunk_benign_error(param_1,"invalid");
          return;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"duplicate");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_eXIf(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if (param_3 < 2) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "too short";
LAB_00102c82:
      png_chunk_benign_error(param_1,pcVar4);
      return;
    }
  }
  else if ((param_2 == 0) || ((*(byte *)(param_2 + 10) & 1) != 0)) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "duplicate";
      goto LAB_00102c82;
    }
  }
  else {
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x8000;
    lVar2 = png_malloc_warn(param_1,(ulong)param_3);
    *(long *)(param_2 + 0x100) = lVar2;
    if (lVar2 == 0) {
      png_crc_finish(param_1,param_3);
      pcVar4 = "out of memory";
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102c82;
    }
    else {
      uVar3 = 0;
      do {
        png_read_data(param_1,&local_41,1);
        png_calculate_crc(param_1,&local_41,1);
        *(byte *)(*(long *)(param_2 + 0x100) + uVar3) = local_41;
        if ((uVar3 == 1) &&
           (((local_41 & 0xfb) != 0x49 || (local_41 != **(byte **)(param_2 + 0x100))))) {
          png_crc_finish(param_1,param_3 - 2);
          png_chunk_benign_error(param_1,"incorrect byte-order specifier");
          png_free(param_1,*(undefined8 *)(param_2 + 0x100));
          *(undefined8 *)(param_2 + 0x100) = 0;
          goto LAB_00102d88;
        }
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
      iVar1 = png_crc_finish(param_1,0);
      if (iVar1 == 0) {
        png_set_eXIf_1(param_1,param_2,param_3,*(undefined8 *)(param_2 + 0x100));
      }
      png_free(param_1,*(undefined8 *)(param_2 + 0x100));
      *(undefined8 *)(param_2 + 0x100) = 0;
LAB_00102d88:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_hIST(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  ushort local_238 [259];
  ushort local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 6) == 2) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x40) == 0)) {
      if ((param_3 & 1) == 0) {
        uVar1 = (uint)((param_3 & 0xffffffff) >> 1);
        if ((*(ushort *)(param_1 + 600) == uVar1) && ((uint)param_3 < 0x202)) {
          if (uVar1 != 0) {
            puVar3 = local_238;
            do {
              puVar4 = puVar3 + 1;
              png_read_data(param_1,&local_32,2);
              png_calculate_crc(param_1,&local_32,2);
              *puVar3 = local_32 << 8 | local_32 >> 8;
              puVar3 = puVar4;
            } while ((ushort *)((long)local_238 + (ulong)(uVar1 * 2)) != puVar4);
          }
          iVar2 = png_crc_finish(param_1,0);
          if (iVar2 == 0) {
            png_set_hIST(param_1,param_2,local_238);
          }
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00102fd0;
        }
      }
      png_crc_finish(param_1);
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102fd0:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar5 = "invalid";
    }
    else {
      png_crc_finish();
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102fd0;
      pcVar5 = "duplicate";
    }
  }
  else {
    png_crc_finish();
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102fd0;
    pcVar5 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar5);
  return;
}



void png_handle_pHYs(long param_1,long param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_29;
  uint local_25;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 4) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
      if (param_3 == 9) {
        png_read_data(param_1,&local_29,9);
        png_calculate_crc(param_1,&local_29,9);
        iVar1 = png_crc_finish(param_1,0);
        if (iVar1 == 0) {
          png_set_pHYs(param_1,param_2,
                       local_29 >> 0x18 | (local_29 & 0xff0000) >> 8 | (local_29 & 0xff00) << 8 |
                       local_29 << 0x18,
                       local_25 >> 0x18 | (local_25 & 0xff0000) >> 8 | (local_25 & 0xff00) << 8 |
                       local_25 << 0x18,local_21);
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_chunk_benign_error(param_1,"invalid");
          return;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"duplicate");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_oFFs(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  uint local_29;
  uint local_25;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 300) & 4) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 9) & 1) == 0)) {
      if (param_3 == 9) {
        png_read_data(param_1,&local_29,9);
        png_calculate_crc(param_1,&local_29,9);
        iVar1 = png_crc_finish(param_1,0);
        if (iVar1 == 0) {
          uVar3 = local_29 >> 0x18 | (local_29 & 0xff0000) >> 8 | (local_29 & 0xff00) << 8 |
                  local_29 << 0x18;
          if ((char)local_29 < '\0') {
            uVar3 = -(-uVar3 & 0x7fffffff);
          }
          uVar2 = local_25 >> 0x18 | (local_25 & 0xff0000) >> 8 | (local_25 & 0xff00) << 8 |
                  local_25 << 0x18;
          if ((char)local_25 < '\0') {
            uVar2 = -(-uVar2 & 0x7fffffff);
          }
          png_set_oFFs(param_1,param_2,uVar3,uVar2,local_21);
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_chunk_benign_error(param_1,"invalid");
          return;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"duplicate");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"out of place");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_pCAL(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar7 = (ulong)param_3;
  if ((*(uint *)(param_1 + 300) & 4) != 0) {
    png_crc_finish(param_1,uVar7);
    pcVar10 = "out of place";
    goto LAB_001033e9;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 4) != 0)) {
    png_crc_finish(param_1,uVar7);
    pcVar10 = "duplicate";
    goto LAB_001033e9;
  }
  pcVar4 = (char *)png_read_buffer(param_1,param_3 + 1,2);
  if (pcVar4 == (char *)0x0) {
    png_crc_finish(param_1,uVar7);
    pcVar10 = "out of memory";
    goto LAB_001033e9;
  }
  png_read_data(param_1,pcVar4,uVar7);
  png_calculate_crc(param_1,pcVar4,uVar7);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 != 0) {
    return;
  }
  pcVar1 = pcVar4 + uVar7;
  *pcVar1 = '\0';
  cVar6 = *pcVar4;
  pcVar9 = pcVar4;
  while (cVar6 != '\0') {
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  pcVar10 = "invalid";
  if ((long)pcVar1 - (long)pcVar9 < 0xd) goto LAB_001033e9;
  uVar13 = *(uint *)(pcVar9 + 1);
  uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
  if (pcVar9[1] < '\0') {
    uVar11 = *(uint *)(pcVar9 + 5);
    uVar13 = -(-uVar13 & 0x7fffffff);
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    if (pcVar9[5] < '\0') goto LAB_00103420;
LAB_001033ba:
    bVar12 = pcVar9[9];
    uVar7 = (ulong)(byte)pcVar9[10];
    if (bVar12 != 0) goto LAB_001033cd;
LAB_001033c8:
    if ((char)uVar7 == '\x02') goto LAB_001033cd;
  }
  else {
    uVar11 = *(uint *)(pcVar9 + 5);
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    if (-1 < pcVar9[5]) goto LAB_001033ba;
LAB_00103420:
    bVar12 = pcVar9[9];
    uVar7 = (ulong)(byte)pcVar9[10];
    uVar11 = -(-uVar11 & 0x7fffffff);
    if (bVar12 == 0) goto LAB_001033c8;
LAB_001033cd:
    cVar6 = (char)uVar7;
    if (((1 < (byte)(bVar12 - 1)) || (cVar6 == '\x03')) && ((bVar12 != 3 || (cVar6 == '\x04')))) {
      if (3 < bVar12) {
        png_chunk_benign_error(param_1,"unrecognized equation type");
      }
      cVar2 = pcVar9[0xb];
      pcVar10 = pcVar9 + 0xb;
      while (cVar2 != '\0') {
        pcVar10 = pcVar10 + 1;
        cVar2 = *pcVar10;
      }
      puVar5 = (undefined8 *)png_malloc_warn(param_1);
      if (puVar5 != (undefined8 *)0x0) {
        puVar8 = puVar5;
        if (cVar6 != '\0') {
          do {
            pcVar10 = pcVar10 + 1;
            *puVar8 = pcVar10;
            if (pcVar1 < pcVar10) {
LAB_001035d0:
              png_free(param_1,puVar5);
              pcVar10 = "invalid data";
              goto LAB_001033e9;
            }
            while (*pcVar10 != '\0') {
              pcVar10 = pcVar10 + 1;
              if (pcVar1 + 1 == pcVar10) goto LAB_001035d0;
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar5 + uVar7);
        }
        png_set_pCAL(param_1,param_2,pcVar4,uVar13,uVar11,bVar12,uVar7,pcVar9 + 0xb,puVar5);
        png_free(param_1,puVar5);
        return;
      }
      pcVar10 = "out of memory";
      goto LAB_001033e9;
    }
  }
  pcVar10 = "invalid parameter count";
LAB_001033e9:
  png_chunk_benign_error(param_1,pcVar10);
  return;
}



void png_handle_sCAL(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar5 = (ulong)param_3;
  if ((*(uint *)(param_1 + 300) & 4) != 0) {
    png_crc_finish(param_1,uVar5);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "out of place";
LAB_0010377d:
      png_chunk_benign_error(param_1,pcVar4);
      return;
    }
    goto LAB_001038f1;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 0x40) != 0)) {
    png_crc_finish(param_1,uVar5);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "duplicate";
      goto LAB_0010377d;
    }
    goto LAB_001038f1;
  }
  if (param_3 < 4) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "invalid";
      goto LAB_0010377d;
    }
    goto LAB_001038f1;
  }
  pcVar4 = (char *)png_read_buffer(param_1,param_3 + 1,2);
  if (pcVar4 == (char *)0x0) {
    png_chunk_benign_error(param_1,"out of memory");
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_crc_finish(param_1,uVar5);
      return;
    }
    goto LAB_001038f1;
  }
  png_read_data(param_1,pcVar4,uVar5);
  png_calculate_crc(param_1,pcVar4,uVar5);
  pcVar4[uVar5] = '\0';
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 == 0) {
    if (1 < (byte)(*pcVar4 - 1U)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar4 = "invalid unit";
        goto LAB_0010377d;
      }
      goto LAB_001038f1;
    }
    local_48 = 1;
    local_4c = 0;
    iVar3 = png_check_fp_number(pcVar4,uVar5,&local_4c,&local_48);
    if ((iVar3 != 0) && (local_48 < uVar5)) {
      uVar1 = local_48 + 1;
      pcVar2 = pcVar4 + local_48;
      local_48 = uVar1;
      if (*pcVar2 == '\0') {
        if ((local_4c & 0x188) == 0x108) {
          local_4c = 0;
          iVar3 = png_check_fp_number(pcVar4,uVar5,&local_4c,&local_48);
          if ((iVar3 == 0) || (local_48 != uVar5)) {
            png_chunk_benign_error(param_1,"bad height format");
          }
          else if ((local_4c & 0x188) == 0x108) {
            png_set_sCAL_s(param_1,param_2,*pcVar4,pcVar4 + 1,pcVar4 + uVar1);
          }
          else {
            png_chunk_benign_error(param_1,"non-positive height");
          }
        }
        else {
          png_chunk_benign_error(param_1,"non-positive width");
        }
        goto LAB_00103730;
      }
    }
    png_chunk_benign_error(param_1,"bad width format");
  }
LAB_00103730:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001038f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_tIME(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  ushort local_30;
  undefined4 local_2e;
  undefined1 local_2a;
  ushort local_28;
  undefined4 local_26;
  undefined1 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 300);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_2 == 0) || ((*(byte *)(param_2 + 9) & 2) == 0)) {
    if ((uVar1 & 4) != 0) {
      *(uint *)(param_1 + 300) = uVar1 | 8;
    }
    if (param_3 == 7) {
      png_read_data(param_1,&local_28,7);
      png_calculate_crc(param_1,&local_28,7);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 == 0) {
        local_2a = local_22;
        local_2e = local_26;
        local_30 = local_28 << 8 | local_28 >> 8;
        png_set_tIME(param_1,param_2,&local_30);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_chunk_benign_error(param_1,"invalid");
        return;
      }
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      png_chunk_benign_error(param_1,"duplicate");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_tEXt(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  char *local_60;
  char *local_58;
  size_t local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  uVar5 = (ulong)param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_1 + 0x42c);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_crc_finish(param_1,uVar5);
        return;
      }
      goto LAB_00103c38;
    }
    *(int *)(param_1 + 0x42c) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      png_crc_finish(param_1,uVar5);
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103c38;
      pcVar4 = "no space in chunk cache";
      goto LAB_00103bfe;
    }
  }
  uVar2 = *(uint *)(param_1 + 300);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 300) = uVar2 | 8;
  }
  pcVar4 = (char *)png_read_buffer(param_1,param_3 + 1,1);
  if (pcVar4 == (char *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = "out of memory";
LAB_00103bfe:
      png_chunk_benign_error(param_1,pcVar4);
      return;
    }
  }
  else {
    png_read_data(param_1,pcVar4,uVar5);
    png_calculate_crc(param_1,pcVar4,uVar5);
    iVar3 = png_crc_finish(param_1,0);
    if (iVar3 == 0) {
      pcVar4[uVar5] = '\0';
      cVar1 = *pcVar4;
      local_58 = pcVar4;
      while (cVar1 != '\0') {
        local_58 = local_58 + 1;
        cVar1 = *local_58;
      }
      local_68[0] = 0xffffffff;
      local_58 = local_58 + (pcVar4 + uVar5 != local_58);
      local_40 = (undefined1  [16])0x0;
      local_48 = 0;
      local_60 = pcVar4;
      local_50 = strlen(local_58);
      iVar3 = png_set_text_2(param_1,param_2,local_68,1);
      if (iVar3 != 0) {
        png_warning(param_1,"Insufficient memory to process text chunk");
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00103c38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_zTXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_1 + 0x42c);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_crc_finish(param_1,param_3);
        return;
      }
      goto LAB_00103f20;
    }
    *(int *)(param_1 + 0x42c) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103f20;
      pcVar7 = "no space in chunk cache";
      goto LAB_00103d58;
    }
  }
  uVar1 = *(uint *)(param_1 + 300);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 300) = uVar1 | 8;
  }
  pcVar5 = (char *)png_read_buffer(param_1,param_3,2);
  if (pcVar5 == (char *)0x0) {
    png_crc_finish(param_1,param_3);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar7 = "out of memory";
      goto LAB_00103d58;
    }
    goto LAB_00103f20;
  }
  png_read_data(param_1,pcVar5,param_3);
  png_calculate_crc(param_1,pcVar5,param_3);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 != 0) goto LAB_00103db8;
  if (param_3 == 0) {
LAB_00103dec:
    pcVar7 = "bad keyword";
  }
  else {
    pcVar7 = pcVar5;
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      if (*pcVar7 == '\0') {
        uVar8 = (ulong)uVar6;
        uVar6 = uVar6 - 1;
        goto joined_r0x00103de6;
      }
      pcVar7 = pcVar7 + 1;
      uVar1 = uVar6 + 1;
    } while (param_3 != uVar6 + 1);
    uVar8 = (ulong)param_3;
joined_r0x00103de6:
    if (0x4e < uVar6) goto LAB_00103dec;
    iVar3 = (int)uVar8;
    if (param_3 < iVar3 + 3U) {
      pcVar7 = "truncated";
    }
    else {
      pcVar7 = "unknown compression type";
      if (pcVar5[iVar3 + 1] == '\0') {
        local_70 = -1;
        iVar4 = png_decompress_chunk_constprop_0(param_1,param_3,(ulong)(iVar3 + 2),&local_70);
        if (iVar4 == 1) {
          lVar2 = *(long *)(param_1 + 0x460);
          if (lVar2 == 0) {
            pcVar7 = "Read failure in png_handle_zTXt";
          }
          else {
            *(undefined1 *)(lVar2 + local_70 + (ulong)(iVar3 + 2)) = 0;
            lStack_58 = lVar2 + 2 + uVar8;
            local_50 = local_70;
            local_68[0] = 0;
            local_48 = 0;
            local_40 = (undefined1  [16])0x0;
            local_60 = lVar2;
            iVar3 = png_set_text_2(param_1,param_2,local_68,1);
            pcVar7 = "insufficient memory";
            if (iVar3 == 0) goto LAB_00103db8;
          }
        }
        else {
          pcVar7 = *(char **)(param_1 + 0x170);
          if (pcVar7 == (char *)0x0) {
LAB_00103db8:
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
            goto LAB_00103f20;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00103d58:
    png_chunk_benign_error(param_1,pcVar7);
    return;
  }
LAB_00103f20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_iTXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  ulong local_80;
  int local_78 [2];
  char *local_70;
  char *local_68;
  undefined8 local_60;
  ulong local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_1 + 0x42c);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_crc_finish(param_1,param_3);
        return;
      }
      goto LAB_0010430d;
    }
    *(int *)(param_1 + 0x42c) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010430d;
      pcVar5 = "no space in chunk cache";
      goto LAB_0010404f;
    }
  }
  uVar8 = *(uint *)(param_1 + 300);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar8 & 4) != 0) {
    *(uint *)(param_1 + 300) = uVar8 | 8;
  }
  pcVar4 = (char *)png_read_buffer(param_1,param_3 + 1,1);
  if (pcVar4 == (char *)0x0) {
    png_crc_finish(param_1,param_3);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar5 = "out of memory";
      goto LAB_0010404f;
    }
    goto LAB_0010430d;
  }
  png_read_data(param_1,pcVar4,param_3);
  png_calculate_crc(param_1,pcVar4,param_3);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 != 0) {
LAB_00104080:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010430d;
  }
  if (param_3 == 0) {
LAB_001040b4:
    pcVar5 = "bad keyword";
  }
  else {
    pcVar5 = pcVar4;
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      if (*pcVar5 == '\0') {
        uVar7 = uVar6;
        uVar6 = uVar6 - 1;
        break;
      }
      pcVar5 = pcVar5 + 1;
      uVar8 = uVar6 + 1;
      uVar7 = param_3;
    } while (param_3 != uVar6 + 1);
    if (0x4e < uVar6) goto LAB_001040b4;
    if (param_3 < uVar7 + 5) {
LAB_00104031:
      pcVar5 = "truncated";
    }
    else {
      bVar2 = pcVar4[uVar7 + 1];
      if ((bVar2 == 0) ||
         ((pcVar5 = "bad compression info", bVar2 == 1 && (pcVar4[uVar7 + 2] == '\0')))) {
        uVar7 = uVar7 + 3;
        uVar8 = uVar7;
        if (uVar7 < param_3) {
          pcVar5 = pcVar4 + uVar7;
          do {
            uVar6 = uVar8 + 1;
            if (*pcVar5 == '\0') break;
            pcVar5 = pcVar5 + 1;
            uVar8 = uVar6;
          } while (uVar6 < param_3);
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8;
        if (uVar8 < param_3) {
          pcVar5 = pcVar4 + uVar8;
          do {
            uVar1 = uVar6 + 1;
            if (*pcVar5 == '\0') break;
            pcVar5 = pcVar5 + 1;
            uVar6 = uVar1;
          } while (uVar1 < param_3);
        }
        uVar6 = uVar6 + 1;
        if (((bVar2 & 1) == 0) && (uVar6 <= param_3)) {
          local_80 = (ulong)(param_3 - uVar6);
          pcVar4[uVar6 + local_80] = '\0';
          local_78[0] = 2 - (uint)(bVar2 == 0);
        }
        else {
          if ((param_3 <= uVar6) || ((bVar2 & 1) == 0)) goto LAB_00104031;
          local_80 = 0xffffffffffffffff;
          iVar3 = png_decompress_chunk_constprop_0(param_1,param_3,(ulong)uVar6,&local_80);
          if (iVar3 == 1) {
            pcVar4 = *(char **)(param_1 + 0x460);
          }
          else {
            pcVar5 = *(char **)(param_1 + 0x170);
            if (pcVar5 != (char *)0x0) goto LAB_00104038;
          }
          pcVar4[uVar6 + local_80] = '\0';
          local_78[0] = 2;
        }
        local_68 = pcVar4 + uVar6;
        local_50 = pcVar4 + uVar7;
        local_48 = pcVar4 + uVar8;
        local_60 = 0;
        local_70 = pcVar4;
        local_58 = local_80;
        iVar3 = png_set_text_2(param_1,param_2,local_78,1);
        if (iVar3 == 0) goto LAB_00104080;
        pcVar5 = "insufficient memory";
      }
    }
  }
LAB_00104038:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010404f:
    png_chunk_benign_error(param_1,pcVar5);
    return;
  }
LAB_0010430d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_handle_unknown(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x3b8) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x3c0);
    }
    if (param_4 != 3) {
      if (param_4 != 2) {
        png_crc_finish();
        lVar1 = *(long *)(param_1 + 0x440);
        goto joined_r0x0010446f;
      }
      if ((*(byte *)(param_1 + 0x21b) & 0x20) == 0) {
        png_crc_finish();
      }
      else {
        iVar2 = png_cache_unknown_chunk(param_1,param_3);
        if (iVar2 == 0) goto LAB_00104390;
      }
      goto LAB_001043f5;
    }
    iVar2 = png_cache_unknown_chunk(param_1,param_3);
    if (iVar2 == 0) goto LAB_00104390;
LAB_001043fe:
    iVar2 = *(int *)(param_1 + 0x42c);
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x42c) = iVar2 + -1;
        }
        png_set_unknown_chunks(param_1,param_2,param_1 + 0x438,1);
LAB_00104436:
        if (*(long *)(param_1 + 0x440) == 0) {
          return;
        }
        png_free(param_1);
        *(undefined8 *)(param_1 + 0x440) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x42c) = 1;
      png_chunk_benign_error(param_1,"no space in chunk cache");
    }
  }
  else {
    iVar2 = png_cache_unknown_chunk(param_1,param_3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(param_1 + 0x3b8))(param_1,param_1 + 0x438);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"error in user chunk");
      }
      if (iVar2 != 0) goto LAB_00104436;
      if (param_4 < 2) {
        if (*(int *)(param_1 + 0x3c0) < 2) {
          png_chunk_warning(param_1,"Saving unknown chunk:");
          png_app_warning(param_1,
                          "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks"
                         );
        }
      }
      else {
        if (param_4 == 3) goto LAB_001043fe;
        if (param_4 != 2) goto LAB_00104390;
      }
LAB_001043f5:
      if ((*(byte *)(param_1 + 0x21b) & 0x20) != 0) goto LAB_001043fe;
    }
  }
LAB_00104390:
  lVar1 = *(long *)(param_1 + 0x440);
joined_r0x0010446f:
  if (lVar1 != 0) {
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  if ((*(byte *)(param_1 + 0x21b) & 0x20) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"unhandled critical chunk");
}



void png_check_chunk_name(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 & 0xff) - 0x41 < 0x3a) && (5 < (param_2 & 0xff) - 0x5b)) {
    iVar1 = 4;
    do {
      param_2 = param_2 >> 8;
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        return;
      }
    } while (((param_2 & 0xff) - 0x41 < 0x3a) && (5 < (param_2 & 0xff) - 0x5b));
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}



void png_check_chunk_length(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x430);
  uVar3 = 0x7fffffff;
  if (uVar5 < 0x80000000) {
    uVar3 = uVar5;
  }
  if (uVar5 == 0) {
    uVar3 = 0x7fffffff;
  }
  if (*(int *)(param_1 + 0x218) == 0x49444154) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x1f8) * (ulong)*(byte *)(param_1 + 0x26b);
    if (8 < *(byte *)(param_1 + 0x268)) {
      lVar2 = lVar2 * 2;
    }
    lVar6 = 0x8000000a;
    uVar5 = lVar2 + 1 + (ulong)(-(uint)(*(char *)(param_1 + 0x264) != '\0') & 6);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5;
    uVar4 = 0x7fffffff;
    if ((ulong)*(uint *)(param_1 + 0x1fc) <=
        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffff)) / auVar1,0)) {
      uVar4 = *(uint *)(param_1 + 0x1fc) * uVar5;
      lVar6 = uVar4 + 0xb;
    }
    if (0x7f36 < uVar5) {
      uVar5 = 0x7f36;
    }
    uVar5 = (uVar4 / uVar5) * 5 + lVar6;
    if (0x7fffffff < uVar5) {
      uVar5 = 0x7fffffff;
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 < (param_2 & 0xffffffff)) goto LAB_0010464b;
  }
  else if (uVar3 < (param_2 & 0xffffffff)) {
LAB_0010464b:
    png_benign_error(param_1,"chunk data is too large");
    return;
  }
  return;
}



uint png_read_chunk_header(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x474) = 0x21;
  png_read_data(param_1,&local_28,8);
  uVar4 = local_28 >> 0x18 | (local_28 & 0xff0000) >> 8 | (local_28 & 0xff00) << 8 |
          local_28 << 0x18;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
  *(uint *)(param_1 + 0x218) =
       local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 | local_24 << 0x18;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_24,4);
  uVar1 = *(uint *)(param_1 + 0x218) & 0xff;
  if ((uVar1 - 0x41 < 0x3a) && (5 < uVar1 - 0x5b)) {
    iVar2 = 4;
    uVar3 = (ulong)*(uint *)(param_1 + 0x218);
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        png_check_chunk_length(param_1,uVar4);
        *(undefined4 *)(param_1 + 0x474) = 0x41;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar1 = (uint)(uVar3 >> 8) & 0xff;
    } while ((uVar1 - 0x41 < 0x3a) && (uVar3 = uVar3 >> 8, 5 < uVar1 - 0x5b));
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}



void png_combine_row(long param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  size_t __n;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  byte bVar19;
  
  bVar3 = *(byte *)(param_1 + 0x26f);
  uVar7 = (ulong)bVar3;
  uVar12 = *(uint *)(param_1 + 0x1f8);
  uVar16 = (ulong)uVar12;
  bVar4 = *(byte *)(param_1 + 0x265);
  if (bVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row logic error");
  }
  pbVar17 = (byte *)(*(long *)(param_1 + 0x228) + 1);
  uVar15 = (uint)bVar3;
  if (*(ulong *)(param_1 + 0x240) != 0) {
    if (bVar3 < 8) {
      uVar10 = uVar7 * uVar16 + 7 >> 3;
    }
    else {
      uVar10 = (bVar3 >> 3) * uVar16;
    }
    if (*(ulong *)(param_1 + 0x240) != uVar10) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal row size calculation error");
    }
  }
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row width error");
  }
  uVar18 = uVar12 * uVar15 & 7;
  bVar19 = (byte)uVar18;
  if (uVar18 == 0) {
    bVar14 = 0;
    pbVar13 = (byte *)0x0;
  }
  else {
    if (bVar3 < 8) {
      uVar10 = uVar7 * uVar16 + 7 >> 3;
    }
    else {
      uVar10 = (bVar3 >> 3) * uVar16;
    }
    pbVar13 = param_2 + (uVar10 - 1);
    bVar14 = *pbVar13;
    if ((*(byte *)(param_1 + 0x136) & 1) != 0) {
      bVar19 = (byte)(0xff << bVar19);
      cVar5 = *(char *)(param_1 + 0x264);
      goto joined_r0x0010488b;
    }
    bVar19 = (byte)(0xff >> bVar19);
  }
  cVar5 = *(char *)(param_1 + 0x264);
joined_r0x0010488b:
  if ((((cVar5 == '\0') || ((*(uint *)(param_1 + 0x134) & 2) == 0)) ||
      (uVar18 = (uint)bVar4, 5 < uVar18)) ||
     ((param_3 != 0 && ((param_3 != 1 || ((bVar4 & 1) == 0)))))) {
    if (bVar3 < 8) {
      __n = uVar7 * uVar16 + 7 >> 3;
    }
    else {
      __n = (bVar3 >> 3) * uVar16;
    }
    memcpy(param_2,pbVar17,__n);
  }
  else {
    uVar9 = (bVar4 & 1) << (3U - (char)(bVar4 + 1 >> 1) & 0x1f) & 7;
    if (uVar12 <= uVar9) {
      return;
    }
    if (7 < uVar15) {
      if ((bVar3 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid user transform pixel depth");
      }
      bVar3 = bVar3 >> 3;
      uVar10 = (ulong)(uVar9 * bVar3);
      uVar7 = (uint)bVar3 * uVar16 - uVar10;
      param_2 = param_2 + uVar10;
      pbVar17 = pbVar17 + uVar10;
      uVar12 = (uint)bVar3;
      if (param_3 != 0) {
        uVar12 = (uint)bVar3 << ((byte)(6 - uVar18 >> 1) & 0x1f);
        if (uVar7 < uVar12) {
          uVar12 = (uint)uVar7;
        }
      }
      uVar15 = (uint)bVar3 << ((byte)(7 - uVar18 >> 1) & 0x1f);
      uVar16 = (ulong)uVar15;
      if (uVar12 == 2) {
        do {
          *param_2 = *pbVar17;
          param_2[1] = pbVar17[1];
          if (uVar7 <= uVar16) {
            return;
          }
          uVar7 = uVar7 - uVar16;
          pbVar17 = pbVar17 + uVar16;
          param_2 = param_2 + uVar16;
        } while (uVar7 != 1);
        *param_2 = *pbVar17;
        return;
      }
      if (uVar12 == 3) {
        while( true ) {
          *param_2 = *pbVar17;
          param_2[1] = pbVar17[1];
          param_2[2] = pbVar17[2];
          if (uVar7 <= uVar16) break;
          pbVar17 = pbVar17 + uVar16;
          param_2 = param_2 + uVar16;
          uVar7 = uVar7 - uVar16;
        }
        return;
      }
      if (uVar12 != 1) {
        if (((uVar12 < 0x10) && ((((ulong)pbVar17 | (ulong)param_2) & 1) == 0)) &&
           (((uVar12 | uVar15) & 1) == 0)) {
          if (((((ulong)pbVar17 | (ulong)param_2) & 3) == 0) && (((uVar12 | uVar15) & 3) == 0)) {
            uVar15 = uVar15 - uVar12 & 0xfffffffc;
            pbVar13 = param_2;
            while( true ) {
              do {
                pbVar2 = param_2 + 4;
                pbVar1 = pbVar17 + 4;
                *(undefined4 *)param_2 = *(undefined4 *)pbVar17;
                pbVar17 = pbVar1;
                param_2 = pbVar2;
              } while (pbVar13 + ((ulong)uVar12 - (long)pbVar2) != (byte *)0x0);
              if (uVar7 <= uVar16) break;
              uVar7 = uVar7 - uVar16;
              param_2 = pbVar2 + uVar15;
              pbVar17 = pbVar1 + uVar15;
              pbVar13 = param_2;
              if (uVar7 < uVar12) {
                uVar16 = 0;
                do {
                  param_2[uVar16] = pbVar17[uVar16];
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar7);
                return;
              }
            }
            return;
          }
          lVar6 = (ulong)(uVar15 - uVar12 >> 1) * 2;
          pbVar13 = param_2;
          while( true ) {
            do {
              pbVar2 = param_2 + 2;
              pbVar1 = pbVar17 + 2;
              *(undefined2 *)param_2 = *(undefined2 *)pbVar17;
              pbVar17 = pbVar1;
              param_2 = pbVar2;
            } while (pbVar13 + ((ulong)uVar12 - (long)pbVar2) != (byte *)0x0);
            if (uVar7 <= uVar16) break;
            uVar7 = uVar7 - uVar16;
            param_2 = pbVar2 + lVar6;
            pbVar17 = pbVar1 + lVar6;
            pbVar13 = param_2;
            if (uVar7 < uVar12) {
              uVar16 = 0;
              do {
                param_2[uVar16] = pbVar17[uVar16];
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar7);
              return;
            }
          }
          return;
        }
        uVar10 = (ulong)uVar12;
        for (uVar7 = uVar7 - uVar16; pvVar8 = memcpy(param_2,pbVar17,uVar10),
            uVar16 < uVar7 + uVar16; uVar7 = uVar7 - uVar16) {
          pbVar17 = pbVar17 + uVar16;
          param_2 = (byte *)((long)pvVar8 + uVar16);
          if (uVar7 < uVar10) {
            uVar10 = uVar7 & 0xffffffff;
          }
        }
        return;
      }
      *param_2 = *pbVar17;
      uVar10 = uVar16;
      for (; uVar16 < uVar7; uVar7 = uVar7 - uVar16) {
        param_2[uVar10] = pbVar17[uVar10];
        uVar10 = uVar10 + uVar16;
      }
      return;
    }
    if ((*(uint *)(param_1 + 0x134) & 0x10000) == 0) {
      if (param_3 == 0) {
        iVar11 = 0;
        if (uVar15 != 1) {
          iVar11 = (uVar15 != 2) + 1;
        }
        uVar12 = *(uint *)(row_mask_0 + ((ulong)bVar4 + 0x12 + (long)iVar11 * 6) * 4);
      }
      else {
        iVar11 = 0;
        if (uVar15 != 1) {
          iVar11 = (uVar15 != 2) + 1;
        }
        uVar12 = *(uint *)(display_mask_1 + ((ulong)(bVar4 >> 1) + 9 + (long)iVar11 * 3) * 4);
      }
    }
    else if (param_3 == 0) {
      iVar11 = 0;
      if (uVar15 != 1) {
        iVar11 = (uVar15 != 2) + 1;
      }
      uVar12 = *(uint *)(row_mask_0 + ((ulong)bVar4 + (long)iVar11 * 6) * 4);
    }
    else {
      iVar11 = 0;
      if (uVar15 != 1) {
        iVar11 = (bVar3 != 2) + 1;
      }
      uVar12 = *(uint *)(display_mask_1 + ((long)iVar11 * 3 + (ulong)(bVar4 >> 1)) * 4);
    }
    while( true ) {
      if ((uVar12 & 0xff) != 0) {
        if ((uVar12 & 0xff) == 0xff) {
          *param_2 = *pbVar17;
        }
        else {
          *param_2 = (*pbVar17 ^ *param_2) & (byte)uVar12 ^ *param_2;
        }
      }
      if (uVar16 <= 8 / (ulong)uVar15) break;
      uVar16 = uVar16 - 8 / (ulong)uVar15;
      param_2 = param_2 + 1;
      pbVar17 = pbVar17 + 1;
      uVar12 = uVar12 >> 8 | uVar12 << 0x18;
    }
  }
  if (pbVar13 != (byte *)0x0) {
    *pbVar13 = (bVar14 ^ *pbVar13) & bVar19 ^ *pbVar13;
  }
  return;
}



void png_do_read_interlace(uint *param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_1 == (uint *)0x0)) goto LAB_00104e73;
  uVar20 = *param_1;
  bVar1 = *(byte *)((long)&png_pass_inc + (long)param_3);
  bVar2 = *(byte *)((long)param_1 + 0x13);
  uVar15 = (ulong)bVar2;
  uVar12 = uVar20 - 1;
  uVar6 = uVar20 * bVar1;
  uVar9 = uVar6 - 1;
  uVar3 = (uint)bVar1;
  if (bVar2 == 2) {
    pbVar13 = (byte *)((ulong)(uVar9 >> 2) + param_2);
    pbVar19 = (byte *)((ulong)(uVar12 >> 2) + param_2);
    if ((param_4 & 0x10000) == 0) {
      iVar11 = 2;
      uVar17 = 6;
      uVar9 = uVar20 * -2;
      uVar12 = uVar6 * -2;
      uVar10 = 0;
    }
    else {
      uVar9 = uVar20 * 2 + 6;
      uVar12 = uVar6 * 2 + 6;
      iVar11 = -2;
      uVar17 = 0;
      uVar10 = 6;
    }
    uVar12 = uVar12 & 6;
    uVar9 = uVar9 & 6;
    if (uVar20 == 0) goto LAB_001052a8;
    uVar20 = 0;
    do {
      bVar1 = *pbVar19;
      if (uVar3 != 0) {
        uVar14 = 0;
        do {
          while (*pbVar13 = (byte)(0x3f3f >> (6 - (byte)uVar12 & 0x1f)) & *pbVar13 |
                            (byte)(((int)(uint)bVar1 >> ((byte)uVar9 & 0x1f) & 3U) <<
                                  ((byte)uVar12 & 0x1f)), uVar17 == uVar12) {
            uVar14 = uVar14 + 1;
            pbVar13 = pbVar13 + -1;
            uVar12 = uVar10;
            if (uVar14 == uVar3) goto LAB_0010520d;
          }
          uVar14 = uVar14 + 1;
          uVar12 = uVar12 + iVar11;
        } while (uVar14 != uVar3);
      }
LAB_0010520d:
      if (uVar17 == uVar9) {
        pbVar19 = pbVar19 + -1;
        uVar9 = uVar10;
      }
      else {
        uVar9 = uVar9 + iVar11;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *param_1);
LAB_00104f76:
    uVar8 = (ulong)uVar6;
    uVar15 = (ulong)*(byte *)((long)param_1 + 0x13);
    *param_1 = uVar6;
    if (7 < *(byte *)((long)param_1 + 0x13)) goto LAB_00104e5f;
LAB_00104f8e:
    uVar15 = uVar15 * uVar8 + 7 >> 3;
  }
  else {
    if (bVar2 == 4) {
      pbVar19 = (byte *)((ulong)(uVar12 >> 1) + param_2);
      pbVar13 = (byte *)(param_2 + (ulong)(uVar9 >> 1));
      if ((param_4 & 0x10000) == 0) {
        uVar9 = uVar20 * 4;
        uVar10 = uVar6 * 4;
        iVar11 = 4;
        uVar17 = 4;
        uVar12 = 0;
      }
      else {
        uVar10 = uVar6 * 4 + 4;
        uVar9 = uVar20 * 4 + 4;
        iVar11 = -4;
        uVar17 = 0;
        uVar12 = 4;
      }
      uVar10 = uVar10 & 4;
      uVar9 = uVar9 & 4;
      if (uVar20 == 0) goto LAB_001052a8;
      uVar20 = 0;
      do {
        bVar2 = *pbVar19;
        if (bVar1 != 0) {
          uVar14 = 0;
          do {
            while (*pbVar13 = (byte)(0xf0f >> (4 - (byte)uVar10 & 0x1f)) & *pbVar13 |
                              (byte)(((int)(uint)bVar2 >> ((byte)uVar9 & 0x1f) & 0xfU) <<
                                    ((byte)uVar10 & 0x1f)), uVar10 == uVar17) {
              uVar14 = uVar14 + 1;
              pbVar13 = pbVar13 + -1;
              uVar10 = uVar12;
              if (uVar3 == uVar14) goto LAB_00105115;
            }
            uVar14 = uVar14 + 1;
            uVar10 = uVar10 + iVar11;
          } while (uVar3 != uVar14);
        }
LAB_00105115:
        if (uVar17 == uVar9) {
          pbVar19 = pbVar19 + -1;
          uVar9 = uVar12;
        }
        else {
          uVar9 = uVar9 + iVar11;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *param_1);
      uVar15 = (ulong)*(byte *)((long)param_1 + 0x13);
    }
    else {
      if (bVar2 == 1) {
        pbVar13 = (byte *)(param_2 + (ulong)(uVar9 >> 3));
        pbVar19 = (byte *)((ulong)(uVar12 >> 3) + param_2);
        if ((param_4 & 0x10000) == 0) {
          iVar11 = 1;
          uVar17 = 7;
          uVar12 = -uVar20;
          uVar10 = -uVar6;
          uVar9 = 0;
        }
        else {
          uVar12 = uVar20 + 7;
          uVar10 = uVar6 + 7;
          iVar11 = -1;
          uVar17 = 0;
          uVar9 = 7;
        }
        uVar10 = uVar10 & 7;
        uVar12 = uVar12 & 7;
        if (uVar20 != 0) {
          uVar20 = 0;
          do {
            bVar1 = *pbVar19;
            if (uVar3 != 0) {
              uVar14 = 0;
              do {
                while (*pbVar13 = (byte)(0x7f7f >> (7 - (byte)uVar10 & 0x1f)) & *pbVar13 |
                                  ((bVar1 >> (uVar12 & 0x1f) & 1) != 0) << ((byte)uVar10 & 0x1f),
                      uVar17 == uVar10) {
                  uVar14 = uVar14 + 1;
                  pbVar13 = pbVar13 + -1;
                  uVar10 = uVar9;
                  if (uVar14 == uVar3) goto LAB_00104f5d;
                }
                uVar14 = uVar14 + 1;
                uVar10 = uVar10 + iVar11;
              } while (uVar14 != uVar3);
            }
LAB_00104f5d:
            if (uVar17 == uVar12) {
              pbVar19 = pbVar19 + -1;
              uVar12 = uVar9;
            }
            else {
              uVar12 = uVar12 + iVar11;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *param_1);
          goto LAB_00104f76;
        }
LAB_001052a8:
        uVar8 = 0;
        *param_1 = 0;
        goto LAB_00104f8e;
      }
      bVar2 = bVar2 >> 3;
      uVar8 = (ulong)bVar2;
      local_68 = uVar12 * uVar8 + param_2;
      puVar16 = (undefined8 *)(param_2 + uVar9 * uVar8);
      if (uVar20 != 0) {
        lVar18 = -uVar8;
        uVar20 = 0;
        puVar4 = &local_48;
        do {
          puVar4 = (undefined8 *)__memcpy_chk(puVar4,local_68,uVar8,8);
          if (bVar1 != 0) {
            uVar9 = 0;
            puVar7 = puVar16;
            do {
              if (bVar2 < 8) {
                if ((bVar2 & 4) == 0) {
                  if ((bVar2 != 0) &&
                     (*(undefined1 *)puVar7 = *(undefined1 *)puVar4, (bVar2 & 2) != 0)) {
                    *(undefined2 *)((long)puVar7 + (uVar8 - 2)) =
                         *(undefined2 *)((long)puVar4 + (uVar8 - 2));
                  }
                }
                else {
                  *(undefined4 *)puVar7 = *(undefined4 *)puVar4;
                  *(undefined4 *)((long)puVar7 + (uVar8 - 4)) =
                       *(undefined4 *)((long)puVar4 + (uVar8 - 4));
                }
              }
              else {
                *puVar7 = *puVar4;
                *(undefined8 *)((long)puVar7 + ((ulong)(uint)bVar2 - 8)) =
                     *(undefined8 *)((long)puVar4 + (uVar8 - 8));
                lVar5 = (long)puVar7 - ((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
                uVar3 = (int)lVar5 + (uint)bVar2 & 0xfffffff8;
                if (7 < uVar3) {
                  uVar15 = 0;
                  do {
                    uVar12 = (int)uVar15 + 8;
                    *(undefined8 *)(((ulong)(puVar7 + 1) & 0xfffffffffffffff8) + uVar15) =
                         *(undefined8 *)((long)puVar4 + (uVar15 - lVar5));
                    uVar15 = (ulong)uVar12;
                  } while (uVar12 < uVar3);
                }
              }
              uVar9 = uVar9 + 1;
              puVar7 = (undefined8 *)((long)puVar7 + lVar18);
            } while (uVar9 != bVar1);
            puVar16 = (undefined8 *)((long)puVar16 + ((ulong)(bVar1 - 1) + 1) * lVar18);
          }
          local_68 = local_68 + lVar18;
          uVar20 = uVar20 + 1;
        } while (uVar20 < *param_1);
        uVar15 = (ulong)*(byte *)((long)param_1 + 0x13);
      }
    }
    uVar8 = (ulong)uVar6;
    *param_1 = uVar6;
    if ((byte)uVar15 < 8) goto LAB_00104f8e;
LAB_00104e5f:
    uVar15 = (uVar15 >> 3) * (ulong)uVar6;
  }
  *(ulong *)(param_1 + 2) = uVar15;
LAB_00104e73:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_read_filter_row(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        int param_5)

{
  code *pcVar1;
  
  if (param_5 - 1U < 4) {
    if (*(long *)(param_1 + 0x480) == 0) {
      *(code **)(param_1 + 0x490) = png_read_filter_row_avg;
      pcVar1 = png_read_filter_row_paeth_multibyte_pixel;
      *(undefined8 *)(param_1 + 0x480) = 0x100000;
      *(code **)(param_1 + 0x488) = png_read_filter_row_up;
      if ((int)(*(byte *)(param_1 + 0x26a) + 7) >> 3 == 1) {
        pcVar1 = png_read_filter_row_paeth_1byte_pixel;
      }
      *(code **)(param_1 + 0x498) = pcVar1;
      png_init_filter_functions_sse2();
    }
                    /* WARNING: Could not recover jumptable at 0x00105303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x480 + (long)(int)(param_5 - 1U) * 8))(param_2,param_3,param_4);
    return;
  }
  return;
}



void png_read_IDAT_data(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(long *)(param_1 + 0x158) = param_2;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  do {
    if (*(int *)(param_1 + 0x148) == 0) {
      uVar2 = *(uint *)(param_1 + 0x248);
      while (uVar2 == 0) {
        png_crc_finish(param_1,0);
        uVar2 = png_read_chunk_header(param_1);
        *(uint *)(param_1 + 0x248) = uVar2;
        if (*(int *)(param_1 + 0x218) != 0x49444154) goto LAB_001056a0;
      }
      uVar5 = *(uint *)(param_1 + 0x470);
      if (uVar2 <= *(uint *)(param_1 + 0x470)) {
        uVar5 = uVar2;
      }
      uVar4 = png_read_buffer(param_1,uVar5,0);
      png_read_data(param_1,uVar4,uVar5);
      png_calculate_crc(param_1,uVar4,uVar5);
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) - uVar5;
      *(undefined8 *)(param_1 + 0x140) = uVar4;
      *(uint *)(param_1 + 0x148) = uVar5;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x160) = 0x400;
      *(undefined1 **)(param_1 + 0x158) = auStack_448;
      if ((*(char *)(param_1 + 0x270) == '\0') || (*(int *)(param_1 + 0x148) == 0)) {
        iVar1 = inflate(param_1 + 0x140);
LAB_001054b4:
        uVar2 = *(uint *)(param_1 + 0x160);
        *(undefined4 *)(param_1 + 0x160) = 0;
        param_3 = param_3 + (0x400 - (ulong)uVar2);
        uVar3 = _LC60;
        goto joined_r0x001054d2;
      }
LAB_0010540b:
      if (-1 < **(char **)(param_1 + 0x140)) {
        *(undefined1 *)(param_1 + 0x270) = 0;
        iVar1 = inflate(param_1 + 0x140);
        if (param_2 != 0) goto LAB_00105435;
        goto LAB_001054b4;
      }
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(char **)(param_1 + 0x170) = "invalid window size (libpng)";
      if (param_2 != 0) {
        png_zstream_error(param_1,0xfffffffd);
        goto LAB_00105691;
      }
      png_zstream_error(param_1,0xfffffffd);
LAB_0010561f:
      png_chunk_benign_error(param_1,*(undefined8 *)(param_1 + 0x170));
      goto LAB_0010562e;
    }
    uVar3 = 0xffffffff;
    if (param_3 < 0x100000000) {
      uVar3 = param_3;
    }
    *(int *)(param_1 + 0x160) = (int)uVar3;
    param_3 = param_3 - uVar3;
    if ((*(char *)(param_1 + 0x270) != '\0') && (*(int *)(param_1 + 0x148) != 0)) goto LAB_0010540b;
    iVar1 = inflate(param_1 + 0x140);
LAB_00105435:
    uVar2 = *(uint *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x160) = 0;
    param_3 = param_3 + uVar2;
    uVar3 = _LC60;
joined_r0x001054d2:
    _LC60 = uVar3;
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(ulong *)(param_1 + 300) = *(ulong *)(param_1 + 300) | uVar3;
      if ((*(int *)(param_1 + 0x148) != 0) || (*(int *)(param_1 + 0x248) != 0)) {
        png_chunk_benign_error(param_1,"Extra compressed data");
      }
      if (param_3 != 0) {
        if (param_2 != 0) {
LAB_001056a0:
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Not enough image data");
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          png_chunk_benign_error(param_1,"Too much image data");
          return;
        }
        goto LAB_001056b9;
      }
      goto LAB_0010562e;
    }
    if (iVar1 != 0) {
      png_zstream_error(param_1,iVar1);
      if (param_2 != 0) {
LAB_00105691:
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,*(undefined8 *)(param_1 + 0x170));
      }
      goto LAB_0010561f;
    }
    if (param_3 == 0) {
LAB_0010562e:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_001056b9:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



void png_read_finish_IDAT(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x130) & 8) == 0) {
    png_read_IDAT_data(param_1,0,0);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if ((*(byte *)(param_1 + 0x130) & 8) == 0) {
      iVar1 = *(int *)(param_1 + 0x138);
      *(ulong *)(param_1 + 300) = _LC60 | *(ulong *)(param_1 + 300);
      goto joined_r0x00105723;
    }
  }
  iVar1 = *(int *)(param_1 + 0x138);
joined_r0x00105723:
  if (iVar1 != 0x49444154) {
    return;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x248));
  return;
}



void png_read_finish_row(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(int *)(param_1 + 0x214) + 1;
  *(uint *)(param_1 + 0x214) = uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x200)) {
    return;
  }
  if (*(char *)(param_1 + 0x264) == '\0') {
LAB_0010586e:
    png_read_finish_IDAT(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  memset(*(void **)(param_1 + 0x220),0,*(long *)(param_1 + 0x208) + 1);
  uVar4 = (ulong)(byte)(*(char *)(param_1 + 0x265) + 1);
  do {
    bVar2 = (byte)uVar4;
    if (6 < bVar2) {
      *(byte *)(param_1 + 0x265) = bVar2;
      goto LAB_0010586e;
    }
    uVar6 = (uint)*(byte *)((long)&png_pass_inc + uVar4);
    uVar3 = ((uVar6 - 1) + *(int *)(param_1 + 0x1f8)) -
            (uint)*(byte *)((long)&png_pass_start + uVar4);
    *(uint *)(param_1 + 0x210) = uVar3 / uVar6;
    if ((*(byte *)(param_1 + 0x134) & 2) != 0) break;
    uVar7 = (uint)*(byte *)((long)&png_pass_yinc + uVar4);
    pbVar1 = (byte *)((long)&png_pass_ystart + uVar4);
    uVar4 = uVar4 + 1;
    uVar5 = ((uVar7 - 1) + *(int *)(param_1 + 0x1fc)) - (uint)*pbVar1;
    *(uint *)(param_1 + 0x200) = uVar5 / uVar7;
  } while ((uVar3 < uVar6) || (uVar5 < uVar7));
  *(byte *)(param_1 + 0x265) = bVar2;
  return;
}



void png_read_start_row(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  png_init_read_transformations();
  if (*(char *)(param_1 + 0x264) == '\0') {
    iVar1 = *(int *)(param_1 + 0x1f8);
    uVar6 = *(uint *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
    *(int *)(param_1 + 0x210) = iVar1;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x134);
    iVar1 = *(int *)(param_1 + 0x1f8);
    uVar8 = *(uint *)(param_1 + 0x1fc);
    if ((uVar6 & 2) == 0) {
      uVar8 = *(uint *)(param_1 + 0x1fc) + 7 >> 3;
    }
    *(uint *)(param_1 + 0x200) = uVar8;
    uVar8 = (uint)*(byte *)((long)&png_pass_inc + (ulong)*(byte *)(param_1 + 0x265));
    *(uint *)(param_1 + 0x210) =
         ((iVar1 + -1 + uVar8) -
         (uint)*(byte *)((long)&png_pass_start + (ulong)*(byte *)(param_1 + 0x265))) / uVar8;
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0x26a);
  if (((uVar6 & 4) != 0) && (*(byte *)(param_1 + 0x268) < 8)) {
    uVar3 = 8;
  }
  uVar8 = uVar6 & 0x200;
  if ((uVar6 & 0x1000) == 0) {
    if (uVar8 != 0) {
      uVar6 = uVar6 & 0xfffffdff;
      *(uint *)(param_1 + 0x134) = uVar6;
    }
LAB_0010593a:
    if ((uVar6 & 0x8000) == 0) {
LAB_00105943:
      uVar2 = (uint)uVar3;
      if ((uVar6 & 0x4000) == 0) goto LAB_0010596d;
      if (*(short *)(param_1 + 0x260) == 0) {
        cVar5 = *(char *)(param_1 + 0x267);
      }
      else {
LAB_00105956:
        if ((uVar6 & 0x9000) != 0) goto LAB_0010595f;
        cVar5 = *(char *)(param_1 + 0x267);
      }
LAB_00105c9a:
      if (cVar5 == '\x04') goto LAB_0010595f;
      if (8 < uVar2) goto LAB_00105c70;
      uVar3 = 0x18;
      if (cVar5 != '\x06') goto LAB_0010596d;
    }
    else {
LAB_00105ae8:
      uVar2 = (uint)uVar3;
      cVar5 = *(char *)(param_1 + 0x267);
      if (cVar5 == '\0') {
LAB_00105af9:
        if (8 < uVar2) goto LAB_00105cc0;
        uVar3 = 0x10;
        if ((uVar6 & 0x4000) == 0) goto LAB_0010596d;
        if ((*(short *)(param_1 + 0x260) == 0) || ((uVar6 & 0x9000) != 0)) goto LAB_00105968;
LAB_00105c08:
        uVar3 = 0x30;
        goto LAB_0010596d;
      }
LAB_00105a90:
      uVar2 = (uint)uVar3;
      if ((byte)(cVar5 - 2U) < 2) {
        if (uVar2 < 0x21) goto LAB_00105cc0;
        uVar3 = 0x40;
        if ((uVar6 & 0x4000) == 0) goto LAB_0010596d;
        if (((*(short *)(param_1 + 0x260) == 0) || ((uVar6 & 0x9000) != 0)) || (cVar5 == '\x04'))
        goto LAB_00105c80;
        goto LAB_00105c70;
      }
      if ((uVar6 & 0x4000) == 0) goto LAB_0010596d;
      if (*(short *)(param_1 + 0x260) != 0) goto LAB_00105956;
LAB_0010595f:
      if (0x10 < uVar2) goto LAB_00105c80;
    }
LAB_00105968:
    uVar3 = 0x20;
  }
  else {
    cVar5 = *(char *)(param_1 + 0x267);
    uVar10 = uVar6 & 0x4000;
    uVar9 = uVar6 & 0x8000;
    if (cVar5 == '\x03') {
      if (*(short *)(param_1 + 0x260) == 0) {
        if (uVar8 != 0) {
          uVar3 = 0x18;
LAB_00105d28:
          if (0xf < *(byte *)(param_1 + 0x268)) goto LAB_0010593a;
          uVar3 = (ulong)(uint)((int)uVar3 * 2);
          if ((uVar6 & 0x8000) == 0) goto LAB_00105943;
          goto LAB_00105ae8;
        }
        if (uVar9 == 0) {
          uVar3 = (ulong)((-(uint)((uVar6 & 0x4000) == 0) & 0xffffffe8) + 0x30);
          goto LAB_0010596d;
        }
LAB_00105cc0:
        uVar3 = 0x20;
        if ((uVar6 & 0x4000) == 0) goto LAB_0010596d;
        if (*(short *)(param_1 + 0x260) != 0) goto LAB_00105c5f;
      }
      else {
        if (uVar8 != 0) {
          uVar3 = 0x20;
          goto LAB_00105d28;
        }
        if (uVar9 != 0) goto LAB_00105cc0;
        uVar3 = 0x20;
        if (uVar10 == 0) goto LAB_0010596d;
        if ((uVar6 & 0x9000) == 0) goto LAB_00105c08;
      }
    }
    else {
      if (cVar5 != '\0') {
        if ((cVar5 == '\x02') && (*(short *)(param_1 + 0x260) != 0)) {
          uVar3 = (ulong)((uint)uVar3 * 4) / 3;
        }
        if (uVar8 != 0) goto LAB_00105d28;
        if (uVar9 == 0) goto LAB_00105943;
        goto LAB_00105a90;
      }
      if ((uint)uVar3 < 8) {
        uVar3 = 8;
      }
      uVar2 = (uint)uVar3;
      if (*(short *)(param_1 + 0x260) == 0) {
        if (uVar8 != 0) goto LAB_00105d28;
        if (uVar9 == 0) {
          if (uVar10 == 0) goto LAB_0010596d;
          goto LAB_00105c9a;
        }
        goto LAB_00105af9;
      }
      uVar2 = uVar2 * 2;
      uVar3 = (ulong)uVar2;
      if (uVar8 != 0) goto LAB_00105d28;
      if (uVar9 == 0) {
        if (uVar10 == 0) goto LAB_0010596d;
        goto LAB_00105956;
      }
      if (uVar10 == 0) goto LAB_00105968;
LAB_00105c5f:
      if (((uVar6 & 0x9000) == 0) && (cVar5 != '\x04')) {
LAB_00105c70:
        if (cVar5 != '\x06') goto LAB_00105c08;
      }
    }
LAB_00105c80:
    uVar3 = 0x40;
  }
LAB_0010596d:
  if (((uVar6 & 0x100000) != 0) &&
     (uVar6 = (uint)*(byte *)(param_1 + 0x128) * (uint)*(byte *)(param_1 + 0x129),
     (uint)uVar3 < uVar6)) {
    uVar3 = (ulong)uVar6;
  }
  *(char *)(param_1 + 0x26e) = (char)uVar3;
  *(undefined1 *)(param_1 + 0x26f) = 0;
  uVar7 = (ulong)(iVar1 + 7U & 0xfffffff8);
  if ((uint)uVar3 < 8) {
    uVar7 = uVar3 * uVar7 >> 3;
  }
  else {
    uVar7 = (uVar3 >> 3) * uVar7;
  }
  uVar3 = (ulong)(((uint)uVar3 + 7 >> 3) + 0x30) + uVar7 + 1;
  if (*(ulong *)(param_1 + 0x458) < uVar3) {
    png_free(param_1,*(undefined8 *)(param_1 + 0x400));
    png_free(param_1,*(undefined8 *)(param_1 + 0x478));
    if (*(char *)(param_1 + 0x264) == '\0') {
      uVar4 = png_malloc();
    }
    else {
      uVar4 = png_calloc(param_1,uVar3);
    }
    *(undefined8 *)(param_1 + 0x400) = uVar4;
    uVar7 = png_malloc(param_1);
    *(ulong *)(param_1 + 0x458) = uVar3;
    *(ulong *)(param_1 + 0x478) = uVar7;
    *(ulong *)(param_1 + 0x220) = (uVar7 & 0xfffffffffffffff0) + 0x1f;
    *(ulong *)(param_1 + 0x228) = (*(ulong *)(param_1 + 0x400) & 0xfffffffffffffff0) + 0x1f;
  }
  if (*(long *)(param_1 + 0x208) == -1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Row has too many bytes to allocate in memory");
  }
  memset(*(void **)(param_1 + 0x220),0,*(long *)(param_1 + 0x208) + 1);
  if (*(long *)(param_1 + 0x460) != 0) {
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    png_free(param_1);
  }
  iVar1 = png_inflate_claim(param_1,0x49444154);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,*(undefined8 *)(param_1 + 0x170));
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x40;
  return;
}


