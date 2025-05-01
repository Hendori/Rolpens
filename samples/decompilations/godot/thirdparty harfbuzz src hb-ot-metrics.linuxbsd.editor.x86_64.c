
void hb_ot_metrics_get_variation(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  long lVar4;
  long lVar5;
  MVAR *this;
  
  lVar2 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar2 + 0x120);
LAB_0010001e:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    phVar3 = *(hb_face_t **)(lVar2 + 0x70);
    if (phVar3 == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::MVAR,22u,true>::create(phVar3);
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x001000d4;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100081;
      }
    }
  }
  this = (MVAR *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar4 + 0x18)) {
    this = *(MVAR **)(lVar4 + 0x10);
  }
  OT::MVAR::get_var(this,param_2,*(int **)(param_1 + 0x80),*(uint *)(param_1 + 0x78));
  return;
code_r0x001000d4:
  if (lVar4 != 0) {
LAB_00100081:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_0010001e;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int hb_ot_metrics_get_x_variation(long param_1)

{
  float fVar1;
  
  fVar1 = (float)hb_ot_metrics_get_variation();
  fVar1 = fVar1 * *(float *)(param_1 + 0x4c) + __LC4;
  if ((float)((uint)fVar1 & _LC7) < _LC5) {
    fVar1 = (float)((uint)((float)(int)fVar1 - (float)(-(uint)(fVar1 < (float)(int)fVar1) & _LC1)) |
                   ~_LC7 & (uint)fVar1);
  }
  return (int)fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int hb_ot_metrics_get_y_variation(long param_1)

{
  float fVar1;
  
  fVar1 = (float)hb_ot_metrics_get_variation();
  fVar1 = fVar1 * *(float *)(param_1 + 0x50) + __LC4;
  if ((float)((uint)fVar1 & _LC7) < _LC5) {
    fVar1 = (float)((uint)((float)(int)fVar1 - (float)(-(uint)(fVar1 < (float)(int)fVar1) & _LC1)) |
                   ~_LC7 & (uint)fVar1);
  }
  return (int)fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 hb_ot_metrics_get_position(long param_1,ulong param_2,int *param_3)

{
  hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t> *phVar1;
  ushort uVar2;
  hb_face_t *phVar3;
  undefined1 uVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  short *psVar9;
  accelerator_t *paVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t> *this;
  long *plVar20;
  uint uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  
  lVar7 = *(long *)(param_1 + 0x20);
  plVar20 = (long *)(lVar7 + 0xa0);
  uVar5 = (uint)param_2;
  if (uVar5 == 0x7362796f) {
LAB_00102b30:
    lVar11 = *plVar20;
    if (lVar11 == 0) {
      if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
        lVar11 = hb_blob_get_empty();
      }
      else {
        lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
        if (lVar11 == 0) {
          lVar11 = hb_blob_get_empty();
          LOCK();
          lVar12 = *plVar20;
          if (lVar12 == 0) {
            *plVar20 = lVar11;
          }
          UNLOCK();
          if (lVar12 != 0) goto code_r0x00103f01;
        }
        else {
          LOCK();
          lVar12 = *plVar20;
          if (lVar12 == 0) {
            *plVar20 = lVar11;
          }
          UNLOCK();
          if (lVar12 != 0) goto LAB_00102b17;
        }
      }
    }
    puVar15 = &_hb_NullPool;
    if (0x4d < *(uint *)(lVar11 + 0x18)) {
      puVar15 = *(undefined **)(lVar11 + 0x10);
    }
    if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
        (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
      return 0;
    }
    if (param_3 == (int *)0x0) {
      return 1;
    }
LAB_00102b79:
    lVar11 = *plVar20;
    if (lVar11 == 0) {
      if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
        lVar11 = hb_blob_get_empty();
      }
      else {
        lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
        if (lVar11 == 0) {
          lVar11 = hb_blob_get_empty();
          LOCK();
          lVar12 = *plVar20;
          if (lVar12 == 0) {
            *plVar20 = lVar11;
          }
          UNLOCK();
          if (lVar12 != 0) goto code_r0x001044ab;
        }
        else {
          LOCK();
          lVar12 = *plVar20;
          if (lVar12 == 0) {
            *plVar20 = lVar11;
          }
          UNLOCK();
          if (lVar12 != 0) goto LAB_00103c2f;
        }
      }
    }
    puVar15 = &_hb_NullPool;
    if (0x4d < *(uint *)(lVar11 + 0x18)) {
      puVar15 = *(undefined **)(lVar11 + 0x10);
    }
    uVar18 = 0x7362796f;
    fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x10) << 8 | *(ushort *)(puVar15 + 0x10) >> 8
                                );
  }
  else if (uVar5 < 0x73627970) {
    plVar20 = (long *)(lVar7 + 0xa0);
    if (uVar5 == 0x63706874) {
LAB_00102d80:
      lVar11 = *plVar20;
      if (lVar11 == 0) {
        if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
          lVar11 = hb_blob_get_empty();
        }
        else {
          lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
          if (lVar11 == 0) {
            lVar11 = hb_blob_get_empty();
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto code_r0x00103f33;
          }
          else {
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto LAB_00102d65;
          }
        }
      }
      puVar6 = (ushort *)&_hb_NullPool;
      if (0x4d < *(uint *)(lVar11 + 0x18)) {
        puVar6 = *(ushort **)(lVar11 + 0x10);
      }
      puVar8 = (ushort *)&_hb_NullPool;
      if (1 < (ushort)(*puVar6 << 8 | *puVar6 >> 8)) {
        puVar8 = puVar6 + 0x2b;
      }
      if ((*puVar8 == 0) && (puVar8[1] == 0)) {
        return 0;
      }
      if (param_3 == (int *)0x0) {
        return 1;
      }
LAB_00102dcf:
      lVar11 = *plVar20;
      if (lVar11 == 0) {
        if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
          lVar11 = hb_blob_get_empty();
        }
        else {
          lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
          if (lVar11 == 0) {
            lVar11 = hb_blob_get_empty();
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto code_r0x0010454f;
          }
          else {
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto LAB_0010377e;
          }
        }
      }
      uVar18 = 0x63706874;
      puVar6 = (ushort *)&_hb_NullPool;
      if (0x4d < *(uint *)(lVar11 + 0x18)) {
        puVar6 = *(ushort **)(lVar11 + 0x10);
      }
      puVar8 = puVar6 + 0x2b;
      if ((ushort)(*puVar6 << 8 | *puVar6 >> 8) < 2) {
        puVar8 = (ushort *)&_hb_NullPool;
      }
      fVar24 = (float)(int)(short)(puVar8[1] << 8 | puVar8[1] >> 8);
    }
    else {
      if (0x63706874 < uVar5) {
        if (uVar5 == 0x6863726e) {
          if (*(float *)(param_1 + 0x44) == 0.0) {
            bVar22 = param_3 != (int *)0x0;
            uVar17 = 1;
            iVar13 = 0;
            goto LAB_00102ea2;
          }
        }
        else {
          if (uVar5 < 0x6863726f) {
            plVar20 = (long *)(lVar7 + 0xa0);
            if (uVar5 == 0x68636c64) {
LAB_00102a60:
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                  lVar11 = hb_blob_get_empty();
                }
                else {
                  lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                     (*(hb_face_t **)(lVar7 + 0x70));
                  if (lVar11 == 0) {
                    lVar11 = hb_blob_get_empty();
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto code_r0x00103f97;
                  }
                  else {
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto LAB_00102a48;
                  }
                }
              }
              puVar15 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar11 + 0x18)) {
                puVar15 = *(undefined **)(lVar11 + 0x10);
              }
              if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
                  (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
                return 0;
              }
              if (param_3 == (int *)0x0) {
                return 1;
              }
LAB_00102aa9:
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                  lVar11 = hb_blob_get_empty();
                }
                else {
                  lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                     (*(hb_face_t **)(lVar7 + 0x70));
                  if (lVar11 == 0) {
                    lVar11 = hb_blob_get_empty();
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto code_r0x00104801;
                  }
                  else {
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto LAB_001038d2;
                  }
                }
              }
              puVar15 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar11 + 0x18)) {
                puVar15 = *(undefined **)(lVar11 + 0x10);
              }
              uVar18 = 0x68636c64;
              fVar24 = (float)(ushort)(*(ushort *)(puVar15 + 0x4c) << 8 |
                                      *(ushort *)(puVar15 + 0x4c) >> 8);
            }
            else {
              if (0x68636c64 < uVar5) {
                plVar20 = (long *)(lVar7 + 0x90);
                if (uVar5 != 0x68636f66) {
                  return 0;
                }
LAB_00102054:
                lVar11 = *plVar20;
                if (lVar11 == 0) {
                  if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                    lVar11 = hb_blob_get_empty();
                  }
                  else {
                    lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                       (*(hb_face_t **)(lVar7 + 0x70));
                    if (lVar11 == 0) {
                      lVar11 = hb_blob_get_empty();
                      LOCK();
                      lVar12 = *plVar20;
                      if (lVar12 == 0) {
                        *plVar20 = lVar11;
                      }
                      UNLOCK();
                      if (lVar12 != 0) goto code_r0x00104340;
                    }
                    else {
                      LOCK();
                      lVar12 = *plVar20;
                      if (lVar12 == 0) {
                        *plVar20 = lVar11;
                      }
                      UNLOCK();
                      if (lVar12 != 0) goto LAB_00103586;
                    }
                  }
                }
                psVar9 = (short *)&_hb_NullPool;
                if (0x23 < *(uint *)(lVar11 + 0x18)) {
                  psVar9 = *(short **)(lVar11 + 0x10);
                }
                if (*psVar9 == 0) {
                  return 0;
                }
                if (param_3 == (int *)0x0) {
                  return 1;
                }
LAB_0010208a:
                lVar11 = *plVar20;
                if (lVar11 == 0) {
                  if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                    lVar11 = hb_blob_get_empty();
                  }
                  else {
                    lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                       (*(hb_face_t **)(lVar7 + 0x70));
                    if (lVar11 == 0) {
                      lVar11 = hb_blob_get_empty();
                      LOCK();
                      lVar12 = *plVar20;
                      if (lVar12 == 0) {
                        *plVar20 = lVar11;
                      }
                      UNLOCK();
                      if (lVar12 != 0) goto code_r0x001045b3;
                    }
                    else {
                      LOCK();
                      lVar12 = *plVar20;
                      if (lVar12 == 0) {
                        *plVar20 = lVar11;
                      }
                      UNLOCK();
                      if (lVar12 != 0) goto LAB_00103a88;
                    }
                  }
                }
                puVar15 = &_hb_NullPool;
                if (0x23 < *(uint *)(lVar11 + 0x18)) {
                  puVar15 = *(undefined **)(lVar11 + 0x10);
                }
                uVar2 = *(ushort *)(puVar15 + 0x16);
                fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x68636f66);
                fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                         *(float *)(param_1 + 0x4c);
                goto LAB_00101da8;
              }
              if (uVar5 == 0x68617363) goto LAB_00102e60;
              plVar20 = (long *)(lVar7 + 0xa0);
              if (uVar5 != 0x68636c61) {
                return 0;
              }
LAB_00101b84:
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                  lVar11 = hb_blob_get_empty();
                }
                else {
                  lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                     (*(hb_face_t **)(lVar7 + 0x70));
                  if (lVar11 == 0) {
                    lVar11 = hb_blob_get_empty();
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto code_r0x001043d5;
                  }
                  else {
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto LAB_00103131;
                  }
                }
              }
              puVar15 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar11 + 0x18)) {
                puVar15 = *(undefined **)(lVar11 + 0x10);
              }
              if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
                 ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
                return 0;
              }
              if (param_3 == (int *)0x0) {
                return 1;
              }
LAB_00101bd9:
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                  lVar11 = hb_blob_get_empty();
                }
                else {
                  lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                     (*(hb_face_t **)(lVar7 + 0x70));
                  if (lVar11 == 0) {
                    lVar11 = hb_blob_get_empty();
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto code_r0x00104907;
                  }
                  else {
                    LOCK();
                    lVar12 = *plVar20;
                    if (lVar12 == 0) {
                      *plVar20 = lVar11;
                    }
                    UNLOCK();
                    if (lVar12 != 0) goto LAB_00103be6;
                  }
                }
              }
              puVar15 = &_hb_NullPool;
              if (0x4d < *(uint *)(lVar11 + 0x18)) {
                puVar15 = *(undefined **)(lVar11 + 0x10);
              }
              uVar18 = 0x68636c61;
              fVar24 = (float)(ushort)(*(ushort *)(puVar15 + 0x4a) << 8 |
                                      *(ushort *)(puVar15 + 0x4a) >> 8);
            }
            goto LAB_00101c20;
          }
          plVar20 = (long *)(lVar7 + 0xa0);
          if (uVar5 == 0x7362786f) {
LAB_00102980:
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x0010430e;
                }
                else {
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_00102968;
                }
              }
            }
            puVar15 = &_hb_NullPool;
            if (0x4d < *(uint *)(lVar11 + 0x18)) {
              puVar15 = *(undefined **)(lVar11 + 0x10);
            }
            if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
               ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
              return 0;
            }
            if (param_3 == (int *)0x0) {
              return 1;
            }
LAB_001029c9:
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x001048a3;
                }
                else {
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_001039f6;
                }
              }
            }
            puVar15 = &_hb_NullPool;
            if (0x4d < *(uint *)(lVar11 + 0x18)) {
              puVar15 = *(undefined **)(lVar11 + 0x10);
            }
            uVar2 = *(ushort *)(puVar15 + 0xe);
            fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x7362786f);
            fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                     *(float *)(param_1 + 0x4c);
            goto LAB_00101da8;
          }
          if (0x7362786f < uVar5) {
            phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                      *)(lVar7 + 0xa0);
            if (uVar5 != 0x73627873) {
              return 0;
            }
LAB_00101c6e:
            lVar11 = *(long *)phVar1;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *(long *)phVar1;
                  if (lVar12 == 0) {
                    *(long *)phVar1 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x00104214;
                }
                else {
                  LOCK();
                  lVar12 = *(long *)phVar1;
                  if (lVar12 == 0) {
                    *(long *)phVar1 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_001032d0;
                }
              }
            }
            puVar15 = &_hb_NullPool;
            if (0x4d < *(uint *)(lVar11 + 0x18)) {
              puVar15 = *(undefined **)(lVar11 + 0x10);
            }
            if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
                (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
              return 0;
            }
            if (param_3 == (int *)0x0) {
              return 1;
            }
            lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                    ::get(phVar1);
            uVar2 = *(ushort *)(lVar7 + 10);
            fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x73627873);
            fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                     *(float *)(param_1 + 0x4c);
            goto LAB_00101da8;
          }
          if (uVar5 != 0x68637273) {
            if (uVar5 < 0x68637273) {
              return 0;
            }
            if ((uVar5 != 0x68647363) && (uVar5 != 0x686c6770)) {
              return 0;
            }
            goto LAB_00102e60;
          }
          uVar17 = 1;
          if (*(float *)(param_1 + 0x44) == 0.0) goto LAB_00102665;
        }
        plVar20 = (long *)(lVar7 + 0x90);
LAB_00103048:
        uVar19 = param_2;
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create(*(hb_face_t **)(lVar7 + 0x70))
            ;
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x0010486d;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_001037eb;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x23 < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        uVar5 = *(uint *)(lVar7 + 0x14);
        uVar21 = (uint)(short)(*(ushort *)(puVar15 + 0x12) << 8 | *(ushort *)(puVar15 + 0x12) >> 8);
        if (uVar5 == 0) {
          uVar5 = hb_face_t::load_upem();
        }
        if ((uVar21 == 0) || (uVar5 <= uVar21)) {
          uVar17 = 1;
        }
        else {
          uVar17 = 0x100;
          if ((uint)((ulong)uVar5 / (ulong)uVar21) < 0x101) {
            uVar17 = (ulong)uVar5 / (ulong)uVar21;
          }
        }
        if ((int)uVar19 == 0x68637273) {
LAB_00102665:
          this = (hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                  *)(lVar7 + 0x90);
          lVar11 = *(long *)this;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *(long *)this;
                if (lVar12 == 0) {
                  *(long *)this = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x0010493d;
              }
              else {
                LOCK();
                lVar12 = *(long *)this;
                if (lVar12 == 0) {
                  *(long *)this = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103dde;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 == 0) {
            uVar4 = 0;
            if (param_3 == (int *)0x0) {
              return 0;
            }
            iVar13 = *param_3;
          }
          else {
            if (param_3 == (int *)0x0) {
              return 1;
            }
            lVar7 = hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                    ::get(this);
            uVar2 = *(ushort *)(lVar7 + 0x12);
            fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x68637273);
            fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                     *(float *)(param_1 + 0x50) + __LC4;
            if ((float)((uint)fVar24 & _LC7) < _LC5) {
              fVar24 = (float)((uint)((float)(int)fVar24 -
                                     (float)(-(uint)(fVar24 < (float)(int)fVar24) & _LC1)) |
                              ~_LC7 & (uint)fVar24);
            }
            iVar13 = (int)fVar24;
            uVar4 = 1;
          }
          *param_3 = (int)uVar17 * iVar13;
          return uVar4;
        }
        bVar22 = *(float *)(param_1 + 0x44) != 0.0 && param_3 != (int *)0x0;
        if (bVar22) {
LAB_001030c9:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x0010473b;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103eb5;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 != 0) {
LAB_00103648:
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x0010363f;
                }
                else {
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_00104430;
                }
              }
            }
            puVar15 = &_hb_NullPool;
            if (0x23 < *(uint *)(lVar11 + 0x18)) {
              puVar15 = *(undefined **)(lVar11 + 0x10);
            }
            uVar2 = *(ushort *)(puVar15 + 0x12);
            fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x6863726e);
            fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                     *(float *)(param_1 + 0x50) + __LC4;
            if ((float)((uint)fVar24 & _LC7) < _LC5) {
              fVar24 = (float)((uint)((float)(int)fVar24 -
                                     (float)(-(uint)(fVar24 < (float)(int)fVar24) & _LC1)) |
                              ~_LC7 & (uint)fVar24);
            }
            iVar13 = (int)fVar24;
            *param_3 = iVar13;
            goto LAB_00102ea2;
          }
        }
        iVar13 = 0;
        bVar22 = param_3 != (int *)0x0;
LAB_00102ea2:
        plVar20 = (long *)(lVar7 + 0x90);
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create(*(hb_face_t **)(lVar7 + 0x70))
            ;
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00104486;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_001035f1;
            }
          }
        }
        psVar9 = (short *)&_hb_NullPool;
        if (0x23 < *(uint *)(lVar11 + 0x18)) {
          psVar9 = *(short **)(lVar11 + 0x10);
        }
        if (*psVar9 == 0) {
          uVar4 = 0;
          if (!bVar22) {
            return 0;
          }
          iVar14 = *param_3;
        }
        else {
          if (!bVar22) {
            return 1;
          }
LAB_00102eda:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104515;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103e45;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar2 = *(ushort *)(puVar15 + 0x14);
          fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x6863726e);
          fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                   *(float *)(param_1 + 0x4c) + __LC4;
          if ((float)((uint)fVar24 & _LC7) < _LC5) {
            fVar24 = (float)((uint)((float)(int)fVar24 -
                                   (float)(-(uint)(fVar24 < (float)(int)fVar24) & _LC1)) |
                            ~_LC7 & (uint)fVar24);
          }
          iVar14 = (int)fVar24;
          uVar4 = 1;
        }
        iVar14 = iVar14 * (int)uVar17;
        fVar24 = *(float *)(param_1 + 0x44);
        *param_3 = iVar14;
        if (fVar24 != 0.0) {
          fVar24 = (float)(int)uVar17 * *(float *)(param_1 + 0x48) * (float)iVar13 + __LC4;
          if ((float)((uint)fVar24 & _LC7) < _LC5) {
            fVar24 = (float)((uint)((float)(int)fVar24 -
                                   (float)(-(uint)(fVar24 < (float)(int)fVar24) & _LC1)) |
                            ~_LC7 & (uint)fVar24);
          }
          *param_3 = (int)((float)iVar14 + fVar24);
          return uVar4;
        }
        return uVar4;
      }
      if (uVar5 == 0x4f617363) {
        phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                  *)(lVar7 + 0xa0);
LAB_001025b8:
        lVar11 = *(long *)phVar1;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00104371;
            }
            else {
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010317d;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
            (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                ::get(phVar1);
        uVar18 = 0x4f617363;
        fVar24 = (float)(int)(short)(*(ushort *)(lVar7 + 0x44) << 8 | *(ushort *)(lVar7 + 0x44) >> 8
                                    );
      }
      else if (uVar5 < 0x4f617364) {
        plVar20 = (long *)(lVar7 + 0x90);
        if (uVar5 == 0x48647363) {
LAB_00102c00:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001040fe;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00102be5;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_00102c32:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001046cc;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_001039ad;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar18 = 0x48647363;
          fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 6) << 8 | *(ushort *)(puVar15 + 6) >> 8
                                      );
        }
        else if (uVar5 == 0x486c6770) {
LAB_00102280:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001042dc;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_0010226e;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_001022b2:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x0010479d;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103c78;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar18 = 0x486c6770;
          fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 8) << 8 | *(ushort *)(puVar15 + 8) >> 8
                                      );
        }
        else {
          if (uVar5 != 0x48617363) {
            return 0;
          }
LAB_001018fe:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104193;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103536;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_00101934:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104668;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103d0a;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar18 = 0x48617363;
          fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 4) << 8 | *(ushort *)(puVar15 + 4) >> 8
                                      );
        }
      }
      else if (uVar5 == 0x4f647363) {
        phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                  *)(lVar7 + 0xa0);
LAB_00102530:
        lVar11 = *(long *)phVar1;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00104161;
            }
            else {
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010340d;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
           ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                ::get(phVar1);
        uVar18 = 0x4f647363;
        fVar24 = (float)(int)(short)(*(ushort *)(lVar7 + 0x46) << 8 | *(ushort *)(lVar7 + 0x46) >> 8
                                    );
      }
      else {
        plVar20 = (long *)(lVar7 + 0xa0);
        if (uVar5 != 0x4f6c6770) {
          return 0;
        }
LAB_00101e38:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x001042aa;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010326e;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
           ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
LAB_00101e89:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00104617;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_00103cc1;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        uVar18 = 0x4f6c6770;
        fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x48) << 8 |
                                    *(ushort *)(puVar15 + 0x48) >> 8);
      }
    }
  }
  else {
    plVar20 = (long *)(lVar7 + 0xa0);
    if (uVar5 == 0x73747273) {
LAB_00102cb0:
      lVar11 = *plVar20;
      if (lVar11 == 0) {
        if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
          lVar11 = hb_blob_get_empty();
        }
        else {
          lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
          if (lVar11 == 0) {
            lVar11 = hb_blob_get_empty();
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto code_r0x0010402c;
          }
          else {
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto LAB_00102c9e;
          }
        }
      }
      puVar15 = &_hb_NullPool;
      if (0x4d < *(uint *)(lVar11 + 0x18)) {
        puVar15 = *(undefined **)(lVar11 + 0x10);
      }
      if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
         ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
        return 0;
      }
      if (param_3 == (int *)0x0) {
        return 1;
      }
LAB_00102cf9:
      lVar11 = *plVar20;
      if (lVar11 == 0) {
        if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
          lVar11 = hb_blob_get_empty();
        }
        else {
          lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
          if (lVar11 == 0) {
            lVar11 = hb_blob_get_empty();
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto code_r0x001048d5;
          }
          else {
            LOCK();
            lVar12 = *plVar20;
            if (lVar12 == 0) {
              *plVar20 = lVar11;
            }
            UNLOCK();
            if (lVar12 != 0) goto LAB_00103ad1;
          }
        }
      }
      puVar15 = &_hb_NullPool;
      if (0x4d < *(uint *)(lVar11 + 0x18)) {
        puVar15 = *(undefined **)(lVar11 + 0x10);
      }
      uVar18 = 0x73747273;
      fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x1a) << 8 |
                                  *(ushort *)(puVar15 + 0x1a) >> 8);
    }
    else if (uVar5 < 0x73747274) {
      if (uVar5 == 0x7370796f) {
        phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                  *)(lVar7 + 0xa0);
LAB_001024a8:
        lVar11 = *(long *)phVar1;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x0010405d;
            }
            else {
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010336d;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
            (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                ::get(phVar1);
        uVar18 = 0x7370796f;
        fVar24 = (float)(int)(short)(*(ushort *)(lVar7 + 0x18) << 8 | *(ushort *)(lVar7 + 0x18) >> 8
                                    );
      }
      else if (uVar5 < 0x73707970) {
        plVar20 = (long *)(lVar7 + 0xa0);
        if (uVar5 == 0x7370786f) {
LAB_001028a0:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104246;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00102887;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
             ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_001028e9:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001046fe;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103889;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar2 = *(ushort *)(puVar15 + 0x16);
          fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x7370786f);
          fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                   *(float *)(param_1 + 0x4c);
          goto LAB_00101da8;
        }
        plVar20 = (long *)(lVar7 + 0xa0);
        if (uVar5 == 0x73707873) {
LAB_00102330:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104130;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_0010231e;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          if ((((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
              (*(short *)(puVar15 + 0x40) == 0)) && (*(short *)(puVar15 + 0x42) == 0)) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_00102379:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00104581;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_0010391b;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar2 = *(ushort *)(puVar15 + 0x12);
          fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x73707873);
          fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                   *(float *)(param_1 + 0x4c);
          goto LAB_00101da8;
        }
        phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                  *)(lVar7 + 0xa0);
        if (uVar5 != 0x73627973) {
          return 0;
        }
LAB_001019e8:
        lVar11 = *(long *)phVar1;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00103ffa;
            }
            else {
              LOCK();
              lVar12 = *(long *)phVar1;
              if (lVar12 == 0) {
                *(long *)phVar1 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_001033bd;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
           ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                ::get(phVar1);
        uVar18 = 0x73627973;
        fVar24 = (float)(int)(short)(*(ushort *)(lVar7 + 0xc) << 8 | *(ushort *)(lVar7 + 0xc) >> 8);
      }
      else {
        plVar20 = (long *)(lVar7 + 0xa0);
        if (uVar5 == 0x73707973) {
LAB_00102410:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00103f65;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_001023f8;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
             ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_00102459:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x0010469a;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103a3f;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar18 = 0x73707973;
          fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x14) << 8 |
                                      *(ushort *)(puVar15 + 0x14) >> 8);
        }
        else {
          phVar1 = (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                    *)(lVar7 + 0xa0);
          if (uVar5 != 0x7374726f) {
            return 0;
          }
LAB_00101ef8:
          lVar11 = *(long *)phVar1;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *(long *)phVar1;
                if (lVar12 == 0) {
                  *(long *)phVar1 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001041e3;
              }
              else {
                LOCK();
                lVar12 = *(long *)phVar1;
                if (lVar12 == 0) {
                  *(long *)phVar1 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_001031cd;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x4d < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          if (((*(short *)(puVar15 + 4) == 0) && (*(short *)(puVar15 + 6) == 0)) &&
             ((*(short *)(puVar15 + 0x40) == 0 && (*(short *)(puVar15 + 0x42) == 0)))) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
          lVar7 = hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                  ::get(phVar1);
          uVar18 = 0x7374726f;
          fVar24 = (float)(int)(short)(*(ushort *)(lVar7 + 0x1c) << 8 |
                                      *(ushort *)(lVar7 + 0x1c) >> 8);
        }
      }
    }
    else {
      plVar20 = (long *)(lVar7 + 200);
      if (uVar5 == 0x7663726e) {
LAB_001021d0:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                               (*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x00104278;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_001021bb;
            }
          }
        }
        psVar9 = (short *)&_hb_NullPool;
        if (0x23 < *(uint *)(lVar11 + 0x18)) {
          psVar9 = *(short **)(lVar11 + 0x10);
        }
        if (*psVar9 == 0) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
LAB_00102202:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                               (*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x001045e5;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_00103b9d;
            }
          }
        }
        puVar15 = &_hb_NullPool;
        if (0x23 < *(uint *)(lVar11 + 0x18)) {
          puVar15 = *(undefined **)(lVar11 + 0x10);
        }
        uVar18 = 0x7663726e;
        fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x14) << 8 |
                                    *(ushort *)(puVar15 + 0x14) >> 8);
      }
      else if (uVar5 < 0x7663726f) {
        plVar20 = (long *)(lVar7 + 0xa8);
        if (uVar5 == 0x756e6473) {
          do {
            while( true ) {
              paVar10 = (accelerator_t *)*plVar20;
              if (paVar10 != (accelerator_t *)0x0) goto LAB_001027d0;
              phVar3 = *(hb_face_t **)(lVar7 + 0x70);
              if (phVar3 == (hb_face_t *)0x0) goto LAB_001040a9;
              paVar10 = (accelerator_t *)calloc(1,0x38);
              if (paVar10 == (accelerator_t *)0x0) break;
              OT::post::accelerator_t::accelerator_t(paVar10,phVar3);
              LOCK();
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                *plVar20 = (long)paVar10;
              }
              UNLOCK();
              if (lVar11 == 0) goto LAB_001027d0;
              if (paVar10 != (accelerator_t *)&_hb_NullPool) {
                free(*(void **)(paVar10 + 0x30));
                hb_blob_destroy(*(undefined8 *)paVar10);
                if (*(int *)(paVar10 + 0x18) != 0) {
                  free(*(void **)(paVar10 + 0x20));
                }
                free(paVar10);
              }
            }
            LOCK();
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              *plVar20 = (long)&_hb_NullPool;
            }
            UNLOCK();
          } while (lVar11 != 0);
LAB_001040a9:
          paVar10 = (accelerator_t *)&_hb_NullPool;
LAB_001027d0:
          puVar15 = *(undefined **)paVar10;
          if (puVar15 == (undefined *)0x0) {
            puVar15 = &_hb_NullPool;
          }
          puVar6 = (ushort *)&_hb_NullPool;
          if (0x1f < *(uint *)(puVar15 + 0x18)) {
            puVar6 = *(ushort **)(puVar15 + 0x10);
          }
          if ((uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8) * 0x10000 +
              (uint)(ushort)(puVar6[1] << 8 | puVar6[1] >> 8) == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
          do {
            while( true ) {
              paVar10 = (accelerator_t *)*plVar20;
              if (paVar10 != (accelerator_t *)0x0) goto LAB_00102822;
              phVar3 = *(hb_face_t **)(lVar7 + 0x70);
              if (phVar3 == (hb_face_t *)0x0) goto LAB_0010477a;
              paVar10 = (accelerator_t *)calloc(1,0x38);
              if (paVar10 == (accelerator_t *)0x0) break;
              OT::post::accelerator_t::accelerator_t(paVar10,phVar3);
              LOCK();
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                *plVar20 = (long)paVar10;
              }
              UNLOCK();
              if (lVar11 == 0) goto LAB_00102822;
              if (paVar10 != (accelerator_t *)&_hb_NullPool) {
                free(*(void **)(paVar10 + 0x30));
                hb_blob_destroy(*(undefined8 *)paVar10);
                if (*(int *)(paVar10 + 0x18) != 0) {
                  free(*(void **)(paVar10 + 0x20));
                }
                free(paVar10);
              }
            }
            LOCK();
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              *plVar20 = (long)&_hb_NullPool;
            }
            UNLOCK();
          } while (lVar11 != 0);
LAB_0010477a:
          paVar10 = (accelerator_t *)&_hb_NullPool;
LAB_00102822:
          puVar15 = *(undefined **)paVar10;
          uVar18 = 0x756e6473;
          if (puVar15 == (undefined *)0x0) {
            puVar15 = &_hb_NullPool;
          }
          puVar16 = &_hb_NullPool;
          if (0x1f < *(uint *)(puVar15 + 0x18)) {
            puVar16 = *(undefined **)(puVar15 + 0x10);
          }
          fVar24 = (float)(int)(short)(*(ushort *)(puVar16 + 10) << 8 |
                                      *(ushort *)(puVar16 + 10) >> 8);
        }
        else if (uVar5 < 0x756e6474) {
          plVar20 = (long *)(lVar7 + 0xa8);
          if (uVar5 != 0x756e646f) {
            return 0;
          }
          do {
            while( true ) {
              paVar10 = (accelerator_t *)*plVar20;
              if (paVar10 != (accelerator_t *)0x0) goto LAB_00102104;
              phVar3 = *(hb_face_t **)(lVar7 + 0x70);
              if (phVar3 == (hb_face_t *)0x0) goto LAB_001041c1;
              paVar10 = (accelerator_t *)calloc(1,0x38);
              if (paVar10 == (accelerator_t *)0x0) break;
              OT::post::accelerator_t::accelerator_t(paVar10,phVar3);
              LOCK();
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                *plVar20 = (long)paVar10;
              }
              UNLOCK();
              if (lVar11 == 0) goto LAB_00102104;
              if (paVar10 != (accelerator_t *)&_hb_NullPool) {
                free(*(void **)(paVar10 + 0x30));
                hb_blob_destroy(*(undefined8 *)paVar10);
                if (*(int *)(paVar10 + 0x18) != 0) {
                  free(*(void **)(paVar10 + 0x20));
                }
                free(paVar10);
              }
            }
            LOCK();
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              *plVar20 = (long)&_hb_NullPool;
            }
            UNLOCK();
          } while (lVar11 != 0);
LAB_001041c1:
          paVar10 = (accelerator_t *)&_hb_NullPool;
LAB_00102104:
          puVar15 = *(undefined **)paVar10;
          if (puVar15 == (undefined *)0x0) {
            puVar15 = &_hb_NullPool;
          }
          puVar6 = (ushort *)&_hb_NullPool;
          if (0x1f < *(uint *)(puVar15 + 0x18)) {
            puVar6 = *(ushort **)(puVar15 + 0x10);
          }
          if ((uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8) * 0x10000 +
              (uint)(ushort)(puVar6[1] << 8 | puVar6[1] >> 8) == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
          do {
            while( true ) {
              paVar10 = (accelerator_t *)*plVar20;
              if (paVar10 != (accelerator_t *)0x0) goto LAB_00102156;
              phVar3 = *(hb_face_t **)(lVar7 + 0x70);
              if (phVar3 == (hb_face_t *)0x0) goto LAB_00104645;
              paVar10 = (accelerator_t *)calloc(1,0x38);
              if (paVar10 == (accelerator_t *)0x0) break;
              OT::post::accelerator_t::accelerator_t(paVar10,phVar3);
              LOCK();
              lVar11 = *plVar20;
              if (lVar11 == 0) {
                *plVar20 = (long)paVar10;
              }
              UNLOCK();
              if (lVar11 == 0) goto LAB_00102156;
              if (paVar10 != (accelerator_t *)&_hb_NullPool) {
                free(*(void **)(paVar10 + 0x30));
                hb_blob_destroy(*(undefined8 *)paVar10);
                if (*(int *)(paVar10 + 0x18) != 0) {
                  free(*(void **)(paVar10 + 0x20));
                }
                free(paVar10);
              }
            }
            LOCK();
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              *plVar20 = (long)&_hb_NullPool;
            }
            UNLOCK();
          } while (lVar11 != 0);
LAB_00104645:
          paVar10 = (accelerator_t *)&_hb_NullPool;
LAB_00102156:
          puVar15 = *(undefined **)paVar10;
          uVar18 = 0x756e646f;
          if (puVar15 == (undefined *)0x0) {
            puVar15 = &_hb_NullPool;
          }
          puVar16 = &_hb_NullPool;
          if (0x1f < *(uint *)(puVar15 + 0x18)) {
            puVar16 = *(undefined **)(puVar15 + 0x10);
          }
          fVar24 = (float)(int)(short)(*(ushort *)(puVar16 + 8) << 8 | *(ushort *)(puVar16 + 8) >> 8
                                      );
        }
        else {
          if (uVar5 == 0x76617363) goto LAB_00102e60;
          plVar20 = (long *)(lVar7 + 200);
          if (uVar5 != 0x76636f66) {
            return 0;
          }
LAB_00101abc:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x00103fc9;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_0010345e;
              }
            }
          }
          psVar9 = (short *)&_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            psVar9 = *(short **)(lVar11 + 0x10);
          }
          if (*psVar9 == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
LAB_00101af2:
          lVar11 = *plVar20;
          if (lVar11 == 0) {
            if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
            }
            else {
              lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                                 (*(hb_face_t **)(lVar7 + 0x70));
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto code_r0x001047cf;
              }
              else {
                LOCK();
                lVar12 = *plVar20;
                if (lVar12 == 0) {
                  *plVar20 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_00103964;
              }
            }
          }
          puVar15 = &_hb_NullPool;
          if (0x23 < *(uint *)(lVar11 + 0x18)) {
            puVar15 = *(undefined **)(lVar11 + 0x10);
          }
          uVar18 = 0x76636f66;
          fVar24 = (float)(int)(short)(*(ushort *)(puVar15 + 0x16) << 8 |
                                      *(ushort *)(puVar15 + 0x16) >> 8);
        }
      }
      else {
        if (uVar5 == 0x766c6770) {
LAB_00102e60:
          uVar4 = _hb_ot_metrics_get_position_common(param_1,param_2,param_3);
          return uVar4;
        }
        if (uVar5 < 0x766c6771) {
          plVar20 = (long *)(lVar7 + 200);
          if (uVar5 == 0x76637273) {
LAB_00101d1e:
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x001040cc;
                }
                else {
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_0010331e;
                }
              }
            }
            psVar9 = (short *)&_hb_NullPool;
            if (0x23 < *(uint *)(lVar11 + 0x18)) {
              psVar9 = *(short **)(lVar11 + 0x10);
            }
            if (*psVar9 == 0) {
              return 0;
            }
            if (param_3 == (int *)0x0) {
              return 1;
            }
LAB_00101d54:
            lVar11 = *plVar20;
            if (lVar11 == 0) {
              if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
                lVar11 = hb_blob_get_empty();
              }
              else {
                lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create
                                   (*(hb_face_t **)(lVar7 + 0x70));
                if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x00104833;
                }
                else {
                  LOCK();
                  lVar12 = *plVar20;
                  if (lVar12 == 0) {
                    *plVar20 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_00103840;
                }
              }
            }
            puVar15 = &_hb_NullPool;
            if (0x23 < *(uint *)(lVar11 + 0x18)) {
              puVar15 = *(undefined **)(lVar11 + 0x10);
            }
            uVar2 = *(ushort *)(puVar15 + 0x12);
            fVar24 = (float)hb_ot_metrics_get_variation(param_1,0x76637273);
            fVar24 = (fVar24 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) *
                     *(float *)(param_1 + 0x4c);
            goto LAB_00101da8;
          }
          if (uVar5 != 0x76647363) {
            return 0;
          }
          goto LAB_00102e60;
        }
        plVar20 = (long *)(lVar7 + 0xa0);
        if (uVar5 != 0x78686774) {
          return 0;
        }
LAB_00101f8c:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x001043a3;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010321e;
            }
          }
        }
        puVar6 = (ushort *)&_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar6 = *(ushort **)(lVar11 + 0x10);
        }
        puVar8 = (ushort *)&_hb_NullPool;
        if (1 < (ushort)(*puVar6 << 8 | *puVar6 >> 8)) {
          puVar8 = puVar6 + 0x2b;
        }
        if ((*puVar8 == 0) && (puVar8[1] == 0)) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
LAB_00101fdf:
        lVar11 = *plVar20;
        if (lVar11 == 0) {
          if (*(hb_face_t **)(lVar7 + 0x70) == (hb_face_t *)0x0) {
            lVar11 = hb_blob_get_empty();
          }
          else {
            lVar11 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(lVar7 + 0x70));
            if (lVar11 == 0) {
              lVar11 = hb_blob_get_empty();
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto code_r0x001044dd;
            }
            else {
              LOCK();
              lVar12 = *plVar20;
              if (lVar12 == 0) {
                *plVar20 = lVar11;
              }
              UNLOCK();
              if (lVar12 != 0) goto LAB_0010372e;
            }
          }
        }
        uVar18 = 0x78686774;
        puVar6 = (ushort *)&_hb_NullPool;
        if (0x4d < *(uint *)(lVar11 + 0x18)) {
          puVar6 = *(ushort **)(lVar11 + 0x10);
        }
        puVar8 = puVar6 + 0x2b;
        if ((ushort)(*puVar6 << 8 | *puVar6 >> 8) < 2) {
          puVar8 = (ushort *)&_hb_NullPool;
        }
        fVar24 = (float)(int)(short)(*puVar8 << 8 | *puVar8 >> 8);
      }
    }
  }
LAB_00101c20:
  fVar23 = (float)hb_ot_metrics_get_variation(param_1,uVar18);
  fVar24 = (fVar23 + fVar24) * *(float *)(param_1 + 0x50);
LAB_00101da8:
  fVar24 = fVar24 + __LC4;
  if ((float)((uint)fVar24 & _LC7) < _LC5) {
    fVar24 = (float)((uint)((float)(int)fVar24 -
                           (float)(-(uint)(fVar24 < (float)(int)fVar24) & _LC1)) |
                    ~_LC7 & (uint)fVar24);
  }
  *param_3 = (int)fVar24;
  return 1;
code_r0x00103f01:
  if (lVar11 != 0) {
LAB_00102b17:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102b30;
code_r0x001044ab:
  if (lVar11 != 0) {
LAB_00103c2f:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102b79;
code_r0x0010402c:
  if (lVar11 != 0) {
LAB_00102c9e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102cb0;
code_r0x001048d5:
  if (lVar11 != 0) {
LAB_00103ad1:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102cf9;
code_r0x00104278:
  if (lVar11 != 0) {
LAB_001021bb:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001021d0;
code_r0x001045e5:
  if (lVar11 != 0) {
LAB_00103b9d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102202;
code_r0x001040cc:
  if (lVar11 != 0) {
LAB_0010331e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101d1e;
code_r0x00104833:
  if (lVar11 != 0) {
LAB_00103840:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101d54;
code_r0x001043a3:
  if (lVar11 != 0) {
LAB_0010321e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101f8c;
code_r0x001044dd:
  if (lVar11 != 0) {
LAB_0010372e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101fdf;
code_r0x00103fc9:
  if (lVar11 != 0) {
LAB_0010345e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101abc;
code_r0x001047cf:
  if (lVar11 != 0) {
LAB_00103964:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101af2;
code_r0x0010405d:
  if (lVar11 != 0) {
LAB_0010336d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001024a8;
code_r0x00104246:
  if (lVar11 != 0) {
LAB_00102887:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001028a0;
code_r0x001046fe:
  if (lVar11 != 0) {
LAB_00103889:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001028e9;
code_r0x00103ffa:
  if (lVar11 != 0) {
LAB_001033bd:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001019e8;
code_r0x00104130:
  if (lVar11 != 0) {
LAB_0010231e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102330;
code_r0x00104581:
  if (lVar11 != 0) {
LAB_0010391b:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102379;
code_r0x00103f65:
  if (lVar11 != 0) {
LAB_001023f8:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102410;
code_r0x0010469a:
  if (lVar11 != 0) {
LAB_00103a3f:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102459;
code_r0x001041e3:
  if (lVar11 != 0) {
LAB_001031cd:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101ef8;
code_r0x00103f33:
  if (lVar11 != 0) {
LAB_00102d65:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102d80;
code_r0x0010454f:
  if (lVar11 != 0) {
LAB_0010377e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102dcf;
code_r0x00104371:
  if (lVar11 != 0) {
LAB_0010317d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001025b8;
code_r0x00104161:
  if (lVar11 != 0) {
LAB_0010340d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102530;
code_r0x001042aa:
  if (lVar11 != 0) {
LAB_0010326e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101e38;
code_r0x00104617:
  if (lVar11 != 0) {
LAB_00103cc1:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101e89;
code_r0x001040fe:
  if (lVar11 != 0) {
LAB_00102be5:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102c00;
code_r0x001046cc:
  if (lVar11 != 0) {
LAB_001039ad:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102c32;
code_r0x001042dc:
  if (lVar11 != 0) {
LAB_0010226e:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102280;
code_r0x0010479d:
  if (lVar11 != 0) {
LAB_00103c78:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001022b2;
code_r0x00104193:
  if (lVar11 != 0) {
LAB_00103536:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001018fe;
code_r0x00104668:
  if (lVar11 != 0) {
LAB_00103d0a:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101934;
code_r0x00103f97:
  if (lVar11 != 0) {
LAB_00102a48:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102a60;
code_r0x00104801:
  if (lVar11 != 0) {
LAB_001038d2:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102aa9;
code_r0x00104340:
  if (lVar11 != 0) {
LAB_00103586:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102054;
code_r0x001045b3:
  if (lVar11 != 0) {
LAB_00103a88:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_0010208a;
code_r0x001043d5:
  if (lVar11 != 0) {
LAB_00103131:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101b84;
code_r0x00104907:
  if (lVar11 != 0) {
LAB_00103be6:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101bd9;
code_r0x0010486d:
  param_2 = uVar19 & 0xffffffff;
  if (lVar11 != 0) {
LAB_001037eb:
    lVar12 = hb_blob_get_empty();
    param_2 = uVar19 & 0xffffffff;
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
      param_2 = uVar19 & 0xffffffff;
    }
  }
  goto LAB_00103048;
code_r0x0010493d:
  if (lVar11 != 0) {
LAB_00103dde:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102665;
code_r0x0010473b:
  if (lVar11 != 0) {
LAB_00103eb5:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001030c9;
code_r0x0010363f:
  if (lVar11 != 0) {
LAB_00104430:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00103648;
code_r0x00104486:
  if (lVar11 != 0) {
LAB_001035f1:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102ea2;
code_r0x00104515:
  if (lVar11 != 0) {
LAB_00103e45:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102eda;
code_r0x00104214:
  if (lVar11 != 0) {
LAB_001032d0:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00101c6e;
code_r0x0010430e:
  if (lVar11 != 0) {
LAB_00102968:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_00102980;
code_r0x001048a3:
  if (lVar11 != 0) {
LAB_001039f6:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_001029c9;
}



void hb_ot_metrics_get_position_with_fallback(long param_1,uint param_2,int *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = hb_ot_metrics_get_position();
  if (iVar1 != 0) {
    if (((param_2 != 0x73747273) && (param_2 != 0x756e6473)) || (*param_3 != 0)) goto LAB_001049f8;
    if (param_2 < 0x756e6470) {
LAB_00104af3:
      if (param_2 != 0x73747273) goto LAB_00104b80;
    }
LAB_00104aff:
    *param_3 = *(int *)(param_1 + 0x2c) / 0x12;
    goto LAB_001049f8;
  }
  if (param_2 == 0x73707973) {
LAB_00104c80:
    iVar1 = *(int *)(param_1 + 0x2c);
LAB_00104c85:
    *param_3 = (iVar1 * 10) / 0xc;
  }
  else {
    if (0x73707973 < param_2) {
      if (param_2 == 0x76617363) {
LAB_00104ab8:
        hb_font_get_extents_for_direction(param_1,6,&local_58);
        *param_3 = local_58;
        goto LAB_001049f8;
      }
      if (param_2 < 0x76617364) {
        if (param_2 == 0x756e646f) {
          *param_3 = -(*(int *)(param_1 + 0x2c) / 0x12);
          goto LAB_001049f8;
        }
        if (param_2 < 0x756e6470) {
          if (param_2 != 0x7374726f) goto LAB_00104af3;
          hb_ot_metrics_get_position_with_fallback(param_1,0x68617363,&local_58);
LAB_00104bf7:
          *param_3 = local_58 / 2;
          goto LAB_001049f8;
        }
        if (param_2 == 0x756e6473) goto LAB_00104aff;
      }
      else {
        if (param_2 == 0x766c6770) {
          hb_font_get_extents_for_direction(param_1,6,&local_58);
          *param_3 = local_50;
          goto LAB_001049f8;
        }
        if (param_2 < 0x766c6771) {
          if (param_2 == 0x76637273) goto LAB_00104cb0;
          if (param_2 == 0x76647363) goto LAB_00104ab8;
        }
        else if (param_2 == 0x78686774) {
          iVar1 = hb_font_get_nominal_glyph(param_1,0x78,&local_5c);
          if ((iVar1 != 0) &&
             (iVar1 = hb_font_get_glyph_extents(param_1,local_5c,&local_58), iVar1 != 0)) {
            *param_3 = local_54;
            goto LAB_001049f8;
          }
          local_58 = *(int *)(param_1 + 0x2c);
          goto LAB_00104bf7;
        }
      }
      goto LAB_00104b80;
    }
    if (param_2 == 0x686c6770) {
      hb_font_get_extents_for_direction(param_1,4,&local_58);
      *param_3 = local_50;
      goto LAB_001049f8;
    }
    if (param_2 < 0x686c6771) {
      if (param_2 == 0x68636c61) {
LAB_00104a5e:
        hb_font_get_extents_for_direction(param_1,4,&local_58);
        *param_3 = local_58;
        goto LAB_001049f8;
      }
      if (param_2 < 0x68636c62) {
        if (param_2 == 0x63706874) {
          iVar1 = hb_font_get_nominal_glyph(param_1,0x4f,&local_5c);
          if ((iVar1 == 0) ||
             (iVar1 = hb_font_get_glyph_extents(param_1,local_5c,&local_58), iVar1 == 0)) {
            *param_3 = (*(int *)(param_1 + 0x2c) * 2) / 3;
          }
          else {
            *param_3 = local_4c + local_54 * 2;
          }
          goto LAB_001049f8;
        }
        if (param_2 == 0x68617363) goto LAB_00104a5e;
      }
      else {
        if (param_2 == 0x68637273) {
LAB_00104cb0:
          *param_3 = 1;
          goto LAB_001049f8;
        }
        if ((param_2 == 0x68647363) || (param_2 == 0x68636c64)) {
          hb_font_get_extents_for_direction(param_1,4,&local_58);
          *param_3 = local_54;
          goto LAB_001049f8;
        }
      }
      goto LAB_00104b80;
    }
    if (param_2 == 0x73627973) goto LAB_00104c80;
    if (param_2 < 0x73627974) {
      if (param_2 == 0x73627873) {
LAB_00104ca8:
        iVar1 = *(int *)(param_1 + 0x28);
        goto LAB_00104c85;
      }
      if (param_2 == 0x7362796f) {
LAB_00104b42:
        *param_3 = *(int *)(param_1 + 0x2c) / 5;
        goto LAB_001049f8;
      }
    }
    else {
      if (param_2 == 0x73707873) goto LAB_00104ca8;
      if (param_2 == 0x7370796f) goto LAB_00104b42;
    }
LAB_00104b80:
    *param_3 = 0;
  }
LAB_001049f8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::ItemVariationStore::sanitize(ItemVariationStore *this,hb_sanitize_context_t *param_1)

{
  ItemVariationStore *pIVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ItemVariationStore *pIVar7;
  long lVar8;
  ItemVariationStore *pIVar9;
  ushort uVar10;
  
  pIVar7 = this + 8;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this != 0x100) {
    return 0;
  }
  if ((ItemVariationStore *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8)))
  {
    return 0;
  }
  uVar3 = *(uint *)(this + 2);
  if (uVar3 != 0) {
    pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
    pIVar1 = pIVar9 + 4;
    if (((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       (lVar8 = (ulong)((uint)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8) *
                       (uint)(ushort)(*(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8))
                * 6, uVar3 = (uint)lVar8, (int)((ulong)lVar8 >> 0x20) == 0)) {
      lVar8 = *(long *)(param_1 + 8);
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      if (((ulong)((long)pIVar1 - lVar8) <= uVar6) &&
         ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
          (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5))))
      goto LAB_00104dea;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 2) = 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
LAB_00104dea:
  if ((((uVar6 < (ulong)((long)pIVar7 - lVar8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8)))) ||
      (uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar7) < uVar3 * 4)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -4, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  if (uVar2 != 0) {
    pIVar7 = this + 0xc;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar3 = *(uint *)(pIVar7 + -4);
      if (uVar3 != 0) {
        pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        pIVar1 = pIVar9 + 6;
        if ((((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
            ((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
           ((uVar3 = (uint)(ushort)(*(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8),
            uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
            (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar5,
            0 < iVar5)))) {
          uVar4 = *(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8;
          uVar10 = *(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8;
          uVar3 = uVar4 & 0x7fff;
          if (uVar3 <= uVar10) {
            uVar3 = uVar3 + uVar10;
            if ((short)uVar4 < 0) {
              uVar3 = uVar3 * 2;
            }
            lVar8 = (ulong)uVar3 * (ulong)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8);
            uVar3 = (uint)lVar8;
            if ((((int)((ulong)lVar8 >> 0x20) == 0) &&
                ((ulong)((long)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4) -
                        *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
               ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                (int)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4)) &&
                (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5,
                0 < iVar5)))) goto LAB_00104e50;
          }
        }
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pIVar7 + -4) = 0;
      }
LAB_00104e50:
      pIVar7 = pIVar7 + 4;
    } while (this + (ulong)(uVar2 - 1) * 4 + 0x10 != pIVar7);
  }
  return 1;
}



/* OT::MVAR::get_var(unsigned int, int const*, unsigned int) const */

void __thiscall OT::MVAR::get_var(MVAR *this,uint param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  MVAR *pMVar6;
  uint uVar7;
  MVAR *pMVar8;
  ulong uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  MVAR *pMVar16;
  ulong uVar17;
  bool bVar18;
  float fVar19;
  
  uVar1 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
  if (uVar1 != 0) {
    iVar12 = uVar1 - 1;
    iVar10 = 0;
    do {
      while( true ) {
        uVar7 = (uint)(iVar10 + iVar12) >> 1;
        uVar5 = *(uint *)(this + (ulong)uVar7 *
                                 (ulong)(ushort)(*(ushort *)(this + 6) << 8 |
                                                *(ushort *)(this + 6) >> 8) + 0xc);
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (param_1 < uVar5) break;
        if (uVar5 == param_1) {
          uVar1 = *(ushort *)(this + 10);
          pMVar6 = (MVAR *)&_hb_NullPool;
          if (uVar1 != 0) {
            pMVar6 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
          }
          uVar5 = *(uint *)(this + (ulong)uVar7 *
                                   (ulong)(ushort)(*(ushort *)(this + 6) << 8 |
                                                  *(ushort *)(this + 6) >> 8) + 0xc + 4);
          uVar7 = ((uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 0x10;
          if ((ushort)(*(ushort *)(pMVar6 + 6) << 8 | *(ushort *)(pMVar6 + 6) >> 8) <= uVar7) {
            return;
          }
          uVar7 = *(uint *)(pMVar6 + (ulong)uVar7 * 4 + 8);
          pMVar16 = (MVAR *)&_hb_NullPool;
          if (uVar7 != 0) {
            pMVar16 = pMVar6 + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                               uVar7 << 0x18);
          }
          uVar7 = *(uint *)(pMVar6 + 2);
          pMVar8 = (MVAR *)&_hb_NullPool;
          if (uVar7 != 0) {
            pMVar8 = pMVar6 + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18);
          }
          if ((uint)(ushort)(*(ushort *)pMVar16 << 8 | *(ushort *)pMVar16 >> 8) <=
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8)) {
            return;
          }
          uVar1 = *(ushort *)(pMVar16 + 2) << 8;
          uVar11 = *(ushort *)(pMVar16 + 2) >> 8;
          uVar14 = uVar1 | uVar11;
          uVar7 = (uint)(ushort)(*(ushort *)(pMVar16 + 4) << 8 | *(ushort *)(pMVar16 + 4) >> 8);
          uVar5 = uVar14 & 0x7fff;
          if ((short)uVar14 < 0) {
            if ((uVar1 & 0x7fff) == 0 && uVar11 == 0) {
              uVar17 = (ulong)uVar7;
              uVar5 = 0;
            }
            else {
              lVar4 = 0;
              do {
                uVar2 = (uint)(ushort)(*(ushort *)(pMVar16 + lVar4 * 2 + 6) << 8 |
                                      *(ushort *)(pMVar16 + lVar4 * 2 + 6) >> 8);
                if (uVar2 < (ushort)(*(ushort *)(pMVar8 + 2) << 8 | *(ushort *)(pMVar8 + 2) >> 8)) {
                  uVar1 = *(ushort *)pMVar8 << 8 | *(ushort *)pMVar8 >> 8;
                  if (uVar1 != 0) {
                    pMVar6 = pMVar8 + (ulong)(uVar2 * uVar1) * 6 + 4;
                    lVar3 = 0;
                    do {
                      uVar11 = *(ushort *)(pMVar6 + 2);
                      if ((uint)lVar3 < param_3) {
                        iVar10 = param_2[lVar3];
                        iVar12 = (int)(short)(uVar11 << 8 | uVar11 >> 8);
                        if ((uVar11 != 0) && (iVar10 != iVar12)) {
                          if (iVar10 == 0) break;
                          uVar14 = *(ushort *)pMVar6 << 8 | *(ushort *)pMVar6 >> 8;
                          uVar11 = *(ushort *)(pMVar6 + 4) << 8 | *(ushort *)(pMVar6 + 4) >> 8;
                          iVar15 = (int)(short)uVar14;
                          iVar13 = (int)(short)uVar11;
                          if (((iVar15 <= iVar12) && (iVar12 <= iVar13)) &&
                             ((-1 < (short)uVar14 || ((short)uVar11 < 1)))) {
                            if ((iVar10 <= iVar15) || (iVar13 <= iVar10)) break;
                            if (iVar10 < iVar12) {
                              fVar19 = (float)(iVar10 - iVar15) / (float)(iVar12 - iVar15);
                            }
                            else {
                              fVar19 = (float)(iVar13 - iVar10) / (float)(iVar13 - iVar12);
                            }
                            if (fVar19 == 0.0) break;
                          }
                        }
                      }
                      else if (uVar11 != 0) break;
                      lVar3 = lVar3 + 1;
                      pMVar6 = pMVar6 + 6;
                    } while ((uint)lVar3 < (uint)uVar1);
                  }
                }
                lVar4 = lVar4 + 1;
              } while ((uint)lVar4 < uVar5);
              uVar17 = (ulong)uVar7;
            }
          }
          else {
            uVar17 = (ulong)uVar5;
            uVar5 = 0;
          }
          if (uVar5 < (uint)uVar17) {
            uVar9 = (ulong)uVar5;
            do {
              uVar5 = (uint)(ushort)(*(ushort *)(pMVar16 + uVar9 * 2 + 6) << 8 |
                                    *(ushort *)(pMVar16 + uVar9 * 2 + 6) >> 8);
              if (uVar5 < (ushort)(*(ushort *)(pMVar8 + 2) << 8 | *(ushort *)(pMVar8 + 2) >> 8)) {
                uVar1 = *(ushort *)pMVar8 << 8 | *(ushort *)pMVar8 >> 8;
                if (uVar1 != 0) {
                  pMVar6 = pMVar8 + (ulong)(uVar5 * uVar1) * 6 + 4;
                  lVar4 = 0;
                  do {
                    uVar11 = *(ushort *)(pMVar6 + 2);
                    if ((uint)lVar4 < param_3) {
                      iVar10 = param_2[lVar4];
                      iVar12 = (int)(short)(uVar11 << 8 | uVar11 >> 8);
                      if ((uVar11 != 0) && (iVar10 != iVar12)) {
                        if (iVar10 == 0) break;
                        uVar11 = *(ushort *)pMVar6 << 8 | *(ushort *)pMVar6 >> 8;
                        uVar14 = *(ushort *)(pMVar6 + 4) << 8 | *(ushort *)(pMVar6 + 4) >> 8;
                        iVar13 = (int)(short)uVar11;
                        iVar15 = (int)(short)uVar14;
                        if (((iVar13 <= iVar12) && (iVar12 <= iVar15)) &&
                           ((-1 < (short)uVar11 || ((short)uVar14 < 1)))) {
                          if ((iVar10 <= iVar13) || (iVar15 <= iVar10)) break;
                          if (iVar10 < iVar12) {
                            fVar19 = (float)(iVar10 - iVar13) / (float)(iVar12 - iVar13);
                          }
                          else {
                            fVar19 = (float)(iVar15 - iVar10) / (float)(iVar15 - iVar12);
                          }
                          if (fVar19 == 0.0) break;
                        }
                      }
                    }
                    else if (uVar11 != 0) break;
                    lVar4 = lVar4 + 1;
                    pMVar6 = pMVar6 + 6;
                  } while ((uint)lVar4 < (uint)uVar1);
                }
              }
              uVar9 = uVar9 + 1;
            } while ((uint)uVar9 < (uint)uVar17);
          }
          else {
            uVar17 = (ulong)uVar5;
          }
          if (uVar7 <= (uint)uVar17) {
            return;
          }
          uVar9 = 0;
          do {
            uVar5 = (uint)(ushort)(*(ushort *)(pMVar16 + uVar9 * 2 + uVar17 * 2 + 6) << 8 |
                                  *(ushort *)(pMVar16 + uVar9 * 2 + uVar17 * 2 + 6) >> 8);
            if (uVar5 < (ushort)(*(ushort *)(pMVar8 + 2) << 8 | *(ushort *)(pMVar8 + 2) >> 8)) {
              uVar1 = *(ushort *)pMVar8 << 8 | *(ushort *)pMVar8 >> 8;
              if (uVar1 != 0) {
                pMVar6 = pMVar8 + (ulong)(uVar5 * uVar1) * 6 + 4;
                lVar4 = 0;
                do {
                  uVar11 = *(ushort *)(pMVar6 + 2);
                  if ((uint)lVar4 < param_3) {
                    iVar10 = param_2[lVar4];
                    iVar12 = (int)(short)(uVar11 << 8 | uVar11 >> 8);
                    if ((uVar11 != 0) && (iVar10 != iVar12)) {
                      if (iVar10 == 0) break;
                      uVar11 = *(ushort *)pMVar6 << 8 | *(ushort *)pMVar6 >> 8;
                      uVar14 = *(ushort *)(pMVar6 + 4) << 8 | *(ushort *)(pMVar6 + 4) >> 8;
                      iVar13 = (int)(short)uVar11;
                      iVar15 = (int)(short)uVar14;
                      if (((iVar13 <= iVar12) && (iVar12 <= iVar15)) &&
                         ((-1 < (short)uVar11 || ((short)uVar14 < 1)))) {
                        if ((iVar10 <= iVar13) || (iVar15 <= iVar10)) break;
                        if (iVar10 < iVar12) {
                          fVar19 = (float)(iVar10 - iVar13) / (float)(iVar12 - iVar13);
                        }
                        else {
                          fVar19 = (float)(iVar15 - iVar10) / (float)(iVar15 - iVar12);
                        }
                        if (fVar19 == 0.0) break;
                      }
                    }
                  }
                  else if (uVar11 != 0) break;
                  lVar4 = lVar4 + 1;
                  pMVar6 = pMVar6 + 6;
                } while ((uint)lVar4 < (uint)uVar1);
              }
            }
            bVar18 = (uVar7 - 1) - (uint)uVar17 == uVar9;
            uVar9 = uVar9 + 1;
            if (bVar18) {
              return;
            }
          } while( true );
        }
        iVar10 = uVar7 + 1;
        if (iVar12 < iVar10) {
          return;
        }
      }
      iVar12 = uVar7 - 1;
    } while (iVar10 <= iVar12);
  }
  return;
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
    goto LAB_0010572d;
  }
  if (uVar10 < 0x20) {
LAB_00105718:
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
            uVar4 * 2 <= uVar10 - 0x22)) && (0 < (int)(uVar5 + uVar4 * -2))) goto LAB_001058e0;
        iVar3 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 +
                (uint)(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
      }
      if (iVar3 != 0x30000) goto LAB_00105718;
    }
LAB_001058e0:
    hb_blob_destroy(lVar7);
    hb_blob_make_immutable(puVar6);
  }
LAB_0010572d:
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
LAB_00105808:
          pvVar9 = *(void **)(this + 0x20);
LAB_0010580d:
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
                if (uVar5 <= *(uint *)(this + 0x18)) goto LAB_00105808;
                *(uint *)(this + 0x18) = ~*(uint *)(this + 0x18);
                goto LAB_00105985;
              }
              *(void **)(this + 0x20) = pvVar9;
              *(uint *)(this + 0x18) = uVar5;
            }
            goto LAB_0010580d;
          }
LAB_00105985:
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



/* hb_table_lazy_loader_t<OT::MVAR, 22u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::MVAR,22u,true>::create(hb_face_t *param_1)

{
  short *psVar1;
  ushort uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  uint local_4c;
  long local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 1;
  local_58 = 0;
  local_50 = '\0';
  local_40 = 0;
  lVar6 = hb_face_reference_table(param_1,0x4d564152);
  lVar7 = hb_blob_reference(lVar6);
  local_48 = lVar7;
  do {
    local_60 = *(uint *)(lVar7 + 0x18);
    psVar3 = *(short **)(lVar7 + 0x10);
    local_5c = local_60 * 0x40;
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
    local_70._8_8_ = (long)psVar3 + (ulong)local_60;
    local_70._0_8_ = psVar3;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (psVar3 == (short *)0x0) {
      hb_blob_destroy(lVar7);
LAB_00105bb0:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar6;
      }
      goto LAB_00105dbf;
    }
    if ((ulong)local_60 < 4) goto LAB_00105bdb;
    if ((((*psVar3 != 0x100) ||
         (psVar1 = psVar3 + 6, (ulong)local_60 < (ulong)((long)psVar1 - (long)psVar3))) ||
        ((ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8) < 8)) ||
       ((ulong)local_60 < (ulong)((long)psVar1 - (long)psVar3))) goto LAB_00105a24;
    uVar2 = psVar3[5];
    if ((uVar2 == 0) ||
       (cVar4 = OT::ItemVariationStore::sanitize
                          ((ItemVariationStore *)
                           ((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)psVar3),
                           (hb_sanitize_context_t *)local_78), cVar4 != '\0')) {
LAB_00105b33:
      if ((ulong)local_60 < (ulong)((long)psVar1 - local_70._0_8_)) {
LAB_00105a24:
        if (local_4c != 0) goto LAB_00105a31;
      }
      else {
        uVar5 = (uint)(ushort)(psVar3[4] << 8 | (ushort)psVar3[4] >> 8) *
                (uint)(ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8);
        if (((uint)(local_70._8_4_ - (int)psVar1) < uVar5) ||
           (local_5c = local_5c - uVar5, (int)local_5c < 1)) goto LAB_00105a24;
        if (local_4c == 0) {
          hb_blob_destroy(local_48);
LAB_00105b98:
          hb_blob_make_immutable(lVar6);
          goto LAB_00105bb0;
        }
        local_4c = 0;
        if ((ulong)((long)psVar3 + (4 - local_70._0_8_)) <= (ulong)local_60) {
          lVar7 = local_48;
          if ((((*psVar3 != 0x100) || ((ulong)local_60 < (ulong)((long)psVar1 - local_70._0_8_))) ||
              ((ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8) < 8)) ||
             ((ulong)local_60 < (ulong)((long)psVar1 - local_70._0_8_))) goto LAB_00105bdb;
          uVar2 = psVar3[5];
          if ((uVar2 != 0) &&
             (cVar4 = OT::ItemVariationStore::sanitize
                                ((ItemVariationStore *)
                                 ((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)psVar3),
                                 (hb_sanitize_context_t *)local_78), cVar4 == '\0')) {
            lVar7 = local_48;
            if ((0x1f < local_4c) || (local_4c = local_4c + 1, local_50 == '\0')) goto LAB_00105bdb;
            psVar3[5] = 0;
          }
          lVar7 = local_48;
          if ((((ulong)((long)psVar1 - local_70._0_8_) <= (ulong)local_60) &&
              (uVar5 = (uint)(ushort)(psVar3[4] << 8 | (ushort)psVar3[4] >> 8) *
                       (uint)(ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8),
              uVar5 <= (uint)(local_70._8_4_ - (int)psVar1))) &&
             (uVar5 = local_5c - uVar5, local_5c = uVar5, local_4c == 0)) {
            hb_blob_destroy(local_48);
            local_48 = 0;
            local_60 = 0;
            local_70 = (undefined1  [16])0x0;
            if (0 < (int)uVar5) goto LAB_00105b98;
            goto LAB_00105be0;
          }
LAB_00105bdb:
          hb_blob_destroy(lVar7);
LAB_00105be0:
          hb_blob_destroy(lVar6);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            lVar7 = hb_blob_get_empty();
            return lVar7;
          }
LAB_00105dbf:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      hb_blob_destroy(local_48);
      goto LAB_00105be0;
    }
    if (local_4c < 0x20) {
      local_4c = local_4c + 1;
      if (local_50 != '\0') {
        psVar3[5] = 0;
        goto LAB_00105b33;
      }
    }
    else {
LAB_00105a31:
      lVar7 = local_48;
      if (local_50 != '\0') goto LAB_00105bdb;
    }
    lVar7 = local_48;
    local_70._0_8_ = hb_blob_get_data_writable(lVar6,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar6 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00105bdb;
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



/* hb_lazy_loader_t<OT::OS2, hb_table_lazy_loader_t<OT::OS2, 6u, true>, hb_face_t, 6u,
   hb_blob_t>::get() const */

undefined * __thiscall
hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>::get
          (hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
           *this)

{
  long lVar1;
  long lVar2;
  
LAB_00105e6b:
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    if (*(hb_face_t **)(this + -0x30) == (hb_face_t *)0x0) {
      lVar1 = hb_blob_get_empty();
    }
    else {
      lVar1 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(this + -0x30));
      if (lVar1 == 0) {
        lVar1 = hb_blob_get_empty();
        LOCK();
        lVar2 = *(long *)this;
        if (lVar2 == 0) {
          *(long *)this = lVar1;
        }
        UNLOCK();
        if (lVar2 != 0) goto code_r0x00105ef0;
      }
      else {
        LOCK();
        lVar2 = *(long *)this;
        if (lVar2 == 0) {
          *(long *)this = lVar1;
        }
        UNLOCK();
        if (lVar2 != 0) goto LAB_00105ec0;
      }
    }
  }
  if (0x4d < *(uint *)(lVar1 + 0x18)) {
    return *(undefined **)(lVar1 + 0x10);
  }
  return &_hb_NullPool;
code_r0x00105ef0:
  if (lVar1 != 0) {
LAB_00105ec0:
    lVar2 = hb_blob_get_empty();
    if (lVar1 != lVar2) {
      hb_blob_destroy(lVar1);
    }
  }
  goto LAB_00105e6b;
}



/* hb_table_lazy_loader_t<OT::hhea, 4u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::hhea,4u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x68686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* hb_lazy_loader_t<OT::hhea, hb_table_lazy_loader_t<OT::hhea, 4u, true>, hb_face_t, 4u,
   hb_blob_t>::get() const */

undefined * __thiscall
hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>::get
          (hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
           *this)

{
  long lVar1;
  long lVar2;
  
LAB_00105f8b:
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    if (*(hb_face_t **)(this + -0x20) == (hb_face_t *)0x0) {
      lVar1 = hb_blob_get_empty();
    }
    else {
      lVar1 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create(*(hb_face_t **)(this + -0x20));
      if (lVar1 == 0) {
        lVar1 = hb_blob_get_empty();
        LOCK();
        lVar2 = *(long *)this;
        if (lVar2 == 0) {
          *(long *)this = lVar1;
        }
        UNLOCK();
        if (lVar2 != 0) goto code_r0x00106010;
      }
      else {
        LOCK();
        lVar2 = *(long *)this;
        if (lVar2 == 0) {
          *(long *)this = lVar1;
        }
        UNLOCK();
        if (lVar2 != 0) goto LAB_00105fe0;
      }
    }
  }
  if (0x23 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined **)(lVar1 + 0x10);
  }
  return &_hb_NullPool;
code_r0x00106010:
  if (lVar1 != 0) {
LAB_00105fe0:
    lVar2 = hb_blob_get_empty();
    if (lVar1 != lVar2) {
      hb_blob_destroy(lVar1);
    }
  }
  goto LAB_00105f8b;
}



/* hb_table_lazy_loader_t<OT::vhea, 11u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::vhea,11u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x76686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::post::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::post::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


