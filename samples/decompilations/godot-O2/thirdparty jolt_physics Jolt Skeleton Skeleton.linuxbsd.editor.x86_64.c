
/* JPH::Skeleton::sCreateRTTI(JPH::RTTI&) */

void JPH::Skeleton::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::Skeleton*)::{lambda()#1}::_FUN(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*Allocate)(0x20);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::Skeleton::Joint*)::{lambda()#1}::_FUN(void)

{
  long *plVar1;
  
  plVar1 = (long *)(*Allocate)(0x48);
  plVar1[1] = 0;
  *plVar1 = (long)(plVar1 + 2);
  *(undefined1 *)(plVar1 + 2) = 0;
  plVar1[4] = (long)(plVar1 + 6);
  plVar1[5] = 0;
  *(undefined1 *)(plVar1 + 6) = 0;
  *(undefined4 *)(plVar1 + 8) = 0xffffffff;
  return;
}



/* JPH::Skeleton::Joint::sCreateRTTI(JPH::RTTI&) */

void JPH::Skeleton::Joint::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::Skeleton*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    plVar2 = *(long **)((long)param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      if ((*(long *)((long)param_1 + 8) != 0) &&
         (plVar1 = plVar2 + *(long *)((long)param_1 + 8) * 9, plVar2 < plVar1)) {
        do {
          if ((long *)plVar2[4] != plVar2 + 6) {
            (*Free)();
          }
          if ((long *)*plVar2 != plVar2 + 2) {
            (*Free)();
          }
          plVar2 = plVar2 + 9;
        } while (plVar2 < plVar1);
        plVar2 = *(long **)((long)param_1 + 0x18);
      }
      *(undefined8 *)((long)param_1 + 8) = 0;
      (*Free)(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x0010011a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::Skeleton::Joint*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x20) != (long)param_1 + 0x30) {
      (*Free)();
    }
                    /* WARNING: Load size is inaccurate */
    if (*param_1 != (long)param_1 + 0x10) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00100166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::Skeleton::Joint*) */

undefined1 * JPH::GetRTTIOfType(Joint *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::Skeleton::Joint*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::Skeleton::Joint*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::Skeleton::Joint*)::rtti,"Skeleton::Joint",0x48,
                      GetRTTIOfType(JPH::Skeleton::Joint*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::Skeleton::Joint*)::{lambda(void*)#1}::_FUN,
                      Skeleton::Joint::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::Skeleton::Joint*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::Skeleton::Joint*)::rtti);
      return GetRTTIOfType(JPH::Skeleton::Joint*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::Skeleton::Joint*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::Skeleton*) */

undefined1 * JPH::GetRTTIOfType(Skeleton *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::Skeleton*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::Skeleton*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::Skeleton*)::rtti,"Skeleton",0x20,
                      GetRTTIOfType(JPH::Skeleton*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::Skeleton*)::{lambda(void*)#1}::_FUN,Skeleton::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::Skeleton*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::Skeleton*)::rtti);
      return GetRTTIOfType(JPH::Skeleton*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::Skeleton*)::rtti;
}



/* JPH::Skeleton::GetJointIndex(std::basic_string_view<char, std::char_traits<char> > const&) const
    */

int __thiscall JPH::Skeleton::GetJointIndex(Skeleton *this,basic_string_view *param_1)

{
  undefined8 uVar1;
  size_t __n;
  void *__s2;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(this + 8);
  if (0 < (int)uVar1) {
    __n = *(size_t *)param_1;
    __s2 = *(void **)(param_1 + 8);
    iVar4 = 0;
    puVar3 = *(undefined8 **)(this + 0x18);
    do {
      if (puVar3[1] == __n) {
        if (__n == 0) {
          return iVar4;
        }
        iVar2 = memcmp((void *)*puVar3,__s2,__n);
        if (iVar2 == 0) {
          return iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 9;
    } while (iVar4 != (int)uVar1);
  }
  return -1;
}



/* JPH::Skeleton::CalculateParentJointIndices() */

void __thiscall JPH::Skeleton::CalculateParentJointIndices(Skeleton *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  lVar3 = *(long *)(this + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = lVar3 + *(long *)(this + 8) * 0x48;
  for (; lVar1 != lVar3; lVar3 = lVar3 + 0x48) {
    local_40 = *(undefined8 *)(lVar3 + 0x20);
    local_48 = *(undefined8 *)(lVar3 + 0x28);
    uVar2 = GetJointIndex(this,(basic_string_view *)&local_48);
    *(undefined4 *)(lVar3 + 0x40) = uVar2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Skeleton::AreJointsCorrectlyOrdered() const */

undefined8 __thiscall JPH::Skeleton::AreJointsCorrectlyOrdered(Skeleton *this)

{
  int iVar1;
  int *piVar2;
  
  if (0 < (int)*(undefined8 *)(this + 8)) {
    iVar1 = 0;
    piVar2 = (int *)(*(long *)(this + 0x18) + 0x40);
    do {
      if (iVar1 <= *piVar2) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (iVar1 != (int)*(undefined8 *)(this + 8));
  }
  return 1;
}



/* JPH::Skeleton::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::Skeleton::SaveBinaryState(Skeleton *this,StreamOut *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = (undefined4)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  puVar3 = *(undefined8 **)(this + 0x18);
  puVar1 = puVar3 + *(long *)(this + 8) * 9;
  for (; puVar1 != puVar3; puVar3 = puVar3 + 9) {
    local_34 = (undefined4)puVar3[1];
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
    cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,*puVar3,local_34);
    }
    (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar3 + 8,4);
    local_34 = (undefined4)puVar3[5];
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
    cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar3[4],local_34);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Skeleton::sRestoreFromBinaryState(JPH::StreamIn&) */

Skeleton * __thiscall JPH::Skeleton::sRestoreFromBinaryState(Skeleton *this,StreamIn *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  char cVar6;
  Skeleton SVar7;
  int *piVar8;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this_00;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar18;
  long lVar19;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar20;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = (int *)(*Allocate)(0x20);
  *piVar8 = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  *(undefined1 (*) [16])(piVar8 + 2) = (undefined1  [16])0x0;
  LOCK();
  *piVar8 = *piVar8 + 1;
  UNLOCK();
  local_48 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_48,4);
  uVar11 = (ulong)local_48;
  uVar17 = *(ulong *)(piVar8 + 2);
  if (uVar11 < uVar17) {
    lVar19 = *(long *)(piVar8 + 6);
    for (plVar12 = (long *)(lVar19 + uVar11 * 0x48); plVar12 < (long *)(lVar19 + uVar17 * 0x48);
        plVar12 = plVar12 + 9) {
      if ((long *)plVar12[4] != plVar12 + 6) {
        (*Free)();
      }
      if ((long *)*plVar12 != plVar12 + 2) {
        (*Free)();
      }
    }
    if (*(ulong *)(piVar8 + 4) < uVar11) goto LAB_0010086b;
LAB_00100608:
    this_00 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar8 + 6);
  }
  else {
    if (uVar11 <= *(ulong *)(piVar8 + 4)) goto LAB_00100608;
LAB_0010086b:
    this_00 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
              (*Allocate)(uVar11 * 0x48);
    pbVar18 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar8 + 6);
    if (pbVar18 != (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0) {
      lVar19 = *(long *)(piVar8 + 2) * 0x48;
      if (this_00 < pbVar18) {
        if (this_00 < this_00 + lVar19) {
          pbVar9 = pbVar18 + 0x10;
          pbVar13 = pbVar18 + 0x30;
          pbVar20 = this_00;
          if (this_00 != (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0)
          goto LAB_00100944;
          if (pbVar13 !=
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
               (pbVar18 + 0x20)) {
            (*Free)();
          }
          pbVar20 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0;
          if (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar18 ==
              pbVar9) goto LAB_0010092a;
          do {
            (*Free)();
LAB_0010092a:
            do {
              pbVar20 = pbVar20 + 0x48;
              pbVar9 = pbVar9 + 0x48;
              pbVar13 = pbVar13 + 0x48;
              if (this_00 + lVar19 <= pbVar20) goto LAB_00100aea;
LAB_00100944:
              pbVar18 = pbVar20 + 0x10;
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar20 =
                   pbVar18;
              if (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                   (pbVar9 + -0x10) == pbVar9) {
                lVar16 = *(long *)(pbVar9 + -8);
                uVar17 = lVar16 + 1;
                uVar14 = (uint)uVar17;
                if (7 < uVar14) {
                  *(undefined8 *)pbVar18 = *(undefined8 *)pbVar9;
                  *(undefined8 *)(pbVar20 + (uVar17 & 0xffffffff) + 8) =
                       *(undefined8 *)(pbVar9 + ((uVar17 & 0xffffffff) - 8));
                  lVar16 = (long)pbVar18 - ((ulong)(pbVar20 + 0x18) & 0xfffffffffffffff8);
                  uVar14 = uVar14 + (int)lVar16 & 0xfffffff8;
                  if (7 < uVar14) {
                    uVar17 = 0;
                    do {
                      uVar15 = (int)uVar17 + 8;
                      *(undefined8 *)(((ulong)(pbVar20 + 0x18) & 0xfffffffffffffff8) + uVar17) =
                           *(undefined8 *)(pbVar9 + (uVar17 - lVar16));
                      uVar17 = (ulong)uVar15;
                    } while (uVar15 < uVar14);
                  }
                  goto LAB_00100962;
                }
                if ((uVar17 & 4) == 0) {
                  if (uVar14 != 0) {
                    *pbVar18 = *pbVar9;
                    if ((uVar17 & 2) == 0) goto LAB_00100962;
                    *(undefined2 *)(pbVar20 + (uVar17 & 0xffffffff) + 0xe) =
                         *(undefined2 *)(pbVar9 + ((uVar17 & 0xffffffff) - 2));
                    lVar16 = *(long *)(pbVar9 + -8);
                  }
                }
                else {
                  *(undefined4 *)pbVar18 = *(undefined4 *)pbVar9;
                  *(undefined4 *)(pbVar20 + (uVar17 & 0xffffffff) + 0xc) =
                       *(undefined4 *)(pbVar9 + ((uVar17 & 0xffffffff) - 4));
                  lVar16 = *(long *)(pbVar9 + -8);
                }
              }
              else {
                *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar20 =
                     *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                      (pbVar9 + -0x10);
                *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)pbVar9;
LAB_00100962:
                lVar16 = *(long *)(pbVar9 + -8);
              }
              *(long *)(pbVar20 + 8) = lVar16;
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
               (pbVar9 + -0x10) = pbVar9;
              *(undefined8 *)(pbVar9 + -8) = 0;
              *pbVar9 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
               (pbVar20 + 0x20) = pbVar20 + 0x30;
              if (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                   (pbVar9 + 0x10) == pbVar13) {
                lVar16 = *(long *)(pbVar9 + 0x18);
                uVar17 = lVar16 + 1;
                uVar14 = (uint)uVar17;
                if (7 < uVar14) {
                  *(undefined8 *)(pbVar20 + 0x30) = *(undefined8 *)pbVar13;
                  *(undefined8 *)(pbVar20 + (uVar17 & 0xffffffff) + 0x28) =
                       *(undefined8 *)(pbVar13 + ((uVar17 & 0xffffffff) - 8));
                  lVar16 = (long)(pbVar20 + 0x30) - ((ulong)(pbVar20 + 0x38) & 0xfffffffffffffff8);
                  uVar14 = uVar14 + (int)lVar16 & 0xfffffff8;
                  if (7 < uVar14) {
                    uVar17 = 0;
                    do {
                      uVar15 = (int)uVar17 + 8;
                      *(undefined8 *)(((ulong)(pbVar20 + 0x38) & 0xfffffffffffffff8) + uVar17) =
                           *(undefined8 *)(pbVar13 + (uVar17 - lVar16));
                      uVar17 = (ulong)uVar15;
                    } while (uVar15 < uVar14);
                  }
                  goto LAB_0010099a;
                }
                if ((uVar17 & 4) == 0) {
                  if (uVar14 != 0) {
                    pbVar20[0x30] = *pbVar13;
                    if ((uVar17 & 2) == 0) goto LAB_0010099a;
                    *(undefined2 *)(pbVar20 + (uVar17 & 0xffffffff) + 0x2e) =
                         *(undefined2 *)(pbVar13 + ((uVar17 & 0xffffffff) - 2));
                    lVar16 = *(long *)(pbVar9 + 0x18);
                  }
                }
                else {
                  *(undefined4 *)(pbVar20 + 0x30) = *(undefined4 *)pbVar13;
                  *(undefined4 *)(pbVar20 + (uVar17 & 0xffffffff) + 0x2c) =
                       *(undefined4 *)(pbVar13 + ((uVar17 & 0xffffffff) - 4));
                  lVar16 = *(long *)(pbVar9 + 0x18);
                }
              }
              else {
                *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                 (pbVar20 + 0x20) =
                     *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                      (pbVar9 + 0x10);
                *(undefined8 *)(pbVar20 + 0x30) = *(undefined8 *)(pbVar9 + 0x20);
LAB_0010099a:
                lVar16 = *(long *)(pbVar9 + 0x18);
              }
              uVar2 = *(undefined4 *)(pbVar9 + 0x30);
              *(long *)(pbVar20 + 0x28) = lVar16;
              *(undefined4 *)(pbVar20 + 0x40) = uVar2;
            } while (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                      (pbVar9 + -0x10) == pbVar9);
          } while( true );
        }
      }
      else {
        pbVar9 = this_00 + lVar19 + -0x48;
        if (this_00 <= pbVar9) {
          pbVar18 = pbVar18 + lVar19 + -0x38;
          do {
            pbVar13 = pbVar9 + 0x10;
            *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar9 = pbVar13;
            if (pbVar18 ==
                *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                 (pbVar18 + -0x10)) {
              uVar17 = *(long *)(pbVar18 + -8) + 1;
              uVar14 = (uint)uVar17;
              if (uVar14 < 8) {
                if ((uVar17 & 4) == 0) {
                  if ((uVar14 != 0) && (*pbVar13 = *pbVar18, (uVar17 & 2) != 0)) {
                    *(undefined2 *)(pbVar9 + (uVar17 & 0xffffffff) + 0xe) =
                         *(undefined2 *)(pbVar18 + ((uVar17 & 0xffffffff) - 2));
                  }
                }
                else {
                  *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
                  *(undefined4 *)(pbVar9 + (uVar17 & 0xffffffff) + 0xc) =
                       *(undefined4 *)(pbVar18 + ((uVar17 & 0xffffffff) - 4));
                }
              }
              else {
                *(undefined8 *)pbVar13 = *(undefined8 *)pbVar18;
                *(undefined8 *)(pbVar9 + (uVar17 & 0xffffffff) + 8) =
                     *(undefined8 *)(pbVar18 + ((uVar17 & 0xffffffff) - 8));
                lVar19 = (long)pbVar13 - ((ulong)(pbVar9 + 0x18) & 0xfffffffffffffff8);
                uVar14 = uVar14 + (int)lVar19 & 0xfffffff8;
                if (7 < uVar14) {
                  uVar15 = 0;
                  do {
                    uVar17 = (ulong)uVar15;
                    uVar15 = uVar15 + 8;
                    *(undefined8 *)(((ulong)(pbVar9 + 0x18) & 0xfffffffffffffff8) + uVar17) =
                         *(undefined8 *)(pbVar18 + (uVar17 - lVar19));
                  } while (uVar15 < uVar14);
                }
              }
            }
            else {
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar9 =
                   *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                    (pbVar18 + -0x10);
              *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)pbVar18;
            }
            uVar3 = *(undefined8 *)(pbVar18 + -8);
            pbVar13 = pbVar9 + 0x30;
            *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar18 + -0x10)
                 = pbVar18;
            *(undefined8 *)(pbVar18 + -8) = 0;
            *(undefined8 *)(pbVar9 + 8) = uVar3;
            *pbVar18 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
            *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar9 + 0x20) =
                 pbVar13;
            pbVar20 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                       (pbVar18 + 0x10);
            if (pbVar20 == pbVar18 + 0x20) {
              lVar19 = *(long *)(pbVar18 + 0x18);
              uVar17 = lVar19 + 1;
              uVar14 = (uint)uVar17;
              if (7 < uVar14) {
                *(undefined8 *)pbVar13 = *(undefined8 *)pbVar20;
                *(undefined8 *)(pbVar9 + (uVar17 & 0xffffffff) + 0x28) =
                     *(undefined8 *)(pbVar20 + ((uVar17 & 0xffffffff) - 8));
                lVar19 = (long)pbVar13 - ((ulong)(pbVar9 + 0x38) & 0xfffffffffffffff8);
                uVar14 = uVar14 + (int)lVar19 & 0xfffffff8;
                if (7 < uVar14) {
                  uVar15 = 0;
                  do {
                    uVar17 = (ulong)uVar15;
                    uVar15 = uVar15 + 8;
                    *(undefined8 *)(((ulong)(pbVar9 + 0x38) & 0xfffffffffffffff8) + uVar17) =
                         *(undefined8 *)(pbVar20 + (uVar17 - lVar19));
                  } while (uVar15 < uVar14);
                }
                goto LAB_00100aac;
              }
              if ((uVar17 & 4) == 0) {
                if (uVar14 != 0) {
                  *pbVar13 = *pbVar20;
                  if ((uVar17 & 2) == 0) goto LAB_00100aac;
                  *(undefined2 *)(pbVar9 + (uVar17 & 0xffffffff) + 0x2e) =
                       *(undefined2 *)(pbVar20 + ((uVar17 & 0xffffffff) - 2));
                  lVar19 = *(long *)(pbVar18 + 0x18);
                }
              }
              else {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar20;
                *(undefined4 *)(pbVar9 + (uVar17 & 0xffffffff) + 0x2c) =
                     *(undefined4 *)(pbVar20 + ((uVar17 & 0xffffffff) - 4));
                lVar19 = *(long *)(pbVar18 + 0x18);
              }
            }
            else {
              uVar3 = *(undefined8 *)(pbVar18 + 0x20);
              *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar9 + 0x20)
                   = pbVar20;
              *(undefined8 *)(pbVar9 + 0x30) = uVar3;
LAB_00100aac:
              lVar19 = *(long *)(pbVar18 + 0x18);
            }
            *(long *)(pbVar9 + 0x28) = lVar19;
            pbVar13 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                       (pbVar18 + -0x10);
            *(undefined4 *)(pbVar9 + 0x40) = *(undefined4 *)(pbVar18 + 0x30);
            if (pbVar18 != pbVar13) {
              (*Free)();
            }
            pbVar9 = pbVar9 + -0x48;
            pbVar18 = pbVar18 + -0x48;
          } while (this_00 <= pbVar9);
LAB_00100aea:
          pbVar18 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                     (piVar8 + 6);
        }
      }
      (*Free)(pbVar18);
    }
    *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar8 + 6) = this_00;
    *(ulong *)(piVar8 + 4) = uVar11;
  }
  pbVar18 = this_00 + uVar11 * 0x48;
  pbVar9 = this_00 + *(long *)(piVar8 + 2) * 0x48;
  if (pbVar9 < pbVar18) {
    if (pbVar9 == (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0)
    goto LAB_0010065e;
    do {
      *(undefined8 *)(pbVar9 + 8) = 0;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar9 = pbVar9 + 0x10;
      pbVar9[0x10] = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar9 + 0x20) =
           pbVar9 + 0x30;
      *(undefined8 *)(pbVar9 + 0x28) = 0;
      pbVar9[0x30] = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
      *(undefined4 *)(pbVar9 + 0x40) = 0xffffffff;
LAB_0010065e:
      pbVar9 = pbVar9 + 0x48;
    } while (pbVar9 < pbVar18);
    this_00 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar8 + 6);
    pbVar18 = this_00 + uVar11 * 0x48;
  }
  *(ulong *)(piVar8 + 2) = uVar11;
  for (; this_00 != pbVar18; this_00 = this_00 + 0x48) {
    while( true ) {
      local_44 = 0;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
      cVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
      if ((cVar6 == '\0') &&
         (cVar6 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar6 == '\0')) {
        std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::resize
                  (this_00,(ulong)local_44,'\0');
        (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)this_00,local_44);
      }
      else {
        *(undefined8 *)(this_00 + 8) = 0;
        **(undefined1 **)this_00 = 0;
      }
      (**(code **)(*(long *)param_1 + 0x10))(param_1,this_00 + 0x40,4);
      local_44 = 0;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
      cVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
      if ((cVar6 != '\0') ||
         (cVar6 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar6 != '\0')) break;
      pbVar9 = this_00 + 0x48;
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::resize
                (this_00 + 0x20,(ulong)local_44,'\0');
      (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this_00 + 0x20),local_44);
      this_00 = pbVar9;
      if (pbVar18 == pbVar9) goto LAB_00100790;
    }
    *(undefined8 *)(this_00 + 0x28) = 0;
    **(undefined1 **)(this_00 + 0x20) = 0;
  }
LAB_00100790:
  lVar19 = *(long *)param_1;
  this[0x20] = (Skeleton)0x0;
  cVar6 = (**(code **)(lVar19 + 0x18))(param_1);
  if ((cVar6 != '\0') || (cVar6 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar6 != '\0')) {
    if (this[0x20] == (Skeleton)0x1) {
      piVar4 = *(int **)this;
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          plVar12 = *(long **)(piVar4 + 6);
          if (plVar12 != (long *)0x0) {
            if ((*(long *)(piVar4 + 2) != 0) &&
               (plVar1 = plVar12 + *(long *)(piVar4 + 2) * 9, plVar12 < plVar1)) {
              do {
                if ((long *)plVar12[4] != plVar12 + 6) {
                  (*Free)();
                }
                if ((long *)*plVar12 != plVar12 + 2) {
                  (*Free)();
                }
                plVar12 = plVar12 + 9;
              } while (plVar12 < plVar1);
              plVar12 = *(long **)(piVar4 + 6);
            }
            piVar4[2] = 0;
            piVar4[3] = 0;
            (*Free)(plVar12);
          }
          (*Free)(piVar4);
        }
      }
    }
    else if ((this[0x20] == (Skeleton)0x2) && (*(Skeleton **)this != this + 0x10)) {
      (*Free)();
    }
    this[0x20] = (Skeleton)0x0;
    *(Skeleton **)this = this + 0x10;
    puVar10 = (undefined8 *)(*Allocate)(0x24);
    uVar5 = _UNK_001012f8;
    uVar3 = __LC4;
    *(undefined8 *)(this + 0x10) = 0x23;
    *(undefined8 **)this = puVar10;
    *puVar10 = uVar3;
    puVar10[1] = uVar5;
    uVar3 = _UNK_00101308;
    puVar10[2] = __LC5;
    puVar10[3] = uVar3;
    *(undefined4 *)((long)puVar10 + 0x1f) = 0x6d616572;
    *(undefined8 *)(this + 8) = 0x23;
    *(undefined1 *)(*(long *)this + 0x23) = 0;
    SVar7 = (Skeleton)0x2;
    goto LAB_0010081f;
  }
  if (this[0x20] == (Skeleton)0x1) {
    piVar4 = *(int **)this;
    if (piVar4 == (int *)0x0) goto LAB_00100a04;
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 != 0) goto LAB_00100a04;
    plVar12 = *(long **)(piVar4 + 6);
    if (plVar12 != (long *)0x0) {
      if ((*(long *)(piVar4 + 2) != 0) &&
         (plVar1 = plVar12 + *(long *)(piVar4 + 2) * 9, plVar12 < plVar1)) {
        do {
          if ((long *)plVar12[4] != plVar12 + 6) {
            (*Free)();
          }
          if ((long *)*plVar12 != plVar12 + 2) {
            (*Free)();
          }
          plVar12 = plVar12 + 9;
        } while (plVar12 < plVar1);
        plVar12 = *(long **)(piVar4 + 6);
      }
      piVar4[2] = 0;
      piVar4[3] = 0;
      (*Free)(plVar12);
    }
    (*Free)(piVar4);
    this[0x20] = (Skeleton)0x0;
    *(int **)this = piVar8;
  }
  else {
    if ((this[0x20] == (Skeleton)0x2) && (*(Skeleton **)this != this + 0x10)) {
      (*Free)();
    }
LAB_00100a04:
    this[0x20] = (Skeleton)0x0;
    *(int **)this = piVar8;
  }
  LOCK();
  *piVar8 = *piVar8 + 1;
  UNLOCK();
  SVar7 = (Skeleton)0x1;
LAB_0010081f:
  this[0x20] = SVar7;
  LOCK();
  *piVar8 = *piVar8 + -1;
  UNLOCK();
  if (*piVar8 == 0) {
    plVar12 = *(long **)(piVar8 + 6);
    if (plVar12 != (long *)0x0) {
      if ((*(long *)(piVar8 + 2) != 0) &&
         (plVar1 = plVar12 + *(long *)(piVar8 + 2) * 9, plVar12 < plVar1)) {
        do {
          if ((long *)plVar12[4] != plVar12 + 6) {
            (*Free)();
          }
          if ((long *)*plVar12 != plVar12 + 2) {
            (*Free)();
          }
          plVar12 = plVar12 + 9;
        } while (plVar12 < plVar1);
        plVar12 = *(long **)(piVar8 + 6);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      (*Free)(plVar12);
    }
    (*Free)(piVar8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::resize(unsigned long, char) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::resize
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          char param_2)

{
  ulong __n;
  ulong uVar1;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *__dest;
  ulong __n_00;
  ulong uVar2;
  
  __n = *(ulong *)(this + 8);
  if (param_1 <= __n) {
    if (__n <= param_1) {
      return;
    }
    goto LAB_00101156;
  }
  __n_00 = param_1 - __n;
  if (0x7fffffffffffffff - __n < __n_00) {
    std::__throw_length_error("basic_string::_M_replace_aux");
    goto LAB_001012a4;
  }
  __dest = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this;
  if (__dest == this + 0x10) {
    uVar1 = 0xf;
    if (0xf < param_1) goto LAB_001011e8;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
    if (uVar1 < param_1) {
LAB_001011e8:
      if ((long)param_1 < 0) {
LAB_001012a4:
        std::__throw_length_error("basic_string::_M_create");
        if (JPH::DVec3::cTrue == '\0') {
          JPH::DVec3::cTrue = '\x01';
          JPH::DVec3::cTrue = _LC7;
        }
        return;
      }
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar1 <= param_1) {
        uVar2 = param_1;
      }
      __dest = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
               (*JPH::Allocate)(uVar2 + 1);
      if (__n != 0) {
        if (__n == 1) {
          *__dest = **(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this;
        }
        else {
          memcpy(__dest,*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this,
                 __n);
        }
      }
      if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this
         ) {
        (*JPH::Free)();
      }
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this = __dest;
      *(ulong *)(this + 0x10) = uVar2;
    }
  }
  if (__n_00 != 1) {
    memset(__dest + __n,(int)param_2,__n_00);
    *(ulong *)(this + 8) = param_1;
    *(undefined1 *)(*(long *)this + param_1) = 0;
    return;
  }
  __dest[__n] = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)param_2;
LAB_00101156:
  *(ulong *)(this + 8) = param_1;
  *(undefined1 *)(*(long *)this + param_1) = 0;
  return;
}



/* JPH::GetRTTIOfType(JPH::Skeleton::Joint*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC7;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


