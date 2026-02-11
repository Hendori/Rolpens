
undefined8 MuxDeleteAllNamedData(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = ChunkGetIdFromTag(param_2);
  uVar2 = 0xffffffff;
  if ((iVar1 != 3) && (1 < iVar1 - 5U)) {
    piVar3 = (int *)MuxGetChunkListFromId(param_1);
    piVar4 = *(int **)piVar3;
    uVar2 = 0;
    while (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      while (param_2 != iVar1) {
        piVar3 = piVar4 + 6;
        piVar4 = *(int **)(piVar4 + 6);
        if (piVar4 == (int *)0x0) {
          return uVar2;
        }
        iVar1 = *piVar4;
      }
      piVar4 = (int *)ChunkDelete();
      *(int **)piVar3 = piVar4;
      uVar2 = 1;
    }
  }
  return uVar2;
}



int MuxSet(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ChunkGetIndexFromTag(param_2);
  ChunkInit(auStack_68);
  switch(uVar1) {
  case 0:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    param_1 = param_1 + 0x28;
    break;
  case 1:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    param_1 = param_1 + 8;
    break;
  case 2:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    param_1 = param_1 + 0x20;
    break;
  default:
    iVar2 = 0;
    goto LAB_001000ca;
  case 7:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    param_1 = param_1 + 0x10;
    break;
  case 8:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    param_1 = param_1 + 0x18;
    break;
  case 9:
    iVar2 = ChunkAssignData(auStack_68,param_3,param_4,param_2);
    if (iVar2 != 1) goto LAB_001000ca;
    param_1 = param_1 + 0x30;
    goto LAB_00100110;
  }
  if (iVar2 == 1) {
LAB_00100110:
    iVar2 = ChunkSetHead(auStack_68,param_1);
    if (iVar2 != 1) {
      ChunkRelease(auStack_68);
    }
  }
LAB_001000ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void MuxRelease(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = MuxImageDelete(lVar1);
    *param_1 = lVar1;
  }
  ChunkListDelete(param_1 + 5);
  ChunkListDelete(param_1 + 1);
  ChunkListDelete(param_1 + 4);
  ChunkListDelete(param_1 + 2);
  ChunkListDelete(param_1 + 3);
  ChunkListDelete(param_1 + 6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SetAlphaAndImageChunks(undefined8 *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  if (((ulong)param_1[1] < 4) || (*(int *)*param_1 != 0x46464952)) {
    local_78 = *param_1;
    uStack_70 = param_1[1];
  }
  else {
    plVar6 = (long *)WebPMuxCreateInternal(param_1,0,0x109);
    if (plVar6 == (long *)0x0) {
      iVar4 = -2;
      goto LAB_00100300;
    }
    lVar1 = *(long *)(*plVar6 + 0x10);
    lVar2 = *(long *)(*plVar6 + 8);
    local_78 = *(undefined8 *)(lVar1 + 8);
    uStack_70 = *(undefined8 *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      local_68 = *(undefined1 (*) [16])(lVar2 + 8);
    }
    MuxRelease(plVar6);
    WebPSafeFree(plVar6);
  }
  iVar4 = VP8LCheckSignature(local_78,uStack_70);
  uVar3 = _WebPFree;
  if (iVar4 == 0) {
    uVar3 = _DAT_0010209c;
  }
  if (local_68._0_8_ == 0) {
LAB_00100340:
    ChunkInit(local_58);
    iVar4 = ChunkAssignData(local_58,&local_78,param_2,uVar3);
    if ((iVar4 == 1) && (iVar4 = ChunkSetHead(local_58,param_3 + 0x10), iVar4 == 1)) {
      iVar5 = MuxImageFinalize(param_3);
      if (iVar5 == 0) {
        iVar4 = -1;
      }
      goto LAB_00100300;
    }
  }
  else {
    ChunkInit(local_58);
    iVar4 = ChunkAssignData(local_58,local_68,param_2,_MuxImageInit);
    if ((iVar4 == 1) && (iVar4 = ChunkSetHead(local_58,param_3 + 8), iVar4 == 1)) goto LAB_00100340;
  }
  ChunkRelease(local_58);
LAB_00100300:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



undefined1 (*) [16] WebPNewInternal(int param_1)

{
  undefined1 (*pauVar1) [16];
  
  if (param_1 >> 8 != 1) {
    return (undefined1 (*) [16])0x0;
  }
  pauVar1 = (undefined1 (*) [16])WebPSafeMalloc(1,0x40);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[1] = (undefined1  [16])0x0;
    pauVar1[2] = (undefined1  [16])0x0;
    pauVar1[3] = (undefined1  [16])0x0;
  }
  return pauVar1;
}



void WebPMuxDelete(long param_1)

{
  if (param_1 != 0) {
    MuxRelease();
    WebPSafeFree(param_1);
    return;
  }
  return;
}



undefined8 WebPMuxSetChunk(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((((param_2 == 0 || param_3 == (long *)0x0) || (param_1 == 0)) || (*param_3 == 0)) ||
     (0xfffffff6 < (ulong)param_3[1])) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = ChunkGetTagFromFourCC(param_2);
    uVar2 = MuxDeleteAllNamedData(param_1,uVar1);
    if ((uint)uVar2 < 2) {
      uVar2 = MuxSet(param_1,uVar1,param_3,param_4);
      return uVar2;
    }
  }
  return uVar2;
}



int WebPMuxSetImage(long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) || (*param_2 == 0)) ||
     (0xfffffff6 < (ulong)param_2[1])) {
    iVar1 = -1;
  }
  else {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      lVar2 = MuxImageDelete(lVar2);
      *param_1 = lVar2;
    }
    MuxImageInit(auStack_68);
    iVar1 = SetAlphaAndImageChunks(param_2,param_3,auStack_68);
    if ((iVar1 != 1) || (iVar1 = MuxImagePush(auStack_68,param_1), iVar1 != 1)) {
      MuxImageRelease(auStack_68);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int WebPMuxPushFrame(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  long in_FS_OFFSET;
  ulong *local_a8;
  ulong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  int local_58;
  int local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_1 == (undefined8 *)0x0) || (param_2 == (long *)0x0)) ||
       (*(int *)((long)param_2 + 0x1c) != 3)) ||
      ((*param_2 == 0 || (0xfffffff6 < (ulong)param_2[1])))) ||
     (((undefined8 *)*param_1 != (undefined8 *)0x0 &&
      ((puVar6 = *(undefined4 **)*param_1, puVar6 == (undefined4 *)0x0 ||
       (iVar7 = ChunkGetIdFromTag(*puVar6), *(int *)((long)param_2 + 0x1c) != iVar7)))))) {
    iVar7 = -1;
  }
  else {
    MuxImageInit(local_78);
    iVar7 = SetAlphaAndImageChunks(param_2,param_3,local_78);
    if (iVar7 == 1) {
      uVar1 = *(uint *)((long)param_2 + 0x14);
      uVar2 = *(uint *)(param_2 + 2);
      iVar7 = -1;
      uVar3 = *(uint *)(param_2 + 3);
      uVar4 = *(uint *)(param_2 + 4);
      iVar5 = *(int *)((long)param_2 + 0x24);
      if ((((uVar1 | uVar2) & 0xfffffffe | uVar3) < 0x1000000) && (uVar4 < 2)) {
        uVar8 = (ulong)_DAT_0010208c;
        puVar9 = (ulong *)WebPSafeMalloc(1,uVar8);
        if (puVar9 == (ulong *)0x0) {
          iVar7 = -3;
        }
        else {
          uVar10 = local_54 - 1;
          *puVar9 = ((((((ulong)(local_58 - 1U & 0xffff) << 8 | (ulong)((int)uVar1 >> 0x11 & 0xff))
                        << 8 | (ulong)((uint)((int)uVar1 >> 1) >> 8 & 0xff)) << 8 |
                      (ulong)((int)uVar1 >> 1 & 0xff)) << 8 | (ulong)((int)uVar2 >> 0x11 & 0xff)) <<
                     8 | (ulong)((uint)((int)uVar2 >> 1) >> 8 & 0xff)) << 8 |
                    (ulong)((int)uVar2 >> 1 & 0xff);
          puVar9[1] = (((((((ulong)((uint)(iVar5 == 1) * 2 | uVar4 & 0xff) << 8 |
                           (ulong)((int)uVar3 >> 0x10 & 0xff)) << 8 | (ulong)(uVar3 >> 8 & 0xff)) <<
                          8 | (ulong)(uVar3 & 0xff)) << 8 | (ulong)((int)uVar10 >> 0x10 & 0xff)) <<
                        8 | (ulong)(uVar10 >> 8 & 0xff)) << 8 | (ulong)(uVar10 & 0xff)) << 8 |
                      (ulong)(byte)(local_58 - 1U >> 0x10);
          local_a8 = puVar9;
          local_a0 = uVar8;
          ChunkInit(local_98);
          iVar7 = ChunkAssignData(local_98,&local_a8,1,_DAT_00102084);
          if ((iVar7 == 1) && (iVar7 = ChunkSetHead(local_98,local_78), iVar7 == 1)) {
            WebPFree(local_a8);
            iVar7 = MuxImagePush(local_78,param_1);
            if (iVar7 == 1) goto LAB_00100686;
          }
          else {
            ChunkRelease(local_98);
            WebPFree(local_a8);
          }
        }
      }
    }
    MuxImageRelease(local_78);
  }
LAB_00100686:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxSetAnimationParams(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_28;
  local_30 = 6;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (0xffff < (uint)param_2[1])) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = MuxDeleteAllNamedData(param_1,_WebPSafeFree);
    if ((uint)uVar1 < 2) {
      local_28 = *param_2;
      local_24 = *(undefined2 *)(param_2 + 1);
      uVar1 = MuxSet(param_1,_WebPSafeFree,&local_38,1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPMuxSetCanvasSize(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if ((((param_2 < 0x1000001) && (param_3 < 0x1000001)) &&
        ((ulong)((long)(int)param_2 * (long)(int)param_3) >> 0x20 == 0)) &&
       ((param_2 * param_3 != 0 || (param_2 == 0 && param_3 == 0)))) {
      uVar1 = MuxDeleteAllNamedData(param_1,_kChunks);
      if ((uint)uVar1 < 2) {
        *(uint *)(param_1 + 0x38) = param_2;
        uVar1 = 1;
        *(uint *)(param_1 + 0x3c) = param_3;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 WebPMuxDeleteChunk(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = ChunkGetTagFromFourCC(param_2);
    uVar2 = MuxDeleteAllNamedData(param_1,uVar1);
    return uVar2;
  }
  return 0xffffffff;
}



undefined8 WebPMuxDeleteFrame(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = MuxImageDeleteNth();
    return uVar1;
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong WebPMuxAssemble(long *param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long in_FS_OFFSET;
  int local_6c;
  byte *local_68;
  undefined8 local_60;
  byte local_4a;
  undefined2 local_49;
  undefined1 local_47;
  undefined2 local_46;
  undefined1 local_44;
  undefined2 local_43;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (undefined1 (*) [16])0x0) &&
     (*param_2 = (undefined1  [16])0x0, param_1 != (long *)0x0)) {
    uVar5 = WebPMuxNumChunks(param_1,_ChunkGetTagFromFourCC,&local_6c);
    if ((int)uVar5 != 1) goto LAB_00100c3b;
    if (local_6c == 1) {
      local_68 = (byte *)0x0;
      uVar5 = MuxImageGetNth(param_1,1,&local_68);
      if ((int)uVar5 != 1) goto LAB_00100c3b;
      if ((*(long *)local_68 != 0) &&
         ((param_1[7] == 0 || (param_1[7] == *(long *)(local_68 + 0x20))))) {
        ChunkDelete();
        local_6c = 0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
      }
    }
    uVar5 = WebPMuxNumChunks(param_1,_DAT_0010207c,&local_68);
    if (((int)uVar5 != 1) ||
       (((0 < (int)local_68 && (local_6c == 0)) &&
        (uVar5 = MuxDeleteAllNamedData(param_1,_WebPSafeFree), (int)uVar5 != 1))))
    goto LAB_00100c3b;
    puVar2 = (undefined8 *)*param_1;
    local_68 = &local_4a;
    local_60 = 10;
    if (((puVar2 != (undefined8 *)0x0) && (puVar2[2] != 0)) && (*(long *)(puVar2[2] + 8) != 0)) {
      uVar5 = MuxDeleteAllNamedData(param_1,_kChunks);
      if (1 < (uint)uVar5) goto LAB_00100c3b;
      uVar18 = 0;
      if (param_1[1] != 0) {
        uVar18 = (uint)(*(long *)(param_1[1] + 8) != 0) << 5;
      }
      if ((param_1[2] != 0) && (*(long *)(param_1[2] + 8) != 0)) {
        uVar18 = uVar18 | 8;
      }
      if ((param_1[3] != 0) && (*(long *)(param_1[3] + 8) != 0)) {
        uVar18 = uVar18 | 4;
      }
      if (((int *)*puVar2 != (int *)0x0) && (*(int *)*puVar2 == _DAT_00102084)) {
        uVar18 = uVar18 | 2;
      }
      iVar4 = MuxImageCount(puVar2,5);
      plVar13 = (long *)*param_1;
      if (0 < iVar4) {
        uVar18 = uVar18 | 0x10;
      }
      if (plVar13[6] == 0) {
        iVar4 = (int)plVar13[4];
        iVar16 = *(int *)((long)plVar13 + 0x24);
      }
      else {
        iVar16 = 0;
        iVar4 = 0;
        do {
          if (*(long *)(*plVar13 + 0x10) != 0x10) goto LAB_00100c36;
          pbVar3 = *(byte **)(*plVar13 + 8);
          iVar14 = (int)plVar13[4] +
                   ((uint)pbVar3[1] << 8 | (uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * 2;
          if (iVar4 < iVar14) {
            iVar4 = iVar14;
          }
          piVar1 = (int *)((long)plVar13 + 0x24);
          plVar13 = (long *)plVar13[6];
          iVar14 = *piVar1 + ((uint)pbVar3[4] << 8 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[3]) * 2;
          if (iVar16 < iVar14) {
            iVar16 = iVar14;
          }
        } while (plVar13 != (long *)0x0);
      }
      if (((iVar4 - 1U < 0x1000000) && (iVar16 - 1U < 0x1000000)) &&
         ((iVar17 = iVar16, iVar14 = iVar4, param_1[7] == 0 ||
          ((iVar14 = (int)param_1[7], iVar4 <= iVar14 &&
           (iVar17 = *(int *)((long)param_1 + 0x3c), iVar16 <= iVar17)))))) {
        if ((uVar18 != 0) || (param_1[6] != 0)) {
          iVar4 = MuxHasAlpha(puVar2);
          local_47 = 0;
          local_4a = (byte)uVar18;
          if (iVar4 != 0) {
            local_4a = (byte)uVar18 | 0x10;
          }
          local_46 = (undefined2)(iVar14 + -1);
          local_44 = (undefined1)((uint)(iVar14 + -1) >> 0x10);
          local_43 = (undefined2)(iVar17 + -1);
          local_49 = 0;
          local_41 = (undefined1)((uint)(iVar17 + -1) >> 0x10);
          uVar5 = MuxSet(param_1,_kChunks,&local_68,1);
          if ((int)uVar5 != 1) goto LAB_00100c3b;
        }
        lVar15 = 0;
        lVar6 = ChunkListDiskSize(param_1[5]);
        lVar7 = ChunkListDiskSize(param_1[1]);
        lVar8 = ChunkListDiskSize(param_1[4]);
        for (lVar10 = *param_1; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x30)) {
          lVar9 = MuxImageDiskSize(lVar10);
          lVar15 = lVar15 + lVar9;
        }
        lVar10 = ChunkListDiskSize(param_1[2]);
        lVar9 = ChunkListDiskSize(param_1[3]);
        lVar11 = ChunkListDiskSize(param_1[6]);
        lVar11 = lVar9 + lVar15 + lVar8 + lVar6 + lVar7 + 0xc + lVar10 + lVar11;
        lVar10 = WebPSafeMalloc(1,lVar11);
        if (lVar10 == 0) {
          uVar5 = 0xfffffffd;
        }
        else {
          uVar12 = MuxEmitRiffHeader(lVar10,lVar11);
          uVar12 = ChunkListEmit(param_1[5],uVar12);
          uVar12 = ChunkListEmit(param_1[1],uVar12);
          uVar12 = ChunkListEmit(param_1[4],uVar12);
          for (lVar15 = *param_1; lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x30)) {
            uVar12 = MuxImageEmit(lVar15,uVar12);
          }
          uVar12 = ChunkListEmit(param_1[2]);
          uVar12 = ChunkListEmit(param_1[3],uVar12);
          ChunkListEmit(param_1[6],uVar12);
          uVar5 = MuxValidate(param_1);
          lVar15 = lVar10;
          if ((int)uVar5 != 1) {
            lVar15 = 0;
            lVar11 = 0;
            WebPSafeFree(lVar10);
            uVar5 = uVar5 & 0xffffffff;
          }
          *(long *)*param_2 = lVar15;
          *(long *)(*param_2 + 8) = lVar11;
        }
        goto LAB_00100c3b;
      }
    }
  }
LAB_00100c36:
  uVar5 = 0xffffffff;
LAB_00100c3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


