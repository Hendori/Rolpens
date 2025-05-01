
/* RenderingDeviceCommons::get_image_format_pixel_size(RenderingDeviceCommons::DataFormat) */

undefined8 RenderingDeviceCommons::get_image_format_pixel_size(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x7e:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
    return 1;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x7b:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
    return 2;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    return 3;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x61:
  case 0x62:
  case 99:
  case 0x79:
  case 0x7a:
  case 0x7c:
  case 0x7d:
  case 0x7f:
  case 0x80:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
    return 4;
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
    return 6;
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 100:
  case 0x65:
  case 0x66:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
    return 8;
  case 0x67:
  case 0x68:
  case 0x69:
    return 0xc;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x70:
  case 0x71:
  case 0x72:
    return 0x10;
  case 0x73:
  case 0x74:
  case 0x75:
    return 0x18;
  case 0x76:
  case 0x77:
  case 0x78:
    return 0x20;
  case 0x81:
    return 5;
  default:
    _err_print_error("get_image_format_pixel_size","servers/rendering/rendering_device_commons.cpp",
                     0x224,"Format not handled, bug",0,0);
    return 1;
  }
}



/* RenderingDeviceCommons::get_compressed_image_format_block_dimensions(RenderingDeviceCommons::DataFormat,
   unsigned int&, unsigned int&) */

void RenderingDeviceCommons::get_compressed_image_format_block_dimensions
               (uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 < 0xaa) {
    iVar1 = (-(uint)(param_1 < 0x82) & 0xfffffffd) + 4;
    *param_2 = iVar1;
    *param_3 = iVar1;
    return;
  }
  if (param_1 - 0xaa < 0x3e) {
    uVar2 = 1L << ((byte)(param_1 - 0xaa) & 0x3f);
    iVar1 = 4;
    if ((uVar2 & 0x3f7f000000003ffc) == 0) {
      iVar1 = (-(uint)((uVar2 & 0x80000000000003) == 0) & 0xfffffff9) + 8;
      *param_2 = iVar1;
      *param_3 = iVar1;
      return;
    }
  }
  else {
    iVar1 = 1;
  }
  *param_2 = iVar1;
  *param_3 = iVar1;
  return;
}



/* RenderingDeviceCommons::get_compressed_image_format_block_byte_size(RenderingDeviceCommons::DataFormat)
   const */

int __thiscall
RenderingDeviceCommons::get_compressed_image_format_block_byte_size(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0xb7 < param_2) {
    return (-(uint)(param_2 - 0xda < 0xe) & 0xf) + 1;
  }
  if (param_2 < 0x82) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0x10;
    uVar2 = 1L << ((char)param_2 + 0x7eU & 0x3f);
    if ((uVar2 & 0x3fffffff30fcf0) == 0) {
      return (-(uint)((uVar2 & 0xcf030f) == 0) & 0xfffffff9) + 8;
    }
  }
  return iVar1;
}



/* RenderingDeviceCommons::get_compressed_image_format_pixel_rshift(RenderingDeviceCommons::DataFormat)
    */

bool RenderingDeviceCommons::get_compressed_image_format_pixel_rshift(uint param_1)

{
  undefined1 uVar1;
  
  if (0xab < param_1) {
    return (bool)((param_1 == 0xe1) * '\x02');
  }
  uVar1 = 2;
  if (param_1 < 0xaa) {
    if (param_1 - 0x82 < 0x18) {
      return (0xcf030fUL >> ((ulong)(param_1 - 0x82) & 0x3f) & 1) != 0;
    }
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* RenderingDeviceCommons::get_image_format_required_size(RenderingDeviceCommons::DataFormat,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned
   int*) */

ulong RenderingDeviceCommons::get_image_format_required_size
                (uint param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                int *param_6,int *param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  sbyte sVar8;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_5 == 0) {
    _err_print_error("get_image_format_required_size",
                     "servers/rendering/rendering_device_commons.cpp",0x2fa,
                     "Condition \"p_mipmaps == 0\" is true. Returning: 0",param_5,0);
    uVar7 = 0;
  }
  else {
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    iVar1 = get_image_format_pixel_size();
    if (param_1 < 0xac) {
      sVar8 = 2;
      if (param_1 < 0xaa) {
        if (param_1 - 0x82 < 0x18) {
          sVar8 = (0xcf030fUL >> ((ulong)(param_1 - 0x82) & 0x3f) & 1) != 0;
        }
        else {
          sVar8 = 0;
        }
      }
    }
    else {
      sVar8 = (param_1 == 0xe1) * '\x02';
    }
    uVar6 = 0;
    uVar7 = 0;
    get_compressed_image_format_block_dimensions(param_1,&local_48,&local_44);
    do {
      uVar4 = (local_48 - 1) + (int)param_2;
      uVar3 = (local_44 - 1) + (int)param_3;
      iVar5 = uVar4 - uVar4 % local_48;
      iVar2 = uVar3 - uVar3 % local_44;
      uVar7 = (ulong)((int)uVar7 + ((uint)(iVar5 * iVar2 * iVar1) >> sVar8) * param_4);
      if (param_6 != (int *)0x0) {
        *param_6 = iVar5;
      }
      if (param_7 != (int *)0x0) {
        *param_7 = iVar2;
      }
      if (param_8 != (uint *)0x0) {
        *param_8 = param_4;
      }
      param_2 = param_2 >> 1;
      if ((uint)param_2 < local_48) {
        param_2 = (ulong)local_48;
      }
      param_3 = param_3 >> 1;
      if ((uint)param_3 < local_44) {
        param_3 = (ulong)local_44;
      }
      param_4 = param_4 >> 1;
      if (param_4 == 0) {
        param_4 = 1;
      }
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar3;
    } while ((uint)param_5 != uVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingDeviceCommons::get_image_required_mipmaps(unsigned int, unsigned int, unsigned int) */

int RenderingDeviceCommons::get_image_required_mipmaps(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 1;
  if ((param_2 != 1 || param_3 != 1) || (param_1 != 1)) {
    do {
      uVar2 = 0;
      if (param_1 >> 1 != 0) {
        uVar2 = param_1 >> 1;
      }
      uVar4 = 0;
      if (param_2 >> 1 != 0) {
        uVar4 = param_2 >> 1;
      }
      uVar3 = 0;
      if (param_3 >> 1 != 0) {
        uVar3 = param_3 >> 1;
      }
      iVar5 = iVar5 + 1;
      uVar1 = param_1 | param_2 | param_3;
      param_2 = uVar4;
      param_3 = uVar3;
      param_1 = uVar2;
    } while (1 < uVar1 >> 1);
  }
  return iVar5;
}



/* RenderingDeviceCommons::format_has_stencil(RenderingDeviceCommons::DataFormat) */

bool RenderingDeviceCommons::format_has_stencil(int param_1)

{
  return param_1 - 0x7eU < 4;
}



/* RenderingDeviceCommons::format_get_plane_count(RenderingDeviceCommons::DataFormat) */

char RenderingDeviceCommons::format_get_plane_count(int param_1)

{
  return (param_1 - 0x7fU < 3) + '\x01';
}



/* RenderingDeviceCommons::get_format_vertex_size(RenderingDeviceCommons::DataFormat) */

undefined1 RenderingDeviceCommons::get_format_vertex_size(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 - 8U < 0x71) {
    uVar1 = CSWTCH_29[param_1 - 8U];
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingDeviceCommons::FORMAT_NAMES */

void RenderingDeviceCommons::_GLOBAL__sub_I_FORMAT_NAMES(void)

{
  SAMPLER_BORDER_COLOR_VALUE._0_16_ = (undefined1  [16])0x0;
  SAMPLER_BORDER_COLOR_VALUE._16_16_ = (undefined1  [16])0x0;
  SAMPLER_BORDER_COLOR_VALUE._44_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._40_4_ = _UNK_00102468;
  SAMPLER_BORDER_COLOR_VALUE._32_8_ = __LC5;
  SAMPLER_BORDER_COLOR_VALUE._48_8_ = __LC5;
  SAMPLER_BORDER_COLOR_VALUE._56_8_ = SAMPLER_BORDER_COLOR_VALUE._40_8_;
  SAMPLER_BORDER_COLOR_VALUE._64_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._68_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._72_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._76_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._80_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._84_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._88_4_ = _LC7;
  SAMPLER_BORDER_COLOR_VALUE._92_4_ = _LC7;
  return;
}


