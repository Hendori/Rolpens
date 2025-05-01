
undefined8
ChunkVerifyAndAssign
          (undefined8 param_1,undefined4 *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 *local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 8) {
LAB_00100070:
    uVar3 = 0xfffffffc;
  }
  else {
    uVar1 = param_2[1];
    if (uVar1 < 0xfffffff7) {
      uVar2 = (ulong)(uVar1 + 1 & 0xfffffffe) + 8;
      if (uVar2 <= param_4) {
        if (uVar2 <= param_3) {
          local_28 = param_2 + 2;
          local_20 = (ulong)uVar1;
          uVar3 = ChunkAssignData(param_1,&local_28,param_5,*param_2);
          goto LAB_00100059;
        }
        goto LAB_00100070;
      }
    }
    uVar3 = 0xfffffffe;
  }
LAB_00100059:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SynthesizeBitstream(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)((int)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10) + 1U & 0xfffffffe);
  if (*(long *)(param_1 + 8) == 0) {
    lVar7 = uVar6 + 0x14;
    lVar1 = WebPSafeMalloc(1,lVar7);
    if (lVar1 == 0) {
      return 0xfffffffd;
    }
    uVar3 = MuxEmitRiffHeader(lVar1,lVar7);
  }
  else {
    lVar7 = uVar6 + 0x2e +
            (ulong)((int)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) + 1U & 0xfffffffe);
    lVar1 = WebPSafeMalloc(1,lVar7);
    if (lVar1 == 0) {
      return 0xfffffffd;
    }
    puVar2 = (undefined8 *)MuxEmitRiffHeader(lVar1,lVar7);
    uVar3 = __LC0;
    uVar4 = *(int *)(param_1 + 0x20) - 1;
    uVar5 = *(int *)(param_1 + 0x24) - 1;
    *(undefined4 *)(puVar2 + 1) = 0x10;
    *puVar2 = uVar3;
    *(char *)(puVar2 + 2) = (char)(uVar5 >> 8);
    *(char *)((long)puVar2 + 0x11) = (char)(uVar5 >> 0x10);
    *(uint *)((long)puVar2 + 0xc) =
         (((uVar5 & 0xff) << 8 | (int)uVar4 >> 0x10 & 0xffU) << 8 | uVar4 >> 8 & 0xff) << 8 |
         uVar4 & 0xff;
    uVar3 = ChunkListEmit(*(undefined8 *)(param_1 + 8));
  }
  ChunkListEmit(*(undefined8 *)(param_1 + 0x10),uVar3);
  *param_2 = lVar1;
  param_2[1] = lVar7;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 MuxGetCanvasInfo(long *param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = ChunkSearchList(param_1[5],1,_kChunks);
  if (lVar4 == 0) {
    iVar3 = (int)param_1[7];
    iVar7 = *(int *)((long)param_1 + 0x3c);
    lVar4 = *param_1;
    if (iVar3 != 0 || iVar7 != 0) {
      uVar6 = (long)iVar3 * (long)iVar7;
      iVar8 = 0;
      if (lVar4 == 0) goto LAB_00100256;
LAB_001002c8:
      iVar8 = (uint)(*(int *)(lVar4 + 0x28) != 0) << 4;
      goto LAB_00100256;
    }
    iVar3 = MuxImageCount(lVar4,6);
    iVar7 = MuxImageCount(*param_1);
    if ((iVar3 == 1) && (iVar7 == 0)) {
      iVar3 = *(int *)(lVar4 + 0x20);
      iVar7 = *(int *)(lVar4 + 0x24);
      uVar6 = (long)iVar3 * (long)iVar7;
      goto LAB_001002c8;
    }
    if (lVar4 == 0) {
      iVar7 = 0;
      iVar3 = 0;
      iVar8 = 0;
    }
    else {
      iVar7 = 0;
      iVar3 = 0;
      iVar8 = (uint)(*(int *)(lVar4 + 0x28) != 0) << 4;
    }
LAB_00100260:
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar7;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar8;
    }
    uVar5 = 1;
  }
  else {
    piVar2 = *(int **)(lVar4 + 8);
    if (9 < *(ulong *)(lVar4 + 0x10)) {
      iVar8 = *piVar2;
      iVar3 = ((uint)*(byte *)((long)piVar2 + 5) << 8 | (uint)*(byte *)((long)piVar2 + 6) << 0x10 |
              (uint)*(byte *)(piVar2 + 1)) + 1;
      iVar7 = ((uint)*(byte *)(piVar2 + 2) << 8 | (uint)*(byte *)((long)piVar2 + 9) << 0x10 |
              (uint)*(byte *)((long)piVar2 + 7)) + 1;
      uVar6 = (long)iVar3 * (long)iVar7;
LAB_00100256:
      if (uVar6 >> 0x20 == 0) goto LAB_00100260;
    }
    uVar5 = 0xfffffffe;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int MuxImageFinalize(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = *(int **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(piVar1 + 4);
  local_24 = 0;
  if (*piVar1 == _ChunkAppend) {
    iVar3 = VP8LGetInfo(*(undefined8 *)(piVar1 + 2),uVar2,&local_2c,&local_28,&local_24);
    if (iVar3 == 0) goto LAB_0010040a;
    if (*(long *)(param_1 + 8) != 0) {
      ChunkDelete();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  else {
    iVar3 = VP8GetInfo(*(undefined8 *)(piVar1 + 2),uVar2,uVar2,&local_2c,&local_28);
    if (iVar3 == 0) {
LAB_0010040a:
      iVar3 = 0;
      goto LAB_001003d6;
    }
  }
  uVar4 = 1;
  *(ulong *)(param_1 + 0x20) = CONCAT44(local_28,local_2c);
  if (local_24 == 0) {
    uVar4 = (uint)(*(long *)(param_1 + 8) != 0);
  }
  *(uint *)(param_1 + 0x28) = uVar4;
LAB_001003d6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long WebPMuxCreateInternal(undefined8 *param_1,undefined4 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_f0;
  long local_e8 [2];
  undefined4 local_d8 [2];
  long local_d0;
  ulong local_c8;
  undefined4 local_b8 [8];
  long local_98 [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar15 = local_98;
  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar15 = 0;
    plVar15 = plVar15 + 1;
  }
  ChunkInit(local_d8);
  if ((param_3 >> 8 == 1) && (param_1 != (undefined8 *)0x0)) {
    uVar2 = param_1[1];
    piVar3 = (int *)*param_1;
    if ((0x13 < uVar2) &&
       ((((piVar3 != (int *)0x0 && (*piVar3 == 0x46464952)) && (piVar3[2] == 0x50424557)) &&
        (lVar11 = WebPNewInternal(0x109), lVar11 != 0)))) {
      iVar4 = piVar3[3];
      if ((((_DAT_00102064 == iVar4) || (_ChunkAppend == iVar4)) || (_kChunks == iVar4)) &&
         ((uint)piVar3[1] < 0xfffffff7)) {
        uVar6 = (ulong)(piVar3[1] + 1U & 0xfffffffe);
        uVar1 = uVar6 + 8;
        if (uVar2 < uVar1) goto LAB_00100800;
        uVar6 = uVar6 + 0x10;
        if (uVar2 < uVar6) {
          uVar6 = uVar2;
        }
        lVar16 = uVar6 - 0xc;
        piVar14 = piVar3 + 3;
        lVar7 = WebPSafeMalloc(1,0x38);
        if (lVar7 == 0) goto LAB_00100800;
        MuxImageInit(lVar7);
        if ((int *)((long)piVar3 + uVar6) != piVar14) {
          do {
            iVar4 = ChunkVerifyAndAssign(local_d8,piVar14,lVar16,uVar1,param_2);
            if (iVar4 != 1) goto LAB_00100786;
            iVar4 = (int)local_c8;
            uVar5 = ChunkGetIdFromTag(local_d8[0]);
            uVar2 = local_c8;
            lVar8 = local_d0;
            uVar13 = (ulong)(iVar4 + 1U & 0xfffffffe) + 8;
            if (uVar5 == 5) {
              if ((*(long *)(lVar7 + 8) != 0) ||
                 (iVar4 = ChunkSetHead(local_d8,lVar7 + 8), iVar4 != 1)) goto LAB_00100786;
              *(undefined4 *)(lVar7 + 0x2c) = 1;
            }
            else if (uVar5 == 6) {
              iVar4 = ChunkSetHead(local_d8,lVar7 + 0x10);
              if ((iVar4 != 1) || (iVar4 = MuxImageFinalize(lVar7), iVar4 == 0)) goto LAB_00100786;
              *(undefined4 *)(lVar7 + 0x2c) = 0;
LAB_001006c8:
              iVar4 = MuxImagePush(lVar7,lVar11);
              if (iVar4 != 1) goto LAB_00100786;
              MuxImageInit(lVar7);
            }
            else {
              if (uVar5 == 3) {
                if (*(int *)(lVar7 + 0x2c) == 0) {
                  local_f0 = lVar7 + 0x18;
                  lVar12 = 0;
                  if (local_d0 != 0) {
                    lVar12 = local_d0 + local_c8;
                  }
                  ChunkInit(local_b8);
                  local_e8[0] = lVar8;
                  local_e8[1] = 0x10;
                  if (((0xf < uVar2) &&
                      (iVar4 = ChunkAssignData(local_b8,local_e8,param_2,local_d8[0]), iVar4 == 1))
                     && (iVar4 = ChunkSetHead(local_b8,lVar7), iVar4 == 1)) {
                    *(undefined4 *)(lVar7 + 0x2c) = 1;
                    uVar9 = (ulong)((int)local_b8._16_8_ + 1U & 0xfffffffe);
                    lVar8 = lVar8 + uVar9;
                    lVar17 = uVar2 - uVar9;
                    if (lVar8 != lVar12) {
LAB_00100897:
                      do {
                        ChunkInit(local_b8);
                        iVar4 = ChunkVerifyAndAssign(local_b8,lVar8,lVar17,lVar17,param_2);
                        if (iVar4 != 1) goto LAB_00100777;
                        iVar4 = ChunkGetIdFromTag(local_b8[0]);
                        if (iVar4 == 6) {
                          if (((*(long *)(lVar7 + 0x10) != 0) ||
                              (iVar4 = ChunkSetHead(local_b8,lVar7 + 0x10), iVar4 != 1)) ||
                             (iVar4 = MuxImageFinalize(lVar7), iVar4 == 0)) goto LAB_00100777;
                          *(undefined4 *)(lVar7 + 0x2c) = 0;
                        }
                        else {
                          if (iVar4 != 9) {
                            if (((iVar4 != 5) || (*(long *)(lVar7 + 8) != 0)) ||
                               (iVar4 = ChunkSetHead(local_b8,lVar7 + 8), iVar4 != 1))
                            goto LAB_00100777;
                            *(undefined4 *)(lVar7 + 0x2c) = 1;
                            lVar10 = (ulong)((int)local_b8._16_8_ + 1U & 0xfffffffe) + 8;
                            lVar8 = lVar8 + lVar10;
                            lVar17 = lVar17 - lVar10;
                            if (lVar8 == lVar12) goto LAB_00100777;
                            goto LAB_00100897;
                          }
                          if ((*(int *)(lVar7 + 0x2c) != 0) ||
                             (iVar4 = ChunkAppend(local_b8,&local_f0), iVar4 != 1))
                          goto LAB_00100777;
                        }
                        lVar10 = (ulong)((int)local_b8._16_8_ + 1U & 0xfffffffe) + 8;
                        lVar8 = lVar8 + lVar10;
                        lVar17 = lVar17 - lVar10;
                      } while (lVar8 != lVar12);
                      if (*(int *)(lVar7 + 0x2c) == 0) {
                        ChunkRelease(local_d8);
                        goto LAB_001006c8;
                      }
                    }
                  }
LAB_00100777:
                  ChunkRelease(local_b8);
                }
                goto LAB_00100786;
              }
              if (*(int *)(lVar7 + 0x2c) != 0) goto LAB_00100786;
              if (local_98[uVar5] == 0) {
                lVar8 = MuxGetChunkListFromId(lVar11,uVar5);
                local_98[uVar5] = lVar8;
              }
              iVar4 = ChunkAppend(local_d8,local_98 + uVar5);
              if (iVar4 != 1) goto LAB_00100786;
              if (uVar5 == 0) {
                if (uVar13 < 0x12) goto LAB_00100786;
                *(uint *)(lVar11 + 0x38) =
                     ((uint)*(byte *)((long)piVar14 + 0xd) << 8 |
                      (uint)*(byte *)((long)piVar14 + 0xe) << 0x10 | (uint)*(byte *)(piVar14 + 3)) +
                     1;
                *(uint *)(lVar11 + 0x3c) =
                     ((uint)*(byte *)(piVar14 + 4) << 8 |
                      (uint)*(byte *)((long)piVar14 + 0x11) << 0x10 |
                     (uint)*(byte *)((long)piVar14 + 0xf)) + 1;
              }
            }
            piVar14 = (int *)((long)piVar14 + uVar13);
            lVar16 = lVar16 - uVar13;
            ChunkInit(local_d8);
          } while ((int *)((long)piVar3 + uVar6) != piVar14);
        }
        if ((*(int *)(lVar7 + 0x2c) == 0) && (iVar4 = MuxValidate(lVar11), iVar4 == 1)) {
          MuxImageDelete(lVar7);
          goto LAB_001007a3;
        }
      }
      else {
LAB_00100800:
        lVar7 = 0;
      }
LAB_00100786:
      ChunkRelease(local_d8);
      MuxImageDelete(lVar7);
      WebPMuxDelete(lVar11);
    }
  }
  lVar11 = 0;
LAB_001007a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar11;
}



undefined8 WebPMuxGetCanvasSize(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    uVar1 = MuxGetCanvasInfo();
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 WebPMuxGetFeatures(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = MuxGetCanvasInfo(param_1,0,0,param_2);
    return uVar1;
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxGetChunk(long param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_2 != 0 && param_3 != (undefined1 (*) [16])0x0) && (param_1 != 0)) {
    uVar2 = ChunkGetIndexFromFourCC(param_2);
    if ((*(int *)(&DAT_0010202c + (ulong)uVar2 * 0xc) != 3) &&
       (1 < *(int *)(&DAT_0010202c + (ulong)uVar2 * 0xc) - 5U)) {
      if (uVar2 == 9) {
        uVar3 = ChunkGetTagFromFourCC(param_2);
        lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 0x30),1,uVar3);
        if (lVar4 != 0) {
          uVar1 = *(undefined8 *)(lVar4 + 0x10);
          *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
          *(undefined8 *)(*param_3 + 8) = uVar1;
          return 1;
        }
      }
      else {
        *param_3 = (undefined1  [16])0x0;
        switch((ulong)uVar2) {
        case 0:
          lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 0x28),1,_kChunks);
          if (lVar4 != 0) {
            uVar1 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(*param_3 + 8) = uVar1;
            return 1;
          }
          break;
        case 1:
          lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 8),1,_DAT_00102034);
          if (lVar4 != 0) {
            uVar1 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(*param_3 + 8) = uVar1;
            return 1;
          }
          break;
        case 2:
          lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 0x20),1,_VP8GetInfo);
          if (lVar4 != 0) {
            uVar1 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(*param_3 + 8) = uVar1;
            return 1;
          }
          break;
        case 7:
          lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 0x10),1,_DAT_0010207c);
          if (lVar4 != 0) {
            uVar1 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(*param_3 + 8) = uVar1;
            return 1;
          }
          break;
        case 8:
          lVar4 = ChunkSearchList(*(undefined8 *)(param_1 + 0x18),1,_MuxImagePush);
          if (lVar4 != 0) {
            uVar1 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined8 *)*param_3 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(*param_3 + 8) = uVar1;
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxGetFrame(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_3 == 0)) {
LAB_00100d60:
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = MuxImageGetNth(param_1,param_2,&local_28);
    if ((int)uVar6 != 1) goto LAB_00100d28;
    piVar3 = (int *)*local_28;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)local_28[2];
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x18) = 1;
      iVar2 = *piVar3;
    }
    else {
      iVar2 = *piVar3;
      if (iVar2 != _DAT_0010204c) goto LAB_00100d60;
      if (*(ulong *)(piVar3 + 4) < (ulong)_DAT_00102054) {
        uVar6 = 0xfffffffe;
        goto LAB_00100d28;
      }
      pbVar4 = *(byte **)(piVar3 + 2);
      *(uint *)(param_3 + 0x10) =
           ((uint)pbVar4[1] << 8 | (uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * 2;
      *(uint *)(param_3 + 0x14) =
           ((uint)pbVar4[4] << 8 | (uint)pbVar4[5] << 0x10 | (uint)pbVar4[3]) * 2;
      bVar1 = pbVar4[0xf];
      *(uint *)(param_3 + 0x18) =
           (uint)pbVar4[0xc] | (uint)pbVar4[0xd] << 8 | (uint)pbVar4[0xe] << 0x10;
      *(uint *)(param_3 + 0x20) = bVar1 & 1;
      *(uint *)(param_3 + 0x24) = bVar1 >> 1 & 1;
    }
    uVar5 = ChunkGetIdFromTag(iVar2);
    *(undefined4 *)(param_3 + 0x1c) = uVar5;
    uVar6 = SynthesizeBitstream(local_28,param_3);
  }
LAB_00100d28:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxGetAnimationParams(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      lVar2 = ChunkSearchList(*(undefined8 *)(param_1 + 0x20),1,_VP8GetInfo);
      uVar3 = 0;
      if (lVar2 != 0) {
        if (*(ulong *)(lVar2 + 0x10) < (ulong)_VP8LGetInfo) {
          uVar3 = 0xfffffffe;
        }
        else {
          puVar1 = *(undefined4 **)(lVar2 + 8);
          *param_2 = *puVar1;
          uVar3 = 1;
          param_2[1] = (uint)*(ushort *)(puVar1 + 1);
        }
      }
    }
    return uVar3;
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxNumChunks(undefined8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((param_2 == 3) || (param_2 - 5U < 2)) {
    iVar2 = MuxImageCount(*param_1,param_2);
  }
  else {
    puVar3 = (undefined8 *)MuxGetChunkListFromId();
    uVar5 = (ulong)_DAT_0010202c;
    if (_DAT_0010202c != 10) {
      pcVar4 = MuxImageCount;
      uVar7 = 0;
      do {
        if (param_2 == (int)uVar5) {
          uVar5 = (ulong)uVar7;
          break;
        }
        uVar1 = *(uint *)pcVar4;
        uVar5 = (ulong)uVar1;
        pcVar4 = pcVar4 + 0xc;
        uVar7 = uVar7 + 1;
      } while (uVar1 != 10);
    }
    piVar6 = (int *)*puVar3;
    iVar2 = 0;
    if (piVar6 != (int *)0x0) {
      iVar2 = 0;
      if (*(int *)(&kChunks + uVar5 * 0xc) == 0) {
        do {
          piVar6 = *(int **)(piVar6 + 6);
          iVar2 = iVar2 + 1;
        } while (piVar6 != (int *)0x0);
      }
      else {
        do {
          if (*(int *)(&kChunks + uVar5 * 0xc) == *piVar6) {
            iVar2 = iVar2 + 1;
          }
          piVar6 = *(int **)(piVar6 + 6);
        } while (piVar6 != (int *)0x0);
      }
    }
  }
  *param_3 = iVar2;
  return 1;
}


