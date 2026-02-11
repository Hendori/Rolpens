
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



/* IP::get_singleton() */

undefined8 IP::get_singleton(void)

{
  return singleton;
}



/* IP::create() */

undefined8 IP::create(void)

{
  undefined8 uVar1;
  
  if (singleton == 0) {
    if (_create != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_create)();
      return uVar1;
    }
    _err_print_error("create","core/io/ip.cpp",0x151,"Parameter \"_create\" is null.",0,0);
  }
  else {
    _err_print_error("create","core/io/ip.cpp",0x150,
                     "Condition \"singleton\" is true. Returning: nullptr",
                     "IP singleton already exist.",0,0);
  }
  return 0;
}



/* IP::IP() */

void __thiscall IP::IP(IP *this)

{
  StrRange *pSVar1;
  long lVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010f358;
  singleton = this;
  puVar4 = (undefined4 *)operator_new(0x20d0,"");
  puVar5 = puVar4;
  do {
    *puVar5 = 0;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    *puVar5 = 0;
    puVar6 = *(undefined8 **)(puVar5 + 2);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        pvVar3 = (void *)*puVar6;
        if (pvVar3 == (void *)0x0) goto LAB_00100227;
        if (*(undefined8 **)((long)pvVar3 + 0x28) == puVar6) {
          *puVar6 = *(undefined8 *)((long)pvVar3 + 0x18);
          if (pvVar3 == (void *)puVar6[1]) {
            puVar6[1] = *(undefined8 *)((long)pvVar3 + 0x20);
          }
          if (*(long *)((long)pvVar3 + 0x20) != 0) {
            *(undefined8 *)(*(long *)((long)pvVar3 + 0x20) + 0x18) =
                 *(undefined8 *)((long)pvVar3 + 0x18);
          }
          if (*(long *)((long)pvVar3 + 0x18) != 0) {
            *(undefined8 *)(*(long *)((long)pvVar3 + 0x18) + 0x20) =
                 *(undefined8 *)((long)pvVar3 + 0x20);
          }
          Memory::free_static(pvVar3,false);
          *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        puVar6 = *(undefined8 **)(puVar5 + 2);
      } while (*(int *)(puVar6 + 2) != 0);
      Memory::free_static(puVar6,false);
      *(undefined8 *)(puVar5 + 2) = 0;
    }
LAB_00100227:
    puVar5[6] = 0;
    pSVar1 = (StrRange *)(puVar5 + 4);
    puVar5 = puVar5 + 8;
    String::parse_latin1(pSVar1);
    if (puVar4 + 0x800 == puVar5) {
      *(undefined8 *)(puVar4 + 0x808) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x804) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar4 + 0x812) = 0;
      puVar4[0x804] = 1;
      *(undefined1 (*) [16])(puVar4 + 0x800) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar4 + 0x80a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar4 + 0x80e) = (undefined1  [16])0x0;
      std::condition_variable::condition_variable((condition_variable *)(puVar4 + 0x814));
      *(undefined8 *)(puVar4 + 0x820) = 0;
      Thread::Thread((Thread *)(puVar4 + 0x822));
      *(undefined1 *)(puVar4 + 0x826) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x82a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar4 + 0x82e) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar4 + 0x832) = 2;
      *(undefined4 **)(this + 0x178) = puVar4;
      *(undefined1 *)(puVar4 + 0x826) = 0;
      Thread::start((_func_void_void_ptr *)(*(Settings **)(this + 0x178) + 0x2088),
                    _IP_ResolverPrivate::_thread_function,*(Settings **)(this + 0x178));
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* IP::get_resolve_item_status(int) const */

int __thiscall IP::get_resolve_item_status(IP *this,int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 0x100) {
    iVar1 = *(int *)((long)param_1 * 0x20 + *(long *)(this + 0x178));
    if (iVar1 == 0) {
      _err_print_error("get_resolve_item_status","core/io/ip.cpp",0xc0,
                       "Condition status == IP::RESOLVER_STATUS_NONE",0,0);
    }
  }
  else {
    local_40 = 0;
    local_30 = 0x76;
    local_38 = 
    "Too many concurrent DNS resolver queries (%d, but should be %d at most). Try performing less network requests at once."
    ;
    String::parse_latin1((StrRange *)&local_40);
    vformat<int,IP::_unnamed_type_1_>
              ((CowData<char32_t> *)&local_38,(StrRange *)&local_40,param_1,0x100);
    _err_print_index_error
              ("get_resolve_item_status","core/io/ip.cpp",0xbc,(long)param_1,0x100,"p_id",
               "IP::RESOLVER_MAX_QUERIES",(String *)&local_38,false,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    iVar1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::erase_resolve_item(int) */

void __thiscall IP::erase_resolve_item(IP *this,int param_1)

{
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 0x100) {
    *(undefined4 *)((long)param_1 * 0x20 + *(long *)(this + 0x178)) = 0;
  }
  else {
    local_40 = 0;
    local_30 = 0x76;
    local_38 = 
    "Too many concurrent DNS resolver queries (%d, but should be %d at most). Try performing less network requests at once."
    ;
    String::parse_latin1((StrRange *)&local_40);
    vformat<int,IP::_unnamed_type_1_>
              ((CowData<char32_t> *)&local_38,(StrRange *)&local_40,param_1,0x100);
    _err_print_index_error
              ("erase_resolve_item","core/io/ip.cpp",0xef,(long)param_1,0x100,"p_id",
               "IP::RESOLVER_MAX_QUERIES",(String *)&local_38,false,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, List<IPAddress, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, List<IPAddress,
   DefaultAllocator> > > >::erase(String const&) [clone .isra.0] */

void __thiscall
HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
::erase(HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
        *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
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
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  uint *puVar39;
  long *plVar40;
  uint uVar41;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar36 = CONCAT44(0,uVar4);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = String::hash();
    lVar38 = *(long *)(this + 0x10);
    uVar30 = 1;
    if (uVar29 != 0) {
      uVar30 = uVar29;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar30 * lVar5;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar36;
    lVar32 = SUB168(auVar8 * auVar18,8);
    uVar29 = *(uint *)(lVar38 + lVar32 * 4);
    uVar31 = SUB164(auVar8 * auVar18,8);
    if (uVar29 != 0) {
      uVar41 = 0;
LAB_00100687:
      uVar34 = (ulong)uVar31;
      if (uVar30 == uVar29) {
        cVar28 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar32 * 8) + 0x10),
                                    param_1);
        if (cVar28 != '\0') {
          lVar5 = *(long *)(this + 0x10);
          lVar38 = *(long *)(this + 8);
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar37 = CONCAT44(0,uVar4);
          lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar31 + 1) * lVar32;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar37;
          uVar33 = SUB168(auVar12 * auVar22,8);
          puVar39 = (uint *)(lVar5 + uVar33 * 4);
          uVar29 = SUB164(auVar12 * auVar22,8);
          uVar36 = (ulong)uVar29;
          uVar30 = *puVar39;
          if ((uVar30 != 0) &&
             (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar30 * lVar32, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar37, auVar14._8_8_ = 0,
             auVar14._0_8_ = (ulong)((uVar4 + uVar29) - SUB164(auVar13 * auVar23,8)) * lVar32,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar37, SUB164(auVar14 * auVar24,8) != 0)) {
            while( true ) {
              puVar1 = (uint *)(lVar5 + uVar34 * 4);
              *puVar39 = *puVar1;
              puVar35 = (undefined8 *)(lVar38 + uVar33 * 8);
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)(lVar38 + uVar34 * 8);
              uVar6 = *puVar35;
              *puVar35 = *puVar2;
              *puVar2 = uVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = (ulong)((int)uVar36 + 1) * lVar32;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar37;
              uVar33 = SUB168(auVar17 * auVar27,8);
              puVar39 = (uint *)(lVar5 + uVar33 * 4);
              uVar30 = *puVar39;
              uVar34 = uVar36;
              if ((uVar30 == 0) ||
                 (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar30 * lVar32, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar37, auVar16._8_8_ = 0,
                 auVar16._0_8_ =
                      (ulong)((SUB164(auVar17 * auVar27,8) + uVar4) - SUB164(auVar15 * auVar25,8)) *
                      lVar32, auVar26._8_8_ = 0, auVar26._0_8_ = uVar37,
                 SUB164(auVar16 * auVar26,8) == 0)) break;
              uVar36 = uVar33 & 0xffffffff;
            }
          }
          plVar3 = (long *)(lVar38 + uVar34 * 8);
          *(undefined4 *)(lVar5 + uVar34 * 4) = 0;
          plVar40 = (long *)*plVar3;
          if (*(long **)(this + 0x18) == plVar40) {
            *(long *)(this + 0x18) = *plVar40;
            plVar40 = (long *)*plVar3;
          }
          if (*(long **)(this + 0x20) == plVar40) {
            *(long *)(this + 0x20) = plVar40[1];
            plVar40 = (long *)*plVar3;
          }
          if ((long *)plVar40[1] != (long *)0x0) {
            *(long *)plVar40[1] = *plVar40;
            plVar40 = (long *)*plVar3;
          }
          if (*plVar40 != 0) {
            *(long *)(*plVar40 + 8) = plVar40[1];
            plVar40 = (long *)*plVar3;
          }
          puVar35 = (undefined8 *)plVar40[3];
          if (puVar35 != (undefined8 *)0x0) {
            do {
              pvVar7 = (void *)*puVar35;
              if (pvVar7 == (void *)0x0) {
                if (*(int *)(puVar35 + 2) != 0) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  goto LAB_00100859;
                }
                break;
              }
              if (*(undefined8 **)((long)pvVar7 + 0x28) == puVar35) {
                *puVar35 = *(undefined8 *)((long)pvVar7 + 0x18);
                if (pvVar7 == (void *)puVar35[1]) {
                  puVar35[1] = *(undefined8 *)((long)pvVar7 + 0x20);
                }
                if (*(long *)((long)pvVar7 + 0x20) != 0) {
                  *(undefined8 *)(*(long *)((long)pvVar7 + 0x20) + 0x18) =
                       *(undefined8 *)((long)pvVar7 + 0x18);
                }
                if (*(long *)((long)pvVar7 + 0x18) != 0) {
                  *(undefined8 *)(*(long *)((long)pvVar7 + 0x18) + 0x20) =
                       *(undefined8 *)((long)pvVar7 + 0x20);
                }
                Memory::free_static(pvVar7,false);
                *(int *)(puVar35 + 2) = *(int *)(puVar35 + 2) + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              puVar35 = (undefined8 *)plVar40[3];
            } while (*(int *)(puVar35 + 2) != 0);
            Memory::free_static(puVar35,false);
          }
LAB_00100859:
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar40 + 2));
          Memory::free_static(plVar40,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        lVar38 = *(long *)(this + 0x10);
      }
      uVar41 = uVar41 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(uVar31 + 1) * lVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      lVar32 = SUB168(auVar9 * auVar19,8);
      uVar29 = *(uint *)(lVar38 + lVar32 * 4);
      uVar31 = SUB164(auVar9 * auVar19,8);
      if (uVar29 == 0) {
        return;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar29 * lVar5;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((uVar4 + uVar31) - SUB164(auVar10 * auVar20,8)) * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar36;
      if (SUB164(auVar11 * auVar21,8) < uVar41) {
        return;
      }
      goto LAB_00100687;
    }
  }
  return;
}



/* IP::get_resolve_item_address(int) const */

undefined8 * IP::get_resolve_item_address(int param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  uint in_EDX;
  long lVar6;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 (*local_58) [16];
  undefined8 local_50;
  long local_40;
  
  puVar7 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 0x100) {
    __mutex = (pthread_mutex_t *)(*(long *)(in_RSI + 0x178) + 0x2000);
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    lVar6 = (long)(int)in_EDX * 0x20;
    if (*(int *)(*(long *)(in_RSI + 0x178) + lVar6) == 2) {
      local_58 = (undefined1 (*) [16])0x0;
      plVar1 = *(long **)(lVar6 + *(long *)(in_RSI + 0x178) + 8);
      if ((plVar1 != (long *)0x0) && (puVar8 = (undefined8 *)*plVar1, puVar8 != (undefined8 *)0x0))
      {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
        local_58 = pauVar4;
        do {
          while( true ) {
            puVar5 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
            IPAddress::clear();
            puVar5[5] = 0;
            *(undefined1 (*) [16])(puVar5 + 3) = (undefined1  [16])0x0;
            uVar2 = puVar8[1];
            *puVar5 = *puVar8;
            puVar5[1] = uVar2;
            *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar8 + 2);
            lVar6 = *(long *)(*pauVar4 + 8);
            puVar5[4] = lVar6;
            puVar5[5] = pauVar4;
            if (lVar6 != 0) {
              *(undefined8 **)(lVar6 + 0x18) = puVar5;
            }
            lVar6 = *(long *)*pauVar4;
            *(undefined8 **)(*pauVar4 + 8) = puVar5;
            if (lVar6 != 0) break;
            *(undefined8 **)*pauVar4 = puVar5;
            puVar8 = (undefined8 *)puVar8[3];
            *(int *)pauVar4[1] = *(int *)pauVar4[1] + 1;
            if (puVar8 == (undefined8 *)0x0) goto LAB_00100b51;
          }
          puVar8 = (undefined8 *)puVar8[3];
          *(int *)pauVar4[1] = *(int *)pauVar4[1] + 1;
        } while (puVar8 != (undefined8 *)0x0);
LAB_00100b51:
        for (puVar8 = *(undefined8 **)*pauVar4; puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[3]) {
          if (*(char *)(puVar8 + 2) != '\0') {
            uVar2 = puVar8[1];
            *puVar7 = *puVar8;
            puVar7[1] = uVar2;
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar8 + 2);
            goto LAB_00100b80;
          }
        }
      }
      IPAddress::clear();
LAB_00100b80:
      List<IPAddress,DefaultAllocator>::~List((List<IPAddress,DefaultAllocator> *)&local_58);
    }
    else {
      local_60 = 0;
      if (*(long *)(*(long *)(in_RSI + 0x178) + 0x10 + lVar6) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_60,
                   (CowData *)(*(long *)(in_RSI + 0x178) + 0x10 + lVar6));
      }
      local_68 = 0;
      local_58 = (undefined1 (*) [16])0x1051d0;
      local_50 = 0x24;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>((CowData<char32_t> *)&local_58,&local_68,(CowData<char32_t> *)&local_60);
      _err_print_error("get_resolve_item_address","core/io/ip.cpp",0xcc,
                       (CowData<char32_t> *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      IPAddress::clear();
    }
    pthread_mutex_unlock(__mutex);
  }
  else {
    local_60 = 0;
    String::parse_latin1
              ((String *)&local_60,
               "Too many concurrent DNS resolver queries (%d, but should be %d at most). Try performing less network requests at once."
              );
    vformat<int,IP::_unnamed_type_1_>
              ((CowData<char32_t> *)&local_58,(String *)&local_60,in_EDX,0x100);
    _err_print_index_error
              ("get_resolve_item_address","core/io/ip.cpp",199,(long)(int)in_EDX,0x100,"p_id",
               "IP::RESOLVER_MAX_QUERIES",(String *)&local_58,false,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    IPAddress::clear();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::get_resolve_item_addresses(int) const */

Array * IP::get_resolve_item_addresses(int param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  uint in_EDX;
  long lVar6;
  long in_RSI;
  undefined4 in_register_0000003c;
  Array *this;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined1 (*local_78) [16];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  this = (Array *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 0x100) {
    __mutex = (pthread_mutex_t *)(*(long *)(in_RSI + 0x178) + 0x2000);
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    lVar6 = (long)(int)in_EDX * 0x20;
    if (*(int *)(*(long *)(in_RSI + 0x178) + lVar6) == 2) {
      local_78 = (undefined1 (*) [16])0x0;
      plVar1 = *(long **)(lVar6 + *(long *)(in_RSI + 0x178) + 8);
      if ((plVar1 == (long *)0x0) || (puVar7 = (undefined8 *)*plVar1, puVar7 == (undefined8 *)0x0))
      {
        Array::Array((Array *)&local_70);
      }
      else {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
        local_78 = pauVar4;
        do {
          while( true ) {
            puVar5 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
            IPAddress::clear();
            puVar5[5] = 0;
            *(undefined1 (*) [16])(puVar5 + 3) = (undefined1  [16])0x0;
            uVar2 = puVar7[1];
            *puVar5 = *puVar7;
            puVar5[1] = uVar2;
            *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar7 + 2);
            lVar6 = *(long *)(*pauVar4 + 8);
            puVar5[4] = lVar6;
            puVar5[5] = pauVar4;
            if (lVar6 != 0) {
              *(undefined8 **)(lVar6 + 0x18) = puVar5;
            }
            lVar6 = *(long *)*pauVar4;
            *(undefined8 **)(*pauVar4 + 8) = puVar5;
            if (lVar6 != 0) break;
            *(undefined8 **)*pauVar4 = puVar5;
            puVar7 = (undefined8 *)puVar7[3];
            *(int *)pauVar4[1] = *(int *)pauVar4[1] + 1;
            if (puVar7 == (undefined8 *)0x0) goto LAB_00100e61;
          }
          puVar7 = (undefined8 *)puVar7[3];
          *(int *)pauVar4[1] = *(int *)pauVar4[1] + 1;
        } while (puVar7 != (undefined8 *)0x0);
LAB_00100e61:
        Array::Array((Array *)&local_70);
        for (lVar6 = *(long *)*pauVar4; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x18)) {
          while (*(char *)(lVar6 + 0x10) == '\0') {
            lVar6 = *(long *)(lVar6 + 0x18);
            if (lVar6 == 0) goto LAB_00100ee2;
          }
          IPAddress::operator_cast_to_String((IPAddress *)&local_68);
          Variant::Variant((Variant *)local_58,(String *)&local_68);
          Array::push_back((Variant *)&local_70);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
      }
LAB_00100ee2:
      Array::Array(this,(Array *)&local_70);
      Array::~Array((Array *)&local_70);
      List<IPAddress,DefaultAllocator>::~List((List<IPAddress,DefaultAllocator> *)&local_78);
    }
    else {
      local_70 = 0;
      if (*(long *)(*(long *)(in_RSI + 0x178) + 0x10 + lVar6) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_70,
                   (CowData *)(*(long *)(in_RSI + 0x178) + 0x10 + lVar6));
      }
      local_78 = (undefined1 (*) [16])0x0;
      local_68 = "Resolve of \'%s\' didn\'t complete yet.";
      local_60 = 0x24;
      String::parse_latin1((StrRange *)&local_78);
      vformat<String>((CowData<char32_t> *)&local_68,&local_78,(CowData<char32_t> *)&local_70);
      _err_print_error("get_resolve_item_addresses","core/io/ip.cpp",0xdf,
                       (CowData<char32_t> *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Array::Array(this);
    }
    pthread_mutex_unlock(__mutex);
  }
  else {
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,
               "Too many concurrent DNS resolver queries (%d, but should be %d at most). Try performing less network requests at once."
              );
    vformat<int,IP::_unnamed_type_1_>
              ((CowData<char32_t> *)&local_68,(String *)&local_70,in_EDX,0x100);
    _err_print_index_error
              ("get_resolve_item_addresses","core/io/ip.cpp",0xdb,(long)(int)in_EDX,0x100,"p_id",
               "IP::RESOLVER_MAX_QUERIES",(String *)&local_68,false,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Array::Array(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::_get_local_interfaces() const */

Array * IP::_get_local_interfaces(void)

{
  char cVar1;
  uint uVar2;
  IPAddress *pIVar3;
  void *pvVar4;
  Variant *pVVar5;
  undefined8 *puVar6;
  long *in_RSI;
  Array *in_RDI;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  Dictionary local_b8 [8];
  Array local_b0 [8];
  long local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_58 = 0;
  local_a8 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)in_RDI,(StringName *)0x1b,(Variant *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_80 = 2;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  (**(code **)(*in_RSI + 0x160))();
  if ((long *)local_90._0_8_ != (long *)0x0) {
    plVar8 = (long *)local_90._0_8_;
    do {
      Dictionary::Dictionary(local_b8);
      Variant::Variant((Variant *)&local_58,(String *)(plVar8 + 3));
      Variant::Variant((Variant *)local_78,"name");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      if (pVVar5 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar5 = 0;
        *(int *)pVVar5 = (int)local_58;
        *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
        *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      else {
        Variant::_clear_internal();
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,(String *)(plVar8 + 4));
      Variant::Variant((Variant *)local_78,"friendly");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      if (pVVar5 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar5 = 0;
        *(int *)pVVar5 = (int)local_58;
        *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
        *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,(String *)(plVar8 + 5));
      Variant::Variant((Variant *)local_78,"index");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      if (pVVar5 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar5 = 0;
        *(int *)pVVar5 = (int)local_58;
        *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
        *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      else {
        Variant::_clear_internal();
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      Array::Array(local_b0);
      if ((undefined8 *)plVar8[6] != (undefined8 *)0x0) {
        for (pIVar3 = *(IPAddress **)plVar8[6]; pIVar3 != (IPAddress *)0x0;
            pIVar3 = *(IPAddress **)(pIVar3 + 0x18)) {
          Variant::Variant((Variant *)&local_58,pIVar3);
          Array::push_front((Variant *)local_b0);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      Variant::Variant((Variant *)&local_58,local_b0);
      Variant::Variant((Variant *)local_78,"addresses");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      if (pVVar5 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar5 = 0;
        *(int *)pVVar5 = (int)local_58;
        *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
        *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,local_b8);
      Array::push_front((Variant *)in_RDI);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array(local_b0);
      Dictionary::~Dictionary(local_b8);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if ((void *)local_a0._0_8_ != (void *)0x0) {
    pvVar7 = (void *)local_a0._0_8_;
    if (local_80._4_4_ != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
      if (uVar2 == 0) {
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
      }
      else {
        lVar9 = 0;
        do {
          if (*(int *)(local_a0._8_8_ + lVar9) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
            *(int *)(local_a0._8_8_ + lVar9) = 0;
            puVar6 = *(undefined8 **)((long)pvVar7 + 0x30);
            if (puVar6 != (undefined8 *)0x0) {
              do {
                pvVar4 = (void *)*puVar6;
                if (pvVar4 == (void *)0x0) {
                  if (*(int *)(puVar6 + 2) != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_00101452;
                  }
                  break;
                }
                if (puVar6 == *(undefined8 **)((long)pvVar4 + 0x28)) {
                  *puVar6 = *(undefined8 *)((long)pvVar4 + 0x18);
                  if (pvVar4 == (void *)puVar6[1]) {
                    puVar6[1] = *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  if (*(long *)((long)pvVar4 + 0x20) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + 0x18) =
                         *(undefined8 *)((long)pvVar4 + 0x18);
                  }
                  if (*(long *)((long)pvVar4 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x18) + 0x20) =
                         *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  Memory::free_static(pvVar4,false);
                  *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar6 = *(undefined8 **)((long)pvVar7 + 0x30);
              } while (*(int *)(puVar6 + 2) != 0);
              Memory::free_static(puVar6,false);
            }
LAB_00101452:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x10));
            Memory::free_static(pvVar7,false);
            *(undefined8 *)(local_a0._0_8_ + lVar9 * 2) = 0;
            pvVar7 = (void *)local_a0._0_8_;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar2 * 4);
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001014b4;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static((void *)local_a0._8_8_,false);
  }
LAB_001014b4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::~IP() */

void __thiscall IP::~IP(IP *this)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f358;
  *(undefined1 *)(*(long *)(this + 0x178) + 0x2098) = 1;
  lVar8 = *(long *)(this + 0x178);
  __mutex = (pthread_mutex_t *)(lVar8 + 0x2028);
  iVar5 = pthread_mutex_lock(__mutex);
  if (iVar5 != 0) goto LAB_00101adb;
  piVar7 = (int *)(lVar8 + 0x2080);
  *piVar7 = *piVar7 + 1;
  std::condition_variable::notify_one();
  pthread_mutex_unlock(__mutex);
  Thread::wait_to_finish();
  pvVar3 = *(void **)(this + 0x178);
  pvVar6 = *(void **)((long)pvVar3 + 0x20a8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)((long)pvVar3 + 0x20cc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar3 + 0x20c8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)((long)pvVar3 + 0x20cc) = 0;
        *(undefined1 (*) [16])((long)pvVar3 + 0x20b8) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          piVar7 = (int *)(*(long *)((long)pvVar3 + 0x20b0) + lVar8);
          if (*piVar7 != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar8 * 2);
            *piVar7 = 0;
            puVar9 = *(undefined8 **)((long)pvVar6 + 0x18);
            if (puVar9 != (undefined8 *)0x0) {
              do {
                pvVar4 = (void *)*puVar9;
                if (pvVar4 == (void *)0x0) {
                  if (*(int *)(puVar9 + 2) != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_0010180c;
                  }
                  break;
                }
                if (puVar9 == *(undefined8 **)((long)pvVar4 + 0x28)) {
                  *puVar9 = *(undefined8 *)((long)pvVar4 + 0x18);
                  if (pvVar4 == (void *)puVar9[1]) {
                    puVar9[1] = *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  if (*(long *)((long)pvVar4 + 0x20) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + 0x18) =
                         *(undefined8 *)((long)pvVar4 + 0x18);
                  }
                  if (*(long *)((long)pvVar4 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x18) + 0x20) =
                         *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  Memory::free_static(pvVar4,false);
                  *(int *)(puVar9 + 2) = *(int *)(puVar9 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar9 = *(undefined8 **)((long)pvVar6 + 0x18);
              } while (*(int *)(puVar9 + 2) != 0);
              Memory::free_static(puVar9,false);
            }
LAB_0010180c:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)((long)pvVar3 + 0x20a8);
            *(undefined8 *)((long)pvVar6 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar2 << 2 != lVar8);
        *(undefined4 *)((long)pvVar3 + 0x20cc) = 0;
        *(undefined1 (*) [16])((long)pvVar3 + 0x20b8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010185b;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)((long)pvVar3 + 0x20b0),false);
  }
LAB_0010185b:
  Thread::~Thread((Thread *)((long)pvVar3 + 0x2088));
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)((long)pvVar3 + 0x2028));
  if (iVar5 == 0) {
    if (*(int *)((long)pvVar3 + 0x2084) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)((long)pvVar3 + 0x2050));
    }
    pvVar6 = (void *)((long)pvVar3 + 0x1fe0);
    pthread_mutex_unlock((pthread_mutex_t *)((long)pvVar3 + 0x2028));
    std::condition_variable::~condition_variable((condition_variable *)((long)pvVar3 + 0x2050));
LAB_001018c0:
    if (*(long *)((long)pvVar6 + 0x10) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)((long)pvVar6 + 0x10);
        *(undefined8 *)((long)pvVar6 + 0x10) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    do {
      puVar9 = *(undefined8 **)((long)pvVar6 + 8);
      do {
        if (puVar9 == (undefined8 *)0x0) {
joined_r0x001019e8:
          if (pvVar6 == pvVar3) {
            Memory::free_static(pvVar6,false);
            Object::~Object((Object *)this);
            return;
          }
          pvVar6 = (void *)((long)pvVar6 + -0x20);
          goto LAB_001018c0;
        }
        pvVar4 = (void *)*puVar9;
        if (pvVar4 == (void *)0x0) {
          if (*(int *)(puVar9 + 2) == 0) {
            Memory::free_static(puVar9,false);
          }
          else {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
          }
          goto joined_r0x001019e8;
        }
        if (puVar9 == *(undefined8 **)((long)pvVar4 + 0x28)) {
          *puVar9 = *(undefined8 *)((long)pvVar4 + 0x18);
          if (pvVar4 == (void *)puVar9[1]) {
            puVar9[1] = *(undefined8 *)((long)pvVar4 + 0x20);
          }
          if (*(long *)((long)pvVar4 + 0x20) != 0) {
            *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + 0x18) =
                 *(undefined8 *)((long)pvVar4 + 0x18);
          }
          if (*(long *)((long)pvVar4 + 0x18) != 0) {
            *(undefined8 *)(*(long *)((long)pvVar4 + 0x18) + 0x20) =
                 *(undefined8 *)((long)pvVar4 + 0x20);
          }
          Memory::free_static(pvVar4,false);
          *(int *)(puVar9 + 2) = *(int *)(puVar9 + 2) + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        puVar9 = *(undefined8 **)((long)pvVar6 + 8);
      } while (*(int *)(puVar9 + 2) != 0);
      Memory::free_static(puVar9,false);
      *(undefined8 *)((long)pvVar6 + 8) = 0;
    } while( true );
  }
LAB_00101adb:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar5);
}



/* IP::~IP() */

void __thiscall IP::~IP(IP *this)

{
  ~IP(this);
  operator_delete(this,0x180);
  return;
}



/* IP::get_local_addresses(List<IPAddress, DefaultAllocator>*) const */

void __thiscall IP::get_local_addresses(IP *this,List *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auStack_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (undefined1  [16])0x0;
  local_40 = 2;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0x160))(this,auStack_68);
  uVar5 = local_40;
  for (puVar8 = (undefined8 *)local_50._0_8_; local_40 = uVar5, puVar8 != (undefined8 *)0x0;
      puVar8 = (undefined8 *)*puVar8) {
    if (((long *)puVar8[6] != (long *)0x0) &&
       (puVar11 = *(undefined8 **)puVar8[6], puVar11 != (undefined8 *)0x0)) {
      if (*(long *)param_1 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          puVar7 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
          IPAddress::clear();
          puVar7[5] = 0;
          *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
          uVar2 = puVar11[1];
          *puVar7 = *puVar11;
          puVar7[1] = uVar2;
          *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(puVar11 + 2);
          uVar2 = **(undefined8 **)param_1;
          puVar7[5] = *(undefined8 **)param_1;
          plVar3 = *(long **)param_1;
          puVar7[3] = uVar2;
          if (*plVar3 != 0) {
            *(undefined8 **)(*plVar3 + 0x20) = puVar7;
          }
          *plVar3 = (long)puVar7;
          if (plVar3[1] != 0) break;
          plVar3[1] = (long)puVar7;
          puVar11 = (undefined8 *)puVar11[3];
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          if (puVar11 == (undefined8 *)0x0) goto LAB_00101c38;
        }
        puVar11 = (undefined8 *)puVar11[3];
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      } while (puVar11 != (undefined8 *)0x0);
    }
LAB_00101c38:
    uVar5 = local_40;
  }
  if ((void *)local_60._0_8_ != (void *)0x0) {
    local_40._4_4_ = (int)(uVar5 >> 0x20);
    bVar12 = local_40._4_4_ != 0;
    pvVar10 = (void *)local_60._0_8_;
    if (bVar12) {
      uVar1 = *(uint *)(hash_table_size_primes + (uVar5 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_40 = uVar5 & 0xffffffff;
        local_50 = (undefined1  [16])0x0;
      }
      else {
        lVar9 = 0;
        do {
          if (*(int *)(local_60._8_8_ + lVar9) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar9 * 2);
            *(int *)(local_60._8_8_ + lVar9) = 0;
            puVar8 = *(undefined8 **)((long)pvVar10 + 0x30);
            if (puVar8 != (undefined8 *)0x0) {
              do {
                pvVar4 = (void *)*puVar8;
                if (pvVar4 == (void *)0x0) {
                  if (*(int *)(puVar8 + 2) != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_00101d15;
                  }
                  break;
                }
                if (puVar8 == *(undefined8 **)((long)pvVar4 + 0x28)) {
                  *puVar8 = *(undefined8 *)((long)pvVar4 + 0x18);
                  if (pvVar4 == (void *)puVar8[1]) {
                    puVar8[1] = *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  if (*(long *)((long)pvVar4 + 0x20) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + 0x18) =
                         *(undefined8 *)((long)pvVar4 + 0x18);
                  }
                  if (*(long *)((long)pvVar4 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar4 + 0x18) + 0x20) =
                         *(undefined8 *)((long)pvVar4 + 0x20);
                  }
                  Memory::free_static(pvVar4,false);
                  *(int *)(puVar8 + 2) = *(int *)(puVar8 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar8 = *(undefined8 **)((long)pvVar10 + 0x30);
              } while (*(int *)(puVar8 + 2) != 0);
              Memory::free_static(puVar8,false);
            }
LAB_00101d15:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            *(undefined8 *)(local_60._0_8_ + lVar9 * 2) = 0;
            pvVar10 = (void *)local_60._0_8_;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar1 * 4);
        local_40 = local_40 & 0xffffffff;
        local_50 = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00101d77;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static((void *)local_60._8_8_,false);
  }
LAB_00101d77:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::resolve_hostname_queue_item(String const&, IP::Type) */

int __thiscall IP::resolve_hostname_queue_item(IP *this,CowData *param_1,undefined4 param_3)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  List *pLVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  String local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x178);
  iVar14 = pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x2000));
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar14);
  }
  piVar17 = *(int **)(this + 0x178);
  iVar14 = 0;
  do {
    if (*piVar17 == 0) {
      itos((long)&local_48);
      String::operator+(local_50,(String *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar24 = *(long *)(this + 0x178);
      lVar18 = (long)iVar14 * 0x20;
      if (*(long *)(lVar24 + 0x10 + lVar18) != *(long *)param_1) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(lVar24 + 0x10 + lVar18),param_1);
        lVar24 = *(long *)(this + 0x178);
      }
      lVar4 = *(long *)(lVar24 + 0x20a8);
      *(undefined4 *)(lVar24 + 0x18 + (long)iVar14 * 0x20) = param_3;
      if ((lVar4 == 0) || (*(int *)(lVar24 + 0x20cc) == 0)) goto LAB_00101f39;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar24 + 0x20c8) * 4);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar24 + 0x20c8) * 8);
      uVar16 = String::hash();
      uVar26 = CONCAT44(0,uVar1);
      uVar20 = 1;
      if (uVar16 != 0) {
        uVar20 = uVar16;
      }
      lVar25 = *(long *)(lVar24 + 0x20b0);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar20 * lVar4;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar26;
      lVar21 = SUB168(auVar5 * auVar9,8);
      uVar16 = *(uint *)(lVar25 + lVar21 * 4);
      iVar15 = SUB164(auVar5 * auVar9,8);
      if (uVar16 == 0) goto LAB_00102209;
      uVar22 = 0;
      goto LAB_00102107;
    }
    iVar14 = iVar14 + 1;
    piVar17 = piVar17 + 8;
  } while (iVar14 != 0x100);
  iVar14 = -1;
  _err_print_error("resolve_hostname_queue_item","core/io/ip.cpp",0xa4,"Out of resolver queries",0,1
                  );
  goto LAB_00102192;
  while( true ) {
    uVar22 = uVar22 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)(iVar15 + 1) * lVar4;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar26;
    lVar21 = SUB168(auVar6 * auVar10,8);
    uVar16 = *(uint *)(lVar25 + lVar21 * 4);
    iVar15 = SUB164(auVar6 * auVar10,8);
    if ((uVar16 == 0) ||
       (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar4, auVar11._8_8_ = 0,
       auVar11._0_8_ = uVar26, auVar8._8_8_ = 0,
       auVar8._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar7 * auVar11,8)) * lVar4,
       auVar12._8_8_ = 0, auVar12._0_8_ = uVar26, SUB164(auVar8 * auVar12,8) < uVar22)) break;
LAB_00102107:
    if (uVar16 == uVar20) {
      cVar13 = String::operator==((String *)
                                  (*(long *)(*(long *)(lVar24 + 0x20a8) + lVar21 * 8) + 0x10),
                                  local_50);
      if (cVar13 != '\0') {
        pLVar19 = (List *)HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
                          ::operator[]((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
                                        *)(*(long *)(this + 0x178) + 0x20a0),local_50);
        List<IPAddress,DefaultAllocator>::operator=
                  ((List<IPAddress,DefaultAllocator> *)(*(long *)(this + 0x178) + 8 + lVar18),
                   pLVar19);
        *(undefined4 *)(*(long *)(this + 0x178) + lVar18) = 2;
        goto LAB_00102188;
      }
      lVar25 = *(long *)(lVar24 + 0x20b0);
    }
  }
LAB_00102209:
  lVar24 = *(long *)(this + 0x178);
LAB_00101f39:
  local_48 = 0;
  lVar24 = lVar24 + lVar18;
  puVar23 = *(undefined8 **)(lVar24 + 8);
  if (puVar23 != (undefined8 *)0x0) {
    do {
      pvVar3 = (void *)*puVar23;
      if (pvVar3 == (void *)0x0) goto LAB_00101fbb;
      if (puVar23 == *(undefined8 **)((long)pvVar3 + 0x28)) {
        *puVar23 = *(undefined8 *)((long)pvVar3 + 0x18);
        if (pvVar3 == (void *)puVar23[1]) {
          puVar23[1] = *(undefined8 *)((long)pvVar3 + 0x20);
        }
        if (*(long *)((long)pvVar3 + 0x20) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar3 + 0x20) + 0x18) =
               *(undefined8 *)((long)pvVar3 + 0x18);
        }
        if (*(long *)((long)pvVar3 + 0x18) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar3 + 0x18) + 0x20) =
               *(undefined8 *)((long)pvVar3 + 0x20);
        }
        Memory::free_static(pvVar3,false);
        *(int *)(puVar23 + 2) = *(int *)(puVar23 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar23 = *(undefined8 **)(lVar24 + 8);
    } while (*(int *)(puVar23 + 2) != 0);
    Memory::free_static(puVar23,false);
  }
LAB_00101fbb:
  *(undefined8 *)(lVar24 + 8) = 0;
  List<IPAddress,DefaultAllocator>::~List((List<IPAddress,DefaultAllocator> *)&local_48);
  *(undefined4 *)(*(long *)(this + 0x178) + lVar18) = 1;
  cVar13 = Thread::is_started();
  if (cVar13 == '\0') {
    _IP_ResolverPrivate::resolve_queues(*(_IP_ResolverPrivate **)(this + 0x178));
  }
  else {
    lVar24 = *(long *)(this + 0x178);
    __mutex = (pthread_mutex_t *)(lVar24 + 0x2028);
    iVar15 = pthread_mutex_lock(__mutex);
    if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar15);
    }
    piVar17 = (int *)(lVar24 + 0x2080);
    *piVar17 = *piVar17 + 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock(__mutex);
  }
LAB_00102188:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
LAB_00102192:
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x2000));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}



/* IP::clear_cache(String const&) */

void __thiscall IP::clear_cache(IP *this,String *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  String local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x178);
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x2000));
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  lVar3 = *(long *)(this + 0x178);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    if ((*(long *)(lVar3 + 0x20a8) != 0) && (*(int *)(lVar3 + 0x20cc) != 0)) {
      lVar9 = 0;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x20c8) * 4);
      if (uVar1 != 0) {
        do {
          piVar7 = (int *)(*(long *)(lVar3 + 0x20b0) + lVar9);
          if (*piVar7 != 0) {
            *piVar7 = 0;
            pvVar4 = *(void **)(*(long *)(lVar3 + 0x20a8) + lVar9 * 2);
            puVar8 = *(undefined8 **)((long)pvVar4 + 0x18);
            if (puVar8 != (undefined8 *)0x0) {
              do {
                pvVar5 = (void *)*puVar8;
                if (pvVar5 == (void *)0x0) {
                  if (*(int *)(puVar8 + 2) != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_001023a3;
                  }
                  break;
                }
                if (puVar8 == *(undefined8 **)((long)pvVar5 + 0x28)) {
                  *puVar8 = *(undefined8 *)((long)pvVar5 + 0x18);
                  if (pvVar5 == (void *)puVar8[1]) {
                    puVar8[1] = *(undefined8 *)((long)pvVar5 + 0x20);
                  }
                  if (*(long *)((long)pvVar5 + 0x20) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar5 + 0x20) + 0x18) =
                         *(undefined8 *)((long)pvVar5 + 0x18);
                  }
                  if (*(long *)((long)pvVar5 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar5 + 0x18) + 0x20) =
                         *(undefined8 *)((long)pvVar5 + 0x20);
                  }
                  Memory::free_static(pvVar5,false);
                  *(int *)(puVar8 + 2) = *(int *)(puVar8 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar8 = *(undefined8 **)((long)pvVar4 + 0x18);
              } while (*(int *)(puVar8 + 2) != 0);
              Memory::free_static(puVar8,false);
            }
LAB_001023a3:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(*(long *)(lVar3 + 0x20a8) + lVar9 * 2) = 0;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(lVar3 + 0x20cc) = 0;
      *(undefined1 (*) [16])(lVar3 + 0x20b8) = (undefined1  [16])0x0;
    }
  }
  else {
    itos((long)local_48);
    String::operator+(local_50,(String *)local_48);
    CowData<char32_t>::_unref(local_48);
    HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
    ::erase((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
             *)(lVar3 + 0x20a0),local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    lVar3 = *(long *)(this + 0x178);
    itos((long)local_48);
    String::operator+(local_50,(String *)local_48);
    CowData<char32_t>::_unref(local_48);
    HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
    ::erase((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
             *)(lVar3 + 0x20a0),local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    lVar3 = *(long *)(this + 0x178);
    itos((long)local_48);
    String::operator+(local_50,(String *)local_48);
    CowData<char32_t>::_unref(local_48);
    HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
    ::erase((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
             *)(lVar3 + 0x20a0),local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    lVar3 = *(long *)(this + 0x178);
    itos((long)local_48);
    String::operator+(local_50,(String *)local_48);
    CowData<char32_t>::_unref(local_48);
    HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
    ::erase((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
             *)(lVar3 + 0x20a0),local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x2000));
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



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
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
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* IP::_bind_methods() */

void IP::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 local_120;
  long *local_118;
  long local_110;
  long local_108;
  CowData<char32_t> local_100 [8];
  long *local_f8;
  CowData<char32_t> local_e8 [16];
  undefined *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_98 = (Variant *)&_LC56;
  pcStack_90 = "ip_type";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_90;
  uVar8 = (uint)(Variant *)&local_78;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"resolve_hostname",uVar8);
  Variant::Variant((Variant *)&local_78,3);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<IP,IPAddress,String_const&,IP::Type>(resolve_hostname);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = &_LC56;
  pcStack_b0 = "ip_type";
  auStack_70._0_8_ = &pcStack_b0;
  local_78 = (Variant **)&local_b8;
  D_METHODP((char *)&local_108,(char ***)"resolve_hostname_addresses",uVar8);
  Variant::Variant((Variant *)&local_78,3);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<IP,Vector<String>,String_const&,IP::Type>(resolve_hostname_addresses);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_c8 = 0;
  local_d8 = &_LC56;
  pcStack_d0 = "ip_type";
  auStack_70._0_8_ = &pcStack_d0;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_108,(char ***)"resolve_hostname_queue_item",uVar8);
  Variant::Variant((Variant *)&local_78,3);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<IP,int,String_const&,IP::Type>(resolve_hostname_queue_item);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC60;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"get_resolve_item_status",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,IP::ResolverStatus,int>(get_resolve_item_status);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC60;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"get_resolve_item_address",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,IPAddress,int>(get_resolve_item_address);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC60;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"get_resolve_item_addresses",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,Array,int>(get_resolve_item_addresses);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC60;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"erase_resolve_item",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,int>(erase_resolve_item);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_108,(char ***)"get_local_addresses",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,Vector<String>>(_get_local_addresses);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_108,(char ***)"get_local_interfaces",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<IP,TypedArray<Dictionary>>(_get_local_interfaces);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x104fcc;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_108,(char ***)"clear_cache",uVar8);
  Variant::Variant((Variant *)&local_78,"");
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<IP,String_const&>(clear_cache);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_108,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      lVar6 = 0;
      local_f8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"RESOLVER_STATUS_NONE",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"RESOLVER_STATUS_NONE");
  GetTypeInfo<IP::ResolverStatus,void>::get_class_info
            ((GetTypeInfo<IP::ResolverStatus,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,0,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"RESOLVER_STATUS_WAITING",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"RESOLVER_STATUS_WAITING");
  GetTypeInfo<IP::ResolverStatus,void>::get_class_info
            ((GetTypeInfo<IP::ResolverStatus,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,1,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"RESOLVER_STATUS_DONE",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"RESOLVER_STATUS_DONE");
  GetTypeInfo<IP::ResolverStatus,void>::get_class_info
            ((GetTypeInfo<IP::ResolverStatus,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,2,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"RESOLVER_STATUS_ERROR",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"RESOLVER_STATUS_ERROR");
  GetTypeInfo<IP::ResolverStatus,void>::get_class_info
            ((GetTypeInfo<IP::ResolverStatus,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,3,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"RESOLVER_MAX_QUERIES",false);
  local_118 = (long *)0x0;
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"IP");
  StringName::StringName((StringName *)&local_110,(String *)&local_120,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_110,(StringName *)&local_118,(StringName *)&local_108,0x100,false)
  ;
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') &&
     (((local_118 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_108 != 0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"RESOLVER_INVALID_ID",false);
  local_118 = (long *)0x0;
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"IP");
  StringName::StringName((StringName *)&local_110,(String *)&local_120,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_110,(StringName *)&local_118,(StringName *)&local_108,-1,false);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if (((StringName::configured != '\0') &&
      ((local_118 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_108 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"TYPE_NONE",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"TYPE_NONE");
  GetTypeInfo<IP::Type,void>::get_class_info((GetTypeInfo<IP::Type,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,0,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"TYPE_IPV4",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"TYPE_IPV4");
  GetTypeInfo<IP::Type,void>::get_class_info((GetTypeInfo<IP::Type,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,1,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"TYPE_IPV6",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"TYPE_IPV6");
  GetTypeInfo<IP::Type,void>::get_class_info((GetTypeInfo<IP::Type,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,2,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_110,"TYPE_ANY",false);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"TYPE_ANY");
  GetTypeInfo<IP::Type,void>::get_class_info((GetTypeInfo<IP::Type,void> *)&local_108);
  local_118 = local_f8;
  local_f8 = (long *)0x0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"IP");
  StringName::StringName((StringName *)&local_108,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_108,(StringName *)&local_118,(StringName *)&local_110,3,false);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* IP::resolve_hostname_addresses(String const&, IP::Type) */

Vector<String> *
IP::resolve_hostname_addresses
          (Vector<String> *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  int iVar15;
  uint uVar16;
  pthread_mutex_t *__mutex;
  List *pLVar17;
  List<IPAddress,DefaultAllocator> *this;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  long *local_58;
  String local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  itos((long)&local_48);
  String::operator+(local_50,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  __mutex = (pthread_mutex_t *)(param_2[0x2f] + 0x2000);
  iVar15 = pthread_mutex_lock(__mutex);
  if (iVar15 == 0) {
    lVar3 = param_2[0x2f];
    if ((*(long *)(lVar3 + 0x20a8) != 0) && (*(int *)(lVar3 + 0x20cc) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x20c8) * 4);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0x20c8) * 8);
      uVar16 = String::hash();
      uVar22 = CONCAT44(0,uVar2);
      uVar18 = 1;
      if (uVar16 != 0) {
        uVar18 = uVar16;
      }
      lVar21 = *(long *)(lVar3 + 0x20b0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar18 * lVar5;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      lVar19 = SUB168(auVar6 * auVar10,8);
      uVar16 = *(uint *)(lVar21 + lVar19 * 4);
      iVar15 = SUB164(auVar6 * auVar10,8);
      if (uVar16 != 0) {
        uVar20 = 0;
        do {
          if (uVar16 == uVar18) {
            cVar14 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar3 + 0x20a8) + lVar19 * 8) + 0x10),
                                        local_50);
            if (cVar14 != '\0') {
              pLVar17 = (List *)HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
                                ::operator[]((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
                                              *)(param_2[0x2f] + 0x20a0),local_50);
              List<IPAddress,DefaultAllocator>::operator=
                        ((List<IPAddress,DefaultAllocator> *)&local_58,pLVar17);
              goto LAB_0010407f;
            }
            lVar21 = *(long *)(lVar3 + 0x20b0);
          }
          uVar20 = uVar20 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(iVar15 + 1) * lVar5;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar22;
          lVar19 = SUB168(auVar7 * auVar11,8);
          uVar16 = *(uint *)(lVar21 + lVar19 * 4);
          iVar15 = SUB164(auVar7 * auVar11,8);
        } while ((uVar16 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar16 * lVar5, auVar12._8_8_ = 0,
                auVar12._0_8_ = uVar22, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar2 + iVar15) - SUB164(auVar8 * auVar12,8)) * lVar5,
                auVar13._8_8_ = 0, auVar13._0_8_ = uVar22, uVar20 <= SUB164(auVar9 * auVar13,8)));
      }
    }
    pthread_mutex_unlock(__mutex);
    (**(code **)(*param_2 + 0x158))(param_2,(List *)&local_58,param_3,param_4);
    iVar15 = pthread_mutex_lock(__mutex);
    if (iVar15 == 0) {
      if ((local_58 != (long *)0x0) && ((int)local_58[2] != 0)) {
        this = (List<IPAddress,DefaultAllocator> *)
               HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
               ::operator[]((HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
                             *)(param_2[0x2f] + 0x20a0),local_50);
        List<IPAddress,DefaultAllocator>::operator=(this,(List *)&local_58);
      }
LAB_0010407f:
      pthread_mutex_unlock(__mutex);
      *(undefined8 *)(param_1 + 8) = 0;
      if (local_58 != (long *)0x0) {
        for (lVar3 = *local_58; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
          IPAddress::operator_cast_to_String((IPAddress *)&local_48);
          Vector<String>::push_back(param_1);
          lVar5 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      if (local_58 != (long *)0x0) {
        do {
          plVar1 = local_58;
          pvVar4 = (void *)*local_58;
          if (pvVar4 == (void *)0x0) {
            if ((int)local_58[2] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00104170;
            }
            break;
          }
          if (*(long **)((long)pvVar4 + 0x28) == local_58) {
            *local_58 = *(long *)((long)pvVar4 + 0x18);
            if (pvVar4 == (void *)local_58[1]) {
              local_58[1] = *(long *)((long)pvVar4 + 0x20);
            }
            if (*(long *)((long)pvVar4 + 0x20) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + 0x18) =
                   *(undefined8 *)((long)pvVar4 + 0x18);
            }
            if (*(long *)((long)pvVar4 + 0x18) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x18) + 0x20) =
                   *(undefined8 *)((long)pvVar4 + 0x20);
            }
            Memory::free_static(pvVar4,false);
            *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
        } while ((int)local_58[2] != 0);
        Memory::free_static(local_58,false);
      }
LAB_00104170:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar15);
}



/* IP::resolve_hostname(String const&, IP::Type) */

IPAddress * IP::resolve_hostname(IPAddress *param_1)

{
  long lVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  String *local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  resolve_hostname_addresses(auStack_28);
  if ((local_20[0] == (String *)0x0) || (lVar1 = *(long *)(local_20[0] + -8), lVar1 == 0)) {
    IPAddress::clear();
  }
  else {
    if (lVar1 < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar1,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    IPAddress::IPAddress(param_1,local_20[0]);
  }
  CowData<String>::_unref((CowData<String> *)local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104514) */
/* WARNING: Removing unreachable block (ram,0x001045a0) */
/* WARNING: Removing unreachable block (ram,0x001045a7) */
/* WARNING: Removing unreachable block (ram,0x00104521) */
/* WARNING: Removing unreachable block (ram,0x001045e0) */
/* WARNING: Removing unreachable block (ram,0x0010452b) */
/* WARNING: Removing unreachable block (ram,0x001045d0) */
/* WARNING: Removing unreachable block (ram,0x0010453d) */
/* WARNING: Removing unreachable block (ram,0x00104546) */
/* WARNING: Removing unreachable block (ram,0x0010454e) */
/* WARNING: Removing unreachable block (ram,0x00104557) */
/* WARNING: Removing unreachable block (ram,0x0010455f) */
/* WARNING: Removing unreachable block (ram,0x0010456a) */
/* WARNING: Removing unreachable block (ram,0x00104576) */
/* WARNING: Removing unreachable block (ram,0x001044b0) */
/* WARNING: Removing unreachable block (ram,0x001044b9) */
/* WARNING: Removing unreachable block (ram,0x001044c0) */
/* WARNING: Removing unreachable block (ram,0x001044e0) */
/* WARNING: Removing unreachable block (ram,0x001044e8) */
/* WARNING: Removing unreachable block (ram,0x00104501) */
/* WARNING: Removing unreachable block (ram,0x0010450a) */
/* WARNING: Removing unreachable block (ram,0x0010450f) */
/* IP::_get_local_addresses() const */

void IP::_get_local_addresses(void)

{
  long lVar1;
  long lVar2;
  long *in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *in_RSI;
  *(undefined8 *)(in_RDI + 8) = 0;
  (**(code **)(lVar2 + 0x150))();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* IP::is_class_ptr(void*) const */

uint __thiscall IP::is_class_ptr(IP *this,void *param_1)

{
  return (uint)CONCAT71(0x10f8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* IP::_getv(StringName const&, Variant&) const */

undefined8 IP::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IP::_setv(StringName const&, Variant const&) */

undefined8 IP::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IP::_validate_propertyv(PropertyInfo&) const */

void IP::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* IP::_property_can_revertv(StringName const&) const */

undefined8 IP::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* IP::_property_get_revertv(StringName const&, Variant&) const */

undefined8 IP::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IP::_notificationv(int, bool) */

void IP::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Dictionary>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Dictionary>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Array, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Array,int>::_gen_argument_type(MethodBindTRC<Array,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe6) + 0x1c;
}



/* MethodBindTRC<Array, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Array,int>::get_argument_meta(MethodBindTRC<Array,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<IPAddress, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<IPAddress,int>::_gen_argument_type(MethodBindTRC<IPAddress,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTRC<IPAddress, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<IPAddress,int>::get_argument_meta(MethodBindTRC<IPAddress,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<IP::ResolverStatus, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<IP::ResolverStatus,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<IP::ResolverStatus, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<IP::ResolverStatus,int>::get_argument_meta
          (MethodBindTRC<IP::ResolverStatus,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<int, String const&, IP::Type>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<int,String_const&,IP::Type>::_gen_argument_type
          (MethodBindTR<int,String_const&,IP::Type> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<int, String const&, IP::Type>::get_argument_meta(int) const */

uint __thiscall
MethodBindTR<int,String_const&,IP::Type>::get_argument_meta
          (MethodBindTR<int,String_const&,IP::Type> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::_gen_argument_type
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\"';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 2U) + 2;
  }
  return cVar1;
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<String>,String_const&,IP::Type>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::_gen_argument_type
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this,int param_1)

{
  return (param_1 != 1) * '\x02' + '\x02';
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::get_argument_meta(int) const */

undefined8 MethodBindTR<IPAddress,String_const&,IP::Type>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f530;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f530;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<int,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f590;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<int,String_const&,IP::Type> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f590;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<IP::ResolverStatus, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<IP::ResolverStatus,int>::~MethodBindTRC(MethodBindTRC<IP::ResolverStatus,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<IP::ResolverStatus, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<IP::ResolverStatus,int>::~MethodBindTRC(MethodBindTRC<IP::ResolverStatus,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f650;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f650;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f710;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f710;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f770;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f770;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f830;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f830;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* IP::_get_class_namev() const */

undefined8 * IP::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00104c03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"IP");
      goto LAB_00104c6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"IP");
LAB_00104c6e:
  return &_get_class_namev()::_class_name_static;
}



/* IP::get_class() const */

void IP::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* List<IPAddress, DefaultAllocator>::~List() */

undefined8 __thiscall
List<IPAddress,DefaultAllocator>::~List(List<IPAddress,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_18;
  
  puVar3 = *(undefined8 **)this;
  if (puVar3 == (undefined8 *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*puVar3;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar3 + 2) != 0) {
        uVar2 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar2;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x28) == puVar3) {
      *puVar3 = *(undefined8 *)((long)pvVar1 + 0x18);
      if (pvVar1 == (void *)puVar3[1]) {
        puVar3[1] = *(undefined8 *)((long)pvVar1 + 0x20);
      }
      if (*(long *)((long)pvVar1 + 0x20) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x20) + 0x18) =
             *(undefined8 *)((long)pvVar1 + 0x18);
      }
      if (*(long *)((long)pvVar1 + 0x18) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x18) + 0x20) =
             *(undefined8 *)((long)pvVar1 + 0x20);
      }
      Memory::free_static(pvVar1,false);
      *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar3 = *(undefined8 **)this;
  } while (*(int *)(puVar3 + 2) != 0);
  uVar2 = Memory::free_static(puVar3,false);
  return uVar2;
}



/* List<IPAddress, DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<IPAddress, DefaultAllocator>
   const&) */

void __thiscall
List<IPAddress,DefaultAllocator>::operator=(List<IPAddress,DefaultAllocator> *this,List *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)this;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*puVar6;
      if (pvVar1 == (void *)0x0) goto LAB_001054b0;
      if (*(undefined8 **)((long)pvVar1 + 0x28) == puVar6) {
        *puVar6 = *(undefined8 *)((long)pvVar1 + 0x18);
        if (pvVar1 == (void *)puVar6[1]) {
          puVar6[1] = *(undefined8 *)((long)pvVar1 + 0x20);
        }
        if (*(long *)((long)pvVar1 + 0x20) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x20) + 0x18) =
               *(undefined8 *)((long)pvVar1 + 0x18);
        }
        if (*(long *)((long)pvVar1 + 0x18) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x18) + 0x20) =
               *(undefined8 *)((long)pvVar1 + 0x20);
        }
        Memory::free_static(pvVar1,false);
        *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar6 = *(undefined8 **)this;
    } while (*(int *)(puVar6 + 2) != 0);
    Memory::free_static(puVar6,false);
    *(undefined8 *)this = 0;
  }
  puVar6 = (undefined8 *)0x0;
LAB_001054b0:
  if ((*(long **)param_1 != (long *)0x0) &&
     (puVar7 = (undefined8 *)**(long **)param_1, puVar7 != (undefined8 *)0x0)) {
    if (puVar6 == (undefined8 *)0x0) {
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar6 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
        IPAddress::clear();
        puVar6[5] = 0;
        *(undefined1 (*) [16])(puVar6 + 3) = (undefined1  [16])0x0;
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar7 + 2);
        lVar2 = *(long *)this;
        puVar6[4] = *(undefined8 *)(lVar2 + 8);
        puVar6[5] = lVar2;
        plVar3 = *(long **)this;
        if (plVar3[1] != 0) {
          *(undefined8 **)(plVar3[1] + 0x18) = puVar6;
        }
        plVar3[1] = (long)puVar6;
        if (*plVar3 == 0) break;
        puVar7 = (undefined8 *)puVar7[3];
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
      }
      *plVar3 = (long)puVar6;
      puVar7 = (undefined8 *)puVar7[3];
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    } while (puVar7 != (undefined8 *)0x0);
  }
  return;
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



/* MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  Variant::get_type_name((CowData<char32_t> *)&local_48,0x1b);
  local_50 = 0;
  *puVar1 = 0x1c;
  puVar1[6] = 0x1f;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_48 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_48);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_38,(String *)(puVar1 + 8),false);
      if (*(long *)(puVar1 + 4) == local_38) {
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar1 + 4) = local_38;
      }
      goto LAB_001056f5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_40);
LAB_001056f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105940) */
/* String vformat<int, IP::{unnamed type#1}>(IP::{unnamed type#1} const&, int const, IP::{unnamed
   type#1} const) */

undefined8 *
vformat<int,IP::_unnamed_type_1_>(undefined8 *param_1,bool *param_2,int param_3,int param_4)

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
  String::sprintf((CowData<char32_t> *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00105bf8) */
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
  String::sprintf((CowData<char32_t> *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, List<IPAddress, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, List<IPAddress,
   DefaultAllocator> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
::operator[](HashMap<String,List<IPAddress,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<IPAddress,DefaultAllocator>>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0010651c:
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
LAB_00106405:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_00106415:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar53 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar51 != 0) {
          uVar40 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar51 == uVar40) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                List<IPAddress,DefaultAllocator>::operator=
                          ((List<IPAddress,DefaultAllocator> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18),
                           (List *)&local_70);
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                goto LAB_001062b5;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar55;
      goto LAB_00105ee7;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00105ee7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00106415;
LAB_00105f0d:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001062b5;
    }
    uVar41 = (ulong)(uVar55 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar55 != 0) {
          uVar50 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar40);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar42;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29,8);
      lVar53 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar40 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar40 == uVar39) {
            cVar38 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_001062c1;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_0010651c;
      goto LAB_00106405;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_00105ee7:
    if ((float)uVar48 * __LC30 < (float)(iVar45 + 1)) goto LAB_00105f0d;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar4 = local_58;
    uVar42 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar49;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  List<IPAddress,DefaultAllocator>::~List((List<IPAddress,DefaultAllocator> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar39 != 0) {
    uVar55 = uVar39;
  }
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar45 + uVar39) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar50 = SUB164(auVar11 * auVar27,8);
    pauVar56 = pauVar37;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar56;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001062b5:
  List<IPAddress,DefaultAllocator>::~List((List<IPAddress,DefaultAllocator> *)&local_70);
LAB_001062c1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::is_class(String const&) const */

undefined8 __thiscall IP::is_class(IP *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010674f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010674f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00106803;
  }
  cVar6 = String::operator==(param_1,"IP");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106803;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00106803:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x22;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001070b5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001070b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void IP::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC0;
  local_98 = 0;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001072ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001072ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001072cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001072cf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"IP",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001074d9;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001075d5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001075d5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001074d9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<IP, IPAddress, String const&, IP::Type>(IPAddress (IP::*)(String
   const&, IP::Type)) */

MethodBind *
create_method_bind<IP,IPAddress,String_const&,IP::Type>(_func_IPAddress_String_ptr_Type *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_IPAddress_String_ptr_Type **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f4d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, Vector<String>, String const&, IP::Type>(Vector<String>
   (IP::*)(String const&, IP::Type)) */

MethodBind *
create_method_bind<IP,Vector<String>,String_const&,IP::Type>(_func_Vector_String_ptr_Type *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector_String_ptr_Type **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f530;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, int, String const&, IP::Type>(int (IP::*)(String const&,
   IP::Type)) */

MethodBind * create_method_bind<IP,int,String_const&,IP::Type>(_func_int_String_ptr_Type *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int_String_ptr_Type **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f590;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, IP::ResolverStatus, int>(IP::ResolverStatus (IP::*)(int)
   const) */

MethodBind * create_method_bind<IP,IP::ResolverStatus,int>(_func_ResolverStatus_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_ResolverStatus_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f5f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, IPAddress, int>(IPAddress (IP::*)(int) const) */

MethodBind * create_method_bind<IP,IPAddress,int>(_func_IPAddress_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_IPAddress_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f650;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, Array, int>(Array (IP::*)(int) const) */

MethodBind * create_method_bind<IP,Array,int>(_func_Array_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Array_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f6b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, int>(void (IP::*)(int)) */

MethodBind * create_method_bind<IP,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f710;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, Vector<String>>(Vector<String> (IP::*)() const) */

MethodBind * create_method_bind<IP,Vector<String>>(_func_Vector *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f770;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, TypedArray<Dictionary>>(TypedArray<Dictionary> (IP::*)()
   const) */

MethodBind * create_method_bind<IP,TypedArray<Dictionary>>(_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f7d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<IP, String const&>(void (IP::*)(String const&)) */

MethodBind * create_method_bind<IP,String_const&>(_func_void_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f830;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10839a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC15;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = 0;
      lVar2 = -2;
    }
    else {
      lVar3 = *(long *)(local_50 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar2 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00108464;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_60 = 0;
  local_48 = &_LC15;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00108464:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* IP::_bind_methods() [clone .cold] */

void IP::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GetTypeInfo<IP::Type, void>::get_class_info() */

GetTypeInfo<IP::Type,void> * __thiscall
GetTypeInfo<IP::Type,void>::get_class_info(GetTypeInfo<IP::Type,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "IP::Type";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10839a);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_001086b5;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001086b5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<IP::ResolverStatus, void>::get_class_info() */

GetTypeInfo<IP::ResolverStatus,void> * __thiscall
GetTypeInfo<IP::ResolverStatus,void>::get_class_info(GetTypeInfo<IP::ResolverStatus,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "IP::ResolverStatus";
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10839a);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00108935;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00108935:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::_initialize_classv() */

void IP::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "IP";
    local_60 = 0;
    local_40 = 2;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00108f90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_00108f90;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00108fe6;
  }
  if (lVar9 == lVar5) {
LAB_00108f0b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00108fe6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00108e7f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00108f0b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00108e7f:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00109118) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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
  String::sprintf((CowData<char32_t> *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001095a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010942d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001095a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109781;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00109781:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Dictionary>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001098f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_001098f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109b90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00109b90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1092e8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109dd7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00109dd7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1092e8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109fb3;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00109fb3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a2e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010a2e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a4c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010a4c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array,int>::validated_call
          (MethodBindTRC<Array,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a52f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010a52f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array,int>::ptrcall
          (MethodBindTRC<Array,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a71d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010a71d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<IPAddress,int>::validated_call
          (MethodBindTRC<IPAddress,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((IPAddress *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a957;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  IPAddress::operator_cast_to_String((IPAddress *)&local_78);
  if (*(char **)(param_3 + 8) != local_78) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    pcVar1 = local_78;
    local_78 = (char *)0x0;
    *(char **)(param_3 + 8) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0010a957:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<IPAddress,int>::ptrcall
          (MethodBindTRC<IPAddress,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((IPAddress *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ab6f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(local_48,param_1 + *(long *)(this + 0x60),**param_2);
  IPAddress::operator_cast_to_String((IPAddress *)&local_58);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
    pcVar1 = local_58;
    local_58 = (char *)0x0;
    *(char **)param_3 = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0010ab6f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IP::ResolverStatus, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<IP::ResolverStatus,int>::validated_call
          (MethodBindTRC<IP::ResolverStatus,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ad3b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010ad3b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IP::ResolverStatus, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<IP::ResolverStatus,int>::ptrcall
          (MethodBindTRC<IP::ResolverStatus,int> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010af1a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010af1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, String const&, IP::Type>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<int,String_const&,IP::Type>::validated_call
          (MethodBindTR<int,String_const&,IP::Type> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b102;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010b102:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, String const&, IP::Type>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int,String_const&,IP::Type>::ptrcall
          (MethodBindTR<int,String_const&,IP::Type> *this,Object *param_1,void **param_2,
          void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b2dc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  *(long *)param_3 = (long)iVar1;
LAB_0010b2dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::validated_call
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b4f3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,
            *(undefined4 *)(param_2[1] + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010b4f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::ptrcall
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b6ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010b6ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::validated_call
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((IPAddress *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b91f;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8))
  ;
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  IPAddress::operator_cast_to_String((IPAddress *)&local_78);
  if (*(char **)(param_3 + 8) != local_78) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    pcVar1 = local_78;
    local_78 = (char *)0x0;
    *(char **)(param_3 + 8) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0010b91f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::ptrcall
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((IPAddress *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb37;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  IPAddress::operator_cast_to_String((IPAddress *)&local_58);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
    pcVar1 = local_58;
    local_58 = (char *)0x0;
    *(char **)param_3 = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0010bb37:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::validated_call
          (MethodBindTRC<TypedArray<Dictionary>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1092e8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bd19;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010bd19:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::ptrcall
          (MethodBindTRC<TypedArray<Dictionary>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1092e8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010beea;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010beea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c200;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010c250;
LAB_0010c240:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c250:
        uVar6 = 4;
        goto LAB_0010c1f5;
      }
      if (in_R8D == 1) goto LAB_0010c240;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC92;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010c1f5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010c200:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IP::ResolverStatus, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<IP::ResolverStatus,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c550;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010c590;
LAB_0010c580:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c590:
        uVar7 = 4;
        goto LAB_0010c545;
      }
      if (in_R8D == 1) goto LAB_0010c580;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC93;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010c545:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010c550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<IPAddress,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  IPAddress local_68 [32];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c8d0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010c910;
LAB_0010c900:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c910:
        uVar7 = 4;
        goto LAB_0010c8c5;
      }
      if (in_R8D == 1) goto LAB_0010c900;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC93;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)(local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010c8c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010c8d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cc60;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ccb0;
LAB_0010cca0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ccb0:
        uVar7 = 4;
        goto LAB_0010cc55;
      }
      if (in_R8D == 1) goto LAB_0010cca0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC93;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Array *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(Array *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010cc55:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010cc60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<IPAddress,String_const&,IP::Type>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  IPAddress local_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d056;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010d098;
      pVVar12 = *(Variant **)param_4;
LAB_0010d0ad:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010d098:
        uVar7 = 4;
        goto LAB_0010d085;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_0010d180;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010d0ad;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010d180:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,2);
    uVar4 = _LC94;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC92;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_88);
    (*(code *)pVVar14)(local_78,(Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_88,
                       uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    uVar7 = 3;
LAB_0010d085:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010d056:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<String>,String_const&,IP::Type>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d478;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010d4b8;
      pVVar13 = *(Variant **)param_4;
LAB_0010d4cd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar6) {
LAB_0010d4b8:
        uVar7 = 4;
        goto LAB_0010d4a5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar14 + -2);
        if (lVar2 <= lVar10) goto LAB_0010d590;
        pVVar13 = pVVar11 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010d4cd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010d590:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC94;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar11);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
    uVar4 = _LC92;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    (*(code *)pVVar15)(&local_68,(Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_70,
                       uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<String>::_unref((CowData<String> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    uVar7 = 3;
LAB_0010d4a5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010d478:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, String const&, IP::Type>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<int,String_const&,IP::Type>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d86a;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010d8a8;
      pVVar12 = *(Variant **)param_4;
LAB_0010d8bd:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010d8a8:
        uVar7 = 4;
        goto LAB_0010d895;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_0010d990;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010d8bd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010d990:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,2);
    uVar4 = _LC94;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC92;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                               uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010d895:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010d86a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010dbdd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010dc40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010dc40:
      uVar6 = 4;
LAB_0010dbdd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010db5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010db5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC93;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010dbb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010dca6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010dca6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010dea7;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010dfa5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010dfa5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010dea7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, IP::Type>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,IP::Type>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_5c,param_2);
  if (param_1 == local_5c) {
    GetTypeInfo<IP::Type,void>::get_class_info((GetTypeInfo<IP::Type,void> *)local_58);
    *(undefined4 *)param_2 = local_58[0];
    if (*(long *)(param_2 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_40;
    if (*(long *)(param_2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<IPAddress, String const&, IP::Type>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<IPAddress,String_const&,IP::Type>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,IP::Type>(in_EDX,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010e3e2;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 4;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010e407:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010e407;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010e3e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>, String const&, IP::Type>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Vector<String>,String_const&,IP::Type>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,IP::Type>(in_EDX,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010e5d2;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x22;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010e5f7:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010e5f7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010e5d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, String const&, IP::Type>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int,String_const&,IP::Type>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,IP::Type>(in_EDX,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010e7c2;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010e7e7:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010e7e7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010e7c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010e877;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010e975:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e975;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010e877:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<IP::ResolverStatus, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<IP::ResolverStatus,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_88;
  details local_80 [8];
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "IP::ResolverStatus";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x12;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name(local_80,(String *)&local_78);
    StringName::StringName((StringName *)&local_88,(String *)local_80,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_70 = 0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<IPAddress,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010ecf8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 4;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010eddf:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010eddf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010ecf8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010eef8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x1c;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010efdf:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010efdf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010eef8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<IPAddress, DefaultAllocator>::~List() */

void __thiscall List<IPAddress,DefaultAllocator>::~List(List<IPAddress,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<IP::ResolverStatus, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<IP::ResolverStatus,int>::~MethodBindTRC(MethodBindTRC<IP::ResolverStatus,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<int,String_const&,IP::Type> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<String>, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<String>,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<Vector<String>,String_const&,IP::Type> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<IPAddress, String const&, IP::Type>::~MethodBindTR() */

void __thiscall
MethodBindTR<IPAddress,String_const&,IP::Type>::~MethodBindTR
          (MethodBindTR<IPAddress,String_const&,IP::Type> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


