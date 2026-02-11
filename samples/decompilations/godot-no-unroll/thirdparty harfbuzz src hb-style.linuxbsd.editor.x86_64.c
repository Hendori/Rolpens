
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hb_style_get_value(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  hb_face_t *phVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  accelerator_t *this;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined *puVar14;
  uint uVar15;
  STAT *this_00;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float local_70;
  undefined1 local_6c [4];
  undefined4 local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (uint)param_2;
  if (uVar15 == 0x536c6e74) {
    fVar16 = (float)hb_style_get_value(param_1,0x736c6e74);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      tanf((fVar16 * __LC11) / __LC12);
      return;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    iVar7 = hb_ot_var_find_axis_info(lVar3,param_2,local_68);
    if ((iVar7 == 0) && ((uVar15 != 0x6f70737a || (*(float *)(param_1 + 0x70) == 0.0)))) {
      plVar2 = (long *)(lVar3 + 0xb8);
LAB_001000a8:
      lVar9 = *plVar2;
      if (lVar9 == 0) {
        if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
          lVar9 = hb_blob_get_empty();
        }
        else {
          lVar9 = hb_table_lazy_loader_t<OT::STAT,9u,true>::create(*(hb_face_t **)(lVar3 + 0x70));
          if (lVar9 == 0) {
            lVar9 = hb_blob_get_empty();
            LOCK();
            lVar10 = *plVar2;
            if (lVar10 == 0) {
              *plVar2 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto code_r0x001007b3;
          }
          else {
            LOCK();
            lVar10 = *plVar2;
            if (lVar10 == 0) {
              *plVar2 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto LAB_001006bd;
          }
        }
      }
      this_00 = (STAT *)&_hb_NullPool;
      if (0x13 < *(uint *)(lVar9 + 0x18)) {
        this_00 = *(STAT **)(lVar9 + 0x10);
      }
      cVar5 = OT::STAT::get_value(this_00,uVar15,&local_70);
      if (cVar5 == '\0') {
        plVar2 = (long *)(lVar3 + 0xa8);
        if (uVar15 == 0x736c6e74) {
          do {
            while( true ) {
              this = (accelerator_t *)*plVar2;
              if (this != (accelerator_t *)0x0) goto LAB_001004eb;
              phVar4 = *(hb_face_t **)(lVar3 + 0x70);
              if (phVar4 == (hb_face_t *)0x0) goto LAB_00100956;
              this = (accelerator_t *)calloc(1,0x38);
              if (this == (accelerator_t *)0x0) break;
              OT::post::accelerator_t::accelerator_t(this,phVar4);
              LOCK();
              lVar9 = *plVar2;
              if (lVar9 == 0) {
                *plVar2 = (long)this;
              }
              UNLOCK();
              if (lVar9 == 0) goto LAB_001004eb;
              if (this != (accelerator_t *)&_hb_NullPool) {
                free(*(void **)(this + 0x30));
                hb_blob_destroy(*(undefined8 *)this);
                if (*(int *)(this + 0x18) != 0) {
                  free(*(void **)(this + 0x20));
                }
                free(this);
              }
            }
            LOCK();
            lVar9 = *plVar2;
            if (lVar9 == 0) {
              *plVar2 = (long)&_hb_NullPool;
            }
            UNLOCK();
          } while (lVar9 != 0);
LAB_00100956:
          this = (accelerator_t *)&_hb_NullPool;
LAB_001004eb:
          puVar14 = *(undefined **)this;
          puVar8 = &_hb_NullPool;
          if (puVar14 == (undefined *)0x0) {
            puVar14 = &_hb_NullPool;
          }
          if (0x1f < *(uint *)(puVar14 + 0x18)) {
            puVar8 = *(undefined **)(puVar14 + 0x10);
          }
          uVar15 = *(uint *)(puVar8 + 4);
          fVar16 = *(float *)(param_1 + 0x44);
          if (fVar16 != 0.0) {
            fVar17 = tanf((((float)(int)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 |
                                         (uVar15 & 0xff00) << 8 | uVar15 << 0x18) + 0.0) * __LC1 *
                          __LC11) / __LC12);
            atanf(fVar17 + fVar16);
          }
        }
        else {
          plVar2 = (long *)(lVar3 + 0xa0);
          if (uVar15 < 0x736c6e75) {
            if (uVar15 == 0x6974616c) {
LAB_00100360:
              lVar9 = *plVar2;
              if (lVar9 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  lVar9 = hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x00100979;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_0010034b;
                  }
                }
              }
              puVar14 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar9 + 0x18)) {
                puVar14 = *(undefined **)(lVar9 + 0x10);
              }
              plVar2 = (long *)(lVar3 + 0x78);
              if ((puVar14[0x3f] & 1) == 0) {
LAB_001002f0:
                if (*plVar2 == 0) {
                  if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                    hb_blob_get_empty();
                  }
                  else {
                    lVar9 = hb_table_lazy_loader_t<OT::head,1u,true>::create
                                      (*(hb_face_t **)(lVar3 + 0x70));
                    if (lVar9 == 0) {
                      lVar9 = hb_blob_get_empty();
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto code_r0x00100aa1;
                    }
                    else {
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto LAB_001002da;
                    }
                  }
                }
              }
              goto LAB_00100061;
            }
            if (uVar15 == 0x6f70737a) {
LAB_001001c8:
              lVar9 = *plVar2;
              if (lVar9 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  lVar9 = hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x00100929;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_00100725;
                  }
                }
              }
              puVar12 = (ushort *)&_hb_NullPool;
              if (0x4d < *(uint *)(lVar9 + 0x18)) {
                puVar12 = *(ushort **)(lVar9 + 0x10);
              }
              puVar13 = puVar12 + 0x30;
              if ((ushort)(*puVar12 << 8 | *puVar12 >> 8) < 5) {
                puVar13 = (ushort *)&_hb_NullPool;
              }
              uVar6 = *puVar13 << 8 | *puVar13 >> 8;
              uVar11 = puVar13[1] << 8 | puVar13[1] >> 8;
              if ((uVar11 <= uVar6 || uVar6 == 0) || (uVar11 == 1)) {
                hb_ot_layout_get_size_params(lVar3,local_6c,0,0,0,0);
              }
            }
          }
          else {
            if (uVar15 == 0x77647468) {
LAB_001003d8:
              lVar9 = *plVar2;
              if (lVar9 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  lVar9 = hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x001008c5;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_001003c2;
                  }
                }
              }
              puVar14 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar9 + 0x18)) {
                puVar14 = *(undefined **)(lVar9 + 0x10);
              }
              if ((((*(short *)(puVar14 + 4) != 0) || (*(short *)(puVar14 + 6) != 0)) ||
                  (*(short *)(puVar14 + 0x40) != 0)) ||
                 (plVar1 = (long *)(lVar3 + 0x78), *(short *)(puVar14 + 0x42) != 0)) {
LAB_00100420:
                if (*plVar2 == 0) {
                  if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                    hb_blob_get_empty();
                  }
                  else {
                    lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                      (*(hb_face_t **)(lVar3 + 0x70));
                    if (lVar9 == 0) {
                      lVar9 = hb_blob_get_empty();
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto code_r0x00100a3f;
                    }
                    else {
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto LAB_001007f6;
                    }
                  }
                }
                goto LAB_00100061;
              }
LAB_001005ae:
              lVar9 = *plVar1;
              if (lVar9 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  lVar9 = hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::head,1u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar1;
                    if (lVar10 == 0) {
                      *plVar1 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x001009db;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar1;
                    if (lVar10 == 0) {
                      *plVar1 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_0010059c;
                  }
                }
              }
              puVar14 = &_hb_NullPool;
              if (0x35 < *(uint *)(lVar9 + 0x18)) {
                puVar14 = *(undefined **)(lVar9 + 0x10);
              }
              if ((puVar14[0x2d] & 0x20) == 0) {
LAB_001005db:
                if (*plVar1 == 0) {
                  if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                    hb_blob_get_empty();
                  }
                  else {
                    lVar9 = hb_table_lazy_loader_t<OT::head,1u,true>::create
                                      (*(hb_face_t **)(lVar3 + 0x70));
                    if (lVar9 == 0) {
                      lVar9 = hb_blob_get_empty();
                      LOCK();
                      lVar10 = *plVar1;
                      if (lVar10 == 0) {
                        *plVar1 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto code_r0x00100a70;
                    }
                    else {
                      LOCK();
                      lVar10 = *plVar1;
                      if (lVar10 == 0) {
                        *plVar1 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto LAB_0010088e;
                    }
                  }
                }
              }
              goto LAB_00100061;
            }
            if (uVar15 == 0x77676874) {
LAB_00100118:
              lVar9 = *plVar2;
              if (lVar9 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  lVar9 = hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x001008f7;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar2;
                    if (lVar10 == 0) {
                      *plVar2 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_0010076e;
                  }
                }
              }
              puVar14 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar9 + 0x18)) {
                puVar14 = *(undefined **)(lVar9 + 0x10);
              }
              if (((*(short *)(puVar14 + 4) != 0) || (*(short *)(puVar14 + 6) != 0)) ||
                 ((*(short *)(puVar14 + 0x40) != 0 ||
                  (plVar1 = (long *)(lVar3 + 0x78), *(short *)(puVar14 + 0x42) != 0)))) {
LAB_00100160:
                if (*plVar2 == 0) {
                  if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                    hb_blob_get_empty();
                  }
                  else {
                    lVar9 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                      (*(hb_face_t **)(lVar3 + 0x70));
                    if (lVar9 == 0) {
                      lVar9 = hb_blob_get_empty();
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto code_r0x00100a0d;
                    }
                    else {
                      LOCK();
                      lVar10 = *plVar2;
                      if (lVar10 == 0) {
                        *plVar2 = lVar9;
                      }
                      UNLOCK();
                      if (lVar10 != 0) goto LAB_00100846;
                    }
                  }
                }
                goto LAB_00100061;
              }
LAB_00100654:
              if (*plVar1 == 0) {
                if (*(hb_face_t **)(lVar3 + 0x70) == (hb_face_t *)0x0) {
                  hb_blob_get_empty();
                }
                else {
                  lVar9 = hb_table_lazy_loader_t<OT::head,1u,true>::create
                                    (*(hb_face_t **)(lVar3 + 0x70));
                  if (lVar9 == 0) {
                    lVar9 = hb_blob_get_empty();
                    LOCK();
                    lVar10 = *plVar1;
                    if (lVar10 == 0) {
                      *plVar1 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto code_r0x001009aa;
                  }
                  else {
                    LOCK();
                    lVar10 = *plVar1;
                    if (lVar10 == 0) {
                      *plVar1 = lVar9;
                    }
                    UNLOCK();
                    if (lVar10 != 0) goto LAB_00100642;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00100061:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001007b3:
  if (lVar9 != 0) {
LAB_001006bd:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001000a8;
code_r0x00100979:
  if (lVar9 != 0) {
LAB_0010034b:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100360;
code_r0x00100aa1:
  if (lVar9 != 0) {
LAB_001002da:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001002f0;
code_r0x00100929:
  if (lVar9 != 0) {
LAB_00100725:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001001c8;
code_r0x001008c5:
  if (lVar9 != 0) {
LAB_001003c2:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001003d8;
code_r0x00100a3f:
  if (lVar9 != 0) {
LAB_001007f6:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100420;
code_r0x001009db:
  if (lVar9 != 0) {
LAB_0010059c:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001005ae;
code_r0x00100a70:
  if (lVar9 != 0) {
LAB_0010088e:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_001005db;
code_r0x001008f7:
  if (lVar9 != 0) {
LAB_0010076e:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100118;
code_r0x00100a0d:
  if (lVar9 != 0) {
LAB_00100846:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100160;
code_r0x001009aa:
  if (lVar9 != 0) {
LAB_00100642:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100654;
}



/* decltype (({parm#1}.sanitize)(this, (forward<OT::IntType<unsigned short, 2u> const&>)({parm#3}),
   (forward<OT::AxisValueOffsetArray const*>)({parm#3})))
   hb_sanitize_context_t::_dispatch<OT::AxisValueOffsetArray, OT::IntType<unsigned short, 2u>
   const&, OT::AxisValueOffsetArray const*>(OT::AxisValueOffsetArray const&, hb_priority<1u>,
   OT::IntType<unsigned short, 2u> const&, OT::AxisValueOffsetArray const*&&) [clone .isra.0] */

undefined8
hb_sanitize_context_t::
_dispatch<OT::AxisValueOffsetArray,OT::IntType<unsigned_short,2u>const&,OT::AxisValueOffsetArray_const*>
          (long param_1,long param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if ((ulong)(param_2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar6 = *param_3 << 8 | *param_3 >> 8;
    if (((uint)uVar6 + (uint)uVar6 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)param_2))
       && (iVar3 = *(int *)(param_1 + 0x1c) - ((uint)uVar6 + (uint)uVar6),
          *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) {
      if (uVar6 != 0) {
        lVar2 = param_2 + 4 + (ulong)(uVar6 - 1) * 2;
        lVar4 = param_2 + 2;
        do {
          while( true ) {
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)(lVar4 - *(long *)(param_1 + 8))) {
              return 0;
            }
            uVar6 = *(ushort *)(lVar4 + -2);
            if (uVar6 == 0) goto LAB_00100b30;
            puVar7 = (ushort *)(*param_4 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
            if ((ulong)((long)puVar7 + (2 - *(long *)(param_1 + 8))) <=
                (ulong)*(uint *)(param_1 + 0x18)) break;
LAB_00100bb0:
            if (0x1f < *(uint *)(param_1 + 0x2c)) {
              return 0;
            }
            *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
            if (*(char *)(param_1 + 0x28) == '\0') {
              return 0;
            }
            lVar5 = lVar4 + 2;
            *(undefined2 *)(lVar4 + -2) = 0;
            lVar4 = lVar5;
            if (lVar2 == lVar5) {
              return 1;
            }
          }
          uVar6 = *puVar7;
          if (uVar6 == 0x300) {
            if ((ulong)((long)puVar7 + (0x10 - *(long *)(param_1 + 8))) <=
                (ulong)*(uint *)(param_1 + 0x18)) goto LAB_00100b30;
            goto LAB_00100bb0;
          }
          if (3 < (ushort)(uVar6 << 8 | uVar6 >> 8)) {
            if ((uVar6 != 0x400) ||
               ((((puVar1 = puVar7 + 4,
                  (ulong)((long)puVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)
                  && ((ulong)((long)puVar1 - *(long *)(param_1 + 8)) <=
                      (ulong)*(uint *)(param_1 + 0x18))) &&
                 (uVar6 = puVar7[1] << 8 | puVar7[1] >> 8, iVar3 = (uint)uVar6 + (uint)uVar6 * 2,
                 (uint)(iVar3 * 2) <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar1)))
                && (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3,
                   0 < iVar3)))) goto LAB_00100b30;
            goto LAB_00100bb0;
          }
          if (uVar6 == 0x100) {
            if ((ulong)((long)puVar7 + (0xc - *(long *)(param_1 + 8))) <=
                (ulong)*(uint *)(param_1 + 0x18)) goto LAB_00100b30;
            goto LAB_00100bb0;
          }
          if ((uVar6 == 0x200) &&
             ((ulong)*(uint *)(param_1 + 0x18) <
              (ulong)((long)puVar7 + (0x14 - *(long *)(param_1 + 8))))) goto LAB_00100bb0;
LAB_00100b30:
          lVar4 = lVar4 + 2;
        } while (lVar2 != lVar4);
      }
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::STAT::get_value(unsigned int, float*) const */

undefined8 __thiscall OT::STAT::get_value(STAT *this,uint param_1,float *param_2)

{
  STAT *pSVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  STAT *pSVar5;
  ulong uVar6;
  STAT *pSVar7;
  ushort uVar8;
  float fVar9;
  
  uVar3 = *(uint *)(this + 8);
  uVar8 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  if (uVar8 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(this + lVar4 * 8 +
                               (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                       (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
      if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
          param_1) {
        uVar3 = *(uint *)(this + 0xe);
        uVar8 = *(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8;
        uVar6 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18);
        pSVar5 = this + uVar6;
        if (uVar8 == 0) {
          return 0;
        }
        pSVar1 = pSVar5 + (ulong)(uVar8 - 1) * 2 + 2;
        while( true ) {
          uVar8 = *(ushort *)pSVar5;
          pSVar7 = (STAT *)&_hb_NullPool;
          if (uVar8 != 0) {
            pSVar7 = this + (ushort)(uVar8 << 8 | uVar8 >> 8) + uVar6;
          }
          uVar8 = *(ushort *)pSVar7;
          if ((((uVar8 == 0x200) || (uVar8 == 0x300)) || (uVar8 == 0x100)) &&
             ((uint)lVar4 ==
              (uint)(ushort)(*(ushort *)(pSVar7 + 2) << 8 | *(ushort *)(pSVar7 + 2) >> 8))) break;
          pSVar5 = pSVar5 + 2;
          if (pSVar1 == pSVar5) {
            return 0;
          }
          uVar3 = *(uint *)(this + 0xe);
          uVar6 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18);
        }
        if (param_2 == (float *)0x0) {
          return 1;
        }
        uVar8 = *(ushort *)pSVar7;
        if (uVar8 == 0x300) {
LAB_00100d7e:
          uVar3 = *(uint *)(pSVar7 + 8);
LAB_00100d81:
          fVar9 = ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                               uVar3 << 0x18) + 0.0) * __LC1;
        }
        else {
          if ((ushort)(uVar8 << 8 | uVar8 >> 8) < 4) {
            if ((uVar8 == 0x100) || (uVar8 == 0x200)) goto LAB_00100d7e;
          }
          else if (uVar8 == 0x400) {
            pSVar5 = (STAT *)&_hb_NullPool;
            if ((uint)lVar4 <
                (uint)(ushort)(*(ushort *)(pSVar7 + 2) << 8 | *(ushort *)(pSVar7 + 2) >> 8)) {
              pSVar5 = pSVar7 + lVar4 * 6 + 8;
            }
            uVar3 = *(uint *)(pSVar5 + 2);
            goto LAB_00100d81;
          }
          fVar9 = 0.0;
        }
        *param_2 = fVar9;
        return 1;
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)uVar8);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::post::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::post::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  void *pvVar9;
  uint uVar10;
  ushort *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  byte *pbVar14;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  hb_face_get_glyph_count(param_1);
  puVar6 = (undefined *)hb_face_reference_table(param_1,0x706f7374);
  lVar7 = hb_blob_reference(puVar6);
  uVar10 = *(uint *)(lVar7 + 0x18);
  puVar11 = *(ushort **)(lVar7 + 0x10);
  if (uVar10 >> 0x1a == 0) {
    uVar5 = uVar10 * 0x40;
    if (0x3fffffff < uVar10 * 0x40) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 < 0x4000) {
      uVar5 = 0x4000;
    }
  }
  else {
    uVar5 = 0x3fffffff;
  }
  if (puVar11 == (ushort *)0x0) {
    hb_blob_destroy(lVar7);
    goto LAB_00100edd;
  }
  if (uVar10 < 0x20) {
LAB_00100ec8:
    hb_blob_destroy(lVar7);
    hb_blob_destroy(puVar6);
    puVar6 = (undefined *)hb_blob_get_empty();
  }
  else {
    iVar3 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 +
            (uint)(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
    if (iVar3 != 0x10000) {
      if (iVar3 == 0x20000) {
        if (((0x21 < uVar10) &&
            (uVar4 = (uint)(ushort)(puVar11[0x10] << 8 | puVar11[0x10] >> 8),
            uVar4 * 2 <= uVar10 - 0x22)) && (0 < (int)(uVar5 + uVar4 * -2))) goto LAB_00101090;
        iVar3 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 +
                (uint)(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
      }
      if (iVar3 != 0x30000) goto LAB_00100ec8;
    }
LAB_00101090:
    hb_blob_destroy(lVar7);
    hb_blob_make_immutable(puVar6);
  }
LAB_00100edd:
  *(undefined **)this = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = &_hb_NullPool;
  }
  uVar10 = *(uint *)(puVar6 + 0x18);
  puVar11 = (ushort *)&_hb_NullPool;
  if (0x1f < uVar10) {
    puVar11 = *(ushort **)(puVar6 + 0x10);
  }
  iVar3 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 +
          (uint)(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
  *(int *)(this + 8) = iVar3;
  if (iVar3 == 0x20000) {
    puVar6 = *(undefined **)this;
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &_hb_NullPool;
    }
    puVar13 = &_hb_NullPool;
    if (0x1f < *(uint *)(puVar6 + 0x18)) {
      puVar13 = *(undefined **)(puVar6 + 0x10);
    }
    uVar1 = *(ushort *)(puVar13 + 0x20);
    *(undefined **)(this + 0x10) = puVar13 + 0x20;
    *(undefined **)(this + 0x28) = puVar13 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) * 2 + 0x22;
    pbVar14 = puVar13 + uVar10;
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar5 == 0xffffffff) {
      uVar5 = hb_face_t::load_num_glyphs();
    }
    uVar4 = *(uint *)(this + 0x18);
    uVar2 = uVar10 >> 3;
    if (uVar5 < uVar10 >> 3) {
      uVar2 = uVar5;
    }
    if ((-1 < (int)uVar4) && (uVar4 < uVar2)) {
      do {
        uVar4 = uVar4 + 8 + (uVar4 >> 1);
      } while (uVar4 < uVar2);
      pvVar9 = realloc(*(void **)(this + 0x20),(ulong)uVar4 << 2);
      if (pvVar9 == (void *)0x0) {
        if (*(uint *)(this + 0x18) < uVar4) {
          *(uint *)(this + 0x18) = ~*(uint *)(this + 0x18);
        }
      }
      else {
        *(void **)(this + 0x20) = pvVar9;
        *(uint *)(this + 0x18) = uVar4;
      }
    }
    uVar10 = *(uint *)(this + 0x1c);
    pbVar8 = *(byte **)(this + 0x28);
    if (((uVar10 < 0xffff) && (pbVar8 < pbVar14)) && (pbVar12 = pbVar8, pbVar8 + *pbVar8 < pbVar14))
    {
      do {
        uVar5 = *(uint *)(this + 0x18);
        if ((int)uVar10 < (int)uVar5) {
LAB_00100fb8:
          pvVar9 = *(void **)(this + 0x20);
LAB_00100fbd:
          uVar10 = *(uint *)(this + 0x1c) + 1;
          *(int *)((long)pvVar9 + (ulong)*(uint *)(this + 0x1c) * 4) = (int)pbVar12 - (int)pbVar8;
          *(uint *)(this + 0x1c) = uVar10;
        }
        else {
          if (-1 < (int)uVar5) {
            pvVar9 = *(void **)(this + 0x20);
            if (uVar5 < uVar10 + 1) {
              do {
                uVar5 = uVar5 + 8 + (uVar5 >> 1);
              } while (uVar5 < uVar10 + 1);
              pvVar9 = realloc(pvVar9,(ulong)uVar5 << 2);
              if (pvVar9 == (void *)0x0) {
                if (uVar5 <= *(uint *)(this + 0x18)) goto LAB_00100fb8;
                *(uint *)(this + 0x18) = ~*(uint *)(this + 0x18);
                goto LAB_00101135;
              }
              *(void **)(this + 0x20) = pvVar9;
              *(uint *)(this + 0x18) = uVar5;
            }
            goto LAB_00100fbd;
          }
LAB_00101135:
          __hb_CrapPool = __hb_NullPool;
          uVar10 = *(uint *)(this + 0x1c);
        }
        pbVar12 = pbVar12 + (ulong)*pbVar12 + 1;
        if (pbVar14 <= pbVar12) {
          return;
        }
        if (0xfffe < uVar10) {
          return;
        }
        if (pbVar14 <= pbVar12 + *pbVar12) {
          return;
        }
        pbVar8 = *(byte **)(this + 0x28);
      } while( true );
    }
  }
  return;
}



/* hb_table_lazy_loader_t<OT::STAT, 9u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::STAT,9u,true>::create(hb_face_t *param_1)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  long in_FS_OFFSET;
  long local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 1;
  local_58 = 0;
  local_50 = '\0';
  local_40 = 0;
  lVar5 = hb_face_reference_table(param_1,0x53544154);
  lVar6 = hb_blob_reference(lVar5);
  local_48 = lVar6;
  do {
    local_60 = *(uint *)(lVar6 + 0x18);
    psVar3 = *(short **)(lVar6 + 0x10);
    local_5c = local_60 * 0x40;
    local_70._8_8_ = (long)psVar3 + (ulong)local_60;
    if (local_60 >> 0x1a == 0) {
      if (0x3fffffff < local_5c) {
        local_5c = 0x3fffffff;
      }
      if (local_5c < 0x4000) {
        local_5c = 0x4000;
      }
    }
    else {
      local_5c = 0x3fffffff;
    }
    local_70._0_8_ = psVar3;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (psVar3 == (short *)0x0) {
      hb_blob_destroy(lVar6);
LAB_00101368:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar5;
      }
      goto LAB_00101502;
    }
    if ((ulong)local_60 < 0x14) goto LAB_00101393;
    if (((*psVar3 == 0x100) && (psVar3[1] != 0)) &&
       (psVar1 = psVar3 + 6, (ulong)((long)psVar1 - (long)psVar3) <= (ulong)local_60)) {
      uVar2 = *(uint *)(psVar3 + 4);
      lVar6 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                     uVar2 << 0x18) + (long)psVar3;
      if ((((ulong)(lVar6 - (long)psVar3) <= (ulong)local_60) &&
          (uVar2 = (uint)(ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8),
          uVar2 * 8 <= (uint)((int)local_70._8_8_ - (int)lVar6))) &&
         (local_5c = local_5c + uVar2 * -8, 0 < (int)local_5c)) {
        uVar2 = *(uint *)(psVar3 + 7);
        local_80 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18) + (long)psVar3;
        if (0x11 < (ulong)local_60) {
          uVar2 = *(uint *)(psVar3 + 7);
          psVar7 = psVar3;
          cVar4 = hb_sanitize_context_t::
                  _dispatch<OT::AxisValueOffsetArray,OT::IntType<unsigned_short,2u>const&,OT::AxisValueOffsetArray_const*>
                            (local_78,(ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                              (uVar2 & 0xff00) << 8 | uVar2 << 0x18) + (long)psVar3,
                             psVar1,&local_80);
          if (cVar4 != '\0') {
            if (local_4c == 0) {
              hb_blob_destroy(local_48);
LAB_00101315:
              hb_blob_make_immutable(lVar5);
              goto LAB_00101368;
            }
            local_4c = 0;
            if ((((ulong)((long)psVar7 + (0x14 - local_70._0_8_)) <= (ulong)local_60) &&
                (*psVar7 == 0x100)) &&
               ((psVar7[1] != 0 && ((ulong)((long)psVar1 - local_70._0_8_) <= (ulong)local_60)))) {
              uVar2 = *(uint *)(psVar7 + 4);
              lVar6 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                             uVar2 << 0x18) + (long)psVar7;
              if ((((ulong)(lVar6 - local_70._0_8_) <= (ulong)local_60) &&
                  (uVar2 = (uint)(ushort)(psVar7[3] << 8 | (ushort)psVar7[3] >> 8),
                  uVar2 * 8 <= (uint)(local_70._8_4_ - (int)lVar6))) &&
                 (local_5c = local_5c + uVar2 * -8, 0 < (int)local_5c)) {
                uVar2 = *(uint *)(psVar7 + 7);
                local_80 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18) + (long)psVar7;
                if ((ulong)((long)psVar3 + (0x12 - local_70._0_8_)) <= (ulong)local_60) {
                  cVar4 = hb_sanitize_context_t::
                          _dispatch<OT::AxisValueOffsetArray,OT::IntType<unsigned_short,2u>const&,OT::AxisValueOffsetArray_const*>
                                    ();
                  lVar6 = local_48;
                  if (local_4c == 0) {
                    hb_blob_destroy(local_48);
                    local_48 = 0;
                    local_60 = 0;
                    local_70 = (undefined1  [16])0x0;
                    if (cVar4 != '\0') goto LAB_00101315;
                    goto LAB_00101398;
                  }
LAB_00101393:
                  hb_blob_destroy(lVar6);
LAB_00101398:
                  hb_blob_destroy(lVar5);
                  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    lVar6 = hb_blob_get_empty();
                    return lVar6;
                  }
LAB_00101502:
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
              }
            }
            hb_blob_destroy(local_48);
            goto LAB_00101398;
          }
        }
      }
    }
    lVar6 = local_48;
    if ((local_4c == 0) || (local_50 != '\0')) goto LAB_00101393;
    local_70._0_8_ = hb_blob_get_data_writable(lVar5,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar5 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00101393;
    local_50 = '\x01';
  } while( true );
}



/* hb_table_lazy_loader_t<OT::OS2, 6u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::OS2,6u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar2 = hb_face_reference_table(param_1,0x4f532f32);
  lVar3 = hb_blob_reference(uVar2);
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (*(ushort **)(lVar3 + 0x10) == (ushort *)0x0) {
    hb_blob_destroy(lVar3);
    return uVar2;
  }
  if ((0x4d < uVar1) &&
     ((uVar4 = **(ushort **)(lVar3 + 0x10), uVar4 = uVar4 << 8 | uVar4 >> 8, uVar4 == 0 ||
      ((0x55 < uVar1 && ((uVar4 == 1 || ((0x5f < uVar1 && ((uVar4 < 5 || (99 < uVar1)))))))))))) {
    hb_blob_destroy(lVar3);
    hb_blob_make_immutable(uVar2);
    return uVar2;
  }
  hb_blob_destroy(lVar3);
  hb_blob_destroy(uVar2);
  uVar2 = hb_blob_get_empty();
  return uVar2;
}



/* hb_table_lazy_loader_t<OT::head, 1u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::head,1u,true>::create(hb_face_t *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = hb_face_reference_table(param_1,0x68656164);
  lVar3 = hb_blob_reference(uVar2);
  psVar1 = *(short **)(lVar3 + 0x10);
  if (psVar1 == (short *)0x0) {
    hb_blob_destroy();
  }
  else {
    if (((*(uint *)(lVar3 + 0x18) < 0x36) || (*psVar1 != 0x100)) ||
       (*(int *)(psVar1 + 6) != -0xac3f0a1)) {
      hb_blob_destroy();
      hb_blob_destroy(uVar2);
      uVar2 = hb_blob_get_empty();
      return uVar2;
    }
    hb_blob_destroy();
    hb_blob_make_immutable(uVar2);
  }
  return uVar2;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::post::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::post::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


