
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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

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



/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */

void __thiscall CowData<Color>::_ref(CowData<Color> *this,CowData *param_1)

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



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* CowData<Vector4>::_ref(CowData<Vector4> const&) [clone .part.0] */

void __thiscall CowData<Vector4>::_ref(CowData<Vector4> *this,CowData *param_1)

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



/* CowData<long>::_ref(CowData<long> const&) [clone .part.0] */

void __thiscall CowData<long>::_ref(CowData<long> *this,CowData *param_1)

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



/* CowData<double>::_ref(CowData<double> const&) [clone .part.0] */

void __thiscall CowData<double>::_ref(CowData<double> *this,CowData *param_1)

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



/* Dictionary::get_key_list(List<Variant, DefaultAllocator>*) const */

void __thiscall Dictionary::get_key_list(Dictionary *this,List *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  Variant *this_00;
  undefined8 *puVar4;
  Variant *pVVar5;
  
  if (*(int *)(*(long *)this + 0x3c) != 0) {
    puVar4 = *(undefined8 **)(*(long *)this + 0x28);
    if (puVar4 != (undefined8 *)0x0) {
      pVVar5 = (Variant *)(puVar4 + 2);
      if (*(long *)param_1 == 0) {
        pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar3;
        *(undefined4 *)pauVar3[1] = 0;
        *pauVar3 = (undefined1  [16])0x0;
      }
      while( true ) {
        this_00 = (Variant *)operator_new(0x30,DefaultAllocator::alloc);
        *(undefined4 *)this_00 = 0;
        *(undefined8 *)(this_00 + 0x28) = 0;
        *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
        Variant::operator=(this_00,pVVar5);
        uVar1 = *(undefined8 *)(*(long *)param_1 + 8);
        *(long *)(this_00 + 0x28) = *(long *)param_1;
        plVar2 = *(long **)param_1;
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(undefined8 *)(this_00 + 0x20) = uVar1;
        if (plVar2[1] != 0) {
          *(Variant **)(plVar2[1] + 0x18) = this_00;
        }
        plVar2[1] = (long)this_00;
        if (*plVar2 == 0) {
          puVar4 = (undefined8 *)*puVar4;
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          *plVar2 = (long)this_00;
        }
        else {
          puVar4 = (undefined8 *)*puVar4;
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        }
        if (puVar4 == (undefined8 *)0x0) break;
        pVVar5 = (Variant *)(puVar4 + 2);
      }
    }
    return;
  }
  return;
}



/* Dictionary::get_key_at_index(int) const */

Variant * Dictionary::get_key_at_index(int param_1)

{
  int iVar1;
  int in_EDX;
  long *in_RSI;
  long *plVar2;
  undefined4 in_register_0000003c;
  Variant *this;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  plVar2 = *(long **)(*in_RSI + 0x28);
  if (plVar2 != (long *)0x0) {
    if (in_EDX != 0) {
      iVar1 = 0;
      do {
        plVar2 = (long *)*plVar2;
        iVar1 = iVar1 + 1;
        if (plVar2 == (long *)0x0) goto LAB_0010063f;
      } while (in_EDX != iVar1);
    }
    Variant::Variant(this,(Variant *)(plVar2 + 2));
    return this;
  }
LAB_0010063f:
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* Dictionary::get_value_at_index(int) const */

Variant * Dictionary::get_value_at_index(int param_1)

{
  int iVar1;
  int in_EDX;
  long *in_RSI;
  long *plVar2;
  undefined4 in_register_0000003c;
  Variant *this;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  plVar2 = *(long **)(*in_RSI + 0x28);
  if (plVar2 != (long *)0x0) {
    if (in_EDX != 0) {
      iVar1 = 0;
      do {
        plVar2 = (long *)*plVar2;
        iVar1 = iVar1 + 1;
        if (plVar2 == (long *)0x0) goto LAB_0010069f;
      } while (in_EDX != iVar1);
    }
    Variant::Variant(this,(Variant *)(plVar2 + 5));
    return this;
  }
LAB_0010069f:
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* Dictionary::size() const */

undefined4 __thiscall Dictionary::size(Dictionary *this)

{
  return *(undefined4 *)(*(long *)this + 0x3c);
}



/* Dictionary::is_empty() const */

undefined4 __thiscall Dictionary::is_empty(Dictionary *this)

{
  return CONCAT31((int3)((uint)*(int *)(*(long *)this + 0x3c) >> 8),
                  *(int *)(*(long *)this + 0x3c) == 0);
}



/* Dictionary::recursive_equal(Dictionary const&, int) const */

undefined8 __thiscall Dictionary::recursive_equal(Dictionary *this,Dictionary *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  
  lVar2 = *(long *)this;
  lVar17 = *(long *)param_1;
  if (lVar2 == lVar17) {
    return 1;
  }
  if (*(int *)(lVar17 + 0x3c) != *(int *)(lVar2 + 0x3c)) {
    return 0;
  }
  if (param_2 < 0x65) {
    plVar19 = *(long **)(lVar2 + 0x28);
    if (plVar19 != (long *)0x0) {
LAB_00100748:
      if ((*(long *)(lVar17 + 0x18) != 0) && (*(int *)(lVar17 + 0x3c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar17 + 0x38) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar17 + 0x38) * 8);
        uVar13 = Variant::hash();
        uVar11 = CONCAT44(0,uVar1);
        uVar14 = 1;
        if (uVar13 != 0) {
          uVar14 = uVar13;
        }
        lVar18 = *(long *)(lVar17 + 0x20);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar14 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar11;
        lVar16 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(lVar18 + lVar16 * 4);
        uVar15 = SUB164(auVar3 * auVar7,8);
        if (uVar13 != 0) {
          uVar20 = 0;
          do {
            if (uVar14 == uVar13) {
              cVar12 = StringLikeVariantComparator::compare
                                 ((Variant *)
                                  (*(long *)(*(long *)(lVar17 + 0x18) + lVar16 * 8) + 0x10),
                                  (Variant *)(plVar19 + 2));
              if (cVar12 != '\0') goto LAB_00100869;
              lVar18 = *(long *)(lVar17 + 0x20);
            }
            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(uVar15 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar16 = SUB168(auVar4 * auVar8,8);
            uVar13 = *(uint *)(lVar18 + lVar16 * 4);
            uVar15 = SUB164(auVar4 * auVar8,8);
            if (uVar13 == 0) {
              return 0;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar13 * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar11;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar1 + uVar15) - SUB164(auVar5 * auVar9,8)) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar11;
            if (SUB164(auVar6 * auVar10,8) < uVar20) {
              return 0;
            }
          } while( true );
        }
      }
      return 0;
    }
  }
  else {
    _err_print_error("recursive_equal","core/variant/dictionary.cpp",0x106,"Max recursion reached",0
                     ,0);
  }
  return 1;
LAB_00100869:
  lVar2 = *(long *)(*(long *)(lVar17 + 0x18) + (ulong)uVar15 * 8);
  if (lVar2 == 0) {
    return 0;
  }
  cVar12 = Variant::hash_compare
                     ((Variant *)(plVar19 + 5),(int)lVar2 + 0x28,(bool)((char)param_2 + '\x01'));
  if (cVar12 == '\0') {
    return 0;
  }
  plVar19 = (long *)*plVar19;
  if (plVar19 == (long *)0x0) {
    return 1;
  }
  lVar17 = *(long *)param_1;
  goto LAB_00100748;
}



/* Dictionary::TEMPNAMEPLACEHOLDERVALUE(Dictionary const&) const */

void __thiscall Dictionary::operator==(Dictionary *this,Dictionary *param_1)

{
  recursive_equal(this,param_1,0);
  return;
}



/* Dictionary::TEMPNAMEPLACEHOLDERVALUE(Dictionary const&) const */

uint __thiscall Dictionary::operator!=(Dictionary *this,Dictionary *param_1)

{
  uint uVar1;
  
  uVar1 = recursive_equal(this,param_1,0);
  return uVar1 ^ 1;
}



/* Dictionary::clear() */

void __thiscall Dictionary::clear(Dictionary *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  
  lVar3 = *(long *)this;
  if (*(long *)(lVar3 + 8) == 0) {
    if ((*(long *)(lVar3 + 0x18) != 0) && (*(int *)(lVar3 + 0x3c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x38) * 4);
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          piVar5 = (int *)(*(long *)(lVar3 + 0x20) + lVar6);
          if (*piVar5 != 0) {
            *piVar5 = 0;
            pvVar4 = *(void **)(*(long *)(lVar3 + 0x18) + lVar6 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x28)] == '\0') {
              cVar1 = Variant::needs_deinit[*(int *)((long)pvVar4 + 0x10)];
            }
            else {
              Variant::_clear_internal();
              cVar1 = Variant::needs_deinit[*(int *)((long)pvVar4 + 0x10)];
            }
            if (cVar1 != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(*(long *)(lVar3 + 0x18) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
      }
      *(undefined4 *)(lVar3 + 0x3c) = 0;
      *(undefined1 (*) [16])(lVar3 + 0x28) = (undefined1  [16])0x0;
    }
    return;
  }
  _err_print_error("clear","core/variant/dictionary.cpp",0x125,
                   "Condition \"_p->read_only\" is true.","Dictionary is in read-only state.",0,0);
  return;
}



/* Dictionary::sort() */

undefined1  [16] __thiscall Dictionary::sort(Dictionary *this)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  char cVar5;
  long *in_RAX;
  undefined8 *in_RDX;
  undefined8 *extraout_RDX;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  ulong uStack_30;
  
  lVar1 = *(long *)this;
  if (*(long *)(lVar1 + 8) != 0) {
    _err_print_error(&_LC6,"core/variant/dictionary.cpp",0x12a,
                     "Condition \"_p->read_only\" is true.","Dictionary is in read-only state.",0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_30;
    return auVar3 << 0x40;
  }
  if ((*(long *)(lVar1 + 0x18) != 0) && (1 < *(uint *)(lVar1 + 0x3c))) {
    in_RAX = *(long **)(lVar1 + 0x28);
    plVar8 = (long *)*in_RAX;
LAB_00100a87:
    if (plVar8 != (long *)0x0) {
      lVar2 = plVar8[1];
      plVar4 = plVar8;
      while (lVar2 != 0) {
        lVar6 = 0;
        do {
          lVar7 = lVar2;
          cVar5 = _hashmap_variant_less_than((Variant *)(plVar4 + 2),(Variant *)(lVar7 + 0x10));
          if (cVar5 == '\0') {
            in_RAX = (long *)*plVar4;
            in_RDX = extraout_RDX;
            lVar7 = lVar6;
            plVar8 = in_RAX;
            if (lVar6 != 0) goto LAB_00100adc;
            goto LAB_00100a87;
          }
          lVar2 = *(long *)(lVar7 + 8);
          lVar6 = lVar7;
        } while (*(long *)(lVar7 + 8) != 0);
        in_RAX = (long *)*plVar4;
LAB_00100adc:
        in_RDX = (undefined8 *)plVar4[1];
        *in_RDX = in_RAX;
        if (in_RAX == (long *)0x0) {
          *(long *)(lVar1 + 0x30) = plVar4[1];
          in_RAX = *(long **)(lVar7 + 8);
          if (in_RAX == (long *)0x0) {
            *(long **)(lVar1 + 0x28) = plVar4;
          }
          else {
            *in_RAX = (long)plVar4;
          }
          *(long **)(lVar7 + 8) = plVar4;
          *plVar4 = lVar7;
          plVar4[1] = (long)in_RAX;
          goto LAB_00100b5b;
        }
        in_RAX[1] = plVar4[1];
        in_RDX = *(undefined8 **)(lVar7 + 8);
        if (in_RDX == (undefined8 *)0x0) {
          *(long **)(lVar1 + 0x28) = plVar4;
          *(long **)(lVar7 + 8) = plVar4;
          *plVar4 = lVar7;
          plVar4[1] = 0;
        }
        else {
          *in_RDX = plVar4;
          *(long **)(lVar7 + 8) = plVar4;
          *plVar4 = lVar7;
          plVar4[1] = (long)in_RDX;
        }
        plVar4 = in_RAX;
        lVar2 = in_RAX[1];
      }
      plVar8 = (long *)*plVar4;
      goto LAB_00100a87;
    }
  }
LAB_00100b5b:
  auVar9._8_8_ = in_RDX;
  auVar9._0_8_ = in_RAX;
  return auVar9;
}



/* Dictionary::_unref() const */

void __thiscall Dictionary::_unref(Dictionary *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  int *piVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  piVar4 = *(int **)this;
  if (piVar4 == (int *)0x0) {
    _err_print_error("_unref","core/variant/dictionary.cpp",0x142,"Parameter \"_p\" is null.",0,0);
    return;
  }
  LOCK();
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (*piVar4 != 0) goto LAB_00100d56;
  pvVar6 = *(void **)this;
  piVar4 = *(int **)((long)pvVar6 + 8);
  if (piVar4 != (int *)0x0) {
    if (Variant::needs_deinit[*piVar4] != '\0') {
      Variant::_clear_internal();
    }
    Memory::free_static(piVar4,false);
    pvVar6 = *(void **)this;
  }
  piVar4 = *(int **)((long)pvVar6 + 0x80);
  if (piVar4 != (int *)0x0) {
    if (Variant::needs_deinit[*piVar4] != '\0') {
      Variant::_clear_internal();
    }
    Memory::free_static(piVar4,false);
    pvVar6 = *(void **)this;
  }
  if (*(long *)((long)pvVar6 + 0x70) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)((long)pvVar6 + 0x70);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x68) != 0)) {
    StringName::unref();
  }
  if (*(long *)((long)pvVar6 + 0x50) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)((long)pvVar6 + 0x50);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x48) != 0)) {
    StringName::unref();
  }
  pvVar7 = *(void **)((long)pvVar6 + 0x18);
  if (pvVar7 == (void *)0x0) {
LAB_00100d4c:
    Memory::free_static(pvVar6,false);
  }
  else {
    if (*(int *)((long)pvVar6 + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)((long)pvVar6 + 0x3c) = 0;
        *(undefined1 (*) [16])((long)pvVar6 + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          piVar4 = (int *)(*(long *)((long)pvVar6 + 0x20) + lVar5);
          if (*piVar4 != 0) {
            *piVar4 = 0;
            pvVar7 = *(void **)((long)pvVar7 + lVar5 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x28)] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)((long)pvVar6 + 0x18);
            *(undefined8 *)((long)pvVar7 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)((long)pvVar6 + 0x3c) = 0;
        *(undefined1 (*) [16])((long)pvVar6 + 0x28) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00100d4c;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)((long)pvVar6 + 0x20),false);
    Memory::free_static(pvVar6,false);
  }
LAB_00100d56:
  *(undefined8 *)this = 0;
  return;
}



/* Dictionary::_ref(Dictionary const&) const */

void __thiscall Dictionary::_ref(Dictionary *this,Dictionary *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = *(int **)param_1;
  do {
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      return;
    }
    LOCK();
    iVar2 = *piVar3;
    bVar4 = iVar1 == iVar2;
    if (bVar4) {
      *piVar3 = iVar1 + 1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if (iVar2 != -1) {
    piVar3 = *(int **)param_1;
    if (piVar3 == *(int **)this) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      if (*(int **)this != (int *)0x0) {
        _unref(this);
        piVar3 = *(int **)param_1;
      }
      *(int **)this = piVar3;
    }
  }
  return;
}



/* Dictionary::recursive_hash(int) const */

uint __thiscall Dictionary::recursive_hash(Dictionary *this,int param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  if (param_1 < 0x65) {
    plVar3 = *(long **)(*(long *)this + 0x28);
    if (plVar3 == (long *)0x0) {
      uVar2 = 0xa0c1b158;
    }
    else {
      uVar2 = 0x176e7b6d;
      do {
        iVar1 = Variant::recursive_hash((int)plVar3 + 0x10);
        uVar2 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
        iVar1 = Variant::recursive_hash((int)plVar3 + 0x28);
        plVar3 = (long *)*plVar3;
        uVar2 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
        uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
      } while (plVar3 != (long *)0x0);
      uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
    }
    return uVar2;
  }
  _err_print_error("recursive_hash","core/variant/dictionary.cpp",0x155,"Max recursion reached",0,0)
  ;
  return 0;
}



/* Dictionary::hash() const */

void __thiscall Dictionary::hash(Dictionary *this)

{
  recursive_hash(this,0);
  return;
}



/* Dictionary::keys() const */

void Dictionary::keys(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  Variant *this;
  long *in_RSI;
  uint uVar4;
  Array *in_RDI;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  lVar2 = *in_RSI;
  uVar4 = (uint)in_RDI;
  if (*(int *)(lVar2 + 0x40) == 0) {
    iVar1 = *(int *)(lVar2 + 0x3c);
  }
  else {
    Variant::Variant((Variant *)local_48,*(Object **)(lVar2 + 0x50));
    StringName::StringName((StringName *)&local_50,(StringName *)(*in_RSI + 0x48));
    Array::set_typed(uVar4,(StringName *)(ulong)*(uint *)(*in_RSI + 0x40),(Variant *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar1 = *(int *)(*in_RSI + 0x3c);
  }
  if (iVar1 != 0) {
    Array::resize(uVar4);
    for (puVar3 = *(undefined8 **)(*in_RSI + 0x28); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      this = (Variant *)Array::operator[](uVar4);
      Variant::operator=(this,(Variant *)(puVar3 + 2));
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Dictionary::values() const */

void Dictionary::values(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  Variant *this;
  long *in_RSI;
  uint uVar4;
  Array *in_RDI;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  lVar2 = *in_RSI;
  uVar4 = (uint)in_RDI;
  if (*(int *)(lVar2 + 0x60) == 0) {
    iVar1 = *(int *)(lVar2 + 0x3c);
  }
  else {
    Variant::Variant((Variant *)local_48,*(Object **)(lVar2 + 0x70));
    StringName::StringName((StringName *)&local_50,(StringName *)(*in_RSI + 0x68));
    Array::set_typed(uVar4,(StringName *)(ulong)*(uint *)(*in_RSI + 0x60),(Variant *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar1 = *(int *)(*in_RSI + 0x3c);
  }
  if (iVar1 != 0) {
    Array::resize(uVar4);
    for (puVar3 = *(undefined8 **)(*in_RSI + 0x28); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      this = (Variant *)Array::operator[](uVar4);
      Variant::operator=(this,(Variant *)(puVar3 + 5));
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Dictionary::make_read_only() */

void __thiscall Dictionary::make_read_only(Dictionary *this)

{
  long lVar1;
  undefined4 *puVar2;
  
  if (*(long *)(*(long *)this + 8) != 0) {
    return;
  }
  puVar2 = (undefined4 *)operator_new(0x18,"");
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  lVar1 = *(long *)this;
  *puVar2 = 0;
  *(undefined4 **)(lVar1 + 8) = puVar2;
  return;
}



/* Dictionary::is_read_only() const */

undefined8 __thiscall Dictionary::is_read_only(Dictionary *this)

{
  return CONCAT71((int7)((ulong)*(long *)this >> 8),*(long *)(*(long *)this + 8) != 0);
}



/* Dictionary::set_typed(unsigned int, StringName const&, Variant const&, unsigned int, StringName
   const&, Variant const&) */

void Dictionary::set_typed
               (uint param_1,StringName *param_2,Variant *param_3,uint param_4,StringName *param_5,
               Variant *param_6)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  Object *pOVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 in_register_0000003c;
  long *plVar8;
  char *pcVar9;
  Object *pOVar10;
  
  plVar8 = (long *)CONCAT44(in_register_0000003c,param_1);
  puVar1 = (uint *)*plVar8;
  if (*(long *)(puVar1 + 2) != 0) {
    pcVar9 = "Dictionary is in read-only state.";
    pcVar6 = "Condition \"_p->read_only\" is true.";
    uVar7 = 0x25b;
LAB_001014be:
    _err_print_error("set_typed","core/variant/dictionary.cpp",uVar7,pcVar6,pcVar9,0);
    return;
  }
  if (puVar1[0xf] != 0) {
    pcVar9 = "Type can only be set when dictionary is empty.";
    pcVar6 = "Condition \"_p->variant_map.size() > 0\" is true.";
    uVar7 = 0x25c;
    goto LAB_001014be;
  }
  if (1 < *puVar1) {
    pcVar9 = "Type can only be set when dictionary has no more than one user.";
    pcVar6 = "Condition \"_p->refcount.get() > 1\" is true.";
    uVar7 = 0x25d;
    goto LAB_001014be;
  }
  if ((*(int *)(*plVar8 + 0x40) != 0) || (*(int *)(*plVar8 + 0x60) != 0)) {
    pcVar9 = "Type can only be set once.";
    pcVar6 = 
    "Condition \"_p->typed_key.type != Variant::NIL || _p->typed_value.type != Variant::NIL\" is true."
    ;
    uVar7 = 0x25e;
    goto LAB_001014be;
  }
  if (((*(long *)param_3 != 0) && ((int)param_2 != 0x18)) ||
     ((*(long *)param_6 != 0 && ((int)param_5 != 0x18)))) {
    pcVar9 = "Class names can only be set for type OBJECT.";
    pcVar6 = 
    "Condition \"(p_key_class_name != StringName() && p_key_type != Variant::OBJECT) || (p_value_class_name != StringName() && p_value_type != Variant::OBJECT)\" is true."
    ;
    uVar7 = 0x25f;
    goto LAB_001014be;
  }
  lVar3 = Variant::get_validated_object();
  if (((lVar3 == 0) ||
      (pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&Script::typeinfo,0),
      pOVar4 == (Object *)0x0)) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pOVar4 = (Object *)0x0;
  }
  else if (*(long *)param_3 == 0) {
    _err_print_error("set_typed","core/variant/dictionary.cpp",0x261,
                     "Condition \"key_script.is_valid() && p_key_class_name == StringName()\" is true."
                     ,"Script class can only be set together with base class name.",0,0);
    goto LAB_0010151c;
  }
  lVar3 = Variant::get_validated_object();
  pOVar10 = (Object *)0x0;
  if (((lVar3 != 0) &&
      (pOVar5 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&Script::typeinfo,0),
      pOVar5 != (Object *)0x0)) &&
     ((cVar2 = RefCounted::reference(), cVar2 != '\0' && (pOVar10 = pOVar5, *(long *)param_6 == 0)))
     ) {
    _err_print_error("set_typed","core/variant/dictionary.cpp",0x263,
                     "Condition \"value_script.is_valid() && p_value_class_name == StringName()\" is true."
                     ,"Script class can only be set together with base class name.",0,0);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    goto LAB_0010151c;
  }
  lVar3 = *plVar8;
  *(int *)(lVar3 + 0x40) = (int)param_2;
  StringName::operator=((StringName *)(lVar3 + 0x48),(StringName *)param_3);
  lVar3 = *plVar8;
  pOVar5 = *(Object **)(lVar3 + 0x50);
  if (pOVar4 != pOVar5) {
    *(Object **)(lVar3 + 0x50) = pOVar4;
    if ((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0x50) = 0;
    }
    if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    lVar3 = *plVar8;
  }
  *(char **)(lVar3 + 0x58) = "TypedDictionary.Key";
  *(int *)(lVar3 + 0x60) = (int)param_5;
  StringName::operator=((StringName *)(lVar3 + 0x68),(StringName *)param_6);
  lVar3 = *plVar8;
  pOVar5 = *(Object **)(lVar3 + 0x70);
  if (pOVar10 == pOVar5) {
LAB_001016c6:
    *(char **)(lVar3 + 0x78) = "TypedDictionary.Value";
    if (pOVar10 != (Object *)0x0) {
LAB_0010147e:
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
  }
  else {
    *(Object **)(lVar3 + 0x70) = pOVar10;
    if (pOVar10 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(lVar3 + 0x70) = 0;
      }
      if ((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
LAB_001016a0:
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        lVar3 = *plVar8;
        goto LAB_001016c6;
      }
      *(char **)(*plVar8 + 0x78) = "TypedDictionary.Value";
      goto LAB_0010147e;
    }
    if (pOVar5 == (Object *)0x0) {
      *(char **)(lVar3 + 0x78) = "TypedDictionary.Value";
    }
    else {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') goto LAB_001016a0;
      *(char **)(*plVar8 + 0x78) = "TypedDictionary.Value";
    }
  }
  if (pOVar4 == (Object *)0x0) {
    return;
  }
LAB_0010151c:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Dictionary::set_typed(ContainerType const&, ContainerType const&) */

void __thiscall
Dictionary::set_typed(Dictionary *this,ContainerType *param_1,ContainerType *param_2)

{
  char cVar1;
  uint uVar2;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,*(Object **)(param_1 + 0x10));
  uVar2 = *(uint *)param_2;
  Variant::Variant((Variant *)local_78,*(Object **)(param_1 + 0x10));
  set_typed((uint)this,(StringName *)(ulong)*(uint *)param_1,(Variant *)(param_1 + 8),(uint)local_78
            ,(StringName *)(ulong)uVar2,(Variant *)(param_2 + 8));
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::is_typed() const */

undefined4 __thiscall Dictionary::is_typed(Dictionary *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(*(long *)this + 0x40) == 0) {
    iVar1 = *(int *)(*(long *)this + 0x60);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* Dictionary::is_typed_key() const */

undefined4 __thiscall Dictionary::is_typed_key(Dictionary *this)

{
  return CONCAT31((int3)((uint)*(int *)(*(long *)this + 0x40) >> 8),
                  *(int *)(*(long *)this + 0x40) != 0);
}



/* Dictionary::is_typed_value() const */

undefined4 __thiscall Dictionary::is_typed_value(Dictionary *this)

{
  return CONCAT31((int3)((uint)*(int *)(*(long *)this + 0x60) >> 8),
                  *(int *)(*(long *)this + 0x60) != 0);
}



/* Dictionary::is_same_typed(Dictionary const&) const */

bool __thiscall Dictionary::is_same_typed(Dictionary *this,Dictionary *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)this;
  bVar3 = false;
  if ((((*(int *)(lVar2 + 0x40) == *(int *)(lVar1 + 0x40)) &&
       (*(long *)(lVar2 + 0x48) == *(long *)(lVar1 + 0x48))) &&
      (*(long *)(lVar2 + 0x50) == *(long *)(lVar1 + 0x50))) &&
     ((bVar3 = false, *(int *)(lVar2 + 0x60) == *(int *)(lVar1 + 0x60) &&
      (*(long *)(lVar2 + 0x68) == *(long *)(lVar1 + 0x68))))) {
    bVar3 = *(long *)(lVar2 + 0x70) == *(long *)(lVar1 + 0x70);
  }
  return bVar3;
}



/* Dictionary::is_same_typed_key(Dictionary const&) const */

bool __thiscall Dictionary::is_same_typed_key(Dictionary *this,Dictionary *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)this;
  if ((*(int *)(lVar2 + 0x40) == *(int *)(lVar1 + 0x40)) &&
     (*(long *)(lVar2 + 0x48) == *(long *)(lVar1 + 0x48))) {
    return *(long *)(lVar2 + 0x50) == *(long *)(lVar1 + 0x50);
  }
  return false;
}



/* Dictionary::is_same_typed_value(Dictionary const&) const */

bool __thiscall Dictionary::is_same_typed_value(Dictionary *this,Dictionary *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)this;
  if ((*(int *)(lVar2 + 0x60) == *(int *)(lVar1 + 0x60)) &&
     (*(long *)(lVar2 + 0x68) == *(long *)(lVar1 + 0x68))) {
    return *(long *)(lVar2 + 0x70) == *(long *)(lVar1 + 0x70);
  }
  return false;
}



/* Dictionary::get_key_type() const */

void Dictionary::get_key_type(void)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long *in_RSI;
  undefined4 *in_RDI;
  
  *(undefined1 (*) [16])(in_RDI + 2) = (undefined1  [16])0x0;
  lVar1 = *in_RSI;
  *in_RDI = *(undefined4 *)(lVar1 + 0x40);
  StringName::operator=((StringName *)(in_RDI + 2),(StringName *)(lVar1 + 0x48));
  pOVar2 = *(Object **)(in_RDI + 4);
  pOVar3 = *(Object **)(*in_RSI + 0x50);
  if (pOVar3 != pOVar2) {
    *(Object **)(in_RDI + 4) = pOVar3;
    if (pOVar3 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(in_RDI + 4) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  return;
}



/* Dictionary::get_value_type() const */

void Dictionary::get_value_type(void)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long *in_RSI;
  undefined4 *in_RDI;
  
  *(undefined1 (*) [16])(in_RDI + 2) = (undefined1  [16])0x0;
  lVar1 = *in_RSI;
  *in_RDI = *(undefined4 *)(lVar1 + 0x60);
  StringName::operator=((StringName *)(in_RDI + 2),(StringName *)(lVar1 + 0x68));
  pOVar2 = *(Object **)(in_RDI + 4);
  pOVar3 = *(Object **)(*in_RSI + 0x70);
  if (pOVar3 != pOVar2) {
    *(Object **)(in_RDI + 4) = pOVar3;
    if (pOVar3 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(in_RDI + 4) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  return;
}



/* Dictionary::get_typed_key_builtin() const */

undefined4 __thiscall Dictionary::get_typed_key_builtin(Dictionary *this)

{
  return *(undefined4 *)(*(long *)this + 0x40);
}



/* Dictionary::get_typed_value_builtin() const */

undefined4 __thiscall Dictionary::get_typed_value_builtin(Dictionary *this)

{
  return *(undefined4 *)(*(long *)this + 0x60);
}



/* Dictionary::get_typed_key_class_name() const */

void Dictionary::get_typed_key_class_name(void)

{
  long *in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(*in_RSI + 0x48));
  return;
}



/* Dictionary::get_typed_value_class_name() const */

void Dictionary::get_typed_value_class_name(void)

{
  long *in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(*in_RSI + 0x68));
  return;
}



/* Dictionary::get_typed_key_script() const */

void Dictionary::get_typed_key_script(void)

{
  long *in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,*(Object **)(*in_RSI + 0x50));
  return;
}



/* Dictionary::get_typed_value_script() const */

void Dictionary::get_typed_value_script(void)

{
  long *in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,*(Object **)(*in_RSI + 0x70));
  return;
}



/* Dictionary::TEMPNAMEPLACEHOLDERVALUE(Dictionary const&) */

void __thiscall Dictionary::operator=(Dictionary *this,Dictionary *param_1)

{
  if (this != param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Dictionary::id() const */

undefined8 __thiscall Dictionary::id(Dictionary *this)

{
  return *(undefined8 *)this;
}



/* Dictionary::Dictionary(Dictionary const&) */

void __thiscall Dictionary::Dictionary(Dictionary *this,Dictionary *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  *(undefined8 *)this = 0;
  piVar3 = *(int **)param_1;
  do {
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      return;
    }
    LOCK();
    iVar2 = *piVar3;
    bVar4 = iVar1 == iVar2;
    if (bVar4) {
      *piVar3 = iVar1 + 1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if (iVar2 != -1) {
    piVar3 = *(int **)param_1;
    if (piVar3 == *(int **)this) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      if (*(int **)this != (int *)0x0) {
        _unref(this);
        piVar3 = *(int **)param_1;
      }
      *(int **)this = piVar3;
    }
  }
  return;
}



/* Dictionary::Dictionary() */

void __thiscall Dictionary::Dictionary(Dictionary *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x88,"");
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 2;
  puVar1[0x10] = 0;
  *(char **)(puVar1 + 0x16) = "container";
  puVar1[0x18] = 0;
  *(char **)(puVar1 + 0x1e) = "container";
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x1a) = (undefined1  [16])0x0;
  *(undefined4 **)this = puVar1;
  *puVar1 = 1;
  return;
}



/* Dictionary::~Dictionary() */

void __thiscall Dictionary::~Dictionary(Dictionary *this)

{
  _unref(this);
  return;
}



/* Dictionary::has(Variant const&) const */

ulong __thiscall Dictionary::has(Dictionary *this,Variant *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  Object *pOVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong *puVar25;
  StringName *pSVar26;
  long lVar27;
  long lVar28;
  long in_FS_OFFSET;
  bool bVar29;
  float fVar30;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar28 = *(long *)this;
  iVar20 = *(int *)(lVar28 + 0x40);
  if (iVar20 == 0) {
LAB_00101ee4:
    if (*(long *)(lVar28 + 0x18) != 0) {
LAB_00101eeb:
      if (*(int *)(lVar28 + 0x3c) != 0) {
        uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar28 + 0x38) * 4);
        uVar23 = CONCAT44(0,uVar24);
        lVar16 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar28 + 0x38) * 8);
        uVar14 = Variant::hash();
        lVar27 = *(long *)(lVar28 + 0x20);
        uVar19 = 1;
        if (uVar14 != 0) {
          uVar19 = uVar14;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar19 * lVar16;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar23;
        lVar21 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar27 + lVar21 * 4);
        iVar20 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar22 = 0;
          do {
            if (uVar19 == uVar14) {
              uVar15 = StringLikeVariantComparator::compare
                                 ((Variant *)
                                  (*(long *)(*(long *)(lVar28 + 0x18) + lVar21 * 8) + 0x10),param_1)
              ;
              if ((char)uVar15 != '\0') goto LAB_00101e92;
              lVar27 = *(long *)(lVar28 + 0x20);
            }
            uVar22 = uVar22 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar20 + 1) * lVar16;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar23;
            lVar21 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(lVar27 + lVar21 * 4);
            iVar20 = SUB164(auVar5 * auVar9,8);
          } while ((uVar14 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar16, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar23, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar24 + iVar20) - SUB164(auVar6 * auVar10,8)) * lVar16,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar23, uVar22 <= SUB164(auVar7 * auVar11,8)));
        }
      }
    }
  }
  else {
    if (iVar20 == local_78[0]) {
      if (iVar20 != 0x18) goto LAB_00101ee4;
      uVar15 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar15 == 0) goto LAB_00102080;
      uVar24 = (uint)uVar15 & 0xffffff;
      if (uVar24 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar23 = (ulong)local_88 >> 8;
          local_88 = (char *)(uVar23 << 8);
          LOCK();
          bVar29 = (char)ObjectDB::spin_lock == '\0';
          if (bVar29) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar29) break;
          local_88 = (char *)(uVar23 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar25 = (ulong *)((ulong)uVar24 * 0x10 + ObjectDB::object_slots);
        if ((uVar15 >> 0x18 & 0x7fffffffff) == (*puVar25 & 0x7fffffffff)) {
          plVar1 = (long *)puVar25[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar1 != (long *)0x0) {
            if (*(long *)(lVar28 + 0x48) == 0) {
LAB_00101fdc:
              lVar28 = *(long *)this;
              goto LAB_00101ee4;
            }
            if (plVar1[1] == 0) {
              pSVar26 = (StringName *)plVar1[0x23];
              if (pSVar26 == (StringName *)0x0) {
                pSVar26 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar26 = (StringName *)(plVar1[1] + 0x20);
            }
            StringName::StringName((StringName *)&local_b0,pSVar26);
            if (local_b0 == *(long *)(lVar28 + 0x48)) {
LAB_00102216:
              if (*(long *)(lVar28 + 0x50) == 0) {
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
LAB_00102080:
                  lVar28 = *(long *)this;
                  goto LAB_00101ee4;
                }
                goto LAB_00101fdc;
              }
              (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
              lVar16 = Variant::get_validated_object();
              if (lVar16 == 0) {
LAB_001025b7:
                cVar12 = Variant::needs_deinit[local_58[0]];
              }
              else {
                pOVar17 = (Object *)__dynamic_cast(lVar16,&Object::typeinfo,&Script::typeinfo,0);
                if (pOVar17 != (Object *)0x0) {
                  cVar12 = RefCounted::reference();
                  if (cVar12 == '\0') goto LAB_001025b7;
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar12 = (**(code **)(*(long *)pOVar17 + 0x1e8))(pOVar17);
                  if (cVar12 == '\0') {
                    plVar1 = *(long **)(lVar28 + 0x50);
                    if (plVar1[1] == 0) {
                      plVar18 = (long *)plVar1[0x23];
                      if (plVar18 == (long *)0x0) {
                        plVar18 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar18 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar16 = *plVar18;
                    if (lVar16 == 0) {
                      local_a8 = 0;
                    }
                    else {
                      local_a8 = 0;
                      if (*(char **)(lVar16 + 8) == (char *)0x0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_a8,(CowData *)(lVar16 + 0x10));
                      }
                      else {
                        String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar16 + 8));
                      }
                    }
                    pcVar3 = *(char **)(lVar28 + 0x58);
                    local_80 = 0;
                    local_a0 = 0;
                    if (pcVar3 != (char *)0x0) {
                      local_80 = strlen(pcVar3);
                    }
                    local_88 = pcVar3;
                    String::parse_latin1((StrRange *)&local_a0);
                    local_98 = 0;
                    local_88 = "use \'has\'";
                    local_80 = 9;
                    String::parse_latin1((StrRange *)&local_98);
                    local_90 = 0;
                    local_88 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_80 = 0x45;
                    String::parse_latin1((StrRange *)&local_90);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                               (StrRange *)&local_98,(StrRange *)&local_a0,
                               (CowData<char32_t> *)&local_a8);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  }
                  cVar13 = RefCounted::unreference();
                  if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar17), cVar13 != '\0')) {
                    (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
                    Memory::free_static(pOVar17,false);
                  }
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  if (cVar12 != '\0') goto LAB_00102080;
                  goto LAB_00101e62;
                }
                cVar12 = Variant::needs_deinit[local_58[0]];
              }
              if (cVar12 != '\0') {
                Variant::_clear_internal();
              }
              plVar1 = *(long **)(lVar28 + 0x50);
              if (plVar1[1] == 0) {
                plVar18 = (long *)plVar1[0x23];
                if (plVar18 == (long *)0x0) {
                  plVar18 = (long *)(**(code **)(*plVar1 + 0x40))();
                }
              }
              else {
                plVar18 = (long *)(plVar1[1] + 0x20);
              }
              lVar16 = *plVar18;
              if (lVar16 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar16 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar16 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar16 + 8));
                }
              }
              pcVar3 = *(char **)(lVar28 + 0x58);
              local_80 = 0;
              local_a0 = 0;
              if (pcVar3 != (char *)0x0) {
                local_80 = strlen(pcVar3);
              }
              local_88 = pcVar3;
              String::parse_latin1((StrRange *)&local_a0);
              local_88 = "use \'has\'";
              local_98 = 0;
              local_80 = 9;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
              local_90 = 0;
              local_80 = 0x45;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (StrRange *)&local_a0,(CowData<char32_t> *)&local_a8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                               "Condition \"other_script.is_null()\" is true. Returning: false",
                               (CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            else {
              if (plVar1[1] == 0) {
                pSVar26 = (StringName *)plVar1[0x23];
                if (pSVar26 == (StringName *)0x0) {
                  pSVar26 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar26 = (StringName *)(plVar1[1] + 0x20);
              }
              cVar12 = ClassDB::is_parent_class(pSVar26,(StringName *)(lVar28 + 0x48));
              if (cVar12 != '\0') goto LAB_00102216;
              lVar16 = *(long *)(lVar28 + 0x48);
              if (lVar16 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar16 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar16 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar16 + 8));
                }
              }
              uVar2 = *(undefined8 *)(lVar28 + 0x58);
              (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
              local_88 = "use \'has\'";
              local_98 = 0;
              local_80 = 9;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = 
              "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
              ;
              local_90 = 0;
              local_80 = 0x53;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,char_const*,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (CowData<char32_t> *)&local_a0,uVar2,(CowData<char32_t> *)&local_a8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                               "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                               ,(CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            if ((StringName::configured != '\0') && (local_b0 != 0)) {
              StringName::unref();
            }
            goto LAB_00101e62;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      pcVar3 = *(char **)(lVar28 + 0x58);
      local_80 = 0;
      local_a0 = 0;
      if (pcVar3 != (char *)0x0) {
        local_80 = strlen(pcVar3);
      }
      local_88 = pcVar3;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "use \'has\'";
      local_98 = 0;
      local_80 = 9;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange *)&local_90);
      vformat<String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                 (StrRange *)&local_a0);
      _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                       "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      if (local_78[0] == 0) {
        if (iVar20 == 0x18) {
          if (*(long *)(lVar28 + 0x18) == 0) {
            uVar15 = 0;
            goto LAB_00101ea5;
          }
          goto LAB_00101eeb;
        }
      }
      else if (iVar20 == 4) {
        if (local_78[0] == 0x15) {
          Variant::operator_cast_to_String((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          lVar28 = *(long *)this;
          goto LAB_00101ee4;
        }
      }
      else if (iVar20 == 0x15) {
        if (local_78[0] == 4) {
          Variant::operator_cast_to_StringName((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(StringName *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
            StringName::unref();
          }
          goto LAB_00102080;
        }
      }
      else if ((iVar20 == 3) && (local_78[0] == 2)) {
        fVar30 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar30);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        lVar28 = *(long *)this;
        local_70 = local_50;
        uStack_68 = uStack_48;
        goto LAB_00101ee4;
      }
      Variant::get_type_name(&local_90);
      uVar2 = *(undefined8 *)(lVar28 + 0x58);
      Variant::get_type_name(&local_98,local_78[0]);
      local_88 = "use \'has\'";
      local_a0 = 0;
      local_80 = 9;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String,String,char_const*,String>
                (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar2,&local_90);
      _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                       "Method/function failed. Returning: false",&local_88,0,0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar28 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
      }
      lVar28 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
      }
      lVar28 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
      }
      lVar28 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
      }
    }
LAB_00101e62:
    _err_print_error(&_LC51,"core/variant/dictionary.cpp",0xd2,
                     "Condition \"!_p->typed_key.validate(key, \"use \'has\'\")\" is true. Returning: false"
                     ,0,0);
  }
  uVar15 = 0;
LAB_00101e92:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
    uVar15 = uVar15 & 0xff;
  }
LAB_00101ea5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* Dictionary::has_all(Array const&) const */

undefined8 __thiscall Dictionary::has_all(Dictionary *this,Array *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  Variant *pVVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  Object *pOVar12;
  long *plVar13;
  size_t sVar14;
  int iVar15;
  uint uVar16;
  ulong *puVar17;
  StringName *pSVar18;
  long in_FS_OFFSET;
  bool bVar19;
  float fVar20;
  CowData<char32_t> *local_d0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = Array::size();
  if (0 < iVar7) {
    do {
      pVVar8 = (Variant *)Array::operator[]((int)param_1);
      Variant::Variant((Variant *)local_78,pVVar8);
      lVar2 = *(long *)this;
      iVar7 = *(int *)(lVar2 + 0x40);
      if (iVar7 == 0) goto LAB_00102e07;
      if (iVar7 == local_78[0]) {
        if ((iVar7 != 0x18) ||
           (uVar10 = Variant::operator_cast_to_ObjectID((Variant *)local_78), uVar10 == 0))
        goto LAB_00102e07;
        uVar16 = (uint)uVar10 & 0xffffff;
        if (uVar16 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar4 = (ulong)local_88 >> 8;
            local_88 = (char *)(uVar4 << 8);
            LOCK();
            bVar19 = (char)ObjectDB::spin_lock == '\0';
            if (bVar19) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar19) break;
            local_88 = (char *)(uVar4 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar17 = (ulong *)((ulong)uVar16 * 0x10 + ObjectDB::object_slots);
          if ((uVar10 >> 0x18 & 0x7fffffffff) == (*puVar17 & 0x7fffffffff)) {
            plVar1 = (long *)puVar17[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar2 + 0x48) == 0) goto LAB_00102e07;
              if (plVar1[1] == 0) {
                pSVar18 = (StringName *)plVar1[0x23];
                if (pSVar18 == (StringName *)0x0) {
                  pSVar18 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar18 = (StringName *)(plVar1[1] + 0x20);
              }
              StringName::StringName((StringName *)&local_b0,pSVar18);
              if (local_b0 == *(long *)(lVar2 + 0x48)) {
LAB_00102f3e:
                if (*(long *)(lVar2 + 0x50) == 0) {
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00102e07;
                }
                (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
                lVar11 = Variant::get_validated_object();
                if (lVar11 == 0) {
LAB_0010324b:
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                else {
                  pOVar12 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo,0);
                  if (pOVar12 != (Object *)0x0) {
                    cVar5 = RefCounted::reference();
                    if (cVar5 != '\0') {
                      if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      cVar5 = (**(code **)(*(long *)pOVar12 + 0x1e8))();
                      if (cVar5 == '\0') {
                        plVar1 = *(long **)(lVar2 + 0x50);
                        if (plVar1[1] == 0) {
                          plVar13 = (long *)plVar1[0x23];
                          if (plVar13 == (long *)0x0) {
                            plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
                          }
                        }
                        else {
                          plVar13 = (long *)(plVar1[1] + 0x20);
                        }
                        lVar11 = *plVar13;
                        if (lVar11 == 0) {
                          local_a8 = 0;
                        }
                        else {
                          pcVar3 = *(char **)(lVar11 + 8);
                          local_a8 = 0;
                          if (pcVar3 == (char *)0x0) {
                            if (*(long *)(lVar11 + 0x10) != 0) {
                              CowData<char32_t>::_ref
                                        ((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
                            }
                          }
                          else {
                            local_80 = strlen(pcVar3);
                            local_88 = pcVar3;
                            String::parse_latin1((StrRange *)&local_a8);
                          }
                        }
                        local_d0 = (CowData<char32_t> *)&local_a8;
                        pcVar3 = *(char **)(lVar2 + 0x58);
                        sVar14 = 0;
                        local_a0 = 0;
                        if (pcVar3 != (char *)0x0) {
                          sVar14 = strlen(pcVar3);
                        }
                        local_88 = pcVar3;
                        local_80 = sVar14;
                        String::parse_latin1((StrRange *)&local_a0);
                        local_88 = "use \'has_all\'";
                        local_98 = 0;
                        local_80 = 0xd;
                        String::parse_latin1((StrRange *)&local_98);
                        local_88 = 
                        "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                        local_90 = 0;
                        local_80 = 0x45;
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<String,String,String>
                                  ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                                   (StrRange *)&local_98,(StrRange *)&local_a0,local_d0);
                        _err_print_error("validate_object",
                                         "./core/variant/container_type_validate.h",0x92,
                                         "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                         ,(CowData<char32_t> *)&local_88,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref(local_d0);
                      }
                      cVar6 = RefCounted::unreference();
                      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                        Memory::free_static(pOVar12,false);
                      }
                      if ((StringName::configured != '\0') && (local_b0 != 0)) {
                        StringName::unref();
                      }
                      if (cVar5 == '\0') goto LAB_00102d94;
                      goto LAB_00102e07;
                    }
                    goto LAB_0010324b;
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                plVar1 = *(long **)(lVar2 + 0x50);
                if (plVar1[1] == 0) {
                  plVar13 = (long *)plVar1[0x23];
                  if (plVar13 == (long *)0x0) {
                    plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
                  }
                }
                else {
                  plVar13 = (long *)(plVar1[1] + 0x20);
                }
                lVar11 = *plVar13;
                if (lVar11 == 0) {
                  local_a8 = 0;
                }
                else {
                  pcVar3 = *(char **)(lVar11 + 8);
                  if (pcVar3 == (char *)0x0) {
                    local_a8 = 0;
                    if (*(long *)(lVar11 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
                    }
                  }
                  else {
                    local_a8 = 0;
                    local_80 = strlen(pcVar3);
                    local_88 = pcVar3;
                    String::parse_latin1((StrRange *)&local_a8);
                  }
                }
                pcVar3 = *(char **)(lVar2 + 0x58);
                sVar14 = 0;
                local_a0 = 0;
                if (pcVar3 != (char *)0x0) {
                  sVar14 = strlen(pcVar3);
                }
                local_88 = pcVar3;
                local_80 = sVar14;
                String::parse_latin1((StrRange *)&local_a0);
                local_88 = "use \'has_all\'";
                local_98 = 0;
                local_80 = 0xd;
                String::parse_latin1((StrRange *)&local_98);
                local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                ;
                local_90 = 0;
                local_80 = 0x45;
                String::parse_latin1((StrRange *)&local_90);
                vformat<String,String,String>
                          ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                           (StrRange *)&local_98,(StrRange *)&local_a0,
                           (CowData<char32_t> *)&local_a8);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                                 "Condition \"other_script.is_null()\" is true. Returning: false",
                                 (CowData<char32_t> *)&local_88,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              else {
                if (plVar1[1] == 0) {
                  pSVar18 = (StringName *)plVar1[0x23];
                  if (pSVar18 == (StringName *)0x0) {
                    pSVar18 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar18 = (StringName *)(plVar1[1] + 0x20);
                }
                cVar5 = ClassDB::is_parent_class(pSVar18,(StringName *)(lVar2 + 0x48));
                if (cVar5 != '\0') goto LAB_00102f3e;
                lVar11 = *(long *)(lVar2 + 0x48);
                if (lVar11 == 0) {
                  local_a8 = 0;
                }
                else {
                  pcVar3 = *(char **)(lVar11 + 8);
                  local_a8 = 0;
                  if (pcVar3 == (char *)0x0) {
                    if (*(long *)(lVar11 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
                    }
                  }
                  else {
                    local_80 = strlen(pcVar3);
                    local_88 = pcVar3;
                    String::parse_latin1((StrRange *)&local_a8);
                  }
                }
                uVar9 = *(undefined8 *)(lVar2 + 0x58);
                (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
                local_88 = "use \'has_all\'";
                local_98 = 0;
                local_80 = 0xd;
                String::parse_latin1((StrRange *)&local_98);
                local_88 = 
                "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                ;
                local_90 = 0;
                local_80 = 0x53;
                String::parse_latin1((StrRange *)&local_90);
                vformat<String,String,char_const*,String>
                          ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                           (StrRange *)&local_98,(CowData<char32_t> *)&local_a0,uVar9,
                           (CowData<char32_t> *)&local_a8);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                                 "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                                 ,(CowData<char32_t> *)&local_88,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
              goto LAB_00102d94;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        pcVar3 = *(char **)(lVar2 + 0x58);
        sVar14 = 0;
        local_a0 = 0;
        if (pcVar3 != (char *)0x0) {
          sVar14 = strlen(pcVar3);
        }
        local_88 = pcVar3;
        local_80 = sVar14;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "use \'has_all\'";
        local_98 = 0;
        local_80 = 0xd;
        String::parse_latin1((StrRange *)&local_98);
        local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
        local_90 = 0;
        local_80 = 0x4b;
        String::parse_latin1((StrRange *)&local_90);
        vformat<String,String>
                  (&local_88,(StrRange *)&local_90,(StrRange *)&local_98,(StrRange *)&local_a0);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",&local_88,0,0);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
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
        lVar2 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
LAB_00102d94:
        _err_print_error("has_all","core/variant/dictionary.cpp",0xd9,
                         "Condition \"!_p->typed_key.validate(key, \"use \'has_all\'\")\" is true. Returning: false"
                         ,0,0);
LAB_00102db9:
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar9 = 0;
        goto LAB_00102dce;
      }
      if (local_78[0] == 0) {
        if (iVar7 != 0x18) goto LAB_00102bdd;
      }
      else if (iVar7 == 4) {
        if (local_78[0] != 0x15) goto LAB_00102bdd;
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar3 = local_88;
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
      }
      else if (iVar7 == 0x15) {
        if (local_78[0] != 4) {
LAB_00102bdd:
          Variant::get_type_name(&local_90);
          uVar9 = *(undefined8 *)(lVar2 + 0x58);
          Variant::get_type_name(&local_98,local_78[0]);
          local_88 = "use \'has_all\'";
          local_a0 = 0;
          local_80 = 0xd;
          String::parse_latin1((StrRange *)&local_a0);
          local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
          local_a8 = 0;
          local_80 = 0x3f;
          String::parse_latin1((StrRange *)&local_a8);
          vformat<String,String,char_const*,String>
                    (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar9,&local_90
                    );
          _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                           "Method/function failed. Returning: false",&local_88,0,0);
          pcVar3 = local_88;
          if (local_88 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          lVar2 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
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
          goto LAB_00102d94;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        if ((iVar7 != 3) || (local_78[0] != 2)) goto LAB_00102bdd;
        fVar20 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar20);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_70 = local_50;
        uStack_68 = uStack_48;
        local_78[0] = local_58[0];
      }
LAB_00102e07:
      cVar5 = has(this,(Variant *)local_78);
      if (cVar5 == '\0') goto LAB_00102db9;
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar15 = iVar15 + 1;
      iVar7 = Array::size();
    } while (iVar15 < iVar7);
  }
  uVar9 = 1;
LAB_00102dce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::find_key(Variant const&) const */

Variant * Dictionary::find_key(Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  Object *pOVar12;
  long *plVar13;
  Variant *in_RDX;
  uint uVar14;
  long *in_RSI;
  StringName *pSVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  CowData<char32_t> *local_e8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  lVar16 = *in_RSI;
  iVar2 = *(int *)(lVar16 + 0x60);
  if (iVar2 == 0) {
LAB_00103d20:
    for (puVar4 = *(undefined8 **)(lVar16 + 0x28); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      cVar7 = Variant::operator==((Variant *)(puVar4 + 5),(Variant *)local_78);
      if (cVar7 != '\0') {
        Variant::Variant(param_1,(Variant *)(puVar4 + 2));
        goto LAB_00103d5a;
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00103d5a:
    cVar7 = Variant::needs_deinit[local_78[0]];
    goto joined_r0x00103d65;
  }
  if (iVar2 == local_78[0]) {
    if (iVar2 != 0x18) goto LAB_00103d20;
    uVar9 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
    if (uVar9 == 0) goto LAB_00103e4d;
    uVar14 = (uint)uVar9 & 0xffffff;
    if (uVar14 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar6 = (ulong)local_88 >> 8;
        local_88 = (char *)(uVar6 << 8);
        LOCK();
        bVar17 = (char)ObjectDB::spin_lock == '\0';
        if (bVar17) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar17) break;
        local_88 = (char *)(uVar6 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar10 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
      if ((uVar9 >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
        plVar1 = (long *)puVar10[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar16 + 0x68) == 0) {
LAB_00103d93:
            lVar16 = *in_RSI;
            goto LAB_00103d20;
          }
          pSVar15 = (StringName *)(plVar1[1] + 0x20);
          if ((plVar1[1] == 0) &&
             (pSVar15 = (StringName *)plVar1[0x23], pSVar15 == (StringName *)0x0)) {
            pSVar15 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
          }
          StringName::StringName((StringName *)&local_b0,pSVar15);
          if (local_b0 == *(long *)(lVar16 + 0x68)) {
LAB_00104050:
            if (*(long *)(lVar16 + 0x70) == 0) {
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
LAB_00103e4d:
                lVar16 = *in_RSI;
                goto LAB_00103d20;
              }
              goto LAB_00103d93;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar11 = Variant::get_validated_object();
            if (lVar11 == 0) {
LAB_0010430c:
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar12 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo);
              if (pOVar12 != (Object *)0x0) {
                cVar7 = RefCounted::reference();
                if (cVar7 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar7 = (**(code **)(*(long *)pOVar12 + 0x1e8))();
                  if (cVar7 == '\0') {
                    plVar1 = *(long **)(lVar16 + 0x70);
                    if (plVar1[1] == 0) {
                      plVar13 = (long *)plVar1[0x23];
                      if (plVar13 == (long *)0x0) {
                        plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar13 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar11 = *plVar13;
                    if (lVar11 == 0) {
                      local_a8 = 0;
                    }
                    else {
                      local_a8 = 0;
                      if (*(char **)(lVar11 + 8) == (char *)0x0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
                      }
                      else {
                        String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
                      }
                    }
                    local_e8 = (CowData<char32_t> *)&local_a8;
                    pcVar5 = *(char **)(lVar16 + 0x78);
                    local_80 = 0;
                    local_a0 = 0;
                    if (pcVar5 != (char *)0x0) {
                      local_80 = strlen(pcVar5);
                    }
                    local_88 = pcVar5;
                    String::parse_latin1((StrRange *)&local_a0);
                    local_98 = 0;
                    local_88 = "find_key";
                    local_80 = 8;
                    String::parse_latin1((StrRange *)&local_98);
                    local_90 = 0;
                    local_88 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_80 = 0x45;
                    String::parse_latin1((StrRange *)&local_90);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                               (StrRange *)&local_98,(StrRange *)&local_a0,local_e8);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref(local_e8);
                  }
                  cVar8 = RefCounted::unreference();
                  if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar12), cVar8 != '\0')) {
                    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                    Memory::free_static(pOVar12,false);
                  }
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  if (cVar7 == '\0') goto LAB_00103cbf;
                  goto LAB_00103e4d;
                }
                goto LAB_0010430c;
              }
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar7 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar16 + 0x70);
            if (plVar1[1] == 0) {
              plVar13 = (long *)plVar1[0x23];
              if (plVar13 == (long *)0x0) {
                plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar13 = (long *)(plVar1[1] + 0x20);
            }
            lVar11 = *plVar13;
            if (lVar11 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar11 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
              }
            }
            local_e8 = (CowData<char32_t> *)&local_a8;
            pcVar5 = *(char **)(lVar16 + 0x78);
            local_80 = 0;
            local_a0 = 0;
            if (pcVar5 != (char *)0x0) {
              local_80 = strlen(pcVar5);
            }
            local_88 = pcVar5;
            String::parse_latin1((StrRange *)&local_a0);
            local_88 = "find_key";
            local_98 = 0;
            local_80 = 8;
            String::parse_latin1((StrRange *)&local_98);
            local_90 = 0;
            local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_80 = 0x45;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (StrRange *)&local_a0,local_e8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e8);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar15 = (StringName *)plVar1[0x23];
              if (pSVar15 == (StringName *)0x0) {
                pSVar15 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar15 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar7 = ClassDB::is_parent_class(pSVar15,(StringName *)(lVar16 + 0x68));
            if (cVar7 != '\0') goto LAB_00104050;
            lVar11 = *(long *)(lVar16 + 0x68);
            if (lVar11 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar11 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
              }
            }
            local_e8 = (CowData<char32_t> *)&local_a8;
            uVar3 = *(undefined8 *)(lVar16 + 0x78);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
            local_88 = "find_key";
            local_98 = 0;
            local_80 = 8;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0;
            local_80 = 0x53;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (CowData<char32_t> *)&local_a0,uVar3,local_e8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e8);
          }
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
          goto LAB_00103cbf;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar5 = *(char **)(lVar16 + 0x78);
    local_80 = 0;
    local_a0 = 0;
    if (pcVar5 != (char *)0x0) {
      local_80 = strlen(pcVar5);
    }
    local_88 = pcVar5;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = 0;
    local_88 = "find_key";
    local_80 = 8;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_90 = 0;
    local_80 = 0x4b;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String,String>
              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
               (StrRange *)&local_a0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
    if (local_78[0] == 0) {
      if (iVar2 == 0x18) goto LAB_00103d20;
    }
    else if (iVar2 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        lVar16 = *in_RSI;
        goto LAB_00103d20;
      }
    }
    else if (iVar2 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_00103e4d;
      }
    }
    else if ((local_78[0] == 2) && (iVar2 == 3)) {
      fVar18 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar18);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      lVar16 = *in_RSI;
      local_70 = local_50;
      uStack_68 = uStack_48;
      goto LAB_00103d20;
    }
    Variant::get_type_name(&local_90);
    uVar3 = *(undefined8 *)(lVar16 + 0x78);
    Variant::get_type_name(&local_98,local_78[0]);
    local_88 = "find_key";
    local_a0 = 0;
    local_80 = 8;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar16 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    lVar16 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    lVar16 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    lVar16 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
  }
LAB_00103cbf:
  _err_print_error("find_key","core/variant/dictionary.cpp",0xe3,
                   "Condition \"!_p->typed_value.validate(value, \"find_key\")\" is true. Returning: Variant()"
                   ,0,0);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  cVar7 = Variant::needs_deinit[local_78[0]];
joined_r0x00103d65:
  if (cVar7 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Dictionary::getptr(Variant const&) */

Variant * __thiscall Dictionary::getptr(Dictionary *this,Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  Variant *pVVar17;
  ulong uVar18;
  long lVar19;
  Object *pOVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  StringName *pSVar28;
  long lVar29;
  long lVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  CowData<char32_t> *local_d8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar30 = *(long *)this;
  iVar2 = *(int *)(lVar30 + 0x40);
  if (iVar2 == 0) {
LAB_00104ae5:
    if ((*(long *)(lVar30 + 0x18) != 0) && (*(int *)(lVar30 + 0x3c) != 0)) {
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar30 + 0x38) * 4);
      lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar30 + 0x38) * 8);
      uVar16 = Variant::hash();
      uVar18 = CONCAT44(0,uVar26);
      lVar29 = *(long *)(lVar30 + 0x20);
      uVar22 = 1;
      if (uVar16 != 0) {
        uVar22 = uVar16;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar22 * lVar19;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      lVar24 = SUB168(auVar5 * auVar9,8);
      uVar16 = *(uint *)(lVar29 + lVar24 * 4);
      uVar23 = SUB164(auVar5 * auVar9,8);
      if (uVar16 != 0) {
        uVar25 = 0;
        do {
          if (uVar16 == uVar22) {
            cVar14 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(*(long *)(lVar30 + 0x18) + lVar24 * 8) + 0x10)
                                ,(Variant *)local_78);
            if (cVar14 != '\0') {
              lVar30 = *(long *)(*(long *)(lVar30 + 0x18) + (ulong)uVar23 * 8);
              if (lVar30 == 0) goto LAB_00104ac3;
              pVVar17 = (Variant *)(lVar30 + 0x28);
              if (*(Variant **)(*(long *)this + 8) != (Variant *)0x0) {
                Variant::operator=(*(Variant **)(*(long *)this + 8),pVVar17);
                pVVar17 = *(Variant **)(*(long *)this + 8);
              }
              goto LAB_00104c34;
            }
            lVar29 = *(long *)(lVar30 + 0x20);
          }
          uVar25 = uVar25 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar23 + 1) * lVar19;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar18;
          lVar24 = SUB168(auVar6 * auVar10,8);
          uVar16 = *(uint *)(lVar29 + lVar24 * 4);
          uVar23 = SUB164(auVar6 * auVar10,8);
        } while ((uVar16 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar19, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar18, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar26 + uVar23) - SUB164(auVar7 * auVar11,8)) * lVar19,
                auVar12._8_8_ = 0, auVar12._0_8_ = uVar18, uVar25 <= SUB164(auVar8 * auVar12,8)));
        pVVar17 = (Variant *)0x0;
        goto LAB_00104c34;
      }
    }
LAB_00104ac3:
    pVVar17 = (Variant *)0x0;
  }
  else {
    if (iVar2 == local_78[0]) {
      if (iVar2 != 0x18) goto LAB_00104ae5;
      uVar18 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar18 == 0) goto LAB_00104d18;
      uVar26 = (uint)uVar18 & 0xffffff;
      if (uVar26 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar13 = (ulong)local_88 >> 8;
          local_88 = (char *)(uVar13 << 8);
          LOCK();
          bVar31 = (char)ObjectDB::spin_lock == '\0';
          if (bVar31) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar31) break;
          local_88 = (char *)(uVar13 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar27 = (ulong *)((ulong)uVar26 * 0x10 + ObjectDB::object_slots);
        if ((uVar18 >> 0x18 & 0x7fffffffff) == (*puVar27 & 0x7fffffffff)) {
          plVar1 = (long *)puVar27[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar1 != (long *)0x0) {
            if (*(long *)(lVar30 + 0x48) == 0) {
LAB_00104be7:
              lVar30 = *(long *)this;
              goto LAB_00104ae5;
            }
            if (plVar1[1] == 0) {
              pSVar28 = (StringName *)plVar1[0x23];
              if (pSVar28 == (StringName *)0x0) {
                pSVar28 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar28 = (StringName *)(plVar1[1] + 0x20);
            }
            StringName::StringName((StringName *)&local_b0,pSVar28);
            if (local_b0 == *(long *)(lVar30 + 0x48)) {
LAB_00104eb6:
              if (*(long *)(lVar30 + 0x50) == 0) {
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
LAB_00104d18:
                  lVar30 = *(long *)this;
                  goto LAB_00104ae5;
                }
                goto LAB_00104be7;
              }
              (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
              lVar19 = Variant::get_validated_object();
              if (lVar19 == 0) {
LAB_00105223:
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              else {
                pOVar20 = (Object *)__dynamic_cast(lVar19,&Object::typeinfo,&Script::typeinfo,0);
                if (pOVar20 != (Object *)0x0) {
                  cVar14 = RefCounted::reference();
                  if (cVar14 != '\0') {
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    cVar14 = (**(code **)(*(long *)pOVar20 + 0x1e8))(pOVar20);
                    if (cVar14 == '\0') {
                      plVar1 = *(long **)(lVar30 + 0x50);
                      if (plVar1[1] == 0) {
                        plVar21 = (long *)plVar1[0x23];
                        if (plVar21 == (long *)0x0) {
                          plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                        }
                      }
                      else {
                        plVar21 = (long *)(plVar1[1] + 0x20);
                      }
                      lVar19 = *plVar21;
                      if (lVar19 == 0) {
                        local_a8 = 0;
                      }
                      else {
                        local_a8 = 0;
                        if (*(char **)(lVar19 + 8) == (char *)0x0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10));
                        }
                        else {
                          String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                        }
                      }
                      local_d8 = (CowData<char32_t> *)&local_a8;
                      pcVar4 = *(char **)(lVar30 + 0x58);
                      local_80 = 0;
                      local_a0 = 0;
                      if (pcVar4 != (char *)0x0) {
                        local_80 = strlen(pcVar4);
                      }
                      local_88 = pcVar4;
                      String::parse_latin1((StrRange *)&local_a0);
                      local_98 = 0;
                      local_88 = "getptr";
                      local_80 = 6;
                      String::parse_latin1((StrRange *)&local_98);
                      local_90 = 0;
                      local_88 = 
                      "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                      local_80 = 0x45;
                      String::parse_latin1((StrRange *)&local_90);
                      vformat<String,String,String>
                                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                                 (StrRange *)&local_98,(StrRange *)&local_a0,local_d8);
                      _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                       0x92,
                                       "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                       ,(CowData<char32_t> *)&local_88,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                      CowData<char32_t>::_unref(local_d8);
                    }
                    cVar15 = RefCounted::unreference();
                    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar20), cVar15 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                    if ((StringName::configured != '\0') && (local_b0 != 0)) {
                      StringName::unref();
                    }
                    if (cVar14 == '\0') goto LAB_00104ac3;
                    goto LAB_00104d18;
                  }
                  goto LAB_00105223;
                }
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              if (cVar14 != '\0') {
                Variant::_clear_internal();
              }
              plVar1 = *(long **)(lVar30 + 0x50);
              if (plVar1[1] == 0) {
                plVar21 = (long *)plVar1[0x23];
                if (plVar21 == (long *)0x0) {
                  plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                }
              }
              else {
                plVar21 = (long *)(plVar1[1] + 0x20);
              }
              lVar19 = *plVar21;
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              local_d8 = (CowData<char32_t> *)&local_a8;
              pcVar4 = *(char **)(lVar30 + 0x58);
              local_80 = 0;
              local_a0 = 0;
              if (pcVar4 != (char *)0x0) {
                local_80 = strlen(pcVar4);
              }
              local_88 = pcVar4;
              String::parse_latin1((StrRange *)&local_a0);
              local_88 = "getptr";
              local_98 = 0;
              local_80 = 6;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
              local_90 = 0;
              local_80 = 0x45;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (StrRange *)&local_a0,local_d8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                               "Condition \"other_script.is_null()\" is true. Returning: false",
                               (CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref(local_d8);
              if (StringName::configured == '\0') goto LAB_00104ac3;
            }
            else {
              if (plVar1[1] == 0) {
                pSVar28 = (StringName *)plVar1[0x23];
                if (pSVar28 == (StringName *)0x0) {
                  pSVar28 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar28 = (StringName *)(plVar1[1] + 0x20);
              }
              cVar14 = ClassDB::is_parent_class(pSVar28,(StringName *)(lVar30 + 0x48));
              if (cVar14 != '\0') goto LAB_00104eb6;
              lVar19 = *(long *)(lVar30 + 0x48);
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              local_d8 = (CowData<char32_t> *)&local_a8;
              uVar3 = *(undefined8 *)(lVar30 + 0x58);
              (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
              local_88 = "getptr";
              local_98 = 0;
              local_80 = 6;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = 
              "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
              ;
              local_90 = 0;
              local_80 = 0x53;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,char_const*,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (CowData<char32_t> *)&local_a0,uVar3,local_d8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                               "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                               ,(CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref(local_d8);
              if (StringName::configured == '\0') {
                pVVar17 = (Variant *)0x0;
                goto LAB_00104c34;
              }
            }
            if (local_b0 != 0) {
              StringName::unref();
              pVVar17 = (Variant *)0x0;
              goto LAB_00104c34;
            }
            goto LAB_00104ac3;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      pcVar4 = *(char **)(lVar30 + 0x58);
      local_80 = 0;
      local_a0 = 0;
      if (pcVar4 != (char *)0x0) {
        local_80 = strlen(pcVar4);
      }
      local_88 = pcVar4;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "getptr";
      local_98 = 0;
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange *)&local_90);
      vformat<String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                 (StrRange *)&local_a0);
      _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                       "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      if (local_78[0] == 0) {
        if (iVar2 == 0x18) goto LAB_00104ae5;
      }
      else if (iVar2 == 4) {
        if (local_78[0] == 0x15) {
          Variant::operator_cast_to_String((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          lVar30 = *(long *)this;
          goto LAB_00104ae5;
        }
      }
      else if (iVar2 == 0x15) {
        if (local_78[0] == 4) {
          Variant::operator_cast_to_StringName((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(StringName *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
            StringName::unref();
          }
          goto LAB_00104d18;
        }
      }
      else if ((iVar2 == 3) && (local_78[0] == 2)) {
        fVar32 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar32);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        lVar30 = *(long *)this;
        local_70 = local_50;
        uStack_68 = uStack_48;
        goto LAB_00104ae5;
      }
      Variant::get_type_name(&local_90);
      uVar3 = *(undefined8 *)(lVar30 + 0x58);
      Variant::get_type_name(&local_98,local_78[0]);
      local_88 = "getptr";
      local_a0 = 0;
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String,String,char_const*,String>
                (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
      _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                       "Method/function failed. Returning: false",&local_88,0,0);
      pcVar4 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar30 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
        }
      }
      lVar30 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
        }
      }
      lVar30 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
        }
      }
      lVar30 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
          pVVar17 = (Variant *)0x0;
          goto LAB_00104c34;
        }
        goto LAB_00104ac3;
      }
    }
    pVVar17 = (Variant *)0x0;
  }
LAB_00104c34:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pVVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::next(Variant const*) const */

long __thiscall Dictionary::next(Dictionary *this,Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  Object *pOVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  StringName *pSVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  float fVar31;
  CowData<char32_t> *local_c8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Variant *)0x0) {
    lVar17 = *(long *)(*(long *)this + 0x28);
    if (lVar17 != 0) {
      lVar17 = lVar17 + 0x10;
    }
    goto LAB_00105a96;
  }
  Variant::Variant((Variant *)local_78,param_1);
  lVar17 = *(long *)this;
  iVar2 = *(int *)(lVar17 + 0x40);
  if (iVar2 == 0) {
LAB_00105ad4:
    if ((*(long *)(lVar17 + 0x18) != 0) && (*(int *)(lVar17 + 0x3c) != 0)) {
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar17 + 0x38) * 4);
      uVar18 = CONCAT44(0,uVar26);
      lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar17 + 0x38) * 8);
      uVar16 = Variant::hash();
      lVar29 = *(long *)(lVar17 + 0x20);
      uVar22 = 1;
      if (uVar16 != 0) {
        uVar22 = uVar16;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar22 * lVar19;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      lVar24 = SUB168(auVar5 * auVar9,8);
      uVar16 = *(uint *)(lVar29 + lVar24 * 4);
      uVar23 = SUB164(auVar5 * auVar9,8);
      if (uVar16 != 0) {
        uVar25 = 0;
        do {
          if (uVar16 == uVar22) {
            cVar14 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(*(long *)(lVar17 + 0x18) + lVar24 * 8) + 0x10)
                                ,(Variant *)local_78);
            if (cVar14 != '\0') {
              plVar1 = *(long **)(*(long *)(lVar17 + 0x18) + (ulong)uVar23 * 8);
              if ((plVar1 != (long *)0x0) && (lVar17 = *plVar1, lVar17 != 0)) {
                lVar17 = lVar17 + 0x10;
                goto LAB_00105a82;
              }
              break;
            }
            lVar29 = *(long *)(lVar17 + 0x20);
          }
          uVar25 = uVar25 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar23 + 1) * lVar19;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar18;
          lVar24 = SUB168(auVar6 * auVar10,8);
          uVar16 = *(uint *)(lVar29 + lVar24 * 4);
          uVar23 = SUB164(auVar6 * auVar10,8);
          if ((uVar16 == 0) ||
             (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar19, auVar11._8_8_ = 0,
             auVar11._0_8_ = uVar18, auVar8._8_8_ = 0,
             auVar8._0_8_ = (ulong)((uVar26 + uVar23) - SUB164(auVar7 * auVar11,8)) * lVar19,
             auVar12._8_8_ = 0, auVar12._0_8_ = uVar18, SUB164(auVar8 * auVar12,8) < uVar25)) break;
        } while( true );
      }
    }
  }
  else {
    if (iVar2 == local_78[0]) {
      if (iVar2 != 0x18) goto LAB_00105ad4;
      uVar18 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar18 == 0) goto LAB_00105c80;
      uVar26 = (uint)uVar18 & 0xffffff;
      if (uVar26 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar13 = (ulong)local_88 >> 8;
          local_88 = (char *)(uVar13 << 8);
          LOCK();
          bVar30 = (char)ObjectDB::spin_lock == '\0';
          if (bVar30) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar30) break;
          local_88 = (char *)(uVar13 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar27 = (ulong *)((ulong)uVar26 * 0x10 + ObjectDB::object_slots);
        if ((uVar18 >> 0x18 & 0x7fffffffff) == (*puVar27 & 0x7fffffffff)) {
          plVar1 = (long *)puVar27[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar1 != (long *)0x0) {
            if (*(long *)(lVar17 + 0x48) == 0) {
LAB_00105abf:
              lVar17 = *(long *)this;
              goto LAB_00105ad4;
            }
            if (plVar1[1] == 0) {
              pSVar28 = (StringName *)plVar1[0x23];
              if (pSVar28 == (StringName *)0x0) {
                pSVar28 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar28 = (StringName *)(plVar1[1] + 0x20);
            }
            StringName::StringName((StringName *)&local_b0,pSVar28);
            if (local_b0 == *(long *)(lVar17 + 0x48)) {
LAB_00105dc6:
              if (*(long *)(lVar17 + 0x50) == 0) {
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
LAB_00105c80:
                  lVar17 = *(long *)this;
                  goto LAB_00105ad4;
                }
                goto LAB_00105abf;
              }
              (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
              lVar19 = Variant::get_validated_object();
              if (lVar19 == 0) {
LAB_00106123:
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              else {
                pOVar20 = (Object *)__dynamic_cast(lVar19,&Object::typeinfo,&Script::typeinfo,0);
                if (pOVar20 != (Object *)0x0) {
                  cVar14 = RefCounted::reference();
                  if (cVar14 != '\0') {
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    cVar14 = (**(code **)(*(long *)pOVar20 + 0x1e8))(pOVar20);
                    if (cVar14 == '\0') {
                      plVar1 = *(long **)(lVar17 + 0x50);
                      if (plVar1[1] == 0) {
                        plVar21 = (long *)plVar1[0x23];
                        if (plVar21 == (long *)0x0) {
                          plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                        }
                      }
                      else {
                        plVar21 = (long *)(plVar1[1] + 0x20);
                      }
                      lVar19 = *plVar21;
                      if (lVar19 == 0) {
                        local_a0 = 0;
                      }
                      else {
                        local_a0 = 0;
                        if (*(char **)(lVar19 + 8) == (char *)0x0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_a0,(CowData *)(lVar19 + 0x10));
                        }
                        else {
                          String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar19 + 8));
                        }
                      }
                      local_c8 = (CowData<char32_t> *)&local_a0;
                      local_98 = 0;
                      String::parse_latin1((String_conflict *)&local_98,*(char **)(lVar17 + 0x58));
                      local_90 = 0;
                      String::parse_latin1((String_conflict *)&local_90,"next");
                      local_88 = (char *)0x0;
                      String::parse_latin1
                                ((String_conflict *)&local_88,
                                 "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                                );
                      vformat<String,String,String>
                                ((CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_88,
                                 (String_conflict *)&local_90,(String_conflict *)&local_98,local_c8)
                      ;
                      _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                       0x92,
                                       "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                       ,(CowData<char32_t> *)&local_a8,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      CowData<char32_t>::_unref(local_c8);
                    }
                    cVar15 = RefCounted::unreference();
                    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar20), cVar15 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                    if ((StringName::configured != '\0') && (local_b0 != 0)) {
                      StringName::unref();
                    }
                    if (cVar14 == '\0') goto LAB_00105a5b;
                    goto LAB_00105c80;
                  }
                  goto LAB_00106123;
                }
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              if (cVar14 != '\0') {
                Variant::_clear_internal();
              }
              plVar1 = *(long **)(lVar17 + 0x50);
              if (plVar1[1] == 0) {
                plVar21 = (long *)plVar1[0x23];
                if (plVar21 == (long *)0x0) {
                  plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                }
              }
              else {
                plVar21 = (long *)(plVar1[1] + 0x20);
              }
              lVar19 = *plVar21;
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              local_a0 = 0;
              String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar17 + 0x58));
              local_98 = 0;
              local_88 = "next";
              local_80 = 4;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
              local_90 = 0;
              local_80 = 0x45;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (String_conflict *)&local_a0,(CowData<char32_t> *)&local_a8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                               "Condition \"other_script.is_null()\" is true. Returning: false",
                               (CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            else {
              if (plVar1[1] == 0) {
                pSVar28 = (StringName *)plVar1[0x23];
                if (pSVar28 == (StringName *)0x0) {
                  pSVar28 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar28 = (StringName *)(plVar1[1] + 0x20);
              }
              cVar14 = ClassDB::is_parent_class(pSVar28,(StringName *)(lVar17 + 0x48));
              if (cVar14 != '\0') goto LAB_00105dc6;
              lVar19 = *(long *)(lVar17 + 0x48);
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              uVar3 = *(undefined8 *)(lVar17 + 0x58);
              (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
              local_88 = "next";
              local_98 = 0;
              local_80 = 4;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = 
              "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
              ;
              local_90 = 0;
              local_80 = 0x53;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,char_const*,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (CowData<char32_t> *)&local_a0,uVar3,(CowData<char32_t> *)&local_a8);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                               "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                               ,(CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            if ((StringName::configured != '\0') && (local_b0 != 0)) {
              StringName::unref();
            }
            goto LAB_00105a5b;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      pcVar4 = *(char **)(lVar17 + 0x58);
      local_80 = 0;
      local_a0 = 0;
      if (pcVar4 != (char *)0x0) {
        local_80 = strlen(pcVar4);
      }
      local_88 = pcVar4;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "next";
      local_98 = 0;
      local_80 = 4;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange *)&local_90);
      vformat<String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                 (StrRange *)&local_a0);
      _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                       "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      if (local_78[0] == 0) {
        if (iVar2 == 0x18) goto LAB_00105ad4;
      }
      else if (iVar2 == 4) {
        if (local_78[0] == 0x15) {
          Variant::operator_cast_to_String((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          lVar17 = *(long *)this;
          goto LAB_00105ad4;
        }
      }
      else if (iVar2 == 0x15) {
        if (local_78[0] == 4) {
          Variant::operator_cast_to_StringName((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(StringName *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
            StringName::unref();
          }
          goto LAB_00105c80;
        }
      }
      else if ((iVar2 == 3) && (local_78[0] == 2)) {
        fVar31 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar31);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        lVar17 = *(long *)this;
        local_70 = local_50;
        uStack_68 = uStack_48;
        goto LAB_00105ad4;
      }
      Variant::get_type_name(&local_90);
      uVar3 = *(undefined8 *)(lVar17 + 0x58);
      Variant::get_type_name(&local_98,local_78[0]);
      local_88 = "next";
      local_a0 = 0;
      local_80 = 4;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String,String,char_const*,String>
                (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
      _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                       "Method/function failed. Returning: false",&local_88,0,0);
      pcVar4 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar17 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
    }
LAB_00105a5b:
    _err_print_error(&_LC58,"core/variant/dictionary.cpp",0x221,
                     "Condition \"!_p->typed_key.validate(key, \"next\")\" is true. Returning: nullptr"
                     ,0,0);
  }
  lVar17 = 0;
LAB_00105a82:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00105a96:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar17;
}



/* Dictionary::getptr(Variant const&) const */

long __thiscall Dictionary::getptr(Dictionary *this,Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  Object *pOVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong *puVar26;
  StringName *pSVar27;
  long lVar28;
  uint uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  float fVar31;
  CowData<char32_t> *local_e0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar17 = *(long *)this;
  iVar2 = *(int *)(lVar17 + 0x40);
  if (iVar2 == 0) {
LAB_00106878:
    if ((*(long *)(lVar17 + 0x18) != 0) && (*(int *)(lVar17 + 0x3c) != 0)) {
      uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar17 + 0x38) * 4);
      uVar18 = CONCAT44(0,uVar25);
      lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar17 + 0x38) * 8);
      uVar16 = Variant::hash();
      lVar28 = *(long *)(lVar17 + 0x20);
      uVar22 = 1;
      if (uVar16 != 0) {
        uVar22 = uVar16;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar22 * lVar19;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      lVar24 = SUB168(auVar5 * auVar9,8);
      uVar16 = *(uint *)(lVar28 + lVar24 * 4);
      uVar23 = SUB164(auVar5 * auVar9,8);
      if (uVar16 != 0) {
        uVar29 = 0;
        do {
          if (uVar16 == uVar22) {
            cVar14 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(*(long *)(lVar17 + 0x18) + lVar24 * 8) + 0x10)
                                ,(Variant *)local_78);
            if (cVar14 != '\0') {
              lVar17 = *(long *)(*(long *)(lVar17 + 0x18) + (ulong)uVar23 * 8);
              if (lVar17 == 0) goto LAB_0010685d;
              lVar17 = lVar17 + 0x28;
              goto LAB_001069ab;
            }
            lVar28 = *(long *)(lVar17 + 0x20);
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar23 + 1) * lVar19;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar18;
          lVar24 = SUB168(auVar6 * auVar10,8);
          uVar16 = *(uint *)(lVar28 + lVar24 * 4);
          uVar23 = SUB164(auVar6 * auVar10,8);
        } while ((uVar16 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar19, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar18, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar25 + uVar23) - SUB164(auVar7 * auVar11,8)) * lVar19,
                auVar12._8_8_ = 0, auVar12._0_8_ = uVar18, uVar29 <= SUB164(auVar8 * auVar12,8)));
        lVar17 = 0;
        goto LAB_001069ab;
      }
    }
LAB_0010685d:
    lVar17 = 0;
  }
  else {
    if (local_78[0] == iVar2) {
      if (local_78[0] != 0x18) goto LAB_00106878;
      uVar18 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar18 == 0) goto LAB_00106a90;
      uVar25 = (uint)uVar18 & 0xffffff;
      if (uVar25 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar13 = (ulong)local_88 >> 8;
          local_88 = (char *)(uVar13 << 8);
          LOCK();
          bVar30 = (char)ObjectDB::spin_lock == '\0';
          if (bVar30) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar30) break;
          local_88 = (char *)(uVar13 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar26 = (ulong *)((ulong)uVar25 * 0x10 + ObjectDB::object_slots);
        if ((uVar18 >> 0x18 & 0x7fffffffff) == (*puVar26 & 0x7fffffffff)) {
          plVar1 = (long *)puVar26[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar1 != (long *)0x0) {
            if (*(long *)(lVar17 + 0x48) == 0) {
LAB_00106976:
              lVar17 = *(long *)this;
              goto LAB_00106878;
            }
            if (plVar1[1] == 0) {
              pSVar27 = (StringName *)plVar1[0x23];
              if (pSVar27 == (StringName *)0x0) {
                pSVar27 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar27 = (StringName *)(plVar1[1] + 0x20);
            }
            StringName::StringName((StringName *)&local_b0,pSVar27);
            if (local_b0 == *(long *)(lVar17 + 0x48)) {
LAB_00106c41:
              if (*(long *)(lVar17 + 0x50) == 0) {
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
LAB_00106a90:
                  lVar17 = *(long *)this;
                  goto LAB_00106878;
                }
                goto LAB_00106976;
              }
              (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
              lVar19 = Variant::get_validated_object();
              if (lVar19 == 0) {
LAB_00106f9d:
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              else {
                pOVar20 = (Object *)__dynamic_cast(lVar19,&Object::typeinfo,&Script::typeinfo,0);
                if (pOVar20 != (Object *)0x0) {
                  cVar14 = RefCounted::reference();
                  if (cVar14 != '\0') {
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    cVar14 = (**(code **)(*(long *)pOVar20 + 0x1e8))(pOVar20);
                    if (cVar14 == '\0') {
                      plVar1 = *(long **)(lVar17 + 0x50);
                      if (plVar1[1] == 0) {
                        plVar21 = (long *)plVar1[0x23];
                        if (plVar21 == (long *)0x0) {
                          plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                        }
                      }
                      else {
                        plVar21 = (long *)(plVar1[1] + 0x20);
                      }
                      lVar19 = *plVar21;
                      if (lVar19 == 0) {
                        local_a8 = 0;
                      }
                      else {
                        local_a8 = 0;
                        if (*(char **)(lVar19 + 8) == (char *)0x0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10));
                        }
                        else {
                          String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                        }
                      }
                      local_e0 = (CowData<char32_t> *)&local_a8;
                      pcVar4 = *(char **)(lVar17 + 0x58);
                      local_80 = 0;
                      local_a0 = 0;
                      if (pcVar4 != (char *)0x0) {
                        local_80 = strlen(pcVar4);
                      }
                      local_88 = pcVar4;
                      String::parse_latin1((StrRange *)&local_a0);
                      local_98 = 0;
                      local_88 = "getptr";
                      local_80 = 6;
                      String::parse_latin1((StrRange *)&local_98);
                      local_90 = 0;
                      local_88 = 
                      "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                      local_80 = 0x45;
                      String::parse_latin1((StrRange *)&local_90);
                      vformat<String,String,String>
                                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                                 (StrRange *)&local_98,(StrRange *)&local_a0,local_e0);
                      _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                       0x92,
                                       "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                       ,(CowData<char32_t> *)&local_88,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                      CowData<char32_t>::_unref(local_e0);
                    }
                    cVar15 = RefCounted::unreference();
                    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar20), cVar15 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                    if ((StringName::configured != '\0') && (local_b0 != 0)) {
                      StringName::unref();
                    }
                    if (cVar14 == '\0') goto LAB_0010685d;
                    goto LAB_00106a90;
                  }
                  goto LAB_00106f9d;
                }
                cVar14 = Variant::needs_deinit[local_58[0]];
              }
              if (cVar14 != '\0') {
                Variant::_clear_internal();
              }
              plVar1 = *(long **)(lVar17 + 0x50);
              if (plVar1[1] == 0) {
                plVar21 = (long *)plVar1[0x23];
                if (plVar21 == (long *)0x0) {
                  plVar21 = (long *)(**(code **)(*plVar1 + 0x40))();
                }
              }
              else {
                plVar21 = (long *)(plVar1[1] + 0x20);
              }
              lVar19 = *plVar21;
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              local_e0 = (CowData<char32_t> *)&local_a8;
              pcVar4 = *(char **)(lVar17 + 0x58);
              local_80 = 0;
              local_a0 = 0;
              if (pcVar4 != (char *)0x0) {
                local_80 = strlen(pcVar4);
              }
              local_88 = pcVar4;
              String::parse_latin1((StrRange *)&local_a0);
              local_88 = "getptr";
              local_98 = 0;
              local_80 = 6;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
              local_90 = 0;
              local_80 = 0x45;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (StrRange *)&local_a0,local_e0);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                               "Condition \"other_script.is_null()\" is true. Returning: false",
                               (CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref(local_e0);
              if (StringName::configured == '\0') goto LAB_0010685d;
            }
            else {
              if (plVar1[1] == 0) {
                pSVar27 = (StringName *)plVar1[0x23];
                if (pSVar27 == (StringName *)0x0) {
                  pSVar27 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar27 = (StringName *)(plVar1[1] + 0x20);
              }
              cVar14 = ClassDB::is_parent_class(pSVar27,(StringName *)(lVar17 + 0x48));
              if (cVar14 != '\0') goto LAB_00106c41;
              lVar19 = *(long *)(lVar17 + 0x48);
              if (lVar19 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = 0;
                if (*(char **)(lVar19 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar19 + 0x10))
                  ;
                }
                else {
                  String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar19 + 8));
                }
              }
              local_e0 = (CowData<char32_t> *)&local_a8;
              uVar3 = *(undefined8 *)(lVar17 + 0x58);
              (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
              local_88 = "getptr";
              local_98 = 0;
              local_80 = 6;
              String::parse_latin1((StrRange *)&local_98);
              local_88 = 
              "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
              ;
              local_90 = 0;
              local_80 = 0x53;
              String::parse_latin1((StrRange *)&local_90);
              vformat<String,String,char_const*,String>
                        ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                         (CowData<char32_t> *)&local_a0,uVar3,local_e0);
              _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                               "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                               ,(CowData<char32_t> *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref(local_e0);
              if (StringName::configured == '\0') {
                lVar17 = 0;
                goto LAB_001069ab;
              }
            }
            if (local_b0 != 0) {
              StringName::unref();
              lVar17 = 0;
              goto LAB_001069ab;
            }
            goto LAB_0010685d;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      pcVar4 = *(char **)(lVar17 + 0x58);
      local_80 = 0;
      local_a0 = 0;
      if (pcVar4 != (char *)0x0) {
        local_80 = strlen(pcVar4);
      }
      local_88 = pcVar4;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "getptr";
      local_98 = 0;
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange *)&local_90);
      vformat<String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                 (StrRange *)&local_a0);
      _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                       "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      if (local_78[0] == 0) {
        if (iVar2 == 0x18) goto LAB_00106878;
      }
      else if (iVar2 == 4) {
        if (local_78[0] == 0x15) {
          Variant::operator_cast_to_String((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          lVar17 = *(long *)this;
          goto LAB_00106878;
        }
      }
      else if (iVar2 == 0x15) {
        if (local_78[0] == 4) {
          Variant::operator_cast_to_StringName((Variant *)&local_88);
          Variant::Variant((Variant *)local_58,(StringName *)&local_88);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          local_70 = local_50;
          uStack_68 = uStack_48;
          if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
            StringName::unref();
          }
          goto LAB_00106a90;
        }
      }
      else if ((iVar2 == 3) && (local_78[0] == 2)) {
        fVar31 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar31);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        lVar17 = *(long *)this;
        local_70 = local_50;
        uStack_68 = uStack_48;
        goto LAB_00106878;
      }
      Variant::get_type_name(&local_90);
      uVar3 = *(undefined8 *)(lVar17 + 0x58);
      Variant::get_type_name(&local_98,local_78[0]);
      local_88 = "getptr";
      local_a0 = 0;
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String,String,char_const*,String>
                (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
      _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                       "Method/function failed. Returning: false",&local_88,0,0);
      pcVar4 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar17 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
          lVar17 = 0;
          goto LAB_001069ab;
        }
        goto LAB_0010685d;
      }
    }
    lVar17 = 0;
  }
LAB_001069ab:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::get(Variant const&, Variant const&) const */

Variant * Dictionary::get(Variant *param_1,Variant *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  Variant *pVVar9;
  ulong uVar10;
  long lVar11;
  Object *pOVar12;
  long *plVar13;
  Variant *in_RCX;
  Variant *in_RDX;
  uint uVar14;
  ulong *puVar15;
  StringName *pSVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  CowData<char32_t> *local_e0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  lVar3 = *(long *)param_2;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar2 == 0) goto LAB_00107868;
  if (iVar2 == local_78[0]) {
    if ((iVar2 != 0x18) ||
       (uVar10 = Variant::operator_cast_to_ObjectID((Variant *)local_78), uVar10 == 0))
    goto LAB_00107868;
    uVar14 = (uint)uVar10 & 0xffffff;
    if (uVar14 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar6 = (ulong)local_88 >> 8;
        local_88 = (char *)(uVar6 << 8);
        LOCK();
        bVar17 = (char)ObjectDB::spin_lock == '\0';
        if (bVar17) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar17) break;
        local_88 = (char *)(uVar6 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar15 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
      if ((uVar10 >> 0x18 & 0x7fffffffff) == (*puVar15 & 0x7fffffffff)) {
        plVar1 = (long *)puVar15[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00107868;
          if (plVar1[1] == 0) {
            pSVar16 = (StringName *)plVar1[0x23];
            if (pSVar16 == (StringName *)0x0) {
              pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
            }
          }
          else {
            pSVar16 = (StringName *)(plVar1[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_b0,pSVar16);
          if (local_b0 == *(long *)(lVar3 + 0x48)) {
LAB_00107baa:
            if (*(long *)(lVar3 + 0x50) == 0) {
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
LAB_00107868:
              pVVar9 = (Variant *)getptr((Dictionary *)param_2,(Variant *)local_78);
              if (pVVar9 == (Variant *)0x0) {
                Variant::Variant(param_1,in_RCX);
              }
              else {
                Variant::Variant(param_1,pVVar9);
              }
              cVar7 = Variant::needs_deinit[local_78[0]];
              goto joined_r0x00107890;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar11 = Variant::get_validated_object();
            if (lVar11 == 0) {
LAB_00107eec:
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar12 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo);
              if (pOVar12 != (Object *)0x0) {
                cVar7 = RefCounted::reference();
                if (cVar7 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar7 = (**(code **)(*(long *)pOVar12 + 0x1e8))();
                  if (cVar7 == '\0') {
                    plVar1 = *(long **)(lVar3 + 0x50);
                    if (plVar1[1] == 0) {
                      plVar13 = (long *)plVar1[0x23];
                      if (plVar13 == (long *)0x0) {
                        plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar13 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar11 = *plVar13;
                    if (lVar11 == 0) {
                      local_a8 = 0;
                    }
                    else {
                      local_a8 = 0;
                      if (*(char **)(lVar11 + 8) == (char *)0x0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
                      }
                      else {
                        String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
                      }
                    }
                    local_e0 = (CowData<char32_t> *)&local_a8;
                    pcVar5 = *(char **)(lVar3 + 0x58);
                    local_80 = 0;
                    local_a0 = 0;
                    if (pcVar5 != (char *)0x0) {
                      local_80 = strlen(pcVar5);
                    }
                    local_88 = pcVar5;
                    String::parse_latin1((StrRange *)&local_a0);
                    local_98 = 0;
                    local_88 = "get";
                    local_80 = 3;
                    String::parse_latin1((StrRange *)&local_98);
                    local_90 = 0;
                    local_88 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_80 = 0x45;
                    String::parse_latin1((StrRange *)&local_90);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                               (StrRange *)&local_98,(StrRange *)&local_a0,local_e0);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref(local_e0);
                  }
                  cVar8 = RefCounted::unreference();
                  if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar12), cVar8 != '\0')) {
                    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                    Memory::free_static(pOVar12,false);
                  }
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  if (cVar7 == '\0') goto LAB_00107807;
                  goto LAB_00107868;
                }
                goto LAB_00107eec;
              }
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar7 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar3 + 0x50);
            if (plVar1[1] == 0) {
              plVar13 = (long *)plVar1[0x23];
              if (plVar13 == (long *)0x0) {
                plVar13 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar13 = (long *)(plVar1[1] + 0x20);
            }
            lVar11 = *plVar13;
            if (lVar11 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar11 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
              }
            }
            local_e0 = (CowData<char32_t> *)&local_a8;
            pcVar5 = *(char **)(lVar3 + 0x58);
            local_80 = 0;
            local_a0 = 0;
            if (pcVar5 != (char *)0x0) {
              local_80 = strlen(pcVar5);
            }
            local_88 = pcVar5;
            String::parse_latin1((StrRange *)&local_a0);
            local_98 = 0;
            local_88 = "get";
            local_80 = 3;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_90 = 0;
            local_80 = 0x45;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (StrRange *)&local_a0,local_e0);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e0);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar16 = (StringName *)plVar1[0x23];
              if (pSVar16 == (StringName *)0x0) {
                pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar16 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar7 = ClassDB::is_parent_class(pSVar16,(StringName *)(lVar3 + 0x48));
            if (cVar7 != '\0') goto LAB_00107baa;
            lVar11 = *(long *)(lVar3 + 0x48);
            if (lVar11 == 0) {
              local_a8 = 0;
            }
            else if (*(char **)(lVar11 + 8) == (char *)0x0) {
              local_a8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar11 + 0x10));
            }
            else {
              local_a8 = 0;
              String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar11 + 8));
            }
            local_e0 = (CowData<char32_t> *)&local_a8;
            uVar4 = *(undefined8 *)(lVar3 + 0x58);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
            local_88 = "get";
            local_98 = 0;
            local_80 = 3;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0;
            local_80 = 0x53;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (CowData<char32_t> *)&local_a0,uVar4,local_e0);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e0);
          }
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
          goto LAB_00107807;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar5 = *(char **)(lVar3 + 0x58);
    local_80 = 0;
    local_a0 = 0;
    if (pcVar5 != (char *)0x0) {
      local_80 = strlen(pcVar5);
    }
    local_88 = pcVar5;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = 0;
    local_88 = "get";
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_90 = 0;
    local_80 = 0x4b;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String,String>
              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
               (StrRange *)&local_a0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
    if (local_78[0] == 0) {
      if (iVar2 == 0x18) goto LAB_00107868;
    }
    else if (iVar2 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        goto LAB_00107868;
      }
    }
    else if (iVar2 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_00107868;
      }
    }
    else if ((iVar2 == 3) && (local_78[0] == 2)) {
      fVar18 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar18);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_70 = local_50;
      uStack_68 = uStack_48;
      local_78[0] = local_58[0];
      goto LAB_00107868;
    }
    Variant::get_type_name(&local_90);
    uVar4 = *(undefined8 *)(lVar3 + 0x58);
    Variant::get_type_name(&local_98,local_78[0]);
    local_a0 = 0;
    local_88 = "get";
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar4,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
LAB_00107807:
  _err_print_error(&_LC60,"core/variant/dictionary.cpp",0xa8,
                   "Condition \"!_p->typed_key.validate(key, \"get\")\" is true. Returning: p_default"
                   ,0,0);
  Variant::Variant(param_1,in_RCX);
  cVar7 = Variant::needs_deinit[local_78[0]];
joined_r0x00107890:
  if (cVar7 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::get_valid(Variant const&) const */

Variant * Dictionary::get_valid(Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  Object *pOVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  Variant *in_RDX;
  long lVar23;
  uint uVar24;
  uint uVar25;
  long *in_RSI;
  ulong *puVar26;
  StringName *pSVar27;
  long lVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  float fVar31;
  CowData<char32_t> *local_e0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  lVar29 = *in_RSI;
  iVar2 = *(int *)(lVar29 + 0x40);
  if (iVar2 == 0) {
LAB_001088e8:
    lVar18 = *(long *)(lVar29 + 0x18);
joined_r0x001087d9:
    if ((lVar18 != 0) && (*(int *)(lVar29 + 0x3c) != 0)) {
      uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar29 + 0x38) * 4);
      lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar29 + 0x38) * 8);
      uVar16 = Variant::hash();
      uVar17 = CONCAT44(0,uVar25);
      lVar28 = *(long *)(lVar29 + 0x20);
      uVar21 = 1;
      if (uVar16 != 0) {
        uVar21 = uVar16;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar21 * lVar18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar17;
      lVar23 = SUB168(auVar5 * auVar9,8);
      uVar16 = *(uint *)(lVar28 + lVar23 * 4);
      uVar22 = SUB164(auVar5 * auVar9,8);
      if (uVar16 != 0) {
        uVar24 = 0;
        do {
          if (uVar16 == uVar21) {
            cVar14 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(*(long *)(lVar29 + 0x18) + lVar23 * 8) + 0x10)
                                ,(Variant *)local_78);
            if (cVar14 != '\0') {
              lVar29 = *(long *)(*(long *)(lVar29 + 0x18) + (ulong)uVar22 * 8);
              if (lVar29 != 0) {
                Variant::Variant(param_1,(Variant *)(lVar29 + 0x28));
                goto LAB_00108912;
              }
              break;
            }
            lVar28 = *(long *)(lVar29 + 0x20);
          }
          uVar24 = uVar24 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar18;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar17;
          lVar23 = SUB168(auVar6 * auVar10,8);
          uVar16 = *(uint *)(lVar28 + lVar23 * 4);
          uVar22 = SUB164(auVar6 * auVar10,8);
          if ((uVar16 == 0) ||
             (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar18, auVar11._8_8_ = 0,
             auVar11._0_8_ = uVar17, auVar8._8_8_ = 0,
             auVar8._0_8_ = (ulong)((uVar25 + uVar22) - SUB164(auVar7 * auVar11,8)) * lVar18,
             auVar12._8_8_ = 0, auVar12._0_8_ = uVar17, SUB164(auVar8 * auVar12,8) < uVar24)) break;
        } while( true );
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108912:
    cVar14 = Variant::needs_deinit[local_78[0]];
    goto joined_r0x0010891f;
  }
  if (local_78[0] == iVar2) {
    if (local_78[0] != 0x18) goto LAB_001087d4;
    uVar17 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
    if (uVar17 == 0) goto LAB_00108a20;
    uVar25 = (uint)uVar17 & 0xffffff;
    if (uVar25 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar13 = (ulong)local_88 >> 8;
        local_88 = (char *)(uVar13 << 8);
        LOCK();
        bVar30 = (char)ObjectDB::spin_lock == '\0';
        if (bVar30) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar30) break;
        local_88 = (char *)(uVar13 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar26 = (ulong *)((ulong)uVar25 * 0x10 + ObjectDB::object_slots);
      if ((uVar17 >> 0x18 & 0x7fffffffff) == (*puVar26 & 0x7fffffffff)) {
        plVar1 = (long *)puVar26[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar29 + 0x48) == 0) {
LAB_001088df:
            lVar29 = *in_RSI;
            goto LAB_001088e8;
          }
          if (plVar1[1] == 0) {
            pSVar27 = (StringName *)plVar1[0x23];
            if (pSVar27 == (StringName *)0x0) {
              pSVar27 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
            }
          }
          else {
            pSVar27 = (StringName *)(plVar1[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_b0,pSVar27);
          if (local_b0 == *(long *)(lVar29 + 0x48)) {
LAB_00108c26:
            if (*(long *)(lVar29 + 0x50) == 0) {
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
LAB_00108a20:
                lVar29 = *in_RSI;
                goto LAB_001087d4;
              }
              goto LAB_001088df;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar18 = Variant::get_validated_object();
            if (lVar18 == 0) {
LAB_00108ef3:
              cVar14 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar19 = (Object *)__dynamic_cast(lVar18,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar19 != (Object *)0x0) {
                cVar14 = RefCounted::reference();
                if (cVar14 == '\0') goto LAB_00108ef3;
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar14 = (**(code **)(*(long *)pOVar19 + 0x1e8))(pOVar19);
                if (cVar14 == '\0') {
                  plVar1 = *(long **)(lVar29 + 0x50);
                  if (plVar1[1] == 0) {
                    plVar20 = (long *)plVar1[0x23];
                    if (plVar20 == (long *)0x0) {
                      plVar20 = (long *)(**(code **)(*plVar1 + 0x40))();
                    }
                  }
                  else {
                    plVar20 = (long *)(plVar1[1] + 0x20);
                  }
                  lVar18 = *plVar20;
                  if (lVar18 == 0) {
                    local_a8 = 0;
                  }
                  else {
                    local_a8 = 0;
                    if (*(char **)(lVar18 + 8) == (char *)0x0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_a8,(CowData *)(lVar18 + 0x10));
                    }
                    else {
                      String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar18 + 8));
                    }
                  }
                  local_e0 = (CowData<char32_t> *)&local_a8;
                  pcVar4 = *(char **)(lVar29 + 0x58);
                  local_80 = 0;
                  local_a0 = 0;
                  if (pcVar4 != (char *)0x0) {
                    local_80 = strlen(pcVar4);
                  }
                  local_88 = pcVar4;
                  String::parse_latin1((StrRange *)&local_a0);
                  local_98 = 0;
                  local_88 = "get_valid";
                  local_80 = 9;
                  String::parse_latin1((StrRange *)&local_98);
                  local_90 = 0;
                  local_88 = 
                  "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                  local_80 = 0x45;
                  String::parse_latin1((StrRange *)&local_90);
                  vformat<String,String,String>
                            ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                             (StrRange *)&local_98,(StrRange *)&local_a0,local_e0);
                  _err_print_error("validate_object","./core/variant/container_type_validate.h",0x92
                                   ,
                                   "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                   ,(CowData<char32_t> *)&local_88,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                  CowData<char32_t>::_unref(local_e0);
                }
                cVar15 = RefCounted::unreference();
                if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar19), cVar15 != '\0')) {
                  (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
                  Memory::free_static(pOVar19,false);
                }
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                if (cVar14 != '\0') goto LAB_00108a20;
                goto LAB_00108762;
              }
              cVar14 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar14 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar29 + 0x50);
            if (plVar1[1] == 0) {
              plVar20 = (long *)plVar1[0x23];
              if (plVar20 == (long *)0x0) {
                plVar20 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar20 = (long *)(plVar1[1] + 0x20);
            }
            lVar18 = *plVar20;
            if (lVar18 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar18 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar18 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar18 + 8));
              }
            }
            local_e0 = (CowData<char32_t> *)&local_a8;
            pcVar4 = *(char **)(lVar29 + 0x58);
            local_80 = 0;
            local_a0 = 0;
            if (pcVar4 != (char *)0x0) {
              local_80 = strlen(pcVar4);
            }
            local_88 = pcVar4;
            String::parse_latin1((StrRange *)&local_a0);
            local_88 = "get_valid";
            local_98 = 0;
            local_80 = 9;
            String::parse_latin1((StrRange *)&local_98);
            local_90 = 0;
            local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_80 = 0x45;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (StrRange *)&local_a0,local_e0);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e0);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar27 = (StringName *)plVar1[0x23];
              if (pSVar27 == (StringName *)0x0) {
                pSVar27 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar27 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar14 = ClassDB::is_parent_class(pSVar27,(StringName *)(lVar29 + 0x48));
            if (cVar14 != '\0') goto LAB_00108c26;
            lVar18 = *(long *)(lVar29 + 0x48);
            if (lVar18 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar18 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar18 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar18 + 8));
              }
            }
            local_e0 = (CowData<char32_t> *)&local_a8;
            uVar3 = *(undefined8 *)(lVar29 + 0x58);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
            local_88 = "get_valid";
            local_98 = 0;
            local_80 = 9;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0;
            local_80 = 0x53;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (CowData<char32_t> *)&local_a0,uVar3,local_e0);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_e0);
          }
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
          goto LAB_00108762;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar4 = *(char **)(lVar29 + 0x58);
    local_80 = 0;
    local_a0 = 0;
    if (pcVar4 != (char *)0x0) {
      local_80 = strlen(pcVar4);
    }
    local_88 = pcVar4;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "get_valid";
    local_98 = 0;
    local_80 = 9;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_90 = 0;
    local_80 = 0x4b;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String,String>
              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
               (StrRange *)&local_a0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
    if (local_78[0] == 0) {
      if (iVar2 == 0x18) goto LAB_001088e8;
    }
    else if (iVar2 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        lVar29 = *in_RSI;
LAB_001087d4:
        lVar18 = *(long *)(lVar29 + 0x18);
        goto joined_r0x001087d9;
      }
    }
    else if (iVar2 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_00108a20;
      }
    }
    else if ((iVar2 == 3) && (local_78[0] == 2)) {
      fVar31 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar31);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      lVar29 = *in_RSI;
      local_70 = local_50;
      uStack_68 = uStack_48;
      goto LAB_001087d4;
    }
    Variant::get_type_name(&local_90);
    uVar3 = *(undefined8 *)(lVar29 + 0x58);
    Variant::get_type_name(&local_98,local_78[0]);
    local_88 = "get_valid";
    local_a0 = 0;
    local_80 = 9;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar29 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    lVar29 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    lVar29 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    lVar29 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
  }
LAB_00108762:
  _err_print_error("get_valid","core/variant/dictionary.cpp",0x9d,
                   "Condition \"!_p->typed_key.validate(key, \"get_valid\")\" is true. Returning: Variant()"
                   ,0,0);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  cVar14 = Variant::needs_deinit[local_78[0]];
joined_r0x0010891f:
  if (cVar14 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Dictionary::erase(Variant const&) */

ulong __thiscall Dictionary::erase(Dictionary *this,Variant *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  ulong *puVar13;
  StringName *pSVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  float fVar17;
  CowData<char32_t> *local_d8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar15 = *(long *)this;
  iVar2 = *(int *)(lVar15 + 0x40);
  if (iVar2 == 0) {
LAB_001096f0:
    if (*(long *)(lVar15 + 8) == 0) {
      uVar8 = HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
              ::erase((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                       *)(lVar15 + 0x10),(Variant *)local_78);
    }
    else {
      _err_print_error("erase","core/variant/dictionary.cpp",0xef,
                       "Condition \"_p->read_only\" is true. Returning: false",
                       "Dictionary is in read-only state.",0,0);
      uVar8 = 0;
    }
    goto LAB_00109707;
  }
  if (iVar2 == local_78[0]) {
    if (iVar2 != 0x18) goto LAB_001096f0;
    uVar8 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
    if (uVar8 == 0) goto LAB_001097e0;
    uVar12 = (uint)uVar8 & 0xffffff;
    if (uVar12 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar5 = (ulong)local_88 >> 8;
        local_88 = (char *)(uVar5 << 8);
        LOCK();
        bVar16 = (char)ObjectDB::spin_lock == '\0';
        if (bVar16) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar16) break;
        local_88 = (char *)(uVar5 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar13 = (ulong *)((ulong)uVar12 * 0x10 + ObjectDB::object_slots);
      if ((uVar8 >> 0x18 & 0x7fffffffff) == (*puVar13 & 0x7fffffffff)) {
        plVar1 = (long *)puVar13[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar15 + 0x48) == 0) {
LAB_00109740:
            lVar15 = *(long *)this;
            goto LAB_001096f0;
          }
          if (plVar1[1] == 0) {
            pSVar14 = (StringName *)plVar1[0x23];
            if (pSVar14 == (StringName *)0x0) {
              pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
            }
          }
          else {
            pSVar14 = (StringName *)(plVar1[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_b0,pSVar14);
          if (local_b0 == *(long *)(lVar15 + 0x48)) {
LAB_001099e6:
            if (*(long *)(lVar15 + 0x50) == 0) {
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
LAB_001097e0:
                lVar15 = *(long *)this;
                goto LAB_001096f0;
              }
              goto LAB_00109740;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar9 = Variant::get_validated_object();
            if (lVar9 == 0) {
LAB_00109cfc:
              cVar6 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar10 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar10 != (Object *)0x0) {
                cVar6 = RefCounted::reference();
                if (cVar6 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar6 = (**(code **)(*(long *)pOVar10 + 0x1e8))(pOVar10);
                  if (cVar6 == '\0') {
                    plVar1 = *(long **)(lVar15 + 0x50);
                    if (plVar1[1] == 0) {
                      plVar11 = (long *)plVar1[0x23];
                      if (plVar11 == (long *)0x0) {
                        plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar11 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar9 = *plVar11;
                    if (lVar9 == 0) {
                      local_a8 = 0;
                    }
                    else {
                      local_a8 = 0;
                      if (*(char **)(lVar9 + 8) == (char *)0x0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_a8,(CowData *)(lVar9 + 0x10));
                      }
                      else {
                        String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar9 + 8));
                      }
                    }
                    local_d8 = (CowData<char32_t> *)&local_a8;
                    pcVar4 = *(char **)(lVar15 + 0x58);
                    local_80 = 0;
                    local_a0 = 0;
                    if (pcVar4 != (char *)0x0) {
                      local_80 = strlen(pcVar4);
                    }
                    local_88 = pcVar4;
                    String::parse_latin1((StrRange *)&local_a0);
                    local_98 = 0;
                    local_88 = "erase";
                    local_80 = 5;
                    String::parse_latin1((StrRange *)&local_98);
                    local_88 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_90 = 0;
                    local_80 = 0x45;
                    String::parse_latin1((StrRange *)&local_90);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                               (StrRange *)&local_98,(StrRange *)&local_a0,local_d8);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref(local_d8);
                  }
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                    Memory::free_static(pOVar10,false);
                  }
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  if (cVar6 == '\0') goto LAB_001096b4;
                  goto LAB_001097e0;
                }
                goto LAB_00109cfc;
              }
              cVar6 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar6 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar15 + 0x50);
            if (plVar1[1] == 0) {
              plVar11 = (long *)plVar1[0x23];
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar11 = (long *)(plVar1[1] + 0x20);
            }
            lVar9 = *plVar11;
            if (lVar9 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar9 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar9 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar9 + 8));
              }
            }
            local_d8 = (CowData<char32_t> *)&local_a8;
            pcVar4 = *(char **)(lVar15 + 0x58);
            local_80 = 0;
            local_a0 = 0;
            if (pcVar4 != (char *)0x0) {
              local_80 = strlen(pcVar4);
            }
            local_88 = pcVar4;
            String::parse_latin1((StrRange *)&local_a0);
            local_98 = 0;
            local_88 = "erase";
            local_80 = 5;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_90 = 0;
            local_80 = 0x45;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (StrRange *)&local_a0,local_d8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_d8);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar14 = (StringName *)plVar1[0x23];
              if (pSVar14 == (StringName *)0x0) {
                pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar14 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar6 = ClassDB::is_parent_class(pSVar14,(StringName *)(lVar15 + 0x48));
            if (cVar6 != '\0') goto LAB_001099e6;
            lVar9 = *(long *)(lVar15 + 0x48);
            if (lVar9 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0;
              if (*(char **)(lVar9 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar9 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar9 + 8));
              }
            }
            local_d8 = (CowData<char32_t> *)&local_a8;
            uVar3 = *(undefined8 *)(lVar15 + 0x58);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
            local_88 = "erase";
            local_98 = 0;
            local_80 = 5;
            String::parse_latin1((StrRange *)&local_98);
            local_88 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0;
            local_80 = 0x53;
            String::parse_latin1((StrRange *)&local_90);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                       (CowData<char32_t> *)&local_a0,uVar3,local_d8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref(local_d8);
          }
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
          goto LAB_001096b4;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar4 = *(char **)(lVar15 + 0x58);
    local_80 = 0;
    local_a0 = 0;
    if (pcVar4 != (char *)0x0) {
      local_80 = strlen(pcVar4);
    }
    local_88 = pcVar4;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "erase";
    local_98 = 0;
    local_80 = 5;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_90 = 0;
    local_80 = 0x4b;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String,String>
              ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
               (StrRange *)&local_a0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
    if (local_78[0] == 0) {
      if (iVar2 == 0x18) goto LAB_001096f0;
    }
    else if (iVar2 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        lVar15 = *(long *)this;
        goto LAB_001096f0;
      }
    }
    else if (iVar2 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_001097e0;
      }
    }
    else if ((iVar2 == 3) && (local_78[0] == 2)) {
      fVar17 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar17);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      lVar15 = *(long *)this;
      local_70 = local_50;
      uStack_68 = uStack_48;
      goto LAB_001096f0;
    }
    Variant::get_type_name(&local_90);
    uVar3 = *(undefined8 *)(lVar15 + 0x58);
    Variant::get_type_name(&local_98,local_78[0]);
    local_88 = "erase";
    local_a0 = 0;
    local_80 = 5;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar3,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar15 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
  }
LAB_001096b4:
  _err_print_error("erase","core/variant/dictionary.cpp",0xee,
                   "Condition \"!_p->typed_key.validate(key, \"erase\")\" is true. Returning: false"
                   ,0,0);
  uVar8 = 0;
LAB_00109707:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
    uVar8 = uVar8 & 0xff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
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



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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
          if (Variant::needs_deinit[*(int *)(puVar5 + uVar10 * 3)] != '\0') {
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
            FUN_00119c3a();
            return;
          }
        }
        goto LAB_0010a5ef;
      }
      if (lVar11 == lVar9) {
LAB_0010a693:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_0010a5ef;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010a693;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_0010a722;
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
LAB_0010a5ef:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010a722:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dictionary::operator[](Variant const&) */

undefined8 __thiscall Dictionary::operator[](Dictionary *this,Variant *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
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
  undefined8 uVar19;
  Object *pOVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  int *piVar27;
  BucketLarge *pBVar28;
  BucketMedium *pBVar29;
  BucketSmall *pBVar30;
  undefined8 *puVar31;
  Variant *pVVar32;
  long *plVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  uint uVar37;
  ulong *puVar38;
  StringName *pSVar39;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  long in_FS_OFFSET;
  bool bVar43;
  float fVar44;
  undefined1 auVar45 [16];
  CowData<char32_t> *local_d8;
  long local_b8;
  Object *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar24 = *(long *)this;
  iVar35 = *(int *)(lVar24 + 0x40);
  if (iVar35 == 0) goto LAB_0010a985;
  if (iVar35 == local_78[0]) {
    if (iVar35 == 0x18) {
      uVar25 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar25 != 0) {
        uVar37 = (uint)uVar25 & 0xffffff;
        if (uVar37 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar40 = (ulong)local_88 >> 8;
            local_88 = (char *)(uVar40 << 8);
            LOCK();
            bVar43 = (char)ObjectDB::spin_lock == '\0';
            if (bVar43) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar43) break;
            local_88 = (char *)(uVar40 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar38 = (ulong *)((ulong)uVar37 * 0x10 + ObjectDB::object_slots);
          if ((uVar25 >> 0x18 & 0x7fffffffff) == (*puVar38 & 0x7fffffffff)) {
            plVar1 = (long *)puVar38[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar24 + 0x48) != 0) {
                if (plVar1[1] == 0) {
                  pSVar39 = (StringName *)plVar1[0x23];
                  if (pSVar39 == (StringName *)0x0) {
                    pSVar39 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar39 = (StringName *)(plVar1[1] + 0x20);
                }
                StringName::StringName((StringName *)&local_b8,pSVar39);
                if (local_b8 == *(long *)(lVar24 + 0x48)) {
LAB_0010ad53:
                  if (*(long *)(lVar24 + 0x50) == 0) {
                    if ((StringName::configured != '\0') && (local_b8 != 0)) {
                      StringName::unref();
                    }
                    goto LAB_0010aa06;
                  }
                  (**(code **)(*plVar1 + 0x98))((Variant *)local_58,plVar1);
                  local_b0 = (Object *)0x0;
                  Ref<Script>::operator=((Ref<Script> *)&local_b0,(Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  pOVar20 = local_b0;
                  if (local_b0 != (Object *)0x0) {
                    cVar21 = (**(code **)(*(long *)local_b0 + 0x1e8))(local_b0);
                    if (cVar21 == '\0') {
                      plVar1 = *(long **)(lVar24 + 0x50);
                      if (plVar1[1] == 0) {
                        plVar33 = (long *)plVar1[0x23];
                        if (plVar33 == (long *)0x0) {
                          plVar33 = (long *)(**(code **)(*plVar1 + 0x40))();
                        }
                      }
                      else {
                        plVar33 = (long *)(plVar1[1] + 0x20);
                      }
                      lVar2 = *plVar33;
                      if (lVar2 == 0) {
LAB_0010cb5d:
                        local_a0 = 0;
                      }
                      else {
                        local_a0 = 0;
                        if (*(char **)(lVar2 + 8) == (char *)0x0) {
                          if (*(long *)(lVar2 + 0x10) == 0) goto LAB_0010cb5d;
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_a0,(CowData *)(lVar2 + 0x10));
                        }
                        else {
                          String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar2 + 8));
                        }
                      }
                      local_d8 = (CowData<char32_t> *)&local_a0;
                      local_98 = 0;
                      String::parse_latin1((String_conflict *)&local_98,*(char **)(lVar24 + 0x58));
                      local_90 = 0;
                      String::parse_latin1((String_conflict *)&local_90,"use `operator[]`");
                      local_88 = (char *)0x0;
                      String::parse_latin1
                                ((String_conflict *)&local_88,
                                 "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                                );
                      vformat<String,String,String>
                                ((CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_88,
                                 (String_conflict *)&local_90,(String_conflict *)&local_98,local_d8)
                      ;
                      _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                       0x92,
                                       "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                       ,(CowData<char32_t> *)&local_a8,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      CowData<char32_t>::_unref(local_d8);
                    }
                    cVar22 = RefCounted::unreference();
                    if ((cVar22 != '\0') && (cVar22 = predelete_handler(pOVar20), cVar22 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                    if ((StringName::configured != '\0') && (local_b8 != 0)) {
                      StringName::unref();
                    }
                    lVar24 = *(long *)this;
                    if (cVar21 == '\0') goto LAB_0010a929;
                    goto LAB_0010a985;
                  }
                  plVar1 = *(long **)(lVar24 + 0x50);
                  if (plVar1[1] == 0) {
                    plVar33 = (long *)plVar1[0x23];
                    if (plVar33 == (long *)0x0) {
                      plVar33 = (long *)(**(code **)(*plVar1 + 0x40))();
                    }
                  }
                  else {
                    plVar33 = (long *)(plVar1[1] + 0x20);
                  }
                  lVar2 = *plVar33;
                  if (lVar2 == 0) {
LAB_0010cb2c:
                    local_a0 = 0;
                  }
                  else {
                    local_a0 = 0;
                    if (*(char **)(lVar2 + 8) == (char *)0x0) {
                      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_0010cb2c;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_a0,(CowData *)(lVar2 + 0x10));
                    }
                    else {
                      String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar2 + 8));
                    }
                  }
                  local_d8 = (CowData<char32_t> *)&local_a0;
                  local_98 = 0;
                  String::parse_latin1((String_conflict *)&local_98,*(char **)(lVar24 + 0x58));
                  local_90 = 0;
                  String::parse_latin1((String_conflict *)&local_90,"use `operator[]`");
                  local_88 = (char *)0x0;
                  String::parse_latin1
                            ((String_conflict *)&local_88,
                             "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                            );
                  vformat<String,String,String>
                            ((CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_88,
                             (String_conflict *)&local_90,(String_conflict *)&local_98,local_d8);
                  _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91
                                   ,"Condition \"other_script.is_null()\" is true. Returning: false"
                                   ,(CowData<char32_t> *)&local_a8,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref(local_d8);
                }
                else {
                  pSVar39 = (StringName *)(plVar1[1] + 0x20);
                  if ((plVar1[1] == 0) &&
                     (pSVar39 = (StringName *)plVar1[0x23], pSVar39 == (StringName *)0x0)) {
                    pSVar39 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                  cVar21 = ClassDB::is_parent_class(pSVar39,(StringName *)(lVar24 + 0x48));
                  if (cVar21 != '\0') goto LAB_0010ad53;
                  lVar2 = *(long *)(lVar24 + 0x48);
                  if (lVar2 == 0) {
LAB_0010caee:
                    local_a0 = 0;
                  }
                  else {
                    local_a0 = 0;
                    if (*(char **)(lVar2 + 8) == (char *)0x0) {
                      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_0010caee;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_a0,(CowData *)(lVar2 + 0x10));
                    }
                    else {
                      String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar2 + 8));
                    }
                  }
                  local_d8 = (CowData<char32_t> *)&local_a0;
                  uVar26 = *(undefined8 *)(lVar24 + 0x58);
                  (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_98,plVar1);
                  local_90 = 0;
                  String::parse_latin1((String_conflict *)&local_90,"use `operator[]`");
                  local_88 = (char *)0x0;
                  String::parse_latin1
                            ((String_conflict *)&local_88,
                             "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                            );
                  vformat<String,String,char_const*,String>
                            ((CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_88,
                             (String_conflict *)&local_90,(CowData<char32_t> *)&local_98,uVar26,
                             local_d8);
                  _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87
                                   ,
                                   "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                                   ,(CowData<char32_t> *)&local_a8,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref(local_d8);
                }
                if ((StringName::configured != '\0') && (local_b8 != 0)) {
                  StringName::unref();
                }
                lVar24 = *(long *)this;
                goto LAB_0010a929;
              }
LAB_0010aa06:
              lVar24 = *(long *)this;
              goto LAB_0010a985;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        pcVar3 = *(char **)(lVar24 + 0x58);
        local_80 = 0;
        local_a0 = 0;
        if (pcVar3 != (char *)0x0) {
          local_80 = strlen(pcVar3);
        }
        local_88 = pcVar3;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "use `operator[]`";
        local_98 = 0;
        local_80 = 0x10;
        String::parse_latin1((StrRange *)&local_98);
        local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
        local_90 = 0;
        local_80 = 0x4b;
        String::parse_latin1((StrRange *)&local_90);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                   (StrRange *)&local_a0);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        lVar24 = *(long *)this;
        goto LAB_0010a929;
      }
LAB_0010abbb:
      lVar24 = *(long *)this;
    }
LAB_0010a985:
    piVar27 = *(int **)(lVar24 + 8);
    if (piVar27 == (int *)0x0) {
      if ((*(long *)(lVar24 + 0x18) != 0) && (*(int *)(lVar24 + 0x3c) != 0)) {
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar24 + 0x38) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar24 + 0x38) * 8);
        uVar23 = Variant::hash();
        uVar25 = CONCAT44(0,uVar37);
        lVar41 = *(long *)(lVar24 + 0x20);
        uVar34 = 1;
        if (uVar23 != 0) {
          uVar34 = uVar23;
        }
        uVar42 = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar34 * lVar2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar25;
        lVar36 = SUB168(auVar4 * auVar11,8);
        uVar23 = *(uint *)(lVar41 + lVar36 * 4);
        if (uVar23 != 0) {
          iVar35 = SUB164(auVar4 * auVar11,8);
          do {
            if (uVar34 == uVar23) {
              cVar21 = StringLikeVariantComparator::compare
                                 ((Variant *)
                                  (*(long *)(*(long *)(lVar24 + 0x18) + lVar36 * 8) + 0x10),
                                  (Variant *)local_78);
              if (cVar21 != '\0') goto switchD_0010a9e8_caseD_5;
              lVar41 = *(long *)(lVar24 + 0x20);
            }
            uVar42 = uVar42 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar35 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar25;
            lVar36 = SUB168(auVar5 * auVar12,8);
            uVar23 = *(uint *)(lVar41 + lVar36 * 4);
            iVar35 = SUB164(auVar5 * auVar12,8);
          } while ((uVar23 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar23 * lVar2, auVar13._8_8_ = 0,
                  auVar13._0_8_ = uVar25, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar37 + iVar35) - SUB164(auVar6 * auVar13,8)) * lVar2,
                  auVar14._8_8_ = 0, auVar14._0_8_ = uVar25, uVar42 <= SUB164(auVar7 * auVar14,8)));
        }
        lVar24 = *(long *)this;
      }
      iVar35 = *(int *)(lVar24 + 0x60);
      piVar27 = (int *)HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                       ::operator[]((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                                     *)(lVar24 + 0x10),(Variant *)local_78);
      if (Variant::needs_deinit[*piVar27] != '\0') {
        Variant::_clear_internal();
      }
      *piVar27 = iVar35;
      uVar19 = _UNK_0011b878;
      uVar26 = __LC85;
      switch(iVar35) {
      case 4:
        piVar27[2] = 0;
        piVar27[3] = 0;
        *piVar27 = 4;
        break;
      case 0xb:
        pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar27 + 2) = pBVar30;
        *(undefined8 *)pBVar30 = 0x3f800000;
        *(undefined8 *)(pBVar30 + 8) = 0x3f80000000000000;
        *(undefined8 *)(pBVar30 + 0x10) = 0;
        *piVar27 = 0xb;
        break;
      case 0x10:
        pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar27 + 2) = pBVar30;
        *(undefined8 *)pBVar30 = 0;
        *(undefined4 *)(pBVar30 + 8) = 0;
        *(undefined8 *)(pBVar30 + 0xc) = 0;
        *(undefined4 *)(pBVar30 + 0x14) = 0;
        *piVar27 = 0x10;
        break;
      case 0x11:
        pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar45 = ZEXT416(_LC83);
        *(BucketMedium **)(piVar27 + 2) = pBVar29;
        *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar29 = auVar45;
        *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
        *piVar27 = 0x11;
        break;
      case 0x12:
        pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar45 = ZEXT416(_LC83);
        *(BucketMedium **)(piVar27 + 2) = pBVar29;
        *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
        *(undefined8 *)(pBVar29 + 0x24) = 0;
        *(undefined4 *)(pBVar29 + 0x2c) = 0;
        *(undefined1 (*) [16])pBVar29 = auVar45;
        *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
        *piVar27 = 0x12;
        break;
      case 0x13:
        pBVar28 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                             &Variant::Pools::_bucket_large);
        *(BucketLarge **)(piVar27 + 2) = pBVar28;
        Projection::Projection((Projection *)pBVar28);
        *piVar27 = 0x13;
        break;
      case 0x14:
        *piVar27 = 0x14;
        *(undefined8 *)(piVar27 + 2) = uVar26;
        *(undefined8 *)(piVar27 + 4) = uVar19;
        break;
      case 0x15:
        piVar27[2] = 0;
        piVar27[3] = 0;
        *piVar27 = 0x15;
        break;
      case 0x16:
        piVar27[2] = 0;
        piVar27[3] = 0;
        *piVar27 = 0x16;
        break;
      case 0x18:
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        *piVar27 = 0x18;
        break;
      case 0x19:
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        *piVar27 = 0x19;
        break;
      case 0x1a:
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        *piVar27 = 0x1a;
        break;
      case 0x1b:
        Dictionary((Dictionary *)(piVar27 + 2));
        *piVar27 = 0x1b;
        break;
      case 0x1c:
        Array::Array((Array *)(piVar27 + 2));
        *piVar27 = 0x1c;
        break;
      case 0x1d:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b570;
        if (local_80 != 0) {
          CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar31 + 3),(CowData *)&local_80)
          ;
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
        *piVar27 = 0x1d;
        break;
      case 0x1e:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b590;
        if (local_80 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<int>::_unref((CowData<int> *)&local_80);
        *piVar27 = 0x1e;
        break;
      case 0x1f:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5b0;
        if (local_80 != 0) {
          CowData<long>::_ref((CowData<long> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<long>::_unref((CowData<long> *)&local_80);
        *piVar27 = 0x1f;
        break;
      case 0x20:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5d0;
        if (local_80 != 0) {
          CowData<float>::_ref((CowData<float> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<float>::_unref((CowData<float> *)&local_80);
        *piVar27 = 0x20;
        break;
      case 0x21:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5f0;
        if (local_80 != 0) {
          CowData<double>::_ref((CowData<double> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<double>::_unref((CowData<double> *)&local_80);
        *piVar27 = 0x21;
        break;
      case 0x22:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b610;
        if (local_80 != 0) {
          CowData<String>::_ref((CowData<String> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<String>::_unref((CowData<String> *)&local_80);
        *piVar27 = 0x22;
        break;
      case 0x23:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b630;
        if (local_80 != 0) {
          CowData<Vector2>::_ref((CowData<Vector2> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
        *piVar27 = 0x23;
        break;
      case 0x24:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b650;
        if (local_80 != 0) {
          CowData<Vector3>::_ref((CowData<Vector3> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
        *piVar27 = 0x24;
        break;
      case 0x25:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b670;
        if (local_80 != 0) {
          CowData<Color>::_ref((CowData<Color> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Color>::_unref((CowData<Color> *)&local_80);
        *piVar27 = 0x25;
        break;
      case 0x26:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b690;
        if (local_80 != 0) {
          CowData<Vector4>::_ref((CowData<Vector4> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector4>::_unref((CowData<Vector4> *)&local_80);
        *piVar27 = 0x26;
      }
switchD_0010a9e8_caseD_5:
      uVar26 = HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
               ::operator[]((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                             *)(*(long *)this + 0x10),(Variant *)local_78);
    }
    else {
      if ((*(long *)(lVar24 + 0x18) != 0) && (*(int *)(lVar24 + 0x3c) != 0)) {
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar24 + 0x38) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar24 + 0x38) * 8);
        uVar23 = Variant::hash();
        uVar25 = CONCAT44(0,uVar37);
        lVar41 = *(long *)(lVar24 + 0x20);
        uVar34 = 1;
        if (uVar23 != 0) {
          uVar34 = uVar23;
        }
        uVar42 = 0;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = (ulong)uVar34 * lVar2;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar25;
        lVar36 = SUB168(auVar45 * auVar15,8);
        uVar23 = *(uint *)(lVar41 + lVar36 * 4);
        uVar40 = (ulong)uVar23;
        if (uVar23 != 0) {
          iVar35 = SUB164(auVar45 * auVar15,8);
          do {
            if ((uint)uVar40 == uVar34) {
              cVar21 = StringLikeVariantComparator::compare
                                 ((Variant *)
                                  (*(long *)(*(long *)(lVar24 + 0x18) + lVar36 * 8) + 0x10),
                                  (Variant *)local_78);
              if (cVar21 != '\0') {
                pVVar32 = (Variant *)
                          HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                          ::operator[]((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                                        *)(*(long *)this + 0x10),(Variant *)local_78);
                Variant::operator=(*(Variant **)(*(long *)this + 8),pVVar32);
                goto switchD_0010b050_caseD_5;
              }
              lVar41 = *(long *)(lVar24 + 0x20);
            }
            uVar42 = uVar42 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar25;
            lVar36 = SUB168(auVar8 * auVar16,8);
            uVar23 = *(uint *)(lVar41 + lVar36 * 4);
            uVar40 = (ulong)uVar23;
            iVar35 = SUB164(auVar8 * auVar16,8);
          } while ((uVar23 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = uVar40 * lVar2, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar25, auVar10._8_8_ = 0,
                  auVar10._0_8_ = (ulong)((uVar37 + iVar35) - SUB164(auVar9 * auVar17,8)) * lVar2,
                  auVar18._8_8_ = 0, auVar18._0_8_ = uVar25, uVar42 <= SUB164(auVar10 * auVar18,8)))
          ;
        }
        lVar24 = *(long *)this;
        piVar27 = *(int **)(lVar24 + 8);
      }
      iVar35 = *(int *)(lVar24 + 0x60);
      if (Variant::needs_deinit[*piVar27] != '\0') {
        Variant::_clear_internal();
      }
      *piVar27 = iVar35;
      uVar19 = _UNK_0011b878;
      uVar26 = __LC85;
      switch(iVar35) {
      case 4:
        *piVar27 = 4;
        piVar27[2] = 0;
        piVar27[3] = 0;
        break;
      case 0xb:
        pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar27 + 2) = pBVar30;
        *(undefined8 *)pBVar30 = 0x3f800000;
        *(undefined8 *)(pBVar30 + 8) = 0x3f80000000000000;
        *(undefined8 *)(pBVar30 + 0x10) = 0;
        *piVar27 = 0xb;
        break;
      case 0x10:
        pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar27 + 2) = pBVar30;
        *(undefined8 *)pBVar30 = 0;
        *(undefined4 *)(pBVar30 + 8) = 0;
        *(undefined8 *)(pBVar30 + 0xc) = 0;
        *(undefined4 *)(pBVar30 + 0x14) = 0;
        *piVar27 = 0x10;
        break;
      case 0x11:
        pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar45 = ZEXT416(_LC83);
        *(BucketMedium **)(piVar27 + 2) = pBVar29;
        *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar29 = auVar45;
        *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
        *piVar27 = 0x11;
        break;
      case 0x12:
        pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar45 = ZEXT416(_LC83);
        *(BucketMedium **)(piVar27 + 2) = pBVar29;
        *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
        *(undefined8 *)(pBVar29 + 0x24) = 0;
        *(undefined4 *)(pBVar29 + 0x2c) = 0;
        *(undefined1 (*) [16])pBVar29 = auVar45;
        *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
        *piVar27 = 0x12;
        break;
      case 0x13:
        pBVar28 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                             &Variant::Pools::_bucket_large);
        *(BucketLarge **)(piVar27 + 2) = pBVar28;
        Projection::Projection((Projection *)pBVar28);
        *piVar27 = 0x13;
        break;
      case 0x14:
        *piVar27 = 0x14;
        *(undefined8 *)(piVar27 + 2) = uVar26;
        *(undefined8 *)(piVar27 + 4) = uVar19;
        break;
      case 0x15:
        *piVar27 = 0x15;
        piVar27[2] = 0;
        piVar27[3] = 0;
        break;
      case 0x16:
        *piVar27 = 0x16;
        piVar27[2] = 0;
        piVar27[3] = 0;
        break;
      case 0x18:
        *piVar27 = 0x18;
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        break;
      case 0x19:
        *piVar27 = 0x19;
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        break;
      case 0x1a:
        *piVar27 = 0x1a;
        piVar27[2] = 0;
        piVar27[3] = 0;
        piVar27[4] = 0;
        piVar27[5] = 0;
        break;
      case 0x1b:
        Dictionary((Dictionary *)(piVar27 + 2));
        *piVar27 = 0x1b;
        break;
      case 0x1c:
        Array::Array((Array *)(piVar27 + 2));
        *piVar27 = 0x1c;
        break;
      case 0x1d:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b570;
        if (local_80 != 0) {
          CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar31 + 3),(CowData *)&local_80)
          ;
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
        *piVar27 = 0x1d;
        break;
      case 0x1e:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b590;
        if (local_80 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<int>::_unref((CowData<int> *)&local_80);
        *piVar27 = 0x1e;
        break;
      case 0x1f:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5b0;
        if (local_80 != 0) {
          CowData<long>::_ref((CowData<long> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<long>::_unref((CowData<long> *)&local_80);
        *piVar27 = 0x1f;
        break;
      case 0x20:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5d0;
        puVar31[3] = 0;
        if (local_80 != 0) {
          CowData<float>::_ref((CowData<float> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<float>::_unref((CowData<float> *)&local_80);
        *piVar27 = 0x20;
        break;
      case 0x21:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b5f0;
        puVar31[3] = 0;
        if (local_80 != 0) {
          CowData<double>::_ref((CowData<double> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<double>::_unref((CowData<double> *)&local_80);
        *piVar27 = 0x21;
        break;
      case 0x22:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b610;
        puVar31[3] = 0;
        if (local_80 != 0) {
          CowData<String>::_ref((CowData<String> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<String>::_unref((CowData<String> *)&local_80);
        *piVar27 = 0x22;
        break;
      case 0x23:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b630;
        if (local_80 != 0) {
          CowData<Vector2>::_ref((CowData<Vector2> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
        *piVar27 = 0x23;
        break;
      case 0x24:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b650;
        if (local_80 != 0) {
          CowData<Vector3>::_ref((CowData<Vector3> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
        *piVar27 = 0x24;
        break;
      case 0x25:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b670;
        if (local_80 != 0) {
          CowData<Color>::_ref((CowData<Color> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Color>::_unref((CowData<Color> *)&local_80);
        *piVar27 = 0x25;
        break;
      case 0x26:
        local_80 = 0;
        puVar31 = (undefined8 *)operator_new(0x20,"");
        *puVar31 = &PTR__PackedArrayRefBase_0011b550;
        *(undefined4 *)(puVar31 + 1) = 0;
        puVar31[3] = 0;
        *puVar31 = &PTR__PackedArrayRef_0011b690;
        if (local_80 != 0) {
          CowData<Vector4>::_ref((CowData<Vector4> *)(puVar31 + 3),(CowData *)&local_80);
        }
        *(undefined4 *)(puVar31 + 1) = 1;
        *(undefined8 **)(piVar27 + 2) = puVar31;
        CowData<Vector4>::_unref((CowData<Vector4> *)&local_80);
        *piVar27 = 0x26;
      }
switchD_0010b050_caseD_5:
      uVar26 = *(undefined8 *)(*(long *)this + 8);
    }
  }
  else {
    if (local_78[0] == 0) {
      if (iVar35 == 0x18) goto LAB_0010a985;
    }
    else if (iVar35 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        lVar24 = *(long *)this;
        goto LAB_0010a985;
      }
    }
    else if (iVar35 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_0010abbb;
      }
    }
    else if ((iVar35 == 3) && (local_78[0] == 2)) {
      fVar44 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar44);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      lVar24 = *(long *)this;
      local_70 = local_50;
      uStack_68 = uStack_48;
      goto LAB_0010a985;
    }
    Variant::get_type_name(&local_90);
    uVar26 = *(undefined8 *)(lVar24 + 0x58);
    Variant::get_type_name(&local_98,local_78[0]);
    local_88 = "use `operator[]`";
    local_a0 = 0;
    local_80 = 0x10;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar26,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar3 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar24 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    lVar24 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    lVar24 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    lVar24 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    lVar24 = *(long *)this;
LAB_0010a929:
    piVar27 = *(int **)(lVar24 + 0x80);
    if (piVar27 == (int *)0x0) {
      piVar27 = (int *)operator_new(0x18,"");
      *piVar27 = 0;
      *(undefined1 (*) [16])(piVar27 + 2) = (undefined1  [16])0x0;
      lVar24 = *(long *)this;
      *(int **)(lVar24 + 0x80) = piVar27;
      iVar35 = *(int *)(lVar24 + 0x60);
    }
    else {
      iVar35 = *(int *)(lVar24 + 0x60);
      if (Variant::needs_deinit[*piVar27] != '\0') {
        Variant::_clear_internal();
      }
    }
    *piVar27 = iVar35;
    uVar19 = _UNK_0011b878;
    uVar26 = __LC85;
    switch(iVar35) {
    case 4:
      piVar27[2] = 0;
      piVar27[3] = 0;
      *piVar27 = 4;
      break;
    case 0xb:
      pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(piVar27 + 2) = pBVar30;
      *(undefined8 *)pBVar30 = 0x3f800000;
      *(undefined8 *)(pBVar30 + 8) = 0x3f80000000000000;
      *(undefined8 *)(pBVar30 + 0x10) = 0;
      *piVar27 = 0xb;
      break;
    case 0x10:
      pBVar30 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(piVar27 + 2) = pBVar30;
      *(undefined8 *)pBVar30 = 0;
      *(undefined4 *)(pBVar30 + 8) = 0;
      *(undefined8 *)(pBVar30 + 0xc) = 0;
      *(undefined4 *)(pBVar30 + 0x14) = 0;
      *piVar27 = 0x10;
      break;
    case 0x11:
      pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      auVar45 = ZEXT416(_LC83);
      *(BucketMedium **)(piVar27 + 2) = pBVar29;
      *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
      *(undefined1 (*) [16])pBVar29 = auVar45;
      *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
      *piVar27 = 0x11;
      break;
    case 0x12:
      pBVar29 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      auVar45 = ZEXT416(_LC83);
      *(BucketMedium **)(piVar27 + 2) = pBVar29;
      *(undefined4 *)(pBVar29 + 0x20) = 0x3f800000;
      *(undefined8 *)(pBVar29 + 0x24) = 0;
      *(undefined4 *)(pBVar29 + 0x2c) = 0;
      *(undefined1 (*) [16])pBVar29 = auVar45;
      *(undefined1 (*) [16])(pBVar29 + 0x10) = auVar45;
      *piVar27 = 0x12;
      break;
    case 0x13:
      pBVar28 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                           &Variant::Pools::_bucket_large);
      *(BucketLarge **)(piVar27 + 2) = pBVar28;
      Projection::Projection((Projection *)pBVar28);
      *piVar27 = 0x13;
      break;
    case 0x14:
      *piVar27 = 0x14;
      *(undefined8 *)(piVar27 + 2) = uVar26;
      *(undefined8 *)(piVar27 + 4) = uVar19;
      break;
    case 0x15:
      piVar27[2] = 0;
      piVar27[3] = 0;
      *piVar27 = 0x15;
      break;
    case 0x16:
      piVar27[2] = 0;
      piVar27[3] = 0;
      *piVar27 = 0x16;
      break;
    case 0x18:
      piVar27[2] = 0;
      piVar27[3] = 0;
      piVar27[4] = 0;
      piVar27[5] = 0;
      *piVar27 = 0x18;
      break;
    case 0x19:
      piVar27[2] = 0;
      piVar27[3] = 0;
      piVar27[4] = 0;
      piVar27[5] = 0;
      *piVar27 = 0x19;
      break;
    case 0x1a:
      piVar27[2] = 0;
      piVar27[3] = 0;
      piVar27[4] = 0;
      piVar27[5] = 0;
      *piVar27 = 0x1a;
      break;
    case 0x1b:
      Dictionary((Dictionary *)(piVar27 + 2));
      *piVar27 = 0x1b;
      break;
    case 0x1c:
      Array::Array((Array *)(piVar27 + 2));
      *piVar27 = 0x1c;
      break;
    case 0x1d:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b570;
      if (local_80 != 0) {
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x1d;
      break;
    case 0x1e:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b590;
      if (local_80 != 0) {
        CowData<int>::_ref((CowData<int> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x1e;
      break;
    case 0x1f:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b5b0;
      if (local_80 != 0) {
        CowData<long>::_ref((CowData<long> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x1f;
      break;
    case 0x20:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b5d0;
      if (local_80 != 0) {
        CowData<float>::_ref((CowData<float> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x20;
      break;
    case 0x21:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b5f0;
      if (local_80 != 0) {
        CowData<double>::_ref((CowData<double> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x21;
      break;
    case 0x22:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b610;
      if (local_80 != 0) {
        CowData<String>::_ref((CowData<String> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      CowData<String>::_unref((CowData<String> *)&local_80);
      *piVar27 = 0x22;
      break;
    case 0x23:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b630;
      if (local_80 != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x23;
      break;
    case 0x24:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b650;
      if (local_80 != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x24;
      break;
    case 0x25:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b670;
      if (local_80 != 0) {
        CowData<Color>::_ref((CowData<Color> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x25;
      break;
    case 0x26:
      local_80 = 0;
      puVar31 = (undefined8 *)operator_new(0x20,"");
      *puVar31 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar31 + 1) = 0;
      puVar31[3] = 0;
      *puVar31 = &PTR__PackedArrayRef_0011b690;
      if (local_80 != 0) {
        CowData<Vector4>::_ref((CowData<Vector4> *)(puVar31 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar31 + 1) = 1;
      *(undefined8 **)(piVar27 + 2) = puVar31;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar27 = 0x26;
    }
    uVar26 = *(undefined8 *)(*(long *)this + 0x80);
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::get_or_add(Variant const&, Variant const&) */

Variant * Dictionary::get_or_add(Variant *param_1,Variant *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  Variant *pVVar7;
  long lVar8;
  Object *pOVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 uVar13;
  Variant *in_RCX;
  char *pcVar14;
  Variant *in_RDX;
  undefined8 uVar15;
  uint uVar16;
  StringName *pSVar17;
  String_conflict *pSVar18;
  long in_FS_OFFSET;
  bool bVar19;
  float fVar20;
  CowData<char32_t> *local_110;
  CowData<char32_t> *local_108;
  long local_d8;
  Object *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  size_t local_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_98,in_RDX);
  lVar3 = *(long *)param_2;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar2 == 0) goto LAB_0010ce10;
  if (iVar2 == local_98[0]) {
    if ((iVar2 != 0x18) ||
       (uVar10 = Variant::operator_cast_to_ObjectID((Variant *)local_98), uVar10 == 0))
    goto LAB_0010ce10;
    uVar16 = (uint)uVar10 & 0xffffff;
    if (uVar16 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar4 = (ulong)local_a8 >> 8;
        local_a8 = (char *)(uVar4 << 8);
        LOCK();
        bVar19 = (char)ObjectDB::spin_lock == '\0';
        if (bVar19) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar19) break;
        local_a8 = (char *)(uVar4 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar11 = (ulong *)((ulong)uVar16 * 0x10 + ObjectDB::object_slots);
      if ((uVar10 >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
        plVar1 = (long *)puVar11[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar3 + 0x48) == 0) goto LAB_0010ce10;
          if (plVar1[1] == 0) {
            pSVar17 = (StringName *)plVar1[0x23];
            if (pSVar17 == (StringName *)0x0) {
              pSVar17 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
            }
          }
          else {
            pSVar17 = (StringName *)(plVar1[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_d0,pSVar17);
          if (local_d0 == *(Object **)(lVar3 + 0x48)) {
LAB_0010d2da:
            if (*(long *)(lVar3 + 0x50) == 0) {
              if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
                StringName::unref();
              }
              goto LAB_0010ce10;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar8 = Variant::get_validated_object();
            if (lVar8 == 0) {
LAB_0010da72:
              cVar5 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar9 != (Object *)0x0) {
                cVar5 = RefCounted::reference();
                if (cVar5 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar5 = (**(code **)(*(long *)pOVar9 + 0x1e8))();
                  if (cVar5 == '\0') {
                    plVar1 = *(long **)(lVar3 + 0x50);
                    if (plVar1[1] == 0) {
                      plVar12 = (long *)plVar1[0x23];
                      if (plVar12 == (long *)0x0) {
                        plVar12 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar12 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar8 = *plVar12;
                    if (lVar8 == 0) {
LAB_0010e1e8:
                      local_c8 = 0;
                    }
                    else if (*(char **)(lVar8 + 8) == (char *)0x0) {
                      local_c8 = 0;
                      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e1e8;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                    }
                    else {
                      local_c8 = 0;
                      String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar8 + 8));
                    }
                    local_108 = (CowData<char32_t> *)&local_c8;
                    local_c0 = 0;
                    String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar3 + 0x58));
                    local_a8 = "get";
                    local_b8 = 0;
                    local_a0 = 3;
                    String::parse_latin1((StrRange *)&local_b8);
                    local_b0 = 0;
                    local_a8 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_a0 = 0x45;
                    String::parse_latin1((StrRange *)&local_b0);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                               (StrRange *)&local_b8,(String_conflict *)&local_c0,local_108);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_a8,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    CowData<char32_t>::_unref(local_108);
                  }
                  cVar6 = RefCounted::unreference();
                  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
                    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                    Memory::free_static(pOVar9,false);
                  }
                  if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  if (cVar5 == '\0') goto LAB_0010cdb0;
                  goto LAB_0010ce10;
                }
                goto LAB_0010da72;
              }
              cVar5 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar5 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar3 + 0x50);
            if (plVar1[1] == 0) {
              plVar12 = (long *)plVar1[0x23];
              if (plVar12 == (long *)0x0) {
                plVar12 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar12 = (long *)(plVar1[1] + 0x20);
            }
            lVar8 = *plVar12;
            if (lVar8 == 0) {
LAB_0010e59e:
              local_c8 = 0;
            }
            else if (*(char **)(lVar8 + 8) == (char *)0x0) {
              local_c8 = 0;
              if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e59e;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
            }
            else {
              local_c8 = 0;
              String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar8 + 8));
            }
            local_108 = (CowData<char32_t> *)&local_c8;
            local_c0 = 0;
            String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar3 + 0x58));
            local_a8 = "get";
            local_b8 = 0;
            local_a0 = 3;
            String::parse_latin1((StrRange *)&local_b8);
            local_a8 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_b0 = 0;
            local_a0 = 0x45;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                       (String_conflict *)&local_c0,local_108);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_a8,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref(local_108);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar17 = (StringName *)plVar1[0x23];
              if (pSVar17 == (StringName *)0x0) {
                pSVar17 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar17 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar5 = ClassDB::is_parent_class(pSVar17,(StringName *)(lVar3 + 0x48));
            if (cVar5 != '\0') goto LAB_0010d2da;
            lVar8 = *(long *)(lVar3 + 0x48);
            if (lVar8 == 0) {
LAB_0010e4b1:
              local_c8 = 0;
            }
            else {
              local_c8 = 0;
              if (*(char **)(lVar8 + 8) == (char *)0x0) {
                if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e4b1;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
              }
              else {
                String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar8 + 8));
              }
            }
            local_108 = (CowData<char32_t> *)&local_c8;
            uVar13 = *(undefined8 *)(lVar3 + 0x58);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_c0,plVar1);
            local_a8 = "get";
            local_b8 = 0;
            local_a0 = 3;
            String::parse_latin1((StrRange *)&local_b8);
            local_a8 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_b0 = 0;
            local_a0 = 0x53;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                       (CowData<char32_t> *)&local_c0,uVar13,local_108);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_a8,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref(local_108);
          }
          if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
            StringName::unref();
          }
          goto LAB_0010cdb0;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar14 = *(char **)(lVar3 + 0x58);
    local_a0 = 0;
    local_c0 = 0;
    if (pcVar14 != (char *)0x0) {
      local_a0 = strlen(pcVar14);
    }
    local_a8 = pcVar14;
    String::parse_latin1((StrRange *)&local_c0);
    local_a8 = "get";
    local_b8 = 0;
    local_a0 = 3;
    String::parse_latin1((StrRange *)&local_b8);
    local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_b0 = 0;
    local_a0 = 0x4b;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
               (StrRange *)&local_c0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_0010cdb0:
    _err_print_error("get_or_add","core/variant/dictionary.cpp",0xb3,
                     "Condition \"!_p->typed_key.validate(key, \"get\")\" is true. Returning: p_default"
                     ,0,0);
    Variant::Variant(param_1,in_RCX);
    cVar5 = Variant::needs_deinit[local_98[0]];
    goto joined_r0x0010ce38;
  }
  if (local_98[0] == 0) {
    if (iVar2 != 0x18) goto LAB_0010cc53;
  }
  else if (iVar2 == 4) {
    if (local_98[0] != 0x15) goto LAB_0010cc53;
    Variant::operator_cast_to_String((Variant *)&local_a8);
    Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_98[0] = local_58[0];
    local_90 = local_50;
    uStack_88 = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  }
  else if (iVar2 == 0x15) {
    if (local_98[0] != 4) {
LAB_0010cc53:
      Variant::get_type_name(&local_b0);
      uVar13 = *(undefined8 *)(lVar3 + 0x58);
      Variant::get_type_name(&local_b8,local_98[0]);
      local_a8 = "get";
      local_c0 = 0;
      local_a0 = 3;
      String::parse_latin1((StrRange *)&local_c0);
      local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_c8 = 0;
      local_a0 = 0x3f;
      String::parse_latin1((StrRange *)&local_c8);
      vformat<String,String,char_const*,String>
                (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar13,&local_b0);
      _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                       "Method/function failed. Returning: false",&local_a8,0,0);
      pcVar14 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar14 + -0x10,false);
        }
      }
      lVar3 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      goto LAB_0010cdb0;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_a8);
    Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_98[0] = local_58[0];
    local_90 = local_50;
    uStack_88 = uStack_48;
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    if ((iVar2 != 3) || (local_98[0] != 2)) goto LAB_0010cc53;
    fVar20 = Variant::operator_cast_to_float((Variant *)local_98);
    Variant::Variant((Variant *)local_58,fVar20);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_98[0] = local_58[0];
  }
LAB_0010ce10:
  pVVar7 = (Variant *)getptr((Dictionary *)param_2,(Variant *)local_98);
  if (pVVar7 == (Variant *)0x0) {
    Variant::Variant((Variant *)local_78,in_RCX);
    lVar3 = *(long *)param_2;
    iVar2 = *(int *)(lVar3 + 0x60);
    if (iVar2 == 0) {
LAB_0010d061:
      pVVar7 = (Variant *)operator[]((Dictionary *)param_2,(Variant *)local_98);
      Variant::operator=(pVVar7,(Variant *)local_78);
      *(int *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
    }
    else {
      if (iVar2 == local_78[0]) {
        if ((iVar2 != 0x18) ||
           (uVar10 = Variant::operator_cast_to_ObjectID((Variant *)local_78), uVar10 == 0))
        goto LAB_0010d061;
        uVar16 = (uint)uVar10 & 0xffffff;
        if (uVar16 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar4 = (ulong)local_a8 >> 8;
            local_a8 = (char *)(uVar4 << 8);
            LOCK();
            bVar19 = (char)ObjectDB::spin_lock == '\0';
            if (bVar19) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar19) break;
            local_a8 = (char *)(uVar4 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar11 = (ulong *)((ulong)uVar16 * 0x10 + ObjectDB::object_slots);
          if ((uVar10 >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
            plVar1 = (long *)puVar11[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar3 + 0x68) == 0) goto LAB_0010d061;
              if (plVar1[1] == 0) {
                pSVar17 = (StringName *)plVar1[0x23];
                if (pSVar17 == (StringName *)0x0) {
                  pSVar17 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar17 = (StringName *)(plVar1[1] + 0x20);
              }
              StringName::StringName((StringName *)&local_d8,pSVar17);
              if (local_d8 == *(long *)(lVar3 + 0x68)) {
LAB_0010d8a5:
                if (*(long *)(lVar3 + 0x70) == 0) {
                  if ((StringName::configured != '\0') && (local_d8 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_0010d061;
                }
                (**(code **)(*plVar1 + 0x98))((Variant *)local_58,plVar1);
                local_d0 = (Object *)0x0;
                Ref<Script>::operator=((Ref<Script> *)&local_d0,(Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                pOVar9 = local_d0;
                if (local_d0 != (Object *)0x0) {
                  cVar5 = (**(code **)(*(long *)local_d0 + 0x1e8))();
                  if (cVar5 == '\0') {
                    plVar1 = *(long **)(lVar3 + 0x70);
                    if (plVar1[1] == 0) {
                      plVar12 = (long *)plVar1[0x23];
                      if (plVar12 == (long *)0x0) {
                        plVar12 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar12 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar8 = *plVar12;
                    if (lVar8 == 0) {
LAB_0010e6c0:
                      local_c0 = 0;
                    }
                    else if (*(char **)(lVar8 + 8) == (char *)0x0) {
                      local_c0 = 0;
                      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e6c0;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c0,(CowData *)(lVar8 + 0x10));
                    }
                    else {
                      local_c0 = 0;
                      String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar8 + 8));
                    }
                    local_110 = (CowData<char32_t> *)&local_c0;
                    local_b8 = 0;
                    String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar3 + 0x78));
                    local_b0 = 0;
                    String::parse_latin1((String_conflict *)&local_b0,"add");
                    local_a8 = (char *)0x0;
                    String::parse_latin1
                              ((String_conflict *)&local_a8,
                               "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                              );
                    pSVar18 = (String_conflict *)&local_a8;
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_c8,(String_conflict *)&local_a8,
                               (String_conflict *)&local_b0,(String_conflict *)&local_b8,local_110);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_c8,0,0,pSVar18);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref(local_110);
                  }
                  cVar6 = RefCounted::unreference();
                  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
                    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                    Memory::free_static(pOVar9,false);
                  }
                  if ((StringName::configured != '\0') && (local_d8 != 0)) {
                    StringName::unref();
                  }
                  if (cVar5 != '\0') goto LAB_0010d061;
                  goto LAB_0010d013;
                }
                plVar1 = *(long **)(lVar3 + 0x70);
                if (plVar1[1] == 0) {
                  plVar12 = (long *)plVar1[0x23];
                  if (plVar12 == (long *)0x0) {
                    plVar12 = (long *)(**(code **)(*plVar1 + 0x40))();
                  }
                }
                else {
                  plVar12 = (long *)(plVar1[1] + 0x20);
                }
                lVar8 = *plVar12;
                if (lVar8 == 0) {
LAB_0010e684:
                  local_c0 = 0;
                }
                else if (*(char **)(lVar8 + 8) == (char *)0x0) {
                  local_c0 = 0;
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e684;
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar8 + 0x10));
                }
                else {
                  local_c0 = 0;
                  String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar8 + 8));
                }
                local_110 = (CowData<char32_t> *)&local_c0;
                local_b8 = 0;
                String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar3 + 0x78));
                local_b0 = 0;
                String::parse_latin1((String_conflict *)&local_b0,"add");
                local_a8 = (char *)0x0;
                String::parse_latin1
                          ((String_conflict *)&local_a8,
                           "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                          );
                uVar13 = vformat<String,String,String>
                                   (&local_c8,(String_conflict *)&local_a8,
                                    (String_conflict *)&local_b0,(String_conflict *)&local_b8,
                                    local_110);
                uVar15 = 0x91;
                pcVar14 = "Condition \"other_script.is_null()\" is true. Returning: false";
              }
              else {
                if (plVar1[1] == 0) {
                  pSVar17 = (StringName *)plVar1[0x23];
                  if (pSVar17 == (StringName *)0x0) {
                    pSVar17 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar17 = (StringName *)(plVar1[1] + 0x20);
                }
                cVar5 = ClassDB::is_parent_class(pSVar17,(StringName *)(lVar3 + 0x68));
                if (cVar5 != '\0') goto LAB_0010d8a5;
                lVar8 = *(long *)(lVar3 + 0x68);
                if (lVar8 == 0) {
LAB_0010e60c:
                  local_c0 = 0;
                }
                else if (*(char **)(lVar8 + 8) == (char *)0x0) {
                  local_c0 = 0;
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0010e60c;
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar8 + 0x10));
                }
                else {
                  local_c0 = 0;
                  String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar8 + 8));
                }
                local_110 = (CowData<char32_t> *)&local_c0;
                uVar13 = *(undefined8 *)(lVar3 + 0x78);
                (**(code **)(*plVar1 + 0x48))(&local_b8);
                local_b0 = 0;
                String::parse_latin1((String_conflict *)&local_b0,"add");
                local_a8 = (char *)0x0;
                String::parse_latin1
                          ((String_conflict *)&local_a8,
                           "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                          );
                vformat<String,String,char_const*,String>
                          (&local_c8,(String_conflict *)&local_a8,(String_conflict *)&local_b0,
                           &local_b8,uVar13,local_110);
                uVar15 = 0x87;
                pcVar14 = 
                "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                ;
              }
              local_110 = (CowData<char32_t> *)&local_c0;
              _err_print_error("validate_object","./core/variant/container_type_validate.h",uVar15,
                               pcVar14,(CowData<char32_t> *)&local_c8,0,0,uVar13);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref(local_110);
              if ((StringName::configured != '\0') && (local_d8 != 0)) {
                StringName::unref();
              }
              goto LAB_0010d013;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        local_b8 = 0;
        String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar3 + 0x78));
        local_b0 = 0;
        String::parse_latin1((String_conflict *)&local_b0,"add");
        local_a8 = (char *)0x0;
        String::parse_latin1
                  ((String_conflict *)&local_a8,
                   "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.");
        vformat<String,String>
                  ((CowData<char32_t> *)&local_c0,(String_conflict *)&local_a8,
                   (String_conflict *)&local_b0,(String_conflict *)&local_b8);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",(CowData<char32_t> *)&local_c0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      else {
        if (local_78[0] == 0) {
          if (iVar2 == 0x18) goto LAB_0010d061;
        }
        else if (iVar2 == 4) {
          if (local_78[0] == 0x15) {
            Variant::operator_cast_to_String((Variant *)&local_a8);
            Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            goto LAB_0010d061;
          }
        }
        else if (iVar2 == 0x15) {
          if (local_78[0] == 4) {
            Variant::operator_cast_to_StringName((Variant *)&local_a8);
            Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
              StringName::unref();
            }
            goto LAB_0010d061;
          }
        }
        else if ((local_78[0] == 2) && (iVar2 == 3)) {
          fVar20 = Variant::operator_cast_to_float((Variant *)local_78);
          Variant::Variant((Variant *)local_58,fVar20);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_70 = local_50;
          uStack_68 = uStack_48;
          local_78[0] = local_58[0];
          goto LAB_0010d061;
        }
        Variant::get_type_name(&local_b0);
        uVar13 = *(undefined8 *)(lVar3 + 0x78);
        Variant::get_type_name(&local_b8,local_78[0]);
        local_a8 = "add";
        local_c0 = 0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_c0);
        local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
        local_c8 = 0;
        local_a0 = 0x3f;
        String::parse_latin1((StrRange *)&local_c8);
        vformat<String,String,char_const*,String>
                  (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar13,&local_b0)
        ;
        _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                         "Method/function failed. Returning: false",&local_a8,0,0);
        pcVar14 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar14 + -0x10,false);
          }
        }
        lVar3 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
LAB_0010d013:
      _err_print_error("get_or_add","core/variant/dictionary.cpp",0xb7,
                       "Condition \"!_p->typed_value.validate(value, \"add\")\" is true. Returning: value"
                       ,0,0);
      *(int *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
    }
  }
  else {
    Variant::Variant(param_1,pVVar7);
  }
  cVar5 = Variant::needs_deinit[local_98[0]];
joined_r0x0010ce38:
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Dictionary::merge(Dictionary const&, bool) */

void __thiscall Dictionary::merge(Dictionary *this,Dictionary *param_1,bool param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  Variant *this_00;
  ulong uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  size_t sVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong *puVar15;
  StringName *pSVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  CowData<char32_t> *local_110;
  CowData<char32_t> *local_100;
  CowData<char32_t> *local_f0;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  size_t local_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)this + 8) == 0) {
    for (puVar3 = *(undefined8 **)(*(long *)param_1 + 0x28); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      Variant::Variant((Variant *)local_98,(Variant *)(puVar3 + 2));
      Variant::Variant((Variant *)local_78,(Variant *)(puVar3 + 5));
      lVar17 = *(long *)this;
      iVar2 = *(int *)(lVar17 + 0x40);
      if (iVar2 != 0) {
        if (iVar2 == local_98[0]) {
          if (iVar2 != 0x18) goto LAB_0010ea29;
          uVar7 = Variant::operator_cast_to_ObjectID((Variant *)local_98);
          if (uVar7 == 0) goto LAB_0010ece0;
          uVar14 = (uint)uVar7 & 0xffffff;
          if (uVar14 < (uint)ObjectDB::slot_max) {
            while( true ) {
              uVar4 = (ulong)local_a8 >> 8;
              local_a8 = (char *)(uVar4 << 8);
              LOCK();
              bVar18 = (char)ObjectDB::spin_lock == '\0';
              if (bVar18) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar18) break;
              local_a8 = (char *)(uVar4 << 8);
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar15 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
            if ((uVar7 >> 0x18 & 0x7fffffffff) == (*puVar15 & 0x7fffffffff)) {
              plVar1 = (long *)puVar15[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if (plVar1 != (long *)0x0) {
                if (*(long *)(lVar17 + 0x48) == 0) goto LAB_0010ece0;
                if (plVar1[1] == 0) {
                  pSVar16 = (StringName *)plVar1[0x23];
                  if (pSVar16 == (StringName *)0x0) {
                    pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar16 = (StringName *)(plVar1[1] + 0x20);
                }
                StringName::StringName((StringName *)&local_d0,pSVar16);
                if (local_d0 == *(long *)(lVar17 + 0x48)) {
LAB_0010f012:
                  if (*(long *)(lVar17 + 0x50) == 0) {
                    if ((StringName::configured != '\0') && (local_d0 != 0)) {
                      StringName::unref();
                    }
LAB_0010ece0:
                    lVar17 = *(long *)this;
                    goto LAB_0010ea29;
                  }
                  (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
                  lVar8 = Variant::get_validated_object();
                  if (lVar8 == 0) {
LAB_0010f081:
                    cVar5 = Variant::needs_deinit[local_58[0]];
                  }
                  else {
                    pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Script::typeinfo,0);
                    if (pOVar9 != (Object *)0x0) {
                      cVar5 = RefCounted::reference();
                      if (cVar5 != '\0') {
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        cVar5 = (**(code **)(*(long *)pOVar9 + 0x1e8))();
                        if (cVar5 == '\0') {
                          plVar1 = *(long **)(lVar17 + 0x50);
                          if (plVar1[1] == 0) {
                            plVar10 = (long *)plVar1[0x23];
                            if (plVar10 == (long *)0x0) {
                              plVar10 = (long *)(**(code **)(*plVar1 + 0x40))();
                            }
                          }
                          else {
                            plVar10 = (long *)(plVar1[1] + 0x20);
                          }
                          lVar8 = *plVar10;
                          if (lVar8 == 0) {
                            local_c8 = 0;
                          }
                          else {
                            pcVar12 = *(char **)(lVar8 + 8);
                            local_c8 = 0;
                            if (pcVar12 == (char *)0x0) {
                              if (*(long *)(lVar8 + 0x10) != 0) {
                                CowData<char32_t>::_ref
                                          ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10))
                                ;
                              }
                            }
                            else {
                              local_a0 = strlen(pcVar12);
                              local_a8 = pcVar12;
                              String::parse_latin1((StrRange *)&local_c8);
                            }
                          }
                          local_f0 = (CowData<char32_t> *)&local_c8;
                          pcVar12 = *(char **)(lVar17 + 0x58);
                          sVar11 = 0;
                          local_c0 = 0;
                          if (pcVar12 != (char *)0x0) {
                            sVar11 = strlen(pcVar12);
                          }
                          local_a8 = pcVar12;
                          local_a0 = sVar11;
                          String::parse_latin1((StrRange *)&local_c0);
                          local_a8 = "merge";
                          local_b8 = 0;
                          local_a0 = 5;
                          String::parse_latin1((StrRange *)&local_b8);
                          local_a8 = 
                          "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                          local_b0 = 0;
                          local_a0 = 0x45;
                          String::parse_latin1((StrRange *)&local_b0);
                          vformat<String,String,String>
                                    ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                                     (StrRange *)&local_b8,(StrRange *)&local_c0,local_f0);
                          _err_print_error("validate_object",
                                           "./core/variant/container_type_validate.h",0x92,
                                           "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                           ,(CowData<char32_t> *)&local_a8,0,0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                          CowData<char32_t>::_unref(local_f0);
                        }
                        cVar6 = RefCounted::unreference();
                        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
                          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                          Memory::free_static(pOVar9,false);
                        }
                        if ((StringName::configured != '\0') && (local_d0 != 0)) {
                          StringName::unref();
                        }
                        if (cVar5 == '\0') goto LAB_0010e9a6;
                        goto LAB_0010ece0;
                      }
                      goto LAB_0010f081;
                    }
                    cVar5 = Variant::needs_deinit[local_58[0]];
                  }
                  if (cVar5 != '\0') {
                    Variant::_clear_internal();
                  }
                  plVar1 = *(long **)(lVar17 + 0x50);
                  if (plVar1[1] == 0) {
                    plVar10 = (long *)plVar1[0x23];
                    if (plVar10 == (long *)0x0) {
                      plVar10 = (long *)(**(code **)(*plVar1 + 0x40))();
                    }
                  }
                  else {
                    plVar10 = (long *)(plVar1[1] + 0x20);
                  }
                  lVar8 = *plVar10;
                  if (lVar8 == 0) {
                    local_c8 = 0;
                  }
                  else {
                    pcVar12 = *(char **)(lVar8 + 8);
                    local_c8 = 0;
                    if (pcVar12 == (char *)0x0) {
                      if (*(long *)(lVar8 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                      }
                    }
                    else {
                      local_a0 = strlen(pcVar12);
                      local_a8 = pcVar12;
                      String::parse_latin1((StrRange *)&local_c8);
                    }
                  }
                  pcVar12 = *(char **)(lVar17 + 0x58);
                  sVar11 = 0;
                  local_c0 = 0;
                  if (pcVar12 != (char *)0x0) {
                    sVar11 = strlen(pcVar12);
                  }
                  local_a8 = pcVar12;
                  local_a0 = sVar11;
                  String::parse_latin1((StrRange *)&local_c0);
                  local_b8 = 0;
                  local_a8 = "merge";
                  local_a0 = 5;
                  String::parse_latin1((StrRange *)&local_b8);
                  local_a8 = 
                  "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                  local_b0 = 0;
                  local_a0 = 0x45;
                  String::parse_latin1((StrRange *)&local_b0);
                  vformat<String,String,String>
                            ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                             (StrRange *)&local_b8,(StrRange *)&local_c0,&local_c8);
                  pcVar12 = "Condition \"other_script.is_null()\" is true. Returning: false";
                  uVar13 = 0x91;
                }
                else {
                  if (plVar1[1] == 0) {
                    pSVar16 = (StringName *)plVar1[0x23];
                    if (pSVar16 == (StringName *)0x0) {
                      pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                    }
                  }
                  else {
                    pSVar16 = (StringName *)(plVar1[1] + 0x20);
                  }
                  cVar5 = ClassDB::is_parent_class(pSVar16,(StringName *)(lVar17 + 0x48));
                  if (cVar5 != '\0') goto LAB_0010f012;
                  lVar8 = *(long *)(lVar17 + 0x48);
                  if (lVar8 == 0) {
                    local_c8 = 0;
                  }
                  else {
                    pcVar12 = *(char **)(lVar8 + 8);
                    if (pcVar12 == (char *)0x0) {
                      local_c8 = 0;
                      if (*(long *)(lVar8 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                      }
                    }
                    else {
                      local_c8 = 0;
                      local_a0 = strlen(pcVar12);
                      local_a8 = pcVar12;
                      String::parse_latin1((StrRange *)&local_c8);
                    }
                  }
                  uVar13 = *(undefined8 *)(lVar17 + 0x58);
                  (**(code **)(*plVar1 + 0x48))(&local_c0,plVar1);
                  local_a8 = "merge";
                  local_b8 = 0;
                  local_a0 = 5;
                  String::parse_latin1((StrRange *)&local_b8);
                  local_a8 = 
                  "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                  ;
                  local_b0 = 0;
                  local_a0 = 0x53;
                  String::parse_latin1((StrRange *)&local_b0);
                  vformat<String,String,char_const*,String>
                            ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                             (StrRange *)&local_b8,&local_c0,uVar13,&local_c8);
                  pcVar12 = 
                  "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                  ;
                  uVar13 = 0x87;
                }
                local_100 = (CowData<char32_t> *)&local_b8;
                local_110 = (CowData<char32_t> *)&local_c0;
                _err_print_error("validate_object","./core/variant/container_type_validate.h",uVar13
                                 ,pcVar12,(CowData<char32_t> *)&local_a8,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref(local_100);
                CowData<char32_t>::_unref(local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                if ((StringName::configured != '\0') && (local_d0 != 0)) {
                  StringName::unref();
                }
                goto LAB_0010e9a6;
              }
            }
            else {
              ObjectDB::spin_lock._0_1_ = '\0';
            }
          }
          else {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
          }
          pcVar12 = *(char **)(lVar17 + 0x58);
          sVar11 = 0;
          local_c0 = 0;
          if (pcVar12 != (char *)0x0) {
            sVar11 = strlen(pcVar12);
          }
          local_a8 = pcVar12;
          local_a0 = sVar11;
          String::parse_latin1((StrRange *)&local_c0);
          local_a8 = "merge";
          local_b8 = 0;
          local_a0 = 5;
          String::parse_latin1((StrRange *)&local_b8);
          local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'."
          ;
          local_b0 = 0;
          local_a0 = 0x4b;
          String::parse_latin1((StrRange *)&local_b0);
          vformat<String,String>
                    ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                     (StrRange *)&local_c0);
          _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                           "Parameter \"object\" is null.",(CowData<char32_t> *)&local_a8,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        else {
          if (local_98[0] == 0) {
            if (iVar2 == 0x18) goto LAB_0010ea29;
          }
          else if (iVar2 == 4) {
            if (local_98[0] == 0x15) {
              Variant::operator_cast_to_String((Variant *)&local_a8);
              Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
              if (Variant::needs_deinit[local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
              pcVar12 = local_a8;
              local_90 = local_50;
              uStack_88 = uStack_48;
              local_98[0] = local_58[0];
              if (local_a8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_a8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_a8 = (char *)0x0;
                  Memory::free_static(pcVar12 + -0x10,false);
                }
              }
              goto LAB_0010ece0;
            }
          }
          else if (iVar2 == 0x15) {
            if (local_98[0] == 4) {
              Variant::operator_cast_to_StringName((Variant *)&local_a8);
              Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
              if (Variant::needs_deinit[local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_98[0] = local_58[0];
              local_90 = local_50;
              uStack_88 = uStack_48;
              if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
                StringName::unref();
              }
              goto LAB_0010ece0;
            }
          }
          else if ((iVar2 == 3) && (local_98[0] == 2)) {
            fVar19 = Variant::operator_cast_to_float((Variant *)local_98);
            Variant::Variant((Variant *)local_58,fVar19);
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_98[0] = local_58[0];
            lVar17 = *(long *)this;
            local_90 = local_50;
            uStack_88 = uStack_48;
            goto LAB_0010ea29;
          }
          Variant::get_type_name(&local_b0);
          uVar13 = *(undefined8 *)(lVar17 + 0x58);
          Variant::get_type_name(&local_b8,local_98[0]);
          local_c0 = 0;
          local_a8 = "merge";
          local_a0 = 5;
          String::parse_latin1((StrRange *)&local_c0);
          local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
          local_c8 = 0;
          local_a0 = 0x3f;
          String::parse_latin1((StrRange *)&local_c8);
          vformat<String,String,char_const*,String>
                    (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar13,
                     &local_b0);
          _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                           "Method/function failed. Returning: false",&local_a8,0,0);
          pcVar12 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
            }
          }
          lVar17 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
        }
LAB_0010e9a6:
        _err_print_error("merge","core/variant/dictionary.cpp",0x133,
                         "Condition \"!_p->typed_key.validate(key, \"merge\")\" is true.",0,0);
LAB_0010e9c7:
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        break;
      }
LAB_0010ea29:
      iVar2 = *(int *)(lVar17 + 0x60);
      if (iVar2 == 0) goto LAB_0010ebe1;
      if (iVar2 == local_78[0]) {
        if ((iVar2 != 0x18) ||
           (uVar7 = Variant::operator_cast_to_ObjectID((Variant *)local_78), uVar7 == 0))
        goto LAB_0010ebe1;
        uVar14 = (uint)uVar7 & 0xffffff;
        if (uVar14 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar4 = (ulong)local_a8 >> 8;
            local_a8 = (char *)(uVar4 << 8);
            LOCK();
            bVar18 = (char)ObjectDB::spin_lock == '\0';
            if (bVar18) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar18) break;
            local_a8 = (char *)(uVar4 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar15 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
          if ((uVar7 >> 0x18 & 0x7fffffffff) == (*puVar15 & 0x7fffffffff)) {
            plVar1 = (long *)puVar15[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar17 + 0x68) == 0) goto LAB_0010ebe1;
              pSVar16 = (StringName *)(plVar1[1] + 0x20);
              if ((plVar1[1] == 0) &&
                 (pSVar16 = (StringName *)plVar1[0x23], pSVar16 == (StringName *)0x0)) {
                pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
              StringName::StringName((StringName *)&local_d0,pSVar16);
              if (local_d0 == *(long *)(lVar17 + 0x68)) {
LAB_0010f6f2:
                if (*(long *)(lVar17 + 0x70) == 0) {
                  if ((StringName::configured != '\0') && (local_d0 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_0010ebe1;
                }
                (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
                lVar8 = Variant::get_validated_object();
                if (lVar8 == 0) {
LAB_0010f761:
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                else {
                  pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Script::typeinfo,0);
                  if (pOVar9 != (Object *)0x0) {
                    cVar5 = RefCounted::reference();
                    if (cVar5 != '\0') {
                      if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      cVar5 = (**(code **)(*(long *)pOVar9 + 0x1e8))();
                      if (cVar5 == '\0') {
                        plVar1 = *(long **)(lVar17 + 0x70);
                        if (plVar1[1] == 0) {
                          plVar10 = (long *)plVar1[0x23];
                          if (plVar10 == (long *)0x0) {
                            plVar10 = (long *)(**(code **)(*plVar1 + 0x40))();
                          }
                        }
                        else {
                          plVar10 = (long *)(plVar1[1] + 0x20);
                        }
                        lVar8 = *plVar10;
                        if (lVar8 == 0) {
                          local_c8 = 0;
                        }
                        else {
                          local_c8 = 0;
                          if (*(char **)(lVar8 + 8) == (char *)0x0) {
                            if (*(long *)(lVar8 + 0x10) != 0) {
                              CowData<char32_t>::_ref
                                        ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                            }
                          }
                          else {
                            String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar8 + 8))
                            ;
                          }
                        }
                        local_f0 = (CowData<char32_t> *)&local_c8;
                        pcVar12 = *(char **)(lVar17 + 0x78);
                        sVar11 = 0;
                        local_c0 = 0;
                        if (pcVar12 != (char *)0x0) {
                          sVar11 = strlen(pcVar12);
                        }
                        local_a8 = pcVar12;
                        local_a0 = sVar11;
                        String::parse_latin1((StrRange *)&local_c0);
                        local_a8 = "merge";
                        local_b8 = 0;
                        local_a0 = 5;
                        String::parse_latin1((StrRange *)&local_b8);
                        local_a8 = 
                        "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                        local_b0 = 0;
                        local_a0 = 0x45;
                        String::parse_latin1((StrRange *)&local_b0);
                        vformat<String,String,String>
                                  ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                                   (StrRange *)&local_b8,(StrRange *)&local_c0,local_f0);
                        _err_print_error("validate_object",
                                         "./core/variant/container_type_validate.h",0x92,
                                         "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                         ,(CowData<char32_t> *)&local_a8,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                        CowData<char32_t>::_unref(local_f0);
                      }
                      cVar6 = RefCounted::unreference();
                      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                        Memory::free_static(pOVar9,false);
                      }
                      if ((StringName::configured != '\0') && (local_d0 != 0)) {
                        StringName::unref();
                      }
                      if (cVar5 == '\0') goto LAB_0010ebae;
                      goto LAB_0010ebe1;
                    }
                    goto LAB_0010f761;
                  }
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                if (cVar5 != '\0') {
                  Variant::_clear_internal();
                }
                plVar1 = *(long **)(lVar17 + 0x70);
                if (plVar1[1] == 0) {
                  plVar10 = (long *)plVar1[0x23];
                  if (plVar10 == (long *)0x0) {
                    plVar10 = (long *)(**(code **)(*plVar1 + 0x40))();
                  }
                }
                else {
                  plVar10 = (long *)(plVar1[1] + 0x20);
                }
                lVar8 = *plVar10;
                if (lVar8 == 0) {
                  local_c8 = 0;
                }
                else {
                  pcVar12 = *(char **)(lVar8 + 8);
                  local_c8 = 0;
                  if (pcVar12 == (char *)0x0) {
                    if (*(long *)(lVar8 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                    }
                  }
                  else {
                    local_a0 = strlen(pcVar12);
                    local_a8 = pcVar12;
                    String::parse_latin1((StrRange *)&local_c8);
                  }
                }
                pcVar12 = *(char **)(lVar17 + 0x78);
                sVar11 = 0;
                local_c0 = 0;
                if (pcVar12 != (char *)0x0) {
                  sVar11 = strlen(pcVar12);
                }
                local_a8 = pcVar12;
                local_a0 = sVar11;
                String::parse_latin1((StrRange *)&local_c0);
                local_b8 = 0;
                local_a8 = "merge";
                local_a0 = 5;
                String::parse_latin1((StrRange *)&local_b8);
                local_a8 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                ;
                local_b0 = 0;
                local_a0 = 0x45;
                String::parse_latin1((StrRange *)&local_b0);
                vformat<String,String,String>
                          ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                           (StrRange *)&local_b8,(StrRange *)&local_c0,&local_c8);
                pcVar12 = "Condition \"other_script.is_null()\" is true. Returning: false";
                uVar13 = 0x91;
              }
              else {
                if (plVar1[1] == 0) {
                  pSVar16 = (StringName *)plVar1[0x23];
                  if (pSVar16 == (StringName *)0x0) {
                    pSVar16 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar16 = (StringName *)(plVar1[1] + 0x20);
                }
                cVar5 = ClassDB::is_parent_class(pSVar16,(StringName *)(lVar17 + 0x68));
                if (cVar5 != '\0') goto LAB_0010f6f2;
                lVar8 = *(long *)(lVar17 + 0x68);
                if (lVar8 == 0) {
                  local_c8 = 0;
                }
                else {
                  pcVar12 = *(char **)(lVar8 + 8);
                  if (pcVar12 == (char *)0x0) {
                    local_c8 = 0;
                    if (*(long *)(lVar8 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c8,(CowData *)(lVar8 + 0x10));
                    }
                  }
                  else {
                    local_c8 = 0;
                    local_a0 = strlen(pcVar12);
                    local_a8 = pcVar12;
                    String::parse_latin1((StrRange *)&local_c8);
                  }
                }
                uVar13 = *(undefined8 *)(lVar17 + 0x78);
                (**(code **)(*plVar1 + 0x48))(&local_c0,plVar1);
                local_a8 = "merge";
                local_b8 = 0;
                local_a0 = 5;
                String::parse_latin1((StrRange *)&local_b8);
                local_a8 = 
                "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                ;
                local_b0 = 0;
                local_a0 = 0x53;
                String::parse_latin1((StrRange *)&local_b0);
                vformat<String,String,char_const*,String>
                          ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                           (StrRange *)&local_b8,&local_c0,uVar13,&local_c8);
                pcVar12 = 
                "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                ;
                uVar13 = 0x87;
              }
              local_100 = (CowData<char32_t> *)&local_b8;
              local_110 = (CowData<char32_t> *)&local_c0;
              _err_print_error("validate_object","./core/variant/container_type_validate.h",uVar13,
                               pcVar12,(CowData<char32_t> *)&local_a8,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref(local_100);
              CowData<char32_t>::_unref(local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              if ((StringName::configured != '\0') && (local_d0 != 0)) {
                StringName::unref();
              }
              goto LAB_0010ebae;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        pcVar12 = *(char **)(lVar17 + 0x78);
        sVar11 = 0;
        local_c0 = 0;
        if (pcVar12 != (char *)0x0) {
          sVar11 = strlen(pcVar12);
        }
        local_a8 = pcVar12;
        local_a0 = sVar11;
        String::parse_latin1((StrRange *)&local_c0);
        local_a8 = "merge";
        local_b8 = 0;
        local_a0 = 5;
        String::parse_latin1((StrRange *)&local_b8);
        local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
        local_b0 = 0;
        local_a0 = 0x4b;
        String::parse_latin1((StrRange *)&local_b0);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                   (StrRange *)&local_c0);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",(CowData<char32_t> *)&local_a8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_0010ebae:
        _err_print_error("merge","core/variant/dictionary.cpp",0x134,
                         "Condition \"!_p->typed_value.validate(value, \"merge\")\" is true.",0,0);
        goto LAB_0010e9c7;
      }
      if (local_78[0] == 0) {
        if (iVar2 != 0x18) goto LAB_0010ea55;
      }
      else if (iVar2 == 4) {
        if (local_78[0] != 0x15) goto LAB_0010ea55;
        Variant::operator_cast_to_String((Variant *)&local_a8);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar12 = local_a8;
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar12 + -0x10,false);
          }
        }
      }
      else if (iVar2 == 0x15) {
        if (local_78[0] != 4) goto LAB_0010ea55;
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        if ((iVar2 != 3) || (local_78[0] != 2)) {
LAB_0010ea55:
          Variant::get_type_name(&local_b0);
          uVar13 = *(undefined8 *)(lVar17 + 0x78);
          Variant::get_type_name(&local_b8,local_78[0]);
          local_c0 = 0;
          local_a8 = "merge";
          local_a0 = 5;
          String::parse_latin1((StrRange *)&local_c0);
          local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
          local_c8 = 0;
          local_a0 = 0x3f;
          String::parse_latin1((StrRange *)&local_c8);
          vformat<String,String,char_const*,String>
                    (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar13,
                     &local_b0);
          _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                           "Method/function failed. Returning: false",&local_a8,0,0);
          pcVar12 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
            }
          }
          lVar17 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          lVar17 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          goto LAB_0010ebae;
        }
        fVar19 = Variant::operator_cast_to_float((Variant *)local_78);
        Variant::Variant((Variant *)local_58,fVar19);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_70 = local_50;
        uStack_68 = uStack_48;
        local_78[0] = local_58[0];
      }
LAB_0010ebe1:
      if ((param_2) || (cVar5 = has(this,(Variant *)local_98), cVar5 == '\0')) {
        this_00 = (Variant *)operator[](this,(Variant *)local_98);
        Variant::operator=(this_00,(Variant *)local_78);
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar5 = Variant::needs_deinit[local_98[0]];
      }
      else {
        Variant::_clear_internal();
        cVar5 = Variant::needs_deinit[local_98[0]];
      }
      if (cVar5 != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    _err_print_error("merge","core/variant/dictionary.cpp",0x12f,
                     "Condition \"_p->read_only\" is true.","Dictionary is in read-only state.",0,0)
    ;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Dictionary::recursive_duplicate(bool, int) const */

Dictionary * Dictionary::recursive_duplicate(bool param_1,int param_2)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  Object *pOVar4;
  long lVar5;
  char cVar6;
  int *piVar7;
  Variant *this;
  int in_ECX;
  char in_DL;
  undefined8 *puVar8;
  undefined4 in_register_00000034;
  long *plVar9;
  undefined7 in_register_00000039;
  Dictionary *this_00;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (Dictionary *)CONCAT71(in_register_00000039,param_1);
  plVar9 = (long *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary(this_00);
  lVar1 = *plVar9;
  lVar2 = *(long *)this_00;
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
  StringName::operator=((StringName *)(lVar2 + 0x48),(StringName *)(lVar1 + 0x48));
  pOVar3 = *(Object **)(lVar1 + 0x50);
  pOVar4 = *(Object **)(lVar2 + 0x50);
  if (pOVar3 != pOVar4) {
    *(Object **)(lVar2 + 0x50) = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
    if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  lVar5 = *plVar9;
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar1 + 0x58);
  lVar1 = *(long *)this_00;
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(lVar5 + 0x60);
  StringName::operator=((StringName *)(lVar1 + 0x68),(StringName *)(lVar5 + 0x68));
  pOVar3 = *(Object **)(lVar5 + 0x70);
  pOVar4 = *(Object **)(lVar1 + 0x70);
  if (pOVar3 != pOVar4) {
    *(Object **)(lVar1 + 0x70) = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      *(undefined8 *)(lVar1 + 0x70) = 0;
    }
    if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar5 + 0x78);
  if (in_ECX < 0x65) {
    puVar8 = *(undefined8 **)(*plVar9 + 0x28);
    if (in_DL == '\0') {
      for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        this = (Variant *)operator[](this_00,(Variant *)(puVar8 + 2));
        Variant::operator=(this,(Variant *)(puVar8 + 5));
      }
    }
    else {
      for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        Variant::recursive_duplicate(SUB81(local_58,0),(int)puVar8 + 0x28);
        Variant::recursive_duplicate(SUB81((Variant *)local_78,0),(int)puVar8 + 0x10);
        piVar7 = (int *)operator[](this_00,(Variant *)local_78);
        if (piVar7 != local_58) {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          *piVar7 = 0;
          *piVar7 = local_58[0];
          local_58[0] = 0;
          *(undefined8 *)(piVar7 + 2) = local_50;
          *(undefined8 *)(piVar7 + 4) = uStack_48;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
    }
  }
  else {
    _err_print_error("recursive_duplicate","core/variant/dictionary.cpp",0x244,
                     "Max recursion reached",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::duplicate(bool) const */

Dictionary * __thiscall Dictionary::duplicate(Dictionary *this,bool param_1)

{
  long lVar1;
  undefined3 in_register_00000031;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  recursive_duplicate(SUB81(this,0),CONCAT31(in_register_00000031,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::merged(Dictionary const&, bool) const */

Dictionary * Dictionary::merged(Dictionary *param_1,bool param_2)

{
  long lVar1;
  bool in_CL;
  Dictionary *in_RDX;
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  recursive_duplicate(SUB81(param_1,0),(int)CONCAT71(in_register_00000031,param_2));
  merge(param_1,in_RDX,in_CL);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::Dictionary(std::initializer_list<KeyValue<Variant, Variant> >) */

void __thiscall Dictionary::Dictionary(Dictionary *this,Variant *param_2,long param_3)

{
  Variant *pVVar1;
  undefined4 *puVar2;
  Variant *this_00;
  Variant *pVVar3;
  
  pVVar3 = param_2 + param_3 * 0x30;
  puVar2 = (undefined4 *)operator_new(0x88,"");
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 0xe) = 2;
  puVar2[0x10] = 0;
  *(char **)(puVar2 + 0x16) = "container";
  puVar2[0x18] = 0;
  *(char **)(puVar2 + 0x1e) = "container";
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x1a) = (undefined1  [16])0x0;
  *(undefined4 **)this = puVar2;
  *puVar2 = 1;
  if (param_2 != pVVar3) {
    do {
      this_00 = (Variant *)operator[](this,param_2);
      pVVar1 = param_2 + 0x18;
      param_2 = param_2 + 0x30;
      Variant::operator=(this_00,pVVar1);
    } while (pVVar3 != param_2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dictionary::operator[](Variant const&) const */

undefined8 __thiscall Dictionary::operator[](Dictionary *this,Variant *param_1)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  Object *pOVar11;
  int *piVar12;
  BucketSmall *pBVar13;
  BucketLarge *this_00;
  BucketMedium *pBVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint uVar17;
  ulong *puVar18;
  StringName *pSVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  CowData<char32_t> *local_e0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_1);
  lVar7 = *(long *)this;
  iVar20 = *(int *)(lVar7 + 0x40);
  if (iVar20 == 0) goto LAB_00110b00;
  if (iVar20 == local_78[0]) {
    if (iVar20 == 0x18) {
      uVar9 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
      if (uVar9 != 0) {
        uVar17 = (uint)uVar9 & 0xffffff;
        if (uVar17 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar3 = (ulong)local_88 >> 8;
            local_88 = (char *)(uVar3 << 8);
            LOCK();
            bVar21 = (char)ObjectDB::spin_lock == '\0';
            if (bVar21) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar21) break;
            local_88 = (char *)(uVar3 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar18 = (ulong *)((ulong)uVar17 * 0x10 + ObjectDB::object_slots);
          if ((uVar9 >> 0x18 & 0x7fffffffff) == (*puVar18 & 0x7fffffffff)) {
            plVar1 = (long *)puVar18[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar7 + 0x48) == 0) {
LAB_00110b60:
                lVar7 = *(long *)this;
                goto LAB_00110b00;
              }
              if (plVar1[1] == 0) {
                pSVar19 = (StringName *)plVar1[0x23];
                if (pSVar19 == (StringName *)0x0) {
                  pSVar19 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                }
              }
              else {
                pSVar19 = (StringName *)(plVar1[1] + 0x20);
              }
              StringName::StringName((StringName *)&local_b0,pSVar19);
              if (local_b0 == *(long *)(lVar7 + 0x48)) {
LAB_00110e06:
                if (*(long *)(lVar7 + 0x50) == 0) {
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00110b60;
                }
                (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
                lVar10 = Variant::get_validated_object();
                if (lVar10 == 0) {
LAB_001117a0:
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                else {
                  pOVar11 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&Script::typeinfo);
                  if (pOVar11 != (Object *)0x0) {
                    cVar5 = RefCounted::reference();
                    if (cVar5 != '\0') {
                      if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      cVar5 = (**(code **)(*(long *)pOVar11 + 0x1e8))(pOVar11);
                      if (cVar5 == '\0') {
                        plVar1 = *(long **)(lVar7 + 0x50);
                        if (plVar1[1] == 0) {
                          plVar16 = (long *)plVar1[0x23];
                          if (plVar16 == (long *)0x0) {
                            plVar16 = (long *)(**(code **)(*plVar1 + 0x40))();
                          }
                        }
                        else {
                          plVar16 = (long *)(plVar1[1] + 0x20);
                        }
                        lVar10 = *plVar16;
                        if (lVar10 == 0) {
LAB_00111d8a:
                          local_a8 = 0;
                        }
                        else {
                          local_a8 = 0;
                          if (*(char **)(lVar10 + 8) == (char *)0x0) {
                            if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00111d8a;
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)&local_a8,(CowData *)(lVar10 + 0x10));
                          }
                          else {
                            String::parse_latin1
                                      ((String_conflict *)&local_a8,*(char **)(lVar10 + 8));
                          }
                        }
                        local_e0 = (CowData<char32_t> *)&local_a8;
                        local_a0 = 0;
                        String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar7 + 0x58));
                        local_98 = 0;
                        local_88 = "use `operator[]`";
                        local_80 = 0x10;
                        String::parse_latin1((StrRange *)&local_98);
                        local_88 = 
                        "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                        local_90 = 0;
                        local_80 = 0x45;
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<String,String,String>
                                  ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                                   (StrRange *)&local_98,(String_conflict *)&local_a0,local_e0);
                        _err_print_error("validate_object",
                                         "./core/variant/container_type_validate.h",0x92,
                                         "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                         ,(CowData<char32_t> *)&local_88,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref(local_e0);
                      }
                      cVar6 = RefCounted::unreference();
                      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar11), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
                        Memory::free_static(pOVar11,false);
                      }
                      if ((StringName::configured != '\0') && (local_b0 != 0)) {
                        StringName::unref();
                      }
                      lVar7 = *(long *)this;
                      if (cVar5 == '\0') goto LAB_00110aa3;
                      goto LAB_00110b00;
                    }
                    goto LAB_001117a0;
                  }
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                if (cVar5 != '\0') {
                  Variant::_clear_internal();
                }
                plVar1 = *(long **)(lVar7 + 0x50);
                if (plVar1[1] == 0) {
                  plVar16 = (long *)plVar1[0x23];
                  if (plVar16 == (long *)0x0) {
                    plVar16 = (long *)(**(code **)(*plVar1 + 0x40))();
                  }
                }
                else {
                  plVar16 = (long *)(plVar1[1] + 0x20);
                }
                lVar10 = *plVar16;
                if (lVar10 == 0) {
LAB_00111da1:
                  local_a8 = 0;
                }
                else {
                  local_a8 = 0;
                  if (*(char **)(lVar10 + 8) == (char *)0x0) {
                    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00111da1;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_a8,(CowData *)(lVar10 + 0x10));
                  }
                  else {
                    String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar10 + 8));
                  }
                }
                local_e0 = (CowData<char32_t> *)&local_a8;
                local_a0 = 0;
                String::parse_latin1((String_conflict *)&local_a0,*(char **)(lVar7 + 0x58));
                local_98 = 0;
                local_88 = "use `operator[]`";
                local_80 = 0x10;
                String::parse_latin1((StrRange *)&local_98);
                local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                ;
                local_90 = 0;
                local_80 = 0x45;
                String::parse_latin1((StrRange *)&local_90);
                vformat<String,String,String>
                          ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                           (StrRange *)&local_98,(String_conflict *)&local_a0,local_e0);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                                 "Condition \"other_script.is_null()\" is true. Returning: false",
                                 (CowData<char32_t> *)&local_88,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref(local_e0);
              }
              else {
                if (plVar1[1] == 0) {
                  pSVar19 = (StringName *)plVar1[0x23];
                  if (pSVar19 == (StringName *)0x0) {
                    pSVar19 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar19 = (StringName *)(plVar1[1] + 0x20);
                }
                cVar5 = ClassDB::is_parent_class(pSVar19,(StringName *)(lVar7 + 0x48));
                if (cVar5 != '\0') goto LAB_00110e06;
                lVar10 = *(long *)(lVar7 + 0x48);
                if (lVar10 == 0) {
LAB_00111dda:
                  local_a8 = 0;
                }
                else {
                  local_a8 = 0;
                  if (*(char **)(lVar10 + 8) == (char *)0x0) {
                    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00111dda;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_a8,(CowData *)(lVar10 + 0x10));
                  }
                  else {
                    String::parse_latin1((String_conflict *)&local_a8,*(char **)(lVar10 + 8));
                  }
                }
                local_e0 = (CowData<char32_t> *)&local_a8;
                uVar8 = *(undefined8 *)(lVar7 + 0x58);
                (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_a0,plVar1);
                local_88 = "use `operator[]`";
                local_98 = 0;
                local_80 = 0x10;
                String::parse_latin1((StrRange *)&local_98);
                local_88 = 
                "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                ;
                local_90 = 0;
                local_80 = 0x53;
                String::parse_latin1((StrRange *)&local_90);
                vformat<String,String,char_const*,String>
                          ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,
                           (StrRange *)&local_98,(CowData<char32_t> *)&local_a0,uVar8,local_e0);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                                 "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                                 ,(CowData<char32_t> *)&local_88,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref(local_e0);
              }
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
              lVar7 = *(long *)this;
              goto LAB_00110aa3;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        pcVar2 = *(char **)(lVar7 + 0x58);
        local_80 = 0;
        local_a0 = 0;
        if (pcVar2 != (char *)0x0) {
          local_80 = strlen(pcVar2);
        }
        local_88 = pcVar2;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "use `operator[]`";
        local_98 = 0;
        local_80 = 0x10;
        String::parse_latin1((StrRange *)&local_98);
        local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
        local_90 = 0;
        local_80 = 0x4b;
        String::parse_latin1((StrRange *)&local_90);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_88,(StrRange *)&local_90,(StrRange *)&local_98,
                   (StrRange *)&local_a0);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",(CowData<char32_t> *)&local_88,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        lVar7 = *(long *)this;
        goto LAB_00110aa3;
      }
LAB_00110c00:
      lVar7 = *(long *)this;
    }
LAB_00110b00:
    uVar8 = HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
            ::operator[]((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                          *)(lVar7 + 0x10),(Variant *)local_78);
  }
  else {
    if (local_78[0] == 0) {
      if (iVar20 == 0x18) goto LAB_00110b00;
    }
    else if (iVar20 == 4) {
      if (local_78[0] == 0x15) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        lVar7 = *(long *)this;
        goto LAB_00110b00;
      }
    }
    else if (iVar20 == 0x15) {
      if (local_78[0] == 4) {
        Variant::operator_cast_to_StringName((Variant *)&local_88);
        Variant::Variant((Variant *)local_58,(StringName *)&local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
        uStack_68 = uStack_48;
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        goto LAB_00110c00;
      }
    }
    else if ((iVar20 == 3) && (local_78[0] == 2)) {
      fVar22 = Variant::operator_cast_to_float((Variant *)local_78);
      Variant::Variant((Variant *)local_58,fVar22);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      lVar7 = *(long *)this;
      local_70 = local_50;
      uStack_68 = uStack_48;
      goto LAB_00110b00;
    }
    Variant::get_type_name(&local_90);
    uVar8 = *(undefined8 *)(lVar7 + 0x58);
    Variant::get_type_name(&local_98,local_78[0]);
    local_88 = "use `operator[]`";
    local_a0 = 0;
    local_80 = 0x10;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
    local_a8 = 0;
    local_80 = 0x3f;
    String::parse_latin1((StrRange *)&local_a8);
    vformat<String,String,char_const*,String>
              (&local_88,(StrRange *)&local_a8,(StrRange *)&local_a0,&local_98,uVar8,&local_90);
    _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                     "Method/function failed. Returning: false",&local_88,0,0);
    pcVar2 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar7 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = *(long *)this;
LAB_00110aa3:
    piVar12 = *(int **)(lVar7 + 0x80);
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)operator_new(0x18,"");
      *piVar12 = 0;
      *(undefined1 (*) [16])(piVar12 + 2) = (undefined1  [16])0x0;
      lVar7 = *(long *)this;
      *(int **)(lVar7 + 0x80) = piVar12;
      iVar20 = *(int *)(lVar7 + 0x60);
    }
    else {
      iVar20 = *(int *)(lVar7 + 0x60);
      if (Variant::needs_deinit[*piVar12] != '\0') {
        Variant::_clear_internal();
      }
    }
    *piVar12 = iVar20;
    uVar4 = _UNK_0011b878;
    uVar8 = __LC85;
    switch(iVar20) {
    case 4:
      piVar12[2] = 0;
      piVar12[3] = 0;
      *piVar12 = 4;
      break;
    case 0xb:
      pBVar13 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(piVar12 + 2) = pBVar13;
      *(undefined8 *)pBVar13 = 0x3f800000;
      *(undefined8 *)(pBVar13 + 8) = 0x3f80000000000000;
      *(undefined8 *)(pBVar13 + 0x10) = 0;
      *piVar12 = 0xb;
      break;
    case 0x10:
      pBVar13 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(piVar12 + 2) = pBVar13;
      *(undefined8 *)pBVar13 = 0;
      *(undefined4 *)(pBVar13 + 8) = 0;
      *(undefined8 *)(pBVar13 + 0xc) = 0;
      *(undefined4 *)(pBVar13 + 0x14) = 0;
      *piVar12 = 0x10;
      break;
    case 0x11:
      pBVar14 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      auVar23 = ZEXT416(_LC83);
      *(BucketMedium **)(piVar12 + 2) = pBVar14;
      *(undefined4 *)(pBVar14 + 0x20) = 0x3f800000;
      *(undefined1 (*) [16])pBVar14 = auVar23;
      *(undefined1 (*) [16])(pBVar14 + 0x10) = auVar23;
      *piVar12 = 0x11;
      break;
    case 0x12:
      pBVar14 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      auVar23 = ZEXT416(_LC83);
      *(BucketMedium **)(piVar12 + 2) = pBVar14;
      *(undefined4 *)(pBVar14 + 0x20) = 0x3f800000;
      *(undefined8 *)(pBVar14 + 0x24) = 0;
      *(undefined4 *)(pBVar14 + 0x2c) = 0;
      *(undefined1 (*) [16])pBVar14 = auVar23;
      *(undefined1 (*) [16])(pBVar14 + 0x10) = auVar23;
      *piVar12 = 0x12;
      break;
    case 0x13:
      this_00 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                           &Variant::Pools::_bucket_large);
      *(BucketLarge **)(piVar12 + 2) = this_00;
      Projection::Projection((Projection *)this_00);
      *piVar12 = 0x13;
      break;
    case 0x14:
      *piVar12 = 0x14;
      *(undefined8 *)(piVar12 + 2) = uVar8;
      *(undefined8 *)(piVar12 + 4) = uVar4;
      break;
    case 0x15:
      piVar12[2] = 0;
      piVar12[3] = 0;
      *piVar12 = 0x15;
      break;
    case 0x16:
      piVar12[2] = 0;
      piVar12[3] = 0;
      *piVar12 = 0x16;
      break;
    case 0x18:
      piVar12[2] = 0;
      piVar12[3] = 0;
      piVar12[4] = 0;
      piVar12[5] = 0;
      *piVar12 = 0x18;
      break;
    case 0x19:
      piVar12[2] = 0;
      piVar12[3] = 0;
      piVar12[4] = 0;
      piVar12[5] = 0;
      *piVar12 = 0x19;
      break;
    case 0x1a:
      piVar12[2] = 0;
      piVar12[3] = 0;
      piVar12[4] = 0;
      piVar12[5] = 0;
      *piVar12 = 0x1a;
      break;
    case 0x1b:
      Dictionary((Dictionary *)(piVar12 + 2));
      *piVar12 = 0x1b;
      break;
    case 0x1c:
      Array::Array((Array *)(piVar12 + 2));
      *piVar12 = 0x1c;
      break;
    case 0x1d:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b570;
      if (local_80 != 0) {
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x1d;
      break;
    case 0x1e:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b590;
      if (local_80 != 0) {
        CowData<int>::_ref((CowData<int> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x1e;
      break;
    case 0x1f:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b5b0;
      if (local_80 != 0) {
        CowData<long>::_ref((CowData<long> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x1f;
      break;
    case 0x20:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b5d0;
      if (local_80 != 0) {
        CowData<float>::_ref((CowData<float> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x20;
      break;
    case 0x21:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b5f0;
      if (local_80 != 0) {
        CowData<double>::_ref((CowData<double> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x21;
      break;
    case 0x22:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b610;
      if (local_80 != 0) {
        CowData<String>::_ref((CowData<String> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      CowData<String>::_unref((CowData<String> *)&local_80);
      *piVar12 = 0x22;
      break;
    case 0x23:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b630;
      if (local_80 != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x23;
      break;
    case 0x24:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b650;
      if (local_80 != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x24;
      break;
    case 0x25:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b670;
      if (local_80 != 0) {
        CowData<Color>::_ref((CowData<Color> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x25;
      break;
    case 0x26:
      local_80 = 0;
      puVar15 = (undefined8 *)operator_new(0x20,"");
      *puVar15 = &PTR__PackedArrayRefBase_0011b550;
      *(undefined4 *)(puVar15 + 1) = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR__PackedArrayRef_0011b690;
      if (local_80 != 0) {
        CowData<Vector4>::_ref((CowData<Vector4> *)(puVar15 + 3),(CowData *)&local_80);
      }
      *(undefined4 *)(puVar15 + 1) = 1;
      *(undefined8 **)(piVar12 + 2) = puVar15;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      *piVar12 = 0x26;
    }
    uVar8 = *(undefined8 *)(*(long *)this + 0x80);
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* Dictionary::set(Variant const&, Variant const&) */

undefined8 __thiscall Dictionary::set(Dictionary *this,Variant *param_1,Variant *param_2)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  Variant *this_00;
  undefined8 uVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  ulong *puVar13;
  StringName *pSVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  float fVar17;
  CowData<char32_t> *local_100;
  CowData<char32_t> *local_f8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  size_t local_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)this + 8) != 0) {
    _err_print_error(&_LC93,"core/variant/dictionary.cpp",0xbf,
                     "Condition \"_p->read_only\" is true. Returning: false",
                     "Dictionary is in read-only state.",0,0);
    uVar8 = 0;
    goto LAB_0011234d;
  }
  Variant::Variant((Variant *)local_98,param_1);
  lVar15 = *(long *)this;
  iVar2 = *(int *)(lVar15 + 0x40);
  if (iVar2 == 0) goto LAB_001120c8;
  if (iVar2 == local_98[0]) {
    if ((iVar2 != 0x18) ||
       (uVar7 = Variant::operator_cast_to_ObjectID((Variant *)local_98), uVar7 == 0))
    goto LAB_001120c8;
    uVar12 = (uint)uVar7 & 0xffffff;
    if (uVar12 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar4 = (ulong)local_a8 >> 8;
        local_a8 = (char *)(uVar4 << 8);
        LOCK();
        bVar16 = (char)ObjectDB::spin_lock == '\0';
        if (bVar16) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar16) break;
        local_a8 = (char *)(uVar4 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar13 = (ulong *)((ulong)uVar12 * 0x10 + ObjectDB::object_slots);
      if ((uVar7 >> 0x18 & 0x7fffffffff) == (*puVar13 & 0x7fffffffff)) {
        plVar1 = (long *)puVar13[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar1 != (long *)0x0) {
          if (*(long *)(lVar15 + 0x48) == 0) goto LAB_001120c8;
          if (plVar1[1] == 0) {
            pSVar14 = (StringName *)plVar1[0x23];
            if (pSVar14 == (StringName *)0x0) {
              pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
            }
          }
          else {
            pSVar14 = (StringName *)(plVar1[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_d0,pSVar14);
          if (local_d0 == *(long *)(lVar15 + 0x48)) {
LAB_00112513:
            if (*(long *)(lVar15 + 0x50) == 0) {
              if ((StringName::configured != '\0') && (local_d0 != 0)) {
                StringName::unref();
              }
              goto LAB_001120c8;
            }
            (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
            lVar9 = Variant::get_validated_object();
            if (lVar9 == 0) {
LAB_00112ca4:
              cVar5 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar10 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&Script::typeinfo);
              if (pOVar10 != (Object *)0x0) {
                cVar5 = RefCounted::reference();
                if (cVar5 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar5 = (**(code **)(*(long *)pOVar10 + 0x1e8))(pOVar10);
                  if (cVar5 == '\0') {
                    plVar1 = *(long **)(lVar15 + 0x50);
                    if (plVar1[1] == 0) {
                      plVar11 = (long *)plVar1[0x23];
                      if (plVar11 == (long *)0x0) {
                        plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
                      }
                    }
                    else {
                      plVar11 = (long *)(plVar1[1] + 0x20);
                    }
                    lVar9 = *plVar11;
                    if (lVar9 == 0) {
LAB_001138e5:
                      local_c0 = 0;
                    }
                    else if (*(char **)(lVar9 + 8) == (char *)0x0) {
                      local_c0 = 0;
                      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_001138e5;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c0,(CowData *)(lVar9 + 0x10));
                    }
                    else {
                      local_c0 = 0;
                      String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar9 + 8));
                    }
                    local_f8 = (CowData<char32_t> *)&local_c0;
                    local_b8 = 0;
                    String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar15 + 0x58));
                    local_b0 = 0;
                    String::parse_latin1((String_conflict *)&local_b0,"set");
                    local_a8 = (char *)0x0;
                    String::parse_latin1
                              ((String_conflict *)&local_a8,
                               "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                              );
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_c8,(CowData<char32_t> *)&local_a8,
                               (String_conflict *)&local_b0,(String_conflict *)&local_b8,local_f8);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_c8,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref(local_f8);
                  }
                  cVar6 = RefCounted::unreference();
                  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
                    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                    Memory::free_static(pOVar10,false);
                  }
                  if ((StringName::configured != '\0') && (local_d0 != 0)) {
                    StringName::unref();
                  }
                  if (cVar5 == '\0') goto LAB_0011208a;
                  goto LAB_001120c8;
                }
                goto LAB_00112ca4;
              }
              cVar5 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar5 != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = *(long **)(lVar15 + 0x50);
            if (plVar1[1] == 0) {
              plVar11 = (long *)plVar1[0x23];
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
              }
            }
            else {
              plVar11 = (long *)(plVar1[1] + 0x20);
            }
            lVar9 = *plVar11;
            if (lVar9 == 0) {
LAB_00113884:
              local_c8 = 0;
            }
            else if (*(char **)(lVar9 + 8) == (char *)0x0) {
              local_c8 = 0;
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00113884;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar9 + 0x10));
            }
            else {
              local_c8 = 0;
              String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar9 + 8));
            }
            local_100 = (CowData<char32_t> *)&local_c8;
            local_c0 = 0;
            String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar15 + 0x58));
            local_b8 = 0;
            local_a8 = "set";
            local_a0 = 3;
            String::parse_latin1((StrRange *)&local_b8);
            local_a8 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_b0 = 0;
            local_a0 = 0x45;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                       (String_conflict *)&local_c0,local_100);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_a8,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref(local_100);
          }
          else {
            if (plVar1[1] == 0) {
              pSVar14 = (StringName *)plVar1[0x23];
              if (pSVar14 == (StringName *)0x0) {
                pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
            }
            else {
              pSVar14 = (StringName *)(plVar1[1] + 0x20);
            }
            cVar5 = ClassDB::is_parent_class(pSVar14,(StringName *)(lVar15 + 0x48));
            if (cVar5 != '\0') goto LAB_00112513;
            lVar9 = *(long *)(lVar15 + 0x48);
            if (lVar9 == 0) {
LAB_001138cf:
              local_c8 = 0;
            }
            else if (*(char **)(lVar9 + 8) == (char *)0x0) {
              local_c8 = 0;
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_001138cf;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar9 + 0x10));
            }
            else {
              local_c8 = 0;
              String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar9 + 8));
            }
            local_100 = (CowData<char32_t> *)&local_c8;
            uVar8 = *(undefined8 *)(lVar15 + 0x58);
            (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_c0,plVar1);
            local_a8 = "set";
            local_b8 = 0;
            local_a0 = 3;
            String::parse_latin1((StrRange *)&local_b8);
            local_a8 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_b0 = 0;
            local_a0 = 0x53;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                       (CowData<char32_t> *)&local_c0,uVar8,local_100);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_a8,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref(local_100);
          }
          if ((StringName::configured != '\0') && (local_d0 != 0)) {
            StringName::unref();
          }
          goto LAB_0011208a;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    pcVar3 = *(char **)(lVar15 + 0x58);
    local_a0 = 0;
    local_c0 = 0;
    if (pcVar3 != (char *)0x0) {
      local_a0 = strlen(pcVar3);
    }
    local_a8 = pcVar3;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = 0;
    local_a8 = "set";
    local_a0 = 3;
    String::parse_latin1((StrRange *)&local_b8);
    local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
    local_b0 = 0;
    local_a0 = 0x4b;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
               (StrRange *)&local_c0);
    _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                     "Parameter \"object\" is null.",(CowData<char32_t> *)&local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_0011208a:
    _err_print_error(&_LC93,"core/variant/dictionary.cpp",0xc1,
                     "Condition \"!_p->typed_key.validate(key, \"set\")\" is true. Returning: false"
                     ,0,0);
    uVar8 = 0;
  }
  else {
    if (local_98[0] == 0) {
      if (iVar2 != 0x18) goto LAB_00111ed5;
    }
    else if (iVar2 == 4) {
      if (local_98[0] != 0x15) goto LAB_00111ed5;
      Variant::operator_cast_to_String((Variant *)&local_a8);
      Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_98[0] = local_58[0];
      local_90 = local_50;
      uStack_88 = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    else if (iVar2 == 0x15) {
      if (local_98[0] != 4) {
LAB_00111ed5:
        Variant::get_type_name(&local_b0);
        uVar8 = *(undefined8 *)(lVar15 + 0x58);
        Variant::get_type_name(&local_b8,local_98[0]);
        local_a8 = "set";
        local_c0 = 0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_c0);
        local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
        local_c8 = 0;
        local_a0 = 0x3f;
        String::parse_latin1((StrRange *)&local_c8);
        vformat<String,String,char_const*,String>
                  (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar8,&local_b0);
        _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                         "Method/function failed. Returning: false",&local_a8,0,0);
        pcVar3 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar15 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        goto LAB_0011208a;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_a8);
      Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_98[0] = local_58[0];
      local_90 = local_50;
      uStack_88 = uStack_48;
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      if ((local_98[0] != 2) || (iVar2 != 3)) goto LAB_00111ed5;
      fVar17 = Variant::operator_cast_to_float((Variant *)local_98);
      Variant::Variant((Variant *)local_58,fVar17);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = local_50;
      uStack_88 = uStack_48;
      local_98[0] = local_58[0];
    }
LAB_001120c8:
    Variant::Variant((Variant *)local_78,param_2);
    lVar15 = *(long *)this;
    iVar2 = *(int *)(lVar15 + 0x60);
    if (iVar2 == 0) {
LAB_00112310:
      this_00 = (Variant *)
                HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                ::operator[]((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                              *)(lVar15 + 0x10),(Variant *)local_98);
      Variant::operator=(this_00,(Variant *)local_78);
      uVar8 = 1;
    }
    else {
      if (iVar2 == local_78[0]) {
        if (iVar2 != 0x18) goto LAB_00112310;
        uVar7 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
        if (uVar7 == 0) {
LAB_00112309:
          lVar15 = *(long *)this;
          goto LAB_00112310;
        }
        uVar12 = (uint)uVar7 & 0xffffff;
        if (uVar12 < (uint)ObjectDB::slot_max) {
          while( true ) {
            uVar4 = (ulong)local_a8 >> 8;
            local_a8 = (char *)(uVar4 << 8);
            LOCK();
            bVar16 = (char)ObjectDB::spin_lock == '\0';
            if (bVar16) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar16) break;
            local_a8 = (char *)(uVar4 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar13 = (ulong *)((ulong)uVar12 * 0x10 + ObjectDB::object_slots);
          if ((uVar7 >> 0x18 & 0x7fffffffff) == (*puVar13 & 0x7fffffffff)) {
            plVar1 = (long *)puVar13[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long *)0x0) {
              if (*(long *)(lVar15 + 0x68) == 0) goto LAB_00112309;
              pSVar14 = (StringName *)(plVar1[1] + 0x20);
              if ((plVar1[1] == 0) &&
                 (pSVar14 = (StringName *)plVar1[0x23], pSVar14 == (StringName *)0x0)) {
                pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
              }
              StringName::StringName((StringName *)&local_d0,pSVar14);
              if (local_d0 == *(long *)(lVar15 + 0x68)) {
LAB_00112a91:
                if (*(long *)(lVar15 + 0x70) == 0) {
                  if ((StringName::configured != '\0') && (local_d0 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00112309;
                }
                (**(code **)(*plVar1 + 0x98))(local_58,plVar1);
                lVar9 = Variant::get_validated_object();
                if (lVar9 == 0) {
LAB_00112ec2:
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                else {
                  pOVar10 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&Script::typeinfo);
                  if (pOVar10 != (Object *)0x0) {
                    cVar5 = RefCounted::reference();
                    if (cVar5 != '\0') {
                      if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      cVar5 = (**(code **)(*(long *)pOVar10 + 0x1e8))(pOVar10);
                      if (cVar5 == '\0') {
                        plVar1 = *(long **)(lVar15 + 0x70);
                        if (plVar1[1] == 0) {
                          plVar11 = (long *)plVar1[0x23];
                          if (plVar11 == (long *)0x0) {
                            plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
                          }
                        }
                        else {
                          plVar11 = (long *)(plVar1[1] + 0x20);
                        }
                        lVar9 = *plVar11;
                        if (lVar9 == 0) {
LAB_001138fb:
                          local_c0 = 0;
                        }
                        else if (*(char **)(lVar9 + 8) == (char *)0x0) {
                          local_c0 = 0;
                          if (*(long *)(lVar9 + 0x10) == 0) goto LAB_001138fb;
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_c0,(CowData *)(lVar9 + 0x10));
                        }
                        else {
                          local_c0 = 0;
                          String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar9 + 8));
                        }
                        local_f8 = (CowData<char32_t> *)&local_c0;
                        local_b8 = 0;
                        String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar15 + 0x78))
                        ;
                        local_b0 = 0;
                        String::parse_latin1((String_conflict *)&local_b0,"set");
                        local_a8 = (char *)0x0;
                        String::parse_latin1
                                  ((String_conflict *)&local_a8,
                                   "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                                  );
                        vformat<String,String,String>
                                  ((CowData<char32_t> *)&local_c8,(CowData<char32_t> *)&local_a8,
                                   (String_conflict *)&local_b0,(String_conflict *)&local_b8,
                                   local_f8);
                        _err_print_error("validate_object",
                                         "./core/variant/container_type_validate.h",0x92,
                                         "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                         ,(CowData<char32_t> *)&local_c8,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                        CowData<char32_t>::_unref(local_f8);
                      }
                      cVar6 = RefCounted::unreference();
                      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                        Memory::free_static(pOVar10,false);
                      }
                      if ((StringName::configured != '\0') && (local_d0 != 0)) {
                        StringName::unref();
                      }
                      if (cVar5 == '\0') goto LAB_001122c7;
                      goto LAB_00112309;
                    }
                    goto LAB_00112ec2;
                  }
                  cVar5 = Variant::needs_deinit[local_58[0]];
                }
                if (cVar5 != '\0') {
                  Variant::_clear_internal();
                }
                plVar1 = *(long **)(lVar15 + 0x70);
                if (plVar1[1] == 0) {
                  plVar11 = (long *)plVar1[0x23];
                  if (plVar11 == (long *)0x0) {
                    plVar11 = (long *)(**(code **)(*plVar1 + 0x40))();
                  }
                }
                else {
                  plVar11 = (long *)(plVar1[1] + 0x20);
                }
                lVar9 = *plVar11;
                if (lVar9 == 0) {
LAB_0011386d:
                  local_c0 = 0;
                }
                else if (*(char **)(lVar9 + 8) == (char *)0x0) {
                  local_c0 = 0;
                  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0011386d;
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar9 + 0x10));
                }
                else {
                  local_c0 = 0;
                  String::parse_latin1((String_conflict *)&local_c0,*(char **)(lVar9 + 8));
                }
                local_f8 = (CowData<char32_t> *)&local_c0;
                local_b8 = 0;
                String::parse_latin1((String_conflict *)&local_b8,*(char **)(lVar15 + 0x78));
                local_b0 = 0;
                String::parse_latin1((String_conflict *)&local_b0,"set");
                local_a8 = (char *)0x0;
                String::parse_latin1
                          ((String_conflict *)&local_a8,
                           "Attempted to %s an object into a %s, that does not inherit from \'%s\'."
                          );
                vformat<String,String,String>
                          ((CowData<char32_t> *)&local_c8,(CowData<char32_t> *)&local_a8,
                           (String_conflict *)&local_b0,(String_conflict *)&local_b8,local_f8);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                                 "Condition \"other_script.is_null()\" is true. Returning: false",
                                 (CowData<char32_t> *)&local_c8,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                CowData<char32_t>::_unref(local_f8);
              }
              else {
                if (plVar1[1] == 0) {
                  pSVar14 = (StringName *)plVar1[0x23];
                  if (pSVar14 == (StringName *)0x0) {
                    pSVar14 = (StringName *)(**(code **)(*plVar1 + 0x40))(plVar1);
                  }
                }
                else {
                  pSVar14 = (StringName *)(plVar1[1] + 0x20);
                }
                cVar5 = ClassDB::is_parent_class(pSVar14,(StringName *)(lVar15 + 0x68));
                if (cVar5 != '\0') goto LAB_00112a91;
                lVar9 = *(long *)(lVar15 + 0x68);
                if (lVar9 == 0) {
LAB_00113911:
                  local_c8 = 0;
                }
                else if (*(char **)(lVar9 + 8) == (char *)0x0) {
                  local_c8 = 0;
                  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00113911;
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar9 + 0x10));
                }
                else {
                  local_c8 = 0;
                  String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar9 + 8));
                }
                local_100 = (CowData<char32_t> *)&local_c8;
                uVar8 = *(undefined8 *)(lVar15 + 0x78);
                (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_c0,plVar1);
                local_a8 = "set";
                local_b8 = 0;
                local_a0 = 3;
                String::parse_latin1((StrRange *)&local_b8);
                local_a8 = 
                "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
                ;
                local_b0 = 0;
                local_a0 = 0x53;
                String::parse_latin1((StrRange *)&local_b0);
                vformat<String,String,char_const*,String>
                          ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,
                           (StrRange *)&local_b8,(CowData<char32_t> *)&local_c0,uVar8,local_100);
                _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                                 "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                                 ,(CowData<char32_t> *)&local_a8,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref(local_100);
              }
              if ((StringName::configured != '\0') && (local_d0 != 0)) {
                StringName::unref();
              }
              goto LAB_001122c7;
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        pcVar3 = *(char **)(lVar15 + 0x78);
        local_a0 = 0;
        local_c0 = 0;
        if (pcVar3 != (char *)0x0) {
          local_a0 = strlen(pcVar3);
        }
        local_a8 = pcVar3;
        String::parse_latin1((StrRange *)&local_c0);
        local_b8 = 0;
        local_a8 = "set";
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b8);
        local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
        local_b0 = 0;
        local_a0 = 0x4b;
        String::parse_latin1((StrRange *)&local_b0);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,(StrRange *)&local_b8,
                   (StrRange *)&local_c0);
        _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                         "Parameter \"object\" is null.",(CowData<char32_t> *)&local_a8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
      else {
        if (local_78[0] == 0) {
          if (iVar2 == 0x18) goto LAB_00112310;
        }
        else if (iVar2 == 4) {
          if (local_78[0] == 0x15) {
            Variant::operator_cast_to_String((Variant *)&local_a8);
            Variant::Variant((Variant *)local_58,(String_conflict *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            lVar15 = *(long *)this;
            goto LAB_00112310;
          }
        }
        else if (iVar2 == 0x15) {
          if (local_78[0] == 4) {
            Variant::operator_cast_to_StringName((Variant *)&local_a8);
            Variant::Variant((Variant *)local_58,(StringName *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
              StringName::unref();
            }
            goto LAB_00112309;
          }
        }
        else if ((local_78[0] == 2) && (iVar2 == 3)) {
          fVar17 = Variant::operator_cast_to_float((Variant *)local_78);
          Variant::Variant((Variant *)local_58,fVar17);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78[0] = local_58[0];
          lVar15 = *(long *)this;
          local_70 = local_50;
          uStack_68 = uStack_48;
          goto LAB_00112310;
        }
        Variant::get_type_name(&local_b0);
        uVar8 = *(undefined8 *)(lVar15 + 0x78);
        Variant::get_type_name(&local_b8,local_78[0]);
        local_c0 = 0;
        local_a8 = "set";
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_c0);
        local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
        local_c8 = 0;
        local_a0 = 0x3f;
        String::parse_latin1((StrRange *)&local_c8);
        vformat<String,String,char_const*,String>
                  (&local_a8,(StrRange *)&local_c8,(StrRange *)&local_c0,&local_b8,uVar8,&local_b0);
        _err_print_error("validate","./core/variant/container_type_validate.h",0x67,
                         "Method/function failed. Returning: false",&local_a8,0,0);
        pcVar3 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar15 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        lVar15 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
      }
LAB_001122c7:
      _err_print_error(&_LC93,"core/variant/dictionary.cpp",0xc3,
                       "Condition \"!_p->typed_value.validate(value, \"set\")\" is true. Returning: false"
                       ,0,0);
      uVar8 = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011234d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dictionary::assign(Dictionary const&) */

void __thiscall Dictionary::assign(Dictionary *this,Dictionary *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  Variant *pVVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  Object *pOVar13;
  long *plVar14;
  size_t sVar15;
  uint uVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  undefined8 uVar19;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  Variant *pVVar20;
  Variant *pVVar21;
  int *piVar22;
  undefined8 *puVar23;
  CowData<char32_t> *pCVar24;
  long *plVar25;
  StringName *pSVar26;
  CowData<char32_t> *this_00;
  int iVar27;
  CowData<char32_t> *pCVar28;
  undefined8 *puVar29;
  long lVar30;
  StrRange *pSVar31;
  int *piVar32;
  long in_FS_OFFSET;
  bool bVar33;
  ulong uStack_170;
  CowData<char32_t> *local_168;
  Variant *local_128;
  CowData<char32_t> *local_110;
  Variant *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  Variant *local_b0 [2];
  Variant *local_a0;
  char *local_98;
  size_t local_90;
  Variant local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar3 = *(long *)this;
  lVar30 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar27 = *(int *)(lVar3 + 0x40);
  if ((((iVar27 == *(int *)(lVar30 + 0x40)) && (*(long *)(lVar30 + 0x48) == *(long *)(lVar3 + 0x48))
       ) && (*(long *)(lVar3 + 0x50) == *(long *)(lVar30 + 0x50))) || (iVar27 == 0)) {
LAB_00113d00:
    iVar27 = *(int *)(lVar3 + 0x60);
    if ((((*(int *)(lVar30 + 0x60) == iVar27) &&
         ((*(long *)(lVar3 + 0x68) == *(long *)(lVar30 + 0x68) &&
          (*(long *)(lVar3 + 0x70) == *(long *)(lVar30 + 0x70))))) || (iVar27 == 0)) ||
       (((*(int *)(lVar30 + 0x60) == 0x18 && (iVar27 == 0x18)) &&
        ((*(long *)(lVar3 + 0x68) == 0 ||
         (((*(long *)(lVar30 + 0x68) != 0 &&
           ((*(long *)(lVar3 + 0x68) == *(long *)(lVar30 + 0x68) ||
            (cVar7 = ClassDB::is_parent_class
                               ((StringName *)(lVar30 + 0x68),(StringName *)(lVar3 + 0x68)),
            cVar7 != '\0')))) &&
          ((*(long **)(lVar3 + 0x70) == (long *)0x0 ||
           ((plVar25 = *(long **)(lVar30 + 0x70), plVar25 != (long *)0x0 &&
            ((*(long **)(lVar3 + 0x70) == plVar25 ||
             (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar3 + 0x70), cVar7 != '\0'))))))))))
        )))) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
        ::operator=((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                     *)(*(long *)this + 0x10),(HashMap *)(*(long *)param_1 + 0x10));
        return;
      }
      goto LAB_00114d8a;
    }
LAB_00113d1e:
    lVar12 = *(long *)param_1;
  }
  else {
    lVar12 = lVar30;
    if ((iVar27 == 0x18) && (*(int *)(lVar30 + 0x40) == 0x18)) {
      if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00113d00;
      if (*(long *)(lVar30 + 0x48) == 0) goto LAB_00113acf;
      if (((*(long *)(lVar3 + 0x48) == *(long *)(lVar30 + 0x48)) ||
          (cVar7 = ClassDB::is_parent_class
                             ((StringName *)(lVar30 + 0x48),(StringName *)(lVar3 + 0x48)),
          cVar7 != '\0')) &&
         ((*(long **)(lVar3 + 0x50) == (long *)0x0 ||
          ((plVar25 = *(long **)(lVar30 + 0x50), plVar25 != (long *)0x0 &&
           ((*(long **)(lVar3 + 0x50) == plVar25 ||
            (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar3 + 0x50), cVar7 != '\0'))))))))
      goto LAB_00113d00;
      goto LAB_00113d1e;
    }
  }
LAB_00113acf:
  uVar2 = *(uint *)(lVar12 + 0x3c);
  local_60 = 0;
  uVar11 = 1;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  if (5 < uVar2) {
    do {
      if (uVar2 <= *(uint *)(hash_table_size_primes + uVar11 * 4)) {
        local_60 = uVar11 & 0xffffffff;
        goto LAB_00113b5e;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00113b5e:
  local_b0[0] = (Variant *)0x0;
  CowData<Variant>::resize<false>((CowData<Variant> *)local_b0,(long)(int)uVar2);
  CowData<Variant>::_copy_on_write((CowData<Variant> *)local_b0);
  pVVar6 = local_b0[0];
  local_a0 = (Variant *)0x0;
  CowData<Variant>::resize<false>((CowData<Variant> *)&local_a0,(long)(int)uVar2);
  CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_a0);
  pVVar21 = local_a0;
  iVar27 = *(int *)(lVar3 + 0x40);
  iVar9 = *(int *)(lVar30 + 0x40);
  if ((((iVar27 == iVar9) && (*(long *)(lVar3 + 0x48) == *(long *)(lVar30 + 0x48))) &&
      (*(long *)(lVar3 + 0x50) == *(long *)(lVar30 + 0x50))) || (iVar27 == 0)) {
LAB_00113d98:
    pVVar20 = pVVar6;
    for (puVar23 = *(undefined8 **)(*(long *)param_1 + 0x28); puVar23 != (undefined8 *)0x0;
        puVar23 = (undefined8 *)*puVar23) {
      Variant::operator=(pVVar20,(Variant *)(puVar23 + 2));
      pVVar20 = pVVar20 + 0x18;
    }
LAB_00113dce:
    uVar16 = *(uint *)(lVar3 + 0x60);
    uStack_170 = (ulong)uVar16;
    uVar10 = *(uint *)(lVar30 + 0x60);
    if ((((uVar16 == uVar10) && (*(long *)(lVar3 + 0x68) == *(long *)(lVar30 + 0x68))) &&
        (*(long *)(lVar3 + 0x70) == *(long *)(lVar30 + 0x70))) || (uVar16 == 0)) {
LAB_00113ee0:
      for (puVar23 = *(undefined8 **)(*(long *)param_1 + 0x28); puVar23 != (undefined8 *)0x0;
          puVar23 = (undefined8 *)*puVar23) {
        Variant::operator=(pVVar21,(Variant *)(puVar23 + 5));
        pVVar21 = pVVar21 + 0x18;
      }
    }
    else {
      if ((uVar10 == 0x18) && (uVar16 == 0x18)) {
        uStack_170 = *(ulong *)(lVar3 + 0x68);
        if (uStack_170 != 0) {
          if (*(ulong *)(lVar30 + 0x68) == 0) goto LAB_00114db6;
          if (((uStack_170 != *(ulong *)(lVar30 + 0x68)) &&
              (cVar7 = ClassDB::is_parent_class
                                 ((StringName *)(lVar30 + 0x68),(StringName *)(lVar3 + 0x68)),
              cVar7 == '\0')) ||
             ((*(long **)(lVar3 + 0x70) != (long *)0x0 &&
              ((plVar25 = *(long **)(lVar30 + 0x70), plVar25 == (long *)0x0 ||
               ((*(long **)(lVar3 + 0x70) != plVar25 &&
                (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar3 + 0x70), cVar7 == '\0')))))))
             ) {
            uStack_170 = (ulong)*(uint *)(lVar3 + 0x60);
            uVar10 = *(uint *)(lVar30 + 0x60);
            goto LAB_00113df6;
          }
        }
        goto LAB_00113ee0;
      }
LAB_00113df6:
      if (uVar10 != 0) {
        if (uVar10 == 0x18) {
          if ((int)uStack_170 == 0x18) {
            uStack_170 = *(ulong *)(lVar30 + 0x68);
            if (uStack_170 != 0) {
              if (*(ulong *)(lVar3 + 0x68) == 0) goto LAB_00115584;
              if (((uStack_170 != *(ulong *)(lVar3 + 0x68)) &&
                  (cVar7 = ClassDB::is_parent_class
                                     ((StringName *)(lVar3 + 0x68),(StringName *)(lVar30 + 0x68)),
                  uStack_170 = extraout_RDX_02, cVar7 == '\0')) ||
                 ((*(long **)(lVar30 + 0x70) != (long *)0x0 &&
                  ((plVar25 = *(long **)(lVar3 + 0x70), plVar25 == (long *)0x0 ||
                   ((*(long **)(lVar30 + 0x70) != plVar25 &&
                    (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar30 + 0x70),
                    uStack_170 = extraout_RDX_03, cVar7 == '\0')))))))) {
                uStack_170 = (ulong)*(uint *)(lVar3 + 0x60);
                goto LAB_00115299;
              }
            }
            goto LAB_00114db6;
          }
        }
        else {
LAB_00115299:
          if ((int)uStack_170 == 0x18) {
LAB_00115584:
            uStack_170 = 0x18;
          }
          else if (*(int *)(lVar30 + 0x60) != 0x18) {
            if (*(int *)(lVar30 + 0x60) == 0) goto LAB_00113e07;
            cVar7 = Variant::can_convert_strict();
            if (cVar7 == '\0') {
              Variant::get_type_name(&local_d0,*(undefined4 *)(lVar3 + 0x60));
              Variant::get_type_name(&local_d8,*(undefined4 *)(lVar3 + 0x40));
              Variant::get_type_name(&local_e0,*(undefined4 *)(lVar30 + 0x60));
              Variant::get_type_name(&local_e8,*(undefined4 *)(lVar30 + 0x40));
              local_98 = "Cannot assign contents of \"Dictionary[%s, %s]\" to \"Dictionary[%s, %s]."
              ;
              local_c8 = 0;
              uStack_c4 = 0;
              local_90 = 0x46;
              String::parse_latin1((StrRange *)&local_c8);
              vformat<String,String,String,String>
                        (&local_98,(StrRange *)&local_c8,&local_e8,&local_e0,&local_d8,&local_d0);
              uVar19 = 0x20d;
              goto LAB_001142b7;
            }
            plVar25 = *(long **)(*(long *)param_1 + 0x28);
            if (plVar25 != (long *)0x0) {
              iVar27 = 0;
              do {
                local_e8 = (Variant *)(plVar25 + 5);
                iVar27 = iVar27 + 1;
                local_c8 = 0;
                uStack_c4 = 0;
                uStack_c0 = 0;
                Variant::construct(*(undefined4 *)(lVar3 + 0x60),pVVar21,&local_e8,1,&local_c8);
                if (local_c8 != 0) {
                  Variant::get_type_name(&local_d8,*(undefined4 *)(lVar3 + 0x60));
                  Variant::get_type_name(&local_e0,*(undefined4 *)local_e8);
                  Variant::Variant((Variant *)local_58,pVVar6 + (long)iVar27 * 0x18 + -0x18);
                  local_98 = "Unable to convert value at key \"%s\" from \"%s\" to \"%s\".";
                  local_d0 = 0;
                  local_90 = 0x36;
                  String::parse_latin1((StrRange *)&local_d0);
                  vformat<Variant,String,String>
                            (&local_98,(StrRange *)&local_d0,(Variant *)local_58,&local_e0,&local_d8
                            );
                  uVar19 = 0x20a;
                  goto LAB_00115420;
                }
                plVar25 = (long *)*plVar25;
                pVVar21 = pVVar21 + 0x18;
              } while (plVar25 != (long *)0x0);
            }
            goto LAB_00113f13;
          }
        }
        Variant::get_type_name(&local_d0,uStack_170);
        Variant::get_type_name(&local_d8,*(undefined4 *)(lVar3 + 0x40));
        Variant::get_type_name(&local_e0,*(undefined4 *)(lVar30 + 0x60));
        Variant::get_type_name(&local_e8,*(undefined4 *)(lVar30 + 0x40));
        local_98 = "Cannot assign contents of \"Dictionary[%s, %s]\" to \"Dictionary[%s, %s]\".";
        local_c8 = 0;
        uStack_c4 = 0;
        local_90 = 0x47;
        String::parse_latin1((StrRange *)&local_c8);
        vformat<String,String,String,String>
                  (&local_98,(StrRange *)&local_c8,&local_e8,&local_e0,&local_d8,&local_d0);
        uVar19 = 0x1f1;
LAB_001142b7:
        this_00 = (CowData<char32_t> *)&local_e8;
        pSVar31 = (StrRange *)&local_e0;
        pCVar28 = (CowData<char32_t> *)&local_d8;
        pCVar24 = (CowData<char32_t> *)&local_d0;
        _err_print_error("assign","core/variant/dictionary.cpp",uVar19,"Method/function failed.",
                         (CowData<char32_t> *)&local_98,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_001142dd:
        CowData<char32_t>::_unref(this_00);
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar31);
        CowData<char32_t>::_unref(pCVar28);
        CowData<char32_t>::_unref(pCVar24);
        puVar23 = (undefined8 *)local_80._0_8_;
        goto LAB_00114cc0;
      }
      if ((int)uStack_170 == 0x18) {
LAB_00114db6:
        iVar27 = 0;
        for (puVar23 = *(undefined8 **)(*(long *)param_1 + 0x28); puVar23 != (undefined8 *)0x0;
            puVar23 = (undefined8 *)*puVar23) {
          if (*(int *)(puVar23 + 5) == 0) goto LAB_00115190;
          if (*(int *)(puVar23 + 5) != 0x18) {
LAB_0011501c:
            local_128 = (Variant *)local_58;
            Variant::get_type_name
                      ((CowData<char32_t> *)&local_d0,*(undefined4 *)(lVar3 + 0x60),uStack_170);
            Variant::get_type_name((CowData<char32_t> *)&local_d8,*(undefined4 *)(puVar23 + 5));
            Variant::Variant(local_128,pVVar6 + (long)iVar27 * 0x18);
            local_98 = "Unable to convert value at key \"%s\" from \"%s\" to \"%s\".";
            local_c8 = 0;
            uStack_c4 = 0;
            local_90 = 0x36;
            String::parse_latin1((StrRange *)&local_c8);
            vformat<Variant,String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_c8,local_128,
                       (CowData<char32_t> *)&local_d8,(CowData<char32_t> *)&local_d0);
            _err_print_error("assign","core/variant/dictionary.cpp",0x1ec,"Method/function failed.",
                             (CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            puVar23 = (undefined8 *)local_80._0_8_;
            goto LAB_00114cc0;
          }
          uVar11 = Variant::operator_cast_to_ObjectID((Variant *)(puVar23 + 5));
          if (uVar11 == 0) goto LAB_00115190;
          uVar16 = (uint)uVar11 & 0xffffff;
          if ((uint)ObjectDB::slot_max <= uVar16) {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115b06:
            pcVar17 = *(char **)(lVar3 + 0x78);
            sVar15 = 0;
            local_c8 = 0;
            uStack_c4 = 0;
            if (pcVar17 != (char *)0x0) {
              sVar15 = strlen(pcVar17);
            }
            local_98 = pcVar17;
            local_90 = sVar15;
            String::parse_latin1((StrRange *)&local_c8);
            local_98 = "assign";
            local_d0 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d0);
            local_98 = 
            "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
            local_d8 = 0;
            local_90 = 0x4b;
            String::parse_latin1((StrRange *)&local_d8);
            vformat<String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_d8,(StrRange *)&local_d0,
                       (StrRange *)&local_c8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                             "Parameter \"object\" is null.",(CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            uStack_170 = extraout_RDX_06;
            goto LAB_0011501c;
          }
          while( true ) {
            uVar5 = (ulong)local_98 >> 8;
            local_98 = (char *)(uVar5 << 8);
            LOCK();
            bVar33 = (char)ObjectDB::spin_lock == '\0';
            if (bVar33) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar33) break;
            local_98 = (char *)(uVar5 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar18 = (ulong *)((ulong)uVar16 * 0x10 + ObjectDB::object_slots);
          if ((uVar11 >> 0x18 & 0x7fffffffff) != (*puVar18 & 0x7fffffffff)) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_00115b06;
          }
          plVar25 = (long *)puVar18[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar25 == (long *)0x0) goto LAB_00115b06;
          if (*(long *)(lVar3 + 0x68) == 0) goto LAB_00115190;
          if (plVar25[1] == 0) {
            pSVar26 = (StringName *)plVar25[0x23];
            if (pSVar26 == (StringName *)0x0) {
              pSVar26 = (StringName *)(**(code **)(*plVar25 + 0x40))(plVar25);
            }
          }
          else {
            pSVar26 = (StringName *)(plVar25[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_e8,pSVar26);
          if (local_e8 != *(Variant **)(lVar3 + 0x68)) {
            if (plVar25[1] == 0) {
              pSVar26 = (StringName *)plVar25[0x23];
              if (pSVar26 == (StringName *)0x0) {
                pSVar26 = (StringName *)(**(code **)(*plVar25 + 0x40))(plVar25);
              }
            }
            else {
              pSVar26 = (StringName *)(plVar25[1] + 0x20);
            }
            cVar7 = ClassDB::is_parent_class(pSVar26,(StringName *)(lVar3 + 0x68));
            if (cVar7 != '\0') goto LAB_00114efe;
            lVar30 = *(long *)(lVar3 + 0x68);
            if (lVar30 == 0) {
              local_c8 = 0;
              uStack_c4 = 0;
            }
            else {
              pcVar17 = *(char **)(lVar30 + 8);
              local_c8 = 0;
              uStack_c4 = 0;
              if (pcVar17 == (char *)0x0) {
                if (*(long *)(lVar30 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar30 + 0x10))
                  ;
                }
              }
              else {
                local_90 = strlen(pcVar17);
                local_98 = pcVar17;
                String::parse_latin1((StrRange *)&local_c8);
              }
            }
            uVar19 = *(undefined8 *)(lVar3 + 0x78);
            (**(code **)(*plVar25 + 0x48))((CowData<char32_t> *)&local_d0,plVar25);
            local_98 = "assign";
            local_d8 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d8);
            local_e0 = 0;
            local_98 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0x53;
            String::parse_latin1((StrRange *)&local_e0);
            uStack_170 = 0x1162ce;
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,(StrRange *)&local_d8,
                       (CowData<char32_t> *)&local_d0,uVar19,(CowData<char32_t> *)&local_c8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x87,
                             "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
                             ,(CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
joined_r0x00116345:
            if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
              StringName::unref();
              uStack_170 = extraout_RDX_05;
            }
            goto LAB_0011501c;
          }
LAB_00114efe:
          if (*(long *)(lVar3 + 0x70) != 0) {
            (**(code **)(*plVar25 + 0x98))(local_58,plVar25);
            lVar30 = Variant::get_validated_object();
            if (lVar30 == 0) {
LAB_00115108:
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar13 = (Object *)__dynamic_cast(lVar30,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar13 != (Object *)0x0) {
                cVar7 = RefCounted::reference();
                if (cVar7 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar7 = (**(code **)(*(long *)pOVar13 + 0x1e8))(pOVar13);
                  if (cVar7 == '\0') {
                    plVar25 = *(long **)(lVar3 + 0x70);
                    if (plVar25[1] == 0) {
                      plVar14 = (long *)plVar25[0x23];
                      if (plVar14 == (long *)0x0) {
                        plVar14 = (long *)(**(code **)(*plVar25 + 0x40))();
                      }
                    }
                    else {
                      plVar14 = (long *)(plVar25[1] + 0x20);
                    }
                    lVar30 = *plVar14;
                    if (lVar30 == 0) {
                      local_c8 = 0;
                      uStack_c4 = 0;
                    }
                    else {
                      local_c8 = 0;
                      uStack_c4 = 0;
                      if (*(char **)(lVar30 + 8) == (char *)0x0) {
                        if (*(long *)(lVar30 + 0x10) != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_c8,(CowData *)(lVar30 + 0x10));
                        }
                      }
                      else {
                        String::parse_latin1((String_conflict *)&local_c8,*(char **)(lVar30 + 8));
                      }
                    }
                    local_110 = (CowData<char32_t> *)&local_c8;
                    pcVar17 = *(char **)(lVar3 + 0x78);
                    sVar15 = 0;
                    local_d0 = 0;
                    if (pcVar17 != (char *)0x0) {
                      sVar15 = strlen(pcVar17);
                    }
                    local_98 = pcVar17;
                    local_90 = sVar15;
                    String::parse_latin1((StrRange *)&local_d0);
                    local_d8 = 0;
                    local_98 = "assign";
                    local_90 = 6;
                    String::parse_latin1((StrRange *)&local_d8);
                    local_e0 = 0;
                    local_98 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_90 = 0x45;
                    String::parse_latin1((StrRange *)&local_e0);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,
                               (StrRange *)&local_d8,(StrRange *)&local_d0,local_110);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_98,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref(local_110);
                  }
                  cVar8 = RefCounted::unreference();
                  uStack_170 = extraout_RDX;
                  if ((cVar8 != '\0') &&
                     (cVar8 = predelete_handler(pOVar13), uStack_170 = extraout_RDX_07,
                     cVar8 != '\0')) {
                    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                    Memory::free_static(pOVar13,false);
                    uStack_170 = extraout_RDX_08;
                  }
                  if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
                    StringName::unref();
                    uStack_170 = extraout_RDX_00;
                  }
                  if (cVar7 == '\0') goto LAB_0011501c;
                  goto LAB_00115190;
                }
                goto LAB_00115108;
              }
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar7 != '\0') {
              Variant::_clear_internal();
            }
            plVar25 = *(long **)(lVar3 + 0x70);
            if (plVar25[1] == 0) {
              plVar14 = (long *)plVar25[0x23];
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)(**(code **)(*plVar25 + 0x40))();
              }
            }
            else {
              plVar14 = (long *)(plVar25[1] + 0x20);
            }
            lVar30 = *plVar14;
            if (lVar30 == 0) {
              local_c8 = 0;
              uStack_c4 = 0;
            }
            else {
              pcVar17 = *(char **)(lVar30 + 8);
              local_c8 = 0;
              uStack_c4 = 0;
              if (pcVar17 == (char *)0x0) {
                if (*(long *)(lVar30 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar30 + 0x10))
                  ;
                }
              }
              else {
                local_90 = strlen(pcVar17);
                local_98 = pcVar17;
                String::parse_latin1((StrRange *)&local_c8);
              }
            }
            pcVar17 = *(char **)(lVar3 + 0x78);
            sVar15 = 0;
            local_d0 = 0;
            if (pcVar17 != (char *)0x0) {
              sVar15 = strlen(pcVar17);
            }
            local_98 = pcVar17;
            local_90 = sVar15;
            String::parse_latin1((StrRange *)&local_d0);
            local_98 = "assign";
            local_d8 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d8);
            local_e0 = 0;
            local_98 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_90 = 0x45;
            String::parse_latin1((StrRange *)&local_e0);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,(StrRange *)&local_d8,
                       (StrRange *)&local_d0,(CowData<char32_t> *)&local_c8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x91,
                             "Condition \"other_script.is_null()\" is true. Returning: false",
                             (CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            uStack_170 = extraout_RDX_04;
            goto joined_r0x00116345;
          }
          if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
            StringName::unref();
          }
LAB_00115190:
          iVar27 = iVar27 + 1;
          Variant::operator=(pVVar21,(Variant *)(puVar23 + 5));
          uStack_170 = extraout_RDX_01;
          pVVar21 = pVVar21 + 0x18;
        }
      }
      else {
LAB_00113e07:
        plVar25 = *(long **)(*(long *)param_1 + 0x28);
        if (plVar25 != (long *)0x0) {
          lVar30 = 0;
          iVar27 = 1;
LAB_00113ea3:
          local_e8 = (Variant *)(plVar25 + 5);
          if ((int)uStack_170 != (int)plVar25[5]) {
            cVar7 = Variant::can_convert_strict();
            if (cVar7 == '\0') {
              Variant::get_type_name((CowData<char32_t> *)&local_d0,*(undefined4 *)(lVar3 + 0x60));
              Variant::get_type_name((CowData<char32_t> *)&local_d8,*(undefined4 *)local_e8);
              Variant::Variant((Variant *)local_58,pVVar6 + lVar30);
              local_98 = "Unable to convert value at key \"%s\" from \"%s\" to \"%s\".";
              local_c8 = 0;
              uStack_c4 = 0;
              local_90 = 0x36;
              String::parse_latin1((StrRange *)&local_c8);
              vformat<Variant,String,String>
                        ((CowData<char32_t> *)&local_98,(StrRange *)&local_c8,(Variant *)local_58,
                         (CowData<char32_t> *)&local_d8,(CowData<char32_t> *)&local_d0);
              _err_print_error("assign","core/variant/dictionary.cpp",0x1fd,
                               "Method/function failed.",(CowData<char32_t> *)&local_98,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            }
            else {
              local_c8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              Variant::construct(*(undefined4 *)(lVar3 + 0x60),pVVar21,&local_e8,1,&local_c8);
              if (local_c8 == 0) goto LAB_00113e87;
              Variant::get_type_name(&local_d8,*(undefined4 *)(lVar3 + 0x60));
              Variant::get_type_name(&local_e0,*(undefined4 *)local_e8);
              Variant::Variant((Variant *)local_58,pVVar6 + (long)iVar27 * 0x18 + -0x18);
              local_98 = "Unable to convert value at key \"%s\" from \"%s\" to \"%s\".";
              local_d0 = 0;
              local_90 = 0x36;
              String::parse_latin1((StrRange *)&local_d0);
              vformat<Variant,String,String>
                        (&local_98,(StrRange *)&local_d0,(Variant *)local_58,&local_e0,&local_d8);
              uVar19 = 0x201;
LAB_00115420:
              _err_print_error("assign","core/variant/dictionary.cpp",uVar19,
                               "Condition \"ce.error\" is true.",(CowData<char32_t> *)&local_98,0,0)
              ;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            }
LAB_00114cb8:
            puVar23 = (undefined8 *)local_80._0_8_;
            goto LAB_00114cc0;
          }
          Variant::operator=(pVVar21,local_e8);
LAB_00113e87:
          plVar25 = (long *)*plVar25;
          iVar27 = iVar27 + 1;
          pVVar21 = pVVar21 + 0x18;
          lVar30 = lVar30 + 0x18;
          if (plVar25 != (long *)0x0) goto code_r0x00113e9f;
        }
      }
    }
LAB_00113f13:
    if (0 < (int)uVar2) {
      pVVar21 = pVVar6;
      do {
        pVVar20 = pVVar21 + 0x18;
        HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
        ::insert((Variant *)&local_98,local_88,SUB81(pVVar21,0));
        pVVar21 = pVVar20;
      } while (pVVar20 != pVVar6 + (ulong)(uVar2 - 1) * 0x18 + 0x18);
    }
    HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
    ::operator=((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                 *)(*(long *)this + 0x10),(HashMap *)local_88);
    CowData<Variant>::_unref((CowData<Variant> *)&local_a0);
    CowData<Variant>::_unref((CowData<Variant> *)local_b0);
    uVar19 = local_80._0_8_;
    if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
      piVar32 = (int *)local_80._8_8_;
      if ((local_60._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_80._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
        piVar22 = (int *)local_80._8_8_;
        puVar23 = (undefined8 *)local_80._0_8_;
        do {
          if (*piVar22 != 0) {
            pvVar4 = (void *)*puVar23;
            *piVar22 = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x28)] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar4,false);
            *puVar23 = 0;
          }
          piVar22 = piVar22 + 1;
          puVar23 = puVar23 + 1;
        } while (piVar22 != piVar1);
      }
      Memory::free_static((void *)uVar19,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00114056:
        Memory::free_static(piVar32,false);
        return;
      }
      goto LAB_00114d8a;
    }
  }
  else {
    if ((iVar9 == 0x18) && (iVar27 == 0x18)) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        if (*(long *)(lVar30 + 0x48) == 0) goto LAB_001143cc;
        if (((*(long *)(lVar30 + 0x48) != *(long *)(lVar3 + 0x48)) &&
            (cVar7 = ClassDB::is_parent_class
                               ((StringName *)(lVar30 + 0x48),(StringName *)(lVar3 + 0x48)),
            cVar7 == '\0')) ||
           ((*(long **)(lVar3 + 0x50) != (long *)0x0 &&
            ((plVar25 = *(long **)(lVar30 + 0x50), plVar25 == (long *)0x0 ||
             ((*(long **)(lVar3 + 0x50) != plVar25 &&
              (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar3 + 0x50), cVar7 == '\0'))))))))
        {
          iVar9 = *(int *)(lVar30 + 0x40);
          iVar27 = *(int *)(lVar3 + 0x40);
          goto LAB_00113c12;
        }
      }
      goto LAB_00113d98;
    }
LAB_00113c12:
    if (iVar9 == 0) {
      if (iVar27 == 0x18) {
LAB_001143cc:
        pVVar20 = pVVar6;
        for (puVar23 = *(undefined8 **)(*(long *)param_1 + 0x28); puVar23 != (undefined8 *)0x0;
            puVar23 = (undefined8 *)*puVar23) {
          if (*(int *)(puVar23 + 2) == 0) goto LAB_001145a0;
          if (*(int *)(puVar23 + 2) != 0x18) {
LAB_0011484a:
            Variant::get_type_name((CowData<char32_t> *)&local_d0,*(undefined4 *)(lVar3 + 0x40));
            Variant::get_type_name((CowData<char32_t> *)&local_d8,*(undefined4 *)(puVar23 + 2));
            local_98 = "Unable to convert key from \"%s\" to \"%s\".";
            local_c8 = 0;
            uStack_c4 = 0;
            local_90 = 0x28;
            String::parse_latin1((StrRange *)&local_c8);
            vformat<String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_c8,
                       (CowData<char32_t> *)&local_d8,(CowData<char32_t> *)&local_d0);
            _err_print_error("assign","core/variant/dictionary.cpp",0x1b7,"Method/function failed.",
                             (CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            puVar23 = (undefined8 *)local_80._0_8_;
            goto LAB_00114cc0;
          }
          uVar11 = Variant::operator_cast_to_ObjectID((Variant *)(puVar23 + 2));
          if (uVar11 == 0) goto LAB_001145a0;
          uVar16 = (uint)uVar11 & 0xffffff;
          if ((uint)ObjectDB::slot_max <= uVar16) {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115928:
            pcVar17 = *(char **)(lVar3 + 0x58);
            sVar15 = 0;
            local_c8 = 0;
            uStack_c4 = 0;
            if (pcVar17 != (char *)0x0) {
              sVar15 = strlen(pcVar17);
            }
            local_98 = pcVar17;
            local_90 = sVar15;
            String::parse_latin1((StrRange *)&local_c8);
            local_98 = "assign";
            local_d0 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d0);
            local_98 = 
            "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
            local_d8 = 0;
            local_90 = 0x4b;
            String::parse_latin1((StrRange *)&local_d8);
            vformat<String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_d8,(StrRange *)&local_d0,
                       (StrRange *)&local_c8);
            _err_print_error("validate_object","./core/variant/container_type_validate.h",0x7a,
                             "Parameter \"object\" is null.",(CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            goto LAB_0011484a;
          }
          while( true ) {
            uVar5 = (ulong)local_98 >> 8;
            local_98 = (char *)(uVar5 << 8);
            LOCK();
            bVar33 = (char)ObjectDB::spin_lock == '\0';
            if (bVar33) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar33) break;
            local_98 = (char *)(uVar5 << 8);
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar18 = (ulong *)((ulong)uVar16 * 0x10 + ObjectDB::object_slots);
          if ((uVar11 >> 0x18 & 0x7fffffffff) != (*puVar18 & 0x7fffffffff)) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_00115928;
          }
          plVar25 = (long *)puVar18[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (plVar25 == (long *)0x0) goto LAB_00115928;
          if (*(long *)(lVar3 + 0x48) == 0) goto LAB_001145a0;
          if (plVar25[1] == 0) {
            pSVar26 = (StringName *)plVar25[0x23];
            if (pSVar26 == (StringName *)0x0) {
              pSVar26 = (StringName *)(**(code **)(*plVar25 + 0x40))(plVar25);
            }
          }
          else {
            pSVar26 = (StringName *)(plVar25[1] + 0x20);
          }
          StringName::StringName((StringName *)&local_e8,pSVar26);
          if (local_e8 != *(Variant **)(lVar3 + 0x48)) {
            if (plVar25[1] == 0) {
              pSVar26 = (StringName *)plVar25[0x23];
              if (pSVar26 == (StringName *)0x0) {
                pSVar26 = (StringName *)(**(code **)(*plVar25 + 0x40))(plVar25);
              }
            }
            else {
              pSVar26 = (StringName *)(plVar25[1] + 0x20);
            }
            cVar7 = ClassDB::is_parent_class(pSVar26,(StringName *)(lVar3 + 0x48));
            if (cVar7 != '\0') goto LAB_001144ac;
            lVar30 = *(long *)(lVar3 + 0x48);
            if (lVar30 == 0) {
              local_c8 = 0;
              uStack_c4 = 0;
            }
            else {
              pcVar17 = *(char **)(lVar30 + 8);
              local_c8 = 0;
              uStack_c4 = 0;
              if (pcVar17 == (char *)0x0) {
                if (*(long *)(lVar30 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar30 + 0x10))
                  ;
                }
              }
              else {
                local_90 = strlen(pcVar17);
                local_98 = pcVar17;
                String::parse_latin1((StrRange *)&local_c8);
              }
            }
            uVar19 = *(undefined8 *)(lVar3 + 0x58);
            (**(code **)(*plVar25 + 0x48))(&local_d0,plVar25);
            local_98 = "assign";
            local_d8 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d8);
            local_e0 = 0;
            local_98 = 
            "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'."
            ;
            local_90 = 0x53;
            String::parse_latin1((StrRange *)&local_e0);
            vformat<String,String,char_const*,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,(StrRange *)&local_d8,
                       &local_d0,uVar19,&local_c8);
            pcVar17 = 
            "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false"
            ;
            uVar19 = 0x87;
LAB_001147ed:
            local_168 = (CowData<char32_t> *)&local_e0;
            _err_print_error("validate_object","./core/variant/container_type_validate.h",uVar19,
                             pcVar17,(CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref(local_168);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
              StringName::unref();
            }
            goto LAB_0011484a;
          }
LAB_001144ac:
          if (*(long *)(lVar3 + 0x50) != 0) {
            (**(code **)(*plVar25 + 0x98))(local_58,plVar25);
            lVar12 = Variant::get_validated_object();
            if (lVar12 == 0) {
LAB_0011467b:
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            else {
              pOVar13 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar13 != (Object *)0x0) {
                cVar7 = RefCounted::reference();
                if (cVar7 != '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar7 = (**(code **)(*(long *)pOVar13 + 0x1e8))(pOVar13);
                  if (cVar7 == '\0') {
                    plVar25 = *(long **)(lVar3 + 0x50);
                    if (plVar25[1] == 0) {
                      plVar14 = (long *)plVar25[0x23];
                      if (plVar14 == (long *)0x0) {
                        plVar14 = (long *)(**(code **)(*plVar25 + 0x40))();
                      }
                    }
                    else {
                      plVar14 = (long *)(plVar25[1] + 0x20);
                    }
                    lVar12 = *plVar14;
                    if (lVar12 == 0) {
                      local_c8 = 0;
                      uStack_c4 = 0;
                    }
                    else {
                      pcVar17 = *(char **)(lVar12 + 8);
                      local_c8 = 0;
                      uStack_c4 = 0;
                      if (pcVar17 == (char *)0x0) {
                        if (*(long *)(lVar12 + 0x10) != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_c8,(CowData *)(lVar12 + 0x10));
                        }
                      }
                      else {
                        local_90 = strlen(pcVar17);
                        local_98 = pcVar17;
                        String::parse_latin1((StrRange *)&local_c8);
                      }
                    }
                    local_128 = (Variant *)&local_c8;
                    pcVar17 = *(char **)(lVar3 + 0x58);
                    sVar15 = 0;
                    local_d0 = 0;
                    if (pcVar17 != (char *)0x0) {
                      sVar15 = strlen(pcVar17);
                    }
                    local_98 = pcVar17;
                    local_90 = sVar15;
                    String::parse_latin1((StrRange *)&local_d0);
                    local_d8 = 0;
                    local_98 = "assign";
                    local_90 = 6;
                    String::parse_latin1((StrRange *)&local_d8);
                    local_e0 = 0;
                    local_98 = 
                    "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                    local_90 = 0x45;
                    String::parse_latin1((StrRange *)&local_e0);
                    vformat<String,String,String>
                              ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,
                               (StrRange *)&local_d8,(StrRange *)&local_d0,local_128);
                    _err_print_error("validate_object","./core/variant/container_type_validate.h",
                                     0x92,
                                     "Condition \"!other_script->inherits_script(script)\" is true. Returning: false"
                                     ,(CowData<char32_t> *)&local_98,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                  }
                  cVar8 = RefCounted::unreference();
                  if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
                    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                    Memory::free_static(pOVar13,false);
                  }
                  if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
                    StringName::unref();
                  }
                  if (cVar7 == '\0') goto LAB_0011484a;
                  goto LAB_001145a0;
                }
                goto LAB_0011467b;
              }
              cVar7 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar7 != '\0') {
              Variant::_clear_internal();
            }
            plVar25 = *(long **)(lVar3 + 0x50);
            if (plVar25[1] == 0) {
              plVar14 = (long *)plVar25[0x23];
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)(**(code **)(*plVar25 + 0x40))();
              }
            }
            else {
              plVar14 = (long *)(plVar25[1] + 0x20);
            }
            lVar30 = *plVar14;
            if (lVar30 == 0) {
              local_c8 = 0;
              uStack_c4 = 0;
            }
            else {
              pcVar17 = *(char **)(lVar30 + 8);
              local_c8 = 0;
              uStack_c4 = 0;
              if (pcVar17 == (char *)0x0) {
                if (*(long *)(lVar30 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar30 + 0x10))
                  ;
                }
              }
              else {
                local_90 = strlen(pcVar17);
                local_98 = pcVar17;
                String::parse_latin1((StrRange *)&local_c8);
              }
            }
            pcVar17 = *(char **)(lVar3 + 0x58);
            sVar15 = 0;
            local_d0 = 0;
            if (pcVar17 != (char *)0x0) {
              sVar15 = strlen(pcVar17);
            }
            local_98 = pcVar17;
            local_90 = sVar15;
            String::parse_latin1((StrRange *)&local_d0);
            local_98 = "assign";
            local_d8 = 0;
            local_90 = 6;
            String::parse_latin1((StrRange *)&local_d8);
            local_e0 = 0;
            local_98 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
            local_90 = 0x45;
            String::parse_latin1((StrRange *)&local_e0);
            vformat<String,String,String>
                      ((CowData<char32_t> *)&local_98,(StrRange *)&local_e0,(StrRange *)&local_d8,
                       (StrRange *)&local_d0,&local_c8);
            pcVar17 = "Condition \"other_script.is_null()\" is true. Returning: false";
            uVar19 = 0x91;
            goto LAB_001147ed;
          }
          if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
            StringName::unref();
          }
LAB_001145a0:
          Variant::operator=(pVVar20,(Variant *)(puVar23 + 2));
          pVVar20 = pVVar20 + 0x18;
        }
      }
      else {
LAB_00113c23:
        plVar25 = *(long **)(*(long *)param_1 + 0x28);
        if (plVar25 != (long *)0x0) {
          pVVar20 = pVVar6;
          do {
            local_e8 = (Variant *)(plVar25 + 2);
            if (iVar27 != (int)plVar25[2]) {
              cVar7 = Variant::can_convert_strict();
              if (cVar7 == '\0') {
                pCVar24 = (CowData<char32_t> *)&local_d0;
                pCVar28 = (CowData<char32_t> *)&local_d8;
                pSVar31 = (StrRange *)&local_c8;
                Variant::get_type_name(pCVar24,*(undefined4 *)(lVar3 + 0x40));
                Variant::get_type_name(pCVar28,*(undefined4 *)local_e8);
                local_98 = "Unable to convert key from \"%s\" to \"%s\".";
                local_c8 = 0;
                uStack_c4 = 0;
                local_90 = 0x28;
                String::parse_latin1(pSVar31);
                vformat<String,String>(&local_98,pSVar31,pCVar28,pCVar24);
                pcVar17 = "Method/function failed.";
                uVar19 = 0x1c8;
              }
              else {
                local_c8 = 0;
                uStack_c4 = 0;
                uStack_c0 = 0;
                Variant::construct(*(undefined4 *)(lVar3 + 0x40),pVVar20,&local_e8,1,&local_c8);
                if (local_c8 == 0) goto LAB_00113ca1;
                pCVar24 = (CowData<char32_t> *)&local_d8;
                pCVar28 = (CowData<char32_t> *)&local_e0;
                pSVar31 = (StrRange *)&local_d0;
                Variant::get_type_name(pCVar24,*(undefined4 *)(lVar3 + 0x40));
                Variant::get_type_name(pCVar28,*(undefined4 *)local_e8);
                local_98 = "Unable to convert key from \"%s\" to \"%s\".";
                local_d0 = 0;
                local_90 = 0x28;
                String::parse_latin1(pSVar31);
                vformat<String,String>(&local_98,pSVar31,pCVar28,pCVar24);
                pcVar17 = "Condition \"ce.error\" is true.";
                uVar19 = 0x1cc;
              }
              _err_print_error("assign","core/variant/dictionary.cpp",uVar19,pcVar17,
                               (CowData<char32_t> *)&local_98,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar31);
              CowData<char32_t>::_unref(pCVar28);
              CowData<char32_t>::_unref(pCVar24);
              goto LAB_00114cb8;
            }
            Variant::operator=(pVVar20,local_e8);
LAB_00113ca1:
            plVar25 = (long *)*plVar25;
            pVVar20 = pVVar20 + 0x18;
            if (plVar25 == (long *)0x0) break;
            iVar27 = *(int *)(lVar3 + 0x40);
          } while( true );
        }
      }
      goto LAB_00113dce;
    }
    if (iVar9 != 0x18) {
LAB_00114a3c:
      if (iVar27 == 0x18) {
LAB_00115a8b:
        puVar23 = (undefined8 *)0x0;
        goto LAB_001140b8;
      }
      if (*(int *)(lVar30 + 0x40) == 0x18) goto LAB_001140b0;
      if (*(int *)(lVar30 + 0x40) == 0) goto LAB_00113c23;
      cVar7 = Variant::can_convert_strict();
      if (cVar7 != '\0') {
        plVar25 = *(long **)(*(long *)param_1 + 0x28);
        if (plVar25 != (long *)0x0) {
          pVVar20 = pVVar6;
          do {
            local_e8 = (Variant *)(plVar25 + 2);
            local_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            Variant::construct(*(undefined4 *)(lVar3 + 0x40),pVVar20,&local_e8,1,&local_c8);
            if (local_c8 != 0) {
              pCVar24 = (CowData<char32_t> *)&local_d8;
              pCVar28 = (CowData<char32_t> *)&local_e0;
              this_00 = (CowData<char32_t> *)&local_98;
              pSVar31 = (StrRange *)&local_d0;
              Variant::get_type_name(pCVar24,*(undefined4 *)(lVar3 + 0x40));
              Variant::get_type_name(pCVar28,*(undefined4 *)local_e8);
              local_98 = "Unable to convert key from \"%s\" to \"%s\".";
              local_d0 = 0;
              local_90 = 0x28;
              String::parse_latin1(pSVar31);
              vformat<String,String>(this_00,pSVar31,pCVar28,pCVar24);
              _err_print_error("assign","core/variant/dictionary.cpp",0x1d5,
                               "Condition \"ce.error\" is true.",this_00,0,0);
              goto LAB_001142dd;
            }
            plVar25 = (long *)*plVar25;
            pVVar20 = pVVar20 + 0x18;
          } while (plVar25 != (long *)0x0);
        }
        goto LAB_00113dce;
      }
      Variant::get_type_name(&local_d0,*(undefined4 *)(lVar3 + 0x60));
      Variant::get_type_name(&local_d8,*(undefined4 *)(lVar3 + 0x40));
      Variant::get_type_name(&local_e0,*(undefined4 *)(lVar30 + 0x60));
      Variant::get_type_name(&local_e8,*(undefined4 *)(lVar30 + 0x40));
      local_98 = "Cannot assign contents of \"Dictionary[%s, %s]\" to \"Dictionary[%s, %s].";
      local_c8 = 0;
      uStack_c4 = 0;
      local_90 = 0x46;
      String::parse_latin1((StrRange *)&local_c8);
      vformat<String,String,String,String>
                (&local_98,(StrRange *)&local_c8,&local_e8,&local_e0,&local_d8,&local_d0);
      uVar19 = 0x1d8;
      goto LAB_001142b7;
    }
    if (iVar27 == 0x18) {
      if (*(long *)(lVar30 + 0x48) != 0) {
        if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00115a8b;
        if (((*(long *)(lVar30 + 0x48) != *(long *)(lVar3 + 0x48)) &&
            (cVar7 = ClassDB::is_parent_class
                               ((StringName *)(lVar3 + 0x48),(StringName *)(lVar30 + 0x48)),
            cVar7 == '\0')) ||
           ((*(long **)(lVar30 + 0x50) != (long *)0x0 &&
            ((plVar25 = *(long **)(lVar3 + 0x50), plVar25 == (long *)0x0 ||
             ((*(long **)(lVar30 + 0x50) != plVar25 &&
              (cVar7 = (**(code **)(*plVar25 + 0x1e8))(plVar25,lVar30 + 0x50), cVar7 == '\0'))))))))
        {
          iVar27 = *(int *)(lVar3 + 0x40);
          goto LAB_00114a3c;
        }
      }
      goto LAB_001143cc;
    }
LAB_001140b0:
    puVar23 = (undefined8 *)local_80._0_8_;
LAB_001140b8:
    Variant::get_type_name((CowData<char32_t> *)&local_d0,*(undefined4 *)(lVar3 + 0x60));
    Variant::get_type_name((CowData<char32_t> *)&local_d8,*(undefined4 *)(lVar3 + 0x40));
    Variant::get_type_name((CowData<char32_t> *)&local_e0,*(undefined4 *)(lVar30 + 0x60));
    Variant::get_type_name((CowData<char32_t> *)&local_e8,*(undefined4 *)(lVar30 + 0x40));
    local_98 = "Cannot assign contents of \"Dictionary[%s, %s]\" to \"Dictionary[%s, %s]\".";
    local_c8 = 0;
    uStack_c4 = 0;
    local_90 = 0x47;
    String::parse_latin1((StrRange *)&local_c8);
    vformat<String,String,String,String>
              ((CowData<char32_t> *)&local_98,(StrRange *)&local_c8,(CowData<char32_t> *)&local_e8,
               (CowData<char32_t> *)&local_e0,(CowData<char32_t> *)&local_d8,
               (CowData<char32_t> *)&local_d0);
    _err_print_error("assign","core/variant/dictionary.cpp",0x1bc,"Method/function failed.",
                     (CowData<char32_t> *)&local_98,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
LAB_00114cc0:
    CowData<Variant>::_unref((CowData<Variant> *)&local_a0);
    CowData<Variant>::_unref((CowData<Variant> *)local_b0);
    if (puVar23 != (undefined8 *)0x0) {
      piVar32 = (int *)local_80._8_8_;
      if ((local_60._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_80._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
        piVar22 = (int *)local_80._8_8_;
        puVar29 = puVar23;
        do {
          if (*piVar22 != 0) {
            pvVar4 = (void *)*puVar29;
            *piVar22 = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x28)] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar4,false);
            *puVar29 = 0;
          }
          piVar22 = piVar22 + 1;
          puVar29 = puVar29 + 1;
        } while (piVar1 != piVar22);
      }
      Memory::free_static(puVar23,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00114056;
      goto LAB_00114d8a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114d8a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00113e9f:
  uStack_170 = (ulong)*(uint *)(lVar3 + 0x60);
  goto LAB_00113ea3;
}



/* Dictionary::Dictionary(Dictionary const&, unsigned int, StringName const&, Variant const&,
   unsigned int, StringName const&, Variant const&) */

void __thiscall
Dictionary::Dictionary
          (Dictionary *this,Dictionary *param_1,uint param_2,StringName *param_3,Variant *param_4,
          uint param_5,StringName *param_6,Variant *param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x88,"");
  *puVar1 = 0;
  *(char **)(puVar1 + 0x16) = "container";
  *(char **)(puVar1 + 0x1e) = "container";
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 2;
  puVar1[0x10] = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x1a) = (undefined1  [16])0x0;
  *(undefined4 **)this = puVar1;
  *puVar1 = 1;
  set_typed((uint)this,(StringName *)(ulong)param_2,(Variant *)param_3,(uint)param_4,
            (StringName *)(ulong)param_5,(Variant *)param_6);
  assign(this,param_1);
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  return;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  operator_delete(this,0x10);
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b590;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b690;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b630;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b650;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b670;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b570;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5d0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5f0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5b0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b570;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b590;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5b0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b670;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5d0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b630;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b690;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b5f0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011b650;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Variant::Pools::BucketSmall* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::alloc<>()
    */

BucketSmall * __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar2;
  long lVar3;
  BucketSmall *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x18,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x18;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketSmall **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */

BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
  long lVar3;
  BucketMedium *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x30;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketMedium **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketLarge* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::alloc<>()
    */

BucketLarge * __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar2;
  long lVar3;
  BucketLarge *pBVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) << 6,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      uVar10 = 0;
      lVar6 = *plVar12;
      do {
        *(ulong *)(lVar6 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar5 + lVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketLarge **)
            (plVar12[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* WARNING: Removing unreachable block (ram,0x00118350) */
/* WARNING: Removing unreachable block (ram,0x00118480) */
/* WARNING: Removing unreachable block (ram,0x001185f8) */
/* WARNING: Removing unreachable block (ram,0x0011848c) */
/* WARNING: Removing unreachable block (ram,0x00118496) */
/* WARNING: Removing unreachable block (ram,0x001185da) */
/* WARNING: Removing unreachable block (ram,0x001184a2) */
/* WARNING: Removing unreachable block (ram,0x001184ac) */
/* WARNING: Removing unreachable block (ram,0x001185bc) */
/* WARNING: Removing unreachable block (ram,0x001184b8) */
/* WARNING: Removing unreachable block (ram,0x001184c2) */
/* WARNING: Removing unreachable block (ram,0x0011859e) */
/* WARNING: Removing unreachable block (ram,0x001184ce) */
/* WARNING: Removing unreachable block (ram,0x001184d8) */
/* WARNING: Removing unreachable block (ram,0x00118580) */
/* WARNING: Removing unreachable block (ram,0x001184e4) */
/* WARNING: Removing unreachable block (ram,0x001184ee) */
/* WARNING: Removing unreachable block (ram,0x00118562) */
/* WARNING: Removing unreachable block (ram,0x001184f6) */
/* WARNING: Removing unreachable block (ram,0x00118500) */
/* WARNING: Removing unreachable block (ram,0x00118547) */
/* WARNING: Removing unreachable block (ram,0x00118508) */
/* WARNING: Removing unreachable block (ram,0x0011851d) */
/* WARNING: Removing unreachable block (ram,0x00118529) */
/* String vformat<String, String, char const*, String>(String const&, String const, String const,
   char const* const, String const) */

undefined8 *
vformat<String,String,char_const*,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          char *param_5,String_conflict *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00118770) */
/* WARNING: Removing unreachable block (ram,0x001188a0) */
/* WARNING: Removing unreachable block (ram,0x00118a19) */
/* WARNING: Removing unreachable block (ram,0x001188ac) */
/* WARNING: Removing unreachable block (ram,0x001188b6) */
/* WARNING: Removing unreachable block (ram,0x001189fb) */
/* WARNING: Removing unreachable block (ram,0x001188c2) */
/* WARNING: Removing unreachable block (ram,0x001188cc) */
/* WARNING: Removing unreachable block (ram,0x001189dd) */
/* WARNING: Removing unreachable block (ram,0x001188d8) */
/* WARNING: Removing unreachable block (ram,0x001188e2) */
/* WARNING: Removing unreachable block (ram,0x001189bf) */
/* WARNING: Removing unreachable block (ram,0x001188ee) */
/* WARNING: Removing unreachable block (ram,0x001188f8) */
/* WARNING: Removing unreachable block (ram,0x001189a1) */
/* WARNING: Removing unreachable block (ram,0x00118904) */
/* WARNING: Removing unreachable block (ram,0x0011890e) */
/* WARNING: Removing unreachable block (ram,0x00118983) */
/* WARNING: Removing unreachable block (ram,0x00118916) */
/* WARNING: Removing unreachable block (ram,0x00118920) */
/* WARNING: Removing unreachable block (ram,0x00118968) */
/* WARNING: Removing unreachable block (ram,0x00118928) */
/* WARNING: Removing unreachable block (ram,0x0011893e) */
/* WARNING: Removing unreachable block (ram,0x0011894a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00118b98) */
/* WARNING: Removing unreachable block (ram,0x00118cc8) */
/* WARNING: Removing unreachable block (ram,0x00118e40) */
/* WARNING: Removing unreachable block (ram,0x00118cd4) */
/* WARNING: Removing unreachable block (ram,0x00118cde) */
/* WARNING: Removing unreachable block (ram,0x00118e22) */
/* WARNING: Removing unreachable block (ram,0x00118cea) */
/* WARNING: Removing unreachable block (ram,0x00118cf4) */
/* WARNING: Removing unreachable block (ram,0x00118e04) */
/* WARNING: Removing unreachable block (ram,0x00118d00) */
/* WARNING: Removing unreachable block (ram,0x00118d0a) */
/* WARNING: Removing unreachable block (ram,0x00118de6) */
/* WARNING: Removing unreachable block (ram,0x00118d16) */
/* WARNING: Removing unreachable block (ram,0x00118d20) */
/* WARNING: Removing unreachable block (ram,0x00118dc8) */
/* WARNING: Removing unreachable block (ram,0x00118d2c) */
/* WARNING: Removing unreachable block (ram,0x00118d36) */
/* WARNING: Removing unreachable block (ram,0x00118daa) */
/* WARNING: Removing unreachable block (ram,0x00118d3e) */
/* WARNING: Removing unreachable block (ram,0x00118d48) */
/* WARNING: Removing unreachable block (ram,0x00118d8f) */
/* WARNING: Removing unreachable block (ram,0x00118d50) */
/* WARNING: Removing unreachable block (ram,0x00118d65) */
/* WARNING: Removing unreachable block (ram,0x00118d71) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          String_conflict *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> > >::erase(Variant const&) */

char __thiscall
HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
::erase(HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
        *this,Variant *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  ulong uVar35;
  long lVar36;
  uint *puVar37;
  uint uVar38;
  
  if (*(long *)(this + 8) == 0) {
    return '\0';
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = Variant::hash();
    lVar36 = *(long *)(this + 0x10);
    uVar30 = 1;
    if (uVar29 != 0) {
      uVar30 = uVar29;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar30 * lVar6;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    lVar32 = SUB168(auVar8 * auVar18,8);
    uVar29 = *(uint *)(lVar36 + lVar32 * 4);
    uVar31 = SUB164(auVar8 * auVar18,8);
    if (uVar29 != 0) {
      uVar38 = 0;
      do {
        if (uVar30 == uVar29) {
          cVar28 = StringLikeVariantComparator::compare
                             ((Variant *)(*(long *)(*(long *)(this + 8) + lVar32 * 8) + 0x10),
                              param_1);
          if (cVar28 != '\0') {
            lVar6 = *(long *)(this + 0x10);
            lVar36 = *(long *)(this + 8);
            uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar35 = CONCAT44(0,uVar5);
            lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar31 + 1) * lVar32;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar35;
            lVar33 = SUB168(auVar12 * auVar22,8);
            puVar37 = (uint *)(lVar6 + lVar33 * 4);
            uVar29 = SUB164(auVar12 * auVar22,8);
            uVar30 = *puVar37;
            if ((uVar30 == 0) ||
               (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar30 * lVar32, auVar23._8_8_ = 0,
               auVar23._0_8_ = uVar35, auVar14._8_8_ = 0,
               auVar14._0_8_ = (ulong)((uVar5 + uVar29) - SUB164(auVar13 * auVar23,8)) * lVar32,
               auVar24._8_8_ = 0, auVar24._0_8_ = uVar35, uVar38 = uVar31,
               SUB164(auVar14 * auVar24,8) == 0)) goto LAB_00119089;
            goto LAB_0011903d;
          }
          lVar36 = *(long *)(this + 0x10);
        }
        uVar38 = uVar38 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar31 + 1) * lVar6;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        lVar32 = SUB168(auVar9 * auVar19,8);
        uVar29 = *(uint *)(lVar36 + lVar32 * 4);
        uVar31 = SUB164(auVar9 * auVar19,8);
      } while ((uVar29 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar29 * lVar6, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar35, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar5 + uVar31) - SUB164(auVar10 * auVar20,8)) * lVar6,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar35, uVar38 <= SUB164(auVar11 * auVar21,8)));
    }
  }
  return '\0';
  while (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar30 * lVar32, auVar25._8_8_ = 0,
        auVar25._0_8_ = uVar35, auVar16._8_8_ = 0,
        auVar16._0_8_ = (ulong)((uVar29 + uVar5) - SUB164(auVar15 * auVar25,8)) * lVar32,
        auVar26._8_8_ = 0, auVar26._0_8_ = uVar35, uVar38 = uVar31, SUB164(auVar16 * auVar26,8) != 0
        ) {
LAB_0011903d:
    uVar31 = uVar29;
    puVar1 = (uint *)(lVar6 + (ulong)uVar38 * 4);
    *puVar37 = *puVar1;
    puVar2 = (undefined8 *)(lVar36 + lVar33 * 8);
    *puVar1 = uVar30;
    puVar3 = (undefined8 *)(lVar36 + (ulong)uVar38 * 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar7;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(uVar31 + 1) * lVar32;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar35;
    lVar33 = SUB168(auVar17 * auVar27,8);
    puVar37 = (uint *)(lVar6 + lVar33 * 4);
    uVar29 = SUB164(auVar17 * auVar27,8);
    uVar30 = *puVar37;
    if (uVar30 == 0) break;
  }
LAB_00119089:
  uVar35 = (ulong)uVar31;
  plVar4 = (long *)(lVar36 + uVar35 * 8);
  *(undefined4 *)(lVar6 + uVar35 * 4) = 0;
  plVar34 = (long *)*plVar4;
  if (*(long **)(this + 0x18) == plVar34) {
    *(long *)(this + 0x18) = *plVar34;
    plVar34 = (long *)*plVar4;
    if (*(long **)(this + 0x20) != plVar34) goto LAB_001190ab;
  }
  else if (*(long **)(this + 0x20) != plVar34) goto LAB_001190ab;
  *(long *)(this + 0x20) = plVar34[1];
  plVar34 = (long *)*plVar4;
LAB_001190ab:
  if ((long *)plVar34[1] != (long *)0x0) {
    *(long *)plVar34[1] = *plVar34;
    plVar34 = (long *)*plVar4;
  }
  if (*plVar34 != 0) {
    *(long *)(*plVar34 + 8) = plVar34[1];
    plVar34 = (long *)*plVar4;
  }
  if (Variant::needs_deinit[(int)plVar34[5]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)plVar34[2]] != '\0') {
    Variant::_clear_internal();
  }
  Memory::free_static(plVar34,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar35 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return cVar28;
}



/* WARNING: Removing unreachable block (ram,0x00119310) */
/* WARNING: Removing unreachable block (ram,0x00119440) */
/* WARNING: Removing unreachable block (ram,0x001195b8) */
/* WARNING: Removing unreachable block (ram,0x0011944c) */
/* WARNING: Removing unreachable block (ram,0x00119456) */
/* WARNING: Removing unreachable block (ram,0x0011959a) */
/* WARNING: Removing unreachable block (ram,0x00119462) */
/* WARNING: Removing unreachable block (ram,0x0011946c) */
/* WARNING: Removing unreachable block (ram,0x0011957c) */
/* WARNING: Removing unreachable block (ram,0x00119478) */
/* WARNING: Removing unreachable block (ram,0x00119482) */
/* WARNING: Removing unreachable block (ram,0x0011955e) */
/* WARNING: Removing unreachable block (ram,0x0011948e) */
/* WARNING: Removing unreachable block (ram,0x00119498) */
/* WARNING: Removing unreachable block (ram,0x00119540) */
/* WARNING: Removing unreachable block (ram,0x001194a4) */
/* WARNING: Removing unreachable block (ram,0x001194ae) */
/* WARNING: Removing unreachable block (ram,0x00119522) */
/* WARNING: Removing unreachable block (ram,0x001194b6) */
/* WARNING: Removing unreachable block (ram,0x001194c0) */
/* WARNING: Removing unreachable block (ram,0x00119507) */
/* WARNING: Removing unreachable block (ram,0x001194c8) */
/* WARNING: Removing unreachable block (ram,0x001194dd) */
/* WARNING: Removing unreachable block (ram,0x001194e9) */
/* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */

undefined8 *
vformat<String,String,String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          String_conflict *param_5,String_conflict *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00119738) */
/* WARNING: Removing unreachable block (ram,0x00119868) */
/* WARNING: Removing unreachable block (ram,0x001199e0) */
/* WARNING: Removing unreachable block (ram,0x00119874) */
/* WARNING: Removing unreachable block (ram,0x0011987e) */
/* WARNING: Removing unreachable block (ram,0x001199c2) */
/* WARNING: Removing unreachable block (ram,0x0011988a) */
/* WARNING: Removing unreachable block (ram,0x00119894) */
/* WARNING: Removing unreachable block (ram,0x001199a4) */
/* WARNING: Removing unreachable block (ram,0x001198a0) */
/* WARNING: Removing unreachable block (ram,0x001198aa) */
/* WARNING: Removing unreachable block (ram,0x00119986) */
/* WARNING: Removing unreachable block (ram,0x001198b6) */
/* WARNING: Removing unreachable block (ram,0x001198c0) */
/* WARNING: Removing unreachable block (ram,0x00119968) */
/* WARNING: Removing unreachable block (ram,0x001198cc) */
/* WARNING: Removing unreachable block (ram,0x001198d6) */
/* WARNING: Removing unreachable block (ram,0x0011994a) */
/* WARNING: Removing unreachable block (ram,0x001198de) */
/* WARNING: Removing unreachable block (ram,0x001198e8) */
/* WARNING: Removing unreachable block (ram,0x0011992f) */
/* WARNING: Removing unreachable block (ram,0x001198f0) */
/* WARNING: Removing unreachable block (ram,0x00119905) */
/* WARNING: Removing unreachable block (ram,0x00119911) */
/* String vformat<Variant, String, String>(String const&, Variant const, String const, String const)
    */

undefined8 *
vformat<Variant,String,String>
          (undefined8 *param_1,bool *param_2,Variant *param_3,String_conflict *param_4,
          String_conflict *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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
          if (Variant::needs_deinit[*piVar5] != '\0') {
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



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

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

void FUN_00119c3a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CowData<long>::_unref() */

void __thiscall CowData<long>::_unref(CowData<long> *this)

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



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* CowData<double>::_unref() */

void __thiscall CowData<double>::_unref(CowData<double> *this)

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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
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
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011b610;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011b610;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  operator_delete(this,0x20);
  return;
}



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<Vector4>::_unref() */

void __thiscall CowData<Vector4>::_unref(CowData<Vector4> *this)

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



/* HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
::_resize_and_rehash
          (HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> > >::operator[](Variant const&) */

Variant * __thiscall
HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
::operator[](HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
             *this,Variant *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *__s;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  void *__s_00;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 *puVar42;
  uint uVar43;
  uint uVar44;
  long in_FS_OFFSET;
  uint local_d8;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  undefined1 local_88 [16];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0011a758:
    local_a0 = (undefined1  [16])0x0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    uVar35 = (ulong)uVar28;
    uVar36 = uVar35 * 4;
    uVar40 = uVar35 * 8;
    uVar31 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    __s_00 = (void *)Memory::alloc_static(uVar40,false);
    *(void **)(this + 8) = __s_00;
    if (uVar28 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar35 != uVar36);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar40);
      }
LAB_0011a62d:
      iVar32 = *(int *)(this + 0x2c);
      if (iVar32 != 0) {
LAB_0011a63d:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar39 = Variant::hash();
        uVar36 = CONCAT44(0,uVar38);
        lVar41 = *(long *)(this + 0x10);
        uVar29 = 1;
        if (uVar39 != 0) {
          uVar29 = uVar39;
        }
        uVar44 = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar29 * lVar2;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar36;
        lVar34 = SUB168(auVar11 * auVar23,8);
        uVar39 = *(uint *)(lVar41 + lVar34 * 4);
        uVar43 = SUB164(auVar11 * auVar23,8);
        if (uVar39 != 0) {
          do {
            if (uVar29 == uVar39) {
              cVar27 = StringLikeVariantComparator::compare
                                 ((Variant *)(*(long *)(*(long *)(this + 8) + lVar34 * 8) + 0x10),
                                  param_1);
              if (cVar27 != '\0') {
                Variant::operator=((Variant *)
                                   (*(long *)(*(long *)(this + 8) + (ulong)uVar43 * 8) + 0x28),
                                   (Variant *)local_a8);
                local_b8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar43 * 8) + 0x28);
                goto LAB_0011a4e0;
              }
              lVar41 = *(long *)(this + 0x10);
            }
            uVar44 = uVar44 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar43 + 1) * lVar2;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar36;
            lVar34 = SUB168(auVar12 * auVar24,8);
            uVar39 = *(uint *)(lVar41 + lVar34 * 4);
            uVar43 = SUB164(auVar12 * auVar24,8);
          } while ((uVar39 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar39 * lVar2, auVar25._8_8_ = 0,
                  auVar25._0_8_ = uVar36, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar38 + uVar43) - SUB164(auVar13 * auVar25,8)) * lVar2,
                  auVar26._8_8_ = 0, auVar26._0_8_ = uVar36, uVar44 <= SUB164(auVar14 * auVar26,8)))
          ;
        }
        iVar32 = *(int *)(this + 0x2c);
      }
      uVar35 = (ulong)uVar28;
      goto LAB_0011a2fd;
    }
    iVar32 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011a2fd;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011a63d;
LAB_0011a31f:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b8 = (Variant *)0x28;
      goto LAB_0011a4e0;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar36 = CONCAT44(0,uVar28);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar29 = Variant::hash();
      uVar38 = 1;
      if (uVar29 != 0) {
        uVar38 = uVar29;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar38 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      lVar34 = SUB168(auVar7 * auVar19,8);
      lVar41 = *(long *)(this + 0x10);
      uVar39 = SUB164(auVar7 * auVar19,8);
      uVar29 = *(uint *)(lVar41 + lVar34 * 4);
      if (uVar29 == 0) {
        lVar33 = *(long *)(this + 8);
      }
      else {
        uVar43 = 0;
        lVar33 = *(long *)(this + 8);
        do {
          if (uVar38 == uVar29) {
            cVar27 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(lVar33 + lVar34 * 8) + 0x10),param_1);
            if (cVar27 != '\0') {
              local_b8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar39 * 8) + 0x28);
              goto LAB_0011a4f5;
            }
            lVar41 = *(long *)(this + 0x10);
            lVar33 = *(long *)(this + 8);
          }
          uVar43 = uVar43 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar39 + 1) * lVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar36;
          lVar34 = SUB168(auVar8 * auVar20,8);
          uVar29 = *(uint *)(lVar41 + lVar34 * 4);
          uVar39 = SUB164(auVar8 * auVar20,8);
        } while ((uVar29 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar29 * lVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar36, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar39 + uVar28) - SUB164(auVar9 * auVar21,8)) * lVar2,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar36, uVar43 <= SUB164(auVar10 * auVar22,8)));
      }
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a0 = (undefined1  [16])0x0;
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar33 == 0) goto LAB_0011a758;
      goto LAB_0011a62d;
    }
    local_a8[0] = 0;
    local_a8[1] = 0;
    uVar35 = (ulong)uVar28;
    local_a0 = (undefined1  [16])0x0;
    iVar32 = 0;
LAB_0011a2fd:
    if ((float)uVar35 * __LC76 < (float)(iVar32 + 1)) goto LAB_0011a31f;
  }
  local_88 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_78,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_a8);
  puVar30 = (undefined8 *)operator_new(0x40,"");
  *puVar30 = local_88._0_8_;
  puVar30[1] = local_88._8_8_;
  Variant::Variant((Variant *)(puVar30 + 2),(Variant *)local_78);
  local_b8 = (Variant *)(puVar30 + 5);
  Variant::Variant(local_b8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar30;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar30;
    puVar30[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar30;
  uVar28 = Variant::hash();
  uVar36 = 1;
  if (uVar28 != 0) {
    uVar36 = (ulong)uVar28;
  }
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = (uint)uVar36;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar28);
  lVar41 = *(long *)(this + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar36 * lVar2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar40;
  lVar33 = SUB168(auVar3 * auVar15,8);
  lVar34 = *(long *)(this + 8);
  puVar37 = (uint *)(lVar41 + lVar33 * 4);
  iVar32 = SUB164(auVar3 * auVar15,8);
  uVar38 = *puVar37;
  if (uVar38 != 0) {
    uVar39 = 0;
    puVar42 = puVar30;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar40;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar28 + iVar32) - SUB164(auVar4 * auVar16,8)) * lVar2;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      local_d8 = SUB164(auVar5 * auVar17,8);
      puVar30 = puVar42;
      if (local_d8 < uVar39) {
        puVar1 = (undefined8 *)(lVar34 + lVar33 * 8);
        *puVar37 = (uint)uVar36;
        uVar36 = (ulong)uVar38;
        puVar30 = (undefined8 *)*puVar1;
        *puVar1 = puVar42;
        uVar39 = local_d8;
      }
      uVar29 = (uint)uVar36;
      uVar39 = uVar39 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar32 + 1) * lVar2;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar40;
      lVar33 = SUB168(auVar6 * auVar18,8);
      puVar37 = (uint *)(lVar41 + lVar33 * 4);
      iVar32 = SUB164(auVar6 * auVar18,8);
      uVar38 = *puVar37;
      puVar42 = puVar30;
    } while (uVar38 != 0);
  }
  *(undefined8 **)(lVar34 + lVar33 * 8) = puVar30;
  *puVar37 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a4e0:
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011a4f5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_b8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> > >::insert(Variant const&, Variant
   const&, bool) */

Variant * HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
          ::insert(Variant *param_1,Variant *param_2,bool param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
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
  ulong uVar20;
  undefined8 *puVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  void *__s_00;
  ulong uVar26;
  Variant *in_RCX;
  int iVar27;
  uint uVar28;
  uint uVar29;
  undefined7 in_register_00000011;
  long lVar30;
  long lVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  undefined8 *puVar36;
  long in_FS_OFFSET;
  undefined8 *local_a8;
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar20 = (ulong)uVar24;
    uVar26 = uVar20 * 4;
    uVar33 = uVar20 * 8;
    uVar25 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar24 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
      else {
        memset(__s,0,uVar26);
        memset(__s_00,0,uVar33);
      }
      goto LAB_0011ab68;
    }
    iVar27 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011ab78;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011ada0;
LAB_0011ab9a:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a8 = (undefined8 *)0x0;
      goto LAB_0011ad4c;
    }
    _resize_and_rehash((HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011ab68:
    iVar27 = *(int *)(param_2 + 0x2c);
    if (iVar27 != 0) {
LAB_0011ada0:
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = Variant::hash();
      uVar26 = CONCAT44(0,uVar23);
      lVar34 = *(long *)(param_2 + 0x10);
      uVar28 = 1;
      if (uVar32 != 0) {
        uVar28 = uVar32;
      }
      uVar35 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar28 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar26;
      lVar31 = SUB168(auVar8 * auVar16,8);
      uVar32 = *(uint *)(lVar34 + lVar31 * 4);
      uVar29 = SUB164(auVar8 * auVar16,8);
      if (uVar32 != 0) {
        do {
          if (uVar32 == uVar28) {
            cVar22 = StringLikeVariantComparator::compare
                               ((Variant *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10),
                                (Variant *)CONCAT71(in_register_00000011,param_3));
            if (cVar22 != '\0') {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8) + 0x28),
                                 in_RCX);
              local_a8 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8);
              goto LAB_0011ad4c;
            }
            lVar34 = *(long *)(param_2 + 0x10);
          }
          uVar35 = uVar35 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar29 + 1) * lVar3;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar26;
          lVar31 = SUB168(auVar9 * auVar17,8);
          uVar32 = *(uint *)(lVar34 + lVar31 * 4);
          uVar29 = SUB164(auVar9 * auVar17,8);
        } while ((uVar32 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar32 * lVar3, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar26, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar23 + uVar29) - SUB164(auVar10 * auVar18,8)) * lVar3,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar26, uVar35 <= SUB164(auVar11 * auVar19,8)));
      }
      iVar27 = *(int *)(param_2 + 0x2c);
    }
LAB_0011ab78:
    if ((float)uVar24 * __LC76 < (float)(iVar27 + 1)) goto LAB_0011ab9a;
  }
  Variant::Variant((Variant *)local_78,(Variant *)CONCAT71(in_register_00000011,param_3));
  Variant::Variant((Variant *)local_60,in_RCX);
  local_a8 = (undefined8 *)operator_new(0x40,"");
  *local_a8 = 0;
  local_a8[1] = 0;
  Variant::Variant((Variant *)(local_a8 + 2),(Variant *)local_78);
  Variant::Variant((Variant *)(local_a8 + 5),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_a8;
    *(undefined8 **)(param_2 + 0x20) = local_a8;
  }
  else if (in_R8B == '\0') {
    **(undefined8 **)(param_2 + 0x20) = local_a8;
    local_a8[1] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 **)(param_2 + 0x20) = local_a8;
  }
  else {
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_a8;
    *local_a8 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = local_a8;
  }
  uVar23 = Variant::hash();
  lVar3 = *(long *)(param_2 + 0x10);
  uVar24 = 1;
  if (uVar23 != 0) {
    uVar24 = uVar23;
  }
  uVar32 = 0;
  uVar26 = (ulong)uVar24;
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar23);
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar26 * lVar34;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar33;
  lVar30 = SUB168(auVar4 * auVar12,8);
  lVar31 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar3 + lVar30 * 4);
  iVar27 = SUB164(auVar4 * auVar12,8);
  uVar28 = *puVar2;
  puVar21 = local_a8;
  while (uVar28 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar28 * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)((iVar27 + uVar23) - SUB164(auVar5 * auVar13,8)) * lVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    uVar24 = SUB164(auVar6 * auVar14,8);
    puVar36 = puVar21;
    if (uVar24 < uVar32) {
      *puVar2 = (uint)uVar26;
      uVar26 = (ulong)uVar28;
      puVar1 = (undefined8 *)(lVar31 + lVar30 * 8);
      puVar36 = (undefined8 *)*puVar1;
      *puVar1 = puVar21;
      uVar32 = uVar24;
    }
    uVar24 = (uint)uVar26;
    uVar32 = uVar32 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar27 + 1) * lVar34;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    lVar30 = SUB168(auVar7 * auVar15,8);
    puVar2 = (uint *)(lVar3 + lVar30 * 4);
    iVar27 = SUB164(auVar7 * auVar15,8);
    puVar21 = puVar36;
    uVar28 = *puVar2;
  }
  *(undefined8 **)(lVar31 + lVar30 * 8) = puVar21;
  *puVar2 = uVar24;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011ad4c:
  *(undefined8 **)param_1 = local_a8;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<Variant, Variant, VariantHasher, StringLikeVariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, Variant> > > const&) */

void __thiscall
HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
::operator=(HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  Variant local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<Variant,Variant,VariantHasher,StringLikeVariantComparator,DefaultTypedAllocator<HashMapElement<Variant,Variant>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x28)] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 != lVar6);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar3 * 4)) {
            if (uVar2 != uVar4) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_0011b119;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0011b119:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(Variant *)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


