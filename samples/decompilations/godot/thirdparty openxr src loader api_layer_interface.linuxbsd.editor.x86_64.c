
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

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
      goto LAB_001000f4;
    }
    if (__n == 0) goto LAB_001000f4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001000f4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */

long * __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  long *plVar1;
  void *__s1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  string *psVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_RDX;
  ulong uVar13;
  vector *pvVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined5 *puStack_d8;
  undefined8 uStack_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined1 uStack_bb;
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  size_t local_38;
  long local_30;
  
  psVar7 = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = psVar7;
  if (param_1 == (char *)0x0) {
    pcVar17 = "basic_string: construction from null is not valid";
    std::__throw_logic_error("basic_string: construction from null is not valid");
    uVar13 = *(ulong *)((long)param_1 + 8);
    __s1 = *(void **)param_1;
    if (*(ulong *)((long)pcVar17 + 0x18) < 0x15) {
      for (plVar9 = *(long **)((long)pcVar17 + 0x10); plVar9 != (long *)0x0;
          plVar9 = (long *)*plVar9) {
        if (plVar9[2] == uVar13) {
          if (uVar13 == 0) {
            return plVar9;
          }
          uStack_88 = 0x100292;
          iVar5 = memcmp(__s1,(void *)plVar9[1],uVar13);
          if (iVar5 == 0) {
            return plVar9;
          }
        }
      }
    }
    uStack_88 = 0x1002c0;
    uVar8 = std::_Hash_bytes(__s1,uVar13,0xc70f6907);
    uVar13 = *(ulong *)((long)pcVar17 + 8);
    uVar12 = uVar8 % uVar13;
    if ((0x14 < *(ulong *)((long)pcVar17 + 0x18)) &&
       (plVar9 = *(long **)(*(long *)pcVar17 + uVar12 * 8), plVar9 != (long *)0x0)) {
      uVar11 = ((long *)*plVar9)[5];
      plVar10 = (long *)*plVar9;
      uVar18 = uVar12;
      while ((plVar15 = plVar10, uVar8 != uVar11 ||
             (sVar6 = *(size_t *)((long)param_1 + 8), sVar6 != plVar15[2]))) {
LAB_001002f0:
        plVar10 = (long *)*plVar15;
        if ((plVar10 == (long *)0x0) ||
           (uVar11 = plVar10[5], plVar9 = plVar15, uVar18 != uVar11 % uVar13)) goto LAB_00100358;
      }
      uStack_80 = uVar18;
      if (sVar6 != 0) {
        uStack_88 = 0x10033a;
        plStack_78 = plVar9;
        iVar5 = memcmp(*(void **)param_1,(void *)plVar15[1],sVar6);
        uVar18 = uStack_80;
        plVar9 = plStack_78;
        if (iVar5 != 0) goto LAB_001002f0;
      }
      if ((long *)*plVar9 != (long *)0x0) {
        return (long *)*plVar9;
      }
    }
LAB_00100358:
    uStack_88 = 0x100362;
    plVar9 = (long *)operator_new(0x30);
    lVar2 = *(long *)param_1;
    lVar3 = *(long *)((long)param_1 + 8);
    *plVar9 = 0;
    plVar9[1] = (long)(plVar9 + 3);
    uStack_88 = 0x100389;
    _M_construct<char*>(plVar9 + 1,lVar2,lVar3 + lVar2);
    pvVar14 = *(vector **)((long)pcVar17 + 8);
    psVar7 = (string *)((long)pcVar17 + 0x20);
    uStack_88 = 0x10039f;
    cVar4 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                      ((ulong)psVar7,(ulong)pvVar14,*(ulong *)((long)pcVar17 + 0x18));
    if (cVar4 == '\0') {
      plVar10 = *(long **)pcVar17;
      plVar9[5] = uVar8;
      plVar15 = plVar10 + uVar12;
      plVar16 = (long *)*plVar15;
    }
    else {
      if (extraout_RDX == 1) {
        plVar10 = (long *)((long)pcVar17 + 0x30);
        *(long *)((long)pcVar17 + 0x30) = 0;
      }
      else {
        if (extraout_RDX >> 0x3c != 0) {
          uVar8 = extraout_RDX >> 0x3d;
          if (uVar8 != 0) {
            uStack_88 = 0x10050f;
            std::__throw_bad_array_new_length();
          }
          uStack_88 = 0x100514;
          std::__throw_bad_alloc();
          lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
          plStack_a8 = plVar9;
          uStack_a0 = uVar12;
          uStack_98 = uVar8;
          plStack_90 = (long *)pcVar17;
          uStack_88 = uVar13;
          if ((LoaderLogger::GetInstance()::instance == '\0') &&
             (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
          uStack_bb = 0;
          uStack_d0 = 0xd;
          uStack_c8 = 0x586e65704f;
          uStack_c3 = 0x4c2d52;
          uStack_c0 = 0x726564616f;
          puStack_d8 = &uStack_c8;
          LoaderLogger::LogMessage
                    (0x106280,0x1000,(string *)0x1,(string *)&puStack_d8,psVar7,pvVar14);
          if (puStack_d8 != &uStack_c8) {
            operator_delete(puStack_d8,CONCAT35(uStack_c3,uStack_c8) + 1);
          }
          if (lStack_b0 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (long *)0x0;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uStack_88 = 0x100407;
        plVar10 = (long *)operator_new(extraout_RDX * 8);
        uStack_88 = 0x100417;
        memset(plVar10,0,extraout_RDX * 8);
      }
      plVar15 = *(long **)((long)pcVar17 + 0x10);
      *(long *)((long)pcVar17 + 0x10) = 0;
      uVar13 = 0;
      while (uVar12 = uVar13, plVar16 = plVar15, plVar15 != (long *)0x0) {
        while( true ) {
          plVar15 = (long *)*plVar16;
          uVar13 = (ulong)plVar16[5] % extraout_RDX;
          plVar1 = plVar10 + uVar13;
          if ((long *)*plVar1 == (long *)0x0) break;
          *plVar16 = *(long *)*plVar1;
          *(long **)*plVar1 = plVar16;
          plVar16 = plVar15;
          if (plVar15 == (long *)0x0) goto LAB_00100463;
        }
        *plVar16 = *(long *)((long)pcVar17 + 0x10);
        *(long **)((long)pcVar17 + 0x10) = plVar16;
        *plVar1 = (long)((long)pcVar17 + 0x10);
        if (*plVar16 != 0) {
          plVar10[uVar12] = (long)plVar16;
        }
      }
LAB_00100463:
      if (*(long **)pcVar17 != (long *)((long)pcVar17 + 0x30)) {
        uStack_88 = 0x100479;
        operator_delete(*(long **)pcVar17,*(long *)((long)pcVar17 + 8) << 3);
      }
      *(ulong *)((long)pcVar17 + 8) = extraout_RDX;
      *(long **)pcVar17 = plVar10;
      plVar9[5] = uVar8;
      plVar15 = plVar10 + uVar8 % extraout_RDX;
      plVar16 = (long *)*plVar15;
    }
    if (plVar16 == (long *)0x0) {
      lVar2 = *(long *)((long)pcVar17 + 0x10);
      *(long **)((long)pcVar17 + 0x10) = plVar9;
      *plVar9 = lVar2;
      if (lVar2 != 0) {
        plVar10[*(ulong *)(lVar2 + 0x28) % *(ulong *)((long)pcVar17 + 8)] = (long)plVar9;
      }
      *plVar15 = (long)((long)pcVar17 + 0x10);
    }
    else {
      *plVar9 = *plVar16;
      *(long **)*plVar15 = plVar9;
    }
    *(long *)((long)pcVar17 + 0x18) = *(long *)((long)pcVar17 + 0x18) + 1;
    return plVar9;
  }
  sVar6 = strlen(param_1);
  local_38 = sVar6;
  if (sVar6 < 0x10) {
    if (sVar6 == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_001001b3;
    }
    if (sVar6 == 0) goto LAB_001001b3;
  }
  else {
    psVar7 = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = psVar7;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(psVar7,param_1,sVar6);
  psVar7 = *(string **)this;
LAB_001001b3:
  *(size_t *)(this + 8) = local_38;
  psVar7[local_38] = (string)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::pair<std::__detail::_Node_iterator<std::__cxx11::string, true, true>, bool>
   std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::_M_insert_unique<std::__cxx11::string const&, std::__cxx11::string const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string, true> >
   > >(std::__cxx11::string const&, std::__cxx11::string const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string, true> >
   > const&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
::
_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>
          (string *param_1,string *param_2,_AllocNode *param_3)

{
  string *psVar1;
  void *__s1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  string *psVar11;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_RDX;
  ulong uVar14;
  ulong extraout_RDX_00;
  undefined8 *puVar15;
  vector *pvVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  ulong uStack_a8;
  undefined5 *puStack_a0;
  undefined8 uStack_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined1 uStack_83;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  string *psStack_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 *local_40;
  
  uVar14 = *(ulong *)(param_2 + 8);
  __s1 = *(void **)param_2;
  if (*(ulong *)(param_1 + 0x18) < 0x15) {
    for (plVar10 = *(long **)(param_1 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10[2] == uVar14) {
        if (uVar14 != 0) {
          uStack_50 = 0x100292;
          iVar8 = memcmp(__s1,(void *)plVar10[1],uVar14);
          if (iVar8 != 0) goto LAB_00100270;
        }
        uVar7 = 0;
        goto LAB_00100298;
      }
LAB_00100270:
    }
  }
  uStack_50 = 0x1002c0;
  uVar9 = std::_Hash_bytes(__s1,uVar14,0xc70f6907);
  uVar14 = *(ulong *)(param_1 + 8);
  uVar13 = uVar9 % uVar14;
  if ((0x14 < *(ulong *)(param_1 + 0x18)) &&
     (puVar20 = *(undefined8 **)(*(long *)param_1 + uVar13 * 8), puVar20 != (undefined8 *)0x0)) {
    uVar12 = ((undefined8 *)*puVar20)[5];
    puVar2 = (undefined8 *)*puVar20;
    uVar19 = uVar13;
    while ((puVar15 = puVar2, uVar9 != uVar12 || (__n = *(size_t *)(param_2 + 8), __n != puVar15[2])
           )) {
LAB_001002f0:
      puVar2 = (undefined8 *)*puVar15;
      if ((puVar2 == (undefined8 *)0x0) ||
         (uVar12 = puVar2[5], puVar20 = puVar15, uVar19 != uVar12 % uVar14)) goto LAB_00100358;
    }
    local_48 = uVar19;
    if (__n != 0) {
      uStack_50 = 0x10033a;
      local_40 = puVar20;
      iVar8 = memcmp(*(void **)param_2,(void *)puVar15[1],__n);
      uVar19 = local_48;
      puVar20 = local_40;
      if (iVar8 != 0) goto LAB_001002f0;
    }
    plVar10 = (long *)*puVar20;
    uVar7 = 0;
    if (plVar10 != (long *)0x0) goto LAB_00100298;
  }
LAB_00100358:
  uStack_50 = 0x100362;
  plVar10 = (long *)operator_new(0x30);
  lVar3 = *(long *)param_2;
  lVar4 = *(long *)(param_2 + 8);
  *plVar10 = 0;
  plVar10[1] = (long)(plVar10 + 3);
  uStack_50 = 0x100389;
  __cxx11::string::_M_construct<char*>(plVar10 + 1,lVar3,lVar4 + lVar3);
  pvVar16 = *(vector **)(param_1 + 8);
  psVar11 = param_1 + 0x20;
  uStack_50 = 0x10039f;
  cVar6 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    ((ulong)psVar11,(ulong)pvVar16,*(ulong *)(param_1 + 0x18));
  if (cVar6 == '\0') {
    psVar11 = *(string **)param_1;
    plVar10[5] = uVar9;
    psVar1 = psVar11 + uVar13 * 8;
    plVar17 = *(long **)psVar1;
  }
  else {
    if (extraout_RDX == 1) {
      psVar11 = param_1 + 0x30;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        uVar9 = extraout_RDX >> 0x3d;
        if (uVar9 != 0) {
          uStack_50 = 0x10050f;
          std::__throw_bad_array_new_length();
        }
        uStack_50 = 0x100514;
        std::__throw_bad_alloc();
        lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
        plStack_70 = plVar10;
        uStack_68 = uVar13;
        uStack_60 = uVar9;
        psStack_58 = param_1;
        uStack_50 = uVar14;
        if (LoaderLogger::GetInstance()::instance == '\0') {
          uStack_a8 = 0x100606;
          iVar8 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance);
          if (iVar8 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            uStack_a8 = 0x100634;
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
        }
        uStack_83 = 0;
        uStack_98 = 0xd;
        uStack_90 = 0x586e65704f;
        uStack_8b = 0x4c2d52;
        uStack_88 = 0x726564616f;
        puStack_a0 = &uStack_90;
        LoaderLogger::LogMessage
                  (0x106280,0x1000,(string *)0x1,(string *)&puStack_a0,psVar11,pvVar16);
        if (puStack_a0 != &uStack_90) {
          operator_delete(puStack_a0,CONCAT35(uStack_8b,uStack_90) + 1);
          uStack_a8 = extraout_RDX_00;
        }
        if (lStack_78 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uStack_a8;
        return auVar5 << 0x40;
      }
      uStack_50 = 0x100407;
      psVar11 = (string *)operator_new(extraout_RDX * 8);
      uStack_50 = 0x100417;
      memset(psVar11,0,extraout_RDX * 8);
    }
    plVar17 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar14 = 0;
    while (uVar13 = uVar14, plVar18 = plVar17, plVar17 != (long *)0x0) {
      while( true ) {
        plVar17 = (long *)*plVar18;
        uVar14 = (ulong)plVar18[5] % extraout_RDX;
        psVar1 = psVar11 + uVar14 * 8;
        if (*(long **)psVar1 == (long *)0x0) break;
        *plVar18 = **(long **)psVar1;
        **(undefined8 **)psVar1 = plVar18;
        plVar18 = plVar17;
        if (plVar17 == (long *)0x0) goto LAB_00100463;
      }
      *plVar18 = *(long *)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar18;
      *(string **)psVar1 = param_1 + 0x10;
      if (*plVar18 != 0) {
        *(long **)(psVar11 + uVar13 * 8) = plVar18;
      }
    }
LAB_00100463:
    if (*(string **)param_1 != param_1 + 0x30) {
      uStack_50 = 0x100479;
      operator_delete(*(string **)param_1,*(long *)(param_1 + 8) << 3);
    }
    *(ulong *)(param_1 + 8) = extraout_RDX;
    *(string **)param_1 = psVar11;
    plVar10[5] = uVar9;
    psVar1 = psVar11 + (uVar9 % extraout_RDX) * 8;
    plVar17 = *(long **)psVar1;
  }
  if (plVar17 == (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    *(long **)(param_1 + 0x10) = plVar10;
    *plVar10 = lVar3;
    if (lVar3 != 0) {
      *(long **)(psVar11 + (*(ulong *)(lVar3 + 0x28) % *(ulong *)(param_1 + 8)) * 8) = plVar10;
    }
    *(string **)psVar1 = param_1 + 0x10;
  }
  else {
    *plVar10 = *plVar17;
    **(undefined8 **)psVar1 = plVar10;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  uVar7 = 1;
LAB_00100298:
  auVar21._8_4_ = uVar7;
  auVar21._0_8_ = plVar10;
  auVar21._12_4_ = 0;
  return auVar21;
}



/* LoaderLogger::LogErrorMessage(std::__cxx11::string const&, std::__cxx11::string const&,
   std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> > const&) [clone .isra.0] */

void LoaderLogger::LogErrorMessage(string *param_1,string *param_2,vector *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined5 *local_58;
  undefined8 local_50;
  undefined5 local_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined1 local_3b;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (GetInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstance()::instance);
    if (iVar1 != 0) {
      LoaderLogger::LoaderLogger((LoaderLogger *)GetInstance()::instance);
      __cxa_atexit(~LoaderLogger,GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&GetInstance()::instance);
    }
  }
  local_3b = 0;
  local_50 = 0xd;
  local_48 = 0x586e65704f;
  uStack_43 = 0x4c2d52;
  uStack_40 = 0x726564616f;
  local_58 = &local_48;
  LoaderLogger::LogMessage
            (0x106280,0x1000,(string *)0x1,(string *)&local_58,param_1,(vector *)param_2);
  if (local_58 != &local_48) {
    operator_delete(local_58,CONCAT35(uStack_43,local_48) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ApiLayerInterface::~ApiLayerInterface() */

void __thiscall ApiLayerInterface::~ApiLayerInterface(ApiLayerInterface *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_c8 [16];
  long local_b8;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined5 *local_68;
  undefined8 local_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8._8_8_ = local_c8._0_8_;
  local_c8._0_8_ = 0x2c;
  *(undefined ***)this = &PTR__ApiLayerInterface_00106258;
  local_a8 = local_98;
  local_a8 = (long *)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)local_c8);
  uVar2 = _LC2._8_8_;
  local_98[0] = local_c8._0_8_;
  *local_a8 = _LC2._0_8_;
  local_a8[1] = uVar2;
  uVar2 = _LC2._24_8_;
  local_a8[2] = _LC2._16_8_;
  local_a8[3] = uVar2;
  uVar2 = _LC2._40_8_;
  *(undefined8 *)((long)local_a8 + 0x1c) = _LC2._32_8_;
  *(undefined8 *)((long)local_a8 + 0x24) = uVar2;
  local_a0 = local_c8._0_8_;
  *(char *)((long)local_a8 + local_c8._0_8_) = '\0';
  if (0x3fffffffffffffff - local_c8._0_8_ < *(ulong *)(this + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::string::_M_append((char *)&local_a8,*(ulong *)(this + 8));
  local_b8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_c8 = (undefined1  [16])0x0;
  local_88 = &local_78;
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar3 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  local_60 = 0xd;
  local_58 = 0x586e65704f;
  uStack_53 = 0x4c2d52;
  uStack_50 = 0x726564616f;
  local_4b = 0;
  local_68 = &local_58;
  LoaderLogger::LogMessage
            (0x106280,0x10,(string *)0x1,(string *)&local_68,(string *)&local_88,(vector *)&local_a8
            );
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
  }
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  uVar2 = local_c8._8_8_;
  pvVar4 = (void *)local_c8._0_8_;
  if (local_c8._8_8_ != local_c8._0_8_) {
    do {
      if (*(void **)((long)pvVar4 + 0x10) != (void *)((long)pvVar4 + 0x20)) {
        operator_delete(*(void **)((long)pvVar4 + 0x10),*(long *)((long)pvVar4 + 0x20) + 1);
      }
      pvVar4 = (void *)((long)pvVar4 + 0x30);
    } while ((void *)uVar2 != pvVar4);
  }
  if ((void *)local_c8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_c8._0_8_,local_b8 - local_c8._0_8_);
  }
  dlclose(*(undefined8 *)(this + 0x28));
  if (local_a8 != local_98) {
    operator_delete(local_a8,local_98[0] + 1);
  }
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar5 = *(undefined8 **)(this + 0x40);
  if (puVar1 != puVar5) {
    do {
      if ((undefined8 *)*puVar5 != puVar5 + 2) {
        operator_delete((undefined8 *)*puVar5,puVar5[2] + 1);
      }
      puVar5 = puVar5 + 4;
    } while (puVar1 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x40);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5,*(long *)(this + 0x50) - (long)puVar5);
  }
  if (*(ApiLayerInterface **)(this + 8) == this + 0x18) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(*(ApiLayerInterface **)(this + 8),*(long *)(this + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ApiLayerInterface::~ApiLayerInterface() */

void __thiscall ApiLayerInterface::~ApiLayerInterface(ApiLayerInterface *this)

{
  ~ApiLayerInterface(this);
  operator_delete(this,0x58);
  return;
}



/* ApiLayerInterface::ApiLayerInterface(std::__cxx11::string const&, void*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >&, XrResult
   (*)(XrInstance_T*, char const*, void (**)()), XrResult (*)(XrInstanceCreateInfo const*,
   XrApiLayerCreateInfo const*, XrInstance_T**)) */

void __thiscall
ApiLayerInterface::ApiLayerInterface
          (ApiLayerInterface *this,string *param_1,void *param_2,vector *param_3,
          _func_XrResult_XrInstance_T_ptr_char_ptr__func_void_ptr *param_4,
          _func_XrResult_XrInstanceCreateInfo_ptr_XrApiLayerCreateInfo_ptr_XrInstance_T_ptr_ptr
          *param_5)

{
  undefined8 *puVar1;
  undefined1 *__src;
  ulong *puVar2;
  ulong *__dest;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__ApiLayerInterface_00106258;
  *(ApiLayerInterface **)(this + 8) = this + 0x18;
  std::__cxx11::string::_M_construct<char*>
            (this + 8,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  *(void **)(this + 0x28) = param_2;
  *(_func_XrResult_XrInstance_T_ptr_char_ptr__func_void_ptr **)(this + 0x30) = param_4;
  uVar3 = *(long *)(param_3 + 8) - *(long *)param_3;
  *(_func_XrResult_XrInstanceCreateInfo_ptr_XrApiLayerCreateInfo_ptr_XrInstance_T_ptr_ptr **)
   (this + 0x38) = param_5;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  if (uVar3 == 0) {
    uVar3 = 0;
    puVar2 = (ulong *)0x0;
  }
  else {
    if (0x7fffffffffffffe0 < uVar3) {
      std::__throw_bad_array_new_length();
      goto LAB_00100b36;
    }
    puVar2 = (ulong *)operator_new(uVar3);
  }
  *(ulong *)(this + 0x50) = uVar3 + (long)puVar2;
  *(ulong **)(this + 0x40) = puVar2;
  *(ulong **)(this + 0x48) = puVar2;
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar4 = *(undefined8 **)param_3;
  if (puVar1 != puVar4) {
    do {
      uVar3 = puVar4[1];
      __dest = puVar2 + 2;
      *puVar2 = (ulong)__dest;
      __src = (undefined1 *)*puVar4;
      local_48 = uVar3;
      if (uVar3 < 0x10) {
        if (uVar3 == 1) {
          *(undefined1 *)(puVar2 + 2) = *__src;
        }
        else if (uVar3 != 0) goto LAB_00100ad9;
      }
      else {
        __dest = (ulong *)std::__cxx11::string::_M_create(puVar2,(ulong)&local_48);
        *puVar2 = (ulong)__dest;
        puVar2[2] = local_48;
LAB_00100ad9:
        memcpy(__dest,__src,uVar3);
        __dest = (ulong *)*puVar2;
      }
      puVar4 = puVar4 + 4;
      puVar2[1] = local_48;
      puVar2 = puVar2 + 4;
      *(undefined1 *)((long)__dest + local_48) = 0;
    } while (puVar1 != puVar4);
  }
  *(ulong **)(this + 0x48) = puVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100b36:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ApiLayerInterface::SupportsExtension(std::__cxx11::string const&) const */

undefined8 __thiscall ApiLayerInterface::SupportsExtension(ApiLayerInterface *this,string *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  if (puVar1 != puVar3) {
    __n = *(size_t *)(param_1 + 8);
    do {
      if (puVar3[1] == __n) {
        if (__n == 0) {
          return 1;
        }
        iVar2 = memcmp((void *)*puVar3,*(void **)param_1,__n);
        if (iVar2 == 0) {
          return 1;
        }
      }
      puVar3 = puVar3 + 4;
    } while (puVar1 != puVar3);
  }
  return 0;
}



/* ApiLayerInterface::GetApiLayerProperties(std::__cxx11::string const&, unsigned int, unsigned
   int*, XrApiLayerProperties*) */

int ApiLayerInterface::GetApiLayerProperties
              (string *param_1,uint param_2,uint *param_3,XrApiLayerProperties *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  XrApiLayerProperties *pXVar5;
  uint uVar6;
  allocator *paVar7;
  allocator *extraout_RDX;
  void *pvVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  long local_b8;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  undefined5 *local_68;
  undefined8 local_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (undefined1  [16])0x0;
  local_d8 = 0;
  if ((param_2 != 0) && (param_4 != (XrApiLayerProperties *)0x0)) {
    uVar6 = 0;
    pXVar5 = param_4;
LAB_00100c22:
    if (*(int *)pXVar5 == 1) goto LAB_00100c10;
    local_b8 = 0;
    local_c8 = (undefined1  [16])0x0;
    local_f0 = 0x49;
    local_88 = local_78;
    local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_f0);
    uVar1 = _LC2._56_8_;
    local_78[0] = local_f0;
    *local_88 = _LC2._48_8_;
    local_88[1] = uVar1;
    uVar1 = _LC2._72_8_;
    local_88[2] = _LC2._64_8_;
    local_88[3] = uVar1;
    uVar1 = _LC2._88_8_;
    local_88[4] = _LC2._80_8_;
    local_88[5] = uVar1;
    uVar1 = _LC2._104_8_;
    local_88[6] = _LC2._96_8_;
    local_88[7] = uVar1;
    uVar1 = _LC2._120_8_;
    *(undefined8 *)((long)local_88 + 0x39) = _LC2._112_8_;
    *(undefined8 *)((long)local_88 + 0x41) = uVar1;
    local_80 = local_f0;
    *(char *)((long)local_88 + local_f0) = '\0';
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar3 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    local_60 = 0xd;
    local_58 = 0x586e65704f;
    uStack_53 = 0x4c2d52;
    uStack_50 = 0x726564616f;
    local_4b = 0;
    local_68 = &local_58;
    LoaderLogger::LogMessage
              (0x106280,0x1000,(string *)0x1,(string *)&local_68,param_1,(vector *)&local_88);
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
    }
    if (local_88 != local_78) {
      operator_delete(local_88,local_78[0] + 1);
    }
    uVar1 = local_c8._8_8_;
    pvVar8 = (void *)local_c8._0_8_;
    if (local_c8._8_8_ != local_c8._0_8_) {
      do {
        if (*(void **)((long)pvVar8 + 0x10) != (void *)((long)pvVar8 + 0x20)) {
          operator_delete(*(void **)((long)pvVar8 + 0x10),*(long *)((long)pvVar8 + 0x20) + 1);
        }
        pvVar8 = (void *)((long)pvVar8 + 0x30);
      } while ((void *)uVar1 != pvVar8);
    }
    if ((void *)local_c8._0_8_ != (void *)0x0) {
      operator_delete((void *)local_c8._0_8_,local_b8 - local_c8._0_8_);
    }
    goto LAB_00100df2;
  }
LAB_00100e00:
  if (param_3 == (uint *)0x0) {
LAB_00100df2:
    iVar3 = -1;
  }
  else {
    iVar3 = ApiLayerManifestFile::FindManifestFiles(param_1,2,local_e8);
    if ((iVar3 < 0) ||
       (iVar3 = ApiLayerManifestFile::FindManifestFiles(param_1,3,local_e8), iVar3 < 0)) {
      local_b8 = 0;
      local_c8 = (undefined1  [16])0x0;
      local_f0 = 0x58;
      local_88 = local_78;
      local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_f0);
      uVar1 = _LC2._8_8_;
      local_78[0] = local_f0;
      *local_88 = _LC2._0_8_;
      local_88[1] = uVar1;
      uVar2 = _LC2._136_8_;
      uVar1 = _LC2._128_8_;
      local_88[10] = 0x73656c6966207473;
      local_88[2] = uVar1;
      local_88[3] = uVar2;
      uVar1 = _LC2._152_8_;
      local_88[4] = _LC2._144_8_;
      local_88[5] = uVar1;
      uVar1 = _LC2._168_8_;
      local_88[6] = _LC2._160_8_;
      local_88[7] = uVar1;
      uVar1 = _LC2._184_8_;
      local_88[8] = _LC2._176_8_;
      local_88[9] = uVar1;
      local_80 = local_f0;
      *(char *)((long)local_88 + local_f0) = '\0';
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar4 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar4 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      local_60 = 0xd;
      local_58 = 0x586e65704f;
      uStack_53 = 0x4c2d52;
      uStack_50 = 0x726564616f;
      local_4b = 0;
      local_68 = &local_58;
      LoaderLogger::LogMessage
                (0x106280,0x1000,(string *)0x1,(string *)&local_68,param_1,(vector *)&local_88);
      if (local_68 != &local_58) {
        operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      uVar1 = local_c8._8_8_;
      pvVar8 = (void *)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
        do {
          if (*(void **)((long)pvVar8 + 0x10) != (void *)((long)pvVar8 + 0x20)) {
            operator_delete(*(void **)((long)pvVar8 + 0x10),*(long *)((long)pvVar8 + 0x20) + 1);
          }
          pvVar8 = (void *)((long)pvVar8 + 0x30);
        } while ((void *)uVar1 != pvVar8);
      }
      if ((void *)local_c8._0_8_ != (void *)0x0) {
        operator_delete((void *)local_c8._0_8_,local_b8 - local_c8._0_8_);
      }
      goto LAB_00100ec4;
    }
    paVar7 = (allocator *)((long)(local_e8._8_8_ - local_e8._0_8_) >> 3);
    if (0x7fffffff0 < (ulong)(local_e8._8_8_ - local_e8._0_8_)) {
      local_b8 = 0;
      local_c8 = (undefined1  [16])0x0;
      local_f0 = 0x44;
      local_88 = local_78;
      local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_f0);
      uVar1 = _LC2._8_8_;
      local_78[0] = local_f0;
      *local_88 = _LC2._0_8_;
      local_88[1] = uVar1;
      uVar2 = _LC2._136_8_;
      uVar1 = _LC2._128_8_;
      *(undefined4 *)(local_88 + 8) = 0x646e756f;
      local_88[2] = uVar1;
      local_88[3] = uVar2;
      uVar1 = _LC2._200_8_;
      local_88[4] = _LC2._192_8_;
      local_88[5] = uVar1;
      uVar1 = _LC2._216_8_;
      local_88[6] = _LC2._208_8_;
      local_88[7] = uVar1;
      local_80 = local_f0;
      *(char *)((long)local_88 + local_f0) = '\0';
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar3 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      local_60 = 0xd;
      local_58 = 0x586e65704f;
      uStack_53 = 0x4c2d52;
      uStack_50 = 0x726564616f;
      local_4b = 0;
      local_68 = &local_58;
      LoaderLogger::LogMessage
                (0x106280,0x1000,(string *)0x1,(string *)&local_68,param_1,(vector *)&local_88);
      if (local_68 != &local_58) {
        operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      uVar1 = local_c8._8_8_;
      for (lVar9 = local_c8._0_8_; uVar1 != lVar9; lVar9 = lVar9 + 0x30) {
        if (*(void **)(lVar9 + 0x10) != (void *)(lVar9 + 0x20)) {
          operator_delete(*(void **)(lVar9 + 0x10),*(long *)(lVar9 + 0x20) + 1);
        }
      }
      if ((void *)local_c8._0_8_ != (void *)0x0) {
        operator_delete((void *)local_c8._0_8_,local_b8 - local_c8._0_8_);
      }
      iVar3 = -2;
      goto LAB_00100ec4;
    }
    uVar6 = (uint)paVar7;
    *param_3 = uVar6;
    if (param_2 != 0) {
      if (param_4 == (XrApiLayerProperties *)0x0) {
        local_b8 = 0;
        local_c8 = (undefined1  [16])0x0;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_68,
                   "VUID-xrEnumerateApiLayerProperties-properties-parameter: non-zero capacity but null array"
                   ,paVar7);
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_88,"xrEnumerateInstanceExtensionProperties",extraout_RDX);
        LoaderLogger::LogErrorMessage((string *)&local_88,(string *)&local_68,(vector *)local_c8);
        std::__cxx11::string::_M_dispose();
        std::__cxx11::string::_M_dispose();
        std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                  ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_c8);
        goto LAB_00100df2;
      }
      if (param_2 < uVar6) {
        local_c8 = (undefined1  [16])0x0;
        local_b8 = 0;
        local_f0 = 0x5f;
        local_88 = local_78;
        local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_f0);
        uVar1 = _LC2._232_8_;
        local_78[0] = local_f0;
        *local_88 = _LC2._224_8_;
        local_88[1] = uVar1;
        uVar1 = _LC2._248_8_;
        local_88[2] = _LC2._240_8_;
        local_88[3] = uVar1;
        uVar1 = _LC2._264_8_;
        local_88[4] = _LC2._256_8_;
        local_88[5] = uVar1;
        uVar1 = _LC2._280_8_;
        local_88[6] = _LC2._272_8_;
        local_88[7] = uVar1;
        uVar1 = _LC2._296_8_;
        local_88[8] = _LC2._288_8_;
        local_88[9] = uVar1;
        uVar1 = _LC2._312_8_;
        *(undefined8 *)((long)local_88 + 0x4f) = _LC2._304_8_;
        *(undefined8 *)((long)local_88 + 0x57) = uVar1;
        local_80 = local_f0;
        *(char *)((long)local_88 + local_f0) = '\0';
        local_f0 = 0x26;
        local_a8 = local_98;
        local_a8 = (long *)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_f0);
        uVar1 = _LC2._328_8_;
        local_98[0] = local_f0;
        *local_a8 = _LC2._320_8_;
        local_a8[1] = uVar1;
        uVar1 = _LC2._344_8_;
        local_a8[2] = _LC2._336_8_;
        local_a8[3] = uVar1;
        builtin_strncpy((char *)((long)local_a8 + 0x1e),"operties",8);
        local_a0 = local_f0;
        *(char *)((long)local_a8 + local_f0) = '\0';
        if ((LoaderLogger::GetInstance()::instance == '\0') &&
           (iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar3 != 0)) {
          LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
          __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                       &__dso_handle);
          __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
        }
        local_60 = 0xd;
        local_58 = 0x586e65704f;
        uStack_53 = 0x4c2d52;
        uStack_50 = 0x726564616f;
        local_4b = 0;
        local_68 = &local_58;
        LoaderLogger::LogMessage
                  (0x106280,0x1000,(string *)0x1,(string *)&local_68,(string *)&local_a8,
                   (vector *)&local_88);
        if (local_68 != &local_58) {
          operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
        }
        if (local_a8 != local_98) {
          operator_delete(local_a8,local_98[0] + 1);
        }
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
        uVar1 = local_c8._8_8_;
        for (lVar9 = local_c8._0_8_; uVar1 != lVar9; lVar9 = lVar9 + 0x30) {
          if (*(void **)(lVar9 + 0x10) != (void *)(lVar9 + 0x20)) {
            operator_delete(*(void **)(lVar9 + 0x10),*(long *)(lVar9 + 0x20) + 1);
          }
        }
        if ((void *)local_c8._0_8_ != (void *)0x0) {
          operator_delete((void *)local_c8._0_8_,local_b8 - local_c8._0_8_);
        }
        iVar3 = -0xb;
        goto LAB_00100ec4;
      }
      if (uVar6 < param_2) {
        param_2 = uVar6;
      }
      if (param_2 != 0) {
        for (lVar9 = 0;
            ApiLayerManifestFile::PopulateApiLayerProperties
                      (*(XrApiLayerProperties **)(local_e8._0_8_ + lVar9)),
            (ulong)(param_2 - 1) << 3 != lVar9; lVar9 = lVar9 + 8) {
        }
      }
    }
    iVar3 = 0;
  }
LAB_00100ec4:
  std::
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  ::~vector((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100c10:
  uVar6 = uVar6 + 1;
  pXVar5 = pXVar5 + 0x220;
  if (param_2 <= uVar6) goto LAB_00100e00;
  goto LAB_00100c22;
}



/* AddEnvironmentApiLayers(std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >&) [clone .constprop.0] */

void AddEnvironmentApiLayers(vector *param_1)

{
  long *plVar1;
  uint uVar2;
  char *__s;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong **__dest;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *unaff_RBP;
  ulong *puVar9;
  long in_FS_OFFSET;
  ulong ***local_d0;
  ulong **local_c8;
  ulong **local_c0;
  ulong *local_b0;
  ulong **local_a8;
  ulong *local_a0;
  ulong *local_98 [2];
  ulong *local_88;
  ulong local_80;
  ulong auStack_78 [2];
  ulong *local_68;
  undefined8 local_60;
  ulong auStack_58 [5];
  
  auStack_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  __s = getenv("XR_ENABLE_API_LAYERS");
  if (__s == (char *)0x0) {
    local_a8 = local_98;
    local_98[0] = (ulong *)((ulong)local_98[0] & 0xffffffffffffff00);
    local_a0 = (ulong *)0x0;
  }
  else {
    __dest = local_98;
    local_a8 = __dest;
    unaff_RBP = (ulong *)strlen(__s);
    local_b0 = unaff_RBP;
    if (unaff_RBP < (ulong *)0x10) {
      if (unaff_RBP == (ulong *)0x1) {
        local_98[0] = (ulong *)CONCAT71(local_98[0]._1_7_,*__s);
      }
      else if (unaff_RBP != (ulong *)0x0) goto LAB_00101b6b;
    }
    else {
      __dest = (ulong **)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_b0);
      local_98[0] = local_b0;
      local_a8 = __dest;
LAB_00101b6b:
      memcpy(__dest,__s,(size_t)unaff_RBP);
      __dest = local_a8;
    }
    *(undefined1 *)((long)__dest + (long)local_b0) = 0;
    local_a0 = local_b0;
  }
  local_c0 = local_98;
  local_d0 = &local_a8;
  lVar3 = std::__cxx11::string::find((char)local_d0,0x3a);
  local_80 = 0;
  auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
  local_88 = auStack_78;
  if (lVar3 == -1) {
    if (local_a0 == (ulong *)0x0) goto LAB_00101996;
    puVar9 = (ulong *)0x0;
LAB_00101a00:
    local_c8 = &local_68;
    unaff_RBP = auStack_58;
    local_68 = unaff_RBP;
    std::__cxx11::string::_M_construct<char_const*>
              (local_c8,(undefined1 *)((long)local_a8 + (long)puVar9),
               (undefined1 *)((long)local_a0 + (long)local_a8));
    uVar4 = local_60;
    uVar6 = auStack_78[0];
    puVar7 = local_88;
    puVar9 = unaff_RBP;
    if (local_68 == unaff_RBP) {
      local_80 = local_60;
      if (local_60 != 0) {
        if (local_60 == 1) {
          *(undefined1 *)local_88 = (undefined1)auStack_58[0];
          local_80 = local_60;
        }
        else {
          uVar2 = (uint)local_60;
          uVar6 = local_60 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_60 & 4) == 0) {
              if ((uVar2 != 0) &&
                 (*(undefined1 *)local_88 = (undefined1)auStack_58[0], local_80 = local_60,
                 (uVar4 & 2) != 0)) {
                *(undefined2 *)((long)local_88 + (uVar6 - 2)) =
                     *(undefined2 *)((long)auStack_58 + (uVar6 - 2));
              }
            }
            else {
LAB_00101ceb:
              *(int *)puVar7 = (int)*unaff_RBP;
              *(undefined4 *)((long)puVar7 + (uVar6 - 4)) =
                   *(undefined4 *)((long)unaff_RBP + (uVar6 - 4));
              local_80 = local_60;
              puVar9 = unaff_RBP;
            }
          }
          else {
            *local_88 = auStack_58[0];
            uVar4 = uVar4 & 0xffffffff;
            *(undefined8 *)((long)local_88 + (uVar4 - 8)) =
                 *(undefined8 *)((long)auStack_58 + (uVar4 - 8));
            lVar3 = (long)local_88 - ((ulong)(local_88 + 1) & 0xfffffffffffffff8);
            uVar2 = (int)lVar3 + uVar2 & 0xfffffff8;
            local_80 = local_60;
            if (7 < uVar2) {
              uVar6 = 0;
              do {
                uVar8 = (int)uVar6 + 8;
                *(undefined8 *)(((ulong)(local_88 + 1) & 0xfffffffffffffff8) + uVar6) =
                     *(undefined8 *)((long)unaff_RBP + (uVar6 - lVar3));
                uVar6 = (ulong)uVar8;
              } while (uVar8 < uVar2);
            }
          }
        }
      }
      *(undefined1 *)((long)local_88 + local_80) = 0;
    }
    else {
      if (local_88 != auStack_78) {
        local_88 = local_68;
        local_80 = local_60;
        auStack_78[0] = auStack_58[0];
        if (puVar7 != (ulong *)0x0) {
          local_68 = puVar7;
          auStack_58[0] = uVar6;
          goto LAB_00101a67;
        }
      }
      auStack_78[0] = auStack_58[0];
      local_80 = local_60;
      local_88 = local_68;
      puVar9 = auStack_58;
      local_68 = unaff_RBP;
    }
LAB_00101a67:
    local_60 = 0;
    *(undefined1 *)local_68 = 0;
    if (local_68 != puVar9) {
      operator_delete(local_68,auStack_58[0] + 1);
    }
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
      _M_realloc_insert<std::__cxx11::string_const&>
                ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_1,plVar1
                 ,&local_88);
    }
    else {
      *plVar1 = (long)(plVar1 + 2);
      std::__cxx11::string::_M_construct<char*>
                (plVar1,local_88,(undefined1 *)(local_80 + (long)local_88));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
    }
  }
  else {
    puVar9 = (ulong *)0x0;
    do {
      if (local_a0 < puVar9) {
        puVar7 = local_a0;
        uVar6 = std::__throw_out_of_range_fmt
                          ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::substr",puVar9);
        goto LAB_00101ceb;
      }
      uVar6 = (long)local_a0 - (long)puVar9;
      if ((ulong)(lVar3 - (long)puVar9) < (ulong)((long)local_a0 - (long)puVar9)) {
        uVar6 = lVar3 - (long)puVar9;
      }
      local_68 = auStack_58;
      std::__cxx11::string::_M_construct<char_const*>
                (&local_68,(undefined1 *)((long)local_a8 + (long)puVar9),
                 (undefined1 *)((long)local_a8 + (long)puVar9) + uVar6);
      uVar4 = local_60;
      uVar6 = auStack_78[0];
      puVar9 = local_88;
      if (local_68 == auStack_58) {
        local_80 = local_60;
        if (local_60 != 0) {
          if (local_60 == 1) {
            *(undefined1 *)local_88 = (undefined1)auStack_58[0];
            local_80 = local_60;
            *(undefined1 *)((long)local_88 + local_60) = 0;
            goto LAB_00101898;
          }
          uVar2 = (uint)local_60;
          uVar6 = local_60 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_60 & 4) == 0) {
              if ((uVar2 != 0) &&
                 (*(undefined1 *)local_88 = (undefined1)auStack_58[0], local_80 = local_60,
                 (uVar4 & 2) != 0)) {
                *(undefined2 *)((long)local_88 + (uVar6 - 2)) =
                     *(undefined2 *)((long)auStack_58 + (uVar6 - 2));
              }
            }
            else {
              *(undefined4 *)local_88 = (undefined4)auStack_58[0];
              *(undefined4 *)((long)local_88 + (uVar6 - 4)) =
                   *(undefined4 *)((long)auStack_58 + (uVar6 - 4));
              local_80 = local_60;
            }
          }
          else {
            *local_88 = auStack_58[0];
            uVar4 = uVar4 & 0xffffffff;
            *(undefined8 *)((long)local_88 + (uVar4 - 8)) =
                 *(undefined8 *)((long)auStack_58 + (uVar4 - 8));
            lVar5 = (long)local_88 - ((ulong)(local_88 + 1) & 0xfffffffffffffff8);
            uVar2 = (int)lVar5 + uVar2 & 0xfffffff8;
            local_80 = local_60;
            if (7 < uVar2) {
              uVar6 = 0;
              do {
                uVar8 = (int)uVar6 + 8;
                *(undefined8 *)(((ulong)(local_88 + 1) & 0xfffffffffffffff8) + uVar6) =
                     *(undefined8 *)((long)auStack_58 + (uVar6 - lVar5));
                uVar6 = (ulong)uVar8;
              } while (uVar8 < uVar2);
            }
          }
        }
        *(undefined1 *)((long)local_88 + local_80) = 0;
      }
      else {
        if (local_88 != auStack_78) {
          local_88 = local_68;
          local_80 = local_60;
          auStack_78[0] = auStack_58[0];
          if (puVar9 != (ulong *)0x0) {
            local_68 = puVar9;
            auStack_58[0] = uVar6;
            goto LAB_00101898;
          }
        }
        auStack_78[0] = auStack_58[0];
        local_80 = local_60;
        local_88 = local_68;
        local_68 = auStack_58;
      }
LAB_00101898:
      unaff_RBP = auStack_58;
      local_60 = 0;
      *(undefined1 *)local_68 = 0;
      if (local_68 != unaff_RBP) {
        operator_delete(local_68,auStack_58[0] + 1);
      }
      plVar1 = *(long **)(param_1 + 8);
      if (plVar1 == *(long **)(param_1 + 0x10)) {
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string_const&>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_1,
                   plVar1,&local_88);
      }
      else {
        *plVar1 = (long)(plVar1 + 2);
        std::__cxx11::string::_M_construct<char*>
                  (plVar1,local_88,(undefined1 *)(local_80 + (long)local_88));
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar9 = (ulong *)(lVar3 + 1);
      lVar3 = std::__cxx11::string::find((char)local_d0,0x3a);
    } while (lVar3 != -1);
    if (puVar9 < local_a0) goto LAB_00101a00;
  }
  if (local_88 != auStack_78) {
    operator_delete(local_88,auStack_78[0] + 1);
  }
LAB_00101996:
  if (local_a8 != local_c0) {
    operator_delete(local_a8,(ulong)((long)local_98[0] + 1));
  }
  if (auStack_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ApiLayerInterface::GetInstanceExtensionProperties(std::__cxx11::string const&, char const*,
   std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties> >&) */

int ApiLayerInterface::GetInstanceExtensionProperties(string *param_1,char *param_2,vector *param_3)

{
  long lVar1;
  vector *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long in_FS_OFFSET;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *local_108;
  undefined1 local_e8 [16];
  long *local_d8;
  undefined1 local_c8 [16];
  long local_b8;
  undefined1 local_a8 [16];
  long local_98;
  long *local_88;
  long local_80;
  long local_78 [2];
  undefined5 *local_68;
  undefined8 local_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (long *)0x0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar6 = ApiLayerManifestFile::FindManifestFiles(param_1,2);
    if (-1 < iVar6) {
      local_b8 = 0;
      local_c8 = (undefined1  [16])0x0;
      AddEnvironmentApiLayers((vector *)local_c8);
      uVar3 = local_c8._0_8_;
      uVar4 = local_c8._8_8_;
      if (local_c8._0_8_ != local_c8._8_8_) {
        local_98 = 0;
        local_a8 = (undefined1  [16])0x0;
        iVar6 = ApiLayerManifestFile::FindManifestFiles
                          (param_1,3,
                           (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                            *)local_a8);
        if (-1 < iVar6) {
          uVar5 = local_a8._8_8_;
          for (plVar13 = (long *)local_a8._0_8_; (long *)uVar5 != plVar13; plVar13 = plVar13 + 1) {
            lVar11 = *plVar13;
            sVar8 = *(size_t *)(lVar11 + 0xb0);
            puVar12 = (undefined8 *)uVar3;
            do {
              if (puVar12[1] == sVar8) {
                if ((sVar8 == 0) ||
                   (iVar6 = memcmp((void *)*puVar12,*(void **)(lVar11 + 0xa8),sVar8), iVar6 == 0)) {
                  if ((long *)local_e8._8_8_ == local_d8) {
                    std::
                    vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                    ::
                    _M_realloc_insert<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>
                              ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                *)local_e8,local_e8._8_8_,plVar13);
                  }
                  else {
                    *(long *)local_e8._8_8_ = *plVar13;
                    *plVar13 = 0;
                    local_e8._8_8_ = (long *)(local_e8._8_8_ + 8);
                  }
                  break;
                }
              }
              puVar12 = puVar12 + 4;
            } while ((undefined8 *)uVar4 != puVar12);
          }
        }
        std::
        vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
        ::~vector((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_a8);
        puVar12 = (undefined8 *)uVar3;
        do {
          if ((undefined8 *)*puVar12 != puVar12 + 2) {
            operator_delete((undefined8 *)*puVar12,puVar12[2] + 1);
          }
          puVar12 = puVar12 + 4;
        } while ((undefined8 *)uVar4 != puVar12);
      }
      if ((undefined8 *)uVar3 != (undefined8 *)0x0) {
        operator_delete((void *)uVar3,local_b8 - uVar3);
      }
    }
    lVar11 = local_e8._8_8_ - local_e8._0_8_;
    if (local_e8._8_8_ != local_e8._0_8_) {
      uVar9 = 0;
      while( true ) {
        lVar1 = uVar9 * 8;
        uVar9 = uVar9 + 1;
        ManifestFile::GetInstanceExtensionProperties(*(vector **)(local_e8._0_8_ + lVar1));
        if ((ulong)(lVar11 >> 3) <= uVar9) break;
      }
    }
  }
  else {
    iVar6 = ApiLayerManifestFile::FindManifestFiles(param_1,2,local_e8);
    if (-1 < iVar6) {
      iVar6 = ApiLayerManifestFile::FindManifestFiles(param_1,3,local_e8);
      if (iVar6 < 0) {
        local_a8 = (undefined1  [16])0x0;
        local_98 = 0;
        local_c8._0_8_ = 0x61;
        local_88 = local_78;
        local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)local_c8);
        uVar3 = _LC2._8_8_;
        local_78[0] = local_c8._0_8_;
        *local_88 = _LC2._0_8_;
        local_88[1] = uVar3;
        uVar4 = _LC2._360_8_;
        uVar3 = _LC2._352_8_;
        *(char *)(local_88 + 0xc) = 's';
        local_88[2] = uVar3;
        local_88[3] = uVar4;
        uVar3 = _LC2._376_8_;
        local_88[4] = _LC2._368_8_;
        local_88[5] = uVar3;
        uVar3 = _LC2._392_8_;
        local_88[6] = _LC2._384_8_;
        local_88[7] = uVar3;
        uVar3 = _LC2._408_8_;
        local_88[8] = _LC2._400_8_;
        local_88[9] = uVar3;
        uVar3 = _LC2._424_8_;
        local_88[10] = _LC2._416_8_;
        local_88[0xb] = uVar3;
        local_80 = local_c8._0_8_;
        *(char *)((long)local_88 + local_c8._0_8_) = '\0';
        if ((LoaderLogger::GetInstance()::instance == '\0') &&
           (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
          LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
          __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                       &__dso_handle);
          __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
        }
        local_60 = 0xd;
        local_58 = 0x586e65704f;
        uStack_53 = 0x4c2d52;
        uStack_50 = 0x726564616f;
        local_4b = 0;
        local_68 = &local_58;
        LoaderLogger::LogMessage
                  (0x106280,0x1000,(string *)0x1,(string *)&local_68,param_1,(vector *)&local_88);
        if (local_68 != &local_58) {
          operator_delete(local_68,CONCAT35(uStack_53,local_58) + 1);
        }
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
        uVar3 = local_a8._8_8_;
        pvVar10 = (void *)local_a8._0_8_;
        if (local_a8._8_8_ != local_a8._0_8_) {
          do {
            if (*(void **)((long)pvVar10 + 0x10) != (void *)((long)pvVar10 + 0x20)) {
              operator_delete(*(void **)((long)pvVar10 + 0x10),*(long *)((long)pvVar10 + 0x20) + 1);
            }
            pvVar10 = (void *)((long)pvVar10 + 0x30);
          } while ((void *)uVar3 != pvVar10);
        }
        if ((void *)local_a8._0_8_ != (void *)0x0) {
          operator_delete((void *)local_a8._0_8_,local_98 - local_a8._0_8_);
        }
      }
      else {
        uVar3 = local_e8._0_8_;
        lVar11 = local_e8._8_8_ - local_e8._0_8_;
        if (local_e8._0_8_ != local_e8._8_8_) {
          uVar9 = 0;
          sVar8 = strlen(param_2);
          do {
            pvVar2 = *(vector **)(uVar3 + uVar9 * 8);
            if ((*(size_t *)(pvVar2 + 0xb0) == sVar8) &&
               ((sVar8 == 0 || (iVar6 = memcmp(*(void **)(pvVar2 + 0xa8),param_2,sVar8), iVar6 == 0)
                ))) {
              ManifestFile::GetInstanceExtensionProperties(pvVar2);
              goto LAB_00101dda;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)(lVar11 >> 3));
        }
        iVar6 = -0x24;
      }
      goto LAB_00101ddd;
    }
  }
LAB_00101dda:
  iVar6 = 0;
LAB_00101ddd:
  local_108 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
               *)local_e8;
  std::
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  ::~vector(local_108);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApiLayerInterface::LoadApiLayers(std::__cxx11::string const&, unsigned int, char const* const*,
   std::vector<std::unique_ptr<ApiLayerInterface, std::default_delete<ApiLayerInterface> >,
   std::allocator<std::unique_ptr<ApiLayerInterface, std::default_delete<ApiLayerInterface> > > >&)
    */

int ApiLayerInterface::LoadApiLayers(string *param_1,uint param_2,char **param_3,vector *param_4)

{
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar1;
  string *psVar2;
  undefined8 *puVar3;
  ApiLayerInterface *this;
  long lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  pointer_____offset_0x10___ puVar13;
  pointer_____offset_0x10___ puVar14;
  vector *pvVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  ostream *poVar21;
  ulong uVar22;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar23;
  char *__s;
  size_t __n;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar24;
  ulong *puVar25;
  ulong *__dest;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar26;
  uint uVar27;
  undefined **ppuVar28;
  _AllocNode *extraout_RDX;
  _AllocNode *extraout_RDX_00;
  long lVar29;
  size_t *psVar30;
  allocator *extraout_RDX_01;
  _AllocNode *extraout_RDX_02;
  _AllocNode *p_Var31;
  ulong uVar32;
  allocator *extraout_RDX_03;
  allocator *extraout_RDX_04;
  allocator *extraout_RDX_05;
  char cVar33;
  vector *pvVar34;
  void *pvVar35;
  vector *pvVar36;
  undefined8 *puVar37;
  uint uVar38;
  streambuf *psVar39;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar40;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar41;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *__s_00;
  undefined8 *puVar42;
  vector *pvVar43;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *pvVar44;
  vector *pvVar45;
  long in_FS_OFFSET;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *local_418;
  vector *local_408;
  vector *local_3e8;
  locale *local_3e0;
  undefined1 *local_3d8;
  ios_base *local_3d0;
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *local_360;
  undefined1 local_358 [16];
  long *local_348;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined1 local_318 [16];
  long local_308;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  long local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268 [2];
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  *local_258;
  long local_250;
  long local_248 [2];
  size_t *local_238;
  size_t local_230;
  size_t local_228 [2];
  long *local_218;
  long local_210;
  long local_208 [2];
  ulong *local_1f8;
  ulong local_1f0;
  ulong local_1e8 [2];
  char *local_1d8;
  long local_1d0;
  undefined5 local_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 local_1bb;
  code *local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar14 = PTR_vtable_00106588;
  puVar13 = PTR_vtable_00106580;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_290 = 1;
  local_288 = (undefined8 *)0x0;
  local_280 = 0;
  local_278 = 0x3f800000;
  local_270 = 0;
  local_268[0] = 0;
  local_348 = (long *)0x0;
  local_358 = (undefined1  [16])0x0;
  local_298 = local_268;
  iVar16 = ApiLayerManifestFile::FindManifestFiles
                     (param_1,2,
                      (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                       *)local_358);
  uVar11 = local_358._8_8_;
  p_Var31 = extraout_RDX;
  for (plVar19 = (long *)local_358._0_8_; (long *)uVar11 != plVar19; plVar19 = plVar19 + 1) {
    std::
    _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
    ::
    _M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>
              ((string *)&local_298,(string *)(*plVar19 + 0xa8),p_Var31);
    p_Var31 = extraout_RDX_00;
  }
  local_328 = 0;
  local_338 = (undefined1  [16])0x0;
  if (-1 < iVar16) {
    pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
               *)local_338;
    iVar16 = ApiLayerManifestFile::FindManifestFiles(param_1,3,pvVar23);
    if (-1 < iVar16) {
      local_308 = 0;
      local_318 = (undefined1  [16])0x0;
      AddEnvironmentApiLayers((vector *)local_318);
      if (param_2 == 0) {
LAB_00103e22:
        pvVar34 = (vector *)0x1;
        local_408 = (vector *)&local_298;
        ppuVar28 = (undefined **)local_318._0_8_;
        pvVar41 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_318._0_8_;
        pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_318._8_8_;
        local_418 = pvVar23;
        if (local_318._0_8_ == local_318._8_8_) goto LAB_00104663;
        goto LAB_00103e65;
      }
      if (param_3 != (char **)0x0) {
        std::
        __copy_move_a1<false,char_const*const*,std::back_insert_iterator<std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>>>
                  (param_3,param_3 + param_2,(vector *)local_318);
        goto LAB_00103e22;
      }
      local_2c8 = (undefined1  [16])0x0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_2b8._8_8_;
      local_2b8 = auVar9 << 0x40;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)local_1b8,
                 "VUID-XrInstanceCreateInfo-enabledApiLayerNames-parameter: enabledApiLayerCount is non-0 but array is NULL"
                 ,extraout_RDX_01);
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1d8,"xrCreateInstance",extraout_RDX_03);
      LoaderLogger::LogErrorMessage((string *)&local_1d8,(string *)local_1b8,(vector *)local_2c8);
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::_M_dispose();
      std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_2c8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_2b8._8_8_;
      local_2b8 = auVar10 << 0x40;
      local_2c8 = (undefined1  [16])0x0;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)local_1b8,
                 "VUID-xrCreateInstance-info-parameter: something wrong with XrInstanceCreateInfo contents"
                 ,extraout_RDX_04);
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1d8,"xrCreateInstance",extraout_RDX_05);
      LoaderLogger::LogErrorMessage((string *)&local_1d8,(string *)local_1b8,(vector *)local_2c8);
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::_M_dispose();
      std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_2c8);
      uVar11 = local_318._8_8_;
      for (puVar37 = (undefined8 *)local_318._0_8_; (undefined8 *)uVar11 != puVar37;
          puVar37 = puVar37 + 4) {
        if ((undefined8 *)*puVar37 != puVar37 + 2) {
          operator_delete((undefined8 *)*puVar37,puVar37[2] + 1);
        }
      }
      if ((void *)local_318._0_8_ != (void *)0x0) {
        operator_delete((void *)local_318._0_8_,local_308 - local_318._0_8_);
      }
      iVar16 = -1;
      goto LAB_0010309b;
    }
  }
  pvVar34 = (vector *)0x1;
  pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_338;
  pvVar41 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_358._8_8_;
  if (local_358._8_8_ != local_358._0_8_) {
LAB_00102412:
    bVar6 = false;
    iVar16 = 0;
    cVar33 = (char)pvVar34;
    local_418 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                 *)local_358._0_8_;
    do {
      lVar18 = dlopen(*(undefined8 *)(*(long *)local_418 + 0x28),1);
      if (lVar18 == 0) {
        iVar17 = -0x20;
        if (bVar6) {
          iVar17 = iVar16;
        }
        __s = (char *)dlerror();
        local_238 = local_228;
        if (__s == (char *)0x0) {
          std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00104856:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::reserve");
        }
        __n = strlen(__s);
        local_2c8._0_8_ = __n;
        if (__n < 0x10) {
          psVar30 = local_228;
          if (__n == 1) {
            local_228[0] = CONCAT71(local_228[0]._1_7_,*__s);
          }
          else if (__n != 0) goto LAB_00103c38;
        }
        else {
          local_238 = (size_t *)
                      std::__cxx11::string::_M_create((ulong *)&local_238,(ulong)local_2c8);
          local_228[0] = local_2c8._0_8_;
          psVar30 = local_238;
LAB_00103c38:
          memcpy(psVar30,__s,__n);
          __n = local_2c8._0_8_;
          psVar30 = local_238;
        }
        *(undefined1 *)((long)psVar30 + __n) = 0;
        local_2c8._0_8_ = 0x30;
        local_230 = __n;
        local_1f8 = local_1e8;
        local_1f8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_1f8,(ulong)local_2c8);
        uVar11 = _LC2._8_8_;
        local_1e8[0] = local_2c8._0_8_;
        *local_1f8 = _LC2._0_8_;
        local_1f8[1] = uVar11;
        uVar22 = _UNK_00106528;
        local_1f8[2] = __LC56;
        local_1f8[3] = uVar22;
        uVar22 = _UNK_00106548;
        local_1f8[4] = __LC58;
        local_1f8[5] = uVar22;
        local_1f0 = local_2c8._0_8_;
        *(char *)((long)local_1f8 + local_2c8._0_8_) = '\0';
        if ((((0x3fffffffffffffff - local_2c8._0_8_ < *(ulong *)(*(long *)local_418 + 0xb0)) ||
             (std::__cxx11::string::_M_append
                        ((char *)&local_1f8,*(ulong *)(*(long *)local_418 + 0xa8)),
             0x3fffffffffffffff - local_1f0 < 0x1f)) ||
            (std::__cxx11::string::_M_append((char *)&local_1f8,0x104a30),
            0x3fffffffffffffff - local_1f0 < local_230)) ||
           (std::__cxx11::string::_M_append((char *)&local_1f8,(ulong)local_238),
           local_1f0 == 0x3fffffffffffffff)) goto LAB_00104707;
        std::__cxx11::string::_M_append((char *)&local_1f8,0x104b9f);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_2b8._8_8_;
        local_2b8 = auVar5 << 0x40;
        local_2c8 = (undefined1  [16])0x0;
        if (LoaderLogger::GetInstance()::instance == '\0') {
          iVar16 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance);
          if (iVar16 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
        }
        local_1a8._5_8_ = 0x726564616f4c2d52;
        local_1a8._0_5_ = 0x586e65704f;
        local_1b8[1] = (code *)0xd;
        local_1a8[0xd] = 0;
        local_1b8[0] = (code *)local_1a8;
        LoaderLogger::LogMessage
                  (0x106280,0x100,(string *)0x1,(string *)local_1b8,param_1,(vector *)&local_1f8);
        if (local_1b8[0] != (code *)local_1a8) {
          operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
        }
        uVar11 = local_2c8._8_8_;
        pvVar35 = (void *)local_2c8._0_8_;
        if (local_2c8._8_8_ != local_2c8._0_8_) {
          do {
            if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
              operator_delete(*(void **)((long)pvVar35 + 0x10),*(long *)((long)pvVar35 + 0x20) + 1);
            }
            pvVar35 = (void *)((long)pvVar35 + 0x30);
          } while ((void *)uVar11 != pvVar35);
        }
        if ((void *)local_2c8._0_8_ != (void *)0x0) {
          operator_delete((void *)local_2c8._0_8_,local_2b8._0_8_ - local_2c8._0_8_);
        }
        if (local_1f8 != local_1e8) {
          operator_delete(local_1f8,local_1e8[0] + 1);
        }
        iVar16 = iVar17;
        if (local_238 != local_228) {
          operator_delete(local_238,local_228[0] + 1);
        }
      }
      else {
        psVar2 = *(string **)local_418;
        local_2c8._0_8_ = 0x22;
        local_1b8[0] = (code *)local_1a8;
        local_1b8[0] = (code *)std::__cxx11::string::_M_create((ulong *)local_1b8,(ulong)local_2c8);
        uVar11 = _UNK_00106558;
        local_1a8._0_8_ = local_2c8._0_8_;
        *(undefined8 *)local_1b8[0] = __LC59;
        *(undefined8 *)(local_1b8[0] + 8) = uVar11;
        uVar12 = _UNK_00106568;
        uVar11 = __LC60;
        *(undefined2 *)(local_1b8[0] + 0x20) = 0x6563;
        *(undefined8 *)(local_1b8[0] + 0x10) = uVar11;
        *(undefined8 *)(local_1b8[0] + 0x18) = uVar12;
        local_1b8[1] = (code *)local_2c8._0_8_;
        local_1b8[0][local_2c8._0_8_] = (code)0x0;
        plVar19 = (long *)ManifestFile::GetFunctionName(psVar2);
        local_218 = local_208;
        std::__cxx11::string::_M_construct<char*>(&local_218,*plVar19,plVar19[1] + *plVar19);
        if (local_1b8[0] != (code *)local_1a8) {
          operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
        }
        pcVar20 = (code *)dlsym(lVar18,local_218);
        if (pcVar20 == (code *)0x0) {
          std::ios_base::ios_base((ios_base *)local_148);
          uVar11 = _init;
          pcVar20 = _vtable;
          local_68 = 0;
          local_60 = (undefined1  [16])0x0;
          local_50 = (undefined1  [16])0x0;
          local_148[0] = std::locale::locale;
          psVar39 = (streambuf *)((ostream *)local_1b8 + *(long *)(_vtable + -0x18));
          local_1b8[0] = _vtable;
          local_70 = 0;
          *(undefined8 *)psVar39 = _init;
          std::ios::init(psVar39);
          local_148[0] = std::locale::locale;
          local_1a8 = (undefined1  [16])0x0;
          local_198 = (undefined1  [16])0x0;
          local_188 = (undefined1  [16])0x0;
          local_1b8[0] = dlsym;
          local_1b8[1] = (code *)puVar14;
          std::locale::locale(local_178);
          local_1b8[1] = std::ostream::_M_insert<unsigned_long>;
          local_168 = &local_158;
          local_170 = 0x10;
          local_160 = 0;
          local_158 = 0;
          std::ios::init((streambuf *)local_148);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_1b8,"ApiLayerInterface::LoadApiLayers skipping layer ",0x30);
          poVar21 = std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)local_1b8,*(char **)(*(long *)local_418 + 0xa8),
                               *(long *)(*(long *)local_418 + 0xb0));
          std::__ostream_insert<char,std::char_traits<char>>
                    (poVar21," because negotiation function ",0x1e);
          poVar21 = std::__ostream_insert<char,std::char_traits<char>>
                              (poVar21,(char *)local_218,local_210);
          std::__ostream_insert<char,std::char_traits<char>>(poVar21," was not found",0xe);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_2b8._8_8_;
          local_2b8 = auVar8 << 0x40;
          local_1f0 = 0;
          local_1e8[0] = local_1e8[0] & 0xffffffffffffff00;
          local_2c8 = (undefined1  [16])0x0;
          local_1f8 = local_1e8;
          if (local_188._0_8_ == 0) {
            std::__cxx11::string::_M_assign((string *)&local_1f8);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)&local_1f8,0,(char *)0x0,local_198._8_8_);
          }
          local_3d0 = (ios_base *)local_148;
          local_3d8 = &local_158;
          local_3e0 = local_178;
          if ((LoaderLogger::GetInstance()::instance == '\0') &&
             (iVar16 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar16 != 0)) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
          local_1d0 = 0xd;
          local_1c8 = 0x586e65704f;
          uStack_1c3 = 0x4c2d52;
          uStack_1c0 = 0x726564616f;
          local_1bb = 0;
          local_1d8 = (char *)&local_1c8;
          LoaderLogger::LogMessage
                    (0x106280,0x1000,(string *)0x1,(string *)&local_1d8,param_1,(vector *)&local_1f8
                    );
          if (local_1d8 != (char *)&local_1c8) {
            operator_delete(local_1d8,CONCAT35(uStack_1c3,local_1c8) + 1);
          }
          if (local_1f8 != local_1e8) {
            operator_delete(local_1f8,local_1e8[0] + 1);
          }
          uVar12 = local_2c8._8_8_;
          pvVar35 = (void *)local_2c8._0_8_;
          if (local_2c8._8_8_ != local_2c8._0_8_) {
            do {
              if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
                operator_delete(*(void **)((long)pvVar35 + 0x10),*(long *)((long)pvVar35 + 0x20) + 1
                               );
              }
              pvVar35 = (void *)((long)pvVar35 + 0x30);
            } while ((void *)uVar12 != pvVar35);
          }
          if ((void *)local_2c8._0_8_ != (void *)0x0) {
            operator_delete((void *)local_2c8._0_8_,local_2b8._0_8_ - local_2c8._0_8_);
          }
          dlclose(lVar18);
          local_148[0] = std::locale::locale;
          local_1b8[0] = dlsym;
          local_1b8[1] = (code *)puVar13;
          if (local_168 != local_3d8) {
            operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
          }
          local_1b8[1] = std::ios_base::~ios_base;
          std::locale::~locale(local_3e0);
          local_1b8[0] = pcVar20;
          *(undefined8 *)((long)local_1b8 + *(long *)(pcVar20 + -0x18)) = uVar11;
          local_148[0] = std::locale::locale;
          std::ios_base::~ios_base(local_3d0);
          iVar16 = -0x24;
        }
        else {
          local_2f0 = 0x28;
          local_2f8 = _LC45;
          local_2c8._8_8_ = 0x30;
          local_2c8._0_8_ = _LC47;
          local_2e8 = _LC45;
          local_2e0 = ram0x00106510;
          uStack_2d8 = _UNK_00106518;
          local_2b8 = (undefined1  [16])0x0;
          local_2a8 = (undefined1  [16])0x0;
          iVar17 = (*pcVar20)(&local_2f8,*(undefined8 *)(*(long *)local_418 + 0xa8),local_2c8);
          if (-1 < iVar17) {
            if (local_2a8._0_8_ != 0) {
              std::ios_base::ios_base((ios_base *)local_148);
              uVar11 = _init;
              pcVar20 = _vtable;
              local_60 = (undefined1  [16])0x0;
              local_68 = 0;
              local_50 = (undefined1  [16])0x0;
              local_148[0] = std::locale::locale;
              psVar39 = (streambuf *)((ostream *)local_1b8 + *(long *)(_vtable + -0x18));
              local_1b8[0] = _vtable;
              local_70 = 0;
              *(undefined8 *)psVar39 = _init;
              std::ios::init(psVar39);
              local_148[0] = std::locale::locale;
              local_1a8 = (undefined1  [16])0x0;
              local_198 = (undefined1  [16])0x0;
              local_188 = (undefined1  [16])0x0;
              local_1b8[0] = dlsym;
              local_1b8[1] = (code *)puVar14;
              std::locale::locale(local_178);
              local_1b8[1] = std::ostream::_M_insert<unsigned_long>;
              local_170 = 0x10;
              local_160 = 0;
              local_158 = 0;
              local_168 = &local_158;
              std::ios::init((streambuf *)local_148);
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)local_1b8,
                         "ApiLayerInterface::LoadApiLayers succeeded loading layer ",0x39);
              poVar21 = std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)local_1b8,*(char **)(*(long *)local_418 + 0xa8),
                                   *(long *)(*(long *)local_418 + 0xb0));
              std::__ostream_insert<char,std::char_traits<char>>
                        (poVar21," using interface version ",0x19);
              poVar21 = std::ostream::_M_insert<unsigned_long>((ulong)poVar21);
              std::__ostream_insert<char,std::char_traits<char>>
                        (poVar21," and OpenXR API version ",0x18);
              poVar21 = std::ostream::_M_insert<unsigned_long>((ulong)poVar21);
              std::__ostream_insert<char,std::char_traits<char>>(poVar21,".",1);
              std::ostream::_M_insert<unsigned_long>((ulong)poVar21);
              local_308 = 0;
              local_1f0 = 0;
              local_1e8[0] = local_1e8[0] & 0xffffffffffffff00;
              local_318 = (undefined1  [16])0x0;
              local_1f8 = local_1e8;
              if (local_188._0_8_ == 0) {
                std::__cxx11::string::_M_assign((string *)&local_1f8);
              }
              else {
                std::__cxx11::string::_M_replace((ulong)&local_1f8,0,(char *)0x0,local_198._8_8_);
              }
              if ((LoaderLogger::GetInstance()::instance == '\0') &&
                 (iVar16 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar16 != 0)
                 ) {
                LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
                __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                             &__dso_handle);
                __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
              }
              local_1d0 = 0xd;
              local_1c8 = 0x586e65704f;
              uStack_1c3 = 0x4c2d52;
              uStack_1c0 = 0x726564616f;
              local_1bb = 0;
              local_1d8 = (char *)&local_1c8;
              LoaderLogger::LogMessage
                        (0x106280,0x10,(string *)0x1,(string *)&local_1d8,param_1,
                         (vector *)&local_1f8);
              if (local_1d8 != (char *)&local_1c8) {
                operator_delete(local_1d8,CONCAT35(uStack_1c3,local_1c8) + 1);
              }
              if (local_1f8 != local_1e8) {
                operator_delete(local_1f8,local_1e8[0] + 1);
              }
              uVar12 = local_318._8_8_;
              pvVar35 = (void *)local_318._0_8_;
              if (local_318._8_8_ != local_318._0_8_) {
                do {
                  if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
                    operator_delete(*(void **)((long)pvVar35 + 0x10),
                                    *(long *)((long)pvVar35 + 0x20) + 1);
                  }
                  pvVar35 = (void *)((long)pvVar35 + 0x30);
                } while ((void *)uVar12 != pvVar35);
              }
              if ((void *)local_318._0_8_ != (void *)0x0) {
                operator_delete((void *)local_318._0_8_,local_308 - local_318._0_8_);
              }
              local_148[0] = std::locale::locale;
              local_1b8[0] = dlsym;
              local_1b8[1] = (code *)puVar13;
              if (local_168 != &local_158) {
                operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
              }
              local_1b8[1] = std::ios_base::~ios_base;
              std::locale::~locale(local_178);
              local_1b8[0] = pcVar20;
              *(undefined8 *)((long)local_1b8 + *(long *)(pcVar20 + -0x18)) = uVar11;
              local_148[0] = std::locale::locale;
              std::ios_base::~ios_base((ios_base *)local_148);
              local_308 = 0;
              local_318 = (undefined1  [16])0x0;
              ManifestFile::GetInstanceExtensionProperties(*(vector **)local_418);
              lVar29 = local_318._8_8_ - local_318._0_8_;
              if (lVar29 < 0) goto LAB_00104856;
              local_408 = (vector *)0x0;
              pvVar34 = (vector *)0x0;
              pvVar24 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                         *)local_318._8_8_;
              if (lVar29 != 0) {
                uVar22 = (lVar29 >> 3) * -0x286bca1af286bca0;
                pvVar34 = (vector *)operator_new(uVar22);
                local_408 = pvVar34 + uVar22;
                pvVar24 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                           *)local_318._8_8_;
              }
              pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                         *)(local_318._0_8_ + 0x10);
              pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                         *)0x0;
              pvVar36 = pvVar34;
              __s_00 = pvVar44;
              pvVar43 = local_408;
              local_3e8 = pvVar34;
              pvVar45 = pvVar34;
              if (pvVar24 !=
                  (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_318._0_8_) {
                do {
                  if (pvVar43 == pvVar45) {
                    pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                               *)(pvVar43 + -(long)pvVar36);
                    uVar22 = (long)pvVar44 >> 5;
                    if (uVar22 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    if (pvVar43 == pvVar36) {
                      if (0xfffffffffffffffe < uVar22) goto LAB_00103b28;
                      uVar32 = 0x3ffffffffffffff;
                      if (uVar22 + 1 < 0x400000000000000) {
                        uVar32 = uVar22 + 1;
                      }
                      uVar32 = uVar32 << 5;
LAB_00103415:
                      pvVar34 = (vector *)operator_new(uVar32);
                      pvVar44 = pvVar44 + (long)pvVar34;
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)pvVar44 = pvVar44 + 0x10;
                      local_408 = pvVar34 + uVar32;
                      local_3e8 = pvVar34 + 0x20;
                    }
                    else {
                      uVar32 = uVar22 * 2;
                      if (uVar32 < uVar22) {
LAB_00103b28:
                        uVar32 = 0x7fffffffffffffe0;
                        goto LAB_00103415;
                      }
                      if (uVar32 != 0) {
                        if (0x3ffffffffffffff < uVar32) {
                          uVar32 = 0x3ffffffffffffff;
                        }
                        uVar32 = uVar32 << 5;
                        goto LAB_00103415;
                      }
                      local_3e8 = (vector *)0x20;
                      pvVar34 = (vector *)0x0;
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)pvVar44 = pvVar44 + 0x10;
                      local_408 = (vector *)0x0;
                    }
                    pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                               *)strlen((char *)__s_00);
                    local_360 = pvVar23;
                    if (pvVar23 < (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                   *)0x10) {
                      pvVar26 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                  **)pvVar44;
                      if (pvVar23 !=
                          (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                           *)0x1) {
                        if (pvVar23 !=
                            (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                             *)0x0) goto LAB_001034ae;
                        goto LAB_00102b6c;
                      }
                      *pvVar26 = *__s_00;
                      *(undefined **)(pvVar44 + 8) = (undefined *)0x1;
                      (*(undefined **)pvVar44)[1] = 0;
                    }
                    else {
                      pvVar26 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 *)std::__cxx11::string::_M_create
                                             ((ulong *)pvVar44,(ulong)&local_360);
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)pvVar44 = pvVar26;
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)(pvVar44 + 0x10) = local_360;
LAB_001034ae:
                      memcpy(pvVar26,__s_00,(size_t)pvVar23);
                      pvVar26 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                  **)pvVar44;
LAB_00102b6c:
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)(pvVar44 + 8) = local_360;
                      pvVar26[(long)local_360] =
                           (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                            )0x0;
                    }
                    if (pvVar45 != pvVar36) {
                      pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 *)(pvVar36 + 0x10);
                      pvVar15 = pvVar34;
                      do {
                        local_3e8 = pvVar15;
                        pvVar26 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                   *)(local_3e8 + 0x10);
                        pvVar40 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                    **)(pvVar23 + -8);
                        *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                          **)local_3e8 = pvVar26;
                        if (*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                              **)(pvVar23 + -0x10) == pvVar23) {
                          pvVar1 = pvVar40 + 1;
                          uVar27 = (uint)pvVar1;
                          if (uVar27 < 8) {
                            if (((ulong)pvVar1 & 4) == 0) {
                              if (uVar27 != 0) {
                                *pvVar26 = *pvVar23;
                                if (((ulong)pvVar1 & 2) == 0) goto LAB_00102be8;
                                *(undefined2 *)(local_3e8 + ((ulong)pvVar1 & 0xffffffff) + 0xe) =
                                     *(undefined2 *)(pvVar23 + (((ulong)pvVar1 & 0xffffffff) - 2));
                                pvVar40 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                            **)(pvVar23 + -8);
                              }
                            }
                            else {
                              *(undefined4 *)pvVar26 = *(undefined4 *)pvVar23;
                              *(undefined4 *)(local_3e8 + ((ulong)pvVar1 & 0xffffffff) + 0xc) =
                                   *(undefined4 *)(pvVar23 + (((ulong)pvVar1 & 0xffffffff) - 4));
                              pvVar40 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                          **)(pvVar23 + -8);
                            }
                          }
                          else {
                            *(ulong *)pvVar26 = *(ulong *)pvVar23;
                            *(undefined8 *)(local_3e8 + ((ulong)pvVar1 & 0xffffffff) + 8) =
                                 *(undefined8 *)(pvVar23 + (((ulong)pvVar1 & 0xffffffff) - 8));
                            lVar29 = (long)pvVar26 -
                                     ((ulong)(local_3e8 + 0x18) & 0xfffffffffffffff8);
                            uVar27 = uVar27 + (int)lVar29 & 0xfffffff8;
                            if (7 < uVar27) {
                              uVar38 = 0;
                              do {
                                uVar22 = (ulong)uVar38;
                                uVar38 = uVar38 + 8;
                                *(undefined8 *)
                                 (((ulong)(local_3e8 + 0x18) & 0xfffffffffffffff8) + uVar22) =
                                     *(undefined8 *)(pvVar23 + (uVar22 - lVar29));
                              } while (uVar38 < uVar27);
                            }
LAB_00102be8:
                            pvVar40 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                        **)(pvVar23 + -8);
                          }
                        }
                        else {
                          *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                            **)local_3e8 =
                               *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 **)(pvVar23 + -0x10);
                          *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                            **)(local_3e8 + 0x10) =
                               *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 **)pvVar23;
                        }
                        *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                          **)(local_3e8 + 8) = pvVar40;
                        pvVar23 = pvVar23 + 0x20;
                        pvVar15 = local_3e8 + 0x20;
                      } while (local_3e8 + 0x20 != pvVar34 + ((long)pvVar45 - (long)pvVar36));
                      local_3e8 = local_3e8 + 0x40;
                    }
                    if (pvVar36 != (vector *)0x0) {
                      operator_delete(pvVar36,(long)pvVar43 - (long)pvVar36);
                    }
                  }
                  else {
                    pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                               *)(pvVar45 + 0x10);
                    *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                      **)pvVar45 = pvVar44;
                    pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                               *)strlen((char *)__s_00);
                    local_360 = pvVar23;
                    if (pvVar23 < (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                   *)0x10) {
                      if (pvVar23 ==
                          (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                           *)0x1) {
                        *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                          *)(pvVar45 + 0x10) = *__s_00;
                      }
                      else if (pvVar23 !=
                               (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                *)0x0) goto LAB_00102c54;
                    }
                    else {
                      pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 *)std::__cxx11::string::_M_create
                                             ((ulong *)pvVar45,(ulong)&local_360);
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)pvVar45 = pvVar44;
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        **)(pvVar45 + 0x10) = local_360;
LAB_00102c54:
                      memcpy(pvVar44,__s_00,(size_t)pvVar23);
                      pvVar44 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                  **)pvVar45;
                    }
                    *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                      **)(pvVar45 + 8) = local_360;
                    local_3e8 = pvVar45 + 0x20;
                    pvVar44[(long)local_360] =
                         (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                          )0x0;
                    pvVar34 = pvVar36;
                    local_408 = pvVar43;
                  }
                  pvVar23 = __s_00 + 0x88;
                  pvVar36 = pvVar34;
                  __s_00 = __s_00 + 0x98;
                  pvVar43 = local_408;
                  pvVar45 = local_3e8;
                } while (pvVar24 != pvVar23);
                pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                           *)(local_3e8 + -(long)pvVar34);
              }
              pvVar24 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                         *)operator_new(0x58);
              ppuVar28 = &PTR__ApiLayerInterface_00106258;
              uVar11 = local_2a8._0_8_;
              uVar12 = local_2a8._8_8_;
              lVar29 = *(long *)local_418;
              *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                **)(pvVar24 + 8) = pvVar24 + 0x18;
              *(undefined ***)pvVar24 = &PTR__ApiLayerInterface_00106258;
              lVar4 = *(long *)(lVar29 + 0xa8);
              std::__cxx11::string::_M_construct<char*>
                        (pvVar24 + 8,lVar4,*(long *)(lVar29 + 0xb0) + lVar4);
              *(undefined8 *)(pvVar24 + 0x30) = uVar11;
              *(undefined8 *)(pvVar24 + 0x38) = uVar12;
              *(long *)(pvVar24 + 0x28) = lVar18;
              *(undefined8 *)(pvVar24 + 0x50) = 0;
              *(undefined1 (*) [16])(pvVar24 + 0x40) = (undefined1  [16])0x0;
              if (pvVar23 ==
                  (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)0x0) {
                puVar25 = (ulong *)0x0;
              }
              else {
                if ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                     *)0x7fffffffffffffe0 < pvVar23) goto LAB_00104659;
                puVar25 = (ulong *)operator_new((ulong)pvVar23);
              }
              *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                **)(pvVar24 + 0x50) = pvVar23 + (long)puVar25;
              *(ulong **)(pvVar24 + 0x40) = puVar25;
              *(ulong **)(pvVar24 + 0x48) = puVar25;
              if (local_3e8 != pvVar34) {
                pvVar36 = pvVar34;
                do {
                  pvVar23 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                              **)(pvVar36 + 8);
                  __dest = puVar25 + 2;
                  pvVar44 = *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                              **)pvVar36;
                  *puVar25 = (ulong)__dest;
                  local_360 = pvVar23;
                  if (pvVar23 < (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                 *)0x10) {
                    if (pvVar23 ==
                        (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                         *)0x1) {
                      *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        *)(puVar25 + 2) = *pvVar44;
                    }
                    else if (pvVar23 !=
                             (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                              *)0x0) goto LAB_001032db;
                  }
                  else {
                    __dest = (ulong *)std::__cxx11::string::_M_create(puVar25,(ulong)&local_360);
                    *puVar25 = (ulong)__dest;
                    puVar25[2] = (ulong)local_360;
LAB_001032db:
                    memcpy(__dest,pvVar44,(size_t)pvVar23);
                    __dest = (ulong *)*puVar25;
                    pvVar23 = local_360;
                  }
                  pvVar36 = pvVar36 + 0x20;
                  puVar25[1] = (ulong)pvVar23;
                  puVar25 = puVar25 + 4;
                  *(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                    *)((long)__dest + (long)pvVar23) =
                       (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                        )0x0;
                } while (local_3e8 != pvVar36);
              }
              *(ulong **)(pvVar24 + 0x48) = puVar25;
              puVar37 = *(undefined8 **)(param_4 + 8);
              local_360 = pvVar24;
              if (puVar37 == *(undefined8 **)(param_4 + 0x10)) {
                std::
                vector<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>,std::allocator<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>>>
                ::_M_realloc_insert<ApiLayerInterface*>
                          ((vector<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>,std::allocator<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>>>
                            *)param_4,puVar37,&local_360);
              }
              else {
                *puVar37 = pvVar24;
                *(undefined8 **)(param_4 + 8) = puVar37 + 1;
              }
              pvVar36 = pvVar34;
              if ((void *)local_318._0_8_ != (void *)0x0) {
                operator_delete((void *)local_318._0_8_,local_308 - local_318._0_8_);
              }
              for (; local_3e8 != pvVar36; pvVar36 = pvVar36 + 0x20) {
                if (*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                      **)pvVar36 !=
                    (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                     *)(pvVar36 + 0x10)) {
                  operator_delete(*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                    **)pvVar36,
                                  (ulong)(*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                            **)(pvVar36 + 0x10) + 1));
                }
              }
              if (pvVar34 != (vector *)0x0) {
                operator_delete(pvVar34,(long)local_408 - (long)pvVar34);
              }
              if (local_218 != local_208) {
                operator_delete(local_218,local_208[0] + 1);
              }
              bVar6 = true;
              iVar16 = 0;
              goto LAB_00102ff4;
            }
            local_318._0_8_ = 0x30;
            local_1d8 = (char *)&local_1c8;
            local_1d8 = (char *)std::__cxx11::string::_M_create
                                          ((ulong *)&local_1d8,(ulong)local_318);
            uVar11 = _LC2._8_8_;
            local_1c8 = local_318._0_5_;
            uStack_1c3 = local_318._5_3_;
            *(undefined8 *)local_1d8 = _LC2._0_8_;
            *(undefined8 *)(local_1d8 + 8) = uVar11;
            uVar22 = _UNK_00106528;
            *(ulong *)(local_1d8 + 0x10) = __LC56;
            *(ulong *)(local_1d8 + 0x18) = uVar22;
            uVar22 = _UNK_00106548;
            *(ulong *)(local_1d8 + 0x20) = __LC58;
            *(ulong *)(local_1d8 + 0x28) = uVar22;
            local_1d0 = local_318._0_8_;
            local_1d8[local_318._0_8_] = '\0';
            if ((0x3fffffffffffffff - local_318._0_8_ < *(ulong *)(*(long *)local_418 + 0xb0)) ||
               (std::__cxx11::string::_M_append
                          ((char *)&local_1d8,*(ulong *)(*(long *)local_418 + 0xa8)),
               0x3fffffffffffffffU - local_1d0 < 0x38)) {
LAB_00104707:
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::append");
            }
            std::__cxx11::string::_M_append((char *)&local_1d8,0x104aa8);
            local_308 = 0;
            local_318 = (undefined1  [16])0x0;
            if ((LoaderLogger::GetInstance()::instance == '\0') &&
               (iVar17 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar17 != 0))
            {
              LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
              __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                           &__dso_handle);
              __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
            }
            local_1a8._5_8_ = 0x726564616f4c2d52;
            local_1a8._0_5_ = 0x586e65704f;
            local_1a8._13_3_ = 0x4c2d52;
            local_1b8[1] = (code *)0xd;
            local_1b8[0] = (code *)local_1a8;
            LoaderLogger::LogMessage
                      (0x106280,0x100,(string *)0x1,(string *)local_1b8,param_1,(vector *)&local_1d8
                      );
            if (local_1b8[0] != (code *)local_1a8) {
              operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
            }
            uVar11 = local_318._8_8_;
            pvVar35 = (void *)local_318._0_8_;
            if (local_318._8_8_ != local_318._0_8_) {
              do {
                if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
                  operator_delete(*(void **)((long)pvVar35 + 0x10),
                                  *(long *)((long)pvVar35 + 0x20) + 1);
                }
                pvVar35 = (void *)((long)pvVar35 + 0x30);
              } while ((void *)uVar11 != pvVar35);
            }
            if ((void *)local_318._0_8_ != (void *)0x0) {
              operator_delete((void *)local_318._0_8_,local_308 - local_318._0_8_);
            }
            if (local_1d8 != (char *)&local_1c8) {
              operator_delete(local_1d8,CONCAT35(uStack_1c3,local_1c8) + 1);
            }
            iVar17 = -0x21;
          }
          if (!bVar6) {
            iVar16 = iVar17;
          }
          std::ios_base::ios_base((ios_base *)local_148);
          local_148[0] = std::locale::locale;
          local_68 = 0;
          local_60 = (undefined1  [16])0x0;
          local_50 = (undefined1  [16])0x0;
          local_1b8[0] = _vtable;
          local_70 = 0;
          psVar39 = (streambuf *)((ostream *)local_1b8 + *(long *)(_vtable + -0x18));
          *(undefined8 *)psVar39 = _init;
          std::ios::init(psVar39);
          local_148[0] = std::locale::locale;
          local_1a8 = (undefined1  [16])0x0;
          local_198 = (undefined1  [16])0x0;
          local_188 = (undefined1  [16])0x0;
          local_1b8[0] = dlsym;
          local_1b8[1] = (code *)puVar14;
          std::locale::locale(local_178);
          local_1b8[1] = std::ostream::_M_insert<unsigned_long>;
          local_170 = 0x10;
          local_160 = 0;
          local_158 = 0;
          local_168 = &local_158;
          std::ios::init((streambuf *)local_148);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_1b8,"ApiLayerInterface::LoadApiLayers skipping layer ",0x30);
          poVar21 = std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)local_1b8,*(char **)(*(long *)local_418 + 0xa8),
                               *(long *)(*(long *)local_418 + 0xb0));
          std::__ostream_insert<char,std::char_traits<char>>
                    (poVar21," due to failed negotiation with error ",0x26);
          std::ostream::operator<<(poVar21,iVar17);
          local_308 = 0;
          local_1f0 = 0;
          local_1e8[0] = local_1e8[0] & 0xffffffffffffff00;
          local_318 = (undefined1  [16])0x0;
          local_1f8 = local_1e8;
          if (local_188._0_8_ == 0) {
            std::__cxx11::string::_M_assign((string *)&local_1f8);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)&local_1f8,0,(char *)0x0,local_198._8_8_);
          }
          if ((LoaderLogger::GetInstance()::instance == '\0') &&
             (iVar17 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar17 != 0)) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
          local_1c8 = 0x586e65704f;
          uStack_1c3 = 0x4c2d52;
          uStack_1c0 = 0x726564616f;
          local_1d0 = 0xd;
          local_1bb = 0;
          local_1d8 = (char *)&local_1c8;
          LoaderLogger::LogMessage
                    (0x106280,0x100,(string *)0x1,(string *)&local_1d8,param_1,(vector *)&local_1f8)
          ;
          if (local_1d8 != (char *)&local_1c8) {
            operator_delete(local_1d8,CONCAT35(uStack_1c3,local_1c8) + 1);
          }
          if (local_1f8 != local_1e8) {
            operator_delete(local_1f8,local_1e8[0] + 1);
          }
          uVar11 = local_318._8_8_;
          pvVar35 = (void *)local_318._0_8_;
          if (local_318._8_8_ != local_318._0_8_) {
            do {
              if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
                operator_delete(*(void **)((long)pvVar35 + 0x10),*(long *)((long)pvVar35 + 0x20) + 1
                               );
              }
              pvVar35 = (void *)((long)pvVar35 + 0x30);
            } while ((void *)uVar11 != pvVar35);
          }
          if ((void *)local_318._0_8_ != (void *)0x0) {
            operator_delete((void *)local_318._0_8_,local_308 - local_318._0_8_);
          }
          dlclose(lVar18);
          local_148[0] = std::locale::locale;
          local_1b8[0] = dlsym;
          local_1b8[1] = (code *)puVar13;
          if (local_168 != &local_158) {
            operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
          }
          local_1b8[1] = std::ios_base::~ios_base;
          std::locale::~locale(local_178);
          local_1b8[0] = _vtable;
          *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
          local_148[0] = std::locale::locale;
          std::ios_base::~ios_base((ios_base *)local_148);
        }
        if (local_218 != local_208) {
          operator_delete(local_218,local_208[0] + 1);
        }
      }
LAB_00102ff4:
      local_418 = local_418 + 8;
      if (pvVar41 == local_418) {
        pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_338;
        if (cVar33 == '\0') goto LAB_00103d34;
        if (iVar16 < 0) goto LAB_00103029;
        goto LAB_0010309b;
      }
    } while( true );
  }
  goto LAB_00104685;
LAB_00104659:
  if (-1 < (long)pvVar23) {
    std::__throw_bad_alloc();
    pvVar41 = pvVar23;
LAB_001046b1:
    iVar16 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance);
    if (iVar16 != 0) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
LAB_0010402a:
    auVar9 = local_1a8;
    local_1b8[1] = (code *)0xd;
    local_1a8._5_8_ = 0x726564616f4c2d52;
    local_1a8._0_5_ = 0x586e65704f;
    local_1a8._14_2_ = auVar9._14_2_;
    local_1a8[0xd] = 0;
    local_1b8[0] = (code *)local_1a8;
    LoaderLogger::LogMessage(0x106280,0x1000,(string *)0x1,(string *)local_1b8,param_1,pvVar34);
    if (local_1b8[0] != (code *)local_1a8) {
      operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
    }
    uVar11 = local_2c8._8_8_;
    pvVar35 = (void *)local_2c8._0_8_;
    if (local_2c8._8_8_ != local_2c8._0_8_) {
      do {
        if (*(void **)((long)pvVar35 + 0x10) != (void *)((long)pvVar35 + 0x20)) {
          operator_delete(*(void **)((long)pvVar35 + 0x10),*(long *)((long)pvVar35 + 0x20) + 1);
        }
        pvVar35 = (void *)((long)pvVar35 + 0x30);
      } while ((void *)uVar11 != pvVar35);
    }
    if ((void *)local_2c8._0_8_ != (void *)0x0) {
      operator_delete((void *)local_2c8._0_8_,local_2b8._0_8_ - local_2c8._0_8_);
    }
    if (local_258 != pvVar41) {
      operator_delete(local_258,local_248[0] + 1);
    }
    pvVar34 = (vector *)0x0;
LAB_00103e58:
    do {
      pvVar41 = pvVar23 + 0x20;
      if (pvVar44 == pvVar23 + 0x20) {
        uVar11 = local_318._8_8_;
        pvVar23 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_318._0_8_;
        if (local_318._8_8_ != local_318._0_8_) {
          do {
            if (*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                  **)pvVar23 != pvVar23 + 0x10) {
              operator_delete(*(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                                **)pvVar23,(ulong)(*(undefined **)(pvVar23 + 0x10) + 1));
            }
            pvVar23 = pvVar23 + 0x20;
          } while ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                    *)uVar11 != pvVar23);
        }
        pvVar23 = local_418;
        pvVar44 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                   *)local_318._0_8_;
        if ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_318._0_8_ !=
            (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)0x0) goto LAB_00103cff;
        goto LAB_00103d12;
      }
LAB_00103e65:
      pvVar23 = pvVar41;
      lVar18 = std::
               _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
               ::find((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
                       *)local_408,(string *)pvVar23);
    } while (lVar18 != 0);
    bVar6 = false;
    plVar19 = (long *)local_338._0_8_;
    if (local_338._0_8_ != local_338._8_8_) goto LAB_00103ea2;
    goto LAB_00103f34;
  }
  std::__throw_bad_array_new_length();
LAB_00104663:
  local_418 = pvVar23;
  if ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
       *)ppuVar28 ==
      (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
       *)0x0) {
    pvVar41 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
               *)local_358._8_8_;
    if (local_358._0_8_ == local_358._8_8_) goto LAB_00104685;
    goto LAB_00102412;
  }
LAB_00103cff:
  operator_delete(pvVar44,local_308 - (long)pvVar44);
  pvVar23 = local_418;
LAB_00103d12:
  pvVar41 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_358._8_8_;
  if (local_358._0_8_ == local_358._8_8_) goto code_r0x00103d2b;
  goto LAB_00102412;
LAB_00103ea2:
  do {
    while( true ) {
      p_Var31 = *(_AllocNode **)((string *)pvVar23 + 8);
      if (p_Var31 == *(_AllocNode **)(*plVar19 + 0xb0)) break;
LAB_00103e90:
      plVar19 = plVar19 + 1;
      if (plVar19 == (long *)local_338._8_8_) goto LAB_00103f2b;
    }
    if ((p_Var31 != (_AllocNode *)0x0) &&
       (iVar16 = memcmp(*(void **)pvVar23,*(void **)(*plVar19 + 0xa8),(size_t)p_Var31),
       p_Var31 = extraout_RDX_02, iVar16 != 0)) goto LAB_00103e90;
    std::
    _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
    ::
    _M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>
              ((string *)local_408,(string *)pvVar23,p_Var31);
    if ((long *)local_358._8_8_ == local_348) {
      std::
      vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
      ::
      _M_realloc_insert<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>
                ((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                  *)local_358,local_358._8_8_,plVar19);
    }
    else {
      *(long *)local_358._8_8_ = *plVar19;
      *plVar19 = 0;
      local_358._8_8_ = (long *)(local_358._8_8_ + 8);
    }
    bVar6 = true;
    plVar19 = (long *)std::
                      vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
                      ::_M_erase(local_418);
  } while (plVar19 != (long *)local_338._8_8_);
LAB_00103f2b:
  if (!bVar6) goto LAB_00103f34;
  goto LAB_00103e58;
LAB_00103f34:
  pvVar34 = (vector *)&local_258;
  local_2c8._0_8_ = 0x38;
  pvVar41 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_248;
  local_258 = pvVar41;
  local_258 = (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
               *)std::__cxx11::string::_M_create((ulong *)pvVar34,(ulong)local_2c8);
  uVar11 = _LC2._8_8_;
  local_248[0] = local_2c8._0_8_;
  *(undefined8 *)local_258 = _LC2._0_8_;
  *(undefined8 *)(local_258 + 8) = uVar11;
  uVar32 = _UNK_00106528;
  uVar22 = __LC56;
  *(long *)(local_258 + 0x30) = 0x20726579616c2064;
  *(ulong *)(local_258 + 0x10) = uVar22;
  *(ulong *)(local_258 + 0x18) = uVar32;
  lVar18 = _UNK_00106538;
  *(long *)(local_258 + 0x20) = __LC57;
  *(long *)(local_258 + 0x28) = lVar18;
  local_250 = local_2c8._0_8_;
  local_258[local_2c8._0_8_] =
       (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
        )0x0;
  if (0x3fffffffffffffff - local_2c8._0_8_ < *(ulong *)((string *)pvVar23 + 8)) goto LAB_00104707;
  std::__cxx11::string::_M_append((char *)pvVar34,*(ulong *)pvVar23);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_2b8._8_8_;
  local_2b8 = auVar7 << 0x40;
  local_2c8 = (undefined1  [16])0x0;
  if (LoaderLogger::GetInstance()::instance == '\0') goto LAB_001046b1;
  goto LAB_0010402a;
code_r0x00103d2b:
  if ((char)pvVar34 == '\0') {
LAB_00103d34:
    iVar16 = -0x24;
LAB_00103029:
    puVar37 = *(undefined8 **)param_4;
    puVar3 = *(undefined8 **)(param_4 + 8);
    puVar42 = puVar37;
    if (puVar37 != puVar3) {
      do {
        this = (ApiLayerInterface *)*puVar42;
        if (this != (ApiLayerInterface *)0x0) {
          if (*(code **)(*(long *)this + 8) == ~ApiLayerInterface) {
            ~ApiLayerInterface(this);
            operator_delete(this,0x58);
          }
          else {
            (**(code **)(*(long *)this + 8))();
          }
        }
        puVar42 = puVar42 + 1;
      } while (puVar3 != puVar42);
      *(undefined8 **)(param_4 + 8) = puVar37;
    }
    goto LAB_0010309b;
  }
LAB_00104685:
  iVar16 = 0;
LAB_0010309b:
  std::
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  ::~vector(pvVar23);
  std::
  vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
  ::~vector((vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
             *)local_358);
  puVar37 = local_288;
  while (puVar37 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar37;
    if ((undefined8 *)puVar37[1] != puVar37 + 3) {
      operator_delete((undefined8 *)puVar37[1],puVar37[3] + 1);
    }
    operator_delete(puVar37,0x30);
    puVar37 = puVar3;
  }
  memset(local_298,0,local_290 * 8);
  local_280 = 0;
  local_288 = (undefined8 *)0x0;
  if (local_298 != local_268) {
    operator_delete(local_298,local_290 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >::~vector() */

void __thiscall
std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
          (vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  if (pvVar1 != pvVar2) {
    do {
      if (*(void **)((long)pvVar2 + 0x10) != (void *)((long)pvVar2 + 0x20)) {
        operator_delete(*(void **)((long)pvVar2 + 0x10),*(long *)((long)pvVar2 + 0x20) + 1);
      }
      pvVar2 = (void *)((long)pvVar2 + 0x30);
    } while (pvVar1 != pvVar2);
    pvVar2 = *(void **)this;
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
  return;
}



/* std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
::~vector(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
          *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar5 = *(undefined8 **)this;
  if (puVar1 != puVar5) {
    do {
      puVar2 = (undefined8 *)*puVar5;
      if (puVar2 != (undefined8 *)0x0) {
        if ((undefined8 *)puVar2[0x19] != puVar2 + 0x1b) {
          operator_delete((undefined8 *)puVar2[0x19],puVar2[0x1b] + 1);
        }
        if ((undefined8 *)puVar2[0x15] != puVar2 + 0x17) {
          operator_delete((undefined8 *)puVar2[0x15],puVar2[0x17] + 1);
        }
        puVar3 = (undefined8 *)puVar2[0xe];
        while (puVar3 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar3;
          if ((undefined8 *)puVar3[5] != puVar3 + 7) {
            operator_delete((undefined8 *)puVar3[5],puVar3[7] + 1);
          }
          if ((undefined8 *)puVar3[1] != puVar3 + 3) {
            operator_delete((undefined8 *)puVar3[1],puVar3[3] + 1);
          }
          operator_delete(puVar3,0x50);
          puVar3 = puVar4;
        }
        memset((void *)puVar2[0xc],0,puVar2[0xd] * 8);
        puVar2[0xf] = 0;
        puVar2[0xe] = 0;
        if ((undefined8 *)puVar2[0xc] != puVar2 + 0x12) {
          operator_delete((undefined8 *)puVar2[0xc],puVar2[0xd] << 3);
        }
        puVar3 = (undefined8 *)puVar2[10];
        puVar4 = (undefined8 *)puVar2[9];
        if (puVar3 != puVar4) {
          do {
            if ((undefined8 *)*puVar4 != puVar4 + 2) {
              operator_delete((undefined8 *)*puVar4,puVar4[2] + 1);
            }
            puVar4 = puVar4 + 5;
          } while (puVar3 != puVar4);
          puVar4 = (undefined8 *)puVar2[9];
        }
        if (puVar4 != (undefined8 *)0x0) {
          operator_delete(puVar4,puVar2[0xb] - (long)puVar4);
        }
        if ((undefined8 *)puVar2[5] != puVar2 + 7) {
          operator_delete((undefined8 *)puVar2[5],puVar2[7] + 1);
        }
        if ((undefined8 *)*puVar2 != puVar2 + 2) {
          operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
        }
        operator_delete(puVar2,0xf0);
      }
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
    puVar5 = *(undefined8 **)this;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar5,*(long *)(this + 0x10) - (long)puVar5);
  return;
}



/* std::_Hashtable<XrSession_T*, std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > >, std::allocator<std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > > >, std::__detail::_Select1st,
   std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::clear() */

void __thiscall
std::
_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::clear(_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
        *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(this + 0x10);
  while (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar5;
    plVar2 = (long *)puVar5[2];
    if (plVar2 != (long *)0x0) {
      puVar3 = (undefined8 *)plVar2[1];
      puVar6 = (undefined8 *)*plVar2;
      if (puVar3 != puVar6) {
        do {
          puVar4 = (undefined8 *)*puVar6;
          if (puVar4 != (undefined8 *)0x0) {
            if ((undefined8 *)*puVar4 != puVar4 + 2) {
              operator_delete((undefined8 *)*puVar4,puVar4[2] + 1);
            }
            operator_delete(puVar4,0x40);
          }
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar6);
        puVar6 = (undefined8 *)*plVar2;
      }
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6,plVar2[2] - (long)puVar6);
      }
      operator_delete(plVar2,0x18);
    }
    operator_delete(puVar5,0x18);
    puVar5 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) * 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* LoaderLogger::~LoaderLogger() */

void __thiscall LoaderLogger::~LoaderLogger(LoaderLogger *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  
  pvVar1 = *(void **)(this + 200);
  pvVar7 = *(void **)(this + 0xc0);
  if (pvVar1 != pvVar7) {
    do {
      if (*(void **)((long)pvVar7 + 0x10) != (void *)((long)pvVar7 + 0x20)) {
        operator_delete(*(void **)((long)pvVar7 + 0x10),*(long *)((long)pvVar7 + 0x20) + 1);
      }
      pvVar7 = (void *)((long)pvVar7 + 0x30);
    } while (pvVar1 != pvVar7);
    pvVar7 = *(void **)(this + 0xc0);
  }
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7,*(long *)(this + 0xd0) - (long)pvVar7);
  }
  std::
  _Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
  ::clear((_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
           *)(this + 0x88));
  if (*(LoaderLogger **)(this + 0x88) != this + 0xb8) {
    operator_delete(*(LoaderLogger **)(this + 0x88),*(long *)(this + 0x90) * 8);
  }
  puVar5 = *(undefined8 **)(this + 0x60);
  while (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar5;
    puVar6 = (undefined8 *)puVar5[4];
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      operator_delete(puVar6,0x10);
      puVar6 = puVar3;
    }
    memset((void *)puVar5[2],0,puVar5[3] * 8);
    puVar5[5] = 0;
    puVar5[4] = 0;
    if ((undefined8 *)puVar5[2] != puVar5 + 8) {
      operator_delete((undefined8 *)puVar5[2],puVar5[3] << 3);
    }
    operator_delete(puVar5,0x48);
    puVar5 = puVar2;
  }
  memset(*(void **)(this + 0x50),0,*(long *)(this + 0x58) * 8);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(LoaderLogger **)(this + 0x50) != this + 0x80) {
    operator_delete(*(LoaderLogger **)(this + 0x50),*(long *)(this + 0x58) * 8);
  }
  plVar4 = *(long **)(this + 0x40);
  plVar8 = *(long **)(this + 0x38);
  if (plVar4 != plVar8) {
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 8))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar4 != plVar8);
    plVar8 = *(long **)(this + 0x38);
  }
  if (plVar8 != (long *)0x0) {
    operator_delete(plVar8,*(long *)(this + 0x48) - (long)plVar8);
    return;
  }
  return;
}



/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string
   const&>(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, std::__cxx11::string const&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string_const&>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,void *param_2,
          long *param_3)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00105278;
    uVar14 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar14 = uVar5 + 1;
    }
    uVar14 = uVar14 << 5;
  }
  else {
    uVar14 = uVar5 * 2;
    if (uVar14 < uVar5) {
LAB_00105278:
      uVar14 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar14 == 0) {
        plVar11 = (long *)0x20;
        lVar12 = 0;
        plVar6 = (long *)0x0;
        goto LAB_001051cb;
      }
      if (0x3ffffffffffffff < uVar14) {
        uVar14 = 0x3ffffffffffffff;
      }
      uVar14 = uVar14 << 5;
    }
  }
  plVar6 = (long *)operator_new(uVar14);
  lVar12 = uVar14 + (long)plVar6;
  plVar11 = plVar6 + 4;
LAB_001051cb:
  plVar15 = (long *)((long)plVar6 + ((long)param_2 - (long)pvVar3));
  lVar13 = *param_3;
  *plVar15 = (long)(plVar15 + 2);
  __cxx11::string::_M_construct<char*>(plVar15,lVar13,param_3[1] + lVar13);
  if (param_2 != pvVar3) {
    plVar15 = (long *)((long)pvVar3 + 0x10);
    plVar11 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar6);
    plVar7 = plVar6;
    do {
      plVar1 = plVar7 + 2;
      lVar13 = plVar15[-1];
      *plVar7 = (long)plVar1;
      if (plVar15 == (long *)plVar15[-2]) {
        uVar5 = lVar13 + 1;
        uVar10 = (uint)uVar5;
        if (uVar10 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar10 != 0) {
              *(char *)plVar1 = (char)*plVar15;
              if ((uVar5 & 2) == 0) goto LAB_0010526c;
              *(undefined2 *)((long)plVar7 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 2));
              lVar13 = plVar15[-1];
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar15;
            *(undefined4 *)((long)plVar7 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 4));
            lVar13 = plVar15[-1];
          }
        }
        else {
          *plVar1 = *plVar15;
          *(undefined8 *)((long)plVar7 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 8));
          lVar13 = (long)plVar1 - ((ulong)(plVar7 + 3) & 0xfffffffffffffff8);
          uVar10 = uVar10 + (int)lVar13 & 0xfffffff8;
          if (7 < uVar10) {
            uVar8 = 0;
            do {
              uVar5 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(plVar7 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar15 + (uVar5 - lVar13));
            } while (uVar8 < uVar10);
          }
LAB_0010526c:
          lVar13 = plVar15[-1];
        }
      }
      else {
        *plVar7 = plVar15[-2];
        plVar7[2] = *plVar15;
      }
      plVar7[1] = lVar13;
      plVar7 = plVar7 + 4;
      plVar15 = plVar15 + 4;
    } while (plVar11 != plVar7);
    plVar11 = plVar11 + 4;
  }
  plVar15 = plVar11;
  if (param_2 != pvVar2) {
    plVar7 = (long *)((long)param_2 + 0x10);
    plVar15 = (long *)(((long)pvVar2 - (long)param_2) + (long)plVar11);
    do {
      plVar4 = (long *)plVar7[-2];
      plVar1 = plVar11 + 2;
      lVar13 = plVar7[-1];
      *plVar11 = (long)plVar1;
      if (plVar7 == plVar4) {
        uVar5 = lVar13 + 1;
        uVar10 = (uint)uVar5;
        if (uVar10 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar10 != 0) && (*(char *)plVar1 = (char)*plVar7, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)plVar11 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar7 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar7;
            *(undefined4 *)((long)plVar11 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar7 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar1 = *plVar7;
          *(undefined8 *)((long)plVar11 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar7 + ((uVar5 & 0xffffffff) - 8));
          lVar9 = (long)plVar1 - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
          uVar10 = uVar10 + (int)lVar9 & 0xfffffff8;
          if (7 < uVar10) {
            uVar8 = 0;
            do {
              uVar5 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar7 + (uVar5 - lVar9));
            } while (uVar8 < uVar10);
          }
        }
      }
      else {
        *plVar11 = (long)plVar4;
        plVar11[2] = *plVar7;
      }
      plVar11[1] = lVar13;
      plVar11 = plVar11 + 4;
      plVar7 = plVar7 + 4;
    } while (plVar11 != plVar15);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(long **)this = plVar6;
  *(long **)(this + 8) = plVar15;
  *(long *)(this + 0x10) = lVar12;
  return;
}



/* std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >::_M_erase(__gnu_cxx::__normal_iterator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >*, std::vector<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >, std::allocator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> > > > >) */

undefined8 * __thiscall
std::
vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
::_M_erase(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
           *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = *(undefined8 **)(this + 8);
  if ((param_2 + 1 != puVar3) && (lVar5 = (long)puVar3 - (long)(param_2 + 1), 0 < lVar5)) {
    puVar3 = param_2;
    do {
      uVar1 = puVar3[1];
      puVar2 = (undefined8 *)*puVar3;
      puVar3[1] = 0;
      *puVar3 = uVar1;
      if (puVar2 != (undefined8 *)0x0) {
        if ((undefined8 *)puVar2[0x19] != puVar2 + 0x1b) {
          operator_delete((undefined8 *)puVar2[0x19],puVar2[0x1b] + 1);
        }
        if ((undefined8 *)puVar2[0x15] != puVar2 + 0x17) {
          operator_delete((undefined8 *)puVar2[0x15],puVar2[0x17] + 1);
        }
        puVar4 = (undefined8 *)puVar2[0xe];
        while (puVar4 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar4;
          if ((undefined8 *)puVar4[5] != puVar4 + 7) {
            operator_delete((undefined8 *)puVar4[5],puVar4[7] + 1);
          }
          if ((undefined8 *)puVar4[1] != puVar4 + 3) {
            operator_delete((undefined8 *)puVar4[1],puVar4[3] + 1);
          }
          operator_delete(puVar4,0x50);
          puVar4 = puVar6;
        }
        memset((void *)puVar2[0xc],0,puVar2[0xd] * 8);
        puVar2[0xf] = 0;
        puVar2[0xe] = 0;
        if ((undefined8 *)puVar2[0xc] != puVar2 + 0x12) {
          operator_delete((undefined8 *)puVar2[0xc],puVar2[0xd] << 3);
        }
        puVar4 = (undefined8 *)puVar2[10];
        puVar6 = (undefined8 *)puVar2[9];
        if (puVar4 != puVar6) {
          do {
            if ((undefined8 *)*puVar6 != puVar6 + 2) {
              operator_delete((undefined8 *)*puVar6,puVar6[2] + 1);
            }
            puVar6 = puVar6 + 5;
          } while (puVar4 != puVar6);
          puVar6 = (undefined8 *)puVar2[9];
        }
        if (puVar6 != (undefined8 *)0x0) {
          operator_delete(puVar6,puVar2[0xb] - (long)puVar6);
        }
        if ((undefined8 *)puVar2[5] != puVar2 + 7) {
          operator_delete((undefined8 *)puVar2[5],puVar2[7] + 1);
        }
        if ((undefined8 *)*puVar2 != puVar2 + 2) {
          operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
        }
        operator_delete(puVar2,0xf0);
      }
      puVar3 = puVar3 + 1;
    } while ((undefined8 *)(lVar5 + (long)param_2) != puVar3);
    puVar3 = *(undefined8 **)(this + 8);
  }
  puVar2 = (undefined8 *)puVar3[-1];
  *(undefined8 **)(this + 8) = puVar3 + -1;
  if (puVar2 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar2[0x19] != puVar2 + 0x1b) {
      operator_delete((undefined8 *)puVar2[0x19],puVar2[0x1b] + 1);
    }
    if ((undefined8 *)puVar2[0x15] != puVar2 + 0x17) {
      operator_delete((undefined8 *)puVar2[0x15],puVar2[0x17] + 1);
    }
    puVar3 = (undefined8 *)puVar2[0xe];
    while (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar3;
      if ((undefined8 *)puVar3[5] != puVar3 + 7) {
        operator_delete((undefined8 *)puVar3[5],puVar3[7] + 1);
      }
      if ((undefined8 *)puVar3[1] != puVar3 + 3) {
        operator_delete((undefined8 *)puVar3[1],puVar3[3] + 1);
      }
      operator_delete(puVar3,0x50);
      puVar3 = puVar4;
    }
    memset((void *)puVar2[0xc],0,puVar2[0xd] * 8);
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    if ((undefined8 *)puVar2[0xc] != puVar2 + 0x12) {
      operator_delete((undefined8 *)puVar2[0xc],puVar2[0xd] << 3);
    }
    puVar3 = (undefined8 *)puVar2[10];
    puVar4 = (undefined8 *)puVar2[9];
    if (puVar3 != puVar4) {
      do {
        if ((undefined8 *)*puVar4 != puVar4 + 2) {
          operator_delete((undefined8 *)*puVar4,puVar4[2] + 1);
        }
        puVar4 = puVar4 + 5;
      } while (puVar3 != puVar4);
      puVar4 = (undefined8 *)puVar2[9];
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete(puVar4,puVar2[0xb] - (long)puVar4);
    }
    if ((undefined8 *)puVar2[5] != puVar2 + 7) {
      operator_delete((undefined8 *)puVar2[5],puVar2[7] + 1);
    }
    if ((undefined8 *)*puVar2 != puVar2 + 2) {
      operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
    }
    operator_delete(puVar2,0xf0);
  }
  return param_2;
}



/* void std::vector<std::unique_ptr<ApiLayerInterface, std::default_delete<ApiLayerInterface> >,
   std::allocator<std::unique_ptr<ApiLayerInterface, std::default_delete<ApiLayerInterface> > >
   >::_M_realloc_insert<ApiLayerInterface*>(__gnu_cxx::__normal_iterator<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> >*, std::vector<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> >, std::allocator<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> > > > >, ApiLayerInterface*&&) */

void __thiscall
std::
vector<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>,std::allocator<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>>>
::_M_realloc_insert<ApiLayerInterface*>
          (vector<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>,std::allocator<std::unique_ptr<ApiLayerInterface,std::default_delete<ApiLayerInterface>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00105950;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_0010595a:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_001058c9:
      puVar4 = puVar6;
      puVar8 = puVar2;
      do {
        puVar9 = puVar4;
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar3;
        puVar4 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar1) goto LAB_00105919;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00105950:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_0010595a;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_0010595a;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_001058c9;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_00105919:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile>
   >, std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile>
   > > >::_M_realloc_insert<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >*, std::vector<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >, std::allocator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> > > > >, std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >&&) */

void __thiscall
std::
vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
::_M_realloc_insert<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>
          (vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar6 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar11 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_00105ad8;
    if (0xfffffffffffffff < uVar11) {
      uVar11 = 0xfffffffffffffff;
    }
    uVar11 = uVar11 * 8;
LAB_00105ae2:
    puVar7 = (undefined8 *)operator_new(uVar11);
    lVar10 = uVar11 + (long)puVar7;
    uVar3 = *param_3;
    *param_3 = 0;
    puVar9 = puVar7 + 1;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_00105a60:
      puVar5 = puVar7;
      puVar8 = puVar2;
      do {
        puVar9 = puVar5;
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar3;
        puVar5 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar7));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar1) goto LAB_00105aa9;
  }
  else {
    uVar4 = uVar6 * 2;
    if (uVar4 < uVar6) {
LAB_00105ad8:
      uVar11 = 0x7ffffffffffffff8;
      goto LAB_00105ae2;
    }
    if (uVar4 != 0) {
      uVar11 = 0xfffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar11 = uVar4;
      }
      uVar11 = uVar11 << 3;
      goto LAB_00105ae2;
    }
    uVar3 = *param_3;
    lVar10 = 0;
    *param_3 = 0;
    puVar7 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_00105a60;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_00105aa9:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* std::back_insert_iterator<std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   > > std::__copy_move_a1<false, char const* const*,
   std::back_insert_iterator<std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   > > >(char const* const*, char const* const*,
   std::back_insert_iterator<std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   > >) */

undefined8 *
std::
__copy_move_a1<false,char_const*const*,std::back_insert_iterator<std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char *__s;
  long *plVar3;
  size_t __n;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  size_t *psVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 *local_a0;
  size_t local_70;
  size_t *local_68;
  undefined8 local_60;
  size_t local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != param_1 && -1 < (long)param_2 - (long)param_1) {
LAB_00105c30:
    do {
      __s = (char *)*param_1;
      local_68 = local_58;
      if (__s == (char *)0x0) {
        std::__throw_logic_error("basic_string: construction from null is not valid");
        goto LAB_001060c9;
      }
      __n = strlen(__s);
      local_70 = __n;
      if (__n < 0x10) {
        psVar9 = local_58;
        if (__n == 1) {
          local_58[0] = CONCAT71(local_58[0]._1_7_,*__s);
        }
        else if (__n != 0) goto LAB_00105c7f;
      }
      else {
        local_68 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        local_58[0] = local_70;
        psVar9 = local_68;
LAB_00105c7f:
        memcpy(psVar9,__s,__n);
        psVar9 = local_68;
      }
      local_60 = local_70;
      *(undefined1 *)((long)psVar9 + local_70) = 0;
      plVar2 = (long *)param_3[1];
      if (plVar2 == (long *)param_3[2]) {
        plVar3 = (long *)*param_3;
        uVar4 = (long)plVar2 - (long)plVar3 >> 5;
        if (uVar4 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (plVar2 == plVar3) {
          if (0xfffffffffffffffe < uVar4) goto LAB_00105fa0;
          uVar12 = 0x3ffffffffffffff;
          if (uVar4 + 1 < 0x400000000000000) {
            uVar12 = uVar4 + 1;
          }
          uVar12 = uVar12 << 5;
LAB_00105f32:
          puVar6 = (undefined8 *)operator_new(uVar12);
          lVar11 = uVar12 + (long)puVar6;
          local_a0 = puVar6 + 4;
        }
        else {
          uVar12 = uVar4 * 2;
          if (uVar12 < uVar4) {
LAB_00105fa0:
            uVar12 = 0x7fffffffffffffe0;
            goto LAB_00105f32;
          }
          if (uVar12 != 0) {
            if (0x3ffffffffffffff < uVar12) {
              uVar12 = 0x3ffffffffffffff;
            }
            uVar12 = uVar12 << 5;
            goto LAB_00105f32;
          }
          local_a0 = (undefined8 *)0x20;
          lVar11 = 0;
          puVar6 = (undefined8 *)0x0;
        }
        plVar5 = (long *)((long)puVar6 + ((long)plVar2 - (long)plVar3));
        *plVar5 = (long)(plVar5 + 2);
        if (local_68 == local_58) {
          uVar4 = local_60 + 1;
          uVar7 = (uint)uVar4;
          if (uVar7 < 8) {
            if ((uVar4 & 4) == 0) {
              if (uVar7 != 0) {
                *(undefined1 *)(plVar5 + 2) = (undefined1)local_58[0];
                if ((uVar4 & 2) != 0) {
                  *(undefined2 *)((long)plVar5 + (uVar4 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + ((uVar4 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)(plVar5 + 2) = (undefined4)local_58[0];
              *(undefined4 *)((long)plVar5 + (uVar4 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)local_58 + ((uVar4 & 0xffffffff) - 4));
            }
          }
          else {
            plVar5[2] = local_58[0];
            *(undefined8 *)((long)plVar5 + (uVar4 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_58 + ((uVar4 & 0xffffffff) - 8));
            lVar13 = (long)(plVar5 + 2) - ((ulong)(plVar5 + 3) & 0xfffffffffffffff8);
            uVar7 = (int)lVar13 + uVar7 & 0xfffffff8;
            if (7 < uVar7) {
              uVar8 = 0;
              do {
                uVar4 = (ulong)uVar8;
                uVar8 = uVar8 + 8;
                *(undefined8 *)(((ulong)(plVar5 + 3) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((long)local_58 + (uVar4 - lVar13));
              } while (uVar8 < uVar7);
            }
          }
        }
        else {
          *plVar5 = (long)local_68;
          plVar5[2] = local_58[0];
        }
        plVar5[1] = local_60;
        local_60 = 0;
        local_58[0] = local_58[0] & 0xffffffffffffff00;
        if (plVar2 != plVar3) {
          plVar5 = plVar3 + 2;
          puVar10 = puVar6;
          do {
            plVar1 = puVar10 + 2;
            lVar13 = plVar5[-1];
            *puVar10 = plVar1;
            if ((long *)plVar5[-2] == plVar5) {
              uVar4 = lVar13 + 1;
              uVar7 = (uint)uVar4;
              if (uVar7 < 8) {
                if ((uVar4 & 4) == 0) {
                  if (uVar7 != 0) {
                    *(char *)plVar1 = (char)*plVar5;
                    if ((uVar4 & 2) == 0) goto LAB_00105dbb;
                    *(undefined2 *)((long)puVar10 + (uVar4 & 0xffffffff) + 0xe) =
                         *(undefined2 *)((long)plVar5 + ((uVar4 & 0xffffffff) - 2));
                    lVar13 = plVar5[-1];
                  }
                }
                else {
                  *(int *)plVar1 = (int)*plVar5;
                  *(undefined4 *)((long)puVar10 + (uVar4 & 0xffffffff) + 0xc) =
                       *(undefined4 *)((long)plVar5 + ((uVar4 & 0xffffffff) - 4));
                  lVar13 = plVar5[-1];
                }
              }
              else {
                *plVar1 = *plVar5;
                *(undefined8 *)((long)puVar10 + (uVar4 & 0xffffffff) + 8) =
                     *(undefined8 *)((long)plVar5 + ((uVar4 & 0xffffffff) - 8));
                lVar13 = (long)plVar1 - ((ulong)(puVar10 + 3) & 0xfffffffffffffff8);
                uVar7 = uVar7 + (int)lVar13 & 0xfffffff8;
                if (7 < uVar7) {
                  uVar8 = 0;
                  do {
                    uVar4 = (ulong)uVar8;
                    uVar8 = uVar8 + 8;
                    *(undefined8 *)(((ulong)(puVar10 + 3) & 0xfffffffffffffff8) + uVar4) =
                         *(undefined8 *)((long)plVar5 + (uVar4 - lVar13));
                  } while (uVar8 < uVar7);
                }
LAB_00105dbb:
                lVar13 = plVar5[-1];
              }
            }
            else {
              *puVar10 = (long *)plVar5[-2];
              puVar10[2] = *plVar5;
            }
            plVar5 = plVar5 + 4;
            puVar10[1] = lVar13;
            puVar10 = puVar10 + 4;
          } while (plVar2 + 2 != plVar5);
          local_a0 = (undefined8 *)((long)puVar6 + (long)plVar2 + (0x20 - (long)plVar3));
        }
        if (plVar3 == (long *)0x0) {
          *param_3 = puVar6;
          param_3[2] = lVar11;
          param_3[1] = local_a0;
          local_68 = local_58;
        }
        else {
          local_68 = local_58;
          operator_delete(plVar3,param_3[2] - (long)plVar3);
          *param_3 = puVar6;
          param_3[2] = lVar11;
          param_3[1] = local_a0;
          if (local_68 != local_58) {
            param_1 = param_1 + 1;
            operator_delete(local_68,local_58[0] + 1);
            if (param_2 == param_1) break;
            goto LAB_00105c30;
          }
        }
      }
      else {
        *plVar2 = (long)(plVar2 + 2);
        if (local_68 == local_58) {
          uVar4 = local_70 + 1;
          uVar7 = (uint)uVar4;
          if (uVar7 < 8) {
            if ((uVar4 & 4) == 0) {
              if (uVar7 != 0) {
                *(undefined1 *)(plVar2 + 2) = (undefined1)local_58[0];
                if ((uVar4 & 2) != 0) {
                  *(undefined2 *)((long)plVar2 + (uVar4 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + ((uVar4 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)(plVar2 + 2) = (undefined4)local_58[0];
              *(undefined4 *)((long)plVar2 + (uVar4 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)local_58 + ((uVar4 & 0xffffffff) - 4));
            }
          }
          else {
            plVar2[2] = local_58[0];
            *(undefined8 *)((long)plVar2 + (uVar4 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_58 + ((uVar4 & 0xffffffff) - 8));
            lVar11 = (long)(plVar2 + 2) - ((ulong)(plVar2 + 3) & 0xfffffffffffffff8);
            uVar7 = uVar7 + (int)lVar11 & 0xfffffff8;
            if (7 < uVar7) {
              uVar8 = 0;
              do {
                uVar4 = (ulong)uVar8;
                uVar8 = uVar8 + 8;
                *(undefined8 *)(((ulong)(plVar2 + 3) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((long)local_58 + (uVar4 - lVar11));
              } while (uVar8 < uVar7);
            }
          }
        }
        else {
          *plVar2 = (long)local_68;
          plVar2[2] = local_58[0];
        }
        plVar2[1] = local_70;
        param_3[1] = param_3[1] + 0x20;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
LAB_001060c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::find(std::__cxx11::string const&) const */

long * __thiscall
std::
_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
::find(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
       *this,string *param_1)

{
  size_t sVar1;
  void *__s1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(ulong *)(this + 0x18) < 0x15) {
    plVar8 = *(long **)(this + 0x10);
    if (plVar8 != (long *)0x0) {
      sVar1 = *(size_t *)(param_1 + 8);
      do {
        while (sVar1 == plVar8[2]) {
          if (sVar1 == 0) {
            return plVar8;
          }
          __s1 = *(void **)param_1;
          do {
            iVar4 = memcmp(__s1,(void *)plVar8[1],sVar1);
            if (iVar4 == 0) {
              return plVar8;
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return (long *)0x0;
            }
          } while (sVar1 == plVar8[2]);
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  else {
    uVar5 = std::_Hash_bytes(*(void **)param_1,*(ulong *)(param_1 + 8),0xc70f6907);
    uVar2 = *(ulong *)(this + 8);
    uVar7 = uVar5 % uVar2;
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      uVar6 = ((long *)*plVar8)[5];
      plVar3 = (long *)*plVar8;
      do {
        plVar9 = plVar3;
        if (((uVar5 == uVar6) && (sVar1 = *(size_t *)(param_1 + 8), sVar1 == plVar9[2])) &&
           ((sVar1 == 0 || (iVar4 = memcmp(*(void **)param_1,(void *)plVar9[1],sVar1), iVar4 == 0)))
           ) {
          return (long *)*plVar8;
        }
        plVar3 = (long *)*plVar9;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar3[5];
        plVar8 = plVar9;
      } while (uVar7 == uVar6 % uVar2);
    }
    plVar8 = (long *)0x0;
  }
  return plVar8;
}



/* WARNING: Control flow encountered bad instruction data */
/* LoaderLogger::~LoaderLogger() */

void __thiscall LoaderLogger::~LoaderLogger(LoaderLogger *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
::~vector(vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
          *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >::~vector() */

void __thiscall
std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
          (vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


