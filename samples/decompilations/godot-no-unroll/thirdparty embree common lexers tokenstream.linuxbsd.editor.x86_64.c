
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



/* embree::TokenStream::TokenStream(embree::Ref<embree::Stream<int> > const&, std::__cxx11::string
   const&, std::__cxx11::string const&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > const&) */

byte * __thiscall
embree::TokenStream::TokenStream
          (TokenStream *this,Ref *param_1,string *param_2,string *param_3,vector *param_4)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  byte bVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  Ref *pRVar17;
  uint uVar18;
  byte *pbVar19;
  Ref *pRVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *extraout_RDX;
  Ref *pRVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  long in_FS_OFFSET;
  byte bVar27;
  undefined1 *puStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long *plStack_f0;
  long lStack_e8;
  long alStack_e0 [2];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  Ref *pRStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [2];
  undefined8 uStack_a8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  Ref *pRStack_78;
  vector *pvStack_70;
  string *psStack_68;
  ulong uStack_60;
  TokenStream *pTStack_58;
  
  bVar27 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_001043e0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  pRVar23 = param_1;
  puVar10 = (undefined4 *)operator_new(0x1a000);
  *(undefined4 **)(this + 0x28) = puVar10;
  *(undefined4 **)(this + 0x38) = puVar10 + 0x6800;
  puVar11 = puVar10;
  do {
    *puVar11 = 0;
    puVar12 = puVar11 + 0x1a;
    *(undefined4 **)(puVar11 + 2) = puVar11 + 6;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined1 *)(puVar11 + 6) = 0;
    *(undefined8 *)(puVar11 + 10) = 0;
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined8 *)(puVar11 + 0xe) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x12) = 0;
    *(undefined8 *)(puVar11 + 0x14) = 0;
    *(undefined8 *)(puVar11 + 0x16) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
    puVar11 = puVar12;
  } while (puVar12 != puVar10 + 0x6800);
  *(undefined4 **)(this + 0x30) = puVar12;
  *(undefined ***)this = &PTR__TokenStream_00104420;
  plVar13 = *(long **)param_1;
  *(long **)(this + 0x40) = plVar13;
  if (plVar13 != (long *)0x0) {
    if (*(code **)(*plVar13 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  uVar25 = *(long *)(param_4 + 8) - *(long *)param_4;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  if (uVar25 == 0) {
    plVar13 = (long *)0x0;
LAB_00100217:
    *(long **)(this + 0x348) = plVar13;
    *(long **)(this + 0x350) = plVar13;
    *(ulong *)(this + 0x358) = uVar25 + (long)plVar13;
    plVar3 = *(long **)(param_4 + 8);
    for (plVar26 = *(long **)param_4; plVar3 != plVar26; plVar26 = plVar26 + 4) {
      *plVar13 = (long)(plVar13 + 2);
      std::__cxx11::string::_M_construct<char*>(plVar13,*plVar26,plVar26[1] + *plVar26);
      plVar13 = plVar13 + 4;
    }
    *(long **)(this + 0x350) = plVar13;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x240) = 0;
    puVar24 = (undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8);
    for (uVar25 = (ulong)(((int)(this + 0x148) -
                          (int)(undefined8 *)((ulong)(this + 0x150) & 0xfffffffffffffff8)) + 0x100U
                         >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
      *puVar24 = 0;
      puVar24 = puVar24 + (ulong)bVar27 * -2 + 1;
    }
    if (*(long *)(param_2 + 8) != 0) {
      pbVar14 = *(byte **)param_2;
      pbVar19 = pbVar14 + *(long *)(param_2 + 8);
      do {
        bVar2 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        (this + 0x148)[bVar2] = (TokenStream)0x1;
      } while (pbVar14 != pbVar19);
    }
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    puVar24 = (undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8);
    for (uVar25 = (ulong)(((int)(this + 0x48) -
                          (int)(undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8)) + 0x100U
                         >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
      *puVar24 = 0;
      puVar24 = puVar24 + (ulong)bVar27 * -2 + 1;
    }
    if (*(long *)(param_3 + 8) != 0) {
      pbVar14 = *(byte **)param_3;
      pbVar19 = pbVar14 + *(long *)(param_3 + 8);
      do {
        bVar2 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        (this + 0x48)[bVar2] = (TokenStream)0x1;
      } while (pbVar19 != pbVar14);
    }
    *(undefined8 *)(this + 0x248) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    puVar24 = (undefined8 *)((ulong)(this + 0x250) & 0xfffffffffffffff8);
    for (uVar25 = (ulong)(((int)(this + 0x248) -
                          (int)(undefined8 *)((ulong)(this + 0x250) & 0xfffffffffffffff8)) + 0x100U
                         >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
      *puVar24 = 0;
      puVar24 = puVar24 + (ulong)bVar27 * -2 + 1;
    }
    pbVar14 = stringChars_abi_cxx11_ + DAT_00102be8;
    pbVar19 = stringChars_abi_cxx11_;
    pbVar15 = stringChars_abi_cxx11_;
    if (DAT_00102be8 != 0) {
      do {
        pbVar19 = pbVar15 + 1;
        (this + 0x248)[*pbVar15] = (TokenStream)0x1;
        pbVar15 = pbVar19;
      } while (pbVar19 != pbVar14);
    }
    return pbVar19;
  }
  if (uVar25 < 0x7fffffffffffffe1) {
    plVar13 = (long *)operator_new(uVar25);
    goto LAB_00100217;
  }
  std::__throw_bad_array_new_length();
  pbVar14 = (byte *)0x0;
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_100 = 0;
  uStack_108 = 0;
  puStack_110 = &uStack_100;
  pRStack_78 = param_1;
  pvStack_70 = param_4;
  psStack_68 = param_2;
  uStack_60 = uVar25;
  pTStack_58 = this;
  puVar16 = (uint *)Stream<int>::peek((Stream<int> *)plVar13[8]);
  if ((0xff < *puVar16) ||
     (bVar27 = *(byte *)((long)plVar13 + (ulong)*puVar16 + 0x148), pbVar14 = (byte *)(ulong)bVar27,
     bVar27 == 0)) goto LAB_0010043c;
  do {
    uVar7 = Stream<int>::get((Stream<int> *)plVar13[8]);
    uVar5 = uStack_108;
    uVar25 = uStack_108 + 1;
    if (puStack_110 == &uStack_100) {
      uVar21 = 0xf;
    }
    else {
      uVar21 = CONCAT71(uStack_ff,uStack_100);
    }
    if (uVar21 < uVar25) {
      std::__cxx11::string::_M_mutate((ulong)&puStack_110,uStack_108,(char *)0x0,0);
    }
    puStack_110[uVar5] = uVar7;
    puStack_110[uVar5 + 1] = 0;
    uStack_108 = uVar25;
    puVar16 = (uint *)Stream<int>::peek((Stream<int> *)plVar13[8]);
    uVar18 = *puVar16;
  } while ((uVar18 < 0x100) &&
          ((*(char *)((long)plVar13 + (ulong)uVar18 + 0x148) != '\0' || (uVar18 - 0x30 < 10))));
  plStack_f0 = alStack_e0;
  std::__cxx11::string::_M_construct<char*>(&plStack_f0,puStack_110,puStack_110 + uStack_108);
  uStack_d0 = 4;
  pRStack_c8 = (Ref *)alStack_b8;
  std::__cxx11::string::_M_construct<char*>(&pRStack_c8,plStack_f0,lStack_e8 + (long)plStack_f0);
  uStack_a8 = *extraout_RDX;
  p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)extraout_RDX[1];
  if (p_Stack_a0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uStack_98 = extraout_RDX[2];
    uStack_90 = extraout_RDX[3];
    *(undefined4 *)pRVar23 = uStack_d0;
    *(undefined4 *)(pRVar23 + 4) = uStack_cc;
    pRVar17 = *(Ref **)(pRVar23 + 8);
    pRVar20 = pRVar17;
    if (pRVar17 == pRVar23 + 0x18) goto LAB_0010073e;
LAB_001005a1:
    pRVar20 = pRVar17;
    if (pRStack_c8 == (Ref *)alStack_b8) {
LAB_001007e0:
      if (uStack_c0 != 0) {
        if (uStack_c0 == 1) {
          *pRVar20 = alStack_b8[0]._0_1_;
          pRVar17 = *(Ref **)(pRVar23 + 8);
        }
        else {
          uVar18 = (uint)uStack_c0;
          uVar25 = uStack_c0 & 0xffffffff;
          if (uVar18 < 8) {
            if ((uStack_c0 & 4) == 0) {
              if (uVar18 != 0) {
                *pRVar20 = alStack_b8[0]._0_1_;
                if ((uStack_c0 & 2) == 0) goto LAB_0010081b;
                *(undefined2 *)(pRVar20 + (uVar25 - 2)) =
                     *(undefined2 *)((long)alStack_b8 + (uVar25 - 2));
                pRVar17 = *(Ref **)(pRVar23 + 8);
              }
            }
            else {
              *(undefined4 *)pRVar20 = (undefined4)alStack_b8[0];
              *(undefined4 *)(pRVar20 + (uVar25 - 4)) =
                   *(undefined4 *)((long)alStack_b8 + (uVar25 - 4));
              pRVar17 = *(Ref **)(pRVar23 + 8);
            }
          }
          else {
            *(long *)pRVar20 = alStack_b8[0];
            *(undefined8 *)(pRVar20 + ((uStack_c0 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)alStack_b8 + ((uStack_c0 & 0xffffffff) - 8));
            lVar22 = (long)pRVar20 - ((ulong)(pRVar20 + 8) & 0xfffffffffffffff8);
            uVar18 = (int)lVar22 + uVar18 & 0xfffffff8;
            if (7 < uVar18) {
              uVar9 = 0;
              do {
                uVar25 = (ulong)uVar9;
                uVar9 = uVar9 + 8;
                *(undefined8 *)(((ulong)(pRVar20 + 8) & 0xfffffffffffffff8) + uVar25) =
                     *(undefined8 *)((Ref *)alStack_b8 + (uVar25 - lVar22));
              } while (uVar9 < uVar18);
            }
LAB_0010081b:
            pRVar17 = *(Ref **)(pRVar23 + 8);
          }
        }
      }
      *(ulong *)(pRVar23 + 0x10) = uStack_c0;
      pRVar17[uStack_c0] = (Ref)0x0;
    }
    else {
      *(Ref **)(pRVar23 + 8) = pRStack_c8;
      lVar22 = *(long *)(pRVar23 + 0x18);
      *(ulong *)(pRVar23 + 0x10) = uStack_c0;
      *(long *)(pRVar23 + 0x18) = alStack_b8[0];
      pRStack_c8 = (Ref *)alStack_b8;
      if (pRVar17 != (Ref *)0x0) {
        pRStack_c8 = pRVar17;
        alStack_b8[0] = lVar22;
      }
    }
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)p_Stack_a0 + 8) = *(int *)((long)p_Stack_a0 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)((long)p_Stack_a0 + 8) = *(int *)((long)p_Stack_a0 + 8) + 1;
    }
    uStack_98 = extraout_RDX[2];
    uStack_90 = extraout_RDX[3];
    *(undefined4 *)pRVar23 = uStack_d0;
    *(undefined4 *)(pRVar23 + 4) = uStack_cc;
    pRVar17 = *(Ref **)(pRVar23 + 8);
    pRVar20 = pRVar23 + 0x18;
    if (pRVar17 != pRVar23 + 0x18) goto LAB_001005a1;
LAB_0010073e:
    if (pRStack_c8 == (Ref *)alStack_b8) goto LAB_001007e0;
    *(Ref **)(pRVar23 + 8) = pRStack_c8;
    *(ulong *)(pRVar23 + 0x10) = uStack_c0;
    *(long *)(pRVar23 + 0x18) = alStack_b8[0];
    pRStack_c8 = (Ref *)alStack_b8;
  }
  uStack_c0 = 0;
  *pRStack_c8 = (Ref)0x0;
  p_Var1 = p_Stack_a0;
  uVar6 = uStack_a8;
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pRVar23 + 0x30);
  p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  uStack_a8 = 0;
  *(undefined8 *)(pRVar23 + 0x28) = uVar6;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pRVar23 + 0x30) = p_Var1;
  if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(pRVar23 + 0x38) = uStack_98;
    *(undefined8 *)(pRVar23 + 0x40) = uStack_90;
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
        iVar8 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
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
    p_Var4 = p_Stack_a0;
    *(undefined8 *)(pRVar23 + 0x38) = uStack_98;
    *(undefined8 *)(pRVar23 + 0x40) = uStack_90;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
  }
  if (pRStack_c8 != (Ref *)alStack_b8) {
    operator_delete(pRStack_c8,alStack_b8[0] + 1);
  }
  if (plStack_f0 != alStack_e0) {
    operator_delete(plStack_f0,alStack_e0[0] + 1);
  }
LAB_0010043c:
  if (puStack_110 != &uStack_100) {
    operator_delete(puStack_110,CONCAT71(uStack_ff,uStack_100) + 1);
  }
  if (lStack_88 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::tryIdentifier(embree::Token&, embree::ParseLocation const&) */

TokenStream __thiscall
embree::TokenStream::tryIdentifier(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  Token *pTVar9;
  uint uVar10;
  Token *pTVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  TokenStream TVar15;
  long in_FS_OFFSET;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  long local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  TVar15 = (TokenStream)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = &local_b8;
  puVar8 = (uint *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
  if ((0xff < *puVar8) || (TVar15 = this[(ulong)*puVar8 + 0x148], TVar15 == (TokenStream)0x0))
  goto LAB_0010043c;
  do {
    uVar5 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar3 = local_c0;
    uVar13 = local_c0 + 1;
    if (local_c8 == &local_b8) {
      uVar12 = 0xf;
    }
    else {
      uVar12 = CONCAT71(uStack_b7,local_b8);
    }
    if (uVar12 < uVar13) {
      std::__cxx11::string::_M_mutate((ulong)&local_c8,local_c0,(char *)0x0,0);
    }
    local_c8[uVar3] = uVar5;
    local_c8[uVar3 + 1] = 0;
    local_c0 = uVar13;
    puVar8 = (uint *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    uVar10 = *puVar8;
  } while ((uVar10 < 0x100) &&
          ((this[(ulong)uVar10 + 0x148] != (TokenStream)0x0 || (uVar10 - 0x30 < 10))));
  local_a8 = local_98;
  std::__cxx11::string::_M_construct<char*>(&local_a8,local_c8,local_c8 + local_c0);
  local_88 = 4;
  local_80 = (Token *)local_70;
  std::__cxx11::string::_M_construct<char*>(&local_80,local_a8,local_a0 + (long)local_a8);
  local_60 = *(undefined8 *)param_2;
  local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
  if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar9 = *(Token **)(param_1 + 8);
    pTVar11 = pTVar9;
    if (pTVar9 != param_1 + 0x18) goto LAB_001005a1;
LAB_0010073e:
    if (local_80 == (Token *)local_70) {
LAB_001007e0:
      if (local_78 != 0) {
        if (local_78 == 1) {
          *pTVar11 = local_70[0]._0_1_;
          pTVar9 = *(Token **)(param_1 + 8);
        }
        else {
          uVar10 = (uint)local_78;
          uVar13 = local_78 & 0xffffffff;
          if (uVar10 < 8) {
            if ((local_78 & 4) == 0) {
              if (uVar10 != 0) {
                *pTVar11 = local_70[0]._0_1_;
                if ((local_78 & 2) == 0) goto LAB_0010081b;
                *(undefined2 *)(pTVar11 + (uVar13 - 2)) =
                     *(undefined2 *)((long)local_70 + (uVar13 - 2));
                pTVar9 = *(Token **)(param_1 + 8);
              }
            }
            else {
              *(undefined4 *)pTVar11 = (undefined4)local_70[0];
              *(undefined4 *)(pTVar11 + (uVar13 - 4)) =
                   *(undefined4 *)((long)local_70 + (uVar13 - 4));
              pTVar9 = *(Token **)(param_1 + 8);
            }
          }
          else {
            *(long *)pTVar11 = local_70[0];
            *(undefined8 *)(pTVar11 + ((local_78 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)local_70 + ((local_78 & 0xffffffff) - 8));
            lVar14 = (long)pTVar11 - ((ulong)(pTVar11 + 8) & 0xfffffffffffffff8);
            uVar10 = (int)lVar14 + uVar10 & 0xfffffff8;
            if (7 < uVar10) {
              uVar7 = 0;
              do {
                uVar13 = (ulong)uVar7;
                uVar7 = uVar7 + 8;
                *(undefined8 *)(((ulong)(pTVar11 + 8) & 0xfffffffffffffff8) + uVar13) =
                     *(undefined8 *)((Token *)local_70 + (uVar13 - lVar14));
              } while (uVar7 < uVar10);
            }
LAB_0010081b:
            pTVar9 = *(Token **)(param_1 + 8);
          }
        }
      }
      *(ulong *)(param_1 + 0x10) = local_78;
      pTVar9[local_78] = (Token)0x0;
      lVar14 = local_70[0];
    }
    else {
      *(Token **)(param_1 + 8) = local_80;
      *(ulong *)(param_1 + 0x10) = local_78;
      *(long *)(param_1 + 0x18) = local_70[0];
LAB_00100762:
      local_80 = (Token *)local_70;
      lVar14 = local_70[0];
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
    pTVar9 = *(Token **)(param_1 + 8);
    pTVar11 = param_1 + 0x18;
    if (pTVar9 == param_1 + 0x18) goto LAB_0010073e;
LAB_001005a1:
    pTVar11 = pTVar9;
    if (local_80 == (Token *)local_70) goto LAB_001007e0;
    *(Token **)(param_1 + 8) = local_80;
    lVar14 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x10) = local_78;
    *(long *)(param_1 + 0x18) = local_70[0];
    local_80 = pTVar9;
    if (pTVar9 == (Token *)0x0) goto LAB_00100762;
  }
  local_70[0] = lVar14;
  local_78 = 0;
  *local_80 = (Token)0x0;
  p_Var1 = local_58;
  uVar4 = local_60;
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var1;
  if (p_Var2 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
  }
  else {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar6 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar6 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
    p_Var2 = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar6 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar6 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar6 + -1;
        }
        if (iVar6 == 1) {
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
LAB_0010043c:
  if (local_c8 != &local_b8) {
    operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return TVar15;
}



/* embree::TokenStream::decDigits(std::__cxx11::string&) */

char __thiscall embree::TokenStream::decDigits(TokenStream *this,string *param_1)

{
  ulong uVar1;
  Stream<int> *this_00;
  ulong uVar2;
  undefined1 uVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  long in_FS_OFFSET;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  piVar4 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
  if ((*piVar4 == 0x2b) ||
     (piVar4 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40)), *piVar4 == 0x2d)) {
    uVar3 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar2 = local_60;
    uVar1 = local_60 + 1;
    if (local_68 == &local_58) {
      if (0xf < uVar1) goto LAB_00100b60;
    }
    else if (CONCAT71(uStack_57,local_58) < uVar1) {
LAB_00100b60:
      std::__cxx11::string::_M_mutate((ulong)&local_68,local_60,(char *)0x0,0);
    }
    local_68[uVar2] = uVar3;
    local_68[uVar2 + 1] = 0;
    local_60 = uVar1;
  }
  cVar6 = '\0';
  while (piVar4 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40)), *piVar4 - 0x30U < 10) {
    uVar3 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar2 = local_60;
    uVar1 = local_60 + 1;
    if (local_68 == &local_58) {
      uVar5 = 0xf;
    }
    else {
      uVar5 = CONCAT71(uStack_57,local_58);
    }
    if (uVar5 < uVar1) {
      std::__cxx11::string::_M_mutate((ulong)&local_68,local_60,(char *)0x0,0);
    }
    local_68[uVar2] = uVar3;
    local_68[uVar2 + 1] = 0;
    cVar6 = '\x01';
    local_60 = uVar1;
  }
  if (cVar6 == '\0') {
    this_00 = *(Stream<int> **)(this + 0x40);
    if (*(ulong *)(this_00 + 0x18) < local_60) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + local_60;
    *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - local_60;
    Stream<int>::peek(this_00);
  }
  else {
    if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < local_60) {
      std::__throw_length_error("basic_string::append");
      goto LAB_00100b9c;
    }
    std::__cxx11::string::_M_append((char *)param_1,(ulong)local_68);
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar6;
  }
LAB_00100b9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100f5a) */
/* WARNING: Removing unreachable block (ram,0x00100f21) */
/* WARNING: Removing unreachable block (ram,0x00100f27) */
/* WARNING: Removing unreachable block (ram,0x00100ce2) */
/* WARNING: Removing unreachable block (ram,0x00100d00) */
/* WARNING: Removing unreachable block (ram,0x00100e69) */
/* WARNING: Removing unreachable block (ram,0x00100e7a) */
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



/* embree::TokenStream::decDigits1(std::__cxx11::string&) */

char __thiscall embree::TokenStream::decDigits1(TokenStream *this,string *param_1)

{
  ulong uVar1;
  Stream<int> *this_00;
  ulong uVar2;
  undefined1 uVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  long in_FS_OFFSET;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  cVar6 = '\0';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  while( true ) {
    piVar4 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (9 < *piVar4 - 0x30U) break;
    uVar3 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar2 = local_60;
    uVar1 = local_60 + 1;
    if (local_68 == &local_58) {
      uVar5 = 0xf;
    }
    else {
      uVar5 = CONCAT71(uStack_57,local_58);
    }
    if (uVar5 < uVar1) {
      std::__cxx11::string::_M_mutate((ulong)&local_68,local_60,(char *)0x0,0);
    }
    local_68[uVar2] = uVar3;
    local_68[uVar2 + 1] = 0;
    cVar6 = '\x01';
    local_60 = uVar1;
  }
  if (cVar6 == '\0') {
    this_00 = *(Stream<int> **)(this + 0x40);
    if (*(ulong *)(this_00 + 0x18) < local_60) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + local_60;
    *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - local_60;
    Stream<int>::peek(this_00);
  }
  else {
    if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < local_60) {
      std::__throw_length_error("basic_string::append");
      goto LAB_001010d5;
    }
    std::__cxx11::string::_M_append((char *)param_1,(ulong)local_68);
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar6;
  }
LAB_001010d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::trySymbol(std::__cxx11::string const&) */

undefined8 __thiscall embree::TokenStream::trySymbol(TokenStream *this,string *param_1)

{
  char cVar1;
  Stream<int> *this_00;
  int *piVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 1;
  }
  uVar3 = 0;
  while( true ) {
    cVar1 = *(char *)(*(long *)param_1 + uVar3);
    piVar2 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    this_00 = *(Stream<int> **)(this + 0x40);
    if ((int)cVar1 != *piVar2) break;
    Stream<int>::drop(this_00);
    uVar3 = uVar3 + 1;
    if (*(ulong *)(param_1 + 8) <= uVar3) {
      return 1;
    }
  }
  if (uVar3 <= *(ulong *)(this_00 + 0x18)) {
    *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + uVar3;
    *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - uVar3;
    Stream<int>::peek(this_00);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TokenStream::trySymbols(embree::Token&, embree::ParseLocation const&) */

undefined4 __thiscall
embree::TokenStream::trySymbols(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  Token *pTVar7;
  uint uVar8;
  long lVar9;
  Token *pTVar10;
  long *plVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  long local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar12 = 0;
  lVar9 = *(long *)(this + 0x348);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar9 == *(long *)(this + 0x350)) {
LAB_001011f5:
    uVar4 = 0;
LAB_001013e0:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar4;
  }
  while( true ) {
    uVar4 = trySymbol(this,(string *)(lVar9 + uVar12 * 0x20));
    if ((char)uVar4 != '\0') break;
    lVar9 = *(long *)(this + 0x348);
    uVar12 = uVar12 + 1;
    if ((ulong)(*(long *)(this + 0x350) - lVar9 >> 5) <= uVar12) goto LAB_001011f5;
  }
  plVar11 = (long *)(uVar12 * 0x20 + *(long *)(this + 0x348));
  lVar9 = *plVar11;
  local_a8 = local_98;
  std::__cxx11::string::_M_construct<char*>(&local_a8,lVar9,plVar11[1] + lVar9);
  local_88 = 6;
  local_80 = (Token *)local_70;
  std::__cxx11::string::_M_construct<char*>(&local_80,local_a8,local_a0 + (long)local_a8);
  local_60 = *(undefined8 *)param_2;
  local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
  if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)((long)local_58 + 8) = *(int *)((long)local_58 + 8) + 1;
    }
  }
  pTVar10 = param_1 + 0x18;
  local_50 = *(undefined8 *)(param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)param_1 = local_88;
  *(undefined4 *)(param_1 + 4) = local_84;
  pTVar7 = *(Token **)(param_1 + 8);
  if (pTVar7 == pTVar10) {
    if (local_80 == (Token *)local_70) goto LAB_00101468;
    *(Token **)(param_1 + 8) = local_80;
    *(ulong *)(param_1 + 0x10) = local_78;
    *(long *)(param_1 + 0x18) = local_70[0];
  }
  else {
    pTVar10 = pTVar7;
    if (local_80 == (Token *)local_70) {
LAB_00101468:
      if (local_78 == 0) goto LAB_001014af;
      if (local_78 == 1) {
        *pTVar10 = local_70[0]._0_1_;
        pTVar7 = *(Token **)(param_1 + 8);
        goto LAB_001014af;
      }
      uVar8 = (uint)local_78;
      uVar12 = local_78 & 0xffffffff;
      if (7 < uVar8) {
        *(long *)pTVar10 = local_70[0];
        *(undefined8 *)(pTVar10 + ((local_78 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)local_70 + ((local_78 & 0xffffffff) - 8));
        lVar9 = (long)pTVar10 - ((ulong)(pTVar10 + 8) & 0xfffffffffffffff8);
        uVar8 = (int)lVar9 + uVar8 & 0xfffffff8;
        if (7 < uVar8) {
          uVar6 = 0;
          do {
            uVar12 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(((ulong)(pTVar10 + 8) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined8 *)((Token *)local_70 + (uVar12 - lVar9));
          } while (uVar6 < uVar8);
        }
        goto LAB_001014a3;
      }
      if ((local_78 & 4) == 0) {
        if (uVar8 != 0) {
          *pTVar10 = local_70[0]._0_1_;
          if ((local_78 & 2) == 0) {
LAB_001014a3:
            pTVar7 = *(Token **)(param_1 + 8);
          }
          else {
            *(undefined2 *)(pTVar10 + (uVar12 - 2)) = *(undefined2 *)((long)local_70 + (uVar12 - 2))
            ;
            pTVar7 = *(Token **)(param_1 + 8);
          }
        }
      }
      else {
        *(undefined4 *)pTVar10 = (undefined4)local_70[0];
        *(undefined4 *)(pTVar10 + (uVar12 - 4)) = *(undefined4 *)((long)local_70 + (uVar12 - 4));
        pTVar7 = *(Token **)(param_1 + 8);
      }
LAB_001014af:
      *(ulong *)(param_1 + 0x10) = local_78;
      pTVar7[local_78] = (Token)0x0;
      lVar9 = local_70[0];
LAB_001012e0:
      local_70[0] = lVar9;
      local_78 = 0;
      *local_80 = (Token)0x0;
      p_Var1 = local_58;
      uVar3 = local_60;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
      local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
      local_60 = 0;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var1;
      if (p_Var2 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = local_50;
        *(undefined8 *)(param_1 + 0x40) = local_48;
      }
      else {
        p_Var1 = p_Var2 + 8;
        if (*(long *)(p_Var2 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var2 + 8) = 0;
          (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
          (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var2 + 8);
            *(int *)(p_Var2 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
          }
        }
        p_Var2 = local_58;
        *(undefined8 *)(param_1 + 0x38) = local_50;
        *(undefined8 *)(param_1 + 0x40) = local_48;
        if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_58 + 8;
          if (*(long *)(local_58 + 8) == 0x100000001) {
            *(undefined8 *)(local_58 + 8) = 0;
            (**(code **)(*(long *)local_58 + 0x10))(local_58);
            (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar5 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar5 = *(int *)(local_58 + 8);
              *(int *)(local_58 + 8) = iVar5 + -1;
            }
            if (iVar5 == 1) {
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
      goto LAB_001013e0;
    }
    *(Token **)(param_1 + 8) = local_80;
    lVar9 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x10) = local_78;
    *(long *)(param_1 + 0x18) = local_70[0];
    local_80 = pTVar7;
    if (pTVar7 != (Token *)0x0) goto LAB_001012e0;
  }
  local_80 = (Token *)local_70;
  lVar9 = local_70[0];
  goto LAB_001012e0;
}



/* WARNING: Removing unreachable block (ram,0x00101ea7) */
/* WARNING: Removing unreachable block (ram,0x00101e7e) */
/* WARNING: Removing unreachable block (ram,0x00101e84) */
/* WARNING: Removing unreachable block (ram,0x001018ac) */
/* WARNING: Removing unreachable block (ram,0x001018ca) */
/* WARNING: Removing unreachable block (ram,0x00101da6) */
/* WARNING: Removing unreachable block (ram,0x00101db7) */
/* embree::TokenStream::tryFloat(embree::Token&, embree::ParseLocation const&) */

undefined4 __thiscall
embree::TokenStream::tryFloat(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  ulong uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  Stream<int> *this_00;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  float fVar12;
  double dVar13;
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
  cVar5 = trySymbol(this,(string *)&local_88);
  if (local_88 != &local_78) {
    operator_delete(local_88,local_78 + 1);
  }
  if (cVar5 == '\0') {
    local_80 = (ulong *)0x4;
    local_78 = CONCAT35(local_78._5_3_,0x666e692b);
    local_88 = &local_78;
    cVar5 = trySymbol(this,(string *)&local_88);
    if (local_88 != &local_78) {
      operator_delete(local_88,local_78 + 1);
    }
    if (cVar5 != '\0') {
      local_70[0] = local_70[0] & 0xffffffffffffff00;
      local_88 = (long *)0x7f80000000000003;
      *(undefined4 *)param_1 = 3;
      *(undefined4 *)(param_1 + 4) = 0x7f800000;
      goto LAB_00101932;
    }
    local_80 = (ulong *)0x4;
    local_78 = CONCAT35(local_78._5_3_,0x666e692d);
    local_88 = &local_78;
    uVar6 = trySymbol(this,(string *)&local_88);
    if (local_88 != &local_78) {
      operator_delete(local_88,local_78 + 1);
    }
    if ((char)uVar6 != '\0') {
      local_70[0] = local_70[0] & 0xffffffffffffff00;
      local_88 = (long *)0xff80000000000003;
      *(undefined4 *)param_1 = 3;
      *(undefined4 *)(param_1 + 4) = 0xff800000;
      goto LAB_00101932;
    }
    cVar5 = decDigits(this,(string *)&local_a8);
    if (cVar5 == '\0') {
      piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
      if (*piVar8 == 0x2e) {
        cVar5 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
        uVar9 = local_a0;
        uVar1 = local_a0 + 1;
        if (local_a8 == &local_98) {
          uVar10 = 0xf;
        }
        else {
          uVar10 = CONCAT71(uStack_97,local_98);
        }
        if (uVar10 < uVar1) {
          std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
        }
        local_a8[uVar9] = cVar5;
        local_a8[uVar9 + 1] = '\0';
        local_a0 = uVar1;
        cVar5 = decDigits(this,(string *)&local_a8);
        if (cVar5 != '\0') {
          piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
          if (*piVar8 != 0x65) goto LAB_00101cb5;
          goto LAB_001017a9;
        }
      }
LAB_00101b0e:
      this_00 = *(Stream<int> **)(this + 0x40);
      if (*(ulong *)(this_00 + 0x18) < local_a0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + local_a0;
      *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - local_a0;
      Stream<int>::peek(this_00);
      goto LAB_00101a40;
    }
    piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (*piVar8 != 0x2e) {
      piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
      if ((*piVar8 == 0x65) ||
         (piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40)), *piVar8 == 0x45))
      goto LAB_001017a9;
      goto LAB_00101b0e;
    }
    cVar5 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar9 = local_a0;
    uVar1 = local_a0 + 1;
    if (local_a8 == &local_98) {
      uVar10 = 0xf;
    }
    else {
      uVar10 = CONCAT71(uStack_97,local_98);
    }
    if (uVar10 < uVar1) {
      std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
    }
    local_a8[uVar9] = cVar5;
    local_a8[uVar9 + 1] = '\0';
    local_a0 = uVar1;
    decDigits(this,(string *)&local_a8);
    piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (*piVar8 == 0x65) {
LAB_001017a9:
      cVar5 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
      uVar10 = local_a0;
      uVar9 = CONCAT71(uStack_97,local_98);
      uVar1 = local_a0 + 1;
      if (local_a8 == &local_98) {
        uVar9 = 0xf;
      }
      if (uVar9 < uVar1) {
        std::__cxx11::string::_M_mutate((ulong)&local_a8,local_a0,(char *)0x0,0);
      }
      local_a8[uVar10] = cVar5;
      local_a8[uVar10 + 1] = '\0';
      local_a0 = uVar1;
      cVar5 = decDigits(this,(string *)&local_a8);
      if (cVar5 == '\0') goto LAB_00101b0e;
    }
    else {
LAB_00101cb5:
      piVar8 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
      if (*piVar8 == 0x45) goto LAB_001017a9;
    }
    dVar13 = strtod(local_a8,(char **)0x0);
    local_60 = *(undefined8 *)param_2;
    fVar12 = (float)dVar13;
    local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
    local_70[0] = local_70[0] & 0xffffffffffffff00;
    local_88 = (long *)CONCAT44(fVar12,3);
    if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      local_50 = *(undefined8 *)(param_2 + 0x10);
      puVar11 = *(undefined1 **)(param_1 + 8);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 *)param_1 = 3;
      *(float *)(param_1 + 4) = fVar12;
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
      *(float *)(param_1 + 4) = fVar12;
      puVar11 = *(undefined1 **)(param_1 + 8);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar11 = 0;
  }
  else {
    local_70[0] = local_70[0] & 0xffffffffffffff00;
    local_88 = (long *)0x7fc0000000000003;
    *(undefined4 *)param_1 = 3;
    *(undefined4 *)(param_1 + 4) = 0x7fc00000;
LAB_00101932:
    local_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_60 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
  }
  p_Var2 = local_58;
  uVar4 = local_60;
  local_80 = local_70;
  local_78 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_70[0]._0_1_ = 0;
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var2;
  if (p_Var3 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
  }
  else {
    p_Var2 = p_Var3 + 8;
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar7 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar7 = *(int *)(p_Var3 + 8);
        *(int *)(p_Var3 + 8) = iVar7 + -1;
      }
      if (iVar7 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      }
    }
    p_Var3 = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
  }
  if (local_80 != local_70) {
    operator_delete(local_80,local_70[0] + 1);
  }
  uVar6 = 1;
LAB_00101a40:
  if (local_a8 != &local_98) {
    operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::skipSeparators() */

void __thiscall embree::TokenStream::skipSeparators(TokenStream *this)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  
  piVar2 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
  iVar1 = *piVar2;
  while( true ) {
    if (iVar1 == -1) {
      return;
    }
    puVar3 = (uint *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (0xff < *puVar3) break;
    if (this[(ulong)*puVar3 + 0x48] == (TokenStream)0x0) {
      return;
    }
    Stream<int>::drop(*(Stream<int> **)(this + 0x40));
    piVar2 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    iVar1 = *piVar2;
  }
  return;
}



/* embree::TokenStream::tryString(embree::Token&, embree::ParseLocation const&) */

undefined8 __thiscall
embree::TokenStream::tryString(TokenStream *this,Token *param_1,ParseLocation *param_2)

{
  ulong uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  Token *pTVar8;
  Token *pTVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  Token *local_80;
  undefined8 local_78;
  long local_70 [2];
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = &local_b8;
  piVar7 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
  if (*piVar7 != 0x22) goto LAB_00101f79;
  Stream<int>::drop(*(Stream<int> **)(this + 0x40));
  while( true ) {
    piVar7 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (*piVar7 == 0x22) break;
    uVar4 = Stream<int>::get(*(Stream<int> **)(this + 0x40));
    uVar10 = local_c0;
    if ((0xff < uVar4) || (this[(ulong)uVar4 + 0x248] == (TokenStream)0x0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = local_c0 + 1;
    if (local_c8 == &local_b8) {
      uVar12 = 0xf;
    }
    else {
      uVar12 = CONCAT71(uStack_b7,local_b8);
    }
    if (uVar12 < uVar1) {
      std::__cxx11::string::_M_mutate((ulong)&local_c8,local_c0,(char *)0x0,0);
    }
    local_c8[uVar10] = (char)uVar4;
    local_c8[uVar10 + 1] = 0;
    local_c0 = uVar1;
  }
  Stream<int>::drop(*(Stream<int> **)(this + 0x40));
  local_a8 = local_98;
  std::__cxx11::string::_M_construct<char*>(&local_a8,local_c8,local_c8 + local_c0);
  local_88 = 5;
  local_80 = (Token *)local_70;
  std::__cxx11::string::_M_construct<char*>(&local_80,local_a8,local_a0 + (long)local_a8);
  local_60 = *(undefined8 *)param_2;
  local_58 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
  if (local_58 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)param_1 = local_88;
    *(undefined4 *)(param_1 + 4) = local_84;
    pTVar8 = *(Token **)(param_1 + 8);
    pTVar9 = pTVar8;
    if (pTVar8 != param_1 + 0x18) goto LAB_00102129;
LAB_001022cf:
    if (local_80 == (Token *)local_70) {
LAB_00102330:
      if (local_78 != 0) {
        if (local_78 == 1) {
          *pTVar9 = local_70[0]._0_1_;
          pTVar8 = *(Token **)(param_1 + 8);
        }
        else {
          uVar4 = (uint)local_78;
          uVar10 = local_78 & 0xffffffff;
          if (uVar4 < 8) {
            if ((local_78 & 4) == 0) {
              if (uVar4 != 0) {
                *pTVar9 = local_70[0]._0_1_;
                if ((local_78 & 2) == 0) goto LAB_0010236b;
                *(undefined2 *)(pTVar9 + (uVar10 - 2)) =
                     *(undefined2 *)((long)local_70 + (uVar10 - 2));
                pTVar8 = *(Token **)(param_1 + 8);
              }
            }
            else {
              *(undefined4 *)pTVar9 = (undefined4)local_70[0];
              *(undefined4 *)(pTVar9 + (uVar10 - 4)) =
                   *(undefined4 *)((long)local_70 + (uVar10 - 4));
              pTVar8 = *(Token **)(param_1 + 8);
            }
          }
          else {
            *(long *)pTVar9 = local_70[0];
            *(undefined8 *)(pTVar9 + ((local_78 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)local_70 + ((local_78 & 0xffffffff) - 8));
            lVar11 = (long)pTVar9 - ((ulong)(pTVar9 + 8) & 0xfffffffffffffff8);
            uVar4 = (int)lVar11 + uVar4 & 0xfffffff8;
            if (7 < uVar4) {
              uVar6 = 0;
              do {
                uVar10 = (ulong)uVar6;
                uVar6 = uVar6 + 8;
                *(undefined8 *)(((ulong)(pTVar9 + 8) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)((Token *)local_70 + (uVar10 - lVar11));
              } while (uVar6 < uVar4);
            }
LAB_0010236b:
            pTVar8 = *(Token **)(param_1 + 8);
          }
        }
      }
      *(ulong *)(param_1 + 0x10) = local_78;
      pTVar8[local_78] = (Token)0x0;
      lVar11 = local_70[0];
    }
    else {
      *(Token **)(param_1 + 8) = local_80;
      *(ulong *)(param_1 + 0x10) = local_78;
      *(long *)(param_1 + 0x18) = local_70[0];
LAB_001022ef:
      local_80 = (Token *)local_70;
      lVar11 = local_70[0];
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
    pTVar8 = *(Token **)(param_1 + 8);
    pTVar9 = param_1 + 0x18;
    if (pTVar8 == param_1 + 0x18) goto LAB_001022cf;
LAB_00102129:
    pTVar9 = pTVar8;
    if (local_80 == (Token *)local_70) goto LAB_00102330;
    *(Token **)(param_1 + 8) = local_80;
    lVar11 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x10) = local_78;
    *(long *)(param_1 + 0x18) = local_70[0];
    local_80 = pTVar8;
    if (pTVar8 == (Token *)0x0) goto LAB_001022ef;
  }
  local_70[0] = lVar11;
  local_78 = 0;
  *local_80 = (Token)0x0;
  p_Var2 = local_58;
  uVar13 = local_60;
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30);
  local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x30) = p_Var2;
  if (p_Var3 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
  }
  else {
    p_Var2 = p_Var3 + 8;
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var3 + 8);
        *(int *)(p_Var3 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      }
    }
    p_Var3 = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_50;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
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
  uVar13 = 1;
LAB_00101f79:
  if (local_c8 != &local_b8) {
    operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* embree::TokenStream::next() */

void embree::TokenStream::next(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  TokenStream *in_RSI;
  undefined4 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var14;
  long in_FS_OFFSET;
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
  skipSeparators(in_RSI);
  puVar9 = (undefined8 *)Stream<int>::loc(*(Stream<int> **)(in_RSI + 0x40));
  local_a8 = *puVar9;
  p_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar9[1];
  if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var14 + 8) = *(int *)(p_Var14 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var14 + 8) = *(int *)(p_Var14 + 8) + 1;
    }
  }
  uVar2 = puVar9[2];
  uVar3 = puVar9[3];
  local_a0 = p_Var14;
  local_98 = uVar2;
  local_90 = uVar3;
  cVar5 = trySymbols(in_RSI,(Token *)&local_88,(ParseLocation *)&local_a8);
  if (cVar5 == '\0') {
    cVar5 = tryFloat(in_RSI,(Token *)&local_88,(ParseLocation *)&local_a8);
    if (cVar5 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_001025dd;
      uVar10 = local_78 + 1;
      if ((uint)uVar10 < 8) goto LAB_001029a0;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar10 & 0xffffffff));
      lVar13 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar8 = (uint)uVar10 + (int)lVar13 & 0xfffffff8;
      if (7 < uVar8) {
        uVar12 = 0;
        do {
          uVar10 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar10) =
               *(undefined8 *)((long)local_70 + (uVar10 - lVar13));
        } while (uVar12 < uVar8);
      }
      goto LAB_001025ea;
    }
    cVar5 = tryInt(in_RSI,(Token *)&local_88,(ParseLocation *)&local_a8);
    if (cVar5 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_001025dd;
      uVar10 = local_78 + 1;
      if ((uint)uVar10 < 8) goto LAB_001029a0;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar10 & 0xffffffff));
      lVar13 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar8 = (uint)uVar10 + (int)lVar13 & 0xfffffff8;
      if (7 < uVar8) {
        uVar12 = 0;
        do {
          uVar10 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar10) =
               *(undefined8 *)((long)local_70 + (uVar10 - lVar13));
        } while (uVar12 < uVar8);
      }
      goto LAB_001025ea;
    }
    cVar5 = tryString(in_RSI,(Token *)&local_88,(ParseLocation *)&local_a8);
    if (cVar5 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_001025dd;
      uVar10 = local_78 + 1;
      if ((uint)uVar10 < 8) goto LAB_001029a0;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
      *(undefined8 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar10 & 0xffffffff));
      lVar13 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
      uVar8 = (uint)uVar10 + (int)lVar13 & 0xfffffff8;
      if (7 < uVar8) {
        uVar12 = 0;
        do {
          uVar10 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar10) =
               *(undefined8 *)((long)local_70 + (uVar10 - lVar13));
        } while (uVar12 < uVar8);
      }
      goto LAB_001025ea;
    }
    cVar5 = tryIdentifier(in_RSI,(Token *)&local_88,(ParseLocation *)&local_a8);
    if (cVar5 != '\0') {
      *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
      *in_RDI = local_88;
      in_RDI[1] = local_84;
      if (local_80 != local_70) goto LAB_001025dd;
      uVar10 = local_78 + 1;
      uVar8 = (uint)uVar10;
      if (uVar8 < 8) {
        if ((uVar10 & 4) == 0) {
          if (uVar8 != 0) {
            *(undefined1 *)(in_RDI + 6) = (undefined1)local_70[0];
            if ((uVar10 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)local_80 + ((uVar10 & 0xffffffff) - 2));
            }
          }
        }
        else {
          in_RDI[6] = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar10 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar10 & 0xffffffff));
        lVar13 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
        uVar8 = uVar8 + (int)lVar13 & 0xfffffff8;
        if (7 < uVar8) {
          uVar12 = 0;
          do {
            uVar10 = (ulong)uVar12;
            uVar12 = uVar12 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar10) =
                 *(undefined8 *)((long)local_70 + (uVar10 - lVar13));
          } while (uVar12 < uVar8);
        }
      }
      goto LAB_001025ea;
    }
    piVar11 = (int *)Stream<int>::peek(*(Stream<int> **)(in_RSI + 0x40));
    uVar4 = local_a8;
    if (*piVar11 == -1) {
      *in_RDI = 0;
    }
    else {
      uVar6 = Stream<int>::get(*(Stream<int> **)(in_RSI + 0x40));
      *in_RDI = 1;
      *(undefined1 *)(in_RDI + 1) = uVar6;
    }
    *(undefined8 *)(in_RDI + 4) = 0;
    *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
    *(undefined1 *)(in_RDI + 6) = 0;
    *(undefined8 *)(in_RDI + 10) = uVar4;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RDI + 0xc) = p_Var14;
    if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      *(undefined8 *)(in_RDI + 0xe) = uVar2;
      *(undefined8 *)(in_RDI + 0x10) = uVar3;
      goto LAB_00102678;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var14 + 8) = *(int *)(p_Var14 + 8) + 1;
      UNLOCK();
      *(undefined8 *)(in_RDI + 0xe) = local_98;
      *(undefined8 *)(in_RDI + 0x10) = local_90;
      p_Var14 = local_a0;
      goto LAB_00102637;
    }
    *(int *)(p_Var14 + 8) = *(int *)(p_Var14 + 8) + 1;
    *(undefined8 *)(in_RDI + 0xe) = uVar2;
    *(undefined8 *)(in_RDI + 0x10) = uVar3;
  }
  else {
    *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
    *in_RDI = local_88;
    in_RDI[1] = local_84;
    if (local_80 == local_70) {
      uVar10 = local_78 + 1;
      if ((uint)uVar10 < 8) {
LAB_001029a0:
        if ((uVar10 & 4) == 0) {
          if ((int)uVar10 != 0) {
            *(undefined1 *)(in_RDI + 6) = (undefined1)local_70[0];
            if ((uVar10 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)&local_78 + (uVar10 & 0xffffffff) + 6);
            }
          }
        }
        else {
          in_RDI[6] = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar10 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar10 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar10 & 0xffffffff));
        lVar13 = (long)(in_RDI + 6) - ((ulong)(in_RDI + 8) & 0xfffffffffffffff8);
        uVar8 = (uint)uVar10 + (int)lVar13 & 0xfffffff8;
        if (7 < uVar8) {
          uVar12 = 0;
          do {
            uVar10 = (ulong)uVar12;
            uVar12 = uVar12 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 8) & 0xfffffffffffffff8) + uVar10) =
                 *(undefined8 *)((long)local_70 + (uVar10 - lVar13));
          } while (uVar12 < uVar8);
        }
      }
    }
    else {
LAB_001025dd:
      *(uint **)(in_RDI + 2) = local_80;
      *(ulong *)(in_RDI + 6) = CONCAT44(local_70[1],local_70[0]);
    }
LAB_001025ea:
    p_Var1 = local_58;
    *(long *)(in_RDI + 4) = local_78;
    local_78 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    *(undefined8 *)(in_RDI + 10) = local_60;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RDI + 0xc) = p_Var1;
    local_60 = 0;
    *(undefined8 *)(in_RDI + 0xe) = local_50;
    *(undefined8 *)(in_RDI + 0x10) = local_48;
    local_80 = local_70;
LAB_00102637:
    if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102678;
  }
  p_Var1 = p_Var14 + 8;
  if (*(long *)(p_Var14 + 8) == 0x100000001) {
    *(undefined8 *)(p_Var14 + 8) = 0;
    (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
    (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar7 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(p_Var14 + 8);
      *(int *)(p_Var14 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14);
    }
  }
LAB_00102678:
  p_Var14 = local_58;
  if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_58 + 8;
    if (*(long *)(local_58 + 8) == 0x100000001) {
      *(undefined8 *)(local_58 + 8) = 0;
      (**(code **)(*(long *)local_58 + 0x10))(local_58);
      (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar7 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar7 = *(int *)(local_58 + 8);
        *(int *)(local_58 + 8) = iVar7 + -1;
      }
      if (iVar7 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
      }
    }
  }
  if (local_80 != local_70) {
    operator_delete(local_80,CONCAT44(local_70[1],local_70[0]) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
                    /* WARNING: Could not recover jumptable at 0x00102ca9. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00102cfb. Too many branches */
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
  long *plVar5;
  void *pvVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  undefined8 *puVar8;
  void *pvVar9;
  
  puVar4 = *(undefined8 **)(this + 0x350);
  puVar8 = *(undefined8 **)(this + 0x348);
  *(undefined ***)this = &PTR__TokenStream_00104420;
  if (puVar4 != puVar8) {
    do {
      if ((undefined8 *)*puVar8 != puVar8 + 2) {
        operator_delete((undefined8 *)*puVar8,puVar8[2] + 1);
      }
      puVar8 = puVar8 + 4;
    } while (puVar4 != puVar8);
    puVar8 = *(undefined8 **)(this + 0x348);
  }
  if (puVar8 != (undefined8 *)0x0) {
    operator_delete(puVar8,*(long *)(this + 0x358) - (long)puVar8);
  }
  plVar5 = *(long **)(this + 0x40);
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar5 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  pvVar6 = *(void **)(this + 0x30);
  pvVar9 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_001043e0;
  if (pvVar6 != pvVar9) {
    do {
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar9 + 0x50);
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar9 + 0x30);
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
      if (*(void **)((long)pvVar9 + 8) != (void *)((long)pvVar9 + 0x18)) {
        operator_delete(*(void **)((long)pvVar9 + 8),*(long *)((long)pvVar9 + 0x18) + 1);
      }
      pvVar9 = (void *)((long)pvVar9 + 0x68);
    } while (pvVar6 != pvVar9);
    pvVar9 = *(void **)(this + 0x28);
  }
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9,*(long *)(this + 0x38) - (long)pvVar9);
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
  long *plVar5;
  void *pvVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  undefined8 *puVar8;
  void *pvVar9;
  
  puVar4 = *(undefined8 **)(this + 0x350);
  puVar8 = *(undefined8 **)(this + 0x348);
  *(undefined ***)this = &PTR__TokenStream_00104420;
  if (puVar4 != puVar8) {
    do {
      if ((undefined8 *)*puVar8 != puVar8 + 2) {
        operator_delete((undefined8 *)*puVar8,puVar8[2] + 1);
      }
      puVar8 = puVar8 + 4;
    } while (puVar4 != puVar8);
    puVar8 = *(undefined8 **)(this + 0x348);
  }
  if (puVar8 != (undefined8 *)0x0) {
    operator_delete(puVar8,*(long *)(this + 0x358) - (long)puVar8);
  }
  plVar5 = *(long **)(this + 0x40);
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar5 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  pvVar6 = *(void **)(this + 0x30);
  pvVar9 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_001043e0;
  if (pvVar6 != pvVar9) {
    do {
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar9 + 0x50);
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar9 + 0x30);
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
      if (*(void **)((long)pvVar9 + 8) != (void *)((long)pvVar9 + 0x18)) {
        operator_delete(*(void **)((long)pvVar9 + 8),*(long *)((long)pvVar9 + 0x18) + 1);
      }
      pvVar9 = (void *)((long)pvVar9 + 0x68);
    } while (pvVar6 != pvVar9);
    pvVar9 = *(void **)(this + 0x28);
  }
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9,*(long *)(this + 0x38) - (long)pvVar9);
  }
  operator_delete(this,0x360);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  size_t __n;
  string *__dest;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_00103217;
    }
    if (__n == 0) goto LAB_00103217;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(string **)this;
LAB_00103217:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::Stream<int>::loc() */

long __thiscall embree::Stream<int>::loc(Stream<int> *this)

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
  if (*(long *)(this + 0x20) != 0) goto LAB_00103480;
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
LAB_00103432:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103480;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_00103480;
      }
LAB_001033f1:
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
      goto LAB_00103432;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001033f1;
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
LAB_00103480:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) + 8 +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::location() */

void embree::TokenStream::location(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  puVar3 = (undefined8 *)Stream<int>::loc(*(Stream<int> **)(in_RSI + 0x40));
  *in_RDI = *puVar3;
  lVar1 = puVar3[1];
  in_RDI[1] = lVar1;
  if (lVar1 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
  }
  uVar2 = puVar3[3];
  in_RDI[2] = puVar3[2];
  in_RDI[3] = uVar2;
  return;
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
  if (*(long *)(this + 0x20) != 0) goto LAB_00103870;
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
LAB_00103822:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103870;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_00103870;
      }
LAB_001037e1:
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
      goto LAB_00103822;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001037e1;
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
LAB_00103870:
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
  if (lVar6 != 0) goto LAB_00103bff;
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
LAB_00103bb2:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103bc1;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        lVar6 = *(long *)(this + 0x20);
        goto LAB_00103bff;
      }
LAB_00103b71:
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
      goto LAB_00103bb2;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103b71;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
LAB_00103bc1:
    p_Var8 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar6 = *(long *)(this + 0x20);
      goto LAB_00103bff;
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
LAB_00103bff:
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



/* embree::TokenStream::decDigits(std::__cxx11::string&) [clone .cold] */

void embree::TokenStream::decDigits(string *param_1)

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



/* embree::TokenStream::trySymbol(std::__cxx11::string const&) [clone .cold] */

void embree::TokenStream::trySymbol(string *param_1)

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



/* embree::TokenStream::tryString(embree::Token&, embree::ParseLocation const&) [clone .cold] */

void embree::TokenStream::tryString(Token *param_1,ParseLocation *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
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
  if (lVar6 != 0) goto LAB_0010401f;
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
LAB_00103fd2:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103fe1;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        lVar6 = *(long *)(this + 0x20);
        goto LAB_0010401f;
      }
LAB_00103f91:
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
      goto LAB_00103fd2;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103f91;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
LAB_00103fe1:
    p_Var8 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar6 = *(long *)(this + 0x20);
      goto LAB_0010401f;
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
LAB_0010401f:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  *(long *)(this + 0x20) = lVar6 + -1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TokenStream::alpha[abi:cxx11] */

void embree::TokenStream::_GLOBAL__sub_I_alpha_abi_cxx11_(void)

{
  long in_FS_OFFSET;
  allocator local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)alpha_abi_cxx11_,"abcdefghijklmnopqrstuvwxyz",&local_31);
  __cxa_atexit(std::__cxx11::string::~string,alpha_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)ALPHA_abi_cxx11_,"ABCDEFGHIJKLMNOPQRSTUVWXYZ",&local_31);
  __cxa_atexit(std::__cxx11::string::~string,ALPHA_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)numbers_abi_cxx11_,"0123456789",&local_31);
  __cxa_atexit(std::__cxx11::string::~string,numbers_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)separators_abi_cxx11_,"\n\t\r ",&local_31);
  __cxa_atexit(std::__cxx11::string::~string,separators_abi_cxx11_,&__dso_handle);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&stringChars_abi_cxx11_,
             "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 _.,+-=:/*\\",&local_31)
  ;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(std::__cxx11::string::~string,&stringChars_abi_cxx11_,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::TokenStream::~TokenStream() */

void __thiscall embree::TokenStream::~TokenStream(TokenStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


