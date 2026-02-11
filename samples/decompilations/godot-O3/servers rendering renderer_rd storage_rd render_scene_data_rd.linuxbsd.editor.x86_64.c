
/* RenderSceneDataRD::get_cam_transform() const */

void RenderSceneDataRD::get_cam_transform(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x17c);
  uVar2 = *(undefined8 *)(in_RSI + 0x184);
  uVar3 = *(undefined8 *)(in_RSI + 0x18c);
  uVar4 = *(undefined8 *)(in_RSI + 0x194);
  uVar5 = *(undefined8 *)(in_RSI + 0x19c);
  *in_RDI = *(undefined8 *)(in_RSI + 0x174);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  return;
}



/* RenderSceneDataRD::get_view_count() const */

undefined4 __thiscall RenderSceneDataRD::get_view_count(RenderSceneDataRD *this)

{
  return *(undefined4 *)(this + 0x228);
}



/* RenderSceneDataRD::get_uniform_buffer() const */

undefined8 __thiscall RenderSceneDataRD::get_uniform_buffer(RenderSceneDataRD *this)

{
  return *(undefined8 *)(this + 0x3f8);
}



/* RenderSceneDataRD::get_cam_projection() const */

void RenderSceneDataRD::get_cam_projection(void)

{
  long in_RSI;
  Projection *in_RDI;
  long in_FS_OFFSET;
  Projection aPStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Projection::Projection(aPStack_68);
  Projection::set_depth_correction(SUB81(aPStack_68,0),*(bool *)(in_RSI + 0x1f6),true);
  Projection::add_jitter_offset((Vector2 *)aPStack_68);
  Projection::operator*(in_RDI,aPStack_68);
  Projection::~Projection(aPStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::get_view_projection(unsigned int) const */

Projection * RenderSceneDataRD::get_view_projection(uint param_1)

{
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Projection *this;
  long in_FS_OFFSET;
  Projection aPStack_78 [72];
  long local_30;
  
  this = (Projection *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < *(uint *)(in_RSI + 0x228)) {
    Projection::Projection(aPStack_78);
    Projection::set_depth_correction(SUB81(aPStack_78,0),*(bool *)(in_RSI + 0x1f6),true);
    Projection::add_jitter_offset((Vector2 *)aPStack_78);
    Projection::operator*(this,aPStack_78);
    Projection::~Projection(aPStack_78);
  }
  else {
    _err_print_index_error
              ("get_view_projection",
               "servers/rendering/renderer_rd/storage_rd/render_scene_data_rd.cpp",0x3b,
               (ulong)in_EDX,(ulong)*(uint *)(in_RSI + 0x228),"p_view","view_count","",false,false);
    Projection::Projection(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::get_view_eye_offset(unsigned int) const */

undefined1  [16] __thiscall
RenderSceneDataRD::get_view_eye_offset(RenderSceneDataRD *this,uint param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(uint *)(this + 0x228)) {
    local_1c = *(undefined8 *)(this + (ulong)param_1 * 0xc + 0x22c);
    local_14 = *(undefined4 *)(this + (ulong)param_1 * 0xc + 0x234);
  }
  else {
    _err_print_index_error
              ("get_view_eye_offset",
               "servers/rendering/renderer_rd/storage_rd/render_scene_data_rd.cpp",0x35,
               (ulong)param_1,(ulong)*(uint *)(this + 0x228),"p_view","view_count","",false,false);
    local_14 = 0;
    local_1c = 0;
  }
  auVar2._8_4_ = local_14;
  auVar2._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* RenderSceneDataRD::create_uniform_buffer() */

undefined8 RenderSceneDataRD::create_uniform_buffer(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = RenderingDevice::get_singleton();
  local_20 = 0;
  uVar3 = RenderingDevice::uniform_buffer_create(uVar3,0x16a0,local_28,0);
  lVar2 = local_20;
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_20 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneDataRD::update_ubo(RID, RenderingServer::ViewportDebugDraw, RID, RID, RID, bool,
   Vector2i const&, Color const&, float, bool, bool) */

void __thiscall
RenderSceneDataRD::update_ubo
          (float param_1,RenderSceneDataRD *this,undefined8 param_3,int param_4,long param_5,
          long param_6,long param_7,uint param_8,Vector2i *param_9,float *param_10,char param_11,
          char param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  RenderSceneDataRD *pRVar14;
  uint uVar15;
  long in_FS_OFFSET;
  byte bVar16;
  float extraout_XMM0_Da;
  undefined4 uVar17;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar18;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  float local_1890;
  Projection local_1828 [64];
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  Projection local_17a8 [64];
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  float local_1728;
  float fStack_1724;
  float fStack_1720;
  float fStack_171c;
  float local_1718;
  float fStack_1714;
  float fStack_1710;
  float fStack_170c;
  float local_1708;
  undefined4 uStack_1704;
  undefined4 uStack_1700;
  undefined4 uStack_16fc;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8 [4];
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined4 local_1660;
  undefined4 local_165c;
  undefined4 local_1658;
  undefined4 local_1654;
  undefined4 local_1650;
  undefined4 local_164c;
  undefined4 local_1648;
  undefined4 local_1644;
  undefined4 local_1640;
  undefined4 local_163c;
  undefined8 local_1638;
  undefined4 local_1630;
  undefined4 local_162c;
  float local_1620;
  undefined4 local_161c;
  float local_1618;
  float local_1614;
  float local_1610;
  undefined4 local_160c;
  float local_1608;
  float local_1604;
  float local_1600;
  undefined4 local_15fc;
  undefined4 local_15f0;
  undefined4 local_15ec;
  undefined8 local_15e8 [36];
  undefined8 local_14c8;
  undefined4 local_14c0;
  undefined4 local_14bc;
  undefined4 local_14b8;
  undefined4 local_14b4;
  undefined4 local_14b0;
  undefined4 local_14ac;
  undefined4 local_14a8;
  undefined4 local_14a4;
  undefined4 local_14a0;
  undefined4 local_149c;
  undefined8 local_1498;
  undefined4 local_1490;
  undefined4 local_148c;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined4 local_1478 [128];
  undefined4 local_1278 [128];
  undefined4 local_1078 [128];
  undefined4 local_e78 [128];
  float local_c78;
  float local_c74;
  float local_c70;
  undefined4 local_c6c;
  float local_c68;
  float local_c64;
  float local_c60;
  undefined4 local_c5c;
  float local_c58;
  float local_c54;
  float local_c50;
  undefined4 local_c4c;
  undefined8 local_c48;
  float fStack_c40;
  float fStack_c3c;
  undefined4 local_c38;
  uint local_c34;
  undefined4 uStack_c30;
  uint uStack_c2c;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 local_c10;
  uint local_c08;
  undefined4 local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  uint local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  float local_be0;
  undefined4 local_bdc;
  undefined8 local_bd8;
  float local_bd0;
  float local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined8 local_bb8;
  uint local_bb0;
  undefined8 local_bac;
  uint local_ba4;
  undefined4 local_ba0;
  float local_b9c;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_b04;
  undefined4 local_b00;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined8 local_ae8;
  undefined4 local_ae0;
  undefined4 local_adc;
  float local_ad0;
  undefined4 local_acc;
  float local_ac8;
  float local_ac4;
  float local_ac0;
  undefined4 local_abc;
  float local_ab8;
  float local_ab4;
  float local_ab0;
  undefined4 local_aac;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined8 local_a98 [325];
  float local_70;
  undefined8 local_68;
  long local_40;
  
  plVar5 = RendererSceneRenderRD::singleton;
  bVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = local_16e8;
  for (lVar11 = 0x2d4; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  Projection::Projection(local_1828);
  Projection::set_depth_correction(SUB81(local_1828,0),(bool)this[0x1f6],true);
  Projection::add_jitter_offset((Vector2 *)local_1828);
  Projection::operator*((Projection *)&local_17e8,local_1828);
  local_16e8[0] = local_17e8;
  local_16e8[1] = uStack_17e0;
  local_16e8[2] = local_17d8;
  local_16e8[3] = uStack_17d0;
  local_16b8 = local_17b8;
  uStack_16b0 = uStack_17b0;
  local_16c8 = local_17c8;
  uStack_16c0 = uStack_17c0;
  Projection::inverse();
  local_1678 = local_16f8;
  uStack_1670 = uStack_16f0;
  Projection::~Projection((Projection *)&local_1728);
  local_1638 = *(undefined8 *)(this + 0x198);
  local_165c = 0;
  local_164c = 0;
  local_1668 = CONCAT44((int)((ulong)*(undefined8 *)(this + 0x17c) >> 0x20),
                        (int)*(undefined8 *)(this + 0x174));
  local_1660 = *(undefined4 *)(this + 0x18c);
  local_163c = 0;
  local_1658 = *(undefined4 *)(this + 0x178);
  local_162c = 0x3f800000;
  local_1654 = *(undefined4 *)(this + 0x184);
  local_1650 = *(undefined4 *)(this + 400);
  local_1648 = *(undefined4 *)(this + 0x17c);
  local_1644 = *(undefined4 *)(this + 0x188);
  local_1640 = *(undefined4 *)(this + 0x194);
  local_1630 = *(undefined4 *)(this + 0x1a0);
  Transform3D::affine_inverse();
  local_161c = 0;
  local_160c = 0;
  local_15fc = 0;
  local_15ec = 0x3f800000;
  local_1620 = fStack_1710;
  local_1618 = fStack_1724;
  local_1614 = local_1718;
  local_1610 = fStack_170c;
  local_1608 = fStack_1720;
  local_1604 = fStack_1714;
  local_1600 = local_1708;
  local_15f0 = uStack_16fc;
  if (*(int *)(this + 0x228) != 0) {
    uVar15 = 0;
    puVar12 = local_16e8;
    pRVar14 = this + 0x22c;
    puVar13 = local_15e8;
    do {
      uVar15 = uVar15 + 1;
      Projection::operator*((Projection *)&local_1728,local_1828);
      local_17c8 = CONCAT44(uStack_1704,local_1708);
      uStack_17c0 = CONCAT44(uStack_16fc,uStack_1700);
      local_17e8 = CONCAT44(fStack_1724,local_1728);
      uStack_17e0 = CONCAT44(fStack_171c,fStack_1720);
      local_17d8 = CONCAT44(fStack_1714,local_1718);
      uStack_17d0 = CONCAT44(fStack_170c,fStack_1710);
      local_17b8 = local_16f8;
      uStack_17b0 = uStack_16f0;
      Projection::~Projection((Projection *)&local_1728);
      *puVar13 = local_17e8;
      puVar13[1] = uStack_17e0;
      puVar13[2] = local_17d8;
      puVar13[3] = uStack_17d0;
      puVar13[4] = local_17c8;
      puVar13[5] = uStack_17c0;
      puVar13[6] = local_17b8;
      puVar13[7] = uStack_17b0;
      Projection::inverse();
      puVar13[0x10] = CONCAT44(fStack_1724,local_1728);
      puVar13[0x11] = CONCAT44(fStack_171c,fStack_1720);
      puVar13[0x12] = CONCAT44(fStack_1714,local_1718);
      puVar13[0x13] = CONCAT44(fStack_170c,fStack_1710);
      puVar13[0x14] = CONCAT44(uStack_1704,local_1708);
      puVar13[0x15] = CONCAT44(uStack_16fc,uStack_1700);
      puVar13[0x16] = local_16f8;
      puVar13[0x17] = uStack_16f0;
      Projection::~Projection((Projection *)&local_1728);
      puVar12[0x40] = *(undefined8 *)pRVar14;
      uVar17 = *(undefined4 *)(pRVar14 + 8);
      *(undefined4 *)((long)puVar12 + 0x20c) = 0;
      *(undefined4 *)(puVar12 + 0x41) = uVar17;
      puVar12 = puVar12 + 2;
      pRVar14 = pRVar14 + 0xc;
      puVar13 = puVar13 + 8;
    } while (uVar15 < *(uint *)(this + 0x228));
  }
  local_14bc = 0;
  local_1498 = *(undefined8 *)(this + 0x21c);
  local_14ac = 0;
  local_149c = 0;
  local_14c8 = CONCAT44(*(undefined4 *)(this + 0x204),*(undefined4 *)(this + 0x1f8));
  local_14c0 = *(undefined4 *)(this + 0x210);
  local_bb8 = *(undefined8 *)(this + 0x1e4);
  local_14b8 = *(undefined4 *)(this + 0x1fc);
  local_14b4 = *(undefined4 *)(this + 0x208);
  local_148c = 0x3f800000;
  local_14b0 = *(undefined4 *)(this + 0x214);
  local_14a8 = *(undefined4 *)(this + 0x200);
  local_14a4 = *(undefined4 *)(this + 0x20c);
  local_14a0 = *(undefined4 *)(this + 0x218);
  local_1490 = *(undefined4 *)(this + 0x224);
  local_bdc = *(undefined4 *)(this + 0x1ec);
  local_c10 = CONCAT44((int)*(undefined8 *)(this + 0x3bc),
                       (int)((ulong)*(undefined8 *)(this + 0x3bc) >> 0x20));
  local_ba4 = param_8 & 0xff;
  lVar11 = plVar5[0x48a];
  lVar9 = 0;
  do {
    *(undefined4 *)((long)local_1478 + lVar9) = *(undefined4 *)(lVar11 + lVar9);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x200);
  lVar11 = plVar5[0x48b];
  lVar9 = 0;
  do {
    *(undefined4 *)((long)local_1278 + lVar9) = *(undefined4 *)(lVar11 + lVar9);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x200);
  lVar11 = plVar5[0x48c];
  lVar9 = 0;
  do {
    *(undefined4 *)((long)local_1078 + lVar9) = *(undefined4 *)(lVar11 + lVar9);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x200);
  lVar11 = plVar5[0x48d];
  lVar9 = 0;
  do {
    *(undefined4 *)((long)local_e78 + lVar9) = *(undefined4 *)(lVar11 + lVar9);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x200);
  local_ba0 = *(undefined4 *)(this + 0x1f0);
  if ((param_11 == '\0') || (local_b9c = 0.0, param_12 == '\0')) {
    local_b9c = _LC10;
  }
  local_1488 = CONCAT44((float)(int)((ulong)*(undefined8 *)param_9 >> 0x20),
                        (float)(int)*(undefined8 *)param_9);
  auVar21._0_8_ = Vector2i::operator_cast_to_Vector2(param_9);
  uVar4 = CONCAT44(_UNK_00103804,_LC10);
  local_bf8 = 0;
  local_c28 = *(undefined8 *)(this + 0x3e0);
  uStack_c20 = *(undefined8 *)(this + 1000);
  local_c18 = *(undefined8 *)(this + 0x3cc);
  auVar21._8_8_ = uVar4;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar4;
  auVar21 = divps(auVar20,auVar21);
  local_bc0 = *(undefined4 *)(this + 0x3f0);
  local_bfc = *(undefined4 *)(this + 0x3d4);
  local_bb0 = (uint)(byte)this[0x3d8];
  local_1480 = auVar21._0_8_;
  if (param_4 == 1) {
    fStack_c40 = _LC10;
    local_c34 = 1;
    uStack_c30 = 0;
    uStack_c2c = 0;
    local_c48 = CONCAT44(_LC10,_LC10);
    fStack_c3c = _LC10;
    if (param_7 != 0) {
      uVar17 = RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor
                         (RenderingServerGlobals::camera_attributes,param_7);
      local_bac = CONCAT44(0x3f800000,uVar17);
      uVar4 = local_bac;
      if (param_5 == 0) goto LAB_00100c42;
LAB_00101040:
      lVar11 = RendererSceneRender::environment_get_sky(plVar5,param_5);
      uVar4 = local_bac;
      if (lVar11 != 0) {
        fVar23 = (float)RendererCameraAttributes::
                        camera_attributes_get_exposure_normalization_factor
                                  (RenderingServerGlobals::camera_attributes,param_7);
        fVar22 = (float)RendererSceneRender::environment_get_bg_intensity(plVar5,param_5);
        fVar24 = (float)RendererRD::SkyRD::sky_get_baked_exposure(plVar5 + 0x42,lVar11);
        dVar19 = _LC11;
        if (_LC11 <= (double)fVar24) {
          dVar19 = (double)fVar24;
        }
        local_bac = CONCAT44((float)((double)((fVar22 * fVar23) / param_1) / dVar19),
                             (undefined4)local_bac);
        uVar4 = local_bac;
      }
      goto LAB_00100c42;
    }
  }
  else if (param_5 == 0) {
    if (param_6 == 0) {
LAB_00100b81:
      fVar18 = _LC15;
      local_c34 = 1;
      fVar23 = param_10[2];
      fVar22 = *param_10;
      fVar24 = param_10[1];
      if (_LC15 <= fVar23) {
        fVar23 = powf((float)(((double)fVar23 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar23 = fVar23 * _LC16;
      }
      if (fVar18 <= fVar24) {
        fVar24 = powf((float)(((double)fVar24 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar24 = fVar24 * _LC16;
      }
      if (fVar18 <= fVar22) {
        fVar22 = powf((float)(((double)fVar22 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar22 = fVar22 * _LC16;
      }
      fStack_c3c = 1.0;
      local_c48 = CONCAT44(fVar24,fVar22);
      fStack_c40 = fVar23;
    }
    else {
      uVar10 = RendererRD::LightStorage::get_singleton();
      cVar7 = RendererRD::LightStorage::reflection_probe_is_interior(uVar10,param_6);
      if (cVar7 == '\0') goto LAB_00100b81;
      local_c34 = 0;
    }
    uStack_c30 = 0;
    uStack_c2c = 0;
    if (param_7 != 0) {
      uVar17 = RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor
                         (RenderingServerGlobals::camera_attributes,param_7);
      local_bac = CONCAT44(0x3f800000,uVar17);
      uVar4 = local_bac;
      goto LAB_00100c42;
    }
  }
  else {
    uVar15 = RendererSceneRender::environment_get_background(plVar5,param_5);
    iVar8 = RendererSceneRender::environment_get_ambient_source(plVar5,param_5);
    fVar23 = (float)RendererSceneRender::environment_get_bg_energy_multiplier(plVar5,param_5);
    fStack_c3c = fVar23;
    local_c38 = RendererSceneRender::environment_get_ambient_sky_contribution(plVar5,param_5);
    if ((uVar15 < 2) && (iVar8 == 0)) {
      if (uVar15 == 0) {
        fVar22 = *param_10;
        fVar24 = param_10[1];
        fVar18 = param_10[2];
      }
      else {
        RendererSceneRender::environment_get_bg_color(plVar5,param_5);
        fVar24 = extraout_XMM0_Db_00;
        fVar18 = extraout_XMM1_Da_00;
        fVar22 = extraout_XMM0_Da_00;
      }
      fVar25 = _LC15;
      local_1890 = _LC15;
      if (_LC15 <= fVar18) {
        fVar18 = powf((float)(((double)fVar18 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar18 = fVar18 * _LC16;
      }
      if (fVar25 <= fVar24) {
        fVar24 = powf((float)(((double)fVar24 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar24 = fVar24 * _LC16;
      }
      if (fVar25 <= fVar22) {
        fVar22 = powf((float)(((double)fVar22 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar22 = fVar22 * _LC16;
      }
      local_c34 = 1;
      uStack_c30 = 0;
      fStack_c40 = fVar23 * fVar18;
      local_c48 = CONCAT44(fVar24 * fVar23,fVar22 * fVar23);
      iVar8 = RendererSceneRender::environment_get_reflection_source(plVar5,param_5);
LAB_00100e36:
      uStack_c2c = (uint)(iVar8 == 2);
    }
    else {
      fVar18 = (float)RendererSceneRender::environment_get_ambient_light_energy(plVar5,param_5);
      auVar26 = RendererSceneRender::environment_get_ambient_light(plVar5,param_5);
      fVar22 = _LC15;
      fVar23 = auVar26._8_4_;
      local_1890 = _LC15;
      fVar24 = auVar26._4_4_;
      if (_LC15 <= fVar23) {
        fVar23 = powf((float)(((double)fVar23 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar23 = fVar23 * _LC16;
      }
      if (fVar22 <= fVar24) {
        fVar24 = powf((float)(((double)fVar24 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar24 = fVar24 * _LC16;
      }
      fVar25 = auVar26._0_4_;
      if (fVar22 <= fVar25) {
        fVar25 = powf((float)(((double)fVar25 + __LC17) * __LC18),_LC19);
      }
      else {
        fVar25 = fVar25 * _LC16;
      }
      local_c48 = CONCAT44(fVar24 * fVar18,fVar25 * fVar18);
      fStack_c40 = fVar18 * fVar23;
      RendererSceneRender::environment_get_sky_orientation(&local_1768,plVar5,param_5);
      Basis::inverse();
      fVar23 = *(float *)(this + 0x17c);
      fVar22 = *(float *)(this + 0x188);
      fVar24 = *(float *)(this + 0x194);
      fVar18 = *(float *)(this + 0x184);
      fVar25 = *(float *)(this + 0x180);
      fVar1 = *(float *)(this + 0x18c);
      fVar2 = *(float *)(this + 400);
      local_c50 = fVar23 * fStack_1710 + fVar22 * fStack_170c + fVar24 * local_1708;
      fVar3 = *(float *)(this + 0x178);
      local_c70 = fStack_1710 * *(float *)(this + 0x174) + fStack_170c * fVar25 + local_1708 * fVar1
      ;
      local_c60 = fStack_1710 * fVar3 + fStack_170c * fVar18 + local_1708 * fVar2;
      local_c54 = fVar24 * fStack_1714 + fVar22 * local_1718 + fVar23 * fStack_171c;
      local_c64 = fVar18 * local_1718 + fVar3 * fStack_171c + fVar2 * fStack_1714;
      local_c74 = local_1718 * fVar25 + fStack_171c * *(float *)(this + 0x174) + fStack_1714 * fVar1
      ;
      local_c68 = fVar2 * fStack_1720 + fVar3 * local_1728 + fVar18 * fStack_1724;
      local_c58 = fVar24 * fStack_1720 + fVar22 * fStack_1724 + fVar23 * local_1728;
      local_c78 = *(float *)(this + 0x174) * local_1728 + fVar25 * fStack_1724 + fVar1 * fStack_1720
      ;
      if ((iVar8 == 0 && uVar15 == 2) || (iVar8 == 3)) {
        uStack_c30 = 1;
        local_c34 = 1;
      }
      else {
        uStack_c30 = 0;
        local_c34 = (uint)(iVar8 == 2);
      }
      local_c6c = 0;
      local_c5c = 0;
      local_c4c = 0;
      iVar8 = RendererSceneRender::environment_get_reflection_source(plVar5,param_5);
      if ((iVar8 != 0) || (uStack_c2c = 1, uVar15 != 2)) goto LAB_00100e36;
    }
    bVar6 = RendererSceneRender::environment_get_fog_enabled(plVar5,param_5);
    local_bf8 = (uint)bVar6;
    local_bf4 = RendererSceneRender::environment_get_fog_mode(plVar5,param_5);
    local_bf0 = RendererSceneRender::environment_get_fog_density(plVar5,param_5);
    local_bec = RendererSceneRender::environment_get_fog_height(plVar5,param_5);
    local_be8 = RendererSceneRender::environment_get_fog_height_density(plVar5,param_5);
    local_bc4 = RendererSceneRender::environment_get_fog_aerial_perspective(plVar5,param_5);
    local_be4 = RendererSceneRender::environment_get_fog_depth_curve(plVar5,param_5);
    fVar23 = (float)RendererSceneRender::environment_get_fog_depth_end(plVar5,param_5);
    if (0.0 < fVar23) {
      local_bcc = (float)RendererSceneRender::environment_get_fog_depth_end(plVar5,param_5);
    }
    else {
      local_bcc = (float)local_c10;
    }
    dVar19 = (double)local_bcc - _LC11;
    local_be0 = (float)RendererSceneRender::environment_get_fog_depth_begin(plVar5,param_5);
    if (dVar19 <= (double)local_be0) {
      local_be0 = (float)dVar19;
    }
    RendererSceneRender::environment_get_fog_light_color(plVar5,param_5);
    if (local_1890 <= extraout_XMM1_Da) {
      fVar23 = powf((float)(((double)extraout_XMM1_Da + __LC17) * __LC18),_LC19);
    }
    else {
      fVar23 = extraout_XMM1_Da * _LC16;
    }
    if (local_1890 <= extraout_XMM0_Db) {
      fVar22 = powf((float)(((double)extraout_XMM0_Db + __LC17) * __LC18),_LC19);
    }
    else {
      fVar22 = _LC16 * extraout_XMM0_Db;
    }
    if (local_1890 <= extraout_XMM0_Da) {
      fVar24 = powf((float)(((double)extraout_XMM0_Da + __LC17) * __LC18),_LC19);
    }
    else {
      fVar24 = _LC16 * extraout_XMM0_Da;
    }
    fVar18 = (float)RendererSceneRender::environment_get_fog_light_energy(plVar5,param_5);
    local_bd0 = fVar18 * fVar23;
    local_bd8 = CONCAT44(fVar22 * fVar18,fVar24 * fVar18);
    local_bc8 = RendererSceneRender::environment_get_fog_sun_scatter(plVar5,param_5);
    if (param_7 != 0) {
      uVar17 = RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor
                         (RenderingServerGlobals::camera_attributes,param_7);
      local_bac = CONCAT44(0x3f800000,uVar17);
      goto LAB_00101040;
    }
  }
  if (0.0 < *(float *)(this + 0x3dc)) {
    local_bac = CONCAT44(local_bac._4_4_,*(float *)(this + 0x3dc));
    uVar4 = local_bac;
  }
LAB_00100c42:
  local_bac = uVar4;
  local_c08 = 0;
  if (param_11 != '\0') {
    bVar6 = (**(code **)(*plVar5 + 0x170))(plVar5);
    local_c08 = (uint)bVar6;
  }
  local_c04 = (**(code **)(*plVar5 + 0x268))(plVar5);
  local_c00 = (**(code **)(*plVar5 + 0x270))(plVar5);
  if (this[0x171] != (RenderSceneDataRD)0x0) {
    puVar12 = local_16e8;
    puVar13 = &local_b98;
    for (lVar11 = 0x16a; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
      puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
    }
    Projection::Projection(local_17a8);
    Projection::set_depth_correction(SUB81(local_17a8,0),true,true);
    Projection::add_jitter_offset((Vector2 *)local_17a8);
    Projection::operator*((Projection *)&local_1768,local_17a8);
    local_b98 = local_1768;
    uStack_b90 = uStack_1760;
    local_b78 = local_1748;
    uStack_b70 = uStack_1740;
    local_b68 = local_1738;
    uStack_b60 = uStack_1730;
    local_b88 = local_1758;
    uStack_b80 = uStack_1750;
    Projection::inverse();
    local_b28 = local_16f8;
    uStack_b20 = uStack_16f0;
    Projection::~Projection((Projection *)&local_1728);
    local_ae8 = *(undefined8 *)(this + 0x2e8);
    local_b0c = 0;
    local_afc = 0;
    local_b18 = CONCAT44((int)((ulong)*(undefined8 *)(this + 0x2cc) >> 0x20),
                         (int)*(undefined8 *)(this + 0x2c4));
    local_b10 = *(undefined4 *)(this + 0x2dc);
    local_aec = 0;
    local_b08 = *(undefined4 *)(this + 0x2c8);
    local_adc = 0x3f800000;
    local_b04 = *(undefined4 *)(this + 0x2d4);
    local_b00 = *(undefined4 *)(this + 0x2e0);
    local_af8 = *(undefined4 *)(this + 0x2cc);
    local_af4 = *(undefined4 *)(this + 0x2d8);
    local_af0 = *(undefined4 *)(this + 0x2e4);
    local_ae0 = *(undefined4 *)(this + 0x2f0);
    Transform3D::affine_inverse();
    local_acc = 0;
    local_abc = 0;
    local_aac = 0;
    local_ad0 = fStack_1710;
    local_a9c = 0x3f800000;
    local_ac8 = fStack_1724;
    local_ac4 = local_1718;
    local_ac0 = fStack_170c;
    local_ab8 = fStack_1720;
    local_ab4 = fStack_1714;
    local_ab0 = local_1708;
    local_aa0 = uStack_16fc;
    if (*(int *)(this + 0x228) != 0) {
      uVar15 = 0;
      puVar12 = local_a98;
      do {
        uVar15 = uVar15 + 1;
        Projection::operator*((Projection *)&local_1728,local_17a8);
        local_1768 = CONCAT44(fStack_1724,local_1728);
        uStack_1760 = CONCAT44(fStack_171c,fStack_1720);
        local_1758 = CONCAT44(fStack_1714,local_1718);
        uStack_1750 = CONCAT44(fStack_170c,fStack_1710);
        local_1748 = CONCAT44(uStack_1704,local_1708);
        uStack_1740 = CONCAT44(uStack_16fc,uStack_1700);
        local_1738 = local_16f8;
        uStack_1730 = uStack_16f0;
        Projection::~Projection((Projection *)&local_1728);
        *puVar12 = local_1768;
        puVar12[1] = uStack_1760;
        puVar12[2] = local_1758;
        puVar12[3] = uStack_1750;
        puVar12[4] = local_1748;
        puVar12[5] = uStack_1740;
        puVar12[6] = local_1738;
        puVar12[7] = uStack_1730;
        Projection::inverse();
        puVar12[0x10] = CONCAT44(fStack_1724,local_1728);
        puVar12[0x11] = CONCAT44(fStack_171c,fStack_1720);
        puVar12[0x12] = CONCAT44(fStack_1714,local_1718);
        puVar12[0x13] = CONCAT44(fStack_170c,fStack_1710);
        puVar12[0x14] = CONCAT44(uStack_1704,local_1708);
        puVar12[0x15] = CONCAT44(uStack_16fc,uStack_1700);
        puVar12[0x16] = local_16f8;
        puVar12[0x17] = uStack_16f0;
        Projection::~Projection((Projection *)&local_1728);
        puVar12 = puVar12 + 8;
      } while (uVar15 < *(uint *)(this + 0x228));
    }
    local_68 = *(undefined8 *)(this + 0x334);
    local_70 = local_70 - *(float *)(this + 0x3f4);
    Projection::~Projection((Projection *)&local_1768);
    Projection::~Projection(local_17a8);
  }
  *(undefined8 *)(this + 0x3f8) = param_3;
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar10,*(undefined8 *)(this + 0x3f8),0,0x16a0,local_16e8);
  Projection::~Projection((Projection *)&local_17e8);
  Projection::~Projection(local_1828);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneData::is_class_ptr(void*) const */

uint __thiscall RenderSceneData::is_class_ptr(RenderSceneData *this,void *param_1)

{
  return (uint)CONCAT71(0x1037,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1037,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RenderSceneData::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneData::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_validate_propertyv(PropertyInfo&) const */

void RenderSceneData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneData::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneData::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_notificationv(int, bool) */

void RenderSceneData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderSceneDataRD::is_class_ptr(void*) const */

uint __thiscall RenderSceneDataRD::is_class_ptr(RenderSceneDataRD *this,void *param_1)

{
  return (uint)CONCAT71(0x1037,(undefined4 *)param_1 ==
                               &RenderSceneData::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1037,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1037,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RenderSceneDataRD::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneDataRD::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataRD::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneDataRD::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataRD::_validate_propertyv(PropertyInfo&) const */

void RenderSceneDataRD::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneDataRD::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneDataRD::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneDataRD::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneDataRD::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataRD::_notificationv(int, bool) */

void RenderSceneDataRD::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderSceneDataRD::~RenderSceneDataRD() */

void __thiscall RenderSceneDataRD::~RenderSceneDataRD(RenderSceneDataRD *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103640;
  Projection::~Projection((Projection *)(this + 0x37c));
  Projection::~Projection((Projection *)(this + 0x33c));
  Projection::~Projection((Projection *)(this + 0x2f4));
  Projection::~Projection((Projection *)(this + 0x284));
  Projection::~Projection((Projection *)(this + 0x244));
  Projection::~Projection((Projection *)(this + 0x1a4));
  *(undefined ***)this = &PTR__initialize_classv_001034b0;
  Object::~Object((Object *)this);
  return;
}



/* RenderSceneDataRD::_get_class_namev() const */

undefined8 * RenderSceneDataRD::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00101fa3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101fa3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneDataRD");
      goto LAB_0010200e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneDataRD");
LAB_0010200e:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneData::_get_class_namev() const */

undefined8 * RenderSceneData::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102093:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102093;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
      goto LAB_001020fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
LAB_001020fe:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneDataRD::~RenderSceneDataRD() */

void __thiscall RenderSceneDataRD::~RenderSceneDataRD(RenderSceneDataRD *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103640;
  Projection::~Projection((Projection *)(this + 0x37c));
  Projection::~Projection((Projection *)(this + 0x33c));
  Projection::~Projection((Projection *)(this + 0x2f4));
  Projection::~Projection((Projection *)(this + 0x284));
  Projection::~Projection((Projection *)(this + 0x244));
  Projection::~Projection((Projection *)(this + 0x1a4));
  *(undefined ***)this = &PTR__initialize_classv_001034b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x400);
  return;
}



/* RenderSceneData::_initialize_classv() */

void RenderSceneData::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RenderSceneData";
    local_50 = 0;
    local_30 = 0xf;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RenderSceneData::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::get_class() const */

void RenderSceneDataRD::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneData::get_class() const */

void RenderSceneData::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RenderSceneData::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderSceneData";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneData";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00102678:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102678;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102696;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102696:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderSceneData",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
RenderSceneDataRD::_get_property_listv(RenderSceneDataRD *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RenderSceneData::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderSceneDataRD";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneDataRD";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00102a78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102a78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102a95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102a95:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderSceneDataRD",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderSceneData::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneData::is_class(String const&) const */

undefined8 __thiscall RenderSceneData::is_class(RenderSceneData *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00102dbf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00102dbf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00102e73;
  }
  cVar6 = String::operator==(param_1,"RenderSceneData");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00102f23;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00102f23:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00102e73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102e73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::is_class(String const&) const */

undefined8 __thiscall RenderSceneDataRD::is_class(RenderSceneDataRD *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010304f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010304f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00103103;
  }
  cVar5 = String::operator==(param_1,"RenderSceneDataRD");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RenderSceneData::is_class((RenderSceneData *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103103:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataRD::_initialize_classv() */

void RenderSceneDataRD::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001032b4;
  if (RenderSceneData::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderSceneData";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_001033be:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_001033ce:
        RenderSceneData::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001033be;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_001033ce;
    }
    RenderSceneData::initialize_class()::initialized = '\x01';
  }
  local_48 = "RenderSceneData";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "RenderSceneDataRD";
  local_60 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_001032b4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderSceneDataRD::~RenderSceneDataRD() */

void __thiscall RenderSceneDataRD::~RenderSceneDataRD(RenderSceneDataRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


