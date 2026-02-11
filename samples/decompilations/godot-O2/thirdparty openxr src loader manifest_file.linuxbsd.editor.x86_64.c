
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
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  __n = strlen(param_1);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_001001b3;
    }
    if (__n == 0) goto LAB_001001b3;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(string **)this;
LAB_001001b3:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ApiLayerManifestFile::LocateLibraryRelativeToJson(std::__cxx11::string const&,
   std::__cxx11::string const&, std::__cxx11::string&) */

undefined4
ApiLayerManifestFile::LocateLibraryRelativeToJson(string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_88 = &local_78;
  local_68 = &local_58;
  cVar1 = FileSysUtilsGetParentPath(param_1,(string *)&local_68);
  if (cVar1 != '\0') {
    cVar1 = FileSysUtilsCombinePaths((string *)&local_68,param_2,(string *)&local_88);
    if (cVar1 != '\0') {
      uVar2 = FileSysUtilsPathExists((string *)&local_88);
      if ((char)uVar2 != '\0') {
        std::__cxx11::string::_M_assign(param_3);
        goto LAB_001002ca;
      }
    }
  }
  uVar2 = 0;
  std::__cxx11::string::_M_assign(param_3);
LAB_001002ca:
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            (0x10b680,0x1000,(string *)0x1,(string *)&local_58,param_1,(vector *)param_2);
  if (local_58 != &local_48) {
    operator_delete(local_58,CONCAT35(uStack_43,local_48) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CopyIncludedPaths(bool, std::__cxx11::string const&, std::__cxx11::string const&,
   std::__cxx11::string&) [clone .part.0] [clone .constprop.0] */

void CopyIncludedPaths(bool param_1,string *param_2,string *param_3,string *param_4)

{
  char cVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined7 in_register_00000039;
  long *plVar7;
  long in_FS_OFFSET;
  long *local_88;
  ulong local_80;
  long local_78 [2];
  long *local_68;
  ulong local_60;
  long local_58 [3];
  long local_40;
  
  plVar7 = (long *)CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = std::__cxx11::string::find(param_1,0x3a);
  if (uVar2 == 0xffffffffffffffff) {
    uVar4 = plVar7[1];
    uVar2 = uVar4 - 1;
    if (uVar2 != 0) {
      uVar6 = 0;
      goto LAB_00100689;
    }
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = uVar2;
      uVar4 = plVar7[1];
      if (uVar4 < uVar5) goto LAB_00100819;
      uVar2 = uVar4 - uVar5;
      if (uVar6 - uVar5 < uVar4 - uVar5) {
        uVar2 = uVar6 - uVar5;
      }
      local_88 = local_78;
      std::__cxx11::string::_M_construct<char_const*>
                (&local_88,*plVar7 + uVar5,*plVar7 + uVar5 + uVar2);
      if (0x3fffffffffffffffU - *(long *)(param_3 + 8) < local_80) goto LAB_00100807;
      std::__cxx11::string::_M_append((char *)param_3,(ulong)local_88);
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      cVar1 = *(char *)(*plVar7 + -1 + uVar6);
      if ((cVar1 != '/') && (cVar1 != '\\')) {
        uVar2 = *(ulong *)(param_3 + 8);
        psVar3 = *(string **)param_3;
        if (psVar3 == param_3 + 0x10) {
          uVar4 = 0xf;
        }
        else {
          uVar4 = *(ulong *)(param_3 + 0x10);
        }
        if (uVar4 < uVar2 + 1) {
          std::__cxx11::string::_M_mutate((ulong)param_3,uVar2,(char *)0x0,0);
          psVar3 = *(string **)param_3;
        }
        psVar3[uVar2] = (string)0x2f;
        *(ulong *)(param_3 + 8) = uVar2 + 1;
        *(undefined1 *)(*(long *)param_3 + 1 + uVar2) = 0;
      }
      if (0x3fffffffffffffffU - *(long *)(param_3 + 8) < *(ulong *)(param_2 + 8)) goto LAB_00100807;
      std::__cxx11::string::_M_append((char *)param_3,*(ulong *)param_2);
      uVar2 = *(ulong *)(param_3 + 8);
      psVar3 = *(string **)param_3;
      if (psVar3 == param_3 + 0x10) {
        uVar4 = 0xf;
      }
      else {
        uVar4 = *(ulong *)(param_3 + 0x10);
      }
      if (uVar4 < uVar2 + 1) {
        std::__cxx11::string::_M_mutate((ulong)param_3,uVar2,(char *)0x0,0);
        psVar3 = *(string **)param_3;
      }
      psVar3[uVar2] = (string)0x3a;
      *(ulong *)(param_3 + 8) = uVar2 + 1;
      *(undefined1 *)(*(long *)param_3 + 1 + uVar2) = 0;
      uVar2 = std::__cxx11::string::find(param_1,0x3a);
      uVar5 = uVar6;
    } while (uVar2 != 0xffffffffffffffff);
    uVar4 = plVar7[1];
    uVar2 = uVar4 - 1;
    if (uVar2 != uVar6) {
      if (uVar4 < uVar6) {
LAB_00100819:
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                   uVar5,uVar4);
        goto LAB_0010082e;
      }
LAB_00100689:
      local_68 = local_58;
      std::__cxx11::string::_M_construct<char_const*>(&local_68,*plVar7 + uVar6,uVar4 + *plVar7);
      if (0x3fffffffffffffffU - *(long *)(param_3 + 8) < local_60) {
LAB_00100807:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)param_3,(ulong)local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if ((*(char *)(*plVar7 + uVar2) != '/') && (*(char *)(*plVar7 + uVar2) != '\\')) {
        uVar2 = *(ulong *)(param_3 + 8);
        psVar3 = *(string **)param_3;
        if (psVar3 == param_3 + 0x10) {
          uVar4 = 0xf;
        }
        else {
          uVar4 = *(ulong *)(param_3 + 0x10);
        }
        if (uVar4 < uVar2 + 1) {
          std::__cxx11::string::_M_mutate((ulong)param_3,uVar2,(char *)0x0,0);
          psVar3 = *(string **)param_3;
        }
        psVar3[uVar2] = (string)0x2f;
        *(ulong *)(param_3 + 8) = uVar2 + 1;
        *(undefined1 *)(*(long *)param_3 + 1 + uVar2) = 0;
      }
      if (0x3fffffffffffffffU - *(long *)(param_3 + 8) < *(ulong *)(param_2 + 8)) goto LAB_00100807;
      std::__cxx11::string::_M_append((char *)param_3,*(ulong *)param_2);
      uVar2 = *(ulong *)(param_3 + 8);
      psVar3 = *(string **)param_3;
      if (psVar3 == param_3 + 0x10) {
        uVar4 = 0xf;
      }
      else {
        uVar4 = *(ulong *)(param_3 + 0x10);
      }
      if (uVar4 < uVar2 + 1) {
        std::__cxx11::string::_M_mutate((ulong)param_3,uVar2,(char *)0x0,0);
        psVar3 = *(string **)param_3;
      }
      psVar3[uVar2] = (string)0x3a;
      *(ulong *)(param_3 + 8) = uVar2 + 1;
      *(undefined1 *)(*(long *)param_3 + 1 + uVar2) = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010082e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100bb8) */
/* WARNING: Removing unreachable block (ram,0x00100bc5) */
/* WARNING: Removing unreachable block (ram,0x00100bd2) */
/* WARNING: Removing unreachable block (ram,0x00100bdb) */
/* WARNING: Removing unreachable block (ram,0x00100be5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindEitherActiveRuntimeFilename(char const*, std::__cxx11::string const&, unsigned short,
   std::__cxx11::string&) */

undefined4
FindEitherActiveRuntimeFilename(char *param_1,string *param_2,ushort param_3,string *param_4)

{
  ulong *puVar1;
  pointer_____offset_0x10___ puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  pointer_____offset_0x10___ puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  char cVar14;
  uint uVar15;
  streambuf *psVar16;
  long lVar17;
  ulong *puVar18;
  pointer_____offset_0x10___ puVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  char *local_2f8;
  undefined8 local_2f0;
  char local_2e8;
  undefined7 uStack_2e7;
  ulong *local_2d8;
  long local_2d0;
  ulong local_2c8 [2];
  char *local_2b8;
  undefined8 local_2b0;
  undefined5 local_2a8;
  undefined3 uStack_2a3;
  undefined5 uStack_2a0;
  undefined1 local_29b;
  pointer_____offset_0x10___ local_298 [2];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  locale local_258 [8];
  undefined4 local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined7 uStack_237;
  code *local_228 [27];
  undefined8 local_150;
  undefined2 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  char acStack_57 [23];
  long local_40;
  
  puVar2 = PTR_vtable_0010b9d0;
  uVar12 = (uint)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_228);
  local_228[0] = std::ios::init;
  local_148 = 0;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  local_298[0] = _init;
  local_150 = 0;
  psVar16 = (streambuf *)((ostream *)local_298 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar16 = _locale;
  std::ios::init(psVar16);
  local_228[0] = (code *)&std::streambuf::vtable;
  local_288 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  local_298[0] = &std::__cxx11::ostringstream::VTT;
  local_298[1] = puVar2;
  std::locale::locale(local_258);
  local_298[1] = std::ios_base::ios_base;
  local_250 = 0x10;
  local_240 = 0;
  local_238 = 0;
  local_248 = &local_238;
  std::ios::init((streambuf *)local_228);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)local_298,
             "Looking for active_runtime.x86_64.json or active_runtime.json in ",0x41);
  sVar6 = strlen(param_1);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_298,param_1,sVar6);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_298,": ",2);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)local_298,*(char **)param_2,*(long *)(param_2 + 8));
  local_2f0 = 0;
  local_2e8 = '\0';
  local_2f8 = &local_2e8;
  if (local_268._0_8_ == 0) {
    std::__cxx11::string::_M_assign((string *)&local_2f8);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_2f8,0,(char *)0x0,local_278._8_8_);
  }
  local_2c8[0] = local_2c8[0] & 0xffffffffffffff00;
  local_2d0 = 0;
  local_2d8 = local_2c8;
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  local_2b0 = 0xd;
  local_2a8 = 0x586e65704f;
  uStack_2a3 = 0x4c2d52;
  uStack_2a0 = 0x726564616f;
  local_29b = 0;
  local_2b8 = (char *)&local_2a8;
  LoaderLogger::LogMessage
            (0x10b680,0x10,(string *)0x1,(string *)&local_2b8,(string *)&local_2d8,
             (vector *)&local_2f8);
  if (local_2b8 != (char *)&local_2a8) {
    operator_delete(local_2b8,CONCAT35(uStack_2a3,local_2a8) + 1);
  }
  if (local_2d8 != local_2c8) {
    operator_delete(local_2d8,local_2c8[0] + 1);
  }
  if (local_2f8 != &local_2e8) {
    operator_delete(local_2f8,CONCAT71(uStack_2e7,local_2e8) + 1);
  }
  local_228[0] = (code *)&std::streambuf::vtable;
  local_298[0] = &std::__cxx11::ostringstream::VTT;
  local_298[1] = std::ios_base::ios_base;
  if (local_248 != &local_238) {
    operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
  }
  local_298[1] = std::ios_base::~ios_base;
  std::locale::~locale(local_258);
  local_298[0] = _init;
  *(undefined8 *)((long)local_298 + *(long *)(_init + -0x18)) = _locale;
  local_228[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_228);
  uVar20 = uVar12;
  if (param_3 < 10) {
    local_2f8 = &local_2e8;
    std::__cxx11::string::_M_construct((ulong)&local_2f8,'\x01');
LAB_00100e1f:
    cVar14 = (char)uVar20 + '0';
  }
  else {
    if (uVar12 < 100) {
      local_2f8 = &local_2e8;
      std::__cxx11::string::_M_construct((ulong)&local_2f8,'\x02');
      local_118 = __LC8;
      uStack_110 = _UNK_0010b768;
      local_108 = __LC9;
      uStack_100 = _UNK_0010b778;
      local_f8 = __LC10;
      uStack_f0 = _UNK_0010b788;
      local_e8 = __LC11;
      uStack_e0 = _UNK_0010b798;
      local_d8 = __LC12;
      uStack_d0 = _UNK_0010b7a8;
      local_c8 = __LC13;
      uStack_c0 = _UNK_0010b7b8;
      local_b8 = __LC14;
      uStack_b0 = _UNK_0010b7c8;
      local_a8 = __LC15;
      uStack_a0 = _UNK_0010b7d8;
      local_98 = __LC16;
      uStack_90 = _UNK_0010b7e8;
      local_88 = __LC17;
      uStack_80 = _UNK_0010b7f8;
      local_78 = __LC18;
      uStack_70 = _UNK_0010b808;
      local_68 = __LC19;
      uStack_60 = (undefined1)_UNK_0010b818;
      uStack_5f = (undefined7)_LC20._0_8_;
      cStack_58 = SUB81(_LC20._0_8_,7);
      acStack_57[0] = _LC20[8];
      acStack_57[1] = _LC20[9];
      acStack_57[2] = _LC20[10];
      acStack_57[3] = _LC20[0xb];
      acStack_57[4] = _LC20[0xc];
      acStack_57[5] = _LC20[0xd];
      acStack_57[6] = _LC20[0xe];
      acStack_57[7] = _LC20[0xf];
    }
    else {
      if (uVar12 < 1000) {
        uVar11 = 2;
        cVar14 = '\x03';
      }
      else {
        uVar11 = 4 - (uVar12 < 10000);
        cVar14 = '\x05' - (uVar12 < 10000);
      }
      local_2f8 = &local_2e8;
      std::__cxx11::string::_M_construct((ulong)&local_2f8,cVar14);
      local_118 = __LC8;
      uStack_110 = _UNK_0010b768;
      local_108 = __LC9;
      uStack_100 = _UNK_0010b778;
      local_f8 = __LC10;
      uStack_f0 = _UNK_0010b788;
      local_e8 = __LC11;
      uStack_e0 = _UNK_0010b798;
      local_d8 = __LC12;
      uStack_d0 = _UNK_0010b7a8;
      local_c8 = __LC13;
      uStack_c0 = _UNK_0010b7b8;
      local_b8 = __LC14;
      uStack_b0 = _UNK_0010b7c8;
      local_a8 = __LC15;
      uStack_a0 = _UNK_0010b7d8;
      local_98 = __LC16;
      uStack_90 = _UNK_0010b7e8;
      local_88 = __LC17;
      uStack_80 = _UNK_0010b7f8;
      local_78 = __LC18;
      uStack_70 = _UNK_0010b808;
      local_68 = __LC19;
      uStack_60 = (undefined1)_UNK_0010b818;
      uStack_5f = (undefined7)_LC20._0_8_;
      cStack_58 = SUB81(_LC20._0_8_,7);
      acStack_57[0] = _LC20[8];
      acStack_57[1] = _LC20[9];
      acStack_57[2] = _LC20[10];
      acStack_57[3] = _LC20[0xb];
      acStack_57[4] = _LC20[0xc];
      acStack_57[5] = _LC20[0xd];
      acStack_57[6] = _LC20[0xe];
      acStack_57[7] = _LC20[0xf];
      do {
        uVar15 = uVar20;
        uVar20 = uVar15 / 100;
        uVar21 = (uVar15 % 100) * 2;
        cVar14 = *(char *)((long)&local_118 + (ulong)uVar21);
        local_2f8[uVar11] = *(char *)((long)&local_118 + (ulong)(uVar21 + 1));
        uVar21 = uVar11 - 1;
        uVar11 = uVar11 - 2;
        local_2f8[uVar21] = cVar14;
      } while (9999 < uVar15);
      if (uVar15 < 1000) goto LAB_00100e1f;
    }
    cVar14 = *(char *)((long)&local_118 + (ulong)(uVar20 * 2));
    local_2f8[1] = *(char *)((long)&local_118 + (ulong)(uVar20 * 2 + 1));
  }
  *local_2f8 = cVar14;
  plVar7 = (long *)std::__cxx11::string::_M_replace
                             ((ulong)&local_2f8,0,(char *)0x0,*(ulong *)param_2);
  puVar1 = (ulong *)(plVar7 + 2);
  if ((ulong *)*plVar7 == puVar1) {
    uVar3 = plVar7[1] + 1;
    puVar13 = puVar1;
    puVar18 = local_2c8;
    if (7 < (uint)uVar3) {
      uVar8 = 0;
      do {
        uVar20 = (int)uVar8 + 8;
        uVar9 = (ulong)uVar20;
        *(undefined8 *)((long)local_2c8 + uVar8) = *(undefined8 *)((long)puVar1 + uVar8);
        uVar8 = uVar9;
      } while (uVar20 < ((uint)uVar3 & 0xfffffff8));
      puVar18 = (ulong *)((long)local_2c8 + uVar9);
      puVar13 = (ulong *)(uVar9 + (long)puVar1);
    }
    lVar17 = 0;
    if ((uVar3 & 4) != 0) {
      *(int *)puVar18 = (int)*puVar13;
      lVar17 = 4;
    }
    if ((uVar3 & 2) != 0) {
      *(undefined2 *)((long)puVar18 + lVar17) = *(undefined2 *)((long)puVar13 + lVar17);
      lVar17 = lVar17 + 2;
    }
    local_2d8 = local_2c8;
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)((long)puVar18 + lVar17) = *(undefined1 *)((long)puVar13 + lVar17);
    }
  }
  else {
    local_2c8[0] = plVar7[2];
    local_2d8 = (ulong *)*plVar7;
  }
  local_2d0 = plVar7[1];
  plVar7[1] = 0;
  *(undefined1 *)(plVar7 + 2) = 0;
  *plVar7 = (long)puVar1;
  if (0x3fffffffffffffffU - local_2d0 < 0x1b) goto LAB_00101803;
  plVar7 = (long *)std::__cxx11::string::_M_append((char *)&local_2d8,0x10a330);
  puVar2 = (pointer_____offset_0x10___)(plVar7 + 2);
  local_298[0] = local_288;
  if ((pointer_____offset_0x10___)*plVar7 == puVar2) {
    uVar3 = plVar7[1] + 1;
    puVar10 = puVar2;
    puVar19 = local_288;
    if (7 < (uint)uVar3) {
      uVar8 = 0;
      do {
        uVar20 = (int)uVar8 + 8;
        uVar9 = (ulong)uVar20;
        *(undefined8 *)(local_288 + uVar8) = *(undefined8 *)(puVar2 + uVar8);
        uVar8 = uVar9;
      } while (uVar20 < ((uint)uVar3 & 0xfffffff8));
      puVar19 = local_288 + uVar9;
      puVar10 = puVar2 + uVar9;
    }
    lVar17 = 0;
    if ((uVar3 & 4) != 0) {
      *(undefined4 *)puVar19 = *(undefined4 *)puVar10;
      lVar17 = 4;
    }
    if ((uVar3 & 2) != 0) {
      *(undefined2 *)(puVar19 + lVar17) = *(undefined2 *)(puVar10 + lVar17);
      lVar17 = lVar17 + 2;
    }
    if ((uVar3 & 1) != 0) {
      puVar19[lVar17] = puVar10[lVar17];
    }
  }
  else {
    local_288._0_8_ = plVar7[2];
    local_298[0] = (pointer_____offset_0x10___)*plVar7;
  }
  local_298[1] = (pointer_____offset_0x10___)plVar7[1];
  *plVar7 = (long)puVar2;
  *(undefined1 *)(plVar7 + 2) = 0;
  plVar7[1] = 0;
  if (local_2d8 != local_2c8) {
    operator_delete(local_2d8,local_2c8[0] + 1);
  }
  if (local_2f8 != &local_2e8) {
    operator_delete(local_2f8,CONCAT71(uStack_2e7,local_2e8) + 1);
  }
  cVar14 = FileSysUtilsPathExists((string *)local_298);
  if (cVar14 == '\0') {
    if (local_298[0] != local_288) {
      operator_delete(local_298[0],local_288._0_8_ + 1);
    }
    if (uVar12 < 10) {
      local_2b8 = (char *)&local_2a8;
      std::__cxx11::string::_M_construct((ulong)&local_2b8,'\x01');
LAB_001010f7:
      cVar14 = (char)uVar12 + '0';
    }
    else {
      if (uVar12 < 100) {
        local_2b8 = (char *)&local_2a8;
        std::__cxx11::string::_M_construct((ulong)&local_2b8,'\x02');
        local_118 = __LC8;
        uStack_110 = _UNK_0010b768;
        local_108 = __LC9;
        uStack_100 = _UNK_0010b778;
        local_f8 = __LC10;
        uStack_f0 = _UNK_0010b788;
        local_e8 = __LC11;
        uStack_e0 = _UNK_0010b798;
        local_d8 = __LC12;
        uStack_d0 = _UNK_0010b7a8;
        local_c8 = __LC13;
        uStack_c0 = _UNK_0010b7b8;
        local_b8 = __LC14;
        uStack_b0 = _UNK_0010b7c8;
        local_a8 = __LC15;
        uStack_a0 = _UNK_0010b7d8;
        local_98 = __LC16;
        uStack_90 = _UNK_0010b7e8;
        local_88 = __LC17;
        uStack_80 = _UNK_0010b7f8;
        local_78 = __LC18;
        uStack_70 = _UNK_0010b808;
        local_68 = __LC19;
        uStack_60 = (undefined1)_UNK_0010b818;
        uStack_5f = (undefined7)_LC20._0_8_;
        cStack_58 = SUB81(_LC20._0_8_,7);
        acStack_57[0] = _LC20[8];
        acStack_57[1] = _LC20[9];
        acStack_57[2] = _LC20[10];
        acStack_57[3] = _LC20[0xb];
        acStack_57[4] = _LC20[0xc];
        acStack_57[5] = _LC20[0xd];
        acStack_57[6] = _LC20[0xe];
        acStack_57[7] = _LC20[0xf];
      }
      else {
        if (uVar12 < 1000) {
          uVar20 = 2;
          cVar14 = '\x03';
        }
        else {
          uVar20 = 4 - (uVar12 < 10000);
          cVar14 = '\x05' - (uVar12 < 10000);
        }
        local_2b8 = (char *)&local_2a8;
        std::__cxx11::string::_M_construct((ulong)&local_2b8,cVar14);
        local_118 = __LC8;
        uStack_110 = _UNK_0010b768;
        local_108 = __LC9;
        uStack_100 = _UNK_0010b778;
        local_f8 = __LC10;
        uStack_f0 = _UNK_0010b788;
        local_e8 = __LC11;
        uStack_e0 = _UNK_0010b798;
        local_d8 = __LC12;
        uStack_d0 = _UNK_0010b7a8;
        local_c8 = __LC13;
        uStack_c0 = _UNK_0010b7b8;
        local_b8 = __LC14;
        uStack_b0 = _UNK_0010b7c8;
        local_a8 = __LC15;
        uStack_a0 = _UNK_0010b7d8;
        local_98 = __LC16;
        uStack_90 = _UNK_0010b7e8;
        local_88 = __LC17;
        uStack_80 = _UNK_0010b7f8;
        local_78 = __LC18;
        uStack_70 = _UNK_0010b808;
        local_68 = __LC19;
        uStack_60 = (undefined1)_UNK_0010b818;
        uStack_5f = (undefined7)_LC20._0_8_;
        cStack_58 = SUB81(_LC20._0_8_,7);
        acStack_57[0] = _LC20[8];
        acStack_57[1] = _LC20[9];
        acStack_57[2] = _LC20[10];
        acStack_57[3] = _LC20[0xb];
        acStack_57[4] = _LC20[0xc];
        acStack_57[5] = _LC20[0xd];
        acStack_57[6] = _LC20[0xe];
        acStack_57[7] = _LC20[0xf];
        do {
          uVar21 = uVar12;
          uVar12 = uVar21 / 100;
          uVar11 = (uVar21 % 100) * 2;
          cVar14 = *(char *)((long)&local_118 + (ulong)uVar11);
          local_2b8[uVar20] = *(char *)((long)&local_118 + (ulong)(uVar11 + 1));
          uVar11 = uVar20 - 1;
          uVar20 = uVar20 - 2;
          local_2b8[uVar11] = cVar14;
        } while (9999 < uVar21);
        if (uVar21 < 1000) goto LAB_001010f7;
      }
      cVar14 = *(char *)((long)&local_118 + (ulong)(uVar12 * 2));
      local_2b8[1] = *(char *)((long)&local_118 + (ulong)(uVar12 * 2 + 1));
    }
    *local_2b8 = cVar14;
    plVar7 = (long *)std::__cxx11::string::_M_replace
                               ((ulong)&local_2b8,0,(char *)0x0,*(ulong *)param_2);
    puVar2 = (pointer_____offset_0x10___)(plVar7 + 2);
    if ((pointer_____offset_0x10___)*plVar7 == puVar2) {
      uVar3 = plVar7[1] + 1;
      puVar10 = puVar2;
      puVar19 = local_288;
      if (7 < (uint)uVar3) {
        uVar8 = 0;
        do {
          uVar12 = (int)uVar8 + 8;
          uVar9 = (ulong)uVar12;
          *(undefined8 *)(local_288 + uVar8) = *(undefined8 *)(puVar2 + uVar8);
          uVar8 = uVar9;
        } while (uVar12 < ((uint)uVar3 & 0xfffffff8));
        puVar19 = local_288 + uVar9;
        puVar10 = puVar2 + uVar9;
      }
      lVar17 = 0;
      if ((uVar3 & 4) != 0) {
        *(undefined4 *)puVar19 = *(undefined4 *)puVar10;
        lVar17 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)(puVar19 + lVar17) = *(undefined2 *)(puVar10 + lVar17);
        lVar17 = lVar17 + 2;
      }
      local_298[0] = local_288;
      if ((uVar3 & 1) != 0) {
        puVar19[lVar17] = puVar10[lVar17];
      }
    }
    else {
      local_288._0_8_ = plVar7[2];
      local_298[0] = (pointer_____offset_0x10___)*plVar7;
    }
    local_298[1] = (pointer_____offset_0x10___)plVar7[1];
    plVar7[1] = 0;
    *(undefined1 *)(plVar7 + 2) = 0;
    *plVar7 = (long)puVar2;
    if (0x3fffffffffffffffU - (long)local_298[1] < 0x14) {
LAB_00101803:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    plVar7 = (long *)std::__cxx11::string::_M_append((char *)local_298,0x10a34c);
    puVar1 = (ulong *)(plVar7 + 2);
    if ((ulong *)*plVar7 == puVar1) {
      uVar3 = plVar7[1] + 1;
      puVar13 = puVar1;
      puVar18 = local_2c8;
      if (7 < (uint)uVar3) {
        uVar8 = 0;
        do {
          uVar12 = (int)uVar8 + 8;
          uVar9 = (ulong)uVar12;
          *(undefined8 *)((long)local_2c8 + uVar8) = *(undefined8 *)((long)puVar1 + uVar8);
          uVar8 = uVar9;
        } while (uVar12 < ((uint)uVar3 & 0xfffffff8));
        puVar18 = (ulong *)((long)local_2c8 + uVar9);
        puVar13 = (ulong *)(uVar9 + (long)puVar1);
      }
      lVar17 = 0;
      if ((uVar3 & 4) != 0) {
        *(int *)puVar18 = (int)*puVar13;
        lVar17 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)puVar18 + lVar17) = *(undefined2 *)((long)puVar13 + lVar17);
        lVar17 = lVar17 + 2;
      }
      local_2d8 = local_2c8;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)puVar18 + lVar17) = *(undefined1 *)((long)puVar13 + lVar17);
      }
    }
    else {
      local_2c8[0] = plVar7[2];
      local_2d8 = (ulong *)*plVar7;
    }
    local_2d0 = plVar7[1];
    *plVar7 = (long)puVar1;
    *(undefined1 *)(plVar7 + 2) = 0;
    plVar7[1] = 0;
    if (local_298[0] != local_288) {
      operator_delete(local_298[0],local_288._0_8_ + 1);
    }
    if (local_2b8 != (char *)&local_2a8) {
      operator_delete(local_2b8,CONCAT35(uStack_2a3,local_2a8) + 1);
    }
    uVar4 = FileSysUtilsPathExists((string *)&local_2d8);
    if ((char)uVar4 == '\0') {
      if (local_2d8 != local_2c8) {
        operator_delete(local_2d8,local_2c8[0] + 1);
      }
      goto LAB_00101247;
    }
    std::__cxx11::string::_M_assign(param_4);
    if (local_2d8 != local_2c8) {
      operator_delete(local_2d8,local_2c8[0] + 1);
    }
  }
  else {
    std::__cxx11::string::_M_assign(param_4);
    if (local_298[0] != local_288) {
      operator_delete(local_298[0],local_288._0_8_ + 1);
    }
  }
  uVar4 = 1;
LAB_00101247:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlatformUtilsGetSecureEnv(char const*) */

char * PlatformUtilsGetSecureEnv(char *param_1)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  char *__dest;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  size_t *psVar9;
  size_t *psVar10;
  long *plVar11;
  char *in_RSI;
  long lVar12;
  size_t *psVar13;
  long *plVar14;
  long in_FS_OFFSET;
  size_t local_f0;
  size_t *local_e8;
  size_t local_e0;
  size_t local_d8 [2];
  long *local_c8;
  long local_c0;
  long local_b8 [2];
  long *local_a8;
  long local_a0;
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  size_t *local_68;
  size_t local_60;
  size_t local_58 [5];
  ulong uVar8;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (char *)secure_getenv();
  if (pcVar3 == (char *)0x0) {
    pcVar3 = getenv(in_RSI);
    if (pcVar3 != (char *)0x0) {
      local_68 = local_58;
      sVar4 = strlen(pcVar3);
      local_f0 = sVar4;
      if (sVar4 < 0x10) {
        psVar10 = local_58;
        if (sVar4 == 1) {
          local_58[0] = CONCAT71(local_58[0]._1_7_,*pcVar3);
        }
        else if (sVar4 != 0) goto LAB_00101cf1;
      }
      else {
        local_68 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_f0);
        local_58[0] = local_f0;
        psVar10 = local_68;
LAB_00101cf1:
        memcpy(psVar10,pcVar3,sVar4);
        psVar10 = local_68;
      }
      sVar4 = local_f0;
      *(undefined1 *)((long)psVar10 + local_f0) = 0;
      local_60 = local_f0;
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (sVar4 != 0) {
        local_f0 = 0x25;
        local_e8 = local_d8;
        local_e8 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_e8,(ulong)&local_f0);
        sVar4 = _UNK_0010b838;
        local_d8[0] = local_f0;
        *local_e8 = __LC25;
        local_e8[1] = sVar4;
        sVar4 = _UNK_0010b848;
        local_e8[2] = __LC26;
        local_e8[3] = sVar4;
        *(undefined8 *)((long)local_e8 + 0x1d) = 0x20656c6261697261;
        local_e0 = local_f0;
        *(undefined1 *)((long)local_e8 + local_f0) = 0;
        sVar4 = strlen(in_RSI);
        if (0x3fffffffffffffff - local_e0 < sVar4) {
LAB_00101f09:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::append");
        }
        plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_e8,(ulong)in_RSI);
        plVar6 = plVar5 + 2;
        if ((long *)*plVar5 == plVar6) {
          uVar1 = plVar5[1] + 1;
          plVar11 = plVar6;
          plVar14 = local_b8;
          if (7 < (uint)uVar1) {
            uVar7 = 0;
            do {
              uVar2 = (int)uVar7 + 8;
              uVar8 = (ulong)uVar2;
              *(undefined8 *)((long)local_b8 + uVar7) = *(undefined8 *)((long)plVar6 + uVar7);
              uVar7 = uVar8;
            } while (uVar2 < ((uint)uVar1 & 0xfffffff8));
            plVar14 = (long *)((long)local_b8 + uVar8);
            plVar11 = (long *)(uVar8 + (long)plVar6);
          }
          lVar12 = 0;
          if ((uVar1 & 4) != 0) {
            *(int *)plVar14 = (int)*plVar11;
            lVar12 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)((long)plVar14 + lVar12) = *(undefined2 *)((long)plVar11 + lVar12);
            lVar12 = lVar12 + 2;
          }
          local_c8 = local_b8;
          if ((uVar1 & 1) != 0) {
            *(undefined1 *)((long)plVar14 + lVar12) = *(undefined1 *)((long)plVar11 + lVar12);
          }
        }
        else {
          local_b8[0] = plVar5[2];
          local_c8 = (long *)*plVar5;
        }
        local_c0 = plVar5[1];
        *plVar5 = (long)plVar6;
        plVar5[1] = 0;
        *(undefined1 *)(plVar5 + 2) = 0;
        if (0x3fffffffffffffffU - local_c0 < 0x43) goto LAB_00101f09;
        plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_c8,0x10a078);
        plVar6 = plVar5 + 2;
        if ((long *)*plVar5 == plVar6) {
          uVar1 = plVar5[1] + 1;
          plVar11 = plVar6;
          plVar14 = local_98;
          if (7 < (uint)uVar1) {
            uVar7 = 0;
            do {
              uVar2 = (int)uVar7 + 8;
              uVar8 = (ulong)uVar2;
              *(undefined8 *)((long)local_98 + uVar7) = *(undefined8 *)((long)plVar6 + uVar7);
              uVar7 = uVar8;
            } while (uVar2 < ((uint)uVar1 & 0xfffffff8));
            plVar14 = (long *)((long)local_98 + uVar8);
            plVar11 = (long *)(uVar8 + (long)plVar6);
          }
          lVar12 = 0;
          if ((uVar1 & 4) != 0) {
            *(int *)plVar14 = (int)*plVar11;
            lVar12 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)((long)plVar14 + lVar12) = *(undefined2 *)((long)plVar11 + lVar12);
            lVar12 = lVar12 + 2;
          }
          local_a8 = local_98;
          if ((uVar1 & 1) != 0) {
            *(undefined1 *)((long)plVar14 + lVar12) = *(undefined1 *)((long)plVar11 + lVar12);
          }
        }
        else {
          local_98[0] = plVar5[2];
          local_a8 = (long *)*plVar5;
        }
        local_a0 = plVar5[1];
        *plVar5 = (long)plVar6;
        plVar5[1] = 0;
        *(undefined1 *)(plVar5 + 2) = 0;
        sVar4 = strlen(pcVar3);
        if (0x3fffffffffffffffU - local_a0 < sVar4) goto LAB_00101f09;
        plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_a8,(ulong)pcVar3);
        plVar6 = plVar5 + 2;
        if ((long *)*plVar5 == plVar6) {
          uVar1 = plVar5[1] + 1;
          plVar11 = plVar6;
          plVar14 = local_78;
          if (7 < (uint)uVar1) {
            uVar7 = 0;
            do {
              uVar2 = (int)uVar7 + 8;
              uVar8 = (ulong)uVar2;
              *(undefined8 *)((long)local_78 + uVar7) = *(undefined8 *)((long)plVar6 + uVar7);
              uVar7 = uVar8;
            } while (uVar2 < ((uint)uVar1 & 0xfffffff8));
            plVar14 = (long *)((long)local_78 + uVar8);
            plVar11 = (long *)(uVar8 + (long)plVar6);
          }
          lVar12 = 0;
          if ((uVar1 & 4) != 0) {
            *(int *)plVar14 = (int)*plVar11;
            lVar12 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)((long)plVar14 + lVar12) = *(undefined2 *)((long)plVar11 + lVar12);
            lVar12 = lVar12 + 2;
          }
          local_88 = local_78;
          if ((uVar1 & 1) != 0) {
            *(undefined1 *)((long)plVar14 + lVar12) = *(undefined1 *)((long)plVar11 + lVar12);
          }
        }
        else {
          local_78[0] = plVar5[2];
          local_88 = (long *)*plVar5;
        }
        local_80 = plVar5[1];
        *plVar5 = (long)plVar6;
        plVar5[1] = 0;
        *(undefined1 *)(plVar5 + 2) = 0;
        if (0x3fffffffffffffffU - local_80 < 0x13) goto LAB_00101f09;
        plVar6 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10a361);
        psVar10 = (size_t *)(plVar6 + 2);
        if ((size_t *)*plVar6 == psVar10) {
          uVar1 = plVar6[1] + 1;
          psVar9 = psVar10;
          psVar13 = local_58;
          if (7 < (uint)uVar1) {
            uVar7 = 0;
            do {
              uVar2 = (int)uVar7 + 8;
              uVar8 = (ulong)uVar2;
              *(undefined8 *)((long)local_58 + uVar7) = *(undefined8 *)((long)psVar10 + uVar7);
              uVar7 = uVar8;
            } while (uVar2 < ((uint)uVar1 & 0xfffffff8));
            psVar13 = (size_t *)((long)local_58 + uVar8);
            psVar9 = (size_t *)(uVar8 + (long)psVar10);
          }
          lVar12 = 0;
          if ((uVar1 & 4) != 0) {
            *(int *)psVar13 = (int)*psVar9;
            lVar12 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)((long)psVar13 + lVar12) = *(undefined2 *)((long)psVar9 + lVar12);
            lVar12 = lVar12 + 2;
          }
          local_68 = local_58;
          if ((uVar1 & 1) != 0) {
            *(undefined1 *)((long)psVar13 + lVar12) = *(undefined1 *)((long)psVar9 + lVar12);
          }
        }
        else {
          local_58[0] = plVar6[2];
          local_68 = (size_t *)*plVar6;
        }
        local_60 = plVar6[1];
        *plVar6 = (long)psVar10;
        plVar6[1] = 0;
        *(undefined1 *)(plVar6 + 2) = 0;
        LogPlatformUtilsError((string *)&local_68);
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
        if (local_a8 != local_98) {
          operator_delete(local_a8,local_98[0] + 1);
        }
        if (local_c8 != local_b8) {
          operator_delete(local_c8,local_b8[0] + 1);
        }
        if (local_e8 != local_d8) {
          operator_delete(local_e8,local_d8[0] + 1);
        }
      }
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *(char **)param_1 = param_1 + 0x10;
    param_1[0x10] = '\0';
    goto LAB_00101896;
  }
  __dest = param_1 + 0x10;
  *(char **)param_1 = __dest;
  sVar4 = strlen(pcVar3);
  local_f0 = sVar4;
  if (sVar4 < 0x10) {
    if (sVar4 == 1) {
      param_1[0x10] = *pcVar3;
    }
    else if (sVar4 != 0) goto LAB_001018e6;
  }
  else {
    __dest = (char *)std::__cxx11::string::_M_create((ulong *)param_1,(ulong)&local_f0);
    *(char **)param_1 = __dest;
    *(size_t *)(param_1 + 0x10) = local_f0;
LAB_001018e6:
    memcpy(__dest,pcVar3,sVar4);
    __dest = *(char **)param_1;
  }
  *(size_t *)(param_1 + 8) = local_f0;
  __dest[local_f0] = '\0';
LAB_00101896:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ManifestFile::ManifestFile(ManifestFileType, std::__cxx11::string const&, std::__cxx11::string
   const&) */

void __thiscall
ManifestFile::ManifestFile(ManifestFile *this,undefined4 param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  *(ManifestFile **)this = this + 0x10;
  std::__cxx11::string::_M_construct<char*>(this,*param_3,param_3[1] + *param_3);
  *(undefined4 *)(this + 0x20) = param_2;
  lVar1 = param_4[1];
  *(ManifestFile **)(this + 0x28) = this + 0x38;
  std::__cxx11::string::_M_construct<char*>(this + 0x28,*param_4,lVar1 + *param_4);
  *(undefined8 *)(this + 0x58) = 0;
  *(ManifestFile **)(this + 0x60) = this + 0x90;
  *(undefined8 *)(this + 0x68) = 1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManifestFile::IsValidJson(Json::Value const&, JsonVersion&) */

undefined4 ManifestFile::IsValidJson(Value *param_1,JsonVersion *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ostream *poVar6;
  streambuf *psVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  long local_260;
  undefined1 local_258 [16];
  long local_248;
  long *local_238;
  long local_228 [2];
  undefined1 *local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined8 *local_1d8;
  long local_1d0;
  undefined8 local_1c8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::operator[]((char *)param_1);
  uVar3 = Json::Value::isNull();
  if ((char)uVar3 == '\0') {
    Json::Value::operator[]((char *)param_1);
    uVar4 = Json::Value::isString();
    if ((char)uVar4 != '\0') {
      Json::Value::operator[]((char *)param_1);
      Json::Value::asString_abi_cxx11_();
      iVar5 = __isoc23_sscanf(local_238,"%u.%u.%u",param_2,param_2 + 4,param_2 + 8);
      if ((((iVar5 != 3) || (*(int *)param_2 != 1)) || (*(int *)(param_2 + 4) != 0)) ||
         (*(int *)(param_2 + 8) != 0)) {
        std::ios_base::ios_base((ios_base *)local_148);
        pcVar2 = _init;
        local_148[0] = std::ios::init;
        local_60 = (undefined1  [16])0x0;
        local_50 = (undefined1  [16])0x0;
        local_68 = 0;
        local_70 = 0;
        psVar7 = (streambuf *)((ostream *)local_1b8 + *(long *)(_init + -0x18));
        local_1b8[0] = _init;
        *(undefined8 *)psVar7 = _locale;
        std::ios::init(psVar7);
        local_1a8 = (undefined1  [16])0x0;
        local_198 = (undefined1  [16])0x0;
        local_188 = (undefined1  [16])0x0;
        local_1b8[0] = (code *)PTR_vtable_0010b9d8;
        local_1b8[1] = (code *)PTR_vtable_0010b9d0;
        local_148[0] = (code *)&std::streambuf::vtable;
        std::locale::locale(local_178);
        local_1b8[1] = std::ios_base::ios_base;
        local_170 = 0x10;
        local_160 = 0;
        local_158 = 0;
        local_168 = &local_158;
        std::ios::init((streambuf *)local_148);
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_1b8,"ManifestFile::IsValidJson - JSON \"file_format_version\" ",
                   0x37);
        poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar6,".",1);
        poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
        std::__ostream_insert<char,std::char_traits<char>>(poVar6,".",1);
        poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
        std::__ostream_insert<char,std::char_traits<char>>(poVar6," is not supported",0x11);
        local_248 = 0;
        local_210 = 0;
        local_208 = 0;
        local_258 = (undefined1  [16])0x0;
        local_218 = &local_208;
        if (local_188._0_8_ == 0) {
          std::__cxx11::string::_M_assign((string *)&local_218);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
        }
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = &local_1e8;
        if ((LoaderLogger::GetInstance()::instance == '\0') &&
           (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
          LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
          __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                       &__dso_handle);
          __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
        }
        local_1c8._0_5_ = 0x586e65704f;
        local_1c8._5_3_ = 0x4c2d52;
        uStack_1c0 = 0x726564616f;
        local_1d0 = 0xd;
        local_1bb = 0;
        local_1d8 = &local_1c8;
        LoaderLogger::LogMessage
                  (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                   (vector *)&local_218);
        if (local_1d8 != &local_1c8) {
          operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
        }
        if (local_1f8 != &local_1e8) {
          operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
        }
        if (local_218 != &local_208) {
          operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
        }
        uVar1 = local_258._8_8_;
        pvVar8 = (void *)local_258._0_8_;
        if (local_258._8_8_ != local_258._0_8_) {
          do {
            if (*(void **)((long)pvVar8 + 0x10) != (void *)((long)pvVar8 + 0x20)) {
              operator_delete(*(void **)((long)pvVar8 + 0x10),*(long *)((long)pvVar8 + 0x20) + 1);
            }
            pvVar8 = (void *)((long)pvVar8 + 0x30);
          } while ((void *)uVar1 != pvVar8);
        }
        if ((void *)local_258._0_8_ != (void *)0x0) {
          operator_delete((void *)local_258._0_8_,local_248 - local_258._0_8_);
        }
        local_148[0] = (code *)&std::streambuf::vtable;
        local_1b8[0] = (code *)PTR_vtable_0010b9d8;
        local_1b8[1] = (code *)PTR_vtable_0010b9e0;
        if (local_168 != &local_158) {
          operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
        }
        local_1b8[1] = std::ios_base::~ios_base;
        std::locale::~locale(local_178);
        local_1b8[0] = pcVar2;
        *(undefined8 *)((long)local_1b8 + *(long *)(pcVar2 + -0x18)) = _locale;
        local_148[0] = std::ios::init;
        std::ios_base::~ios_base((ios_base *)local_148);
        uVar4 = uVar3;
      }
      if (local_238 != local_228) {
        operator_delete(local_238,local_228[0] + 1);
      }
      goto LAB_0010223f;
    }
  }
  local_248 = 0;
  local_258 = (undefined1  [16])0x0;
  local_260 = 0x43;
  local_1d8 = &local_1c8;
  local_1d8 = (undefined8 *)std::__cxx11::string::_M_create((ulong *)&local_1d8,(ulong)&local_260);
  uVar1 = _UNK_0010b858;
  local_1c8._0_5_ = (undefined5)local_260;
  local_1c8._5_3_ = (undefined3)((ulong)local_260 >> 0x28);
  *local_1d8 = __LC33;
  local_1d8[1] = uVar1;
  uVar1 = _UNK_0010b868;
  local_1d8[2] = __LC34;
  local_1d8[3] = uVar1;
  uVar1 = _UNK_0010b878;
  local_1d8[4] = __LC35;
  local_1d8[5] = uVar1;
  uVar1 = _UNK_0010b888;
  local_1d8[6] = __LC36;
  local_1d8[7] = uVar1;
  *(undefined4 *)((long)local_1d8 + 0x3f) = 0x226e6f69;
  local_1d0 = local_260;
  *(undefined1 *)((long)local_1d8 + local_260) = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1f8 = &local_1e8;
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  local_1b8[1] = (code *)0xd;
  local_1a8._5_8_ = 0x726564616f4c2d52;
  local_1a8._0_5_ = 0x586e65704f;
  local_1a8[0xd] = 0;
  local_1b8[0] = (code *)local_1a8;
  LoaderLogger::LogMessage
            (0x10b680,0x1000,(string *)0x1,(string *)local_1b8,(string *)&local_1f8,
             (vector *)&local_1d8);
  if (local_1b8[0] != (code *)local_1a8) {
    operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
  }
  if (local_1f8 != &local_1e8) {
    operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
  }
  if (local_1d8 != &local_1c8) {
    operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
  }
  uVar1 = local_258._8_8_;
  pvVar8 = (void *)local_258._0_8_;
  if (local_258._8_8_ != local_258._0_8_) {
    do {
      if (*(void **)((long)pvVar8 + 0x10) != (void *)((long)pvVar8 + 0x20)) {
        operator_delete(*(void **)((long)pvVar8 + 0x10),*(long *)((long)pvVar8 + 0x20) + 1);
      }
      pvVar8 = (void *)((long)pvVar8 + 0x30);
    } while ((void *)uVar1 != pvVar8);
  }
  if ((void *)local_258._0_8_ != (void *)0x0) {
    operator_delete((void *)local_258._0_8_,local_248 - local_258._0_8_);
  }
  uVar4 = 0;
LAB_0010223f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RuntimeManifestFile::RuntimeManifestFile(std::__cxx11::string const&, std::__cxx11::string
   const&) */

void __thiscall
RuntimeManifestFile::RuntimeManifestFile(RuntimeManifestFile *this,string *param_1,string *param_2)

{
  long lVar1;
  
  *(RuntimeManifestFile **)this = this + 0x10;
  std::__cxx11::string::_M_construct<char*>
            (this,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  lVar1 = *(long *)(param_2 + 8);
  *(undefined4 *)(this + 0x20) = 1;
  *(RuntimeManifestFile **)(this + 0x28) = this + 0x38;
  std::__cxx11::string::_M_construct<char*>(this + 0x28,*(long *)param_2,lVar1 + *(long *)param_2);
  *(undefined8 *)(this + 0x58) = 0;
  *(RuntimeManifestFile **)(this + 0x60) = this + 0x90;
  *(undefined8 *)(this + 0x68) = 1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* ApiLayerManifestFile::ApiLayerManifestFile(ManifestFileType, std::__cxx11::string const&,
   std::__cxx11::string const&, std::__cxx11::string const&, JsonVersion const&, unsigned int
   const&, std::__cxx11::string const&) */

void __thiscall
ApiLayerManifestFile::ApiLayerManifestFile
          (ApiLayerManifestFile *this,undefined8 param_2,undefined8 param_3,long *param_4,
          long *param_5,undefined8 *param_6,undefined4 *param_7)

{
  long lVar1;
  
  ManifestFile::ManifestFile();
  lVar1 = param_4[1];
  *(undefined8 *)(this + 0x98) = *param_6;
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_6 + 1);
  *(ApiLayerManifestFile **)(this + 0xa8) = this + 0xb8;
  std::__cxx11::string::_M_construct<char*>(this + 0xa8,*param_4,lVar1 + *param_4);
  lVar1 = param_5[1];
  *(ApiLayerManifestFile **)(this + 200) = this + 0xd8;
  std::__cxx11::string::_M_construct<char*>(this + 200,*param_5,lVar1 + *param_5);
  *(undefined4 *)(this + 0xe8) = *param_7;
  return;
}



/* ApiLayerManifestFile::PopulateApiLayerProperties(XrApiLayerProperties&) const */

void __thiscall
ApiLayerManifestFile::PopulateApiLayerProperties
          (ApiLayerManifestFile *this,XrApiLayerProperties *param_1)

{
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(this + 0xe8);
  *(ulong *)(param_1 + 0x110) =
       (ulong)*(uint *)(this + 0x98) << 0x30 | (ulong)*(uint *)(this + 0xa0) |
       ((ulong)*(uint *)(this + 0x9c) & 0xffff) << 0x20;
  strncpy((char *)(param_1 + 0x10),*(char **)(this + 0xa8),0xff);
  if (0xfe < *(ulong *)(this + 0xb0)) {
    param_1[0x10f] = (XrApiLayerProperties)0x0;
  }
  strncpy((char *)(param_1 + 0x11c),*(char **)(this + 200),0xff);
  if (0xfe < *(ulong *)(this + 0xd0)) {
    param_1[0x21b] = (XrApiLayerProperties)0x0;
  }
  return;
}



/* AddIfJson(std::__cxx11::string const&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) [clone .isra.0] */

void AddIfJson(string *param_1,vector *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  char local_28 [24];
  long local_10;
  
  uVar1 = *(ulong *)(param_1 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    local_28[4] = 0x6e;
    builtin_strncpy(local_28,".jso",4);
    local_30 = 5;
    local_28[5] = 0;
    if (4 < uVar1) {
      lVar3 = 5;
      do {
        if (*(char *)((long)&local_30 + lVar3 + 7) !=
            *(char *)(*(long *)param_1 + uVar1 + -6 + lVar3)) goto LAB_00102a2e;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      plVar2 = *(long **)(param_2 + 8);
      if (plVar2 == *(long **)(param_2 + 0x10)) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
          _M_realloc_insert<std::__cxx11::string_const&>
                    ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_2,
                     plVar2,param_1);
          return;
        }
        goto LAB_00102af3;
      }
      *plVar2 = (long)(plVar2 + 2);
      std::__cxx11::string::_M_construct<char*>(plVar2,*(long *)param_1,uVar1 + *(long *)param_1);
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x20;
    }
  }
LAB_00102a2e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102af3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CheckAllFilesInThePath(std::__cxx11::string const&, bool, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) [clone .part.0] */

void CheckAllFilesInThePath(string *param_1,bool param_2,vector *param_3)

{
  undefined8 uVar1;
  char cVar2;
  string *psVar3;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  long local_98;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_88 = &local_78;
  if (!param_2) {
    cVar2 = FileSysUtilsIsRegularFile(param_1);
    if (cVar2 != '\0') {
      FileSysUtilsGetAbsolutePath(param_1,(string *)&local_88);
      AddIfJson((string *)&local_88,param_3);
    }
    goto LAB_00102b58;
  }
  local_98 = 0;
  local_a8 = (undefined1  [16])0x0;
  cVar2 = FileSysUtilsFindFilesInPath(param_1,(vector *)local_a8);
  if (cVar2 == '\0') {
LAB_00102c48:
    uVar1 = local_a8._8_8_;
    psVar3 = (string *)local_a8._0_8_;
    if (local_a8._8_8_ != local_a8._0_8_) {
      do {
        if (*(string **)psVar3 != psVar3 + 0x10) {
          operator_delete(*(string **)psVar3,*(long *)(psVar3 + 0x10) + 1);
        }
        psVar3 = psVar3 + 0x20;
      } while ((string *)uVar1 != psVar3);
      psVar3 = (string *)local_a8._0_8_;
    }
  }
  else {
    uVar1 = local_a8._8_8_;
    psVar3 = (string *)local_a8._8_8_;
    if (local_a8._0_8_ != local_a8._8_8_) {
      psVar3 = (string *)local_a8._0_8_;
      do {
        local_60 = 0;
        local_58 = 0;
        local_68 = &local_58;
        FileSysUtilsCombinePaths(param_1,psVar3,(string *)&local_68);
        cVar2 = FileSysUtilsGetAbsolutePath((string *)&local_68,(string *)&local_88);
        if (cVar2 != '\0') {
          AddIfJson((string *)&local_88,param_3);
        }
        if (local_68 != &local_58) {
          operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
        }
        psVar3 = psVar3 + 0x20;
      } while ((string *)uVar1 != psVar3);
      goto LAB_00102c48;
    }
  }
  if (psVar3 != (string *)0x0) {
    operator_delete(psVar3,local_98 - (long)psVar3);
  }
LAB_00102b58:
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ManifestFile::GetInstanceExtensionProperties(std::vector<XrExtensionProperties,
   std::allocator<XrExtensionProperties> >&) */

void __thiscall ManifestFile::GetInstanceExtensionProperties(ManifestFile *this,vector *param_1)

{
  undefined8 *puVar1;
  char *__src;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  bVar13 = 0;
  puVar12 = *(undefined8 **)(this + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(this + 0x50);
  do {
    if (puVar12 == puVar1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __src = (char *)*puVar12;
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar8 = *(undefined8 **)param_1;
    lVar5 = ((long)puVar2 - (long)puVar8 >> 3) * -0x79435e50d79435e5;
    if (0 < lVar5 >> 2) {
      sVar9 = puVar12[1];
      puVar11 = puVar8 + (lVar5 >> 2) * 0x4c;
      do {
        while( true ) {
          puVar7 = puVar8;
          sVar6 = strlen((char *)(puVar7 + 2));
          if (sVar9 == sVar6) break;
          sVar6 = strlen((char *)(puVar7 + 0x15));
          if (sVar9 != sVar6) {
            sVar6 = strlen((char *)(puVar7 + 0x28));
            if (sVar9 == sVar6) {
              puVar8 = puVar7 + 0x26;
              if (sVar9 != 0) {
LAB_00102fe8:
                iVar3 = memcmp(__src,puVar7 + 0x28,sVar9);
                puVar8 = puVar7 + 0x26;
                if (iVar3 != 0) goto LAB_00103006;
              }
            }
            else {
              sVar6 = strlen((char *)(puVar7 + 0x3b));
              if (sVar9 != sVar6) goto LAB_00102dc8;
              puVar8 = puVar7 + 0x39;
              if (sVar9 != 0) goto LAB_00102ebd;
            }
            goto joined_r0x00102ee8;
          }
          puVar8 = puVar7 + 0x13;
          if (sVar9 == 0) goto joined_r0x00102ee8;
LAB_00102e6c:
          iVar3 = memcmp(__src,puVar7 + 0x15,sVar9);
          puVar8 = puVar7 + 0x13;
          if (iVar3 == 0) goto joined_r0x00102ee8;
          sVar6 = strlen((char *)(puVar7 + 0x28));
          if (sVar9 == sVar6) goto LAB_00102fe8;
          sVar6 = strlen((char *)(puVar7 + 0x3b));
          if (sVar6 == sVar9) goto LAB_00102ebd;
LAB_00102dc8:
          puVar8 = puVar7 + 0x4c;
          if (puVar7 + 0x4c == puVar11) goto LAB_00103030;
        }
        puVar8 = puVar7;
        if ((sVar9 == 0) || (iVar3 = memcmp(__src,puVar7 + 2,sVar9), iVar3 == 0))
        goto joined_r0x00102ee8;
        sVar6 = strlen((char *)(puVar7 + 0x15));
        if (sVar9 == sVar6) goto LAB_00102e6c;
        sVar6 = strlen((char *)(puVar7 + 0x28));
        if (sVar9 == sVar6) goto LAB_00102fe8;
LAB_00103006:
        sVar6 = strlen((char *)(puVar7 + 0x3b));
        if (sVar9 == sVar6) {
LAB_00102ebd:
          iVar3 = memcmp(__src,puVar7 + 0x3b,sVar9);
          puVar8 = puVar7 + 0x39;
          if (iVar3 != 0) goto LAB_00102dc8;
          goto joined_r0x00102ee8;
        }
        puVar8 = puVar7 + 0x4c;
      } while (puVar7 + 0x4c != puVar11);
LAB_00103030:
      puVar8 = puVar7 + 0x4c;
      lVar5 = ((long)puVar2 - (long)puVar8 >> 3) * -0x79435e50d79435e5;
    }
    if (lVar5 == 2) {
      sVar9 = puVar12[1];
LAB_00103123:
      pcVar10 = (char *)(puVar8 + 2);
      sVar6 = strlen(pcVar10);
      if (sVar9 == sVar6) {
        if (sVar9 != 0) {
LAB_00103166:
          iVar3 = memcmp(__src,pcVar10,sVar9);
          if (iVar3 != 0) {
            pcVar10 = (char *)(puVar8 + 0x15);
            puVar8 = puVar8 + 0x13;
            sVar6 = strlen(pcVar10);
            if (sVar6 != sVar9) goto LAB_00102eee;
            goto LAB_0010308a;
          }
        }
      }
      else {
LAB_00103134:
        puVar8 = puVar8 + 0x13;
LAB_0010306c:
        pcVar10 = (char *)(puVar8 + 2);
        sVar6 = strlen(pcVar10);
        if (sVar9 != sVar6) goto LAB_00102eee;
        if (sVar9 != 0) {
LAB_0010308a:
          iVar3 = memcmp(__src,pcVar10,sVar9);
          if (iVar3 != 0) goto LAB_00102eee;
        }
      }
joined_r0x00102ee8:
      if (puVar2 == puVar8) goto LAB_00102eee;
      uVar4 = *(uint *)(puVar8 + 0x12);
      if (*(uint *)(puVar8 + 0x12) < *(uint *)(puVar12 + 4)) {
        uVar4 = *(uint *)(puVar12 + 4);
      }
      *(uint *)(puVar8 + 0x12) = uVar4;
    }
    else {
      if (lVar5 == 3) {
        sVar9 = puVar12[1];
        sVar6 = strlen((char *)(puVar8 + 2));
        if (sVar9 != sVar6) {
          puVar8 = puVar8 + 0x13;
          goto LAB_00103123;
        }
        if ((sVar9 == 0) || (iVar3 = memcmp(__src,puVar8 + 2,sVar9), iVar3 == 0))
        goto joined_r0x00102ee8;
        pcVar10 = (char *)(puVar8 + 0x15);
        puVar8 = puVar8 + 0x13;
        sVar6 = strlen(pcVar10);
        if (sVar9 == sVar6) goto LAB_00103166;
        goto LAB_00103134;
      }
      if (lVar5 == 1) {
        sVar9 = puVar12[1];
        goto LAB_0010306c;
      }
LAB_00102eee:
      uStack_d4 = 0;
      uStack_d0 = 0;
      local_48 = 0;
      puVar8 = (undefined8 *)&uStack_d0;
      for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
      }
      local_d8 = 2;
      strncpy((char *)&local_c8,__src,0x7f);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(puVar12 + 4));
      if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
        std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::
        _M_realloc_insert<XrExtensionProperties_const&>
                  ((vector<XrExtensionProperties,std::allocator<XrExtensionProperties>> *)param_1,
                   puVar2,&local_d8);
      }
      else {
        *puVar2 = CONCAT44(uStack_d4,local_d8);
        puVar2[1] = CONCAT44(uStack_cc,uStack_d0);
        puVar2[2] = local_c8;
        puVar2[3] = uStack_c0;
        puVar2[4] = local_b8;
        puVar2[5] = uStack_b0;
        puVar2[0x12] = local_48;
        puVar2[6] = local_a8;
        puVar2[7] = uStack_a0;
        puVar2[8] = local_98;
        puVar2[9] = uStack_90;
        puVar2[10] = local_88;
        puVar2[0xb] = uStack_80;
        puVar2[0xc] = local_78;
        puVar2[0xd] = uStack_70;
        puVar2[0xe] = local_68;
        puVar2[0xf] = uStack_60;
        puVar2[0x10] = local_58;
        puVar2[0x11] = uStack_50;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x98;
      }
    }
    puVar12 = puVar12 + 5;
  } while( true );
}



/* ManifestFile::GetFunctionName(std::__cxx11::string const&) const */

string * __thiscall ManifestFile::GetFunctionName(ManifestFile *this,string *param_1)

{
  size_t __n;
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (*(ulong *)(this + 0x78) != 0) {
    if (*(ulong *)(this + 0x78) < 0x15) {
      plVar4 = *(long **)(this + 0x70);
      if (plVar4 != (long *)0x0) {
        __n = *(size_t *)(param_1 + 8);
        do {
          if (__n == plVar4[2]) {
            if ((__n == 0) || (iVar1 = memcmp(*(void **)param_1,(void *)plVar4[1],__n), iVar1 == 0))
            goto LAB_00103257;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else {
      uVar2 = std::_Hash_bytes(*(void **)param_1,*(ulong *)(param_1 + 8),0xc70f6907);
      puVar3 = (undefined8 *)
               std::
               _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
               ::_M_find_before_node
                         ((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                           *)(this + 0x60),uVar2 % *(ulong *)(this + 0x68),param_1,uVar2);
      if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
LAB_00103257:
        return (string *)(plVar4 + 5);
      }
    }
  }
  return param_1;
}



/* ManifestFile::ParseCommon(Json::Value const&) */

void __thiscall ManifestFile::ParseCommon(ManifestFile *this,Value *param_1)

{
  ManifestFile *pMVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  ValueIteratorBase VVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  Value *pVVar11;
  Value *this_00;
  ValueIteratorBase *pVVar12;
  long *plVar13;
  long *plVar14;
  ManifestFile *__s;
  long lVar15;
  ValueIteratorBase *pVVar16;
  uint uVar17;
  size_t __n;
  ulong uVar18;
  ulong extraout_RDX;
  ulong uVar19;
  long *plVar20;
  ValueIteratorBase *pVVar21;
  void *pvVar22;
  Value *this_01;
  ulong uVar23;
  long *plVar24;
  ValueIteratorBase *pVVar25;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  Value *local_168;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 aauStack_128 [3] [16];
  undefined1 local_f8 [16];
  long local_e8;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  ValueIteratorBase *local_88;
  undefined8 local_80;
  ulong auStack_78 [2];
  ValueIteratorBase *local_68;
  ulong local_60;
  ValueIteratorBase VStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 uStack_4b;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::operator[]((char *)param_1);
  cVar6 = Json::Value::isNull();
  if (cVar6 == '\0') {
    cVar6 = Json::Value::isArray();
    if (cVar6 != '\0') {
      pVVar25 = (ValueIteratorBase *)local_148;
      this_00 = (Value *)local_f8;
      local_148 = Json::Value::begin();
      this_01 = (Value *)aauStack_128;
      local_138 = Json::Value::end();
      local_168 = param_1;
      goto LAB_001033c0;
    }
  }
LAB_001032fc:
  Json::Value::operator[]((char *)param_1);
  cVar6 = Json::Value::isNull();
  if (cVar6 == '\0') {
    cVar6 = Json::Value::empty();
    if (cVar6 == '\0') {
      pVVar21 = (ValueIteratorBase *)aauStack_128;
      auVar26 = Json::Value::begin();
      aauStack_128[0] = auVar26;
      while( true ) {
        local_f8 = Json::Value::end();
        cVar6 = Json::ValueIteratorBase::isEqual(pVVar21);
        if (cVar6 != '\0') break;
        Json::ValueIteratorBase::deref();
        cVar6 = Json::Value::isString();
        if (cVar6 == '\0') {
          uVar19 = *(ulong *)(this + 8);
          uVar23 = *(ulong *)this;
          local_e8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_f8 = (undefined1  [16])0x0;
          local_c8 = &local_b8;
          std::__cxx11::string::reserve((ulong)&local_c8);
          if (0x3fffffffffffffffU - local_c0 < 0x1a) {
LAB_00103f5a:
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
          }
          std::__cxx11::string::_M_append((char *)&local_c8,0x10a3db);
          if (0x3fffffffffffffffU - local_c0 < uVar19) goto LAB_00103f5a;
          std::__cxx11::string::_M_append((char *)&local_c8,uVar23);
          if (0x3fffffffffffffffU - local_c0 < 0x30) goto LAB_00103f5a;
          plVar14 = (long *)std::__cxx11::string::_M_append((char *)&local_c8,0x10a0f8);
          plVar13 = plVar14 + 2;
          if ((long *)*plVar14 == plVar13) {
            uVar19 = plVar14[1] + 1;
            plVar20 = plVar13;
            plVar24 = local_98;
            if (7 < (uint)uVar19) {
              uVar17 = 0;
              do {
                uVar23 = (ulong)uVar17;
                uVar17 = uVar17 + 8;
                *(undefined8 *)((long)local_98 + uVar23) = *(undefined8 *)((long)plVar13 + uVar23);
              } while (uVar17 < ((uint)uVar19 & 0xfffffff8));
              plVar24 = (long *)((long)local_98 + (ulong)uVar17);
              plVar20 = (long *)((ulong)uVar17 + (long)plVar13);
            }
            lVar15 = 0;
            if ((uVar19 & 4) != 0) {
              *(int *)plVar24 = (int)*plVar20;
              lVar15 = 4;
            }
            if ((uVar19 & 2) != 0) {
              *(undefined2 *)((long)plVar24 + lVar15) = *(undefined2 *)((long)plVar20 + lVar15);
              lVar15 = lVar15 + 2;
            }
            local_a8 = local_98;
            if ((uVar19 & 1) != 0) {
              *(undefined1 *)((long)plVar24 + lVar15) = *(undefined1 *)((long)plVar20 + lVar15);
            }
          }
          else {
            local_98[0] = plVar14[2];
            local_a8 = (long *)*plVar14;
          }
          local_a0 = plVar14[1];
          *plVar14 = (long)plVar13;
          plVar14[1] = 0;
          *(undefined1 *)(plVar14 + 2) = 0;
          local_80 = 0;
          auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
          local_88 = (ValueIteratorBase *)auStack_78;
          if (LoaderLogger::GetInstance()::instance == '\0') {
            iVar8 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance);
            if (iVar8 != 0) {
              LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
              __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                           &__dso_handle);
              __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
            }
          }
          VStack_58 = (ValueIteratorBase)0x4f;
          uStack_57 = 0x586e6570;
          uStack_53 = 0x4c2d52;
          uStack_50 = 0x726564616f;
          local_60 = 0xd;
          uStack_4b = 0;
          local_68 = &VStack_58;
          LoaderLogger::LogMessage
                    (0x10b680,0x100,(string *)0x1,(string *)&local_68,(string *)&local_88,
                     (vector *)&local_a8);
          if (local_68 != &VStack_58) {
            operator_delete(local_68,CONCAT35(uStack_53,CONCAT41(uStack_57,VStack_58)) + 1);
          }
          if (local_88 != (ValueIteratorBase *)auStack_78) {
            operator_delete(local_88,auStack_78[0] + 1);
          }
          if (local_a8 != local_98) {
            operator_delete(local_a8,local_98[0] + 1);
          }
          if (local_c8 != &local_b8) {
            operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
          }
          uVar3 = local_f8._8_8_;
          pvVar22 = (void *)local_f8._0_8_;
          if (local_f8._8_8_ != local_f8._0_8_) {
            do {
              if (*(void **)((long)pvVar22 + 0x10) != (void *)((long)pvVar22 + 0x20)) {
                operator_delete(*(void **)((long)pvVar22 + 0x10),*(long *)((long)pvVar22 + 0x20) + 1
                               );
              }
              pvVar22 = (void *)((long)pvVar22 + 0x30);
            } while ((void *)uVar3 != pvVar22);
          }
          if ((void *)local_f8._0_8_ != (void *)0x0) {
            operator_delete((void *)local_f8._0_8_,local_e8 - local_f8._0_8_);
          }
        }
        else {
          Json::ValueIteratorBase::key();
          Json::Value::asString_abi_cxx11_();
          Json::Value::~Value((Value *)local_f8);
          Json::ValueIteratorBase::deref();
          Json::Value::asString_abi_cxx11_();
          this_00 = (Value *)operator_new(0x50);
          pVVar25 = (ValueIteratorBase *)(this_00 + 0x18);
          *(long *)this_00 = 0;
          *(ValueIteratorBase **)(this_00 + 8) = pVVar25;
          std::__cxx11::string::_M_construct<char*>
                    ((string *)(this_00 + 8),local_88,local_88 + local_80);
          *(Value **)(this_00 + 0x28) = this_00 + 0x38;
          std::__cxx11::string::_M_construct<char*>(this_00 + 0x28,local_68,local_68 + local_60);
          if (*(ulong *)(this + 0x78) < 0x15) {
            __n = *(size_t *)(this_00 + 0x10);
            pvVar22 = *(void **)(this_00 + 8);
            for (puVar2 = *(undefined8 **)(this + 0x70); puVar2 != (undefined8 *)0x0;
                puVar2 = (undefined8 *)*puVar2) {
              if (__n == puVar2[2]) {
                if (__n == 0) goto LAB_00103731;
                iVar8 = memcmp(pvVar22,(void *)puVar2[1],__n);
                if (iVar8 == 0) goto LAB_00103731;
              }
            }
          }
          else {
            __n = *(size_t *)(this_00 + 0x10);
            pvVar22 = *(void **)(this_00 + 8);
          }
          pVVar12 = (ValueIteratorBase *)std::_Hash_bytes(pvVar22,__n,0xc70f6907);
          uVar19 = *(ulong *)(this + 0x68);
          uVar23 = *(ulong *)(this + 0x78);
          local_168 = (Value *)((ulong)pVVar12 % uVar19);
          if (uVar23 < 0x15) {
LAB_00103838:
            uVar18 = 1;
            cVar6 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                              ((ulong)(this + 0x80),uVar19,uVar23);
            if (cVar6 == '\0') {
              __s = *(ManifestFile **)(this + 0x60);
            }
            else {
              if (extraout_RDX == 1) {
                __s = this + 0x90;
                *(undefined8 *)(this + 0x90) = 0;
              }
              else {
                if (extraout_RDX >> 0x3c != 0) {
                  this_01 = (Value *)(extraout_RDX >> 0x3d);
                  if (this_01 != (Value *)0x0) {
                    std::__throw_bad_array_new_length();
                  }
                  pVVar16 = (ValueIteratorBase *)std::__throw_bad_alloc();
                  VVar5 = VStack_58;
LAB_00103f15:
                  VStack_58 = VVar5;
                  *(undefined4 *)pVVar16 = *(undefined4 *)pVVar21;
                  *(undefined4 *)(pVVar16 + (uVar18 - 4)) = *(undefined4 *)(pVVar21 + (uVar18 - 4));
                  VVar5 = VStack_58;
LAB_00103e00:
                  VStack_58 = VVar5;
                  local_68[local_80] = (ValueIteratorBase)0x0;
                  pVVar16 = pVVar21;
                  local_60 = local_80;
LAB_001034ea:
                  do {
                    local_80 = 0;
                    *local_88 = (ValueIteratorBase)0x0;
                    if (local_88 != pVVar16) {
                      operator_delete(local_88,auStack_78[0] + 1);
                    }
                    cVar6 = Json::Value::isUInt();
                    if (cVar6 == '\0') {
                      Json::Value::asString_abi_cxx11_();
                      uVar7 = __isoc23_strtol(local_88,0,10);
                      local_48 = CONCAT44(local_48._4_4_,uVar7);
                      if (local_88 != pVVar16) {
                        operator_delete(local_88,auStack_78[0] + 1);
                      }
                    }
                    else {
                      uVar7 = Json::Value::asUInt();
                      local_48 = CONCAT44(local_48._4_4_,uVar7);
                    }
                    plVar13 = *(long **)(this + 0x50);
                    if (plVar13 == *(long **)(this + 0x58)) {
                      std::vector<ExtensionListing,std::allocator<ExtensionListing>>::
                      _M_realloc_insert<ExtensionListing_const&>
                                ((vector<ExtensionListing,std::allocator<ExtensionListing>> *)
                                 (this + 0x48),plVar13,&local_68);
                    }
                    else {
                      *plVar13 = (long)(plVar13 + 2);
                      std::__cxx11::string::_M_construct<char*>
                                (plVar13,local_68,local_68 + local_60);
                      *(undefined4 *)(plVar13 + 4) = (undefined4)local_48;
                      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x28;
                    }
                    if (local_68 != pVVar12) {
                      operator_delete(local_68,CONCAT35(uStack_53,CONCAT41(uStack_57,VStack_58)) + 1
                                     );
                    }
                    do {
                      do {
                        Json::Value::~Value(this_00);
                        Json::Value::~Value(this_01);
                        Json::ValueIteratorBase::increment();
LAB_001033c0:
                        cVar6 = Json::ValueIteratorBase::isEqual(pVVar25);
                        param_1 = local_168;
                        if (cVar6 != '\0') goto LAB_001032fc;
                        pcVar10 = (char *)Json::ValueIteratorBase::deref();
                        pVVar11 = (Value *)Json::Value::operator[](pcVar10);
                        Json::Value::Value(this_01,pVVar11);
                        pVVar11 = (Value *)Json::Value::operator[](pcVar10);
                        Json::Value::Value(this_00,pVVar11);
                        cVar6 = Json::Value::isString();
                      } while (cVar6 == '\0');
                      cVar6 = Json::Value::isString();
                      if (cVar6 != '\0') break;
                      cVar6 = Json::Value::isUInt();
                    } while (cVar6 == '\0');
                    pVVar12 = &VStack_58;
                    local_48 = 0;
                    pVVar21 = (ValueIteratorBase *)auStack_78;
                    local_60 = 0;
                    VStack_58 = (ValueIteratorBase)0x0;
                    local_68 = pVVar12;
                    Json::Value::asString_abi_cxx11_();
                    uVar4 = uStack_53;
                    uVar7 = uStack_57;
                    VVar5 = VStack_58;
                    pVVar16 = local_68;
                    uVar19 = local_80;
                    VStack_58 = SUB81(auStack_78[0],0);
                    if (local_88 == pVVar21) goto LAB_00103db0;
                    uStack_53 = (undefined3)(auStack_78[0] >> 0x28);
                    uStack_57 = (undefined4)(auStack_78[0] >> 8);
                    if (local_68 != pVVar12) {
                      local_68 = local_88;
                      local_60 = local_80;
                      if (pVVar16 != (ValueIteratorBase *)0x0) {
                        local_88 = pVVar16;
                        pVVar16 = pVVar21;
                        auStack_78[0] = CONCAT35(uVar4,CONCAT41(uVar7,VVar5));
                        goto LAB_001034ea;
                      }
                    }
                    local_60 = local_80;
                    local_68 = local_88;
                    pVVar16 = (ValueIteratorBase *)auStack_78;
                    local_88 = pVVar21;
                  } while( true );
                }
                __s = (ManifestFile *)operator_new(extraout_RDX * 8);
                memset(__s,0,extraout_RDX * 8);
              }
              plVar13 = *(long **)(this + 0x70);
              *(undefined8 *)(this + 0x70) = 0;
              uVar19 = 0;
              while (uVar23 = uVar19, plVar14 = plVar13, plVar13 != (long *)0x0) {
                while( true ) {
                  plVar13 = (long *)*plVar14;
                  uVar19 = (ulong)plVar14[9] % extraout_RDX;
                  pMVar1 = __s + uVar19 * 8;
                  if (*(long **)pMVar1 == (long *)0x0) break;
                  *plVar14 = **(long **)pMVar1;
                  **(undefined8 **)pMVar1 = plVar14;
                  plVar14 = plVar13;
                  if (plVar13 == (long *)0x0) goto LAB_00103cdc;
                }
                *plVar14 = *(long *)(this + 0x70);
                *(long **)(this + 0x70) = plVar14;
                *(ManifestFile **)pMVar1 = this + 0x70;
                if (*plVar14 != 0) {
                  *(long **)(__s + uVar23 * 8) = plVar14;
                }
              }
LAB_00103cdc:
              if (*(ManifestFile **)(this + 0x60) != this + 0x90) {
                operator_delete(*(ManifestFile **)(this + 0x60),*(long *)(this + 0x68) << 3);
              }
              *(ulong *)(this + 0x68) = extraout_RDX;
              local_168 = (Value *)((ulong)pVVar12 % extraout_RDX);
              *(ManifestFile **)(this + 0x60) = __s;
            }
            *(ValueIteratorBase **)(this_00 + 0x48) = pVVar12;
            pMVar1 = __s + (long)local_168 * 8;
            if (*(long **)pMVar1 == (long *)0x0) {
              lVar15 = *(long *)(this + 0x70);
              *(Value **)(this + 0x70) = this_00;
              *(long *)this_00 = lVar15;
              if (lVar15 != 0) {
                *(Value **)(__s + (*(ulong *)(lVar15 + 0x48) % *(ulong *)(this + 0x68)) * 8) =
                     this_00;
              }
              *(ManifestFile **)pMVar1 = this + 0x70;
            }
            else {
              *(long *)this_00 = **(long **)pMVar1;
              **(undefined8 **)pMVar1 = this_00;
            }
            *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
          }
          else {
            plVar13 = (long *)std::
                              _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                              ::_M_find_before_node
                                        ((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                                          *)(this + 0x60),(ulong)local_168,(string *)(this_00 + 8),
                                         (ulong)pVVar12);
            if ((plVar13 == (long *)0x0) || (*plVar13 == 0)) goto LAB_00103838;
LAB_00103731:
            if (this_00 + 0x38 != *(Value **)(this_00 + 0x28)) {
              operator_delete(*(Value **)(this_00 + 0x28),*(long *)(this_00 + 0x38) + 1);
            }
            if (pVVar25 != *(ValueIteratorBase **)(this_00 + 8)) {
              operator_delete(*(ValueIteratorBase **)(this_00 + 8),*(long *)(this_00 + 0x18) + 1);
            }
            operator_delete(this_00,0x50);
          }
          if (local_68 != &VStack_58) {
            operator_delete(local_68,CONCAT35(uStack_53,CONCAT41(uStack_57,VStack_58)) + 1);
          }
          if (local_88 != (ValueIteratorBase *)auStack_78) {
            operator_delete(local_88,auStack_78[0] + 1);
          }
        }
        Json::ValueIteratorBase::increment();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103db0:
  if (local_80 != 0) {
    if (local_80 == 1) {
      *local_68 = VStack_58;
      VStack_58 = VVar5;
      VVar5 = VStack_58;
      goto LAB_00103e00;
    }
    uVar17 = (uint)local_80;
    uVar18 = local_80 & 0xffffffff;
    if (7 < uVar17) {
      VStack_58 = VVar5;
      *(ulong *)local_68 = auStack_78[0];
      uVar19 = uVar19 & 0xffffffff;
      *(undefined8 *)(pVVar16 + (uVar19 - 8)) = *(undefined8 *)((long)auStack_78 + (uVar19 - 8));
      lVar15 = (long)pVVar16 - ((ulong)(pVVar16 + 8) & 0xfffffffffffffff8);
      uVar17 = (int)lVar15 + uVar17 & 0xfffffff8;
      VVar5 = VStack_58;
      if (7 < uVar17) {
        uVar9 = 0;
        do {
          uVar19 = (ulong)uVar9;
          uVar9 = uVar9 + 8;
          *(undefined8 *)(((ulong)(pVVar16 + 8) & 0xfffffffffffffff8) + uVar19) =
               *(undefined8 *)(pVVar21 + (uVar19 - lVar15));
        } while (uVar9 < uVar17);
      }
      goto LAB_00103e00;
    }
    if ((local_80 & 4) == 0) {
      if ((uVar17 != 0) &&
         (*local_68 = VStack_58, VStack_58 = VVar5, VVar5 = VStack_58, (uVar19 & 2) != 0)) {
        *(undefined2 *)(pVVar16 + (uVar18 - 2)) = *(undefined2 *)((long)auStack_78 + (uVar18 - 2));
      }
      goto LAB_00103e00;
    }
    goto LAB_00103f15;
  }
  goto LAB_00103e00;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RuntimeManifestFile::CreateIfValid(Json::Value const&, std::__cxx11::string const&,
   std::vector<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> >,
   std::allocator<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> > >
   >&) */

void RuntimeManifestFile::CreateIfValid(Value *param_1,string *param_2,vector *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  pointer_____offset_0x10___ puVar3;
  ulong __n;
  char cVar4;
  int iVar5;
  Value *pVVar6;
  ostream *poVar7;
  long lVar8;
  ManifestFile *this;
  void *pvVar9;
  streambuf *psVar10;
  long in_FS_OFFSET;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined1 local_2b8 [16];
  long local_2a8;
  long *local_298 [2];
  long local_288 [2];
  char *local_278;
  long local_270;
  char local_268;
  undefined7 uStack_267;
  undefined1 *local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined7 uStack_247;
  undefined1 *local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined7 uStack_227;
  undefined1 *local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined8 *local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined5 uStack_1c0;
  undefined1 local_1bb;
  pointer_____offset_0x10___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  long *local_168;
  ulong local_160;
  long local_158 [2];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_2b8._8_8_ = local_2b8._0_8_;
  puVar3 = PTR_vtable_0010b9d0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b8._0_8_ = 0x23;
  local_1d8 = &local_1c8;
  local_1d8 = (undefined8 *)std::__cxx11::string::_M_create((ulong *)&local_1d8,(ulong)local_2b8);
  uVar2 = _UNK_0010b898;
  local_1c8._0_5_ = (undefined5)local_2b8._0_8_;
  local_1c8._5_3_ = SUB83(local_2b8._0_8_,5);
  *local_1d8 = __LC52;
  local_1d8[1] = uVar2;
  uVar2 = _UNK_0010b8a8;
  local_1d8[2] = __LC53;
  local_1d8[3] = uVar2;
  *(undefined4 *)((long)local_1d8 + 0x1f) = 0x2064696c;
  local_1d0 = local_2b8._0_8_;
  *(undefined1 *)((long)local_1d8 + local_2b8._0_8_) = 0;
  std::ios_base::ios_base((ios_base *)local_148);
  local_60 = (undefined1  [16])0x0;
  local_148[0] = std::ios::init;
  local_68 = 0;
  local_50 = (undefined1  [16])0x0;
  local_1b8 = _init;
  local_70 = 0;
  psVar10 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar10 = _locale;
  std::ios::init(psVar10);
  local_148[0] = (code *)&std::streambuf::vtable;
  local_1b8 = &std::__cxx11::ostringstream::VTT;
  puStack_1b0 = puVar3;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  __n = local_1d0;
  puVar1 = local_1d8;
  puStack_1b0 = std::ios_base::ios_base;
  local_170 = 0;
  local_168 = local_158;
  if ((local_1d8 == (undefined8 *)0x0) && (local_1d0 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  local_2b8._0_8_ = local_1d0;
  if (local_1d0 < 0x10) {
    local_160 = local_1d0;
    if (local_1d0 == 1) {
      local_158[0] = CONCAT71(local_158[0]._1_7_,*(undefined1 *)local_1d8);
    }
    else if (local_1d0 != 0) goto LAB_00104799;
  }
  else {
    local_168 = (long *)std::__cxx11::string::_M_create((ulong *)&local_168,(ulong)local_2b8);
    local_158[0] = local_2b8._0_8_;
LAB_00104799:
    memcpy(local_168,puVar1,__n);
    local_160 = local_2b8._0_8_;
  }
  *(undefined1 *)((long)local_168 + local_160) = 0;
  local_170 = 0x10;
  std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
  std::ios::init((streambuf *)local_148);
  if (local_1d8 != &local_1c8) {
    operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
  }
  local_2c4 = 0;
  local_2bc = 0;
  cVar4 = ManifestFile::IsValidJson(param_1,(JsonVersion *)&local_2c4);
  if (cVar4 == '\0') {
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_1b8,"isValidJson indicates ",0x16);
    poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1b8,*(char **)param_2,*(long *)(param_2 + 8));
    std::__ostream_insert<char,std::char_traits<char>>(poVar7," is not a valid manifest file.",0x1e)
    ;
    local_2a8 = 0;
    local_210 = 0;
    local_208 = 0;
    local_2b8 = (undefined1  [16])0x0;
    local_218 = &local_208;
    if (local_188._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_218);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
    }
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = &local_1e8;
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    local_1c8._0_5_ = 0x586e65704f;
    local_1bb = 0;
    local_1c8._5_3_ = 0x4c2d52;
    uStack_1c0 = 0x726564616f;
    local_1d0 = 0xd;
    local_1d8 = &local_1c8;
    LoaderLogger::LogMessage
              (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
               (vector *)&local_218);
    if (local_1d8 != &local_1c8) {
      operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
    }
    if (local_1f8 != &local_1e8) {
      operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
    }
    if (local_218 != &local_208) {
      operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
    }
    uVar2 = local_2b8._8_8_;
    pvVar9 = (void *)local_2b8._0_8_;
    if (local_2b8._8_8_ != local_2b8._0_8_) {
      do {
        if (*(void **)((long)pvVar9 + 0x10) != (void *)((long)pvVar9 + 0x20)) {
          operator_delete(*(void **)((long)pvVar9 + 0x10),*(long *)((long)pvVar9 + 0x20) + 1);
        }
        pvVar9 = (void *)((long)pvVar9 + 0x30);
      } while ((void *)uVar2 != pvVar9);
      goto LAB_00104463;
    }
  }
  else {
    pVVar6 = (Value *)Json::Value::operator[]((char *)param_1);
    cVar4 = Json::Value::isNull();
    if (cVar4 == '\0') {
      Json::Value::operator[]((char *)pVVar6);
      cVar4 = Json::Value::isNull();
      if (cVar4 == '\0') {
        Json::Value::operator[]((char *)pVVar6);
        cVar4 = Json::Value::isString();
        if (cVar4 != '\0') {
          Json::Value::operator[]((char *)pVVar6);
          Json::Value::asString_abi_cxx11_();
          cVar4 = (char)(string *)local_298;
          lVar8 = std::__cxx11::string::find(cVar4,0x5c);
          if (((lVar8 != -1) || (lVar8 = std::__cxx11::string::find(cVar4,0x2f), lVar8 != -1)) &&
             (cVar4 = FileSysUtilsIsAbsolutePath((string *)local_298), cVar4 == '\0')) {
            local_270 = 0;
            local_268 = '\0';
            local_250 = 0;
            local_248 = 0;
            local_230 = 0;
            local_228 = 0;
            local_278 = &local_268;
            local_258 = &local_248;
            local_238 = &local_228;
            cVar4 = FileSysUtilsGetCanonicalPath(param_2,(string *)&local_278);
            if (cVar4 == '\0') {
              std::__cxx11::string::_M_assign((string *)&local_278);
            }
            cVar4 = FileSysUtilsGetParentPath((string *)&local_278,(string *)&local_238);
            if ((cVar4 == '\0') ||
               (cVar4 = FileSysUtilsCombinePaths
                                  ((string *)&local_238,(string *)local_298,(string *)&local_258),
               cVar4 == '\0')) {
              poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                                 ((ostream *)&local_1b8,*(char **)param_2,*(long *)(param_2 + 8));
              std::__ostream_insert<char,std::char_traits<char>>
                        (poVar7," filesystem operations failed for path  ",0x28);
              std::__ostream_insert<char,std::char_traits<char>>(poVar7,local_278,local_270);
              local_2a8 = 0;
              local_210 = 0;
              local_208 = 0;
              local_2b8 = (undefined1  [16])0x0;
              local_218 = &local_208;
              if (local_188._0_8_ == 0) {
                std::__cxx11::string::_M_assign((string *)&local_218);
              }
              else {
                std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
              }
              local_1e8 = 0;
              local_1f0 = 0;
              local_1f8 = &local_1e8;
              if ((LoaderLogger::GetInstance()::instance == '\0') &&
                 (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0))
              {
                LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
                __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                             &__dso_handle);
                __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
              }
              local_1c8._0_5_ = 0x586e65704f;
              local_1c8._5_3_ = 0x4c2d52;
              uStack_1c0 = 0x726564616f;
              local_1d0 = 0xd;
              local_1bb = 0;
              local_1d8 = &local_1c8;
              LoaderLogger::LogMessage
                        (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                         (vector *)&local_218);
              if (local_1d8 != &local_1c8) {
                operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
              }
              if (local_1f8 != &local_1e8) {
                operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
              }
              if (local_218 != &local_208) {
                operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
              }
              uVar2 = local_2b8._8_8_;
              pvVar9 = (void *)local_2b8._0_8_;
              if (local_2b8._8_8_ != local_2b8._0_8_) {
                do {
                  if (*(void **)((long)pvVar9 + 0x10) != (void *)((long)pvVar9 + 0x20)) {
                    operator_delete(*(void **)((long)pvVar9 + 0x10),
                                    *(long *)((long)pvVar9 + 0x20) + 1);
                  }
                  pvVar9 = (void *)((long)pvVar9 + 0x30);
                } while ((void *)uVar2 != pvVar9);
              }
              if ((void *)local_2b8._0_8_ != (void *)0x0) {
                operator_delete((void *)local_2b8._0_8_,local_2a8 - local_2b8._0_8_);
              }
              if (local_238 != &local_228) {
                operator_delete(local_238,CONCAT71(uStack_227,local_228) + 1);
              }
              if (local_258 != &local_248) {
                operator_delete(local_258,CONCAT71(uStack_247,local_248) + 1);
              }
              if (local_278 != &local_268) {
                operator_delete(local_278,CONCAT71(uStack_267,local_268) + 1);
              }
              if (local_298[0] != local_288) {
                operator_delete(local_298[0],local_288[0] + 1);
              }
              goto joined_r0x001044ab;
            }
            std::__cxx11::string::_M_assign((string *)local_298);
            if (local_238 != &local_228) {
              operator_delete(local_238,CONCAT71(uStack_227,local_228) + 1);
            }
            if (local_258 != &local_248) {
              operator_delete(local_258,CONCAT71(uStack_247,local_248) + 1);
            }
            if (local_278 != &local_268) {
              operator_delete(local_278,CONCAT71(uStack_267,local_268) + 1);
            }
          }
          this = (ManifestFile *)operator_new(0x98);
          ManifestFile::ManifestFile(this,1,param_2,(string *)local_298);
          local_2b8._0_8_ = this;
          puVar1 = *(undefined8 **)(param_3 + 8);
          if (puVar1 == *(undefined8 **)(param_3 + 0x10)) {
            std::
            vector<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>,std::allocator<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>>>
            ::_M_realloc_insert<RuntimeManifestFile*>
                      ((vector<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>,std::allocator<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>>>
                        *)param_3,puVar1,local_2b8);
            this = *(ManifestFile **)(*(long *)(param_3 + 8) + -8);
          }
          else {
            *puVar1 = this;
            *(undefined8 **)(param_3 + 8) = puVar1 + 1;
          }
          ManifestFile::ParseCommon(this,pVVar6);
          if (local_298[0] != local_288) {
            operator_delete(local_298[0],local_288[0] + 1);
          }
          goto joined_r0x001044ab;
        }
      }
    }
    poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1b8,*(char **)param_2,*(long *)(param_2 + 8));
    std::__ostream_insert<char,std::char_traits<char>>
              (poVar7," is missing required fields.  Verify all proper fields exist.",0x3d);
    local_2a8 = 0;
    local_210 = 0;
    local_208 = 0;
    local_2b8 = (undefined1  [16])0x0;
    local_218 = &local_208;
    if (local_188._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_218);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
    }
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = &local_1e8;
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    local_1c8._0_5_ = 0x586e65704f;
    local_1c8._5_3_ = 0x4c2d52;
    uStack_1c0 = 0x726564616f;
    local_1d0 = 0xd;
    local_1bb = 0;
    local_1d8 = &local_1c8;
    LoaderLogger::LogMessage
              (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
               (vector *)&local_218);
    if (local_1d8 != &local_1c8) {
      operator_delete(local_1d8,CONCAT35(local_1c8._5_3_,(undefined5)local_1c8) + 1);
    }
    if (local_1f8 != &local_1e8) {
      operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
    }
    if (local_218 != &local_208) {
      operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
    }
    uVar2 = local_2b8._8_8_;
    pvVar9 = (void *)local_2b8._0_8_;
    if (local_2b8._8_8_ != local_2b8._0_8_) {
      do {
        if (*(void **)((long)pvVar9 + 0x10) != (void *)((long)pvVar9 + 0x20)) {
          operator_delete(*(void **)((long)pvVar9 + 0x10),*(long *)((long)pvVar9 + 0x20) + 1);
        }
        pvVar9 = (void *)((long)pvVar9 + 0x30);
      } while ((void *)uVar2 != pvVar9);
LAB_00104463:
    }
  }
  if ((void *)local_2b8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_2b8._0_8_,local_2a8 - local_2b8._0_8_);
  }
joined_r0x001044ab:
  local_1b8 = &std::__cxx11::ostringstream::VTT;
  local_148[0] = (code *)&std::streambuf::vtable;
  if (local_168 != local_158) {
    puStack_1b0 = std::ios_base::ios_base;
    local_1b8 = &std::__cxx11::ostringstream::VTT;
    local_148[0] = (code *)&std::streambuf::vtable;
    operator_delete(local_168,local_158[0] + 1);
  }
  puStack_1b0 = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  local_1b8 = _init;
  *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010587b) */
/* WARNING: Removing unreachable block (ram,0x00105880) */
/* WARNING: Removing unreachable block (ram,0x0010588d) */
/* WARNING: Removing unreachable block (ram,0x0010589a) */
/* WARNING: Removing unreachable block (ram,0x001058a3) */
/* WARNING: Removing unreachable block (ram,0x001058b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RuntimeManifestFile::CreateIfValid(std::__cxx11::string const&,
   std::vector<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> >,
   std::allocator<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> > >
   >&) */

void RuntimeManifestFile::CreateIfValid(string *param_1,vector *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  pointer_____offset_0x10___ puVar4;
  pointer_____offset_0x10___ puVar5;
  undefined8 *__src;
  char cVar6;
  int iVar7;
  long lVar8;
  ostream *poVar9;
  streambuf *psVar10;
  void *pvVar11;
  long in_FS_OFFSET;
  Value local_4a8 [48];
  undefined1 local_478 [16];
  long local_468;
  char *local_448;
  long local_440;
  char local_438;
  undefined7 uStack_437;
  undefined1 *local_428;
  undefined8 local_420;
  undefined1 local_418;
  undefined7 uStack_417;
  undefined1 *local_408;
  long local_400;
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  undefined8 *local_3e8;
  ulong local_3e0;
  undefined1 local_3d8;
  undefined4 uStack_3d7;
  undefined3 uStack_3d3;
  undefined5 uStack_3d0;
  undefined1 local_3cb;
  pointer_____offset_0x10___ local_3c8;
  pointer_____offset_0x10___ puStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  locale local_388 [8];
  undefined4 local_380;
  long *local_378;
  ulong local_370;
  long local_368 [2];
  code *local_358 [27];
  undefined8 local_280;
  undefined2 local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  code *local_248 [2];
  code *local_238 [2];
  uint auStack_228 [10];
  locale local_200 [48];
  __basic_file<char> local_1d0 [136];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar5 = PTR_vtable_0010b9e0;
  puVar4 = PTR_vtable_0010b9d0;
  local_3b8._14_2_ = SUB82(local_3b8._0_8_,6);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_60 = (undefined1  [16])0x0;
  local_68 = 0;
  local_50 = (undefined1  [16])0x0;
  local_248[0] = _vtable;
  local_148[0] = std::ios::init;
  local_70 = 0;
  *(undefined8 *)((long)local_248 + *(long *)(_vtable + -0x18)) = _filebuf;
  local_248[1] = (code *)0x0;
  std::ios::init((streambuf *)((istream *)local_248 + *(long *)(_vtable + -0x18)));
  local_248[0] = std::ios::clear;
  local_148[0] = Json::Value::isObject;
  std::filebuf::filebuf((filebuf *)local_238);
  std::ios::init((streambuf *)local_148);
  lVar8 = std::filebuf::open((filebuf *)local_238,*(undefined8 *)param_1,8);
  if (lVar8 == 0) {
    std::ios::clear((istream *)local_248 + *(long *)(local_248[0] + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248[0] + -0x18)) | 4);
  }
  else {
    std::ios::clear((istream *)local_248 + *(long *)(local_248[0] + -0x18),0);
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)param_1;
  local_468 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_478 = (undefined1  [16])0x0;
  local_408 = &local_3f8;
  std::__cxx11::string::reserve((ulong)&local_408);
  if ((0x3fffffffffffffffU - local_400 < 0x38) ||
     (std::__cxx11::string::_M_append((char *)&local_408,0x10a1c0),
     0x3fffffffffffffffU - local_400 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::string::_M_append((char *)&local_408,uVar2);
  local_3e0 = 0;
  local_3d8 = 0;
  local_3e8 = (undefined8 *)&local_3d8;
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  puStack_3c0 = (pointer_____offset_0x10___)0xd;
  local_3b8._5_8_ = 0x726564616f4c2d52;
  local_3b8._0_5_ = 0x586e65704f;
  local_3b8[0xd] = 0;
  local_3c8 = local_3b8;
  LoaderLogger::LogMessage
            (0x10b680,0x10,(string *)0x1,(string *)&local_3c8,(string *)&local_3e8,
             (vector *)&local_408);
  if (local_3c8 != local_3b8) {
    operator_delete(local_3c8,local_3b8._0_8_ + 1);
  }
  if (local_3e8 != (undefined8 *)&local_3d8) {
    operator_delete(local_3e8,CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,local_3d8)) + 1);
  }
  if (local_408 != &local_3f8) {
    operator_delete(local_408,CONCAT71(uStack_3f7,local_3f8) + 1);
  }
  uVar3 = local_478._8_8_;
  pvVar11 = (void *)local_478._0_8_;
  if (local_478._8_8_ != local_478._0_8_) {
    do {
      if (*(void **)((long)pvVar11 + 0x10) != (void *)((long)pvVar11 + 0x20)) {
        operator_delete(*(void **)((long)pvVar11 + 0x10),*(long *)((long)pvVar11 + 0x20) + 1);
      }
      pvVar11 = (void *)((long)pvVar11 + 0x30);
    } while ((void *)uVar3 != pvVar11);
  }
  if ((void *)local_478._0_8_ != (void *)0x0) {
    operator_delete((void *)local_478._0_8_,local_468 - local_478._0_8_);
  }
  local_478._0_8_ = 0x23;
  local_3e8 = (undefined8 *)&local_3d8;
  local_3e8 = (undefined8 *)std::__cxx11::string::_M_create((ulong *)&local_3e8,(ulong)local_478);
  uVar3 = _UNK_0010b898;
  local_3d8 = (undefined1)local_478._0_8_;
  uStack_3d7 = SUB84(local_478._0_8_,1);
  uStack_3d3 = SUB83(local_478._0_8_,5);
  *local_3e8 = __LC52;
  local_3e8[1] = uVar3;
  uVar3 = _UNK_0010b8a8;
  local_3e8[2] = __LC53;
  local_3e8[3] = uVar3;
  *(undefined4 *)((long)local_3e8 + 0x1f) = 0x2064696c;
  local_3e0 = local_478._0_8_;
  *(undefined1 *)((long)local_3e8 + local_478._0_8_) = 0;
  std::ios_base::ios_base((ios_base *)local_358);
  local_278 = 0;
  local_270 = (undefined1  [16])0x0;
  local_260 = (undefined1  [16])0x0;
  local_3c8 = _init;
  psVar10 = (streambuf *)((ostream *)&local_3c8 + *(long *)(_init + -0x18));
  local_358[0] = std::ios::init;
  local_280 = 0;
  *(undefined8 *)psVar10 = _locale;
  std::ios::init(psVar10);
  local_358[0] = (code *)&std::streambuf::vtable;
  local_3c8 = &std::__cxx11::ostringstream::VTT;
  puStack_3c0 = puVar4;
  local_3b8 = (undefined1  [16])0x0;
  local_3a8 = (undefined1  [16])0x0;
  local_398 = (undefined1  [16])0x0;
  std::locale::locale(local_388);
  uVar1 = local_3e0;
  __src = local_3e8;
  local_380 = 0;
  puStack_3c0 = std::ios_base::ios_base;
  local_378 = local_368;
  if ((local_3e8 == (undefined8 *)0x0) && (local_3e0 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  local_478._0_8_ = local_3e0;
  if (local_3e0 < 0x10) {
    local_370 = local_3e0;
    if (local_3e0 == 1) {
      local_368[0] = CONCAT71(local_368[0]._1_7_,*(undefined1 *)local_3e8);
      goto LAB_001053d5;
    }
    if (local_3e0 == 0) goto LAB_001053d5;
  }
  else {
    local_378 = (long *)std::__cxx11::string::_M_create((ulong *)&local_378,(ulong)local_478);
    local_368[0] = local_478._0_8_;
  }
  memcpy(local_378,__src,uVar1);
  local_370 = local_478._0_8_;
LAB_001053d5:
  *(undefined1 *)((long)local_378 + local_370) = 0;
  local_380 = 0x10;
  std::__cxx11::stringbuf::_M_sync((char *)&puStack_3c0,(ulong)local_378,0);
  std::ios::init((streambuf *)local_358);
  if (local_3e8 != (undefined8 *)&local_3d8) {
    operator_delete(local_3e8,CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,local_3d8)) + 1);
  }
  cVar6 = std::__basic_file<char>::is_open();
  if (cVar6 == '\0') {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_3c8,"failed to open ",0xf);
    poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_3c8,*(char **)param_1,*(long *)(param_1 + 8));
    std::__ostream_insert<char,std::char_traits<char>>(poVar9,".  Does it exist?",0x11);
    local_468 = 0;
    local_420 = 0;
    local_418 = 0;
    local_478 = (undefined1  [16])0x0;
    local_428 = &local_418;
    if (local_398._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_428);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_428,0,(char *)0x0,local_3a8._8_8_);
    }
    local_3f8 = 0;
    local_400 = 0;
    local_408 = &local_3f8;
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    local_3d8 = 0x4f;
    uStack_3d7 = 0x586e6570;
    uStack_3d3 = 0x4c2d52;
    uStack_3d0 = 0x726564616f;
    local_3e0 = 0xd;
    local_3cb = 0;
    local_3e8 = (undefined8 *)&local_3d8;
    LoaderLogger::LogMessage
              (0x10b680,0x1000,(string *)0x1,(string *)&local_3e8,(string *)&local_408,
               (vector *)&local_428);
    if (local_3e8 != (undefined8 *)&local_3d8) {
      operator_delete(local_3e8,CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,local_3d8)) + 1);
    }
    if (local_408 != &local_3f8) {
      operator_delete(local_408,CONCAT71(uStack_3f7,local_3f8) + 1);
    }
    if (local_428 != &local_418) {
      operator_delete(local_428,CONCAT71(uStack_417,local_418) + 1);
    }
    uVar3 = local_478._8_8_;
    pvVar11 = (void *)local_478._0_8_;
    if (local_478._8_8_ != local_478._0_8_) {
      do {
        if (*(void **)((long)pvVar11 + 0x10) != (void *)((long)pvVar11 + 0x20)) {
          operator_delete(*(void **)((long)pvVar11 + 0x10),*(long *)((long)pvVar11 + 0x20) + 1);
        }
        pvVar11 = (void *)((long)pvVar11 + 0x30);
      } while ((void *)uVar3 != pvVar11);
    }
    if ((void *)local_478._0_8_ != (void *)0x0) {
      operator_delete((void *)local_478._0_8_,local_468 - local_478._0_8_);
    }
  }
  else {
    Json::CharReaderBuilder::CharReaderBuilder((CharReaderBuilder *)local_478);
    local_440 = 0;
    local_438 = '\0';
    local_448 = &local_438;
    Json::Value::Value(local_4a8,0);
    cVar6 = Json::parseFromStream
                      ((Factory *)local_478,(istream *)local_248,local_4a8,(string *)&local_448);
    if ((cVar6 == '\0') || (cVar6 = Json::Value::isObject(), cVar6 == '\0')) {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_3c8,"failed to parse ",0x10);
      poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_3c8,*(char **)param_1,*(long *)(param_1 + 8));
      std::__ostream_insert<char,std::char_traits<char>>(poVar9,".",1);
      if (local_440 != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_3c8," (Error message: ",0x11);
        poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                           ((ostream *)&local_3c8,local_448,local_440);
        std::__ostream_insert<char,std::char_traits<char>>(poVar9,")",1);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_3c8," Is it a valid runtime manifest file?",0x25);
      local_420 = 0;
      local_418 = 0;
      local_428 = &local_418;
      if (local_398._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_428);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_428,0,(char *)0x0,local_3a8._8_8_);
      }
      local_3f8 = 0;
      local_400 = 0;
      local_408 = &local_3f8;
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      local_3d8 = 0x4f;
      uStack_3d7 = 0x586e6570;
      uStack_3d3 = 0x4c2d52;
      uStack_3d0 = 0x726564616f;
      local_3e0 = 0xd;
      local_3cb = 0;
      local_3e8 = (undefined8 *)&local_3d8;
      LoaderLogger::LogMessage
                (0x10b680,0x1000,(string *)0x1,(string *)&local_3e8,(string *)&local_408,
                 (vector *)&local_428);
      if (local_3e8 != (undefined8 *)&local_3d8) {
        operator_delete(local_3e8,CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,local_3d8)) + 1);
      }
      if (local_408 != &local_3f8) {
        operator_delete(local_408,CONCAT71(uStack_3f7,local_3f8) + 1);
      }
      if (local_428 != &local_418) {
        operator_delete(local_428,CONCAT71(uStack_417,local_418) + 1);
      }
      Json::Value::~Value(local_4a8);
      if (local_448 != &local_438) {
        operator_delete(local_448,CONCAT71(uStack_437,local_438) + 1);
      }
      Json::CharReaderBuilder::~CharReaderBuilder((CharReaderBuilder *)local_478);
    }
    else {
      CreateIfValid(local_4a8,param_1,param_2);
      Json::Value::~Value(local_4a8);
      if (local_448 != &local_438) {
        operator_delete(local_448,CONCAT71(uStack_437,local_438) + 1);
      }
      Json::CharReaderBuilder::~CharReaderBuilder((CharReaderBuilder *)local_478);
    }
  }
  local_358[0] = (code *)&std::streambuf::vtable;
  local_3c8 = &std::__cxx11::ostringstream::VTT;
  if (local_378 != local_368) {
    puStack_3c0 = puVar5;
    local_3c8 = &std::__cxx11::ostringstream::VTT;
    local_358[0] = (code *)&std::streambuf::vtable;
    operator_delete(local_378,local_368[0] + 1);
  }
  puStack_3c0 = std::ios_base::~ios_base;
  std::locale::~locale(local_388);
  local_3c8 = _init;
  *(undefined8 *)((long)&local_3c8 + *(long *)(_init + -0x18)) = _locale;
  local_358[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_358);
  local_248[0] = std::ios::clear;
  local_148[0] = Json::Value::isObject;
  local_238[0] = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_238[0] = std::ios_base::~ios_base;
  std::locale::~locale(local_200);
  local_248[0] = _vtable;
  *(undefined8 *)((long)local_248 + *(long *)(_vtable + -0x18)) = _filebuf;
  local_248[1] = (code *)0x0;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RuntimeManifestFile::FindManifestFiles(std::__cxx11::string const&,
   std::vector<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> >,
   std::allocator<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> > >
   >&) */

undefined8 RuntimeManifestFile::FindManifestFiles(string *param_1,vector *param_2)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  istream *piVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  char **ppcVar10;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  char **ppcVar14;
  long in_FS_OFFSET;
  char *local_290;
  undefined1 local_288 [16];
  long local_278;
  long *local_268;
  ulong local_260;
  long local_258 [2];
  undefined1 *local_248;
  long local_240;
  undefined1 local_238;
  undefined7 uStack_237;
  long *local_228;
  long local_220;
  long local_218 [2];
  char **local_208;
  char *local_200;
  char *apcStack_1f8 [2];
  char **local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined1 local_1d0;
  char **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined5 local_1b0;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  locale local_180 [8];
  undefined4 local_178;
  long *local_170 [2];
  long local_160 [2];
  code *local_150 [27];
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  ulong uVar9;
  
  local_288._8_8_ = local_288._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PlatformUtilsGetSecureEnv((char *)&local_268);
  uVar6 = local_260;
  plVar2 = local_268;
  if (local_260 == 0) {
    local_288._0_8_ = 0x3d;
    local_228 = local_218;
    local_228 = (long *)std::__cxx11::string::_M_create((ulong *)&local_228,(ulong)local_288);
    lVar12 = _UNK_0010b8b8;
    local_218[0] = local_288._0_8_;
    *local_228 = __LC72;
    local_228[1] = lVar12;
    lVar12 = _UNK_0010b8c8;
    local_228[2] = __LC73;
    local_228[3] = lVar12;
    lVar12 = _UNK_0010b8d8;
    local_228[4] = __LC74;
    local_228[5] = lVar12;
    uVar13 = _UNK_0010b8e8;
    *(undefined8 *)((long)local_228 + 0x2d) = __LC75;
    *(undefined8 *)((long)local_228 + 0x35) = uVar13;
    local_220 = local_288._0_8_;
    *(undefined1 *)((long)local_228 + local_288._0_8_) = 0;
    PlatformUtilsGetSecureEnv((char *)&local_208);
    if (local_200 == (char *)0x0) {
      PlatformUtilsGetSecureEnv((char *)&local_1c8);
      ppcVar14 = local_208;
      if (local_1c8 == (char **)&uStack_1b8) {
        if (local_1c0 != (char *)0x0) {
          if (local_1c0 == (char *)0x1) {
            *(undefined1 *)local_208 = (undefined1)uStack_1b8;
          }
          else {
            uVar7 = (uint)local_1c0;
            uVar6 = (ulong)local_1c0 & 0xffffffff;
            if (uVar7 < 8) {
              if (((ulong)local_1c0 & 4) == 0) {
                if ((uVar7 != 0) &&
                   (*(undefined1 *)local_208 = (undefined1)uStack_1b8, ((ulong)local_1c0 & 2) != 0))
                {
                  *(undefined2 *)((long)local_208 + (uVar6 - 2)) =
                       *(undefined2 *)((long)&local_1c0 + uVar6 + 6);
                }
              }
              else {
                *(undefined4 *)local_208 = (undefined4)uStack_1b8;
                *(undefined4 *)((long)local_208 + (uVar6 - 4)) =
                     *(undefined4 *)((long)&local_1c0 + uVar6 + 4);
              }
            }
            else {
              *local_208 = (char *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
              *(undefined8 *)((long)local_208 + (((ulong)local_1c0 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&local_1c0 + ((ulong)local_1c0 & 0xffffffff));
              lVar12 = (long)local_208 - ((ulong)(local_208 + 1) & 0xfffffffffffffff8);
              uVar7 = (int)lVar12 + uVar7 & 0xfffffff8;
              if (7 < uVar7) {
                uVar6 = 0;
                do {
                  uVar8 = (int)uVar6 + 8;
                  *(undefined8 *)(((ulong)(local_208 + 1) & 0xfffffffffffffff8) + uVar6) =
                       *(undefined8 *)((long)&uStack_1b8 + (uVar6 - lVar12));
                  uVar6 = (ulong)uVar8;
                } while (uVar8 < uVar7);
              }
            }
          }
        }
        *(char *)((long)local_208 + (long)local_1c0) = '\0';
      }
      else {
        pcVar1 = (char *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
        if ((local_208 == apcStack_1f8) || (local_208 = local_1c8, ppcVar14 == (char **)0x0)) {
          local_208 = local_1c8;
          apcStack_1f8[0] = pcVar1;
          local_1c8 = (char **)&uStack_1b8;
        }
        else {
          local_1c8 = ppcVar14;
          uStack_1b8._0_4_ = SUB84(apcStack_1f8[0],0);
          uStack_1b8._4_4_ = (undefined4)((ulong)apcStack_1f8[0] >> 0x20);
          apcStack_1f8[0] = pcVar1;
        }
      }
      local_200 = local_1c0;
      local_1c0 = (char *)0x0;
      *(undefined1 *)local_1c8 = 0;
      if (local_1c8 != (char **)&uStack_1b8) {
        operator_delete(local_1c8,CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) + 1);
      }
      if (local_200 != (char *)0x0) {
        if ((local_200 == (char *)0x3fffffffffffffff) ||
           (std::__cxx11::string::_M_append((char *)&local_208,0x10a48e),
           0x3fffffffffffffffU - (long)local_200 < 7)) goto LAB_00106bfa;
        std::__cxx11::string::_M_append((char *)&local_208,0x10a490);
        if (local_200 != (char *)0x0) goto LAB_00106072;
      }
LAB_001060ed:
      PlatformUtilsGetSecureEnv((char *)&local_1c8);
      local_1e0 = local_1c0;
      local_1e8 = &local_1d8;
      if (local_1c0 == (char *)0x0) {
        local_1d0 = 0;
        local_1d8 = (char *)0x6764782f6374652f;
        local_1e0 = (char *)0x8;
        if (local_1c8 != (char **)&uStack_1b8) {
          operator_delete(local_1c8,CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) + 1);
        }
      }
      else {
        if (local_1c8 == (char **)&uStack_1b8) {
          pcVar1 = local_1c0 + 1;
          ppcVar10 = (char **)&uStack_1b8;
          ppcVar14 = &local_1d8;
          if (7 < (uint)pcVar1) {
            uVar6 = 0;
            do {
              uVar7 = (int)uVar6 + 8;
              uVar9 = (ulong)uVar7;
              *(undefined8 *)((long)&local_1d8 + uVar6) = *(undefined8 *)((long)&uStack_1b8 + uVar6)
              ;
              uVar6 = uVar9;
            } while (uVar7 < ((uint)pcVar1 & 0xfffffff8));
            ppcVar14 = (char **)((long)&local_1d8 + uVar9);
            ppcVar10 = (char **)((long)&uStack_1b8 + uVar9);
          }
          lVar12 = 0;
          if (((ulong)pcVar1 & 4) != 0) {
            *(undefined4 *)ppcVar14 = *(undefined4 *)ppcVar10;
            lVar12 = 4;
          }
          if (((ulong)pcVar1 & 2) != 0) {
            *(undefined2 *)((long)ppcVar14 + lVar12) = *(undefined2 *)((long)ppcVar10 + lVar12);
            lVar12 = lVar12 + 2;
          }
          if (((ulong)pcVar1 & 1) != 0) {
            *(undefined1 *)((long)ppcVar14 + lVar12) = *(undefined1 *)((long)ppcVar10 + lVar12);
          }
        }
        else {
          local_1e8 = local_1c8;
          local_1d8 = (char *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
        }
      }
      std::ios_base::ios_base((ios_base *)local_150);
      local_150[0] = std::ios::init;
      local_70 = 0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_1c8 = _vtable;
      local_78 = 0;
      *(undefined8 *)((long)&local_1c8 + (long)_vtable[-3]) =
           _getline<char,std::char_traits<char>,std::allocator<char>>;
      local_1c0 = (char *)0x0;
      std::ios::init((streambuf *)((istream *)&local_1c8 + (long)_vtable[-3]));
      local_1b0 = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      local_1c8 = (char **)std::__cxx11::string::_M_dispose;
      local_150[0] = getuid;
      uStack_1b8._0_4_ = 0x10d108;
      uStack_1b8._4_4_ = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      std::locale::locale(local_180);
      local_178 = 0;
      uStack_1b8._0_4_ = 0x10d0c0;
      uStack_1b8._4_4_ = 0;
      local_170[0] = local_160;
      if ((local_1e8 == (char **)0x0) && (local_1e0 != (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__throw_logic_error("basic_string: construction from null is not valid");
      }
      std::__cxx11::string::_M_construct<char_const*>
                (local_170,local_1e8,local_1e0 + (long)local_1e8);
      local_178 = 8;
      std::__cxx11::stringbuf::_M_sync((char *)&uStack_1b8,(ulong)local_170[0],0);
      std::ios::init((streambuf *)local_150);
      if (local_1e8 != &local_1d8) {
        operator_delete(local_1e8,(ulong)(local_1d8 + 1));
      }
      local_1e0 = (char *)0x0;
      local_1d8 = (char *)((ulong)local_1d8 & 0xffffffffffffff00);
      local_1e8 = &local_1d8;
      do {
        do {
          piVar5 = std::getline<char,std::char_traits<char>,std::allocator<char>>
                             ((istream *)&local_1c8,(string *)&local_1e8,':');
          pcVar1 = apcStack_1f8[0];
          ppcVar14 = local_208;
          if (((byte)piVar5[*(long *)(*(long *)piVar5 + -0x18) + 0x20] & 5) != 0) {
            std::__cxx11::string::_M_replace((ulong)&local_208,0,local_200,0x10a4cc);
            if ((local_200 == (char *)0x3fffffffffffffff) ||
               (std::__cxx11::string::_M_append((char *)&local_208,0x10a48e),
               0x3fffffffffffffffU - (long)local_200 < 7)) goto LAB_00106bfa;
            std::__cxx11::string::_M_append((char *)&local_208,0x10a498);
            cVar3 = FindEitherActiveRuntimeFilename
                              ("compiled-in SYSCONFDIR",(string *)&local_208,1,(string *)&local_268)
            ;
            if (cVar3 == '\0') {
              local_260 = 0;
              *(undefined1 *)local_268 = 0;
              cVar3 = '\0';
              goto LAB_001064a6;
            }
            goto LAB_001064a0;
          }
        } while (local_1e0 == (char *)0x0);
        if (local_1e8 == &local_1d8) {
          if (local_1e0 == (char *)0x1) {
            *(undefined1 *)local_208 = local_1d8._0_1_;
          }
          else {
            memcpy(local_208,&local_1d8,(size_t)local_1e0);
          }
          local_200 = local_1e0;
          *(char *)((long)local_208 + (long)local_1e0) = '\0';
        }
        else {
          if (local_208 != apcStack_1f8) {
            local_208 = local_1e8;
            local_200 = local_1e0;
            apcStack_1f8[0] = local_1d8;
            if (ppcVar14 != (char **)0x0) {
              local_1e8 = ppcVar14;
              local_1d8 = pcVar1;
              goto LAB_00106427;
            }
          }
          apcStack_1f8[0] = local_1d8;
          local_200 = local_1e0;
          local_208 = local_1e8;
          local_1e8 = &local_1d8;
        }
LAB_00106427:
        local_1e0 = (char *)0x0;
        *(undefined1 *)local_1e8 = 0;
        if ((local_200 == (char *)0x3fffffffffffffff) ||
           (std::__cxx11::string::_M_append((char *)&local_208,0x10a48e),
           0x3fffffffffffffffU - (long)local_200 < 7)) goto LAB_00106bfa;
        std::__cxx11::string::_M_append((char *)&local_208,0x10a498);
        cVar3 = FindEitherActiveRuntimeFilename
                          ("an entry of XDG_CONFIG_DIRS",(string *)&local_208,1,(string *)&local_268
                          );
      } while (cVar3 == '\0');
LAB_001064a0:
      cVar3 = '\x01';
LAB_001064a6:
      if (local_1e8 != &local_1d8) {
        operator_delete(local_1e8,(ulong)(local_1d8 + 1));
      }
      local_1c8 = (char **)std::__cxx11::string::_M_dispose;
      local_150[0] = getuid;
      uStack_1b8._0_4_ = 0x10d0c0;
      uStack_1b8._4_4_ = 0;
      if (local_170[0] != local_160) {
        operator_delete(local_170[0],local_160[0] + 1);
      }
      uStack_1b8._0_4_ = 0x10d108;
      uStack_1b8._4_4_ = 0;
      std::locale::~locale(local_180);
      local_1c8 = _vtable;
      *(undefined8 *)((long)&local_1c8 + (long)_vtable[-3]) =
           _getline<char,std::char_traits<char>,std::allocator<char>>;
      local_150[0] = std::ios::init;
      local_1c0 = (char *)0x0;
      std::ios_base::~ios_base((ios_base *)local_150);
      if (local_208 != apcStack_1f8) goto LAB_00106586;
    }
    else {
LAB_00106072:
      if ((local_200 == (char *)0x3fffffffffffffff) ||
         (std::__cxx11::string::_M_append((char *)&local_208,0x10a48e),
         0x3fffffffffffffffU - (long)local_200 < 7)) {
LAB_00106bfa:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)&local_208,0x10a498);
      cVar3 = FindEitherActiveRuntimeFilename
                        ("XDG_CONFIG_HOME",(string *)&local_208,1,(string *)&local_268);
      if (cVar3 == '\0') goto LAB_001060ed;
      if (local_208 == apcStack_1f8) {
        if (local_228 != local_218) {
          operator_delete(local_228,local_218[0] + 1);
        }
        goto LAB_00105f4d;
      }
LAB_00106586:
      operator_delete(local_208,(ulong)(apcStack_1f8[0] + 1));
    }
    if (local_228 != local_218) {
      operator_delete(local_228,local_218[0] + 1);
    }
    if (cVar3 == '\0') {
      local_278 = 0;
      local_288 = (undefined1  [16])0x0;
      local_290 = (char *)0x6a;
      local_1e8 = &local_1d8;
      local_1e8 = (char **)std::__cxx11::string::_M_create((ulong *)&local_1e8,(ulong)&local_290);
      pcVar1 = _UNK_0010b898;
      local_1d8 = local_290;
      *local_1e8 = __LC52;
      local_1e8[1] = pcVar1;
      pcVar1 = _UNK_0010b8f8;
      local_1e8[2] = __LC76;
      local_1e8[3] = pcVar1;
      pcVar1 = _UNK_0010b908;
      local_1e8[4] = __LC77;
      local_1e8[5] = pcVar1;
      pcVar1 = _UNK_0010b918;
      local_1e8[6] = __LC78;
      local_1e8[7] = pcVar1;
      pcVar1 = _UNK_0010b928;
      local_1e8[8] = __LC79;
      local_1e8[9] = pcVar1;
      pcVar1 = _UNK_0010b938;
      local_1e8[10] = __LC80;
      local_1e8[0xb] = pcVar1;
      uVar13 = _UNK_0010b948;
      *(undefined8 *)((long)local_1e8 + 0x5a) = __LC81;
      *(undefined8 *)((long)local_1e8 + 0x62) = uVar13;
      local_1e0 = local_290;
      *(char *)((long)local_1e8 + (long)local_290) = '\0';
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar4 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar4 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      local_1c0 = (char *)0xd;
      uStack_1b8._0_4_ = 0x6e65704f;
      uStack_1b8._4_4_ = 0x4c2d5258;
      local_1b0 = 0x726564616f;
      uStack_1ab = 0;
      local_1c8 = (char **)&uStack_1b8;
      LoaderLogger::LogMessage
                (0x10b680,0x1000,(string *)0x1,(string *)&local_1c8,param_1,(vector *)&local_1e8);
      if (local_1c8 != (char **)&uStack_1b8) {
        operator_delete(local_1c8,CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) + 1);
      }
      if (local_1e8 != &local_1d8) {
        operator_delete(local_1e8,(ulong)(local_1d8 + 1));
      }
      uVar13 = local_288._8_8_;
      for (lVar12 = local_288._0_8_; uVar13 != lVar12; lVar12 = lVar12 + 0x30) {
        if (*(void **)(lVar12 + 0x10) != (void *)(lVar12 + 0x20)) {
          operator_delete(*(void **)(lVar12 + 0x10),*(long *)(lVar12 + 0x20) + 1);
        }
      }
      if ((void *)local_288._0_8_ != (void *)0x0) {
        operator_delete((void *)local_288._0_8_,local_278 - local_288._0_8_);
      }
      uVar13 = 0xffffffcd;
      goto LAB_00105f5b;
    }
  }
  else {
    local_278 = 0;
    local_240 = 0;
    local_238 = 0;
    local_288 = (undefined1  [16])0x0;
    local_248 = &local_238;
    std::__cxx11::string::reserve((ulong)&local_248);
    if ((0x3fffffffffffffffU - local_240 < 0x5a) ||
       (std::__cxx11::string::_M_append((char *)&local_248,0x10a228),
       0x3fffffffffffffffU - local_240 < uVar6)) goto LAB_00106bfa;
    std::__cxx11::string::_M_append((char *)&local_248,(ulong)plVar2);
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar4 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar4 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    local_1c0 = (char *)0xd;
    uStack_1b8._0_4_ = 0x6e65704f;
    uStack_1b8._4_4_ = 0x4c2d5258;
    local_1b0 = 0x726564616f;
    uStack_1ab = 0;
    local_1c8 = (char **)&uStack_1b8;
    LoaderLogger::LogMessage
              (0x10b680,0x10,(string *)0x1,(string *)&local_1c8,param_1,(vector *)&local_248);
    if (local_1c8 != (char **)&uStack_1b8) {
      operator_delete(local_1c8,CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) + 1);
    }
    if (local_248 != &local_238) {
      operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
    }
    uVar13 = local_288._8_8_;
    pvVar11 = (void *)local_288._0_8_;
    if (local_288._8_8_ != local_288._0_8_) {
      do {
        if (*(void **)((long)pvVar11 + 0x10) != (void *)((long)pvVar11 + 0x20)) {
          operator_delete(*(void **)((long)pvVar11 + 0x10),*(long *)((long)pvVar11 + 0x20) + 1);
        }
        pvVar11 = (void *)((long)pvVar11 + 0x30);
      } while ((void *)uVar13 != pvVar11);
    }
    if ((void *)local_288._0_8_ != (void *)0x0) {
      operator_delete((void *)local_288._0_8_,local_278 - local_288._0_8_);
    }
  }
LAB_00105f4d:
  uVar13 = 0;
  CreateIfValid((string *)&local_268,param_2);
LAB_00105f5b:
  if (local_268 != local_258) {
    operator_delete(local_268,local_258[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApiLayerManifestFile::CreateIfValid(ManifestFileType, std::__cxx11::string const&, std::istream&,
   bool (*)(std::__cxx11::string const&, std::__cxx11::string const&, std::__cxx11::string&),
   std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >&) */

void ApiLayerManifestFile::CreateIfValid
               (int param_1,undefined8 *param_2,istream *param_3,code *param_4,
               vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
               *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  pointer_____offset_0x10___ puVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  Value *pVVar8;
  ostream *poVar9;
  long lVar10;
  ApiLayerManifestFile *pAVar11;
  char *pcVar12;
  ulong uVar13;
  allocator *extraout_RDX;
  allocator *extraout_RDX_00;
  allocator *extraout_RDX_01;
  allocator *extraout_RDX_02;
  allocator *extraout_RDX_03;
  void *pvVar14;
  ulong *puVar15;
  streambuf *psVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  byte bVar18;
  undefined4 local_364;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_354;
  undefined4 local_34c;
  undefined1 local_348 [16];
  long local_338;
  Value local_328 [48];
  undefined1 local_2f8 [16];
  long local_2e8;
  ulong local_2c8 [6];
  char *local_298;
  long local_290;
  char local_288;
  undefined7 uStack_287;
  undefined1 local_278 [32];
  undefined8 local_258;
  char *local_238;
  long local_230;
  char *local_218;
  long local_210;
  char local_208;
  undefined7 uStack_207;
  ulong *local_1f8;
  ulong local_1f0;
  ulong auStack_1e8 [2];
  ulong *local_1d8;
  ulong local_1d0;
  char cStack_1c8;
  undefined4 uStack_1c7;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 local_1bb;
  pointer_____offset_0x10___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  ulong *local_168;
  ulong local_160;
  ulong local_158 [2];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar3 = PTR_vtable_0010b9d0;
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c8[0] = 0x24;
  local_1d8 = (ulong *)&cStack_1c8;
  local_1d8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_1d8,(ulong)local_2c8);
  uVar13 = _UNK_0010b958;
  cStack_1c8 = (char)local_2c8[0];
  uStack_1c7 = (undefined4)(local_2c8[0] >> 8);
  uStack_1c3 = (undefined3)(local_2c8[0] >> 0x28);
  *local_1d8 = __LC98;
  local_1d8[1] = uVar13;
  uVar2 = _UNK_0010b968;
  uVar13 = __LC99;
  *(undefined4 *)(local_1d8 + 4) = 0x2064696c;
  local_1d8[2] = uVar13;
  local_1d8[3] = uVar2;
  local_1d0 = local_2c8[0];
  *(char *)((long)local_1d8 + local_2c8[0]) = '\0';
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = std::ios::init;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_68 = 0;
  local_1b8 = _init;
  local_70 = 0;
  psVar16 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar16 = _locale;
  std::ios::init(psVar16);
  local_148[0] = (code *)&std::streambuf::vtable;
  local_1b8 = &std::__cxx11::ostringstream::VTT;
  puStack_1b0 = puVar3;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  uVar13 = local_1d0;
  puVar15 = local_1d8;
  puStack_1b0 = std::ios_base::ios_base;
  local_170 = 0;
  local_168 = local_158;
  if ((local_1d8 == (ulong *)0x0) && (local_1d0 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  local_2c8[0] = local_1d0;
  if (local_1d0 < 0x10) {
    if (local_1d0 == 1) {
      local_158[0] = CONCAT71(local_158[0]._1_7_,(char)*local_1d8);
    }
    else if (local_1d0 != 0) goto LAB_00107615;
  }
  else {
    local_168 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_168,(ulong)local_2c8);
    local_158[0] = local_2c8[0];
LAB_00107615:
    memcpy(local_168,puVar15,uVar13);
  }
  *(undefined1 *)((long)local_168 + local_2c8[0]) = 0;
  local_170 = 0x10;
  local_160 = local_2c8[0];
  std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
  std::ios::init((streambuf *)local_148);
  if (local_1d8 != (ulong *)&cStack_1c8) {
    operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
  }
  Json::CharReaderBuilder::CharReaderBuilder((CharReaderBuilder *)local_2c8);
  local_290 = 0;
  local_288 = '\0';
  local_298 = &local_288;
  Json::Value::Value(local_328,0);
  cVar5 = Json::parseFromStream((Factory *)local_2c8,param_3,local_328,(string *)&local_298);
  if ((cVar5 == '\0') || (cVar5 = Json::Value::isObject(), cVar5 == '\0')) {
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_1b8,"failed to parse ",0x10);
    poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1b8,(char *)*param_2,param_2[1]);
    std::__ostream_insert<char,std::char_traits<char>>(poVar9,".",1);
    if (local_290 != 0) {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_1b8," (Error message: ",0x11);
      poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,local_298,local_290);
      std::__ostream_insert<char,std::char_traits<char>>(poVar9,")",1);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_1b8," Is it a valid layer manifest file?",0x23);
    local_2e8 = 0;
    local_210 = 0;
    local_208 = '\0';
    local_2f8 = (undefined1  [16])0x0;
    local_218 = &local_208;
    if (local_188._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_218);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
    }
    auStack_1e8[0] = auStack_1e8[0] & 0xffffffffffffff00;
    local_1f0 = 0;
    local_1f8 = auStack_1e8;
    if ((LoaderLogger::GetInstance()::instance == '\0') &&
       (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
      LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
    }
    cStack_1c8 = 'O';
    uStack_1c7 = 0x586e6570;
    uStack_1c3 = 0x4c2d52;
    uStack_1c0 = 0x726564616f;
    local_1d0 = 0xd;
    local_1bb = 0;
    local_1d8 = (ulong *)&cStack_1c8;
    LoaderLogger::LogMessage
              (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
               (vector *)&local_218);
    if (local_1d8 != (ulong *)&cStack_1c8) {
      operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
    }
    if (local_1f8 != auStack_1e8) {
      operator_delete(local_1f8,auStack_1e8[0] + 1);
    }
    if (local_218 != &local_208) {
      operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
    }
    uVar4 = local_2f8._8_8_;
    pvVar14 = (void *)local_2f8._0_8_;
    if (local_2f8._8_8_ != local_2f8._0_8_) {
      do {
        if (*(void **)((long)pvVar14 + 0x10) != (void *)((long)pvVar14 + 0x20)) {
          operator_delete(*(void **)((long)pvVar14 + 0x10),*(long *)((long)pvVar14 + 0x20) + 1);
        }
        pvVar14 = (void *)((long)pvVar14 + 0x30);
      } while ((void *)uVar4 != pvVar14);
LAB_001074d3:
    }
LAB_001074db:
    if ((void *)local_2f8._0_8_ != (void *)0x0) {
      operator_delete((void *)local_2f8._0_8_,local_2e8 - local_2f8._0_8_);
    }
  }
  else {
    local_360 = 0;
    local_358 = 0;
    cVar5 = ManifestFile::IsValidJson(local_328,(JsonVersion *)&local_360);
    if (cVar5 == '\0') {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_1b8,"isValidJson indicates ",0x16);
      poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,(char *)*param_2,param_2[1]);
      std::__ostream_insert<char,std::char_traits<char>>
                (poVar9," is not a valid manifest file.",0x1e);
      local_2e8 = 0;
      local_210 = 0;
      local_208 = '\0';
      local_2f8 = (undefined1  [16])0x0;
      local_218 = &local_208;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_218);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
      }
      auStack_1e8[0] = auStack_1e8[0] & 0xffffffffffffff00;
      local_1f0 = 0;
      local_1f8 = auStack_1e8;
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      cStack_1c8 = 'O';
      uStack_1c7 = 0x586e6570;
      uStack_1c3 = 0x4c2d52;
      uStack_1c0 = 0x726564616f;
      local_1d0 = 0xd;
      local_1bb = 0;
      local_1d8 = (ulong *)&cStack_1c8;
      LoaderLogger::LogMessage
                (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                 (vector *)&local_218);
      if (local_1d8 != (ulong *)&cStack_1c8) {
        operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
      }
      if (local_1f8 != auStack_1e8) {
        operator_delete(local_1f8,auStack_1e8[0] + 1);
      }
      if (local_218 != &local_208) {
        operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
      }
      uVar4 = local_2f8._8_8_;
      pvVar14 = (void *)local_2f8._0_8_;
      if (local_2f8._8_8_ != local_2f8._0_8_) {
        do {
          if (*(void **)((long)pvVar14 + 0x10) != (void *)((long)pvVar14 + 0x20)) {
            operator_delete(*(void **)((long)pvVar14 + 0x10),*(long *)((long)pvVar14 + 0x20) + 1);
          }
          pvVar14 = (void *)((long)pvVar14 + 0x30);
        } while ((void *)uVar4 != pvVar14);
        goto LAB_001074d3;
      }
      goto LAB_001074db;
    }
    pVVar8 = (Value *)Json::Value::operator[]((char *)local_328);
    Json::Value::Value((Value *)local_2f8,pVVar8);
    cVar5 = Json::Value::isNull();
    if (cVar5 == '\0') {
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isNull();
      if (cVar5 != '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isString();
      if (cVar5 == '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isNull();
      if (cVar5 != '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isString();
      if (cVar5 == '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isNull();
      if (cVar5 != '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isString();
      if (cVar5 == '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isNull();
      if (cVar5 != '\0') goto LAB_00107068;
      Json::Value::operator[]((char *)local_2f8);
      cVar5 = Json::Value::isString();
      if (cVar5 == '\0') goto LAB_00107068;
      if (param_1 == 2) {
        Json::Value::operator[]((char *)local_2f8);
        cVar5 = Json::Value::isNull();
        if (cVar5 == '\0') {
          Json::Value::operator[]((char *)local_2f8);
          cVar5 = Json::Value::isString();
          if (cVar5 == '\0') goto LAB_0010826a;
          Json::Value::operator[]((char *)local_2f8);
          cVar6 = Json::Value::isNull();
          if (cVar6 == '\0') {
            Json::Value::operator[]((char *)local_2f8);
            cVar6 = Json::Value::isString();
            if (cVar6 != '\0') {
              Json::Value::operator[]((char *)local_2f8);
              Json::Value::asString_abi_cxx11_();
              pcVar12 = getenv((char *)local_1d8);
              cVar5 = pcVar12 != (char *)0x0;
              std::__cxx11::string::_M_dispose();
            }
          }
          Json::Value::operator[]((char *)local_2f8);
          Json::Value::asString_abi_cxx11_();
          pcVar12 = getenv(local_238);
          if ((pcVar12 == (char *)0x0) && (cVar5 != '\0')) {
            std::__cxx11::string::_M_dispose();
            goto LAB_00107a5a;
          }
          poVar9 = std::operator<<((ostream *)&local_1b8,"Implicit layer ");
          poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                             (poVar9,(char *)*param_2,param_2[1]);
          std::operator<<(poVar9," is disabled");
          local_338 = 0;
          local_348 = (undefined1  [16])0x0;
          std::__cxx11::stringbuf::str();
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_1f8,"",extraout_RDX_00);
          if ((LoaderLogger::GetInstance()::instance == '\0') &&
             (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
          cStack_1c8 = 'O';
          uStack_1c7 = 0x586e6570;
          uStack_1c3 = 0x4c2d52;
          uStack_1c0 = 0x726564616f;
          local_1d0 = 0xd;
          local_1bb = 0;
          local_1d8 = (ulong *)&cStack_1c8;
          LoaderLogger::LogMessage
                    (0x10b680,0x10,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                     (vector *)&local_218);
          if (local_1d8 != (ulong *)&cStack_1c8) {
            operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
          }
          std::__cxx11::string::_M_dispose();
          std::__cxx11::string::_M_dispose();
          std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                    ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_348);
          std::__cxx11::string::_M_dispose();
        }
        else {
LAB_0010826a:
          poVar9 = std::operator<<((ostream *)&local_1b8,"Implicit layer ");
          poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                             (poVar9,(char *)*param_2,param_2[1]);
          std::operator<<(poVar9," is missing \"disable_environment\"");
          local_338 = 0;
          local_348 = (undefined1  [16])0x0;
          std::__cxx11::stringbuf::str();
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_1d8,"",extraout_RDX_01);
          LoaderLogger::LogErrorMessage
                    ((string *)&local_1d8,(string *)&local_1f8,(vector *)local_348);
          std::__cxx11::string::_M_dispose();
          std::__cxx11::string::_M_dispose();
          std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                    ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_348);
        }
      }
      else {
LAB_00107a5a:
        Json::Value::operator[]((char *)local_2f8);
        Json::Value::asString_abi_cxx11_();
        Json::Value::operator[]((char *)local_2f8);
        Json::Value::asString_abi_cxx11_();
        local_354 = 0;
        local_34c = 0;
        iVar7 = __isoc23_sscanf(local_258,"%u.%u",&local_354,(long)&local_354 + 4);
        local_34c = 0;
        if (iVar7 == 2) {
          if ((int)local_354 != 0) {
            if ((int)local_354 == 1) goto LAB_00107b22;
            goto LAB_00107dde;
          }
          if (local_354._4_4_ == 0) goto LAB_00107dde;
LAB_00107b22:
          Json::Value::operator[]((char *)local_2f8);
          Json::Value::asString_abi_cxx11_();
          local_364 = __isoc23_strtol(local_1d8,0,10);
          std::__cxx11::string::_M_dispose();
          Json::Value::operator[]((char *)local_2f8);
          Json::Value::asString_abi_cxx11_();
          cVar5 = (char)(string *)&local_238;
          lVar10 = std::__cxx11::string::find(cVar5,0x5c);
          if ((lVar10 == -1) && (lVar10 = std::__cxx11::string::find(cVar5,0x2f), lVar10 == -1)) {
LAB_00107c1f:
            auStack_1e8[0] = auStack_1e8[0] & 0xffffffffffffff00;
            local_1f0 = 0;
            local_1f8 = auStack_1e8;
            Json::Value::operator[]((char *)local_2f8);
            cVar5 = Json::Value::isNull();
            if (cVar5 == '\0') {
              Json::Value::operator[]((char *)local_2f8);
              cVar5 = Json::Value::isString();
              if (cVar5 != '\0') {
                Json::Value::operator[]((char *)local_2f8);
                Json::Value::asString_abi_cxx11_();
                puVar15 = local_1f8;
                if (local_1d8 == (ulong *)&cStack_1c8) {
                  local_1f0 = local_1d0;
                  if (local_1d0 != 0) {
                    if (local_1d0 == 1) {
                      *(char *)local_1f8 = cStack_1c8;
                      local_1f0 = local_1d0;
                    }
                    else {
                      puVar15 = (ulong *)&cStack_1c8;
                      puVar17 = local_1f8;
                      for (uVar13 = local_1d0 & 0xffffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *(char *)puVar17 = (char)*puVar15;
                        puVar15 = (ulong *)((long)puVar15 + (ulong)bVar18 * -2 + 1);
                        puVar17 = (ulong *)((long)puVar17 + (ulong)bVar18 * -2 + 1);
                      }
                    }
                  }
                  *(char *)((long)local_1f8 + local_1f0) = '\0';
                }
                else {
                  uVar13 = CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8));
                  if (local_1f8 != auStack_1e8) {
                    local_1f8 = local_1d8;
                    local_1f0 = local_1d0;
                    if (puVar15 != (ulong *)0x0) {
                      local_1d8 = puVar15;
                      cStack_1c8 = (char)auStack_1e8[0];
                      uStack_1c7 = (undefined4)(auStack_1e8[0] >> 8);
                      uStack_1c3 = (undefined3)(auStack_1e8[0] >> 0x28);
                      auStack_1e8[0] = uVar13;
                      goto LAB_001083ea;
                    }
                  }
                  local_1f0 = local_1d0;
                  local_1f8 = local_1d8;
                  auStack_1e8[0] = uVar13;
                  local_1d8 = (ulong *)&cStack_1c8;
                }
LAB_001083ea:
                local_1d0 = 0;
                *(char *)local_1d8 = '\0';
                std::__cxx11::string::_M_dispose();
              }
            }
            pAVar11 = (ApiLayerManifestFile *)operator_new(0xf0);
            ApiLayerManifestFile(pAVar11,param_1,param_2,local_278,&local_1f8,&local_354,&local_364)
            ;
            local_348._0_8_ = pAVar11;
            puVar1 = *(undefined8 **)(param_5 + 8);
            if (puVar1 == *(undefined8 **)(param_5 + 0x10)) {
              std::
              vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
              ::_M_realloc_insert<ApiLayerManifestFile*>
                        (param_5,puVar1,local_348,(string *)&local_238);
            }
            else {
              *puVar1 = pAVar11;
              *(undefined8 **)(param_5 + 8) = puVar1 + 1;
            }
            ManifestFile::ParseCommon
                      (*(ManifestFile **)(*(long *)(param_5 + 8) + -8),(Value *)local_2f8);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            Json::Value::~Value((Value *)local_2f8);
            Json::Value::~Value(local_328);
            std::__cxx11::string::_M_dispose();
            Json::CharReaderBuilder::~CharReaderBuilder((CharReaderBuilder *)local_2c8);
            std::__cxx11::ostringstream::~ostringstream((ostringstream *)&local_1b8);
            goto LAB_001075b9;
          }
          cVar5 = FileSysUtilsIsAbsolutePath((string *)&local_238);
          if (cVar5 == '\0') {
            local_218 = &local_208;
            local_210 = 0;
            local_208 = '\0';
            cVar5 = (*param_4)(param_2,(string *)&local_238,&local_218);
            if (cVar5 != '\0') {
              std::__cxx11::string::_M_assign((string *)&local_238);
              std::__cxx11::string::_M_dispose();
              goto LAB_00107c1f;
            }
            poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                               ((ostream *)&local_1b8,(char *)*param_2,param_2[1]);
            poVar9 = std::operator<<(poVar9," library ");
            poVar9 = std::__ostream_insert<char,std::char_traits<char>>(poVar9,local_218,local_210);
            std::operator<<(poVar9," does not appear to exist");
            local_338 = 0;
            local_348 = (undefined1  [16])0x0;
            std::__cxx11::stringbuf::str();
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1d8,"",extraout_RDX_02);
            LoaderLogger::LogErrorMessage
                      ((string *)&local_1d8,(string *)&local_1f8,(vector *)local_348);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                      ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_348);
            std::__cxx11::string::_M_dispose();
          }
          else {
            cVar5 = FileSysUtilsPathExists((string *)&local_238);
            if (cVar5 != '\0') goto LAB_00107c1f;
            poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                               ((ostream *)&local_1b8,(char *)*param_2,param_2[1]);
            poVar9 = std::operator<<(poVar9," library ");
            poVar9 = std::__ostream_insert<char,std::char_traits<char>>(poVar9,local_238,local_230);
            std::operator<<(poVar9," does not appear to exist");
            local_338 = 0;
            local_348 = (undefined1  [16])0x0;
            std::__cxx11::stringbuf::str();
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1d8,"",extraout_RDX_03);
            LoaderLogger::LogErrorMessage
                      ((string *)&local_1d8,(string *)&local_1f8,(vector *)local_348);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                      ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_348);
          }
          std::__cxx11::string::_M_dispose();
        }
        else {
LAB_00107dde:
          poVar9 = std::operator<<((ostream *)&local_1b8,"layer ");
          poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                             (poVar9,(char *)*param_2,param_2[1]);
          std::operator<<(poVar9," has invalid API Version.  Skipping layer.");
          local_338 = 0;
          local_348 = (undefined1  [16])0x0;
          std::__cxx11::stringbuf::str();
          std::__cxx11::string::string<std::allocator<char>>((string *)&local_1f8,"",extraout_RDX);
          if ((LoaderLogger::GetInstance()::instance == '\0') &&
             (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
            LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,
                         &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
          }
          cStack_1c8 = 'O';
          uStack_1c7 = 0x586e6570;
          uStack_1c3 = 0x4c2d52;
          uStack_1c0 = 0x726564616f;
          local_1d0 = 0xd;
          local_1bb = 0;
          local_1d8 = (ulong *)&cStack_1c8;
          LoaderLogger::LogMessage
                    (0x10b680,0x100,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                     (vector *)&local_218);
          if (local_1d8 != (ulong *)&cStack_1c8) {
            operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
          }
          std::__cxx11::string::_M_dispose();
          std::__cxx11::string::_M_dispose();
          std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector
                    ((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *)local_348);
        }
        std::__cxx11::string::_M_dispose();
        std::__cxx11::string::_M_dispose();
      }
    }
    else {
LAB_00107068:
      poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,(char *)*param_2,param_2[1]);
      std::__ostream_insert<char,std::char_traits<char>>
                (poVar9," is missing required fields.  Verify all proper fields exist.",0x3d);
      local_338 = 0;
      local_210 = 0;
      local_208 = '\0';
      local_348 = (undefined1  [16])0x0;
      local_218 = &local_208;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_218);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_218,0,(char *)0x0,local_198._8_8_);
      }
      auStack_1e8[0] = auStack_1e8[0] & 0xffffffffffffff00;
      local_1f0 = 0;
      local_1f8 = auStack_1e8;
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar7 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar7 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      cStack_1c8 = 'O';
      uStack_1c7 = 0x586e6570;
      uStack_1c3 = 0x4c2d52;
      uStack_1c0 = 0x726564616f;
      local_1d0 = 0xd;
      local_1bb = 0;
      local_1d8 = (ulong *)&cStack_1c8;
      LoaderLogger::LogMessage
                (0x10b680,0x1000,(string *)0x1,(string *)&local_1d8,(string *)&local_1f8,
                 (vector *)&local_218);
      if (local_1d8 != (ulong *)&cStack_1c8) {
        operator_delete(local_1d8,CONCAT35(uStack_1c3,CONCAT41(uStack_1c7,cStack_1c8)) + 1);
      }
      if (local_1f8 != auStack_1e8) {
        operator_delete(local_1f8,auStack_1e8[0] + 1);
      }
      if (local_218 != &local_208) {
        operator_delete(local_218,CONCAT71(uStack_207,local_208) + 1);
      }
      uVar4 = local_348._8_8_;
      pvVar14 = (void *)local_348._0_8_;
      if (local_348._8_8_ != local_348._0_8_) {
        do {
          if (*(void **)((long)pvVar14 + 0x10) != (void *)((long)pvVar14 + 0x20)) {
            operator_delete(*(void **)((long)pvVar14 + 0x10),*(long *)((long)pvVar14 + 0x20) + 1);
          }
          pvVar14 = (void *)((long)pvVar14 + 0x30);
        } while ((void *)uVar4 != pvVar14);
      }
      if ((void *)local_348._0_8_ != (void *)0x0) {
        operator_delete((void *)local_348._0_8_,local_338 - local_348._0_8_);
      }
    }
    Json::Value::~Value((Value *)local_2f8);
  }
  Json::Value::~Value(local_328);
  if (local_298 != &local_288) {
    operator_delete(local_298,CONCAT71(uStack_287,local_288) + 1);
  }
  Json::CharReaderBuilder::~CharReaderBuilder((CharReaderBuilder *)local_2c8);
  local_148[0] = (code *)&std::streambuf::vtable;
  local_1b8 = &std::__cxx11::ostringstream::VTT;
  puStack_1b0 = std::ios_base::ios_base;
  if (local_168 != local_158) {
    operator_delete(local_168,local_158[0] + 1);
  }
  puStack_1b0 = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  local_1b8 = _init;
  *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
LAB_001075b9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApiLayerManifestFile::CreateIfValid(ManifestFileType, std::__cxx11::string const&,
   std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >&) */

void ApiLayerManifestFile::CreateIfValid(undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *__src;
  ulong __n;
  char cVar4;
  int iVar5;
  long lVar6;
  ostream *poVar7;
  void *pvVar8;
  streambuf *psVar9;
  long in_FS_OFFSET;
  undefined1 local_448 [16];
  long local_438;
  undefined1 *local_428;
  undefined8 local_420;
  undefined1 local_418;
  undefined7 uStack_417;
  undefined1 *local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  undefined8 *local_3e8;
  ulong local_3e0;
  undefined8 local_3d8;
  undefined5 uStack_3d0;
  undefined1 local_3cb;
  pointer_____offset_0x10___ local_3c8;
  pointer_____offset_0x10___ puStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  locale local_388 [8];
  undefined4 local_380;
  long *local_378;
  ulong local_370;
  long local_368 [2];
  code *local_358 [27];
  undefined8 local_280;
  undefined2 local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  code *local_248 [2];
  code *local_238 [2];
  uint auStack_228 [10];
  locale local_200 [48];
  __basic_file<char> local_1d0 [136];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar3 = _vtable;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_68 = 0;
  local_148[0] = std::ios::init;
  local_70 = 0;
  local_248[0] = _vtable;
  *(undefined8 *)((long)local_248 + *(long *)(_vtable + -0x18)) = _filebuf;
  local_248[1] = (code *)0x0;
  std::ios::init((streambuf *)(*(long *)(_vtable + -0x18) + (long)local_248));
  local_248[0] = std::ios::clear;
  local_148[0] = Json::Value::isObject;
  std::filebuf::filebuf((filebuf *)local_238);
  std::ios::init((streambuf *)local_148);
  lVar6 = std::filebuf::open((filebuf *)local_238,*param_2,8);
  if (lVar6 == 0) {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248[0] + -0x18)) | 4);
  }
  else {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),0);
  }
  cVar4 = std::__basic_file<char>::is_open();
  if (cVar4 != '\0') {
    CreateIfValid(param_1,param_2,local_248,LocateLibraryRelativeToJson,param_3);
    local_248[0] = std::ios::clear;
    local_148[0] = Json::Value::isObject;
    local_238[0] = std::__basic_file<char>::~__basic_file;
    std::filebuf::close();
    std::__basic_file<char>::~__basic_file(local_1d0);
    goto LAB_001087d2;
  }
  local_448._0_8_ = 0x24;
  local_3e8 = &local_3d8;
  local_3e8 = (undefined8 *)std::__cxx11::string::_M_create((ulong *)&local_3e8,(ulong)local_448);
  uVar1 = _UNK_0010b958;
  local_3d8._0_5_ = (undefined5)local_448._0_8_;
  local_3d8._5_3_ = SUB83(local_448._0_8_,5);
  *local_3e8 = __LC98;
  local_3e8[1] = uVar1;
  uVar2 = _UNK_0010b968;
  uVar1 = __LC99;
  *(undefined4 *)(local_3e8 + 4) = 0x2064696c;
  local_3e8[2] = uVar1;
  local_3e8[3] = uVar2;
  local_3e0 = local_448._0_8_;
  *(undefined1 *)((long)local_3e8 + local_448._0_8_) = 0;
  std::ios_base::ios_base((ios_base *)local_358);
  local_278 = 0;
  local_270 = (undefined1  [16])0x0;
  local_260 = (undefined1  [16])0x0;
  local_3c8 = _init;
  psVar9 = (streambuf *)((ostream *)&local_3c8 + *(long *)(_init + -0x18));
  local_358[0] = std::ios::init;
  local_280 = 0;
  *(undefined8 *)psVar9 = _locale;
  std::ios::init(psVar9);
  local_358[0] = (code *)&std::streambuf::vtable;
  local_3c8 = PTR_vtable_0010b9d8;
  puStack_3c0 = PTR_vtable_0010b9d0;
  local_3b8 = (undefined1  [16])0x0;
  local_3a8 = (undefined1  [16])0x0;
  local_398 = (undefined1  [16])0x0;
  std::locale::locale(local_388);
  __n = local_3e0;
  __src = local_3e8;
  local_380 = 0;
  puStack_3c0 = std::ios_base::ios_base;
  local_378 = local_368;
  if ((local_3e8 == (undefined8 *)0x0) && (local_3e0 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  local_448._0_8_ = local_3e0;
  if (local_3e0 < 0x10) {
    local_370 = local_3e0;
    if (local_3e0 == 1) {
      local_368[0] = CONCAT71(local_368[0]._1_7_,*(undefined1 *)local_3e8);
    }
    else if (local_3e0 != 0) goto LAB_00108e36;
  }
  else {
    local_378 = (long *)std::__cxx11::string::_M_create((ulong *)&local_378,(ulong)local_448);
    local_368[0] = local_448._0_8_;
LAB_00108e36:
    memcpy(local_378,__src,__n);
    local_370 = local_448._0_8_;
  }
  *(undefined1 *)((long)local_378 + local_370) = 0;
  local_380 = 0x10;
  std::__cxx11::stringbuf::_M_sync((char *)&puStack_3c0,(ulong)local_378,0);
  std::ios::init((streambuf *)local_358);
  if (local_3e8 != &local_3d8) {
    operator_delete(local_3e8,CONCAT35(local_3d8._5_3_,(undefined5)local_3d8) + 1);
  }
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_3c8,"failed to open ",0xf);
  poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)&local_3c8,(char *)*param_2,param_2[1]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar7,".  Does it exist?",0x11);
  local_438 = 0;
  local_420 = 0;
  local_418 = 0;
  local_448 = (undefined1  [16])0x0;
  local_428 = &local_418;
  if (local_398._0_8_ == 0) {
    std::__cxx11::string::_M_assign((string *)&local_428);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_428,0,(char *)0x0,local_3a8._8_8_);
  }
  local_3f8 = 0;
  local_400 = 0;
  local_408 = &local_3f8;
  if ((LoaderLogger::GetInstance()::instance == '\0') &&
     (iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar5 != 0)) {
    LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
    __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle);
    __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
  }
  local_3d8._0_5_ = 0x586e65704f;
  local_3d8._5_3_ = 0x4c2d52;
  uStack_3d0 = 0x726564616f;
  local_3e0 = 0xd;
  local_3cb = 0;
  local_3e8 = &local_3d8;
  LoaderLogger::LogMessage
            (0x10b680,0x1000,(string *)0x1,(string *)&local_3e8,(string *)&local_408,
             (vector *)&local_428);
  if (local_3e8 != &local_3d8) {
    operator_delete(local_3e8,CONCAT35(local_3d8._5_3_,(undefined5)local_3d8) + 1);
  }
  if (local_408 != &local_3f8) {
    operator_delete(local_408,CONCAT71(uStack_3f7,local_3f8) + 1);
  }
  if (local_428 != &local_418) {
    operator_delete(local_428,CONCAT71(uStack_417,local_418) + 1);
  }
  uVar1 = local_448._8_8_;
  pvVar8 = (void *)local_448._0_8_;
  if (local_448._8_8_ != local_448._0_8_) {
    do {
      if (*(void **)((long)pvVar8 + 0x10) != (void *)((long)pvVar8 + 0x20)) {
        operator_delete(*(void **)((long)pvVar8 + 0x10),*(long *)((long)pvVar8 + 0x20) + 1);
      }
      pvVar8 = (void *)((long)pvVar8 + 0x30);
    } while ((void *)uVar1 != pvVar8);
  }
  if ((void *)local_448._0_8_ != (void *)0x0) {
    operator_delete((void *)local_448._0_8_,local_438 - local_448._0_8_);
  }
  local_358[0] = (code *)&std::streambuf::vtable;
  local_3c8 = PTR_vtable_0010b9d8;
  puStack_3c0 = PTR_vtable_0010b9e0;
  if (local_378 != local_368) {
    operator_delete(local_378,local_368[0] + 1);
  }
  puStack_3c0 = std::ios_base::~ios_base;
  std::locale::~locale(local_388);
  local_3c8 = _init;
  *(undefined8 *)((long)&local_3c8 + *(long *)(_init + -0x18)) = _locale;
  local_358[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_358);
  local_248[0] = std::ios::clear;
  local_148[0] = Json::Value::isObject;
  local_238[0] = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
LAB_001087d2:
  local_238[0] = std::ios_base::~ios_base;
  std::locale::~locale(local_200);
  local_248[0] = pcVar3;
  *(undefined8 *)((long)local_248 + *(long *)(pcVar3 + -0x18)) = _filebuf;
  local_248[1] = (code *)0x0;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* ApiLayerManifestFile::FindManifestFiles(std::__cxx11::string const&, ManifestFileType,
   std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >,
   std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile> >
   > >&) */

undefined8 ApiLayerManifestFile::FindManifestFiles(string *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  __uid_t _Var2;
  __uid_t _Var3;
  int iVar4;
  __gid_t _Var5;
  __gid_t _Var6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  string *psVar18;
  bool bVar19;
  string *psVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long in_FS_OFFSET;
  byte bVar24;
  string *local_230;
  ulong local_1e0;
  undefined1 local_1d8 [16];
  long local_1c8;
  undefined1 *local_1b8;
  ulong local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined1 *local_198;
  char *local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  long *local_158;
  ulong local_150;
  long local_148 [2];
  string *local_138;
  ulong local_130;
  ulong auStack_128 [2];
  undefined1 *local_118;
  ulong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  long *local_f8;
  long local_f0;
  long local_e8 [2];
  long *local_d8;
  long local_d0;
  long local_c8 [2];
  long *local_b8;
  long local_b0;
  long local_a8 [2];
  string *local_98;
  ulong local_90;
  ulong auStack_88 [2];
  string *local_78;
  undefined8 local_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined1 uStack_5b;
  undefined5 local_4e;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined5 uStack_46;
  undefined1 uStack_41;
  long local_40;
  
  bVar24 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b0 = 0;
  local_1a8 = 0;
  local_190 = (char *)0x0;
  local_188 = 0;
  local_170 = 0;
  local_168 = 0;
  local_1b8 = &local_1a8;
  local_198 = &local_188;
  local_178 = &local_168;
  std::__cxx11::string::_M_replace((ulong)&local_1b8,0,(char *)0x0,0x10a498);
  local_158 = local_148;
  std::__cxx11::string::_M_construct((ulong)&local_158,'\x01');
  *(undefined1 *)local_158 = 0x31;
  if (0x3fffffffffffffff - local_1b0 < local_150) goto LAB_00109f92;
  std::__cxx11::string::_M_append((char *)&local_1b8,(ulong)local_158);
  if (local_158 != local_148) {
    operator_delete(local_158,local_148[0] + 1);
  }
  if (param_2 == 2) {
    if (0x3fffffffffffffff - local_1b0 < 0x16) goto LAB_00109f92;
    std::__cxx11::string::_M_append((char *)&local_1b8,0x10a597);
    pcVar11 = &_LC90;
    std::__cxx11::string::_M_replace((ulong)&local_198,0,local_190,0x10a54c);
  }
  else {
    if (param_2 != 3) {
      local_1d8 = (undefined1  [16])0x0;
      local_1c8 = 0;
      local_1e0 = 0x49;
      local_98 = (string *)auStack_88;
      local_98 = (string *)std::__cxx11::string::_M_create((ulong *)&local_98,(ulong)&local_1e0);
      uVar15 = _UNK_0010b958;
      auStack_88[0] = local_1e0;
      *(undefined8 *)local_98 = __LC98;
      *(undefined8 *)(local_98 + 8) = uVar15;
      uVar15 = _UNK_0010b978;
      *(undefined8 *)(local_98 + 0x10) = __LC105;
      *(undefined8 *)(local_98 + 0x18) = uVar15;
      uVar15 = _UNK_0010b988;
      *(undefined8 *)(local_98 + 0x20) = __LC106;
      *(undefined8 *)(local_98 + 0x28) = uVar15;
      uVar15 = _UNK_0010b998;
      *(undefined8 *)(local_98 + 0x30) = __LC107;
      *(undefined8 *)(local_98 + 0x38) = uVar15;
      uVar15 = _UNK_0010b9a8;
      *(undefined8 *)(local_98 + 0x39) = __LC108;
      *(undefined8 *)(local_98 + 0x41) = uVar15;
      local_90 = local_1e0;
      local_98[local_1e0] = (string)0x0;
      if ((LoaderLogger::GetInstance()::instance == '\0') &&
         (iVar4 = __cxa_guard_acquire(&LoaderLogger::GetInstance()::instance), iVar4 != 0)) {
        LoaderLogger::LoaderLogger((LoaderLogger *)LoaderLogger::GetInstance()::instance);
        __cxa_atexit(LoaderLogger::~LoaderLogger,LoaderLogger::GetInstance()::instance,&__dso_handle
                    );
        __cxa_guard_release(&LoaderLogger::GetInstance()::instance);
      }
      local_70 = 0xd;
      uStack_68 = 0x6e65704f;
      uStack_64 = 0x4c2d5258;
      uStack_60 = 0x6f;
      uStack_5f = 0x72656461;
      uStack_5b = 0;
      local_78 = (string *)&uStack_68;
      LoaderLogger::LogMessage
                (0x10b680,0x1000,(string *)0x1,(string *)&local_78,param_1,(vector *)&local_98);
      if (local_78 != (string *)&uStack_68) {
        operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
      }
      if (local_98 != (string *)auStack_88) {
        operator_delete(local_98,auStack_88[0] + 1);
      }
      uVar15 = local_1d8._8_8_;
      pvVar14 = (void *)local_1d8._0_8_;
      if (local_1d8._8_8_ != local_1d8._0_8_) {
        do {
          if (*(void **)((long)pvVar14 + 0x10) != (void *)((long)pvVar14 + 0x20)) {
            operator_delete(*(void **)((long)pvVar14 + 0x10),*(long *)((long)pvVar14 + 0x20) + 1);
          }
          pvVar14 = (void *)((long)pvVar14 + 0x30);
        } while ((void *)uVar15 != pvVar14);
      }
      if ((void *)local_1d8._0_8_ != (void *)0x0) {
        operator_delete((void *)local_1d8._0_8_,local_1c8 - local_1d8._0_8_);
      }
      uVar15 = 0xffffffe0;
      goto LAB_001091c2;
    }
    if (0x3fffffffffffffff - local_1b0 < 0x16) goto LAB_00109f92;
    std::__cxx11::string::_M_append((char *)&local_1b8,0x10a5ae);
    pcVar11 = "XR_API_LAYER_PATH";
    std::__cxx11::string::_M_replace((ulong)&local_198,0,local_190,0x10a5c5);
  }
  local_1c8 = 0;
  local_130 = 0;
  auStack_128[0] = auStack_128[0] & 0xffffffffffffff00;
  local_110 = 0;
  local_108 = 0;
  local_1d8 = (undefined1  [16])0x0;
  local_138 = (string *)auStack_128;
  local_118 = &local_108;
  if (local_190 == (char *)0x0) {
LAB_00109331:
    local_4e = 0x61636f6c2e;
    uStack_49 = 0x6c;
    uStack_48 = 0x732f;
    uStack_46 = 0x2f65726168;
    uStack_41 = 0;
    PlatformUtilsGetSecureEnv((char *)&local_f8);
    PlatformUtilsGetSecureEnv((char *)&local_d8);
    PlatformUtilsGetSecureEnv((char *)&local_b8);
    PlatformUtilsGetSecureEnv((char *)&local_98);
    bVar19 = SUB81((string *)&local_78,0);
    if (local_f0 == 0) {
      uStack_68 = 0x6374652f;
      uStack_64 = 0x6764782f;
      local_70 = 8;
      uStack_60 = 0;
      local_78 = (string *)&uStack_68;
      CopyIncludedPaths(bVar19,(string *)&local_1b8,(string *)&local_118,(string *)pcVar11);
      if (local_78 != (string *)&uStack_68) {
        operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
      }
    }
    else {
      CopyIncludedPaths(SUB81(&local_f8,0),(string *)&local_1b8,(string *)&local_118,
                        (string *)pcVar11);
    }
    uStack_68 = 0x6374652f;
    local_70 = 4;
    uStack_64 = uStack_64 & 0xffffff00;
    local_78 = (string *)&uStack_68;
    CopyIncludedPaths(bVar19,(string *)&local_1b8,(string *)&local_118,(string *)pcVar11);
    if (local_78 != (string *)&uStack_68) {
      operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
    }
    if (local_d0 == 0) {
      local_1e0 = 0x1b;
      local_78 = (string *)&uStack_68;
      local_78 = (string *)std::__cxx11::string::_M_create((ulong *)&local_78,(ulong)&local_1e0);
      uVar15 = _UNK_0010b9b8;
      uStack_68 = (uint)local_1e0;
      uStack_64 = (uint)(local_1e0 >> 0x20);
      *(undefined8 *)local_78 = __LC109;
      *(undefined8 *)(local_78 + 8) = uVar15;
      uVar15 = _UNK_0010b9c8;
      *(undefined8 *)(local_78 + 0xb) = __LC110;
      *(undefined8 *)(local_78 + 0x13) = uVar15;
      local_70 = local_1e0;
      local_78[local_1e0] = (string)0x0;
      if (local_1e0 != 0) {
        CopyIncludedPaths(bVar19,(string *)&local_1b8,(string *)&local_118,(string *)pcVar11);
      }
      if (local_78 == (string *)&uStack_68) goto LAB_0010949e;
      operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
      if (local_b0 == 0) goto LAB_001094ad;
LAB_00109b04:
      CopyIncludedPaths(SUB81(&local_b8,0),(string *)&local_1b8,(string *)&local_118,
                        (string *)pcVar11);
    }
    else {
      CopyIncludedPaths(SUB81(&local_d8,0),(string *)&local_1b8,(string *)&local_118,
                        (string *)pcVar11);
LAB_0010949e:
      if (local_b0 != 0) goto LAB_00109b04;
LAB_001094ad:
      if (local_90 != 0) {
        uStack_5b = 0;
        uStack_68 = (uint)local_4e;
        local_70 = 0xd;
        uStack_64 = CONCAT31(CONCAT21(uStack_48,uStack_49),(char)((uint5)local_4e >> 0x20));
        uStack_60 = (undefined1)uStack_46;
        uStack_5f = (undefined4)((uint5)uStack_46 >> 8);
        local_78 = (string *)&uStack_68;
        if (0x3ffffffffffffff2 < local_1b0) {
LAB_00109f92:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::append");
        }
        std::__cxx11::string::_M_append((char *)&local_78,(ulong)local_1b8);
        if (local_90 != 0) {
          CopyIncludedPaths(SUB81(&local_98,0),(string *)&local_78,(string *)&local_118,
                            (string *)pcVar11);
        }
        if (local_78 != (string *)&uStack_68) {
          operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
        }
      }
    }
    if (local_98 != (string *)auStack_88) {
      operator_delete(local_98,auStack_88[0] + 1);
    }
    if (local_b8 != local_a8) {
      operator_delete(local_b8,local_a8[0] + 1);
    }
    if (local_d8 != local_c8) {
      operator_delete(local_d8,local_c8[0] + 1);
    }
    if (local_f8 != local_e8) {
      operator_delete(local_f8,local_e8[0] + 1);
    }
  }
  else {
    _Var2 = geteuid();
    _Var3 = getuid();
    if (_Var2 == _Var3) {
      _Var5 = getegid();
      _Var6 = getgid();
      if (_Var5 == _Var6) {
        PlatformUtilsGetSecureEnv((char *)&local_78);
        pcVar11 = (char *)local_78;
        psVar18 = local_138;
        if (local_78 == (string *)&uStack_68) {
          if (local_70 != 0) {
            if (local_70 == 1) {
              *local_138 = uStack_68._0_1_;
            }
            else {
              psVar18 = (string *)&uStack_68;
              psVar20 = local_138;
              for (uVar8 = local_70 & 0xffffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
                *psVar20 = *psVar18;
                psVar18 = psVar18 + (ulong)bVar24 * -2 + 1;
                psVar20 = psVar20 + (ulong)bVar24 * -2 + 1;
              }
              pcVar11 = (char *)0x0;
            }
          }
          local_138[local_70] = (string)0x0;
        }
        else {
          uVar8 = CONCAT44(uStack_64,uStack_68);
          if ((local_138 == (string *)auStack_128) ||
             (local_138 = local_78, psVar18 == (string *)0x0)) {
            local_138 = local_78;
            auStack_128[0] = uVar8;
            local_78 = (string *)&uStack_68;
          }
          else {
            local_78 = psVar18;
            uStack_68 = (uint)auStack_128[0];
            uStack_64 = (uint)(auStack_128[0] >> 0x20);
            auStack_128[0] = uVar8;
          }
        }
        local_130 = local_70;
        local_70 = 0;
        *local_78 = (string)0x0;
        if (local_78 != (string *)&uStack_68) {
          operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
        }
      }
    }
    if (local_130 == 0) goto LAB_00109331;
    uStack_68 = uStack_68 & 0xffffff00;
    local_70 = 0;
    local_78 = (string *)&uStack_68;
    CopyIncludedPaths(SUB81(&local_138,0),(string *)&local_78,(string *)&local_118,(string *)pcVar11
                     );
    if (local_78 != (string *)&uStack_68) {
      operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
    }
  }
  local_230 = (string *)auStack_88;
  uVar8 = std::__cxx11::string::find((char)&local_118,0x3a);
  auStack_88[0] = auStack_88[0] & 0xffffffffffffff00;
  local_90 = 0;
  local_98 = local_230;
  if (uVar8 == 0xffffffffffffffff) {
    if (local_110 != 0) {
      uVar9 = 0;
      goto LAB_00109983;
    }
    uVar8 = 0;
    puVar17 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uVar9 = 0;
    do {
      if (local_110 < uVar9) {
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                   uVar9);
        goto LAB_00109f8d;
      }
      uVar12 = local_110 - uVar9;
      if (uVar8 - uVar9 < local_110 - uVar9) {
        uVar12 = uVar8 - uVar9;
      }
      local_78 = (string *)&uStack_68;
      std::__cxx11::string::_M_construct<char_const*>
                ((string *)&local_78,local_118 + uVar9,local_118 + uVar9 + uVar12);
      psVar18 = local_98;
      if (local_78 == (string *)&uStack_68) {
        if (local_70 != 0) {
          if (local_70 == 1) {
            *local_98 = uStack_68._0_1_;
          }
          else {
            uVar7 = (uint)local_70;
            uVar9 = local_70 & 0xffffffff;
            if (uVar7 < 8) {
              if ((local_70 & 4) == 0) {
                if ((uVar7 != 0) && (*local_98 = uStack_68._0_1_, (local_70 & 2) != 0)) {
                  *(undefined2 *)(local_98 + (uVar9 - 2)) =
                       *(undefined2 *)((long)&local_70 + uVar9 + 6);
                }
              }
              else {
                *(uint *)local_98 = uStack_68;
                *(undefined4 *)(local_98 + (uVar9 - 4)) =
                     *(undefined4 *)((long)&local_70 + uVar9 + 4);
              }
            }
            else {
              *(ulong *)local_98 = CONCAT44(uStack_64,uStack_68);
              *(undefined8 *)(local_98 + ((local_70 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&local_70 + (local_70 & 0xffffffff));
              lVar10 = (long)local_98 - ((ulong)(local_98 + 8) & 0xfffffffffffffff8);
              uVar7 = (int)lVar10 + uVar7 & 0xfffffff8;
              if (7 < uVar7) {
                uVar9 = 0;
                do {
                  uVar13 = (int)uVar9 + 8;
                  *(undefined8 *)(((ulong)(local_98 + 8) & 0xfffffffffffffff8) + uVar9) =
                       *(undefined8 *)((string *)&uStack_68 + (uVar9 - lVar10));
                  uVar9 = (ulong)uVar13;
                } while (uVar13 < uVar7);
              }
            }
          }
        }
        local_98[local_70] = (string)0x0;
        local_90 = local_70;
      }
      else {
        uVar9 = CONCAT44(uStack_64,uStack_68);
        if (local_98 != local_230) {
          local_98 = local_78;
          local_90 = local_70;
          if (psVar18 != (string *)0x0) {
            local_78 = psVar18;
            uStack_68 = (uint)auStack_88[0];
            uStack_64 = (uint)(auStack_88[0] >> 0x20);
            auStack_88[0] = uVar9;
            goto LAB_00109738;
          }
        }
        local_90 = local_70;
        local_98 = local_78;
        auStack_88[0] = uVar9;
        local_78 = (string *)&uStack_68;
      }
LAB_00109738:
      local_70 = 0;
      *local_78 = (string)0x0;
      if (local_78 != (string *)&uStack_68) {
        operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
      }
      cVar1 = FileSysUtilsPathExists((string *)&local_98);
      if (cVar1 != '\0') {
        CheckAllFilesInThePath((string *)&local_98,true,(vector *)local_1d8);
      }
      do {
        uVar9 = uVar8 + 1;
        uVar8 = std::__cxx11::string::find((char)&local_118,0x3a);
      } while (uVar9 == uVar8);
    } while (uVar8 != 0xffffffffffffffff);
    if (uVar9 < local_110) {
LAB_00109983:
      local_78 = (string *)&uStack_68;
      std::__cxx11::string::_M_construct<char_const*>
                ((string *)&local_78,local_118 + uVar9,local_118 + local_110);
      psVar18 = local_98;
      if (local_78 == (string *)&uStack_68) {
        if (local_70 != 0) {
          if (local_70 == 1) {
            *local_98 = uStack_68._0_1_;
          }
          else {
            uVar7 = (uint)local_70;
            uVar8 = local_70 & 0xffffffff;
            if (uVar7 < 8) {
              if ((local_70 & 4) == 0) {
                if ((uVar7 != 0) && (*local_98 = uStack_68._0_1_, (local_70 & 2) != 0)) {
                  *(undefined2 *)(local_98 + (uVar8 - 2)) =
                       *(undefined2 *)((long)&local_70 + uVar8 + 6);
                }
              }
              else {
                *(uint *)local_98 = uStack_68;
                *(undefined4 *)(local_98 + (uVar8 - 4)) =
                     *(undefined4 *)((long)&local_70 + uVar8 + 4);
              }
            }
            else {
              *(ulong *)local_98 = CONCAT44(uStack_64,uStack_68);
              *(undefined8 *)(local_98 + ((local_70 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&local_70 + (local_70 & 0xffffffff));
              lVar10 = (long)local_98 - ((ulong)(local_98 + 8) & 0xfffffffffffffff8);
              uVar7 = (int)lVar10 + uVar7 & 0xfffffff8;
              if (7 < uVar7) {
                uVar13 = 0;
                do {
                  uVar8 = (ulong)uVar13;
                  uVar13 = uVar13 + 8;
                  *(undefined8 *)(((ulong)(local_98 + 8) & 0xfffffffffffffff8) + uVar8) =
                       *(undefined8 *)((string *)&uStack_68 + (uVar8 - lVar10));
                } while (uVar13 < uVar7);
              }
            }
          }
        }
        local_98[local_70] = (string)0x0;
        local_90 = local_70;
      }
      else {
        uVar8 = CONCAT44(uStack_64,uStack_68);
        if (local_98 != local_230) {
          local_98 = local_78;
          local_90 = local_70;
          if (psVar18 != (string *)0x0) {
            local_78 = psVar18;
            uStack_68 = (uint)auStack_88[0];
            uStack_64 = (uint)(auStack_88[0] >> 0x20);
            auStack_88[0] = uVar8;
            goto LAB_00109a0a;
          }
        }
        local_90 = local_70;
        local_98 = local_78;
        auStack_88[0] = uVar8;
        local_78 = (string *)&uStack_68;
      }
LAB_00109a0a:
      local_70 = 0;
      *local_78 = (string)0x0;
      if (local_78 != (string *)&uStack_68) {
        operator_delete(local_78,CONCAT44(uStack_64,uStack_68) + 1);
      }
      cVar1 = FileSysUtilsPathExists((string *)&local_98);
      if (cVar1 != '\0') {
        CheckAllFilesInThePath((string *)&local_98,true,(vector *)local_1d8);
      }
    }
    if (local_98 != local_230) {
      operator_delete(local_98,auStack_88[0] + 1);
    }
    uVar8 = local_1c8 - local_1d8._0_8_;
    puVar16 = (undefined8 *)local_1d8._8_8_;
    puVar17 = (undefined8 *)local_1d8._0_8_;
  }
  if (local_118 != &local_108) {
    operator_delete(local_118,CONCAT71(uStack_107,local_108) + 1);
  }
  if (local_138 != (string *)auStack_128) {
    operator_delete(local_138,auStack_128[0] + 1);
  }
  puVar22 = puVar17;
  if (puVar17 != puVar16) {
    do {
      puVar23 = puVar22 + 4;
      CreateIfValid(param_2,puVar22,param_3);
      puVar21 = puVar17;
      puVar22 = puVar23;
    } while (puVar16 != puVar23);
    do {
      if ((undefined8 *)*puVar21 != puVar21 + 2) {
        operator_delete((undefined8 *)*puVar21,puVar21[2] + 1);
      }
      puVar21 = puVar21 + 4;
    } while (puVar21 != puVar16);
  }
  if (puVar17 != (undefined8 *)0x0) {
    operator_delete(puVar17,uVar8);
  }
  uVar15 = 0;
LAB_001091c2:
  if (local_178 != &local_168) {
    operator_delete(local_178,CONCAT71(uStack_167,local_168) + 1);
  }
  if (local_198 != &local_188) {
    operator_delete(local_198,CONCAT71(uStack_187,local_188) + 1);
  }
  if (local_1b8 != &local_1a8) {
    operator_delete(local_1b8,CONCAT71(uStack_1a7,local_1a8) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
LAB_00109f8d:
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
    if (0xfffffffffffffffe < uVar5) goto LAB_0010aa88;
    uVar14 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar14 = uVar5 + 1;
    }
    uVar14 = uVar14 << 5;
  }
  else {
    uVar14 = uVar5 * 2;
    if (uVar14 < uVar5) {
LAB_0010aa88:
      uVar14 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar14 == 0) {
        plVar11 = (long *)0x20;
        lVar12 = 0;
        plVar6 = (long *)0x0;
        goto LAB_0010a9db;
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
LAB_0010a9db:
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
              if ((uVar5 & 2) == 0) goto LAB_0010aa7c;
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
LAB_0010aa7c:
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



/* void std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties>
   >::_M_realloc_insert<XrExtensionProperties
   const&>(__gnu_cxx::__normal_iterator<XrExtensionProperties*, std::vector<XrExtensionProperties,
   std::allocator<XrExtensionProperties> > >, XrExtensionProperties const&) */

void __thiscall
std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::
_M_realloc_insert<XrExtensionProperties_const&>
          (vector<XrExtensionProperties,std::allocator<XrExtensionProperties>> *this,void *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  void *__dest;
  void *pvVar2;
  void *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  void *__dest_00;
  size_t __n;
  ulong uVar20;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  lVar18 = (long)pvVar2 - (long)__src >> 3;
  uVar19 = lVar18 * -0x79435e50d79435e5;
  if (uVar19 == 0xd79435e50d7943) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    uVar20 = uVar19 + 1;
    if (0xfffffffffffffffe < uVar19) goto LAB_0010ae00;
    if (0xd79435e50d7943 < uVar20) {
      uVar20 = 0xd79435e50d7943;
    }
    uVar20 = uVar20 * 0x98;
LAB_0010ae0a:
    __dest_00 = operator_new(uVar20);
    lVar18 = uVar20 + (long)__dest_00;
  }
  else {
    uVar20 = lVar18 * 0xd79435e50d79436;
    if (uVar20 < uVar19) {
LAB_0010ae00:
      uVar20 = 0x7fffffffffffffc8;
      goto LAB_0010ae0a;
    }
    if (uVar20 != 0) {
      if (0xd79435e50d7943 < uVar20) {
        uVar20 = 0xd79435e50d7943;
      }
      uVar20 = uVar20 * 0x98;
      goto LAB_0010ae0a;
    }
    lVar18 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  __dest = (void *)((long)__dest_00 + __n + 0x98);
  __n_00 = (long)pvVar2 - (long)param_2;
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[8];
  uVar11 = param_3[9];
  uVar12 = param_3[10];
  uVar13 = param_3[0xb];
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar3;
  uVar14 = param_3[0xc];
  uVar15 = param_3[0xd];
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_3[0xe];
  uVar5 = param_3[0xf];
  uVar16 = param_3[0x10];
  uVar17 = param_3[0x11];
  uVar3 = param_3[0x12];
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x20);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x30);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  *(undefined8 *)((long)__dest_00 + __n + 0x90) = uVar3;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x40);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x50);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x60);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x70);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)__dest_00 + __n + 0x80);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010ade3;
  }
  else {
    memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
      operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
      goto LAB_0010ade3;
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010ade3:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar18;
  return;
}



/* void std::vector<ExtensionListing, std::allocator<ExtensionListing>
   >::_M_realloc_insert<ExtensionListing const&>(__gnu_cxx::__normal_iterator<ExtensionListing*,
   std::vector<ExtensionListing, std::allocator<ExtensionListing> > >, ExtensionListing const&) */

void __thiscall
std::vector<ExtensionListing,std::allocator<ExtensionListing>>::
_M_realloc_insert<ExtensionListing_const&>
          (vector<ExtensionListing,std::allocator<ExtensionListing>> *this,undefined8 *param_2,
          long *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long local_40;
  
  puVar2 = *(undefined8 **)(this + 8);
  puVar3 = *(undefined8 **)this;
  lVar6 = (long)puVar2 - (long)puVar3 >> 3;
  uVar7 = lVar6 * -0x3333333333333333;
  if (uVar7 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar3 == puVar2) {
    uVar14 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_0010b050;
    if (0x333333333333333 < uVar14) {
      uVar14 = 0x333333333333333;
    }
    uVar14 = uVar14 * 0x28;
  }
  else {
    uVar14 = lVar6 * -0x6666666666666666;
    if (uVar14 < uVar7) {
LAB_0010b050:
      uVar14 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar14 == 0) {
        local_40 = 0;
        plVar11 = (long *)0x28;
        plVar8 = (long *)0x0;
        goto LAB_0010af83;
      }
      if (0x333333333333333 < uVar14) {
        uVar14 = 0x333333333333333;
      }
      uVar14 = uVar14 * 0x28;
    }
  }
  plVar8 = (long *)operator_new(uVar14);
  local_40 = (long)plVar8 + uVar14;
  plVar11 = plVar8 + 5;
LAB_0010af83:
  plVar10 = (long *)((long)plVar8 + ((long)param_2 - (long)puVar3));
  lVar6 = *param_3;
  *plVar10 = (long)(plVar10 + 2);
  __cxx11::string::_M_construct<char*>(plVar10,lVar6,param_3[1] + lVar6);
  *(int *)(plVar10 + 4) = (int)param_3[4];
  puVar9 = puVar3;
  plVar10 = plVar8;
  if (param_2 != puVar3) {
    do {
      plVar11 = plVar10 + 2;
      *plVar10 = (long)plVar11;
      plVar4 = (long *)*puVar9;
      if (plVar4 == puVar9 + 2) {
        lVar6 = puVar9[1];
        uVar7 = lVar6 + 1;
        uVar15 = (uint)uVar7;
        if (7 < uVar15) {
          *plVar11 = *plVar4;
          *(undefined8 *)((long)plVar10 + (uVar7 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar4 + ((uVar7 & 0xffffffff) - 8));
          lVar6 = (long)plVar11 - ((ulong)(plVar10 + 3) & 0xfffffffffffffff8);
          uVar15 = uVar15 + (int)lVar6 & 0xfffffff8;
          if (7 < uVar15) {
            uVar12 = 0;
            do {
              uVar7 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(plVar10 + 3) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)plVar4 + (uVar7 - lVar6));
            } while (uVar12 < uVar15);
          }
          goto LAB_0010afdb;
        }
        if ((uVar7 & 4) == 0) {
          if (uVar15 != 0) {
            *(char *)plVar11 = (char)*plVar4;
            if ((uVar7 & 2) == 0) goto LAB_0010afdb;
            *(undefined2 *)((long)plVar10 + (uVar7 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)plVar4 + ((uVar7 & 0xffffffff) - 2));
            lVar6 = puVar9[1];
          }
        }
        else {
          *(int *)plVar11 = (int)*plVar4;
          *(undefined4 *)((long)plVar10 + (uVar7 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)plVar4 + ((uVar7 & 0xffffffff) - 4));
          lVar6 = puVar9[1];
        }
      }
      else {
        *plVar10 = (long)plVar4;
        plVar10[2] = puVar9[2];
LAB_0010afdb:
        lVar6 = puVar9[1];
      }
      uVar1 = *(undefined4 *)(puVar9 + 4);
      puVar9 = puVar9 + 5;
      plVar10[1] = lVar6;
      *(undefined4 *)(plVar10 + 4) = uVar1;
      plVar10 = plVar10 + 5;
    } while (param_2 != puVar9);
    plVar11 = (long *)((long)plVar8 +
                      ((long)param_2 + (-0x28 - (long)puVar3) & 0xfffffffffffffff8U) + 0x50);
  }
  puVar9 = param_2;
  plVar10 = plVar11;
  if (param_2 != puVar2) {
    do {
      plVar5 = (long *)*puVar9;
      plVar4 = plVar10 + 2;
      lVar6 = puVar9[1];
      *plVar10 = (long)plVar4;
      if (plVar5 == puVar9 + 2) {
        uVar7 = lVar6 + 1;
        uVar15 = (uint)uVar7;
        if (uVar15 < 8) {
          if ((uVar7 & 4) == 0) {
            if ((uVar15 != 0) && (*(char *)plVar4 = (char)*plVar5, (uVar7 & 2) != 0)) {
              *(undefined2 *)((long)plVar10 + (uVar7 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar5 + ((uVar7 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar4 = (int)*plVar5;
            *(undefined4 *)((long)plVar10 + (uVar7 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar5 + ((uVar7 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar4 = *plVar5;
          *(undefined8 *)((long)plVar10 + (uVar7 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar5 + ((uVar7 & 0xffffffff) - 8));
          lVar13 = (long)plVar4 - ((ulong)(plVar10 + 3) & 0xfffffffffffffff8);
          uVar15 = uVar15 + (int)lVar13 & 0xfffffff8;
          if (7 < uVar15) {
            uVar12 = 0;
            do {
              uVar7 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(plVar10 + 3) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)plVar5 + (uVar7 - lVar13));
            } while (uVar12 < uVar15);
          }
        }
      }
      else {
        *plVar10 = (long)plVar5;
        plVar10[2] = puVar9[2];
      }
      uVar1 = *(undefined4 *)(puVar9 + 4);
      puVar9 = puVar9 + 5;
      plVar10[1] = lVar6;
      *(undefined4 *)(plVar10 + 4) = uVar1;
      plVar10 = plVar10 + 5;
    } while (puVar2 != puVar9);
    plVar11 = (long *)((long)plVar11 +
                      ((long)puVar2 + (-0x28 - (long)param_2) & 0xfffffffffffffff8U) + 0x28);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,*(long *)(this + 0x10) - (long)puVar3);
  }
  *(long **)this = plVar8;
  *(long **)(this + 8) = plVar11;
  *(long *)(this + 0x10) = local_40;
  return;
}



/* void std::vector<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> >,
   std::allocator<std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> > >
   >::_M_realloc_insert<RuntimeManifestFile*>(__gnu_cxx::__normal_iterator<std::unique_ptr<RuntimeManifestFile,
   std::default_delete<RuntimeManifestFile> >*, std::vector<std::unique_ptr<RuntimeManifestFile,
   std::default_delete<RuntimeManifestFile> >, std::allocator<std::unique_ptr<RuntimeManifestFile,
   std::default_delete<RuntimeManifestFile> > > > >, RuntimeManifestFile*&&) */

void __thiscall
std::
vector<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>,std::allocator<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>>>
::_M_realloc_insert<RuntimeManifestFile*>
          (vector<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>,std::allocator<std::unique_ptr<RuntimeManifestFile,std::default_delete<RuntimeManifestFile>>>>
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
    if (0xfffffffffffffffe < uVar6) goto LAB_0010b3a8;
    if (0xfffffffffffffff < uVar11) {
      uVar11 = 0xfffffffffffffff;
    }
    uVar11 = uVar11 * 8;
LAB_0010b3b2:
    puVar7 = (undefined8 *)operator_new(uVar11);
    lVar10 = uVar11 + (long)puVar7;
    puVar9 = puVar7 + 1;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_0010b329:
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
    if (param_2 == puVar1) goto LAB_0010b379;
  }
  else {
    uVar4 = uVar6 * 2;
    if (uVar4 < uVar6) {
LAB_0010b3a8:
      uVar11 = 0x7ffffffffffffff8;
      goto LAB_0010b3b2;
    }
    if (uVar4 != 0) {
      uVar11 = 0xfffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar11 = uVar4;
      }
      uVar11 = uVar11 << 3;
      goto LAB_0010b3b2;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_0010b329;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_0010b379:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile>
   >, std::allocator<std::unique_ptr<ApiLayerManifestFile, std::default_delete<ApiLayerManifestFile>
   > > 
   >::_M_realloc_insert<ApiLayerManifestFile*>(__gnu_cxx::__normal_iterator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >*, std::vector<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> >, std::allocator<std::unique_ptr<ApiLayerManifestFile,
   std::default_delete<ApiLayerManifestFile> > > > >, ApiLayerManifestFile*&&) */

void __thiscall
std::
vector<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>,std::allocator<std::unique_ptr<ApiLayerManifestFile,std::default_delete<ApiLayerManifestFile>>>>
::_M_realloc_insert<ApiLayerManifestFile*>
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
    if (0xfffffffffffffffe < uVar6) goto LAB_0010b538;
    if (0xfffffffffffffff < uVar11) {
      uVar11 = 0xfffffffffffffff;
    }
    uVar11 = uVar11 * 8;
LAB_0010b542:
    puVar7 = (undefined8 *)operator_new(uVar11);
    lVar10 = uVar11 + (long)puVar7;
    puVar9 = puVar7 + 1;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_0010b4b9:
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
    if (param_2 == puVar1) goto LAB_0010b509;
  }
  else {
    uVar4 = uVar6 * 2;
    if (uVar4 < uVar6) {
LAB_0010b538:
      uVar11 = 0x7ffffffffffffff8;
      goto LAB_0010b542;
    }
    if (uVar4 != 0) {
      uVar11 = 0xfffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar11 = uVar4;
      }
      uVar11 = uVar11 << 3;
      goto LAB_0010b542;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_0010b4b9;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_0010b509:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::string
   >, std::allocator<std::pair<std::__cxx11::string const, std::__cxx11::string > >,
   std::__detail::_Select1st, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>
   >::_M_find_before_node(unsigned long, std::__cxx11::string const&, unsigned long) const */

long * __thiscall
std::
_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::_M_find_before_node
          (_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           *this,ulong param_1,string *param_2,ulong param_3)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)this + param_1 * 8);
  if (plVar5 != (long *)0x0) {
    uVar3 = ((long *)*plVar5)[9];
    plVar1 = (long *)*plVar5;
    do {
      plVar4 = plVar1;
      if ((uVar3 == param_3) && (__n = *(size_t *)(param_2 + 8), __n == plVar4[2])) {
        if (__n == 0) {
          return plVar5;
        }
        iVar2 = memcmp(*(void **)param_2,(void *)plVar4[1],__n);
        if (iVar2 == 0) {
          return plVar5;
        }
      }
      plVar1 = (long *)*plVar4;
    } while ((plVar1 != (long *)0x0) &&
            (uVar3 = plVar1[9], plVar5 = plVar4, param_1 == uVar3 % *(ulong *)(this + 8)));
    plVar5 = (long *)0x0;
  }
  return plVar5;
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



/* WARNING: Control flow encountered bad instruction data */
/* LoaderLogger::~LoaderLogger() */

void __thiscall LoaderLogger::~LoaderLogger(LoaderLogger *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


