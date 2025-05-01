
/* LoaderLogRecorder::LogDebugUtilsMessage(unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*) */

undefined8
LoaderLogRecorder::LogDebugUtilsMessage
          (ulong param_1,ulong param_2,XrDebugUtilsMessengerCallbackDataEXT *param_3)

{
  return 0;
}



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
      goto LAB_00100054;
    }
    if (__n == 0) goto LAB_00100054;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100054:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::find(unsigned long const&) const [clone .isra.0] */

undefined8 * __thiscall
std::
_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::find(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
       *this,ulong *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x18) == 0) {
    for (puVar4 = *(undefined8 **)(this + 0x10);
        (puVar4 != (undefined8 *)0x0 && ((ulong *)puVar4[1] != param_1));
        puVar4 = (undefined8 *)*puVar4) {
    }
  }
  else {
    uVar5 = (ulong)param_1 % *(ulong *)(this + 8);
    puVar4 = *(undefined8 **)(*(long *)this + uVar5 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = (ulong *)((undefined8 *)*puVar4)[1];
      puVar3 = (undefined8 *)*puVar4;
      do {
        if (param_1 == puVar1) {
          return (undefined8 *)*puVar4;
        }
        puVar2 = (undefined8 *)*puVar3;
      } while ((puVar2 != (undefined8 *)0x0) &&
              (puVar1 = (ulong *)puVar2[1], puVar4 = puVar3, puVar3 = puVar2,
              uVar5 == (ulong)puVar1 % *(ulong *)(this + 8)));
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}



/* std::vector<std::unique_ptr<LoaderLogRecorder, std::default_delete<LoaderLogRecorder> >,
   std::allocator<std::unique_ptr<LoaderLogRecorder, std::default_delete<LoaderLogRecorder> > >
   >::_M_erase(__gnu_cxx::__normal_iterator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >*, std::vector<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >, std::allocator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >*, std::vector<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >, std::allocator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> > > > >) [clone .isra.0] */

void __thiscall
std::
vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
::_M_erase(vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
           *this,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == param_3) {
    return;
  }
  plVar3 = *(long **)(this + 8);
  lVar5 = (long)plVar3 - (long)param_3;
  if ((param_3 != plVar3) && (0 < lVar5)) {
    plVar3 = param_2;
    plVar4 = param_3;
    do {
      lVar1 = *plVar4;
      *plVar4 = 0;
      plVar2 = (long *)*plVar3;
      *plVar3 = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (plVar3 != (long *)(lVar5 + (long)param_2));
    plVar3 = *(long **)(this + 8);
    lVar5 = (long)plVar3 - (long)param_3;
  }
  param_2 = (long *)((long)param_2 + lVar5);
  plVar4 = param_2;
  if (param_2 != plVar3) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    *(long **)(this + 8) = param_2;
  }
  return;
}



/* DebugUtilsSeveritiesToLoaderLogMessageSeverities(unsigned long) */

uint DebugUtilsSeveritiesToLoaderLogMessageSeverities(ulong param_1)

{
  return (uint)param_1 & 0x1111;
}



/* LoaderLogMessageSeveritiesToDebugUtilsMessageSeverities(unsigned long) */

uint LoaderLogMessageSeveritiesToDebugUtilsMessageSeverities(ulong param_1)

{
  return (uint)param_1 & 0x1111;
}



/* DebugUtilsMessageTypesToLoaderLogMessageTypes(unsigned long) */

uint DebugUtilsMessageTypesToLoaderLogMessageTypes(ulong param_1)

{
  return (uint)param_1 & 7;
}



/* LoaderLogMessageTypesToDebugUtilsMessageTypes(unsigned long) */

uint LoaderLogMessageTypesToDebugUtilsMessageTypes(ulong param_1)

{
  return (uint)param_1 & 7;
}



/* LoaderLogger::RemoveLogRecorder(unsigned long) */

void __thiscall LoaderLogger::RemoveLogRecorder(LoaderLogger *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  plVar5 = *(long **)(this + 0x40);
  plVar7 = *(long **)(this + 0x38);
  lVar6 = (long)plVar5 - (long)plVar7;
  if (0 < lVar6 >> 5) {
    plVar10 = plVar7 + (lVar6 >> 5) * 4;
    do {
      if (*(ulong *)(*plVar7 + 0x10) == param_1) goto LAB_001002f1;
      if (*(ulong *)(plVar7[1] + 0x10) == param_1) {
        plVar7 = plVar7 + 1;
        goto LAB_001002f1;
      }
      if (*(ulong *)(plVar7[2] + 0x10) == param_1) {
        plVar7 = plVar7 + 2;
        goto LAB_001002f1;
      }
      if (*(ulong *)(plVar7[3] + 0x10) == param_1) {
        plVar7 = plVar7 + 3;
        goto LAB_001002f1;
      }
      plVar7 = plVar7 + 4;
    } while (plVar7 != plVar10);
    lVar6 = (long)plVar5 - (long)plVar7;
  }
  lVar6 = lVar6 >> 3;
  plVar10 = plVar5;
  if (lVar6 == 2) {
LAB_001004fe:
    if (*(ulong *)(*plVar7 + 0x10) != param_1) {
      plVar7 = plVar7 + 1;
LAB_001004d6:
      if (*(ulong *)(*plVar7 + 0x10) != param_1) goto LAB_00100332;
    }
  }
  else {
    if (lVar6 != 3) {
      if (lVar6 != 1) goto LAB_00100332;
      goto LAB_001004d6;
    }
    if (*(ulong *)(*plVar7 + 0x10) != param_1) {
      plVar7 = plVar7 + 1;
      goto LAB_001004fe;
    }
  }
LAB_001002f1:
  plVar10 = plVar7;
  plVar3 = plVar7;
  if (plVar7 != plVar5) {
    while (plVar3 = plVar3 + 1, plVar10 = plVar7, plVar5 != plVar3) {
      lVar6 = *plVar3;
      if (*(ulong *)(lVar6 + 0x10) != param_1) {
        *plVar3 = 0;
        plVar10 = (long *)*plVar7;
        *plVar7 = lVar6;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        plVar7 = plVar7 + 1;
      }
    }
  }
LAB_00100332:
  std::
  vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
  ::_M_erase((vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
              *)(this + 0x38),plVar10,plVar5);
  puVar2 = *(undefined8 **)(this + 0x60);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      pthread_rwlock_unlock((pthread_rwlock_t *)this);
      return;
    }
    lVar6 = std::
            _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
            ::find((_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                    *)(puVar2 + 2),(ulong *)param_1);
    if (lVar6 != 0) {
      if (puVar2[5] == 0) {
        plVar5 = puVar2 + 4;
        plVar7 = (long *)puVar2[4];
        if ((long *)puVar2[4] != (long *)0x0) {
LAB_0010038e:
          if (plVar7[1] != param_1) break;
          plVar7 = (long *)*plVar5;
          uVar8 = (ulong)plVar7[1] % (ulong)puVar2[3];
LAB_001003ac:
          lVar6 = puVar2[2];
          lVar11 = *plVar7;
          puVar1 = (undefined8 *)(lVar6 + uVar8 * 8);
          plVar10 = (long *)*puVar1;
          if (plVar5 == plVar10) {
            if (lVar11 != 0) {
              uVar9 = *(ulong *)(lVar11 + 8) % (ulong)puVar2[3];
              if (uVar8 == uVar9) goto LAB_001003de;
              *(long **)(lVar6 + uVar9 * 8) = plVar5;
            }
            if (plVar10 == puVar2 + 4) {
              puVar2[4] = lVar11;
            }
            *puVar1 = 0;
            lVar11 = *plVar7;
          }
          else if ((lVar11 != 0) &&
                  (uVar9 = *(ulong *)(lVar11 + 8) % (ulong)puVar2[3], uVar8 != uVar9)) {
            *(long **)(lVar6 + uVar9 * 8) = plVar5;
            lVar11 = *plVar7;
          }
LAB_001003de:
          *plVar5 = lVar11;
          operator_delete(plVar7,0x10);
          puVar2[5] = puVar2[5] + -1;
        }
      }
      else {
        uVar8 = param_1 % (ulong)puVar2[3];
        plVar5 = *(long **)(puVar2[2] + uVar8 * 8);
        if (plVar5 != (long *)0x0) {
          uVar9 = ((long *)*plVar5)[1];
          plVar7 = (long *)*plVar5;
          do {
            if (uVar9 == param_1) {
              plVar7 = (long *)*plVar5;
              goto LAB_001003ac;
            }
            plVar10 = (long *)*plVar7;
          } while ((plVar10 != (long *)0x0) &&
                  (uVar9 = plVar10[1], plVar5 = plVar7, plVar7 = plVar10,
                  uVar8 == uVar9 % (ulong)puVar2[3]));
        }
      }
    }
LAB_001003f0:
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
  plVar10 = (long *)*plVar7;
  plVar5 = plVar7;
  plVar7 = plVar10;
  if (plVar10 == (long *)0x0) goto LAB_001003f0;
  goto LAB_0010038e;
}



/* LoaderLogger::LogMessage(unsigned long, unsigned long, std::__cxx11::string const&,
   std::__cxx11::string const&, std::__cxx11::string const&, std::vector<XrSdkLogObjectInfo,
   std::allocator<XrSdkLogObjectInfo> > const&) */

uint __thiscall
LoaderLogger::LogMessage
          (LoaderLogger *this,ulong param_1,ulong param_2,string *param_3,string *param_4,
          string *param_5,vector *param_6)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *__src;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  void **local_f8;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  long local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [24];
  void *local_88;
  void *local_80;
  long local_78;
  void *local_70;
  long local_68;
  long local_60;
  void *local_58;
  void *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (undefined1  [16])0x0;
  local_b8 = *(undefined8 *)param_5;
  local_a0._0_16_ = (undefined1  [16])0x0;
  local_c8 = *(undefined8 *)param_3;
  puVar10 = *(undefined8 **)(param_6 + 8);
  uStack_c0 = *(undefined8 *)param_4;
  puVar9 = *(undefined8 **)param_6;
  local_d8 = 0;
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  uVar13 = (long)puVar10 - (long)puVar9;
  if (uVar13 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (0x7fffffffffffffe0 < uVar13) {
      std::__throw_bad_array_new_length();
      goto LAB_0010095c;
    }
    puVar7 = (undefined8 *)operator_new(uVar13);
    puVar10 = *(undefined8 **)(param_6 + 8);
    puVar9 = *(undefined8 **)param_6;
  }
  local_d8 = uVar13 + (long)puVar7;
  puStack_e0 = puVar7;
  local_e8 = puVar7;
  puVar8 = puVar7;
  if (puVar9 != puVar10) {
    do {
      puVar8 = puVar7 + 4;
      *puVar7 = *puVar9;
      uVar1 = *(undefined4 *)(puVar9 + 1);
      pvVar2 = (void *)puVar9[3];
      puVar7[2] = puVar8;
      *(undefined4 *)(puVar7 + 1) = uVar1;
      __src = (undefined1 *)puVar9[2];
      local_88 = pvVar2;
      if (pvVar2 < (void *)0x10) {
        if (pvVar2 == (void *)0x1) {
          *(undefined1 *)(puVar7 + 4) = *__src;
        }
        else if (pvVar2 != (void *)0x0) goto LAB_001006ba;
      }
      else {
        puVar8 = (undefined8 *)std::__cxx11::string::_M_create(puVar7 + 2,(ulong)&local_88);
        puVar7[2] = puVar8;
        puVar7[4] = local_88;
LAB_001006ba:
        memcpy(puVar8,__src,(size_t)pvVar2);
        puVar8 = (undefined8 *)puVar7[2];
      }
      puVar9 = puVar9 + 6;
      puVar7[3] = local_88;
      puVar7 = puVar7 + 6;
      *(undefined1 *)((long)puVar8 + (long)local_88) = 0;
      puVar8 = local_e8;
    } while (puVar10 != puVar9);
  }
  local_e8 = puVar8;
  local_f8 = &local_88;
  puStack_e0 = puVar7;
  DebugUtilsData::PopulateNamesAndLabels(local_f8,this + 0x88,&local_e8);
  puVar9 = puStack_e0;
  for (puVar10 = local_e8; puVar9 != puVar10; puVar10 = puVar10 + 6) {
    if ((undefined8 *)puVar10[2] != puVar10 + 4) {
      operator_delete((undefined8 *)puVar10[2],puVar10[4] + 1);
    }
  }
  if (local_e8 != (undefined8 *)0x0) {
    operator_delete(local_e8,local_d8 - (long)local_e8);
  }
  local_b0._8_8_ = local_88;
  if (local_80 == local_88) {
    local_b0._8_8_ = (void *)0x0;
  }
  local_b0[0] = (char)(local_68 - (long)local_70 >> 3) * -0x33;
  local_a0._8_8_ = (void *)0x0;
  if (local_58 != local_50) {
    local_a0._8_8_ = local_58;
  }
  local_a0[0] = (char)((long)local_50 - (long)local_58 >> 3) * -0x55;
  do {
    iVar5 = pthread_rwlock_rdlock((pthread_rwlock_t *)this);
  } while (iVar5 == 0xb);
  if (iVar5 != 0x23) {
    plVar11 = *(long **)(this + 0x38);
    plVar3 = *(long **)(this + 0x40);
    uVar12 = 0;
    if (plVar3 != plVar11) {
      do {
        while ((plVar4 = (long *)*plVar11, (plVar4[4] & param_1) != param_1 ||
               ((plVar4[5] & param_2) != param_2))) {
          plVar11 = plVar11 + 1;
          if (plVar3 == plVar11) goto LAB_00100870;
        }
        plVar11 = plVar11 + 1;
        uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,param_2,&local_c8);
        uVar12 = uVar12 | uVar6;
      } while (plVar3 != plVar11);
    }
LAB_00100870:
    pthread_rwlock_unlock((pthread_rwlock_t *)this);
    if (local_58 != (void *)0x0) {
      operator_delete(local_58,local_48 - (long)local_58);
    }
    pvVar2 = local_88;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70,local_60 - (long)local_70);
      pvVar2 = local_88;
    }
    for (; local_80 != pvVar2; pvVar2 = (void *)((long)pvVar2 + 0x30)) {
      if (*(void **)((long)pvVar2 + 0x10) != (void *)((long)pvVar2 + 0x20U)) {
        operator_delete(*(void **)((long)pvVar2 + 0x10),*(long *)((long)pvVar2 + 0x20) + 1);
      }
    }
    if (local_88 != (void *)0x0) {
      operator_delete(local_88,local_78 - (long)local_88);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar12;
  }
LAB_0010095c:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* LoaderLogger::LogDebugUtilsMessage(unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*) */

uint LoaderLogger::LogDebugUtilsMessage
               (ulong param_1,ulong param_2,XrDebugUtilsMessengerCallbackDataEXT *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_50;
  long local_40;
  
  uVar7 = (ulong)((uint)param_3 & 7);
  uVar5 = (ulong)((uint)param_2 & 0x1111);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  DebugUtilsData::WrapCallbackData
            ((AugmentedCallbackData *)(param_1 + 0x88),
             (XrDebugUtilsMessengerCallbackDataEXT *)local_c8);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)param_1);
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  uVar8 = 0;
  for (plVar6 = *(long **)(param_1 + 0x38); plVar1 != plVar6; plVar6 = plVar6 + 1) {
    plVar2 = (long *)*plVar6;
    if ((((*(int *)((long)plVar2 + 0xc) == 3) && ((plVar2[4] & uVar5) == uVar5)) &&
        ((plVar2[5] & uVar7) == uVar7)) &&
       (*(code **)(*plVar2 + 0x38) != LoaderLogRecorder::LogDebugUtilsMessage)) {
      uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3,local_50);
      uVar8 = uVar8 | uVar4;
    }
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)param_1);
  if ((void *)local_b8._8_8_ != (void *)0x0) {
    operator_delete((void *)local_b8._8_8_,local_a8._8_8_ - local_b8._8_8_);
  }
  if ((void *)local_c8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_c8._0_8_,local_b8._0_8_ - local_c8._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LoaderLogger::AddObjectName(unsigned long, XrObjectType, std::__cxx11::string const&) */

void LoaderLogger::AddObjectName(long param_1)

{
  DebugUtilsData::AddObjectName(param_1 + 0x88);
  return;
}



/* LoaderLogger::BeginLabelRegion(XrSession_T*, XrDebugUtilsLabelEXT const*) */

void LoaderLogger::BeginLabelRegion(XrSession_T *param_1,XrDebugUtilsLabelEXT *param_2)

{
  DebugUtilsData::BeginLabelRegion(param_1 + 0x88,param_2);
  return;
}



/* LoaderLogger::EndLabelRegion(XrSession_T*) */

void LoaderLogger::EndLabelRegion(XrSession_T *param_1)

{
  DebugUtilsData::EndLabelRegion(param_1 + 0x88);
  return;
}



/* LoaderLogger::InsertLabel(XrSession_T*, XrDebugUtilsLabelEXT const*) */

void LoaderLogger::InsertLabel(XrSession_T *param_1,XrDebugUtilsLabelEXT *param_2)

{
  DebugUtilsData::InsertLabel(param_1 + 0x88,param_2);
  return;
}



/* LoaderLogger::DeleteSessionLabels(XrSession_T*) */

void LoaderLogger::DeleteSessionLabels(XrSession_T *param_1)

{
  DebugUtilsData::DeleteSessionLabels(param_1 + 0x88);
  return;
}



/* LoaderLogger::AddLogRecorderForXrInstance(XrInstance_T*, std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >&&) */

void __thiscall
LoaderLogger::AddLogRecorderForXrInstance
          (LoaderLogger *this,XrInstance_T *param_1,unique_ptr *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  void *__s;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong extraout_RDX;
  undefined8 *puVar11;
  ulong uVar12;
  XrInstance_T *local_40 [2];
  
  local_40[0] = param_1;
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  if (iVar4 == 0x23) {
LAB_00100e14:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  plVar5 = (long *)std::__detail::
                   _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                   ::operator[]((_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                 *)(this + 0x50),local_40);
  uVar2 = *(ulong *)(*(long *)param_2 + 0x10);
  if (plVar5[3] == 0) {
    for (puVar11 = (undefined8 *)plVar5[2]; puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)*puVar11) {
      if (uVar2 == puVar11[1]) goto LAB_00100c10;
    }
    uVar10 = uVar2 % (ulong)plVar5[1];
  }
  else {
    uVar10 = uVar2 % (ulong)plVar5[1];
    plVar6 = *(long **)(*plVar5 + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      uVar12 = ((long *)*plVar6)[1];
      plVar8 = (long *)*plVar6;
      while (uVar2 != uVar12) {
        plVar9 = (long *)*plVar8;
        if ((plVar9 == (long *)0x0) ||
           (uVar12 = plVar9[1], plVar6 = plVar8, plVar8 = plVar9,
           uVar12 % (ulong)plVar5[1] != uVar10)) goto LAB_00100c5c;
      }
      if (*plVar6 != 0) goto LAB_00100c10;
    }
  }
LAB_00100c5c:
  plVar6 = (long *)operator_new(0x10);
  plVar6[1] = uVar2;
  uVar12 = plVar5[3];
  *plVar6 = 0;
  cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(plVar5 + 4),plVar5[1],uVar12);
  if (cVar3 == '\0') {
    plVar8 = (long *)*plVar5;
    plVar9 = plVar8 + uVar10;
    plVar7 = (long *)*plVar9;
    if (plVar7 == (long *)0x0) goto LAB_00100da2;
LAB_00100cac:
    *plVar6 = *plVar7;
    *(long **)*plVar9 = plVar6;
  }
  else {
    if (extraout_RDX == 1) {
      plVar8 = plVar5 + 6;
      plVar5[6] = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
        std::__throw_bad_alloc();
        goto LAB_00100e14;
      }
      __s = operator_new(extraout_RDX * 8);
      plVar8 = (long *)memset(__s,0,extraout_RDX * 8);
    }
    plVar9 = (long *)plVar5[2];
    plVar5[2] = 0;
    uVar10 = 0;
    while (uVar12 = uVar10, plVar7 = plVar9, plVar9 != (long *)0x0) {
      while( true ) {
        plVar9 = (long *)*plVar7;
        uVar10 = (ulong)plVar7[1] % extraout_RDX;
        plVar1 = plVar8 + uVar10;
        if ((long *)*plVar1 == (long *)0x0) break;
        *plVar7 = *(long *)*plVar1;
        *(long **)*plVar1 = plVar7;
        plVar7 = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00100d63;
      }
      *plVar7 = plVar5[2];
      plVar5[2] = (long)plVar7;
      *plVar1 = (long)(plVar5 + 2);
      if (*plVar7 != 0) {
        plVar8[uVar12] = (long)plVar7;
      }
    }
LAB_00100d63:
    if ((long *)*plVar5 != plVar5 + 6) {
      operator_delete((long *)*plVar5,plVar5[1] << 3);
    }
    plVar5[1] = extraout_RDX;
    *plVar5 = (long)plVar8;
    plVar9 = plVar8 + uVar2 % extraout_RDX;
    plVar7 = (long *)*plVar9;
    if (plVar7 != (long *)0x0) goto LAB_00100cac;
LAB_00100da2:
    *plVar6 = plVar5[2];
    plVar5[2] = (long)plVar6;
    if (*plVar6 != 0) {
      plVar8[*(ulong *)(*plVar6 + 8) % (ulong)plVar5[1]] = (long)plVar6;
    }
    *plVar9 = (long)(plVar5 + 2);
  }
  plVar5[3] = plVar5[3] + 1;
  puVar11 = *(undefined8 **)(this + 0x40);
  if (puVar11 != *(undefined8 **)(this + 0x48)) {
LAB_00100c20:
    *puVar11 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    *(undefined8 **)(this + 0x40) = puVar11 + 1;
    goto LAB_00100c39;
  }
  goto LAB_00100ccd;
LAB_00100c10:
  puVar11 = *(undefined8 **)(this + 0x40);
  if (puVar11 != *(undefined8 **)(this + 0x48)) goto LAB_00100c20;
LAB_00100ccd:
  std::
  vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
  ::_M_realloc_insert<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>
            ((vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
              *)(this + 0x38),puVar11,param_2);
LAB_00100c39:
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}



/* LoaderLogger::AddLogRecorder(std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >&&) */

void __thiscall LoaderLogger::AddLogRecorder(LoaderLogger *this,unique_ptr *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  puVar1 = *(undefined8 **)(this + 0x40);
  if (puVar1 != *(undefined8 **)(this + 0x48)) {
    *puVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined8 **)(this + 0x40) = puVar1 + 1;
    pthread_rwlock_unlock((pthread_rwlock_t *)this);
    return;
  }
  std::
  vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
  ::_M_realloc_insert<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>
            ((vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
              *)(this + 0x38),puVar1,param_1);
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}



/* LoaderLogger::LoaderLogger() */

void __thiscall LoaderLogger::LoaderLogger(LoaderLogger *this)

{
  undefined4 uVar1;
  char *__s;
  long *__n;
  long **__dest;
  long in_FS_OFFSET;
  long *local_70;
  long **local_68;
  long *local_60;
  long *local_58 [3];
  long local_40;
  
  uVar1 = _LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(LoaderLogger **)(this + 0x50) = this + 0x80;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(LoaderLogger **)(this + 0x88) = this + 0xb8;
  *(undefined8 *)(this + 0x90) = 1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  __s = getenv("XR_LOADER_DEBUG");
  if (__s == (char *)0x0) {
    local_68 = local_58;
    local_58[0] = (long *)((ulong)local_58[0] & 0xffffffffffffff00);
    local_60 = (long *)0x0;
LAB_00100ffc:
    MakeStdErrLoaderLogRecorder((unique_ptr *)&local_70);
    AddLogRecorder(this,(unique_ptr *)&local_70);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    if (local_60 == (long *)0x0) goto LAB_0010102b;
  }
  else {
    __dest = local_58;
    local_68 = __dest;
    __n = (long *)strlen(__s);
    local_70 = __n;
    if (__n < (long *)0x10) {
      if (__n == (long *)0x1) {
        local_58[0] = (long *)CONCAT71(local_58[0]._1_7_,*__s);
      }
      else if (__n != (long *)0x0) goto LAB_0010111c;
    }
    else {
      __dest = (long **)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      local_58[0] = local_70;
      local_68 = __dest;
LAB_0010111c:
      memcpy(__dest,__s,(size_t)__n);
      __dest = local_68;
    }
    *(undefined1 *)((long)__dest + (long)local_70) = 0;
    local_60 = local_70;
    if ((local_70 != (long *)0x4) || (*(int *)local_68 != 0x656e6f6e)) goto LAB_00100ffc;
  }
  MakeStdOutLoaderLogRecorder((unique_ptr *)&local_70,0);
  AddLogRecorder(this,(unique_ptr *)&local_70);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
LAB_0010102b:
  if (local_68 != local_58) {
    operator_delete(local_68,(long)local_58[0] + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LogPlatformUtilsError(std::__cxx11::string const&) */

void LogPlatformUtilsError(string *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  long local_98;
  long *local_88 [2];
  long local_78 [2];
  long *local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  local_88[0] = local_78;
  std::__cxx11::string::_M_construct<char_const*>((string *)local_88,"platform_utils");
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar3 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  local_68[0] = local_58;
  std::__cxx11::string::_M_construct<char_const*>((string *)local_68,"OpenXR-Loader");
  LoaderLogger::LogMessage
            ((LoaderLogger *)LoaderLogger::GetInstance()::instance,0x1000,1,(string *)local_68,
             (string *)local_88,param_1,(vector *)local_a8);
  if (local_68[0] != local_58) {
    operator_delete(local_68[0],local_58[0] + 1);
  }
  if (local_88[0] != local_78) {
    operator_delete(local_88[0],local_78[0] + 1);
  }
  uVar2 = local_a8._8_8_;
  uVar1 = local_a8._0_8_;
  for (pvVar4 = (void *)local_a8._0_8_; (void *)uVar2 != pvVar4;
      pvVar4 = (void *)((long)pvVar4 + 0x30)) {
    if (*(void **)((long)pvVar4 + 0x10) != (void *)((long)pvVar4 + 0x20)) {
      operator_delete(*(void **)((long)pvVar4 + 0x10),*(long *)((long)pvVar4 + 0x20) + 1);
    }
  }
  if ((void *)uVar1 == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete((void *)uVar1,local_98 - uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LoaderLogger::RemoveLogRecordersForXrInstance(XrInstance_T*) */

void __thiscall
LoaderLogger::RemoveLogRecordersForXrInstance(LoaderLogger *this,XrInstance_T *param_1)

{
  long *plVar1;
  XrInstance_T *pXVar2;
  LoaderLogger *pLVar3;
  XrInstance_T *pXVar4;
  int iVar5;
  _Hashtable *p_Var6;
  long lVar7;
  LoaderLogger *pLVar8;
  LoaderLogger *pLVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long in_FS_OFFSET;
  XrInstance_T *local_200;
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_1f8 [64];
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_1b8 [64];
  _Hashtable local_178 [64];
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_138 [64];
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_f8 [64];
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_b8 [64];
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_200 = param_1;
  iVar5 = pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  pXVar4 = local_200;
  if (iVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if (*(long *)(this + 0x68) == 0) {
    for (puVar14 = *(undefined8 **)(this + 0x60); puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)*puVar14) {
      if (local_200 == (XrInstance_T *)puVar14[1]) goto LAB_00101452;
    }
  }
  else {
    uVar10 = (ulong)local_200 % *(ulong *)(this + 0x58);
    plVar13 = *(long **)(*(long *)(this + 0x50) + uVar10 * 8);
    if (plVar13 != (long *)0x0) {
      pXVar2 = (XrInstance_T *)((long *)*plVar13)[1];
      plVar1 = (long *)*plVar13;
      while (pXVar2 != local_200) {
        plVar16 = (long *)*plVar1;
        if ((plVar16 == (long *)0x0) ||
           (pXVar2 = (XrInstance_T *)plVar16[1], plVar13 = plVar1, plVar1 = plVar16,
           uVar10 != (ulong)pXVar2 % *(ulong *)(this + 0x58))) goto LAB_00101761;
      }
      if (*plVar13 != 0) goto LAB_00101452;
    }
  }
  goto LAB_00101761;
LAB_00101688:
  pLVar3 = *(LoaderLogger **)pLVar8;
  pLVar9 = pLVar8;
  if (*(LoaderLogger **)pLVar8 == (LoaderLogger *)0x0) goto LAB_00101757;
  goto LAB_0010169a;
LAB_00101452:
  p_Var6 = (_Hashtable *)
           std::__detail::
           _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
           ::operator[]((_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                         *)(this + 0x50),&local_200);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_1f8,p_Var6);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_1b8,(_Hashtable *)local_1f8);
  plVar13 = *(long **)(this + 0x38);
  plVar1 = *(long **)(this + 0x40);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_178,local_1b8,local_1b8);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_138,local_178);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_78,local_138,local_138);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_f8,local_78,local_78);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable(local_78);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_b8,(_Hashtable *)local_f8);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::_Hashtable(local_78,(_Hashtable *)local_b8);
  lVar15 = (long)plVar1 - (long)plVar13;
  plVar16 = plVar1;
  if (0 < lVar15 >> 5) {
    plVar12 = plVar13 + (lVar15 >> 5) * 4;
    do {
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(*plVar13 + 0x10));
      if (lVar15 != 0) goto LAB_001015c4;
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(plVar13[1] + 0x10));
      if (lVar15 != 0) {
        plVar13 = plVar13 + 1;
        goto LAB_001015c4;
      }
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(plVar13[2] + 0x10));
      if (lVar15 != 0) {
        plVar13 = plVar13 + 2;
        goto LAB_001015c4;
      }
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(plVar13[3] + 0x10));
      if (lVar15 != 0) {
        plVar13 = plVar13 + 3;
        goto LAB_001015c4;
      }
      plVar13 = plVar13 + 4;
    } while (plVar13 != plVar12);
    lVar15 = (long)plVar1 - (long)plVar13;
  }
  lVar15 = lVar15 >> 3;
  if (lVar15 == 2) {
LAB_001018e5:
    lVar15 = std::
             _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
             ::find(local_78,*(ulong **)(*plVar13 + 0x10));
    if (lVar15 == 0) {
      plVar13 = plVar13 + 1;
LAB_00101901:
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(*plVar13 + 0x10));
      if (lVar15 == 0) goto LAB_00101848;
    }
LAB_001015c4:
    std::
    _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable(local_78);
    std::
    _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable(local_b8);
    plVar12 = plVar13;
    if (plVar1 != plVar13) {
      while (plVar12 = plVar12 + 1, plVar16 = plVar13, plVar1 != plVar12) {
        while( true ) {
          lVar15 = *plVar12;
          lVar7 = std::
                  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                  ::find(local_f8,*(ulong **)(lVar15 + 0x10));
          if (lVar7 != 0) break;
          *plVar12 = 0;
          plVar16 = (long *)*plVar13;
          *plVar13 = lVar15;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 8))();
          }
          plVar12 = plVar12 + 1;
          plVar13 = plVar13 + 1;
          plVar16 = plVar13;
          if (plVar1 == plVar12) goto LAB_00101632;
        }
      }
    }
  }
  else {
    if (lVar15 == 3) {
      lVar15 = std::
               _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
               ::find(local_78,*(ulong **)(*plVar13 + 0x10));
      if (lVar15 == 0) {
        plVar13 = plVar13 + 1;
        goto LAB_001018e5;
      }
      goto LAB_001015c4;
    }
    if (lVar15 == 1) goto LAB_00101901;
LAB_00101848:
    std::
    _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable(local_78);
    std::
    _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable(local_b8);
  }
LAB_00101632:
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable(local_f8);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable(local_138);
  std::
  vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
  ::_M_erase((vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
              *)(this + 0x38),plVar16,plVar1);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable((_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                 *)local_178);
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable(local_1b8);
  if (*(long *)(this + 0x68) == 0) {
    pLVar3 = *(LoaderLogger **)(this + 0x60);
    pLVar9 = this + 0x60;
    if (*(LoaderLogger **)(this + 0x60) != (LoaderLogger *)0x0) {
LAB_0010169a:
      pLVar8 = pLVar3;
      if (pXVar4 != *(XrInstance_T **)(pLVar8 + 8)) goto LAB_00101688;
      plVar13 = *(long **)pLVar9;
      uVar10 = (ulong)plVar13[1] % *(ulong *)(this + 0x58);
LAB_0010171a:
      lVar15 = *(long *)(this + 0x50);
      lVar7 = *plVar13;
      puVar14 = (undefined8 *)(uVar10 * 8 + lVar15);
      pLVar3 = (LoaderLogger *)*puVar14;
      if (pLVar9 == pLVar3) {
        if (lVar7 != 0) {
          uVar11 = *(ulong *)(lVar7 + 8) % *(ulong *)(this + 0x58);
          if (uVar10 == uVar11) goto LAB_00101739;
          *(LoaderLogger **)(lVar15 + uVar11 * 8) = pLVar9;
        }
        if (pLVar3 == this + 0x60) {
          *(long *)(this + 0x60) = lVar7;
        }
        *puVar14 = 0;
        lVar7 = *plVar13;
      }
      else if ((lVar7 != 0) &&
              (uVar11 = *(ulong *)(lVar7 + 8) % *(ulong *)(this + 0x58), uVar10 != uVar11)) {
        *(LoaderLogger **)(lVar15 + uVar11 * 8) = pLVar9;
        lVar7 = *plVar13;
      }
LAB_00101739:
      *(long *)pLVar9 = lVar7;
      std::
      _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::~_Hashtable((_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                     *)(plVar13 + 2));
      operator_delete(plVar13,0x48);
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + -1;
    }
  }
  else {
    uVar10 = (ulong)pXVar4 % *(ulong *)(this + 0x58);
    pLVar9 = *(LoaderLogger **)(*(long *)(this + 0x50) + uVar10 * 8);
    if (pLVar9 != (LoaderLogger *)0x0) {
      pXVar2 = *(XrInstance_T **)(*(LoaderLogger **)pLVar9 + 8);
      pLVar3 = *(LoaderLogger **)pLVar9;
      do {
        if (pXVar4 == pXVar2) {
          plVar13 = *(long **)pLVar9;
          goto LAB_0010171a;
        }
        pLVar8 = *(LoaderLogger **)pLVar3;
      } while ((pLVar8 != (LoaderLogger *)0x0) &&
              (pXVar2 = *(XrInstance_T **)(pLVar8 + 8), pLVar9 = pLVar3, pLVar3 = pLVar8,
              uVar10 == (ulong)pXVar2 % *(ulong *)(this + 0x58)));
    }
  }
LAB_00101757:
  std::
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  ::~_Hashtable(local_1f8);
LAB_00101761:
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LoaderLogRecorder::Start() */

void __thiscall LoaderLogRecorder::Start(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x1;
  return;
}



/* LoaderLogRecorder::Pause() */

void __thiscall LoaderLogRecorder::Pause(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x0;
  return;
}



/* LoaderLogRecorder::Resume() */

void __thiscall LoaderLogRecorder::Resume(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x1;
  return;
}



/* LoaderLogRecorder::Stop() */

void __thiscall LoaderLogRecorder::Stop(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_Hashtable(std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true> >
   const&) */

void __thiscall
std::
_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::_Hashtable(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
             *this,_Hashtable *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__s;
  _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
  *p_Var8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  p_Var8 = this + 0x30;
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)this = 0;
  *(ulong *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar7;
  if (uVar2 != 1) {
    if (uVar2 >> 0x3c != 0) {
      if (uVar2 >> 0x3d != 0) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    __s = operator_new(uVar2 * 8);
    p_Var8 = (_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *)memset(__s,0,uVar2 * 8);
  }
  plVar11 = *(long **)(param_1 + 0x10);
  *(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    **)this = p_Var8;
  if (plVar11 != (long *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x10);
    *puVar9 = 0;
    uVar2 = plVar11[1];
    *(undefined8 **)(this + 0x10) = puVar9;
    puVar9[1] = uVar2;
    *(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      **)(*(long *)this + (uVar2 % *(ulong *)(this + 8)) * 8) = this + 0x10;
    while (plVar11 = (long *)*plVar11, puVar10 = puVar9, plVar11 != (long *)0x0) {
      while( true ) {
        puVar9 = (undefined8 *)operator_new(0x10);
        *puVar9 = 0;
        uVar2 = plVar11[1];
        puVar9[1] = uVar2;
        uVar4 = *(ulong *)(this + 8);
        lVar5 = *(long *)this;
        *puVar10 = puVar9;
        plVar1 = (long *)(lVar5 + (uVar2 % uVar4) * 8);
        if (*plVar1 != 0) break;
        *plVar1 = (long)puVar10;
        plVar11 = (long *)*plVar11;
        puVar10 = puVar9;
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
    }
  }
  return;
}



/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::~_Hashtable() */

void __thiscall
std::
_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::~_Hashtable(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
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
  if (*(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
        **)this != this + 0x30) {
    operator_delete(*(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                      **)this,*(long *)(this + 8) << 3);
    return;
  }
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
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar1 = *(void **)(this + 200);
  pvVar5 = *(void **)(this + 0xc0);
  if (pvVar1 != pvVar5) {
    do {
      if (*(void **)((long)pvVar5 + 0x10) != (void *)((long)pvVar5 + 0x20)) {
        operator_delete(*(void **)((long)pvVar5 + 0x10),*(long *)((long)pvVar5 + 0x20) + 1);
      }
      pvVar5 = (void *)((long)pvVar5 + 0x30);
    } while (pvVar1 != pvVar5);
    pvVar5 = *(void **)(this + 0xc0);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0xd0) - (long)pvVar5);
  }
  std::
  _Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
  ::clear((_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
           *)(this + 0x88));
  if (*(LoaderLogger **)(this + 0x88) != this + 0xb8) {
    operator_delete(*(LoaderLogger **)(this + 0x88),*(long *)(this + 0x90) << 3);
  }
  puVar4 = *(undefined8 **)(this + 0x60);
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    std::
    _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
    ::~_Hashtable((_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                   *)(puVar4 + 2));
    operator_delete(puVar4,0x48);
    puVar4 = puVar2;
  }
  memset(*(void **)(this + 0x50),0,*(long *)(this + 0x58) * 8);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(LoaderLogger **)(this + 0x50) != this + 0x80) {
    operator_delete(*(LoaderLogger **)(this + 0x50),*(long *)(this + 0x58) << 3);
  }
  plVar3 = *(long **)(this + 0x40);
  plVar6 = *(long **)(this + 0x38);
  if (plVar3 != plVar6) {
    do {
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar3 != plVar6);
    plVar6 = *(long **)(this + 0x38);
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6,*(long *)(this + 0x48) - (long)plVar6);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__detail::_Map_base<XrInstance_T*, std::pair<XrInstance_T* const,
   std::unordered_set<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>,
   std::allocator<unsigned long> > >, std::allocator<std::pair<XrInstance_T* const,
   std::unordered_set<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>,
   std::allocator<unsigned long> > > >, std::__detail::_Select1st, std::equal_to<XrInstance_T*>,
   std::hash<XrInstance_T*>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](XrInstance_T* const&) */

long * __thiscall
std::__detail::
_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,XrInstance_T **param_1)

{
  undefined8 *puVar1;
  XrInstance_T *pXVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  long *plVar6;
  _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var7;
  char *pcVar8;
  XrInstance_T *pXVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong extraout_RDX;
  byte *pbVar13;
  undefined1 *puVar14;
  _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_38 [8];
  
  puVar14 = auStack_38;
  pXVar2 = *param_1;
  uVar12 = (ulong)pXVar2 % *(ulong *)(this + 8);
  plVar6 = *(long **)(*(long *)this + uVar12 * 8);
  puVar1 = (undefined8 *)(uVar12 * 8);
  if (plVar6 != (long *)0x0) {
    pXVar9 = (XrInstance_T *)((long *)*plVar6)[1];
    plVar16 = (long *)*plVar6;
    while (pXVar9 != pXVar2) {
      plVar17 = (long *)*plVar16;
      if ((plVar17 == (long *)0x0) ||
         (pXVar9 = (XrInstance_T *)plVar17[1], plVar6 = plVar16, plVar16 = plVar17,
         uVar12 != (ulong)pXVar9 % *(ulong *)(this + 8))) goto LAB_00101e30;
    }
    if (*plVar6 != 0) {
      return (long *)(*plVar6 + 0x10);
    }
  }
LAB_00101e30:
  plVar6 = (long *)operator_new(0x48);
  uVar12 = *(ulong *)(this + 0x18);
  uVar19 = *(ulong *)(this + 8);
  *plVar6 = 0;
  pXVar9 = *param_1;
  p_Var7 = this + 0x20;
  *(undefined1 (*) [16])(plVar6 + 6) = (undefined1  [16])0x0;
  puVar11 = (undefined8 *)0x1;
  plVar6[1] = (long)pXVar9;
  plVar6[8] = 0;
  plVar6[2] = (long)(plVar6 + 8);
  plVar6[3] = 1;
  *(undefined4 *)(plVar6 + 6) = 0x3f800000;
  *(undefined1 (*) [16])(plVar6 + 4) = (undefined1  [16])0x0;
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)p_Var7,uVar19,uVar12);
  if (cVar5 == '\0') {
    p_Var7 = *(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
               **)this;
    p_Var20 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
               *)((long)puVar1 + (long)p_Var7);
    plVar16 = *(long **)p_Var20;
    goto joined_r0x00101f89;
  }
  if (extraout_RDX == 1) {
    p_Var7 = this + 0x30;
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    if (extraout_RDX >> 0x3c != 0) {
      p_Var20 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                 *)(extraout_RDX >> 0x3d);
      uVar21 = (extraout_RDX >> 0x3c & 1) != 0;
      uVar22 = p_Var20 ==
               (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                *)0x0;
      if (!(bool)uVar22) {
        std::__throw_bad_array_new_length();
      }
      auVar23 = std::__throw_bad_alloc();
      pbVar13 = auVar23._8_8_;
      pcVar8 = auVar23._0_8_;
      if ((bool)uVar21 || (bool)uVar22) {
        pcVar18 = (char *)((long)pcVar8 * 2);
        if (pcVar8 <= pcVar18) goto code_r0x00102078;
        uVar12 = 0x7ffffffffffffff8;
        puVar14 = auStack_38;
LAB_0010212a:
        *(byte **)(puVar14 + 0x18) = pbVar13;
        *(undefined8 **)(puVar14 + 0x10) = puVar11;
        *(undefined8 *)(puVar14 + -8) = 0x10213c;
        puVar10 = (undefined8 *)operator_new(uVar12);
        lVar3 = *(long *)(puVar14 + 0x10);
        *(ulong *)(puVar14 + 8) = (long)puVar10 + uVar12;
        uVar4 = **(undefined8 **)(puVar14 + 0x18);
        p_Var7 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                  *)(puVar10 + 1);
        **(undefined8 **)(puVar14 + 0x18) = 0;
        *(undefined8 *)((long)puVar10 + lVar3) = uVar4;
        if (this != (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                     *)pXVar2) {
LAB_001020a4:
          pXVar9 = pXVar2;
          puVar11 = puVar10;
          do {
            uVar4 = *(undefined8 *)pXVar9;
            pXVar9 = pXVar9 + 8;
            *puVar11 = uVar4;
            puVar11 = puVar11 + 1;
          } while (pXVar9 != (XrInstance_T *)this);
          p_Var7 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    *)((long)puVar10 + (long)(this + (8 - (long)pXVar2)));
        }
        p_Var15 = p_Var7;
        if (this == p_Var20) goto LAB_001020e2;
      }
      else {
        pcVar18 = (char *)(ulong)*(uint *)(p_Var7 + (long)plVar6 * 2 + 0x72);
        puVar14 = &stack0xffffffffffffffd8;
        if (*pbVar13 <= (byte)((ulong)this >> 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *pcVar8 = *pcVar8 + auVar23[0];
code_r0x00102078:
        if (pcVar18 != (char *)0x0) {
          if ((char *)0xfffffffffffffff < pcVar18) {
            pcVar18 = (char *)0xfffffffffffffff;
          }
          uVar12 = (long)pcVar18 * 8;
          goto LAB_0010212a;
        }
        uVar4 = *(undefined8 *)pbVar13;
        puVar10 = (undefined8 *)0x0;
        pbVar13[0] = 0;
        pbVar13[1] = 0;
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        pbVar13[4] = 0;
        pbVar13[5] = 0;
        pbVar13[6] = 0;
        pbVar13[7] = 0;
        p_Var7 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                  *)0x8;
        *(undefined8 *)(puVar14 + 8) = 0;
        *puVar11 = uVar4;
        if (this != (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                     *)pXVar2) goto LAB_001020a4;
      }
      p_Var15 = p_Var7 + ((long)p_Var20 - (long)this);
      *(undefined8 *)(puVar14 + -8) = 0x1020e2;
      memcpy(p_Var7,this,(long)p_Var20 - (long)this);
LAB_001020e2:
      if (pXVar2 != (XrInstance_T *)0x0) {
        lVar3 = puVar1[2];
        *(undefined8 *)(puVar14 + -8) = 0x1020f6;
        operator_delete(pXVar2,lVar3 - (long)pXVar2);
      }
      plVar6 = *(long **)(puVar14 + 8);
      *puVar1 = puVar10;
      puVar1[1] = p_Var15;
      puVar1[2] = plVar6;
      return plVar6;
    }
    p_Var7 = (_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              *)operator_new(extraout_RDX * 8);
    memset(p_Var7,0,extraout_RDX * 8);
  }
  plVar16 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  uVar12 = 0;
  while (uVar19 = uVar12, plVar17 = plVar16, plVar16 != (long *)0x0) {
    while( true ) {
      plVar16 = (long *)*plVar17;
      uVar12 = (ulong)plVar17[1] % extraout_RDX;
      p_Var20 = p_Var7 + uVar12 * 8;
      if (*(long **)p_Var20 == (long *)0x0) break;
      *plVar17 = **(long **)p_Var20;
      **(undefined8 **)p_Var20 = plVar17;
      plVar17 = plVar16;
      if (plVar16 == (long *)0x0) goto LAB_00101f53;
    }
    *plVar17 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar17;
    *(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var20 = this + 0x10;
    if (*plVar17 != 0) {
      *(long **)(p_Var7 + uVar19 * 8) = plVar17;
    }
  }
LAB_00101f53:
  if (*(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)this != this + 0x30) {
    operator_delete(*(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                      **)this,*(long *)(this + 8) << 3);
  }
  *(ulong *)(this + 8) = extraout_RDX;
  *(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
    **)this = p_Var7;
  p_Var20 = p_Var7 + ((ulong)pXVar2 % extraout_RDX) * 8;
  plVar16 = *(long **)p_Var20;
joined_r0x00101f89:
  if (plVar16 == (long *)0x0) {
    lVar3 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar6;
    *plVar6 = lVar3;
    if (lVar3 != 0) {
      *(long **)(p_Var7 + (*(ulong *)(lVar3 + 8) % *(ulong *)(this + 8)) * 8) = plVar6;
    }
    *(_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>,std::allocator<std::pair<XrInstance_T*const,std::unordered_set<unsigned_long,std::hash<unsigned_long>,std::equal_to<unsigned_long>,std::allocator<unsigned_long>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var20 = this + 0x10;
  }
  else {
    *plVar6 = *plVar16;
    **(undefined8 **)p_Var20 = plVar6;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar6 + 2;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::unique_ptr<LoaderLogRecorder, std::default_delete<LoaderLogRecorder> >,
   std::allocator<std::unique_ptr<LoaderLogRecorder, std::default_delete<LoaderLogRecorder> > >
   >::_M_realloc_insert<std::unique_ptr<LoaderLogRecorder, std::default_delete<LoaderLogRecorder> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >*, std::vector<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >, std::allocator<std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> > > > >, std::unique_ptr<LoaderLogRecorder,
   std::default_delete<LoaderLogRecorder> >&&) */

void __thiscall
std::
vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
::_M_realloc_insert<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>
          (vector<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>,std::allocator<std::unique_ptr<LoaderLogRecorder,std::default_delete<LoaderLogRecorder>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_00102120;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0010212a:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_001020a4:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (puVar6 != param_2);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_001020e2;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_00102120:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0010212a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0010212a;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_001020a4;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_001020e2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_Hashtable(std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true> >&&,
   std::allocator<std::__detail::_Hash_node<unsigned long, false> >&&, std::integral_constant<bool,
   true>) */

void std::
     _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
     ::_Hashtable(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *param_2;
  uVar2 = param_2[1];
  lVar3 = param_2[2];
  lVar5 = param_2[4];
  lVar6 = param_2[5];
  *param_1 = lVar1;
  param_1[1] = uVar2;
  param_1[2] = lVar3;
  lVar4 = param_2[3];
  param_1[6] = 0;
  param_1[3] = lVar4;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  if ((long *)lVar1 == param_2 + 6) {
    *param_1 = (long)(param_1 + 6);
    param_1[6] = param_2[6];
  }
  if (lVar3 != 0) {
    *(long **)(*param_1 + (*(ulong *)(lVar3 + 8) % uVar2) * 8) = param_1 + 2;
  }
  param_2[5] = 0;
  param_2[1] = 1;
  param_2[6] = 0;
  *param_2 = (long)(param_2 + 6);
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::~_Hashtable() */

void __thiscall
std::
_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::~_Hashtable(_Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_Hashtable(std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true> >
   const&) */

void std::
     _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
     ::_Hashtable(_Hashtable *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_Hashtable(std::_Hashtable<unsigned long, unsigned long, std::allocator<unsigned long>,
   std::__detail::_Identity, std::equal_to<unsigned long>, std::hash<unsigned long>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true> >&&,
   std::allocator<std::__detail::_Hash_node<unsigned long, false> >&&, std::integral_constant<bool,
   true>) */

void std::
     _Hashtable<unsigned_long,unsigned_long,std::allocator<unsigned_long>,std::__detail::_Identity,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
     ::_Hashtable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LoaderLogger::~LoaderLogger() */

void __thiscall LoaderLogger::~LoaderLogger(LoaderLogger *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


