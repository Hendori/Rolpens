
/* embree::TokenStream::TokenStream(embree::Ref<embree::Stream<int> > const&, std::__cxx11::string
   const&, std::__cxx11::string const&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > const&) */

void __thiscall
embree::TokenStream::TokenStream
          (TokenStream *this,Ref *param_1,string *param_2,string *param_3,vector *param_4)

{
  byte bVar1;
  long *plVar2;
  undefined1 *__src;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong *__dest;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  ulong local_48;
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_0010df70;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  puVar3 = (undefined4 *)operator_new(0x1a000);
  *(undefined4 **)(this + 0x28) = puVar3;
  *(undefined4 **)(this + 0x38) = puVar3 + 0x6800;
  puVar4 = puVar3;
  do {
    *puVar4 = 0;
    puVar5 = puVar4 + 0x1a;
    *(undefined4 **)(puVar4 + 2) = puVar4 + 6;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x12) = 0;
    *(undefined8 *)(puVar4 + 0x14) = 0;
    *(undefined8 *)(puVar4 + 0x16) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    puVar4 = puVar5;
  } while (puVar5 != puVar3 + 0x6800);
  *(undefined4 **)(this + 0x30) = puVar5;
  *(undefined ***)this = &PTR__TokenStream_0010dfb0;
  plVar2 = *(long **)param_1;
  *(long **)(this + 0x40) = plVar2;
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  uVar10 = *(long *)(param_4 + 8) - *(long *)param_4;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  if (uVar10 == 0) {
    puVar6 = (ulong *)0x0;
  }
  else {
    if (0x7fffffffffffffe0 < uVar10) {
      std::__throw_bad_array_new_length();
      goto LAB_001003a4;
    }
    puVar6 = (ulong *)operator_new(uVar10);
  }
  *(ulong **)(this + 0x348) = puVar6;
  *(ulong **)(this + 0x350) = puVar6;
  *(ulong *)(this + 0x358) = uVar10 + (long)puVar6;
  puVar11 = *(undefined8 **)(param_4 + 8);
  puVar12 = *(undefined8 **)param_4;
  if (puVar11 != puVar12) {
    do {
      __dest = puVar6 + 2;
      *puVar6 = (ulong)__dest;
      uVar10 = puVar12[1];
      __src = (undefined1 *)*puVar12;
      local_48 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(puVar6 + 2) = *__src;
        }
        else if (uVar10 != 0) goto LAB_00100217;
      }
      else {
        __dest = (ulong *)std::__cxx11::string::_M_create(puVar6,(ulong)&local_48);
        *puVar6 = (ulong)__dest;
        puVar6[2] = local_48;
LAB_00100217:
        memcpy(__dest,__src,uVar10);
        __dest = (ulong *)*puVar6;
      }
      puVar12 = puVar12 + 4;
      puVar6[1] = local_48;
      puVar6 = puVar6 + 4;
      *(undefined1 *)((long)__dest + local_48) = 0;
    } while (puVar11 != puVar12);
  }
  *(undefined8 *)(this + 0x148) = 0;
  *(ulong **)(this + 0x350) = puVar6;
  *(undefined8 *)(this + 0x240) = 0;
  puVar11 = (undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0x148) -
                        (int)(undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8)) + 0x100U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
  }
  if (*(long *)(param_2 + 8) != 0) {
    pbVar7 = *(byte **)param_2;
    pbVar9 = pbVar7 + *(long *)(param_2 + 8);
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      (this + 0x148)[bVar1] = (TokenStream)0x1;
    } while (pbVar7 != pbVar9);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  puVar11 = (undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0x48) -
                        (int)(undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8)) + 0x100U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
  }
  if (*(long *)(param_3 + 8) != 0) {
    pbVar7 = *(byte **)param_3;
    pbVar9 = pbVar7 + *(long *)(param_3 + 8);
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      (this + 0x48)[bVar1] = (TokenStream)0x1;
    } while (pbVar7 != pbVar9);
  }
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  puVar11 = (undefined8 *)((ulong)(this + 0x250) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0x248) -
                        (int)(undefined8 *)((ulong)(this + 0x250) & 0xfffffffffffffff8)) + 0x100U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
  }
  pbVar7 = stringChars_abi_cxx11_ + DAT_0010cae8;
  pbVar9 = stringChars_abi_cxx11_;
  if (DAT_0010cae8 != 0) {
    do {
      pbVar8 = pbVar9 + 1;
      (this + 0x248)[*pbVar9] = (TokenStream)0x1;
      pbVar9 = pbVar8;
    } while (pbVar7 != pbVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001003a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::skipSeparators() */

void __thiscall embree::TokenStream::skipSeparators(TokenStream *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var14;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    plVar3 = *(long **)(this + 0x40);
    if (plVar3[4] == 0) {
      (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
      uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3);
      uVar8 = local_50;
      uVar7 = local_58;
      p_Var6 = local_60;
      uVar5 = local_68;
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
          p_Var14 = local_60 + 8;
          if (*(long *)(local_60 + 8) == 0x100000001) {
            *(undefined8 *)(local_60 + 8) = 0;
            (**(code **)(*(long *)local_60 + 0x10))(local_60);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
            }
          }
        }
      }
      lVar12 = plVar3[3];
      lVar4 = plVar3[4];
      if (lVar12 + lVar4 == 0x400) {
        if (lVar12 == 0) goto embree_TokenStream_skipSeparators;
        lVar12 = lVar12 + -1;
        plVar3[3] = lVar12;
        uVar13 = (int)plVar3[2] + 1U & 0x3ff;
        plVar3[2] = (ulong)uVar13;
      }
      else {
        uVar13 = (uint)plVar3[2];
      }
      plVar3[4] = lVar4 + 1;
      puVar2 = (undefined4 *)(plVar3[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar4 & 0x3ff) * 0x28)
      ;
      *puVar2 = uVar9;
      p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *(undefined8 *)(puVar2 + 2) = uVar5;
      if (p_Var6 == p_Var14) {
LAB_0010052a:
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00100757:
          p_Var14 = p_Var6 + 8;
          if (*(long *)(p_Var6 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var6 + 8) = 0;
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var6 + 8);
              *(int *)(p_Var6 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
            }
          }
        }
      }
      else {
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010074b;
LAB_001004ea:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
            goto LAB_0010052a;
          }
          *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
          p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001004ea;
LAB_0010074b:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          goto LAB_00100757;
        }
        if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001004ea;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
      }
      if (*(int *)(plVar3[5] + (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28) == -1) {
LAB_00100700:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      plVar3 = *(long **)(this + 0x40);
      if (plVar3[4] == 0) {
        (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
        uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar8 = local_50;
        uVar7 = local_58;
        p_Var6 = local_60;
        uVar5 = local_68;
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
            p_Var14 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar12 = plVar3[3];
        lVar4 = plVar3[4];
        if (lVar12 + lVar4 == 0x400) {
          if (lVar12 == 0) goto embree_TokenStream_skipSeparators;
          lVar12 = lVar12 + -1;
          plVar3[3] = lVar12;
          uVar13 = (int)plVar3[2] + 1U & 0x3ff;
          plVar3[2] = (ulong)uVar13;
        }
        else {
          uVar13 = (uint)plVar3[2];
        }
        plVar3[4] = lVar4 + 1;
        puVar2 = (undefined4 *)
                 (plVar3[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar4 & 0x3ff) * 0x28);
        *puVar2 = uVar9;
        p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *(undefined8 *)(puVar2 + 2) = uVar5;
        if (p_Var6 == p_Var14) {
LAB_00100900:
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010092c:
            p_Var14 = p_Var6 + 8;
            if (*(long *)(p_Var6 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var6 + 8) = 0;
              (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
              (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var6 + 8);
                *(int *)(p_Var6 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
              }
            }
          }
        }
        else {
          if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
              UNLOCK();
              p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
              if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100920;
LAB_001008c0:
              p_Var1 = p_Var14 + 8;
              if (*(long *)(p_Var14 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var14 + 8) = 0;
                (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
                (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)(p_Var14 + 8);
                  *(int *)(p_Var14 + 8) = iVar10 + -1;
                }
                if (iVar10 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var14);
                }
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
              goto LAB_00100900;
            }
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
            if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001008c0;
LAB_00100920:
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
            *(undefined8 *)(puVar2 + 6) = uVar7;
            *(undefined8 *)(puVar2 + 8) = uVar8;
            goto LAB_0010092c;
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001008c0;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
        }
        uVar11 = (ulong)*(uint *)(plVar3[5] +
                                 (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28);
      }
      else {
        uVar11 = (ulong)*(uint *)((ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28 +
                                 plVar3[5]);
      }
    }
    else {
      uVar13 = *(uint *)(plVar3[5] + (ulong)((int)plVar3[2] + (int)plVar3[3] & 0x3ff) * 0x28);
      uVar11 = (ulong)uVar13;
      if (uVar13 == 0xffffffff) goto LAB_00100700;
    }
    if ((0xff < (uint)uVar11) || (this[uVar11 + 0x48] == (TokenStream)0x0)) goto LAB_00100700;
    plVar3 = *(long **)(this + 0x40);
    lVar12 = plVar3[4];
    if (lVar12 == 0) {
      (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
      uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3);
      uVar8 = local_50;
      uVar7 = local_58;
      p_Var6 = local_60;
      uVar5 = local_68;
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
          p_Var14 = local_60 + 8;
          if (*(long *)(local_60 + 8) == 0x100000001) {
            *(undefined8 *)(local_60 + 8) = 0;
            (**(code **)(*(long *)local_60 + 0x10))(local_60);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
            }
          }
        }
      }
      lVar12 = plVar3[3];
      lVar4 = plVar3[4];
      if (lVar12 + lVar4 == 0x400) {
        if (lVar12 == 0) {
embree_TokenStream_skipSeparators:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar12 = lVar12 + -1;
        plVar3[3] = lVar12;
        uVar13 = (int)plVar3[2] + 1U & 0x3ff;
        plVar3[2] = (ulong)uVar13;
      }
      else {
        uVar13 = (uint)plVar3[2];
      }
      plVar3[4] = lVar4 + 1;
      puVar2 = (undefined4 *)(plVar3[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar4 & 0x3ff) * 0x28)
      ;
      *puVar2 = uVar9;
      p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *(undefined8 *)(puVar2 + 2) = uVar5;
      if (p_Var6 == p_Var14) {
LAB_001006d1:
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100a10;
      }
      else {
        if (p_Var6 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar2 + 6) = uVar7;
            *(undefined8 *)(puVar2 + 8) = uVar8;
            lVar12 = plVar3[4];
            goto LAB_001006e6;
          }
LAB_00100691:
          p_Var1 = p_Var14 + 8;
          if (*(long *)(p_Var14 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var14 + 8) = 0;
            (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
            (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var14 + 8);
              *(int *)(p_Var14 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
          goto LAB_001006d1;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
          UNLOCK();
          p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        else {
          *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
          p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00100691;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var6;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
LAB_00100a10:
        p_Var14 = p_Var6 + 8;
        if (*(long *)(p_Var6 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var6 + 8) = 0;
          (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
          (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          lVar12 = plVar3[4];
          goto LAB_001006e6;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar10 = *(int *)p_Var14;
          *(int *)p_Var14 = *(int *)p_Var14 + -1;
          UNLOCK();
        }
        else {
          iVar10 = *(int *)(p_Var6 + 8);
          *(int *)(p_Var6 + 8) = iVar10 + -1;
        }
        if (iVar10 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
        }
      }
      lVar12 = plVar3[4];
    }
LAB_001006e6:
    plVar3[3] = plVar3[3] + 1;
    plVar3[4] = lVar12 + -1;
  } while( true );
}



/* embree::TokenStream::trySymbols(embree::Token&, embree::ParseLocation const&) */

undefined8 __thiscall
embree::TokenStream::trySymbols(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  undefined4 *puVar5;
  char cVar6;
  long lVar7;
  undefined1 *__src;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  undefined8 uVar9;
  ulong *__src_00;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  Token *pTVar15;
  Token *pTVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var21;
  ulong uVar22;
  long *plVar23;
  long in_FS_OFFSET;
  ulong local_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar20 = *(long *)(this + 0x348);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x350) == lVar20) {
LAB_00101402:
    uVar14 = 0;
LAB_001019cb:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar14;
  }
  uVar19 = 0;
  while( true ) {
    plVar23 = (long *)(lVar20 + uVar19 * 0x20);
    if (plVar23[1] == 0) break;
    uVar22 = 0;
LAB_00101229:
    cVar6 = *(char *)(*plVar23 + uVar22);
    plVar18 = *(long **)(this + 0x40);
    lVar20 = plVar18[4];
    if (lVar20 != 0) {
      uVar17 = plVar18[3];
      if ((int)cVar6 != *(int *)(plVar18[5] + (ulong)((int)plVar18[2] + (int)uVar17 & 0x3ff) * 0x28)
         ) goto LAB_00101271;
LAB_0010120b:
      uVar22 = uVar22 + 1;
      plVar18[3] = uVar17 + 1;
      plVar18[4] = lVar20 + -1;
      if ((ulong)plVar23[1] <= uVar22) {
        plVar23 = (long *)(uVar19 * 0x20 + *(long *)(this + 0x348));
        break;
      }
      goto LAB_00101229;
    }
    (**(code **)(*plVar18 + 0x28))(&local_c8,plVar18);
    uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18);
    uVar9 = local_b0;
    uVar14 = local_b8;
    p_Var8 = local_c0;
    uVar17 = local_c8;
    if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      }
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var21 = local_c0 + 8;
        if (*(long *)(local_c0 + 8) == 0x100000001) {
          *(undefined8 *)(local_c0 + 8) = 0;
          (**(code **)(*(long *)local_c0 + 0x10))();
          (**(code **)(*(long *)p_Var8 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var21;
            *(int *)p_Var21 = *(int *)p_Var21 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(local_c0 + 8);
            *(int *)(local_c0 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
          }
        }
      }
    }
    lVar20 = plVar18[3];
    lVar7 = plVar18[4];
    if (lVar20 + lVar7 == 0x400) {
      if (lVar20 == 0) goto embree_TokenStream_trySymbols;
      lVar20 = lVar20 + -1;
      plVar18[3] = lVar20;
      uVar12 = (int)plVar18[2] + 1U & 0x3ff;
      plVar18[2] = (ulong)uVar12;
    }
    else {
      uVar12 = (uint)plVar18[2];
    }
    plVar18[4] = lVar7 + 1;
    puVar5 = (undefined4 *)(plVar18[5] + (ulong)(uVar12 + (int)lVar20 + (int)lVar7 & 0x3ff) * 0x28);
    p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
    *puVar5 = uVar10;
    *(ulong *)(puVar5 + 2) = uVar17;
    if (p_Var8 == p_Var21) {
LAB_0010106d:
      *(undefined8 *)(puVar5 + 6) = uVar14;
      *(undefined8 *)(puVar5 + 8) = uVar9;
      if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010142e:
        p_Var21 = p_Var8 + 8;
        if (*(long *)(p_Var8 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var8 + 8) = 0;
          (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
          (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var21;
            *(int *)p_Var21 = *(int *)p_Var21 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var8 + 8);
            *(int *)(p_Var8 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
          }
        }
      }
    }
    else {
      if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
          UNLOCK();
          p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101422;
LAB_0010102f:
          p_Var4 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var4;
              *(int *)p_Var4 = *(int *)p_Var4 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
          goto LAB_0010106d;
        }
        *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
        p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010102f;
LAB_00101422:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
        *(undefined8 *)(puVar5 + 6) = uVar14;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        goto LAB_0010142e;
      }
      if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010102f;
      *(undefined8 *)(puVar5 + 6) = uVar14;
      *(undefined8 *)(puVar5 + 8) = uVar9;
    }
    plVar1 = plVar18 + 3;
    plVar2 = plVar18 + 2;
    plVar3 = plVar18 + 5;
    plVar18 = *(long **)(this + 0x40);
    if ((int)cVar6 == *(int *)(*plVar3 + (ulong)((int)*plVar1 + (int)*plVar2 & 0x3ff) * 0x28)) {
      lVar20 = plVar18[4];
      if (lVar20 != 0) {
        uVar17 = plVar18[3];
        goto LAB_0010120b;
      }
      (**(code **)(*plVar18 + 0x28))(&local_c8,plVar18);
      uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar9 = local_b0;
      uVar14 = local_b8;
      p_Var8 = local_c0;
      uVar17 = local_c8;
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var21 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))();
            (**(code **)(*(long *)p_Var8 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var21;
              *(int *)p_Var21 = *(int *)p_Var21 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar20 = plVar18[3];
      lVar7 = plVar18[4];
      if (lVar20 + lVar7 == 0x400) {
        if (lVar20 == 0) goto embree_TokenStream_trySymbols;
        lVar20 = lVar20 + -1;
        plVar18[3] = lVar20;
        uVar12 = (int)plVar18[2] + 1U & 0x3ff;
        plVar18[2] = (ulong)uVar12;
      }
      else {
        uVar12 = (uint)plVar18[2];
      }
      plVar18[4] = lVar7 + 1;
      puVar5 = (undefined4 *)
               (plVar18[5] + (ulong)((int)lVar20 + uVar12 + (int)lVar7 & 0x3ff) * 0x28);
      *puVar5 = uVar10;
      p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *(ulong *)(puVar5 + 2) = uVar17;
      if (p_Var8 == p_Var21) {
LAB_001011f2:
        *(undefined8 *)(puVar5 + 6) = uVar14;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001014be;
      }
      else {
        if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar5 + 6) = uVar14;
            *(undefined8 *)(puVar5 + 8) = uVar9;
            uVar17 = plVar18[3];
            lVar20 = plVar18[4];
            goto LAB_0010120b;
          }
LAB_001011b2:
          p_Var4 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var4;
              *(int *)p_Var4 = *(int *)p_Var4 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
          goto LAB_001011f2;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
          UNLOCK();
          p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        else {
          *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
          p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001011b2;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
        *(undefined8 *)(puVar5 + 6) = uVar14;
        *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_001014be:
        p_Var21 = p_Var8 + 8;
        if (*(long *)(p_Var8 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var8 + 8) = 0;
          (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
          (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          uVar17 = plVar18[3];
          lVar20 = plVar18[4];
          goto LAB_0010120b;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar11 = *(int *)p_Var21;
          *(int *)p_Var21 = *(int *)p_Var21 + -1;
          UNLOCK();
        }
        else {
          iVar11 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar11 + -1;
        }
        if (iVar11 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      uVar17 = plVar18[3];
      lVar20 = plVar18[4];
      goto LAB_0010120b;
    }
    uVar17 = plVar18[3];
LAB_00101271:
    if (uVar17 < uVar22) {
embree_TokenStream_trySymbols:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar23 = plVar18 + 4;
    *plVar23 = *plVar23 + uVar22;
    plVar18[3] = uVar17 - uVar22;
    if (*plVar23 == 0) {
      (**(code **)(*plVar18 + 0x28))(&local_c8,plVar18);
      uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar9 = local_b0;
      uVar14 = local_b8;
      p_Var8 = local_c0;
      uVar22 = local_c8;
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var21 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))();
            (**(code **)(*(long *)p_Var8 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var21;
              *(int *)p_Var21 = *(int *)p_Var21 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar20 = plVar18[3];
      lVar7 = plVar18[4];
      if (lVar20 + lVar7 == 0x400) {
        if (lVar20 == 0) goto embree_TokenStream_trySymbols;
        lVar20 = lVar20 + -1;
        plVar18[3] = lVar20;
        uVar12 = (int)plVar18[2] + 1U & 0x3ff;
        plVar18[2] = (ulong)uVar12;
      }
      else {
        uVar12 = (uint)plVar18[2];
      }
      plVar18[4] = lVar7 + 1;
      puVar5 = (undefined4 *)
               (plVar18[5] + (ulong)(uVar12 + (int)lVar20 + (int)lVar7 & 0x3ff) * 0x28);
      *puVar5 = uVar10;
      p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *(ulong *)(puVar5 + 2) = uVar22;
      if (p_Var8 == p_Var21) {
LAB_001013cd:
        *(undefined8 *)(puVar5 + 6) = uVar14;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001013e0;
      }
      else {
        if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar5 + 6) = uVar14;
            *(undefined8 *)(puVar5 + 8) = uVar9;
            goto LAB_001013e0;
          }
LAB_0010138d:
          p_Var4 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var4;
              *(int *)p_Var4 = *(int *)p_Var4 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
          goto LAB_001013cd;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
          UNLOCK();
          p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        else {
          *(int *)(p_Var8 + 8) = *(int *)(p_Var8 + 8) + 1;
          p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010138d;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var8;
        *(undefined8 *)(puVar5 + 6) = uVar14;
        *(undefined8 *)(puVar5 + 8) = uVar9;
      }
      p_Var21 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar11 = *(int *)p_Var21;
          *(int *)p_Var21 = *(int *)p_Var21 + -1;
          UNLOCK();
        }
        else {
          iVar11 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar11 + -1;
        }
        if (iVar11 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
    }
LAB_001013e0:
    lVar20 = *(long *)(this + 0x348);
    uVar19 = uVar19 + 1;
    if ((ulong)(*(long *)(this + 0x350) - lVar20 >> 5) <= uVar19) goto LAB_00101402;
  }
  uVar19 = plVar23[1];
  __src = (undefined1 *)*plVar23;
  local_a8 = local_98;
  local_c8 = uVar19;
  if (uVar19 < 0x10) {
    if (uVar19 == 1) {
      local_98[0] = CONCAT71(local_98[0]._1_7_,*__src);
    }
    else if (uVar19 != 0) goto LAB_00101b81;
  }
  else {
    local_a8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_c8);
    local_98[0] = local_c8;
LAB_00101b81:
    memcpy(local_a8,__src,uVar19);
    uVar19 = local_c8;
  }
  __src_00 = local_a8;
  *(undefined1 *)((long)local_a8 + uVar19) = 0;
  local_88 = 6;
  local_80 = (Token *)local_70;
  local_c8 = uVar19;
  local_a0 = uVar19;
  if (uVar19 < 0x10) {
    if (uVar19 == 1) {
      local_70[0] = CONCAT71(local_70[0]._1_7_,(char)*local_a8);
    }
    else if (uVar19 != 0) goto LAB_00101bcc;
  }
  else {
    local_80 = (Token *)std::__cxx11::string::_M_create((ulong *)&local_80,(ulong)&local_c8);
    local_70[0] = local_c8;
LAB_00101bcc:
    memcpy(local_80,__src_00,uVar19);
  }
  local_78 = local_c8;
  local_80[local_c8] = (Token)0x0;
  local_60 = *(undefined8 *)param_2;
  local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
  if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar15 = *(Token **)(param_1 + 8);
    pTVar16 = pTVar15;
    if (pTVar15 != param_1 + 0x18) goto LAB_0010185e;
LAB_00101ca2:
    if (local_80 == (Token *)local_70) {
LAB_00101d1d:
      if (local_c8 == 0) goto LAB_00101d6a;
      if (local_c8 == 1) {
        *pTVar16 = local_70[0]._0_1_;
        pTVar15 = *(Token **)(param_1 + 8);
        goto LAB_00101d6a;
      }
      uVar12 = (uint)local_c8;
      uVar19 = local_c8 & 0xffffffff;
      if (7 < uVar12) {
        *(ulong *)pTVar16 = local_70[0];
        *(undefined8 *)(pTVar16 + ((local_c8 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)local_70 + ((local_c8 & 0xffffffff) - 8));
        lVar20 = (long)pTVar16 - ((ulong)(pTVar16 + 8) & 0xfffffffffffffff8);
        uVar12 = (int)lVar20 + uVar12 & 0xfffffff8;
        if (7 < uVar12) {
          uVar13 = 0;
          do {
            uVar19 = (ulong)uVar13;
            uVar13 = uVar13 + 8;
            *(undefined8 *)(((ulong)(pTVar16 + 8) & 0xfffffffffffffff8) + uVar19) =
                 *(undefined8 *)((Token *)local_70 + (uVar19 - lVar20));
          } while (uVar13 < uVar12);
        }
        goto LAB_00101d5b;
      }
      if ((local_c8 & 4) == 0) {
        if (uVar12 != 0) {
          *pTVar16 = local_70[0]._0_1_;
          if ((local_c8 & 2) == 0) {
LAB_00101d5b:
            pTVar15 = *(Token **)(param_1 + 8);
          }
          else {
            *(undefined2 *)(pTVar16 + (uVar19 - 2)) = *(undefined2 *)((long)local_70 + (uVar19 - 2))
            ;
            pTVar15 = *(Token **)(param_1 + 8);
          }
        }
      }
      else {
        *(undefined4 *)pTVar16 = (undefined4)local_70[0];
        *(undefined4 *)(pTVar16 + (uVar19 - 4)) = *(undefined4 *)((long)local_70 + (uVar19 - 4));
        pTVar15 = *(Token **)(param_1 + 8);
      }
LAB_00101d6a:
      *(ulong *)(param_1 + 0x10) = local_c8;
      pTVar15[local_c8] = (Token)0x0;
      uVar19 = local_70[0];
LAB_001018a8:
      local_70[0] = uVar19;
      local_78 = 0;
      *local_80 = (Token)0x0;
      p_Var21 = local_58;
      uVar14 = local_60;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
      local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
      local_60 = 0;
      *(undefined8 *)(param_1 + 0x28) = uVar14;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var21;
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = local_50;
        *(undefined8 *)(param_1 + 0x40) = local_48;
      }
      else {
        p_Var21 = p_Var8 + 8;
        if (*(long *)(p_Var8 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var8 + 8) = 0;
          (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
          (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var21;
            *(int *)p_Var21 = *(int *)p_Var21 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var8 + 8);
            *(int *)(p_Var8 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
          }
        }
        p_Var8 = local_58;
        *(undefined8 *)(param_1 + 0x38) = local_50;
        *(undefined8 *)(param_1 + 0x40) = local_48;
        if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var21 = local_58 + 8;
          if (*(long *)(local_58 + 8) == 0x100000001) {
            *(undefined8 *)(local_58 + 8) = 0;
            (**(code **)(*(long *)local_58 + 0x10))(local_58);
            (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var21;
              *(int *)p_Var21 = *(int *)p_Var21 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(local_58 + 8);
              *(int *)(local_58 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
            }
          }
        }
      }
      if (local_80 != (Token *)local_70) {
        operator_delete(local_80,local_70[0] + 1);
      }
      if (local_a8 != local_98) {
        operator_delete(local_a8,local_98[0] + 1);
      }
      uVar14 = 1;
      goto LAB_001019cb;
    }
    *(Token **)(param_1 + 8) = local_80;
    *(ulong *)(param_1 + 0x10) = local_c8;
    *(ulong *)(param_1 + 0x18) = local_70[0];
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
    }
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar15 = *(Token **)(param_1 + 8);
    pTVar16 = param_1 + 0x18;
    if (pTVar15 == param_1 + 0x18) goto LAB_00101ca2;
LAB_0010185e:
    pTVar16 = pTVar15;
    if (local_80 == (Token *)local_70) goto LAB_00101d1d;
    *(Token **)(param_1 + 8) = local_80;
    uVar19 = *(ulong *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x10) = local_c8;
    *(ulong *)(param_1 + 0x18) = local_70[0];
    local_80 = pTVar15;
    if (pTVar15 != (Token *)0x0) goto LAB_001018a8;
  }
  local_80 = (Token *)local_70;
  uVar19 = local_70[0];
  goto LAB_001018a8;
}



/* embree::TokenStream::trySymbol(std::__cxx11::string const&) */

undefined8 __thiscall embree::TokenStream::trySymbol(TokenStream *this,string *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var17;
  ulong uVar18;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var19;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    uVar18 = 0;
    do {
      cVar6 = *(char *)(*(long *)param_1 + uVar18);
      plVar16 = *(long **)(this + 0x40);
      lVar15 = plVar16[4];
      if (lVar15 == 0) {
        (**(code **)(*plVar16 + 0x28))(&local_68,plVar16);
        uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar9 = local_50;
        uVar8 = local_58;
        p_Var19 = local_60;
        uVar13 = local_68;
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
            p_Var17 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var17;
                *(int *)p_Var17 = *(int *)p_Var17 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar15 = plVar16[3];
        lVar7 = plVar16[4];
        if (lVar15 + lVar7 == 0x400) {
          if (lVar15 == 0) goto embree_TokenStream_trySymbol;
          lVar15 = lVar15 + -1;
          plVar16[3] = lVar15;
          uVar12 = (int)plVar16[2] + 1U & 0x3ff;
          plVar16[2] = (ulong)uVar12;
        }
        else {
          uVar12 = (uint)plVar16[2];
        }
        plVar16[4] = lVar7 + 1;
        puVar5 = (undefined4 *)
                 (plVar16[5] + (ulong)((int)lVar15 + uVar12 + (int)lVar7 & 0x3ff) * 0x28);
        p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *puVar5 = uVar10;
        *(undefined8 *)(puVar5 + 2) = uVar13;
        if (p_Var19 == p_Var17) {
LAB_00102180:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00102517:
            p_Var17 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
              (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var17;
                *(int *)p_Var17 = *(int *)p_Var17 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
          }
        }
        else {
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
              UNLOCK();
              p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
              if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010250b;
LAB_00102142:
              p_Var1 = p_Var17 + 8;
              if (*(long *)(p_Var17 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var17 + 8) = 0;
                (**(code **)(*(long *)p_Var17 + 0x10))();
                (**(code **)(*(long *)p_Var17 + 0x18))();
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar11 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar11 = *(int *)(p_Var17 + 8);
                  *(int *)(p_Var17 + 8) = iVar11 + -1;
                }
                if (iVar11 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var17);
                }
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var19;
              goto LAB_00102180;
            }
            *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
            p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102142;
LAB_0010250b:
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var19;
            *(undefined8 *)(puVar5 + 6) = uVar8;
            *(undefined8 *)(puVar5 + 8) = uVar9;
            goto LAB_00102517;
          }
          if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102142;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
        }
        plVar2 = plVar16 + 3;
        plVar3 = plVar16 + 2;
        plVar4 = plVar16 + 5;
        plVar16 = *(long **)(this + 0x40);
        if ((int)cVar6 != *(int *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28)) {
          uVar14 = plVar16[3];
LAB_0010237e:
          if (uVar14 < uVar18) {
embree_TokenStream_trySymbol:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar2 = plVar16 + 4;
          *plVar2 = *plVar2 + uVar18;
          plVar16[3] = uVar14 - uVar18;
          if (*plVar2 == 0) {
            (**(code **)(*plVar16 + 0x28))(&local_68,plVar16);
            uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
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
                p_Var19 = local_60 + 8;
                if (*(long *)(local_60 + 8) == 0x100000001) {
                  *(undefined8 *)(local_60 + 8) = 0;
                  (**(code **)(*(long *)local_60 + 0x10))();
                  (**(code **)(*(long *)local_60 + 0x18))();
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar11 = *(int *)p_Var19;
                    *(int *)p_Var19 = *(int *)p_Var19 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar11 = *(int *)(local_60 + 8);
                    *(int *)(local_60 + 8) = iVar11 + -1;
                  }
                  if (iVar11 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (local_60);
                  }
                }
              }
            }
            lVar15 = plVar16[3];
            lVar7 = plVar16[4];
            if (lVar15 + lVar7 == 0x400) {
              if (lVar15 == 0) goto embree_TokenStream_trySymbol;
              lVar15 = lVar15 + -1;
              plVar16[3] = lVar15;
              uVar12 = (int)plVar16[2] + 1U & 0x3ff;
              plVar16[2] = (ulong)uVar12;
            }
            else {
              uVar12 = (uint)plVar16[2];
            }
            plVar16[4] = lVar7 + 1;
            puVar5 = (undefined4 *)
                     (plVar16[5] + (ulong)(uVar12 + (int)lVar15 + (int)lVar7 & 0x3ff) * 0x28);
            *puVar5 = uVar10;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            *(undefined8 *)(puVar5 + 2) = local_68;
            if (local_60 == p_Var19) {
LAB_001024da:
              *(undefined8 *)(puVar5 + 6) = local_58;
              *(undefined8 *)(puVar5 + 8) = local_50;
              if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
              goto LAB_001024eb;
            }
            else {
              if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00102496:
                  p_Var17 = p_Var19 + 8;
                  if (*(long *)(p_Var19 + 8) == 0x100000001) {
                    *(undefined8 *)(p_Var19 + 8) = 0;
                    (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
                    (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
                  }
                  else {
                    if (__libc_single_threaded == '\0') {
                      LOCK();
                      iVar11 = *(int *)p_Var17;
                      *(int *)p_Var17 = *(int *)p_Var17 + -1;
                      UNLOCK();
                    }
                    else {
                      iVar11 = *(int *)(p_Var19 + 8);
                      *(int *)(p_Var19 + 8) = iVar11 + -1;
                    }
                    if (iVar11 == 1) {
                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                (p_Var19);
                    }
                  }
                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_60;
                  goto LAB_001024da;
                }
                *(undefined8 *)(puVar5 + 6) = local_58;
                uVar13 = 0;
                *(undefined8 *)(puVar5 + 8) = local_50;
                goto LAB_00102755;
              }
              if (__libc_single_threaded == '\0') {
                LOCK();
                *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                UNLOCK();
                p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
              }
              else {
                *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
              }
              if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102496;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_60;
              *(undefined8 *)(puVar5 + 6) = local_58;
              *(undefined8 *)(puVar5 + 8) = local_50;
            }
            p_Var19 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              (**(code **)(*(long *)local_60 + 0x18))(local_60);
              uVar13 = 0;
              goto LAB_00102755;
            }
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
              uVar13 = 0;
              goto LAB_00102755;
            }
          }
LAB_001024eb:
          uVar13 = 0;
          goto LAB_00102755;
        }
        lVar15 = plVar16[4];
        if (lVar15 != 0) {
          uVar14 = plVar16[3];
          goto LAB_00102320;
        }
        (**(code **)(*plVar16 + 0x28))(&local_68,plVar16);
        uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar9 = local_50;
        uVar8 = local_58;
        p_Var19 = local_60;
        uVar13 = local_68;
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
            p_Var17 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var17;
                *(int *)p_Var17 = *(int *)p_Var17 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar15 = plVar16[3];
        lVar7 = plVar16[4];
        if (lVar15 + lVar7 == 0x400) {
          if (lVar15 == 0) goto embree_TokenStream_trySymbol;
          lVar15 = lVar15 + -1;
          plVar16[3] = lVar15;
          uVar12 = (int)plVar16[2] + 1U & 0x3ff;
          plVar16[2] = (ulong)uVar12;
        }
        else {
          uVar12 = (uint)plVar16[2];
        }
        plVar16[4] = lVar7 + 1;
        puVar5 = (undefined4 *)
                 (plVar16[5] + (ulong)((int)lVar15 + uVar12 + (int)lVar7 & 0x3ff) * 0x28);
        *puVar5 = uVar10;
        p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = uVar13;
        if (p_Var19 == p_Var17) {
LAB_00102307:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001025af;
        }
        else {
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = uVar8;
              *(undefined8 *)(puVar5 + 8) = uVar9;
              uVar14 = plVar16[3];
              lVar15 = plVar16[4];
              goto LAB_00102320;
            }
LAB_001022c7:
            p_Var1 = p_Var17 + 8;
            if (*(long *)(p_Var17 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var17 + 8) = 0;
              (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
              (**(code **)(*(long *)p_Var17 + 0x18))(p_Var17);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(p_Var17 + 8);
                *(int *)(p_Var17 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var19;
            goto LAB_00102307;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
            UNLOCK();
            p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
            p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001022c7;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var19;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_001025af:
          p_Var17 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
            (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
            uVar14 = plVar16[3];
            lVar15 = plVar16[4];
            goto LAB_00102320;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var17;
            *(int *)p_Var17 = *(int *)p_Var17 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var19 + 8);
            *(int *)(p_Var19 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
          }
        }
        uVar14 = plVar16[3];
        lVar15 = plVar16[4];
      }
      else {
        uVar14 = plVar16[3];
        if ((int)cVar6 !=
            *(int *)(plVar16[5] + (ulong)((int)plVar16[2] + (int)uVar14 & 0x3ff) * 0x28))
        goto LAB_0010237e;
      }
LAB_00102320:
      uVar18 = uVar18 + 1;
      plVar16[3] = uVar14 + 1;
      plVar16[4] = lVar15 + -1;
    } while (uVar18 < *(ulong *)(param_1 + 8));
  }
  uVar13 = 1;
LAB_00102755:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* embree::TokenStream::decDigits1(std::__cxx11::string&) */

char __thiscall embree::TokenStream::decDigits1(TokenStream *this,string *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  ulong uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var16;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var17;
  char cVar18;
  long in_FS_OFFSET;
  undefined8 local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  cVar18 = '\0';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  do {
    plVar14 = *(long **)(this + 0x40);
    lVar15 = plVar14[4];
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x28))(&local_88,plVar14);
      uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
      uVar7 = local_70;
      uVar6 = local_78;
      p_Var17 = local_80;
      uVar5 = local_88;
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        }
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var16 = local_80 + 8;
          if (*(long *)(local_80 + 8) == 0x100000001) {
            *(undefined8 *)(local_80 + 8) = 0;
            (**(code **)(*(long *)local_80 + 0x10))();
            (**(code **)(*(long *)p_Var17 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var16;
              *(int *)p_Var16 = *(int *)p_Var16 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(local_80 + 8);
              *(int *)(local_80 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
            }
          }
        }
      }
      lVar15 = plVar14[3];
      lVar12 = plVar14[4];
      if (lVar15 + lVar12 == 0x400) {
        if (lVar15 == 0) goto embree_TokenStream_decDigits1;
        lVar15 = lVar15 + -1;
        plVar14[3] = lVar15;
        uVar10 = (int)plVar14[2] + 1U & 0x3ff;
        plVar14[2] = (ulong)uVar10;
      }
      else {
        uVar10 = (uint)plVar14[2];
      }
      plVar14[4] = lVar12 + 1;
      puVar4 = (undefined4 *)
               (plVar14[5] + (ulong)(uVar10 + (int)lVar15 + (int)lVar12 & 0x3ff) * 0x28);
      p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
      *puVar4 = uVar9;
      *(undefined8 *)(puVar4 + 2) = uVar5;
      if (p_Var17 == p_Var16) {
LAB_00102c79:
        *(undefined8 *)(puVar4 + 6) = uVar6;
        *(undefined8 *)(puVar4 + 8) = uVar7;
        if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00102f76:
          p_Var16 = p_Var17 + 8;
          if (*(long *)(p_Var17 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var17 + 8) = 0;
            (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
            (**(code **)(*(long *)p_Var17 + 0x18))(p_Var17);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar11 = *(int *)p_Var16;
              *(int *)p_Var16 = *(int *)p_Var16 + -1;
              UNLOCK();
            }
            else {
              iVar11 = *(int *)(p_Var17 + 8);
              *(int *)(p_Var17 + 8) = iVar11 + -1;
            }
            if (iVar11 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
            }
          }
        }
      }
      else {
        if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var17 + 8) = *(int *)(p_Var17 + 8) + 1;
            UNLOCK();
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
            if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102f6a;
LAB_00102c45:
            p_Var1 = p_Var16 + 8;
            if (*(long *)(p_Var16 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var16 + 8) = 0;
              (**(code **)(*(long *)p_Var16 + 0x10))();
              (**(code **)(*(long *)p_Var16 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(p_Var16 + 8);
                *(int *)(p_Var16 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = p_Var17;
            goto LAB_00102c79;
          }
          *(int *)(p_Var17 + 8) = *(int *)(p_Var17 + 8) + 1;
          p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
          if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102c45;
LAB_00102f6a:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = p_Var17;
          *(undefined8 *)(puVar4 + 6) = uVar6;
          *(undefined8 *)(puVar4 + 8) = uVar7;
          goto LAB_00102f76;
        }
        if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102c45;
        *(undefined8 *)(puVar4 + 6) = uVar6;
        *(undefined8 *)(puVar4 + 8) = uVar7;
      }
      if (9 < *(int *)(plVar14[5] + (ulong)((int)plVar14[3] + (int)plVar14[2] & 0x3ff) * 0x28) -
              0x30U) break;
      plVar14 = *(long **)(this + 0x40);
      lVar15 = plVar14[4];
      if (lVar15 == 0) {
        (**(code **)(*plVar14 + 0x28))(&local_88,plVar14);
        uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
        uVar7 = local_70;
        uVar6 = local_78;
        p_Var17 = local_80;
        uVar5 = local_88;
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          }
          if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var16 = local_80 + 8;
            if (*(long *)(local_80 + 8) == 0x100000001) {
              *(undefined8 *)(local_80 + 8) = 0;
              (**(code **)(*(long *)local_80 + 0x10))();
              (**(code **)(*(long *)p_Var17 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var16;
                *(int *)p_Var16 = *(int *)p_Var16 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(local_80 + 8);
                *(int *)(local_80 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_80);
              }
            }
          }
        }
        lVar15 = plVar14[3];
        lVar12 = plVar14[4];
        if (lVar15 + lVar12 == 0x400) {
          if (lVar15 == 0) goto embree_TokenStream_decDigits1;
          lVar15 = lVar15 + -1;
          plVar14[3] = lVar15;
          uVar10 = (int)plVar14[2] + 1U & 0x3ff;
          plVar14[2] = (ulong)uVar10;
        }
        else {
          uVar10 = (uint)plVar14[2];
        }
        plVar14[4] = lVar12 + 1;
        puVar4 = (undefined4 *)
                 (plVar14[5] + (ulong)((int)lVar15 + uVar10 + (int)lVar12 & 0x3ff) * 0x28);
        *puVar4 = uVar9;
        p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
        *(undefined8 *)(puVar4 + 2) = uVar5;
        if (p_Var17 == p_Var16) {
LAB_00102ded:
          *(undefined8 *)(puVar4 + 6) = uVar6;
          *(undefined8 *)(puVar4 + 8) = uVar7;
          if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00102fff:
            p_Var16 = p_Var17 + 8;
            if (*(long *)(p_Var17 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var17 + 8) = 0;
              (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
              (**(code **)(*(long *)p_Var17 + 0x18))(p_Var17);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var16;
                *(int *)p_Var16 = *(int *)p_Var16 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(p_Var17 + 8);
                *(int *)(p_Var17 + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17)
                ;
              }
            }
          }
        }
        else {
          if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var17 + 8) = *(int *)(p_Var17 + 8) + 1;
              UNLOCK();
              p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
              if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102ff3;
LAB_00102db7:
              p_Var1 = p_Var16 + 8;
              if (*(long *)(p_Var16 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var16 + 8) = 0;
                (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
                (**(code **)(*(long *)p_Var16 + 0x18))(p_Var16);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar11 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar11 = *(int *)(p_Var16 + 8);
                  *(int *)(p_Var16 + 8) = iVar11 + -1;
                }
                if (iVar11 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var16);
                }
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = p_Var17;
              goto LAB_00102ded;
            }
            *(int *)(p_Var17 + 8) = *(int *)(p_Var17 + 8) + 1;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102db7;
LAB_00102ff3:
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = p_Var17;
            *(undefined8 *)(puVar4 + 6) = uVar6;
            *(undefined8 *)(puVar4 + 8) = uVar7;
            goto LAB_00102fff;
          }
          if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102db7;
          *(undefined8 *)(puVar4 + 6) = uVar6;
          *(undefined8 *)(puVar4 + 8) = uVar7;
        }
        lVar12 = plVar14[3];
        iVar11 = *(int *)(plVar14[5] + (ulong)((int)plVar14[2] + (int)lVar12 & 0x3ff) * 0x28);
        lVar15 = plVar14[4];
      }
      else {
        lVar12 = plVar14[3];
        iVar11 = *(int *)((ulong)((int)plVar14[2] + (int)lVar12 & 0x3ff) * 0x28 + plVar14[5]);
      }
    }
    else {
      lVar12 = plVar14[3];
      iVar11 = *(int *)(plVar14[5] + (ulong)((int)plVar14[2] + (int)lVar12 & 0x3ff) * 0x28);
      if (9 < iVar11 - 0x30U) break;
    }
    uVar8 = local_60;
    plVar14[4] = lVar15 + -1;
    plVar14[3] = lVar12 + 1;
    uVar2 = local_60 + 1;
    if (local_68 == &local_58) {
      uVar13 = 0xf;
    }
    else {
      uVar13 = CONCAT71(uStack_57,local_58);
    }
    if (uVar13 < uVar2) {
      std::__cxx11::string::_M_mutate((ulong)&local_68,local_60,(char *)0x0,0);
    }
    local_68[uVar8] = (char)iVar11;
    cVar18 = '\x01';
    local_68[uVar8 + 1] = 0;
    local_60 = uVar2;
  } while( true );
  if (cVar18 == '\0') {
    plVar14 = *(long **)(this + 0x40);
    if ((ulong)plVar14[3] < local_60) {
embree_TokenStream_decDigits1:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = plVar14 + 4;
    *plVar3 = *plVar3 + local_60;
    plVar14[3] = plVar14[3] - local_60;
    if (*plVar3 != 0) goto LAB_00102ee4;
    (**(code **)(*plVar14 + 0x28))(&local_88,plVar14);
    uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      }
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var17 = local_80 + 8;
        if (*(long *)(local_80 + 8) == 0x100000001) {
          *(undefined8 *)(local_80 + 8) = 0;
          (**(code **)(*(long *)local_80 + 0x10))();
          (**(code **)(*(long *)local_80 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var17;
            *(int *)p_Var17 = *(int *)p_Var17 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(local_80 + 8);
            *(int *)(local_80 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
          }
        }
      }
    }
    lVar15 = plVar14[3];
    lVar12 = plVar14[4];
    if (lVar15 + lVar12 == 0x400) {
      if (lVar15 == 0) goto embree_TokenStream_decDigits1;
      lVar15 = lVar15 + -1;
      plVar14[3] = lVar15;
      uVar10 = (int)plVar14[2] + 1U & 0x3ff;
      plVar14[2] = (ulong)uVar10;
    }
    else {
      uVar10 = (uint)plVar14[2];
    }
    plVar14[4] = lVar12 + 1;
    puVar4 = (undefined4 *)(plVar14[5] + (ulong)(uVar10 + (int)lVar15 + (int)lVar12 & 0x3ff) * 0x28)
    ;
    *puVar4 = uVar9;
    p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
    *(undefined8 *)(puVar4 + 2) = local_88;
    if (local_80 == p_Var17) {
LAB_0010339c:
      *(undefined8 *)(puVar4 + 6) = local_78;
      *(undefined8 *)(puVar4 + 8) = local_70;
      if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102ee4;
    }
    else {
      if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          *(undefined8 *)(puVar4 + 6) = local_78;
          *(undefined8 *)(puVar4 + 8) = local_70;
          goto LAB_00102ee4;
        }
LAB_00103358:
        p_Var16 = p_Var17 + 8;
        if (*(long *)(p_Var17 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var17 + 8) = 0;
          (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
          (**(code **)(*(long *)p_Var17 + 0x18))(p_Var17);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var16;
            *(int *)p_Var16 = *(int *)p_Var16 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var17 + 8);
            *(int *)(p_Var17 + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
          }
        }
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = local_80;
        goto LAB_0010339c;
      }
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
        p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
      }
      else {
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4);
      }
      if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103358;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar4 + 4) = local_80;
      *(undefined8 *)(puVar4 + 6) = local_78;
      *(undefined8 *)(puVar4 + 8) = local_70;
    }
    p_Var17 = local_80 + 8;
    if (*(long *)(local_80 + 8) == 0x100000001) {
      *(undefined8 *)(local_80 + 8) = 0;
      (**(code **)(*(long *)local_80 + 0x10))(local_80);
      (**(code **)(*(long *)local_80 + 0x18))(local_80);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar11 = *(int *)p_Var17;
        *(int *)p_Var17 = *(int *)p_Var17 + -1;
        UNLOCK();
      }
      else {
        iVar11 = *(int *)(local_80 + 8);
        *(int *)(local_80 + 8) = iVar11 + -1;
      }
      if (iVar11 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
      }
    }
  }
  else {
    if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < local_60) {
      std::__throw_length_error("basic_string::append");
      goto LAB_00103718;
    }
    std::__cxx11::string::_M_append((char *)param_1,(ulong)local_68);
  }
LAB_00102ee4:
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar18;
  }
LAB_00103718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::tryString(embree::Token&, embree::ParseLocation const&) */

undefined8 __thiscall
embree::TokenStream::tryString(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *__src;
  ulong *__src_00;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  Token *pTVar11;
  uint uVar12;
  long lVar13;
  Token *pTVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var20;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var21;
  long in_FS_OFFSET;
  ulong local_e8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  plVar18 = *(long **)(this + 0x40);
  lVar16 = plVar18[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_b8 = 0;
  local_c8 = &local_b8;
  if (lVar16 == 0) {
    (**(code **)(*plVar18 + 0x28))(&local_e8,plVar18);
    uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
    uVar7 = local_d0;
    uVar19 = local_d8;
    p_Var21 = local_e0;
    uVar15 = local_e8;
    if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      }
      if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var20 = local_e0 + 8;
        if (*(long *)(local_e0 + 8) == 0x100000001) {
          *(undefined8 *)(local_e0 + 8) = 0;
          (**(code **)(*(long *)local_e0 + 0x10))();
          (**(code **)(*(long *)p_Var21 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var20;
            *(int *)p_Var20 = *(int *)p_Var20 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(local_e0 + 8);
            *(int *)(local_e0 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
          }
        }
      }
    }
    lVar16 = plVar18[3];
    lVar13 = plVar18[4];
    if (lVar16 + lVar13 == 0x400) {
      if (lVar16 == 0) goto embree_TokenStream_tryString;
      lVar16 = lVar16 + -1;
      plVar18[3] = lVar16;
      uVar12 = (int)plVar18[2] + 1U & 0x3ff;
      plVar18[2] = (ulong)uVar12;
    }
    else {
      uVar12 = (uint)plVar18[2];
    }
    plVar18[4] = lVar13 + 1;
    puVar5 = (undefined4 *)(plVar18[5] + (ulong)((int)lVar16 + uVar12 + (int)lVar13 & 0x3ff) * 0x28)
    ;
    p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
    *puVar5 = uVar8;
    *(ulong *)(puVar5 + 2) = uVar15;
    if (p_Var21 == p_Var20) {
LAB_001038bc:
      *(undefined8 *)(puVar5 + 6) = uVar19;
      *(undefined8 *)(puVar5 + 8) = uVar7;
      if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010413f:
        p_Var20 = p_Var21 + 8;
        if (*(long *)(p_Var21 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var21 + 8) = 0;
          (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
          (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var20;
            *(int *)p_Var20 = *(int *)p_Var20 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var21 + 8);
            *(int *)(p_Var21 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
          }
        }
      }
    }
    else {
      if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          UNLOCK();
          p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var20 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104133;
LAB_0010387e:
          p_Var1 = p_Var20 + 8;
          if (*(long *)(p_Var20 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var20 + 8) = 0;
            (**(code **)(*(long *)p_Var20 + 0x10))();
            (**(code **)(*(long *)p_Var20 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var20 + 8);
              *(int *)(p_Var20 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var20);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          goto LAB_001038bc;
        }
        *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
        p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010387e;
LAB_00104133:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
        goto LAB_0010413f;
      }
      if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010387e;
      *(undefined8 *)(puVar5 + 6) = uVar19;
      *(undefined8 *)(puVar5 + 8) = uVar7;
    }
    uVar19 = 0;
    if (*(int *)(plVar18[5] + (ulong)((int)plVar18[3] + (int)plVar18[2] & 0x3ff) * 0x28) == 0x22) {
      plVar18 = *(long **)(this + 0x40);
      lVar16 = plVar18[4];
      if (lVar16 != 0) goto LAB_0010395a;
      (**(code **)(*plVar18 + 0x28))(&local_e8,plVar18);
      uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar7 = local_d0;
      uVar19 = local_d8;
      p_Var21 = local_e0;
      uVar15 = local_e8;
      if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        }
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var20 = local_e0 + 8;
          if (*(long *)(local_e0 + 8) == 0x100000001) {
            *(undefined8 *)(local_e0 + 8) = 0;
            (**(code **)(*(long *)local_e0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var20;
              *(int *)p_Var20 = *(int *)p_Var20 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(local_e0 + 8);
              *(int *)(local_e0 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
            }
          }
        }
      }
      lVar16 = plVar18[3];
      lVar13 = plVar18[4];
      if (lVar16 + lVar13 == 0x400) {
        if (lVar16 == 0) {
embree_TokenStream_tryString:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar16 = lVar16 + -1;
        plVar18[3] = lVar16;
        uVar12 = (int)plVar18[2] + 1U & 0x3ff;
        plVar18[2] = (ulong)uVar12;
      }
      else {
        uVar12 = (uint)plVar18[2];
      }
      plVar18[4] = lVar13 + 1;
      puVar5 = (undefined4 *)
               (plVar18[5] + (ulong)((int)lVar16 + uVar12 + (int)lVar13 & 0x3ff) * 0x28);
      *puVar5 = uVar8;
      p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *(ulong *)(puVar5 + 2) = uVar15;
      if (p_Var21 == p_Var20) {
LAB_00104605:
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001048f9;
      }
      else {
        if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var20 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar5 + 6) = uVar19;
            *(undefined8 *)(puVar5 + 8) = uVar7;
            lVar16 = plVar18[4];
            goto LAB_0010395a;
          }
LAB_001045c5:
          p_Var1 = p_Var20 + 8;
          if (*(long *)(p_Var20 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var20 + 8) = 0;
            (**(code **)(*(long *)p_Var20 + 0x10))(p_Var20);
            (**(code **)(*(long *)p_Var20 + 0x18))(p_Var20);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var20 + 8);
              *(int *)(p_Var20 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var20);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          goto LAB_00104605;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          UNLOCK();
          p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        else {
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001045c5;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
LAB_001048f9:
        p_Var20 = p_Var21 + 8;
        if (*(long *)(p_Var21 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var21 + 8) = 0;
          (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
          (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          lVar16 = plVar18[4];
          goto LAB_0010395a;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var20;
          *(int *)p_Var20 = *(int *)p_Var20 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(p_Var21 + 8);
          *(int *)(p_Var21 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
        }
      }
      lVar16 = plVar18[4];
      goto LAB_0010395a;
    }
  }
  else {
    if (*(int *)(plVar18[5] + (ulong)((int)plVar18[3] + (int)plVar18[2] & 0x3ff) * 0x28) != 0x22) {
      uVar19 = 0;
      goto LAB_00103909;
    }
LAB_0010395a:
    plVar18[3] = plVar18[3] + 1;
    plVar18[4] = lVar16 + -1;
    while( true ) {
      plVar18 = *(long **)(this + 0x40);
      lVar16 = plVar18[4];
      if (lVar16 != 0) break;
      (**(code **)(*plVar18 + 0x28))(&local_e8,plVar18);
      uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar7 = local_d0;
      uVar19 = local_d8;
      p_Var21 = local_e0;
      uVar15 = local_e8;
      if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        }
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var20 = local_e0 + 8;
          if (*(long *)(local_e0 + 8) == 0x100000001) {
            *(undefined8 *)(local_e0 + 8) = 0;
            (**(code **)(*(long *)local_e0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var20;
              *(int *)p_Var20 = *(int *)p_Var20 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(local_e0 + 8);
              *(int *)(local_e0 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
            }
          }
        }
      }
      lVar16 = plVar18[3];
      lVar13 = plVar18[4];
      if (lVar16 + lVar13 == 0x400) {
        if (lVar16 == 0) goto embree_TokenStream_tryString;
        lVar16 = lVar16 + -1;
        plVar18[3] = lVar16;
        uVar12 = (int)plVar18[2] + 1U & 0x3ff;
        plVar18[2] = (ulong)uVar12;
      }
      else {
        uVar12 = (uint)plVar18[2];
      }
      plVar18[4] = lVar13 + 1;
      puVar5 = (undefined4 *)
               (plVar18[5] + (ulong)((int)lVar16 + uVar12 + (int)lVar13 & 0x3ff) * 0x28);
      p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *puVar5 = uVar8;
      *(ulong *)(puVar5 + 2) = uVar15;
      if (p_Var21 == p_Var20) {
LAB_00103aaa:
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00103fe6:
          p_Var20 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var20;
              *(int *)p_Var20 = *(int *)p_Var20 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
        }
      }
      else {
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            UNLOCK();
            p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var20 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103fda;
LAB_00103a76:
            p_Var1 = p_Var20 + 8;
            if (*(long *)(p_Var20 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var20 + 8) = 0;
              (**(code **)(*(long *)p_Var20 + 0x10))();
              (**(code **)(*(long *)p_Var20 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var20 + 8);
                *(int *)(p_Var20 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var20)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
            goto LAB_00103aaa;
          }
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103a76;
LAB_00103fda:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          *(undefined8 *)(puVar5 + 6) = uVar19;
          *(undefined8 *)(puVar5 + 8) = uVar7;
          goto LAB_00103fe6;
        }
        if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103a76;
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
      }
      plVar2 = plVar18 + 3;
      plVar3 = plVar18 + 2;
      plVar4 = plVar18 + 5;
      plVar18 = *(long **)(this + 0x40);
      lVar16 = plVar18[4];
      if (*(int *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28) == 0x22) {
        if (lVar16 != 0) goto LAB_00103cf0;
        (**(code **)(*plVar18 + 0x28))(&local_e8,plVar18);
        uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          }
          if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var21 = local_e0 + 8;
            if (*(long *)(local_e0 + 8) == 0x100000001) {
              *(undefined8 *)(local_e0 + 8) = 0;
              (**(code **)(*(long *)local_e0 + 0x10))();
              (**(code **)(*(long *)local_e0 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var21;
                *(int *)p_Var21 = *(int *)p_Var21 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(local_e0 + 8);
                *(int *)(local_e0 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_e0);
              }
            }
          }
        }
        lVar16 = plVar18[3];
        lVar13 = plVar18[4];
        if (lVar16 + lVar13 == 0x400) {
          if (lVar16 == 0) goto embree_TokenStream_tryString;
          lVar16 = lVar16 + -1;
          plVar18[3] = lVar16;
          uVar12 = (int)plVar18[2] + 1U & 0x3ff;
          plVar18[2] = (ulong)uVar12;
        }
        else {
          uVar12 = (uint)plVar18[2];
        }
        plVar18[4] = lVar13 + 1;
        puVar5 = (undefined4 *)
                 (plVar18[5] + (ulong)((int)lVar16 + uVar12 + (int)lVar13 & 0x3ff) * 0x28);
        *puVar5 = uVar8;
        p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(ulong *)(puVar5 + 2) = local_e8;
        if (local_e0 == p_Var21) {
LAB_00104477:
          *(undefined8 *)(puVar5 + 6) = local_d8;
          *(undefined8 *)(puVar5 + 8) = local_d0;
          if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104964;
        }
        else {
          if (local_e0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = local_d8;
              *(undefined8 *)(puVar5 + 8) = local_d0;
              lVar16 = plVar18[4];
              goto LAB_00103cf0;
            }
LAB_00104433:
            p_Var20 = p_Var21 + 8;
            if (*(long *)(p_Var21 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var21 + 8) = 0;
              (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
              (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var20;
                *(int *)p_Var20 = *(int *)p_Var20 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var21 + 8);
                *(int *)(p_Var21 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_e0;
            goto LAB_00104477;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
            p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104433;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_e0;
          *(undefined8 *)(puVar5 + 6) = local_d8;
          *(undefined8 *)(puVar5 + 8) = local_d0;
LAB_00104964:
          p_Var21 = local_e0 + 8;
          if (*(long *)(local_e0 + 8) == 0x100000001) {
            *(undefined8 *)(local_e0 + 8) = 0;
            (**(code **)(*(long *)local_e0 + 0x10))(local_e0);
            (**(code **)(*(long *)local_e0 + 0x18))(local_e0);
            lVar16 = plVar18[4];
            goto LAB_00103cf0;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var21;
            *(int *)p_Var21 = *(int *)p_Var21 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(local_e0 + 8);
            *(int *)(local_e0 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
          }
        }
        lVar16 = plVar18[4];
        goto LAB_00103cf0;
      }
      if (lVar16 != 0) {
        lVar13 = plVar18[3];
        uVar12 = *(uint *)((ulong)((int)plVar18[2] + (int)lVar13 & 0x3ff) * 0x28 + plVar18[5]);
        goto LAB_00103c4a;
      }
      (**(code **)(*plVar18 + 0x28))(&local_e8,plVar18);
      uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar7 = local_d0;
      uVar19 = local_d8;
      p_Var21 = local_e0;
      uVar15 = local_e8;
      if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        }
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var20 = local_e0 + 8;
          if (*(long *)(local_e0 + 8) == 0x100000001) {
            *(undefined8 *)(local_e0 + 8) = 0;
            (**(code **)(*(long *)local_e0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var20;
              *(int *)p_Var20 = *(int *)p_Var20 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(local_e0 + 8);
              *(int *)(local_e0 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
            }
          }
        }
      }
      lVar16 = plVar18[3];
      lVar13 = plVar18[4];
      if (lVar16 + lVar13 == 0x400) {
        if (lVar16 == 0) goto embree_TokenStream_tryString;
        lVar16 = lVar16 + -1;
        plVar18[3] = lVar16;
        uVar12 = (int)plVar18[2] + 1U & 0x3ff;
        plVar18[2] = (ulong)uVar12;
      }
      else {
        uVar12 = (uint)plVar18[2];
      }
      plVar18[4] = lVar13 + 1;
      puVar5 = (undefined4 *)
               (plVar18[5] + (ulong)((int)lVar16 + uVar12 + (int)lVar13 & 0x3ff) * 0x28);
      p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *puVar5 = uVar8;
      *(ulong *)(puVar5 + 2) = uVar15;
      if (p_Var21 == p_Var20) {
LAB_00103c17:
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00104070:
          p_Var20 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var20;
              *(int *)p_Var20 = *(int *)p_Var20 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
        }
      }
      else {
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            UNLOCK();
            p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var20 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104064;
LAB_00103be3:
            p_Var1 = p_Var20 + 8;
            if (*(long *)(p_Var20 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var20 + 8) = 0;
              (**(code **)(*(long *)p_Var20 + 0x10))();
              (**(code **)(*(long *)p_Var20 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var20 + 8);
                *(int *)(p_Var20 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var20)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
            goto LAB_00103c17;
          }
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var20 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103be3;
LAB_00104064:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          *(undefined8 *)(puVar5 + 6) = uVar19;
          *(undefined8 *)(puVar5 + 8) = uVar7;
          goto LAB_00104070;
        }
        if (p_Var20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103be3;
        *(undefined8 *)(puVar5 + 6) = uVar19;
        *(undefined8 *)(puVar5 + 8) = uVar7;
      }
      lVar13 = plVar18[3];
      uVar12 = *(uint *)(plVar18[5] + (ulong)((int)plVar18[2] + (int)lVar13 & 0x3ff) * 0x28);
      lVar16 = plVar18[4];
LAB_00103c4a:
      uVar15 = local_c0;
      plVar18[3] = lVar13 + 1;
      plVar18[4] = lVar16 + -1;
      if ((0xff < uVar12) || (this[(ulong)uVar12 + 0x248] == (TokenStream)0x0))
      goto embree_TokenStream_tryString;
      uVar6 = local_c0 + 1;
      if (local_c8 == &local_b8) {
        uVar17 = 0xf;
      }
      else {
        uVar17 = CONCAT71(uStack_b7,local_b8);
      }
      if (uVar17 < uVar6) {
        std::__cxx11::string::_M_mutate((ulong)&local_c8,local_c0,(char *)0x0,0);
      }
      local_c8[uVar15] = (char)uVar12;
      local_c8[uVar15 + 1] = 0;
      local_c0 = uVar6;
    }
    lVar13 = plVar18[3];
    uVar12 = *(uint *)(plVar18[5] + (ulong)((int)plVar18[2] + (int)lVar13 & 0x3ff) * 0x28);
    if (uVar12 != 0x22) goto LAB_00103c4a;
LAB_00103cf0:
    uVar15 = local_c0;
    __src = local_c8;
    plVar18[3] = plVar18[3] + 1;
    plVar18[4] = lVar16 + -1;
    local_a8 = local_98;
    local_e8 = local_c0;
    if (local_c0 < 0x10) {
      if (local_c0 == 1) {
        local_98[0] = CONCAT71(local_98[0]._1_7_,*local_c8);
      }
      else if (local_c0 != 0) goto LAB_001047cc;
    }
    else {
      local_a8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_e8);
      local_98[0] = local_e8;
LAB_001047cc:
      memcpy(local_a8,__src,uVar15);
      uVar15 = local_e8;
    }
    __src_00 = local_a8;
    local_a0 = uVar15;
    *(undefined1 *)((long)local_a8 + uVar15) = 0;
    local_80 = (Token *)local_70;
    local_88 = 5;
    local_e8 = uVar15;
    if (uVar15 < 0x10) {
      if (uVar15 == 1) {
        local_70[0] = CONCAT71(local_70[0]._1_7_,(char)*local_a8);
      }
      else if (uVar15 != 0) goto LAB_00104784;
    }
    else {
      local_80 = (Token *)std::__cxx11::string::_M_create((ulong *)&local_80,(ulong)&local_e8);
      local_70[0] = local_e8;
LAB_00104784:
      memcpy(local_80,__src_00,uVar15);
    }
    local_78 = local_e8;
    local_80[local_e8] = (Token)0x0;
    local_60 = *(undefined8 *)param_2;
    local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
    if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      local_50 = *(undefined8 *)(param_2 + 0x10);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = local_88;
      *(undefined4 *)(param_1 + 4) = local_84;
      pTVar11 = *(Token **)(param_1 + 8);
      pTVar14 = pTVar11;
      if (pTVar11 == param_1 + 0x18) goto LAB_00104894;
LAB_00103e28:
      pTVar14 = pTVar11;
      if (local_80 != (Token *)local_70) {
        *(Token **)(param_1 + 8) = local_80;
        uVar15 = *(ulong *)(param_1 + 0x18);
        *(ulong *)(param_1 + 0x10) = local_e8;
        *(ulong *)(param_1 + 0x18) = local_70[0];
        local_80 = pTVar11;
        if (pTVar11 == (Token *)0x0) goto LAB_001048c1;
        goto LAB_00103e72;
      }
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
      }
      local_50 = *(undefined8 *)(param_2 + 0x10);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = local_88;
      *(undefined4 *)(param_1 + 4) = local_84;
      pTVar11 = *(Token **)(param_1 + 8);
      pTVar14 = param_1 + 0x18;
      if (pTVar11 != param_1 + 0x18) goto LAB_00103e28;
LAB_00104894:
      if (local_80 != (Token *)local_70) {
        *(Token **)(param_1 + 8) = local_80;
        *(ulong *)(param_1 + 0x10) = local_e8;
        *(ulong *)(param_1 + 0x18) = local_70[0];
LAB_001048c1:
        local_80 = (Token *)local_70;
        uVar15 = local_70[0];
        goto LAB_00103e72;
      }
    }
    if (local_e8 == 0) goto LAB_00104aa5;
    if (local_e8 == 1) {
      *pTVar14 = local_70[0]._0_1_;
      pTVar11 = *(Token **)(param_1 + 8);
      goto LAB_00104aa5;
    }
    uVar12 = (uint)local_e8;
    uVar15 = local_e8 & 0xffffffff;
    if (7 < uVar12) {
      *(ulong *)pTVar14 = local_70[0];
      *(undefined8 *)(pTVar14 + ((local_e8 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)local_70 + ((local_e8 & 0xffffffff) - 8));
      lVar16 = (long)pTVar14 - ((ulong)(pTVar14 + 8) & 0xfffffffffffffff8);
      uVar12 = (int)lVar16 + uVar12 & 0xfffffff8;
      if (7 < uVar12) {
        uVar10 = 0;
        do {
          uVar15 = (ulong)uVar10;
          uVar10 = uVar10 + 8;
          *(undefined8 *)(((ulong)(pTVar14 + 8) & 0xfffffffffffffff8) + uVar15) =
               *(undefined8 *)((Token *)local_70 + (uVar15 - lVar16));
        } while (uVar10 < uVar12);
      }
      goto LAB_00104a96;
    }
    if ((local_e8 & 4) == 0) {
      if (uVar12 != 0) {
        *pTVar14 = local_70[0]._0_1_;
        if ((local_e8 & 2) == 0) {
LAB_00104a96:
          pTVar11 = *(Token **)(param_1 + 8);
        }
        else {
          *(undefined2 *)(pTVar14 + (uVar15 - 2)) = *(undefined2 *)((long)local_70 + (uVar15 - 2));
          pTVar11 = *(Token **)(param_1 + 8);
        }
      }
    }
    else {
      *(undefined4 *)pTVar14 = (undefined4)local_70[0];
      *(undefined4 *)(pTVar14 + (uVar15 - 4)) = *(undefined4 *)((long)local_70 + (uVar15 - 4));
      pTVar11 = *(Token **)(param_1 + 8);
    }
LAB_00104aa5:
    *(ulong *)(param_1 + 0x10) = local_e8;
    pTVar11[local_e8] = (Token)0x0;
    uVar15 = local_70[0];
LAB_00103e72:
    local_70[0] = uVar15;
    local_78 = 0;
    *local_80 = (Token)0x0;
    p_Var20 = local_58;
    uVar19 = local_60;
    p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_60 = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar19;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var20;
    if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = local_50;
      *(undefined8 *)(param_1 + 0x40) = local_48;
    }
    else {
      p_Var20 = p_Var21 + 8;
      if (*(long *)(p_Var21 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var21 + 8) = 0;
        (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
        (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var20;
          *(int *)p_Var20 = *(int *)p_Var20 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(p_Var21 + 8);
          *(int *)(p_Var21 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
        }
      }
      p_Var21 = local_58;
      *(undefined8 *)(param_1 + 0x38) = local_50;
      *(undefined8 *)(param_1 + 0x40) = local_48;
      if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var20 = local_58 + 8;
        if (*(long *)(local_58 + 8) == 0x100000001) {
          *(undefined8 *)(local_58 + 8) = 0;
          (**(code **)(*(long *)local_58 + 0x10))(local_58);
          (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var20;
            *(int *)p_Var20 = *(int *)p_Var20 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(local_58 + 8);
            *(int *)(local_58 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
          }
        }
      }
    }
    if (local_80 != (Token *)local_70) {
      operator_delete(local_80,local_70[0] + 1);
    }
    if (local_a8 != local_98) {
      operator_delete(local_a8,local_98[0] + 1);
    }
    uVar19 = 1;
  }
  if (local_c8 != &local_b8) {
    operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
  }
LAB_00103909:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00106aed) */
/* WARNING: Removing unreachable block (ram,0x00106bdc) */
/* WARNING: Removing unreachable block (ram,0x00106b49) */
/* WARNING: Removing unreachable block (ram,0x00106b53) */
/* WARNING: Removing unreachable block (ram,0x00106972) */
/* WARNING: Removing unreachable block (ram,0x00106afe) */
/* WARNING: Removing unreachable block (ram,0x00106990) */
/* embree::TokenStream::decDigits(std::__cxx11::string&) */

undefined4 __thiscall embree::TokenStream::decDigits(TokenStream *this,string *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Var1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var11;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var12;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Var14;
  undefined8 *extraout_RDX;
  undefined1 uVar15;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var16;
  long lVar17;
  undefined4 *puVar18;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var19;
  char *this_00;
  undefined1 *puVar20;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Var21;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **unaff_R13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Var22;
  long in_FS_OFFSET;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulong *puStack_138;
  undefined8 uStack_130;
  ulong auStack_128 [2];
  undefined8 uStack_118;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Stack_f0;
  TokenStream *pTStack_e8;
  undefined8 uStack_e0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **pp_Stack_d8;
  undefined4 *puStack_d0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_b8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_b0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_a8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_a0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  undefined4 *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var10 = pp_Var14[4];
  local_60 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)0x0;
  local_58 = 0;
  local_c0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1;
  local_68 = (undefined4 *)&local_58;
  if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    puStack_d0 = (undefined4 *)0x1050ba;
    (**(code **)(*pp_Var14 + 0x28))(&local_88,pp_Var14);
    puStack_d0 = (undefined4 *)0x1050c3;
    uVar6 = (**(code **)(*pp_Var14 + 0x20))(pp_Var14);
    p_Var10 = local_80;
    p_Var12 = local_88;
    p_Var13 = local_70;
    p_Var16 = local_78;
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      }
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var11 = local_80 + 8;
        if (*(long *)(local_80 + 8) == 0x100000001) {
          local_a0 = local_78;
          local_a8 = local_70;
          local_b0 = local_88;
          *(undefined8 *)(local_80 + 8) = 0;
          local_b8 = local_80;
          puStack_d0 = (undefined4 *)0x1063a3;
          (**(code **)(*(long *)local_80 + 0x10))();
          puStack_d0 = (undefined4 *)0x1063ae;
          (**(code **)(*(long *)local_b8 + 0x18))();
          p_Var12 = local_b0;
          p_Var13 = local_a8;
          p_Var16 = local_a0;
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar7 = *(int *)p_Var11;
            *(int *)p_Var11 = *(int *)p_Var11 + -1;
            UNLOCK();
          }
          else {
            iVar7 = *(int *)(local_80 + 8);
            *(int *)(local_80 + 8) = iVar7 + -1;
          }
          if (iVar7 == 1) {
            local_a8 = local_78;
            local_b0 = local_70;
            local_b8 = local_88;
            puStack_d0 = (undefined4 *)0x10641b;
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
            p_Var12 = local_b8;
            p_Var13 = local_b0;
            p_Var16 = local_a8;
          }
        }
      }
    }
    p_Var11 = pp_Var14[3];
    p_Var19 = pp_Var14[4];
    if (p_Var11 + (long)p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x400) {
      if (p_Var11 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
      goto embree_TokenStream_decDigits;
      p_Var11 = p_Var11 + -1;
      pp_Var14[3] = p_Var11;
      uVar9 = (int)pp_Var14[2] + 1U & 0x3ff;
      pp_Var14[2] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)uVar9;
    }
    else {
      uVar9 = (uint)pp_Var14[2];
    }
    pp_Var14[4] = p_Var19 + 1;
    p_Var11 = pp_Var14[5] + (ulong)((int)p_Var11 + uVar9 + (int)p_Var19 & 0x3ff) * 0x28;
    *(undefined4 *)p_Var11 = uVar6;
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 8) = p_Var12;
    if (p_Var10 == p_Var19) {
LAB_001051ed:
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
      if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00105fca:
        p_Var12 = p_Var10 + 8;
        if (*(long *)(p_Var10 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var10 + 8) = 0;
          puStack_d0 = (undefined4 *)0x1063d4;
          (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
          puStack_d0 = (undefined4 *)0x1063de;
          (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar7 = *(int *)p_Var12;
            *(int *)p_Var12 = *(int *)p_Var12 + -1;
            UNLOCK();
          }
          else {
            iVar7 = *(int *)(p_Var10 + 8);
            *(int *)(p_Var10 + 8) = iVar7 + -1;
          }
          if (iVar7 == 1) {
            puStack_d0 = (undefined4 *)0x10600e;
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
          }
        }
      }
    }
    else {
      if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105fbe;
LAB_001051ad:
          p_Var12 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            puStack_d0 = (undefined4 *)0x10647a;
            local_b8 = p_Var11;
            local_b0 = p_Var13;
            local_a8 = p_Var16;
            (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
            puStack_d0 = (undefined4 *)0x106483;
            (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
            p_Var11 = local_b8;
            p_Var13 = local_b0;
            p_Var16 = local_a8;
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var12;
              *(int *)p_Var12 = *(int *)p_Var12 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              puStack_d0 = (undefined4 *)0x1066d2;
              local_b8 = p_Var11;
              local_b0 = p_Var13;
              local_a8 = p_Var16;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
              p_Var11 = local_b8;
              p_Var13 = local_b0;
              p_Var16 = local_a8;
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
          goto LAB_001051ed;
        }
        *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001051ad;
LAB_00105fbe:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
        goto LAB_00105fca;
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001051ad;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
    }
    pp_Var21 = pp_Var14 + 3;
    pp_Var22 = pp_Var14 + 2;
    pp_Var1 = pp_Var14 + 5;
    pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
    p_Var10 = pp_Var14[4];
    if (*(int *)(*pp_Var1 + (ulong)((int)*pp_Var21 + (int)*pp_Var22 & 0x3ff) * 0x28) != 0x2b) {
      unaff_R13 = pp_Var14;
      if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001055be;
      puStack_d0 = (undefined4 *)0x105240;
      (**(code **)(*pp_Var14 + 0x28))(&local_88,pp_Var14);
      puStack_d0 = (undefined4 *)0x105249;
      uVar6 = (**(code **)(*pp_Var14 + 0x20))(pp_Var14);
      p_Var10 = local_80;
      p_Var12 = local_88;
      p_Var13 = local_70;
      p_Var16 = local_78;
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        }
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var11 = local_80 + 8;
          if (*(long *)(local_80 + 8) == 0x100000001) {
            local_a0 = local_70;
            local_a8 = local_78;
            local_b0 = local_88;
            *(undefined8 *)(local_80 + 8) = 0;
            local_b8 = local_80;
            puStack_d0 = (undefined4 *)0x1064f7;
            (**(code **)(*(long *)local_80 + 0x10))();
            puStack_d0 = (undefined4 *)0x106502;
            (**(code **)(*(long *)local_b8 + 0x18))();
            p_Var12 = local_b0;
            p_Var13 = local_a0;
            p_Var16 = local_a8;
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var11;
              *(int *)p_Var11 = *(int *)p_Var11 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(local_80 + 8);
              *(int *)(local_80 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              local_a8 = local_70;
              local_b0 = local_78;
              local_b8 = local_88;
              puStack_d0 = (undefined4 *)0x1066fa;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
              p_Var12 = local_b8;
              p_Var13 = local_a8;
              p_Var16 = local_b0;
            }
          }
        }
      }
      p_Var11 = pp_Var14[3];
      p_Var19 = pp_Var14[4];
      if (p_Var11 + (long)p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x400) {
        if (p_Var11 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
        goto embree_TokenStream_decDigits;
        p_Var11 = p_Var11 + -1;
        pp_Var14[3] = p_Var11;
        uVar9 = (int)pp_Var14[2] + 1U & 0x3ff;
        pp_Var14[2] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)uVar9;
      }
      else {
        uVar9 = (uint)pp_Var14[2];
      }
      pp_Var14[4] = p_Var19 + 1;
      p_Var11 = pp_Var14[5] + (ulong)((int)p_Var11 + uVar9 + (int)p_Var19 & 0x3ff) * 0x28;
      *(undefined4 *)p_Var11 = uVar6;
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 8) = p_Var12;
      if (p_Var10 == p_Var19) {
LAB_00105373:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00106216:
          p_Var12 = p_Var10 + 8;
          if (*(long *)(p_Var10 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var10 + 8) = 0;
            puStack_d0 = (undefined4 *)0x1064c6;
            (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
            puStack_d0 = (undefined4 *)0x1064d0;
            (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var12;
              *(int *)p_Var12 = *(int *)p_Var12 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Var10 + 8);
              *(int *)(p_Var10 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              puStack_d0 = (undefined4 *)0x10625a;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
            }
          }
        }
      }
      else {
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010620a;
LAB_00105333:
            p_Var12 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              puStack_d0 = (undefined4 *)0x10662b;
              local_b8 = p_Var11;
              local_b0 = p_Var16;
              local_a8 = p_Var13;
              (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
              puStack_d0 = (undefined4 *)0x106634;
              (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
              p_Var11 = local_b8;
              p_Var13 = local_a8;
              p_Var16 = local_b0;
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var12;
                *(int *)p_Var12 = *(int *)p_Var12 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                puStack_d0 = (undefined4 *)0x10676b;
                local_b8 = p_Var11;
                local_b0 = p_Var16;
                local_a8 = p_Var13;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
                p_Var11 = local_b8;
                p_Var13 = local_a8;
                p_Var16 = local_b0;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
            goto LAB_00105373;
          }
          *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105333;
LAB_0010620a:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
          goto LAB_00106216;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105333;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
      }
      pp_Var21 = pp_Var14 + 3;
      pp_Var22 = pp_Var14 + 2;
      pp_Var1 = pp_Var14 + 5;
      pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
      p_Var10 = pp_Var14[4];
      unaff_R13 = pp_Var14;
      if (*(int *)(*pp_Var1 + (ulong)((int)*pp_Var21 + (int)*pp_Var22 & 0x3ff) * 0x28) != 0x2d)
      goto LAB_001055e6;
    }
    p_Var10 = pp_Var14[4];
    unaff_R13 = pp_Var14;
    if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      puStack_d0 = (undefined4 *)0x1053cf;
      (**(code **)(*pp_Var14 + 0x28))(&local_88,pp_Var14);
      puStack_d0 = (undefined4 *)0x1053d9;
      uVar6 = (**(code **)(*pp_Var14 + 0x20))(pp_Var14);
      p_Var10 = local_80;
      p_Var12 = local_70;
      p_Var13 = local_88;
      p_Var16 = local_78;
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        }
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var11 = local_80 + 8;
          if (*(long *)(local_80 + 8) == 0x100000001) {
            local_a0 = local_78;
            local_a8 = local_70;
            local_b0 = local_88;
            *(undefined8 *)(local_80 + 8) = 0;
            local_b8 = local_80;
            puStack_d0 = (undefined4 *)0x106577;
            (**(code **)(*(long *)local_80 + 0x10))();
            puStack_d0 = (undefined4 *)0x106582;
            (**(code **)(*(long *)local_b8 + 0x18))();
            p_Var12 = local_a8;
            p_Var13 = local_b0;
            p_Var16 = local_a0;
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var11;
              *(int *)p_Var11 = *(int *)p_Var11 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(local_80 + 8);
              *(int *)(local_80 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              local_a8 = local_78;
              local_b0 = local_70;
              local_b8 = local_88;
              puStack_d0 = (undefined4 *)0x106722;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
              p_Var12 = local_b0;
              p_Var13 = local_b8;
              p_Var16 = local_a8;
            }
          }
        }
      }
      p_Var11 = pp_Var14[3];
      p_Var19 = pp_Var14[4];
      if (p_Var11 + (long)p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x400) {
        if (p_Var11 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
embree_TokenStream_decDigits:
                    /* WARNING: Subroutine does not return */
          puStack_d0 = (undefined4 *)&UNK_0010d733;
          abort();
        }
        p_Var11 = p_Var11 + -1;
        pp_Var14[3] = p_Var11;
        uVar9 = (int)pp_Var14[2] + 1U & 0x3ff;
        pp_Var14[2] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)uVar9;
      }
      else {
        uVar9 = (uint)pp_Var14[2];
      }
      pp_Var14[4] = p_Var19 + 1;
      p_Var11 = pp_Var14[5] + (ulong)(uVar9 + (int)p_Var11 + (int)p_Var19 & 0x3ff) * 0x28;
      *(undefined4 *)p_Var11 = uVar6;
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 8) = p_Var13;
      if (p_Var10 == p_Var19) {
LAB_00105506:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var12;
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00106145:
          p_Var12 = p_Var10 + 8;
          if (*(long *)(p_Var10 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var10 + 8) = 0;
            puStack_d0 = (undefined4 *)0x106546;
            (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
            puStack_d0 = (undefined4 *)0x106550;
            (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var12;
              *(int *)p_Var12 = *(int *)p_Var12 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Var10 + 8);
              *(int *)(p_Var10 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              puStack_d0 = (undefined4 *)0x10618d;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
            }
          }
        }
      }
      else {
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00106139;
LAB_001054c6:
            p_Var13 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              puStack_d0 = (undefined4 *)0x106668;
              local_b8 = p_Var11;
              local_b0 = p_Var12;
              local_a8 = p_Var16;
              (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
              puStack_d0 = (undefined4 *)0x106671;
              (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
              p_Var11 = local_b8;
              p_Var12 = local_b0;
              p_Var16 = local_a8;
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var13;
                *(int *)p_Var13 = *(int *)p_Var13 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                puStack_d0 = (undefined4 *)0x106796;
                local_b8 = p_Var11;
                local_b0 = p_Var12;
                local_a8 = p_Var16;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
                p_Var11 = local_b8;
                p_Var12 = local_b0;
                p_Var16 = local_a8;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
            goto LAB_00105506;
          }
          *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001054c6;
LAB_00106139:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var12;
          goto LAB_00106145;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001054c6;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var12;
      }
      p_Var12 = pp_Var14[3];
      pp_Var21 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)local_60 + 1);
      uVar15 = (undefined1)
               *(undefined4 *)
                (pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28);
      p_Var10 = pp_Var14[4];
    }
    else {
      p_Var12 = pp_Var14[3];
      pp_Var21 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)local_60 + 1);
      uVar15 = (undefined1)
               *(undefined4 *)
                (pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28);
    }
LAB_00105547:
    pp_Var22 = local_60;
    pp_Var14[3] = p_Var12 + 1;
    pp_Var14[4] = p_Var10 + -1;
    if (local_68 == (undefined4 *)&local_58) {
      pp_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)0xf;
    }
    else {
      pp_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)CONCAT71(uStack_57,local_58);
    }
    if (pp_Var14 < pp_Var21) {
      puStack_d0 = (undefined4 *)0x105587;
      std::__cxx11::string::_M_mutate((ulong)&local_68,(ulong)local_60,(char *)0x0,0);
    }
  }
  else {
    if (*(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)pp_Var14[3] & 0x3ff) * 0x28) != 0x2b)
    {
LAB_001055be:
      p_Var12 = pp_Var14[3];
      if (*(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28) != 0x2d)
      goto LAB_001055e6;
      pp_Var21 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)local_60 + 1);
      uVar15 = 0x2d;
      goto LAB_00105547;
    }
    pp_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)0x0;
    pp_Var14[3] = pp_Var14[3] + 1;
    pp_Var21 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)0x1;
    pp_Var14[4] = p_Var10 + -1;
    uVar15 = 0x2b;
  }
  *(undefined1 *)((long)local_68 + (long)pp_Var22) = uVar15;
  *(undefined1 *)((long)local_68 + (long)pp_Var21) = 0;
  pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
  p_Var10 = pp_Var14[4];
  local_60 = pp_Var21;
LAB_001055e6:
  uVar6 = 0;
  do {
    if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      unaff_R13 = &local_88;
      puStack_d0 = (undefined4 *)0x105611;
      (**(code **)(*pp_Var14 + 0x28))(unaff_R13,pp_Var14);
      puStack_d0 = (undefined4 *)0x10561a;
      uVar8 = (**(code **)(*pp_Var14 + 0x20))(pp_Var14);
      p_Var10 = local_80;
      p_Var12 = local_88;
      p_Var13 = local_70;
      p_Var16 = local_78;
      if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        }
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var11 = local_80 + 8;
          if (*(long *)(local_80 + 8) == 0x100000001) {
            local_90 = local_70;
            local_98 = local_78;
            local_a0 = local_80;
            local_a8 = local_88;
            local_b0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                       CONCAT44(local_b0._4_4_,uVar8);
            *(undefined8 *)(local_80 + 8) = 0;
            local_b8 = local_80;
            puStack_d0 = (undefined4 *)0x105c8b;
            (**(code **)(*(long *)local_80 + 0x10))();
            puStack_d0 = (undefined4 *)0x105c96;
            (**(code **)(*(long *)local_b8 + 0x18))();
            p_Var10 = local_a0;
            p_Var12 = local_a8;
            p_Var13 = local_90;
            p_Var16 = local_98;
            uVar8 = local_b0._0_4_;
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var11;
              *(int *)p_Var11 = *(int *)p_Var11 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(local_80 + 8);
              *(int *)(local_80 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              local_98 = local_70;
              local_a0 = local_78;
              local_a8 = local_80;
              local_b0 = local_88;
              local_b8 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                         CONCAT44(local_b8._4_4_,uVar8);
              puStack_d0 = (undefined4 *)0x105bdf;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
              p_Var10 = local_a8;
              p_Var12 = local_b0;
              p_Var13 = local_98;
              p_Var16 = local_a0;
              uVar8 = local_b8._0_4_;
            }
          }
        }
      }
      p_Var11 = pp_Var14[3];
      p_Var19 = pp_Var14[4];
      if (p_Var11 + (long)p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x400) {
        if (p_Var11 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
        goto embree_TokenStream_decDigits;
        p_Var11 = p_Var11 + -1;
        pp_Var14[3] = p_Var11;
        uVar9 = (int)pp_Var14[2] + 1U & 0x3ff;
        pp_Var14[2] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)uVar9;
      }
      else {
        uVar9 = (uint)pp_Var14[2];
      }
      pp_Var14[4] = p_Var19 + 1;
      p_Var11 = pp_Var14[5] + (ulong)((int)p_Var11 + uVar9 + (int)p_Var19 & 0x3ff) * 0x28;
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
      *(undefined4 *)p_Var11 = uVar8;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 8) = p_Var12;
      if (p_Var10 == p_Var19) {
LAB_0010572a:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00105a26:
          p_Var12 = p_Var10 + 8;
          if (*(long *)(p_Var10 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var10 + 8) = 0;
            puStack_d0 = (undefined4 *)0x105cce;
            local_b8 = p_Var10;
            (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
            puStack_d0 = (undefined4 *)0x105cdc;
            (**(code **)(*(long *)local_b8 + 0x18))(local_b8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var12;
              *(int *)p_Var12 = *(int *)p_Var12 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Var10 + 8);
              *(int *)(p_Var10 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              puStack_d0 = (undefined4 *)0x105a5e;
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
            }
          }
        }
      }
      else {
        if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105a1a;
LAB_001056f6:
            p_Var12 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              puStack_d0 = (undefined4 *)0x105f87;
              local_b8 = p_Var19;
              local_b0 = p_Var11;
              local_a8 = p_Var10;
              local_a0 = p_Var16;
              local_98 = p_Var13;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              puStack_d0 = (undefined4 *)0x105f92;
              (**(code **)(*(long *)local_b8 + 0x18))();
              p_Var11 = local_b0;
              p_Var10 = local_a8;
              p_Var13 = local_98;
              p_Var16 = local_a0;
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var12;
                *(int *)p_Var12 = *(int *)p_Var12 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                puStack_d0 = (undefined4 *)0x105f03;
                local_b8 = p_Var11;
                local_b0 = p_Var10;
                local_a8 = p_Var16;
                local_a0 = p_Var13;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
                p_Var11 = local_b8;
                p_Var10 = local_b0;
                p_Var13 = local_a0;
                p_Var16 = local_a8;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
            goto LAB_0010572a;
          }
          *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001056f6;
LAB_00105a1a:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
          goto LAB_00105a26;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001056f6;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
      }
      if (9 < *(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[3] + (int)pp_Var14[2] & 0x3ff) * 0x28) -
              0x30U) break;
      pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
      p_Var10 = pp_Var14[4];
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        puStack_d0 = (undefined4 *)0x10577f;
        (**(code **)(*pp_Var14 + 0x28))(unaff_R13,pp_Var14);
        puStack_d0 = (undefined4 *)0x105788;
        uVar6 = (**(code **)(*pp_Var14 + 0x20))(pp_Var14);
        p_Var10 = local_80;
        p_Var12 = local_88;
        p_Var13 = local_70;
        p_Var16 = local_78;
        if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          }
          if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var11 = local_80 + 8;
            if (*(long *)(local_80 + 8) == 0x100000001) {
              local_a0 = local_70;
              local_a8 = local_78;
              local_b0 = local_88;
              *(undefined8 *)(local_80 + 8) = 0;
              local_b8 = local_80;
              puStack_d0 = (undefined4 *)0x105eb2;
              (**(code **)(*(long *)local_80 + 0x10))();
              puStack_d0 = (undefined4 *)0x105ebd;
              (**(code **)(*(long *)local_b8 + 0x18))();
              p_Var12 = local_b0;
              p_Var13 = local_a0;
              p_Var16 = local_a8;
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var11;
                *(int *)p_Var11 = *(int *)p_Var11 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(local_80 + 8);
                *(int *)(local_80 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                local_a8 = local_70;
                local_b0 = local_78;
                local_b8 = local_88;
                puStack_d0 = (undefined4 *)0x105c46;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_80);
                p_Var12 = local_b8;
                p_Var13 = local_a8;
                p_Var16 = local_b0;
              }
            }
          }
        }
        p_Var11 = pp_Var14[3];
        p_Var19 = pp_Var14[4];
        if (p_Var11 + (long)p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x400) {
          if (p_Var11 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
          goto embree_TokenStream_decDigits;
          p_Var11 = p_Var11 + -1;
          pp_Var14[3] = p_Var11;
          uVar9 = (int)pp_Var14[2] + 1U & 0x3ff;
          pp_Var14[2] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)uVar9;
        }
        else {
          uVar9 = (uint)pp_Var14[2];
        }
        pp_Var14[4] = p_Var19 + 1;
        p_Var11 = pp_Var14[5] + (ulong)((int)p_Var11 + uVar9 + (int)p_Var19 & 0x3ff) * 0x28;
        *(undefined4 *)p_Var11 = uVar6;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 8) = p_Var12;
        if (p_Var10 == p_Var19) {
LAB_0010589e:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
          if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00105aaf:
            p_Var12 = p_Var10 + 8;
            if (*(long *)(p_Var10 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var10 + 8) = 0;
              puStack_d0 = (undefined4 *)0x105e7a;
              (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
              puStack_d0 = (undefined4 *)0x105e84;
              (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var12;
                *(int *)p_Var12 = *(int *)p_Var12 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(p_Var10 + 8);
                *(int *)(p_Var10 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                puStack_d0 = (undefined4 *)0x105ae9;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10)
                ;
              }
            }
          }
        }
        else {
          if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
              UNLOCK();
              p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
              if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105aa3;
LAB_00105868:
              p_Var12 = p_Var19 + 8;
              if (*(long *)(p_Var19 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var19 + 8) = 0;
                puStack_d0 = (undefined4 *)0x106038;
                local_b8 = p_Var11;
                local_b0 = p_Var16;
                local_a8 = p_Var13;
                (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
                puStack_d0 = (undefined4 *)0x106041;
                (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
                p_Var11 = local_b8;
                p_Var13 = local_a8;
                p_Var16 = local_b0;
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar7 = *(int *)p_Var12;
                  *(int *)p_Var12 = *(int *)p_Var12 + -1;
                  UNLOCK();
                }
                else {
                  iVar7 = *(int *)(p_Var19 + 8);
                  *(int *)(p_Var19 + 8) = iVar7 + -1;
                }
                if (iVar7 == 1) {
                  puStack_d0 = (undefined4 *)0x105f49;
                  local_b8 = p_Var11;
                  local_b0 = p_Var16;
                  local_a8 = p_Var13;
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var19);
                  p_Var11 = local_b8;
                  p_Var13 = local_a8;
                  p_Var16 = local_b0;
                }
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
              goto LAB_0010589e;
            }
            *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10);
            if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105868;
LAB_00105aa3:
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x10) = p_Var10;
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
            goto LAB_00105aaf;
          }
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105868;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x18) = p_Var16;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var11 + 0x20) = p_Var13;
        }
        p_Var12 = pp_Var14[3];
        iVar7 = *(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28);
        p_Var10 = pp_Var14[4];
      }
      else {
        p_Var12 = pp_Var14[3];
        iVar7 = *(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28);
      }
    }
    else {
      p_Var12 = pp_Var14[3];
      iVar7 = *(int *)(pp_Var14[5] + (ulong)((int)pp_Var14[2] + (int)p_Var12 & 0x3ff) * 0x28);
      if (9 < iVar7 - 0x30U) break;
    }
    unaff_R13 = local_60;
    pp_Var14[4] = p_Var10 + -1;
    pp_Var14[3] = p_Var12 + 1;
    pp_Var21 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)local_60 + 1);
    if (local_68 == (undefined4 *)&local_58) {
      pp_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)0xf;
    }
    else {
      pp_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)CONCAT71(uStack_57,local_58);
    }
    if (pp_Var14 < pp_Var21) {
      puStack_d0 = (undefined4 *)0x1059f7;
      std::__cxx11::string::_M_mutate((ulong)&local_68,(ulong)local_60,(char *)0x0,0);
    }
    *(char *)((long)local_68 + (long)unaff_R13) = (char)iVar7;
    uVar6 = 1;
    *(undefined1 *)((long)local_68 + 1 + (long)unaff_R13) = 0;
    pp_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> ***)(this + 0x40);
    p_Var10 = pp_Var14[4];
    local_60 = pp_Var21;
  } while( true );
  if ((char)uVar6 != '\0') {
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)
        (0x3fffffffffffffff - *(long *)(local_c0 + 8)) < local_60) {
      this_00 = "basic_string::append";
      puStack_d0 = (undefined4 *)0x106834;
      puVar18 = local_68;
      std::__throw_length_error("basic_string::append");
      uStack_e0 = 0x100000001;
      lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
      uStack_150 = 0;
      uStack_158 = 0;
      puStack_160 = &uStack_150;
      pp_Stack_f0 = pp_Var14;
      pTStack_e8 = this;
      pp_Stack_d8 = unaff_R13;
      puStack_d0 = (undefined4 *)&local_58;
      uVar6 = decDigits((TokenStream *)this_00,(string *)&puStack_160);
      if ((char)uVar6 != '\0') {
        uStack_13c = __isoc23_strtol(puStack_160,0,10);
        uVar5 = *extraout_RDX;
        uStack_140 = 2;
        lVar17 = extraout_RDX[1];
        auStack_128[0] = auStack_128[0] & 0xffffffffffffff00;
        if (lVar17 == 0) {
          uStack_108 = extraout_RDX[2];
          puVar20 = *(undefined1 **)(puVar18 + 2);
          uStack_100 = extraout_RDX[3];
          *puVar18 = 2;
          puVar18[1] = uStack_13c;
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
          }
          uStack_108 = extraout_RDX[2];
          uStack_100 = extraout_RDX[3];
          *puVar18 = 2;
          puVar18[1] = uStack_13c;
          puVar20 = *(undefined1 **)(puVar18 + 2);
        }
        *(undefined8 *)(puVar18 + 4) = 0;
        *puVar20 = 0;
        uStack_130 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
        auStack_128[0]._0_1_ = 0;
        p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 0xc);
        p_Stack_110 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
        uStack_118 = 0;
        *(undefined8 *)(puVar18 + 10) = uVar5;
        *(long *)(puVar18 + 0xc) = lVar17;
        puStack_138 = auStack_128;
        if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          *(undefined8 *)(puVar18 + 0xe) = uStack_108;
          *(undefined8 *)(puVar18 + 0x10) = uStack_100;
        }
        else {
          p_Var12 = p_Var10 + 8;
          if (*(long *)(p_Var10 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var10 + 8) = 0;
            (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
            (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var12;
              *(int *)p_Var12 = *(int *)p_Var12 + -1;
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
          p_Var10 = p_Stack_110;
          *(undefined8 *)(puVar18 + 0xe) = uStack_108;
          *(undefined8 *)(puVar18 + 0x10) = uStack_100;
          if (p_Stack_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var12 = p_Stack_110 + 8;
            if (*(long *)(p_Stack_110 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_110 + 8) = 0;
              (**(code **)(*(long *)p_Stack_110 + 0x10))(p_Stack_110);
              (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar7 = *(int *)p_Var12;
                *(int *)p_Var12 = *(int *)p_Var12 + -1;
                UNLOCK();
              }
              else {
                iVar7 = *(int *)(p_Stack_110 + 8);
                *(int *)(p_Stack_110 + 8) = iVar7 + -1;
              }
              if (iVar7 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_110);
              }
            }
          }
        }
        if (puStack_138 != auStack_128) {
          operator_delete(puStack_138,auStack_128[0] + 1);
        }
      }
      if (puStack_160 != &uStack_150) {
        operator_delete(puStack_160,CONCAT71(uStack_14f,uStack_150) + 1);
      }
      if (lStack_f8 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puStack_d0 = (undefined4 *)0x105995;
    std::__cxx11::string::_M_append((char *)local_c0,(ulong)local_68);
    goto LAB_00105995;
  }
  plVar3 = *(long **)(this + 0x40);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)plVar3[3] < local_60)
  goto embree_TokenStream_decDigits;
  plVar2 = plVar3 + 4;
  *plVar2 = *plVar2 + (long)local_60;
  plVar3[3] = plVar3[3] - (long)local_60;
  if (*plVar2 != 0) goto LAB_00105995;
  puStack_d0 = (undefined4 *)0x105d18;
  (**(code **)(*plVar3 + 0x28))(&local_88,plVar3);
  puStack_d0 = (undefined4 *)0x105d21;
  uVar8 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    }
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var10 = local_80 + 8;
      if (*(long *)(local_80 + 8) == 0x100000001) {
        local_b0 = local_70;
        local_b8 = local_78;
        *(undefined8 *)(local_80 + 8) = 0;
        local_c0 = local_80;
        puStack_d0 = (undefined4 *)0x1065c1;
        (**(code **)(*(long *)local_80 + 0x10))();
        puStack_d0 = (undefined4 *)0x1065cc;
        (**(code **)(*(long *)local_c0 + 0x18))();
        local_78 = local_b8;
        local_70 = local_b0;
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var10;
          *(int *)p_Var10 = *(int *)p_Var10 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(local_80 + 8);
          *(int *)(local_80 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          local_b8 = local_70;
          local_c0 = local_78;
          puStack_d0 = (undefined4 *)0x106745;
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
          local_78 = local_c0;
          local_70 = local_b8;
        }
      }
    }
  }
  lVar17 = plVar3[3];
  lVar4 = plVar3[4];
  if (lVar17 + lVar4 == 0x400) {
    if (lVar17 == 0) goto embree_TokenStream_decDigits;
    lVar17 = lVar17 + -1;
    plVar3[3] = lVar17;
    uVar9 = (int)plVar3[2] + 1U & 0x3ff;
    plVar3[2] = (ulong)uVar9;
  }
  else {
    uVar9 = (uint)plVar3[2];
  }
  plVar3[4] = lVar4 + 1;
  puVar18 = (undefined4 *)(plVar3[5] + (ulong)(uVar9 + (int)lVar17 + (int)lVar4 & 0x3ff) * 0x28);
  *puVar18 = uVar8;
  p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 4);
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 2) = local_88;
  if (local_80 == p_Var10) {
LAB_00105e4c:
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 6) = local_78;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 8) = local_70;
    if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105995;
  }
  else {
    if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 6) = local_78;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 8) = local_70;
        goto LAB_00105995;
      }
LAB_00105e08:
      p_Var12 = p_Var10 + 8;
      if (*(long *)(p_Var10 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var10 + 8) = 0;
        puStack_d0 = (undefined4 *)0x1066a2;
        local_c0 = local_78;
        local_b8 = local_70;
        (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
        puStack_d0 = (undefined4 *)0x1066ac;
        (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
        local_78 = local_c0;
        local_70 = local_b8;
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var12;
          *(int *)p_Var12 = *(int *)p_Var12 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var10 + 8);
          *(int *)(p_Var10 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          puStack_d0 = (undefined4 *)0x1067bc;
          local_c0 = local_78;
          local_b8 = local_70;
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
          local_78 = local_c0;
          local_70 = local_b8;
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 4) = local_80;
      goto LAB_00105e4c;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 4);
    }
    else {
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 4);
    }
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105e08;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 4) = local_80;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 6) = local_78;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar18 + 8) = local_70;
  }
  p_Var10 = local_80 + 8;
  if (*(long *)(local_80 + 8) == 0x100000001) {
    *(undefined8 *)(local_80 + 8) = 0;
    puStack_d0 = (undefined4 *)0x1065ed;
    (**(code **)(*(long *)local_80 + 0x10))(local_80);
    puStack_d0 = (undefined4 *)0x1065f7;
    (**(code **)(*(long *)local_80 + 0x18))(local_80);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar7 = *(int *)p_Var10;
      *(int *)p_Var10 = *(int *)p_Var10 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(local_80 + 8);
      *(int *)(local_80 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      puStack_d0 = (undefined4 *)0x1061f2;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
    }
  }
LAB_00105995:
  if (local_68 != (undefined4 *)&local_58) {
    puStack_d0 = (undefined4 *)0x1059ad;
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  puStack_d0 = (undefined4 *)0x1067fe;
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00106bdc) */
/* WARNING: Removing unreachable block (ram,0x00106b49) */
/* WARNING: Removing unreachable block (ram,0x00106b53) */
/* WARNING: Removing unreachable block (ram,0x00106972) */
/* WARNING: Removing unreachable block (ram,0x00106990) */
/* WARNING: Removing unreachable block (ram,0x00106aed) */
/* WARNING: Removing unreachable block (ram,0x00106afe) */
/* embree::TokenStream::tryInt(embree::Token&, embree::ParseLocation const&) */

undefined4 __thiscall
embree::TokenStream::tryInt(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  long lVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined4 local_78;
  undefined4 local_74;
  ulong *local_70;
  undefined8 local_68;
  ulong local_60 [2];
  undefined8 local_50;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_98 = &local_88;
  uVar5 = decDigits(this,(string *)&local_98);
  if ((char)uVar5 != '\0') {
    local_74 = __isoc23_strtol(local_98,0,10);
    uVar2 = *(undefined8 *)param_2;
    local_78 = 2;
    lVar3 = *(long *)(param_2 + 8);
    local_60[0] = local_60[0] & 0xffffffffffffff00;
    if (lVar3 == 0) {
      local_40 = *(undefined8 *)(param_2 + 0x10);
      puVar7 = *(undefined1 **)(param_1 + 8);
      local_38 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = 2;
      *(undefined4 *)(param_1 + 4) = local_74;
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      }
      local_40 = *(undefined8 *)(param_2 + 0x10);
      local_38 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = 2;
      *(undefined4 *)(param_1 + 4) = local_74;
      puVar7 = *(undefined1 **)(param_1 + 8);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar7 = 0;
    local_68 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_60[0]._0_1_ = 0;
    p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
    local_48 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(long *)(param_1 + 0x30) = lVar3;
    local_70 = local_60;
    if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = local_40;
      *(undefined8 *)(param_1 + 0x40) = local_38;
    }
    else {
      p_Var1 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar6 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar6 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar6 + -1;
        }
        if (iVar6 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
      p_Var4 = local_48;
      *(undefined8 *)(param_1 + 0x38) = local_40;
      *(undefined8 *)(param_1 + 0x40) = local_38;
      if (local_48 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = local_48 + 8;
        if (*(long *)(local_48 + 8) == 0x100000001) {
          *(undefined8 *)(local_48 + 8) = 0;
          (**(code **)(*(long *)local_48 + 0x10))(local_48);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar6 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar6 = *(int *)(local_48 + 8);
            *(int *)(local_48 + 8) = iVar6 + -1;
          }
          if (iVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_48);
          }
        }
      }
    }
    if (local_70 != local_60) {
      operator_delete(local_70,local_60[0] + 1);
    }
  }
  if (local_98 != &local_88) {
    operator_delete(local_98,CONCAT71(uStack_87,local_88) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::tryIdentifier(embree::Token&, embree::ParseLocation const&) */

undefined8 __thiscall
embree::TokenStream::tryIdentifier(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  undefined8 uVar5;
  undefined1 *__src;
  ulong uVar6;
  ulong *__src_00;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  Token *pTVar10;
  long lVar11;
  Token *pTVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var18;
  long in_FS_OFFSET;
  ulong local_e8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  plVar16 = *(long **)(this + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = &local_b8;
  if (plVar16[4] != 0) {
    uVar14 = *(uint *)(plVar16[5] + (ulong)((int)plVar16[2] + (int)plVar16[3] & 0x3ff) * 0x28);
    if (0xff < uVar14) {
      uVar17 = 0;
      goto LAB_00106de7;
    }
    if (this[(ulong)uVar14 + 0x148] == (TokenStream)0x0) goto LAB_00106dcd;
LAB_00106e48:
    lVar11 = plVar16[4];
LAB_00106e4c:
    uVar7 = *(undefined4 *)(plVar16[5] + (ulong)((int)plVar16[2] + (int)plVar16[3] & 0x3ff) * 0x28);
    plVar16[3] = plVar16[3] + 1;
    plVar16[4] = lVar11 + -1;
    do {
      uVar6 = local_c0;
      uVar13 = local_c0 + 1;
      if (local_c8 == &local_b8) {
        uVar15 = 0xf;
      }
      else {
        uVar15 = CONCAT71(uStack_b7,local_b8);
      }
      if (uVar15 < uVar13) {
        std::__cxx11::string::_M_mutate((ulong)&local_c8,local_c0,(char *)0x0,0);
      }
      local_c8[uVar6] = (char)uVar7;
      local_c8[uVar6 + 1] = 0;
      plVar16 = *(long **)(this + 0x40);
      local_c0 = uVar13;
      if (plVar16[4] == 0) {
        (**(code **)(*plVar16 + 0x28))(&local_e8,plVar16);
        uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar5 = local_d0;
        uVar17 = local_d8;
        p_Var4 = local_e0;
        uVar13 = local_e8;
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          }
          if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var18 = local_e0 + 8;
            if (*(long *)(local_e0 + 8) == 0x100000001) {
              *(undefined8 *)(local_e0 + 8) = 0;
              (**(code **)(*(long *)local_e0 + 0x10))();
              (**(code **)(*(long *)p_Var4 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar8 = *(int *)p_Var18;
                *(int *)p_Var18 = *(int *)p_Var18 + -1;
                UNLOCK();
              }
              else {
                iVar8 = *(int *)(local_e0 + 8);
                *(int *)(local_e0 + 8) = iVar8 + -1;
              }
              if (iVar8 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_e0);
              }
            }
          }
        }
        lVar11 = plVar16[3];
        lVar3 = plVar16[4];
        if (lVar11 + lVar3 == 0x400) {
          if (lVar11 == 0) goto embree_TokenStream_tryIdentifier;
          lVar11 = lVar11 + -1;
          plVar16[3] = lVar11;
          uVar14 = (int)plVar16[2] + 1U & 0x3ff;
          plVar16[2] = (ulong)uVar14;
        }
        else {
          uVar14 = (uint)plVar16[2];
        }
        plVar16[4] = lVar3 + 1;
        puVar2 = (undefined4 *)
                 (plVar16[5] + (ulong)((int)lVar11 + uVar14 + (int)lVar3 & 0x3ff) * 0x28);
        p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar7;
        *(ulong *)(puVar2 + 2) = uVar13;
        if (p_Var4 == p_Var18) {
LAB_00106fff:
          *(undefined8 *)(puVar2 + 6) = uVar17;
          *(undefined8 *)(puVar2 + 8) = uVar5;
          if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00107050;
        }
        else {
          if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar2 + 6) = uVar17;
              *(undefined8 *)(puVar2 + 8) = uVar5;
              goto LAB_00107050;
            }
LAB_00106fc1:
            p_Var1 = p_Var18 + 8;
            if (*(long *)(p_Var18 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var18 + 8) = 0;
              (**(code **)(*(long *)p_Var18 + 0x10))();
              (**(code **)(*(long *)p_Var18 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar8 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar8 = *(int *)(p_Var18 + 8);
                *(int *)(p_Var18 + 8) = iVar8 + -1;
              }
              if (iVar8 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
            goto LAB_00106fff;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
            UNLOCK();
            p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          else {
            *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
            p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00106fc1;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
          *(undefined8 *)(puVar2 + 6) = uVar17;
          *(undefined8 *)(puVar2 + 8) = uVar5;
        }
        p_Var18 = p_Var4 + 8;
        if (*(long *)(p_Var4 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var18;
            *(int *)p_Var18 = *(int *)p_Var18 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var4 + 8);
            *(int *)(p_Var4 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
LAB_00107050:
      uVar13 = local_c0;
      __src = local_c8;
      uVar14 = *(uint *)(plVar16[5] + (ulong)((int)plVar16[3] + (int)plVar16[2] & 0x3ff) * 0x28);
      if ((0xff < uVar14) ||
         ((this[(ulong)uVar14 + 0x148] == (TokenStream)0x0 && (9 < uVar14 - 0x30))))
      goto LAB_00107230;
      plVar16 = *(long **)(this + 0x40);
      lVar11 = plVar16[4];
      if (lVar11 == 0) {
        (**(code **)(*plVar16 + 0x28))(&local_e8,plVar16);
        uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar5 = local_d0;
        uVar17 = local_d8;
        p_Var4 = local_e0;
        uVar13 = local_e8;
        if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          }
          if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var18 = local_e0 + 8;
            if (*(long *)(local_e0 + 8) == 0x100000001) {
              *(undefined8 *)(local_e0 + 8) = 0;
              (**(code **)(*(long *)local_e0 + 0x10))();
              (**(code **)(*(long *)p_Var4 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar8 = *(int *)p_Var18;
                *(int *)p_Var18 = *(int *)p_Var18 + -1;
                UNLOCK();
              }
              else {
                iVar8 = *(int *)(local_e0 + 8);
                *(int *)(local_e0 + 8) = iVar8 + -1;
              }
              if (iVar8 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_e0);
              }
            }
          }
        }
        lVar11 = plVar16[3];
        lVar3 = plVar16[4];
        if (lVar11 + lVar3 == 0x400) {
          if (lVar11 == 0) goto embree_TokenStream_tryIdentifier;
          lVar11 = lVar11 + -1;
          plVar16[3] = lVar11;
          uVar14 = (int)plVar16[2] + 1U & 0x3ff;
          plVar16[2] = (ulong)uVar14;
        }
        else {
          uVar14 = (uint)plVar16[2];
        }
        plVar16[4] = lVar3 + 1;
        puVar2 = (undefined4 *)
                 (plVar16[5] + (ulong)((int)lVar11 + uVar14 + (int)lVar3 & 0x3ff) * 0x28);
        p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar7;
        *(ulong *)(puVar2 + 2) = uVar13;
        if (p_Var4 == p_Var18) {
LAB_001071dd:
          *(undefined8 *)(puVar2 + 6) = uVar17;
          *(undefined8 *)(puVar2 + 8) = uVar5;
          if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00107bdf;
        }
        else {
          if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar2 + 6) = uVar17;
              *(undefined8 *)(puVar2 + 8) = uVar5;
              lVar11 = plVar16[4];
              goto LAB_001071f2;
            }
LAB_0010719f:
            p_Var1 = p_Var18 + 8;
            if (*(long *)(p_Var18 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var18 + 8) = 0;
              (**(code **)(*(long *)p_Var18 + 0x10))();
              (**(code **)(*(long *)p_Var18 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar8 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar8 = *(int *)(p_Var18 + 8);
                *(int *)(p_Var18 + 8) = iVar8 + -1;
              }
              if (iVar8 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
            goto LAB_001071dd;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
            UNLOCK();
            p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          else {
            *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
            p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010719f;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
          *(undefined8 *)(puVar2 + 6) = uVar17;
          *(undefined8 *)(puVar2 + 8) = uVar5;
LAB_00107bdf:
          p_Var18 = p_Var4 + 8;
          if (*(long *)(p_Var4 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var4 + 8) = 0;
            (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
            lVar11 = plVar16[4];
            goto LAB_001071f2;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var18;
            *(int *)p_Var18 = *(int *)p_Var18 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var4 + 8);
            *(int *)(p_Var4 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
        lVar11 = plVar16[4];
      }
LAB_001071f2:
      uVar7 = *(undefined4 *)
               (plVar16[5] + (ulong)((int)plVar16[2] + (int)plVar16[3] & 0x3ff) * 0x28);
      plVar16[3] = plVar16[3] + 1;
      plVar16[4] = lVar11 + -1;
    } while( true );
  }
  (**(code **)(*plVar16 + 0x28))(&local_e8,plVar16);
  uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
  uVar5 = local_d0;
  uVar17 = local_d8;
  p_Var4 = local_e0;
  uVar13 = local_e8;
  if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    }
    if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var18 = local_e0 + 8;
      if (*(long *)(local_e0 + 8) == 0x100000001) {
        *(undefined8 *)(local_e0 + 8) = 0;
        (**(code **)(*(long *)local_e0 + 0x10))();
        (**(code **)(*(long *)p_Var4 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var18;
          *(int *)p_Var18 = *(int *)p_Var18 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_e0 + 8);
          *(int *)(local_e0 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
        }
      }
    }
  }
  lVar11 = plVar16[3];
  lVar3 = plVar16[4];
  if (lVar11 + lVar3 == 0x400) {
    if (lVar11 == 0) goto embree_TokenStream_tryIdentifier;
    lVar11 = lVar11 + -1;
    plVar16[3] = lVar11;
    uVar14 = (int)plVar16[2] + 1U & 0x3ff;
    plVar16[2] = (ulong)uVar14;
  }
  else {
    uVar14 = (uint)plVar16[2];
  }
  plVar16[4] = lVar3 + 1;
  puVar2 = (undefined4 *)(plVar16[5] + (ulong)((int)lVar11 + uVar14 + (int)lVar3 & 0x3ff) * 0x28);
  p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *puVar2 = uVar7;
  *(ulong *)(puVar2 + 2) = uVar13;
  if (p_Var4 == p_Var18) {
LAB_00106d96:
    *(undefined8 *)(puVar2 + 6) = uVar17;
    *(undefined8 *)(puVar2 + 8) = uVar5;
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_001074de:
      p_Var18 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var18;
          *(int *)p_Var18 = *(int *)p_Var18 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
  }
  else {
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        UNLOCK();
        p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001074d2;
LAB_00106d58:
        p_Var1 = p_Var18 + 8;
        if (*(long *)(p_Var18 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var18 + 8) = 0;
          (**(code **)(*(long *)p_Var18 + 0x10))();
          (**(code **)(*(long *)p_Var18 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var18 + 8);
            *(int *)(p_Var18 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
          }
        }
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
        goto LAB_00106d96;
      }
      *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
      p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00106d58;
LAB_001074d2:
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
      *(undefined8 *)(puVar2 + 6) = uVar17;
      *(undefined8 *)(puVar2 + 8) = uVar5;
      goto LAB_001074de;
    }
    if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00106d58;
    *(undefined8 *)(puVar2 + 6) = uVar17;
    *(undefined8 *)(puVar2 + 8) = uVar5;
  }
  uVar14 = *(uint *)(plVar16[5] + (ulong)((int)plVar16[3] + (int)plVar16[2] & 0x3ff) * 0x28);
  if ((uVar14 < 0x100) && (this[(ulong)uVar14 + 0x148] != (TokenStream)0x0)) {
    plVar16 = *(long **)(this + 0x40);
    lVar11 = plVar16[4];
    if (lVar11 != 0) goto LAB_00106e4c;
    (**(code **)(*plVar16 + 0x28))(&local_e8,plVar16);
    uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
    uVar5 = local_d0;
    uVar17 = local_d8;
    p_Var4 = local_e0;
    uVar13 = local_e8;
    if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      }
      if (local_e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var18 = local_e0 + 8;
        if (*(long *)(local_e0 + 8) == 0x100000001) {
          *(undefined8 *)(local_e0 + 8) = 0;
          (**(code **)(*(long *)local_e0 + 0x10))();
          (**(code **)(*(long *)p_Var4 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var18;
            *(int *)p_Var18 = *(int *)p_Var18 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(local_e0 + 8);
            *(int *)(local_e0 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_e0);
          }
        }
      }
    }
    lVar11 = plVar16[3];
    lVar3 = plVar16[4];
    if (lVar11 + lVar3 == 0x400) {
      if (lVar11 == 0) {
embree_TokenStream_tryIdentifier:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = lVar11 + -1;
      plVar16[3] = lVar11;
      uVar14 = (int)plVar16[2] + 1U & 0x3ff;
      plVar16[2] = (ulong)uVar14;
    }
    else {
      uVar14 = (uint)plVar16[2];
    }
    plVar16[4] = lVar3 + 1;
    puVar2 = (undefined4 *)(plVar16[5] + (ulong)((int)lVar11 + uVar14 + (int)lVar3 & 0x3ff) * 0x28);
    p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    *puVar2 = uVar7;
    *(ulong *)(puVar2 + 2) = uVar13;
    if (p_Var4 == p_Var18) {
LAB_001076e1:
      *(undefined8 *)(puVar2 + 6) = uVar17;
      *(undefined8 *)(puVar2 + 8) = uVar5;
      if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00106e48;
    }
    else {
      if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          *(undefined8 *)(puVar2 + 6) = uVar17;
          *(undefined8 *)(puVar2 + 8) = uVar5;
          lVar11 = plVar16[4];
          goto LAB_00106e4c;
        }
LAB_001076a3:
        p_Var1 = p_Var18 + 8;
        if (*(long *)(p_Var18 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var18 + 8) = 0;
          (**(code **)(*(long *)p_Var18 + 0x10))();
          (**(code **)(*(long *)p_Var18 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var18 + 8);
            *(int *)(p_Var18 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
          }
        }
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
        goto LAB_001076e1;
      }
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        UNLOCK();
        p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      }
      else {
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      }
      if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001076a3;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var4;
      *(undefined8 *)(puVar2 + 6) = uVar17;
      *(undefined8 *)(puVar2 + 8) = uVar5;
    }
    p_Var18 = p_Var4 + 8;
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      lVar11 = plVar16[4];
      goto LAB_00106e4c;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar8 = *(int *)p_Var18;
      *(int *)p_Var18 = *(int *)p_Var18 + -1;
      UNLOCK();
    }
    else {
      iVar8 = *(int *)(p_Var4 + 8);
      *(int *)(p_Var4 + 8) = iVar8 + -1;
    }
    if (iVar8 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
    }
    goto LAB_00106e48;
  }
LAB_00106dcd:
  uVar17 = 0;
  goto LAB_00106dcf;
LAB_00107230:
  local_a8 = local_98;
  local_e8 = local_c0;
  if (local_c0 < 0x10) {
    if (local_c0 == 1) {
      local_98[0] = CONCAT71(local_98[0]._1_7_,*local_c8);
    }
    else if (local_c0 != 0) goto LAB_00107771;
  }
  else {
    local_a8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_e8);
    local_98[0] = local_e8;
LAB_00107771:
    memcpy(local_a8,__src,uVar13);
    uVar13 = local_e8;
  }
  __src_00 = local_a8;
  local_a0 = uVar13;
  *(undefined1 *)((long)local_a8 + uVar13) = 0;
  local_88 = 4;
  local_80 = (Token *)local_70;
  local_e8 = uVar13;
  if (uVar13 < 0x10) {
    if (uVar13 == 1) {
      local_70[0] = CONCAT71(local_70[0]._1_7_,(char)*local_a8);
    }
    else if (uVar13 != 0) goto LAB_001078b4;
  }
  else {
    local_80 = (Token *)std::__cxx11::string::_M_create((ulong *)&local_80,(ulong)&local_e8);
    local_70[0] = local_e8;
LAB_001078b4:
    memcpy(local_80,__src_00,uVar13);
  }
  local_78 = local_e8;
  local_80[local_e8] = (Token)0x0;
  local_60 = *(undefined8 *)param_2;
  local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
  if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar10 = *(Token **)(param_1 + 8);
    pTVar12 = pTVar10;
    if (pTVar10 == param_1 + 0x18) goto LAB_0010791d;
LAB_00107345:
    pTVar12 = pTVar10;
    if (local_80 == (Token *)local_70) goto LAB_00107b40;
    *(Token **)(param_1 + 8) = local_80;
    uVar13 = *(ulong *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x10) = local_e8;
    *(ulong *)(param_1 + 0x18) = local_70[0];
    local_80 = pTVar10;
    if (pTVar10 == (Token *)0x0) {
LAB_0010794a:
      local_80 = (Token *)local_70;
      uVar13 = local_70[0];
    }
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
    }
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar10 = *(Token **)(param_1 + 8);
    pTVar12 = param_1 + 0x18;
    if (pTVar10 != param_1 + 0x18) goto LAB_00107345;
LAB_0010791d:
    if (local_80 != (Token *)local_70) {
      *(Token **)(param_1 + 8) = local_80;
      *(ulong *)(param_1 + 0x10) = local_e8;
      *(ulong *)(param_1 + 0x18) = local_70[0];
      goto LAB_0010794a;
    }
LAB_00107b40:
    if (local_e8 != 0) {
      if (local_e8 == 1) {
        *pTVar12 = local_70[0]._0_1_;
        pTVar10 = *(Token **)(param_1 + 8);
      }
      else {
        uVar14 = (uint)local_e8;
        uVar13 = local_e8 & 0xffffffff;
        if (uVar14 < 8) {
          if ((local_e8 & 4) == 0) {
            if (uVar14 != 0) {
              *pTVar12 = local_70[0]._0_1_;
              if ((local_e8 & 2) == 0) goto LAB_00107b7e;
              *(undefined2 *)(pTVar12 + (uVar13 - 2)) =
                   *(undefined2 *)((long)local_70 + (uVar13 - 2));
              pTVar10 = *(Token **)(param_1 + 8);
            }
          }
          else {
            *(undefined4 *)pTVar12 = (undefined4)local_70[0];
            *(undefined4 *)(pTVar12 + (uVar13 - 4)) = *(undefined4 *)((long)local_70 + (uVar13 - 4))
            ;
            pTVar10 = *(Token **)(param_1 + 8);
          }
        }
        else {
          *(ulong *)pTVar12 = local_70[0];
          *(undefined8 *)(pTVar12 + ((local_e8 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)local_70 + ((local_e8 & 0xffffffff) - 8));
          lVar11 = (long)pTVar12 - ((ulong)(pTVar12 + 8) & 0xfffffffffffffff8);
          uVar14 = (int)lVar11 + uVar14 & 0xfffffff8;
          if (7 < uVar14) {
            uVar9 = 0;
            do {
              uVar13 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(pTVar12 + 8) & 0xfffffffffffffff8) + uVar13) =
                   *(undefined8 *)((Token *)local_70 + (uVar13 - lVar11));
            } while (uVar9 < uVar14);
          }
LAB_00107b7e:
          pTVar10 = *(Token **)(param_1 + 8);
        }
      }
    }
    *(ulong *)(param_1 + 0x10) = local_e8;
    pTVar10[local_e8] = (Token)0x0;
    uVar13 = local_70[0];
  }
  local_70[0] = uVar13;
  local_78 = 0;
  *local_80 = (Token)0x0;
  p_Var18 = local_58;
  uVar17 = local_60;
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar17;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var18;
  if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
  }
  else {
    p_Var18 = p_Var4 + 8;
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar8 = *(int *)p_Var18;
        *(int *)p_Var18 = *(int *)p_Var18 + -1;
        UNLOCK();
      }
      else {
        iVar8 = *(int *)(p_Var4 + 8);
        *(int *)(p_Var4 + 8) = iVar8 + -1;
      }
      if (iVar8 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      }
    }
    p_Var4 = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var18 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var18;
          *(int *)p_Var18 = *(int *)p_Var18 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
  }
  if (local_80 != (Token *)local_70) {
    operator_delete(local_80,local_70[0] + 1);
  }
  if (local_a8 != local_98) {
    operator_delete(local_a8,local_98[0] + 1);
  }
  uVar17 = 1;
LAB_00106dcf:
  if (local_c8 != &local_b8) {
    operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
  }
LAB_00106de7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a9fa) */
/* WARNING: Removing unreachable block (ram,0x0010a0ce) */
/* WARNING: Removing unreachable block (ram,0x0010a0d8) */
/* WARNING: Removing unreachable block (ram,0x00109089) */
/* WARNING: Removing unreachable block (ram,0x001090aa) */
/* WARNING: Removing unreachable block (ram,0x00109c65) */
/* WARNING: Removing unreachable block (ram,0x00109c79) */
/* embree::TokenStream::tryFloat(embree::Token&, embree::ParseLocation const&) */

undefined4 __thiscall
embree::TokenStream::tryFloat(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  Stream<int> *pSVar3;
  Stream<int> *pSVar4;
  Stream<int> *pSVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  Stream<int> *pSVar18;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var19;
  undefined1 *puVar20;
  int iVar21;
  long lVar22;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var23;
  long in_FS_OFFSET;
  float fVar24;
  double dVar25;
  undefined8 local_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  ulong local_a0;
  char local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulong *local_80;
  long local_78;
  ulong local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_98 = '\0';
  local_80 = (ulong *)0x3;
  local_78 = CONCAT44(local_78._4_4_,0x6e616e);
  local_a8 = &local_98;
  local_88 = &local_78;
  cVar9 = trySymbol(this,(string *)&local_88);
  if (local_88 != &local_78) {
    operator_delete(local_88,local_78 + 1);
  }
  if (cVar9 == '\0') {
    local_80 = (ulong *)0x4;
    local_78 = CONCAT35(local_78._5_3_,0x666e692b);
    local_88 = &local_78;
    cVar9 = trySymbol(this,(string *)&local_88);
    if (local_88 != &local_78) {
      operator_delete(local_88,local_78 + 1);
    }
    if (cVar9 != '\0') {
      local_70[0] = local_70[0] & 0xffffffffffffff00;
      local_88 = (long *)0x7f80000000000003;
      *(undefined4 *)param_1 = 3;
      *(undefined4 *)(param_1 + 4) = 0x7f800000;
      goto LAB_00108a6f;
    }
    local_80 = (ulong *)0x4;
    local_78 = CONCAT35(local_78._5_3_,0x666e692d);
    local_88 = &local_78;
    uVar10 = trySymbol(this,(string *)&local_88);
    if (local_88 != &local_78) {
      operator_delete(local_88,local_78 + 1);
    }
    if ((char)uVar10 != '\0') {
      local_70[0] = local_70[0] & 0xffffffffffffff00;
      local_88 = (long *)0xff80000000000003;
      *(undefined4 *)param_1 = 3;
      *(undefined4 *)(param_1 + 4) = 0xff800000;
      goto LAB_00108a6f;
    }
    cVar9 = decDigits(this,(string *)&local_a8);
    if (cVar9 == '\0') {
      pSVar3 = *(Stream<int> **)(this + 0x40);
      pSVar18 = pSVar3;
      if (*(long *)(pSVar3 + 0x20) == 0) {
        (**(code **)(*(long *)pSVar3 + 0x28))(&local_c8,pSVar3);
        uVar11 = (**(code **)(*(long *)pSVar3 + 0x20))(pSVar3);
        uVar8 = local_b0;
        uVar7 = local_b8;
        p_Var23 = local_c0;
        uVar6 = local_c8;
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          }
          if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var19 = local_c0 + 8;
            if (*(long *)(local_c0 + 8) == 0x100000001) {
              *(undefined8 *)(local_c0 + 8) = 0;
              (**(code **)(*(long *)local_c0 + 0x10))();
              (**(code **)(*(long *)p_Var23 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(local_c0 + 8);
                *(int *)(local_c0 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_c0);
              }
            }
          }
        }
        lVar22 = *(long *)(pSVar3 + 0x18);
        lVar14 = *(long *)(pSVar3 + 0x20);
        if (lVar22 + lVar14 == 0x400) {
          if (lVar22 == 0) goto embree_TokenStream_tryFloat;
          lVar22 = lVar22 + -1;
          *(long *)(pSVar3 + 0x18) = lVar22;
          uVar17 = (int)*(long *)(pSVar3 + 0x10) + 1U & 0x3ff;
          *(ulong *)(pSVar3 + 0x10) = (ulong)uVar17;
        }
        else {
          uVar17 = (uint)*(long *)(pSVar3 + 0x10);
        }
        *(long *)(pSVar3 + 0x20) = lVar14 + 1;
        puVar2 = (undefined4 *)
                 (*(long *)(pSVar3 + 0x28) +
                 (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar11;
        *(undefined8 *)(puVar2 + 2) = uVar6;
        if (p_Var23 == p_Var19) {
LAB_00108dcc:
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109940;
LAB_00108ddd:
          pSVar18 = *(Stream<int> **)(this + 0x40);
        }
        else {
          if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar2 + 6) = uVar7;
              *(undefined8 *)(puVar2 + 8) = uVar8;
              pSVar18 = *(Stream<int> **)(this + 0x40);
              goto LAB_001090d3;
            }
LAB_00108d8e:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
            goto LAB_00108dcc;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          else {
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108d8e;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
LAB_00109940:
          p_Var19 = p_Var23 + 8;
          if (*(long *)(p_Var23 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var23 + 8) = 0;
            (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
            pSVar18 = *(Stream<int> **)(this + 0x40);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var23 + 8);
              *(int *)(p_Var23 + 8) = iVar21 + -1;
            }
            if (iVar21 != 1) goto LAB_00108ddd;
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
            pSVar18 = *(Stream<int> **)(this + 0x40);
          }
        }
      }
LAB_001090d3:
      if (*(int *)(*(long *)(pSVar3 + 0x28) +
                  (ulong)((int)*(long *)(pSVar3 + 0x18) + (int)*(long *)(pSVar3 + 0x10) & 0x3ff) *
                  0x28) == 0x2e) {
        cVar9 = Stream<int>::get(pSVar18);
        uVar16 = local_a0;
        uVar13 = local_a0 + 1;
        if (local_a8 == &local_98) {
          uVar15 = 0xf;
        }
        else {
          uVar15 = CONCAT71(uStack_97,local_98);
        }
        if (uVar15 < uVar13) {
          std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
        }
        local_a8[uVar16] = cVar9;
        local_a8[uVar16 + 1] = '\0';
        local_a0 = uVar13;
        cVar9 = decDigits(this,(string *)&local_a8);
        if (cVar9 != '\0') {
          piVar12 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
          if ((*piVar12 == 0x65) ||
             (piVar12 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40)), *piVar12 == 0x45))
          {
            pSVar18 = *(Stream<int> **)(this + 0x40);
            goto LAB_00109819;
          }
          goto LAB_00108fb9;
        }
LAB_00109910:
        pSVar18 = *(Stream<int> **)(this + 0x40);
      }
LAB_001090f5:
      uVar13 = *(ulong *)(pSVar18 + 0x18);
LAB_001090fa:
      if (uVar13 < local_a0) {
embree_TokenStream_tryFloat:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pSVar3 = pSVar18 + 0x20;
      *(ulong *)pSVar3 = *(long *)pSVar3 + local_a0;
      *(ulong *)(pSVar18 + 0x18) = uVar13 - local_a0;
      if (*(long *)pSVar3 != 0) goto LAB_00108b9b;
      (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
      uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var23 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))(local_c0);
            (**(code **)(*(long *)local_c0 + 0x18))(local_c0);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var23;
              *(int *)p_Var23 = *(int *)p_Var23 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar22 = *(long *)(pSVar18 + 0x18);
      lVar14 = *(long *)(pSVar18 + 0x20);
      if (lVar22 + lVar14 == 0x400) {
        if (lVar22 == 0) goto embree_TokenStream_tryFloat;
        lVar22 = lVar22 + -1;
        *(long *)(pSVar18 + 0x18) = lVar22;
        uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
        *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)*(long *)(pSVar18 + 0x10);
      }
      *(long *)(pSVar18 + 0x20) = lVar14 + 1;
      puVar2 = (undefined4 *)
               (*(long *)(pSVar18 + 0x28) +
               (ulong)((int)lVar22 + uVar17 + (int)lVar14 & 0x3ff) * 0x28);
      p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *puVar2 = uVar11;
      *(undefined8 *)(puVar2 + 2) = local_c8;
      if (local_c0 == p_Var23) {
LAB_0010928d:
        *(undefined8 *)(puVar2 + 6) = local_b8;
        *(undefined8 *)(puVar2 + 8) = local_b0;
        if (local_c0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108b9b;
      }
      else {
        if (local_c0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar2 + 6) = local_b8;
            *(undefined8 *)(puVar2 + 8) = local_b0;
            goto LAB_00108b9b;
          }
LAB_00109249:
          p_Var19 = p_Var23 + 8;
          if (*(long *)(p_Var23 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var23 + 8) = 0;
            (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var23 + 8);
              *(int *)(p_Var23 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_c0;
          goto LAB_0010928d;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109249;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_c0;
        *(undefined8 *)(puVar2 + 6) = local_b8;
        *(undefined8 *)(puVar2 + 8) = local_b0;
      }
      p_Var23 = local_c0 + 8;
      if (*(long *)(local_c0 + 8) == 0x100000001) {
        *(undefined8 *)(local_c0 + 8) = 0;
        (**(code **)(*(long *)local_c0 + 0x10))(local_c0);
        (**(code **)(*(long *)local_c0 + 0x18))(local_c0);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar21 = *(int *)p_Var23;
          *(int *)p_Var23 = *(int *)p_Var23 + -1;
          UNLOCK();
        }
        else {
          iVar21 = *(int *)(local_c0 + 8);
          *(int *)(local_c0 + 8) = iVar21 + -1;
        }
        if (iVar21 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
        }
      }
      goto LAB_00108b9b;
    }
    pSVar18 = *(Stream<int> **)(this + 0x40);
    lVar22 = *(long *)(pSVar18 + 0x20);
    if (lVar22 != 0) {
      lVar14 = *(long *)(pSVar18 + 0x18);
      iVar21 = *(int *)(*(long *)(pSVar18 + 0x28) +
                       (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)lVar14 & 0x3ff) * 0x28);
      if (iVar21 == 0x2e) goto LAB_00109499;
LAB_00108f03:
      uVar13 = *(ulong *)(pSVar18 + 0x18);
      iVar21 = *(int *)(*(long *)(pSVar18 + 0x28) +
                       (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)uVar13 & 0x3ff) * 0x28);
      if (iVar21 == 0x65) {
LAB_00108f58:
        uVar16 = local_a0;
        *(long *)(pSVar18 + 0x20) = lVar22 + -1;
        *(ulong *)(pSVar18 + 0x18) = uVar13 + 1;
        uVar13 = local_a0 + 1;
        if (local_a8 == &local_98) {
          uVar15 = 0xf;
        }
        else {
          uVar15 = CONCAT71(uStack_97,local_98);
        }
        if (uVar15 < uVar13) {
          std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
        }
        local_a8[uVar16] = (char)iVar21;
        local_a8[uVar16 + 1] = '\0';
        local_a0 = uVar13;
        goto LAB_00108fa5;
      }
LAB_00108f2a:
      uVar13 = *(ulong *)(pSVar18 + 0x18);
      iVar21 = *(int *)(*(long *)(pSVar18 + 0x28) +
                       (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)uVar13 & 0x3ff) * 0x28);
      if (iVar21 == 0x45) goto LAB_00108f58;
      goto LAB_001090fa;
    }
    (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
    uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
    uVar8 = local_b0;
    uVar7 = local_b8;
    p_Var23 = local_c0;
    uVar6 = local_c8;
    if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      }
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var19 = local_c0 + 8;
        if (*(long *)(local_c0 + 8) == 0x100000001) {
          *(undefined8 *)(local_c0 + 8) = 0;
          (**(code **)(*(long *)local_c0 + 0x10))();
          (**(code **)(*(long *)p_Var23 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(local_c0 + 8);
            *(int *)(local_c0 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
          }
        }
      }
    }
    lVar22 = *(long *)(pSVar18 + 0x18);
    lVar14 = *(long *)(pSVar18 + 0x20);
    if (lVar22 + lVar14 == 0x400) {
      if (lVar22 == 0) goto embree_TokenStream_tryFloat;
      lVar22 = lVar22 + -1;
      *(long *)(pSVar18 + 0x18) = lVar22;
      *(ulong *)(pSVar18 + 0x10) = (ulong)((int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff);
    }
    *(long *)(pSVar18 + 0x20) = lVar14 + 1;
    puVar2 = (undefined4 *)
             (*(long *)(pSVar18 + 0x28) +
             (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)lVar14 + (int)lVar22 & 0x3ff) * 0x28);
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    *puVar2 = uVar11;
    *(undefined8 *)(puVar2 + 2) = uVar6;
    if (p_Var23 == p_Var19) {
LAB_0010850b:
      *(undefined8 *)(puVar2 + 6) = uVar7;
      *(undefined8 *)(puVar2 + 8) = uVar8;
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_001099be:
        p_Var19 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
    }
    else {
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001099b2;
LAB_001084cb:
          p_Var1 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))();
            (**(code **)(*(long *)p_Var19 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          goto LAB_0010850b;
        }
        *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001084cb;
LAB_001099b2:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        goto LAB_001099be;
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001084cb;
      *(undefined8 *)(puVar2 + 6) = uVar7;
      *(undefined8 *)(puVar2 + 8) = uVar8;
    }
    pSVar3 = pSVar18 + 0x18;
    pSVar4 = pSVar18 + 0x10;
    pSVar5 = pSVar18 + 0x28;
    pSVar18 = *(Stream<int> **)(this + 0x40);
    lVar22 = *(long *)(pSVar18 + 0x20);
    if (*(int *)(*(long *)pSVar5 +
                (ulong)((int)*(long *)pSVar3 + (int)*(long *)pSVar4 & 0x3ff) * 0x28) != 0x2e) {
      if (lVar22 != 0) goto LAB_00108f03;
      (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
      uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
      uVar8 = local_b0;
      uVar7 = local_b8;
      p_Var23 = local_c0;
      uVar6 = local_c8;
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))();
            (**(code **)(*(long *)p_Var23 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar22 = *(long *)(pSVar18 + 0x18);
      lVar14 = *(long *)(pSVar18 + 0x20);
      if (lVar22 + lVar14 == 0x400) {
        if (lVar22 == 0) goto embree_TokenStream_tryFloat;
        lVar22 = lVar22 + -1;
        *(long *)(pSVar18 + 0x18) = lVar22;
        uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
        *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)*(long *)(pSVar18 + 0x10);
      }
      *(long *)(pSVar18 + 0x20) = lVar14 + 1;
      puVar2 = (undefined4 *)
               (*(long *)(pSVar18 + 0x28) +
               (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *puVar2 = uVar11;
      *(undefined8 *)(puVar2 + 2) = uVar6;
      if (p_Var23 == p_Var19) {
LAB_00108694:
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109b00:
          p_Var19 = p_Var23 + 8;
          if (*(long *)(p_Var23 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var23 + 8) = 0;
            (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var23 + 8);
              *(int *)(p_Var23 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
            }
          }
        }
      }
      else {
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109af4;
LAB_00108656:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
            goto LAB_00108694;
          }
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108656;
LAB_00109af4:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          goto LAB_00109b00;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108656;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
      }
      pSVar3 = pSVar18 + 0x18;
      pSVar4 = pSVar18 + 0x10;
      pSVar5 = pSVar18 + 0x28;
      pSVar18 = *(Stream<int> **)(this + 0x40);
      lVar22 = *(long *)(pSVar18 + 0x20);
      if (*(int *)(*(long *)pSVar5 +
                  (ulong)((int)*(long *)pSVar3 + (int)*(long *)pSVar4 & 0x3ff) * 0x28) == 0x65) {
LAB_0010885d:
        lVar22 = *(long *)(pSVar18 + 0x20);
        if (lVar22 != 0) {
          uVar13 = *(ulong *)(pSVar18 + 0x18);
          iVar21 = *(int *)((ulong)((int)*(long *)(pSVar18 + 0x10) + (int)uVar13 & 0x3ff) * 0x28 +
                           *(long *)(pSVar18 + 0x28));
          goto LAB_00108f58;
        }
        (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
        uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
        uVar8 = local_b0;
        uVar7 = local_b8;
        p_Var23 = local_c0;
        uVar6 = local_c8;
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          }
          if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var19 = local_c0 + 8;
            if (*(long *)(local_c0 + 8) == 0x100000001) {
              *(undefined8 *)(local_c0 + 8) = 0;
              (**(code **)(*(long *)local_c0 + 0x10))();
              (**(code **)(*(long *)p_Var23 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(local_c0 + 8);
                *(int *)(local_c0 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_c0);
              }
            }
          }
        }
        lVar22 = *(long *)(pSVar18 + 0x18);
        lVar14 = *(long *)(pSVar18 + 0x20);
        if (lVar22 + lVar14 == 0x400) {
          if (lVar22 == 0) goto embree_TokenStream_tryFloat;
          lVar22 = lVar22 + -1;
          *(long *)(pSVar18 + 0x18) = lVar22;
          uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
          *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
        }
        else {
          uVar17 = (uint)*(long *)(pSVar18 + 0x10);
        }
        *(long *)(pSVar18 + 0x20) = lVar14 + 1;
        puVar2 = (undefined4 *)
                 (*(long *)(pSVar18 + 0x28) +
                 (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar11;
        *(undefined8 *)(puVar2 + 2) = uVar6;
        if (p_Var23 == p_Var19) {
LAB_001089c4:
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109dfd:
            p_Var19 = p_Var23 + 8;
            if (*(long *)(p_Var23 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var23 + 8) = 0;
              (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
              (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(p_Var23 + 8);
                *(int *)(p_Var23 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23)
                ;
              }
            }
          }
        }
        else {
          if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
              UNLOCK();
              p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
              if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109dec;
LAB_00108984:
              p_Var1 = p_Var19 + 8;
              if (*(long *)(p_Var19 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var19 + 8) = 0;
                (**(code **)(*(long *)p_Var19 + 0x10))();
                (**(code **)(*(long *)p_Var19 + 0x18))();
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar21 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar21 = *(int *)(p_Var19 + 8);
                  *(int *)(p_Var19 + 8) = iVar21 + -1;
                }
                if (iVar21 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var19);
                }
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
              goto LAB_001089c4;
            }
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
            if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108984;
LAB_00109dec:
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
            *(undefined8 *)(puVar2 + 6) = uVar7;
            *(undefined8 *)(puVar2 + 8) = uVar8;
            goto LAB_00109dfd;
          }
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108984;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
        }
        uVar13 = *(ulong *)(pSVar18 + 0x18);
        iVar21 = *(int *)(*(long *)(pSVar18 + 0x28) +
                         (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)uVar13 & 0x3ff) * 0x28);
        lVar22 = *(long *)(pSVar18 + 0x20);
        goto LAB_00108f58;
      }
      if (lVar22 != 0) goto LAB_00108f2a;
      (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
      uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
      uVar8 = local_b0;
      uVar7 = local_b8;
      p_Var23 = local_c0;
      uVar6 = local_c8;
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))();
            (**(code **)(*(long *)p_Var23 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar22 = *(long *)(pSVar18 + 0x18);
      lVar14 = *(long *)(pSVar18 + 0x20);
      if (lVar22 + lVar14 == 0x400) {
        if (lVar22 == 0) goto embree_TokenStream_tryFloat;
        lVar22 = lVar22 + -1;
        *(long *)(pSVar18 + 0x18) = lVar22;
        uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
        *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)*(long *)(pSVar18 + 0x10);
      }
      *(long *)(pSVar18 + 0x20) = lVar14 + 1;
      puVar2 = (undefined4 *)
               (*(long *)(pSVar18 + 0x28) +
               (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *puVar2 = uVar11;
      *(undefined8 *)(puVar2 + 2) = uVar6;
      if (p_Var23 == p_Var19) {
LAB_00108820:
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109caf:
          p_Var19 = p_Var23 + 8;
          if (*(long *)(p_Var23 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var23 + 8) = 0;
            (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var23 + 8);
              *(int *)(p_Var23 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
            }
          }
        }
      }
      else {
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109ca3;
LAB_001087e2:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
            goto LAB_00108820;
          }
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001087e2;
LAB_00109ca3:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          goto LAB_00109caf;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001087e2;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
      }
      pSVar3 = pSVar18 + 0x18;
      pSVar4 = pSVar18 + 0x10;
      pSVar5 = pSVar18 + 0x28;
      pSVar18 = *(Stream<int> **)(this + 0x40);
      if (*(int *)(*(long *)pSVar5 +
                  (ulong)((int)*(long *)pSVar3 + (int)*(long *)pSVar4 & 0x3ff) * 0x28) == 0x45)
      goto LAB_0010885d;
      goto LAB_001090f5;
    }
    if (lVar22 != 0) {
      lVar14 = *(long *)(pSVar18 + 0x18);
      iVar21 = *(int *)((ulong)((int)*(long *)(pSVar18 + 0x10) + (int)lVar14 & 0x3ff) * 0x28 +
                       *(long *)(pSVar18 + 0x28));
      goto LAB_00109499;
    }
    (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
    uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
    uVar8 = local_b0;
    uVar7 = local_b8;
    p_Var23 = local_c0;
    uVar6 = local_c8;
    if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      }
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var19 = local_c0 + 8;
        if (*(long *)(local_c0 + 8) == 0x100000001) {
          *(undefined8 *)(local_c0 + 8) = 0;
          (**(code **)(*(long *)local_c0 + 0x10))();
          (**(code **)(*(long *)p_Var23 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(local_c0 + 8);
            *(int *)(local_c0 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
          }
        }
      }
    }
    lVar22 = *(long *)(pSVar18 + 0x18);
    lVar14 = *(long *)(pSVar18 + 0x20);
    if (lVar22 + lVar14 == 0x400) {
      if (lVar22 == 0) goto embree_TokenStream_tryFloat;
      lVar22 = lVar22 + -1;
      *(long *)(pSVar18 + 0x18) = lVar22;
      uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
      *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
    }
    else {
      uVar17 = (uint)*(long *)(pSVar18 + 0x10);
    }
    *(long *)(pSVar18 + 0x20) = lVar14 + 1;
    puVar2 = (undefined4 *)
             (*(long *)(pSVar18 + 0x28) + (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28
             );
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    *puVar2 = uVar11;
    *(undefined8 *)(puVar2 + 2) = uVar6;
    if (p_Var23 == p_Var19) {
LAB_00109462:
      *(undefined8 *)(puVar2 + 6) = uVar7;
      *(undefined8 *)(puVar2 + 8) = uVar8;
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109f0a:
        p_Var19 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
    }
    else {
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109efe;
LAB_00109424:
          p_Var1 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))();
            (**(code **)(*(long *)p_Var19 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          goto LAB_00109462;
        }
        *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109424;
LAB_00109efe:
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        goto LAB_00109f0a;
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109424;
      *(undefined8 *)(puVar2 + 6) = uVar7;
      *(undefined8 *)(puVar2 + 8) = uVar8;
    }
    lVar14 = *(long *)(pSVar18 + 0x18);
    iVar21 = *(int *)(*(long *)(pSVar18 + 0x28) +
                     (ulong)((int)*(long *)(pSVar18 + 0x10) + (int)lVar14 & 0x3ff) * 0x28);
    lVar22 = *(long *)(pSVar18 + 0x20);
LAB_00109499:
    uVar16 = local_a0;
    *(long *)(pSVar18 + 0x20) = lVar22 + -1;
    *(long *)(pSVar18 + 0x18) = lVar14 + 1;
    uVar13 = local_a0 + 1;
    if (local_a8 == &local_98) {
      uVar15 = 0xf;
    }
    else {
      uVar15 = CONCAT71(uStack_97,local_98);
    }
    if (uVar15 < uVar13) {
      std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
    }
    local_a8[uVar16] = (char)iVar21;
    local_a8[uVar16 + 1] = '\0';
    local_a0 = uVar13;
    decDigits(this,(string *)&local_a8);
    pSVar3 = *(Stream<int> **)(this + 0x40);
    pSVar18 = pSVar3;
    if (*(long *)(pSVar3 + 0x20) == 0) {
      (**(code **)(*(long *)pSVar3 + 0x28))(&local_c8,pSVar3);
      uVar11 = (**(code **)(*(long *)pSVar3 + 0x20))(pSVar3);
      uVar8 = local_b0;
      uVar7 = local_b8;
      p_Var23 = local_c0;
      uVar6 = local_c8;
      if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        }
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_c0 + 8;
          if (*(long *)(local_c0 + 8) == 0x100000001) {
            *(undefined8 *)(local_c0 + 8) = 0;
            (**(code **)(*(long *)local_c0 + 0x10))();
            (**(code **)(*(long *)p_Var23 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(local_c0 + 8);
              *(int *)(local_c0 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
            }
          }
        }
      }
      lVar22 = *(long *)(pSVar3 + 0x18);
      lVar14 = *(long *)(pSVar3 + 0x20);
      if (lVar22 + lVar14 == 0x400) {
        if (lVar22 == 0) goto embree_TokenStream_tryFloat;
        lVar22 = lVar22 + -1;
        *(long *)(pSVar3 + 0x18) = lVar22;
        uVar17 = (int)*(long *)(pSVar3 + 0x10) + 1U & 0x3ff;
        *(ulong *)(pSVar3 + 0x10) = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)*(long *)(pSVar3 + 0x10);
      }
      *(long *)(pSVar3 + 0x20) = lVar14 + 1;
      puVar2 = (undefined4 *)
               (*(long *)(pSVar3 + 0x28) +
               (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
      *puVar2 = uVar11;
      *(undefined8 *)(puVar2 + 2) = uVar6;
      if (p_Var23 == p_Var19) {
LAB_00109643:
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
        if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109ea5;
      }
      else {
        if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar2 + 6) = uVar7;
            *(undefined8 *)(puVar2 + 8) = uVar8;
            pSVar18 = *(Stream<int> **)(this + 0x40);
            goto LAB_00109658;
          }
LAB_00109605:
          p_Var1 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))();
            (**(code **)(*(long *)p_Var19 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar21 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar21 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar21 + -1;
            }
            if (iVar21 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          goto LAB_00109643;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        else {
          *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109605;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
        *(undefined8 *)(puVar2 + 6) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar8;
LAB_00109ea5:
        p_Var19 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
      pSVar18 = *(Stream<int> **)(this + 0x40);
    }
LAB_00109658:
    if (*(int *)(*(long *)(pSVar3 + 0x28) +
                (ulong)((int)*(long *)(pSVar3 + 0x18) + (int)*(long *)(pSVar3 + 0x10) & 0x3ff) *
                0x28) != 0x65) {
      if (*(long *)(pSVar18 + 0x20) == 0) {
        (**(code **)(*(long *)pSVar18 + 0x28))(&local_c8,pSVar18);
        uVar11 = (**(code **)(*(long *)pSVar18 + 0x20))(pSVar18);
        uVar8 = local_b0;
        uVar7 = local_b8;
        p_Var23 = local_c0;
        uVar6 = local_c8;
        if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          }
          if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var19 = local_c0 + 8;
            if (*(long *)(local_c0 + 8) == 0x100000001) {
              *(undefined8 *)(local_c0 + 8) = 0;
              (**(code **)(*(long *)local_c0 + 0x10))();
              (**(code **)(*(long *)p_Var23 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(local_c0 + 8);
                *(int *)(local_c0 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_c0);
              }
            }
          }
        }
        lVar22 = *(long *)(pSVar18 + 0x18);
        lVar14 = *(long *)(pSVar18 + 0x20);
        if (lVar22 + lVar14 == 0x400) {
          if (lVar22 == 0) goto embree_TokenStream_tryFloat;
          lVar22 = lVar22 + -1;
          *(long *)(pSVar18 + 0x18) = lVar22;
          uVar17 = (int)*(long *)(pSVar18 + 0x10) + 1U & 0x3ff;
          *(ulong *)(pSVar18 + 0x10) = (ulong)uVar17;
        }
        else {
          uVar17 = (uint)*(long *)(pSVar18 + 0x10);
        }
        *(long *)(pSVar18 + 0x20) = lVar14 + 1;
        puVar2 = (undefined4 *)
                 (*(long *)(pSVar18 + 0x28) +
                 (ulong)(uVar17 + (int)lVar22 + (int)lVar14 & 0x3ff) * 0x28);
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
        *puVar2 = uVar11;
        *(undefined8 *)(puVar2 + 2) = uVar6;
        if (p_Var23 == p_Var19) {
LAB_001097d5:
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
          if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001097f0;
        }
        else {
          if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar2 + 6) = uVar7;
              *(undefined8 *)(puVar2 + 8) = uVar8;
              goto LAB_001097f0;
            }
LAB_00109797:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar21 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar21 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar21 + -1;
              }
              if (iVar21 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
            goto LAB_001097d5;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          else {
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
          }
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00109797;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = p_Var23;
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar8;
        }
        p_Var19 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar21 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar21 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar21 + -1;
          }
          if (iVar21 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
LAB_001097f0:
      if (*(int *)(*(long *)(pSVar18 + 0x28) +
                  (ulong)((int)*(long *)(pSVar18 + 0x18) + (int)*(long *)(pSVar18 + 0x10) & 0x3ff) *
                  0x28) == 0x45) {
        pSVar18 = *(Stream<int> **)(this + 0x40);
        goto LAB_00109819;
      }
      goto LAB_00108fb9;
    }
LAB_00109819:
    cVar9 = Stream<int>::get(pSVar18);
    uVar15 = local_a0;
    uVar16 = CONCAT71(uStack_97,local_98);
    uVar13 = local_a0 + 1;
    if (local_a8 == &local_98) {
      uVar16 = 0xf;
    }
    if (uVar16 < uVar13) {
      std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
    }
    local_a8[uVar15] = cVar9;
    local_a8[uVar15 + 1] = '\0';
    local_a0 = uVar13;
LAB_00108fa5:
    cVar9 = decDigits(this,(string *)&local_a8);
    if (cVar9 == '\0') goto LAB_00109910;
LAB_00108fb9:
    dVar25 = strtod(local_a8,(char **)0x0);
    local_60 = *(undefined8 *)param_2;
    fVar24 = (float)dVar25;
    local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
    local_70[0] = local_70[0] & 0xffffffffffffff00;
    local_88 = (long *)CONCAT44(fVar24,3);
    if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      local_50 = *(undefined8 *)(param_2 + 0x10);
      puVar20 = *(undefined1 **)(param_1 + 8);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = 3;
      *(float *)(param_1 + 4) = fVar24;
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
      }
      local_50 = *(undefined8 *)(param_2 + 0x10);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = 3;
      *(float *)(param_1 + 4) = fVar24;
      puVar20 = *(undefined1 **)(param_1 + 8);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar20 = 0;
  }
  else {
    local_70[0] = local_70[0] & 0xffffffffffffff00;
    local_88 = (long *)0x7fc0000000000003;
    *(undefined4 *)param_1 = 3;
    *(undefined4 *)(param_1 + 4) = 0x7fc00000;
LAB_00108a6f:
    local_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_60 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
  }
  p_Var19 = local_58;
  uVar6 = local_60;
  local_80 = local_70;
  local_78 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_70[0]._0_1_ = 0;
  p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var19;
  if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
  }
  else {
    p_Var19 = p_Var23 + 8;
    if (*(long *)(p_Var23 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var23 + 8) = 0;
      (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
      (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar21 = *(int *)p_Var19;
        *(int *)p_Var19 = *(int *)p_Var19 + -1;
        UNLOCK();
      }
      else {
        iVar21 = *(int *)(p_Var23 + 8);
        *(int *)(p_Var23 + 8) = iVar21 + -1;
      }
      if (iVar21 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
      }
    }
    p_Var23 = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var19 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar21 = *(int *)p_Var19;
          *(int *)p_Var19 = *(int *)p_Var19 + -1;
          UNLOCK();
        }
        else {
          iVar21 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar21 + -1;
        }
        if (iVar21 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
  }
  if (local_80 != local_70) {
    operator_delete(local_80,local_70[0] + 1);
  }
  uVar10 = 1;
LAB_00108b9b:
  if (local_a8 != &local_98) {
    operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* embree::TokenStream::next() */

void embree::TokenStream::next(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  TokenStream *in_RSI;
  undefined4 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var19;
  long *plVar20;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var21;
  long in_FS_OFFSET;
  undefined8 local_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  uint *local_80;
  undefined8 local_78;
  uint local_70 [4];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_78 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_60 = 0;
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_50 = 0xffffffffffffffff;
  local_48 = 0xffffffffffffffff;
  local_80 = local_70;
  do {
    plVar20 = *(long **)(in_RSI + 0x40);
    lVar15 = plVar20[4];
    if (lVar15 == 0) {
      (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
      uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
      uVar9 = local_90;
      uVar8 = local_98;
      p_Var21 = local_a0;
      uVar7 = local_a8;
      if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        }
        if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_a0 + 8;
          if (*(long *)(local_a0 + 8) == 0x100000001) {
            *(undefined8 *)(local_a0 + 8) = 0;
            (**(code **)(*(long *)local_a0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(local_a0 + 8);
              *(int *)(local_a0 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_a0);
            }
          }
        }
      }
      lVar15 = plVar20[3];
      lVar6 = plVar20[4];
      if (lVar15 + lVar6 == 0x400) {
        if (lVar15 == 0) goto embree_TokenStream_next;
        lVar15 = lVar15 + -1;
        plVar20[3] = lVar15;
        uVar17 = (int)plVar20[2] + 1U & 0x3ff;
        plVar20[2] = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)plVar20[2];
      }
      plVar20[4] = lVar6 + 1;
      puVar5 = (undefined4 *)
               (plVar20[5] + (ulong)((int)lVar15 + uVar17 + (int)lVar6 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *puVar5 = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar7;
      if (p_Var21 == p_Var19) {
LAB_0010affa:
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010b567:
          p_Var19 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
        }
      }
      else {
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b55b;
LAB_0010afbc:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
            goto LAB_0010affa;
          }
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010afbc;
LAB_0010b55b:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          goto LAB_0010b567;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010afbc;
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
      }
      plVar2 = plVar20 + 3;
      plVar3 = plVar20 + 2;
      plVar4 = plVar20 + 5;
      plVar20 = *(long **)(in_RSI + 0x40);
      lVar15 = plVar20[4];
      if (*(int *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28) == -1) break;
      if (lVar15 != 0) {
        uVar17 = *(uint *)((ulong)((int)plVar20[3] + (int)plVar20[2] & 0x3ff) * 0x28 + plVar20[5]);
        if (uVar17 < 0x100) goto LAB_0010b03d;
        break;
      }
      (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
      uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
      uVar9 = local_90;
      uVar8 = local_98;
      p_Var21 = local_a0;
      uVar7 = local_a8;
      if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        }
        if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_a0 + 8;
          if (*(long *)(local_a0 + 8) == 0x100000001) {
            *(undefined8 *)(local_a0 + 8) = 0;
            (**(code **)(*(long *)local_a0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(local_a0 + 8);
              *(int *)(local_a0 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_a0);
            }
          }
        }
      }
      lVar15 = plVar20[3];
      lVar6 = plVar20[4];
      if (lVar15 + lVar6 == 0x400) {
        if (lVar15 == 0) goto embree_TokenStream_next;
        lVar15 = lVar15 + -1;
        plVar20[3] = lVar15;
        uVar17 = (int)plVar20[2] + 1U & 0x3ff;
        plVar20[2] = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)plVar20[2];
      }
      plVar20[4] = lVar6 + 1;
      puVar5 = (undefined4 *)
               (plVar20[5] + (ulong)((int)lVar15 + uVar17 + (int)lVar6 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *puVar5 = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar7;
      if (p_Var21 == p_Var19) {
LAB_0010b70b:
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010b73b:
          p_Var19 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(p_Var21 + 8);
              *(int *)(p_Var21 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
            }
          }
        }
      }
      else {
        if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b72f;
LAB_0010b6cd:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))();
              (**(code **)(*(long *)p_Var19 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
            goto LAB_0010b70b;
          }
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b6cd;
LAB_0010b72f:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          goto LAB_0010b73b;
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b6cd;
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
      }
      plVar2 = plVar20 + 3;
      plVar3 = plVar20 + 2;
      plVar4 = plVar20 + 5;
      plVar20 = *(long **)(in_RSI + 0x40);
      uVar17 = *(uint *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28);
      lVar15 = plVar20[4];
      if ((0xff < uVar17) || (in_RSI[(ulong)uVar17 + 0x48] == (TokenStream)0x0)) break;
      if (lVar15 == 0) {
        (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
        uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
        uVar9 = local_90;
        uVar8 = local_98;
        p_Var21 = local_a0;
        uVar7 = local_a8;
        if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          }
          if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var19 = local_a0 + 8;
            if (*(long *)(local_a0 + 8) == 0x100000001) {
              *(undefined8 *)(local_a0 + 8) = 0;
              (**(code **)(*(long *)local_a0 + 0x10))();
              (**(code **)(*(long *)p_Var21 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(local_a0 + 8);
                *(int *)(local_a0 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_a0);
              }
            }
          }
        }
        lVar15 = plVar20[3];
        lVar6 = plVar20[4];
        if (lVar15 + lVar6 == 0x400) {
          if (lVar15 == 0) goto embree_TokenStream_next;
          lVar15 = lVar15 + -1;
          plVar20[3] = lVar15;
          uVar17 = (int)plVar20[2] + 1U & 0x3ff;
          plVar20[2] = (ulong)uVar17;
        }
        else {
          uVar17 = (uint)plVar20[2];
        }
        plVar20[4] = lVar6 + 1;
        puVar5 = (undefined4 *)
                 (plVar20[5] + (ulong)((int)lVar15 + uVar17 + (int)lVar6 & 0x3ff) * 0x28);
        *puVar5 = uVar13;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = uVar7;
        if (p_Var21 == p_Var19) {
LAB_0010b8fb:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b9ff;
        }
        else {
          if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = uVar8;
              *(undefined8 *)(puVar5 + 8) = uVar9;
              lVar15 = plVar20[4];
              goto LAB_0010b044;
            }
LAB_0010b8bb:
            p_Var1 = p_Var19 + 8;
            if (*(long *)(p_Var19 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var19 + 8) = 0;
              (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
              (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(p_Var19 + 8);
                *(int *)(p_Var19 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
            goto LAB_0010b8fb;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            UNLOCK();
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
            p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b8bb;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_0010b9ff:
          p_Var19 = p_Var21 + 8;
          if (*(long *)(p_Var21 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var21 + 8) = 0;
            (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
            (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
            lVar15 = plVar20[4];
            goto LAB_0010b044;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(p_Var21 + 8);
            *(int *)(p_Var21 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
          }
        }
        lVar15 = plVar20[4];
      }
    }
    else {
      uVar17 = *(uint *)(plVar20[5] + (ulong)((int)plVar20[2] + (int)plVar20[3] & 0x3ff) * 0x28);
      if (uVar17 == 0xffffffff) goto LAB_0010b1e0;
      if (0xff < uVar17) break;
LAB_0010b03d:
      if (in_RSI[(ulong)uVar17 + 0x48] == (TokenStream)0x0) break;
    }
LAB_0010b044:
    plVar20[3] = plVar20[3] + 1;
    plVar20[4] = lVar15 + -1;
  } while( true );
  if (lVar15 == 0) {
    (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
    uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
    uVar9 = local_90;
    uVar8 = local_98;
    p_Var21 = local_a0;
    uVar7 = local_a8;
    if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      }
      if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var19 = local_a0 + 8;
        if (*(long *)(local_a0 + 8) == 0x100000001) {
          *(undefined8 *)(local_a0 + 8) = 0;
          (**(code **)(*(long *)local_a0 + 0x10))();
          (**(code **)(*(long *)p_Var21 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var19;
            *(int *)p_Var19 = *(int *)p_Var19 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(local_a0 + 8);
            *(int *)(local_a0 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_a0);
          }
        }
      }
    }
    lVar15 = plVar20[3];
    lVar6 = plVar20[4];
    if (lVar15 + lVar6 == 0x400) {
      if (lVar15 == 0) goto embree_TokenStream_next;
      lVar15 = lVar15 + -1;
      plVar20[3] = lVar15;
      uVar17 = (int)plVar20[2] + 1U & 0x3ff;
      plVar20[2] = (ulong)uVar17;
    }
    else {
      uVar17 = (uint)plVar20[2];
    }
    plVar20[4] = lVar6 + 1;
    puVar5 = (undefined4 *)(plVar20[5] + (ulong)((int)lVar15 + uVar17 + (int)lVar6 & 0x3ff) * 0x28);
    *puVar5 = uVar13;
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
    *(undefined8 *)(puVar5 + 2) = uVar7;
    if (p_Var21 == p_Var19) {
LAB_0010b1cc:
      *(undefined8 *)(puVar5 + 6) = uVar8;
      *(undefined8 *)(puVar5 + 8) = uVar9;
      if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b1e0;
    }
    else {
      if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          goto LAB_0010b1e0;
        }
LAB_0010b18c:
        p_Var1 = p_Var19 + 8;
        if (*(long *)(p_Var19 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var19 + 8) = 0;
          (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
          (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(p_Var19 + 8);
            *(int *)(p_Var19 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
          }
        }
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
        goto LAB_0010b1cc;
      }
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
        UNLOCK();
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      }
      else {
        *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
        p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b18c;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
      *(undefined8 *)(puVar5 + 6) = uVar8;
      *(undefined8 *)(puVar5 + 8) = uVar9;
    }
    p_Var19 = p_Var21 + 8;
    if (*(long *)(p_Var21 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var21 + 8) = 0;
      (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
      (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar14 = *(int *)p_Var19;
        *(int *)p_Var19 = *(int *)p_Var19 + -1;
        UNLOCK();
      }
      else {
        iVar14 = *(int *)(p_Var21 + 8);
        *(int *)(p_Var21 + 8) = iVar14 + -1;
      }
      if (iVar14 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
      }
    }
  }
LAB_0010b1e0:
  lVar15 = plVar20[5] + (ulong)((int)plVar20[3] + (int)plVar20[2] & 0x3ff) * 0x28;
  local_c8 = *(undefined8 *)(lVar15 + 8);
  local_c0 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar15 + 0x10);
  if (local_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    }
  }
  uVar7 = *(undefined8 *)(lVar15 + 0x18);
  uVar8 = *(undefined8 *)(lVar15 + 0x20);
  local_b8 = uVar7;
  local_b0 = uVar8;
  cVar12 = trySymbols(in_RSI,(Token *)&local_88,(ParseLocation *)&local_c8);
  if (cVar12 == '\0') {
    cVar12 = tryFloat(in_RSI,(Token *)&local_88,(ParseLocation *)&local_c8);
    if (cVar12 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_0010b282;
      uVar16 = local_78 + 1;
      if ((uint)uVar16 < 8) goto LAB_0010bc70;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar16 & 0xffffffff));
      lVar15 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar17 = (uint)uVar16 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar17) {
        uVar18 = 0;
        do {
          uVar16 = (ulong)uVar18;
          uVar18 = uVar18 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar16) =
               *(undefined8 *)((long)local_70 + (uVar16 - lVar15));
        } while (uVar18 < uVar17);
      }
      goto LAB_0010b292;
    }
    cVar12 = tryInt(in_RSI,(Token *)&local_88,(ParseLocation *)&local_c8);
    if (cVar12 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_0010b282;
      uVar16 = local_78 + 1;
      if ((uint)uVar16 < 8) goto LAB_0010bc70;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar16 & 0xffffffff));
      lVar15 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar17 = (uint)uVar16 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar17) {
        uVar18 = 0;
        do {
          uVar16 = (ulong)uVar18;
          uVar18 = uVar18 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar16) =
               *(undefined8 *)((long)local_70 + (uVar16 - lVar15));
        } while (uVar18 < uVar17);
      }
      goto LAB_0010b292;
    }
    cVar12 = tryString(in_RSI,(Token *)&local_88,(ParseLocation *)&local_c8);
    if (cVar12 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_0010b282;
      uVar16 = local_78 + 1;
      if ((uint)uVar16 < 8) goto LAB_0010bc70;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar16 & 0xffffffff));
      lVar15 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar17 = (uint)uVar16 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar17) {
        uVar18 = 0;
        do {
          uVar16 = (ulong)uVar18;
          uVar18 = uVar18 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar16) =
               *(undefined8 *)((long)local_70 + (uVar16 - lVar15));
        } while (uVar18 < uVar17);
      }
      goto LAB_0010b292;
    }
    cVar12 = tryIdentifier(in_RSI,(Token *)&local_88,(ParseLocation *)&local_c8);
    if (cVar12 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_0010b282;
      uVar16 = local_78 + 1;
      uVar17 = (uint)uVar16;
      if (uVar17 < 8) {
        if ((uVar16 & 4) == 0) {
          if (uVar17 != 0) {
            *(undefined1 *)(in_RDI + 6) = (undefined1)local_70[0];
            if ((uVar16 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)local_80 + ((uVar16 & 0xffffffff) - 2));
            }
          }
        }
        else {
          in_RDI[6] = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar16 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar16 & 0xffffffff));
        lVar15 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
        uVar17 = uVar17 + (int)lVar15 & 0xfffffff8;
        if (7 < uVar17) {
          uVar18 = 0;
          do {
            uVar16 = (ulong)uVar18;
            uVar18 = uVar18 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar16) =
                 *(undefined8 *)((long)local_70 + (uVar16 - lVar15));
          } while (uVar18 < uVar17);
        }
      }
      goto LAB_0010b292;
    }
    plVar20 = *(long **)(in_RSI + 0x40);
    if (plVar20[4] == 0) {
      (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
      uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
      uVar11 = local_90;
      uVar10 = local_98;
      p_Var21 = local_a0;
      uVar9 = local_a8;
      if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        }
        if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var19 = local_a0 + 8;
          if (*(long *)(local_a0 + 8) == 0x100000001) {
            *(undefined8 *)(local_a0 + 8) = 0;
            (**(code **)(*(long *)local_a0 + 0x10))();
            (**(code **)(*(long *)p_Var21 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var19;
              *(int *)p_Var19 = *(int *)p_Var19 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(local_a0 + 8);
              *(int *)(local_a0 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_a0);
            }
          }
        }
      }
      lVar15 = plVar20[3];
      lVar6 = plVar20[4];
      if (lVar15 + lVar6 == 0x400) {
        if (lVar15 == 0) goto embree_TokenStream_next;
        lVar15 = lVar15 + -1;
        plVar20[3] = lVar15;
        uVar17 = (int)plVar20[2] + 1U & 0x3ff;
        plVar20[2] = (ulong)uVar17;
      }
      else {
        uVar17 = (uint)plVar20[2];
      }
      plVar20[4] = lVar6 + 1;
      puVar5 = (undefined4 *)
               (plVar20[5] + (ulong)(uVar17 + (int)lVar15 + (int)lVar6 & 0x3ff) * 0x28);
      p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *puVar5 = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar9;
      if (p_Var21 == p_Var19) {
LAB_0010c075:
        *(undefined8 *)(puVar5 + 6) = uVar10;
        *(undefined8 *)(puVar5 + 8) = uVar11;
        if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c090;
      }
      else {
        if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar5 + 6) = uVar10;
            *(undefined8 *)(puVar5 + 8) = uVar11;
            goto LAB_0010c090;
          }
LAB_0010c037:
          p_Var1 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))();
            (**(code **)(*(long *)p_Var19 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
          goto LAB_0010c075;
        }
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        else {
          *(int *)(p_Var21 + 8) = *(int *)(p_Var21 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        }
        if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c037;
        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var21;
        *(undefined8 *)(puVar5 + 6) = uVar10;
        *(undefined8 *)(puVar5 + 8) = uVar11;
      }
      p_Var19 = p_Var21 + 8;
      if (*(long *)(p_Var21 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var21 + 8) = 0;
        (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
        (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var19;
          *(int *)p_Var19 = *(int *)p_Var19 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Var21 + 8);
          *(int *)(p_Var21 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21);
        }
      }
    }
LAB_0010c090:
    if (*(int *)(plVar20[5] + (ulong)((int)plVar20[3] + (int)plVar20[2] & 0x3ff) * 0x28) == -1) {
      *in_RDI = 0;
    }
    else {
      plVar20 = *(long **)(in_RSI + 0x40);
      lVar15 = plVar20[4];
      if (lVar15 == 0) {
        (**(code **)(*plVar20 + 0x28))(&local_a8,plVar20);
        uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
        if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          }
          if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var21 = local_a0 + 8;
            if (*(long *)(local_a0 + 8) == 0x100000001) {
              *(undefined8 *)(local_a0 + 8) = 0;
              (**(code **)(*(long *)local_a0 + 0x10))();
              (**(code **)(*(long *)local_a0 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var21;
                *(int *)p_Var21 = *(int *)p_Var21 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(local_a0 + 8);
                *(int *)(local_a0 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_a0);
              }
            }
          }
        }
        lVar15 = plVar20[3];
        lVar6 = plVar20[4];
        if (lVar15 + lVar6 == 0x400) {
          if (lVar15 == 0) {
embree_TokenStream_next:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar15 = lVar15 + -1;
          plVar20[3] = lVar15;
          uVar17 = (int)plVar20[2] + 1U & 0x3ff;
          plVar20[2] = (ulong)uVar17;
        }
        else {
          uVar17 = (uint)plVar20[2];
        }
        plVar20[4] = lVar6 + 1;
        puVar5 = (undefined4 *)
                 (plVar20[5] + (ulong)(uVar17 + (int)lVar15 + (int)lVar6 & 0x3ff) * 0x28);
        *puVar5 = uVar13;
        p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = local_a8;
        if (local_a0 == p_Var21) {
LAB_0010c207:
          *(undefined8 *)(puVar5 + 6) = local_98;
          *(undefined8 *)(puVar5 + 8) = local_90;
          if (local_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c749;
        }
        else {
          if (local_a0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var21 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = local_98;
              *(undefined8 *)(puVar5 + 8) = local_90;
              lVar15 = plVar20[4];
              goto LAB_0010c21c;
            }
LAB_0010c1c7:
            p_Var19 = p_Var21 + 8;
            if (*(long *)(p_Var21 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var21 + 8) = 0;
              (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
              (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var19;
                *(int *)p_Var19 = *(int *)p_Var19 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(p_Var21 + 8);
                *(int *)(p_Var21 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var21)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_a0;
            goto LAB_0010c207;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
            p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            p_Var21 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var21 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c1c7;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_a0;
          *(undefined8 *)(puVar5 + 6) = local_98;
          *(undefined8 *)(puVar5 + 8) = local_90;
LAB_0010c749:
          p_Var21 = local_a0 + 8;
          if (*(long *)(local_a0 + 8) == 0x100000001) {
            *(undefined8 *)(local_a0 + 8) = 0;
            (**(code **)(*(long *)local_a0 + 0x10))(local_a0);
            (**(code **)(*(long *)local_a0 + 0x18))(local_a0);
            lVar15 = plVar20[4];
            goto LAB_0010c21c;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var21;
            *(int *)p_Var21 = *(int *)p_Var21 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(local_a0 + 8);
            *(int *)(local_a0 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_a0);
          }
        }
        lVar15 = plVar20[4];
      }
LAB_0010c21c:
      uVar13 = *(undefined4 *)
                (plVar20[5] + (ulong)((int)plVar20[2] + (int)plVar20[3] & 0x3ff) * 0x28);
      plVar20[3] = plVar20[3] + 1;
      plVar20[4] = lVar15 + -1;
      *in_RDI = 1;
      *(char *)(in_RDI + 1) = (char)uVar13;
    }
    *(undefined8 *)(in_RDI + 4) = 0;
    *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
    *(undefined1 *)(in_RDI + 6) = 0;
    *(undefined8 *)(in_RDI + 10) = local_c8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RDI + 0xc) = local_c0;
    if (local_c0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      *(undefined8 *)(in_RDI + 0x10) = uVar8;
      *(undefined8 *)(in_RDI + 0xe) = uVar7;
      goto LAB_0010b33b;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
      *(undefined8 *)(in_RDI + 0xe) = uVar7;
      *(undefined8 *)(in_RDI + 0x10) = uVar8;
      goto LAB_0010b2fc;
    }
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    *(undefined8 *)(in_RDI + 0x10) = uVar8;
    *(undefined8 *)(in_RDI + 0xe) = uVar7;
  }
  else {
    *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
    *in_RDI = local_88;
    in_RDI[1] = local_84;
    if (local_80 == local_70) {
      uVar16 = local_78 + 1;
      if ((uint)uVar16 < 8) {
LAB_0010bc70:
        if ((uVar16 & 4) == 0) {
          if ((int)uVar16 != 0) {
            *(undefined1 *)(in_RDI + 6) = (undefined1)local_70[0];
            if ((uVar16 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)&local_78 + (uVar16 & 0xffffffff) + 6);
            }
          }
        }
        else {
          in_RDI[6] = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar16 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar16 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar16 & 0xffffffff));
        lVar15 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
        uVar17 = (uint)uVar16 + (int)lVar15 & 0xfffffff8;
        if (7 < uVar17) {
          uVar18 = 0;
          do {
            uVar16 = (ulong)uVar18;
            uVar18 = uVar18 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar16) =
                 *(undefined8 *)((long)local_70 + (uVar16 - lVar15));
          } while (uVar18 < uVar17);
        }
      }
    }
    else {
LAB_0010b282:
      *(uint **)(in_RDI + 2) = local_80;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
    }
LAB_0010b292:
    p_Var21 = local_58;
    *(long *)(in_RDI + 4) = local_78;
    local_78 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    *(undefined8 *)(in_RDI + 10) = local_60;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RDI + 0xc) = p_Var21;
    local_60 = 0;
    *(undefined8 *)(in_RDI + 0xe) = local_50;
    *(undefined8 *)(in_RDI + 0x10) = local_48;
    local_80 = local_70;
LAB_0010b2fc:
    if (local_c0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b33b;
  }
  p_Var19 = local_c0;
  p_Var21 = local_c0 + 8;
  if (*(long *)(local_c0 + 8) == 0x100000001) {
    *(undefined8 *)(local_c0 + 8) = 0;
    (**(code **)(*(long *)local_c0 + 0x10))(local_c0);
    (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar14 = *(int *)p_Var21;
      *(int *)p_Var21 = *(int *)p_Var21 + -1;
      UNLOCK();
    }
    else {
      iVar14 = *(int *)(local_c0 + 8);
      *(int *)(local_c0 + 8) = iVar14 + -1;
    }
    if (iVar14 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c0);
    }
  }
LAB_0010b33b:
  p_Var21 = local_58;
  if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var19 = local_58 + 8;
    if (*(long *)(local_58 + 8) == 0x100000001) {
      *(undefined8 *)(local_58 + 8) = 0;
      (**(code **)(*(long *)local_58 + 0x10))(local_58);
      (**(code **)(*(long *)p_Var21 + 0x18))(p_Var21);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar14 = *(int *)p_Var19;
        *(int *)p_Var19 = *(int *)p_Var19 + -1;
        UNLOCK();
      }
      else {
        iVar14 = *(int *)(local_58 + 8);
        *(int *)(local_58 + 8) = iVar14 + -1;
      }
      if (iVar14 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
      }
    }
  }
  if (local_80 != local_70) {
    operator_delete(local_80,CONCAT44(local_70[1],local_70[0]) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
                    /* WARNING: Could not recover jumptable at 0x0010cba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  size_t __n;
  string *__dest;
  allocator *extraout_RDX;
  allocator *extraout_RDX_00;
  allocator *extraout_RDX_01;
  allocator *extraout_RDX_02;
  allocator *extraout_RDX_03;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
    string<std::allocator<char>>
              ((string *)embree::TokenStream::alpha_abi_cxx11_,"abcdefghijklmnopqrstuvwxyz",
               extraout_RDX);
    __cxa_atexit(std::__cxx11::string::~string,embree::TokenStream::alpha_abi_cxx11_,&__dso_handle);
    string<std::allocator<char>>
              ((string *)embree::TokenStream::ALPHA_abi_cxx11_,"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
               extraout_RDX_00);
    __cxa_atexit(std::__cxx11::string::~string,embree::TokenStream::ALPHA_abi_cxx11_,&__dso_handle);
    string<std::allocator<char>>
              ((string *)embree::TokenStream::numbers_abi_cxx11_,"0123456789",extraout_RDX_01);
    __cxa_atexit(std::__cxx11::string::~string,embree::TokenStream::numbers_abi_cxx11_,&__dso_handle
                );
    string<std::allocator<char>>
              ((string *)embree::TokenStream::separators_abi_cxx11_,"\n\t\r ",extraout_RDX_02);
    __cxa_atexit(std::__cxx11::string::~string,embree::TokenStream::separators_abi_cxx11_,
                 &__dso_handle);
    string<std::allocator<char>>
              ((string *)&embree::TokenStream::stringChars_abi_cxx11_,
               "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 _.,+-=:/*\\",
               extraout_RDX_03);
    __cxa_atexit(std::__cxx11::string::~string,&embree::TokenStream::stringChars_abi_cxx11_,
                 &__dso_handle);
    return;
  }
  __n = strlen(param_1);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_0010cc93;
    }
    if (__n == 0) goto LAB_0010cc93;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
LAB_0010cc93:
  *(size_t *)(this + 8) = local_38;
  *(undefined1 *)(*(long *)this + local_38) = 0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::TokenStream::alpha[abi:cxx11] */

void embree::TokenStream::_GLOBAL__sub_I_alpha_abi_cxx11_(void)

{
  allocator *in_RDX;
  allocator *extraout_RDX;
  allocator *extraout_RDX_00;
  allocator *extraout_RDX_01;
  allocator *extraout_RDX_02;
  
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)alpha_abi_cxx11_,"abcdefghijklmnopqrstuvwxyz",in_RDX);
  __cxa_atexit(std::__cxx11::string::~string,alpha_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)ALPHA_abi_cxx11_,"ABCDEFGHIJKLMNOPQRSTUVWXYZ",extraout_RDX);
  __cxa_atexit(std::__cxx11::string::~string,ALPHA_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)numbers_abi_cxx11_,"0123456789",extraout_RDX_00);
  __cxa_atexit(std::__cxx11::string::~string,numbers_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)separators_abi_cxx11_,"\n\t\r ",extraout_RDX_01);
  __cxa_atexit(std::__cxx11::string::~string,separators_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&stringChars_abi_cxx11_,
             "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 _.,+-=:/*\\",
             extraout_RDX_02);
  __cxa_atexit(std::__cxx11::string::~string,&stringChars_abi_cxx11_,&__dso_handle);
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
                    /* WARNING: Could not recover jumptable at 0x0010ce0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* embree::TokenStream::~TokenStream() */

void __thiscall embree::TokenStream::~TokenStream(TokenStream *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  undefined8 *puVar9;
  void *pvVar10;
  
  puVar4 = *(undefined8 **)(this + 0x350);
  puVar9 = *(undefined8 **)(this + 0x348);
  *(undefined ***)this = &PTR__TokenStream_0010dfb0;
  if (puVar4 != puVar9) {
    do {
      while (puVar5 = (undefined8 *)*puVar9, puVar5 != puVar9 + 2) {
        plVar6 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        operator_delete(puVar5,*plVar6 + 1);
        if (puVar4 == puVar9) goto LAB_0010ce76;
      }
      puVar9 = puVar9 + 4;
    } while (puVar4 != puVar9);
LAB_0010ce76:
    puVar9 = *(undefined8 **)(this + 0x348);
  }
  if (puVar9 != (undefined8 *)0x0) {
    operator_delete(puVar9,*(long *)(this + 0x358) - (long)puVar9);
  }
  plVar6 = *(long **)(this + 0x40);
  if (plVar6 != (long *)0x0) {
    if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar6 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    else {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  pvVar7 = *(void **)(this + 0x30);
  pvVar10 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010df70;
  if (pvVar7 != pvVar10) {
    do {
      while( true ) {
        p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 0x50);
        if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var2 = p_Var8 + 8;
          if (*(long *)(p_Var8 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var8 + 8) = 0;
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar3 = *(int *)p_Var2;
              *(int *)p_Var2 = *(int *)p_Var2 + -1;
              UNLOCK();
            }
            else {
              iVar3 = *(int *)(p_Var8 + 8);
              *(int *)(p_Var8 + 8) = iVar3 + -1;
            }
            if (iVar3 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
            }
          }
        }
        p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 0x30);
        if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var2 = p_Var8 + 8;
          if (*(long *)(p_Var8 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var8 + 8) = 0;
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar3 = *(int *)p_Var2;
              *(int *)p_Var2 = *(int *)p_Var2 + -1;
              UNLOCK();
            }
            else {
              iVar3 = *(int *)(p_Var8 + 8);
              *(int *)(p_Var8 + 8) = iVar3 + -1;
            }
            if (iVar3 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
            }
          }
        }
        puVar4 = (undefined8 *)((long)pvVar10 + 8);
        if ((void *)*puVar4 != (void *)((long)pvVar10 + 0x18)) break;
        pvVar10 = (void *)((long)pvVar10 + 0x68);
        if (pvVar7 == pvVar10) goto LAB_0010cf89;
      }
      plVar6 = (long *)((long)pvVar10 + 0x18);
      pvVar10 = (void *)((long)pvVar10 + 0x68);
      operator_delete((void *)*puVar4,*plVar6 + 1);
    } while (pvVar10 != pvVar7);
LAB_0010cf89:
    pvVar10 = *(void **)(this + 0x28);
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10,*(long *)(this + 0x38) - (long)pvVar10);
    return;
  }
  return;
}



/* embree::TokenStream::~TokenStream() */

void __thiscall embree::TokenStream::~TokenStream(TokenStream *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  undefined8 *puVar9;
  void *pvVar10;
  
  puVar4 = *(undefined8 **)(this + 0x350);
  puVar9 = *(undefined8 **)(this + 0x348);
  *(undefined ***)this = &PTR__TokenStream_0010dfb0;
  if (puVar4 != puVar9) {
    do {
      while (puVar5 = (undefined8 *)*puVar9, puVar5 != puVar9 + 2) {
        plVar6 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        operator_delete(puVar5,*plVar6 + 1);
        if (puVar4 == puVar9) goto LAB_0010d0f6;
      }
      puVar9 = puVar9 + 4;
    } while (puVar4 != puVar9);
LAB_0010d0f6:
    puVar9 = *(undefined8 **)(this + 0x348);
  }
  if (puVar9 != (undefined8 *)0x0) {
    operator_delete(puVar9,*(long *)(this + 0x358) - (long)puVar9);
  }
  plVar6 = *(long **)(this + 0x40);
  if (plVar6 != (long *)0x0) {
    if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar6 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    else {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  pvVar7 = *(void **)(this + 0x30);
  pvVar10 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010df70;
  if (pvVar7 != pvVar10) {
    do {
      while( true ) {
        p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 0x50);
        if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var2 = p_Var8 + 8;
          if (*(long *)(p_Var8 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var8 + 8) = 0;
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar3 = *(int *)p_Var2;
              *(int *)p_Var2 = *(int *)p_Var2 + -1;
              UNLOCK();
            }
            else {
              iVar3 = *(int *)(p_Var8 + 8);
              *(int *)(p_Var8 + 8) = iVar3 + -1;
            }
            if (iVar3 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
            }
          }
        }
        p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 0x30);
        if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var2 = p_Var8 + 8;
          if (*(long *)(p_Var8 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var8 + 8) = 0;
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar3 = *(int *)p_Var2;
              *(int *)p_Var2 = *(int *)p_Var2 + -1;
              UNLOCK();
            }
            else {
              iVar3 = *(int *)(p_Var8 + 8);
              *(int *)(p_Var8 + 8) = iVar3 + -1;
            }
            if (iVar3 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
            }
          }
        }
        puVar4 = (undefined8 *)((long)pvVar10 + 8);
        if ((void *)*puVar4 != (void *)((long)pvVar10 + 0x18)) break;
        pvVar10 = (void *)((long)pvVar10 + 0x68);
        if (pvVar7 == pvVar10) goto LAB_0010d209;
      }
      plVar6 = (long *)((long)pvVar10 + 0x18);
      pvVar10 = (void *)((long)pvVar10 + 0x68);
      operator_delete((void *)*puVar4,*plVar6 + 1);
    } while (pvVar10 != pvVar7);
LAB_0010d209:
    pvVar10 = *(void **)(this + 0x28);
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10,*(long *)(this + 0x38) - (long)pvVar10);
  }
  operator_delete(this,0x360);
  return;
}



/* embree::TokenStream::location() */

void embree::TokenStream::location(void)

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
  if (plVar3[4] != 0) goto LAB_0010d4b0;
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
LAB_0010d49a:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d4b0;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010d4b0;
      }
LAB_0010d45a:
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
      goto LAB_0010d49a;
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
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d45a;
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
LAB_0010d4b0:
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



/* embree::TokenStream::skipSeparators() [clone .cold] */

void embree::TokenStream::skipSeparators(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::trySymbols(embree::Token&, embree::ParseLocation const&) [clone .cold] */

void embree::TokenStream::trySymbols(Token *param_1,ParseLocation *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::trySymbol(std::__cxx11::string const&) [clone .cold] */

void embree::TokenStream::trySymbol(string *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::decDigits1(std::__cxx11::string&) [clone .cold] */

void embree::TokenStream::decDigits1(string *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::tryString(embree::Token&, embree::ParseLocation const&) [clone .cold] */

void embree::TokenStream::tryString(Token *param_1,ParseLocation *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::decDigits(std::__cxx11::string&) [clone .cold] */

void embree::TokenStream::decDigits(string *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::tryIdentifier(embree::Token&, embree::ParseLocation const&) [clone .cold] */

void embree::TokenStream::tryIdentifier(Token *param_1,ParseLocation *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::tryFloat(embree::Token&, embree::ParseLocation const&) [clone .cold] */

void embree::TokenStream::tryFloat(Token *param_1,ParseLocation *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::next() [clone .cold] */

void embree::TokenStream::next(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
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
  if (*(long *)(this + 0x20) != 0) goto LAB_0010d930;
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
LAB_0010d91a:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d930;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010d930;
      }
LAB_0010d8d9:
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
      goto LAB_0010d91a;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d8d9;
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
LAB_0010d930:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Stream<int>::get() */

undefined4 __thiscall embree::Stream<int>::get(Stream<int> *this)

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
  
  lVar6 = *(long *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 != 0) goto LAB_0010dcaf;
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
LAB_0010dc9c:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010dd22;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        lVar6 = *(long *)(this + 0x20);
        goto LAB_0010dcaf;
      }
LAB_0010dc5b:
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
      goto LAB_0010dc9c;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010dc5b;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
LAB_0010dd22:
    p_Var8 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar6 = *(long *)(this + 0x20);
      goto LAB_0010dcaf;
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
LAB_0010dcaf:
  uVar4 = *(undefined4 *)
           (*(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x10) + (int)*(long *)(this + 0x18) & 0x3ff) * 0x28);
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  *(long *)(this + 0x20) = lVar6 + -1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::TokenStream::~TokenStream() */

void __thiscall embree::TokenStream::~TokenStream(TokenStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


