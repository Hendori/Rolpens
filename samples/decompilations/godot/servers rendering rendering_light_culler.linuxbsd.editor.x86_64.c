
/* RenderingLightCuller::cull_directional_light(RendererSceneCull::InstanceBounds const&, int) */

undefined8 __thiscall
RenderingLightCuller::cull_directional_light
          (RenderingLightCuller *this,InstanceBounds *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((this[0x196] != (RenderingLightCuller)0x0) && (this[0x195] != (RenderingLightCuller)0x0)) {
    uVar1 = *(uint *)(this + 0x70);
    if ((param_2 < 0) || ((int)uVar1 <= param_2)) {
      _err_print_index_error
                ("cull_directional_light","servers/rendering/rendering_light_culler.cpp",0x82,
                 (long)param_2,(long)(int)uVar1,"p_directional_light_id",
                 "(int32_t)data.directional_cull_planes.size()","",false,false);
    }
    else {
      if (uVar1 <= (uint)param_2) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_2,(ulong)uVar1,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pfVar3 = (float *)((long)param_2 * 0x114 + *(long *)(this + 0x78));
      if (0 < (int)pfVar3[0x44]) {
        pfVar4 = pfVar3 + (long)(int)pfVar3[0x44] * 4;
        fVar7 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 8)) * _LC9;
        fVar6 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 4)) * _LC9;
        fVar5 = (*(float *)(param_1 + 0xc) - *(float *)param_1) * _LC9;
        do {
          if (0.0 < ((pfVar3[2] * (*(float *)(param_1 + 8) + fVar7) +
                     *pfVar3 * (*(float *)param_1 + fVar5) +
                     pfVar3[1] * (*(float *)(param_1 + 4) + fVar6)) - pfVar3[3]) -
                    (ABS(*pfVar3) * fVar5 + ABS(pfVar3[1]) * fVar6 + ABS(pfVar3[2]) * fVar7)) {
            return 0;
          }
          pfVar3 = pfVar3 + 4;
        } while (pfVar4 != pfVar3);
      }
    }
    return 1;
  }
  return 1;
}



/* RenderingLightCuller::cull_regular_light(PagedArray<RendererSceneCull::Instance*>&) */

void __thiscall
RenderingLightCuller::cull_regular_light(RenderingLightCuller *this,PagedArray *param_1)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  ulong uVar10;
  RenderingLightCuller *pRVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar9 = _LC9;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((this[0x196] != (RenderingLightCuller)0x0) && (this[0x195] != (RenderingLightCuller)0x0)) &&
      (this[0x194] == (RenderingLightCuller)0x0)) &&
     (uVar12 = *(ulong *)(param_1 + 0x28), 0 < (int)uVar12)) {
    uVar13 = 0;
    do {
      uVar10 = (ulong)(int)uVar13;
      if (uVar12 <= uVar10) {
        _err_print_index_error
                  ("operator[]","./core/templates/paged_array.h",0xb0,uVar10,uVar12,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar4 = *(uint *)(param_1 + 0x20);
      plVar2 = (long *)(*(long *)(*(long *)(param_1 + 8) +
                                 (uVar10 >> ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x3f) &
                                 0xffffffff) * 8) + (ulong)(uVar13 & uVar4) * 8);
      lVar7 = *plVar2;
      if (0 < *(int *)(this + 400)) {
        fVar16 = *(float *)(lVar7 + 0x14c) * fVar9;
        fVar15 = *(float *)(lVar7 + 0x148) * fVar9;
        fVar14 = *(float *)(lVar7 + 0x144) * fVar9;
        pRVar11 = this;
LAB_001002ed:
        if (((*(float *)(pRVar11 + 0x88) * (*(float *)(lVar7 + 0x140) + fVar16) +
             *(float *)(pRVar11 + 0x80) * (*(float *)(lVar7 + 0x138) + fVar14) +
             *(float *)(pRVar11 + 0x84) * (*(float *)(lVar7 + 0x13c) + fVar15)) -
            *(float *)(pRVar11 + 0x8c)) -
            (ABS(*(float *)(pRVar11 + 0x80)) * fVar14 + ABS(*(float *)(pRVar11 + 0x84)) * fVar15 +
            ABS(*(float *)(pRVar11 + 0x88)) * fVar16) <= 0.0) goto LAB_001002e0;
        uVar10 = uVar12 - 1 >> ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x3f) & 0xffffffff;
        *plVar2 = *(long *)(*(long *)(*(long *)(param_1 + 8) + uVar10 * 8) +
                           (ulong)((uint)(uVar12 - 1) & uVar4) * 8);
        if ((uVar4 & (uint)uVar12) == 1) {
          lVar7 = *(long *)param_1;
          uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + uVar10 * 4);
          pcVar1 = (char *)(lVar7 + 0x20);
          while( true ) {
            LOCK();
            cVar3 = *pcVar1;
            if (cVar3 == '\0') {
              *pcVar1 = '\x01';
            }
            UNLOCK();
            if (cVar3 == '\0') break;
            do {
            } while (*pcVar1 != '\0');
          }
          *(undefined4 *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(lVar7 + 0x18) * 4) = uVar5;
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
          *(undefined1 *)(lVar7 + 0x20) = 0;
        }
        uVar12 = *(long *)(param_1 + 0x28) - 1;
        *(ulong *)(param_1 + 0x28) = uVar12;
        goto LAB_001003b1;
      }
LAB_001003e0:
      uVar12 = *(ulong *)(param_1 + 0x28);
      uVar13 = uVar13 + 1;
LAB_001003b1:
    } while ((int)uVar13 < (int)uVar12);
  }
  if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001002e0:
  pRVar11 = pRVar11 + 0x10;
  if (pRVar11 == this + (long)*(int *)(this + 400) * 0x10) goto LAB_001003e0;
  goto LAB_001002ed;
}



/* RenderingLightCuller::LightCullPlanes::add_cull_plane(Plane const&) */

void __thiscall
RenderingLightCuller::LightCullPlanes::add_cull_plane(LightCullPlanes *this,Plane *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(this + 0x110);
  if (iVar1 < 0x11) {
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(int *)(this + 0x110) = iVar1 + 1;
    *(undefined8 *)(this + (long)iVar1 * 0x10) = uVar2;
    *(undefined8 *)(this + (long)iVar1 * 0x10 + 8) = uVar3;
    return;
  }
  _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                   "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
  return;
}



/* RenderingLightCuller::add_light_camera_planes_directional(RenderingLightCuller::LightCullPlanes&,
   RenderingLightCuller::LightSource const&) */

undefined8 __thiscall
RenderingLightCuller::add_light_camera_planes_directional
          (RenderingLightCuller *this,LightCullPlanes *param_1,LightSource *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  RenderingLightCuller *pRVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  LightCullPlanes *pLVar12;
  byte *pbVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_50;
  
  uVar17 = 0;
  lVar14 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  while (lVar11 = *(long *)(this + 8), lVar11 != 0) {
    lVar16 = *(long *)(lVar11 + -8);
    if (lVar16 <= lVar14) goto LAB_00100b5b;
    pfVar10 = (float *)(lVar11 + lVar14 * 0x10);
    if (0.0 < *pfVar10 * *(float *)(param_2 + 0xc) + pfVar10[1] * *(float *)(param_2 + 0x10) +
              pfVar10[2] * *(float *)(param_2 + 0x14)) {
      uVar17 = (ulong)((uint)uVar17 | 1 << ((byte)lVar14 & 0x1f));
      iVar15 = *(int *)(param_1 + 0x110);
      if (iVar15 < 0x11) {
        uVar28 = *(undefined8 *)pfVar10;
        uVar9 = *(undefined8 *)(pfVar10 + 2);
        *(int *)(param_1 + 0x110) = iVar15 + 1;
        *(undefined8 *)(param_1 + (long)iVar15 * 0x10) = uVar28;
        *(undefined8 *)(param_1 + (long)iVar15 * 0x10 + 8) = uVar9;
      }
      else {
        _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                         "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 6) {
      if ((int)uVar17 == 0x3f) {
        *(undefined4 *)(param_1 + 0x110) = 0;
        lVar14 = *(long *)(this + 8);
        if (lVar14 != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(lVar14 + -8) <= lVar11) {
              return 1;
            }
            puVar2 = (undefined8 *)(lVar14 + lVar11 * 0x10);
            iVar15 = *(int *)(param_1 + 0x110);
            if (iVar15 < 0x11) {
              uVar28 = *puVar2;
              uVar9 = puVar2[1];
              *(int *)(param_1 + 0x110) = iVar15 + 1;
              *(undefined8 *)(param_1 + (long)iVar15 * 0x10) = uVar28;
              *(undefined8 *)(param_1 + (long)iVar15 * 0x10 + 8) = uVar9;
            }
            else {
              _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                               "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
              lVar14 = *(long *)(this + 8);
            }
            lVar11 = lVar11 + 1;
          } while (lVar14 != 0);
        }
      }
      else {
        bVar6 = (&Data::LUT_entry_sizes)[uVar17];
        pbVar1 = &Data::LUT_entries + uVar17 * 8;
        iVar15 = bVar6 - 1;
        if (iVar15 < 1) {
          if (iVar15 == 0) {
            return 1;
          }
          local_50 = *(undefined8 *)(param_2 + 0x10);
          fVar22 = *(float *)(param_2 + 0xc);
          fVar23 = *(float *)(param_2 + 0x14);
        }
        else {
          fVar22 = *(float *)(param_2 + 0xc);
          local_50 = *(undefined8 *)(param_2 + 0x10);
          fVar23 = *(float *)(param_2 + 0x14);
          pbVar13 = pbVar1;
          while( true ) {
            lVar14 = (ulong)*pbVar13 * 0xc;
            lVar11 = (ulong)*pbVar13 * 0xc;
            pRVar3 = this + (ulong)pbVar13[1] * 0xc + 0x10;
            fVar32 = *(float *)(this + lVar11 + 0x18);
            fVar25 = (float)*(undefined8 *)(this + lVar11 + 0x14);
            fVar26 = (float)((ulong)*(undefined8 *)(this + lVar11 + 0x14) >> 0x20);
            fVar33 = fVar25 - (float)local_50;
            fVar34 = fVar26 - (float)((ulong)local_50 >> 0x20);
            fVar4 = *(float *)(this + lVar11 + 0x10);
            fVar27 = *(float *)(pRVar3 + 8) - *(float *)(this + lVar14 + 0x18);
            fVar21 = fVar33 - *(float *)(this + lVar14 + 0x14);
            fVar35 = fVar4 - fVar22;
            fVar18 = *(float *)(pRVar3 + 4) - *(float *)(this + lVar14 + 0x14);
            fVar5 = *(float *)pRVar3;
            fVar29 = fVar34 - *(float *)(pRVar3 + 8);
            fVar36 = fVar33 - *(float *)(pRVar3 + 4);
            fVar19 = SQRT(fVar18 * fVar18 + (fVar5 - fVar4) * (fVar5 - fVar4) + fVar27 * fVar27);
            fVar18 = fVar34 - *(float *)(this + lVar14 + 0x18);
            fVar27 = SQRT(fVar36 * fVar36 + (fVar35 - fVar5) * (fVar35 - fVar5) + fVar29 * fVar29);
            fVar21 = SQRT(fVar21 * fVar21 + (fVar35 - fVar4) * (fVar35 - fVar4) + fVar18 * fVar18);
            fVar18 = fVar19;
            if (fVar19 <= fVar27) {
              fVar18 = fVar27;
              fVar27 = fVar19;
            }
            fVar19 = fVar21;
            if (fVar18 <= fVar21) {
              fVar19 = fVar18;
              fVar18 = fVar21;
            }
            if ((_LC17 < fVar18) && (_LC17 <= ((fVar27 + fVar19) - fVar18) / fVar18)) {
              lVar14 = (ulong)pbVar13[1] * 0xc;
              fVar22 = fVar25 - (float)*(undefined8 *)(this + lVar14 + 0x14);
              auVar31._0_4_ =
                   (fVar32 - *(float *)(this + lVar14 + 0x18)) * (fVar25 - fVar33) -
                   fVar22 * (fVar32 - (fVar32 - fVar23));
              auVar31._4_4_ =
                   (fVar4 - fVar5) * (fVar26 - fVar34) -
                   (fVar26 - (float)((ulong)*(undefined8 *)(this + lVar14 + 0x14) >> 0x20)) *
                   (fVar4 - fVar35);
              auVar31._8_8_ = 0;
              fVar23 = fVar22 * (fVar4 - fVar35) - (fVar4 - fVar5) * (fVar25 - fVar33);
              fVar22 = auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_ +
                       fVar23 * fVar23;
              uVar28 = 0;
              fVar32 = 0.0;
              if (fVar22 != 0.0) {
                fVar22 = SQRT(fVar22);
                fVar32 = fVar23 / fVar22;
                auVar24._4_4_ = fVar22;
                auVar24._0_4_ = fVar22;
                auVar24._8_8_ = _LC18;
                auVar31 = divps(auVar31,auVar24);
                uVar28 = auVar31._0_8_;
              }
              iVar7 = *(int *)(param_1 + 0x110);
              if (iVar7 < 0x11) {
                pLVar12 = param_1 + (long)iVar7 * 0x10;
                *(int *)(param_1 + 0x110) = iVar7 + 1;
                *(undefined8 *)pLVar12 = uVar28;
                *(float *)(pLVar12 + 8) = fVar32;
                fVar22 = *(float *)(param_2 + 0xc);
                fVar23 = *(float *)(param_2 + 0x14);
                *(float *)(pLVar12 + 0xc) =
                     (float)uVar28 * fVar4 + (float)((ulong)uVar28 >> 0x20) * fVar25 +
                     fVar26 * fVar32;
                local_50 = *(undefined8 *)(param_2 + 0x10);
              }
              else {
                _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",
                                 0xe1,"Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,
                                 0);
                local_50 = *(undefined8 *)(param_2 + 0x10);
                fVar23 = *(float *)(param_2 + 0x14);
                fVar22 = *(float *)(param_2 + 0xc);
              }
            }
            if (pbVar13 == pbVar1 + (bVar6 - 2)) break;
            pbVar13 = pbVar13 + 1;
          }
        }
        lVar14 = (ulong)pbVar1[iVar15] * 0xc;
        lVar11 = (ulong)pbVar1[iVar15] * 0xc;
        pRVar3 = this + (ulong)(byte)(&Data::LUT_entries)[uVar17 * 8] * 0xc + 0x10;
        fVar32 = *(float *)(this + lVar11 + 0x18);
        fVar25 = (float)*(undefined8 *)(this + lVar11 + 0x14);
        fVar26 = (float)((ulong)*(undefined8 *)(this + lVar11 + 0x14) >> 0x20);
        fVar4 = *(float *)pRVar3;
        fVar29 = fVar25 - (float)local_50;
        fVar33 = fVar26 - (float)((ulong)local_50 >> 0x20);
        fVar5 = *(float *)(this + lVar11 + 0x10);
        fVar27 = *(float *)(pRVar3 + 8) - *(float *)(this + lVar14 + 0x18);
        fVar22 = fVar5 - fVar22;
        fVar18 = *(float *)(pRVar3 + 4) - *(float *)(this + lVar14 + 0x14);
        fVar18 = SQRT((fVar4 - fVar5) * (fVar4 - fVar5) + fVar18 * fVar18 + fVar27 * fVar27);
        fVar34 = fVar33 - *(float *)(this + lVar14 + 0x18);
        fVar19 = fVar33 - *(float *)(pRVar3 + 8);
        fVar21 = fVar29 - *(float *)(pRVar3 + 4);
        fVar27 = fVar29 - *(float *)(this + lVar14 + 0x14);
        fVar21 = SQRT(fVar19 * fVar19 + (fVar22 - fVar4) * (fVar22 - fVar4) + fVar21 * fVar21);
        fVar19 = SQRT((fVar22 - fVar5) * (fVar22 - fVar5) + fVar27 * fVar27 + fVar34 * fVar34);
        fVar27 = fVar21;
        if (fVar18 <= fVar21) {
          fVar27 = fVar18;
          fVar18 = fVar21;
        }
        fVar21 = fVar19;
        if (fVar18 <= fVar19) {
          fVar21 = fVar18;
          fVar18 = fVar19;
        }
        if ((_LC17 < fVar18) && (_LC17 <= ((fVar27 + fVar21) - fVar18) / fVar18)) {
          lVar14 = (ulong)(byte)(&Data::LUT_entries)[uVar17 * 8] * 0xc;
          fVar18 = fVar25 - (float)*(undefined8 *)(this + lVar14 + 0x14);
          auVar30._0_4_ =
               (fVar32 - *(float *)(this + lVar14 + 0x18)) * (fVar25 - fVar29) -
               fVar18 * (fVar32 - (fVar32 - fVar23));
          auVar30._4_4_ =
               (fVar5 - fVar4) * (fVar26 - fVar33) -
               (fVar26 - (float)((ulong)*(undefined8 *)(this + lVar14 + 0x14) >> 0x20)) *
               (fVar5 - fVar22);
          auVar30._8_8_ = 0;
          fVar22 = fVar18 * (fVar5 - fVar22) - (fVar5 - fVar4) * (fVar25 - fVar29);
          fVar23 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ + fVar22 * fVar22;
          uVar28 = 0;
          fVar32 = 0.0;
          if (fVar23 != 0.0) {
            fVar23 = SQRT(fVar23);
            fVar32 = fVar22 / fVar23;
            auVar20._4_4_ = fVar23;
            auVar20._0_4_ = fVar23;
            auVar20._8_8_ = _LC18;
            auVar31 = divps(auVar30,auVar20);
            uVar28 = auVar31._0_8_;
          }
          iVar15 = *(int *)(param_1 + 0x110);
          if (iVar15 < 0x11) {
            *(int *)(param_1 + 0x110) = iVar15 + 1;
            pLVar12 = param_1 + (long)iVar15 * 0x10;
            *(undefined8 *)pLVar12 = uVar28;
            *(float *)(pLVar12 + 8) = fVar32;
            *(float *)(pLVar12 + 0xc) =
                 (float)uVar28 * fVar5 + (float)((ulong)uVar28 >> 0x20) * fVar25 + fVar26 * fVar32;
          }
          else {
            _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                             "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
          }
        }
      }
      return 1;
    }
  }
  lVar16 = 0;
LAB_00100b5b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar16,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* RenderingLightCuller::_add_light_camera_planes(RenderingLightCuller::LightCullPlanes&,
   RenderingLightCuller::LightSource const&) */

undefined8 __thiscall
RenderingLightCuller::_add_light_camera_planes
          (RenderingLightCuller *this,LightCullPlanes *param_1,LightSource *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  RenderingLightCuller *pRVar3;
  RenderingLightCuller *pRVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  LightCullPlanes *pLVar11;
  float *pfVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  
  if (this[0x196] == (RenderingLightCuller)0x0) {
    return 1;
  }
  lVar10 = *(long *)(this + 8);
  if ((lVar10 == 0) || (*(long *)(lVar10 + -8) != 6)) {
    _err_print_error("_add_light_camera_planes","servers/rendering/rendering_light_culler.cpp",0x142
                     ,"Condition \"data.frustum_planes.size() != 6\" is true. Returning: true",0,0);
    return 1;
  }
  iVar17 = *(int *)(param_2 + 0x18);
  if (iVar17 == 1) {
    uVar9 = add_light_camera_planes_directional(this,param_1,param_2);
    return uVar9;
  }
  if (1 < iVar17 - 2U) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  this[0x194] = (RenderingLightCuller)0x0;
  if (iVar17 == 3) {
    lVar16 = 0;
    uVar18 = 0;
    while (lVar10 != 0) {
      lVar14 = *(long *)(lVar10 + -8);
      if (lVar14 <= lVar16) goto LAB_00100fec;
      pfVar12 = (float *)(lVar10 + lVar16 * 0x10);
      fVar23 = (*pfVar12 * *(float *)param_2 + pfVar12[1] * *(float *)(param_2 + 4) +
               pfVar12[2] * *(float *)(param_2 + 8)) - pfVar12[3];
      if (fVar23 < 0.0) {
        uVar18 = uVar18 | 1 << ((byte)lVar16 & 0x1f);
        iVar17 = *(int *)(param_1 + 0x110);
        if (iVar17 < 0x11) {
          uVar9 = *(undefined8 *)pfVar12;
          uVar25 = *(undefined8 *)(pfVar12 + 2);
          *(int *)(param_1 + 0x110) = iVar17 + 1;
          *(undefined8 *)(param_1 + (long)iVar17 * 0x10) = uVar9;
          *(undefined8 *)(param_1 + (long)iVar17 * 0x10 + 8) = uVar25;
        }
        else {
          _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                           "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
        }
      }
      else if (*(float *)(param_2 + 0x20) <= fVar23) goto LAB_001016b0;
      lVar16 = lVar16 + 1;
      if (lVar16 == 6) goto LAB_00101030;
      lVar10 = *(long *)(this + 8);
    }
    lVar14 = 0;
LAB_00100fec:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar14,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  fVar23 = *(float *)(param_2 + 0x20);
  lVar16 = 0;
  uVar18 = 0;
  fVar28 = *(float *)(param_2 + 0x14);
  fVar32 = *(float *)(param_2 + 0x10);
  fVar34 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar24 = *(float *)(param_2 + 4);
  fVar22 = *(float *)param_2;
  fVar20 = tanf(_LC21 * *(float *)(param_2 + 0x1c));
  while (lVar10 != 0) {
    lVar14 = *(long *)(lVar10 + -8);
    if (lVar14 <= lVar16) goto LAB_00100f0b;
    pfVar12 = (float *)(lVar10 + lVar16 * 0x10);
    fVar21 = (*(float *)param_2 * *pfVar12 + *(float *)(param_2 + 4) * pfVar12[1] +
             *(float *)(param_2 + 8) * pfVar12[2]) - pfVar12[3];
    if (fVar21 < 0.0) {
      uVar18 = uVar18 | 1 << ((byte)lVar16 & 0x1f);
      iVar17 = *(int *)(param_1 + 0x110);
      if (iVar17 < 0x11) {
        uVar9 = *(undefined8 *)pfVar12;
        uVar25 = *(undefined8 *)(pfVar12 + 2);
        *(int *)(param_1 + 0x110) = iVar17 + 1;
        *(undefined8 *)(param_1 + (long)iVar17 * 0x10) = uVar9;
        *(undefined8 *)(param_1 + (long)iVar17 * 0x10 + 8) = uVar25;
      }
      else {
        _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                         "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
      }
    }
    else if ((*(float *)(param_2 + 0x20) <= fVar21) ||
            (fVar23 * fVar20 <=
             (*pfVar12 * (fVar23 * fVar5 + fVar22) + pfVar12[1] * (fVar32 * fVar23 + fVar24) +
             pfVar12[2] * (fVar28 * fVar23 + fVar34)) - pfVar12[3])) {
LAB_001016b0:
      this[0x194] = (RenderingLightCuller)0x1;
      return 0;
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 6) {
LAB_00101030:
      if (uVar18 == 0x3f) {
        *(undefined4 *)(param_1 + 0x110) = 0;
        lVar10 = *(long *)(this + 8);
        if (lVar10 != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(lVar10 + -8) <= lVar16) {
              return 1;
            }
            puVar2 = (undefined8 *)(lVar10 + lVar16 * 0x10);
            iVar17 = *(int *)(param_1 + 0x110);
            if (iVar17 < 0x11) {
              uVar9 = *puVar2;
              uVar25 = puVar2[1];
              *(int *)(param_1 + 0x110) = iVar17 + 1;
              *(undefined8 *)(param_1 + (long)iVar17 * 0x10) = uVar9;
              *(undefined8 *)(param_1 + (long)iVar17 * 0x10 + 8) = uVar25;
            }
            else {
              _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                               "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
              lVar10 = *(long *)(this + 8);
            }
            lVar16 = lVar16 + 1;
          } while (lVar10 != 0);
        }
      }
      else {
        uVar15 = (ulong)uVar18;
        bVar6 = (&Data::LUT_entry_sizes)[uVar15];
        pbVar1 = &Data::LUT_entries + uVar15 * 8;
        iVar17 = bVar6 - 1;
        if (iVar17 < 1) {
          if (iVar17 == 0) {
            return 1;
          }
          fVar23 = *(float *)param_2;
          fVar28 = *(float *)(param_2 + 4);
          fVar32 = *(float *)(param_2 + 8);
        }
        else {
          fVar23 = *(float *)param_2;
          fVar28 = *(float *)(param_2 + 4);
          fVar32 = *(float *)(param_2 + 8);
          pbVar13 = pbVar1;
          fVar34 = _LC17;
          uVar9 = _LC18;
          do {
            pRVar3 = this + (ulong)*pbVar13 * 0xc + 0x10;
            fVar5 = *(float *)pRVar3;
            pRVar4 = this + (ulong)pbVar13[1] * 0xc + 0x10;
            fVar24 = *(float *)pRVar4;
            fVar29 = fVar28 - *(float *)(pRVar3 + 4);
            fVar20 = *(float *)(pRVar4 + 4) - *(float *)(pRVar3 + 4);
            fVar22 = *(float *)(pRVar4 + 8) - *(float *)(pRVar3 + 8);
            fVar27 = fVar32 - *(float *)(pRVar3 + 8);
            fVar21 = fVar32 - *(float *)(pRVar4 + 8);
            fVar35 = fVar28 - *(float *)(pRVar4 + 4);
            fVar20 = SQRT(fVar22 * fVar22 + (fVar24 - fVar5) * (fVar24 - fVar5) + fVar20 * fVar20);
            fVar21 = SQRT(fVar21 * fVar21 + (fVar23 - fVar24) * (fVar23 - fVar24) + fVar35 * fVar35)
            ;
            fVar27 = SQRT(fVar27 * fVar27 + (fVar23 - fVar5) * (fVar23 - fVar5) + fVar29 * fVar29);
            fVar22 = fVar21;
            if (fVar20 <= fVar21) {
              fVar22 = fVar20;
              fVar20 = fVar21;
            }
            fVar21 = fVar27;
            if (fVar20 <= fVar27) {
              fVar21 = fVar20;
              fVar20 = fVar27;
            }
            if ((_LC17 < fVar20) && (fVar34 <= ((fVar22 + fVar21) - fVar20) / fVar20)) {
              lVar10 = (ulong)*pbVar13 * 0xc;
              lVar16 = (ulong)pbVar13[1] * 0xc;
              fVar22 = (float)*(undefined8 *)(this + lVar10 + 0x14);
              fVar21 = (float)((ulong)*(undefined8 *)(this + lVar10 + 0x14) >> 0x20);
              fVar20 = fVar22 - (float)*(undefined8 *)(this + lVar16 + 0x14);
              auVar31._0_4_ =
                   (*(float *)(this + lVar10 + 0x18) - *(float *)(this + lVar16 + 0x18)) *
                   (fVar22 - fVar28) -
                   fVar20 * (*(float *)(this + lVar10 + 0x18) - *(float *)(param_2 + 8));
              auVar31._4_4_ =
                   (fVar5 - fVar24) * (fVar21 - fVar32) -
                   (fVar21 - (float)((ulong)*(undefined8 *)(this + lVar16 + 0x14) >> 0x20)) *
                   (fVar5 - fVar23);
              auVar31._8_8_ = 0;
              fVar23 = fVar20 * (fVar5 - fVar23) - (fVar22 - fVar28) * (fVar5 - fVar24);
              fVar28 = auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_ +
                       fVar23 * fVar23;
              uVar25 = 0;
              fVar32 = 0.0;
              if (fVar28 != 0.0) {
                fVar28 = SQRT(fVar28);
                fVar32 = fVar23 / fVar28;
                auVar33._4_4_ = fVar28;
                auVar33._0_4_ = fVar28;
                auVar33._8_8_ = uVar9;
                auVar31 = divps(auVar31,auVar33);
                uVar25 = auVar31._0_8_;
              }
              iVar7 = *(int *)(param_1 + 0x110);
              if (iVar7 < 0x11) {
                pLVar11 = param_1 + (long)iVar7 * 0x10;
                *(int *)(param_1 + 0x110) = iVar7 + 1;
                *(undefined8 *)pLVar11 = uVar25;
                *(float *)(pLVar11 + 8) = fVar32;
                *(float *)(pLVar11 + 0xc) =
                     (float)uVar25 * fVar5 + (float)((ulong)uVar25 >> 0x20) * fVar22 +
                     fVar21 * fVar32;
                fVar23 = *(float *)param_2;
                fVar28 = *(float *)(param_2 + 4);
                fVar32 = *(float *)(param_2 + 8);
              }
              else {
                _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",
                                 0xe1,"Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,
                                 0);
                fVar23 = *(float *)param_2;
                fVar28 = *(float *)(param_2 + 4);
                fVar32 = *(float *)(param_2 + 8);
                fVar34 = _LC17;
                uVar9 = _LC18;
              }
            }
            bVar19 = pbVar13 != pbVar1 + (bVar6 - 2);
            pbVar13 = pbVar13 + 1;
          } while (bVar19);
        }
        pRVar3 = this + (ulong)pbVar1[iVar17] * 0xc + 0x10;
        fVar34 = *(float *)pRVar3;
        pRVar4 = this + (ulong)(byte)(&Data::LUT_entries)[uVar15 * 8] * 0xc + 0x10;
        fVar5 = *(float *)pRVar4;
        fVar27 = fVar28 - *(float *)(pRVar3 + 4);
        fVar20 = *(float *)(pRVar4 + 4) - *(float *)(pRVar3 + 4);
        fVar24 = *(float *)(pRVar4 + 8) - *(float *)(pRVar3 + 8);
        fVar21 = fVar32 - *(float *)(pRVar3 + 8);
        fVar22 = fVar32 - *(float *)(pRVar4 + 8);
        fVar29 = fVar28 - *(float *)(pRVar4 + 4);
        fVar20 = SQRT(fVar24 * fVar24 + (fVar5 - fVar34) * (fVar5 - fVar34) + fVar20 * fVar20);
        fVar22 = SQRT(fVar22 * fVar22 + (fVar23 - fVar5) * (fVar23 - fVar5) + fVar29 * fVar29);
        fVar21 = SQRT(fVar21 * fVar21 + (fVar23 - fVar34) * (fVar23 - fVar34) + fVar27 * fVar27);
        fVar24 = fVar20;
        if (fVar20 <= fVar22) {
          fVar24 = fVar22;
          fVar22 = fVar20;
        }
        fVar20 = fVar21;
        if (fVar24 <= fVar21) {
          fVar20 = fVar24;
          fVar24 = fVar21;
        }
        if ((_LC17 < fVar24) && (_LC17 <= ((fVar22 + fVar20) - fVar24) / fVar24)) {
          lVar10 = (ulong)pbVar1[iVar17] * 0xc;
          lVar16 = (ulong)(byte)(&Data::LUT_entries)[uVar15 * 8] * 0xc;
          fVar22 = (float)*(undefined8 *)(this + lVar10 + 0x14);
          fVar24 = (float)((ulong)*(undefined8 *)(this + lVar10 + 0x14) >> 0x20);
          fVar20 = fVar22 - (float)*(undefined8 *)(this + lVar16 + 0x14);
          auVar30._0_4_ =
               (*(float *)(this + lVar10 + 0x18) - *(float *)(this + lVar16 + 0x18)) *
               (fVar22 - fVar28) -
               fVar20 * (*(float *)(this + lVar10 + 0x18) - *(float *)(param_2 + 8));
          auVar30._4_4_ =
               (fVar34 - fVar5) * (fVar24 - fVar32) -
               (fVar24 - (float)((ulong)*(undefined8 *)(this + lVar16 + 0x14) >> 0x20)) *
               (fVar34 - fVar23);
          auVar30._8_8_ = 0;
          fVar28 = fVar20 * (fVar34 - fVar23) - (fVar22 - fVar28) * (fVar34 - fVar5);
          fVar23 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ + fVar28 * fVar28;
          uVar9 = 0;
          fVar32 = 0.0;
          if (fVar23 != 0.0) {
            fVar23 = SQRT(fVar23);
            fVar32 = fVar28 / fVar23;
            auVar26._4_4_ = fVar23;
            auVar26._0_4_ = fVar23;
            auVar26._8_8_ = _LC18;
            auVar31 = divps(auVar30,auVar26);
            uVar9 = auVar31._0_8_;
          }
          iVar17 = *(int *)(param_1 + 0x110);
          if (iVar17 < 0x11) {
            pLVar11 = param_1 + (long)iVar17 * 0x10;
            *(int *)(param_1 + 0x110) = iVar17 + 1;
            *(undefined8 *)pLVar11 = uVar9;
            *(float *)(pLVar11 + 8) = fVar32;
            *(float *)(pLVar11 + 0xc) =
                 (float)uVar9 * fVar34 + fVar22 * (float)((ulong)uVar9 >> 0x20) + fVar24 * fVar32;
          }
          else {
            _err_print_error("add_cull_plane","servers/rendering/rendering_light_culler.cpp",0xe1,
                             "Condition \"num_cull_planes >= MAX_CULL_PLANES\" is true.",0,0);
          }
        }
      }
      return 1;
    }
    lVar10 = *(long *)(this + 8);
  }
  lVar14 = 0;
LAB_00100f0b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar14,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingLightCuller::_prepare_light(RendererSceneCull::Instance const&, int) */

undefined8 __thiscall
RenderingLightCuller::_prepare_light(RenderingLightCuller *this,Instance *param_1,int param_2)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined4 uVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x196] != (RenderingLightCuller)0x0) {
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_34 = 0.0;
    local_30 = 0;
    local_28 = 0x7f7fffff;
    iVar3 = (**(code **)(*RenderingServerGlobals::light_storage + 0xf8))
                      (RenderingServerGlobals::light_storage,*(undefined8 *)(param_1 + 8));
    if (iVar3 == 1) {
      local_30 = CONCAT44(local_30._4_4_,3);
LAB_001019c8:
      local_28 = (**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                           (RenderingServerGlobals::light_storage,*(undefined8 *)(param_1 + 8),4);
    }
    else {
      if (iVar3 == 2) {
        local_30 = CONCAT44(local_30._4_4_,2);
        uVar6 = (**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                          (RenderingServerGlobals::light_storage,*(undefined8 *)(param_1 + 8),7);
        local_30 = CONCAT44(uVar6,(undefined4)local_30);
        goto LAB_001019c8;
      }
      if (iVar3 == 0) {
        local_30 = CONCAT44(local_30._4_4_,1);
      }
    }
    fVar1 = *(float *)(param_1 + 0x50);
    local_48 = *(undefined8 *)(param_1 + 0x54);
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_1 + 0x38);
    local_40 = *(undefined4 *)(param_1 + 0x5c);
    fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar1 * fVar1;
    if (fVar5 == 0.0) {
      if (param_2 == -1) goto LAB_00101996;
LAB_001018f7:
      if (*(uint *)(this + 0x70) <= (uint)param_2) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_2,
                   (ulong)*(uint *)(this + 0x70),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = _add_light_camera_planes
                        (this,(LightCullPlanes *)
                              ((ulong)(uint)param_2 * 0x114 + *(long *)(this + 0x78)),
                         (LightSource *)&local_48);
    }
    else {
      fVar5 = SQRT(fVar5);
      auVar7._0_4_ = (uint)fVar10 ^ (uint)_LC22;
      auVar7._4_4_ = (uint)fVar9 ^ _LC22._4_4_;
      auVar7._8_8_ = 0;
      auVar8._4_4_ = fVar5;
      auVar8._0_4_ = fVar5;
      auVar8._8_8_ = _LC18;
      auVar8 = divps(auVar7,auVar8);
      local_34 = (float)((uint)fVar1 ^ __LC23) / fVar5;
      local_3c = auVar8._0_8_;
      if (param_2 != -1) goto LAB_001018f7;
LAB_00101996:
      uVar4 = _add_light_camera_planes
                        (this,(LightCullPlanes *)(this + 0x80),(LightSource *)&local_48);
    }
    if (this[0x196] != (RenderingLightCuller)0x0) goto LAB_0010192e;
  }
  uVar4 = 1;
LAB_0010192e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* RenderingLightCuller::prepare_directional_light(RendererSceneCull::Instance const*, int) */

void __thiscall
RenderingLightCuller::prepare_directional_light
          (RenderingLightCuller *this,Instance *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  if (0x200 < param_2) {
    _err_print_error("prepare_directional_light","servers/rendering/rendering_light_culler.cpp",0x4a
                     ,"Condition \"p_directional_light_id > 512\" is true.",0,0);
    return;
  }
  uVar2 = *(uint *)(this + 0x70);
  if (param_2 < (int)uVar2) goto LAB_00101a99;
  uVar7 = param_2 + 1;
  if (uVar2 <= uVar7) {
    if (uVar7 <= uVar2) goto LAB_00101a99;
    if (*(uint *)(this + 0x74) < uVar7) {
      uVar2 = (uint)param_2 >> 1 | param_2;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
      *(uint *)(this + 0x74) = uVar2;
      lVar5 = Memory::realloc_static(*(void **)(this + 0x78),(ulong)uVar2 * 0x114,false);
      *(long *)(this + 0x78) = lVar5;
      if (lVar5 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = *(uint *)(this + 0x70);
      if (uVar7 <= uVar2) goto LAB_00101b30;
    }
    lVar5 = *(long *)(this + 0x78);
    puVar6 = (undefined8 *)(lVar5 + 0x110 + (ulong)uVar2 * 0x114);
    do {
      puVar3 = puVar6 + -0x22;
      do {
        *puVar3 = 0;
        puVar4 = puVar3 + 2;
        *(undefined4 *)(puVar3 + 1) = 0;
        *(undefined4 *)((long)puVar3 + 0xc) = 0;
        puVar3 = puVar4;
      } while (puVar4 != puVar6);
      *(undefined4 *)puVar6 = 0;
      puVar6 = (undefined8 *)((long)puVar6 + 0x114);
    } while (puVar6 != (undefined8 *)
                       (lVar5 + 0x224 + ((ulong)(param_2 - uVar2) + (ulong)uVar2) * 0x114));
  }
LAB_00101b30:
  *(uint *)(this + 0x70) = uVar7;
LAB_00101a99:
  _prepare_light(this,param_1,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingLightCuller::prepare_camera(Transform3D const&, Projection const&) */

undefined8 RenderingLightCuller::prepare_camera(Transform3D *param_1,Projection *param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long in_FS_OFFSET;
  Transform3D aTStack_a8 [8];
  long local_a0;
  ulong local_98;
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
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_1 + 0x198) + 1;
  if (0x77 < *(int *)(param_1 + 0x198) + 1) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x198) = iVar3;
  if (param_1[0x196] == (Transform3D)0x0) {
    uVar4 = 0;
LAB_00101c40:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Projection::get_projection_planes(aTStack_a8);
  lVar9 = local_a0;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == local_a0) {
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
        lVar8 = *(long *)(param_1 + 8);
      }
      else {
        lVar8 = *(long *)(param_1 + 8);
      }
    }
  }
  else {
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    *(long *)(param_1 + 8) = local_a0;
    lVar8 = local_a0;
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  puVar10 = &local_98;
  uStack_90 = _UNK_00102418;
  local_88 = __LC30;
  uStack_80 = _UNK_00102428;
  local_78 = __LC31;
  uStack_70 = _UNK_00102438;
  local_68 = __LC32;
  uStack_60 = _UNK_00102448;
  local_58 = __LC33;
  uStack_50 = _UNK_00102458;
  local_48 = __LC34;
  uStack_40 = _UNK_00102468;
  uVar5 = __LC29 & 0xffffffff;
  local_98 = __LC29;
  do {
    if (lVar8 == 0) {
      lVar9 = 0;
LAB_00101d84:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= (long)uVar5) goto LAB_00101d84;
    lVar6 = uVar5 * 0x10;
    uVar5 = (ulong)(uint)puVar10[1];
    if (lVar9 <= (long)uVar5) goto LAB_00101d84;
    lVar7 = uVar5 * 0x10;
    uVar5 = (ulong)*(uint *)((long)puVar10 + 4);
    if (lVar9 <= (long)uVar5) goto LAB_00101d84;
    uVar4 = Plane::intersect_3((Plane *)(lVar8 + lVar6),(Plane *)(lVar8 + uVar5 * 0x10),
                               (Vector3 *)(lVar8 + lVar7));
    if ((char)uVar4 == '\0') {
      _err_print_error("prepare_camera","servers/rendering/rendering_light_culler.cpp",0x220,
                       "Condition \"!res\" is true. Returning: false",0,0);
      uVar4 = 0;
      goto LAB_00101c40;
    }
    puVar10 = (ulong *)((long)puVar10 + 0xc);
    if (&local_38 == puVar10) goto LAB_00101c40;
    lVar8 = *(long *)(param_1 + 8);
    uVar5 = (ulong)*(uint *)puVar10;
  } while( true );
}



/* RenderingLightCuller::RenderingLightCuller() */

void __thiscall RenderingLightCuller::RenderingLightCuller(RenderingLightCuller *this)

{
  RenderingLightCuller *pRVar1;
  RenderingLightCuller *pRVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  puVar4 = (undefined8 *)((ulong)(this + 0x18) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x18) & 0xfffffffffffffff8))
                       + 0x70U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  pRVar1 = this + 0x80;
  do {
    *(undefined8 *)pRVar1 = 0;
    pRVar2 = pRVar1 + 0x10;
    *(undefined4 *)(pRVar1 + 8) = 0;
    *(undefined4 *)(pRVar1 + 0xc) = 0;
    pRVar1 = pRVar2;
  } while (pRVar2 != this + 400);
  *(undefined4 *)(this + 400) = 0;
  *(undefined2 *)(this + 0x194) = 0x100;
  this[0x196] = (RenderingLightCuller)0x1;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  return;
}


