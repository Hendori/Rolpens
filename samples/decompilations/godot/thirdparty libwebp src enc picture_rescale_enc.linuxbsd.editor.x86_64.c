
bool AdjustAndCheckRectangle(int *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    *param_2 = *param_2 & 0xfffffffe;
    *param_3 = *param_3 & 0xfffffffe;
  }
  bVar1 = false;
  if ((-1 < (int)*param_2) && (-1 < (int)*param_3)) {
    if ((param_4 < 1) || (param_5 < 1)) {
      return false;
    }
    if ((int)(*param_2 + param_4) <= param_1[2]) {
      bVar1 = (int)(*param_3 + param_5) <= param_1[3];
    }
  }
  return bVar1;
}



undefined8
RescalePlane(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
            undefined4 param_10)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 auStack_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = WebPRescalerInit(auStack_98,param_2,param_3,param_5,param_6,param_7,param_8,param_10,
                           param_9);
  if ((int)uVar2 != 0) {
    iVar4 = 0;
    iVar3 = (int)param_3;
    if (0 < iVar3) {
      do {
        iVar1 = WebPRescalerImport(auStack_98,iVar3 - iVar4,param_4 * iVar4 + param_1,param_4);
        iVar4 = iVar4 + iVar1;
        WebPRescalerExport(auStack_98);
      } while (iVar4 < iVar3);
    }
    uVar2 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WebPPictureCopy(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_1 != param_2) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_2 + 0xe) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_2 + 0x12) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_2 + 0x16) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 0x1a) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_2 + 0x1e) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x22);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 0x22) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x26);
    *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(param_2 + 0x26) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x2a);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 0x2a) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_2 + 0x2e) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x32);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x32) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x36);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_2 + 0x36) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x3a);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x3a) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_2 + 0x3e) = uVar1;
    WebPPictureResetBuffers(param_2);
    iVar2 = WebPPictureAlloc(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (*param_1 == 0) {
      WebPCopyPlane(*(undefined8 *)(param_1 + 4),param_1[10],*(undefined8 *)(param_2 + 4),
                    param_2[10],param_2[2],param_2[3]);
      WebPCopyPlane(*(undefined8 *)(param_1 + 6),param_1[0xb],*(undefined8 *)(param_2 + 6),
                    param_2[0xb],param_2[2] + 1 >> 1,param_2[3] + 1 >> 1);
      WebPCopyPlane(*(undefined8 *)(param_1 + 8),param_1[0xb],*(undefined8 *)(param_2 + 8),
                    param_2[0xb],param_2[2] + 1 >> 1,param_2[3] + 1 >> 1);
      if (*(long *)(param_2 + 0xc) != 0) {
        WebPCopyPlane(*(undefined8 *)(param_1 + 0xc),param_1[0xe],*(long *)(param_2 + 0xc),
                      param_2[0xe],param_2[2],param_2[3]);
      }
    }
    else {
      WebPCopyPlane(*(undefined8 *)(param_1 + 0x12),param_1[0x14] * 4,
                    *(undefined8 *)(param_2 + 0x12),param_2[0x14] * 4,param_2[2] * 4,param_2[3]);
    }
  }
  return 1;
}



bool WebPPictureIsView(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 == 0) {
    return *(long *)(param_1 + 0x38) == 0;
  }
  return *(long *)(param_1 + 0x3a) == 0;
}



undefined8
WebPPictureView(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int local_30;
  int local_2c [3];
  
  if ((param_1 != (int *)0x0) && (param_6 != (int *)0x0)) {
    piVar7 = param_6;
    local_30 = param_3;
    local_2c[0] = param_2;
    iVar4 = AdjustAndCheckRectangle(param_1,local_2c,&local_30);
    if (iVar4 != 0) {
      if (param_1 != piVar7) {
        uVar1 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)piVar7 = *(undefined8 *)param_1;
        *(undefined8 *)(piVar7 + 2) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(piVar7 + 6) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(piVar7 + 8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(piVar7 + 10) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(piVar7 + 0xc) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(piVar7 + 0xe) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(piVar7 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(piVar7 + 0x12) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(piVar7 + 0x14) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(piVar7 + 0x16) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)(piVar7 + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(piVar7 + 0x1a) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(piVar7 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(piVar7 + 0x1e) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x22);
        *(undefined8 *)(piVar7 + 0x20) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(piVar7 + 0x22) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x26);
        *(undefined8 *)(piVar7 + 0x24) = *(undefined8 *)(param_1 + 0x24);
        *(undefined8 *)(piVar7 + 0x26) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x2a);
        *(undefined8 *)(piVar7 + 0x28) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(piVar7 + 0x2a) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x2e);
        *(undefined8 *)(piVar7 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
        *(undefined8 *)(piVar7 + 0x2e) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x32);
        *(undefined8 *)(piVar7 + 0x30) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(piVar7 + 0x32) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x36);
        *(undefined8 *)(piVar7 + 0x34) = *(undefined8 *)(param_1 + 0x34);
        *(undefined8 *)(piVar7 + 0x36) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x3a);
        *(undefined8 *)(piVar7 + 0x38) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(piVar7 + 0x3a) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x3e);
        *(undefined8 *)(piVar7 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
        *(undefined8 *)(piVar7 + 0x3e) = uVar1;
        WebPPictureResetBuffers(piVar7);
      }
      lVar6 = (long)local_2c[0];
      iVar4 = *param_1;
      param_6[2] = param_4;
      param_6[3] = param_5;
      if (iVar4 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 10);
        *(long *)(param_6 + 4) = param_1[10] * local_30 + lVar6 + *(long *)(param_1 + 4);
        lVar5 = (long)((local_30 >> 1) * param_1[0xb]) + (long)(local_2c[0] >> 1);
        lVar2 = *(long *)(param_1 + 6);
        lVar3 = *(long *)(param_1 + 8);
        *(undefined8 *)(param_6 + 10) = uVar1;
        *(long *)(param_6 + 8) = lVar5 + lVar3;
        lVar3 = *(long *)(param_1 + 0xc);
        *(long *)(param_6 + 6) = lVar2 + lVar5;
        if (lVar3 != 0) {
          iVar4 = param_1[0xe];
          param_6[0xe] = iVar4;
          *(long *)(param_6 + 0xc) = lVar3 + local_30 * iVar4 + lVar6;
        }
      }
      else {
        iVar4 = param_1[0x14];
        lVar2 = *(long *)(param_1 + 0x12);
        param_6[0x14] = iVar4;
        *(long *)(param_6 + 0x12) = lVar2 + (local_30 * iVar4 + lVar6) * 4;
      }
      return 1;
    }
  }
  return 0;
}



undefined8 WebPPictureCrop(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = param_3;
  local_14c = param_2;
  if (param_1 != (int *)0x0) {
    iVar2 = AdjustAndCheckRectangle(param_1,&local_14c,&local_150);
    if (iVar2 != 0) {
      local_148 = *(undefined8 *)param_1;
      uStack_140 = *(undefined8 *)(param_1 + 2);
      local_138 = *(undefined8 *)(param_1 + 4);
      uStack_130 = *(undefined8 *)(param_1 + 6);
      local_128 = *(undefined8 *)(param_1 + 8);
      uStack_120 = *(ulong *)(param_1 + 10);
      local_118 = *(long *)(param_1 + 0xc);
      uStack_110 = *(ulong *)(param_1 + 0xe);
      local_108 = *(undefined8 *)(param_1 + 0x10);
      uStack_100 = *(undefined8 *)(param_1 + 0x12);
      local_f8 = *(undefined8 *)(param_1 + 0x14);
      uStack_f0 = *(undefined8 *)(param_1 + 0x16);
      local_e8 = *(undefined8 *)(param_1 + 0x18);
      uStack_e0 = *(undefined8 *)(param_1 + 0x1a);
      local_d8 = *(undefined8 *)(param_1 + 0x1c);
      uStack_d0 = *(undefined8 *)(param_1 + 0x1e);
      local_c8 = *(undefined8 *)(param_1 + 0x20);
      uStack_c0 = *(ulong *)(param_1 + 0x22);
      local_b8 = *(undefined8 *)(param_1 + 0x24);
      uStack_b0 = *(undefined8 *)(param_1 + 0x26);
      local_a8 = *(undefined8 *)(param_1 + 0x28);
      uStack_a0 = *(undefined8 *)(param_1 + 0x2a);
      local_98 = *(undefined8 *)(param_1 + 0x2c);
      uStack_90 = *(undefined8 *)(param_1 + 0x2e);
      local_88 = *(undefined8 *)(param_1 + 0x30);
      uStack_80 = *(undefined8 *)(param_1 + 0x32);
      local_78 = *(undefined8 *)(param_1 + 0x34);
      uStack_70 = *(undefined8 *)(param_1 + 0x36);
      local_68 = *(undefined8 *)(param_1 + 0x38);
      uStack_60 = *(undefined8 *)(param_1 + 0x3a);
      local_58 = *(undefined8 *)(param_1 + 0x3c);
      uStack_50 = *(undefined8 *)(param_1 + 0x3e);
      WebPPictureResetBuffers(&local_148);
      uStack_140 = CONCAT44(param_5,param_4);
      iVar3 = WebPPictureAlloc(&local_148);
      iVar1 = local_14c;
      iVar2 = local_150;
      if (iVar3 == 0) {
        uVar5 = WebPEncodingSetError(param_1,uStack_c0 & 0xffffffff);
      }
      else {
        if (*param_1 == 0) {
          iVar6 = local_150 / 2;
          iVar4 = local_14c / 2;
          iVar3 = param_1[0xb];
          WebPCopyPlane((long)(param_1[10] * local_150 + local_14c) + *(long *)(param_1 + 4),
                        param_1[10],local_138,uStack_120 & 0xffffffff,param_4,param_5);
          lVar7 = (long)(iVar6 * iVar3 + iVar4);
          WebPCopyPlane(*(long *)(param_1 + 6) + lVar7,param_1[0xb],uStack_130,uStack_120._4_4_);
          WebPCopyPlane(*(long *)(param_1 + 8) + lVar7,param_1[0xb],local_128,uStack_120._4_4_,
                        param_4 + 1 >> 1,param_5 + 1 >> 1);
          if (local_118 != 0) {
            WebPCopyPlane((long)(iVar2 * param_1[0xe] + iVar1) + *(long *)(param_1 + 0xc),
                          param_1[0xe],local_118,uStack_110 & 0xffffffff,param_4,param_5);
          }
        }
        else {
          WebPCopyPlane(*(long *)(param_1 + 0x12) +
                        ((long)(param_1[0x14] * local_150) + (long)local_14c) * 4,param_1[0x14] * 4,
                        uStack_100,(int)local_f8 << 2,param_4 * 4,param_5);
        }
        WebPPictureFree(param_1);
        uVar5 = 1;
        *(undefined8 *)param_1 = local_148;
        *(undefined8 *)(param_1 + 2) = uStack_140;
        *(undefined8 *)(param_1 + 4) = local_138;
        *(undefined8 *)(param_1 + 6) = uStack_130;
        *(undefined8 *)(param_1 + 8) = local_128;
        *(ulong *)(param_1 + 10) = uStack_120;
        *(long *)(param_1 + 0xc) = local_118;
        *(ulong *)(param_1 + 0xe) = uStack_110;
        *(undefined8 *)(param_1 + 0x10) = local_108;
        *(undefined8 *)(param_1 + 0x12) = uStack_100;
        *(undefined8 *)(param_1 + 0x14) = local_f8;
        *(undefined8 *)(param_1 + 0x16) = uStack_f0;
        *(undefined8 *)(param_1 + 0x18) = local_e8;
        *(undefined8 *)(param_1 + 0x1a) = uStack_e0;
        *(undefined8 *)(param_1 + 0x1c) = local_d8;
        *(undefined8 *)(param_1 + 0x1e) = uStack_d0;
        *(undefined8 *)(param_1 + 0x20) = local_c8;
        *(ulong *)(param_1 + 0x22) = uStack_c0;
        *(undefined8 *)(param_1 + 0x24) = local_b8;
        *(undefined8 *)(param_1 + 0x26) = uStack_b0;
        *(undefined8 *)(param_1 + 0x28) = local_a8;
        *(undefined8 *)(param_1 + 0x2a) = uStack_a0;
        *(undefined8 *)(param_1 + 0x2c) = local_98;
        *(undefined8 *)(param_1 + 0x2e) = uStack_90;
        *(undefined8 *)(param_1 + 0x30) = local_88;
        *(undefined8 *)(param_1 + 0x32) = uStack_80;
        *(undefined8 *)(param_1 + 0x34) = local_78;
        *(undefined8 *)(param_1 + 0x36) = uStack_70;
        *(undefined8 *)(param_1 + 0x38) = local_68;
        *(undefined8 *)(param_1 + 0x3a) = uStack_60;
        *(undefined8 *)(param_1 + 0x3c) = local_58;
        *(undefined8 *)(param_1 + 0x3e) = uStack_50;
      }
      goto LAB_00100593;
    }
  }
  uVar5 = 0;
LAB_00100593:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WebPPictureRescale(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_140;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulong uStack_110;
  long local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  local_140 = param_3;
  local_13c = param_2;
  if (param_1 == (int *)0x0) goto LAB_00100b6d;
  iVar2 = param_1[3];
  iVar5 = param_1[2];
  iVar1 = WebPRescalerGetScaledDimensions(iVar5,iVar2,&local_13c,&local_140);
  if (iVar1 == 0) {
LAB_00100b60:
    uVar4 = WebPEncodingSetError(param_1,5);
  }
  else {
    local_138 = *(undefined8 *)param_1;
    uStack_130 = *(ulong *)(param_1 + 2);
    local_128 = *(undefined8 *)(param_1 + 4);
    uStack_120 = *(undefined8 *)(param_1 + 6);
    local_118 = *(undefined8 *)(param_1 + 8);
    uStack_110 = *(ulong *)(param_1 + 10);
    local_108 = *(long *)(param_1 + 0xc);
    uStack_100 = *(ulong *)(param_1 + 0xe);
    local_f8 = *(undefined8 *)(param_1 + 0x10);
    uStack_f0 = *(undefined8 *)(param_1 + 0x12);
    local_e8 = *(undefined8 *)(param_1 + 0x14);
    uStack_e0 = *(undefined8 *)(param_1 + 0x16);
    local_d8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x1a);
    local_c8 = *(undefined8 *)(param_1 + 0x1c);
    uStack_c0 = *(undefined8 *)(param_1 + 0x1e);
    local_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_b0 = *(ulong *)(param_1 + 0x22);
    local_a8 = *(undefined8 *)(param_1 + 0x24);
    uStack_a0 = *(undefined8 *)(param_1 + 0x26);
    local_98 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = *(undefined8 *)(param_1 + 0x2a);
    local_88 = *(undefined8 *)(param_1 + 0x2c);
    uStack_80 = *(undefined8 *)(param_1 + 0x2e);
    local_78 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x32);
    local_68 = *(undefined8 *)(param_1 + 0x34);
    uStack_60 = *(undefined8 *)(param_1 + 0x36);
    local_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x3a);
    local_48 = *(undefined8 *)(param_1 + 0x3c);
    uStack_40 = *(undefined8 *)(param_1 + 0x3e);
    WebPPictureResetBuffers(&local_138);
    uStack_130 = CONCAT44(local_140,local_13c);
    iVar1 = WebPPictureAlloc(&local_138);
    if (iVar1 == 0) {
      uVar4 = WebPEncodingSetError(param_1,uStack_b0 & 0xffffffff);
      goto LAB_00100b6d;
    }
    if (*param_1 == 0) {
      lVar3 = WebPSafeMalloc((long)local_13c * 2,4);
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0xc) == 0) {
LAB_00100ad7:
          iVar1 = param_1[10];
          uVar4 = *(undefined8 *)(param_1 + 4);
        }
        else {
          WebPInitAlphaProcessing();
          iVar1 = RescalePlane(*(undefined8 *)(param_1 + 0xc),iVar5,iVar2,param_1[0xe],local_108,
                               local_13c,local_140,uStack_100 & 0xffffffff,lVar3,1);
          if (iVar1 == 0) goto LAB_00100b60;
          iVar1 = param_1[10];
          uVar4 = *(undefined8 *)(param_1 + 4);
          if (*(long *)(param_1 + 0xc) != 0) {
            WebPMultRows(uVar4,iVar1,*(long *)(param_1 + 0xc),param_1[0xe],param_1[2],param_1[3],0);
            goto LAB_00100ad7;
          }
        }
        iVar1 = RescalePlane(uVar4,iVar5,iVar2,iVar1,local_128,local_13c,local_140,
                             uStack_110 & 0xffffffff,lVar3,1);
        if (iVar1 != 0) {
          iVar1 = iVar2 + 1 >> 1;
          iVar5 = iVar5 + 1 >> 1;
          iVar2 = RescalePlane(*(undefined8 *)(param_1 + 6),iVar5,iVar1,param_1[0xb],uStack_120,
                               local_13c + 1 >> 1,local_140 + 1 >> 1,uStack_110 >> 0x20,lVar3,1);
          if ((iVar2 != 0) &&
             (iVar2 = RescalePlane(*(undefined8 *)(param_1 + 8),iVar5,iVar1,param_1[0xb],local_118,
                                   local_13c + 1 >> 1,local_140 + 1 >> 1,uStack_110 >> 0x20,lVar3),
             iVar2 != 0)) {
            if (local_108 != 0) {
              WebPMultRows(local_128,uStack_110 & 0xffffffff,local_108,uStack_100 & 0xffffffff,
                           uStack_130 & 0xffffffff,uStack_130._4_4_,1);
            }
            goto LAB_00100c35;
          }
        }
        goto LAB_00100b60;
      }
    }
    else {
      lVar3 = WebPSafeMalloc((long)local_13c << 3,4);
      if (lVar3 != 0) {
        WebPInitAlphaProcessing();
        WebPMultARGBRows(*(undefined8 *)(param_1 + 0x12),param_1[0x14] * 4,param_1[2],param_1[3],0);
        iVar2 = RescalePlane(*(undefined8 *)(param_1 + 0x12),iVar5,iVar2,param_1[0x14] * 4,uStack_f0
                             ,local_13c,local_140,(int)local_e8 << 2,lVar3,4);
        if (iVar2 == 0) goto LAB_00100b60;
        WebPMultARGBRows(uStack_f0,(int)local_e8 * 4,uStack_130 & 0xffffffff,uStack_130._4_4_,1);
LAB_00100c35:
        WebPPictureFree(param_1);
        WebPSafeFree(lVar3);
        uVar4 = 1;
        *(undefined8 *)param_1 = local_138;
        *(ulong *)(param_1 + 2) = uStack_130;
        *(undefined8 *)(param_1 + 4) = local_128;
        *(undefined8 *)(param_1 + 6) = uStack_120;
        *(undefined8 *)(param_1 + 8) = local_118;
        *(ulong *)(param_1 + 10) = uStack_110;
        *(long *)(param_1 + 0xc) = local_108;
        *(ulong *)(param_1 + 0xe) = uStack_100;
        *(undefined8 *)(param_1 + 0x10) = local_f8;
        *(undefined8 *)(param_1 + 0x12) = uStack_f0;
        *(undefined8 *)(param_1 + 0x14) = local_e8;
        *(undefined8 *)(param_1 + 0x16) = uStack_e0;
        *(undefined8 *)(param_1 + 0x18) = local_d8;
        *(undefined8 *)(param_1 + 0x1a) = uStack_d0;
        *(undefined8 *)(param_1 + 0x1c) = local_c8;
        *(undefined8 *)(param_1 + 0x1e) = uStack_c0;
        *(undefined8 *)(param_1 + 0x20) = local_b8;
        *(ulong *)(param_1 + 0x22) = uStack_b0;
        *(undefined8 *)(param_1 + 0x24) = local_a8;
        *(undefined8 *)(param_1 + 0x26) = uStack_a0;
        *(undefined8 *)(param_1 + 0x28) = local_98;
        *(undefined8 *)(param_1 + 0x2a) = uStack_90;
        *(undefined8 *)(param_1 + 0x2c) = local_88;
        *(undefined8 *)(param_1 + 0x2e) = uStack_80;
        *(undefined8 *)(param_1 + 0x30) = local_78;
        *(undefined8 *)(param_1 + 0x32) = uStack_70;
        *(undefined8 *)(param_1 + 0x34) = local_68;
        *(undefined8 *)(param_1 + 0x36) = uStack_60;
        *(undefined8 *)(param_1 + 0x38) = local_58;
        *(undefined8 *)(param_1 + 0x3a) = uStack_50;
        *(undefined8 *)(param_1 + 0x3c) = local_48;
        *(undefined8 *)(param_1 + 0x3e) = uStack_40;
        goto LAB_00100b6d;
      }
    }
    WebPPictureFree(&local_138);
    uVar4 = WebPEncodingSetError(param_1,1);
  }
LAB_00100b6d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


