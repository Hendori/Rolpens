
void ov_clear_part_0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  byte bVar6;
  
  bVar6 = 0;
  vorbis_block_clear(param_1 + 0x5a);
  vorbis_dsp_clear(param_1 + 0x48);
  ogg_stream_clear(param_1 + 0x15);
  __ptr = (void *)param_1[0xd];
  if ((__ptr != (void *)0x0) && ((int)param_1[8] != 0)) {
    if (0 < (int)param_1[8]) {
      lVar5 = 0;
      lVar2 = 0;
      do {
        lVar4 = (long)__ptr + lVar5;
        lVar5 = lVar5 + 0x38;
        vorbis_info_clear(lVar4);
        lVar4 = lVar2 + 1;
        vorbis_comment_clear(lVar2 * 0x20 + param_1[0xe]);
        __ptr = (void *)param_1[0xd];
        lVar2 = lVar4;
      } while ((int)lVar4 < (int)param_1[8]);
    }
    free(__ptr);
    free((void *)param_1[0xe]);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    free((void *)param_1[10]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    free((void *)param_1[0xb]);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    free((void *)param_1[9]);
  }
  ogg_sync_clear(param_1 + 4);
  if ((*param_1 != 0) && ((code *)param_1[0x74] != (code *)0x0)) {
    (*(code *)param_1[0x74])();
  }
  *param_1 = 0;
  param_1[0x75] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x3b0U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar6 * -2 + 1;
  }
  return;
}



undefined8 ov_clear(long param_1)

{
  if (param_1 != 0) {
    ov_clear_part_0();
    return 0;
  }
  return 0;
}



undefined8 ov_halfrate_p(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = vorbis_synthesis_halfrate_p();
    return uVar1;
  }
  return 0xffffff7d;
}



void ov_test_callbacks(void)

{
  _ov_open1();
  return;
}



void ov_test(void)

{
  _ov_open1();
  return;
}



long ov_streams(long param_1)

{
  return (long)*(int *)(param_1 + 0x40);
}



long ov_seekable(long param_1)

{
  return (long)*(int *)(param_1 + 8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ov_bitrate_instant(long param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(param_1 + 0x80) < 2) {
    return -0x83;
  }
  if (*(double *)(param_1 + 0xa0) != 0.0) {
    dVar2 = (double)*(long *)(*(long *)(param_1 + 0x68) + (long)iVar1 * 0x38 + 8) *
            (*(double *)(param_1 + 0x98) / *(double *)(param_1 + 0xa0)) + __LC2;
    *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
    return (long)dVar2;
  }
  return -1;
}



undefined8 ov_serialnumber(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  do {
    do {
      iVar2 = param_2;
      param_2 = uVar1 - 1;
    } while ((int)uVar1 <= iVar2);
    do {
      if (*(int *)(param_1 + 8) != 0) {
        if (-1 < iVar2) {
          return *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)iVar2 * 8);
        }
LAB_00102094:
        return *(undefined8 *)(param_1 + 0x88);
      }
      if (iVar2 < 0) goto LAB_00102094;
      iVar2 = -1;
    } while (uVar1 < 0x80000000);
  } while( true );
}



long ov_raw_total(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((1 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 8) != 0)) {
    iVar3 = *(int *)(param_1 + 0x40);
    if (param_2 < iVar3) {
      if (-1 < param_2) {
        return *(long *)(*(long *)(param_1 + 0x48) + 8 + (long)param_2 * 8) -
               *(long *)(*(long *)(param_1 + 0x48) + (long)param_2 * 8);
      }
      lVar4 = 0;
      if (iVar3 < 1) {
        return 0;
      }
      plVar6 = *(long **)(param_1 + 0x48);
      plVar2 = plVar6 + iVar3;
      lVar5 = *plVar6;
      do {
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
        lVar4 = lVar4 + (*plVar1 - lVar5);
        lVar5 = *plVar1;
      } while (plVar2 != plVar6);
      return lVar4;
    }
  }
  return -0x83;
}



long ov_pcm_total(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((1 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_2 < iVar1) {
      if (-1 < param_2) {
        return *(long *)(*(long *)(param_1 + 0x60) + 8 + (long)(param_2 * 2) * 8);
      }
      lVar3 = 0;
      if (iVar1 < 1) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x60);
      lVar4 = (long)iVar1 * 0x10 + lVar2;
      do {
        lVar3 = lVar3 + *(long *)(lVar2 + 8);
        lVar2 = lVar2 + 0x10;
      } while (lVar4 != lVar2);
      return lVar3;
    }
  }
  return -0x83;
}



undefined4 ov_raw_seek(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  int local_244;
  long local_240;
  int local_238;
  int local_22c;
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  long local_1e8;
  undefined1 local_1d8 [408];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar9 = 0xffffff76;
      goto LAB_001024ad;
    }
    if ((-1 < param_2) && (param_2 <= *(long *)(param_1 + 0x18))) {
      if (*(int *)(param_1 + 0x80) != 2) {
        if ((param_2 < *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x90) * 8)) ||
           (*(long *)(*(long *)(param_1 + 0x48) + 8 + (long)*(int *)(param_1 + 0x90) * 8) <= param_2
           )) {
          vorbis_dsp_clear(param_1 + 0x240);
          vorbis_block_clear(param_1 + 0x2d0);
          *(undefined4 *)(param_1 + 0x80) = 2;
        }
      }
      local_240 = param_1 + 0x240;
      *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
      lVar6 = param_1 + 0xa8;
      ogg_stream_reset_serialno(lVar6,*(undefined4 *)(param_1 + 0x88));
      vorbis_synthesis_restart(local_240);
      iVar3 = _seek_helper(param_1,param_2);
      if (iVar3 == 0) {
        ogg_stream_init(local_1d8,*(undefined4 *)(param_1 + 0x88));
        ogg_stream_reset(local_1d8);
        bVar2 = false;
        local_244 = 0;
        local_22c = 0;
        local_238 = 0;
LAB_001022c6:
        if (2 < *(int *)(param_1 + 0x80)) goto LAB_001023c2;
        while (local_238 == 0) {
LAB_001022e2:
          do {
            lVar5 = _get_next_page(param_1,local_228,0xffffffffffffffff);
            if (lVar5 < 0) {
              local_1e8 = ov_pcm_total(param_1,0xffffffff);
              goto LAB_00102496;
            }
            if (*(int *)(param_1 + 0x80) < 3) {
LAB_0010230d:
              iVar8 = 0;
              iVar4 = ogg_page_serialno(local_228);
              iVar3 = *(int *)(param_1 + 0x40);
              if (iVar3 < 1) {
LAB_00102342:
                if (iVar3 != iVar8) {
                  *(int *)(param_1 + 0x90) = iVar8;
                  *(long *)(param_1 + 0x88) = (long)iVar4;
                  ogg_stream_reset_serialno(lVar6);
                  ogg_stream_reset_serialno(local_1d8,iVar4);
                  *(undefined4 *)(param_1 + 0x80) = 3;
                  bVar2 = lVar5 <= *(long *)(*(long *)(param_1 + 0x50) + (long)iVar8 * 8);
                  goto LAB_00102390;
                }
              }
              else {
                plVar7 = *(long **)(param_1 + 0x58);
                iVar8 = 0;
                do {
                  if (*plVar7 == (long)iVar4) goto LAB_00102342;
                  iVar8 = iVar8 + 1;
                  plVar7 = plVar7 + 1;
                } while (iVar3 != iVar8);
              }
            }
            else {
              lVar1 = *(long *)(param_1 + 0x88);
              iVar3 = ogg_page_serialno(local_228);
              if ((lVar1 == iVar3) || (iVar3 = ogg_page_bos(local_228), iVar3 == 0)) {
                iVar3 = *(int *)(param_1 + 0x80);
              }
              else {
                vorbis_dsp_clear(local_240);
                vorbis_block_clear(param_1 + 0x2d0);
                *(undefined4 *)(param_1 + 0x80) = 2;
                ogg_stream_clear(local_1d8);
                iVar3 = *(int *)(param_1 + 0x80);
              }
              if (iVar3 < 3) goto LAB_0010230d;
LAB_00102390:
              ogg_stream_pagein(lVar6,local_228);
              ogg_stream_pagein(local_1d8,local_228);
              local_244 = ogg_page_eos(local_228);
            }
          } while (*(int *)(param_1 + 0x80) < 3);
LAB_001023c2:
          iVar3 = ogg_stream_packetout(local_1d8,local_208);
          if (0 < iVar3) {
            lVar5 = *(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38;
            if (*(long *)(lVar5 + 0x30) != 0) {
              iVar3 = vorbis_packet_blocksize(lVar5,local_208);
              if (iVar3 < 0) {
                ogg_stream_packetout(lVar6,0);
                iVar3 = 0;
              }
              else if ((local_244 == 0) || (bVar2)) {
                if (local_238 != 0) {
                  local_22c = local_22c + (local_238 + iVar3 >> 2);
                }
              }
              else {
                ogg_stream_packetout(lVar6,0);
              }
              local_238 = iVar3;
              if (local_1e8 != -1) {
                lVar6 = *(long *)(param_1 + 0x60);
                lVar5 = (long)(*(int *)(param_1 + 0x90) * 2);
                local_1e8 = local_1e8 - *(long *)(lVar6 + lVar5 * 8);
                if (local_1e8 < 0) {
                  local_1e8 = 0;
                }
                if (0 < *(int *)(param_1 + 0x90)) {
                  lVar5 = lVar5 * 8 + lVar6;
                  do {
                    local_1e8 = local_1e8 + *(long *)(lVar6 + 8);
                    lVar6 = lVar6 + 0x10;
                  } while (lVar6 != lVar5);
                }
                local_1e8 = local_1e8 - local_22c;
                if (local_1e8 < 0) {
                  local_1e8 = 0;
                }
                goto LAB_00102496;
              }
              goto LAB_001022c6;
            }
            ogg_stream_packetout(lVar6,0);
            if (local_238 != 0) break;
            goto LAB_001022e2;
          }
        }
        local_1e8 = -1;
LAB_00102496:
        *(long *)(param_1 + 0x78) = local_1e8;
        ogg_stream_clear(local_1d8);
        *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
        uVar9 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
        uVar9 = 0xffffff77;
        vorbis_dsp_clear(local_240);
        vorbis_block_clear(param_1 + 0x2d0);
        *(undefined4 *)(param_1 + 0x80) = 2;
      }
      goto LAB_001024ad;
    }
  }
  uVar9 = 0xffffff7d;
LAB_001024ad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



ulong ov_open_callbacks(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = _ov_open1();
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2 + 0x10) == 1) {
      *(undefined4 *)(param_2 + 0x10) = 2;
      if (*(uint *)(param_2 + 1) == 0) {
        *(undefined4 *)(param_2 + 0x10) = 3;
        return (ulong)*(uint *)(param_2 + 1);
      }
      uVar1 = _open_seekable2_constprop_0(param_2);
      if ((int)uVar1 != 0) {
        *param_2 = 0;
        ov_clear_part_0(param_2);
        uVar1 = uVar1 & 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffff7d;
    }
  }
  return uVar1;
}



int ov_fopen(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  FILE *__stream;
  
  puVar3 = PTR_ftell_00107010;
  puVar2 = PTR_fread_00107008;
  puVar1 = _GLOBAL_OFFSET_TABLE_;
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = ov_open_callbacks(__stream,param_2,0,0,param_5,param_6,puVar2,_fseek64_wrap,puVar1,
                              puVar3);
    if (iVar4 != 0) {
      fclose(__stream);
      return iVar4;
    }
  }
  return iVar4;
}



ulong ov_test_open(undefined8 *param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar1 = (ulong)*(uint *)(param_1 + 1);
    *(undefined4 *)(param_1 + 0x10) = 2;
    if (*(uint *)(param_1 + 1) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    else {
      uVar1 = _open_seekable2_constprop_0();
      if ((int)uVar1 != 0) {
        *param_1 = 0;
        ov_clear_part_0(param_1);
        uVar1 = uVar1 & 0xffffffff;
      }
    }
    return uVar1;
  }
  return 0xffffff7d;
}



ulong ov_open(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = _ov_open1();
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2 + 0x10) == 1) {
      *(undefined4 *)(param_2 + 0x10) = 2;
      if (*(uint *)(param_2 + 1) == 0) {
        *(undefined4 *)(param_2 + 0x10) = 3;
        return (ulong)*(uint *)(param_2 + 1);
      }
      uVar1 = _open_seekable2_constprop_0(param_2);
      if ((int)uVar1 != 0) {
        *param_2 = 0;
        ov_clear_part_0(param_2);
        uVar1 = uVar1 & 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffff7d;
    }
  }
  return uVar1;
}



int ov_pcm_seek_part_0(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  long local_58;
  long local_40;
  
  lVar6 = param_1 + 0xa8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
LAB_00102aa0:
  do {
    iVar2 = ogg_stream_packetpeek(lVar6,local_78);
    iVar4 = iVar3;
    while (iVar3 = iVar4, iVar2 < 1) {
      if (((iVar2 < 0) && (iVar2 != -3)) ||
         (lVar5 = _get_next_page(param_1,local_98,0xffffffffffffffff), lVar5 < 0))
      goto LAB_00102d00;
      iVar2 = ogg_page_bos(local_98);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x80) < 3) goto LAB_00102bea;
      }
      else {
        vorbis_dsp_clear(param_1 + 0x240);
        vorbis_block_clear(param_1 + 0x2d0);
        *(undefined4 *)(param_1 + 0x80) = 2;
LAB_00102bea:
        iVar4 = ogg_page_serialno(local_98);
        iVar2 = *(int *)(param_1 + 0x40);
        if (iVar2 < 1) {
          iVar8 = 0;
        }
        else {
          plVar7 = *(long **)(param_1 + 0x58);
          iVar8 = 0;
          while ((long)iVar4 != *plVar7) {
            iVar8 = iVar8 + 1;
            plVar7 = plVar7 + 1;
            if (iVar8 == iVar2) goto LAB_00102aa0;
          }
        }
        if (iVar2 == iVar8) goto LAB_00102aa0;
        *(int *)(param_1 + 0x90) = iVar8;
        *(undefined4 *)(param_1 + 0x80) = 3;
        iVar3 = ogg_page_serialno(local_98);
        *(long *)(param_1 + 0x88) = (long)iVar3;
        ogg_stream_reset_serialno(lVar6,iVar4);
        iVar4 = _make_decode_ready(param_1);
        if (iVar4 != 0) goto LAB_00102c70;
      }
      ogg_stream_pagein(lVar6,local_98);
      iVar2 = ogg_stream_packetpeek(lVar6,local_78);
    }
    iVar3 = vorbis_packet_blocksize
                      (*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38,local_78);
    if (-1 < iVar3) break;
    ogg_stream_packetout(lVar6,0);
    iVar3 = iVar4;
  } while( true );
  lVar5 = *(long *)(param_1 + 0x78);
  if (iVar4 != 0) {
    lVar5 = lVar5 + (iVar4 + iVar3 >> 2);
    *(long *)(param_1 + 0x78) = lVar5;
  }
  iVar2 = vorbis_info_blocksize(*(undefined8 *)(param_1 + 0x68),1);
  if (param_2 <= (iVar2 + iVar3 >> 2) + lVar5) {
LAB_00102d00:
    *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
    bVar1 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
    lVar6 = *(long *)(param_1 + 0x78);
    while (lVar6 < (param_2 >> (bVar1 & 0x3f)) << (bVar1 & 0x3f)) {
      lVar9 = param_2 - lVar6 >> (bVar1 & 0x3f);
      iVar3 = vorbis_synthesis_pcmout(param_1 + 0x240,0);
      lVar5 = (long)iVar3;
      if (lVar9 < iVar3) {
        lVar5 = lVar9;
      }
      vorbis_synthesis_read(param_1 + 0x240);
      lVar6 = (lVar5 << (bVar1 & 0x3f)) + *(long *)(param_1 + 0x78);
      *(long *)(param_1 + 0x78) = lVar6;
      if (lVar5 < lVar9) {
        iVar3 = _fetch_and_process_packet_constprop_0(param_1);
        if (iVar3 < 1) {
          lVar6 = ov_pcm_total(param_1);
          *(long *)(param_1 + 0x78) = lVar6;
        }
        else {
          lVar6 = *(long *)(param_1 + 0x78);
        }
      }
    }
    iVar4 = 0;
LAB_00102c70:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar4;
  }
  ogg_stream_packetout(lVar6,0);
  vorbis_synthesis_trackonly(param_1 + 0x2d0,local_78);
  vorbis_synthesis_blockin(param_1 + 0x240,param_1 + 0x2d0);
  if (-1 < local_58) {
    lVar5 = *(long *)(param_1 + 0x60);
    lVar10 = (long)(*(int *)(param_1 + 0x90) * 2);
    lVar9 = local_58 - *(long *)(lVar5 + lVar10 * 8);
    if (lVar9 < 0) {
      lVar9 = 0;
    }
    *(long *)(param_1 + 0x78) = lVar9;
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar10 = lVar10 * 8 + lVar5;
      do {
        lVar9 = lVar9 + *(long *)(lVar5 + 8);
        lVar5 = lVar5 + 0x10;
        *(long *)(param_1 + 0x78) = lVar9;
      } while (lVar10 != lVar5);
    }
  }
  goto LAB_00102aa0;
}



int ov_pcm_seek_page(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x80) < 2) {
LAB_00103380:
    iVar4 = -0x83;
    goto LAB_00103344;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = -0x8a;
    goto LAB_00103344;
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar9 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    lVar16 = -0x83;
LAB_00103372:
    if ((param_2 < 0) || (lVar16 < param_2)) goto LAB_00103380;
    iVar15 = uVar2 - 1;
    lVar6 = *(long *)(param_1 + 0x60);
    lVar7 = (long)(iVar15 * 2);
    local_c8 = *(long *)(lVar6 + 8 + lVar7 * 8);
  }
  else {
    if (uVar2 == 0) {
      lVar16 = 0;
      goto LAB_00103372;
    }
    lVar16 = 0;
    uVar17 = 0;
    do {
      uVar14 = uVar17 & 0xffffffff;
      uVar17 = (ulong)((int)uVar17 + 1);
      lVar6 = ov_pcm_total(param_1,uVar14);
      lVar16 = lVar16 + lVar6;
    } while ((int)uVar9 != (int)uVar17);
    if ((lVar16 < param_2) || (param_2 < 0)) goto LAB_00103380;
    iVar15 = (int)uVar9 + -1;
    lVar6 = *(long *)(param_1 + 0x60);
    lVar7 = (long)(iVar15 * 2);
    local_c8 = *(long *)(lVar6 + 8 + lVar7 * 8);
    lVar16 = lVar16 - local_c8;
    if (param_2 < lVar16) {
      lVar1 = (long)(iVar15 * 2 + -2);
      do {
        lVar7 = lVar1;
        iVar15 = iVar15 + -1;
        local_c8 = *(long *)(lVar6 + 8 + lVar7 * 8);
        if (iVar15 == -1) break;
        lVar16 = lVar16 - local_c8;
        lVar1 = lVar7 + -2;
      } while (param_2 < lVar16);
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x48) + (long)(iVar15 + 1) * 8);
  lVar13 = (long)(iVar15 + 1) * 8;
  lVar1 = lVar13 + -8;
  lVar12 = *(long *)(*(long *)(param_1 + 0x50) + -8 + lVar13);
  local_d8 = *(long *)(lVar6 + lVar7 * 8);
  local_c8 = local_d8 + local_c8;
  lVar6 = (param_2 - lVar16) + local_d8;
  if (lVar10 == lVar12) {
    iVar4 = _seek_helper(param_1,lVar10);
    if (iVar4 == 0) {
      lVar8 = _get_next_page(param_1,local_b8,1);
      iVar4 = (int)lVar8;
      if (-1 < lVar8) {
LAB_001033e4:
        iVar4 = (int)lVar8;
        if (*(long *)(*(long *)(param_1 + 0x50) + -8 + lVar13) == lVar12) {
          iVar5 = ogg_page_serialno(local_b8);
          if ((long)iVar5 == *(long *)(*(long *)(param_1 + 0x58) + -8 + lVar13)) {
            *(long *)(param_1 + 0x78) = lVar16;
            if (*(int *)(param_1 + 0x90) == iVar15) {
              vorbis_synthesis_restart(param_1 + 0x240);
              uVar9 = *(ulong *)(param_1 + 0x88);
            }
            else {
              vorbis_dsp_clear();
              vorbis_block_clear(param_1 + 0x2d0);
              uVar9 = *(ulong *)(*(long *)(param_1 + 0x58) + -8 + lVar13);
              *(undefined4 *)(param_1 + 0x80) = 3;
              *(int *)(param_1 + 0x90) = iVar15;
              *(ulong *)(param_1 + 0x88) = uVar9;
            }
            ogg_stream_reset_serialno(param_1 + 0xa8,uVar9 & 0xffffffff);
            ogg_stream_pagein(param_1 + 0xa8,local_b8);
            goto LAB_001034d7;
          }
        }
      }
    }
  }
  else if (lVar12 < lVar10) {
    bVar18 = false;
    local_d0 = -1;
    do {
      lVar7 = lVar12;
      if ((0xffff < lVar10 - lVar12) &&
         (lVar7 = lVar12 + -0x10000 +
                  (long)(((double)(lVar6 - local_d8) * (double)(lVar10 - lVar12)) /
                        (double)(local_c8 - local_d8)), lVar7 <= lVar12 + 0xffff)) {
        lVar7 = lVar12;
      }
      iVar4 = _seek_helper(param_1,lVar7);
      if (iVar4 != 0) goto LAB_00103315;
      if (lVar10 <= lVar12) {
        lVar8 = 0;
LAB_00103018:
        iVar4 = (int)lVar8;
        if (local_d0 != -1) goto LAB_00103024;
        if (!bVar18) goto LAB_00103315;
        goto LAB_001033e4;
      }
LAB_00102f98:
      lVar8 = _get_next_page(param_1,local_b8,lVar10 - *(long *)(param_1 + 0x10));
      if (lVar8 == -0x80) {
        iVar4 = -0x80;
        goto LAB_00103315;
      }
      if (lVar8 < 0) {
        if (lVar7 <= lVar12 + 1) goto LAB_00103018;
        if (lVar7 == 0) {
          iVar4 = (int)lVar8;
          goto LAB_00103315;
        }
        lVar7 = lVar7 + -0x10000;
        if (lVar7 <= lVar12) {
          lVar7 = lVar12 + 1;
        }
        iVar4 = _seek_helper(param_1,lVar7);
        if (iVar4 != 0) goto LAB_00103315;
LAB_00102ff3:
        lVar8 = 0;
        goto LAB_00102ff5;
      }
      iVar4 = ogg_page_serialno(local_b8);
      if (((long)iVar4 != *(long *)(*(long *)(param_1 + 0x58) + lVar1)) ||
         (lVar11 = ogg_page_granulepos(local_b8), lVar11 == -1)) {
LAB_00103248:
        bVar18 = true;
LAB_00102ff5:
        if (lVar10 <= lVar12) goto LAB_00103018;
        goto LAB_00102f98;
      }
      if (lVar11 < lVar6) {
        lVar12 = *(long *)(param_1 + 0x10);
        lVar7 = lVar12;
        local_d8 = lVar11;
        local_d0 = lVar8;
        lVar3 = local_c8;
        if (0xac44 < lVar6 - lVar11) goto LAB_0010354e;
        goto LAB_00103248;
      }
      if (lVar7 <= lVar12 + 1) {
        bVar18 = true;
        goto LAB_00103018;
      }
      bVar18 = *(long *)(param_1 + 0x10) == lVar10;
      lVar10 = lVar7;
      lVar3 = lVar11;
      if (bVar18) {
        lVar7 = lVar7 + -0x10000;
        if (lVar7 <= lVar12) {
          lVar7 = lVar12 + 1;
        }
        iVar4 = _seek_helper(param_1,lVar7);
        if (iVar4 == 0) {
          bVar18 = true;
          lVar10 = lVar8;
          goto LAB_00102ff3;
        }
        goto LAB_00103315;
      }
LAB_0010354e:
      local_c8 = lVar3;
      bVar18 = true;
    } while (lVar12 < lVar10);
    if (local_d0 == -1) goto LAB_001033e4;
LAB_00103024:
    iVar4 = _seek_helper(param_1,local_d0);
    *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
    if (iVar4 == 0) {
      lVar6 = _get_next_page(param_1,local_98,0xffffffffffffffff);
      iVar4 = (int)lVar6;
      if (-1 < lVar6) {
        if (*(int *)(param_1 + 0x90) == iVar15) {
          vorbis_synthesis_restart(param_1 + 0x240);
          uVar9 = *(ulong *)(param_1 + 0x88);
        }
        else {
          vorbis_dsp_clear();
          vorbis_block_clear(param_1 + 0x2d0);
          uVar9 = *(ulong *)(*(long *)(param_1 + 0x58) + -8 + lVar13);
          *(undefined4 *)(param_1 + 0x80) = 3;
          *(int *)(param_1 + 0x90) = iVar15;
          *(ulong *)(param_1 + 0x88) = uVar9;
        }
        lVar6 = param_1 + 0xa8;
        ogg_stream_reset_serialno(lVar6,uVar9 & 0xffffffff);
        ogg_stream_pagein(lVar6,local_98);
        do {
          iVar4 = ogg_stream_packetpeek(lVar6,local_78);
          lVar7 = (long)iVar4;
          if (((long)iVar4 == 0) &&
             (lVar7 = local_d0, lVar13 = local_d0,
             *(long *)(*(long *)(param_1 + 0x50) + lVar1) < local_d0)) {
LAB_00103178:
            do {
              lVar7 = lVar7 + -0x10000;
              if (lVar7 < 0) {
                lVar7 = 0;
              }
              iVar4 = _seek_helper(param_1,lVar7);
              lVar10 = (long)iVar4;
              if (lVar10 == 0) {
                lVar10 = -1;
                do {
                  lVar12 = lVar10;
                  if (lVar13 <= *(long *)(param_1 + 0x10)) break;
                  local_98 = (undefined1  [16])0x0;
                  local_88 = (undefined1  [16])0x0;
                  lVar10 = _get_next_page(param_1,local_98,lVar13 - *(long *)(param_1 + 0x10));
                  if (lVar10 == -0x80) {
                    iVar4 = -0x80;
                    goto LAB_00103315;
                  }
                } while (-1 < lVar10);
                if (lVar12 == -1) goto LAB_00103178;
                if (local_98._8_8_ == 0) {
                  iVar4 = _seek_helper(param_1,lVar12);
                  lVar10 = (long)iVar4;
                  if (lVar10 != 0) goto LAB_001035e4;
                  lVar7 = _get_next_page(param_1,local_98,0x10000);
                  if (lVar7 < 0) {
                    iVar4 = -0x81;
                    goto LAB_00103315;
                  }
                }
              }
              else {
LAB_001035e4:
                lVar12 = lVar10;
                if (lVar10 < 0) {
                  iVar4 = (int)lVar10;
                  goto LAB_00103315;
                }
              }
              iVar4 = ogg_page_serialno(local_98);
              if (((long)iVar4 == *(long *)(param_1 + 0x88)) &&
                 ((lVar7 = ogg_page_granulepos(local_98), -1 < lVar7 ||
                  (iVar4 = ogg_page_continued(local_98), iVar4 == 0)))) {
                iVar4 = ov_raw_seek(param_1,lVar12);
                goto LAB_00103344;
              }
              lVar7 = lVar12;
              lVar13 = lVar12;
            } while (*(long *)(*(long *)(param_1 + 0x50) + lVar1) < lVar12);
          }
          else if (lVar7 < 0) {
            iVar4 = -0x88;
            break;
          }
          if (local_58 != -1) goto LAB_0010366a;
          ogg_stream_packetout(lVar6,0);
        } while( true );
      }
    }
  }
  else {
    iVar4 = 0;
  }
  goto LAB_00103315;
LAB_0010366a:
  local_58 = local_58 -
             *(long *)(*(long *)(param_1 + 0x60) + (long)(*(int *)(param_1 + 0x90) * 2) * 8);
  if (local_58 < 0) {
    local_58 = 0;
  }
  *(long *)(param_1 + 0x78) = local_58 + lVar16;
LAB_001034d7:
  iVar4 = -0x81;
  if ((*(long *)(param_1 + 0x78) <= param_2) &&
     (iVar4 = -0x81, lVar16 = ov_pcm_total(param_1,0xffffffff), param_2 <= lVar16)) {
    iVar4 = 0;
    *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
    goto LAB_00103344;
  }
LAB_00103315:
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  vorbis_dsp_clear(param_1 + 0x240);
  vorbis_block_clear(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x80) = 2;
LAB_00103344:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void ov_pcm_seek(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ov_pcm_seek_page();
  if (-1 < iVar1) {
    iVar1 = _make_decode_ready(param_1);
    if (iVar1 == 0) {
      ov_pcm_seek_part_0(param_1,param_2);
      return;
    }
  }
  return;
}



undefined8 ov_time_seek_page(double param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  if (1 < *(int *)(param_2 + 0x80)) {
    if (*(int *)(param_2 + 8) == 0) {
      return 0xffffff76;
    }
    if (0.0 <= param_1) {
      iVar1 = *(int *)(param_2 + 0x40);
      if (iVar1 < 1) {
        dVar7 = 0.0;
        lVar6 = 0;
        iVar2 = 0;
LAB_0010378a:
        if (iVar1 != iVar2) {
          uVar3 = ov_pcm_seek_page(param_2,(long)((param_1 - dVar7) *
                                                  (double)*(long *)((long)iVar2 * 0x38 +
                                                                    *(long *)(param_2 + 0x68) + 8) +
                                                 (double)lVar6));
          return uVar3;
        }
      }
      else {
        plVar4 = (long *)(*(long *)(param_2 + 0x60) + 8);
        lVar6 = 0;
        plVar5 = (long *)(*(long *)(param_2 + 0x68) + 8);
        iVar2 = 0;
        dVar7 = 0.0;
        do {
          dVar8 = dVar7 + (double)*plVar4 / (double)*plVar5;
          if (param_1 < dVar8) goto LAB_0010378a;
          iVar2 = iVar2 + 1;
          lVar6 = lVar6 + *plVar4;
          plVar4 = plVar4 + 2;
          plVar5 = plVar5 + 7;
          dVar7 = dVar8;
        } while (iVar2 != iVar1);
      }
    }
  }
  return 0xffffff7d;
}



undefined8 ov_time_seek(double param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  if (*(int *)(param_2 + 0x80) < 2) {
    return 0xffffff7d;
  }
  if (*(int *)(param_2 + 8) == 0) {
    uVar3 = 0xffffff76;
  }
  else {
    if (0.0 <= param_1) {
      iVar1 = *(int *)(param_2 + 0x40);
      if (iVar1 < 1) {
        dVar7 = 0.0;
        lVar6 = 0;
        iVar2 = 0;
LAB_0010388e:
        if (iVar1 != iVar2) {
          lVar6 = (long)((param_1 - dVar7) *
                         (double)*(long *)((long)iVar2 * 0x38 + *(long *)(param_2 + 0x68) + 8) +
                        (double)lVar6);
          uVar3 = ov_pcm_seek_page(param_2,lVar6);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          uVar3 = _make_decode_ready(param_2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = ov_pcm_seek_part_0(param_2,lVar6);
          return uVar3;
        }
      }
      else {
        plVar4 = (long *)(*(long *)(param_2 + 0x60) + 8);
        lVar6 = 0;
        plVar5 = (long *)(*(long *)(param_2 + 0x68) + 8);
        iVar2 = 0;
        dVar7 = 0.0;
        do {
          dVar8 = dVar7 + (double)*plVar4 / (double)*plVar5;
          if (param_1 < dVar8) goto LAB_0010388e;
          iVar2 = iVar2 + 1;
          lVar6 = lVar6 + *plVar4;
          plVar4 = plVar4 + 2;
          plVar5 = plVar5 + 7;
          dVar7 = dVar8;
        } while (iVar2 != iVar1);
      }
    }
    uVar3 = 0xffffff7d;
  }
  return uVar3;
}



undefined8 ov_halfrate(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0xffffff7d;
  }
  if (3 < *(int *)(param_1 + 0x80)) {
    vorbis_dsp_clear(param_1 + 0x240);
    vorbis_block_clear(param_1 + 0x2d0);
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = 3;
    if (-1 < lVar2) {
      *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
      iVar3 = ov_pcm_seek_page(param_1,lVar2);
      if ((-1 < iVar3) && (iVar3 = _make_decode_ready(param_1), iVar3 == 0)) {
        ov_pcm_seek_part_0(param_1,lVar2);
      }
    }
  }
  lVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar1 = vorbis_synthesis_halfrate(*(long *)(param_1 + 0x68) + lVar2,param_2);
      if (iVar1 != 0) {
        if (param_2 != 0) {
          ov_halfrate(param_1,0);
        }
        return 0xffffff7d;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return 0;
}



double ov_time_total(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    return _LC5;
  }
  dVar4 = _LC5;
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(param_1 + 0x40), param_2 < iVar1)) {
    if (-1 < param_2) {
      return (double)*(long *)(*(long *)(param_1 + 0x60) + 8 + (long)(param_2 * 2) * 8) /
             (double)*(long *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x38 + 8);
    }
    dVar5 = 0.0;
    dVar4 = 0.0;
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 1;
        dVar4 = (double)ov_time_total(param_1,iVar2);
        dVar5 = dVar5 + dVar4;
        iVar2 = iVar3;
      } while (iVar1 != iVar3);
      return dVar5;
    }
  }
  return dVar4;
}



long ov_bitrate(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  if (1 < *(int *)(param_1 + 0x80)) {
    uVar3 = *(uint *)(param_1 + 0x40);
    uVar7 = (ulong)uVar3;
    while (param_2 < (int)uVar3) {
      if (*(int *)(param_1 + 8) != 0) {
        if (param_2 < 0) {
          if ((int)uVar3 < 1) {
            dVar11 = 0.0;
            dVar10 = 0.0;
            if (uVar3 != 0) {
              dVar10 = _LC5;
            }
          }
          else {
            lVar5 = 0;
            lVar4 = 0;
            do {
              plVar2 = (long *)(*(long *)(param_1 + 0x48) + 8 + lVar5);
              plVar1 = (long *)(*(long *)(param_1 + 0x50) + lVar5);
              lVar5 = lVar5 + 8;
              lVar4 = lVar4 + (*plVar2 - *plVar1) * 8;
            } while ((long)(int)uVar3 * 8 != lVar5);
            dVar10 = 0.0;
            uVar8 = 0;
            do {
              uVar6 = uVar8 & 0xffffffff;
              uVar8 = (ulong)((int)uVar8 + 1);
              dVar11 = (double)ov_time_total(param_1,uVar6);
              dVar10 = dVar10 + dVar11;
            } while ((int)uVar7 != (int)uVar8);
            dVar11 = (double)lVar4;
          }
          fVar9 = (float)(dVar11 / dVar10);
          if ((float)((uint)fVar9 & _LC11._4_4_) < _LC6) {
            fVar9 = (float)((uint)(((float)((uint)fVar9 & _LC11._4_4_) + _LC6) - _LC6) |
                           ~_LC11._4_4_ & (uint)fVar9);
          }
          lVar4 = (long)fVar9;
        }
        else {
          dVar11 = (double)((*(long *)(*(long *)(param_1 + 0x48) + (long)(param_2 + 1) * 8) -
                            *(long *)(*(long *)(param_1 + 0x50) + -8 + (long)(param_2 + 1) * 8)) * 8
                           );
          dVar10 = (double)ov_time_total();
          dVar11 = dVar11 / dVar10;
          dVar10 = (double)((ulong)dVar11 & CONCAT44(_LC11._4_4_,(undefined4)_LC11));
          if (dVar10 < _LC8) {
            dVar11 = (double)((ulong)((dVar10 + _LC8) - _LC8) |
                             ~CONCAT44(_LC11._4_4_,(undefined4)_LC11) & (ulong)dVar11);
          }
          lVar4 = (long)dVar11;
        }
        return lVar4;
      }
      if (param_2 == 0) {
        lVar4 = *(long *)(param_1 + 0x68);
        if (0 < *(long *)(lVar4 + 0x18)) {
          return *(long *)(lVar4 + 0x18);
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 < 1) {
          return -1;
        }
        if (0 < *(long *)(lVar4 + 0x20)) {
          lVar5 = lVar5 + *(long *)(lVar4 + 0x20) >> 1;
        }
        return lVar5;
      }
      param_2 = 0;
    }
  }
  return -0x83;
}



undefined8 ov_raw_tell(long param_1)

{
  if (1 < *(int *)(param_1 + 0x80)) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0xffffffffffffff7d;
}



undefined8 ov_pcm_tell(long param_1)

{
  if (1 < *(int *)(param_1 + 0x80)) {
    return *(undefined8 *)(param_1 + 0x78);
  }
  return 0xffffffffffffff7d;
}



double ov_time_tell(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM1_Qa;
  double dVar12;
  undefined1 auVar13 [16];
  
  if (*(int *)(param_1 + 0x80) < 2) {
    return _LC5;
  }
  if (*(int *)(param_1 + 8) == 0) {
    lVar8 = *(long *)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x68);
    dVar12 = 0.0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar11 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      lVar8 = *(long *)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x68);
      iVar3 = uVar1 - 1;
      lVar9 = -0x83;
      dVar12 = _LC5;
    }
    else {
      if (uVar1 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          uVar6 = uVar10 & 0xffffffff;
          uVar10 = (ulong)((int)uVar10 + 1);
          lVar4 = ov_pcm_total(param_1,uVar6);
          auVar13._8_8_ = extraout_XMM1_Qa;
          auVar13._0_8_ = extraout_XMM0_Qa;
          lVar9 = lVar9 + lVar4;
        } while ((int)uVar11 != (int)uVar10);
        dVar12 = 0.0;
        uVar10 = 0;
        do {
          uVar6 = uVar10 & 0xffffffff;
          uVar10 = (ulong)((int)uVar10 + 1);
          auVar13 = ov_time_total(auVar13._0_8_,auVar13._8_8_,dVar12,param_1,uVar6);
          dVar12 = dVar12 + auVar13._0_8_;
          iVar3 = (int)uVar11;
        } while (iVar3 != (int)uVar10);
        iVar2 = iVar3 + -1;
        lVar4 = *(long *)(param_1 + 0x68);
        lVar8 = *(long *)(param_1 + 0x78);
        plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8 + (long)(iVar2 * 2) * 8);
        lVar7 = lVar4 + (long)iVar3 * 0x38;
        do {
          while( true ) {
            lVar9 = lVar9 - *plVar5;
            if (iVar2 < iVar3) break;
            dVar12 = dVar12 + _LC12;
            if (lVar9 <= lVar8) {
LAB_00103ea0:
              lVar8 = lVar8 - lVar9;
              lVar4 = lVar4 + (long)iVar2 * 0x38;
              goto LAB_00103d4b;
            }
            iVar2 = iVar2 + -1;
            plVar5 = plVar5 + -2;
            lVar7 = lVar7 + -0x38;
          }
          dVar12 = dVar12 - (double)*plVar5 / (double)*(long *)(lVar7 + -0x30);
          if (lVar9 <= lVar8) goto LAB_00103ea0;
          iVar2 = iVar2 + -1;
          plVar5 = plVar5 + -2;
          lVar7 = lVar7 + -0x38;
        } while (iVar2 != -1);
        lVar8 = lVar8 - lVar9;
        lVar4 = lVar4 + -0x38;
        goto LAB_00103d4b;
      }
      lVar8 = *(long *)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x68);
      lVar9 = 0;
      iVar3 = -1;
      dVar12 = 0.0;
    }
    lVar8 = lVar8 - lVar9;
    lVar4 = lVar4 + (long)iVar3 * 0x38;
  }
LAB_00103d4b:
  return (double)lVar8 / (double)*(long *)(lVar4 + 8) + dVar12;
}



long ov_info(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (-1 < param_2) {
      lVar1 = 0;
      if (param_2 < *(int *)(param_1 + 0x40)) {
        lVar1 = *(long *)(param_1 + 0x68) + (long)param_2 * 0x38;
      }
      return lVar1;
    }
    if (2 < *(int *)(param_1 + 0x80)) {
      return *(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38;
    }
  }
  return *(long *)(param_1 + 0x68);
}



long ov_comment(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x70);
  }
  else if (param_2 < 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    if (2 < *(int *)(param_1 + 0x80)) {
      return lVar1 + (long)*(int *)(param_1 + 0x90) * 0x20;
    }
  }
  else {
    lVar1 = 0;
    if (param_2 < *(int *)(param_1 + 0x40)) {
      return (long)param_2 * 0x20 + *(long *)(param_1 + 0x70);
    }
  }
  return lVar1;
}



ulong ov_read_filter(long param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
                    undefined4 *param_7,code *param_8)

{
  short *psVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  short *psVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *(int *)(param_1 + 0x80);
  if ((1 < iVar7) && (0 < param_5)) {
    do {
      if (iVar7 == 4) {
        iVar7 = vorbis_synthesis_pcmout(param_1 + 0x240,&local_48);
        uVar10 = (ulong)iVar7;
        if (uVar10 != 0) {
          if ((long)uVar10 < 1) goto LAB_001041c2;
          if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x80) < 3)) {
            lVar15 = *(long *)(param_1 + 0x68);
          }
          else {
            lVar15 = *(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38;
          }
          uVar3 = *(uint *)(lVar15 + 4);
          lVar15 = (long)(int)uVar3;
          if (lVar15 - 1U < 0xff) {
            uVar9 = (long)param_3 / (param_5 * lVar15);
            if ((long)uVar9 <= (long)uVar10) {
              uVar10 = uVar9;
            }
            if (0 < (long)uVar10) {
              if (param_8 == (code *)0x0) {
                if (param_5 != 1) goto LAB_001040e7;
LAB_001042a4:
                fVar4 = _LC13;
                lVar11 = 0;
                do {
                  lVar13 = 0;
                  do {
                    iVar7 = (int)ROUND(*(float *)(local_48[lVar13] + lVar11) * fVar4);
                    if (iVar7 < -0x80) {
                      iVar7 = -0x80;
                    }
                    if (0x7f < iVar7) {
                      iVar7 = 0x7f;
                    }
                    *(char *)((long)param_2 + lVar13) = (char)iVar7 + (param_6 == 0) * -0x80;
                    lVar13 = lVar13 + 1;
                  } while (lVar15 != lVar13);
                  lVar11 = lVar11 + 4;
                  param_2 = (short *)((long)param_2 + (ulong)uVar3);
                } while (lVar11 != uVar10 * 4);
              }
              else {
                (*param_8)(local_48,lVar15,uVar10);
                if (param_5 == 1) goto LAB_001042a4;
LAB_001040e7:
                fVar4 = _LC14;
                if (param_6 == 0) {
                  if (param_4 == 0) {
                    psVar1 = param_2 + lVar15;
                    do {
                      pfVar14 = (float *)*local_48;
                      pfVar2 = pfVar14 + uVar10;
                      psVar12 = param_2;
                      do {
                        iVar7 = (int)ROUND(*pfVar14 * fVar4);
                        if (iVar7 < -0x8000) {
                          iVar7 = -0x8000;
                        }
                        sVar6 = (short)iVar7;
                        if (0x7fff < iVar7) {
                          sVar6 = 0x7fff;
                        }
                        pfVar14 = pfVar14 + 1;
                        *psVar12 = sVar6 + -0x8000;
                        psVar12 = psVar12 + lVar15;
                      } while (pfVar14 != pfVar2);
                      param_2 = param_2 + 1;
                      local_48 = local_48 + 1;
                    } while (param_2 != psVar1);
                  }
                  else {
                    iVar7 = 0x8000;
LAB_00104105:
                    lVar11 = 0;
                    do {
                      lVar13 = 0;
                      do {
                        iVar8 = (int)ROUND(*(float *)(*(long *)((long)local_48 + lVar13 * 4) +
                                                     lVar11) * fVar4);
                        if (iVar8 < -0x8000) {
                          iVar8 = -0x8000;
                        }
                        if (0x7fff < iVar8) {
                          iVar8 = 0x7fff;
                        }
                        *(char *)((long)param_2 + lVar13 + 1) = (char)(iVar8 + iVar7);
                        *(char *)((long)param_2 + lVar13) = (char)((uint)(iVar8 + iVar7) >> 8);
                        lVar13 = lVar13 + 2;
                      } while (lVar13 != lVar15 * 2);
                      lVar11 = lVar11 + 4;
                      param_2 = param_2 + uVar3;
                    } while (lVar11 != uVar10 * 4);
                  }
                }
                else {
                  iVar7 = 0;
                  if (param_4 != 0) goto LAB_00104105;
                  psVar1 = param_2 + lVar15;
                  do {
                    pfVar14 = (float *)*local_48;
                    pfVar2 = pfVar14 + uVar10;
                    psVar12 = param_2;
                    do {
                      iVar7 = (int)ROUND(*pfVar14 * fVar4);
                      if (iVar7 < -0x8000) {
                        iVar7 = -0x8000;
                      }
                      sVar6 = (short)iVar7;
                      if (0x7fff < iVar7) {
                        sVar6 = 0x7fff;
                      }
                      pfVar14 = pfVar14 + 1;
                      *psVar12 = sVar6;
                      psVar12 = psVar12 + lVar15;
                    } while (pfVar14 != pfVar2);
                    param_2 = param_2 + 1;
                    local_48 = local_48 + 1;
                  } while (param_2 != psVar1);
                }
              }
              vorbis_synthesis_read(param_1 + 0x240,uVar10 & 0xffffffff);
              bVar5 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
              *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + (uVar10 << (bVar5 & 0x3f));
              if (param_7 != (undefined4 *)0x0) {
                *param_7 = *(undefined4 *)(param_1 + 0x90);
              }
              uVar10 = param_5 * lVar15 * uVar10;
              goto LAB_001041c2;
            }
          }
          break;
        }
      }
      iVar7 = _fetch_and_process_packet_constprop_0(param_1,1);
      if (iVar7 == -2) {
        uVar10 = 0;
        goto LAB_001041c2;
      }
      if (iVar7 < 1) goto LAB_001041f0;
      iVar7 = *(int *)(param_1 + 0x80);
    } while( true );
  }
  uVar10 = 0xffffffffffffff7d;
LAB_001041c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_001041f0:
  uVar10 = (ulong)iVar7;
  goto LAB_001041c2;
}



void ov_read(void)

{
  ov_read_filter();
  return;
}



long ov_read_float(long param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 < 2) {
    lVar3 = -0x83;
  }
  else {
    while( true ) {
      if (iVar2 == 4) {
        iVar2 = vorbis_synthesis_pcmout(param_1 + 0x240,&local_48);
        if (iVar2 != 0) {
          bVar1 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = local_48;
          }
          if (iVar2 <= param_3) {
            param_3 = iVar2;
          }
          lVar3 = (long)param_3;
          vorbis_synthesis_read(param_1 + 0x240);
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + (lVar3 << (bVar1 & 0x3f));
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(param_1 + 0x90);
          }
          goto LAB_001044bb;
        }
      }
      iVar2 = _fetch_and_process_packet_constprop_0(param_1,1);
      if (iVar2 == -2) {
        lVar3 = 0;
        goto LAB_001044bb;
      }
      if (iVar2 < 1) break;
      iVar2 = *(int *)(param_1 + 0x80);
    }
    lVar3 = (long)iVar2;
  }
LAB_001044bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ov_crosslap(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong *puVar19;
  byte bVar20;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  long local_40;
  long *plVar13;
  
  plVar16 = &local_68;
  plVar13 = &local_68;
  plVar12 = &local_68;
  plVar17 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    iVar5 = *(int *)(param_1 + 0x80);
    if ((iVar5 < 2) || (*(int *)(param_2 + 0x80) < 2)) {
      uVar7 = 0xffffff7d;
      plVar17 = &local_68;
      goto LAB_0010477d;
    }
    while (iVar5 != 4) {
      uVar7 = _fetch_and_process_packet_constprop_0(param_1,0);
      if (((int)uVar7 < 0) && ((int)uVar7 != -3)) goto LAB_0010477d;
      iVar5 = *(int *)(param_1 + 0x80);
    }
    uVar7 = _ov_initprime(param_2);
    plVar17 = &local_68;
    if ((int)uVar7 != 0) goto LAB_0010477d;
    lVar3 = *(long *)(param_1 + 0x68);
    lVar11 = lVar3;
    if ((*(int *)(param_1 + 8) != 0) && (2 < *(int *)(param_1 + 0x80))) {
      lVar11 = lVar3 + (long)*(int *)(param_1 + 0x90) * 0x38;
    }
    if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x80) < 3)) {
      local_58 = *(long *)(param_2 + 0x68);
    }
    else {
      local_58 = *(long *)(param_2 + 0x68) + (long)*(int *)(param_2 + 0x90) * 0x38;
    }
    if (lVar3 == 0) {
      bVar20 = 0x7e;
    }
    else {
      cVar4 = vorbis_synthesis_halfrate_p();
      bVar20 = cVar4 + 1;
    }
    if (*(long *)(param_2 + 0x68) == 0) {
      iVar5 = -0x82;
    }
    else {
      iVar5 = vorbis_synthesis_halfrate_p();
      iVar5 = iVar5 + 1;
    }
    uVar8 = (long)*(int *)(lVar11 + 4) * 8 + 0x17;
    plVar17 = &local_68;
    while (plVar13 != (long *)((long)&local_68 - (uVar8 & 0xfffffffffffff000))) {
      plVar12 = (long *)((long)plVar17 + -0x1000);
      *(undefined8 *)((long)plVar17 + -8) = *(undefined8 *)((long)plVar17 + -8);
      plVar13 = (long *)((long)plVar17 + -0x1000);
      plVar17 = (long *)((long)plVar17 + -0x1000);
    }
    uVar8 = (ulong)((uint)uVar8 & 0xff0);
    lVar3 = -uVar8;
    puVar14 = (undefined1 *)((long)plVar12 + lVar3);
    plVar16 = (long *)((long)plVar12 + lVar3);
    if (uVar8 != 0) {
      *(undefined8 *)((long)plVar12 + -8) = *(undefined8 *)((long)plVar12 + -8);
    }
    local_60 = CONCAT44(local_60._4_4_,iVar5);
    puVar19 = (ulong *)((ulong)((long)plVar12 + lVar3 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)plVar12 + lVar3 + -8) = 0x104675;
    local_4c = vorbis_info_blocksize(lVar11,0);
    local_4c = local_4c >> (bVar20 & 0x1f);
    *(undefined8 *)((long)plVar12 + lVar3 + -8) = 0x104688;
    local_50 = vorbis_info_blocksize(local_58,0);
    local_68 = param_1 + 0x240;
    local_50 = local_50 >> ((byte)local_60 & 0x1f);
    *(undefined8 *)((long)plVar12 + lVar3 + -8) = 0x1046a7;
    uVar7 = vorbis_window(local_68,0);
    local_60 = param_2 + 0x240;
    *(undefined8 *)((long)plVar12 + lVar3 + -8) = 0x1046bf;
    uVar6 = vorbis_window(local_60,0);
    iVar5 = *(int *)(lVar11 + 4);
    if (0 < iVar5) {
      uVar8 = (long)local_4c * 4 + 0x17;
      uVar18 = (ulong)((uint)uVar8 & 0xff0);
      puVar9 = puVar19;
      do {
        for (puVar15 = puVar14; puVar15 != puVar14 + -(uVar8 & 0xfffffffffffff000);
            puVar15 = puVar15 + -0x1000) {
          *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        }
        lVar3 = -uVar18;
        plVar16 = (long *)(puVar15 + lVar3);
        puVar14 = puVar15 + lVar3;
        if (uVar18 != 0) {
          *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        }
        puVar10 = puVar9 + 1;
        *puVar9 = (ulong)(puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0;
        puVar9 = puVar10;
      } while (puVar19 + iVar5 != puVar10);
    }
    *(undefined8 *)((long)plVar16 + -8) = 0x10474a;
    _ov_getlap(param_1,lVar11,local_68,puVar19,local_4c);
    *(undefined8 *)((long)plVar16 + -8) = 0x104757;
    vorbis_synthesis_lapout(local_60,&local_48);
    uVar1 = *(undefined4 *)(lVar11 + 4);
    uVar2 = *(undefined4 *)(local_58 + 4);
    *(undefined8 *)((long)plVar16 + -8) = uVar6;
    *(undefined8 *)((long)plVar16 + -0x10) = uVar7;
    *(undefined8 *)((long)plVar16 + -0x18) = 0x104779;
    _ov_splice(local_48,puVar19,local_4c,local_50,uVar1,uVar2);
  }
  uVar7 = 0;
  plVar17 = plVar16;
LAB_0010477d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)plVar17 + -8) = &UNK_001047d9;
  __stack_chk_fail();
}



void ov_raw_seek_lap(undefined8 param_1,undefined8 param_2)

{
  _ov_64_seek_lap(param_1,param_2,ov_raw_seek);
  return;
}



void ov_pcm_seek_lap(undefined8 param_1,undefined8 param_2)

{
  _ov_64_seek_lap(param_1,param_2,ov_pcm_seek);
  return;
}



void ov_pcm_seek_page_lap(undefined8 param_1,undefined8 param_2)

{
  _ov_64_seek_lap(param_1,param_2,ov_pcm_seek_page);
  return;
}



void ov_time_seek_lap(undefined8 param_1)

{
  _ov_d_seek_lap(param_1,ov_time_seek);
  return;
}



void ov_time_seek_page_lap(undefined8 param_1)

{
  _ov_d_seek_lap(param_1,ov_time_seek_page);
  return;
}


