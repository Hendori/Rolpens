
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::TEMPNAMEPLACEHOLDERVALUE(std::ostream&, char const*) [clone .isra.0] */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  size_t sVar1;
  ostream *poVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    poVar2 = std::__ostream_insert<char,std::char_traits<char>>(param_1,param_2,sVar1);
    return poVar2;
  }
  poVar2 = (ostream *)
           std::ios::clear(param_1 + *(long *)(*(long *)param_1 + -0x18),
                           *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) | 1);
  return poVar2;
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
      goto LAB_00100144;
    }
    if (__n == 0) goto LAB_00100144;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100144:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::Value::Comments::set(Json::CommentPlacement, std::__cxx11::string) [clone .part.0] */

void __thiscall Json::Value::Comments::set(Comments *this,ulong param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  byte bVar13;
  
  bVar13 = 0;
  param_2 = param_2 & 0xffffffff;
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x60);
    puVar3 = puVar2;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar13 * -2 + 1;
    }
    puVar3 = puVar2;
    do {
      puVar3[1] = 0;
      puVar4 = puVar3 + 4;
      *puVar3 = puVar3 + 2;
      *(undefined1 *)(puVar3 + 2) = 0;
      puVar3 = puVar4;
    } while (puVar2 + 0xc != puVar4);
    puVar3 = *(undefined8 **)this;
    *(undefined8 **)this = puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = puVar3 + 0xc;
      do {
        puVar4 = puVar2 + -4;
        if ((undefined8 *)*puVar4 != puVar2 + -2) {
          operator_delete((undefined8 *)*puVar4,puVar2[-2] + 1);
        }
        puVar2 = puVar4;
      } while (puVar3 != puVar4);
      operator_delete(puVar3,0x60);
      puVar2 = *(undefined8 **)this;
    }
    plVar1 = puVar2 + param_2 * 4;
    plVar10 = (long *)puVar2[param_2 * 4];
    if (plVar10 != puVar2 + param_2 * 4 + 2) goto LAB_001001ea;
LAB_001002f8:
    plVar6 = (long *)*param_3;
    plVar12 = param_3 + 2;
    if (plVar6 == plVar12) {
LAB_00100330:
      uVar11 = param_3[1];
      if (param_3 == plVar1) goto LAB_0010022b;
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          *(char *)plVar10 = (char)*plVar12;
          uVar11 = param_3[1];
        }
        else {
          uVar5 = (uint)uVar11;
          uVar7 = uVar11 & 0xffffffff;
          if (uVar5 < 8) {
            if ((uVar11 & 4) == 0) {
              if (uVar5 != 0) {
                *(char *)plVar10 = (char)*plVar12;
                if ((uVar11 & 2) == 0) goto LAB_00100374;
                *(undefined2 *)((long)plVar10 + (uVar7 - 2)) =
                     *(undefined2 *)((long)plVar12 + (uVar7 - 2));
                uVar11 = param_3[1];
              }
            }
            else {
              *(int *)plVar10 = (int)*plVar12;
              *(undefined4 *)((long)plVar10 + (uVar7 - 4)) =
                   *(undefined4 *)((long)plVar12 + (uVar7 - 4));
              uVar11 = param_3[1];
            }
          }
          else {
            *plVar10 = *plVar12;
            *(undefined8 *)((long)plVar10 + ((uVar11 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)plVar12 + ((uVar11 & 0xffffffff) - 8));
            lVar8 = (long)plVar10 - ((ulong)(plVar10 + 1) & 0xfffffffffffffff8);
            uVar5 = (int)lVar8 + uVar5 & 0xfffffff8;
            if (7 < uVar5) {
              uVar9 = 0;
              do {
                uVar11 = (ulong)uVar9;
                uVar9 = uVar9 + 8;
                *(undefined8 *)(((ulong)(plVar10 + 1) & 0xfffffffffffffff8) + uVar11) =
                     *(undefined8 *)((long)plVar12 + (uVar11 - lVar8));
              } while (uVar9 < uVar5);
            }
LAB_00100374:
            uVar11 = param_3[1];
          }
        }
      }
      plVar1[1] = uVar11;
      *(undefined1 *)(*plVar1 + uVar11) = 0;
      plVar6 = (long *)*param_3;
      goto LAB_0010022b;
    }
    *plVar1 = (long)plVar6;
    plVar1[1] = param_3[1];
    puVar2[param_2 * 4 + 2] = param_3[2];
  }
  else {
    plVar1 = puVar2 + param_2 * 4;
    plVar10 = (long *)*plVar1;
    if (plVar10 == puVar2 + param_2 * 4 + 2) goto LAB_001002f8;
LAB_001001ea:
    plVar6 = (long *)*param_3;
    plVar12 = plVar6;
    if (param_3 + 2 == plVar6) goto LAB_00100330;
    lVar8 = puVar2[param_2 * 4 + 2];
    *plVar1 = (long)plVar6;
    plVar1[1] = param_3[1];
    puVar2[param_2 * 4 + 2] = param_3[2];
    if (plVar10 != (long *)0x0) {
      *param_3 = (long)plVar10;
      param_3[2] = lVar8;
      plVar6 = plVar10;
      goto LAB_0010022b;
    }
  }
  plVar6 = param_3 + 2;
  *param_3 = (long)plVar6;
LAB_0010022b:
  param_3[1] = 0;
  *(undefined1 *)plVar6 = 0;
  return;
}



/* std::unique_ptr<std::array<std::__cxx11::string, 3ul>,
   std::default_delete<std::array<std::__cxx11::string, 3ul> > >
   Json::cloneUnique<std::array<std::__cxx11::string, 3ul>
   >(std::unique_ptr<std::array<std::__cxx11::string, 3ul>,
   std::default_delete<std::array<std::__cxx11::string, 3ul> > > const&) */

Json * __thiscall
Json::cloneUnique<std::array<std::__cxx11::string,3ul>>(Json *this,unique_ptr_conflict *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar9;
  undefined8 *puVar8;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    plVar4 = (long *)operator_new(0x60);
    plVar9 = *(long **)param_1;
    plVar5 = plVar4;
    do {
      lVar1 = plVar9[1];
      plVar6 = plVar5 + 4;
      *plVar5 = (long)(plVar5 + 2);
      lVar2 = *plVar9;
      plVar9 = plVar9 + 4;
      std::__cxx11::string::_M_construct<char*>(plVar5,lVar2,lVar1 + lVar2);
      plVar5 = plVar6;
    } while (plVar6 != plVar4 + 0xc);
    puVar3 = *(undefined8 **)this;
    *(long **)this = plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3 + 0xc;
      do {
        puVar8 = puVar7 + -4;
        if ((undefined8 *)*puVar8 != puVar7 + -2) {
          operator_delete((undefined8 *)*puVar8,puVar7[-2] + 1);
        }
        puVar7 = puVar8;
      } while (puVar3 != puVar8);
      operator_delete(puVar3,0x60);
    }
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::find(char const*, char const*) const [clone .part.0] */

void Json::Value::find(char *param_1,char *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_128);
  local_128[0] = std::ios::init;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  lVar1 = *(long *)(_init + -0x18);
  local_198 = _init;
  local_50 = 0;
  *(undefined8 *)((long)&local_198 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)&local_198 + lVar1));
  local_128[0] = __cxa_guard_release;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_198 = &std::__cxx11::stringbuf::vtable;
  pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
  local_168 = (undefined1  [16])0x0;
  std::locale::locale(local_158);
  pcStack_190 = __cxa_guard_acquire;
  local_148 = local_138;
  local_150 = 0x10;
  local_140 = 0;
  local_138[0] = 0;
  std::ios::init((streambuf *)local_128);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&local_198,
             "in Json::Value::find(begin, end): requires objectValue or nullValue",0x43);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::clear() [clone .part.0] */

void Json::Value::clear(void)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_128);
  local_128[0] = std::ios::init;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  lVar1 = *(long *)(_init + -0x18);
  local_198 = _init;
  local_50 = 0;
  *(undefined8 *)((long)&local_198 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)&local_198 + lVar1));
  local_128[0] = __cxa_guard_release;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_198 = &std::__cxx11::stringbuf::vtable;
  pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
  local_168 = (undefined1  [16])0x0;
  std::locale::locale(local_158);
  pcStack_190 = __cxa_guard_acquire;
  local_148 = local_138;
  local_150 = 0x10;
  local_140 = 0;
  local_138[0] = 0;
  std::ios::init((streambuf *)local_128);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&local_198,"in Json::Value::clear(): requires complex value",0x2f);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::Value(char const*) [clone .part.0] */

void __thiscall Json::Value::Value(Value *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_128);
  local_128[0] = std::ios::init;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  lVar1 = *(long *)(_init + -0x18);
  local_198 = _init;
  local_50 = 0;
  *(undefined8 *)((long)&local_198 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)&local_198 + lVar1));
  local_128[0] = __cxa_guard_release;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_198 = &std::__cxx11::stringbuf::vtable;
  pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
  local_168 = (undefined1  [16])0x0;
  std::locale::locale(local_158);
  pcStack_190 = __cxa_guard_acquire;
  local_148 = local_138;
  local_150 = 0x10;
  local_140 = 0;
  local_138[0] = 0;
  std::ios::init((streambuf *)local_128);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&local_198,"Null Value Passed to Value Constructor",0x26);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::removeMember(char const*) [clone .part.0] */

void Json::Value::removeMember(char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_128);
  local_128[0] = std::ios::init;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  lVar1 = *(long *)(_init + -0x18);
  local_198 = _init;
  local_50 = 0;
  *(undefined8 *)((long)&local_198 + lVar1) = _vtable;
  std::ios::init((streambuf *)((long)&local_198 + lVar1));
  local_128[0] = __cxa_guard_release;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_198 = &std::__cxx11::stringbuf::vtable;
  pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
  local_168 = (undefined1  [16])0x0;
  std::locale::locale(local_158);
  pcStack_190 = __cxa_guard_acquire;
  local_148 = local_138;
  local_150 = 0x10;
  local_140 = 0;
  local_138[0] = 0;
  std::ios::init((streambuf *)local_128);
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&local_198,"in Json::Value::removeMember(): requires objectValue",0x34);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Json::Value::nullSingleton() */

undefined1 * Json::Value::nullSingleton(void)

{
  int iVar1;
  
  if (nullSingleton()::nullStatic == '\0') {
    iVar1 = __cxa_guard_acquire(&nullSingleton()::nullStatic);
    if (iVar1 != 0) {
      nullSingleton()::nullStatic._8_8_ = 0;
      nullSingleton()::nullStatic._24_16_ = (undefined1  [16])0x0;
      nullSingleton()::nullStatic._16_8_ = 0;
      __cxa_atexit(~Value,nullSingleton()::nullStatic,&__dso_handle);
      __cxa_guard_release(&nullSingleton()::nullStatic);
      return nullSingleton()::nullStatic;
    }
  }
  return nullSingleton()::nullStatic;
}



/* Json::ValueIteratorBase::ValueIteratorBase() */

void __thiscall Json::ValueIteratorBase::ValueIteratorBase(ValueIteratorBase *this)

{
  *(undefined8 *)this = 0;
  this[8] = (ValueIteratorBase)0x1;
  return;
}



/* Json::ValueIteratorBase::ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString
   const, Json::Value> > const&) */

void __thiscall
Json::ValueIteratorBase::ValueIteratorBase(ValueIteratorBase *this,_Rb_tree_iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[8] = (ValueIteratorBase)0x0;
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::ValueIteratorBase::deref() */

long __thiscall Json::ValueIteratorBase::deref(ValueIteratorBase *this)

{
  return *(long *)this + 0x30;
}



/* Json::ValueIteratorBase::deref() const */

long __thiscall Json::ValueIteratorBase::deref(ValueIteratorBase *this)

{
  return *(long *)this + 0x30;
}



/* Json::ValueIteratorBase::increment() */

void __thiscall Json::ValueIteratorBase::increment(ValueIteratorBase *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::ValueIteratorBase::decrement() */

void __thiscall Json::ValueIteratorBase::decrement(ValueIteratorBase *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase const&) const */

int __thiscall
Json::ValueIteratorBase::computeDistance(ValueIteratorBase *this,ValueIteratorBase *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  int iVar3;
  
  if ((this[8] == (ValueIteratorBase)0x0) || (iVar3 = 0, param_1[8] == (ValueIteratorBase)0x0)) {
    p_Var2 = *(_Rb_tree_node_base **)this;
    p_Var1 = *(_Rb_tree_node_base **)param_1;
    iVar3 = 0;
    while (p_Var2 != p_Var1) {
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



/* Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase const&) const */

ulong __thiscall
Json::ValueIteratorBase::isEqual(ValueIteratorBase *this,ValueIteratorBase *param_1)

{
  if (this[8] == (ValueIteratorBase)0x0) {
    return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
  }
  return (ulong)(byte)param_1[8];
}



/* Json::ValueIteratorBase::copy(Json::ValueIteratorBase const&) */

void __thiscall Json::ValueIteratorBase::copy(ValueIteratorBase *this,ValueIteratorBase *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = param_1[8];
  return;
}



/* Json::ValueIteratorBase::name[abi:cxx11]() const */

void Json::ValueIteratorBase::name_abi_cxx11_(void)

{
  uint uVar1;
  undefined1 *__src;
  ulong *__dest;
  ulong __n;
  long *in_RSI;
  ulong *in_RDI;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __src = *(undefined1 **)(*in_RSI + 0x20);
  if (__src == (undefined1 *)0x0) {
    in_RDI[1] = 0;
    *in_RDI = (ulong)(in_RDI + 2);
    *(undefined1 *)(in_RDI + 2) = 0;
    goto LAB_00100b72;
  }
  uVar1 = *(uint *)(*in_RSI + 0x28);
  __dest = in_RDI + 2;
  in_RDI[1] = 0;
  *in_RDI = (ulong)__dest;
  __n = (ulong)(uVar1 >> 2);
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
    }
    else if (__n != 0) goto LAB_00100bbb;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
LAB_00100bbb:
    memcpy(__dest,__src,__n);
    __dest = (ulong *)*in_RDI;
  }
  in_RDI[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
LAB_00100b72:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::ValueIteratorBase::memberName() const */

undefined * __thiscall Json::ValueIteratorBase::memberName(ValueIteratorBase *this)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(*(long *)this + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &_LC4;
  }
  return puVar1;
}



/* Json::ValueIteratorBase::memberName(char const**) const */

long __thiscall Json::ValueIteratorBase::memberName(ValueIteratorBase *this,char **param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + 0x20);
  if (lVar1 != 0) {
    *param_1 = (char *)((ulong)(*(uint *)(*(long *)this + 0x28) >> 2) + lVar1);
    return lVar1;
  }
  *param_1 = (char *)0x0;
  return 0;
}



/* Json::ValueConstIterator::ValueConstIterator() */

void __thiscall Json::ValueConstIterator::ValueConstIterator(ValueConstIterator *this)

{
  *(undefined8 *)this = 0;
  this[8] = (ValueConstIterator)0x1;
  return;
}



/* Json::ValueConstIterator::ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString
   const, Json::Value> > const&) */

void __thiscall
Json::ValueConstIterator::ValueConstIterator(ValueConstIterator *this,_Rb_tree_iterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[8] = (ValueConstIterator)0x0;
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::ValueConstIterator::ValueConstIterator(Json::ValueIterator const&) */

void __thiscall
Json::ValueConstIterator::ValueConstIterator(ValueConstIterator *this,ValueIterator *param_1)

{
  ValueIterator VVar1;
  
  VVar1 = param_1[8];
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(ValueIterator *)(this + 8) = VVar1;
  return;
}



/* Json::ValueConstIterator::TEMPNAMEPLACEHOLDERVALUE(Json::ValueIteratorBase const&) */

ValueConstIterator * __thiscall
Json::ValueConstIterator::operator=(ValueConstIterator *this,ValueIteratorBase *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(ValueIteratorBase *)(this + 8) = param_1[8];
  return this;
}



/* Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */

void __thiscall Json::ValueIterator::ValueIterator(ValueIterator *this,ValueIterator *param_1)

{
  ValueIterator VVar1;
  
  VVar1 = param_1[8];
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = VVar1;
  return;
}



/* Json::ValueIterator::TEMPNAMEPLACEHOLDERVALUE(Json::ValueIterator const&) */

ValueIterator * __thiscall
Json::ValueIterator::operator=(ValueIterator *this,ValueIterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = param_1[8];
  return this;
}



/* Json::throwRuntimeError(std::__cxx11::string const&) */

uint * Json::throwRuntimeError(string *param_1)

{
  long *plVar1;
  ostream *poVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 *apuStack_1c0 [2];
  undefined1 auStack_1b0 [360];
  long lStack_48;
  ostream *poStack_38;
  long *plStack_30;
  char *pcVar5;
  
  pcVar5 = *(char **)param_1;
  puVar6 = &std::cerr;
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)&std::cerr,pcVar5,*(long *)(param_1 + 8));
  uVar4 = (uint)pcVar5;
  plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar2);
    std::ostream::flush();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  std::__throw_bad_cast();
  lStack_48 = *(long *)(in_FS_OFFSET + 0x28);
  poStack_38 = poVar2;
  plStack_30 = plVar1;
  if (0x7ffffffa < uVar4) {
    std::__cxx11::ostringstream::ostringstream((ostringstream *)apuStack_1c0);
    std::operator<<((ostream *)apuStack_1c0,
                    "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing")
    ;
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = (ulong)uVar4;
  puVar3 = (uint *)malloc(uVar7 + 5);
  if (puVar3 == (uint *)0x0) {
    apuStack_1c0[0] = auStack_1b0;
    std::__cxx11::string::_M_construct<char_const*>
              (apuStack_1c0,
               "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
              );
                    /* WARNING: Subroutine does not return */
    throwRuntimeError((string *)apuStack_1c0);
  }
  *puVar3 = uVar4;
  __memcpy_chk(puVar3 + 1,puVar6,uVar7,uVar7 + 1);
  *(undefined1 *)((long)puVar3 + uVar7 + 4) = 0;
  if (lStack_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



/* Json::duplicateAndPrefixStringValue(char const*, unsigned int) */

uint * Json::duplicateAndPrefixStringValue(char *param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [360];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x7ffffffa < param_2) {
    std::__cxx11::ostringstream::ostringstream((ostringstream *)local_1a8);
    std::operator<<((ostream *)local_1a8,
                    "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing")
    ;
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = (ulong)param_2;
  puVar1 = (uint *)malloc(uVar2 + 5);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    __memcpy_chk(puVar1 + 1,param_1,uVar2,uVar2 + 1);
    *(undefined1 *)((long)puVar1 + uVar2 + 4) = 0;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_1a8[0] = local_198;
  std::__cxx11::string::_M_construct<char_const*>
            (local_1a8,
             "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
            );
                    /* WARNING: Subroutine does not return */
  throwRuntimeError((string *)local_1a8);
}



/* Json::throwLogicError(std::__cxx11::string const&) */

void Json::throwLogicError(string *param_1)

{
                    /* WARNING: Subroutine does not return */
  throwRuntimeError(param_1);
}



/* Json::Value::CZString::CZString(unsigned int) */

void __thiscall Json::Value::CZString::CZString(CZString *this,uint param_1)

{
  *(undefined8 *)this = 0;
  *(uint *)(this + 8) = param_1;
  return;
}



/* Json::Value::CZString::CZString(char const*, unsigned int,
   Json::Value::CZString::DuplicationPolicy) */

void __thiscall
Json::Value::CZString::CZString(CZString *this,undefined8 param_1,int param_2,uint param_4)

{
  *(undefined8 *)this = param_1;
  *(uint *)(this + 8) = param_2 << 2 | param_4 & 3;
  return;
}



/* Json::Value::CZString::CZString(Json::Value::CZString&&) */

void __thiscall Json::Value::CZString::CZString(CZString *this,CZString *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Json::Value::CZString::~CZString() */

void __thiscall Json::Value::CZString::~CZString(CZString *this)

{
  if ((*(void **)this != (void *)0x0) && (((byte)this[8] & 3) == 1)) {
    free(*(void **)this);
    return;
  }
  return;
}



/* Json::Value::CZString::swap(Json::Value::CZString&) */

void __thiscall Json::Value::CZString::swap(CZString *this,CZString *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar2;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* Json::Value::CZString::TEMPNAMEPLACEHOLDERVALUE(Json::Value::CZString const&) */

CZString * __thiscall Json::Value::CZString::operator=(CZString *this,CZString *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}



/* Json::Value::CZString::TEMPNAMEPLACEHOLDERVALUE(Json::Value::CZString&&) */

CZString * __thiscall Json::Value::CZString::operator=(CZString *this,CZString *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  return this;
}



/* Json::Value::CZString::TEMPNAMEPLACEHOLDERVALUE(Json::Value::CZString const&) const */

uint __thiscall Json::Value::CZString::operator<(CZString *this,CZString *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(void **)this != (void *)0x0) {
    uVar4 = *(uint *)(this + 8) >> 2;
    uVar3 = *(uint *)(param_1 + 8) >> 2;
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      uVar2 = uVar4;
    }
    iVar1 = memcmp(*(void **)this,*(void **)param_1,(ulong)uVar2);
    uVar2 = 1;
    if ((-1 < iVar1) && (uVar2 = 0, iVar1 == 0)) {
      uVar2 = (uint)(uVar4 < uVar3);
    }
    return uVar2;
  }
  return CONCAT31((int3)(*(uint *)(param_1 + 8) >> 8),*(uint *)(this + 8) < *(uint *)(param_1 + 8));
}



/* Json::Value::CZString::TEMPNAMEPLACEHOLDERVALUE(Json::Value::CZString const&) const */

ulong __thiscall Json::Value::CZString::operator==(CZString *this,CZString *param_1)

{
  int iVar1;
  void *__s1;
  
  __s1 = *(void **)this;
  if (__s1 == (void *)0x0) {
    return CONCAT71((int7)((ulong)this >> 8),*(int *)(this + 8) == *(int *)(param_1 + 8)) &
           0xffffffff;
  }
  if (*(uint *)(this + 8) >> 2 != *(uint *)(param_1 + 8) >> 2) {
    return 0;
  }
  iVar1 = memcmp(__s1,*(void **)param_1,(ulong)(*(uint *)(this + 8) >> 2));
  return CONCAT71((int7)((ulong)__s1 >> 8),iVar1 == 0) & 0xffffffff;
}



/* Json::Value::CZString::index() const */

undefined4 __thiscall Json::Value::CZString::index(CZString *this)

{
  return *(undefined4 *)(this + 8);
}



/* Json::Value::CZString::data() const */

undefined8 __thiscall Json::Value::CZString::data(CZString *this)

{
  return *(undefined8 *)this;
}



/* Json::Value::CZString::length() const */

uint __thiscall Json::Value::CZString::length(CZString *this)

{
  return *(uint *)(this + 8) >> 2;
}



/* Json::Value::CZString::isStaticString() const */

bool __thiscall Json::Value::CZString::isStaticString(CZString *this)

{
  return ((byte)this[8] & 3) == 0;
}



/* Json::Value::Value(Json::ValueType) */

void __thiscall Json::Value::Value(Value *this,undefined4 param_2)

{
  void *pvVar1;
  
  this[9] = (Value)((byte)this[9] & 0xfe);
  *(undefined8 *)(this + 0x10) = 0;
  this[8] = SUB41(param_2,0);
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  switch(param_2) {
  case 0:
    goto switchD_00101089_caseD_0;
  case 1:
  case 2:
    *(undefined8 *)this = 0;
    return;
  case 3:
    *(undefined8 *)this = 0;
    return;
  case 4:
    *(undefined1 **)this = &Value(Json::ValueType)::emptyString;
    return;
  case 5:
    *this = (Value)0x0;
switchD_00101089_caseD_0:
    return;
  case 6:
  case 7:
    pvVar1 = operator_new(0x30);
    *(undefined4 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    *(long *)((long)pvVar1 + 0x18) = (long)pvVar1 + 8;
    *(long *)((long)pvVar1 + 0x20) = (long)pvVar1 + 8;
    *(undefined8 *)((long)pvVar1 + 0x28) = 0;
    *(void **)this = pvVar1;
    return;
  default:
    return;
  }
}



/* Json::Value::Value(int) */

void __thiscall Json::Value::Value(Value *this,int param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(long *)this = (long)param_1;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 1;
  return;
}



/* Json::Value::Value(unsigned int) */

void __thiscall Json::Value::Value(Value *this,uint param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 2;
  *(ulong *)this = (ulong)param_1;
  return;
}



/* Json::Value::Value(long) */

void __thiscall Json::Value::Value(Value *this,long param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(long *)this = param_1;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 1;
  return;
}



/* Json::Value::Value(unsigned long) */

void __thiscall Json::Value::Value(Value *this,ulong param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(ulong *)this = param_1;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 2;
  return;
}



/* Json::Value::Value(double) */

void __thiscall Json::Value::Value(Value *this,double param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(double *)this = param_1;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 3;
  return;
}



/* Json::Value::Value(char const*) */

void __thiscall Json::Value::Value(Value *this,char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 0x104;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = duplicateAndPrefixStringValue(param_1,(uint)sVar1);
    *(undefined8 *)this = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Value(this,(char *)0x0);
}



/* Json::Value::Value(char const*, char const*) */

void __thiscall Json::Value::Value(Value *this,char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 0x104;
  uVar1 = duplicateAndPrefixStringValue(param_1,(int)param_2 - (int)param_1);
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::Value::Value(std::__cxx11::string const&) */

void __thiscall Json::Value::Value(Value *this,string *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 0x104;
  uVar1 = duplicateAndPrefixStringValue(*(char **)param_1,*(uint *)(param_1 + 8));
  *(undefined8 *)this = uVar1;
  return;
}



/* Json::Value::Value(Json::StaticString const&) */

void __thiscall Json::Value::Value(Value *this,StaticString *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 4;
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* Json::Value::Value(bool) */

void __thiscall Json::Value::Value(Value *this,bool param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *this = (Value)param_1;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00 | 5;
  return;
}



/* Json::Value::swapPayload(Json::Value&) */

void __thiscall Json::Value::swapPayload(Value *this,Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar2;
  return;
}



/* Json::Value::swap(Json::Value&) */

void __thiscall Json::Value::swap(Value *this,Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar2;
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(this + 0x10) = uVar3;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4 + 0xc;
    do {
      puVar6 = puVar5 + -4;
      if ((undefined8 *)*puVar6 != puVar5 + -2) {
        operator_delete((undefined8 *)*puVar6,puVar5[-2] + 1);
      }
      puVar5 = puVar6;
    } while (puVar4 != puVar6);
    operator_delete(puVar4,0x60);
  }
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value&&) */

Value * __thiscall Json::Value::operator=(Value *this,Value *param_1)

{
  swap(param_1,this);
  return this;
}



/* Json::Value::Value(Json::Value&&) */

void __thiscall Json::Value::Value(Value *this,Value *param_1)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xfe00;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  swap(this,param_1);
  return;
}



/* Json::Value::type() const */

Value __thiscall Json::Value::type(Value *this)

{
  return this[8];
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

ulong __thiscall Json::Value::operator<(Value *this,Value *param_1)

{
  _Rb_tree_node_base *p_Var1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  uint uVar11;
  ulong __n;
  ulong unaff_RBX;
  undefined7 uVar12;
  uint *__s;
  uint *__s_00;
  
  uVar11 = (uint)(byte)this[8] - (uint)(byte)param_1[8];
  if (uVar11 == 0) {
    uVar12 = (undefined7)(unaff_RBX >> 8);
    switch(this[8]) {
    default:
      unaff_RBX = 0;
      break;
    case (Value)0x1:
      unaff_RBX = CONCAT71(uVar12,*(long *)this < *(long *)param_1);
      break;
    case (Value)0x2:
      unaff_RBX = CONCAT71(uVar12,*(ulong *)this < *(ulong *)param_1);
      break;
    case (Value)0x3:
      unaff_RBX = CONCAT71(uVar12,*(double *)this <= *(double *)param_1 &&
                                  *(double *)param_1 != *(double *)this);
      break;
    case (Value)0x4:
      __s_00 = *(uint **)this;
      __s = *(uint **)param_1;
      if ((__s_00 == (uint *)0x0) || (__s == (uint *)0x0)) {
        unaff_RBX = CONCAT71((int7)((ulong)__s >> 8),__s != (uint *)0x0);
      }
      else {
        if (((byte)this[9] & 1) == 0) {
          sVar7 = strlen((char *)__s_00);
          sVar7 = sVar7 & 0xffffffff;
        }
        else {
          sVar7 = (size_t)*__s_00;
          __s_00 = __s_00 + 1;
        }
        if (((byte)param_1[9] & 1) == 0) {
          sVar6 = strlen((char *)__s);
          uVar11 = (uint)sVar6;
        }
        else {
          uVar11 = *__s;
          __s = __s + 1;
        }
        __n = (ulong)uVar11;
        if ((uint)sVar7 <= uVar11) {
          __n = sVar7;
        }
        unaff_RBX = 1;
        iVar5 = memcmp(__s_00,__s,__n);
        if ((-1 < iVar5) && (unaff_RBX = 0, iVar5 == 0)) {
          unaff_RBX = (ulong)((uint)sVar7 < uVar11);
        }
      }
      break;
    case (Value)0x5:
      unaff_RBX = CONCAT71(uVar12,(byte)*this < (byte)*param_1);
      break;
    case (Value)0x6:
    case (Value)0x7:
      lVar2 = *(long *)this;
      lVar3 = *(long *)param_1;
      if (*(ulong *)(lVar3 + 0x28) == *(ulong *)(lVar2 + 0x28)) {
        p_Var10 = *(_Rb_tree_node_base **)(lVar3 + 0x18);
        p_Var1 = (_Rb_tree_node_base *)(lVar3 + 8);
        p_Var9 = *(_Rb_tree_node_base **)(lVar2 + 0x18);
        uVar8 = CONCAT71((int7)((ulong)p_Var1 >> 8),p_Var1 != p_Var10);
        uVar11 = (uint)uVar8;
        while (((_Rb_tree_node_base *)(lVar2 + 8) != p_Var9 &&
               (uVar11 = (uint)uVar8, (char)uVar8 != '\0'))) {
          uVar11 = CZString::operator<((CZString *)(p_Var9 + 0x20),(CZString *)(p_Var10 + 0x20));
          unaff_RBX = (ulong)uVar11;
          if (((char)uVar11 != '\0') ||
             (cVar4 = CZString::operator<((CZString *)(p_Var10 + 0x20),(CZString *)(p_Var9 + 0x20)),
             cVar4 != '\0')) goto LAB_001014a5;
          uVar11 = operator<((Value *)(p_Var9 + 0x30),(Value *)(p_Var10 + 0x30));
          unaff_RBX = (ulong)uVar11;
          if (((char)uVar11 != '\0') ||
             (cVar4 = operator<((Value *)(p_Var10 + 0x30),(Value *)(p_Var9 + 0x30)), cVar4 != '\0'))
          goto LAB_001014a5;
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
          p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
          uVar8 = CONCAT71((int7)((ulong)p_Var10 >> 8),p_Var1 != p_Var10);
          uVar11 = (uint)uVar8;
        }
        unaff_RBX = (ulong)((uint)CONCAT71((int7)(unaff_RBX >> 8),
                                           (_Rb_tree_node_base *)(lVar2 + 8) == p_Var9) & uVar11);
      }
      else {
        unaff_RBX = CONCAT71(uVar12,*(ulong *)(lVar2 + 0x28) < *(ulong *)(lVar3 + 0x28));
      }
    }
  }
  else {
    unaff_RBX = (ulong)(uVar11 >> 0x1f);
  }
LAB_001014a5:
  return unaff_RBX & 0xffffffff;
}



/* Json::Value::compare(Json::Value const&) const */

ulong __thiscall Json::Value::compare(Value *this,Value *param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  cVar1 = operator<(this,param_1);
  uVar3 = 0xffffffff;
  if (cVar1 == '\0') {
    bVar2 = operator<(param_1,this);
    uVar3 = (ulong)bVar2;
  }
  return uVar3;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

uint __thiscall Json::Value::operator<=(Value *this,Value *param_1)

{
  uint uVar1;
  
  uVar1 = operator<(param_1,this);
  return uVar1 ^ 1;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

uint __thiscall Json::Value::operator>=(Value *this,Value *param_1)

{
  uint uVar1;
  
  uVar1 = operator<(this,param_1);
  return uVar1 ^ 1;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

void __thiscall Json::Value::operator>(Value *this,Value *param_1)

{
  operator<(param_1,this);
  return;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

uint __thiscall Json::Value::operator==(Value *this,Value *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  size_t sVar7;
  uint *__s;
  uint *__s_00;
  uint uVar8;
  
  uVar3 = 0;
  if (param_1[8] == this[8]) {
    switch(this[8]) {
    case (Value)0x1:
    case (Value)0x2:
      uVar3 = (uint)(*(long *)this == *(long *)param_1);
      break;
    case (Value)0x3:
      uVar3 = (uint)(!NAN(*(double *)this) && !NAN(*(double *)param_1));
      if (*(double *)this != *(double *)param_1) {
        uVar3 = 0;
      }
      break;
    case (Value)0x4:
      __s = *(uint **)this;
      __s_00 = *(uint **)param_1;
      if ((__s == (uint *)0x0) || (__s_00 == (uint *)0x0)) {
        uVar3 = (uint)(__s == __s_00);
      }
      else {
        if (((byte)this[9] & 1) == 0) {
          sVar7 = strlen((char *)__s);
          uVar8 = (uint)sVar7;
        }
        else {
          uVar8 = *__s;
          __s = __s + 1;
        }
        if (((byte)param_1[9] & 1) == 0) {
          sVar7 = strlen((char *)__s_00);
          uVar4 = (uint)sVar7;
        }
        else {
          uVar4 = *__s_00;
          __s_00 = __s_00 + 1;
        }
        uVar3 = 0;
        if (uVar8 == uVar4) {
          iVar2 = memcmp(__s,__s_00,(ulong)uVar8);
          uVar3 = (uint)(iVar2 == 0);
        }
      }
      break;
    case (Value)0x5:
      uVar3 = (uint)(*this == *param_1);
      break;
    case (Value)0x6:
    case (Value)0x7:
      lVar1 = *(long *)this;
      if (*(long *)(*(long *)param_1 + 0x28) != *(long *)(lVar1 + 0x28)) {
        return 0;
      }
      p_Var5 = *(_Rb_tree_node_base **)(lVar1 + 0x18);
      p_Var6 = *(_Rb_tree_node_base **)(*(long *)param_1 + 0x18);
      if ((_Rb_tree_node_base *)(lVar1 + 8) != p_Var5) {
        do {
          if (*(void **)(p_Var5 + 0x20) == (void *)0x0) {
            if (*(int *)(p_Var5 + 0x28) != *(int *)(p_Var6 + 0x28)) {
              return 0;
            }
          }
          else if ((*(uint *)(p_Var5 + 0x28) >> 2 != *(uint *)(p_Var6 + 0x28) >> 2) ||
                  (iVar2 = memcmp(*(void **)(p_Var5 + 0x20),*(void **)(p_Var6 + 0x20),
                                  (ulong)(*(uint *)(p_Var5 + 0x28) >> 2)), iVar2 != 0)) {
            return 0;
          }
          uVar3 = operator==((Value *)(p_Var5 + 0x30),(Value *)(p_Var6 + 0x30));
          if ((char)uVar3 == '\0') {
            return uVar3;
          }
          p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var5);
          p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6);
        } while ((_Rb_tree_node_base *)(lVar1 + 8) != p_Var5);
        return uVar3;
      }
    case (Value)0x0:
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) const */

uint __thiscall Json::Value::operator!=(Value *this,Value *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return uVar1 ^ 1;
}



/* Json::Value::asCString() const */

long __thiscall Json::Value::asCString(Value *this)

{
  long lVar1;
  long in_FS_OFFSET;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] != (Value)0x4) {
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,"in Json::Value::asCString(): requires stringValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)this;
  if ((lVar1 != 0) && (((byte)this[9] & 1) != 0)) {
    lVar1 = lVar1 + 4;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::getString(char const**, char const**) const */

undefined8 __thiscall Json::Value::getString(Value *this,char **param_1,char **param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *__s;
  size_t sVar3;
  
  uVar2 = 0;
  if (this[8] == (Value)0x4) {
    __s = *(uint **)this;
    if (__s != (uint *)0x0) {
      if (((byte)this[9] & 1) == 0) {
        sVar3 = strlen((char *)__s);
        uVar1 = (uint)sVar3;
      }
      else {
        uVar1 = *__s;
        __s = __s + 1;
      }
      *param_1 = (char *)__s;
      uVar2 = 1;
      *param_2 = (char *)((long)__s + (ulong)uVar1);
    }
    return uVar2;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00101af5) */
/* Json::Value::asString[abi:cxx11]() const */

void Json::Value::asString_abi_cxx11_(void)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  char *in_RSI;
  char *pcVar4;
  long *in_RDI;
  long in_FS_OFFSET;
  ostringstream aoStack_198 [376];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(in_RSI[8]) {
  case '\0':
    *in_RDI = (long)(in_RDI + 2);
    std::__cxx11::string::_M_construct<char_const*>(in_RDI,&_LC4,&_LC4);
    break;
  case '\x01':
    Json::valueToString_abi_cxx11_((long)in_RDI);
    break;
  case '\x02':
    Json::valueToString_abi_cxx11_((ulong)in_RDI);
    break;
  case '\x03':
    Json::valueToString_abi_cxx11_(*(undefined8 *)in_RSI,in_RDI,0x11,0);
    break;
  case '\x04':
    if (*(char **)in_RSI == (char *)0x0) {
      in_RDI[1] = 0;
      *in_RDI = (long)(in_RDI + 2);
      *(undefined1 *)(in_RDI + 2) = 0;
    }
    else {
      if ((in_RSI[9] & 1U) == 0) {
        strlen(*(char **)in_RSI);
        *in_RDI = (long)(in_RDI + 2);
      }
      else {
        *in_RDI = (long)(in_RDI + 2);
      }
      std::__cxx11::string::_M_construct<char_const*>();
    }
    break;
  case '\x05':
    cVar2 = *in_RSI;
    plVar1 = in_RDI + 2;
    uVar3 = 5;
    *in_RDI = (long)plVar1;
    pcVar4 = "false";
    if (cVar2 != '\0') {
      uVar3 = 4;
      pcVar4 = "true";
    }
    if ((uVar3 & 4) == 0) {
      if ((int)uVar3 != 0) {
        *(char *)plVar1 = *pcVar4;
      }
    }
    else {
      *(undefined4 *)plVar1 = *(undefined4 *)pcVar4;
      *(undefined4 *)((long)in_RDI + uVar3 + 0xc) = *(undefined4 *)(pcVar4 + (uVar3 - 4));
    }
    in_RDI[1] = uVar3;
    *(undefined1 *)(*in_RDI + uVar3) = 0;
    break;
  default:
    std::__cxx11::ostringstream::ostringstream(aoStack_198);
    std::operator<<((ostream *)aoStack_198,"Type is not convertible to string");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::asDouble() const */

double __thiscall Json::Value::asDouble(Value *this)

{
  long in_FS_OFFSET;
  double dVar1;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(this[8]) {
  case (Value)0x1:
    dVar1 = (double)*(long *)this;
    break;
  case (Value)0x2:
    dVar1 = (double)(*(ulong *)this >> 1);
    dVar1 = dVar1 + dVar1 + (double)((uint)*(ulong *)this & 1);
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    break;
  default:
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,"Value is not convertible to double.");
                    /* WARNING: Subroutine does not return */
    abort();
  case (Value)0x5:
    dVar1 = _LC13;
    if (*this != (Value)0x0) break;
  case (Value)0x0:
    dVar1 = 0.0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::asFloat() const */

void __thiscall Json::Value::asFloat(Value *this)

{
  long in_FS_OFFSET;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(this[8]) {
  case (Value)0x1:
    break;
  case (Value)0x2:
    break;
  case (Value)0x3:
    break;
  default:
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,"Value is not convertible to float.");
                    /* WARNING: Subroutine does not return */
    abort();
  case (Value)0x5:
    if (*this != (Value)0x0) break;
  case (Value)0x0:
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::asBool() const */

ulong __thiscall Json::Value::asBool(Value *this)

{
  double dVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  double dVar3;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (5 < (byte)this[8]) {
switchD_00101ddb_caseD_4:
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,"Value is not convertible to bool.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(this[8]) {
  default:
    uVar2 = CONCAT71((int7)((ulong)((long)&switchD_00101ddb::switchdataD_00107234 +
                                   (long)(int)(&switchD_00101ddb::switchdataD_00107234)
                                              [(byte)this[8]]) >> 8),*(long *)this != 0);
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    dVar3 = (double)((ulong)dVar1 & __LC18);
    if (!NAN(dVar3)) {
      uVar2 = 1;
      if ((dVar3 <= __LC19) && (dVar3 < __LC20)) {
        uVar2 = 1;
        if (dVar1 == 0.0) {
          uVar2 = CONCAT71(0x1072,NAN(dVar1));
        }
      }
      break;
    }
  case (Value)0x0:
    uVar2 = 0;
    break;
  case (Value)0x4:
    goto switchD_00101ddb_caseD_4;
  case (Value)0x5:
    uVar2 = (ulong)(byte)*this;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Json::Value::size() const */

int __thiscall Json::Value::size(Value *this)

{
  long lVar1;
  
  if (this[8] == (Value)0x6) {
    if (*(long *)(*(long *)this + 0x28) != 0) {
      lVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)this + 8));
      return *(int *)(lVar1 + 0x28) + 1;
    }
    return 0;
  }
  if (this[8] != (Value)0x7) {
    return 0;
  }
  return *(int *)(*(long *)this + 0x28);
}



/* Json::Value::empty() const */

ulong __thiscall Json::Value::empty(Value *this)

{
  Value VVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  VVar1 = this[8];
  uVar2 = 1;
  if (VVar1 != (Value)0x0) {
    if (VVar1 == (Value)0x6) {
      if (*(long *)(*(long *)this + 0x28) != 0) {
        auVar3 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)this + 8));
        return CONCAT71(auVar3._9_7_,*(int *)(auVar3._0_8_ + 0x28) == -1) & 0xffffffff;
      }
    }
    else {
      uVar2 = 0;
      if (VVar1 == (Value)0x7) {
        return (ulong)(*(int *)(*(long *)this + 0x28) == 0);
      }
    }
  }
  return uVar2;
}



/* Json::Value::operator bool() const */

bool __thiscall Json::Value::operator_cast_to_bool(Value *this)

{
  return this[8] != (Value)0x0;
}



/* Json::Value::initBasic(Json::ValueType, bool) */

void __thiscall Json::Value::initBasic(Value *this,Value param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  this[8] = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  this[9] = (Value)((byte)this[9] & 0xfe | param_3 & 1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 0xc;
    do {
      puVar3 = puVar2 + -4;
      if ((undefined8 *)*puVar3 != puVar2 + -2) {
        operator_delete((undefined8 *)*puVar3,puVar2[-2] + 1);
      }
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    operator_delete(puVar1,0x60);
  }
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* Json::Value::releasePayload() */

void __thiscall Json::Value::releasePayload(Value *this)

{
  void *pvVar1;
  
  if (this[8] == (Value)0x4) {
    if (((byte)this[9] & 1) != 0) {
      free(*(void **)this);
      return;
    }
  }
  else if ((byte)((char)this[8] - 6U) < 2) {
    pvVar1 = *(void **)this;
    if (pvVar1 != (void *)0x0) {
      std::
      _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar1 + 0x10));
      operator_delete(pvVar1,0x30);
      return;
    }
    return;
  }
  return;
}



/* Json::Value::~Value() */

void __thiscall Json::Value::~Value(Value *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  releasePayload(this);
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)this = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 0xc;
    do {
      puVar3 = puVar2 + -4;
      if ((undefined8 *)*puVar3 != puVar2 + -2) {
        operator_delete((undefined8 *)*puVar3,puVar2[-2] + 1);
      }
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    operator_delete(puVar1,0x60);
    return;
  }
  return;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_M_erase(std::_Rb_tree_node<std::pair<Json::Value::CZString const, Json::Value>
   >*) [clone .isra.0] */

void std::
     _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  if (param_1 == (_Rb_tree_node *)0x0) {
    return;
  }
  do {
    _M_erase(*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    Json::Value::~Value((Value *)(param_1 + 0x30));
    if ((*(void **)(param_1 + 0x20) != (void *)0x0) && (((byte)param_1[0x28] & 3) == 1)) {
      free(*(void **)(param_1 + 0x20));
    }
    operator_delete(param_1,0x58);
    param_1 = p_Var1;
  } while (p_Var1 != (_Rb_tree_node *)0x0);
  return;
}



/* Json::Value::clear() */

void __thiscall Json::Value::clear(Value *this)

{
  long lVar1;
  
  if (this[8] != (Value)0x0) {
    if ((byte)((char)this[8] - 6U) < 2) {
      lVar1 = *(long *)this;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      std::
      _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(long *)(lVar1 + 0x18) = lVar1 + 8;
      *(long *)(lVar1 + 0x20) = lVar1 + 8;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      return;
    }
    clear();
  }
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* Json::Value::dupMeta(Json::Value const&) */

void __thiscall Json::Value::dupMeta(Value *this,Value *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  undefined8 *puVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cloneUnique<std::array<std::__cxx11::string,3ul>>
            ((Json *)&local_38,(unique_ptr_conflict *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + 0xc;
    do {
      puVar4 = puVar3 + -4;
      if ((undefined8 *)*puVar4 != puVar3 + -2) {
        operator_delete((undefined8 *)*puVar4,puVar3[-2] + 1);
      }
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    operator_delete(puVar1,0x60);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::isValidIndex(unsigned int) const */

ulong __thiscall Json::Value::isValidIndex(Value *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (this[8] == (Value)0x6) {
    uVar3 = 0;
    if (*(long *)(*(long *)this + 0x28) != 0) {
      lVar2 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)this + 8));
      uVar1 = *(int *)(lVar2 + 0x28) + 1;
      uVar3 = (ulong)CONCAT31((int3)(uVar1 >> 8),param_1 < uVar1);
    }
    return uVar3;
  }
  if (this[8] != (Value)0x7) {
    return 0;
  }
  return CONCAT71((int7)((ulong)*(long *)this >> 8),param_1 < *(uint *)(*(long *)this + 0x28));
}



/* Json::Value::isNull() const */

bool __thiscall Json::Value::isNull(Value *this)

{
  return this[8] == (Value)0x0;
}



/* Json::Value::isBool() const */

bool __thiscall Json::Value::isBool(Value *this)

{
  return this[8] == (Value)0x5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::isInt() const */

ulong Json::Value::isInt(void)

{
  char cVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  ulong uVar2;
  double *in_RDI;
  long in_FS_OFFSET;
  double dVar3;
  double dStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(in_RDI + 1);
  if (cVar1 == '\x02') {
    uVar2 = CONCAT71((int7)((ulong)in_RDX >> 8),(ulong)*in_RDI < 0x80000000);
  }
  else if (cVar1 == '\x03') {
    dVar3 = *in_RDI;
    if ((dVar3 < __LC22) || (_LC23 < dVar3)) {
      uVar2 = 0;
    }
    else {
      dVar3 = modf(dVar3,&dStack_18);
      uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),!NAN(dVar3)) & 0xffffffff;
      if (dVar3 != 0.0) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
    if (cVar1 == '\x01') {
      uVar2 = (ulong)((long)*in_RDI + 0x80000000U >> 0x20 == 0);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::asInt() const */

ulong __thiscall Json::Value::asInt(Value *this)

{
  double dVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (5 < (byte)this[8]) {
switchD_0010237f_caseD_4:
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
    std::operator<<((ostream *)&local_198,"Value is not convertible to Int.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(this[8]) {
  case (Value)0x0:
    uVar4 = 0;
    break;
  case (Value)0x1:
    cVar3 = isInt();
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestInt out of Int range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_001023bd;
  case (Value)0x2:
    cVar3 = isInt();
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestUInt out of Int range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_001023bd:
    uVar4 = (ulong)*(uint *)this;
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    if ((dVar1 < __LC22) || (_LC23 < dVar1)) {
      std::ios_base::ios_base((ios_base *)local_128);
      local_128[0] = std::ios::init;
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_30 = (undefined1  [16])0x0;
      lVar2 = *(long *)(_init + -0x18);
      local_198 = _init;
      local_50 = 0;
      *(undefined8 *)((long)&local_198 + lVar2) = _vtable;
      std::ios::init((streambuf *)((long)&local_198 + lVar2));
      local_128[0] = __cxa_guard_release;
      local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_198 = &std::__cxx11::stringbuf::vtable;
      pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
      local_168 = (undefined1  [16])0x0;
      std::locale::locale(local_158);
      pcStack_190 = __cxa_guard_acquire;
      local_148 = local_138;
      local_150 = 0x10;
      local_140 = 0;
      local_138[0] = 0;
      std::ios::init((streambuf *)local_128);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_198,"double out of Int range",0x17);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = CONCAT44((int)((ulong)((long)&switchD_0010237f::switchdataD_0010724c +
                                  (long)(int)(&switchD_0010237f::switchdataD_0010724c)
                                             [(byte)this[8]]) >> 0x20),(int)dVar1);
    break;
  case (Value)0x4:
    goto switchD_0010237f_caseD_4;
  case (Value)0x5:
    uVar4 = (ulong)(byte)*this;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::isUInt() const */

ulong Json::Value::isUInt(void)

{
  char cVar1;
  ulong in_RDX;
  undefined8 extraout_RDX;
  double *in_RDI;
  long in_FS_OFFSET;
  double dVar2;
  double dStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(in_RDI + 1);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      dVar2 = *in_RDI;
      if ((dVar2 < 0.0) || (_LC28 < dVar2)) {
        in_RDX = 0;
      }
      else {
        dVar2 = modf(dVar2,&dStack_18);
        in_RDX = CONCAT71((int7)((ulong)extraout_RDX >> 8),!NAN(dVar2)) & 0xffffffff;
        if (dVar2 != 0.0) {
          in_RDX = 0;
        }
      }
      goto LAB_001025a5;
    }
    in_RDX = 0;
    if (cVar1 != '\x01') goto LAB_001025a5;
  }
  in_RDX = CONCAT71((int7)(in_RDX >> 8),(ulong)*in_RDI < 0x100000000);
LAB_001025a5:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDX & 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::asUInt() const */

ulong __thiscall Json::Value::asUInt(Value *this)

{
  double dVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(this[8]) {
  case (Value)0x0:
    uVar4 = 0;
    break;
  case (Value)0x1:
    cVar3 = isUInt();
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestInt out of UInt range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_0010268d;
  case (Value)0x2:
    cVar3 = isUInt();
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestUInt out of UInt range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_0010268d:
    uVar4 = (ulong)*(uint *)this;
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    if ((dVar1 < 0.0) || (_LC28 < dVar1)) {
      std::ios_base::ios_base((ios_base *)local_128);
      local_128[0] = std::ios::init;
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_30 = (undefined1  [16])0x0;
      lVar2 = *(long *)(_init + -0x18);
      local_198 = _init;
      local_50 = 0;
      *(undefined8 *)((long)&local_198 + lVar2) = _vtable;
      std::ios::init((streambuf *)((long)&local_198 + lVar2));
      local_128[0] = __cxa_guard_release;
      local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_198 = &std::__cxx11::stringbuf::vtable;
      pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
      local_168 = (undefined1  [16])0x0;
      std::locale::locale(local_158);
      pcStack_190 = __cxa_guard_acquire;
      local_148 = local_138;
      local_150 = 0x10;
      local_140 = 0;
      local_138[0] = 0;
      std::ios::init((streambuf *)local_128);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_198,"double out of UInt range",0x18);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (ulong)dVar1;
    break;
  default:
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
    std::operator<<((ostream *)&local_198,"Value is not convertible to UInt.");
                    /* WARNING: Subroutine does not return */
    abort();
  case (Value)0x5:
    uVar4 = (ulong)(byte)*this;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::isConvertibleTo(Json::ValueType) const */

byte __thiscall Json::Value::isConvertibleTo(Value *this,undefined4 param_2)

{
  Value VVar1;
  char cVar2;
  long in_FS_OFFSET;
  byte bVar3;
  double dVar4;
  long *local_38;
  long local_30;
  long local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    VVar1 = this[8];
    if ((byte)((char)VVar1 - 1U) < 3) {
      dVar4 = (double)asDouble(this);
      bVar3 = 1;
      if (dVar4 == 0.0) break;
      VVar1 = this[8];
    }
    if (VVar1 == (Value)0x5) {
      bVar3 = (byte)*this ^ 1;
    }
    else if (VVar1 == (Value)0x4) {
      asString_abi_cxx11_();
      bVar3 = true;
      if (local_30 != 0) {
        VVar1 = this[8];
        if ((VVar1 == (Value)0x6) || (VVar1 == (Value)0x7)) {
          bVar3 = *(long *)(*(long *)this + 0x28) == 0;
        }
        else {
          bVar3 = VVar1 == (Value)0x0;
        }
      }
      if (local_38 != local_28) {
        operator_delete(local_38,local_28[0] + 1);
      }
    }
    else if ((VVar1 == (Value)0x6) || (VVar1 == (Value)0x7)) {
      bVar3 = *(long *)(*(long *)this + 0x28) == 0;
    }
    else {
      bVar3 = VVar1 == (Value)0x0;
    }
    break;
  case 1:
    cVar2 = isInt();
    if (cVar2 == '\0') {
      VVar1 = this[8];
      if (VVar1 != (Value)0x3) {
LAB_00102962:
        bVar3 = VVar1 == (Value)0x0 || VVar1 == (Value)0x5;
        break;
      }
      if (__LC22 <= *(double *)this) {
        bVar3 = *(double *)this <= _LC23;
        break;
      }
      goto switchD_00102885_default;
    }
    goto LAB_0010289c;
  case 2:
    cVar2 = isUInt();
    if (cVar2 == '\0') {
      VVar1 = this[8];
      if (VVar1 != (Value)0x3) goto LAB_00102962;
      if (0.0 <= *(double *)this) {
        bVar3 = *(double *)this <= _LC28;
        break;
      }
      goto switchD_00102885_default;
    }
    goto LAB_0010289c;
  case 3:
  case 5:
    if (3 < (byte)this[8]) {
      bVar3 = this[8] == (Value)0x5;
      break;
    }
LAB_0010289c:
    bVar3 = 1;
    break;
  case 4:
    bVar3 = (byte)this[8] < 6;
    break;
  case 6:
    bVar3 = this[8] == (Value)0x0 || this[8] == (Value)0x6;
    break;
  case 7:
    bVar3 = this[8] == (Value)0x0 || this[8] == (Value)0x7;
    break;
  default:
switchD_00102885_default:
    bVar3 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::isInt64() const */

ulong __thiscall Json::Value::isInt64(Value *this)

{
  Value VVar1;
  undefined8 extraout_RAX;
  ulong uVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  VVar1 = this[8];
  if (VVar1 == (Value)0x2) {
    uVar2 = ~*(ulong *)this >> 0x3f;
  }
  else if (VVar1 == (Value)0x3) {
    dVar3 = *(double *)this;
    if ((dVar3 < __LC33) || (_LC34 <= dVar3)) {
      uVar2 = 0;
    }
    else {
      dVar3 = modf(dVar3,&dStack_18);
      uVar2 = CONCAT71((int7)((ulong)extraout_RAX >> 8),!NAN(dVar3)) & 0xffffffff;
      if (dVar3 != 0.0) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = (ulong)(VVar1 == (Value)0x1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::asInt64() const */

ulong __thiscall Json::Value::asInt64(Value *this)

{
  double dVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(this[8]) {
  case (Value)0x0:
    uVar4 = 0;
    break;
  case (Value)0x2:
    cVar3 = isInt64(this);
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestUInt out of Int64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case (Value)0x1:
    uVar4 = *(ulong *)this;
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    if ((dVar1 < __LC33) || (_LC34 < dVar1)) {
      std::ios_base::ios_base((ios_base *)local_128);
      local_128[0] = std::ios::init;
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_30 = (undefined1  [16])0x0;
      lVar2 = *(long *)(_init + -0x18);
      local_198 = _init;
      local_50 = 0;
      *(undefined8 *)((long)&local_198 + lVar2) = _vtable;
      std::ios::init((streambuf *)((long)&local_198 + lVar2));
      local_128[0] = __cxa_guard_release;
      local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_198 = &std::__cxx11::stringbuf::vtable;
      pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
      local_168 = (undefined1  [16])0x0;
      std::locale::locale(local_158);
      pcStack_190 = __cxa_guard_acquire;
      local_148 = local_138;
      local_150 = 0x10;
      local_140 = 0;
      local_138[0] = 0;
      std::ios::init((streambuf *)local_128);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_198,"double out of Int64 range",0x19);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (ulong)dVar1;
    break;
  default:
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
    std::operator<<((ostream *)&local_198,"Value is not convertible to Int64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case (Value)0x5:
    uVar4 = (ulong)(byte)*this;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::asLargestInt() const */

void __thiscall Json::Value::asLargestInt(Value *this)

{
  asInt64(this);
  return;
}



/* Json::Value::isUInt64() const */

ulong __thiscall Json::Value::isUInt64(Value *this)

{
  Value VVar1;
  ulong uVar2;
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  double dVar3;
  double dStack_18;
  long local_10;
  
  VVar1 = this[8];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (VVar1 != (Value)0x2) {
    if (VVar1 == (Value)0x3) {
      dVar3 = *(double *)this;
      if ((dVar3 < 0.0) || (_LC38 <= dVar3)) {
        uVar2 = 0;
      }
      else {
        dVar3 = modf(dVar3,&dStack_18);
        uVar2 = CONCAT71((int7)((ulong)extraout_RAX >> 8),!NAN(dVar3)) & 0xffffffff;
        if (dVar3 != 0.0) {
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 0;
      if (VVar1 == (Value)0x1) {
        uVar2 = ~*(ulong *)this >> 0x3f;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::asUInt64() const */

ulong __thiscall Json::Value::asUInt64(Value *this)

{
  double dVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined *local_198;
  code *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  locale local_158 [8];
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  code *local_128 [27];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(this[8]) {
  case (Value)0x0:
    uVar4 = 0;
    break;
  case (Value)0x1:
    cVar3 = isUInt64(this);
    if (cVar3 == '\0') {
      std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
      std::operator<<((ostream *)&local_198,"LargestInt out of UInt64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case (Value)0x2:
    uVar4 = *(ulong *)this;
    break;
  case (Value)0x3:
    dVar1 = *(double *)this;
    if ((dVar1 < 0.0) || (_LC38 < dVar1)) {
      std::ios_base::ios_base((ios_base *)local_128);
      local_128[0] = std::ios::init;
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_30 = (undefined1  [16])0x0;
      lVar2 = *(long *)(_init + -0x18);
      local_198 = _init;
      local_50 = 0;
      *(undefined8 *)((long)&local_198 + lVar2) = _vtable;
      std::ios::init((streambuf *)((long)&local_198 + lVar2));
      local_128[0] = __cxa_guard_release;
      local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_198 = &std::__cxx11::stringbuf::vtable;
      pcStack_190 = (code *)&std::__cxx11::stringbuf::vtable;
      local_168 = (undefined1  [16])0x0;
      std::locale::locale(local_158);
      pcStack_190 = __cxa_guard_acquire;
      local_148 = local_138;
      local_150 = 0x10;
      local_140 = 0;
      local_138[0] = 0;
      std::ios::init((streambuf *)local_128);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_198,"double out of UInt64 range",0x1a);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (_LC34 <= dVar1) {
      uVar4 = (long)(dVar1 - _LC34) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulong)dVar1;
    }
    break;
  default:
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_198);
    std::operator<<((ostream *)&local_198,"Value is not convertible to UInt64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case (Value)0x5:
    uVar4 = (ulong)(byte)*this;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::asLargestUInt() const */

void __thiscall Json::Value::asLargestUInt(Value *this)

{
  asUInt64(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Json::Value::isIntegral() const */

ulong __thiscall Json::Value::isIntegral(Value *this)

{
  Value VVar1;
  undefined8 extraout_RAX;
  undefined8 unaff_RBX;
  ulong uVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  VVar1 = this[8];
  if ((byte)VVar1 < 3) {
    uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),VVar1 != (Value)0x0);
  }
  else {
    uVar2 = 0;
    if (((VVar1 == (Value)0x3) && (dVar3 = *(double *)this, __LC33 <= dVar3)) && (dVar3 < _LC38)) {
      dVar3 = modf(dVar3,&dStack_18);
      uVar2 = 0;
      if (dVar3 == 0.0) {
        uVar2 = CONCAT71((int7)((ulong)extraout_RAX >> 8),!NAN(dVar3)) & 0xffffffff;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::isDouble() const */

undefined4 __thiscall Json::Value::isDouble(Value *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* Json::Value::isNumeric() const */

undefined4 __thiscall Json::Value::isNumeric(Value *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* Json::Value::isString() const */

bool __thiscall Json::Value::isString(Value *this)

{
  return this[8] == (Value)0x4;
}



/* Json::Value::isArray() const */

bool __thiscall Json::Value::isArray(Value *this)

{
  return this[8] == (Value)0x6;
}



/* Json::Value::isObject() const */

bool __thiscall Json::Value::isObject(Value *this)

{
  return this[8] == (Value)0x7;
}



/* Json::Value::Comments::Comments(Json::Value::Comments const&) */

void __thiscall Json::Value::Comments::Comments(Comments *this,Comments *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cloneUnique<std::array<std::__cxx11::string,3ul>>((Json *)this,(unique_ptr_conflict *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::Comments::Comments(Json::Value::Comments&&) */

void __thiscall Json::Value::Comments::Comments(Comments *this,Comments *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  return;
}



/* Json::Value::Comments::TEMPNAMEPLACEHOLDERVALUE(Json::Value::Comments const&) */

Comments * __thiscall Json::Value::Comments::operator=(Comments *this,Comments *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  undefined8 *puVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cloneUnique<std::array<std::__cxx11::string,3ul>>
            ((Json *)&local_28,(unique_ptr_conflict *)param_1);
  puVar1 = *(undefined8 **)this;
  *(undefined8 *)this = local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 0xc;
    do {
      puVar3 = puVar2 + -4;
      if ((undefined8 *)*puVar3 != puVar2 + -2) {
        operator_delete((undefined8 *)*puVar3,puVar2[-2] + 1);
      }
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    operator_delete(puVar1,0x60);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::Comments::TEMPNAMEPLACEHOLDERVALUE(Json::Value::Comments&&) */

Comments * __thiscall Json::Value::Comments::operator=(Comments *this,Comments *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  puVar2 = *(undefined8 **)this;
  *(undefined8 *)this = uVar1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + 0xc;
    do {
      puVar4 = puVar3 + -4;
      if ((undefined8 *)*puVar4 != puVar3 + -2) {
        operator_delete((undefined8 *)*puVar4,puVar3[-2] + 1);
      }
      puVar3 = puVar4;
    } while (puVar2 != puVar4);
    operator_delete(puVar2,0x60);
  }
  return this;
}



/* Json::Value::Comments::has(Json::CommentPlacement) const */

bool __thiscall Json::Value::Comments::has(Comments *this,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)this != 0) {
    bVar1 = *(long *)(*(long *)this + 8 + (ulong)param_2 * 0x20) != 0;
  }
  return bVar1;
}



/* Json::Value::Comments::get[abi:cxx11](Json::CommentPlacement) const */

ulong * Json::Value::Comments::get_abi_cxx11_(ulong *param_1,long *param_2,uint param_3)

{
  long lVar1;
  ulong __n;
  undefined1 *__src;
  ulong *__dest;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  lVar1 = *param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    param_1[1] = 0;
    *param_1 = (ulong)(param_1 + 2);
    *(undefined1 *)(param_1 + 2) = 0;
    goto LAB_00103312;
  }
  __dest = param_1 + 2;
  *param_1 = (ulong)__dest;
  puVar2 = (undefined8 *)(lVar1 + (ulong)param_3 * 0x20);
  __n = puVar2[1];
  __src = (undefined1 *)*puVar2;
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(param_1 + 2) = *__src;
    }
    else if (__n != 0) goto LAB_00103363;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
LAB_00103363:
    memcpy(__dest,__src,__n);
    __dest = (ulong *)*param_1;
  }
  param_1[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
LAB_00103312:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Json::Value::Comments::set(Json::CommentPlacement, std::__cxx11::string) */

void Json::Value::Comments::set(undefined8 param_1,int param_2)

{
  if (param_2 < 3) {
    set();
    return;
  }
  return;
}



/* Json::Value::setComment(std::__cxx11::string, Json::CommentPlacement) */

void __thiscall Json::Value::setComment(Value *this,long *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long *local_1a8;
  long local_1a0;
  long local_198 [45];
  long local_30;
  ulong uVar6;
  
  lVar3 = param_2[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar7 = (long *)*param_2;
  if ((lVar3 != 0) && (*(char *)((long)plVar7 + lVar3 + -1) == '\n')) {
    std::__cxx11::string::_M_erase((ulong)param_2,lVar3 - 1);
    plVar7 = (long *)*param_2;
  }
  if (((char)*plVar7 != '\0') && ((char)*plVar7 != '/')) {
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_1a8);
    std::operator<<((ostream *)&local_1a8,"in Json::Value::setComment(): Comments must start with /"
                   );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = param_2 + 2;
  local_1a0 = param_2[1];
  if (plVar1 == plVar7) {
    uVar2 = local_1a0 + 1;
    plVar8 = local_198;
    if (7 < (uint)uVar2) {
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 8;
        uVar6 = (ulong)uVar4;
        *(undefined8 *)((long)local_198 + uVar5) = *(undefined8 *)((long)plVar1 + uVar5);
        uVar5 = uVar6;
      } while (uVar4 < ((uint)uVar2 & 0xfffffff8));
      plVar8 = (long *)((long)local_198 + uVar6);
      plVar7 = (long *)((long)plVar7 + uVar6);
    }
    lVar3 = 0;
    if ((uVar2 & 4) != 0) {
      *(int *)plVar8 = (int)*plVar7;
      lVar3 = 4;
    }
    if ((uVar2 & 2) != 0) {
      *(undefined2 *)((long)plVar8 + lVar3) = *(undefined2 *)((long)plVar7 + lVar3);
      lVar3 = lVar3 + 2;
    }
    local_1a8 = local_198;
    if ((uVar2 & 1) != 0) {
      *(char *)((long)plVar8 + lVar3) = *(char *)((long)plVar7 + lVar3);
    }
  }
  else {
    local_198[0] = param_2[2];
    local_1a8 = plVar7;
  }
  *param_2 = (long)plVar1;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  if (param_3 < 3) {
    Comments::set((Comments *)(this + 0x10),param_3,&local_1a8);
  }
  if (local_1a8 != local_198) {
    operator_delete(local_1a8,local_198[0] + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::hasComment(Json::CommentPlacement) const */

bool __thiscall Json::Value::hasComment(Value *this,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)(this + 0x10) != 0) {
    bVar1 = *(long *)(*(long *)(this + 0x10) + 8 + (ulong)param_2 * 0x20) != 0;
  }
  return bVar1;
}



/* Json::Value::getComment[abi:cxx11](Json::CommentPlacement) const */

ulong * Json::Value::getComment_abi_cxx11_(ulong *param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong __n;
  undefined1 *__src;
  ulong *__dest;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  lVar1 = *(long *)(param_2 + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    param_1[1] = 0;
    *param_1 = (ulong)(param_1 + 2);
    *(undefined1 *)(param_1 + 2) = 0;
    goto LAB_001035d3;
  }
  __dest = param_1 + 2;
  *param_1 = (ulong)__dest;
  puVar2 = (undefined8 *)(lVar1 + (ulong)param_3 * 0x20);
  __n = puVar2[1];
  __src = (undefined1 *)*puVar2;
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(param_1 + 2) = *__src;
    }
    else if (__n != 0) goto LAB_00103623;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
LAB_00103623:
    memcpy(__dest,__src,__n);
    __dest = (ulong *)*param_1;
  }
  param_1[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
LAB_001035d3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Json::Value::setOffsetStart(long) */

void __thiscall Json::Value::setOffsetStart(Value *this,long param_1)

{
  *(long *)(this + 0x18) = param_1;
  return;
}



/* Json::Value::setOffsetLimit(long) */

void __thiscall Json::Value::setOffsetLimit(Value *this,long param_1)

{
  *(long *)(this + 0x20) = param_1;
  return;
}



/* Json::Value::getOffsetStart() const */

undefined8 __thiscall Json::Value::getOffsetStart(Value *this)

{
  return *(undefined8 *)(this + 0x18);
}



/* Json::Value::getOffsetLimit() const */

undefined8 __thiscall Json::Value::getOffsetLimit(Value *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* Json::Value::begin() const */

undefined1  [16] __thiscall Json::Value::begin(Value *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined7 uStack_f;
  
  if (((byte)this[8] - 6 < 2) && (*(long *)this != 0)) {
    auVar2[8] = 0;
    auVar2._0_8_ = *(ulong *)(*(long *)this + 0x18);
    auVar2._9_7_ = uStack_f;
    return auVar2;
  }
  auVar1._9_7_ = uStack_f;
  auVar1._0_9_ = (unkuint9)1 << 0x40;
  return auVar1;
}



/* Json::Value::end() const */

undefined1  [16] __thiscall Json::Value::end(Value *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined7 uStack_f;
  
  if (((byte)this[8] - 6 < 2) && (*(long *)this != 0)) {
    auVar2[8] = 0;
    auVar2._0_8_ = *(long *)this + 8;
    auVar2._9_7_ = uStack_f;
    return auVar2;
  }
  auVar1._9_7_ = uStack_f;
  auVar1._0_9_ = (unkuint9)1 << 0x40;
  return auVar1;
}



/* Json::Value::begin() */

void Json::Value::begin(void)

{
  undefined8 uVar1;
  long *in_RSI;
  undefined8 *in_RDI;
  
  if ((*(byte *)(in_RSI + 1) - 6 < 2) && (*in_RSI != 0)) {
    uVar1 = *(undefined8 *)(*in_RSI + 0x18);
    *(undefined1 *)(in_RDI + 1) = 0;
    *in_RDI = uVar1;
    return;
  }
  *in_RDI = 0;
  *(undefined1 *)(in_RDI + 1) = 1;
  return;
}



/* Json::Value::end() */

void Json::Value::end(void)

{
  long lVar1;
  long *in_RSI;
  long *in_RDI;
  
  if ((*(byte *)(in_RSI + 1) - 6 < 2) && (lVar1 = *in_RSI, lVar1 != 0)) {
    *(undefined1 *)(in_RDI + 1) = 0;
    *in_RDI = lVar1 + 8;
    return;
  }
  *in_RDI = 0;
  *(undefined1 *)(in_RDI + 1) = 1;
  return;
}



/* Json::PathArgument::PathArgument() */

void __thiscall Json::PathArgument::PathArgument(PathArgument *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(PathArgument **)this = this + 0x10;
  this[0x10] = (PathArgument)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}



/* Json::PathArgument::PathArgument(unsigned int) */

void __thiscall Json::PathArgument::PathArgument(PathArgument *this,uint param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(PathArgument **)this = this + 0x10;
  this[0x10] = (PathArgument)0x0;
  *(uint *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x24) = 1;
  return;
}



/* Json::PathArgument::PathArgument(char const*) */

void __thiscall Json::PathArgument::PathArgument(PathArgument *this,char *param_1)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  
  *(PathArgument **)this = this + 0x10;
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    std::__cxx11::string::_M_construct<char_const*>(this,param_1,param_1 + sVar2);
    *(long *)(this + 0x20) = _LC44;
    return;
  }
  pcVar6 = "basic_string: construction from null is not valid";
  std::__throw_logic_error("basic_string: construction from null is not valid");
  plVar1 = (long *)((long)param_1 + 0x10);
  *(long **)pcVar6 = (long *)((long)pcVar6 + 0x10);
  if ((long *)*(long *)param_1 == plVar1) {
    lVar3 = *(long *)((long)param_1 + 8);
    uVar5 = lVar3 + 1;
    uVar7 = (uint)uVar5;
    if (uVar7 < 8) {
      if ((uVar5 & 4) != 0) {
        *(int *)((long)pcVar6 + 0x10) = (int)*(long *)((long)param_1 + 0x10);
        *(undefined4 *)((long)pcVar6 + (uVar5 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_1 + (uVar5 & 0xffffffff) + 0xc);
        lVar3 = *(long *)((long)param_1 + 8);
        goto LAB_001038aa;
      }
      if (uVar7 == 0) goto LAB_001038aa;
      *(char *)((long)pcVar6 + 0x10) = (char)*(long *)((long)param_1 + 0x10);
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)((long)pcVar6 + (uVar5 & 0xffffffff) + 0xe) =
             *(undefined2 *)((long)param_1 + (uVar5 & 0xffffffff) + 0xe);
        lVar3 = *(long *)((long)param_1 + 8);
        goto LAB_001038aa;
      }
    }
    else {
      *(long *)((long)pcVar6 + 0x10) = *(long *)((long)param_1 + 0x10);
      *(undefined8 *)((long)pcVar6 + (uVar5 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_1 + (uVar5 & 0xffffffff) + 8);
      lVar3 = ((long)pcVar6 + 0x10) - ((ulong)((long)pcVar6 + 0x18) & 0xfffffffffffffff8);
      uVar7 = uVar7 + (int)lVar3 & 0xfffffff8;
      if (7 < uVar7) {
        uVar5 = 0;
        do {
          uVar4 = (int)uVar5 + 8;
          *(undefined8 *)(((ulong)((long)pcVar6 + 0x18) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)((long)plVar1 + (uVar5 - lVar3));
          uVar5 = (ulong)uVar4;
        } while (uVar4 < uVar7);
      }
    }
  }
  else {
    *(long *)pcVar6 = *(long *)param_1;
    *(long *)((long)pcVar6 + 0x10) = *(long *)((long)param_1 + 0x10);
  }
  lVar3 = *(long *)((long)param_1 + 8);
LAB_001038aa:
  *(long **)param_1 = plVar1;
  *(long *)((long)param_1 + 8) = 0;
  *(long *)((long)pcVar6 + 8) = lVar3;
  *(undefined1 *)((long)param_1 + 0x10) = 0;
  *(long *)((long)pcVar6 + 0x20) = _LC44;
  return;
}



/* Json::PathArgument::PathArgument(std::__cxx11::string) */

void __thiscall Json::PathArgument::PathArgument(PathArgument *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  plVar1 = param_2 + 2;
  *(PathArgument **)this = this + 0x10;
  if ((long *)*param_2 == plVar1) {
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
    uVar5 = (uint)uVar4;
    if (uVar5 < 8) {
      if ((uVar4 & 4) != 0) {
        *(int *)(this + 0x10) = (int)param_2[2];
        *(undefined4 *)(this + (uVar4 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_2 + (uVar4 & 0xffffffff) + 0xc);
        lVar2 = param_2[1];
        goto LAB_001038aa;
      }
      if (uVar5 == 0) goto LAB_001038aa;
      this[0x10] = *(PathArgument *)(param_2 + 2);
      if ((uVar4 & 2) != 0) {
        *(undefined2 *)(this + (uVar4 & 0xffffffff) + 0xe) =
             *(undefined2 *)((long)param_2 + (uVar4 & 0xffffffff) + 0xe);
        lVar2 = param_2[1];
        goto LAB_001038aa;
      }
    }
    else {
      *(long *)(this + 0x10) = param_2[2];
      *(undefined8 *)(this + (uVar4 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_2 + (uVar4 & 0xffffffff) + 8);
      lVar2 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
      uVar5 = uVar5 + (int)lVar2 & 0xfffffff8;
      if (7 < uVar5) {
        uVar4 = 0;
        do {
          uVar3 = (int)uVar4 + 8;
          *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)((long)plVar1 + (uVar4 - lVar2));
          uVar4 = (ulong)uVar3;
        } while (uVar3 < uVar5);
      }
    }
  }
  else {
    *(long *)this = *param_2;
    *(long *)(this + 0x10) = param_2[2];
  }
  lVar2 = param_2[1];
LAB_001038aa:
  *param_2 = (long)plVar1;
  param_2[1] = 0;
  *(long *)(this + 8) = lVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(this + 0x20) = _LC44;
  return;
}



/* Json::Path::invalidPath(std::__cxx11::string const&, int) */

void Json::Path::invalidPath(string *param_1,int param_2)

{
  return;
}



/* Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */

void __thiscall Json::ValueIterator::ValueIterator(ValueIterator *this,ValueConstIterator *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  allocator local_39;
  string local_38 [40];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)param_1;
  *(ValueConstIterator *)(this + 8) = param_1[8];
  *(undefined8 *)this = uVar1;
  std::__cxx11::string::string<std::allocator<char>>
            (local_38,"ConstIterator to Iterator should never be allowed.",&local_39);
                    /* WARNING: Subroutine does not return */
  throwRuntimeError(local_38);
}



/* Json::Value::CZString::CZString(Json::Value::CZString const&) */

void __thiscall Json::Value::CZString::CZString(CZString *this,CZString *param_1)

{
  CZString CVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  byte bVar6;
  allocator local_69;
  string local_68 [40];
  long local_40;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CVar1 = param_1[8];
  if (((byte)CVar1 & 3) == 0) {
    *(long *)this = lVar4;
    if (lVar4 == 0) goto LAB_00103ac7;
  }
  else {
    if (lVar4 == 0) {
      *(undefined8 *)this = 0;
LAB_00103ac7:
      bVar6 = (byte)CVar1 & 3;
      goto LAB_00103a6f;
    }
    uVar5 = (ulong)(uVar2 >> 2);
    pvVar3 = malloc(uVar5 + 1);
    if (pvVar3 == (void *)0x0) {
      std::__cxx11::string::string<std::allocator<char>>
                (local_68,
                 "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer",
                 &local_69);
                    /* WARNING: Subroutine does not return */
      throwRuntimeError(local_68);
    }
    lVar4 = __memcpy_chk(pvVar3,lVar4,uVar5,uVar5 + 1);
    *(undefined1 *)(lVar4 + uVar5) = 0;
    *(long *)this = lVar4;
  }
  bVar6 = ((byte)CVar1 & 3) != 0;
LAB_00103a6f:
  this[8] = (CZString)((byte)this[8] & 0xfc | bVar6);
  *(uint *)(this + 8) = *(uint *)(this + 8) & 3 | (uVar2 >> 2) * 4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::ValueIteratorBase::index() const */

undefined4 __thiscall Json::ValueIteratorBase::index(ValueIteratorBase *this)

{
  long in_FS_OFFSET;
  void *local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Value::CZString::CZString((CZString *)&local_28,(CZString *)(*(long *)this + 0x20));
  if (local_28 != (void *)0x0) {
    if (((byte)local_20 & 3) == 1) {
      free(local_28);
    }
    local_20 = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20;
}



/* Json::ValueIteratorBase::key() const */

void Json::ValueIteratorBase::key(void)

{
  ulong uVar1;
  long *in_RSI;
  ulong *in_RDI;
  long in_FS_OFFSET;
  char *local_38;
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Value::CZString::CZString((CZString *)&local_38,(CZString *)(*in_RSI + 0x20));
  if (local_38 == (char *)0x0) {
    in_RDI[2] = 0;
    *(undefined1 (*) [16])(in_RDI + 3) = (undefined1  [16])0x0;
    *(ushort *)(in_RDI + 1) = (ushort)in_RDI[1] & 0xfe00 | 2;
    *in_RDI = (ulong)local_30;
  }
  else if ((local_30 & 3) == 0) {
    in_RDI[2] = 0;
    *in_RDI = (ulong)local_38;
    *(undefined1 (*) [16])(in_RDI + 3) = (undefined1  [16])0x0;
    *(ushort *)(in_RDI + 1) = (ushort)in_RDI[1] & 0xfe00 | 4;
  }
  else {
    in_RDI[2] = 0;
    *(undefined1 (*) [16])(in_RDI + 3) = (undefined1  [16])0x0;
    *(ushort *)(in_RDI + 1) = (ushort)in_RDI[1] & 0xfe00 | 0x104;
    uVar1 = duplicateAndPrefixStringValue(local_38,local_30 >> 2);
    *in_RDI = uVar1;
    if (((byte)local_30 & 3) == 1) {
      free(local_38);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree_node<std::pair<Json::Value::CZString const, Json::Value> >*
   std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_M_copy<false, std::_Rb_tree<Json::Value::CZString,
   std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<Json::Value::CZString const,
   Json::Value> >*, std::_Rb_tree_node_base*, std::_Rb_tree<Json::Value::CZString,
   std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_Alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::
_M_copy<false,std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>::_Alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Alloc_node *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  
  p_Var4 = (_Rb_tree_node_base *)operator_new(0x58);
  Json::Value::CZString::CZString((CZString *)(p_Var4 + 0x20),(CZString *)(param_1 + 0x20));
  Json::Value::Value((Value *)(p_Var4 + 0x30),(Value *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)param_1;
  p_Var5 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(_Rb_tree_node_base **)(p_Var4 + 8) = param_2;
  *(undefined8 *)(p_Var4 + 0x10) = 0;
  *(undefined4 *)p_Var4 = uVar1;
  *(undefined8 *)(p_Var4 + 0x18) = 0;
  if (p_Var5 != (_Rb_tree_node *)0x0) {
    p_Var5 = _M_copy<false,std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>::_Alloc_node>
                       (p_Var5,p_Var4,extraout_RDX);
    *(_Rb_tree_node **)(p_Var4 + 0x18) = p_Var5;
  }
  p_Var3 = p_Var4;
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = *(undefined4 **)(puVar2 + 4)) {
    p_Var6 = (_Rb_tree_node_base *)operator_new(0x58);
    Json::Value::CZString::CZString((CZString *)(p_Var6 + 0x20),(CZString *)(puVar2 + 8));
    Json::Value::Value((Value *)(p_Var6 + 0x30),(Value *)(puVar2 + 0xc));
    uVar1 = *puVar2;
    *(undefined8 *)(p_Var6 + 0x10) = 0;
    *(undefined8 *)(p_Var6 + 0x18) = 0;
    *(undefined4 *)p_Var6 = uVar1;
    *(_Rb_tree_node_base **)(p_Var3 + 0x10) = p_Var6;
    *(_Rb_tree_node_base **)(p_Var6 + 8) = p_Var3;
    if (*(_Rb_tree_node **)(puVar2 + 6) != (_Rb_tree_node *)0x0) {
      p_Var5 = _M_copy<false,std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>::_Alloc_node>
                         (*(_Rb_tree_node **)(puVar2 + 6),p_Var6,extraout_RDX_00);
      *(_Rb_tree_node **)(p_Var6 + 0x18) = p_Var5;
    }
    p_Var3 = p_Var6;
  }
  return (_Rb_tree_node *)p_Var4;
}



/* Json::Value::dupPayload(Json::Value const&) */

void __thiscall Json::Value::dupPayload(Value *this,Value *param_1)

{
  _Rb_tree_node_base *p_Var1;
  Value VVar2;
  uint *puVar3;
  long lVar4;
  _Rb_tree_node *p_Var5;
  void *pvVar6;
  _Rb_tree_node *p_Var7;
  undefined8 uVar8;
  _Alloc_node *extraout_RDX;
  _Rb_tree_node *p_Var9;
  
  VVar2 = param_1[8];
  this[9] = (Value)((byte)this[9] & 0xfe);
  this[8] = VVar2;
  if (VVar2 != (Value)0x5) {
    if (5 < (byte)VVar2) {
      if (1 < (byte)((char)VVar2 - 6U)) {
        return;
      }
      pvVar6 = operator_new(0x30);
      lVar4 = *(long *)param_1;
      *(undefined8 *)((long)pvVar6 + 0x10) = 0;
      p_Var1 = (_Rb_tree_node_base *)((long)pvVar6 + 8);
      p_Var5 = *(_Rb_tree_node **)(lVar4 + 0x10);
      *(undefined4 *)((long)pvVar6 + 8) = 0;
      *(_Rb_tree_node_base **)((long)pvVar6 + 0x18) = p_Var1;
      *(_Rb_tree_node_base **)((long)pvVar6 + 0x20) = p_Var1;
      *(undefined8 *)((long)pvVar6 + 0x28) = 0;
      if (p_Var5 != (_Rb_tree_node *)0x0) {
        p_Var7 = std::
                 _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                 ::
                 _M_copy<false,std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>::_Alloc_node>
                           (p_Var5,p_Var1,extraout_RDX);
        p_Var5 = p_Var7;
        do {
          p_Var9 = p_Var5;
          p_Var5 = *(_Rb_tree_node **)(p_Var9 + 0x10);
        } while (p_Var5 != (_Rb_tree_node *)0x0);
        *(_Rb_tree_node **)((long)pvVar6 + 0x18) = p_Var9;
        p_Var5 = p_Var7;
        do {
          p_Var9 = p_Var5;
          p_Var5 = *(_Rb_tree_node **)(p_Var9 + 0x18);
        } while (p_Var5 != (_Rb_tree_node *)0x0);
        uVar8 = *(undefined8 *)(lVar4 + 0x28);
        *(_Rb_tree_node **)((long)pvVar6 + 0x20) = p_Var9;
        *(_Rb_tree_node **)((long)pvVar6 + 0x10) = p_Var7;
        *(undefined8 *)((long)pvVar6 + 0x28) = uVar8;
      }
      *(void **)this = pvVar6;
      return;
    }
    if (VVar2 == (Value)0x4) {
      puVar3 = *(uint **)param_1;
      if ((puVar3 != (uint *)0x0) && (((byte)param_1[9] & 1) != 0)) {
        uVar8 = duplicateAndPrefixStringValue((char *)(puVar3 + 1),*puVar3);
        this[9] = (Value)((byte)this[9] | 1);
        *(undefined8 *)this = uVar8;
        return;
      }
      *(uint **)this = puVar3;
      return;
    }
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* Json::Value::Value(Json::Value const&) */

void __thiscall Json::Value::Value(Value *this,Value *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  undefined8 *puVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  dupPayload(this,param_1);
  cloneUnique<std::array<std::__cxx11::string,3ul>>
            ((Json *)&local_38,(unique_ptr_conflict *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + 0xc;
    do {
      puVar4 = puVar3 + -4;
      if ((undefined8 *)*puVar4 != puVar3 + -2) {
        operator_delete((undefined8 *)*puVar4,puVar3[-2] + 1);
      }
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    operator_delete(puVar1,0x60);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::TEMPNAMEPLACEHOLDERVALUE(Json::Value const&) */

Value * __thiscall Json::Value::operator=(Value *this,Value *param_1)

{
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Value(aVStack_48,param_1);
  swap(aVStack_48,this);
  ~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::copyPayload(Json::Value const&) */

void __thiscall Json::Value::copyPayload(Value *this,Value *param_1)

{
  void *pvVar1;
  
  if (this[8] == (Value)0x4) {
    if (((byte)this[9] & 1) != 0) {
      free(*(void **)this);
      dupPayload(this,param_1);
      return;
    }
  }
  else if (((byte)((char)this[8] - 6U) < 2) && (pvVar1 = *(void **)this, pvVar1 != (void *)0x0)) {
    std::
    _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar1 + 0x10));
    operator_delete(pvVar1,0x30);
  }
  dupPayload(this,param_1);
  return;
}



/* Json::Value::copy(Json::Value const&) */

void __thiscall Json::Value::copy(Value *this,Value *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  undefined8 *puVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  releasePayload(this);
  dupPayload(this,param_1);
  cloneUnique<std::array<std::__cxx11::string,3ul>>
            ((Json *)&local_38,(unique_ptr_conflict *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + 0xc;
    do {
      puVar4 = puVar3 + -4;
      if ((undefined8 *)*puVar4 != puVar3 + -2) {
        operator_delete((undefined8 *)*puVar4,puVar3[-2] + 1);
      }
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    operator_delete(puVar1,0x60);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::find(char const*, char const*) const */

_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
* __thiscall Json::Value::find(Value *this,char *param_1,char *param_2)

{
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *this_00;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var2;
  long in_FS_OFFSET;
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    p_Var2 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)0x0;
  }
  else {
    if (this[8] != (Value)0x7) {
      find((char *)this,param_1);
      goto LAB_00104161;
    }
    this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
    local_30 = ((int)param_2 - (int)param_1) * 4;
    local_38 = param_1;
    p_Var1 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(this_00,(CZString *)&local_38);
    p_Var2 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)0x0;
    if (this_00 + 8 != p_Var1) {
      p_Var2 = p_Var1 + 0x30;
    }
    if ((param_1 != (char *)0x0) && (((byte)local_30 & 3) == 1)) {
      free(param_1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var2;
  }
LAB_00104161:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::isMember(char const*) const */

bool __thiscall Json::Value::isMember(Value *this,char *param_1)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_1);
  lVar2 = find(this,param_1,param_1 + sVar1);
  return lVar2 != 0;
}



/* Json::Value::operator[](char const*) const */

void __thiscall Json::Value::operator[](Value *this,char *param_1)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_1);
  lVar2 = find(this,param_1,param_1 + sVar1);
  if (lVar2 != 0) {
    return;
  }
  nullSingleton();
  return;
}



/* Json::Value::get(char const*, char const*, Json::Value const&) const */

char * Json::Value::get(char *param_1,char *param_2,Value *param_3)

{
  Value *pVVar1;
  char *in_RCX;
  Value *in_R8;
  
  pVVar1 = (Value *)find((Value *)param_2,(char *)param_3,in_RCX);
  if (pVVar1 == (Value *)0x0) {
    pVVar1 = in_R8;
  }
  Value((Value *)param_1,pVVar1);
  return param_1;
}



/* Json::Value::get(char const*, Json::Value const&) const */

char * Json::Value::get(char *param_1,Value *param_2)

{
  size_t sVar1;
  Value *pVVar2;
  Value *in_RCX;
  char *in_RDX;
  
  sVar1 = strlen(in_RDX);
  pVVar2 = (Value *)find(param_2,in_RDX,in_RDX + sVar1);
  if (pVVar2 == (Value *)0x0) {
    pVVar2 = in_RCX;
  }
  Value((Value *)param_1,pVVar2);
  return param_1;
}



/* Json::Value::get(std::__cxx11::string const&, Json::Value const&) const */

string * Json::Value::get(string *param_1,Value *param_2)

{
  Value *pVVar1;
  Value *in_RCX;
  undefined8 *in_RDX;
  
  pVVar1 = (Value *)find(param_2,(char *)*in_RDX,(char *)*in_RDX + in_RDX[1]);
  if (pVVar1 == (Value *)0x0) {
    pVVar1 = in_RCX;
  }
  Value((Value *)param_1,pVVar1);
  return param_1;
}



/* Json::Value::removeMember(char const*, char const*, Json::Value*) [clone .part.0] */

undefined8 __thiscall
Json::Value::removeMember(Value *this,char *param_1,char *param_2,Value *param_3)

{
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *this_00;
  undefined8 uVar3;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var4;
  long in_FS_OFFSET;
  char *local_48;
  int local_40;
  long local_30;
  
  local_40 = ((int)param_2 - (int)param_1) * 4;
  this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              **)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  p_Var1 = (_Rb_tree_node_base *)
           std::
           _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
           ::find(this_00,(CZString *)&local_48);
  p_Var4 = this_00 + 8;
  if (p_Var1 == (_Rb_tree_node_base *)p_Var4) {
    uVar3 = 0;
  }
  else {
    if (param_3 != (Value *)0x0) {
      swap((Value *)(p_Var1 + 0x30),param_3);
      this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                  **)this;
      p_Var4 = this_00 + 8;
    }
    pvVar2 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var1,(_Rb_tree_node_base *)p_Var4);
    ~Value((Value *)((long)pvVar2 + 0x30));
    if ((*(void **)((long)pvVar2 + 0x20) != (void *)0x0) &&
       ((*(byte *)((long)pvVar2 + 0x28) & 3) == 1)) {
      free(*(void **)((long)pvVar2 + 0x20));
    }
    operator_delete(pvVar2,0x58);
    *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + -1;
    uVar3 = 1;
  }
  if ((param_1 != (char *)0x0) && (((byte)local_40 & 3) == 1)) {
    free(param_1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::removeMember(char const*, char const*, Json::Value*) */

undefined8 __thiscall
Json::Value::removeMember(Value *this,char *param_1,char *param_2,Value *param_3)

{
  undefined8 uVar1;
  
  if (this[8] == (Value)0x7) {
    uVar1 = removeMember(this,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* Json::Value::removeMember(char const*, Json::Value*) */

undefined8 __thiscall Json::Value::removeMember(Value *this,char *param_1,Value *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (this[8] == (Value)0x7) {
    sVar1 = strlen(param_1);
    uVar2 = removeMember(this,param_1,param_1 + sVar1,param_2);
    return uVar2;
  }
  return 0;
}



/* Json::Value::removeMember(std::__cxx11::string const&, Json::Value*) */

undefined8 __thiscall Json::Value::removeMember(Value *this,string *param_1,Value *param_2)

{
  undefined8 uVar1;
  
  if (this[8] == (Value)0x7) {
    uVar1 = removeMember(this,*(char **)param_1,*(char **)param_1 + *(long *)(param_1 + 8),param_2);
    return uVar1;
  }
  return 0;
}



/* Json::Value::operator[](unsigned int) const */

_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
* __thiscall Json::Value::operator[](Value *this,uint param_1)

{
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var2;
  long in_FS_OFFSET;
  undefined8 local_198;
  uint local_190;
  ostringstream local_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] != (Value)0x0) {
    if (this[8] != (Value)0x6) {
      std::__cxx11::ostringstream::ostringstream(local_188);
      std::operator<<((ostream *)local_188,
                      "in Json::Value::operator[](ArrayIndex)const: requires arrayValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
               **)this;
    local_198 = 0;
    local_190 = param_1;
    p_Var2 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(p_Var1,(CZString *)&local_198);
    if (p_Var2 != p_Var1 + 8) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return p_Var2 + 0x30;
      }
      goto LAB_00104538;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    p_Var1 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)nullSingleton();
    return p_Var1;
  }
LAB_00104538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::operator[](int) const */

void __thiscall Json::Value::operator[](Value *this,int param_1)

{
  long in_FS_OFFSET;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,
                    "in Json::Value::operator[](int index) const: index cannot be negative");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator[](this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Path::resolve(Json::Value const&) const */

Value * __thiscall Json::Path::resolve(Path *this,Value *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  Value *pVVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  while( true ) {
    while( true ) {
      if (puVar2 == puVar5) {
        return param_1;
      }
      if (*(int *)((long)puVar5 + 0x24) == 1) break;
      if (*(int *)((long)puVar5 + 0x24) == 2) {
        if (param_1[8] != (Value)0x7) goto LAB_0010461b;
        param_1 = (Value *)Value::find(param_1,(char *)*puVar5,(char *)*puVar5 + puVar5[1]);
        if (param_1 == (Value *)0x0) {
          param_1 = (Value *)Value::nullSingleton();
        }
        pVVar3 = (Value *)Value::nullSingleton();
        if (param_1 == pVVar3) {
          pVVar3 = (Value *)Value::nullSingleton();
          return pVVar3;
        }
      }
      puVar5 = puVar5 + 5;
    }
    if (param_1[8] != (Value)0x6) break;
    uVar1 = *(uint *)(puVar5 + 4);
    if ((*(long *)(*(long *)param_1 + 0x28) == 0) ||
       (lVar4 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)param_1 + 8)),
       *(int *)(lVar4 + 0x28) + 1U <= uVar1)) break;
    puVar5 = puVar5 + 5;
    param_1 = (Value *)Value::operator[](param_1,uVar1);
  }
LAB_0010461b:
  pVVar3 = (Value *)Value::nullSingleton();
  return pVVar3;
}



/* Json::Value::get(unsigned int, Json::Value const&) const */

Value * Json::Value::get(uint param_1,Value *param_2)

{
  Value *pVVar1;
  Value *pVVar2;
  Value *in_RCX;
  uint in_EDX;
  undefined4 in_register_0000003c;
  
  pVVar1 = (Value *)operator[](param_2,in_EDX);
  pVVar2 = (Value *)nullSingleton();
  if (pVVar1 == pVVar2) {
    pVVar1 = in_RCX;
  }
  Value((Value *)CONCAT44(in_register_0000003c,param_1),pVVar1);
  return (Value *)CONCAT44(in_register_0000003c,param_1);
}



/* Json::Path::resolve(Json::Value const&, Json::Value const&) const */

Value * Json::Path::resolve(Value *param_1,Value *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  Value *pVVar4;
  Value *in_RCX;
  Value *in_RDX;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
joined_r0x00104722:
  if (puVar2 == puVar5) {
    Value::Value(param_1,in_RDX);
    return param_1;
  }
  if (*(int *)((long)puVar5 + 0x24) == 1) {
    if (in_RDX[8] == (Value)0x6) {
      uVar1 = *(uint *)(puVar5 + 4);
      if ((*(long *)(*(long *)in_RDX + 0x28) == 0) ||
         (lVar3 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)in_RDX + 8)),
         *(int *)(lVar3 + 0x28) + 1U <= uVar1)) goto LAB_0010475f;
      puVar5 = puVar5 + 5;
      in_RDX = (Value *)Value::operator[](in_RDX,uVar1);
      goto joined_r0x00104722;
    }
LAB_0010475f:
    Value::Value(param_1,in_RCX);
    return param_1;
  }
  if (*(int *)((long)puVar5 + 0x24) == 2) {
    if (in_RDX[8] != (Value)0x7) goto LAB_0010475f;
    in_RDX = (Value *)Value::find(in_RDX,(char *)*puVar5,(char *)*puVar5 + puVar5[1]);
    if (in_RDX == (Value *)0x0) {
      in_RDX = (Value *)Value::nullSingleton();
    }
    pVVar4 = (Value *)Value::nullSingleton();
    if (in_RDX == pVVar4) goto LAB_0010475f;
  }
  puVar5 = puVar5 + 5;
  goto joined_r0x00104722;
}



/* Json::Value::isMember(char const*, char const*) const */

bool __thiscall Json::Value::isMember(Value *this,char *param_1,char *param_2)

{
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *this_00;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  long in_FS_OFFSET;
  bool bVar2;
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    bVar2 = false;
  }
  else {
    if (this[8] != (Value)0x7) {
      find((char *)this,param_1);
      goto LAB_001048b0;
    }
    this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
    local_30 = ((int)param_2 - (int)param_1) * 4;
    local_38 = param_1;
    p_Var1 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(this_00,(CZString *)&local_38);
    bVar2 = this_00 + 8 != p_Var1;
    if ((param_1 != (char *)0x0) && (((byte)local_30 & 3) == 1)) {
      free(param_1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
LAB_001048b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::isMember(std::__cxx11::string const&) const */

bool __thiscall Json::Value::isMember(Value *this,string *param_1)

{
  void *__ptr;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *this_00;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  long in_FS_OFFSET;
  bool bVar2;
  void *local_38;
  int local_30;
  long local_20;
  
  __ptr = *(void **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    bVar2 = false;
  }
  else {
    if (this[8] != (Value)0x7) {
      find((char *)this,(char *)param_1);
      goto LAB_00104960;
    }
    this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
    local_30 = (int)*(undefined8 *)(param_1 + 8) << 2;
    local_38 = __ptr;
    p_Var1 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(this_00,(CZString *)&local_38);
    bVar2 = this_00 + 8 != p_Var1;
    if ((__ptr != (void *)0x0) && (((byte)local_30 & 3) == 1)) {
      free(__ptr);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
LAB_00104960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::operator[](std::__cxx11::string const&) const */

_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
* __thiscall Json::Value::operator[](Value *this,string *param_1)

{
  void *__ptr;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var2;
  long in_FS_OFFSET;
  void *local_38;
  int local_30;
  long local_20;
  
  __ptr = *(void **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] != (Value)0x0) {
    if (this[8] != (Value)0x7) {
      find((char *)this,(char *)param_1);
      goto LAB_00104a63;
    }
    p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
               **)this;
    local_30 = (int)*(undefined8 *)(param_1 + 8) << 2;
    local_38 = __ptr;
    p_Var2 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(p_Var1,(CZString *)&local_38);
    if (p_Var2 != p_Var1 + 8) {
      if ((__ptr != (void *)0x0) && (((byte)local_30 & 3) == 1)) {
        free(__ptr);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return p_Var2 + 0x30;
      }
      goto LAB_00104a63;
    }
    if ((__ptr != (void *)0x0) && (((byte)local_30 & 3) == 1)) {
      free(__ptr);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    p_Var1 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)nullSingleton();
    return p_Var1;
  }
LAB_00104a63:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Path::addPathInArg(std::__cxx11::string const&, std::vector<Json::PathArgument const*,
   std::allocator<Json::PathArgument const*> > const&,
   __gnu_cxx::__normal_iterator<Json::PathArgument const* const*, std::vector<Json::PathArgument
   const*, std::allocator<Json::PathArgument const*> > >&, Json::PathArgument::Kind) */

void __thiscall
Json::Path::addPathInArg(Path *this,undefined8 param_2_00,long param_2,long *param_3,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)*param_3;
  if (plVar1 == *(long **)(param_2 + 8)) {
    return;
  }
  plVar2 = (long *)*plVar1;
  if (*(int *)((long)plVar2 + 0x24) == param_5) {
    plVar3 = *(long **)(this + 8);
    *param_3 = (long)(plVar1 + 1);
    if (plVar3 == *(long **)(this + 0x10)) {
      std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::
      _M_realloc_insert<Json::PathArgument_const&>
                ((vector<Json::PathArgument,std::allocator<Json::PathArgument>> *)this,plVar3,plVar2
                );
      return;
    }
    lVar4 = plVar2[1];
    *plVar3 = (long)(plVar3 + 2);
    std::__cxx11::string::_M_construct<char*>(plVar3,*plVar2,lVar4 + *plVar2);
    plVar3[4] = plVar2[4];
    *(long *)(this + 8) = *(long *)(this + 8) + 0x28;
  }
  return;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::erase(Json::Value::CZString const&) [clone .isra.0] */

void __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::erase(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
        *this,CZString *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  void *pvVar3;
  _Rb_tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  
  auVar5 = equal_range(this,param_1);
  p_Var4 = auVar5._8_8_;
  if ((auVar5._0_8_ == *(_Rb_tree_node_base **)(this + 0x18)) &&
     (p_Var4 == (_Rb_tree_node_base *)(this + 8))) {
    _M_erase(*(_Rb_tree_node **)(this + 0x10));
    *(_Rb_tree_node_base **)(this + 0x18) = p_Var4;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree_node_base **)(this + 0x20) = p_Var4;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    p_Var1 = auVar5._0_8_;
    while (p_Var4 != p_Var1) {
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var1);
      pvVar3 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var1,(_Rb_tree_node_base *)(this + 8));
      Json::Value::~Value((Value *)((long)pvVar3 + 0x30));
      if ((*(void **)((long)pvVar3 + 0x20) != (void *)0x0) &&
         ((*(byte *)((long)pvVar3 + 0x28) & 3) == 1)) {
        free(*(void **)((long)pvVar3 + 0x20));
      }
      operator_delete(pvVar3,0x58);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      p_Var1 = p_Var2;
    }
  }
  return;
}



/* Json::Value::removeMember(char const*) */

void __thiscall Json::Value::removeMember(Value *this,char *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] != (Value)0x0) {
    if (this[8] != (Value)0x7) {
      removeMember((char *)this);
      goto LAB_00104c53;
    }
    sVar1 = strlen(param_1);
    local_30 = (int)sVar1 << 2;
    local_38 = param_1;
    std::
    _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
    ::erase(*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              **)this,(CZString *)&local_38);
    if (((byte)local_30 & 3) == 1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(param_1);
        return;
      }
      goto LAB_00104c53;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c53:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::removeMember(std::__cxx11::string const&) */

void __thiscall Json::Value::removeMember(Value *this,string *param_1)

{
  char *__s;
  size_t sVar1;
  long in_FS_OFFSET;
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] != (Value)0x0) {
    if (this[8] != (Value)0x7) {
      removeMember((char *)this);
      goto LAB_00104cf3;
    }
    __s = *(char **)param_1;
    sVar1 = strlen(__s);
    local_30 = (int)sVar1 << 2;
    local_38 = __s;
    std::
    _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
    ::erase(*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              **)this,(CZString *)&local_38);
    if (((byte)local_30 & 3) == 1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__s);
        return;
      }
      goto LAB_00104cf3;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104cf3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::operator[](unsigned int) */

long __thiscall Json::Value::operator[](Value *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  Value *pVVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  void *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  ostringstream local_1b8 [376];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    local_1f0 = 6;
    local_1e0 = (undefined1  [16])0x0;
    local_1e8 = 0;
    local_1f8 = operator_new(0x30);
    *(undefined4 *)((long)local_1f8 + 8) = 0;
    *(undefined8 *)((long)local_1f8 + 0x10) = 0;
    *(long *)((long)local_1f8 + 0x18) = (long)local_1f8 + 8;
    *(long *)((long)local_1f8 + 0x20) = (long)local_1f8 + 8;
    *(undefined8 *)((long)local_1f8 + 0x28) = 0;
    swap((Value *)&local_1f8,this);
    ~Value((Value *)&local_1f8);
  }
  else if (this[8] != (Value)0x6) {
    std::__cxx11::ostringstream::ostringstream(local_1b8);
    std::operator<<((ostream *)local_1b8,
                    "in Json::Value::operator[](ArrayIndex): requires arrayValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar9 = param_1 >> 2;
  lVar5 = *(long *)(*(long *)this + 0x10);
  lVar8 = *(long *)this + 8;
  lVar7 = lVar8;
  if (lVar5 != 0) {
    do {
      while (lVar4 = lVar5, *(void **)(lVar4 + 0x20) == (void *)0x0) {
        if (*(uint *)(lVar4 + 0x28) < param_1) {
          lVar5 = *(long *)(lVar4 + 0x18);
          goto LAB_00104e07;
        }
LAB_00104dcf:
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar7 = lVar4;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00104e0c;
      }
      uVar6 = *(uint *)(lVar4 + 0x28) >> 2;
      uVar1 = uVar9;
      if (uVar6 <= uVar9) {
        uVar1 = uVar6;
      }
      iVar2 = memcmp(*(void **)(lVar4 + 0x20),(void *)0x0,(ulong)uVar1);
      if ((-1 < iVar2) && ((iVar2 != 0 || (uVar9 <= uVar6)))) goto LAB_00104dcf;
      lVar5 = *(long *)(lVar4 + 0x18);
LAB_00104e07:
      lVar4 = lVar7;
    } while (lVar5 != 0);
LAB_00104e0c:
    bVar10 = lVar8 != lVar4;
    lVar8 = lVar4;
    if (bVar10) {
      if (*(void **)(lVar4 + 0x20) == (void *)0x0) {
        if (param_1 == *(uint *)(lVar4 + 0x28)) goto LAB_00104e38;
      }
      else if ((uVar9 == *(uint *)(lVar4 + 0x28) >> 2) &&
              (iVar2 = memcmp(*(void **)(lVar4 + 0x20),(void *)0x0,(ulong)uVar9), iVar2 == 0)) {
LAB_00104e38:
        lVar4 = lVar4 + 0x30;
        goto LAB_00104e3c;
      }
    }
  }
  pVVar3 = (Value *)nullSingleton();
  local_1f8 = (void *)0x0;
  local_1f0 = CONCAT44(local_1f0._4_4_,uVar9 * 4 | param_1 & 3);
  Value((Value *)&local_1e8,pVVar3);
  lVar4 = std::
          _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
          ::_M_emplace_hint_unique<std::pair<Json::Value::CZString_const,Json::Value>&>
                    (*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                       **)this,lVar8,&local_1f8);
  lVar4 = lVar4 + 0x30;
  ~Value((Value *)&local_1e8);
  if ((local_1f8 != (void *)0x0) && (((byte)local_1f0 & 3) == 1)) {
    free(local_1f8);
  }
LAB_00104e3c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



/* Json::Value::resize(unsigned int) */

void __thiscall Json::Value::resize(Value *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  ostringstream local_1a8 [376];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    local_1d0 = 6;
    local_1c0 = (undefined1  [16])0x0;
    local_1c8 = 0;
    local_1d8 = operator_new(0x30);
    *(undefined4 *)((long)local_1d8 + 8) = 0;
    *(undefined8 *)((long)local_1d8 + 0x10) = 0;
    *(long *)((long)local_1d8 + 0x18) = (long)local_1d8 + 8;
    *(long *)((long)local_1d8 + 0x20) = (long)local_1d8 + 8;
    *(undefined8 *)((long)local_1d8 + 0x28) = 0;
    swap((Value *)&local_1d8,this);
    ~Value((Value *)&local_1d8);
    if (this[8] == (Value)0x6) goto LAB_00104f7a;
    if (this[8] != (Value)0x7) goto LAB_00104f89;
    uVar3 = *(uint *)(*(long *)this + 0x28);
LAB_0010504f:
    if (param_1 != 0) {
      if (uVar3 < param_1) {
LAB_00104f98:
        do {
          uVar2 = uVar3 + 1;
          operator[](this,uVar3);
          uVar3 = uVar2;
        } while (uVar2 < param_1);
      }
      else if (param_1 < uVar3) {
        do {
          local_1d0 = CONCAT44(local_1d0._4_4_,param_1);
          param_1 = param_1 + 1;
          local_1d8 = (void *)0x0;
          std::
          _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
          ::erase(*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                    **)this,(CZString *)&local_1d8);
        } while (param_1 != uVar3);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001050f5;
    }
  }
  else {
    if (this[8] != (Value)0x6) {
      std::__cxx11::ostringstream::ostringstream(local_1a8);
      std::operator<<((ostream *)local_1a8,"in Json::Value::resize(): requires arrayValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00104f7a:
    if (*(long *)(*(long *)this + 0x28) != 0) {
      lVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)this + 8));
      uVar3 = *(int *)(lVar1 + 0x28) + 1;
      goto LAB_0010504f;
    }
LAB_00104f89:
    uVar3 = 0;
    if (param_1 != 0) goto LAB_00104f98;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    clear(this);
    return;
  }
LAB_001050f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::operator[](int) */

void __thiscall Json::Value::operator[](Value *this,int param_1)

{
  long in_FS_OFFSET;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,
                    "in Json::Value::operator[](int index): index cannot be negative");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator[](this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::insert(unsigned int, Json::Value&&) */

undefined8 __thiscall Json::Value::insert(Value *this,uint param_1,Value *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  ostringstream aoStack_1b8 [376];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
LAB_00105250:
    uVar4 = 0;
    if (param_1 != 0) goto LAB_00105229;
  }
  else {
    if (this[8] != (Value)0x6) {
      std::__cxx11::ostringstream::ostringstream(aoStack_1b8);
      std::operator<<((ostream *)aoStack_1b8,"in Json::Value::insert: requires arrayValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)(*(long *)this + 0x28) == 0) goto LAB_00105250;
    lVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(*(long *)this + 8));
    uVar4 = 0;
    uVar5 = *(int *)(lVar1 + 0x28) + 1;
    if (uVar5 < param_1) goto LAB_00105229;
    while (param_1 < uVar5) {
      pVVar2 = (Value *)operator[](this,uVar5 - 1);
      pVVar3 = (Value *)operator[](this,uVar5);
      swap(pVVar2,pVVar3);
      uVar5 = uVar5 - 1;
    }
  }
  pVVar2 = (Value *)operator[](this,param_1);
  swap(param_2,pVVar2);
  uVar4 = 1;
LAB_00105229:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::insert(unsigned int, Json::Value const&) */

undefined4 __thiscall Json::Value::insert(Value *this,uint param_1,Value *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Value(aVStack_48,param_2);
  uVar1 = insert(this,param_1,aVStack_48);
  ~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::resolveReference(char const*) */

long __thiscall Json::Value::resolveReference(Value *this,char *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  Value *pVVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_208;
  int local_200;
  void *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  ostringstream local_1b8 [376];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    local_1f0 = 7;
    local_1e0 = (undefined1  [16])0x0;
    local_1e8 = 0;
    local_1f8 = operator_new(0x30);
    *(undefined4 *)((long)local_1f8 + 8) = 0;
    *(undefined8 *)((long)local_1f8 + 0x10) = 0;
    *(long *)((long)local_1f8 + 0x18) = (long)local_1f8 + 8;
    *(long *)((long)local_1f8 + 0x20) = (long)local_1f8 + 8;
    *(undefined8 *)((long)local_1f8 + 0x28) = 0;
    swap((Value *)&local_1f8,this);
    ~Value((Value *)&local_1f8);
  }
  else if (this[8] != (Value)0x7) {
    std::__cxx11::ostringstream::ostringstream(local_1b8);
    std::operator<<((ostream *)local_1b8,"in Json::Value::resolveReference(): requires objectValue")
    ;
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sVar5 = strlen(param_1);
  uVar8 = (uint)sVar5 & 0x3fffffff;
  local_200 = (uint)sVar5 * 4;
  lVar2 = *(long *)(*(long *)this + 0x10);
  lVar10 = *(long *)this + 8;
  lVar9 = lVar10;
  local_208 = param_1;
  if (lVar2 != 0) {
    do {
      while( true ) {
        lVar7 = lVar2;
        cVar3 = CZString::operator<((CZString *)(lVar7 + 0x20),(CZString *)&local_208);
        plVar1 = (long *)(lVar7 + 0x18);
        if (cVar3 == '\0') break;
        lVar7 = lVar9;
        lVar2 = *plVar1;
        if (*plVar1 == 0) goto LAB_0010540b;
      }
      lVar9 = lVar7;
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
LAB_0010540b:
    bVar11 = lVar10 != lVar7;
    lVar10 = lVar7;
    if (bVar11) {
      if (*(void **)(lVar7 + 0x20) == (void *)0x0) {
        if (*(int *)(lVar7 + 0x28) == local_200) goto LAB_00105433;
      }
      else if ((uVar8 == *(uint *)(lVar7 + 0x28) >> 2) &&
              (iVar4 = memcmp(*(void **)(lVar7 + 0x20),param_1,(ulong)uVar8), iVar4 == 0)) {
LAB_00105433:
        lVar7 = lVar7 + 0x30;
        goto LAB_00105437;
      }
    }
  }
  pVVar6 = (Value *)nullSingleton();
  CZString::CZString((CZString *)&local_1f8,(CZString *)&local_208);
  Value((Value *)&local_1e8,pVVar6);
  lVar7 = std::
          _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
          ::_M_emplace_hint_unique<std::pair<Json::Value::CZString_const,Json::Value>&>
                    (*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                       **)this,lVar10,(CZString *)&local_1f8);
  lVar7 = lVar7 + 0x30;
  ~Value((Value *)&local_1e8);
  if ((local_1f8 != (void *)0x0) && (((byte)local_1f0 & 3) == 1)) {
    free(local_1f8);
  }
LAB_00105437:
  if (((byte)local_200 & 3) == 1) {
    free(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



/* Json::Value::operator[](Json::StaticString const&) */

void __thiscall Json::Value::operator[](Value *this,StaticString *param_1)

{
  resolveReference(this,*(char **)param_1);
  return;
}



/* Json::Value::resolveReference(char const*, char const*) */

long __thiscall Json::Value::resolveReference(Value *this,char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  Value *pVVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_208;
  uint local_200;
  void *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  ostringstream local_1b8 [376];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x0) {
    local_1f0 = 7;
    local_1e0 = (undefined1  [16])0x0;
    local_1e8 = 0;
    local_1f8 = operator_new(0x30);
    *(undefined4 *)((long)local_1f8 + 8) = 0;
    *(undefined8 *)((long)local_1f8 + 0x10) = 0;
    *(long *)((long)local_1f8 + 0x18) = (long)local_1f8 + 8;
    *(long *)((long)local_1f8 + 0x20) = (long)local_1f8 + 8;
    *(undefined8 *)((long)local_1f8 + 0x28) = 0;
    swap((Value *)&local_1f8,this);
    ~Value((Value *)&local_1f8);
  }
  else if (this[8] != (Value)0x7) {
    std::__cxx11::ostringstream::ostringstream(local_1b8);
    std::operator<<((ostream *)local_1b8,
                    "in Json::Value::resolveReference(key, end): requires objectValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = (int)param_2 - (int)param_1;
  uVar10 = uVar5 & 0x3fffffff;
  uVar5 = uVar5 * 4 | 2;
  lVar4 = *(long *)(*(long *)this + 0x10);
  lVar8 = *(long *)this + 8;
  lVar6 = lVar8;
  local_208 = param_1;
  local_200 = uVar5;
  if (lVar4 == 0) {
LAB_001056bd:
    pVVar3 = (Value *)nullSingleton();
    CZString::CZString((CZString *)&local_1f8,(CZString *)&local_208);
    Value((Value *)&local_1e8,pVVar3);
    lVar4 = std::
            _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
            ::_M_emplace_hint_unique<std::pair<Json::Value::CZString_const,Json::Value>&>
                      (*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                         **)this,lVar8,(CZString *)&local_1f8);
    lVar4 = lVar4 + 0x30;
    ~Value((Value *)&local_1e8);
    if ((local_1f8 != (void *)0x0) && (((byte)local_1f0 & 3) == 1)) {
      free(local_1f8);
    }
LAB_0010571b:
    if (param_1 == (char *)0x0) goto LAB_00105730;
  }
  else {
    do {
      while (lVar7 = lVar4, *(void **)(lVar7 + 0x20) == (void *)0x0) {
        if (*(uint *)(lVar7 + 0x28) < uVar5) {
          lVar4 = *(long *)(lVar7 + 0x18);
          goto LAB_00105692;
        }
LAB_00105657:
        lVar4 = *(long *)(lVar7 + 0x10);
        lVar6 = lVar7;
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00105697;
      }
      uVar9 = *(uint *)(lVar7 + 0x28) >> 2;
      uVar1 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = uVar9;
      }
      iVar2 = memcmp(*(void **)(lVar7 + 0x20),param_1,(ulong)uVar1);
      if ((-1 < iVar2) && ((iVar2 != 0 || (uVar10 <= uVar9)))) goto LAB_00105657;
      lVar4 = *(long *)(lVar7 + 0x18);
LAB_00105692:
      lVar7 = lVar6;
    } while (lVar4 != 0);
LAB_00105697:
    bVar11 = lVar8 == lVar7;
    lVar8 = lVar7;
    if (bVar11) goto LAB_001056bd;
    if (*(void **)(lVar7 + 0x20) == (void *)0x0) {
      lVar4 = lVar7 + 0x30;
      if (uVar5 != *(uint *)(lVar7 + 0x28)) goto LAB_001056bd;
      goto LAB_0010571b;
    }
    if (uVar10 != *(uint *)(lVar7 + 0x28) >> 2) goto LAB_001056bd;
    lVar4 = lVar7 + 0x30;
    iVar2 = memcmp(*(void **)(lVar7 + 0x20),param_1,(ulong)uVar10);
    if (iVar2 != 0) goto LAB_001056bd;
  }
  if (((byte)local_200 & 3) == 1) {
    free(param_1);
  }
LAB_00105730:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



/* Json::Value::demand(char const*, char const*) */

void __thiscall Json::Value::demand(Value *this,char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  ostringstream aoStack_188 [376];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[8] != (Value)0x7) && (this[8] != (Value)0x0)) {
    std::__cxx11::ostringstream::ostringstream(aoStack_188);
    std::operator<<((ostream *)aoStack_188,
                    "in Json::Value::demand(begin, end): requires objectValue or nullValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    resolveReference(this,param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::operator[](char const*) */

void __thiscall Json::Value::operator[](Value *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  resolveReference(this,param_1,param_1 + sVar1);
  return;
}



/* Json::Value::operator[](std::__cxx11::string const&) */

void __thiscall Json::Value::operator[](Value *this,string *param_1)

{
  resolveReference(this,*(char **)param_1,*(char **)param_1 + *(long *)(param_1 + 8));
  return;
}



/* Json::Path::make(Json::Value&) const */

void __thiscall Json::Path::make(Path *this,Value *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    while (*(int *)((long)puVar3 + 0x24) != 1) {
      if (*(int *)((long)puVar3 + 0x24) == 2) {
        param_1 = (Value *)Value::resolveReference
                                     (param_1,(char *)*puVar3,(char *)*puVar3 + puVar3[1]);
      }
      puVar3 = puVar3 + 5;
      if (puVar2 == puVar3) {
        return;
      }
    }
    puVar1 = (uint *)(puVar3 + 4);
    puVar3 = puVar3 + 5;
    param_1 = (Value *)Value::operator[](param_1,*puVar1);
  } while( true );
}



/* Json::Value::removeIndex(unsigned int, Json::Value*) */

undefined8 __thiscall Json::Value::removeIndex(Value *this,uint param_1,Value *param_2)

{
  _Rb_tree_node_base *p_Var1;
  CZString *this_00;
  char cVar2;
  undefined1 uVar3;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var4;
  Value *pVVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  _Rb_tree_node_base *p_Var11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  uint local_9c;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[8] == (Value)0x6) {
    local_88 = 0;
    p_Var13 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
    local_80 = param_1;
    p_Var4 = (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *)std::
                _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                ::find(p_Var13,(CZString *)&local_88);
    if (p_Var4 != p_Var13 + 8) {
      if (param_2 == (Value *)0x0) {
LAB_00105c69:
        if (*(long *)(p_Var13 + 0x28) == 0) {
LAB_00105c10:
          local_9c = 0xffffffff;
        }
        else {
          lVar10 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(p_Var13 + 8));
          local_9c = *(uint *)(lVar10 + 0x28);
        }
      }
      else {
        Value((Value *)&local_68,(Value *)(p_Var4 + 0x30));
        swap((Value *)&local_68,param_2);
        ~Value((Value *)&local_68);
        if (this[8] == (Value)0x6) {
          p_Var13 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                      **)this;
          goto LAB_00105c69;
        }
        if (this[8] != (Value)0x7) goto LAB_00105c10;
        local_9c = (int)*(undefined8 *)(*(long *)this + 0x28) - 1;
      }
      if (param_1 < local_9c) {
        do {
          uVar14 = param_1 + 1;
          local_78 = 0;
          local_70 = param_1;
          pVVar5 = (Value *)operator[](this,uVar14);
          p_Var13 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                      **)this;
          p_Var6 = *(_Rb_tree_node_base **)(p_Var13 + 0x10);
          p_Var7 = (_Rb_tree_node_base *)(p_Var13 + 8);
          p_Var12 = p_Var7;
          if (p_Var6 == (_Rb_tree_node_base *)0x0) {
LAB_00105ac0:
            p_Var6 = (_Rb_tree_node_base *)operator_new(0x58);
            this_00 = (CZString *)(p_Var6 + 0x20);
            CZString::CZString(this_00,(CZString *)&local_78);
            *(ushort *)(p_Var6 + 0x38) = *(ushort *)(p_Var6 + 0x38) & 0xfe00;
            *(undefined8 *)(p_Var6 + 0x40) = 0;
            *(undefined1 (*) [16])(p_Var6 + 0x48) = (undefined1  [16])0x0;
            auVar15 = std::
                      _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                      ::_M_get_insert_hint_unique_pos(p_Var13,p_Var12,this_00);
            p_Var11 = auVar15._8_8_;
            p_Var12 = auVar15._0_8_;
            if (p_Var11 == (_Rb_tree_node_base *)0x0) {
              ~Value((Value *)(p_Var6 + 0x30));
              if ((*(void **)(p_Var6 + 0x20) != (void *)0x0) && (((byte)p_Var6[0x28] & 3) == 1)) {
                free(*(void **)(p_Var6 + 0x20));
              }
              operator_delete(p_Var6,0x58);
            }
            else {
              if ((p_Var7 == p_Var11) || (p_Var12 != (_Rb_tree_node_base *)0x0)) {
                uVar3 = true;
              }
              else {
                uVar3 = CZString::operator<(this_00,(CZString *)(p_Var11 + 0x20));
              }
              std::_Rb_tree_insert_and_rebalance((bool)uVar3,p_Var6,p_Var11,p_Var7);
              *(long *)(p_Var13 + 0x28) = *(long *)(p_Var13 + 0x28) + 1;
              p_Var12 = p_Var6;
            }
          }
          else {
            do {
              while( true ) {
                cVar2 = CZString::operator<((CZString *)(p_Var6 + 0x20),(CZString *)&local_78);
                p_Var11 = p_Var6 + 0x10;
                p_Var1 = p_Var6 + 0x18;
                if (cVar2 != '\0') break;
                p_Var12 = p_Var6;
                p_Var6 = *(_Rb_tree_node_base **)p_Var11;
                if (*(_Rb_tree_node_base **)p_Var11 == (_Rb_tree_node_base *)0x0) goto LAB_00105aa3;
              }
              p_Var6 = *(_Rb_tree_node_base **)p_Var1;
            } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_00105aa3:
            if ((p_Var12 == p_Var7) ||
               (cVar2 = CZString::operator<((CZString *)&local_78,(CZString *)(p_Var12 + 0x20)),
               cVar2 != '\0')) goto LAB_00105ac0;
          }
          Value((Value *)&local_68,pVVar5);
          swap((Value *)&local_68,(Value *)(p_Var12 + 0x30));
          ~Value((Value *)&local_68);
          param_1 = uVar14;
        } while (uVar14 < local_9c);
      }
      local_68 = 0;
      local_60 = local_9c;
      p_Var13 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                  **)this;
      p_Var7 = (_Rb_tree_node_base *)
               std::
               _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
               ::find(p_Var13,(CZString *)&local_68);
      pvVar8 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var7,(_Rb_tree_node_base *)(p_Var13 + 8))
      ;
      ~Value((Value *)((long)pvVar8 + 0x30));
      if ((*(void **)((long)pvVar8 + 0x20) != (void *)0x0) &&
         ((*(byte *)((long)pvVar8 + 0x28) & 3) == 1)) {
        free(*(void **)((long)pvVar8 + 0x20));
      }
      operator_delete(pvVar8,0x58);
      *(long *)(p_Var13 + 0x28) = *(long *)(p_Var13 + 0x28) + -1;
      uVar9 = 1;
      goto LAB_00105be2;
    }
  }
  uVar9 = 0;
LAB_00105be2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* Json::Value::append(Json::Value&&) */

Value * __thiscall Json::Value::append(Value *this,Value *param_1)

{
  Value VVar1;
  undefined1 uVar2;
  _Rb_tree_node_base *p_Var3;
  long lVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *this_00;
  uint uVar6;
  Value *this_01;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  ostringstream local_1a8 [376];
  long local_30;
  
  VVar1 = this[8];
  uVar6 = (uint)(byte)VVar1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (VVar1 == (Value)0x0) {
    local_1d0 = 6;
    local_1c0 = (undefined1  [16])0x0;
    local_1c8 = 0;
    local_1d8 = operator_new(0x30);
    *(undefined4 *)((long)local_1d8 + 8) = 0;
    *(undefined8 *)((long)local_1d8 + 0x10) = 0;
    *(long *)((long)local_1d8 + 0x18) = (long)local_1d8 + 8;
    *(long *)((long)local_1d8 + 0x20) = (long)local_1d8 + 8;
    *(undefined8 *)((long)local_1d8 + 0x28) = 0;
    swap((Value *)&local_1d8,this);
    ~Value((Value *)&local_1d8);
    this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
    if (this[8] != (Value)0x6) {
      if (this[8] == (Value)0x7) {
        uVar6 = *(uint *)(this_00 + 0x28);
      }
      goto LAB_00105d18;
    }
  }
  else {
    if (VVar1 != (Value)0x6) {
      std::__cxx11::ostringstream::ostringstream(local_1a8);
      std::operator<<((ostream *)local_1a8,"in Json::Value::append: requires arrayValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    this_00 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                **)this;
  }
  uVar6 = 0;
  if (*(long *)(this_00 + 0x28) != 0) {
    lVar4 = std::_Rb_tree_decrement((_Rb_tree_node_base *)(this_00 + 8));
    uVar6 = *(int *)(lVar4 + 0x28) + 1;
  }
LAB_00105d18:
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x58);
  *(ushort *)(p_Var3 + 0x38) = *(ushort *)(p_Var3 + 0x38) & 0xfe00;
  *(uint *)(p_Var3 + 0x28) = uVar6;
  this_01 = (Value *)(p_Var3 + 0x30);
  *(undefined8 *)(p_Var3 + 0x20) = 0;
  *(undefined8 *)(p_Var3 + 0x40) = 0;
  *(undefined1 (*) [16])(p_Var3 + 0x48) = (undefined1  [16])0x0;
  swap(this_01,param_1);
  auVar7 = std::
           _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
           ::_M_get_insert_unique_pos(this_00,(CZString *)(p_Var3 + 0x20));
  p_Var5 = auVar7._8_8_;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    ~Value(this_01);
    if ((*(void **)(p_Var3 + 0x20) != (void *)0x0) && (((byte)p_Var3[0x28] & 3) == 1)) {
      free(*(void **)(p_Var3 + 0x20));
    }
    this_01 = (Value *)(auVar7._0_8_ + 0x30);
    operator_delete(p_Var3,0x58);
  }
  else {
    uVar2 = true;
    if ((auVar7._0_8_ == 0) && (p_Var5 != (_Rb_tree_node_base *)(this_00 + 8))) {
      uVar2 = CZString::operator<((CZString *)(p_Var3 + 0x20),(CZString *)(p_Var5 + 0x20));
    }
    std::_Rb_tree_insert_and_rebalance
              ((bool)uVar2,p_Var3,p_Var5,(_Rb_tree_node_base *)(this_00 + 8));
    *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::append(Json::Value const&) */

undefined8 __thiscall Json::Value::append(Value *this,Value *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  Value aVStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Value(aVStack_48,param_1);
  uVar1 = append(this,aVStack_48);
  ~Value(aVStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::getMemberNames[abi:cxx11]() const */

void Json::Value::getMemberNames_abi_cxx11_(void)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_1c8 [16];
  long *local_1b8;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)in_RSI[1] == '\0') {
    *(undefined8 *)in_RDI[1] = 0;
    *in_RDI = (undefined1  [16])0x0;
LAB_001060cf:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00106210:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((char)in_RSI[1] != '\a') {
    std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_1a8);
    std::operator<<((ostream *)&local_1a8,
                    "in Json::Value::getMemberNames(), value must be objectValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_1b8 = (long *)0x0;
  lVar6 = *in_RSI;
  local_1c8 = (undefined1  [16])0x0;
  uVar5 = *(ulong *)(lVar6 + 0x28);
  if (uVar5 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar5 != 0) {
    local_1c8._8_8_ = operator_new(uVar5 * 0x20);
    local_1b8 = (long *)(local_1c8._8_8_ + uVar5 * 0x20);
    lVar6 = *in_RSI;
    local_1c8._0_8_ = local_1c8._8_8_;
  }
  p_Var1 = *(_Rb_tree_node_base **)(lVar6 + 0x18);
joined_r0x00105fe2:
  if (p_Var1 != (_Rb_tree_node_base *)(lVar6 + 8)) {
    do {
      lVar4 = *(long *)(p_Var1 + 0x20);
      local_1a8 = (undefined8 *)&local_198;
      if ((lVar4 == 0) && ((ulong)(*(uint *)(p_Var1 + 0x28) >> 2) != 0)) {
        std::__throw_logic_error("basic_string: construction from null is not valid");
        goto LAB_00106210;
      }
      std::__cxx11::string::_M_construct<char_const*>
                (&local_1a8,lVar4,(ulong)(*(uint *)(p_Var1 + 0x28) >> 2) + lVar4);
      if ((long *)local_1c8._8_8_ == local_1b8) {
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)local_1c8,
                   local_1c8._8_8_,&local_1a8);
        if (local_1a8 != (undefined8 *)&local_198) goto code_r0x00106084;
      }
      else {
        *(long **)local_1c8._8_8_ = (long *)(local_1c8._8_8_ + 0x10);
        if (local_1a8 == (undefined8 *)&local_198) {
          uVar5 = local_1a0 + 1;
          uVar2 = (uint)uVar5;
          if (uVar2 < 8) {
            if ((uVar5 & 4) == 0) {
              if (uVar2 != 0) {
                *(undefined1 *)(local_1c8._8_8_ + 0x10) = (undefined1)local_198;
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)(local_1c8._8_8_ + (uVar5 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)&local_1a0 + (uVar5 & 0xffffffff) + 6);
                }
              }
            }
            else {
              *(undefined4 *)(local_1c8._8_8_ + 0x10) = local_198;
              *(undefined4 *)(local_1c8._8_8_ + (uVar5 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)&local_1a0 + (uVar5 & 0xffffffff) + 4);
            }
          }
          else {
            *(long *)(local_1c8._8_8_ + 0x10) = CONCAT44(uStack_194,local_198);
            *(undefined8 *)(local_1c8._8_8_ + (uVar5 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)&local_1a0 + (uVar5 & 0xffffffff));
            lVar4 = (local_1c8._8_8_ + 0x10) -
                    ((ulong)(local_1c8._8_8_ + 0x18) & 0xfffffffffffffff8);
            uVar2 = uVar2 + (int)lVar4 & 0xfffffff8;
            if (7 < uVar2) {
              uVar3 = 0;
              do {
                uVar5 = (ulong)uVar3;
                uVar3 = uVar3 + 8;
                *(undefined8 *)(((ulong)(local_1c8._8_8_ + 0x18) & 0xfffffffffffffff8) + uVar5) =
                     *(undefined8 *)((long)&local_198 + (uVar5 - lVar4));
              } while (uVar3 < uVar2);
            }
          }
        }
        else {
          *(undefined8 **)local_1c8._8_8_ = local_1a8;
          *(long *)(local_1c8._8_8_ + 0x10) = CONCAT44(uStack_194,local_198);
        }
        *(long *)(local_1c8._8_8_ + 8) = local_1a0;
        local_1c8._8_8_ = (long *)(local_1c8._8_8_ + 0x20);
      }
      p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var1);
      if ((_Rb_tree_node_base *)(lVar6 + 8) == p_Var1) break;
    } while( true );
  }
  *(undefined8 *)*in_RDI = local_1c8._0_8_;
  *(undefined8 *)(*in_RDI + 8) = local_1c8._8_8_;
  *(long **)in_RDI[1] = local_1b8;
  goto LAB_001060cf;
code_r0x00106084:
  operator_delete(local_1a8,CONCAT44(uStack_194,local_198) + 1);
  p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var1);
  goto joined_r0x00105fe2;
}



/* Json::PathArgument& std::vector<Json::PathArgument, std::allocator<Json::PathArgument>
   >::emplace_back<Json::PathArgument>(Json::PathArgument&&) [clone .isra.0] */

PathArgument * __thiscall
std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::emplace_back<Json::PathArgument>
          (vector<Json::PathArgument,std::allocator<Json::PathArgument>> *this,PathArgument *param_1
          )

{
  PathArgument *pPVar1;
  long *plVar2;
  PathArgument *extraout_RAX;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 == *(long **)(this + 0x10)) {
    _M_realloc_insert<Json::PathArgument>();
    return extraout_RAX;
  }
  pPVar1 = param_1 + 0x10;
  *plVar2 = (long)(plVar2 + 2);
  if (*(PathArgument **)param_1 == pPVar1) {
    lVar4 = *(long *)(param_1 + 8);
    uVar5 = lVar4 + 1;
    uVar6 = (uint)uVar5;
    if (uVar6 < 8) {
      if ((uVar5 & 4) != 0) {
        *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((long)plVar2 + (uVar5 & 0xffffffff) + 0xc) =
             *(undefined4 *)(param_1 + (uVar5 & 0xffffffff) + 0xc);
        lVar4 = *(long *)(param_1 + 8);
        goto LAB_00106260;
      }
      if (uVar6 == 0) goto LAB_00106260;
      *(PathArgument *)(plVar2 + 2) = param_1[0x10];
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)((long)plVar2 + (uVar5 & 0xffffffff) + 0xe) =
             *(undefined2 *)(param_1 + (uVar5 & 0xffffffff) + 0xe);
        lVar4 = *(long *)(param_1 + 8);
        goto LAB_00106260;
      }
    }
    else {
      plVar2[2] = *(long *)(param_1 + 0x10);
      *(undefined8 *)((long)plVar2 + (uVar5 & 0xffffffff) + 8) =
           *(undefined8 *)(param_1 + (uVar5 & 0xffffffff) + 8);
      lVar4 = (long)(plVar2 + 2) - ((ulong)(plVar2 + 3) & 0xfffffffffffffff8);
      uVar6 = uVar6 + (int)lVar4 & 0xfffffff8;
      if (7 < uVar6) {
        uVar3 = 0;
        do {
          uVar5 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(((ulong)(plVar2 + 3) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)(pPVar1 + (uVar5 - lVar4));
        } while (uVar3 < uVar6);
      }
    }
  }
  else {
    *plVar2 = (long)*(PathArgument **)param_1;
    plVar2[2] = *(long *)(param_1 + 0x10);
  }
  lVar4 = *(long *)(param_1 + 8);
LAB_00106260:
  plVar2[1] = lVar4;
  *(PathArgument **)param_1 = pPVar1;
  pPVar1 = *(PathArgument **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (PathArgument)0x0;
  plVar2[4] = (long)pPVar1;
  *(long *)(this + 8) = *(long *)(this + 8) + 0x28;
  return pPVar1;
}



/* Json::Path::makePath(std::__cxx11::string const&, std::vector<Json::PathArgument const*,
   std::allocator<Json::PathArgument const*> > const&) */

void __thiscall Json::Path::makePath(Path *this,string *param_1,vector *param_2)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong *puVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined8 local_90;
  ulong *local_88;
  long local_80;
  ulong local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [2];
  undefined8 local_48;
  long local_40;
  
  pcVar8 = *(char **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = *(undefined8 *)param_2;
  pcVar9 = pcVar8 + *(long *)(param_1 + 8);
  if (pcVar8 != pcVar9) {
    do {
      cVar2 = *pcVar8;
      if (cVar2 == '[') {
        pcVar12 = pcVar8 + 1;
        if (pcVar8[1] == '%') {
          addPathInArg(this,param_1,param_2,&local_90);
        }
        else {
          iVar7 = 0;
          for (; (pcVar9 != pcVar12 && ((byte)(*pcVar12 - 0x30U) < 10)); pcVar12 = pcVar12 + 1) {
            iVar7 = *pcVar12 + -0x30 + iVar7 * 10;
          }
          local_60 = 0;
          local_58[0] = local_58[0] & 0xffffffffffffff00;
          local_48 = CONCAT44(1,iVar7);
          local_68 = local_58;
          std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::
          emplace_back<Json::PathArgument>
                    ((vector<Json::PathArgument,std::allocator<Json::PathArgument>> *)this,
                     (PathArgument *)&local_68);
          if (local_68 != local_58) {
            operator_delete(local_68,local_58[0] + 1);
          }
        }
        if (pcVar12 == pcVar9) break;
        pcVar8 = pcVar12 + 1;
      }
      else if (cVar2 == '%') {
        pcVar8 = pcVar8 + 1;
        addPathInArg(this,param_1,param_2,&local_90);
      }
      else if ((cVar2 == '.') || (cVar2 == ']')) {
        pcVar8 = pcVar8 + 1;
      }
      else {
        pcVar12 = pcVar8;
        if (pcVar9 == pcVar8) {
          local_80 = 0;
          local_88 = local_78;
          std::__cxx11::string::_M_construct<char_const*>(&local_88,pcVar9,pcVar9);
          local_68 = local_58;
          if (local_88 != local_78) goto LAB_001064f5;
LAB_00106618:
          puVar6 = local_78;
          local_68 = local_58;
          uVar1 = local_80 + 1;
          puVar11 = local_68;
          if (7 < (uint)uVar1) {
            uVar5 = 0;
            do {
              uVar4 = (int)uVar5 + 8;
              *(undefined8 *)((long)local_68 + uVar5) = *(undefined8 *)((long)puVar6 + uVar5);
              uVar5 = (ulong)uVar4;
            } while (uVar4 < ((uint)uVar1 & 0xfffffff8));
            puVar11 = (ulong *)((long)local_68 + (ulong)uVar4);
            puVar6 = (ulong *)((ulong)uVar4 + (long)puVar6);
          }
          lVar10 = 0;
          if ((uVar1 & 4) != 0) {
            *(int *)puVar11 = (int)*puVar6;
            lVar10 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)((long)puVar11 + lVar10) = *(undefined2 *)((long)puVar6 + lVar10);
            lVar10 = lVar10 + 2;
          }
          local_60 = local_80;
          if ((uVar1 & 1) != 0) {
            *(undefined1 *)((long)puVar11 + lVar10) = *(undefined1 *)((long)puVar6 + lVar10);
          }
        }
        else {
          do {
            pcVar3 = strchr("[.",(int)*pcVar12);
            if (pcVar3 != (char *)0x0) break;
            pcVar12 = pcVar12 + 1;
          } while (pcVar9 != pcVar12);
          local_80 = 0;
          local_88 = local_78;
          std::__cxx11::string::_M_construct<char_const*>(&local_88,pcVar8,pcVar12);
          local_68 = local_58;
          pcVar8 = pcVar12;
          if (local_88 == local_78) goto LAB_00106618;
LAB_001064f5:
          local_58[0] = CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]);
          local_60 = local_80;
          local_68 = local_88;
        }
        local_80 = 0;
        local_78[0]._0_1_ = 0;
        local_48 = _LC44;
        local_88 = local_78;
        std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::
        emplace_back<Json::PathArgument>
                  ((vector<Json::PathArgument,std::allocator<Json::PathArgument>> *)this,
                   (PathArgument *)&local_68);
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        if (local_88 != local_78) {
          operator_delete(local_88,CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]) + 1);
        }
      }
    } while (pcVar8 != pcVar9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Json::Path::Path(std::__cxx11::string const&, Json::PathArgument const&, Json::PathArgument
   const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */

void __thiscall
Json::Path::Path(Path *this,string *param_1,PathArgument *param_2,PathArgument *param_3,
                PathArgument *param_4,PathArgument *param_5,PathArgument *param_6)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  local_58 = (undefined8 *)operator_new(0x28);
  *local_58 = param_2;
  puVar1 = local_58 + 5;
  local_58[1] = param_3;
  local_58[2] = param_4;
  local_58[3] = param_5;
  local_58[4] = param_6;
  local_50 = puVar1;
  local_48 = puVar1;
  makePath(this,param_1,(vector *)&local_58);
  if (local_58 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_58,(long)puVar1 - (long)local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Json::Value::toStyledString[abi:cxx11]() const */

void Json::Value::toStyledString_abi_cxx11_(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  StreamWriterBuilder aSStack_88 [48];
  long *local_58;
  ulong local_50;
  long local_48 [3];
  long local_30;
  
  plVar1 = in_RDI + 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Json::StreamWriterBuilder::StreamWriterBuilder(aSStack_88);
  if ((*(long *)(in_RSI + 0x10) == 0) || (*(long *)(*(long *)(in_RSI + 0x10) + 8) == 0)) {
    *in_RDI = (long)plVar1;
  }
  else {
    *in_RDI = (long)plVar1;
  }
  std::__cxx11::string::_M_construct<char_const*>();
  Json::writeString_abi_cxx11_((Factory *)&local_58,(Value *)aSStack_88);
  if (local_50 <= 0x3fffffffffffffffU - in_RDI[1]) {
    std::__cxx11::string::_M_append((char *)in_RDI,(ulong)local_58);
    if (local_58 != local_48) {
      operator_delete(local_58,local_48[0] + 1);
    }
    uVar2 = in_RDI[1];
    lVar3 = *in_RDI;
    if (plVar1 == (long *)lVar3) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = in_RDI[2];
    }
    if (uVar4 < uVar2 + 1) {
      std::__cxx11::string::_M_mutate((ulong)in_RDI,uVar2,(char *)0x0,0);
      lVar3 = *in_RDI;
    }
    *(undefined1 *)(lVar3 + uVar2) = 10;
    in_RDI[1] = uVar2 + 1;
    *(undefined1 *)(*in_RDI + 1 + uVar2) = 0;
    Json::StreamWriterBuilder::~StreamWriterBuilder(aSStack_88);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
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
      goto LAB_00107327;
    }
    if (__n == 0) goto LAB_00107327;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(string **)this;
LAB_00107327:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::find(Json::Value::CZString const&) */

_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
* __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::find(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
       *this,CZString *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var4;
  uint uVar5;
  uint uVar6;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var7;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var8;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var9;
  
  p_Var9 = this + 8;
  p_Var4 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
             **)(this + 0x10);
  p_Var7 = p_Var9;
  if (*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
        **)(this + 0x10) !=
      (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
       *)0x0) {
    do {
      while (p_Var8 = p_Var4, *(void **)(p_Var8 + 0x20) == (void *)0x0) {
        if (*(uint *)(p_Var8 + 0x28) < *(uint *)(param_1 + 8)) {
          p_Var4 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                     **)(p_Var8 + 0x18);
          goto LAB_00107424;
        }
LAB_001073e7:
        p_Var4 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                   **)(p_Var8 + 0x10);
        p_Var7 = p_Var8;
        if (*(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              **)(p_Var8 + 0x10) ==
            (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
             *)0x0) goto LAB_00107429;
      }
      uVar6 = *(uint *)(p_Var8 + 0x28) >> 2;
      uVar5 = *(uint *)(param_1 + 8) >> 2;
      uVar1 = uVar5;
      if (uVar6 <= uVar5) {
        uVar1 = uVar6;
      }
      iVar3 = memcmp(*(void **)(p_Var8 + 0x20),*(void **)param_1,(ulong)uVar1);
      if ((-1 < iVar3) && ((iVar3 != 0 || (uVar5 <= uVar6)))) goto LAB_001073e7;
      p_Var4 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                 **)(p_Var8 + 0x18);
LAB_00107424:
      p_Var8 = p_Var7;
    } while (p_Var4 != (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                        *)0x0);
LAB_00107429:
    if ((p_Var9 != p_Var8) &&
       (cVar2 = Json::Value::CZString::operator<(param_1,(CZString *)(p_Var8 + 0x20)), cVar2 == '\0'
       )) {
      p_Var9 = p_Var8;
    }
  }
  return p_Var9;
}



/* void std::vector<Json::PathArgument, std::allocator<Json::PathArgument>
   >::_M_realloc_insert<Json::PathArgument const&>(__gnu_cxx::__normal_iterator<Json::PathArgument*,
   std::vector<Json::PathArgument, std::allocator<Json::PathArgument> > >, Json::PathArgument
   const&) */

void __thiscall
std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::
_M_realloc_insert<Json::PathArgument_const&>
          (vector<Json::PathArgument,std::allocator<Json::PathArgument>> *this,undefined8 *param_2,
          long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long local_40;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x3333333333333333;
  if (uVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar14 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_001075e8;
    if (0x333333333333333 < uVar14) {
      uVar14 = 0x333333333333333;
    }
    uVar14 = uVar14 * 0x28;
  }
  else {
    uVar14 = lVar5 * -0x6666666666666666;
    if (uVar14 < uVar6) {
LAB_001075e8:
      uVar14 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar14 == 0) {
        local_40 = 0;
        plVar11 = (long *)0x28;
        plVar8 = (long *)0x0;
        goto LAB_00107513;
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
LAB_00107513:
  plVar10 = (long *)((long)plVar8 + ((long)param_2 - (long)puVar2));
  lVar5 = *param_3;
  *plVar10 = (long)(plVar10 + 2);
  __cxx11::string::_M_construct<char*>(plVar10,lVar5,param_3[1] + lVar5);
  plVar10[4] = param_3[4];
  puVar9 = puVar2;
  plVar10 = plVar8;
  if (param_2 != puVar2) {
    do {
      plVar11 = plVar10 + 2;
      *plVar10 = (long)plVar11;
      plVar3 = (long *)*puVar9;
      if (plVar3 == puVar9 + 2) {
        lVar5 = puVar9[1];
        uVar6 = lVar5 + 1;
        uVar15 = (uint)uVar6;
        if (7 < uVar15) {
          *plVar11 = *plVar3;
          *(undefined8 *)((long)plVar10 + (uVar6 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 8));
          lVar5 = (long)plVar11 - ((ulong)(plVar10 + 3) & 0xfffffffffffffff8);
          uVar15 = uVar15 + (int)lVar5 & 0xfffffff8;
          if (7 < uVar15) {
            uVar12 = 0;
            do {
              uVar6 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(plVar10 + 3) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)plVar3 + (uVar6 - lVar5));
            } while (uVar12 < uVar15);
          }
          goto LAB_0010756b;
        }
        if ((uVar6 & 4) == 0) {
          if (uVar15 != 0) {
            *(char *)plVar11 = (char)*plVar3;
            if ((uVar6 & 2) == 0) goto LAB_0010756b;
            *(undefined2 *)((long)plVar10 + (uVar6 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 2));
            lVar5 = puVar9[1];
          }
        }
        else {
          *(int *)plVar11 = (int)*plVar3;
          *(undefined4 *)((long)plVar10 + (uVar6 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 4));
          lVar5 = puVar9[1];
        }
      }
      else {
        *plVar10 = (long)plVar3;
        plVar10[2] = puVar9[2];
LAB_0010756b:
        lVar5 = puVar9[1];
      }
      plVar10[1] = lVar5;
      puVar7 = puVar9 + 5;
      plVar10[4] = puVar9[4];
      puVar9 = puVar7;
      plVar10 = plVar10 + 5;
    } while (puVar7 != param_2);
    plVar11 = (long *)((long)plVar8 +
                      ((long)param_2 + (-0x28 - (long)puVar2) & 0xfffffffffffffff8U) + 0x50);
  }
  puVar9 = param_2;
  plVar10 = plVar11;
  if (param_2 != puVar1) {
    do {
      plVar4 = (long *)*puVar9;
      plVar3 = plVar10 + 2;
      lVar5 = puVar9[1];
      *plVar10 = (long)plVar3;
      if (plVar4 == puVar9 + 2) {
        uVar6 = lVar5 + 1;
        uVar15 = (uint)uVar6;
        if (uVar15 < 8) {
          if ((uVar6 & 4) == 0) {
            if ((uVar15 != 0) && (*(char *)plVar3 = (char)*plVar4, (uVar6 & 2) != 0)) {
              *(undefined2 *)((long)plVar10 + (uVar6 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar3 = (int)*plVar4;
            *(undefined4 *)((long)plVar10 + (uVar6 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar3 = *plVar4;
          *(undefined8 *)((long)plVar10 + (uVar6 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 8));
          lVar13 = (long)plVar3 - ((ulong)(plVar10 + 3) & 0xfffffffffffffff8);
          uVar15 = uVar15 + (int)lVar13 & 0xfffffff8;
          if (7 < uVar15) {
            uVar12 = 0;
            do {
              uVar6 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(plVar10 + 3) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)plVar4 + (uVar6 - lVar13));
            } while (uVar12 < uVar15);
          }
        }
      }
      else {
        *plVar10 = (long)plVar4;
        plVar10[2] = puVar9[2];
      }
      lVar13 = puVar9[4];
      puVar9 = puVar9 + 5;
      plVar10[1] = lVar5;
      plVar10[4] = lVar13;
      plVar10 = plVar10 + 5;
    } while (puVar9 != puVar1);
    plVar11 = (long *)((long)plVar11 +
                      ((long)puVar9 + (-0x28 - (long)param_2) & 0xfffffffffffffff8U) + 0x28);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(long **)this = plVar8;
  *(long **)(this + 8) = plVar11;
  *(long *)(this + 0x10) = local_40;
  return;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::equal_range(Json::Value::CZString const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::equal_range(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
              *this,CZString *param_1)

{
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var1;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var2;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var3;
  char cVar4;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var5;
  _Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
  *p_Var6;
  undefined1 auVar7 [16];
  
  p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
             **)(this + 0x10);
  p_Var5 = this + 8;
  while (p_Var6 = p_Var5,
        p_Var1 != (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                   *)0x0) {
    while( true ) {
      p_Var5 = p_Var1;
      cVar4 = Json::Value::CZString::operator<((CZString *)(p_Var5 + 0x20),param_1);
      if (cVar4 != '\0') break;
      cVar4 = Json::Value::CZString::operator<(param_1,(CZString *)(p_Var5 + 0x20));
      p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                 **)(p_Var5 + 0x10);
      if (cVar4 == '\0') {
        p_Var3 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                   **)(p_Var5 + 0x18);
        while (p_Var2 = p_Var3,
              p_Var2 != (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                         *)0x0) {
          cVar4 = Json::Value::CZString::operator<(param_1,(CZString *)(p_Var2 + 0x20));
          p_Var3 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                     **)(p_Var2 + 0x18);
          if (cVar4 != '\0') {
            p_Var6 = p_Var2;
            p_Var3 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                       **)(p_Var2 + 0x10);
          }
        }
        while (p_Var3 = p_Var1,
              p_Var3 != (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                         *)0x0) {
          cVar4 = Json::Value::CZString::operator<((CZString *)(p_Var3 + 0x20),param_1);
          p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                     **)(p_Var3 + 0x18);
          if (cVar4 == '\0') {
            p_Var5 = p_Var3;
            p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                       **)(p_Var3 + 0x10);
          }
        }
        goto LAB_0010789d;
      }
      p_Var6 = p_Var5;
      if (p_Var1 == (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
                     *)0x0) goto LAB_0010789d;
    }
    p_Var1 = *(_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
               **)(p_Var5 + 0x18);
    p_Var5 = p_Var6;
  }
LAB_0010789d:
  auVar7._8_8_ = p_Var6;
  auVar7._0_8_ = p_Var5;
  return auVar7;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_M_get_insert_unique_pos(Json::Value::CZString const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::_M_get_insert_unique_pos
          (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
           *this,CZString *param_1)

{
  void *__s1;
  uint uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  if (p_Var4 == (_Rb_tree_node_base *)0x0) {
    p_Var6 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    __s1 = *(void **)param_1;
    if (__s1 == (void *)0x0) {
      do {
        while (p_Var6 = p_Var4, *(uint *)(p_Var6 + 0x28) <= *(uint *)(param_1 + 8)) {
          p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
          p_Var5 = p_Var6;
          if (*(_Rb_tree_node_base **)(p_Var6 + 0x18) == (_Rb_tree_node_base *)0x0)
          goto LAB_0010799e;
        }
        p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
      } while (*(_Rb_tree_node_base **)(p_Var6 + 0x10) != (_Rb_tree_node_base *)0x0);
    }
    else {
      uVar8 = *(uint *)(param_1 + 8) >> 2;
      do {
        while( true ) {
          p_Var6 = p_Var4;
          uVar7 = *(uint *)(p_Var6 + 0x28) >> 2;
          uVar1 = uVar7;
          if (uVar8 <= uVar7) {
            uVar1 = uVar8;
          }
          iVar3 = memcmp(__s1,*(void **)(p_Var6 + 0x20),(ulong)uVar1);
          if ((iVar3 < 0) || ((iVar3 == 0 && (uVar8 < uVar7)))) break;
          p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
          p_Var5 = p_Var6;
          if (*(_Rb_tree_node_base **)(p_Var6 + 0x18) == (_Rb_tree_node_base *)0x0)
          goto LAB_0010799e;
        }
        p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
      } while (*(_Rb_tree_node_base **)(p_Var6 + 0x10) != (_Rb_tree_node_base *)0x0);
    }
  }
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x18);
  if (p_Var6 == p_Var4) {
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
  else {
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
LAB_0010799e:
    cVar2 = Json::Value::CZString::operator<((CZString *)(p_Var5 + 0x20),param_1);
    p_Var4 = (_Rb_tree_node_base *)0x0;
    if (cVar2 != '\0') {
      p_Var5 = p_Var4;
      p_Var4 = p_Var6;
    }
  }
  auVar9._8_8_ = p_Var4;
  auVar9._0_8_ = p_Var5;
  return auVar9;
}



/* std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString
   const, Json::Value> >, Json::Value::CZString const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
           *this,_Rb_tree_node_base *param_2,CZString *param_3)

{
  char cVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 != (_Rb_tree_node_base *)(this + 8)) {
    cVar1 = Json::Value::CZString::operator<(param_3,(CZString *)(param_2 + 0x20));
    if (cVar1 == '\0') {
      cVar1 = Json::Value::CZString::operator<((CZString *)(param_2 + 0x20),param_3);
      if (cVar1 == '\0') {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_2;
        return auVar6;
      }
      p_Var3 = (_Rb_tree_node_base *)0x0;
      p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      if (*(_Rb_tree_node_base **)(this + 0x20) != param_2) {
        p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        cVar1 = Json::Value::CZString::operator<(param_3,(CZString *)(p_Var2 + 0x20));
        if (cVar1 == '\0') goto LAB_00107af7;
        p_Var3 = (_Rb_tree_node_base *)0x0;
        p_Var4 = param_2;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var3 = p_Var2;
          p_Var4 = p_Var2;
        }
      }
    }
    else {
      p_Var3 = *(_Rb_tree_node_base **)(this + 0x18);
      p_Var4 = p_Var3;
      if (p_Var3 != param_2) {
        p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        cVar1 = Json::Value::CZString::operator<((CZString *)(p_Var2 + 0x20),param_3);
        if (cVar1 == '\0') goto LAB_00107af7;
        p_Var3 = param_2;
        p_Var4 = param_2;
        if (*(long *)(p_Var2 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
          p_Var4 = p_Var2;
        }
      }
    }
LAB_00107a90:
    auVar5._8_8_ = p_Var4;
    auVar5._0_8_ = p_Var3;
    return auVar5;
  }
  if (*(long *)(this + 0x28) != 0) {
    p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
    cVar1 = Json::Value::CZString::operator<((CZString *)(p_Var4 + 0x20),param_3);
    if (cVar1 != '\0') {
      p_Var3 = (_Rb_tree_node_base *)0x0;
      goto LAB_00107a90;
    }
  }
LAB_00107af7:
  auVar6 = _M_get_insert_unique_pos(this,param_3);
  return auVar6;
}



/* std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value> >
   std::_Rb_tree<Json::Value::CZString, std::pair<Json::Value::CZString const, Json::Value>,
   std::_Select1st<std::pair<Json::Value::CZString const, Json::Value> >,
   std::less<Json::Value::CZString>, std::allocator<std::pair<Json::Value::CZString const,
   Json::Value> > >::_M_emplace_hint_unique<std::pair<Json::Value::CZString const,
   Json::Value>&>(std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString const, Json::Value>
   >, std::pair<Json::Value::CZString const, Json::Value>&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
::_M_emplace_hint_unique<std::pair<Json::Value::CZString_const,Json::Value>&>
          (_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString_const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString_const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString_const,Json::Value>>>
           *this,undefined8 param_2,CZString *param_3)

{
  CZString *this_00;
  undefined1 uVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  
  p_Var2 = (_Rb_tree_node_base *)operator_new(0x58);
  this_00 = (CZString *)(p_Var2 + 0x20);
  Json::Value::CZString::CZString(this_00,param_3);
  Json::Value::Value((Value *)(p_Var2 + 0x30),(Value *)(param_3 + 0x10));
  auVar5 = _M_get_insert_hint_unique_pos(this,param_2,this_00);
  p_Var3 = auVar5._8_8_;
  p_Var4 = auVar5._0_8_;
  if (p_Var3 == (_Rb_tree_node_base *)0x0) {
    Json::Value::~Value((Value *)(p_Var2 + 0x30));
    if ((*(void **)(p_Var2 + 0x20) != (void *)0x0) && (((byte)p_Var2[0x28] & 3) == 1)) {
      free(*(void **)(p_Var2 + 0x20));
    }
    operator_delete(p_Var2,0x58);
  }
  else {
    uVar1 = true;
    if ((p_Var4 == (_Rb_tree_node_base *)0x0) && (p_Var3 != (_Rb_tree_node_base *)(this + 8))) {
      uVar1 = Json::Value::CZString::operator<(this_00,(CZString *)(p_Var3 + 0x20));
    }
    std::_Rb_tree_insert_and_rebalance((bool)uVar1,p_Var2,p_Var3,(_Rb_tree_node_base *)(this + 8));
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var4 = p_Var2;
  }
  return p_Var4;
}



/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string>
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
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00107d78;
    uVar8 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar8 = uVar5 + 1;
    }
    uVar8 = uVar8 << 5;
  }
  else {
    uVar8 = uVar5 * 2;
    if (uVar8 < uVar5) {
LAB_00107d78:
      uVar8 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar8 == 0) {
        plVar6 = (long *)0x20;
        lVar11 = 0;
        plVar7 = (long *)0x0;
        goto LAB_00107cad;
      }
      if (0x3ffffffffffffff < uVar8) {
        uVar8 = 0x3ffffffffffffff;
      }
      uVar8 = uVar8 << 5;
    }
  }
  plVar7 = (long *)operator_new(uVar8);
  lVar11 = uVar8 + (long)plVar7;
  plVar6 = plVar7 + 4;
LAB_00107cad:
  plVar9 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
  lVar15 = *param_3;
  plVar10 = param_3 + 2;
  lVar14 = param_3[1];
  *plVar9 = (long)(plVar9 + 2);
  if ((long *)lVar15 == plVar10) {
    uVar5 = lVar14 + 1;
    uVar12 = (uint)uVar5;
    if (uVar12 < 8) {
      if ((uVar5 & 4) == 0) {
        if ((uVar12 != 0) && (*(char *)(plVar9 + 2) = (char)param_3[2], (uVar5 & 2) != 0)) {
          *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
               *(undefined2 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xe);
        }
      }
      else {
        *(int *)(plVar9 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xc);
      }
    }
    else {
      plVar9[2] = param_3[2];
      *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar5 & 0xffffffff) + 8);
      lVar15 = (long)(plVar9 + 2) - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
      uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar12) {
        uVar13 = 0;
        do {
          uVar5 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
        } while (uVar13 < uVar12);
      }
    }
  }
  else {
    *plVar9 = lVar15;
    plVar9[2] = param_3[2];
  }
  plVar9[1] = lVar14;
  *param_3 = (long)plVar10;
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar3) {
    plVar10 = (long *)((long)pvVar3 + 0x10);
    plVar6 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
    plVar9 = plVar7;
    do {
      plVar1 = plVar9 + 2;
      lVar15 = plVar10[-1];
      *plVar9 = (long)plVar1;
      if (plVar10 == (long *)plVar10[-2]) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar12 != 0) {
              *(char *)plVar1 = (char)*plVar10;
              if ((uVar5 & 2) == 0) goto LAB_00107d6b;
              *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 2));
              lVar15 = plVar10[-1];
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar10;
            *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 4));
            lVar15 = plVar10[-1];
          }
        }
        else {
          *plVar1 = *plVar10;
          *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 8));
          lVar15 = (long)plVar1 - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
            } while (uVar13 < uVar12);
          }
LAB_00107d6b:
          lVar15 = plVar10[-1];
        }
      }
      else {
        *plVar9 = plVar10[-2];
        plVar9[2] = *plVar10;
      }
      plVar9[1] = lVar15;
      plVar9 = plVar9 + 4;
      plVar10 = plVar10 + 4;
    } while (plVar6 != plVar9);
    plVar6 = plVar6 + 4;
  }
  plVar10 = plVar6;
  if (param_2 != pvVar2) {
    plVar9 = (long *)((long)param_2 + 0x10);
    plVar10 = (long *)(((long)pvVar2 - (long)param_2) + (long)plVar6);
    do {
      plVar4 = (long *)plVar9[-2];
      plVar1 = plVar6 + 2;
      lVar15 = plVar9[-1];
      *plVar6 = (long)plVar1;
      if (plVar9 == plVar4) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar12 != 0) && (*(char *)plVar1 = (char)*plVar9, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar9;
            *(undefined4 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar1 = *plVar9;
          *(undefined8 *)((long)plVar6 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 8));
          lVar14 = (long)plVar1 - ((ulong)(plVar6 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar6 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar9 + (uVar5 - lVar14));
            } while (uVar13 < uVar12);
          }
        }
      }
      else {
        *plVar6 = (long)plVar4;
        plVar6[2] = *plVar9;
      }
      plVar6[1] = lVar15;
      plVar6 = plVar6 + 4;
      plVar9 = plVar9 + 4;
    } while (plVar6 != plVar10);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(long **)this = plVar7;
  *(long **)(this + 8) = plVar10;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>
   >::_M_realloc_insert<Json::PathArgument const*>(__gnu_cxx::__normal_iterator<Json::PathArgument
   const**, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*> > >,
   Json::PathArgument const*&&) */

void __thiscall
std::vector<Json::PathArgument_const*,std::allocator<Json::PathArgument_const*>>::
_M_realloc_insert<Json::PathArgument_const*>
          (vector<Json::PathArgument_const*,std::allocator<Json::PathArgument_const*>> *this,
          void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00108150;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010815a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00108150:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010815a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010815a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010812c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010812c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<Json::PathArgument, std::allocator<Json::PathArgument>
   >::_M_realloc_insert<Json::PathArgument>(__gnu_cxx::__normal_iterator<Json::PathArgument*,
   std::vector<Json::PathArgument, std::allocator<Json::PathArgument> > >, Json::PathArgument&&) */

void __thiscall
std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::
_M_realloc_insert<Json::PathArgument>
          (vector<Json::PathArgument,std::allocator<Json::PathArgument>> *this,undefined8 *param_2,
          long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x3333333333333333;
  if (uVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar12 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_00108388;
    if (0x333333333333333 < uVar12) {
      uVar12 = 0x333333333333333;
    }
    uVar12 = uVar12 * 0x28;
  }
  else {
    uVar12 = lVar5 * -0x6666666666666666;
    if (uVar12 < uVar6) {
LAB_00108388:
      uVar12 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar12 == 0) {
        plVar10 = (long *)0x28;
        lVar5 = 0;
        plVar8 = (long *)0x0;
        goto LAB_00108299;
      }
      if (0x333333333333333 < uVar12) {
        uVar12 = 0x333333333333333;
      }
      uVar12 = uVar12 * 0x28;
    }
  }
  plVar8 = (long *)operator_new(uVar12);
  plVar10 = plVar8 + 5;
  lVar5 = uVar12 + (long)plVar8;
LAB_00108299:
  plVar11 = (long *)((long)plVar8 + ((long)param_2 - (long)puVar2));
  lVar13 = *param_3;
  plVar3 = param_3 + 2;
  lVar16 = param_3[1];
  *plVar11 = (long)(plVar11 + 2);
  if ((long *)lVar13 == plVar3) {
    uVar6 = lVar16 + 1;
    uVar14 = (uint)uVar6;
    if (uVar14 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar14 != 0) && (*(char *)(plVar11 + 2) = (char)param_3[2], (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xe) =
               *(undefined2 *)((long)param_3 + (uVar6 & 0xffffffff) + 0xe);
        }
      }
      else {
        *(int *)(plVar11 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar6 & 0xffffffff) + 0xc);
      }
    }
    else {
      plVar11[2] = param_3[2];
      *(undefined8 *)((long)plVar11 + (uVar6 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar6 & 0xffffffff) + 8);
      lVar13 = (long)(plVar11 + 2) - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
      uVar14 = uVar14 + (int)lVar13 & 0xfffffff8;
      if (7 < uVar14) {
        uVar15 = 0;
        do {
          uVar6 = (ulong)uVar15;
          uVar15 = uVar15 + 8;
          *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar6) =
               *(undefined8 *)((long)plVar3 + (uVar6 - lVar13));
        } while (uVar15 < uVar14);
      }
    }
  }
  else {
    *plVar11 = lVar13;
    plVar11[2] = param_3[2];
  }
  *param_3 = (long)plVar3;
  lVar13 = param_3[4];
  plVar11[1] = lVar16;
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  plVar11[4] = lVar13;
  puVar9 = puVar2;
  plVar11 = plVar8;
  if (param_2 != puVar2) {
    do {
      plVar10 = plVar11 + 2;
      *plVar11 = (long)plVar10;
      plVar3 = (long *)*puVar9;
      if (plVar3 == puVar9 + 2) {
        lVar13 = puVar9[1];
        uVar6 = lVar13 + 1;
        uVar14 = (uint)uVar6;
        if (7 < uVar14) {
          *plVar10 = *plVar3;
          *(undefined8 *)((long)plVar11 + (uVar6 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 8));
          lVar13 = (long)plVar10 - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
          uVar14 = uVar14 + (int)lVar13 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar6 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)plVar3 + (uVar6 - lVar13));
            } while (uVar15 < uVar14);
          }
          goto LAB_0010830b;
        }
        if ((uVar6 & 4) == 0) {
          if (uVar14 != 0) {
            *(char *)plVar10 = (char)*plVar3;
            if ((uVar6 & 2) == 0) goto LAB_0010830b;
            *(undefined2 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 2));
            lVar13 = puVar9[1];
          }
        }
        else {
          *(int *)plVar10 = (int)*plVar3;
          *(undefined4 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)plVar3 + ((uVar6 & 0xffffffff) - 4));
          lVar13 = puVar9[1];
        }
      }
      else {
        *plVar11 = (long)plVar3;
        plVar11[2] = puVar9[2];
LAB_0010830b:
        lVar13 = puVar9[1];
      }
      plVar11[1] = lVar13;
      puVar7 = puVar9 + 5;
      plVar11[4] = puVar9[4];
      puVar9 = puVar7;
      plVar11 = plVar11 + 5;
    } while (puVar7 != param_2);
    plVar10 = (long *)((long)plVar8 +
                      ((long)param_2 + (-0x28 - (long)puVar2) & 0xfffffffffffffff8U) + 0x50);
  }
  puVar9 = param_2;
  plVar11 = plVar10;
  if (param_2 != puVar1) {
    do {
      plVar4 = (long *)*puVar9;
      plVar3 = plVar11 + 2;
      lVar13 = puVar9[1];
      *plVar11 = (long)plVar3;
      if (plVar4 == puVar9 + 2) {
        uVar6 = lVar13 + 1;
        uVar14 = (uint)uVar6;
        if (uVar14 < 8) {
          if ((uVar6 & 4) == 0) {
            if ((uVar14 != 0) && (*(char *)plVar3 = (char)*plVar4, (uVar6 & 2) != 0)) {
              *(undefined2 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar3 = (int)*plVar4;
            *(undefined4 *)((long)plVar11 + (uVar6 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar3 = *plVar4;
          *(undefined8 *)((long)plVar11 + (uVar6 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar4 + ((uVar6 & 0xffffffff) - 8));
          lVar16 = (long)plVar3 - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
          uVar14 = uVar14 + (int)lVar16 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar6 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)plVar4 + (uVar6 - lVar16));
            } while (uVar15 < uVar14);
          }
        }
      }
      else {
        *plVar11 = (long)plVar4;
        plVar11[2] = puVar9[2];
      }
      lVar16 = puVar9[4];
      puVar9 = puVar9 + 5;
      plVar11[1] = lVar13;
      plVar11[4] = lVar16;
      plVar11 = plVar11 + 5;
    } while (puVar9 != puVar1);
    plVar10 = (long *)((long)plVar10 +
                      ((long)puVar9 + (-0x28 - (long)param_2) & 0xfffffffffffffff8U) + 0x28);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(long **)this = plVar8;
  *(long **)(this + 8) = plVar10;
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* Json::Value::nullSingleton() */

void Json::Value::_GLOBAL__sub_I_nullSingleton(void)

{
  null = nullSingleton();
  nullRef = nullSingleton();
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


