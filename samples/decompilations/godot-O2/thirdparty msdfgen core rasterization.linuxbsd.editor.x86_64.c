
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::rasterize(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::rasterize(long *param_1,Scanline *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  double dVar6;
  int local_74;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Scanline::Scanline((Scanline *)local_68);
  iVar5 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar5) {
    local_74 = 0;
    do {
      iVar4 = local_74;
      if (param_2[0x18] != (Scanline)0x0) {
        iVar4 = (iVar5 - local_74) + -1;
      }
      dVar6 = (double)msdfgen::Projection::unprojectY((double)local_74 + __LC0);
      msdfgen::Shape::scanline(param_2,dVar6);
      if (0 < (int)param_1[1]) {
        iVar5 = 0;
        do {
          msdfgen::Projection::unprojectX((double)iVar5 + __LC0);
          bVar2 = msdfgen::Scanline::filled((Scanline *)local_68,param_4);
          lVar1 = param_1[1];
          iVar3 = iVar4 * (int)lVar1 + iVar5;
          iVar5 = iVar5 + 1;
          *(float *)(*param_1 + (long)iVar3 * 4) = (float)bVar2;
        } while (iVar5 < (int)lVar1);
      }
      local_74 = local_74 + 1;
      iVar5 = *(int *)((long)param_1 + 0xc);
    } while (local_74 < iVar5);
  }
  if (local_68[0] != (void *)0x0) {
    operator_delete(local_68[0],local_58 - (long)local_68[0]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection
               (long *param_1,Scanline *param_2,undefined8 param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  double dVar7;
  int local_74;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Scanline::Scanline((Scanline *)local_68);
  iVar6 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar6) {
    local_74 = 0;
    do {
      iVar5 = local_74;
      if (param_2[0x18] != (Scanline)0x0) {
        iVar5 = (iVar6 - local_74) + -1;
      }
      dVar7 = (double)msdfgen::Projection::unprojectY((double)local_74 + __LC0);
      msdfgen::Shape::scanline(param_2,dVar7);
      if (0 < (int)param_1[1]) {
        iVar6 = 0;
        do {
          msdfgen::Projection::unprojectX((double)iVar6 + __LC0);
          cVar4 = msdfgen::Scanline::filled((Scanline *)local_68,param_4);
          lVar3 = param_1[1];
          pfVar1 = (float *)(*param_1 + (long)(iVar5 * (int)lVar3 + iVar6) * 4);
          fVar2 = *pfVar1;
          if (__LC1 < fVar2 != (bool)cVar4) {
            *pfVar1 = _LC2 - fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)lVar3);
      }
      local_74 = local_74 + 1;
      iVar6 = *(int *)((long)param_1 + 0xc);
    } while (local_74 < iVar6);
  }
  if (local_68[0] != (void *)0x0) {
    operator_delete(local_68[0],local_58 - (long)local_68[0]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::rasterize(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&, msdfgen::Vector2
   const&, msdfgen::Vector2 const&, msdfgen::FillRule) */

void msdfgen::rasterize(undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
                       undefined4 param_5)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  rasterize(param_1,param_2,aPStack_58,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  distanceSignCorrection(param_1,param_2,aPStack_58,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::multiDistanceSignCorrection<4>(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape
   const&, msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::multiDistanceSignCorrection<4>
               (long *param_1,Scanline *param_2,undefined8 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  Scanline SVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  void *local_b0;
  undefined1 local_88 [16];
  long local_78;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = *(int *)((long)param_1 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar5 * iVar6 != 0) {
    msdfgen::Scanline::Scanline((Scanline *)local_68);
    local_78 = 0;
    local_88 = (undefined1  [16])0x0;
    std::vector<char,std::allocator<char>>::_M_default_append
              ((vector<char,std::allocator<char>> *)local_88,(long)(int)(uVar5 * iVar6));
    uVar10 = local_88._0_8_;
    if (0 < iVar6) {
      iVar16 = iVar6 + -1;
      local_b0 = (void *)local_88._0_8_;
      bVar9 = false;
      iVar12 = iVar16;
      do {
        iVar18 = iVar12;
        if (param_2[0x18] == (Scanline)0x0) {
          iVar18 = iVar16 - iVar12;
        }
        dVar23 = (double)msdfgen::Projection::unprojectY((double)(iVar16 - iVar12) + __LC0);
        msdfgen::Shape::scanline(param_2,dVar23);
        if (0 < (int)uVar5) {
          lVar19 = 0;
          do {
            msdfgen::Projection::unprojectX((double)(int)lVar19 + __LC0);
            cVar11 = msdfgen::Scanline::filled((Scanline *)local_68,param_4);
            pfVar1 = (float *)(*param_1 + (long)(((int)param_1[1] * iVar18 + (int)lVar19) * 4) * 4);
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar3 = pfVar1[2];
            if (fVar8 <= fVar7) {
              fVar21 = fVar7;
              if ((fVar3 < fVar7) && (fVar22 = fVar8, fVar8 < fVar7)) goto LAB_001005b5;
            }
            else {
              fVar21 = fVar8;
              fVar22 = fVar7;
              if (fVar3 < fVar8) {
LAB_001005b5:
                fVar21 = fVar3;
                if (fVar3 <= fVar22) {
                  fVar21 = fVar22;
                }
              }
            }
            if (fVar21 == __LC1) {
              bVar9 = true;
            }
            else {
              uVar17 = 1;
              if (__LC1 < fVar21 != (bool)cVar11) {
                uVar17 = 0xff;
                *(ulong *)pfVar1 = CONCAT44(_UNK_00100dec - fVar8,_LC2 - fVar7);
                pfVar1[2] = _LC2 - fVar3;
              }
              *(undefined1 *)((long)local_b0 + lVar19) = uVar17;
            }
            if (__LC1 < pfVar1[3] != (bool)cVar11) {
              pfVar1[3] = _LC2 - pfVar1[3];
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != (int)uVar5);
          local_b0 = (void *)((long)local_b0 + (ulong)uVar5);
        }
        fVar7 = _UNK_00100dec;
        fVar3 = _LC2;
        bVar20 = iVar12 != 0;
        iVar12 = iVar12 + -1;
      } while (bVar20);
      if (bVar9) {
        iVar12 = 0;
        lVar19 = (long)(int)uVar5;
        SVar4 = param_2[0x18];
        pvVar14 = (void *)uVar10;
        do {
          iVar18 = iVar16 - iVar12;
          if (SVar4 == (Scanline)0x0) {
            iVar18 = iVar12;
          }
          if (0 < (int)uVar5) {
            lVar13 = 0;
LAB_001006d3:
            do {
              if (*(char *)((long)pvVar14 + lVar13) == '\0') {
                if (lVar13 == 0) {
                  iVar15 = 0;
                  if (uVar5 != 1) {
LAB_00100672:
                    iVar15 = iVar15 + *(char *)((long)pvVar14 + lVar13 + 1);
                    goto LAB_0010067b;
                  }
                  if (iVar12 != 0) goto LAB_0010067f;
                  if (iVar16 == 0) {
                    lVar13 = 1;
                    if (lVar19 == 1) break;
                    goto LAB_001006d3;
                  }
LAB_0010068b:
                  iVar15 = iVar15 + *(char *)((long)pvVar14 + lVar13 + lVar19);
                }
                else {
                  iVar15 = (int)*(char *)((long)pvVar14 + lVar13 + -1);
                  if ((int)lVar13 < (int)(uVar5 - 1)) goto LAB_00100672;
LAB_0010067b:
                  if (iVar12 != 0) {
LAB_0010067f:
                    iVar15 = iVar15 + *(char *)((long)pvVar14 + (lVar13 - lVar19));
                  }
                  if (iVar12 < iVar16) goto LAB_0010068b;
                }
                if (iVar15 < 0) {
                  puVar2 = (undefined8 *)
                           (*param_1 + (long)(((int)param_1[1] * iVar18 + (int)lVar13) * 4) * 4);
                  *puVar2 = CONCAT44(fVar7 - (float)((ulong)*puVar2 >> 0x20),fVar3 - (float)*puVar2)
                  ;
                  *(float *)(puVar2 + 1) = fVar3 - *(float *)(puVar2 + 1);
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != lVar19);
            pvVar14 = (void *)((long)pvVar14 + (ulong)uVar5);
          }
          iVar12 = iVar12 + 1;
        } while (iVar6 != iVar12);
      }
    }
    if ((void *)uVar10 != (void *)0x0) {
      operator_delete((void *)uVar10,local_78 - uVar10);
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete(local_68[0],local_58 - (long)local_68[0]);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection(void)

{
  multiDistanceSignCorrection<4>();
  return;
}



/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  multiDistanceSignCorrection<4>(param_1,param_2,aPStack_58,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::multiDistanceSignCorrection<3>(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape
   const&, msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::multiDistanceSignCorrection<3>
               (long *param_1,Scanline *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  Scanline SVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  int iVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  void *local_b0;
  undefined1 local_88 [16];
  long local_78;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  iVar6 = *(int *)((long)param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar6 * uVar7 != 0) {
    msdfgen::Scanline::Scanline((Scanline *)local_68);
    local_78 = 0;
    local_88 = (undefined1  [16])0x0;
    std::vector<char,std::allocator<char>>::_M_default_append
              ((vector<char,std::allocator<char>> *)local_88,(long)(int)(iVar6 * uVar7));
    uVar11 = local_88._0_8_;
    if (0 < iVar6) {
      iVar1 = iVar6 + -1;
      local_b0 = (void *)local_88._0_8_;
      bVar10 = false;
      iVar13 = iVar1;
      do {
        iVar18 = iVar13;
        if (param_2[0x18] == (Scanline)0x0) {
          iVar18 = iVar1 - iVar13;
        }
        dVar23 = (double)msdfgen::Projection::unprojectY((double)(iVar1 - iVar13) + __LC0);
        msdfgen::Shape::scanline(param_2,dVar23);
        if (0 < (int)uVar7) {
          lVar19 = 0;
LAB_00100966:
          do {
            msdfgen::Projection::unprojectX((double)(int)lVar19 + __LC0);
            cVar12 = msdfgen::Scanline::filled((Scanline *)local_68,param_4);
            pfVar2 = (float *)(*param_1 + (long)(((int)param_1[1] * iVar18 + (int)lVar19) * 3) * 4);
            fVar8 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar4 = pfVar2[2];
            if (fVar9 <= fVar8) {
              fVar21 = fVar8;
              if ((fVar4 < fVar8) && (fVar22 = fVar9, fVar9 < fVar8)) goto LAB_00100b85;
            }
            else {
              fVar21 = fVar9;
              fVar22 = fVar8;
              if (fVar4 < fVar9) {
LAB_00100b85:
                fVar21 = fVar4;
                if (fVar4 <= fVar22) {
                  fVar21 = fVar22;
                }
              }
            }
            if (fVar21 == __LC1) {
              lVar19 = lVar19 + 1;
              bVar10 = true;
              if (lVar19 == (int)uVar7) break;
              goto LAB_00100966;
            }
            uVar17 = 1;
            if (__LC1 < fVar21 != (bool)cVar12) {
              uVar17 = 0xff;
              *(ulong *)pfVar2 = CONCAT44(_UNK_00100dec - fVar9,_LC2 - fVar8);
              pfVar2[2] = _LC2 - fVar4;
            }
            *(undefined1 *)((long)local_b0 + lVar19) = uVar17;
            lVar19 = lVar19 + 1;
          } while (lVar19 != (int)uVar7);
          local_b0 = (void *)((long)local_b0 + (ulong)uVar7);
        }
        fVar8 = _UNK_00100dec;
        fVar4 = _LC2;
        bVar20 = iVar13 != 0;
        iVar13 = iVar13 + -1;
      } while (bVar20);
      if (bVar10) {
        iVar13 = 0;
        lVar19 = (long)(int)uVar7;
        SVar5 = param_2[0x18];
        pvVar15 = (void *)uVar11;
        do {
          iVar18 = iVar1 - iVar13;
          if (SVar5 == (Scanline)0x0) {
            iVar18 = iVar13;
          }
          if (0 < (int)uVar7) {
            lVar14 = 0;
LAB_00100afa:
            do {
              if (*(char *)((long)pvVar15 + lVar14) == '\0') {
                if (lVar14 == 0) {
                  iVar16 = 0;
                  if (uVar7 != 1) {
LAB_00100a9a:
                    iVar16 = iVar16 + *(char *)((long)pvVar15 + lVar14 + 1);
                    goto LAB_00100aa3;
                  }
                  if (iVar13 != 0) goto LAB_00100aa7;
                  if (iVar1 == 0) {
                    lVar14 = 1;
                    if (lVar19 == 1) break;
                    goto LAB_00100afa;
                  }
LAB_00100ab3:
                  iVar16 = iVar16 + *(char *)((long)pvVar15 + lVar14 + lVar19);
                }
                else {
                  iVar16 = (int)*(char *)((long)pvVar15 + lVar14 + -1);
                  if ((int)lVar14 < (int)(uVar7 - 1)) goto LAB_00100a9a;
LAB_00100aa3:
                  if (iVar13 != 0) {
LAB_00100aa7:
                    iVar16 = iVar16 + *(char *)((long)pvVar15 + (lVar14 - lVar19));
                  }
                  if (iVar13 < iVar1) goto LAB_00100ab3;
                }
                if (iVar16 < 0) {
                  puVar3 = (undefined8 *)
                           (*param_1 + (long)(((int)param_1[1] * iVar18 + (int)lVar14) * 3) * 4);
                  *puVar3 = CONCAT44(fVar8 - (float)((ulong)*puVar3 >> 0x20),fVar4 - (float)*puVar3)
                  ;
                  *(float *)(puVar3 + 1) = fVar4 - *(float *)(puVar3 + 1);
                }
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 != lVar19);
            pvVar15 = (void *)((long)pvVar15 + (ulong)uVar7);
          }
          iVar13 = iVar13 + 1;
        } while (iVar6 != iVar13);
      }
    }
    if ((void *)uVar11 != (void *)0x0) {
      operator_delete((void *)uVar11,local_78 - uVar11);
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete(local_68[0],local_58 - (long)local_68[0]);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection(void)

{
  multiDistanceSignCorrection<3>();
  return;
}



/* msdfgen::distanceSignCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::FillRule) */

void msdfgen::distanceSignCorrection
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  multiDistanceSignCorrection<3>(param_1,param_2,aPStack_58,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<char, std::allocator<char> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_default_append
          (vector<char,std::allocator<char>> *this,ulong param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  void *__dest;
  undefined1 *puVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = *(undefined1 **)(this + 8);
  __src = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar2)) {
    *puVar2 = 0;
    puVar4 = puVar2 + 1;
    if (param_1 != 1) {
      puVar4 = puVar2 + param_1;
      memset(puVar2 + 1,0,param_1 - 1);
    }
    *(undefined1 **)(this + 8) = puVar4;
    return;
  }
  uVar3 = (long)puVar2 - (long)__src;
  if (0x7fffffffffffffff - uVar3 < param_1) {
    std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = param_1 + uVar3;
  if (uVar3 < param_1) {
    uVar5 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar5 = uVar1;
    }
    __dest = operator_new(uVar5);
    *(undefined1 *)((long)__dest + uVar3) = 0;
    if (param_1 != 1) {
      memset((undefined1 *)((long)__dest + uVar3) + 1,0,param_1 - 1);
    }
    if (uVar3 != 0) goto LAB_00100ce2;
    if (__src == (void *)0x0) goto LAB_00100cff;
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  else {
    uVar5 = uVar3 * 2;
    if (0x7fffffffffffffff < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    __dest = operator_new(uVar5);
    *(undefined1 *)((long)__dest + uVar3) = 0;
    if (param_1 != 1) {
      memset((undefined1 *)((long)__dest + uVar3) + 1,0,param_1 - 1);
    }
LAB_00100ce2:
    memmove(__dest,__src,uVar3);
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  operator_delete(__src,uVar3);
LAB_00100cff:
  *(void **)this = __dest;
  *(ulong *)(this + 8) = uVar1 + (long)__dest;
  *(ulong *)(this + 0x10) = (long)__dest + uVar5;
  return;
}


