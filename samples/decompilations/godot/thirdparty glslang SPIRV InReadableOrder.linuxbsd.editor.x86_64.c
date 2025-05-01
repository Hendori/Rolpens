
/* std::_Hashtable<spv::Block*, spv::Block*, std::allocator<spv::Block*>, std::__detail::_Identity,
   std::equal_to<spv::Block*>, std::hash<spv::Block*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, true, true> >::_M_erase(std::integral_constant<bool,
   true>, spv::Block* const&) [clone .isra.0] */

void std::
     _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
     ::_M_erase(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[3] == 0) {
    plVar7 = (long *)param_1[2];
    plVar8 = param_1 + 2;
    while (plVar3 = plVar7, plVar3 != (long *)0x0) {
      if (param_2 == plVar3[1]) {
        plVar7 = (long *)*plVar8;
        uVar5 = (ulong)plVar7[1] % (ulong)param_1[1];
LAB_001000bd:
        lVar2 = *param_1;
        lVar4 = *plVar7;
        puVar1 = (undefined8 *)(lVar2 + uVar5 * 8);
        plVar3 = (long *)*puVar1;
        if (plVar8 == plVar3) {
          if (lVar4 != 0) {
            uVar6 = *(ulong *)(lVar4 + 8) % (ulong)param_1[1];
            if (uVar5 == uVar6) goto LAB_001000ea;
            *(long **)(lVar2 + uVar6 * 8) = plVar8;
          }
          if (plVar3 == param_1 + 2) {
            param_1[2] = lVar4;
          }
          *puVar1 = 0;
          lVar4 = *plVar7;
        }
        else if ((lVar4 != 0) && (uVar6 = *(ulong *)(lVar4 + 8) % (ulong)param_1[1], uVar5 != uVar6)
                ) {
          *(long **)(lVar2 + uVar6 * 8) = plVar8;
          lVar4 = *plVar7;
        }
LAB_001000ea:
        *plVar8 = lVar4;
        operator_delete(plVar7,0x10);
        param_1[3] = param_1[3] + -1;
        return;
      }
      plVar8 = plVar3;
      plVar7 = (long *)*plVar3;
    }
  }
  else {
    uVar5 = param_2 % (ulong)param_1[1];
    plVar8 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar8 != (long *)0x0) {
      uVar6 = ((long *)*plVar8)[1];
      plVar7 = (long *)*plVar8;
      do {
        if (param_2 == uVar6) {
          plVar7 = (long *)*plVar8;
          goto LAB_001000bd;
        }
        plVar3 = (long *)*plVar7;
      } while ((plVar3 != (long *)0x0) &&
              (uVar6 = plVar3[1], plVar8 = plVar7, plVar7 = plVar3,
              uVar5 == uVar6 % (ulong)param_1[1]));
    }
  }
  return;
}



/* std::_Hashtable<spv::Block*, spv::Block*, std::allocator<spv::Block*>, std::__detail::_Identity,
   std::equal_to<spv::Block*>, std::hash<spv::Block*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, true, true> >::find(spv::Block* const&) const [clone
   .isra.0] */

undefined8 * __thiscall
std::
_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::find(_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
       *this,Block **param_1)

{
  Block **ppBVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x18) == 0) {
    for (puVar4 = *(undefined8 **)(this + 0x10);
        (puVar4 != (undefined8 *)0x0 && ((Block **)puVar4[1] != param_1));
        puVar4 = (undefined8 *)*puVar4) {
    }
  }
  else {
    uVar5 = (ulong)param_1 % *(ulong *)(this + 8);
    puVar4 = *(undefined8 **)(*(long *)this + uVar5 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      ppBVar1 = (Block **)((undefined8 *)*puVar4)[1];
      puVar3 = (undefined8 *)*puVar4;
      do {
        if (param_1 == ppBVar1) {
          return (undefined8 *)*puVar4;
        }
        puVar2 = (undefined8 *)*puVar3;
      } while ((puVar2 != (undefined8 *)0x0) &&
              (ppBVar1 = (Block **)puVar2[1], puVar4 = puVar3, puVar3 = puVar2,
              uVar5 == (ulong)ppBVar1 % *(ulong *)(this + 8)));
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}



/* (anonymous namespace)::ReadableOrderTraverser::visit(spv::Block*, spv::ReachReason, spv::Block*)
    */

void __thiscall
(anonymous_namespace)::ReadableOrderTraverser::visit
          (ReadableOrderTraverser *this,Block *param_1,uint param_3,Block *param_4)

{
  _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  *this_00;
  undefined8 uVar1;
  Block *pBVar2;
  long lVar3;
  Block *pBVar4;
  Block *pBVar5;
  _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  *p_Var6;
  long in_FS_OFFSET;
  undefined1 auStack_180 [16];
  Block *pBStack_170;
  Block *pBStack_168;
  undefined1 auStack_160 [16];
  Block *pBStack_150;
  Block *pBStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ReadableOrderTraverser *pRStack_90;
  ulong uStack_88;
  Block *pBStack_80;
  Block *local_70;
  Block **local_68;
  Block *local_60;
  uint local_54;
  Block *local_50;
  Block *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  if (param_3 == 0) {
    pBStack_80 = (Block *)0x100251;
    std::__detail::
    _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::insert((_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *)(this + 0x90),&local_60);
  }
  pBVar2 = local_60;
  pBStack_80 = (Block *)0x100213;
  pBVar5 = local_60;
  lVar3 = std::
          _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
          ::find((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                  *)(this + 0x20),(Block **)local_60);
  if (lVar3 != 0) goto LAB_00100218;
  this_00 = (_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
             *)(this + 0x58);
  pBStack_80 = (Block *)0x100264;
  p_Var6 = this_00;
  pBVar4 = (Block *)std::
                    _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                    ::find(this_00,(Block **)pBVar5);
  if (pBVar4 != (Block *)0x0) goto LAB_00100218;
  local_50 = pBVar2;
  local_54 = param_3;
  local_48 = param_4;
  if (*(long *)(this + 0x10) == 0) {
    pBStack_80 = (Block *)0x100448;
    std::__throw_bad_function_call();
    pBStack_80 = pBVar2;
    lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
    auStack_180 = (undefined1  [16])0x0;
    pBStack_170 = (Block *)0x0;
    pBStack_168 = (Block *)0x0;
    pRStack_90 = this;
    uStack_88 = (ulong)param_3;
    if (*(Block **)(pBVar5 + 0x10) == (Block *)0x0) {
      pBStack_150 = (Block *)0x0;
      pBStack_148 = (Block *)0x0;
      auStack_160 = (undefined1  [16])0x0;
    }
    else {
      (*(code *)*(Block **)(pBVar5 + 0x10))(auStack_180);
      pBStack_170 = *(Block **)(pBVar5 + 0x10);
      pBStack_168 = *(Block **)(pBVar5 + 0x18);
      pBStack_150 = (Block *)0x0;
      pBStack_148 = (Block *)0x0;
      auStack_160 = (undefined1  [16])0x0;
      if (*(Block **)(pBVar5 + 0x10) != (Block *)0x0) {
        (*(code *)*(Block **)(pBVar5 + 0x10))(auStack_160,auStack_180,2);
        pBStack_150 = pBStack_170;
        pBStack_148 = pBStack_168;
      }
    }
    puStack_140 = &uStack_110;
    puStack_108 = &uStack_d8;
    puStack_d0 = &uStack_a0;
    uStack_120 = _LC0;
    uStack_e8 = _LC0;
    uStack_b0 = _LC0;
    uStack_138 = 1;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_100 = 1;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 1;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    visit((ReadableOrderTraverser *)auStack_160,p_Var6,0,0);
    std::
    _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                   *)&puStack_d0);
    std::
    _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                   *)&puStack_108);
    std::
    _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                   *)&puStack_140);
    if (pBStack_150 != (Block *)0x0) {
      (*(code *)pBStack_150)(auStack_160,auStack_160,3);
    }
    if (pBStack_170 != (Block *)0x0) {
      (*(code *)pBStack_170)(auStack_180,auStack_180,3);
    }
    if (lStack_98 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_68 = &local_48;
  pBStack_80 = (Block *)0x1002a7;
  local_70 = pBVar4;
  (**(code **)(this + 0x18))(this,&local_50,&local_54,local_68);
  pBStack_80 = (Block *)0x1002b4;
  std::__detail::
  _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::insert((_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
            *)(this + 0x20),&local_60);
  local_50 = (Block *)0x0;
  local_48 = (Block *)0x0;
  if (((ulong)((long)*(Block **)(pBVar2 + 0x10) - (long)*(Block **)(pBVar2 + 8)) < 9) ||
     (lVar3 = *(long *)(*(Block **)(pBVar2 + 0x10) + -0x10), 1 < *(int *)(lVar3 + 0x10) - 0xf6U)) {
LAB_0010032e:
    if ((param_3 == 0) &&
       (pBVar5 = *(Block **)(pBVar2 + 0x38), pBVar5 != *(Block **)(pBVar2 + 0x40))) {
LAB_00100340:
      do {
        uVar1 = *(undefined8 *)pBVar5;
        pBVar5 = pBVar5 + 8;
        pBStack_80 = (Block *)0x100359;
        visit(this,uVar1,0,0);
      } while (*(Block **)(pBVar2 + 0x40) != pBVar5);
      goto LAB_00100365;
    }
  }
  else {
    local_50 = *(Block **)
                (*(long *)(*(long *)(*(long *)(*(Block **)(pBVar2 + 0x68) + 8) + 0x20) +
                          (ulong)**(uint **)(lVar3 + 0x18) * 8) + 0x58);
    pBStack_80 = (Block *)0x10031b;
    std::__detail::
    _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::insert((_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *)this_00,&local_50);
    if (*(int *)(lVar3 + 0x10) != 0xf6) goto LAB_0010032e;
    local_70 = *(Block **)
                (*(long *)(*(long *)(*(long *)(*(Block **)(pBVar2 + 0x68) + 8) + 0x20) +
                          (ulong)*(uint *)(*(long *)(lVar3 + 0x18) + 4) * 8) + 0x58);
    pBStack_80 = (Block *)0x10041c;
    local_48 = local_70;
    std::__detail::
    _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::insert((_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *)this_00,local_68);
    if ((param_3 == 0) &&
       (pBVar5 = *(Block **)(pBVar2 + 0x38), pBVar5 != *(Block **)(pBVar2 + 0x40)))
    goto LAB_00100340;
LAB_00100365:
    if (local_70 != (Block *)0x0) {
      pBStack_80 = (Block *)0x10037e;
      lVar3 = std::
              _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              ::find((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                      *)(this + 0x90),(Block **)local_70);
      pBStack_80 = (Block *)0x100389;
      std::
      _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::_M_erase(this_00);
      pBStack_80 = (Block *)0x1003a1;
      visit(this,local_70,lVar3 == 0,pBVar2);
    }
  }
  pBVar5 = local_50;
  if (local_50 != (Block *)0x0) {
    pBStack_80 = (Block *)0x1003c1;
    lVar3 = std::
            _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
            ::find((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                    *)(this + 0x90),(Block **)local_50);
    pBStack_80 = (Block *)0x1003d0;
    std::
    _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::_M_erase(this_00);
    pBStack_80 = (Block *)0x1003e4;
    visit(this,pBVar5,(lVar3 == 0) * '\x02',pBVar2);
  }
LAB_00100218:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    pBStack_80 = (Block *)0x100443;
    __stack_chk_fail();
  }
  return;
}



/* spv::inReadableOrder(spv::Block*, std::function<void (spv::Block*, spv::ReachReason,
   spv::Block*)>) */

void spv::inReadableOrder(undefined8 param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 local_108 [16];
  code *local_f8;
  undefined8 uStack_f0;
  ReadableOrderTraverser local_e8 [16];
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = (undefined1  [16])0x0;
  local_f8 = (code *)0x0;
  uStack_f0 = 0;
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_d8 = (code *)0x0;
    uStack_d0 = 0;
    local_e8[0] = (ReadableOrderTraverser)0x0;
    local_e8[1] = (ReadableOrderTraverser)0x0;
    local_e8[2] = (ReadableOrderTraverser)0x0;
    local_e8[3] = (ReadableOrderTraverser)0x0;
    local_e8[4] = (ReadableOrderTraverser)0x0;
    local_e8[5] = (ReadableOrderTraverser)0x0;
    local_e8[6] = (ReadableOrderTraverser)0x0;
    local_e8[7] = (ReadableOrderTraverser)0x0;
    local_e8[8] = (ReadableOrderTraverser)0x0;
    local_e8[9] = (ReadableOrderTraverser)0x0;
    local_e8[10] = (ReadableOrderTraverser)0x0;
    local_e8[0xb] = (ReadableOrderTraverser)0x0;
    local_e8[0xc] = (ReadableOrderTraverser)0x0;
    local_e8[0xd] = (ReadableOrderTraverser)0x0;
    local_e8[0xe] = (ReadableOrderTraverser)0x0;
    local_e8[0xf] = (ReadableOrderTraverser)0x0;
  }
  else {
    (**(code **)(param_2 + 0x10))(local_108,param_2,2);
    local_f8 = *(code **)(param_2 + 0x10);
    uStack_f0 = *(undefined8 *)(param_2 + 0x18);
    local_d8 = (code *)0x0;
    uStack_d0 = 0;
    local_e8[0] = (ReadableOrderTraverser)0x0;
    local_e8[1] = (ReadableOrderTraverser)0x0;
    local_e8[2] = (ReadableOrderTraverser)0x0;
    local_e8[3] = (ReadableOrderTraverser)0x0;
    local_e8[4] = (ReadableOrderTraverser)0x0;
    local_e8[5] = (ReadableOrderTraverser)0x0;
    local_e8[6] = (ReadableOrderTraverser)0x0;
    local_e8[7] = (ReadableOrderTraverser)0x0;
    local_e8[8] = (ReadableOrderTraverser)0x0;
    local_e8[9] = (ReadableOrderTraverser)0x0;
    local_e8[10] = (ReadableOrderTraverser)0x0;
    local_e8[0xb] = (ReadableOrderTraverser)0x0;
    local_e8[0xc] = (ReadableOrderTraverser)0x0;
    local_e8[0xd] = (ReadableOrderTraverser)0x0;
    local_e8[0xe] = (ReadableOrderTraverser)0x0;
    local_e8[0xf] = (ReadableOrderTraverser)0x0;
    if (*(code **)(param_2 + 0x10) != (code *)0x0) {
      (**(code **)(param_2 + 0x10))(local_e8,local_108,2);
      local_d8 = local_f8;
      uStack_d0 = uStack_f0;
    }
  }
  local_c8 = &local_98;
  local_90 = &local_60;
  local_58 = &local_28;
  local_a8 = _LC0;
  local_70 = _LC0;
  local_38 = _LC0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 1;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  (anonymous_namespace)::ReadableOrderTraverser::visit(local_e8,param_1,0,0);
  std::
  _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                 *)&local_58);
  std::
  _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                 *)&local_90);
  std::
  _Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable((_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                 *)&local_c8);
  if (local_d8 != (code *)0x0) {
    (*local_d8)(local_e8,local_e8,3);
  }
  if (local_f8 != (code *)0x0) {
    (*local_f8)(local_108,local_108,3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Hashtable<spv::Block*, spv::Block*, std::allocator<spv::Block*>, std::__detail::_Identity,
   std::equal_to<spv::Block*>, std::hash<spv::Block*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, true, true> >::~_Hashtable() */

void __thiscall
std::
_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::~_Hashtable(_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    operator_delete(puVar2,0x10);
    puVar2 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) * 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
        **)this != this + 0x30) {
    operator_delete(*(_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                      **)this,*(long *)(this + 8) << 3);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__detail::_Insert_base<spv::Block*, spv::Block*, std::allocator<spv::Block*>,
   std::__detail::_Identity, std::equal_to<spv::Block*>, std::hash<spv::Block*>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::insert(spv::Block* const&) */

undefined1  [16] __thiscall
std::__detail::
_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::insert(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
         *this,Block **param_1)

{
  _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  *p_Var1;
  Block *pBVar2;
  undefined8 *puVar3;
  Block *pBVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  char cVar10;
  long *plVar11;
  _Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  *__s;
  ulong uVar12;
  ulong extraout_RDX;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  pBVar2 = *param_1;
  if (*(long *)(this + 0x18) == 0) {
    for (plVar11 = *(long **)(this + 0x10); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if ((Block *)plVar11[1] == pBVar2) {
        uVar9 = 0;
        goto LAB_0010079b;
      }
    }
    uVar12 = (ulong)pBVar2 % *(ulong *)(this + 8);
  }
  else {
    uVar12 = (ulong)pBVar2 % *(ulong *)(this + 8);
    puVar3 = *(undefined8 **)(*(long *)this + uVar12 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      pBVar4 = (Block *)((undefined8 *)*puVar3)[1];
      puVar8 = (undefined8 *)*puVar3;
      while (pBVar2 != pBVar4) {
        puVar5 = (undefined8 *)*puVar8;
        if ((puVar5 == (undefined8 *)0x0) ||
           (pBVar4 = (Block *)puVar5[1], puVar3 = puVar8, puVar8 = puVar5,
           (ulong)pBVar4 % *(ulong *)(this + 8) != uVar12)) goto LAB_001007cc;
      }
      plVar11 = (long *)*puVar3;
      uVar9 = 0;
      if (plVar11 != (long *)0x0) goto LAB_0010079b;
    }
  }
LAB_001007cc:
  plVar11 = (long *)operator_new(0x10);
  uVar15 = *(ulong *)(this + 0x18);
  uVar6 = *(ulong *)(this + 8);
  *plVar11 = 0;
  plVar11[1] = (long)*param_1;
  cVar10 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar6,uVar15);
  if (cVar10 == '\0') {
    __s = *(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
            **)this;
    p_Var1 = __s + uVar12 * 8;
    plVar13 = *(long **)p_Var1;
  }
  else {
    if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
        std::__throw_bad_alloc();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      __s = (_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
             *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar13 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar12 = 0;
    while (uVar15 = uVar12, plVar14 = plVar13, plVar13 != (long *)0x0) {
      while( true ) {
        plVar13 = (long *)*plVar14;
        uVar12 = (ulong)plVar14[1] % extraout_RDX;
        p_Var1 = __s + uVar12 * 8;
        if (*(long **)p_Var1 == (long *)0x0) break;
        *plVar14 = **(long **)p_Var1;
        **(undefined8 **)p_Var1 = plVar14;
        plVar14 = plVar13;
        if (plVar13 == (long *)0x0) goto LAB_001008cf;
      }
      *plVar14 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar14;
      *(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
        **)p_Var1 = this + 0x10;
      if (*plVar14 != 0) {
        *(long **)(__s + uVar15 * 8) = plVar14;
      }
    }
LAB_001008cf:
    if (*(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
          **)this != this + 0x30) {
      operator_delete(*(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      **)this = __s;
    p_Var1 = __s + ((ulong)pBVar2 % extraout_RDX) * 8;
    plVar13 = *(long **)p_Var1;
  }
  if (plVar13 == (long *)0x0) {
    lVar7 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar11;
    *plVar11 = lVar7;
    if (lVar7 != 0) {
      *(long **)(__s + (*(ulong *)(lVar7 + 8) % *(ulong *)(this + 8)) * 8) = plVar11;
    }
    *(_Insert_base<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      **)p_Var1 = this + 0x10;
  }
  else {
    *plVar11 = *plVar13;
    **(undefined8 **)p_Var1 = plVar11;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  uVar9 = 1;
LAB_0010079b:
  auVar16[8] = uVar9;
  auVar16._0_8_ = plVar11;
  auVar16._9_7_ = 0;
  return auVar16;
}



/* spv::inReadableOrder(spv::Block*, std::function<void (spv::Block*, spv::ReachReason,
   spv::Block*)>) */

void spv::_GLOBAL__sub_I_inReadableOrder(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<spv::Block*, spv::Block*, std::allocator<spv::Block*>, std::__detail::_Identity,
   std::equal_to<spv::Block*>, std::hash<spv::Block*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, true, true> >::~_Hashtable() */

void __thiscall
std::
_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::~_Hashtable(_Hashtable<spv::Block*,spv::Block*,std::allocator<spv::Block*>,std::__detail::_Identity,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


