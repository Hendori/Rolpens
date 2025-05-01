
char * dfdToStringFlagsBit(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((param_1 == 0) && (pcVar1 = "KHR_DF_FLAG_ALPHA_STRAIGHT", param_2 != '\0')) {
    pcVar1 = "KHR_DF_FLAG_ALPHA_PREMULTIPLIED";
  }
  return pcVar1;
}



char * dfdToStringSampleDatatypeQualifiers(int param_1,char param_2)

{
  char *pcVar1;
  
  if (param_2 == '\0') {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = "KHR_DF_SAMPLE_DATATYPE_SIGNED";
    if (param_1 != 6) {
      if (0x40 < (uint)(1 << ((byte)param_1 & 0x1f))) {
        pcVar1 = "KHR_DF_SAMPLE_DATATYPE_FLOAT";
        if (param_1 != 7) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_SAMPLE_DATATYPE_LINEAR";
      if (param_1 != 4) {
        pcVar1 = "KHR_DF_SAMPLE_DATATYPE_EXPONENT";
        if (param_1 != 5) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
    }
  }
  return pcVar1;
}



undefined8 printFlagBitsJSON(undefined4 param_1,undefined *param_2,undefined8 param_3,code *param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar8;
  undefined1 auVar9 [16];
  ulong uVar7;
  
  bVar1 = true;
  iVar8 = 0;
  uVar3 = param_3;
  do {
    uVar6 = 1 << ((byte)iVar8 & 0x1f);
    uVar7 = (ulong)uVar6;
    uVar6 = uVar6 & (uint)param_3;
    auVar9 = (*param_4)(iVar8,uVar6 != 0,uVar3);
    if (auVar9._0_8_ == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar9._8_8_;
      auVar9 = auVar2 << 0x40;
      if (uVar6 != 0) {
        puVar5 = &_LC7;
        puVar4 = param_2;
        if (bVar1) {
          puVar4 = &_LC6;
          puVar5 = &_LC6;
        }
        __printf_chk(2,"%s%s%*s%u",puVar5,puVar4,param_1,&_LC6);
        auVar9._8_8_ = 0x100129;
        auVar9._0_8_ = uVar7;
        goto LAB_00100100;
      }
    }
    else {
      puVar5 = &_LC7;
      puVar4 = param_2;
      if (bVar1) {
        puVar4 = &_LC6;
        puVar5 = &_LC6;
      }
      auVar9 = __printf_chk(2,"%s%s%*s\"%s\"",puVar5,puVar4,param_1,&_LC6,auVar9._0_8_);
LAB_00100100:
      bVar1 = false;
    }
    uVar3 = auVar9._8_8_;
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x20) {
      if (bVar1) {
        return auVar9._0_8_;
      }
      uVar3 = __printf_chk(2,&_LC10,param_2);
      return uVar3;
    }
  } while( true );
}



char * dfdToStringVendorID(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "KHR_DF_VENDORID_KHRONOS";
  if (param_1 != 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * dfdToStringDescriptorType(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_PLANES";
  if (((param_1 != 0x6001) &&
      (pcVar1 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_DIMENSIONS", param_1 != 0x6002)) &&
     (pcVar1 = "KHR_DF_KHR_DESCRIPTORTYPE_BASICFORMAT", param_1 != 0)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * dfdToStringVersionNumber(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "KHR_DF_VERSIONNUMBER_1_2";
  if (((param_1 != 1) && (pcVar1 = "KHR_DF_VERSIONNUMBER_1_3", param_1 != 2)) &&
     (pcVar1 = "KHR_DF_VERSIONNUMBER_1_1", param_1 != 0)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * dfdToStringTransferFunction(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "KHR_DF_TRANSFER_UNSPECIFIED";
  case 1:
    return "KHR_DF_TRANSFER_LINEAR";
  case 2:
    return "KHR_DF_TRANSFER_SRGB";
  case 3:
    return "KHR_DF_TRANSFER_ITU";
  case 4:
    return "KHR_DF_TRANSFER_NTSC";
  case 5:
    return "KHR_DF_TRANSFER_SLOG";
  case 6:
    return "KHR_DF_TRANSFER_SLOG2";
  case 7:
    return "KHR_DF_TRANSFER_BT1886";
  case 8:
    return "KHR_DF_TRANSFER_HLG_OETF";
  case 9:
    return "KHR_DF_TRANSFER_HLG_EOTF";
  case 10:
    return "KHR_DF_TRANSFER_PQ_EOTF";
  case 0xb:
    return "KHR_DF_TRANSFER_PQ_OETF";
  case 0xc:
    return "KHR_DF_TRANSFER_DCIP3";
  case 0xd:
    return "KHR_DF_TRANSFER_PAL_OETF";
  case 0xe:
    return "KHR_DF_TRANSFER_PAL625_EOTF";
  case 0xf:
    return "KHR_DF_TRANSFER_ST240";
  case 0x10:
    return "KHR_DF_TRANSFER_ACESCC";
  case 0x11:
    return "KHR_DF_TRANSFER_ACESCCT";
  case 0x12:
    return "KHR_DF_TRANSFER_ADOBERGB";
  default:
    return (char *)0x0;
  }
}



char * dfdToStringColorPrimaries(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "KHR_DF_PRIMARIES_UNSPECIFIED";
  case 1:
    return "KHR_DF_PRIMARIES_BT709";
  case 2:
    return "KHR_DF_PRIMARIES_BT601_EBU";
  case 3:
    return "KHR_DF_PRIMARIES_BT601_SMPTE";
  case 4:
    return "KHR_DF_PRIMARIES_BT2020";
  case 5:
    return "KHR_DF_PRIMARIES_CIEXYZ";
  case 6:
    return "KHR_DF_PRIMARIES_ACES";
  case 7:
    return "KHR_DF_PRIMARIES_ACESCC";
  case 8:
    return "KHR_DF_PRIMARIES_NTSC1953";
  case 9:
    return "KHR_DF_PRIMARIES_PAL525";
  case 10:
    return "KHR_DF_PRIMARIES_DISPLAYP3";
  case 0xb:
    return "KHR_DF_PRIMARIES_ADOBERGB";
  default:
    return (char *)0x0;
  }
}



char * dfdToStringColorModel(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "KHR_DF_MODEL_UNSPECIFIED";
  case 1:
    return "KHR_DF_MODEL_RGBSDA";
  case 2:
    return "KHR_DF_MODEL_YUVSDA";
  case 3:
    return "KHR_DF_MODEL_YIQSDA";
  case 4:
    return "KHR_DF_MODEL_LABSDA";
  case 5:
    return "KHR_DF_MODEL_CMYKA";
  case 6:
    return "KHR_DF_MODEL_XYZW";
  case 7:
    return "KHR_DF_MODEL_HSVA_ANG";
  case 8:
    return "KHR_DF_MODEL_HSLA_ANG";
  case 9:
    return "KHR_DF_MODEL_HSVA_HEX";
  case 10:
    return "KHR_DF_MODEL_HSLA_HEX";
  case 0xb:
    return "KHR_DF_MODEL_YCGCOA";
  case 0xc:
    return "KHR_DF_MODEL_YCCBCCRC";
  case 0xd:
    return "KHR_DF_MODEL_ICTCP";
  case 0xe:
    return "KHR_DF_MODEL_CIEXYZ";
  case 0xf:
    return "KHR_DF_MODEL_CIEXYY";
  default:
    return (char *)0x0;
  case 0x80:
    return "KHR_DF_MODEL_BC1A";
  case 0x81:
    return "KHR_DF_MODEL_BC2";
  case 0x82:
    return "KHR_DF_MODEL_BC3";
  case 0x83:
    return "KHR_DF_MODEL_BC4";
  case 0x84:
    return "KHR_DF_MODEL_BC5";
  case 0x85:
    return "KHR_DF_MODEL_BC6H";
  case 0x86:
    return "KHR_DF_MODEL_BC7";
  case 0xa0:
    return "KHR_DF_MODEL_ETC1";
  case 0xa1:
    return "KHR_DF_MODEL_ETC2";
  case 0xa2:
    return "KHR_DF_MODEL_ASTC";
  case 0xa3:
    return "KHR_DF_MODEL_ETC1S";
  case 0xa4:
    return "KHR_DF_MODEL_PVRTC";
  case 0xa5:
    return "KHR_DF_MODEL_PVRTC2";
  case 0xa6:
    return "KHR_DF_MODEL_UASTC";
  }
}



char * dfdToStringChannelId(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  
  switch(param_1) {
  default:
    switch(param_2) {
    case 0:
      pcVar1 = "KHR_DF_CHANNEL_UNSPECIFIED_0";
      break;
    case 1:
      return "KHR_DF_CHANNEL_UNSPECIFIED_1";
    case 2:
      return "KHR_DF_CHANNEL_UNSPECIFIED_2";
    case 3:
      return "KHR_DF_CHANNEL_UNSPECIFIED_3";
    case 4:
      return "KHR_DF_CHANNEL_UNSPECIFIED_4";
    case 5:
      return "KHR_DF_CHANNEL_UNSPECIFIED_5";
    case 6:
      return "KHR_DF_CHANNEL_UNSPECIFIED_6";
    case 7:
      return "KHR_DF_CHANNEL_UNSPECIFIED_7";
    case 8:
      return "KHR_DF_CHANNEL_UNSPECIFIED_8";
    case 9:
      return "KHR_DF_CHANNEL_UNSPECIFIED_9";
    case 10:
      return "KHR_DF_CHANNEL_UNSPECIFIED_10";
    case 0xb:
      return "KHR_DF_CHANNEL_UNSPECIFIED_11";
    case 0xc:
      return "KHR_DF_CHANNEL_UNSPECIFIED_12";
    case 0xd:
      return "KHR_DF_CHANNEL_UNSPECIFIED_13";
    case 0xe:
      return "KHR_DF_CHANNEL_UNSPECIFIED_14";
    case 0xf:
      return "KHR_DF_CHANNEL_UNSPECIFIED_15";
    default:
      goto switchD_001005d9_default;
    }
    break;
  case 1:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_RGBSDA_RED";
    case 1:
      return "KHR_DF_CHANNEL_RGBSDA_GREEN";
    case 2:
      return "KHR_DF_CHANNEL_RGBSDA_BLUE";
    default:
      return (char *)0x0;
    case 0xd:
      return "KHR_DF_CHANNEL_RGBSDA_STENCIL";
    case 0xe:
      return "KHR_DF_CHANNEL_RGBSDA_DEPTH";
    case 0xf:
      return "KHR_DF_CHANNEL_RGBSDA_ALPHA";
    }
  case 2:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_YUVSDA_Y";
    case 1:
      return "KHR_DF_CHANNEL_YUVSDA_U";
    case 2:
      return "KHR_DF_CHANNEL_YUVSDA_V";
    default:
      return (char *)0x0;
    case 0xd:
      return "KHR_DF_CHANNEL_YUVSDA_STENCIL";
    case 0xe:
      return "KHR_DF_CHANNEL_YUVSDA_DEPTH";
    case 0xf:
      return "KHR_DF_CHANNEL_YUVSDA_ALPHA";
    }
  case 3:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_YIQSDA_Y";
    case 1:
      return "KHR_DF_CHANNEL_YIQSDA_I";
    case 2:
      return "KHR_DF_CHANNEL_YIQSDA_Q";
    default:
      return (char *)0x0;
    case 0xd:
      return "KHR_DF_CHANNEL_YIQSDA_STENCIL";
    case 0xe:
      return "KHR_DF_CHANNEL_YIQSDA_DEPTH";
    case 0xf:
      return "KHR_DF_CHANNEL_YIQSDA_ALPHA";
    }
  case 4:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_LABSDA_L";
    case 1:
      return "KHR_DF_CHANNEL_LABSDA_A";
    case 2:
      return "KHR_DF_CHANNEL_LABSDA_B";
    default:
      return (char *)0x0;
    case 0xd:
      return "KHR_DF_CHANNEL_LABSDA_STENCIL";
    case 0xe:
      return "KHR_DF_CHANNEL_LABSDA_DEPTH";
    case 0xf:
      return "KHR_DF_CHANNEL_LABSDA_ALPHA";
    }
  case 5:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_CMYKSDA_CYAN";
    case 1:
      return "KHR_DF_CHANNEL_CMYKSDA_MAGENTA";
    case 2:
      return "KHR_DF_CHANNEL_CMYKSDA_YELLOW";
    case 3:
      return "KHR_DF_CHANNEL_CMYKSDA_BLACK";
    default:
      return (char *)0x0;
    case 0xf:
      return "KHR_DF_CHANNEL_CMYKSDA_ALPHA";
    }
  case 6:
    pcVar1 = "KHR_DF_CHANNEL_XYZW_Z";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_XYZW_W";
        if (param_2 != 3) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_XYZW_X";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_XYZW_Y";
      }
      return pcVar1;
    }
    break;
  case 7:
    pcVar1 = "KHR_DF_CHANNEL_HSVA_ANG_HUE";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_HSVA_ANG_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_HSVA_ANG_VALUE";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_HSVA_ANG_SATURATION";
      }
      return pcVar1;
    }
    break;
  case 8:
    pcVar1 = "KHR_DF_CHANNEL_HSLA_ANG_HUE";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_HSLA_ANG_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_HSLA_ANG_LIGHTNESS";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_HSLA_ANG_SATURATION";
      }
      return pcVar1;
    }
    break;
  case 9:
    pcVar1 = "KHR_DF_CHANNEL_HSVA_HEX_HUE";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_HSVA_HEX_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_HSVA_HEX_VALUE";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_HSVA_HEX_SATURATION";
      }
      return pcVar1;
    }
    break;
  case 10:
    pcVar1 = "KHR_DF_CHANNEL_HSLA_HEX_HUE";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_HSLA_HEX_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_HSLA_HEX_LIGHTNESS";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_HSLA_HEX_SATURATION";
      }
      return pcVar1;
    }
    break;
  case 0xb:
    pcVar1 = "KHR_DF_CHANNEL_YCGCOA_CO";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_YCGCOA_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_YCGCOA_Y";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_YCGCOA_CG";
      }
      return pcVar1;
    }
    break;
  case 0xe:
    pcVar1 = "KHR_DF_CHANNEL_CIEXYZ_Y";
    if ((param_2 != 1) && (pcVar1 = "KHR_DF_CHANNEL_CIEXYZ_Z", param_2 != 2)) {
      pcVar1 = "KHR_DF_CHANNEL_CIEXYZ_X";
      if (param_2 != 0) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0xf:
    pcVar1 = "KHR_DF_CHANNEL_CIEXYY_YCHROMA";
    if ((param_2 != 1) && (pcVar1 = "KHR_DF_CHANNEL_CIEXYY_YLUMA", param_2 != 2)) {
      pcVar1 = "KHR_DF_CHANNEL_CIEXYY_X";
      if (param_2 != 0) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0x80:
    pcVar1 = "KHR_DF_CHANNEL_BC1A_COLOR";
    if (param_2 != 0) {
      pcVar1 = "KHR_DF_CHANNEL_BC1A_ALPHA";
      if (param_2 != 1) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0x81:
    pcVar1 = "KHR_DF_CHANNEL_BC2_COLOR";
    if (param_2 != 0) {
      pcVar1 = "KHR_DF_CHANNEL_BC2_ALPHA";
      if (param_2 != 0xf) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0x82:
    pcVar1 = "KHR_DF_CHANNEL_BC3_COLOR";
    if (param_2 != 0) {
      pcVar1 = "KHR_DF_CHANNEL_BC3_ALPHA";
      if (param_2 != 0xf) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0x83:
    pcVar1 = "KHR_DF_CHANNEL_BC4_DATA";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0x84:
    pcVar1 = "KHR_DF_CHANNEL_BC5_RED";
    if (param_2 != 0) {
      pcVar1 = "KHR_DF_CHANNEL_BC5_GREEN";
      if (param_2 != 1) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    break;
  case 0x85:
    pcVar1 = "KHR_DF_CHANNEL_BC6H_COLOR";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0x86:
    pcVar1 = "KHR_DF_CHANNEL_BC7_COLOR";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0xa0:
    pcVar1 = "KHR_DF_CHANNEL_ETC1_COLOR";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0xa1:
    pcVar1 = "KHR_DF_CHANNEL_ETC2_COLOR";
    if (param_2 != 2) {
      if (2 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_ETC2_ALPHA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_ETC2_RED";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_ETC2_GREEN";
      }
      return pcVar1;
    }
    break;
  case 0xa2:
    pcVar1 = "KHR_DF_CHANNEL_ASTC_DATA";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0xa3:
    pcVar1 = "KHR_DF_CHANNEL_ETC1S_GGG";
    if (param_2 != 4) {
      if (4 < param_2) {
        pcVar1 = "KHR_DF_CHANNEL_ETC1S_AAA";
        if (param_2 != 0xf) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
      pcVar1 = "KHR_DF_CHANNEL_ETC1S_RGB";
      if (param_2 != 0) {
        pcVar1 = "KHR_DF_CHANNEL_ETC1S_RRR";
        if (param_2 != 3) {
          pcVar1 = (char *)0x0;
        }
        return pcVar1;
      }
    }
    break;
  case 0xa4:
    pcVar1 = "KHR_DF_CHANNEL_PVRTC_COLOR";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0xa5:
    pcVar1 = "KHR_DF_CHANNEL_PVRTC2_COLOR";
    if (param_2 != 0) {
      pcVar1 = (char *)0x0;
    }
    return pcVar1;
  case 0xa6:
    switch(param_2) {
    case 0:
      return "KHR_DF_CHANNEL_UASTC_RGB";
    case 3:
      return "KHR_DF_CHANNEL_UASTC_RGBA";
    case 4:
      return "KHR_DF_CHANNEL_UASTC_RRR";
    case 5:
      return "KHR_DF_CHANNEL_UASTC_RRRG";
    case 6:
      return "KHR_DF_CHANNEL_UASTC_RG";
    }
switchD_001005d9_default:
    return (char *)0x0;
  }
  return pcVar1;
}



void printDFD(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint local_58;
  uint *local_50;
  int local_44;
  uint local_3c;
  
  if (3 < param_2) {
    if (*param_1 < param_2) {
      param_2 = *param_1;
    }
    if (3 < param_2) {
      local_58 = param_2 - 4;
      local_50 = param_1 + 1;
      __printf_chk(2,"DFD total bytes: %u\n");
      if (local_58 < 8) {
        return;
      }
      local_44 = 0;
      do {
        uVar11 = local_50[1] & 0xffff;
        uVar3 = local_50[1] >> 0x10;
        uVar8 = *local_50 & 0x1ffff;
        uVar7 = *local_50 >> 0x11;
        __printf_chk(2,"Vendor ID: ");
        if (uVar8 == 0) {
          __printf_chk(2,&_LC10,"KHR_DF_VENDORID_KHRONOS");
        }
        else {
          __printf_chk(2,&_LC185,uVar8);
        }
        __printf_chk(2,"\nDescriptor type: ");
        if (uVar7 == 0x6001) {
          pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_PLANES";
LAB_00101290:
          __printf_chk(2,&_LC10,pcVar6);
        }
        else {
          if (uVar7 == 0x6002) {
            pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_DIMENSIONS";
            goto LAB_00101290;
          }
          if (uVar7 == 0) {
            pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_BASICFORMAT";
            goto LAB_00101290;
          }
          __printf_chk(2,&_LC185,uVar7);
        }
        __printf_chk(2,"\nVersion: ");
        if (uVar11 == 1) {
          pcVar6 = "KHR_DF_VERSIONNUMBER_1_2";
LAB_0010125f:
          __printf_chk(2,&_LC10,pcVar6);
        }
        else {
          if (uVar11 == 2) {
            pcVar6 = "KHR_DF_VERSIONNUMBER_1_3";
            goto LAB_0010125f;
          }
          if (uVar11 == 0) {
            pcVar6 = "KHR_DF_VERSIONNUMBER_1_1";
            goto LAB_0010125f;
          }
          __printf_chk(2,&_LC185,uVar11);
        }
        __printf_chk(2,"\nDescriptor block size: %u",uVar3);
        putchar(10);
        if (uVar8 == 0 && uVar7 == 0) {
          if (local_58 < 0x18) {
            return;
          }
          iVar9 = 1;
          uVar7 = local_50[2] & 0xff;
          uVar8 = local_50[2] >> 0x18;
          __printf_chk(2,"Flags: 0x%X (",uVar8);
          pcVar6 = "KHR_DF_FLAG_ALPHA_PREMULTIPLIED";
          if ((uVar8 & 1) == 0) {
            pcVar6 = "KHR_DF_FLAG_ALPHA_STRAIGHT";
          }
          __printf_chk(2,&_LC190,&_LC6,pcVar6);
          do {
            bVar5 = (byte)iVar9;
            while (uVar11 = 1 << (bVar5 & 0x1f), (uVar11 & uVar8) == 0) {
              iVar9 = iVar9 + 1;
              if (iVar9 == 0x20) goto LAB_00100e7b;
              bVar5 = (byte)iVar9;
            }
            iVar9 = iVar9 + 1;
            __printf_chk(2,&_LC191,&_LC182,uVar11);
          } while (iVar9 != 0x20);
LAB_00100e7b:
          __printf_chk(2,")\nTransfer: ");
          uVar8 = (uint)*(byte *)((long)local_50 + 10);
          lVar4 = dfdToStringTransferFunction(*(byte *)((long)local_50 + 10));
          if (lVar4 == 0) {
            __printf_chk(2,&_LC185,uVar8);
          }
          else {
            __printf_chk(2,&_LC10,lVar4);
          }
          __printf_chk(2,"\nPrimaries: ");
          uVar8 = (uint)*(byte *)((long)local_50 + 9);
          lVar4 = dfdToStringColorPrimaries(*(byte *)((long)local_50 + 9));
          if (lVar4 == 0) {
            __printf_chk(2,&_LC185,uVar8);
          }
          else {
            __printf_chk(2,&_LC10,lVar4);
          }
          __printf_chk(2,"\nModel: ");
          lVar4 = dfdToStringColorModel(uVar7);
          if (lVar4 == 0) {
            __printf_chk(2,&_LC185,uVar7);
          }
          else {
            __printf_chk(2,&_LC10,lVar4);
          }
          putchar(10);
          uVar8 = local_50[3];
          __printf_chk(2,"Dimensions: %u, %u, %u, %u\n",(uVar8 & 0xff) + 1,(uVar8 >> 8 & 0xff) + 1,
                       (uVar8 >> 0x10 & 0xff) + 1,(uVar8 >> 0x18) + 1);
          uVar8 = local_50[5];
          uVar11 = local_50[4];
          __printf_chk(2,"Plane bytes: %u, %u, %u, %u, %u, %u, %u, %u\n",uVar11 & 0xff,
                       uVar11 >> 8 & 0xff,uVar11 >> 0x10 & 0xff,uVar11 >> 0x18,uVar8 & 0xff,
                       uVar8 >> 8 & 0xff,uVar8 >> 0x10 & 0xff,uVar8 >> 0x18);
          uVar8 = uVar3 - 0x18;
          local_3c = uVar8 >> 4;
          if (uVar8 < 0x110) {
            if (uVar8 >> 4 == 0) goto LAB_00100d08;
          }
          else {
            local_3c = 0x10;
          }
          if (0x27 < local_58) {
            iVar9 = 0;
            puVar13 = local_50 + 6;
            do {
              iVar12 = 0;
              uVar8 = *puVar13 >> 0x18 & 0xf;
              __printf_chk(2,"Sample %u:\n");
              uVar11 = *puVar13 >> 0x18 & 0xf0;
              __printf_chk(2,"    Qualifiers: 0x%X (",uVar11);
              bVar1 = true;
              do {
                puVar10 = &_LC6;
                bVar5 = (byte)iVar12;
                if (!bVar1) {
                  puVar10 = &_LC182;
                }
                while (uVar2 = 1 << (bVar5 & 0x1f), (uVar11 & uVar2) != 0) {
                  if (uVar2 == 0x40) {
                    pcVar6 = "KHR_DF_SAMPLE_DATATYPE_SIGNED";
LAB_001010b4:
                    __printf_chk(2,&_LC190,puVar10,pcVar6);
                  }
                  else {
                    if (uVar2 < 0x41) {
                      if (uVar2 == 0x10) {
                        pcVar6 = "KHR_DF_SAMPLE_DATATYPE_LINEAR";
                      }
                      else {
                        pcVar6 = "KHR_DF_SAMPLE_DATATYPE_EXPONENT";
                        if (uVar2 != 0x20) goto LAB_00101202;
                      }
                      goto LAB_001010b4;
                    }
                    pcVar6 = "KHR_DF_SAMPLE_DATATYPE_FLOAT";
                    if (uVar2 == 0x80) goto LAB_001010b4;
LAB_00101202:
                    __printf_chk(2,&_LC191,puVar10,uVar2);
                  }
                  iVar12 = iVar12 + 1;
                  if (iVar12 == 0x20) goto LAB_001010fe;
                  bVar1 = false;
                  puVar10 = &_LC182;
                  bVar5 = (byte)iVar12;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 != 0x20);
LAB_001010fe:
              puts(")");
              __printf_chk(2,"    Channel Type: 0x%X",uVar8);
              lVar4 = dfdToStringChannelId(uVar7,uVar8);
              if (lVar4 == 0) {
                __printf_chk(2," (%u)\n",uVar8);
              }
              else {
                __printf_chk(2," (%s)\n",lVar4);
              }
              __printf_chk(2,"    Length: %u bits Offset: %u\n",(*puVar13 >> 0x10 & 0xff) + 1,
                           *puVar13 & 0xffff);
              uVar8 = puVar13[1];
              __printf_chk(2,"    Position: %u, %u, %u, %u\n",uVar8 & 0xff,uVar8 >> 8 & 0xff,
                           uVar8 >> 0x10 & 0xff,uVar8 >> 0x18);
              __printf_chk(2,"    Lower: 0x%08x\n    Upper: 0x%08x\n",puVar13[2],puVar13[3]);
              if ((int)local_3c <= iVar9 + 1) break;
              iVar9 = iVar9 + 1;
              puVar13 = puVar13 + 4;
            } while (iVar9 * 0x10 + 0x28U <= local_58);
          }
        }
        else if ((1 < uVar7 - 0x6001) || (uVar8 != 0)) {
          puts("Unknown block");
        }
LAB_00100d08:
        if (uVar3 < 8) {
          uVar3 = 8;
        }
        if (local_58 < uVar3) {
          return;
        }
        local_58 = local_58 - uVar3;
        local_44 = local_44 + 1;
        local_50 = local_50 + (uVar3 >> 2);
        if (local_58 < 8) {
          return;
        }
        if (local_44 == 10) {
          return;
        }
      } while( true );
    }
  }
  return;
}



void printDFDJSON(uint *param_1,uint param_2,int param_3,int param_4,char param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  uint local_84;
  uint local_80;
  uint *local_78;
  int local_70;
  int local_44;
  
  if (param_5 == '\0') {
    local_44 = param_3 * param_4;
    puVar12 = &_LC208;
    puVar16 = &_LC207;
  }
  else {
    puVar12 = &_LC6;
    local_44 = 0;
    param_4 = 0;
    param_3 = 0;
    puVar16 = puVar12;
  }
  if (param_2 < 4) {
    __printf_chk(2,"%*s\"totalSize\":%s%u,%s",local_44,&_LC6,puVar16,0,puVar12);
  }
  else {
    uVar4 = *param_1;
    __printf_chk(2,"%*s\"totalSize\":%s%u,%s",local_44,&_LC6,puVar16,uVar4,puVar12);
    if (uVar4 < param_2) {
      param_2 = uVar4;
    }
    if (3 < param_2) {
      local_78 = param_1 + 1;
      local_84 = param_2 - 4;
      __printf_chk(2,"%*s\"blocks\":%s[",local_44,&_LC6,puVar16);
      if (local_84 < 8) {
LAB_00101da1:
        __printf_chk(2,&_LC10,puVar12);
        __printf_chk(2,"%*s]%s",local_44,&_LC6,puVar12);
        return;
      }
      local_70 = 0;
      iVar7 = (param_3 + 1) * param_4;
      iVar11 = iVar7 + param_4;
      iVar10 = iVar11 + param_4;
      iVar13 = iVar10 + param_4;
      do {
        uVar4 = *local_78;
        uVar8 = uVar4 >> 0x11;
        local_80 = uVar4 & 0x1ffff;
        uVar14 = local_78[1] & 0xffff;
        uVar2 = local_78[1] >> 0x10;
        uVar3 = local_78[2];
        if (local_70 == 0) {
          __printf_chk(2,&_LC10,puVar12);
        }
        else {
          __printf_chk(2,&_LC212,puVar12);
        }
        __printf_chk(2,"%*s{%s",iVar7,&_LC6,puVar12);
        __printf_chk(2,"%*s\"vendorId\":%s",iVar11,&_LC6,puVar16);
        if (local_80 == 0) {
          __printf_chk(2,&_LC215,"KHR_DF_VENDORID_KHRONOS");
        }
        else {
          __printf_chk(2,&_LC185,uVar4 & 0x1ffff);
        }
        __printf_chk(2,&_LC212,puVar12);
        __printf_chk(2,"%*s\"descriptorType\":%s",iVar11,&_LC6,puVar16);
        if (uVar8 == 0x6001) {
          pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_PLANES";
LAB_00101d0f:
          __printf_chk(2,&_LC215,pcVar6);
        }
        else {
          if (uVar8 == 0x6002) {
            pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_ADDITIONAL_DIMENSIONS";
            goto LAB_00101d0f;
          }
          if (uVar8 == 0) {
            pcVar6 = "KHR_DF_KHR_DESCRIPTORTYPE_BASICFORMAT";
            goto LAB_00101d0f;
          }
          __printf_chk(2,&_LC185,uVar8);
        }
        __printf_chk(2,&_LC212,puVar12);
        __printf_chk(2,"%*s\"versionNumber\":%s",iVar11,&_LC6,puVar16);
        if (uVar14 == 1) {
          pcVar6 = "KHR_DF_VERSIONNUMBER_1_2";
LAB_00101d37:
          __printf_chk(2,&_LC215,pcVar6);
        }
        else {
          if (uVar14 == 2) {
            pcVar6 = "KHR_DF_VERSIONNUMBER_1_3";
            goto LAB_00101d37;
          }
          if (uVar14 == 0) {
            pcVar6 = "KHR_DF_VERSIONNUMBER_1_1";
            goto LAB_00101d37;
          }
          __printf_chk(2,&_LC185,uVar14);
        }
        __printf_chk(2,&_LC212,puVar12);
        __printf_chk(2,"%*s\"descriptorBlockSize\":%s%u",iVar11,&_LC6,puVar16,uVar2);
        if (local_80 == 0 && uVar8 == 0) {
          if (local_84 < 0x18) {
            __printf_chk(2,&_LC10,puVar12);
            __printf_chk(2,"%*s}%s",iVar7,&_LC6,puVar12);
            goto LAB_00101da1;
          }
          __printf_chk(2,&_LC212,puVar12);
          __printf_chk(2,"%*s\"flags\":%s[%s",iVar11,&_LC6,puVar16,puVar12);
          printFlagBitsJSON(iVar10,puVar12,*(undefined1 *)((long)local_78 + 0xb),0x100000);
          __printf_chk(2,"%*s],%s",iVar11,&_LC6,puVar12);
          uVar1 = *(undefined1 *)((long)local_78 + 10);
          __printf_chk(2,"%*s\"transferFunction\":%s",iVar11,&_LC6,puVar16);
          lVar5 = dfdToStringTransferFunction(uVar1);
          if (lVar5 == 0) {
            __printf_chk(2,&_LC185,uVar1);
          }
          else {
            __printf_chk(2,&_LC215,lVar5);
          }
          __printf_chk(2,&_LC212,puVar12);
          uVar1 = *(undefined1 *)((long)local_78 + 9);
          __printf_chk(2,"%*s\"colorPrimaries\":%s",iVar11,&_LC6,puVar16);
          lVar5 = dfdToStringColorPrimaries(uVar1);
          if (lVar5 == 0) {
            __printf_chk(2,&_LC185,uVar1);
          }
          else {
            __printf_chk(2,&_LC215,lVar5);
          }
          uVar3 = uVar3 & 0xff;
          __printf_chk(2,&_LC212,puVar12);
          __printf_chk(2,"%*s\"colorModel\":%s",iVar11,&_LC6,puVar16);
          lVar5 = dfdToStringColorModel(uVar3);
          if (lVar5 == 0) {
            __printf_chk(2,&_LC185,uVar3);
          }
          else {
            __printf_chk(2,&_LC215,lVar5);
          }
          __printf_chk(2,&_LC212,puVar12);
          uVar4 = local_78[3];
          __printf_chk(2,"%*s\"texelBlockDimension\":%s[%u,%s%u,%s%u,%s%u],%s",iVar11,&_LC6,puVar16,
                       (uVar4 & 0xff) + 1,puVar16,(uVar4 >> 8 & 0xff) + 1,puVar16,
                       (uVar4 >> 0x10 & 0xff) + 1,puVar16,(uVar4 >> 0x18) + 1,puVar12);
          uVar4 = local_78[5];
          uVar8 = local_78[4];
          __printf_chk(2,"%*s\"bytesPlane\":%s[%u,%s%u,%s%u,%s%u,%s%u,%s%u,%s%u,%s%u],%s",iVar11,
                       &_LC6,puVar16,uVar8 & 0xff,puVar16,uVar8 >> 8 & 0xff,puVar16,
                       uVar8 >> 0x10 & 0xff,puVar16,uVar8 >> 0x18,puVar16,uVar4 & 0xff,puVar16,
                       uVar4 >> 8 & 0xff,puVar16,uVar4 >> 0x10 & 0xff,puVar16,uVar4 >> 0x18,puVar12)
          ;
          __printf_chk(2,"%*s\"samples\":%s[%s",iVar11,&_LC6,puVar16,puVar12);
          uVar4 = uVar2 - 0x18;
          uVar8 = uVar4 >> 4;
          if (uVar4 < 0x110) {
            if (uVar4 >> 4 != 0) goto LAB_001019de;
          }
          else {
            uVar8 = 0x10;
LAB_001019de:
            if (0x27 < local_84) {
              puVar9 = local_78 + 6;
              iVar15 = 0;
              do {
                if (iVar15 != 0) {
                  __printf_chk(2,&_LC212,puVar12);
                }
                __printf_chk(2,"%*s{%s",iVar10,&_LC6,puVar12);
                uVar4 = *puVar9;
                uVar14 = uVar4 >> 0x18 & 0xf0;
                if (uVar14 == 0) {
                  __printf_chk(2,"%*s\"qualifiers\":%s[],%s",iVar13,&_LC6,puVar16,puVar12);
                }
                else {
                  __printf_chk(2,"%*s\"qualifiers\":%s[%s",iVar13,&_LC6,puVar16,puVar12);
                  printFlagBitsJSON(iVar13 + param_4,puVar12,uVar14,
                                    dfdToStringSampleDatatypeQualifiers);
                  __printf_chk(2,"%*s],%s",iVar13,&_LC6,puVar12);
                }
                uVar14 = *puVar9 >> 0x18 & 0xf;
                lVar5 = dfdToStringChannelId(uVar3,uVar14);
                if (lVar5 == 0) {
                  __printf_chk(2,"%*s\"channelType\":%s%u,%s",iVar13,&_LC6,puVar16,uVar14,puVar12);
                }
                else {
                  __printf_chk(2,"%*s\"channelType\":%s\"%s\",%s",iVar13,&_LC6,puVar16,lVar5,puVar12
                              );
                }
                __printf_chk(2,"%*s\"bitLength\":%s%u,%s",iVar13,&_LC6,puVar16,
                             *(undefined1 *)((long)puVar9 + 2),puVar12);
                __printf_chk(2,"%*s\"bitOffset\":%s%u,%s",iVar13,&_LC6,puVar16,(short)*puVar9,
                             puVar12);
                uVar14 = puVar9[1];
                __printf_chk(2,"%*s\"samplePosition\":%s[%u,%s%u,%s%u,%s%u],%s",iVar13,&_LC6,puVar16
                             ,uVar14 & 0xff,puVar16,uVar14 >> 8 & 0xff,puVar16,uVar14 >> 0x10 & 0xff
                             ,puVar16,uVar14 >> 0x18,puVar12);
                if ((uVar4 >> 0x18 & 0x40) == 0) {
                  __printf_chk(2,"%*s\"sampleLower\":%s%u,%s",iVar13,&_LC6,puVar16,puVar9[2],puVar12
                              );
                  __printf_chk(2,"%*s\"sampleUpper\":%s%u%s",iVar13,&_LC6,puVar16,puVar9[3],puVar12)
                  ;
                }
                else {
                  __printf_chk(2,"%*s\"sampleLower\":%s%d,%s",iVar13,&_LC6,puVar16,puVar9[2],puVar12
                              );
                  __printf_chk(2,"%*s\"sampleUpper\":%s%d%s",iVar13,&_LC6,puVar16,puVar9[3],puVar12)
                  ;
                }
                iVar15 = iVar15 + 1;
                __printf_chk(2,&_LC240,iVar10,&_LC6);
              } while ((iVar15 < (int)uVar8) &&
                      (puVar9 = puVar9 + 4, iVar15 * 0x10 + 0x28U <= local_84));
            }
          }
          __printf_chk(2,&_LC10,puVar12);
          __printf_chk(2,"%*s]%s",iVar11,&_LC6,puVar12);
        }
        else {
          __printf_chk(2,&_LC10,puVar12);
        }
        __printf_chk(2,&_LC240,iVar7,&_LC6);
        uVar4 = 8;
        if (7 < uVar2) {
          uVar4 = uVar2;
        }
        if (local_84 < uVar4) goto LAB_00101da1;
        local_84 = local_84 - uVar4;
        local_70 = local_70 + 1;
        local_78 = local_78 + (uVar4 >> 2);
        if ((local_84 < 8) || (local_70 == 10)) goto LAB_00101da1;
      } while( true );
    }
  }
  __printf_chk(2,"%*s\"blocks\":%s[]%s",local_44,&_LC6,puVar16,puVar12);
  return;
}


