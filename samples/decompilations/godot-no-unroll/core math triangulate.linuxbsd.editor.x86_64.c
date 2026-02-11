
/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Triangulate::get_area(Vector<Vector2> const&) */

float Triangulate::get_area(Vector *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar1 + -8);
    if (0 < lVar6) {
      uVar7 = (ulong)((int)lVar6 - 1);
      fVar10 = 0.0;
      fVar9 = 0.0;
      uVar3 = 0;
      uVar5 = uVar7;
      if (0 < (int)lVar6) {
        do {
          iVar4 = (int)uVar5;
          uVar5 = uVar3 & 0xffffffff;
          fVar9 = (float)Vector2::cross((Vector2 *)(lVar1 + (long)iVar4 * 8));
          fVar10 = fVar10 + fVar9;
          bVar8 = uVar3 != uVar7;
          uVar3 = uVar3 + 1;
        } while (bVar8);
        fVar9 = fVar10 * __LC9;
      }
      return fVar9;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Triangulate::is_inside_triangle(float, float, float, float, float, float, float, float, bool) */

bool Triangulate::is_inside_triangle
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,bool param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_5 - param_3) * (param_8 - param_4) - (param_6 - param_4) * (param_7 - param_3);
  fVar2 = (param_3 - param_1) * (param_8 - param_2) - (param_4 - param_2) * (param_7 - param_1);
  fVar1 = (param_1 - param_5) * (param_8 - param_6) - (param_2 - param_6) * (param_7 - param_5);
  if (param_9) {
    if ((0.0 < fVar3) && (0.0 < fVar1)) {
      return 0.0 < fVar2;
    }
  }
  else if ((0.0 <= fVar3) && (0.0 <= fVar1)) {
    return 0.0 <= fVar2;
  }
  return false;
}



/* Triangulate::snip(Vector<Vector2> const&, int, int, int, int, Vector<int> const&, bool) */

ulong Triangulate::snip(Vector *param_1,int param_2,int param_3,int param_4,int param_5,
                       Vector *param_6,bool param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong extraout_RDX;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar13 = (ulong)(uint)param_2;
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    lVar15 = 0;
  }
  else {
    uVar17 = (ulong)(uint)param_4;
    lVar15 = *(long *)(lVar4 + -8);
    if (0 < lVar15) {
      lVar9 = (long)param_2;
      lVar5 = *(long *)(param_6 + 8);
      if (lVar9 < 0) {
        if (lVar5 != 0) {
          lVar15 = *(long *)(lVar5 + -8);
          goto LAB_001004a3;
        }
      }
      else if (lVar5 != 0) {
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar9 < lVar15) {
          uVar16 = (ulong)(uint)param_3;
          pfVar1 = (float *)(lVar4 + (long)*(int *)(lVar5 + lVar9 * 4) * 8);
          fVar21 = *pfVar1;
          fVar22 = pfVar1[1];
          lVar10 = (long)param_3;
          lVar9 = lVar10;
          if ((lVar10 < lVar15) && (-1 < lVar10)) {
            lVar9 = (long)param_4;
            pfVar1 = (float *)(lVar4 + (long)*(int *)(lVar5 + lVar10 * 4) * 8);
            fVar2 = *pfVar1;
            fVar3 = pfVar1[1];
            bVar7 = lVar15 <= lVar9 | (byte)(param_4 >> 0x1f) >> 7;
            uVar12 = CONCAT71((int7)((ulong)pfVar1 >> 8),bVar7) & 0xffffffff;
            if (bVar7 == 0) {
              uVar14 = (ulong)param_7;
              pfVar1 = (float *)(lVar4 + (long)*(int *)(lVar5 + lVar9 * 4) * 8);
              fVar19 = *pfVar1;
              fVar20 = pfVar1[1];
              fVar18 = _LC11;
              if (param_7) {
                fVar18 = _LC10;
              }
              if (fVar18 <= (fVar2 - fVar21) * (fVar20 - fVar22) -
                            (fVar3 - fVar22) * (fVar19 - fVar21)) {
                if (0 < param_5) {
                  lVar10 = (long)param_5;
                  lVar9 = 0;
                  do {
                    iVar11 = (int)lVar9;
                    if ((int)uVar17 != iVar11 && ((int)uVar13 != iVar11 && (int)uVar16 != iVar11)) {
                      if (lVar15 <= lVar9) goto LAB_001004a3;
                      pfVar1 = (float *)(lVar4 + (long)*(int *)(lVar5 + lVar9 * 4) * 8);
                      cVar8 = is_inside_triangle(fVar21,fVar22,fVar2,fVar3,fVar19,fVar20,*pfVar1,
                                                 pfVar1[1],SUB81(uVar14,0));
                      uVar12 = extraout_RDX;
                      if (cVar8 != '\0') goto LAB_00100465;
                    }
                    lVar9 = lVar9 + 1;
                  } while (lVar9 != lVar10);
                }
                uVar12 = 1;
              }
LAB_00100465:
              return uVar12 & 0xffffffff;
            }
          }
        }
        goto LAB_001004a3;
      }
      lVar15 = 0;
      goto LAB_001004a3;
    }
  }
  lVar9 = 0;
LAB_001004a3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Triangulate::triangulate(Vector<Vector2> const&, Vector<int>&) */

undefined8 Triangulate::triangulate(Vector *param_1,Vector *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(param_1 + 8) + -8);
    uVar6 = 0;
    iVar9 = (int)uVar8;
    uVar8 = uVar8 & 0xffffffff;
    if (2 < iVar9) {
      local_50[0] = 0;
      CowData<int>::resize<false>((CowData<int> *)local_50,(long)iVar9);
      fVar18 = (float)get_area(param_1);
      if (0.0 < fVar18) {
        uVar7 = 0;
        do {
          if (local_50[0] == 0) {
            lVar14 = 0;
            goto LAB_00100728;
          }
          lVar14 = *(long *)(local_50[0] + -8);
          if (lVar14 <= (long)uVar7) goto LAB_00100728;
          CowData<int>::_copy_on_write((CowData<int> *)local_50);
          *(int *)(local_50[0] + uVar7 * 4) = (int)uVar7;
          bVar17 = iVar9 - 1 != uVar7;
          uVar7 = uVar7 + 1;
        } while (bVar17);
      }
      else {
        uVar7 = 0;
        iVar15 = iVar9;
        do {
          iVar15 = iVar15 + -1;
          if (local_50[0] == 0) {
            lVar14 = 0;
LAB_00100728:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar7,lVar14,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar14 = *(long *)(local_50[0] + -8);
          if (lVar14 <= (long)uVar7) goto LAB_00100728;
          CowData<int>::_copy_on_write((CowData<int> *)local_50);
          *(int *)(local_50[0] + uVar7 * 4) = iVar15;
          uVar7 = uVar7 + 1;
        } while (iVar15 != 0);
      }
      iVar15 = iVar9 * 2;
      bVar17 = false;
      lVar10 = local_50[0];
      iVar9 = iVar9 + -1;
LAB_001007d4:
      iVar16 = iVar9;
      uVar13 = (uint)uVar8;
      if (iVar15 != 0) goto LAB_001007de;
      if (bVar17 == false) {
        iVar15 = uVar13 * 2;
        bVar17 = true;
        if (iVar16 < (int)uVar13) goto LAB_001007eb;
LAB_00100862:
        iVar16 = 0;
        iVar9 = 1;
        iVar11 = 2;
        while( true ) {
          cVar5 = snip(param_1,iVar16,iVar9,iVar11,uVar13,local_58,bVar17);
          lVar12 = (long)iVar16;
          uVar8 = (ulong)uVar13;
          if (cVar5 == '\0') break;
          uVar8 = (ulong)iVar16;
          iVar15 = iVar11;
          iVar16 = iVar9;
LAB_001008ac:
          if (lVar10 == 0) {
LAB_00100ae3:
            lVar14 = 0;
LAB_00100a64:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar14,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar14 = *(long *)(lVar10 + -8);
          if (lVar14 <= (long)uVar8) goto LAB_00100a64;
          uVar7 = (ulong)iVar16;
          uVar8 = uVar7;
          if (lVar14 <= (long)uVar7) goto LAB_00100a64;
          iVar9 = *(int *)(lVar10 + uVar7 * 4);
          uVar8 = (ulong)iVar15;
          if ((iVar15 < 0) || (lVar14 <= (long)uVar8)) goto LAB_00100a64;
          iVar15 = *(int *)(lVar10 + uVar8 * 4);
          Vector<int>::push_back((Vector<int> *)param_2,*(int *)(lVar10 + lVar12 * 4));
          Vector<int>::push_back((Vector<int> *)param_2,iVar9);
          Vector<int>::push_back((Vector<int> *)param_2,iVar15);
          if (iVar11 < (int)uVar13) {
            uVar8 = (ulong)iVar11;
            uVar2 = (uVar13 - iVar11) + uVar8;
            do {
              if (lVar10 == 0) {
                lVar14 = 0;
                goto LAB_00100a64;
              }
              lVar14 = *(long *)(lVar10 + -8);
              if (lVar14 <= (long)uVar8) goto LAB_00100a64;
              uVar3 = *(undefined4 *)(lVar10 + uVar8 * 4);
              if (lVar14 <= (long)uVar7) goto LAB_00100728;
              uVar8 = uVar8 + 1;
              CowData<int>::_copy_on_write((CowData<int> *)local_50);
              *(undefined4 *)(local_50[0] + uVar7 * 4) = uVar3;
              uVar7 = uVar7 + 1;
              lVar10 = local_50[0];
            } while (uVar2 != uVar8);
          }
          uVar13 = uVar13 - 1;
          if (uVar13 == 2) {
            uVar6 = 1;
            goto LAB_001009bd;
          }
          iVar15 = uVar13 * 2;
LAB_001007de:
          iVar15 = iVar15 + -1;
          if ((int)uVar13 <= iVar16) goto LAB_00100862;
LAB_001007eb:
          iVar9 = iVar16 + 1;
          if (iVar9 < (int)uVar13) {
            iVar11 = iVar16 + 2;
            if (iVar11 < (int)uVar13) {
              cVar5 = snip(param_1,iVar16,iVar9,iVar11,uVar13,local_58,bVar17);
              if (cVar5 == '\0') goto LAB_00100838;
              uVar8 = (ulong)iVar16;
              if (iVar16 < 0) {
                if (lVar10 != 0) {
                  lVar14 = *(long *)(lVar10 + -8);
                  goto LAB_00100a64;
                }
                goto LAB_00100ae3;
              }
              lVar12 = (long)iVar16;
              iVar15 = iVar11;
              iVar16 = iVar9;
            }
            else {
              cVar5 = snip(param_1,iVar16,iVar9,0,uVar13,local_58,bVar17);
              if (cVar5 == '\0') {
LAB_00100838:
                uVar8 = (ulong)uVar13;
                break;
              }
              uVar8 = (ulong)iVar16;
              lVar12 = (long)iVar16;
              iVar15 = 0;
              iVar16 = iVar9;
            }
            goto LAB_001008ac;
          }
          iVar11 = 1;
          iVar9 = 0;
        }
        goto LAB_001007d4;
      }
      uVar6 = 0;
LAB_001009bd:
      if (lVar10 != 0) {
        LOCK();
        plVar1 = (long *)(lVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50[0] + -0x10),false);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00100f40:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00100f40;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00100e51;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00100e51:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


