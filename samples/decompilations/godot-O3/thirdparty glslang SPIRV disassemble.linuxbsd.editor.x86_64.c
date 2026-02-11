
/* spv::Kill(std::ostream&, char const*) */

void spv::Kill(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = std::endl<char,std::char_traits<char>>(param_1);
  poVar1 = std::operator<<(poVar1,"Disassembly failed: ");
  poVar1 = std::operator<<(poVar1,param_2);
  std::endl<char,std::char_traits<char>>(poVar1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* spv::SpirvStream::outputIndent() */

void __thiscall spv::SpirvStream::outputIndent(SpirvStream *this)

{
  int iVar1;
  
  if (0 < (int)(((int)(*(long *)(this + 0xa8) - *(long *)(this + 0x88) >> 3) + -1 +
                (uint)(*(long *)(this + 0xa8) == 0)) * 0x80 +
                (int)(*(long *)(this + 0x90) - *(long *)(this + 0x98) >> 2) +
               (int)(*(long *)(this + 0x80) - *(long *)(this + 0x70) >> 2))) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8),"  ",2);
    } while (iVar1 < (int)(((int)(*(long *)(this + 0xa8) - *(long *)(this + 0x88) >> 3) + -1 +
                           (uint)(*(long *)(this + 0xa8) == 0)) * 0x80 +
                           (int)(*(long *)(this + 0x90) - *(long *)(this + 0x98) >> 2) +
                          (int)(*(long *)(this + 0x80) - *(long *)(this + 0x70) >> 2)));
    return;
  }
  return;
}



/* spv::SpirvStream::formatId(unsigned int, std::__cxx11::stringstream&) */

void __thiscall spv::SpirvStream::formatId(SpirvStream *this,uint param_1,stringstream *param_2)

{
  ostream *poVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 < *(uint *)(this + 0x20)) {
    poVar1 = (ostream *)(param_2 + 0x10);
    std::ostream::_M_insert<unsigned_long>((ulong)poVar1);
    if (*(long *)(*(long *)(this + 0x40) + 8 + (ulong)param_1 * 0x20) == 0) {
      return;
    }
    std::__ostream_insert<char,std::char_traits<char>>(poVar1,"(",1);
    puVar2 = (undefined8 *)((ulong)param_1 * 0x20 + *(long *)(this + 0x40));
    poVar1 = std::__ostream_insert<char,std::char_traits<char>>(poVar1,(char *)*puVar2,puVar2[1]);
    std::__ostream_insert<char,std::char_traits<char>>(poVar1,")",1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Kill(*(ostream **)(this + 8),"Bad <id>");
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spv::SpirvStream::outputResultId(unsigned int) */

void __thiscall spv::SpirvStream::outputResultId(SpirvStream *this,uint param_1)

{
  long lVar1;
  ostream *poVar2;
  void *pvVar3;
  pointer_____offset_0x10___ puVar4;
  undefined *puVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  char *local_1e8;
  long local_1e0;
  char local_1d8;
  undefined7 uStack_1d7;
  undefined *local_1c8 [2];
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
  
  puVar4 = PTR_vtable_001054b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar5 = _init;
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_148[0] = std::locale::locale;
  local_70 = 0;
  local_1c8[0] = _init;
  *(undefined8 *)((long)local_1c8 + *(long *)(_init + -0x18)) = _locale;
  local_1c8[1] = (undefined *)0x0;
  std::ios::init((streambuf *)((stringstream *)local_1c8 + *(long *)(_init + -0x18)));
  pcVar6 = __M_replace;
  lVar1 = *(long *)(__M_replace + -0x18);
  local_1b8[0] = __M_replace;
  *(undefined8 *)((long)local_1b8 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)local_1b8 + lVar1));
  *(undefined8 *)((long)local_1c8 + *(long *)(_vtable + -0x18)) = __locale;
  local_1c8[0] = &std::ios::vtable;
  local_148[0] = strlen;
  local_1b8[0] = std::locale::~locale;
  local_1b8[1] = (code *)puVar4;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ios_base::ios_base;
  local_158 = 0;
  local_170 = 0x18;
  local_160 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  formatId(this,param_1,(stringstream *)local_1c8);
  poVar2 = *(ostream **)(this + 8);
  lVar1 = *(long *)poVar2;
  *(undefined8 *)(poVar2 + *(long *)(lVar1 + -0x18) + 0x10) = 0x10;
  lVar1 = *(long *)(lVar1 + -0x18);
  local_1d8 = '\0';
  local_1e0 = 0;
  *(uint *)(poVar2 + lVar1 + 0x18) = *(uint *)(poVar2 + lVar1 + 0x18) & 0xffffff4f | 0x80;
  local_1e8 = &local_1d8;
  if (local_188._0_8_ == 0) {
    std::__cxx11::string::_M_assign((string *)&local_1e8);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_1e8,0,(char *)0x0,local_198._8_8_);
  }
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,local_1e8,local_1e0);
  if (local_1e8 != &local_1d8) {
    operator_delete(local_1e8,CONCAT71(uStack_1d7,local_1d8) + 1);
  }
  if (param_1 == 0) {
    std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," ",1);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8),":",1);
  }
  lVar1 = *(long *)(this + 0xa8);
  pvVar3 = *(void **)(this + 0x90);
  if (((lVar1 - *(long *)(this + 0x88) >> 3) + -1 + (ulong)(lVar1 == 0)) * 0x80 +
      ((long)pvVar3 - (long)*(void **)(this + 0x98) >> 2) +
      (*(long *)(this + 0x80) - *(long *)(this + 0x70) >> 2) != 0) {
    if (pvVar3 == *(void **)(this + 0x98)) {
      if (*(uint *)(*(long *)(lVar1 + -8) + 0x1fc) == param_1) {
        operator_delete(pvVar3,0x200);
        lVar1 = *(long *)(*(long *)(this + 0xa8) + -8);
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + -8;
        *(long *)(this + 0x98) = lVar1;
        *(long *)(this + 0xa0) = lVar1 + 0x200;
        *(long *)(this + 0x90) = lVar1 + 0x1fc;
      }
    }
    else if (param_1 == *(uint *)((long)pvVar3 + -4)) {
      *(long *)(this + 0x90) = (long)pvVar3 + -4;
    }
  }
  local_1c8[0] = &std::ios::vtable;
  local_148[0] = strlen;
  local_1b8[0] = std::locale::~locale;
  local_1b8[1] = std::ios_base::ios_base;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  *(undefined8 *)((long)local_1c8 + *(long *)(_vtable + -0x18)) = __locale;
  local_1b8[0] = pcVar6;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar6 + -0x18)) = _vtable;
  local_1c8[0] = puVar5;
  *(undefined8 *)((long)local_1c8 + *(long *)(puVar5 + -0x18)) = _locale;
  local_148[0] = std::locale::locale;
  local_1c8[1] = (undefined *)0x0;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spv::SpirvStream::outputTypeId(unsigned int) */

void __thiscall spv::SpirvStream::outputTypeId(SpirvStream *this,uint param_1)

{
  long lVar1;
  pointer_____offset_0x10___ puVar2;
  undefined *puVar3;
  code *pcVar4;
  ostream *poVar5;
  long in_FS_OFFSET;
  char *local_1e8;
  long local_1e0;
  char local_1d8;
  undefined7 uStack_1d7;
  undefined *local_1c8 [2];
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
  
  puVar2 = PTR_vtable_001054b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar3 = _init;
  local_60 = (undefined1  [16])0x0;
  local_148[0] = std::locale::locale;
  local_50 = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  local_1c8[0] = _init;
  *(undefined8 *)((long)local_1c8 + *(long *)(_init + -0x18)) = _locale;
  local_1c8[1] = (undefined *)0x0;
  std::ios::init((streambuf *)((stringstream *)local_1c8 + *(long *)(_init + -0x18)));
  pcVar4 = __M_replace;
  lVar1 = *(long *)(__M_replace + -0x18);
  local_1b8[0] = __M_replace;
  *(undefined8 *)((long)local_1b8 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)local_1b8 + lVar1));
  *(undefined8 *)((long)local_1c8 + *(long *)(_vtable + -0x18)) = __locale;
  local_1c8[0] = &std::ios::vtable;
  local_148[0] = strlen;
  local_1b8[0] = std::locale::~locale;
  local_1b8[1] = (code *)puVar2;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ios_base::ios_base;
  local_158 = 0;
  local_170 = 0x18;
  local_160 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  formatId(this,param_1,(stringstream *)local_1c8);
  poVar5 = *(ostream **)(this + 8);
  lVar1 = *(long *)poVar5;
  *(undefined8 *)(poVar5 + *(long *)(lVar1 + -0x18) + 0x10) = 0xc;
  lVar1 = *(long *)(lVar1 + -0x18);
  local_1d8 = '\0';
  local_1e0 = 0;
  *(uint *)(poVar5 + lVar1 + 0x18) = *(uint *)(poVar5 + lVar1 + 0x18) & 0xffffff4f | 0x80;
  local_1e8 = &local_1d8;
  if (local_188._0_8_ == 0) {
    std::__cxx11::string::_M_assign((string *)&local_1e8);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_1e8,0,(char *)0x0,local_198._8_8_);
  }
  poVar5 = std::__ostream_insert<char,std::char_traits<char>>(poVar5,local_1e8,local_1e0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
  if (local_1e8 != &local_1d8) {
    operator_delete(local_1e8,CONCAT71(uStack_1d7,local_1d8) + 1);
  }
  local_1c8[0] = &std::ios::vtable;
  local_148[0] = strlen;
  local_1b8[0] = std::locale::~locale;
  local_1b8[1] = std::ios_base::ios_base;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  *(undefined8 *)((long)local_1c8 + *(long *)(_vtable + -0x18)) = __locale;
  local_1b8[0] = pcVar4;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar4 + -0x18)) = _vtable;
  local_1c8[0] = puVar3;
  *(undefined8 *)((long)local_1c8 + *(long *)(puVar3 + -0x18)) = _locale;
  local_148[0] = std::locale::locale;
  local_1c8[1] = (undefined *)0x0;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::SpirvStream::outputId(unsigned int) */

void __thiscall spv::SpirvStream::outputId(SpirvStream *this,uint param_1)

{
  ostream *poVar1;
  undefined8 *puVar2;
  
  if (*(uint *)(this + 0x20) <= param_1) {
                    /* WARNING: Subroutine does not return */
    Kill(*(ostream **)(this + 8),"Bad <id>");
  }
  std::ostream::_M_insert<unsigned_long>((ulong)*(ostream **)(this + 8));
  if (*(long *)(*(long *)(this + 0x40) + 8 + (ulong)param_1 * 0x20) == 0) {
    return;
  }
  poVar1 = *(ostream **)(this + 8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar1,"(",1);
  puVar2 = (undefined8 *)((ulong)param_1 * 0x20 + *(long *)(this + 0x40));
  poVar1 = std::__ostream_insert<char,std::char_traits<char>>(poVar1,(char *)*puVar2,puVar2[1]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar1,")",1);
  return;
}



/* spv::SpirvStream::outputMask(spv::OperandClass, unsigned int) */

void __thiscall spv::SpirvStream::outputMask(SpirvStream *this,int param_2,uint param_3)

{
  long lVar1;
  ostream *poVar2;
  size_t sVar3;
  char *__s;
  uint uVar4;
  
  if (param_3 == 0) {
    std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8),"None",4);
    return;
  }
  uVar4 = 0;
  lVar1 = (long)param_2 * 0x28;
  if (0 < *(int *)(strlen + lVar1)) {
    do {
      if ((param_3 >> (uVar4 & 0x1f) & 1) != 0) {
        poVar2 = *(ostream **)(this + 8);
        __s = (char *)(**(code **)(std::ios::clear + lVar1))(uVar4);
        if (__s == (char *)0x0) {
          std::ios::clear(poVar2 + *(long *)(*(long *)poVar2 + -0x18),
                          *(uint *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x20) | 1);
        }
        else {
          sVar3 = strlen(__s);
          std::__ostream_insert<char,std::char_traits<char>>(poVar2,__s,sVar3);
        }
        std::__ostream_insert<char,std::char_traits<char>>(poVar2," ",1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(strlen + lVar1));
  }
  return;
}



/* spv::SpirvStream::disassembleImmediates(int) */

void __thiscall spv::SpirvStream::disassembleImmediates(SpirvStream *this,int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = 0;
    do {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
      std::ostream::_M_insert<unsigned_long>(*(ulong *)(this + 8));
      if (iVar1 < param_1 + -1) {
        std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," ",1);
      }
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
    return;
  }
  return;
}



/* spv::SpirvStream::disassembleIds(int) */

void __thiscall spv::SpirvStream::disassembleIds(SpirvStream *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_1) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(this + 0x1c);
      lVar2 = **(long **)(this + 0x10);
      *(int *)(this + 0x1c) = iVar1 + 1;
      outputId(this,*(uint *)(lVar2 + (long)iVar1 * 4));
      if (iVar3 < param_1 + -1) {
        std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," ",1);
      }
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
    return;
  }
  return;
}



/* spv::SpirvStream::decodeString[abi:cxx11]() */

int * spv::SpirvStream::decodeString_abi_cxx11_(void)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *__src;
  ulong uVar3;
  int *__dest;
  long lVar4;
  ulong uVar5;
  long in_RSI;
  int *in_RDI;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_8c;
  ulong local_70;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_8c = *(int *)(in_RSI + 0x1c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  for (lVar4 = (long)local_8c << 2; uVar6 = *(uint *)(**(long **)(in_RSI + 0x10) + lVar4),
      (char)uVar6 != '\0'; lVar4 = lVar4 + 4) {
    iVar7 = 4;
    while( true ) {
      uVar3 = local_60;
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
      local_68[uVar3] = (char)uVar6;
      local_68[uVar1] = 0;
      iVar7 = iVar7 + -1;
      local_60 = uVar1;
      if (iVar7 == 0) break;
      uVar2 = uVar6 >> 8;
      uVar6 = uVar6 >> 8;
      if ((char)uVar2 == '\0') goto LAB_00100d58;
    }
    local_8c = local_8c + 1;
  }
LAB_00100d58:
  uVar1 = local_60;
  __src = local_68;
  __dest = in_RDI + 6;
  *in_RDI = (local_8c + 1) - *(int *)(in_RSI + 0x1c);
  *(int **)(in_RDI + 2) = __dest;
  local_70 = local_60;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      *(undefined1 *)(in_RDI + 6) = *local_68;
      goto LAB_00100d8c;
    }
    if (local_60 == 0) goto LAB_00100d8c;
  }
  else {
    __dest = (int *)std::__cxx11::string::_M_create((ulong *)(in_RDI + 2),(ulong)&local_70);
    *(int **)(in_RDI + 2) = __dest;
    *(ulong *)(in_RDI + 6) = local_70;
  }
  memcpy(__dest,__src,uVar1);
  __dest = *(int **)(in_RDI + 2);
LAB_00100d8c:
  *(ulong *)(in_RDI + 4) = local_70;
  *(undefined1 *)((long)__dest + local_70) = 0;
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* spv::SpirvStream::disassembleString() */

int __thiscall spv::SpirvStream::disassembleString(SpirvStream *this)

{
  long in_FS_OFFSET;
  int local_48;
  long *local_40;
  long local_38;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," \"",2);
  decodeString_abi_cxx11_();
  std::__ostream_insert<char,std::char_traits<char>>
            (*(ostream **)(this + 8),(char *)local_40,local_38);
  std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8),"\"",1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + local_48;
  if (local_40 != local_30) {
    operator_delete(local_40,local_30[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::SpirvStream::disassembleInstruction(unsigned int, unsigned int, spv::Op, int) */

void __thiscall
spv::SpirvStream::disassembleInstruction
          (SpirvStream *this,uint param_1,undefined8 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  long ***ppplVar4;
  undefined8 *__src;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  long ****pppplVar10;
  ulong *puVar11;
  void *pvVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  ostream *poVar17;
  int iVar18;
  long ****pppplVar19;
  ostream *poVar20;
  ostream *poVar21;
  long lVar22;
  long in_FS_OFFSET;
  undefined1 uVar23;
  char *local_88;
  ostream *local_80;
  ostream *local_70;
  long ***local_60;
  undefined8 local_58;
  long **local_50 [2];
  long local_40;
  
  poVar20 = *(ostream **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = spv::OpcodeString(param_4);
  sVar7 = strlen((char *)(lVar6 + 2));
  std::__ostream_insert<char,std::char_traits<char>>(poVar20,(char *)(lVar6 + 2),sVar7);
  if (param_4 - 0xf6U < 2) {
    *(undefined4 *)(this + 0xb0) =
         *(undefined4 *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x1c) * 4);
LAB_00101020:
    poVar20 = (ostream *)(spv::ImageFormatString + (long)param_4 * 0x70);
    if (0 < (int)(*(long *)(spv::AccessQualifierString + (long)param_4 * 0x70) - *(long *)poVar20 >>
                 2)) {
      lVar6 = 0;
      poVar21 = (ostream *)&DAT_00104c90;
      local_88 = " ";
      if (0 < param_5) {
        do {
          std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8),local_88,1);
          uVar5 = *(uint *)(*(long *)poVar20 + lVar6 * 4);
          if (uVar5 < 0x25) {
                    /* WARNING: Could not recover jumptable at 0x00101091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(poVar21 + *(int *)(poVar21 + (ulong)uVar5 * 4)))();
            return;
          }
          iVar18 = *(int *)(this + 0x1c) + 1;
          puVar1 = (undefined4 *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x1c) * 4);
          if ((&DAT_001060ac)[(long)(int)uVar5 * 0x28] == '\0') {
            poVar17 = *(ostream **)(this + 8);
            pcVar3 = *(code **)(std::ios::clear + (long)(int)uVar5 * 0x28);
            *(int *)(this + 0x1c) = iVar18;
            pcVar8 = (char *)(*pcVar3)(*puVar1);
            if (pcVar8 == (char *)0x0) {
              std::ios::clear(poVar17 + *(long *)(*(long *)poVar17 + -0x18),
                              *(uint *)(poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0x20) | 1);
            }
            else {
              sVar7 = strlen(pcVar8);
              std::__ostream_insert<char,std::char_traits<char>>(poVar17,pcVar8,sVar7);
            }
          }
          else {
            *(int *)(this + 0x1c) = iVar18;
            outputMask(this,(ulong)uVar5,*puVar1);
          }
LAB_0010140b:
          param_5 = param_5 + -1;
          iVar18 = (int)lVar6;
          lVar6 = lVar6 + 1;
        } while (iVar18 + 1 < (int)(*(long *)(poVar20 + 8) - *(long *)poVar20 >> 2) && 0 < param_5);
      }
    }
  }
  else {
    if (param_4 - 0xfaU < 2) {
      if (*(int *)(this + 0xb0) != 0) {
        piVar16 = *(int **)(this + 0x90);
        if (piVar16 == (int *)(*(long *)(this + 0xa0) + -4)) {
          poVar21 = *(ostream **)(this + 0xa8);
          poVar17 = *(ostream **)(this + 0x88);
          lVar6 = (long)poVar21 - (long)poVar17;
          if (((long)piVar16 - *(long *)(this + 0x98) >> 2) +
              ((lVar6 >> 3) + -1 + (ulong)(poVar21 == (ostream *)0x0)) * 0x80 +
              (*(long *)(this + 0x80) - *(long *)(this + 0x70) >> 2) == 0x1fffffffffffffff) {
            std::__throw_length_error("cannot create std::deque larger than max_size()");
            sVar7 = strlen("BaryCoordNoPerspNV");
            std::__ostream_insert<char,std::char_traits<char>>(local_70,"BaryCoordNoPerspNV",sVar7);
            std::__ostream_insert<char,std::char_traits<char>>(local_70,")",1);
            goto LAB_0010140b;
          }
          uVar9 = *(ulong *)(this + 0x68);
          if (uVar9 - ((long)poVar21 - *(long *)(this + 0x60) >> 3) < 2) {
            poVar20 = (ostream *)((lVar6 >> 3) + 2);
            if ((ulong)((long)poVar20 * 2) < uVar9) {
              poVar21 = poVar21 + (8 - (long)poVar17);
              poVar20 = (ostream *)(*(long *)(this + 0x60) + (uVar9 - (long)poVar20 >> 1) * 8);
              if (poVar20 < poVar17) {
                uVar23 = poVar21 == (ostream *)0x8;
                if ((long)poVar21 < 9) {
LAB_0010281a:
                  if ((bool)uVar23) {
                    *(undefined8 *)poVar20 = *(undefined8 *)poVar17;
                  }
                }
                else {
                  memmove(poVar20,poVar17,(size_t)poVar21);
                }
              }
              else if ((long)poVar21 < 9) {
                if (poVar21 == (ostream *)0x8) {
                  *(undefined8 *)(poVar20 + lVar6) = *(undefined8 *)poVar17;
                }
              }
              else {
                memmove(poVar20 + ((lVar6 + 8) - (long)poVar21),poVar17,(size_t)poVar21);
              }
            }
            else {
              if (uVar9 == 0) {
                poVar21 = (ostream *)0x3;
              }
              else {
                poVar21 = (ostream *)(uVar9 * 2 + 2);
                if ((ulong)poVar21 >> 0x3c != 0) {
                  uVar23 = poVar21 == (ostream *)0x1fffffffffffffff;
                  if (poVar21 < (ostream *)0x2000000000000000) {
                    std::__throw_bad_alloc();
                    sVar7 = strlen("DebugTypeMatrix");
                    std::__ostream_insert<char,std::char_traits<char>>
                              (local_80,"DebugTypeMatrix",sVar7);
                    std::__ostream_insert<char,std::char_traits<char>>(local_80,")",1);
                    goto LAB_0010140b;
                  }
                  std::__throw_bad_array_new_length();
                  goto LAB_0010281a;
                }
              }
              pvVar12 = operator_new((long)poVar21 * 8);
              __src = *(undefined8 **)(this + 0x88);
              poVar20 = (ostream *)
                        ((long)pvVar12 + ((ulong)((long)poVar21 - (long)poVar20) >> 1) * 8);
              sVar7 = (*(long *)(this + 0xa8) + 8) - (long)__src;
              if ((long)sVar7 < 9) {
                if (sVar7 == 8) {
                  *(undefined8 *)poVar20 = *__src;
                }
              }
              else {
                memmove(poVar20,__src,sVar7);
              }
              operator_delete(*(void **)(this + 0x60),*(long *)(this + 0x68) * 8);
              *(ostream **)(this + 0x68) = poVar21;
              *(void **)(this + 0x60) = pvVar12;
            }
            lVar22 = *(long *)poVar20;
            poVar21 = poVar20 + lVar6;
            *(ostream **)(this + 0x88) = poVar20;
            *(ostream **)(this + 0xa8) = poVar21;
            *(long *)(this + 0x78) = lVar22;
            *(long *)(this + 0x80) = lVar22 + 0x200;
            lVar6 = *(long *)poVar21;
            *(long *)(this + 0x98) = lVar6;
            *(long *)(this + 0xa0) = lVar6 + 0x200;
          }
          pvVar12 = operator_new(0x200);
          uVar2 = *(undefined4 *)(this + 0xb0);
          *(void **)(poVar21 + 8) = pvVar12;
          **(undefined4 **)(this + 0x90) = uVar2;
          lVar6 = *(long *)(this + 0xa8);
          *(long *)(this + 0xa8) = lVar6 + 8;
          piVar16 = *(int **)(lVar6 + 8);
          *(int **)(this + 0x98) = piVar16;
          *(int **)(this + 0xa0) = piVar16 + 0x80;
        }
        else {
          *piVar16 = *(int *)(this + 0xb0);
          piVar16 = piVar16 + 1;
        }
        *(int **)(this + 0x90) = piVar16;
        *(undefined4 *)(this + 0xb0) = 0;
      }
      goto LAB_00101020;
    }
    if (param_4 == 0xb) {
      decodeString_abi_cxx11_();
      pppplVar19 = (long ****)((ulong)param_1 * 0x20 + *(long *)(this + 0x40));
      pppplVar10 = (long ****)*pppplVar19;
      if (pppplVar10 == pppplVar19 + 2) {
        if (local_60 == local_50) goto LAB_00101b01;
        *pppplVar19 = local_60;
        pppplVar19[1] = local_58;
        pppplVar19[2] = (long ***)local_50[0];
        local_60 = local_50;
      }
      else if (local_60 == local_50) {
LAB_00101b01:
        if (pppplVar19 != &local_60) {
          if (local_58 != (long ***)0x0) {
            if (local_58 == (long ***)0x1) {
              *(undefined1 *)pppplVar10 = local_50[0]._0_1_;
              pppplVar10 = (long ****)*pppplVar19;
            }
            else {
              uVar5 = (uint)local_58;
              uVar9 = (ulong)local_58 & 0xffffffff;
              if (uVar5 < 8) {
                if (((ulong)local_58 & 4) == 0) {
                  if (uVar5 != 0) {
                    *(undefined1 *)pppplVar10 = local_50[0]._0_1_;
                    if (((ulong)local_58 & 2) == 0) goto LAB_00101b51;
                    *(undefined2 *)((long)pppplVar10 + (uVar9 - 2)) =
                         *(undefined2 *)((long)local_50 + (uVar9 - 2));
                    pppplVar10 = (long ****)*pppplVar19;
                  }
                }
                else {
                  *(undefined4 *)pppplVar10 = local_50[0]._0_4_;
                  *(undefined4 *)((long)pppplVar10 + (uVar9 - 4)) =
                       *(undefined4 *)((long)local_50 + (uVar9 - 4));
                  pppplVar10 = (long ****)*pppplVar19;
                }
              }
              else {
                *pppplVar10 = (long ***)local_50[0];
                *(undefined8 *)((long)pppplVar10 + (((ulong)local_58 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)local_50 + (((ulong)local_58 & 0xffffffff) - 8));
                lVar6 = (long)pppplVar10 - ((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8);
                uVar5 = (int)lVar6 + uVar5 & 0xfffffff8;
                if (7 < uVar5) {
                  uVar15 = 0;
                  do {
                    uVar9 = (ulong)uVar15;
                    uVar15 = uVar15 + 8;
                    *(undefined8 *)(((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8) + uVar9) =
                         *(undefined8 *)((long)local_50 + (uVar9 - lVar6));
                  } while (uVar15 < uVar5);
                }
LAB_00101b51:
                pppplVar10 = (long ****)*pppplVar19;
              }
            }
          }
          pppplVar19[1] = local_58;
          *(undefined1 *)((long)pppplVar10 + (long)local_58) = 0;
        }
      }
      else {
        ppplVar4 = pppplVar19[2];
        *pppplVar19 = local_60;
        pppplVar19[1] = local_58;
        pppplVar19[2] = (long ***)local_50[0];
        local_60 = local_50;
        if (pppplVar10 != (long ****)0x0) {
          local_60 = (long ***)pppplVar10;
          local_50[0] = (long **)ppplVar4;
        }
      }
      local_58 = (long ***)0x0;
      *(undefined1 *)local_60 = 0;
      if (local_60 != local_50) {
        operator_delete(local_60,(long)local_50[0] + 1);
      }
      goto LAB_00101020;
    }
    if (param_1 != 0) {
      lVar6 = (ulong)param_1 * 0x20;
      pcVar8 = (char *)(*(long *)(this + 0x40) + lVar6);
      if (*(long *)(pcVar8 + 8) == 0) {
        switch(param_4) {
        case 0x14:
          std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043cf);
          break;
        case 0x15:
          iVar18 = *(int *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x1c) * 4);
          if (iVar18 == 0x10) {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043a1);
          }
          else if (iVar18 == 0x40) {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043ad);
          }
          else if (iVar18 == 8) {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x10439a);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043a9);
          }
          break;
        case 0x16:
          iVar18 = *(int *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x1c) * 4);
          if (iVar18 == 0x10) {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043b5);
          }
          else {
            if (iVar18 == 0x40) goto LAB_001023c0;
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043bf);
          }
          break;
        case 0x17:
          puVar11 = (ulong *)(*(long *)(this + 0x40) +
                             (ulong)*(uint *)(**(long **)(this + 0x10) +
                                             (long)*(int *)(this + 0x1c) * 4) * 0x20);
          if (puVar11[1] == 0) {
LAB_00101bca:
            std::__cxx11::string::_M_append(pcVar8,0x1043fc);
            if (*(uint *)(**(long **)(this + 0x10) + (long)(*(int *)(this + 0x1c) + 1) * 4) < 0x21)
            {
                    /* WARNING: Could not recover jumptable at 0x00101c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_00104d24 +
                        *(int *)(&DAT_00104d24 +
                                (ulong)*(uint *)(**(long **)(this + 0x10) +
                                                (long)(*(int *)(this + 0x1c) + 1) * 4) * 4)))();
              return;
            }
          }
          else {
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,*puVar11);
            lVar22 = *(long *)(this + 0x40);
            pcVar14 = *(char **)(lVar22 + (ulong)*(uint *)(**(long **)(this + 0x10) +
                                                          (long)*(int *)(this + 0x1c) * 4) * 0x20);
            pcVar8 = strchr(pcVar14,0x38);
            if (pcVar8 == (char *)0x0) {
LAB_001022e6:
              pcVar13 = strstr(pcVar14,"16");
              pcVar8 = (char *)(lVar22 + lVar6);
              if (pcVar13 != (char *)0x0) {
                if (0x3fffffffffffffffU - *(long *)(pcVar8 + 8) < 2) goto LAB_001023b3;
                std::__cxx11::string::_M_append(pcVar8,0x1043f6);
                pcVar8 = (char *)(*(long *)(this + 0x40) + lVar6);
                pcVar14 = *(char **)(*(long *)(this + 0x40) +
                                    (ulong)*(uint *)(**(long **)(this + 0x10) +
                                                    (long)*(int *)(this + 0x1c) * 4) * 0x20);
              }
              pcVar14 = strstr(pcVar14,"64");
              if (pcVar14 != (char *)0x0) {
                if (0x3fffffffffffffffU - *(long *)(pcVar8 + 8) < 2) goto LAB_001023b3;
                std::__cxx11::string::_M_append(pcVar8,0x1043f9);
                pcVar8 = (char *)(*(long *)(this + 0x40) + lVar6);
              }
              if (2 < 0x3fffffffffffffffU - *(long *)(pcVar8 + 8)) goto LAB_00101bca;
            }
            else if (*(long *)((char *)(lVar22 + lVar6) + 8) != 0x3fffffffffffffff) {
              std::__cxx11::string::_M_append((char *)(lVar22 + lVar6),0x1043f4);
              lVar22 = *(long *)(this + 0x40);
              pcVar14 = *(char **)(lVar22 + (ulong)*(uint *)(**(long **)(this + 0x10) +
                                                            (long)*(int *)(this + 0x1c) * 4) * 0x20)
              ;
              goto LAB_001022e6;
            }
LAB_001023b3:
            pcVar8 = "basic_string::append";
            std::__throw_length_error("basic_string::append");
LAB_001023c0:
            std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043c5);
          }
          break;
        default:
          goto switchD_00100fff_caseD_18;
        case 0x1e:
          std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043d4);
          break;
        case 0x20:
          std::__cxx11::string::_M_replace((ulong)pcVar8,0,(char *)0x0,0x1043db);
        }
        goto LAB_00101020;
      }
    }
switchD_00100fff_caseD_18:
    if (param_4 != 0x19) goto LAB_00101020;
    std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," ",1);
    iVar18 = *(int *)(this + 0x1c);
    lVar6 = **(long **)(this + 0x10);
    *(int *)(this + 0x1c) = iVar18 + 1;
    outputId(this,*(uint *)(lVar6 + (long)iVar18 * 4));
    poVar20 = *(ostream **)(this + 8);
    std::__ostream_insert<char,std::char_traits<char>>(poVar20," ",1);
    iVar18 = *(int *)(this + 0x1c);
    lVar6 = **(long **)(this + 0x10);
    *(int *)(this + 0x1c) = iVar18 + 1;
    pcVar8 = (char *)spv::DimensionString(*(int *)(lVar6 + (long)iVar18 * 4));
    if (pcVar8 == (char *)0x0) {
      std::ios::clear(poVar20 + *(long *)(*(long *)poVar20 + -0x18),
                      *(uint *)(poVar20 + *(long *)(*(long *)poVar20 + -0x18) + 0x20) | 1);
    }
    else {
      sVar7 = strlen(pcVar8);
      std::__ostream_insert<char,std::char_traits<char>>(poVar20,pcVar8,sVar7);
    }
    iVar18 = *(int *)(this + 0x1c);
    pcVar8 = " depth";
    *(int *)(this + 0x1c) = iVar18 + 1;
    if (*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) == 0) {
      pcVar8 = "";
    }
    std::__ostream_insert<char,std::char_traits<char>>
              (*(ostream **)(this + 8),pcVar8,
               (ulong)(-(uint)(*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) != 0) & 6));
    iVar18 = *(int *)(this + 0x1c);
    pcVar8 = " array";
    *(int *)(this + 0x1c) = iVar18 + 1;
    if (*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) == 0) {
      pcVar8 = "";
    }
    std::__ostream_insert<char,std::char_traits<char>>
              (*(ostream **)(this + 8),pcVar8,
               (ulong)(-(uint)(*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) != 0) & 6));
    iVar18 = *(int *)(this + 0x1c);
    *(int *)(this + 0x1c) = iVar18 + 1;
    pcVar8 = " multi-sampled";
    if (*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) == 0) {
      pcVar8 = "";
    }
    std::__ostream_insert<char,std::char_traits<char>>
              (*(ostream **)(this + 8),pcVar8,
               (ulong)(-(uint)(*(int *)(**(long **)(this + 0x10) + (long)iVar18 * 4) != 0) & 0xe));
    iVar18 = *(int *)(this + 0x1c);
    lVar6 = **(long **)(this + 0x10);
    *(int *)(this + 0x1c) = iVar18 + 1;
    iVar18 = *(int *)(lVar6 + (long)iVar18 * 4);
    if (iVar18 == 1) {
      std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," sampled",8);
    }
    else if (iVar18 == 2) {
      std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," nonsampled",0xb);
    }
    else if (iVar18 == 0) {
      std::__ostream_insert<char,std::char_traits<char>>(*(ostream **)(this + 8)," runtime",8);
    }
    poVar20 = *(ostream **)(this + 8);
    std::__ostream_insert<char,std::char_traits<char>>(poVar20," format:",8);
    iVar18 = *(int *)(this + 0x1c);
    lVar6 = **(long **)(this + 0x10);
    *(int *)(this + 0x1c) = iVar18 + 1;
    pcVar8 = (char *)spv::ImageFormatString(*(int *)(lVar6 + (long)iVar18 * 4));
    if (pcVar8 == (char *)0x0) {
      std::ios::clear(poVar20 + *(long *)(*(long *)poVar20 + -0x18),
                      *(uint *)(poVar20 + *(long *)(*(long *)poVar20 + -0x18) + 0x20) | 1);
    }
    else {
      sVar7 = strlen(pcVar8);
      std::__ostream_insert<char,std::char_traits<char>>(poVar20,pcVar8,sVar7);
    }
    if (param_5 == 8) {
      poVar20 = *(ostream **)(this + 8);
      std::__ostream_insert<char,std::char_traits<char>>(poVar20," ",1);
      iVar18 = *(int *)(this + 0x1c);
      lVar6 = **(long **)(this + 0x10);
      *(int *)(this + 0x1c) = iVar18 + 1;
      pcVar8 = (char *)spv::AccessQualifierString(*(int *)(lVar6 + (long)iVar18 * 4));
      if (pcVar8 == (char *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          std::ios::clear(poVar20 + *(long *)(*(long *)poVar20 + -0x18),
                          *(uint *)(poVar20 + *(long *)(*(long *)poVar20 + -0x18) + 0x20) | 1);
          return;
        }
      }
      else {
        sVar7 = strlen(pcVar8);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          std::__ostream_insert<char,std::char_traits<char>>(poVar20,pcVar8,sVar7);
          return;
        }
      }
      goto LAB_00102959;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102959:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::SpirvStream::processInstructions() */

void __thiscall spv::SpirvStream::processInstructions(SpirvStream *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ostream *poVar8;
  SpirvStream *this_00;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  
  iVar7 = *(int *)(this + 0x1c);
  iVar14 = *(int *)(this + 0x18);
  if (iVar7 < iVar14) {
    do {
      lVar5 = **(long **)(this + 0x10);
      uVar13 = *(uint *)(lVar5 + (long)iVar7 * 4);
      *(int *)(this + 0x1c) = iVar7 + 1;
      uVar10 = uVar13 & 0xffff;
      uVar13 = uVar13 >> 0x10;
      iVar1 = iVar7 + uVar13;
      if (iVar14 < iVar1) {
                    /* WARNING: Subroutine does not return */
        Kill(*(ostream **)(this + 8),"stream instruction terminated too early");
      }
      if (((byte)strstr[(long)(int)uVar10 * 0x70] & 1) == 0) {
        iVar14 = uVar13 - 1;
        uVar13 = 0;
      }
      else {
        iVar14 = uVar13 - 2;
        *(int *)(this + 0x1c) = iVar7 + 2;
        uVar13 = *(uint *)(lVar5 + 4 + (long)iVar7 * 4);
      }
      uVar9 = 0;
      if (((byte)strstr[(long)(int)uVar10 * 0x70] & 2) != 0) {
        iVar2 = *(int *)(this + 0x1c);
        iVar14 = iVar14 + -1;
        *(int *)(this + 0x1c) = iVar2 + 1;
        uVar9 = (ulong)*(uint *)(lVar5 + (long)iVar2 * 4);
        *(int *)(*(long *)(this + 0x28) + uVar9 * 4) = iVar7;
      }
      outputResultId(this,(uint)uVar9);
      outputTypeId(this,uVar13);
      outputIndent(this);
      this_00 = this;
      disassembleInstruction(this,uVar9,uVar13,uVar10,iVar14);
      if (*(int *)(this + 0x1c) != iVar1) {
        poVar8 = *(ostream **)(this + 8);
        std::__ostream_insert<char,std::char_traits<char>>
                  (poVar8," ERROR, incorrect number of operands consumed.  At ",0x33);
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(this + 0x1c));
        std::__ostream_insert<char,std::char_traits<char>>(poVar8," instead of ",0xc);
        this_00 = (SpirvStream *)std::ostream::operator<<(poVar8,iVar1);
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)this_00," instruction start was ",0x17);
        std::ostream::operator<<((ostream *)this_00,iVar7);
        *(int *)(this + 0x1c) = iVar1;
      }
      plVar3 = *(long **)(this + 8);
      plVar4 = *(long **)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0xf0);
      if (plVar4 == (long *)0x0) {
        std::__throw_bad_cast();
        poVar8 = *(ostream **)((ostream *)this_00 + 8);
        lVar5 = **(long **)((ostream *)this_00 + 0x10);
        iVar7 = (int)((*(long **)((ostream *)this_00 + 0x10))[1] - lVar5 >> 2);
        *(int *)((ostream *)this_00 + 0x18) = iVar7;
        if (3 < iVar7) {
          iVar7 = *(int *)((ostream *)this_00 + 0x1c);
          *(int *)((ostream *)this_00 + 0x1c) = iVar7 + 1;
          if (*(int *)(lVar5 + (long)iVar7 * 4) != 0x7230203) {
            std::__ostream_insert<char,std::char_traits<char>>(poVar8,"Bad magic number",0x10);
            return;
          }
          std::__ostream_insert<char,std::char_traits<char>>(poVar8,"// Module Version ",0x12);
          *(uint *)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0x18) =
               *(uint *)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0x18) & 0xffffffb5 | 8;
          *(int *)((ostream *)this_00 + 0x1c) = *(int *)((ostream *)this_00 + 0x1c) + 1;
          poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
          plVar3 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
          if (plVar3 != (long *)0x0) {
            if ((char)plVar3[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar3 + 0x30))(plVar3,10);
              }
            }
            std::ostream::put((char)poVar8);
            std::ostream::flush();
            poVar8 = *(ostream **)((ostream *)this_00 + 8);
            std::__ostream_insert<char,std::char_traits<char>>
                      (poVar8,"// Generated by (magic number): ",0x20);
            *(uint *)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0x18) =
                 *(uint *)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0x18) & 0xffffffb5 | 8;
            *(int *)((ostream *)this_00 + 0x1c) = *(int *)((ostream *)this_00 + 0x1c) + 1;
            poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
            lVar5 = *(long *)(*(long *)poVar8 + -0x18);
            plVar3 = *(long **)(poVar8 + lVar5 + 0xf0);
            *(uint *)(poVar8 + lVar5 + 0x18) = *(uint *)(poVar8 + lVar5 + 0x18) & 0xffffffb5 | 2;
            if (plVar3 != (long *)0x0) {
              if ((char)plVar3[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
                  (**(code **)(*plVar3 + 0x30))(plVar3,10);
                }
              }
              std::ostream::put((char)poVar8);
              std::ostream::flush();
              iVar7 = *(int *)((ostream *)this_00 + 0x1c);
              lVar5 = **(long **)((ostream *)this_00 + 0x10);
              *(int *)((ostream *)this_00 + 0x1c) = iVar7 + 1;
              uVar13 = *(uint *)(lVar5 + (long)iVar7 * 4);
              uVar12 = (ulong)uVar13;
              *(uint *)((ostream *)this_00 + 0x20) = uVar13;
              uVar9 = *(long *)((ostream *)this_00 + 0x30) - *(long *)((ostream *)this_00 + 0x28) >>
                      2;
              if (uVar9 < uVar12) {
                std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                           ((ostream *)this_00 + 0x28),uVar12 - uVar9);
                uVar12 = (ulong)*(uint *)((ostream *)this_00 + 0x20);
              }
              else if ((uVar12 < uVar9) &&
                      (lVar5 = *(long *)((ostream *)this_00 + 0x28) + uVar12 * 4,
                      *(long *)((ostream *)this_00 + 0x30) != lVar5)) {
                *(long *)((ostream *)this_00 + 0x30) = lVar5;
              }
              puVar6 = *(undefined8 **)((ostream *)this_00 + 0x48);
              uVar9 = (long)puVar6 - *(long *)((ostream *)this_00 + 0x40) >> 5;
              if (uVar9 < uVar12) {
                std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
                _M_default_append((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>
                                   *)((ostream *)this_00 + 0x40),uVar12 - uVar9);
              }
              else if ((uVar12 < uVar9) &&
                      (puVar15 = (undefined8 *)
                                 (*(long *)((ostream *)this_00 + 0x40) + uVar12 * 0x20),
                      puVar11 = puVar15, puVar6 != puVar15)) {
                do {
                  if ((undefined8 *)*puVar11 != puVar11 + 2) {
                    operator_delete((undefined8 *)*puVar11,puVar11[2] + 1);
                  }
                  puVar11 = puVar11 + 4;
                } while (puVar6 != puVar11);
                *(undefined8 **)((ostream *)this_00 + 0x48) = puVar15;
              }
              poVar8 = *(ostream **)((ostream *)this_00 + 8);
              std::__ostream_insert<char,std::char_traits<char>>
                        (poVar8,"// Id\'s are bound by ",0x15);
              poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
              plVar3 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
              if (plVar3 != (long *)0x0) {
                if ((char)plVar3[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
                    (**(code **)(*plVar3 + 0x30))(plVar3,10);
                  }
                }
                std::ostream::put((char)poVar8);
                std::ostream::flush();
                plVar3 = *(long **)((ostream *)this_00 + 8);
                poVar8 = *(ostream **)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0xf0);
                if (poVar8 != (ostream *)0x0) {
                  if (poVar8[0x38] == (ostream)0x0) {
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*(long *)poVar8 + 0x30) != std::ctype<char>::do_widen) {
                      (**(code **)(*(long *)poVar8 + 0x30))(poVar8,10);
                    }
                  }
                  std::ostream::put((char)plVar3);
                  std::ostream::flush();
                  iVar7 = *(int *)((ostream *)this_00 + 0x1c);
                  lVar5 = **(long **)((ostream *)this_00 + 0x10);
                  *(int *)((ostream *)this_00 + 0x1c) = iVar7 + 1;
                  iVar7 = *(int *)(lVar5 + (long)iVar7 * 4);
                  *(int *)((ostream *)this_00 + 0x58) = iVar7;
                  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                    Kill(*(ostream **)((ostream *)this_00 + 8),"bad schema, must be 0");
                  }
                  return;
                }
              }
            }
          }
          std::__throw_bad_cast();
        }
                    /* WARNING: Subroutine does not return */
        Kill(poVar8,"stream is too short");
      }
      if ((char)plVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar4 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar4 + 0x30))(plVar4,10);
        }
      }
      std::ostream::put((char)plVar3);
      std::ostream::flush();
      iVar7 = *(int *)(this + 0x1c);
      iVar14 = *(int *)(this + 0x18);
    } while (iVar7 < iVar14);
  }
  return;
}



/* spv::SpirvStream::validate() */

void __thiscall spv::SpirvStream::validate(SpirvStream *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  ostream *poVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  poVar6 = *(ostream **)(this + 8);
  lVar2 = **(long **)(this + 0x10);
  iVar5 = (int)((*(long **)(this + 0x10))[1] - lVar2 >> 2);
  *(int *)(this + 0x18) = iVar5;
  if (3 < iVar5) {
    iVar5 = *(int *)(this + 0x1c);
    *(int *)(this + 0x1c) = iVar5 + 1;
    if (*(int *)(lVar2 + (long)iVar5 * 4) != 0x7230203) {
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,"Bad magic number",0x10);
      return;
    }
    std::__ostream_insert<char,std::char_traits<char>>(poVar6,"// Module Version ",0x12);
    *(uint *)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0x18) =
         *(uint *)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0x18) & 0xffffffb5 | 8;
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
    plVar3 = *(long **)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0xf0);
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar3 + 0x30))(plVar3,10);
        }
      }
      std::ostream::put((char)poVar6);
      std::ostream::flush();
      poVar6 = *(ostream **)(this + 8);
      std::__ostream_insert<char,std::char_traits<char>>
                (poVar6,"// Generated by (magic number): ",0x20);
      *(uint *)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0x18) =
           *(uint *)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0x18) & 0xffffffb5 | 8;
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
      poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
      lVar2 = *(long *)(*(long *)poVar6 + -0x18);
      plVar3 = *(long **)(poVar6 + lVar2 + 0xf0);
      *(uint *)(poVar6 + lVar2 + 0x18) = *(uint *)(poVar6 + lVar2 + 0x18) & 0xffffffb5 | 2;
      if (plVar3 != (long *)0x0) {
        if ((char)plVar3[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar3 + 0x30))(plVar3,10);
          }
        }
        std::ostream::put((char)poVar6);
        std::ostream::flush();
        iVar5 = *(int *)(this + 0x1c);
        lVar2 = **(long **)(this + 0x10);
        *(int *)(this + 0x1c) = iVar5 + 1;
        uVar1 = *(uint *)(lVar2 + (long)iVar5 * 4);
        uVar9 = (ulong)uVar1;
        *(uint *)(this + 0x20) = uVar1;
        uVar7 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 2;
        if (uVar7 < uVar9) {
          std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x28),
                     uVar9 - uVar7);
          uVar9 = (ulong)*(uint *)(this + 0x20);
        }
        else if ((uVar9 < uVar7) &&
                (lVar2 = *(long *)(this + 0x28) + uVar9 * 4, *(long *)(this + 0x30) != lVar2)) {
          *(long *)(this + 0x30) = lVar2;
        }
        puVar4 = *(undefined8 **)(this + 0x48);
        uVar7 = (long)puVar4 - *(long *)(this + 0x40) >> 5;
        if (uVar7 < uVar9) {
          std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_default_append
                    ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                     (this + 0x40),uVar9 - uVar7);
        }
        else if ((uVar9 < uVar7) &&
                (puVar10 = (undefined8 *)(*(long *)(this + 0x40) + uVar9 * 0x20), puVar8 = puVar10,
                puVar4 != puVar10)) {
          do {
            if ((undefined8 *)*puVar8 != puVar8 + 2) {
              operator_delete((undefined8 *)*puVar8,puVar8[2] + 1);
            }
            puVar8 = puVar8 + 4;
          } while (puVar4 != puVar8);
          *(undefined8 **)(this + 0x48) = puVar10;
        }
        poVar6 = *(ostream **)(this + 8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar6,"// Id\'s are bound by ",0x15);
        poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
        plVar3 = *(long **)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0xf0);
        if (plVar3 != (long *)0x0) {
          if ((char)plVar3[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar3 + 0x30))(plVar3,10);
            }
          }
          std::ostream::put((char)poVar6);
          std::ostream::flush();
          plVar3 = *(long **)(this + 8);
          poVar6 = *(ostream **)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0xf0);
          if (poVar6 != (ostream *)0x0) {
            if (poVar6[0x38] == (ostream)0x0) {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*(long *)poVar6 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*(long *)poVar6 + 0x30))(poVar6,10);
              }
            }
            std::ostream::put((char)plVar3);
            std::ostream::flush();
            iVar5 = *(int *)(this + 0x1c);
            lVar2 = **(long **)(this + 0x10);
            *(int *)(this + 0x1c) = iVar5 + 1;
            iVar5 = *(int *)(lVar2 + (long)iVar5 * 4);
            *(int *)(this + 0x58) = iVar5;
            if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              Kill(*(ostream **)(this + 8),"bad schema, must be 0");
            }
            return;
          }
        }
      }
    }
    std::__throw_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  Kill(poVar6,"stream is too short");
}



/* spv::Disassemble(std::ostream&, std::vector<unsigned int, std::allocator<unsigned int> > const&)
    */

void spv::Disassemble(ostream *param_1,vector *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined **local_d8;
  ostream *local_d0;
  vector *local_c8;
  undefined4 local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  void *local_78;
  long local_70;
  void *local_68;
  void *pvStack_60;
  long local_58;
  undefined8 *puStack_50;
  void *local_48;
  void *pvStack_40;
  long local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_d8 = &PTR__SpirvStream_001054a8;
  local_bc = 0;
  local_70 = 8;
  local_d0 = param_1;
  local_c8 = param_2;
  pvVar3 = operator_new(0x40);
  local_78 = pvVar3;
  local_68 = operator_new(0x200);
  puStack_50 = (undefined8 *)((long)pvVar3 + 0x18);
  local_28 = 0;
  *puStack_50 = local_68;
  local_58 = (long)local_68 + 0x200;
  pvStack_60 = local_68;
  local_48 = local_68;
  pvStack_40 = local_68;
  local_38 = local_58;
  puStack_30 = puStack_50;
  spv::Parameterize();
  GlslStd450DebugNames._0_8_ = _LC166;
  pcVar4 = (code *)(GlslStd450DebugNames + 0x10);
  do {
    *(char **)pcVar4 = "Unknown";
    *(char **)(pcVar4 + 8) = "Unknown";
    pcVar5 = pcVar4 + 0x20;
    *(char **)(pcVar4 + 0x10) = "Unknown";
    *(char **)(pcVar4 + 0x18) = "Unknown";
    pcVar4 = pcVar5;
  } while (pcVar5 != std::ctype<char>::do_widen);
  GlslStd450DebugNames._8_8_ = _LC167;
  GlslStd450DebugNames._16_8_ = _LC168;
  GlslStd450DebugNames._24_8_ = _LC169;
  GlslStd450DebugNames._32_8_ = &_LC170;
  GlslStd450DebugNames._40_8_ = &_LC171;
  GlslStd450DebugNames._48_8_ = _LC172;
  GlslStd450DebugNames._56_8_ = _LC173;
  GlslStd450DebugNames._64_8_ = _LC174;
  GlslStd450DebugNames._72_8_ = &_LC175;
  GlslStd450DebugNames._80_8_ = _LC176;
  GlslStd450DebugNames._88_8_ = _LC177;
  GlslStd450DebugNames._96_8_ = _LC178;
  GlslStd450DebugNames._104_8_ = &_LC179;
  GlslStd450DebugNames._112_8_ = &_LC180;
  GlslStd450DebugNames._120_8_ = &_LC181;
  GlslStd450DebugNames._128_8_ = &_LC182;
  GlslStd450DebugNames._136_8_ = &_LC183;
  GlslStd450DebugNames._144_8_ = &_LC184;
  GlslStd450DebugNames._152_8_ = &_LC185;
  GlslStd450DebugNames._160_8_ = &_LC186;
  GlslStd450DebugNames._168_8_ = &_LC187;
  GlslStd450DebugNames._176_8_ = _LC188;
  GlslStd450DebugNames._184_8_ = _LC189;
  GlslStd450DebugNames._192_8_ = _LC190;
  GlslStd450DebugNames._200_8_ = _LC191;
  GlslStd450DebugNames._208_8_ = &_LC192;
  GlslStd450DebugNames._216_8_ = &_LC193;
  GlslStd450DebugNames._224_8_ = &_LC194;
  GlslStd450DebugNames._232_8_ = &_LC195;
  GlslStd450DebugNames._240_8_ = &_LC196;
  GlslStd450DebugNames._248_8_ = &_LC197;
  GlslStd450DebugNames._256_8_ = _LC198;
  GlslStd450DebugNames._264_8_ = _LC199;
  GlslStd450DebugNames._272_8_ = _LC200;
  GlslStd450DebugNames._280_8_ = &_LC201;
  GlslStd450DebugNames._288_8_ = _LC202;
  GlslStd450DebugNames._296_8_ = &_LC203;
  GlslStd450DebugNames._304_8_ = &_LC204;
  GlslStd450DebugNames._312_8_ = &_LC205;
  GlslStd450DebugNames._320_8_ = &_LC206;
  GlslStd450DebugNames._328_8_ = &_LC207;
  GlslStd450DebugNames._336_8_ = &_LC208;
  GlslStd450DebugNames._344_8_ = _LC209;
  GlslStd450DebugNames._352_8_ = _LC210;
  GlslStd450DebugNames._360_8_ = _LC211;
  GlslStd450DebugNames._368_8_ = &_LC212;
  GlslStd450DebugNames._384_8_ = &_LC213;
  GlslStd450DebugNames._392_8_ = _LC214;
  GlslStd450DebugNames._400_8_ = &_LC215;
  GlslStd450DebugNames._408_8_ = _LC216;
  GlslStd450DebugNames._416_8_ = _LC217;
  GlslStd450DebugNames._424_8_ = _LC218;
  GlslStd450DebugNames._432_8_ = _LC219;
  GlslStd450DebugNames._440_8_ = _LC220;
  GlslStd450DebugNames._448_8_ = _LC221;
  GlslStd450DebugNames._456_8_ = _LC222;
  GlslStd450DebugNames._464_8_ = _LC223;
  GlslStd450DebugNames._472_8_ = _LC224;
  GlslStd450DebugNames._480_8_ = _LC225;
  GlslStd450DebugNames._488_8_ = _LC226;
  GlslStd450DebugNames._496_8_ = _LC227;
  GlslStd450DebugNames._504_8_ = _LC228;
  GlslStd450DebugNames._512_8_ = _LC229;
  GlslStd450DebugNames._520_8_ = _LC230;
  GlslStd450DebugNames._528_8_ = _LC231;
  GlslStd450DebugNames._536_8_ = _LC232;
  GlslStd450DebugNames._544_8_ = _LC233;
  GlslStd450DebugNames._552_8_ = _LC234;
  GlslStd450DebugNames._560_8_ = _LC235;
  GlslStd450DebugNames._568_8_ = _LC236;
  GlslStd450DebugNames._576_8_ = _LC237;
  GlslStd450DebugNames._584_8_ = _LC238;
  GlslStd450DebugNames._592_8_ = _LC239;
  GlslStd450DebugNames._600_8_ = _LC240;
  GlslStd450DebugNames._608_8_ = _LC241;
  GlslStd450DebugNames._616_8_ = _LC242;
  GlslStd450DebugNames._624_8_ = _LC243;
  GlslStd450DebugNames._632_8_ = &_LC244;
  GlslStd450DebugNames._640_8_ = &_LC245;
  GlslStd450DebugNames._648_8_ = _LC246;
  SpirvStream::validate((SpirvStream *)&local_d8);
  SpirvStream::processInstructions((SpirvStream *)&local_d8);
  pvVar3 = local_78;
  local_d8 = &PTR__SpirvStream_001054a8;
  if (local_78 != (void *)0x0) {
    puVar7 = puStack_30 + 1;
    for (puVar6 = puStack_50; puVar6 < puVar7; puVar6 = puVar6 + 1) {
      operator_delete((void *)*puVar6,0x200);
    }
    operator_delete(pvVar3,local_70 * 8);
  }
  uVar2 = local_90._0_8_;
  uVar1 = local_a0._8_8_;
  for (puVar7 = (undefined8 *)local_a0._8_8_; (undefined8 *)uVar2 != puVar7; puVar7 = puVar7 + 4) {
    if ((undefined8 *)*puVar7 != puVar7 + 2) {
      operator_delete((undefined8 *)*puVar7,puVar7[2] + 1);
    }
  }
  if ((undefined8 *)uVar1 != (undefined8 *)0x0) {
    operator_delete((void *)uVar1,local_90._8_8_ - uVar1);
  }
  if ((void *)local_b0._0_8_ == (void *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete((void *)local_b0._0_8_,local_a0._0_8_ - local_b0._0_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* spv::SpirvStream::~SpirvStream() */

void __thiscall spv::SpirvStream::~SpirvStream(SpirvStream *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__SpirvStream_001054a8;
  pvVar4 = *(void **)(this + 0x60);
  if (pvVar4 != (void *)0x0) {
    lVar1 = *(long *)(this + 0xa8);
    puVar2 = *(undefined8 **)(this + 0x88);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar4 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar4,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar4 = *(void **)(this + 0x60);
    }
    operator_delete(pvVar4,*(long *)(this + 0x68) * 8);
  }
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar2 != puVar3) {
    do {
      if ((undefined8 *)*puVar3 != puVar3 + 2) {
        operator_delete((undefined8 *)*puVar3,puVar3[2] + 1);
      }
      puVar3 = puVar3 + 4;
    } while (puVar2 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,*(long *)(this + 0x50) - (long)puVar3);
  }
  pvVar4 = *(void **)(this + 0x28);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x38) - (long)pvVar4);
    return;
  }
  return;
}



/* spv::SpirvStream::~SpirvStream() */

void __thiscall spv::SpirvStream::~SpirvStream(SpirvStream *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__SpirvStream_001054a8;
  pvVar4 = *(void **)(this + 0x60);
  if (pvVar4 != (void *)0x0) {
    lVar1 = *(long *)(this + 0xa8);
    puVar2 = *(undefined8 **)(this + 0x88);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar4 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar4,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar4 = *(void **)(this + 0x60);
    }
    operator_delete(pvVar4,*(long *)(this + 0x68) * 8);
  }
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar2 != puVar3) {
    do {
      if ((undefined8 *)*puVar3 != puVar3 + 2) {
        operator_delete((undefined8 *)*puVar3,puVar3[2] + 1);
      }
      puVar3 = puVar3 + 4;
    } while (puVar2 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,*(long *)(this + 0x50) - (long)puVar3);
  }
  pvVar4 = *(void **)(this + 0x28);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x38) - (long)pvVar4);
  }
  operator_delete(this,0xb8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<unsigned int, std::allocator<unsigned int> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined4 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined4 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 2)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 4 - (long)puVar6) + -4;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined4 *)((long)pvVar3 + sVar4);
    }
    *(undefined4 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 2;
  if (0x1fffffffffffffff - uVar2 < param_1) {
    std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0x1fffffffffffffff;
    if (uVar1 < 0x2000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_001050f4;
LAB_00105108:
    if (sVar4 != 0) goto LAB_001051d8;
    if (pvVar3 == (void *)0x0) goto LAB_0010511a;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0x1fffffffffffffff < uVar2) {
      uVar2 = 0x1fffffffffffffff;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_001050f4:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_00105108;
    }
LAB_001051d8:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010511a:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_default_append
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  if (param_1 == 0) {
    return;
  }
  plVar2 = *(long **)(this + 8);
  plVar10 = *(long **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)plVar2 >> 5)) {
    plVar10 = plVar2;
    do {
      plVar10[1] = 0;
      plVar11 = plVar10 + 4;
      *plVar10 = (long)(plVar10 + 2);
      *(undefined1 *)(plVar10 + 2) = 0;
      plVar10 = plVar11;
    } while (plVar11 != plVar2 + param_1 * 4);
    *(long **)(this + 8) = plVar11;
    return;
  }
  uVar4 = (long)plVar2 - (long)plVar10 >> 5;
  if (0x3ffffffffffffff - uVar4 < param_1) {
    std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = param_1 + uVar4;
  uVar13 = 0x3ffffffffffffff;
  if (uVar1 < 0x400000000000000) {
    uVar13 = uVar1;
  }
  if ((param_1 <= uVar4) && (uVar13 = uVar4 * 2, 0x3ffffffffffffff < uVar13)) {
    uVar13 = 0x3ffffffffffffff;
  }
  puVar5 = (undefined8 *)operator_new(uVar13 * 0x20);
  plVar11 = (long *)((long)puVar5 + ((long)plVar2 - (long)plVar10));
  plVar6 = plVar11;
  do {
    plVar6[1] = 0;
    plVar7 = plVar6 + 4;
    *plVar6 = (long)(plVar6 + 2);
    *(undefined1 *)(plVar6 + 2) = 0;
    plVar6 = plVar7;
  } while (plVar7 != plVar11 + param_1 * 4);
  plVar11 = plVar10 + 2;
  puVar12 = puVar5;
  if (plVar10 != plVar2) {
    do {
      plVar6 = puVar12 + 2;
      lVar9 = plVar11[-1];
      *puVar12 = plVar6;
      if (plVar11 == (long *)plVar11[-2]) {
        uVar4 = lVar9 + 1;
        uVar3 = (uint)uVar4;
        if (uVar3 < 8) {
          if ((uVar4 & 4) == 0) {
            if (uVar3 != 0) {
              *(char *)plVar6 = (char)*plVar11;
              if ((uVar4 & 2) == 0) goto LAB_00105392;
              *(undefined2 *)((long)puVar12 + (uVar4 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar11 + ((uVar4 & 0xffffffff) - 2));
              lVar9 = plVar11[-1];
            }
          }
          else {
            *(int *)plVar6 = (int)*plVar11;
            *(undefined4 *)((long)puVar12 + (uVar4 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar11 + ((uVar4 & 0xffffffff) - 4));
            lVar9 = plVar11[-1];
          }
        }
        else {
          *plVar6 = *plVar11;
          *(undefined8 *)((long)puVar12 + (uVar4 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar11 + ((uVar4 & 0xffffffff) - 8));
          lVar9 = (long)plVar6 - ((ulong)(puVar12 + 3) & 0xfffffffffffffff8);
          uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
          if (7 < uVar3) {
            uVar8 = 0;
            do {
              uVar4 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(puVar12 + 3) & 0xfffffffffffffff8) + uVar4) =
                   *(undefined8 *)((long)plVar11 + (uVar4 - lVar9));
            } while (uVar8 < uVar3);
          }
LAB_00105392:
          lVar9 = plVar11[-1];
        }
      }
      else {
        *puVar12 = (long *)plVar11[-2];
        puVar12[2] = *plVar11;
      }
      plVar11 = plVar11 + 4;
      puVar12[1] = lVar9;
      puVar12 = puVar12 + 4;
    } while (plVar2 + 2 != plVar11);
  }
  if (plVar10 != (long *)0x0) {
    operator_delete(plVar10,*(long *)(this + 0x10) - (long)plVar10);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar5 + uVar1 * 4;
  *(undefined8 **)(this + 0x10) = puVar5 + uVar13 * 4;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::SpirvStream::~SpirvStream() */

void __thiscall spv::SpirvStream::~SpirvStream(SpirvStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


