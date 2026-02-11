
void png_image_memory_read(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__src;
  ulong uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(long **)(param_1 + 0x108) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0x108), lVar1 != 0)) {
    __src = *(void **)(lVar1 + 0x18);
    uVar2 = *(ulong *)(lVar1 + 0x20);
    if ((__src != (void *)0x0) && (param_3 <= uVar2)) {
      memcpy(param_2,__src,param_3);
      *(ulong *)(lVar1 + 0x18) = (long)__src + param_3;
      *(ulong *)(lVar1 + 0x20) = uVar2 - param_3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"read beyond end of data");
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid memory read");
}



void png_read_info_part_0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  png_read_sig();
  while( true ) {
    uVar1 = png_read_chunk_header(param_1);
    iVar3 = *(int *)(param_1 + 0x218);
    uVar2 = *(uint *)(param_1 + 300);
    if (iVar3 == 0x49444154) break;
    if ((uVar2 & 4) != 0) {
      *(uint *)(param_1 + 300) = uVar2 | 0x2008;
    }
    if (iVar3 == 0x49484452) {
      png_handle_IHDR(param_1,param_2,uVar1);
    }
    else if (iVar3 == 0x49454e44) {
      png_handle_IEND(param_1,param_2,uVar1);
    }
    else {
      iVar4 = png_chunk_unknown_handling(param_1,iVar3);
      if (iVar4 == 0) {
        if (iVar3 == 0x504c5445) {
          png_handle_PLTE(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x624b4744) {
          png_handle_bKGD(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x6348524d) {
          png_handle_cHRM(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x63494350) {
          png_handle_cICP(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x65584966) {
          png_handle_eXIf(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x67414d41) {
          png_handle_gAMA(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x68495354) {
          png_handle_hIST(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x6f464673) {
          png_handle_oFFs(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x7043414c) {
          png_handle_pCAL(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x7343414c) {
          png_handle_sCAL(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x70485973) {
          png_handle_pHYs(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x73424954) {
          png_handle_sBIT(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x73524742) {
          png_handle_sRGB(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x69434350) {
          png_handle_iCCP(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x73504c54) {
          png_handle_sPLT(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x74455874) {
          png_handle_tEXt(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x74494d45) {
          png_handle_tIME(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x74524e53) {
          png_handle_tRNS(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x7a545874) {
          png_handle_zTXt(param_1,param_2,uVar1);
        }
        else if (iVar3 == 0x69545874) {
          png_handle_iTXt(param_1,param_2,uVar1);
        }
        else {
          png_handle_unknown(param_1,param_2,uVar1);
        }
      }
      else {
        png_handle_unknown(param_1,param_2,uVar1);
        if (iVar3 == 0x504c5445) {
          *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 2;
        }
      }
    }
  }
  if ((uVar2 & 1) == 0) {
    pcVar6 = "Missing IHDR before IDAT";
    png_chunk_error();
    iVar3 = png_chunk_unknown_handling();
    if (iVar3 == 0) {
      png_read_finish_IDAT(param_1);
    }
    if ((*(char *)(param_1 + 0x267) == '\x03') &&
       ((int)(uint)*(ushort *)(param_1 + 600) <= *(int *)(param_1 + 0x25c))) {
      png_benign_error(param_1,"Read palette index exceeding num_palette");
    }
    do {
      iVar4 = png_read_chunk_header(param_1);
      iVar3 = *(int *)(param_1 + 0x218);
      if (iVar3 == 0x49444154) {
LAB_00100545:
        if (pcVar6 == (char *)0x0) {
LAB_001005c8:
          png_crc_finish(param_1,iVar4);
          uVar2 = *(uint *)(param_1 + 300);
        }
        else {
          iVar5 = png_chunk_unknown_handling(param_1,iVar3);
          if (iVar5 == 0) {
            if (iVar3 == 0x49444154) {
              if ((iVar4 == 0) || ((*(byte *)(param_1 + 0x130) & 8) != 0)) {
                if ((*(byte *)(param_1 + 0x12d) & 0x20) != 0) {
                  png_benign_error(param_1,"..Too many IDATs found");
                }
              }
              else {
                png_benign_error(param_1,"..Too many IDATs found");
              }
              goto LAB_001005c8;
            }
            if (iVar3 == 0x504c5445) {
              png_handle_PLTE(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x624b4744) {
              png_handle_bKGD(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x6348524d) {
              png_handle_cHRM(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x63494350) {
              png_handle_cICP(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x65584966) {
              png_handle_eXIf(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x67414d41) {
              png_handle_gAMA(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x68495354) {
              png_handle_hIST(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x6f464673) {
              png_handle_oFFs(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x7043414c) {
              png_handle_pCAL(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x7343414c) {
              png_handle_sCAL(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x70485973) {
              png_handle_pHYs(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x73424954) {
              png_handle_sBIT(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x73524742) {
              png_handle_sRGB(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x69434350) {
              png_handle_iCCP(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x73504c54) {
              png_handle_sPLT(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x74455874) {
              png_handle_tEXt(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x74494d45) {
              png_handle_tIME(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x74524e53) {
              png_handle_tRNS(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else if (iVar3 == 0x7a545874) {
              png_handle_zTXt(param_1,pcVar6,iVar4);
              uVar2 = *(uint *)(param_1 + 300);
            }
            else {
              if (iVar3 != 0x69545874) goto LAB_00100735;
              png_handle_iTXt(param_1,pcVar6,iVar4,0);
              uVar2 = *(uint *)(param_1 + 300);
            }
          }
          else if (iVar3 == 0x49444154) {
            if (((iVar4 != 0) && ((*(byte *)(param_1 + 0x130) & 8) == 0)) ||
               ((*(byte *)(param_1 + 0x12d) & 0x20) != 0)) {
              png_benign_error(param_1,".Too many IDATs found");
            }
LAB_00100735:
            png_handle_unknown(param_1,pcVar6,iVar4);
            uVar2 = *(uint *)(param_1 + 300);
          }
          else {
            png_handle_unknown(param_1,pcVar6,iVar4);
            uVar2 = *(uint *)(param_1 + 300);
            if (iVar3 == 0x504c5445) {
              *(uint *)(param_1 + 300) = uVar2 | 2;
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x2000;
        if (iVar3 == 0x49454e44) {
          png_handle_IEND(param_1,pcVar6,iVar4);
          uVar2 = *(uint *)(param_1 + 300);
        }
        else {
          if (iVar3 != 0x49484452) goto LAB_00100545;
          png_handle_IHDR(param_1,pcVar6,iVar4);
          uVar2 = *(uint *)(param_1 + 300);
        }
      }
      if ((uVar2 & 0x10) != 0) {
        return;
      }
    } while( true );
  }
  if ((*(char *)(param_1 + 0x267) == '\x03') && ((uVar2 & 2) == 0)) {
    png_chunk_error(param_1,"Missing PLTE before IDAT");
  }
  else if ((uVar2 & 8) == 0) goto LAB_0010011d;
  png_chunk_benign_error(param_1,"Too many IDATs found");
  uVar2 = *(uint *)(param_1 + 300);
LAB_0010011d:
  *(uint *)(param_1 + 300) = uVar2 | 4;
  iVar3 = png_chunk_unknown_handling(param_1,0x49444154);
  if (iVar3 != 0) {
    png_handle_unknown(param_1,param_2,uVar1,iVar3);
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  return;
}



void png_read_end_part_0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = png_chunk_unknown_handling(param_1,0x49444154);
  if (iVar2 == 0) {
    png_read_finish_IDAT(param_1);
  }
  if ((*(char *)(param_1 + 0x267) == '\x03') &&
     ((int)(uint)*(ushort *)(param_1 + 600) <= *(int *)(param_1 + 0x25c))) {
    png_benign_error(param_1,"Read palette index exceeding num_palette");
  }
  do {
    iVar3 = png_read_chunk_header(param_1);
    iVar2 = *(int *)(param_1 + 0x218);
    if (iVar2 == 0x49444154) {
LAB_00100545:
      if (param_2 == 0) {
LAB_001005c8:
        png_crc_finish(param_1,iVar3);
        uVar1 = *(uint *)(param_1 + 300);
      }
      else {
        iVar4 = png_chunk_unknown_handling(param_1,iVar2);
        if (iVar4 == 0) {
          if (iVar2 == 0x49444154) {
            if ((iVar3 == 0) || ((*(byte *)(param_1 + 0x130) & 8) != 0)) {
              if ((*(byte *)(param_1 + 0x12d) & 0x20) != 0) {
                png_benign_error(param_1,"..Too many IDATs found");
              }
            }
            else {
              png_benign_error(param_1,"..Too many IDATs found");
            }
            goto LAB_001005c8;
          }
          if (iVar2 == 0x504c5445) {
            png_handle_PLTE(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x624b4744) {
            png_handle_bKGD(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x6348524d) {
            png_handle_cHRM(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x63494350) {
            png_handle_cICP(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x65584966) {
            png_handle_eXIf(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x67414d41) {
            png_handle_gAMA(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x68495354) {
            png_handle_hIST(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x6f464673) {
            png_handle_oFFs(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x7043414c) {
            png_handle_pCAL(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x7343414c) {
            png_handle_sCAL(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x70485973) {
            png_handle_pHYs(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x73424954) {
            png_handle_sBIT(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x73524742) {
            png_handle_sRGB(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x69434350) {
            png_handle_iCCP(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x73504c54) {
            png_handle_sPLT(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x74455874) {
            png_handle_tEXt(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x74494d45) {
            png_handle_tIME(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x74524e53) {
            png_handle_tRNS(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else if (iVar2 == 0x7a545874) {
            png_handle_zTXt(param_1,param_2,iVar3);
            uVar1 = *(uint *)(param_1 + 300);
          }
          else {
            if (iVar2 != 0x69545874) goto LAB_00100735;
            png_handle_iTXt(param_1,param_2,iVar3,0);
            uVar1 = *(uint *)(param_1 + 300);
          }
        }
        else if (iVar2 == 0x49444154) {
          if (((iVar3 != 0) && ((*(byte *)(param_1 + 0x130) & 8) == 0)) ||
             ((*(byte *)(param_1 + 0x12d) & 0x20) != 0)) {
            png_benign_error(param_1,".Too many IDATs found");
          }
LAB_00100735:
          png_handle_unknown(param_1,param_2,iVar3);
          uVar1 = *(uint *)(param_1 + 300);
        }
        else {
          png_handle_unknown(param_1,param_2,iVar3);
          uVar1 = *(uint *)(param_1 + 300);
          if (iVar2 == 0x504c5445) {
            *(uint *)(param_1 + 300) = uVar1 | 2;
          }
        }
      }
    }
    else {
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x2000;
      if (iVar2 == 0x49454e44) {
        png_handle_IEND(param_1,param_2,iVar3);
        uVar1 = *(uint *)(param_1 + 300);
      }
      else {
        if (iVar2 != 0x49484452) goto LAB_00100545;
        png_handle_IHDR(param_1,param_2,iVar3);
        uVar1 = *(uint *)(param_1 + 300);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      return;
    }
  } while( true );
}



uint png_image_format_isra_0(short param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 2;
  if ((param_2 & 4) == 0) {
    if (param_1 != 0) {
      uVar1 = uVar1 | 1;
    }
  }
  else {
    uVar1 = uVar1 | 1;
  }
  if (param_3 == '\x10') {
    uVar1 = uVar1 | 4;
  }
  return (param_2 & 1) * 8 | uVar1;
}



void set_file_encoding(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(**(long **)*param_1 + 0x4a0);
  iVar2 = png_gamma_significant(iVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = 4;
    return;
  }
  if (iVar1 < 100000) {
    if (iVar1 != 0) {
      iVar2 = png_gamma_significant((iVar1 * 0xb + 2) / 5);
      if (iVar2 != 0) goto LAB_00100a7c;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
LAB_00100a7c:
  *(undefined4 *)(param_1 + 8) = 3;
  uVar3 = png_reciprocal(iVar1);
  *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  return;
}



ulong decode_gamma(undefined8 *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  if (param_3 != 3) {
    if (param_3 != 1) {
      return uVar3;
    }
LAB_00100ac0:
    return (ulong)*(ushort *)(&png_sRGB_table + uVar3 * 2);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    set_file_encoding();
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 3) {
    uVar1 = png_gamma_16bit_correct(param_2 * 0x101,*(undefined4 *)((long)param_1 + 0x44));
    return (ulong)uVar1;
  }
  if (iVar2 < 4) {
    if (iVar2 == 1) goto LAB_00100ac0;
    if (iVar2 == 2) {
      return uVar3;
    }
  }
  else if (iVar2 == 4) {
    return (ulong)(param_2 * 0x101);
  }
                    /* WARNING: Subroutine does not return */
  png_error(**(undefined8 **)*param_1,"unexpected encoding (internal error)");
}



uint png_colormap_compose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = decode_gamma();
  iVar2 = decode_gamma(param_1,param_5,param_6);
  uVar3 = (0xff - param_4) * iVar2 + iVar1 * param_4;
  if (param_6 != 2) {
    return ((uVar3 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar3 >> 0xf] >> 0xc) +
           (uint)*(ushort *)(&png_sRGB_base + (ulong)(uVar3 >> 0xf) * 2) >> 8 & 0xff;
  }
  return uVar3 * 0x101 + 0x8000 + (uVar3 * 0x101 >> 0x10) >> 0x10;
}



void png_create_colormap_entry
               (long *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               int param_7)

{
  long lVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  
  uVar17 = (ulong)param_5;
  uVar16 = (ulong)param_4;
  uVar14 = (ulong)param_3;
  puVar4 = (undefined8 *)*param_1;
  uVar9 = *(uint *)((long)puVar4 + 0x14);
  bVar18 = (uVar9 & 4) != 0;
  bVar19 = (uVar9 & 2) != 0;
  bVar20 = param_3 == param_4;
  bVar21 = param_4 == param_5;
  if (0xff < param_2) {
                    /* WARNING: Subroutine does not return */
    png_error(*(undefined8 *)*puVar4,"color-map index out of range");
  }
  if (param_7 == 3) {
    iVar12 = (int)param_1[8];
    if (iVar12 == 0) {
      set_file_encoding(param_1);
      iVar12 = (int)param_1[8];
    }
    if (iVar12 == 3) {
      uVar3 = *(undefined4 *)((long)param_1 + 0x44);
      uVar6 = png_gamma_16bit_correct(param_3 * 0x101,uVar3);
      uVar14 = (ulong)uVar6;
      uVar7 = png_gamma_16bit_correct(param_4 * 0x101,uVar3);
      uVar16 = (ulong)uVar7;
      uVar8 = png_gamma_16bit_correct(param_5 * 0x101,uVar3);
      uVar17 = (ulong)uVar8;
      if ((!bVar18) && (bVar19 || bVar20 && bVar21)) {
        uVar9 = (uint)uVar6 * 0x100 - (uint)uVar6;
        uVar14 = (ulong)(uVar9 >> 0xf);
        uVar14 = (ulong)(((uVar9 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar14] >> 0xc) +
                         (uint)*(ushort *)(&png_sRGB_base + uVar14 * 2) >> 8 & 0xff);
        uVar9 = (uint)uVar7 * 0x100 - (uint)uVar7;
        uVar16 = (ulong)(uVar9 >> 0xf);
        uVar16 = (ulong)(((uVar9 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar16] >> 0xc) +
                         (uint)*(ushort *)(&png_sRGB_base + uVar16 * 2) >> 8 & 0xff);
        uVar9 = (uint)uVar8 * 0x100 - (uint)uVar8;
        uVar17 = (ulong)(uVar9 >> 0xf);
        uVar17 = (ulong)(((uVar9 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) +
                         (uint)*(ushort *)(&png_sRGB_base + uVar17 * 2) >> 8 & 0xff);
        uVar9 = *(uint *)((long)puVar4 + 0x14);
        goto LAB_00100cf0;
      }
LAB_00100dcf:
      param_6 = param_6 * 0x101;
    }
    else {
      if (iVar12 == 4) {
        uVar14 = (ulong)(param_3 * 0x101);
        uVar16 = (ulong)(param_4 * 0x101);
        uVar17 = (ulong)(param_5 * 0x101);
        goto LAB_00100dcf;
      }
      if (iVar12 == 1) {
        uVar9 = *(uint *)((long)puVar4 + 0x14);
        goto LAB_00100d60;
      }
      if (iVar12 != 2) {
                    /* WARNING: Subroutine does not return */
        png_error(*(undefined8 *)*puVar4,"bad encoding (internal error)");
      }
    }
    param_3 = (uint)uVar14;
    param_5 = (uint)uVar17;
    param_4 = (uint)uVar16;
    uVar9 = *(uint *)((long)puVar4 + 0x14);
  }
  else if (param_7 == 1) {
LAB_00100d60:
    if ((!bVar18) && (bVar19 || bVar20 && bVar21)) goto LAB_00100cf0;
    lVar1 = uVar14 * 2;
    uVar14 = (ulong)*(ushort *)(&png_sRGB_table + lVar1);
    param_3 = (uint)*(ushort *)(&png_sRGB_table + lVar1);
    lVar1 = uVar16 * 2;
    uVar16 = (ulong)*(ushort *)(&png_sRGB_table + lVar1);
    param_4 = (uint)*(ushort *)(&png_sRGB_table + lVar1);
    lVar1 = uVar17 * 2;
    uVar17 = (ulong)*(ushort *)(&png_sRGB_table + lVar1);
    param_5 = (uint)*(ushort *)(&png_sRGB_table + lVar1);
    param_6 = param_6 * 0x101;
  }
  if (bVar19 || bVar20 && bVar21) {
    if (bVar18) goto LAB_00100dee;
    uVar13 = (int)uVar14 * 0xff;
    uVar14 = (ulong)(uVar13 >> 0xf);
    uVar14 = (ulong)(((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar14] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar14 * 2) >> 8 & 0xff);
    uVar13 = (int)uVar16 * 0xff;
    uVar16 = (ulong)(uVar13 >> 0xf);
    uVar16 = (ulong)(((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar16] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar16 * 2) >> 8 & 0xff);
    uVar13 = (int)uVar17 * 0xff;
    uVar17 = (ulong)(uVar13 >> 0xf);
    uVar17 = (ulong)(((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar17 * 2) >> 8 & 0xff);
    param_6 = param_6 * 0xff + 0x807f >> 0x10;
  }
  else {
    iVar12 = param_3 * 0x1b38 + param_4 * 0x5b8a + param_5 * 0x93e;
    if (bVar18) {
      uVar13 = iVar12 + 0x4000U >> 0xf;
      uVar14 = (ulong)uVar13;
      uVar17 = (ulong)uVar13;
      uVar16 = (ulong)uVar13;
LAB_00100dee:
      uVar13 = uVar9 & 0x21;
      bVar18 = uVar13 == 0x21;
      iVar12 = (uVar9 & 3) + 1;
      puVar2 = (undefined2 *)(param_1[3] + (ulong)(param_2 * iVar12) * 2);
      if (iVar12 != 3) {
        if (iVar12 != 4) {
          if (iVar12 == 2) {
            puVar2[uVar13 != 0x21] = (short)param_6;
          }
          uVar5 = (undefined2)uVar16;
          if ((param_6 < 0xffff) && (uVar5 = 0, param_6 != 0)) {
            uVar5 = (undefined2)((ulong)(param_6 * (int)uVar16 + 0x7fff) / 0xffff);
          }
          puVar2[bVar18] = uVar5;
          return;
        }
        puVar11 = puVar2 + 3;
        if (uVar13 == 0x21) {
          puVar11 = puVar2;
        }
        *puVar11 = (short)param_6;
      }
      if (param_6 < 0xffff) {
        if (param_6 == 0) {
          uVar14 = 0;
          uVar16 = 0;
          uVar17 = 0;
        }
        else {
          uVar17 = (ulong)((int)uVar17 * param_6 + 0x7fff) / 0xffff;
          uVar16 = (ulong)((int)uVar16 * param_6 + 0x7fff) / 0xffff;
          uVar14 = (ulong)(param_6 * (int)uVar14 + 0x7fff) / 0xffff;
        }
      }
      puVar2[(int)((~(uVar9 >> 3) & 2) + (uint)bVar18)] = (short)uVar17;
      puVar2[(ulong)bVar18 + 1] = (short)uVar16;
      puVar2[(int)((uVar9 >> 3 & 2) + (uint)bVar18)] = (short)uVar14;
      return;
    }
    uVar13 = iVar12 + 0x80;
    uVar13 = ((uVar13 & 0xffffff00) - (uVar13 >> 8)) + 0x40;
    uVar14 = (ulong)(uVar13 >> 0x16);
    uVar13 = ((uVar13 >> 7 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar14] >> 0xc) +
             (uint)*(ushort *)(&png_sRGB_base + uVar14 * 2) >> 8 & 0xff;
    uVar14 = (ulong)uVar13;
    uVar17 = (ulong)uVar13;
    uVar16 = (ulong)uVar13;
    param_6 = param_6 * 0xff + 0x807f >> 0x10;
  }
LAB_00100cf0:
  bVar18 = (uVar9 & 0x21) == 0x21;
  iVar12 = (uVar9 & 3) + 1;
  puVar15 = (undefined1 *)((ulong)(param_2 * iVar12) + param_1[3]);
  if (iVar12 != 3) {
    if (iVar12 != 4) {
      if (iVar12 == 2) {
        puVar15[(uVar9 & 0x21) != 0x21] = (char)param_6;
      }
      puVar15[bVar18] = (char)uVar16;
      return;
    }
    puVar10 = puVar15 + 3;
    if (bVar18) {
      puVar10 = puVar15;
    }
    *puVar10 = (char)param_6;
  }
  puVar15[(int)((~(uVar9 >> 3) & 2) + (uint)bVar18)] = (char)uVar17;
  puVar15[(ulong)bVar18 + 1] = (char)uVar16;
  puVar15[(int)((uVar9 >> 3 & 2) + (uint)bVar18)] = (char)uVar14;
  return;
}



undefined1  [16] make_ga_colormap(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_30;
  
  iVar6 = 0;
  do {
    iVar2 = iVar6 + 1;
    uVar1 = (iVar6 * 0x100 + 0x73U) / 0xe7;
    png_create_colormap_entry(param_1,iVar6,uVar1,uVar1,uVar1,0xff,1);
    iVar6 = iVar2;
  } while (iVar2 != 0xe7);
  iVar6 = 0x33;
  iVar2 = 0xe8;
  png_create_colormap_entry(param_1,0xe7,0xff,0xff,0xff,0,1);
  do {
    iVar3 = 0;
    iVar5 = iVar2;
    do {
      iVar4 = iVar3 + 0x33;
      png_create_colormap_entry(param_1,iVar5,iVar3,iVar3,iVar3,iVar6,1);
      iVar3 = iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar4 != 0x132);
    iVar2 = iVar2 + 6;
    iVar6 = iVar6 + 0x33;
  } while (iVar2 != 0x100);
  auVar7._8_8_ = uStack_30;
  auVar7._0_8_ = 0x100;
  return auVar7;
}



undefined1  [16] make_rgb_colormap(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_50;
  undefined4 local_3c;
  
  iVar5 = 0;
  local_3c = 0;
  do {
    iVar4 = 0;
    iVar6 = local_3c;
    do {
      iVar1 = iVar6;
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 0x33;
        png_create_colormap_entry(param_1,iVar1,iVar5,iVar4,iVar2,0xff,1);
        iVar1 = iVar1 + 1;
        iVar2 = iVar3;
      } while (iVar3 != 0x132);
      iVar4 = iVar4 + 0x33;
      iVar6 = iVar6 + 6;
    } while (iVar4 != 0x132);
    local_3c = local_3c + 0x24;
    iVar5 = iVar5 + 0x33;
  } while (local_3c != 0xd8);
  auVar7._8_8_ = uStack_50;
  auVar7._0_8_ = 0xd8;
  return auVar7;
}



undefined8 png_image_read_header(long *param_1)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte extraout_DL;
  char cVar5;
  
  lVar2 = *(long *)*param_1;
  lVar3 = ((long *)*param_1)[1];
  png_set_benign_errors(lVar2,1);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    png_read_info_part_0(lVar2,lVar3);
  }
  uVar1 = *(undefined2 *)(lVar2 + 0x260);
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)(lVar2 + 0x1f8);
  cVar5 = *(char *)(lVar2 + 0x267);
  uVar4 = png_image_format_isra_0(uVar1,cVar5,*(undefined1 *)(lVar2 + 0x268));
  *(uint *)((long)param_1 + 0x14) = uVar4;
  if (((uVar4 & 2) != 0) && ((*(ushort *)(lVar2 + 0x4ea) & 0x8042) == 2)) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
  }
  if (cVar5 == '\0') {
    uVar4 = 1 << (extraout_DL & 0x1f);
  }
  else {
    uVar4 = 0x100;
    if (cVar5 != '\x03') goto LAB_001013e9;
    uVar4 = (uint)*(ushort *)(lVar2 + 600);
  }
  if (0x100 < uVar4) {
    uVar4 = 0x100;
  }
LAB_001013e9:
  *(uint *)((long)param_1 + 0x1c) = uVar4;
  return 1;
}



undefined8 png_image_read_colormap(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  byte bVar26;
  undefined8 uVar27;
  int iVar28;
  uint uVar29;
  byte bVar30;
  uint uVar31;
  ushort *puVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  undefined1 *puVar36;
  long in_FS_OFFSET;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined *puStack_a0;
  int local_88;
  uint local_84;
  undefined2 local_78;
  undefined1 local_50 [2];
  ulong local_4e;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_02;
  
  puVar4 = (undefined8 *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)((long)puVar4 + 0x14);
  lVar5 = *(long *)*puVar4;
  bVar30 = *(byte *)(lVar5 + 0x267);
  if ((uVar8 & 4) == 0) {
    if ((((bVar30 & 4) == 0) && (*(short *)(lVar5 + 0x260) == 0)) || ((uVar8 & 1) != 0)) {
      local_88 = 1;
      uVar16 = 0xff;
      uVar23 = 0xff;
      local_84 = 0xff;
    }
    else {
      pbVar6 = (byte *)param_1[4];
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"background color must be supplied to remove alpha/transparency");
      }
      local_84 = (uint)pbVar6[1];
      if ((uVar8 & 2) == 0) {
        local_88 = 1;
        uVar16 = local_84;
        uVar23 = local_84;
      }
      else {
        local_88 = 1;
        uVar16 = (uint)*pbVar6;
        uVar23 = (uint)pbVar6[2];
      }
    }
  }
  else if ((((bVar30 & 4) == 0) && (*(short *)(lVar5 + 0x260) == 0)) || ((uVar8 & 1) != 0)) {
    local_88 = 2;
    local_84 = 0xffff;
    uVar16 = 0xffff;
    uVar23 = 0xffff;
  }
  else {
    local_84 = 0;
    local_88 = 2;
    uVar16 = uVar8 & 1;
    uVar23 = 0;
  }
  if ((*(ushort *)(lVar5 + 0x4ea) & 1) == 0) {
    iVar14 = 0xb18f;
    if (*(char *)(lVar5 + 0x268) == '\x10') {
      iVar14 = (-(uint)((*(uint *)(puVar4 + 3) & 4) == 0) & 0xd511) + 0xb18f;
    }
    *(int *)(lVar5 + 0x4a0) = iVar14;
    *(ushort *)(lVar5 + 0x4ea) = *(ushort *)(lVar5 + 0x4ea) | 1;
  }
  switch(bVar30) {
  case 0:
    if (8 < *(byte *)(lVar5 + 0x268)) {
      if (*(uint *)((long)puVar4 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"gray[16] color-map: too few entries");
      }
      iVar14 = 0;
      do {
        iVar18 = iVar14 + 1;
        auVar37._0_8_ = png_create_colormap_entry(param_1,iVar14,iVar14,iVar14,iVar14,0xff,1);
        auVar37._8_8_ = extraout_XMM0_Qb;
        iVar14 = iVar18;
      } while (iVar18 != 0x100);
      if (*(short *)(lVar5 + 0x260) == 0) {
LAB_00101d10:
        uVar23 = 0x100;
        uVar10 = 0;
        uVar8 = 0x100;
      }
      else {
        if ((uVar8 & 1) == 0) {
          if ((uVar16 == local_84) && (local_84 == uVar23)) {
            if (local_88 == 2) {
              uVar20 = (ulong)(local_84 * 0xff >> 0xf);
              uVar8 = ((local_84 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar20] >> 0xc) +
                      (uint)*(ushort *)(&png_sRGB_base + uVar20 * 2) >> 8 & 0xff;
              auVar37._0_8_ =
                   png_create_colormap_entry(param_1,uVar8,local_84,local_84,local_84,0xffff,2);
              auVar37._8_8_ = extraout_XMM0_Qb_05;
              local_84 = uVar8;
            }
            auVar38 = pshuflw(auVar37,ZEXT416(local_84),0);
            local_4e = auVar38._0_8_;
            goto LAB_001020ab;
          }
          uVar27 = 0xff;
          if (local_88 == 2) {
            uVar27 = 0xffff;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar10 = 2;
        png_create_colormap_entry(param_1,0xfe,uVar16,local_84,uVar23,uVar27,local_88);
        uVar9 = 0xfe;
        uVar8 = 0x100;
LAB_00102015:
        uVar23 = uVar9;
        if (*(short *)(lVar5 + 0x260) != 0) {
          iVar14 = 1;
          uVar16 = uVar8;
LAB_0010202e:
          uVar8 = uVar16;
          uVar23 = uVar9;
          if ((*(byte *)(lVar5 + 0x267) & 4) == 0) {
            png_set_tRNS_to_alpha(lVar5);
          }
LAB_00102040:
          if (iVar14 != 1) goto LAB_001015a9;
        }
      }
      goto LAB_00101598;
    }
    uVar10 = 1 << (*(byte *)(lVar5 + 0x268) & 0x1f);
    if (*(uint *)((long)puVar4 + 0x1c) < uVar10) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar5,"gray[8] color-map: too few entries");
    }
    if (*(short *)(lVar5 + 0x260) == 0) {
      uVar11 = 0;
      uVar33 = 0x100;
    }
    else {
      uVar7 = *(ushort *)(lVar5 + 0x2f8);
      uVar11 = 0;
      uVar33 = (uint)uVar7;
      if (((uVar8 & 1) == 0) && (uVar11 = 0xffff, uVar33 = (uint)uVar7, local_88 != 2)) {
        uVar11 = 0xff;
      }
    }
    uVar8 = 0;
    iVar14 = 0;
    do {
      while (iVar18 = (int)(0xff / (ulong)(uVar10 - 1)), uVar33 != uVar8) {
        uVar31 = uVar8 + 1;
        png_create_colormap_entry(param_1,uVar8,iVar14,iVar14,iVar14,0xff,3);
        uVar8 = uVar31;
        iVar14 = iVar14 + iVar18;
        if (uVar10 == uVar31) goto LAB_0010172f;
      }
      uVar8 = uVar8 + 1;
      png_create_colormap_entry(param_1,uVar33,uVar16,local_84,uVar23,uVar11,local_88);
      iVar14 = iVar14 + iVar18;
    } while (uVar10 != uVar8);
LAB_0010172f:
    bVar30 = *(byte *)(lVar5 + 0x268);
    if (7 < bVar30) goto LAB_0010197e;
LAB_00101746:
    png_set_packing(lVar5);
    if (8 < *(byte *)(lVar5 + 0x268)) goto LAB_0010176b;
LAB_00101986:
    if (*(uint *)((long)puVar4 + 0x1c) < uVar10) goto LAB_0010271e;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(lVar5,"invalid PNG color type");
  case 2:
  case 6:
    if ((uVar8 & 2) != 0) {
      uVar33 = *(uint *)((long)puVar4 + 0x1c);
      if ((bVar30 == 6) || (*(short *)(lVar5 + 0x260) != 0)) {
        if ((uVar8 & 1) == 0) {
          uVar8 = ((uVar8 >> 2 & 1) + 1) * ((uVar8 & 3) + 1);
          if (uVar33 < 0xf4) {
                    /* WARNING: Subroutine does not return */
            png_error(lVar5,"rgb-alpha color-map: too few entries");
          }
          uVar9 = make_rgb_colormap(param_1);
          png_create_colormap_entry(param_1,uVar9,uVar16,local_84,uVar23,0,local_88);
          uVar33 = local_84;
          uVar10 = uVar16;
          uVar31 = local_84;
          if (local_88 == 2) {
            uVar20 = (ulong)(uVar16 * 0xff >> 0xf);
            uVar24 = (ulong)(local_84 * 0xff >> 0xf);
            uVar25 = (ulong)(uVar23 * 0xff >> 0xf);
            uVar33 = ((local_84 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar24] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar24 * 2) >> 8 & 0xff;
            uVar10 = ((uVar16 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar20] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar20 * 2) >> 8 & 0xff;
            uVar31 = ((uint)(byte)(&png_sRGB_delta)[uVar25] * (uVar23 * 0xff & 0x7fff) >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar25 * 2) >> 8 & 0xff;
          }
          iVar14 = memcmp((void *)(param_1[3] + (ulong)(uVar8 * uVar9)),
                          (void *)((ulong)(((uVar31 * 5 + 0x82 >> 8) +
                                            ((uVar33 * 5 + 0x82 >> 8) + (uVar10 * 5 + 0x82 >> 8) * 6
                                            ) * 6 & 0xff) * uVar8) + param_1[3]),(ulong)uVar8);
          if (iVar14 == 0) {
            local_78 = (undefined2)uVar23;
            local_50[0] = 0;
            uVar23 = 0x100;
            uVar10 = 3;
            local_4e = (ulong)CONCAT42(CONCAT22((undefined2)local_84,local_78),(undefined2)local_84)
                       << 0x10 | (ulong)uVar16;
            png_set_background_fixed(lVar5,local_50,1,0,0);
            uVar8 = uVar9;
            goto LAB_00101598;
          }
          uVar33 = uVar9 + 0xd;
          uVar10 = 0;
          do {
            uVar29 = 0;
            uVar31 = uVar33 - 9;
            do {
              uVar8 = uVar31;
              uVar34 = 0;
              uVar31 = uVar8 - 3;
              do {
                uVar11 = png_colormap_compose(param_1,uVar34,1,0x80,uVar23,local_88);
                uVar12 = png_colormap_compose(param_1,uVar29,1,0x80,local_84,local_88);
                uVar13 = png_colormap_compose(param_1,uVar10,1,0x80,uVar16,local_88);
                uVar19 = uVar31 + 1;
                png_create_colormap_entry(param_1,uVar31,uVar13,uVar12,uVar11,0,local_88);
                uVar34 = uVar34 * 2 | 0x7f;
                uVar31 = uVar19;
              } while (uVar19 != uVar8);
              uVar29 = uVar29 * 2 | 0x7f;
              uVar31 = uVar8 + 3;
            } while (uVar8 + 3 != uVar33);
            uVar33 = uVar8 + 0xc;
            uVar10 = uVar10 * 2 | 0x7f;
          } while (uVar33 != uVar9 + 0x28);
        }
        else {
          if (uVar33 < 0xf4) {
                    /* WARNING: Subroutine does not return */
            png_error(lVar5,"rgb+alpha color-map: too few entries");
          }
          uVar9 = make_rgb_colormap(param_1);
          png_create_colormap_entry(param_1,uVar9,0xff,0xff,0xff,0,1);
          uVar23 = uVar9 + 0xd;
          uVar16 = 0;
          do {
            uVar10 = 0;
            uVar33 = uVar23 - 9;
            do {
              uVar8 = uVar33;
              uVar33 = uVar8 - 3;
              uVar31 = 0;
              do {
                uVar29 = uVar33 + 1;
                png_create_colormap_entry(param_1,uVar33,uVar16,uVar10,uVar31,0x80,1);
                uVar33 = uVar29;
                uVar31 = uVar31 * 2 | 0x7f;
              } while (uVar29 != uVar8);
              uVar10 = uVar10 * 2 | 0x7f;
              uVar33 = uVar8 + 3;
            } while (uVar8 + 3 != uVar23);
            uVar23 = uVar8 + 0xc;
            uVar16 = uVar16 * 2 | 0x7f;
          } while (uVar23 != uVar9 + 0x28);
        }
        uVar10 = 4;
        goto LAB_00102015;
      }
      if (uVar33 < 0xd8) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"rgb color-map: too few entries");
      }
      uVar10 = 3;
      uVar8 = make_rgb_colormap(param_1);
      uVar23 = 0x100;
      goto LAB_00101598;
    }
    puStack_a0 = (undefined *)0x101d56;
    png_set_rgb_to_gray_fixed(lVar5,1,0xffffffff,0xffffffff);
    uVar10 = 0;
    if (*(char *)(lVar5 + 0x267) != '\x06') {
      uVar23 = *(uint *)((long)puVar4 + 0x1c);
      if (*(short *)(lVar5 + 0x260) != 0) {
        if ((uVar8 & 1) != 0) goto LAB_001024fc;
        goto joined_r0x0010253b;
      }
      if (uVar23 < 0x100) goto LAB_00102541;
      goto LAB_00101dd1;
    }
    if ((uVar8 & 1) != 0) {
LAB_001024fc:
      if (*(uint *)((long)puVar4 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"rgb[ga] color-map: too few entries");
      }
      uVar9 = 0xe7;
      uVar10 = 1;
      uVar8 = make_ga_colormap(param_1);
      goto LAB_00102015;
    }
    uVar23 = *(uint *)((long)puVar4 + 0x1c);
joined_r0x0010253b:
    if (uVar23 < 0x100) {
LAB_00102541:
                    /* WARNING: Subroutine does not return */
      png_error(lVar5,"rgb[gray] color-map: too few entries");
    }
    iVar14 = *(int *)(lVar5 + 0x4a0);
    if (iVar14 < 100000) {
      if (iVar14 != 0) {
        puStack_a0 = (undefined *)0x101dc9;
        iVar14 = png_gamma_significant((iVar14 * 0xb + 2) / 5);
        if (iVar14 != 0) goto LAB_001023f4;
      }
LAB_00101dd1:
      iVar14 = 0;
      do {
        iVar18 = iVar14 + 1;
        auVar39._0_8_ = png_create_colormap_entry(param_1,iVar14,iVar14,iVar14,iVar14,0xff,1);
        auVar39._8_8_ = extraout_XMM0_Qb_00;
        iVar14 = iVar18;
      } while (iVar18 != 0x100);
      if (*(char *)(lVar5 + 0x267) != '\x06') {
        uVar23 = 0x100;
        uVar8 = 0x100;
        if (*(short *)(lVar5 + 0x260) == 0) goto LAB_00101598;
      }
      iVar14 = 1;
      if (local_88 == 2) {
        uVar20 = (ulong)(local_84 * 0xff >> 0xf);
        uVar8 = ((local_84 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar20] >> 0xc) +
                (uint)*(ushort *)(&png_sRGB_base + uVar20 * 2) >> 8 & 0xff;
        auVar39._0_8_ = png_create_colormap_entry(param_1,uVar8,local_84,local_84,local_84,0,2);
        auVar39._8_8_ = extraout_XMM0_Qb_04;
        local_84 = uVar8;
      }
LAB_00101e3b:
      local_50[0] = 0;
      uVar9 = 0x100;
      auVar38 = pshuflw(auVar39,ZEXT416(local_84),0);
      uVar8 = 0x100;
      local_4e = auVar38._0_8_;
      png_set_background_fixed(lVar5,local_50,1,0,0);
      uVar23 = uVar9;
      uVar16 = 0x100;
      if (*(short *)(lVar5 + 0x260) != 0) goto LAB_0010202e;
      goto LAB_00102040;
    }
LAB_001023f4:
    iVar14 = 0;
    do {
      iVar18 = iVar14 + 1;
      png_create_colormap_entry(param_1,iVar14,iVar14,iVar14,iVar14,0xff,3);
      iVar14 = iVar18;
    } while (iVar18 != 0x100);
    if (*(char *)(lVar5 + 0x267) == '\x06') {
LAB_00102451:
      uVar20 = (ulong)local_84;
      if (local_88 == 1) {
        puStack_a0 = &png_sRGB_table;
        uVar20 = (ulong)*(ushort *)(&png_sRGB_table + uVar20 * 2);
      }
      uVar7 = png_gamma_16bit_correct(uVar20,*(undefined4 *)(lVar5 + 0x4a0),puStack_a0);
      uVar8 = (uint)uVar7 * 0xff + 0x807f >> 0x10;
      auVar39._0_8_ = png_create_colormap_entry(param_1,uVar8,local_84,local_84,local_84,0,local_88)
      ;
      auVar39._8_8_ = extraout_XMM0_Qb_02;
      iVar14 = 3;
      local_84 = uVar8;
      goto LAB_00101e3b;
    }
    uVar23 = 0x100;
    uVar8 = 0x100;
    if (*(short *)(lVar5 + 0x260) != 0) goto LAB_00102451;
    goto LAB_001015a9;
  case 3:
    uVar33 = (uint)*(ushort *)(lVar5 + 0x260);
    puVar36 = *(undefined1 **)(lVar5 + 0x250);
    if (*(ushort *)(lVar5 + 0x260) == 0) {
      bVar30 = 0;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(lVar5 + 0x2e8);
      if (lVar17 == 0) {
        bVar30 = 0;
        uVar33 = 0;
      }
      else {
        bVar30 = ~(byte)uVar8 & 1;
      }
    }
    uVar7 = *(ushort *)(lVar5 + 600);
    uVar10 = (uint)uVar7;
    if (0x100 < uVar7) {
      uVar10 = 0x100;
    }
    if (*(uint *)((long)puVar4 + 0x1c) < uVar10) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar5,"palette color-map: too few entries");
    }
    uVar20 = 0;
    if (uVar7 != 0) {
      do {
        while( true ) {
          uVar24 = uVar20 & 0xffffffff;
          if (((uint)uVar20 < uVar33) && (bVar30 != 0)) break;
          bVar26 = 0xff;
          if ((uint)uVar20 < uVar33) {
            bVar26 = *(byte *)(lVar17 + uVar20);
          }
LAB_00101938:
          puVar1 = puVar36 + 2;
          uVar3 = *puVar36;
          puVar2 = puVar36 + 1;
          uVar20 = uVar20 + 1;
          puVar36 = puVar36 + 3;
          png_create_colormap_entry(param_1,uVar24,uVar3,*puVar2,*puVar1,bVar26,3);
          if (uVar10 <= (uint)uVar20) goto LAB_0010196a;
        }
        bVar26 = *(byte *)(lVar17 + uVar20);
        if (bVar26 == 0xff) goto LAB_00101938;
        if (bVar26 == 0) {
          png_create_colormap_entry(param_1,uVar20 & 0xffffffff,uVar16,local_84,uVar23,0,local_88);
        }
        else {
          uVar8 = (uint)bVar26 * 0x100 + (uint)bVar26;
          if (local_88 != 2) {
            uVar8 = (uint)bVar26;
          }
          uVar11 = png_colormap_compose(param_1,puVar36[2],3,bVar26,uVar23,local_88);
          uVar12 = png_colormap_compose
                             (param_1,puVar36[1],3,*(undefined1 *)(lVar17 + uVar20),local_84,
                              local_88);
          uVar13 = png_colormap_compose
                             (param_1,*puVar36,3,*(undefined1 *)(lVar17 + uVar20),uVar16,local_88);
          png_create_colormap_entry(param_1,uVar20 & 0xffffffff,uVar13,uVar12,uVar11,uVar8,local_88)
          ;
        }
        uVar20 = uVar20 + 1;
        puVar36 = puVar36 + 3;
      } while ((uint)uVar20 < uVar10);
    }
LAB_0010196a:
    bVar30 = *(byte *)(lVar5 + 0x268);
    if (bVar30 < 8) goto LAB_00101746;
LAB_0010197e:
    if (bVar30 < 9) goto LAB_00101986;
LAB_0010176b:
    png_set_scale_16(lVar5);
    if (*(uint *)((long)puVar4 + 0x1c) < uVar10) goto LAB_0010271e;
    break;
  case 4:
    uVar33 = *(uint *)((long)puVar4 + 0x1c);
    uVar10 = uVar8 & 1;
    if (uVar10 == 0) {
      if (((uVar8 & 2) == 0) || ((uVar16 == local_84 && (local_84 == uVar23)))) {
        if (uVar33 < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar5,"gray-alpha color-map: too few entries");
        }
        iVar14 = 0;
        do {
          iVar18 = iVar14 + 1;
          auVar38._0_8_ = png_create_colormap_entry(param_1,iVar14,iVar14,iVar14,iVar14,0xff,1);
          auVar38._8_8_ = extraout_XMM0_Qb_01;
          iVar14 = iVar18;
        } while (iVar18 != 0x100);
        if (local_88 == 2) {
          uVar20 = (ulong)(local_84 * 0xff >> 0xf);
          uVar8 = ((local_84 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar20] >> 0xc) +
                  (uint)*(ushort *)(&png_sRGB_base + uVar20 * 2) >> 8 & 0xff;
          auVar38._0_8_ =
               png_create_colormap_entry(param_1,uVar8,local_84,local_84,local_84,0xffff,2);
          auVar38._8_8_ = extraout_XMM0_Qb_03;
          local_84 = uVar8;
        }
        auVar38 = pshuflw(auVar38,ZEXT416(local_84),0);
        local_4e = auVar38._0_8_;
LAB_001020ab:
        local_50[0] = 0;
        png_set_background_fixed(lVar5,local_50,1,0,0);
        goto LAB_00101d10;
      }
      if (uVar33 < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"ga-alpha color-map: too few entries");
      }
      iVar14 = 0;
      do {
        iVar18 = iVar14 + 1;
        uVar8 = (iVar14 * 0x100 + 0x73U) / 0xe7;
        png_create_colormap_entry(param_1,iVar14,uVar8,uVar8,uVar8,0xff,1);
        iVar14 = iVar18;
      } while (iVar18 != 0xe7);
      if (local_88 == 2) {
        png_create_colormap_entry(param_1,0xe7,uVar16,local_84,uVar23,0xffff,2);
      }
      else {
        png_create_colormap_entry(param_1,0xe7,uVar16,local_84,uVar23,0xff,1);
        uVar16 = (uint)*(ushort *)(&png_sRGB_table + (ulong)uVar16 * 2);
        local_84 = (uint)*(ushort *)(&png_sRGB_table + (ulong)local_84 * 2);
        uVar23 = (uint)*(ushort *)(&png_sRGB_table + (ulong)uVar23 * 2);
      }
      iVar28 = 0x33;
      iVar14 = uVar23 * 0xcc;
      iVar21 = local_84 * -0x33;
      iVar18 = local_84 * 0xcc;
      iVar22 = 0xe8;
      local_84 = uVar16 * 0xcc;
      do {
        puVar32 = (ushort *)&png_sRGB_table;
        iVar35 = iVar22;
        do {
          uVar7 = *puVar32;
          puVar32 = puVar32 + 0x33;
          iVar15 = (uint)uVar7 * iVar28;
          uVar20 = (ulong)((uint)(iVar15 + iVar14) >> 0xf);
          uVar25 = (ulong)((uint)(iVar15 + iVar18) >> 0xf);
          uVar24 = (ulong)(iVar15 + local_84 >> 0xf);
          png_create_colormap_entry
                    (param_1,iVar35,
                     ((iVar15 + local_84 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar24] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar24 * 2) >> 8 & 0xff,
                     ((iVar15 + iVar18 & 0x7fffU) * (uint)(byte)(&png_sRGB_delta)[uVar25] >> 0xc) +
                     (uint)*(ushort *)(&png_sRGB_base + uVar25 * 2) >> 8 & 0xff,
                     (uint)*(ushort *)(&png_sRGB_base + uVar20 * 2) +
                     ((iVar15 + iVar14 & 0x7fffU) * (uint)(byte)(&png_sRGB_delta)[uVar20] >> 0xc) >>
                     8 & 0xff,0xff,1);
          iVar35 = iVar35 + 1;
        } while (puVar32 != (ushort *)0x10737c);
        iVar28 = iVar28 + 0x33;
        iVar14 = iVar14 + uVar23 * -0x33;
        iVar22 = iVar22 + 6;
        local_84 = local_84 + uVar16 * -0x33;
        iVar18 = iVar18 + iVar21;
      } while (iVar22 != 0x100);
      uVar23 = 0xe7;
      uVar10 = 1;
      uVar8 = 0x100;
    }
    else {
      if (uVar33 < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar5,"gray+alpha color-map: too few entries");
      }
      uVar23 = 0xe7;
      uVar8 = make_ga_colormap(param_1);
    }
LAB_00101598:
    png_set_alpha_mode_fixed(lVar5,0,220000);
LAB_001015a9:
    if (8 < *(byte *)(lVar5 + 0x268)) {
      png_set_scale_16(lVar5);
    }
    if ((0x100 < uVar8) || (*(uint *)((long)puVar4 + 0x1c) < uVar8)) {
LAB_0010271e:
                    /* WARNING: Subroutine does not return */
      png_error(lVar5,"color map overflow (BAD internal error)");
    }
    *(uint *)((long)puVar4 + 0x1c) = uVar8;
    if (uVar10 == 3) {
      if (uVar23 != 0x100) goto LAB_001027b3;
      goto LAB_00101616;
    }
    if (uVar10 == 4) {
      if (uVar23 == 0xd8) goto LAB_00101616;
LAB_001027b3:
                    /* WARNING: Subroutine does not return */
      png_error(lVar5,"bad background index (internal error)");
    }
    if (uVar10 == 1) {
      if (uVar23 == 0xe7) goto LAB_00101616;
      goto LAB_001027b3;
    }
    if (uVar10 == 2) {
      if ((uVar23 < uVar8) && (uVar23 == 0xfe)) goto LAB_00101616;
      goto LAB_001027b3;
    }
    if (uVar23 != 0x100) goto LAB_001027b3;
    goto LAB_00101997;
  }
  *(uint *)((long)puVar4 + 0x1c) = uVar10;
LAB_00101997:
  uVar10 = 0;
LAB_00101616:
  *(uint *)(param_1 + 9) = uVar10;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long png_create_read_struct(void)

{
  long lVar1;
  undefined8 uStack_10;
  
  lVar1 = png_create_png_struct();
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x130) = *(uint *)(lVar1 + 0x130) | 0x300000;
    *(undefined4 *)(lVar1 + 300) = 0x8000;
    *(undefined4 *)(lVar1 + 0x470) = 0x2000;
    png_set_read_fn(lVar1,0,0,uStack_10);
  }
  return lVar1;
}



long png_create_read_struct_2(void)

{
  long lVar1;
  undefined8 uStack_10;
  
  lVar1 = png_create_png_struct();
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x130) = *(uint *)(lVar1 + 0x130) | 0x300000;
    *(undefined4 *)(lVar1 + 300) = 0x8000;
    *(undefined4 *)(lVar1 + 0x470) = 0x2000;
    png_set_read_fn(lVar1,0,0,uStack_10);
  }
  return lVar1;
}



void png_read_info(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_info_part_0();
    return;
  }
  return;
}



void png_read_update_info(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
    png_read_start_row();
    png_read_transform_info(param_1,param_2);
    return;
  }
  png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  return;
}



void png_start_read_image(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
    png_read_start_row();
    return;
  }
  png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
  return;
}



void png_read_row(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *__src;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uint local_38 [2];
  ulong local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_00102b98;
  if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
    png_read_start_row();
  }
  bVar1 = *(byte *)(param_1 + 0x26a);
  local_38[0] = *(uint *)(param_1 + 0x210);
  local_28 = CONCAT31(CONCAT21(CONCAT11(bVar1,*(undefined1 *)(param_1 + 0x26b)),
                               *(undefined1 *)(param_1 + 0x268)),*(undefined1 *)(param_1 + 0x267));
  if (bVar1 < 8) {
    local_30 = (ulong)bVar1 * (ulong)local_38[0] + 7 >> 3;
  }
  else {
    local_30 = (ulong)(bVar1 >> 3) * (ulong)local_38[0];
  }
  uVar6 = *(uint *)(param_1 + 0x214);
  if ((*(char *)(param_1 + 0x264) == '\0') || ((*(byte *)(param_1 + 0x134) & 2) == 0)) {
LAB_00102a48:
    if ((*(byte *)(param_1 + 300) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid attempt to read row data");
    }
    **(undefined1 **)(param_1 + 0x228) = 0xff;
    png_read_IDAT_data(param_1,*(undefined8 *)(param_1 + 0x228),local_30 + 1);
    __src = *(byte **)(param_1 + 0x228);
    if (*__src != 0) {
      if (4 < *__src) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"bad adaptive filter value");
      }
      png_read_filter_row(param_1,local_38,__src + 1,*(long *)(param_1 + 0x220) + 1);
      __src = *(byte **)(param_1 + 0x228);
    }
    memcpy(*(void **)(param_1 + 0x220),__src,local_30 + 1);
    if (((*(ulong *)(param_1 + 0x3e0) & 0xff00000004) == 0x4000000004) && ((local_28 & 2) != 0)) {
      puVar2 = (ushort *)(*(long *)(param_1 + 0x228) + 1);
      if (local_28._1_1_ == '\b') {
        if ((char)local_28 == '\x02') {
          lVar7 = 3;
        }
        else {
          lVar7 = 4;
          if ((char)local_28 != '\x06') goto LAB_00102aeb;
        }
        if (local_38[0] != 0) {
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            *(char *)puVar2 = (char)*puVar2 + *(char *)((long)puVar2 + 1);
            *(char *)(puVar2 + 1) = (char)puVar2[1] + *(char *)((long)puVar2 + 1);
            puVar2 = (ushort *)((long)puVar2 + lVar7);
          } while (local_38[0] != uVar6);
        }
      }
      else if (local_28._1_1_ == '\x10') {
        if ((char)local_28 == '\x02') {
          lVar7 = 6;
        }
        else {
          lVar7 = 8;
          if ((char)local_28 != '\x06') goto LAB_00102aeb;
        }
        if (local_38[0] != 0) {
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            uVar4 = (uint)(ushort)(puVar2[1] << 8 | puVar2[1] >> 8);
            iVar3 = (ushort)(*puVar2 << 8 | *puVar2 >> 8) + uVar4;
            iVar5 = uVar4 + (ushort)(puVar2[2] << 8 | puVar2[2] >> 8);
            *(char *)puVar2 = (char)((uint)iVar3 >> 8);
            *(char *)((long)puVar2 + 1) = (char)iVar3;
            *(char *)(puVar2 + 2) = (char)((uint)iVar5 >> 8);
            *(char *)((long)puVar2 + 5) = (char)iVar5;
            puVar2 = (ushort *)((long)puVar2 + lVar7);
          } while (local_38[0] != uVar6);
        }
      }
    }
LAB_00102aeb:
    if ((*(int *)(param_1 + 0x134) != 0) || (-1 < *(int *)(param_1 + 0x25c))) {
      png_do_read_transformations(param_1,local_38);
    }
    if (*(byte *)(param_1 + 0x26f) == 0) {
      *(byte *)(param_1 + 0x26f) = local_28._3_1_;
      if (*(byte *)(param_1 + 0x26e) < local_28._3_1_) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"sequential row overflow");
      }
    }
    else if (*(byte *)(param_1 + 0x26f) != local_28._3_1_) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal sequential row size calculation error");
    }
    if ((*(char *)(param_1 + 0x264) == '\0') || ((*(uint *)(param_1 + 0x134) & 2) == 0)) {
      if (param_2 != 0) {
        png_combine_row(param_1,param_2,0xffffffff);
      }
      if (param_3 != 0) {
        png_combine_row(param_1,param_3,0xffffffff);
      }
    }
    else {
      if (*(byte *)(param_1 + 0x265) < 6) {
        png_do_read_interlace(local_38,*(long *)(param_1 + 0x228) + 1);
      }
      if (param_3 != 0) {
        png_combine_row(param_1,param_3,1);
      }
      if (param_2 != 0) {
        png_combine_row(param_1,param_2,0);
      }
    }
    png_read_finish_row(param_1);
    if (*(code **)(param_1 + 0x300) != (code *)0x0) {
      (**(code **)(param_1 + 0x300))
                (param_1,*(undefined4 *)(param_1 + 0x214),*(undefined1 *)(param_1 + 0x265));
    }
    goto LAB_00102b98;
  }
  switch(*(undefined1 *)(param_1 + 0x265)) {
  case 0:
    if ((uVar6 & 7) == 0) goto LAB_00102a48;
    break;
  case 1:
    if (((uVar6 & 7) == 0) && (4 < *(uint *)(param_1 + 0x1f8))) goto LAB_00102a48;
    break;
  case 2:
    if ((uVar6 & 7) == 4) goto LAB_00102a48;
    if ((param_3 == 0) || ((uVar6 & 4) == 0)) goto LAB_00102d2d;
    goto LAB_00102d1d;
  case 3:
    if (((uVar6 & 3) == 0) && (2 < *(uint *)(param_1 + 0x1f8))) goto LAB_00102a48;
    break;
  case 4:
    if ((uVar6 & 3) == 2) goto LAB_00102a48;
    if ((param_3 != 0) && ((uVar6 & 2) != 0)) goto LAB_00102d1d;
    goto LAB_00102d2d;
  case 5:
    if (((uVar6 & 1) == 0) && (1 < *(uint *)(param_1 + 0x1f8))) goto LAB_00102a48;
    break;
  default:
    if ((uVar6 & 1) != 0) goto LAB_00102a48;
    goto LAB_00102d2d;
  }
  if (param_3 != 0) {
LAB_00102d1d:
    png_combine_row(param_1,param_3,1);
  }
LAB_00102d2d:
  png_read_finish_row(param_1);
LAB_00102b98:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined4 png_image_read_direct(long *param_1)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uint local_60;
  undefined4 local_5c;
  undefined1 local_50;
  undefined1 uStack_4f;
  ushort uStack_4e;
  uint6 uStack_4c;
  long local_40;
  
  uVar16 = 0;
  plVar1 = (long *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = *(uint *)((long)plVar1 + 0x14);
  lVar2 = *(long *)*plVar1;
  lVar8 = ((long *)*plVar1)[1];
  uVar4 = uVar13 & 4;
  png_set_expand(lVar2);
  uVar5 = png_image_format_isra_0
                    (*(undefined2 *)(lVar2 + 0x260),*(undefined1 *)(lVar2 + 0x267),
                     *(undefined1 *)(lVar2 + 0x268));
  uVar11 = uVar5 & 0xfffffff7 ^ uVar13;
  uVar17 = 0;
  if ((uVar11 & 2) != 0) {
    if ((uVar13 & 2) == 0) {
      uVar16 = uVar5 & 1;
      png_set_rgb_to_gray_fixed(lVar2,1,0xffffffff,0xffffffff);
    }
    else {
      png_set_gray_to_rgb(lVar2);
    }
    uVar11 = uVar11 & 0xfffffffd;
    uVar17 = uVar16;
  }
  uVar16 = 0xffffffff;
  if ((uVar5 & 4) != 0) {
    uVar16 = -(uint)((*(uint *)(plVar1 + 3) & 4) != 0) | 100000;
  }
  png_set_alpha_mode_fixed(lVar2,0,uVar16);
  if (uVar4 == 0) {
    local_60 = 0;
    local_5c = 0xffffffff;
  }
  else {
    local_5c = 100000;
    local_60 = uVar5 & 1;
  }
  if ((uVar11 & 0x40) != 0) {
    local_60 = 2;
    uVar11 = uVar11 & 0xffffffbf;
  }
  if (uVar17 != 0) {
    iVar9 = png_muldiv(&local_50,local_5c,*(undefined4 *)(lVar2 + 0x4a0),100000);
    if ((iVar9 == 0) ||
       (iVar9 = png_gamma_significant(CONCAT22(uStack_4e,CONCAT11(uStack_4f,local_50))), iVar9 != 0)
       ) {
      if (local_60 == 1) {
        local_60 = 0;
        uVar17 = 2;
      }
    }
    else {
      uVar17 = 0;
    }
  }
  if ((uVar11 & 4) != 0) {
    if (uVar4 == 0) {
      png_set_scale_16(lVar2);
    }
    else {
      png_set_expand_16();
    }
    uVar11 = uVar11 & 0xfffffffb;
  }
  bVar18 = false;
  if ((uVar11 & 1) != 0) {
    if ((uVar5 & 1) == 0) {
      bVar18 = (uVar13 & 0x20) == 0;
      if (!bVar18) {
        uVar11 = uVar11 & 0xffffffdf;
      }
      png_set_add_alpha(lVar2,(-(uint)(uVar4 == 0) & 0xffff0100) + 0xffff,bVar18);
      bVar18 = false;
    }
    else if (uVar17 == 0) {
      if (uVar4 == 0) {
        pbVar3 = (byte *)param_1[4];
        if (pbVar3 == (byte *)0x0) {
          local_60 = 2;
          bVar18 = true;
        }
        else {
          local_50 = 0;
          uStack_4c = (uint6)(((ulong)pbVar3[1] << 0x10 | (ulong)pbVar3[2]) << 0x10) |
                      (uint6)pbVar3[1];
          uStack_4e = (ushort)*pbVar3;
          png_set_background_fixed(lVar2,&local_50,1,0,0);
        }
      }
      else {
        png_set_strip_alpha(lVar2);
      }
    }
    else {
      uVar17 = 2;
    }
    uVar11 = uVar11 & 0xfffffffe;
  }
  png_set_alpha_mode_fixed(lVar2,local_60,local_5c);
  if ((uVar11 & 0x10) != 0) {
    if ((uVar13 & 2) == 0) {
      uVar13 = uVar13 & 0xffffffef;
    }
    else {
      png_set_bgr(lVar2);
    }
    uVar11 = uVar11 & 0xffffffef;
  }
  if ((uVar11 & 0x20) != 0) {
    if ((uVar13 & 1) == 0) {
      uVar13 = uVar13 & 0xffffffdf;
    }
    else if (uVar17 != 2) {
      png_set_swap_alpha(lVar2);
    }
    uVar11 = uVar11 & 0xffffffdf;
  }
  if (uVar4 != 0) {
    png_set_swap(lVar2);
  }
  if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar2,"png_read_image: unsupported transformation");
  }
  png_set_keep_unknown_chunks(lVar2,1,0,0xffffffff);
  png_set_keep_unknown_chunks(lVar2,0,chunks_to_process_0,6);
  if ((bVar18) || (uVar17 == 2)) {
    iVar9 = 0;
  }
  else {
    iVar9 = png_set_interlace_handling(lVar2);
  }
  if ((*(byte *)(lVar2 + 0x130) & 0x40) == 0) {
    png_read_start_row(lVar2);
    png_read_transform_info(lVar2,lVar8);
  }
  else {
    png_app_error(lVar2,"png_read_update_info/png_start_read_image: duplicate call");
  }
  uVar5 = (*(byte *)(lVar8 + 0x25) >> 1 & 1) * 2;
  if ((*(byte *)(lVar8 + 0x25) & 4) == 0) {
    if (bVar18) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar2,"png_image_read: alpha channel lost");
    }
  }
  else if ((!bVar18) && ((uVar17 != 2 || ((uVar13 & 1) != 0)))) {
    uVar5 = uVar5 | 1;
  }
  if ((uVar13 & 0x40) != 0) {
    uVar5 = uVar5 | 0x40;
  }
  if (*(char *)(lVar8 + 0x24) == '\x10') {
    uVar5 = uVar5 | 4;
  }
  uVar11 = *(uint *)(lVar2 + 0x134) & 0x20000;
  uVar5 = uVar5 | (*(uint *)(lVar2 + 0x134) & 1) << 4;
  if (uVar17 == 2) {
    if ((uVar13 & 0x20) == 0) {
      if (uVar11 != 0) goto LAB_001033d1;
    }
    else {
      if (uVar11 != 0) goto LAB_001033d1;
      uVar5 = uVar5 | 0x20;
    }
    if ((*(ulong *)(lVar2 + 0x130) & 0x100000000000080) == 0x100000000000000) {
LAB_001033d1:
                    /* WARNING: Subroutine does not return */
      png_error(lVar2,"unexpected alpha swap transformation");
    }
  }
  else if ((uVar11 != 0) || ((*(ulong *)(lVar2 + 0x130) & 0x100000000000080) == 0x100000000000000))
  {
    uVar5 = uVar5 | 0x20;
  }
  if (uVar13 != uVar5) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar2,"png_read_image: invalid transformations");
  }
  lVar15 = param_1[1];
  lVar12 = (long)(int)param_1[2];
  if (uVar4 != 0) {
    lVar12 = (long)(int)param_1[2] * 2;
  }
  if (lVar12 < 0) {
    lVar15 = lVar15 - (ulong)((int)plVar1[2] - 1) * lVar12;
  }
  param_1[6] = lVar15;
  param_1[7] = lVar12;
  if (bVar18) {
    uVar7 = png_get_rowbytes(lVar2,lVar8);
    lVar8 = png_malloc(lVar2,uVar7);
    pcVar10 = png_image_read_composite;
    param_1[5] = lVar8;
  }
  else {
    if (uVar17 != 2) {
      iVar9 = iVar9 + -1;
      if (-1 < iVar9) {
        while( true ) {
          for (iVar14 = (int)plVar1[2]; iVar14 != 0; iVar14 = iVar14 + -1) {
            png_read_row(lVar2,lVar15,0);
            lVar15 = lVar15 + lVar12;
          }
          bVar18 = iVar9 == 0;
          iVar9 = iVar9 + -1;
          if (bVar18) break;
          lVar15 = param_1[6];
        }
      }
      uVar6 = 1;
      goto LAB_0010329e;
    }
    uVar7 = png_get_rowbytes(lVar2,lVar8);
    lVar8 = png_malloc(lVar2,uVar7);
    pcVar10 = png_image_read_background;
    param_1[5] = lVar8;
  }
  uVar6 = png_safe_execute(plVar1,pcVar10,param_1);
  param_1[5] = 0;
  png_free(lVar2,lVar8);
LAB_0010329e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 png_image_read_background(long *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ushort *puVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ushort *puVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  bool bVar30;
  ulong local_78;
  uint local_44;
  
  plVar5 = (long *)*param_1;
  lVar6 = *(long *)*plVar5;
  lVar7 = ((long *)*plVar5)[1];
  uVar3 = *(uint *)(plVar5 + 2);
  uVar4 = *(uint *)((long)plVar5 + 0xc);
  if ((*(uint *)(lVar6 + 0x134) & 0x600000) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar6,"lost rgb to gray");
  }
  if ((*(uint *)(lVar6 + 0x134) & 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar6,"unexpected compose");
  }
  cVar9 = png_get_channels(lVar6,lVar7);
  if (cVar9 != '\x02') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar6,"lost/gained channels");
  }
  uVar28 = *(uint *)((long)plVar5 + 0x14);
  if ((uVar28 & 5) == 1) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar6,"unexpected 8-bit transformation");
  }
  cVar9 = *(char *)(lVar6 + 0x264);
  if (cVar9 == '\0') {
    cVar1 = *(char *)(lVar7 + 0x24);
    local_44 = 1;
  }
  else {
    if (cVar9 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar6,"unknown interlace type");
    }
    cVar1 = *(char *)(lVar7 + 0x24);
    local_44 = 7;
  }
  if (cVar1 == '\b') {
    uVar13 = 0;
    uVar28 = 1;
    lVar7 = param_1[6];
    lVar8 = param_1[7];
    if (cVar9 == '\x01') goto LAB_001036e9;
LAB_00103578:
    local_78 = 1;
    uVar23 = 0;
    uVar17 = 0;
    iVar27 = 1;
LAB_0010358b:
    lVar16 = param_1[4];
    if (lVar16 == 0) goto LAB_00103784;
    do {
      bVar18 = *(byte *)(lVar16 + 1);
      uVar2 = *(ushort *)(&png_sRGB_table + (ulong)bVar18 * 2);
      if ((uint)uVar23 < uVar3) {
        do {
          pbVar29 = (byte *)param_1[5];
          lVar16 = lVar7 + uVar23 * lVar8;
          png_read_row(lVar6,pbVar29,0);
          for (pbVar22 = (byte *)(lVar16 + uVar17); pbVar22 < (byte *)(lVar16 + (ulong)uVar4);
              pbVar22 = pbVar22 + local_78) {
            bVar11 = pbVar29[1];
            bVar10 = bVar18;
            if (bVar11 != 0) {
              bVar10 = *pbVar29;
              if (bVar11 != 0xff) {
                uVar13 = (0xff - (uint)bVar11) * (uint)uVar2 +
                         (uint)*(ushort *)(&png_sRGB_table + (ulong)bVar10 * 2) * (uint)bVar11;
                uVar19 = (ulong)(uVar13 >> 0xf);
                bVar10 = (byte)(((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) +
                                (uint)*(ushort *)(&png_sRGB_base + uVar19 * 2) >> 8);
              }
            }
            *pbVar22 = bVar10;
            pbVar29 = pbVar29 + 2;
          }
          uVar13 = (int)uVar23 + iVar27;
          uVar23 = (ulong)uVar13;
        } while (uVar13 < uVar3);
      }
      while( true ) {
        do {
          uVar13 = uVar28;
          if (uVar13 == local_44) {
            return 1;
          }
          uVar28 = uVar13 + 1;
          if (*(char *)(lVar6 + 0x264) != '\x01') goto LAB_00103578;
LAB_001036e9:
          uVar14 = (uVar13 & 1) << (3U - (char)((int)uVar28 >> 1) & 0x1f);
          uVar25 = uVar14 & 7;
          uVar17 = (ulong)uVar25;
          if (uVar13 < 2) {
            bVar18 = 3;
            uVar25 = ~uVar14 & 7;
          }
          else {
            bVar18 = (byte)((int)(7 - uVar13) >> 1);
            uVar25 = ((1 << (bVar18 & 0x1f)) + -1) - uVar25;
          }
        } while (uVar25 + uVar4 >> (bVar18 & 0x1f) == 0);
        iVar27 = 8;
        local_78 = (ulong)(uint)(1 << ((byte)((int)(7 - uVar13) >> 1) & 0x1f));
        uVar23 = (ulong)((~uVar13 & 1) << (3U - (char)((int)uVar13 >> 1) & 0x1f) & 7);
        if (uVar13 < 3) goto LAB_0010358b;
        lVar16 = param_1[4];
        iVar27 = 8 >> ((byte)((int)(uVar13 - 1) >> 1) & 0x1f);
        if (lVar16 != 0) break;
LAB_00103784:
        if ((uint)uVar23 < uVar3) {
          do {
            pbVar29 = (byte *)param_1[5];
            lVar16 = lVar7 + uVar23 * lVar8;
            png_read_row(lVar6,pbVar29,0);
            for (pbVar22 = (byte *)(lVar16 + uVar17); pbVar22 < (byte *)(lVar16 + (ulong)uVar4);
                pbVar22 = pbVar22 + local_78) {
              bVar18 = pbVar29[1];
              if (bVar18 != 0) {
                bVar11 = *pbVar29;
                if (bVar18 != 0xff) {
                  uVar13 = (uint)*(ushort *)(&png_sRGB_table + (ulong)*pbVar22 * 2) *
                           (0xff - (uint)bVar18) +
                           (uint)*(ushort *)(&png_sRGB_table + (ulong)bVar11 * 2) * (uint)bVar18;
                  uVar19 = (ulong)(uVar13 >> 0xf);
                  bVar11 = (byte)(((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc)
                                  + (uint)*(ushort *)(&png_sRGB_base + uVar19 * 2) >> 8);
                }
                *pbVar22 = bVar11;
              }
              pbVar29 = pbVar29 + 2;
            }
            uVar13 = (int)uVar23 + iVar27;
            uVar23 = (ulong)uVar13;
          } while (uVar13 < uVar3);
        }
      }
    } while( true );
  }
  if (cVar1 != '\x10') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar6,"unexpected bit depth");
  }
  lVar7 = param_1[6];
  uVar13 = (uVar28 & 1) + 1;
  lVar8 = param_1[7];
  bVar30 = (uVar28 & 0x21) == 0x21;
  uVar14 = 0;
  do {
    uVar25 = uVar14 + 1;
    if (cVar9 == '\x01') {
      uVar21 = (uVar14 & 1) << (3U - (char)((int)uVar25 >> 1) & 0x1f);
      uVar15 = uVar21 & 7;
      if (uVar14 < 2) {
        bVar18 = 3;
        uVar21 = ~uVar21 & 7;
      }
      else {
        bVar18 = (byte)((int)(7 - uVar14) >> 1);
        uVar21 = ((1 << (bVar18 & 0x1f)) + -1) - uVar15;
      }
      if (uVar21 + uVar4 >> (bVar18 & 0x1f) != 0) {
        iVar27 = 8;
        uVar17 = (ulong)(uVar15 * uVar13);
        uVar23 = (ulong)(uVar13 << ((byte)((int)(7 - uVar14) >> 1) & 0x1f));
        uVar19 = (ulong)((~uVar14 & 1) << (3U - (char)((int)uVar14 >> 1) & 0x1f) & 7);
        if (2 < uVar14) {
          iVar27 = 8 >> ((byte)((int)(uVar14 - 1) >> 1) & 0x1f);
        }
        goto LAB_001039a9;
      }
    }
    else {
      uVar23 = (ulong)uVar13;
      uVar19 = 0;
      uVar17 = 0;
      iVar27 = 1;
LAB_001039a9:
      if ((uint)uVar19 < uVar3) {
        puVar26 = (ushort *)param_1[5];
        do {
          lVar16 = lVar7 + uVar19 * (lVar8 / 2) * 2;
          png_read_row(lVar6,puVar26,0);
          puVar26 = (ushort *)param_1[5];
          puVar20 = puVar26;
          for (uVar24 = lVar16 + uVar17 * 2; uVar24 < (ulong)(uVar4 * uVar13) * 2 + lVar16;
              uVar24 = uVar24 + uVar23 * 2) {
            uVar2 = puVar20[1];
            uVar12 = *puVar20;
            if (uVar2 == 0) {
              uVar12 = 0;
            }
            else if (uVar2 != 0xffff) {
              uVar12 = (ushort)((ulong)((uint)uVar12 * (uint)uVar2 + 0x7fff) / 0xffff);
            }
            *(ushort *)(uVar24 + (ulong)bVar30 * 2) = uVar12;
            if ((uVar28 & 1) != 0) {
              *(ushort *)(uVar24 + (ulong)!bVar30 * 2) = uVar2;
            }
            puVar20 = puVar20 + 2;
          }
          uVar14 = (int)uVar19 + iVar27;
          uVar19 = (ulong)uVar14;
        } while (uVar14 < uVar3);
      }
    }
    if (uVar25 == local_44) {
      return 1;
    }
    cVar9 = *(char *)(lVar6 + 0x264);
    uVar14 = uVar25;
  } while( true );
}



undefined8 png_image_read_composite(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint local_6c;
  
  puVar3 = (undefined8 *)*param_1;
  lVar4 = *(long *)*puVar3;
  cVar9 = *(char *)(lVar4 + 0x264);
  if (cVar9 == '\0') {
    uVar23 = 1;
  }
  else {
    if (cVar9 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar4,"unknown interlace type");
    }
    uVar23 = 7;
  }
  uVar1 = *(uint *)(puVar3 + 2);
  uVar2 = *(uint *)((long)puVar3 + 0xc);
  lVar5 = param_1[7];
  if ((*(byte *)((long)puVar3 + 0x14) & 2) == 0) {
    uVar16 = 1;
    uVar11 = uVar2;
  }
  else {
    uVar16 = 3;
    uVar11 = uVar2 * 3;
  }
  uVar22 = 0;
  do {
    uVar14 = uVar22 + 1;
    if (cVar9 == '\x01') {
      uVar6 = (uVar22 & 1) << (3U - (char)((int)uVar14 >> 1) & 0x1f);
      uVar17 = uVar6 & 7;
      if (uVar22 < 2) {
        uVar6 = ~uVar6 & 7;
        bVar8 = 3;
      }
      else {
        bVar8 = (byte)((int)(7 - uVar22) >> 1);
        uVar6 = ((1 << (bVar8 & 0x1f)) + -1) - uVar17;
      }
      if (uVar6 + uVar2 >> (bVar8 & 0x1f) != 0) {
        uVar18 = (ulong)(uVar17 * uVar16);
        local_6c = uVar16 << ((byte)((int)(7 - uVar22) >> 1) & 0x1f);
        uVar20 = (ulong)((~uVar22 & 1) << (3U - (char)((int)uVar22 >> 1) & 0x1f) & 7);
        iVar7 = 8;
        if (2 < uVar22) {
          iVar7 = 8 >> ((byte)((int)(uVar22 - 1) >> 1) & 0x1f);
        }
        goto LAB_00103c87;
      }
    }
    else {
      uVar20 = 0;
      iVar7 = 1;
      uVar18 = 0;
      local_6c = uVar16;
LAB_00103c87:
      uVar22 = (uint)uVar20;
      while (uVar22 < uVar1) {
        pbVar15 = (byte *)param_1[5];
        png_read_row(lVar4,pbVar15,0);
        uVar19 = (ulong)uVar16;
        lVar12 = uVar20 * lVar5 + param_1[6];
        for (uVar13 = lVar12 + uVar18; uVar13 < lVar12 + (ulong)uVar11; uVar13 = uVar13 + local_6c)
        {
          bVar8 = pbVar15[uVar19];
          if (bVar8 != 0) {
            uVar10 = 0;
            uVar22 = (uint)*pbVar15;
            if (bVar8 == 0xff) {
              while( true ) {
                *(char *)(uVar13 + uVar10) = (char)uVar22;
                uVar10 = uVar10 + 1;
                if (uVar10 == uVar19) break;
                uVar22 = (uint)pbVar15[uVar10];
              }
            }
            else {
              uVar10 = 0;
              while( true ) {
                uVar22 = (uint)*(ushort *)(&png_sRGB_table + (ulong)*(byte *)(uVar13 + uVar10) * 2)
                         * (0xff - (uint)bVar8) + uVar22 * 0xffff;
                uVar21 = (ulong)(uVar22 >> 0xf);
                *(char *)(uVar13 + uVar10) =
                     (char)(((uVar22 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar21] >> 0xc) +
                            (uint)*(ushort *)(&png_sRGB_base + uVar21 * 2) >> 8);
                uVar10 = uVar10 + 1;
                if (uVar10 == uVar19) break;
                uVar22 = (uint)pbVar15[uVar10];
              }
            }
          }
          pbVar15 = pbVar15 + (uVar16 + 1);
        }
        uVar22 = (int)uVar20 + iVar7;
        uVar20 = (ulong)uVar22;
      }
    }
    if (uVar14 == uVar23) {
      return 1;
    }
    cVar9 = *(char *)(lVar4 + 0x264);
    uVar22 = uVar14;
  } while( true );
}



undefined4 png_image_read_colormapped(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  
  iVar9 = 0;
  plVar1 = (long *)*param_1;
  lVar2 = *(long *)*plVar1;
  lVar6 = ((long *)*plVar1)[1];
  png_set_keep_unknown_chunks(lVar2,1,0,0xffffffff);
  png_set_keep_unknown_chunks(lVar2,0,chunks_to_process_0,6);
  if ((int)param_1[9] == 0) {
    iVar9 = png_set_interlace_handling(lVar2);
  }
  if (lVar2 == 0) {
LAB_00103ef5:
    iVar7 = (int)param_1[9];
    iVar3 = iVar7 + -3;
    bVar11 = iVar7 == 3;
    if (bVar11) {
LAB_00103fd5:
      if (((*(short *)(lVar6 + 0x24) == 0x208) && (*(int *)(lVar2 + 0x2a4) == 220000)) &&
         (*(int *)((long)plVar1 + 0x1c) == 0xd8)) goto LAB_00103f4a;
      goto LAB_00103ffb;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 0x130) & 0x40) == 0) {
      png_read_start_row(lVar2);
      png_read_transform_info(lVar2,lVar6);
      goto LAB_00103ef5;
    }
    png_app_error(lVar2,"png_read_update_info/png_start_read_image: duplicate call");
    iVar7 = (int)param_1[9];
    iVar3 = iVar7 + -3;
    bVar11 = iVar3 == 0;
    if (bVar11) goto LAB_00103fd5;
  }
  if (bVar11 || SBORROW4(iVar7,3) != iVar3 < 0) {
    if (iVar7 == 0) {
      if (((*(char *)(lVar6 + 0x25) == '\x03') || (*(char *)(lVar6 + 0x25) == '\0')) &&
         (*(char *)(lVar6 + 0x24) == '\b')) goto LAB_00103f4a;
    }
    else if ((((iVar7 - 1U < 2) && (*(short *)(lVar6 + 0x24) == 0x408)) &&
             (*(int *)(lVar2 + 0x2a4) == 220000)) && (*(int *)((long)plVar1 + 0x1c) == 0x100)) {
LAB_00103f4a:
      lVar8 = (long)(int)param_1[2];
      lVar10 = param_1[1];
      if (lVar8 < 0) {
        lVar10 = lVar10 - (ulong)((int)plVar1[2] - 1) * lVar8;
      }
      param_1[6] = lVar10;
      param_1[7] = lVar8;
      if (iVar9 == 0) {
        uVar5 = png_get_rowbytes(lVar2,lVar6);
        lVar6 = png_malloc(lVar2,uVar5);
        param_1[5] = lVar6;
        uVar4 = png_safe_execute(plVar1,png_image_read_and_map,param_1);
        param_1[5] = 0;
        png_free(lVar2,lVar6);
      }
      else {
        iVar9 = iVar9 + -1;
        if (-1 < iVar9) {
          while( true ) {
            for (iVar7 = (int)plVar1[2]; iVar7 != 0; iVar7 = iVar7 + -1) {
              png_read_row(lVar2,lVar10,0);
              lVar10 = lVar10 + lVar8;
            }
            bVar11 = iVar9 == 0;
            iVar9 = iVar9 + -1;
            if (bVar11) break;
            lVar10 = param_1[6];
          }
        }
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  else if (((iVar7 == 4) && (*(short *)(lVar6 + 0x24) == 0x608)) &&
          ((*(int *)(lVar2 + 0x2a4) == 220000 && (*(int *)((long)plVar1 + 0x1c) == 0xf4))))
  goto LAB_00103f4a;
LAB_00103ffb:
                    /* WARNING: Subroutine does not return */
  png_error(lVar2,"bad color-map processing (internal error)");
}



undefined8 png_image_read_and_map(long *param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  uint local_70;
  long local_60;
  long local_58;
  uint local_48;
  ulong uVar16;
  
  puVar5 = (undefined8 *)*param_1;
  lVar6 = *(long *)*puVar5;
  cVar9 = *(char *)(lVar6 + 0x264);
  if (cVar9 == '\0') {
    local_70 = *(uint *)(puVar5 + 2);
    uVar12 = *(uint *)((long)puVar5 + 0xc);
    uVar14 = 1;
    local_60 = param_1[6];
    iVar20 = (int)param_1[9];
    local_58 = param_1[7];
  }
  else {
    if (cVar9 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar6,"unknown interlace type");
    }
    local_70 = *(uint *)(puVar5 + 2);
    uVar12 = *(uint *)((long)puVar5 + 0xc);
    uVar14 = 7;
    local_60 = param_1[6];
    iVar20 = (int)param_1[9];
    local_58 = param_1[7];
  }
  uVar18 = 0;
  do {
    uVar1 = uVar18 + 1;
    if (cVar9 != '\x01') {
      local_48 = 1;
      uVar19 = 0;
      iVar17 = 1;
      uVar16 = 0;
LAB_001041c7:
      uVar18 = (uint)uVar19;
joined_r0x001041d4:
      if (uVar18 < local_70) {
        do {
          pbVar11 = (byte *)param_1[5];
          lVar2 = local_60 + uVar19 * local_58;
          pbVar3 = (byte *)(lVar2 + (ulong)uVar12);
          png_read_row(lVar6,pbVar11,0);
          pbVar7 = (byte *)(lVar2 + uVar16);
          if (iVar20 == 3) {
            if (pbVar7 < pbVar3) goto LAB_001043e0;
          }
          else if (iVar20 < 4) {
            if (iVar20 == 1) {
              if (pbVar7 < pbVar3) {
                do {
                  bVar8 = *pbVar11;
                  bVar4 = pbVar11[1];
                  pbVar11 = pbVar11 + 2;
                  if (bVar4 < 0xe6) {
                    bVar13 = 0xe7;
                    if (0x19 < bVar4) {
                      bVar13 = (char)((uint)bVar8 * 5 + 0x82 >> 8) + -0x1e +
                               (char)((ulong)bVar4 * 5 + 0x82 >> 8) * '\x06';
                    }
                  }
                  else {
                    bVar13 = (byte)((uint)bVar8 * 0xe7 + 0x80 >> 8);
                  }
                  *pbVar7 = bVar13;
                  pbVar7 = pbVar7 + local_48;
                } while (pbVar7 < pbVar3);
              }
            }
            else if (iVar20 == 2) {
              for (; pbVar7 < pbVar3; pbVar7 = pbVar7 + local_48) {
                bVar8 = 0xfe;
                if ((pbVar11[1] != 0) && (bVar8 = *pbVar11, bVar8 == 0xfe)) {
                  bVar8 = 0xff;
                }
                *pbVar7 = bVar8;
                pbVar11 = pbVar11 + 2;
              }
            }
          }
          else if (iVar20 == 4) {
            for (; pbVar7 < pbVar3; pbVar7 = pbVar7 + local_48) {
              if (pbVar11[3] < 0xc4) {
                bVar8 = 0xd8;
                if (0x3f < pbVar11[3]) {
                  bVar8 = *pbVar11 & 0x40;
                  if ((char)*pbVar11 < '\0') {
                    bVar8 = (-(bVar8 == 0) & 0xf3U) - 0xd;
                  }
                  else {
                    bVar8 = (-(bVar8 == 0) & 0xf3U) - 0x1a;
                  }
                }
              }
              else {
                bVar8 = (char)((uint)pbVar11[2] * 5 + 0x82 >> 8) +
                        ((char)((uint)pbVar11[1] * 5 + 0x82 >> 8) +
                        (char)((uint)*pbVar11 * 5 + 0x82 >> 8) * '\x06') * '\x06';
              }
              *pbVar7 = bVar8;
              pbVar11 = pbVar11 + 4;
            }
          }
          uVar18 = (int)uVar19 + iVar17;
          uVar19 = (ulong)uVar18;
          if (local_70 <= uVar18) break;
        } while( true );
      }
      goto joined_r0x0010419b;
    }
    uVar10 = (uVar18 & 1) << (3U - (char)((int)uVar1 >> 1) & 0x1f);
    uVar15 = uVar10 & 7;
    uVar16 = (ulong)uVar15;
    if (uVar18 < 2) {
      bVar8 = 3;
      uVar15 = ~uVar10 & 7;
    }
    else {
      bVar8 = (byte)((int)(7 - uVar18) >> 1);
      uVar15 = ((1 << (bVar8 & 0x1f)) + -1) - uVar15;
    }
    if (uVar15 + uVar12 >> (bVar8 & 0x1f) != 0) {
      iVar17 = 8;
      local_48 = 1 << ((byte)((int)(7 - uVar18) >> 1) & 0x1f);
      uVar19 = (ulong)((~uVar18 & 1) << (3U - (char)((int)uVar18 >> 1) & 0x1f) & 7);
      if (2 < uVar18) {
        iVar17 = 8 >> ((byte)((int)(uVar18 - 1) >> 1) & 0x1f);
      }
      goto LAB_001041c7;
    }
joined_r0x0010419b:
    if (uVar1 == uVar14) {
      return 1;
    }
    cVar9 = *(char *)(lVar6 + 0x264);
    uVar18 = uVar1;
  } while( true );
LAB_001043e0:
  do {
    *pbVar7 = (char)((uint)pbVar11[2] * 5 + 0x82 >> 8) +
              ((char)((uint)pbVar11[1] * 5 + 0x82 >> 8) +
              (char)((uint)*pbVar11 * 5 + 0x82 >> 8) * '\x06') * '\x06';
    pbVar7 = pbVar7 + local_48;
    pbVar11 = pbVar11 + 3;
  } while (pbVar7 < pbVar3);
  uVar18 = (int)uVar19 + iVar17;
  uVar19 = (ulong)uVar18;
  goto joined_r0x001041d4;
}



void png_read_rows(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    if (param_3 != (undefined8 *)0x0) {
      if (param_4 == 0) {
        return;
      }
      puVar1 = param_2 + param_4;
      do {
        uVar2 = *param_3;
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        png_read_row(param_1,uVar3,uVar2);
      } while (puVar1 != param_2);
      return;
    }
    if (param_2 != (undefined8 *)0x0) {
      if (param_4 == 0) {
        return;
      }
      puVar1 = param_2 + param_4;
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        png_read_row(param_1,uVar2,0);
      } while (puVar1 != param_2);
      return;
    }
  }
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    puVar1 = param_3 + param_4;
    do {
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      png_read_row(param_1,0,uVar2);
    } while (puVar1 != param_3);
  }
  return;
}



void png_read_image(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
    iVar2 = png_set_interlace_handling();
    if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
      png_read_start_row(param_1);
    }
    else {
      png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
    }
  }
  else {
    if ((*(char *)(param_1 + 0x264) != '\0') && ((*(byte *)(param_1 + 0x134) & 2) == 0)) {
      png_warning(param_1,"Interlace handling should be turned on when using png_read_image");
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
    }
    iVar2 = png_set_interlace_handling(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x1fc);
  if (0 < iVar2) {
    iVar5 = 0;
    puVar3 = param_2;
    if (uVar1 == 0) {
      do {
        if (iVar2 == iVar5 + 1) {
          return;
        }
        iVar5 = iVar5 + 2;
      } while (iVar2 != iVar5);
    }
    else {
      do {
        do {
          puVar4 = puVar3 + 1;
          png_read_row(param_1,*puVar3,0);
          puVar3 = puVar4;
        } while (param_2 + uVar1 != puVar4);
        iVar5 = iVar5 + 1;
        puVar3 = param_2;
      } while (iVar2 != iVar5);
    }
  }
  return;
}



void png_read_end(long param_1)

{
  if (param_1 != 0) {
    png_read_end_part_0();
    return;
  }
  return;
}



void png_destroy_read_struct(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    png_destroy_info_struct(lVar2,param_3);
    png_destroy_info_struct(lVar2,param_2);
    *param_1 = 0;
    png_destroy_gamma_table(lVar2);
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x400));
    *(undefined8 *)(lVar2 + 0x400) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x478));
    *(undefined8 *)(lVar2 + 0x478) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x460));
    *(undefined8 *)(lVar2 + 0x460) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x378));
    *(undefined8 *)(lVar2 + 0x378) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x380));
    uVar1 = *(uint *)(lVar2 + 0x3ac);
    *(undefined8 *)(lVar2 + 0x380) = 0;
    if ((uVar1 & 0x1000) == 0) {
      uVar3 = uVar1 & 0xffffefff;
      *(uint *)(lVar2 + 0x3ac) = uVar3;
    }
    else {
      png_zfree(lVar2,*(undefined8 *)(lVar2 + 0x250));
      uVar1 = *(uint *)(lVar2 + 0x3ac);
      *(undefined8 *)(lVar2 + 0x250) = 0;
      uVar3 = uVar1 & 0xffffefff;
      *(uint *)(lVar2 + 0x3ac) = uVar3;
    }
    if ((uVar1 & 0x2000) != 0) {
      png_free(lVar2,*(undefined8 *)(lVar2 + 0x2e8));
      uVar3 = *(uint *)(lVar2 + 0x3ac);
      *(undefined8 *)(lVar2 + 0x2e8) = 0;
    }
    *(uint *)(lVar2 + 0x3ac) = uVar3 & 0xffffdfff;
    inflateEnd(lVar2 + 0x140);
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x330));
    *(undefined8 *)(lVar2 + 0x330) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x440));
    *(undefined8 *)(lVar2 + 0x440) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x3c8));
    *(undefined8 *)(lVar2 + 0x3c8) = 0;
    png_free(lVar2,*(undefined8 *)(lVar2 + 0x3d8));
    *(undefined8 *)(lVar2 + 0x3d8) = 0;
    png_destroy_png_struct(lVar2);
    return;
  }
  return;
}



undefined8 png_image_read_init_part_0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 uStack_40;
  long local_30;
  long local_28;
  long local_20;
  
  bVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = png_create_png_struct("1.6.45",param_1,&png_safe_error,&png_safe_warning,0,0,0);
  if (lVar1 == 0) {
    puVar5 = param_1;
    for (lVar1 = 0x1a; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar5 = 0;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -8 + 4);
    }
    *(undefined4 *)(param_1 + 1) = 1;
  }
  else {
    *(uint *)(lVar1 + 0x130) = *(uint *)(lVar1 + 0x130) | 0x300000;
    *(undefined4 *)(lVar1 + 300) = 0x8000;
    *(undefined4 *)(lVar1 + 0x470) = 0x2000;
    png_set_read_fn(lVar1,0,0,uStack_40);
    *param_1 = 0;
    param_1[0xc] = 0;
    puVar5 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x68U >>
                        3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    local_30 = lVar1;
    local_28 = png_create_info_struct(lVar1);
    if (local_28 != 0) {
      plVar2 = (long *)png_malloc_warn(lVar1,0x30);
      if (plVar2 != (long *)0x0) {
        *param_1 = plVar2;
        *(undefined1 (*) [16])(plVar2 + 2) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar2 + 4) = (undefined1  [16])0x0;
        *plVar2 = lVar1;
        plVar2[1] = local_28;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 1;
        }
        goto LAB_00104a6d;
      }
      png_destroy_info_struct(lVar1,&local_28);
    }
    png_destroy_read_struct(&local_30,0,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar3 = png_image_error(param_1,"png_image_read: out of memory");
    return uVar3;
  }
LAB_00104a6d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_set_read_status_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x300) = param_2;
  }
  return;
}



void png_read_png(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__s;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  png_read_info_part_0();
  if (0x1fffffff < *(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Image is too high to process with png_read_png()");
  }
  if ((param_3 & 0x8000) != 0) {
    png_set_scale_16(param_1);
  }
  if ((param_3 & 1) != 0) {
    png_set_strip_16(param_1);
  }
  if ((param_3 & 2) != 0) {
    png_set_strip_alpha(param_1);
  }
  if ((param_3 & 4) != 0) {
    png_set_packing(param_1);
  }
  if ((param_3 & 8) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 & 0x10) != 0) {
    png_set_expand(param_1);
  }
  if ((param_3 & 0x20) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 & 0x40) != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    png_set_shift(param_1,param_2 + 0xb8);
  }
  if ((param_3 & 0x80) != 0) {
    png_set_bgr(param_1);
  }
  if ((param_3 & 0x100) != 0) {
    png_set_swap_alpha(param_1);
  }
  if ((param_3 & 0x200) != 0) {
    png_set_swap(param_1);
  }
  if ((param_3 & 0x400) != 0) {
    png_set_invert_alpha(param_1);
  }
  if ((param_3 & 0x2000) != 0) {
    png_set_gray_to_rgb(param_1);
  }
  if ((param_3 & 0x4000) != 0) {
    png_set_expand_16(param_1);
  }
  png_set_interlace_handling(param_1);
  if ((*(byte *)(param_1 + 0x130) & 0x40) == 0) {
    png_read_start_row(param_1);
    png_read_transform_info(param_1,param_2);
  }
  else {
    png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  }
  png_free_data(param_1,param_2,0x40,0);
  __s = *(void **)(param_2 + 0x168);
  if (__s == (void *)0x0) {
    __s = (void *)png_malloc(param_1);
    *(void **)(param_2 + 0x168) = __s;
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x40;
    }
    else {
      lVar4 = 0;
      __s = memset(__s,0,(ulong)*(uint *)(param_2 + 4) << 3);
      *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x40;
      do {
        puVar1 = (undefined8 *)((long)__s + lVar4 * 8);
        lVar4 = lVar4 + 1;
        uVar3 = png_malloc(param_1,*(undefined8 *)(param_2 + 0x10));
        uVar2 = *(uint *)(param_2 + 4);
        __s = *(void **)(param_2 + 0x168);
        *puVar1 = uVar3;
      } while ((uint)lVar4 < uVar2);
    }
  }
  png_read_image(param_1,__s);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
  png_read_end_part_0(param_1,param_2);
  return;
}



undefined8 png_image_begin_read_from_stdio(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((int)param_1[1] == 1) {
    if (param_2 != 0) {
      if (*param_1 == 0) {
        iVar1 = png_image_read_init_part_0();
      }
      else {
        iVar1 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
      }
      if (iVar1 == 0) {
        return 0;
      }
      *(long *)(*(long *)*param_1 + 0x108) = param_2;
      uVar2 = png_safe_execute(param_1,png_image_read_header,param_1);
      return uVar2;
    }
    pcVar3 = "png_image_begin_read_from_stdio: invalid argument";
  }
  else {
    pcVar3 = "png_image_begin_read_from_stdio: incorrect PNG_IMAGE_VERSION";
  }
  uVar2 = png_image_error(param_1,pcVar3);
  return uVar2;
}



undefined8 png_image_begin_read_from_file(long *param_1,char *param_2)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  FILE *__stream;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((int)param_1[1] == 1) {
    if (param_2 == (char *)0x0) {
      pcVar6 = "png_image_begin_read_from_file: invalid argument";
    }
    else {
      __stream = fopen64(param_2,"rb");
      if (__stream != (FILE *)0x0) {
        if (*param_1 == 0) {
          iVar3 = png_image_read_init_part_0(param_1);
        }
        else {
          iVar3 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
        }
        if (iVar3 == 0) {
          fclose(__stream);
          return 0;
        }
        plVar2 = (long *)*param_1;
        *(FILE **)(*plVar2 + 0x108) = __stream;
        pbVar1 = (byte *)(plVar2 + 5);
        *pbVar1 = *pbVar1 | 2;
        uVar4 = png_safe_execute(param_1,png_image_read_header,param_1);
        return uVar4;
      }
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
    }
  }
  else {
    pcVar6 = "png_image_begin_read_from_file: incorrect PNG_IMAGE_VERSION";
  }
  uVar4 = png_image_error(param_1,pcVar6);
  return uVar4;
}



undefined8 png_image_begin_read_from_memory(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((int)param_1[1] != 1) {
    uVar4 = png_image_error(param_1,"png_image_begin_read_from_memory: incorrect PNG_IMAGE_VERSION")
    ;
    return uVar4;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar4 = png_image_error(param_1,"png_image_begin_read_from_memory: invalid argument");
    return uVar4;
  }
  if (*param_1 == 0) {
    iVar3 = png_image_read_init_part_0();
  }
  else {
    iVar3 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
  }
  if (iVar3 == 0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  plVar1[3] = param_2;
  plVar1[4] = param_3;
  lVar2 = *plVar1;
  *(long **)(lVar2 + 0x108) = param_1;
  *(undefined8 *)(lVar2 + 0x100) = 0x100000;
  uVar4 = png_safe_execute(param_1,png_image_read_header,param_1);
  return uVar4;
}



ulong png_image_finish_read(long *param_1,undefined8 param_2,long param_3,uint param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long *local_78;
  long local_70;
  int local_68;
  undefined4 local_64;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  undefined1 local_44 [12];
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  long local_20;
  ulong uVar7;
  
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uStack_58 = uVar1;
    uStack_54 = uVar2;
    if ((int)param_1[1] != 1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = png_image_error(param_1,"png_image_finish_read: damaged PNG_IMAGE_VERSION");
        return uVar5;
      }
      goto LAB_001052b2;
    }
    uVar6 = *(uint *)((long)param_1 + 0x14);
    uVar3 = 0x7fffffff;
    uVar8 = 1;
    if ((uVar6 & 8) == 0) {
      uVar8 = (uVar6 & 3) + 1;
      uVar3 = (uint)(0x7fffffff / (ulong)uVar8);
    }
    if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = png_image_error(param_1,"png_image_finish_read: row_stride too large");
        return uVar5;
      }
      goto LAB_001052b2;
    }
    uVar8 = *(uint *)((long)param_1 + 0xc) * uVar8;
    uVar5 = (ulong)param_4;
    if (param_4 == 0) {
      uVar5 = (ulong)uVar8;
    }
    iVar4 = (int)uVar5;
    uVar9 = (ulong)(uint)-iVar4;
    if (0 < iVar4) {
      uVar9 = uVar5;
    }
    if (((*param_1 == 0) || (param_3 == 0)) || ((uint)uVar9 < uVar8)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = png_image_error(param_1,"png_image_finish_read: invalid argument");
        return uVar5;
      }
      goto LAB_001052b2;
    }
    uStack_58 = (undefined4)param_2;
    uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
    if ((uVar6 & 8) == 0) {
      uVar5 = 0xffffffff / (ulong)((uVar6 >> 2 & 1) + 1);
      uVar7 = uVar5 % uVar9;
      if ((uint)(uVar5 / uVar9) < *(uint *)(param_1 + 2)) goto LAB_00105290;
      local_64 = 0;
      auStack_50 = SUB1612((undefined1  [16])0x0,4);
      local_44 = SUB1612((undefined1  [16])0x0,0);
      uStack_38 = 0;
      auStack_34 = SUB1612((undefined1  [16])0x0,4);
      local_78 = param_1;
      local_70 = param_3;
      local_68 = iVar4;
      lStack_60 = param_5;
      uVar6 = png_safe_execute(param_1,png_image_read_direct,&local_78);
      uVar5 = (ulong)uVar6;
    }
    else {
      uVar6 = (uint)(*(uint *)(param_1 + 2) * uVar9 >> 0x20);
      uVar7 = (ulong)uVar6;
      if (uVar6 != 0) {
LAB_00105290:
        uStack_58 = uVar1;
        uStack_54 = uVar2;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = png_image_error(param_1,"png_image_finish_read: image too large",uVar7);
          return uVar5;
        }
        goto LAB_001052b2;
      }
      if ((*(int *)((long)param_1 + 0x1c) == 0) || (param_5 == 0)) {
        uStack_58 = uVar1;
        uStack_54 = uVar2;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = png_image_error(param_1,"png_image_finish_read[color-map]: no color-map");
          return uVar5;
        }
        goto LAB_001052b2;
      }
      local_64 = 0;
      auStack_50 = SUB1612((undefined1  [16])0x0,4);
      local_44 = SUB1612((undefined1  [16])0x0,0);
      uStack_38 = 0;
      auStack_34 = SUB1612((undefined1  [16])0x0,4);
      local_78 = param_1;
      local_70 = param_3;
      local_68 = iVar4;
      lStack_60 = param_5;
      uVar6 = png_safe_execute(param_1,png_image_read_colormap,&local_78);
      uVar5 = (ulong)uVar6;
      if (uVar6 != 0) {
        iVar4 = png_safe_execute(param_1,png_image_read_colormapped,&local_78);
        uVar5 = (ulong)(iVar4 != 0);
      }
    }
    png_image_free(param_1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_001052b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


