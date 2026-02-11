
uint png_get_valid(long param_1,long param_2,uint param_3)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  if ((param_3 == 0x10) && (*(short *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  return *(uint *)(param_2 + 8) & param_3;
}



undefined8 png_get_rowbytes(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



undefined8 png_get_rows(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined8 *)(param_2 + 0x168);
  }
  return 0;
}



undefined4 png_get_image_width(long param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    return *param_2;
  }
  return 0;
}



undefined4 png_get_image_height(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined4 *)(param_2 + 4);
  }
  return 0;
}



undefined1 png_get_bit_depth(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x24);
  }
  return 0;
}



undefined1 png_get_color_type(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x25);
  }
  return 0;
}



undefined1 png_get_filter_type(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x27);
  }
  return 0;
}



undefined1 png_get_interlace_type(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x28);
  }
  return 0;
}



undefined1 png_get_compression_type(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x26);
  }
  return 0;
}



uint png_get_x_pixels_per_meter(long param_1,long param_2)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_2 + 8) & 0x80;
  if ((uVar1 != 0) && (uVar1 = 0, *(char *)(param_2 + 0xf0) == '\x01')) {
    return *(uint *)(param_2 + 0xe8);
  }
  return uVar1;
}



uint png_get_y_pixels_per_meter(long param_1,long param_2)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_2 + 8) & 0x80;
  if ((uVar1 != 0) && (uVar1 = 0, *(char *)(param_2 + 0xf0) == '\x01')) {
    return *(uint *)(param_2 + 0xec);
  }
  return uVar1;
}



int png_get_pixels_per_meter(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     ((iVar1 = 0, *(char *)(param_2 + 0xf0) == '\x01' &&
      (iVar1 = *(int *)(param_2 + 0xec), *(int *)(param_2 + 0xe8) != iVar1)))) {
    return 0;
  }
  return iVar1;
}



undefined8 png_get_pixel_aspect_ratio(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     (*(uint *)(param_2 + 0xe8) != 0)) {
    auVar1._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar1._0_4_ = (float)*(uint *)(param_2 + 0xec) / (float)*(uint *)(param_2 + 0xe8);
    return auVar1._0_8_;
  }
  return 0;
}



undefined4 png_get_pixel_aspect_ratio_fixed(long param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) ||
      ((*(int *)(param_2 + 0xe8) == 0 || (iVar1 = *(int *)(param_2 + 0xec), iVar1 == 0)))) ||
     ((*(int *)(param_2 + 0xe8) < 0 ||
      ((iVar1 < 0 || (iVar1 = png_muldiv(&local_14,iVar1,100000), iVar1 == 0)))))) {
    local_14 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



undefined4 png_get_x_offset_microns(long param_1,long param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\x01')) {
    return *(undefined4 *)(param_2 + 0xdc);
  }
  return 0;
}



undefined4 png_get_y_offset_microns(long param_1,long param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\x01')) {
    return *(undefined4 *)(param_2 + 0xe0);
  }
  return 0;
}



undefined4 png_get_x_offset_pixels(long param_1,long param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\0')) {
    return *(undefined4 *)(param_2 + 0xdc);
  }
  return 0;
}



undefined4 png_get_y_offset_pixels(long param_1,long param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\0')) {
    return *(undefined4 *)(param_2 + 0xe0);
  }
  return 0;
}



undefined4 png_get_pixels_per_inch(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
    iVar2 = 0;
LAB_00100412:
    iVar2 = png_muldiv(&local_14,iVar2,0x7f,5000);
    if (iVar2 != 0) goto LAB_001003fa;
  }
  else {
    iVar2 = 0;
    if (((*(char *)(param_2 + 0xf0) != '\x01') ||
        (iVar1 = *(int *)(param_2 + 0xe8), iVar2 = 0, iVar1 != *(int *)(param_2 + 0xec))) ||
       (iVar2 = iVar1, -1 < iVar1)) goto LAB_00100412;
  }
  local_14 = 0;
LAB_001003fa:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



undefined4 png_get_x_pixels_per_inch(long param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
    iVar1 = 0;
LAB_001004a2:
    iVar1 = png_muldiv(&local_14,iVar1,0x7f,5000);
    if (iVar1 != 0) goto LAB_00100482;
  }
  else if ((*(char *)(param_2 + 0xf0) != '\x01') || (iVar1 = *(int *)(param_2 + 0xe8), -1 < iVar1))
  goto LAB_001004a2;
  local_14 = 0;
LAB_00100482:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



undefined4 png_get_y_pixels_per_inch(long param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
    iVar1 = 0;
LAB_00100532:
    iVar1 = png_muldiv(&local_14,iVar1,0x7f,5000);
    if (iVar1 != 0) goto LAB_00100512;
  }
  else if ((*(char *)(param_2 + 0xf0) != '\x01') || (iVar1 = *(int *)(param_2 + 0xec), -1 < iVar1))
  goto LAB_00100532;
  local_14 = 0;
LAB_00100512:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



void png_get_x_offset_inches_fixed(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (uVar1 = 0, param_2 != 0)) &&
      (uVar1 = 0, (*(byte *)(param_2 + 9) & 1) != 0)) && (*(char *)(param_2 + 0xe4) == '\x01')) {
    uVar1 = *(undefined4 *)(param_2 + 0xdc);
  }
  png_muldiv_warn(param_1,uVar1,500,0x7f);
  return;
}



void png_get_y_offset_inches_fixed(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (uVar1 = 0, param_2 != 0)) &&
      (uVar1 = 0, (*(byte *)(param_2 + 9) & 1) != 0)) && (*(char *)(param_2 + 0xe4) == '\x01')) {
    uVar1 = *(undefined4 *)(param_2 + 0xe0);
  }
  png_muldiv_warn(param_1,uVar1,500,0x7f);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 png_get_x_offset_inches(long param_1,long param_2)

{
  double dVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\x01')) {
    dVar1 = (double)*(int *)(param_2 + 0xdc) * __LC1;
    return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 png_get_y_offset_inches(long param_1,long param_2)

{
  double dVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xe4) == '\x01')) {
    dVar1 = (double)*(int *)(param_2 + 0xe0) * __LC1;
    return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint png_get_pHYs_dpi(long param_1,long param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 8) & 0x80;
    if (uVar2 != 0) {
      uVar2 = 0;
      if (param_3 != (uint *)0x0) {
        *param_3 = *(uint *)(param_2 + 0xe8);
        uVar2 = 0x80;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = *(uint *)(param_2 + 0xec);
        uVar2 = 0x80;
      }
      if (param_5 != (uint *)0x0) {
        bVar1 = *(byte *)(param_2 + 0xf0);
        *param_5 = (uint)bVar1;
        if (bVar1 == 1) {
          if (param_3 != (uint *)0x0) {
            *param_3 = (uint)(long)((double)*param_3 * __LC2 + __LC3);
          }
          if (param_4 != (uint *)0x0) {
            *param_4 = (uint)(long)((double)*param_4 * __LC2 + __LC3);
          }
        }
        return 0x80;
      }
    }
  }
  return uVar2;
}



undefined1 png_get_channels(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined1 *)(param_2 + 0x29);
  }
  return 0;
}



long png_get_signature(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return param_2 + 0x2c;
  }
  return 0;
}



undefined8 png_get_bKGD(long param_1,long param_2,long *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) &&
     (param_3 != (long *)0x0)) {
    *param_3 = param_2 + 0xd2;
    return 0x20;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
png_get_cHRM(long param_1,long param_2,double *param_3,double *param_4,double *param_5,
            double *param_6,double *param_7,double *param_8,double *param_9,double *param_10)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x7e) & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)*(int *)(param_2 + 0x50) * __LC4;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)*(int *)(param_2 + 0x54) * __LC4;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)*(int *)(param_2 + 0x38) * __LC4;
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)*(int *)(param_2 + 0x3c) * __LC4;
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)*(int *)(param_2 + 0x40) * __LC4;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)*(int *)(param_2 + 0x44) * __LC4;
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)*(int *)(param_2 + 0x48) * __LC4;
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)*(int *)(param_2 + 0x4c) * __LC4;
    }
    uVar1 = 4;
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
png_get_cHRM_XYZ(long param_1,long param_2,double *param_3,double *param_4,double *param_5,
                double *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
                double *param_11)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x7e) & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)*(int *)(param_2 + 0x58) * __LC4;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)*(int *)(param_2 + 0x5c) * __LC4;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)*(int *)(param_2 + 0x60) * __LC4;
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)*(int *)(param_2 + 100) * __LC4;
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)*(int *)(param_2 + 0x68) * __LC4;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)*(int *)(param_2 + 0x6c) * __LC4;
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)*(int *)(param_2 + 0x70) * __LC4;
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)*(int *)(param_2 + 0x74) * __LC4;
    }
    if (param_11 != (double *)0x0) {
      *param_11 = (double)*(int *)(param_2 + 0x78) * __LC4;
    }
    uVar1 = 4;
  }
  return uVar1;
}



undefined8
png_get_cHRM_XYZ_fixed
          (long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
          undefined4 *param_10,undefined4 *param_11)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x7e) & 2) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x58);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x5c);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_2 + 0x60);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_2 + 100);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(param_2 + 0x68);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_2 + 0x6c);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(param_2 + 0x70);
    }
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = *(undefined4 *)(param_2 + 0x74);
    }
    if (param_11 != (undefined4 *)0x0) {
      *param_11 = *(undefined4 *)(param_2 + 0x78);
    }
    uVar1 = 4;
  }
  return uVar1;
}



undefined8
png_get_cHRM_fixed(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x7e) & 2) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x50);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x54);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_2 + 0x38);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_2 + 0x3c);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(param_2 + 0x40);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_2 + 0x44);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(param_2 + 0x48);
    }
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = *(undefined4 *)(param_2 + 0x4c);
    }
    uVar1 = 4;
  }
  return uVar1;
}



undefined8 png_get_gAMA_fixed(long param_1,long param_2,undefined4 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) &&
     ((*(byte *)(param_2 + 0x7e) & 1) != 0)) {
    *param_3 = *(undefined4 *)(param_2 + 0x34);
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 png_get_gAMA(long param_1,long param_2,double *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (double *)0x0)) &&
     ((*(byte *)(param_2 + 0x7e) & 1) != 0)) {
    *param_3 = (double)*(int *)(param_2 + 0x34) * __LC4;
    return 1;
  }
  return 0;
}



undefined8 png_get_sRGB(long param_1,long param_2,uint *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 8) != 0)) &&
     (param_3 != (uint *)0x0)) {
    *param_3 = (uint)*(ushort *)(param_2 + 0x7c);
    return 0x800;
  }
  return 0;
}



undefined4
png_get_iCCP(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined8 *param_5,
            uint *param_6)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 8) & 0x1000) == 0) {
      return 0;
    }
    if ((param_3 != (undefined8 *)0x0 && param_5 != (undefined8 *)0x0) && (param_6 != (uint *)0x0))
    {
      puVar2 = *(uint **)(param_2 + 0x90);
      *param_3 = *(undefined8 *)(param_2 + 0x88);
      *param_5 = puVar2;
      uVar1 = *puVar2;
      *param_6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      return 0x1000;
    }
  }
  return 0;
}



undefined4 png_get_sPLT(long param_1,long param_2,undefined8 *param_3)

{
  if ((param_2 != 0 && param_3 != (undefined8 *)0x0) && (param_1 != 0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x148);
    return *(undefined4 *)(param_2 + 0x150);
  }
  return 0;
}



undefined4
png_get_cICP(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5,
            undefined1 *param_6)

{
  undefined1 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 8) & 0x20000) == 0) {
      return 0;
    }
    if ((((param_3 != (undefined1 *)0x0) && (param_4 != (undefined1 *)0x0)) &&
        (param_5 != (undefined1 *)0x0)) && (param_6 != (undefined1 *)0x0)) {
      *param_3 = *(undefined1 *)(param_2 + 0x80);
      *param_4 = *(undefined1 *)(param_2 + 0x81);
      uVar1 = *(undefined1 *)(param_2 + 0x83);
      *param_5 = *(undefined1 *)(param_2 + 0x82);
      *param_6 = uVar1;
      return 0x20000;
    }
  }
  return 0;
}



undefined8 png_get_eXIf(undefined8 param_1)

{
  png_warning(param_1,"png_get_eXIf does not work; use png_get_eXIf_1");
  return 0;
}



undefined8 png_get_eXIf_1(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 10) & 1) != 0)) &&
     (param_4 != (undefined8 *)0x0)) {
    *param_3 = *(undefined4 *)(param_2 + 0xf4);
    *param_4 = *(undefined8 *)(param_2 + 0xf8);
    return 0x10000;
  }
  return 0;
}



undefined8 png_get_hIST(long param_1,long param_2,undefined8 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) &&
     (param_3 != (undefined8 *)0x0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x108);
    return 0x40;
  }
  return 0;
}



undefined1  [16]
png_get_IHDR(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5,
            uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_2[1];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 9);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)*(byte *)((long)param_2 + 0x25);
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((long)param_2 + 0x26);
    }
    auVar2._9_7_ = 0;
    auVar2[8] = *(byte *)((long)param_2 + 0x27);
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((long)param_2 + 0x27);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)*(byte *)(param_2 + 10);
    }
    png_check_IHDR();
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



undefined4
png_get_oFFs(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 8) & 0x100) == 0) {
      return 0;
    }
    if ((param_3 != (undefined4 *)0x0 && param_4 != (undefined4 *)0x0) && (param_5 != (uint *)0x0))
    {
      *param_3 = *(undefined4 *)(param_2 + 0xdc);
      bVar1 = *(byte *)(param_2 + 0xe4);
      *param_4 = *(undefined4 *)(param_2 + 0xe0);
      *param_5 = (uint)bVar1;
      return 0x100;
    }
  }
  return 0;
}



uint png_get_pCAL(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,uint *param_6,uint *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 8) & 0x400;
  if (uVar2 != 0) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_5 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_6 == (uint *)0x0) {
      return 0;
    }
    if (param_7 == (uint *)0x0 || param_8 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_9 == (undefined8 *)0x0) {
      return 0;
    }
    *param_3 = *(undefined8 *)(param_2 + 0x110);
    *param_4 = *(undefined4 *)(param_2 + 0x118);
    *param_5 = *(undefined4 *)(param_2 + 0x11c);
    *param_6 = (uint)*(byte *)(param_2 + 0x130);
    *param_7 = (uint)*(byte *)(param_2 + 0x131);
    uVar1 = *(undefined8 *)(param_2 + 0x128);
    *param_8 = *(undefined8 *)(param_2 + 0x120);
    uVar2 = 0x400;
    *param_9 = uVar1;
  }
  return uVar2;
}



uint png_get_sCAL_fixed(long param_1,long param_2,uint *param_3,undefined4 *param_4,
                       undefined4 *param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 8) & 0x4000, uVar2 != 0)) {
      pcVar1 = *(char **)(param_2 + 0x158);
      *param_3 = (uint)*(byte *)(param_2 + 0x154);
      strtod(pcVar1,(char **)0x0);
      uVar3 = png_fixed(param_1);
      pcVar1 = *(char **)(param_2 + 0x160);
      *param_4 = uVar3;
      strtod(pcVar1,(char **)0x0);
      uVar3 = png_fixed(param_1,"sCAL height");
      *param_5 = uVar3;
      uVar2 = 0x4000;
    }
    return uVar2;
  }
  return 0;
}



uint png_get_sCAL(long param_1,long param_2,uint *param_3,double *param_4,double *param_5)

{
  char *pcVar1;
  uint uVar2;
  double dVar3;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 8) & 0x4000, uVar2 != 0)) {
      pcVar1 = *(char **)(param_2 + 0x158);
      *param_3 = (uint)*(byte *)(param_2 + 0x154);
      dVar3 = strtod(pcVar1,(char **)0x0);
      pcVar1 = *(char **)(param_2 + 0x160);
      *param_4 = dVar3;
      dVar3 = strtod(pcVar1,(char **)0x0);
      uVar2 = 0x4000;
      *param_5 = dVar3;
    }
    return uVar2;
  }
  return 0;
}



uint png_get_sCAL_s(long param_1,long param_2,uint *param_3,undefined8 *param_4,undefined8 *param_5)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_2 + 8) & 0x4000;
    if (uVar1 == 0) {
      return uVar1;
    }
    *param_3 = (uint)*(byte *)(param_2 + 0x154);
    *param_4 = *(undefined8 *)(param_2 + 0x158);
    *param_5 = *(undefined8 *)(param_2 + 0x160);
    return 0x4000;
  }
  return 0;
}



uint png_get_pHYs(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x80;
    if (uVar1 != 0) {
      uVar1 = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0xe8);
        uVar1 = 0x80;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_2 + 0xec);
        uVar1 = 0x80;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = (uint)*(byte *)(param_2 + 0xf0);
        return 0x80;
      }
    }
  }
  return uVar1;
}



undefined8 png_get_PLTE(long param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (param_3 != (undefined8 *)0x0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x18);
    *param_4 = (uint)*(ushort *)(param_2 + 0x20);
    return 8;
  }
  return 0;
}



undefined8 png_get_sBIT(long param_1,long param_2,long *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 2) != 0)) &&
     (param_3 != (long *)0x0)) {
    *param_3 = param_2 + 0xb8;
    return 2;
  }
  return 0;
}



int png_get_text(long param_1,long param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x9c);
    if (0 < iVar1) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_2 + 0xa8);
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
        return iVar1;
      }
      return iVar1;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  return 0;
}



undefined8 png_get_tIME(long param_1,long param_2,long *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 2) != 0)) &&
     (param_3 != (long *)0x0)) {
    *param_3 = param_2 + 0xb0;
    return 0x200;
  }
  return 0;
}



uint png_get_tRNS(long param_1,long param_2,undefined8 *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x10;
    if (uVar1 != 0) {
      uVar1 = 0;
      if (*(char *)(param_2 + 0x25) == '\x03') {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = *(undefined8 *)(param_2 + 0xc0);
          uVar1 = 0x10;
        }
        if (param_5 != (long *)0x0) {
          *param_5 = param_2 + 200;
        }
      }
      else {
        if (param_5 != (long *)0x0) {
          *param_5 = param_2 + 200;
          uVar1 = 0x10;
        }
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = 0;
        }
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = (uint)*(ushort *)(param_2 + 0x22);
        return 0x10;
      }
    }
  }
  return uVar1;
}



undefined4 png_get_unknown_chunks(long param_1,long param_2,undefined8 *param_3)

{
  if ((param_2 != 0 && param_3 != (undefined8 *)0x0) && (param_1 != 0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x138);
    return *(undefined4 *)(param_2 + 0x140);
  }
  return 0;
}



undefined1 png_get_rgb_to_gray_status(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x3d0);
  }
  return uVar1;
}



undefined8 png_get_user_chunk_ptr(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x3b0);
  }
  return 0;
}



undefined4 png_get_compression_buffer_size(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x12d) & 0x80) != 0) {
    return *(undefined4 *)(param_1 + 0x470);
  }
  return *(undefined4 *)(param_1 + 0x1b8);
}



undefined4 png_get_user_width_max(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x424);
  }
  return uVar1;
}



undefined4 png_get_user_height_max(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x428);
  }
  return uVar1;
}



undefined4 png_get_chunk_cache_max(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x42c);
  }
  return uVar1;
}



undefined8 png_get_chunk_malloc_max(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x430);
  }
  return uVar1;
}



undefined4 png_get_io_state(long param_1)

{
  return *(undefined4 *)(param_1 + 0x474);
}



undefined4 png_get_io_chunk_type(long param_1)

{
  return *(undefined4 *)(param_1 + 0x218);
}



undefined4 png_get_palette_max(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined4 *)(param_1 + 0x25c);
  }
  return 0xffffffff;
}


