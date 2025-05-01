
void png_push_fill_buffer(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x350);
    if (uVar1 != 0) {
      if (param_3 < uVar1) {
        uVar1 = param_3;
      }
      param_2 = memcpy(param_2,*(void **)(param_1 + 0x328),uVar1);
      param_3 = param_3 - uVar1;
      *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar1;
      *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x350) - uVar1;
      *(long *)(param_1 + 0x328) = *(long *)(param_1 + 0x328) + uVar1;
      param_2 = (void *)((long)param_2 + uVar1);
    }
    if ((param_3 != 0) && (uVar1 = *(ulong *)(param_1 + 0x368), uVar1 != 0)) {
      if (uVar1 <= param_3) {
        param_3 = uVar1;
      }
      memcpy(param_2,*(void **)(param_1 + 0x338),param_3);
      *(long *)(param_1 + 0x338) = *(long *)(param_1 + 0x338) + param_3;
      *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - param_3;
      *(ulong *)(param_1 + 0x368) = *(long *)(param_1 + 0x368) - param_3;
      return;
    }
  }
  return;
}



undefined8 png_process_data_skip(undefined8 param_1)

{
  png_app_warning(param_1,
                  "png_process_data_skip is not implemented in any current version of libpng");
  return 0;
}



void png_push_read_sig(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x26d);
  uVar2 = 8 - uVar3;
  if (*(ulong *)(param_1 + 0x360) < 8 - uVar3) {
    uVar2 = *(ulong *)(param_1 + 0x360);
  }
  png_push_fill_buffer(param_1,param_2 + 0x2c + uVar3,uVar2);
  *(char *)(param_1 + 0x26d) = *(char *)(param_1 + 0x26d) + (char)uVar2;
  iVar1 = png_sig_cmp(param_2 + 0x2c,uVar3,uVar2);
  if (iVar1 != 0) {
    if (uVar3 < 4) {
      iVar1 = png_sig_cmp(param_2 + 0x2c,uVar3,uVar2 - 4);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Not a PNG file");
      }
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG file corrupted by ASCII conversion");
  }
  if (7 < *(byte *)(param_1 + 0x26d)) {
    *(undefined4 *)(param_1 + 0x370) = 1;
  }
  return;
}



void png_push_save_buffer(long param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  void *__src;
  
  uVar4 = *(ulong *)(param_1 + 0x350);
  __src = *(void **)(param_1 + 0x330);
  if (uVar4 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x368);
    if (uVar2 <= *(ulong *)(param_1 + 0x358)) goto joined_r0x001002af;
LAB_00100219:
    pvVar3 = (void *)png_malloc_warn(param_1,uVar2 + 0x100);
    *(void **)(param_1 + 0x330) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      png_free(param_1,__src);
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Insufficient memory for save_buffer");
    }
    if (__src == (void *)0x0) {
      if (*(size_t *)(param_1 + 0x350) != 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"save_buffer error");
      }
    }
    else {
      memcpy(pvVar3,__src,*(size_t *)(param_1 + 0x350));
    }
    png_free(param_1,__src);
    *(ulong *)(param_1 + 0x358) = uVar2 + 0x100;
    sVar5 = *(size_t *)(param_1 + 0x368);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x328);
    if (pvVar3 != __src) {
      uVar2 = 0;
      do {
        *(undefined1 *)((long)__src + uVar2) = *(undefined1 *)((long)pvVar3 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
      uVar4 = *(ulong *)(param_1 + 0x350);
    }
    sVar5 = *(size_t *)(param_1 + 0x368);
    uVar2 = sVar5 + uVar4;
    if (*(ulong *)(param_1 + 0x358) < uVar2) {
      if (-sVar5 - 0x101 < uVar4) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Potential overflow of save_buffer");
      }
      __src = *(void **)(param_1 + 0x330);
      goto LAB_00100219;
    }
  }
  __src = *(void **)(param_1 + 0x330);
  uVar2 = sVar5;
joined_r0x001002af:
  if (uVar2 != 0) {
    memcpy((void *)(*(long *)(param_1 + 0x350) + (long)__src),*(void **)(param_1 + 0x338),uVar2);
    lVar1 = *(long *)(param_1 + 0x368);
    __src = *(void **)(param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x350) + lVar1;
  }
  *(void **)(param_1 + 0x328) = __src;
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}



long png_process_data_pause(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      png_push_save_buffer();
      return 0;
    }
    uVar1 = *(ulong *)(param_1 + 0x360);
    *(undefined8 *)(param_1 + 0x360) = 0;
    if (*(ulong *)(param_1 + 0x350) < uVar1) {
      return uVar1 - *(ulong *)(param_1 + 0x350);
    }
  }
  return 0;
}



void png_push_read_chunk(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_28 [4];
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x12d) & 1) == 0) {
    if (7 < *(ulong *)(param_1 + 0x360)) {
      png_push_fill_buffer(param_1,auStack_28,4);
      uVar3 = png_get_uint_31(param_1,auStack_28);
      *(undefined4 *)(param_1 + 0x348) = uVar3;
      png_reset_crc(param_1);
      png_crc_read(param_1,&local_24,4);
      *(uint *)(param_1 + 0x218) =
           local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 |
           local_24 << 0x18;
      png_check_chunk_name(param_1);
      png_check_chunk_length(param_1,*(undefined4 *)(param_1 + 0x348));
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x100;
      goto LAB_00100430;
    }
  }
  else {
LAB_00100430:
    iVar6 = *(int *)(param_1 + 0x218);
    if (iVar6 == 0x49444154) {
      uVar4 = *(uint *)(param_1 + 300);
      if ((uVar4 & 8) != 0) {
        uVar4 = uVar4 | 0x2000;
        *(uint *)(param_1 + 300) = uVar4;
      }
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Missing IHDR before IDAT");
      }
      if ((*(char *)(param_1 + 0x267) == '\x03') && ((uVar4 & 2) == 0)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Missing PLTE before IDAT");
      }
      *(undefined4 *)(param_1 + 0x370) = 2;
      if ((((uVar4 & 4) == 0) || ((uVar4 & 0x2000) != 0)) || (*(int *)(param_1 + 0x348) != 0)) {
        *(uint *)(param_1 + 300) = uVar4 | 4;
        if ((uVar4 & 8) == 0) {
          iVar5 = png_chunk_unknown_handling(param_1,0x49444154);
          uVar9 = extraout_RDX_00;
          if (iVar5 != 0) goto LAB_001005c7;
        }
        else {
          png_benign_error(param_1,"Too many IDATs found");
          iVar5 = png_chunk_unknown_handling(param_1,0x49444154);
          uVar9 = extraout_RDX;
          if (iVar5 != 0) {
            iVar8 = *(int *)(param_1 + 0x348);
            if ((ulong)(iVar8 + 4) <= *(ulong *)(param_1 + 0x360)) {
LAB_00100760:
              png_handle_unknown(param_1,param_2,iVar8,iVar5);
              goto LAB_0010076b;
            }
            goto LAB_00100588;
          }
        }
        *(undefined4 *)(param_1 + 0x370) = 2;
        *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x348);
        if (*(code **)(param_1 + 0x310) != (code *)0x0) {
          (**(code **)(param_1 + 0x310))(param_1,param_2,uVar9,iVar5);
        }
        bVar1 = *(byte *)(param_1 + 0x26a);
        if (bVar1 < 8) {
          iVar6 = (int)((ulong)*(uint *)(param_1 + 0x210) * (ulong)bVar1 + 7 >> 3);
        }
        else {
          iVar6 = *(uint *)(param_1 + 0x210) * (uint)(bVar1 >> 3);
        }
        *(int *)(param_1 + 0x160) = iVar6 + 1;
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x228);
      }
LAB_001004e2:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100969;
    }
    if (iVar6 == 0x49484452) {
      if (*(int *)(param_1 + 0x348) != 0xd) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid IHDR length");
      }
      if (0x10 < *(ulong *)(param_1 + 0x360)) {
        png_handle_IHDR(param_1,param_2,0xd);
        uVar4 = *(uint *)(param_1 + 300);
LAB_001004d9:
        *(uint *)(param_1 + 300) = uVar4 & 0xfffffeff;
        goto LAB_001004e2;
      }
    }
    else if (iVar6 == 0x49454e44) {
      if ((ulong)(*(int *)(param_1 + 0x348) + 4) <= *(ulong *)(param_1 + 0x360)) {
        png_handle_IEND(param_1,param_2);
        *(undefined4 *)(param_1 + 0x370) = 6;
        if (*(code **)(param_1 + 800) == (code *)0x0) {
LAB_0010076b:
          uVar4 = *(uint *)(param_1 + 300);
        }
        else {
          (**(code **)(param_1 + 800))(param_1,param_2);
          uVar4 = *(uint *)(param_1 + 300);
        }
        goto LAB_001004d9;
      }
    }
    else {
      iVar5 = png_chunk_unknown_handling(param_1,iVar6);
      if (iVar5 == 0) {
        iVar8 = *(int *)(param_1 + 0x348);
        if (iVar6 == 0x504c5445) {
          if ((ulong)(iVar8 + 4) <= *(ulong *)(param_1 + 0x360)) {
            png_handle_PLTE(param_1,param_2);
            uVar4 = *(uint *)(param_1 + 300);
            goto LAB_001004d9;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0x218);
          uVar2 = *(ulong *)(param_1 + 0x360);
          uVar7 = (ulong)(iVar8 + 4);
          if (iVar5 == 0x67414d41) {
            if (uVar7 <= uVar2) {
              png_handle_gAMA(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar5 == 0x73424954) {
            if (uVar7 <= uVar2) {
              png_handle_sBIT(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar5 == 0x6348524d) {
            if (uVar7 <= uVar2) {
              png_handle_cHRM(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar5 == 0x63494350) {
            if (uVar7 <= uVar2) {
              png_handle_cICP(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar5 == 0x65584966) {
            if (uVar7 <= uVar2) {
              png_handle_eXIf(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x73524742) {
            if (uVar7 <= uVar2) {
              png_handle_sRGB(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar5 == 0x69434350) {
            if (uVar7 <= uVar2) {
              png_handle_iCCP(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x73504c54) {
            if (uVar7 <= uVar2) {
              png_handle_sPLT(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x74524e53) {
            if (uVar7 <= uVar2) {
              png_handle_tRNS(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x624b4744) {
            if (uVar7 <= uVar2) {
              png_handle_bKGD(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x68495354) {
            if (uVar7 <= uVar2) {
              png_handle_hIST(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x70485973) {
            if (uVar7 <= uVar2) {
              png_handle_pHYs(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x6f464673) {
            if (uVar7 <= uVar2) {
              png_handle_oFFs(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x7043414c) {
            if (uVar7 <= uVar2) {
              png_handle_pCAL(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x7343414c) {
            if (uVar7 <= uVar2) {
              png_handle_sCAL(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x74494d45) {
            if (uVar7 <= uVar2) {
              png_handle_tIME(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x74455874) {
            if (uVar7 <= uVar2) {
              png_handle_tEXt(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x7a545874) {
            if (uVar7 <= uVar2) {
              png_handle_zTXt(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (iVar6 == 0x69545874) {
            if (uVar7 <= uVar2) {
              png_handle_iTXt(param_1,param_2);
              uVar4 = *(uint *)(param_1 + 300);
              goto LAB_001004d9;
            }
          }
          else if (uVar7 <= uVar2) {
            iVar5 = 0;
            goto LAB_00100760;
          }
        }
      }
      else {
LAB_001005c7:
        if ((ulong)(*(int *)(param_1 + 0x348) + 4) <= *(ulong *)(param_1 + 0x360)) {
          png_handle_unknown(param_1,param_2,*(int *)(param_1 + 0x348),iVar5);
          if (iVar6 != 0x504c5445) goto LAB_0010076b;
          uVar4 = *(uint *)(param_1 + 300) | 2;
          goto LAB_001004d9;
        }
      }
    }
  }
LAB_00100588:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    png_push_save_buffer(param_1);
    return;
  }
LAB_00100969:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_push_restore_buffer(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0x368) = param_3;
  *(long *)(param_1 + 0x360) = param_3 + *(long *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x338) = param_2;
  *(undefined8 *)(param_1 + 0x340) = param_2;
  return;
}



void png_read_push_finish_row(long param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(int *)(param_1 + 0x214) + 1;
  *(uint *)(param_1 + 0x214) = uVar2;
  if (uVar2 < *(uint *)(param_1 + 0x200)) {
    return;
  }
  if (*(char *)(param_1 + 0x264) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  memset(*(void **)(param_1 + 0x220),0,*(long *)(param_1 + 0x208) + 1);
  bVar3 = *(byte *)(param_1 + 0x265);
  do {
    bVar1 = bVar3 + 1;
    if (bVar3 == 0) {
      bVar3 = (*(uint *)(param_1 + 0x1f8) < 5) + 1;
    }
    else if (bVar1 == 3) {
      bVar3 = (*(uint *)(param_1 + 0x1f8) < 3) + 3;
    }
    else if (bVar1 == 5) {
      bVar3 = (*(uint *)(param_1 + 0x1f8) < 2) + 5;
    }
    else {
      if (7 < bVar1) break;
      bVar3 = bVar1;
      if (bVar1 == 7) {
        *(undefined1 *)(param_1 + 0x265) = 7;
        return;
      }
    }
    uVar5 = (ulong)bVar3;
    uVar7 = (uint)*(byte *)((long)&png_pass_inc + uVar5);
    uVar2 = ((uVar7 - 1) + *(int *)(param_1 + 0x1f8)) -
            (uint)*(byte *)((long)&png_pass_start + uVar5);
    *(uint *)(param_1 + 0x210) = uVar2 / uVar7;
    if ((*(byte *)(param_1 + 0x134) & 2) != 0) break;
    uVar6 = (uint)*(byte *)((long)&png_pass_yinc + uVar5);
    uVar4 = ((uVar6 - 1) + *(int *)(param_1 + 0x1fc)) -
            (uint)*(byte *)((long)&png_pass_ystart + uVar5);
    *(uint *)(param_1 + 0x200) = uVar4 / uVar6;
  } while ((uVar4 < uVar6) || (uVar2 < uVar7));
  *(byte *)(param_1 + 0x265) = bVar3;
  return;
}



void png_push_process_row(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *__src;
  long in_FS_OFFSET;
  uint local_38 [2];
  ulong local_30;
  undefined4 local_28;
  long local_20;
  
  bVar2 = *(byte *)(param_1 + 0x26a);
  local_38[0] = *(uint *)(param_1 + 0x210);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = CONCAT31(CONCAT21(CONCAT11(bVar2,*(undefined1 *)(param_1 + 0x26b)),
                               *(undefined1 *)(param_1 + 0x268)),*(undefined1 *)(param_1 + 0x267));
  if (bVar2 < 8) {
    local_30 = (ulong)bVar2 * (ulong)local_38[0] + 7 >> 3;
  }
  else {
    local_30 = (ulong)(bVar2 >> 3) * (ulong)local_38[0];
  }
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
  if (*(int *)(param_1 + 0x134) != 0) {
    png_do_read_transformations(param_1,local_38);
  }
  if (*(byte *)(param_1 + 0x26f) == 0) {
    *(byte *)(param_1 + 0x26f) = local_28._3_1_;
    if (*(byte *)(param_1 + 0x26e) < local_28._3_1_) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"progressive row overflow");
    }
  }
  else if (*(byte *)(param_1 + 0x26f) != local_28._3_1_) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal progressive row size calculation error");
  }
  if ((*(char *)(param_1 + 0x264) == '\0') || ((*(uint *)(param_1 + 0x134) & 2) == 0)) {
    if (*(code **)(param_1 + 0x318) != (code *)0x0) {
      (**(code **)(param_1 + 0x318))
                (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),
                 *(undefined1 *)(param_1 + 0x265));
    }
    goto LAB_00100e49;
  }
  bVar2 = *(byte *)(param_1 + 0x265);
  if (5 < bVar2) {
switchD_00100eb1_default:
    if (*(code **)(param_1 + 0x318) != (code *)0x0) {
      (**(code **)(param_1 + 0x318))
                (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),bVar2);
    }
    png_read_push_finish_row(param_1);
    if (*(char *)(param_1 + 0x265) != '\x06') goto LAB_00100e51;
    goto LAB_00100dbf;
  }
  png_do_read_interlace(local_38,*(long *)(param_1 + 0x228) + 1);
  bVar2 = *(byte *)(param_1 + 0x265);
  switch(bVar2) {
  case 0:
    iVar3 = 8;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),0);
      }
      png_read_push_finish_row(param_1);
      cVar1 = *(char *)(param_1 + 0x265);
      iVar3 = iVar3 + -1;
    } while ((iVar3 != 0) && (cVar1 == '\0'));
    if (cVar1 == '\x02') {
      iVar3 = 4;
      do {
        if (*(code **)(param_1 + 0x318) != (code *)0x0) {
          (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),2);
        }
        png_read_push_finish_row(param_1);
        cVar1 = *(char *)(param_1 + 0x265);
        iVar3 = iVar3 + -1;
      } while ((iVar3 != 0) && (cVar1 == '\x02'));
    }
    if (cVar1 == '\x04') {
      if (4 < *(uint *)(param_1 + 0x1fc)) goto LAB_00100e51;
      iVar3 = 2;
      do {
        if (*(code **)(param_1 + 0x318) != (code *)0x0) {
          (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),4);
        }
        png_read_push_finish_row(param_1);
        cVar1 = *(char *)(param_1 + 0x265);
      } while ((iVar3 != 1) && (iVar3 = 1, cVar1 == '\x04'));
    }
    if ((cVar1 != '\x06') || (4 < *(uint *)(param_1 + 0x1fc))) goto LAB_00100e51;
    goto LAB_00100dbf;
  case 1:
    iVar3 = 8;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),1);
      }
      png_read_push_finish_row(param_1);
      iVar3 = iVar3 + -1;
    } while ((iVar3 != 0) && (*(char *)(param_1 + 0x265) == '\x01'));
    if (*(char *)(param_1 + 0x265) == '\x02') {
      iVar3 = 4;
      do {
        if (*(code **)(param_1 + 0x318) != (code *)0x0) {
          (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),2);
        }
        png_read_push_finish_row(param_1);
        iVar3 = iVar3 + -1;
      } while ((iVar3 != 0) && (*(char *)(param_1 + 0x265) == '\x02'));
    }
    goto LAB_00100e51;
  case 2:
    iVar3 = 4;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),2);
      }
      png_read_push_finish_row(param_1);
      cVar1 = *(char *)(param_1 + 0x265);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar3 = 4;
        goto LAB_0010121d;
      }
    } while (cVar1 == '\x02');
    goto LAB_001010d3;
  case 3:
    iVar3 = 4;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),3);
      }
      png_read_push_finish_row(param_1);
      iVar3 = iVar3 + -1;
    } while ((iVar3 != 0) && (*(char *)(param_1 + 0x265) == '\x03'));
    if (*(char *)(param_1 + 0x265) == '\x04') {
      iVar3 = 2;
      do {
        if (*(code **)(param_1 + 0x318) != (code *)0x0) {
          (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),4);
        }
        png_read_push_finish_row(param_1);
      } while ((iVar3 != 1) && (iVar3 = 1, *(char *)(param_1 + 0x265) == '\x04'));
    }
    goto LAB_00100e51;
  case 4:
    iVar3 = 2;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),4);
      }
      png_read_push_finish_row(param_1);
      cVar1 = *(char *)(param_1 + 0x265);
      if (iVar3 == 1) {
        iVar3 = 2;
        goto joined_r0x001011c7;
      }
      iVar3 = 1;
    } while (cVar1 == '\x04');
    break;
  case 5:
    iVar3 = 2;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))
                  (param_1,*(long *)(param_1 + 0x228) + 1,*(undefined4 *)(param_1 + 0x214),5);
      }
      png_read_push_finish_row(param_1);
      cVar1 = *(char *)(param_1 + 0x265);
    } while ((iVar3 != 1) && (iVar3 = 1, cVar1 == '\x05'));
    break;
  default:
    goto switchD_00100eb1_default;
  }
LAB_00100f05:
  if (cVar1 == '\x06') {
LAB_00100dbf:
    if (*(code **)(param_1 + 0x318) != (code *)0x0) {
      (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),6);
    }
LAB_00100e49:
    png_read_push_finish_row(param_1);
  }
LAB_00100e51:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
joined_r0x001011c7:
  if (cVar1 != '\x04') goto LAB_00100f05;
  if (*(code **)(param_1 + 0x318) != (code *)0x0) {
    (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),4);
  }
  png_read_push_finish_row(param_1);
  cVar1 = *(char *)(param_1 + 0x265);
  if (iVar3 == 1) goto LAB_00100f05;
  iVar3 = 1;
  goto joined_r0x001011c7;
  while( true ) {
    if (*(code **)(param_1 + 0x318) != (code *)0x0) {
      (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),2);
    }
    png_read_push_finish_row(param_1);
    cVar1 = *(char *)(param_1 + 0x265);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
LAB_0010121d:
    if (cVar1 != '\x02') break;
  }
LAB_001010d3:
  if (cVar1 == '\x04') {
    iVar3 = 2;
    do {
      if (*(code **)(param_1 + 0x318) != (code *)0x0) {
        (**(code **)(param_1 + 0x318))(param_1,0,*(undefined4 *)(param_1 + 0x214),4);
      }
      png_read_push_finish_row(param_1);
    } while ((iVar3 != 1) && (iVar3 = 1, *(char *)(param_1 + 0x265) == '\x04'));
  }
  goto LAB_00100e51;
}



void png_process_IDAT_data_part_0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  do {
    iVar3 = *(int *)(param_1 + 0x148);
    while( true ) {
      if (iVar3 == 0) {
        return;
      }
      if ((*(byte *)(param_1 + 0x130) & 8) != 0) {
        png_warning(param_1,"Extra compression data in IDAT");
        return;
      }
      if (*(int *)(param_1 + 0x160) == 0) {
        bVar1 = *(byte *)(param_1 + 0x26a);
        if (bVar1 < 8) {
          iVar3 = (int)((ulong)*(uint *)(param_1 + 0x210) * (ulong)bVar1 + 7 >> 3);
        }
        else {
          iVar3 = (uint)(bVar1 >> 3) * *(uint *)(param_1 + 0x210);
        }
        *(int *)(param_1 + 0x160) = iVar3 + 1;
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x228);
      }
      uVar2 = png_zlib_inflate(param_1,2);
      if (1 < uVar2) {
        *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 8;
        *(undefined4 *)(param_1 + 0x138) = 0;
        if ((*(uint *)(param_1 + 0x214) < *(uint *)(param_1 + 0x200)) &&
           (*(byte *)(param_1 + 0x265) < 7)) {
          if (uVar2 == 0xfffffffd) {
            png_benign_error(param_1,"IDAT: ADLER32 checksum mismatch");
            return;
          }
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Decompression error in IDAT");
        }
        png_warning(param_1,"Truncated compressed data in IDAT");
        return;
      }
      if (*(long *)(param_1 + 0x158) != *(long *)(param_1 + 0x228)) {
        if ((*(uint *)(param_1 + 0x200) <= *(uint *)(param_1 + 0x214)) ||
           (6 < *(byte *)(param_1 + 0x265))) {
          png_warning(param_1,"Extra compressed data in IDAT");
          *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 8;
          *(undefined4 *)(param_1 + 0x138) = 0;
          return;
        }
        if (*(int *)(param_1 + 0x160) == 0) {
          png_push_process_row(param_1);
        }
      }
      if (uVar2 != 1) break;
      iVar3 = *(int *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 8;
    }
  } while( true );
}



void png_process_IDAT_data(long param_1,long param_2,long param_3)

{
  if ((param_3 != 0) && (param_2 != 0)) {
    *(long *)(param_1 + 0x140) = param_2;
    *(int *)(param_1 + 0x148) = (int)param_3;
    png_process_IDAT_data_part_0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"No IDAT data (internal error)");
}



void png_push_read_IDAT(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x12d) & 1) == 0) {
    if (*(ulong *)(param_1 + 0x360) < 8) {
LAB_00101750:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_push_save_buffer(param_1);
        return;
      }
      goto LAB_00101781;
    }
    png_push_fill_buffer(param_1,local_28,4);
    uVar3 = png_get_uint_31(param_1,local_28);
    *(undefined4 *)(param_1 + 0x348) = uVar3;
    png_reset_crc(param_1);
    png_crc_read(param_1,&local_24,4);
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x100;
    *(uint *)(param_1 + 0x218) =
         local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 | local_24 << 0x18
    ;
    if (local_24 == 0x54414449) {
      uVar4 = *(uint *)(param_1 + 0x348);
      *(uint *)(param_1 + 0x248) = uVar4;
      goto LAB_001015f6;
    }
    *(undefined4 *)(param_1 + 0x370) = 1;
    if ((*(byte *)(param_1 + 0x130) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Not enough compressed data");
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x248);
LAB_001015f6:
    if (uVar4 == 0) {
LAB_001015fa:
      if (*(ulong *)(param_1 + 0x360) < 4) goto LAB_00101750;
      png_crc_finish(param_1,0);
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffeff | 8;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x350);
      if (uVar1 != 0) {
        uVar2 = (ulong)uVar4;
        if (uVar1 <= uVar4) {
          uVar4 = (uint)uVar1;
          uVar2 = uVar1;
        }
        png_calculate_crc(param_1,*(undefined8 *)(param_1 + 0x328),uVar2);
        if (*(long *)(param_1 + 0x328) == 0) goto LAB_00101786;
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x328);
        *(int *)(param_1 + 0x148) = (int)uVar2;
        png_process_IDAT_data_part_0(param_1);
        *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar2;
        *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x350) - uVar2;
        uVar4 = *(int *)(param_1 + 0x248) - uVar4;
        *(long *)(param_1 + 0x328) = *(long *)(param_1 + 0x328) + uVar2;
        *(uint *)(param_1 + 0x248) = uVar4;
        if (uVar4 == 0) goto LAB_001015fa;
      }
      uVar1 = *(ulong *)(param_1 + 0x368);
      if (uVar1 != 0) {
        uVar2 = (ulong)uVar4;
        if (uVar1 <= uVar4) {
          uVar4 = (uint)uVar1;
          uVar2 = uVar1;
        }
        png_calculate_crc(param_1,*(undefined8 *)(param_1 + 0x338),uVar2);
        if (*(long *)(param_1 + 0x338) == 0) {
LAB_00101786:
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"No IDAT data (internal error)");
        }
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x338);
        *(int *)(param_1 + 0x148) = (int)uVar2;
        png_process_IDAT_data_part_0(param_1);
        *(long *)(param_1 + 0x338) = *(long *)(param_1 + 0x338) + uVar2;
        iVar5 = *(int *)(param_1 + 0x248) - uVar4;
        *(int *)(param_1 + 0x248) = iVar5;
        *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar2;
        *(ulong *)(param_1 + 0x368) = *(long *)(param_1 + 0x368) - uVar2;
        if (iVar5 == 0) goto LAB_001015fa;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101781:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_process_some_data(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x370);
    if (iVar1 == 1) {
      png_push_read_chunk();
      return;
    }
    if (iVar1 == 2) {
      png_push_read_IDAT();
      return;
    }
    if (iVar1 == 0) {
      png_push_read_sig();
      return;
    }
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  return;
}



void png_process_data(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    *(long *)(param_1 + 0x368) = param_4;
    param_4 = param_4 + *(long *)(param_1 + 0x350);
    *(long *)(param_1 + 0x360) = param_4;
    *(undefined8 *)(param_1 + 0x338) = param_3;
    *(undefined8 *)(param_1 + 0x340) = param_3;
    while (param_4 != 0) {
      iVar1 = *(int *)(param_1 + 0x370);
      if (iVar1 == 1) {
        png_push_read_chunk(param_1,param_2);
      }
      else if (iVar1 == 2) {
        png_push_read_IDAT(param_1);
      }
      else {
        if (iVar1 != 0) {
          *(undefined8 *)(param_1 + 0x360) = 0;
          return;
        }
        png_push_read_sig(param_1,param_2);
      }
      param_4 = *(long *)(param_1 + 0x360);
    }
  }
  return;
}



void png_push_have_info(long param_1)

{
  if (*(code **)(param_1 + 0x310) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001018d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x310))();
    return;
  }
  return;
}



void png_push_have_end(long param_1)

{
  if (*(code **)(param_1 + 800) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001018f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 800))();
    return;
  }
  return;
}



void png_push_have_row(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x318) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010191d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x318))
              (param_1,param_2,*(undefined4 *)(param_1 + 0x214),*(undefined1 *)(param_1 + 0x265));
    return;
  }
  return;
}



void png_progressive_combine_row(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (param_1 != 0)) {
    png_combine_row(param_1,param_2,1);
    return;
  }
  return;
}



void png_set_progressive_read_fn
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x310) = param_3;
    *(undefined8 *)(param_1 + 0x318) = param_4;
    *(undefined8 *)(param_1 + 800) = param_5;
    png_set_read_fn(param_1,param_2,0x100000);
    return;
  }
  return;
}



undefined8 png_get_progressive_ptr(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x108);
  }
  return 0;
}


