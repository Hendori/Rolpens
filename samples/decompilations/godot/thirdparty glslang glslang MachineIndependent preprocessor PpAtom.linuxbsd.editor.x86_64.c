
/* glslang::TStringAtomMap::TStringAtomMap() */

void __thiscall glslang::TStringAtomMap::TStringAtomMap(TStringAtomMap *this)

{
  dword *pdVar1;
  dword *pdVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  NoteGnuProperty_4 *pNVar6;
  TStringAtomMap *pTVar7;
  long in_FS_OFFSET;
  char local_22 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined8 *)this = uVar3;
  *(TStringAtomMap **)(this + 8) = this + 0x38;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  uVar3 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  uVar3 = glslang::GetThreadPoolAllocator();
  pTVar7 = this + 0x80;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = uVar3;
  *(TStringAtomMap **)(this + 0x70) = pTVar7;
  this[0x80] = (TStringAtomMap)0x0;
  if (pTVar7 == (TStringAtomMap *)"<bad token>") {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    (this + 0x68),"<bad token>",0,"<bad token>",0xb,0);
    pTVar7 = *(TStringAtomMap **)(this + 0x70);
  }
  else {
    *(undefined8 *)(this + 0x80) = 0x6b6f74206461623c;
    *(undefined4 *)(this + 0x87) = 0x3e6e656b;
  }
  local_22[1] = 0;
  iVar4 = 0x7e;
  pcVar5 = "~!%^&*()-+=|,.<>/?;:[]{}#\\";
  *(undefined8 *)(this + 0x78) = 0xb;
  pTVar7[0xb] = (TStringAtomMap)0x0;
  do {
    pcVar5 = pcVar5 + 1;
    local_22[0] = (char)iVar4;
    addAtomFixed(this,local_22,iVar4);
    iVar4 = (int)*pcVar5;
  } while (*pcVar5 != '\0');
  pNVar6 = (NoteGnuProperty_4 *)&(anonymous_namespace)::tokens;
  do {
    pdVar2 = &pNVar6->namesz;
    pdVar1 = &pNVar6->type;
    pNVar6 = pNVar6 + 1;
    addAtomFixed(this,*(char **)pdVar1,*pdVar2);
  } while (pNVar6 != &NoteGnuProperty_4_00100fa0);
  *(undefined4 *)(this + 0x60) = 0xb7;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const*>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const**,
   std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const*> > >, unsigned long,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const*
   const&) */

void __thiscall
std::
vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
::_M_fill_insert(vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                 *this,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t __n;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar11 >> 3) < param_3) {
    puVar9 = *(undefined8 **)(this + 8);
    uVar2 = (long)puVar11 - (long)puVar9 >> 3;
    if (param_3 <= 0xfffffffffffffff - uVar2) {
      if (uVar2 < param_3) {
        uVar2 = uVar2 + param_3;
        if (0xfffffffffffffff < uVar2) {
          uVar2 = 0xfffffffffffffff;
        }
        lVar4 = uVar2 * 8;
      }
      else {
        lVar4 = 0x7ffffffffffffff8;
        uVar12 = uVar2 * 2;
        if (uVar2 <= uVar12) {
          if (0xfffffffffffffff < uVar12) {
            uVar12 = 0xfffffffffffffff;
          }
          lVar4 = uVar12 * 8;
        }
      }
      lVar3 = glslang::TPoolAllocator::allocate(*(ulong *)this);
      puVar5 = (undefined8 *)((long)param_2 + (lVar3 - (long)puVar9));
      puVar6 = puVar5;
      do {
        puVar7 = puVar6 + 1;
        *puVar6 = *param_4;
        puVar6 = puVar7;
      } while (puVar7 != puVar5 + param_3);
      lVar8 = lVar3;
      if (puVar9 != param_2) {
        lVar8 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)((long)puVar9 + lVar8);
          lVar8 = lVar8 + 8;
        } while (lVar8 != (long)param_2 - (long)puVar9);
        lVar8 = lVar8 + lVar3;
      }
      lVar8 = lVar8 + param_3 * 8;
      if (puVar11 != param_2) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)((long)param_2 + lVar10);
          lVar10 = lVar10 + 8;
        } while (lVar10 != (long)puVar11 - (long)param_2);
        lVar8 = lVar8 + lVar10;
      }
      *(long *)(this + 8) = lVar3;
      *(long *)(this + 0x10) = lVar8;
      *(long *)(this + 0x18) = lVar3 + lVar4;
      return;
    }
    std::__throw_length_error("vector::_M_fill_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *param_4;
  uVar2 = (long)puVar11 - (long)param_2 >> 3;
  if (param_3 < uVar2) {
    lVar4 = 0;
    puVar9 = puVar11 + -param_3;
    if (puVar11 != puVar9) {
      do {
        *(undefined8 *)((long)puVar11 + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
        lVar4 = lVar4 + 8;
      } while (param_3 * 8 != lVar4);
    }
    __n = (long)puVar9 - (long)param_2;
    *(undefined8 **)(this + 0x10) = puVar11 + param_3;
    if ((long)__n < 9) {
      if (__n == 8) {
        puVar11[-1] = *param_2;
      }
    }
    else {
      memmove((void *)((long)puVar11 - __n),param_2,__n);
    }
    puVar11 = param_2 + param_3;
    if (puVar11 == param_2) {
      return;
    }
    puVar9 = param_2;
    if (((long)puVar11 - (long)param_2 & 8U) != 0) {
      *param_2 = uVar1;
      puVar9 = param_2 + 1;
      if (puVar11 == param_2 + 1) {
        return;
      }
    }
    do {
      *puVar9 = uVar1;
      puVar6 = puVar9 + 2;
      puVar9[1] = uVar1;
      puVar9 = puVar6;
    } while (puVar11 != puVar6);
    return;
  }
  param_3 = param_3 - uVar2;
  puVar9 = puVar11;
  if (param_3 == 0) goto LAB_00100218;
  uVar2 = 0;
  if ((param_3 & 1) == 0) {
LAB_00100200:
    do {
      puVar11[uVar2] = uVar1;
      puVar11[uVar2 + 1] = uVar1;
      uVar2 = uVar2 + 2;
    } while (param_3 != uVar2);
  }
  else {
    *puVar11 = uVar1;
    uVar2 = 1;
    if (param_3 != 1) goto LAB_00100200;
  }
  puVar9 = puVar11 + param_3;
LAB_00100218:
  lVar4 = (long)puVar9 + ((long)puVar11 - (long)param_2);
  if (puVar11 == param_2) {
    *(long *)(this + 0x10) = lVar4;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)puVar9 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      lVar3 = lVar3 + 8;
    } while ((long)puVar11 - (long)param_2 != lVar3);
    *(long *)(this + 0x10) = lVar4;
    puVar9 = param_2;
    if (((long)puVar11 - (long)param_2 & 8U) != 0) {
      puVar9 = param_2 + 1;
      *param_2 = uVar1;
      if (puVar11 == puVar9) {
        return;
      }
    }
    do {
      *puVar9 = uVar1;
      puVar6 = puVar9 + 2;
      puVar9[1] = uVar1;
      puVar9 = puVar6;
    } while (puVar11 != puVar6);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TStringAtomMap::addAtomFixed(char const*, int) */

void __thiscall
glslang::TStringAtomMap::addAtomFixed(TStringAtomMap *this,char *param_1,int param_2)

{
  TStringAtomMap *pTVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  ulong *puVar11;
  long *plVar12;
  void *__s;
  TStringAtomMap *pTVar13;
  long lVar14;
  char *__s1;
  uint uVar15;
  ulong uVar16;
  ulong extraout_RDX;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  TStringAtomMap *local_80;
  ulong local_78;
  ulong *local_70;
  undefined8 local_68;
  ulong local_60 [2];
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = glslang::GetThreadPoolAllocator();
  local_78 = uVar9;
  local_70 = local_60;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar10 = strlen(param_1);
  if (sVar10 < 0x10) {
    puVar11 = local_60;
    if (sVar10 == 1) {
      local_60[0] = CONCAT71(local_60[0]._1_7_,*param_1);
    }
    else if (sVar10 != 0) goto LAB_00100869;
  }
  else {
    local_70 = (ulong *)glslang::TPoolAllocator::allocate(uVar9);
    puVar11 = local_70;
    local_60[0] = sVar10;
LAB_00100869:
    memcpy(puVar11,param_1,sVar10);
    puVar11 = local_70;
  }
  *(undefined1 *)((long)puVar11 + sVar10) = 0;
  local_68 = sVar10;
  local_50 = param_2;
  plVar12 = (long *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  *plVar12 = 0;
  plVar12[2] = (long)(plVar12 + 4);
  plVar12[1] = local_78;
  if (local_70 == local_60) {
    uVar9 = local_68 + 1;
    uVar7 = (uint)uVar9;
    if (uVar7 < 8) {
      if ((uVar9 & 4) == 0) {
        if (uVar7 != 0) {
          *(undefined1 *)(plVar12 + 4) = (undefined1)local_60[0];
          if ((uVar9 & 2) != 0) {
            *(undefined2 *)((long)plVar12 + (uVar9 & 0xffffffff) + 0x1e) =
                 *(undefined2 *)((long)local_60 + ((uVar9 & 0xffffffff) - 2));
          }
        }
      }
      else {
        *(undefined4 *)(plVar12 + 4) = (undefined4)local_60[0];
        *(undefined4 *)((long)plVar12 + (uVar9 & 0xffffffff) + 0x1c) =
             *(undefined4 *)((long)local_60 + ((uVar9 & 0xffffffff) - 4));
      }
    }
    else {
      plVar12[4] = local_60[0];
      *(undefined8 *)((long)plVar12 + (uVar9 & 0xffffffff) + 0x18) =
           *(undefined8 *)((long)local_60 + ((uVar9 & 0xffffffff) - 8));
      lVar19 = (long)(plVar12 + 4) - ((ulong)(plVar12 + 5) & 0xfffffffffffffff8);
      uVar7 = uVar7 + (int)lVar19 & 0xfffffff8;
      if (7 < uVar7) {
        uVar9 = 0;
        do {
          uVar15 = (int)uVar9 + 8;
          *(undefined8 *)(((ulong)(plVar12 + 5) & 0xfffffffffffffff8) + uVar9) =
               *(undefined8 *)((long)local_60 + (uVar9 - lVar19));
          uVar9 = (ulong)uVar15;
        } while (uVar15 < uVar7);
      }
    }
  }
  else {
    plVar12[2] = (long)local_70;
    plVar12[4] = local_60[0];
  }
  plVar12[3] = local_68;
  uVar9 = *(ulong *)(this + 0x20);
  local_68 = 0;
  local_60[0] = local_60[0] & 0xffffffffffffff00;
  *(int *)(plVar12 + 6) = local_50;
  if (uVar9 == 0) {
    __s1 = (char *)plVar12[2];
    sVar10 = plVar12[3];
    local_70 = local_60;
    for (plVar21 = *(long **)(this + 0x18); plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
      while (plVar21[3] == sVar10) {
        if (sVar10 == 0) goto LAB_001006e6;
        do {
          iVar8 = memcmp(__s1,(void *)plVar21[2],sVar10);
          if (iVar8 == 0) goto LAB_001006e6;
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_00100670;
        } while (plVar21[3] == sVar10);
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) goto LAB_00100670;
      }
    }
LAB_00100670:
    if (sVar10 == 0) {
      uVar18 = *(ulong *)(this + 0x10);
      uVar20 = 0x811c9dc5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18;
      uVar16 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar4,0);
      goto LAB_00100690;
    }
LAB_00100761:
    uVar7 = 0x811c9dc5;
    pcVar17 = __s1;
    do {
      cVar6 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      uVar7 = (uVar7 ^ (int)cVar6) * 0x1000193;
    } while (pcVar17 != __s1 + sVar10);
    uVar18 = *(ulong *)(this + 0x10);
    uVar20 = (ulong)uVar7;
    uVar16 = uVar20 % uVar18;
    if (uVar9 == 0) goto LAB_00100690;
  }
  else {
    sVar10 = plVar12[3];
    __s1 = (char *)plVar12[2];
    local_70 = local_60;
    if (sVar10 != 0) goto LAB_00100761;
    uVar18 = *(ulong *)(this + 0x10);
    uVar20 = 0x811c9dc5;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar18;
    uVar16 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar5,0);
  }
  puVar25 = *(undefined8 **)(*(long *)(this + 8) + uVar16 * 8);
  if (puVar25 != (undefined8 *)0x0) {
    uVar23 = ((undefined8 *)*puVar25)[7];
    puVar3 = (undefined8 *)*puVar25;
    while (((puVar22 = puVar3, uVar23 != uVar20 || (sVar10 != puVar22[3])) ||
           ((sVar10 != 0 && (iVar8 = memcmp(__s1,(void *)puVar22[2],sVar10), iVar8 != 0))))) {
      puVar3 = (undefined8 *)*puVar22;
      if ((puVar3 == (undefined8 *)0x0) ||
         (uVar23 = puVar3[7], puVar25 = puVar22, uVar23 % uVar18 != uVar16)) goto LAB_00100690;
    }
    plVar21 = (long *)*puVar25;
    if (plVar21 != (long *)0x0) goto LAB_001006e6;
  }
LAB_00100690:
  cVar6 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x28),uVar18,uVar9);
  if (cVar6 == '\0') {
    pTVar13 = *(TStringAtomMap **)(this + 8);
    plVar12[7] = uVar20;
    pTVar1 = pTVar13 + uVar16 * 8;
    plVar21 = *(long **)pTVar1;
  }
  else {
    if (extraout_RDX == 1) {
      *(undefined8 *)(this + 0x38) = 0;
      pTVar13 = this + 0x38;
    }
    else {
      __s = (void *)glslang::TPoolAllocator::allocate(*(ulong *)this);
      pTVar13 = (TStringAtomMap *)memset(__s,0,extraout_RDX * 8);
    }
    plVar21 = *(long **)(this + 0x18);
    *(undefined8 *)(this + 0x18) = 0;
    uVar9 = 0;
    while (uVar18 = uVar9, plVar24 = plVar21, plVar21 != (long *)0x0) {
      while( true ) {
        plVar21 = (long *)*plVar24;
        uVar9 = (ulong)plVar24[7] % extraout_RDX;
        pTVar1 = pTVar13 + uVar9 * 8;
        if (*(long **)pTVar1 == (long *)0x0) break;
        *plVar24 = **(long **)pTVar1;
        **(undefined8 **)pTVar1 = plVar24;
        plVar24 = plVar21;
        if (plVar21 == (long *)0x0) goto LAB_00100931;
      }
      *plVar24 = *(long *)(this + 0x18);
      *(long **)(this + 0x18) = plVar24;
      *(TStringAtomMap **)pTVar1 = this + 0x18;
      if (*plVar24 != 0) {
        *(long **)(pTVar13 + uVar18 * 8) = plVar24;
      }
    }
LAB_00100931:
    *(ulong *)(this + 0x10) = extraout_RDX;
    *(TStringAtomMap **)(this + 8) = pTVar13;
    plVar12[7] = uVar20;
    pTVar1 = pTVar13 + (uVar20 % extraout_RDX) * 8;
    plVar21 = *(long **)pTVar1;
  }
  if (plVar21 == (long *)0x0) {
    *plVar12 = *(long *)(this + 0x18);
    *(long **)(this + 0x18) = plVar12;
    if (*plVar12 != 0) {
      *(long **)(pTVar13 + (*(ulong *)(*plVar12 + 0x38) % *(ulong *)(this + 0x10)) * 8) = plVar12;
    }
    *(TStringAtomMap **)pTVar1 = this + 0x18;
  }
  else {
    *plVar12 = *plVar21;
    **(undefined8 **)pTVar1 = plVar12;
  }
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
  plVar21 = plVar12;
LAB_001006e6:
  lVar19 = *(long *)(this + 0x50);
  lVar14 = *(long *)(this + 0x48);
  uVar9 = lVar19 - lVar14 >> 3;
  if (uVar9 < (long)param_2 + 1U) {
    local_80 = this + 0x68;
    uVar18 = (ulong)(param_2 + 100);
    if (uVar9 < uVar18) {
      std::
      vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
      ::_M_fill_insert((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                        *)(this + 0x40),lVar19,uVar18 - uVar9,&local_80);
      lVar14 = *(long *)(this + 0x48);
    }
    else if ((uVar18 < uVar9) && (lVar2 = lVar14 + uVar18 * 8, lVar19 != lVar2)) {
      *(long *)(this + 0x50) = lVar2;
    }
  }
  *(long **)(lVar14 + (long)param_2 * 8) = plVar21 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
               char *param_1,ulong param_2,char *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 - 1 < param_2) {
    if (param_4 == 1) {
      *param_1 = *param_3;
    }
    else {
      memmove(param_1,param_3,param_4);
    }
  }
  if ((param_5 != 0) && (param_4 != param_2)) {
    if (param_5 == 1) {
      param_1[param_4] = param_1[param_2];
    }
    else {
      memmove(param_1 + param_4,param_1 + param_2,param_5);
    }
  }
  if (param_2 < param_4) {
    pcVar2 = param_1 + param_2;
    if (pcVar2 < param_3 + param_4) {
      if (param_3 < pcVar2) {
        __n = (long)pcVar2 - (long)param_3;
        if (__n == 1) {
          *param_1 = *param_3;
        }
        else {
          memmove(param_1,param_3,__n);
        }
        pcVar2 = param_1 + param_4;
        param_1 = param_1 + __n;
        lVar1 = param_4 - __n;
        if (lVar1 != 1) {
          if (lVar1 == 0) {
            return;
          }
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      else {
        pcVar2 = param_3 + (param_4 - param_2);
        if (param_4 != 1) {
          for (; param_4 != 0; param_4 = param_4 - 1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      *param_1 = *pcVar2;
    }
    else {
      if (param_4 != 1) {
        memmove(param_1,param_3,param_4);
        return;
      }
      *param_1 = *param_3;
    }
  }
  return;
}



/* glslang::TStringAtomMap::TStringAtomMap() [clone .cold] */

void __thiscall glslang::TStringAtomMap::TStringAtomMap(TStringAtomMap *this)

{
  dword *pdVar1;
  dword *pdVar2;
  int iVar3;
  char *pcVar4;
  NoteGnuProperty_4 *pNVar5;
  TStringAtomMap *unaff_RBP;
  char *in_RSI;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (unaff_RBP + 0x68),in_RSI,0,in_RSI,0xb,0);
  iVar3 = 0x7e;
  pcVar4 = "~!%^&*()-+=|,.<>/?;:[]{}#\\";
  *(undefined8 *)(unaff_RBP + 0x78) = 0xb;
  *(undefined1 *)(*(long *)(unaff_RBP + 0x70) + 0xb) = 0;
  do {
    pcVar4 = pcVar4 + 1;
    addAtomFixed(unaff_RBP,&stack0x00000006,iVar3);
    iVar3 = (int)*pcVar4;
  } while (*pcVar4 != '\0');
  pNVar5 = (NoteGnuProperty_4 *)&(anonymous_namespace)::tokens;
  do {
    pdVar2 = &pNVar5->namesz;
    pdVar1 = &pNVar5->type;
    pNVar5 = pNVar5 + 1;
    addAtomFixed(unaff_RBP,*(char **)pdVar1,*pdVar2);
  } while (pNVar5 != &NoteGnuProperty_4_00100fa0);
  *(undefined4 *)(unaff_RBP + 0x60) = 0xb7;
  if (in_stack_00000008 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


