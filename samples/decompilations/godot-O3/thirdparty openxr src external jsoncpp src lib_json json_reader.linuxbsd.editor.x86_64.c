
/* Json::CharReaderBuilder::~CharReaderBuilder() */

void __thiscall Json::CharReaderBuilder::~CharReaderBuilder(CharReaderBuilder *this)

{
  *(undefined ***)this = &PTR__CharReaderBuilder_0010d9f8;
  Json::Value::~Value((Value *)(this + 8));
  return;
}



/* Json::CharReaderBuilder::~CharReaderBuilder() */

void __thiscall Json::CharReaderBuilder::~CharReaderBuilder(CharReaderBuilder *this)

{
  *(undefined ***)this = &PTR__CharReaderBuilder_0010d9f8;
  Json::Value::~Value((Value *)(this + 8));
  operator_delete(this,0x30);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char const* std::__find_if<char const*,
   __gnu_cxx::__ops::_Iter_pred<Json::OurReader::containsNewLine(char const*, char
   const*)::{lambda(char)#1}> >(char const*, char const*,
   __gnu_cxx::__ops::_Iter_pred<Json::OurReader::containsNewLine(char const*, char
   const*)::{lambda(char)#1}>, std::random_access_iterator_tag) [clone .isra.0] */

char * std::
       __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::OurReader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                 (char *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 2) {
    pcVar1 = param_1 + (lVar2 >> 2) * 4;
    do {
      if (*param_1 == '\n') {
        return param_1;
      }
      if (*param_1 == '\r') {
        return param_1;
      }
      if ((param_1[1] == '\n') || (param_1[1] == '\r')) {
        return param_1 + 1;
      }
      if ((param_1[2] == '\n') || (param_1[2] == '\r')) {
        return param_1 + 2;
      }
      if ((param_1[3] == '\n') || (param_1[3] == '\r')) {
        return param_1 + 3;
      }
      param_1 = param_1 + 4;
    } while (param_1 != pcVar1);
    lVar2 = (long)param_2 - (long)param_1;
  }
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_001000c0;
    }
    if (*param_1 == '\n') {
      return param_1;
    }
    if (*param_1 == '\r') {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\n') {
    return param_1;
  }
  if (*param_1 == '\r') {
    return param_1;
  }
  param_1 = param_1 + 1;
LAB_001000c0:
  if ((*param_1 != '\n') && (*param_1 != '\r')) {
    return param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char const* std::__find_if<char const*,
   __gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char const*, char
   const*)::{lambda(char)#1}> >(char const*, char const*,
   __gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char const*, char
   const*)::{lambda(char)#1}>, std::random_access_iterator_tag) [clone .isra.0] */

char * std::
       __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                 (char *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 2) {
    pcVar1 = param_1 + (lVar2 >> 2) * 4;
    do {
      if (*param_1 == '\n') {
        return param_1;
      }
      if (*param_1 == '\r') {
        return param_1;
      }
      if ((param_1[1] == '\n') || (param_1[1] == '\r')) {
        return param_1 + 1;
      }
      if ((param_1[2] == '\n') || (param_1[2] == '\r')) {
        return param_1 + 2;
      }
      if ((param_1[3] == '\n') || (param_1[3] == '\r')) {
        return param_1 + 3;
      }
      param_1 = param_1 + 4;
    } while (param_1 != pcVar1);
    lVar2 = (long)param_2 - (long)param_1;
  }
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_00100180;
    }
    if (*param_1 == '\n') {
      return param_1;
    }
    if (*param_1 == '\r') {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\n') {
    return param_1;
  }
  if (*param_1 == '\r') {
    return param_1;
  }
  param_1 = param_1 + 1;
LAB_00100180:
  if ((*param_1 != '\n') && (*param_1 != '\r')) {
    return param_2;
  }
  return param_1;
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
      goto LAB_00100214;
    }
    if (__n == 0) goto LAB_00100214;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100214:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_001002c4;
    }
    if (__n == 0) goto LAB_001002c4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001002c4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::deque<Json::OurReader::ErrorInfo, std::allocator<Json::OurReader::ErrorInfo>
   >::_M_destroy_data_aux(std::_Deque_iterator<Json::OurReader::ErrorInfo,
   Json::OurReader::ErrorInfo&, Json::OurReader::ErrorInfo*>,
   std::_Deque_iterator<Json::OurReader::ErrorInfo, Json::OurReader::ErrorInfo&,
   Json::OurReader::ErrorInfo*>) [clone .isra.0] */

void std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
     _M_destroy_data_aux(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)param_1[3];
  plVar1 = (long *)param_2[3];
  plVar5 = plVar2 + 1;
  if (plVar5 < plVar1) {
    do {
      lVar3 = *plVar5;
      lVar4 = lVar3 + 0x200;
      do {
        if (*(void **)(lVar3 + 0x18) != (void *)(lVar3 + 0x28)) {
          operator_delete(*(void **)(lVar3 + 0x18),*(long *)(lVar3 + 0x28) + 1);
        }
        lVar3 = lVar3 + 0x40;
      } while (lVar4 != lVar3);
      plVar1 = (long *)param_2[3];
      plVar5 = plVar5 + 1;
    } while (plVar5 < plVar1);
    plVar2 = (long *)param_1[3];
  }
  lVar4 = *param_1;
  if (plVar1 == plVar2) {
    lVar3 = *param_2;
    if (lVar3 != lVar4) {
      do {
        if (*(void **)(lVar4 + 0x18) != (void *)(lVar4 + 0x28)) {
          operator_delete(*(void **)(lVar4 + 0x18),*(long *)(lVar4 + 0x28) + 1);
        }
        lVar4 = lVar4 + 0x40;
      } while (lVar3 != lVar4);
      return;
    }
  }
  else {
    lVar3 = param_1[2];
    for (; lVar3 != lVar4; lVar4 = lVar4 + 0x40) {
      if (*(void **)(lVar4 + 0x18) != (void *)(lVar4 + 0x28)) {
        operator_delete(*(void **)(lVar4 + 0x18),*(long *)(lVar4 + 0x28) + 1);
      }
    }
    lVar4 = *param_2;
    for (lVar3 = param_2[1]; lVar4 != lVar3; lVar3 = lVar3 + 0x40) {
      if (*(void **)(lVar3 + 0x18) != (void *)(lVar3 + 0x28)) {
        operator_delete(*(void **)(lVar3 + 0x18),*(long *)(lVar3 + 0x28) + 1);
      }
    }
  }
  return;
}



/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  string *__dest;
  undefined8 *puVar5;
  void *pvVar6;
  long *__src;
  char *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *__dest_00;
  void *unaff_R15;
  long in_FS_OFFSET;
  undefined1 uVar12;
  size_t local_38;
  long local_30;
  
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = __dest;
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    local_38 = sVar4;
    if (sVar4 < 0x10) {
      if (sVar4 == 1) {
        this[0x10] = (string)*param_1;
        goto LAB_001004a3;
      }
      if (sVar4 == 0) goto LAB_001004a3;
    }
    else {
      __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
      *(string **)this = __dest;
      *(size_t *)(this + 0x10) = local_38;
    }
    memcpy(__dest,param_1,sVar4);
    __dest = *(string **)this;
LAB_001004a3:
    *(size_t *)(this + 8) = local_38;
    __dest[local_38] = (string)0x0;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pcVar7 = "basic_string: construction from null is not valid";
  std::__throw_logic_error("basic_string: construction from null is not valid");
  puVar1 = *(undefined8 **)((long)pcVar7 + 0x30);
  if (puVar1 != (undefined8 *)(*(long *)((long)pcVar7 + 0x40) + -8)) {
    puVar5 = puVar1 + 1;
    *puVar1 = *(undefined8 *)param_1;
    goto LAB_00100560;
  }
  plVar9 = *(long **)((long)pcVar7 + 0x48);
  __src = *(long **)((long)pcVar7 + 0x28);
  lVar11 = (long)plVar9 - (long)__src;
  if (((long)puVar1 - *(long *)((long)pcVar7 + 0x38) >> 3) +
      ((lVar11 >> 3) + -1 + (ulong)(plVar9 == (long *)0x0)) * 0x40 +
      (*(long *)((long)pcVar7 + 0x20) - *(long *)((long)pcVar7 + 0x10) >> 3) == 0xfffffffffffffff) {
LAB_0010079c:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar8 = *(ulong *)((long)pcVar7 + 8);
  if (uVar8 - ((long)plVar9 - *(long *)pcVar7 >> 3) < 2) {
    __dest_00 = (long *)((lVar11 >> 3) + 2);
    if ((ulong)((long)__dest_00 * 2) < uVar8) {
      __dest_00 = (long *)(*(long *)pcVar7 + (uVar8 - (long)__dest_00 >> 1) * 8);
      sVar4 = (long)plVar9 + (8 - (long)__src);
      if (__dest_00 < __src) {
        if ((long)sVar4 < 9) {
          if (sVar4 == 8) {
            *__dest_00 = *__src;
          }
        }
        else {
          memmove(__dest_00,__src,sVar4);
        }
      }
      else if ((long)sVar4 < 9) {
        if (sVar4 == 8) {
          *(long *)((long)__dest_00 + lVar11) = *__src;
        }
      }
      else {
        memmove((void *)((long)__dest_00 + ((lVar11 + 8) - sVar4)),__src,sVar4);
      }
    }
    else {
      if (uVar8 == 0) {
        uVar8 = 0x18;
        uVar10 = 3;
LAB_0010065f:
        unaff_R15 = operator_new(uVar8);
        __src = *(long **)((long)pcVar7 + 0x28);
        __dest_00 = (long *)((long)unaff_R15 + (uVar10 - (long)__dest_00 >> 1) * 8);
        sVar4 = (*(long *)((long)pcVar7 + 0x48) + 8) - (long)__src;
        uVar12 = sVar4 == 8;
        if ((long)sVar4 < 9) goto LAB_00100763;
        memmove(__dest_00,__src,sVar4);
      }
      else {
        uVar10 = (uVar8 + 1) * 2;
        if (uVar10 < 0x1000000000000000) {
          uVar8 = (uVar8 + 1) * 0x10;
          goto LAB_0010065f;
        }
        uVar10 = uVar10 >> 0x3d;
        uVar12 = uVar10 == 0;
        if ((bool)uVar12) {
          std::__throw_bad_alloc();
          goto LAB_0010079c;
        }
        std::__throw_bad_array_new_length();
LAB_00100763:
        if ((bool)uVar12) {
          *__dest_00 = *__src;
        }
      }
      operator_delete(*(void **)pcVar7,*(long *)((long)pcVar7 + 8) * 8);
      *(void **)pcVar7 = unaff_R15;
      *(ulong *)((long)pcVar7 + 8) = uVar10;
    }
    lVar3 = *__dest_00;
    plVar9 = (long *)((long)__dest_00 + lVar11);
    *(long **)((long)pcVar7 + 0x28) = __dest_00;
    *(long **)((long)pcVar7 + 0x48) = plVar9;
    *(long *)((long)pcVar7 + 0x18) = lVar3;
    *(long *)((long)pcVar7 + 0x20) = lVar3 + 0x200;
    lVar11 = *plVar9;
    *(long *)((long)pcVar7 + 0x38) = lVar11;
    *(long *)((long)pcVar7 + 0x40) = lVar11 + 0x200;
  }
  pvVar6 = operator_new(0x200);
  uVar2 = *(undefined8 *)param_1;
  plVar9[1] = (long)pvVar6;
  **(undefined8 **)((long)pcVar7 + 0x30) = uVar2;
  puVar5 = *(undefined8 **)(*(long *)((long)pcVar7 + 0x48) + 8);
  *(long *)((long)pcVar7 + 0x48) = *(long *)((long)pcVar7 + 0x48) + 8;
  *(undefined8 **)((long)pcVar7 + 0x38) = puVar5;
  *(undefined8 **)((long)pcVar7 + 0x40) = puVar5 + 0x40;
LAB_00100560:
  *(undefined8 **)((long)pcVar7 + 0x30) = puVar5;
  return;
}



/* Json::Value*& std::deque<Json::Value*, std::allocator<Json::Value*>
   >::emplace_back<Json::Value*>(Json::Value*&&) [clone .isra.0] */

Value ** __thiscall
std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
          (deque<Json::Value*,std::allocator<Json::Value*>> *this,Value **param_1)

{
  undefined8 *puVar1;
  Value *pVVar2;
  long lVar3;
  Value **ppVVar4;
  void *pvVar5;
  size_t sVar6;
  long *__src;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar11;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 != (undefined8 *)(*(long *)(this + 0x40) + -8)) {
    ppVVar4 = (Value **)(puVar1 + 1);
    *puVar1 = *param_1;
    goto LAB_00100560;
  }
  plVar8 = *(long **)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar10 = (long)plVar8 - (long)__src;
  if (((long)puVar1 - *(long *)(this + 0x38) >> 3) +
      ((lVar10 >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 0x40 +
      (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 3) == 0xfffffffffffffff) {
LAB_0010079c:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar7 = *(ulong *)(this + 8);
  if (uVar7 - ((long)plVar8 - *(long *)this >> 3) < 2) {
    __dest = (long *)((lVar10 >> 3) + 2);
    if ((ulong)((long)__dest * 2) < uVar7) {
      __dest = (long *)(*(long *)this + (uVar7 - (long)__dest >> 1) * 8);
      sVar6 = (long)plVar8 + (8 - (long)__src);
      if (__dest < __src) {
        if ((long)sVar6 < 9) {
          if (sVar6 == 8) {
            *__dest = *__src;
          }
        }
        else {
          memmove(__dest,__src,sVar6);
        }
      }
      else if ((long)sVar6 < 9) {
        if (sVar6 == 8) {
          *(long *)((long)__dest + lVar10) = *__src;
        }
      }
      else {
        memmove((void *)((long)__dest + ((lVar10 + 8) - sVar6)),__src,sVar6);
      }
    }
    else {
      if (uVar7 == 0) {
        uVar7 = 0x18;
        uVar9 = 3;
LAB_0010065f:
        unaff_R15 = operator_new(uVar7);
        __src = *(long **)(this + 0x28);
        __dest = (long *)((long)unaff_R15 + (uVar9 - (long)__dest >> 1) * 8);
        sVar6 = (*(long *)(this + 0x48) + 8) - (long)__src;
        uVar11 = sVar6 == 8;
        if ((long)sVar6 < 9) goto LAB_00100763;
        memmove(__dest,__src,sVar6);
      }
      else {
        uVar9 = (uVar7 + 1) * 2;
        if (uVar9 < 0x1000000000000000) {
          uVar7 = (uVar7 + 1) * 0x10;
          goto LAB_0010065f;
        }
        uVar9 = uVar9 >> 0x3d;
        uVar11 = uVar9 == 0;
        if ((bool)uVar11) {
          std::__throw_bad_alloc();
          goto LAB_0010079c;
        }
        std::__throw_bad_array_new_length();
LAB_00100763:
        if ((bool)uVar11) {
          *__dest = *__src;
        }
      }
      operator_delete(*(void **)this,*(long *)(this + 8) * 8);
      *(void **)this = unaff_R15;
      *(ulong *)(this + 8) = uVar9;
    }
    lVar3 = *__dest;
    plVar8 = (long *)((long)__dest + lVar10);
    *(long **)(this + 0x28) = __dest;
    *(long **)(this + 0x48) = plVar8;
    *(long *)(this + 0x18) = lVar3;
    *(long *)(this + 0x20) = lVar3 + 0x200;
    lVar10 = *plVar8;
    *(long *)(this + 0x38) = lVar10;
    *(long *)(this + 0x40) = lVar10 + 0x200;
  }
  pvVar5 = operator_new(0x200);
  pVVar2 = *param_1;
  plVar8[1] = (long)pvVar5;
  **(undefined8 **)(this + 0x30) = pVVar2;
  ppVVar4 = *(Value ***)(*(long *)(this + 0x48) + 8);
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
  *(Value ***)(this + 0x38) = ppVVar4;
  *(Value ***)(this + 0x40) = ppVVar4 + 0x40;
LAB_00100560:
  *(Value ***)(this + 0x30) = ppVVar4;
  return ppVVar4;
}



/* Json::Features::Features() */

void __thiscall Json::Features::Features(Features *this)

{
  *(undefined4 *)this = 1;
  return;
}



/* Json::Features::all() */

undefined8 Json::Features::all(void)

{
  return 1;
}



/* Json::Features::strictMode() */

undefined8 Json::Features::strictMode(void)

{
  return 0x100;
}



/* Json::Reader::containsNewLine(char const*, char const*) */

bool Json::Reader::containsNewLine(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = std::
           __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                     ();
  return param_2 != pcVar1;
}



/* Json::Reader::skipSpaces() */

void __thiscall Json::Reader::skipSpaces(Reader *this)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(this + 0xd0);
  while (((pbVar1 != *(byte **)(this + 200) && (*pbVar1 < 0x21)) &&
         ((0x100002600U >> ((ulong)*pbVar1 & 0x3f) & 1) != 0))) {
    pbVar1 = pbVar1 + 1;
    *(byte **)(this + 0xd0) = pbVar1;
  }
  return;
}



/* Json::Reader::match(char const*, int) */

undefined8 __thiscall Json::Reader::match(Reader *this,char *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0xd0);
  lVar5 = (long)param_2;
  uVar4 = 0;
  if (lVar5 <= *(long *)(this + 200) - lVar2) {
    lVar3 = lVar5;
    while (lVar3 != lVar5 - (ulong)(uint)param_2) {
      pcVar1 = (char *)(lVar2 + -1 + lVar3);
      lVar3 = lVar3 + -1;
      if (*pcVar1 != param_1[lVar3]) {
        return 0;
      }
    }
    uVar4 = 1;
    *(long *)(this + 0xd0) = lVar2 + lVar5;
  }
  return uVar4;
}



/* Json::Reader::normalizeEOL[abi:cxx11](char const*, char const*) */

Reader * __thiscall Json::Reader::normalizeEOL_abi_cxx11_(Reader *this,char *param_1,char *param_2)

{
  Reader *pRVar1;
  ulong uVar2;
  Reader *pRVar3;
  Reader RVar4;
  ulong uVar5;
  Reader *pRVar6;
  ulong uVar7;
  
  pRVar1 = this + 0x10;
  *(Reader **)this = pRVar1;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (Reader)0x0;
  std::__cxx11::string::reserve((ulong)this);
  if (param_2 != param_1) {
    do {
      while( true ) {
        uVar5 = *(ulong *)(this + 8);
        RVar4 = (Reader)*param_1;
        pRVar3 = (Reader *)param_1 + 1;
        pRVar6 = *(Reader **)this;
        uVar2 = uVar5 + 1;
        if (RVar4 == (Reader)0xd) break;
        if (pRVar1 == pRVar6) {
          uVar7 = 0xf;
        }
        else {
          uVar7 = *(ulong *)(this + 0x10);
        }
        if (uVar7 < uVar2) {
          std::__cxx11::string::_M_mutate((ulong)this,uVar5,(char *)0x0,0);
          pRVar6 = *(Reader **)this;
        }
        pRVar6[uVar5] = RVar4;
        *(ulong *)(this + 8) = uVar2;
        *(undefined1 *)(*(long *)this + 1 + uVar5) = 0;
        param_1 = (char *)pRVar3;
        if (pRVar3 == (Reader *)param_2) {
          return this;
        }
      }
      if (((Reader *)param_2 != pRVar3) && (((Reader *)param_1)[1] == (Reader)0xa)) {
        pRVar3 = (Reader *)param_1 + 2;
      }
      param_1 = (char *)pRVar3;
      if (pRVar1 == pRVar6) {
        uVar7 = 0xf;
      }
      else {
        uVar7 = *(ulong *)(this + 0x10);
      }
      if (uVar7 < uVar2) {
        std::__cxx11::string::_M_mutate((ulong)this,uVar5,(char *)0x0,0);
        pRVar6 = *(Reader **)this;
      }
      pRVar6[uVar5] = (Reader)0xa;
      *(ulong *)(this + 8) = uVar2;
      *(undefined1 *)(*(long *)this + 1 + uVar5) = 0;
    } while (param_1 != param_2);
  }
  return this;
}



/* Json::Reader::addComment(char const*, char const*, Json::CommentPlacement) */

void __thiscall Json::Reader::addComment(Reader *this,char *param_1,char *param_2,int param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long *local_68;
  ulong local_60;
  long local_58 [2];
  long *local_48 [2];
  long local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  normalizeEOL_abi_cxx11_((Reader *)&local_68,param_1,param_2);
  if (param_4 == 1) {
    uVar1 = *(undefined8 *)(this + 0xe0);
    local_48[0] = local_38;
    std::__cxx11::string::_M_construct<char*>(local_48,local_68,local_60 + (long)local_68);
    Json::Value::setComment(uVar1,local_48,1);
    if (local_48[0] != local_38) {
      operator_delete(local_48[0],local_38[0] + 1);
    }
  }
  else {
    if (0x3fffffffffffffffU - *(long *)(this + 0xf0) < local_60) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    std::__cxx11::string::_M_append((char *)(this + 0xe8),(ulong)local_68);
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::readCStyleComment() */

ulong __thiscall Json::Reader::readCStyleComment(Reader *this)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = *(char **)(this + 200);
  pcVar4 = *(char **)(this + 0xd0);
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
    do {
      if (pcVar1 <= pcVar4) {
        pcVar5 = (char *)0x0;
        pcVar2 = pcVar4;
        pcVar4 = pcVar3;
        if (pcVar1 != pcVar3) goto LAB_00100b5f;
        goto LAB_00100b6d;
      }
    } while (pcVar1 == pcVar3);
    *(char **)(this + 0xd0) = pcVar4;
  } while ((*pcVar3 != '*') || (*pcVar4 != '/'));
  pcVar2 = pcVar3 + 2;
  pcVar5 = pcVar3;
LAB_00100b5f:
  *(char **)(this + 0xd0) = pcVar2;
  pcVar5 = (char *)CONCAT71((int7)((ulong)pcVar5 >> 8),*pcVar4 == '/');
LAB_00100b6d:
  return (ulong)pcVar5 & 0xffffffff;
}



/* Json::Reader::readComment() */

undefined8 __thiscall Json::Reader::readComment(Reader *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *extraout_RDX;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  
  pcVar5 = *(char **)(this + 0xd0);
  pcVar3 = *(char **)(this + 200);
  if (pcVar5 == pcVar3) {
    return 0;
  }
  *(char **)(this + 0xd0) = pcVar5 + 1;
  cVar6 = *pcVar5;
  if (cVar6 == '*') {
    cVar2 = readCStyleComment(this);
    pcVar4 = extraout_RDX;
    if (cVar2 != '\0') goto LAB_00100be1;
  }
  else {
    pcVar1 = pcVar5 + 1;
    if (cVar6 == '/') {
      do {
        pcVar4 = pcVar1;
        if (pcVar3 == pcVar4) goto LAB_00100be1;
        pcVar1 = pcVar4 + 1;
        *(char **)(this + 0xd0) = pcVar1;
        if (*pcVar4 == '\n') goto LAB_00100be1;
      } while (*pcVar4 != '\r');
      if ((pcVar3 != pcVar1) && (pcVar4[1] == '\n')) {
        pcVar4 = pcVar4 + 2;
        *(char **)(this + 0xd0) = pcVar4;
      }
LAB_00100be1:
      if (this[0x10c] != (Reader)0x0) {
        uVar7 = *(undefined8 *)(this + 0xd0);
        pcVar5 = pcVar5 + -1;
        if (((*(long *)(this + 0xd8) != 0) &&
            (pcVar3 = std::
                      __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                                (*(long *)(this + 0xd8),pcVar5,pcVar4,0), pcVar5 == pcVar3)) &&
           (cVar6 == '*')) {
          std::
          __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::Reader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                    (pcVar5,uVar7);
        }
        addComment(this,pcVar5,uVar7);
      }
      return 1;
    }
  }
  return 0;
}



/* Json::Reader::readCppStyleComment() */

undefined8 __thiscall Json::Reader::readCppStyleComment(Reader *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(this + 0xd0);
  while( true ) {
    pcVar2 = pcVar1;
    if (*(char **)(this + 200) == pcVar2) {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    *(char **)(this + 0xd0) = pcVar1;
    if (*pcVar2 == '\n') break;
    if (*pcVar2 == '\r') {
      if ((*(char **)(this + 200) != pcVar1) && (pcVar2[1] == '\n')) {
        *(char **)(this + 0xd0) = pcVar2 + 2;
      }
      return 1;
    }
  }
  return 1;
}



/* Json::Reader::readNumber() */

void __thiscall Json::Reader::readNumber(Reader *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(this + 0xd0);
  pbVar2 = *(byte **)(this + 200);
  *(byte **)(this + 0xd0) = pbVar4;
  while( true ) {
    if (pbVar2 <= pbVar4) {
      return;
    }
    bVar1 = *pbVar4;
    pbVar3 = pbVar4 + 1;
    if (9 < (byte)(bVar1 - 0x30)) break;
    *(byte **)(this + 0xd0) = pbVar3;
    pbVar4 = pbVar3;
  }
  if (bVar1 == 0x2e) {
    *(byte **)(this + 0xd0) = pbVar3;
    if (pbVar2 <= pbVar3) {
      return;
    }
    bVar1 = *pbVar3;
    pbVar3 = pbVar4 + 2;
    while ((byte)(bVar1 - 0x30) < 10) {
      *(byte **)(this + 0xd0) = pbVar3;
      if (pbVar2 <= pbVar3) {
        return;
      }
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    }
  }
  if ((bVar1 & 0xdf) != 0x45) {
    return;
  }
  *(byte **)(this + 0xd0) = pbVar3;
  if (pbVar2 <= pbVar3) {
    return;
  }
  bVar1 = *pbVar3;
  pbVar4 = pbVar3 + 1;
  if ((bVar1 - 0x2b & 0xfd) == 0) {
    *(byte **)(this + 0xd0) = pbVar4;
    if (pbVar2 <= pbVar4) {
      return;
    }
    bVar1 = pbVar3[1];
    pbVar4 = pbVar3 + 2;
  }
  if (9 < (byte)(bVar1 - 0x30)) {
    return;
  }
  do {
    *(byte **)(this + 0xd0) = pbVar4;
    if (pbVar2 <= pbVar4) {
      return;
    }
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while ((byte)(bVar1 - 0x30) < 10);
  return;
}



/* Json::Reader::readToken(Json::Reader::Token&) */

undefined8 __thiscall Json::Reader::readToken(Reader *this,Token *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  Reader *this_00;
  
  this_00 = this;
  skipSpaces(this);
  pcVar7 = *(char **)(this_00 + 0xd0);
  *(char **)(param_1 + 8) = pcVar7;
  pcVar2 = *(char **)(this_00 + 200);
  pcVar9 = pcVar2;
  if (pcVar7 == pcVar2) {
LAB_00100e80:
    *(undefined4 *)param_1 = 0;
    uVar4 = 1;
    goto LAB_00100e8c;
  }
  pcVar9 = pcVar7 + 1;
  *(char **)(this_00 + 0xd0) = pcVar9;
  cVar1 = *pcVar7;
  if (cVar1 < ';') {
    switch(cVar1) {
    case '\0':
      goto LAB_00100e80;
    case '\"':
      *(undefined4 *)param_1 = 5;
      pcVar8 = pcVar9;
      if (pcVar2 != pcVar9) {
        do {
          pcVar9 = pcVar8 + 1;
          *(char **)(this + 0xd0) = pcVar9;
          if (*pcVar8 == '\\') {
            pcVar7 = pcVar9;
            if (pcVar2 == pcVar9) break;
            pcVar9 = pcVar8 + 2;
            *(char **)(this + 0xd0) = pcVar9;
          }
          else if (*pcVar8 == '\"') {
            uVar4 = 1;
            goto LAB_00100e8c;
          }
          pcVar7 = pcVar2;
          pcVar8 = pcVar9;
        } while (pcVar2 != pcVar9);
        goto LAB_00100ebb;
      }
      break;
    case ',':
      uVar3 = 10;
      goto LAB_00100f85;
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      *(undefined4 *)param_1 = 6;
      readNumber(this_00);
      pcVar9 = *(char **)(this + 0xd0);
      uVar4 = 1;
      goto LAB_00100e8c;
    case '/':
      *(undefined4 *)param_1 = 0xc;
      uVar4 = readComment(this_00);
      pcVar9 = *(char **)(this + 0xd0);
      pcVar7 = pcVar9;
      if ((char)uVar4 == '\0') goto LAB_00100ebb;
LAB_00100e8c:
      *(char **)(param_1 + 0x10) = pcVar9;
      return uVar4;
    case ':':
      uVar3 = 0xb;
      goto LAB_00100f85;
    }
    goto switchD_00100e56_caseD_5c;
  }
  switch(cVar1) {
  case '[':
    uVar3 = 3;
    goto LAB_00100f85;
  case ']':
    uVar3 = 4;
    goto LAB_00100f85;
  case 'f':
    *(undefined4 *)param_1 = 8;
    if (3 < (long)pcVar2 - (long)pcVar9) {
      lVar5 = 3;
      do {
        lVar6 = lVar5 + -1;
        if (pcVar7[lVar5 + 1] != (&_LC4)[lVar5]) goto switchD_00100e56_caseD_5c;
        lVar5 = lVar6;
      } while (lVar6 != -1);
      pcVar9 = pcVar7 + 5;
      uVar4 = 1;
      *(char **)(this + 0xd0) = pcVar9;
      goto LAB_00100e8c;
    }
    break;
  case 'n':
    *(undefined4 *)param_1 = 9;
    if (((2 < (long)pcVar2 - (long)pcVar9) && (pcVar7[3] == 'l')) &&
       ((pcVar7[2] == 'l' && (pcVar7[1] == 'u')))) {
LAB_00100f12:
      pcVar9 = pcVar7 + 4;
      uVar4 = 1;
      *(char **)(this + 0xd0) = pcVar9;
      goto LAB_00100e8c;
    }
    break;
  case 't':
    *(undefined4 *)param_1 = 7;
    if ((((2 < (long)pcVar2 - (long)pcVar9) && (pcVar7[3] == 'e')) && (pcVar7[2] == 'u')) &&
       (pcVar7[1] == 'r')) goto LAB_00100f12;
    break;
  case '{':
    uVar3 = 1;
    goto LAB_00100f85;
  case '}':
    uVar3 = 2;
LAB_00100f85:
    *(undefined4 *)param_1 = uVar3;
    *(char **)(param_1 + 0x10) = pcVar9;
    return 1;
  }
switchD_00100e56_caseD_5c:
  pcVar7 = pcVar9;
LAB_00100ebb:
  *(undefined4 *)param_1 = 0xd;
  *(char **)(param_1 + 0x10) = pcVar7;
  return 0;
}



/* Json::Reader::skipCommentTokens(Json::Reader::Token&) */

void __thiscall Json::Reader::skipCommentTokens(Reader *this,Token *param_1)

{
  if (this[0x108] != (Reader)0x0) {
    do {
      readToken(this,param_1);
    } while (*(int *)param_1 == 0xc);
    return;
  }
  readToken(this,param_1);
  return;
}



/* Json::Reader::readString() */

undefined8 __thiscall Json::Reader::readString(Reader *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(this + 0xd0);
  while( true ) {
    while( true ) {
      if (pcVar3 == *(char **)(this + 200)) {
        return 0;
      }
      pcVar1 = pcVar3 + 1;
      *(char **)(this + 0xd0) = pcVar1;
      cVar2 = *pcVar3;
      if (cVar2 == '\\') break;
      pcVar3 = pcVar1;
      if (cVar2 == '\"') {
        return 1;
      }
    }
    if (pcVar1 == *(char **)(this + 200)) break;
    *(char **)(this + 0xd0) = pcVar3 + 2;
    pcVar3 = pcVar3 + 2;
  }
  return 0;
}



/* Json::Reader::currentValue() */

undefined8 __thiscall Json::Reader::currentValue(Reader *this)

{
  if (*(long *)(this + 0x30) != *(long *)(this + 0x38)) {
    return *(undefined8 *)(*(long *)(this + 0x30) + -8);
  }
  return *(undefined8 *)(*(long *)(*(long *)(this + 0x48) + -8) + 0x1f8);
}



/* Json::Reader::getNextChar() */

undefined1 __thiscall Json::Reader::getNextChar(Reader *this)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(this + 0xd0);
  if (puVar1 != *(undefined1 **)(this + 200)) {
    *(undefined1 **)(this + 0xd0) = puVar1 + 1;
    return *puVar1;
  }
  return 0;
}



/* Json::Reader::getLocationLineAndColumn(char const*, int&, int&) const */

void __thiscall
Json::Reader::getLocationLineAndColumn(Reader *this,char *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(this + 0xc0);
  *param_2 = 0;
  if (pcVar4 < param_1) {
    pcVar1 = *(char **)(this + 200);
    pcVar2 = pcVar4;
    do {
      while( true ) {
        if (pcVar1 == pcVar2) goto LAB_00101227;
        pcVar3 = pcVar2 + 1;
        if (*pcVar2 != '\r') break;
        if (pcVar2[1] == '\n') {
          pcVar3 = pcVar2 + 2;
        }
        *param_2 = *param_2 + 1;
        pcVar2 = pcVar3;
        pcVar4 = pcVar3;
        if (param_1 <= pcVar3) goto LAB_00101227;
      }
      if (*pcVar2 == '\n') {
        *param_2 = *param_2 + 1;
        pcVar4 = pcVar3;
      }
      pcVar2 = pcVar3;
    } while (pcVar3 < param_1);
  }
LAB_00101227:
  *param_3 = ((int)param_1 - (int)pcVar4) + 1;
  *param_2 = *param_2 + 1;
  return;
}



/* Json::Reader::getLocationLineAndColumn[abi:cxx11](char const*) const */

char * Json::Reader::getLocationLineAndColumn_abi_cxx11_(char *param_1)

{
  size_t sVar1;
  char *in_RDX;
  Reader *in_RSI;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  char local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  getLocationLineAndColumn(in_RSI,in_RDX,&local_60,&local_5c);
  __snprintf_chk(local_58,0x33,2,0x33,"Line %d, Column %d",local_60,local_5c);
  *(char **)param_1 = param_1 + 0x10;
  sVar1 = strlen(local_58);
  std::__cxx11::string::_M_construct<char_const*>(param_1,local_58,local_58 + sVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::getFormattedErrorMessages[abi:cxx11]() const */

long * Json::Reader::getFormattedErrorMessages_abi_cxx11_(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_RSI;
  long *in_RDI;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_160;
  long *local_148 [2];
  long local_138 [2];
  long *local_128;
  long local_120;
  long local_118 [2];
  long *local_108;
  ulong local_100;
  long local_f8 [2];
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  long *local_c8;
  ulong local_c0;
  long local_b8 [2];
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68;
  ulong local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(in_RDI + 2) = 0;
  lVar11 = *(long *)(in_RSI + 0x78);
  *in_RDI = (long)(in_RDI + 2);
  local_160 = *(long *)(in_RSI + 0x70);
  in_RDI[1] = 0;
  lVar7 = *(long *)(in_RSI + 0x60);
  lVar2 = *(long *)(in_RSI + 0x80);
  do {
    if (lVar2 == lVar7) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return in_RDI;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    getLocationLineAndColumn_abi_cxx11_((char *)local_148);
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_148,0,(char *)0x0,0x10b9a3);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_118;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_118 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_118 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(int *)plVar10 = (int)*plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_128 = local_118;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_118[0] = plVar4[2];
      local_128 = (long *)*plVar4;
    }
    local_120 = plVar4[1];
    *plVar4 = (long)plVar1;
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 0;
    if (local_120 == 0x3fffffffffffffff) goto LAB_00101b0d;
    plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_128,0x10b9a6);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_f8;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_f8 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_f8 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(undefined4 *)plVar10 = *(undefined4 *)plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_108 = local_f8;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_f8[0] = plVar4[2];
      local_108 = (long *)*plVar4;
    }
    local_100 = plVar4[1];
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = 0;
    lVar9 = in_RDI[1];
    *plVar4 = (long)plVar1;
    if (0x3fffffffffffffffU - lVar9 < local_100) goto LAB_00101b0d;
    std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_108);
    if (local_108 != local_f8) {
      operator_delete(local_108,local_f8[0] + 1);
    }
    if (local_128 != local_118) {
      operator_delete(local_128,local_118[0] + 1);
    }
    if (local_148[0] != local_138) {
      operator_delete(local_148[0],local_138[0] + 1);
    }
    uVar3 = *(ulong *)(lVar7 + 0x20);
    uVar8 = *(ulong *)(lVar7 + 0x18);
    local_e0 = 0;
    local_d8 = 0;
    local_e8 = &local_d8;
    std::__cxx11::string::reserve((ulong)&local_e8);
    if (((0x3fffffffffffffffU - local_e0 < 2) ||
        (std::__cxx11::string::_M_append((char *)&local_e8,0x10b9a8),
        0x3fffffffffffffffU - local_e0 < uVar3)) ||
       (std::__cxx11::string::_M_append((char *)&local_e8,uVar8), local_e0 == 0x3fffffffffffffff))
    goto LAB_00101b0d;
    plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_e8,0x10b9a6);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_b8;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_b8 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_b8 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(undefined4 *)plVar10 = *(undefined4 *)plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_c8 = local_b8;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_b8[0] = plVar4[2];
      local_c8 = (long *)*plVar4;
    }
    local_c0 = plVar4[1];
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = 0;
    lVar9 = in_RDI[1];
    *plVar4 = (long)plVar1;
    if (0x3fffffffffffffffU - lVar9 < local_c0) goto LAB_00101b0d;
    std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_c8);
    if (local_c8 != local_b8) {
      operator_delete(local_c8,local_b8[0] + 1);
    }
    if (local_e8 != &local_d8) {
      operator_delete(local_e8,CONCAT71(uStack_d7,local_d8) + 1);
    }
    if (*(long *)(lVar7 + 0x38) != 0) {
      getLocationLineAndColumn_abi_cxx11_((char *)local_a8);
      plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x10b9ab);
      plVar1 = plVar4 + 2;
      if ((long *)*plVar4 == plVar1) {
        uVar3 = plVar4[1] + 1;
        if ((uint)uVar3 < 8) {
          plVar6 = plVar1;
          plVar10 = local_78;
          if ((uVar3 & 4) == 0) goto LAB_0010192b;
LAB_00101a80:
          *(int *)plVar10 = (int)*plVar6;
          lVar9 = 4;
        }
        else {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)((long)local_78 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
          } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
          plVar10 = (long *)((long)local_78 + (ulong)uVar5);
          plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
          if ((uVar3 & 4) != 0) goto LAB_00101a80;
LAB_0010192b:
          lVar9 = 0;
        }
        if ((uVar3 & 2) != 0) {
          *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
          lVar9 = lVar9 + 2;
        }
        local_88 = local_78;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
        }
      }
      else {
        local_78[0] = plVar4[2];
        local_88 = (long *)*plVar4;
      }
      local_80 = plVar4[1];
      *plVar4 = (long)plVar1;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 0xd) goto LAB_00101b0d;
      plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10b9b0);
      plVar1 = plVar4 + 2;
      if ((long *)*plVar4 == plVar1) {
        uVar3 = plVar4[1] + 1;
        if ((uint)uVar3 < 8) {
          plVar6 = plVar1;
          plVar10 = local_58;
          if ((uVar3 & 4) == 0) goto LAB_00101973;
LAB_00101a48:
          *(int *)plVar10 = (int)*plVar6;
          lVar9 = 4;
        }
        else {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)((long)local_58 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
          } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
          plVar10 = (long *)((long)local_58 + (ulong)uVar5);
          plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
          if ((uVar3 & 4) != 0) goto LAB_00101a48;
LAB_00101973:
          lVar9 = 0;
        }
        if ((uVar3 & 2) != 0) {
          *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
          lVar9 = lVar9 + 2;
        }
        local_68 = local_58;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
        }
      }
      else {
        local_58[0] = plVar4[2];
        local_68 = (long *)*plVar4;
      }
      local_60 = plVar4[1];
      *plVar4 = (long)plVar1;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      if (0x3fffffffffffffffU - in_RDI[1] < local_60) {
LAB_00101b0d:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
    }
    lVar7 = lVar7 + 0x40;
    if (local_160 == lVar7) {
      lVar7 = *(long *)(lVar11 + 8);
      lVar11 = lVar11 + 8;
      local_160 = lVar7 + 0x200;
    }
  } while( true );
}



/* Json::Reader::getFormatedErrorMessages[abi:cxx11]() const */

Reader * __thiscall Json::Reader::getFormatedErrorMessages_abi_cxx11_(Reader *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  getFormattedErrorMessages_abi_cxx11_();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::good() const */

undefined8 __thiscall Json::Reader::good(Reader *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x60) >> 8),
                  *(long *)(this + 0x80) == *(long *)(this + 0x60));
}



/* Json::OurFeatures::all() */

OurFeatures * __thiscall Json::OurFeatures::all(OurFeatures *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return this;
}



/* Json::OurReader::containsNewLine(char const*, char const*) */

bool Json::OurReader::containsNewLine(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = std::
           __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::OurReader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                     ();
  return param_2 != pcVar1;
}



/* Json::OurReader::OurReader(Json::OurFeatures const&) */

void __thiscall Json::OurReader::OurReader(OurReader *this,OurFeatures *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 8;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  pvVar5 = operator_new(0x40);
  *(void **)this = pvVar5;
  puVar1 = (undefined8 *)((long)pvVar5 + (*(long *)(this + 8) * 4 - 4U & 0xfffffffffffffff8));
  pvVar5 = operator_new(0x200);
  *(undefined8 *)(this + 0x50) = 0;
  *puVar1 = pvVar5;
  *(undefined8 *)(this + 0x58) = 8;
  *(void **)(this + 0x10) = pvVar5;
  *(void **)(this + 0x18) = pvVar5;
  *(long *)(this + 0x20) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x28) = puVar1;
  *(void **)(this + 0x30) = pvVar5;
  *(void **)(this + 0x38) = pvVar5;
  *(long *)(this + 0x40) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x48) = puVar1;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  pvVar5 = operator_new(0x40);
  *(void **)(this + 0x50) = pvVar5;
  puVar1 = (undefined8 *)((long)pvVar5 + (*(long *)(this + 0x58) * 4 - 4U & 0xfffffffffffffff8));
  pvVar5 = operator_new(0x200);
  *(undefined8 *)(this + 0xa8) = 0;
  *puVar1 = pvVar5;
  *(undefined8 *)(this + 0xf8) = 0;
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(OurReader **)(this + 0xa0) = this + 0xb0;
  *(OurReader **)(this + 0xf0) = this + 0x100;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  this[0xb0] = (OurReader)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xe8] = (OurReader)0x0;
  this[0x100] = (OurReader)0x0;
  *(undefined8 *)(this + 0x120) = uVar2;
  this[0x128] = (OurReader)0x0;
  *(void **)(this + 0x60) = pvVar5;
  *(void **)(this + 0x68) = pvVar5;
  *(long *)(this + 0x70) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x78) = puVar1;
  *(void **)(this + 0x80) = pvVar5;
  *(void **)(this + 0x88) = pvVar5;
  *(long *)(this + 0x90) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x98) = puVar1;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x110) = uVar3;
  *(undefined8 *)(this + 0x118) = uVar4;
  return;
}



/* Json::CharReaderBuilder::newCharReader() const */

undefined8 * __thiscall Json::CharReaderBuilder::newCharReader(CharReaderBuilder *this)

{
  CharReaderBuilder *pCVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  OurFeatures local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2e;
  undefined2 local_2a;
  ulong local_28;
  long local_20;
  
  pCVar1 = this + 8;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::operator[]((char *)pCVar1);
  uVar2 = Json::Value::asBool();
  local_2e = 0;
  local_2a = 0;
  Json::Value::operator[]((char *)pCVar1);
  local_38 = (OurFeatures)Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_37 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_36 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_35 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_34 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_33 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  uVar3 = Json::Value::asUInt();
  local_28 = (ulong)uVar3;
  Json::Value::operator[]((char *)pCVar1);
  local_32 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_31 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_30 = Json::Value::asBool();
  Json::Value::operator[]((char *)pCVar1);
  local_2f = Json::Value::asBool();
  puVar4 = (undefined8 *)operator_new(0x140);
  *puVar4 = &PTR__OurCharReader_0010d9d0;
  *(undefined1 *)(puVar4 + 1) = uVar2;
  OurReader::OurReader((OurReader *)(puVar4 + 2),&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::skipSpaces() */

void __thiscall Json::OurReader::skipSpaces(OurReader *this)

{
  Reader::skipSpaces((Reader *)this);
  return;
}



/* Json::OurReader::skipBom(bool) */

void __thiscall Json::OurReader::skipBom(OurReader *this,bool param_1)

{
  char *pcVar1;
  
  if ((((param_1) && (pcVar1 = *(char **)(this + 0xc0), 2 < *(long *)(this + 200) - (long)pcVar1))
      && (*pcVar1 == -0x11)) && ((pcVar1[1] == -0x45 && (pcVar1[2] == -0x41)))) {
    *(char **)(this + 0xc0) = pcVar1 + 3;
    *(char **)(this + 0xd0) = pcVar1 + 3;
  }
  return;
}



/* Json::OurReader::match(char const*, int) */

undefined8 __thiscall Json::OurReader::match(OurReader *this,char *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0xd0);
  lVar5 = (long)param_2;
  uVar4 = 0;
  if (lVar5 <= *(long *)(this + 200) - lVar2) {
    lVar3 = lVar5;
    while (lVar3 != lVar5 - (ulong)(uint)param_2) {
      pcVar1 = (char *)(lVar2 + -1 + lVar3);
      lVar3 = lVar3 + -1;
      if (*pcVar1 != param_1[lVar3]) {
        return 0;
      }
    }
    uVar4 = 1;
    *(long *)(this + 0xd0) = lVar2 + lVar5;
  }
  return uVar4;
}



/* Json::OurReader::normalizeEOL[abi:cxx11](char const*, char const*) */

OurReader * __thiscall
Json::OurReader::normalizeEOL_abi_cxx11_(OurReader *this,char *param_1,char *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Reader::normalizeEOL_abi_cxx11_((Reader *)this,param_1,param_2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::addComment(char const*, char const*, Json::CommentPlacement) */

void __thiscall Json::OurReader::addComment(OurReader *this,char *param_1,char *param_2,int param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long *local_68;
  ulong local_60;
  long local_58 [2];
  long *local_48 [2];
  long local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Reader::normalizeEOL_abi_cxx11_((Reader *)&local_68,param_1,param_2);
  if (param_4 == 1) {
    uVar1 = *(undefined8 *)(this + 0xe0);
    local_48[0] = local_38;
    std::__cxx11::string::_M_construct<char*>(local_48,local_68,local_60 + (long)local_68);
    Json::Value::setComment(uVar1,local_48,1);
    if (local_48[0] != local_38) {
      operator_delete(local_48[0],local_38[0] + 1);
    }
  }
  else {
    if (0x3fffffffffffffffU - *(long *)(this + 0xf8) < local_60) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    std::__cxx11::string::_M_append((char *)(this + 0xf0),(ulong)local_68);
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::readCStyleComment(bool*) */

ulong __thiscall Json::OurReader::readCStyleComment(OurReader *this,bool *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_1 = false;
  pcVar1 = *(char **)(this + 200);
  pcVar2 = *(char **)(this + 0xd0);
  do {
    while( true ) {
      do {
        pcVar3 = pcVar2;
        pcVar4 = pcVar3 + 1;
        if (pcVar1 <= pcVar4) {
          param_1 = (bool *)0x0;
          if (pcVar1 == pcVar3) goto LAB_0010219d;
          goto LAB_0010218f;
        }
        pcVar2 = pcVar1;
      } while (pcVar1 == pcVar3);
      *(char **)(this + 0xd0) = pcVar4;
      pcVar2 = pcVar4;
      if (*pcVar3 == '*') break;
      if (*pcVar3 == '\n') {
        *param_1 = true;
      }
    }
  } while (pcVar3[1] != '/');
  pcVar1 = pcVar3 + 2;
  pcVar3 = pcVar4;
  pcVar4 = pcVar1;
LAB_0010218f:
  *(char **)(this + 0xd0) = pcVar4;
  param_1 = (bool *)CONCAT71((int7)((ulong)param_1 >> 8),*pcVar3 == '/');
LAB_0010219d:
  return (ulong)param_1 & 0xffffffff;
}



/* Json::OurReader::readComment() */

undefined8 __thiscall Json::OurReader::readComment(OurReader *this)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  bool local_11;
  long local_10;
  
  pcVar7 = *(char **)(this + 0xd0);
  pcVar4 = *(char **)(this + 200);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar7 != pcVar4) {
    local_11 = false;
    *(char **)(this + 0xd0) = pcVar7 + 1;
    cVar2 = *pcVar7;
    if (cVar2 == '*') {
      cVar3 = readCStyleComment(this,&local_11);
      if (cVar3 != '\0') goto LAB_00102241;
    }
    else {
      pcVar1 = pcVar7 + 1;
      if (cVar2 == '/') {
        do {
          pcVar6 = pcVar1;
          if (pcVar6 == pcVar4) goto LAB_00102241;
          pcVar1 = pcVar6 + 1;
          *(char **)(this + 0xd0) = pcVar1;
          if (*pcVar6 == '\n') goto LAB_00102241;
        } while (*pcVar6 != '\r');
        if ((pcVar4 != pcVar1) && (pcVar6[1] == '\n')) {
          *(char **)(this + 0xd0) = pcVar6 + 2;
        }
LAB_00102241:
        if (this[0x128] != (OurReader)0x0) {
          pcVar7 = pcVar7 + -1;
          if ((((this[0xe8] == (OurReader)0x0) && (*(long *)(this + 0xd8) != 0)) &&
              (pcVar4 = std::
                        __find_if<char_const*,__gnu_cxx::__ops::_Iter_pred<Json::OurReader::containsNewLine(char_const*,char_const*)::_lambda(char)_1_>>
                                  (), pcVar7 == pcVar4)) && ((cVar2 == '/' || (local_11 == false))))
          {
            this[0xe8] = (OurReader)0x1;
          }
          addComment(this);
        }
        uVar5 = 1;
        goto LAB_00102203;
      }
    }
  }
  uVar5 = 0;
LAB_00102203:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* Json::OurReader::readCppStyleComment() */

undefined8 __thiscall Json::OurReader::readCppStyleComment(OurReader *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(this + 0xd0);
  while( true ) {
    pcVar2 = pcVar1;
    if (pcVar2 == *(char **)(this + 200)) {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    *(char **)(this + 0xd0) = pcVar1;
    if (*pcVar2 == '\n') break;
    if (*pcVar2 == '\r') {
      if ((pcVar1 != *(char **)(this + 200)) && (pcVar2[1] == '\n')) {
        *(char **)(this + 0xd0) = pcVar2 + 2;
      }
      return 1;
    }
  }
  return 1;
}



/* Json::OurReader::readNumber(bool) */

undefined8 __thiscall Json::OurReader::readNumber(OurReader *this,bool param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = *(byte **)(this + 0xd0);
  pbVar2 = *(byte **)(this + 200);
  if (((param_1) && (pbVar3 != pbVar2)) && (*pbVar3 == 0x49)) {
    *(byte **)(this + 0xd0) = pbVar3 + 1;
    return 0;
  }
  do {
    pbVar4 = pbVar3;
    *(byte **)(this + 0xd0) = pbVar4;
    if (pbVar2 <= pbVar4) {
      return 1;
    }
    bVar1 = *pbVar4;
    pbVar3 = pbVar4 + 1;
  } while ((byte)(bVar1 - 0x30) < 10);
  if (bVar1 == 0x2e) {
    *(byte **)(this + 0xd0) = pbVar3;
    if (pbVar2 <= pbVar3) {
      return 1;
    }
    bVar1 = *pbVar3;
    pbVar3 = pbVar4 + 2;
    while ((byte)(bVar1 - 0x30) < 10) {
      *(byte **)(this + 0xd0) = pbVar3;
      if (pbVar2 <= pbVar3) {
        return 1;
      }
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    }
  }
  if (((bVar1 & 0xdf) == 0x45) && (*(byte **)(this + 0xd0) = pbVar3, pbVar3 < pbVar2)) {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if ((bVar1 - 0x2b & 0xfd) == 0) {
      *(byte **)(this + 0xd0) = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 1;
      }
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 2;
    }
    for (; ((byte)(bVar1 - 0x30) < 10 && (*(byte **)(this + 0xd0) = pbVar4, pbVar4 < pbVar2));
        pbVar4 = pbVar4 + 1) {
      bVar1 = *pbVar4;
    }
  }
  return 1;
}



/* Json::OurReader::readToken(Json::OurReader::Token&) */

uint __thiscall Json::OurReader::readToken(OurReader *this,Token *param_1)

{
  OurReader OVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  OurReader *this_00;
  char *pcVar8;
  char *pcVar9;
  
  this_00 = this;
  Reader::skipSpaces((Reader *)this);
  pcVar8 = *(char **)(this_00 + 0xd0);
  *(char **)(param_1 + 8) = pcVar8;
  pcVar9 = *(char **)(this_00 + 200);
  pcVar7 = pcVar9;
  if (pcVar8 == pcVar9) {
LAB_001024d8:
    *(undefined4 *)param_1 = 0;
    uVar2 = 1;
    goto LAB_001024e4;
  }
  pcVar7 = pcVar8 + 1;
  *(char **)(this_00 + 0xd0) = pcVar7;
  switch(*pcVar8) {
  case '\0':
    goto LAB_001024d8;
  case '\"':
    *(undefined4 *)param_1 = 5;
    pcVar6 = pcVar7;
    if (pcVar9 != pcVar7) {
      do {
        pcVar7 = pcVar6 + 1;
        *(char **)(this + 0xd0) = pcVar7;
        if (*pcVar6 == '\\') {
          pcVar8 = pcVar7;
          if (pcVar9 == pcVar7) break;
          pcVar7 = pcVar6 + 2;
          *(char **)(this + 0xd0) = pcVar7;
        }
        else if (*pcVar6 == '\"') {
          uVar2 = 1;
          goto LAB_001024e4;
        }
        pcVar6 = pcVar7;
        pcVar8 = pcVar9;
      } while (pcVar9 != pcVar7);
      goto LAB_00102523;
    }
    break;
  case '\'':
    uVar2 = (uint)(byte)this_00[0x115];
    if ((this_00[0x115] != (OurReader)0x0) &&
       (*(undefined4 *)param_1 = 5, pcVar6 = pcVar7, pcVar9 != pcVar7)) {
      do {
        pcVar7 = pcVar6 + 1;
        *(char **)(this + 0xd0) = pcVar7;
        if (*pcVar6 == '\\') {
          pcVar8 = pcVar7;
          if (pcVar9 == pcVar7) break;
          pcVar7 = pcVar6 + 2;
          *(char **)(this + 0xd0) = pcVar7;
        }
        else if (*pcVar6 == '\'') goto LAB_001024e4;
        pcVar6 = pcVar7;
        pcVar8 = pcVar9;
      } while (pcVar9 != pcVar7);
      goto LAB_00102523;
    }
    break;
  case '+':
    uVar2 = readNumber(this_00,true);
    if ((char)uVar2 != '\0') {
LAB_00102890:
      *(undefined4 *)param_1 = 6;
      pcVar7 = *(char **)(this + 0xd0);
      goto LAB_001024e4;
    }
    OVar1 = this[0x118];
    *(undefined4 *)param_1 = 0xb;
    pcVar7 = *(char **)(this + 0xd0);
    if ((OVar1 != (OurReader)0x0) && (6 < (long)pcVar9 - (long)pcVar7)) {
      lVar4 = 6;
      do {
        lVar5 = lVar4 + -1;
        if (pcVar7[lVar4] != "nfinity"[lVar4]) goto switchD_001024cd_caseD_1;
        lVar4 = lVar5;
      } while (lVar5 != -1);
LAB_001027e8:
      uVar2 = (uint)(byte)OVar1;
      pcVar7 = pcVar7 + 7;
      *(char **)(this + 0xd0) = pcVar7;
      goto LAB_001024e4;
    }
    break;
  case ',':
    uVar3 = 0xd;
    goto LAB_00102616;
  case '-':
    uVar2 = readNumber(this_00,true);
    if ((char)uVar2 != '\0') goto LAB_00102890;
    OVar1 = this[0x118];
    *(undefined4 *)param_1 = 0xc;
    pcVar7 = *(char **)(this + 0xd0);
    if ((OVar1 != (OurReader)0x0) && (6 < (long)pcVar9 - (long)pcVar7)) {
      lVar4 = 6;
      do {
        lVar5 = lVar4 + -1;
        if (pcVar7[lVar4] != "nfinity"[lVar4]) goto switchD_001024cd_caseD_1;
        lVar4 = lVar5;
      } while (lVar5 != -1);
      goto LAB_001027e8;
    }
    break;
  case '/':
    *(undefined4 *)param_1 = 0xf;
    uVar2 = readComment(this_00);
    pcVar7 = *(char **)(this + 0xd0);
    pcVar8 = pcVar7;
    if ((char)uVar2 == '\0') goto LAB_00102523;
    goto LAB_001024e4;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    *(undefined4 *)param_1 = 6;
    readNumber(this_00,false);
    pcVar7 = *(char **)(this + 0xd0);
    uVar2 = 1;
    goto LAB_001024e4;
  case ':':
    uVar3 = 0xe;
    goto LAB_00102616;
  case 'I':
    uVar2 = (uint)(byte)this_00[0x118];
    if ((this_00[0x118] != (OurReader)0x0) &&
       (*(undefined4 *)param_1 = 0xb, 6 < (long)pcVar9 - (long)pcVar7)) {
      lVar4 = 6;
      do {
        lVar5 = lVar4 + -1;
        if (pcVar8[lVar4 + 1] != "nfinity"[lVar4]) goto switchD_001024cd_caseD_1;
        lVar4 = lVar5;
      } while (lVar5 != -1);
      pcVar7 = pcVar8 + 8;
      *(char **)(this + 0xd0) = pcVar7;
      goto LAB_001024e4;
    }
    break;
  case 'N':
    uVar2 = (uint)(byte)this_00[0x118];
    if (((this_00[0x118] != (OurReader)0x0) &&
        (*(undefined4 *)param_1 = 10, 1 < (long)pcVar9 - (long)pcVar7)) &&
       ((pcVar8[2] == 'N' && (pcVar8[1] == 'a')))) {
      pcVar7 = pcVar8 + 3;
      *(char **)(this_00 + 0xd0) = pcVar7;
      goto LAB_001024e4;
    }
    break;
  case '[':
    uVar3 = 3;
    goto LAB_00102616;
  case ']':
    uVar3 = 4;
    goto LAB_00102616;
  case 'f':
    *(undefined4 *)param_1 = 8;
    if (3 < (long)pcVar9 - (long)pcVar7) {
      lVar4 = 3;
      do {
        lVar5 = lVar4 + -1;
        if (pcVar8[lVar4 + 1] != (&_LC4)[lVar4]) goto switchD_001024cd_caseD_1;
        lVar4 = lVar5;
      } while (lVar5 != -1);
      pcVar7 = pcVar8 + 5;
      uVar2 = 1;
      *(char **)(this + 0xd0) = pcVar7;
      goto LAB_001024e4;
    }
    break;
  case 'n':
    *(undefined4 *)param_1 = 9;
    if (((2 < (long)pcVar9 - (long)pcVar7) && (pcVar8[3] == 'l')) &&
       ((pcVar8[2] == 'l' && (pcVar8[1] == 'u')))) {
LAB_001026b0:
      pcVar7 = pcVar8 + 4;
      uVar2 = 1;
      *(char **)(this + 0xd0) = pcVar7;
      goto LAB_001024e4;
    }
    break;
  case 't':
    *(undefined4 *)param_1 = 7;
    if ((((2 < (long)pcVar9 - (long)pcVar7) && (pcVar8[3] == 'e')) && (pcVar8[2] == 'u')) &&
       (pcVar8[1] == 'r')) goto LAB_001026b0;
    break;
  case '{':
    uVar3 = 1;
    goto LAB_00102616;
  case '}':
    uVar3 = 2;
LAB_00102616:
    *(undefined4 *)param_1 = uVar3;
    uVar2 = 1;
LAB_001024e4:
    *(char **)(param_1 + 0x10) = pcVar7;
    return uVar2;
  }
switchD_001024cd_caseD_1:
  pcVar8 = pcVar7;
LAB_00102523:
  *(undefined4 *)param_1 = 0x10;
  *(char **)(param_1 + 0x10) = pcVar8;
  return 0;
}



/* Json::OurReader::skipCommentTokens(Json::OurReader::Token&) */

void __thiscall Json::OurReader::skipCommentTokens(OurReader *this,Token *param_1)

{
  if (this[0x110] != (OurReader)0x0) {
    do {
      readToken(this,param_1);
    } while (*(int *)param_1 == 0xf);
    return;
  }
  readToken(this,param_1);
  return;
}



/* Json::OurReader::readString() */

undefined8 __thiscall Json::OurReader::readString(OurReader *this)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(this + 0xd0);
  pcVar2 = *(char **)(this + 200);
  do {
    if (pcVar2 == pcVar3) {
      return 0;
    }
    while( true ) {
      pcVar1 = pcVar3 + 1;
      *(char **)(this + 0xd0) = pcVar1;
      if (*pcVar3 == '\\') break;
      if (*pcVar3 == '\"') {
        return 1;
      }
      pcVar3 = pcVar1;
      if (pcVar2 == pcVar1) {
        return 0;
      }
    }
    if (pcVar2 == pcVar1) {
      return 0;
    }
    pcVar3 = pcVar3 + 2;
    *(char **)(this + 0xd0) = pcVar3;
  } while( true );
}



/* Json::OurReader::readStringSingleQuote() */

undefined8 __thiscall Json::OurReader::readStringSingleQuote(OurReader *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(this + 0xd0);
  while( true ) {
    while( true ) {
      if (pcVar3 == *(char **)(this + 200)) {
        return 0;
      }
      pcVar1 = pcVar3 + 1;
      *(char **)(this + 0xd0) = pcVar1;
      cVar2 = *pcVar3;
      if (cVar2 == '\\') break;
      pcVar3 = pcVar1;
      if (cVar2 == '\'') {
        return 1;
      }
    }
    if (pcVar1 == *(char **)(this + 200)) break;
    *(char **)(this + 0xd0) = pcVar3 + 2;
    pcVar3 = pcVar3 + 2;
  }
  return 0;
}



/* Json::OurReader::currentValue() */

undefined8 __thiscall Json::OurReader::currentValue(OurReader *this)

{
  if (*(long *)(this + 0x30) != *(long *)(this + 0x38)) {
    return *(undefined8 *)(*(long *)(this + 0x30) + -8);
  }
  return *(undefined8 *)(*(long *)(*(long *)(this + 0x48) + -8) + 0x1f8);
}



/* Json::OurReader::getNextChar() */

undefined1 __thiscall Json::OurReader::getNextChar(OurReader *this)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(this + 0xd0);
  if (puVar1 != *(undefined1 **)(this + 200)) {
    *(undefined1 **)(this + 0xd0) = puVar1 + 1;
    return *puVar1;
  }
  return 0;
}



/* Json::OurReader::getLocationLineAndColumn(char const*, int&, int&) const */

void __thiscall
Json::OurReader::getLocationLineAndColumn(OurReader *this,char *param_1,int *param_2,int *param_3)

{
  Reader::getLocationLineAndColumn((Reader *)this,param_1,param_2,param_3);
  return;
}



/* Json::OurReader::getLocationLineAndColumn[abi:cxx11](char const*) const */

char * Json::OurReader::getLocationLineAndColumn_abi_cxx11_(char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Reader::getLocationLineAndColumn_abi_cxx11_(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::getFormattedErrorMessages[abi:cxx11]() const */

long * Json::OurReader::getFormattedErrorMessages_abi_cxx11_(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_RSI;
  long *in_RDI;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_160;
  long *local_148 [2];
  long local_138 [2];
  long *local_128;
  long local_120;
  long local_118 [2];
  long *local_108;
  ulong local_100;
  long local_f8 [2];
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  long *local_c8;
  ulong local_c0;
  long local_b8 [2];
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68;
  ulong local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(in_RDI + 2) = 0;
  lVar11 = *(long *)(in_RSI + 0x78);
  *in_RDI = (long)(in_RDI + 2);
  local_160 = *(long *)(in_RSI + 0x70);
  in_RDI[1] = 0;
  lVar7 = *(long *)(in_RSI + 0x60);
  lVar2 = *(long *)(in_RSI + 0x80);
  do {
    if (lVar2 == lVar7) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return in_RDI;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Reader::getLocationLineAndColumn_abi_cxx11_((char *)local_148);
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_148,0,(char *)0x0,0x10b9a3);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_118;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_118 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_118 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(int *)plVar10 = (int)*plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_128 = local_118;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_118[0] = plVar4[2];
      local_128 = (long *)*plVar4;
    }
    local_120 = plVar4[1];
    *plVar4 = (long)plVar1;
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 0;
    if (local_120 == 0x3fffffffffffffff) goto LAB_001032cd;
    plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_128,0x10b9a6);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_f8;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_f8 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_f8 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(undefined4 *)plVar10 = *(undefined4 *)plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_108 = local_f8;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_f8[0] = plVar4[2];
      local_108 = (long *)*plVar4;
    }
    local_100 = plVar4[1];
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = 0;
    lVar9 = in_RDI[1];
    *plVar4 = (long)plVar1;
    if (0x3fffffffffffffffU - lVar9 < local_100) goto LAB_001032cd;
    std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_108);
    if (local_108 != local_f8) {
      operator_delete(local_108,local_f8[0] + 1);
    }
    if (local_128 != local_118) {
      operator_delete(local_128,local_118[0] + 1);
    }
    if (local_148[0] != local_138) {
      operator_delete(local_148[0],local_138[0] + 1);
    }
    uVar3 = *(ulong *)(lVar7 + 0x20);
    uVar8 = *(ulong *)(lVar7 + 0x18);
    local_e0 = 0;
    local_d8 = 0;
    local_e8 = &local_d8;
    std::__cxx11::string::reserve((ulong)&local_e8);
    if (((0x3fffffffffffffffU - local_e0 < 2) ||
        (std::__cxx11::string::_M_append((char *)&local_e8,0x10b9a8),
        0x3fffffffffffffffU - local_e0 < uVar3)) ||
       (std::__cxx11::string::_M_append((char *)&local_e8,uVar8), local_e0 == 0x3fffffffffffffff))
    goto LAB_001032cd;
    plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_e8,0x10b9a6);
    plVar1 = plVar4 + 2;
    if ((long *)*plVar4 == plVar1) {
      uVar3 = plVar4[1] + 1;
      plVar6 = plVar1;
      plVar10 = local_b8;
      if (7 < (uint)uVar3) {
        uVar5 = 0;
        do {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)((long)local_b8 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
        } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
        plVar10 = (long *)((long)local_b8 + (ulong)uVar5);
        plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
      }
      lVar9 = 0;
      if ((uVar3 & 4) != 0) {
        *(undefined4 *)plVar10 = *(undefined4 *)plVar6;
        lVar9 = 4;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
        lVar9 = lVar9 + 2;
      }
      local_c8 = local_b8;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
      }
    }
    else {
      local_b8[0] = plVar4[2];
      local_c8 = (long *)*plVar4;
    }
    local_c0 = plVar4[1];
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = 0;
    lVar9 = in_RDI[1];
    *plVar4 = (long)plVar1;
    if (0x3fffffffffffffffU - lVar9 < local_c0) goto LAB_001032cd;
    std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_c8);
    if (local_c8 != local_b8) {
      operator_delete(local_c8,local_b8[0] + 1);
    }
    if (local_e8 != &local_d8) {
      operator_delete(local_e8,CONCAT71(uStack_d7,local_d8) + 1);
    }
    if (*(long *)(lVar7 + 0x38) != 0) {
      Reader::getLocationLineAndColumn_abi_cxx11_((char *)local_a8);
      plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x10b9ab);
      plVar1 = plVar4 + 2;
      if ((long *)*plVar4 == plVar1) {
        uVar3 = plVar4[1] + 1;
        if ((uint)uVar3 < 8) {
          plVar6 = plVar1;
          plVar10 = local_78;
          if ((uVar3 & 4) == 0) goto LAB_001030eb;
LAB_00103240:
          *(int *)plVar10 = (int)*plVar6;
          lVar9 = 4;
        }
        else {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)((long)local_78 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
          } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
          plVar10 = (long *)((long)local_78 + (ulong)uVar5);
          plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
          if ((uVar3 & 4) != 0) goto LAB_00103240;
LAB_001030eb:
          lVar9 = 0;
        }
        if ((uVar3 & 2) != 0) {
          *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
          lVar9 = lVar9 + 2;
        }
        local_88 = local_78;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
        }
      }
      else {
        local_78[0] = plVar4[2];
        local_88 = (long *)*plVar4;
      }
      local_80 = plVar4[1];
      *plVar4 = (long)plVar1;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 0xd) goto LAB_001032cd;
      plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10b9b0);
      plVar1 = plVar4 + 2;
      if ((long *)*plVar4 == plVar1) {
        uVar3 = plVar4[1] + 1;
        if ((uint)uVar3 < 8) {
          plVar6 = plVar1;
          plVar10 = local_58;
          if ((uVar3 & 4) == 0) goto LAB_00103133;
LAB_00103208:
          *(int *)plVar10 = (int)*plVar6;
          lVar9 = 4;
        }
        else {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)((long)local_58 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
          } while (uVar5 < ((uint)uVar3 & 0xfffffff8));
          plVar10 = (long *)((long)local_58 + (ulong)uVar5);
          plVar6 = (long *)((ulong)uVar5 + (long)plVar1);
          if ((uVar3 & 4) != 0) goto LAB_00103208;
LAB_00103133:
          lVar9 = 0;
        }
        if ((uVar3 & 2) != 0) {
          *(undefined2 *)((long)plVar10 + lVar9) = *(undefined2 *)((long)plVar6 + lVar9);
          lVar9 = lVar9 + 2;
        }
        local_68 = local_58;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)((long)plVar10 + lVar9) = *(undefined1 *)((long)plVar6 + lVar9);
        }
      }
      else {
        local_58[0] = plVar4[2];
        local_68 = (long *)*plVar4;
      }
      local_60 = plVar4[1];
      *plVar4 = (long)plVar1;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      if (0x3fffffffffffffffU - in_RDI[1] < local_60) {
LAB_001032cd:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
    }
    lVar7 = lVar7 + 0x40;
    if (local_160 == lVar7) {
      lVar7 = *(long *)(lVar11 + 8);
      lVar11 = lVar11 + 8;
      local_160 = lVar7 + 0x200;
    }
  } while( true );
}



/* Json::CharReaderBuilder::operator[](std::__cxx11::string const&) */

void Json::CharReaderBuilder::operator[](string *param_1)

{
  Json::Value::operator[](param_1 + 8);
  return;
}



/* Json::CharReaderBuilder::strictMode(Json::Value*) */

void Json::CharReaderBuilder::strictMode(Value *param_1)

{
  Value *pVVar1;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,1000);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::CharReaderBuilder::setDefaults(Json::Value*) */

void Json::CharReaderBuilder::setDefaults(Value *param_1)

{
  Value *pVVar1;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,1000);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,false);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  Json::Value::Value(aVStack_48,true);
  pVVar1 = (Value *)Json::Value::operator[]((char *)param_1);
  Json::Value::operator=(pVVar1,aVStack_48);
  Json::Value::~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::CharReaderBuilder::CharReaderBuilder() */

void __thiscall Json::CharReaderBuilder::CharReaderBuilder(CharReaderBuilder *this)

{
  *(undefined ***)this = &PTR__CharReaderBuilder_0010d9f8;
  Json::Value::Value((Value *)(this + 8),0);
  setDefaults((Value *)(this + 8));
  return;
}



/* Json::Reader::Reader() */

void __thiscall Json::Reader::Reader(Reader *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 8;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  pvVar2 = operator_new(0x40);
  *(void **)this = pvVar2;
  puVar1 = (undefined8 *)((long)pvVar2 + (*(long *)(this + 8) * 4 - 4U & 0xfffffffffffffff8));
  pvVar2 = operator_new(0x200);
  *puVar1 = pvVar2;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(void **)(this + 0x10) = pvVar2;
  *(void **)(this + 0x18) = pvVar2;
  *(long *)(this + 0x20) = (long)pvVar2 + 0x200;
  *(undefined8 **)(this + 0x28) = puVar1;
  *(void **)(this + 0x30) = pvVar2;
  *(void **)(this + 0x38) = pvVar2;
  *(long *)(this + 0x40) = (long)pvVar2 + 0x200;
  *(undefined8 **)(this + 0x48) = puVar1;
  std::_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
  _M_initialize_map((_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)
                    (this + 0x50),0);
  *(undefined8 *)(this + 0xa8) = 0;
  *(Reader **)(this + 0xa0) = this + 0xb0;
  this[0xb0] = (Reader)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(Reader **)(this + 0xe8) = this + 0xf8;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (Reader)0x0;
  *(undefined4 *)(this + 0x108) = 1;
  this[0x10c] = (Reader)0x0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  return;
}



/* Json::Reader::Reader(Json::Features const&) */

void __thiscall Json::Reader::Reader(Reader *this,Features *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 8;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  pvVar3 = operator_new(0x40);
  *(void **)this = pvVar3;
  puVar1 = (undefined8 *)((long)pvVar3 + (*(long *)(this + 8) * 4 - 4U & 0xfffffffffffffff8));
  pvVar3 = operator_new(0x200);
  *puVar1 = pvVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(void **)(this + 0x10) = pvVar3;
  *(void **)(this + 0x18) = pvVar3;
  *(long *)(this + 0x20) = (long)pvVar3 + 0x200;
  *(undefined8 **)(this + 0x28) = puVar1;
  *(void **)(this + 0x30) = pvVar3;
  *(void **)(this + 0x38) = pvVar3;
  *(long *)(this + 0x40) = (long)pvVar3 + 0x200;
  *(undefined8 **)(this + 0x48) = puVar1;
  std::_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
  _M_initialize_map((_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)
                    (this + 0x50),0);
  *(undefined8 *)(this + 0xa8) = 0;
  *(Reader **)(this + 0xa0) = this + 0xb0;
  *(Reader **)(this + 0xe8) = this + 0xf8;
  uVar2 = *(undefined4 *)param_1;
  this[0xb0] = (Reader)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (Reader)0x0;
  *(undefined4 *)(this + 0x108) = uVar2;
  this[0x10c] = (Reader)0x0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  return;
}



/* Json::Reader::getStructuredErrors() const */

void Json::Reader::getStructuredErrors(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long *local_88;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_88 = *(long **)(in_RSI + 0x78);
  lVar6 = *(long *)(in_RSI + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(in_RSI + 0x80);
  lVar7 = *(long *)(in_RSI + 0x60);
  *in_RDI = (undefined1  [16])0x0;
  *(undefined8 *)in_RDI[1] = 0;
  while (lVar2 != lVar7) {
    local_58 = 0;
    lVar1 = *(long *)(in_RSI + 0xc0);
    lVar4 = *(long *)(lVar7 + 8);
    lVar5 = *(long *)(lVar7 + 0x10);
    local_60 = 0;
    local_68 = &local_58;
    std::__cxx11::string::_M_assign((string *)&local_68);
    plVar3 = *(long **)(*in_RDI + 8);
    if (plVar3 == *(long **)in_RDI[1]) {
      std::vector<Json::Reader::StructuredError,std::allocator<Json::Reader::StructuredError>>::
      _M_realloc_insert<Json::Reader::StructuredError_const&>();
    }
    else {
      plVar3[2] = (long)(plVar3 + 4);
      *plVar3 = lVar4 - lVar1;
      plVar3[1] = lVar5 - lVar1;
      std::__cxx11::string::_M_construct<char*>(plVar3 + 2,local_68,local_68 + local_60);
      *(long *)(*in_RDI + 8) = *(long *)(*in_RDI + 8) + 0x30;
    }
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    }
    lVar7 = lVar7 + 0x40;
    if (lVar6 == lVar7) {
      local_88 = local_88 + 1;
      lVar7 = *local_88;
      lVar6 = lVar7 + 0x200;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::OurReader::getStructuredErrors() const */

void Json::OurReader::getStructuredErrors(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long *local_88;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_88 = *(long **)(in_RSI + 0x78);
  lVar6 = *(long *)(in_RSI + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(in_RSI + 0x80);
  lVar7 = *(long *)(in_RSI + 0x60);
  *in_RDI = (undefined1  [16])0x0;
  *(undefined8 *)in_RDI[1] = 0;
  while (lVar2 != lVar7) {
    local_58 = 0;
    lVar1 = *(long *)(in_RSI + 0xc0);
    lVar4 = *(long *)(lVar7 + 8);
    lVar5 = *(long *)(lVar7 + 0x10);
    local_60 = 0;
    local_68 = &local_58;
    std::__cxx11::string::_M_assign((string *)&local_68);
    plVar3 = *(long **)(*in_RDI + 8);
    if (plVar3 == *(long **)in_RDI[1]) {
      std::vector<Json::OurReader::StructuredError,std::allocator<Json::OurReader::StructuredError>>
      ::_M_realloc_insert<Json::OurReader::StructuredError_const&>();
    }
    else {
      plVar3[2] = (long)(plVar3 + 4);
      *plVar3 = lVar4 - lVar1;
      plVar3[1] = lVar5 - lVar1;
      std::__cxx11::string::_M_construct<char*>(plVar3 + 2,local_68,local_68 + local_60);
      *(long *)(*in_RDI + 8) = *(long *)(*in_RDI + 8) + 0x30;
    }
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    }
    lVar7 = lVar7 + 0x40;
    if (lVar6 == lVar7) {
      local_88 = local_88 + 1;
      lVar7 = *local_88;
      lVar6 = lVar7 + 0x200;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::Reader::pushError(Json::Value const&, std::__cxx11::string const&, Json::Value const&) */

undefined8 Json::Reader::pushError(Value *param_1,string *param_2,Value *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined4 uStack_84;
  long lStack_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  long local_50;
  long local_40;
  
  lVar5 = *(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Json::Value::getOffsetStart();
  if (lVar2 <= lVar5) {
    lVar2 = Json::Value::getOffsetLimit();
    if (lVar2 <= lVar5) {
      lVar2 = Json::Value::getOffsetLimit();
      if (lVar2 <= lVar5) {
        lVar2 = *(long *)(param_1 + 0xc0);
        lVar3 = Json::Value::getOffsetStart();
        lVar5 = *(long *)(param_1 + 0xc0);
        local_78 = Json::Value::getOffsetLimit();
        local_78 = lVar5 + local_78;
        local_68 = 0;
        local_60 = 0;
        local_88 = 0xd;
        lStack_80 = lVar2 + lVar3;
        local_70 = &local_60;
        std::__cxx11::string::_M_assign((string *)&local_70);
        lVar2 = *(long *)(param_1 + 0xc0);
        local_50 = Json::Value::getOffsetStart();
        puVar1 = *(undefined8 **)(param_1 + 0x80);
        local_50 = lVar2 + local_50;
        if (puVar1 == (undefined8 *)(*(long *)(param_1 + 0x90) + -0x40)) {
          std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
          _M_push_back_aux<Json::Reader::ErrorInfo_const&>
                    ((deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)
                     (param_1 + 0x50),(ErrorInfo *)&local_88);
        }
        else {
          puVar1[2] = local_78;
          puVar1[3] = puVar1 + 5;
          *puVar1 = CONCAT44(uStack_84,local_88);
          puVar1[1] = lStack_80;
          std::__cxx11::string::_M_construct<char*>(puVar1 + 3,local_70,local_70 + local_68);
          puVar1[7] = local_50;
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 0x40;
        }
        if (local_70 != &local_60) {
          operator_delete(local_70,CONCAT71(uStack_5f,local_60) + 1);
        }
        uVar4 = 1;
        goto LAB_00103d3b;
      }
    }
  }
  uVar4 = 0;
LAB_00103d3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::addError(std::__cxx11::string const&, Json::Reader::Token&, char const*) */

undefined8 __thiscall
Json::Reader::addError(Reader *this,string *param_1,Token *param_2,char *param_3)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  char *local_40;
  long local_30;
  
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_58 = 0;
  local_50 = 0;
  local_60 = &local_50;
  std::__cxx11::string::_M_assign((string *)&local_60);
  puVar1 = *(undefined8 **)(this + 0x80);
  local_40 = param_3;
  if (puVar1 == (undefined8 *)(*(long *)(this + 0x90) + -0x40)) {
    std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
    _M_push_back_aux<Json::Reader::ErrorInfo_const&>
              ((deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)
               (this + 0x50),(ErrorInfo *)&local_78);
  }
  else {
    puVar1[2] = local_68;
    puVar1[3] = puVar1 + 5;
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    std::__cxx11::string::_M_construct<char*>(puVar1 + 3,local_60,local_60 + local_58);
    puVar1[7] = local_40;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 0x40;
  }
  if (local_60 != &local_50) {
    operator_delete(local_60,CONCAT71(uStack_4f,local_50) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::decodeDouble(Json::Reader::Token&, Json::Value&) */

undefined4 __thiscall Json::Reader::decodeDouble(Reader *this,Token *param_1,Value *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  istream *piVar3;
  long *plVar4;
  code **ppcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  code **ppcVar9;
  long *plVar11;
  long *plVar12;
  long lVar13;
  code **ppcVar14;
  long *plVar15;
  code **ppcVar16;
  long in_FS_OFFSET;
  long *local_2a0;
  Value local_278 [48];
  long *local_248;
  long local_240;
  long local_238 [2];
  long *local_228;
  undefined8 local_220;
  long local_218 [2];
  code **local_208;
  long local_200;
  code *local_1f8 [2];
  long *local_1e8;
  long local_1e0;
  long local_1d8 [2];
  code *local_1c8 [9];
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
  ulong uVar10;
  
  ppcVar16 = local_1c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_240 = 0;
  local_248 = local_238;
  std::__cxx11::string::_M_construct<char_const*>
            (&local_248,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  std::ios_base::ios_base((ios_base *)local_150);
  pcVar1 = _vtable;
  local_68 = (undefined1  [16])0x0;
  local_150[0] = (code *)&std::streambuf::vtable;
  local_58 = (undefined1  [16])0x0;
  local_70 = 0;
  local_78 = 0;
  local_1c8[0] = _vtable;
  *(code ***)((long)local_1c8 + *(long *)(_vtable + -0x18)) = _init;
  local_1c8[1] = (code *)0x0;
  ppcVar5 = _init;
  std::ios::init((streambuf *)(*(long *)(_vtable + -0x18) + (long)ppcVar16));
  local_1c8[0] = (code *)&std::__cxx11::istringstream::VTT;
  local_1c8[2] = std::__cxx11::stringbuf::_M_sync;
  local_150[0] = std::__cxx11::stringbuf::_M_sync;
  local_1c8[3] = (code *)0x0;
  local_1c8[4] = (code *)0x0;
  local_1c8[5] = (code *)0x0;
  local_1c8[6] = (code *)0x0;
  local_1c8[7] = (code *)0x0;
  local_1c8[8] = (code *)0x0;
  std::locale::locale(local_180);
  local_1c8[2] = (code *)&std::__cxx11::istringstream::VTT;
  local_178 = 0;
  local_170[0] = local_160;
  if ((local_248 == (long *)0x0) && (local_240 != 0)) {
    plVar12 = local_248;
    plVar4 = (long *)std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00104578:
    uVar7 = 0;
    do {
      uVar6 = (int)uVar7 + 8;
      uVar8 = (ulong)uVar6;
      *(undefined8 *)((long)ppcVar16 + uVar7) = *(undefined8 *)((long)ppcVar5 + uVar7);
      uVar7 = uVar8;
    } while (uVar6 < ((uint)plVar12 & 0xfffffff8));
    ppcVar14 = (code **)((long)ppcVar16 + uVar8);
    ppcVar9 = (code **)(uVar8 + (long)ppcVar5);
LAB_001044f7:
    lVar13 = 0;
    if (((ulong)plVar12 & 4) != 0) {
      *(undefined4 *)ppcVar14 = *(undefined4 *)ppcVar9;
      lVar13 = 4;
    }
    if (((ulong)plVar12 & 2) != 0) {
      *(undefined2 *)((long)ppcVar14 + lVar13) = *(undefined2 *)((long)ppcVar9 + lVar13);
      lVar13 = lVar13 + 2;
    }
    if (((ulong)plVar12 & 1) != 0) {
      *(undefined1 *)((long)ppcVar14 + lVar13) = *(undefined1 *)((long)ppcVar9 + lVar13);
    }
  }
  else {
    std::__cxx11::string::_M_construct<char_const*>(local_170,local_248,local_240 + (long)local_248)
    ;
    local_178 = 8;
    std::__cxx11::stringbuf::_M_sync((char *)(local_1c8 + 2),(ulong)local_170[0],0);
    std::ios::init((streambuf *)local_150);
    piVar3 = std::istream::_M_extract<double>((double *)ppcVar16);
    if (((byte)piVar3[*(long *)(*(long *)piVar3 + -0x18) + 0x20] & 5) == 0) {
      uVar2 = 1;
      Json::Value::Value(local_278,0.0);
      Json::Value::operator=(param_2,local_278);
      Json::Value::~Value(local_278);
      goto LAB_001043bd;
    }
    local_2a0 = local_218;
    local_220 = 0;
    local_228 = local_2a0;
    std::__cxx11::string::_M_construct<char_const*>
              (&local_228,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    ppcVar14 = local_1f8;
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)&local_228,0,(char *)0x0,0x10ba83);
    local_208 = (code **)*plVar4;
    ppcVar5 = (code **)(plVar4 + 2);
    ppcVar16 = ppcVar14;
    if (local_208 == ppcVar5) {
      plVar12 = (long *)(plVar4[1] + 1);
      ppcVar9 = ppcVar5;
      local_208 = ppcVar14;
      if (7 < (uint)plVar12) goto LAB_00104578;
      goto LAB_001044f7;
    }
    local_1f8[0] = (code *)plVar4[2];
  }
  local_200 = plVar4[1];
  *plVar4 = (long)ppcVar5;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  if (0x3fffffffffffffffU - local_200 < 0x12) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_208,0x10ba85);
  plVar12 = plVar4 + 2;
  if ((long *)*plVar4 == plVar12) {
    uVar7 = plVar4[1] + 1;
    plVar11 = plVar12;
    plVar15 = local_1d8;
    if (7 < (uint)uVar7) {
      uVar8 = 0;
      do {
        uVar6 = (int)uVar8 + 8;
        uVar10 = (ulong)uVar6;
        *(undefined8 *)((long)local_1d8 + uVar8) = *(undefined8 *)((long)plVar12 + uVar8);
        uVar8 = uVar10;
      } while (uVar6 < ((uint)uVar7 & 0xfffffff8));
      plVar15 = (long *)((long)local_1d8 + uVar10);
      plVar11 = (long *)(uVar10 + (long)plVar12);
    }
    lVar13 = 0;
    if ((uVar7 & 4) != 0) {
      *(int *)plVar15 = (int)*plVar11;
      lVar13 = 4;
    }
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)((long)plVar15 + lVar13) = *(undefined2 *)((long)plVar11 + lVar13);
      lVar13 = lVar13 + 2;
    }
    local_1e8 = local_1d8;
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)((long)plVar15 + lVar13) = *(undefined1 *)((long)plVar11 + lVar13);
    }
  }
  else {
    local_1d8[0] = plVar4[2];
    local_1e8 = (long *)*plVar4;
  }
  local_1e0 = plVar4[1];
  *plVar4 = (long)plVar12;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  uVar2 = addError(this,(string *)&local_1e8,param_1,(char *)0x0);
  if (local_1e8 != local_1d8) {
    operator_delete(local_1e8,local_1d8[0] + 1);
  }
  if (local_208 != ppcVar16) {
    operator_delete(local_208,(ulong)(local_1f8[0] + 1));
  }
  if (local_228 != local_2a0) {
    operator_delete(local_228,local_218[0] + 1);
  }
LAB_001043bd:
  local_1c8[0] = (code *)&std::__cxx11::istringstream::VTT;
  local_150[0] = std::__cxx11::stringbuf::_M_sync;
  local_1c8[2] = (code *)&std::__cxx11::istringstream::VTT;
  if (local_170[0] != local_160) {
    operator_delete(local_170[0],local_160[0] + 1);
  }
  local_1c8[2] = std::__cxx11::stringbuf::_M_sync;
  std::locale::~locale(local_180);
  local_1c8[0] = pcVar1;
  *(code ***)((long)local_1c8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_150[0] = (code *)&std::streambuf::vtable;
  local_1c8[1] = (code *)0x0;
  std::ios_base::~ios_base((ios_base *)local_150);
  if (local_248 != local_238) {
    operator_delete(local_248,local_238[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::decodeNumber(Json::Reader::Token&, Json::Value&) */

undefined8 __thiscall Json::Reader::decodeNumber(Reader *this,Token *param_1,Value *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  pcVar5 = *(char **)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *pcVar5;
  if (cVar1 == '-') {
    pcVar8 = *(char **)(param_1 + 0x10);
    pcVar5 = pcVar5 + 1;
    if (pcVar5 < pcVar8) {
      uVar6 = 0xccccccccccccccc;
      uVar9 = 0x8000000000000000;
      goto LAB_00104635;
    }
LAB_00104798:
    uVar7 = 0;
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x10);
    uVar9 = 0xffffffffffffffff;
    uVar6 = 0x1999999999999999;
    if (pcVar8 <= pcVar5) goto LAB_00104798;
LAB_00104635:
    uVar7 = 0;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      if (9 < (byte)(cVar2 - 0x30U)) {
LAB_00104718:
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = decodeDouble(this,param_1,param_2);
          return uVar4;
        }
        goto LAB_0010479c;
      }
      iVar3 = cVar2 + -0x30;
      if (uVar6 <= uVar7) {
        if (((uVar6 < uVar7) || (pcVar8 != pcVar5)) || (uVar9 % 10 < (ulong)(long)iVar3))
        goto LAB_00104718;
        uVar7 = (long)iVar3 + uVar7 * 10;
        break;
      }
      uVar7 = (long)iVar3 + uVar7 * 10;
    } while (pcVar8 != pcVar5);
    if (uVar9 == uVar7) {
      if (cVar1 == '-') {
        Json::Value::Value(aVStack_48,-0x8000000000000000);
        goto LAB_001046c6;
      }
LAB_0010477f:
      if (0x7fffffff < uVar7) {
        Json::Value::Value(aVStack_48,uVar7);
        goto LAB_001046c6;
      }
    }
    else {
      if (cVar1 != '-') goto LAB_0010477f;
      uVar7 = -uVar7;
    }
  }
  Json::Value::Value(aVStack_48,uVar7);
LAB_001046c6:
  Json::Value::operator=(param_2,aVStack_48);
  Json::Value::~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010479c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::decodeNumber(Json::Reader::Token&) */

undefined4 __thiscall Json::Reader::decodeNumber(Reader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_58,0);
  uVar1 = decodeNumber(this,param_1,aVStack_58);
  if ((char)uVar1 != '\0') {
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
  }
  Json::Value::~Value(aVStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::decodeDouble(Json::Reader::Token&) */

undefined4 __thiscall Json::Reader::decodeDouble(Reader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_58,0);
  uVar1 = decodeDouble(this,param_1,aVStack_58);
  if ((char)uVar1 != '\0') {
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
  }
  Json::Value::~Value(aVStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::decodeUnicodeEscapeSequence(Json::Reader::Token&, char const*&, char const*,
   unsigned int&) */

undefined4 __thiscall
Json::Reader::decodeUnicodeEscapeSequence
          (Reader *this,Token *param_1,char **param_2,char *param_3,uint *param_4)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  long local_60;
  long *local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  pcVar2 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)param_3 - (long)pcVar2 < 4) {
    local_60 = 0x3c;
    local_58 = local_48;
    local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    lVar3 = _UNK_0010da18;
    local_48[0] = local_60;
    *local_58 = __LC29;
    local_58[1] = lVar3;
    lVar3 = _UNK_0010da28;
    local_58[2] = __LC30;
    local_58[3] = lVar3;
    lVar3 = _UNK_0010da38;
    local_58[4] = __LC31;
    local_58[5] = lVar3;
    uVar5 = _UNK_0010da48;
    *(undefined8 *)((long)local_58 + 0x2c) = __LC32;
    *(undefined8 *)((long)local_58 + 0x34) = uVar5;
    local_50 = local_60;
    *(undefined1 *)((long)local_58 + local_60) = 0;
    uVar7 = addError(this,(string *)&local_58,param_1,pcVar2);
    if (local_58 != local_48) {
LAB_00104b21:
      operator_delete(local_58,local_48[0] + 1);
    }
  }
  else {
    pcVar10 = pcVar2 + 1;
    uVar8 = 0;
    do {
      *param_2 = pcVar10;
      cVar1 = pcVar10[-1];
      iVar6 = (int)cVar1;
      iVar9 = uVar8 * 0x10;
      if ((byte)(cVar1 - 0x30U) < 10) {
        uVar8 = iVar9 + -0x30 + iVar6;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar8 = iVar9 + -0x57 + iVar6;
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          local_60 = 0x42;
          local_58 = local_48;
          local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
          lVar3 = _UNK_0010da18;
          local_48[0] = local_60;
          *local_58 = __LC29;
          local_58[1] = lVar3;
          lVar4 = _UNK_0010da28;
          lVar3 = __LC30;
          *(undefined2 *)(local_58 + 8) = 0x2e64;
          local_58[2] = lVar3;
          local_58[3] = lVar4;
          lVar3 = _UNK_0010da58;
          local_58[4] = __LC33;
          local_58[5] = lVar3;
          lVar3 = _UNK_0010da68;
          local_58[6] = __LC34;
          local_58[7] = lVar3;
          local_50 = local_60;
          *(undefined1 *)((long)local_58 + local_60) = 0;
          uVar7 = addError(this,(string *)&local_58,param_1,pcVar10);
          if (local_58 == local_48) goto LAB_00104a3a;
          goto LAB_00104b21;
        }
        uVar8 = iVar9 + -0x37 + iVar6;
      }
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != pcVar2 + 5);
    *param_4 = uVar8;
    uVar7 = 1;
  }
LAB_00104a3a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::decodeUnicodeCodePoint(Json::Reader::Token&, char const*&, char const*, unsigned
   int&) */

undefined4 __thiscall
Json::Reader::decodeUnicodeCodePoint
          (Reader *this,Token *param_1,char **param_2,char *param_3,uint *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = decodeUnicodeEscapeSequence(this,param_1,param_2,param_3,param_4);
  if ((char)uVar5 == '\0') {
LAB_00104e20:
    uVar5 = 0;
  }
  else {
    if (0x3ff < *param_4 - 0xd800) goto LAB_00104d29;
    pcVar6 = *param_2;
    if ((long)param_3 - (long)pcVar6 < 6) {
      local_68 = local_58;
      local_70 = 0x43;
      local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      lVar1 = _UNK_0010da78;
      *local_68 = __LC35;
      local_68[1] = lVar1;
      lVar1 = _UNK_0010da88;
      local_68[2] = __LC36;
      local_68[3] = lVar1;
      lVar1 = _UNK_0010da98;
      local_68[4] = __LC37;
      local_68[5] = lVar1;
      lVar1 = _UNK_0010daa8;
      local_68[6] = __LC38;
      local_68[7] = lVar1;
      *(undefined4 *)((long)local_68 + 0x3f) = 0x2e726961;
      *(undefined1 *)((long)local_68 + local_70) = 0;
    }
    else {
      *param_2 = pcVar6 + 1;
      pcVar3 = pcVar6 + 1;
      if (*pcVar6 == '\\') {
        *param_2 = pcVar6 + 2;
        pcVar3 = pcVar6 + 2;
        if (pcVar6[1] == 'u') {
          cVar4 = decodeUnicodeEscapeSequence(this,param_1,param_2,param_3,(uint *)&local_70);
          if (cVar4 != '\0') {
            *param_4 = ((*param_4 & 0x3ff) << 10 | (uint)local_70 & 0x3ff) + 0x10000;
            goto LAB_00104d29;
          }
          goto LAB_00104e20;
        }
      }
      pcVar6 = pcVar3;
      local_68 = local_58;
      local_70 = 0x4f;
      local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      lVar1 = _UNK_0010dab8;
      *local_68 = __LC39;
      local_68[1] = lVar1;
      lVar1 = _UNK_0010dac8;
      local_68[2] = __LC40;
      local_68[3] = lVar1;
      lVar1 = _UNK_0010dad8;
      local_68[4] = __LC41;
      local_68[5] = lVar1;
      lVar1 = _UNK_0010dae8;
      local_68[6] = __LC42;
      local_68[7] = lVar1;
      uVar2 = _UNK_0010daf8;
      *(undefined8 *)((long)local_68 + 0x3f) = __LC43;
      *(undefined8 *)((long)local_68 + 0x47) = uVar2;
      *(undefined1 *)((long)local_68 + local_70) = 0;
    }
    local_60 = local_70;
    local_58[0] = local_70;
    uVar5 = addError(this,(string *)&local_68,param_1,pcVar6);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
  }
LAB_00104d29:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::decodeString(Json::Reader::Token&, std::__cxx11::string&) */

undefined4 __thiscall Json::Reader::decodeString(Reader *this,Token *param_1,string *param_2)

{
  string sVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  string *psVar6;
  string *psVar7;
  string *psVar8;
  ulong uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  string *local_78;
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::string::reserve((ulong)param_2);
  psVar6 = (string *)(*(long *)(param_1 + 8) + 1);
  psVar8 = (string *)(*(long *)(param_1 + 0x10) + -1);
  local_78 = psVar6;
  if (psVar6 != psVar8) {
    while( true ) {
      sVar1 = *psVar6;
      psVar7 = psVar6 + 1;
      local_78 = psVar7;
      if (sVar1 == (string)0x22) break;
      if (sVar1 != (string)0x5c) {
        uVar2 = *(ulong *)(param_2 + 8);
        psVar6 = *(string **)param_2;
        if (psVar6 == param_2 + 0x10) {
          uVar9 = 0xf;
        }
        else {
          uVar9 = *(ulong *)(param_2 + 0x10);
        }
        if (uVar9 < uVar2 + 1) {
          std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
          psVar6 = *(string **)param_2;
        }
        psVar6[uVar2] = sVar1;
        *(ulong *)(param_2 + 8) = uVar2 + 1;
        *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        goto LAB_00104f34;
      }
      if (psVar7 == psVar8) {
        local_70 = 0x1f;
        local_68 = local_58;
        local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        uVar2 = _UNK_0010db08;
        *local_68 = __LC44;
        local_68[1] = uVar2;
        uVar3 = _UNK_0010db18;
        *(undefined8 *)((long)local_68 + 0xf) = __LC45;
        *(undefined8 *)((long)local_68 + 0x17) = uVar3;
        *(byte *)((long)local_68 + local_70) = 0;
LAB_00105049:
        local_60 = local_70;
        local_58[0] = local_70;
        uVar5 = addError(this,(string *)&local_68,param_1,(char *)psVar8);
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        goto LAB_0010506d;
      }
      psVar7 = psVar6 + 2;
      sVar1 = psVar6[1];
      local_78 = psVar7;
      if ('u' < (char)sVar1) {
switchD_00104ef8_caseD_5d:
        local_70 = 0x1d;
        local_68 = local_58;
        local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        uVar2 = _UNK_0010db28;
        *local_68 = __LC46;
        local_68[1] = uVar2;
        uVar3 = _UNK_0010db18;
        *(undefined8 *)((long)local_68 + 0xd) = __LC45;
        *(undefined8 *)((long)local_68 + 0x15) = uVar3;
        *(byte *)((long)local_68 + local_70) = 0;
        psVar8 = psVar7;
        goto LAB_00105049;
      }
      if ((char)sVar1 < '\\') {
        if (sVar1 == (string)0x22) {
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x22;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        }
        else {
          if (sVar1 != (string)0x2f) goto switchD_00104ef8_caseD_5d;
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x2f;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        }
      }
      else {
        switch(sVar1) {
        case (string)0x5c:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x5c;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        default:
          goto switchD_00104ef8_caseD_5d;
        case (string)0x62:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x8;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x66:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xc;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x6e:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xa;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x72:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xd;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x74:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x9;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x75:
          uVar5 = decodeUnicodeCodePoint
                            (this,param_1,(char **)&local_78,(char *)psVar8,(uint *)&local_70);
          if ((char)uVar5 == '\0') goto LAB_0010506d;
          uVar4 = (uint)local_70;
          local_58[0] = local_58[0] & 0xffffffffffffff00;
          local_60 = 0;
          bVar10 = (byte)local_70;
          local_68 = local_58;
          if ((uint)local_70 < 0x80) {
            std::__cxx11::string::resize((ulong)&local_68,'\x01');
            *(byte *)local_68 = bVar10;
LAB_00105340:
            if (0x3fffffffffffffffU - *(long *)(param_2 + 8) < local_60) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::append");
            }
          }
          else {
            if ((uint)local_70 < 0x800) {
              std::__cxx11::string::resize((ulong)&local_68,'\x02');
              *(byte *)((long)local_68 + 1) = bVar10 & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 6) | 0xc0;
              goto LAB_00105340;
            }
            if ((uint)local_70 < 0x10000) {
              std::__cxx11::string::resize((ulong)&local_68,'\x03');
              *(byte *)((long)local_68 + 2) = bVar10 & 0x3f | 0x80;
              *(byte *)((long)local_68 + 1) = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 0xc) | 0xe0;
              goto LAB_00105340;
            }
            if ((uint)local_70 < 0x110000) {
              std::__cxx11::string::resize((ulong)&local_68,'\x04');
              *(byte *)((long)local_68 + 3) = bVar10 & 0x3f | 0x80;
              *(byte *)((long)local_68 + 2) = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              *(byte *)((long)local_68 + 1) = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 0x12) | 0xf0;
              goto LAB_00105340;
            }
          }
          std::__cxx11::string::_M_append((char *)param_2,(ulong)local_68);
          psVar7 = local_78;
          if (local_68 != local_58) {
            operator_delete(local_68,local_58[0] + 1);
            psVar7 = local_78;
          }
        }
      }
LAB_00104f34:
      psVar6 = psVar7;
      if (psVar8 == psVar7) break;
    }
  }
  uVar5 = 1;
LAB_0010506d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::decodeString(Json::Reader::Token&) */

undefined4 __thiscall Json::Reader::decodeString(Reader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_98 [48];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  uVar1 = decodeString(this,param_1,(string *)&local_68);
  if ((char)uVar1 != '\0') {
    Json::Value::Value(aVStack_98,(string *)&local_68);
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
    Json::Value::~Value(aVStack_98);
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::pushError(Json::Value const&, std::__cxx11::string const&) */

undefined8 Json::Reader::pushError(Value *param_1,string *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined4 uStack_84;
  long lStack_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 200);
  lVar2 = *(long *)(param_1 + 0xc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Json::Value::getOffsetStart();
  if (lVar4 <= lVar1 - lVar2) {
    lVar4 = Json::Value::getOffsetLimit();
    if (lVar4 <= lVar1 - lVar2) {
      lVar1 = *(long *)(param_1 + 0xc0);
      lVar4 = Json::Value::getOffsetStart();
      lVar2 = *(long *)(param_1 + 0xc0);
      local_78 = Json::Value::getOffsetLimit();
      local_78 = lVar2 + local_78;
      local_60 = 0;
      local_68 = 0;
      local_88 = 0xd;
      lStack_80 = lVar1 + lVar4;
      local_70 = &local_60;
      std::__cxx11::string::_M_assign((string *)&local_70);
      puVar3 = *(undefined8 **)(param_1 + 0x80);
      local_50 = 0;
      if (puVar3 == (undefined8 *)(*(long *)(param_1 + 0x90) + -0x40)) {
        std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
        _M_push_back_aux<Json::Reader::ErrorInfo_const&>
                  ((deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)
                   (param_1 + 0x50),(ErrorInfo *)&local_88);
      }
      else {
        puVar3[2] = local_78;
        puVar3[3] = puVar3 + 5;
        *puVar3 = CONCAT44(uStack_84,local_88);
        puVar3[1] = lStack_80;
        std::__cxx11::string::_M_construct<char*>(puVar3 + 3,local_70,local_70 + local_68);
        puVar3[7] = local_50;
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 0x40;
      }
      if (local_70 != &local_60) {
        operator_delete(local_70,CONCAT71(uStack_5f,local_60) + 1);
      }
      uVar5 = 1;
      goto LAB_001057f8;
    }
  }
  uVar5 = 0;
LAB_001057f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::recoverFromError(Json::Reader::TokenType) */

undefined8 __thiscall Json::Reader::recoverFromError(Reader *this,int param_2)

{
  deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this_00;
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_78 [8];
  long local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  long local_30;
  
  this_00 = (deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)(this + 0x50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
          ((*(long *)(this + 0x98) - *(long *)(this + 0x78) >> 3) + -1 +
          (ulong)(*(long *)(this + 0x98) == 0)) * 8 +
          (*(long *)(this + 0x70) - *(long *)(this + 0x60) >> 6);
  do {
    cVar3 = readToken(this,(Token *)local_78);
    if (cVar3 == '\0') {
      plVar1 = *(long **)(this + 0x78);
      lVar2 = *(long *)(this + 0x60);
      uVar4 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
              ((*(long *)(this + 0x98) - (long)plVar1 >> 3) + -1 +
              (ulong)(*(long *)(this + 0x98) == 0)) * 8 + (*(long *)(this + 0x70) - lVar2 >> 6);
      if (uVar4 < uVar6) {
        std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
        _M_default_append(this_00,uVar6 - uVar4);
      }
      else if (uVar6 < uVar4) {
        local_50 = *(long *)(this + 0x68);
        uVar4 = (lVar2 - local_50 >> 6) + uVar6;
        if ((long)uVar4 < 0) {
          uVar5 = ~(~uVar4 >> 3);
LAB_00105b8f:
          local_40 = plVar1 + uVar5;
          local_50 = *local_40;
          lStack_48 = local_50 + 0x200;
          local_58 = local_50 + (uVar4 + uVar5 * -8) * 0x40;
        }
        else {
          if (7 < (long)uVar4) {
            uVar5 = (long)uVar4 >> 3;
            goto LAB_00105b8f;
          }
          local_58 = lVar2 + uVar6 * 0x40;
          lStack_48 = *(long *)(this + 0x70);
          local_40 = plVar1;
        }
        std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_erase_at_end
                  (this_00,&local_58);
      }
    }
  } while ((local_78[0] != 0) && (local_78[0] != param_2));
  plVar1 = *(long **)(this + 0x78);
  lVar2 = *(long *)(this + 0x60);
  uVar4 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
          ((*(long *)(this + 0x98) - (long)plVar1 >> 3) + -1 + (ulong)(*(long *)(this + 0x98) == 0))
          * 8 + (*(long *)(this + 0x70) - lVar2 >> 6);
  if (uVar4 < uVar6) {
    std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_default_append
              (this_00,uVar6 - uVar4);
    goto LAB_00105ad6;
  }
  if (uVar4 <= uVar6) goto LAB_00105ad6;
  local_50 = *(long *)(this + 0x68);
  uVar4 = (lVar2 - local_50 >> 6) + uVar6;
  if ((long)uVar4 < 0) {
    uVar6 = ~(~uVar4 >> 3);
LAB_00105bec:
    local_40 = plVar1 + uVar6;
    local_50 = *local_40;
    lStack_48 = local_50 + 0x200;
    local_58 = local_50 + (uVar4 + uVar6 * -8) * 0x40;
  }
  else {
    if (7 < (long)uVar4) {
      uVar6 = (long)uVar4 >> 3;
      goto LAB_00105bec;
    }
    local_58 = lVar2 + uVar6 * 0x40;
    lStack_48 = *(long *)(this + 0x70);
    local_40 = plVar1;
  }
  std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_erase_at_end
            (this_00,&local_58);
LAB_00105ad6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::addErrorAndRecover(std::__cxx11::string const&, Json::Reader::Token&,
   Json::Reader::TokenType) */

void __thiscall
Json::Reader::addErrorAndRecover(Reader *this,string *param_1,Token *param_2,undefined4 param_4)

{
  addError(this,param_1,param_2,(char *)0x0);
  recoverFromError(this,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::readObject(Json::Reader::Token&) */

undefined4 Json::Reader::readObject(Token *param_1)

{
  void *pvVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  Token *pTVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  ulong local_130;
  int local_128 [8];
  int local_108 [8];
  Value local_e8 [48];
  ulong local_b8 [6];
  ulong *local_88;
  ulong local_80;
  ulong auStack_78 [2];
  ulong *local_68;
  ulong local_60;
  ulong auStack_58 [5];
  
  auStack_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
  local_88 = auStack_78;
  Json::Value::Value(local_e8,7);
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == *(long *)(param_1 + 0x38)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::swapPayload(*(Value **)(lVar7 + -8));
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == *(long *)(param_1 + 0x38)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::setOffsetStart(*(long *)(lVar7 + -8));
LAB_00105d1d:
  do {
    uVar5 = readToken((Reader *)param_1,(Token *)local_128);
    if ((char)uVar5 == '\0') {
LAB_00105f86:
      local_b8[0] = 0x21;
      local_68 = auStack_58;
      local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_b8);
      uVar10 = _UNK_0010db78;
      auStack_58[0] = local_b8[0];
      *local_68 = __LC52;
      local_68[1] = uVar10;
      uVar8 = _UNK_0010db88;
      uVar10 = __LC53;
      *(undefined1 *)(local_68 + 4) = 0x65;
      local_68[2] = uVar10;
      local_68[3] = uVar8;
      local_60 = local_b8[0];
      *(undefined1 *)((long)local_68 + local_b8[0]) = 0;
      addError((Reader *)param_1,(string *)&local_68,(Token *)local_128,(char *)0x0);
      uVar5 = recoverFromError((Reader *)param_1,2);
      if (local_68 != auStack_58) {
LAB_00106038:
        operator_delete(local_68,auStack_58[0] + 1);
      }
      goto LAB_00106049;
    }
    if (local_128[0] == 0xc) {
      while (cVar4 = readToken((Reader *)param_1,(Token *)local_128), local_128[0] == 0xc) {
        if (cVar4 == '\0') goto LAB_00105f86;
      }
      if (cVar4 == '\0') goto LAB_00105f86;
    }
    if (local_128[0] == 2) {
      if (local_80 != 0) {
        local_80 = 0;
        *(undefined1 *)local_88 = 0;
        goto LAB_00105f86;
      }
      goto LAB_00106049;
    }
    local_80 = 0;
    *(undefined1 *)local_88 = 0;
    if (local_128[0] == 5) {
      cVar4 = decodeString((Reader *)param_1,(Token *)local_128,(string *)&local_88);
      if (cVar4 != '\0') goto LAB_00105e77;
LAB_0010633f:
      uVar5 = recoverFromError((Reader *)param_1,2);
      goto LAB_00106049;
    }
    if ((local_128[0] != 6) || (param_1[0x10b] == (Token)0x0)) goto LAB_00105f86;
    Json::Value::Value((Value *)local_b8,0);
    cVar4 = decodeNumber((Reader *)param_1,(Token *)local_128,(Value *)local_b8);
    if (cVar4 == '\0') {
      uVar5 = recoverFromError((Reader *)param_1,2);
      Json::Value::~Value((Value *)local_b8);
      goto LAB_00106049;
    }
    Json::Value::asString_abi_cxx11_();
    uVar8 = local_60;
    puVar3 = local_68;
    uVar10 = auStack_78[0];
    puVar2 = local_88;
    if (local_68 == auStack_58) {
      local_80 = local_60;
      if (local_60 != 0) {
        if (local_60 == 1) {
          *(undefined1 *)local_88 = (undefined1)auStack_58[0];
          local_80 = local_60;
        }
        else {
          uVar10 = local_60 & 0xffffffff;
          uVar11 = (uint)local_60;
          if (uVar11 < 8) {
            if ((local_60 & 4) == 0) {
              if ((uVar11 != 0) &&
                 (*(char *)local_88 = (char)*local_68, local_80 = local_60, (uVar8 & 2) != 0)) {
                *(undefined2 *)((long)local_88 + (uVar10 - 2)) =
                     *(undefined2 *)((long)puVar3 + (uVar10 - 2));
              }
            }
            else {
              *(int *)local_88 = (int)*local_68;
              *(undefined4 *)((long)local_88 + (uVar10 - 4)) =
                   *(undefined4 *)((long)puVar3 + (uVar10 - 4));
              local_80 = local_60;
            }
          }
          else {
            *local_88 = auStack_58[0];
            uVar8 = uVar8 & 0xffffffff;
            *(undefined8 *)((long)local_88 + (uVar8 - 8)) =
                 *(undefined8 *)((long)auStack_58 + (uVar8 - 8));
            lVar7 = (long)local_88 - ((ulong)(local_88 + 1) & 0xfffffffffffffff8);
            uVar11 = (int)lVar7 + uVar11 & 0xfffffff8;
            local_80 = local_60;
            if (7 < uVar11) {
              uVar6 = 0;
              do {
                uVar10 = (ulong)uVar6;
                uVar6 = uVar6 + 8;
                *(undefined8 *)(((ulong)(local_88 + 1) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)((long)auStack_58 + (uVar10 - lVar7));
              } while (uVar6 < uVar11);
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
        if (puVar2 != (ulong *)0x0) {
          local_68 = puVar2;
          auStack_58[0] = uVar10;
          goto LAB_00105e42;
        }
      }
      auStack_78[0] = auStack_58[0];
      local_80 = local_60;
      local_88 = local_68;
      local_68 = auStack_58;
    }
LAB_00105e42:
    local_60 = 0;
    *(undefined1 *)local_68 = 0;
    if (local_68 != auStack_58) {
      operator_delete(local_68,auStack_58[0] + 1);
    }
    Json::Value::~Value((Value *)local_b8);
LAB_00105e77:
    pTVar9 = (Token *)local_108;
    cVar4 = readToken((Reader *)param_1,pTVar9);
    if ((cVar4 == '\0') || (local_108[0] != 0xb)) {
      local_68 = auStack_58;
      local_b8[0] = 0x24;
      local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_b8);
      uVar10 = _UNK_0010db38;
      auStack_58[0] = local_b8[0];
      *local_68 = __LC48;
      local_68[1] = uVar10;
      uVar8 = _UNK_0010db48;
      uVar10 = __LC49;
      *(undefined4 *)(local_68 + 4) = 0x656d616e;
      local_68[2] = uVar10;
      local_68[3] = uVar8;
      *(undefined1 *)((long)local_68 + local_b8[0]) = 0;
LAB_00106286:
      local_60 = auStack_58[0];
      addError((Reader *)param_1,(string *)&local_68,pTVar9,(char *)0x0);
      uVar5 = recoverFromError((Reader *)param_1,2);
      if (local_68 != auStack_58) goto LAB_00106038;
      goto LAB_00106049;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
    }
    local_b8[0] = Json::Value::operator[](*(string **)(lVar7 + -8));
    std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
              ((deque<Json::Value*,std::allocator<Json::Value*>> *)param_1,(Value **)local_b8);
    cVar4 = readValue((Reader *)param_1);
    pvVar1 = *(void **)(param_1 + 0x30);
    if (pvVar1 == *(void **)(param_1 + 0x38)) {
      operator_delete(pvVar1,0x200);
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + -8);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
      *(long *)(param_1 + 0x38) = lVar7;
      *(long *)(param_1 + 0x40) = lVar7 + 0x200;
      *(long *)(param_1 + 0x30) = lVar7 + 0x1f8;
    }
    else {
      *(long *)(param_1 + 0x30) = (long)pvVar1 + -8;
    }
    if (cVar4 == '\0') goto LAB_0010633f;
    cVar4 = readToken((Reader *)param_1,(Token *)local_b8);
    if (cVar4 == '\0') {
LAB_001062b7:
      local_130 = 0x28;
      local_68 = auStack_58;
      local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_130);
      uVar10 = _UNK_0010db58;
      auStack_58[0] = local_130;
      *local_68 = __LC50;
      local_68[1] = uVar10;
      uVar8 = _UNK_0010db68;
      uVar10 = __LC51;
      local_68[4] = 0x6e6f69746172616c;
      local_68[2] = uVar10;
      local_68[3] = uVar8;
      *(undefined1 *)((long)local_68 + local_130) = 0;
      pTVar9 = (Token *)local_b8;
      goto LAB_00106286;
    }
    if (((uint)local_b8[0] & 0xfffffff7) == 2) break;
    if ((uint)local_b8[0] != 0xc) goto LAB_001062b7;
LAB_00105f38:
    do {
      cVar4 = readToken((Reader *)param_1,(Token *)local_b8);
      if ((uint)local_b8[0] != 0xc) goto LAB_00105f4f;
    } while (cVar4 != '\0');
  } while( true );
  if ((uint)local_b8[0] == 0xc) goto LAB_00105f38;
LAB_00105f4f:
  if ((uint)local_b8[0] == 2) {
LAB_00106049:
    Json::Value::~Value(local_e8);
    if (local_88 != auStack_78) {
      operator_delete(local_88,auStack_78[0] + 1);
    }
    if (auStack_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
  goto LAB_00105d1d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::readValue() */

undefined4 __thiscall Json::Reader::readValue(Reader *this)

{
  Reader RVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  allocator *paVar8;
  long lVar9;
  bool bVar10;
  string *this_00;
  Reader *this_01;
  long in_FS_OFFSET;
  long lStack_168;
  undefined8 auStack_160 [4];
  Value aVStack_140 [48];
  long *plStack_110;
  long lStack_108;
  long alStack_100 [3];
  long lStack_e8;
  string *psStack_e0;
  int local_b8 [8];
  long local_98 [6];
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  paVar8 = (allocator *)(*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 3);
  if ((allocator *)0x3e8 <
      paVar8 + ((*(long *)(this + 0x48) - *(long *)(this + 0x28) >> 3) + -1 +
               (ulong)(*(long *)(this + 0x48) == 0)) * 0x40 +
               (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 3)) {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_68,"Exceeded stackLimit in readValue().",paVar8);
    this_00 = (string *)&local_68;
    Json::throwRuntimeError((string *)&local_68);
    lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
    psStack_e0 = (string *)&local_68;
    Json::Value::Value(aVStack_140,6);
    lVar7 = *(long *)((Reader *)this_00 + 0x30);
    if (lVar7 == *(long *)((Reader *)this_00 + 0x38)) {
      lVar7 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar7 + -8));
    lVar7 = *(long *)((Reader *)this_00 + 0x30);
    if (lVar7 == *(long *)((Reader *)this_00 + 0x38)) {
      lVar7 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar7 + -8));
    this_01 = (Reader *)this_00;
    skipSpaces((Reader *)this_00);
    if ((*(char **)((Reader *)this_00 + 0xd0) != *(char **)((Reader *)this_00 + 200)) &&
       (**(char **)((Reader *)this_00 + 0xd0) == ']')) {
      readToken(this_01,(Token *)auStack_160);
LAB_00106c10:
      uVar6 = 1;
LAB_00106b60:
      Json::Value::~Value(aVStack_140);
      if (lStack_e8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    lVar7 = *(long *)((Reader *)this_00 + 0x30);
    lVar9 = *(long *)((Reader *)this_00 + 0x48);
    if (lVar7 == *(long *)((Reader *)this_00 + 0x38)) goto LAB_00106aac;
    do {
      auStack_160[0] = Json::Value::operator[]((int)*(undefined8 *)(lVar7 + -8));
      std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
                ((deque<Json::Value*,std::allocator<Json::Value*>> *)this_00,(Value **)auStack_160);
      cVar5 = readValue((Reader *)this_00);
      pvVar3 = *(void **)((Reader *)this_00 + 0x30);
      if (pvVar3 == *(void **)((Reader *)this_00 + 0x38)) {
        operator_delete(pvVar3,0x200);
        lVar7 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8);
        *(long *)((Reader *)this_00 + 0x48) = *(long *)((Reader *)this_00 + 0x48) + -8;
        *(long *)((Reader *)this_00 + 0x38) = lVar7;
        *(long *)((Reader *)this_00 + 0x40) = lVar7 + 0x200;
        *(long *)((Reader *)this_00 + 0x30) = lVar7 + 0x1f8;
      }
      else {
        *(long *)((Reader *)this_00 + 0x30) = (long)pvVar3 + -8;
      }
      if (cVar5 == '\0') {
        uVar6 = recoverFromError((Reader *)this_00,4);
        goto LAB_00106b60;
      }
      while( true ) {
        cVar5 = readToken((Reader *)this_00,(Token *)auStack_160);
        if ((int)auStack_160[0] != 0xc) break;
        if (cVar5 == '\0') goto LAB_00106ac0;
      }
      if (((int)auStack_160[0] != 10 && (int)auStack_160[0] != 4) || (cVar5 != '\x01')) {
LAB_00106ac0:
        lStack_168 = 0x27;
        plStack_110 = alStack_100;
        plStack_110 = (long *)std::__cxx11::string::_M_create
                                        ((ulong *)&plStack_110,(ulong)&lStack_168);
        lVar7 = _UNK_0010db58;
        alStack_100[0] = lStack_168;
        *plStack_110 = __LC50;
        plStack_110[1] = lVar7;
        lVar7 = _UNK_0010dbc8;
        lStack_108 = lStack_168;
        plStack_110[2] = __LC58;
        plStack_110[3] = lVar7;
        *(undefined8 *)((long)plStack_110 + 0x1f) = 0x6e6f69746172616c;
        *(undefined1 *)((long)plStack_110 + lStack_168) = 0;
        addError((Reader *)this_00,(string *)&plStack_110,(Token *)auStack_160,(char *)0x0);
        uVar6 = recoverFromError((Reader *)this_00,4);
        if (plStack_110 != alStack_100) {
          operator_delete(plStack_110,alStack_100[0] + 1);
        }
        goto LAB_00106b60;
      }
      if ((int)auStack_160[0] == 4) goto LAB_00106c10;
      lVar7 = *(long *)((Reader *)this_00 + 0x30);
      lVar9 = *(long *)((Reader *)this_00 + 0x48);
      if (lVar7 == *(long *)((Reader *)this_00 + 0x38)) {
LAB_00106aac:
        lVar7 = *(long *)(lVar9 + -8) + 0x200;
      }
    } while( true );
  }
  if (this[0x108] == (Reader)0x0) {
    readToken(this,(Token *)local_b8);
    RVar1 = this[0x10c];
    iVar4 = local_b8[0];
  }
  else {
    do {
      readToken(this,(Token *)local_b8);
    } while (local_b8[0] == 0xc);
    RVar1 = this[0x10c];
    iVar4 = local_b8[0];
  }
  if ((RVar1 != (Reader)0x0) && (*(long *)(this + 0xf0) != 0)) {
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    uVar2 = *(undefined8 *)(lVar7 + -8);
    local_68 = local_58;
    std::__cxx11::string::_M_construct<char*>
              (&local_68,*(long *)(this + 0xe8),*(long *)(this + 0xf0) + *(long *)(this + 0xe8));
    Json::Value::setComment(uVar2,&local_68,0);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    *(undefined8 *)(this + 0xf0) = 0;
    **(undefined1 **)(this + 0xe8) = 0;
  }
  switch(iVar4) {
  default:
switchD_001064c3_caseD_0:
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar7 + -8));
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar7 + -8));
    local_98[0] = 0x2e;
    local_68 = local_58;
    local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_98);
    lVar7 = _UNK_0010db98;
    local_58[0] = local_98[0];
    *local_68 = __LC55;
    local_68[1] = lVar7;
    lVar7 = _UNK_0010dba8;
    local_68[2] = __LC56;
    local_68[3] = lVar7;
    uVar2 = _UNK_0010dbb8;
    *(undefined8 *)((long)local_68 + 0x1e) = __LC57;
    *(undefined8 *)((long)local_68 + 0x26) = uVar2;
    local_60 = local_98[0];
    *(undefined1 *)((long)local_68 + local_98[0]) = 0;
    uVar6 = addError(this,(string *)&local_68,(Token *)local_b8,(char *)0x0);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    goto LAB_00106670;
  case 1:
    uVar6 = readObject((Token *)this);
    goto LAB_0010679b;
  case 2:
  case 4:
  case 10:
    if (this[0x10a] == (Reader)0x0) goto switchD_001064c3_caseD_0;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + -1;
    Json::Value::Value((Value *)local_98,0);
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar7 + -8));
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar7 + -8));
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    goto LAB_0010676b;
  case 3:
    uVar6 = readArray((Token *)this);
LAB_0010679b:
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar7 + -8));
    break;
  case 5:
    uVar6 = decodeString(this,(Token *)local_b8);
    break;
  case 6:
    uVar6 = decodeNumber(this,(Token *)local_b8);
    break;
  case 7:
    bVar10 = true;
    goto LAB_00106707;
  case 8:
    bVar10 = false;
LAB_00106707:
    Json::Value::Value((Value *)local_98,bVar10);
    lVar7 = *(long *)(this + 0x30);
    lVar9 = *(long *)(this + 0x48);
    if (lVar7 == *(long *)(this + 0x38)) {
LAB_00106801:
      lVar7 = *(long *)(lVar9 + -8) + 0x200;
    }
LAB_00106721:
    Json::Value::swapPayload(*(Value **)(lVar7 + -8));
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar7 + -8));
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
LAB_0010676b:
    Json::Value::setOffsetLimit(*(long *)(lVar7 + -8));
    uVar6 = 1;
    Json::Value::~Value((Value *)local_98);
    break;
  case 9:
    Json::Value::Value((Value *)local_98,0);
    lVar7 = *(long *)(this + 0x30);
    lVar9 = *(long *)(this + 0x48);
    if (lVar7 == *(long *)(this + 0x38)) goto LAB_00106801;
    goto LAB_00106721;
  }
  if (this[0x10c] != (Reader)0x0) {
    *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == *(long *)(this + 0x38)) {
      lVar7 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(lVar7 + -8);
  }
LAB_00106670:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::readArray(Json::Reader::Token&) */

undefined4 Json::Reader::readArray(Token *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  Token *this;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 local_a8 [4];
  Value local_88 [48];
  long *local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(local_88,6);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::swapPayload(*(Value **)(lVar4 + -8));
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::setOffsetStart(*(long *)(lVar4 + -8));
  this = param_1;
  skipSpaces((Reader *)param_1);
  if ((*(char **)(param_1 + 0xd0) != *(char **)(param_1 + 200)) &&
     (**(char **)(param_1 + 0xd0) == ']')) {
    readToken((Reader *)this,(Token *)local_a8);
LAB_00106c10:
    uVar3 = 1;
LAB_00106b60:
    Json::Value::~Value(local_88);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar4 == *(long *)(param_1 + 0x38)) goto LAB_00106aac;
  do {
    local_a8[0] = Json::Value::operator[]((int)*(undefined8 *)(lVar4 + -8));
    std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
              ((deque<Json::Value*,std::allocator<Json::Value*>> *)param_1,(Value **)local_a8);
    cVar2 = readValue((Reader *)param_1);
    pvVar1 = *(void **)(param_1 + 0x30);
    if (pvVar1 == *(void **)(param_1 + 0x38)) {
      operator_delete(pvVar1,0x200);
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
      *(long *)(param_1 + 0x38) = lVar4;
      *(long *)(param_1 + 0x40) = lVar4 + 0x200;
      *(long *)(param_1 + 0x30) = lVar4 + 0x1f8;
    }
    else {
      *(long *)(param_1 + 0x30) = (long)pvVar1 + -8;
    }
    if (cVar2 == '\0') {
      uVar3 = recoverFromError((Reader *)param_1,4);
      goto LAB_00106b60;
    }
    while( true ) {
      cVar2 = readToken((Reader *)param_1,(Token *)local_a8);
      if ((int)local_a8[0] != 0xc) break;
      if (cVar2 == '\0') goto LAB_00106ac0;
    }
    if (((int)local_a8[0] != 10 && (int)local_a8[0] != 4) || (cVar2 != '\x01')) {
LAB_00106ac0:
      local_b0 = 0x27;
      local_58 = local_48;
      local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_b0);
      lVar4 = _UNK_0010db58;
      local_48[0] = local_b0;
      *local_58 = __LC50;
      local_58[1] = lVar4;
      lVar4 = _UNK_0010dbc8;
      local_50 = local_b0;
      local_58[2] = __LC58;
      local_58[3] = lVar4;
      *(undefined8 *)((long)local_58 + 0x1f) = 0x6e6f69746172616c;
      *(undefined1 *)((long)local_58 + local_b0) = 0;
      addError((Reader *)param_1,(string *)&local_58,(Token *)local_a8,(char *)0x0);
      uVar3 = recoverFromError((Reader *)param_1,4);
      if (local_58 != local_48) {
        operator_delete(local_58,local_48[0] + 1);
      }
      goto LAB_00106b60;
    }
    if ((int)local_a8[0] == 4) goto LAB_00106c10;
    lVar4 = *(long *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar4 == *(long *)(param_1 + 0x38)) {
LAB_00106aac:
      lVar4 = *(long *)(lVar5 + -8) + 0x200;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Reader::parse(char const*, char const*, Json::Value&, bool) */

undefined4 __thiscall
Json::Reader::parse(Reader *this,char *param_1,char *param_2,Value *param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  Reader RVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  long local_90;
  Value *local_88;
  char *pcStack_80;
  char *local_78;
  undefined8 uStack_70;
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(char **)(this + 0xc0) = param_1;
  *(char **)(this + 0xd0) = param_1;
  *(char **)(this + 200) = param_2;
  RVar3 = this[0x108];
  if (this[0x108] != (Reader)0x0) {
    RVar3 = (Reader)param_4;
  }
  *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x10c] = RVar3;
  **(undefined1 **)(this + 0xe8) = 0;
  local_88 = *(Value **)(this + 0x60);
  pcStack_80 = *(char **)(this + 0x68);
  local_78 = *(char **)(this + 0x70);
  uStack_70 = *(undefined8 *)(this + 0x78);
  std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_erase_at_end
            ((deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *)(this + 0x50)
             ,(Token *)&local_88);
  pvVar6 = *(void **)(this + 0x30);
  while (pvVar6 != *(void **)(this + 0x10)) {
    while (*(void **)(this + 0x38) != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -8);
      *(void **)(this + 0x30) = pvVar6;
      if (pvVar6 == *(void **)(this + 0x10)) goto LAB_00106cdd;
    }
    operator_delete(pvVar6,0x200);
    lVar1 = *(long *)(*(long *)(this + 0x48) + -8);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
    *(long *)(this + 0x38) = lVar1;
    pvVar6 = (void *)(lVar1 + 0x1f8);
    *(long *)(this + 0x40) = lVar1 + 0x200;
    *(void **)(this + 0x30) = pvVar6;
  }
LAB_00106cdd:
  local_88 = param_3;
  std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
            ((deque<Json::Value*,std::allocator<Json::Value*>> *)this,&local_88);
  uVar5 = readValue(this);
  if (this[0x108] == (Reader)0x0) {
    readToken(this,(Token *)&local_88);
  }
  else {
    do {
      readToken(this,(Token *)&local_88);
    } while ((int)local_88 == 0xc);
  }
  if ((this[0x10c] != (Reader)0x0) && (*(long *)(this + 0xf0) != 0)) {
    local_68 = local_58;
    std::__cxx11::string::_M_construct<char*>
              (&local_68,*(long *)(this + 0xe8),*(long *)(this + 0xf0) + *(long *)(this + 0xe8));
    Json::Value::setComment(param_3,&local_68,2);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
  }
  if (this[0x109] != (Reader)0x0) {
    cVar4 = Json::Value::isArray();
    if (cVar4 == '\0') {
      cVar4 = Json::Value::isObject();
      if (cVar4 == '\0') {
        local_88 = (Value *)CONCAT44(local_88._4_4_,0xd);
        local_90 = 0x41;
        pcStack_80 = param_1;
        local_78 = param_2;
        local_68 = local_58;
        local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_90);
        lVar1 = _UNK_0010dbd8;
        local_58[0] = local_90;
        *local_68 = __LC59;
        local_68[1] = lVar1;
        lVar2 = _UNK_0010dbe8;
        lVar1 = __LC60;
        *(undefined1 *)(local_68 + 8) = 0x2e;
        local_68[2] = lVar1;
        local_68[3] = lVar2;
        lVar1 = _UNK_0010dbf8;
        local_68[4] = __LC61;
        local_68[5] = lVar1;
        lVar1 = _UNK_0010dc08;
        local_68[6] = __LC62;
        local_68[7] = lVar1;
        local_60 = local_90;
        *(undefined1 *)((long)local_68 + local_90) = 0;
        addError(this,(string *)&local_68,(Token *)&local_88,(char *)0x0);
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        uVar5 = 0;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Reader::parse(std::__cxx11::string const&, Json::Value&, bool) */

void __thiscall Json::Reader::parse(Reader *this,string *param_1,Value *param_2,bool param_3)

{
  std::__cxx11::string::_M_replace((ulong)(this + 0xa0),0,*(char **)(this + 0xa8),*(ulong *)param_1)
  ;
  parse(this,*(char **)(this + 0xa0),*(char **)(this + 0xa0) + *(long *)(this + 0xa8),param_2,
        param_3);
  return;
}



/* Json::Reader::parse(std::istream&, Json::Value&, bool) */

ulong __thiscall Json::Reader::parse(Reader *this,istream *param_1,Value *param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  istream *piVar4;
  bool extraout_DL;
  ulong uVar5;
  istream *piVar6;
  long in_FS_OFFSET;
  ulong local_70;
  istream *local_68;
  ulong local_60;
  size_t local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  piVar4 = *(istream **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xe8);
  local_70 = 0xf;
  local_68 = (istream *)local_58;
  if (piVar4 != (istream *)0x0) {
    uVar5 = 0;
    piVar6 = (istream *)local_58;
    do {
      pbVar3 = *(byte **)(piVar4 + 0x10);
      if (pbVar3 < *(byte **)(piVar4 + 0x18)) {
        if (local_70 <= uVar5) {
LAB_00107030:
          goto LAB_0010704f;
        }
LAB_00107008:
        uVar2 = (uint)*pbVar3;
      }
      else {
        iVar1 = (**(code **)(*(long *)piVar4 + 0x48))(piVar4);
        if (iVar1 == -1) goto LAB_001071f0;
        pbVar3 = *(byte **)(piVar4 + 0x10);
        if (local_70 <= uVar5) goto LAB_00107030;
        if (pbVar3 < *(byte **)(piVar4 + 0x18)) goto LAB_00107008;
        uVar2 = (**(code **)(*(long *)piVar4 + 0x48))(piVar4);
        if (uVar2 == 0xffffffff) {
          uVar5 = FUN_0010cf10();
          return uVar5;
        }
      }
      *piVar6 = SUB41(uVar2,0);
      uVar5 = uVar5 + 1;
      if (*(ulong *)(piVar4 + 0x10) < *(ulong *)(piVar4 + 0x18)) {
        *(ulong *)(piVar4 + 0x10) = *(ulong *)(piVar4 + 0x10) + 1;
      }
      else {
        (**(code **)(*(long *)piVar4 + 0x50))(piVar4);
      }
      piVar6 = piVar6 + 1;
    } while( true );
  }
  uVar5 = 0;
  piVar4 = (istream *)local_58;
LAB_0010714e:
  *piVar4 = (istream)0x0;
  local_60 = uVar5;
  uVar2 = parse(this,(char *)local_68,(char *)(local_68 + uVar5),param_2,param_3);
  if (local_68 != (istream *)local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010704f:
  if (pbVar3 < *(byte **)(piVar4 + 0x18)) {
    if (uVar5 == local_70) {
LAB_001070a9:
      local_70 = uVar5 + 1;
      param_1 = (istream *)&local_70;
      piVar6 = (istream *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      if (uVar5 == 1) {
        *piVar6 = *local_68;
      }
      else if (uVar5 != 0) {
        param_1 = local_68;
        memcpy(piVar6,local_68,uVar5);
      }
      if (local_68 != (istream *)local_58) {
        param_1 = (istream *)(local_58[0] + 1);
        operator_delete(local_68,(ulong)param_1);
      }
      local_58[0] = local_70;
      local_68 = piVar6;
      goto LAB_0010710c;
    }
LAB_00107060:
    uVar2 = (uint)*pbVar3;
  }
  else {
    iVar1 = (**(code **)(*(long *)piVar4 + 0x48))(piVar4);
    if (iVar1 == -1) goto LAB_001071f0;
    if (uVar5 == local_70) goto LAB_001070a9;
LAB_0010710c:
    pbVar3 = *(byte **)(piVar4 + 0x10);
    if (pbVar3 < *(byte **)(piVar4 + 0x18)) goto LAB_00107060;
    piVar6 = piVar4;
    uVar2 = (**(code **)(*(long *)piVar4 + 0x48))();
    if (uVar2 == 0xffffffff) {
      uVar5 = parse(piVar6,(Value *)param_1,extraout_DL);
      return uVar5;
    }
  }
  local_68[uVar5] = SUB41(uVar2,0);
  param_1 = local_68;
  if (*(ulong *)(piVar4 + 0x10) < *(ulong *)(piVar4 + 0x18)) {
    *(ulong *)(piVar4 + 0x10) = *(ulong *)(piVar4 + 0x10) + 1;
  }
  else {
    (**(code **)(*(long *)piVar4 + 0x50))(piVar4);
  }
  pbVar3 = *(byte **)(piVar4 + 0x10);
  uVar5 = uVar5 + 1;
  goto LAB_0010704f;
LAB_001071f0:
  piVar4 = local_68 + uVar5;
  goto LAB_0010714e;
}



/* Json::OurReader::addError(std::__cxx11::string const&, Json::OurReader::Token&, char const*) */

undefined8 __thiscall
Json::OurReader::addError(OurReader *this,string *param_1,Token *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  undefined1 *local_60;
  long local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  char *local_40;
  long local_30;
  
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  local_58 = 0;
  local_50 = 0;
  local_60 = &local_50;
  std::__cxx11::string::_M_assign((string *)&local_60);
  puVar2 = *(undefined8 **)(this + 0x80);
  local_40 = param_3;
  if (puVar2 == (undefined8 *)(*(long *)(this + 0x90) + -0x40)) {
    lVar5 = *(long *)(this + 0x98);
    if ((*(long *)(this + 0x70) - *(long *)(this + 0x60) >> 6) +
        ((long)puVar2 - *(long *)(this + 0x88) >> 6) +
        ((lVar5 - *(long *)(this + 0x78) >> 3) + -1 + (ulong)(lVar5 == 0)) * 8 == 0x1ffffffffffffff)
    {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::deque larger than max_size()");
    }
    if ((ulong)(*(long *)(this + 0x58) - (lVar5 - *(long *)(this + 0x50) >> 3)) < 2) {
      std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
      _M_reallocate_map((deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>
                         *)(this + 0x50),1,false);
      lVar5 = *(long *)(this + 0x98);
    }
    pvVar6 = operator_new(0x200);
    *(void **)(lVar5 + 8) = pvVar6;
    puVar2 = *(undefined8 **)(this + 0x80);
    puVar2[2] = uVar1;
    puVar2[3] = puVar2 + 5;
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    std::__cxx11::string::_M_construct<char*>(puVar2 + 3,local_60,local_60 + local_58);
    puVar2[7] = local_40;
    lVar5 = *(long *)(*(long *)(this + 0x98) + 8);
    *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
    *(long *)(this + 0x88) = lVar5;
    *(long *)(this + 0x90) = lVar5 + 0x200;
  }
  else {
    puVar2[2] = uVar1;
    puVar2[3] = puVar2 + 5;
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    std::__cxx11::string::_M_construct<char*>(puVar2 + 3,local_60,local_60 + local_58);
    puVar2[7] = local_40;
    lVar5 = *(long *)(this + 0x80) + 0x40;
  }
  *(long *)(this + 0x80) = lVar5;
  if (local_60 != &local_50) {
    operator_delete(local_60,CONCAT71(uStack_4f,local_50) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::decodeDouble(Json::OurReader::Token&, Json::Value&) */

undefined4 __thiscall Json::OurReader::decodeDouble(OurReader *this,Token *param_1,Value *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  istream *piVar3;
  long *plVar4;
  code **ppcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  code **ppcVar9;
  long *plVar11;
  long *plVar12;
  long lVar13;
  code **ppcVar14;
  long *plVar15;
  code **ppcVar16;
  long in_FS_OFFSET;
  long *local_2a0;
  Value local_278 [48];
  long *local_248;
  long local_240;
  long local_238 [2];
  long *local_228;
  undefined8 local_220;
  long local_218 [2];
  code **local_208;
  long local_200;
  code *local_1f8 [2];
  long *local_1e8;
  long local_1e0;
  long local_1d8 [2];
  code *local_1c8 [9];
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
  ulong uVar10;
  
  ppcVar16 = local_1c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_240 = 0;
  local_248 = local_238;
  std::__cxx11::string::_M_construct<char_const*>
            (&local_248,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  std::ios_base::ios_base((ios_base *)local_150);
  pcVar1 = _vtable;
  local_68 = (undefined1  [16])0x0;
  local_150[0] = (code *)&std::streambuf::vtable;
  local_58 = (undefined1  [16])0x0;
  local_70 = 0;
  local_78 = 0;
  local_1c8[0] = _vtable;
  *(code ***)((long)local_1c8 + *(long *)(_vtable + -0x18)) = _init;
  local_1c8[1] = (code *)0x0;
  ppcVar5 = _init;
  std::ios::init((streambuf *)(*(long *)(_vtable + -0x18) + (long)ppcVar16));
  local_1c8[0] = (code *)&std::__cxx11::istringstream::VTT;
  local_1c8[2] = std::__cxx11::stringbuf::_M_sync;
  local_150[0] = std::__cxx11::stringbuf::_M_sync;
  local_1c8[3] = (code *)0x0;
  local_1c8[4] = (code *)0x0;
  local_1c8[5] = (code *)0x0;
  local_1c8[6] = (code *)0x0;
  local_1c8[7] = (code *)0x0;
  local_1c8[8] = (code *)0x0;
  std::locale::locale(local_180);
  local_1c8[2] = (code *)&std::__cxx11::istringstream::VTT;
  local_178 = 0;
  local_170[0] = local_160;
  if ((local_248 == (long *)0x0) && (local_240 != 0)) {
    plVar12 = local_248;
    plVar4 = (long *)std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00107a08:
    uVar7 = 0;
    do {
      uVar6 = (int)uVar7 + 8;
      uVar8 = (ulong)uVar6;
      *(undefined8 *)((long)ppcVar16 + uVar7) = *(undefined8 *)((long)ppcVar5 + uVar7);
      uVar7 = uVar8;
    } while (uVar6 < ((uint)plVar12 & 0xfffffff8));
    ppcVar14 = (code **)((long)ppcVar16 + uVar8);
    ppcVar9 = (code **)(uVar8 + (long)ppcVar5);
LAB_00107987:
    lVar13 = 0;
    if (((ulong)plVar12 & 4) != 0) {
      *(undefined4 *)ppcVar14 = *(undefined4 *)ppcVar9;
      lVar13 = 4;
    }
    if (((ulong)plVar12 & 2) != 0) {
      *(undefined2 *)((long)ppcVar14 + lVar13) = *(undefined2 *)((long)ppcVar9 + lVar13);
      lVar13 = lVar13 + 2;
    }
    if (((ulong)plVar12 & 1) != 0) {
      *(undefined1 *)((long)ppcVar14 + lVar13) = *(undefined1 *)((long)ppcVar9 + lVar13);
    }
  }
  else {
    std::__cxx11::string::_M_construct<char_const*>(local_170,local_248,local_240 + (long)local_248)
    ;
    local_178 = 8;
    std::__cxx11::stringbuf::_M_sync((char *)(local_1c8 + 2),(ulong)local_170[0],0);
    std::ios::init((streambuf *)local_150);
    piVar3 = std::istream::_M_extract<double>((double *)ppcVar16);
    if (((byte)piVar3[*(long *)(*(long *)piVar3 + -0x18) + 0x20] & 5) == 0) {
      uVar2 = 1;
      Json::Value::Value(local_278,0.0);
      Json::Value::operator=(param_2,local_278);
      Json::Value::~Value(local_278);
      goto LAB_0010784d;
    }
    local_2a0 = local_218;
    local_220 = 0;
    local_228 = local_2a0;
    std::__cxx11::string::_M_construct<char_const*>
              (&local_228,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    ppcVar14 = local_1f8;
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)&local_228,0,(char *)0x0,0x10ba83);
    local_208 = (code **)*plVar4;
    ppcVar5 = (code **)(plVar4 + 2);
    ppcVar16 = ppcVar14;
    if (local_208 == ppcVar5) {
      plVar12 = (long *)(plVar4[1] + 1);
      ppcVar9 = ppcVar5;
      local_208 = ppcVar14;
      if (7 < (uint)plVar12) goto LAB_00107a08;
      goto LAB_00107987;
    }
    local_1f8[0] = (code *)plVar4[2];
  }
  local_200 = plVar4[1];
  *plVar4 = (long)ppcVar5;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  if (0x3fffffffffffffffU - local_200 < 0x12) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_208,0x10ba85);
  plVar12 = plVar4 + 2;
  if ((long *)*plVar4 == plVar12) {
    uVar7 = plVar4[1] + 1;
    plVar11 = plVar12;
    plVar15 = local_1d8;
    if (7 < (uint)uVar7) {
      uVar8 = 0;
      do {
        uVar6 = (int)uVar8 + 8;
        uVar10 = (ulong)uVar6;
        *(undefined8 *)((long)local_1d8 + uVar8) = *(undefined8 *)((long)plVar12 + uVar8);
        uVar8 = uVar10;
      } while (uVar6 < ((uint)uVar7 & 0xfffffff8));
      plVar15 = (long *)((long)local_1d8 + uVar10);
      plVar11 = (long *)(uVar10 + (long)plVar12);
    }
    lVar13 = 0;
    if ((uVar7 & 4) != 0) {
      *(int *)plVar15 = (int)*plVar11;
      lVar13 = 4;
    }
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)((long)plVar15 + lVar13) = *(undefined2 *)((long)plVar11 + lVar13);
      lVar13 = lVar13 + 2;
    }
    local_1e8 = local_1d8;
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)((long)plVar15 + lVar13) = *(undefined1 *)((long)plVar11 + lVar13);
    }
  }
  else {
    local_1d8[0] = plVar4[2];
    local_1e8 = (long *)*plVar4;
  }
  local_1e0 = plVar4[1];
  *plVar4 = (long)plVar12;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  uVar2 = addError(this,(string *)&local_1e8,param_1,(char *)0x0);
  if (local_1e8 != local_1d8) {
    operator_delete(local_1e8,local_1d8[0] + 1);
  }
  if (local_208 != ppcVar16) {
    operator_delete(local_208,(ulong)(local_1f8[0] + 1));
  }
  if (local_228 != local_2a0) {
    operator_delete(local_228,local_218[0] + 1);
  }
LAB_0010784d:
  local_1c8[0] = (code *)&std::__cxx11::istringstream::VTT;
  local_150[0] = std::__cxx11::stringbuf::_M_sync;
  local_1c8[2] = (code *)&std::__cxx11::istringstream::VTT;
  if (local_170[0] != local_160) {
    operator_delete(local_170[0],local_160[0] + 1);
  }
  local_1c8[2] = std::__cxx11::stringbuf::_M_sync;
  std::locale::~locale(local_180);
  local_1c8[0] = pcVar1;
  *(code ***)((long)local_1c8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_150[0] = (code *)&std::streambuf::vtable;
  local_1c8[1] = (code *)0x0;
  std::ios_base::~ios_base((ios_base *)local_150);
  if (local_248 != local_238) {
    operator_delete(local_248,local_238[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::decodeNumber(Json::OurReader::Token&, Json::Value&) */

undefined8 __thiscall Json::OurReader::decodeNumber(OurReader *this,Token *param_1,Value *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  pcVar7 = *(char **)(param_1 + 8);
  pcVar3 = *(char **)(param_1 + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  cVar1 = *pcVar7;
  if (cVar1 == '-') {
    pcVar7 = pcVar7 + 1;
    if (pcVar7 < pcVar3) {
      uVar10 = 0xccccccccccccccc;
      uVar8 = 8;
      goto LAB_00107abd;
    }
    lVar9 = 0;
LAB_00107c02:
    Json::Value::Value(aVStack_48,lVar9);
  }
  else {
    uVar10 = 0x1999999999999999;
    uVar8 = 5;
    if (pcVar7 < pcVar3) {
LAB_00107abd:
      uVar5 = 0;
      cVar2 = *pcVar7;
      while ((byte)(cVar2 - 0x30U) < 10) {
        pcVar7 = pcVar7 + 1;
        uVar4 = (int)cVar2 - 0x30;
        if (uVar10 <= uVar5) {
          if ((pcVar7 == pcVar3 && uVar4 <= uVar8) && (uVar5 <= uVar10)) {
            uVar5 = (long)(int)uVar4 + uVar5 * 10;
LAB_00107b0a:
            if (cVar1 == '-') {
              lVar9 = -uVar5;
              goto LAB_00107c02;
            }
            if (-1 < (long)uVar5) goto LAB_00107b20;
            Json::Value::Value(aVStack_48,uVar5);
            goto LAB_00107b2e;
          }
          break;
        }
        uVar5 = (long)(int)uVar4 + uVar5 * 10;
        if (pcVar3 <= pcVar7) goto LAB_00107b0a;
        cVar2 = *pcVar7;
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = decodeDouble(this,param_1,param_2);
        return uVar6;
      }
      goto LAB_00107c16;
    }
LAB_00107b20:
    Json::Value::Value(aVStack_48,uVar5);
  }
LAB_00107b2e:
  Json::Value::operator=(param_2,aVStack_48);
  Json::Value::~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107c16:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::decodeNumber(Json::OurReader::Token&) */

undefined4 __thiscall Json::OurReader::decodeNumber(OurReader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_58,0);
  uVar1 = decodeNumber(this,param_1,aVStack_58);
  if ((char)uVar1 != '\0') {
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
  }
  Json::Value::~Value(aVStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::decodeDouble(Json::OurReader::Token&) */

undefined4 __thiscall Json::OurReader::decodeDouble(OurReader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(aVStack_58,0);
  uVar1 = decodeDouble(this,param_1,aVStack_58);
  if ((char)uVar1 != '\0') {
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
  }
  Json::Value::~Value(aVStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::decodeUnicodeEscapeSequence(Json::OurReader::Token&, char const*&, char const*,
   unsigned int&) */

undefined4 __thiscall
Json::OurReader::decodeUnicodeEscapeSequence
          (OurReader *this,Token *param_1,char **param_2,char *param_3,uint *param_4)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  long local_60;
  long *local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  pcVar2 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)param_3 - (long)pcVar2 < 4) {
    local_60 = 0x3c;
    local_58 = local_48;
    local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    lVar3 = _UNK_0010da18;
    local_48[0] = local_60;
    *local_58 = __LC29;
    local_58[1] = lVar3;
    lVar3 = _UNK_0010da28;
    local_58[2] = __LC30;
    local_58[3] = lVar3;
    lVar3 = _UNK_0010da38;
    local_58[4] = __LC31;
    local_58[5] = lVar3;
    uVar5 = _UNK_0010da48;
    *(undefined8 *)((long)local_58 + 0x2c) = __LC32;
    *(undefined8 *)((long)local_58 + 0x34) = uVar5;
    local_50 = local_60;
    *(undefined1 *)((long)local_58 + local_60) = 0;
    uVar7 = addError(this,(string *)&local_58,param_1,pcVar2);
    if (local_58 != local_48) {
LAB_00107f91:
      operator_delete(local_58,local_48[0] + 1);
    }
  }
  else {
    pcVar10 = pcVar2 + 1;
    uVar8 = 0;
    do {
      *param_2 = pcVar10;
      cVar1 = pcVar10[-1];
      iVar6 = (int)cVar1;
      iVar9 = uVar8 * 0x10;
      if ((byte)(cVar1 - 0x30U) < 10) {
        uVar8 = iVar9 + -0x30 + iVar6;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar8 = iVar9 + -0x57 + iVar6;
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          local_60 = 0x42;
          local_58 = local_48;
          local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
          lVar3 = _UNK_0010da18;
          local_48[0] = local_60;
          *local_58 = __LC29;
          local_58[1] = lVar3;
          lVar4 = _UNK_0010da28;
          lVar3 = __LC30;
          *(undefined2 *)(local_58 + 8) = 0x2e64;
          local_58[2] = lVar3;
          local_58[3] = lVar4;
          lVar3 = _UNK_0010da58;
          local_58[4] = __LC33;
          local_58[5] = lVar3;
          lVar3 = _UNK_0010da68;
          local_58[6] = __LC34;
          local_58[7] = lVar3;
          local_50 = local_60;
          *(undefined1 *)((long)local_58 + local_60) = 0;
          uVar7 = addError(this,(string *)&local_58,param_1,pcVar10);
          if (local_58 == local_48) goto LAB_00107eaa;
          goto LAB_00107f91;
        }
        uVar8 = iVar9 + -0x37 + iVar6;
      }
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != pcVar2 + 5);
    *param_4 = uVar8;
    uVar7 = 1;
  }
LAB_00107eaa:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::decodeUnicodeCodePoint(Json::OurReader::Token&, char const*&, char const*,
   unsigned int&) */

undefined4 __thiscall
Json::OurReader::decodeUnicodeCodePoint
          (OurReader *this,Token *param_1,char **param_2,char *param_3,uint *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = decodeUnicodeEscapeSequence(this,param_1,param_2,param_3,param_4);
  if ((char)uVar5 == '\0') {
LAB_00108290:
    uVar5 = 0;
  }
  else {
    if (0x3ff < *param_4 - 0xd800) goto LAB_00108199;
    pcVar6 = *param_2;
    if ((long)param_3 - (long)pcVar6 < 6) {
      local_68 = local_58;
      local_70 = 0x43;
      local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      lVar1 = _UNK_0010da78;
      *local_68 = __LC35;
      local_68[1] = lVar1;
      lVar1 = _UNK_0010da88;
      local_68[2] = __LC36;
      local_68[3] = lVar1;
      lVar1 = _UNK_0010da98;
      local_68[4] = __LC37;
      local_68[5] = lVar1;
      lVar1 = _UNK_0010daa8;
      local_68[6] = __LC38;
      local_68[7] = lVar1;
      *(undefined4 *)((long)local_68 + 0x3f) = 0x2e726961;
      *(undefined1 *)((long)local_68 + local_70) = 0;
    }
    else {
      *param_2 = pcVar6 + 1;
      pcVar3 = pcVar6 + 1;
      if (*pcVar6 == '\\') {
        *param_2 = pcVar6 + 2;
        pcVar3 = pcVar6 + 2;
        if (pcVar6[1] == 'u') {
          cVar4 = decodeUnicodeEscapeSequence(this,param_1,param_2,param_3,(uint *)&local_70);
          if (cVar4 != '\0') {
            *param_4 = ((*param_4 & 0x3ff) << 10 | (uint)local_70 & 0x3ff) + 0x10000;
            goto LAB_00108199;
          }
          goto LAB_00108290;
        }
      }
      pcVar6 = pcVar3;
      local_68 = local_58;
      local_70 = 0x4f;
      local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
      lVar1 = _UNK_0010dab8;
      *local_68 = __LC39;
      local_68[1] = lVar1;
      lVar1 = _UNK_0010dac8;
      local_68[2] = __LC40;
      local_68[3] = lVar1;
      lVar1 = _UNK_0010dad8;
      local_68[4] = __LC41;
      local_68[5] = lVar1;
      lVar1 = _UNK_0010dae8;
      local_68[6] = __LC42;
      local_68[7] = lVar1;
      uVar2 = _UNK_0010daf8;
      *(undefined8 *)((long)local_68 + 0x3f) = __LC43;
      *(undefined8 *)((long)local_68 + 0x47) = uVar2;
      *(undefined1 *)((long)local_68 + local_70) = 0;
    }
    local_60 = local_70;
    local_58[0] = local_70;
    uVar5 = addError(this,(string *)&local_68,param_1,pcVar6);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
  }
LAB_00108199:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::decodeString(Json::OurReader::Token&, std::__cxx11::string&) */

undefined4 __thiscall Json::OurReader::decodeString(OurReader *this,Token *param_1,string *param_2)

{
  string sVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  string *psVar6;
  string *psVar7;
  string *psVar8;
  ulong uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  string *local_78;
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::string::reserve((ulong)param_2);
  psVar6 = (string *)(*(long *)(param_1 + 8) + 1);
  psVar8 = (string *)(*(long *)(param_1 + 0x10) + -1);
  local_78 = psVar6;
  if (psVar6 != psVar8) {
    while( true ) {
      sVar1 = *psVar6;
      psVar7 = psVar6 + 1;
      local_78 = psVar7;
      if (sVar1 == (string)0x22) break;
      if (sVar1 != (string)0x5c) {
        uVar2 = *(ulong *)(param_2 + 8);
        psVar6 = *(string **)param_2;
        if (psVar6 == param_2 + 0x10) {
          uVar9 = 0xf;
        }
        else {
          uVar9 = *(ulong *)(param_2 + 0x10);
        }
        if (uVar9 < uVar2 + 1) {
          std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
          psVar6 = *(string **)param_2;
        }
        psVar6[uVar2] = sVar1;
        *(ulong *)(param_2 + 8) = uVar2 + 1;
        *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        goto LAB_001083a4;
      }
      if (psVar7 == psVar8) {
        local_70 = 0x1f;
        local_68 = local_58;
        local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        uVar2 = _UNK_0010db08;
        *local_68 = __LC44;
        local_68[1] = uVar2;
        uVar3 = _UNK_0010db18;
        *(undefined8 *)((long)local_68 + 0xf) = __LC45;
        *(undefined8 *)((long)local_68 + 0x17) = uVar3;
        *(byte *)((long)local_68 + local_70) = 0;
LAB_001084b9:
        local_60 = local_70;
        local_58[0] = local_70;
        uVar5 = addError(this,(string *)&local_68,param_1,(char *)psVar8);
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        goto LAB_001084dd;
      }
      psVar7 = psVar6 + 2;
      sVar1 = psVar6[1];
      local_78 = psVar7;
      if ('u' < (char)sVar1) {
switchD_00108368_caseD_5d:
        local_70 = 0x1d;
        local_68 = local_58;
        local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        uVar2 = _UNK_0010db28;
        *local_68 = __LC46;
        local_68[1] = uVar2;
        uVar3 = _UNK_0010db18;
        *(undefined8 *)((long)local_68 + 0xd) = __LC45;
        *(undefined8 *)((long)local_68 + 0x15) = uVar3;
        *(byte *)((long)local_68 + local_70) = 0;
        psVar8 = psVar7;
        goto LAB_001084b9;
      }
      if ((char)sVar1 < '\\') {
        if (sVar1 == (string)0x22) {
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x22;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        }
        else {
          if (sVar1 != (string)0x2f) goto switchD_00108368_caseD_5d;
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x2f;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
        }
      }
      else {
        switch(sVar1) {
        case (string)0x5c:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x5c;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        default:
          goto switchD_00108368_caseD_5d;
        case (string)0x62:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x8;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x66:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xc;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x6e:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xa;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x72:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0xd;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x74:
          uVar2 = *(ulong *)(param_2 + 8);
          psVar6 = *(string **)param_2;
          if (psVar6 == param_2 + 0x10) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_2 + 0x10);
          }
          if (uVar9 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)param_2,uVar2,(char *)0x0,0);
            psVar6 = *(string **)param_2;
          }
          psVar6[uVar2] = (string)0x9;
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          *(undefined1 *)(*(long *)param_2 + 1 + uVar2) = 0;
          break;
        case (string)0x75:
          uVar5 = decodeUnicodeCodePoint
                            (this,param_1,(char **)&local_78,(char *)psVar8,(uint *)&local_70);
          if ((char)uVar5 == '\0') goto LAB_001084dd;
          uVar4 = (uint)local_70;
          local_58[0] = local_58[0] & 0xffffffffffffff00;
          local_60 = 0;
          bVar10 = (byte)local_70;
          local_68 = local_58;
          if ((uint)local_70 < 0x80) {
            std::__cxx11::string::resize((ulong)&local_68,'\x01');
            *(byte *)local_68 = bVar10;
LAB_001087b0:
            if (0x3fffffffffffffffU - *(long *)(param_2 + 8) < local_60) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::append");
            }
          }
          else {
            if ((uint)local_70 < 0x800) {
              std::__cxx11::string::resize((ulong)&local_68,'\x02');
              *(byte *)((long)local_68 + 1) = bVar10 & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 6) | 0xc0;
              goto LAB_001087b0;
            }
            if ((uint)local_70 < 0x10000) {
              std::__cxx11::string::resize((ulong)&local_68,'\x03');
              *(byte *)((long)local_68 + 2) = bVar10 & 0x3f | 0x80;
              *(byte *)((long)local_68 + 1) = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 0xc) | 0xe0;
              goto LAB_001087b0;
            }
            if ((uint)local_70 < 0x110000) {
              std::__cxx11::string::resize((ulong)&local_68,'\x04');
              *(byte *)((long)local_68 + 3) = bVar10 & 0x3f | 0x80;
              *(byte *)((long)local_68 + 2) = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              *(byte *)((long)local_68 + 1) = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
              *(byte *)local_68 = (byte)(uVar4 >> 0x12) | 0xf0;
              goto LAB_001087b0;
            }
          }
          std::__cxx11::string::_M_append((char *)param_2,(ulong)local_68);
          psVar7 = local_78;
          if (local_68 != local_58) {
            operator_delete(local_68,local_58[0] + 1);
            psVar7 = local_78;
          }
        }
      }
LAB_001083a4:
      psVar6 = psVar7;
      if (psVar8 == psVar7) break;
    }
  }
  uVar5 = 1;
LAB_001084dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::decodeString(Json::OurReader::Token&) */

undefined4 __thiscall Json::OurReader::decodeString(OurReader *this,Token *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Value aVStack_98 [48];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  uVar1 = decodeString(this,param_1,(string *)&local_68);
  if ((char)uVar1 != '\0') {
    Json::Value::Value(aVStack_98,(string *)&local_68);
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar2 + -8));
    lVar2 = *(long *)(this + 0x30);
    if (lVar2 == *(long *)(this + 0x38)) {
      lVar2 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar2 + -8));
    Json::Value::~Value(aVStack_98);
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::recoverFromError(Json::OurReader::TokenType) */

undefined8 __thiscall Json::OurReader::recoverFromError(OurReader *this,int param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_d0;
  long local_c0;
  long local_b8;
  int local_a8 [8];
  long local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
          ((*(long *)(this + 0x98) - *(long *)(this + 0x78) >> 3) + -1 +
          (ulong)(*(long *)(this + 0x98) == 0)) * 8 +
          (*(long *)(this + 0x70) - *(long *)(this + 0x60) >> 6);
  do {
    cVar3 = readToken(this,(Token *)local_a8);
    if (cVar3 == '\0') {
      lVar1 = *(long *)(this + 0x98);
      plVar7 = *(long **)(this + 0x78);
      lVar8 = *(long *)(this + 0x70);
      local_b8 = *(long *)(this + 0x60);
      uVar4 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
              ((lVar1 - (long)plVar7 >> 3) + -1 + (ulong)(lVar1 == 0)) * 8 + (lVar8 - local_b8 >> 6)
      ;
      if (uVar4 < uVar6) {
        std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
        _M_default_append((deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>
                           *)(this + 0x50),uVar6 - uVar4);
      }
      else if (uVar6 < uVar4) {
        local_c0 = *(long *)(this + 0x68);
        uVar4 = (local_b8 - local_c0 >> 6) + uVar6;
        if ((long)uVar4 < 0) {
          uVar5 = ~(~uVar4 >> 3);
LAB_00108fbf:
          plVar7 = plVar7 + uVar5;
          local_c0 = *plVar7;
          local_b8 = (uVar4 + uVar5 * -8) * 0x40 + local_c0;
          lVar8 = local_c0 + 0x200;
        }
        else {
          if (7 < (long)uVar4) {
            uVar5 = (long)uVar4 >> 3;
            goto LAB_00108fbf;
          }
          local_b8 = uVar6 * 0x40 + local_b8;
        }
        local_78 = *(undefined8 *)(this + 0x90);
        local_68 = local_b8;
        local_60 = local_c0;
        local_88 = *(long *)(this + 0x80);
        lStack_80 = *(long *)(this + 0x88);
        lStack_70 = lVar1;
        local_58 = lVar8;
        local_50 = plVar7;
        std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
        _M_destroy_data_aux(&local_68,&local_88);
        lVar1 = *(long *)(this + 0x98);
        plVar2 = plVar7;
        while (plVar2 = plVar2 + 1, plVar2 < (long *)(lVar1 + 8)) {
          operator_delete((void *)*plVar2,0x200);
        }
        *(long *)(this + 0x90) = lVar8;
        *(long **)(this + 0x98) = plVar7;
        *(long *)(this + 0x80) = local_b8;
        *(long *)(this + 0x88) = local_c0;
      }
    }
  } while ((local_a8[0] != param_2) && (local_a8[0] != 0));
  lVar1 = *(long *)(this + 0x98);
  plVar7 = *(long **)(this + 0x78);
  lVar8 = *(long *)(this + 0x70);
  local_d0 = *(long *)(this + 0x60);
  uVar4 = (*(long *)(this + 0x80) - *(long *)(this + 0x88) >> 6) +
          ((lVar1 - (long)plVar7 >> 3) + -1 + (ulong)(lVar1 == 0)) * 8 + (lVar8 - local_d0 >> 6);
  if (uVar4 < uVar6) {
    std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
    _M_default_append((deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>
                       *)(this + 0x50),uVar6 - uVar4);
    goto LAB_00108e87;
  }
  if (uVar4 <= uVar6) goto LAB_00108e87;
  lVar9 = *(long *)(this + 0x68);
  uVar4 = (local_d0 - lVar9 >> 6) + uVar6;
  if ((long)uVar4 < 0) {
    uVar6 = ~(~uVar4 >> 3);
LAB_0010900c:
    plVar7 = plVar7 + uVar6;
    lVar9 = *plVar7;
    local_d0 = (uVar4 + uVar6 * -8) * 0x40 + lVar9;
    lVar8 = lVar9 + 0x200;
  }
  else {
    if (7 < (long)uVar4) {
      uVar6 = (long)uVar4 >> 3;
      goto LAB_0010900c;
    }
    local_d0 = local_d0 + uVar6 * 0x40;
  }
  local_78 = *(undefined8 *)(this + 0x90);
  local_68 = local_d0;
  local_88 = *(long *)(this + 0x80);
  lStack_80 = *(long *)(this + 0x88);
  lStack_70 = lVar1;
  local_60 = lVar9;
  local_58 = lVar8;
  local_50 = plVar7;
  std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
  _M_destroy_data_aux(&local_68,&local_88);
  lVar1 = *(long *)(this + 0x98);
  plVar2 = plVar7;
  while (plVar2 = plVar2 + 1, plVar2 < (long *)(lVar1 + 8U)) {
    operator_delete((void *)*plVar2,0x200);
  }
  *(long *)(this + 0x88) = lVar9;
  *(long *)(this + 0x90) = lVar8;
  *(long *)(this + 0x80) = local_d0;
  *(long **)(this + 0x98) = plVar7;
LAB_00108e87:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurReader::addErrorAndRecover(std::__cxx11::string const&, Json::OurReader::Token&,
   Json::OurReader::TokenType) */

void __thiscall
Json::OurReader::addErrorAndRecover
          (OurReader *this,string *param_1,Token *param_2,undefined4 param_4)

{
  addError(this,param_1,param_2,(char *)0x0);
  recoverFromError(this,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::readObject(Json::OurReader::Token&) */

undefined4 Json::OurReader::readObject(Token *param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar17;
  allocator *extraout_RDX;
  allocator *paVar18;
  allocator *extraout_RDX_00;
  ulong uVar19;
  long *plVar20;
  Token *pTVar21;
  long in_FS_OFFSET;
  undefined8 ***local_150;
  int local_148 [8];
  int local_128 [8];
  Value local_108 [48];
  undefined8 ***local_d8 [6];
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 ***apppuStack_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  undefined8 ***local_68;
  undefined8 ***local_60;
  undefined8 ***apppuStack_58 [3];
  long local_40;
  ulong uVar16;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (undefined8 ****)0x0;
  apppuStack_98[0] = (undefined8 ***)((ulong)apppuStack_98[0] & 0xffffffffffffff00);
  local_a8 = apppuStack_98;
  Json::Value::Value(local_108,7);
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 == *(long *)(param_1 + 0x38)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::swapPayload(*(Value **)(lVar11 + -8));
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 == *(long *)(param_1 + 0x38)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::setOffsetStart(*(long *)(lVar11 + -8));
LAB_0010911d:
  do {
    uVar8 = readToken((OurReader *)param_1,(Token *)local_148);
    if ((char)uVar8 == '\0') {
LAB_001093e3:
      local_d8[0] = (undefined8 ****)0x21;
      local_68 = apppuStack_58;
      local_68 = (undefined8 ***)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_d8)
      ;
      pppuVar3 = _UNK_0010db78;
      apppuStack_58[0] = local_d8[0];
      *local_68 = __LC52;
      ((undefined8 ****)local_68)[1] = pppuVar3;
      pppuVar4 = _UNK_0010db88;
      pppuVar3 = __LC53;
      *(undefined1 *)((undefined8 ****)local_68 + 4) = 0x65;
      ((undefined8 ****)local_68)[2] = pppuVar3;
      ((undefined8 ****)local_68)[3] = pppuVar4;
      local_60 = local_d8[0];
      *(undefined1 *)((long)local_68 + (long)local_d8[0]) = 0;
      addError((OurReader *)param_1,(string *)&local_68,(Token *)local_148,(char *)0x0);
      uVar8 = recoverFromError((OurReader *)param_1,2);
      if ((undefined8 ****)local_68 != apppuStack_58) {
LAB_00109495:
        operator_delete(local_68,(ulong)((long)apppuStack_58[0] + 1));
      }
      goto LAB_001094a6;
    }
    if (local_148[0] == 0xf) {
      while (cVar7 = readToken((OurReader *)param_1,(Token *)local_148), local_148[0] == 0xf) {
        if (cVar7 == '\0') goto LAB_001093e3;
      }
      if (cVar7 == '\0') goto LAB_001093e3;
    }
    if (local_148[0] == 2) {
      if (((undefined8 ****)local_a0 != (undefined8 ****)0x0) && (param_1[0x111] == (Token)0x0)) {
        local_a0 = (undefined8 ****)0x0;
        *(undefined1 *)local_a8 = 0;
        goto LAB_001093e3;
      }
      goto LAB_001094a6;
    }
    local_a0 = (undefined8 ****)0x0;
    *(undefined1 *)local_a8 = 0;
    if (local_148[0] == 5) {
      cVar7 = decodeString((OurReader *)param_1,(Token *)local_148,(string *)&local_a8);
      paVar18 = extraout_RDX_00;
      if (cVar7 != '\0') goto LAB_00109277;
LAB_0010954b:
      uVar8 = recoverFromError((OurReader *)param_1,2);
      goto LAB_001094a6;
    }
    if ((local_148[0] != 6) || (param_1[0x114] == (Token)0x0)) goto LAB_001093e3;
    Json::Value::Value((Value *)local_d8,0);
    cVar7 = decodeNumber((OurReader *)param_1,(Token *)local_148,(Value *)local_d8);
    if (cVar7 == '\0') {
      uVar8 = recoverFromError((OurReader *)param_1,2);
      Json::Value::~Value((Value *)local_d8);
      goto LAB_001094a6;
    }
    Json::Value::asString_abi_cxx11_();
    pppuVar6 = local_60;
    pppuVar5 = local_68;
    pppuVar4 = apppuStack_98[0];
    pppuVar3 = local_a8;
    if ((undefined8 ****)local_68 == apppuStack_58) {
      local_a0 = local_60;
      if ((undefined8 ****)local_60 != (undefined8 ****)0x0) {
        if ((undefined8 ****)local_60 == (undefined8 ****)0x1) {
          *(undefined1 *)local_a8 = apppuStack_58[0]._0_1_;
          local_a0 = local_60;
        }
        else {
          uVar19 = (ulong)local_60 & 0xffffffff;
          uVar10 = (uint)local_60;
          if (uVar10 < 8) {
            if (((ulong)local_60 & 4) == 0) {
              if ((uVar10 != 0) &&
                 (*(undefined1 *)local_a8 = *(undefined1 *)local_68, local_a0 = local_60,
                 ((ulong)pppuVar6 & 2) != 0)) {
                *(undefined2 *)((long)local_a8 + (uVar19 - 2)) =
                     *(undefined2 *)((long)pppuVar5 + (uVar19 - 2));
              }
            }
            else {
              *(undefined4 *)local_a8 = *(undefined4 *)local_68;
              *(undefined4 *)((long)local_a8 + (uVar19 - 4)) =
                   *(undefined4 *)((long)pppuVar5 + (uVar19 - 4));
              local_a0 = local_60;
            }
          }
          else {
            *local_a8 = apppuStack_58[0];
            uVar19 = (ulong)pppuVar6 & 0xffffffff;
            *(undefined8 *)((long)local_a8 + (uVar19 - 8)) =
                 *(undefined8 *)((long)apppuStack_58 + (uVar19 - 8));
            lVar11 = (long)local_a8 - ((ulong)(local_a8 + 1) & 0xfffffffffffffff8);
            uVar10 = (int)lVar11 + uVar10 & 0xfffffff8;
            local_a0 = local_60;
            if (7 < uVar10) {
              uVar9 = 0;
              do {
                uVar19 = (ulong)uVar9;
                uVar9 = uVar9 + 8;
                *(undefined8 *)(((ulong)(local_a8 + 1) & 0xfffffffffffffff8) + uVar19) =
                     *(undefined8 *)((long)apppuStack_58 + (uVar19 - lVar11));
              } while (uVar9 < uVar10);
            }
          }
        }
      }
      *(undefined1 *)((long)local_a8 + (long)local_a0) = 0;
    }
    else {
      if ((undefined8 ****)local_a8 != apppuStack_98) {
        local_a8 = local_68;
        local_a0 = local_60;
        apppuStack_98[0] = apppuStack_58[0];
        if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
          local_68 = pppuVar3;
          apppuStack_58[0] = pppuVar4;
          goto LAB_00109242;
        }
      }
      apppuStack_98[0] = apppuStack_58[0];
      local_a0 = local_60;
      local_a8 = local_68;
      local_68 = apppuStack_58;
    }
LAB_00109242:
    local_60 = (undefined8 ****)0x0;
    *(undefined1 *)local_68 = 0;
    if ((undefined8 ****)local_68 != apppuStack_58) {
      operator_delete(local_68,(ulong)((long)apppuStack_58[0] + 1));
    }
    Json::Value::~Value((Value *)local_d8);
    paVar18 = extraout_RDX;
LAB_00109277:
    if ((undefined8 ****)0x3fffffff < local_a0) {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_68,"keylength >= 2^30",paVar18);
      Json::throwRuntimeError((string *)&local_68);
      goto LAB_00109a93;
    }
    if (param_1[0x117] != (Token)0x0) {
      lVar11 = *(long *)(param_1 + 0x30);
      if (lVar11 == *(long *)(param_1 + 0x38)) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
      }
      cVar7 = Json::Value::isMember(*(string **)(lVar11 + -8));
      pppuVar4 = local_a0;
      pppuVar3 = local_a8;
      if (cVar7 != '\0') {
        local_60 = (undefined8 ****)0x0;
        apppuStack_58[0] = (undefined8 ***)((ulong)apppuStack_58[0] & 0xffffffffffffff00);
        local_68 = apppuStack_58;
        std::__cxx11::string::reserve((ulong)&local_68);
        if (((0x3fffffffffffffffU - (long)local_60 < 0x10) ||
            (std::__cxx11::string::_M_append((char *)&local_68,0x10baaa),
            (undefined8 ****)(0x3fffffffffffffff - (long)local_60) < pppuVar4)) ||
           (std::__cxx11::string::_M_append((char *)&local_68,(ulong)pppuVar3),
           (undefined8 ****)local_60 == (undefined8 ****)0x3fffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::append");
        }
        plVar14 = (long *)std::__cxx11::string::_M_append((char *)&local_68,0x10ba83);
        plVar1 = plVar14 + 2;
        if ((long *)*plVar14 == plVar1) {
          uVar19 = plVar14[1] + 1;
          plVar17 = plVar1;
          plVar20 = local_78;
          if (7 < (uint)uVar19) {
            uVar15 = 0;
            do {
              uVar10 = (int)uVar15 + 8;
              uVar16 = (ulong)uVar10;
              *(undefined8 *)((long)local_78 + uVar15) = *(undefined8 *)((long)plVar1 + uVar15);
              uVar15 = uVar16;
            } while (uVar10 < ((uint)uVar19 & 0xfffffff8));
            plVar20 = (long *)((long)local_78 + uVar16);
            plVar17 = (long *)(uVar16 + (long)plVar1);
          }
          lVar11 = 0;
          if ((uVar19 & 4) != 0) {
            *(undefined4 *)plVar20 = *(undefined4 *)plVar17;
            lVar11 = 4;
          }
          if ((uVar19 & 2) != 0) {
            *(undefined2 *)((long)plVar20 + lVar11) = *(undefined2 *)((long)plVar17 + lVar11);
            lVar11 = lVar11 + 2;
          }
          local_88 = local_78;
          if ((uVar19 & 1) != 0) {
            *(undefined1 *)((long)plVar20 + lVar11) = *(undefined1 *)((long)plVar17 + lVar11);
          }
        }
        else {
          local_78[0] = plVar14[2];
          local_88 = (long *)*plVar14;
        }
        local_80 = plVar14[1];
        *plVar14 = (long)plVar1;
        *(undefined1 *)(plVar14 + 2) = 0;
        plVar14[1] = 0;
        if ((undefined8 ****)local_68 != apppuStack_58) {
          operator_delete(local_68,(ulong)((long)apppuStack_58[0] + 1));
        }
        addError((OurReader *)param_1,(string *)&local_88,(Token *)local_148,(char *)0x0);
        uVar8 = recoverFromError((OurReader *)param_1,2);
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
LAB_001094a6:
        Json::Value::~Value(local_108);
        if ((undefined8 ****)local_a8 != apppuStack_98) {
          operator_delete(local_a8,(ulong)((long)apppuStack_98[0] + 1));
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar8;
        }
LAB_00109a93:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    pTVar21 = (Token *)local_128;
    cVar7 = readToken((OurReader *)param_1,pTVar21);
    if ((cVar7 == '\0') || (local_128[0] != 0xe)) {
      local_68 = apppuStack_58;
      local_d8[0] = (undefined8 ****)0x24;
      ppppuVar12 = (undefined8 ****)
                   std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_d8);
      pppuVar3 = _UNK_0010db38;
      apppuStack_58[0] = local_d8[0];
      *ppppuVar12 = __LC48;
      ppppuVar12[1] = pppuVar3;
      pppuVar4 = _UNK_0010db48;
      pppuVar3 = __LC49;
      *(undefined4 *)(ppppuVar12 + 4) = 0x656d616e;
      ppppuVar12[2] = pppuVar3;
      ppppuVar12[3] = pppuVar4;
      ppppuVar13 = (undefined8 ****)local_d8[0];
      local_68 = ppppuVar12;
LAB_001096e7:
      *(undefined1 *)((long)ppppuVar13 + (long)ppppuVar12) = 0;
      local_60 = apppuStack_58[0];
      addError((OurReader *)param_1,(string *)&local_68,pTVar21,(char *)0x0);
      uVar8 = recoverFromError((OurReader *)param_1,2);
      if ((undefined8 ****)local_68 != apppuStack_58) goto LAB_00109495;
      goto LAB_001094a6;
    }
    lVar11 = *(long *)(param_1 + 0x30);
    if (lVar11 == *(long *)(param_1 + 0x38)) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
    }
    pTVar21 = (Token *)local_d8;
    local_d8[0] = (undefined8 ***)Json::Value::operator[](*(string **)(lVar11 + -8));
    std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
              ((deque<Json::Value*,std::allocator<Json::Value*>> *)param_1,(Value **)pTVar21);
    cVar7 = readValue((OurReader *)param_1);
    pvVar2 = *(void **)(param_1 + 0x30);
    if (pvVar2 == *(void **)(param_1 + 0x38)) {
      operator_delete(pvVar2,0x200);
      lVar11 = *(long *)(*(long *)(param_1 + 0x48) + -8);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
      *(long *)(param_1 + 0x38) = lVar11;
      *(long *)(param_1 + 0x40) = lVar11 + 0x200;
      *(long *)(param_1 + 0x30) = lVar11 + 0x1f8;
    }
    else {
      *(long *)(param_1 + 0x30) = (long)pvVar2 + -8;
    }
    if (cVar7 == '\0') goto LAB_0010954b;
    cVar7 = readToken((OurReader *)param_1,pTVar21);
    if ((cVar7 == '\0') || ((((uint)local_d8[0] & 0xfffffffd) != 0xd && ((uint)local_d8[0] != 2))))
    {
      local_150 = (undefined8 ****)0x28;
      local_68 = apppuStack_58;
      ppppuVar13 = (undefined8 ****)
                   std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_150);
      pppuVar3 = _UNK_0010db58;
      apppuStack_58[0] = local_150;
      *ppppuVar13 = __LC50;
      ppppuVar13[1] = pppuVar3;
      pppuVar4 = _UNK_0010db68;
      pppuVar3 = __LC51;
      ppppuVar13[4] = (undefined8 ***)0x6e6f69746172616c;
      ppppuVar13[2] = pppuVar3;
      ppppuVar13[3] = pppuVar4;
      ppppuVar12 = (undefined8 ****)local_150;
      local_68 = ppppuVar13;
      goto LAB_001096e7;
    }
    if ((uint)local_d8[0] == 0xf) {
      do {
        cVar7 = readToken((OurReader *)param_1,pTVar21);
        if ((uint)local_d8[0] != 0xf) goto LAB_0010939f;
      } while (cVar7 != '\0');
      goto LAB_0010911d;
    }
LAB_0010939f:
    if ((uint)local_d8[0] == 2) goto LAB_001094a6;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::readValue() */

undefined4 __thiscall Json::OurReader::readValue(OurReader *this)

{
  OurReader OVar1;
  undefined8 uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  allocator *paVar7;
  long lVar8;
  bool bVar9;
  string *this_00;
  int iVar10;
  long in_FS_OFFSET;
  double dVar11;
  long lStack_168;
  undefined8 auStack_160 [4];
  Value aVStack_140 [48];
  long *plStack_110;
  long lStack_108;
  long alStack_100 [3];
  long lStack_e8;
  string *psStack_e0;
  int local_b8 [8];
  long local_98 [6];
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  paVar7 = (allocator *)(*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 3);
  if (*(allocator **)(this + 0x120) <
      paVar7 + ((*(long *)(this + 0x48) - *(long *)(this + 0x28) >> 3) + -1 +
               (ulong)(*(long *)(this + 0x48) == 0)) * 0x40 +
               (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 3)) {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_68,"Exceeded stackLimit in readValue().",paVar7);
    this_00 = (string *)&local_68;
    Json::throwRuntimeError((string *)&local_68);
    lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
    psStack_e0 = (string *)&local_68;
    Json::Value::Value(aVStack_140,6);
    lVar6 = *(long *)((Reader *)this_00 + 0x30);
    if (lVar6 == *(long *)((Reader *)this_00 + 0x38)) {
      lVar6 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar6 + -8));
    lVar6 = *(long *)((Reader *)this_00 + 0x30);
    if (lVar6 == *(long *)((Reader *)this_00 + 0x38)) {
      lVar6 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar6 + -8));
    iVar10 = 0;
    do {
      Reader::skipSpaces((Reader *)this_00);
      if (((*(char **)((Reader *)this_00 + 0xd0) != *(char **)((Reader *)this_00 + 200)) &&
          (**(char **)((Reader *)this_00 + 0xd0) == ']')) &&
         ((iVar10 == 0 ||
          ((((Reader *)this_00)[0x111] != (Reader)0x0 && (((Reader *)this_00)[0x113] == (Reader)0x0)
           ))))) {
        uVar5 = 1;
        readToken((OurReader *)this_00,(Token *)auStack_160);
        break;
      }
      lVar6 = *(long *)((Reader *)this_00 + 0x30);
      if (lVar6 == *(long *)((Reader *)this_00 + 0x38)) {
        lVar6 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8) + 0x200;
      }
      iVar10 = iVar10 + 1;
      auStack_160[0] = Json::Value::operator[]((int)*(undefined8 *)(lVar6 + -8));
      std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
                ((deque<Json::Value*,std::allocator<Json::Value*>> *)this_00,(Value **)auStack_160);
      uVar5 = readValue((OurReader *)this_00);
      pvVar3 = *(void **)((Reader *)this_00 + 0x30);
      if (pvVar3 == *(void **)((Reader *)this_00 + 0x38)) {
        operator_delete(pvVar3,0x200);
        lVar6 = *(long *)(*(long *)((Reader *)this_00 + 0x48) + -8);
        *(long *)((Reader *)this_00 + 0x48) = *(long *)((Reader *)this_00 + 0x48) + -8;
        *(long *)((Reader *)this_00 + 0x38) = lVar6;
        *(long *)((Reader *)this_00 + 0x40) = lVar6 + 0x200;
        *(long *)((Reader *)this_00 + 0x30) = lVar6 + 0x1f8;
      }
      else {
        *(long *)((Reader *)this_00 + 0x30) = (long)pvVar3 + -8;
      }
      if ((char)uVar5 == '\0') {
        uVar5 = recoverFromError((OurReader *)this_00,4);
        break;
      }
      while( true ) {
        cVar4 = readToken((OurReader *)this_00,(Token *)auStack_160);
        if ((int)auStack_160[0] != 0xf) break;
        if (cVar4 == '\0') goto LAB_0010a180;
      }
      if (((int)auStack_160[0] != 0xd && (int)auStack_160[0] != 4) || (cVar4 != '\x01')) {
LAB_0010a180:
        lStack_168 = 0x27;
        plStack_110 = alStack_100;
        plStack_110 = (long *)std::__cxx11::string::_M_create
                                        ((ulong *)&plStack_110,(ulong)&lStack_168);
        lVar6 = _UNK_0010db58;
        alStack_100[0] = lStack_168;
        *plStack_110 = __LC50;
        plStack_110[1] = lVar6;
        lVar6 = _UNK_0010dbc8;
        lStack_108 = lStack_168;
        plStack_110[2] = __LC58;
        plStack_110[3] = lVar6;
        *(undefined8 *)((long)plStack_110 + 0x1f) = 0x6e6f69746172616c;
        *(undefined1 *)((long)plStack_110 + lStack_168) = 0;
        addError((OurReader *)this_00,(string *)&plStack_110,(Token *)auStack_160,(char *)0x0);
        uVar5 = recoverFromError((OurReader *)this_00,4);
        if (plStack_110 != alStack_100) {
          operator_delete(plStack_110,alStack_100[0] + 1);
        }
        break;
      }
    } while ((int)auStack_160[0] != 4);
    Json::Value::~Value(aVStack_140);
    if (lStack_e8 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (this[0x110] == (OurReader)0x0) {
    readToken(this,(Token *)local_b8);
    OVar1 = this[0x128];
    iVar10 = local_b8[0];
  }
  else {
    do {
      readToken(this,(Token *)local_b8);
    } while (local_b8[0] == 0xf);
    OVar1 = this[0x128];
    iVar10 = local_b8[0];
  }
  if ((OVar1 != (OurReader)0x0) && (*(long *)(this + 0xf8) != 0)) {
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    uVar2 = *(undefined8 *)(lVar6 + -8);
    local_68 = local_58;
    std::__cxx11::string::_M_construct<char*>
              (&local_68,*(long *)(this + 0xf0),*(long *)(this + 0xf8) + *(long *)(this + 0xf0));
    Json::Value::setComment(uVar2,&local_68,0);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    *(undefined8 *)(this + 0xf8) = 0;
    **(undefined1 **)(this + 0xf0) = 0;
  }
  switch(iVar10) {
  default:
switchD_00109b53_caseD_0:
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar6 + -8));
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar6 + -8));
    local_98[0] = 0x2e;
    local_68 = local_58;
    local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)local_98);
    lVar6 = _UNK_0010db98;
    local_58[0] = local_98[0];
    *local_68 = __LC55;
    local_68[1] = lVar6;
    lVar6 = _UNK_0010dba8;
    local_68[2] = __LC56;
    local_68[3] = lVar6;
    uVar2 = _UNK_0010dbb8;
    *(undefined8 *)((long)local_68 + 0x1e) = __LC57;
    *(undefined8 *)((long)local_68 + 0x26) = uVar2;
    local_60 = local_98[0];
    *(undefined1 *)((long)local_68 + local_98[0]) = 0;
    uVar5 = addError(this,(string *)&local_68,(Token *)local_b8,(char *)0x0);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    goto LAB_00109d00;
  case 1:
    uVar5 = readObject((Token *)this);
    goto LAB_00109e3b;
  case 2:
  case 4:
  case 0xd:
    if (this[0x113] == (OurReader)0x0) goto switchD_00109b53_caseD_0;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + -1;
    Json::Value::Value((Value *)local_98,0);
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::swapPayload(*(Value **)(lVar6 + -8));
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar6 + -8));
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    goto LAB_00109dfe;
  case 3:
    uVar5 = readArray((Token *)this);
LAB_00109e3b:
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetLimit(*(long *)(lVar6 + -8));
    break;
  case 5:
    uVar5 = decodeString(this,(Token *)local_b8);
    break;
  case 6:
    uVar5 = decodeNumber(this,(Token *)local_b8);
    break;
  case 7:
    bVar9 = true;
    goto LAB_00109d9a;
  case 8:
    bVar9 = false;
LAB_00109d9a:
    Json::Value::Value((Value *)local_98,bVar9);
    lVar6 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x48);
    if (lVar6 == *(long *)(this + 0x38)) goto LAB_00109ebf;
    goto LAB_00109db4;
  case 9:
    Json::Value::Value((Value *)local_98,0);
    lVar6 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x48);
    if (lVar6 == *(long *)(this + 0x38)) goto LAB_00109ebf;
    goto LAB_00109db4;
  case 10:
    dVar11 = _LC66;
    goto LAB_00109ea5;
  case 0xb:
    dVar11 = _LC67;
    goto LAB_00109ea5;
  case 0xc:
    dVar11 = _LC68;
LAB_00109ea5:
    Json::Value::Value((Value *)local_98,dVar11);
    lVar6 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x48);
    if (lVar6 == *(long *)(this + 0x38)) {
LAB_00109ebf:
      lVar6 = *(long *)(lVar8 + -8) + 0x200;
    }
LAB_00109db4:
    Json::Value::swapPayload(*(Value **)(lVar6 + -8));
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    Json::Value::setOffsetStart(*(long *)(lVar6 + -8));
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
LAB_00109dfe:
    Json::Value::setOffsetLimit(*(long *)(lVar6 + -8));
    uVar5 = 1;
    Json::Value::~Value((Value *)local_98);
  }
  if (this[0x128] != (OurReader)0x0) {
    this[0xe8] = (OurReader)0x0;
    *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
    lVar6 = *(long *)(this + 0x30);
    if (lVar6 == *(long *)(this + 0x38)) {
      lVar6 = *(long *)(*(long *)(this + 0x48) + -8) + 0x200;
    }
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(lVar6 + -8);
  }
LAB_00109d00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::readArray(Json::OurReader::Token&) */

undefined4 Json::OurReader::readArray(Token *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 local_a8 [4];
  Value local_88 [48];
  long *local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::Value::Value(local_88,6);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::swapPayload(*(Value **)(lVar4 + -8));
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
  }
  Json::Value::setOffsetStart(*(long *)(lVar4 + -8));
  iVar5 = 0;
  do {
    Reader::skipSpaces((Reader *)param_1);
    if (((*(char **)(param_1 + 0xd0) != *(char **)(param_1 + 200)) &&
        (**(char **)(param_1 + 0xd0) == ']')) &&
       ((iVar5 == 0 || ((param_1[0x111] != (Token)0x0 && (param_1[0x113] == (Token)0x0)))))) {
      uVar3 = 1;
      readToken((OurReader *)param_1,(Token *)local_a8);
      break;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == *(long *)(param_1 + 0x38)) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8) + 0x200;
    }
    iVar5 = iVar5 + 1;
    local_a8[0] = Json::Value::operator[]((int)*(undefined8 *)(lVar4 + -8));
    std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
              ((deque<Json::Value*,std::allocator<Json::Value*>> *)param_1,(Value **)local_a8);
    uVar3 = readValue((OurReader *)param_1);
    pvVar1 = *(void **)(param_1 + 0x30);
    if (pvVar1 == *(void **)(param_1 + 0x38)) {
      operator_delete(pvVar1,0x200);
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + -8);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
      *(long *)(param_1 + 0x38) = lVar4;
      *(long *)(param_1 + 0x40) = lVar4 + 0x200;
      *(long *)(param_1 + 0x30) = lVar4 + 0x1f8;
    }
    else {
      *(long *)(param_1 + 0x30) = (long)pvVar1 + -8;
    }
    if ((char)uVar3 == '\0') {
      uVar3 = recoverFromError((OurReader *)param_1,4);
      break;
    }
    while( true ) {
      cVar2 = readToken((OurReader *)param_1,(Token *)local_a8);
      if ((int)local_a8[0] != 0xf) break;
      if (cVar2 == '\0') goto LAB_0010a180;
    }
    if (((int)local_a8[0] != 0xd && (int)local_a8[0] != 4) || (cVar2 != '\x01')) {
LAB_0010a180:
      local_b0 = 0x27;
      local_58 = local_48;
      local_58 = (long *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_b0);
      lVar4 = _UNK_0010db58;
      local_48[0] = local_b0;
      *local_58 = __LC50;
      local_58[1] = lVar4;
      lVar4 = _UNK_0010dbc8;
      local_50 = local_b0;
      local_58[2] = __LC58;
      local_58[3] = lVar4;
      *(undefined8 *)((long)local_58 + 0x1f) = 0x6e6f69746172616c;
      *(undefined1 *)((long)local_58 + local_b0) = 0;
      addError((OurReader *)param_1,(string *)&local_58,(Token *)local_a8,(char *)0x0);
      uVar3 = recoverFromError((OurReader *)param_1,4);
      if (local_58 != local_48) {
        operator_delete(local_58,local_48[0] + 1);
      }
      break;
    }
  } while ((int)local_a8[0] != 4);
  Json::Value::~Value(local_88);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::OurReader::parse(char const*, char const*, Json::Value&, bool) */

undefined4 __thiscall
Json::OurReader::parse(OurReader *this,char *param_1,char *param_2,Value *param_3,bool param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  OurReader OVar8;
  char cVar9;
  undefined4 uVar10;
  void *pvVar11;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Value *local_88;
  char *pcStack_80;
  char *local_78;
  undefined8 *puStack_70;
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(char **)(this + 0xc0) = param_1;
  *(char **)(this + 200) = param_2;
  *(char **)(this + 0xd0) = param_1;
  OVar8 = this[0x110];
  if (this[0x110] != (OurReader)0x0) {
    OVar8 = (OurReader)param_4;
  }
  *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x128] = OVar8;
  **(undefined1 **)(this + 0xf0) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  pcVar2 = *(char **)(this + 0x68);
  pcVar4 = *(char **)(this + 0x70);
  puVar5 = *(undefined8 **)(this + 0x78);
  local_a8 = *(long *)(this + 0x80);
  uStack_a0 = *(undefined8 *)(this + 0x88);
  local_98 = *(undefined8 *)(this + 0x90);
  uStack_90 = *(undefined8 *)(this + 0x98);
  local_88 = (Value *)uVar3;
  pcStack_80 = pcVar2;
  local_78 = pcVar4;
  puStack_70 = puVar5;
  std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
  _M_destroy_data_aux((Token *)&local_88);
  lVar1 = *(long *)(this + 0x98);
  puVar6 = puVar5;
  while (puVar6 = puVar6 + 1, puVar6 < (undefined8 *)(lVar1 + 8U)) {
    operator_delete((void *)*puVar6,0x200);
  }
  pvVar11 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x80) = uVar3;
  *(char **)(this + 0x88) = pcVar2;
  *(char **)(this + 0x90) = pcVar4;
  *(undefined8 **)(this + 0x98) = puVar5;
  if (*(void **)(this + 0x10) != pvVar11) {
    do {
      while (*(void **)(this + 0x38) == pvVar11) {
        operator_delete(pvVar11,0x200);
        lVar1 = *(long *)(*(long *)(this + 0x48) + -8);
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
        *(long *)(this + 0x38) = lVar1;
        pvVar11 = (void *)(lVar1 + 0x1f8);
        *(long *)(this + 0x40) = lVar1 + 0x200;
        *(void **)(this + 0x30) = pvVar11;
        if (pvVar11 == *(void **)(this + 0x10)) goto LAB_0010a4b0;
      }
      pvVar11 = (void *)((long)pvVar11 + -8);
      *(void **)(this + 0x30) = pvVar11;
    } while (pvVar11 != *(void **)(this + 0x10));
  }
LAB_0010a4b0:
  local_88 = param_3;
  std::deque<Json::Value*,std::allocator<Json::Value*>>::emplace_back<Json::Value*>
            ((deque<Json::Value*,std::allocator<Json::Value*>> *)this,&local_88);
  if ((((this[0x119] != (OurReader)0x0) &&
       (pcVar2 = *(char **)(this + 0xc0), 2 < *(long *)(this + 200) - (long)pcVar2)) &&
      (*pcVar2 == -0x11)) && ((pcVar2[1] == -0x45 && (pcVar2[2] == -0x41)))) {
    *(char **)(this + 0xc0) = pcVar2 + 3;
    *(char **)(this + 0xd0) = pcVar2 + 3;
  }
  uVar10 = readValue(this);
  pvVar11 = *(void **)(this + 0x30);
  if (pvVar11 == *(void **)(this + 0x38)) {
    operator_delete(pvVar11,0x200);
    lVar1 = *(long *)(*(long *)(this + 0x48) + -8);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
    *(long *)(this + 0x38) = lVar1;
    *(long *)(this + 0x40) = lVar1 + 0x200;
    *(long *)(this + 0x30) = lVar1 + 0x1f8;
  }
  else {
    *(long *)(this + 0x30) = (long)pvVar11 + -8;
  }
  if (this[0x110] == (OurReader)0x0) {
    readToken(this,(Token *)&local_88);
  }
  else {
    do {
      readToken(this,(Token *)&local_88);
    } while ((int)local_88 == 0xf);
  }
  if ((this[0x116] == (OurReader)0x0) || ((int)local_88 == 0)) {
    if ((this[0x128] == (OurReader)0x0) || (*(long *)(this + 0xf8) == 0)) {
LAB_0010a54a:
      OVar8 = this[0x112];
    }
    else {
      local_68 = local_58;
      std::__cxx11::string::_M_construct<char*>
                (&local_68,*(long *)(this + 0xf0),*(long *)(this + 0xf8) + *(long *)(this + 0xf0));
      Json::Value::setComment(param_3,&local_68,2);
      if (local_68 == local_58) goto LAB_0010a54a;
      operator_delete(local_68,local_58[0] + 1);
      OVar8 = this[0x112];
    }
    if (((OVar8 == (OurReader)0x0) || (cVar9 = Json::Value::isArray(), cVar9 != '\0')) ||
       (cVar9 = Json::Value::isObject(), cVar9 != '\0')) goto LAB_0010a558;
    local_68 = local_58;
    local_88 = (Value *)CONCAT44(local_88._4_4_,0x10);
    local_a8 = 0x41;
    pcStack_80 = param_1;
    local_78 = param_2;
    local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_a8);
    lVar1 = _UNK_0010dbd8;
    *local_68 = __LC59;
    local_68[1] = lVar1;
    lVar7 = _UNK_0010dbe8;
    lVar1 = __LC60;
    *(undefined1 *)(local_68 + 8) = 0x2e;
    local_68[2] = lVar1;
    local_68[3] = lVar7;
    lVar1 = _UNK_0010dbf8;
    local_68[4] = __LC61;
    local_68[5] = lVar1;
    lVar1 = _UNK_0010dc08;
    local_68[6] = __LC62;
    local_68[7] = lVar1;
  }
  else {
    local_68 = local_58;
    local_a8 = 0x26;
    local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_a8);
    lVar1 = _UNK_0010dc18;
    *local_68 = __LC69;
    local_68[1] = lVar1;
    lVar1 = _UNK_0010dc28;
    local_68[2] = __LC70;
    local_68[3] = lVar1;
    *(undefined8 *)((long)local_68 + 0x1e) = 0x2e65756c6176204e;
  }
  local_60 = local_a8;
  *(undefined1 *)((long)local_68 + local_a8) = 0;
  local_58[0] = local_a8;
  addError(this,(string *)&local_68,(Token *)&local_88,(char *)0x0);
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  uVar10 = 0;
LAB_0010a558:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::parseFromStream(Json::CharReader::Factory const&, std::istream&, Json::Value*,
   std::__cxx11::string*) */

undefined1 Json::parseFromStream(Factory *param_1,istream *param_2,Value *param_3,string *param_4)

{
  pointer_____offset_0x10___ puVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  string *psVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  streambuf *psVar11;
  long in_FS_OFFSET;
  char *local_1f8;
  long local_1f0;
  char local_1e8;
  undefined7 uStack_1e7;
  string *local_1d8;
  undefined8 local_1d0;
  long alStack_1c8 [2];
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
  
  puVar1 = PTR_vtable_0010dca8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_1b8[0] = _operator<<;
  psVar11 = (streambuf *)((ostream *)local_1b8 + *(long *)(_operator<< + -0x18));
  local_148[0] = (code *)&std::streambuf::vtable;
  local_70 = 0;
  *(undefined8 *)psVar11 = _memcmp;
  std::ios::init(psVar11);
  local_1a8 = (undefined1  [16])0x0;
  local_1b8[0] = memcmp;
  local_1b8[1] = (code *)puVar1;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_148[0] = Json::ValueIteratorBase::isEqual;
  std::locale::locale(local_178);
  local_1b8[1] = (code *)&std::__cxx11::istringstream::VTT;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  std::ostream::operator<<
            ((ostream *)local_1b8,
             *(streambuf **)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0xe8));
  local_1f0 = 0;
  local_1e8 = '\0';
  local_1f8 = &local_1e8;
  if (local_188._0_8_ == 0) {
    std::__cxx11::string::_M_assign((string *)&local_1f8);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_1f8,0,(char *)0x0,local_198._8_8_);
  }
  pcVar2 = local_1f8;
  pcVar10 = local_1f8 + local_1f0;
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (*(code **)(*plVar5 + 0x10) != OurCharReader::parse) {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,pcVar2,pcVar10,param_3,param_4);
    goto LAB_0010aacc;
  }
  uVar3 = OurReader::parse((OurReader *)(plVar5 + 2),pcVar2,pcVar10,param_3,SUB81(plVar5[1],0));
  if (param_4 == (string *)0x0) goto LAB_0010aacc;
  OurReader::getFormattedErrorMessages_abi_cxx11_();
  psVar7 = *(string **)param_4;
  if (psVar7 == param_4 + 0x10) {
    if (local_1d8 == (string *)alStack_1c8) goto LAB_0010abf8;
    *(string **)param_4 = local_1d8;
    *(ulong *)(param_4 + 8) = local_1d0;
    *(long *)(param_4 + 0x10) = alStack_1c8[0];
    local_1d8 = (string *)alStack_1c8;
  }
  else if (local_1d8 == (string *)alStack_1c8) {
LAB_0010abf8:
    if (local_1d0 != 0) {
      if (local_1d0 == 1) {
        *psVar7 = alStack_1c8[0]._0_1_;
        psVar7 = *(string **)param_4;
      }
      else {
        uVar4 = (uint)local_1d0;
        uVar6 = local_1d0 & 0xffffffff;
        if (uVar4 < 8) {
          if ((local_1d0 & 4) == 0) {
            if (uVar4 != 0) {
              *psVar7 = alStack_1c8[0]._0_1_;
              if ((local_1d0 & 2) == 0) goto LAB_0010ac2e;
              *(undefined2 *)(psVar7 + (uVar6 - 2)) =
                   *(undefined2 *)((long)alStack_1c8 + (uVar6 - 2));
              psVar7 = *(string **)param_4;
            }
          }
          else {
            *(undefined4 *)psVar7 = (undefined4)alStack_1c8[0];
            *(undefined4 *)(psVar7 + (uVar6 - 4)) = *(undefined4 *)((long)alStack_1c8 + (uVar6 - 4))
            ;
            psVar7 = *(string **)param_4;
          }
        }
        else {
          *(long *)psVar7 = alStack_1c8[0];
          *(undefined8 *)(psVar7 + ((local_1d0 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)alStack_1c8 + ((local_1d0 & 0xffffffff) - 8));
          lVar8 = (long)psVar7 - ((ulong)(psVar7 + 8) & 0xfffffffffffffff8);
          uVar4 = (int)lVar8 + uVar4 & 0xfffffff8;
          if (7 < uVar4) {
            uVar9 = 0;
            do {
              uVar6 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(psVar7 + 8) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((string *)alStack_1c8 + (uVar6 - lVar8));
            } while (uVar9 < uVar4);
          }
LAB_0010ac2e:
          psVar7 = *(string **)param_4;
        }
      }
    }
    *(ulong *)(param_4 + 8) = local_1d0;
    psVar7[local_1d0] = (string)0x0;
  }
  else {
    lVar8 = *(long *)(param_4 + 0x10);
    *(string **)param_4 = local_1d8;
    *(ulong *)(param_4 + 8) = local_1d0;
    *(long *)(param_4 + 0x10) = alStack_1c8[0];
    local_1d8 = (string *)alStack_1c8;
    if (psVar7 != (string *)0x0) {
      local_1d8 = psVar7;
      alStack_1c8[0] = lVar8;
    }
  }
  local_1d0 = 0;
  *local_1d8 = (string)0x0;
  if (local_1d8 != (string *)alStack_1c8) {
    operator_delete(local_1d8,alStack_1c8[0] + 1);
  }
LAB_0010aacc:
  (**(code **)(*plVar5 + 8))(plVar5);
  if (local_1f8 != &local_1e8) {
    operator_delete(local_1f8,CONCAT71(uStack_1e7,local_1e8) + 1);
  }
  local_148[0] = Json::ValueIteratorBase::isEqual;
  local_1b8[0] = memcmp;
  local_1b8[1] = (code *)&std::__cxx11::istringstream::VTT;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = std::__cxx11::stringbuf::_M_sync;
  std::locale::~locale(local_178);
  local_1b8[0] = _operator<<;
  *(undefined8 *)((long)local_1b8 + *(long *)(_operator<< + -0x18)) = _memcmp;
  local_148[0] = (code *)&std::streambuf::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::TEMPNAMEPLACEHOLDERVALUE(std::istream&, Json::Value&) */

istream * Json::operator>>(istream *param_1,Value *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined **local_98;
  Value local_90 [40];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = &PTR__CharReaderBuilder_0010d9f8;
  Json::Value::Value(local_90,0);
  CharReaderBuilder::setDefaults(local_90);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  cVar1 = parseFromStream((Factory *)&local_98,param_1,param_2,(string *)&local_68);
  if (cVar1 == '\0') {
    Json::throwRuntimeError((string *)&local_68);
  }
  else {
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    }
    local_98 = &PTR__CharReaderBuilder_0010d9f8;
    Json::Value::~Value(local_90);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::CharReaderBuilder::validate(Json::Value*) const */

ulong __thiscall Json::CharReaderBuilder::validate(CharReaderBuilder *this,Value *param_1)

{
  _Rb_tree_node_base *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var6;
  uint uVar7;
  int iVar8;
  Value *pVVar9;
  Value *this_00;
  ulong uVar10;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var11;
  _Rb_tree_node_base *p_Var12;
  undefined8 *puVar13;
  _Rb_tree_node_base *p_Var14;
  undefined8 **ppuVar15;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var16;
  long lVar17;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auVar20 [16];
  ValueIteratorBase local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined7 local_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined5 *local_1a8;
  undefined8 local_1a0;
  undefined5 local_198;
  undefined3 uStack_193;
  undefined5 uStack_190;
  undefined1 local_18b;
  long *local_188;
  long local_180;
  long local_178 [2];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  long *local_148;
  long local_140;
  long local_138 [2];
  long *local_128;
  long local_120;
  long local_118 [2];
  long *local_108;
  long local_100;
  long local_f8 [2];
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined7 *local_c8;
  undefined8 local_c0;
  undefined7 local_b8;
  undefined4 uStack_b1;
  undefined1 local_ad;
  undefined5 *local_a8;
  undefined8 local_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined1 local_8b;
  long *local_88;
  long local_80;
  long local_78 [2];
  undefined8 *local_68 [2];
  undefined8 local_58;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (validate(Json::Value*)::valid_keys == '\0') {
    iVar8 = __cxa_guard_acquire(&validate(Json::Value*)::valid_keys);
    if (iVar8 != 0) {
      p_Var11 = (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                 *)operator_new(0x30);
      local_1a9 = 0;
      local_1c8 = (undefined8 *)&stack0xfffffffffffffe48;
      local_1a8 = &local_198;
      local_198 = 0x776f6c6c61;
      p_Var1 = (_Rb_tree_node_base *)(p_Var11 + 8);
      local_1b8 = 0x7463656c6c6f63;
      uStack_1b1 = 0x43;
      uStack_1b0 = 0x73746e656d6d6f;
      uStack_193 = 0x6d6f43;
      uStack_190 = 0x73746e656d;
      local_188 = local_178;
      local_1c0 = (undefined8 *)0xf;
      local_1a0 = 0xd;
      local_18b = 0;
      local_1d8._0_8_ = 0x13;
      local_188 = (long *)std::__cxx11::string::_M_create((ulong *)&local_188,(ulong)local_1d8);
      lVar17 = _UNK_0010dc38;
      local_178[0] = local_1d8._0_8_;
      *local_188 = __LC72;
      local_188[1] = lVar17;
      *(undefined4 *)((long)local_188 + 0xf) = 0x73616d6d;
      local_180 = local_1d8._0_8_;
      *(undefined1 *)((long)local_188 + local_1d8._0_8_) = 0;
      local_168 = &local_158;
      local_158 = 0x6f52746369727473;
      local_150 = 0x746f;
      local_148 = local_138;
      local_160 = 10;
      local_14e = 0;
      local_1d8._0_8_ = 0x1c;
      local_148 = (long *)std::__cxx11::string::_M_create((ulong *)&local_148,(ulong)local_1d8);
      lVar17 = _UNK_0010dc48;
      local_138[0] = local_1d8._0_8_;
      *local_148 = __LC73;
      local_148[1] = lVar17;
      uVar4 = _UNK_0010dc58;
      *(undefined8 *)((long)local_148 + 0xc) = __LC74;
      *(undefined8 *)((long)local_148 + 0x14) = uVar4;
      local_140 = local_1d8._0_8_;
      *(undefined1 *)((long)local_148 + local_1d8._0_8_) = 0;
      local_128 = local_118;
      local_1d8._0_8_ = 0x10;
      local_128 = (long *)std::__cxx11::string::_M_create((ulong *)&local_128,(ulong)local_1d8);
      lVar17 = _UNK_0010dc68;
      local_118[0] = local_1d8._0_8_;
      *local_128 = __LC75;
      local_128[1] = lVar17;
      local_120 = local_1d8._0_8_;
      *(undefined1 *)((long)local_128 + local_1d8._0_8_) = 0;
      local_108 = local_f8;
      local_1d8._0_8_ = 0x11;
      local_108 = (long *)std::__cxx11::string::_M_create((ulong *)&local_108,(ulong)local_1d8);
      lVar17 = _UNK_0010dc78;
      local_f8[0] = local_1d8._0_8_;
      *local_108 = __LC76;
      local_108[1] = lVar17;
      *(undefined1 *)(local_108 + 2) = 0x73;
      local_100 = local_1d8._0_8_;
      *(undefined1 *)((long)local_108 + local_1d8._0_8_) = 0;
      local_e8 = &local_d8;
      local_d8 = 0x6d694c6b63617473;
      local_c8 = &local_b8;
      local_b8 = 0x4566496c696166;
      local_a8 = &local_98;
      local_98 = 0x63656a6572;
      local_d0 = 0x7469;
      uStack_93 = 0x754474;
      uStack_90 = 0x7379654b70;
      local_88 = local_78;
      local_e0 = 10;
      local_ce = 0;
      uStack_b1 = 0x61727478;
      local_c0 = 0xb;
      local_ad = 0;
      local_a0 = 0xd;
      local_8b = 0;
      local_1d8._0_8_ = 0x12;
      local_88 = (long *)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)local_1d8);
      lVar5 = _UNK_0010dc88;
      lVar17 = __LC77;
      local_78[0] = local_1d8._0_8_;
      *(undefined2 *)(local_88 + 2) = 0x7374;
      *local_88 = lVar17;
      local_88[1] = lVar5;
      local_80 = local_1d8._0_8_;
      *(undefined1 *)((long)local_88 + local_1d8._0_8_) = 0;
      local_68[0] = &local_58;
      local_68[1] = (undefined8 *)0x7;
      local_58._0_4_ = 0x70696b73;
      local_58._4_3_ = 0x6d6f42;
      local_58._7_1_ = 0;
      *(undefined4 *)(p_Var11 + 8) = 0;
      *(undefined8 *)(p_Var11 + 0x10) = 0;
      *(_Rb_tree_node_base **)(p_Var11 + 0x18) = p_Var1;
      *(_Rb_tree_node_base **)(p_Var11 + 0x20) = p_Var1;
      *(undefined8 *)(p_Var11 + 0x28) = 0;
      ppuVar15 = &local_1c8;
      do {
        auVar20 = std::
                  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                  ::_M_get_insert_hint_unique_pos(p_Var11,p_Var1,ppuVar15);
        p_Var14 = auVar20._8_8_;
        if (p_Var14 != (_Rb_tree_node_base *)0x0) {
          if ((auVar20._0_8_ == 0) && (p_Var1 != p_Var14)) {
            puVar2 = ppuVar15[1];
            puVar3 = *(undefined8 **)(p_Var14 + 0x28);
            puVar13 = puVar3;
            if (puVar2 <= puVar3) {
              puVar13 = puVar2;
            }
            if (puVar13 == (undefined8 *)0x0) {
LAB_0010b559:
              uVar10 = (long)puVar2 - (long)puVar3;
              bVar19 = false;
              if (0x7fffffff < (long)uVar10) goto LAB_0010b4c4;
              if ((long)uVar10 < -0x80000000) goto LAB_0010b4be;
            }
            else {
              uVar7 = memcmp(*ppuVar15,*(void **)(p_Var14 + 0x20),(size_t)puVar13);
              uVar10 = (ulong)uVar7;
              if (uVar7 == 0) goto LAB_0010b559;
            }
            bVar19 = (bool)((byte)(uVar10 >> 0x1f) & 1);
          }
          else {
LAB_0010b4be:
            bVar19 = true;
          }
LAB_0010b4c4:
          p_Var12 = (_Rb_tree_node_base *)operator_new(0x40);
          puVar2 = *ppuVar15;
          *(_Rb_tree_node_base **)(p_Var12 + 0x20) = p_Var12 + 0x30;
          std::__cxx11::string::_M_construct<char*>
                    (p_Var12 + 0x20,puVar2,(long)ppuVar15[1] + (long)puVar2);
          std::_Rb_tree_insert_and_rebalance(bVar19,p_Var12,p_Var14,p_Var1);
          *(long *)(p_Var11 + 0x28) = *(long *)(p_Var11 + 0x28) + 1;
        }
        ppuVar15 = ppuVar15 + 4;
      } while (ppuVar15 != &local_48);
      validate(Json::Value*)::valid_keys = p_Var11;
      __cxa_guard_release(&validate(Json::Value*)::valid_keys);
      ppuVar15 = local_68;
      do {
        if ((undefined8 **)*ppuVar15 != ppuVar15 + 2) {
          operator_delete(*ppuVar15,(long)ppuVar15[2] + 1);
        }
        bVar19 = &local_1c8 != ppuVar15;
        ppuVar15 = ppuVar15 + -4;
      } while (bVar19);
    }
  }
  local_1e8 = (ValueIteratorBase  [16])Json::Value::begin();
  do {
    auVar20 = Json::Value::end();
    local_1d8 = auVar20;
    uVar7 = Json::ValueIteratorBase::isEqual(local_1e8);
    if ((char)uVar7 != '\0') {
      uVar10 = (ulong)uVar7;
      if (param_1 == (Value *)0x0) {
LAB_0010b04d:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar10;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = Json::Value::empty();
        return uVar10;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Json::ValueIteratorBase::name_abi_cxx11_();
    puVar3 = local_1c0;
    puVar2 = local_1c8;
    p_Var11 = validate(Json::Value*)::valid_keys + 8;
    p_Var6 = *(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
               **)(validate(Json::Value*)::valid_keys + 0x10);
    p_Var18 = p_Var11;
    if (*(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
          **)(validate(Json::Value*)::valid_keys + 0x10) ==
        (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
         *)0x0) {
LAB_0010af70:
      if (param_1 == (Value *)0x0) {
        uVar10 = 0;
        if (local_1c8 != (undefined8 *)&stack0xfffffffffffffe48) {
          operator_delete(local_1c8,CONCAT17(uStack_1b1,local_1b8) + 1);
        }
        goto LAB_0010b04d;
      }
      pVVar9 = (Value *)Json::ValueIteratorBase::deref();
      this_00 = (Value *)Json::Value::operator[]((string *)param_1);
      Json::Value::operator=(this_00,pVVar9);
      if (local_1c8 != (undefined8 *)&stack0xfffffffffffffe48) {
        operator_delete(local_1c8,CONCAT17(uStack_1b1,local_1b8) + 1);
      }
    }
    else {
      do {
        while( true ) {
          p_Var16 = p_Var6;
          uVar10 = *(ulong *)(p_Var16 + 0x28);
          puVar13 = puVar3;
          if (uVar10 <= puVar3) {
            puVar13 = (undefined8 *)uVar10;
          }
          if (puVar13 != (undefined8 *)0x0) break;
LAB_0010aeef:
          lVar17 = uVar10 - (long)puVar3;
          if (lVar17 < 0x80000000) {
            if (-0x80000001 < lVar17) {
              iVar8 = (int)lVar17;
              goto LAB_0010af09;
            }
            goto LAB_0010aec0;
          }
LAB_0010af0d:
          p_Var6 = *(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                     **)(p_Var16 + 0x10);
          p_Var18 = p_Var16;
          if (*(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                **)(p_Var16 + 0x10) ==
              (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
               *)0x0) goto LAB_0010af1a;
        }
        iVar8 = memcmp(*(void **)(p_Var16 + 0x20),puVar2,(size_t)puVar13);
        if (iVar8 == 0) goto LAB_0010aeef;
LAB_0010af09:
        if (-1 < iVar8) goto LAB_0010af0d;
LAB_0010aec0:
        p_Var6 = *(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                   **)(p_Var16 + 0x18);
      } while (*(_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                 **)(p_Var16 + 0x18) !=
               (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                *)0x0);
LAB_0010af1a:
      if (p_Var11 == p_Var18) goto LAB_0010af70;
      uVar10 = *(ulong *)(p_Var18 + 0x28);
      puVar13 = puVar3;
      if (uVar10 <= puVar3) {
        puVar13 = (undefined8 *)uVar10;
      }
      if (puVar13 == (undefined8 *)0x0) {
LAB_0010af4f:
        lVar17 = (long)puVar3 - uVar10;
        if (lVar17 < 0x80000000) {
          if (lVar17 < -0x80000000) goto LAB_0010af70;
          iVar8 = (int)lVar17;
          goto LAB_0010af6c;
        }
      }
      else {
        iVar8 = memcmp(puVar2,*(void **)(p_Var18 + 0x20),(size_t)puVar13);
        if (iVar8 == 0) goto LAB_0010af4f;
LAB_0010af6c:
        if (iVar8 < 0) goto LAB_0010af70;
      }
      if (puVar2 != (undefined8 *)&stack0xfffffffffffffe48) {
        operator_delete(puVar2,CONCAT17(uStack_1b1,local_1b8) + 1);
      }
    }
    Json::ValueIteratorBase::increment();
  } while( true );
}



/* Json::OurCharReader::~OurCharReader() */

void __thiscall Json::OurCharReader::~OurCharReader(OurCharReader *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__OurCharReader_0010d9d0;
  if (*(OurCharReader **)(this + 0x100) != this + 0x110) {
    operator_delete(*(OurCharReader **)(this + 0x100),*(long *)(this + 0x110) + 1);
  }
  if (*(OurCharReader **)(this + 0xb0) != this + 0xc0) {
    operator_delete(*(OurCharReader **)(this + 0xb0),*(long *)(this + 0xc0) + 1);
  }
  local_68 = *(undefined8 *)(this + 0x90);
  uStack_60 = *(undefined8 *)(this + 0x98);
  local_48 = *(undefined8 *)(this + 0x70);
  uStack_40 = *(undefined8 *)(this + 0x78);
  local_58 = *(undefined8 *)(this + 0xa0);
  uStack_50 = *(undefined8 *)(this + 0xa8);
  local_38 = *(undefined8 *)(this + 0x80);
  uStack_30 = *(undefined8 *)(this + 0x88);
  std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
  _M_destroy_data_aux(&local_48,&local_68);
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != (void *)0x0) {
    lVar1 = *(long *)(this + 0xa8);
    puVar2 = *(undefined8 **)(this + 0x88);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar3 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar3,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar3 = *(void **)(this + 0x60);
    }
    operator_delete(pvVar3,*(long *)(this + 0x68) * 8);
  }
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 == (void *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(this + 0x58);
    puVar2 = *(undefined8 **)(this + 0x38);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar3 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar3,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar3 = *(void **)(this + 0x10);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete(pvVar3,*(long *)(this + 0x18) << 3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::OurCharReader::~OurCharReader() */

void __thiscall Json::OurCharReader::~OurCharReader(OurCharReader *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__OurCharReader_0010d9d0;
  if (*(OurCharReader **)(this + 0x100) != this + 0x110) {
    operator_delete(*(OurCharReader **)(this + 0x100),*(long *)(this + 0x110) + 1);
  }
  if (*(OurCharReader **)(this + 0xb0) != this + 0xc0) {
    operator_delete(*(OurCharReader **)(this + 0xb0),*(long *)(this + 0xc0) + 1);
  }
  local_68 = *(undefined8 *)(this + 0x90);
  uStack_60 = *(undefined8 *)(this + 0x98);
  local_48 = *(undefined8 *)(this + 0x70);
  uStack_40 = *(undefined8 *)(this + 0x78);
  local_58 = *(undefined8 *)(this + 0xa0);
  uStack_50 = *(undefined8 *)(this + 0xa8);
  local_38 = *(undefined8 *)(this + 0x80);
  uStack_30 = *(undefined8 *)(this + 0x88);
  std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::
  _M_destroy_data_aux(&local_48,&local_68);
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != (void *)0x0) {
    lVar1 = *(long *)(this + 0xa8);
    puVar2 = *(undefined8 **)(this + 0x88);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar3 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar3,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar3 = *(void **)(this + 0x60);
    }
    operator_delete(pvVar3,*(long *)(this + 0x68) * 8);
  }
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    lVar1 = *(long *)(this + 0x58);
    puVar2 = *(undefined8 **)(this + 0x38);
    if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
      do {
        pvVar3 = (void *)*puVar2;
        puVar2 = puVar2 + 1;
        operator_delete(pvVar3,0x200);
      } while (puVar2 < (undefined8 *)(lVar1 + 8U));
      pvVar3 = *(void **)(this + 0x10);
    }
    operator_delete(pvVar3,*(long *)(this + 0x18) * 8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x140);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Deque_base<Json::Reader::ErrorInfo, std::allocator<Json::Reader::ErrorInfo>
   >::_M_initialize_map(unsigned long) */

void __thiscall
std::_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_initialize_map
          (_Deque_base<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this,
          ulong param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar1 = (param_1 >> 3) + 1;
  uVar5 = (param_1 >> 3) + 3;
  if (uVar5 < 9) {
    *(undefined8 *)(this + 8) = 8;
    uVar8 = 0x40;
  }
  else {
    *(ulong *)(this + 8) = uVar5;
    uVar8 = uVar5 * 8;
    if (uVar5 >> 0x3c != 0) {
      if (uVar5 >> 0x3d != 0) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pvVar6 = operator_new(uVar8);
  *(void **)this = pvVar6;
  plVar2 = (long *)((long)pvVar6 + ((ulong)(*(long *)(this + 8) - lVar1) >> 1) * 8);
  plVar3 = plVar2 + lVar1;
  for (plVar7 = plVar2; plVar7 < plVar3; plVar7 = plVar7 + 1) {
    pvVar6 = operator_new(0x200);
    *plVar7 = (long)pvVar6;
  }
  lVar1 = *plVar2;
  *(long **)(this + 0x28) = plVar2;
  *(long *)(this + 0x18) = lVar1;
  *(long *)(this + 0x20) = lVar1 + 0x200;
  *(long **)(this + 0x48) = plVar3 + -1;
  lVar4 = plVar3[-1];
  *(long *)(this + 0x10) = lVar1;
  *(long *)(this + 0x38) = lVar4;
  *(long *)(this + 0x40) = lVar4 + 0x200;
  *(ulong *)(this + 0x30) = lVar4 + (ulong)((uint)param_1 & 7) * 0x40;
  return;
}



/* std::deque<Json::Reader::ErrorInfo, std::allocator<Json::Reader::ErrorInfo>
   >::_M_erase_at_end(std::_Deque_iterator<Json::Reader::ErrorInfo, Json::Reader::ErrorInfo&,
   Json::Reader::ErrorInfo*>) */

void __thiscall
std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_erase_at_end
          (deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this,
          long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_2[2];
  lVar3 = *(long *)(this + 0x30);
  plVar4 = *(long **)(this + 0x48);
  lVar9 = *(long *)(this + 0x38);
  plVar5 = (long *)param_2[3];
  lVar8 = *param_2;
  plVar6 = plVar5;
  while (plVar6 = plVar6 + 1, plVar6 < plVar4) {
    lVar10 = *plVar6;
    lVar1 = lVar10 + 0x200;
    do {
      if (*(void **)(lVar10 + 0x18) != (void *)(lVar10 + 0x28)) {
        operator_delete(*(void **)(lVar10 + 0x18),*(long *)(lVar10 + 0x28) + 1);
      }
      lVar10 = lVar10 + 0x40;
    } while (lVar10 != lVar1);
  }
  if (plVar5 == plVar4) {
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x40) {
      if (*(void **)(lVar8 + 0x18) != (void *)(lVar8 + 0x28)) {
        operator_delete(*(void **)(lVar8 + 0x18),*(long *)(lVar8 + 0x28) + 1);
      }
    }
  }
  else {
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0x40) {
      if (*(void **)(lVar8 + 0x18) != (void *)(lVar8 + 0x28)) {
        operator_delete(*(void **)(lVar8 + 0x18),*(long *)(lVar8 + 0x28) + 1);
      }
    }
    for (; lVar3 != lVar9; lVar9 = lVar9 + 0x40) {
      if (*(void **)(lVar9 + 0x18) != (void *)(lVar9 + 0x28)) {
        operator_delete(*(void **)(lVar9 + 0x18),*(long *)(lVar9 + 0x28) + 1);
      }
    }
  }
  lVar2 = *(long *)(this + 0x48);
  for (puVar7 = (undefined8 *)(param_2[3] + 8); puVar7 < (undefined8 *)(lVar2 + 8U);
      puVar7 = puVar7 + 1) {
    operator_delete((void *)*puVar7,0x200);
  }
  lVar2 = param_2[1];
  *(long *)(this + 0x30) = *param_2;
  *(long *)(this + 0x38) = lVar2;
  lVar2 = param_2[3];
  *(long *)(this + 0x40) = param_2[2];
  *(long *)(this + 0x48) = lVar2;
  return;
}



/* void std::vector<Json::Reader::StructuredError, std::allocator<Json::Reader::StructuredError>
   >::_M_realloc_insert<Json::Reader::StructuredError
   const&>(__gnu_cxx::__normal_iterator<Json::Reader::StructuredError*,
   std::vector<Json::Reader::StructuredError, std::allocator<Json::Reader::StructuredError> > >,
   Json::Reader::StructuredError const&) */

void __thiscall
std::vector<Json::Reader::StructuredError,std::allocator<Json::Reader::StructuredError>>::
_M_realloc_insert<Json::Reader::StructuredError_const&>
          (vector<Json::Reader::StructuredError,std::allocator<Json::Reader::StructuredError>> *this
          ,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar7 = (long)puVar1 - (long)puVar2 >> 4;
  uVar8 = lVar7 * -0x5555555555555555;
  if (uVar8 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar15 = uVar8 + 1;
    if (0xfffffffffffffffe < uVar8) goto LAB_0010c368;
    if (0x2aaaaaaaaaaaaaa < uVar15) {
      uVar15 = 0x2aaaaaaaaaaaaaa;
    }
    uVar15 = uVar15 * 0x30;
  }
  else {
    uVar15 = lVar7 * 0x5555555555555556;
    if (uVar15 < uVar8) {
LAB_0010c368:
      uVar15 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar15 == 0) {
        local_50 = 0;
        puVar12 = (undefined8 *)0x30;
        puVar9 = (undefined8 *)0x0;
        goto LAB_0010c2a0;
      }
      if (0x2aaaaaaaaaaaaaa < uVar15) {
        uVar15 = 0x2aaaaaaaaaaaaaa;
      }
      uVar15 = uVar15 * 0x30;
    }
  }
  puVar9 = (undefined8 *)operator_new(uVar15);
  local_50 = (long)puVar9 + uVar15;
  puVar12 = puVar9 + 6;
LAB_0010c2a0:
  puVar10 = (undefined8 *)((long)puVar9 + ((long)param_2 - (long)puVar2));
  uVar5 = *param_3;
  uVar6 = param_3[1];
  lVar7 = param_3[2];
  puVar10[2] = puVar10 + 4;
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  __cxx11::string::_M_construct<char*>(puVar10 + 2,lVar7,param_3[3] + lVar7);
  puVar10 = puVar2;
  puVar11 = puVar9;
  if (param_2 != puVar2) {
    do {
      puVar12 = puVar11 + 4;
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      puVar11[2] = puVar12;
      puVar3 = (undefined8 *)puVar10[2];
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      if (puVar3 == puVar10 + 4) {
        lVar7 = puVar10[3];
        uVar8 = lVar7 + 1;
        uVar16 = (uint)uVar8;
        if (7 < uVar16) {
          *puVar12 = *puVar3;
          *(undefined8 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x18) =
               *(undefined8 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 8));
          lVar7 = (long)puVar12 - ((ulong)(puVar11 + 5) & 0xfffffffffffffff8);
          uVar16 = uVar16 + (int)lVar7 & 0xfffffff8;
          if (7 < uVar16) {
            uVar13 = 0;
            do {
              uVar8 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(puVar11 + 5) & 0xfffffffffffffff8) + uVar8) =
                   *(undefined8 *)((long)puVar3 + (uVar8 - lVar7));
            } while (uVar13 < uVar16);
          }
          goto LAB_0010c2ec;
        }
        if ((uVar8 & 4) == 0) {
          if (uVar16 != 0) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            if ((uVar8 & 2) == 0) goto LAB_0010c2ec;
            *(undefined2 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1e) =
                 *(undefined2 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 2));
            lVar7 = puVar10[3];
          }
        }
        else {
          *(undefined4 *)puVar12 = *(undefined4 *)puVar3;
          *(undefined4 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1c) =
               *(undefined4 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 4));
          lVar7 = puVar10[3];
        }
      }
      else {
        puVar11[2] = puVar3;
        puVar11[4] = puVar10[4];
LAB_0010c2ec:
        lVar7 = puVar10[3];
      }
      puVar10 = puVar10 + 6;
      puVar11[3] = lVar7;
      puVar11 = puVar11 + 6;
    } while (puVar10 != param_2);
    puVar12 = (undefined8 *)
              ((long)puVar9 + ((long)param_2 + (-0x30 - (long)puVar2) & 0xfffffffffffffff0U) + 0x60)
    ;
  }
  puVar10 = param_2;
  puVar11 = puVar12;
  if (param_2 != puVar1) {
    do {
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      puVar4 = (undefined8 *)puVar10[2];
      puVar3 = puVar11 + 4;
      puVar11[2] = puVar3;
      lVar7 = puVar10[3];
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      if (puVar4 == puVar10 + 4) {
        uVar8 = lVar7 + 1;
        uVar16 = (uint)uVar8;
        if (uVar16 < 8) {
          if ((uVar8 & 4) == 0) {
            if ((uVar16 != 0) && (*(undefined1 *)puVar3 = *(undefined1 *)puVar4, (uVar8 & 2) != 0))
            {
              *(undefined2 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1e) =
                   *(undefined2 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
            *(undefined4 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1c) =
                 *(undefined4 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 4));
          }
        }
        else {
          *puVar3 = *puVar4;
          *(undefined8 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x18) =
               *(undefined8 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 8));
          lVar14 = (long)puVar3 - ((ulong)(puVar11 + 5) & 0xfffffffffffffff8);
          uVar16 = uVar16 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar16) {
            uVar13 = 0;
            do {
              uVar8 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(puVar11 + 5) & 0xfffffffffffffff8) + uVar8) =
                   *(undefined8 *)((long)puVar4 + (uVar8 - lVar14));
            } while (uVar13 < uVar16);
          }
        }
      }
      else {
        puVar11[2] = puVar4;
        puVar11[4] = puVar10[4];
      }
      puVar10 = puVar10 + 6;
      puVar11[3] = lVar7;
      puVar11 = puVar11 + 6;
    } while (puVar10 != puVar1);
    puVar12 = puVar12 + ((((ulong)((long)puVar10 + (-0x30 - (long)param_2)) >> 4) *
                          0xaaaaaaaaaaaaaab & 0xfffffffffffffff) * 3 + 3) * 2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar12;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void std::vector<Json::OurReader::StructuredError,
   std::allocator<Json::OurReader::StructuredError>
   >::_M_realloc_insert<Json::OurReader::StructuredError
   const&>(__gnu_cxx::__normal_iterator<Json::OurReader::StructuredError*,
   std::vector<Json::OurReader::StructuredError, std::allocator<Json::OurReader::StructuredError> >
   >, Json::OurReader::StructuredError const&) */

void __thiscall
std::vector<Json::OurReader::StructuredError,std::allocator<Json::OurReader::StructuredError>>::
_M_realloc_insert<Json::OurReader::StructuredError_const&>
          (vector<Json::OurReader::StructuredError,std::allocator<Json::OurReader::StructuredError>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar7 = (long)puVar1 - (long)puVar2 >> 4;
  uVar8 = lVar7 * -0x5555555555555555;
  if (uVar8 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar15 = uVar8 + 1;
    if (0xfffffffffffffffe < uVar8) goto LAB_0010c738;
    if (0x2aaaaaaaaaaaaaa < uVar15) {
      uVar15 = 0x2aaaaaaaaaaaaaa;
    }
    uVar15 = uVar15 * 0x30;
  }
  else {
    uVar15 = lVar7 * 0x5555555555555556;
    if (uVar15 < uVar8) {
LAB_0010c738:
      uVar15 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar15 == 0) {
        local_50 = 0;
        puVar12 = (undefined8 *)0x30;
        puVar9 = (undefined8 *)0x0;
        goto LAB_0010c670;
      }
      if (0x2aaaaaaaaaaaaaa < uVar15) {
        uVar15 = 0x2aaaaaaaaaaaaaa;
      }
      uVar15 = uVar15 * 0x30;
    }
  }
  puVar9 = (undefined8 *)operator_new(uVar15);
  local_50 = (long)puVar9 + uVar15;
  puVar12 = puVar9 + 6;
LAB_0010c670:
  puVar10 = (undefined8 *)((long)puVar9 + ((long)param_2 - (long)puVar2));
  uVar5 = *param_3;
  uVar6 = param_3[1];
  lVar7 = param_3[2];
  puVar10[2] = puVar10 + 4;
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  __cxx11::string::_M_construct<char*>(puVar10 + 2,lVar7,param_3[3] + lVar7);
  puVar10 = puVar2;
  puVar11 = puVar9;
  if (param_2 != puVar2) {
    do {
      puVar12 = puVar11 + 4;
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      puVar11[2] = puVar12;
      puVar3 = (undefined8 *)puVar10[2];
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      if (puVar3 == puVar10 + 4) {
        lVar7 = puVar10[3];
        uVar8 = lVar7 + 1;
        uVar16 = (uint)uVar8;
        if (7 < uVar16) {
          *puVar12 = *puVar3;
          *(undefined8 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x18) =
               *(undefined8 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 8));
          lVar7 = (long)puVar12 - ((ulong)(puVar11 + 5) & 0xfffffffffffffff8);
          uVar16 = uVar16 + (int)lVar7 & 0xfffffff8;
          if (7 < uVar16) {
            uVar13 = 0;
            do {
              uVar8 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(puVar11 + 5) & 0xfffffffffffffff8) + uVar8) =
                   *(undefined8 *)((long)puVar3 + (uVar8 - lVar7));
            } while (uVar13 < uVar16);
          }
          goto LAB_0010c6bc;
        }
        if ((uVar8 & 4) == 0) {
          if (uVar16 != 0) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            if ((uVar8 & 2) == 0) goto LAB_0010c6bc;
            *(undefined2 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1e) =
                 *(undefined2 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 2));
            lVar7 = puVar10[3];
          }
        }
        else {
          *(undefined4 *)puVar12 = *(undefined4 *)puVar3;
          *(undefined4 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1c) =
               *(undefined4 *)((long)puVar3 + ((uVar8 & 0xffffffff) - 4));
          lVar7 = puVar10[3];
        }
      }
      else {
        puVar11[2] = puVar3;
        puVar11[4] = puVar10[4];
LAB_0010c6bc:
        lVar7 = puVar10[3];
      }
      puVar10 = puVar10 + 6;
      puVar11[3] = lVar7;
      puVar11 = puVar11 + 6;
    } while (puVar10 != param_2);
    puVar12 = (undefined8 *)
              ((long)puVar9 + ((long)param_2 + (-0x30 - (long)puVar2) & 0xfffffffffffffff0U) + 0x60)
    ;
  }
  puVar10 = param_2;
  puVar11 = puVar12;
  if (param_2 != puVar1) {
    do {
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      puVar4 = (undefined8 *)puVar10[2];
      puVar3 = puVar11 + 4;
      puVar11[2] = puVar3;
      lVar7 = puVar10[3];
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      if (puVar4 == puVar10 + 4) {
        uVar8 = lVar7 + 1;
        uVar16 = (uint)uVar8;
        if (uVar16 < 8) {
          if ((uVar8 & 4) == 0) {
            if ((uVar16 != 0) && (*(undefined1 *)puVar3 = *(undefined1 *)puVar4, (uVar8 & 2) != 0))
            {
              *(undefined2 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1e) =
                   *(undefined2 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
            *(undefined4 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x1c) =
                 *(undefined4 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 4));
          }
        }
        else {
          *puVar3 = *puVar4;
          *(undefined8 *)((long)puVar11 + (uVar8 & 0xffffffff) + 0x18) =
               *(undefined8 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 8));
          lVar14 = (long)puVar3 - ((ulong)(puVar11 + 5) & 0xfffffffffffffff8);
          uVar16 = uVar16 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar16) {
            uVar13 = 0;
            do {
              uVar8 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(puVar11 + 5) & 0xfffffffffffffff8) + uVar8) =
                   *(undefined8 *)((long)puVar4 + (uVar8 - lVar14));
            } while (uVar13 < uVar16);
          }
        }
      }
      else {
        puVar11[2] = puVar4;
        puVar11[4] = puVar10[4];
      }
      puVar10 = puVar10 + 6;
      puVar11[3] = lVar7;
      puVar11 = puVar11 + 6;
    } while (puVar10 != puVar1);
    puVar12 = puVar12 + ((((ulong)((long)puVar10 + (-0x30 - (long)param_2)) >> 4) *
                          0xaaaaaaaaaaaaaab & 0xfffffffffffffff) * 3 + 3) * 2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar12;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* std::deque<Json::Reader::ErrorInfo, std::allocator<Json::Reader::ErrorInfo>
   >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_reallocate_map
          (deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this,
          ulong param_1,bool param_2)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  long *__dest;
  long lVar4;
  long *__src;
  ulong uVar5;
  void *unaff_R14;
  undefined1 uVar6;
  
  __src = *(long **)(this + 0x28);
  __dest = *(long **)(this + 8);
  lVar4 = *(long *)(this + 0x48) - (long)__src;
  lVar3 = param_1 + 1 + (lVar4 >> 3);
  if ((long *)(lVar3 * 2) < __dest) {
    lVar3 = ((ulong)((long)__dest - lVar3) >> 1) * 8;
    if (param_2) {
      lVar3 = lVar3 + param_1 * 8;
    }
    __dest = (long *)(lVar3 + *(long *)this);
    sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
    if (__dest < __src) {
      if (8 < (long)sVar2) {
        memmove(__dest,__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010cae3;
      }
      if (sVar2 == 8) {
        lVar3 = *__src;
        *__dest = lVar3;
        goto LAB_0010cae3;
      }
    }
    else {
      if (8 < (long)sVar2) {
        memmove((void *)((long)__dest + ((lVar4 + 8) - sVar2)),__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010cae3;
      }
      if (sVar2 == 8) {
        *(long *)((long)__dest + lVar4) = *__src;
        lVar3 = *__dest;
        goto LAB_0010cae3;
      }
    }
  }
  else {
    plVar1 = (long *)param_1;
    if (param_1 <= __dest) {
      plVar1 = __dest;
    }
    uVar5 = (long)__dest + 2U + (long)plVar1;
    if (uVar5 >> 0x3c == 0) {
      unaff_R14 = operator_new(uVar5 * 8);
      __src = *(long **)(this + 0x28);
      lVar3 = (uVar5 - lVar3 >> 1) * 8;
      if (param_2) {
        lVar3 = lVar3 + param_1 * 8;
      }
      __dest = (long *)(lVar3 + (long)unaff_R14);
      sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar6 = sVar2 == 8;
      if ((long)sVar2 < 9) goto LAB_0010cb68;
      memmove(__dest,__src,sVar2);
    }
    else {
      uVar5 = uVar5 >> 0x3d;
      uVar6 = uVar5 == 0;
      if (!(bool)uVar6) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
LAB_0010cb68:
      if ((bool)uVar6) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R14;
    *(ulong *)(this + 8) = uVar5;
  }
  lVar3 = *__dest;
LAB_0010cae3:
  *(long *)(this + 0x18) = lVar3;
  *(long **)(this + 0x28) = __dest;
  *(long *)(this + 0x20) = lVar3 + 0x200;
  lVar3 = *(long *)((long)__dest + lVar4);
  *(long **)(this + 0x48) = (long *)((long)__dest + lVar4);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x200;
  return;
}



/* void std::deque<Json::Reader::ErrorInfo, std::allocator<Json::Reader::ErrorInfo>
   >::_M_push_back_aux<Json::Reader::ErrorInfo const&>(Json::Reader::ErrorInfo const&) */

void __thiscall
std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::
_M_push_back_aux<Json::Reader::ErrorInfo_const&>
          (deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this,
          ErrorInfo *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x48);
  if ((*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 6) +
      (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 6) +
      ((lVar6 - *(long *)(this + 0x28) >> 3) + -1 + (ulong)(lVar6 == 0)) * 8 != 0x1ffffffffffffff) {
    if ((ulong)(*(long *)(this + 8) - (lVar6 - *(long *)this >> 3)) < 2) {
      _M_reallocate_map(this,1,false);
      lVar6 = *(long *)(this + 0x48);
    }
    pvVar5 = operator_new(0x200);
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x20);
    *(void **)(lVar6 + 8) = pvVar5;
    puVar2 = *(undefined8 **)(this + 0x30);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = puVar2 + 5;
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    __cxx11::string::_M_construct<char*>
              (puVar2 + 3,*(long *)(param_1 + 0x18),lVar1 + *(long *)(param_1 + 0x18));
    lVar6 = *(long *)(this + 0x48);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    lVar1 = *(long *)(lVar6 + 8);
    *(long *)(this + 0x30) = lVar1;
    *(long *)(this + 0x38) = lVar1;
    *(long *)(this + 0x40) = lVar1 + 0x200;
    *(long *)(this + 0x48) = lVar6 + 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("cannot create std::deque larger than max_size()");
}



/* std::deque<Json::Reader::ErrorInfo, std::allocator<Json::Reader::ErrorInfo>
   >::_M_default_append(unsigned long) */

void __thiscall
std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_default_append
          (deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  
  if (param_1 == 0) {
    return;
  }
  pauVar9 = *(undefined1 (**) [16])(this + 0x40);
  pauVar2 = *(undefined1 (**) [16])(this + 0x30);
  plVar8 = *(long **)(this + 0x48);
  uVar6 = ((long)pauVar9 - (long)pauVar2 >> 6) - 1;
  if (uVar6 < param_1) {
    uVar6 = param_1 - uVar6;
    if (0x1ffffffffffffff -
        (((long)pauVar2 - *(long *)(this + 0x38) >> 6) +
         (((long)plVar8 - *(long *)(this + 0x28) >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 8 +
        (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 6)) < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("deque::_M_new_elements_at_back");
    }
    uVar6 = uVar6 + 7 >> 3;
    if ((ulong)(*(long *)(this + 8) - ((long)plVar8 - *(long *)this >> 3)) < uVar6 + 1) {
      _M_reallocate_map(this,uVar6,false);
      plVar8 = *(long **)(this + 0x48);
    }
    if (uVar6 == 0) {
      pauVar2 = *(undefined1 (**) [16])(this + 0x30);
      pauVar9 = *(undefined1 (**) [16])(this + 0x40);
    }
    else {
      lVar12 = 8;
      while( true ) {
        puVar1 = (undefined8 *)((long)plVar8 + lVar12);
        lVar12 = lVar12 + 8;
        pvVar4 = operator_new(0x200);
        *puVar1 = pvVar4;
        if (lVar12 == (uVar6 + 1) * 8) break;
        plVar8 = *(long **)(this + 0x48);
      }
      pauVar2 = *(undefined1 (**) [16])(this + 0x30);
      pauVar9 = *(undefined1 (**) [16])(this + 0x40);
      plVar8 = *(long **)(this + 0x48);
    }
  }
  lVar12 = *(long *)(this + 0x38);
  uVar6 = ((long)pauVar2 - lVar12 >> 6) + param_1;
  if ((long)uVar6 < 0) {
    uVar5 = ~(~uVar6 >> 3);
  }
  else {
    if ((long)uVar6 < 8) {
      pauVar7 = pauVar2 + param_1 * 4;
      plVar10 = plVar8;
      pauVar11 = pauVar9;
      goto LAB_0010cd74;
    }
    uVar5 = (long)uVar6 >> 3;
  }
  plVar10 = plVar8 + uVar5;
  lVar12 = *plVar10;
  pauVar11 = (undefined1 (*) [16])(lVar12 + 0x200);
  pauVar7 = (undefined1 (*) [16])((uVar6 + uVar5 * -8) * 0x40 + lVar12);
LAB_0010cd74:
  plVar8 = plVar8 + 1;
  while (pauVar2 != pauVar7) {
    while( true ) {
      pauVar2[1] = (undefined1  [16])0x0;
      pauVar3 = pauVar2 + 4;
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2[2] = (undefined1  [16])0x0;
      pauVar2[3] = (undefined1  [16])0x0;
      *(undefined1 **)(pauVar2[1] + 8) = pauVar2[2] + 8;
      pauVar2 = pauVar3;
      if (pauVar9 != pauVar3) break;
      pauVar2 = (undefined1 (*) [16])*plVar8;
      plVar8 = plVar8 + 1;
      pauVar9 = pauVar2 + 0x20;
      if (pauVar2 == pauVar7) goto LAB_0010cdb9;
    }
  }
LAB_0010cdb9:
  *(undefined1 (**) [16])(this + 0x30) = pauVar2;
  *(long *)(this + 0x38) = lVar12;
  *(undefined1 (**) [16])(this + 0x40) = pauVar11;
  *(long **)(this + 0x48) = plVar10;
  return;
}



/* Json::Reader::parse(std::istream&, Json::Value&, bool) [clone .cold] */

void Json::Reader::parse(istream *param_1,Value *param_2,bool param_3)

{
  code *pcVar1;
  long unaff_R12;
  long in_stack_00000020;
  
  *(undefined1 *)(in_stack_00000020 + unaff_R12) = 0xff;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010cf10(void)

{
  code *pcVar1;
  long unaff_R12;
  
  (&stack0x00000030)[unaff_R12] = 0xff;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::deque<Json::OurReader::ErrorInfo, std::allocator<Json::OurReader::ErrorInfo>
   >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::_M_reallocate_map
          (deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>> *this,
          ulong param_1,bool param_2)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  long *__dest;
  long lVar4;
  long *__src;
  ulong uVar5;
  void *unaff_R14;
  undefined1 uVar6;
  
  __src = *(long **)(this + 0x28);
  __dest = *(long **)(this + 8);
  lVar4 = *(long *)(this + 0x48) - (long)__src;
  lVar3 = param_1 + 1 + (lVar4 >> 3);
  if ((long *)(lVar3 * 2) < __dest) {
    lVar3 = ((ulong)((long)__dest - lVar3) >> 1) * 8;
    if (param_2) {
      lVar3 = lVar3 + param_1 * 8;
    }
    __dest = (long *)(lVar3 + *(long *)this);
    sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
    if (__dest < __src) {
      if (8 < (long)sVar2) {
        memmove(__dest,__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010d043;
      }
      if (sVar2 == 8) {
        lVar3 = *__src;
        *__dest = lVar3;
        goto LAB_0010d043;
      }
    }
    else {
      if (8 < (long)sVar2) {
        memmove((void *)((long)__dest + ((lVar4 + 8) - sVar2)),__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010d043;
      }
      if (sVar2 == 8) {
        *(long *)((long)__dest + lVar4) = *__src;
        lVar3 = *__dest;
        goto LAB_0010d043;
      }
    }
  }
  else {
    plVar1 = (long *)param_1;
    if (param_1 <= __dest) {
      plVar1 = __dest;
    }
    uVar5 = (long)__dest + 2U + (long)plVar1;
    if (uVar5 >> 0x3c == 0) {
      unaff_R14 = operator_new(uVar5 * 8);
      __src = *(long **)(this + 0x28);
      lVar3 = (uVar5 - lVar3 >> 1) * 8;
      if (param_2) {
        lVar3 = lVar3 + param_1 * 8;
      }
      __dest = (long *)(lVar3 + (long)unaff_R14);
      sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar6 = sVar2 == 8;
      if ((long)sVar2 < 9) goto LAB_0010d0c8;
      memmove(__dest,__src,sVar2);
    }
    else {
      uVar5 = uVar5 >> 0x3d;
      uVar6 = uVar5 == 0;
      if (!(bool)uVar6) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
LAB_0010d0c8:
      if ((bool)uVar6) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R14;
    *(ulong *)(this + 8) = uVar5;
  }
  lVar3 = *__dest;
LAB_0010d043:
  *(long *)(this + 0x18) = lVar3;
  *(long **)(this + 0x28) = __dest;
  *(long *)(this + 0x20) = lVar3 + 0x200;
  lVar3 = *(long *)((long)__dest + lVar4);
  *(long **)(this + 0x48) = (long *)((long)__dest + lVar4);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x200;
  return;
}



/* std::deque<Json::OurReader::ErrorInfo, std::allocator<Json::OurReader::ErrorInfo>
   >::_M_default_append(unsigned long) */

void __thiscall
std::deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>>::_M_default_append
          (deque<Json::OurReader::ErrorInfo,std::allocator<Json::OurReader::ErrorInfo>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  
  if (param_1 == 0) {
    return;
  }
  pauVar9 = *(undefined1 (**) [16])(this + 0x40);
  pauVar2 = *(undefined1 (**) [16])(this + 0x30);
  plVar8 = *(long **)(this + 0x48);
  uVar6 = ((long)pauVar9 - (long)pauVar2 >> 6) - 1;
  if (uVar6 < param_1) {
    uVar6 = param_1 - uVar6;
    if (0x1ffffffffffffff -
        (((long)pauVar2 - *(long *)(this + 0x38) >> 6) +
         (((long)plVar8 - *(long *)(this + 0x28) >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 8 +
        (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 6)) < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("deque::_M_new_elements_at_back");
    }
    uVar6 = uVar6 + 7 >> 3;
    if ((ulong)(*(long *)(this + 8) - ((long)plVar8 - *(long *)this >> 3)) < uVar6 + 1) {
      _M_reallocate_map(this,uVar6,false);
      plVar8 = *(long **)(this + 0x48);
    }
    if (uVar6 == 0) {
      pauVar2 = *(undefined1 (**) [16])(this + 0x30);
      pauVar9 = *(undefined1 (**) [16])(this + 0x40);
    }
    else {
      lVar12 = 8;
      while( true ) {
        puVar1 = (undefined8 *)((long)plVar8 + lVar12);
        lVar12 = lVar12 + 8;
        pvVar4 = operator_new(0x200);
        *puVar1 = pvVar4;
        if (lVar12 == (uVar6 + 1) * 8) break;
        plVar8 = *(long **)(this + 0x48);
      }
      pauVar2 = *(undefined1 (**) [16])(this + 0x30);
      pauVar9 = *(undefined1 (**) [16])(this + 0x40);
      plVar8 = *(long **)(this + 0x48);
    }
  }
  lVar12 = *(long *)(this + 0x38);
  uVar6 = ((long)pauVar2 - lVar12 >> 6) + param_1;
  if ((long)uVar6 < 0) {
    uVar5 = ~(~uVar6 >> 3);
  }
  else {
    if ((long)uVar6 < 8) {
      pauVar7 = pauVar2 + param_1 * 4;
      plVar10 = plVar8;
      pauVar11 = pauVar9;
      goto LAB_0010d184;
    }
    uVar5 = (long)uVar6 >> 3;
  }
  plVar10 = plVar8 + uVar5;
  lVar12 = *plVar10;
  pauVar11 = (undefined1 (*) [16])(lVar12 + 0x200);
  pauVar7 = (undefined1 (*) [16])((uVar6 + uVar5 * -8) * 0x40 + lVar12);
LAB_0010d184:
  plVar8 = plVar8 + 1;
  while (pauVar2 != pauVar7) {
    while( true ) {
      pauVar2[1] = (undefined1  [16])0x0;
      pauVar3 = pauVar2 + 4;
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2[2] = (undefined1  [16])0x0;
      pauVar2[3] = (undefined1  [16])0x0;
      *(undefined1 **)(pauVar2[1] + 8) = pauVar2[2] + 8;
      pauVar2 = pauVar3;
      if (pauVar9 != pauVar3) break;
      pauVar2 = (undefined1 (*) [16])*plVar8;
      plVar8 = plVar8 + 1;
      pauVar9 = pauVar2 + 0x20;
      if (pauVar2 == pauVar7) goto LAB_0010d1c9;
    }
  }
LAB_0010d1c9:
  *(undefined1 (**) [16])(this + 0x30) = pauVar2;
  *(long *)(this + 0x38) = lVar12;
  *(undefined1 (**) [16])(this + 0x40) = pauVar11;
  *(long **)(this + 0x48) = plVar10;
  return;
}



/* Json::OurCharReader::parse(char const*, char const*, Json::Value*, std::__cxx11::string*) */

undefined4 __thiscall
Json::OurCharReader::parse
          (OurCharReader *this,char *param_1,char *param_2,Value *param_3,string *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  string *psVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  string *local_48;
  undefined8 local_40;
  long alStack_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = OurReader::parse((OurReader *)(this + 0x10),param_1,param_2,param_3,(bool)this[8]);
  if (param_4 == (string *)0x0) goto LAB_0010d3b6;
  OurReader::getFormattedErrorMessages_abi_cxx11_();
  psVar4 = *(string **)param_4;
  if (psVar4 == param_4 + 0x10) {
    if (local_48 == (string *)alStack_38) goto LAB_0010d400;
    *(string **)param_4 = local_48;
    *(ulong *)(param_4 + 8) = local_40;
    *(long *)(param_4 + 0x10) = alStack_38[0];
    local_48 = (string *)alStack_38;
  }
  else if (local_48 == (string *)alStack_38) {
LAB_0010d400:
    if (local_40 != 0) {
      if (local_40 == 1) {
        *psVar4 = alStack_38[0]._0_1_;
        psVar4 = *(string **)param_4;
      }
      else {
        uVar2 = (uint)local_40;
        uVar3 = local_40 & 0xffffffff;
        if (uVar2 < 8) {
          if ((local_40 & 4) == 0) {
            if (uVar2 != 0) {
              *psVar4 = alStack_38[0]._0_1_;
              if ((local_40 & 2) == 0) goto LAB_0010d436;
              *(undefined2 *)(psVar4 + (uVar3 - 2)) =
                   *(undefined2 *)((long)alStack_38 + (uVar3 - 2));
              psVar4 = *(string **)param_4;
            }
          }
          else {
            *(undefined4 *)psVar4 = (undefined4)alStack_38[0];
            *(undefined4 *)(psVar4 + (uVar3 - 4)) = *(undefined4 *)((long)alStack_38 + (uVar3 - 4));
            psVar4 = *(string **)param_4;
          }
        }
        else {
          *(long *)psVar4 = alStack_38[0];
          *(undefined8 *)(psVar4 + ((local_40 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)alStack_38 + ((local_40 & 0xffffffff) - 8));
          lVar5 = (long)psVar4 - ((ulong)(psVar4 + 8) & 0xfffffffffffffff8);
          uVar2 = (int)lVar5 + uVar2 & 0xfffffff8;
          if (7 < uVar2) {
            uVar6 = 0;
            do {
              uVar3 = (ulong)uVar6;
              uVar6 = uVar6 + 8;
              *(undefined8 *)(((ulong)(psVar4 + 8) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((string *)alStack_38 + (uVar3 - lVar5));
            } while (uVar6 < uVar2);
          }
LAB_0010d436:
          psVar4 = *(string **)param_4;
        }
      }
    }
    *(ulong *)(param_4 + 8) = local_40;
    psVar4[local_40] = (string)0x0;
  }
  else {
    lVar5 = *(long *)(param_4 + 0x10);
    *(string **)param_4 = local_48;
    *(ulong *)(param_4 + 8) = local_40;
    *(long *)(param_4 + 0x10) = alStack_38[0];
    local_48 = (string *)alStack_38;
    if (psVar4 != (string *)0x0) {
      local_48 = psVar4;
      alStack_38[0] = lVar5;
    }
  }
  local_40 = 0;
  *local_48 = (string)0x0;
  if (local_48 != (string *)alStack_38) {
    operator_delete(local_48,alStack_38[0] + 1);
  }
LAB_0010d3b6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 8;
LAB_0010d614:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0010d5da;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x28);
    __s2 = *(void **)(p_Var5 + 0x20);
    uVar10 = *(ulong *)(param_1 + 8);
    local_50 = *(void **)param_1;
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)param_1;
    uVar10 = *(ulong *)(param_1 + 8);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x20);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0010d584:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0010d5a2;
        if (-0x80000001 < (long)uVar4) goto LAB_0010d59e;
LAB_0010d548:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0010d584;
LAB_0010d59e:
        if ((int)uVar4 < 0) goto LAB_0010d548;
LAB_0010d5a2:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0010d614;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0010d5da;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0010d5da;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0010d5da:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::__cxx11::string >,
   std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,_Rb_tree_node_base *param_2,string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar1 = *(ulong *)(param_3 + 8);
      uVar2 = *(ulong *)(param_2 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x20),*(void **)param_3,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0010d8b6;
        if (lVar5 < -0x80000000) goto LAB_0010d846;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0010d8b6;
      goto LAB_0010d846;
    }
    goto LAB_0010d8b6;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  uVar2 = *(ulong *)(param_2 + 0x28);
  __s1 = *(void **)param_3;
  __s2 = *(void **)(param_2 + 0x20);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0010d76a:
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_2) goto LAB_0010d73b;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x20),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0010d8b6;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0010d7c8;
        }
      }
      else {
LAB_0010d7c8:
        if (-1 < iVar3) goto LAB_0010d8b6;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0010d73b;
    }
LAB_0010d714:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0010d72e;
      goto LAB_0010d860;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0010d76a;
        iVar3 = (int)lVar5;
        goto LAB_0010d703;
      }
    }
    else {
LAB_0010d703:
      if (iVar3 < 0) goto LAB_0010d76a;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0010d714;
LAB_0010d72e:
    if ((int)uVar6 < 0) {
LAB_0010d860:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
LAB_0010d846:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0010d89c:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0010d8b6;
        if (-0x80000001 < (long)uVar6) goto LAB_0010d8b2;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x20),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0010d89c;
LAB_0010d8b2:
        if (-1 < (int)uVar6) {
LAB_0010d8b6:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0010d73b;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0010d73b:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* WARNING: Control flow encountered bad instruction data */
/* Json::OurCharReader::~OurCharReader() */

void __thiscall Json::OurCharReader::~OurCharReader(OurCharReader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.