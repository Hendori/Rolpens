
/* GDScriptTokenizerBuffer::get_cursor_column() const */

undefined8 GDScriptTokenizerBuffer::get_cursor_column(void)

{
  return 0;
}



/* GDScriptTokenizerBuffer::set_cursor_position(int, int) */

void GDScriptTokenizerBuffer::set_cursor_position(int param_1,int param_2)

{
  return;
}



/* GDScriptTokenizerBuffer::set_multiline_mode(bool) */

void __thiscall
GDScriptTokenizerBuffer::set_multiline_mode(GDScriptTokenizerBuffer *this,bool param_1)

{
  this[0xb0] = (GDScriptTokenizerBuffer)param_1;
  return;
}



/* GDScriptTokenizerBuffer::is_past_cursor() const */

undefined8 GDScriptTokenizerBuffer::is_past_cursor(void)

{
  return 0;
}



/* GDScriptTokenizerBuffer::push_expression_indented_block() */

void __thiscall
GDScriptTokenizerBuffer::push_expression_indented_block(GDScriptTokenizerBuffer *this)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(long *)(this + 0xc0) == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0xc0) = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
  *pauVar4 = (undefined1  [16])0x0;
  pauVar4[1] = (undefined1  [16])0x0;
  if ((*(undefined8 **)(this + 0xb8) != (undefined8 *)0x0) &&
     (puVar7 = (undefined4 *)**(undefined8 **)(this + 0xb8), puVar7 != (undefined4 *)0x0)) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])*pauVar4 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar6 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar1 = *puVar7;
        *(undefined8 *)(puVar6 + 2) = 0;
        *puVar6 = uVar1;
        plVar2 = *(long **)*pauVar4;
        lVar3 = plVar2[1];
        *(long **)(puVar6 + 6) = plVar2;
        *(long *)(puVar6 + 4) = lVar3;
        if (lVar3 != 0) {
          *(undefined4 **)(lVar3 + 8) = puVar6;
        }
        plVar2[1] = (long)puVar6;
        if (*plVar2 != 0) break;
        puVar7 = *(undefined4 **)(puVar7 + 2);
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        *plVar2 = (long)puVar6;
        if (puVar7 == (undefined4 *)0x0) goto LAB_0010011a;
      }
      puVar7 = *(undefined4 **)(puVar7 + 2);
      *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    } while (puVar7 != (undefined4 *)0x0);
  }
LAB_0010011a:
  plVar2 = *(long **)(this + 0xc0);
  lVar3 = plVar2[1];
  *(undefined8 *)(*pauVar4 + 8) = 0;
  *(long **)(pauVar4[1] + 8) = plVar2;
  *(long *)pauVar4[1] = lVar3;
  if (lVar3 != 0) {
    *(undefined1 (**) [16])(lVar3 + 8) = pauVar4;
  }
  plVar2[1] = (long)pauVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)pauVar4;
  return;
}



/* GDScriptTokenizerBuffer::pop_expression_indented_block() */

void __thiscall
GDScriptTokenizerBuffer::pop_expression_indented_block(GDScriptTokenizerBuffer *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  
  lVar8 = *(long *)(this + 0xc0);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
    _err_print_error("pop_expression_indented_block",
                     "modules/gdscript/gdscript_tokenizer_buffer.cpp",0x19c,
                     "Condition \"indent_stack_stack.is_empty()\" is true.",0,0);
    return;
  }
  plVar10 = *(long **)(this + 0xb8);
  puVar2 = *(undefined8 **)(lVar8 + 8);
  if (plVar10 != (long *)0x0) {
    do {
      pvVar3 = (void *)*plVar10;
      if (pvVar3 == (void *)0x0) goto LAB_00100250;
      if (*(long **)((long)pvVar3 + 0x18) == plVar10) {
        lVar8 = *(long *)((long)pvVar3 + 8);
        lVar4 = *(long *)((long)pvVar3 + 0x10);
        *plVar10 = lVar8;
        if (pvVar3 == (void *)plVar10[1]) {
          plVar10[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar8;
          lVar8 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar4;
        }
        Memory::free_static(pvVar3,false);
        *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar10 = *(long **)(this + 0xb8);
    } while ((int)plVar10[2] != 0);
    Memory::free_static(plVar10,false);
    *(undefined8 *)(this + 0xb8) = 0;
  }
  plVar10 = (long *)0x0;
LAB_00100250:
  if (((undefined8 *)*puVar2 != (undefined8 *)0x0) &&
     (puVar9 = *(undefined4 **)*puVar2, puVar9 != (undefined4 *)0x0)) {
    if (plVar10 == (long *)0x0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0xb8) = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar7 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar1 = *puVar9;
        *(undefined8 *)(puVar7 + 2) = 0;
        *puVar7 = uVar1;
        plVar10 = *(long **)(this + 0xb8);
        lVar8 = plVar10[1];
        *(long **)(puVar7 + 6) = plVar10;
        *(long *)(puVar7 + 4) = lVar8;
        if (lVar8 != 0) {
          *(undefined4 **)(lVar8 + 8) = puVar7;
        }
        plVar10[1] = (long)puVar7;
        if (*plVar10 == 0) break;
        puVar9 = *(undefined4 **)(puVar9 + 2);
        *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
        if (puVar9 == (undefined4 *)0x0) goto LAB_001002fc;
      }
      puVar9 = *(undefined4 **)(puVar9 + 2);
      *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
      *plVar10 = (long)puVar7;
    } while (puVar9 != (undefined4 *)0x0);
  }
LAB_001002fc:
  plVar10 = *(long **)(this + 0xc0);
  if ((plVar10 != (long *)0x0) && (plVar5 = (long *)plVar10[1], plVar5 != (long *)0x0)) {
    if (plVar10 == (long *)plVar5[3]) {
      lVar8 = plVar5[1];
      if (plVar5 == (long *)*plVar10) {
        *plVar10 = lVar8;
      }
      lVar4 = plVar5[2];
      plVar10[1] = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar8;
        lVar8 = plVar5[1];
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x10) = lVar4;
      }
      plVar11 = (long *)*plVar5;
      if (plVar11 != (long *)0x0) {
        do {
          pvVar3 = (void *)*plVar11;
          if (pvVar3 == (void *)0x0) {
            if ((int)plVar11[2] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_001003c0;
            }
            break;
          }
          if (*(long **)((long)pvVar3 + 0x18) == plVar11) {
            lVar8 = *(long *)((long)pvVar3 + 8);
            lVar4 = *(long *)((long)pvVar3 + 0x10);
            *plVar11 = lVar8;
            if (pvVar3 == (void *)plVar11[1]) {
              plVar11[1] = lVar4;
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 8) = lVar8;
              lVar8 = *(long *)((long)pvVar3 + 8);
            }
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = lVar4;
            }
            Memory::free_static(pvVar3,false);
            *(int *)(plVar11 + 2) = (int)plVar11[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar11 = (long *)*plVar5;
        } while ((int)plVar11[2] != 0);
        Memory::free_static(plVar11,false);
      }
LAB_001003c0:
      Memory::free_static(plVar5,false);
      *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0xc0) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0xc0),false);
      *(undefined8 *)(this + 0xc0) = 0;
    }
  }
  return;
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



/* HashMap<unsigned int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, unsigned int> > >::erase(unsigned int const&)
   [clone .isra.0] */

void __thiscall
HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
::erase(HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
        *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] [clone .constprop.0]
    */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* GDScriptTokenizerBuffer::_binary_to_token(unsigned char const*) */

uchar * GDScriptTokenizerBuffer::_binary_to_token(uchar *param_1)

{
  long *plVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long in_RDX;
  long in_RSI;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  long local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_d0 = 0;
  local_98 = 0;
  local_a0 = 0xffffffff;
  lVar5 = 0;
  auStack_b0 = (undefined1  [16])0x0;
  do {
    pbVar2 = (byte *)(in_RDX + lVar5);
    cVar3 = (char)lVar5;
    lVar5 = lVar5 + 1;
    uVar9 = uVar9 | (uint)*pbVar2 << (cVar3 * '\b' & 0x1fU);
  } while (lVar5 != 4);
  local_d8 = uVar9 & 0x7f;
  lVar5 = in_RDX + 1;
  if ((uVar9 & 0x80) != 0) {
    lVar5 = in_RDX + 4;
  }
  lVar6 = 0;
  uVar8 = 0;
  do {
    pbVar2 = (byte *)(lVar5 + lVar6);
    cVar3 = (char)lVar6;
    lVar6 = lVar6 + 1;
    uVar8 = uVar8 | (uint)*pbVar2 << (cVar3 * '\b' & 0x1fU);
  } while (lVar6 != 4);
  local_b8 = CONCAT44(uVar8,uVar8);
  pcVar7 = (char *)GDScriptTokenizer::Token::get_name();
  Variant::Variant((Variant *)&local_88,pcVar7);
  if ((&Variant::needs_deinit)[(int)local_d0] != '\0') {
    Variant::_clear_internal();
  }
  local_d0 = CONCAT44(local_d0._4_4_,(undefined4)local_88);
  local_c8._0_8_ = local_80;
  local_c8._8_8_ = auStack_78._0_8_;
  if (local_d8 == 0x5d) {
    local_110 = 0;
    local_108 = &_LC12;
    local_100 = 3;
    String::parse_latin1((StrRange *)&local_110);
    Variant::Variant((Variant *)&local_88,(String *)&local_110);
    if ((&Variant::needs_deinit)[(int)local_d0] != '\0') {
      Variant::_clear_internal();
    }
    lVar5 = local_110;
    local_d0 = CONCAT44(local_d0._4_4_,(undefined4)local_88);
    local_c8._0_8_ = local_80;
    local_c8._8_8_ = auStack_78._0_8_;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  if (local_d8 == 3) {
LAB_00100b65:
    lVar5 = *(long *)(in_RSI + 0x20);
    if ((lVar5 == 0) || (*(long *)(lVar5 + -8) <= (long)(ulong)(uVar9 >> 8))) {
      local_88 = 0x61;
      auStack_78 = (undefined1  [16])0x0;
      local_50 = 0xffffffff;
      local_80 = 0;
      local_58 = 0;
      local_48 = 0;
      local_68 = (undefined1  [16])0x0;
      Variant::Variant((Variant *)local_f8,"Constant index out of bounds.");
      cVar3 = (&Variant::needs_deinit)[(int)local_80];
joined_r0x00100de6:
      if (cVar3 != '\0') {
        Variant::_clear_internal();
      }
      lVar5 = local_98;
      *(undefined4 *)param_1 = (undefined4)local_88;
      *(undefined8 *)(param_1 + 0x10) = local_f0;
      *(undefined8 *)(param_1 + 0x18) = uStack_e8;
      *(undefined4 *)(param_1 + 8) = local_f8[0];
      *(undefined8 *)(param_1 + 0x20) = local_68._0_8_;
      *(undefined8 *)(param_1 + 0x28) = local_68._8_8_;
      *(undefined8 *)(param_1 + 0x30) = local_58;
      *(undefined8 *)(param_1 + 0x38) = local_50;
      *(undefined8 *)(param_1 + 0x40) = local_48;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if ((&Variant::needs_deinit)[(int)local_d0] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100b31;
    }
    Variant::operator=((Variant *)&local_d0,(Variant *)(lVar5 + (ulong)(uVar9 >> 8) * 0x18));
LAB_00100b96:
    uVar4 = (int)local_d0;
  }
  else {
    if (3 < local_d8) {
      if (local_d8 == 0x61) goto LAB_00100b65;
      goto LAB_00100b96;
    }
    if (1 < local_d8 - 1) goto LAB_00100b96;
    lVar5 = *(long *)(in_RSI + 0x10);
    if ((lVar5 == 0) || (*(long *)(lVar5 + -8) <= (long)(ulong)(uVar9 >> 8))) {
      local_88 = 0x61;
      auStack_78 = (undefined1  [16])0x0;
      local_50 = 0xffffffff;
      local_80 = 0;
      local_58 = 0;
      local_48 = 0;
      local_68 = (undefined1  [16])0x0;
      Variant::Variant((Variant *)local_f8,"Identifier index out of bounds.");
      cVar3 = (&Variant::needs_deinit)[(int)local_80];
      goto joined_r0x00100de6;
    }
    Variant::Variant((Variant *)&local_88,(StringName *)(lVar5 + (ulong)(uVar9 >> 8) * 8));
    if ((&Variant::needs_deinit)[(int)local_d0] != '\0') {
      Variant::_clear_internal();
    }
    local_c8._0_8_ = local_80;
    local_c8._8_8_ = auStack_78._0_8_;
    uVar4 = (undefined4)local_88;
  }
  *(uint *)param_1 = local_d8;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = local_c8._0_8_;
  *(undefined8 *)(param_1 + 0x18) = local_c8._8_8_;
  *(undefined8 *)(param_1 + 0x30) = auStack_b0._8_8_;
  *(undefined8 *)(param_1 + 0x20) = local_b8;
  *(undefined8 *)(param_1 + 0x28) = auStack_b0._0_8_;
  *(undefined8 *)(param_1 + 0x38) = local_a0;
  *(long *)(param_1 + 0x40) = local_98;
LAB_00100b31:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptTokenizerBuffer::scan() */

undefined4 * GDScriptTokenizerBuffer::scan(void)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  long *in_RSI;
  uint uVar23;
  undefined4 *in_RDI;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  long in_FS_OFFSET;
  undefined4 uVar27;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  long local_40;
  
  uVar23 = *(uint *)(in_RSI + 0x15);
  lVar24 = (long)(int)uVar23;
  lVar16 = in_RSI[0x14];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar16 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(lVar16 + -8);
  }
  if (lVar24 < lVar21) {
    iVar19 = (int)in_RSI[0x19];
    if (0 < iVar19) {
LAB_00101038:
      uVar27 = *(undefined4 *)((long)in_RSI + 0xac);
      *(int *)(in_RSI + 0x19) = iVar19 + -1;
      *in_RDI = 0x58;
      goto LAB_00101058;
    }
    if (iVar19 == 0) {
      if (((*(char *)((long)in_RSI + 0xcc) == '\0') && (in_RSI[8] != 0)) &&
         (*(int *)((long)in_RSI + 100) != 0)) {
        uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0xc) * 8);
        uVar13 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
        uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
        uVar22 = uVar13 ^ uVar13 >> 0x10;
        if (uVar13 == uVar13 >> 0x10) {
          uVar22 = 1;
          uVar20 = uVar3;
        }
        else {
          uVar20 = uVar22 * uVar3;
        }
        uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xc) * 4));
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar25;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar21 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(in_RSI[9] + lVar21 * 4);
        uVar20 = (ulong)uVar13;
        iVar19 = SUB164(auVar4 * auVar8,8);
        if (uVar13 != 0) {
          uVar13 = 0;
          while (((uint)uVar20 != uVar22 ||
                 (uVar23 != *(uint *)(*(long *)(in_RSI[8] + lVar21 * 8) + 0x10)))) {
            uVar13 = uVar13 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (iVar19 + 1) * uVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar25;
            lVar21 = SUB168(auVar5 * auVar9,8);
            uVar1 = *(uint *)(in_RSI[9] + lVar21 * 4);
            uVar20 = (ulong)uVar1;
            iVar19 = SUB164(auVar5 * auVar9,8);
            if ((uVar1 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = uVar20 * uVar3, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar25, auVar7._8_8_ = 0,
               auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(in_RSI + 0xc) * 4) + iVar19) -
                              SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar25, SUB164(auVar7 * auVar11,8) < uVar13)) goto LAB_00100f61;
          }
          puVar14 = (undefined4 *)
                    HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                    ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                  *)(in_RSI + 7),(int *)(in_RSI + 0x15));
          *(undefined4 *)((long)in_RSI + 0xac) = *puVar14;
          piVar15 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                           ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                         *)(in_RSI + 0xd),(int *)(in_RSI + 0x15));
          if ((char)in_RSI[0x16] == '\0') {
            plVar26 = (long *)in_RSI[0x17];
            uVar23 = *piVar15 - 1;
            if (plVar26 == (long *)0x0) {
              if (uVar23 == 0) goto LAB_001010c0;
              *(int *)(in_RSI + 0x19) = (int)in_RSI[0x19] + 1;
              pauVar18 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              in_RSI[0x17] = (long)pauVar18;
              *(undefined4 *)pauVar18[1] = 0;
              *pauVar18 = (undefined1  [16])0x0;
            }
            else {
              if ((int)plVar26[2] == 0) {
                if (uVar23 == 0) goto LAB_001010c0;
              }
              else if (uVar23 <= *(uint *)plVar26[1]) {
                if (*(uint *)plVar26[1] <= uVar23) goto LAB_001010c0;
                goto LAB_001012dc;
              }
              *(int *)(in_RSI + 0x19) = (int)in_RSI[0x19] + 1;
            }
            puVar17 = (uint *)operator_new(0x20,DefaultAllocator::alloc);
            plVar26 = (long *)in_RSI[0x17];
            puVar17[2] = 0;
            puVar17[3] = 0;
            lVar16 = plVar26[1];
            *puVar17 = uVar23;
            *(long **)(puVar17 + 6) = plVar26;
            *(long *)(puVar17 + 4) = lVar16;
            if (lVar16 != 0) {
              *(uint **)(lVar16 + 8) = puVar17;
            }
            plVar26[1] = (long)puVar17;
            if (*plVar26 == 0) {
              *plVar26 = (long)puVar17;
            }
            *(int *)(plVar26 + 2) = (int)plVar26[2] + 1;
            goto LAB_001010c0;
          }
          uVar23 = *(uint *)(in_RSI + 0x15);
          lVar24 = (long)(int)uVar23;
          lVar16 = in_RSI[0x14];
        }
      }
LAB_00100f61:
      *(undefined1 *)((long)in_RSI + 0xcc) = 0;
      *(uint *)(in_RSI + 0x15) = uVar23 + 1;
      if (lVar24 < 0) {
        if (lVar16 != 0) {
          lVar21 = *(long *)(lVar16 + -8);
          goto LAB_00101399;
        }
      }
      else if (lVar16 != 0) {
        lVar21 = *(long *)(lVar16 + -8);
        if (lVar24 < lVar21) {
          puVar14 = (undefined4 *)(lVar16 + lVar24 * 0x48);
          uVar27 = *puVar14;
          Variant::Variant((Variant *)local_80,(Variant *)(puVar14 + 2));
          local_68 = *(undefined8 *)(puVar14 + 8);
          uStack_60 = *(undefined8 *)(puVar14 + 10);
          local_4c = puVar14[0xf];
          local_58 = *(undefined8 *)(puVar14 + 0xc);
          local_50 = puVar14[0xe];
          local_48 = 0;
          lVar16 = *(long *)(puVar14 + 0x10);
          if (*(long *)(puVar14 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(puVar14 + 0x10));
            lVar16 = local_48;
          }
          *(undefined8 *)(in_RDI + 0xc) = local_58;
          in_RDI[0xe] = local_50;
          *in_RDI = uVar27;
          in_RDI[0xf] = local_4c;
          in_RDI[2] = local_80[0];
          *(long *)(in_RDI + 0x10) = lVar16;
          *(undefined8 *)(in_RDI + 4) = local_78._0_8_;
          *(undefined8 *)(in_RDI + 6) = local_78._8_8_;
          *(undefined8 *)(in_RDI + 8) = local_68;
          *(undefined8 *)(in_RDI + 10) = uStack_60;
          goto LAB_00101086;
        }
        goto LAB_00101399;
      }
      lVar21 = 0;
LAB_00101399:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar21,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
  }
  else {
    if (*(char *)((long)in_RSI + 0xcc) == '\0') goto LAB_001010c0;
    iVar19 = (int)in_RSI[0x19];
    if (0 < iVar19) goto LAB_00101038;
    if (iVar19 == 0) {
      plVar26 = (long *)in_RSI[0x17];
      if ((plVar26 == (long *)0x0) || ((int)plVar26[2] == 0)) {
        *in_RDI = 0x62;
        local_78 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
        in_RDI[2] = 0;
        *(undefined8 *)(in_RDI + 0xc) = 0;
        *(undefined8 *)(in_RDI + 0xe) = 0xffffffff;
        *(undefined8 *)(in_RDI + 0x10) = 0;
        *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
      }
      else {
        *(int *)(in_RSI + 0x19) = -(int)plVar26[2];
        do {
          pvVar2 = (void *)*plVar26;
          if (pvVar2 == (void *)0x0) goto LAB_00100f28;
          if (*(long **)((long)pvVar2 + 0x18) == plVar26) {
            lVar16 = *(long *)((long)pvVar2 + 8);
            lVar24 = *(long *)((long)pvVar2 + 0x10);
            *plVar26 = lVar16;
            if (pvVar2 == (void *)plVar26[1]) {
              plVar26[1] = lVar24;
            }
            if (lVar24 != 0) {
              *(long *)(lVar24 + 8) = lVar16;
              lVar16 = *(long *)((long)pvVar2 + 8);
            }
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x10) = lVar24;
            }
            Memory::free_static(pvVar2,false);
            *(int *)(plVar26 + 2) = (int)plVar26[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar26 = (long *)in_RSI[0x17];
        } while ((int)plVar26[2] != 0);
        Memory::free_static(plVar26,false);
        in_RSI[0x17] = 0;
LAB_00100f28:
        (**(code **)(*in_RSI + 0x48))();
      }
      goto LAB_00101086;
    }
  }
  uVar27 = *(undefined4 *)((long)in_RSI + 0xac);
  *(int *)(in_RSI + 0x19) = iVar19 + 1;
  *in_RDI = 0x59;
  goto LAB_00101058;
LAB_001012dc:
  do {
    pvVar2 = (void *)plVar26[1];
    *(int *)(in_RSI + 0x19) = (int)in_RSI[0x19] + -1;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar26[2] == 0) break;
    }
    else {
      if (*(long **)((long)pvVar2 + 0x18) == plVar26) {
        lVar16 = *(long *)((long)pvVar2 + 8);
        if (pvVar2 == (void *)*plVar26) {
          *plVar26 = lVar16;
        }
        lVar24 = *(long *)((long)pvVar2 + 0x10);
        plVar26[1] = lVar24;
        if (lVar24 != 0) {
          *(long *)(lVar24 + 8) = lVar16;
          lVar16 = *(long *)((long)pvVar2 + 8);
        }
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x10) = lVar24;
        }
        Memory::free_static(pvVar2,false);
        *(int *)(plVar26 + 2) = (int)plVar26[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar26 = (long *)in_RSI[0x17];
      if ((int)plVar26[2] == 0) {
        Memory::free_static(plVar26,false);
        in_RSI[0x17] = 0;
        break;
      }
    }
  } while (uVar23 < *(uint *)plVar26[1]);
LAB_001010c0:
  *(undefined1 *)((long)in_RSI + 0xcc) = 1;
  uVar27 = *(undefined4 *)((long)in_RSI + 0xac);
  *in_RDI = 0x57;
LAB_00101058:
  local_78 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  in_RDI[2] = 0;
  *(undefined8 *)(in_RDI + 0xe) = 0xffffffff;
  *(undefined8 *)(in_RDI + 0x10) = 0;
  *(ulong *)(in_RDI + 8) = CONCAT44(uVar27,uVar27);
  *(undefined1 (*) [16])(in_RDI + 10) = (undefined1  [16])0x0;
LAB_00101086:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<StringName>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar3 = 0;
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar3) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar7 = lVar3 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar8 = param_1 * 8 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = uVar8 | uVar8 >> 0x20;
    lVar10 = uVar8 + 1;
    if (lVar10 != 0) {
      if (param_1 <= lVar3) {
        lVar3 = *(long *)this;
        uVar8 = param_1;
        if (lVar3 == 0) {
CowData<StringName>_resize<false>:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        for (; uVar8 < *(ulong *)(lVar3 + -8); uVar8 = uVar8 + 1) {
          while ((StringName::configured != '\0' && (*(long *)(lVar3 + uVar8 * 8) != 0))) {
            StringName::unref();
            lVar3 = *(long *)this;
            uVar8 = uVar8 + 1;
            if (lVar3 == 0) goto CowData<StringName>_resize<false>;
            if (*(ulong *)(lVar3 + -8) <= uVar8) goto LAB_00101875;
          }
        }
LAB_00101875:
        if (lVar10 != lVar7) {
          iVar2 = _realloc(this,lVar10);
          if (iVar2 != 0) {
            return;
          }
          lVar3 = *(long *)this;
          if (lVar3 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar3 + -8) = param_1;
        return;
      }
      if (lVar10 == lVar7) {
LAB_00101943:
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
          FUN_00105228();
          return;
        }
        lVar3 = puVar9[-1];
        if (param_1 <= lVar3) goto LAB_0010191b;
      }
      else {
        if (lVar3 != 0) {
          iVar2 = _realloc(this,lVar10);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00101943;
        }
        puVar4 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          uVar6 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001019b2;
        }
        puVar9 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar3 = 0;
      }
      memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0010191b:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar6 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001019b2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Variant>::resize<false>(CowData<Variant> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar9 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar4 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 != 0) {
    uVar10 = param_1 * 0x18 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar11 = uVar10 + 1;
    if (lVar11 != 0) {
      if (param_1 <= lVar4) {
        puVar5 = *(undefined8 **)this;
        uVar10 = param_1;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulong)puVar5[-1] <= uVar10) break;
          if ((&Variant::needs_deinit)[*(int *)(puVar5 + uVar10 * 3)] != '\0') {
            Variant::_clear_internal();
            puVar5 = *(undefined8 **)this;
          }
          uVar10 = uVar10 + 1;
        }
        if (lVar11 != lVar9) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) {
            FUN_0010523e();
            return;
          }
        }
        goto LAB_00101b7f;
      }
      if (lVar11 == lVar9) {
LAB_00101c2b:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_00101b7f;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00101c2b;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00101cb2;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar5;
        lVar4 = 0;
      }
      lVar9 = lVar4 + 1;
      *(undefined4 *)(puVar5 + lVar4 * 3) = 0;
      *(undefined1 (*) [16])(puVar5 + lVar4 * 3 + 1) = (undefined1  [16])0x0;
      if (lVar9 < param_1) {
        lVar4 = lVar9 * 0x18;
        do {
          lVar9 = lVar9 + 1;
          puVar7 = (undefined4 *)(*(long *)this + lVar4);
          lVar4 = lVar4 + 0x18;
          *puVar7 = 0;
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
        } while (param_1 != lVar9);
      }
      puVar5 = *(undefined8 **)this;
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_00101b7f:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101cb2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00101eb6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00101eb6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00105260();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00101e0c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00101e0c:
  puVar8[-1] = param_1;
  return;
}



/* GDScriptTokenizerBuffer::_token_to_binary(GDScriptTokenizer::Token const&, Vector<unsigned
   char>&, int, HashMap<StringName, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, unsigned
   int> > >&, HashMap<Variant, unsigned int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, unsigned int> > >&) */

undefined8
GDScriptTokenizerBuffer::_token_to_binary
          (Token *param_1,Vector *param_2,int param_3,HashMap *param_4,HashMap *param_5)

{
  undefined1 *puVar1;
  Variant *pVVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  int iVar29;
  undefined1 *puVar30;
  uint uVar31;
  undefined8 uVar32;
  long in_FS_OFFSET;
  uint local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)param_1;
  local_50 = uVar21 & 0x7f;
  if (uVar21 == 3) {
LAB_00102170:
    iVar29 = *(int *)(param_5 + 0x2c);
    pVVar2 = (Variant *)(param_1 + 8);
    if ((*(long *)(param_5 + 8) != 0) && (iVar29 != 0)) {
      uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      uVar22 = Variant::hash();
      uVar27 = CONCAT44(0,uVar21);
      uVar23 = 1;
      if (uVar22 != 0) {
        uVar23 = uVar22;
      }
      lVar26 = *(long *)(param_5 + 0x10);
      uVar31 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar23 * lVar25;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar27;
      lVar28 = SUB168(auVar7 * auVar15,8);
      uVar22 = *(uint *)(lVar26 + lVar28 * 4);
      iVar29 = SUB164(auVar7 * auVar15,8);
      if (uVar22 != 0) {
        do {
          if (uVar23 == uVar22) {
            cVar20 = Variant::hash_compare
                               ((Variant *)(*(long *)(*(long *)(param_5 + 8) + lVar28 * 8) + 0x10),
                                (int)pVVar2,false);
            if (cVar20 != '\0') {
              piVar24 = (int *)HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                               ::operator[]((HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                                             *)param_5,pVVar2);
              iVar29 = *piVar24;
              goto LAB_001021a2;
            }
            lVar26 = *(long *)(param_5 + 0x10);
          }
          uVar31 = uVar31 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar29 + 1) * lVar25;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar27;
          lVar28 = SUB168(auVar8 * auVar16,8);
          uVar22 = *(uint *)(lVar26 + lVar28 * 4);
          iVar29 = SUB164(auVar8 * auVar16,8);
        } while ((uVar22 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar22 * lVar25, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar27, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar21 + iVar29) - SUB164(auVar9 * auVar17,8)) * lVar25,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, uVar31 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar29 = *(int *)(param_5 + 0x2c);
    }
    piVar24 = (int *)HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                     ::operator[]((HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                                   *)param_5,pVVar2);
    *piVar24 = iVar29;
LAB_001021a2:
    local_50 = local_50 | iVar29 << 8;
LAB_001021ab:
    if ((local_50 & 0x7f) != 0) goto LAB_0010209c;
LAB_001021c1:
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)(param_2 + 8),(long)(param_3 + 5));
    lVar25 = *(long *)(param_2 + 8);
    if (param_3 < 0) goto LAB_00102370;
    if (lVar25 == 0) goto LAB_00102430;
    lVar25 = *(long *)(lVar25 + -8);
    if (param_3 < lVar25) {
      iVar29 = param_3 + 1;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_2 + 8));
      *(undefined1 *)(*(long *)(param_2 + 8) + (long)param_3) = (undefined1)local_50;
      uVar32 = 5;
LAB_001020fe:
      lVar25 = *(long *)(param_2 + 8);
      lVar26 = (long)iVar29;
      if (lVar25 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(long *)(lVar25 + -8);
        if (lVar26 < lVar25) {
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_2 + 8));
          puVar30 = (undefined1 *)(lVar26 + *(long *)(param_2 + 8));
          puVar1 = puVar30 + 4;
          uVar21 = *(uint *)(param_1 + 0x20);
          do {
            *puVar30 = (char)uVar21;
            puVar30 = puVar30 + 1;
            uVar21 = uVar21 >> 8;
          } while (puVar30 != puVar1);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar32;
        }
      }
      goto LAB_0010239b;
    }
  }
  else {
    if (uVar21 < 4) {
      if (uVar21 - 1 < 2) {
        Variant::operator_cast_to_StringName((Variant *)&local_48);
        iVar29 = *(int *)(param_4 + 0x2c);
        if ((*(long *)(param_4 + 8) != 0) && (iVar29 != 0)) {
          uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
          lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
          if (local_48 == 0) {
            uVar23 = StringName::get_empty_hash();
          }
          else {
            uVar23 = *(uint *)(local_48 + 0x20);
          }
          uVar27 = CONCAT44(0,uVar21);
          uVar22 = 1;
          if (uVar23 != 0) {
            uVar22 = uVar23;
          }
          uVar31 = 0;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar22 * lVar25;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar27;
          lVar26 = SUB168(auVar3 * auVar11,8);
          uVar23 = *(uint *)(*(long *)(param_4 + 0x10) + lVar26 * 4);
          iVar29 = SUB164(auVar3 * auVar11,8);
          if (uVar23 != 0) {
            do {
              if ((uVar22 == uVar23) &&
                 (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar26 * 8) + 0x10) == local_48)) {
                piVar24 = (int *)HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                                 ::operator[]((HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                                               *)param_4,(StringName *)&local_48);
                iVar29 = *piVar24;
                goto LAB_00102338;
              }
              uVar31 = uVar31 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar29 + 1) * lVar25;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar27;
              lVar26 = SUB168(auVar4 * auVar12,8);
              uVar23 = *(uint *)(*(long *)(param_4 + 0x10) + lVar26 * 4);
              iVar29 = SUB164(auVar4 * auVar12,8);
            } while ((uVar23 != 0) &&
                    (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar23 * lVar25, auVar13._8_8_ = 0,
                    auVar13._0_8_ = uVar27, auVar6._8_8_ = 0,
                    auVar6._0_8_ = (ulong)((uVar21 + iVar29) - SUB164(auVar5 * auVar13,8)) * lVar25,
                    auVar14._8_8_ = 0, auVar14._0_8_ = uVar27, uVar31 <= SUB164(auVar6 * auVar14,8))
                    );
          }
          iVar29 = *(int *)(param_4 + 0x2c);
        }
        piVar24 = (int *)HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                         ::operator[]((HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                                       *)param_4,(StringName *)&local_48);
        *piVar24 = iVar29;
LAB_00102338:
        local_50 = local_50 | iVar29 << 8;
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        goto LAB_001021ab;
      }
      local_50 = 0;
    }
    else if (uVar21 == 0x61) goto LAB_00102170;
    if (local_50 == 0) goto LAB_001021c1;
LAB_0010209c:
    lVar26 = (long)param_3;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)(param_2 + 8),(long)(param_3 + 8));
    lVar25 = *(long *)(param_2 + 8);
    if (-1 < lVar26) {
      if (lVar25 == 0) goto LAB_00102430;
      lVar25 = *(long *)(lVar25 + -8);
      if (lVar26 < lVar25) {
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_2 + 8));
        puVar30 = (undefined1 *)(*(long *)(param_2 + 8) + lVar26);
        uVar27 = (ulong)local_50 | 0x80;
        puVar1 = puVar30 + 4;
        do {
          *puVar30 = (char)uVar27;
          puVar30 = puVar30 + 1;
          uVar27 = uVar27 >> 8;
        } while (puVar30 != puVar1);
        iVar29 = param_3 + 4;
        uVar32 = 8;
        goto LAB_001020fe;
      }
      goto LAB_0010237d;
    }
LAB_00102370:
    if (lVar25 == 0) {
LAB_00102430:
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)(lVar25 + -8);
    }
  }
LAB_0010237d:
  lVar26 = (long)param_3;
LAB_0010239b:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar26,lVar25,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
}



/* GDScriptTokenizerBuffer::parse_code_string(String const&, GDScriptTokenizerBuffer::CompressMode)
    */

GDScriptTokenizerBuffer * __thiscall
GDScriptTokenizerBuffer::parse_code_string
          (GDScriptTokenizerBuffer *this,undefined8 param_2,int param_3)

{
  long *plVar1;
  uint *puVar2;
  Variant *pVVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  char *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  uint *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  byte *pbVar31;
  ulong uVar32;
  undefined8 uVar33;
  int iVar34;
  uint uVar35;
  ulong uVar36;
  byte *pbVar37;
  Variant *pVVar38;
  Variant *pVVar39;
  undefined8 *puVar40;
  uint uVar41;
  long *plVar42;
  ulong uVar43;
  uint uVar44;
  long *plVar45;
  long in_FS_OFFSET;
  bool bVar46;
  int local_420;
  Vector local_3c8 [8];
  long local_3c0 [2];
  long *local_3b0 [2];
  Variant *local_3a0;
  Vector<unsigned_char> local_398 [8];
  undefined1 *local_390;
  Vector<unsigned_char> local_388 [8];
  undefined1 *local_380;
  long local_378;
  long local_370;
  char *local_368;
  size_t local_360;
  HashMap local_358 [8];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined8 local_330;
  HashMap local_328 [8];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined8 local_300;
  HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
  local_2f8 [8];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined8 local_2d0;
  HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
  local_2c8 [8];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  ulong local_2a0;
  uint local_298 [2];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined8 local_270;
  int local_268 [2];
  int local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  long local_228;
  int local_218;
  int local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  GDScriptTokenizerText local_1c8 [304];
  uint *local_98;
  byte local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_350 = (undefined1  [16])0x0;
  local_340 = (undefined1  [16])0x0;
  local_330 = _LC37;
  local_300 = _LC37;
  local_2d0 = _LC37;
  local_2a0 = _LC37;
  local_320 = (undefined1  [16])0x0;
  local_310 = (undefined1  [16])0x0;
  local_2f0 = (undefined1  [16])0x0;
  local_2e0 = (undefined1  [16])0x0;
  local_2c0 = (undefined1  [16])0x0;
  local_2b0 = (undefined1  [16])0x0;
  local_3c0[0] = 0;
  GDScriptTokenizerText::GDScriptTokenizerText(local_1c8);
  GDScriptTokenizerText::set_source_code((String *)local_1c8);
  GDScriptTokenizerText::set_multiline_mode(SUB81(local_1c8,0));
  GDScriptTokenizerText::scan();
  if (local_268[0] == 0x62) {
    local_3b0[0] = (long *)0x0;
    CowData<StringName>::resize<false>((CowData<StringName> *)local_3b0,0);
    uVar19 = 0;
    uVar41 = 0;
  }
  else {
    iVar20 = 0;
    iVar34 = 0;
    uVar41 = 0;
    do {
      while( true ) {
        uVar19 = uVar41;
        iVar17 = _token_to_binary((Token *)local_268,local_3c8,iVar34,local_358,local_328);
        iVar34 = iVar34 + iVar17;
        if ((uVar19 != 0) && (iVar17 = (int)local_248, iVar20 < (int)local_248)) {
          local_298[0] = uVar19;
          piVar21 = (int *)HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                           ::operator[](local_2f8,local_298);
          *piVar21 = iVar17;
          uVar6 = (undefined4)uStack_240;
          local_298[0] = uVar19;
          puVar22 = (undefined4 *)
                    HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                    ::operator[](local_2c8,local_298);
          *puVar22 = uVar6;
        }
        iVar20 = local_248._4_4_;
        GDScriptTokenizerText::scan();
        local_268[0] = local_218;
        if ((&Variant::needs_deinit)[local_260] != '\0') {
          Variant::_clear_internal();
        }
        lVar26 = local_1d8;
        local_260 = local_210;
        lVar30 = local_228;
        local_210 = 0;
        local_258 = local_208;
        uStack_250 = uStack_200;
        local_248 = local_1f8;
        uStack_240 = uStack_1f0;
        local_238 = local_1e8;
        local_230 = local_1e0;
        if (local_228 != local_1d8) break;
        if (local_228 != 0) {
          LOCK();
          plVar42 = (long *)(local_228 + -0x10);
          *plVar42 = *plVar42 + -1;
          UNLOCK();
          if (*plVar42 == 0) {
            local_1d8 = 0;
            Memory::free_static((void *)(lVar26 + -0x10),false);
          }
          cVar4 = (&Variant::needs_deinit)[local_210];
          goto joined_r0x001025e3;
        }
LAB_001025e9:
        uVar41 = uVar19 + 1;
        if (local_268[0] == 0x62) goto LAB_00102740;
      }
      lVar26 = 0;
      if (local_228 != 0) {
        LOCK();
        plVar42 = (long *)(local_228 + -0x10);
        *plVar42 = *plVar42 + -1;
        UNLOCK();
        if (*plVar42 == 0) {
          local_228 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
        }
        lVar26 = (long)local_210;
      }
      cVar4 = (&Variant::needs_deinit)[lVar26];
      local_228 = local_1d8;
joined_r0x001025e3:
      if (cVar4 == '\0') goto LAB_001025e9;
      Variant::_clear_internal();
      uVar41 = uVar19 + 1;
    } while (local_268[0] != 0x62);
LAB_00102740:
    uVar19 = uVar19 + 1;
    uVar41 = local_330._4_4_;
    puVar40 = (undefined8 *)local_340._0_8_;
    local_3b0[0] = (long *)0x0;
    CowData<StringName>::resize<false>((CowData<StringName> *)local_3b0,(ulong)local_330._4_4_);
    plVar42 = local_3b0[0];
    for (; puVar40 != (undefined8 *)0x0; puVar40 = (undefined8 *)*puVar40) {
      uVar36 = (ulong)*(uint *)(puVar40 + 3);
      if (plVar42 == (long *)0x0) {
        lVar30 = 0;
        goto LAB_001027f0;
      }
      lVar30 = plVar42[-1];
      if (lVar30 <= (long)uVar36) goto LAB_001027f0;
      CowData<StringName>::_copy_on_write((CowData<StringName> *)local_3b0);
      plVar42 = local_3b0[0];
      StringName::operator=((StringName *)(local_3b0[0] + uVar36),(StringName *)(puVar40 + 2));
    }
  }
  uVar29 = local_300._4_4_;
  local_3a0 = (Variant *)0x0;
  CowData<Variant>::resize<false>((CowData<Variant> *)&local_3a0,(ulong)local_300._4_4_);
  pVVar38 = local_3a0;
  for (puVar40 = (undefined8 *)local_310._0_8_; puVar40 != (undefined8 *)0x0;
      puVar40 = (undefined8 *)*puVar40) {
    uVar43 = (ulong)*(uint *)(puVar40 + 5);
    if (pVVar38 == (Variant *)0x0) goto LAB_00102947;
    lVar30 = *(long *)(pVVar38 + -8);
    uVar36 = uVar43;
    if (lVar30 <= (long)uVar43) goto LAB_001027f0;
    CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_3a0);
    pVVar38 = local_3a0;
    Variant::operator=(local_3a0 + uVar43 * 0x18,(Variant *)(puVar40 + 2));
  }
  local_290 = (undefined1  [16])0x0;
  local_280 = (undefined1  [16])0x0;
  puVar40 = (undefined8 *)local_2e0._0_8_;
  local_270 = _LC37;
  while (puVar40 != (undefined8 *)0x0) {
    uVar6 = *(undefined4 *)(puVar40 + 2);
    puVar22 = (undefined4 *)
              HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
              ::operator[]((HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                            *)local_298,(uint *)((long)puVar40 + 0x14));
    puVar40 = (undefined8 *)*puVar40;
    *puVar22 = uVar6;
  }
  if ((local_98 != (uint *)0x0) &&
     (puVar2 = local_98 + *(long *)(local_98 + -2), puVar2 != local_98)) {
    do {
      if ((local_290._0_8_ != 0) && (local_270._4_4_ != 0)) {
        uVar7 = *local_98;
        uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_270 & 0xffffffff) * 4));
        uVar36 = *(ulong *)(hash_table_size_primes_inv + (local_270 & 0xffffffff) * 8);
        uVar18 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
        uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
        uVar35 = uVar18 ^ uVar18 >> 0x10;
        if (uVar18 == uVar18 >> 0x10) {
          uVar35 = 1;
          uVar32 = uVar36;
        }
        else {
          uVar32 = uVar35 * uVar36;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar43;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar32;
        lVar30 = SUB168(auVar8 * auVar12,8);
        uVar18 = *(uint *)(local_290._8_8_ + lVar30 * 4);
        iVar20 = SUB164(auVar8 * auVar12,8);
        if (uVar18 != 0) {
          uVar44 = 0;
          while ((uVar18 != uVar35 ||
                 (uVar7 != *(uint *)(*(long *)(local_290._0_8_ + lVar30 * 8) + 0x10)))) {
            uVar44 = uVar44 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (iVar20 + 1) * uVar36;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar43;
            lVar30 = SUB168(auVar9 * auVar13,8);
            uVar18 = *(uint *)(local_290._8_8_ + lVar30 * 4);
            iVar20 = SUB164(auVar9 * auVar13,8);
            if ((uVar18 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = uVar18 * uVar36, auVar14._8_8_ = 0,
               auVar14._0_8_ = uVar43, auVar11._8_8_ = 0,
               auVar11._0_8_ =
                    ((*(uint *)(hash_table_size_primes + (local_270 & 0xffffffff) * 4) + iVar20) -
                    SUB164(auVar10 * auVar14,8)) * uVar36, auVar15._8_8_ = 0, auVar15._0_8_ = uVar43
               , SUB164(auVar11 * auVar15,8) < uVar44)) goto LAB_00102b5d;
          }
          local_368._0_4_ = uVar7;
          puVar23 = (uint *)HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                            ::operator[]((HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                                          *)local_298,(uint *)&local_368);
          HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
          ::erase(local_2f8,puVar23);
          local_368 = (char *)CONCAT44(local_368._4_4_,uVar7);
          puVar23 = (uint *)HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                            ::operator[]((HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                                          *)local_298,(uint *)&local_368);
          HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
          ::erase(local_2c8,puVar23);
        }
      }
LAB_00102b5d:
      local_98 = local_98 + 1;
    } while (puVar2 != local_98);
  }
  uVar36 = (ulong)uVar29;
  local_390 = (undefined1 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_390,0x14);
  if (local_390 == (undefined1 *)0x0) {
LAB_001031bd:
    lVar30 = 0;
  }
  else {
    lVar30 = *(long *)(local_390 + -8);
    if (0 < lVar30) {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
      puVar24 = local_390;
      do {
        *puVar24 = (char)uVar41;
        puVar24 = puVar24 + 1;
        uVar41 = uVar41 >> 8;
      } while (local_390 + 4 != puVar24);
      if (local_390 == (undefined1 *)0x0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(long *)(local_390 + -8);
        if (4 < lVar30) {
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
          puVar24 = local_390 + 4;
          do {
            *puVar24 = (char)uVar36;
            puVar24 = puVar24 + 1;
            uVar36 = uVar36 >> 8;
          } while (puVar24 != local_390 + 8);
          if (local_390 == (undefined1 *)0x0) {
            lVar30 = 0;
          }
          else {
            lVar30 = *(long *)(local_390 + -8);
            if (8 < lVar30) {
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
              uVar41 = local_2d0._4_4_;
              puVar24 = local_390 + 8;
              uVar29 = local_2d0._4_4_;
              do {
                *puVar24 = (char)uVar29;
                puVar24 = puVar24 + 1;
                uVar29 = uVar29 >> 8;
              } while (puVar24 != local_390 + 0xc);
              if (local_390 == (undefined1 *)0x0) {
                lVar30 = 0;
              }
              else {
                lVar30 = *(long *)(local_390 + -8);
                if (0xc < lVar30) {
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                  lVar30 = *(long *)(local_390 + -8);
                  *(undefined4 *)(local_390 + 0xc) = 0;
                  if (lVar30 < 0x11) {
                    uVar36 = 0x10;
                    goto LAB_001027f0;
                  }
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                  puVar24 = local_390 + 0x10;
                  do {
                    *puVar24 = (char)uVar19;
                    puVar24 = puVar24 + 1;
                    uVar19 = uVar19 >> 8;
                  } while (local_390 + 0x14 != puVar24);
                  CowData<StringName>::_copy_on_write((CowData<StringName> *)local_3b0);
                  plVar45 = local_3b0[0];
                  CowData<StringName>::_copy_on_write((CowData<StringName> *)local_3b0);
                  plVar42 = local_3b0[0];
                  if (local_3b0[0] != (long *)0x0) {
                    plVar42 = local_3b0[0] + local_3b0[0][-1];
                  }
                  if (plVar45 == plVar42) {
                    local_420 = 0x14;
                  }
                  else {
                    local_420 = 0x14;
                    do {
                      lVar30 = *plVar45;
                      if (lVar30 == 0) {
                        local_378 = 0;
LAB_00103138:
                        iVar20 = 4;
                        uVar43 = 0;
                      }
                      else {
                        __s = *(char **)(lVar30 + 8);
                        local_378 = 0;
                        if (__s == (char *)0x0) {
                          if (*(long *)(lVar30 + 0x10) == 0) goto LAB_00103138;
                          plVar1 = (long *)(*(long *)(lVar30 + 0x10) + -0x10);
                          do {
                            lVar26 = *plVar1;
                            if (lVar26 == 0) goto LAB_00102d75;
                            LOCK();
                            lVar27 = *plVar1;
                            bVar46 = lVar26 == lVar27;
                            if (bVar46) {
                              *plVar1 = lVar26 + 1;
                              lVar27 = lVar26;
                            }
                            UNLOCK();
                          } while (!bVar46);
                          if (lVar27 != -1) {
                            local_378 = *(long *)(lVar30 + 0x10);
                          }
                        }
                        else {
                          local_360 = strlen(__s);
                          local_368 = __s;
                          String::parse_latin1((StrRange *)&local_378);
                        }
LAB_00102d75:
                        if ((local_378 == 0) ||
                           (iVar20 = (int)*(undefined8 *)(local_378 + -8), iVar20 == 0))
                        goto LAB_00103138;
                        uVar43 = (ulong)(iVar20 - 1);
                        iVar20 = iVar20 << 2;
                      }
                      uVar36 = (ulong)local_420;
                      CowData<unsigned_char>::resize<false>
                                ((CowData<unsigned_char> *)&local_390,(long)(iVar20 + local_420));
                      if (local_390 == (undefined1 *)0x0) {
                        lVar30 = 0;
                        goto LAB_001027f0;
                      }
                      lVar30 = *(long *)(local_390 + -8);
                      if (lVar30 <= (long)uVar36) goto LAB_001027f0;
                      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                      iVar20 = (int)uVar43;
                      puVar25 = local_390 + uVar36;
                      puVar24 = puVar25 + 4;
                      do {
                        *puVar25 = (char)uVar43;
                        puVar25 = puVar25 + 1;
                        uVar43 = uVar43 >> 8;
                      } while (puVar25 != puVar24);
                      local_420 = local_420 + 4;
                      if (0 < iVar20) {
                        uVar43 = (ulong)local_420;
                        lVar26 = 0;
                        do {
                          pbVar31 = local_44;
                          if (local_378 == 0) {
                            if (lVar26 != 0) {
                              lVar30 = 0;
LAB_0010317c:
                              _err_print_index_error
                                        ("get","./core/templates/cowdata.h",0xdb,lVar26,lVar30,
                                         "p_index","size()","",false,true);
                              _err_flush_stdout();
                    /* WARNING: Does not return */
                              pcVar16 = (code *)invalidInstructionException();
                              (*pcVar16)();
                            }
LAB_0010316d:
                            uVar19 = 0;
                          }
                          else {
                            lVar30 = *(long *)(local_378 + -8);
                            if (lVar26 == lVar30) goto LAB_0010316d;
                            if (lVar30 <= lVar26) goto LAB_0010317c;
                            uVar19 = *(uint *)(local_378 + lVar26 * 4);
                          }
                          do {
                            *pbVar31 = (byte)uVar19;
                            pbVar31 = pbVar31 + 1;
                            uVar19 = uVar19 >> 8;
                            pbVar37 = local_44;
                            uVar36 = uVar43;
                          } while (pbVar31 != (byte *)local_40);
                          do {
                            bVar5 = *pbVar37;
                            if (local_390 == (undefined1 *)0x0) {
                              lVar30 = 0;
                              goto LAB_001027f0;
                            }
                            lVar30 = *(long *)(local_390 + -8);
                            if (lVar30 <= (long)uVar36) goto LAB_001027f0;
                            pbVar37 = pbVar37 + 1;
                            CowData<unsigned_char>::_copy_on_write
                                      ((CowData<unsigned_char> *)&local_390);
                            local_390[uVar36] = bVar5 ^ 0xb6;
                            uVar36 = uVar36 + 1;
                          } while ((byte *)local_40 != pbVar37);
                          lVar26 = lVar26 + 1;
                          local_420 = local_420 + 4;
                          uVar43 = uVar43 + 4;
                        } while (lVar26 != iVar20);
                      }
                      lVar30 = local_378;
                      if (local_378 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_378 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_378 = 0;
                          Memory::free_static((void *)(lVar30 + -0x10),false);
                        }
                      }
                      plVar45 = plVar45 + 1;
                    } while (plVar42 != plVar45);
                  }
                  CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_3a0);
                  pVVar38 = local_3a0;
                  CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_3a0);
                  if (local_3a0 == (Variant *)0x0) {
                    lVar30 = 0;
                  }
                  else {
                    lVar30 = *(long *)(local_3a0 + -8);
                  }
                  pVVar3 = local_3a0 + lVar30 * 0x18;
                  if (pVVar3 != pVVar38) {
                    do {
                      iVar20 = encode_variant(pVVar38,(uchar *)0x0,(int *)&local_368,false,0);
                      if (iVar20 != 0) {
                        _err_print_error("parse_code_string",
                                         "modules/gdscript/gdscript_tokenizer_buffer.cpp",0x14b,
                                         "Condition \"err != OK\" is true. Returning: Vector<uint8_t>()"
                                         ,"Error when trying to encode Variant.",0,0,pVVar3);
                        *(undefined8 *)(this + 8) = 0;
                        goto LAB_00103329;
                      }
                      uVar36 = (ulong)local_420;
                      CowData<unsigned_char>::resize<false>
                                ((CowData<unsigned_char> *)&local_390,
                                 (long)(int)((uint)local_368 + local_420));
                      if ((long)uVar36 < 0) {
                        if (local_390 == (undefined1 *)0x0) {
                          lVar30 = 0;
                        }
                        else {
LAB_001032e8:
                          lVar30 = *(long *)(local_390 + -8);
                        }
                        goto LAB_001027f0;
                      }
                      if (local_390 == (undefined1 *)0x0) {
                        lVar30 = 0;
                        goto LAB_001027f0;
                      }
                      if (*(long *)(local_390 + -8) <= (long)uVar36) goto LAB_001032e8;
                      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                      pVVar39 = pVVar38 + 0x18;
                      encode_variant(pVVar38,local_390 + uVar36,(int *)&local_368,false,0);
                      local_420 = local_420 + (uint)local_368;
                      pVVar38 = pVVar39;
                    } while (pVVar3 != pVVar39);
                  }
                  uVar43 = (ulong)local_420;
                  CowData<unsigned_char>::resize<false>
                            ((CowData<unsigned_char> *)&local_390,(ulong)(uVar41 * 0x10 + local_420)
                            );
                  for (puVar40 = (undefined8 *)local_2e0._0_8_; puVar40 != (undefined8 *)0x0;
                      puVar40 = (undefined8 *)*puVar40) {
                    if ((long)uVar43 < 0) {
                      if (local_390 == (undefined1 *)0x0) {
LAB_00102947:
                        lVar30 = 0;
                        uVar36 = uVar43;
                      }
                      else {
LAB_00103408:
                        lVar30 = *(long *)(local_390 + -8);
                        uVar36 = uVar43;
                      }
                      goto LAB_001027f0;
                    }
                    if (local_390 == (undefined1 *)0x0) goto LAB_00102947;
                    if (*(long *)(local_390 + -8) <= (long)uVar43) goto LAB_00103408;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                    uVar19 = *(uint *)(puVar40 + 2);
                    puVar25 = local_390 + uVar43;
                    puVar24 = puVar25 + 4;
                    do {
                      *puVar25 = (char)uVar19;
                      puVar25 = puVar25 + 1;
                      uVar19 = uVar19 >> 8;
                    } while (puVar25 != puVar24);
                    uVar36 = uVar43 + 4;
                    if (local_390 == (undefined1 *)0x0) goto LAB_001033d9;
                    lVar30 = *(long *)(local_390 + -8);
                    if (lVar30 <= (long)uVar36) goto LAB_001027f0;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                    uVar32 = (ulong)*(uint *)((long)puVar40 + 0x14);
                    puVar25 = local_390 + uVar36;
                    puVar24 = puVar25 + 4;
                    do {
                      *puVar25 = (char)uVar32;
                      puVar25 = puVar25 + 1;
                      uVar32 = uVar32 >> 8;
                    } while (puVar25 != puVar24);
                    local_420 = local_420 + 8;
                    uVar43 = uVar43 + 8;
                  }
                  uVar43 = (ulong)local_420;
                  for (puVar40 = (undefined8 *)local_2b0._0_8_; puVar40 != (undefined8 *)0x0;
                      puVar40 = (undefined8 *)*puVar40) {
                    uVar36 = uVar43;
                    if ((long)uVar43 < 0) {
                      if (local_390 == (undefined1 *)0x0) {
LAB_001034e0:
                        lVar30 = 0;
                      }
                      else {
LAB_001034d2:
                        lVar30 = *(long *)(local_390 + -8);
                      }
                      goto LAB_001027f0;
                    }
                    if (local_390 == (undefined1 *)0x0) goto LAB_001034e0;
                    if (*(long *)(local_390 + -8) <= (long)uVar43) goto LAB_001034d2;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                    uVar36 = (ulong)*(uint *)(puVar40 + 2);
                    lVar30 = 0;
                    do {
                      local_390[lVar30 + uVar43] = (char)uVar36;
                      lVar30 = lVar30 + 1;
                      uVar36 = uVar36 >> 8;
                    } while (lVar30 != 4);
                    uVar36 = uVar43 + 4;
                    if (local_390 == (undefined1 *)0x0) goto LAB_001033d9;
                    lVar30 = *(long *)(local_390 + -8);
                    if (lVar30 <= (long)uVar36) goto LAB_001027f0;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_390);
                    uVar32 = (ulong)*(uint *)((long)puVar40 + 0x14);
                    lVar30 = 0;
                    do {
                      local_390[lVar30 + uVar36] = (char)uVar32;
                      lVar30 = lVar30 + 1;
                      uVar32 = uVar32 >> 8;
                    } while (lVar30 != 4);
                    uVar43 = uVar43 + 8;
                  }
                  local_360 = 0;
                  if (local_3c0[0] != 0) {
                    CowData<unsigned_char>::_ref
                              ((CowData<unsigned_char> *)&local_360,(CowData *)local_3c0);
                  }
                  Vector<unsigned_char>::append_array(local_398,&local_368);
                  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_360);
                  local_380 = (undefined1 *)0x0;
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_380,0xc);
                  if (local_380 == (undefined1 *)0x0) goto LAB_001031bd;
                  lVar30 = *(long *)(local_380 + -8);
                  if (lVar30 < 1) goto LAB_001031c0;
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                  lVar30 = *(long *)(local_380 + -8);
                  *local_380 = 0x47;
                  if (lVar30 < 2) {
                    uVar36 = 1;
                    goto LAB_001027f0;
                  }
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                  lVar30 = *(long *)(local_380 + -8);
                  local_380[1] = 0x44;
                  if (lVar30 < 3) {
                    uVar36 = 2;
                    goto LAB_001027f0;
                  }
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                  lVar30 = *(long *)(local_380 + -8);
                  local_380[2] = 0x53;
                  if (lVar30 < 4) {
                    uVar36 = 3;
                    goto LAB_001027f0;
                  }
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                  lVar30 = *(long *)(local_380 + -8);
                  local_380[3] = 0x43;
                  if (lVar30 < 5) goto LAB_001031e5;
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                  *(undefined4 *)(local_380 + 4) = 100;
                  if (param_3 == 0) {
                    lVar30 = *(long *)(local_380 + -8);
                    if (lVar30 < 9) goto LAB_0010320d;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                    *(undefined4 *)(local_380 + 8) = 0;
                    local_360 = 0;
                    if (local_390 != (undefined1 *)0x0) {
                      CowData<unsigned_char>::_ref
                                ((CowData<unsigned_char> *)&local_360,(CowData *)&local_390);
                    }
                    Vector<unsigned_char>::append_array(local_388,&local_368);
                    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_360);
                  }
                  else if (param_3 == 1) {
                    lVar30 = *(long *)(local_380 + -8);
                    if (lVar30 < 9) goto LAB_0010320d;
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_380);
                    puVar24 = local_390;
                    if (local_390 == (undefined1 *)0x0) {
                      uVar36 = 0;
                    }
                    else {
                      uVar36 = *(ulong *)(local_390 + -8);
                    }
                    lVar30 = 0;
                    do {
                      local_380[lVar30 + 8] = (char)uVar36;
                      lVar30 = lVar30 + 1;
                      uVar36 = uVar36 >> 8 & 0xffffff;
                    } while (lVar30 != 4);
                    local_370 = 0;
                    if (local_390 == (undefined1 *)0x0) {
                      iVar20 = Compression::get_max_compressed_buffer_size(0,2);
                      CowData<unsigned_char>::resize<false>
                                ((CowData<unsigned_char> *)&local_370,(long)iVar20);
                      uVar33 = 0;
                    }
                    else {
                      iVar20 = Compression::get_max_compressed_buffer_size
                                         (*(undefined4 *)(local_390 + -8),2);
                      CowData<unsigned_char>::resize<false>
                                ((CowData<unsigned_char> *)&local_370,(long)iVar20);
                      uVar33 = *(undefined8 *)(puVar24 + -8);
                    }
                    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_370);
                    uVar28 = 2;
                    iVar20 = Compression::compress(local_370,puVar24,uVar33);
                    if (iVar20 < 0) {
                      _err_print_error("parse_code_string",
                                       "modules/gdscript/gdscript_tokenizer_buffer.cpp",0x17a,
                                       "Condition \"compressed_size < 0\" is true. Returning: Vector<uint8_t>()"
                                       ,"Error compressing GDScript tokenizer buffer.",0,0,uVar28);
                      *(undefined8 *)(this + 8) = 0;
                      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_370);
                      goto LAB_00103750;
                    }
                    CowData<unsigned_char>::resize<false>
                              ((CowData<unsigned_char> *)&local_370,(long)iVar20);
                    local_360 = 0;
                    if (local_370 != 0) {
                      CowData<unsigned_char>::_ref
                                ((CowData<unsigned_char> *)&local_360,(CowData *)&local_370);
                    }
                    Vector<unsigned_char>::append_array(local_388,&local_368);
                    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_360);
                    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_370);
                  }
                  *(undefined1 **)(this + 8) = local_380;
                  local_380 = (undefined1 *)0x0;
LAB_00103750:
                  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_380);
LAB_00103329:
                  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_390);
                  HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                  ::~HashMap((HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                              *)local_298);
                  CowData<Variant>::_unref((CowData<Variant> *)&local_3a0);
                  CowData<StringName>::_unref((CowData<StringName> *)local_3b0);
                  GDScriptTokenizer::Token::~Token((Token *)local_268);
                  GDScriptTokenizerText::~GDScriptTokenizerText(local_1c8);
                  HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                  ::~HashMap(local_2c8);
                  HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
                  ::~HashMap(local_2f8);
                  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_3c0);
                  HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                  ::~HashMap((HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
                              *)local_328);
                  HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                  ::~HashMap((HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
                              *)local_358);
                  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  return this;
                }
              }
              uVar36 = 0xc;
              goto LAB_001027f0;
            }
          }
LAB_0010320d:
          uVar36 = 8;
          goto LAB_001027f0;
        }
      }
LAB_001031e5:
      uVar36 = 4;
      goto LAB_001027f0;
    }
  }
LAB_001031c0:
  uVar36 = 0;
LAB_001027f0:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,uVar36,lVar30,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar16 = (code *)invalidInstructionException();
  (*pcVar16)();
LAB_001033d9:
  lVar30 = 0;
  goto LAB_001027f0;
}



/* CowData<GDScriptTokenizer::Token>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GDScriptTokenizer::Token>::_copy_on_write(CowData<GDScriptTokenizer::Token> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
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
  if (lVar2 * 0x48 != 0) {
    uVar10 = lVar2 * 0x48 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar7 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar7 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar7 = 1;
  puVar7[1] = lVar2;
  puVar11 = puVar7 + 2;
  if (lVar2 != 0) {
    do {
      puVar8 = (undefined4 *)((long)puVar11 + *(long *)this + (-0x10 - (long)puVar7));
      *(undefined4 *)puVar11 = *puVar8;
      Variant::Variant((Variant *)(puVar11 + 1),(Variant *)(puVar8 + 2));
      uVar5 = *(undefined8 *)(puVar8 + 8);
      uVar6 = *(undefined8 *)(puVar8 + 10);
      puVar11[6] = *(undefined8 *)(puVar8 + 0xc);
      uVar1 = puVar8[0xe];
      puVar11[4] = uVar5;
      puVar11[5] = uVar6;
      *(undefined4 *)(puVar11 + 7) = uVar1;
      uVar1 = puVar8[0xf];
      puVar11[8] = 0;
      lVar3 = *(long *)(puVar8 + 0x10);
      *(undefined4 *)((long)puVar11 + 0x3c) = uVar1;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)(puVar8 + 0x10));
      }
      lVar9 = lVar9 + 1;
      puVar11 = puVar11 + 9;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar7 + 2;
  return;
}



/* GDScriptTokenizerBuffer::set_code_buffer(Vector<unsigned char> const&) */

ulong __thiscall
GDScriptTokenizerBuffer::set_code_buffer(GDScriptTokenizerBuffer *this,Vector *param_1)

{
  long *plVar1;
  int *piVar2;
  CowData<GDScriptTokenizer::Token> *this_00;
  undefined4 *puVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  byte bVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  int *__dest;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uchar *puVar27;
  uint uVar28;
  long lVar29;
  CowData<GDScriptTokenizer::Token> *pCVar30;
  long lVar31;
  size_t __n;
  ulong uVar32;
  uint uVar33;
  int iVar34;
  int *piVar35;
  uchar *puVar36;
  undefined4 uVar37;
  long in_FS_OFFSET;
  ulong local_128;
  long local_c0 [2];
  long local_b0;
  int *local_a8;
  long local_a0;
  ulong local_98;
  undefined1 local_90 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58 [2];
  byte local_44 [4];
  long local_40 [2];
  
  pcVar19 = *(char **)(param_1 + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  if (((((pcVar19 == (char *)0x0) || (*(long *)(pcVar19 + -8) < 0xc)) || (*pcVar19 != 'G')) ||
      ((pcVar19[1] != 'D' || (pcVar19[2] != 'S')))) || (uVar28 = 0, pcVar19[3] != 'C')) {
    _err_print_error("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",0x8f,
                     "Condition \"p_buffer.size() < 12 || p_buffer[0] != \'G\' || p_buffer[1] != \'D\' || p_buffer[2] != \'S\' || p_buffer[3] != \'C\'\" is true. Returning: ERR_INVALID_DATA"
                     ,0,0);
  }
  else {
    do {
      lVar29 = lVar7 + 4;
      cVar6 = (char)lVar7;
      lVar7 = lVar7 + 1;
      uVar28 = uVar28 | (uint)(byte)pcVar19[lVar29] << (cVar6 * '\b' & 0x1fU);
    } while (lVar7 != 4);
    lVar7 = 0;
    uVar25 = 0;
    if ((int)uVar28 < 0x65) {
      do {
        lVar29 = lVar7 + 8;
        cVar6 = (char)lVar7;
        lVar7 = lVar7 + 1;
        uVar25 = uVar25 | (uint)(byte)pcVar19[lVar29] << (cVar6 * '\b' & 0x1fU);
      } while (lVar7 != 4);
      local_b0 = 0;
      if (uVar25 == 0) {
        lVar7 = *(long *)(pcVar19 + -8) + -0xc;
        local_a0 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_a0,lVar7);
        lVar29 = *(long *)(param_1 + 8);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_a0);
        lVar8 = 0;
        lVar9 = local_a0;
        lVar31 = local_a0;
        if (lVar7 == 0) {
          if (local_a0 == 0) goto LAB_00104350;
        }
        else {
          do {
            *(undefined1 *)(local_a0 + lVar8) = *(undefined1 *)(lVar29 + 0xc + lVar8);
            lVar8 = lVar8 + 1;
          } while (lVar7 != lVar8);
        }
LAB_00103b83:
        local_b0 = lVar31;
        lVar31 = lVar9 + 0x10;
        lVar29 = lVar9 + 8;
        lVar7 = lVar9 + 4;
        puVar27 = (uchar *)(lVar9 + 0x14);
        iVar34 = *(int *)(lVar9 + -8) + -0x14;
LAB_00103b8b:
        lVar8 = 0;
        uVar32 = 0;
        do {
          pbVar22 = (byte *)(lVar9 + lVar8);
          cVar6 = (char)lVar8;
          lVar8 = lVar8 + 1;
          uVar28 = (uint)uVar32 | (uint)*pbVar22 << (cVar6 * '\b' & 0x1fU);
          uVar32 = (ulong)uVar28;
        } while (lVar8 != 4);
        lVar9 = 0;
        uVar25 = 0;
        do {
          pbVar22 = (byte *)(lVar7 + lVar9);
          cVar6 = (char)lVar9;
          lVar9 = lVar9 + 1;
          bVar4 = cVar6 * '\b' & 0x1f;
          uVar25 = uVar25 | (uint)*pbVar22 << bVar4;
        } while (lVar9 != 4);
        uVar21 = (ulong)(uint)(0 << bVar4);
        uVar33 = 0;
        do {
          pbVar22 = (byte *)(lVar29 + uVar21);
          cVar6 = (char)uVar21;
          uVar21 = uVar21 + 1;
          uVar33 = uVar33 | (uint)*pbVar22 << (cVar6 * '\b' & 0x1fU);
        } while (uVar21 != 4);
        lVar7 = 0;
        uVar20 = 0;
        do {
          pbVar22 = (byte *)(lVar31 + lVar7);
          cVar6 = (char)lVar7;
          lVar7 = lVar7 + 1;
          uVar20 = uVar20 | (uint)*pbVar22 << (cVar6 * '\b' & 0x1fU);
        } while (lVar7 != 4);
        CowData<StringName>::resize<false>((CowData<StringName> *)(this + 0x10),uVar32);
        if (uVar28 != 0) {
          local_128 = 0;
          do {
            lVar7 = 0;
            uVar28 = 0;
            do {
              pbVar22 = puVar27 + lVar7;
              cVar6 = (char)lVar7;
              lVar7 = lVar7 + 1;
              bVar4 = cVar6 * '\b' & 0x1f;
              uVar28 = uVar28 | (uint)*pbVar22 << bVar4;
            } while (lVar7 != 4);
            if (iVar34 - 4U < uVar28 * 4) {
              uVar23 = 0xad;
              pcVar19 = 
              "Condition \"(len * 4u) > (uint32_t)total_len\" is true. Returning: ERR_INVALID_DATA";
              goto LAB_00104264;
            }
            if (uVar28 == 0) {
              __dest = (int *)(ulong)(uint)(0 << bVar4);
              local_a0 = 0;
              piVar35 = (int *)0x0;
            }
            else {
              uVar14 = (ulong)uVar28;
              uVar21 = uVar14 * 4 - 1;
              uVar21 = uVar21 | uVar21 >> 1;
              uVar21 = uVar21 | uVar21 >> 2;
              uVar21 = uVar21 | uVar21 >> 4;
              uVar21 = uVar21 | uVar21 >> 8;
              uVar21 = uVar21 | uVar21 >> 0x10;
              puVar10 = (undefined8 *)Memory::alloc_static((uVar21 | uVar21 >> 0x20) + 0x11,false);
              if (puVar10 == (undefined8 *)0x0) {
                piVar35 = (int *)0x0;
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                piVar35 = (int *)(puVar10 + 2);
                *puVar10 = 1;
                puVar10[1] = uVar14;
              }
              uVar21 = 0;
              iVar26 = -(int)local_44;
              pbVar22 = local_44;
              do {
                do {
                  pbVar11 = pbVar22 + 1;
                  *pbVar22 = puVar27[(ulong)(uint)(iVar26 + (int)pbVar22) + 4] ^ 0xb6;
                  pbVar22 = pbVar11;
                } while ((byte *)local_40 != pbVar11);
                iVar18 = 0;
                uVar24 = 0;
                pbVar22 = local_44;
                do {
                  bVar4 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                  bVar17 = (byte)iVar18;
                  iVar18 = iVar18 + 8;
                  uVar24 = uVar24 | (uint)bVar4 << (bVar17 & 0x1f);
                } while (iVar18 != 0x20);
                if (piVar35 == (int *)0x0) {
                  lVar7 = 0;
                  goto LAB_00103ef1;
                }
                lVar7 = *(long *)(piVar35 + -2);
                if (lVar7 <= (long)uVar21) goto LAB_00103ef1;
                plVar1 = (long *)(piVar35 + -4);
                __dest = piVar35;
                if (1 < *(ulong *)(piVar35 + -4)) {
                  lVar7 = *(long *)(piVar35 + -2);
                  uVar15 = 0x10;
                  __n = lVar7 * 4;
                  if (__n != 0) {
                    uVar15 = __n - 1 | __n - 1 >> 1;
                    uVar15 = uVar15 | uVar15 >> 2;
                    uVar15 = uVar15 | uVar15 >> 4;
                    uVar15 = uVar15 | uVar15 >> 8;
                    uVar15 = uVar15 | uVar15 >> 0x10;
                    uVar15 = (uVar15 | uVar15 >> 0x20) + 0x11;
                  }
                  puVar10 = (undefined8 *)Memory::alloc_static(uVar15,false);
                  if (puVar10 == (undefined8 *)0x0) {
                    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    __dest = (int *)(puVar10 + 2);
                    *puVar10 = 1;
                    puVar10[1] = lVar7;
                    memcpy(__dest,piVar35,__n);
                    LOCK();
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static(plVar1,false);
                    }
                  }
                }
                __dest[uVar21] = uVar24;
                uVar21 = uVar21 + 1;
                iVar26 = iVar26 + 4;
                pbVar22 = local_44;
                piVar35 = __dest;
              } while (uVar21 != uVar14);
              uVar24 = 0;
              piVar12 = __dest;
              if ((int)uVar28 < 0) {
                if (*__dest == 0) {
                  local_a0 = 0;
                }
                else {
                  do {
                    piVar2 = piVar12 + 1;
                    piVar12 = piVar12 + 1;
                  } while (*piVar2 != 0);
                  local_a0 = (long)piVar12 - (long)__dest >> 2;
                }
              }
              else {
                do {
                  iVar26 = *piVar12;
                  piVar12 = piVar12 + 1;
                  if (iVar26 == 0) {
                    local_a0 = (long)(int)uVar24;
                    goto LAB_0010402f;
                  }
                  uVar24 = uVar24 + 1;
                } while (uVar28 != uVar24);
                local_a0 = (long)(int)uVar28;
              }
            }
LAB_0010402f:
            local_c0[0] = 0;
            puVar27 = puVar27 + (ulong)(uVar28 * 4) + 4;
            local_a8 = __dest;
            String::parse_utf32((StrRange *)local_c0);
            StringName::StringName((StringName *)&local_a8,(String *)local_c0,false);
            iVar34 = (iVar34 - 4U) + uVar28 * -4;
            uVar21 = local_128;
            if (*(long *)(this + 0x10) == 0) {
              lVar7 = 0;
              goto LAB_00103ef1;
            }
            lVar7 = *(long *)(*(long *)(this + 0x10) + -8);
            if (lVar7 <= (long)local_128) goto LAB_00103ef1;
            CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0x10));
            puVar10 = (undefined8 *)(*(long *)(this + 0x10) + local_128 * 8);
            if ((int *)*puVar10 == local_a8) {
              if ((StringName::configured != '\0') && (local_a8 != (int *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              *puVar10 = local_a8;
            }
            lVar7 = local_c0[0];
            if (local_c0[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_c0[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c0[0] = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            if (piVar35 != (int *)0x0) {
              plVar1 = (long *)(piVar35 + -4);
              LOCK();
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(plVar1,false);
              }
            }
            local_128 = local_128 + 1;
          } while (uVar32 != local_128);
        }
        CowData<Variant>::resize<false>((CowData<Variant> *)(this + 0x20),(ulong)uVar25);
        if (uVar25 != 0) {
          uVar21 = 0;
          do {
            local_98 = 0;
            local_90 = (undefined1  [16])0x0;
            uVar28 = decode_variant((Variant *)&local_98,puVar27,iVar34,(int *)&local_a8,false,0);
            if (uVar28 != 0) {
              if ((&Variant::needs_deinit)[(int)(uint)local_98] != '\0') {
                Variant::_clear_internal();
              }
              uVar32 = (ulong)uVar28;
              lVar9 = local_b0;
              goto LAB_00104285;
            }
            puVar27 = puVar27 + (int)local_a8;
            iVar34 = iVar34 - (int)local_a8;
            if (*(long *)(this + 0x20) == 0) {
              lVar7 = 0;
              goto LAB_00103ef1;
            }
            lVar7 = *(long *)(*(long *)(this + 0x20) + -8);
            if (lVar7 <= (long)uVar21) goto LAB_00103ef1;
            CowData<Variant>::_copy_on_write((CowData<Variant> *)(this + 0x20));
            Variant::operator=((Variant *)(*(long *)(this + 0x20) + uVar21 * 0x18),
                               (Variant *)&local_98);
            if ((&Variant::needs_deinit)[(int)(uint)local_98] != '\0') {
              Variant::_clear_internal();
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar25);
        }
        uVar32 = (ulong)uVar20;
        if (uVar33 != 0) {
          if (7 < iVar34) {
            puVar36 = puVar27 + (ulong)uVar33 * 8;
            do {
              lVar7 = 0;
              uVar28 = 0;
              do {
                pbVar22 = puVar27 + lVar7;
                cVar6 = (char)lVar7;
                lVar7 = lVar7 + 1;
                uVar28 = uVar28 | (uint)*pbVar22 << (cVar6 * '\b' & 0x1fU);
              } while (lVar7 != 4);
              lVar7 = 0;
              uVar25 = 0;
              do {
                lVar29 = lVar7 + 4;
                cVar6 = (char)lVar7;
                lVar7 = lVar7 + 1;
                uVar25 = uVar25 | (uint)puVar27[lVar29] << (cVar6 * '\b' & 0x1fU);
              } while (lVar7 != 4);
              puVar27 = puVar27 + 8;
              iVar34 = iVar34 + -8;
              local_a8 = (int *)CONCAT44(local_a8._4_4_,uVar28);
              puVar13 = (uint *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                              *)(this + 0x38),(int *)&local_a8);
              *puVar13 = uVar25;
              if (puVar27 == puVar36) {
                if (iVar34 < 8) goto LAB_001045f7;
                puVar36 = puVar27 + (ulong)uVar33 * 8;
                goto LAB_00104592;
              }
            } while (7 < iVar34);
          }
          uVar23 = 0xcd;
          pcVar19 = "Condition \"total_len < 8\" is true. Returning: ERR_INVALID_DATA";
          goto LAB_00104264;
        }
LAB_0010462d:
        this_00 = (CowData<GDScriptTokenizer::Token> *)(this + 0xa0);
        pCVar30 = this_00;
        if (*(long *)(this + 0xa0) == 0) {
          if (uVar32 != 0) {
            uVar21 = 0;
            lVar7 = 0;
            CowData<GDScriptTokenizer::Token>::_copy_on_write(this_00);
LAB_001046b5:
            uVar15 = uVar32 * 0x48 - 1;
            uVar15 = uVar15 | uVar15 >> 1;
            uVar15 = uVar15 | uVar15 >> 2;
            uVar15 = uVar15 | uVar15 >> 4;
            uVar15 = uVar15 | uVar15 >> 8;
            uVar15 = uVar15 | uVar15 >> 0x10;
            uVar15 = uVar15 | uVar15 >> 0x20;
            lVar29 = uVar15 + 1;
            uVar14 = uVar32;
            if ((long)uVar21 < (long)uVar32) {
              if (lVar29 == lVar7) {
LAB_00104a38:
                puVar10 = *(undefined8 **)(this + 0xa0);
                if (puVar10 == (undefined8 *)0x0) {
                  uVar32 = set_code_buffer((Vector *)pCVar30);
                  return uVar32;
                }
LAB_0010474c:
                for (lVar7 = puVar10[-1]; lVar7 < (long)uVar32; lVar7 = lVar7 + 1) {
                  puVar10 = puVar10 + lVar7 * 9;
                  puVar10[6] = 0;
                  *(undefined4 *)puVar10 = 0;
                  *(undefined4 *)(puVar10 + 1) = 0;
                  puVar10[7] = 0xffffffff;
                  puVar10[8] = 0;
                  *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
                  puVar10 = *(undefined8 **)(this + 0xa0);
                }
LAB_00104af0:
                if (puVar10 == (undefined8 *)0x0) {
                  uVar32 = FUN_00105280();
                  return uVar32;
                }
                goto LAB_00104af5;
              }
              if (uVar21 == 0) {
                puVar16 = (undefined8 *)Memory::alloc_static(uVar15 + 0x11,false);
                if (puVar16 != (undefined8 *)0x0) {
                  puVar10 = puVar16 + 2;
                  *puVar16 = 1;
                  puVar16[1] = 0;
                  *(undefined8 **)(this + 0xa0) = puVar10;
                  goto LAB_0010474c;
                }
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                pCVar30 = this_00;
                iVar26 = CowData<GDScriptTokenizer::Token>::_realloc(this_00,lVar29);
                if (iVar26 == 0) goto LAB_00104a38;
              }
            }
            else {
              while( true ) {
                puVar10 = *(undefined8 **)(this + 0xa0);
                if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                if ((ulong)puVar10[-1] <= uVar14) break;
                if (puVar10[uVar14 * 9 + 8] != 0) {
                  LOCK();
                  plVar1 = (long *)(puVar10[uVar14 * 9 + 8] + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar9 = puVar10[uVar14 * 9 + 8];
                    puVar10[uVar14 * 9 + 8] = 0;
                    Memory::free_static((void *)(lVar9 + -0x10),false);
                  }
                }
                if ((&Variant::needs_deinit)[*(int *)(puVar10 + uVar14 * 9 + 1)] != '\0') {
                  Variant::_clear_internal();
                }
                uVar14 = uVar14 + 1;
              }
              if (lVar29 != lVar7) {
                iVar26 = CowData<GDScriptTokenizer::Token>::_realloc(this_00,lVar29);
                if (iVar26 != 0) goto LAB_001047fb;
                puVar10 = *(undefined8 **)(this + 0xa0);
                goto LAB_00104af0;
              }
LAB_00104af5:
              puVar10[-1] = uVar32;
            }
LAB_001047fb:
            uVar21 = 0;
            do {
              iVar26 = ((int)(char)*puVar27 >> 0x1f & 3U) + 5;
              if (iVar34 < iVar26) {
                _err_print_error("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",
                                 0xe5,
                                 "Condition \"total_len < token_len\" is true. Returning: ERR_INVALID_DATA"
                                 ,0,0);
                goto LAB_00104277;
              }
              _binary_to_token((uchar *)&local_98);
              puVar27 = puVar27 + iVar26;
              if (0x62 < (uint)local_98) {
                _err_print_index_error
                          ("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",0xe8,
                           local_98 & 0xffffffff,99,"token.type","Token::TK_MAX","",false,false);
                GDScriptTokenizer::Token::~Token((Token *)&local_98);
                goto LAB_00104277;
              }
              if (*(long *)(this + 0xa0) == 0) {
                lVar7 = 0;
LAB_00103ef1:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar21,lVar7,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              lVar7 = *(long *)(*(long *)(this + 0xa0) + -8);
              if (lVar7 <= (long)uVar21) goto LAB_00103ef1;
              CowData<GDScriptTokenizer::Token>::_copy_on_write(this_00);
              puVar3 = (undefined4 *)(*(long *)(this + 0xa0) + uVar21 * 0x48);
              *puVar3 = (uint)local_98;
              Variant::operator=((Variant *)(puVar3 + 2),(Variant *)local_90);
              puVar3[8] = local_78;
              puVar3[9] = local_74;
              puVar3[10] = local_70;
              puVar3[0xb] = local_6c;
              puVar3[0xc] = local_68;
              puVar3[0xd] = local_64;
              puVar3[0xe] = local_60;
              puVar3[0xf] = local_5c;
              if (*(long *)(puVar3 + 0x10) != local_58[0]) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 0x10),(CowData *)local_58);
              }
              lVar7 = local_58[0];
              iVar34 = iVar34 - iVar26;
              if (local_58[0] != 0) {
                LOCK();
                plVar1 = (long *)(local_58[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_58[0] = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
              }
              if ((&Variant::needs_deinit)[(int)local_90._0_4_] != '\0') {
                Variant::_clear_internal();
              }
              uVar21 = uVar21 + 1;
            } while (uVar32 != uVar21);
          }
        }
        else {
          uVar21 = *(ulong *)(*(long *)(this + 0xa0) + -8);
          if (uVar32 == uVar21) {
            if (uVar20 != 0) goto LAB_001047fb;
          }
          else {
            if (uVar32 != 0) {
              CowData<GDScriptTokenizer::Token>::_copy_on_write(this_00);
              lVar7 = uVar21 * 0x48;
              if (lVar7 != 0) {
                uVar14 = lVar7 - 1U | lVar7 - 1U >> 1;
                uVar14 = uVar14 | uVar14 >> 2;
                uVar14 = uVar14 | uVar14 >> 4;
                uVar14 = uVar14 | uVar14 >> 8;
                uVar14 = uVar14 | uVar14 >> 0x10;
                lVar7 = (uVar14 | uVar14 >> 0x20) + 1;
              }
              goto LAB_001046b5;
            }
            CowData<GDScriptTokenizer::Token>::_unref(this_00);
          }
        }
        if (0 < iVar34) {
          uVar23 = 0xed;
          pcVar19 = "Condition \"total_len > 0\" is true. Returning: ERR_INVALID_DATA";
          goto LAB_00104264;
        }
        uVar32 = 0;
        lVar9 = local_b0;
      }
      else {
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_b0,(long)(int)uVar25)
        ;
        if (*(long *)(param_1 + 8) == 0) {
          iVar34 = -0xc;
        }
        else {
          iVar34 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8) + -0xc;
        }
        if (local_b0 == 0) {
          uVar37 = 0;
        }
        else {
          uVar37 = *(undefined4 *)(local_b0 + -8);
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_b0);
        lVar9 = local_b0;
        uVar28 = Compression::decompress(local_b0,uVar37,pcVar19 + 0xc,iVar34,2);
        if (uVar25 == uVar28) {
          lVar31 = local_b0;
          if (lVar9 != 0) goto LAB_00103b83;
LAB_00104350:
          lVar31 = 0x10;
          lVar7 = 4;
          lVar9 = 0;
          lVar29 = 8;
          puVar27 = (uchar *)0x14;
          iVar34 = -0x14;
          goto LAB_00103b8b;
        }
        _err_print_error("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",0x9c,
                         "Condition \"result != decompressed_size\" is true. Returning: ERR_INVALID_DATA"
                         ,"Error decompressing GDScript tokenizer buffer.",0,0);
        uVar32 = 0x1e;
      }
      goto LAB_00104285;
    }
    _err_print_error("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",0x92,
                     "Condition \"version > 100\" is true. Returning: ERR_INVALID_DATA",
                     "Binary GDScript is too recent! Please use a newer engine version.",0,0);
  }
  uVar32 = 0x1e;
  goto LAB_00103e9b;
  while (7 < iVar34) {
LAB_00104592:
    lVar7 = 0;
    uVar28 = 0;
    do {
      pbVar22 = puVar27 + lVar7;
      cVar6 = (char)lVar7;
      lVar7 = lVar7 + 1;
      uVar28 = uVar28 | (uint)*pbVar22 << (cVar6 * '\b' & 0x1fU);
    } while (lVar7 != 4);
    lVar7 = 0;
    uVar25 = 0;
    do {
      lVar29 = lVar7 + 4;
      cVar6 = (char)lVar7;
      lVar7 = lVar7 + 1;
      uVar25 = uVar25 | (uint)puVar27[lVar29] << (cVar6 * '\b' & 0x1fU);
    } while (lVar7 != 4);
    local_a8 = (int *)CONCAT44(local_a8._4_4_,uVar28);
    puVar27 = puVar27 + 8;
    iVar34 = iVar34 + -8;
    puVar13 = (uint *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                      ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                    *)(this + 0x68),(int *)&local_a8);
    *puVar13 = uVar25;
    if (puVar27 == puVar36) goto LAB_0010462d;
  }
LAB_001045f7:
  uVar23 = 0xd6;
  pcVar19 = "Condition \"total_len < 8\" is true. Returning: ERR_INVALID_DATA";
LAB_00104264:
  _err_print_error("set_code_buffer","modules/gdscript/gdscript_tokenizer_buffer.cpp",uVar23,pcVar19
                   ,0,0);
LAB_00104277:
  uVar32 = 0x1e;
  lVar9 = local_b0;
LAB_00104285:
  if (lVar9 != 0) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_b0 + -0x10),false);
    }
  }
LAB_00103e9b:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar32;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* GDScriptTokenizerBuffer::is_text() */

undefined8 GDScriptTokenizerBuffer::is_text(void)

{
  return 0;
}



/* GDScriptTokenizerBuffer::get_comments() const */

GDScriptTokenizerBuffer * __thiscall
GDScriptTokenizerBuffer::get_comments(GDScriptTokenizerBuffer *this)

{
  return this + 0xd0;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<StringName>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<StringName>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00105228(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Variant>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010523e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105260(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDScriptTokenizer::Token>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GDScriptTokenizer::Token>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptTokenizerBuffer::set_code_buffer(Vector<unsigned char> const&) [clone .cold] */

void GDScriptTokenizerBuffer::set_code_buffer(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105280(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptTokenizer::Token::~Token() */

void __thiscall GDScriptTokenizer::Token::~Token(Token *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((&Variant::needs_deinit)[*(int *)(this + 8)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned int> > >::operator[](StringName const&)
    */

undefined8 * __thiscall
HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
::operator[](HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00105a08:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_001058b8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_001058bc:
      if (iVar46 != 0) {
LAB_001058c4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_001054bc;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_001054f3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_001054f3;
    if (iVar46 != 0) goto LAB_001058c4;
LAB_00105519:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001054bc;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_001054bc;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00105a08;
LAB_001058b8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_001058bc;
    }
LAB_001054f3:
    if ((float)uVar40 * __LC15 < (float)(iVar46 + 1)) goto LAB_00105519;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_001059cd;
LAB_001057a4:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_001057a4;
LAB_001059cd:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001054bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Variant, unsigned int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, unsigned int> > >::operator[](Variant const&) */

undefined8 * __thiscall
HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
::operator[](HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
             *this,Variant *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  int local_68 [6];
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00106180:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_00106032;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_00106036:
      if (iVar44 != 0) {
LAB_0010603e:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = Variant::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = Variant::hash_compare
                                 ((Variant *)(*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                  (int)param_1,false);
              if (cVar36 != '\0') {
                puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined4 *)(puVar41 + 5) = 0;
                goto LAB_00105f13;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_00105b77;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00105b77;
    if (iVar44 != 0) goto LAB_0010603e;
LAB_00105b9d:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      puVar41 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105f13;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar41;
              *puVar41 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = Variant::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = Variant::hash_compare
                               ((Variant *)(*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                (int)param_1,false);
            if (cVar36 != '\0') {
              puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_00105f13;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00106180;
LAB_00106032:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_00106036;
    }
LAB_00105b77:
    if ((float)uVar39 * __LC15 < (float)(iVar44 + 1)) goto LAB_00105b9d;
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = 0;
  puVar41[1] = 0;
  Variant::Variant((Variant *)(puVar41 + 2),(Variant *)local_68);
  *(undefined4 *)(puVar41 + 5) = local_50;
  if ((&Variant::needs_deinit)[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  uVar37 = Variant::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  puVar56 = puVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    puVar55 = puVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      puVar56 = puVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        puVar56 = (undefined8 *)*puVar1;
        *puVar1 = puVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      puVar55 = puVar56;
    } while (uVar38 != 0);
  }
  *(undefined8 **)(lVar45 + lVar46 * 8) = puVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105f13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar41 + 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::operator[](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10688b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001063f3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x1068d4;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00106773;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00106773:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_00106754;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_001063f3:
  if ((float)uVar51 * __LC15 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00106754;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00106754:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* HashMap<StringName, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
::~HashMap(HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<Variant, unsigned int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
::~HashMap(HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          if ((&Variant::needs_deinit)[*(int *)((long)pvVar3 + 0x10)] != '\0') {
            Variant::_clear_internal();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<unsigned int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
::~HashMap(HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */

void __thiscall
List<GDScriptTokenizer::Token,DefaultAllocator>::~List
          (List<GDScriptTokenizer::Token,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar4 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x58) == puVar4) {
      *puVar4 = *(undefined8 *)((long)pvVar2 + 0x48);
      if (pvVar2 == (void *)puVar4[1]) {
        puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar2 + 0x48);
      }
      if (*(long *)((long)pvVar2 + 0x48) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x48) + 0x50) =
             *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x40) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x40) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x40);
          *(undefined8 *)((long)pvVar2 + 0x40) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((&Variant::needs_deinit)[*(int *)((long)pvVar2 + 8)] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(pvVar2,false);
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar4 = *(undefined8 **)this;
  } while (*(int *)(puVar4 + 2) != 0);
  Memory::free_static(puVar4,false);
  return;
}



/* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<List<int,DefaultAllocator>,DefaultAllocator>::~List
          (List<List<int,DefaultAllocator>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar6 = *(long **)this;
  if (plVar6 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar6;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar6[2] != 0) {
        uVar5 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar5;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar6) {
      lVar4 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar6 = lVar4;
      if (plVar1 == (long *)plVar6[1]) {
        plVar6[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar4;
        lVar4 = plVar1[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
      plVar7 = (long *)*plVar1;
      if (plVar7 != (long *)0x0) {
        do {
          pvVar3 = (void *)*plVar7;
          if (pvVar3 == (void *)0x0) {
            if ((int)plVar7[2] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00106edf;
            }
            break;
          }
          if (plVar7 == *(long **)((long)pvVar3 + 0x18)) {
            lVar4 = *(long *)((long)pvVar3 + 8);
            lVar2 = *(long *)((long)pvVar3 + 0x10);
            *plVar7 = lVar4;
            if (pvVar3 == (void *)plVar7[1]) {
              plVar7[1] = lVar2;
            }
            if (lVar2 != 0) {
              *(long *)(lVar2 + 8) = lVar4;
              lVar4 = *(long *)((long)pvVar3 + 8);
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x10) = lVar2;
            }
            Memory::free_static(pvVar3,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = (long *)*plVar1;
        } while ((int)plVar7[2] != 0);
        Memory::free_static(plVar7,false);
      }
LAB_00106edf:
      Memory::free_static(plVar1,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar6 = *(long **)this;
  } while ((int)plVar6[2] != 0);
  uVar5 = Memory::free_static(plVar6,false);
  return uVar5;
}



/* GDScriptTokenizerText::~GDScriptTokenizerText() */

void __thiscall GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  
  *(code **)this = Memory::realloc_static;
  pvVar9 = *(void **)(this + 0x150);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x174) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x170) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x174) = 0;
        *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x158) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x158) + lVar6) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar8 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (*plVar8 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x150);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x174) = 0;
        *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00107109;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x158),false);
  }
LAB_00107109:
  if (*(long *)(this + 0x140) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x140) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      plVar8 = *(long **)(this + 0x140);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar6 = plVar8[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x140) = 0;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        do {
          if (*plVar7 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *plVar7;
              *plVar7 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar6 != lVar10);
      }
      Memory::free_static(plVar8 + -2,false);
    }
  }
  if (*(long *)(this + 0x130) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x130) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0x130);
      *(undefined8 *)(this + 0x130) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  plVar8 = *(long **)(this + 0x110);
  if (plVar8 != (long *)0x0) {
    do {
      pvVar9 = (void *)*plVar8;
      if (pvVar9 == (void *)0x0) {
        if ((int)plVar8[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010721a;
        }
        break;
      }
      if (plVar8 == *(long **)((long)pvVar9 + 0x18)) {
        lVar6 = *(long *)((long)pvVar9 + 8);
        lVar10 = *(long *)((long)pvVar9 + 0x10);
        *plVar8 = lVar6;
        if (pvVar9 == (void *)plVar8[1]) {
          plVar8[1] = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 8) = lVar6;
          lVar6 = *(long *)((long)pvVar9 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar10;
        }
        Memory::free_static(pvVar9,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x110);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
  }
LAB_0010721a:
  List<List<int,DefaultAllocator>,DefaultAllocator>::~List
            ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(this + 0x108));
  plVar8 = *(long **)(this + 0x100);
  if (plVar8 != (long *)0x0) {
    do {
      pvVar9 = (void *)*plVar8;
      if (pvVar9 == (void *)0x0) {
        if ((int)plVar8[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00107298;
        }
        break;
      }
      if (*(long **)((long)pvVar9 + 0x18) == plVar8) {
        lVar6 = *(long *)((long)pvVar9 + 8);
        lVar10 = *(long *)((long)pvVar9 + 0x10);
        *plVar8 = lVar6;
        if (pvVar9 == (void *)plVar8[1]) {
          plVar8[1] = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 8) = lVar6;
          lVar6 = *(long *)((long)pvVar9 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar10;
        }
        Memory::free_static(pvVar9,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x100);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
  }
LAB_00107298:
  if (*(long *)(this + 0xf0) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0xf0) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0xf0);
      *(undefined8 *)(this + 0xf0) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if ((&Variant::needs_deinit)[*(int *)(this + 0xb8)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0xa8) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0xa8) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
      cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x70)];
      goto joined_r0x00107416;
    }
  }
  cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x70)];
joined_r0x00107416:
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  List<GDScriptTokenizer::Token,DefaultAllocator>::~List
            ((List<GDScriptTokenizer::Token,DefaultAllocator> *)(this + 0x58));
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
      return;
    }
  }
  return;
}



/* GDScriptTokenizerText::~GDScriptTokenizerText() */

void __thiscall GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this)

{
  ~GDScriptTokenizerText(this);
  operator_delete(this,0x178);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, unsigned int> > >::operator[](unsigned int
   const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
::operator[](HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x107b1b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00107683;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x107b64;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00107a03;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00107a03:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_001079e4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00107683:
  if ((float)uVar51 * __LC15 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001079e4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar38 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar42[1] = uVar38;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001079e4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if ((&Variant::needs_deinit)[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* Vector<unsigned char>::append_array(Vector<unsigned char>) */

void __thiscall Vector<unsigned_char>::append_array(Vector<unsigned_char> *this,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar7 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar7;
    }
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar6 = 0;
LAB_00108009:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar6 = *(long *)(lVar3 + -8);
        if (lVar6 <= lVar5) goto LAB_00108009;
        uVar1 = *(undefined1 *)(lVar3 + lVar5);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(undefined1 *)(*(long *)(this + 8) + lVar7 + lVar5) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* CowData<unsigned int>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this,long param_1)

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



/* CowData<GDScriptTokenizer::Token>::_unref() */

void __thiscall CowData<GDScriptTokenizer::Token>::_unref(CowData<GDScriptTokenizer::Token> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
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
        piVar6 = (int *)(lVar2 + 8);
        lVar7 = 0;
        do {
          if (*(long *)(piVar6 + 0xe) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + 0xe) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + 0xe);
              piVar6[0xe] = 0;
              piVar6[0xf] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if ((&Variant::needs_deinit)[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 0x12;
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



/* GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer() */

void __thiscall GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer(GDScriptTokenizerBuffer *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR_get_comments_001086d8;
  pvVar5 = *(void **)(this + 0xd8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xfc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xf8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xfc) = 0;
        *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe0) + lVar3) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar3 * 2);
            *(int *)(*(long *)(this + 0xe0) + lVar3) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar4 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar2 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xd8);
            *(undefined8 *)((long)pvVar5 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xfc) = 0;
        *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001082b9;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xe0),false);
  }
LAB_001082b9:
  List<List<int,DefaultAllocator>,DefaultAllocator>::~List
            ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(this + 0xc0));
  plVar4 = *(long **)(this + 0xb8);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar5 = (void *)*plVar4;
      if (pvVar5 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00108339;
        }
        break;
      }
      if (*(long **)((long)pvVar5 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar5 + 8);
        lVar2 = *(long *)((long)pvVar5 + 0x10);
        *plVar4 = lVar3;
        if (pvVar5 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar5 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar5,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0xb8);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00108339:
  CowData<GDScriptTokenizer::Token>::_unref((CowData<GDScriptTokenizer::Token> *)(this + 0xa0));
  pvVar5 = *(void **)(this + 0x70);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x94) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x94) = 0;
        *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x78) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0x78) + lVar3) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar3 * 2),false);
            pvVar5 = *(void **)(this + 0x70);
            *(undefined8 *)((long)pvVar5 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar1 << 2 != lVar3);
        *(undefined4 *)(this + 0x94) = 0;
        *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001083d9;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x78),false);
  }
LAB_001083d9:
  pvVar5 = *(void **)(this + 0x40);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 100) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x48) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0x48) + lVar3) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar3 * 2),false);
            pvVar5 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar5 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar1 << 2 != lVar3);
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010845b;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x48),false);
  }
LAB_0010845b:
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar3 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x20));
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x10));
  return;
}



/* GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer() */

void __thiscall GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer(GDScriptTokenizerBuffer *this)

{
  ~GDScriptTokenizerBuffer(this);
  operator_delete(this,0x100);
  return;
}



/* CowData<GDScriptTokenizer::Token>::_realloc(long) */

undefined8 __thiscall
CowData<GDScriptTokenizer::Token>::_realloc(CowData<GDScriptTokenizer::Token> *this,long param_1)

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



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer() */

void __thiscall GDScriptTokenizerBuffer::~GDScriptTokenizerBuffer(GDScriptTokenizerBuffer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptTokenizerText::~GDScriptTokenizerText() */

void __thiscall GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */

void __thiscall
List<List<int,DefaultAllocator>,DefaultAllocator>::~List
          (List<List<int,DefaultAllocator>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */

void __thiscall
List<GDScriptTokenizer::Token,DefaultAllocator>::~List
          (List<GDScriptTokenizer::Token,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
::~HashMap(HashMap<unsigned_int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,unsigned_int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Variant, unsigned int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
::~HashMap(HashMap<Variant,unsigned_int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,unsigned_int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
::~HashMap(HashMap<StringName,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptTokenizer::Token::~Token() */

void __thiscall GDScriptTokenizer::Token::~Token(Token *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


