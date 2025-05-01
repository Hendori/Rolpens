
/* basisu::pvrtc4_swizzle_uv(unsigned int, unsigned int, unsigned int, unsigned int) */

uint basisu::pvrtc4_swizzle_uv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_3;
  if (param_1 <= param_2) {
    param_2 = param_1;
    uVar1 = param_4;
  }
  if (1 < param_2) {
    uVar5 = 1;
    uVar4 = 1;
    uVar3 = 0;
    bVar2 = 0;
    do {
      if ((uVar4 & param_4) != 0) {
        uVar3 = uVar3 | uVar5;
      }
      if ((uVar4 & param_3) != 0) {
        uVar3 = uVar5 * 2 | uVar3;
      }
      uVar4 = uVar4 * 2;
      uVar5 = uVar5 << 2;
      bVar2 = bVar2 + 1;
    } while (uVar4 < param_2);
    uVar1 = (uVar1 >> (bVar2 & 0x1f)) << (bVar2 * '\x02' & 0x1f) | uVar3;
  }
  return uVar1;
}



/* basisu::pvrtc4_block::get_endpoint(unsigned int, bool) const */

uint __thiscall basisu::pvrtc4_block::get_endpoint(pvrtc4_block *this,uint param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 4) >> ((byte)(param_1 << 4) & 0x1f);
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = uVar1 >> 0xc & 7;
    uVar2 = uVar1 >> 8 & 0xf;
    uVar4 = uVar1 >> 4 & 0xf;
    if (param_1 == 0) {
      uVar1 = uVar1 >> 1 & 7;
      if (!param_2) goto LAB_001000f1;
      uVar2 = uVar2 >> 3 | uVar2 * 2;
      uVar3 = uVar3 * 0x22;
      uVar4 = uVar4 >> 3 | uVar4 * 2;
      uVar1 = uVar1 * 4 | uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 & 0xf;
      if (!param_2) goto LAB_001000f1;
      uVar2 = uVar2 >> 3 | uVar2 * 2;
      uVar3 = uVar3 * 0x22;
      uVar4 = uVar4 >> 3 | uVar4 * 2;
      uVar1 = uVar1 * 2 | uVar1 >> 3;
    }
  }
  else {
    uVar2 = uVar1 >> 10 & 0x1f;
    uVar4 = uVar1 >> 5 & 0x1f;
    if (param_1 == 0) {
      uVar3 = 7;
      uVar1 = uVar1 >> 1 & 0xf;
      if (!param_2) goto LAB_001000f1;
      uVar1 = uVar1 * 2 | uVar1 >> 3;
      uVar3 = 0xffffffff;
    }
    else {
      uVar1 = uVar1 & 0x1f;
      uVar3 = 7;
      if (!param_2) goto LAB_001000f1;
      uVar3 = 0xffffffff;
    }
  }
  uVar2 = uVar2 >> 2 | uVar2 * 8;
  uVar4 = uVar4 >> 2 | uVar4 * 8;
  uVar1 = uVar1 * 8 | uVar1 >> 2;
LAB_001000f1:
  return (((uVar3 & 0xff) << 8 | uVar1) << 8 | uVar4) << 8 | uVar2;
}



/* basisu::pvrtc4_block::get_endpoint_5554(unsigned int) const */

uint __thiscall basisu::pvrtc4_block::get_endpoint_5554(pvrtc4_block *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(this + 4) >> ((byte)(param_1 << 4) & 0x1f);
  if ((uVar3 & 0x8000) == 0) {
    uVar2 = uVar3 >> 8 & 0xf;
    uVar4 = uVar3 >> 4 & 0xf;
    uVar1 = uVar3 >> 0xb & 0xe;
    uVar2 = uVar2 >> 3 | uVar2 * 2;
    uVar4 = uVar4 >> 3 | uVar4 * 2;
    if (param_1 == 0) {
      uVar3 = uVar3 >> 1 & 7;
      uVar3 = uVar3 * 4 | uVar3 >> 1;
    }
    else {
      uVar3 = (uVar3 & 0xf) >> 3 | (uVar3 & 0xf) * 2;
    }
  }
  else {
    uVar2 = uVar3 >> 10 & 0x1f;
    uVar4 = uVar3 >> 5 & 0x1f;
    if (param_1 == 0) {
      uVar3 = uVar3 >> 1 & 0xf;
      uVar3 = uVar3 * 2 | uVar3 >> 3;
      uVar1 = 0xf;
    }
    else {
      uVar3 = uVar3 & 0x1f;
      uVar1 = 0xf;
    }
  }
  return ((uVar1 << 8 | uVar3) << 8 | uVar4) << 8 | uVar2;
}



/* basisu::pvrtc4_image::get_interpolated_colors(unsigned int, unsigned int, basisu::color_rgba*)
   const */

uint __thiscall
basisu::pvrtc4_image::get_interpolated_colors
          (pvrtc4_image *this,uint param_1,uint param_2,color_rgba *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint3 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint6 uVar24;
  undefined1 auVar25 [11];
  undefined1 auVar26 [11];
  undefined1 auVar27 [13];
  undefined1 auVar28 [13];
  long lVar29;
  color_rgba *pcVar30;
  color_rgba *pcVar31;
  uint uVar32;
  color_rgba cVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  long in_FS_OFFSET;
  ushort uVar40;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  undefined1 auVar41 [16];
  ushort uVar66;
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 uVar67;
  ushort uVar68;
  undefined1 uVar71;
  ushort uVar72;
  byte bVar73;
  ushort uVar74;
  ushort uVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 uVar76;
  ushort uVar77;
  short sVar78;
  undefined1 uVar81;
  byte bVar82;
  undefined1 auVar79 [16];
  ushort uVar83;
  short sVar84;
  byte bVar87;
  undefined1 auVar85 [16];
  short sVar88;
  short sVar89;
  undefined1 auVar90 [16];
  short sVar93;
  short sVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  uint local_7c;
  int local_78;
  uint local_74;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar47 [16];
  undefined1 auVar58 [16];
  undefined1 auVar43 [16];
  undefined1 auVar48 [16];
  undefined1 auVar54 [16];
  undefined1 auVar59 [16];
  undefined1 auVar49 [16];
  undefined1 auVar60 [16];
  undefined1 auVar44 [16];
  undefined1 auVar50 [16];
  undefined1 auVar55 [16];
  undefined1 auVar61 [16];
  undefined1 auVar51 [16];
  undefined1 auVar62 [16];
  byte bVar80;
  byte bVar86;
  
  uVar32 = (int)(param_2 - 2) >> 2;
  iVar37 = uVar32 + 1;
  iVar38 = *(int *)(this + 0x20);
  uVar36 = (int)(param_1 - 2) >> 2;
  local_78 = uVar36 + 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar36 < 0) {
    local_7c = 0;
    uVar34 = (int)-uVar36 % iVar38;
    if (uVar34 != 0) {
      uVar34 = iVar38 - uVar34;
      local_7c = uVar34;
    }
    if (local_78 == 0) {
LAB_00100741:
      if (iVar38 <= local_78) goto LAB_001007a8;
    }
    else {
      local_78 = 0;
      if ((int)~uVar36 % iVar38 != 0) {
        local_78 = iVar38 - (int)~uVar36 % iVar38;
      }
    }
  }
  else {
    uVar34 = uVar36;
    local_7c = uVar36;
    if ((int)uVar36 < iVar38) goto LAB_00100741;
    uVar34 = (int)uVar36 % iVar38;
LAB_001007a8:
    local_7c = uVar34;
    local_78 = local_78 % iVar38;
  }
  iVar38 = *(int *)(this + 0x24);
  if ((int)uVar32 < 0) {
    local_74 = 0;
    uVar36 = (int)-uVar32 % iVar38;
    if (uVar36 != 0) {
      uVar36 = iVar38 - uVar36;
      local_74 = uVar36;
    }
    if (iVar37 != 0) {
      iVar37 = 0;
      if ((int)~uVar32 % iVar38 != 0) {
        iVar37 = iVar38 - (int)~uVar32 % iVar38;
      }
      goto LAB_00100347;
    }
  }
  else {
    uVar36 = uVar32;
    local_74 = uVar32;
    if (iVar38 <= (int)uVar32) {
      local_74 = (int)uVar32 % iVar38;
      iVar37 = iVar37 % iVar38;
      goto LAB_00100347;
    }
  }
  if (iVar38 <= iVar37) {
    iVar37 = iVar37 % iVar38;
    local_74 = uVar36;
  }
LAB_00100347:
  iVar38 = *(int *)(this + 8);
  lVar29 = *(long *)(this + 0x10);
  iVar35 = iVar38 * iVar37;
  local_48 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(uint)(iVar35 + local_78) * 8),0);
  local_4c = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(iVar35 + local_7c) * 8),0);
  iVar38 = iVar38 * local_74;
  local_50 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(uint)(iVar38 + local_78) * 8),0);
  local_54 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(iVar38 + local_7c) * 8),0);
  iVar35 = *(int *)(interpolate(int,int,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&)
                    ::s_interp + (ulong)(param_1 & 3) * 4);
  iVar39 = *(int *)(interpolate(int,int,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&)
                    ::s_interp + (ulong)(param_2 & 3) * 4);
  iVar38 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar35 + (local_54 & 0xff) * 4;
  iVar38 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar35 + (local_4c & 0xff) * 4) - iVar38) *
           iVar39 + iVar38 * 4;
  lVar29 = 1;
  do {
    bVar73 = *(byte *)((long)&local_4c + lVar29);
    bVar80 = *(byte *)((long)&local_54 + lVar29);
    *(char *)((long)&local_48 + lVar29 + 3) = (char)(iVar38 >> 6) + (char)(iVar38 >> 1);
    iVar38 = ((uint)*(byte *)((long)&local_50 + lVar29) - (uint)bVar80) * iVar35 + (uint)bVar80 * 4;
    pbVar1 = (byte *)((long)&local_48 + lVar29);
    lVar29 = lVar29 + 1;
    iVar38 = ((((uint)*pbVar1 - (uint)bVar73) * iVar35 + (uint)bVar73 * 4) - iVar38) * iVar39 +
             iVar38 * 4;
  } while (lVar29 != 4);
  local_44 = CONCAT13((char)(iVar38 >> 4) + (char)iVar38,(undefined3)local_44);
  *(undefined4 *)param_3 = local_44;
  iVar38 = *(int *)(this + 8);
  lVar29 = *(long *)(this + 0x10);
  iVar37 = iVar37 * iVar38;
  local_48 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(uint)(local_78 + iVar37) * 8),1);
  local_4c = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(iVar37 + local_7c) * 8),1);
  iVar38 = iVar38 * local_74;
  local_50 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(uint)(local_78 + iVar38) * 8),1);
  local_54 = pvrtc4_block::get_endpoint_5554
                       ((pvrtc4_block *)(lVar29 + (ulong)(iVar38 + local_7c) * 8),1);
  iVar37 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar35 + (local_54 & 0xff) * 4;
  iVar37 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar35 + (local_4c & 0xff) * 4) - iVar37) *
           iVar39 + iVar37 * 4;
  lVar29 = 1;
  do {
    bVar73 = *(byte *)((long)&local_4c + lVar29);
    bVar80 = *(byte *)((long)&local_54 + lVar29);
    *(char *)((long)&local_48 + lVar29 + 3) = (char)(iVar37 >> 6) + (char)(iVar37 >> 1);
    iVar37 = ((uint)*(byte *)((long)&local_50 + lVar29) - (uint)bVar80) * iVar35 + (uint)bVar80 * 4;
    pbVar1 = (byte *)((long)&local_48 + lVar29);
    lVar29 = lVar29 + 1;
    iVar37 = ((((uint)*pbVar1 - (uint)bVar73) * iVar35 + (uint)bVar73 * 4) - iVar37) * iVar39 +
             iVar37 * 4;
  } while (lVar29 != 4);
  local_44 = CONCAT13((char)(iVar37 >> 4) + (char)iVar37,(undefined3)local_44);
  *(undefined4 *)(param_3 + 0xc) = local_44;
  uVar32 = *(uint *)(*(long *)(this + 0x10) + 4 +
                    (ulong)((param_1 >> 2) + (param_2 >> 2) * *(int *)(this + 8)) * 8) & 1;
  if (uVar32 == 0) {
    uVar2 = *(undefined4 *)param_3;
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    bVar87 = (byte)((uint)uVar2 >> 0x18);
    uVar67 = (undefined1)((uint)uVar2 >> 0x10);
    uVar4 = CONCAT25((short)(((uint7)bVar87 << 0x30) >> 0x28),CONCAT14(uVar67,uVar2));
    bVar86 = (byte)((uint)uVar2 >> 8);
    uVar83 = (ushort)uVar2;
    uVar5 = CONCAT25((short)(((uint7)bVar87 << 0x30) >> 0x28),CONCAT14(uVar67,uVar2));
    uVar8 = (ulong)CONCAT43((int)(CONCAT34((int3)((uint7)uVar5 >> 0x20),uVar2) >> 0x18),
                            CONCAT12(bVar86,uVar83)) & 0xffffffff00ffffff;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = CONCAT62((int6)(uVar8 >> 0x10),uVar83) & 0xffffffffffff00ff;
    uVar10 = (uint3)((uint7)uVar4 >> 0x20);
    auVar85._0_8_ = (ulong)CONCAT34(CONCAT12(bVar86,uVar83),(uint)uVar10) & 0xffff00ffffffffff;
    auVar85._8_4_ = CONCAT12(bVar86,uVar83) & 0xffff00ff;
    auVar85._12_3_ = uVar10;
    auVar85[0xf] = 0;
    bVar82 = (byte)((uint)uVar3 >> 0x18);
    uVar67 = (undefined1)((uint)uVar3 >> 0x10);
    uVar6 = CONCAT25((short)(((uint7)bVar82 << 0x30) >> 0x28),CONCAT14(uVar67,uVar3));
    bVar80 = (byte)((uint)uVar3 >> 8);
    uVar77 = (ushort)uVar3;
    uVar7 = CONCAT25((short)(((uint7)bVar82 << 0x30) >> 0x28),CONCAT14(uVar67,uVar3));
    uVar9 = (ulong)CONCAT43((int)(CONCAT34((int3)((uint7)uVar7 >> 0x20),uVar3) >> 0x18),
                            CONCAT12(bVar80,uVar77)) & 0xffffffff00ffffff;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = CONCAT62((int6)(uVar9 >> 0x10),uVar77) & 0xffffffffffff00ff;
    uVar10 = (uint3)((uint7)uVar6 >> 0x20);
    auVar79._0_8_ = (ulong)CONCAT34(CONCAT12(bVar80,uVar77),(uint)uVar10) & 0xffff00ffffffffff;
    auVar79._8_4_ = CONCAT12(bVar80,uVar77) & 0xffff00ff;
    auVar79._12_3_ = uVar10;
    auVar79[0xf] = 0;
    auVar41 = psllw(auVar91,2);
    auVar69 = psllw(auVar92,1);
    auVar90 = psllw(auVar79,1);
    sVar88 = (short)(uVar8 >> 0x10);
    sVar89 = (short)((uint7)uVar5 >> 0x20);
    sVar93 = (short)(uVar9 >> 0x10);
    sVar94 = (short)((uint7)uVar7 >> 0x20);
    sVar78 = (short)((uint7)uVar6 >> 0x20);
    uVar40 = auVar41._0_2_ + (uVar83 & 0xff) + auVar69._0_2_ + (uVar77 & 0xff);
    uVar63 = auVar41._2_2_ + sVar88 + auVar69._2_2_ + sVar93;
    uVar64 = auVar41._4_2_ + sVar89 + auVar69._4_2_ + sVar94;
    uVar65 = auVar41._6_2_ + (ushort)bVar87 + auVar69._6_2_ + (ushort)bVar82;
    auVar70 = psllw(auVar85,2);
    sVar84 = (short)((uint7)uVar4 >> 0x20);
    uVar66 = uVar65 >> 3;
    uVar36 = CONCAT22((ushort)(auVar41._8_2_ + auVar69._8_2_) >> 3,uVar66);
    uVar24 = CONCAT24((ushort)(auVar41._10_2_ + auVar69._10_2_) >> 3,uVar36);
    auVar25._6_5_ = 0;
    auVar25._0_6_ = uVar24;
    uVar8 = CONCAT26((ushort)(auVar41._12_2_ + auVar69._12_2_) >> 3,uVar24);
    auVar27._8_5_ = 0;
    auVar27._0_8_ = uVar8;
    uVar68 = auVar70._0_2_ + sVar84 + auVar90._0_2_ + sVar78;
    uVar72 = auVar70._2_2_ + (ushort)bVar87 + auVar90._2_2_ + (ushort)bVar82;
    uVar74 = auVar70._4_2_ + (uVar83 & 0xff) + auVar90._4_2_ + (uVar77 & 0xff);
    uVar75 = auVar70._6_2_ + (ushort)bVar86 + auVar90._6_2_ + (ushort)bVar80;
    bVar73 = (byte)(uVar72 >> 0xb);
    uVar71 = (undefined1)(uVar72 >> 3);
    uVar81 = (undefined1)(uVar63 >> 3);
    uVar67 = (undefined1)(uVar68 >> 3);
    uVar76 = (undefined1)(uVar40 >> 3);
    auVar44._14_2_ =
         (undefined2)(CONCAT19((byte)(uVar75 >> 0xb),CONCAT18((byte)(uVar65 >> 0xb),uVar8)) >> 0x40)
    ;
    auVar44[0xd] = (char)(uVar75 >> 3);
    auVar44._0_13_ = auVar27 << 0x30;
    auVar43._12_4_ = (undefined4)(CONCAT37(auVar44._13_3_,CONCAT16((char)uVar66,uVar24)) >> 0x30);
    auVar43[0xb] = (byte)(uVar74 >> 0xb);
    auVar43._0_11_ = auVar25 << 0x30;
    auVar42._10_6_ =
         (undefined6)(CONCAT55(auVar43._11_5_,CONCAT14((byte)(uVar64 >> 0xb),uVar36)) >> 0x20);
    auVar42[9] = (char)(uVar74 >> 3);
    auVar42._0_9_ = (unkuint9)uVar36 << 0x30;
    auVar12._1_8_ = (long)(CONCAT73(auVar42._9_7_,CONCAT12((char)(uVar64 >> 3),uVar66)) >> 0x10);
    auVar12[0] = bVar73;
    auVar12._9_7_ = 0;
    auVar11._10_6_ = 0;
    auVar11._0_10_ = SUB1610(auVar12 << 0x38,6);
    auVar90._11_5_ = 0;
    auVar90._0_11_ = SUB1611(auVar11 << 0x30,5);
    auVar70._12_4_ = 0;
    auVar70._0_12_ = SUB1612(auVar90 << 0x28,4);
    auVar69._13_3_ = 0;
    auVar69._0_13_ = SUB1613(auVar70 << 0x20,3);
    auVar41._14_2_ = 0;
    auVar41._0_14_ = SUB1614(auVar69 << 0x18,2);
    auVar41 = auVar41 << 0x10;
    auVar69 = psllw(auVar92,2);
    auVar51._0_14_ = auVar41._0_14_;
    auVar51[0xe] = bVar73;
    auVar51[0xf] = (byte)(uVar68 >> 0xb);
    auVar50._14_2_ = auVar51._14_2_;
    auVar50._0_13_ = auVar41._0_13_;
    auVar50[0xd] = (byte)(uVar40 >> 0xb);
    auVar49._13_3_ = auVar50._13_3_;
    auVar49._0_12_ = auVar41._0_12_;
    auVar49[0xc] = (byte)(uVar63 >> 0xb);
    auVar48._12_4_ = auVar49._12_4_;
    auVar48._0_11_ = auVar41._0_11_;
    auVar48[0xb] = uVar67;
    auVar47._11_5_ = auVar48._11_5_;
    auVar47._0_10_ = auVar41._0_10_;
    auVar47[10] = uVar71;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46._0_9_ = auVar41._0_9_;
    auVar46[9] = uVar76;
    auVar15._2_7_ = auVar46._9_7_;
    auVar15[1] = uVar81;
    auVar15[0] = bVar73;
    auVar15._9_7_ = 0;
    auVar14._10_6_ = 0;
    auVar14._0_10_ = SUB1610(auVar15 << 0x38,6);
    auVar13._11_5_ = 0;
    auVar13._0_11_ = SUB1611(auVar14 << 0x30,5);
    auVar45._4_12_ = SUB1612(auVar13 << 0x28,4);
    auVar45[3] = uVar71;
    auVar45[2] = uVar67;
    auVar45[1] = uVar81;
    auVar45[0] = uVar76;
    *(int *)(param_3 + 4) = auVar45._0_4_;
    auVar41 = psllw(auVar91,1);
    uVar40 = auVar41._0_2_ + (uVar83 & 0xff) + auVar69._0_2_ + (uVar77 & 0xff);
    uVar63 = auVar41._2_2_ + sVar88 + auVar69._2_2_ + sVar93;
    uVar64 = auVar41._4_2_ + sVar89 + auVar69._4_2_ + sVar94;
    uVar65 = auVar41._6_2_ + (ushort)bVar87 + auVar69._6_2_ + (ushort)bVar82;
    auVar70 = psllw(auVar85,1);
    auVar90 = psllw(auVar79,2);
    uVar66 = uVar65 >> 3;
    uVar36 = CONCAT22((ushort)(auVar41._8_2_ + auVar69._8_2_) >> 3,uVar66);
    uVar24 = CONCAT24((ushort)(auVar41._10_2_ + auVar69._10_2_) >> 3,uVar36);
    auVar26._6_5_ = 0;
    auVar26._0_6_ = uVar24;
    uVar8 = CONCAT26((ushort)(auVar41._12_2_ + auVar69._12_2_) >> 3,uVar24);
    auVar28._8_5_ = 0;
    auVar28._0_8_ = uVar8;
    uVar68 = auVar70._0_2_ + sVar84 + sVar78 + auVar90._0_2_;
    uVar72 = auVar70._2_2_ + (ushort)bVar87 + (ushort)bVar82 + auVar90._2_2_;
    uVar74 = auVar70._4_2_ + (uVar83 & 0xff) + (uVar77 & 0xff) + auVar90._4_2_;
    uVar75 = auVar70._6_2_ + (ushort)bVar86 + (ushort)bVar80 + auVar90._6_2_;
    bVar73 = (byte)(uVar72 >> 0xb);
    uVar71 = (undefined1)(uVar72 >> 3);
    uVar81 = (undefined1)(uVar63 >> 3);
    uVar67 = (undefined1)(uVar68 >> 3);
    uVar76 = (undefined1)(uVar40 >> 3);
    auVar55._14_2_ =
         (undefined2)(CONCAT19((byte)(uVar75 >> 0xb),CONCAT18((byte)(uVar65 >> 0xb),uVar8)) >> 0x40)
    ;
    auVar55[0xd] = (char)(uVar75 >> 3);
    auVar55._0_13_ = auVar28 << 0x30;
    auVar54._12_4_ = (undefined4)(CONCAT37(auVar55._13_3_,CONCAT16((char)uVar66,uVar24)) >> 0x30);
    auVar54[0xb] = (byte)(uVar74 >> 0xb);
    auVar54._0_11_ = auVar26 << 0x30;
    auVar53._10_6_ =
         (undefined6)(CONCAT55(auVar54._11_5_,CONCAT14((byte)(uVar64 >> 0xb),uVar36)) >> 0x20);
    auVar53[9] = (char)(uVar74 >> 3);
    auVar53._0_9_ = (unkuint9)uVar36 << 0x30;
    auVar20._1_8_ = (long)(CONCAT73(auVar53._9_7_,CONCAT12((char)(uVar64 >> 3),uVar66)) >> 0x10);
    auVar20[0] = bVar73;
    auVar20._9_7_ = 0;
    auVar19._10_6_ = 0;
    auVar19._0_10_ = SUB1610(auVar20 << 0x38,6);
    auVar18._11_5_ = 0;
    auVar18._0_11_ = SUB1611(auVar19 << 0x30,5);
    auVar17._12_4_ = 0;
    auVar17._0_12_ = SUB1612(auVar18 << 0x28,4);
    auVar16._13_3_ = 0;
    auVar16._0_13_ = SUB1613(auVar17 << 0x20,3);
    auVar52._14_2_ = 0;
    auVar52._0_14_ = SUB1614(auVar16 << 0x18,2);
    auVar52 = auVar52 << 0x10;
    auVar62._0_14_ = auVar52._0_14_;
    auVar62[0xe] = bVar73;
    auVar62[0xf] = (byte)(uVar68 >> 0xb);
    auVar61._14_2_ = auVar62._14_2_;
    auVar61._0_13_ = auVar52._0_13_;
    auVar61[0xd] = (byte)(uVar40 >> 0xb);
    auVar60._13_3_ = auVar61._13_3_;
    auVar60._0_12_ = auVar52._0_12_;
    auVar60[0xc] = (byte)(uVar63 >> 0xb);
    auVar59._12_4_ = auVar60._12_4_;
    auVar59._0_11_ = auVar52._0_11_;
    auVar59[0xb] = uVar67;
    auVar58._11_5_ = auVar59._11_5_;
    auVar58._0_10_ = auVar52._0_10_;
    auVar58[10] = uVar71;
    auVar57._10_6_ = auVar58._10_6_;
    auVar57._0_9_ = auVar52._0_9_;
    auVar57[9] = uVar76;
    auVar23._2_7_ = auVar57._9_7_;
    auVar23[1] = uVar81;
    auVar23[0] = bVar73;
    auVar23._9_7_ = 0;
    auVar22._10_6_ = 0;
    auVar22._0_10_ = SUB1610(auVar23 << 0x38,6);
    auVar21._11_5_ = 0;
    auVar21._0_11_ = SUB1611(auVar22 << 0x30,5);
    auVar56._4_12_ = SUB1612(auVar21 << 0x28,4);
    auVar56[3] = uVar71;
    auVar56[2] = uVar67;
    auVar56[1] = uVar81;
    auVar56[0] = uVar76;
    *(int *)(param_3 + 8) = auVar56._0_4_;
  }
  else {
    pcVar30 = param_3;
    do {
      pcVar31 = pcVar30 + 1;
      cVar33 = SUB41((int)((uint)(byte)*pcVar30 + (uint)(byte)pcVar30[0xc]) >> 1,0);
      pcVar30[4] = cVar33;
      pcVar30[8] = cVar33;
      pcVar30 = pcVar31;
    } while (pcVar31 != param_3 + 4);
    param_3[0xb] = (color_rgba)0x0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar32;
}



/* basisu::pvrtc4_image::get_pixel(unsigned int, unsigned int, unsigned int) const */

uint __thiscall
basisu::pvrtc4_image::get_pixel(pvrtc4_image *this,uint param_1,uint param_2,uint param_3)

{
  pvrtc4_block *this_00;
  pvrtc4_block *this_01;
  pvrtc4_block *this_02;
  pvrtc4_block *this_03;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  long in_FS_OFFSET;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  
  uVar12 = (int)(param_2 - 2) >> 2;
  uVar13 = (int)(param_1 - 2) >> 2;
  iVar9 = uVar12 + 1;
  iVar11 = uVar13 + 1;
  iVar7 = *(int *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar13 < 0) {
    uVar16 = 0;
    uVar6 = (int)-uVar13 % iVar7;
    if (uVar6 != 0) {
      uVar16 = iVar7 - uVar6;
      uVar6 = uVar16;
    }
    if (iVar11 == 0) {
LAB_00101028:
      if (iVar7 <= iVar11) goto LAB_00100d76;
    }
    else {
      iVar11 = 0;
      if ((int)~uVar13 % iVar7 != 0) {
        iVar11 = iVar7 - (int)~uVar13 % iVar7;
      }
    }
    iVar14 = *(int *)(this + 0x24);
    uVar6 = uVar16;
    if (-1 < (int)uVar12) goto LAB_00100d8d;
LAB_00100858:
    uVar16 = 0;
    uVar13 = (int)-uVar12 % iVar14;
    if (uVar13 != 0) {
      uVar16 = iVar14 - uVar13;
      uVar13 = uVar16;
    }
    if (iVar9 == 0) goto LAB_00101048;
    iVar9 = 0;
    if ((int)~uVar12 % iVar14 != 0) {
      iVar9 = iVar14 - (int)~uVar12 % iVar14;
    }
  }
  else {
    uVar6 = uVar13;
    uVar16 = uVar13;
    if ((int)uVar13 < iVar7) goto LAB_00101028;
    uVar6 = (uint)(CONCAT44((int)(param_1 - 2) >> 0x1f,uVar13) % (long)iVar7);
LAB_00100d76:
    iVar14 = *(int *)(this + 0x24);
    iVar11 = iVar11 % iVar7;
    if ((int)uVar12 < 0) goto LAB_00100858;
LAB_00100d8d:
    uVar13 = uVar12;
    uVar16 = uVar12;
    if ((int)uVar12 < iVar14) {
LAB_00101048:
      if (iVar9 < iVar14) goto LAB_00100889;
    }
    else {
      uVar13 = (int)uVar12 % iVar14;
    }
    iVar9 = iVar9 % iVar14;
    uVar16 = uVar13;
  }
LAB_00100889:
  iVar7 = *(int *)(this + 8);
  lVar5 = *(long *)(this + 0x10);
  this_00 = (pvrtc4_block *)(lVar5 + (ulong)(uVar6 + uVar16 * iVar7) * 8);
  this_01 = (pvrtc4_block *)(lVar5 + (ulong)(iVar11 + uVar16 * iVar7) * 8);
  this_02 = (pvrtc4_block *)(lVar5 + (ulong)(uVar6 + iVar9 * iVar7) * 8);
  this_03 = (pvrtc4_block *)(lVar5 + (ulong)(uint)(iVar11 + iVar9 * iVar7) * 8);
  iVar9 = *(int *)(interpolate(int,int,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&)
                   ::s_interp + (ulong)(param_1 & 3) * 4);
  iVar11 = *(int *)(interpolate(int,int,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&,basisu::color_rgba_const&)
                    ::s_interp + (ulong)(param_2 & 3) * 4);
  if ((*(byte *)(lVar5 + 4 + (ulong)((param_2 >> 2) * iVar7 + (param_1 >> 2)) * 8) & 1) == 0) {
    if (param_3 == 0) {
      puVar15 = &local_54;
      local_48 = pvrtc4_block::get_endpoint_5554(this_03,0);
      local_4c = pvrtc4_block::get_endpoint_5554(this_02,0);
      local_50 = pvrtc4_block::get_endpoint_5554(this_01,0);
      local_54 = pvrtc4_block::get_endpoint_5554(this_00,0);
      iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
      iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
              iVar11 + iVar7 * 4;
      lVar5 = 1;
      do {
        bVar2 = *(byte *)((long)&local_4c + lVar5);
        bVar3 = *(byte *)((long)puVar15 + lVar5);
        *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
        iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
        pbVar1 = (byte *)((long)&local_48 + lVar5);
        lVar5 = lVar5 + 1;
        iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                iVar7 * 4;
      } while (lVar5 != 4);
    }
    else {
      if (param_3 != 3) {
        puVar15 = &local_54;
        local_48 = pvrtc4_block::get_endpoint_5554(this_03,0);
        local_4c = pvrtc4_block::get_endpoint_5554(this_02,0);
        local_50 = pvrtc4_block::get_endpoint_5554(this_01,0);
        local_54 = pvrtc4_block::get_endpoint_5554(this_00,0);
        iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
        iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7)
                * iVar11 + iVar7 * 4;
        lVar5 = 1;
        do {
          bVar2 = *(byte *)((long)&local_4c + lVar5);
          bVar3 = *(byte *)((long)puVar15 + lVar5);
          *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 1) + (char)(iVar7 >> 6);
          uVar12 = local_44;
          iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4
          ;
          pbVar1 = (byte *)((long)&local_48 + lVar5);
          lVar5 = lVar5 + 1;
          iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                  iVar7 * 4;
        } while (lVar5 != 4);
        uVar13 = (iVar7 >> 4) + iVar7;
        local_44 = CONCAT13((char)uVar13,(undefined3)local_44);
        uVar6 = (uVar12 & 0xff00) >> 8;
        local_48 = pvrtc4_block::get_endpoint_5554(this_03,1);
        local_4c = pvrtc4_block::get_endpoint_5554(this_02,1);
        local_50 = pvrtc4_block::get_endpoint_5554(this_01,1);
        local_54 = pvrtc4_block::get_endpoint_5554(this_00,1);
        iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
        iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7)
                * iVar11 + iVar7 * 4;
        lVar5 = 1;
        do {
          bVar2 = *(byte *)((long)&local_4c + lVar5);
          bVar3 = *(byte *)((long)puVar15 + lVar5);
          *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 1) + (char)(iVar7 >> 6);
          uVar16 = local_44;
          iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4
          ;
          pbVar1 = (byte *)((long)&local_48 + lVar5);
          lVar5 = lVar5 + 1;
          iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                  iVar7 * 4;
        } while (lVar5 != 4);
        uVar8 = (iVar7 >> 4) + iVar7;
        local_44 = CONCAT13((char)uVar8,(undefined3)local_44);
        uVar10 = (uVar16 & 0xff00) >> 8;
        if (param_3 == 2) {
          iVar9 = (uVar8 & 0xff) * 5;
          iVar11 = (uVar13 & 0xff) + (uVar13 & 0xff) * 2;
          uVar4 = CONCAT11((char)((int)(uVar6 * 3 + uVar10 * 5) >> 3),
                           (char)((int)((uVar12 & 0xff) * 3 + (uVar16 & 0xff) * 5) >> 3));
          uVar12 = ((uVar12 & 0xff0000) >> 0x10) + ((uVar12 & 0xff0000) >> 0x10) * 2 +
                   ((uVar16 & 0xff0000) >> 0x10) * 5;
        }
        else {
          iVar9 = (uVar8 & 0xff) * 3;
          iVar11 = (uVar13 & 0xff) + (uVar13 & 0xff) * 4;
          uVar4 = CONCAT11((char)((int)(uVar6 * 5 + uVar10 * 3) >> 3),
                           (char)((int)((uVar12 & 0xff) * 5 + (uVar16 & 0xff) * 3) >> 3));
          uVar12 = ((uVar12 & 0xff0000) >> 0x10) + ((uVar12 & 0xff0000) >> 0x10) * 4 +
                   ((uVar16 & 0xff0000) >> 0x10) * 3;
        }
        uVar12 = (uint)uVar4 | (uVar12 & 0x7f8) << 0xd | (iVar9 + iVar11 >> 3) << 0x18;
        goto LAB_001009d1;
      }
      local_48 = pvrtc4_block::get_endpoint_5554(this_03,1);
      puVar15 = &local_54;
      local_4c = pvrtc4_block::get_endpoint_5554(this_02,1);
      local_50 = pvrtc4_block::get_endpoint_5554(this_01,1);
      local_54 = pvrtc4_block::get_endpoint_5554(this_00,1);
      iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
      iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
              iVar11 + iVar7 * 4;
      lVar5 = 1;
      do {
        bVar2 = *(byte *)((long)&local_4c + lVar5);
        bVar3 = *(byte *)((long)puVar15 + lVar5);
        *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
        iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
        pbVar1 = (byte *)((long)&local_48 + lVar5);
        lVar5 = lVar5 + 1;
        iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                iVar7 * 4;
      } while (lVar5 != 4);
    }
  }
  else {
    if (param_3 == 0) {
      puVar15 = &local_54;
      local_48 = pvrtc4_block::get_endpoint_5554(this_03,0);
      local_4c = pvrtc4_block::get_endpoint_5554(this_02,0);
      local_50 = pvrtc4_block::get_endpoint_5554(this_01,0);
      local_54 = pvrtc4_block::get_endpoint_5554(this_00,0);
      iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
      iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
              iVar11 + iVar7 * 4;
      lVar5 = 1;
      do {
        bVar2 = *(byte *)((long)&local_4c + lVar5);
        bVar3 = *(byte *)((long)puVar15 + lVar5);
        *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
        iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
        pbVar1 = (byte *)((long)&local_48 + lVar5);
        lVar5 = lVar5 + 1;
        iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                iVar7 * 4;
      } while (lVar5 != 4);
      local_44 = CONCAT13((char)(iVar7 >> 4) + (char)iVar7,(undefined3)local_44);
      uVar12 = local_44;
      goto LAB_001009d1;
    }
    if (param_3 != 3) {
      puVar15 = &local_54;
      local_48 = pvrtc4_block::get_endpoint_5554(this_03,0);
      local_4c = pvrtc4_block::get_endpoint_5554(this_02,0);
      local_50 = pvrtc4_block::get_endpoint_5554(this_01,0);
      local_54 = pvrtc4_block::get_endpoint_5554(this_00,0);
      iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
      iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
              iVar11 + iVar7 * 4;
      lVar5 = 1;
      do {
        bVar2 = *(byte *)((long)&local_4c + lVar5);
        bVar3 = *(byte *)((long)puVar15 + lVar5);
        *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
        uVar12 = local_44;
        iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
        pbVar1 = (byte *)((long)&local_48 + lVar5);
        lVar5 = lVar5 + 1;
        iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                iVar7 * 4;
      } while (lVar5 != 4);
      uVar13 = (iVar7 >> 4) + iVar7;
      local_44 = CONCAT13((char)uVar13,(undefined3)local_44);
      local_48 = pvrtc4_block::get_endpoint_5554(this_03,1);
      local_4c = pvrtc4_block::get_endpoint_5554(this_02,1);
      local_50 = pvrtc4_block::get_endpoint_5554(this_01,1);
      local_54 = pvrtc4_block::get_endpoint_5554(this_00,1);
      iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
      iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
              iVar11 + iVar7 * 4;
      lVar5 = 1;
      do {
        bVar2 = *(byte *)((long)&local_4c + lVar5);
        bVar3 = *(byte *)((long)puVar15 + lVar5);
        *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
        uVar6 = local_44;
        iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
        pbVar1 = (byte *)((long)&local_48 + lVar5);
        lVar5 = lVar5 + 1;
        iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
                iVar7 * 4;
      } while (lVar5 != 4);
      uVar16 = (iVar7 >> 4) + iVar7;
      uVar8 = 0;
      local_44 = CONCAT13((char)uVar16,(undefined3)local_44);
      if (param_3 != 2) {
        uVar8 = (uVar16 & 0xff) + (uVar13 & 0xff) >> 1;
      }
      uVar12 = ((uVar8 << 8 | ((uVar12 & 0xff0000) >> 0x10) + ((uVar6 & 0xff0000) >> 0x10) >> 1) <<
                8 | (uVar12 >> 8 & 0xff) + ((uVar6 & 0xff00) >> 8) >> 1) << 8 |
               (uVar12 & 0xff) + (uVar6 & 0xff) >> 1;
      goto LAB_001009d1;
    }
    local_48 = pvrtc4_block::get_endpoint_5554(this_03,1);
    puVar15 = &local_54;
    local_4c = pvrtc4_block::get_endpoint_5554(this_02,1);
    local_50 = pvrtc4_block::get_endpoint_5554(this_01,1);
    local_54 = pvrtc4_block::get_endpoint_5554(this_00,1);
    iVar7 = ((local_50 & 0xff) - (local_54 & 0xff)) * iVar9 + (local_54 & 0xff) * 4;
    iVar7 = ((((local_48 & 0xff) - (local_4c & 0xff)) * iVar9 + (local_4c & 0xff) * 4) - iVar7) *
            iVar11 + iVar7 * 4;
    lVar5 = 1;
    do {
      bVar2 = *(byte *)((long)&local_4c + lVar5);
      bVar3 = *(byte *)((long)puVar15 + lVar5);
      *(char *)((long)&local_48 + lVar5 + 3) = (char)(iVar7 >> 6) + (char)(iVar7 >> 1);
      iVar7 = ((uint)*(byte *)((long)&local_50 + lVar5) - (uint)bVar3) * iVar9 + (uint)bVar3 * 4;
      pbVar1 = (byte *)((long)&local_48 + lVar5);
      lVar5 = lVar5 + 1;
      iVar7 = ((((uint)*pbVar1 - (uint)bVar2) * iVar9 + (uint)bVar2 * 4) - iVar7) * iVar11 +
              iVar7 * 4;
    } while (lVar5 != 4);
  }
  local_44 = CONCAT13((char)iVar7 + (char)(iVar7 >> 4),(undefined3)local_44);
  uVar12 = local_44;
LAB_001009d1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::pvrtc4_image::local_endpoint_optimization_opaque(unsigned int, unsigned int,
   basisu::image const&, bool) */

ulong __thiscall
basisu::pvrtc4_image::local_endpoint_optimization_opaque
          (pvrtc4_image *this,uint param_1,uint param_2,image *param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  float fVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  float *pfVar41;
  long *plVar42;
  int iVar43;
  undefined8 *puVar44;
  float *pfVar45;
  uint uVar46;
  uint uVar47;
  long in_FS_OFFSET;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  int local_1a8;
  long *local_188;
  undefined8 *local_180;
  ulong local_178;
  float local_128 [4];
  float local_118 [4];
  undefined8 local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_90;
  undefined1 local_88 [8];
  float afStack_80 [2];
  undefined8 local_78;
  long local_40 [2];
  
  local_178 = 0;
  iVar35 = *(int *)this;
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(this + 0x10);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar39 = *(int *)(this + 4);
  iVar29 = *(int *)(param_3 + 8);
  iVar7 = *(int *)(this + 8);
  uVar1 = param_2 * 4 - 1;
  uVar47 = param_2 * 4 + 6;
  uVar37 = iVar29 * uVar1;
  uVar40 = param_1 * 4 - 1;
  uVar32 = param_1 * 4 + 6;
  uVar38 = uVar1;
  do {
    uVar33 = uVar40;
    if ((int)uVar38 < 0) {
      if ((int)-uVar38 % iVar39 == 0) {
        cVar14 = '\0';
        uVar15 = 0;
        uVar12 = 0;
        uVar46 = 0;
      }
      else {
        uVar21 = (ulong)(uint)(iVar39 - (int)-uVar38 % iVar39);
LAB_00101343:
        uVar46 = (uint)uVar21;
        uVar15 = (int)(uVar21 >> 2) * iVar7;
        cVar14 = (char)((uVar46 & 3) << 2);
        uVar12 = iVar29 * uVar46;
      }
    }
    else {
      if (iVar39 <= (int)uVar38) {
        uVar21 = (long)(int)uVar38 % (long)iVar39 & 0xffffffff;
        goto LAB_00101343;
      }
      uVar15 = (uVar38 >> 2) * iVar7;
      cVar14 = (char)((uVar38 & 3) << 2);
      uVar12 = uVar37;
      uVar46 = uVar38;
    }
LAB_0010141c:
    do {
      if ((int)uVar33 < 0) {
        if ((int)-uVar33 % iVar35 != 0) {
          uVar16 = iVar35 - (int)-uVar33 % iVar35;
          goto LAB_00101393;
        }
        uVar21 = (ulong)uVar15;
        uVar16 = 0;
        uVar20 = (ulong)uVar12;
        cVar24 = cVar14;
      }
      else if ((int)uVar33 < iVar35) {
        uVar20 = (ulong)(uVar12 + uVar33);
        uVar21 = (ulong)((uVar33 >> 2) + uVar15);
        uVar16 = uVar33;
        cVar24 = ((byte)uVar33 & 3) + cVar14;
      }
      else {
        uVar16 = (int)uVar33 % iVar35;
LAB_00101393:
        uVar20 = (ulong)(uVar12 + uVar16);
        uVar21 = (ulong)((uVar16 >> 2) + uVar15);
        cVar24 = ((byte)uVar16 & 3) + cVar14;
      }
      pbVar3 = (byte *)(lVar10 + uVar20 * 4);
      uVar16 = get_pixel(this,uVar16,uVar46,
                         *(uint *)(lVar11 + uVar21 * 8) >> (cVar24 * '\x02' & 0x1fU) & 3);
      uVar25 = uVar16 >> 8 & 0xff;
      iVar17 = (uVar16 & 0xff) - (uint)*pbVar3;
      if (param_4) {
        uVar33 = uVar33 + 1;
        iVar26 = (uVar16 >> 0x10 & 0xff) - (uint)pbVar3[2];
        lVar30 = (long)(int)((uVar25 - pbVar3[1]) * 0x5c + iVar17 * 0x1b + iVar26 * 9);
        lVar19 = iVar17 * 0x80 - lVar30;
        lVar27 = iVar26 * 0x80 - lVar30;
        local_178 = local_178 +
                    (((uint)((int)(lVar19 * lVar19 >> 7) * 0x1a) >> 7) +
                     ((uint)((int)(lVar27 * lVar27 >> 7) * 3) >> 7) + (int)(lVar30 * lVar30 >> 7));
        if (uVar32 == uVar33) break;
        goto LAB_0010141c;
      }
      uVar33 = uVar33 + 1;
      iVar26 = uVar25 - pbVar3[1];
      iVar28 = (uVar16 >> 0x10 & 0xff) - (uint)pbVar3[2];
      local_178 = local_178 + (uint)(iVar17 * iVar17 + iVar26 * iVar26 + iVar28 * iVar28);
    } while (uVar32 != uVar33);
    uVar38 = uVar38 + 1;
    uVar37 = uVar37 + iVar29;
    if (uVar47 == uVar38) {
      if (local_178 != 0) {
        fStack_e0 = 0.0;
        fStack_e4 = 0.0;
        local_f8 = fStack_e4;
        uVar38 = uVar1;
        uVar37 = uVar1 * iVar29;
        do {
          uVar33 = uVar40;
          if ((int)uVar38 < 0) {
            uVar21 = 0;
            if ((int)-uVar38 % iVar39 != 0) {
              uVar21 = (ulong)(uint)((iVar39 - (int)-uVar38 % iVar39) * iVar29);
            }
          }
          else {
            uVar21 = (ulong)uVar37;
            if (iVar39 <= (int)uVar38) {
              uVar21 = (ulong)(uint)(((int)uVar38 % iVar39) * iVar29);
            }
          }
          do {
            iVar17 = (int)uVar21;
            if ((int)uVar33 < 0) {
              uVar20 = (ulong)(uint)((iVar35 - (int)-uVar33 % iVar35) + iVar17);
              if ((int)-uVar33 % iVar35 == 0) {
                uVar20 = uVar21;
              }
            }
            else {
              uVar20 = (ulong)(iVar17 + uVar33);
              if (iVar35 <= (int)uVar33) {
                uVar20 = (ulong)(uint)((int)uVar33 % iVar35 + iVar17);
              }
            }
            pbVar3 = (byte *)(lVar10 + uVar20 * 4);
            uVar33 = uVar33 + 1;
            local_f8 = local_f8 + (float)*pbVar3;
            fStack_e4 = fStack_e4 + (float)pbVar3[1];
            fStack_e0 = fStack_e0 + (float)pbVar3[2];
          } while (uVar32 != uVar33);
          uVar38 = uVar38 + 1;
          uVar37 = uVar37 + iVar29;
        } while (uVar47 != uVar38);
        iVar17 = 4;
        bVar13 = true;
        local_f8 = local_f8 * _LC1;
        local_180 = &local_d8;
        fStack_e4 = fStack_e4 * _LC1;
        fStack_e0 = fStack_e0 * _LC1;
        local_188 = (long *)local_88;
        local_118[0] = local_f8 - _LC2;
        local_118[1] = fStack_e4 - _LC2;
        local_118[2] = fStack_e0 - _LC2;
        local_118[3] = local_f8 + _LC2;
        local_108 = CONCAT44(_LC2 + fStack_e0,fStack_e4 + _LC2);
        do {
          pfVar45 = (float *)&local_endpoint_optimization_opaque(unsigned_int,unsigned_int,basisu::image_const&,bool)
                              ::s_weights;
          local_78 = 0;
          local_128[1] = 0.0;
          local_128[0] = 0.0;
          _local_88 = (undefined1  [16])0x0;
          uVar47 = uVar1 * iVar29;
          uVar38 = uVar1;
          do {
            pfVar41 = pfVar45;
            uVar37 = uVar40;
            if ((int)uVar38 < 0) {
              uVar21 = 0;
              if ((int)-uVar38 % iVar39 != 0) {
                uVar21 = (ulong)(uint)((iVar39 - (int)-uVar38 % iVar39) * iVar29);
              }
            }
            else {
              uVar21 = (ulong)uVar47;
              if (iVar39 <= (int)uVar38) {
                uVar21 = (ulong)(uint)(iVar29 * ((int)uVar38 % iVar39));
              }
            }
            do {
              iVar26 = (int)uVar21;
              if ((int)uVar37 < 0) {
                uVar20 = (ulong)(uint)((iVar35 - (int)-uVar37 % iVar35) + iVar26);
                if ((int)-uVar37 % iVar35 == 0) {
                  uVar20 = uVar21;
                }
              }
              else {
                uVar20 = (ulong)(uVar37 + iVar26);
                if (iVar35 <= (int)uVar37) {
                  uVar20 = (ulong)(uint)((int)uVar37 % iVar35 + iVar26);
                }
              }
              pbVar3 = (byte *)(lVar10 + uVar20 * 4);
              bVar6 = pbVar3[2];
              fVar51 = 0.0;
              lVar19 = 0;
              local_d0 = (float)bVar6;
              local_d8 = CONCAT44((float)pbVar3[1],(float)*pbVar3);
              do {
                fVar48 = *(float *)((long)local_118 + lVar19) - *(float *)(lVar19 + (long)local_180)
                ;
                lVar19 = lVar19 + 4;
                fVar51 = fVar51 + fVar48 * fVar48;
              } while (lVar19 != 0xc);
              lVar19 = 0;
              fVar48 = 0.0;
              do {
                fVar52 = *(float *)((long)local_118 + lVar19 + 0xc) -
                         *(float *)(lVar19 + (long)local_180);
                lVar19 = lVar19 + 4;
                fVar48 = fVar48 + fVar52 * fVar52;
              } while (lVar19 != 0xc);
              fVar52 = *pfVar41;
              uVar37 = uVar37 + 1;
              uVar20 = (ulong)(fVar48 < fVar51);
              fVar4 = local_128[uVar20];
              puVar31 = (undefined8 *)((ulong)(-(uint)(fVar48 < fVar51) & 0xc) + (long)local_188);
              uVar5 = *puVar31;
              *puVar31 = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)pbVar3[1] * fVar52,
                                  (float)uVar5 + (float)*pbVar3 * fVar52);
              fVar51 = *(float *)(local_88 + uVar20 * 0xc + 8);
              local_128[uVar20] = fVar52 + fVar4;
              *(float *)(local_88 + uVar20 * 0xc + 8) = (float)bVar6 * fVar52 + fVar51;
              pfVar41 = pfVar41 + 1;
            } while (uVar37 != uVar32);
            pfVar45 = pfVar45 + 7;
            uVar38 = uVar38 + 1;
            uVar47 = uVar47 + iVar29;
          } while (pfVar45 != (float *)&DAT_001025c4);
          if (local_128[0] == 0.0) {
            bVar13 = false;
          }
          else if (local_128[1] == 0.0) {
            bVar13 = false;
          }
          local_118[0] = (float)local_88._0_4_ / local_128[0];
          auVar49._8_8_ = 0;
          auVar49._0_8_ = local_78;
          local_118[1] = (float)local_88._4_4_ / local_128[0];
          auVar50._4_4_ = local_128[1];
          auVar50._0_4_ = local_128[1];
          auVar50._8_4_ = (undefined4)_LC3;
          auVar50._12_4_ = _LC3._4_4_;
          auVar50 = divps(auVar49,auVar50);
          local_118[2] = afStack_80[0] / local_128[0];
          local_108 = auVar50._0_8_;
          local_118[3] = afStack_80[1] / local_128[1];
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        fStack_f4 = fStack_e4;
        local_e8 = local_f8;
        fStack_f0 = fStack_e0;
        if (bVar13) {
          fStack_e4 = (float)local_78 / local_128[1];
          fStack_e0 = local_78._4_4_ / local_128[1];
          fStack_f4 = (float)local_88._4_4_ / local_128[0];
          local_f8 = (float)local_88._0_4_ / local_128[0];
          local_e8 = afStack_80[1] / local_128[1];
          fStack_f0 = afStack_80[0] / local_128[0];
        }
        uStack_ec = 0;
        uStack_dc = 0;
        iVar35 = (int)(local_f8 + __LC4);
        if (0xff < (int)(local_f8 + __LC4)) {
          iVar35 = 0xff;
        }
        if (iVar35 < 0) {
          iVar35 = 0;
        }
        iVar39 = (int)(fStack_f4 + _UNK_00102804);
        if (0xff < (int)(fStack_f4 + _UNK_00102804)) {
          iVar39 = 0xff;
        }
        if (iVar39 < 0) {
          iVar39 = 0;
        }
        iVar29 = (int)(fStack_f0 + _UNK_00102808);
        if (0xff < (int)(fStack_f0 + _UNK_00102808)) {
          iVar29 = 0xff;
        }
        if (iVar29 < 0) {
          iVar29 = 0;
        }
        iVar17 = 0xff;
        if ((int)(__LC4 + local_e8) < 0x100) {
          iVar17 = (int)(__LC4 + local_e8);
        }
        iVar26 = 0;
        if (-1 < iVar17) {
          iVar26 = iVar17;
        }
        iVar17 = 0xff;
        if ((int)(_UNK_00102804 + fStack_e4) < 0x100) {
          iVar17 = (int)(_UNK_00102804 + fStack_e4);
        }
        iVar28 = 0;
        if (-1 < iVar17) {
          iVar28 = iVar17;
        }
        iVar17 = 0xff;
        if ((int)(_UNK_00102808 + fStack_e0) < 0x100) {
          iVar17 = (int)(_UNK_00102808 + fStack_e0);
        }
        puVar31 = local_180;
        iVar18 = 0;
        if (-1 < iVar17) {
          iVar18 = iVar17;
        }
        do {
          *puVar31 = 0;
          puVar44 = puVar31 + 3;
          puVar31[1] = 0;
          puVar31[2] = 0;
          puVar31 = puVar44;
        } while (puVar44 != &local_90);
        iVar8 = *(int *)(this + 0x20);
        iVar9 = *(int *)(this + 0x24);
        iVar17 = param_2 - 1;
        iVar2 = param_2 + 2;
        local_1a8 = iVar7 * iVar17;
        uVar1 = param_1 - 1;
        uVar47 = param_1 + 2;
        puVar31 = local_180;
        iVar34 = local_1a8;
        iVar43 = iVar17;
        do {
          puVar44 = puVar31;
          uVar40 = uVar1;
          do {
            if ((int)uVar40 < 0) {
              uVar21 = (ulong)(uint)(iVar8 - (int)-uVar40 % iVar8);
              if ((int)-uVar40 % iVar8 == 0) {
                uVar21 = 0;
              }
            }
            else {
              uVar21 = (ulong)uVar40;
              if (iVar8 <= (int)uVar40) {
                uVar21 = (long)(int)uVar40 % (long)iVar8 & 0xffffffff;
              }
            }
            iVar36 = (int)uVar21;
            if (iVar43 < 0) {
              if (-iVar43 % iVar9 != 0) {
                uVar21 = (ulong)(uint)(iVar36 + (iVar9 - -iVar43 % iVar9) * iVar7);
              }
            }
            else if (iVar43 < iVar9) {
              uVar21 = (ulong)(uint)(iVar36 + iVar34);
            }
            else {
              uVar21 = (ulong)(uint)(iVar36 + (iVar43 % iVar9) * iVar7);
            }
            uVar40 = uVar40 + 1;
            *puVar44 = *(undefined8 *)(lVar11 + uVar21 * 8);
            puVar44 = puVar44 + 3;
          } while (uVar47 != uVar40);
          iVar43 = iVar43 + 1;
          iVar34 = iVar34 + iVar7;
          puVar31 = puVar31 + 1;
        } while (iVar43 != iVar2);
        iVar8 = iVar7 + local_1a8;
        lVar10 = lVar11 + (ulong)(iVar8 + param_1) * 8;
        bVar6 = g_pvrtc_5_nearest[iVar29];
        uVar38 = (uint)(byte)g_pvrtc_5_nearest[iVar35] << 10 |
                 (uint)(byte)g_pvrtc_5_nearest[iVar39] << 5;
        uVar40 = (uint)(byte)g_pvrtc_5_nearest[iVar26] << 10 |
                 (uint)(byte)g_pvrtc_5_nearest[iVar28] << 5;
        *(uint *)(lVar10 + 4) =
             (*(uint *)(lVar10 + 4) & 0xffff0001 |
             (uint)(byte)g_pvrtc_4_nearest[iVar29] * 2 | uVar38) & 0xffff | (bVar6 | uVar40) << 0x10
             | 0x80008000;
        uVar21 = remap_pixels_influenced_by_endpoint(this,param_1,param_2,param_3,param_4,false);
        plVar22 = local_188;
        do {
          *plVar22 = 0;
          plVar42 = plVar22 + 3;
          plVar22[1] = 0;
          plVar22[2] = 0;
          plVar22 = plVar42;
        } while (plVar42 != local_40);
        iVar39 = *(int *)(this + 0x20);
        iVar29 = *(int *)(this + 0x24);
        plVar22 = local_188;
        iVar26 = iVar17;
        iVar35 = local_1a8;
        do {
          plVar42 = plVar22;
          uVar32 = uVar1;
          do {
            if ((int)uVar32 < 0) {
              uVar20 = (ulong)(uint)(iVar39 - (int)-uVar32 % iVar39);
              if ((int)-uVar32 % iVar39 == 0) {
                uVar20 = 0;
              }
            }
            else {
              uVar20 = (ulong)uVar32;
              if (iVar39 <= (int)uVar32) {
                uVar20 = (long)(int)uVar32 % (long)iVar39 & 0xffffffff;
              }
            }
            iVar28 = (int)uVar20;
            if (iVar26 < 0) {
              if (-iVar26 % iVar29 != 0) {
                uVar20 = (ulong)(uint)(iVar28 + (iVar29 - -iVar26 % iVar29) * iVar7);
              }
            }
            else if (iVar26 < iVar29) {
              uVar20 = (ulong)(uint)(iVar28 + iVar35);
            }
            else {
              uVar20 = (ulong)(uint)(iVar28 + (iVar26 % iVar29) * iVar7);
            }
            uVar32 = uVar32 + 1;
            *plVar42 = *(long *)(lVar11 + uVar20 * 8);
            plVar42 = plVar42 + 3;
          } while (uVar47 != uVar32);
          iVar26 = iVar26 + 1;
          iVar35 = iVar35 + iVar7;
          plVar22 = plVar22 + 1;
        } while (iVar26 != iVar2);
        *(uint *)(lVar10 + 4) =
             (*(uint *)(lVar10 + 4) & 0xffff0001 |
             (uint)(byte)g_pvrtc_4_nearest[iVar18] * 2 | uVar40) & 0xffff | (bVar6 | uVar38) << 0x10
             | 0x80008000;
        uVar23 = remap_pixels_influenced_by_endpoint(this,param_1,param_2,param_3,param_4,false);
        uVar20 = uVar21;
        if (uVar23 < uVar21) {
          uVar20 = uVar23;
        }
        if (local_178 < uVar20) {
          iVar35 = *(int *)(this + 0x20);
          iVar39 = *(int *)(this + 0x24);
          while( true ) {
            iVar29 = iVar8;
            puVar31 = local_180;
            uVar40 = uVar1;
            do {
              if ((int)uVar40 < 0) {
                uVar21 = (ulong)(uint)(iVar35 - (int)-uVar40 % iVar35);
                if ((int)-uVar40 % iVar35 == 0) {
                  uVar21 = 0;
                }
              }
              else {
                uVar21 = (ulong)uVar40;
                if (iVar35 <= (int)uVar40) {
                  uVar21 = (long)(int)uVar40 % (long)iVar35 & 0xffffffff;
                }
              }
              iVar26 = (int)uVar21;
              if (iVar17 < 0) {
                if (-iVar17 % iVar39 != 0) {
                  uVar21 = (ulong)(uint)(iVar26 + (iVar39 - -iVar17 % iVar39) * iVar7);
                }
              }
              else if (iVar17 < iVar39) {
                uVar21 = (ulong)(uint)(iVar26 + local_1a8);
              }
              else {
                uVar21 = (ulong)(uint)(iVar26 + (iVar17 % iVar39) * iVar7);
              }
              uVar5 = *puVar31;
              uVar40 = uVar40 + 1;
              puVar31 = puVar31 + 3;
              *(undefined8 *)(lVar11 + uVar21 * 8) = uVar5;
            } while (uVar47 != uVar40);
            iVar17 = iVar17 + 1;
            local_180 = local_180 + 1;
            if (iVar17 == iVar2) break;
            iVar8 = iVar29 + iVar7;
            local_1a8 = iVar29;
          }
        }
        else {
          local_178 = uVar23;
          if (uVar21 < uVar23) {
            iVar35 = *(int *)(this + 0x20);
            iVar39 = *(int *)(this + 0x24);
            while( true ) {
              iVar29 = iVar8;
              plVar22 = local_188;
              uVar40 = uVar1;
              do {
                if ((int)uVar40 < 0) {
                  uVar20 = (ulong)(uint)(iVar35 - (int)-uVar40 % iVar35);
                  if ((int)-uVar40 % iVar35 == 0) {
                    uVar20 = 0;
                  }
                }
                else {
                  uVar20 = (ulong)uVar40;
                  if (iVar35 <= (int)uVar40) {
                    uVar20 = (long)(int)uVar40 % (long)iVar35 & 0xffffffff;
                  }
                }
                iVar26 = (int)uVar20;
                if (iVar17 < 0) {
                  if (-iVar17 % iVar39 != 0) {
                    uVar20 = (ulong)(uint)(iVar26 + (iVar39 - -iVar17 % iVar39) * iVar7);
                  }
                }
                else if (iVar17 < iVar39) {
                  uVar20 = (ulong)(uint)(iVar26 + local_1a8);
                }
                else {
                  uVar20 = (ulong)(uint)(iVar26 + (iVar17 % iVar39) * iVar7);
                }
                lVar10 = *plVar22;
                uVar40 = uVar40 + 1;
                plVar22 = plVar22 + 3;
                *(long *)(lVar11 + uVar20 * 8) = lVar10;
              } while (uVar40 != uVar47);
              iVar17 = iVar17 + 1;
              local_188 = local_188 + 1;
              local_178 = uVar21;
              if (iVar17 == iVar2) break;
              iVar8 = iVar29 + iVar7;
              local_1a8 = iVar29;
            }
          }
        }
      }
      if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_178;
    }
  } while( true );
}



/* basisu::pvrtc4_image::remap_pixels_influenced_by_endpoint(unsigned int, unsigned int,
   basisu::image const&, bool, bool) */

long __thiscall
basisu::pvrtc4_image::remap_pixels_influenced_by_endpoint
          (pvrtc4_image *this,uint param_1,uint param_2,image *param_3,bool param_4,bool param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  color_rgba *pcVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  uint local_84;
  char local_80;
  uint local_78;
  char local_74;
  long local_70;
  color_rgba local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  uVar15 = param_2 * 4 - 1;
  uVar1 = param_1 * 4 - 1;
  do {
    iVar9 = *(int *)(this + 4);
    uVar16 = uVar1;
    if ((int)uVar15 < 0) {
      if ((int)-uVar15 % iVar9 == 0) {
        local_74 = '\0';
        local_78 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = iVar9 - (int)-uVar15 % iVar9;
LAB_00102141:
        local_78 = uVar7 >> 2;
        local_74 = (char)((uVar7 & 3) << 2);
      }
    }
    else {
      if (iVar9 <= (int)uVar15) {
        uVar7 = (int)uVar15 % iVar9;
        goto LAB_00102141;
      }
      local_78 = uVar15 >> 2;
      local_74 = (char)((uVar15 & 3) << 2);
      uVar7 = uVar15;
    }
    do {
      iVar9 = *(int *)this;
      if ((int)uVar16 < 0) {
        if ((int)-uVar16 % iVar9 == 0) {
          local_84 = 0;
          local_80 = local_74;
          uVar11 = 0;
        }
        else {
          uVar11 = iVar9 - (int)-uVar16 % iVar9;
LAB_00102190:
          local_84 = uVar11 >> 2;
          local_80 = ((byte)uVar11 & 3) + local_74;
        }
      }
      else {
        if (iVar9 <= (int)uVar16) {
          uVar11 = (int)uVar16 % iVar9;
          goto LAB_00102190;
        }
        local_84 = uVar16 >> 2;
        local_80 = ((byte)uVar16 & 3) + local_74;
        uVar11 = uVar16;
      }
      pbVar2 = (byte *)(*(long *)(param_3 + 0x10) +
                       (ulong)(*(int *)(param_3 + 8) * uVar7 + uVar11) * 4);
      get_interpolated_colors(this,uVar11,uVar7,&local_58);
      iVar9 = (uint)*pbVar2 - (uint)(byte)local_58;
      if (param_4) {
        lVar8 = (long)(int)(((uint)pbVar2[1] - (uint)local_57) * 0x5c + iVar9 * 0x1b +
                           ((uint)pbVar2[2] - (uint)local_56) * 9);
        lVar13 = iVar9 * 0x80 - lVar8;
        lVar6 = (int)(((uint)pbVar2[2] - (uint)local_56) * 0x80) - lVar8;
        uVar11 = ((uint)((int)(lVar13 * lVar13 >> 7) * 0x1a) >> 7) +
                 ((uint)((int)(lVar6 * lVar6 >> 7) * 3) >> 7) + (int)(lVar8 * lVar8 >> 7);
        uVar10 = (ulong)uVar11;
        if (param_5) {
          iVar9 = ((uint)pbVar2[3] - (uint)local_55) * 0x80;
          uVar10 = (ulong)(uVar11 + ((uint)(iVar9 * iVar9) >> 7));
        }
      }
      else {
        uVar11 = iVar9 * iVar9 +
                 ((uint)pbVar2[1] - (uint)local_57) * ((uint)pbVar2[1] - (uint)local_57) +
                 ((uint)pbVar2[2] - (uint)local_56) * ((uint)pbVar2[2] - (uint)local_56);
        uVar10 = (ulong)uVar11;
        if (param_5) {
          uVar10 = (ulong)(uVar11 + ((uint)pbVar2[3] - (uint)local_55) *
                                    ((uint)pbVar2[3] - (uint)local_55));
        }
      }
      iVar9 = 0;
      iVar14 = 1;
      pcVar12 = &local_58;
      do {
        iVar4 = (uint)*pbVar2 - (uint)(byte)pcVar12[4];
        if (param_4) {
          lVar8 = (long)(int)(((uint)pbVar2[1] - (uint)(byte)pcVar12[5]) * 0x5c + iVar4 * 0x1b +
                             ((uint)pbVar2[2] - (uint)(byte)pcVar12[6]) * 9);
          lVar6 = iVar4 * 0x80 - lVar8;
          lVar13 = (int)(((uint)pbVar2[2] - (uint)(byte)pcVar12[6]) * 0x80) - lVar8;
          uVar11 = ((uint)((int)(lVar6 * lVar6 >> 7) * 0x1a) >> 7) +
                   ((uint)((int)(lVar13 * lVar13 >> 7) * 3) >> 7) + (int)(lVar8 * lVar8 >> 7);
          uVar5 = (ulong)uVar11;
          if (param_5) {
            iVar4 = ((uint)pbVar2[3] - (uint)(byte)pcVar12[7]) * 0x80;
            uVar5 = (ulong)(uVar11 + ((uint)(iVar4 * iVar4) >> 7));
          }
        }
        else {
          uVar11 = iVar4 * iVar4 +
                   ((uint)pbVar2[1] - (uint)(byte)pcVar12[5]) *
                   ((uint)pbVar2[1] - (uint)(byte)pcVar12[5]) +
                   ((uint)pbVar2[2] - (uint)(byte)pcVar12[6]) *
                   ((uint)pbVar2[2] - (uint)(byte)pcVar12[6]);
          uVar5 = (ulong)uVar11;
          if (param_5) {
            uVar5 = (ulong)(uVar11 + ((uint)pbVar2[3] - (uint)(byte)pcVar12[7]) *
                                     ((uint)pbVar2[3] - (uint)(byte)pcVar12[7]));
          }
        }
        if (uVar5 < uVar10) {
          uVar10 = uVar5;
          iVar9 = iVar14;
        }
        iVar14 = iVar14 + 1;
        pcVar12 = pcVar12 + 4;
      } while (iVar14 != 4);
      uVar16 = uVar16 + 1;
      local_70 = local_70 + uVar10;
      puVar3 = (uint *)(*(long *)(this + 0x10) +
                       (ulong)(local_78 * *(int *)(this + 8) + local_84) * 8);
      *puVar3 = ~(3 << (local_80 * '\x02' & 0x1fU)) & *puVar3 | iVar9 << (local_80 * '\x02' & 0x1fU)
      ;
    } while (param_1 * 4 + 6 != uVar16);
    uVar15 = uVar15 + 1;
    if (param_2 * 4 + 6 == uVar15) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_70;
    }
  } while( true );
}



/* basisu::pvrtc4_swizzle_uv(unsigned int, unsigned int, unsigned int, unsigned int) */

void basisu::_GLOBAL__sub_I_pvrtc4_swizzle_uv(void)

{
  return;
}


