
/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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
  __n = lVar2 * 8;
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



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<int> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<int> *pCVar10;
  CowData<int> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<int> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar4 = (CowData<int> *)(lVar12 * 4);
    if (pCVar4 != (CowData<int> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<int> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<int> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<int> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010218a();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_001003e1;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_001004d2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_001003e1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001004d2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write
          (CowData<EditorAtlasPacker::PlottedBitmap> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x40 != 0) {
    uVar7 = lVar2 * 0x40 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar8 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined4 *)(lVar9 * 0x40 + *(long *)this);
        *(undefined4 *)puVar8 = *puVar6;
        *(undefined8 *)((long)puVar8 + 4) = *(undefined8 *)(puVar6 + 1);
        uVar1 = puVar6[3];
        puVar8[3] = 0;
        lVar3 = *(long *)(puVar6 + 6);
        *(undefined4 *)((long)puVar8 + 0xc) = uVar1;
        if (lVar3 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar8 + 3),(CowData *)(puVar6 + 6));
        }
        puVar8[5] = 0;
        if (*(long *)(puVar6 + 10) != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar8 + 5),(CowData *)(puVar6 + 10));
        }
        lVar9 = lVar9 + 1;
        *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar6 + 0xc);
        *(undefined8 *)((long)puVar8 + 0x34) = *(undefined8 *)(puVar6 + 0xd);
        puVar8 = puVar8 + 8;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<Vector2i>::push_back(Vector2i) [clone .isra.0] */

void __thiscall Vector<Vector2i>::push_back(Vector<Vector2i> *this,undefined8 param_2)

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
  iVar1 = CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* CowData<EditorAtlasPacker::Chart>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorAtlasPacker::Chart>::_copy_on_write(CowData<EditorAtlasPacker::Chart> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x30 != 0) {
    uVar10 = lVar2 * 0x30 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar2;
  puVar8 = puVar6 + 2;
  if (lVar2 != 0) {
    do {
      lVar5 = *(long *)this + (-0x10 - (long)puVar6);
      puVar8[1] = 0;
      lVar3 = *(long *)((long)puVar8 + lVar5 + 8);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_0010088d;
          LOCK();
          lVar7 = *plVar1;
          bVar11 = lVar3 == lVar7;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar7 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar7 != -1) {
          puVar8[1] = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        }
      }
LAB_0010088d:
      puVar8[3] = 0;
      lVar3 = *(long *)((long)puVar8 + lVar5 + 0x18);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_001008c3;
          LOCK();
          lVar7 = *plVar1;
          bVar11 = lVar3 == lVar7;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar7 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar7 != -1) {
          puVar8[3] = *(undefined8 *)((long)puVar8 + lVar5 + 0x18);
        }
      }
LAB_001008c3:
      lVar9 = lVar9 + 1;
      *(undefined1 *)(puVar8 + 4) = *(undefined1 *)((long)puVar8 + lVar5 + 0x20);
      *(undefined8 *)((long)puVar8 + 0x24) = *(undefined8 *)((long)puVar8 + lVar5 + 0x24);
      *(undefined1 *)((long)puVar8 + 0x2c) = *(undefined1 *)((long)puVar8 + lVar5 + 0x2c);
      puVar8 = puVar8 + 6;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar6 + 2;
  return;
}



/* EditorAtlasPacker::chart_pack(Vector<EditorAtlasPacker::Chart>&, int&, int&, int, int) */

void EditorAtlasPacker::chart_pack
               (Vector *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  long *plVar1;
  Vector2i VVar2;
  Vector2 *this;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  BitMap *this_00;
  undefined8 uVar14;
  int extraout_var;
  long lVar15;
  int extraout_var_00;
  int *piVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  ulong uVar31;
  undefined8 *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  Vector2i *this_01;
  long in_FS_OFFSET;
  ulong local_218;
  long local_200;
  Vector2i *local_1f8;
  Vector2i *local_1f0;
  Vector2i *local_1e0;
  long local_1b8;
  uint local_178;
  undefined8 local_168;
  CowData<char32_t> local_160 [8];
  CowData<char32_t> local_158 [8];
  undefined8 local_150;
  String local_148 [8];
  CowData<char32_t> local_140 [8];
  String local_138 [8];
  undefined8 local_130;
  Vector<EditorAtlasPacker::PlottedBitmap> local_128 [8];
  long local_120 [2];
  long local_110 [2];
  long local_100;
  undefined *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float local_bc;
  long local_b0 [2];
  long local_a0;
  byte local_98;
  undefined8 local_94;
  float local_88;
  uint auStack_84 [2];
  float fStack_7c;
  undefined8 local_78;
  long local_70 [2];
  long local_60;
  byte local_58;
  undefined8 local_54;
  long local_40;
  
  lVar11 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120[0] = 0;
  iVar7 = 0x40;
  if (param_5 < 0x41) {
    iVar7 = param_5;
  }
  if (lVar11 == 0) {
    iVar9 = 0;
  }
  else {
    local_1b8 = 0;
    local_178 = 0;
    do {
      if (*(long *)(lVar11 + -8) <= local_1b8) {
        uVar21 = (int)(local_178 - 1) >> 1 | local_178 - 1;
        goto LAB_001018e8;
      }
      local_d8 = 0;
      local_d0 = 0;
      lVar11 = local_1b8 * 0x30 + lVar11;
      this = *(Vector2 **)(lVar11 + 8);
      if ((this != (Vector2 *)0x0) && (0 < (int)*(undefined8 *)(this + -8))) {
        uVar31 = (ulong)((int)*(undefined8 *)(this + -8) - 1);
        uVar13 = 0;
        do {
          if (uVar13 == 0) {
            local_d8 = Vector2::operator_cast_to_Vector2i(this);
            if (uVar31 == 0) break;
          }
          else {
            uVar14 = Vector2::operator_cast_to_Vector2i(this + uVar13 * 8);
            if ((int)((uint)local_d0 | local_d0._4_4_) < 0) {
              _err_print_error("expand_to","./core/math/rect2i.h",0xbf,
                               "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                              );
            }
            local_c8 = (float)local_d8;
            fStack_c4 = (float)((ulong)local_d8 >> 0x20);
            uVar12 = Vector2i::operator+((Vector2i *)&local_d8,(Vector2i *)&local_d0);
            local_88 = (float)uVar12;
            auStack_84[0] = (uint)((ulong)uVar12 >> 0x20);
            fVar25 = (float)uVar14;
            if ((int)fVar25 < (int)local_c8) {
              local_c8 = fVar25;
            }
            fVar8 = (float)((ulong)uVar14 >> 0x20);
            if ((int)fVar8 < (int)fStack_c4) {
              fStack_c4 = fVar8;
            }
            if ((int)local_88 < (int)fVar25) {
              local_88 = fVar25;
            }
            if ((int)auStack_84[0] < (int)fVar8) {
              auStack_84[0] = (uint)fVar8;
            }
            local_d8 = CONCAT44(fStack_c4,local_c8);
            local_d0 = Vector2i::operator-((Vector2i *)&local_88,(Vector2i *)&local_c8);
            if (uVar13 == uVar31) break;
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      local_1f0 = (Vector2i *)&local_88;
      this_00 = (BitMap *)operator_new(600,"");
      BitMap::BitMap(this_00);
      postinitialize_handler((Object *)this_00);
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
        local_1e0 = (Vector2i *)0x0;
      }
      else {
        cVar5 = RefCounted::reference();
        local_1e0 = (Vector2i *)(BitMap *)0x0;
        if (cVar5 != '\0') {
          local_1e0 = (Vector2i *)this_00;
        }
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
      local_e8 = CONCAT44((float)(iVar7 + -1),(float)(iVar7 + -1));
      local_e0 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_e8);
      uVar14 = Vector2i::operator+((Vector2i *)&local_d0,(Vector2i *)&local_e0);
      local_c8 = (float)uVar14;
      fStack_c4 = (float)((ulong)uVar14 >> 0x20);
      uVar14 = Vector2i::operator/((Vector2i *)&local_c8,iVar7);
      local_88 = (float)uVar14;
      auStack_84[0] = (uint)((ulong)uVar14 >> 0x20);
      BitMap::create(local_1e0);
      iVar9 = BitMap::get_size();
      BitMap::get_size();
      lVar15 = *(long *)(lVar11 + 0x18);
      if (lVar15 != 0) {
        local_218 = 0;
LAB_00100c39:
        if ((long)local_218 < *(long *)(lVar15 + -8)) {
          iVar35 = 0;
          local_88 = 0.0;
          auStack_84[0] = 0;
          auStack_84[1] = 0;
          fStack_7c = 0.0;
          local_78 = 0;
          if (lVar15 != 0) {
            do {
              lVar22 = *(long *)(lVar15 + -8);
              if (lVar22 <= (long)local_218) goto LAB_00101314;
              lVar22 = (long)iVar35;
              uVar13 = (ulong)*(int *)(lVar15 + lVar22 * 4 + local_218 * 0xc);
              lVar15 = *(long *)(lVar11 + 8);
              if ((long)uVar13 < 0) {
                if (lVar15 == 0) {
LAB_0010134e:
                  lVar22 = 0;
                  local_218 = uVar13;
                }
                else {
LAB_001012f5:
                  lVar22 = *(long *)(lVar15 + -8);
                  local_218 = uVar13;
                }
                goto LAB_00101314;
              }
              if (lVar15 == 0) goto LAB_0010134e;
              if (*(long *)(lVar15 + -8) <= (long)uVar13) goto LAB_001012f5;
              uVar14 = *(undefined8 *)(lVar15 + uVar13 * 8);
              iVar35 = iVar35 + 1;
              local_c8 = (float)uVar14;
              fStack_c4 = (float)((ulong)uVar14 >> 0x20);
              uVar14 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_d8);
              local_c8 = (local_c8 - (float)uVar14) / (float)iVar7;
              fStack_c4 = (fStack_c4 - (float)((ulong)uVar14 >> 0x20)) / (float)iVar7;
              if ((float)(iVar9 + -1) <= local_c8) {
                local_c8 = (float)(iVar9 + -1);
              }
              if ((float)(extraout_var + -1) <= fStack_c4) {
                fStack_c4 = (float)(extraout_var + -1);
              }
              uVar14 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
              *(undefined8 *)(&local_88 + lVar22 * 2) = uVar14;
              if (iVar35 == 3) goto LAB_00100dd0;
              lVar15 = *(long *)(lVar11 + 0x18);
              if (lVar15 == 0) break;
            } while( true );
          }
          lVar22 = 0;
          goto LAB_00101314;
        }
      }
LAB_00101045:
      iVar35 = BitMap::get_size();
      uVar36 = iVar35 + 2;
      BitMap::get_size();
      local_110[0] = 0;
      uVar33 = extraout_var_00 + 2;
      local_100 = 0;
      bVar6 = iVar35 < extraout_var_00 & *(byte *)(lVar11 + 0x20);
      uVar21 = uVar36;
      if (bVar6 != 0) {
        uVar21 = uVar33;
      }
      lVar11 = (long)(int)uVar21;
      CowData<int>::resize<false>((CowData<int> *)local_110,lVar11);
      CowData<int>::resize<false>((CowData<int> *)&local_100,lVar11);
      local_1f0 = (Vector2i *)local_110[0];
      if (0 < (int)uVar21) {
        lVar15 = 0;
        do {
          if (local_1f0 == (Vector2i *)0x0) {
LAB_001015b8:
            lVar22 = 0;
            goto LAB_0010149b;
          }
          lVar22 = *(long *)((long)local_1f0 + -8);
          if (lVar22 <= lVar15) goto LAB_0010149b;
          lVar17 = lVar15 * 4;
          CowData<int>::_copy_on_write((CowData<int> *)local_110);
          local_1f0 = (Vector2i *)local_110[0];
          *(undefined4 *)(local_110[0] + lVar15 * 4) = 0xffffffff;
          if (local_100 == 0) goto LAB_001015b8;
          lVar22 = *(long *)(local_100 + -8);
          if (lVar22 <= lVar15) goto LAB_0010149b;
          lVar15 = lVar15 + 1;
          CowData<int>::_copy_on_write((CowData<int> *)&local_100);
          *(undefined4 *)(local_100 + lVar17) = 0x7fffffff;
        } while (lVar15 != lVar11);
      }
      if (0 < (int)uVar36) {
        uVar13 = 0;
        do {
          if (0 < (int)uVar33) {
            goto LAB_001011b2;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar36);
      }
LAB_001019db:
      lVar11 = local_110[0];
      local_168 = 0;
      if (local_110[0] == 0) {
        local_98 = 0;
        local_c8 = 0.0;
        local_bc = 0.0;
        local_b0[0] = 0;
        local_a0 = 0;
        local_94 = 0;
        fStack_c4 = (float)local_d8;
        uStack_c0 = (undefined4)((ulong)local_d8 >> 0x20);
      }
      else {
        for (uVar13 = 0; lVar15 = local_100, (long)uVar13 < *(long *)(lVar11 + -8);
            uVar13 = uVar13 + 1) {
          local_130 = 0;
          local_f8 = &_LC29;
          local_f0 = (undefined8 *)0x2;
          String::parse_latin1((StrRange *)&local_130);
          if (lVar15 == 0) goto LAB_00101baa;
          lVar22 = *(long *)(lVar15 + -8);
          local_218 = uVar13;
          if (lVar22 <= (long)uVar13) goto LAB_00101314;
          itos((long)local_140);
          local_150 = 0;
          local_f8 = &_LC30;
          local_f0 = (undefined8 *)0x1;
          String::parse_latin1((StrRange *)&local_150);
          lVar22 = *(long *)(lVar11 + -8);
          if (lVar22 <= (long)uVar13) goto LAB_00101314;
          itos((long)local_160);
          operator+((char *)local_158,(String *)&_LC31);
          String::operator+(local_148,(String *)local_158);
          String::operator+(local_138,local_148);
          String::operator+((String *)&local_f8,local_138);
          String::operator+=((String *)&local_168,(String *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
          CowData<char32_t>::_unref(local_158);
          CowData<char32_t>::_unref(local_160);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref(local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        }
        local_c8 = 0.0;
        local_bc = 0.0;
        local_b0[0] = 0;
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0;
        fStack_c4 = (float)local_d8;
        uStack_c0 = (undefined4)((ulong)local_d8 >> 0x20);
        CowData<int>::_ref((CowData<int> *)local_b0,(CowData *)local_110);
      }
      if (local_a0 != local_100) {
        CowData<int>::_ref((CowData<int> *)&local_a0,(CowData *)&local_100);
      }
      local_70[0] = 0;
      local_c8 = (float)local_1b8;
      local_bc = (float)(uVar36 * uVar33);
      auStack_84[0] = (uint)fStack_c4;
      auStack_84[1] = uStack_c0;
      local_98 = bVar6;
      local_88 = local_c8;
      fStack_7c = local_bc;
      if (local_b0[0] != 0) {
        CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_b0);
      }
      local_60 = 0;
      if (local_a0 != 0) {
        CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_a0);
      }
      local_54 = local_94;
      if (local_120[0] == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(local_120[0] + -8);
      }
      local_58 = bVar6;
      iVar9 = CowData<EditorAtlasPacker::PlottedBitmap>::resize<false>
                        ((CowData<EditorAtlasPacker::PlottedBitmap> *)local_120,lVar11 + 1);
      if (iVar9 == 0) {
        if (local_120[0] == 0) {
          lVar15 = -1;
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(local_120[0] + -8);
          lVar15 = lVar11 + -1;
          if (-1 < lVar15) {
            CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write
                      ((CowData<EditorAtlasPacker::PlottedBitmap> *)local_120);
            pfVar18 = (float *)(lVar15 * 0x40 + local_120[0]);
            *pfVar18 = local_88;
            *(ulong *)(pfVar18 + 1) = CONCAT44(auStack_84[1],auStack_84[0]);
            pfVar18[3] = fStack_7c;
            if (*(long *)(pfVar18 + 6) != local_70[0]) {
              CowData<int>::_ref((CowData<int> *)(pfVar18 + 6),(CowData *)local_70);
            }
            if (*(long *)(pfVar18 + 10) != local_60) {
              CowData<int>::_ref((CowData<int> *)(pfVar18 + 10),(CowData *)&local_60);
            }
            *(byte *)(pfVar18 + 0xc) = bVar6;
            *(undefined8 *)(pfVar18 + 0xd) = local_54;
            goto LAB_00101eef;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar11,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true");
      }
LAB_00101eef:
      CowData<int>::_unref((CowData<int> *)&local_60);
      CowData<int>::_unref((CowData<int> *)local_70);
      CowData<int>::_unref((CowData<int> *)&local_a0);
      CowData<int>::_unref((CowData<int> *)local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      CowData<int>::_unref((CowData<int> *)&local_100);
      CowData<int>::_unref((CowData<int> *)local_110);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)local_1e0), cVar5 != '\0')) {
        (**(code **)(*(long *)local_1e0 + 0x140))(local_1e0);
        Memory::free_static(local_1e0,false);
      }
      if ((int)uVar21 <= (int)local_178) {
        uVar21 = local_178;
      }
      local_1b8 = local_1b8 + 1;
      lVar11 = *(long *)(param_1 + 8);
      local_178 = uVar21;
    } while (lVar11 != 0);
    uVar21 = (int)(uVar21 - 1) >> 1 | uVar21 - 1;
LAB_001018e8:
    uVar21 = (int)uVar21 >> 2 | uVar21;
    uVar21 = (int)uVar21 >> 4 | uVar21;
    uVar21 = (int)uVar21 >> 8 | uVar21;
    iVar9 = (uVar21 | (int)uVar21 >> 0x10) + 1;
  }
  Vector<EditorAtlasPacker::PlottedBitmap>::
  sort_custom<_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>(local_128);
  uVar21 = param_4 - 1U | (int)(param_4 - 1U) >> 1;
  uVar21 = uVar21 | (int)uVar21 >> 2;
  uVar21 = uVar21 | (int)uVar21 >> 4;
  uVar21 = uVar21 | (int)uVar21 >> 8;
  while( true ) {
    local_f0 = (undefined8 *)0x0;
    CowData<int>::resize<false>((CowData<int> *)&local_f0,(long)iVar9);
    if (0 < iVar9) break;
    iVar35 = 0;
    CowData<int>::_copy_on_write((CowData<int> *)&local_f0);
    if (local_120[0] != 0) {
LAB_0010167c:
      puVar23 = local_f0;
      lVar11 = local_120[0];
      local_218 = 0;
      this_01 = (Vector2i *)(local_120[0] + 4);
      iVar35 = 0;
      while ((long)local_218 < *(long *)(lVar11 + -8)) {
        piVar16 = *(int **)(this_01 + 0x14);
        if (piVar16 == (int *)0x0) {
          lVar15 = 0;
          iVar19 = -1;
          iVar26 = 0x7fffffff;
          iVar28 = iVar9;
          if (-1 < iVar9) goto LAB_001016cc;
        }
        else {
          lVar15 = (long)(int)*(undefined8 *)(piVar16 + -2);
          iVar28 = iVar9 - (int)*(undefined8 *)(piVar16 + -2);
          if (iVar28 < 0) {
            iVar19 = -1;
            iVar26 = 0x7fffffff;
          }
          else {
LAB_001016cc:
            iVar30 = 0;
            iVar19 = -1;
            iVar26 = 0x7fffffff;
            do {
              iVar10 = 0;
              piVar29 = *(int **)(this_01 + 0x24);
              iVar20 = iVar30;
              if (0 < (int)lVar15) {
                do {
                  if (*piVar29 != 0x7fffffff) {
                    iVar34 = *(int *)((long)puVar23 + (long)iVar20 * 4) - *piVar29;
                    iVar27 = 0;
                    if (-1 < iVar10) {
                      iVar27 = iVar10;
                    }
                    iVar10 = iVar27;
                    if (iVar27 <= iVar34) {
                      iVar10 = iVar34;
                    }
                  }
                  piVar29 = piVar29 + 1;
                  iVar20 = iVar20 + 1;
                } while (piVar29 != *(int **)(this_01 + 0x24) + (int)lVar15);
              }
              if (iVar10 < iVar26) {
                iVar26 = iVar10;
                iVar19 = iVar30;
              }
              iVar30 = iVar30 + 1;
            } while (iVar30 <= iVar28);
          }
          if (0 < (int)lVar15) {
            piVar29 = piVar16 + lVar15;
            iVar28 = iVar19;
            do {
              if (*piVar16 != -1) {
                iVar30 = *piVar16 + 1 + iVar26;
                *(int *)((long)puVar23 + (long)iVar28 * 4) = iVar30;
                if (iVar35 < iVar30) {
                  iVar35 = iVar30;
                }
              }
              piVar16 = piVar16 + 1;
              iVar28 = iVar28 + 1;
            } while (piVar16 != piVar29);
          }
        }
        uVar14 = Vector2i::operator_cast_to_Vector2(this_01);
        lVar22 = *(long *)(lVar11 + -8);
        fVar25 = (float)((ulong)uVar14 >> 0x20);
        if (lVar22 <= (long)local_218) goto LAB_00101314;
        fVar8 = (float)uVar14;
        if (this_01[0x2c] != (Vector2i)0x0) {
          fVar8 = fVar25;
          fVar25 = (float)uVar14;
        }
        lVar15 = (long)*(int *)(this_01 + -4);
        lVar17 = *(long *)(param_1 + 8);
        if (lVar15 < 0) {
LAB_00101954:
          if (lVar17 == 0) {
LAB_00101980:
            lVar22 = 0;
          }
          else {
LAB_00101959:
            lVar22 = *(long *)(lVar17 + -8);
          }
LAB_0010149b:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar22,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (lVar17 == 0) goto LAB_00101980;
        if (*(long *)(lVar17 + -8) <= lVar15) goto LAB_00101959;
        CowData<EditorAtlasPacker::Chart>::_copy_on_write
                  ((CowData<EditorAtlasPacker::Chart> *)(param_1 + 8));
        lVar22 = *(long *)(lVar11 + -8);
        lVar17 = *(long *)(param_1 + 8);
        *(ulong *)(lVar17 + 0x24 + lVar15 * 0x30) =
             CONCAT44(((float)(iVar26 * iVar7) + (float)iVar7) - fVar25,
                      ((float)(iVar19 * iVar7) + (float)iVar7) - fVar8);
        if (lVar22 <= (long)local_218) goto LAB_00101314;
        lVar15 = (long)*(int *)(this_01 + -4);
        VVar2 = this_01[0x2c];
        if (lVar15 < 0) goto LAB_00101954;
        if (lVar17 == 0) goto LAB_00101980;
        local_218 = local_218 + 1;
        this_01 = this_01 + 0x40;
        if (*(long *)(lVar17 + -8) <= lVar15) goto LAB_00101959;
        CowData<EditorAtlasPacker::Chart>::_copy_on_write
                  ((CowData<EditorAtlasPacker::Chart> *)(param_1 + 8));
        *(Vector2i *)(lVar15 * 0x30 + *(long *)(param_1 + 8) + 0x2c) = VVar2;
      }
    }
    if (((int)((uVar21 | (int)uVar21 >> 0x10) + 1) / iVar7 <= iVar9) || (iVar35 <= iVar9 * 2))
    goto LAB_00101c32;
    CowData<int>::_unref((CowData<int> *)&local_f0);
    iVar9 = iVar9 * 2;
  }
  lVar15 = 0;
  do {
    if (local_f0 == (undefined8 *)0x0) {
      lVar22 = 0;
      goto LAB_0010149b;
    }
    lVar22 = local_f0[-1];
    if (lVar22 <= lVar15) goto LAB_0010149b;
    CowData<int>::_copy_on_write((CowData<int> *)&local_f0);
    *(undefined4 *)((long)local_f0 + lVar15 * 4) = 0;
    lVar15 = lVar15 + 1;
  } while (iVar9 != lVar15);
  CowData<int>::_copy_on_write((CowData<int> *)&local_f0);
  if (local_120[0] != 0) goto LAB_0010167c;
  iVar35 = 0;
LAB_00101c32:
  CowData<int>::_unref((CowData<int> *)&local_f0);
  *param_2 = iVar7 * iVar9;
  *param_3 = iVar7 * iVar35;
  CowData<EditorAtlasPacker::PlottedBitmap>::_unref
            ((CowData<EditorAtlasPacker::PlottedBitmap> *)local_120);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00100dd0:
  local_200 = 0;
  local_1f8 = local_1f0;
  do {
    if (local_200 == 0) {
      lVar15 = 0x10;
      iVar35 = 2;
    }
    else {
      iVar35 = (int)local_200 + -1;
      lVar15 = local_200 * 8 + -8;
    }
    local_f0 = (undefined8 *)0x0;
    uVar14 = Vector2i::operator-(local_1f0 + lVar15,local_1f8);
    fStack_c4 = (float)((ulong)uVar14 >> 0x20);
    if ((int)fStack_c4 < 1) {
      fStack_c4 = (float)-(int)fStack_c4;
    }
    local_c8 = (float)uVar14;
    if ((int)local_c8 < 1) {
      local_c8 = (float)-(int)local_c8;
    }
    uVar13 = Vector2i::operator*((Vector2i *)&local_c8,2);
    iVar26 = (int)uVar13;
    iVar30 = (int)(uVar13 >> 0x20);
    lVar15 = Vector2i::operator-(local_1f0 + lVar15,local_1f8);
    iVar19 = (int)((ulong)lVar15 >> 0x20);
    iVar28 = -(uint)(iVar19 != 0);
    if (iVar19 != 0 && -1 < lVar15) {
      iVar28 = 1;
    }
    iVar19 = -(uint)((int)lVar15 != 0);
    if (0 < (int)lVar15) {
      iVar19 = 1;
    }
    uVar31 = (ulong)(uint)*(float *)local_1f8;
    uVar21 = *(uint *)(local_1f8 + 4);
    if (iVar30 < iVar26) {
      iVar20 = (int)(((uint)(uVar13 >> 0x1f) & 1) + iVar26) >> 1;
      uVar33 = uVar21;
      if (*(float *)local_1f8 != (&local_88)[(long)iVar35 * 2]) {
        do {
          Vector<Vector2i>::push_back((Vector<Vector2i> *)&local_f8,uVar31 | (ulong)uVar21 << 0x20);
          iVar20 = iVar20 - iVar30;
          if (iVar20 < 0) {
            uVar21 = uVar33 + iVar28;
            iVar20 = iVar20 + iVar26;
            uVar33 = uVar21;
          }
          fVar25 = (float)((int)uVar31 + iVar19);
          uVar31 = (ulong)(uint)fVar25;
        } while ((&local_88)[(long)iVar35 * 2] != fVar25);
      }
    }
    else {
      iVar20 = (int)(((uint)((ulong)((long)uVar13 >> 0x20) >> 0x1f) & 1) + iVar30) >> 1;
      uVar13 = uVar31;
      if (auStack_84[(long)iVar35 * 2] != uVar21) {
        do {
          Vector<Vector2i>::push_back((Vector<Vector2i> *)&local_f8,(ulong)uVar21 << 0x20 | uVar13);
          iVar20 = iVar20 - iVar26;
          if (iVar20 < 0) {
            uVar31 = (ulong)(uint)((int)uVar31 + iVar19);
            iVar20 = iVar20 + iVar30;
            uVar13 = uVar31;
          }
          uVar21 = uVar21 + iVar28;
        } while (auStack_84[(long)iVar35 * 2] != uVar21);
      }
    }
    Vector<Vector2i>::push_back((Vector<Vector2i> *)&local_f8);
    CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)&local_f0);
    puVar23 = local_f0;
    CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)&local_f0);
    puVar4 = local_f0;
    if (local_f0 == (undefined8 *)0x0) {
      puVar32 = (undefined8 *)0x0;
      if (puVar23 != (undefined8 *)0x0) goto LAB_00100fc0;
    }
    else {
      puVar32 = local_f0 + local_f0[-1];
      if (puVar23 != puVar32) {
LAB_00100fc0:
        do {
          uVar14 = *puVar23;
          puVar23 = puVar23 + 1;
          local_c8 = (float)uVar14;
          fStack_c4 = (float)((ulong)uVar14 >> 0x20);
          BitMap::set_bitv(local_1e0,SUB81((Vector2i *)&local_c8,0));
        } while (puVar32 != puVar23);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00101007;
      }
      LOCK();
      plVar1 = puVar4 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_f0 + -2,false);
      }
    }
LAB_00101007:
    local_200 = local_200 + 1;
    local_1f8 = local_1f8 + 8;
  } while (local_200 != 3);
  lVar15 = *(long *)(lVar11 + 0x18);
  local_218 = local_218 + 1;
  if (lVar15 == 0) goto LAB_00101045;
  goto LAB_00100c39;
LAB_001011b2:
  iVar35 = (int)uVar13;
  lVar11 = uVar13 * 4;
  uVar31 = 0;
LAB_001011da:
  iVar28 = (int)uVar31;
  uVar24 = (ulong)(iVar35 - 2);
LAB_001011f0:
  iVar19 = (int)uVar24;
  iVar26 = iVar28 + -2;
  do {
    if (iVar19 < iVar9 && (char)(uVar24 >> 0x1f) == '\0') goto LAB_001014e0;
    iVar26 = iVar26 + 1;
  } while (iVar26 <= iVar28);
  goto LAB_00101211;
  while (iVar26 = iVar26 + 1, iVar26 <= iVar28) {
LAB_001014e0:
    if ((-1 < iVar26) && (iVar26 < extraout_var)) {
      iVar26 = iVar26 + 1;
      cVar5 = BitMap::get_bit((int)local_1e0,iVar19);
      if ((iVar28 < iVar26) || (cVar5 != '\0')) {
        uVar24 = (ulong)(iVar19 + 1U);
        if (iVar35 < (int)(iVar19 + 1U)) {
          if (cVar5 == '\0') goto LAB_00101219;
        }
        else if (cVar5 == '\0') goto LAB_001011f0;
        if (bVar6 != 0) {
          local_218 = uVar31;
          if (local_1f0 != (Vector2i *)0x0) {
            lVar22 = *(long *)((long)local_1f0 + -8);
            if (lVar22 <= (long)uVar31) goto LAB_00101314;
            if (*(int *)((long)local_1f0 + uVar31 * 4) < iVar35) {
              CowData<int>::_copy_on_write((CowData<int> *)local_110);
              *(int *)(local_110[0] + uVar31 * 4) = iVar35;
            }
            if (local_100 != 0) {
              lVar22 = *(long *)(local_100 + -8);
              if (lVar22 <= (long)uVar31) goto LAB_00101314;
              local_1f0 = (Vector2i *)local_110[0];
              if (iVar35 < *(int *)(local_100 + uVar31 * 4)) {
                CowData<int>::_copy_on_write((CowData<int> *)&local_100);
                *(int *)(local_100 + uVar31 * 4) = iVar35;
              }
              goto LAB_00101219;
            }
          }
          lVar22 = 0;
          goto LAB_00101314;
        }
        if (local_1f0 == (Vector2i *)0x0) goto LAB_00101baa;
        lVar22 = *(long *)((long)local_1f0 + -8);
        local_218 = uVar13;
        if (lVar22 <= (long)uVar13) goto LAB_00101314;
        if (*(int *)((long)local_1f0 + lVar11) < iVar28) {
          CowData<int>::_copy_on_write((CowData<int> *)local_110);
          *(int *)(local_110[0] + lVar11) = iVar28;
        }
        if (local_100 == 0) goto LAB_00101baa;
        lVar22 = *(long *)(local_100 + -8);
        if (lVar22 <= (long)uVar13) goto LAB_00101314;
        if (iVar28 < *(int *)(local_100 + lVar11)) {
          CowData<int>::_copy_on_write((CowData<int> *)&local_100);
          *(int *)(local_100 + lVar11) = iVar28;
        }
        local_1f0 = (Vector2i *)local_110[0];
        goto LAB_00101219;
      }
      goto LAB_001014e0;
    }
  }
LAB_00101211:
  uVar24 = (ulong)(iVar19 + 1U);
  if (iVar35 < (int)(iVar19 + 1U)) goto LAB_00101219;
  goto LAB_001011f0;
LAB_00101219:
  uVar31 = uVar31 + 1;
  if (uVar31 == extraout_var_00 + 2) goto code_r0x00101227;
  goto LAB_001011da;
code_r0x00101227:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar36) goto LAB_001019db;
  goto LAB_001011b2;
LAB_00101baa:
  lVar22 = 0;
  local_218 = uVar13;
LAB_00101314:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,local_218,lVar22,"p_index","size()","",false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010218a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorAtlasPacker::Chart>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorAtlasPacker::Chart>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<EditorAtlasPacker::PlottedBitmap, _DefaultComparator<EditorAtlasPacker::PlottedBitmap>,
   true>::partitioner(long, long, EditorAtlasPacker::PlottedBitmap,
   EditorAtlasPacker::PlottedBitmap*) const [clone .isra.0] */

long SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
     ::partitioner(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  
  puVar16 = (undefined4 *)(param_1 * 0x40 + param_4);
  iVar13 = *(int *)(param_3 + 0xc);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = param_2;
  lVar17 = param_1;
  if (iVar13 < (int)puVar16[3]) goto LAB_00102422;
LAB_00102268:
  do {
    lVar15 = lVar15 + -1;
    puVar14 = (undefined4 *)(param_4 + lVar15 * 0x40);
    if ((int)puVar14[3] < iVar13) {
      puVar10 = (undefined4 *)(param_4 + -0x40 + lVar15 * 0x40);
      while (lVar15 != param_1) {
        lVar15 = lVar15 + -1;
        puVar14 = puVar10;
        if (iVar13 <= (int)puVar10[3]) goto LAB_001022cd;
        puVar10 = puVar10 + -0x10;
      }
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                       "bad comparison function; sorting will be broken",0,0);
      lVar15 = param_1;
    }
LAB_001022cd:
    if (lVar15 <= lVar17) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar17;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar6 = *(undefined8 *)(puVar16 + 1);
    uVar3 = *puVar16;
    uVar4 = puVar16[3];
    lVar7 = *(long *)(puVar16 + 6);
    *(undefined8 *)(puVar16 + 6) = 0;
    lVar8 = *(long *)(puVar16 + 10);
    uVar2 = *(undefined1 *)(puVar16 + 0xc);
    uVar9 = *(undefined8 *)(puVar16 + 0xd);
    *(undefined8 *)(puVar16 + 10) = 0;
    *puVar16 = *puVar14;
    *(undefined8 *)(puVar16 + 1) = *(undefined8 *)(puVar14 + 1);
    puVar16[3] = puVar14[3];
    if (*(long *)(puVar14 + 6) != 0) {
      *(long *)(puVar16 + 6) = *(long *)(puVar14 + 6);
      *(undefined8 *)(puVar14 + 6) = 0;
    }
    if (*(long *)(puVar14 + 10) == 0) {
      *(undefined1 *)(puVar16 + 0xc) = *(undefined1 *)(puVar14 + 0xc);
      *(undefined8 *)(puVar16 + 0xd) = *(undefined8 *)(puVar14 + 0xd);
      *puVar14 = uVar3;
      *(undefined8 *)(puVar14 + 1) = uVar6;
      puVar14[3] = uVar4;
      lVar12 = 0;
      if (lVar7 != 0) goto LAB_0010238e;
LAB_00102392:
      lVar11 = 0;
    }
    else {
      *(long *)(puVar16 + 10) = *(long *)(puVar14 + 10);
      *(undefined8 *)(puVar14 + 10) = 0;
      lVar11 = *(long *)(puVar14 + 6);
      *(undefined1 *)(puVar16 + 0xc) = *(undefined1 *)(puVar14 + 0xc);
      *(undefined8 *)(puVar16 + 0xd) = *(undefined8 *)(puVar14 + 0xd);
      *puVar14 = uVar3;
      *(undefined8 *)(puVar14 + 1) = uVar6;
      puVar14[3] = uVar4;
      if (lVar7 != lVar11) {
        if (lVar11 != 0) {
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar12 = *(long *)(puVar14 + 6);
            *(undefined8 *)(puVar14 + 6) = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
            lVar12 = *(long *)(puVar14 + 10);
            goto LAB_0010238e;
          }
        }
        lVar12 = *(long *)(puVar14 + 10);
LAB_0010238e:
        *(long *)(puVar14 + 6) = lVar7;
        goto LAB_00102392;
      }
      lVar12 = *(long *)(puVar14 + 10);
    }
    if (lVar8 == lVar12) {
      *(undefined1 *)(puVar14 + 0xc) = uVar2;
      *(undefined8 *)(puVar14 + 0xd) = uVar9;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + -0x10);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(plVar1,false);
        }
      }
    }
    else {
      if (lVar12 != 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(puVar14 + 10);
          *(undefined8 *)(puVar14 + 10) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      *(long *)(puVar14 + 10) = lVar8;
      *(undefined1 *)(puVar14 + 0xc) = uVar2;
      *(undefined8 *)(puVar14 + 0xd) = uVar9;
    }
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar11 + -0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    iVar13 = *(int *)(param_3 + 0xc);
    puVar14 = puVar16;
    do {
      puVar16 = puVar14 + 0x10;
      lVar17 = lVar17 + 1;
      if ((int)puVar14[0x13] <= iVar13) goto LAB_00102268;
LAB_00102422:
      puVar14 = puVar16;
    } while (param_2 + -1 != lVar17);
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    iVar13 = *(int *)(param_3 + 0xc);
  } while( true );
}



/* SortArray<EditorAtlasPacker::PlottedBitmap, _DefaultComparator<EditorAtlasPacker::PlottedBitmap>,
   true>::adjust_heap(long, long, long, EditorAtlasPacker::PlottedBitmap,
   EditorAtlasPacker::PlottedBitmap*) const [clone .isra.0] */

void SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_90;
  long local_70 [2];
  long local_60;
  undefined1 local_58;
  undefined8 local_54;
  long local_40;
  
  lVar7 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = param_2;
  if (lVar7 < param_3) {
    do {
      puVar8 = (undefined4 *)((param_1 + lVar7) * 0x40 + param_5);
      puVar10 = (undefined4 *)(param_5 + (lVar7 + -1 + param_1) * 0x40);
      iVar3 = puVar8[3];
      iVar9 = puVar10[3];
      lVar11 = lVar7;
      lVar13 = lVar7 + -1;
      if (iVar3 <= iVar9) {
        lVar11 = lVar7 + 1;
        puVar10 = puVar8;
        lVar13 = lVar7;
        iVar9 = iVar3;
      }
      lVar7 = *(long *)(puVar10 + 6);
      puVar8 = (undefined4 *)((lVar12 + param_1) * 0x40 + param_5);
      *puVar8 = *puVar10;
      uVar5 = *(undefined8 *)(puVar10 + 1);
      puVar8[3] = iVar9;
      *(undefined8 *)(puVar8 + 1) = uVar5;
      if (*(long *)(puVar8 + 6) != lVar7) {
        CowData<int>::_ref((CowData<int> *)(puVar8 + 6),(CowData *)(puVar10 + 6));
      }
      if (*(long *)(puVar8 + 10) != *(long *)(puVar10 + 10)) {
        CowData<int>::_ref((CowData<int> *)(puVar8 + 10),(CowData *)(puVar10 + 10));
      }
      lVar7 = lVar11 * 2;
      *(undefined1 *)(puVar8 + 0xc) = *(undefined1 *)(puVar10 + 0xc);
      *(undefined8 *)(puVar8 + 0xd) = *(undefined8 *)(puVar10 + 0xd);
      lVar12 = lVar13;
    } while (lVar7 < param_3);
  }
  else {
    puVar10 = (undefined4 *)(param_5 + (param_2 + param_1) * 0x40);
    lVar13 = param_2;
  }
  puVar8 = puVar10;
  if (param_3 == lVar7) {
    lVar13 = param_3 + -1;
    puVar8 = (undefined4 *)(param_5 + (param_1 + lVar13) * 0x40);
    lVar7 = *(long *)(puVar8 + 6);
    *puVar10 = *puVar8;
    *(undefined8 *)(puVar10 + 1) = *(undefined8 *)(puVar8 + 1);
    puVar10[3] = puVar8[3];
    if (*(long *)(puVar10 + 6) != lVar7) {
      CowData<int>::_ref((CowData<int> *)(puVar10 + 6),(CowData *)(puVar8 + 6));
    }
    if (*(long *)(puVar10 + 10) != *(long *)(puVar8 + 10)) {
      CowData<int>::_ref((CowData<int> *)(puVar10 + 10),(CowData *)(puVar8 + 10));
    }
    *(undefined1 *)(puVar10 + 0xc) = *(undefined1 *)(puVar8 + 0xc);
    *(undefined8 *)(puVar10 + 0xd) = *(undefined8 *)(puVar8 + 0xd);
  }
  local_70[0] = 0;
  uVar4 = *param_4;
  uVar5 = *(undefined8 *)(param_4 + 1);
  iVar3 = param_4[3];
  if (*(long *)(param_4 + 6) != 0) {
    CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(param_4 + 6));
  }
  local_60 = 0;
  local_90 = *(long *)(param_4 + 10);
  if (local_90 != 0) {
    CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(param_4 + 10));
    local_90 = local_60;
  }
  local_54 = *(undefined8 *)(param_4 + 0xd);
  uVar2 = *(undefined1 *)(param_4 + 0xc);
  local_58 = uVar2;
  lVar7 = local_70[0];
  while (local_70[0] = lVar7, param_2 < lVar13) {
    lVar12 = (lVar13 + -1) / 2;
    puVar10 = (undefined4 *)(param_5 + (param_1 + lVar12) * 0x40);
    puVar8 = (undefined4 *)(param_5 + (param_1 + lVar13) * 0x40);
    iVar9 = puVar10[3];
    if (iVar9 <= iVar3) break;
    *puVar8 = *puVar10;
    uVar6 = *(undefined8 *)(puVar10 + 1);
    puVar8[3] = iVar9;
    *(undefined8 *)(puVar8 + 1) = uVar6;
    if (*(long *)(puVar10 + 6) != *(long *)(puVar8 + 6)) {
      CowData<int>::_ref((CowData<int> *)(puVar8 + 6),(CowData *)(puVar10 + 6));
    }
    if (*(long *)(puVar8 + 10) != *(long *)(puVar10 + 10)) {
      CowData<int>::_ref((CowData<int> *)(puVar8 + 10),(CowData *)(puVar10 + 10));
    }
    *(undefined1 *)(puVar8 + 0xc) = *(undefined1 *)(puVar10 + 0xc);
    *(undefined8 *)(puVar8 + 0xd) = *(undefined8 *)(puVar10 + 0xd);
    puVar8 = puVar10;
    lVar13 = lVar12;
    lVar7 = local_70[0];
  }
  *puVar8 = uVar4;
  puVar8[3] = iVar3;
  *(undefined8 *)(puVar8 + 1) = uVar5;
  if (*(long *)(puVar8 + 6) != lVar7) {
    CowData<int>::_ref((CowData<int> *)(puVar8 + 6),(CowData *)local_70);
  }
  if (*(long *)(puVar8 + 10) != local_90) {
    CowData<int>::_ref((CowData<int> *)(puVar8 + 10),(CowData *)&local_60);
  }
  *(undefined1 *)(puVar8 + 0xc) = uVar2;
  *(undefined8 *)(puVar8 + 0xd) = local_54;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar7 = local_70[0];
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_60 + -0x10),false);
      lVar7 = local_70[0];
    }
  }
  if (lVar7 != 0) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_70[0] + -0x10),false);
        return;
      }
      goto LAB_00102956;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102956:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<EditorAtlasPacker::PlottedBitmap, _DefaultComparator<EditorAtlasPacker::PlottedBitmap>,
   true>::partial_sort(long, long, long, EditorAtlasPacker::PlottedBitmap*) const [clone .isra.0] */

void SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
     ::partial_sort(long param_1,long param_2,long param_3,PlottedBitmap_conflict *param_4)

{
  long *plVar1;
  PlottedBitmap_conflict *pPVar2;
  PlottedBitmap_conflict PVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  PlottedBitmap_conflict PVar9;
  int iVar10;
  long lVar11;
  PlottedBitmap_conflict *pPVar12;
  long lVar13;
  PlottedBitmap_conflict *pPVar14;
  long lVar15;
  PlottedBitmap_conflict *pPVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_150;
  long local_148;
  long local_f0 [2];
  long local_e0;
  PlottedBitmap_conflict local_d8;
  undefined8 local_d4;
  undefined4 local_c8;
  undefined8 local_c4;
  int local_bc;
  long local_b0 [2];
  long local_a0;
  PlottedBitmap_conflict local_98;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_84;
  int local_7c;
  long local_70 [2];
  long local_60;
  PlottedBitmap_conflict local_58;
  undefined8 local_54;
  long local_40;
  
  lVar13 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar13 < 2) {
    if (param_2 <= param_3) goto LAB_00103441;
LAB_00102b2b:
    pPVar2 = param_4 + param_1 * 0x40;
    pPVar14 = param_4 + param_3 * 0x40 + 0x28;
    lVar17 = param_3;
    do {
      iVar4 = *(int *)((CowData<int> *)pPVar14 + -0x1c);
      if (*(int *)(pPVar2 + 0xc) < iVar4) {
        local_c8 = *(undefined4 *)((CowData<int> *)pPVar14 + -0x28);
        local_b0[0] = 0;
        local_c4 = *(undefined8 *)((CowData<int> *)pPVar14 + -0x24);
        local_bc = iVar4;
        if (*(long *)((CowData<int> *)pPVar14 + -0x10) != 0) {
          CowData<int>::_ref((CowData<int> *)local_b0,(CowData *)((CowData<int> *)pPVar14 + -0x10));
        }
        local_a0 = 0;
        lVar11 = *(long *)pPVar14;
        if (*(long *)pPVar14 != 0) {
          CowData<int>::_ref((CowData<int> *)&local_a0,(CowData *)pPVar14);
          lVar11 = local_a0;
        }
        local_94 = *(undefined8 *)((CowData<int> *)pPVar14 + 0xc);
        PVar3 = *(PlottedBitmap_conflict *)((CowData<int> *)pPVar14 + 8);
        lVar15 = *(long *)(pPVar2 + 0x18);
        *(undefined4 *)((CowData<int> *)pPVar14 + -0x28) = *(undefined4 *)pPVar2;
        *(undefined8 *)((CowData<int> *)pPVar14 + -0x24) = *(undefined8 *)(pPVar2 + 4);
        *(undefined4 *)((CowData<int> *)pPVar14 + -0x1c) = *(undefined4 *)(pPVar2 + 0xc);
        local_98 = PVar3;
        if (*(long *)((CowData<int> *)pPVar14 + -0x10) != lVar15) {
          CowData<int>::_ref((CowData<int> *)pPVar14 + -0x10,(CowData *)(pPVar2 + 0x18));
        }
        if (*(long *)pPVar14 != *(long *)(pPVar2 + 0x28)) {
          CowData<int>::_ref((CowData<int> *)pPVar14,(CowData *)(pPVar2 + 0x28));
        }
        local_70[0] = 0;
        *(PlottedBitmap_conflict *)((CowData<int> *)pPVar14 + 8) = pPVar2[0x30];
        *(undefined8 *)((CowData<int> *)pPVar14 + 0xc) = *(undefined8 *)(pPVar2 + 0x34);
        local_88 = local_c8;
        local_84 = local_c4;
        local_7c = local_bc;
        if (local_b0[0] != 0) {
          CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_b0);
        }
        local_60 = 0;
        if (lVar11 == 0) {
          local_54 = local_94;
          local_58 = PVar3;
          adjust_heap(param_1,0,lVar13,&local_88,param_4);
        }
        else {
          CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_a0);
          lVar11 = local_60;
          local_54 = local_94;
          local_58 = PVar3;
          adjust_heap(param_1,0,lVar13,&local_88,param_4);
          if (lVar11 != 0) {
            LOCK();
            plVar1 = (long *)(lVar11 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
        }
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_70[0] + -0x10),false);
          }
        }
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a0 + -0x10),false);
          }
        }
        if (local_b0[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_b0[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_b0[0] + -0x10),false);
          }
        }
      }
      lVar17 = lVar17 + 1;
      pPVar14 = (PlottedBitmap_conflict *)((CowData<int> *)pPVar14 + 0x40);
    } while (lVar17 < param_2);
    if (lVar13 < 2) goto LAB_00103441;
  }
  else {
    lVar17 = lVar13 + -2 >> 1;
    pPVar14 = param_4 + (param_1 + lVar17) * 0x40 + 0x28;
    while( true ) {
      local_88 = *(undefined4 *)((CowData *)pPVar14 + -0x28);
      local_70[0] = 0;
      local_84 = *(undefined8 *)((CowData *)pPVar14 + -0x24);
      local_7c = *(int *)((CowData *)pPVar14 + -0x1c);
      if (*(long *)((CowData *)pPVar14 + -0x10) != 0) {
        CowData<int>::_ref((CowData<int> *)local_70,(CowData *)pPVar14 + -0x10);
      }
      local_60 = 0;
      if (*(long *)pPVar14 == 0) {
        local_58 = *(PlottedBitmap_conflict *)((CowData *)pPVar14 + 8);
        local_54 = *(undefined8 *)((CowData *)pPVar14 + 0xc);
        adjust_heap(param_1,lVar17,lVar13,&local_88,param_4);
      }
      else {
        CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)pPVar14);
        lVar11 = local_60;
        local_58 = *(PlottedBitmap_conflict *)((CowData *)pPVar14 + 8);
        local_54 = *(undefined8 *)((CowData *)pPVar14 + 0xc);
        adjust_heap(param_1,lVar17,lVar13,&local_88,param_4);
        if (lVar11 != 0) {
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_60 + -0x10),false);
          }
        }
      }
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_70[0] + -0x10),false);
        }
      }
      pPVar14 = (PlottedBitmap_conflict *)((CowData *)pPVar14 + -0x40);
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -1;
    }
    if (param_3 < param_2) goto LAB_00102b2b;
  }
  pPVar2 = param_4 + param_1 * 0x40;
  pPVar14 = param_4 + (param_3 + -1) * 0x40 + 0x28;
  local_150 = (param_3 + -1) - param_1;
  do {
    uVar5 = *(undefined4 *)((CowData *)pPVar14 + -0x28);
    local_f0[0] = 0;
    uVar7 = *(undefined8 *)((CowData *)pPVar14 + -0x24);
    iVar4 = *(int *)((CowData *)pPVar14 + -0x1c);
    if (*(long *)((CowData *)pPVar14 + -0x10) != 0) {
      CowData<int>::_ref((CowData<int> *)local_f0,(CowData *)pPVar14 + -0x10);
    }
    local_e0 = 0;
    local_148 = *(long *)pPVar14;
    if (local_148 != 0) {
      CowData<int>::_ref((CowData<int> *)&local_e0,(CowData *)pPVar14);
      local_148 = local_e0;
    }
    PVar3 = *(PlottedBitmap_conflict *)((CowData *)pPVar14 + 8);
    local_d4 = *(undefined8 *)((CowData *)pPVar14 + 0xc);
    *(undefined4 *)((CowData *)pPVar14 + -0x28) = *(undefined4 *)pPVar2;
    *(undefined8 *)((CowData *)pPVar14 + -0x24) = *(undefined8 *)(pPVar2 + 4);
    *(undefined4 *)((CowData *)pPVar14 + -0x1c) = *(undefined4 *)(pPVar2 + 0xc);
    local_d8 = PVar3;
    if (*(long *)((CowData *)pPVar14 + -0x10) != *(long *)(pPVar2 + 0x18)) {
      CowData<int>::_ref((CowData<int> *)((CowData *)pPVar14 + -0x10),(CowData *)(pPVar2 + 0x18));
    }
    if (*(long *)pPVar14 != *(long *)(pPVar2 + 0x28)) {
      CowData<int>::_ref((CowData<int> *)pPVar14,(CowData *)(pPVar2 + 0x28));
    }
    local_b0[0] = 0;
    *(PlottedBitmap_conflict *)((CowData *)pPVar14 + 8) = pPVar2[0x30];
    *(undefined8 *)((CowData *)pPVar14 + 0xc) = *(undefined8 *)(pPVar2 + 0x34);
    local_c8 = uVar5;
    local_c4 = uVar7;
    local_bc = iVar4;
    if (local_f0[0] != 0) {
      CowData<int>::_ref((CowData<int> *)local_b0,(CowData *)local_f0);
    }
    local_a0 = 0;
    if (local_148 != 0) {
      CowData<int>::_ref((CowData<int> *)&local_a0,(CowData *)&local_e0);
      local_148 = local_a0;
    }
    local_94 = local_d4;
    local_98 = PVar3;
    if (local_150 < 3) {
      lVar17 = 0;
      lVar13 = 2;
      pPVar12 = pPVar2;
    }
    else {
      lVar13 = 2;
      lVar11 = 0;
      do {
        iVar4 = *(int *)(param_4 + (param_1 + lVar13) * 0x40 + 0xc);
        iVar10 = *(int *)(param_4 + (param_1 + lVar13 + -1) * 0x40 + 0xc);
        pPVar12 = param_4 + (param_1 + lVar13 + -1) * 0x40;
        lVar17 = lVar13 + -1;
        lVar15 = lVar13;
        if (iVar4 <= iVar10) {
          lVar15 = lVar13 + 1;
          pPVar12 = param_4 + (param_1 + lVar13) * 0x40;
          lVar17 = lVar13;
          iVar10 = iVar4;
        }
        pPVar16 = param_4 + (lVar11 + param_1) * 0x40;
        *(undefined4 *)pPVar16 = *(undefined4 *)pPVar12;
        uVar7 = *(undefined8 *)(pPVar12 + 4);
        *(int *)(pPVar16 + 0xc) = iVar10;
        *(undefined8 *)(pPVar16 + 4) = uVar7;
        if (*(long *)(pPVar16 + 0x18) != *(long *)(pPVar12 + 0x18)) {
          CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x18),(CowData *)(pPVar12 + 0x18));
        }
        if (*(long *)(pPVar16 + 0x28) != *(long *)(pPVar12 + 0x28)) {
          CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x28),(CowData *)(pPVar12 + 0x28));
        }
        lVar13 = lVar15 * 2;
        pPVar16[0x30] = pPVar12[0x30];
        *(undefined8 *)(pPVar16 + 0x34) = *(undefined8 *)(pPVar12 + 0x34);
        lVar11 = lVar17;
      } while (local_150 != lVar13 && SBORROW8(local_150,lVar13) == local_150 + lVar15 * -2 < 0);
    }
    lVar11 = local_150 + -1;
    pPVar16 = pPVar12;
    if (local_150 == lVar13) {
      pPVar16 = param_4 + (param_1 + lVar11) * 0x40;
      lVar13 = *(long *)(pPVar16 + 0x18);
      *(undefined4 *)pPVar12 = *(undefined4 *)pPVar16;
      *(undefined8 *)(pPVar12 + 4) = *(undefined8 *)(pPVar16 + 4);
      *(undefined4 *)(pPVar12 + 0xc) = *(undefined4 *)(pPVar16 + 0xc);
      if (*(long *)(pPVar12 + 0x18) != lVar13) {
        CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x18),(CowData *)(pPVar16 + 0x18));
      }
      if (*(long *)(pPVar12 + 0x28) != *(long *)(pPVar16 + 0x28)) {
        CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x28),(CowData *)(pPVar16 + 0x28));
      }
      pPVar12[0x30] = pPVar16[0x30];
      *(undefined8 *)(pPVar12 + 0x34) = *(undefined8 *)(pPVar16 + 0x34);
      lVar17 = lVar11;
    }
    local_70[0] = 0;
    local_88 = local_c8;
    local_84 = local_c4;
    local_7c = local_bc;
    if (local_b0[0] != 0) {
      CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_b0);
    }
    local_60 = 0;
    PVar9 = PVar3;
    uVar7 = local_94;
    iVar4 = local_7c;
    lVar13 = local_70[0];
    if (local_148 != 0) {
      CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_a0);
      local_148 = local_60;
      uVar7 = local_94;
      iVar4 = local_7c;
      lVar13 = local_70[0];
    }
    while (local_54 = uVar7, local_58 = PVar9, iVar10 = local_7c, local_70[0] = lVar13, lVar17 != 0)
    {
      lVar15 = (lVar17 + -1) / 2;
      pPVar12 = param_4 + (param_1 + lVar15) * 0x40;
      pPVar16 = param_4 + (lVar17 + param_1) * 0x40;
      iVar6 = *(int *)(pPVar12 + 0xc);
      if (iVar6 <= local_7c) break;
      *(undefined4 *)pPVar16 = *(undefined4 *)pPVar12;
      uVar7 = *(undefined8 *)(pPVar12 + 4);
      *(int *)(pPVar16 + 0xc) = iVar6;
      *(undefined8 *)(pPVar16 + 4) = uVar7;
      local_7c = iVar4;
      if (*(long *)(pPVar12 + 0x18) != *(long *)(pPVar16 + 0x18)) {
        CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x18),(CowData *)(pPVar12 + 0x18));
      }
      if (*(long *)(pPVar16 + 0x28) != *(long *)(pPVar12 + 0x28)) {
        CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x28),(CowData *)(pPVar12 + 0x28));
      }
      pPVar16[0x30] = pPVar12[0x30];
      *(undefined8 *)(pPVar16 + 0x34) = *(undefined8 *)(pPVar12 + 0x34);
      PVar9 = local_58;
      pPVar16 = pPVar12;
      lVar17 = lVar15;
      uVar7 = local_54;
      iVar4 = local_7c;
      lVar13 = local_70[0];
      local_7c = iVar10;
    }
    *(int *)(pPVar16 + 0xc) = local_7c;
    *(undefined4 *)pPVar16 = local_88;
    *(undefined8 *)(pPVar16 + 4) = local_84;
    local_7c = iVar4;
    if (*(long *)(pPVar16 + 0x18) != lVar13) {
      CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x18),(CowData *)local_70);
    }
    if (*(long *)(pPVar16 + 0x28) != local_148) {
      CowData<int>::_ref((CowData<int> *)(pPVar16 + 0x28),(CowData *)&local_60);
    }
    pPVar16[0x30] = PVar3;
    *(undefined8 *)(pPVar16 + 0x34) = local_54;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar13 = local_70[0];
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
        lVar13 = local_70[0];
      }
    }
    if (lVar13 != 0) {
      LOCK();
      plVar1 = (long *)(lVar13 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_70[0] + -0x10),false);
      }
    }
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a0 + -0x10),false);
      }
    }
    if (local_b0[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_b0[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b0[0] + -0x10),false);
      }
    }
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_e0 + -0x10),false);
      }
    }
    if (local_f0[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_f0[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_f0[0] + -0x10),false);
      }
    }
    pPVar14 = (PlottedBitmap_conflict *)((CowData *)pPVar14 + -0x40);
    bVar8 = 1 < local_150;
    local_150 = lVar11;
  } while (bVar8);
LAB_00103441:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<EditorAtlasPacker::PlottedBitmap, _DefaultComparator<EditorAtlasPacker::PlottedBitmap>,
   true>::introsort(long, long, EditorAtlasPacker::PlottedBitmap*, long) const [clone .isra.0] */

void SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
     ::introsort(long param_1,long param_2,PlottedBitmap_conflict *param_3,long param_4)

{
  long *plVar1;
  PlottedBitmap_conflict *pPVar2;
  PlottedBitmap_conflict *pPVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  PlottedBitmap_conflict *pPVar13;
  PlottedBitmap_conflict *pPVar14;
  PlottedBitmap_conflict *pPVar15;
  PlottedBitmap_conflict *pPVar16;
  PlottedBitmap_conflict *pPVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  long local_108;
  long local_d0;
  long local_c0;
  undefined4 local_88;
  undefined8 local_84;
  int local_7c;
  long local_70 [2];
  long local_60;
  PlottedBitmap_conflict local_58;
  undefined8 local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2 - param_1;
  if (lVar7 < 0x11) {
LAB_001043a0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      pPVar3 = param_3 + param_1 * 0x40;
      local_c0 = param_2;
LAB_00103639:
      do {
        lVar8 = local_c0;
        param_4 = param_4 + -1;
        iVar4 = *(int *)(pPVar3 + 0xc);
        pPVar2 = param_3 + local_c0 * 0x40 + -0x40;
        iVar5 = *(int *)(param_3 + ((lVar7 >> 1) + param_1) * 0x40 + 0xc);
        iVar6 = *(int *)(pPVar2 + 0xc);
        if (iVar5 < iVar4) {
          if (iVar6 < iVar5) {
LAB_00104349:
            pPVar13 = param_3 + ((lVar7 >> 1) + param_1) * 0x40;
            local_7c = iVar5;
          }
          else {
            pPVar13 = pPVar2;
            local_7c = iVar6;
            if (iVar4 <= iVar6) {
              pPVar13 = pPVar3;
              local_7c = iVar4;
            }
          }
        }
        else {
          pPVar13 = pPVar3;
          local_7c = iVar4;
          if ((iVar4 <= iVar6) && (pPVar13 = pPVar2, local_7c = iVar6, iVar5 <= iVar6))
          goto LAB_00104349;
        }
        local_88 = *(undefined4 *)pPVar13;
        local_70[0] = 0;
        local_84 = *(undefined8 *)(pPVar13 + 4);
        if (*(long *)(pPVar13 + 0x18) != 0) {
          CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar13 + 0x18));
        }
        local_60 = 0;
        if (*(long *)(pPVar13 + 0x28) == 0) {
          local_58 = pPVar13[0x30];
          local_54 = *(undefined8 *)(pPVar13 + 0x34);
          local_c0 = partitioner(param_1,local_c0,&local_88,param_3);
        }
        else {
          CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar13 + 0x28));
          lVar7 = local_60;
          local_58 = pPVar13[0x30];
          local_54 = *(undefined8 *)(pPVar13 + 0x34);
          local_c0 = partitioner(param_1,local_c0,&local_88,param_3);
          if (lVar7 != 0) {
            LOCK();
            plVar1 = (long *)(lVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
        }
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_70[0] + -0x10),false);
          }
        }
        lVar7 = lVar8 - local_c0;
        if (0x10 < lVar7) {
          if (param_4 != 0) {
            pPVar2 = param_3 + local_c0 * 0x40;
            lVar19 = param_4;
            lVar9 = lVar8;
LAB_001037b6:
            do {
              lVar19 = lVar19 + -1;
              pPVar13 = param_3 + lVar9 * 0x40 + -0x40;
              iVar4 = *(int *)(pPVar2 + 0xc);
              iVar5 = *(int *)(pPVar13 + 0xc);
              iVar6 = *(int *)(param_3 + ((lVar7 >> 1) + local_c0) * 0x40 + 0xc);
              if (iVar6 < iVar4) {
                if (iVar5 < iVar6) {
LAB_001041ee:
                  pPVar14 = param_3 + ((lVar7 >> 1) + local_c0) * 0x40;
                  local_7c = iVar6;
                }
                else {
                  pPVar14 = pPVar13;
                  local_7c = iVar5;
                  if (iVar4 <= iVar5) {
                    pPVar14 = pPVar2;
                    local_7c = iVar4;
                  }
                }
              }
              else {
                pPVar14 = pPVar2;
                local_7c = iVar4;
                if ((iVar4 <= iVar5) && (pPVar14 = pPVar13, local_7c = iVar5, iVar6 <= iVar5))
                goto LAB_001041ee;
              }
              local_88 = *(undefined4 *)pPVar14;
              local_70[0] = 0;
              local_84 = *(undefined8 *)(pPVar14 + 4);
              if (*(long *)(pPVar14 + 0x18) != 0) {
                CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar14 + 0x18));
              }
              local_60 = 0;
              if (*(long *)(pPVar14 + 0x28) == 0) {
                local_58 = pPVar14[0x30];
                local_54 = *(undefined8 *)(pPVar14 + 0x34);
                lVar8 = partitioner(local_c0,lVar9,&local_88,param_3);
              }
              else {
                CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar14 + 0x28));
                lVar7 = local_60;
                local_58 = pPVar14[0x30];
                local_54 = *(undefined8 *)(pPVar14 + 0x34);
                lVar8 = partitioner(local_c0,lVar9,&local_88,param_3);
                if (lVar7 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar7 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_60 + -0x10),false);
                  }
                }
              }
              if (local_70[0] != 0) {
                LOCK();
                plVar1 = (long *)(local_70[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_70[0] + -0x10),false);
                }
              }
              lVar7 = lVar9 - lVar8;
              if (0x10 < lVar7) {
                if (lVar19 != 0) {
                  pPVar13 = param_3 + lVar8 * 0x40;
                  lVar10 = lVar9;
                  local_d0 = lVar19;
LAB_00103932:
                  do {
                    local_d0 = local_d0 + -1;
                    iVar4 = *(int *)(pPVar13 + 0xc);
                    pPVar14 = param_3 + lVar10 * 0x40 + -0x40;
                    iVar5 = *(int *)(pPVar14 + 0xc);
                    iVar6 = *(int *)(param_3 + ((lVar7 >> 1) + lVar8) * 0x40 + 0xc);
                    if (iVar6 < iVar4) {
                      if (iVar5 < iVar6) {
LAB_00104169:
                        pPVar15 = param_3 + ((lVar7 >> 1) + lVar8) * 0x40;
                        local_7c = iVar6;
                      }
                      else {
                        pPVar15 = pPVar14;
                        local_7c = iVar5;
                        if (iVar4 <= iVar5) {
                          pPVar15 = pPVar13;
                          local_7c = iVar4;
                        }
                      }
                    }
                    else {
                      pPVar15 = pPVar13;
                      local_7c = iVar4;
                      if ((iVar4 <= iVar5) && (pPVar15 = pPVar14, local_7c = iVar5, iVar6 <= iVar5))
                      goto LAB_00104169;
                    }
                    local_88 = *(undefined4 *)pPVar15;
                    local_70[0] = 0;
                    local_84 = *(undefined8 *)(pPVar15 + 4);
                    if (*(long *)(pPVar15 + 0x18) != 0) {
                      CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar15 + 0x18));
                    }
                    local_60 = 0;
                    if (*(long *)(pPVar15 + 0x28) == 0) {
                      local_58 = pPVar15[0x30];
                      local_54 = *(undefined8 *)(pPVar15 + 0x34);
                      lVar9 = partitioner(lVar8,lVar10,&local_88,param_3);
                    }
                    else {
                      CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar15 + 0x28));
                      lVar7 = local_60;
                      local_58 = pPVar15[0x30];
                      local_54 = *(undefined8 *)(pPVar15 + 0x34);
                      lVar9 = partitioner(lVar8,lVar10,&local_88,param_3);
                      if (lVar7 != 0) {
                        LOCK();
                        plVar1 = (long *)(lVar7 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          Memory::free_static((void *)(local_60 + -0x10),false);
                        }
                      }
                    }
                    if (local_70[0] != 0) {
                      LOCK();
                      plVar1 = (long *)(local_70[0] + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        Memory::free_static((void *)(local_70[0] + -0x10),false);
                      }
                    }
                    lVar7 = lVar10 - lVar9;
                    if (0x10 < lVar7) {
                      if (local_d0 != 0) {
                        pPVar14 = param_3 + lVar9 * 0x40;
                        lVar20 = local_d0;
                        lVar11 = lVar10;
LAB_00103aad:
                        lVar20 = lVar20 + -1;
                        iVar4 = *(int *)(pPVar14 + 0xc);
                        pPVar15 = param_3 + lVar11 * 0x40 + -0x40;
                        iVar5 = *(int *)(pPVar15 + 0xc);
                        iVar6 = *(int *)(param_3 + ((lVar7 >> 1) + lVar9) * 0x40 + 0xc);
                        if (iVar6 < iVar4) {
                          if (iVar5 < iVar6) {
LAB_001040c0:
                            pPVar16 = param_3 + ((lVar7 >> 1) + lVar9) * 0x40;
                            local_7c = iVar6;
                          }
                          else {
                            pPVar16 = pPVar15;
                            local_7c = iVar5;
                            if (iVar4 <= iVar5) {
                              pPVar16 = pPVar14;
                              local_7c = iVar4;
                            }
                          }
                        }
                        else {
                          pPVar16 = pPVar14;
                          local_7c = iVar4;
                          if ((iVar4 <= iVar5) &&
                             (pPVar16 = pPVar15, local_7c = iVar5, iVar6 <= iVar5))
                          goto LAB_001040c0;
                        }
                        local_88 = *(undefined4 *)pPVar16;
                        local_70[0] = 0;
                        local_84 = *(undefined8 *)(pPVar16 + 4);
                        if (*(long *)(pPVar16 + 0x18) != 0) {
                          CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar16 + 0x18));
                        }
                        local_60 = 0;
                        if (*(long *)(pPVar16 + 0x28) == 0) {
                          local_58 = pPVar16[0x30];
                          local_54 = *(undefined8 *)(pPVar16 + 0x34);
                          lVar10 = partitioner(lVar9,lVar11,&local_88,param_3);
                        }
                        else {
                          CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar16 + 0x28));
                          lVar7 = local_60;
                          local_58 = pPVar16[0x30];
                          local_54 = *(undefined8 *)(pPVar16 + 0x34);
                          lVar10 = partitioner(lVar9,lVar11,&local_88,param_3);
                          if (lVar7 != 0) {
                            LOCK();
                            plVar1 = (long *)(lVar7 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              Memory::free_static((void *)(local_60 + -0x10),false);
                            }
                          }
                        }
                        if (local_70[0] != 0) {
                          LOCK();
                          plVar1 = (long *)(local_70[0] + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            Memory::free_static((void *)(local_70[0] + -0x10),false);
                          }
                        }
                        lVar7 = lVar11 - lVar10;
                        if (0x10 < lVar7) goto code_r0x00103bfe;
LAB_00103f8e:
                        lVar7 = lVar10 - lVar9;
                        if (0x10 < lVar7) goto LAB_00103f9e;
                        goto LAB_00104058;
                      }
LAB_00104179:
                      partial_sort(lVar9,lVar10,lVar10,param_3);
                    }
LAB_00104128:
                    lVar7 = lVar9 - lVar8;
                    if (lVar7 < 0x11) {
                      lVar7 = lVar8 - local_c0;
                      lVar9 = lVar8;
                      if (0x10 < lVar7) goto LAB_001037b6;
                      goto LAB_0010427e;
                    }
                    lVar10 = lVar9;
                  } while (local_d0 != 0);
                }
                partial_sort(lVar8,lVar9,lVar9,param_3);
              }
LAB_00104078:
              lVar7 = lVar8 - local_c0;
              if (lVar7 < 0x11) goto LAB_0010427e;
              lVar9 = lVar8;
              if (lVar19 == 0) break;
            } while( true );
          }
          partial_sort(local_c0,lVar8,lVar8,param_3);
        }
        lVar7 = local_c0 - param_1;
        if (lVar7 < 0x11) goto LAB_001043a0;
        param_2 = local_c0;
        if (param_4 == 0) break;
      } while( true );
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00103bfe:
  if (lVar20 != 0) {
    pPVar15 = param_3 + lVar10 * 0x40;
    lVar12 = lVar11;
    local_108 = lVar20;
LAB_00103c29:
    do {
      local_108 = local_108 + -1;
      iVar4 = *(int *)(pPVar15 + 0xc);
      pPVar16 = param_3 + lVar12 * 0x40 + -0x40;
      iVar5 = *(int *)(pPVar16 + 0xc);
      iVar6 = *(int *)(param_3 + ((lVar7 >> 1) + lVar10) * 0x40 + 0xc);
      if (iVar6 < iVar4) {
        if (iVar5 < iVar6) {
LAB_00103f60:
          pPVar17 = param_3 + ((lVar7 >> 1) + lVar10) * 0x40;
          local_7c = iVar6;
        }
        else {
          pPVar17 = pPVar16;
          local_7c = iVar5;
          if (iVar4 <= iVar5) {
            pPVar17 = pPVar15;
            local_7c = iVar4;
          }
        }
      }
      else {
        pPVar17 = pPVar15;
        local_7c = iVar4;
        if ((iVar4 <= iVar5) && (pPVar17 = pPVar16, local_7c = iVar5, iVar6 <= iVar5))
        goto LAB_00103f60;
      }
      local_88 = *(undefined4 *)pPVar17;
      local_70[0] = 0;
      local_84 = *(undefined8 *)(pPVar17 + 4);
      if (*(long *)(pPVar17 + 0x18) != 0) {
        CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar17 + 0x18));
      }
      local_60 = 0;
      if (*(long *)(pPVar17 + 0x28) == 0) {
        local_58 = pPVar17[0x30];
        local_54 = *(undefined8 *)(pPVar17 + 0x34);
        lVar11 = partitioner(lVar10,lVar12,&local_88,param_3);
      }
      else {
        CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar17 + 0x28));
        lVar7 = local_60;
        local_58 = pPVar17[0x30];
        local_54 = *(undefined8 *)(pPVar17 + 0x34);
        lVar11 = partitioner(lVar10,lVar12,&local_88,param_3);
        if (lVar7 != 0) {
          LOCK();
          plVar1 = (long *)(lVar7 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_60 + -0x10),false);
          }
        }
      }
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_70[0] + -0x10),false);
        }
      }
      lVar7 = lVar12 - lVar11;
      if (0x10 < lVar7) {
        if (local_108 != 0) {
          lVar18 = local_108;
          lVar21 = lVar12;
          do {
            iVar4 = *(int *)(param_3 + lVar11 * 0x40 + 0xc);
            lVar18 = lVar18 + -1;
            pPVar16 = param_3 + lVar21 * 0x40 + -0x40;
            local_7c = *(int *)(pPVar16 + 0xc);
            iVar5 = *(int *)(param_3 + ((lVar7 >> 1) + lVar11) * 0x40 + 0xc);
            if (iVar5 < iVar4) {
              if (local_7c < iVar5) {
LAB_00103f40:
                pPVar16 = param_3 + ((lVar7 >> 1) + lVar11) * 0x40;
                local_7c = iVar5;
              }
              else if (iVar4 <= local_7c) goto LAB_00103dc4;
            }
            else {
              if (iVar4 <= local_7c) {
                if (local_7c < iVar5) goto LAB_00103dc9;
                goto LAB_00103f40;
              }
LAB_00103dc4:
              pPVar16 = param_3 + lVar11 * 0x40;
              local_7c = iVar4;
            }
LAB_00103dc9:
            local_88 = *(undefined4 *)pPVar16;
            local_70[0] = 0;
            local_84 = *(undefined8 *)(pPVar16 + 4);
            if (*(long *)(pPVar16 + 0x18) != 0) {
              CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar16 + 0x18));
            }
            local_60 = 0;
            if (*(long *)(pPVar16 + 0x28) == 0) {
              local_58 = pPVar16[0x30];
              local_54 = *(undefined8 *)(pPVar16 + 0x34);
              lVar12 = partitioner(lVar11,lVar21,&local_88,param_3);
            }
            else {
              CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar16 + 0x28));
              lVar7 = local_60;
              local_58 = pPVar16[0x30];
              local_54 = *(undefined8 *)(pPVar16 + 0x34);
              lVar12 = partitioner(lVar11,lVar21,&local_88,param_3);
              if (lVar7 != 0) {
                LOCK();
                plVar1 = (long *)(lVar7 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_60 + -0x10),false);
                }
              }
            }
            if (local_70[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_70[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_70[0] + -0x10),false);
              }
            }
            introsort(lVar12,lVar21,param_3,lVar18);
            lVar7 = lVar12 - lVar11;
            if (lVar7 < 0x11) {
              lVar7 = lVar11 - lVar10;
              lVar12 = lVar11;
              if (lVar7 < 0x11) goto LAB_00103f8e;
              goto LAB_00103c29;
            }
            lVar21 = lVar12;
          } while (lVar18 != 0);
        }
        partial_sort(lVar11,lVar12,lVar12,param_3);
      }
      lVar7 = lVar11 - lVar10;
      if (lVar7 < 0x11) {
        lVar7 = lVar10 - lVar9;
        lVar11 = lVar10;
        if (lVar7 < 0x11) goto LAB_00104128;
        goto LAB_00103aad;
      }
      lVar12 = lVar11;
    } while (local_108 != 0);
  }
  partial_sort(lVar10,lVar11,lVar11,param_3);
  lVar7 = lVar10 - lVar9;
  if (lVar7 < 0x11) {
LAB_00104058:
    lVar7 = lVar9 - lVar8;
    lVar10 = lVar9;
    if (lVar7 < 0x11) goto LAB_00104078;
    goto LAB_00103932;
  }
LAB_00103f9e:
  lVar11 = lVar10;
  if (lVar20 == 0) goto LAB_00104179;
  goto LAB_00103aad;
LAB_0010427e:
  lVar7 = local_c0 - param_1;
  if (lVar7 < 0x11) goto LAB_001043a0;
  goto LAB_00103639;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
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



/* CowData<EditorAtlasPacker::PlottedBitmap>::_unref() */

void __thiscall
CowData<EditorAtlasPacker::PlottedBitmap>::_unref(CowData<EditorAtlasPacker::PlottedBitmap> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* void 
   Vector<EditorAtlasPacker::PlottedBitmap>::sort_custom<_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,
   true>() */

void __thiscall
Vector<EditorAtlasPacker::PlottedBitmap>::
sort_custom<_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
          (Vector<EditorAtlasPacker::PlottedBitmap> *this)

{
  long *plVar1;
  PlottedBitmap_conflict PVar2;
  int iVar3;
  long lVar4;
  PlottedBitmap_conflict *pPVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  CowData<int> *pCVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  PlottedBitmap_conflict *pPVar12;
  CowData *pCVar13;
  int iVar14;
  long lVar15;
  CowData *pCVar16;
  long lVar17;
  CowData *pCVar18;
  PlottedBitmap_conflict *pPVar19;
  long in_FS_OFFSET;
  long local_100;
  long local_b0 [2];
  long local_a0;
  PlottedBitmap_conflict local_98;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_84;
  int local_7c;
  long local_70 [2];
  long local_60;
  PlottedBitmap_conflict local_58;
  undefined8 local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar4 = *(long *)(*(long *)(this + 8) + -8), lVar4 != 0)) {
    CowData<EditorAtlasPacker::PlottedBitmap>::_copy_on_write
              ((CowData<EditorAtlasPacker::PlottedBitmap> *)(this + 8));
    pPVar5 = *(PlottedBitmap_conflict **)(this + 8);
    if (lVar4 != 1) {
      lVar15 = 0;
      lVar17 = lVar4;
      do {
        lVar17 = lVar17 >> 1;
        lVar15 = lVar15 + 1;
      } while (lVar17 != 1);
      lVar15 = lVar15 * 2;
      lVar17 = lVar4;
      if (lVar4 < 0x11) {
        pPVar19 = pPVar5 + 0x68;
        local_100 = 1;
        do {
          local_88 = *(undefined4 *)((CowData *)pPVar19 + -0x28);
          local_70[0] = 0;
          local_84 = *(undefined8 *)((CowData *)pPVar19 + -0x24);
          local_7c = *(int *)((CowData *)pPVar19 + -0x1c);
          if (*(long *)((CowData *)pPVar19 + -0x10) != 0) {
            CowData<int>::_ref((CowData<int> *)local_70,(CowData *)pPVar19 + -0x10);
          }
          local_60 = 0;
          lVar15 = *(long *)pPVar19;
          if (*(long *)pPVar19 != 0) {
            CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)pPVar19);
            lVar15 = local_60;
          }
          lVar17 = local_70[0];
          iVar14 = local_7c;
          uVar6 = local_84;
          uVar9 = local_88;
          PVar2 = *(PlottedBitmap_conflict *)((CowData *)pPVar19 + 8);
          local_54 = *(undefined8 *)((CowData *)pPVar19 + 0xc);
          pCVar13 = (CowData *)pPVar19;
          lVar11 = local_100;
          local_58 = PVar2;
          if (*(int *)(pPVar5 + 0xc) < local_7c) {
            do {
              *(undefined4 *)((CowData<int> *)pCVar13 + -0x28) =
                   *(undefined4 *)((CowData<int> *)pCVar13 + -0x68);
              *(undefined8 *)((CowData<int> *)pCVar13 + -0x24) =
                   *(undefined8 *)((CowData<int> *)pCVar13 + -100);
              *(undefined4 *)((CowData<int> *)pCVar13 + -0x1c) =
                   *(undefined4 *)((CowData<int> *)pCVar13 + -0x5c);
              if (*(long *)((CowData<int> *)pCVar13 + -0x10) !=
                  *(long *)((CowData<int> *)pCVar13 + -0x50)) {
                CowData<int>::_ref((CowData<int> *)pCVar13 + -0x10,
                                   (CowData *)((CowData<int> *)pCVar13 + -0x50));
              }
              if (*(long *)pCVar13 != *(long *)((CowData<int> *)pCVar13 + -0x40)) {
                CowData<int>::_ref((CowData<int> *)pCVar13,
                                   (CowData *)((CowData<int> *)pCVar13 + -0x40));
              }
              ((CowData<int> *)pCVar13)[8] = ((CowData<int> *)pCVar13)[-0x38];
              *(undefined8 *)((CowData<int> *)pCVar13 + 0xc) =
                   *(undefined8 *)((CowData<int> *)pCVar13 + -0x34);
              lVar11 = lVar11 + -1;
              pCVar13 = (CowData *)((CowData<int> *)pCVar13 + -0x40);
            } while (lVar11 != 0);
            *(undefined4 *)pPVar5 = uVar9;
            *(undefined8 *)(pPVar5 + 4) = local_84;
            *(int *)(pPVar5 + 0xc) = iVar14;
            if (*(long *)(pPVar5 + 0x18) != lVar17) {
              CowData<int>::_ref((CowData<int> *)(pPVar5 + 0x18),(CowData *)local_70);
            }
            if (lVar15 != *(long *)(pPVar5 + 0x28)) {
              CowData<int>::_ref((CowData<int> *)(pPVar5 + 0x28),(CowData *)&local_60);
            }
            pPVar5[0x30] = PVar2;
            *(undefined8 *)(pPVar5 + 0x34) = local_54;
          }
          else {
            local_b0[0] = 0;
            if (local_70[0] != 0) {
              CowData<int>::_ref((CowData<int> *)local_b0,(CowData *)local_70);
            }
            local_a0 = 0;
            if (lVar15 != 0) {
              CowData<int>::_ref((CowData<int> *)&local_a0,(CowData *)&local_60);
              lVar15 = local_a0;
            }
            iVar3 = *(int *)((CowData *)pPVar19 + -0x5c);
            pPVar12 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + -0x28);
            local_94 = local_54;
            local_98 = PVar2;
            pCVar8 = (CowData<int> *)pPVar19;
            lVar17 = local_100;
            if (iVar3 < iVar14) {
              while (lVar17 = lVar17 + -1, lVar17 != 0) {
                pCVar18 = pCVar13 + -0x40;
                lVar11 = *(long *)(pCVar13 + -0x50);
                *(undefined4 *)(pCVar8 + -0x28) = *(undefined4 *)(pCVar13 + -0x68);
                uVar7 = *(undefined8 *)(pCVar13 + -100);
                *(int *)(pCVar8 + -0x1c) = iVar3;
                *(undefined8 *)(pCVar8 + -0x24) = uVar7;
                if (*(long *)(pCVar8 + -0x10) != lVar11) {
                  CowData<int>::_ref(pCVar8 + -0x10,pCVar13 + -0x50);
                }
                if (*(long *)pCVar8 != *(long *)pCVar18) {
                  CowData<int>::_ref(pCVar8,pCVar18);
                }
                iVar3 = *(int *)(pCVar8 + -0x9c);
                pCVar8[8] = *(CowData<int> *)(pCVar13 + -0x38);
                *(undefined8 *)(pCVar8 + 0xc) = *(undefined8 *)(pCVar13 + -0x34);
                if (iVar14 <= iVar3) {
                  pPVar12 = pPVar5 + lVar17 * 0x40;
                  goto LAB_001053d8;
                }
                pCVar8 = pCVar8 + -0x40;
                pCVar13 = pCVar18;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pPVar12 = pPVar5 + 0x40;
            }
LAB_001053d8:
            lVar17 = local_b0[0];
            *(undefined4 *)pPVar12 = uVar9;
            *(int *)(pPVar12 + 0xc) = iVar14;
            *(undefined8 *)(pPVar12 + 4) = uVar6;
            if (*(long *)(pPVar12 + 0x18) != local_b0[0]) {
              CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x18),(CowData *)local_b0);
            }
            if (lVar15 != *(long *)(pPVar12 + 0x28)) {
              CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x28),(CowData *)&local_a0);
            }
            pPVar12[0x30] = PVar2;
            *(undefined8 *)(pPVar12 + 0x34) = local_94;
            if (lVar15 != 0) {
              LOCK();
              plVar1 = (long *)(lVar15 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              lVar17 = local_b0[0];
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_a0 + -0x10),false);
                lVar17 = local_b0[0];
              }
            }
            lVar15 = local_60;
            if (lVar17 != 0) {
              LOCK();
              plVar1 = (long *)(lVar17 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_b0[0] + -0x10),false);
                lVar15 = local_60;
              }
            }
          }
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
          if (local_70[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_70[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70[0] + -0x10),false);
            }
          }
          local_100 = local_100 + 1;
          pPVar19 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + 0x40);
        } while (lVar4 != local_100);
      }
      else {
        do {
          iVar14 = *(int *)(pPVar5 + 0xc);
          lVar15 = lVar15 + -1;
          pPVar19 = pPVar5 + lVar17 * 0x40 + -0x40;
          local_7c = *(int *)(pPVar19 + 0xc);
          iVar3 = *(int *)(pPVar5 + (lVar17 >> 1) * 0x40 + 0xc);
          if (iVar3 < iVar14) {
            if (local_7c < iVar3) {
LAB_00104970:
              pPVar19 = pPVar5 + (lVar17 >> 1) * 0x40;
              local_7c = iVar3;
            }
            else if (iVar14 <= local_7c) goto LAB_00104849;
          }
          else {
            if (iVar14 <= local_7c) {
              if (local_7c < iVar3) goto LAB_0010484e;
              goto LAB_00104970;
            }
LAB_00104849:
            pPVar19 = pPVar5;
            local_7c = iVar14;
          }
LAB_0010484e:
          local_88 = *(undefined4 *)pPVar19;
          local_70[0] = 0;
          local_84 = *(undefined8 *)(pPVar19 + 4);
          if (*(long *)(pPVar19 + 0x18) != 0) {
            CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pPVar19 + 0x18));
          }
          local_60 = 0;
          if (*(long *)(pPVar19 + 0x28) == 0) {
            local_58 = pPVar19[0x30];
            local_54 = *(undefined8 *)(pPVar19 + 0x34);
            lVar11 = SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
                     ::partitioner(0,lVar17,&local_88,pPVar5);
          }
          else {
            CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)(pPVar19 + 0x28));
            lVar10 = local_60;
            local_58 = pPVar19[0x30];
            local_54 = *(undefined8 *)(pPVar19 + 0x34);
            lVar11 = SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
                     ::partitioner(0,lVar17,&local_88,pPVar5);
            if (lVar10 != 0) {
              LOCK();
              plVar1 = (long *)(lVar10 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_60 + -0x10),false);
              }
            }
          }
          if (local_70[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_70[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70[0] + -0x10),false);
            }
          }
          SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
          ::introsort(lVar11,lVar17,pPVar5,lVar15);
          if (lVar11 < 0x11) goto LAB_001049b5;
          lVar17 = lVar11;
        } while (lVar15 != 0);
        SortArray<EditorAtlasPacker::PlottedBitmap,_DefaultComparator<EditorAtlasPacker::PlottedBitmap>,true>
        ::partial_sort(0,lVar11,lVar11,pPVar5);
LAB_001049b5:
        pPVar19 = pPVar5 + 0x68;
        local_100 = 0;
        do {
          local_70[0] = 0;
          lVar15 = local_100 + 1;
          local_88 = *(undefined4 *)((CowData *)pPVar19 + -0x28);
          local_84 = *(undefined8 *)((CowData *)pPVar19 + -0x24);
          local_7c = *(int *)((CowData *)pPVar19 + -0x1c);
          if (*(long *)((CowData *)pPVar19 + -0x10) != 0) {
            CowData<int>::_ref((CowData<int> *)local_70,(CowData *)pPVar19 + -0x10);
          }
          local_60 = 0;
          lVar17 = *(long *)pPVar19;
          if (*(long *)pPVar19 != 0) {
            CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)pPVar19);
            lVar17 = local_60;
          }
          lVar11 = local_70[0];
          iVar14 = local_7c;
          uVar6 = local_84;
          uVar9 = local_88;
          PVar2 = *(PlottedBitmap_conflict *)((CowData *)pPVar19 + 8);
          local_54 = *(undefined8 *)((CowData *)pPVar19 + 0xc);
          local_58 = PVar2;
          if (*(int *)(pPVar5 + 0xc) < local_7c) {
            pCVar13 = (CowData *)pPVar19;
            do {
              *(undefined4 *)((CowData<int> *)pCVar13 + -0x28) =
                   *(undefined4 *)((CowData<int> *)pCVar13 + -0x68);
              *(undefined8 *)((CowData<int> *)pCVar13 + -0x24) =
                   *(undefined8 *)((CowData<int> *)pCVar13 + -100);
              *(undefined4 *)((CowData<int> *)pCVar13 + -0x1c) =
                   *(undefined4 *)((CowData<int> *)pCVar13 + -0x5c);
              if (*(long *)((CowData<int> *)pCVar13 + -0x10) !=
                  *(long *)((CowData<int> *)pCVar13 + -0x50)) {
                CowData<int>::_ref((CowData<int> *)pCVar13 + -0x10,
                                   (CowData *)((CowData<int> *)pCVar13 + -0x50));
              }
              pCVar18 = (CowData *)((CowData<int> *)pCVar13 + -0x40);
              if (*(long *)pCVar13 != *(long *)((CowData<int> *)pCVar13 + -0x40)) {
                CowData<int>::_ref((CowData<int> *)pCVar13,pCVar18);
              }
              ((CowData<int> *)pCVar13)[8] = ((CowData<int> *)pCVar13)[-0x38];
              *(undefined8 *)((CowData<int> *)pCVar13 + 0xc) =
                   *(undefined8 *)((CowData<int> *)pCVar13 + -0x34);
              pCVar13 = pCVar18;
            } while (pCVar18 != (CowData *)(pPVar5 + 0x28));
            *(undefined4 *)pPVar5 = uVar9;
            *(undefined8 *)(pPVar5 + 4) = local_84;
            *(int *)(pPVar5 + 0xc) = iVar14;
            if (*(long *)(pPVar5 + 0x18) != lVar11) {
              CowData<int>::_ref((CowData<int> *)(pPVar5 + 0x18),(CowData *)local_70);
            }
            if (*(long *)(pPVar5 + 0x28) != lVar17) {
              CowData<int>::_ref((CowData<int> *)(pPVar5 + 0x28),(CowData *)&local_60);
            }
            pPVar5[0x30] = PVar2;
            *(undefined8 *)(pPVar5 + 0x34) = local_54;
          }
          else {
            local_b0[0] = 0;
            if (local_70[0] != 0) {
              CowData<int>::_ref((CowData<int> *)local_b0,(CowData *)local_70);
            }
            local_a0 = 0;
            if (lVar17 != 0) {
              CowData<int>::_ref((CowData<int> *)&local_a0,(CowData *)&local_60);
              lVar17 = local_a0;
            }
            iVar3 = *(int *)((CowData *)pPVar19 + -0x5c);
            pPVar12 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + -0x28);
            local_94 = local_54;
            local_98 = PVar2;
            pCVar8 = (CowData<int> *)pPVar19;
            pCVar13 = (CowData *)pPVar19;
            if (iVar3 < iVar14) {
              while (local_100 != 0) {
                pCVar18 = pCVar13 + -0x40;
                lVar11 = *(long *)(pCVar13 + -0x50);
                *(undefined4 *)(pCVar8 + -0x28) = *(undefined4 *)(pCVar13 + -0x68);
                uVar7 = *(undefined8 *)(pCVar13 + -100);
                *(int *)(pCVar8 + -0x1c) = iVar3;
                *(undefined8 *)(pCVar8 + -0x24) = uVar7;
                if (*(long *)(pCVar8 + -0x10) != lVar11) {
                  CowData<int>::_ref(pCVar8 + -0x10,pCVar13 + -0x50);
                }
                if (*(long *)pCVar8 != *(long *)pCVar18) {
                  CowData<int>::_ref(pCVar8,pCVar18);
                }
                iVar3 = *(int *)(pCVar8 + -0x9c);
                pCVar8[8] = *(CowData<int> *)(pCVar13 + -0x38);
                *(undefined8 *)(pCVar8 + 0xc) = *(undefined8 *)(pCVar13 + -0x34);
                if (iVar14 <= iVar3) {
                  pPVar12 = pPVar5 + local_100 * 0x40;
                  goto LAB_00104f78;
                }
                pCVar8 = pCVar8 + -0x40;
                pCVar13 = pCVar18;
                local_100 = local_100 + -1;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pPVar12 = pPVar5 + 0x40;
            }
LAB_00104f78:
            lVar11 = local_b0[0];
            *(undefined4 *)pPVar12 = uVar9;
            *(int *)(pPVar12 + 0xc) = iVar14;
            *(undefined8 *)(pPVar12 + 4) = uVar6;
            if (*(long *)(pPVar12 + 0x18) != local_b0[0]) {
              CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x18),(CowData *)local_b0);
            }
            if (lVar17 != *(long *)(pPVar12 + 0x28)) {
              CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x28),(CowData *)&local_a0);
            }
            pPVar12[0x30] = PVar2;
            *(undefined8 *)(pPVar12 + 0x34) = local_94;
            if (lVar17 != 0) {
              LOCK();
              plVar1 = (long *)(lVar17 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              lVar11 = local_b0[0];
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_a0 + -0x10),false);
                lVar11 = local_b0[0];
              }
            }
            lVar17 = local_60;
            if (lVar11 != 0) {
              LOCK();
              plVar1 = (long *)(lVar11 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_b0[0] + -0x10),false);
                lVar17 = local_60;
              }
            }
          }
          if (lVar17 != 0) {
            LOCK();
            plVar1 = (long *)(lVar17 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
          if (local_70[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_70[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70[0] + -0x10),false);
            }
          }
          pPVar19 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + 0x40);
          local_100 = lVar15;
        } while (lVar15 != 0xf);
        local_100 = 0x10;
        pPVar19 = pPVar5 + 0x428;
        do {
          local_88 = *(undefined4 *)((CowData *)pPVar19 + -0x28);
          local_70[0] = 0;
          local_84 = *(undefined8 *)((CowData *)pPVar19 + -0x24);
          local_7c = *(int *)((CowData *)pPVar19 + -0x1c);
          if (*(long *)((CowData *)pPVar19 + -0x10) != 0) {
            CowData<int>::_ref((CowData<int> *)local_70,(CowData *)pPVar19 + -0x10);
          }
          local_60 = 0;
          lVar15 = *(long *)pPVar19;
          if (*(long *)pPVar19 != 0) {
            CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)pPVar19);
            lVar15 = local_60;
          }
          iVar3 = local_7c;
          PVar2 = *(PlottedBitmap_conflict *)((CowData *)pPVar19 + 8);
          iVar14 = *(int *)((CowData *)pPVar19 + -0x5c);
          local_54 = *(undefined8 *)((CowData *)pPVar19 + 0xc);
          pCVar18 = (CowData *)pPVar19;
          lVar17 = local_100 + -1;
          pCVar13 = (CowData *)pPVar19;
          local_58 = PVar2;
          if (iVar14 < local_7c) {
            do {
              pCVar16 = pCVar13 + -0x40;
              *(undefined4 *)((CowData<int> *)pCVar18 + -0x28) = *(undefined4 *)(pCVar13 + -0x68);
              uVar6 = *(undefined8 *)(pCVar13 + -100);
              *(int *)((CowData<int> *)pCVar18 + -0x1c) = iVar14;
              *(undefined8 *)((CowData<int> *)pCVar18 + -0x24) = uVar6;
              if (*(long *)((CowData<int> *)pCVar18 + -0x10) != *(long *)(pCVar13 + -0x50)) {
                CowData<int>::_ref((CowData<int> *)pCVar18 + -0x10,pCVar13 + -0x50);
              }
              if (*(long *)pCVar18 != *(long *)pCVar16) {
                CowData<int>::_ref((CowData<int> *)pCVar18,pCVar16);
              }
              iVar14 = *(int *)((CowData<int> *)pCVar18 + -0x9c);
              *(CowData *)((CowData<int> *)pCVar18 + 8) = pCVar13[-0x38];
              *(undefined8 *)((CowData<int> *)pCVar18 + 0xc) = *(undefined8 *)(pCVar13 + -0x34);
              lVar11 = lVar17 + -1;
              if (iVar3 <= iVar14) {
                pPVar12 = pPVar5 + lVar17 * 0x40;
                goto LAB_00104d41;
              }
              pCVar18 = (CowData *)((CowData<int> *)pCVar18 + -0x40);
              lVar17 = lVar11;
              pCVar13 = pCVar16;
            } while (lVar11 != 0);
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar12 = pPVar5 + 0x40;
          }
          else {
            pPVar12 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + -0x28);
          }
LAB_00104d41:
          lVar17 = local_70[0];
          *(int *)(pPVar12 + 0xc) = iVar3;
          *(undefined4 *)pPVar12 = local_88;
          *(undefined8 *)(pPVar12 + 4) = local_84;
          if (*(long *)(pPVar12 + 0x18) != local_70[0]) {
            CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x18),(CowData *)local_70);
          }
          if (lVar15 != *(long *)(pPVar12 + 0x28)) {
            CowData<int>::_ref((CowData<int> *)(pPVar12 + 0x28),(CowData *)&local_60);
          }
          pPVar12[0x30] = PVar2;
          *(undefined8 *)(pPVar12 + 0x34) = local_54;
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar17 = local_70[0];
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
              lVar17 = local_70[0];
            }
          }
          if (lVar17 != 0) {
            LOCK();
            plVar1 = (long *)(lVar17 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70[0] + -0x10),false);
            }
          }
          local_100 = local_100 + 1;
          pPVar19 = (PlottedBitmap_conflict *)((CowData *)pPVar19 + 0x40);
        } while (lVar4 != local_100);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

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
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00105760:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00105760;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_001056cc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00105661;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001056cc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00105661:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<EditorAtlasPacker::PlottedBitmap>::_realloc(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::PlottedBitmap>::_realloc
          (CowData<EditorAtlasPacker::PlottedBitmap> *this,long param_1)

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
/* Error CowData<EditorAtlasPacker::PlottedBitmap>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::PlottedBitmap>::resize<false>
          (CowData<EditorAtlasPacker::PlottedBitmap> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x40;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x40 == 0) {
LAB_00105b30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x40 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_00105b30;
  uVar12 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar12) {
        if (lVar11 != lVar9) {
          uVar6 = _realloc(this,lVar11);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      lVar7 = lVar7 + uVar12 * 0x40;
      if (*(long *)(lVar7 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x28);
          *(undefined8 *)(lVar7 + 0x28) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00105b86;
  }
  if (lVar11 == lVar9) {
LAB_00105a9b:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00105b86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_001059ba;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar11);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00105a9b;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar4 = puVar8 + lVar7 * 8;
  do {
    *(undefined4 *)puVar4 = 0;
    puVar5 = puVar4 + 8;
    *(undefined8 *)((long)puVar4 + 4) = 0;
    *(undefined4 *)((long)puVar4 + 0xc) = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined8 *)((long)puVar4 + 0x34) = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar8 + param_1 * 8);
LAB_001059ba:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<EditorAtlasPacker::Chart>::_unref() */

void __thiscall CowData<EditorAtlasPacker::Chart>::_unref(CowData<EditorAtlasPacker::Chart> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}


