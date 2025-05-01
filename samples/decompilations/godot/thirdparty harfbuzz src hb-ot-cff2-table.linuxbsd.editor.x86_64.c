
/* cff2_path_param_t::cubic_to(CFF::point_t const&, CFF::point_t const&, CFF::point_t const&) [clone
   .isra.0] */

void cff2_path_param_t::cubic_to(point_t *param_1,point_t *param_2,point_t *param_3)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  double *in_R8;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(param_1 + 8);
  plVar4 = *(long **)(lVar2 + 0x38);
  fVar6 = (float)in_R8[1] * *(float *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  fVar5 = (float)*in_R8 * *(float *)(param_2 + 0x4c);
  fVar7 = (float)*(double *)(param_3 + 8) * *(float *)(param_2 + 0x50);
  fVar8 = (float)*(double *)param_3 * *(float *)(param_2 + 0x4c);
  if (param_1[4] != (point_t)0x0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)*plVar4;
      }
      (**(code **)(lVar2 + 0x10))
                (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),lVar2,uVar3,
                 param_1 + 0x18,plVar4);
      *(undefined4 *)(param_1 + 0x18) = 1;
      plVar4 = *(long **)(lVar2 + 0x38);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x24);
    }
    if (plVar4 != (long *)0x0) {
      plVar4 = *(long **)((long)plVar4 + 0x18);
    }
    (**(code **)(lVar2 + 0x28))(fVar8,fVar7,lVar2,uVar3,param_1 + 0x18,plVar4);
    *(ulong *)(param_1 + 0x24) = CONCAT44(fVar6,fVar5);
    return;
  }
  fVar1 = *(float *)param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
    }
    (**(code **)(lVar2 + 0x10))
              (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),lVar2,uVar3,
               param_1 + 0x18,plVar4);
    *(undefined4 *)(param_1 + 0x18) = 1;
    plVar4 = *(long **)(lVar2 + 0x38);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x24);
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = *(long **)((long)plVar4 + 0x18);
  }
  (**(code **)(lVar2 + 0x28))(fVar8 + fVar1 * fVar7,fVar7,lVar2,uVar3,param_1 + 0x18,plVar4);
  *(ulong *)(param_1 + 0x24) = CONCAT44(fVar6,fVar5 + fVar6 * fVar1);
  return;
}



/* cff2_path_param_t::line_to(CFF::point_t const&) [clone .isra.0] */

void cff2_path_param_t::line_to(point_t *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  double *in_RDX;
  long in_RSI;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  fVar5 = (float)in_RDX[1] * *(float *)(in_RSI + 0x50);
  plVar3 = *(long **)(lVar1 + 0x38);
  fVar4 = (float)*in_RDX * *(float *)(in_RSI + 0x4c);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (param_1[4] != (point_t)0x0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
      }
      (**(code **)(lVar1 + 0x10))
                (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),lVar1,uVar2,
                 param_1 + 0x18,plVar3);
      *(undefined4 *)(param_1 + 0x18) = 1;
      plVar3 = *(long **)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x24);
    }
    if (plVar3 != (long *)0x0) {
      plVar3 = *(long **)((long)plVar3 + 8);
    }
    (**(code **)(lVar1 + 0x18))(fVar4,fVar5,lVar1,uVar2,param_1 + 0x18,plVar3);
    *(ulong *)(param_1 + 0x24) = CONCAT44(fVar5,fVar4);
    return;
  }
  fVar4 = fVar4 + *(float *)param_1 * fVar5;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
    }
    (**(code **)(lVar1 + 0x10))
              (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),lVar1,uVar2,
               param_1 + 0x18,plVar3);
    *(undefined4 *)(param_1 + 0x18) = 1;
    plVar3 = *(long **)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x24);
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = *(long **)((long)plVar3 + 8);
  }
  (**(code **)(lVar1 + 0x18))(fVar4,fVar5,lVar1,uVar2,param_1 + 0x18,plVar3);
  *(ulong *)(param_1 + 0x24) = CONCAT44(fVar5,fVar4);
  return;
}



/* OT::cff2::accelerator_t::paint_glyph(hb_font_t*, unsigned int, hb_paint_funcs_t*, void*, unsigned
   int) const */

undefined8 __thiscall
OT::cff2::accelerator_t::paint_glyph
          (accelerator_t *this,hb_font_t *param_1,uint param_2,hb_paint_funcs_t *param_3,
          void *param_4,uint param_5)

{
  undefined4 in_register_00000014;
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
  }
  (**(code **)(param_3 + 0x28))
            (param_3,param_4,CONCAT44(in_register_00000014,param_2),param_1,lVar1);
  lVar1 = *(long *)(param_3 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
  }
  (**(code **)(param_3 + 0x40))(param_3,param_4,1,param_5,lVar1);
  lVar1 = *(long *)(param_3 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x28);
  }
  (**(code **)(param_3 + 0x38))(param_3,param_4,lVar1);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2::accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*) const */

char __thiscall
OT::cff2::accelerator_t::get_extents
          (accelerator_t *this,hb_font_t *param_1,uint param_2,hb_glyph_extents_t *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  double *pdVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  char cVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  byte bVar19;
  double dVar20;
  undefined1 auVar21 [16];
  int local_1224;
  undefined8 local_1218;
  double local_1210;
  double dStack_1208;
  double local_1200;
  double dStack_11f8;
  long local_11e8;
  undefined8 local_11e0;
  undefined8 local_11d8;
  double local_11d0 [513];
  long local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char local_1b0;
  undefined2 local_1af;
  undefined8 local_1ac;
  undefined4 local_1a4;
  char local_1a0;
  int local_19c;
  undefined1 local_198 [240];
  int local_a8 [2];
  uint *local_a0;
  int local_98;
  uint *local_90;
  undefined1 local_88 [16];
  long local_78;
  int local_70;
  short *local_68;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  void *local_50;
  char local_48;
  undefined2 local_47;
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x40) != 0) && (param_2 < *(uint *)(this + 0xc0))) {
    uVar3 = CFF::CFF2FDSelect::get_fd(*(CFF2FDSelect **)(this + 0x90),param_2);
    auVar21 = CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
                        (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x80),param_2);
    local_11e8 = auVar21._0_8_;
    iVar4 = *(int *)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x80);
    puVar15 = &_hb_NullPool;
    if (uVar3 < *(uint *)(this + 0xb4)) {
      puVar15 = (undefined *)((ulong)uVar3 * 0x30 + *(long *)(this + 0xb8));
    }
    local_90 = *(uint **)(puVar15 + 0x20);
    local_a0 = *(uint **)(this + 0x70);
    local_11d8 = 0;
    pdVar10 = local_11d0;
    for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar10 = 0.0;
      pdVar10 = pdVar10 + (ulong)bVar19 * -2 + 1;
    }
    local_11e0._0_4_ = auVar21._8_4_;
    local_1c0 = (uint)local_11e0;
    local_11e0 = auVar21._8_8_ & 0xffffffff;
    uVar9 = local_11e0;
    local_1a0 = '\0';
    local_19c = 0;
    pauVar7 = (undefined1 (*) [16])local_198;
    do {
      pauVar8 = pauVar7 + 3;
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar7[1] + 8) = (undefined1  [16])0x0;
      pauVar7 = pauVar8;
    } while ((undefined1 (*) [16])local_a8 != pauVar8);
    local_a8[0] = 0x6b;
    local_1bc = 0;
    local_1b8 = 0;
    local_1af = 1;
    local_1ac = 0;
    local_1a4 = 0;
    local_88 = (undefined1  [16])0x0;
    if (local_a0 != (uint *)0x0) {
      uVar3 = *local_a0;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (0x4d7 < uVar3) {
        local_a8[0] = (-(uint)(uVar3 < 0x846c) & 0xffff846b) + 0x8000;
      }
    }
    local_98 = 0x6b;
    if (local_90 != (uint *)0x0) {
      uVar3 = *local_90;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (0x4d7 < uVar3) {
        local_98 = (-(uint)(uVar3 < 0x846c) & 0xffff846b) + 0x8000;
      }
    }
    local_68 = *(short **)(this + 0x78);
    local_47 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    local_48 = lVar1 != 0 && iVar4 != 0;
    if (lVar1 != 0 && iVar4 != 0) {
      local_48 = *local_68 != 0;
    }
    local_5c = *(int *)(puVar15 + 0x28);
    local_1b0 = '\0';
    local_1224 = 200000;
    local_1210 = _LC10;
    dStack_1208 = _LC10;
    local_1218 = 0;
    local_11e0._4_4_ = 0;
    local_1200 = _LC12;
    dStack_11f8 = _LC12;
    uVar3 = local_1c0;
    uVar5 = local_11e0._4_4_;
    local_11e0 = uVar9;
    local_1c8 = local_11e8;
    local_78 = lVar1;
    local_70 = iVar4;
    do {
      uVar17 = uVar5 + 1;
      if (uVar3 < uVar17) {
        uVar16 = (-(uint)(local_19c == 0) & 3) + 0xb;
LAB_0010073e:
        CFF::
        cs_opset_t<CFF::number_t,cff2_cs_opset_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t,cff2_path_procs_extents_t>
        ::process_op(uVar16,(cff2_cs_interp_env_t *)&local_11e8,(cff2_extents_param_t *)&local_1218)
        ;
      }
      else {
        local_11e0 = CONCAT44(uVar17,(uint)local_11e0);
        bVar19 = *(byte *)(local_11e8 + (ulong)uVar5);
        uVar16 = (uint)bVar19;
        if (bVar19 == 0xc) {
          if (uVar3 < uVar5 + 2) {
            uVar16 = 0xffff;
          }
          else {
            local_11e0 = CONCAT44(uVar5 + 2,(uint)local_11e0);
            uVar16 = *(byte *)(local_11e8 + (ulong)uVar17) + 0x100;
          }
          goto LAB_0010073e;
        }
        if (bVar19 != 0x10) {
          if (((bVar19 < 0x11) && (bVar19 != 10)) && (bVar19 == 0xf)) {
            if (local_11d8._4_4_ == 0) {
              __hb_CrapPool = __hb_NullPool;
              local_11d8 = CONCAT71(local_11d8._1_7_,1);
              pdVar10 = (double *)&_hb_CrapPool;
            }
            else {
              uVar5 = local_11d8._4_4_ - 1;
              local_11d8 = local_11d8 & 0xffffffff;
              pdVar10 = local_11d0 + uVar5;
            }
            iVar4 = (int)*pdVar10;
            if (iVar4 < 0) {
              local_11d8 = CONCAT71(local_11d8._1_7_,1);
              iVar4 = 0;
            }
            if (((char)local_47 != '\0') || (local_47._1_1_ != '\0')) {
              local_11e0 = CONCAT44(uVar3 + 1,(uint)local_11e0);
              iVar4 = local_5c;
            }
            local_5c = iVar4;
            local_47 = CONCAT11(local_47._1_1_,1);
            local_11d8 = (ulong)(uint)local_11d8;
            goto LAB_0010074d;
          }
          goto LAB_0010073e;
        }
        CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend
                  ((cff2_cs_interp_env_t<CFF::number_t> *)&local_11e8);
        if (local_11d8._4_4_ == 0) {
          __hb_CrapPool = __hb_NullPool;
          local_11d8 = CONCAT71(local_11d8._1_7_,1);
          pdVar10 = (double *)&_hb_CrapPool;
          uVar3 = 0;
        }
        else {
          uVar3 = local_11d8._4_4_ - 1;
          local_11d8 = CONCAT44(uVar3,(uint)local_11d8);
          pdVar10 = local_11d0 + uVar3;
        }
        iVar4 = (int)*pdVar10;
        if (iVar4 < 0) {
          local_11d8 = CONCAT71(local_11d8._1_7_,1);
LAB_00100b0b:
          local_11d8 = CONCAT44(uVar3,(uint)local_11d8);
        }
        else {
          uVar17 = (local_60 + 1) * iVar4;
          uVar5 = uVar3 - uVar17;
          if (uVar17 <= uVar3) {
            if (iVar4 != 0) {
              uVar16 = uVar5 + iVar4;
              uVar11 = 0x201 - uVar16;
              uVar18 = uVar16;
              do {
                uVar6 = local_60;
                if (uVar11 <= local_60) {
                  uVar6 = uVar11;
                }
                pdVar10 = local_11d0 + uVar5;
                if (0x201 < uVar18) {
                  uVar6 = 0;
                }
                if (uVar3 <= uVar5) {
                  __hb_CrapPool = __hb_NullPool;
                  local_11d8 = CONCAT71(local_11d8._1_7_,1);
                  pdVar10 = (double *)&_hb_CrapPool;
                }
                dVar20 = 0.0;
                if (((local_48 != '\0') && (uVar6 == local_58._4_4_)) && (local_58._4_4_ != 0)) {
                  uVar9 = 0;
                  do {
                    lVar1 = uVar9 * 4;
                    lVar12 = uVar18 + uVar9;
                    uVar9 = uVar9 + 1;
                    dVar20 = dVar20 + (double)*(float *)((long)local_50 + lVar1) *
                                      local_11d0[lVar12];
                  } while (local_58._4_4_ != uVar9);
                }
                uVar5 = uVar5 + 1;
                uVar18 = uVar18 + local_60;
                uVar11 = uVar11 - local_60;
                *pdVar10 = dVar20 + *pdVar10;
              } while (uVar5 != uVar16);
              if (uVar3 < uVar17 - iVar4) {
                local_11d8 = CONCAT71(local_11d8._1_7_,1);
                goto LAB_0010074d;
              }
              uVar3 = uVar3 + (iVar4 - uVar17);
            }
            goto LAB_00100b0b;
          }
          local_11e0 = CONCAT44((uint)local_11e0 + 1,(uint)local_11e0);
        }
      }
LAB_0010074d:
      cVar2 = local_1b0;
      if (local_1a0 != '\0') {
        cVar14 = '\0';
        goto joined_r0x001007ab;
      }
      cVar14 = '\0';
      if ((((uint)local_11e0 < local_11e0._4_4_) || ((char)local_11d8 != '\0')) ||
         (local_1224 = local_1224 + -1, local_1224 == 0)) goto LAB_00100765;
      uVar3 = (uint)local_11e0;
      uVar5 = local_11e0._4_4_;
      if (local_1b0 != '\0') goto code_r0x001007de;
    } while( true );
  }
  cVar14 = '\0';
LAB_00100770:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001007de:
  if (local_1200 <= local_1210) {
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    dVar20 = local_1210 + _LC13;
    if ((double)((ulong)dVar20 & _LC5) < _LC14) {
      dVar20 = (double)((ulong)((double)(long)dVar20 -
                               (double)(-(ulong)(dVar20 < (double)(long)dVar20) & _LC15)) |
                       ~_LC5 & (ulong)dVar20);
    }
    iVar4 = (int)dVar20;
    dVar20 = (local_1200 - (double)iVar4) + _LC13;
    if ((double)((ulong)dVar20 & _LC5) < _LC14) {
      dVar20 = (double)((ulong)((double)(long)dVar20 -
                               (double)(-(ulong)(dVar20 < (double)(long)dVar20) & _LC15)) |
                       ~_LC5 & (ulong)dVar20);
    }
    iVar13 = (int)dVar20;
  }
  *(int *)param_3 = iVar4;
  *(int *)(param_3 + 8) = iVar13;
  if (dStack_11f8 <= dStack_1208) {
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    dVar20 = dStack_11f8 + _LC13;
    if ((double)((ulong)dVar20 & _LC5) < _LC14) {
      dVar20 = (double)((ulong)((double)(long)dVar20 -
                               (double)(-(ulong)(dVar20 < (double)(long)dVar20) & _LC15)) |
                       ~_LC5 & (ulong)dVar20);
    }
    iVar4 = (int)dVar20;
    dVar20 = (dStack_1208 - (double)iVar4) + _LC13;
    if ((double)((ulong)dVar20 & _LC5) < _LC14) {
      dVar20 = (double)((ulong)((double)(long)dVar20 -
                               (double)(-(ulong)(dVar20 < (double)(long)dVar20) & _LC15)) |
                       ~_LC5 & (ulong)dVar20);
    }
    iVar13 = (int)dVar20;
  }
  *(int *)(param_3 + 4) = iVar4;
  *(int *)(param_3 + 0xc) = iVar13;
  hb_font_t::scale_glyph_extents(param_1,param_3);
  cVar14 = cVar2;
LAB_00100765:
joined_r0x001007ab:
  if ((int)local_58 != 0) {
    free(local_50);
  }
  goto LAB_00100770;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2::accelerator_t::get_path_at(hb_font_t*, unsigned int, hb_draw_session_t&, hb_array_t<int
   const>) const */

char OT::cff2::accelerator_t::get_path_at
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5,
               int param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  double *pdVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  char cVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  byte bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined8 local_11f8;
  undefined8 local_11f0;
  long local_11e8;
  undefined8 local_11e0;
  undefined8 local_11d8;
  double local_11d0 [513];
  long local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char local_1b0;
  undefined2 local_1af;
  undefined8 local_1ac;
  undefined4 local_1a4;
  char local_1a0;
  int local_19c;
  undefined1 local_198 [240];
  int local_a8 [2];
  uint *local_a0;
  int local_98;
  uint *local_90;
  undefined1 local_88 [16];
  long local_78;
  int local_70;
  short *local_68;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  void *local_50;
  char local_48;
  undefined2 local_47;
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x40) == 0) || (*(uint *)(param_1 + 0xc0) <= param_3)) {
    cVar13 = '\0';
LAB_00100f98:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return cVar13;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = CFF::CFF2FDSelect::get_fd(*(CFF2FDSelect **)(param_1 + 0x90),param_3);
  auVar20 = CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
                      (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_1 + 0x80),param_3);
  local_11e8 = auVar20._0_8_;
  puVar14 = &_hb_NullPool;
  if (uVar3 < *(uint *)(param_1 + 0xb4)) {
    puVar14 = (undefined *)((ulong)uVar3 * 0x30 + *(long *)(param_1 + 0xb8));
  }
  local_90 = *(uint **)(puVar14 + 0x20);
  local_a0 = *(uint **)(param_1 + 0x70);
  local_11d8 = 0;
  pdVar9 = local_11d0;
  for (lVar11 = 0x201; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar9 = 0.0;
    pdVar9 = pdVar9 + (ulong)bVar18 * -2 + 1;
  }
  local_11e0._0_4_ = auVar20._8_4_;
  local_1c0 = (uint)local_11e0;
  local_11e0 = auVar20._8_8_ & 0xffffffff;
  uVar8 = local_11e0;
  local_1a0 = '\0';
  local_19c = 0;
  pauVar6 = (undefined1 (*) [16])local_198;
  do {
    pauVar7 = pauVar6 + 3;
    *pauVar6 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar6[1] + 8) = (undefined1  [16])0x0;
    pauVar6 = pauVar7;
  } while ((undefined1 (*) [16])local_a8 != pauVar7);
  local_a8[0] = 0x6b;
  local_1bc = 0;
  local_1b8 = 0;
  local_1af = 1;
  local_1ac = 0;
  local_1a4 = 0;
  local_88 = (undefined1  [16])0x0;
  if (local_a0 != (uint *)0x0) {
    uVar3 = *local_a0;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (0x4d7 < uVar3) {
      local_a8[0] = (-(uint)(uVar3 < 0x846c) & 0xffff846b) + 0x8000;
    }
  }
  local_98 = 0x6b;
  if (local_90 != (uint *)0x0) {
    uVar3 = *local_90;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (0x4d7 < uVar3) {
      local_98 = (-(uint)(uVar3 < 0x846c) & 0xffff846b) + 0x8000;
    }
  }
  local_68 = *(short **)(param_1 + 0x78);
  local_47 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = param_5 != 0 && param_6 != 0;
  if (param_5 != 0 && param_6 != 0) {
    local_48 = *local_68 != 0;
  }
  local_5c = *(int *)(puVar14 + 0x28);
  local_11e0._4_4_ = 0;
  uVar3 = 1;
  local_1b0 = '\0';
  iVar1 = 200000;
  uVar12 = local_1c0;
  uVar16 = local_11e0._4_4_;
  local_11f8 = param_4;
  local_11f0 = param_2;
  local_11e0 = uVar8;
  local_1c8 = local_11e8;
  local_78 = param_5;
  local_70 = param_6;
  if (local_1c0 != 0) goto LAB_0010100c;
LAB_00100f52:
  uVar15 = (-(uint)(local_19c == 0) & 3) + 0xb;
LAB_00100f62:
  CFF::
  cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>
  ::process_op(uVar15,(cff2_cs_interp_env_t *)&local_11e8,(cff2_path_param_t *)&local_11f8);
LAB_00100f71:
  if (local_1a0 != '\0') {
    cVar13 = '\0';
joined_r0x00100fd3:
    if ((int)local_58 != 0) {
      free(local_50);
    }
    goto LAB_00100f98;
  }
  cVar13 = '\0';
  if (((((uint)local_11e0 < local_11e0._4_4_) || ((char)local_11d8 != '\0')) ||
      (iVar1 = iVar1 + -1, iVar1 == 0)) || (cVar13 = local_1b0, local_1b0 != '\0'))
  goto joined_r0x00100fd3;
  uVar3 = local_11e0._4_4_ + 1;
  uVar12 = (uint)local_11e0;
  uVar16 = local_11e0._4_4_;
  if ((uint)local_11e0 < uVar3) goto LAB_00100f52;
LAB_0010100c:
  local_11e0 = CONCAT44(uVar3,(uint)local_11e0);
  bVar18 = *(byte *)(local_11e8 + (ulong)uVar16);
  uVar15 = (uint)bVar18;
  if (bVar18 == 0xc) goto LAB_00101250;
  if (bVar18 != 0x10) {
    if (((0x10 < bVar18) || (bVar18 == 10)) || (bVar18 != 0xf)) goto LAB_00100f62;
    if (local_11d8._4_4_ == 0) {
      __hb_CrapPool = __hb_NullPool;
      local_11d8 = CONCAT71(local_11d8._1_7_,1);
      pdVar9 = (double *)&_hb_CrapPool;
    }
    else {
      uVar3 = local_11d8._4_4_ - 1;
      local_11d8 = local_11d8 & 0xffffffff;
      pdVar9 = local_11d0 + uVar3;
    }
    iVar4 = (int)*pdVar9;
    if (iVar4 < 0) {
      local_11d8 = CONCAT71(local_11d8._1_7_,1);
      iVar4 = 0;
    }
    if (((char)local_47 != '\0') || (local_47._1_1_ != '\0')) {
      local_11e0 = CONCAT44(uVar12 + 1,(uint)local_11e0);
      iVar4 = local_5c;
    }
    local_5c = iVar4;
    local_47 = CONCAT11(local_47._1_1_,1);
    local_11d8 = (ulong)(uint)local_11d8;
    goto LAB_00100f71;
  }
  CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend
            ((cff2_cs_interp_env_t<CFF::number_t> *)&local_11e8);
  if (local_11d8._4_4_ == 0) {
    __hb_CrapPool = __hb_NullPool;
    local_11d8 = CONCAT71(local_11d8._1_7_,1);
    pdVar9 = (double *)&_hb_CrapPool;
    uVar3 = 0;
  }
  else {
    uVar3 = local_11d8._4_4_ - 1;
    local_11d8 = CONCAT44(uVar3,(uint)local_11d8);
    pdVar9 = local_11d0 + uVar3;
  }
  iVar4 = (int)*pdVar9;
  if (iVar4 < 0) {
    local_11d8 = CONCAT71(local_11d8._1_7_,1);
  }
  else {
    uVar16 = (local_60 + 1) * iVar4;
    uVar12 = uVar3 - uVar16;
    if (uVar3 < uVar16) {
      local_11e0 = CONCAT44((uint)local_11e0 + 1,(uint)local_11e0);
      goto LAB_00100f71;
    }
    if (iVar4 == 0) goto LAB_0010120b;
    uVar15 = uVar12 + iVar4;
    uVar10 = 0x201 - uVar15;
    uVar17 = uVar15;
    do {
      uVar5 = uVar10;
      if (local_60 <= uVar10) {
        uVar5 = local_60;
      }
      pdVar9 = local_11d0 + uVar12;
      if (0x201 < uVar17) {
        uVar5 = 0;
      }
      if (uVar3 <= uVar12) {
        __hb_CrapPool = __hb_NullPool;
        local_11d8 = CONCAT71(local_11d8._1_7_,1);
        pdVar9 = (double *)&_hb_CrapPool;
      }
      dVar19 = 0.0;
      if (((local_48 != '\0') && (local_58._4_4_ == uVar5)) && (local_58._4_4_ != 0)) {
        uVar8 = 0;
        do {
          lVar11 = uVar8 * 4;
          lVar2 = uVar17 + uVar8;
          uVar8 = uVar8 + 1;
          dVar19 = dVar19 + (double)*(float *)((long)local_50 + lVar11) * local_11d0[lVar2];
        } while (local_58._4_4_ != uVar8);
      }
      uVar12 = uVar12 + 1;
      uVar17 = uVar17 + local_60;
      uVar10 = uVar10 - local_60;
      *pdVar9 = dVar19 + *pdVar9;
    } while (uVar15 != uVar12);
    if (uVar3 < uVar16 - iVar4) {
      local_11d8 = CONCAT71(local_11d8._1_7_,1);
      goto LAB_00100f71;
    }
    uVar3 = uVar3 + (iVar4 - uVar16);
  }
LAB_0010120b:
  local_11d8 = CONCAT44(uVar3,(uint)local_11d8);
  goto LAB_00100f71;
LAB_00101250:
  if (uVar12 < uVar16 + 2) {
    uVar15 = 0xffff;
  }
  else {
    local_11e0 = CONCAT44(uVar16 + 2,(uint)local_11e0);
    uVar15 = *(byte *)(local_11e8 + (ulong)uVar3) + 0x100;
  }
  goto LAB_00100f62;
}



/* OT::cff2::accelerator_t::get_path(hb_font_t*, unsigned int, hb_draw_session_t&) const */

void OT::cff2::accelerator_t::get_path(hb_font_t *param_1,uint param_2,hb_draw_session_t *param_3)

{
  get_path_at();
  return;
}



/* cff2_path_param_t::move_to(CFF::point_t const&) [clone .isra.0] */

void cff2_path_param_t::move_to(point_t *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double *in_RDX;
  long in_RSI;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  fVar5 = (float)in_RDX[1] * *(float *)(in_RSI + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  fVar4 = (float)*in_RDX * *(float *)(in_RSI + 0x4c);
  if (param_1[4] == (point_t)0x0) {
    fVar4 = fVar4 + *(float *)param_1 * fVar5;
    if (*(int *)(param_1 + 0x18) != 0) {
      if ((*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x24)) ||
         (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x28))) {
        lVar3 = *(long *)(lVar1 + 0x38);
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 8);
        }
        (**(code **)(lVar1 + 0x18))(lVar1,uVar2,param_1 + 0x18,lVar3);
      }
      lVar3 = *(long *)(lVar1 + 0x38);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      (**(code **)(lVar1 + 0x30))(lVar1,uVar2,param_1 + 0x18,lVar3);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x24)) ||
       (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x28))) {
      lVar3 = *(long *)(lVar1 + 0x38);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar2,param_1 + 0x18,lVar3);
    }
    lVar3 = *(long *)(lVar1 + 0x38);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar2,param_1 + 0x18,lVar3);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  *(ulong *)(param_1 + 0x24) = CONCAT44(fVar5,fVar4);
  return;
}



/* hb_font_t::scale_glyph_extents(hb_glyph_extents_t*) */

void __thiscall hb_font_t::scale_glyph_extents(hb_font_t *this,hb_glyph_extents_t *param_1)

{
  hb_font_t hVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = (float)(int)(short)*(undefined4 *)param_1 * *(float *)(this + 0x4c);
  fVar7 = (float)(int)(short)((short)*(undefined4 *)param_1 + *(short *)(param_1 + 8)) *
          *(float *)(this + 0x4c);
  fVar10 = (float)(int)(short)*(undefined4 *)(param_1 + 4) * *(float *)(this + 0x50);
  fVar8 = (float)(int)(short)((short)*(undefined4 *)(param_1 + 4) + *(short *)(param_1 + 0xc)) *
          *(float *)(this + 0x50);
  fVar11 = *(float *)(this + 0x48);
  if (fVar11 != 0.0) {
    fVar9 = fVar11 * fVar10;
    fVar11 = fVar11 * fVar8;
    fVar4 = fVar4 + (float)(~-(uint)(fVar9 <= fVar11) & (uint)fVar11 |
                           (uint)fVar9 & -(uint)(fVar9 <= fVar11));
    fVar7 = fVar7 + (float)((uint)fVar9 & -(uint)(fVar11 <= fVar9) |
                           ~-(uint)(fVar11 <= fVar9) & (uint)fVar11);
  }
  if ((float)((uint)fVar4 & _LC2) < _LC1) {
    fVar4 = (float)((uint)((float)(int)fVar4 - (float)(-(uint)(fVar4 < (float)(int)fVar4) & _LC3)) |
                   ~_LC2 & (uint)fVar4);
  }
  if ((float)((uint)fVar10 & _LC2) < _LC1) {
    fVar10 = (float)((uint)((float)(int)fVar10 -
                           (float)(-(uint)(fVar10 < (float)(int)fVar10) & _LC3)) |
                    ~_LC2 & (uint)fVar10);
  }
  if ((float)((uint)fVar7 & _LC2) < _LC1) {
    fVar7 = (float)((uint)((float)(int)fVar7 + (float)(-(uint)((float)(int)fVar7 < fVar7) & _LC3)) |
                   ~_LC2 & (uint)fVar7);
  }
  if ((float)((uint)fVar8 & _LC2) < _LC1) {
    fVar8 = (float)((uint)((float)(int)fVar8 + (float)(-(uint)((float)(int)fVar8 < fVar8) & _LC3)) |
                   ~_LC2 & (uint)fVar8);
  }
  iVar5 = (int)(fVar7 - (float)(int)fVar4);
  iVar6 = (int)(fVar8 - (float)(int)fVar10);
  *(int *)param_1 = (int)fVar4;
  *(int *)(param_1 + 4) = (int)fVar10;
  *(int *)(param_1 + 8) = iVar5;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar2 = *(int *)(this + 0x3c);
  iVar3 = *(int *)(this + 0x40);
  if (iVar2 != 0 || iVar3 != 0) {
    if (*(int *)(this + 0x2c) < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6 - iVar3;
    iVar6 = *(int *)(this + 0x28);
    *(int *)(param_1 + 4) = (int)fVar10 + iVar3;
    if (iVar6 < 0) {
      iVar2 = -iVar2;
      hVar1 = this[0x38];
    }
    else {
      hVar1 = this[0x38];
    }
    if (hVar1 != (hb_font_t)0x0) {
      *(int *)param_1 = (int)fVar4 - iVar2 / 2;
    }
    *(int *)(param_1 + 8) = iVar2 + iVar5;
  }
  return;
}



/* OT::ItemVariationStore::get_region_scalars(unsigned int, int const*, unsigned int, float*,
   unsigned int) const */

void __thiscall
OT::ItemVariationStore::get_region_scalars
          (ItemVariationStore *this,uint param_1,int *param_2,uint param_3,float *param_4,
          uint param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  ItemVariationStore *pIVar8;
  ItemVariationStore *pIVar9;
  int iVar10;
  ItemVariationStore *pIVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  
  pIVar8 = (ItemVariationStore *)&_hb_NullPool;
  if (param_1 < (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8)) {
    pIVar8 = this + (ulong)param_1 * 4 + 8;
  }
  uVar3 = *(uint *)pIVar8;
  pIVar8 = (ItemVariationStore *)&_hb_NullPool;
  if (uVar3 != 0) {
    pIVar8 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
  }
  uVar3 = *(uint *)(this + 2);
  pIVar11 = (ItemVariationStore *)&_hb_NullPool;
  if (uVar3 != 0) {
    pIVar11 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                     uVar3 << 0x18);
  }
  uVar3 = (uint)(ushort)(*(ushort *)(pIVar8 + 4) << 8 | *(ushort *)(pIVar8 + 4) >> 8);
  if (param_5 < uVar3) {
    uVar3 = param_5;
  }
  if (uVar3 != 0) {
    uVar1 = *(ushort *)(pIVar11 + 2);
    lVar14 = 0;
    do {
      uVar4 = (uint)(ushort)(*(ushort *)(pIVar8 + lVar14 + 6) << 8 |
                            *(ushort *)(pIVar8 + lVar14 + 6) >> 8);
      if (uVar4 < (ushort)(uVar1 << 8 | uVar1 >> 8)) {
        uVar15 = *(ushort *)pIVar11 << 8 | *(ushort *)pIVar11 >> 8;
        fVar17 = _LC3;
        if (uVar15 != 0) {
          pIVar9 = pIVar11 + (ulong)(uVar4 * uVar15) * 6 + 4;
          lVar5 = 0;
          do {
            uVar6 = *(ushort *)(pIVar9 + 2);
            if ((uint)lVar5 < param_3) {
              iVar2 = param_2[lVar5];
              iVar10 = (int)(short)(uVar6 << 8 | uVar6 >> 8);
              if ((uVar6 != 0) && (iVar2 != iVar10)) {
                if (iVar2 == 0) goto LAB_001018e0;
                uVar6 = *(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8;
                uVar12 = *(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8;
                iVar7 = (int)(short)uVar6;
                iVar13 = (int)(short)uVar12;
                if (((iVar7 <= iVar10) && (iVar10 <= iVar13)) &&
                   ((-1 < (short)uVar6 || ((short)uVar12 < 1)))) {
                  if ((iVar2 <= iVar7) || (iVar13 <= iVar2)) goto LAB_001018e0;
                  if (iVar2 < iVar10) {
                    fVar16 = (float)(iVar2 - iVar7) / (float)(iVar10 - iVar7);
                  }
                  else {
                    fVar16 = (float)(iVar13 - iVar2) / (float)(iVar13 - iVar10);
                  }
                  if (fVar16 == 0.0) goto LAB_001018e0;
                  fVar17 = fVar17 * fVar16;
                }
              }
            }
            else if (uVar6 != 0) goto LAB_001018e0;
            lVar5 = lVar5 + 1;
            pIVar9 = pIVar9 + 6;
          } while ((uint)lVar5 < (uint)uVar15);
        }
      }
      else {
LAB_001018e0:
        fVar17 = 0.0;
      }
      *(float *)((long)param_4 + lVar14 * 2) = fVar17;
      lVar14 = lVar14 + 2;
    } while ((ulong)uVar3 * 2 != lVar14);
  }
  if (uVar3 < param_5) {
    memset(param_4 + uVar3,0,(ulong)((param_5 - 1) - uVar3) * 4 + 4);
    return;
  }
  return;
}



/* CFF::CFF2FDSelect::get_fd(unsigned int) const */

ushort __thiscall CFF::CFF2FDSelect::get_fd(CFF2FDSelect *this,uint param_1)

{
  CFF2FDSelect CVar1;
  uint uVar2;
  uint uVar3;
  CFF2FDSelect *pCVar4;
  CFF2FDSelect *pCVar5;
  int iVar6;
  int iVar7;
  
  pCVar4 = (CFF2FDSelect *)&_hb_NullPool;
  if (this != (CFF2FDSelect *)&_hb_NullPool) {
    CVar1 = *this;
    if (CVar1 == (CFF2FDSelect)0x3) {
      pCVar4 = (CFF2FDSelect *)&_hb_NullPool;
      if (*(short *)(this + 1) != 0) {
        pCVar4 = this + 3;
      }
      iVar6 = (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8) - 2;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          while( true ) {
            uVar3 = (uint)(iVar7 + iVar6) >> 1;
            pCVar5 = pCVar4 + (ulong)uVar3 * 3;
            if ((ushort)(*(ushort *)pCVar5 << 8 | *(ushort *)pCVar5 >> 8) <= param_1) break;
            iVar6 = uVar3 - 1;
            if (iVar6 < iVar7) goto LAB_00101aae;
          }
          if (param_1 < (ushort)(*(ushort *)(pCVar5 + 3) << 8 | *(ushort *)(pCVar5 + 3) >> 8))
          goto LAB_00101ada;
          iVar7 = uVar3 + 1;
        } while (iVar7 <= iVar6);
      }
LAB_00101aae:
      pCVar5 = (CFF2FDSelect *)&_hb_NullPool;
      uVar3 = (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8) - 1;
      if (uVar3 < (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8)) {
        pCVar5 = this + (ulong)uVar3 * 3 + 3;
      }
LAB_00101ada:
      return (ushort)(byte)pCVar5[2];
    }
    if (CVar1 == (CFF2FDSelect)0x4) {
      uVar3 = *(uint *)(this + 1);
      if (*(int *)(this + 1) != 0) {
        pCVar4 = this + 5;
      }
      iVar6 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) - 2;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          while( true ) {
            uVar2 = (uint)(iVar7 + iVar6) >> 1;
            pCVar5 = pCVar4 + (ulong)uVar2 * 6;
            uVar3 = *(uint *)pCVar5;
            if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <=
                param_1) break;
            iVar6 = uVar2 - 1;
            if (iVar6 < iVar7) goto LAB_00101a05;
          }
          uVar3 = *(uint *)(pCVar5 + 6);
          if (param_1 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18)) goto LAB_00101a21;
          iVar7 = uVar2 + 1;
        } while (iVar7 <= iVar6);
      }
LAB_00101a05:
      uVar3 = *(uint *)(this + 1);
      pCVar5 = (CFF2FDSelect *)&_hb_NullPool;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (uVar3 != 0) {
        pCVar5 = this + (ulong)(uVar3 - 1) * 6 + 5;
      }
LAB_00101a21:
      return *(ushort *)(pCVar5 + 4) << 8 | *(ushort *)(pCVar5 + 4) >> 8;
    }
    if (CVar1 == (CFF2FDSelect)0x0) {
      return (ushort)(byte)this[(ulong)param_1 + 1];
    }
  }
  return 0;
}



/* OT::CFFIndex<OT::IntType<unsigned int, 4u> >::operator[](unsigned int) const */

undefined1  [16] __thiscall
OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
          (CFFIndex<OT::IntType<unsigned_int,4u>> *this,uint param_1)

{
  CFFIndex<OT::IntType<unsigned_int,4u>> CVar1;
  uint uVar2;
  uint uVar3;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar3 = *(uint *)this;
  if (param_1 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) {
    CVar1 = this[4];
    if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3) {
      pCVar4 = this + (ulong)param_1 * 3 + 5;
      uVar7 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
      pCVar4 = this + (ulong)(param_1 + 1) * 3 + 5;
      uVar3 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
      if (uVar3 < uVar7) goto LAB_00101bb0;
      uVar2 = *(uint *)this;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      pCVar4 = this + (ulong)uVar2 * 3 + 5;
      uVar5 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
    }
    else if ((byte)CVar1 < 4) {
      if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x1) {
        uVar7 = (uint)(byte)this[(ulong)param_1 + 5];
        uVar3 = (uint)(byte)this[(ulong)(param_1 + 1) + 5];
        if (uVar3 < uVar7) goto LAB_00101bb0;
        uVar2 = *(uint *)this;
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar5 = (uint)(byte)this[(ulong)uVar2 + 5];
      }
      else {
        if (CVar1 != (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2) goto LAB_00101bb8;
        uVar6 = *(ushort *)(this + (ulong)param_1 * 2 + 5) << 8 |
                *(ushort *)(this + (ulong)param_1 * 2 + 5) >> 8;
        uVar7 = (uint)uVar6;
        uVar3 = (uint)(ushort)(*(ushort *)(this + (ulong)(param_1 + 1) * 2 + 5) << 8 |
                              *(ushort *)(this + (ulong)(param_1 + 1) * 2 + 5) >> 8);
        if (uVar3 < uVar6) goto LAB_00101bb0;
        uVar2 = *(uint *)this;
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar5 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar2 * 2 + 5) << 8 |
                              *(ushort *)(this + (ulong)uVar2 * 2 + 5) >> 8);
      }
    }
    else {
      if (CVar1 != (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4) {
LAB_00101bb8:
        uVar3 = *(uint *)this;
        auVar10._0_8_ =
             this + (ulong)(((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18) + 1) * (uint)(byte)CVar1) + 4;
        auVar10._8_8_ = 0;
        return auVar10;
      }
      uVar3 = *(uint *)(this + (ulong)param_1 * 4 + 5);
      uVar2 = *(uint *)(this + (ulong)(param_1 + 1) * 4 + 5);
      uVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if (uVar3 < uVar7) goto LAB_00101bb0;
      uVar2 = *(uint *)this;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar5 = *(uint *)(this + (ulong)uVar2 * 4 + 5);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    if (uVar3 <= uVar5) {
      auVar8._8_4_ = uVar3 - uVar7;
      auVar8._0_8_ = this + (ulong)((uVar2 + 1) * (uint)(byte)CVar1) + (ulong)uVar7 + 4;
      auVar8._12_4_ = 0;
      return auVar8;
    }
  }
LAB_00101bb0:
  auVar9._12_4_ = 0;
  auVar9._0_12_ = ZEXT812(0);
  return auVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::opset_t<CFF::number_t>::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */

void CFF::opset_t<CFF::number_t>::process_op(uint param_1,interp_env_t *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined *puVar7;
  interp_env_t *piVar8;
  
  if (param_1 < 0xfb) {
    if (0xf6 < param_1) {
      uVar5 = *(uint *)(param_2 + 0xc);
      if (uVar5 < *(uint *)(param_2 + 8)) {
        pbVar6 = (byte *)((ulong)uVar5 + *(long *)param_2);
      }
      else {
        uVar5 = *(uint *)(param_2 + 8) + 1;
        pbVar6 = &_hb_NullPool;
        *(uint *)(param_2 + 0xc) = uVar5;
      }
      bVar3 = *pbVar6;
      uVar4 = *(uint *)(param_2 + 0x14);
      if (uVar4 < 0x201) {
        piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (interp_env_t)0x1;
        piVar8 = (interp_env_t *)&_hb_CrapPool;
      }
      *(double *)piVar8 =
           (double)(int)(short)(((short)param_1 + -0xf7) * 0x100 + 0x6c + (ushort)bVar3);
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      return;
    }
    if (param_1 == 0x1c) {
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar4 = *(uint *)(param_2 + 8);
      if (uVar5 < uVar4) {
        puVar7 = (undefined *)((ulong)uVar5 + *(long *)param_2);
      }
      else {
        uVar5 = uVar4 + 1;
        puVar7 = &_hb_NullPool;
        *(uint *)(param_2 + 0xc) = uVar5;
      }
      uVar1 = *puVar7;
      if (uVar5 + 1 < uVar4) {
        puVar7 = (undefined *)((ulong)(uVar5 + 1) + *(long *)param_2);
      }
      else {
        uVar5 = uVar4 + 1;
        puVar7 = &_hb_NullPool;
        *(uint *)(param_2 + 0xc) = uVar5;
      }
      uVar2 = *puVar7;
      uVar4 = *(uint *)(param_2 + 0x14);
      if (uVar4 < 0x201) {
        piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (interp_env_t)0x1;
        piVar8 = (interp_env_t *)&_hb_CrapPool;
      }
      *(double *)piVar8 = (double)(int)CONCAT11(uVar1,uVar2);
      *(uint *)(param_2 + 0xc) = uVar5 + 2;
      return;
    }
    if (param_1 - 0x20 < 0xd7) {
      uVar5 = *(uint *)(param_2 + 0x14);
      if (uVar5 < 0x201) {
        piVar8 = param_2 + (ulong)uVar5 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (interp_env_t)0x1;
        piVar8 = (interp_env_t *)&_hb_CrapPool;
      }
      *(double *)piVar8 = (double)(int)(param_1 - 0x8b);
      return;
    }
  }
  else if (param_1 - 0xfb < 4) {
    uVar5 = *(uint *)(param_2 + 0xc);
    if (uVar5 < *(uint *)(param_2 + 8)) {
      pbVar6 = (byte *)((ulong)uVar5 + *(long *)param_2);
    }
    else {
      uVar5 = *(uint *)(param_2 + 8) + 1;
      pbVar6 = &_hb_NullPool;
      *(uint *)(param_2 + 0xc) = uVar5;
    }
    bVar3 = *pbVar6;
    uVar4 = *(uint *)(param_2 + 0x14);
    if (uVar4 < 0x201) {
      piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
      *(uint *)(param_2 + 0x14) = uVar4 + 1;
    }
    else {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (interp_env_t)0x1;
      piVar8 = (interp_env_t *)&_hb_CrapPool;
    }
    *(double *)piVar8 = (double)(int)(((param_1 - 0xfb & 0xffff) * -0x100 - (uint)bVar3) + -0x6c);
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    return;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::hlineto(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_extents_param_t&)
    */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::hlineto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  cff2_cs_interp_env_t *pcVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 2) {
    uVar7 = 0;
  }
  else {
    dVar8 = *(double *)(param_1 + 0x1168);
    uVar4 = 1;
    uVar3 = 0;
    uVar7 = 2;
    dVar10 = *(double *)(param_1 + 0x1160);
    while( true ) {
      pcVar6 = param_1 + (ulong)uVar3 * 8 + 0x18;
      if (uVar2 <= uVar3) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar11 = *(double *)pcVar6 + dVar10;
      if (*param_2 == (cff2_extents_param_t)0x0) {
        *param_2 = (cff2_extents_param_t)0x1;
        if (dVar10 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
          dVar10 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar10 = *(double *)(param_1 + 0x1168);
        if (dVar10 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar10;
          dVar10 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
      }
      *(double *)(param_1 + 0x1160) = dVar11;
      *(double *)(param_1 + 0x1168) = dVar8;
      dVar10 = dVar11;
      if (dVar11 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar10 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar10 = *(double *)(param_1 + 0x1168);
      if (dVar10 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar10;
        dVar10 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
      pcVar6 = param_1 + (ulong)uVar4 * 8 + 0x18;
      if (uVar2 <= uVar4) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar10 = *(double *)pcVar6;
      if (*param_2 == (cff2_extents_param_t)0x0) {
        dVar9 = *(double *)(param_1 + 0x1160);
        *param_2 = (cff2_extents_param_t)0x1;
        if (dVar9 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar9;
          dVar9 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar9 && dVar9 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar9 = *(double *)(param_1 + 0x1168);
        if (dVar9 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar9;
          dVar9 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar9 && dVar9 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
      }
      *(double *)(param_1 + 0x1160) = dVar11;
      *(double *)(param_1 + 0x1168) = dVar8 + dVar10;
      if (dVar11 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar11 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar11 && dVar11 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar8 = *(double *)(param_1 + 0x1168);
      if (dVar8 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar8;
        dVar8 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar8 && dVar8 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
      uVar5 = (int)uVar7 + 2;
      uVar3 = uVar3 + 2;
      uVar4 = uVar4 + 2;
      if (uVar2 < uVar5) break;
      uVar7 = (ulong)uVar5;
      dVar10 = dVar11;
    }
  }
  if ((uint)uVar7 < uVar2) {
    dVar8 = *(double *)(param_1 + 0x1160);
    dVar10 = *(double *)(param_1 + uVar7 * 8 + 0x18) + dVar8;
    uVar1 = *(undefined8 *)(param_1 + 0x1168);
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      if (dVar8 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar8 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar8 && dVar8 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar8 = *(double *)(param_1 + 0x1168);
      if (dVar8 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar8;
        dVar8 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar8 && dVar8 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
    }
    *(double *)(param_1 + 0x1160) = dVar10;
    *(undefined8 *)(param_1 + 0x1168) = uVar1;
    if (dVar10 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar10 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar8 = *(double *)(param_1 + 0x1168);
    if (dVar8 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar8;
      dVar8 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar8 && dVar8 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::vlineto(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_extents_param_t&)
    */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::vlineto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  cff2_cs_interp_env_t *pcVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 2) {
    uVar7 = 0;
  }
  else {
    dVar9 = *(double *)(param_1 + 0x1168);
    uVar4 = 1;
    uVar3 = 0;
    uVar7 = 2;
    dVar8 = *(double *)(param_1 + 0x1160);
    while( true ) {
      pcVar6 = param_1 + (ulong)uVar3 * 8 + 0x18;
      if (uVar2 <= uVar3) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar1 = *(double *)pcVar6;
      if (*param_2 == (cff2_extents_param_t)0x0) {
        *param_2 = (cff2_extents_param_t)0x1;
        dVar10 = dVar8;
        if (dVar8 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
          dVar10 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar10 = *(double *)(param_1 + 0x1168);
        if (dVar10 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar10;
          dVar10 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
      }
      *(double *)(param_1 + 0x1160) = dVar8;
      *(double *)(param_1 + 0x1168) = dVar9 + dVar1;
      dVar10 = dVar8;
      if (dVar8 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar10 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar10 = *(double *)(param_1 + 0x1168);
      if (dVar10 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar10;
        dVar10 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
      pcVar6 = param_1 + (ulong)uVar4 * 8 + 0x18;
      if (uVar2 <= uVar4) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar8 = dVar8 + *(double *)pcVar6;
      if (*param_2 == (cff2_extents_param_t)0x0) {
        dVar10 = *(double *)(param_1 + 0x1160);
        *param_2 = (cff2_extents_param_t)0x1;
        if (dVar10 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar10;
          dVar10 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar10 = *(double *)(param_1 + 0x1168);
        if (dVar10 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar10;
          dVar10 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
      }
      *(double *)(param_1 + 0x1160) = dVar8;
      *(double *)(param_1 + 0x1168) = dVar9 + dVar1;
      if (dVar8 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar8 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar8 && dVar8 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar9 = *(double *)(param_1 + 0x1168);
      if (dVar9 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar9;
        dVar9 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar9 && dVar9 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
      uVar5 = (int)uVar7 + 2;
      uVar3 = uVar3 + 2;
      uVar4 = uVar4 + 2;
      if (uVar2 < uVar5) break;
      uVar7 = (ulong)uVar5;
    }
  }
  if ((uint)uVar7 < uVar2) {
    dVar9 = *(double *)(param_1 + 0x1160);
    dVar8 = *(double *)(param_1 + 0x1168);
    dVar1 = *(double *)(param_1 + uVar7 * 8 + 0x18);
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      dVar10 = dVar9;
      if (dVar9 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar10 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar10 && dVar10 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar10 = *(double *)(param_1 + 0x1168);
      if (dVar10 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar10;
        dVar10 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
    }
    *(double *)(param_1 + 0x1160) = dVar9;
    *(double *)(param_1 + 0x1168) = dVar8 + dVar1;
    if (dVar9 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar9 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar9 && dVar9 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar9 = *(double *)(param_1 + 0x1168);
    if (dVar9 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar9;
      dVar9 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar9 && dVar9 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::rrcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::rrcurveto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  double dVar1;
  uint uVar2;
  cff2_cs_interp_env_t *pcVar3;
  cff2_cs_interp_env_t *pcVar4;
  cff2_cs_interp_env_t *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 6) {
    return;
  }
  uVar12 = 3;
  uVar11 = 2;
  uVar10 = 5;
  dVar13 = *(double *)(param_1 + 0x1168);
  uVar9 = 4;
  uVar8 = 1;
  dVar21 = *(double *)(param_1 + 0x1160);
  uVar7 = 0;
  do {
    pcVar4 = param_1 + (ulong)uVar8 * 8 + 0x18;
    if (uVar2 <= uVar8) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar5 = param_1 + (ulong)uVar7 * 8 + 0x18;
    if (uVar2 <= uVar7) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar13 = dVar13 + *(double *)pcVar4;
    pcVar4 = param_1 + (ulong)uVar12 * 8 + 0x18;
    dVar14 = *(double *)pcVar5 + dVar21;
    if (uVar2 <= uVar12) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar5 = param_1 + (ulong)uVar11 * 8 + 0x18;
    if (uVar2 <= uVar11) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar3 = param_1 + (ulong)uVar10 * 8 + 0x18;
    dVar16 = *(double *)pcVar5 + dVar14;
    dVar15 = *(double *)pcVar4 + dVar13;
    if (uVar2 <= uVar10) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar4 = param_1 + (ulong)uVar9 * 8 + 0x18;
    if (uVar2 <= uVar9) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar1 = *(double *)pcVar3;
    dVar20 = *(double *)(param_2 + 8);
    dVar23 = *(double *)pcVar4 + dVar16;
    dVar19 = *(double *)(param_2 + 0x18);
    dVar18 = *(double *)(param_2 + 0x10);
    dVar17 = *(double *)(param_2 + 0x20);
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      if (dVar21 < dVar20) {
        dVar20 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 8) = dVar20;
        dVar21 = *(double *)(param_1 + 0x1160);
      }
      if (dVar19 < dVar21) {
        dVar19 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 0x18) = dVar19;
      }
      dVar21 = *(double *)(param_1 + 0x1168);
      dVar22 = dVar21;
      if (dVar21 < dVar18) {
        *(double *)(param_2 + 0x10) = dVar21;
        dVar22 = *(double *)(param_1 + 0x1168);
        dVar18 = dVar21;
      }
      if (dVar17 < dVar22) {
        dVar17 = *(double *)(param_1 + 0x1168);
        *(double *)(param_2 + 0x20) = dVar17;
      }
    }
    if (dVar14 < dVar20) {
      *(double *)(param_2 + 8) = dVar14;
      dVar20 = dVar14;
    }
    if (dVar19 < dVar14) {
      *(double *)(param_2 + 0x18) = dVar14;
      dVar19 = dVar14;
    }
    if (dVar13 < dVar18) {
      *(double *)(param_2 + 0x10) = dVar13;
      dVar18 = dVar13;
    }
    if (dVar17 < dVar13) {
      *(double *)(param_2 + 0x20) = dVar13;
      dVar17 = dVar13;
    }
    if (dVar16 < dVar20) {
      *(double *)(param_2 + 8) = dVar16;
    }
    if (dVar19 < dVar16) {
      *(double *)(param_2 + 0x18) = dVar16;
    }
    if (dVar15 < dVar18) {
      *(double *)(param_2 + 0x10) = dVar15;
    }
    if (dVar17 < dVar15) {
      *(double *)(param_2 + 0x20) = dVar15;
    }
    *(double *)(param_1 + 0x1160) = dVar23;
    *(double *)(param_1 + 0x1168) = dVar1 + dVar15;
    if (dVar23 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar23 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar23 && dVar23 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar13 = *(double *)(param_1 + 0x1168);
    if (dVar13 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar13;
      dVar13 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar13 && dVar13 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
    uVar6 = uVar7 + 0xc;
    uVar8 = uVar8 + 6;
    uVar9 = uVar9 + 6;
    uVar10 = uVar10 + 6;
    uVar11 = uVar11 + 6;
    uVar12 = uVar12 + 6;
    dVar21 = dVar23;
    uVar7 = uVar7 + 6;
  } while (uVar6 <= uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::rcurveline(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::rcurveline(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  cff2_cs_interp_env_t *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  cff2_cs_interp_env_t *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 8) {
    return;
  }
  uVar10 = 3;
  uVar9 = 2;
  uVar6 = 4;
  uVar12 = 0;
  uVar11 = 1;
  dVar17 = *(double *)(param_1 + 0x1168);
  uVar7 = 5;
  dVar22 = *(double *)(param_1 + 0x1160);
  uVar3 = 6;
  do {
    uVar5 = uVar3;
    if (uVar11 < uVar2) {
      pcVar8 = param_1 + (ulong)(uVar11 + 1) * 8 + 0x10;
LAB_00102bd4:
      pcVar4 = param_1 + (ulong)(uVar12 + 1) * 8 + 0x10;
    }
    else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      if (uVar12 < uVar2) goto LAB_00102bd4;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar16 = *(double *)pcVar4 + dVar22;
    dVar17 = *(double *)pcVar8 + dVar17;
    pcVar8 = param_1 + (ulong)uVar10 * 8 + 0x18;
    if (uVar2 <= uVar10) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar4 = param_1 + (ulong)uVar9 * 8 + 0x18;
    if (uVar2 <= uVar9) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar13 = *(double *)pcVar4 + dVar16;
    dVar15 = *(double *)pcVar8 + dVar17;
    pcVar8 = param_1 + (ulong)uVar7 * 8 + 0x18;
    if (uVar2 <= uVar7) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    pcVar4 = param_1 + (ulong)uVar6 * 8 + 0x18;
    if (uVar2 <= uVar6) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar21 = *(double *)(param_2 + 8);
    dVar20 = *(double *)(param_2 + 0x18);
    dVar1 = *(double *)pcVar8;
    dVar19 = *(double *)(param_2 + 0x10);
    dVar18 = *(double *)(param_2 + 0x20);
    dVar14 = dVar13 + *(double *)pcVar4;
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      if (dVar22 < dVar21) {
        dVar21 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 8) = dVar21;
        dVar22 = *(double *)(param_1 + 0x1160);
      }
      if (dVar20 < dVar22) {
        dVar20 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 0x18) = dVar20;
      }
      dVar22 = *(double *)(param_1 + 0x1168);
      dVar23 = dVar22;
      if (dVar22 < dVar19) {
        *(double *)(param_2 + 0x10) = dVar22;
        dVar23 = *(double *)(param_1 + 0x1168);
        dVar19 = dVar22;
      }
      if (dVar18 < dVar23) {
        dVar18 = *(double *)(param_1 + 0x1168);
        *(double *)(param_2 + 0x20) = dVar18;
      }
    }
    if (dVar16 < dVar21) {
      *(double *)(param_2 + 8) = dVar16;
      dVar21 = dVar16;
    }
    if (dVar20 < dVar16) {
      *(double *)(param_2 + 0x18) = dVar16;
      dVar20 = dVar16;
    }
    if (dVar17 < dVar19) {
      *(double *)(param_2 + 0x10) = dVar17;
      dVar19 = dVar17;
    }
    if (dVar18 < dVar17) {
      *(double *)(param_2 + 0x20) = dVar17;
      dVar18 = dVar17;
    }
    if (dVar13 < dVar21) {
      *(double *)(param_2 + 8) = dVar13;
    }
    if (dVar20 < dVar13) {
      *(double *)(param_2 + 0x18) = dVar13;
    }
    if (dVar15 < dVar19) {
      *(double *)(param_2 + 0x10) = dVar15;
    }
    if (dVar18 < dVar15) {
      *(double *)(param_2 + 0x20) = dVar15;
    }
    *(double *)(param_1 + 0x1160) = dVar14;
    *(double *)(param_1 + 0x1168) = dVar15 + dVar1;
    if (dVar14 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar14 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar14 && dVar14 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar17 = *(double *)(param_1 + 0x1168);
    if (dVar17 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar17;
      dVar17 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar17 && dVar17 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
    uVar12 = uVar12 + 6;
    uVar11 = uVar11 + 6;
    uVar6 = uVar6 + 6;
    uVar7 = uVar7 + 6;
    uVar9 = uVar9 + 6;
    uVar10 = uVar10 + 6;
    dVar22 = dVar14;
    uVar3 = uVar5 + 6;
  } while (uVar5 + 6 <= uVar2 - 2);
  if (uVar5 + 1 < uVar2) {
    pcVar8 = param_1 + (ulong)(uVar5 + 2) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    if (uVar2 <= uVar5) {
      pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      goto LAB_00102d22;
    }
    pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar4 = param_1 + (ulong)(uVar5 + 1) * 8 + 0x10;
LAB_00102d22:
  dVar22 = *(double *)pcVar8;
  dVar16 = *(double *)pcVar4 + dVar14;
  if (*param_2 == (cff2_extents_param_t)0x0) {
    *param_2 = (cff2_extents_param_t)0x1;
    if (dVar14 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar13 = *(double *)(param_1 + 0x1160);
    if (*(double *)(param_2 + 0x18) <= dVar13 && dVar13 != *(double *)(param_2 + 0x18)) {
      *(double *)(param_2 + 0x18) = dVar13;
    }
    dVar13 = *(double *)(param_1 + 0x1168);
    if (dVar13 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar13;
      dVar13 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar13 && dVar13 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
  }
  *(double *)(param_1 + 0x1160) = dVar16;
  *(double *)(param_1 + 0x1168) = dVar17 + dVar22;
  if (dVar16 < *(double *)(param_2 + 8)) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
    dVar16 = *(double *)(param_1 + 0x1160);
  }
  if (*(double *)(param_2 + 0x18) <= dVar16 && dVar16 != *(double *)(param_2 + 0x18)) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
  }
  dVar17 = *(double *)(param_1 + 0x1168);
  if (dVar17 < *(double *)(param_2 + 0x10)) {
    *(double *)(param_2 + 0x10) = dVar17;
    dVar17 = *(double *)(param_1 + 0x1168);
  }
  if (*(double *)(param_2 + 0x20) <= dVar17 && dVar17 != *(double *)(param_2 + 0x20)) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::rlinecurve(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::rlinecurve(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  cff2_cs_interp_env_t *pcVar4;
  cff2_cs_interp_env_t *pcVar5;
  uint uVar6;
  uint uVar7;
  cff2_cs_interp_env_t *pcVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 8) {
    return;
  }
  dVar10 = *(double *)(param_1 + 0x1168);
  pcVar5 = param_1 + 0x18;
  uVar6 = uVar2 - 8 & 0xfffffffe;
  dVar13 = *(double *)(param_1 + 0x1160);
  uVar3 = 0;
  do {
    pcVar4 = pcVar5 + 8;
    pcVar8 = pcVar5;
    if (uVar2 <= uVar3 + 1) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      if (uVar2 <= uVar3) {
        pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
    }
    dVar14 = *(double *)pcVar4;
    dVar12 = *(double *)pcVar8 + dVar13;
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      if (dVar13 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar13 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar13 && dVar13 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar13 = *(double *)(param_1 + 0x1168);
      if (dVar13 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar13;
        dVar13 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar13 && dVar13 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
    }
    *(double *)(param_1 + 0x1160) = dVar12;
    *(double *)(param_1 + 0x1168) = dVar10 + dVar14;
    if (dVar12 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar12 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar12 && dVar12 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar10 = *(double *)(param_1 + 0x1168);
    if (dVar10 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar10;
      dVar10 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
    uVar7 = uVar3 + 2;
    pcVar5 = pcVar5 + 0x10;
    bVar9 = uVar6 != uVar3;
    dVar13 = dVar12;
    uVar3 = uVar7;
  } while (bVar9);
  if (uVar6 + 3 < uVar2) {
    pcVar5 = param_1 + (ulong)(uVar6 + 4) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    if (uVar2 <= uVar7) {
      pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      goto LAB_001030bf;
    }
    pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar4 = param_1 + (ulong)(uVar6 + 3) * 8 + 0x10;
LAB_001030bf:
  dVar10 = dVar10 + *(double *)pcVar5;
  dVar13 = *(double *)pcVar4 + dVar12;
  if (uVar6 + 5 < uVar2) {
    pcVar5 = param_1 + (ulong)(uVar6 + 6) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar4 = param_1 + (ulong)(uVar6 + 5) * 8 + 0x10;
  if (uVar2 <= uVar6 + 4) {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  dVar15 = *(double *)pcVar4 + dVar13;
  dVar14 = *(double *)pcVar5 + dVar10;
  if (uVar6 + 7 < uVar2) {
    pcVar5 = param_1 + (ulong)(uVar6 + 8) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar4 = param_1 + (ulong)(uVar6 + 7) * 8 + 0x10;
  if (uVar2 <= uVar6 + 6) {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  dVar1 = *(double *)pcVar5;
  dVar19 = *(double *)(param_2 + 8);
  dVar16 = *(double *)pcVar4 + dVar15;
  dVar20 = *(double *)(param_2 + 0x18);
  dVar18 = *(double *)(param_2 + 0x10);
  dVar17 = *(double *)(param_2 + 0x20);
  if (*param_2 == (cff2_extents_param_t)0x0) {
    *param_2 = (cff2_extents_param_t)0x1;
    if (dVar12 < dVar19) {
      dVar19 = *(double *)(param_1 + 0x1160);
      *(double *)(param_2 + 8) = dVar19;
    }
    dVar12 = *(double *)(param_1 + 0x1160);
    if (dVar20 < dVar12) {
      *(double *)(param_2 + 0x18) = dVar12;
      dVar20 = dVar12;
    }
    dVar12 = *(double *)(param_1 + 0x1168);
    dVar11 = dVar12;
    if (dVar12 < dVar18) {
      *(double *)(param_2 + 0x10) = dVar12;
      dVar11 = *(double *)(param_1 + 0x1168);
      dVar18 = dVar12;
    }
    if (dVar17 < dVar11) {
      dVar17 = *(double *)(param_1 + 0x1168);
      *(double *)(param_2 + 0x20) = dVar17;
    }
  }
  if (dVar13 < dVar19) {
    *(double *)(param_2 + 8) = dVar13;
    dVar19 = dVar13;
  }
  if (dVar20 < dVar13) {
    *(double *)(param_2 + 0x18) = dVar13;
    dVar20 = dVar13;
  }
  if (dVar10 < dVar18) {
    *(double *)(param_2 + 0x10) = dVar10;
    dVar18 = dVar10;
  }
  if (dVar17 < dVar10) {
    *(double *)(param_2 + 0x20) = dVar10;
    dVar17 = dVar10;
  }
  if (dVar15 < dVar19) {
    *(double *)(param_2 + 8) = dVar15;
  }
  if (dVar20 < dVar15) {
    *(double *)(param_2 + 0x18) = dVar15;
  }
  if (dVar14 < dVar18) {
    *(double *)(param_2 + 0x10) = dVar14;
  }
  if (dVar17 < dVar14) {
    *(double *)(param_2 + 0x20) = dVar14;
  }
  *(double *)(param_1 + 0x1160) = dVar16;
  *(double *)(param_1 + 0x1168) = dVar1 + dVar14;
  if (dVar16 < *(double *)(param_2 + 8)) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
    dVar16 = *(double *)(param_1 + 0x1160);
  }
  if (*(double *)(param_2 + 0x18) <= dVar16 && dVar16 != *(double *)(param_2 + 0x18)) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
  }
  dVar10 = *(double *)(param_1 + 0x1168);
  if (dVar10 < *(double *)(param_2 + 0x10)) {
    *(double *)(param_2 + 0x10) = dVar10;
    dVar10 = *(double *)(param_1 + 0x1168);
  }
  if (*(double *)(param_2 + 0x20) <= dVar10 && dVar10 != *(double *)(param_2 + 0x20)) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::hhcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::hhcurveto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  cff2_cs_interp_env_t *pcVar6;
  cff2_cs_interp_env_t *pcVar7;
  cff2_cs_interp_env_t *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  dVar9 = *(double *)(param_1 + 0x1168);
  dVar17 = *(double *)(param_1 + 0x1160);
  uVar5 = 4;
  if ((uVar3 & 1) != 0) {
    dVar9 = dVar9 + *(double *)(param_1 + 0x18);
    uVar5 = 5;
  }
  uVar4 = uVar3 & 1;
  if (uVar5 <= uVar3) {
    do {
      pcVar8 = param_1 + (ulong)uVar4 * 8 + 0x18;
      if (uVar3 <= uVar4) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar7 = param_1 + (ulong)(uVar4 + 2) * 8 + 0x18;
      dVar10 = *(double *)pcVar8 + dVar17;
      if (uVar3 <= uVar4 + 2) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar7 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar8 = param_1 + (ulong)(uVar4 + 1) * 8 + 0x18;
      if (uVar3 <= uVar4 + 1) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar8 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar6 = param_1 + (ulong)(uVar4 + 3) * 8 + 0x18;
      dVar12 = *(double *)pcVar8 + dVar10;
      dVar11 = *(double *)pcVar7 + dVar9;
      if (uVar3 <= uVar4 + 3) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar16 = *(double *)(param_2 + 8);
      dVar15 = *(double *)(param_2 + 0x18);
      dVar17 = *(double *)pcVar6 + dVar12;
      dVar14 = *(double *)(param_2 + 0x10);
      dVar13 = *(double *)(param_2 + 0x20);
      if (*param_2 == (cff2_extents_param_t)0x0) {
        dVar2 = *(double *)(param_1 + 0x1160);
        *param_2 = (cff2_extents_param_t)0x1;
        dVar18 = dVar2;
        if (dVar2 < dVar16) {
          *(double *)(param_2 + 8) = dVar2;
          dVar18 = *(double *)(param_1 + 0x1160);
          dVar16 = dVar2;
        }
        if (dVar15 < dVar18) {
          dVar15 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar15;
        }
        dVar2 = *(double *)(param_1 + 0x1168);
        dVar18 = dVar2;
        if (dVar2 < dVar14) {
          *(double *)(param_2 + 0x10) = dVar2;
          dVar18 = *(double *)(param_1 + 0x1168);
          dVar14 = dVar2;
        }
        if (dVar13 < dVar18) {
          dVar13 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar13;
        }
      }
      if (dVar10 < dVar16) {
        *(double *)(param_2 + 8) = dVar10;
        dVar16 = dVar10;
      }
      if (dVar15 < dVar10) {
        *(double *)(param_2 + 0x18) = dVar10;
        dVar15 = dVar10;
      }
      if (dVar9 < dVar14) {
        *(double *)(param_2 + 0x10) = dVar9;
        dVar14 = dVar9;
      }
      if (dVar13 < dVar9) {
        *(double *)(param_2 + 0x20) = dVar9;
        dVar13 = dVar9;
      }
      if (dVar12 < dVar16) {
        *(double *)(param_2 + 8) = dVar12;
      }
      if (dVar15 < dVar12) {
        *(double *)(param_2 + 0x18) = dVar12;
      }
      if (dVar11 < dVar14) {
        *(double *)(param_2 + 0x10) = dVar11;
      }
      if (dVar13 < dVar11) {
        *(double *)(param_2 + 0x20) = dVar11;
      }
      *(double *)(param_1 + 0x1160) = dVar17;
      *(double *)(param_1 + 0x1168) = dVar11;
      if (dVar17 < *(double *)(param_2 + 8)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
        dVar17 = *(double *)(param_1 + 0x1160);
      }
      if (*(double *)(param_2 + 0x18) <= dVar17 && dVar17 != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
      }
      dVar9 = *(double *)(param_1 + 0x1168);
      if (dVar9 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar9;
        dVar9 = *(double *)(param_1 + 0x1168);
      }
      if (*(double *)(param_2 + 0x20) <= dVar9 && dVar9 != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      }
      uVar1 = uVar5 + 4;
      uVar4 = uVar5;
      uVar5 = uVar1;
    } while (uVar1 <= uVar3);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::vhcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::vhcurveto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  cff2_cs_interp_env_t *pcVar11;
  cff2_cs_interp_env_t *pcVar12;
  cff2_cs_interp_env_t *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 4) == 0) {
    if (7 < uVar1) {
      uVar3 = 1;
      uVar2 = 3;
      dVar14 = *(double *)(param_1 + 0x1168);
      uVar10 = 4;
      uVar9 = 6;
      dVar18 = *(double *)(param_1 + 0x1160);
      uVar8 = 5;
      uVar7 = 7;
      uVar6 = 8;
      uVar5 = 0;
      do {
        pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
        if (uVar1 <= uVar5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar14 = dVar14 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)(uVar6 - 6) * 8 + 0x18;
        if (uVar1 <= uVar6 - 6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
        if (uVar1 <= uVar3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
        dVar22 = *(double *)pcVar13 + dVar18;
        dVar19 = *(double *)pcVar12 + dVar14;
        if (uVar1 <= uVar2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar23 = *(double *)(param_2 + 8);
        dVar20 = *(double *)(param_2 + 0x18);
        dVar16 = *(double *)pcVar11 + dVar22;
        dVar17 = *(double *)(param_2 + 0x10);
        dVar24 = *(double *)(param_2 + 0x20);
        if (*param_2 == (cff2_extents_param_t)0x0) {
          *param_2 = (cff2_extents_param_t)0x1;
          dVar21 = dVar18;
          if (dVar18 < dVar23) {
            dVar23 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 8) = dVar23;
            dVar21 = *(double *)(param_1 + 0x1160);
          }
          if (dVar20 < dVar21) {
            dVar20 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar20;
          }
          dVar21 = *(double *)(param_1 + 0x1168);
          dVar25 = dVar21;
          if (dVar21 < dVar17) {
            *(double *)(param_2 + 0x10) = dVar21;
            dVar25 = *(double *)(param_1 + 0x1168);
            dVar17 = dVar21;
          }
          if (dVar24 < dVar25) {
            dVar24 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar24;
          }
        }
        if (dVar18 < dVar23) {
          *(double *)(param_2 + 8) = dVar18;
          dVar23 = dVar18;
        }
        if (dVar20 < dVar18) {
          *(double *)(param_2 + 0x18) = dVar18;
          dVar20 = dVar18;
        }
        if (dVar14 < dVar17) {
          *(double *)(param_2 + 0x10) = dVar14;
          dVar17 = dVar14;
        }
        if (dVar24 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
          dVar24 = dVar14;
        }
        if (dVar22 < dVar23) {
          *(double *)(param_2 + 8) = dVar22;
        }
        if (dVar20 < dVar22) {
          *(double *)(param_2 + 0x18) = dVar22;
        }
        if (dVar19 < dVar17) {
          *(double *)(param_2 + 0x10) = dVar19;
        }
        if (dVar24 < dVar19) {
          *(double *)(param_2 + 0x20) = dVar19;
        }
        *(double *)(param_1 + 0x1160) = dVar16;
        *(double *)(param_1 + 0x1168) = dVar19;
        dVar14 = *(double *)(param_2 + 8);
        dVar18 = dVar16;
        if (dVar16 < dVar14) {
          dVar14 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar14;
          dVar18 = *(double *)(param_1 + 0x1160);
        }
        dVar22 = *(double *)(param_2 + 0x18);
        if (dVar22 < dVar18) {
          dVar22 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar22;
        }
        dVar18 = *(double *)(param_1 + 0x1168);
        dVar23 = dVar18;
        dVar20 = *(double *)(param_2 + 0x10);
        if (dVar18 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar18;
          dVar23 = *(double *)(param_1 + 0x1168);
          dVar20 = dVar18;
        }
        dVar17 = *(double *)(param_2 + 0x20);
        if (dVar17 < dVar23) {
          dVar17 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar17;
        }
        pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
        if (uVar1 <= uVar10) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar16 = dVar16 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar9 * 8 + 0x18;
        if (uVar1 <= uVar9) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar8 * 8 + 0x18;
        if (uVar1 <= uVar8) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar7 * 8 + 0x18;
        dVar23 = *(double *)pcVar13 + dVar16;
        dVar24 = *(double *)pcVar12 + dVar19;
        if (uVar1 <= uVar7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar21 = *(double *)pcVar11;
        dVar18 = dVar23;
        if ((uVar1 - uVar5 < 0x10) && ((uVar1 & 1) != 0)) {
          pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
          if (uVar1 <= uVar6) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
          }
          dVar18 = *(double *)pcVar12 + dVar23;
        }
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar25 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar15 = dVar25;
          if (dVar25 < dVar14) {
            *(double *)(param_2 + 8) = dVar25;
            dVar15 = *(double *)(param_1 + 0x1160);
            dVar14 = dVar25;
          }
          if (dVar22 < dVar15) {
            dVar22 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar22;
          }
          dVar25 = *(double *)(param_1 + 0x1168);
          dVar15 = dVar25;
          if (dVar25 < dVar20) {
            *(double *)(param_2 + 0x10) = dVar25;
            dVar15 = *(double *)(param_1 + 0x1168);
            dVar20 = dVar25;
          }
          if (dVar17 < dVar15) {
            dVar17 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar17;
          }
        }
        if (dVar16 < dVar14) {
          *(double *)(param_2 + 8) = dVar16;
          dVar14 = dVar16;
        }
        if (dVar22 < dVar16) {
          *(double *)(param_2 + 0x18) = dVar16;
          dVar22 = dVar16;
        }
        if (dVar19 < dVar20) {
          *(double *)(param_2 + 0x10) = dVar19;
          dVar20 = dVar19;
        }
        if (dVar17 < dVar19) {
          *(double *)(param_2 + 0x20) = dVar19;
          dVar17 = dVar19;
        }
        if (dVar23 < dVar14) {
          *(double *)(param_2 + 8) = dVar23;
        }
        if (dVar22 < dVar23) {
          *(double *)(param_2 + 0x18) = dVar23;
        }
        if (dVar24 < dVar20) {
          *(double *)(param_2 + 0x10) = dVar24;
        }
        if (dVar17 < dVar24) {
          *(double *)(param_2 + 0x20) = dVar24;
        }
        *(double *)(param_1 + 0x1160) = dVar18;
        *(double *)(param_1 + 0x1168) = dVar21 + dVar24;
        if (dVar18 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
          dVar18 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar18 && dVar18 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar14 = *(double *)(param_1 + 0x1168);
        if (dVar14 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar14;
          dVar14 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar14 && dVar14 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
        uVar6 = uVar6 + 8;
        uVar5 = uVar5 + 8;
        uVar7 = uVar7 + 8;
        uVar8 = uVar8 + 8;
        uVar9 = uVar9 + 8;
        uVar10 = uVar10 + 8;
        uVar2 = uVar2 + 8;
        uVar3 = uVar3 + 8;
      } while (uVar6 <= uVar1);
    }
  }
  else {
    dVar14 = *(double *)(param_1 + 0x1160);
    dVar17 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x1160);
    dVar16 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1168);
    dVar18 = *(double *)(param_2 + 0x20);
    dVar19 = *(double *)(param_2 + 0x10);
    dVar22 = *(double *)(param_2 + 0x18);
    dVar23 = *(double *)(param_2 + 8);
    dVar20 = *(double *)(param_1 + 0x30) + dVar17;
    dVar24 = *(double *)(param_1 + 0x28) + dVar16;
    if (uVar1 < 0xc) {
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar9 = 5;
      uVar8 = 7;
      uVar7 = 8;
      uVar6 = 10;
      uVar3 = 9;
      uVar2 = 0xb;
      uVar4 = 0xc;
      while( true ) {
        uVar10 = (int)uVar4 - 8;
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar21 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar25 = dVar21;
          if (dVar21 < dVar23) {
            *(double *)(param_2 + 8) = dVar21;
            dVar25 = *(double *)(param_1 + 0x1160);
            dVar23 = dVar21;
          }
          if (dVar22 < dVar25) {
            dVar22 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar22;
          }
          dVar21 = *(double *)(param_1 + 0x1168);
          dVar25 = dVar21;
          if (dVar21 < dVar19) {
            *(double *)(param_2 + 0x10) = dVar21;
            dVar25 = *(double *)(param_1 + 0x1168);
            dVar19 = dVar21;
          }
          if (dVar18 < dVar25) {
            dVar18 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar18;
          }
        }
        if (dVar14 < dVar23) {
          *(double *)(param_2 + 8) = dVar14;
          dVar23 = dVar14;
        }
        if (dVar22 < dVar14) {
          *(double *)(param_2 + 0x18) = dVar14;
          dVar22 = dVar14;
        }
        if (dVar16 < dVar19) {
          *(double *)(param_2 + 0x10) = dVar16;
          dVar19 = dVar16;
        }
        if (dVar18 < dVar16) {
          *(double *)(param_2 + 0x20) = dVar16;
          dVar18 = dVar16;
        }
        if (dVar17 < dVar23) {
          *(double *)(param_2 + 8) = dVar17;
        }
        if (dVar22 < dVar17) {
          *(double *)(param_2 + 0x18) = dVar17;
        }
        if (dVar24 < dVar19) {
          *(double *)(param_2 + 0x10) = dVar24;
        }
        if (dVar18 < dVar24) {
          *(double *)(param_2 + 0x20) = dVar24;
        }
        *(double *)(param_1 + 0x1160) = dVar20;
        *(double *)(param_1 + 0x1168) = dVar24;
        dVar18 = *(double *)(param_2 + 8);
        if (dVar20 < dVar18) {
          dVar18 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar18;
          dVar20 = *(double *)(param_1 + 0x1160);
        }
        dVar19 = *(double *)(param_2 + 0x18);
        if (dVar19 < dVar20) {
          dVar19 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar19;
        }
        dVar14 = *(double *)(param_1 + 0x1168);
        dVar22 = dVar14;
        dVar23 = *(double *)(param_2 + 0x10);
        if (dVar14 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar14;
          dVar22 = *(double *)(param_1 + 0x1168);
          dVar23 = dVar14;
        }
        dVar17 = *(double *)(param_2 + 0x20);
        if (dVar17 < dVar22) {
          dVar17 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar17;
        }
        pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
        if (uVar1 <= uVar10) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar20 = dVar20 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
        if (uVar1 <= uVar5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar9 * 8 + 0x18;
        if (uVar1 <= uVar9) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar8 * 8 + 0x18;
        dVar14 = *(double *)pcVar13 + dVar20;
        dVar24 = *(double *)pcVar12 + dVar22;
        if (uVar1 <= uVar8) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar16 = *(double *)pcVar11;
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar21 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar25 = dVar21;
          if (dVar21 < dVar18) {
            *(double *)(param_2 + 8) = dVar21;
            dVar25 = *(double *)(param_1 + 0x1160);
            dVar18 = dVar21;
          }
          if (dVar19 < dVar25) {
            dVar19 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar19;
          }
          dVar21 = *(double *)(param_1 + 0x1168);
          dVar25 = dVar21;
          if (dVar21 < dVar23) {
            *(double *)(param_2 + 0x10) = dVar21;
            dVar25 = *(double *)(param_1 + 0x1168);
            dVar23 = dVar21;
          }
          if (dVar17 < dVar25) {
            dVar17 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar17;
          }
        }
        if (dVar20 < dVar18) {
          *(double *)(param_2 + 8) = dVar20;
          dVar18 = dVar20;
        }
        if (dVar19 < dVar20) {
          *(double *)(param_2 + 0x18) = dVar20;
          dVar19 = dVar20;
        }
        if (dVar22 < dVar23) {
          *(double *)(param_2 + 0x10) = dVar22;
          dVar23 = dVar22;
        }
        if (dVar17 < dVar22) {
          *(double *)(param_2 + 0x20) = dVar22;
          dVar17 = dVar22;
        }
        if (dVar14 < dVar18) {
          *(double *)(param_2 + 8) = dVar14;
        }
        if (dVar19 < dVar14) {
          *(double *)(param_2 + 0x18) = dVar14;
        }
        if (dVar24 < dVar23) {
          *(double *)(param_2 + 0x10) = dVar24;
        }
        if (dVar17 < dVar24) {
          *(double *)(param_2 + 0x20) = dVar24;
        }
        *(double *)(param_1 + 0x1160) = dVar14;
        *(double *)(param_1 + 0x1168) = dVar16 + dVar24;
        dVar23 = *(double *)(param_2 + 8);
        dVar18 = dVar14;
        if (dVar14 < dVar23) {
          dVar23 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar23;
          dVar18 = *(double *)(param_1 + 0x1160);
        }
        dVar22 = *(double *)(param_2 + 0x18);
        if (dVar22 < dVar18) {
          dVar22 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar22;
        }
        dVar18 = *(double *)(param_1 + 0x1168);
        dVar20 = dVar18;
        dVar19 = *(double *)(param_2 + 0x10);
        if (dVar18 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar18;
          dVar20 = *(double *)(param_1 + 0x1168);
          dVar19 = dVar18;
        }
        dVar18 = *(double *)(param_2 + 0x20);
        if (dVar18 < dVar20) {
          dVar18 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar18;
        }
        pcVar12 = param_1 + (ulong)uVar7 * 8 + 0x18;
        if (uVar1 <= uVar7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar16 = dVar16 + dVar24 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
        if (uVar1 <= uVar6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
        if (uVar1 <= uVar3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
        dVar17 = *(double *)pcVar13 + dVar14;
        dVar24 = *(double *)pcVar12 + dVar16;
        if (uVar1 <= uVar2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        uVar10 = (int)uVar4 + 8;
        uVar2 = uVar2 + 8;
        uVar3 = uVar3 + 8;
        uVar6 = uVar6 + 8;
        uVar7 = uVar7 + 8;
        uVar8 = uVar8 + 8;
        uVar9 = uVar9 + 8;
        dVar20 = *(double *)pcVar11 + dVar17;
        uVar5 = uVar5 + 8;
        if (uVar1 < uVar10) break;
        uVar4 = (ulong)uVar10;
      }
    }
    dVar21 = dVar24;
    if ((uint)uVar4 < uVar1) {
      dVar21 = dVar24 + *(double *)(param_1 + uVar4 * 8 + 0x18);
    }
    if (*param_2 == (cff2_extents_param_t)0x0) {
      dVar25 = *(double *)(param_1 + 0x1160);
      *param_2 = (cff2_extents_param_t)0x1;
      dVar15 = dVar25;
      if (dVar25 < dVar23) {
        *(double *)(param_2 + 8) = dVar25;
        dVar15 = *(double *)(param_1 + 0x1160);
        dVar23 = dVar25;
      }
      if (dVar22 < dVar15) {
        dVar22 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 0x18) = dVar22;
      }
      dVar25 = *(double *)(param_1 + 0x1168);
      dVar15 = dVar25;
      if (dVar25 < dVar19) {
        *(double *)(param_2 + 0x10) = dVar25;
        dVar15 = *(double *)(param_1 + 0x1168);
        dVar19 = dVar25;
      }
      if (dVar18 < dVar15) {
        dVar18 = *(double *)(param_1 + 0x1168);
        *(double *)(param_2 + 0x20) = dVar18;
      }
    }
    if (dVar14 < dVar23) {
      *(double *)(param_2 + 8) = dVar14;
      dVar23 = dVar14;
    }
    if (dVar22 < dVar14) {
      *(double *)(param_2 + 0x18) = dVar14;
      dVar22 = dVar14;
    }
    if (dVar16 < dVar19) {
      *(double *)(param_2 + 0x10) = dVar16;
      dVar19 = dVar16;
    }
    if (dVar18 < dVar16) {
      *(double *)(param_2 + 0x20) = dVar16;
      dVar18 = dVar16;
    }
    if (dVar17 < dVar23) {
      *(double *)(param_2 + 8) = dVar17;
    }
    if (dVar22 < dVar17) {
      *(double *)(param_2 + 0x18) = dVar17;
    }
    if (dVar24 < dVar19) {
      *(double *)(param_2 + 0x10) = dVar24;
    }
    if (dVar18 < dVar24) {
      *(double *)(param_2 + 0x20) = dVar24;
    }
    *(double *)(param_1 + 0x1160) = dVar20;
    *(double *)(param_1 + 0x1168) = dVar21;
    if (dVar20 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar20 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar20 && dVar20 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar14 = *(double *)(param_1 + 0x1168);
    if (dVar14 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar14;
      dVar14 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar14 && dVar14 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::hvcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::hvcurveto(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  cff2_cs_interp_env_t *pcVar11;
  cff2_cs_interp_env_t *pcVar12;
  cff2_cs_interp_env_t *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 4) == 0) {
    if (7 < uVar1) {
      uVar3 = 1;
      uVar2 = 3;
      dVar15 = *(double *)(param_1 + 0x1168);
      uVar10 = 4;
      uVar9 = 6;
      uVar8 = 5;
      dVar25 = *(double *)(param_1 + 0x1160);
      uVar7 = 7;
      uVar6 = 8;
      uVar5 = 0;
      do {
        pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
        if (uVar1 <= uVar5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)(uVar6 - 6) * 8 + 0x18;
        dVar19 = *(double *)pcVar12 + dVar25;
        if (uVar1 <= uVar6 - 6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_1 + (ulong)uVar3 * 8 + 0x18;
        if (uVar1 <= uVar3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
        dVar14 = *(double *)pcVar12 + dVar19;
        dVar21 = *(double *)pcVar13 + dVar15;
        if (uVar1 <= uVar2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar23 = *(double *)pcVar11;
        dVar24 = *(double *)(param_2 + 8);
        dVar16 = *(double *)(param_2 + 0x18);
        dVar20 = *(double *)(param_2 + 0x10);
        dVar17 = *(double *)(param_2 + 0x20);
        if (*param_2 == (cff2_extents_param_t)0x0) {
          *param_2 = (cff2_extents_param_t)0x1;
          if (dVar25 < dVar24) {
            dVar24 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 8) = dVar24;
            dVar25 = *(double *)(param_1 + 0x1160);
          }
          if (dVar16 < dVar25) {
            dVar16 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar16;
          }
          dVar25 = *(double *)(param_1 + 0x1168);
          dVar22 = dVar25;
          if (dVar25 < dVar20) {
            *(double *)(param_2 + 0x10) = dVar25;
            dVar22 = *(double *)(param_1 + 0x1168);
            dVar20 = dVar25;
          }
          if (dVar17 < dVar22) {
            dVar17 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar17;
          }
        }
        if (dVar19 < dVar24) {
          *(double *)(param_2 + 8) = dVar19;
          dVar24 = dVar19;
        }
        if (dVar16 < dVar19) {
          *(double *)(param_2 + 0x18) = dVar19;
          dVar16 = dVar19;
        }
        if (dVar15 < dVar20) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar20 = dVar15;
        }
        if (dVar17 < dVar15) {
          *(double *)(param_2 + 0x20) = dVar15;
          dVar17 = dVar15;
        }
        if (dVar14 < dVar24) {
          *(double *)(param_2 + 8) = dVar14;
        }
        if (dVar16 < dVar14) {
          *(double *)(param_2 + 0x18) = dVar14;
        }
        if (dVar21 < dVar20) {
          *(double *)(param_2 + 0x10) = dVar21;
        }
        if (dVar17 < dVar21) {
          *(double *)(param_2 + 0x20) = dVar21;
        }
        *(double *)(param_1 + 0x1160) = dVar14;
        *(double *)(param_1 + 0x1168) = dVar23 + dVar21;
        dVar15 = *(double *)(param_2 + 8);
        dVar25 = dVar14;
        if (dVar14 < dVar15) {
          dVar15 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar15;
          dVar25 = *(double *)(param_1 + 0x1160);
        }
        dVar19 = *(double *)(param_2 + 0x18);
        if (dVar19 < dVar25) {
          dVar19 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar19;
        }
        dVar25 = *(double *)(param_1 + 0x1168);
        dVar24 = dVar25;
        dVar16 = *(double *)(param_2 + 0x10);
        if (dVar25 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar25;
          dVar24 = *(double *)(param_1 + 0x1168);
          dVar16 = dVar25;
        }
        dVar20 = *(double *)(param_2 + 0x20);
        if (dVar20 < dVar24) {
          dVar20 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar20;
        }
        pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
        if (uVar1 <= uVar10) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar21 = dVar23 + dVar21 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar9 * 8 + 0x18;
        if (uVar1 <= uVar9) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar8 * 8 + 0x18;
        if (uVar1 <= uVar8) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar7 * 8 + 0x18;
        dVar24 = *(double *)pcVar13 + dVar14;
        dVar23 = *(double *)pcVar12 + dVar21;
        if (uVar1 <= uVar7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar25 = *(double *)pcVar11 + dVar24;
        dVar17 = dVar23;
        if ((uVar1 - uVar5 < 0x10) && ((uVar1 & 1) != 0)) {
          pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
          if (uVar1 <= uVar6) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
          }
          dVar17 = *(double *)pcVar12 + dVar23;
        }
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar22 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar18 = dVar22;
          if (dVar22 < dVar15) {
            *(double *)(param_2 + 8) = dVar22;
            dVar18 = *(double *)(param_1 + 0x1160);
            dVar15 = dVar22;
          }
          if (dVar19 < dVar18) {
            dVar19 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar19;
          }
          dVar22 = *(double *)(param_1 + 0x1168);
          dVar18 = dVar22;
          if (dVar22 < dVar16) {
            *(double *)(param_2 + 0x10) = dVar22;
            dVar18 = *(double *)(param_1 + 0x1168);
            dVar16 = dVar22;
          }
          if (dVar20 < dVar18) {
            dVar20 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar20;
          }
        }
        if (dVar14 < dVar15) {
          *(double *)(param_2 + 8) = dVar14;
          dVar15 = dVar14;
        }
        if (dVar19 < dVar14) {
          *(double *)(param_2 + 0x18) = dVar14;
          dVar19 = dVar14;
        }
        if (dVar21 < dVar16) {
          *(double *)(param_2 + 0x10) = dVar21;
          dVar16 = dVar21;
        }
        if (dVar20 < dVar21) {
          *(double *)(param_2 + 0x20) = dVar21;
          dVar20 = dVar21;
        }
        if (dVar24 < dVar15) {
          *(double *)(param_2 + 8) = dVar24;
        }
        if (dVar19 < dVar24) {
          *(double *)(param_2 + 0x18) = dVar24;
        }
        if (dVar23 < dVar16) {
          *(double *)(param_2 + 0x10) = dVar23;
        }
        if (dVar20 < dVar23) {
          *(double *)(param_2 + 0x20) = dVar23;
        }
        *(double *)(param_1 + 0x1160) = dVar25;
        *(double *)(param_1 + 0x1168) = dVar17;
        if (dVar25 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
          dVar25 = *(double *)(param_1 + 0x1160);
        }
        if (*(double *)(param_2 + 0x18) <= dVar25 && dVar25 != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
        }
        dVar15 = *(double *)(param_1 + 0x1168);
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar15 = *(double *)(param_1 + 0x1168);
        }
        if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
        }
        uVar6 = uVar6 + 8;
        uVar5 = uVar5 + 8;
        uVar7 = uVar7 + 8;
        uVar8 = uVar8 + 8;
        uVar9 = uVar9 + 8;
        uVar10 = uVar10 + 8;
        uVar2 = uVar2 + 8;
        uVar3 = uVar3 + 8;
      } while (uVar6 <= uVar1);
    }
  }
  else {
    dVar15 = *(double *)(param_2 + 0x20);
    dVar25 = *(double *)(param_2 + 0x10);
    dVar24 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1160);
    dVar16 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x1168);
    dVar19 = *(double *)(param_1 + 0x1168);
    dVar14 = *(double *)(param_2 + 0x18);
    dVar21 = *(double *)(param_2 + 8);
    dVar23 = *(double *)(param_1 + 0x20) + dVar24;
    dVar20 = *(double *)(param_1 + 0x30) + dVar16;
    if (uVar1 < 0xc) {
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar9 = 5;
      uVar8 = 7;
      uVar7 = 8;
      uVar6 = 10;
      uVar3 = 9;
      uVar2 = 0xb;
      uVar4 = 0xc;
      while( true ) {
        uVar10 = (int)uVar4 - 8;
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar17 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar22 = dVar17;
          if (dVar17 < dVar21) {
            *(double *)(param_2 + 8) = dVar17;
            dVar22 = *(double *)(param_1 + 0x1160);
            dVar21 = dVar17;
          }
          if (dVar14 < dVar22) {
            dVar14 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar14;
          }
          dVar17 = *(double *)(param_1 + 0x1168);
          dVar22 = dVar17;
          if (dVar17 < dVar25) {
            *(double *)(param_2 + 0x10) = dVar17;
            dVar22 = *(double *)(param_1 + 0x1168);
            dVar25 = dVar17;
          }
          if (dVar15 < dVar22) {
            dVar15 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar15;
          }
        }
        if (dVar24 < dVar21) {
          *(double *)(param_2 + 8) = dVar24;
          dVar21 = dVar24;
        }
        if (dVar14 < dVar24) {
          *(double *)(param_2 + 0x18) = dVar24;
          dVar14 = dVar24;
        }
        if (dVar19 < dVar25) {
          *(double *)(param_2 + 0x10) = dVar19;
          dVar25 = dVar19;
        }
        if (dVar15 < dVar19) {
          *(double *)(param_2 + 0x20) = dVar19;
          dVar15 = dVar19;
        }
        if (dVar23 < dVar21) {
          *(double *)(param_2 + 8) = dVar23;
        }
        if (dVar14 < dVar23) {
          *(double *)(param_2 + 0x18) = dVar23;
        }
        if (dVar16 < dVar25) {
          *(double *)(param_2 + 0x10) = dVar16;
        }
        if (dVar15 < dVar16) {
          *(double *)(param_2 + 0x20) = dVar16;
        }
        *(double *)(param_1 + 0x1160) = dVar23;
        *(double *)(param_1 + 0x1168) = dVar20;
        dVar15 = *(double *)(param_2 + 8);
        if (dVar23 < dVar15) {
          dVar15 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar15;
          dVar23 = *(double *)(param_1 + 0x1160);
        }
        dVar25 = *(double *)(param_2 + 0x18);
        if (dVar25 < dVar23) {
          dVar25 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar25;
        }
        dVar19 = *(double *)(param_1 + 0x1168);
        dVar14 = dVar19;
        dVar21 = *(double *)(param_2 + 0x10);
        if (dVar19 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar19;
          dVar14 = *(double *)(param_1 + 0x1168);
          dVar21 = dVar19;
        }
        dVar16 = *(double *)(param_2 + 0x20);
        if (dVar16 < dVar14) {
          dVar16 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar16;
        }
        pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
        if (uVar1 <= uVar10) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar14 = dVar14 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
        if (uVar1 <= uVar5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar9 * 8 + 0x18;
        if (uVar1 <= uVar9) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar8 * 8 + 0x18;
        dVar20 = *(double *)pcVar13 + dVar23;
        dVar19 = *(double *)pcVar12 + dVar14;
        if (uVar1 <= uVar8) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar24 = *(double *)pcVar11 + dVar20;
        if (*param_2 == (cff2_extents_param_t)0x0) {
          dVar17 = *(double *)(param_1 + 0x1160);
          *param_2 = (cff2_extents_param_t)0x1;
          dVar22 = dVar17;
          if (dVar17 < dVar15) {
            *(double *)(param_2 + 8) = dVar17;
            dVar22 = *(double *)(param_1 + 0x1160);
            dVar15 = dVar17;
          }
          if (dVar25 < dVar22) {
            dVar25 = *(double *)(param_1 + 0x1160);
            *(double *)(param_2 + 0x18) = dVar25;
          }
          dVar17 = *(double *)(param_1 + 0x1168);
          dVar22 = dVar17;
          if (dVar17 < dVar21) {
            *(double *)(param_2 + 0x10) = dVar17;
            dVar22 = *(double *)(param_1 + 0x1168);
            dVar21 = dVar17;
          }
          if (dVar16 < dVar22) {
            dVar16 = *(double *)(param_1 + 0x1168);
            *(double *)(param_2 + 0x20) = dVar16;
          }
        }
        if (dVar23 < dVar15) {
          *(double *)(param_2 + 8) = dVar23;
          dVar15 = dVar23;
        }
        if (dVar25 < dVar23) {
          *(double *)(param_2 + 0x18) = dVar23;
          dVar25 = dVar23;
        }
        if (dVar14 < dVar21) {
          *(double *)(param_2 + 0x10) = dVar14;
          dVar21 = dVar14;
        }
        if (dVar16 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
          dVar16 = dVar14;
        }
        if (dVar20 < dVar15) {
          *(double *)(param_2 + 8) = dVar20;
        }
        if (dVar25 < dVar20) {
          *(double *)(param_2 + 0x18) = dVar20;
        }
        if (dVar19 < dVar21) {
          *(double *)(param_2 + 0x10) = dVar19;
        }
        if (dVar16 < dVar19) {
          *(double *)(param_2 + 0x20) = dVar19;
        }
        *(double *)(param_1 + 0x1160) = dVar24;
        *(double *)(param_1 + 0x1168) = dVar19;
        dVar21 = *(double *)(param_2 + 8);
        dVar15 = dVar24;
        if (dVar24 < dVar21) {
          dVar21 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 8) = dVar21;
          dVar15 = *(double *)(param_1 + 0x1160);
        }
        dVar14 = *(double *)(param_2 + 0x18);
        if (dVar14 < dVar15) {
          dVar14 = *(double *)(param_1 + 0x1160);
          *(double *)(param_2 + 0x18) = dVar14;
        }
        dVar15 = *(double *)(param_1 + 0x1168);
        dVar23 = dVar15;
        dVar25 = *(double *)(param_2 + 0x10);
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar23 = *(double *)(param_1 + 0x1168);
          dVar25 = dVar15;
        }
        dVar15 = *(double *)(param_2 + 0x20);
        if (dVar15 < dVar23) {
          dVar15 = *(double *)(param_1 + 0x1168);
          *(double *)(param_2 + 0x20) = dVar15;
        }
        pcVar12 = param_1 + (ulong)uVar7 * 8 + 0x18;
        if (uVar1 <= uVar7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar24 = dVar24 + *(double *)pcVar12;
        pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
        if (uVar1 <= uVar6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar12 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
        if (uVar1 <= uVar3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
        dVar23 = *(double *)pcVar13 + dVar24;
        dVar16 = *(double *)pcVar12 + dVar19;
        if (uVar1 <= uVar2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        uVar2 = uVar2 + 8;
        uVar3 = uVar3 + 8;
        uVar10 = (int)uVar4 + 8;
        uVar6 = uVar6 + 8;
        uVar7 = uVar7 + 8;
        uVar8 = uVar8 + 8;
        dVar20 = *(double *)pcVar11 + dVar16;
        uVar9 = uVar9 + 8;
        uVar5 = uVar5 + 8;
        if (uVar1 < uVar10) break;
        uVar4 = (ulong)uVar10;
      }
    }
    dVar17 = dVar23;
    if ((uint)uVar4 < uVar1) {
      dVar17 = dVar23 + *(double *)(param_1 + uVar4 * 8 + 0x18);
    }
    if (*param_2 == (cff2_extents_param_t)0x0) {
      dVar22 = *(double *)(param_1 + 0x1160);
      *param_2 = (cff2_extents_param_t)0x1;
      dVar18 = dVar22;
      if (dVar22 < dVar21) {
        *(double *)(param_2 + 8) = dVar22;
        dVar18 = *(double *)(param_1 + 0x1160);
        dVar21 = dVar22;
      }
      if (dVar14 < dVar18) {
        dVar14 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 0x18) = dVar14;
      }
      dVar22 = *(double *)(param_1 + 0x1168);
      dVar18 = dVar22;
      if (dVar22 < dVar25) {
        *(double *)(param_2 + 0x10) = dVar22;
        dVar18 = *(double *)(param_1 + 0x1168);
        dVar25 = dVar22;
      }
      if (dVar15 < dVar18) {
        dVar15 = *(double *)(param_1 + 0x1168);
        *(double *)(param_2 + 0x20) = dVar15;
      }
    }
    if (dVar24 < dVar21) {
      *(double *)(param_2 + 8) = dVar24;
      dVar21 = dVar24;
    }
    if (dVar14 < dVar24) {
      *(double *)(param_2 + 0x18) = dVar24;
      dVar14 = dVar24;
    }
    if (dVar19 < dVar25) {
      *(double *)(param_2 + 0x10) = dVar19;
      dVar25 = dVar19;
    }
    if (dVar15 < dVar19) {
      *(double *)(param_2 + 0x20) = dVar19;
      dVar15 = dVar19;
    }
    if (dVar23 < dVar21) {
      *(double *)(param_2 + 8) = dVar23;
    }
    if (dVar14 < dVar23) {
      *(double *)(param_2 + 0x18) = dVar23;
    }
    if (dVar16 < dVar25) {
      *(double *)(param_2 + 0x10) = dVar16;
    }
    if (dVar15 < dVar16) {
      *(double *)(param_2 + 0x20) = dVar16;
    }
    *(double *)(param_1 + 0x1160) = dVar17;
    *(double *)(param_1 + 0x1168) = dVar20;
    if (dVar17 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar17 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar17 && dVar17 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar15 = *(double *)(param_1 + 0x1168);
    if (dVar15 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar15;
      dVar15 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
    }
  }
  return;
}



/* CFF::path_procs_t<cff2_path_procs_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t>::flex1(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_extents_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
     ::flex1(cff2_cs_interp_env_t *param_1,cff2_extents_param_t *param_2)

{
  cff2_cs_interp_env_t *pcVar1;
  cff2_cs_interp_env_t *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (*(int *)(param_1 + 0x14) == 0xb) {
    pcVar2 = param_1 + 0x18;
    dVar3 = 0.0;
    dVar4 = 0.0;
    do {
      dVar10 = *(double *)pcVar2;
      pcVar1 = pcVar2 + 8;
      pcVar2 = pcVar2 + 0x10;
      dVar3 = dVar3 + dVar10;
      dVar4 = dVar4 + *(double *)pcVar1;
    } while (pcVar2 != param_1 + 0x68);
    dVar11 = *(double *)(param_1 + 0x1160);
    dVar15 = *(double *)(param_1 + 0x1168);
    dVar17 = *(double *)(param_1 + 0x40);
    dVar5 = *(double *)(param_1 + 0x18) + dVar11;
    dVar8 = *(double *)(param_1 + 0x20) + dVar15;
    dVar6 = dVar5 + *(double *)(param_1 + 0x28);
    dVar9 = dVar8 + *(double *)(param_1 + 0x30);
    dVar10 = *(double *)(param_1 + 0x38) + dVar6;
    dVar12 = *(double *)(param_1 + 0x48) + dVar10;
    dVar7 = *(double *)(param_1 + 0x50) + dVar17 + dVar9;
    dVar14 = *(double *)(param_1 + 0x58) + dVar12;
    dVar13 = *(double *)(param_1 + 0x60) + dVar7;
    if ((double)((ulong)dVar4 & _LC5) < (double)((ulong)dVar3 & _LC5)) {
      dVar3 = *(double *)(param_1 + 0x68) + dVar14;
    }
    else {
      dVar15 = *(double *)(param_1 + 0x68) + dVar13;
      dVar3 = dVar11;
    }
    dVar4 = *(double *)(param_2 + 0x10);
    dVar19 = *(double *)(param_2 + 0x20);
    dVar16 = *(double *)(param_2 + 8);
    dVar20 = *(double *)(param_2 + 0x18);
    if (*param_2 == (cff2_extents_param_t)0x0) {
      *param_2 = (cff2_extents_param_t)0x1;
      if (dVar11 < dVar16) {
        dVar16 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 8) = dVar16;
        dVar11 = *(double *)(param_1 + 0x1160);
      }
      if (dVar20 < dVar11) {
        dVar20 = *(double *)(param_1 + 0x1160);
        *(double *)(param_2 + 0x18) = dVar20;
      }
      dVar11 = *(double *)(param_1 + 0x1168);
      dVar18 = dVar11;
      if (dVar11 < dVar4) {
        *(double *)(param_2 + 0x10) = dVar11;
        dVar18 = *(double *)(param_1 + 0x1168);
        dVar4 = dVar11;
      }
      if (dVar19 < dVar18) {
        dVar19 = *(double *)(param_1 + 0x1168);
        *(double *)(param_2 + 0x20) = dVar19;
      }
    }
    if (dVar5 < dVar16) {
      *(double *)(param_2 + 8) = dVar5;
      dVar16 = dVar5;
    }
    if (dVar20 < dVar5) {
      *(double *)(param_2 + 0x18) = dVar5;
      dVar20 = dVar5;
    }
    if (dVar8 < dVar4) {
      *(double *)(param_2 + 0x10) = dVar8;
      dVar4 = dVar8;
    }
    if (dVar19 < dVar8) {
      *(double *)(param_2 + 0x20) = dVar8;
      dVar19 = dVar8;
    }
    if (dVar6 < dVar16) {
      *(double *)(param_2 + 8) = dVar6;
    }
    if (dVar20 < dVar6) {
      *(double *)(param_2 + 0x18) = dVar6;
    }
    if (dVar9 < dVar4) {
      *(double *)(param_2 + 0x10) = dVar9;
    }
    if (dVar19 < dVar9) {
      *(double *)(param_2 + 0x20) = dVar9;
    }
    *(double *)(param_1 + 0x1160) = dVar10;
    *(double *)(param_1 + 0x1168) = dVar17 + dVar9;
    dVar4 = *(double *)(param_2 + 8);
    if (dVar10 < dVar4) {
      dVar4 = *(double *)(param_1 + 0x1160);
      *(double *)(param_2 + 8) = dVar4;
      dVar10 = *(double *)(param_1 + 0x1160);
    }
    dVar11 = *(double *)(param_2 + 0x18);
    if (dVar11 < dVar10) {
      dVar11 = *(double *)(param_1 + 0x1160);
      *(double *)(param_2 + 0x18) = dVar11;
    }
    dVar10 = *(double *)(param_1 + 0x1168);
    dVar5 = *(double *)(param_2 + 0x10);
    dVar17 = dVar10;
    if (dVar10 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar10;
      dVar17 = *(double *)(param_1 + 0x1168);
      dVar5 = dVar10;
    }
    dVar10 = *(double *)(param_2 + 0x20);
    if (dVar10 < dVar17) {
      dVar10 = *(double *)(param_1 + 0x1168);
      *(double *)(param_2 + 0x20) = dVar10;
    }
    if (dVar12 < dVar4) {
      *(double *)(param_2 + 8) = dVar12;
      dVar4 = dVar12;
    }
    if (dVar11 < dVar12) {
      *(double *)(param_2 + 0x18) = dVar12;
      dVar11 = dVar12;
    }
    if (dVar7 < dVar5) {
      *(double *)(param_2 + 0x10) = dVar7;
      dVar5 = dVar7;
    }
    if (dVar10 < dVar7) {
      *(double *)(param_2 + 0x20) = dVar7;
      dVar10 = dVar7;
    }
    if (dVar14 < dVar4) {
      *(double *)(param_2 + 8) = dVar14;
    }
    if (dVar11 < dVar14) {
      *(double *)(param_2 + 0x18) = dVar14;
    }
    if (dVar13 < dVar5) {
      *(double *)(param_2 + 0x10) = dVar13;
    }
    if (dVar10 < dVar13) {
      *(double *)(param_2 + 0x20) = dVar13;
    }
    *(double *)(param_1 + 0x1160) = dVar3;
    *(double *)(param_1 + 0x1168) = dVar15;
    if (dVar3 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1160);
      dVar3 = *(double *)(param_1 + 0x1160);
    }
    if (*(double *)(param_2 + 0x18) <= dVar3 && dVar3 != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1160);
    }
    dVar3 = *(double *)(param_1 + 0x1168);
    if (dVar3 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar3;
      dVar3 = *(double *)(param_1 + 0x1168);
    }
    if (*(double *)(param_2 + 0x20) <= dVar3 && dVar3 != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1168);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::number_t, cff2_cs_opset_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t, cff2_path_procs_extents_t>::process_op(unsigned int,
   CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_extents_param_t&) */

void CFF::
     cs_opset_t<CFF::number_t,cff2_cs_opset_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t,cff2_path_procs_extents_t>
     ::process_op(uint param_1,cff2_cs_interp_env_t *param_2,cff2_extents_param_t *param_3)

{
  long lVar1;
  cff2_cs_interp_env_t cVar2;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  cff2_cs_interp_env_t *pcVar11;
  uint uVar12;
  uint uVar13;
  cff2_cs_interp_env_t *pcVar14;
  cff2_cs_interp_env_t *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [12];
  
  if (0x1f < param_1) {
    switch(param_1) {
    case 0xff:
      uVar9 = *(uint *)(param_2 + 0xc);
      uVar12 = *(uint *)(param_2 + 8);
      uVar13 = uVar9 + 4;
      if (uVar12 < uVar13) {
        return;
      }
      if (uVar9 < uVar12) {
        puVar10 = (uint *)((ulong)uVar9 + *(long *)param_2);
      }
      else {
        uVar13 = uVar12 + 5;
        *(uint *)(param_2 + 0xc) = uVar12 + 1;
        puVar10 = (uint *)&_hb_NullPool;
      }
      uVar9 = *puVar10;
      uVar12 = *(uint *)(param_2 + 0x14);
      if (uVar12 < 0x201) {
        pcVar11 = param_2 + (ulong)uVar12 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar12 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      *(double *)pcVar11 =
           (double)(int)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18) * __LC6;
      *(uint *)(param_2 + 0xc) = uVar13;
      return;
    default:
      goto switchD_0010544e_caseD_2;
    case 0x122:
      if (*(int *)(param_2 + 0x14) != 7) {
LAB_001064e0:
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
        goto LAB_001056cc;
      }
      dVar28 = *(double *)(param_2 + 0x1160);
      dVar16 = *(double *)(param_2 + 0x1168);
      dVar25 = *(double *)(param_2 + 0x18) + dVar28;
      dVar30 = *(double *)(param_3 + 8);
      dVar20 = *(double *)(param_3 + 0x10);
      dVar29 = *(double *)(param_2 + 0x20) + dVar25;
      dVar17 = *(double *)(param_3 + 0x18);
      dVar22 = *(double *)(param_3 + 0x20);
      dVar31 = dVar29 + *(double *)(param_2 + 0x30);
      dVar19 = *(double *)(param_2 + 0x28) + dVar16;
      dVar26 = *(double *)(param_2 + 0x38) + dVar31;
      dVar27 = *(double *)(param_2 + 0x40) + dVar26;
      dVar18 = *(double *)(param_2 + 0x48) + dVar27;
      if (*param_3 == (cff2_extents_param_t)0x0) {
        *param_3 = (cff2_extents_param_t)0x1;
        if (dVar28 < dVar30) {
          dVar30 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar30;
          dVar28 = *(double *)(param_2 + 0x1160);
        }
        if (dVar17 < dVar28) {
          dVar17 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar17;
        }
        dVar28 = *(double *)(param_2 + 0x1168);
        dVar32 = dVar28;
        if (dVar28 < dVar20) {
          *(double *)(param_3 + 0x10) = dVar28;
          dVar32 = *(double *)(param_2 + 0x1168);
          dVar20 = dVar28;
        }
        if (dVar22 < dVar32) {
          dVar22 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar22;
        }
      }
      if (dVar25 < dVar30) {
        *(double *)(param_3 + 8) = dVar25;
        dVar30 = dVar25;
      }
      if (dVar17 < dVar25) {
        *(double *)(param_3 + 0x18) = dVar25;
        dVar17 = dVar25;
      }
      if (dVar16 < dVar20) {
        *(double *)(param_3 + 0x10) = dVar16;
        dVar20 = dVar16;
      }
      if (dVar22 < dVar16) {
        *(double *)(param_3 + 0x20) = dVar16;
        dVar22 = dVar16;
      }
      if (dVar29 < dVar30) {
        *(double *)(param_3 + 8) = dVar29;
      }
      if (dVar17 < dVar29) {
        *(double *)(param_3 + 0x18) = dVar29;
      }
      if (dVar19 < dVar20) {
        *(double *)(param_3 + 0x10) = dVar19;
      }
      if (dVar22 < dVar19) {
        *(double *)(param_3 + 0x20) = dVar19;
      }
      *(double *)(param_2 + 0x1160) = dVar31;
      *(double *)(param_2 + 0x1168) = dVar19;
      dVar28 = *(double *)(param_3 + 8);
      if (dVar31 < dVar28) {
        dVar28 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar28;
        dVar31 = *(double *)(param_2 + 0x1160);
      }
      dVar30 = *(double *)(param_3 + 0x18);
      if (dVar30 < dVar31) {
        dVar30 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar30;
      }
      dVar20 = *(double *)(param_2 + 0x1168);
      dVar17 = dVar20;
      dVar22 = *(double *)(param_3 + 0x10);
      if (dVar20 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar20;
        dVar17 = *(double *)(param_2 + 0x1168);
        dVar22 = dVar20;
      }
      dVar20 = *(double *)(param_3 + 0x20);
      if (dVar20 < dVar17) {
        dVar20 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar20;
      }
      if (dVar26 < dVar28) {
        *(double *)(param_3 + 8) = dVar26;
        dVar28 = dVar26;
      }
      if (dVar30 < dVar26) {
        *(double *)(param_3 + 0x18) = dVar26;
        dVar30 = dVar26;
      }
      if (dVar19 < dVar22) {
        *(double *)(param_3 + 0x10) = dVar19;
        dVar22 = dVar19;
      }
      if (dVar20 < dVar19) {
        *(double *)(param_3 + 0x20) = dVar19;
        dVar20 = dVar19;
      }
      if (dVar27 < dVar28) {
        *(double *)(param_3 + 8) = dVar27;
      }
      if (dVar30 < dVar27) {
        *(double *)(param_3 + 0x18) = dVar27;
      }
      if (dVar16 < dVar22) {
        *(double *)(param_3 + 0x10) = dVar16;
      }
      if (dVar20 < dVar16) {
        *(double *)(param_3 + 0x20) = dVar16;
      }
      *(double *)(param_2 + 0x1160) = dVar18;
      *(double *)(param_2 + 0x1168) = dVar16;
      if (dVar18 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar18 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar18 && dVar18 != *(double *)(param_3 + 0x18)) {
LAB_00105ecf:
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
      }
      break;
    case 0x123:
      if (*(int *)(param_2 + 0x14) != 0xd) goto LAB_001064e0;
      dVar31 = *(double *)(param_2 + 0x1160);
      dVar25 = *(double *)(param_2 + 0x18) + dVar31;
      dVar27 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
      dVar28 = *(double *)(param_3 + 0x18);
      dVar16 = *(double *)(param_3 + 0x10);
      dVar26 = dVar25 + *(double *)(param_2 + 0x28);
      dVar29 = dVar27 + *(double *)(param_2 + 0x30);
      dVar18 = *(double *)(param_2 + 0x40);
      dVar17 = dVar26 + *(double *)(param_2 + 0x38);
      dVar32 = *(double *)(param_2 + 0x48) + dVar17;
      dVar23 = *(double *)(param_2 + 0x50) + dVar29 + dVar18;
      dVar21 = dVar32 + *(double *)(param_2 + 0x58);
      dVar24 = dVar23 + *(double *)(param_2 + 0x60);
      dVar19 = *(double *)(param_2 + 0x70);
      dVar22 = dVar21 + *(double *)(param_2 + 0x68);
      dVar30 = *(double *)(param_3 + 8);
      dVar20 = *(double *)(param_3 + 0x20);
      if (*param_3 == (cff2_extents_param_t)0x0) {
        *param_3 = (cff2_extents_param_t)0x1;
        if (dVar31 < dVar30) {
          dVar30 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar30;
          dVar31 = *(double *)(param_2 + 0x1160);
        }
        if (dVar28 < dVar31) {
          dVar28 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar28;
        }
        dVar31 = *(double *)(param_2 + 0x1168);
        dVar33 = dVar31;
        if (dVar31 < dVar16) {
          *(double *)(param_3 + 0x10) = dVar31;
          dVar33 = *(double *)(param_2 + 0x1168);
          dVar16 = dVar31;
        }
        if (dVar20 < dVar33) {
          dVar20 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar20;
        }
      }
      if (dVar25 < dVar30) {
        *(double *)(param_3 + 8) = dVar25;
        dVar30 = dVar25;
      }
      if (dVar28 < dVar25) {
        *(double *)(param_3 + 0x18) = dVar25;
        dVar28 = dVar25;
      }
      if (dVar27 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar27;
        dVar16 = dVar27;
      }
      if (dVar20 < dVar27) {
        *(double *)(param_3 + 0x20) = dVar27;
        dVar20 = dVar27;
      }
      if (dVar26 < dVar30) {
        *(double *)(param_3 + 8) = dVar26;
      }
      if (dVar28 < dVar26) {
        *(double *)(param_3 + 0x18) = dVar26;
      }
      if (dVar29 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar29;
      }
      if (dVar20 < dVar29) {
        *(double *)(param_3 + 0x20) = dVar29;
      }
      *(double *)(param_2 + 0x1160) = dVar17;
      *(double *)(param_2 + 0x1168) = dVar29 + dVar18;
      dVar28 = *(double *)(param_3 + 8);
      if (dVar17 < dVar28) {
        dVar28 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar28;
        dVar17 = *(double *)(param_2 + 0x1160);
      }
      dVar16 = *(double *)(param_3 + 0x18);
      if (dVar16 < dVar17) {
        dVar16 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar16;
      }
      dVar30 = *(double *)(param_2 + 0x1168);
      dVar17 = *(double *)(param_3 + 0x10);
      dVar20 = dVar30;
      if (dVar30 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar30;
        dVar20 = *(double *)(param_2 + 0x1168);
        dVar17 = dVar30;
      }
      dVar30 = *(double *)(param_3 + 0x20);
      if (dVar30 < dVar20) {
        dVar30 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar30;
      }
      if (dVar32 < dVar28) {
        *(double *)(param_3 + 8) = dVar32;
        dVar28 = dVar32;
      }
      if (dVar16 < dVar32) {
        *(double *)(param_3 + 0x18) = dVar32;
        dVar16 = dVar32;
      }
      if (dVar23 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar23;
        dVar17 = dVar23;
      }
      if (dVar30 < dVar23) {
        *(double *)(param_3 + 0x20) = dVar23;
        dVar30 = dVar23;
      }
      if (dVar21 < dVar28) {
        *(double *)(param_3 + 8) = dVar21;
      }
      if (dVar16 < dVar21) {
        *(double *)(param_3 + 0x18) = dVar21;
      }
      if (dVar24 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar24;
      }
      if (dVar30 < dVar24) {
        *(double *)(param_3 + 0x20) = dVar24;
      }
      *(double *)(param_2 + 0x1160) = dVar22;
      *(double *)(param_2 + 0x1168) = dVar24 + dVar19;
      if (dVar22 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar22 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar22 && dVar22 != *(double *)(param_3 + 0x18))
      goto LAB_00105ecf;
      break;
    case 0x124:
      if (*(int *)(param_2 + 0x14) != 9) goto LAB_001064e0;
      dVar28 = *(double *)(param_2 + 0x1160);
      dVar26 = *(double *)(param_2 + 0x18) + dVar28;
      dVar16 = *(double *)(param_3 + 8);
      dVar30 = *(double *)(param_3 + 0x18);
      dVar20 = *(double *)(param_3 + 0x10);
      dVar18 = dVar26 + *(double *)(param_2 + 0x28);
      dVar19 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
      dVar22 = *(double *)(param_2 + 0x38) + dVar18;
      dVar25 = *(double *)(param_2 + 0x30) + dVar19;
      dVar27 = *(double *)(param_2 + 0x40) + dVar22;
      dVar32 = *(double *)(param_2 + 0x50) + dVar25;
      dVar17 = *(double *)(param_3 + 0x20);
      dVar29 = *(double *)(param_2 + 0x48) + dVar27;
      dVar31 = *(double *)(param_2 + 0x58) + dVar29;
      uVar4 = *(undefined8 *)(param_2 + 0x1168);
      if (*param_3 == (cff2_extents_param_t)0x0) {
        *param_3 = (cff2_extents_param_t)0x1;
        if (dVar28 < dVar16) {
          dVar16 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar16;
          dVar28 = *(double *)(param_2 + 0x1160);
        }
        if (dVar30 < dVar28) {
          dVar30 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar30;
        }
        dVar28 = *(double *)(param_2 + 0x1168);
        dVar21 = dVar28;
        if (dVar28 < dVar20) {
          *(double *)(param_3 + 0x10) = dVar28;
          dVar21 = *(double *)(param_2 + 0x1168);
          dVar20 = dVar28;
        }
        if (dVar17 < dVar21) {
          dVar17 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar17;
        }
      }
      if (dVar26 < dVar16) {
        *(double *)(param_3 + 8) = dVar26;
        dVar16 = dVar26;
      }
      if (dVar30 < dVar26) {
        *(double *)(param_3 + 0x18) = dVar26;
        dVar30 = dVar26;
      }
      if (dVar19 < dVar20) {
        *(double *)(param_3 + 0x10) = dVar19;
        dVar20 = dVar19;
      }
      if (dVar17 < dVar19) {
        *(double *)(param_3 + 0x20) = dVar19;
        dVar17 = dVar19;
      }
      if (dVar18 < dVar16) {
        *(double *)(param_3 + 8) = dVar18;
      }
      if (dVar30 < dVar18) {
        *(double *)(param_3 + 0x18) = dVar18;
      }
      if (dVar25 < dVar20) {
        *(double *)(param_3 + 0x10) = dVar25;
      }
      if (dVar17 < dVar25) {
        *(double *)(param_3 + 0x20) = dVar25;
      }
      *(double *)(param_2 + 0x1160) = dVar22;
      *(double *)(param_2 + 0x1168) = dVar25;
      dVar28 = *(double *)(param_3 + 8);
      if (dVar22 < dVar28) {
        dVar28 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar28;
        dVar22 = *(double *)(param_2 + 0x1160);
      }
      dVar16 = *(double *)(param_3 + 0x18);
      if (dVar16 < dVar22) {
        dVar16 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar16;
      }
      dVar30 = *(double *)(param_2 + 0x1168);
      dVar17 = *(double *)(param_3 + 0x10);
      dVar20 = dVar30;
      if (dVar30 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar30;
        dVar20 = *(double *)(param_2 + 0x1168);
        dVar17 = dVar30;
      }
      dVar30 = *(double *)(param_3 + 0x20);
      if (dVar30 < dVar20) {
        dVar30 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar30;
      }
      if (dVar27 < dVar28) {
        *(double *)(param_3 + 8) = dVar27;
        dVar28 = dVar27;
      }
      if (dVar16 < dVar27) {
        *(double *)(param_3 + 0x18) = dVar27;
        dVar16 = dVar27;
      }
      if (dVar25 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar25;
        dVar17 = dVar25;
      }
      if (dVar30 < dVar25) {
        *(double *)(param_3 + 0x20) = dVar25;
        dVar30 = dVar25;
      }
      if (dVar29 < dVar28) {
        *(double *)(param_3 + 8) = dVar29;
      }
      if (dVar16 < dVar29) {
        *(double *)(param_3 + 0x18) = dVar29;
      }
      if (dVar32 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar32;
      }
      if (dVar30 < dVar32) {
        *(double *)(param_3 + 0x20) = dVar32;
      }
      *(double *)(param_2 + 0x1160) = dVar31;
      *(undefined8 *)(param_2 + 0x1168) = uVar4;
      if (dVar31 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar31 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar31 && dVar31 != *(double *)(param_3 + 0x18))
      goto LAB_00105ecf;
      break;
    case 0x125:
      path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
      ::flex1(param_2,param_3);
      *(undefined4 *)(param_2 + 0x14) = 0;
      return;
    }
    dVar28 = *(double *)(param_2 + 0x1168);
    if (dVar28 < *(double *)(param_3 + 0x10)) {
      *(double *)(param_3 + 0x10) = dVar28;
      dVar28 = *(double *)(param_2 + 0x1168);
    }
    if (*(double *)(param_3 + 0x20) <= dVar28 && dVar28 != *(double *)(param_3 + 0x20)) {
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
    }
    goto LAB_001056cc;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    uVar13 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x103c) = *(int *)(param_2 + 0x103c) + (uVar13 >> 1);
    break;
  default:
switchD_0010544e_caseD_2:
    opset_t<CFF::number_t>::process_op(param_1,(interp_env_t *)param_2);
    return;
  case 3:
  case 0x17:
    uVar13 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x1040) = *(int *)(param_2 + 0x1040) + (uVar13 >> 1);
    break;
  case 4:
    uVar13 = *(uint *)(param_2 + 0x14);
    dVar16 = *(double *)(param_2 + 0x1160);
    if (uVar13 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar11 = param_2 + (ulong)uVar13 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar13 - 1;
    }
    dVar28 = *(double *)(param_2 + 0x1168) + *(double *)pcVar11;
    goto LAB_0010567a;
  case 5:
    uVar13 = *(uint *)(param_2 + 0x14);
    if (1 < uVar13) {
      dVar28 = *(double *)(param_2 + 0x1168);
      uVar12 = 1;
      dVar16 = *(double *)(param_2 + 0x1160);
      uVar9 = 0;
      do {
        pcVar11 = param_2 + (ulong)uVar12 * 8 + 0x18;
        if (uVar13 <= uVar12) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)uVar9 * 8 + 0x18;
        if (uVar13 <= uVar9) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar20 = *(double *)pcVar11;
        dVar30 = *(double *)pcVar15 + dVar16;
        if (*param_3 == (cff2_extents_param_t)0x0) {
          *param_3 = (cff2_extents_param_t)0x1;
          if (dVar16 < *(double *)(param_3 + 8)) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
            dVar16 = *(double *)(param_2 + 0x1160);
          }
          if (*(double *)(param_3 + 0x18) <= dVar16 && dVar16 != *(double *)(param_3 + 0x18)) {
            *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
          }
          dVar16 = *(double *)(param_2 + 0x1168);
          if (dVar16 < *(double *)(param_3 + 0x10)) {
            *(double *)(param_3 + 0x10) = dVar16;
            dVar16 = *(double *)(param_2 + 0x1168);
          }
          if (*(double *)(param_3 + 0x20) <= dVar16 && dVar16 != *(double *)(param_3 + 0x20)) {
            *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
          }
        }
        *(double *)(param_2 + 0x1160) = dVar30;
        *(double *)(param_2 + 0x1168) = dVar20 + dVar28;
        if (dVar30 < *(double *)(param_3 + 8)) {
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
          dVar30 = *(double *)(param_2 + 0x1160);
        }
        if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18)) {
          *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
        }
        dVar28 = *(double *)(param_2 + 0x1168);
        if (dVar28 < *(double *)(param_3 + 0x10)) {
          *(double *)(param_3 + 0x10) = dVar28;
          dVar28 = *(double *)(param_2 + 0x1168);
        }
        if (*(double *)(param_3 + 0x20) <= dVar28 && dVar28 != *(double *)(param_3 + 0x20)) {
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
        }
        uVar7 = uVar9 + 4;
        uVar12 = uVar12 + 2;
        dVar16 = dVar30;
        uVar9 = uVar9 + 2;
      } while (uVar7 <= uVar13);
    }
    goto LAB_001056cc;
  case 6:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::hlineto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 7:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::vlineto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 8:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::rrcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 10:
    uVar13 = *(uint *)(param_2 + 0x14);
    if (uVar13 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar11 = param_2 + (ulong)uVar13 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar13 - 1;
    }
    uVar13 = (int)*(double *)pcVar11 + *(int *)(param_2 + 0x1150);
    if (((-1 < (int)uVar13) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 0x1158),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) &&
       (uVar9 = *(uint *)pCVar3,
       uVar13 < (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18)))
    {
      uVar9 = *(uint *)(param_2 + 0x104c);
      if (uVar9 < 10) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        lVar1 = (ulong)uVar9 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar9 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar4;
        *(undefined8 *)(param_2 + lVar1 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar1 + 0x1058) = uVar4;
        *(undefined8 *)(param_2 + lVar1 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar34 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar3,uVar13);
        *(uint *)(param_2 + 0x1034) = uVar13;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar34;
        *(undefined8 *)(param_2 + 0x102c) = 0x200000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        return;
      }
    }
    goto LAB_001064d0;
  case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x104c) == 0) {
      _realloc = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _free = _memset;
      param_2[0x1048] = (cff2_cs_interp_env_t)0x1;
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      uVar13 = *(int *)(param_2 + 0x104c) - 1;
      *(uint *)(param_2 + 0x104c) = uVar13;
      pcVar11 = param_2 + (ulong)uVar13 * 0x18 + 0x1050;
    }
    uVar5 = *(undefined8 *)pcVar11;
    uVar6 = *(undefined8 *)(pcVar11 + 8);
    *(undefined8 *)(param_2 + 0x1020) = uVar5;
    *(undefined8 *)(param_2 + 0x1028) = uVar6;
    uVar4 = *(undefined8 *)(pcVar11 + 0x10);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 8) = uVar6;
    *(undefined8 *)(param_2 + 0x1030) = uVar4;
    break;
  case 0xe:
    param_2[0x1038] = (cff2_cs_interp_env_t)0x1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x13:
  case 0x14:
    if (param_2[0x103a] == (cff2_cs_interp_env_t)0x0) {
      param_2[0x103a] = (cff2_cs_interp_env_t)0x1;
      iVar8 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
      *(int *)(param_2 + 0x1040) = iVar8;
      uVar13 = (uint)(iVar8 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      *(uint *)(param_2 + 0x1044) = uVar13;
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x1044);
    }
    if (uVar13 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(uint *)(param_2 + 0xc) = uVar13 + *(int *)(param_2 + 0xc);
    }
    break;
  case 0x15:
    uVar13 = *(uint *)(param_2 + 0x14);
    dVar28 = *(double *)(param_2 + 0x1160);
    dVar16 = *(double *)(param_2 + 0x1168);
    if (uVar13 == 0) {
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
LAB_00106728:
      pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar13 - 1;
      pcVar11 = param_2 + (ulong)uVar13 * 8 + 0x10;
      if (uVar13 - 1 == 0) goto LAB_00106728;
      *(uint *)(param_2 + 0x14) = uVar13 - 2;
      pcVar15 = param_2 + (ulong)uVar13 * 8 + 8;
    }
    dVar30 = *(double *)pcVar15;
    cVar2 = param_2[0x1039];
    dVar20 = *(double *)pcVar11;
    *param_3 = (cff2_extents_param_t)0x0;
    *(double *)(param_2 + 0x1160) = dVar30 + dVar28;
    *(double *)(param_2 + 0x1168) = dVar20 + dVar16;
    if (cVar2 != (cff2_cs_interp_env_t)0x0) goto LAB_001056cc;
    goto LAB_00105691;
  case 0x16:
    uVar13 = *(uint *)(param_2 + 0x14);
    dVar28 = *(double *)(param_2 + 0x1168);
    if (uVar13 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar11 = param_2 + (ulong)uVar13 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar13 - 1;
    }
    dVar16 = *(double *)(param_2 + 0x1160) + *(double *)pcVar11;
LAB_0010567a:
    cVar2 = param_2[0x1039];
    *param_3 = (cff2_extents_param_t)0x0;
    *(double *)(param_2 + 0x1160) = dVar16;
    *(double *)(param_2 + 0x1168) = dVar28;
    if (cVar2 == (cff2_cs_interp_env_t)0x0) {
LAB_00105691:
      if (param_2[0x103a] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff2_cs_interp_env_t)0x1;
        iVar8 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar8;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar8 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff2_cs_interp_env_t)0x1;
    }
    goto LAB_001056cc;
  case 0x18:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::rcurveline(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x19:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::rlinecurve(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x1a:
    uVar13 = *(uint *)(param_2 + 0x14);
    dVar28 = *(double *)(param_2 + 0x1160);
    uVar12 = 4;
    dVar16 = *(double *)(param_2 + 0x1168);
    uVar9 = uVar13 & 1;
    uVar4 = __hb_NullPool;
    if (uVar9 != 0) {
      dVar28 = dVar28 + *(double *)(param_2 + 0x18);
      uVar12 = 5;
    }
    for (; __hb_NullPool = uVar4, uVar12 <= uVar13; uVar12 = uVar12 + 4) {
      pcVar11 = param_2 + (ulong)uVar9 * 8 + 0x18;
      if (uVar13 <= uVar9) {
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        __hb_CrapPool = uVar4;
      }
      dVar16 = dVar16 + *(double *)pcVar11;
      pcVar11 = param_2 + (ulong)(uVar9 + 2) * 8 + 0x18;
      if (uVar13 <= uVar9 + 2) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar15 = param_2 + (ulong)(uVar9 + 1) * 8 + 0x18;
      if (uVar13 <= uVar9 + 1) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar14 = param_2 + (ulong)(uVar9 + 3) * 8 + 0x18;
      dVar30 = *(double *)pcVar15 + dVar28;
      dVar20 = *(double *)pcVar11 + dVar16;
      if (uVar13 <= uVar9 + 3) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar14 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar17 = *(double *)pcVar14;
      dVar22 = *(double *)(param_3 + 8);
      dVar31 = *(double *)(param_3 + 0x18);
      dVar18 = *(double *)(param_3 + 0x10);
      dVar19 = *(double *)(param_3 + 0x20);
      if (*param_3 == (cff2_extents_param_t)0x0) {
        dVar25 = *(double *)(param_2 + 0x1160);
        *param_3 = (cff2_extents_param_t)0x1;
        dVar26 = dVar25;
        if (dVar25 < dVar22) {
          *(double *)(param_3 + 8) = dVar25;
          dVar26 = *(double *)(param_2 + 0x1160);
          dVar22 = dVar25;
        }
        if (dVar31 < dVar26) {
          dVar31 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar31;
        }
        dVar25 = *(double *)(param_2 + 0x1168);
        dVar26 = dVar25;
        if (dVar25 < dVar18) {
          *(double *)(param_3 + 0x10) = dVar25;
          dVar26 = *(double *)(param_2 + 0x1168);
          dVar18 = dVar25;
        }
        if (dVar19 < dVar26) {
          dVar19 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar19;
        }
      }
      if (dVar28 < dVar22) {
        *(double *)(param_3 + 8) = dVar28;
        dVar22 = dVar28;
      }
      if (dVar31 < dVar28) {
        *(double *)(param_3 + 0x18) = dVar28;
        dVar31 = dVar28;
      }
      if (dVar16 < dVar18) {
        *(double *)(param_3 + 0x10) = dVar16;
        dVar18 = dVar16;
      }
      if (dVar19 < dVar16) {
        *(double *)(param_3 + 0x20) = dVar16;
        dVar19 = dVar16;
      }
      if (dVar30 < dVar22) {
        *(double *)(param_3 + 8) = dVar30;
      }
      if (dVar31 < dVar30) {
        *(double *)(param_3 + 0x18) = dVar30;
      }
      if (dVar20 < dVar18) {
        *(double *)(param_3 + 0x10) = dVar20;
      }
      if (dVar19 < dVar20) {
        *(double *)(param_3 + 0x20) = dVar20;
      }
      *(double *)(param_2 + 0x1160) = dVar30;
      *(double *)(param_2 + 0x1168) = dVar17 + dVar20;
      if (dVar30 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar30 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18)) {
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
      }
      dVar16 = *(double *)(param_2 + 0x1168);
      if (dVar16 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar16;
        dVar16 = *(double *)(param_2 + 0x1168);
      }
      if (*(double *)(param_3 + 0x20) <= dVar16 && dVar16 != *(double *)(param_3 + 0x20)) {
        *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
      }
      uVar9 = uVar12;
      dVar28 = dVar30;
      uVar4 = __hb_NullPool;
    }
    goto LAB_001056cc;
  case 0x1b:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::hhcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x1d:
    uVar13 = *(uint *)(param_2 + 0x14);
    if (uVar13 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar11 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar11 = param_2 + (ulong)uVar13 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar13 - 1;
    }
    uVar13 = (int)*(double *)pcVar11 + *(int *)(param_2 + 0x1140);
    if (((-1 < (int)uVar13) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 0x1148),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) &&
       (uVar9 = *(uint *)pCVar3,
       uVar13 < (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18)))
    {
      uVar9 = *(uint *)(param_2 + 0x104c);
      if (uVar9 < 10) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        lVar1 = (ulong)uVar9 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar9 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar4;
        *(undefined8 *)(param_2 + lVar1 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar1 + 0x1058) = uVar4;
        *(undefined8 *)(param_2 + lVar1 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar34 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar3,uVar13);
        *(uint *)(param_2 + 0x1034) = uVar13;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar34;
        *(undefined8 *)(param_2 + 0x102c) = 0x100000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        return;
      }
    }
LAB_001064d0:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
    break;
  case 0x1e:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::vhcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x1f:
    path_procs_t<cff2_path_procs_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t>
    ::hvcurveto(param_2,param_3);
LAB_001056cc:
    *(undefined4 *)(param_2 + 0x14) = 0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend() */

void __thiscall
CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend(cff2_cs_interp_env_t<CFF::number_t> *this)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  undefined *puVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar9;
  ItemVariationStore *this_00;
  float *pfVar10;
  ulong uVar11;
  uint uVar8;
  
  if (this[0x11a2] != (cff2_cs_interp_env_t<CFF::number_t>)0x0) {
    return;
  }
  puVar9 = (uint *)&_hb_NullPool;
  lVar2 = *(long *)(this + 0x1180);
  if (*(uint *)(this + 0x118c) <
      (uint)(ushort)(*(ushort *)(lVar2 + 8) << 8 | *(ushort *)(lVar2 + 8) >> 8)) {
    puVar9 = (uint *)(lVar2 + 10 + (ulong)*(uint *)(this + 0x118c) * 4);
  }
  uVar3 = *puVar9;
  puVar5 = &_hb_NullPool;
  if (uVar3 != 0) {
    puVar5 = (undefined *)
             (lVar2 + 2 +
             (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    ));
  }
  uVar6 = *(ushort *)(puVar5 + 4) << 8 | *(ushort *)(puVar5 + 4) >> 8;
  *(uint *)(this + 0x1188) = (uint)uVar6;
  if (this[0x11a0] == (cff2_cs_interp_env_t<CFF::number_t>)0x0) goto LAB_00106912;
  uVar3 = *(uint *)(this + 0x1190);
  if ((int)uVar3 < 0) {
LAB_00106a81:
    *(int *)(this + 0xc) = *(int *)(this + 8) + 1;
    goto LAB_00106912;
  }
  uVar1 = *(uint *)(this + 0x1194);
  uVar11 = (ulong)uVar1;
  uVar7 = (uint)uVar6;
  uVar8 = (uint)uVar6;
  if (uVar6 < uVar1) {
    if (uVar3 < uVar1) {
      if (uVar1 < 0x40000000) goto LAB_00106a8f;
LAB_00106a79:
      *(uint *)(this + 0x1190) = ~uVar3;
      goto LAB_00106a81;
    }
    if (uVar1 < uVar3 >> 2) {
LAB_00106a8f:
      pvVar4 = *(void **)(this + 0x1198);
      goto LAB_00106a02;
    }
LAB_001069b5:
    *(uint *)(this + 0x1194) = uVar7;
    uVar3 = *(uint *)(this + 0x1188);
    this_00 = (ItemVariationStore *)(*(long *)(this + 0x1180) + 2);
    if (uVar7 == 0) goto LAB_00106983;
LAB_001069d1:
    pfVar10 = *(float **)(this + 0x1198);
  }
  else {
    if (uVar3 < uVar8) {
      pvVar4 = *(void **)(this + 0x1198);
      uVar11 = (ulong)uVar8;
LAB_00106a02:
      pvVar4 = realloc(pvVar4,uVar11 << 2);
      if (pvVar4 == (void *)0x0) {
        uVar3 = *(uint *)(this + 0x1190);
        if (uVar3 < (uint)uVar11) goto LAB_00106a79;
      }
      else {
        *(void **)(this + 0x1198) = pvVar4;
        *(uint *)(this + 0x1190) = (uint)uVar11;
      }
      uVar11 = (ulong)*(uint *)(this + 0x1194);
LAB_00106a2c:
      if (uVar8 <= (uint)uVar11) goto LAB_001069b5;
      memset((void *)(*(long *)(this + 0x1198) + uVar11 * 4),0,(ulong)((uVar8 - (uint)uVar11) * 4));
      *(uint *)(this + 0x1194) = uVar7;
      uVar3 = *(uint *)(this + 0x1188);
      this_00 = (ItemVariationStore *)(*(long *)(this + 0x1180) + 2);
      goto LAB_001069d1;
    }
    if (uVar3 >> 2 <= uVar8) goto LAB_00106a2c;
    pvVar4 = *(void **)(this + 0x1198);
    if (uVar8 != 0) {
      uVar11 = (ulong)uVar8;
      goto LAB_00106a02;
    }
    free(pvVar4);
    uVar3 = *(uint *)(this + 0x1188);
    *(undefined8 *)(this + 0x1190) = 0;
    *(undefined8 *)(this + 0x1198) = 0;
    this_00 = (ItemVariationStore *)(*(long *)(this + 0x1180) + 2);
LAB_00106983:
    pfVar10 = (float *)&_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
  }
  OT::ItemVariationStore::get_region_scalars
            (this_00,*(uint *)(this + 0x118c),*(int **)(this + 0x1170),*(uint *)(this + 0x1178),
             pfVar10,uVar3);
LAB_00106912:
  this[0x11a2] = (cff2_cs_interp_env_t<CFF::number_t>)0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t>::rcurveline(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
     ::rcurveline(cff2_cs_interp_env_t *param_1,cff2_path_param_t *param_2)

{
  cff2_cs_interp_env_t *pcVar1;
  uint uVar2;
  cff2_cs_interp_env_t *pcVar3;
  ulong uVar4;
  cff2_cs_interp_env_t *pcVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < uVar2) {
    uVar7 = uVar2 - 2;
    uVar6 = 6;
    do {
      if (uVar6 - 5 < uVar2) {
        uVar4 = (ulong)(uVar6 - 4);
        pcVar1 = param_1 + uVar4 * 8 + 0x10;
LAB_00106b4e:
        pcVar3 = param_1 + (ulong)(uVar6 - 5) * 8 + 0x10;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar1 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        if (uVar6 - 6 < uVar2) {
          uVar4 = (ulong)(uVar6 - 4);
          goto LAB_00106b4e;
        }
        pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        uVar4 = (ulong)(uVar6 - 4);
      }
      local_78 = *(double *)pcVar3 + *(double *)(param_1 + 0x1160);
      dStack_70 = *(double *)pcVar1 + *(double *)(param_1 + 0x1168);
      pcVar1 = param_1 + (ulong)(uVar6 - 3) * 8 + 0x18;
      if (uVar2 <= uVar6 - 3) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar1 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar3 = param_1 + uVar4 * 8 + 0x18;
      if (uVar2 <= (uint)uVar4) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar5 = param_1 + (ulong)(uVar6 - 1) * 8 + 0x18;
      local_68 = *(double *)pcVar3 + local_78;
      dStack_60 = *(double *)pcVar1 + dStack_70;
      if (uVar2 <= uVar6 - 1) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar1 = param_1 + (ulong)(uVar6 - 2) * 8 + 0x18;
      if (uVar2 <= uVar6 - 2) {
        __hb_CrapPool = __hb_NullPool;
        param_1[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar1 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
      local_58 = local_68 + *(double *)pcVar1;
      dStack_50 = dStack_60 + *(double *)pcVar5;
      cff2_path_param_t::cubic_to
                (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
      *(double *)(param_1 + 0x1160) = local_58;
      *(double *)(param_1 + 0x1168) = dStack_50;
      if (uVar7 < uVar6 + 6) goto code_r0x00106c0f;
      uVar2 = *(uint *)(param_1 + 0x14);
      uVar6 = uVar6 + 6;
    } while( true );
  }
  goto LAB_00106c5e;
code_r0x00106c0f:
  if (uVar6 + 1 < *(uint *)(param_1 + 0x14)) {
    pcVar1 = param_1 + (ulong)(uVar6 + 2) * 8 + 0x10;
LAB_00106c2a:
    pcVar3 = param_1 + (ulong)(uVar6 + 1) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    if (uVar6 < *(uint *)(param_1 + 0x14)) {
      pcVar1 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      goto LAB_00106c2a;
    }
    pcVar1 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  local_58 = *(double *)pcVar3 + local_58;
  dStack_50 = *(double *)pcVar1 + dStack_50;
  cff2_path_param_t::line_to(*(point_t **)param_2);
  *(double *)(param_1 + 0x1160) = local_58;
  *(double *)(param_1 + 0x1168) = dStack_50;
LAB_00106c5e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t>::rlinecurve(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
     ::rlinecurve(cff2_cs_interp_env_t *param_1,cff2_path_param_t *param_2)

{
  uint uVar1;
  cff2_cs_interp_env_t *pcVar2;
  cff2_cs_interp_env_t *pcVar3;
  cff2_cs_interp_env_t *pcVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 < 8) goto LAB_00106f1b;
  uVar6 = 0;
  pcVar4 = param_1 + 0x18;
  uVar5 = uVar1 - 8 & 0xfffffffe;
  while( true ) {
    pcVar3 = pcVar4 + 8;
    pcVar2 = pcVar4;
    if (uVar1 <= uVar6 + 1) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      if (uVar1 <= uVar6) {
        pcVar2 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      }
    }
    pcVar4 = pcVar4 + 0x10;
    local_58 = *(double *)pcVar2 + *(double *)(param_1 + 0x1160);
    dStack_50 = *(double *)(param_1 + 0x1168) + *(double *)pcVar3;
    cff2_path_param_t::line_to(*(point_t **)param_2);
    *(double *)(param_1 + 0x1160) = local_58;
    *(double *)(param_1 + 0x1168) = dStack_50;
    if (uVar6 == uVar5) break;
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar6 = uVar6 + 2;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar5 + 3 < uVar1) {
    pcVar4 = param_1 + (ulong)(uVar5 + 4) * 8 + 0x10;
LAB_00106e6c:
    pcVar3 = param_1 + (ulong)(uVar5 + 3) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    if (uVar5 + 2 < uVar1) {
      pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      goto LAB_00106e6c;
    }
    pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  local_78 = *(double *)pcVar3 + local_58;
  dStack_70 = *(double *)pcVar4 + dStack_50;
  if (uVar5 + 5 < uVar1) {
    pcVar4 = param_1 + (ulong)(uVar5 + 6) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar3 = param_1 + (ulong)(uVar5 + 5) * 8 + 0x10;
  if (uVar1 <= uVar5 + 4) {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  local_68 = *(double *)pcVar3 + local_78;
  dStack_60 = *(double *)pcVar4 + dStack_70;
  if (uVar5 + 7 < uVar1) {
    pcVar4 = param_1 + (ulong)(uVar5 + 8) * 8 + 0x10;
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar4 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  pcVar3 = param_1 + (ulong)(uVar5 + 7) * 8 + 0x10;
  if (uVar1 <= uVar5 + 6) {
    __hb_CrapPool = __hb_NullPool;
    param_1[0x10] = (cff2_cs_interp_env_t)0x1;
    pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
  }
  local_58 = local_68 + *(double *)pcVar3;
  dStack_50 = dStack_60 + *(double *)pcVar4;
  cff2_path_param_t::cubic_to(*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
  *(double *)(param_1 + 0x1160) = local_58;
  *(double *)(param_1 + 0x1168) = dStack_50;
LAB_00106f1b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t>::vhcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
     ::vhcurveto(cff2_cs_interp_env_t *param_1,cff2_path_param_t *param_2)

{
  int iVar1;
  ulong uVar2;
  cff2_cs_interp_env_t *pcVar3;
  uint uVar4;
  uint uVar5;
  cff2_cs_interp_env_t *pcVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (7 < uVar5) {
      uVar7 = 8;
      do {
        uVar4 = uVar7 - 8;
        local_a8._0_8_ = *(undefined8 *)(param_1 + 0x1160);
        pcVar3 = param_1 + (ulong)uVar4 * 8 + 0x18;
        if (uVar5 <= uVar4) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_a8._8_8_ = *(double *)(param_1 + 0x1168) + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 6) * 8 + 0x18;
        if (uVar5 <= uVar7 - 6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(uVar7 - 7) * 8 + 0x18;
        if (uVar5 <= uVar7 - 7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_98._0_8_ = (double)local_a8._0_8_ + *(double *)pcVar6;
        dVar10 = (double)local_a8._8_8_ + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 5) * 8 + 0x18;
        if (uVar5 <= uVar7 - 5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar9 = (double)local_98._0_8_ + *(double *)pcVar3;
        local_88 = dVar9;
        dStack_80 = dVar10;
        local_98._8_8_ = dVar10;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)local_a8);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(uVar7 - 4) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_88;
        *(double *)(param_1 + 0x1168) = dStack_80;
        if (uVar5 <= uVar7 - 4) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_a8._0_8_ = dVar9 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 2) * 8 + 0x18;
        local_a8._8_8_ = dStack_80;
        if (uVar5 <= uVar7 - 2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(uVar7 - 3) * 8 + 0x18;
        if (uVar5 <= uVar7 - 3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_88 = (double)local_a8._0_8_ + *(double *)pcVar6;
        dVar9 = *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 1) * 8 + 0x18;
        local_98._8_8_ = dVar10 + dVar9;
        local_98._0_8_ = local_88;
        if (uVar5 <= uVar7 - 1) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_80 = dVar10 + dVar9 + *(double *)pcVar3;
        if ((uVar5 - uVar4 < 0x10) && ((uVar5 & 1) != 0)) {
          pcVar3 = param_1 + (ulong)uVar7 * 8 + 0x18;
          if (uVar5 <= uVar7) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
          }
          local_88 = local_88 + *(double *)pcVar3;
        }
        uVar7 = uVar7 + 8;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)local_a8);
        uVar5 = *(uint *)(param_1 + 0x14);
        *(double *)(param_1 + 0x1160) = local_88;
        *(double *)(param_1 + 0x1168) = dStack_80;
      } while (uVar7 <= uVar5);
    }
  }
  else {
    local_78 = *(double *)(param_1 + 0x1160);
    dStack_70 = *(double *)(param_1 + 0x1168) + *(double *)(param_1 + 0x18);
    dStack_50 = dStack_70 + *(double *)(param_1 + 0x28);
    local_68 = local_78 + *(double *)(param_1 + 0x20);
    local_58 = local_68 + *(double *)(param_1 + 0x30);
    if (uVar5 < 0xc) {
      uVar8 = 4;
    }
    else {
      uVar2 = 0xc;
      do {
        uVar8 = uVar2;
        iVar1 = (int)uVar8;
        dStack_60 = dStack_50;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(iVar1 - 8U) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_58;
        *(double *)(param_1 + 0x1168) = dStack_50;
        dStack_70 = dStack_50;
        if (uVar5 <= iVar1 - 8U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = local_58 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 6U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 6U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(iVar1 - 7U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 7U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar10 = local_78 + *(double *)pcVar6;
        dStack_60 = dStack_50 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 5U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 5U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar9 = dStack_60 + *(double *)pcVar3;
        local_68 = dVar10;
        local_58 = dVar10;
        dStack_50 = dVar9;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(iVar1 - 4U) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_58;
        *(double *)(param_1 + 0x1168) = dStack_50;
        local_78 = local_58;
        if (uVar5 <= iVar1 - 4U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_70 = dVar9 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 2U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(iVar1 - 3U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 3U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = dVar10 + *(double *)pcVar6;
        dStack_50 = dStack_70 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 1U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_68 + *(double *)pcVar3;
        uVar2 = (ulong)(iVar1 + 8U);
      } while (iVar1 + 8U <= uVar5);
    }
    dStack_60 = dStack_50;
    if ((uint)uVar8 < uVar5) {
      dStack_50 = dStack_50 + *(double *)(param_1 + uVar8 * 8 + 0x18);
    }
    cff2_path_param_t::cubic_to
              (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
    *(double *)(param_1 + 0x1160) = local_58;
    *(double *)(param_1 + 0x1168) = dStack_50;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::path_procs_t<cff2_path_procs_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t>::hvcurveto(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
     ::hvcurveto(cff2_cs_interp_env_t *param_1,cff2_path_param_t *param_2)

{
  int iVar1;
  ulong uVar2;
  cff2_cs_interp_env_t *pcVar3;
  uint uVar4;
  uint uVar5;
  cff2_cs_interp_env_t *pcVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (7 < uVar5) {
      uVar7 = 8;
      do {
        uVar4 = uVar7 - 8;
        local_a8._8_8_ = *(undefined8 *)(param_1 + 0x1168);
        pcVar3 = param_1 + (ulong)uVar4 * 8 + 0x18;
        if (uVar5 <= uVar4) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_a8._0_8_ = *(double *)(param_1 + 0x1160) + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 6) * 8 + 0x18;
        if (uVar5 <= uVar7 - 6) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(uVar7 - 7) * 8 + 0x18;
        if (uVar5 <= uVar7 - 7) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar10 = (double)local_a8._0_8_ + *(double *)pcVar6;
        local_98._8_8_ = (double)local_a8._8_8_ + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 5) * 8 + 0x18;
        if (uVar5 <= uVar7 - 5) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar9 = (double)local_98._8_8_ + *(double *)pcVar3;
        local_88 = dVar10;
        dStack_80 = dVar9;
        local_98._0_8_ = dVar10;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)local_a8);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(uVar7 - 4) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_88;
        *(double *)(param_1 + 0x1168) = dStack_80;
        if (uVar5 <= uVar7 - 4) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_a8._8_8_ = dVar9 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 2) * 8 + 0x18;
        local_a8._0_8_ = local_88;
        if (uVar5 <= uVar7 - 2) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(uVar7 - 3) * 8 + 0x18;
        if (uVar5 <= uVar7 - 3) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar9 = *(double *)pcVar6;
        dStack_80 = (double)local_a8._8_8_ + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(uVar7 - 1) * 8 + 0x18;
        local_98._8_8_ = dStack_80;
        local_98._0_8_ = dVar10 + dVar9;
        if (uVar5 <= uVar7 - 1) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_88 = dVar10 + dVar9 + *(double *)pcVar3;
        if ((uVar5 - uVar4 < 0x10) && ((uVar5 & 1) != 0)) {
          pcVar3 = param_1 + (ulong)uVar7 * 8 + 0x18;
          if (uVar5 <= uVar7) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
          }
          dStack_80 = dStack_80 + *(double *)pcVar3;
        }
        uVar7 = uVar7 + 8;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)local_a8);
        uVar5 = *(uint *)(param_1 + 0x14);
        *(double *)(param_1 + 0x1160) = local_88;
        *(double *)(param_1 + 0x1168) = dStack_80;
      } while (uVar7 <= uVar5);
    }
  }
  else {
    dStack_70 = *(double *)(param_1 + 0x1168);
    local_78 = *(double *)(param_1 + 0x1160) + *(double *)(param_1 + 0x18);
    local_58 = local_78 + *(double *)(param_1 + 0x20);
    dStack_60 = dStack_70 + *(double *)(param_1 + 0x28);
    dStack_50 = dStack_60 + *(double *)(param_1 + 0x30);
    if (uVar5 < 0xc) {
      uVar8 = 4;
    }
    else {
      uVar2 = 0xc;
      do {
        uVar8 = uVar2;
        iVar1 = (int)uVar8;
        local_68 = local_58;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(iVar1 - 8U) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_58;
        *(double *)(param_1 + 0x1168) = dStack_50;
        local_78 = local_58;
        if (uVar5 <= iVar1 - 8U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_70 = dStack_50 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 6U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 6U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(iVar1 - 7U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 7U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = local_58 + *(double *)pcVar6;
        dVar10 = dStack_70 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 5U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 5U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar9 = local_68 + *(double *)pcVar3;
        dStack_60 = dVar10;
        local_58 = dVar9;
        dStack_50 = dVar10;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
        uVar5 = *(uint *)(param_1 + 0x14);
        pcVar3 = param_1 + (ulong)(iVar1 - 4U) * 8 + 0x18;
        *(double *)(param_1 + 0x1160) = local_58;
        *(double *)(param_1 + 0x1168) = dStack_50;
        dStack_70 = dStack_50;
        if (uVar5 <= iVar1 - 4U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = dVar9 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 2U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar6 = param_1 + (ulong)(iVar1 - 3U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 3U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_78 + *(double *)pcVar6;
        dStack_60 = dVar10 + *(double *)pcVar3;
        pcVar3 = param_1 + (ulong)(iVar1 - 1U) * 8 + 0x18;
        if (uVar5 <= iVar1 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_1[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar3 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = dStack_60 + *(double *)pcVar3;
        uVar2 = (ulong)(iVar1 + 8U);
      } while (iVar1 + 8U <= uVar5);
    }
    local_68 = local_58;
    if ((uint)uVar8 < uVar5) {
      local_58 = local_58 + *(double *)(param_1 + uVar8 * 8 + 0x18);
    }
    cff2_path_param_t::cubic_to
              (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_78);
    *(double *)(param_1 + 0x1160) = local_58;
    *(double *)(param_1 + 0x1168) = dStack_50;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CFF::path_procs_t<cff2_path_procs_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t>::flex1(CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
     ::flex1(cff2_cs_interp_env_t *param_1,cff2_path_param_t *param_2)

{
  point_t *ppVar1;
  point_t *ppVar2;
  double dVar3;
  cff2_cs_interp_env_t *pcVar4;
  cff2_cs_interp_env_t *pcVar5;
  long in_FS_OFFSET;
  double dVar6;
  double dVar7;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x14) == 0xb) {
    pcVar5 = param_1 + 0x18;
    dVar6 = 0.0;
    dVar7 = 0.0;
    do {
      dVar3 = *(double *)pcVar5;
      pcVar4 = pcVar5 + 8;
      pcVar5 = pcVar5 + 0x10;
      dVar6 = dVar6 + dVar3;
      dVar7 = dVar7 + *(double *)pcVar4;
    } while (param_1 + 0x68 != pcVar5);
    local_88 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1160);
    dStack_80 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x1168);
    local_78 = local_88 + *(double *)(param_1 + 0x28);
    dStack_70 = dStack_80 + *(double *)(param_1 + 0x30);
    local_68 = local_78 + *(double *)(param_1 + 0x38);
    dStack_60 = dStack_70 + *(double *)(param_1 + 0x40);
    local_58 = local_68 + *(double *)(param_1 + 0x48);
    dStack_50 = dStack_60 + *(double *)(param_1 + 0x50);
    local_48 = local_58 + *(double *)(param_1 + 0x58);
    dStack_40 = dStack_50 + *(double *)(param_1 + 0x60);
    if ((double)((ulong)dVar7 & _LC5) < (double)((ulong)dVar6 & _LC5)) {
      local_38 = local_48 + *(double *)(param_1 + 0x68);
      dStack_30 = *(double *)(param_1 + 0x1168);
    }
    else {
      local_38 = *(double *)(param_1 + 0x1160);
      dStack_30 = dStack_40 + *(double *)(param_1 + 0x68);
    }
    cff2_path_param_t::cubic_to
              (*(point_t **)param_2,*(point_t **)(param_2 + 8),(point_t *)&local_88);
    ppVar1 = *(point_t **)(param_2 + 8);
    ppVar2 = *(point_t **)param_2;
    *(double *)(param_1 + 0x1160) = local_68;
    *(double *)(param_1 + 0x1168) = dStack_60;
    cff2_path_param_t::cubic_to(ppVar2,ppVar1,(point_t *)&local_58);
    *(double *)(param_1 + 0x1160) = local_38;
    *(double *)(param_1 + 0x1168) = dStack_30;
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::number_t, cff2_cs_opset_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t, cff2_path_procs_path_t>::process_op(unsigned int,
   CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

void CFF::
     cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>
     ::process_op(uint param_1,cff2_cs_interp_env_t *param_2,cff2_path_param_t *param_3)

{
  uint uVar1;
  long lVar2;
  cff2_cs_interp_env_t cVar3;
  undefined8 uVar4;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar5;
  point_t *ppVar6;
  point_t *ppVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  cff2_cs_interp_env_t *pcVar13;
  uint uVar14;
  cff2_cs_interp_env_t *pcVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [12];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1f < param_1) {
    switch(param_1) {
    case 0xff:
      uVar14 = *(uint *)(param_2 + 0xc);
      uVar17 = *(uint *)(param_2 + 8);
      uVar18 = uVar14 + 4;
      if (uVar18 <= uVar17) {
        if (uVar14 < uVar17) {
          puVar12 = (uint *)((ulong)uVar14 + *(long *)param_2);
        }
        else {
          uVar18 = uVar17 + 5;
          *(uint *)(param_2 + 0xc) = uVar17 + 1;
          puVar12 = (uint *)&_hb_NullPool;
        }
        uVar14 = *puVar12;
        uVar17 = *(uint *)(param_2 + 0x14);
        if (uVar17 < 0x201) {
          pcVar13 = param_2 + (ulong)uVar17 * 8 + 0x18;
          *(uint *)(param_2 + 0x14) = uVar17 + 1;
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        *(double *)pcVar13 =
             (double)(int)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                          uVar14 << 0x18) * __LC6;
        *(uint *)(param_2 + 0xc) = uVar18;
      }
      goto LAB_001080c8;
    default:
      goto switchD_00108046_caseD_2;
    case 0x122:
      if (*(int *)(param_2 + 0x14) == 7) {
        dStack_a0 = *(double *)(param_2 + 0x1168);
        local_a8 = *(double *)(param_2 + 0x1160) + *(double *)(param_2 + 0x18);
        local_98 = local_a8 + *(double *)(param_2 + 0x20);
        dStack_90 = dStack_a0 + *(double *)(param_2 + 0x28);
        local_88 = local_98 + *(double *)(param_2 + 0x30);
        local_78 = local_88 + *(double *)(param_2 + 0x38);
        local_68 = local_78 + *(double *)(param_2 + 0x40);
        local_58 = local_68 + *(double *)(param_2 + 0x48);
        dStack_80 = dStack_90;
        dStack_70 = dStack_90;
        dStack_60 = dStack_a0;
        dStack_50 = dStack_a0;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_a8);
        ppVar6 = *(point_t **)(param_3 + 8);
        ppVar7 = *(point_t **)param_3;
        *(double *)(param_2 + 0x1160) = local_88;
        *(double *)(param_2 + 0x1168) = dStack_80;
        cff2_path_param_t::cubic_to(ppVar7,ppVar6,(point_t *)&local_78);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
      }
      else {
LAB_001090e0:
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
      }
      break;
    case 0x123:
      if (*(int *)(param_2 + 0x14) != 0xd) goto LAB_001090e0;
      local_a8 = *(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x1160);
      dStack_a0 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
      local_98 = local_a8 + *(double *)(param_2 + 0x28);
      dStack_90 = dStack_a0 + *(double *)(param_2 + 0x30);
      local_88 = local_98 + *(double *)(param_2 + 0x38);
      dStack_80 = dStack_90 + *(double *)(param_2 + 0x40);
      local_78 = local_88 + *(double *)(param_2 + 0x48);
      dStack_70 = dStack_80 + *(double *)(param_2 + 0x50);
      local_68 = local_78 + *(double *)(param_2 + 0x58);
      dStack_60 = dStack_70 + *(double *)(param_2 + 0x60);
      local_58 = local_68 + *(double *)(param_2 + 0x68);
      dStack_50 = dStack_60 + *(double *)(param_2 + 0x70);
      cff2_path_param_t::cubic_to
                (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_a8);
      ppVar6 = *(point_t **)(param_3 + 8);
      ppVar7 = *(point_t **)param_3;
      *(double *)(param_2 + 0x1160) = local_88;
      *(double *)(param_2 + 0x1168) = dStack_80;
      cff2_path_param_t::cubic_to(ppVar7,ppVar6,(point_t *)&local_78);
      *(double *)(param_2 + 0x1160) = local_58;
      *(double *)(param_2 + 0x1168) = dStack_50;
      break;
    case 0x124:
      if (*(int *)(param_2 + 0x14) != 9) goto LAB_001090e0;
      local_a8 = *(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x1160);
      dStack_a0 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
      local_98 = *(double *)(param_2 + 0x28) + local_a8;
      dStack_90 = *(double *)(param_2 + 0x30) + dStack_a0;
      local_88 = local_98 + *(double *)(param_2 + 0x38);
      local_78 = local_88 + *(double *)(param_2 + 0x40);
      local_68 = local_78 + *(double *)(param_2 + 0x48);
      dStack_60 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168) +
                  *(double *)(param_2 + 0x30) + *(double *)(param_2 + 0x50);
      local_58 = local_68 + *(double *)(param_2 + 0x58);
      dStack_50 = *(double *)(param_2 + 0x1168);
      dStack_80 = dStack_90;
      dStack_70 = dStack_90;
      cff2_path_param_t::cubic_to
                (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_a8);
      ppVar6 = *(point_t **)(param_3 + 8);
      ppVar7 = *(point_t **)param_3;
      *(double *)(param_2 + 0x1160) = local_88;
      *(double *)(param_2 + 0x1168) = dStack_80;
      cff2_path_param_t::cubic_to(ppVar7,ppVar6,(point_t *)&local_78);
      *(double *)(param_2 + 0x1160) = local_58;
      *(double *)(param_2 + 0x1168) = dStack_50;
      break;
    case 0x125:
      path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
      ::flex1(param_2,param_3);
      *(undefined4 *)(param_2 + 0x14) = 0;
      goto LAB_001080c8;
    }
    goto LAB_00108240;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    uVar14 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x103c) = *(int *)(param_2 + 0x103c) + (uVar14 >> 1);
    break;
  default:
switchD_00108046_caseD_2:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      opset_t<CFF::number_t>::process_op(param_1,(interp_env_t *)param_2);
      return;
    }
    goto LAB_00109209;
  case 3:
  case 0x17:
    uVar14 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x1040) = *(int *)(param_2 + 0x1040) + (uVar14 >> 1);
    break;
  case 4:
    local_58 = *(double *)(param_2 + 0x1160);
    uVar14 = *(uint *)(param_2 + 0x14);
    if (uVar14 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar13 = param_2 + (ulong)uVar14 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar14 - 1;
    }
    dStack_50 = *(double *)(param_2 + 0x1168) + *(double *)pcVar13;
    cff2_path_param_t::move_to(*(point_t **)param_3);
    cVar3 = param_2[0x1039];
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
    goto joined_r0x00108ae9;
  case 5:
    uVar14 = *(uint *)(param_2 + 0x14);
    uVar17 = 0;
    if (1 < uVar14) {
      do {
        pcVar13 = param_2 + (ulong)(uVar17 + 1) * 8 + 0x18;
        if (uVar14 <= uVar17 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)uVar17 * 8 + 0x18;
        if (uVar14 <= uVar17) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = *(double *)pcVar15 + *(double *)(param_2 + 0x1160);
        dStack_50 = *(double *)pcVar13 + *(double *)(param_2 + 0x1168);
        cff2_path_param_t::line_to(*(point_t **)param_3);
        uVar14 = *(uint *)(param_2 + 0x14);
        uVar18 = uVar17 + 4;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar17 = uVar17 + 2;
      } while (uVar18 <= uVar14);
    }
    goto LAB_00108240;
  case 6:
    uVar14 = *(uint *)(param_2 + 0x14);
    uVar10 = 2;
    if (uVar14 < 2) {
      uVar16 = 0;
    }
    else {
      do {
        uVar16 = uVar10;
        iVar11 = (int)uVar16;
        dStack_50 = *(double *)(param_2 + 0x1168);
        pcVar13 = param_2 + (ulong)(iVar11 - 2U) * 8 + 0x18;
        if (uVar14 <= iVar11 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = *(double *)(param_2 + 0x1160) + *(double *)pcVar13;
        cff2_path_param_t::line_to(*(point_t **)param_3);
        pcVar13 = param_2 + (ulong)(iVar11 - 1U) * 8 + 0x18;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        if (*(uint *)(param_2 + 0x14) <= iVar11 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = dStack_50 + *(double *)pcVar13;
        cff2_path_param_t::line_to(*(point_t **)param_3);
        uVar14 = *(uint *)(param_2 + 0x14);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar10 = (ulong)(iVar11 + 2U);
      } while (iVar11 + 2U <= uVar14);
    }
    if ((uint)uVar16 < uVar14) {
      dStack_50 = *(double *)(param_2 + 0x1168);
      local_58 = *(double *)(param_2 + 0x1160) + *(double *)(param_2 + uVar16 * 8 + 0x18);
LAB_0010851b:
      cff2_path_param_t::line_to(*(point_t **)param_3);
      *(double *)(param_2 + 0x1160) = local_58;
      *(double *)(param_2 + 0x1168) = dStack_50;
    }
    goto LAB_00108240;
  case 7:
    uVar14 = *(uint *)(param_2 + 0x14);
    uVar10 = 2;
    if (uVar14 < 2) {
      uVar16 = 0;
    }
    else {
      do {
        uVar16 = uVar10;
        iVar11 = (int)uVar16;
        local_58 = *(double *)(param_2 + 0x1160);
        pcVar13 = param_2 + (ulong)(iVar11 - 2U) * 8 + 0x18;
        if (uVar14 <= iVar11 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = *(double *)(param_2 + 0x1168) + *(double *)pcVar13;
        cff2_path_param_t::line_to(*(point_t **)param_3);
        pcVar13 = param_2 + (ulong)(iVar11 - 1U) * 8 + 0x18;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        if (*(uint *)(param_2 + 0x14) <= iVar11 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_58 + *(double *)pcVar13;
        cff2_path_param_t::line_to(*(point_t **)param_3);
        uVar14 = *(uint *)(param_2 + 0x14);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar10 = (ulong)(iVar11 + 2U);
      } while (iVar11 + 2U <= uVar14);
    }
    if ((uint)uVar16 < uVar14) {
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168) + *(double *)(param_2 + uVar16 * 8 + 0x18);
      goto LAB_0010851b;
    }
    goto LAB_00108240;
  case 8:
    uVar14 = *(uint *)(param_2 + 0x14);
    if (5 < uVar14) {
      uVar17 = 0;
      do {
        pcVar13 = param_2 + (ulong)(uVar17 + 1) * 8 + 0x18;
        if (uVar14 <= uVar17 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)uVar17 * 8 + 0x18;
        if (uVar14 <= uVar17) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = *(double *)pcVar15 + *(double *)(param_2 + 0x1160);
        dStack_70 = *(double *)pcVar13 + *(double *)(param_2 + 0x1168);
        pcVar13 = param_2 + (ulong)(uVar17 + 3) * 8 + 0x18;
        if (uVar14 <= uVar17 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)(uVar17 + 2) * 8 + 0x18;
        if (uVar14 <= uVar17 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = *(double *)pcVar15 + local_78;
        dStack_60 = *(double *)pcVar13 + dStack_70;
        pcVar13 = param_2 + (ulong)(uVar17 + 5) * 8 + 0x18;
        if (uVar14 <= uVar17 + 5) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)(uVar17 + 4) * 8 + 0x18;
        if (uVar14 <= uVar17 + 4) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_68 + *(double *)pcVar15;
        dStack_50 = dStack_60 + *(double *)pcVar13;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_78);
        uVar14 = *(uint *)(param_2 + 0x14);
        uVar18 = uVar17 + 0xc;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar17 = uVar17 + 6;
      } while (uVar18 <= uVar14);
    }
    goto LAB_00108240;
  case 10:
    uVar14 = *(uint *)(param_2 + 0x14);
    if (uVar14 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar13 = param_2 + (ulong)uVar14 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar14 - 1;
    }
    uVar14 = (int)*(double *)pcVar13 + *(int *)(param_2 + 0x1150);
    if (((-1 < (int)uVar14) &&
        (pCVar5 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 0x1158),
        pCVar5 != (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) &&
       (uVar17 = *(uint *)pCVar5,
       uVar14 < (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18
                ))) {
      uVar17 = *(uint *)(param_2 + 0x104c);
      if (uVar17 < 10) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        lVar2 = (ulong)uVar17 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar17 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar4;
        *(undefined8 *)(param_2 + lVar2 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar2 + 0x1058) = uVar4;
        *(undefined8 *)(param_2 + lVar2 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar19 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar5,uVar14);
        *(uint *)(param_2 + 0x1034) = uVar14;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar19;
        *(undefined8 *)(param_2 + 0x102c) = 0x200000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        break;
      }
    }
    goto LAB_001090d0;
  case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x104c) == 0) {
      _realloc = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _free = _memset;
      param_2[0x1048] = (cff2_cs_interp_env_t)0x1;
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      uVar14 = *(int *)(param_2 + 0x104c) - 1;
      *(uint *)(param_2 + 0x104c) = uVar14;
      pcVar13 = param_2 + (ulong)uVar14 * 0x18 + 0x1050;
    }
    uVar8 = *(undefined8 *)pcVar13;
    uVar9 = *(undefined8 *)(pcVar13 + 8);
    *(undefined8 *)(param_2 + 0x1020) = uVar8;
    *(undefined8 *)(param_2 + 0x1028) = uVar9;
    uVar4 = *(undefined8 *)(pcVar13 + 0x10);
    *(undefined8 *)param_2 = uVar8;
    *(undefined8 *)(param_2 + 8) = uVar9;
    *(undefined8 *)(param_2 + 0x1030) = uVar4;
    break;
  case 0xe:
    param_2[0x1038] = (cff2_cs_interp_env_t)0x1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x13:
  case 0x14:
    if (param_2[0x103a] == (cff2_cs_interp_env_t)0x0) {
      param_2[0x103a] = (cff2_cs_interp_env_t)0x1;
      iVar11 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
      *(int *)(param_2 + 0x1040) = iVar11;
      uVar14 = (uint)(iVar11 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      *(uint *)(param_2 + 0x1044) = uVar14;
    }
    else {
      uVar14 = *(uint *)(param_2 + 0x1044);
    }
    if (uVar14 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(uint *)(param_2 + 0xc) = uVar14 + *(int *)(param_2 + 0xc);
    }
    break;
  case 0x15:
    uVar14 = *(uint *)(param_2 + 0x14);
    if (uVar14 == 0) {
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
LAB_0010912a:
      pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar14 - 1;
      pcVar13 = param_2 + (ulong)uVar14 * 8 + 0x10;
      if (uVar14 - 1 == 0) goto LAB_0010912a;
      *(uint *)(param_2 + 0x14) = uVar14 - 2;
      pcVar15 = param_2 + (ulong)uVar14 * 8 + 8;
    }
    local_58 = *(double *)pcVar15 + *(double *)(param_2 + 0x1160);
    dStack_50 = *(double *)pcVar13 + *(double *)(param_2 + 0x1168);
    cff2_path_param_t::move_to(*(point_t **)param_3);
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
    if (param_2[0x1039] != (cff2_cs_interp_env_t)0x0) goto LAB_00108240;
    goto LAB_00108637;
  case 0x16:
    dStack_50 = *(double *)(param_2 + 0x1168);
    uVar14 = *(uint *)(param_2 + 0x14);
    if (uVar14 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar13 = param_2 + (ulong)uVar14 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar14 - 1;
    }
    local_58 = *(double *)(param_2 + 0x1160) + *(double *)pcVar13;
    cff2_path_param_t::move_to(*(point_t **)param_3);
    cVar3 = param_2[0x1039];
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
joined_r0x00108ae9:
    if (cVar3 == (cff2_cs_interp_env_t)0x0) {
LAB_00108637:
      if (param_2[0x103a] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff2_cs_interp_env_t)0x1;
        iVar11 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar11;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar11 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff2_cs_interp_env_t)0x1;
    }
    goto LAB_00108240;
  case 0x18:
    path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
    ::rcurveline(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x19:
    path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
    ::rlinecurve(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x1a:
    uVar14 = *(uint *)(param_2 + 0x14);
    local_78 = *(double *)(param_2 + 0x1160);
    dStack_70 = *(double *)(param_2 + 0x1168);
    uVar17 = 4;
    if ((uVar14 & 1) != 0) {
      local_78 = local_78 + *(double *)(param_2 + 0x18);
      uVar17 = 5;
    }
    uVar18 = uVar14 & 1;
    if (uVar17 <= uVar14) {
      do {
        pcVar13 = param_2 + (ulong)uVar18 * 8 + 0x18;
        if (uVar14 <= uVar18) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_70 = dStack_70 + *(double *)pcVar13;
        pcVar13 = param_2 + (ulong)(uVar18 + 2) * 8 + 0x18;
        if (uVar14 <= uVar18 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)(uVar18 + 1) * 8 + 0x18;
        if (uVar14 <= uVar18 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_60 = dStack_70 + *(double *)pcVar13;
        local_68 = local_78 + *(double *)pcVar15;
        pcVar13 = param_2 + (ulong)(uVar18 + 3) * 8 + 0x18;
        if (uVar14 <= uVar18 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = dStack_60 + *(double *)pcVar13;
        local_58 = local_68;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_78);
        uVar14 = *(uint *)(param_2 + 0x14);
        uVar1 = uVar17 + 4;
        local_78 = local_58;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        dStack_70 = dStack_50;
        uVar18 = uVar17;
        uVar17 = uVar1;
      } while (uVar1 <= uVar14);
    }
    goto LAB_00108240;
  case 0x1b:
    uVar14 = *(uint *)(param_2 + 0x14);
    local_78 = *(double *)(param_2 + 0x1160);
    dStack_70 = *(double *)(param_2 + 0x1168);
    uVar17 = 4;
    if ((uVar14 & 1) != 0) {
      dStack_70 = dStack_70 + *(double *)(param_2 + 0x18);
      uVar17 = 5;
    }
    uVar18 = uVar14 & 1;
    if (uVar17 <= uVar14) {
      do {
        pcVar13 = param_2 + (ulong)uVar18 * 8 + 0x18;
        if (uVar14 <= uVar18) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = local_78 + *(double *)pcVar13;
        pcVar13 = param_2 + (ulong)(uVar18 + 2) * 8 + 0x18;
        if (uVar14 <= uVar18 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar15 = param_2 + (ulong)(uVar18 + 1) * 8 + 0x18;
        if (uVar14 <= uVar18 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar15 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = local_78 + *(double *)pcVar15;
        dStack_60 = dStack_70 + *(double *)pcVar13;
        pcVar13 = param_2 + (ulong)(uVar18 + 3) * 8 + 0x18;
        if (uVar14 <= uVar18 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_68 + *(double *)pcVar13;
        dStack_50 = dStack_60;
        cff2_path_param_t::cubic_to
                  (*(point_t **)param_3,*(point_t **)(param_3 + 8),(point_t *)&local_78);
        uVar14 = *(uint *)(param_2 + 0x14);
        uVar1 = uVar17 + 4;
        dStack_70 = dStack_50;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        local_78 = local_58;
        uVar18 = uVar17;
        uVar17 = uVar1;
      } while (uVar1 <= uVar14);
    }
    goto LAB_00108240;
  case 0x1d:
    uVar14 = *(uint *)(param_2 + 0x14);
    if (uVar14 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar13 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar13 = param_2 + (ulong)uVar14 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar14 - 1;
    }
    uVar14 = (int)*(double *)pcVar13 + *(int *)(param_2 + 0x1140);
    if (((-1 < (int)uVar14) &&
        (pCVar5 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 0x1148),
        pCVar5 != (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) &&
       (uVar17 = *(uint *)pCVar5,
       uVar14 < (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18
                ))) {
      uVar17 = *(uint *)(param_2 + 0x104c);
      if (uVar17 < 10) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        lVar2 = (ulong)uVar17 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar17 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar4;
        *(undefined8 *)(param_2 + lVar2 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar2 + 0x1058) = uVar4;
        *(undefined8 *)(param_2 + lVar2 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar19 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar5,uVar14);
        *(uint *)(param_2 + 0x1034) = uVar14;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar19;
        *(undefined8 *)(param_2 + 0x102c) = 0x100000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        break;
      }
    }
LAB_001090d0:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
    break;
  case 0x1e:
    path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
    ::vhcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x1f:
    path_procs_t<cff2_path_procs_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t>
    ::hvcurveto(param_2,param_3);
LAB_00108240:
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
LAB_001080c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109209:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


