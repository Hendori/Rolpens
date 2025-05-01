
/* tvg::Paint::Impl::bounds(tvg::RenderMethod*) const */

undefined1  [16] __thiscall tvg::Paint::Impl::bounds(Impl *this,RenderMethod *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 local_28 [16];
  
  bVar1 = (**(code **)(**(long **)this + 0x10))();
  if (bVar1 == 3) {
    auVar2 = tvg::Picture::Impl::bounds(*(RenderMethod **)(*(long *)this + 0x18));
    return auVar2;
  }
  if (bVar1 < 4) {
    if (bVar1 == 1) {
      local_28 = (undefined1  [16])0x0;
      if (*(long *)(*(long *)(*(long *)this + 0x18) + 0x38) != 0) {
        auVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        return auVar2;
      }
    }
    else {
      if (bVar1 != 2) {
        return (undefined1  [16])0x0;
      }
      local_28 = Scene::Impl::bounds(*(Impl **)(*(long *)this + 0x18),param_1);
    }
  }
  else {
    if (bVar1 != 4) {
      return (undefined1  [16])0x0;
    }
    local_28 = (undefined1  [16])0x0;
    if (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)this + 0x18) + 0x10) + 0x18) + 0x38) != 0)
    {
      auVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
      return auVar2;
    }
  }
  return local_28;
}



/* tvg::Paint::Impl::iterator() */

undefined8 * __thiscall tvg::Paint::Impl::iterator(Impl *this)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar3 = (**(code **)(**(long **)this + 0x10))();
  if (cVar3 == '\x02') {
    puVar4 = *(undefined8 **)(*(long *)this + 0x18);
    puVar5 = (undefined8 *)operator_new(0x18);
    uVar2 = *puVar4;
    *puVar5 = &PTR__SceneIterator_001035f0;
    puVar5[1] = puVar4;
    puVar5[2] = uVar2;
    return puVar5;
  }
  if (cVar3 != '\x03') {
    return (undefined8 *)0x0;
  }
  lVar1 = *(long *)(*(long *)this + 0x18);
  tvg::Picture::Impl::load();
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *puVar4 = &PTR__PictureIterator_001035b8;
  puVar4[1] = uVar2;
  puVar4[2] = 0;
  return puVar4;
}



/* tvg::Paint::Impl::rotate(float) */

undefined8 __thiscall tvg::Paint::Impl::rotate(Impl *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (this[0x70] == (Impl)0x0) {
    if (_LC4 < (float)((uint)(param_1 - *(float *)(this + 0x68)) & _LC3)) {
      this[0x75] = (Impl)((byte)this[0x75] | 0x10);
      *(float *)(this + 0x68) = param_1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* tvg::Paint::Impl::scale(float) */

undefined8 __thiscall tvg::Paint::Impl::scale(Impl *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (this[0x70] == (Impl)0x0) {
    if (_LC4 < (float)((uint)(param_1 - *(float *)(this + 0x6c)) & _LC3)) {
      this[0x75] = (Impl)((byte)this[0x75] | 0x10);
      *(float *)(this + 0x6c) = param_1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* tvg::Paint::Impl::translate(float, float) */

undefined8 __thiscall tvg::Paint::Impl::translate(Impl *this,float param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (this[0x70] == (Impl)0x0) {
    if ((_LC4 < (float)((uint)(param_1 - *(float *)(this + 0x28)) & _LC3)) ||
       (_LC4 < (float)((uint)(param_2 - *(float *)(this + 0x34)) & _LC3))) {
      this[0x75] = (Impl)((byte)this[0x75] | 0x10);
      *(float *)(this + 0x28) = param_1;
      *(float *)(this + 0x34) = param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* tvg::Paint::Impl::render(tvg::RenderMethod*) */

ulong __thiscall tvg::Paint::Impl::render(Impl *this,RenderMethod *param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  RenderRegion local_68 [8];
  int iStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x77] == (Impl)0x0) {
LAB_00100a10:
    uVar11 = 1;
  }
  else {
    plVar10 = *(long **)this;
    if ((*(long **)(this + 8) == (long *)0x0) ||
       ((*(byte *)(*(long *)(**(long **)(this + 8) + 0x10) + 0x76) & 1) != 0)) {
LAB_001008e8:
      bVar3 = (**(code **)(*plVar10 + 0x10))();
      if (bVar3 == 3) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar11 = tvg::Picture::Impl::render(*(RenderMethod **)(*(long *)this + 0x18));
          return uVar11;
        }
        goto LAB_00100d36;
      }
      if (bVar3 < 4) {
        if (bVar3 == 1) {
          lVar9 = *(long *)(*(long *)this + 0x18);
          if (*(long *)(lVar9 + 0x38) != 0) {
            lVar8 = 0;
LAB_00100955:
            (**(code **)(*(long *)param_1 + 0x60))
                      (param_1,*(undefined1 *)(*(long *)(*(long *)(lVar9 + 0x40) + 0x10) + 0x74));
            cVar5 = *(char *)(lVar9 + 0x49);
            if (cVar5 == '\0') {
              uVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,*(undefined8 *)(lVar9 + 0x38));
              uVar11 = (ulong)uVar6;
            }
            else {
              pcVar2 = *(code **)(*(long *)param_1 + 0x88);
              uVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
              auVar12 = ZEXT816(0);
              if (*(long *)(lVar9 + 0x38) != 0) {
                auVar12 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
              }
              local_58 = auVar12;
              lVar7 = (*pcVar2)(param_1,local_58,uVar4,cVar5);
              (**(code **)(*(long *)param_1 + 0x90))(param_1,lVar7,0,*(undefined1 *)(lVar9 + 0x4a));
              uVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,*(undefined8 *)(lVar9 + 0x38));
              uVar11 = (ulong)uVar6;
              if (lVar7 != 0) {
                (**(code **)(*(long *)param_1 + 0x98))(param_1,lVar7);
              }
            }
            goto LAB_00100a7c;
          }
        }
        else if (bVar3 == 2) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar11 = Scene::Impl::render(*(Impl **)(*(long *)this + 0x18),param_1);
            return uVar11;
          }
          goto LAB_00100d36;
        }
      }
      else if (bVar3 == 4) {
        plVar10 = *(long **)(*(long *)this + 0x18);
        if (*plVar10 != 0) {
          lVar8 = 0;
          goto LAB_00100a54;
        }
        goto LAB_00100a10;
      }
      uVar11 = 0;
    }
    else {
      bVar3 = (**(code **)(*plVar10 + 0x10))();
      if (bVar3 == 3) {
        _local_68 = tvg::Picture::Impl::bounds(*(RenderMethod **)(*(long *)this + 0x18));
      }
      else if (bVar3 < 4) {
        if (bVar3 == 1) {
          lVar8 = *(long *)this;
LAB_00100aeb:
          _local_68 = ZEXT816(0);
          if (*(long *)(*(long *)(lVar8 + 0x18) + 0x38) != 0) {
            _local_68 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          }
        }
        else {
          if (bVar3 != 2) goto LAB_00100c78;
          _local_68 = Scene::Impl::bounds(*(Impl **)(*(long *)this + 0x18),param_1);
        }
      }
      else {
        if (bVar3 == 4) {
          lVar8 = *(long *)(*(long *)(*(long *)this + 0x18) + 0x10);
          goto LAB_00100aeb;
        }
LAB_00100c78:
        _local_68 = (undefined1  [16])0x0;
      }
      iVar1 = (int)(*(long **)(this + 8))[2];
      if ((iVar1 == 6) || (iVar1 - 9U < 3)) {
        local_58 = bounds(*(Impl **)(**(long **)(this + 8) + 0x10),param_1);
        tvg::RenderRegion::add(local_68);
      }
      if ((iStack_60 == 0) || (iStack_5c == 0)) goto LAB_00100a10;
      iVar1 = *(int *)(*(long *)(this + 8) + 0x10);
      pcVar2 = *(code **)(*(long *)param_1 + 0x88);
      if (iVar1 < 6) {
        if (iVar1 < 4) {
          cVar5 = (1 < iVar1 - 2U) + '\x04';
        }
        else {
          cVar5 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
        }
      }
      else {
        cVar5 = (5 < iVar1 - 6U) + '\x04';
      }
      lVar8 = (*pcVar2)(param_1,local_68,cVar5,4);
      cVar5 = (**(code **)(*(long *)param_1 + 0x90))(param_1,lVar8,0,0xff);
      if (cVar5 != '\0') {
        render(*(Impl **)(**(long **)(this + 8) + 0x10),param_1);
      }
      if (lVar8 == 0) {
        plVar10 = *(long **)this;
        goto LAB_001008e8;
      }
      (**(code **)(*(long *)param_1 + 0x90))
                (param_1,lVar8,(int)(*(long **)(this + 8))[2],
                 *(undefined1 *)(*(long *)(**(long **)(this + 8) + 0x10) + 0x77));
      bVar3 = (**(code **)(**(long **)this + 0x10))();
      if (bVar3 == 3) {
        uVar6 = tvg::Picture::Impl::render(*(RenderMethod **)(*(long *)this + 0x18));
        uVar11 = (ulong)uVar6;
      }
      else if (bVar3 < 4) {
        if (bVar3 == 1) {
          lVar9 = *(long *)(*(long *)this + 0x18);
          if (*(long *)(lVar9 + 0x38) != 0) goto LAB_00100955;
        }
        else if (bVar3 == 2) {
          uVar6 = Scene::Impl::render(*(Impl **)(*(long *)this + 0x18),param_1);
          uVar11 = (ulong)uVar6;
          goto LAB_00100a81;
        }
LAB_00100d18:
        uVar11 = 0;
      }
      else {
        if (bVar3 != 4) goto LAB_00100d18;
        plVar10 = *(long **)(*(long *)this + 0x18);
        if (*plVar10 == 0) {
          uVar11 = 1;
          goto LAB_00100a81;
        }
LAB_00100a54:
        (**(code **)(*(long *)param_1 + 0x60))
                  (param_1,*(undefined1 *)(*(long *)(plVar10[1] + 0x10) + 0x74));
        uVar6 = render(*(Impl **)(plVar10[2] + 0x10),param_1);
        uVar11 = (ulong)uVar6;
LAB_00100a7c:
        if (lVar8 == 0) goto LAB_00100a15;
      }
LAB_00100a81:
      (**(code **)(*(long *)param_1 + 0x98))(param_1,lVar8);
    }
  }
LAB_00100a15:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
LAB_00100d36:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Paint::Impl::update(tvg::RenderMethod*, tvg::Matrix const&, tvg::Array<void*>&, unsigned
   char, tvg::RenderUpdateFlag, bool) */

undefined8 __thiscall
tvg::Paint::Impl::update
          (Impl *this,RenderMethod *param_1,Matrix *param_2,long *param_3,uint param_5,byte param_6,
          undefined1 param_7)

{
  byte *pbVar1;
  Impl IVar2;
  Paint *pPVar3;
  long *plVar4;
  float *pfVar5;
  ulong *puVar6;
  Impl *this_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  byte bVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  void *pvVar17;
  ulong extraout_RDX;
  ulong uVar18;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar19;
  undefined8 extraout_RDX_02;
  uint uVar20;
  long *plVar21;
  Impl IVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_a8 [16];
  Matrix local_98 [48];
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  undefined8 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(RenderMethod **)(this + 0x18) != param_1) {
    tvg::RenderMethod::ref();
    *(RenderMethod **)(this + 0x18) = param_1;
  }
  if ((((byte)this[0x75] & 0x10) != 0) && (this[0x70] == (Impl)0x0)) {
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x40) = 0x3f800000;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x6c);
    tvg::rotate((Matrix *)(this + 0x20),*(float *)(this + 0x68));
  }
  puVar25 = *(undefined8 **)(this + 8);
  if (puVar25 == (undefined8 *)0x0) {
LAB_00100e09:
    local_e0 = 2;
  }
  else {
    pPVar3 = (Paint *)*puVar25;
    iVar23 = *(int *)(puVar25 + 2);
    *(byte *)(*(long *)(pPVar3 + 0x10) + 0x76) = *(byte *)(*(long *)(pPVar3 + 0x10) + 0x76) & 0xfe;
    cVar12 = (**(code **)(*(long *)pPVar3 + 0x10))(pPVar3);
    if (cVar12 != '\x01') {
LAB_00100de2:
      lVar14 = *(long *)(pPVar3 + 0x10);
LAB_00100de7:
      update((Impl *)lVar14,param_1,param_2,param_3,0xff,param_6,0);
      goto LAB_00100e09;
    }
    tvg::Shape::fillColor((uchar *)pPVar3,(uchar *)0x0,(uchar *)0x0,(uchar *)0x0);
    lVar16 = tvg::Shape::fill();
    auVar10._8_8_ = local_a8._8_8_;
    auVar10._0_8_ = local_a8._0_8_;
    auVar9._8_8_ = local_a8._8_8_;
    auVar9._0_8_ = local_a8._0_8_;
    auVar8._8_8_ = local_a8._8_8_;
    auVar8._0_8_ = local_a8._0_8_;
    auVar7._8_8_ = local_a8._8_8_;
    auVar7._0_8_ = local_a8._0_8_;
    auVar27._8_8_ = local_a8._8_8_;
    auVar27._0_8_ = local_a8._0_8_;
    lVar14 = *(long *)(pPVar3 + 0x10);
    if ((lVar16 != 0) || (local_a8 = auVar27, *(long *)(lVar14 + 8) != 0)) goto LAB_00100de7;
    if (iVar23 == 2) {
      local_a8 = auVar9;
      if ((local_68._0_1_ == -1) && (local_a8 = auVar10, *(char *)(lVar14 + 0x77) == -1))
      goto LAB_00101179;
      goto LAB_00100de7;
    }
    local_a8 = auVar7;
    if ((iVar23 != 3) ||
       ((local_68._0_1_ != '\0' && (local_a8 = auVar8, *(char *)(lVar14 + 0x77) != '\0'))))
    goto LAB_00100de7;
LAB_00101179:
    local_a8 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    local_e0 = _compFastTrack(param_1,pPVar3,param_2,(RenderRegion *)local_a8);
    if (local_e0 == 0) {
      *(byte *)(*(long *)(pPVar3 + 0x10) + 0x76) = *(byte *)(*(long *)(pPVar3 + 0x10) + 0x76) | 1;
    }
    else if (local_e0 == 2) goto LAB_00100de2;
  }
  if (*(long *)(this + 0x10) != 0) {
    pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0x76);
    *pbVar1 = *pbVar1 & 0xfe;
    auVar27 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    local_a8 = auVar27;
    if (*(long *)(*(long *)(*(Paint **)(this + 0x10) + 0x10) + 0x10) == 0) {
      local_e0 = _compFastTrack(param_1,*(Paint **)(this + 0x10),param_2,(RenderRegion *)local_a8);
      if (local_e0 == 0) {
        pbVar1 = (byte *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0x76);
        *pbVar1 = *pbVar1 | 1;
        goto LAB_00100e53;
      }
    }
    if (local_e0 == 2) {
      uVar15 = update((Impl *)*(undefined8 *)(*(long *)(this + 0x10) + 0x10),param_1,param_2,param_3
                      ,0xff,param_6,1);
      uVar24 = *(uint *)(param_3 + 1);
      uVar20 = uVar24 + 1;
      if (*(uint *)((long)param_3 + 0xc) < uVar20) {
        uVar24 = (uVar24 + 2 >> 1) + uVar24;
        *(uint *)((long)param_3 + 0xc) = uVar24;
        pvVar17 = realloc((void *)*param_3,(ulong)uVar24 * 8);
        uVar24 = *(uint *)(param_3 + 1);
        *param_3 = (long)pvVar17;
        uVar20 = uVar24 + 1;
      }
      else {
        pvVar17 = (void *)*param_3;
      }
      *(uint *)(param_3 + 1) = uVar20;
      *(undefined8 *)((long)pvVar17 + (ulong)uVar24 * 8) = uVar15;
    }
  }
LAB_00100e53:
  IVar2 = this[0x75];
  this[0x75] = (Impl)0x0;
  param_6 = (byte)IVar2 | param_6;
  IVar2 = this[0x77];
  tvg::operator*((Matrix *)&local_d8,param_2);
  *(undefined8 *)(this + 0x44) = local_d8;
  *(undefined8 *)(this + 0x4c) = uStack_d0;
  iVar23 = (param_5 & 0xff) * (uint)(byte)IVar2 + 0xff;
  uVar24 = iVar23 >> 8;
  uVar18 = (ulong)uVar24;
  *(undefined8 *)(this + 0x54) = local_c8;
  *(undefined8 *)(this + 0x5c) = uStack_c0;
  *(undefined4 *)(this + 100) = local_b8;
  bVar13 = (**(code **)(**(long **)this + 0x10))();
  if (bVar13 == 3) {
    plVar4 = *(long **)(*(long *)this + 0x18);
    bVar13 = tvg::Picture::Impl::load();
    if (plVar4[2] == 0) {
      if (plVar4[1] != 0) {
        if (*(char *)((long)plVar4 + 0x31) != '\0') {
          if (*(code **)(*(long *)*plVar4 + 0x20) != LoadModule::resize) {
            (**(code **)(*(long *)*plVar4 + 0x20))((int)plVar4[4]);
          }
          *(undefined1 *)((long)plVar4 + 0x31) = 0;
        }
        tvg::Picture::Impl::queryComposition((uchar)plVar4);
        auVar28 = update((Impl *)*(undefined8 *)(plVar4[1] + 0x10),param_1,(Matrix *)(this + 0x44),
                         param_3,uVar18,param_6 | bVar13,0);
        plVar4[3] = auVar28._0_8_;
        goto joined_r0x0010109b;
      }
    }
    else if ((param_6 | bVar13) != 0) {
      local_68 = *(float *)(plVar4 + 4) / *(float *)(*plVar4 + 0x28);
      fVar26 = *(float *)((long)plVar4 + 0x24) / *(float *)(*plVar4 + 0x2c);
      if (fVar26 <= local_68) {
        local_68 = fVar26;
      }
      local_64 = 0;
      local_4c = 0x3f80000000000000;
      local_60 = 0;
      local_54 = 0;
      local_58 = local_68;
      tvg::operator*(local_98,(Matrix *)(this + 0x44));
      auVar28 = (**(code **)(*(long *)param_1 + 0x18))
                          (param_1,plVar4[2],plVar4[3],local_98,param_3,uVar18,param_6 | bVar13);
      plVar4[3] = auVar28._0_8_;
      goto joined_r0x0010109b;
    }
    auVar28._8_8_ = extraout_RDX_02;
    auVar28._0_8_ = plVar4[3];
    goto joined_r0x0010109b;
  }
  uVar19 = extraout_RDX;
  if (bVar13 < 4) {
    IVar22 = SUB41((uint)iVar23 >> 8,0);
    if (bVar13 == 1) {
      this_00 = *(Impl **)(*(long *)this + 0x18);
      if (param_6 == 0 && this_00[0x48] == (Impl)0x0) {
        auVar28._8_8_ = extraout_RDX;
        auVar28._0_8_ = *(undefined8 *)(this_00 + 0x38);
      }
      else {
        cVar12 = Shape::Impl::needComposition(this_00,(uchar)IVar22);
        if (cVar12 != '\0') {
          this_00[0x4a] = IVar22;
          uVar18 = 0xff;
        }
        auVar28 = (**(code **)(*(long *)param_1 + 0x10))
                            (param_1,this_00,*(undefined8 *)(this_00 + 0x38),this + 0x44,param_3,
                             uVar18,param_6 | (byte)this_00[0x48],param_7);
        this_00[0x48] = (Impl)0x0;
        *(long *)(this_00 + 0x38) = auVar28._0_8_;
      }
      goto joined_r0x0010109b;
    }
    if (bVar13 != 2) goto LAB_0010125a;
    plVar4 = *(long **)(*(long *)this + 0x18);
    auVar27 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    uVar19 = auVar27._8_8_;
    *(undefined1 *)(plVar4 + 8) = 0;
    *(undefined1 (*) [16])(plVar4 + 5) = auVar27;
    if (uVar24 == 0) {
      plVar21 = (long *)*plVar4;
      uVar18 = 0;
      uVar19 = uVar18;
joined_r0x001011cc:
      for (; plVar21 != plVar4; plVar21 = (long *)*plVar21) {
LAB_001011e0:
        update((Impl *)*(undefined8 *)(plVar21[2] + 0x10),param_1,this + 0x44,param_3,uVar18 & 0xff,
               param_6,0);
        uVar19 = extraout_RDX_01;
      }
    }
    else {
      plVar21 = (long *)*plVar4;
      if (plVar21 != plVar4) {
        bVar13 = (plVar4[7] != 0) << 3;
        *(byte *)(plVar4 + 8) = bVar13;
        lVar14 = *(long *)(plVar4[4] + 0x10);
        lVar16 = *(long *)(lVar14 + 8);
        if ((lVar16 != 0) && (1 < *(uint *)(lVar16 + 0x10))) {
          *(byte *)(plVar4 + 8) = bVar13 | 4;
        }
        if (*(char *)(lVar14 + 0x74) != '\0') {
          *(byte *)(plVar4 + 8) = *(byte *)(plVar4 + 8) | 2;
        }
        if (uVar24 == 0xff) {
          if ((char)plVar4[8] == '\0') {
            uVar18 = 0xffffffff;
            goto LAB_001011e0;
          }
        }
        else {
          if (plVar4[2] == 1) {
            cVar12 = (**(code **)(*(long *)plVar21[2] + 0x10))();
            uVar18 = (ulong)(byte)IVar22;
            if (cVar12 == '\x01') {
              plVar21 = (long *)*plVar4;
              uVar19 = uVar18;
              if ((char)plVar4[8] == '\0') goto joined_r0x001011cc;
              goto LAB_00100f64;
            }
            plVar21 = (long *)*plVar4;
          }
          *(byte *)(plVar4 + 8) = *(byte *)(plVar4 + 8) | 1;
        }
LAB_00100f64:
        *(char *)((long)plVar4 + 0x41) = (char)uVar18;
        uVar18 = 0xffffffff;
        uVar19 = uVar18;
        goto joined_r0x001011cc;
      }
    }
    puVar6 = (ulong *)plVar4[7];
    if ((puVar6 != (ulong *)0x0) &&
       (puVar25 = (undefined8 *)*puVar6, puVar25 < puVar25 + (uint)puVar6[1])) {
      do {
        uVar15 = *puVar25;
        puVar25 = puVar25 + 1;
        (**(code **)(*(long *)param_1 + 0xa0))(param_1,uVar15,this + 0x44);
        uVar19 = (ulong)*(uint *)((long *)plVar4[7] + 1);
      } while (puVar25 < (undefined8 *)(*(long *)plVar4[7] + uVar19 * 8));
    }
  }
  else if (bVar13 == 4) {
    plVar4 = *(long **)(*(long *)this + 0x18);
    plVar21 = (long *)*plVar4;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x40))(plVar21,plVar4[2],plVar4[3]);
      plVar21 = (long *)*plVar4;
      lVar14 = *plVar21;
      if (*(char *)((long)plVar4 + 0x25) != '\0') {
        if (*(code **)(lVar14 + 0x30) == LoadModule::read) {
          if (*(char *)((long)plVar21 + 0x26) == '\0') {
            *(undefined1 *)((long)plVar21 + 0x26) = 1;
          }
        }
        else {
          (**(code **)(lVar14 + 0x30))();
          plVar21 = (long *)*plVar4;
          lVar14 = *plVar21;
        }
        *(undefined1 *)((long)plVar4 + 0x25) = 0;
      }
      cVar12 = (**(code **)(lVar14 + 0x48))
                         ((int)plVar4[4],plVar21,plVar4[2],*(undefined1 *)((long)plVar4 + 0x24));
      uVar19 = extraout_RDX_00;
      if (cVar12 != '\0') {
        lVar14 = plVar4[2];
        plVar21 = *(long **)(*(long *)(lVar14 + 0x18) + 0x20);
        if ((plVar21 != (long *)0x0) && ((*(byte *)(*(long *)(lVar14 + 0x18) + 0x48) & 4) != 0)) {
          fVar26 = _LC2 / *(float *)(*plVar4 + 0x28);
          cVar12 = (**(code **)(*plVar21 + 0x10))(plVar21);
          pfVar5 = (float *)plVar21[2];
          if (cVar12 == '\n') {
            *pfVar5 = *pfVar5 * fVar26;
            pfVar5[1] = pfVar5[1] * fVar26;
            pfVar5[2] = pfVar5[2] * fVar26;
            pfVar5[3] = pfVar5[3] * fVar26;
            lVar14 = plVar4[2];
          }
          else {
            *(ulong *)(pfVar5 + 4) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) * fVar26,
                          (float)*(undefined8 *)(pfVar5 + 4) * fVar26);
            *pfVar5 = *pfVar5 * fVar26;
            pfVar5[1] = pfVar5[1] * fVar26;
            pfVar5[2] = pfVar5[2] * fVar26;
            pfVar5[3] = pfVar5[3] * fVar26;
            lVar14 = plVar4[2];
          }
        }
        uVar29 = 0;
        uVar15 = update((Impl *)*(undefined8 *)(lVar14 + 0x10),param_1,this + 0x44,param_3,uVar18,
                        param_6);
        auVar28._8_8_ = uVar29;
        auVar28._0_8_ = uVar15;
        goto joined_r0x0010109b;
      }
    }
  }
LAB_0010125a:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar19;
  auVar28 = auVar11 << 0x40;
joined_r0x0010109b:
  if (local_e0 == 0) {
    (**(code **)(*(long *)param_1 + 0x58))(param_1,local_a8,auVar28._8_8_);
  }
  else if ((*(long *)(this + 0x10) != 0) && ((int)param_3[1] != 0)) {
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar28._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Paint::Impl::bounds(float*, float*, float*, float*, bool, bool, bool) */

ulong __thiscall
tvg::Paint::Impl::bounds
          (Impl *this,float *param_1,float *param_2,float *param_3,float *param_4,bool param_5,
          bool param_6,bool param_7)

{
  uint uVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  Matrix *pMVar10;
  long *plVar11;
  Point *pPVar12;
  Point *pPVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Point local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)this[0x75] & 0x10) != 0) && (this[0x70] == (Impl)0x0)) {
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x40) = 0x3f800000;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x6c);
    tvg::rotate((Matrix *)(this + 0x20),*(float *)(this + 0x68));
  }
  pMVar10 = (Matrix *)(this + 0x20);
  if (param_7) {
    pMVar10 = (Matrix *)(this + 0x44);
  }
  if ((!param_5) || (cVar6 = tvg::identity(pMVar10), cVar6 != '\0')) {
    bVar5 = (**(code **)(**(long **)this + 0x10))();
    fVar14 = _LC1;
    if (bVar5 == 3) {
      lVar8 = *(long *)(*(long *)this + 0x18);
      if (param_1 != (float *)0x0) {
        *param_1 = 0.0;
      }
      if (param_2 != (float *)0x0) {
        *param_2 = 0.0;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = *(float *)(lVar8 + 0x20);
      }
      if (param_4 != (float *)0x0) {
        *param_4 = *(float *)(lVar8 + 0x24);
      }
LAB_0010185d:
      uVar7 = 1;
    }
    else {
      if (bVar5 < 4) {
        if (bVar5 == 1) {
          pfVar9 = *(float **)this;
          lVar8 = *(long *)(pfVar9 + 6);
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 != 0) {
            pfVar3 = *(float **)(lVar8 + 0x10);
            fVar17 = *pfVar3;
            fVar19 = *pfVar3;
            fVar14 = pfVar3[1];
            fVar20 = pfVar3[1];
            pfVar4 = pfVar3;
            while (fVar16 = fVar14, pfVar9 = pfVar4 + 2, pfVar9 < pfVar3 + (ulong)uVar1 * 2) {
              fVar15 = *pfVar9;
              fVar14 = pfVar4[3];
              fVar18 = fVar15;
              if (fVar15 <= fVar17) {
                fVar18 = fVar17;
              }
              if (fVar19 <= fVar15) {
                fVar15 = fVar19;
              }
              fVar21 = fVar14;
              if (fVar20 <= fVar14) {
                fVar21 = fVar20;
              }
              fVar17 = fVar18;
              fVar19 = fVar15;
              fVar20 = fVar21;
              pfVar4 = pfVar9;
              if (fVar14 <= fVar16) {
                fVar14 = fVar16;
              }
            }
            if (param_1 != (float *)0x0) {
              *param_1 = fVar19;
            }
            if (param_2 != (float *)0x0) {
              *param_2 = fVar20;
            }
            if (param_3 != (float *)0x0) {
              *param_3 = fVar17 - fVar19;
            }
            if (param_4 != (float *)0x0) {
              *param_4 = fVar16 - fVar20;
            }
          }
          if ((param_6) && (pfVar9 = *(float **)(lVar8 + 0x28), pfVar9 != (float *)0x0)) {
            if (param_1 != (float *)0x0) {
              *param_1 = *param_1 - _LC14 * *pfVar9;
            }
            if (param_2 != (float *)0x0) {
              *param_2 = *param_2 - _LC14 * *pfVar9;
            }
            if (param_3 != (float *)0x0) {
              *param_3 = *param_3 + *pfVar9;
            }
            if (param_4 != (float *)0x0) {
              *param_4 = *param_4 + *pfVar9;
            }
          }
          uVar7 = CONCAT71((int7)((ulong)pfVar9 >> 8),uVar1 != 0);
          goto LAB_00101868;
        }
        if (bVar5 == 2) {
          plVar2 = *(long **)(*(long *)this + 0x18);
          plVar11 = (long *)*plVar2;
          if (plVar11 != plVar2) {
            local_c8 = _LC13;
            local_d0 = _LC13;
            local_cc = _LC1;
            local_90 = _LC1;
            do {
              local_70 = 0.0;
              local_6c = 0.0;
              local_78 = fVar14;
              local_74 = fVar14;
              cVar6 = bounds(*(Impl **)(plVar11[2] + 0x10),&local_78,&local_74,&local_70,&local_6c,
                             true,param_6,false);
              fVar17 = local_d0;
              if (cVar6 != '\0') {
                fVar19 = local_78;
                if (local_90 <= local_78) {
                  fVar19 = local_90;
                }
                fVar20 = local_74;
                if (local_cc <= local_74) {
                  fVar20 = local_cc;
                }
                fVar16 = local_78 + local_70;
                if (local_78 + local_70 <= local_c8) {
                  fVar16 = local_c8;
                }
                fVar17 = local_74 + local_6c;
                local_cc = fVar20;
                local_90 = fVar19;
                local_c8 = fVar16;
                if (local_74 + local_6c <= local_d0) {
                  fVar17 = local_d0;
                }
              }
              local_d0 = fVar17;
              plVar11 = (long *)*plVar11;
            } while (plVar2 != plVar11);
            if (param_1 != (float *)0x0) {
              *param_1 = local_90;
            }
            if (param_2 != (float *)0x0) {
              *param_2 = local_cc;
            }
            if (param_3 != (float *)0x0) {
              *param_3 = local_c8 - local_90;
            }
            if (param_4 != (float *)0x0) {
              *param_4 = local_d0 - local_cc;
            }
            goto LAB_0010185d;
          }
        }
      }
      else if (bVar5 == 4) {
        plVar2 = *(long **)(*(long *)this + 0x18);
        plVar11 = (long *)*plVar2;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x40))(plVar11,plVar2[2],plVar2[3]);
          plVar11 = (long *)*plVar2;
          lVar8 = *plVar11;
          if (*(char *)((long)plVar2 + 0x25) != '\0') {
            if (*(code **)(lVar8 + 0x30) == LoadModule::read) {
              if (*(char *)((long)plVar11 + 0x26) == '\0') {
                *(undefined1 *)((long)plVar11 + 0x26) = 1;
              }
            }
            else {
              (**(code **)(lVar8 + 0x30))();
              plVar11 = (long *)*plVar2;
              lVar8 = *plVar11;
            }
            *(undefined1 *)((long)plVar2 + 0x25) = 0;
          }
          cVar6 = (**(code **)(lVar8 + 0x48))
                            ((int)plVar2[4],plVar11,plVar2[2],*(undefined1 *)((long)plVar2 + 0x24));
          if (cVar6 != '\0') {
            bounds(*(Impl **)(plVar2[2] + 0x10),param_1,param_2,param_3,param_4,true,true,false);
            goto LAB_0010185d;
          }
        }
      }
      uVar7 = 0;
    }
    goto LAB_00101868;
  }
  local_88 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  local_7c = 0.0;
  bVar5 = (**(code **)(**(long **)this + 0x10))();
  fVar17 = _LC13;
  fVar14 = _LC1;
  if (bVar5 == 3) {
    local_88 = 0.0;
    local_84 = 0.0;
    local_80 = *(float *)(*(long *)(*(long *)this + 0x18) + 0x20);
    local_7c = *(float *)(*(long *)(*(long *)this + 0x18) + 0x24);
  }
  else {
    if (bVar5 < 4) {
      if (bVar5 == 1) {
        lVar8 = *(long *)(*(long *)this + 0x18);
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 != 0) {
          pfVar3 = *(float **)(lVar8 + 0x10);
          pfVar9 = pfVar3 + (ulong)uVar1 * 2;
          local_80 = *pfVar3;
          local_88 = *pfVar3;
          local_7c = pfVar3[1];
          fVar19 = pfVar3[1];
          while (local_84 = fVar19, pfVar3 = pfVar3 + 2, pfVar3 < pfVar9) {
            fVar20 = *pfVar3;
            fVar19 = pfVar3[1];
            fVar16 = fVar20;
            if (fVar20 <= local_80) {
              fVar16 = local_80;
            }
            if (local_88 <= fVar20) {
              fVar20 = local_88;
            }
            fVar15 = fVar19;
            if (fVar19 <= local_7c) {
              fVar15 = local_7c;
            }
            local_80 = fVar16;
            local_88 = fVar20;
            local_7c = fVar15;
            if (local_84 <= fVar19) {
              fVar19 = local_84;
            }
          }
          local_80 = local_80 - local_88;
          local_7c = local_7c - local_84;
        }
        if ((param_6) && (pfVar9 = *(float **)(lVar8 + 0x28), pfVar9 != (float *)0x0)) {
          local_88 = local_88 - *pfVar9 * _LC14;
          local_84 = local_84 - _LC14 * *pfVar9;
          local_80 = local_80 + *pfVar9;
          local_7c = local_7c + *pfVar9;
        }
        param_5 = uVar1 != 0;
        goto LAB_00101b78;
      }
      if (bVar5 == 2) {
        plVar2 = *(long **)(*(long *)this + 0x18);
        plVar11 = (long *)*plVar2;
        if (plVar11 != plVar2) {
          local_d0 = _LC1;
          local_cc = _LC1;
          local_c8 = _LC13;
          local_c0 = _LC13;
          do {
            local_70 = 0.0;
            local_6c = 0.0;
            local_78 = fVar14;
            local_74 = fVar14;
            cVar6 = bounds(*(Impl **)(plVar11[2] + 0x10),&local_78,&local_74,&local_70,&local_6c,
                           true,param_6,false);
            fVar19 = local_c0;
            if (cVar6 != '\0') {
              fVar19 = local_78 + local_70;
              if (local_78 + local_70 <= local_c8) {
                fVar19 = local_c8;
              }
              fVar20 = local_78;
              if (local_cc <= local_78) {
                fVar20 = local_cc;
              }
              fVar16 = local_74;
              if (local_d0 <= local_74) {
                fVar16 = local_d0;
              }
              local_d0 = fVar16;
              local_cc = fVar20;
              local_c8 = fVar19;
              fVar19 = local_74 + local_6c;
              if (local_74 + local_6c <= local_c0) {
                fVar19 = local_c0;
              }
            }
            local_c0 = fVar19;
            plVar11 = (long *)*plVar11;
          } while (plVar2 != plVar11);
          local_88 = local_cc;
          local_80 = local_c8 - local_cc;
          local_7c = local_c0 - local_d0;
          local_84 = local_d0;
          goto LAB_00101b78;
        }
      }
    }
    else if (bVar5 == 4) {
      plVar2 = *(long **)(*(long *)this + 0x18);
      plVar11 = (long *)*plVar2;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x40))(plVar11,plVar2[2],plVar2[3]);
        plVar11 = (long *)*plVar2;
        lVar8 = *plVar11;
        if (*(char *)((long)plVar2 + 0x25) != '\0') {
          if (*(code **)(lVar8 + 0x30) == LoadModule::read) {
            if (*(char *)((long)plVar11 + 0x26) == '\0') {
              *(undefined1 *)((long)plVar11 + 0x26) = 1;
            }
          }
          else {
            (**(code **)(lVar8 + 0x30))();
            plVar11 = (long *)*plVar2;
            lVar8 = *plVar11;
          }
          *(undefined1 *)((long)plVar2 + 0x25) = 0;
        }
        param_5 = (bool)(**(code **)(lVar8 + 0x48))
                                  ((int)plVar2[4],plVar11,plVar2[2],
                                   *(undefined1 *)((long)plVar2 + 0x24));
        fVar14 = _LC1;
        fVar17 = _LC13;
        if (param_5 != false) {
          bounds(*(Impl **)(plVar2[2] + 0x10),&local_88,&local_84,&local_80,&local_7c,true,true,
                 false);
          fVar14 = _LC1;
          fVar17 = _LC13;
        }
        goto LAB_00101b78;
      }
    }
    param_5 = false;
  }
LAB_00101b78:
  local_58 = local_80 + local_88;
  fStack_54 = local_7c + local_84;
  local_68 = CONCAT44(local_84,local_88);
  uStack_60 = CONCAT44(local_84,local_58);
  pPVar12 = (Point *)&local_68;
  fVar19 = fVar17;
  fVar20 = fVar14;
  fStack_50 = local_88;
  fStack_4c = fStack_54;
  do {
    pPVar13 = pPVar12 + 8;
    tvg::operator*=(pPVar12,pMVar10);
    fVar16 = *(float *)pPVar12;
    fVar15 = fVar16;
    if (fVar16 <= fVar19) {
      fVar15 = fVar19;
    }
    if (fVar20 <= fVar16) {
      fVar16 = fVar20;
    }
    fVar20 = fVar16;
    fVar19 = *(float *)(pPVar12 + 4);
    fVar16 = fVar19;
    if (fVar19 <= fVar17) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16;
    if (fVar14 <= fVar19) {
      fVar19 = fVar14;
    }
    fVar14 = fVar19;
    pPVar12 = pPVar13;
    fVar19 = fVar15;
  } while (local_48 != pPVar13);
  if (param_1 != (float *)0x0) {
    *param_1 = fVar20;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar14;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar15 - fVar20;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar17 - fVar14;
  }
  uVar7 = (ulong)param_5;
LAB_00101868:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Paint::Impl::reset() */

void __thiscall tvg::Paint::Impl::reset(Impl *this)

{
  char *pcVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  long *__ptr;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  __ptr = *(long **)(this + 8);
  if (__ptr != (long *)0x0) {
    plVar2 = (long *)*__ptr;
    pcVar1 = (char *)(plVar2[2] + 0x78);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      (**(code **)(*plVar2 + 8))(plVar2);
      __ptr = *(long **)(this + 8);
    }
    free(__ptr);
    *(undefined8 *)(this + 8) = 0;
  }
  uVar4 = _LC11;
  uVar3 = _LC2;
  this[0x70] = (Impl)0x0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined4 *)(this + 0x74) = 0xff000000;
  *(undefined1 (*) [16])(this + 0x20) = ZEXT416(uVar3);
  *(undefined1 (*) [16])(this + 0x30) = ZEXT416(uVar3);
  *(undefined4 *)(*(long *)this + 8) = 0;
  return;
}



/* tvg::Paint::Paint() */

void __thiscall tvg::Paint::Paint(Paint *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined **)this = &DAT_00103628;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = (undefined8 *)operator_new(0x80);
  uVar2 = _LC11;
  uVar1 = _LC2;
  *(undefined4 *)(this + 8) = 0;
  *puVar3 = this;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  puVar3[0xd] = uVar2;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  *(undefined4 *)((long)puVar3 + 0x74) = 0xff000000;
  *(undefined8 **)(this + 0x10) = puVar3;
  *(undefined1 (*) [16])(puVar3 + 4) = ZEXT416(uVar1);
  *(undefined1 (*) [16])(puVar3 + 6) = ZEXT416(uVar1);
  return;
}



/* tvg::Paint::~Paint() */

void __thiscall tvg::Paint::~Paint(Paint *this)

{
  char *pcVar1;
  void *pvVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  pvVar2 = *(void **)(this + 0x10);
  *(undefined **)this = &DAT_00103628;
  if (pvVar2 != (void *)0x0) {
    plVar5 = *(long **)((long)pvVar2 + 8);
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)*plVar5;
      pcVar1 = (char *)(plVar3[2] + 0x78);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar5 = *(long **)((long)pvVar2 + 8);
      }
      free(plVar5);
    }
    plVar5 = *(long **)((long)pvVar2 + 0x10);
    if (plVar5 != (long *)0x0) {
      pcVar1 = (char *)(plVar5[2] + 0x78);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if (*(long *)((long)pvVar2 + 0x18) != 0) {
      iVar4 = tvg::RenderMethod::unref();
      if ((iVar4 == 0) && (*(long **)((long)pvVar2 + 0x18) != (long *)0x0)) {
        (**(code **)(**(long **)((long)pvVar2 + 0x18) + 8))();
      }
    }
    operator_delete(pvVar2,0x80);
    return;
  }
  return;
}



/* tvg::Paint::~Paint() */

void __thiscall tvg::Paint::~Paint(Paint *this)

{
  ~Paint(this);
  operator_delete(this,0x18);
  return;
}



/* tvg::Paint::rotate(float) */

undefined8 __thiscall tvg::Paint::rotate(Paint *this,float param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = 2;
  if (*(char *)(lVar1 + 0x70) == '\0') {
    if (_LC4 < (float)((uint)(param_1 - *(float *)(lVar1 + 0x68)) & _LC3)) {
      *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 0x10;
      *(float *)(lVar1 + 0x68) = param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* tvg::Paint::scale(float) */

undefined8 __thiscall tvg::Paint::scale(Paint *this,float param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = 2;
  if (*(char *)(lVar1 + 0x70) == '\0') {
    if (_LC4 < (float)((uint)(param_1 - *(float *)(lVar1 + 0x6c)) & _LC3)) {
      *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 0x10;
      *(float *)(lVar1 + 0x6c) = param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* tvg::Paint::translate(float, float) */

undefined8 __thiscall tvg::Paint::translate(Paint *this,float param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = 2;
  if (*(char *)(lVar1 + 0x70) == '\0') {
    if ((_LC4 < (float)((uint)(param_1 - *(float *)(lVar1 + 0x28)) & _LC3)) ||
       (_LC4 < (float)((uint)(param_2 - *(float *)(lVar1 + 0x34)) & _LC3))) {
      *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 0x10;
      *(float *)(lVar1 + 0x28) = param_1;
      *(float *)(lVar1 + 0x34) = param_2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* tvg::Paint::transform(tvg::Matrix const&) */

undefined8 __thiscall tvg::Paint::transform(Paint *this,Matrix *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  if (param_1 != (Matrix *)(lVar1 + 0x20)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)param_1;
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
  }
  *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 0x10;
  *(undefined1 *)(lVar1 + 0x70) = 1;
  return 0;
}



/* tvg::Paint::transform() */

void tvg::Paint::transform(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar2 = *(long *)(in_RSI + 0x10);
  if (((*(byte *)(lVar2 + 0x75) & 0x10) != 0) && (*(char *)(lVar2 + 0x70) == '\0')) {
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(lVar2 + 0x2c) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar2 + 0x6c);
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x6c);
    tvg::rotate((Matrix *)(lVar2 + 0x20),*(float *)(lVar2 + 0x68));
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  uVar5 = *(undefined8 *)(lVar2 + 0x38);
  uVar1 = *(undefined4 *)(lVar2 + 0x40);
  *in_RDI = *(undefined8 *)(lVar2 + 0x20);
  in_RDI[1] = uVar3;
  *(undefined4 *)(in_RDI + 4) = uVar1;
  in_RDI[2] = uVar4;
  in_RDI[3] = uVar5;
  return;
}



/* tvg::Paint::bounds(float*, float*, float*, float*) const */

int __thiscall
tvg::Paint::bounds(Paint *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  
  uVar1 = Impl::bounds(*(Impl **)(this + 0x10),param_1,param_2,param_3,param_4,false,true,false);
  return ((uVar1 ^ 1) & 0xff) * 2;
}



/* tvg::Paint::bounds(float*, float*, float*, float*, bool) const */

int __thiscall
tvg::Paint::bounds(Paint *this,float *param_1,float *param_2,float *param_3,float *param_4,
                  bool param_5)

{
  uint uVar1;
  
  uVar1 = Impl::bounds(*(Impl **)(this + 0x10),param_1,param_2,param_3,param_4,param_5,true,param_5)
  ;
  return ((uVar1 ^ 1) & 0xff) * 2;
}



/* tvg::Paint::clip(std::unique_ptr<tvg::Paint, std::default_delete<tvg::Paint> >) */

undefined8 __thiscall tvg::Paint::clip(Paint *this,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if (plVar2 == (long *)0x0) {
    lVar4 = *(long *)(this + 0x10);
    plVar5 = *(long **)(lVar4 + 0x10);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    pcVar1 = (char *)(plVar5[2] + 0x78);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      return 0;
    }
LAB_00102520:
    (**(code **)(*plVar5 + 8))();
    *(long **)(lVar4 + 0x10) = plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar3 != '\x01') {
      return 5;
    }
    lVar4 = *(long *)(this + 0x10);
    plVar5 = *(long **)(lVar4 + 0x10);
    if (plVar5 != (long *)0x0) {
      cVar3 = *(char *)(plVar5[2] + 0x78) + -1;
      *(char *)(plVar5[2] + 0x78) = cVar3;
      if ((plVar2 != plVar5) && (cVar3 == '\0')) goto LAB_00102520;
    }
    *(long **)(lVar4 + 0x10) = plVar2;
  }
  *(char *)(plVar2[2] + 0x78) = *(char *)(plVar2[2] + 0x78) + '\x01';
  return 0;
}



/* tvg::Paint::composite(std::unique_ptr<tvg::Paint, std::default_delete<tvg::Paint> >,
   tvg::CompositeMethod) */

ulong __thiscall tvg::Paint::composite(Paint *this,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  long *__ptr;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  plVar1 = (long *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 1) && (plVar1 != (long *)0x0)) {
    *param_2 = 0;
    local_38 = plVar1;
    uVar5 = clip(this,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
      uVar5 = uVar5 & 0xffffffff;
    }
    goto LAB_001025c2;
  }
  *param_2 = 0;
  lVar2 = *(long *)(this + 0x10);
  if ((plVar1 == (long *)0x0) != (param_3 == 0)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    uVar5 = 1;
    goto LAB_001025c2;
  }
  __ptr = *(long **)(lVar2 + 8);
  if (__ptr == (long *)0x0) {
    if (plVar1 != (long *)0x0) {
      __ptr = (long *)calloc(1,0x18);
      *(long **)(lVar2 + 8) = __ptr;
      goto LAB_00102621;
    }
  }
  else {
    plVar3 = (long *)*__ptr;
    cVar4 = *(char *)(plVar3[2] + 0x78) + -1;
    *(char *)(plVar3[2] + 0x78) = cVar4;
    if ((plVar1 != plVar3) && (cVar4 == '\0')) {
      (**(code **)(*plVar3 + 8))(plVar3);
      __ptr = *(long **)(lVar2 + 8);
    }
    if (plVar1 == (long *)0x0) {
      free(__ptr);
      *(undefined8 *)(lVar2 + 8) = 0;
      uVar5 = 0;
      goto LAB_001025c2;
    }
LAB_00102621:
    *(char *)(plVar1[2] + 0x78) = *(char *)(plVar1[2] + 0x78) + '\x01';
    *(int *)(__ptr + 2) = param_3;
    *__ptr = (long)plVar1;
    __ptr[1] = (long)this;
  }
  uVar5 = 0;
LAB_001025c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Paint::Impl::duplicate(tvg::Paint*) */

long * __thiscall tvg::Paint::Impl::duplicate(Impl *this,Paint *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  _List_node_base *p_Var14;
  long lVar15;
  Paint *pPVar16;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Paint *)0x0) {
    local_48 = (long *)0x0;
    composite(param_1,&local_48,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  pPVar16 = *(Paint **)this;
  bVar7 = (**(code **)(*(long *)pPVar16 + 0x10))();
  if (bVar7 == 3) {
    plVar10 = *(long **)(*(long *)this + 0x18);
    tvg::Picture::Impl::load();
    tvg::Picture::gen();
    plVar9 = local_48;
    plVar11 = (long *)local_48[3];
    if (plVar10[1] != 0) {
      lVar15 = duplicate(*(Impl **)(plVar10[1] + 0x10),(Paint *)0x0);
      plVar11[1] = lVar15;
    }
    lVar13 = *plVar10;
    lVar15 = plVar9[2];
    if (lVar13 == 0) {
      bVar7 = *(byte *)(lVar15 + 0x75);
    }
    else {
      *plVar11 = lVar13;
      *(short *)(lVar13 + 0x24) = *(short *)(lVar13 + 0x24) + 1;
      bVar7 = *(byte *)(lVar15 + 0x75) | 0x20;
      *(byte *)(lVar15 + 0x75) = bVar7;
    }
    plVar11[2] = plVar10[2];
    plVar11[4] = plVar10[4];
    *(undefined1 *)((long)plVar11 + 0x31) = *(undefined1 *)((long)plVar10 + 0x31);
  }
  else {
    if (bVar7 < 4) {
      if (bVar7 == 1) {
        plVar9 = (long *)Shape::Impl::duplicate(*(Impl **)(*(long *)this + 0x18),param_1);
        lVar15 = plVar9[2];
        bVar7 = *(byte *)(lVar15 + 0x75);
        goto LAB_0010274a;
      }
      if (bVar7 != 2) {
        plVar10 = (long *)duplicate(pPVar16);
        return plVar10;
      }
      puVar4 = *(undefined8 **)(*(long *)this + 0x18);
      tvg::Scene::gen();
      plVar9 = local_48;
      puVar5 = (undefined8 *)*puVar4;
      lVar15 = local_48[3];
      while (puVar5 != puVar4) {
        lVar13 = duplicate(*(Impl **)(puVar5[2] + 0x10),(Paint *)0x0);
        pcVar12 = (char *)(*(long *)(lVar13 + 0x10) + 0x78);
        *pcVar12 = *pcVar12 + '\x01';
        p_Var14 = (_List_node_base *)operator_new(0x18);
        *(long *)(p_Var14 + 0x10) = lVar13;
        std::__detail::_List_node_base::_M_hook(p_Var14);
        puVar5 = (undefined8 *)*puVar5;
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
    }
    else {
      if (bVar7 != 4) {
        plVar10 = (long *)duplicate(pPVar16);
        return plVar10;
      }
      plVar10 = *(long **)(*(long *)this + 0x18);
      plVar11 = (long *)*plVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x40))(plVar11,plVar10[2],plVar10[3]);
        plVar11 = (long *)*plVar10;
        lVar15 = *plVar11;
        if (*(char *)((long)plVar10 + 0x25) != '\0') {
          if (*(code **)(lVar15 + 0x30) == LoadModule::read) {
            if (*(char *)((long)plVar11 + 0x26) == '\0') {
              *(undefined1 *)((long)plVar11 + 0x26) = 1;
            }
          }
          else {
            (**(code **)(lVar15 + 0x30))();
            plVar11 = (long *)*plVar10;
            lVar15 = *plVar11;
          }
          *(undefined1 *)((long)plVar10 + 0x25) = 0;
        }
        (**(code **)(lVar15 + 0x48))
                  ((int)plVar10[4],plVar11,plVar10[2],*(undefined1 *)((long)plVar10 + 0x24));
      }
      tvg::Text::gen();
      plVar9 = local_48;
      plVar11 = (long *)local_48[3];
      Shape::Impl::duplicate(*(Impl **)(plVar10[2] + 0x18),(Paint *)plVar11[2]);
      lVar15 = *plVar10;
      if (lVar15 != 0) {
        *plVar11 = lVar15;
        *(short *)(lVar15 + 0x24) = *(short *)(lVar15 + 0x24) + 1;
      }
      pcVar12 = strdup((char *)plVar10[3]);
      lVar15 = plVar10[4];
      plVar11[3] = (long)pcVar12;
      uVar1 = *(undefined1 *)((long)plVar10 + 0x24);
      *(int *)(plVar11 + 4) = (int)lVar15;
      *(undefined1 *)((long)plVar11 + 0x24) = uVar1;
    }
    lVar15 = plVar9[2];
    bVar7 = *(byte *)(lVar15 + 0x75);
  }
LAB_0010274a:
  uVar6 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(lVar15 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(lVar15 + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(lVar15 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(lVar15 + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(lVar15 + 0x68) = uVar6;
  uVar2 = *(undefined4 *)(this + 0x70);
  *(byte *)(lVar15 + 0x75) = bVar7 | 0x10;
  *(undefined4 *)(lVar15 + 0x70) = uVar2;
  *(Impl *)(lVar15 + 0x77) = this[0x77];
  plVar10 = *(long **)(this + 8);
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[2];
    plVar10 = (long *)duplicate(*(Impl **)(*plVar10 + 0x10),(Paint *)0x0);
    if ((plVar10 == (long *)0x0) == ((int)lVar13 == 0)) {
      plVar11 = *(long **)(lVar15 + 8);
      if (plVar11 == (long *)0x0) {
        if (plVar10 != (long *)0x0) {
          plVar11 = (long *)calloc(1,0x18);
          *(long **)(lVar15 + 8) = plVar11;
          goto LAB_001027f5;
        }
      }
      else {
        plVar3 = (long *)*plVar11;
        cVar8 = *(char *)(plVar3[2] + 0x78) + -1;
        *(char *)(plVar3[2] + 0x78) = cVar8;
        if ((plVar3 != plVar10) && (cVar8 == '\0')) {
          (**(code **)(*plVar3 + 8))(plVar3);
          plVar11 = *(long **)(lVar15 + 8);
        }
        if (plVar10 == (long *)0x0) {
          free(plVar11);
          *(undefined8 *)(lVar15 + 8) = 0;
        }
        else {
LAB_001027f5:
          *(char *)(plVar10[2] + 0x78) = *(char *)(plVar10[2] + 0x78) + '\x01';
          *plVar11 = (long)plVar10;
          plVar11[1] = (long)plVar9;
          *(int *)(plVar11 + 2) = (int)lVar13;
        }
      }
    }
  }
  if (*(long *)(this + 0x10) == 0) goto LAB_0010285d;
  lVar15 = plVar9[2];
  plVar11 = (long *)duplicate(*(Impl **)(*(long *)(this + 0x10) + 0x10),(Paint *)0x0);
  plVar10 = *(long **)(lVar15 + 0x10);
  if (plVar10 == (long *)0x0) {
LAB_0010284c:
    *(long **)(lVar15 + 0x10) = plVar11;
    if (plVar11 == (long *)0x0) goto LAB_0010285d;
  }
  else {
    cVar8 = *(char *)(plVar10[2] + 0x78) + -1;
    *(char *)(plVar10[2] + 0x78) = cVar8;
    if (plVar10 != plVar11) {
      if (cVar8 == '\0') {
        (**(code **)(*plVar10 + 8))();
      }
      goto LAB_0010284c;
    }
    *(long **)(lVar15 + 0x10) = plVar11;
  }
  *(char *)(plVar11[2] + 0x78) = *(char *)(plVar11[2] + 0x78) + '\x01';
LAB_0010285d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Paint::duplicate() const */

void __thiscall tvg::Paint::duplicate(Paint *this)

{
  Impl::duplicate(*(Impl **)(this + 0x10),(Paint *)0x0);
  return;
}



/* tvg::Paint::composite(tvg::Paint const**) const */

undefined4 __thiscall tvg::Paint::composite(Paint *this,Paint **param_1)

{
  undefined8 *puVar1;
  Paint *pPVar2;
  
  puVar1 = *(undefined8 **)(*(long *)(this + 0x10) + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1 != (Paint **)0x0) {
      *param_1 = (Paint *)*puVar1;
    }
    return *(undefined4 *)(puVar1 + 2);
  }
  pPVar2 = *(Paint **)(*(long *)(this + 0x10) + 0x10);
  if (pPVar2 != (Paint *)0x0) {
    if (param_1 != (Paint **)0x0) {
      *param_1 = pPVar2;
    }
    return 1;
  }
  if (param_1 != (Paint **)0x0) {
    *param_1 = (Paint *)0x0;
  }
  return 0;
}



/* tvg::Paint::opacity(unsigned char) */

undefined8 __thiscall tvg::Paint::opacity(Paint *this,uchar param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (*(uchar *)(lVar1 + 0x77) != param_1) {
    *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 2;
    *(uchar *)(lVar1 + 0x77) = param_1;
  }
  return 0;
}



/* tvg::Paint::opacity() const */

undefined1 __thiscall tvg::Paint::opacity(Paint *this)

{
  return *(undefined1 *)(*(long *)(this + 0x10) + 0x77);
}



/* tvg::Paint::identifier() const */

undefined1 __thiscall tvg::Paint::identifier(Paint *this)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))();
  return uVar1;
}



/* tvg::Paint::blend(tvg::BlendMethod) */

undefined8 __thiscall tvg::Paint::blend(Paint *this,char param_2)

{
  long lVar1;
  
  if ((3 < (byte)(param_2 - 0xcU)) && (param_2 != '\x11')) {
    lVar1 = *(long *)(this + 0x10);
    if (*(char *)(lVar1 + 0x74) != param_2) {
      *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) | 0x80;
      *(char *)(lVar1 + 0x74) = param_2;
    }
    return 0;
  }
  return 5;
}



/* LoadModule::resize(tvg::Paint*, float, float) */

undefined8 LoadModule::resize(Paint *param_1,float param_2,float param_3)

{
  return 0;
}



/* LoadModule::read() */

bool __thiscall LoadModule::read(LoadModule *this)

{
  LoadModule LVar1;
  
  LVar1 = this[0x26];
  if (LVar1 == (LoadModule)0x0) {
    this[0x26] = (LoadModule)0x1;
  }
  return LVar1 == (LoadModule)0x0;
}



/* PictureIterator::next() */

void __thiscall PictureIterator::next(PictureIterator *this)

{
  if (*(long *)(this + 0x10) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
    return;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return;
}



/* PictureIterator::count() */

bool __thiscall PictureIterator::count(PictureIterator *this)

{
  return *(long *)(this + 8) != 0;
}



/* PictureIterator::begin() */

void __thiscall PictureIterator::begin(PictureIterator *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* SceneIterator::next() */

undefined8 __thiscall SceneIterator::next(SceneIterator *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == *(undefined8 **)(this + 8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = puVar1[2];
    *(undefined8 *)(this + 0x10) = *puVar1;
  }
  return uVar2;
}



/* SceneIterator::count() */

undefined4 __thiscall SceneIterator::count(SceneIterator *this)

{
  return *(undefined4 *)(*(long *)(this + 8) + 0x10);
}



/* SceneIterator::begin() */

void __thiscall SceneIterator::begin(SceneIterator *this)

{
  *(undefined8 *)(this + 0x10) = **(undefined8 **)(this + 8);
  return;
}



/* SceneIterator::~SceneIterator() */

void __thiscall SceneIterator::~SceneIterator(SceneIterator *this)

{
  return;
}



/* PictureIterator::~PictureIterator() */

void __thiscall PictureIterator::~PictureIterator(PictureIterator *this)

{
  return;
}



/* SceneIterator::~SceneIterator() */

void __thiscall SceneIterator::~SceneIterator(SceneIterator *this)

{
  operator_delete(this,0x18);
  return;
}



/* PictureIterator::~PictureIterator() */

void __thiscall PictureIterator::~PictureIterator(PictureIterator *this)

{
  operator_delete(this,0x18);
  return;
}



/* tvg::Shape::Impl::needComposition(unsigned char) */

undefined8 __thiscall tvg::Shape::Impl::needComposition(Impl *this,uchar param_1)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uchar local_24;
  byte local_23;
  byte local_22;
  char local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x49] = (Impl)0x0;
  if ((((param_1 == '\0') || (pfVar2 = *(float **)(this + 0x28), pfVar2 == (float *)0x0)) ||
      (*pfVar2 <= _LC4 && _LC4 != *pfVar2)) ||
     ((*(long *)(pfVar2 + 2) == 0 && (*(char *)((long)pfVar2 + 7) == '\0')))) goto LAB_00102e22;
  if ((*(long *)(this + 0x20) == 0) && (this[0x33] == (Impl)0x0)) {
    uVar6 = 0;
    goto LAB_00102d3f;
  }
  if (param_1 == 0xff) {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(this + 0x40) + 0x10) + 8);
    if (puVar3 != (undefined8 *)0x0) {
      plVar4 = (long *)*puVar3;
      iVar1 = *(int *)(puVar3 + 2);
      if ((plVar4 != (long *)0x0) && (iVar1 != 1)) {
        if (((byte)(*(char *)(plVar4[2] + 0x77) - 1U) < 0xfe) ||
           (((cVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), cVar5 != '\x01' ||
             (lVar7 = tvg::Shape::fill(), lVar7 != 0)) ||
            (tvg::Shape::fillColor((uchar *)plVar4,&local_24,&local_23,&local_22),
            (byte)(local_21 - 1U) < 0xfe)))) goto LAB_00102e08;
        if (iVar1 - 4U < 2) {
          if (local_24 == 0xff) {
            if ((local_23 & local_22) != 0xff) goto LAB_00102e08;
          }
          else if ((local_24 != '\0' || local_23 != 0) || local_22 != 0) {
LAB_00102e08:
            this[0x49] = (Impl)0x4;
            goto LAB_00102d3a;
          }
        }
      }
    }
LAB_00102e22:
    uVar6 = 0;
  }
  else {
    this[0x49] = (Impl)0x1;
LAB_00102d3a:
    uVar6 = 1;
  }
LAB_00102d3f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* tvg::Shape::Impl::duplicate(tvg::Paint*) */

Paint * __thiscall tvg::Shape::Impl::duplicate(Impl *this,Paint *param_1)

{
  size_t __size;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  Paint *local_48;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Paint *)0x0) {
    tvg::Shape::gen();
    param_1 = local_48;
  }
  else {
    tvg::Shape::reset();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if ((long *)puVar5[4] != (long *)0x0) {
    (**(code **)(*(long *)puVar5[4] + 8))();
  }
  *(undefined1 *)(puVar5 + 9) = 0xff;
  *(undefined4 *)((long)puVar5 + 0x34) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(this + 0x30);
  uVar2 = *(uint *)(this + 8);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(puVar5 + 1);
    pvVar8 = (void *)*puVar5;
    uVar11 = uVar2 + uVar3;
    if (*(uint *)((long)puVar5 + 0xc) < uVar11) {
      *(uint *)((long)puVar5 + 0xc) = uVar11;
      pvVar8 = realloc(pvVar8,(ulong)uVar11 << 2);
      uVar2 = *(uint *)(this + 8);
      uVar3 = *(uint *)(puVar5 + 1);
      *puVar5 = pvVar8;
    }
    memcpy((void *)((long)pvVar8 + (ulong)uVar3 * 4),*(void **)this,(ulong)uVar2 << 2);
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + *(int *)(this + 8);
  }
  uVar2 = *(uint *)(this + 0x18);
  if (uVar2 == 0) {
    puVar12 = *(undefined4 **)(this + 0x28);
    puVar9 = (undefined8 *)puVar5[5];
  }
  else {
    uVar3 = *(uint *)(puVar5 + 3);
    pvVar8 = (void *)puVar5[2];
    uVar11 = uVar2 + uVar3;
    if (*(uint *)((long)puVar5 + 0x1c) < uVar11) {
      *(uint *)((long)puVar5 + 0x1c) = uVar11;
      pvVar8 = realloc(pvVar8,(ulong)uVar11 << 3);
      uVar2 = *(uint *)(this + 0x18);
      uVar3 = *(uint *)(puVar5 + 3);
      puVar5[2] = pvVar8;
    }
    memcpy((void *)((long)pvVar8 + (ulong)uVar3 * 8),*(void **)(this + 0x10),(ulong)uVar2 << 3);
    puVar12 = *(undefined4 **)(this + 0x28);
    puVar9 = (undefined8 *)puVar5[5];
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + *(int *)(this + 0x18);
  }
  if (puVar12 == (undefined4 *)0x0) {
    if (puVar9 != (undefined8 *)0x0) {
      free((void *)puVar9[2]);
      if ((long *)puVar9[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar9[1] + 8))();
      }
      operator_delete(puVar9,0x40);
    }
    puVar5[5] = 0;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)operator_new(0x40);
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *(undefined4 *)(puVar9 + 5) = 0x40800000;
      *(undefined1 (*) [16])(puVar9 + 1) = (undefined1  [16])0x0;
      *(undefined1 *)((long)puVar9 + 0x2c) = 0;
      uVar6 = _LC11;
      *(undefined1 *)(puVar9 + 7) = 1;
      puVar9[6] = uVar6;
      puVar5[5] = puVar9;
      puVar12 = *(undefined4 **)(this + 0x28);
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((long)puVar9 + 4) = puVar12[1];
    }
    else {
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((long)puVar9 + 4) = puVar12[1];
      if ((long *)puVar9[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar9[1] + 8))();
      }
    }
    lVar7 = *(long *)(puVar12 + 2);
    if (lVar7 != 0) {
      lVar7 = tvg::Fill::duplicate();
    }
    puVar9[1] = lVar7;
    free((void *)puVar9[2]);
    if (puVar12[6] == 0) {
      puVar9[2] = 0;
      uVar10 = 0;
    }
    else {
      __size = (ulong)(uint)puVar12[6] * 4;
      pvVar8 = malloc(__size);
      puVar9[2] = pvVar8;
      __memcpy_chk(pvVar8,*(undefined8 *)(puVar12 + 4),__size,__size);
      uVar10 = puVar12[6];
    }
    uVar1 = puVar12[7];
    *(undefined4 *)(puVar9 + 3) = uVar10;
    *(undefined4 *)((long)puVar9 + 0x1c) = uVar1;
    *(undefined4 *)(puVar9 + 5) = puVar12[10];
    puVar9[4] = *(undefined8 *)(puVar12 + 8);
    *(undefined1 *)((long)puVar9 + 0x2c) = *(undefined1 *)(puVar12 + 0xb);
    puVar9[6] = *(undefined8 *)(puVar12 + 0xc);
    *(undefined1 *)(puVar9 + 7) = *(undefined1 *)(puVar12 + 0xe);
  }
  lVar7 = *(long *)(this + 0x20);
  if (lVar7 != 0) {
    lVar7 = tvg::Fill::duplicate();
  }
  puVar5[4] = lVar7;
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* tvg::Scene::Impl::bounds(tvg::RenderMethod*) const */

undefined8 __thiscall tvg::Scene::Impl::bounds(Impl *this,RenderMethod *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 uVar8;
  int iVar9;
  Impl *pIVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pIVar10 = *(Impl **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  if (pIVar10 != this) {
    iVar13 = 0;
    iVar9 = 0;
    iVar12 = 0x7fffffff;
    iVar14 = 0x7fffffff;
    do {
      auVar15 = Paint::Impl::bounds(*(Impl **)(*(long *)(pIVar10 + 0x10) + 0x10),param_1);
      pIVar10 = *(Impl **)pIVar10;
      iVar6 = auVar15._0_4_;
      if (iVar6 < iVar14) {
        iVar14 = iVar6;
      }
      iVar6 = iVar6 + auVar15._8_4_;
      if (iVar9 < iVar6) {
        iVar9 = iVar6;
      }
      iVar6 = auVar15._4_4_;
      if (iVar6 < iVar12) {
        iVar12 = iVar6;
      }
      iVar6 = iVar6 + auVar15._12_4_;
      if (iVar13 < iVar6) {
        iVar13 = iVar6;
      }
    } while (pIVar10 != this);
    puVar7 = *(ulong **)(this + 0x38);
    if ((puVar7 == (ulong *)0x0) ||
       (plVar11 = (long *)*puVar7, plVar11 + (uint)puVar7[1] <= plVar11)) {
      local_68 = 0;
      local_64 = 0;
      iVar6 = iVar14;
      iVar2 = iVar12;
    }
    else {
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      do {
        lVar1 = *plVar11;
        if (*(char *)(lVar1 + 0x21) != '\0') {
          cVar5 = (**(code **)(*(long *)param_1 + 0xa8))();
          iVar6 = local_68;
          if (cVar5 != '\0') {
            iVar2 = *(int *)(lVar1 + 0x10);
            if (local_5c <= *(int *)(lVar1 + 0x10)) {
              iVar2 = local_5c;
            }
            iVar3 = *(int *)(lVar1 + 0x14);
            if (local_60 <= *(int *)(lVar1 + 0x14)) {
              iVar3 = local_60;
            }
            iVar4 = *(int *)(lVar1 + 0x18);
            if (*(int *)(lVar1 + 0x18) <= local_64) {
              iVar4 = local_64;
            }
            iVar6 = *(int *)(lVar1 + 0x1c);
            local_64 = iVar4;
            local_60 = iVar3;
            local_5c = iVar2;
            if (*(int *)(lVar1 + 0x1c) <= local_68) {
              iVar6 = local_68;
            }
          }
          local_68 = iVar6;
          puVar7 = *(ulong **)(this + 0x38);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 < (long *)(*puVar7 + (ulong)(uint)puVar7[1] * 8));
      iVar6 = local_5c + iVar14;
      iVar2 = local_60 + iVar12;
    }
    local_58 = CONCAT44(iVar2,iVar6);
    uStack_50 = CONCAT44((iVar13 - iVar12) + local_68,local_64 + (iVar9 - iVar14));
    tvg::RenderRegion::intersect((RenderRegion *)&local_58);
    uVar8 = local_58;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* tvg::Scene::Impl::render(tvg::RenderMethod*) */

uint __thiscall tvg::Scene::Impl::render(Impl *this,RenderMethod *param_1)

{
  Impl IVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  Impl *pIVar8;
  long *plVar9;
  uint uVar10;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x60))
            (param_1,*(undefined1 *)(*(long *)(*(long *)(this + 0x20) + 0x10) + 0x74));
  IVar1 = this[0x40];
  if (IVar1 == (Impl)0x0) {
    pIVar8 = *(Impl **)this;
    lVar7 = 0;
    uVar10 = 1;
    if (this == pIVar8) goto LAB_00103464;
LAB_001033c0:
    uVar10 = 1;
    do {
      uVar5 = Paint::Impl::render(*(Impl **)(*(long *)(pIVar8 + 0x10) + 0x10),param_1);
      pIVar8 = *(Impl **)pIVar8;
      uVar10 = uVar10 & uVar5;
    } while (pIVar8 != this);
  }
  else {
    pcVar2 = *(code **)(*(long *)param_1 + 0x88);
    uVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    local_58 = bounds(this,param_1);
    lVar7 = (*pcVar2)(param_1,local_58,uVar4,IVar1);
    (**(code **)(*(long *)param_1 + 0x90))(param_1,lVar7,0,this[0x41]);
    pIVar8 = *(Impl **)this;
    if (pIVar8 != this) goto LAB_001033c0;
    uVar10 = 1;
  }
  if (lVar7 != 0) {
    puVar6 = *(ulong **)(this + 0x38);
    if (puVar6 != (ulong *)0x0) {
      uVar3 = puVar6[1];
      IVar1 = this[0x40];
      plVar9 = (long *)*puVar6;
      if (plVar9 < plVar9 + (uint)uVar3) {
        do {
          if (*(char *)(*plVar9 + 0x21) != '\0') {
            (**(code **)(*(long *)param_1 + 0xb0))
                      (param_1,lVar7,*plVar9,IVar1 == (Impl)0x8 && (uint)uVar3 == 1);
            puVar6 = *(ulong **)(this + 0x38);
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 < (long *)(*puVar6 + (ulong)(uint)puVar6[1] * 8));
      }
    }
    (**(code **)(*(long *)param_1 + 0x98))(param_1,lVar7);
  }
LAB_00103464:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* tvg::Paint::Impl::duplicate(tvg::Paint*) [clone .cold] */

void tvg::Paint::Impl::duplicate(Paint *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* PictureIterator::~PictureIterator() */

void __thiscall PictureIterator::~PictureIterator(PictureIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SceneIterator::~SceneIterator() */

void __thiscall SceneIterator::~SceneIterator(SceneIterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


