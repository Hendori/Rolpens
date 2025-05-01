
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



/* void Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Ref<GDScript> const&) [clone .isra.0] */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */

void __thiscall CowData<char32_t>::operator=(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  
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
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptFunction::_profile_native_call(unsigned long, String const&, String const&) */

void __thiscall
GDScriptFunction::_profile_native_call
          (GDScriptFunction *this,ulong param_1,String *param_2,String *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x428) != 0) && (*(int *)(this + 0x44c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x448) * 4);
    uVar20 = CONCAT44(0,uVar2);
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x448) * 8);
    uVar12 = String::hash();
    lVar13 = *(long *)(this + 0x430);
    uVar15 = 1;
    if (uVar12 != 0) {
      uVar15 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar15 * lVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar13 + lVar17 * 4);
    uVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar19 = 0;
      do {
        if (uVar15 == uVar12) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x428) + lVar17 * 8) + 0x10),
                                      param_2);
          if (cVar11 != '\0') {
            lVar18 = *(long *)(*(long *)(this + 0x428) + (ulong)uVar16 * 8);
            if (lVar18 != 0) {
              *(long *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + 1;
              goto LAB_00101975;
            }
            break;
          }
          lVar13 = *(long *)(this + 0x430);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar16 + 1) * lVar18;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar13 + lVar17 * 4);
        uVar16 = SUB164(auVar4 * auVar8,8);
        if ((uVar12 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar18, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar5 * auVar9,8)) * lVar18,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, SUB164(auVar6 * auVar10,8) < uVar19)) break;
      } while( true );
    }
  }
  local_60 = 0;
  plVar1 = (long *)(*(long *)param_2 + -0x10);
  if (*(long *)param_2 != 0) {
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_00101630;
      LOCK();
      lVar13 = *plVar1;
      bVar22 = lVar18 == lVar13;
      if (bVar22) {
        *plVar1 = lVar18 + 1;
        lVar13 = lVar18;
      }
      UNLOCK();
    } while (!bVar22);
    if (lVar13 != -1) {
      local_60 = *(long *)param_2;
    }
  }
LAB_00101630:
  lVar18 = *(long *)param_3;
  if (lVar18 == 0) {
    local_68 = 0;
    puVar21 = &_LC2;
  }
  else {
    local_68 = 0;
    iVar14 = (int)*(undefined8 *)(lVar18 + -8);
    if ((iVar14 == 0) || (puVar21 = &_LC19, iVar14 == 1)) {
      puVar21 = &_LC2;
    }
    plVar1 = (long *)(lVar18 + -0x10);
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_0010168f;
      LOCK();
      lVar13 = *plVar1;
      bVar22 = lVar18 == lVar13;
      if (bVar22) {
        *plVar1 = lVar18 + 1;
        lVar13 = lVar18;
      }
      UNLOCK();
    } while (!bVar22);
    if (lVar13 != -1) {
      local_68 = *(long *)param_3;
    }
  }
LAB_0010168f:
  GDScript::get_script_path();
  local_58 = "%s::0::%s%s%s";
  local_70 = 0;
  uStack_50 = 0xd;
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,String,char_const*,String>
            (&local_80,(StrRange *)&local_70,&local_78,&local_68,puVar21,(String *)&local_60);
  lVar18 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  lVar18 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  lVar18 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  lVar18 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  local_48 = 0;
  local_58 = (char *)__LC31;
  uStack_50 = _UNK_001336c8;
  plVar1 = (long *)(local_80 + -0x10);
  if (local_80 == 0) {
    HashMap<String,GDScriptFunction::Profile::NativeProfile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptFunction::Profile::NativeProfile>>>
    ::insert((String *)&local_60,(NativeProfile *)(this + 0x420),SUB81(param_2,0));
    lVar18 = local_60;
  }
  else {
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_001017fa;
      LOCK();
      lVar13 = *plVar1;
      bVar22 = lVar18 == lVar13;
      if (bVar22) {
        *plVar1 = lVar18 + 1;
        lVar13 = lVar18;
      }
      UNLOCK();
    } while (!bVar22);
    if (lVar13 != -1) {
      local_48 = local_80;
    }
LAB_001017fa:
    lVar13 = local_48;
    HashMap<String,GDScriptFunction::Profile::NativeProfile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptFunction::Profile::NativeProfile>>>
    ::insert((String *)&local_60,(NativeProfile *)(this + 0x420),SUB81(param_2,0));
    lVar18 = local_60;
    if (lVar13 != 0) {
      LOCK();
      plVar1 = (long *)(lVar13 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_80 + -0x10),false);
    }
  }
LAB_00101975:
  *(long *)(lVar18 + 0x20) = *(long *)(lVar18 + 0x20) + param_1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
            FUN_0012b896();
            return;
          }
        }
        goto LAB_00101cef;
      }
      if (lVar11 == lVar9) {
LAB_00101d9b:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_00101cef;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00101d9b;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00101e22;
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
LAB_00101cef:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101e22:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* CowData<GDScriptDataType>::_ref(CowData<GDScriptDataType> const&) [clone .part.0] */

void __thiscall CowData<GDScriptDataType>::_ref(CowData<GDScriptDataType> *this,CowData *param_1)

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



/* GDScriptFunction::_get_default_variant_for_data_type(GDScriptDataType const&) */

GDScriptDataType * GDScriptFunction::_get_default_variant_for_data_type(GDScriptDataType *param_1)

{
  int iVar1;
  long lVar2;
  Object *pOVar3;
  Object *pOVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  char cVar7;
  long in_RDX;
  long in_FS_OFFSET;
  Variant *local_120;
  CowData<GDScriptDataType> *local_118;
  Dictionary local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  Object *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  Object *local_88;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RDX + 0x10) != 1) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    goto LAB_00101eff;
  }
  iVar1 = *(int *)(in_RDX + 0x18);
  if (iVar1 == 0x1c) {
    Array::Array((Array *)local_f8);
    lVar2 = *(long *)(in_RDX + 8);
    if ((lVar2 != 0) && (0 < *(long *)(lVar2 + -8))) {
      local_98 = (undefined1  [16])0x0;
      local_b8._8_8_ = 0;
      local_88 = (Object *)0x0;
      local_a8._5_3_ = 0;
      local_a8._0_5_ = *(uint5 *)(lVar2 + 0x10);
      local_a8._8_4_ = *(undefined4 *)(lVar2 + 0x18);
      local_a8._12_4_ = 0;
      StringName::operator=((StringName *)local_98,(StringName *)(lVar2 + 0x20));
      pOVar4 = local_88;
      local_98._8_8_ = *(undefined8 *)(lVar2 + 0x28);
      pOVar3 = *(Object **)(lVar2 + 0x30);
      if (pOVar3 != local_88) {
        local_88 = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_88 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            cVar7 = predelete_handler(pOVar4);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
      }
      if (local_b8._8_8_ != *(long *)(lVar2 + 8)) {
        CowData<GDScriptDataType>::_ref
                  ((CowData<GDScriptDataType> *)(local_b8 + 8),(CowData *)(lVar2 + 8));
      }
      Variant::Variant((Variant *)local_58,(Object *)local_98._8_8_);
      Array::set_typed((uint)(Array *)local_f8,(StringName *)(ulong)(uint)local_a8._8_4_,
                       (Variant *)local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_88 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        pOVar3 = local_88;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_88);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if ((StringName::configured != '\0') && (local_98._0_8_ != 0)) {
        StringName::unref();
      }
      CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(local_b8 + 8));
    }
    Variant::Variant((Variant *)param_1,(Array *)local_f8);
    Array::~Array((Array *)local_f8);
    goto LAB_00101eff;
  }
  if (iVar1 != 0x1b) {
    local_b8._0_12_ = ZEXT412(0);
    local_58[0] = 0;
    local_58[1] = 0;
    local_50 = (undefined1  [16])0x0;
    Variant::construct(iVar1,local_58,0,0,local_b8);
    if (local_b8._0_4_ == 0) {
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      *(int *)param_1 = local_58[0];
    }
    else {
      _err_print_error("_get_default_variant_for_data_type","modules/gdscript/gdscript_vm.cpp",0x90,
                       "Condition \"ce.error != Callable::CallError::CALL_OK\" is true. Returning: Variant()"
                       ,0,0);
      *(undefined4 *)param_1 = 0;
      cVar7 = Variant::needs_deinit[local_58[0]];
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      if (cVar7 != '\0') {
        Variant::_clear_internal();
      }
    }
    goto LAB_00101eff;
  }
  Dictionary::Dictionary(local_100);
  lVar2 = *(long *)(in_RDX + 8);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + -8) < 1) {
      local_c8 = (Object *)0x0;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
LAB_00102006:
      local_98._8_8_ = (Object *)0x0;
      local_88 = (Object *)0x0;
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
    }
    else {
      local_d8 = (undefined1  [16])0x0;
      local_f8._8_8_ = 0;
      local_c8 = (Object *)0x0;
      local_e8._5_3_ = 0;
      local_e8._0_5_ = *(uint5 *)(lVar2 + 0x10);
      local_e8._8_4_ = *(undefined4 *)(lVar2 + 0x18);
      local_e8._12_4_ = 0;
      StringName::operator=((StringName *)local_d8,(StringName *)(lVar2 + 0x20));
      pOVar4 = local_c8;
      local_d8._8_8_ = *(undefined8 *)(lVar2 + 0x28);
      pOVar3 = *(Object **)(lVar2 + 0x30);
      if (pOVar3 != local_c8) {
        local_c8 = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_c8 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            cVar7 = predelete_handler(pOVar4);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
      }
      if (local_f8._8_8_ != *(long *)(lVar2 + 8)) {
        CowData<GDScriptDataType>::_ref
                  ((CowData<GDScriptDataType> *)(local_f8 + 8),(CowData *)(lVar2 + 8));
      }
      lVar2 = *(long *)(in_RDX + 8);
      if ((lVar2 == 0) || (*(long *)(lVar2 + -8) < 2)) goto LAB_00102006;
      local_b8._8_8_ = 0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (Object *)0x0;
      local_a8._0_5_ = *(undefined5 *)(lVar2 + 0x48);
      auVar5 = local_a8;
      local_a8._0_8_ = auVar5._0_8_;
      local_a8._8_4_ = *(undefined4 *)(lVar2 + 0x50);
      StringName::operator=((StringName *)local_98,(StringName *)(lVar2 + 0x58));
      pOVar4 = local_88;
      local_98._8_8_ = *(undefined8 *)(lVar2 + 0x60);
      pOVar3 = *(Object **)(lVar2 + 0x68);
      if (pOVar3 != local_88) {
        local_88 = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_88 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            cVar7 = predelete_handler(pOVar4);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
      }
      if (local_b8._8_8_ == *(long *)(lVar2 + 0x40)) {
      }
      else {
        CowData<GDScriptDataType>::_ref
                  ((CowData<GDScriptDataType> *)(local_b8 + 8),(CowData *)(lVar2 + 0x40));
      }
    }
    local_118 = (CowData<GDScriptDataType> *)(local_f8 + 8);
    local_120 = (Variant *)local_d8;
    Variant::Variant((Variant *)local_58,(Object *)local_98._8_8_);
    uVar6 = local_a8._8_4_;
    Variant::Variant((Variant *)local_78,(Object *)local_d8._8_8_);
    Dictionary::set_typed
              ((uint)local_100,(StringName *)(ulong)(uint)local_e8._8_4_,local_120,
               (uint)(Variant *)local_78,(StringName *)(ulong)(uint)uVar6,(Variant *)local_98);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_88 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar3 = local_88;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_88);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_98._0_8_ != 0)) {
      StringName::unref();
    }
    CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(local_b8 + 8));
    if (local_c8 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar3 = local_c8;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_c8);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
      StringName::unref();
    }
    CowData<GDScriptDataType>::_unref(local_118);
  }
  Variant::Variant((Variant *)param_1,local_100);
  Dictionary::~Dictionary(local_100);
LAB_00101eff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00102836:
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
    if (lVar10 == 0) goto LAB_00102836;
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
    FUN_0012b8b8();
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
      goto LAB_0010278c;
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
LAB_0010278c:
  puVar8[-1] = param_1;
  return;
}



/* GDScriptFunction::call(GDScriptInstance*, Variant const**, int, Callable::CallError&,
   GDScriptFunction::CallState*) */

GDScriptInstance *
GDScriptFunction::call
          (GDScriptInstance *param_1,Variant **param_2,int param_3,CallError *param_4,
          CallState *param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  StringName *pSVar9;
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
  undefined1 (*pauVar22) [16];
  String *pSVar23;
  undefined1 auVar24 [8];
  undefined1 auVar25 [15];
  undefined1 auVar26 [8];
  char cVar27;
  GDScriptInstance *pGVar28;
  ulong uVar29;
  long *plVar30;
  ulong *puVar31;
  Variant *pVVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined8 uVar35;
  undefined8 uVar36;
  int iVar37;
  uint uVar38;
  Variant *pVVar39;
  ScriptLanguage *pSVar40;
  Variant *pVVar41;
  undefined4 in_register_00000014;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar45;
  undefined1 *puVar46;
  int iVar47;
  long lVar48;
  int *in_R9;
  Variant *pVVar49;
  int *in_FS_OFFSET;
  bool bVar50;
  long in_stack_00000008;
  undefined1 auStack_368 [88];
  Variant *local_310;
  uint local_308;
  uint local_300;
  CowData<GDScriptDataType> *local_2f8;
  StringName *local_2f0;
  uint local_2e8;
  Variant *local_2e0;
  int local_2d8;
  Variant *local_2d0;
  Variant *local_2c8;
  Object *local_2c0;
  Variant *local_2b8;
  int *local_2b0;
  GDScriptInstance *local_2a0;
  Variant *local_298;
  ScriptLanguage *local_290;
  long local_288;
  Variant **local_280;
  int local_270;
  undefined4 local_26c;
  undefined8 local_268;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  Variant *local_1a8 [2];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  Variant *local_168;
  undefined1 local_158 [8];
  size_t sStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  Variant *local_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant *local_d8;
  Variant *pVStack_d0;
  undefined8 local_c8;
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  long local_40;
  undefined1 *puVar44;
  
  local_288 = CONCAT44(in_register_00000014,param_3);
  puVar43 = auStack_368;
  puVar42 = auStack_368;
  puVar44 = auStack_368;
  puVar45 = auStack_368;
  puVar46 = auStack_368;
  local_40 = *(long *)(in_FS_OFFSET + 10);
  local_2a0 = param_1;
  local_280 = param_2;
  if (param_2[0x59] == (Variant *)0x0) {
    _get_default_variant_for_data_type((GDScriptDataType *)param_1);
    goto LAB_00102ff9;
  }
  *in_R9 = 0;
  iVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = iVar3 + 1;
  iVar47 = (int)param_5;
  if (iVar3 + 1 < 0x801) {
    local_f8 = 0;
    local_26c = *(undefined4 *)(param_2 + 0x1e);
    local_f0 = (undefined1  [16])0x0;
    local_270 = 0;
    if (in_stack_00000008 == 0) {
      iVar37 = *(int *)((long)param_2 + 0xf4);
      if (iVar37 != iVar47) {
        if (iVar37 < iVar47) {
          *in_R9 = 3;
          in_R9[2] = iVar37;
        }
        else {
          local_2d8 = iVar37 - iVar47;
          iVar37 = iVar37 - *(int *)((long)param_2 + 0x284);
          if (iVar37 <= iVar47) goto LAB_00102c70;
          *in_R9 = 4;
          in_R9[2] = iVar37;
        }
        *in_FS_OFFSET = iVar3;
        _get_default_variant_for_data_type((GDScriptDataType *)param_1);
LAB_00102fe1:
        puVar46 = puVar45;
        if (Variant::needs_deinit[(int)local_f8] != '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x1039db;
          Variant::_clear_internal();
        }
        goto LAB_00102ff9;
      }
      local_2d8 = 0;
LAB_00102c70:
      iVar3 = *(int *)(param_2 + 0x1f);
      local_2e8 = (iVar3 * 3 + *(int *)((long)param_2 + 0xfc)) * 8 + 0x18;
      puVar42 = auStack_368;
      while (puVar44 != auStack_368 + -((ulong)local_2e8 + 0x17 & 0xfffffffffffff000)) {
        puVar43 = puVar42 + -0x1000;
        *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
        puVar44 = puVar42 + -0x1000;
        puVar42 = puVar42 + -0x1000;
      }
      uVar29 = (ulong)((uint)((ulong)local_2e8 + 0x17) & 0xff0);
      lVar6 = -uVar29;
      puVar45 = puVar43 + lVar6;
      if (uVar29 != 0) {
        *(undefined8 *)(puVar43 + -8) = *(undefined8 *)(puVar43 + -8);
      }
      local_298 = (Variant *)((ulong)(puVar43 + lVar6 + 0xf) & 0xfffffffffffffff0);
      pVVar49 = local_298;
      if (0 < iVar47) {
        local_290 = (ScriptLanguage *)(long)iVar47;
        pSVar40 = (ScriptLanguage *)0x0;
        pVVar49 = local_298 + 0x48;
        local_2c0 = (Object *)CONCAT44(local_2c0._4_4_,iVar47);
        local_2c8 = local_298;
        local_2b0 = in_R9;
        do {
          pVVar32 = param_2[4];
          if (pVVar32 == (Variant *)0x0) goto LAB_001031b3;
          lVar48 = *(long *)(pVVar32 + -8);
          if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
          pVVar39 = *(Variant **)param_4;
          lVar1 = (long)pSVar40 * 0x38;
          if (((GDScriptDataType *)(pVVar32 + lVar1))[0x14] == (GDScriptDataType)0x0) {
LAB_0010311c:
            *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103124;
            Variant::Variant(pVVar49,pVVar39);
          }
          else {
            *(undefined8 *)(puVar43 + lVar6 + -8) = 0x102d70;
            cVar27 = GDScriptDataType::is_type((GDScriptDataType *)(pVVar32 + lVar1),pVVar39,false);
            if (cVar27 != '\0') {
LAB_00103118:
              pVVar39 = *(Variant **)param_4;
              goto LAB_0010311c;
            }
            pVVar32 = param_2[4];
            if (pVVar32 == (Variant *)0x0) goto LAB_001031b3;
            lVar48 = *(long *)(pVVar32 + -8);
            if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
            pVVar39 = *(Variant **)param_4;
            local_2b8 = (Variant *)CONCAT44(local_2b8._4_4_,(int)pSVar40);
            *(undefined8 *)(puVar43 + lVar6 + -8) = 0x102daa;
            cVar27 = GDScriptDataType::is_type((GDScriptDataType *)(pVVar32 + lVar1),pVVar39,true);
            if (cVar27 == '\0') {
              pVVar49 = local_280[4];
              *local_2b0 = 2;
              local_2b0[1] = (int)pSVar40;
              if (pVVar49 == (Variant *)0x0) {
LAB_001031b3:
                lVar48 = 0;
LAB_001031b6:
                *(undefined8 *)(puVar43 + lVar6 + -8) = 1;
                *(undefined8 *)(puVar43 + lVar6 + -0x10) = 0;
                *(undefined **)(puVar43 + lVar6 + -0x18) = &_LC2;
                *(char **)(puVar43 + lVar6 + -0x20) = "size()";
                *(undefined8 *)(puVar43 + lVar6 + -0x28) = 0x1031ec;
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,(long)pSVar40,lVar48,"p_index",
                           *(char **)(puVar43 + lVar6 + -0x20),*(char **)(puVar43 + lVar6 + -0x18),
                           (bool)puVar43[lVar6 + -0x10],(bool)puVar43[lVar6 + -8]);
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1031f5;
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              lVar48 = *(long *)(pVVar49 + -8);
              if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
              local_2b0[2] = *(int *)(pVVar49 + lVar1 + 0x18);
              *in_FS_OFFSET = *in_FS_OFFSET + -1;
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111d3e;
              _get_default_variant_for_data_type((GDScriptDataType *)local_2a0);
              goto LAB_00102fe1;
            }
            pVVar32 = param_2[4];
            if (pVVar32 == (Variant *)0x0) goto LAB_001031b3;
            lVar48 = *(long *)(pVVar32 + -8);
            if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
            if (*(int *)(pVVar32 + lVar1 + 0x10) != 1) goto LAB_00103118;
            iVar3 = *(int *)(pVVar32 + lVar1 + 0x18);
            if (iVar3 == 0x1b) {
              pVVar39 = *(Variant **)(pVVar32 + lVar1 + 8);
              if (pVVar39 == (Variant *)0x0) goto LAB_00102def;
              if (*(long *)(pVVar39 + -8) < 1) {
                local_2b8 = (Variant *)local_178;
                local_168 = (Variant *)0x0;
                local_198 = (undefined1  [16])0x0;
                local_188 = (undefined1  [16])0x0;
                local_178 = (undefined1  [16])0x0;
              }
              else {
                local_178 = (undefined1  [16])0x0;
                local_198._8_8_ = 0;
                local_168 = (Variant *)0x0;
                local_188._5_3_ = 0;
                local_188._0_5_ = *(uint5 *)(pVVar39 + 0x10);
                local_188._8_4_ = *(undefined4 *)(pVVar39 + 0x18);
                local_188._12_4_ = 0;
                local_2b8 = (Variant *)local_178;
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111a07;
                local_2d0 = pVVar39;
                StringName::operator=((StringName *)local_2b8,(StringName *)(pVVar39 + 0x20));
                local_178._8_8_ = *(long *)(local_2d0 + 0x28);
                pVVar32 = *(Variant **)(local_2d0 + 0x30);
                pVVar39 = local_2d0;
                if (pVVar32 != local_168) {
                  local_158 = (undefined1  [8])local_168;
                  pVVar41 = local_168;
                  if (pVVar32 != (Variant *)0x0) {
                    local_2e0 = local_168;
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111a48;
                    local_168 = pVVar32;
                    cVar27 = RefCounted::reference();
                    pVVar41 = local_2e0;
                    pVVar32 = local_168;
                    if (cVar27 == '\0') {
                      local_168 = (Variant *)0x0;
                      pVVar32 = local_168;
                    }
                  }
                  local_168 = pVVar32;
                  pVVar39 = local_2d0;
                  if (pVVar41 != (Variant *)0x0) {
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111a80;
                    local_2e0 = local_2d0;
                    local_2d0 = pVVar41;
                    cVar27 = RefCounted::unreference();
                    pVVar39 = local_2e0;
                    if (cVar27 != '\0') {
                      *(undefined8 *)(puVar43 + lVar6 + -8) = 0x112486;
                      cVar27 = predelete_handler((Object *)local_2d0);
                      pVVar39 = local_2e0;
                      if (cVar27 != '\0') {
                        pcVar7 = *(code **)(*(long *)local_2d0 + 0x140);
                        *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1124a8;
                        (*pcVar7)(local_2d0);
                        *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1124b6;
                        Memory::free_static(local_2d0,false);
                        pVVar39 = local_2e0;
                      }
                    }
                  }
                }
                if (local_198._8_8_ != *(long *)(pVVar39 + 8)) {
                  *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111ab3;
                  CowData<GDScriptDataType>::_ref
                            ((CowData<GDScriptDataType> *)(local_198 + 8),(CowData *)(pVVar39 + 8));
                }
                pVVar32 = param_2[4];
                if (pVVar32 == (Variant *)0x0) goto LAB_001031b3;
                lVar48 = *(long *)(pVVar32 + -8);
                if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
              }
              auVar10 = local_148;
              lVar48 = *(long *)(pVVar32 + lVar1 + 8);
              if ((lVar48 == 0) || (*(long *)(lVar48 + -8) < 2)) {
                local_2f0 = (StringName *)local_138;
                local_128 = (Variant *)0x0;
                local_2f8 = (CowData<GDScriptDataType> *)&sStack_150;
                _local_158 = (undefined1  [16])0x0;
                local_148 = (undefined1  [16])0x0;
                local_138 = (undefined1  [16])0x0;
              }
              else {
                sStack_150 = 0;
                local_138 = (undefined1  [16])0x0;
                local_128 = (Variant *)0x0;
                local_148._0_5_ = *(undefined5 *)(lVar48 + 0x48);
                auVar11 = local_148;
                local_148._12_4_ = auVar10._12_4_;
                local_148._0_8_ = auVar11._0_8_;
                local_148._8_4_ = *(undefined4 *)(lVar48 + 0x50);
                local_2f0 = (StringName *)local_138;
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111c2c;
                StringName::operator=(local_2f0,(StringName *)(lVar48 + 0x58));
                local_138._8_8_ = *(undefined8 *)(lVar48 + 0x60);
                pVVar32 = *(Variant **)(lVar48 + 0x68);
                if (pVVar32 != local_128) {
                  local_1a8[0] = local_128;
                  pVVar39 = local_128;
                  if (pVVar32 != (Variant *)0x0) {
                    local_2d0 = local_128;
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111c66;
                    local_128 = pVVar32;
                    cVar27 = RefCounted::reference();
                    pVVar39 = local_2d0;
                    pVVar32 = local_128;
                    if (cVar27 == '\0') {
                      local_128 = (Variant *)0x0;
                      pVVar32 = local_128;
                    }
                  }
                  local_128 = pVVar32;
                  if (pVVar39 != (Variant *)0x0) {
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111c90;
                    local_2d0 = pVVar39;
                    cVar27 = RefCounted::unreference();
                    if (cVar27 != '\0') {
                      *(undefined8 *)(puVar43 + lVar6 + -8) = 0x11302c;
                      cVar27 = predelete_handler((Object *)local_2d0);
                      if (cVar27 != '\0') {
                        pcVar7 = *(code **)(*(long *)local_2d0 + 0x140);
                        *(undefined8 *)(puVar43 + lVar6 + -8) = 0x113047;
                        (*pcVar7)(local_2d0);
                        *(undefined8 *)(puVar43 + lVar6 + -8) = 0x113055;
                        Memory::free_static(local_2d0,false);
                      }
                    }
                  }
                }
                local_2f8 = (CowData<GDScriptDataType> *)&sStack_150;
                if (sStack_150 != *(long *)(lVar48 + 0x40)) {
                  *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111cc7;
                  CowData<GDScriptDataType>::_ref(local_2f8,(CowData *)(lVar48 + 0x40));
                }
              }
              local_310 = (Variant *)&local_78;
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x10386a;
              Variant::Variant(local_310,(Object *)local_138._8_8_);
              local_2e0 = (Variant *)local_98;
              local_308 = local_148._8_4_;
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103895;
              Variant::Variant(local_2e0,(Object *)local_178._8_8_);
              local_2d0 = (Variant *)local_1a8;
              local_300 = local_188._8_4_;
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1038bb;
              Variant::operator_cast_to_Dictionary(local_2d0);
              *(Variant **)(puVar43 + lVar6 + -8) = local_310;
              *(StringName **)(puVar43 + lVar6 + -0x10) = local_2f0;
              *(undefined8 *)(puVar43 + lVar6 + -0x18) = 0x1038f3;
              Dictionary::Dictionary
                        ((Dictionary *)&local_1b0,(Dictionary *)local_2d0,local_300,
                         (StringName *)local_2b8,local_2e0,local_308,
                         *(StringName **)(puVar43 + lVar6 + -0x10),
                         *(Variant **)(puVar43 + lVar6 + -8));
              *(undefined8 *)(puVar43 + lVar6 + -0x18) = 0x1038ff;
              Dictionary::~Dictionary((Dictionary *)local_2d0);
              if (Variant::needs_deinit[local_98[0]] != '\0') {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111f6a;
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111f59;
                Variant::_clear_internal();
              }
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x10393a;
              Variant::Variant(pVVar49,(Dictionary *)&local_1b0);
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103942;
              Dictionary::~Dictionary((Dictionary *)&local_1b0);
              if (local_128 != (Variant *)0x0) {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103953;
                cVar27 = RefCounted::unreference();
                pVVar32 = local_128;
                if (cVar27 != '\0') {
                  *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111e35;
                  cVar27 = predelete_handler((Object *)local_128);
                  if (cVar27 != '\0') {
                    pcVar7 = *(code **)(*(long *)pVVar32 + 0x140);
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111e49;
                    (*pcVar7)(pVVar32);
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111e53;
                    Memory::free_static(pVVar32,false);
                  }
                }
              }
              if ((StringName::configured != '\0') && (local_138._0_8_ != 0)) {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x10397a;
                StringName::unref();
              }
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103986;
              CowData<GDScriptDataType>::_unref(local_2f8);
              if (local_168 != (Variant *)0x0) {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x103997;
                cVar27 = RefCounted::unreference();
                pVVar32 = local_168;
                if (cVar27 != '\0') {
                  *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111dcf;
                  cVar27 = predelete_handler((Object *)local_168);
                  if (cVar27 != '\0') {
                    pcVar7 = *(code **)(*(long *)pVVar32 + 0x140);
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111de3;
                    (*pcVar7)(pVVar32);
                    *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111ded;
                    Memory::free_static(pVVar32,false);
                  }
                }
              }
              if ((StringName::configured != '\0') && (local_178._0_8_ != 0)) {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1039be;
                StringName::unref();
              }
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1039ca;
              CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(local_198 + 8));
            }
            else if (((iVar3 == 0x1c) &&
                     (pSVar9 = *(StringName **)(pVVar32 + lVar1 + 8), pSVar9 != (StringName *)0x0))
                    && (0 < *(long *)(pSVar9 + -8))) {
              local_2d0 = (Variant *)&local_78;
              pOVar5 = *(Object **)(pSVar9 + 0x28);
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x11162c;
              local_2b8 = (Variant *)pSVar9;
              Variant::Variant(local_2d0,pOVar5);
              local_2f0 = (StringName *)local_2b8;
              local_2e0 = (Variant *)CONCAT44(local_2e0._4_4_,*(undefined4 *)(local_2b8 + 0x18));
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x11165d;
              local_2b8 = (Variant *)local_158;
              Variant::operator_cast_to_Array((Variant *)local_158);
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111684;
              Array::Array((Array *)local_198,(Array *)local_2b8,(uint)local_2e0,local_2f0 + 0x20,
                           local_2d0);
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111690;
              Array::~Array((Array *)local_2b8);
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1123e5;
                Variant::_clear_internal();
              }
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1116b0;
              Variant::Variant(pVVar49,(Array *)local_198);
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x1116b8;
              Array::~Array((Array *)local_198);
            }
            else {
LAB_00102def:
              local_78 = 0;
              local_70 = (undefined1  [16])0x0;
              lVar48 = *(long *)(pVVar32 + -8);
              if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
              local_2d0 = (Variant *)&local_78;
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x102e2e;
              Variant::construct(iVar3,local_2d0,param_4,1);
              if (*local_2b0 != 0) {
                *local_2b0 = 2;
                local_2b0[1] = (int)local_2b8;
                pVVar49 = local_280[4];
                if (pVVar49 == (Variant *)0x0) goto LAB_001031b3;
                lVar48 = *(long *)(pVVar49 + -8);
                if (lVar48 <= (long)pSVar40) goto LAB_001031b6;
                local_2b0[2] = *(int *)(pVVar49 + lVar1 + 0x18);
                *in_FS_OFFSET = *in_FS_OFFSET + -1;
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111ba2;
                _get_default_variant_for_data_type((GDScriptDataType *)local_2a0);
                puVar45 = puVar43 + lVar6;
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111bbf;
                  Variant::_clear_internal();
                  puVar45 = puVar43 + lVar6;
                }
                goto LAB_00102fe1;
              }
              *(undefined8 *)(puVar43 + lVar6 + -8) = 0x102e4e;
              Variant::Variant(pVVar49,local_2d0);
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                *(undefined8 *)(puVar43 + lVar6 + -8) = 0x111bd0;
                Variant::_clear_internal();
              }
            }
          }
          pSVar40 = pSVar40 + 1;
          param_4 = param_4 + 8;
          pVVar49 = pVVar49 + 0x18;
        } while (local_290 != pSVar40);
        iVar3 = *(int *)(local_280 + 0x1f);
        pVVar49 = local_2c8;
        iVar47 = (int)local_2c0;
      }
      if (iVar47 + 3 < iVar3) {
        pVVar32 = pVVar49 + (long)(iVar47 + 3) * 0x18;
        do {
          *(undefined4 *)pVVar32 = 0;
          pVVar39 = pVVar32 + 0x18;
          *(undefined1 (*) [16])(pVVar32 + 8) = (undefined1  [16])0x0;
          pVVar32 = pVVar39;
        } while (pVVar39 != pVVar49 + ((ulong)((iVar3 - iVar47) - 4) + (long)iVar47) * 0x18 + 0x60);
      }
      if (*(int *)((long)local_280 + 0xfc) == 0) {
        local_2b8 = (Variant *)0x0;
      }
      else {
        local_2b8 = pVVar49 + (long)iVar3 * 0x18;
      }
      for (pVVar32 = local_280[0x2a]; puVar42 = puVar43 + lVar6, pVVar32 != (Variant *)0x0;
          pVVar32 = *(Variant **)pVVar32) {
        iVar3 = *(int *)(pVVar32 + 0x10);
        pcVar7 = *(code **)(type_init_function_table + (long)*(int *)(pVVar32 + 0x14) * 8);
        *(undefined8 *)(puVar43 + lVar6 + -8) = 0x102f46;
        (*pcVar7)(pVVar49 + (long)iVar3 * 0x18);
      }
    }
    else {
      local_298 = *(Variant **)(in_stack_00000008 + 0x28);
      local_2b8 = local_298 + (long)*(int *)(in_stack_00000008 + 0x30) * 0x18;
      local_26c = *(undefined4 *)(in_stack_00000008 + 0x3c);
      local_270 = *(int *)(in_stack_00000008 + 0x38);
      if (local_298 == (Variant *)0x0) {
        local_2e8 = 0;
      }
      else {
        local_2e8 = (uint)*(undefined8 *)(local_298 + -8);
      }
      local_288 = *(long *)(in_stack_00000008 + 8);
      local_2d8 = *(int *)(in_stack_00000008 + 0x40);
    }
    lVar6 = local_288;
    if (local_288 == 0) {
      *(undefined4 *)local_298 = 0;
      *(undefined1 (*) [16])(local_298 + 8) = (undefined1  [16])0x0;
      local_2c0 = (Object *)local_280[0x1d];
    }
    else {
      pOVar5 = *(Object **)(local_288 + 0x10);
      *(undefined8 *)(puVar42 + -8) = 0x1029ce;
      Variant::Variant(local_298,pOVar5);
      local_2c0 = *(Object **)(lVar6 + 0x18);
    }
    pVVar49 = local_298;
    *(undefined8 *)(puVar42 + -8) = 0x1029f0;
    Variant::Variant(local_298 + 0x18,local_2c0);
    bVar50 = EngineDebugger::singleton == 0;
    *(undefined4 *)(pVVar49 + 0x30) = 0;
    local_268 = 0;
    *(undefined1 (*) [16])(pVVar49 + 0x38) = (undefined1  [16])0x0;
    pSVar23 = GDScriptLanguage::singleton;
    if ((bVar50) || (EngineDebugger::script_debugger == (ScriptLanguage *)0x0)) goto LAB_00102b41;
    *(undefined8 *)(puVar42 + -8) = 0x102a32;
    GDScriptLanguage::_call_stack();
    lVar6 = lRam0000000000102a39;
    if (*(long *)((long)in_FS_OFFSET + lRam0000000000102a39) == 0) {
      pSVar40 = (ScriptLanguage *)(long)(*(int *)(pSVar23 + 0x200) + 1);
      if (pSVar40 == (ScriptLanguage *)0x0) {
LAB_00114295:
        pauVar33 = (undefined1 (*) [16])0x0;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x103a4c;
        local_290 = pSVar40;
        pauVar33 = (undefined1 (*) [16])Memory::alloc_static((long)pSVar40 * 0x28,true);
        if (pauVar33 == (undefined1 (*) [16])0x0) {
          *(undefined8 *)(puVar42 + -8) = 0x114295;
          _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,
                           "Parameter \"mem\" is null.",0,0);
          goto LAB_00114295;
        }
        *(ScriptLanguage **)(pauVar33[-1] + 8) = local_290;
        pauVar34 = pauVar33;
        do {
          *(undefined8 *)pauVar34[2] = 0;
          pauVar22 = pauVar34 + 2;
          *pauVar34 = (undefined1  [16])0x0;
          pauVar34[1] = (undefined1  [16])0x0;
          pauVar34 = (undefined1 (*) [16])(*pauVar22 + 8);
        } while ((undefined1 (*) [16])(*pauVar22 + 8) !=
                 (undefined1 (*) [16])((long)pauVar33 + (long)pSVar40 * 0x28));
      }
      *(undefined8 *)(puVar42 + -8) = 0x103a8e;
      GDScriptLanguage::_call_stack();
      *(undefined1 (**) [16])((long)in_FS_OFFSET + lVar6) = pauVar33;
    }
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
      *(undefined8 *)(puVar42 + -8) = 0x102a54;
      ScriptDebugger::lines_left();
    }
    if (0 < *(int *)((long)in_FS_OFFSET + lRam0000000000102a5b)) {
      local_290 = (ScriptLanguage *)ScriptDebugger::depth;
      *(undefined8 *)(puVar42 + -8) = 0x102f6c;
      ScriptDebugger::depth();
      if (-1 < *(int *)((long)in_FS_OFFSET + lRam0000000000102f7a)) {
        pSVar40 = EngineDebugger::script_debugger;
        if (local_290 != (ScriptLanguage *)0x0) {
          local_290 = EngineDebugger::script_debugger;
          *(undefined8 *)(puVar42 + -8) = 0x102f9f;
          ScriptDebugger::depth();
          pSVar40 = local_290;
        }
        *(undefined8 *)(puVar42 + -8) = 0x102fb2;
        ScriptDebugger::set_depth((int)pSVar40);
      }
    }
    *(undefined8 *)(puVar42 + -8) = 0x102a6b;
    GDScriptLanguage::_call_stack();
    if (*(int *)((long)in_FS_OFFSET + lVar6 + 8) < *(int *)(pSVar23 + 0x200)) {
      *(undefined8 *)(puVar42 + -8) = 0x102a82;
      GDScriptLanguage::_call_stack();
      lVar48 = *(long *)((long)in_FS_OFFSET + lVar6);
      *(undefined8 *)(puVar42 + -8) = 0x102a8c;
      GDScriptLanguage::_call_stack();
      *(Variant **)(lVar48 + (long)*(int *)((long)in_FS_OFFSET + lVar6 + 8) * 0x28) = local_298;
      *(undefined8 *)(puVar42 + -8) = 0x102aa6;
      GDScriptLanguage::_call_stack();
      lVar48 = *(long *)((long)in_FS_OFFSET + lVar6);
      *(undefined8 *)(puVar42 + -8) = 0x102ab0;
      GDScriptLanguage::_call_stack();
      *(long *)(lVar48 + 0x10 + (long)*(int *)((long)in_FS_OFFSET + lVar6 + 8) * 0x28) = local_288;
      *(undefined8 *)(puVar42 + -8) = 0x102acb;
      GDScriptLanguage::_call_stack();
      lVar48 = *(long *)((long)in_FS_OFFSET + lVar6);
      *(undefined8 *)(puVar42 + -8) = 0x102ad5;
      GDScriptLanguage::_call_stack();
      *(Variant ***)(lVar48 + 8 + (long)*(int *)((long)in_FS_OFFSET + lVar6 + 8) * 0x28) = local_280
      ;
      *(undefined8 *)(puVar42 + -8) = 0x102af0;
      GDScriptLanguage::_call_stack();
      lVar48 = *(long *)((long)in_FS_OFFSET + lVar6);
      *(undefined8 *)(puVar42 + -8) = 0x102afa;
      GDScriptLanguage::_call_stack();
      *(int **)(lVar48 + 0x18 + (long)*(int *)((long)in_FS_OFFSET + lVar6 + 8) * 0x28) = &local_270;
      *(undefined8 *)(puVar42 + -8) = 0x102b15;
      GDScriptLanguage::_call_stack();
      lVar48 = *(long *)((long)in_FS_OFFSET + lVar6);
      *(undefined8 *)(puVar42 + -8) = 0x102b1f;
      GDScriptLanguage::_call_stack();
      *(undefined4 **)(lVar48 + 0x20 + (long)*(int *)((long)in_FS_OFFSET + lVar6 + 8) * 0x28) =
           &local_26c;
      *(undefined8 *)(puVar42 + -8) = 0x102b3a;
      GDScriptLanguage::_call_stack();
      piVar2 = (int *)((long)in_FS_OFFSET + lVar6 + 8);
      *piVar2 = *piVar2 + 1;
    }
    else {
      local_290 = (ScriptLanguage *)CONCAT44(local_290._4_4_,*(int *)(pSVar23 + 0x200));
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_198._8_8_;
      local_198 = auVar10 << 0x40;
      sStack_150 = 0x4d;
      local_158 = (undefined1  [8])
                  "Stack overflow (stack size: %s). Check for infinite recursion in your script.";
      *(undefined8 *)(puVar42 + -8) = 0x103065;
      String::parse_latin1((StrRange *)local_198);
      *(undefined8 *)(puVar42 + -8) = 0x103076;
      vformat<int>((String *)local_158,(int)(StrRange *)local_198);
      *(undefined8 *)(puVar42 + -8) = 0x10307b;
      GDScriptLanguage::_debug_error();
      lVar48 = lRam0000000000103082;
      lVar6 = *(long *)((long)in_FS_OFFSET + lRam0000000000103082);
      if ((undefined1  [8])lVar6 == local_158) {
        if (lVar6 != 0) {
          LOCK();
          plVar30 = (long *)(lVar6 + -0x10);
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (*plVar30 == 0) {
            *(undefined8 *)(puVar42 + -8) = 0x103a12;
            Memory::free_static((void *)((long)local_158 + -0x10),false);
          }
        }
      }
      else {
        if (lVar6 != 0) {
          LOCK();
          plVar30 = (long *)(lVar6 + -0x10);
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (*plVar30 == 0) {
            lVar6 = *(long *)((long)in_FS_OFFSET + lVar48);
            *(undefined8 *)((long)in_FS_OFFSET + lVar48) = 0;
            *(undefined8 *)(puVar42 + -8) = 0x1030bd;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        *(undefined1 (*) [8])((long)in_FS_OFFSET + lVar48) = local_158;
      }
      uVar35 = local_198._0_8_;
      if (local_198._0_8_ != 0) {
        LOCK();
        plVar30 = (long *)(local_198._0_8_ + -0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_198._8_8_;
          local_198 = auVar11 << 0x40;
          *(undefined8 *)(puVar42 + -8) = 0x1030fa;
          Memory::free_static((void *)(uVar35 + -0x10),false);
        }
      }
      *(undefined8 *)(puVar42 + -8) = 0x103110;
      ScriptDebugger::debug(EngineDebugger::script_debugger,SUB81(pSVar23,0),true);
    }
LAB_00102b41:
    local_2d0 = (Variant *)0x0;
    if (GDScriptLanguage::singleton[0x250] != (String)0x0) {
      *(undefined8 *)(puVar42 + -8) = 0x103175;
      plVar30 = (long *)OS::get_singleton();
      pcVar7 = *(code **)(*plVar30 + 0x208);
      *(undefined8 *)(puVar42 + -8) = 0x103181;
      local_2d0 = (Variant *)(*pcVar7)(plVar30);
      LOCK();
      local_280[0x7b] = local_280[0x7b] + 1;
      UNLOCK();
      LOCK();
      local_280[0x7e] = local_280[0x7e] + 1;
      UNLOCK();
    }
    lVar6 = local_288;
    local_290 = (ScriptLanguage *)CONCAT44(local_290._4_4_,*(undefined4 *)(local_280 + 0x51));
    local_110 = CONCAT44(*(undefined4 *)(local_280 + 0x51),*(undefined4 *)(local_280 + 0x1f));
    if (local_288 == 0) {
      local_d8 = local_298;
      local_108 = 0;
      pVStack_d0 = local_280[0x5b];
      local_c8 = 0;
    }
    else {
      if (*(long *)(local_288 + 0x58) == 0) {
        local_108 = 0;
      }
      else {
        local_108 = (undefined4)*(undefined8 *)(*(long *)(local_288 + 0x58) + -8);
      }
      pVStack_d0 = local_280[0x5b];
      local_d8 = local_298;
      *(undefined8 *)(puVar42 + -8) = 0x102be4;
      CowData<Variant>::_copy_on_write((CowData<Variant> *)(local_288 + 0x58));
      local_c8 = *(undefined8 *)(lVar6 + 0x58);
    }
    local_2f0 = (StringName *)0x0;
    local_2b0 = (int *)(long)*(int *)(local_280[0x59] + (long)local_270 * 4);
                    /* WARNING: Could not recover jumptable at 0x00102c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pGVar28 = (GDScriptInstance *)
              (**(code **)(call(GDScriptInstance*,Variant_const**,int,Callable::CallError&,GDScriptFunction::CallState*)
                           ::switch_table_ops + (long)local_2b0 * 8))();
    return pGVar28;
  }
  *in_FS_OFFSET = iVar3;
  local_1c0 = 0;
  if (local_288 == 0) {
    pVVar49 = param_2[0x1d];
    if (pVVar49 != (Variant *)0x0) {
LAB_00103d81:
      if (local_1c0 != *(long *)(pVVar49 + 0x6c8)) {
LAB_00103350:
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c0,(CowData *)(pVVar49 + 0x6c8));
      }
      goto LAB_0010336a;
    }
LAB_00103375:
    sStack_150 = 10;
    local_158 = (undefined1  [8])"<built-in>";
    String::parse_latin1((StrRange *)&local_1c0);
  }
  else {
    uVar38 = (uint)*(ulong *)(local_288 + 8) & 0xffffff;
    if (uVar38 < (uint)ObjectDB::slot_max) {
      while( true ) {
        auVar25 = stack0xfffffffffffffea9;
        auVar12[0xf] = 0;
        auVar12._0_15_ = stack0xfffffffffffffea9;
        _local_158 = auVar12 << 8;
        LOCK();
        bVar50 = (char)ObjectDB::spin_lock == '\0';
        if (bVar50) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar50) break;
        auVar16[0xf] = 0;
        auVar16._0_15_ = auVar25;
        _local_158 = auVar16 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar31 = (ulong *)((ulong)uVar38 * 0x10 + ObjectDB::object_slots);
      if ((*puVar31 & 0x7fffffffff) != (*(ulong *)(local_288 + 8) >> 0x18 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        goto LAB_00103d6a;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar31[1] == 0) goto LAB_00103d6a;
      pcVar7 = *(code **)(**(long **)(local_288 + 0x18) + 0x278);
      if (pcVar7 == GDScript::is_valid) {
        cVar27 = *(char *)((long)*(long **)(local_288 + 0x18) + 0x241);
      }
      else {
        cVar27 = (*pcVar7)();
      }
      if (cVar27 == '\0') goto LAB_00103d6a;
      pVVar49 = *(Variant **)(local_288 + 0x18);
      lVar6 = *(long *)(pVVar49 + 0x6c8);
      if ((lVar6 == 0) || (*(uint *)(lVar6 + -8) < 2)) goto LAB_00103d6a;
      if (lVar6 != local_1c0) goto LAB_00103350;
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00103d6a:
      pVVar49 = local_280[0x1d];
      if (pVVar49 != (Variant *)0x0) goto LAB_00103d81;
LAB_0010336a:
      if (local_1c0 == 0) goto LAB_00103375;
    }
    if (*(uint *)(local_1c0 + -8) < 2) goto LAB_00103375;
  }
  pVVar49 = *local_280;
  if (pVVar49 == (Variant *)0x0) {
    local_1b8 = 0;
  }
  else {
    pcVar8 = *(char **)(pVVar49 + 8);
    local_1b8 = 0;
    if (pcVar8 == (char *)0x0) {
      if (*(long *)(pVVar49 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(pVVar49 + 0x10));
      }
    }
    else {
      sStack_150 = strlen(pcVar8);
      local_158 = (undefined1  [8])pcVar8;
      String::parse_latin1((StrRange *)&local_1b8);
    }
  }
  if (local_288 != 0) {
    uVar38 = (uint)*(ulong *)(local_288 + 8) & 0xffffff;
    if (uVar38 < (uint)ObjectDB::slot_max) {
      while( true ) {
        auVar25 = stack0xfffffffffffffea9;
        auVar13[0xf] = 0;
        auVar13._0_15_ = stack0xfffffffffffffea9;
        _local_158 = auVar13 << 8;
        LOCK();
        bVar50 = (char)ObjectDB::spin_lock == '\0';
        if (bVar50) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar50) break;
        auVar17[0xf] = 0;
        auVar17._0_15_ = auVar25;
        _local_158 = auVar17 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar31 = (ulong *)((ulong)uVar38 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)(local_288 + 8) >> 0x18 & 0x7fffffffff) == (*puVar31 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        if (puVar31[1] != 0) {
          pcVar7 = *(code **)(**(long **)(local_288 + 0x18) + 0x278);
          if (pcVar7 == GDScript::is_valid) {
            cVar27 = *(char *)((long)*(long **)(local_288 + 0x18) + 0x241);
          }
          else {
            cVar27 = (*pcVar7)();
          }
          lVar6 = local_288;
          if ((cVar27 != '\0') && (*(long *)(*(long *)(local_288 + 0x18) + 0x6d8) != 0)) {
            local_1a8[0] = (Variant *)0x0;
            sStack_150 = 1;
            local_158 = (undefined1  [8])&_LC19;
            String::parse_latin1((StrRange *)local_1a8);
            lVar6 = *(long *)(*(long *)(lVar6 + 0x18) + 0x6d8);
            if (lVar6 == 0) {
              local_290 = (ScriptLanguage *)&local_1b0;
              local_1b0 = 0;
            }
            else {
              pcVar8 = *(char **)(lVar6 + 8);
              local_1b0 = 0;
              if (pcVar8 == (char *)0x0) {
                local_290 = (ScriptLanguage *)&local_1b0;
                if (*(long *)(lVar6 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_290,(CowData *)(lVar6 + 0x10));
                }
              }
              else {
                sStack_150 = strlen(pcVar8);
                local_158 = (undefined1  [8])pcVar8;
                local_290 = (ScriptLanguage *)&local_1b0;
                String::parse_latin1((StrRange *)local_290);
              }
            }
            String::operator+((String *)local_198,(String *)local_290);
            String::operator+((String *)local_158,(String *)local_198);
            lVar6 = local_1b8;
            auVar24 = local_158;
            if ((undefined1  [8])local_1b8 == local_158) {
              auVar26 = (undefined1  [8])local_1b8;
              if (local_1b8 != 0) {
                LOCK();
                plVar30 = (long *)(local_1b8 + -0x10);
                *plVar30 = *plVar30 + -1;
                UNLOCK();
                if (*plVar30 == 0) {
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = sStack_150;
                  _local_158 = auVar20 << 0x40;
                  Memory::free_static((void *)((long)auVar24 + -0x10),false);
                  auVar26 = (undefined1  [8])local_1b8;
                }
              }
            }
            else {
              auVar26 = local_158;
              if (local_1b8 != 0) {
                LOCK();
                plVar30 = (long *)(local_1b8 + -0x10);
                *plVar30 = *plVar30 + -1;
                UNLOCK();
                if (*plVar30 == 0) {
                  local_1b8 = 0;
                  Memory::free_static((void *)(lVar6 + -0x10),false);
                }
                auVar26 = local_158;
              }
            }
            local_1b8 = (long)auVar26;
            uVar35 = local_198._0_8_;
            if (local_198._0_8_ != 0) {
              LOCK();
              plVar30 = (long *)(local_198._0_8_ + -0x10);
              *plVar30 = *plVar30 + -1;
              UNLOCK();
              if (*plVar30 == 0) {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = local_198._8_8_;
                local_198 = auVar14 << 0x40;
                Memory::free_static((void *)(uVar35 + -0x10),false);
              }
            }
            lVar6 = local_1b0;
            if (local_1b0 != 0) {
              LOCK();
              plVar30 = (long *)(local_1b0 + -0x10);
              *plVar30 = *plVar30 + -1;
              UNLOCK();
              if (*plVar30 == 0) {
                local_1b0 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            pVVar49 = local_1a8[0];
            if (local_1a8[0] != (Variant *)0x0) {
              LOCK();
              pVVar32 = local_1a8[0] + -0x10;
              *(long *)pVVar32 = *(long *)pVVar32 + -1;
              UNLOCK();
              if (*(long *)pVVar32 == 0) {
                local_1a8[0] = (Variant *)0x0;
                Memory::free_static(pVVar49 + -0x10,false);
              }
            }
          }
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
  }
  pSVar23 = GDScriptLanguage::singleton;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_198._8_8_;
  local_198 = auVar21 << 0x40;
  uVar4 = *(undefined4 *)(local_280 + 0x1e);
  sStack_150 = 0x3c;
  local_158 = (undefined1  [8])"Stack overflow. Check for infinite recursion in your script.";
  String::parse_latin1((StrRange *)local_198);
  cVar27 = GDScriptLanguage::debug_break(pSVar23,SUB81((StrRange *)local_198,0));
  uVar35 = local_198._0_8_;
  if (local_198._0_8_ != 0) {
    LOCK();
    plVar30 = (long *)(local_198._0_8_ + -0x10);
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (*plVar30 == 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_198._8_8_;
      local_198 = auVar15 << 0x40;
      Memory::free_static((void *)(uVar35 + -0x10),false);
    }
  }
  if (cVar27 == '\0') {
    String::utf8();
    uVar35 = CharString::get_data();
    String::utf8();
    uVar36 = CharString::get_data();
    _err_print_error(uVar36,uVar35,uVar4,
                     "Stack overflow. Check for infinite recursion in your script.",0,2);
    uVar35 = local_198._0_8_;
    if (local_198._0_8_ != 0) {
      LOCK();
      plVar30 = (long *)(local_198._0_8_ + -0x10);
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_198._8_8_;
        local_198 = auVar18 << 0x40;
        Memory::free_static((void *)(uVar35 + -0x10),false);
      }
    }
    auVar24 = local_158;
    if (local_158 != (undefined1  [8])0x0) {
      LOCK();
      plVar30 = (long *)((long)local_158 + -0x10);
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = sStack_150;
        _local_158 = auVar19 << 0x40;
        Memory::free_static((void *)((long)auVar24 + -0x10),false);
      }
    }
  }
  _get_default_variant_for_data_type((GDScriptDataType *)local_2a0);
  lVar6 = local_1b8;
  if (local_1b8 != 0) {
    LOCK();
    plVar30 = (long *)(local_1b8 + -0x10);
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (*plVar30 == 0) {
      local_1b8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_1c0;
  puVar46 = auStack_368;
  if (local_1c0 != 0) {
    LOCK();
    plVar30 = (long *)(local_1c0 + -0x10);
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    puVar46 = auStack_368;
    if (*plVar30 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
      puVar46 = auStack_368;
    }
  }
LAB_00102ff9:
  if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
    return local_2a0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar46 + -8) = &UNK_00120543;
  __stack_chk_fail();
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



/* VariantInitializer<bool>::init(Variant*) */

void VariantInitializer<bool>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 1;
  return;
}



/* VariantInitializer<long>::init(Variant*) */

void VariantInitializer<long>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 2;
  return;
}



/* VariantInitializer<double>::init(Variant*) */

void VariantInitializer<double>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 3;
  return;
}



/* VariantInitializer<String>::init(Variant*) */

void VariantInitializer<String>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)param_1 = 4;
  return;
}



/* VariantInitializer<Vector2>::init(Variant*) */

void VariantInitializer<Vector2>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 5;
  return;
}



/* VariantInitializer<Vector2i>::init(Variant*) */

void VariantInitializer<Vector2i>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 6;
  return;
}



/* VariantInitializer<Rect2>::init(Variant*) */

void VariantInitializer<Rect2>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 7;
  return;
}



/* VariantInitializer<Rect2i>::init(Variant*) */

void VariantInitializer<Rect2i>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 8;
  return;
}



/* VariantInitializer<Vector3>::init(Variant*) */

void VariantInitializer<Vector3>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 9;
  return;
}



/* VariantInitializer<Vector3i>::init(Variant*) */

void VariantInitializer<Vector3i>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 10;
  return;
}



/* VariantInitializer<Vector4>::init(Variant*) */

void VariantInitializer<Vector4>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0xc;
  return;
}



/* VariantInitializer<Vector4i>::init(Variant*) */

void VariantInitializer<Vector4i>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0xd;
  return;
}



/* VariantInitializer<Transform2D>::init(Variant*) */

void VariantInitializer<Transform2D>::init(Variant *param_1)

{
  BucketSmall *pBVar1;
  
  pBVar1 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                      &Variant::Pools::_bucket_small);
  *(BucketSmall **)(param_1 + 8) = pBVar1;
  *(undefined8 *)pBVar1 = 0x3f800000;
  *(undefined8 *)(pBVar1 + 8) = 0x3f80000000000000;
  *(undefined8 *)(pBVar1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0xb;
  return;
}



/* VariantInitializer<Plane>::init(Variant*) */

void VariantInitializer<Plane>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0xe;
  return;
}



/* VariantInitializer<Quaternion>::init(Variant*) */

void VariantInitializer<Quaternion>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0xf;
  return;
}



/* VariantInitializer<AABB>::init(Variant*) */

void VariantInitializer<AABB>::init(Variant *param_1)

{
  BucketSmall *pBVar1;
  
  pBVar1 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                      &Variant::Pools::_bucket_small);
  *(BucketSmall **)(param_1 + 8) = pBVar1;
  *(undefined8 *)pBVar1 = 0;
  *(undefined4 *)(pBVar1 + 8) = 0;
  *(undefined8 *)(pBVar1 + 0xc) = 0;
  *(undefined4 *)(pBVar1 + 0x14) = 0;
  *(undefined4 *)param_1 = 0x10;
  return;
}



/* VariantInitializer<Basis>::init(Variant*) */

void VariantInitializer<Basis>::init(Variant *param_1)

{
  uint uVar1;
  BucketMedium *pBVar2;
  
  pBVar2 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                      &Variant::Pools::_bucket_medium);
  uVar1 = _LC0;
  *(BucketMedium **)(param_1 + 8) = pBVar2;
  *(undefined4 *)(pBVar2 + 0x20) = 0x3f800000;
  *(undefined1 (*) [16])pBVar2 = ZEXT416(uVar1);
  *(undefined1 (*) [16])(pBVar2 + 0x10) = ZEXT416(uVar1);
  *(undefined4 *)param_1 = 0x11;
  return;
}



/* VariantInitializer<Transform3D>::init(Variant*) */

void VariantInitializer<Transform3D>::init(Variant *param_1)

{
  uint uVar1;
  BucketMedium *pBVar2;
  
  pBVar2 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                      &Variant::Pools::_bucket_medium);
  uVar1 = _LC0;
  *(BucketMedium **)(param_1 + 8) = pBVar2;
  *(undefined4 *)(pBVar2 + 0x20) = 0x3f800000;
  *(undefined8 *)(pBVar2 + 0x24) = 0;
  *(undefined4 *)(pBVar2 + 0x2c) = 0;
  *(undefined1 (*) [16])pBVar2 = ZEXT416(uVar1);
  *(undefined1 (*) [16])(pBVar2 + 0x10) = ZEXT416(uVar1);
  *(undefined4 *)param_1 = 0x12;
  return;
}



/* VariantInitializer<Projection>::init(Variant*) */

void VariantInitializer<Projection>::init(Variant *param_1)

{
  BucketLarge *this;
  
  this = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                   ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                    &Variant::Pools::_bucket_large);
  *(BucketLarge **)(param_1 + 8) = this;
  Projection::Projection((Projection *)this);
  *(undefined4 *)param_1 = 0x13;
  return;
}



/* VariantInitializer<Color>::init(Variant*) */

void VariantInitializer<Color>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0x14;
  return;
}



/* VariantInitializer<StringName>::init(Variant*) */

void VariantInitializer<StringName>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0x15;
  return;
}



/* VariantInitializer<NodePath>::init(Variant*) */

void VariantInitializer<NodePath>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0x16;
  return;
}



/* VariantInitializer<RID>::init(Variant*) */

void VariantInitializer<RID>::init(Variant *param_1)

{
  *(undefined4 *)param_1 = 0x17;
  return;
}



/* VariantInitializer<Callable>::init(Variant*) */

void VariantInitializer<Callable>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x19;
  return;
}



/* VariantInitializer<Signal>::init(Variant*) */

void VariantInitializer<Signal>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x1a;
  return;
}



/* VariantInitializer<Dictionary>::init(Variant*) */

void VariantInitializer<Dictionary>::init(Variant *param_1)

{
  Dictionary::Dictionary((Dictionary *)(param_1 + 8));
  *(undefined4 *)param_1 = 0x1b;
  return;
}



/* VariantInitializer<Array>::init(Variant*) */

void VariantInitializer<Array>::init(Variant *param_1)

{
  Array::Array((Array *)(param_1 + 8));
  *(undefined4 *)param_1 = 0x1c;
  return;
}



/* VariantInitializer<Vector<unsigned char> >::init(Variant*) */

void VariantInitializer<Vector<unsigned_char>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132d78;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x1d;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<int> >::init(Variant*) */

void VariantInitializer<Vector<int>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132d98;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<int>::_ref((CowData<int> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x1e;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<long> >::init(Variant*) */

void VariantInitializer<Vector<long>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132db8;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<long>::_ref((CowData<long> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x1f;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<float> >::init(Variant*) */

void VariantInitializer<Vector<float>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132dd8;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<float>::_ref((CowData<float> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x20;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<double> >::init(Variant*) */

void VariantInitializer<Vector<double>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132df8;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<double>::_ref((CowData<double> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x21;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<String> >::init(Variant*) */

void VariantInitializer<Vector<String>>::init(Variant *param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__PackedArrayRef_00132e18;
  puVar1[3] = 0;
  if (local_30[0] != 0) {
    CowData<String>::_ref((CowData<String> *)(puVar1 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  CowData<String>::_unref((CowData<String> *)local_30);
  *(undefined4 *)param_1 = 0x22;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<Vector2> >::init(Variant*) */

void VariantInitializer<Vector<Vector2>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132e38;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x23;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<Vector3> >::init(Variant*) */

void VariantInitializer<Vector<Vector3>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132e58;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<Vector3>::_ref((CowData<Vector3> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x24;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<Color> >::init(Variant*) */

void VariantInitializer<Vector<Color>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132e78;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<Color>::_ref((CowData<Color> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x25;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Vector<Vector4> >::init(Variant*) */

void VariantInitializer<Vector<Vector4>>::init(Variant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  puVar2 = (undefined8 *)operator_new(0x20,"");
  *puVar2 = &PTR__PackedArrayRefBase_00132d58;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__PackedArrayRef_00132e98;
  puVar2[3] = 0;
  if (local_30[0] != 0) {
    CowData<Vector4>::_ref((CowData<Vector4> *)(puVar2 + 3),(CowData *)local_30);
  }
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30[0] + -0x10),false);
    }
  }
  *(undefined4 *)param_1 = 0x26;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantInitializer<Object*>::init(Variant*) */

void VariantInitializer<Object*>::init(Variant *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x18;
  return;
}



/* EngineDebugger::poll_events(bool) */

void EngineDebugger::poll_events(bool param_1)

{
  return;
}



/* GDScript::is_valid() const */

GDScript __thiscall GDScript::is_valid(GDScript *this)

{
  return this[0x241];
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e78;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132dd8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e98;
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



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132d98;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e38;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132db8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132df8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e58;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e78;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e58;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e38;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132db8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132dd8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132e98;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132df8;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132d98;
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



/* PlaceHolderScriptInstance::get_script() const */

void PlaceHolderScriptInstance::get_script(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x80) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x80);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132d78;
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
  
  *(undefined ***)this = &PTR__PackedArrayRef_00132d78;
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

void FUN_0012b896(void)

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

void FUN_0012b8b8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::recursive_mutex::lock() */

void __thiscall std::recursive_mutex::lock(recursive_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
  std::__throw_system_error(iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* Signal::~Signal() */

void __thiscall Signal::~Signal(Signal *this)

{
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
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



/* HashMap<int, HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::operator[](int const&) const */

long __thiscall
HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::operator[](HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             *this,int *param_1)

{
  uint uVar1;
  long lVar2;
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
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  
  lVar2 = *(long *)(this + 8);
  uVar1 = *param_1;
  if ((lVar2 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar17 = 1;
      uVar15 = uVar3;
    }
    else {
      uVar15 = uVar17 * uVar3;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) && (uVar1 == *(uint *)(*(long *)(lVar2 + lVar16 * 8) + 0x10))) {
          return *(long *)(lVar2 + (ulong)uVar14 * 8) + 0x18;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (uVar14 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar13 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar14) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* WARNING: Removing unreachable block (ram,0x0012c118) */
/* WARNING: Removing unreachable block (ram,0x0012c248) */
/* WARNING: Removing unreachable block (ram,0x0012c410) */
/* WARNING: Removing unreachable block (ram,0x0012c254) */
/* WARNING: Removing unreachable block (ram,0x0012c25e) */
/* WARNING: Removing unreachable block (ram,0x0012c3f0) */
/* WARNING: Removing unreachable block (ram,0x0012c26a) */
/* WARNING: Removing unreachable block (ram,0x0012c274) */
/* WARNING: Removing unreachable block (ram,0x0012c3d0) */
/* WARNING: Removing unreachable block (ram,0x0012c280) */
/* WARNING: Removing unreachable block (ram,0x0012c28a) */
/* WARNING: Removing unreachable block (ram,0x0012c3b0) */
/* WARNING: Removing unreachable block (ram,0x0012c296) */
/* WARNING: Removing unreachable block (ram,0x0012c2a0) */
/* WARNING: Removing unreachable block (ram,0x0012c390) */
/* WARNING: Removing unreachable block (ram,0x0012c2ac) */
/* WARNING: Removing unreachable block (ram,0x0012c2b6) */
/* WARNING: Removing unreachable block (ram,0x0012c370) */
/* WARNING: Removing unreachable block (ram,0x0012c2c2) */
/* WARNING: Removing unreachable block (ram,0x0012c2cc) */
/* WARNING: Removing unreachable block (ram,0x0012c350) */
/* WARNING: Removing unreachable block (ram,0x0012c2d4) */
/* WARNING: Removing unreachable block (ram,0x0012c2ea) */
/* WARNING: Removing unreachable block (ram,0x0012c2f6) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0012c5b0) */
/* WARNING: Removing unreachable block (ram,0x0012c6e0) */
/* WARNING: Removing unreachable block (ram,0x0012c858) */
/* WARNING: Removing unreachable block (ram,0x0012c6ec) */
/* WARNING: Removing unreachable block (ram,0x0012c6f6) */
/* WARNING: Removing unreachable block (ram,0x0012c83a) */
/* WARNING: Removing unreachable block (ram,0x0012c702) */
/* WARNING: Removing unreachable block (ram,0x0012c70c) */
/* WARNING: Removing unreachable block (ram,0x0012c81c) */
/* WARNING: Removing unreachable block (ram,0x0012c718) */
/* WARNING: Removing unreachable block (ram,0x0012c722) */
/* WARNING: Removing unreachable block (ram,0x0012c7fe) */
/* WARNING: Removing unreachable block (ram,0x0012c72e) */
/* WARNING: Removing unreachable block (ram,0x0012c738) */
/* WARNING: Removing unreachable block (ram,0x0012c7e0) */
/* WARNING: Removing unreachable block (ram,0x0012c744) */
/* WARNING: Removing unreachable block (ram,0x0012c74e) */
/* WARNING: Removing unreachable block (ram,0x0012c7c2) */
/* WARNING: Removing unreachable block (ram,0x0012c756) */
/* WARNING: Removing unreachable block (ram,0x0012c760) */
/* WARNING: Removing unreachable block (ram,0x0012c7a7) */
/* WARNING: Removing unreachable block (ram,0x0012c768) */
/* WARNING: Removing unreachable block (ram,0x0012c77d) */
/* WARNING: Removing unreachable block (ram,0x0012c789) */
/* String vformat<String, String, char const*, String>(String const&, String const, String const,
   char const* const, String const) */

undefined8 *
vformat<String,String,char_const*,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,char *param_5,
          String *param_6)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, GDScriptFunction::Profile::NativeProfile, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   GDScriptFunction::Profile::NativeProfile> > >::insert(String const&,
   GDScriptFunction::Profile::NativeProfile const&, bool) */

String * HashMap<String,GDScriptFunction::Profile::NativeProfile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptFunction::Profile::NativeProfile>>>
         ::insert(String *param_1,NativeProfile *param_2,bool param_3)

{
  void *pvVar1;
  void *__s;
  undefined1 auVar2 [16];
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
  char cVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  long *plVar30;
  undefined8 *puVar31;
  void *pvVar32;
  long *in_RCX;
  int iVar33;
  undefined7 in_register_00000011;
  String *pSVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  long lVar40;
  uint *puVar41;
  uint uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  uint uVar47;
  long *plVar48;
  long *plVar49;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50 [2];
  long local_40;
  
  pSVar34 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar38 = (ulong)uVar37;
    uVar28 = uVar38 * 4;
    uVar45 = uVar38 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    pvVar32 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar32;
    if (uVar37 != 0) {
      pvVar1 = *(void **)(param_2 + 0x10);
      if ((pvVar1 < (void *)((long)pvVar32 + uVar45)) && (pvVar32 < (void *)((long)pvVar1 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar1 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar38 != uVar28);
      }
      else {
        memset(pvVar1,0,uVar28);
        memset(pvVar32,0,uVar45);
      }
      goto LAB_0012c978;
    }
    iVar33 = *(int *)(param_2 + 0x2c);
    if (pvVar32 == (void *)0x0) goto LAB_0012c987;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0012ce08;
LAB_0012c9ad:
    uVar37 = *(uint *)(param_2 + 0x28);
    if (uVar37 == 0x1c) {
      plVar30 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0012cdb7;
    }
    uVar28 = (ulong)(uVar37 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar28 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar28 * 4);
    uVar38 = (ulong)uVar37;
    *(int *)(param_2 + 0x28) = (int)uVar28;
    pvVar32 = *(void **)(param_2 + 8);
    uVar28 = uVar38 * 4;
    uVar45 = uVar38 * 8;
    pvVar1 = *(void **)(param_2 + 0x10);
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar28))) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)__s + uVar28 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar38);
      }
      else {
        memset(__s,0,uVar28);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar27 != 0) {
      uVar28 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar1 + uVar28 * 4);
        if (uVar37 != 0) {
          lVar40 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar42);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar37 * lVar46;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar45;
          lVar35 = SUB168(auVar2 * auVar14,8);
          puVar41 = (uint *)(lVar40 + lVar35 * 4);
          iVar33 = SUB164(auVar2 * auVar14,8);
          uVar44 = *puVar41;
          uVar29 = *(undefined8 *)((long)pvVar32 + uVar28 * 8);
          while (uVar44 != 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar44 * lVar46;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar45;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)((iVar33 + uVar42) - SUB164(auVar3 * auVar15,8)) * lVar46;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar45;
            uVar47 = SUB164(auVar4 * auVar16,8);
            uVar39 = uVar29;
            if (uVar47 < uVar43) {
              *puVar41 = uVar37;
              puVar31 = (undefined8 *)((long)__s_00 + lVar35 * 8);
              uVar39 = *puVar31;
              *puVar31 = uVar29;
              uVar37 = uVar44;
              uVar43 = uVar47;
            }
            uVar43 = uVar43 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar46;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar45;
            lVar35 = SUB168(auVar5 * auVar17,8);
            puVar41 = (uint *)(lVar40 + lVar35 * 4);
            iVar33 = SUB164(auVar5 * auVar17,8);
            uVar29 = uVar39;
            uVar44 = *puVar41;
          }
          *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar29;
          *puVar41 = uVar37;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar28 = uVar28 + 1;
      } while (uVar27 != uVar28);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar1,false);
    }
  }
  else {
LAB_0012c978:
    iVar33 = *(int *)(param_2 + 0x2c);
    if (iVar33 != 0) {
LAB_0012ce08:
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar28 = CONCAT44(0,uVar27);
      lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar44 = String::hash();
      lVar46 = *(long *)(param_2 + 0x10);
      uVar42 = 1;
      if (uVar44 != 0) {
        uVar42 = uVar44;
      }
      uVar47 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar42 * lVar40;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar28;
      lVar35 = SUB168(auVar10 * auVar22,8);
      uVar44 = *(uint *)(lVar46 + lVar35 * 4);
      uVar43 = SUB164(auVar10 * auVar22,8);
      if (uVar44 != 0) {
        do {
          if (uVar44 == uVar42) {
            cVar26 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar35 * 8) + 0x10),
                                        pSVar34);
            if (cVar26 != '\0') {
              plVar30 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
              lVar46 = in_RCX[1];
              lVar40 = in_RCX[2];
              plVar30[3] = *in_RCX;
              plVar30[4] = lVar46;
              if (plVar30[5] != lVar40) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(plVar30 + 5),(CowData *)(in_RCX + 2));
                plVar30 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
              }
              goto LAB_0012cdb7;
            }
            lVar46 = *(long *)(param_2 + 0x10);
          }
          uVar47 = uVar47 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar43 + 1) * lVar40;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar28;
          lVar35 = SUB168(auVar11 * auVar23,8);
          uVar44 = *(uint *)(lVar46 + lVar35 * 4);
          uVar43 = SUB164(auVar11 * auVar23,8);
        } while ((uVar44 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar44 * lVar40, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar28, auVar13._8_8_ = 0,
                auVar13._0_8_ = (ulong)((uVar27 + uVar43) - SUB164(auVar12 * auVar24,8)) * lVar40,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar28, uVar47 <= SUB164(auVar13 * auVar25,8)));
      }
      iVar33 = *(int *)(param_2 + 0x2c);
    }
LAB_0012c987:
    if ((float)uVar37 * __LC25 < (float)(iVar33 + 1)) goto LAB_0012c9ad;
  }
  local_68 = 0;
  if (*(long *)pSVar34 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar34);
  }
  local_50[0] = 0;
  local_60 = *in_RCX;
  lStack_58 = in_RCX[1];
  lVar40 = in_RCX[2];
  if (in_RCX[2] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)(in_RCX + 2));
    lVar40 = local_50[0];
  }
  lVar36 = lStack_58;
  lVar35 = local_60;
  plVar30 = (long *)operator_new(0x30,"");
  lVar46 = local_68;
  plVar30[2] = 0;
  *plVar30 = 0;
  plVar30[1] = 0;
  if (local_68 == 0) {
    plVar30[5] = 0;
    plVar30[3] = lVar35;
    plVar30[4] = lVar36;
    if (lVar40 != 0) goto LAB_0012cc70;
LAB_0012cca4:
    puVar31 = *(undefined8 **)(param_2 + 0x20);
    if (puVar31 != (undefined8 *)0x0) goto LAB_0012ccb1;
LAB_0012cf25:
    *(long **)(param_2 + 0x18) = plVar30;
    *(long **)(param_2 + 0x20) = plVar30;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar30 + 2),(CowData *)&local_68);
    plVar30[5] = 0;
    plVar30[3] = lVar35;
    plVar30[4] = lVar36;
    if (lVar40 != 0) {
LAB_0012cc70:
      CowData<char32_t>::_ref((CowData<char32_t> *)(plVar30 + 5),(CowData *)local_50);
      LOCK();
      plVar49 = (long *)(lVar40 + -0x10);
      *plVar49 = *plVar49 + -1;
      UNLOCK();
      lVar46 = local_68;
      if (*plVar49 == 0) {
        Memory::free_static((void *)(local_50[0] + -0x10),false);
        lVar46 = local_68;
      }
      local_68 = lVar46;
      if (lVar46 == 0) goto LAB_0012cca4;
    }
    LOCK();
    plVar49 = (long *)(lVar46 + -0x10);
    *plVar49 = *plVar49 + -1;
    UNLOCK();
    if (*plVar49 != 0) goto LAB_0012cca4;
    Memory::free_static((void *)(local_68 + -0x10),false);
    puVar31 = *(undefined8 **)(param_2 + 0x20);
    if (puVar31 == (undefined8 *)0x0) goto LAB_0012cf25;
LAB_0012ccb1:
    if (in_R8B == '\0') {
      *puVar31 = plVar30;
      plVar30[1] = (long)puVar31;
      *(long **)(param_2 + 0x20) = plVar30;
    }
    else {
      lVar40 = *(long *)(param_2 + 0x18);
      *(long **)(lVar40 + 8) = plVar30;
      *plVar30 = lVar40;
      *(long **)(param_2 + 0x18) = plVar30;
    }
  }
  uVar27 = String::hash();
  lVar40 = *(long *)(param_2 + 0x10);
  uVar37 = 1;
  if (uVar27 != 0) {
    uVar37 = uVar27;
  }
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar28 = CONCAT44(0,uVar27);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (ulong)uVar37 * lVar46;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar28;
  lVar36 = SUB168(auVar6 * auVar18,8);
  lVar35 = *(long *)(param_2 + 8);
  puVar41 = (uint *)(lVar40 + lVar36 * 4);
  iVar33 = SUB164(auVar6 * auVar18,8);
  uVar42 = *puVar41;
  plVar49 = plVar30;
  if (uVar42 != 0) {
    uVar44 = 0;
    plVar48 = plVar30;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar42 * lVar46;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar28;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)((uVar27 + iVar33) - SUB164(auVar7 * auVar19,8)) * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar28;
      uVar43 = SUB164(auVar8 * auVar20,8);
      plVar49 = plVar48;
      if (uVar43 < uVar44) {
        *puVar41 = uVar37;
        puVar31 = (undefined8 *)(lVar35 + lVar36 * 8);
        plVar49 = (long *)*puVar31;
        *puVar31 = plVar48;
        uVar44 = uVar43;
        uVar37 = uVar42;
      }
      uVar44 = uVar44 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(iVar33 + 1) * lVar46;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar28;
      lVar36 = SUB168(auVar9 * auVar21,8);
      puVar41 = (uint *)(lVar40 + lVar36 * 4);
      iVar33 = SUB164(auVar9 * auVar21,8);
      uVar42 = *puVar41;
      plVar48 = plVar49;
    } while (uVar42 != 0);
  }
  *(long **)(lVar35 + lVar36 * 8) = plVar49;
  *puVar41 = uVar37;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0012cdb7:
  *(long **)param_1 = plVar30;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0012d260) */
/* WARNING: Removing unreachable block (ram,0x0012d390) */
/* WARNING: Removing unreachable block (ram,0x0012d509) */
/* WARNING: Removing unreachable block (ram,0x0012d39c) */
/* WARNING: Removing unreachable block (ram,0x0012d3a6) */
/* WARNING: Removing unreachable block (ram,0x0012d4eb) */
/* WARNING: Removing unreachable block (ram,0x0012d3b2) */
/* WARNING: Removing unreachable block (ram,0x0012d3bc) */
/* WARNING: Removing unreachable block (ram,0x0012d4cd) */
/* WARNING: Removing unreachable block (ram,0x0012d3c8) */
/* WARNING: Removing unreachable block (ram,0x0012d3d2) */
/* WARNING: Removing unreachable block (ram,0x0012d4af) */
/* WARNING: Removing unreachable block (ram,0x0012d3de) */
/* WARNING: Removing unreachable block (ram,0x0012d3e8) */
/* WARNING: Removing unreachable block (ram,0x0012d491) */
/* WARNING: Removing unreachable block (ram,0x0012d3f4) */
/* WARNING: Removing unreachable block (ram,0x0012d3fe) */
/* WARNING: Removing unreachable block (ram,0x0012d473) */
/* WARNING: Removing unreachable block (ram,0x0012d406) */
/* WARNING: Removing unreachable block (ram,0x0012d410) */
/* WARNING: Removing unreachable block (ram,0x0012d458) */
/* WARNING: Removing unreachable block (ram,0x0012d418) */
/* WARNING: Removing unreachable block (ram,0x0012d42e) */
/* WARNING: Removing unreachable block (ram,0x0012d43a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0012d688) */
/* WARNING: Removing unreachable block (ram,0x0012d7b8) */
/* WARNING: Removing unreachable block (ram,0x0012d930) */
/* WARNING: Removing unreachable block (ram,0x0012d7c4) */
/* WARNING: Removing unreachable block (ram,0x0012d7ce) */
/* WARNING: Removing unreachable block (ram,0x0012d912) */
/* WARNING: Removing unreachable block (ram,0x0012d7da) */
/* WARNING: Removing unreachable block (ram,0x0012d7e4) */
/* WARNING: Removing unreachable block (ram,0x0012d8f4) */
/* WARNING: Removing unreachable block (ram,0x0012d7f0) */
/* WARNING: Removing unreachable block (ram,0x0012d7fa) */
/* WARNING: Removing unreachable block (ram,0x0012d8d6) */
/* WARNING: Removing unreachable block (ram,0x0012d806) */
/* WARNING: Removing unreachable block (ram,0x0012d810) */
/* WARNING: Removing unreachable block (ram,0x0012d8b8) */
/* WARNING: Removing unreachable block (ram,0x0012d81c) */
/* WARNING: Removing unreachable block (ram,0x0012d826) */
/* WARNING: Removing unreachable block (ram,0x0012d89a) */
/* WARNING: Removing unreachable block (ram,0x0012d82e) */
/* WARNING: Removing unreachable block (ram,0x0012d838) */
/* WARNING: Removing unreachable block (ram,0x0012d87f) */
/* WARNING: Removing unreachable block (ram,0x0012d840) */
/* WARNING: Removing unreachable block (ram,0x0012d855) */
/* WARNING: Removing unreachable block (ram,0x0012d861) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

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



/* WARNING: Removing unreachable block (ram,0x0012dab0) */
/* WARNING: Removing unreachable block (ram,0x0012dbe0) */
/* WARNING: Removing unreachable block (ram,0x0012dd59) */
/* WARNING: Removing unreachable block (ram,0x0012dbec) */
/* WARNING: Removing unreachable block (ram,0x0012dbf6) */
/* WARNING: Removing unreachable block (ram,0x0012dd3b) */
/* WARNING: Removing unreachable block (ram,0x0012dc02) */
/* WARNING: Removing unreachable block (ram,0x0012dc0c) */
/* WARNING: Removing unreachable block (ram,0x0012dd1d) */
/* WARNING: Removing unreachable block (ram,0x0012dc18) */
/* WARNING: Removing unreachable block (ram,0x0012dc22) */
/* WARNING: Removing unreachable block (ram,0x0012dcff) */
/* WARNING: Removing unreachable block (ram,0x0012dc2e) */
/* WARNING: Removing unreachable block (ram,0x0012dc38) */
/* WARNING: Removing unreachable block (ram,0x0012dce1) */
/* WARNING: Removing unreachable block (ram,0x0012dc44) */
/* WARNING: Removing unreachable block (ram,0x0012dc4e) */
/* WARNING: Removing unreachable block (ram,0x0012dcc3) */
/* WARNING: Removing unreachable block (ram,0x0012dc56) */
/* WARNING: Removing unreachable block (ram,0x0012dc60) */
/* WARNING: Removing unreachable block (ram,0x0012dca8) */
/* WARNING: Removing unreachable block (ram,0x0012dc68) */
/* WARNING: Removing unreachable block (ram,0x0012dc7e) */
/* WARNING: Removing unreachable block (ram,0x0012dc8a) */
/* String vformat<String, Variant>(String const&, String const, Variant const) */

undefined8 *
vformat<String,Variant>(undefined8 *param_1,bool *param_2,String *param_3,Variant *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0012de98) */
/* WARNING: Removing unreachable block (ram,0x0012dfc8) */
/* WARNING: Removing unreachable block (ram,0x0012e190) */
/* WARNING: Removing unreachable block (ram,0x0012dfd4) */
/* WARNING: Removing unreachable block (ram,0x0012dfde) */
/* WARNING: Removing unreachable block (ram,0x0012e170) */
/* WARNING: Removing unreachable block (ram,0x0012dfea) */
/* WARNING: Removing unreachable block (ram,0x0012dff4) */
/* WARNING: Removing unreachable block (ram,0x0012e150) */
/* WARNING: Removing unreachable block (ram,0x0012e000) */
/* WARNING: Removing unreachable block (ram,0x0012e00a) */
/* WARNING: Removing unreachable block (ram,0x0012e130) */
/* WARNING: Removing unreachable block (ram,0x0012e016) */
/* WARNING: Removing unreachable block (ram,0x0012e020) */
/* WARNING: Removing unreachable block (ram,0x0012e110) */
/* WARNING: Removing unreachable block (ram,0x0012e02c) */
/* WARNING: Removing unreachable block (ram,0x0012e036) */
/* WARNING: Removing unreachable block (ram,0x0012e0f0) */
/* WARNING: Removing unreachable block (ram,0x0012e042) */
/* WARNING: Removing unreachable block (ram,0x0012e04c) */
/* WARNING: Removing unreachable block (ram,0x0012e0d0) */
/* WARNING: Removing unreachable block (ram,0x0012e054) */
/* WARNING: Removing unreachable block (ram,0x0012e06a) */
/* WARNING: Removing unreachable block (ram,0x0012e076) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* SelfList<GDScriptFunctionState>::List::add(SelfList<GDScriptFunctionState>*) */

void __thiscall SelfList<GDScriptFunctionState>::List::add(List *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC34,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)this;
  *(List **)param_1 = this;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)this = param_1;
    return;
  }
  *(SelfList **)(this + 8) = param_1;
  *(SelfList **)this = param_1;
  return;
}



/* RefCounted* Object::cast_to<RefCounted>(Object*) */

RefCounted * Object::cast_to<RefCounted>(Object *param_1)

{
  RefCounted *pRVar1;
  
  if (param_1 != (Object *)0x0) {
    pRVar1 = (RefCounted *)__dynamic_cast(param_1,&typeinfo,&RefCounted::typeinfo,0);
    return pRVar1;
  }
  return (RefCounted *)0x0;
}



/* WARNING: Removing unreachable block (ram,0x0012e3f0) */
/* WARNING: Removing unreachable block (ram,0x0012e520) */
/* WARNING: Removing unreachable block (ram,0x0012e699) */
/* WARNING: Removing unreachable block (ram,0x0012e52c) */
/* WARNING: Removing unreachable block (ram,0x0012e536) */
/* WARNING: Removing unreachable block (ram,0x0012e67b) */
/* WARNING: Removing unreachable block (ram,0x0012e542) */
/* WARNING: Removing unreachable block (ram,0x0012e54c) */
/* WARNING: Removing unreachable block (ram,0x0012e65d) */
/* WARNING: Removing unreachable block (ram,0x0012e558) */
/* WARNING: Removing unreachable block (ram,0x0012e562) */
/* WARNING: Removing unreachable block (ram,0x0012e63f) */
/* WARNING: Removing unreachable block (ram,0x0012e56e) */
/* WARNING: Removing unreachable block (ram,0x0012e578) */
/* WARNING: Removing unreachable block (ram,0x0012e621) */
/* WARNING: Removing unreachable block (ram,0x0012e584) */
/* WARNING: Removing unreachable block (ram,0x0012e58e) */
/* WARNING: Removing unreachable block (ram,0x0012e603) */
/* WARNING: Removing unreachable block (ram,0x0012e596) */
/* WARNING: Removing unreachable block (ram,0x0012e5a0) */
/* WARNING: Removing unreachable block (ram,0x0012e5e8) */
/* WARNING: Removing unreachable block (ram,0x0012e5a8) */
/* WARNING: Removing unreachable block (ram,0x0012e5be) */
/* WARNING: Removing unreachable block (ram,0x0012e5ca) */
/* String vformat<String, StringName>(String const&, String const, StringName const) */

undefined8 *
vformat<String,StringName>(undefined8 *param_1,bool *param_2,String *param_3,StringName *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0012e810) */
/* WARNING: Removing unreachable block (ram,0x0012e940) */
/* WARNING: Removing unreachable block (ram,0x0012eab9) */
/* WARNING: Removing unreachable block (ram,0x0012e94c) */
/* WARNING: Removing unreachable block (ram,0x0012e956) */
/* WARNING: Removing unreachable block (ram,0x0012ea9b) */
/* WARNING: Removing unreachable block (ram,0x0012e962) */
/* WARNING: Removing unreachable block (ram,0x0012e96c) */
/* WARNING: Removing unreachable block (ram,0x0012ea7d) */
/* WARNING: Removing unreachable block (ram,0x0012e978) */
/* WARNING: Removing unreachable block (ram,0x0012e982) */
/* WARNING: Removing unreachable block (ram,0x0012ea5f) */
/* WARNING: Removing unreachable block (ram,0x0012e98e) */
/* WARNING: Removing unreachable block (ram,0x0012e998) */
/* WARNING: Removing unreachable block (ram,0x0012ea41) */
/* WARNING: Removing unreachable block (ram,0x0012e9a4) */
/* WARNING: Removing unreachable block (ram,0x0012e9ae) */
/* WARNING: Removing unreachable block (ram,0x0012ea23) */
/* WARNING: Removing unreachable block (ram,0x0012e9b6) */
/* WARNING: Removing unreachable block (ram,0x0012e9c0) */
/* WARNING: Removing unreachable block (ram,0x0012ea08) */
/* WARNING: Removing unreachable block (ram,0x0012e9c8) */
/* WARNING: Removing unreachable block (ram,0x0012e9de) */
/* WARNING: Removing unreachable block (ram,0x0012e9ea) */
/* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */

undefined8 *
vformat<StringName,StringName>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0012ec30) */
/* WARNING: Removing unreachable block (ram,0x0012ed60) */
/* WARNING: Removing unreachable block (ram,0x0012eed9) */
/* WARNING: Removing unreachable block (ram,0x0012ed6c) */
/* WARNING: Removing unreachable block (ram,0x0012ed76) */
/* WARNING: Removing unreachable block (ram,0x0012eebb) */
/* WARNING: Removing unreachable block (ram,0x0012ed82) */
/* WARNING: Removing unreachable block (ram,0x0012ed8c) */
/* WARNING: Removing unreachable block (ram,0x0012ee9d) */
/* WARNING: Removing unreachable block (ram,0x0012ed98) */
/* WARNING: Removing unreachable block (ram,0x0012eda2) */
/* WARNING: Removing unreachable block (ram,0x0012ee7f) */
/* WARNING: Removing unreachable block (ram,0x0012edae) */
/* WARNING: Removing unreachable block (ram,0x0012edb8) */
/* WARNING: Removing unreachable block (ram,0x0012ee61) */
/* WARNING: Removing unreachable block (ram,0x0012edc4) */
/* WARNING: Removing unreachable block (ram,0x0012edce) */
/* WARNING: Removing unreachable block (ram,0x0012ee43) */
/* WARNING: Removing unreachable block (ram,0x0012edd6) */
/* WARNING: Removing unreachable block (ram,0x0012ede0) */
/* WARNING: Removing unreachable block (ram,0x0012ee28) */
/* WARNING: Removing unreachable block (ram,0x0012ede8) */
/* WARNING: Removing unreachable block (ram,0x0012edfe) */
/* WARNING: Removing unreachable block (ram,0x0012ee0a) */
/* String vformat<StringName, String>(String const&, StringName const, String const) */

undefined8 *
vformat<StringName,String>(undefined8 *param_1,bool *param_2,StringName *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0012f018) */
/* WARNING: Removing unreachable block (ram,0x0012f148) */
/* WARNING: Removing unreachable block (ram,0x0012f310) */
/* WARNING: Removing unreachable block (ram,0x0012f154) */
/* WARNING: Removing unreachable block (ram,0x0012f15e) */
/* WARNING: Removing unreachable block (ram,0x0012f2f0) */
/* WARNING: Removing unreachable block (ram,0x0012f16a) */
/* WARNING: Removing unreachable block (ram,0x0012f174) */
/* WARNING: Removing unreachable block (ram,0x0012f2d0) */
/* WARNING: Removing unreachable block (ram,0x0012f180) */
/* WARNING: Removing unreachable block (ram,0x0012f18a) */
/* WARNING: Removing unreachable block (ram,0x0012f2b0) */
/* WARNING: Removing unreachable block (ram,0x0012f196) */
/* WARNING: Removing unreachable block (ram,0x0012f1a0) */
/* WARNING: Removing unreachable block (ram,0x0012f290) */
/* WARNING: Removing unreachable block (ram,0x0012f1ac) */
/* WARNING: Removing unreachable block (ram,0x0012f1b6) */
/* WARNING: Removing unreachable block (ram,0x0012f270) */
/* WARNING: Removing unreachable block (ram,0x0012f1c2) */
/* WARNING: Removing unreachable block (ram,0x0012f1cc) */
/* WARNING: Removing unreachable block (ram,0x0012f250) */
/* WARNING: Removing unreachable block (ram,0x0012f1d4) */
/* WARNING: Removing unreachable block (ram,0x0012f1ea) */
/* WARNING: Removing unreachable block (ram,0x0012f1f6) */
/* String vformat<Variant>(String const&, Variant const) */

undefined8 * vformat<Variant>(undefined8 *param_1,bool *param_2,Variant *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
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



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
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



/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Script*) */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Script *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (Script *)pOVar1) {
    *(Script **)this = param_1;
    if (param_1 != (Script *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GDScriptFunctionState>::TEMPNAMEPLACEHOLDERVALUE(GDScriptFunctionState*) */

void __thiscall
Ref<GDScriptFunctionState>::operator=
          (Ref<GDScriptFunctionState> *this,GDScriptFunctionState *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (GDScriptFunctionState *)pOVar1) {
    *(GDScriptFunctionState **)this = param_1;
    if (param_1 != (GDScriptFunctionState *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GDScript>::TEMPNAMEPLACEHOLDERVALUE(GDScript*) */

void __thiscall Ref<GDScript>::operator=(Ref<GDScript> *this,GDScript *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (GDScript *)pOVar1) {
    *(GDScript **)this = param_1;
    if (param_1 != (GDScript *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GDScript>::unref() */

void __thiscall Ref<GDScript>::unref(Ref<GDScript> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<RefCounted>::TEMPNAMEPLACEHOLDERVALUE(RefCounted*) */

void __thiscall Ref<RefCounted>::operator=(Ref<RefCounted> *this,RefCounted *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (RefCounted *)pOVar1) {
    *(RefCounted **)this = param_1;
    if (param_1 != (RefCounted *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GDScript>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<GDScript>::operator=(Ref<GDScript> *this,Variant *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&GDScript::typeinfo,0);
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
  *(undefined ***)this = &PTR__PackedArrayRef_00132e18;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_00132e18;
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



/* CowData<GDScriptDataType>::_unref() */

void __thiscall CowData<GDScriptDataType>::_unref(CowData<GDScriptDataType> *this)

{
  CowData<GDScriptDataType> *this_00;
  long lVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar6 = (long *)(*(long *)this + -0x10);
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (*plVar6 == 0) {
    lVar1 = *(long *)this;
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        plVar6 = (long *)(lVar1 + 0x20);
        lVar7 = 0;
        do {
          if (plVar6[2] != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar3 = (Object *)plVar6[2];
              cVar5 = predelete_handler(pOVar3);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          this_00 = (CowData<GDScriptDataType> *)(plVar6 + -3);
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 7;
          _unref(this_00);
        } while (lVar2 != lVar7);
      }
      Memory::free_static((void *)(lVar1 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GDScriptDataType::~GDScriptDataType() */

void __thiscall GDScriptDataType::~GDScriptDataType(GDScriptDataType *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(this + 8));
  return;
}



/* GDScriptDataType::is_type(Variant const&, bool) const */

ulong __thiscall GDScriptDataType::is_type(GDScriptDataType *this,Variant *param_1,bool param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  Object *pOVar8;
  long lVar9;
  Object *pOVar10;
  StringName *pSVar11;
  GDScriptDataType *pGVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  CowData<GDScriptDataType> *local_c8;
  Variant local_b0 [8];
  byte local_a8;
  undefined7 uStack_a7;
  Object *local_a0;
  GDScriptDataType local_98;
  undefined7 uStack_97;
  long local_90;
  ulong local_88;
  ulong local_80;
  undefined1 local_78 [16];
  Object *local_68;
  int local_58 [6];
  long local_40;
  
  bVar14 = 0;
  uVar5 = (ulong)(byte)this[0x14];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x14] == (GDScriptDataType)0x0) {
    uVar5 = 1;
  }
  else {
    uVar3 = *(uint *)(this + 0x10);
    if (uVar3 == 2) {
      if ((*(int *)param_1 != 0) && (uVar5 = 0, *(int *)param_1 == 0x18)) {
        local_98 = (GDScriptDataType)0x0;
        plVar6 = (long *)Variant::get_validated_object_with_check((bool *)param_1);
        if (plVar6 == (long *)0x0) {
          uVar5 = (ulong)((byte)local_98 ^ 1);
        }
        else {
          if (plVar6[1] == 0) {
            pSVar11 = (StringName *)plVar6[0x23];
            if (pSVar11 == (StringName *)0x0) {
              pSVar11 = (StringName *)(**(code **)(*plVar6 + 0x40))(plVar6);
            }
          }
          else {
            pSVar11 = (StringName *)(plVar6[1] + 0x20);
          }
          uVar3 = ClassDB::is_parent_class(pSVar11,(StringName *)(this + 0x20));
          uVar5 = (ulong)uVar3;
        }
      }
    }
    else {
      if (uVar3 < 3) {
        if (uVar3 == 1) {
          iVar4 = *(int *)(this + 0x18);
          if (iVar4 == *(int *)param_1) {
            if (iVar4 == 0x1c) {
              if ((*(long *)(this + 8) != 0) && (0 < *(long *)(*(long *)(this + 8) + -8))) {
                Variant::operator_cast_to_Array((Variant *)&local_a0);
                uVar3 = Array::is_typed();
                uVar5 = (ulong)uVar3;
                if ((char)uVar3 == '\0') goto LAB_001320d6;
                lVar9 = *(long *)(this + 8);
                if (lVar9 == 0) {
                  lVar7 = 0;
LAB_001324f1:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",
                             false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                lVar7 = *(long *)(lVar9 + -8);
                if (lVar7 < 1) goto LAB_001324f1;
                iVar4 = Array::get_typed_builtin();
                Array::get_typed_class_name();
                Array::get_typed_script();
                lVar7 = Variant::get_validated_object();
                if ((lVar7 == 0) ||
                   (pOVar8 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Script::typeinfo,0),
                   pOVar8 == (Object *)0x0)) {
                  lVar7 = (long)local_58[0];
LAB_001321ff:
                  if (Variant::needs_deinit[lVar7] != '\0') {
                    Variant::_clear_internal();
                  }
                  uVar5 = 0;
                  if (CONCAT71(uStack_97,local_98) == 0) {
                    if (*(int *)(lVar9 + 0x10) == 1) {
                      uVar5 = (ulong)(*(int *)(lVar9 + 0x18) == iVar4);
                    }
                  }
                  else {
                    if (*(int *)(lVar9 + 0x10) == 2) {
                      uVar5 = (ulong)(*(long *)(lVar9 + 0x20) == CONCAT71(uStack_97,local_98));
                    }
                    if (StringName::configured != '\0') goto LAB_00132237;
                  }
                }
                else {
                  cVar2 = RefCounted::reference();
                  lVar7 = (long)local_58[0];
                  if (cVar2 == '\0') goto LAB_001321ff;
                  if (Variant::needs_deinit[lVar7] != '\0') {
                    Variant::_clear_internal();
                  }
                  uVar5 = 0;
                  if (*(int *)(lVar9 + 0x10) - 3U < 2) {
                    uVar5 = (ulong)(*(Object **)(lVar9 + 0x28) == pOVar8);
                  }
                  cVar2 = RefCounted::unreference();
                  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  if ((StringName::configured == '\0') || (CONCAT71(uStack_97,local_98) == 0))
                  goto LAB_001320d6;
LAB_00132237:
                  StringName::unref();
                }
LAB_001320d6:
                Array::~Array((Array *)&local_a0);
              }
            }
            else if ((iVar4 == 0x1b) && (*(long *)(this + 8) != 0)) {
              Variant::operator_cast_to_Dictionary(local_b0);
              uVar3 = Dictionary::is_typed();
              uVar5 = (ulong)uVar3;
              if ((char)uVar3 == '\0') {
LAB_00131fac:
                uVar5 = 0;
              }
              else {
                cVar2 = Dictionary::is_typed_key();
                if (cVar2 != '\0') {
                  lVar9 = *(long *)(this + 8);
                  if ((lVar9 == 0) || (*(long *)(lVar9 + -8) < 1)) {
                    pGVar12 = &local_98;
                    for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
                      *(undefined4 *)pGVar12 = 0;
                      pGVar12 = pGVar12 + ((ulong)bVar14 * -2 + 1) * 4;
                    }
                  }
                  else {
                    local_78 = (undefined1  [16])0x0;
                    local_90 = 0;
                    local_68 = (Object *)0x0;
                    local_88 = (ulong)*(uint5 *)(lVar9 + 0x10);
                    local_80 = (ulong)*(uint *)(lVar9 + 0x18);
                    StringName::operator=((StringName *)local_78,(StringName *)(lVar9 + 0x20));
                    pOVar10 = local_68;
                    local_78._8_8_ = *(undefined8 *)(lVar9 + 0x28);
                    pOVar8 = *(Object **)(lVar9 + 0x30);
                    if (pOVar8 != local_68) {
                      local_68 = pOVar8;
                      if ((pOVar8 != (Object *)0x0) &&
                         (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
                        local_68 = (Object *)0x0;
                      }
                      if (((pOVar10 != (Object *)0x0) &&
                          (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
                         (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
                        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                        Memory::free_static(pOVar10,false);
                      }
                    }
                    if (local_90 != *(long *)(lVar9 + 8)) {
                      CowData<GDScriptDataType>::_ref
                                ((CowData<GDScriptDataType> *)&local_90,(CowData *)(lVar9 + 8));
                    }
                  }
                  local_c8 = (CowData<GDScriptDataType> *)&local_90;
                  iVar4 = Dictionary::get_typed_key_builtin();
                  Dictionary::get_typed_key_class_name();
                  Dictionary::get_typed_key_script();
                  lVar9 = Variant::get_validated_object();
                  if (((lVar9 == 0) ||
                      (pOVar8 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&Script::typeinfo),
                      pOVar8 == (Object *)0x0)) || (cVar2 = RefCounted::reference(), cVar2 == '\0'))
                  {
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    bVar13 = false;
                    if (local_a0 == (Object *)0x0) {
                      if ((int)local_88 == 1) {
                        bVar13 = (int)local_80 == iVar4;
                      }
                    }
                    else {
                      bVar13 = false;
                      if ((int)local_88 == 2) {
                        bVar13 = (Object *)local_78._0_8_ == local_a0;
                      }
                      if (StringName::configured != '\0') goto LAB_001324e1;
                    }
                  }
                  else {
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    bVar13 = false;
                    if ((int)local_88 - 3U < 2) {
                      bVar13 = (Object *)local_78._8_8_ == pOVar8;
                    }
                    cVar2 = RefCounted::unreference();
                    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
                      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                      Memory::free_static(pOVar8,false);
                    }
                    if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
LAB_001324e1:
                      StringName::unref();
                    }
                  }
                  if (((local_68 != (Object *)0x0) &&
                      (cVar2 = RefCounted::unreference(), pOVar8 = local_68, cVar2 != '\0')) &&
                     (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  if ((StringName::configured != '\0') && (local_78._0_8_ != 0)) {
                    StringName::unref();
                  }
                  CowData<GDScriptDataType>::_unref(local_c8);
                  if (!bVar13) goto LAB_00131fac;
                }
                cVar2 = Dictionary::is_typed_value();
                if (cVar2 != '\0') {
                  lVar9 = *(long *)(this + 8);
                  if ((lVar9 == 0) || (*(long *)(lVar9 + -8) < 2)) {
                    pGVar12 = &local_98;
                    for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
                      *(undefined4 *)pGVar12 = 0;
                      pGVar12 = pGVar12 + ((ulong)bVar14 * -2 + 1) * 4;
                    }
                  }
                  else {
                    local_78 = (undefined1  [16])0x0;
                    local_68 = (Object *)0x0;
                    local_90 = 0;
                    local_88 = CONCAT35(local_88._5_3_,*(undefined5 *)(lVar9 + 0x48));
                    local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar9 + 0x50));
                    StringName::operator=((StringName *)local_78,(StringName *)(lVar9 + 0x58));
                    pOVar10 = local_68;
                    local_78._8_8_ = *(undefined8 *)(lVar9 + 0x60);
                    pOVar8 = *(Object **)(lVar9 + 0x68);
                    if (pOVar8 != local_68) {
                      local_68 = pOVar8;
                      if ((pOVar8 != (Object *)0x0) &&
                         (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
                        local_68 = (Object *)0x0;
                      }
                      if (((pOVar10 != (Object *)0x0) &&
                          (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
                         (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
                        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                        Memory::free_static(pOVar10,false);
                      }
                    }
                    if (local_90 != *(long *)(lVar9 + 0x40)) {
                      CowData<GDScriptDataType>::_ref
                                ((CowData<GDScriptDataType> *)&local_90,(CowData *)(lVar9 + 0x40));
                    }
                  }
                  iVar4 = Dictionary::get_typed_value_builtin();
                  Dictionary::get_typed_value_class_name();
                  Dictionary::get_typed_value_script();
                  local_a0 = (Object *)0x0;
                  Ref<Script>::operator=((Ref<Script> *)&local_a0,(Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (local_a0 == (Object *)0x0) {
                    uVar5 = 0;
                    if (CONCAT71(uStack_a7,local_a8) == 0) {
                      if ((int)local_88 == 1) {
                        uVar5 = (ulong)((int)local_80 == iVar4);
                      }
                    }
                    else if ((int)local_88 == 2) {
                      uVar5 = (ulong)(local_78._0_8_ == CONCAT71(uStack_a7,local_a8));
                    }
                  }
                  else {
                    uVar5 = 0;
                    if ((int)local_88 - 3U < 2) {
                      uVar5 = (ulong)((Object *)local_78._8_8_ == local_a0);
                    }
                  }
                  Ref<Script>::unref((Ref<Script> *)&local_a0);
                  if ((StringName::configured != '\0') && (CONCAT71(uStack_a7,local_a8) != 0)) {
                    StringName::unref();
                  }
                  ~GDScriptDataType(&local_98);
                }
              }
              Dictionary::~Dictionary((Dictionary *)local_b0);
            }
            goto LAB_00131dd3;
          }
          if (param_2) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar5 = Variant::can_convert_strict(*(int *)param_1);
              return uVar5;
            }
            goto LAB_00132549;
          }
        }
      }
      else if (uVar3 - 3 < 2) {
        if (*(int *)param_1 == 0) goto LAB_00131dd3;
        if (*(int *)param_1 == 0x18) {
          local_a8 = 0;
          lVar9 = Variant::get_validated_object_with_check((bool *)param_1);
          if (lVar9 == 0) {
            uVar5 = (ulong)(local_a8 ^ 1);
            goto LAB_00131dd3;
          }
          plVar6 = *(long **)(lVar9 + 0x98);
          if (plVar6 != (long *)0x0) {
            if (*(code **)(*plVar6 + 0x90) == PlaceHolderScriptInstance::get_script) {
              if (((Object *)plVar6[0x10] == (Object *)0x0) ||
                 (local_a0 = (Object *)plVar6[0x10], cVar2 = RefCounted::reference(), cVar2 == '\0')
                 ) goto LAB_00131dd0;
            }
            else {
              (**(code **)(*plVar6 + 0x90))(&local_a0);
            }
            if (local_a0 != (Object *)0x0) {
              do {
                if (*(Object **)(this + 0x28) == local_a0) {
                  cVar2 = RefCounted::unreference();
                  pOVar8 = local_a0;
                  if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  goto LAB_00131dd3;
                }
                (**(code **)(*(long *)local_a0 + 0x1d8))(&local_98);
                pOVar10 = local_a0;
                pOVar8 = (Object *)CONCAT71(uStack_97,local_98);
                if (pOVar8 != local_a0) {
                  if (pOVar8 == (Object *)0x0) {
                    bVar13 = local_a0 == (Object *)0x0;
                    local_a0 = pOVar8;
                    if (bVar13) break;
LAB_00131eda:
                    cVar2 = RefCounted::unreference();
                    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
                      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                      Memory::free_static(pOVar10,false);
                    }
                  }
                  else {
                    local_a0 = pOVar8;
                    cVar2 = RefCounted::reference();
                    if (cVar2 == '\0') {
                      local_a0 = (Object *)0x0;
                    }
                    if (pOVar10 != (Object *)0x0) goto LAB_00131eda;
                  }
                  pOVar10 = (Object *)CONCAT71(uStack_97,local_98);
                }
                if ((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')
                   ) {
                  pOVar8 = (Object *)CONCAT71(uStack_97,local_98);
                  cVar2 = predelete_handler(pOVar8);
                  if (cVar2 != '\0') {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                }
              } while (local_a0 != (Object *)0x0);
            }
          }
        }
      }
LAB_00131dd0:
      uVar5 = 0;
    }
  }
LAB_00131dd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00132549:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptDataType::~GDScriptDataType() */

void __thiscall GDScriptDataType::~GDScriptDataType(GDScriptDataType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Signal::~Signal() */

void __thiscall Signal::~Signal(Signal *this)

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
/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

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
/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

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
/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

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
/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

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


