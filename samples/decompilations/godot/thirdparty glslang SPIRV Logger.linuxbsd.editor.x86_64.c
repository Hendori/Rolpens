
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



/* __gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >
   std::__find_if<__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   __gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::string const>
   >(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, __gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   __gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::string const>, std::random_access_iterator_tag)
   [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<std::__cxx11::string*,std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::string_const>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  void *__s2;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    sVar4 = param_3[1];
    puVar3 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      if (param_1[1] == sVar4) {
        if (sVar4 == 0) {
          return param_1;
        }
        __s2 = (void *)*param_3;
        iVar1 = memcmp((void *)*param_1,__s2,sVar4);
        if (iVar1 == 0) {
          return param_1;
        }
        sVar2 = param_1[5];
        if (sVar4 == sVar2) {
          pvVar6 = (void *)param_1[4];
LAB_00100171:
          iVar1 = memcmp(pvVar6,__s2,sVar2);
          if (iVar1 == 0) {
            return param_1 + 4;
          }
          sVar2 = param_1[9];
          if (sVar4 == sVar2) {
            pvVar6 = (void *)param_1[8];
            goto LAB_001001e1;
          }
          sVar2 = param_1[0xd];
          if (sVar4 == sVar2) goto LAB_001001ad;
        }
        else {
          sVar2 = param_1[9];
          if (sVar4 != sVar2) goto LAB_00100106;
LAB_001001dd:
          pvVar6 = (void *)param_1[8];
LAB_001001e1:
          iVar1 = memcmp(pvVar6,__s2,sVar2);
          if (iVar1 == 0) {
            return param_1 + 8;
          }
          sVar2 = param_1[0xd];
          if (sVar4 == sVar2) {
            pvVar6 = (void *)param_1[0xc];
            goto LAB_001001b1;
          }
        }
      }
      else {
        sVar2 = param_1[5];
        if (sVar4 == sVar2) {
          if (sVar4 == 0) {
            return param_1 + 4;
          }
          __s2 = (void *)*param_3;
          pvVar6 = (void *)param_1[4];
          goto LAB_00100171;
        }
        sVar2 = param_1[9];
        if (sVar4 == sVar2) {
          if (sVar4 == 0) {
            return param_1 + 8;
          }
          __s2 = (void *)*param_3;
          goto LAB_001001dd;
        }
LAB_00100106:
        sVar2 = param_1[0xd];
        if (sVar4 != sVar2) goto LAB_00100113;
        if (sVar4 == 0) {
          return param_1 + 0xc;
        }
        __s2 = (void *)*param_3;
LAB_001001ad:
        pvVar6 = (void *)param_1[0xc];
LAB_001001b1:
        iVar1 = memcmp(pvVar6,__s2,sVar2);
        if (iVar1 == 0) {
          return param_1 + 0xc;
        }
      }
LAB_00100113:
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 == 2) {
    sVar4 = param_3[1];
  }
  else {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      sVar4 = param_3[1];
      goto LAB_0010026a;
    }
    sVar4 = param_3[1];
    if (param_1[1] == sVar4) {
      if (sVar4 == 0) {
        return param_1;
      }
      iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar4);
      if (iVar1 == 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 4;
  }
  if (param_1[1] == sVar4) {
    if (sVar4 == 0) {
      return param_1;
    }
    iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar4);
    if (iVar1 == 0) {
      return param_1;
    }
  }
  param_1 = param_1 + 4;
LAB_0010026a:
  puVar3 = param_2;
  if (((param_1[1] == sVar4) && (puVar3 = param_1, sVar4 != 0)) &&
     (iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar4), iVar1 != 0)) {
    puVar3 = param_2;
  }
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spv::SpvBuildLogger::getAllMessages[abi:cxx11]() const */

void spv::SpvBuildLogger::getAllMessages_abi_cxx11_(void)

{
  pointer_____offset_0x10___ puVar1;
  ostream *poVar2;
  long *in_RSI;
  string *in_RDI;
  streambuf *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  pointer_____offset_0x10___ local_1b8 [2];
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
  
  puVar1 = PTR_vtable_00100b90;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = std::ios::init;
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_1b8[0] = _init;
  local_70 = 0;
  psVar3 = (streambuf *)((ostream *)local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar3 = _locale;
  std::ios::init(psVar3);
  local_148[0] = std::__cxx11::string::_M_replace;
  local_1b8[0] = &std::ios::vtable;
  local_1b8[1] = puVar1;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  local_1b8[1] = &std::ios::vtable;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  puVar5 = (undefined8 *)*in_RSI;
  if (puVar5 != (undefined8 *)in_RSI[1]) {
    do {
      puVar4 = puVar5 + 4;
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_1b8,"TBD functionality: ",0x13);
      poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)local_1b8,(char *)*puVar5,puVar5[1]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
      puVar5 = puVar4;
    } while ((undefined8 *)in_RSI[1] != puVar4);
  }
  puVar5 = (undefined8 *)in_RSI[3];
  if (puVar5 != (undefined8 *)in_RSI[4]) {
    do {
      puVar4 = puVar5 + 4;
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_1b8,"Missing functionality: ",0x17);
      poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)local_1b8,(char *)*puVar5,puVar5[1]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
      puVar5 = puVar4;
    } while ((undefined8 *)in_RSI[4] != puVar4);
  }
  puVar5 = (undefined8 *)in_RSI[6];
  if (puVar5 != (undefined8 *)in_RSI[7]) {
    do {
      puVar4 = puVar5 + 4;
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"warning: ",9);
      poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)local_1b8,(char *)*puVar5,puVar5[1]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
      puVar5 = puVar4;
    } while ((undefined8 *)in_RSI[7] != puVar4);
  }
  puVar5 = (undefined8 *)in_RSI[9];
  if (puVar5 != (undefined8 *)in_RSI[10]) {
    do {
      puVar4 = puVar5 + 4;
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"error: ",7);
      poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)local_1b8,(char *)*puVar5,puVar5[1]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
      puVar5 = puVar4;
    } while ((undefined8 *)in_RSI[10] != puVar4);
  }
  *(undefined8 *)(in_RDI + 8) = 0;
  *(string **)in_RDI = in_RDI + 0x10;
  in_RDI[0x10] = (string)0x0;
  if (local_188._0_8_ == 0) {
    std::__cxx11::string::_M_assign(in_RDI);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)in_RDI,0,(char *)0x0,local_198._8_8_);
  }
  local_148[0] = std::__cxx11::string::_M_replace;
  local_1b8[0] = &std::ios::vtable;
  local_1b8[1] = &std::ios::vtable;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  local_1b8[0] = _init;
  *(undefined8 *)((long)local_1b8 + *(long *)(_init + -0x18)) = _locale;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::SpvBuildLogger::missingFunctionality(std::__cxx11::string const&) */

void __thiscall spv::SpvBuildLogger::missingFunctionality(SpvBuildLogger *this,string *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0x20);
  plVar3 = (long *)std::
                   __find_if<__gnu_cxx::__normal_iterator<std::__cxx11::string*,std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::string_const>>
                             (*(undefined8 *)(this + 0x18),plVar1,param_1);
  if (plVar1 != plVar3) {
    return;
  }
  if (plVar1 != *(long **)(this + 0x28)) {
    lVar2 = *(long *)(param_1 + 8);
    *plVar1 = (long)(plVar1 + 2);
    std::__cxx11::string::_M_construct<char*>(plVar1,*(long *)param_1,lVar2 + *(long *)param_1);
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x20;
    return;
  }
  std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
  _M_realloc_insert<std::__cxx11::string_const&>
            ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)(this + 0x18),
             plVar1,param_1);
  return;
}



/* spv::SpvBuildLogger::tbdFunctionality(std::__cxx11::string const&) */

void __thiscall spv::SpvBuildLogger::tbdFunctionality(SpvBuildLogger *this,string *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  plVar3 = (long *)std::
                   __find_if<__gnu_cxx::__normal_iterator<std::__cxx11::string*,std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::string_const>>
                             (*(undefined8 *)this,plVar1,param_1);
  if (plVar1 != plVar3) {
    return;
  }
  if (plVar1 != *(long **)(this + 0x10)) {
    lVar2 = *(long *)(param_1 + 8);
    *plVar1 = (long)(plVar1 + 2);
    std::__cxx11::string::_M_construct<char*>(plVar1,*(long *)param_1,lVar2 + *(long *)param_1);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x20;
    return;
  }
  std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
  _M_realloc_insert<std::__cxx11::string_const&>
            ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)this,plVar1,
             param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
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
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00100958;
    uVar14 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar14 = uVar5 + 1;
    }
    uVar14 = uVar14 << 5;
  }
  else {
    uVar14 = uVar5 * 2;
    if (uVar14 < uVar5) {
LAB_00100958:
      uVar14 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar14 == 0) {
        plVar11 = (long *)0x20;
        lVar12 = 0;
        plVar6 = (long *)0x0;
        goto LAB_001008ab;
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
LAB_001008ab:
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
              if ((uVar5 & 2) == 0) goto LAB_0010094c;
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
LAB_0010094c:
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


