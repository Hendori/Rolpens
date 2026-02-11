
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::StringStream::StringStream(embree::Ref<embree::Stream<int> > const&, std::__cxx11::string
   const&, std::__cxx11::string const&, bool) */

void __thiscall
embree::StringStream::StringStream
          (StringStream *this,Ref *param_1,string *param_2,string *param_3,bool param_4)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_00101b00;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  plVar2 = (long *)operator_new(0x10000);
  *(long **)(this + 0x28) = plVar2;
  *(long **)(this + 0x38) = plVar2 + 0x2000;
  plVar3 = plVar2;
  do {
    *(undefined1 *)(plVar3 + 2) = 0;
    plVar4 = plVar3 + 8;
    *plVar3 = (long)(plVar3 + 2);
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = -1;
    plVar3[7] = -1;
    plVar3 = plVar4;
  } while (plVar4 != plVar2 + 0x2000);
  *(long **)(this + 0x30) = plVar4;
  *(undefined ***)this = &PTR__StringStream_00101b40;
  plVar3 = *(long **)param_1;
  *(long **)(this + 0x40) = plVar3;
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(StringStream **)(this + 0x248) = this + 600;
  std::__cxx11::string::_M_construct<char*>
            (this + 0x248,*(long *)param_3,*(long *)(param_3 + 8) + *(long *)param_3);
  *(undefined8 *)(this + 0x48) = 0;
  this[0x268] = (StringStream)param_4;
  *(undefined8 *)(this + 0x140) = 0;
  puVar8 = (undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)(this + 0x48) -
                       (int)(undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8)) + 0x100U >> 3
                      ); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
  }
  if (*(long *)(param_2 + 8) != 0) {
    pbVar5 = *(byte **)param_2;
    pbVar7 = pbVar5 + *(long *)(param_2 + 8);
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      (this + 0x48)[bVar1] = (StringStream)0x1;
    } while (pbVar7 != pbVar5);
  }
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  puVar8 = (undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)(this + 0x148) -
                       (int)(undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8)) + 0x100U >>
                      3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
  }
  if (DAT_00100948 != 0) {
    pbVar7 = stringChars + DAT_00100948;
    pbVar5 = stringChars;
    do {
      bVar9 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      (this + 0x148)[bVar9] = (StringStream)0x1;
    } while (pbVar7 != pbVar5);
  }
  return;
}



/* embree::StringStream::next[abi:cxx11]() */

void embree::StringStream::next_abi_cxx11_(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  char *__src;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint *puVar10;
  size_t sVar11;
  long lVar12;
  ulong *__dest;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var13;
  long in_RSI;
  uint uVar14;
  ulong *in_RDI;
  Stream<int> *pSVar15;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char *local_78;
  size_t local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while (piVar9 = (int *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40)), *piVar9 != -1) {
    pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
    if (*(long *)(in_RSI + 0x250) != 0) {
      piVar9 = (int *)Stream<int>::peek(pSVar15);
      pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
      if (*piVar9 == 10) {
        Stream<int>::drop(pSVar15);
        *in_RDI = (ulong)(in_RDI + 2);
        std::__cxx11::string::_M_construct<char*>();
        goto LAB_001005f6;
      }
    }
    if (*(char *)(in_RSI + 0x268) == '\0') {
LAB_00100312:
      puVar10 = (uint *)Stream<int>::peek(pSVar15);
      if ((0xff < *puVar10) || (*(char *)(in_RSI + 0x48 + (ulong)*puVar10) == '\0')) break;
      pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
    }
    else {
      piVar9 = (int *)Stream<int>::peek(pSVar15);
      pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
      if (*piVar9 != 0x5c) goto LAB_00100312;
      Stream<int>::drop(pSVar15);
      piVar9 = (int *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40));
      pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
      if (*piVar9 != 10) {
        if (*(long *)(pSVar15 + 0x18) == 0) {
code_r0x00101932:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(pSVar15 + 0x20) = *(long *)(pSVar15 + 0x20) + 1;
        *(long *)(pSVar15 + 0x18) = *(long *)(pSVar15 + 0x18) + -1;
        Stream<int>::peek(pSVar15);
        pSVar15 = *(Stream<int> **)(in_RSI + 0x40);
        goto LAB_00100312;
      }
    }
    Stream<int>::drop(pSVar15);
  }
  local_88 = (char *)operator_new(0x40);
  local_78 = local_88 + 0x40;
  local_80 = local_88;
LAB_0010034b:
  piVar9 = (int *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40));
  if (*piVar9 != -1) {
    do {
      puVar10 = (uint *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40));
      if ((*puVar10 < 0x100) && (*(char *)(in_RSI + 0x48 + (ulong)*puVar10) != '\0')) break;
      plVar4 = *(long **)(in_RSI + 0x40);
      lVar12 = plVar4[4];
      if (lVar12 == 0) {
        (**(code **)(*plVar4 + 0x28))(&local_68,plVar4);
        uVar8 = (**(code **)(*plVar4 + 0x20))(plVar4);
        uVar7 = local_50;
        uVar6 = local_58;
        this = local_60;
        sVar11 = local_68;
        if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          }
          if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var13 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              (**(code **)(*(long *)this + 0x18))(this);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar3 = *(int *)p_Var13;
                *(int *)p_Var13 = *(int *)p_Var13 + -1;
                UNLOCK();
              }
              else {
                iVar3 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar3 + -1;
              }
              if (iVar3 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar12 = plVar4[3];
        lVar5 = plVar4[4];
        if (lVar12 + lVar5 == 0x400) {
          if (lVar12 == 0) goto code_r0x00101932;
          lVar12 = lVar12 + -1;
          plVar4[3] = lVar12;
          uVar14 = (int)plVar4[2] + 1U & 0x3ff;
          plVar4[2] = (ulong)uVar14;
        }
        else {
          uVar14 = (uint)plVar4[2];
        }
        plVar4[4] = lVar5 + 1;
        puVar2 = (undefined4 *)
                 (plVar4[5] + (ulong)((int)lVar12 + uVar14 + (int)lVar5 & 0x3ff) * 0x28);
        p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar8;
        *(size_t *)(puVar2 + 2) = sVar11;
        if (this == p_Var13) {
LAB_001004b8:
          *(undefined8 *)(puVar2 + 6) = uVar6;
          *(undefined8 *)(puVar2 + 8) = uVar7;
          if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            lVar12 = *(long *)(this + 8);
            goto joined_r0x001004d0;
          }
        }
        else {
          if (this == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var13 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar2 + 6) = uVar6;
              *(undefined8 *)(puVar2 + 8) = uVar7;
              lVar12 = plVar4[4];
              goto LAB_001004fb;
            }
LAB_00100484:
            p_Var1 = p_Var13 + 8;
            if (*(long *)(p_Var13 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var13 + 8) = 0;
              (**(code **)(*(long *)p_Var13 + 0x10))();
              (**(code **)(*(long *)p_Var13 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar3 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar3 = *(int *)(p_Var13 + 8);
                *(int *)(p_Var13 + 8) = iVar3 + -1;
              }
              if (iVar3 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var13)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = this;
            goto LAB_001004b8;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            UNLOCK();
            p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          else {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          if (p_Var13 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100484;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = this;
          *(undefined8 *)(puVar2 + 6) = uVar6;
          *(undefined8 *)(puVar2 + 8) = uVar7;
          lVar12 = *(long *)(this + 8);
joined_r0x001004d0:
          if (lVar12 == 0x100000001) {
            *(undefined8 *)(this + 8) = 0;
            (**(code **)(*(long *)this + 0x10))(this);
            (**(code **)(*(long *)this + 0x18))(this);
            lVar12 = plVar4[4];
            goto LAB_001004fb;
          }
          p_Var13 = this + 8;
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var13;
            *(int *)p_Var13 = *(int *)p_Var13 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(this + 8);
            *(int *)(this + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
          }
        }
        lVar12 = plVar4[4];
      }
LAB_001004fb:
      uVar14 = *(uint *)(plVar4[5] + (ulong)((int)plVar4[2] + (int)plVar4[3] & 0x3ff) * 0x28);
      plVar4[3] = plVar4[3] + 1;
      plVar4[4] = lVar12 + -1;
      if (0xff < uVar14) {
        next_abi_cxx11_();
        return;
      }
      if (*(char *)(in_RSI + 0x148 + (ulong)uVar14) == '\0') goto code_r0x00101932;
      local_68 = CONCAT71(local_68._1_7_,(char)uVar14);
      if (local_80 == local_78) goto LAB_00100660;
      *local_80 = (char)uVar14;
      local_80 = local_80 + 1;
      piVar9 = (int *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40));
      if (*piVar9 == -1) break;
    } while( true );
  }
  local_68 = local_68 & 0xffffffffffffff00;
  if (local_80 == local_78) {
    std::vector<char,std::allocator<char>>::_M_realloc_insert<char>
              ((vector<char,std::allocator<char>> *)&local_88,local_80,&local_68);
  }
  else {
    *local_80 = '\0';
    local_80 = local_80 + 1;
  }
  __src = local_88;
  __dest = in_RDI + 2;
  *in_RDI = (ulong)__dest;
  if (local_88 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
    goto LAB_0010092c;
  }
  sVar11 = strlen(local_88);
  local_68 = sVar11;
  if (sVar11 < 0x10) {
    if (sVar11 == 1) {
      *(char *)(in_RDI + 2) = *__src;
    }
    else if (sVar11 != 0) goto LAB_00100878;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_68);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_68;
LAB_00100878:
    memcpy(__dest,__src,sVar11);
    __dest = (ulong *)*in_RDI;
  }
  in_RDI[1] = local_68;
  *(undefined1 *)((long)__dest + local_68) = 0;
  operator_delete(__src,(long)local_78 - (long)__src);
LAB_001005f6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010092c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100660:
  std::vector<char,std::allocator<char>>::_M_realloc_insert<char>
            ((vector<char,std::allocator<char>> *)&local_88,local_80,&local_68);
  goto LAB_0010034b;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x10))();
  if (__libc_single_threaded == '\0') {
    LOCK();
    p_Var1 = this + 0xc;
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001009db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* embree::StringStream::~StringStream() */

void __thiscall embree::StringStream::~StringStream(StringStream *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__StringStream_00101b40;
  if (*(StringStream **)(this + 0x248) != this + 600) {
    operator_delete(*(StringStream **)(this + 0x248),*(long *)(this + 600) + 1);
  }
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(code **)(*plVar4 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  puVar5 = *(undefined8 **)(this + 0x30);
  puVar6 = *(undefined8 **)(this + 0x28);
  *(undefined **)this = &DAT_00101b00;
  if (puVar5 != puVar6) {
    do {
      this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar6[5];
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          }
        }
      }
      if ((undefined8 *)*puVar6 != puVar6 + 2) {
        operator_delete((undefined8 *)*puVar6,puVar6[2] + 1);
      }
      puVar6 = puVar6 + 8;
    } while (puVar5 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x28);
  }
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6,*(long *)(this + 0x38) - (long)puVar6);
    return;
  }
  return;
}



/* embree::StringStream::~StringStream() */

void __thiscall embree::StringStream::~StringStream(StringStream *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__StringStream_00101b40;
  if (*(StringStream **)(this + 0x248) != this + 600) {
    operator_delete(*(StringStream **)(this + 0x248),*(long *)(this + 600) + 1);
  }
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(code **)(*plVar4 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  puVar5 = *(undefined8 **)(this + 0x30);
  puVar6 = *(undefined8 **)(this + 0x28);
  *(undefined **)this = &DAT_00101b00;
  if (puVar5 != puVar6) {
    do {
      this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar6[5];
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          }
        }
      }
      if ((undefined8 *)*puVar6 != puVar6 + 2) {
        operator_delete((undefined8 *)*puVar6,puVar6[2] + 1);
      }
      puVar6 = puVar6 + 8;
    } while (puVar5 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x28);
  }
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6,*(long *)(this + 0x38) - (long)puVar6);
  }
  operator_delete(this,0x270);
  return;
}



/* embree::StringStream::location() */

void embree::StringStream::location(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long in_RSI;
  undefined8 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  plVar3 = *(long **)(in_RSI + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3[4] != 0) goto LAB_00100ed0;
  (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
  uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var10 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var10;
          *(int *)p_Var10 = *(int *)p_Var10 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar8 = plVar3[3];
  lVar4 = plVar3[4];
  if (lVar8 + lVar4 == 0x400) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = lVar8 + -1;
    plVar3[3] = lVar8;
    uVar9 = (int)plVar3[2] + 1U & 0x3ff;
    plVar3[2] = (ulong)uVar9;
  }
  else {
    uVar9 = (uint)plVar3[2];
  }
  plVar3[4] = lVar4 + 1;
  puVar2 = (undefined4 *)(plVar3[5] + (ulong)((int)lVar8 + uVar9 + (int)lVar4 & 0x3ff) * 0x28);
  *puVar2 = uVar6;
  p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var10) {
LAB_00100e80:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100ed0;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_00100ed0;
      }
LAB_00100e40:
      p_Var1 = p_Var10 + 8;
      if (*(long *)(p_Var10 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var10 + 8) = 0;
        (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
        (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var10 + 8);
          *(int *)(p_Var10 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_00100e80;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100e40;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var10 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar7 = *(int *)p_Var10;
      *(int *)p_Var10 = *(int *)p_Var10 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_00100ed0:
  lVar8 = plVar3[5] + (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28;
  *in_RDI = *(undefined8 *)(lVar8 + 8);
  lVar4 = *(long *)(lVar8 + 0x10);
  in_RDI[1] = lVar4;
  if (lVar4 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
  }
  uVar5 = *(undefined8 *)(lVar8 + 0x20);
  in_RDI[2] = *(undefined8 *)(lVar8 + 0x18);
  in_RDI[3] = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Stream<int>::peek() */

long __thiscall embree::Stream<int>::peek(Stream<int> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) != 0) goto LAB_001012b0;
  (**(code **)(*(long *)this + 0x28))(&local_68,this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var8 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var8;
          *(int *)p_Var8 = *(int *)p_Var8 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar6 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar6 + lVar3 == 0x400) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = lVar6 + -1;
    *(long *)(this + 0x18) = lVar6;
    uVar7 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
    *(ulong *)(this + 0x10) = (ulong)uVar7;
  }
  else {
    uVar7 = (uint)*(undefined8 *)(this + 0x10);
  }
  *(long *)(this + 0x20) = lVar3 + 1;
  puVar2 = (undefined4 *)
           (*(long *)(this + 0x28) + (ulong)((int)lVar6 + uVar7 + (int)lVar3 & 0x3ff) * 0x28);
  *puVar2 = uVar4;
  p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var8) {
LAB_00101262:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001012b0;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_001012b0;
      }
LAB_00101221:
      p_Var1 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_00101262;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101221;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var8 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var8;
      *(int *)p_Var8 = *(int *)p_Var8 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_001012b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Stream<int>::drop() */

void __thiscall embree::Stream<int>::drop(Stream<int> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0x20);
  if (lVar6 != 0) goto LAB_0010163f;
  (**(code **)(*(long *)this + 0x28))(&local_68,this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var8 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var8;
          *(int *)p_Var8 = *(int *)p_Var8 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar6 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar6 + lVar3 == 0x400) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = lVar6 + -1;
    *(long *)(this + 0x18) = lVar6;
    uVar7 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
    *(ulong *)(this + 0x10) = (ulong)uVar7;
  }
  else {
    uVar7 = (uint)*(undefined8 *)(this + 0x10);
  }
  *(long *)(this + 0x20) = lVar3 + 1;
  puVar2 = (undefined4 *)
           (*(long *)(this + 0x28) + (ulong)((int)lVar6 + uVar7 + (int)lVar3 & 0x3ff) * 0x28);
  *puVar2 = uVar4;
  p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var8) {
LAB_001015f2:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101601;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        lVar6 = *(long *)(this + 0x20);
        goto LAB_0010163f;
      }
LAB_001015b1:
      p_Var1 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_001015f2;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001015b1;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
LAB_00101601:
    p_Var8 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar6 = *(long *)(this + 0x20);
      goto LAB_0010163f;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var8;
      *(int *)p_Var8 = *(int *)p_Var8 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
  lVar6 = *(long *)(this + 0x20);
LAB_0010163f:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  *(long *)(this + 0x20) = lVar6 + -1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<char, std::allocator<char>
   >::_M_realloc_insert<char>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char&&) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_realloc_insert<char>
          (vector<char,std::allocator<char>> *this,void *param_2,undefined1 *param_3)

{
  long lVar1;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  void *__dest_00;
  size_t __n;
  ulong uVar4;
  size_t __n_00;
  
  lVar1 = *(long *)(this + 8);
  __src = *(void **)this;
  uVar3 = lVar1 - (long)__src;
  if (uVar3 != 0x7fffffffffffffff) {
    __n = (long)param_2 - (long)__src;
    uVar4 = 1;
    if (uVar3 != 0) {
      uVar2 = uVar3 * 2;
      uVar4 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
        uVar4 = uVar2;
      }
      if (uVar2 < uVar3) {
        uVar4 = 0x7fffffffffffffff;
      }
    }
    __dest = operator_new(uVar4);
    *(undefined1 *)((long)__dest + __n) = *param_3;
    if (0 < (long)__n) {
      memmove(__dest,__src,__n);
    }
    __n_00 = lVar1 - (long)param_2;
    __dest_00 = (void *)((long)__dest + __n + 1);
    if (0 < (long)__n_00) {
      __dest_00 = memcpy(__dest_00,param_2,__n_00);
    }
    if (__src != (void *)0x0) {
      operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = __n_00 + (long)__dest_00;
    *(ulong *)(this + 0x10) = (long)__dest + uVar4;
    return;
  }
  std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* embree::StringStream::next[abi:cxx11]() [clone .cold] */

void embree::StringStream::next_abi_cxx11_(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::StringStream::StringStream(embree::Ref<embree::Stream<int> > const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool) */

void embree::StringStream::_GLOBAL__sub_I_StringStream(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0x49;
  stringChars = (undefined8 *)&DAT_00100950;
  puVar2 = (undefined8 *)std::__cxx11::string::_M_create((ulong *)&stringChars,(ulong)&local_18);
  uVar1 = _UNK_00101b78;
  _DAT_00100950 = local_18;
  stringChars = puVar2;
  *puVar2 = __LC3;
  puVar2[1] = uVar1;
  uVar1 = _UNK_00101b88;
  DAT_00100948 = local_18;
  puVar2[2] = __LC4;
  puVar2[3] = uVar1;
  uVar1 = _UNK_00101b98;
  puVar2[4] = __LC5;
  puVar2[5] = uVar1;
  uVar1 = _UNK_00101ba8;
  puVar2[6] = __LC6;
  puVar2[7] = uVar1;
  uVar1 = _UNK_00101bb8;
  *(undefined8 *)((long)puVar2 + 0x39) = __LC7;
  *(undefined8 *)((long)puVar2 + 0x41) = uVar1;
  *(undefined1 *)((long)stringChars + local_18) = 0;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(std::__cxx11::string::~string,&stringChars,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::StringStream::~StringStream() */

void __thiscall embree::StringStream::~StringStream(StringStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


