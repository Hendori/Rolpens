
undefined8
ParseHeadersInternal
          (int *param_1,ulong param_2,int *param_3,int *param_4,uint *param_5,uint *param_6,
          undefined4 *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  uint local_ac;
  int local_90;
  int local_8c;
  int *local_88;
  ulong uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  ulong uVar8;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_8c = 0;
  if (param_8 != (undefined8 *)0x0) {
    iVar7 = *(int *)(param_8 + 2);
  }
  bVar4 = param_1 == (int *)0x0 || param_2 < 0xc;
  if (bVar4) goto LAB_001000f8;
  local_48 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_88 = param_1;
  uStack_80 = param_2;
  if (*param_1 != 0x46464952) {
    uVar11 = 0;
    uVar10 = param_2;
    goto LAB_0010012a;
  }
  if (param_1[2] == 0x50424557) {
    uVar13 = param_1[1];
    uVar11 = (ulong)uVar13;
    if (uVar13 - 0xc < 0xffffffeb) {
      if (iVar7 == 0) {
        local_58 = ZEXT416(uVar13) << 0x40;
        param_1 = param_1 + 3;
        uVar10 = param_2 - 0xc;
        if (7 < param_2 - 0xc) goto LAB_0010012a;
      }
      else if (uVar11 <= param_2 - 8) {
        local_58 = ZEXT416(uVar13) << 0x40;
        param_1 = param_1 + 3;
        uVar10 = param_2 - 0xc;
LAB_0010012a:
        if (*param_1 == 0x58385056) {
          if (param_1[1] == 10) {
            if (uVar10 < 0x12) goto LAB_001000f8;
            uVar13 = param_1[2];
            iVar14 = ((uint)*(byte *)((long)param_1 + 0xd) << 8 |
                      (uint)*(byte *)((long)param_1 + 0xe) << 0x10 | (uint)*(byte *)(param_1 + 3)) +
                     1;
            iVar15 = ((uint)*(byte *)(param_1 + 4) << 8 |
                      (uint)*(byte *)((long)param_1 + 0x11) << 0x10 |
                     (uint)*(byte *)((long)param_1 + 0xf)) + 1;
            if (((ulong)((long)iVar14 * (long)iVar15) >> 0x20 == 0) && (uVar11 != 0)) {
              param_1 = (int *)((long)param_1 + 0x12);
              uVar10 = uVar10 - 0x12;
              bVar3 = true;
              local_ac = uVar13 & 2;
              bVar4 = local_ac != 0;
              uVar12 = (uint)bVar4;
              goto LAB_0010014e;
            }
          }
          goto LAB_00100228;
        }
        bVar3 = false;
        uVar13 = 0;
        iVar15 = 0;
        iVar14 = 0;
        local_ac = 0;
        uVar12 = 0;
LAB_0010014e:
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar13 >> 4 & 1;
        }
        if (param_6 != (uint *)0x0) {
          *param_6 = uVar12;
        }
        if (param_7 != (undefined4 *)0x0) {
          *param_7 = 0;
        }
        local_90 = iVar14;
        local_8c = iVar15;
        if (bVar3) {
          if ((param_8 != (undefined8 *)0x0) || (!bVar4)) {
            if (3 < uVar10) {
              if (uVar11 == 0) {
                iVar1 = *param_1;
                if (7 < uVar10) {
                  if ((iVar1 == 0x20385056) || (uVar8 = uVar10, iVar1 == 0x4c385056)) {
                    uVar8 = (ulong)(uint)param_1[1];
                    uVar13 = (uint)(iVar1 == 0x4c385056);
                    goto LAB_001004ae;
                  }
                  goto LAB_00100331;
                }
              }
              else if (7 < uVar10) goto LAB_001001af;
            }
LAB_001002d3:
            if (param_8 != (undefined8 *)0x0) goto LAB_001000f8;
          }
        }
        else {
          if (uVar10 < 4) goto LAB_001000f8;
          if ((uVar11 == 0) && (*param_1 == 0x48504c41)) {
            if (uVar10 < 8) goto LAB_001000f8;
LAB_001001af:
            uVar13 = 0x16;
            do {
              uVar12 = param_1[1];
              if (0xfffffff6 < uVar12) goto LAB_00100228;
              uVar5 = uVar12 + 9 & 0xfffffffe;
              uVar8 = (ulong)uVar5;
              uVar13 = uVar13 + uVar5;
              if ((uVar11 != 0) && (uVar11 < uVar13)) goto LAB_00100228;
              if ((*param_1 == 0x20385056) || (*param_1 == 0x4c385056)) {
                iVar1 = *param_1;
                iVar2 = *param_1;
                goto LAB_00100320;
              }
              if (uVar10 < uVar8) break;
              if (*param_1 == 0x48504c41) {
                local_68._8_4_ = uVar12;
                local_68._0_8_ = param_1 + 2;
                local_68._12_4_ = 0;
              }
              uVar10 = uVar10 - uVar8;
              param_1 = (int *)((long)param_1 + uVar8);
            } while (7 < uVar10);
LAB_001002c8:
            if (!bVar3) goto LAB_001000f8;
            goto LAB_001002d3;
          }
          iVar1 = *param_1;
          iVar2 = *param_1;
          if (uVar10 < 8) goto LAB_001000f8;
LAB_00100320:
          uVar13 = (uint)(iVar2 == 0x4c385056);
          if ((iVar1 == 0x20385056) || (uVar8 = uVar10, iVar2 == 0x4c385056)) {
            uVar8 = (ulong)(uint)param_1[1];
            if ((0xb < uVar11) && (uVar11 - 0xc < uVar8)) goto LAB_00100228;
LAB_001004ae:
            uVar10 = uVar10 - 8;
            if ((iVar7 != 0) && (uVar10 < uVar8)) goto LAB_001002c8;
            local_58._0_8_ = uVar8;
            param_1 = param_1 + 2;
            local_48 = (ulong)uVar13;
          }
          else {
LAB_00100331:
            uVar6 = VP8LCheckSignature(param_1,uVar8);
            local_58._0_8_ = uVar8;
            local_48 = CONCAT44(local_48._4_4_,uVar6);
            uVar10 = uVar8;
          }
          if (0xfffffff6 < uVar8) goto LAB_00100228;
          if ((param_7 == (undefined4 *)0x0) || (local_ac != 0)) {
            if ((int)local_48 != 0) goto LAB_00100508;
LAB_0010039b:
            if (uVar10 < 10) goto LAB_001002c8;
            iVar7 = VP8GetInfo(param_1,uVar10,uVar8,&local_90,&local_8c);
          }
          else {
            if ((int)local_48 == 0) {
              *param_7 = 1;
              goto LAB_0010039b;
            }
            *param_7 = 2;
LAB_00100508:
            if (uVar10 < 5) goto LAB_001002c8;
            iVar7 = VP8LGetInfo(param_1,uVar10,&local_90,&local_8c,param_5);
          }
          if ((iVar7 == 0) || ((bVar3 && ((local_90 != iVar14 || (local_8c != iVar15))))))
          goto LAB_00100228;
          if (param_8 != (undefined8 *)0x0) {
            param_8[2] = local_78._0_8_;
            param_8[3] = local_78._8_8_;
            param_8[8] = local_48;
            param_8[3] = (long)param_1 - (long)local_88;
            *param_8 = local_88;
            param_8[1] = uStack_80;
            param_8[4] = local_68._0_8_;
            param_8[5] = local_68._8_8_;
            param_8[6] = local_58._0_8_;
            param_8[7] = local_58._8_8_;
          }
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = *param_5 | (uint)(local_68._0_8_ != 0);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = local_90;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = local_8c;
        }
        uVar9 = 0;
        goto LAB_001000fd;
      }
LAB_001000f8:
      uVar9 = 7;
      goto LAB_001000fd;
    }
  }
LAB_00100228:
  uVar9 = 3;
LAB_001000fd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int WebPParseHeaders(undefined8 *param_1)

{
  long in_FS_OFFSET;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = ParseHeadersInternal(*param_1,param_1[1],0,0,0,&local_14,0);
  if (((local_18 == 0) || (local_18 == 7)) && (local_14 != 0)) {
    local_18 = 4;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int DecodeInto(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  long local_138;
  long local_130;
  undefined4 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  long local_88;
  long local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = 1;
  local_138 = param_1;
  local_130 = param_2;
  iVar2 = WebPParseHeaders(&local_138);
  if (iVar2 != 0) goto LAB_00100679;
  iVar3 = VP8InitIoInternal(&local_e8,0x209);
  if (iVar3 == 0) {
    iVar2 = 2;
    goto LAB_00100679;
  }
  local_80 = local_138 + local_120;
  local_88 = local_130 - local_120;
  WebPInitCustomIo(param_3,&local_e8);
  if (local_f8 == 0) {
    piVar4 = (int *)VP8New();
    if (piVar4 == (int *)0x0) goto LAB_001007b8;
    *(undefined8 *)(piVar4 + 0x2e6) = local_118;
    *(undefined8 *)(piVar4 + 0x2e8) = local_110;
    iVar3 = VP8GetHeaders(piVar4,&local_e8);
    if (iVar3 != 0) {
      iVar3 = WebPAllocateDecBuffer(local_e8,local_e4,param_3[5],*param_3);
      if (iVar3 != 0) {
        VP8Delete(piVar4);
        goto LAB_001007f4;
      }
      iVar3 = VP8GetThreadMethod(param_3[5],&local_138,local_e8,local_e4);
      uVar1 = param_3[5];
      piVar4[0x32] = iVar3;
      VP8InitDithering(uVar1,piVar4);
      iVar3 = VP8Decode(piVar4,&local_e8);
      if (iVar3 != 0) {
        VP8Delete(piVar4);
        goto LAB_00100732;
      }
    }
    iVar3 = *piVar4;
    VP8Delete(piVar4);
LAB_00100729:
    if (iVar3 != 0) {
LAB_001007f4:
      iVar2 = iVar3;
      WebPFreeDecBuffer(*param_3);
      goto LAB_00100679;
    }
  }
  else {
    piVar4 = (int *)VP8LNew();
    if (piVar4 == (int *)0x0) {
LAB_001007b8:
      iVar2 = 1;
      goto LAB_00100679;
    }
    iVar3 = VP8LDecodeHeader(piVar4,&local_e8);
    if (iVar3 == 0) {
LAB_0010071d:
      iVar3 = *piVar4;
      VP8LDelete(piVar4);
      goto LAB_00100729;
    }
    iVar3 = WebPAllocateDecBuffer(local_e8,local_e4,param_3[5],*param_3);
    if (iVar3 != 0) {
      VP8LDelete();
      goto LAB_001007f4;
    }
    iVar3 = VP8LDecodeImage(piVar4);
    if (iVar3 == 0) goto LAB_0010071d;
    VP8LDelete(piVar4);
  }
LAB_00100732:
  if ((param_3[5] != 0) && (*(int *)(param_3[5] + 0x30) != 0)) {
    iVar2 = WebPFlipBuffer(*param_3);
  }
LAB_00100679:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



long DecodeIntoRGBABuffer
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 *local_128;
  undefined8 local_120 [13];
  undefined4 local_b8 [3];
  undefined4 local_ac;
  long local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long local_40;
  
  bVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != 0) {
    iVar1 = WebPInitDecBufferInternal(local_b8,0x209);
    if (iVar1 != 0) {
      puVar3 = local_120;
      local_b8[0] = param_1;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }
      local_ac = 1;
      local_128 = local_b8;
      local_a8 = param_4;
      local_a0 = param_5;
      local_98 = param_6;
      iVar1 = DecodeInto(param_2,param_3,&local_128);
      if (iVar1 == 0) goto LAB_00100972;
    }
  }
  param_4 = 0;
LAB_00100972:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



void WebPResetDecParams(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[0xd] = 0;
    puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x70U >>
                        3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



void WebPDecodeRGBInto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  DecodeIntoRGBABuffer(0,param_1,param_2,param_3,param_5,param_4);
  return;
}



void WebPDecodeRGBAInto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  DecodeIntoRGBABuffer(1,param_1,param_2,param_3,param_5,param_4);
  return;
}



void WebPDecodeARGBInto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  DecodeIntoRGBABuffer(4,param_1,param_2,param_3,param_5,param_4);
  return;
}



void WebPDecodeBGRInto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  DecodeIntoRGBABuffer(2,param_1,param_2,param_3,param_5,param_4);
  return;
}



void WebPDecodeBGRAInto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  DecodeIntoRGBABuffer(3,param_1,param_2,param_3,param_5,param_4);
  return;
}



long WebPDecodeYUVInto(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                      undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                      undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 *local_128;
  undefined8 local_120 [13];
  undefined4 local_b8 [3];
  undefined4 local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_40;
  
  bVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    iVar1 = WebPInitDecBufferInternal(local_b8,0x209);
    if (iVar1 != 0) {
      local_b8[0] = 0xb;
      puVar3 = local_120;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }
      local_84 = param_8;
      local_70 = param_7;
      local_80 = param_11;
      local_98 = param_9;
      local_68 = param_10;
      local_ac = 1;
      local_128 = local_b8;
      local_a8 = param_3;
      local_a0 = param_6;
      local_88 = param_5;
      local_78 = param_4;
      iVar1 = DecodeInto(param_1,param_2,&local_128);
      if (iVar1 == 0) goto LAB_00100ba2;
    }
  }
  param_3 = 0;
LAB_00100ba2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



undefined8 WebPGetInfo(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    local_28 = 0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    iVar1 = ParseHeadersInternal
                      (param_1,param_2,local_48,local_48 + 4,local_48 + 8,local_48 + 0xc,local_38);
    if (iVar1 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_48._0_4_;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_48._4_4_;
      }
      uVar2 = 1;
      goto LAB_00100c4b;
    }
  }
  uVar2 = 0;
LAB_00100c4b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
Decode(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
      undefined4 *param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 *local_128;
  undefined8 local_120 [13];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  long local_40;
  
  bVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WebPInitDecBufferInternal(&local_b8,0x209);
  if (iVar1 != 0) {
    puVar3 = local_120;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    local_128 = &local_b8;
    local_b8 = param_1;
    iVar1 = WebPGetInfo(param_2,param_3,&local_b4,local_b0);
    if (iVar1 != 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_b4;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_b0[0];
      }
      iVar1 = DecodeInto(param_2,param_3,&local_128);
      if (iVar1 == 0) {
        if (param_6 != 0) {
          WebPCopyDecBuffer(&local_b8,param_6);
        }
        goto LAB_00100d72;
      }
    }
  }
  local_a8 = 0;
LAB_00100d72:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8;
}



void WebPDecodeRGB(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Decode(0,param_1,param_2,param_3,param_4,0);
  return;
}



void WebPDecodeRGBA(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Decode(1,param_1,param_2,param_3,param_4,0);
  return;
}



void WebPDecodeARGB(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Decode(4,param_1,param_2,param_3,param_4,0);
  return;
}



void WebPDecodeBGR(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Decode(2,param_1,param_2,param_3,param_4,0);
  return;
}



void WebPDecodeBGRA(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Decode(3,param_1,param_2,param_3,param_4,0);
  return;
}



long WebPDecodeYUV(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_5 == (undefined8 *)0x0) || (param_6 == (undefined8 *)0x0)) ||
      (param_7 == (undefined4 *)0x0)) || (param_8 == (undefined4 *)0x0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = Decode(0xb,param_1,param_2,param_3,param_4,auStack_a8);
    if (lVar1 != 0) {
      *param_5 = local_90;
      *param_6 = local_88;
      *param_7 = local_78;
      *param_8 = local_74;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool WebPInitDecoderConfigInternal(undefined8 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((param_2 >> 8 == 2) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = 0;
    param_1[0x1d] = 0;
    puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xf0U >>
                        3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar1 = WebPInitDecBufferInternal(param_1 + 5,0x209);
    return iVar1 != 0;
  }
  return false;
}



undefined8
WebPGetFeaturesInternal(long param_1,undefined8 param_2,undefined1 (*param_3) [16],int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != (undefined1 (*) [16])0x0 && param_1 != 0) && (param_4 >> 8 == 2)) {
    *(undefined8 *)param_3[2] = 0;
    *param_3 = (undefined1  [16])0x0;
    param_3[1] = (undefined1  [16])0x0;
    uVar1 = ParseHeadersInternal
                      (param_1,param_2,param_3,*param_3 + 4,*param_3 + 8,*param_3 + 0xc,param_3 + 1,
                       0);
    return uVar1;
  }
  return 2;
}



ulong WebPDecode(long param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined4 *local_128;
  undefined8 local_120 [4];
  undefined1 (*local_100) [16];
  undefined4 local_b8;
  undefined8 local_b4;
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined1 (*) [16])0x0) {
    uVar4 = 2;
    if (param_1 == 0) goto LAB_001010f8;
    *param_3 = (undefined1  [16])0x0;
    *(undefined8 *)param_3[2] = 0;
    param_3[1] = (undefined1  [16])0x0;
    uVar2 = ParseHeadersInternal();
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar2;
      if (uVar2 == 7) {
        uVar4 = 3;
      }
      goto LAB_001010f8;
    }
    puVar1 = (undefined4 *)(param_3[2] + 8);
    puVar6 = local_120;
    for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    local_100 = param_3 + 10;
    local_128 = puVar1;
    iVar3 = WebPAvoidSlowMemory(puVar1,param_3);
    if (iVar3 == 0) {
      uVar4 = DecodeInto(param_1,param_2,&local_128);
      goto LAB_001010f8;
    }
    iVar3 = WebPInitDecBufferInternal(&local_b8,0x209);
    if (iVar3 != 0) {
      local_b8 = *(undefined4 *)(param_3[2] + 8);
      local_b4 = *(undefined8 *)*param_3;
      local_128 = &local_b8;
      uVar2 = DecodeInto(param_1,param_2,&local_128);
      if (uVar2 == 0) {
        uVar2 = WebPCopyDecBufferPixels(&local_b8,puVar1);
      }
      WebPFreeDecBuffer(&local_b8);
      uVar4 = (ulong)uVar2;
      goto LAB_001010f8;
    }
  }
  uVar4 = 2;
LAB_001010f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



uint WebPCheckCropDimensions
               (int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  
  uVar1 = 0;
  if (-1 < (int)(param_3 | param_4)) {
    if ((((param_5 < 1) || (param_6 < 1)) || (param_1 <= (int)param_3)) || (param_1 < param_5)) {
      return 0;
    }
    if (param_5 <= (int)(param_1 - param_3)) {
      if (param_2 <= (int)param_4) {
        return 0;
      }
      if (param_2 < param_6) {
        return 0;
      }
      uVar1 = (uint)(param_6 <= (int)(param_2 - param_4));
    }
  }
  return uVar1;
}



undefined8 WebPIoInitFromOptions(int *param_1,ulong *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int local_38;
  int local_34;
  long local_30;
  
  uVar4 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = (int)uVar4;
  uVar10 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar4 & 0xffffffff;
  if (param_1 == (int *)0x0) {
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(int *)((long)param_2 + 0x7c) = iVar9;
    *(uint *)((long)param_2 + 0x84) = uVar10;
    *(undefined4 *)(param_2 + 0x11) = 0;
    *(undefined4 *)(param_2 + 0xe) = 0;
    *(undefined4 *)(param_2 + 0xb) = 1;
    *(ulong *)((long)param_2 + 0xc) = uVar4;
  }
  else {
    if (param_1[2] != 0) {
      uVar4 = (ulong)(uint)param_1[5];
      uVar6 = (ulong)(uint)param_1[6];
      *(undefined4 *)((long)param_2 + 0x74) = 1;
      uVar7 = param_1[3];
      uVar3 = param_1[4];
      if (10 < param_3) {
        uVar7 = uVar7 & 0xfffffffe;
        uVar3 = uVar3 & 0xfffffffe;
      }
      iVar1 = WebPCheckCropDimensions(uVar5,uVar10,uVar7);
      if (iVar1 != 0) {
        *(int *)((long)param_2 + 0xc) = (int)uVar4;
        *(int *)(param_2 + 2) = (int)uVar6;
        param_2[0xf] = CONCAT44(uVar7 + (int)uVar4,uVar7);
        param_2[0x10] = CONCAT44(uVar3 + (int)uVar6,uVar3);
        uVar5 = uVar4;
        if (param_1[7] == 0) goto LAB_00101377;
LAB_00101283:
        local_38 = param_1[8];
        *(undefined4 *)(param_2 + 0x11) = 1;
        local_34 = param_1[9];
        iVar1 = WebPRescalerGetScaledDimensions
                          (uVar5 & 0xffffffff,uVar6 & 0xffffffff,&local_38,&local_34);
        if (iVar1 != 0) {
          *(ulong *)((long)param_2 + 0x8c) = CONCAT44(local_34,local_38);
          iVar1 = param_1[1];
          bVar8 = *param_1 != 0;
          *(uint *)(param_2 + 0xe) = (uint)bVar8;
          *(uint *)(param_2 + 0xb) = (uint)(iVar1 == 0);
          if ((int)param_2[0x11] != 0) {
            iVar9 = iVar9 * 3;
            iVar1 = iVar9 + 3;
            if (-1 < iVar9) {
              iVar1 = iVar9;
            }
            if (*(int *)((long)param_2 + 0x8c) < iVar1 >> 2) {
              iVar9 = uVar10 * 3;
              iVar1 = iVar9 + 3;
              if (-1 < iVar9) {
                iVar1 = iVar9;
              }
              bVar8 = (int)param_2[0x12] < iVar1 >> 2 || bVar8;
            }
            *(uint *)(param_2 + 0xe) = (uint)bVar8;
            *(undefined4 *)(param_2 + 0xb) = 0;
          }
          goto LAB_0010131a;
        }
      }
      uVar2 = 0;
      goto LAB_00101320;
    }
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    uVar6 = (ulong)uVar10;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(int *)((long)param_2 + 0x7c) = iVar9;
    *(uint *)((long)param_2 + 0x84) = uVar10;
    *(ulong *)((long)param_2 + 0xc) = uVar4;
    if (param_1[7] != 0) goto LAB_00101283;
LAB_00101377:
    iVar9 = *param_1;
    iVar1 = param_1[1];
    *(undefined4 *)(param_2 + 0x11) = 0;
    *(uint *)(param_2 + 0xe) = (uint)(iVar9 != 0);
    *(uint *)(param_2 + 0xb) = (uint)(iVar1 == 0);
  }
LAB_0010131a:
  uVar2 = 1;
LAB_00101320:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


