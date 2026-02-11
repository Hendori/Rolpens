
/* glslang::TDefaultIoResolverBase::resolveInOutComponent(EShLanguage, glslang::TVarEntryInfo&) */

undefined8 __thiscall
glslang::TDefaultIoResolverBase::resolveInOutComponent
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x20) = 0xffffffff;
  return 0xffffffff;
}



/* glslang::TDefaultIoResolverBase::resolveInOutIndex(EShLanguage, glslang::TVarEntryInfo&) */

undefined8 __thiscall
glslang::TDefaultIoResolverBase::resolveInOutIndex
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = 0xffffffff;
  return 0xffffffff;
}



/* glslang::TDefaultGlslIoResolver::endCollect(EShLanguage) */

void glslang::TDefaultGlslIoResolver::endCollect(void)

{
  return;
}



/* glslang::TDefaultGlslIoResolver::beginCollect(EShLanguage) */

void __thiscall
glslang::TDefaultGlslIoResolver::beginCollect(TDefaultGlslIoResolver *this,int param_2)

{
  if (param_2 != 0xe) {
    if (param_2 != *(int *)(this + 0xe4)) {
      *(ulong *)(this + 0xe0) = CONCAT44(param_2,*(int *)(this + 0xe4));
    }
    return;
  }
  *(undefined8 *)(this + 0xe0) = _LC0;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::compare(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const&) const [clone .isra.0] */

ulong std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                (basic_string *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong in_RCX;
  void *in_RDX;
  ulong uVar3;
  ulong in_RSI;
  
  uVar2 = in_RCX;
  if (in_RSI <= in_RCX) {
    uVar2 = in_RSI;
  }
  if (uVar2 != 0) {
    uVar1 = memcmp(param_1,in_RDX,uVar2);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
  }
  uVar3 = in_RSI - in_RCX;
  uVar2 = 0x7fffffff;
  if (((long)uVar3 < 0x80000000) && (uVar2 = 0x80000000, -0x80000001 < (long)uVar3)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}



/* glslang::TSlotCollector
   std::for_each<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   glslang::TSlotCollector>(std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >, glslang::TSlotCollector) [clone
   .isra.0] */

void std::
     for_each<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,glslang::TSlotCollector>
               (_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,long *param_3,
               undefined8 param_4)

{
  if (param_1 == param_2) {
    return;
  }
  do {
    (**(code **)(*param_3 + 0x90))(param_3,param_1 + 0x48,param_4);
    (**(code **)(*param_3 + 0x98))(param_3,param_1 + 0x48,param_4);
    param_1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
  } while (param_1 != param_2);
  return;
}



/* glslang::TVarEntryInfo::TOrderByPriorityAndLive::TEMPNAMEPLACEHOLDERVALUE(glslang::TVarEntryInfo
   const&, glslang::TVarEntryInfo const&) [clone .isra.0] */

ulong glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()
                (TVarEntryInfo *param_1,TVarEntryInfo *param_2)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 8) + 0x108);
  if (pcVar1 == TIntermTyped::getQualifier) {
    plVar4 = *(long **)(param_1 + 8) + 6;
  }
  else {
    plVar4 = (long *)(*pcVar1)();
  }
  pcVar1 = *(code **)(**(long **)(param_2 + 8) + 0x108);
  if (pcVar1 == TIntermTyped::getQualifier) {
    plVar3 = *(long **)(param_2 + 8) + 6;
  }
  else {
    plVar3 = (long *)(*pcVar1)();
  }
  if (param_1[0x10] != param_2[0x10]) {
    return (ulong)((byte)param_2[0x10] < (byte)param_1[0x10]);
  }
  bVar5 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
          ((short)plVar4[4] != -1) * '\x02';
  bVar2 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
          ((short)plVar3[4] != -1) * '\x02';
  if (bVar5 != bVar2) {
    return (ulong)(bVar2 < bVar5);
  }
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 < *(long *)param_2);
}



/* glslang::TVarEntryInfo::TOrderByPriority::TEMPNAMEPLACEHOLDERVALUE(glslang::TVarEntryInfo const&,
   glslang::TVarEntryInfo const&) [clone .isra.0] */

bool glslang::TVarEntryInfo::TOrderByPriority::operator()
               (TVarEntryInfo *param_1,TVarEntryInfo *param_2)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 8) + 0x108);
  if (pcVar1 == TIntermTyped::getQualifier) {
    plVar4 = *(long **)(param_1 + 8) + 6;
  }
  else {
    plVar4 = (long *)(*pcVar1)();
  }
  pcVar1 = *(code **)(**(long **)(param_2 + 8) + 0x108);
  if (pcVar1 == TIntermTyped::getQualifier) {
    plVar3 = *(long **)(param_2 + 8) + 6;
  }
  else {
    plVar3 = (long *)(*pcVar1)();
  }
  bVar5 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
          ((short)plVar4[4] != -1) * '\x02';
  bVar2 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
          ((short)plVar3[4] != -1) * '\x02';
  if (bVar5 != bVar2) {
    return bVar2 < bVar5;
  }
  return *(long *)param_1 < *(long *)param_2;
}



/* glslang::TDefaultIoResolverBase::resolveSet(EShLanguage, glslang::TVarEntryInfo&) */

void __thiscall
glslang::TDefaultIoResolverBase::resolveSet(TDefaultIoResolverBase *this,int param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  pcVar1 = *(code **)(**(long **)(param_3 + 8) + 0xf0);
  if (pcVar1 == TIntermTyped::getType) {
    plVar4 = *(long **)(param_3 + 8) + 4;
  }
  else {
    plVar4 = (long *)(*pcVar1)();
  }
  if (*(code **)(*plVar4 + 0x58) == TType::getQualifier) {
    if ((*(uint *)((long)plVar4 + 0x2c) & 0x3f8000) == 0x1f8000) {
LAB_001003bc:
      lVar3 = *(long *)(this + (long)param_2 * 8 + 0x70);
      if (lVar3 == 0) {
        lVar3 = *(long *)(this + 0x48);
      }
      uVar2 = 0;
      if (*(long *)(lVar3 + 0x4c0) - (long)*(undefined8 **)(lVar3 + 0x4b8) == 0x20) {
        uVar2 = __isoc23_strtol(**(undefined8 **)(lVar3 + 0x4b8),0,10);
      }
      goto LAB_00100396;
    }
LAB_00100389:
    plVar4 = plVar4 + 2;
  }
  else {
    lVar3 = (**(code **)(*plVar4 + 0x58))(plVar4);
    if ((*(uint *)(lVar3 + 0x1c) & 0x3f8000) == 0x1f8000) goto LAB_001003bc;
    if (*(code **)(*plVar4 + 0x58) == TType::getQualifier) goto LAB_00100389;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  }
  uVar2 = *(uint *)((long)plVar4 + 0x1c) >> 0xf & 0x7f;
LAB_00100396:
  *(uint *)(param_3 + 0x18) = uVar2;
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  if (param_1 == (_Rb_tree_node *)0x0) {
    return;
  }
  do {
    _M_erase(*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1,0x78);
    param_1 = p_Var1;
  } while (p_Var1 != (_Rb_tree_node *)0x0);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::string std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&, char const*)
   [clone .isra.0] */

string * std::operator+(string *param_1,char *param_2)

{
  size_t sVar1;
  char *in_RCX;
  ulong in_RDX;
  
  sVar1 = strlen(in_RCX);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (string)0x0;
  *(string **)param_1 = param_1 + 0x10;
  std::__cxx11::string::reserve((ulong)param_1);
  if (in_RDX <= 0x3fffffffffffffffU - *(long *)(param_1 + 8)) {
    std::__cxx11::string::_M_append((char *)param_1,(ulong)param_2);
    if (sVar1 <= 0x3fffffffffffffffU - *(long *)(param_1 + 8)) {
      std::__cxx11::string::_M_append((char *)param_1,(ulong)in_RCX);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TDefaultGlslIoResolver::getResourceType(glslang::TType const&) */

char __thiscall
glslang::TDefaultGlslIoResolver::getResourceType(TDefaultGlslIoResolver *this,TType *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  TType *pTVar5;
  
  lVar4 = *(long *)param_1;
  if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
    if (param_1[8] != (TType)0xe) goto LAB_0010054c;
LAB_001005d0:
    if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
      pTVar5 = param_1 + 0x80;
    }
    else {
      pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
    }
    if ((((byte)pTVar5[2] & 8) != 0) && (1 < (byte)((char)pTVar5[1] - 7U))) {
      return '\x02';
    }
  }
  else {
    iVar2 = (**(code **)(lVar4 + 0x38))(param_1);
    if (iVar2 == 0xe) {
      lVar4 = *(long *)param_1;
      goto LAB_001005d0;
    }
  }
  lVar4 = *(long *)param_1;
  if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
    uVar3 = (uint)(byte)param_1[8];
  }
  else {
    uVar3 = (**(code **)(lVar4 + 0x38))(param_1);
    lVar4 = *(long *)param_1;
  }
  if (uVar3 != 0xe) goto LAB_0010054c;
  if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
    if (((byte)param_1[0x82] & 0x20) == 0) {
      pTVar5 = param_1 + 0x80;
LAB_00100636:
      if (((byte)pTVar5[2] & 8) == 0) {
        return '\x01';
      }
      goto LAB_0010063c;
    }
LAB_0010064c:
    pTVar5 = param_1 + 0x80;
  }
  else {
    pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
    if (((byte)pTVar5[2] & 0x20) == 0) goto LAB_00100636;
LAB_0010063c:
    if (*(code **)(*(long *)param_1 + 0x40) == TType::getSampler) goto LAB_0010064c;
    pTVar5 = (TType *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
  }
  if (pTVar5[1] == (TType)0x7) {
    return '\x01';
  }
  lVar4 = *(long *)param_1;
LAB_0010054c:
  if (*(code **)(lVar4 + 0x58) == TType::getQualifier) {
    pTVar5 = param_1 + 0x10;
  }
  else {
    pTVar5 = (TType *)(**(code **)(lVar4 + 0x58))(param_1);
  }
  cVar1 = '\x04';
  if (((byte)pTVar5[8] & 0x7f) != 6) {
    lVar4 = *(long *)param_1;
    if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_1[8];
    }
    else {
      uVar3 = (**(code **)(lVar4 + 0x38))(param_1);
      lVar4 = *(long *)param_1;
    }
    if (uVar3 == 0xe) {
      if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
        pTVar5 = param_1 + 0x80;
      }
      else {
        pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
      }
      if (((byte)pTVar5[2] & 0x20) != 0) {
        return '\0';
      }
      lVar4 = *(long *)param_1;
    }
    if (*(code **)(lVar4 + 0x58) == TType::getQualifier) {
      pTVar5 = param_1 + 0x10;
    }
    else {
      pTVar5 = (TType *)(**(code **)(lVar4 + 0x58))(param_1);
    }
    cVar1 = (((byte)pTVar5[8] & 0x7f) != 5) * '\x03' + '\x03';
  }
  return cVar1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00100975:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00100975;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_0010082c;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_0010082c;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001009ad:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010082c:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001009ad;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_0010088c;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_0010088c;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001009dd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010088c:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001009dd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_001008ec;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_001008ec;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00100a0d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001008ec:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00100a0d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00100a57;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00100a57:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsOpaque() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsOpaque() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if ((*(byte *)(param_1 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(param_1 + 1) & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00100ae1:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00100ae1;
  }
  return false;
}



/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     _M_construct<char_const*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)param_1[1];
    if (__n == 1) {
      *__dest = *param_2;
      param_1[2] = 1;
      *(undefined1 *)(param_1[1] + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[2] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*param_1);
    param_1[3] = __n;
    param_1[1] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[2] = __n;
  *(undefined1 *)(param_1[1] + __n) = 0;
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x50);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x50);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x50);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x50);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x50);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x50);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x50);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x50);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x50);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* glslang::TDefaultIoResolverBase::resolveUniformLocation(EShLanguage, glslang::TVarEntryInfo&) */

int __thiscall
glslang::TDefaultIoResolverBase::resolveUniformLocation
          (TDefaultIoResolverBase *this,undefined8 param_2,long param_3)

{
  TType TVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  TType *pTVar10;
  TType *pTVar11;
  long *plVar12;
  
  lVar7 = **(long **)(param_3 + 8);
  if (*(code **)(lVar7 + 0xf0) == TIntermTyped::getType) {
    pTVar10 = (TType *)(*(long **)(param_3 + 8) + 4);
  }
  else {
    pTVar10 = (TType *)(**(code **)(lVar7 + 0xf0))();
    lVar7 = **(long **)(param_3 + 8);
  }
  lVar7 = (**(code **)(lVar7 + 0x198))();
  pcVar2 = *(char **)(lVar7 + 8);
  if (*(char *)(*(long *)(this + 0x48) + 0x4d1) != '\0') {
    if (*(code **)(*(long *)pTVar10 + 0x58) == TType::getQualifier) {
      pTVar11 = pTVar10 + 0x10;
    }
    else {
      pTVar11 = (TType *)(**(code **)(*(long *)pTVar10 + 0x58))(pTVar10);
    }
    if ((~*(ushort *)(pTVar11 + 0x1c) & 0xfff) == 0) {
      pcVar8 = *(code **)(*(long *)pTVar10 + 0x148);
      if (pcVar8 == TType::isBuiltIn) {
        pcVar8 = *(code **)(*(long *)pTVar10 + 0x58);
        if (pcVar8 == TType::getQualifier) {
          pTVar11 = pTVar10 + 0x10;
        }
        else {
          pTVar11 = (TType *)(*pcVar8)(pTVar10);
        }
        if (*(ushort *)(pTVar11 + 8) < 0x80) {
LAB_00100e26:
          if (*(code **)(*(long *)pTVar10 + 0x38) == TType::getBasicType) {
            uVar5 = (uint)(byte)pTVar10[8];
          }
          else {
            uVar5 = (**(code **)(*(long *)pTVar10 + 0x38))(pTVar10);
          }
          if ((uVar5 != 0x10) && (uVar5 = (uint)(byte)pTVar10[8], pTVar10[8] != (TType)0xd)) {
            if (*(code **)(*(long *)pTVar10 + 0x38) != TType::getBasicType) {
              uVar5 = (**(code **)(*(long *)pTVar10 + 0x38))(pTVar10);
            }
            if (uVar5 != 0x16) {
              lVar7 = *(long *)pTVar10;
              if (*(code **)(lVar7 + 0x1b0) == TType::containsOpaque) {
                if (*(code **)(lVar7 + 0x140) != TType::isOpaque) {
                  cVar3 = (**(code **)(lVar7 + 0x140))(pTVar10);
                  if (cVar3 == '\0') {
                    lVar7 = *(long *)pTVar10;
                    goto LAB_00100f78;
                  }
LAB_00100ebb:
                  if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) goto LAB_00101018;
                  goto LAB_00100eca;
                }
                if (((byte)pTVar10[8] < 0x15) &&
                   ((0x1a6000UL >> ((ulong)(byte)pTVar10[8] & 0x3f) & 1) != 0)) goto LAB_00100ebb;
LAB_00100f78:
                if (*(code **)(lVar7 + 0x128) != TType::isStruct) {
                  cVar3 = (**(code **)(lVar7 + 0x128))(pTVar10);
                  if (cVar3 != '\0') goto LAB_00100f9f;
                  pcVar8 = *(code **)(*(long *)pTVar10 + 0x128);
                  goto LAB_00100edb;
                }
                TVar1 = pTVar10[8];
                if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00100f9f:
                  lVar7 = *(long *)(*(long *)(pTVar10 + 0x68) + 0x10);
                  lVar9 = std::
                          __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                                    (*(undefined8 *)(*(long *)(pTVar10 + 0x68) + 8),lVar7);
                  if (lVar7 != lVar9) goto LAB_00100ebb;
                  pcVar8 = *(code **)(*(long *)pTVar10 + 0x128);
                  goto LAB_00100edb;
                }
LAB_00100ee8:
                if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00100eef:
                  plVar12 = *(long **)(*(long *)(pTVar10 + 0x68) + 8);
                  if (*(long **)(*(long *)(pTVar10 + 0x68) + 0x10) != plVar12) {
                    plVar12 = (long *)*plVar12;
                    lVar7 = *plVar12;
                    pcVar8 = *(code **)(lVar7 + 0x148);
                    if (pcVar8 == TType::isBuiltIn) {
                      pcVar8 = *(code **)(lVar7 + 0x58);
                      if (pcVar8 == TType::getQualifier) {
                        plVar12 = plVar12 + 2;
                      }
                      else {
                        plVar12 = (long *)(*pcVar8)();
                      }
                      if (*(ushort *)(plVar12 + 1) < 0x80) goto LAB_00100f33;
                    }
                    else {
                      cVar3 = (*pcVar8)();
                      if (cVar3 == '\0') goto LAB_00100f33;
                    }
                  }
                  goto LAB_00101018;
                }
              }
              else {
                cVar3 = (**(code **)(lVar7 + 0x1b0))(pTVar10);
                if (cVar3 != '\0') goto LAB_00100ebb;
LAB_00100eca:
                pcVar8 = *(code **)(*(long *)pTVar10 + 0x128);
LAB_00100edb:
                if (pcVar8 == TType::isStruct) {
                  TVar1 = pTVar10[8];
                  goto LAB_00100ee8;
                }
                cVar3 = (*pcVar8)(pTVar10);
                if (cVar3 != '\0') goto LAB_00100eef;
              }
LAB_00100f33:
              iVar4 = TIntermediate::getUniformLocationOverride
                                (*(TIntermediate **)(this + 0x48),pcVar2);
              if (iVar4 == -1) {
                iVar4 = *(int *)(this + 0x50);
                iVar6 = glslang::TIntermediate::computeTypeUniformLocationSize(pTVar10);
                *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar6;
              }
              goto LAB_00100f4b;
            }
          }
        }
      }
      else {
        cVar3 = (*pcVar8)(pTVar10);
        if (cVar3 == '\0') goto LAB_00100e26;
      }
    }
  }
LAB_00101018:
  iVar4 = -1;
LAB_00100f4b:
  *(int *)(param_3 + 0x1c) = iVar4;
  return iVar4;
}



/* glslang::TDefaultIoResolverBase::TDefaultIoResolverBase(glslang::TIntermediate const&) */

void __thiscall
glslang::TDefaultIoResolverBase::TDefaultIoResolverBase
          (TDefaultIoResolverBase *this,TIntermediate *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined **)this = &DAT_0011a010;
  *(TDefaultIoResolverBase **)(this + 8) = this + 0x38;
  uVar1 = *(undefined4 *)(param_1 + 0x5c0);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined8 *)(this + 99) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (TDefaultIoResolverBase)0x0;
  *(TIntermediate **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x54) = 0;
  puVar3 = (undefined8 *)((ulong)(this + 0x78) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x78) & 0xfffffffffffffff8))
                       + 0xe0U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(TIntermediate **)(this + (long)*(int *)param_1 * 8 + 0x70) = param_1;
  return;
}



/* glslang::TDefaultIoResolverBase::getBaseBinding(EShLanguage, glslang::TResourceType, unsigned
   int) const */

int __thiscall
glslang::TDefaultIoResolverBase::getBaseBinding
          (TDefaultIoResolverBase *this,int param_2,uint param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(this + (long)param_2 * 8 + 0x70);
  lVar2 = (ulong)param_3 * 0x30;
  if (lVar6 == 0) {
    lVar6 = *(long *)(this + 0x48);
    lVar7 = lVar6 + 0x3a0 + lVar2;
    lVar2 = *(long *)(lVar6 + 0x3a8 + lVar2);
    lVar5 = lVar7;
    if (lVar2 == 0) goto LAB_0010121a;
    do {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar4 = lVar2;
      if (*(int *)(lVar2 + 0x20) < param_4) {
        lVar3 = *(long *)(lVar2 + 0x18);
        lVar4 = lVar5;
      }
      lVar2 = lVar3;
      lVar5 = lVar4;
    } while (lVar3 != 0);
  }
  else {
    lVar7 = lVar6 + 0x3a0 + lVar2;
    lVar2 = *(long *)(lVar6 + 0x3a8 + lVar2);
    lVar5 = lVar7;
    if (lVar2 == 0) goto LAB_0010121a;
    do {
      while( true ) {
        lVar4 = lVar2;
        plVar1 = (long *)(lVar4 + 0x18);
        if (param_4 <= *(int *)(lVar4 + 0x20)) break;
        lVar2 = *plVar1;
        lVar4 = lVar5;
        if (*plVar1 == 0) goto LAB_00101210;
      }
      lVar2 = *(long *)(lVar4 + 0x10);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 0x10) != 0);
  }
LAB_00101210:
  if (((lVar7 != lVar4) && (*(int *)(lVar4 + 0x20) <= param_4)) && (*(int *)(lVar4 + 0x24) != -1)) {
    return *(int *)(lVar4 + 0x24);
  }
LAB_0010121a:
  return *(int *)(lVar6 + 0x37c + (ulong)param_3 * 4);
}



/* glslang::TDefaultIoResolverBase::getResourceSetBinding[abi:cxx11](EShLanguage) const */

long __thiscall
glslang::TDefaultIoResolverBase::getResourceSetBinding_abi_cxx11_
          (TDefaultIoResolverBase *this,int param_2)

{
  if (*(long *)(this + (long)param_2 * 8 + 0x70) != 0) {
    return *(long *)(this + (long)param_2 * 8 + 0x70) + 0x4b8;
  }
  return *(long *)(this + 0x48) + 0x4b8;
}



/* glslang::TDefaultIoResolverBase::doAutoBindingMapping() const */

undefined1 __thiscall
glslang::TDefaultIoResolverBase::doAutoBindingMapping(TDefaultIoResolverBase *this)

{
  return *(undefined1 *)(*(long *)(this + 0x48) + 0x4d0);
}



/* glslang::TDefaultIoResolverBase::doAutoLocationMapping() const */

undefined1 __thiscall
glslang::TDefaultIoResolverBase::doAutoLocationMapping(TDefaultIoResolverBase *this)

{
  return *(undefined1 *)(*(long *)(this + 0x48) + 0x4d1);
}



/* glslang::TDefaultIoResolverBase::computeTypeLocationSize(glslang::TType const&, EShLanguage) */

void __thiscall
glslang::TDefaultIoResolverBase::computeTypeLocationSize
          (undefined8 param_1_00,TType *param_1,undefined4 param_3)

{
  char cVar1;
  TType *pTVar2;
  long in_FS_OFFSET;
  TType aTStack_b8 [152];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x58) == TType::getQualifier) {
    pTVar2 = param_1 + 0x10;
  }
  else {
    pTVar2 = (TType *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
  }
  cVar1 = TQualifier::isArrayedIo((TQualifier *)pTVar2,param_3);
  if (cVar1 == '\0') {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      glslang::TIntermediate::computeTypeLocationSize(param_1,param_3);
      return;
    }
  }
  else {
    TType::TType(aTStack_b8,param_1,0,false);
    glslang::TIntermediate::computeTypeLocationSize(aTStack_b8,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TDefaultIoResolverBase::resolveInOutLocation(EShLanguage, glslang::TVarEntryInfo&) */

undefined4 __thiscall
glslang::TDefaultIoResolverBase::resolveInOutLocation
          (TDefaultIoResolverBase *this,undefined4 param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  TDefaultIoResolverBase *pTVar8;
  
  pcVar1 = *(code **)(**(long **)(param_3 + 8) + 0xf0);
  if (pcVar1 == TIntermTyped::getType) {
    plVar4 = *(long **)(param_3 + 8) + 4;
  }
  else {
    plVar4 = (long *)(*pcVar1)();
  }
  if (*(char *)(*(long *)(this + 0x48) + 0x4d1) != '\0') {
    if (*(code **)(*plVar4 + 0x58) == TType::getQualifier) {
      plVar5 = plVar4 + 2;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
    }
    if ((~*(ushort *)((long)plVar5 + 0x1c) & 0xfff) == 0) {
      pcVar1 = *(code **)(*plVar4 + 0x148);
      if (pcVar1 == TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar4 + 0x58);
        if (pcVar1 == TType::getQualifier) {
          if (*(ushort *)(plVar4 + 3) < 0x80) {
LAB_0010143b:
            plVar5 = plVar4 + 2;
            goto LAB_0010143f;
          }
        }
        else {
          lVar6 = (*pcVar1)(plVar4);
          if (*(ushort *)(lVar6 + 8) < 0x80) goto LAB_00101549;
        }
      }
      else {
        cVar2 = (*pcVar1)(plVar4);
        if (cVar2 == '\0') {
LAB_00101549:
          if (*(code **)(*plVar4 + 0x58) == TType::getQualifier) goto LAB_0010143b;
          plVar5 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
LAB_0010143f:
          if (plVar5[8] == 0) {
            lVar6 = *plVar4;
            if (*(code **)(lVar6 + 0x128) != TType::isStruct) {
              cVar2 = (**(code **)(lVar6 + 0x128))(plVar4);
              if (cVar2 != '\0') goto LAB_00101470;
              goto LAB_001014b4;
            }
            if (1 < (byte)((char)plVar4[1] - 0xfU)) {
LAB_001014b7:
              if (*(code **)(lVar6 + 0x58) == TType::getQualifier) {
                plVar5 = plVar4 + 2;
              }
              else {
                plVar5 = (long *)(**(code **)(lVar6 + 0x58))(plVar4);
              }
              if (((byte)(*(byte *)(plVar5 + 1) & 0x7f) < 0x1c) &&
                 ((0xe300008UL >> ((ulong)(*(byte *)(plVar5 + 1) & 0x7f) & 0x3f) & 1) != 0)) {
                uVar7 = *(undefined4 *)(this + 0x54);
                pTVar8 = this + 0x54;
              }
              else {
                uVar7 = *(undefined4 *)(this + 0x58);
                pTVar8 = this + 0x58;
              }
              iVar3 = computeTypeLocationSize(this,plVar4,param_2);
              *(int *)pTVar8 = *(int *)pTVar8 + iVar3;
              goto LAB_001014f7;
            }
LAB_00101470:
            plVar5 = *(long **)(plVar4[0xd] + 8);
            if (*(long **)(plVar4[0xd] + 0x10) != plVar5) {
              plVar5 = (long *)*plVar5;
              lVar6 = *plVar5;
              pcVar1 = *(code **)(lVar6 + 0x148);
              if (pcVar1 == TType::isBuiltIn) {
                pcVar1 = *(code **)(lVar6 + 0x58);
                if (pcVar1 == TType::getQualifier) {
                  plVar5 = plVar5 + 2;
                }
                else {
                  plVar5 = (long *)(*pcVar1)();
                }
                if (*(ushort *)(plVar5 + 1) < 0x80) {
LAB_001014b4:
                  lVar6 = *plVar4;
                  goto LAB_001014b7;
                }
              }
              else {
                cVar2 = (*pcVar1)();
                if (cVar2 == '\0') goto LAB_001014b4;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0xffffffff;
LAB_001014f7:
  *(undefined4 *)(param_3 + 0x1c) = uVar7;
  return uVar7;
}



/* glslang::TDefaultGlslIoResolver::TDefaultGlslIoResolver(glslang::TIntermediate const&) */

void __thiscall
glslang::TDefaultGlslIoResolver::TDefaultGlslIoResolver
          (TDefaultGlslIoResolver *this,TIntermediate *param_1)

{
  undefined8 uVar1;
  
  TDefaultIoResolverBase::TDefaultIoResolverBase((TDefaultIoResolverBase *)this,param_1);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR__TDefaultGlslIoResolver_0011a0d0;
  uVar1 = _LC0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(TDefaultGlslIoResolver **)(this + 0x100) = this + 0xf0;
  *(TDefaultGlslIoResolver **)(this + 0x108) = this + 0xf0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(TDefaultGlslIoResolver **)(this + 0x130) = this + 0x120;
  *(TDefaultGlslIoResolver **)(this + 0x138) = this + 0x120;
  *(undefined8 *)(this + 0x140) = 0;
  return;
}



/* std::pair<std::__detail::_Node_iterator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, true, true>, bool>
   std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Identity,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, true, true>
   >::_M_insert_unique<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, true> > >
   >(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&, std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, true> > > const&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
::
_M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,true>>>>
          (basic_string *param_1,basic_string *param_2,_AllocNode *param_3)

{
  char *pcVar1;
  basic_string *pbVar2;
  long lVar3;
  void *__s1;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  basic_string *pbVar12;
  _Rb_tree_node *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong extraout_RDX;
  ulong uVar19;
  _Reuse_or_alloc_node *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  _Rb_tree_node_base *p_Var23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  _Rb_tree_node_base *p_Var29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar3 = *(long *)(param_1 + 0x18);
  __s1 = *(void **)(param_2 + 8);
  uVar19 = *(ulong *)(param_2 + 0x10);
  if (lVar3 == 0) {
    for (plVar11 = *(long **)(param_1 + 0x10); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if ((plVar11[3] == uVar19) &&
         ((uVar19 == 0 || (iVar9 = memcmp(__s1,(void *)plVar11[2],uVar19), iVar9 == 0)))) {
        uVar10 = 0;
        goto LAB_00101842;
      }
    }
    if (uVar19 == 0) {
      uVar22 = 0x811c9dc5;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulong *)(param_1 + 8);
      uVar18 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar6,0);
      goto LAB_00101780;
    }
    uVar17 = 0;
    uVar8 = 0x811c9dc5;
LAB_001016c0:
    do {
      pcVar1 = (char *)((long)__s1 + uVar17);
      uVar17 = uVar17 + 1;
      uVar8 = (uVar8 ^ (int)*pcVar1) * 0x1000193;
    } while (uVar17 < uVar19);
    uVar17 = *(ulong *)(param_1 + 8);
    uVar22 = (ulong)uVar8;
    uVar18 = uVar22 % uVar17;
    if (lVar3 == 0) goto LAB_00101780;
  }
  else {
    uVar8 = 0x811c9dc5;
    uVar17 = 0;
    if (uVar19 != 0) goto LAB_001016c0;
    uVar17 = *(ulong *)(param_1 + 8);
    uVar22 = 0x811c9dc5;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    uVar18 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar5,0);
  }
  puVar28 = *(undefined8 **)(*(long *)param_1 + uVar18 * 8);
  if (puVar28 != (undefined8 *)0x0) {
    uVar16 = ((undefined8 *)*puVar28)[6];
    puVar4 = (undefined8 *)*puVar28;
    while (((puVar24 = puVar4, uVar22 != uVar16 || (puVar24[3] != uVar19)) ||
           ((uVar19 != 0 && (iVar9 = memcmp(__s1,(void *)puVar24[2],uVar19), iVar9 != 0))))) {
      puVar4 = (undefined8 *)*puVar24;
      if ((puVar4 == (undefined8 *)0x0) ||
         (uVar16 = puVar4[6], puVar28 = puVar24, uVar18 != uVar16 % uVar17)) goto LAB_00101780;
    }
    plVar11 = (long *)*puVar28;
    uVar10 = 0;
    if (plVar11 != (long *)0x0) goto LAB_00101842;
  }
LAB_00101780:
  plVar11 = (long *)operator_new(0x38);
  *plVar11 = 0;
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (plVar11 + 1),param_2);
  uVar19 = *(ulong *)(param_1 + 8);
  pbVar12 = param_1 + 0x20;
  cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    ((ulong)pbVar12,uVar19,*(ulong *)(param_1 + 0x18));
  if (cVar7 == '\0') {
    pbVar12 = *(basic_string **)param_1;
    plVar11[6] = uVar22;
    pbVar2 = pbVar12 + uVar18 * 8;
    plVar26 = *(long **)pbVar2;
  }
  else {
    if (extraout_RDX == 1) {
      pbVar12 = param_1 + 0x30;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
        std::__throw_bad_alloc();
        p_Var15 = *(_Rb_tree_node_base **)(extraout_RDX_00 + 8);
        if (p_Var15 == (_Rb_tree_node_base *)0x0) {
          p_Var15 = (_Rb_tree_node_base *)operator_new(0x50);
        }
        else {
          lVar3 = *(long *)(p_Var15 + 8);
          *(long *)(extraout_RDX_00 + 8) = lVar3;
          if (lVar3 == 0) {
            *(undefined8 *)extraout_RDX_00 = 0;
          }
          else if (p_Var15 == *(_Rb_tree_node_base **)(lVar3 + 0x18)) {
            lVar21 = *(long *)(lVar3 + 0x10);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            if (lVar21 != 0) {
              lVar3 = *(long *)(lVar21 + 0x18);
              *(long *)(extraout_RDX_00 + 8) = lVar21;
              if (lVar3 != 0) {
                do {
                  lVar21 = lVar3;
                  lVar3 = *(long *)(lVar21 + 0x18);
                } while (*(long *)(lVar21 + 0x18) != 0);
                *(long *)(extraout_RDX_00 + 8) = lVar21;
              }
              if (*(long *)(lVar21 + 0x10) != 0) {
                *(long *)(extraout_RDX_00 + 8) = *(long *)(lVar21 + 0x10);
              }
            }
          }
          else {
            *(undefined8 *)(lVar3 + 0x10) = 0;
          }
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                     (p_Var15 + 0x20),pbVar12 + 0x20);
        *(undefined4 *)(p_Var15 + 0x48) = *(undefined4 *)(pbVar12 + 0x48);
        uVar10 = *(undefined4 *)pbVar12;
        *(undefined8 *)(p_Var15 + 0x10) = 0;
        *(undefined8 *)(p_Var15 + 0x18) = 0;
        *(ulong *)(p_Var15 + 8) = uVar19;
        p_Var13 = *(_Rb_tree_node **)(pbVar12 + 0x18);
        *(undefined4 *)p_Var15 = uVar10;
        uVar20 = extraout_RDX_01;
        if (p_Var13 != (_Rb_tree_node *)0x0) {
          p_Var13 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                    ::
                    _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
                              (p_Var13,p_Var15,extraout_RDX_00);
          *(_Rb_tree_node **)(p_Var15 + 0x18) = p_Var13;
          uVar20 = extraout_RDX_02;
        }
        puVar25 = *(undefined4 **)(pbVar12 + 0x10);
        if (puVar25 == (undefined4 *)0x0) {
LAB_00101b20:
          auVar31._8_8_ = uVar20;
          auVar31._0_8_ = p_Var15;
          return auVar31;
        }
        p_Var23 = *(_Rb_tree_node_base **)(extraout_RDX_00 + 8);
        p_Var29 = p_Var15;
        if (p_Var23 == (_Rb_tree_node_base *)0x0) goto LAB_00101b0b;
        do {
          lVar3 = *(long *)(p_Var23 + 8);
          *(long *)(extraout_RDX_00 + 8) = lVar3;
          p_Var14 = p_Var23;
          if (lVar3 == 0) {
            *(undefined8 *)extraout_RDX_00 = 0;
          }
          else if (p_Var23 == *(_Rb_tree_node_base **)(lVar3 + 0x18)) {
            lVar21 = *(long *)(lVar3 + 0x10);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            if (lVar21 != 0) {
              lVar3 = *(long *)(lVar21 + 0x18);
              *(long *)(extraout_RDX_00 + 8) = lVar21;
              if (lVar3 != 0) {
                do {
                  lVar21 = lVar3;
                  lVar3 = *(long *)(lVar21 + 0x18);
                } while (*(long *)(lVar21 + 0x18) != 0);
                *(long *)(extraout_RDX_00 + 8) = lVar21;
              }
              if (*(long *)(lVar21 + 0x10) != 0) {
                *(long *)(extraout_RDX_00 + 8) = *(long *)(lVar21 + 0x10);
              }
            }
          }
          else {
            *(undefined8 *)(lVar3 + 0x10) = 0;
          }
          while( true ) {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                         (p_Var14 + 0x20),(basic_string *)(puVar25 + 8));
            *(undefined4 *)(p_Var14 + 0x48) = puVar25[0x12];
            uVar10 = *puVar25;
            *(undefined8 *)(p_Var14 + 0x10) = 0;
            *(undefined8 *)(p_Var14 + 0x18) = 0;
            *(undefined4 *)p_Var14 = uVar10;
            *(_Rb_tree_node_base **)(p_Var29 + 0x10) = p_Var14;
            *(_Rb_tree_node_base **)(p_Var14 + 8) = p_Var29;
            uVar20 = extraout_RDX_03;
            if (*(_Rb_tree_node **)(puVar25 + 6) != (_Rb_tree_node *)0x0) {
              p_Var13 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                        ::
                        _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
                                  (*(_Rb_tree_node **)(puVar25 + 6),p_Var14,extraout_RDX_00);
              *(_Rb_tree_node **)(p_Var14 + 0x18) = p_Var13;
              uVar20 = extraout_RDX_04;
            }
            puVar25 = *(undefined4 **)(puVar25 + 4);
            if (puVar25 == (undefined4 *)0x0) goto LAB_00101b20;
            p_Var23 = *(_Rb_tree_node_base **)(extraout_RDX_00 + 8);
            p_Var29 = p_Var14;
            if (p_Var23 != (_Rb_tree_node_base *)0x0) break;
LAB_00101b0b:
            p_Var14 = (_Rb_tree_node_base *)operator_new(0x50);
          }
        } while( true );
      }
      pbVar12 = (basic_string *)operator_new(extraout_RDX * 8);
      memset(pbVar12,0,extraout_RDX * 8);
    }
    plVar26 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar19 = 0;
    while (uVar17 = uVar19, plVar27 = plVar26, plVar26 != (long *)0x0) {
      while( true ) {
        plVar26 = (long *)*plVar27;
        uVar19 = (ulong)plVar27[6] % extraout_RDX;
        pbVar2 = pbVar12 + uVar19 * 8;
        if (*(long **)pbVar2 == (long *)0x0) break;
        *plVar27 = **(long **)pbVar2;
        **(undefined8 **)pbVar2 = plVar27;
        plVar27 = plVar26;
        if (plVar26 == (long *)0x0) goto LAB_00101913;
      }
      *plVar27 = *(long *)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar27;
      *(basic_string **)pbVar2 = param_1 + 0x10;
      if (*plVar27 != 0) {
        *(long **)(pbVar12 + uVar17 * 8) = plVar27;
      }
    }
LAB_00101913:
    if (*(basic_string **)param_1 != param_1 + 0x30) {
      operator_delete(*(basic_string **)param_1,*(long *)(param_1 + 8) << 3);
    }
    *(ulong *)(param_1 + 8) = extraout_RDX;
    *(basic_string **)param_1 = pbVar12;
    plVar11[6] = uVar22;
    pbVar2 = pbVar12 + (uVar22 % extraout_RDX) * 8;
    plVar26 = *(long **)pbVar2;
  }
  if (plVar26 == (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    *(long **)(param_1 + 0x10) = plVar11;
    *plVar11 = lVar3;
    if (lVar3 != 0) {
      *(long **)(pbVar12 + (*(ulong *)(lVar3 + 0x30) % *(ulong *)(param_1 + 8)) * 8) = plVar11;
    }
    *(basic_string **)pbVar2 = param_1 + 0x10;
  }
  else {
    *plVar11 = *plVar26;
    **(undefined8 **)pbVar2 = plVar11;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  uVar10 = 1;
LAB_00101842:
  auVar30._8_4_ = uVar10;
  auVar30._0_8_ = plVar11;
  auVar30._12_4_ = 0;
  return auVar30;
}



/* std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >* std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const, int>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > >::_M_copy<false,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int> >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > >::_Reuse_or_alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::
_M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Reuse_or_alloc_node *param_3)

{
  undefined4 uVar1;
  long lVar2;
  _Rb_tree_node *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  _Rb_tree_node_base *p_Var9;
  
  p_Var5 = *(_Rb_tree_node_base **)(param_3 + 8);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    p_Var5 = (_Rb_tree_node_base *)operator_new(0x50);
  }
  else {
    lVar2 = *(long *)(p_Var5 + 8);
    *(long *)(param_3 + 8) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)param_3 = 0;
    }
    else if (p_Var5 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
      lVar6 = *(long *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (lVar6 != 0) {
        lVar2 = *(long *)(lVar6 + 0x18);
        *(long *)(param_3 + 8) = lVar6;
        if (lVar2 != 0) {
          do {
            lVar6 = lVar2;
            lVar2 = *(long *)(lVar6 + 0x18);
          } while (*(long *)(lVar6 + 0x18) != 0);
          *(long *)(param_3 + 8) = lVar6;
        }
        if (*(long *)(lVar6 + 0x10) != 0) {
          *(long *)(param_3 + 8) = *(long *)(lVar6 + 0x10);
        }
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (p_Var5 + 0x20),(basic_string *)(param_1 + 0x20));
  *(undefined4 *)(p_Var5 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var5 + 0x10) = 0;
  *(undefined8 *)(p_Var5 + 0x18) = 0;
  *(_Rb_tree_node_base **)(p_Var5 + 8) = param_2;
  p_Var3 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined4 *)p_Var5 = uVar1;
  if (p_Var3 != (_Rb_tree_node *)0x0) {
    p_Var3 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
                       (p_Var3,p_Var5,param_3);
    *(_Rb_tree_node **)(p_Var5 + 0x18) = p_Var3;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  if (puVar8 != (undefined4 *)0x0) {
    p_Var7 = *(_Rb_tree_node_base **)(param_3 + 8);
    p_Var9 = p_Var5;
    if (p_Var7 == (_Rb_tree_node_base *)0x0) goto LAB_00101b0b;
    do {
      lVar2 = *(long *)(p_Var7 + 8);
      *(long *)(param_3 + 8) = lVar2;
      p_Var4 = p_Var7;
      if (lVar2 == 0) {
        *(undefined8 *)param_3 = 0;
      }
      else if (p_Var7 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
        lVar6 = *(long *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        if (lVar6 != 0) {
          lVar2 = *(long *)(lVar6 + 0x18);
          *(long *)(param_3 + 8) = lVar6;
          if (lVar2 != 0) {
            do {
              lVar6 = lVar2;
              lVar2 = *(long *)(lVar6 + 0x18);
            } while (*(long *)(lVar6 + 0x18) != 0);
            *(long *)(param_3 + 8) = lVar6;
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            *(long *)(param_3 + 8) = *(long *)(lVar6 + 0x10);
          }
        }
      }
      else {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      while( true ) {
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                     (p_Var4 + 0x20),(basic_string *)(puVar8 + 8));
        *(undefined4 *)(p_Var4 + 0x48) = puVar8[0x12];
        uVar1 = *puVar8;
        *(undefined8 *)(p_Var4 + 0x10) = 0;
        *(undefined8 *)(p_Var4 + 0x18) = 0;
        *(undefined4 *)p_Var4 = uVar1;
        *(_Rb_tree_node_base **)(p_Var9 + 0x10) = p_Var4;
        *(_Rb_tree_node_base **)(p_Var4 + 8) = p_Var9;
        if (*(_Rb_tree_node **)(puVar8 + 6) != (_Rb_tree_node *)0x0) {
          p_Var3 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
                             (*(_Rb_tree_node **)(puVar8 + 6),p_Var4,param_3);
          *(_Rb_tree_node **)(p_Var4 + 0x18) = p_Var3;
        }
        puVar8 = *(undefined4 **)(puVar8 + 4);
        if (puVar8 == (undefined4 *)0x0) {
          return (_Rb_tree_node *)p_Var5;
        }
        p_Var7 = *(_Rb_tree_node_base **)(param_3 + 8);
        p_Var9 = p_Var4;
        if (p_Var7 != (_Rb_tree_node_base *)0x0) break;
LAB_00101b0b:
        p_Var4 = (_Rb_tree_node_base *)operator_new(0x50);
      }
    } while( true );
  }
  return (_Rb_tree_node *)p_Var5;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >
   >::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const, int>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > const&) [clone .part.0] */

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::operator=(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
            *this,_Rb_tree *param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  _Rb_tree_node *p_Var4;
  _Rb_tree_node *p_Var5;
  void *pvVar6;
  _Rb_tree_node *p_Var7;
  long in_FS_OFFSET;
  void *local_38;
  long lStack_30;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *local_28;
  long local_20;
  
  local_38 = *(void **)(this + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_30 = *(long *)(this + 0x20);
  local_28 = this;
  if (local_38 == (void *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      **)(this + 0x18) = this + 8;
    *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      **)(this + 0x20) = this + 8;
    *(undefined8 *)(this + 0x28) = 0;
    p_Var7 = *(_Rb_tree_node **)(param_1 + 0x10);
    lStack_30 = 0;
    if (p_Var7 == (_Rb_tree_node *)0x0) goto LAB_00101cff;
LAB_00101c92:
    p_Var4 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>::_Reuse_or_alloc_node>
                       (p_Var7,(_Rb_tree_node_base *)(this + 8),(_Reuse_or_alloc_node *)&local_38);
    p_Var7 = p_Var4;
    do {
      p_Var5 = p_Var7;
      p_Var7 = *(_Rb_tree_node **)(p_Var5 + 0x10);
    } while (p_Var7 != (_Rb_tree_node *)0x0);
    *(_Rb_tree_node **)(this + 0x18) = p_Var5;
    p_Var7 = p_Var4;
    do {
      p_Var5 = p_Var7;
      p_Var7 = *(_Rb_tree_node **)(p_Var5 + 0x18);
    } while (p_Var7 != (_Rb_tree_node *)0x0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(_Rb_tree_node **)(this + 0x20) = p_Var5;
    *(_Rb_tree_node **)(this + 0x10) = p_Var4;
    *(undefined8 *)(this + 0x28) = uVar2;
    pvVar6 = local_38;
    if (local_38 == (void *)0x0) goto LAB_00101cff;
  }
  else {
    lVar1 = *(long *)(lStack_30 + 0x10);
    *(undefined8 *)((long)local_38 + 8) = 0;
    if (lVar1 != 0) {
      lStack_30 = lVar1;
    }
    *(undefined8 *)(this + 0x10) = 0;
    p_Var7 = *(_Rb_tree_node **)(param_1 + 0x10);
    *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      **)(this + 0x18) = this + 8;
    *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      **)(this + 0x20) = this + 8;
    *(undefined8 *)(this + 0x28) = 0;
    pvVar6 = local_38;
    if (p_Var7 != (_Rb_tree_node *)0x0) goto LAB_00101c92;
  }
  do {
    _M_erase(*(_Rb_tree_node **)((long)pvVar6 + 0x18));
    pvVar3 = *(void **)((long)pvVar6 + 0x10);
    operator_delete(pvVar6,0x50);
    pvVar6 = pvVar3;
  } while (pvVar3 != (void *)0x0);
LAB_00101cff:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    puVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00101e9d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00101e9d;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00101eec;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00101ecd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00101eec:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00101ecd;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00101f24;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00101f05:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00101f24:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00101f05;
      }
      plVar1 = (long *)param_1[0xc];
      if (param_3 == *(byte *)(plVar1 + 1)) goto LAB_00101f5c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00101f3d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00101f5c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00101f3d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00101fb8;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                      ((TType *)*param_1,param_3);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00101fb8:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_00102010:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_00102060:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010207d:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010207d;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar4 = *plVar1;
          goto LAB_00102060;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_001020e0:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001020fd:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
LAB_001020c6:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001020fd;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001020c6;
          lVar4 = *plVar1;
          goto LAB_001020e0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_001020c6;
      }
      plVar1 = (long *)plVar6[8];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_00102160:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010217d:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
LAB_00102146:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010217d;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00102146;
          lVar4 = *plVar1;
          goto LAB_00102160;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00102146;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_001021e0:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_0010221a;
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (param_1 + (lVar7 >> 7) * 0x10 == plVar6 + 0x10) break;
            goto LAB_00102010;
          }
        }
        lVar4 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar5) {
LAB_001021c6:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001021c6;
          lVar4 = *plVar1;
          goto LAB_001021e0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_001021c6;
      }
LAB_0010221a:
      plVar1 = plVar6 + 0x10;
    } while (param_1 + (lVar7 >> 7) * 0x10 != plVar6 + 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_001022ed;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                      ((TType *)*param_1,param_3);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_001022ed:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 7) {
    puVar3 = param_1 + (lVar2 >> 7) * 0x10;
    do {
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (*param_1);
      if (bVar1) {
        return param_1;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[4]);
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[8]);
      if (bVar1) {
        return param_1 + 8;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[0xc]);
      if (bVar1) {
        return param_1 + 0xc;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 5;
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_001023d1;
    }
    bVar1 = glslang::TType::
            contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar1) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_001023d1:
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar1) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102478:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_001024a0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102478;
        }
LAB_001024a0:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010262d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010262d;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_001024e4:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_001024f3;
          goto LAB_00102500;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_001024e4;
        }
LAB_00102500:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010265d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001024f3:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010265d;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102544:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_00102553;
          goto LAB_00102560;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102544;
        }
LAB_00102560:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010268d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00102553:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010268d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_001025a4:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_001025b3;
          goto LAB_001025c0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_001025a4;
        }
LAB_001025c0:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001026bd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001025b3:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001026bd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0010277e;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010277e:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TGlslIoMapper::addStage(EShLanguage, glslang::TIntermediate&, TInfoSink&,
   glslang::TIoMapResolver*) */

byte __thiscall
glslang::TGlslIoMapper::addStage
          (TGlslIoMapper *this,int param_2,TIntermediate *param_3,undefined8 param_4,
          TDefaultIoResolverBase *param_5)

{
  _Rb_tree_node_base *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  TIntermediate TVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  char *__s;
  undefined8 ******ppppppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  void *pvVar13;
  size_t sVar14;
  _Rb_tree_node_base *p_Var15;
  long lVar16;
  TIntermediate *pTVar17;
  TDefaultIoResolverBase *pTVar18;
  long lVar19;
  long in_FS_OFFSET;
  byte local_3dc;
  undefined **local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 ******local_360;
  undefined8 ******local_358;
  undefined8 local_350;
  TIntermediate *local_348;
  undefined8 *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  void *local_2b8;
  undefined **local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 ******local_270;
  undefined8 ******local_268;
  long local_260;
  TIntermediate *local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined1 local_1a0 [24];
  undefined **local_188 [28];
  undefined8 local_a8;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(undefined4 *)(param_3 + 100);
  if ((*(long *)(param_3 + 0x4c0) == *(long *)(param_3 + 0x4b8)) &&
     (param_3[0x4d0] == (TIntermediate)0x0)) {
    TVar4 = param_3[0x4d1];
    *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_3 + 0x60);
    *(undefined4 *)(this + 0x1d0) = uVar5;
    if (TVar4 == (TIntermediate)0x0) {
      pTVar17 = param_3 + 0x3c0;
      lVar16 = 1;
      do {
        if (*(int *)(param_3 + lVar16 * 4 + 0x378) != 0) goto LAB_00102802;
        lVar19 = *(long *)pTVar17;
        iVar12 = (int)lVar16;
        lVar16 = lVar16 + 1;
        pTVar17 = pTVar17 + 0x30;
      } while (iVar12 < 6 && lVar19 == 0);
      if (lVar19 == 0 && param_5 == (TDefaultIoResolverBase *)0x0) {
        local_3dc = 1;
        goto LAB_0010280e;
      }
    }
  }
  else {
    *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_3 + 0x60);
    *(undefined4 *)(this + 0x1d0) = uVar5;
  }
LAB_00102802:
  if ((*(int *)(param_3 + 0x260) == 1) && (param_3[0x26c] == (TIntermediate)0x0)) {
    plVar6 = *(long **)(param_3 + 0x80);
    local_3dc = 0;
    if (plVar6 != (long *)0x0) {
      TDefaultIoResolverBase::TDefaultIoResolverBase((TDefaultIoResolverBase *)local_188,param_3);
      local_98[0] = 0;
      local_188[0] = &PTR__TDefaultGlslIoResolver_0011a0d0;
      local_90 = 0;
      local_78 = 0;
      local_a8 = _LC0;
      local_88 = local_98;
      local_58 = local_68;
      local_68[0] = 0;
      local_60 = 0;
      local_48 = 0;
      pTVar18 = (TDefaultIoResolverBase *)local_188;
      local_80 = local_88;
      local_50 = local_58;
      if ((param_5 == (TDefaultIoResolverBase *)0x0) ||
         (pTVar18 = param_5, *(code **)(*(long *)param_5 + 0xa0) == TDefaultIoResolverBase::addStage
         )) {
        param_5 = pTVar18;
        if (param_2 < 0xe) {
          pTVar18[(long)param_2 + 0x5c] = (TDefaultIoResolverBase)0x1;
          *(TIntermediate **)(pTVar18 + (long)param_2 * 8 + 0x70) = param_3;
        }
      }
      else {
        (**(code **)(*(long *)param_5 + 0xa0))(param_5,param_2,param_3);
      }
      lVar16 = (long)param_2;
      pvVar13 = operator_new(0x30);
      *(undefined4 *)((long)pvVar13 + 8) = 0;
      *(long *)((long)pvVar13 + 0x18) = (long)pvVar13 + 8;
      *(long *)((long)pvVar13 + 0x20) = (long)pvVar13 + 8;
      *(undefined8 *)((long)pvVar13 + 0x10) = 0;
      *(undefined8 *)((long)pvVar13 + 0x28) = 0;
      *(void **)(this + lVar16 * 8 + 8) = pvVar13;
      pvVar13 = operator_new(0x30);
      *(undefined4 *)((long)pvVar13 + 8) = 0;
      *(long *)((long)pvVar13 + 0x18) = (long)pvVar13 + 8;
      *(long *)((long)pvVar13 + 0x20) = (long)pvVar13 + 8;
      *(undefined8 *)((long)pvVar13 + 0x10) = 0;
      *(undefined8 *)((long)pvVar13 + 0x28) = 0;
      *(void **)(this + lVar16 * 8 + 0x78) = pvVar13;
      pvVar13 = operator_new(0x30);
      local_390 = _LC26;
      uVar2 = *(undefined8 *)(this + lVar16 * 8 + 8);
      *(undefined4 *)((long)pvVar13 + 8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x10) = 0;
      uVar3 = *(undefined8 *)(this + lVar16 * 8 + 0x78);
      *(long *)((long)pvVar13 + 0x18) = (long)pvVar13 + 8;
      *(long *)((long)pvVar13 + 0x20) = (long)pvVar13 + 8;
      *(undefined8 *)((long)pvVar13 + 0x28) = 0;
      *(void **)(this + lVar16 * 8 + 0xe8) = pvVar13;
      local_398 = &PTR__TIntermTraverser_00119e70;
      local_38c = 0;
      local_380 = glslang::GetThreadPoolAllocator();
      uVar7 = *(undefined8 *)(this + lVar16 * 8 + 0xe8);
      local_360 = &local_360;
      local_340 = &local_310;
      local_308 = &local_2d8;
      local_398 = &PTR__TVarGatherTraverser_00119f40;
      uVar9 = *(undefined8 *)(this + lVar16 * 8 + 0x78);
      uVar10 = *(undefined8 *)(this + lVar16 * 8 + 8);
      local_320 = _LC19;
      local_2e8 = _LC19;
      local_378 = 0;
      local_370 = 0;
      local_368 = 0;
      local_350 = 0;
      local_338 = 1;
      local_330 = 0;
      local_328 = 0;
      local_318 = 0;
      local_310 = 0;
      local_300 = 1;
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e0 = 0;
      local_2d8 = 0;
      local_2d0 = 1;
      local_2a8 = &PTR__TIntermTraverser_00119e70;
      local_2a0 = _LC26;
      local_29c = 0;
      local_358 = local_360;
      local_348 = param_3;
      local_2c8 = uVar2;
      uStack_2c0 = uVar3;
      local_2b8 = pvVar13;
      local_290 = glslang::GetThreadPoolAllocator();
      local_250 = &local_220;
      local_218 = &local_1e8;
      local_2a8 = &PTR__TVarGatherTraverser_00119f40;
      local_230 = _LC19;
      local_1f8 = _LC19;
      local_288 = 0;
      local_280 = 0;
      local_278 = 0;
      local_260 = 0;
      local_248 = 1;
      local_240 = 0;
      local_238 = 0;
      local_228 = 0;
      local_220 = 0;
      local_210 = 1;
      local_208 = 0;
      local_200 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_270 = &local_270;
      local_268 = &local_270;
      local_258 = param_3;
      local_1d8 = uVar10;
      uStack_1d0 = uVar9;
      local_1c8 = uVar7;
      (**(code **)(*plVar6 + 0x10))(plVar6,(TLiveTraverser *)&local_398);
      local_1b8 = glslang::GetThreadPoolAllocator();
      __s = *(char **)(param_3 + 0x28);
      local_1b0 = local_1a0;
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_logic_error("basic_string: construction from null is not valid");
      }
      sVar14 = strlen(__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_1b8,__s,__s + sVar14);
      TLiveTraverser::pushFunction((TLiveTraverser *)&local_2a8,(basic_string *)&local_1b8);
      pppppppuVar11 = (undefined8 *******)local_268;
      while (local_268 = pppppppuVar11, (undefined8 *******)local_270 != &local_270) {
        ppppppuVar8 = pppppppuVar11[2];
        local_260 = local_260 + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pppppppuVar11,0x18);
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8,(TLiveTraverser *)&local_2a8);
        pppppppuVar11 = (undefined8 *******)local_268;
      }
      lVar19 = *(long *)param_5;
      if (*(code **)(lVar19 + 0x60) != TDefaultIoResolverBase::beginNotifications) {
        (**(code **)(lVar19 + 0x60))(param_5,param_2);
        lVar19 = *(long *)param_5;
      }
      p_Var1 = (_Rb_tree_node_base *)(*(long *)(this + lVar16 * 8 + 8) + 8);
      for (p_Var15 = *(_Rb_tree_node_base **)(*(long *)(this + lVar16 * 8 + 8) + 0x18);
          p_Var15 != p_Var1; p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15)) {
        while (*(code **)(lVar19 + 0x58) != TDefaultIoResolverBase::notifyInOut) {
          (**(code **)(lVar19 + 0x58))(param_5,*(undefined4 *)(p_Var15 + 0x70),p_Var15 + 0x48);
          lVar19 = *(long *)param_5;
          p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
          if (p_Var1 == p_Var15) goto LAB_00102e39;
        }
      }
LAB_00102e39:
      p_Var1 = (_Rb_tree_node_base *)(*(long *)(this + lVar16 * 8 + 0x78) + 8);
      for (p_Var15 = *(_Rb_tree_node_base **)(*(long *)(this + lVar16 * 8 + 0x78) + 0x18);
          p_Var15 != p_Var1; p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15)) {
        while (*(code **)(lVar19 + 0x58) != TDefaultIoResolverBase::notifyInOut) {
          (**(code **)(lVar19 + 0x58))(param_5,*(undefined4 *)(p_Var15 + 0x70),p_Var15 + 0x48);
          lVar19 = *(long *)param_5;
          p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
          if (p_Var1 == p_Var15) goto LAB_00102ea1;
        }
      }
LAB_00102ea1:
      p_Var1 = (_Rb_tree_node_base *)(*(long *)(this + lVar16 * 8 + 0xe8) + 8);
      for (p_Var15 = *(_Rb_tree_node_base **)(*(long *)(this + lVar16 * 8 + 0xe8) + 0x18);
          p_Var15 != p_Var1; p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15)) {
        while (*(code **)(lVar19 + 0x50) != TDefaultIoResolverBase::notifyBinding) {
          (**(code **)(lVar19 + 0x50))(param_5,param_2,p_Var15 + 0x48);
          lVar19 = *(long *)param_5;
          p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
          if (p_Var1 == p_Var15) goto LAB_00102f12;
        }
      }
LAB_00102f12:
      if (*(code **)(lVar19 + 0x68) != TDefaultIoResolverBase::endNotifications) {
        (**(code **)(lVar19 + 0x68))(param_5,param_2);
        lVar19 = *(long *)param_5;
      }
      (**(code **)(lVar19 + 0x80))(param_5,param_2);
      std::
      for_each<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,glslang::TSlotCollector>
                (*(undefined8 *)(*(long *)(this + lVar16 * 8 + 8) + 0x18),
                 *(long *)(this + lVar16 * 8 + 8) + 8,param_5,param_4);
      std::
      for_each<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,glslang::TSlotCollector>
                (*(undefined8 *)(*(long *)(this + lVar16 * 8 + 0x78) + 0x18),
                 *(long *)(this + lVar16 * 8 + 0x78) + 8,param_5,param_4);
      std::
      for_each<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,glslang::TSlotCollector>
                (*(undefined8 *)(*(long *)(this + lVar16 * 8 + 0xe8) + 0x18),
                 *(long *)(this + lVar16 * 8 + 0xe8) + 8,param_5,param_4);
      (**(code **)(*(long *)param_5 + 0x88))(param_5,param_2);
      *(TIntermediate **)(this + lVar16 * 8 + 0x158) = param_3;
      local_3dc = (byte)this[0x1c8] ^ 1;
      local_2a8 = &PTR__TVarGatherTraverser_00119f40;
      TLiveTraverser::~TLiveTraverser((TLiveTraverser *)&local_2a8);
      local_398 = &PTR__TVarGatherTraverser_00119f40;
      TLiveTraverser::~TLiveTraverser((TLiveTraverser *)&local_398);
      TDefaultGlslIoResolver::~TDefaultGlslIoResolver((TDefaultGlslIoResolver *)local_188);
    }
  }
  else {
    local_3dc = 0;
  }
LAB_0010280e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_3dc;
}



/* glslang::TDefaultIoResolverBase::findSlot(int, int) */

int * __thiscall
glslang::TDefaultIoResolverBase::findSlot(TDefaultIoResolverBase *this,int param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int local_2c [3];
  
  local_2c[0] = param_1;
  lVar2 = std::__detail::
          _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        *)(this + 8),local_2c);
  lVar2 = *(long *)(lVar2 + 8);
  puVar3 = (undefined8 *)
           std::__detail::
           _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
           ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                         *)(this + 8),local_2c);
  piVar1 = (int *)*puVar3;
  lVar2 = lVar2 - (long)piVar1;
  lVar4 = lVar2 >> 2;
  do {
    if (lVar2 < 1) {
      return piVar1;
    }
    while( true ) {
      lVar2 = lVar4 >> 1;
      if (piVar1[lVar2] < param_2) break;
      lVar4 = lVar2;
      if (lVar2 < 1) {
        return piVar1;
      }
    }
    piVar1 = piVar1 + lVar2 + 1;
    lVar4 = (lVar4 - lVar2) + -1;
    lVar2 = lVar4;
  } while( true );
}



/* glslang::TDefaultIoResolverBase::checkEmpty(int, int) */

bool __thiscall
glslang::TDefaultIoResolverBase::checkEmpty(TDefaultIoResolverBase *this,int param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int local_1c;
  
  local_1c = param_1;
  piVar1 = (int *)findSlot(this,param_1,param_2);
  lVar2 = std::__detail::
          _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        *)(this + 8),&local_1c);
  bVar3 = true;
  if (*(int **)(lVar2 + 8) != piVar1) {
    bVar3 = *piVar1 != param_2;
  }
  return bVar3;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) [clone .isra.0] */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = uVar2 + param_2;
  if (pbVar4 == this + 0x18) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  if (uVar1 <= uVar3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        pbVar4[uVar2] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)*param_1;
        *(ulong *)(this + 0x10) = uVar1;
        *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
        return;
      }
      memcpy(pbVar4 + uVar2,param_1,param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    *(ulong *)(this + 0x10) = uVar1;
    pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
    return;
  }
  _M_mutate(this,uVar2,0,param_1,param_2);
  *(ulong *)(this + 0x10) = uVar1;
  *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair, __gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long, long,
   glslang::TVarLivePair, __gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}>&) [clone .isra.0] */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (long param_1,long param_2,long param_3,basic_string *param_4)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  byte bVar7;
  long lVar8;
  
  lVar6 = (param_2 + -1) - (param_2 + -1 >> 0x3f);
  if (param_3 < param_2) {
    do {
      lVar8 = lVar6 >> 1;
      this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (param_1 + lVar8 * 0x58);
      pcVar1 = *(code **)(**(long **)((basic_string *)this_00 + 0x30) + 0x108);
      if (pcVar1 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)((basic_string *)this_00 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar1)();
      }
      pcVar1 = *(code **)(**(long **)(param_4 + 0x30) + 0x108);
      if (pcVar1 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(param_4 + 0x30) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar1)();
      }
      bVar7 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      if (bVar7 == bVar3) {
        if (*(long *)(param_4 + 0x28) <= *(long *)((basic_string *)this_00 + 0x28))
        goto LAB_001033a0;
      }
      else if (bVar7 <= bVar3) goto LAB_001033a0;
      this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + param_2 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (this,(basic_string *)this_00);
      uVar2 = *(undefined8 *)((basic_string *)this_00 + 0x30);
      *(undefined8 *)(this + 0x28) = *(undefined8 *)((basic_string *)this_00 + 0x28);
      *(undefined8 *)(this + 0x30) = uVar2;
      uVar2 = *(undefined8 *)((basic_string *)this_00 + 0x40);
      lVar6 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      *(undefined8 *)(this + 0x38) = *(undefined8 *)((basic_string *)this_00 + 0x38);
      *(undefined8 *)(this + 0x40) = uVar2;
      uVar2 = *(undefined8 *)((basic_string *)this_00 + 0x50);
      *(undefined8 *)(this + 0x48) = *(undefined8 *)((basic_string *)this_00 + 0x48);
      *(undefined8 *)(this + 0x50) = uVar2;
      param_2 = lVar8;
    } while (param_3 < lVar8);
  }
  else {
LAB_001033a0:
    this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (param_1 + param_2 * 0x58);
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            (this_00,param_4);
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(this_00 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x50);
  *(undefined8 *)(this_00 + 0x48) = *(undefined8 *)(param_4 + 0x48);
  *(undefined8 *)(this_00 + 0x50) = uVar2;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long, long, glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>) [clone
   .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long, long, glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>) [clone
   .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  basic_string *pbVar9;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  basic_string *local_c8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  long local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar11 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar11 + 1) * 2;
      lVar10 = lVar3 + -1;
      pbVar9 = (basic_string *)(param_1 + (lVar11 + 1) * 0xb0);
      this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar10 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar9 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar9 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)((basic_string *)this + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)((basic_string *)this + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      if (pbVar9[0x38] == ((basic_string *)this)[0x38]) {
        bVar8 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
                ((short)plVar6[4] != -1) * '\x02';
        bVar5 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
                ((short)plVar7[4] != -1) * '\x02';
        if (bVar8 == bVar5) {
          bVar13 = *(long *)(pbVar9 + 0x28) < *(long *)((basic_string *)this + 0x28);
        }
        else {
          bVar13 = bVar8 != bVar5 && bVar5 <= bVar8;
        }
      }
      else {
        bVar13 = (byte)((basic_string *)this)[0x38] < (byte)pbVar9[0x38];
      }
      if (!bVar13) {
        lVar10 = lVar3;
        this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar9;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar11 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,(basic_string *)this);
      uVar4 = *(undefined8 *)((basic_string *)this + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)((basic_string *)this + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)((basic_string *)this + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)((basic_string *)this + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)((basic_string *)this + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)((basic_string *)this + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar11 = lVar10;
    } while (lVar10 < lVar12);
    if ((param_3 & 1) == 0) goto LAB_00103870;
LAB_0010388f:
    pbVar9 = (basic_string *)this;
    lVar11 = lVar10;
    lVar10 = (lVar10 + -1) / 2;
  }
  else {
    this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
           (param_1 + param_2 * 0x58);
    lVar10 = param_2;
    if ((param_3 & 1) != 0) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,param_4);
      local_70 = *(long *)(param_4 + 0x28);
      plStack_68 = *(long **)(param_4 + 0x30);
      local_60 = *(undefined8 *)(param_4 + 0x38);
      uStack_58 = *(undefined8 *)(param_4 + 0x40);
      local_50 = *(undefined8 *)(param_4 + 0x48);
      uStack_48 = *(undefined8 *)(param_4 + 0x50);
      goto LAB_00103a33;
    }
LAB_00103870:
    if ((long)(param_3 - 2) / 2 != lVar10) goto LAB_0010388f;
    lVar11 = lVar10 * 2 + 1;
    pbVar9 = (basic_string *)(param_1 + lVar11 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (this,pbVar9);
    uVar4 = *(undefined8 *)(pbVar9 + 0x30);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(pbVar9 + 0x28);
    *(undefined8 *)(this + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar9 + 0x40);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(pbVar9 + 0x38);
    *(undefined8 *)(this + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar9 + 0x50);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(pbVar9 + 0x48);
    *(undefined8 *)(this + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(long *)(param_4 + 0x28);
  plStack_68 = *(long **)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar9;
  while (param_2 < lVar11) {
    this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
           (param_1 + lVar10 * 0x58);
    pcVar2 = *(code **)(**(long **)((basic_string *)this + 0x30) + 0x108);
    if (pcVar2 == glslang::TIntermTyped::getQualifier) {
      plVar6 = *(long **)((basic_string *)this + 0x30) + 6;
    }
    else {
      plVar6 = (long *)(*pcVar2)();
    }
    if (*(code **)(*plStack_68 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar7 = plStack_68 + 6;
    }
    else {
      plVar7 = (long *)(**(code **)(*plStack_68 + 0x108))();
    }
    if (((basic_string *)this)[0x38] == local_60._0_1_) {
      bVar8 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      if (bVar8 != bVar5) {
        bVar13 = bVar5 < bVar8;
        goto LAB_00103905;
      }
      if (local_70 <= *(long *)((basic_string *)this + 0x28)) goto LAB_00103a27;
    }
    else {
      bVar13 = (byte)local_60._0_1_ < (byte)((basic_string *)this)[0x38];
LAB_00103905:
      if (!bVar13) {
LAB_00103a27:
        this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar11 * 0x58);
        break;
      }
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar11 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,(basic_string *)this);
    uVar4 = *(undefined8 *)((basic_string *)this + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)((basic_string *)this + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((basic_string *)this + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)((basic_string *)this + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)((basic_string *)this + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)((basic_string *)this + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
    lVar11 = lVar10;
    lVar10 = (lVar10 + -1) / 2;
  }
LAB_00103a33:
  local_c8 = (basic_string *)local_98;
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            (this,local_c8);
  *(long *)(this + 0x28) = local_70;
  *(long **)(this + 0x30) = plStack_68;
  *(undefined8 *)(this + 0x38) = local_60;
  *(undefined8 *)(this + 0x40) = uStack_58;
  *(undefined8 *)(this + 0x48) = local_50;
  *(undefined8 *)(this + 0x50) = uStack_48;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long, long, glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>) [clone
   .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long, long, glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>) [clone
   .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}>) [clone .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}>) [clone .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long, long,
   glslang::TVarLivePair,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}>) [clone .isra.0] */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (long param_1,long param_2,ulong param_3,basic_string *param_4,undefined8 param_5,
               undefined8 param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar12) {
    do {
      lVar3 = (lVar8 + 1) * 2;
      lVar13 = lVar3 + -1;
      pbVar11 = (basic_string *)(param_1 + (lVar8 + 1) * 0xb0);
      pbVar10 = (basic_string *)(param_1 + lVar13 * 0x58);
      pcVar2 = *(code **)(**(long **)(pbVar11 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar7 = *(long **)(pbVar11 + 0x30) + 6;
      }
      else {
        plVar7 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(pbVar10 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar6 = *(long **)(pbVar10 + 0x30) + 6;
      }
      else {
        plVar6 = (long *)(*pcVar2)();
      }
      bVar9 = ((*(uint *)((long)plVar7 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar7[4] != -1) * '\x02';
      bVar5 = ((*(uint *)((long)plVar6 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar6[4] != -1) * '\x02';
      if (bVar9 == bVar5) {
        if (*(long *)(pbVar10 + 0x28) <= *(long *)(pbVar11 + 0x28)) {
          pbVar10 = pbVar11;
          lVar13 = lVar3;
        }
      }
      else if (bVar9 <= bVar5) {
        pbVar10 = pbVar11;
        lVar13 = lVar3;
      }
      pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (param_1 + lVar8 * 0x58);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar1,pbVar10);
      uVar4 = *(undefined8 *)(pbVar10 + 0x30);
      *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar10 + 0x28);
      *(undefined8 *)(pbVar1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x40);
      *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar10 + 0x38);
      *(undefined8 *)(pbVar1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(pbVar10 + 0x50);
      *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar10 + 0x48);
      *(undefined8 *)(pbVar1 + 0x50) = uVar4;
      lVar8 = lVar13;
    } while (lVar13 < lVar12);
  }
  lVar8 = lVar13;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    lVar8 = lVar13 * 2 + 1;
    pbVar11 = (basic_string *)(param_1 + lVar8 * 0x58);
    pbVar1 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (param_1 + lVar13 * 0x58);
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              (pbVar1,pbVar11);
    uVar4 = *(undefined8 *)(pbVar11 + 0x30);
    *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(pbVar11 + 0x28);
    *(undefined8 *)(pbVar1 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x40);
    *(undefined8 *)(pbVar1 + 0x38) = *(undefined8 *)(pbVar11 + 0x38);
    *(undefined8 *)(pbVar1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(pbVar11 + 0x50);
    *(undefined8 *)(pbVar1 + 0x48) = *(undefined8 *)(pbVar11 + 0x48);
    *(undefined8 *)(pbVar1 + 0x50) = uVar4;
  }
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (local_98,param_4);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  uStack_58 = *(undefined8 *)(param_4 + 0x40);
  local_70 = *(undefined8 *)(param_4 + 0x28);
  uStack_68 = *(undefined8 *)(param_4 + 0x30);
  local_50 = *(undefined8 *)(param_4 + 0x48);
  uStack_48 = *(undefined8 *)(param_4 + 0x50);
  __push_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_val<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
            (param_1,lVar8,param_2,local_98,param_5,param_6,local_60,uStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>) [clone
   .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_00104a78;
    }
    else if (bVar5 <= bVar2) {
LAB_00104a78:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>) [clone
   .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar4 = plStack_58 + 6;
    }
    else {
      plVar4 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar3 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar3 = (long *)(*pcVar1)();
    }
    if (local_50._0_1_ ==
        ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1)[-0x20])
    {
      bVar5 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar2 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar3[4] != -1) * '\x02';
      if (bVar5 == bVar2) {
        if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      param_1 + -0x30) <= local_60) goto LAB_00104c1c;
      }
      else if (bVar5 <= bVar2) goto LAB_00104c1c;
    }
    else if ((byte)local_50._0_1_ <=
             (byte)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   param_1)[-0x20]) {
LAB_00104c1c:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>) [clone
   .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_00104dc8;
    }
    else if (bVar5 <= bVar2) {
LAB_00104dc8:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>) [clone
   .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_00104f68;
    }
    else if (bVar5 <= bVar2) {
LAB_00104f68:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}>) [clone .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_00105108;
    }
    else if (bVar5 <= bVar2) {
LAB_00105108:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}>) [clone .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_001052a8;
    }
    else if (bVar5 <= bVar2) {
LAB_001052a8:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}>) [clone .isra.0] */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_88 [40];
  long local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_88,param_1);
  local_60 = *(long *)(param_1 + 0x28);
  plStack_58 = *(long **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  do {
    if (*(code **)(*plStack_58 + 0x108) == glslang::TIntermTyped::getQualifier) {
      plVar3 = plStack_58 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plStack_58 + 0x108))();
    }
    pcVar1 = *(code **)(**(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1 + -0x28) + 0x108);
    if (pcVar1 == glslang::TIntermTyped::getQualifier) {
      plVar4 = *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1 + -0x28) + 6;
    }
    else {
      plVar4 = (long *)(*pcVar1)();
    }
    bVar5 = ((*(uint *)((long)plVar3 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar3[4] != -1) * '\x02';
    bVar2 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
            ((short)plVar4[4] != -1) * '\x02';
    if (bVar5 == bVar2) {
      if (*(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1 + -0x30) <= local_60) goto LAB_00105448;
    }
    else if (bVar5 <= bVar2) {
LAB_00105448:
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 (basic_string *)abStack_88);
      *(long *)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               0x28) = local_60;
      *(long **)((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1
                + 0x30) = plStack_58;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
           local_50;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
           uStack_48;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
           local_40;
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
           uStack_38;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (basic_string *)
               ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
               -0x58));
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x28) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x30);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x30) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x28);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x38) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x20);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x40) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x18);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x48) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
          -0x10);
    *(undefined8 *)
     ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + 0x50) =
         *(undefined8 *)
          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 + -8);
    param_1 = (basic_string *)
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1 +
              -0x58);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>) [clone
   .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_001056ae;
LAB_001055b5:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_001055b5;
LAB_001056ae:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>) [clone
   .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_001058ce;
LAB_001057d5:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_001057d5;
LAB_001058ce:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}>) [clone .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_00105aee;
LAB_001059f5:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_001059f5;
LAB_00105aee:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>) [clone
   .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      if (pbVar7[-0x20] == param_1[0x38]) {
        bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
                ((short)plVar4[4] != -1) * '\x02';
        bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
                ((short)plVar5[4] != -1) * '\x02';
        if (bVar6 == bVar3) {
          if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) {
            __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                      (pbVar1);
            goto LAB_00105ca3;
          }
        }
        else if (bVar6 <= bVar3) goto LAB_00105d28;
LAB_00105bec:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if ((byte)param_1[0x38] < (byte)pbVar7[-0x20]) goto LAB_00105bec;
LAB_00105d28:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                  (pbVar1);
      }
LAB_00105ca3:
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}>) [clone .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_00105f6e;
LAB_00105e75:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_00105e75;
LAB_00105f6e:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>) [clone
   .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_0010618e;
LAB_00106095:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_00106095;
LAB_0010618e:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}>) [clone .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2)

{
  basic_string *pbVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long in_FS_OFFSET;
  bool bVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 0x58)) {
    pbVar7 = param_1 + 0xb0;
    do {
      pbVar1 = (basic_string *)(pbVar7 + -0x58);
      pcVar2 = *(code **)(**(long **)(pbVar7 + -0x28) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar4 = *(long **)(pbVar7 + -0x28) + 6;
      }
      else {
        plVar4 = (long *)(*pcVar2)();
      }
      pcVar2 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar2 == glslang::TIntermTyped::getQualifier) {
        plVar5 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar5 = (long *)(*pcVar2)();
      }
      bVar6 = ((*(uint *)((long)plVar4 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar4[4] != -1) * '\x02';
      bVar3 = ((*(uint *)((long)plVar5 + 0x1c) & 0x3f8000) != 0x1f8000) +
              ((short)plVar5[4] != -1) * '\x02';
      if (bVar6 == bVar3) {
        if (*(long *)(param_1 + 0x28) <= *(long *)(pbVar7 + -0x30)) goto LAB_001063ae;
LAB_001062b5:
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string(local_98,pbVar1);
        local_70 = *(undefined8 *)(pbVar7 + -0x30);
        uStack_68 = *(undefined8 *)(pbVar7 + -0x28);
        local_60 = *(undefined8 *)(pbVar7 + -0x20);
        uStack_58 = *(undefined8 *)(pbVar7 + -0x18);
        local_50 = *(undefined8 *)(pbVar7 + -0x10);
        uStack_48 = *(undefined8 *)(pbVar7 + -8);
        if (0 < (long)pbVar1 - (long)param_1) {
          this = pbVar7 + -0x58;
          do {
            __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_assign(this,(basic_string *)(this + -0x58));
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + -0x30);
            *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + -0x28);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + -0x20);
            *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + -0x18);
            *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + -0x10);
            *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + -8);
            bVar8 = this != pbVar7 + ((long)pbVar1 - (long)param_1 >> 3) * -8;
            this = this + -0x58;
          } while (bVar8);
        }
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (param_1,(basic_string *)local_98);
        *(undefined8 *)(param_1 + 0x28) = local_70;
        *(undefined8 *)(param_1 + 0x30) = uStack_68;
        *(undefined8 *)(param_1 + 0x38) = local_60;
        *(undefined8 *)(param_1 + 0x40) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = local_50;
        *(undefined8 *)(param_1 + 0x50) = uStack_48;
      }
      else {
        if (bVar3 < bVar6) goto LAB_001062b5;
LAB_001063ae:
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                  (pbVar1);
      }
      bVar8 = param_2 != pbVar7;
      pbVar7 = pbVar7 + 0x58;
    } while (bVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TDefaultIoResolverBase::reserveSlot(int, int, int) */

int __thiscall
glslang::TDefaultIoResolverBase::reserveSlot
          (TDefaultIoResolverBase *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *__src;
  vector<int,std::allocator<int>> *pvVar2;
  long lVar3;
  size_t __n;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_4c [2];
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c[0] = param_1;
  __src = (int *)findSlot(this,param_1,param_2);
  if (0 < param_3) {
    iVar5 = param_2;
    do {
      while ((lVar3 = std::__detail::
                      _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                      ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                    *)(this + 8),local_4c), *(int **)(lVar3 + 8) != __src &&
             (*__src == iVar5))) {
        iVar5 = iVar5 + 1;
        __src = __src + 1;
        if (param_3 + param_2 == iVar5) goto LAB_001064f4;
      }
      pvVar2 = (vector<int,std::allocator<int>> *)
               std::__detail::
               _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
               ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                             *)(this + 8),local_4c);
      piVar1 = *(int **)(pvVar2 + 8);
      lVar3 = *(long *)pvVar2;
      local_44 = iVar5;
      if (piVar1 == *(int **)(pvVar2 + 0x10)) {
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>(pvVar2,__src,&local_44);
        __src = (int *)((long)__src + ((*(long *)pvVar2 + 4) - lVar3));
      }
      else if (piVar1 == __src) {
        *__src = iVar5;
        __src = __src + 1;
        *(int **)(pvVar2 + 8) = __src;
      }
      else {
        __n = (long)piVar1 + (-4 - (long)__src);
        *piVar1 = piVar1[-1];
        *(int **)(pvVar2 + 8) = piVar1 + 1;
        if ((long)__n < 5) {
          piVar4 = __src;
          if (__n == 4) {
            piVar1[-1] = *__src;
          }
        }
        else {
          memmove((void *)((long)piVar1 - __n),__src,__n);
          piVar4 = (int *)((long)__src + (*(long *)pvVar2 - lVar3));
        }
        *__src = iVar5;
        __src = piVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (param_3 + param_2 != iVar5);
  }
LAB_001064f4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* glslang::TDefaultIoResolverBase::getFreeSlot(int, int, int) */

void __thiscall
glslang::TDefaultIoResolverBase::getFreeSlot
          (TDefaultIoResolverBase *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int local_3c [3];
  
  local_3c[0] = param_1;
  piVar2 = (int *)findSlot(this,param_1,param_2);
  lVar3 = std::__detail::
          _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        *)(this + 8),local_3c);
  if (*(int **)(lVar3 + 8) != piVar2) {
    while (lVar3 = std::__detail::
                   _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                   ::operator[]((_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                 *)(this + 8),local_3c), *(int **)(lVar3 + 8) != piVar2) {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      if (param_3 <= iVar1 - param_2) break;
      param_2 = iVar1 + 1;
    }
  }
  reserveSlot(this,param_1,param_2,param_3);
  return;
}



/* glslang::TVarLivePair& std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair>
   >::emplace_back<glslang::TVarLivePair>(glslang::TVarLivePair&&) [clone .isra.0] */

TVarLivePair * __thiscall
std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
emplace_back<glslang::TVarLivePair>
          (vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *this,
          TVarLivePair *param_1)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TVarLivePair *pTVar6;
  TVarLivePair *extraout_RAX;
  
  this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  if (this_00 !=
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 0x10)) {
    pTVar6 = (TVarLivePair *)
             __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
             basic_string(this_00,(basic_string *)param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    *(undefined8 *)(this_00 + 0x38) = uVar2;
    *(undefined8 *)(this_00 + 0x40) = uVar3;
    *(undefined8 *)(this_00 + 0x48) = uVar4;
    *(undefined8 *)(this_00 + 0x50) = uVar5;
    *(long *)(this + 8) = *(long *)(this + 8) + 0x58;
    return pTVar6;
  }
  _M_realloc_insert<glslang::TVarLivePair>(this,this_00,param_1);
  return extraout_RAX;
}



/* glslang::TDefaultGlslIoResolver::resolveInOutLocation(EShLanguage, glslang::TVarEntryInfo&) */

uint __thiscall
glslang::TDefaultGlslIoResolver::resolveInOutLocation
          (TDefaultGlslIoResolver *this,int param_2,long param_3)

{
  map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
  *this_00;
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  basic_string *pbVar4;
  ulong uVar5;
  long lVar6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_01;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  long in_FS_OFFSET;
  uint local_7c;
  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  local_78 [8];
  undefined4 local_70 [2];
  _Rb_tree_node *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = **(long **)(param_3 + 8);
  if (*(code **)(lVar6 + 0xf0) == TIntermTyped::getType) {
    plVar9 = *(long **)(param_3 + 8) + 4;
  }
  else {
    plVar9 = (long *)(**(code **)(lVar6 + 0xf0))();
    lVar6 = **(long **)(param_3 + 8);
  }
  pbVar4 = (basic_string *)(**(code **)(lVar6 + 0x198))();
  if (*(int *)(this + 0xe4) != param_2) {
    *(ulong *)(this + 0xe0) = CONCAT44(param_2,*(int *)(this + 0xe4));
  }
  if (*(char *)(*(long *)(this + 0x48) + 0x4d1) == '\0') {
LAB_001069e8:
    uVar13 = 0xffffffff;
    goto LAB_0010673e;
  }
  pcVar10 = *(code **)(*plVar9 + 0x58);
  if (pcVar10 == TType::getQualifier) {
    if ((~*(ushort *)((long)plVar9 + 0x2c) & 0xfff) == 0) {
      pcVar10 = *(code **)(*plVar9 + 0x148);
      if (pcVar10 != TType::isBuiltIn) goto LAB_001069d8;
LAB_00106787:
      plVar11 = plVar9 + 2;
LAB_0010678b:
      if (0x7f < *(ushort *)(plVar11 + 1)) goto LAB_001069e8;
LAB_00106796:
      plVar11 = plVar9 + 2;
      if (*(code **)(*plVar9 + 0x58) != TType::getQualifier) {
        plVar11 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9);
      }
      if (plVar11[8] != 0) goto LAB_001069e8;
      if (*(code **)(*plVar9 + 0x128) == TType::isStruct) {
        if ((byte)((char)plVar9[1] - 0xfU) < 2) {
LAB_001067dd:
          puVar1 = *(undefined8 **)(plVar9[0xd] + 8);
          if ((puVar1 == *(undefined8 **)(plVar9[0xd] + 0x10)) ||
             (cVar2 = (**(code **)(*(long *)*puVar1 + 0x148))(), cVar2 != '\0')) goto LAB_001069e8;
        }
      }
      else {
        cVar2 = (**(code **)(*plVar9 + 0x128))(plVar9);
        if (cVar2 != '\0') goto LAB_001067dd;
      }
      iVar3 = TDefaultIoResolverBase::computeTypeLocationSize
                        ((TDefaultIoResolverBase *)this,plVar9,param_2);
      lVar6 = *plVar9;
      if (*(code **)(lVar6 + 0x58) == TType::getQualifier) {
LAB_00106826:
        uVar5 = (ulong)(*(byte *)(plVar9 + 3) & 0x7f);
        if (0x1b < (byte)(*(byte *)(plVar9 + 3) & 0x7f)) {
          iVar14 = 0xe;
          goto LAB_00106863;
        }
        iVar14 = 0xe;
        if ((0xe300008UL >> (uVar5 & 0x3f) & 1) != 0) {
LAB_00106847:
          iVar14 = *(int *)(this + 0xe0);
          goto LAB_0010684e;
        }
LAB_00106867:
        if ((0x71c00010UL >> (uVar5 & 0x3f) & 1) != 0) {
          iVar14 = *(int *)(this + 0xe4);
        }
      }
      else {
        (**(code **)(lVar6 + 0x58))(plVar9);
        lVar6 = *plVar9;
        if (*(code **)(lVar6 + 0x58) == TType::getQualifier) goto LAB_00106826;
        lVar6 = (**(code **)(lVar6 + 0x58))(plVar9);
        uVar13 = *(byte *)(lVar6 + 8) & 0x7f;
        if (((byte)uVar13 < 0x1c) && ((0xe300008UL >> ((ulong)uVar13 & 0x3f) & 1) != 0)) {
          lVar6 = *plVar9;
          goto LAB_00106847;
        }
        lVar6 = *plVar9;
        iVar14 = 0xe;
LAB_0010684e:
        if (*(code **)(lVar6 + 0x58) == TType::getQualifier) {
          uVar5 = (ulong)(*(byte *)(plVar9 + 3) & 0x7f);
        }
        else {
          lVar6 = (**(code **)(lVar6 + 0x58))(plVar9);
          uVar5 = (ulong)(*(byte *)(lVar6 + 8) & 0x7f);
        }
LAB_00106863:
        if ((byte)uVar5 < 0x1f) goto LAB_00106867;
      }
      this_00 = (map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 *)(this + 0x118);
      uVar13 = iVar14 << 0x10 | 0x12;
      local_7c = uVar13;
      lVar6 = std::
              map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
              ::operator[](this_00,(int *)&local_7c);
      if (*(long *)(lVar6 + 0x28) == 0) {
        local_60 = local_70;
        local_70[0] = 0;
        local_68 = (_Rb_tree_node *)0x0;
        local_50 = 0;
        local_58 = local_60;
        uVar13 = TDefaultIoResolverBase::getFreeSlot((TDefaultIoResolverBase *)this,uVar13,0,iVar3);
        puVar12 = (uint *)std::
                          map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                          ::operator[](local_78,pbVar4);
        *puVar12 = uVar13;
        p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                  *)std::
                    map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                    ::operator[](this_00,(int *)&local_7c);
        if (p_Var7 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                       *)local_78) {
          std::
          _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
          ::operator=(p_Var7,(_Rb_tree *)local_78);
        }
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
        ::_M_erase(local_68);
      }
      else {
        p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                  *)std::
                    map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                    ::operator[](this_00,(int *)&local_7c);
        lVar6 = std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                ::find(p_Var7,pbVar4);
        lVar8 = std::
                map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                ::operator[](this_00,(int *)&local_7c);
        if (lVar6 == lVar8 + 8) {
          uVar13 = TDefaultIoResolverBase::getFreeSlot
                             ((TDefaultIoResolverBase *)this,uVar13,0,iVar3);
          this_01 = (map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                     *)std::
                       map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                       ::operator[](this_00,(int *)&local_7c);
          puVar12 = (uint *)std::
                            map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                            ::operator[](this_01,pbVar4);
          *puVar12 = uVar13;
        }
        else {
          uVar13 = *(uint *)(lVar6 + 0x48);
        }
      }
      goto LAB_0010673e;
    }
LAB_0010672e:
    plVar9 = plVar9 + 2;
  }
  else {
    lVar6 = (*pcVar10)(plVar9);
    if ((~*(ushort *)(lVar6 + 0x1c) & 0xfff) == 0) {
      pcVar10 = *(code **)(*plVar9 + 0x148);
      if (pcVar10 == TType::isBuiltIn) {
        pcVar10 = *(code **)(*plVar9 + 0x58);
        if (pcVar10 == TType::getQualifier) goto LAB_00106787;
        plVar11 = (long *)(*pcVar10)(plVar9);
        goto LAB_0010678b;
      }
LAB_001069d8:
      cVar2 = (*pcVar10)(plVar9);
      if (cVar2 == '\0') goto LAB_00106796;
      goto LAB_001069e8;
    }
    if (*(code **)(*plVar9 + 0x58) == TType::getQualifier) goto LAB_0010672e;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9);
  }
  uVar13 = *(ushort *)((long)plVar9 + 0x1c) & 0xfff;
LAB_0010673e:
  *(uint *)(param_3 + 0x1c) = uVar13;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* glslang::TDefaultGlslIoResolver::resolveUniformLocation(EShLanguage, glslang::TVarEntryInfo&) */

uint __thiscall
glslang::TDefaultGlslIoResolver::resolveUniformLocation
          (TDefaultGlslIoResolver *this,undefined8 param_2,long param_3)

{
  map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
  *this_00;
  ushort uVar1;
  char cVar2;
  int iVar3;
  basic_string *pbVar4;
  TType *pTVar5;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  TType *pTVar11;
  long *plVar12;
  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_01;
  uint *puVar13;
  uint uVar14;
  long in_FS_OFFSET;
  int local_7c;
  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  local_78 [8];
  undefined4 local_70 [2];
  _Rb_tree_node *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = **(long **)(param_3 + 8);
  if (*(code **)(lVar8 + 0xf0) == TIntermTyped::getType) {
    pTVar11 = (TType *)(*(long **)(param_3 + 8) + 4);
  }
  else {
    pTVar11 = (TType *)(**(code **)(lVar8 + 0xf0))();
    lVar8 = **(long **)(param_3 + 8);
  }
  pbVar4 = (basic_string *)(**(code **)(lVar8 + 0x198))();
  if (*(char *)(*(long *)(this + 0x48) + 0x4d1) == '\0') goto LAB_00106e40;
  lVar8 = *(long *)pTVar11;
  if (*(code **)(lVar8 + 0x58) != TType::getQualifier) {
    lVar10 = (**(code **)(lVar8 + 0x58))(pTVar11);
    lVar8 = *(long *)pTVar11;
    if ((~*(ushort *)(lVar10 + 0x1c) & 0xfff) != 0) goto LAB_00106b8d;
    goto LAB_00106c22;
  }
  if ((~*(ushort *)(pTVar11 + 0x2c) & 0xfff) != 0) {
LAB_00106b8d:
    if (*(code **)(lVar8 + 0x128) == TType::isStruct) {
      if (1 < (byte)((char)pTVar11[8] - 0xfU)) {
LAB_00106c04:
        if (*(code **)(lVar8 + 0xe8) == TType::isArray) {
          if (*(long *)(pTVar11 + 0x60) == 0) {
LAB_00106c22:
            if (*(code **)(lVar8 + 0x58) == TType::getQualifier) {
              uVar1 = *(ushort *)(pTVar11 + 0x2c);
            }
            else {
              lVar8 = (**(code **)(lVar8 + 0x58))(pTVar11);
              uVar1 = *(ushort *)(lVar8 + 0x1c);
            }
            if ((uVar1 & 0xfff) != 0xfff) goto LAB_00106e40;
            pcVar9 = *(code **)(*(long *)pTVar11 + 0x148);
            if (pcVar9 != TType::isBuiltIn) goto LAB_00106e30;
            pcVar9 = *(code **)(*(long *)pTVar11 + 0x58);
            if (pcVar9 == TType::getQualifier) goto LAB_00106c8b;
            pTVar5 = (TType *)(*pcVar9)(pTVar11);
            goto LAB_00106c8f;
          }
        }
        else {
          cVar2 = (**(code **)(lVar8 + 0xe8))(pTVar11);
          lVar8 = *(long *)pTVar11;
          if (cVar2 == '\0') goto LAB_00106c22;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar8 + 0x128))(pTVar11);
      lVar8 = *(long *)pTVar11;
      if (cVar2 == '\0') goto LAB_00106c04;
    }
    if (*(code **)(lVar8 + 0x58) == TType::getQualifier) {
      pTVar11 = pTVar11 + 0x10;
    }
    else {
      pTVar11 = (TType *)(**(code **)(lVar8 + 0x58))(pTVar11);
    }
    uVar14 = *(ushort *)(pTVar11 + 0x1c) & 0xfff;
    goto LAB_00106bca;
  }
  pcVar9 = *(code **)(lVar8 + 0x148);
  if (pcVar9 == TType::isBuiltIn) {
LAB_00106c8b:
    pTVar5 = pTVar11 + 0x10;
LAB_00106c8f:
    if (*(ushort *)(pTVar5 + 8) < 0x80) {
LAB_00106c9a:
      if (*(code **)(*(long *)pTVar11 + 0x38) == TType::getBasicType) {
        uVar14 = (uint)(byte)pTVar11[8];
      }
      else {
        uVar14 = (**(code **)(*(long *)pTVar11 + 0x38))(pTVar11);
      }
      if ((uVar14 != 0x10) && (uVar14 = (uint)(byte)pTVar11[8], pTVar11[8] != (TType)0xd)) {
        if (*(code **)(*(long *)pTVar11 + 0x38) != TType::getBasicType) {
          uVar14 = (**(code **)(*(long *)pTVar11 + 0x38))(pTVar11);
        }
        if (uVar14 != 0x16) {
          if (*(code **)(*(long *)pTVar11 + 0x1b0) == TType::containsOpaque) {
            cVar2 = TType::
                    contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                              ();
          }
          else {
            cVar2 = (**(code **)(*(long *)pTVar11 + 0x1b0))(pTVar11);
          }
          if ((cVar2 == '\0') || (*(int *)(*(long *)(this + 0x48) + 0x74) != 0)) {
            if (*(code **)(*(long *)pTVar11 + 0x128) == TType::isStruct) {
              if ((byte)((char)pTVar11[8] - 0xfU) < 2) {
LAB_00106d40:
                plVar12 = *(long **)(*(long *)(pTVar11 + 0x68) + 8);
                if (*(long **)(*(long *)(pTVar11 + 0x68) + 0x10) != plVar12) {
                  plVar12 = (long *)*plVar12;
                  lVar8 = *plVar12;
                  pcVar9 = *(code **)(lVar8 + 0x148);
                  if (pcVar9 == TType::isBuiltIn) {
                    pcVar9 = *(code **)(lVar8 + 0x58);
                    if (pcVar9 == TType::getQualifier) {
                      plVar12 = plVar12 + 2;
                    }
                    else {
                      plVar12 = (long *)(*pcVar9)();
                    }
                    if (*(ushort *)(plVar12 + 1) < 0x80) goto LAB_00106d88;
                  }
                  else {
                    cVar2 = (*pcVar9)();
                    if (cVar2 == '\0') goto LAB_00106d88;
                  }
                }
                goto LAB_00106e40;
              }
            }
            else {
              cVar2 = (**(code **)(*(long *)pTVar11 + 0x128))(pTVar11);
              if (cVar2 != '\0') goto LAB_00106d40;
            }
LAB_00106d88:
            uVar14 = TIntermediate::getUniformLocationOverride
                               (*(TIntermediate **)(this + 0x48),*(char **)(pbVar4 + 8));
            if (uVar14 == 0xffffffff) {
              iVar3 = glslang::TIntermediate::computeTypeUniformLocationSize(pTVar11);
              local_7c = 0xe0005;
              this_00 = (map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                         *)(this + 0x118);
              p_Var6 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                        *)std::
                          map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                          ::operator[](this_00,&local_7c);
              if (*(long *)(p_Var6 + 0x28) == 0) {
                local_60 = local_70;
                local_70[0] = 0;
                local_68 = (_Rb_tree_node *)0x0;
                local_50 = 0;
                local_58 = local_60;
                uVar14 = TDefaultIoResolverBase::getFreeSlot
                                   ((TDefaultIoResolverBase *)this,0xe0005,0,iVar3);
                puVar13 = (uint *)std::
                                  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                                  ::operator[](local_78,pbVar4);
                *puVar13 = uVar14;
                p_Var6 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                          *)std::
                            map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                            ::operator[](this_00,&local_7c);
                if (p_Var6 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                               *)local_78) {
                  std::
                  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                  ::operator=(p_Var6,(_Rb_tree *)local_78);
                }
                std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                ::_M_erase(local_68);
              }
              else {
                p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                          *)std::
                            _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                            ::find(p_Var6,pbVar4);
                if (p_Var7 == p_Var6 + 8) {
                  iVar3 = TDefaultIoResolverBase::computeTypeLocationSize
                                    ((TDefaultIoResolverBase *)this,pTVar11,
                                     *(undefined4 *)(this + 0xe4));
                  uVar14 = TDefaultIoResolverBase::getFreeSlot
                                     ((TDefaultIoResolverBase *)this,0xe0005,0,iVar3);
                  this_01 = (map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                             *)std::
                               map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                               ::operator[](this_00,&local_7c);
                  puVar13 = (uint *)std::
                                    map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                                    ::operator[](this_01,pbVar4);
                  *puVar13 = uVar14;
                }
                else {
                  uVar14 = *(uint *)(p_Var7 + 0x48);
                }
              }
            }
            goto LAB_00106bca;
          }
        }
      }
    }
  }
  else {
LAB_00106e30:
    cVar2 = (*pcVar9)(pTVar11);
    if (cVar2 == '\0') goto LAB_00106c9a;
  }
LAB_00106e40:
  uVar14 = 0xffffffff;
LAB_00106bca:
  *(uint *)(param_3 + 0x1c) = uVar14;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* glslang::TDefaultGlslIoResolver::resolveBinding(EShLanguage, glslang::TVarEntryInfo&) */

undefined4 __thiscall
glslang::TDefaultGlslIoResolver::resolveBinding
          (TDefaultGlslIoResolver *this,undefined4 param_2,long param_3)

{
  map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
  *this_00;
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  basic_string *pbVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_01;
  undefined4 *puVar12;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_02;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = **(long **)(param_3 + 8);
  if (*(code **)(lVar11 + 0xf0) == TIntermTyped::getType) {
    plVar10 = *(long **)(param_3 + 8) + 4;
  }
  else {
    plVar10 = (long *)(**(code **)(lVar11 + 0xf0))();
    lVar11 = **(long **)(param_3 + 8);
  }
  pbVar8 = (basic_string *)(**(code **)(lVar11 + 0x198))();
  if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
LAB_001070f0:
    iVar14 = 1;
  }
  else {
    pcVar2 = *(code **)(*plVar10 + 0xf0);
    if (pcVar2 == TType::isSizedArray) {
      pcVar2 = *(code **)(*plVar10 + 0xe8);
      if (pcVar2 == TType::isArray) {
        lVar11 = plVar10[0xc];
        if (lVar11 != 0) {
LAB_00107074:
          if (**(int **)(*(long *)(lVar11 + 8) + 8) != 0) goto LAB_00107082;
        }
      }
      else {
        cVar4 = (*pcVar2)(plVar10);
        if (cVar4 != '\0') {
          lVar11 = plVar10[0xc];
          goto LAB_00107074;
        }
      }
      goto LAB_001070f0;
    }
    cVar4 = (*pcVar2)(plVar10);
    if (cVar4 == '\0') goto LAB_001070f0;
LAB_00107082:
    if (*(code **)(*plVar10 + 0x88) == TType::getCumulativeArraySize) {
      lVar11 = *(long *)(plVar10[0xc] + 8);
      if (lVar11 != 0) {
        piVar9 = *(int **)(lVar11 + 8);
        iVar5 = (int)(*(long *)(lVar11 + 0x10) - (long)piVar9 >> 4);
        if (0 < iVar5) {
          iVar14 = 1;
          piVar1 = piVar9 + (ulong)(iVar5 - 1) * 4 + 4;
          do {
            iVar14 = iVar14 * *piVar9;
            piVar9 = piVar9 + 4;
          } while (piVar9 != piVar1);
          goto LAB_001070f6;
        }
      }
      goto LAB_001070f0;
    }
    iVar14 = (**(code **)(*plVar10 + 0x88))(plVar10);
  }
LAB_001070f6:
  iVar5 = (**(code **)(*(long *)this + 0xa8))(this,plVar10);
  if (iVar5 == 3) {
    if (*(code **)(*plVar10 + 0x38) == TType::getBasicType) {
      uVar7 = (uint)*(byte *)(plVar10 + 1);
    }
    else {
      uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    if (uVar7 != 0x10) goto LAB_001073c0;
    if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
      local_44 = *(int *)(param_3 + 0x18);
    }
    else {
      local_44 = 3;
    }
  }
  else {
    local_44 = iVar5;
    if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
      local_44 = *(int *)(param_3 + 0x18);
    }
    if (5 < iVar5) {
LAB_001073c0:
      *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
      uVar6 = 0xffffffff;
      goto LAB_00107182;
    }
  }
  iVar3 = local_44;
  if (*(code **)(*plVar10 + 0x58) == TType::getQualifier) {
    uVar7 = (uint)*(ushort *)(plVar10 + 6);
    if (*(ushort *)(plVar10 + 6) == 0xffff) {
LAB_00107280:
      this_00 = (map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 *)(this + 0xe8);
      *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
      lVar11 = std::
               map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
               ::operator[](this_00,&local_44);
      if (*(long *)(lVar11 + 0x28) != 0) {
        this_02 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                   *)std::
                     map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                     ::operator[](this_00,&local_44);
        lVar11 = std::
                 _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                 ::find(this_02,pbVar8);
        lVar13 = std::
                 map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 ::operator[](this_00,&local_44);
        if (lVar11 != lVar13 + 8) {
          uVar6 = *(undefined4 *)(lVar11 + 0x48);
          *(undefined4 *)(param_3 + 0x14) = uVar6;
          goto LAB_00107182;
        }
      }
      if ((*(char *)(param_3 + 0x10) == '\0') || (*(char *)(*(long *)(this + 0x48) + 0x4d0) == '\0')
         ) {
        uVar6 = *(undefined4 *)(param_3 + 0x14);
      }
      else {
        iVar5 = TDefaultIoResolverBase::getBaseBinding
                          ((TDefaultIoResolverBase *)this,param_2,iVar5,iVar3);
        uVar6 = TDefaultIoResolverBase::getFreeSlot
                          ((TDefaultIoResolverBase *)this,iVar3,iVar5,iVar14);
        this_01 = (map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                   *)std::
                     map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                     ::operator[](this_00,&local_44);
        puVar12 = (undefined4 *)
                  std::
                  map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                  ::operator[](this_01,pbVar8);
        *puVar12 = uVar6;
        *(undefined4 *)(param_3 + 0x14) = uVar6;
      }
      goto LAB_00107182;
    }
    iVar5 = TDefaultIoResolverBase::getBaseBinding
                      ((TDefaultIoResolverBase *)this,param_2,iVar5,local_44);
  }
  else {
    lVar11 = (**(code **)(*plVar10 + 0x58))(plVar10);
    if (*(short *)(lVar11 + 0x20) == -1) goto LAB_00107280;
    iVar5 = TDefaultIoResolverBase::getBaseBinding
                      ((TDefaultIoResolverBase *)this,param_2,iVar5,iVar3);
    if (*(code **)(*plVar10 + 0x58) == TType::getQualifier) {
      uVar7 = (uint)*(ushort *)(plVar10 + 6);
    }
    else {
      lVar11 = (**(code **)(*plVar10 + 0x58))(plVar10);
      uVar7 = (uint)*(ushort *)(lVar11 + 0x20);
    }
  }
  uVar6 = TDefaultIoResolverBase::reserveSlot
                    ((TDefaultIoResolverBase *)this,iVar3,(uVar7 & 0xffff) + iVar5,iVar14);
  *(undefined4 *)(param_3 + 0x14) = uVar6;
LAB_00107182:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* glslang::TDefaultGlslIoResolver::reserverStorageSlot(glslang::TVarEntryInfo&, TInfoSink&) */

void __thiscall
glslang::TDefaultGlslIoResolver::reserverStorageSlot
          (TDefaultGlslIoResolver *this,TVarEntryInfo *param_1,TInfoSink *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  basic_string *pbVar4;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_00;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var5;
  uint *puVar6;
  long lVar7;
  TType *pTVar8;
  TType *pTVar9;
  byte bVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint local_6c;
  char local_68 [8];
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = **(long **)(param_1 + 8);
  if (*(code **)(lVar7 + 0xf0) == TIntermTyped::getType) {
    pTVar8 = (TType *)(*(long **)(param_1 + 8) + 4);
  }
  else {
    pTVar8 = (TType *)(**(code **)(lVar7 + 0xf0))();
    lVar7 = **(long **)(param_1 + 8);
  }
  pbVar4 = (basic_string *)(**(code **)(lVar7 + 0x198))();
  lVar7 = *(long *)pTVar8;
  if (*(code **)(lVar7 + 0x58) == TType::getQualifier) {
    bVar10 = (byte)pTVar8[0x18] & 0x7f;
    if (4 < bVar10) {
      if (bVar10 != 5) goto LAB_00107530;
      goto LAB_00107465;
    }
    if (bVar10 < 3) goto LAB_00107530;
LAB_0010755e:
    pTVar9 = pTVar8 + 0x10;
LAB_00107562:
    if ((~*(ushort *)(pTVar9 + 0x1c) & 0xfff) == 0) goto LAB_00107530;
    iVar2 = *(int *)(this + 0xe4);
    if (bVar10 == 3) {
      iVar2 = *(int *)(this + 0xe0);
    }
    uVar3 = iVar2 << 0x10 | 0x12;
    local_6c = uVar3;
    if (*(code **)(*(long *)pTVar8 + 0x58) == TType::getQualifier) {
      pTVar9 = pTVar8 + 0x10;
    }
    else {
      pTVar9 = (TType *)(**(code **)(*(long *)pTVar8 + 0x58))(pTVar8);
    }
    uVar1 = *(ushort *)(pTVar9 + 0x1c);
    this_00 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
               *)std::
                 map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 ::operator[]((map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                               *)(this + 0x118),(int *)&local_6c);
    uVar11 = uVar1 & 0xfff;
    p_Var5 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
              *)std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                ::find(this_00,pbVar4);
    if (p_Var5 != this_00 + 8) goto LAB_001075de;
    iVar2 = glslang::TIntermediate::computeTypeUniformLocationSize(pTVar8);
  }
  else {
    lVar7 = (**(code **)(lVar7 + 0x58))(pTVar8);
    bVar10 = *(byte *)(lVar7 + 8) & 0x7f;
    if (bVar10 < 5) {
      if (bVar10 < 3) goto LAB_00107530;
      if (*(code **)(*(long *)pTVar8 + 0x58) == TType::getQualifier) goto LAB_0010755e;
      pTVar9 = (TType *)(**(code **)(*(long *)pTVar8 + 0x58))(pTVar8);
      goto LAB_00107562;
    }
    if (bVar10 != 5) goto LAB_00107530;
    lVar7 = *(long *)pTVar8;
LAB_00107465:
    if (*(code **)(lVar7 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)pTVar8[8];
    }
    else {
      uVar3 = (**(code **)(lVar7 + 0x38))(pTVar8);
    }
    if (uVar3 == 0x10) goto LAB_00107530;
    if (*(code **)(*(long *)pTVar8 + 0x58) == TType::getQualifier) {
      pTVar9 = pTVar8 + 0x10;
    }
    else {
      pTVar9 = (TType *)(**(code **)(*(long *)pTVar8 + 0x58))(pTVar8);
    }
    if ((~*(ushort *)(pTVar9 + 0x1c) & 0xfff) == 0) goto LAB_00107530;
    local_6c = 0xe0005;
    if (*(code **)(*(long *)pTVar8 + 0x58) == TType::getQualifier) {
      pTVar9 = pTVar8 + 0x10;
    }
    else {
      pTVar9 = (TType *)(**(code **)(*(long *)pTVar8 + 0x58))(pTVar8);
    }
    uVar1 = *(ushort *)(pTVar9 + 0x1c);
    this_00 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
               *)std::
                 map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 ::operator[]((map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                               *)(this + 0x118),(int *)&local_6c);
    uVar11 = uVar1 & 0xfff;
    p_Var5 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
              *)std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                ::find(this_00,pbVar4);
    if (p_Var5 != this_00 + 8) {
LAB_001075de:
      if (*(uint *)(p_Var5 + 0x48) != uVar11) {
        std::operator+(local_68,(basic_string *)"Invalid location: ");
        TInfoSinkBase::message(param_2,3,local_60);
        this[0x40] = (TDefaultGlslIoResolver)0x1;
      }
      goto LAB_00107530;
    }
    iVar2 = glslang::TIntermediate::computeTypeUniformLocationSize(pTVar8);
    uVar3 = 0xe0005;
  }
  TDefaultIoResolverBase::reserveSlot((TDefaultIoResolverBase *)this,uVar3,uVar11,iVar2);
  puVar6 = (uint *)std::
                   map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                   ::operator[]((map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                                 *)this_00,pbVar4);
  *puVar6 = uVar11;
LAB_00107530:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TDefaultGlslIoResolver::reserverResourceSlot(glslang::TVarEntryInfo&, TInfoSink&) */

void __thiscall
glslang::TDefaultGlslIoResolver::reserverResourceSlot
          (TDefaultGlslIoResolver *this,TVarEntryInfo *param_1,TInfoSink *param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  basic_string *pbVar6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *this_00;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  int local_6c;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = **(long **)(param_1 + 8);
  if (*(code **)(lVar9 + 0xf0) == TIntermTyped::getType) {
    plVar8 = *(long **)(param_1 + 8) + 4;
  }
  else {
    plVar8 = (long *)(**(code **)(lVar9 + 0xf0))();
    lVar9 = **(long **)(param_1 + 8);
  }
  pbVar6 = (basic_string *)(**(code **)(lVar9 + 0x198))();
  iVar4 = (**(code **)(*(long *)this + 0xa8))(this,plVar8);
  iVar5 = iVar4;
  if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
    iVar5 = (**(code **)(*(long *)this + 0x20))(this,*(undefined4 *)(param_1 + 0x28),param_1);
  }
  local_6c = iVar5;
  if (*(code **)(*plVar8 + 0x58) == TType::getQualifier) {
    plVar11 = plVar8 + 2;
  }
  else {
    plVar11 = (long *)(**(code **)(*plVar8 + 0x58))(plVar8);
  }
  if ((short)plVar11[4] != -1) {
    this_00 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
               *)std::
                 map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                 ::operator[]((map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                               *)(this + 0xe8),&local_6c);
    p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
              *)std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                ::find(this_00,pbVar6);
    if (*(code **)(*plVar8 + 0x58) == TType::getQualifier) {
      plVar11 = plVar8 + 2;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar8 + 0x58))(plVar8);
    }
    iVar4 = TDefaultIoResolverBase::getBaseBinding
                      ((TDefaultIoResolverBase *)this,*(undefined4 *)(param_1 + 0x28),iVar4,iVar5);
    iVar4 = (uint)*(ushort *)(plVar11 + 4) + iVar4;
    if (p_Var7 == this_00 + 8) {
      if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
LAB_00107980:
        iVar13 = 1;
      }
      else {
        pcVar2 = *(code **)(*plVar8 + 0xf0);
        if (pcVar2 == TType::isSizedArray) {
          pcVar2 = *(code **)(*plVar8 + 0xe8);
          if (pcVar2 == TType::isArray) {
            lVar9 = plVar8[0xc];
            if (lVar9 != 0) {
LAB_00107903:
              if (**(int **)(*(long *)(lVar9 + 8) + 8) != 0) goto LAB_00107911;
            }
          }
          else {
            cVar3 = (*pcVar2)(plVar8);
            if (cVar3 != '\0') {
              lVar9 = plVar8[0xc];
              goto LAB_00107903;
            }
          }
          goto LAB_00107980;
        }
        cVar3 = (*pcVar2)(plVar8);
        if (cVar3 == '\0') goto LAB_00107980;
LAB_00107911:
        if (*(code **)(*plVar8 + 0x88) == TType::getCumulativeArraySize) {
          lVar9 = *(long *)(plVar8[0xc] + 8);
          if (lVar9 != 0) {
            piVar10 = *(int **)(lVar9 + 8);
            iVar12 = (int)(*(long *)(lVar9 + 0x10) - (long)piVar10 >> 4);
            if (0 < iVar12) {
              iVar13 = 1;
              piVar1 = piVar10 + (ulong)(iVar12 - 1) * 4 + 4;
              do {
                iVar13 = iVar13 * *piVar10;
                piVar10 = piVar10 + 4;
              } while (piVar10 != piVar1);
              goto LAB_00107986;
            }
          }
          goto LAB_00107980;
        }
        iVar13 = (**(code **)(*plVar8 + 0x88))(plVar8);
      }
LAB_00107986:
      piVar10 = (int *)std::
                       map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                       ::operator[]((map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                                     *)this_00,pbVar6);
      *piVar10 = iVar4;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        TDefaultIoResolverBase::reserveSlot((TDefaultIoResolverBase *)this,iVar5,iVar4,iVar13);
        return;
      }
      goto LAB_001079fd;
    }
    if (*(int *)(p_Var7 + 0x48) != iVar4) {
      std::operator+(local_68,(basic_string *)"Invalid binding: ");
      glslang::TInfoSinkBase::append((char *)param_2);
      glslang::TInfoSinkBase::append((char *)param_2);
      glslang::TInfoSinkBase::append((char *)param_2);
      this[0x40] = (TDefaultGlslIoResolver)0x1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001079fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#4}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_00107d34;
            goto LAB_00107de6;
          }
LAB_00107b03:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_00107b03;
LAB_00107d34:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_00107de6:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_00107f98;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_00107f98:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#3}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  TVarEntryInfo *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar14;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar15;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar16;
  basic_string *pbVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (param_1 + 0x58);
      pTVar3 = (TVarEntryInfo *)(param_1 + 0x80);
      pbVar14 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar2 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()(pTVar3,pTVar2);
        pTVar1 = (TVarEntryInfo *)(pbVar14 + -0x30);
        pbVar16 = pbVar14;
        pbVar6 = pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()(pTVar3,pTVar1);
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()(pTVar2,pTVar1);
            if (cVar7 != '\0') goto LAB_0010828a;
            goto LAB_001083da;
          }
LAB_001080c8:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()(pTVar2,pTVar1);
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriorityAndLive::operator()(pTVar3,pTVar1);
            if (cVar7 == '\0') goto LAB_001080c8;
LAB_0010828a:
            swap<glslang::TVarLivePair>(param_1,pbVar14 + -0x58);
          }
          else {
LAB_001083da:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar4 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar4 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar4)();
            }
            pcVar4 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar4 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar4)();
            }
            if (param_2[0x38] ==
                *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (param_1 + 0x38)) {
              bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                       ((short)plVar11[4] != -1) * '\x02';
              bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                      ((short)plVar10[4] != -1) * '\x02';
              if (bVar13 == bVar8) {
                bVar18 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
              }
              else {
                bVar18 = bVar13 != bVar8 && bVar8 <= bVar13;
              }
            }
            else {
              bVar18 = (byte)*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                               *)(param_1 + 0x38) < (byte)param_2[0x38];
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar18);
          do {
            pbVar6 = pbVar16;
            pbVar16 = pbVar6 + -0x58;
            pcVar4 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar4 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar4)();
            }
            pcVar4 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar4 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar4)();
            }
            if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (param_1 + 0x38) == pbVar6[-0x20]) {
              bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                       ((short)plVar11[4] != -1) * '\x02';
              bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                      ((short)plVar10[4] != -1) * '\x02';
              if (bVar13 == bVar8) {
                bVar18 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
              }
              else {
                bVar18 = bVar13 != bVar8 && bVar8 <= bVar13;
              }
            }
            else {
              bVar18 = (byte)pbVar6[-0x20] <
                       (byte)*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                               *)(param_1 + 0x38);
            }
          } while (bVar18);
          if (pbVar16 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar16);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar16,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                  (param_2,pbVar14,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_0010858f;
        pbVar14 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar12 = lVar9 + -2 >> 1;
    pbVar17 = param_1 + lVar12 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar17);
      local_d0 = *(undefined8 *)(pbVar17 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar17 + 0x30);
      local_c0 = *(undefined8 *)(pbVar17 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar17 + 0x40);
      local_b0 = *(undefined8 *)(pbVar17 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar17 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (param_1,lVar12,lVar9,local_98);
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      pbVar17 = pbVar17 + -0x58;
    }
    do {
      pbVar15 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar15);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar15,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (param_1,0,((long)pbVar15 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar15;
    } while (0x58 < (long)pbVar15 - (long)param_1);
  }
LAB_0010858f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#2}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_001088e4;
            goto LAB_00108996;
          }
LAB_001086b3:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_001086b3;
LAB_001088e4:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_00108996:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_00108b48;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_00108b48:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, __gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,
   TInfoSink&)::{lambda(glslang::TVarLivePair const&, glslang::TVarLivePair const&)#1}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_00108ea4;
            goto LAB_00108f56;
          }
LAB_00108c73:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_00108c73;
LAB_00108ea4:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_00108f56:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_00109108;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_00109108:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*, TInfoSink&) [clone .part.0] */

byte __thiscall
glslang::TGlslIoMapper::doMap(TGlslIoMapper *this,TIoMapResolver *param_1,TInfoSink *param_2)

{
  long lVar1;
  TGlslIoMapper TVar2;
  undefined1 *puVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  pair *ppVar5;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  void *pvVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *******pppppppuVar16;
  bool bVar17;
  TSymbolValidater *pTVar18;
  TSymbolValidater *pTVar19;
  _Rb_tree_node_base *p_Var20;
  _Rb_tree_node_base *p_Var21;
  ulong uVar22;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var23;
  long *plVar24;
  long *plVar25;
  pair *ppVar26;
  pair *ppVar27;
  long lVar28;
  basic_string *pbVar29;
  pair *ppVar30;
  pair *ppVar31;
  basic_string *pbVar32;
  TSymbolValidater *pTVar33;
  pair *ppVar34;
  TGlslIoMapper *pTVar35;
  pair *ppVar36;
  long lVar37;
  long in_FS_OFFSET;
  bool bVar38;
  TResolverInOutAdaptor *local_8f8;
  TGlslIoMapper *local_8d8;
  int local_8cc;
  int iStack_85c;
  undefined1 local_858 [16];
  long local_848;
  int local_838 [2];
  TIoMapResolver *local_830;
  TInfoSink *local_828;
  TGlslIoMapper *local_820;
  undefined **ppuStack_818;
  undefined4 uStack_810;
  undefined8 uStack_80c;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 ******ppppppuStack_7e0;
  undefined8 ******ppppppuStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  long lStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 *puStack_788;
  long lStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined4 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 uStack_750;
  long lStack_748;
  long lStack_740;
  undefined8 uStack_738;
  ulong local_728;
  ulong *local_720;
  ulong local_718;
  ulong local_710 [2];
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  ulong uStack_6c8;
  ulong *puStack_6c0;
  ulong uStack_6b8;
  ulong auStack_6b0 [2];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  ulong local_668;
  ulong *local_660;
  ulong local_658;
  ulong local_650 [2];
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  ulong uStack_608;
  ulong *puStack_600;
  ulong uStack_5f8;
  ulong auStack_5f0 [2];
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5a8;
  ulong *puStack_5a0;
  ulong uStack_598;
  ulong auStack_590 [2];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_548;
  ulong *puStack_540;
  ulong uStack_538;
  ulong auStack_530 [2];
  long lStack_520;
  long *plStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  int local_4e8 [2];
  TIoMapResolver *local_4e0;
  TInfoSink *local_4d8;
  TGlslIoMapper *local_4d0;
  undefined8 local_4c8 [14];
  TSymbolValidater local_458 [312];
  TSymbolValidater aTStack_320 [24];
  TSymbolValidater local_308 [312];
  TSymbolValidater aTStack_1d0 [24];
  TSymbolValidater local_1b8 [376];
  long local_40;
  
  pTVar35 = this + 8;
  local_4c8[0] = *(undefined8 *)(this + 0xe8);
  local_4c8[1] = *(undefined8 *)(this + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_820 = this + 0x1c8;
  local_4c8[2] = *(undefined8 *)(this + 0xf8);
  local_4c8[3] = *(undefined8 *)(this + 0x100);
  local_4e8[0] = 0xe;
  local_4c8[4] = *(undefined8 *)(this + 0x108);
  local_4c8[5] = *(undefined8 *)(this + 0x110);
  local_4c8[6] = *(undefined8 *)(this + 0x118);
  local_4c8[7] = *(undefined8 *)(this + 0x120);
  local_4c8[8] = *(undefined8 *)(this + 0x128);
  local_4c8[9] = *(undefined8 *)(this + 0x130);
  local_4c8[10] = *(undefined8 *)(this + 0x138);
  local_4c8[0xb] = *(undefined8 *)(this + 0x140);
  local_4c8[0xc] = *(undefined8 *)(this + 0x148);
  local_4c8[0xd] = *(undefined8 *)(this + 0x150);
  local_838[0] = 0xe;
  local_830 = param_1;
  local_828 = param_2;
  local_4e0 = param_1;
  local_4d8 = param_2;
  local_4d0 = local_820;
  TSymbolValidater::TSymbolValidater
            (local_1b8,param_1,param_2,pTVar35,this + 0x78,this + 0xe8,local_820,
             *(undefined4 *)(this + 0x1cc),*(undefined4 *)(this + 0x1d0));
  pTVar19 = local_458;
  do {
    *(undefined1 (*) [16])pTVar19 = (undefined1  [16])0x0;
    pTVar18 = pTVar19 + 0x30;
    *(undefined1 (*) [16])(pTVar19 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pTVar19 + 0x20) = (undefined1  [16])0x0;
    pTVar33 = local_308;
    pTVar19 = pTVar18;
  } while (pTVar18 != local_308);
  do {
    *(undefined1 (*) [16])pTVar33 = (undefined1  [16])0x0;
    pTVar19 = pTVar33 + 0x30;
    *(undefined1 (*) [16])(pTVar33 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pTVar33 + 0x20) = (undefined1  [16])0x0;
    pTVar33 = pTVar19;
  } while (pTVar19 != local_1b8);
  local_858 = (undefined1  [16])0x0;
  local_848 = 0;
  (**(code **)(*(long *)param_1 + 0x70))(param_1,0xe);
  local_8cc = 0;
  pTVar19 = local_308;
  pTVar33 = local_458;
  local_8d8 = pTVar35;
  do {
    lVar37 = *(long *)local_8d8;
    if (lVar37 != 0) {
      p_Var20 = *(_Rb_tree_node_base **)(lVar37 + 0x18);
      local_838[0] = local_8cc;
joined_r0x001094c6:
      if ((_Rb_tree_node_base *)(lVar37 + 8) != p_Var20) {
        do {
          local_668 = glslang::GetThreadPoolAllocator();
          uVar22 = *(ulong *)(p_Var20 + 0x30);
          puVar3 = *(undefined1 **)(p_Var20 + 0x28);
          local_660 = local_650;
          if (uVar22 < 0x10) {
            if (uVar22 == 1) {
              local_650[0] = CONCAT71(local_650[0]._1_7_,*puVar3);
            }
            else if (uVar22 != 0) goto LAB_001095db;
          }
          else {
            if ((long)uVar22 < 0) goto LAB_0010a56c;
            local_660 = (ulong *)glslang::TPoolAllocator::allocate(local_668);
            local_650[0] = uVar22;
LAB_001095db:
            memcpy(local_660,puVar3,uVar22);
          }
          *(undefined1 *)((long)local_660 + uVar22) = 0;
          local_640 = *(undefined8 *)(p_Var20 + 0x48);
          uStack_638 = *(undefined8 *)(p_Var20 + 0x50);
          local_630 = *(undefined8 *)(p_Var20 + 0x58);
          uStack_628 = *(undefined8 *)(p_Var20 + 0x60);
          local_620 = *(undefined8 *)(p_Var20 + 0x68);
          uStack_618 = *(undefined8 *)(p_Var20 + 0x70);
          pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar33
                    + 8);
          local_658 = uVar22;
          if (pbVar4 != *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **
                         )((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                           pTVar33 + 0x10)) goto code_r0x0010953b;
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          _M_realloc_insert<glslang::TVarLivePair_const&>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar33,
                     pbVar4,(basic_string *)&local_668);
          p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var20);
          if ((_Rb_tree_node_base *)(lVar37 + 8) == p_Var20) break;
        } while( true );
      }
      ppVar5 = *(pair **)((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                          pTVar33 + 8);
      ppVar30 = *(pair **)pTVar33;
      if (ppVar5 != ppVar30) {
        lVar37 = -2;
        uVar22 = ((long)ppVar5 - (long)ppVar30 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar22 != 0) {
          lVar37 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          lVar37 = (long)(int)lVar37 * 2;
        }
        std::
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                  (ppVar30,ppVar5,lVar37);
        if ((long)ppVar5 - (long)ppVar30 < 0x581) {
          std::
          __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                    (ppVar30,ppVar5);
        }
        else {
          ppVar34 = ppVar30 + 0x580;
          std::
          __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                    (ppVar30,ppVar34);
          for (; ppVar5 != ppVar34; ppVar34 = ppVar34 + 0x58) {
            std::
            __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                      (ppVar34);
          }
        }
      }
      p_Var21 = *(_Rb_tree_node_base **)(*(long *)(local_8d8 + 0x70) + 0x18);
      p_Var20 = (_Rb_tree_node_base *)(*(long *)(local_8d8 + 0x70) + 8);
joined_r0x001096ed:
      if (p_Var20 != p_Var21) {
        do {
          uStack_6c8 = glslang::GetThreadPoolAllocator();
          uVar22 = *(ulong *)(p_Var21 + 0x30);
          puVar3 = *(undefined1 **)(p_Var21 + 0x28);
          puStack_6c0 = auStack_6b0;
          if (uVar22 < 0x10) {
            if (uVar22 == 1) {
              auStack_6b0[0] = CONCAT71(auStack_6b0[0]._1_7_,*puVar3);
            }
            else if (uVar22 != 0) goto LAB_00109819;
          }
          else {
            if ((long)uVar22 < 0) goto LAB_0010a56c;
            puStack_6c0 = (ulong *)glslang::TPoolAllocator::allocate(uStack_6c8);
            auStack_6b0[0] = uVar22;
LAB_00109819:
            memcpy(puStack_6c0,puVar3,uVar22);
          }
          *(undefined1 *)((long)puStack_6c0 + uVar22) = 0;
          uStack_6a0 = *(undefined8 *)(p_Var21 + 0x48);
          uStack_698 = *(undefined8 *)(p_Var21 + 0x50);
          uStack_690 = *(undefined8 *)(p_Var21 + 0x58);
          uStack_688 = *(undefined8 *)(p_Var21 + 0x60);
          uStack_680 = *(undefined8 *)(p_Var21 + 0x68);
          uStack_678 = *(undefined8 *)(p_Var21 + 0x70);
          pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar19
                    + 8);
          uStack_6b8 = uVar22;
          if (pbVar4 != *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **
                         )((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                           pTVar19 + 0x10)) goto code_r0x0010976a;
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          _M_realloc_insert<glslang::TVarLivePair_const&>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar19,
                     pbVar4,(basic_string *)&uStack_6c8);
          p_Var21 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var21);
          if (p_Var20 == p_Var21) break;
        } while( true );
      }
      ppVar34 = *(pair **)((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                           pTVar19 + 8);
      ppVar31 = *(pair **)pTVar19;
      if (ppVar34 == ppVar31) {
        ppVar36 = ppVar30;
        if (ppVar5 != ppVar30) goto LAB_00109938;
      }
      else {
        lVar37 = -2;
        uVar22 = ((long)ppVar34 - (long)ppVar31 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar22 != 0) {
          lVar37 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          lVar37 = (long)(int)lVar37 * 2;
        }
        std::
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                  (ppVar31,ppVar34,lVar37);
        if ((long)ppVar34 - (long)ppVar31 < 0x581) {
          std::
          __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                    (ppVar31,ppVar34);
          ppVar36 = ppVar30;
          if (ppVar5 != ppVar30) goto LAB_00109938;
LAB_00109998:
          local_8f8 = (TResolverInOutAdaptor *)local_838;
          ppVar36 = ppVar31;
          do {
            ppVar27 = ppVar36 + 0x58;
            TSymbolValidater::operator()(local_1b8,ppVar36);
            ppVar26 = ppVar31;
            ppVar36 = ppVar27;
          } while (ppVar34 != ppVar27);
          do {
            ppVar36 = ppVar26 + 0x58;
            TResolverInOutAdaptor::operator()(local_8f8,ppVar26);
            ppVar26 = ppVar36;
          } while (ppVar34 != ppVar36);
          if (ppVar5 != ppVar30) goto LAB_00109a08;
        }
        else {
          ppVar36 = ppVar31 + 0x580;
          std::
          __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                    (ppVar31,ppVar36);
          for (; ppVar34 != ppVar36; ppVar36 = ppVar36 + 0x58) {
            std::
            __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                      (ppVar36);
          }
          ppVar36 = ppVar30;
          if (ppVar5 == ppVar30) goto LAB_00109998;
LAB_00109938:
          do {
            ppVar26 = ppVar36 + 0x58;
            TSymbolValidater::operator()(local_1b8,ppVar36);
            ppVar36 = ppVar26;
          } while (ppVar5 != ppVar26);
          ppVar36 = ppVar30;
          do {
            ppVar26 = ppVar36 + 0x58;
            TResolverInOutAdaptor::operator()((TResolverInOutAdaptor *)local_838,ppVar36);
            ppVar36 = ppVar26;
          } while (ppVar5 != ppVar26);
          if (ppVar34 != ppVar31) goto LAB_00109998;
LAB_00109a08:
          do {
            uStack_5a8 = glslang::GetThreadPoolAllocator();
            uVar22 = *(ulong *)(ppVar30 + 0x10);
            puVar3 = *(undefined1 **)(ppVar30 + 8);
            puStack_5a0 = auStack_590;
            if (uVar22 < 0x10) {
              if (uVar22 == 1) {
                auStack_590[0] = CONCAT71(auStack_590[0]._1_7_,*puVar3);
              }
              else if (uVar22 != 0) goto LAB_00109b34;
            }
            else {
              if ((long)uVar22 < 0) goto LAB_0010a56c;
              puStack_5a0 = (ulong *)glslang::TPoolAllocator::allocate(uStack_5a8);
              auStack_590[0] = uVar22;
LAB_00109b34:
              memcpy(puStack_5a0,puVar3,uVar22);
            }
            *(undefined1 *)((long)puStack_5a0 + uVar22) = 0;
            p_Var6 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                       **)local_8d8;
            uVar11 = *(undefined8 *)(ppVar30 + 0x28);
            uVar12 = *(undefined8 *)(ppVar30 + 0x30);
            uVar7 = *(undefined8 *)(ppVar30 + 0x38);
            uVar13 = *(undefined8 *)(ppVar30 + 0x40);
            uVar14 = *(undefined8 *)(ppVar30 + 0x48);
            uVar15 = *(undefined8 *)(ppVar30 + 0x50);
            uStack_598 = uVar22;
            uStack_580 = uVar11;
            uStack_578 = uVar12;
            uStack_570 = uVar7;
            uStack_568 = uVar13;
            uStack_560 = uVar14;
            uStack_558 = uVar15;
            p_Var23 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                       *)std::
                         _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                         ::find(p_Var6,(basic_string *)&uStack_5a8);
            if (p_Var23 != p_Var6 + 8) {
              *(undefined8 *)(p_Var23 + 0x48) = uVar11;
              *(undefined8 *)(p_Var23 + 0x50) = uVar12;
              *(undefined8 *)(p_Var23 + 0x58) = uVar7;
              *(undefined8 *)(p_Var23 + 0x60) = uVar13;
              *(undefined8 *)(p_Var23 + 0x68) = uVar14;
              *(undefined8 *)(p_Var23 + 0x70) = uVar15;
            }
            ppVar30 = ppVar30 + 0x58;
          } while (ppVar5 != ppVar30);
          if (ppVar34 == ppVar31) goto LAB_00109369;
        }
        do {
          uStack_608 = glslang::GetThreadPoolAllocator();
          uVar22 = *(ulong *)(ppVar31 + 0x10);
          puVar3 = *(undefined1 **)(ppVar31 + 8);
          puStack_600 = auStack_5f0;
          if (uVar22 < 0x10) {
            if (uVar22 == 1) {
              auStack_5f0[0] = CONCAT71(auStack_5f0[0]._1_7_,*puVar3);
            }
            else if (uVar22 != 0) goto LAB_00109ca5;
          }
          else {
            if ((long)uVar22 < 0) goto LAB_0010a56c;
            puStack_600 = (ulong *)glslang::TPoolAllocator::allocate(uStack_608);
            auStack_5f0[0] = uVar22;
LAB_00109ca5:
            memcpy(puStack_600,puVar3,uVar22);
          }
          *(undefined1 *)((long)puStack_600 + uVar22) = 0;
          p_Var6 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                     **)(local_8d8 + 0x70);
          uVar11 = *(undefined8 *)(ppVar31 + 0x28);
          uVar12 = *(undefined8 *)(ppVar31 + 0x30);
          uVar7 = *(undefined8 *)(ppVar31 + 0x38);
          uVar13 = *(undefined8 *)(ppVar31 + 0x40);
          uVar14 = *(undefined8 *)(ppVar31 + 0x48);
          uVar15 = *(undefined8 *)(ppVar31 + 0x50);
          uStack_5f8 = uVar22;
          uStack_5e0 = uVar11;
          uStack_5d8 = uVar12;
          uStack_5d0 = uVar7;
          uStack_5c8 = uVar13;
          uStack_5c0 = uVar14;
          uStack_5b8 = uVar15;
          p_Var23 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                     *)std::
                       _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                       ::find(p_Var6,(basic_string *)&uStack_608);
          if (p_Var23 != p_Var6 + 8) {
            *(undefined8 *)(p_Var23 + 0x48) = uVar11;
            *(undefined8 *)(p_Var23 + 0x50) = uVar12;
            *(undefined8 *)(p_Var23 + 0x58) = uVar7;
            *(undefined8 *)(p_Var23 + 0x60) = uVar13;
            *(undefined8 *)(p_Var23 + 0x68) = uVar14;
            *(undefined8 *)(p_Var23 + 0x70) = uVar15;
          }
          ppVar31 = ppVar31 + 0x58;
        } while (ppVar34 != ppVar31);
      }
    }
LAB_00109369:
    lVar37 = *(long *)(local_8d8 + 0xe0);
    if (lVar37 != 0) {
      local_4e8[0] = local_8cc;
      p_Var20 = *(_Rb_tree_node_base **)(lVar37 + 0x18);
      if (p_Var20 != (_Rb_tree_node_base *)(lVar37 + 8)) {
        do {
          local_728 = glslang::GetThreadPoolAllocator();
          uVar22 = *(ulong *)(p_Var20 + 0x30);
          puVar3 = *(undefined1 **)(p_Var20 + 0x28);
          local_720 = local_710;
          if (uVar22 < 0x10) {
            if (uVar22 == 1) {
              local_710[0] = CONCAT71(local_710[0]._1_7_,*puVar3);
            }
            else if (uVar22 != 0) goto LAB_00109472;
          }
          else {
            if ((long)uVar22 < 0) goto LAB_0010a56c;
            local_720 = (ulong *)glslang::TPoolAllocator::allocate(local_728);
            local_710[0] = uVar22;
LAB_00109472:
            memcpy(local_720,puVar3,uVar22);
          }
          *(undefined1 *)((long)local_720 + uVar22) = 0;
          local_700 = *(undefined8 *)(p_Var20 + 0x48);
          uStack_6f8 = *(undefined8 *)(p_Var20 + 0x50);
          local_6f0 = *(undefined8 *)(p_Var20 + 0x58);
          uStack_6e8 = *(undefined8 *)(p_Var20 + 0x60);
          local_6e0 = *(undefined8 *)(p_Var20 + 0x68);
          uStack_6d8 = *(undefined8 *)(p_Var20 + 0x70);
          local_718 = uVar22;
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          emplace_back<glslang::TVarLivePair>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                     local_858,(TVarLivePair *)&local_728);
          p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var20);
        } while ((_Rb_tree_node_base *)(lVar37 + 8) != p_Var20);
      }
    }
    local_8cc = local_8cc + 1;
    pTVar19 = (TSymbolValidater *)
              ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar19 + 0x18
              );
    pTVar33 = (TSymbolValidater *)
              ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar33 + 0x18
              );
    local_8d8 = local_8d8 + 8;
  } while (local_8cc != 0xe);
  uVar11 = local_858._0_8_;
  uVar12 = local_858._8_8_;
  if (local_858._8_8_ != local_858._0_8_) {
    lVar37 = -2;
    lVar28 = local_858._8_8_ - local_858._0_8_;
    uVar22 = (lVar28 >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (uVar22 != 0) {
      lVar37 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      lVar37 = (long)(int)lVar37 * 2;
    }
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
              (local_858._0_8_,local_858._8_8_,lVar37);
    if (lVar28 < 0x581) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (uVar11,uVar12);
      pbVar32 = (basic_string *)uVar11;
    }
    else {
      pbVar29 = (basic_string *)(uVar11 + 0x580);
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (uVar11,pbVar29);
      for (; pbVar32 = (basic_string *)uVar11, (basic_string *)uVar12 != pbVar29;
          pbVar29 = pbVar29 + 0x58) {
        std::
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                  (pbVar29);
      }
    }
    do {
      pbVar29 = pbVar32 + 0x58;
      TSymbolValidater::operator()(local_1b8,pbVar32);
      pbVar32 = pbVar29;
    } while ((basic_string *)uVar12 != pbVar29);
    pbVar29 = (basic_string *)uVar11;
    do {
      pbVar32 = pbVar29 + 0x58;
      TResolverUniformAdaptor::operator()((TResolverUniformAdaptor *)local_4e8,pbVar29);
      pbVar29 = pbVar32;
    } while ((basic_string *)uVar12 != pbVar32);
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
              (uVar11,uVar12,lVar37);
    if (lVar28 < 0x581) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                (uVar11,uVar12);
    }
    else {
      pbVar29 = (basic_string *)(uVar11 + 0x580);
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                (uVar11,pbVar29);
      for (; (basic_string *)uVar12 != pbVar29; pbVar29 = pbVar29 + 0x58) {
        std::
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*,TInfoSink&)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_4_>>
                  (pbVar29);
      }
    }
  }
  (**(code **)(*(long *)param_1 + 0x78))(param_1,0xe);
  if (*(long *)(this + 0x1e8) != 0) {
    lVar37 = 0;
    bVar38 = false;
LAB_0010a37e:
    do {
      bVar17 = bVar38;
      if ((*(long *)(this + lVar37 * 8 + 0x158) != 0) &&
         (p_Var6 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                    *)local_4c8[lVar37],
         p_Var23 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                    *)std::
                      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                      ::find(p_Var6,(basic_string *)(this + 0x1d8)), p_Var23 != p_Var6 + 8)) {
        pcVar10 = *(code **)(**(long **)(p_Var23 + 0x50) + 0x108);
        if (pcVar10 == TIntermTyped::getQualifier) {
          plVar24 = *(long **)(p_Var23 + 0x50) + 6;
        }
        else {
          plVar24 = (long *)(*pcVar10)();
        }
        if ((*(byte *)(plVar24 + 1) & 0x7f) == 5) {
          pcVar10 = *(code **)(**(long **)(p_Var23 + 0x50) + 0xf8);
          if (pcVar10 == TIntermTyped::getWritableType) {
            plVar25 = *(long **)(p_Var23 + 0x50) + 4;
          }
          else {
            plVar25 = (long *)(*pcVar10)();
          }
          glslang::TIntermediate::getBaseAlignment
                    (plVar25,&iStack_85c,&ppuStack_818,*(undefined4 *)(this + 0x204),
                     (*(byte *)((long)plVar24 + 0xf) & 0x70) == 0x10);
          if (iStack_85c <= *(int *)(this + 0x200)) {
            lVar37 = lVar37 + 1;
            TVar2 = this[0x204];
            *(undefined1 *)((long)plVar24 + 0x2d) = 1;
            *(byte *)(plVar24 + 1) = *(byte *)(plVar24 + 1) & 0x80 | 5;
            *(ulong *)((long)plVar24 + 0x1d) =
                 *(ulong *)((long)plVar24 + 0x1d) & 0xffffff0000ffc07f | 0xffff001f80;
            *(byte *)(plVar24 + 2) = *(byte *)(plVar24 + 2) & 0xf0 | (byte)TVar2 & 0xf;
            p_Var23[0x59] =
                 (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                  )0x0;
            *(undefined4 *)(p_Var23 + 0x6c) = 0xffffffff;
            bVar17 = true;
            *(undefined4 *)(p_Var23 + 0x5c) = 0xffffffff;
            *(undefined4 *)(p_Var23 + 0x60) = 0xffffffff;
            *(undefined4 *)(p_Var23 + 100) = 0xffffffff;
            *(undefined4 *)(p_Var23 + 0x68) = 0xffffffff;
            bVar38 = true;
            if (lVar37 == 0xe) break;
            goto LAB_0010a37e;
          }
        }
      }
      lVar37 = lVar37 + 1;
      bVar38 = bVar17;
    } while (lVar37 != 0xe);
    if ((bVar17) && (uVar12 != uVar11)) {
      pbVar29 = (basic_string *)uVar11;
      do {
        bVar38 = std::operator==(pbVar29,(basic_string *)(this + 0x1d8));
        if (bVar38) {
          pbVar29[0x39] = (basic_string)0x1;
        }
        pbVar29 = pbVar29 + 0x58;
      } while ((basic_string *)uVar12 != pbVar29);
    }
  }
  pTVar19 = (TSymbolValidater *)local_4c8;
  do {
    lVar37 = *(long *)(pTVar35 + 0x150);
    if (lVar37 != 0) {
      if (uVar12 != uVar11) {
        pbVar29 = (basic_string *)uVar11;
LAB_00109f57:
        do {
          uStack_548 = glslang::GetThreadPoolAllocator();
          uVar22 = *(ulong *)(pbVar29 + 0x10);
          puVar3 = *(undefined1 **)(pbVar29 + 8);
          puStack_540 = auStack_530;
          if (uVar22 < 0x10) {
            if (uVar22 == 1) {
              auStack_530[0] = CONCAT71(auStack_530[0]._1_7_,*puVar3);
            }
            else if (uVar22 != 0) goto LAB_00109fa6;
          }
          else {
            if ((long)uVar22 < 0) {
LAB_0010a56c:
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::_M_create");
            }
            puStack_540 = (ulong *)glslang::TPoolAllocator::allocate(uStack_548);
            auStack_530[0] = uVar22;
LAB_00109fa6:
            memcpy(puStack_540,puVar3,uVar22);
          }
          uStack_538 = uVar22;
          *(undefined1 *)((long)puStack_540 + uVar22) = 0;
          uStack_510 = *(undefined8 *)(pbVar29 + 0x38);
          uStack_508 = *(undefined8 *)(pbVar29 + 0x40);
          uStack_500 = *(undefined8 *)(pbVar29 + 0x48);
          uStack_4f8 = *(undefined8 *)(pbVar29 + 0x50);
          lStack_520 = *(long *)(pbVar29 + 0x28);
          plStack_518 = *(long **)(pbVar29 + 0x30);
          p_Var6 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                     **)pTVar19;
          pbVar32 = (basic_string *)(**(code **)(**(long **)(pbVar29 + 0x30) + 0x198))();
          p_Var23 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                     *)std::
                       _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                       ::find(p_Var6,pbVar32);
          if ((p_Var23 == p_Var6 + 8) || (*(long *)(p_Var23 + 0x48) != lStack_520)) {
LAB_00109f4a:
            pbVar29 = pbVar29 + 0x58;
            if ((basic_string *)uVar12 == pbVar29) break;
            goto LAB_00109f57;
          }
          if (uStack_510._1_1_ == '\0') {
            *(long *)(p_Var23 + 0x48) = lStack_520;
            *(long **)(p_Var23 + 0x50) = plStack_518;
            *(undefined8 *)(p_Var23 + 0x58) = uStack_510;
            *(undefined8 *)(p_Var23 + 0x60) = uStack_508;
            *(undefined8 *)(p_Var23 + 0x68) = uStack_500;
            *(undefined8 *)(p_Var23 + 0x70) = uStack_4f8;
            if (0 < *(int *)(p_Var23 + 0x5c)) {
              *(int *)(p_Var23 + 0x5c) = *(int *)(p_Var23 + 0x5c);
            }
            goto LAB_00109f4a;
          }
          pbVar29 = pbVar29 + 0x58;
          p_Var23[0x59] =
               (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                )0x1;
        } while ((basic_string *)uVar12 != pbVar29);
        lVar37 = *(long *)(pTVar35 + 0x150);
      }
      lVar28 = *(long *)pTVar35;
      uVar7 = *(undefined8 *)pTVar19;
      uStack_80c = 0;
      ppuStack_818 = &PTR__TIntermTraverser_00119e70;
      lVar1 = *(long *)(pTVar35 + 0x70);
      uStack_810 = _LC26;
      uStack_800 = glslang::GetThreadPoolAllocator();
      ppuStack_818 = &PTR__TVarSetTraverser_00119fa8;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      uStack_7e8 = 0;
      uStack_7d0 = 0;
      lStack_7b8 = 1;
      uStack_7b0 = 0;
      uStack_7a8 = 0;
      uStack_7a0 = 0x3f800000;
      uStack_798 = 0;
      uStack_790 = 0;
      lStack_780 = 1;
      uStack_778 = 0;
      uStack_770 = 0;
      uStack_768 = 0x3f800000;
      uStack_760 = 0;
      uStack_758 = 0;
      uStack_750 = 1;
      ppppppuStack_7e0 = &ppppppuStack_7e0;
      ppppppuStack_7d8 = &ppppppuStack_7e0;
      lStack_7c8 = lVar37;
      puStack_7c0 = &uStack_790;
      puStack_788 = &uStack_758;
      lStack_748 = lVar28;
      lStack_740 = lVar1;
      uStack_738 = uVar7;
      (**(code **)(**(long **)(*(long *)(pTVar35 + 0x150) + 0x80) + 0x10))
                (*(long **)(*(long *)(pTVar35 + 0x150) + 0x80),&ppuStack_818);
      ppuStack_818 = &PTR__TLiveTraverser_00119ed8;
      std::
      _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
      ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
               *)&puStack_788);
      if (puStack_788 != &uStack_758) {
        operator_delete(puStack_788,lStack_780 << 3);
      }
      std::
      _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
      ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
               *)&puStack_7c0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_7e0;
      if (puStack_7c0 != &uStack_790) {
        operator_delete(puStack_7c0,lStack_7b8 << 3);
        pppppppuVar16 = (undefined8 *******)ppppppuStack_7e0;
      }
      while (pppppppuVar16 != &ppppppuStack_7e0) {
        pppppppuVar8 = (undefined8 *******)*pppppppuVar16;
        operator_delete(pppppppuVar16,0x18);
        pppppppuVar16 = pppppppuVar8;
      }
    }
    pTVar19 = pTVar19 + 8;
    pTVar35 = pTVar35 + 8;
    if (pTVar19 == local_458) {
      TVar2 = this[0x1c8];
      if ((basic_string *)uVar11 != (basic_string *)0x0) {
        operator_delete((void *)uVar11,local_848 - uVar11);
      }
      pTVar19 = aTStack_1d0;
      do {
        pvVar9 = *(void **)pTVar19;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9,*(long *)(pTVar19 + 0x10) - (long)pvVar9);
        }
        bVar38 = pTVar19 != local_308;
        pTVar19 = pTVar19 + -0x18;
      } while (bVar38);
      pTVar19 = aTStack_320;
      do {
        pvVar9 = *(void **)pTVar19;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9,*(long *)(pTVar19 + 0x10) - (long)pvVar9);
        }
        bVar38 = local_458 != pTVar19;
        pTVar19 = pTVar19 + -0x18;
      } while (bVar38);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (byte)TVar2 ^ 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
code_r0x0010953b:
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  basic_string(pbVar4,(basic_string *)&local_668);
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
   ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar33 + 8) =
       pbVar4 + 0x58;
  *(undefined8 *)(pbVar4 + 0x28) = local_640;
  *(undefined8 *)(pbVar4 + 0x30) = uStack_638;
  *(undefined8 *)(pbVar4 + 0x38) = local_630;
  *(undefined8 *)(pbVar4 + 0x40) = uStack_628;
  *(undefined8 *)(pbVar4 + 0x48) = local_620;
  *(undefined8 *)(pbVar4 + 0x50) = uStack_618;
  p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var20);
  goto joined_r0x001094c6;
code_r0x0010976a:
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  basic_string(pbVar4,(basic_string *)&uStack_6c8);
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
   ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)pTVar19 + 8) =
       pbVar4 + 0x58;
  *(undefined8 *)(pbVar4 + 0x28) = uStack_6a0;
  *(undefined8 *)(pbVar4 + 0x30) = uStack_698;
  *(undefined8 *)(pbVar4 + 0x38) = uStack_690;
  *(undefined8 *)(pbVar4 + 0x40) = uStack_688;
  *(undefined8 *)(pbVar4 + 0x48) = uStack_680;
  *(undefined8 *)(pbVar4 + 0x50) = uStack_678;
  p_Var21 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var21);
  goto joined_r0x001096ed;
}



/* glslang::TGlslIoMapper::doMap(glslang::TIoMapResolver*, TInfoSink&) */

undefined8 __thiscall
glslang::TGlslIoMapper::doMap(TGlslIoMapper *this,TIoMapResolver *param_1,TInfoSink *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)param_1 + 0x78))(param_1,0xe);
  if (this[0x1c8] != (TGlslIoMapper)0x0) {
    return 0;
  }
  uVar1 = doMap(this,param_1,param_2);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#3}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_0010a8f4;
            goto LAB_0010a9a6;
          }
LAB_0010a6c3:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_0010a6c3;
LAB_0010a8f4:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_0010a9a6:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_0010ab58;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_0010ab58:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#2}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_0010aeb4;
            goto LAB_0010af66;
          }
LAB_0010ac83:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_0010ac83;
LAB_0010aeb4:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_0010af66:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_0010b118;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_0010b118:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}> >(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   __gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,
   glslang::TIntermediate&, TInfoSink&, glslang::TIoMapResolver*)::{lambda(glslang::TVarLivePair
   const&, glslang::TVarLivePair const&)#1}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
               (basic_string *param_1,
               basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_2,
               long param_3)

{
  TVarEntryInfo *pTVar1;
  TVarEntryInfo *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar12;
  byte bVar13;
  long lVar14;
  basic_string *pbVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
  long local_118;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x580 < lVar9) {
    if (param_3 != 0) {
      pbVar15 = param_1 + 0x58;
      pTVar2 = (TVarEntryInfo *)(param_1 + 0x80);
      local_120 = param_2;
      local_118 = param_3;
      do {
        local_118 = local_118 + -1;
        pTVar1 = (TVarEntryInfo *)(param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58 + 0x28)
        ;
        cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()(pTVar2,pTVar1);
        pbVar12 = local_120;
        pbVar6 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pbVar15;
        if (cVar7 == '\0') {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 != '\0') goto LAB_0010b474;
            goto LAB_0010b526;
          }
LAB_0010b243:
          swap<glslang::TVarLivePair>(param_1,pbVar15);
        }
        else {
          cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                            (pTVar1,(TVarEntryInfo *)(local_120 + -0x30));
          if (cVar7 == '\0') {
            cVar7 = glslang::TVarEntryInfo::TOrderByPriority::operator()
                              (pTVar2,(TVarEntryInfo *)(local_120 + -0x30));
            if (cVar7 == '\0') goto LAB_0010b243;
LAB_0010b474:
            swap<glslang::TVarLivePair>(param_1,local_120 + -0x58);
          }
          else {
LAB_0010b526:
            swap<glslang::TVarLivePair>
                      (param_1,param_1 + ((lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 >> 1) * 0x58);
          }
        }
        while( true ) {
          do {
            param_2 = pbVar6;
            pcVar3 = *(code **)(**(long **)(param_2 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_2 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_2 + 0x28) < *(long *)(param_1 + 0x28);
            }
            pbVar6 = param_2 + 0x58;
          } while (bVar4);
          do {
            pbVar6 = pbVar12;
            pbVar12 = pbVar6 + -0x58;
            pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar11 = *(long **)(param_1 + 0x30) + 6;
            }
            else {
              plVar11 = (long *)(*pcVar3)();
            }
            pcVar3 = *(code **)(**(long **)(pbVar6 + -0x28) + 0x108);
            if (pcVar3 == glslang::TIntermTyped::getQualifier) {
              plVar10 = *(long **)(pbVar6 + -0x28) + 6;
            }
            else {
              plVar10 = (long *)(*pcVar3)();
            }
            bVar13 = ((*(uint *)((long)plVar11 + 0x1c) & 0x3f8000) != 0x1f8000) +
                     ((short)plVar11[4] != -1) * '\x02';
            bVar8 = ((*(uint *)((long)plVar10 + 0x1c) & 0x3f8000) != 0x1f8000) +
                    ((short)plVar10[4] != -1) * '\x02';
            bVar4 = bVar13 != bVar8 && bVar8 <= bVar13;
            if (bVar13 == bVar8) {
              bVar4 = *(long *)(param_1 + 0x28) < *(long *)(pbVar6 + -0x30);
            }
          } while (bVar4);
          if (pbVar12 <= param_2) break;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string(local_98,(basic_string *)param_2);
          local_70 = *(undefined8 *)(param_2 + 0x28);
          uStack_68 = *(undefined8 *)(param_2 + 0x30);
          local_60 = *(undefined8 *)(param_2 + 0x38);
          uStack_58 = *(undefined8 *)(param_2 + 0x40);
          local_50 = *(undefined8 *)(param_2 + 0x48);
          uStack_48 = *(undefined8 *)(param_2 + 0x50);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(param_2,(basic_string *)pbVar12);
          uVar5 = *(undefined8 *)(pbVar6 + -0x28);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar6 + -0x30);
          *(undefined8 *)(param_2 + 0x30) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pbVar6 + -0x20);
          *(undefined8 *)(param_2 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(pbVar6 + -8);
          *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pbVar6 + -0x10);
          *(undefined8 *)(param_2 + 0x50) = uVar5;
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar12,(basic_string *)local_98);
          *(undefined8 *)(pbVar6 + -0x30) = local_70;
          *(undefined8 *)(pbVar6 + -0x28) = uStack_68;
          *(undefined8 *)(pbVar6 + -0x20) = local_60;
          *(undefined8 *)(pbVar6 + -0x18) = uStack_58;
          *(undefined8 *)(pbVar6 + -0x10) = local_50;
          *(undefined8 *)(pbVar6 + -8) = uStack_48;
          pbVar6 = param_2 + 0x58;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                  (param_2,local_120,local_118);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x581) goto LAB_0010b6d8;
        local_120 = param_2;
      } while (local_118 != 0);
    }
    lVar9 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar14 = lVar9 + -2 >> 1;
    pbVar15 = param_1 + lVar14 * 0x58;
    while( true ) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,pbVar15);
      local_d0 = *(undefined8 *)(pbVar15 + 0x28);
      uStack_c8 = *(undefined8 *)(pbVar15 + 0x30);
      local_c0 = *(undefined8 *)(pbVar15 + 0x38);
      uStack_b8 = *(undefined8 *)(pbVar15 + 0x40);
      local_b0 = *(undefined8 *)(pbVar15 + 0x48);
      uStack_a8 = *(undefined8 *)(pbVar15 + 0x50);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                (param_1,lVar14,lVar9,local_98);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      pbVar15 = pbVar15 + -0x58;
    }
    do {
      pbVar12 = param_2 + -0x58;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_f8,(basic_string *)pbVar12);
      local_d0 = *(undefined8 *)(param_2 + -0x30);
      uStack_c8 = *(undefined8 *)(param_2 + -0x28);
      local_c0 = *(undefined8 *)(param_2 + -0x20);
      uStack_b8 = *(undefined8 *)(param_2 + -0x18);
      local_b0 = *(undefined8 *)(param_2 + -0x10);
      uStack_a8 = *(undefined8 *)(param_2 + -8);
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                (pbVar12,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + -0x28) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + -8) = uVar5;
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
                (local_98,(basic_string *)local_f8);
      local_70 = local_d0;
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      __adjust_heap<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,glslang::TVarLivePair,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                (param_1,0,((long)pbVar12 - (long)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,local_98);
      param_2 = pbVar12;
    } while (0x58 < (long)pbVar12 - (long)param_1);
  }
LAB_0010b6d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIoMapper::addStage(EShLanguage, glslang::TIntermediate&, TInfoSink&,
   glslang::TIoMapResolver*) */

byte __thiscall
glslang::TIoMapper::addStage
          (undefined8 param_1,int param_2,TIntermediate *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  char *__s;
  undefined8 ****ppppuVar2;
  void *pvVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  size_t sVar8;
  _Rb_tree_node_base *p_Var9;
  ulong uVar10;
  basic_string *pbVar11;
  long lVar12;
  long lVar13;
  TIntermediate *pTVar14;
  basic_string *pbVar15;
  basic_string *pbVar16;
  undefined8 *puVar17;
  byte bVar18;
  long lVar19;
  basic_string *pbVar20;
  basic_string *pbVar21;
  long in_FS_OFFSET;
  byte bVar22;
  basic_string *local_750;
  basic_string *local_748;
  basic_string *pbStack_740;
  basic_string *pbStack_738;
  ulong local_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  byte bStack_699;
  undefined1 local_698 [16];
  long local_688;
  undefined1 local_678 [16];
  long local_668;
  undefined1 local_658 [16];
  long local_648;
  int aiStack_638 [2];
  TDefaultIoResolverBase *pTStack_630;
  undefined8 uStack_628;
  byte *pbStack_620;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  local_618 [8];
  undefined4 local_610 [2];
  _Rb_tree_node *local_608;
  _Rb_tree_node_base *local_600;
  _Rb_tree_node_base *local_5f8;
  undefined8 local_5f0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  local_5e8 [8];
  undefined4 local_5e0 [2];
  _Rb_tree_node *local_5d8;
  _Rb_tree_node_base *local_5d0;
  _Rb_tree_node_base *local_5c8;
  undefined8 uStack_5c0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  local_5b8 [8];
  undefined4 auStack_5b0 [2];
  _Rb_tree_node *local_5a8;
  _Rb_tree_node_base *p_Stack_5a0;
  _Rb_tree_node_base *local_598;
  undefined8 local_590;
  undefined **local_588;
  undefined4 local_580;
  undefined8 local_57c;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 ****local_550;
  undefined8 ****local_548;
  undefined8 local_540;
  TIntermediate *local_538;
  undefined8 *local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined4 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *local_4b8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Stack_4b0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *local_4a8;
  undefined **local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 ****local_460;
  undefined8 ****local_458;
  long local_450;
  TIntermediate *local_448;
  undefined8 *local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *local_3c8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Stack_3c0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *local_3b8;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 ****ppppuStack_370;
  undefined8 ****ppppuStack_368;
  undefined8 uStack_360;
  TIntermediate *pTStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Stack_2d8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Stack_2d0;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Stack_2c8;
  undefined8 auStack_2b8 [14];
  int iStack_248;
  undefined4 uStack_244;
  TDefaultIoResolverBase *pTStack_240;
  undefined8 uStack_238;
  byte *pbStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 local_1b8;
  TDefaultIoResolverBase *local_1b0;
  undefined8 uStack_1a8;
  byte *local_1a0;
  undefined8 uStack_198;
  long local_190;
  long *plStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f0 [36];
  undefined1 auStack_cc [20];
  undefined8 auStack_b8 [15];
  long local_40;
  
  bVar22 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_3 + 0x4c0) == *(long *)(param_3 + 0x4b8)) &&
      (param_3[0x4d0] == (TIntermediate)0x0)) && (param_3[0x4d1] == (TIntermediate)0x0)) {
    pTVar14 = param_3 + 0x3c0;
    lVar12 = 1;
    do {
      if (*(int *)(param_3 + lVar12 * 4 + 0x378) != 0) goto LAB_0010b760;
      lVar13 = *(long *)pTVar14;
      iVar7 = (int)lVar12;
      lVar12 = lVar12 + 1;
      pTVar14 = pTVar14 + 0x30;
    } while (iVar7 < 6 && lVar13 == 0);
    if (param_5 == 0 && lVar13 == 0) {
      bVar18 = 1;
      goto LAB_0010b76d;
    }
  }
LAB_0010b760:
  if ((*(int *)(param_3 + 0x260) == 1) && (param_3[0x26c] == (TIntermediate)0x0)) {
    plVar1 = *(long **)(param_3 + 0x80);
    bVar18 = 0;
    if (plVar1 != (long *)0x0) {
      TDefaultIoResolverBase::TDefaultIoResolverBase((TDefaultIoResolverBase *)&local_128,param_3);
      local_128 = &PTR__TDefaultIoResolver_0011a190;
      if (param_2 < 0xe) {
        auStack_cc[param_2] = 1;
        auStack_b8[param_2] = param_3;
      }
      local_610[0] = 0;
      local_698 = (undefined1  [16])0x0;
      local_678 = (undefined1  [16])0x0;
      local_658 = (undefined1  [16])0x0;
      local_588 = &PTR__TIntermTraverser_00119e70;
      local_608 = (_Rb_tree_node *)0x0;
      local_5f0 = 0;
      local_5e0[0] = 0;
      local_5d8 = (_Rb_tree_node *)0x0;
      uStack_5c0 = 0;
      auStack_5b0[0] = 0;
      local_5a8 = (_Rb_tree_node *)0x0;
      local_590 = 0;
      local_688 = 0;
      local_668 = 0;
      local_648 = 0;
      local_580 = _LC26;
      local_57c = 0;
      local_600 = (_Rb_tree_node_base *)local_610;
      local_5f8 = (_Rb_tree_node_base *)local_610;
      local_5d0 = (_Rb_tree_node_base *)local_5e0;
      local_5c8 = (_Rb_tree_node_base *)local_5e0;
      p_Stack_5a0 = (_Rb_tree_node_base *)auStack_5b0;
      local_598 = (_Rb_tree_node_base *)auStack_5b0;
      local_570 = glslang::GetThreadPoolAllocator();
      local_588 = &PTR__TVarGatherTraverser_00119f40;
      local_550 = &local_550;
      local_530 = &local_500;
      local_4f8 = &local_4c8;
      local_498 = &PTR__TIntermTraverser_00119e70;
      local_568 = 0;
      local_560 = 0;
      local_558 = 0;
      local_540 = 0;
      local_528 = 1;
      local_520 = 0;
      local_518 = 0;
      local_510 = 0x3f800000;
      local_508 = 0;
      local_500 = 0;
      local_4f0 = 1;
      local_4e8 = 0;
      local_4e0 = 0;
      local_4d8 = 0x3f800000;
      local_4d0 = 0;
      local_4c8 = 0;
      local_4c0 = 1;
      local_490 = _LC26;
      local_48c = 0;
      local_548 = local_550;
      local_538 = param_3;
      local_4b8 = local_618;
      p_Stack_4b0 = local_5e8;
      local_4a8 = local_5b8;
      local_480 = glslang::GetThreadPoolAllocator();
      local_440 = &local_410;
      local_408 = &local_3d8;
      local_498 = &PTR__TVarGatherTraverser_00119f40;
      local_478 = 0;
      local_470 = 0;
      local_468 = 0;
      local_450 = 0;
      local_438 = 1;
      local_430 = 0;
      local_428 = 0;
      local_420 = 0x3f800000;
      local_418 = 0;
      local_410 = 0;
      local_400 = 1;
      local_3f8 = 0;
      local_3f0 = 0;
      local_3e8 = 0x3f800000;
      local_3e0 = 0;
      local_3d8 = 0;
      local_3d0 = 0;
      local_460 = &local_460;
      local_458 = &local_460;
      local_448 = param_3;
      local_3c8 = local_618;
      p_Stack_3c0 = local_5e8;
      local_3b8 = local_5b8;
      (**(code **)(*plVar1 + 0x10))(plVar1,(TLiveTraverser *)&local_588);
      local_1b8 = glslang::GetThreadPoolAllocator();
      __s = *(char **)(param_3 + 0x28);
      local_1b0 = (TDefaultIoResolverBase *)&local_1a0;
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_logic_error("basic_string: construction from null is not valid");
      }
      sVar8 = strlen(__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_1b8,__s,__s + sVar8);
      TLiveTraverser::pushFunction((TLiveTraverser *)&local_498,(basic_string *)&local_1b8);
      p_Var9 = local_600;
      pppppuVar4 = (undefined8 *****)local_458;
      while (local_600 = p_Var9, local_458 = pppppuVar4, (undefined8 *****)local_460 != &local_460)
      {
        ppppuVar2 = pppppuVar4[2];
        local_450 = local_450 + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pppppuVar4,0x18);
        (*(code *)(*ppppuVar2)[2])(ppppuVar2);
        p_Var9 = local_600;
        pppppuVar4 = (undefined8 *****)local_458;
      }
      if (p_Var9 == (_Rb_tree_node_base *)local_610) {
        local_6c0 = 0;
        pbVar11 = (basic_string *)0x0;
        local_748 = (basic_string *)0x0;
      }
      else {
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,(basic_string *)(p_Var9 + 0x20));
          local_190 = *(long *)(p_Var9 + 0x48);
          plStack_188 = *(long **)(p_Var9 + 0x50);
          local_180 = *(undefined8 *)(p_Var9 + 0x58);
          uStack_178 = *(undefined8 *)(p_Var9 + 0x60);
          local_170 = *(undefined8 *)(p_Var9 + 0x68);
          uStack_168 = *(undefined8 *)(p_Var9 + 0x70);
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          emplace_back<glslang::TVarLivePair>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                     local_698,(basic_string *)&local_1b8);
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
          lVar12 = local_688;
        } while (p_Var9 != (_Rb_tree_node_base *)local_610);
        uVar5 = local_698._0_8_;
        pbVar11 = (basic_string *)local_698._8_8_;
        local_748 = (basic_string *)local_698._0_8_;
        if (local_698._0_8_ != local_698._8_8_) {
          lVar19 = local_698._8_8_ - local_698._0_8_;
          uVar10 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3;
          lVar13 = -2;
          if (uVar10 != 0) {
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            lVar13 = (long)(int)lVar13 * 2;
          }
          std::
          __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                    (local_698._0_8_,local_698._8_8_,lVar13);
          if (lVar19 < 0x581) {
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                      (uVar5);
          }
          else {
            pbVar20 = (basic_string *)(uVar5 + 0x580);
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                      ();
            for (; pbVar11 != pbVar20; pbVar20 = pbVar20 + 0x58) {
              std::
              __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_1_>>
                        (pbVar20);
            }
          }
        }
        local_6c0 = lVar12 - uVar5;
      }
      if (local_5d0 == (_Rb_tree_node_base *)local_5e0) {
        uStack_6b8 = 0;
        pbVar20 = (basic_string *)0x0;
        local_750 = (basic_string *)0x0;
      }
      else {
        p_Var9 = local_5d0;
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,(basic_string *)(p_Var9 + 0x20));
          local_190 = *(long *)(p_Var9 + 0x48);
          plStack_188 = *(long **)(p_Var9 + 0x50);
          local_180 = *(undefined8 *)(p_Var9 + 0x58);
          uStack_178 = *(undefined8 *)(p_Var9 + 0x60);
          local_170 = *(undefined8 *)(p_Var9 + 0x68);
          uStack_168 = *(undefined8 *)(p_Var9 + 0x70);
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          emplace_back<glslang::TVarLivePair>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                     local_678,(basic_string *)&local_1b8);
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
          lVar12 = local_668;
        } while (p_Var9 != (_Rb_tree_node_base *)local_5e0);
        uVar5 = local_678._0_8_;
        pbVar20 = (basic_string *)local_678._8_8_;
        local_750 = (basic_string *)local_678._0_8_;
        if (local_678._0_8_ != local_678._8_8_) {
          lVar19 = local_678._8_8_ - local_678._0_8_;
          uVar10 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3;
          lVar13 = -2;
          if (uVar10 != 0) {
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            lVar13 = (long)(int)lVar13 * 2;
          }
          std::
          __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                    (local_678._0_8_,local_678._8_8_,lVar13);
          if (lVar19 < 0x581) {
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                      (uVar5);
          }
          else {
            pbVar16 = (basic_string *)(uVar5 + 0x580);
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                      ();
            for (; pbVar20 != pbVar16; pbVar16 = pbVar16 + 0x58) {
              std::
              __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_2_>>
                        (pbVar16);
            }
          }
        }
        uStack_6b8 = lVar12 - uVar5;
      }
      if (p_Stack_5a0 == (_Rb_tree_node_base *)auStack_5b0) {
        uStack_6b0 = 0;
        pbStack_738 = (basic_string *)0x0;
        pbStack_740 = (basic_string *)0x0;
      }
      else {
        p_Var9 = p_Stack_5a0;
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,(basic_string *)(p_Var9 + 0x20));
          local_190 = *(long *)(p_Var9 + 0x48);
          plStack_188 = *(long **)(p_Var9 + 0x50);
          local_180 = *(undefined8 *)(p_Var9 + 0x58);
          uStack_178 = *(undefined8 *)(p_Var9 + 0x60);
          local_170 = *(undefined8 *)(p_Var9 + 0x68);
          uStack_168 = *(undefined8 *)(p_Var9 + 0x70);
          std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
          emplace_back<glslang::TVarLivePair>
                    ((vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *)
                     local_658,(basic_string *)&local_1b8);
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
          lVar12 = local_648;
        } while (p_Var9 != (_Rb_tree_node_base *)auStack_5b0);
        uVar6 = local_658._8_8_;
        uVar5 = local_658._0_8_;
        pbStack_740 = (basic_string *)local_658._0_8_;
        pbStack_738 = (basic_string *)local_658._8_8_;
        if (local_658._0_8_ != local_658._8_8_) {
          lVar19 = local_658._8_8_ - local_658._0_8_;
          uVar10 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3;
          lVar13 = -2;
          if (uVar10 != 0) {
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            lVar13 = (long)(int)lVar13 * 2;
          }
          std::
          __introsort_loop<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                    (local_658._0_8_,local_658._8_8_,lVar13);
          if (lVar19 < 0x581) {
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                      (uVar5);
          }
          else {
            pbVar16 = (basic_string *)(uVar5 + 0x580);
            std::
            __insertion_sort<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Iter_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                      ();
            for (; (basic_string *)uVar6 != pbVar16; pbVar16 = pbVar16 + 0x58) {
              std::
              __unguarded_linear_insert<__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>>,__gnu_cxx::__ops::_Val_comp_iter<glslang::TIoMapper::addStage(EShLanguage,glslang::TIntermediate&,TInfoSink&,glslang::TIoMapResolver*)::_lambda(glslang::TVarLivePair_const&,glslang::TVarLivePair_const&)_3_>>
                        (pbVar16);
            }
          }
        }
        uStack_6b0 = lVar12 - uVar5;
      }
      bStack_699 = 0;
      puVar17 = auStack_2b8;
      for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar17 = 0;
        puVar17 = puVar17 + (ulong)bVar22 * -2 + 1;
      }
      auStack_228 = (undefined1  [16])0x0;
      auStack_218 = (undefined1  [16])0x0;
      auStack_208 = (undefined1  [16])0x0;
      auStack_1f8 = (undefined1  [16])0x0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d8 = (undefined1  [16])0x0;
      auStack_1c8 = (undefined1  [16])0x0;
      pbVar16 = local_748;
      aiStack_638[0] = param_2;
      pTStack_630 = (TDefaultIoResolverBase *)&local_128;
      uStack_628 = param_4;
      pbStack_620 = &bStack_699;
      if (pbVar11 != local_748) {
        do {
          pbVar15 = pbVar16 + 0x58;
          TResolverInOutAdaptor::operator()((TResolverInOutAdaptor *)aiStack_638,pbVar16);
          pbVar16 = pbVar15;
          pbVar21 = local_748;
        } while (pbVar11 != pbVar15);
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,pbVar21);
          local_190 = *(long *)(pbVar21 + 0x28);
          plStack_188 = *(long **)(pbVar21 + 0x30);
          local_180 = *(undefined8 *)(pbVar21 + 0x38);
          uStack_178 = *(undefined8 *)(pbVar21 + 0x40);
          local_170 = *(undefined8 *)(pbVar21 + 0x48);
          uStack_168 = *(undefined8 *)(pbVar21 + 0x50);
          pbVar16 = (basic_string *)(**(code **)(*plStack_188 + 0x198))();
          p_Var9 = (_Rb_tree_node_base *)
                   std::
                   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   ::find(local_618,pbVar16);
          if ((p_Var9 != (_Rb_tree_node_base *)local_610) && (local_190 == *(long *)(p_Var9 + 0x48))
             ) {
            *(long *)(p_Var9 + 0x48) = local_190;
            *(long **)(p_Var9 + 0x50) = plStack_188;
            *(undefined8 *)(p_Var9 + 0x58) = local_180;
            *(undefined8 *)(p_Var9 + 0x60) = uStack_178;
            *(undefined8 *)(p_Var9 + 0x68) = local_170;
            *(undefined8 *)(p_Var9 + 0x70) = uStack_168;
          }
          pbVar21 = pbVar21 + 0x58;
        } while (pbVar11 != pbVar21);
      }
      pbVar11 = local_750;
      if (local_750 != pbVar20) {
        do {
          pbVar21 = pbVar11 + 0x58;
          TResolverInOutAdaptor::operator()((TResolverInOutAdaptor *)aiStack_638,pbVar11);
          pbVar16 = local_750;
          pbVar11 = pbVar21;
        } while (pbVar20 != pbVar21);
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,pbVar16);
          local_190 = *(long *)(pbVar16 + 0x28);
          plStack_188 = *(long **)(pbVar16 + 0x30);
          local_180 = *(undefined8 *)(pbVar16 + 0x38);
          uStack_178 = *(undefined8 *)(pbVar16 + 0x40);
          local_170 = *(undefined8 *)(pbVar16 + 0x48);
          uStack_168 = *(undefined8 *)(pbVar16 + 0x50);
          pbVar11 = (basic_string *)(**(code **)(*plStack_188 + 0x198))();
          p_Var9 = (_Rb_tree_node_base *)
                   std::
                   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   ::find(local_5e8,pbVar11);
          if ((p_Var9 != (_Rb_tree_node_base *)local_5e0) && (local_190 == *(long *)(p_Var9 + 0x48))
             ) {
            *(long *)(p_Var9 + 0x48) = local_190;
            *(long **)(p_Var9 + 0x50) = plStack_188;
            *(undefined8 *)(p_Var9 + 0x58) = local_180;
            *(undefined8 *)(p_Var9 + 0x60) = uStack_178;
            *(undefined8 *)(p_Var9 + 0x68) = local_170;
            *(undefined8 *)(p_Var9 + 0x70) = uStack_168;
          }
          pbVar16 = pbVar16 + 0x58;
        } while (pbVar20 != pbVar16);
      }
      uStack_198 = auStack_228._0_8_;
      local_190 = auStack_228._8_8_;
      plStack_188 = (long *)auStack_218._0_8_;
      local_180 = auStack_218._8_8_;
      local_1b8 = CONCAT44(uStack_244,param_2);
      uStack_158 = auStack_1e8._0_8_;
      uStack_150 = auStack_1e8._8_8_;
      uStack_178 = auStack_208._0_8_;
      local_170 = auStack_208._8_8_;
      uStack_148 = auStack_1d8._0_8_;
      uStack_140 = auStack_1d8._8_8_;
      uStack_138 = auStack_1c8._0_8_;
      uStack_130 = auStack_1c8._8_8_;
      uStack_168 = auStack_1f8._0_8_;
      uStack_160 = auStack_1f8._8_8_;
      pbVar11 = pbStack_740;
      iStack_248 = param_2;
      pTStack_240 = (TDefaultIoResolverBase *)&local_128;
      uStack_238 = param_4;
      pbStack_230 = &bStack_699;
      local_1b0 = (TDefaultIoResolverBase *)&local_128;
      uStack_1a8 = param_4;
      local_1a0 = &bStack_699;
      if (pbStack_738 != pbStack_740) {
        do {
          pbVar16 = pbVar11 + 0x58;
          TResolverUniformAdaptor::operator()((TResolverUniformAdaptor *)&local_1b8,pbVar11);
          pbVar20 = pbStack_740;
          pbVar11 = pbVar16;
        } while (pbStack_738 != pbVar16);
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_1b8,pbVar20);
          local_190 = *(long *)(pbVar20 + 0x28);
          plStack_188 = *(long **)(pbVar20 + 0x30);
          local_180 = *(undefined8 *)(pbVar20 + 0x38);
          uStack_178 = *(undefined8 *)(pbVar20 + 0x40);
          local_170 = *(undefined8 *)(pbVar20 + 0x48);
          uStack_168 = *(undefined8 *)(pbVar20 + 0x50);
          pbVar11 = (basic_string *)(**(code **)(*plStack_188 + 0x198))();
          p_Var9 = (_Rb_tree_node_base *)
                   std::
                   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   ::find(local_5b8,pbVar11);
          if ((p_Var9 != (_Rb_tree_node_base *)auStack_5b0) &&
             (local_190 == *(long *)(p_Var9 + 0x48))) {
            *(long *)(p_Var9 + 0x48) = local_190;
            *(long **)(p_Var9 + 0x50) = plStack_188;
            *(undefined8 *)(p_Var9 + 0x58) = local_180;
            *(undefined8 *)(p_Var9 + 0x60) = uStack_178;
            *(undefined8 *)(p_Var9 + 0x68) = local_170;
            *(undefined8 *)(p_Var9 + 0x70) = uStack_168;
          }
          pbVar20 = pbVar20 + 0x58;
        } while (pbStack_738 != pbVar20);
      }
      if (bStack_699 == 0) {
        uStack_39c = 0;
        ppuStack_3a8 = &PTR__TIntermTraverser_00119e70;
        uStack_3a0 = _LC26;
        uStack_390 = glslang::GetThreadPoolAllocator();
        ppppuStack_370 = &ppppuStack_370;
        puStack_350 = &uStack_320;
        puStack_318 = &uStack_2e8;
        uStack_388 = 0;
        uStack_380 = 0;
        uStack_378 = 0;
        uStack_360 = 0;
        uStack_348 = 1;
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0x3f800000;
        uStack_328 = 0;
        uStack_320 = 0;
        uStack_310 = 1;
        uStack_308 = 0;
        uStack_300 = 0;
        uStack_2f8 = 0x3f800000;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 1;
        ppuStack_3a8 = &PTR__TVarSetTraverser_00119fa8;
        ppppuStack_368 = ppppuStack_370;
        pTStack_358 = param_3;
        p_Stack_2d8 = local_618;
        p_Stack_2d0 = local_5e8;
        p_Stack_2c8 = local_5b8;
        (**(code **)(*plVar1 + 0x10))();
        ppuStack_3a8 = &PTR__TVarSetTraverser_00119fa8;
        TLiveTraverser::~TLiveTraverser((TLiveTraverser *)&ppuStack_3a8);
      }
      bVar18 = bStack_699 ^ 1;
      local_498 = &PTR__TVarGatherTraverser_00119f40;
      TLiveTraverser::~TLiveTraverser((TLiveTraverser *)&local_498);
      local_588 = &PTR__TVarGatherTraverser_00119f40;
      TLiveTraverser::~TLiveTraverser((TLiveTraverser *)&local_588);
      if (pbStack_740 != (basic_string *)0x0) {
        operator_delete(pbStack_740,uStack_6b0);
      }
      if (local_750 != (basic_string *)0x0) {
        operator_delete(local_750,uStack_6b8);
      }
      if (local_748 != (basic_string *)0x0) {
        operator_delete(local_748,local_6c0);
      }
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
      ::_M_erase(local_5a8);
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
      ::_M_erase(local_5d8);
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
      ::_M_erase(local_608);
      local_128 = (undefined **)&DAT_0011a010;
      while (puStack_110 != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)*puStack_110;
        pvVar3 = (void *)puStack_110[2];
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3,puStack_110[4] - (long)pvVar3);
        }
        operator_delete(puStack_110,0x28);
        puStack_110 = puVar17;
      }
      memset(puStack_120,0,lStack_118 * 8);
      uStack_108 = 0;
      puStack_110 = (undefined8 *)0x0;
      if (puStack_120 != auStack_f0) {
        operator_delete(puStack_120,lStack_118 << 3);
      }
    }
  }
  else {
    bVar18 = 0;
  }
LAB_0010b76d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
  return;
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getWritableType() */

TIntermTyped * __thiscall glslang::TIntermTyped::getWritableType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getBasicType() const */

TIntermTyped __thiscall glslang::TIntermTyped::getBasicType(TIntermTyped *this)

{
  return this[0x28];
}



/* glslang::TIntermTyped::getQualifier() */

TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this)

{
  return this + 0x30;
}



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::getName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this)

{
  return this + 200;
}



/* glslang::TIntermBinary::getLeft() const */

undefined8 __thiscall glslang::TIntermBinary::getLeft(TIntermBinary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getName[abi:cxx11]() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getName_abi_cxx11_(TIntermAggregate *this)

{
  return this + 0x100;
}



/* glslang::TIntermSelection::getCondition() const */

undefined8 __thiscall glslang::TIntermSelection::getCondition(TIntermSelection *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSelection::getTrueBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getTrueBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermSelection::getFalseBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getFalseBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 200);
}



/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
  return;
}



/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */

void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 glslang::TIntermTraverser::visitBinary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 glslang::TIntermTraverser::visitUnary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined8 glslang::TIntermTraverser::visitSelection(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 glslang::TIntermTraverser::visitAggregate(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */

undefined8 glslang::TIntermTraverser::visitLoop(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */

undefined8 glslang::TIntermTraverser::visitBranch(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */

undefined8 glslang::TIntermTraverser::visitSwitch(void)

{
  return 1;
}



/* glslang::TDefaultIoResolverBase::notifyBinding(EShLanguage, glslang::TVarEntryInfo&) */

void glslang::TDefaultIoResolverBase::notifyBinding(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::notifyInOut(EShLanguage, glslang::TVarEntryInfo&) */

void glslang::TDefaultIoResolverBase::notifyInOut(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::beginNotifications(EShLanguage) */

void glslang::TDefaultIoResolverBase::beginNotifications(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::endNotifications(EShLanguage) */

void glslang::TDefaultIoResolverBase::endNotifications(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::beginResolve(EShLanguage) */

void glslang::TDefaultIoResolverBase::beginResolve(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::endResolve(EShLanguage) */

void glslang::TDefaultIoResolverBase::endResolve(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::beginCollect(EShLanguage) */

void glslang::TDefaultIoResolverBase::beginCollect(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::endCollect(EShLanguage) */

void glslang::TDefaultIoResolverBase::endCollect(void)

{
  return;
}



/* glslang::TDefaultIoResolverBase::reserverResourceSlot(glslang::TVarEntryInfo&, TInfoSink&) */

void glslang::TDefaultIoResolverBase::reserverResourceSlot
               (TVarEntryInfo *param_1,TInfoSink *param_2)

{
  return;
}



/* glslang::TDefaultIoResolverBase::reserverStorageSlot(glslang::TVarEntryInfo&, TInfoSink&) */

void glslang::TDefaultIoResolverBase::reserverStorageSlot(TVarEntryInfo *param_1,TInfoSink *param_2)

{
  return;
}



/* glslang::TDefaultIoResolverBase::validateInOut(EShLanguage, glslang::TVarEntryInfo&) */

undefined8 glslang::TDefaultIoResolverBase::validateInOut(void)

{
  return 1;
}



/* glslang::TDefaultIoResolverBase::addStage(EShLanguage, glslang::TIntermediate&) */

void __thiscall
glslang::TDefaultIoResolverBase::addStage
          (TDefaultIoResolverBase *this,int param_2,undefined8 param_3)

{
  if (param_2 < 0xe) {
    this[(long)param_2 + 0x5c] = (TDefaultIoResolverBase)0x1;
    *(undefined8 *)(this + (long)param_2 * 8 + 0x70) = param_3;
  }
  return;
}



/* glslang::TDefaultGlslIoResolver::validateBinding(EShLanguage, glslang::TVarEntryInfo&) */

undefined8 glslang::TDefaultGlslIoResolver::validateBinding(void)

{
  return 1;
}



/* glslang::TIoMapper::~TIoMapper() */

void __thiscall glslang::TIoMapper::~TIoMapper(TIoMapper *this)

{
  return;
}



/* glslang::TIoMapper::doMap(glslang::TIoMapResolver*, TInfoSink&) */

undefined8 glslang::TIoMapper::doMap(TIoMapResolver *param_1,TInfoSink *param_2)

{
  return 1;
}



/* glslang::TDefaultIoResolver::validateBinding(EShLanguage, glslang::TVarEntryInfo&) */

undefined8 glslang::TDefaultIoResolver::validateBinding(void)

{
  return 1;
}



/* glslang::TIoMapper::~TIoMapper() */

void __thiscall glslang::TIoMapper::~TIoMapper(TIoMapper *this)

{
  operator_delete(this,8);
  return;
}



/* std::_Rb_tree<int, std::pair<int const, std::map<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, int,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > >, std::_Select1st<std::pair<int const,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int> > > > >, std::less<int>,
   std::allocator<std::pair<int const, std::map<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, int,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > > > >::_M_get_insert_unique_pos(int const&)
   [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
           *this,int *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar6 = (int)param_1;
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    do {
      p_Var4 = p_Var2;
      iVar5 = *(int *)(p_Var4 + 0x20);
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
      if (iVar6 < iVar5) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var4;
    if (iVar5 <= iVar6) goto LAB_0010cee8;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_0010cee8:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TLiveTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined1 __thiscall
glslang::TLiveTraverser::visitSelection(TLiveTraverser *this,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (this[200] != (TLiveTraverser)0x0) {
    return 1;
  }
  if (*(code **)(*param_3 + 0x180) == TIntermSelection::getCondition) {
    plVar2 = (long *)param_3[0x17];
  }
  else {
    plVar2 = (long *)(**(code **)(*param_3 + 0x180))(param_3);
  }
  lVar1 = (**(code **)(*plVar2 + 0x28))();
  if (lVar1 == 0) {
    return 1;
  }
  lVar3 = *param_3;
  if (**(char **)(*(long *)(lVar1 + 0xc0) + 8) == '\0') goto LAB_0010d165;
  if (*(code **)(lVar3 + 400) == TIntermSelection::getTrueBlock) {
    plVar2 = (long *)param_3[0x18];
    if (plVar2 == (long *)0x0) {
      return 0;
    }
LAB_0010d1cf:
    (**(code **)(*plVar2 + 0x10))(plVar2,this);
  }
  else {
    lVar3 = (**(code **)(lVar3 + 400))(param_3);
    if (lVar3 != 0) {
      if (*(code **)(*param_3 + 400) == TIntermSelection::getTrueBlock) {
        plVar2 = (long *)param_3[0x18];
      }
      else {
        plVar2 = (long *)(**(code **)(*param_3 + 400))(param_3);
      }
      goto LAB_0010d1cf;
    }
  }
  if (**(char **)(*(long *)(lVar1 + 0xc0) + 8) != '\0') {
    return 0;
  }
  lVar3 = *param_3;
LAB_0010d165:
  if (*(code **)(lVar3 + 0x1a0) == TIntermSelection::getFalseBlock) {
    plVar2 = (long *)param_3[0x19];
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  else {
    lVar1 = (**(code **)(lVar3 + 0x1a0))(param_3);
    if (lVar1 == 0) {
      return 0;
    }
    if (*(code **)(*param_3 + 0x1a0) == TIntermSelection::getFalseBlock) {
      plVar2 = (long *)param_3[0x19];
    }
    else {
      plVar2 = (long *)(**(code **)(*param_3 + 0x1a0))(param_3);
    }
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,this);
  return 0;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x10cb,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0010d511:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x10cb,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_0010d511;
      }
    }
  }
  return 0;
}



/* glslang::TDefaultIoResolver::~TDefaultIoResolver() */

void __thiscall glslang::TDefaultIoResolver::~TDefaultIoResolver(TDefaultIoResolver *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined **)this = &DAT_0011a010;
  puVar3 = *(undefined8 **)(this + 0x18);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    pvVar2 = (void *)puVar3[2];
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,puVar3[4] - (long)pvVar2);
    }
    operator_delete(puVar3,0x28);
    puVar3 = puVar1;
  }
  memset(*(void **)(this + 8),0,*(long *)(this + 0x10) * 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(TDefaultIoResolver **)(this + 8) == this + 0x38) {
    return;
  }
  operator_delete(*(TDefaultIoResolver **)(this + 8),*(long *)(this + 0x10) << 3);
  return;
}



/* glslang::TDefaultIoResolver::~TDefaultIoResolver() */

void __thiscall glslang::TDefaultIoResolver::~TDefaultIoResolver(TDefaultIoResolver *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined **)this = &DAT_0011a010;
  puVar3 = *(undefined8 **)(this + 0x18);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    pvVar2 = (void *)puVar3[2];
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,puVar3[4] - (long)pvVar2);
    }
    operator_delete(puVar3,0x28);
    puVar3 = puVar1;
  }
  memset(*(void **)(this + 8),0,*(long *)(this + 0x10) * 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(TDefaultIoResolver **)(this + 8) != this + 0x38) {
    operator_delete(*(TDefaultIoResolver **)(this + 8),*(long *)(this + 0x10) << 3);
  }
  operator_delete(this,0xe0);
  return;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* glslang::TGlslIoMapper::~TGlslIoMapper() */

void __thiscall glslang::TGlslIoMapper::~TGlslIoMapper(TGlslIoMapper *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  TGlslIoMapper *pTVar4;
  
  pTVar4 = this + 8;
  *(undefined ***)this = &PTR__TGlslIoMapper_0011a280;
  do {
    pvVar1 = *(void **)pTVar4;
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)pTVar4 = 0;
    }
    pvVar1 = *(void **)(pTVar4 + 0x70);
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)(pTVar4 + 0x70) = 0;
    }
    pvVar1 = *(void **)(pTVar4 + 0xe0);
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)(pTVar4 + 0xe0) = 0;
    }
    if (*(long *)(pTVar4 + 0x150) != 0) {
      *(undefined8 *)(pTVar4 + 0x150) = 0;
    }
    pTVar4 = pTVar4 + 8;
  } while (this + 0x78 != pTVar4);
  operator_delete(this,0x208);
  return;
}



/* glslang::TGlslIoMapper::~TGlslIoMapper() */

void __thiscall glslang::TGlslIoMapper::~TGlslIoMapper(TGlslIoMapper *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  TGlslIoMapper *pTVar4;
  
  pTVar4 = this + 8;
  *(undefined ***)this = &PTR__TGlslIoMapper_0011a280;
  do {
    pvVar1 = *(void **)pTVar4;
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)pTVar4 = 0;
    }
    pvVar1 = *(void **)(pTVar4 + 0x70);
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)(pTVar4 + 0x70) = 0;
    }
    pvVar1 = *(void **)(pTVar4 + 0xe0);
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      while (pvVar3 != (void *)0x0) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x78);
        pvVar3 = pvVar2;
      }
      operator_delete(pvVar1,0x30);
      *(undefined8 *)(pTVar4 + 0xe0) = 0;
    }
    if (*(long *)(pTVar4 + 0x150) != 0) {
      *(undefined8 *)(pTVar4 + 0x150) = 0;
    }
    pTVar4 = pTVar4 + 8;
  } while (this + 0x78 != pTVar4);
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010dc1d:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0010dc1d;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0010db1f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010dc5d:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_0010db1f:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0010dc5d;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0010db5f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010dc8d:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_0010db5f:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0010dc8d;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0010db9f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010dcbd:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_0010db9f:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0010dcbd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_0010dd07;
    }
    bVar4 = glslang::TType::
            contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar4) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar4 = glslang::TType::
          contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar4) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010dd07:
  bVar4 = glslang::TType::
          contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar4) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsNonOpaque() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsNonOpaque() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 < 0xd) || (bVar1 == 0x12)) {
    return true;
  }
  if (*(code **)(*param_1 + 0x128) == isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_0010dd78:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x128))();
    if (cVar3 != '\0') goto LAB_0010dd78;
  }
  return false;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_0010de00:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_0010de00;
  }
  return 0;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x70);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x70);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x70);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x70);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x70);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x70);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x70);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x70);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x70);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e225:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e225;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0010e1aa;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e1aa;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e18d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010e1aa:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e18d;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0010e1da;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e1da;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e1bd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010e1da:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e1bd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0010e20a;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e20a;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e1ed:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010e20a:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010e1ed;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0010e31c;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010e31c:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsArray() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsArray() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (param_1[0xc] != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_0010e381:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_0010e381;
  }
  return false;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010e419:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010e419;
  }
  return false;
}



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_0010e4a3;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_0010e4cc:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0010e4eb:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_0010e4eb;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_0010e4cc;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_0010e4a3:
  return (byte)TVar1 >> 4 & 1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    puVar8 = param_1 + (lVar7 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) {
          return param_1;
        }
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e7e5:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0010e7e5;
      }
      plVar1 = (long *)param_1[4];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_0010e76a;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e74d:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_0010e76a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0010e74d;
      }
      plVar1 = (long *)param_1[8];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_0010e79a;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e77d:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_0010e79a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0010e77d;
      }
      plVar1 = (long *)param_1[0xc];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_0010e7ca;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010e7ad:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_0010e7ca:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0010e7ad;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar8);
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_0010e910;
    }
    bVar4 = glslang::TType::
            contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar4) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar4 = glslang::TType::
          contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar4) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010e910:
  bVar4 = glslang::TType::
          contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar4) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsBuiltIn() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsBuiltIn() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*param_1 + 0x58);
    if (pcVar1 == getQualifier) {
      plVar5 = param_1 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*param_1 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_0010e999:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x128))(param_1);
    if (cVar3 != '\0') goto LAB_0010e999;
  }
  return false;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010ea39:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_0010ea39;
  }
  return false;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010eae9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010eae9;
  }
  return false;
}



/* glslang::TDefaultIoResolver::getResourceType(glslang::TType const&) */

char __thiscall
glslang::TDefaultIoResolver::getResourceType(TDefaultIoResolver *this,TType *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  TType *pTVar5;
  
  lVar4 = *(long *)param_1;
  if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
    if (param_1[8] != (TType)0xe) goto LAB_0010eb3c;
LAB_0010ebc0:
    if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
      pTVar5 = param_1 + 0x80;
    }
    else {
      pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
    }
    if ((((byte)pTVar5[2] & 8) != 0) && (1 < (byte)((char)pTVar5[1] - 7U))) {
      return '\x02';
    }
  }
  else {
    iVar2 = (**(code **)(lVar4 + 0x38))(param_1);
    if (iVar2 == 0xe) {
      lVar4 = *(long *)param_1;
      goto LAB_0010ebc0;
    }
  }
  lVar4 = *(long *)param_1;
  if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
    uVar3 = (uint)(byte)param_1[8];
  }
  else {
    uVar3 = (**(code **)(lVar4 + 0x38))(param_1);
    lVar4 = *(long *)param_1;
  }
  if (uVar3 != 0xe) goto LAB_0010eb3c;
  if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
    if (((byte)param_1[0x82] & 0x20) == 0) {
      pTVar5 = param_1 + 0x80;
LAB_0010ec26:
      if (((byte)pTVar5[2] & 8) == 0) {
        return '\x01';
      }
      goto LAB_0010ec2c;
    }
LAB_0010ec3c:
    pTVar5 = param_1 + 0x80;
  }
  else {
    pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
    if (((byte)pTVar5[2] & 0x20) == 0) goto LAB_0010ec26;
LAB_0010ec2c:
    if (*(code **)(*(long *)param_1 + 0x40) == TType::getSampler) goto LAB_0010ec3c;
    pTVar5 = (TType *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
  }
  if (pTVar5[1] == (TType)0x7) {
    return '\x01';
  }
  lVar4 = *(long *)param_1;
LAB_0010eb3c:
  if (*(code **)(lVar4 + 0x58) == TType::getQualifier) {
    pTVar5 = param_1 + 0x10;
  }
  else {
    pTVar5 = (TType *)(**(code **)(lVar4 + 0x58))(param_1);
  }
  cVar1 = '\x04';
  if (((byte)pTVar5[8] & 0x7f) != 6) {
    lVar4 = *(long *)param_1;
    if (*(code **)(lVar4 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_1[8];
    }
    else {
      uVar3 = (**(code **)(lVar4 + 0x38))(param_1);
      lVar4 = *(long *)param_1;
    }
    if (uVar3 == 0xe) {
      if (*(code **)(lVar4 + 0x40) == TType::getSampler) {
        pTVar5 = param_1 + 0x80;
      }
      else {
        pTVar5 = (TType *)(**(code **)(lVar4 + 0x40))(param_1);
      }
      if (((byte)pTVar5[2] & 0x20) != 0) {
        return '\0';
      }
      lVar4 = *(long *)param_1;
    }
    if (*(code **)(lVar4 + 0x58) == TType::getQualifier) {
      pTVar5 = param_1 + 0x10;
    }
    else {
      pTVar5 = (TType *)(**(code **)(lVar4 + 0x58))(param_1);
    }
    cVar1 = (((byte)pTVar5[8] & 0x7f) != 5) * '\x03' + '\x03';
  }
  return cVar1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_0010edbb;
          }
          goto LAB_0010ede9;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010edbb:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_0010ede9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_0010ede9:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010efad:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010efad;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_0010ee38;
          }
          goto LAB_0010ee59;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010ee38:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_0010ee46;
          goto LAB_0010ee59;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010ee46;
LAB_0010ee59:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010efdd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010ee46:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010efdd;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_0010eea8;
          }
          goto LAB_0010eec9;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010eea8:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_0010eeb6;
          goto LAB_0010eec9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010eeb6;
LAB_0010eec9:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010f00d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010eeb6:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010f00d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_0010ef18;
          }
          goto LAB_0010ef39;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010ef18:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_0010ef26;
          goto LAB_0010ef39;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010ef26;
LAB_0010ef39:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010f03d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010ef26:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010f03d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0010f0fe;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010f0fe:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = param_1[0xc];
        goto LAB_0010f18a;
      }
      goto LAB_0010f1a6;
    }
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
LAB_0010f18a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_0010f1a6;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_0010f1a6:
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_0010f1b9:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_0010f1b9;
  }
  return false;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_0010f24a;
      }
      goto LAB_0010f266;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0010f24a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_0010f266;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_0010f266:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0010f279:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0010f279;
  }
  return false;
}



/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar1);
  uVar3 = glslang::GetThreadPoolAllocator();
  *puVar2 = uVar3;
  puVar2[1] = puVar2 + 3;
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(puVar2,__s,__s + sVar4);
    *(undefined8 **)(this + 0x70) = puVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_logic_error("basic_string: construction from null is not valid");
}



/* glslang::TVarSetTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TVarSetTraverser::visitSymbol(TVarSetTraverser *this,TIntermSymbol *param_1)

{
  long *plVar1;
  uint uVar2;
  basic_string *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  ulong __n;
  long lVar9;
  long lVar10;
  TIntermSymbol *pTVar11;
  long local_40;
  
  lVar6 = *(long *)param_1;
  if (*(code **)(lVar6 + 0x108) == TIntermTyped::getQualifier) {
    bVar8 = (byte)param_1[0x38] & 0x7f;
    if (bVar8 == 3) {
LAB_0010f6b3:
      lVar9 = *(long *)(this + 0xd0);
      goto LAB_0010f3be;
    }
LAB_0010f385:
    if (bVar8 != 4) {
LAB_0010f38a:
      pTVar11 = param_1 + 0x30;
LAB_0010f38e:
      if (1 < ((byte)pTVar11[8] & 0x7f) - 5) {
        return;
      }
      lVar9 = *(long *)(this + 0xe0);
      lVar6 = *(long *)param_1;
      goto LAB_0010f3be;
    }
  }
  else {
    lVar6 = (**(code **)(lVar6 + 0x108))(param_1);
    if ((*(byte *)(lVar6 + 8) & 0x7f) == 3) {
      lVar6 = *(long *)param_1;
      goto LAB_0010f6b3;
    }
    lVar6 = *(long *)param_1;
    if (*(code **)(lVar6 + 0x108) == TIntermTyped::getQualifier) {
      bVar8 = (byte)param_1[0x38] & 0x7f;
      goto LAB_0010f385;
    }
    lVar6 = (**(code **)(lVar6 + 0x108))(param_1);
    if ((*(byte *)(lVar6 + 8) & 0x7f) != 4) {
      if (*(code **)(*(long *)param_1 + 0x108) == TIntermTyped::getQualifier) goto LAB_0010f38a;
      pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0x108))(param_1);
      goto LAB_0010f38e;
    }
    lVar6 = *(long *)param_1;
  }
  lVar9 = *(long *)(this + 0xd8);
LAB_0010f3be:
  if (*(code **)(lVar6 + 0x180) == TIntermSymbol::getId) {
    local_40 = *(long *)(param_1 + 0xb8);
  }
  else {
    local_40 = (**(code **)(lVar6 + 0x180))(param_1);
    lVar6 = *(long *)param_1;
  }
  lVar6 = (**(code **)(lVar6 + 0x198))(param_1);
  if (*(long *)(lVar9 + 0x10) != 0) {
    __s2 = *(basic_string **)(lVar6 + 8);
    uVar3 = *(ulong *)(lVar6 + 0x10);
    lVar10 = lVar9 + 8;
    lVar6 = *(long *)(lVar9 + 0x10);
    do {
      while( true ) {
        uVar4 = *(ulong *)(lVar6 + 0x30);
        __n = uVar3;
        if (uVar4 <= uVar3) {
          __n = uVar4;
        }
        if ((__n != 0) && (iVar5 = memcmp(*(void **)(lVar6 + 0x28),__s2,__n), iVar5 != 0)) break;
        lVar7 = uVar4 - uVar3;
        if (lVar7 < 0x80000000) {
          if (-0x80000001 < lVar7) {
            iVar5 = (int)lVar7;
            break;
          }
          goto LAB_0010f410;
        }
LAB_0010f461:
        plVar1 = (long *)(lVar6 + 0x10);
        lVar10 = lVar6;
        lVar6 = *plVar1;
        if (*plVar1 == 0) goto LAB_0010f46d;
      }
      if (-1 < iVar5) goto LAB_0010f461;
LAB_0010f410:
      lVar6 = *(long *)(lVar6 + 0x18);
    } while (lVar6 != 0);
LAB_0010f46d:
    if (((lVar9 + 8 != lVar10) &&
        (iVar5 = std::__cxx11::
                 basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                           (__s2), -1 < iVar5)) && (local_40 == *(long *)(lVar10 + 0x48))) {
      iVar5 = *(int *)(lVar10 + 0x5c);
      if (iVar5 != -1) {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        *(short *)(pTVar11 + 0x20) = (short)iVar5;
      }
      uVar2 = *(uint *)(lVar10 + 0x60);
      if (uVar2 != 0xffffffff) {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        *(uint *)(pTVar11 + 0x1c) = (uVar2 & 0x7f) << 0xf | *(uint *)(pTVar11 + 0x1c) & 0xffc07fff;
      }
      iVar5 = *(int *)(lVar10 + 100);
      if (iVar5 != -1) {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        *(ushort *)(pTVar11 + 0x1c) = *(ushort *)(pTVar11 + 0x1c) & 0xf000 | (ushort)iVar5 & 0xfff;
      }
      uVar2 = *(uint *)(lVar10 + 0x68);
      if (uVar2 != 0xffffffff) {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        pTVar11[0x1d] = (TIntermSymbol)((byte)((uVar2 & 7) << 4) | (byte)pTVar11[0x1d] & 0x8f);
      }
      iVar5 = *(int *)(lVar10 + 0x6c);
      if (iVar5 != -1) {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        pTVar11[0x22] = SUB41(iVar5,0);
      }
      if (*(char *)(lVar10 + 0x59) != '\0') {
        if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar11 = param_1 + 0x20;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
        }
        if (*(code **)(*(long *)pTVar11 + 0x50) == TType::getQualifier) {
          pTVar11 = pTVar11 + 0x10;
        }
        else {
          pTVar11 = (TIntermSymbol *)(**(code **)(*(long *)pTVar11 + 0x50))();
        }
        pTVar11[0x2d] = (TIntermSymbol)0x1;
        return;
      }
    }
  }
  return;
}



/* std::_Rb_tree<int, std::pair<int const, std::map<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, int,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > >, std::_Select1st<std::pair<int const,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int> > > > >, std::less<int>,
   std::allocator<std::pair<int const, std::map<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, int,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > > > >::_M_erase(std::_Rb_tree_node<std::pair<int
   const, std::map<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > > >*) [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      _M_erase(*(_Rb_tree_node **)(param_1 + 0x18));
      p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
      pvVar3 = *(void **)(param_1 + 0x38);
      while (pvVar3 != (void *)0x0) {
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
        pvVar2 = *(void **)((long)pvVar3 + 0x10);
        operator_delete(pvVar3,0x50);
        pvVar3 = pvVar2;
      }
      operator_delete(param_1,0x58);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver() */

void __thiscall
glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver(TDefaultGlslIoResolver *this)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__TDefaultGlslIoResolver_0011a0d0;
  pvVar4 = *(void **)(this + 0x128);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar1 = *(void **)((long)pvVar4 + 0x10);
    pvVar5 = *(void **)((long)pvVar4 + 0x38);
    while (pvVar5 != (void *)0x0) {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
      pvVar2 = *(void **)((long)pvVar5 + 0x10);
      operator_delete(pvVar5,0x50);
      pvVar5 = pvVar2;
    }
    operator_delete(pvVar4,0x58);
    pvVar4 = pvVar1;
  }
  pvVar4 = *(void **)(this + 0xf8);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar1 = *(void **)((long)pvVar4 + 0x10);
    pvVar5 = *(void **)((long)pvVar4 + 0x38);
    while (pvVar5 != (void *)0x0) {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
      pvVar2 = *(void **)((long)pvVar5 + 0x10);
      operator_delete(pvVar5,0x50);
      pvVar5 = pvVar2;
    }
    operator_delete(pvVar4,0x58);
    pvVar4 = pvVar1;
  }
  *(undefined **)this = &DAT_0011a010;
  puVar6 = *(undefined8 **)(this + 0x18);
  while (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar6;
    pvVar4 = (void *)puVar6[2];
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4,puVar6[4] - (long)pvVar4);
    }
    operator_delete(puVar6,0x28);
    puVar6 = puVar3;
  }
  memset(*(void **)(this + 8),0,*(long *)(this + 0x10) * 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(TDefaultGlslIoResolver **)(this + 8) == this + 0x38) {
    return;
  }
  operator_delete(*(TDefaultGlslIoResolver **)(this + 8),*(long *)(this + 0x10) << 3);
  return;
}



/* glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver() */

void __thiscall
glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver(TDefaultGlslIoResolver *this)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  *(undefined ***)this = &PTR__TDefaultGlslIoResolver_0011a0d0;
  pvVar4 = *(void **)(this + 0x128);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar1 = *(void **)((long)pvVar4 + 0x10);
    pvVar5 = *(void **)((long)pvVar4 + 0x38);
    while (pvVar5 != (void *)0x0) {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
      pvVar2 = *(void **)((long)pvVar5 + 0x10);
      operator_delete(pvVar5,0x50);
      pvVar5 = pvVar2;
    }
    operator_delete(pvVar4,0x58);
    pvVar4 = pvVar1;
  }
  pvVar4 = *(void **)(this + 0xf8);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar1 = *(void **)((long)pvVar4 + 0x10);
    pvVar5 = *(void **)((long)pvVar4 + 0x38);
    while (pvVar5 != (void *)0x0) {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
      pvVar2 = *(void **)((long)pvVar5 + 0x10);
      operator_delete(pvVar5,0x50);
      pvVar5 = pvVar2;
    }
    operator_delete(pvVar4,0x58);
    pvVar4 = pvVar1;
  }
  *(undefined **)this = &DAT_0011a010;
  puVar6 = *(undefined8 **)(this + 0x18);
  while (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar6;
    pvVar4 = (void *)puVar6[2];
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4,puVar6[4] - (long)pvVar4);
    }
    operator_delete(puVar6,0x28);
    puVar6 = puVar3;
  }
  memset(*(void **)(this + 8),0,*(long *)(this + 0x10) * 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(TDefaultGlslIoResolver **)(this + 8) != this + 0x38) {
    operator_delete(*(TDefaultGlslIoResolver **)(this + 8),*(long *)(this + 0x10) << 3);
  }
  operator_delete(this,0x148);
  return;
}



/* glslang::TInfoSinkBase::message(glslang::TPrefixType, char const*) */

void glslang::TInfoSinkBase::message(char *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    glslang::TInfoSinkBase::append(param_1);
    break;
  case 2:
    glslang::TInfoSinkBase::append(param_1);
    break;
  case 3:
    glslang::TInfoSinkBase::append(param_1);
    break;
  case 4:
    glslang::TInfoSinkBase::append(param_1);
    break;
  case 5:
    glslang::TInfoSinkBase::append(param_1);
    break;
  default:
    glslang::TInfoSinkBase::append(param_1);
  }
  glslang::TInfoSinkBase::append(param_1);
  glslang::TInfoSinkBase::append(param_1);
  return;
}



/* glslang::TSpirvType::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvType const&) const */

undefined4 __thiscall glslang::TSpirvType::operator==(TSpirvType *this,TSpirvType *param_1)

{
  size_t __n;
  TSpirvTypeParameter *pTVar1;
  int iVar2;
  undefined4 uVar3;
  TSpirvTypeParameter *pTVar4;
  TSpirvTypeParameter *this_00;
  
  uVar3 = 0;
  __n = *(size_t *)(this + 0x10);
  if (__n == *(size_t *)(param_1 + 0x10)) {
    if (((__n == 0) ||
        (iVar2 = memcmp(*(void **)(this + 8),*(void **)(param_1 + 8),__n), iVar2 == 0)) &&
       (uVar3 = 0, *(int *)(this + 0x28) == *(int *)(param_1 + 0x28))) {
      pTVar1 = *(TSpirvTypeParameter **)(this + 0x40);
      this_00 = *(TSpirvTypeParameter **)(this + 0x38);
      pTVar4 = *(TSpirvTypeParameter **)(param_1 + 0x38);
      if ((long)pTVar1 - (long)this_00 == *(long *)(param_1 + 0x40) - (long)pTVar4) {
        for (; this_00 != pTVar1; this_00 = this_00 + 0x10) {
          uVar3 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar4);
          if ((char)uVar3 == '\0') {
            return uVar3;
          }
          pTVar4 = pTVar4 + 0x10;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* glslang::TQualifier::isArrayedIo(EShLanguage) const */

ulong __thiscall glslang::TQualifier::isArrayedIo(TQualifier *this,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  
  switch(param_2) {
  default:
    return 0;
  case 1:
    if (((byte)this[0xd] & 0x10) != 0) {
      return 0;
    }
    uVar3 = (ulong)((byte)this[8] & 0x7f);
    bVar1 = (byte)((byte)this[8] & 0x7f);
    if (0x1b < bVar1) {
      return (ulong)(bVar1 < 0x1f);
    }
    bVar4 = (0xe300008UL >> (uVar3 & 0x3f) & 1) != 0;
    if (bVar4) {
      return CONCAT71(0xe3000,bVar4);
    }
    break;
  case 2:
    if (((byte)this[0xd] >> 4 & 1) != 0) {
      return 0;
    }
    uVar2 = (byte)this[8] & 0x7f;
    if (0x1b < (byte)uVar2) {
      return (ulong)((byte)this[0xd] >> 4 & 1);
    }
    goto LAB_0010fd45;
  case 4:
    if ((-1 < (char)this[0xc]) && (((byte)this[0xd] & 1) == 0)) {
      return (ulong)((byte)this[0xd] & 1);
    }
  case 3:
    uVar2 = (byte)this[8] & 0x7f;
    if (0x1b < (byte)uVar2) {
      return 0;
    }
LAB_0010fd45:
    return CONCAT71(0xe3000,(0xe300008UL >> ((ulong)uVar2 & 0x3f) & 1) != 0);
  case 0xd:
    if (((byte)this[0xd] >> 3 & 1) != 0) {
      return 0;
    }
    uVar3 = (ulong)((byte)this[8] & 0x7f);
    if (0x1e < (byte)((byte)this[8] & 0x7f)) {
      return (ulong)((byte)this[0xd] >> 3 & 1);
    }
  }
  return CONCAT71(0x71c000,(0x71c00010UL >> (uVar3 & 0x3f) & 1) != 0);
}



/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TType TVar4;
  TType TVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  byte bVar27;
  ulong uVar28;
  
  lVar26 = *(long *)param_1;
  *(undefined ***)this = &PTR__TType_00119c88;
  if (*(code **)(lVar26 + 0xe8) == isArray) {
    lVar23 = *(long *)(param_1 + 0x60);
    if (lVar23 != 0) {
LAB_0010ff8d:
      uVar9 = *(undefined4 *)(param_1 + 0x80);
      uVar7 = *(uint *)(param_1 + 8);
      *(long *)(this + 0x60) = lVar23;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(this + 0x80) = uVar9;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(this + 0x10) = uVar1;
      *(undefined8 *)(this + 0x18) = uVar13;
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(this + 0x20) = uVar17;
      *(undefined8 *)(this + 0x28) = uVar18;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(this + 0x30) = uVar2;
      *(undefined8 *)(this + 0x38) = uVar3;
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
      *(undefined8 *)(this + 0x68) = uVar1;
      uVar6 = *(ushort *)(param_1 + 10);
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(this + 0x40) = uVar11;
      *(undefined8 *)(this + 0x48) = uVar12;
      *(undefined8 *)(this + 0x50) = uVar13;
      *(undefined8 *)(this + 0x58) = uVar14;
      *(undefined8 *)(this + 0x70) = uVar15;
      *(undefined8 *)(this + 0x78) = uVar16;
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f | uVar6 & 0x7e0;
      pcVar10 = *(code **)(lVar26 + 0x98);
      *(undefined8 *)(this + 0x88) = uVar1;
      *(undefined8 *)(this + 0x90) = uVar2;
      if (pcVar10 != getArraySizes) {
        lVar23 = (*pcVar10)(param_1);
      }
      lVar26 = *(long *)(lVar23 + 8);
      if ((lVar26 != 0) && ((int)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 4) == 1)) {
        *(undefined8 *)(this + 0x60) = 0;
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar21 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar20);
      *puVar21 = &PTR__TSmallArrayVector_00119c68;
      puVar21[1] = 0;
      *(undefined4 *)(puVar21 + 2) = 0;
      *(undefined2 *)((long)puVar21 + 0x14) = 1;
      *(undefined8 **)(this + 0x60) = puVar21;
      lVar26 = *(long *)(param_1 + 0x60);
      lVar23 = *(long *)(lVar26 + 8);
      if (lVar23 == 0) {
        return;
      }
      if ((int)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8) >> 4) < 2) {
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22 = (ulong *)glslang::TPoolAllocator::allocate(uVar20);
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = uVar20;
      puVar21[1] = puVar22;
      lVar26 = *(long *)(lVar26 + 8);
      lVar23 = *(long *)(lVar26 + 8);
      lVar26 = *(long *)(lVar26 + 0x10);
      if (lVar26 == lVar23 + 0x10) {
        return;
      }
      uVar28 = lVar26 - (lVar23 + 0x10);
      if (uVar28 < 0x7ffffffffffffff1) {
        if (uVar28 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = glslang::TPoolAllocator::allocate(uVar20);
        }
        lVar25 = 0;
        lVar26 = (lVar26 + -0x10) - lVar23;
        do {
          puVar21 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          uVar1 = puVar21[1];
          *(undefined8 *)(uVar20 + lVar25) = *puVar21;
          ((undefined8 *)(uVar20 + lVar25))[1] = uVar1;
          lVar25 = lVar25 + 0x10;
        } while (lVar26 != lVar25);
        puVar22[1] = uVar20;
        puVar22[2] = lVar26 + uVar20;
        puVar22[3] = uVar20 + uVar28;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_range_insert");
    }
  }
  else {
    cVar19 = (**(code **)(lVar26 + 0xe8))(param_1);
    if (cVar19 != '\0') {
      lVar26 = *(long *)param_1;
      lVar23 = *(long *)(param_1 + 0x60);
      goto LAB_0010ff8d;
    }
  }
  lVar26 = *(long *)(param_1 + 0x68);
  if ((byte)((char)param_1[8] - 0xfU) < 2) {
    lVar26 = *(long *)((long)param_2 * 0x20 + *(long *)(lVar26 + 8));
    uVar7 = *(uint *)(lVar26 + 8);
    uVar1 = *(undefined8 *)(lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x18);
    uVar3 = *(undefined8 *)(lVar26 + 0x20);
    uVar11 = *(undefined8 *)(lVar26 + 0x28);
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar26 + 0x80);
    uVar12 = *(undefined8 *)(lVar26 + 0x30);
    uVar13 = *(undefined8 *)(lVar26 + 0x38);
    uVar14 = *(undefined8 *)(lVar26 + 0x70);
    uVar15 = *(undefined8 *)(lVar26 + 0x78);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar16 = *(undefined8 *)(lVar26 + 0x40);
    uVar17 = *(undefined8 *)(lVar26 + 0x48);
    *(undefined8 *)(this + 0x20) = uVar3;
    *(undefined8 *)(this + 0x28) = uVar11;
    uVar3 = *(undefined8 *)(lVar26 + 0x50);
    uVar11 = *(undefined8 *)(lVar26 + 0x58);
    uVar1 = *(undefined8 *)(lVar26 + 0x68);
    *(undefined8 *)(this + 0x30) = uVar12;
    *(undefined8 *)(this + 0x38) = uVar13;
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
    uVar2 = *(undefined8 *)(lVar26 + 0x60);
    *(undefined8 *)(this + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar26 + 0x88);
    uVar12 = *(undefined8 *)(lVar26 + 0x90);
    *(undefined8 *)(this + 0x60) = uVar2;
    uVar6 = *(ushort *)(lVar26 + 10);
    *(undefined8 *)(this + 0x40) = uVar16;
    *(undefined8 *)(this + 0x48) = uVar17;
    *(undefined8 *)(this + 0x50) = uVar3;
    *(undefined8 *)(this + 0x58) = uVar11;
    *(undefined8 *)(this + 0x70) = uVar14;
    *(undefined8 *)(this + 0x78) = uVar15;
    *(undefined8 *)(this + 0x88) = uVar1;
    *(undefined8 *)(this + 0x90) = uVar12;
    *(ushort *)(this + 10) = uVar6 & 0x7e0 | *(ushort *)(this + 10) & 0xf81f;
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  TVar4 = param_1[9];
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar11;
  uVar24 = uVar7 & 0x7ffffff;
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined8 *)(this + 0x28) = uVar13;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x30) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar15;
  TVar5 = param_1[10];
  *(undefined8 *)(this + 0x40) = uVar11;
  *(undefined8 *)(this + 0x48) = uVar16;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x50) = uVar12;
  *(undefined8 *)(this + 0x58) = uVar13;
  uVar8 = *(uint *)(this + 8);
  *(undefined8 *)(this + 0x60) = uVar2;
  *(long *)(this + 0x68) = lVar26;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar11;
  *(undefined8 *)(this + 0x90) = uVar14;
  *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar24;
  if ((byte)(uVar24 >> 8) < 0x10) {
    if ((1 < ((byte)TVar4 & 0xf)) || (((byte)TVar5 >> 4 & 1) != 0)) {
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffeff0ff | 0x100;
      return;
    }
    if ((((byte)TVar5 >> 5 & 1) != 0) || (((byte)TVar5 >> 6 & 1) != 0)) {
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f;
      *(undefined8 *)(this + 0x88) = 0;
    }
  }
  else {
    bVar27 = (byte)TVar5 & 0xf;
    if (param_3) {
      bVar27 = (byte)TVar4 >> 4;
    }
    *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar7 & 0x7f000ff | (uint)bVar27 << 8;
    if (bVar27 == 1) {
      this[10] = (TType)((byte)this[10] | 0x10);
    }
  }
  return;
}



/* glslang::TIntermediate::getUniformLocationOverride(char const*) const */

undefined4 __thiscall
glslang::TIntermediate::getUniformLocationOverride(TIntermediate *this,char *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  size_t *psVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t *__s1;
  long in_FS_OFFSET;
  size_t local_70;
  size_t *local_68;
  size_t local_60;
  size_t local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  sVar4 = strlen(param_1);
  local_70 = sVar4;
  if (sVar4 < 0x10) {
    psVar7 = local_58;
    if (sVar4 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*param_1);
    }
    else if (sVar4 != 0) goto LAB_001104ce;
  }
  else {
    local_68 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
    psVar7 = local_68;
LAB_001104ce:
    memcpy(psVar7,param_1,sVar4);
    psVar7 = local_68;
  }
  __s1 = local_68;
  sVar4 = local_70;
  *(undefined1 *)((long)psVar7 + local_70) = 0;
  local_60 = local_70;
  if (*(ulong *)(this + 0x5a0) < 0x15) {
    for (puVar10 = *(undefined8 **)(this + 0x598); puVar10 != (undefined8 *)0x0;
        puVar10 = (undefined8 *)*puVar10) {
      if ((sVar4 == puVar10[2]) &&
         ((sVar4 == 0 || (iVar3 = memcmp(__s1,(void *)puVar10[1],sVar4), iVar3 == 0))))
      goto LAB_0011038a;
    }
  }
  else {
    uVar5 = std::_Hash_bytes(local_68,local_70,0xc70f6907);
    sVar4 = local_60;
    __s1 = local_68;
    uVar1 = *(ulong *)(this + 0x590);
    uVar8 = uVar5 % uVar1;
    puVar10 = *(undefined8 **)(*(long *)(this + 0x588) + uVar8 * 8);
    if (puVar10 == (undefined8 *)0x0) {
      uVar9 = 0xffffffff;
      goto LAB_0011038d;
    }
    uVar6 = ((undefined8 *)*puVar10)[6];
    puVar2 = (undefined8 *)*puVar10;
    while (((puVar11 = puVar2, uVar5 != uVar6 || (sVar4 != puVar11[2])) ||
           ((sVar4 != 0 && (iVar3 = memcmp(__s1,(void *)puVar11[1],sVar4), iVar3 != 0))))) {
      puVar2 = (undefined8 *)*puVar11;
      if ((puVar2 == (undefined8 *)0x0) ||
         (uVar6 = puVar2[6], puVar10 = puVar11, uVar8 != uVar6 % uVar1)) goto LAB_00110498;
    }
    puVar10 = (undefined8 *)*puVar10;
    if (puVar10 != (undefined8 *)0x0) goto LAB_0011038a;
  }
LAB_00110498:
  uVar9 = 0xffffffff;
LAB_0011038d:
  if (__s1 != local_58) {
    operator_delete(__s1,local_58[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011038a:
  uVar9 = *(undefined4 *)(puVar10 + 5);
  goto LAB_0011038d;
}



/* glslang::TLiveTraverser::pushFunction(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TLiveTraverser::pushFunction(TLiveTraverser *this,basic_string *param_1)

{
  size_t __n;
  int iVar1;
  long *plVar2;
  long *plVar3;
  _List_node_base *p_Var4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x50) + 0x80) + 0x30))();
  if (*(code **)(*plVar2 + 400) == TIntermAggregate::getSequence) {
    plVar2 = plVar2 + 0x18;
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 400))();
  }
  lVar7 = plVar2[1];
  if (lVar7 != plVar2[2]) {
    uVar6 = 0;
    do {
      plVar3 = (long *)(**(code **)(**(long **)(lVar7 + uVar6 * 8) + 0x30))();
      if ((plVar3 != (long *)0x0) && ((int)plVar3[0x17] == 5)) {
        if (*(code **)(*plVar3 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
          plVar5 = plVar3 + 0x20;
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3);
        }
        __n = plVar5[2];
        if (__n == *(size_t *)(param_1 + 0x10)) {
          if ((__n == 0) ||
             (iVar1 = memcmp((void *)plVar5[1],*(void **)(param_1 + 8),__n), iVar1 == 0)) {
            p_Var4 = (_List_node_base *)operator_new(0x18);
            *(long **)(p_Var4 + 0x10) = plVar3;
            std::__detail::_List_node_base::_M_hook(p_Var4);
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
            return;
          }
        }
      }
      lVar7 = plVar2[1];
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(plVar2[2] - lVar7 >> 3));
  }
  return;
}



/* glslang::TSymbolValidater::qualifierCheck(glslang::TType const*, glslang::TType const*,
   std::__cxx11::string const&, bool) */

ulong __thiscall
glslang::TSymbolValidater::qualifierCheck
          (TSymbolValidater *this,TType *param_1,TType *param_2,string *param_3,bool param_4)

{
  TType TVar1;
  TType TVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  TType *pTVar6;
  code *pcVar7;
  TType *pTVar8;
  long lVar9;
  TType *pTVar10;
  undefined7 in_register_00000081;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 *local_88;
  long local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  uVar11 = CONCAT71(in_register_00000081,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x58) == TType::getQualifier) {
    pTVar6 = param_1 + 0x10;
    pcVar7 = *(code **)(*(long *)param_2 + 0x58);
    if (pcVar7 != TType::getQualifier) goto LAB_00110b09;
LAB_001107bd:
    pTVar8 = param_2 + 0x10;
  }
  else {
    pTVar6 = (TType *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
    pcVar7 = *(code **)(*(long *)param_2 + 0x58);
    if (pcVar7 == TType::getQualifier) goto LAB_001107bd;
LAB_00110b09:
    pTVar8 = (TType *)(*pcVar7)(param_2);
  }
  lVar9 = *(long *)param_1;
  if (param_4) {
LAB_00110811:
    if (*(code **)(lVar9 + 0x58) == TType::getQualifier) {
      TVar1 = param_1[0x18];
    }
    else {
      lVar9 = (**(code **)(lVar9 + 0x58))(param_1);
      TVar1 = *(TType *)(lVar9 + 8);
    }
    if (((byte)TVar1 & 0x7f) == 1) {
LAB_00110a40:
      if (*(code **)(*(long *)param_2 + 0x58) == TType::getQualifier) {
        pTVar10 = param_2 + 0x10;
      }
      else {
        pTVar10 = (TType *)(**(code **)(*(long *)param_2 + 0x58))(param_2);
      }
      if (((byte)pTVar10[8] & 0x7f) == 1) goto LAB_00110a64;
    }
    uVar5 = 0;
  }
  else {
    if (*(code **)(lVar9 + 0x58) != TType::getQualifier) {
      lVar9 = (**(code **)(lVar9 + 0x58))(param_1);
      if ((*(byte *)(lVar9 + 8) & 0x7f) == 5) goto LAB_00110b40;
LAB_0011080e:
      lVar9 = *(long *)param_1;
      goto LAB_00110811;
    }
    if (((byte)param_1[0x18] & 0x7f) != 5) {
      if (((byte)param_1[0x18] & 0x7f) != 1) {
        uVar5 = 0;
        goto LAB_00110a17;
      }
      goto LAB_00110a40;
    }
LAB_00110b40:
    pTVar10 = param_2 + 0x10;
    if (*(code **)(*(long *)param_2 + 0x58) != TType::getQualifier) {
      pTVar10 = (TType *)(**(code **)(*(long *)param_2 + 0x58))(param_2);
    }
    if (((byte)pTVar10[8] & 0x7f) != 5) goto LAB_0011080e;
LAB_00110a64:
    bVar12 = (((byte)pTVar6[0xb] ^ (byte)pTVar8[0xb]) & 0xe) != 0;
    if (bVar12) {
      std::operator+((string *)&local_68,*(char **)param_3);
      TInfoSinkBase::message(*(undefined8 *)(this + 0x158),2,local_68);
      std::__cxx11::string::_M_dispose();
    }
    uVar5 = (ulong)bVar12;
    TVar1 = pTVar6[0x2c];
    if ((TVar1 != (TType)0x0) && (TVar2 = pTVar8[0x2c], TVar2 != TVar1 && TVar2 != (TType)0x0)) {
      std::operator+((string *)&local_68,*(char **)param_3);
      TInfoSinkBase::message(*(undefined8 *)(this + 0x158),2,local_68);
      std::__cxx11::string::_M_dispose();
      uVar5 = (ulong)(TVar2 != TVar1 && TVar2 != (TType)0x0);
    }
  }
  if (param_4) {
    if ((((byte)pTVar6[0x10] ^ (byte)pTVar8[0x10]) & 0xf) != 0) {
      std::operator+((string *)&local_68,*(char **)param_3);
      pcVar4 = *(char **)(this + 0x158);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      std::__cxx11::string::_M_dispose();
      uVar5 = uVar11 & 0xffffffff;
    }
    if ((((byte)pTVar6[0xf] ^ (byte)pTVar8[0xf]) & 0x70) != 0) {
      std::operator+((string *)&local_68,*(char **)param_3);
      pcVar4 = *(char **)(this + 0x158);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      std::__cxx11::string::_M_dispose();
      uVar5 = uVar11 & 0xffffffff;
    }
    if (*(int *)(pTVar6 + 0x14) != *(int *)(pTVar8 + 0x14)) {
      uVar5 = *(ulong *)(param_3 + 8);
      local_88 = local_78;
      uVar3 = *(ulong *)param_3;
      local_80 = 0;
      local_78[0] = 0;
      std::__cxx11::string::reserve((ulong)&local_88);
      if ((0x3fffffffffffffffU - local_80 < uVar5) ||
         (std::__cxx11::string::_M_append((char *)&local_88,uVar3),
         0x3fffffffffffffffU - local_80 < 0x29)) goto LAB_00110cdc;
      std::__cxx11::string::_M_append((char *)&local_88,0x1106f8);
      pcVar4 = *(char **)(this + 0x158);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      std::__cxx11::string::_M_dispose();
      uVar5 = uVar11 & 0xffffffff;
    }
    if (*(int *)(pTVar6 + 0x18) != *(int *)(pTVar8 + 0x18)) {
      uVar5 = *(ulong *)param_3;
      uVar3 = *(ulong *)(param_3 + 8);
      local_68 = local_58;
      local_58[0] = 0;
      local_60 = 0;
      std::__cxx11::string::reserve((ulong)&local_68);
      if ((0x3fffffffffffffffU - local_60 < uVar3) ||
         (std::__cxx11::string::_M_append((char *)&local_68,uVar5),
         0x3fffffffffffffffU - local_60 < 0x28)) {
LAB_00110cdc:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)&local_68,0x110728);
      pcVar4 = *(char **)(this + 0x158);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      glslang::TInfoSinkBase::append(pcVar4);
      std::__cxx11::string::_M_dispose();
      uVar5 = uVar11 & 0xffffffff;
    }
  }
LAB_00110a17:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> bVar1;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__src;
  ulong __n;
  ulong uVar2;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  __dest = this + 0x18;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest;
  __src = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(param_1 + 8)
  ;
  __n = *(ulong *)(param_1 + 0x10);
  *(ulong *)this = uVar2;
  if (__n < 0x10) {
    if (__n == 1) {
      bVar1 = *__src;
      *(undefined8 *)(this + 0x10) = 1;
      this[0x18] = bVar1;
      this[0x19] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return;
    }
    if (__n == 0) {
      *(undefined8 *)(this + 0x10) = 0;
      *__dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(uVar2);
    *(ulong *)(this + 0x18) = __n;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  memcpy(__dest,__src,__n);
  *(ulong *)(this + 0x10) = __n;
  *(undefined1 *)(*(long *)(this + 8) + __n) = 0;
  return;
}



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
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  __n = strlen(param_1);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_00110df7;
    }
    if (__n == 0) goto LAB_00110df7;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(string **)this;
LAB_00110df7:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

bool std::operator==(basic_string *param_1,basic_string *param_2)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  
  __n = *(size_t *)(param_1 + 0x10);
  bVar1 = false;
  if ((__n == *(size_t *)(param_2 + 0x10)) && (bVar1 = true, __n != 0)) {
    iVar2 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),__n);
    return iVar2 == 0;
  }
  return bVar1;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TType::sameStructType(glslang::TType const&, int*, int*) const */

undefined8 __thiscall
glslang::TType::sameStructType(TType *this,TType *param_1,int *param_2,int *param_3)

{
  basic_string *pbVar1;
  size_t __n;
  TType TVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  TType *this_00;
  
  if (param_2 != (int *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
  }
  if (*(code **)(*(long *)this + 0x128) != isStruct) {
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      pcVar6 = *(code **)(*(long *)param_1 + 0x128);
      if (pcVar6 != isStruct) goto LAB_00111768;
LAB_00110f6a:
      if (1 < (byte)((char)param_1[8] - 0xfU)) {
        return 1;
      }
    }
LAB_00110f7a:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar2 = this[8];
      goto LAB_00110f92;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 != '\0') goto LAB_00110f9a;
    goto LAB_00110fbd;
  }
  TVar2 = this[8];
  if (1 < (byte)((char)TVar2 - 0xfU)) {
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 == isStruct) goto LAB_00110f6a;
LAB_00111768:
    cVar4 = (*pcVar6)(param_1);
    if (cVar4 == '\0') {
      return 1;
    }
    goto LAB_00110f7a;
  }
LAB_00110f92:
  if ((byte)((char)TVar2 - 0xfU) < 2) {
LAB_00110f9a:
    if (*(code **)(*(long *)param_1 + 0x128) == isStruct) {
      if ((byte)((char)param_1[8] - 0xfU) < 2) {
LAB_00111260:
        if (*(long *)(this + 0x68) == *(long *)(param_1 + 0x68)) {
          return 1;
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
      if (cVar4 != '\0') goto LAB_00111260;
    }
LAB_00110fbd:
    if (*(code **)(*(long *)this + 0x128) != isStruct) {
      cVar4 = (**(code **)(*(long *)this + 0x128))(this);
      if (cVar4 == '\0') {
        return 0;
      }
      goto LAB_00110fe0;
    }
    TVar2 = this[8];
  }
  if (1 < (byte)((char)TVar2 - 0xfU)) {
    return 0;
  }
LAB_00110fe0:
  if (*(code **)(*(long *)param_1 + 0x128) == isStruct) {
    if (1 < (byte)((char)param_1[8] - 0xfU)) {
      return 0;
    }
  }
  else {
    cVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  pbVar1 = *(basic_string **)(this + 0x78);
  bVar3 = std::operator==(pbVar1,*(basic_string **)(param_1 + 0x78));
  if (bVar3) {
    bVar3 = false;
    if (*(long *)(pbVar1 + 0x10) == 0xc) {
      if ((**(long **)(pbVar1 + 8) == 0x65567265505f6c67) &&
         ((int)(*(long **)(pbVar1 + 8))[1] == 0x78657472)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      bVar3 = !bVar3;
    }
    lVar9 = *(long *)(this + 0x68);
    lVar12 = *(long *)(lVar9 + 8);
    lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    if (((param_2 != (int *)0x0) || (lVar16 - lVar8 == lVar7 - lVar12)) || (bVar3)) {
      uVar10 = 0;
      uVar11 = 0;
LAB_00111060:
      uVar13 = lVar16 - lVar8 >> 5;
      if (uVar11 < (ulong)(lVar7 - lVar12 >> 5)) {
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        lVar15 = uVar11 * 0x20;
        if (uVar13 <= uVar10) {
          plVar14 = *(long **)(lVar12 + lVar15);
          pcVar6 = *(code **)(*plVar14 + 0x18);
          if (pcVar6 == hiddenMember) {
            if ((char)plVar14[1] == '\0') goto LAB_001113c0;
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_0011135f;
LAB_001114b0:
            lVar9 = (*pcVar6)();
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          else {
            cVar4 = (*pcVar6)();
            if (cVar4 != '\0') goto LAB_00111442;
            plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_001114b0;
LAB_0011135f:
            lVar9 = plVar14[0xe];
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          if (lVar12 == 0x16) {
            plVar14 = *(long **)(lVar9 + 8);
            if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
               (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_001113a0;
          }
          else if ((lVar12 != 0x14) ||
                  ((plVar14 = *(long **)(lVar9 + 8),
                   *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                   ((int)plVar14[2] != 0x564e7765)))) {
LAB_001113a0:
            if (param_2 == (int *)0x0) {
              return 0;
            }
            *param_3 = -1;
            return 0;
          }
          goto LAB_00111442;
        }
        lVar16 = uVar10 * 0x20;
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar7 = (*(long **)(lVar8 + lVar16))[0xe];
        }
        else {
          lVar7 = (*pcVar6)();
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
        }
        this_00 = *(TType **)(lVar12 + lVar15);
        if (*(code **)(*(long *)this_00 + 0x30) == getFieldName_abi_cxx11_) {
          lVar8 = *(long *)(this_00 + 0x70);
        }
        else {
          lVar8 = (**(code **)(*(long *)this_00 + 0x30))(this_00);
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          this_00 = *(TType **)(lVar12 + lVar15);
        }
        __n = *(size_t *)(lVar8 + 0x10);
        if (__n == *(size_t *)(lVar7 + 0x10)) {
          if ((__n == 0) ||
             (iVar5 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar7 + 8),__n), iVar5 == 0)) {
            cVar4 = operator==(this_00,*(TType **)
                                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + lVar16));
            if (cVar4 == '\0') {
              return 0;
            }
            goto LAB_00111442;
          }
        }
        if (*(code **)(*(long *)this_00 + 0x18) == hiddenMember) {
          if (this_00[8] != (TType)0x0) goto LAB_0011110e;
LAB_00111600:
          lVar7 = *(long *)(lVar9 + 0x10);
          uVar11 = uVar11 + 1;
          lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
          goto LAB_00111060;
        }
        cVar4 = (**(code **)(*(long *)this_00 + 0x18))(this_00);
        if (cVar4 != '\0') {
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          goto LAB_00111600;
        }
LAB_0011110e:
        lVar12 = *(long *)(param_1 + 0x68);
        lVar8 = *(long *)(lVar12 + 8);
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)(*(long **)(lVar8 + lVar16))[1] == '\0') {
LAB_001116c0:
            lVar9 = *(long *)(this + 0x68);
            lVar16 = *(long *)(lVar12 + 0x10);
            uVar10 = uVar10 + 1;
            lVar7 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)(lVar9 + 8);
            goto LAB_00111060;
          }
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') {
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
            goto LAB_001116c0;
          }
        }
        if (!bVar3) {
          return 0;
        }
        plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
        pcVar6 = *(code **)(*plVar14 + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar9 = plVar14[0xe];
        }
        else {
          lVar9 = (*pcVar6)();
        }
        if (*(long *)(lVar9 + 0x10) == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
             (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_0011144a;
LAB_001111a8:
          lVar12 = *(long *)(param_1 + 0x68);
          lVar8 = *(long *)(lVar12 + 8);
          pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) {
            lVar15 = (*(long **)(lVar8 + lVar16))[0xe];
          }
          else {
            lVar15 = (*pcVar6)();
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
          }
          lVar9 = *(long *)(this + 0x68);
          uVar10 = uVar10 + 1;
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)(lVar9 + 8);
          if (*(long *)(lVar15 + 0x10) == 0x16) {
            plVar14 = *(long **)(lVar15 + 8);
            if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
               (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_00111060;
          }
          else if ((*(long *)(lVar15 + 0x10) == 0x14) &&
                  ((plVar14 = *(long **)(lVar15 + 8),
                   *plVar14 == 0x7469736f505f6c67 && plVar14[1] == 0x69567265506e6f69 &&
                   ((int)plVar14[2] == 0x564e7765)))) goto LAB_00111060;
          uVar11 = uVar11 + 1;
          goto LAB_00111060;
        }
        if (((*(long *)(lVar9 + 0x10) != 0x14) ||
            (plVar14 = *(long **)(lVar9 + 8),
            *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69)) ||
           ((int)plVar14[2] != 0x564e7765)) goto LAB_001111a8;
      }
      else {
        if (uVar13 <= uVar10) {
          return 1;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        plVar14 = *(long **)(lVar8 + uVar10 * 0x20);
        pcVar6 = *(code **)(*plVar14 + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)plVar14[1] == '\0') {
LAB_001113c0:
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
            goto LAB_00111060;
          }
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_001112d5;
LAB_00111560:
          lVar9 = (*pcVar6)();
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') goto LAB_00111442;
          plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 8) + uVar10 * 0x20);
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00111560;
LAB_001112d5:
          lVar9 = plVar14[0xe];
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        if (lVar12 == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
             (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00111318;
        }
        else if ((lVar12 != 0x14) ||
                ((plVar14 = *(long **)(lVar9 + 8),
                 *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                 ((int)plVar14[2] != 0x564e7765)))) {
LAB_00111318:
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = -1;
          return 0;
        }
LAB_00111442:
        uVar10 = uVar10 + 1;
      }
LAB_0011144a:
      uVar11 = uVar11 + 1;
      lVar9 = *(long *)(this + 0x68);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      lVar12 = *(long *)(lVar9 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      goto LAB_00111060;
    }
  }
  return 0;
}



/* glslang::TType::TEMPNAMEPLACEHOLDERVALUE(glslang::TType const&) const */

ulong __thiscall glslang::TType::operator==(TType *this,TType *param_1)

{
  TType TVar1;
  TType TVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  TSpirvTypeParameter *pTVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  TSpirvTypeParameter *pTVar16;
  int *piVar17;
  TSpirvTypeParameter *this_00;
  int *piVar18;
  long local_50;
  
  if (this[8] != param_1[8]) {
    return 0;
  }
  if (this[8] == (TType)0xe) {
    if (*(short *)(this + 0x80) != *(short *)(param_1 + 0x80)) {
      return 0;
    }
    TVar2 = this[0x82];
    if ((((byte)param_1[0x82] ^ (byte)TVar2) & 3) != 0) {
      return 0;
    }
    TVar1 = param_1[0x82];
    if (((byte)TVar2 >> 2 & 1) != ((byte)TVar1 >> 2 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 3 & 1) != ((byte)TVar1 >> 3 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 4 & 1) != ((byte)TVar1 >> 4 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 5 & 1) != ((byte)TVar1 >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 5 & 1) != ((byte)param_1[0x83] >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 6 & 1) != ((byte)param_1[0x83] >> 6 & 1)) {
      return 0;
    }
  }
  if ((((byte)this[9] ^ (byte)param_1[9]) & 0xf) != 0) {
    return 0;
  }
  if (0xf < ((byte)this[9] ^ (byte)param_1[9])) {
    return 0;
  }
  TVar2 = this[10];
  if ((((byte)param_1[10] ^ (byte)TVar2) & 0x1f) != 0) {
    return 0;
  }
  if (((byte)TVar2 >> 5 & 1) != ((byte)param_1[10] >> 5 & 1)) {
    return 0;
  }
  if (((byte)TVar2 >> 6 & 1) != ((byte)param_1[10] >> 6 & 1)) {
    return 0;
  }
  cVar7 = sameStructType(this,param_1,(int *)0x0,(int *)0x0);
  if (cVar7 == '\0') {
    return 0;
  }
  bVar8 = sameReferenceType(this,param_1);
  if (bVar8 == 0) {
    return 0;
  }
  lVar10 = *(long *)(this + 0x60);
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar10 == 0) {
    if (lVar14 != 0) {
      return 0;
    }
  }
  else {
    if (lVar14 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar10 + 8);
    lVar14 = *(long *)(lVar14 + 8);
    if (lVar3 == 0) {
      if (lVar14 == 0) goto LAB_00111ae0;
    }
    else if (lVar14 != 0) {
      piVar4 = *(int **)(lVar3 + 0x10);
      piVar17 = *(int **)(lVar3 + 8);
      piVar18 = *(int **)(lVar14 + 8);
      if ((long)piVar4 - (long)piVar17 == *(long *)(lVar14 + 0x10) - (long)piVar18) {
        for (; piVar17 != piVar4; piVar17 = piVar17 + 4) {
          if (*piVar17 != *piVar18) {
LAB_00111e10:
            lVar10 = *(long *)(this + 0x60);
            goto LAB_00111ab6;
          }
          plVar12 = *(long **)(piVar17 + 2);
          plVar11 = *(long **)(piVar18 + 2);
          if (plVar12 != (long *)0x0) {
            if (((plVar11 != (long *)0x0) &&
                (lVar10 = (**(code **)(*plVar12 + 0x60))(plVar12), lVar10 != 0)) &&
               (lVar10 = (**(code **)(*plVar11 + 0x60))(plVar11), lVar10 != 0)) {
              plVar12 = (long *)(**(code **)(*plVar12 + 0x60))(plVar12);
              if (*(code **)(*plVar12 + 0x180) == TIntermSymbol::getId) {
                lVar10 = plVar12[0x17];
              }
              else {
                lVar10 = (**(code **)(*plVar12 + 0x180))();
              }
              plVar12 = (long *)(**(code **)(*plVar11 + 0x60))(plVar11);
              if (*(code **)(*plVar12 + 0x180) == TIntermSymbol::getId) {
                lVar14 = plVar12[0x17];
              }
              else {
                lVar14 = (**(code **)(*plVar12 + 0x180))();
              }
              if (lVar10 == lVar14) goto LAB_00111e1e;
            }
            goto LAB_00111e10;
          }
          if (plVar11 != (long *)0x0) goto LAB_00111e10;
LAB_00111e1e:
          piVar18 = piVar18 + 4;
        }
        goto LAB_00111ae0;
      }
    }
LAB_00111ab6:
    if (*(char *)(lVar10 + 0x14) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x60) + 0x14) == '\0') {
      return 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x60) + 0x10) != 0) && (*(int *)(lVar10 + 0x10) != 0)) {
      return 0;
    }
  }
LAB_00111ae0:
  piVar4 = *(int **)(this + 0x88);
  piVar17 = *(int **)(param_1 + 0x88);
  if (piVar4 == (int *)0x0) {
    if (piVar17 != (int *)0x0) {
      return 0;
    }
  }
  else {
    if (piVar17 == (int *)0x0) {
      return 0;
    }
    if (*piVar4 != *piVar17) {
      return 0;
    }
    lVar10 = *(long *)(*(long *)(piVar4 + 2) + 8);
    lVar14 = *(long *)(*(long *)(piVar17 + 2) + 8);
    if (lVar10 == 0) {
      if (lVar14 != 0) {
        return 0;
      }
    }
    else {
      if (lVar14 == 0) {
        return 0;
      }
      piVar18 = *(int **)(lVar10 + 8);
      piVar5 = *(int **)(lVar10 + 0x10);
      piVar15 = *(int **)(lVar14 + 8);
      if ((long)piVar5 - (long)piVar18 != *(long *)(lVar14 + 0x10) - (long)piVar15) {
        return 0;
      }
      for (; piVar18 != piVar5; piVar18 = piVar18 + 4) {
        if (*piVar18 != *piVar15) {
          return 0;
        }
        plVar12 = *(long **)(piVar15 + 2);
        plVar11 = *(long **)(piVar18 + 2);
        if (plVar11 == (long *)0x0) {
          if (plVar12 != (long *)0x0) {
            return 0;
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
            return 0;
          }
          lVar10 = (**(code **)(*plVar11 + 0x60))(plVar11);
          if (lVar10 == 0) {
            return 0;
          }
          lVar10 = (**(code **)(*plVar12 + 0x60))();
          if (lVar10 == 0) {
            return 0;
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x60))(plVar11);
          if (*(code **)(*plVar11 + 0x180) == TIntermSymbol::getId) {
            local_50 = plVar11[0x17];
          }
          else {
            local_50 = (**(code **)(*plVar11 + 0x180))();
          }
          plVar12 = (long *)(**(code **)(*plVar12 + 0x60))();
          if (*(code **)(*plVar12 + 0x180) == TIntermSymbol::getId) {
            lVar10 = plVar12[0x17];
          }
          else {
            lVar10 = (**(code **)(*plVar12 + 0x180))();
          }
          if (local_50 != lVar10) {
            return 0;
          }
        }
        piVar15 = piVar15 + 4;
      }
    }
    if ((*piVar4 == 0x16) &&
       (cVar7 = TSpirvType::operator==(*(TSpirvType **)(piVar4 + 4),*(TSpirvType **)(piVar17 + 4)),
       cVar7 == '\0')) {
      return 0;
    }
  }
  if (((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) & 0x380) == 0) {
    lVar10 = *(long *)(param_1 + 0x90);
    lVar14 = *(long *)(this + 0x90);
    if (lVar14 == 0) {
      return (ulong)CONCAT11((char)((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) >> 8),
                             lVar10 == 0);
    }
    if ((lVar10 != 0) && (__n = *(size_t *)(lVar14 + 0x10), __n == *(size_t *)(lVar10 + 0x10))) {
      if (((__n == 0) ||
          (iVar9 = memcmp(*(void **)(lVar14 + 8),*(void **)(lVar10 + 8),__n), iVar9 == 0)) &&
         (*(int *)(lVar14 + 0x28) == *(int *)(lVar10 + 0x28))) {
        pTVar6 = *(TSpirvTypeParameter **)(lVar14 + 0x40);
        this_00 = *(TSpirvTypeParameter **)(lVar14 + 0x38);
        pTVar16 = *(TSpirvTypeParameter **)(lVar10 + 0x38);
        if ((long)pTVar6 - (long)this_00 == *(long *)(lVar10 + 0x40) - (long)pTVar16) {
          while( true ) {
            if (this_00 == pTVar6) {
              return (ulong)bVar8;
            }
            uVar13 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar16);
            if ((char)uVar13 == '\0') break;
            this_00 = this_00 + 0x10;
            pTVar16 = pTVar16 + 0x10;
          }
          return uVar13;
        }
      }
    }
  }
  return 0;
}



/* glslang::TType::sameReferenceType(glslang::TType const&) const */

undefined8 __thiscall glslang::TType::sameReferenceType(TType *this,TType *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar2 = (uint)(byte)this[8];
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x38))();
  }
  if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
    uVar1 = (uint)(byte)param_1[8];
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  }
  if ((uVar1 == 0x12) == (uVar2 == 0x12)) {
    if (*(code **)(*(long *)this + 0x38) == getBasicType) {
      uVar2 = (uint)(byte)this[8];
    }
    else {
      uVar2 = (**(code **)(*(long *)this + 0x38))(this);
    }
    if (uVar2 != 0x12) {
      if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
        uVar2 = (uint)(byte)param_1[8];
      }
      else {
        uVar2 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
      }
      if (uVar2 != 0x12) {
        return 1;
      }
    }
    if (*(TType **)(this + 0x68) == *(TType **)(param_1 + 0x68)) {
      return 1;
    }
    uVar3 = operator==(*(TType **)(this + 0x68),*(TType **)(param_1 + 0x68));
    return uVar3;
  }
  return 0;
}



/* glslang::TLiveTraverser::pushGlobalReference(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

void __thiscall
glslang::TLiveTraverser::pushGlobalReference(TLiveTraverser *this,basic_string *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  _List_node_base *p_Var6;
  long *plVar7;
  basic_string *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  plVar2 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x50) + 0x80) + 0x30))();
  if (*(code **)(*plVar2 + 400) == TIntermAggregate::getSequence) {
    plVar2 = plVar2 + 0x18;
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 400))();
  }
  lVar4 = plVar2[1];
  uVar9 = 0;
  if (lVar4 != plVar2[2]) {
    do {
      plVar3 = (long *)(**(code **)(**(long **)(lVar4 + uVar9 * 8) + 0x30))();
      if ((plVar3 != (long *)0x0) && ((int)plVar3[0x17] == 1)) {
        if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
          puVar10 = (undefined8 *)plVar3[0x19];
          if (plVar3[0x1a] - (long)puVar10 == 8) {
LAB_00112073:
            lVar4 = (**(code **)(*(long *)*puVar10 + 0x40))();
            if (lVar4 != 0) {
              if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
                plVar5 = plVar3 + 0x18;
              }
              else {
                plVar5 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
              }
              plVar5 = (long *)(**(code **)(**(long **)plVar5[1] + 0x40))();
              if (*(code **)(*plVar5 + 400) == TIntermBinary::getLeft) {
                plVar5 = (long *)plVar5[0x18];
              }
              else {
                plVar5 = (long *)(**(code **)(*plVar5 + 400))();
              }
              plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
              if (plVar5 != (long *)0x0) {
                if (*(code **)(*plVar5 + 0x108) == TIntermTyped::getQualifier) {
                  plVar7 = plVar5 + 6;
                }
                else {
                  plVar7 = (long *)(**(code **)(*plVar5 + 0x108))();
                }
                if ((*(byte *)(plVar7 + 1) & 0x7f) == 1) {
                  if (*(code **)(*plVar5 + 400) == TIntermSymbol::getName_abi_cxx11_) {
                    pbVar8 = (basic_string *)(plVar5 + 0x19);
                  }
                  else {
                    pbVar8 = (basic_string *)(**(code **)(*plVar5 + 400))();
                  }
                  bVar1 = std::operator==(pbVar8,param_1);
                  if (bVar1) {
                    p_Var6 = (_List_node_base *)operator_new(0x18);
                    *(long **)(p_Var6 + 0x10) = plVar3;
                    std::__detail::_List_node_base::_M_hook(p_Var6);
                    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
                    return;
                  }
                }
              }
            }
          }
        }
        else {
          lVar4 = (**(code **)(*plVar3 + 400))(plVar3);
          if (*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8) == 8) {
            if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
              puVar10 = (undefined8 *)plVar3[0x19];
            }
            else {
              lVar4 = (**(code **)(*plVar3 + 400))(plVar3);
              puVar10 = *(undefined8 **)(lVar4 + 8);
            }
            goto LAB_00112073;
          }
        }
      }
      lVar4 = plVar2[1];
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(plVar2[2] - lVar4 >> 3));
  }
  return;
}



/* glslang::TSymbolValidater::typeCheck(glslang::TType const*, glslang::TType const*,
   std::__cxx11::string const&, bool) */

ulong __thiscall
glslang::TSymbolValidater::typeCheck
          (TSymbolValidater *this,TType *param_1,TType *param_2,string *param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *__src;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  ulong local_c0;
  bool local_a9;
  char *local_90;
  char **local_88;
  char *local_80;
  char *local_78 [2];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x128) == TType::isStruct) {
    if ((byte)((char)param_1[8] - 0xfU) < 2) {
LAB_001122e6:
      if (*(code **)(*(long *)param_2 + 0x128) == TType::isStruct) {
        if ((byte)((char)param_2[8] - 0xfU) < 2) {
LAB_0011230a:
          if (*(code **)(*(long *)param_1 + 0x38) == TType::getBasicType) {
            uVar11 = (uint)(byte)param_1[8];
          }
          else {
            uVar11 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
          }
          local_a9 = param_4;
          if (uVar11 == 0x10) {
            if (*(code **)(*(long *)param_2 + 0x38) == TType::getBasicType) {
              uVar11 = (uint)(byte)param_2[8];
            }
            else {
              uVar11 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            }
            local_a9 = param_4;
            if (uVar11 == 0x10) {
              local_a9 = true;
            }
          }
          lVar1 = *(long *)(param_1 + 0x68);
          local_88 = local_78;
          lVar2 = *(long *)(param_2 + 0x68);
          pcVar3 = *(char **)(param_3 + 8);
          __src = *(undefined1 **)param_3;
          local_90 = pcVar3;
          if (pcVar3 < (char *)0x10) {
            if (pcVar3 == (char *)0x1) {
              local_78[0] = (char *)CONCAT71(local_78[0]._1_7_,*__src);
            }
            else if (pcVar3 != (char *)0x0) goto LAB_0011290d;
          }
          else {
            local_88 = (char **)std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_90)
            ;
            local_78[0] = local_90;
LAB_0011290d:
            memcpy(local_88,__src,(size_t)pcVar3);
          }
          *(char *)((long)local_88 + (long)local_90) = '\0';
          lVar20 = *(long *)(lVar1 + 0x10);
          lVar14 = *(long *)(lVar1 + 8);
          lVar15 = lVar20 - lVar14;
          local_80 = local_90;
          if (lVar20 == lVar14) {
            local_c0 = 0;
            uVar21 = 0;
LAB_001126ec:
            do {
              if ((ulong)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 5) <= uVar21)
              goto LAB_00112767;
              plVar5 = *(long **)(*(long *)(lVar2 + 8) + uVar21 * 0x20);
              pcVar4 = *(code **)(*plVar5 + 0x38);
              if (pcVar4 == TType::getBasicType) {
                if ((char)plVar5[1] != '\0') goto LAB_00112720;
              }
              else {
                iVar10 = (*pcVar4)();
                if (iVar10 != 0) {
LAB_00112720:
                  std::operator+((string *)&local_68,*(char **)param_3);
                  TInfoSinkBase::message(*(undefined8 *)(this + 0x158),2,local_68);
                  std::__cxx11::string::_M_dispose();
                  local_c0 = 1;
                  goto LAB_00112767;
                }
              }
              uVar21 = uVar21 + 1;
            } while( true );
          }
          uVar18 = 0;
          uVar21 = 0;
          local_c0 = 0;
LAB_001123de:
          if (uVar18 < (ulong)(lVar20 - lVar14 >> 5)) {
            lVar20 = uVar18 * 0x20;
            pcVar4 = *(code **)(**(long **)(lVar14 + lVar20) + 0x38);
            if (pcVar4 == TType::getBasicType) {
              uVar11 = (uint)*(byte *)(*(long **)(lVar14 + lVar20) + 1);
            }
            else {
              uVar11 = (*pcVar4)();
            }
            if (uVar11 != 0) {
              lVar14 = *(long *)(lVar2 + 0x10);
              lVar17 = *(long *)(lVar2 + 8);
              uVar16 = lVar14 - lVar17 >> 5;
              if (uVar21 < uVar16) {
                do {
                  lVar19 = uVar21 * 0x20;
                  pcVar4 = *(code **)(**(long **)(lVar17 + lVar19) + 0x38);
                  if (pcVar4 == TType::getBasicType) {
                    uVar16 = lVar14 - lVar17 >> 5;
                    if ((char)(*(long **)(lVar17 + lVar19))[1] != '\0') goto LAB_00112492;
                  }
                  else {
                    iVar10 = (*pcVar4)();
                    lVar14 = *(long *)(lVar2 + 0x10);
                    lVar17 = *(long *)(lVar2 + 8);
                    uVar16 = lVar14 - lVar17 >> 5;
                    if (iVar10 != 0) goto LAB_00112492;
                  }
                  uVar21 = uVar21 + 1;
                  if (uVar16 <= uVar21) break;
                } while( true );
              }
              if (uVar21 != uVar16) goto LAB_00112988;
              goto LAB_00112692;
            }
            goto LAB_001123c0;
          }
LAB_0011296c:
          std::__throw_out_of_range_fmt
                    ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
                     uVar18);
          goto LAB_0011297d;
        }
      }
      else {
        cVar8 = (**(code **)(*(long *)param_2 + 0x128))(param_2);
        if (cVar8 != '\0') goto LAB_0011230a;
      }
    }
  }
  else {
    cVar8 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
    if (cVar8 != '\0') goto LAB_001122e6;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar21 = qualifierCheck(this,param_1,param_2,param_3,param_4);
    return uVar21;
  }
LAB_0011297d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00112492:
  if (uVar21 == uVar16) {
LAB_00112692:
    uVar21 = uVar16;
    std::operator+((string *)&local_68,*(char **)param_3);
    TInfoSinkBase::message(*(undefined8 *)(this + 0x158),2,local_68);
    std::__cxx11::string::_M_dispose();
    local_c0 = 1;
    goto LAB_001126ec;
  }
  if (uVar16 <= uVar21) {
LAB_00112988:
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar21,
               uVar16);
LAB_0011299c:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  pcVar4 = *(code **)(**(long **)(lVar17 + lVar19) + 0x30);
  if (pcVar4 == TType::getFieldName_abi_cxx11_) {
    pbVar13 = (basic_string *)(*(long **)(lVar17 + lVar19))[0xe];
  }
  else {
    pbVar13 = (basic_string *)(*pcVar4)();
  }
  if ((ulong)(*(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8) >> 5) <= uVar18) goto LAB_0011296c;
  plVar5 = *(long **)(*(long *)(lVar1 + 8) + lVar20);
  pcVar4 = *(code **)(*plVar5 + 0x30);
  if (pcVar4 == TType::getFieldName_abi_cxx11_) {
    pbVar12 = (basic_string *)plVar5[0xe];
  }
  else {
    pbVar12 = (basic_string *)(*pcVar4)();
  }
  bVar7 = std::operator==(pbVar12,pbVar13);
  if (bVar7) {
    if ((ulong)(*(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8) >> 5) <= uVar18) goto LAB_0011296c;
    plVar5 = *(long **)(*(long *)(lVar1 + 8) + lVar20);
    pcVar4 = *(code **)(*plVar5 + 0x30);
    if (pcVar4 == TType::getFieldName_abi_cxx11_) {
      lVar14 = plVar5[0xe];
    }
    else {
      lVar14 = (*pcVar4)();
    }
    pcVar3 = *(char **)(lVar14 + 8);
    strlen(pcVar3);
    std::__cxx11::string::_M_replace((ulong)&local_88,0,local_80,(ulong)pcVar3);
    if ((char)local_c0 == '\0') {
      if ((ulong)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 5) <= uVar21) {
        uVar16 = std::__throw_out_of_range_fmt
                           ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"
                            ,uVar21);
        goto LAB_00112692;
      }
      if ((ulong)(*(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8) >> 5) <= uVar18) goto LAB_0011296c;
      bVar9 = typeCheck(this,*(TType **)(*(long *)(lVar1 + 8) + lVar20),
                        *(TType **)(*(long *)(lVar2 + 8) + lVar19),(string *)&local_88,local_a9);
      local_c0 = (ulong)bVar9;
      goto LAB_001123c0;
    }
  }
  else {
    local_60 = 0;
    uVar16 = *(ulong *)(param_3 + 8);
    uVar6 = *(ulong *)param_3;
    local_68 = local_58;
    local_58[0] = 0;
    std::__cxx11::string::reserve((ulong)&local_68);
    if ((0x3fffffffffffffffU - local_60 < uVar16) ||
       (std::__cxx11::string::_M_append((char *)&local_68,uVar6),
       0x3fffffffffffffffU - local_60 < 0x17)) goto LAB_0011299c;
    std::__cxx11::string::_M_append((char *)&local_68,0x11225d);
    pcVar3 = *(char **)(this + 0x158);
    glslang::TInfoSinkBase::append(pcVar3);
    glslang::TInfoSinkBase::append(pcVar3);
    glslang::TInfoSinkBase::append(pcVar3);
    std::__cxx11::string::_M_dispose();
  }
  local_c0 = 1;
LAB_001123c0:
  uVar18 = uVar18 + 1;
  uVar21 = uVar21 + 1;
  if ((ulong)(lVar15 >> 5) <= uVar18) goto LAB_001126ec;
  lVar14 = *(long *)(lVar1 + 8);
  lVar20 = *(long *)(lVar1 + 0x10);
  goto LAB_001123de;
LAB_00112767:
  std::__cxx11::string::_M_dispose();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c0;
  }
  goto LAB_0011297d;
}



/* bool glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const */

bool __thiscall
glslang::TType::
contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
          (TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if ((byte)this[8] == param_2) {
    return true;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112a26:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00112a26;
  }
  return false;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112ab6:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00112ab6;
  }
  return 0;
}



/* bool glslang::TType::contains<glslang::TType::containsStructure() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsStructure() const::{lambda(glslang::TType const*)#1}) const
    */

bool __thiscall
glslang::TType::
contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
          (TType *this,TType *param_2)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar4 = *(code **)(*(long *)this + 0x128);
  if (this == param_2) {
LAB_00112b40:
    if (pcVar4 != isStruct) {
      cVar3 = (*pcVar4)(this);
      if (cVar3 == '\0') {
        return false;
      }
      goto LAB_00112b69;
    }
    TVar1 = this[8];
  }
  else {
    if (pcVar4 != isStruct) {
      cVar3 = (*pcVar4)();
      if (cVar3 != '\0') {
        return true;
      }
      pcVar4 = *(code **)(*(long *)this + 0x128);
      goto LAB_00112b40;
    }
    TVar1 = this[8];
    if ((byte)((char)TVar1 - 0xfU) < 2) {
      return true;
    }
  }
  if (1 < (byte)((char)TVar1 - 0xfU)) {
    return false;
  }
LAB_00112b69:
  lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
  lVar5 = std::
          __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2,param_2);
  return lVar2 != lVar5;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112bd6:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00112bd6;
  }
  return false;
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_00112cd0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00112d20;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00112cd0:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_00112c3f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00112d20:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_00112c3f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00112c71:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00112c71;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_00112e20;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00112e70;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00112e20:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_00112d8f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_00112e70:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_00112d8f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112dc1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00112dc1;
  }
  return false;
}



/* bool glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
LAB_00112efa:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_00112f0e;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = param_1[0xc];
      goto LAB_00112efa;
    }
LAB_00112f0e:
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00112f21:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00112f21;
  }
  return false;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_00112f9a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_00112fae;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_00112f9a;
    }
LAB_00112fae:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112fc1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00112fc1;
  }
  return false;
}



/* std::map<int, std::map<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > >, std::less<int>, std::allocator<std::pair<int
   const, std::map<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > > > > >::operator[](int const&) */

_Rb_tree_node_base * __thiscall
std::
map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
::operator[](map<int,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
             *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var5 = p_Var1;
  if (*(_Rb_tree_node_base **)(this + 0x10) != (_Rb_tree_node_base *)0x0) {
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    p_Var3 = p_Var1;
    do {
      while( true ) {
        p_Var4 = p_Var5;
        if (*(int *)(p_Var4 + 0x20) < *param_1) break;
        p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
        p_Var3 = p_Var4;
        if (*(_Rb_tree_node_base **)(p_Var4 + 0x10) == (_Rb_tree_node_base *)0x0) goto LAB_00113030;
      }
      p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var4 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00113030:
    p_Var5 = p_Var3;
    if ((p_Var1 != p_Var3) && (*(int *)(p_Var3 + 0x20) <= *param_1)) goto LAB_001130c5;
  }
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x58);
  uVar2 = *param_1;
  *(undefined4 *)(p_Var3 + 0x30) = 0;
  *(uint *)(p_Var3 + 0x20) = uVar2;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(_Rb_tree_node_base **)(p_Var3 + 0x40) = p_Var3 + 0x30;
  *(_Rb_tree_node_base **)(p_Var3 + 0x48) = p_Var3 + 0x30;
  *(undefined8 *)(p_Var3 + 0x50) = 0;
  if (p_Var1 == p_Var5) {
    if ((*(long *)(this + 0x28) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(this + 0x20), (int)uVar2 <= *(int *)(p_Var4 + 0x20))) {
LAB_00113130:
      auVar7 = _Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
               ::_M_get_insert_unique_pos
                         ((_Rb_tree<int,std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>,std::_Select1st<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>>>>
                           *)this,(int *)(ulong)uVar2);
      p_Var4 = auVar7._8_8_;
      p_Var5 = auVar7._0_8_;
      if (p_Var4 == (_Rb_tree_node_base *)0x0) {
LAB_00113143:
        operator_delete(p_Var3,0x58);
        return p_Var5 + 0x28;
      }
      bVar6 = p_Var5 != (_Rb_tree_node_base *)0x0;
    }
    else {
LAB_00113113:
      bVar6 = false;
    }
LAB_00113115:
    p_Var5 = p_Var4;
    if ((p_Var1 == p_Var4) || (bVar6)) goto LAB_001130a9;
LAB_0011311e:
    bVar6 = (int)uVar2 < *(int *)(p_Var5 + 0x20);
  }
  else {
    if (*(int *)(p_Var5 + 0x20) <= (int)uVar2) {
      if ((int)uVar2 <= *(int *)(p_Var5 + 0x20)) goto LAB_00113143;
      if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var5) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var5);
        if (*(int *)(p_Var4 + 0x20) <= (int)uVar2) goto LAB_00113130;
        if (*(long *)(p_Var5 + 0x18) != 0) {
          bVar6 = true;
          goto LAB_00113115;
        }
      }
      goto LAB_0011311e;
    }
    if (*(_Rb_tree_node_base **)(this + 0x18) != p_Var5) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      if ((int)uVar2 <= *(int *)(p_Var4 + 0x20)) goto LAB_00113130;
      if (*(long *)(p_Var4 + 0x18) == 0) goto LAB_00113113;
    }
LAB_001130a9:
    bVar6 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var5,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
LAB_001130c5:
  return p_Var3 + 0x28;
}



/* std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Identity,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, true, true> >::clear() */

void __thiscall
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
::clear(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
        *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    operator_delete(puVar2,0x38);
    puVar2 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) * 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* glslang::TLiveTraverser::~TLiveTraverser() */

void __thiscall glslang::TLiveTraverser::~TLiveTraverser(TLiveTraverser *this)

{
  TLiveTraverser *pTVar1;
  TLiveTraverser *pTVar2;
  
  *(undefined ***)this = &PTR__TLiveTraverser_00119ed8;
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x90));
  if (*(TLiveTraverser **)(this + 0x90) != this + 0xc0) {
    operator_delete(*(TLiveTraverser **)(this + 0x90),*(long *)(this + 0x98) << 3);
  }
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x58));
  if (*(TLiveTraverser **)(this + 0x58) != this + 0x88) {
    operator_delete(*(TLiveTraverser **)(this + 0x58),*(long *)(this + 0x60) << 3);
  }
  pTVar2 = *(TLiveTraverser **)(this + 0x38);
  while (pTVar2 != this + 0x38) {
    pTVar1 = *(TLiveTraverser **)pTVar2;
    operator_delete(pTVar2,0x18);
    pTVar2 = pTVar1;
  }
  return;
}



/* glslang::TLiveTraverser::~TLiveTraverser() */

void __thiscall glslang::TLiveTraverser::~TLiveTraverser(TLiveTraverser *this)

{
  TLiveTraverser *pTVar1;
  TLiveTraverser *pTVar2;
  
  *(undefined ***)this = &PTR__TLiveTraverser_00119ed8;
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x90));
  if (*(TLiveTraverser **)(this + 0x90) != this + 0xc0) {
    operator_delete(*(TLiveTraverser **)(this + 0x90),*(long *)(this + 0x98) << 3);
  }
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x58));
  if (*(TLiveTraverser **)(this + 0x58) != this + 0x88) {
    operator_delete(*(TLiveTraverser **)(this + 0x58),*(long *)(this + 0x60) << 3);
  }
  pTVar2 = *(TLiveTraverser **)(this + 0x38);
  while (pTVar2 != this + 0x38) {
    pTVar1 = *(TLiveTraverser **)pTVar2;
    operator_delete(pTVar2,0x18);
    pTVar2 = pTVar1;
  }
  return;
}



/* glslang::TVarSetTraverser::~TVarSetTraverser() */

void __thiscall glslang::TVarSetTraverser::~TVarSetTraverser(TVarSetTraverser *this)

{
  TVarSetTraverser *pTVar1;
  TVarSetTraverser *pTVar2;
  
  *(undefined ***)this = &PTR__TLiveTraverser_00119ed8;
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x90));
  if (*(TVarSetTraverser **)(this + 0x90) != this + 0xc0) {
    operator_delete(*(TVarSetTraverser **)(this + 0x90),*(long *)(this + 0x98) << 3);
  }
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x58));
  if (*(TVarSetTraverser **)(this + 0x58) != this + 0x88) {
    operator_delete(*(TVarSetTraverser **)(this + 0x58),*(long *)(this + 0x60) << 3);
  }
  pTVar2 = *(TVarSetTraverser **)(this + 0x38);
  while (this + 0x38 != pTVar2) {
    pTVar1 = *(TVarSetTraverser **)pTVar2;
    operator_delete(pTVar2,0x18);
    pTVar2 = pTVar1;
  }
  return;
}



/* glslang::TVarGatherTraverser::~TVarGatherTraverser() */

void __thiscall glslang::TVarGatherTraverser::~TVarGatherTraverser(TVarGatherTraverser *this)

{
  TVarGatherTraverser *pTVar1;
  TVarGatherTraverser *pTVar2;
  
  *(undefined ***)this = &PTR__TLiveTraverser_00119ed8;
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x90));
  if (*(TVarGatherTraverser **)(this + 0x90) != this + 0xc0) {
    operator_delete(*(TVarGatherTraverser **)(this + 0x90),*(long *)(this + 0x98) << 3);
  }
  std::
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
  ::clear((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
           *)(this + 0x58));
  if (*(TVarGatherTraverser **)(this + 0x58) != this + 0x88) {
    operator_delete(*(TVarGatherTraverser **)(this + 0x58),*(long *)(this + 0x60) << 3);
  }
  pTVar2 = *(TVarGatherTraverser **)(this + 0x38);
  while (this + 0x38 != pTVar2) {
    pTVar1 = *(TVarGatherTraverser **)pTVar2;
    operator_delete(pTVar2,0x18);
    pTVar2 = pTVar1;
  }
  return;
}



/* std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Identity,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, true, true> >::find(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

long * __thiscall
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
::find(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
       *this,basic_string *param_1)

{
  char cVar1;
  size_t sVar2;
  void *__s1;
  char *__s1_00;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  if (*(long *)(this + 0x18) == 0) {
    plVar10 = *(long **)(this + 0x10);
    if (plVar10 != (long *)0x0) {
      sVar2 = *(size_t *)(param_1 + 0x10);
      do {
        while (sVar2 == plVar10[3]) {
          if (sVar2 == 0) {
            return plVar10;
          }
          __s1 = *(void **)(param_1 + 8);
          do {
            iVar5 = memcmp(__s1,(void *)plVar10[2],sVar2);
            if (iVar5 == 0) {
              return plVar10;
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              return (long *)0x0;
            }
          } while (sVar2 == plVar10[3]);
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return (long *)0x0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  else {
    sVar2 = *(size_t *)(param_1 + 0x10);
    __s1_00 = *(char **)(param_1 + 8);
    uVar11 = 0x811c9dc5;
    if (sVar2 != 0) {
      uVar6 = 0x811c9dc5;
      pcVar8 = __s1_00;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      } while (pcVar8 != __s1_00 + sVar2);
      uVar11 = (ulong)uVar6;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar9 = uVar11 % uVar3;
    plVar10 = *(long **)(*(long *)this + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      uVar7 = ((long *)*plVar10)[6];
      plVar12 = (long *)*plVar10;
      do {
        if (((uVar7 == uVar11) && (sVar2 == plVar12[3])) &&
           ((sVar2 == 0 || (iVar5 = memcmp(__s1_00,(void *)plVar12[2],sVar2), iVar5 == 0)))) {
          return (long *)*plVar10;
        }
        plVar4 = (long *)*plVar12;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar4[6];
        plVar10 = plVar12;
        plVar12 = plVar4;
      } while (uVar9 == uVar7 % uVar3);
    }
    plVar10 = (long *)0x0;
  }
  return plVar10;
}



/* glslang::TLiveTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TLiveTraverser::visitAggregate(TLiveTraverser *this,undefined8 param_2,long *param_3)

{
  basic_string *pbVar1;
  undefined1 auVar2 [16];
  
  if (this[200] == (TLiveTraverser)0x0) {
    if ((int)param_3[0x17] == 4) {
      if (*(code **)(*param_3 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
        pbVar1 = (basic_string *)(param_3 + 0x20);
      }
      else {
        pbVar1 = (basic_string *)(**(code **)(*param_3 + 0x1a8))(param_3);
      }
      auVar2 = std::
               _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
               ::find((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
                       *)(this + 0x58),pbVar1);
      if (auVar2._0_8_ == 0) {
        if (*(code **)(*param_3 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
          auVar2._8_8_ = auVar2._8_8_;
          auVar2._0_8_ = param_3 + 0x20;
        }
        else {
          auVar2 = (**(code **)(*param_3 + 0x1a8))(param_3);
        }
        std::
        _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
        ::
        _M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,true>>>>
                  ((basic_string *)(this + 0x58),auVar2._0_8_,auVar2._8_8_);
        if (*(code **)(*param_3 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
          pbVar1 = (basic_string *)(param_3 + 0x20);
        }
        else {
          pbVar1 = (basic_string *)(**(code **)(*param_3 + 0x1a8))(param_3);
        }
        pushFunction(this,pbVar1);
      }
    }
    return 1;
  }
  return 1;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >
   >::find(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&) */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
       *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var2;
  basic_string *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong __n;
  long lVar6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *local_40;
  
  p_Var1 = this + 8;
  local_40 = p_Var1;
  if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
       *)0x0) {
    __s2 = *(basic_string **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var7 = p_Var1;
    p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
               **)(this + 0x10);
    do {
      while( true ) {
        uVar4 = *(ulong *)(p_Var8 + 0x30);
        __n = uVar3;
        if (uVar4 <= uVar3) {
          __n = uVar4;
        }
        if ((__n != 0) && (iVar5 = memcmp(*(void **)(p_Var8 + 0x28),__s2,__n), iVar5 != 0)) break;
        lVar6 = uVar4 - uVar3;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar5 = (int)lVar6;
            break;
          }
          goto LAB_001136f0;
        }
LAB_00113739:
        p_Var2 = p_Var8 + 0x10;
        p_Var7 = p_Var8;
        p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   **)p_Var2;
        if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
              **)p_Var2 ==
            (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
             *)0x0) goto LAB_00113745;
      }
      if (-1 < iVar5) goto LAB_00113739;
LAB_001136f0:
      p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                 **)(p_Var8 + 0x18);
    } while (p_Var8 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                        *)0x0);
LAB_00113745:
    if ((p_Var1 != p_Var7) &&
       (iVar5 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(__s2), local_40 = p_Var7, iVar5 < 0)) {
      local_40 = p_Var1;
    }
  }
  return local_40;
}



/* void std::vector<glslang::TRange, std::allocator<glslang::TRange>
   >::_M_realloc_insert<glslang::TRange const&>(__gnu_cxx::__normal_iterator<glslang::TRange*,
   std::vector<glslang::TRange, std::allocator<glslang::TRange> > >, glslang::TRange const&) */

void __thiscall
std::vector<glslang::TRange,std::allocator<glslang::TRange>>::
_M_realloc_insert<glslang::TRange_const&>
          (vector<glslang::TRange,std::allocator<glslang::TRange>> *this,undefined8 *param_2,
          undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar5) goto LAB_001138a0;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_001138aa:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_00113819:
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
    if (param_2 == puVar1) goto LAB_00113869;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_001138a0:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_001138aa;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_001138aa;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_00113819;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_00113869:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >
   >::_M_realloc_insert<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >
   const&>(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >*, std::vector<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::
vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::
_M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>
          (vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           *this,undefined8 *param_2,basic_string *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x3333333333333333;
  if (uVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_00113a50;
    if (0x333333333333333 < uVar9) {
      uVar9 = 0x333333333333333;
    }
    uVar9 = uVar9 * 0x28;
  }
  else {
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar6) {
LAB_00113a50:
      uVar9 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar9 == 0) {
        puVar7 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x28;
        local_50 = 0;
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                     ((long)param_2 - (long)puVar2),param_3);
        goto joined_r0x00113a92;
      }
      if (0x333333333333333 < uVar9) {
        uVar9 = 0x333333333333333;
      }
      uVar9 = uVar9 * 0x28;
    }
  }
  puVar7 = (undefined8 *)operator_new(uVar9);
  local_50 = (long)puVar7 + uVar9;
  puVar11 = puVar7 + 5;
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             ((long)puVar7 + ((long)param_2 - (long)puVar2)),param_3);
joined_r0x00113a92:
  puVar8 = puVar2;
  puVar10 = puVar7;
  if (param_2 != puVar2) {
    do {
      puVar11 = puVar10 + 3;
      *puVar10 = *puVar8;
      puVar10[1] = puVar11;
      puVar3 = (undefined8 *)puVar8[1];
      lVar5 = puVar8[2];
      if (puVar3 == puVar8 + 3) {
        uVar6 = lVar5 + 1;
        uVar14 = (uint)uVar6;
        if (uVar14 < 8) {
          if ((uVar6 & 4) == 0) {
            if (uVar14 != 0) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
              if ((uVar6 & 2) == 0) goto LAB_00113a43;
              *(undefined2 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)puVar3 + ((uVar6 & 0xffffffff) - 2));
              lVar5 = puVar8[2];
            }
          }
          else {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar3;
            *(undefined4 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x14) =
                 *(undefined4 *)((long)puVar3 + ((uVar6 & 0xffffffff) - 4));
            lVar5 = puVar8[2];
          }
        }
        else {
          *puVar11 = *puVar3;
          *(undefined8 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x10) =
               *(undefined8 *)((long)puVar3 + ((uVar6 & 0xffffffff) - 8));
          lVar5 = (long)puVar11 - ((ulong)(puVar10 + 4) & 0xfffffffffffffff8);
          uVar14 = uVar14 + (int)lVar5 & 0xfffffff8;
          if (7 < uVar14) {
            uVar12 = 0;
            do {
              uVar6 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(puVar10 + 4) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)puVar3 + (uVar6 - lVar5));
            } while (uVar12 < uVar14);
          }
LAB_00113a43:
          lVar5 = puVar8[2];
        }
      }
      else {
        puVar10[1] = puVar3;
        puVar10[3] = puVar8[3];
      }
      puVar8 = puVar8 + 5;
      puVar10[2] = lVar5;
      puVar10 = puVar10 + 5;
    } while (puVar8 != param_2);
    puVar11 = (undefined8 *)
              ((long)puVar7 + ((long)param_2 + (-0x28 - (long)puVar2) & 0xfffffffffffffff8U) + 0x50)
    ;
  }
  puVar8 = param_2;
  puVar10 = puVar11;
  if (param_2 != puVar1) {
    do {
      puVar3 = puVar10 + 3;
      puVar4 = (undefined8 *)puVar8[1];
      lVar5 = puVar8[2];
      *puVar10 = *puVar8;
      puVar10[1] = puVar3;
      if (puVar4 == puVar8 + 3) {
        uVar6 = lVar5 + 1;
        uVar14 = (uint)uVar6;
        if (uVar14 < 8) {
          if ((uVar6 & 4) == 0) {
            if ((uVar14 != 0) && (*(undefined1 *)puVar3 = *(undefined1 *)puVar4, (uVar6 & 2) != 0))
            {
              *(undefined2 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
            *(undefined4 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x14) =
                 *(undefined4 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 4));
          }
        }
        else {
          *puVar3 = *puVar4;
          *(undefined8 *)((long)puVar10 + (uVar6 & 0xffffffff) + 0x10) =
               *(undefined8 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 8));
          lVar13 = (long)puVar3 - ((ulong)(puVar10 + 4) & 0xfffffffffffffff8);
          uVar14 = uVar14 + (int)lVar13 & 0xfffffff8;
          if (7 < uVar14) {
            uVar12 = 0;
            do {
              uVar6 = (ulong)uVar12;
              uVar12 = uVar12 + 8;
              *(undefined8 *)(((ulong)(puVar10 + 4) & 0xfffffffffffffff8) + uVar6) =
                   *(undefined8 *)((long)puVar4 + (uVar6 - lVar13));
            } while (uVar12 < uVar14);
          }
        }
      }
      else {
        puVar10[1] = puVar4;
        puVar10[3] = puVar8[3];
      }
      puVar8 = puVar8 + 5;
      puVar10[2] = lVar5;
      puVar10 = puVar10 + 5;
    } while (puVar8 != puVar1);
    puVar11 = (undefined8 *)
              ((long)puVar11 + ((long)puVar8 + (-0x28 - (long)param_2) & 0xfffffffffffffff8U) + 0x28
              );
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar11;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__detail::_Map_base<int, std::pair<int const, std::vector<int, std::allocator<int> > >,
   std::allocator<std::pair<int const, std::vector<int, std::allocator<int> > > >,
   std::__detail::_Select1st, std::equal_to<int>, std::hash<int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](int const&) */

long * __thiscall
std::__detail::
_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  char cVar8;
  long *plVar9;
  void *__s;
  _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var10;
  ulong uVar11;
  ulong extraout_RDX;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  _Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var15;
  
  iVar1 = *param_1;
  uVar11 = (ulong)(long)iVar1 % *(ulong *)(this + 8);
  puVar3 = *(undefined8 **)(*(long *)this + uVar11 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = *(int *)((undefined8 *)*puVar3 + 1);
    puVar7 = (undefined8 *)*puVar3;
    while (iVar2 != iVar1) {
      puVar4 = (undefined8 *)*puVar7;
      if ((puVar4 == (undefined8 *)0x0) ||
         (iVar2 = *(int *)(puVar4 + 1), puVar3 = puVar7, puVar7 = puVar4,
         uVar11 != (ulong)(long)iVar2 % *(ulong *)(this + 8))) goto LAB_00113d70;
    }
    plVar9 = (long *)*puVar3;
    if (plVar9 != (long *)0x0) goto LAB_00113d5c;
  }
LAB_00113d70:
  plVar9 = (long *)operator_new(0x28);
  uVar14 = *(ulong *)(this + 0x18);
  uVar5 = *(ulong *)(this + 8);
  *plVar9 = 0;
  iVar2 = *param_1;
  *(undefined1 (*) [16])(plVar9 + 2) = (undefined1  [16])0x0;
  *(int *)(plVar9 + 1) = iVar2;
  plVar9[4] = 0;
  cVar8 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar5,uVar14);
  if (cVar8 == '\0') {
    p_Var10 = *(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                **)this;
    p_Var15 = p_Var10 + uVar11 * 8;
    plVar12 = *(long **)p_Var15;
  }
  else {
    if (extraout_RDX == 1) {
      p_Var10 = this + 0x30;
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
      __s = operator_new(extraout_RDX * 8);
      p_Var10 = (_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                 *)memset(__s,0,extraout_RDX * 8);
    }
    plVar12 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar11 = 0;
    while (uVar14 = uVar11, plVar13 = plVar12, plVar12 != (long *)0x0) {
      while( true ) {
        plVar12 = (long *)*plVar13;
        uVar11 = (ulong)(long)(int)plVar13[1] % extraout_RDX;
        p_Var15 = p_Var10 + uVar11 * 8;
        if (*(long **)p_Var15 == (long *)0x0) break;
        *plVar13 = **(long **)p_Var15;
        **(undefined8 **)p_Var15 = plVar13;
        plVar13 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_00113e72;
      }
      *plVar13 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar13;
      *(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)p_Var15 = this + 0x10;
      if (*plVar13 != 0) {
        *(long **)(p_Var10 + uVar14 * 8) = plVar13;
      }
    }
LAB_00113e72:
    if (*(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)this = p_Var10;
    p_Var15 = p_Var10 + ((ulong)(long)iVar1 % extraout_RDX) * 8;
    plVar12 = *(long **)p_Var15;
  }
  if (plVar12 == (long *)0x0) {
    lVar6 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar9;
    *plVar9 = lVar6;
    if (lVar6 != 0) {
      *(long **)(p_Var10 + ((ulong)(long)*(int *)(lVar6 + 8) % *(ulong *)(this + 8)) * 8) = plVar9;
    }
    *(_Map_base<int,std::pair<int_const,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var15 = this + 0x10;
  }
  else {
    *plVar9 = *plVar12;
    **(undefined8 **)p_Var15 = plVar9;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00113d5c:
  return plVar9 + 2;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> > >::find(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
       *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var2;
  basic_string *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong __n;
  long lVar6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *local_40;
  
  p_Var1 = this + 8;
  local_40 = p_Var1;
  if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
       *)0x0) {
    __s2 = *(basic_string **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var7 = p_Var1;
    p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
               **)(this + 0x10);
    do {
      while( true ) {
        uVar4 = *(ulong *)(p_Var8 + 0x30);
        __n = uVar3;
        if (uVar4 <= uVar3) {
          __n = uVar4;
        }
        if ((__n != 0) && (iVar5 = memcmp(*(void **)(p_Var8 + 0x28),__s2,__n), iVar5 != 0)) break;
        lVar6 = uVar4 - uVar3;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar5 = (int)lVar6;
            break;
          }
          goto LAB_00113f70;
        }
LAB_00113fb9:
        p_Var2 = p_Var8 + 0x10;
        p_Var7 = p_Var8;
        p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                   **)p_Var2;
        if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
              **)p_Var2 ==
            (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
             *)0x0) goto LAB_00113fc5;
      }
      if (-1 < iVar5) goto LAB_00113fb9;
LAB_00113f70:
      p_Var8 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                 **)(p_Var8 + 0x18);
    } while (p_Var8 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                        *)0x0);
LAB_00113fc5:
    if ((p_Var1 != p_Var7) &&
       (iVar5 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(__s2), local_40 = p_Var7, iVar5 < 0)) {
      local_40 = p_Var1;
    }
  }
  return local_40;
}



/* void std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair>
   >::_M_realloc_insert<glslang::TVarLivePair
   const&>(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*, std::vector<glslang::TVarLivePair,
   std::allocator<glslang::TVarLivePair> > >, glslang::TVarLivePair const&) */

void __thiscall
std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
_M_realloc_insert<glslang::TVarLivePair_const&>
          (vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *this,void *param_2,
          basic_string *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *__dest;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  void *pvVar15;
  ulong *puVar16;
  ulong *local_50;
  ulong local_40;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  lVar11 = (long)pvVar1 - (long)pvVar2 >> 3;
  uVar12 = lVar11 * 0x2e8ba2e8ba2e8ba3;
  if (uVar12 == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar2 == pvVar1) {
    if (0xfffffffffffffffe < uVar12) goto LAB_001141a0;
    local_40 = 0x1745d1745d1745d;
    if (uVar12 + 1 < 0x1745d1745d1745e) {
      local_40 = uVar12 + 1;
    }
    uVar12 = local_40 * 0x58;
  }
  else {
    uVar13 = lVar11 * 0x5d1745d1745d1746;
    if (uVar13 < uVar12) {
LAB_001141a0:
      uVar12 = 0x7ffffffffffffff8;
      local_40 = 0x1745d1745d1745d;
    }
    else {
      if (uVar13 == 0) {
        local_50 = (ulong *)0x0;
        local_40 = uVar13;
        goto LAB_0011409f;
      }
      local_40 = 0x1745d1745d1745d;
      if (uVar13 < 0x1745d1745d1745e) {
        local_40 = uVar13;
      }
      uVar12 = local_40 * 0x58;
    }
  }
  local_50 = (ulong *)operator_new(uVar12);
LAB_0011409f:
  this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
            (((long)param_2 - (long)pvVar2) + (long)local_50);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (this_00,param_3);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this_00 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(this_00 + 0x38) = uVar5;
  *(undefined8 *)(this_00 + 0x40) = uVar6;
  *(undefined8 *)(this_00 + 0x48) = uVar4;
  *(undefined8 *)(this_00 + 0x50) = uVar7;
  puVar16 = local_50;
  for (pvVar15 = pvVar2; param_2 != pvVar15; pvVar15 = (void *)((long)pvVar15 + 0x58)) {
    uVar13 = glslang::GetThreadPoolAllocator();
    uVar12 = *(ulong *)((long)pvVar15 + 0x10);
    puVar14 = puVar16 + 3;
    puVar16[1] = (ulong)puVar14;
    puVar3 = *(undefined1 **)((long)pvVar15 + 8);
    *puVar16 = uVar13;
    if (uVar12 < 0x10) {
      if (uVar12 == 1) {
        *(undefined1 *)(puVar16 + 3) = *puVar3;
      }
      else if (uVar12 != 0) goto LAB_00114186;
    }
    else {
      if ((long)uVar12 < 0) goto LAB_0011435b;
      puVar14 = (ulong *)glslang::TPoolAllocator::allocate(uVar13);
      puVar16[3] = uVar12;
      puVar16[1] = (ulong)puVar14;
LAB_00114186:
      memcpy(puVar14,puVar3,uVar12);
      puVar14 = (ulong *)puVar16[1];
    }
    puVar16[2] = uVar12;
    *(undefined1 *)((long)puVar14 + uVar12) = 0;
    uVar12 = *(ulong *)((long)pvVar15 + 0x30);
    uVar13 = *(ulong *)((long)pvVar15 + 0x38);
    uVar8 = *(ulong *)((long)pvVar15 + 0x40);
    uVar9 = *(ulong *)((long)pvVar15 + 0x48);
    uVar10 = *(ulong *)((long)pvVar15 + 0x50);
    puVar16[5] = *(ulong *)((long)pvVar15 + 0x28);
    puVar16[6] = uVar12;
    puVar16[7] = uVar13;
    puVar16[8] = uVar8;
    puVar16[9] = uVar9;
    puVar16[10] = uVar10;
    puVar16 = puVar16 + 0xb;
  }
  puVar16 = puVar16 + 0xb;
  puVar14 = puVar16;
  if (param_2 != pvVar1) {
    do {
      uVar13 = glslang::GetThreadPoolAllocator();
      uVar12 = *(ulong *)((long)param_2 + 0x10);
      __dest = puVar14 + 3;
      puVar3 = *(undefined1 **)((long)param_2 + 8);
      *puVar14 = uVar13;
      puVar14[1] = (ulong)__dest;
      if (uVar12 < 0x10) {
        if (uVar12 == 1) {
          *(undefined1 *)(puVar14 + 3) = *puVar3;
        }
        else if (uVar12 != 0) goto LAB_00114278;
      }
      else {
        if ((long)uVar12 < 0) {
LAB_0011435b:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::_M_create");
        }
        __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar13);
        puVar14[3] = uVar12;
        puVar14[1] = (ulong)__dest;
LAB_00114278:
        memcpy(__dest,puVar3,uVar12);
        __dest = (ulong *)puVar14[1];
      }
      puVar14[2] = uVar12;
      pvVar15 = (void *)((long)param_2 + 0x58);
      puVar16 = puVar14 + 0xb;
      *(undefined1 *)((long)__dest + uVar12) = 0;
      uVar12 = *(ulong *)((long)param_2 + 0x30);
      uVar13 = *(ulong *)((long)param_2 + 0x38);
      uVar8 = *(ulong *)((long)param_2 + 0x40);
      uVar9 = *(ulong *)((long)param_2 + 0x48);
      uVar10 = *(ulong *)((long)param_2 + 0x50);
      puVar14[5] = *(ulong *)((long)param_2 + 0x28);
      puVar14[6] = uVar12;
      puVar14[7] = uVar13;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = uVar10;
      param_2 = pvVar15;
      puVar14 = puVar16;
    } while (pvVar1 != pvVar15);
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
  }
  *(ulong **)this = local_50;
  *(ulong **)(this + 8) = puVar16;
  *(ulong **)(this + 0x10) = local_50 + local_40 * 0xb;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::reserve(unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::reserve
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1)

{
  size_t __n;
  undefined1 *__dest;
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) ==
      this + 0x18) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = *(ulong *)(this + 0x18);
  }
  if (param_1 <= uVar2) {
    return;
  }
  if (-1 < (long)param_1) {
    uVar2 = uVar2 * 2;
    uVar3 = 0x7fffffffffffffff;
    if (uVar2 < 0x8000000000000000) {
      uVar3 = uVar2;
    }
    if (param_1 < uVar2) {
      param_1 = uVar3;
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    __n = *(long *)(this + 0x10) + 1;
    if (*(long *)(this + 0x10) == 0) {
      *__dest = **(undefined1 **)(this + 8);
      *(undefined1 **)(this + 8) = __dest;
      *(ulong *)(this + 0x18) = param_1;
    }
    else if (__n == 0) {
      *(undefined1 **)(this + 8) = __dest;
      *(ulong *)(this + 0x18) = param_1;
    }
    else {
      pvVar1 = memcpy(__dest,*(undefined1 **)(this + 8),__n);
      *(ulong *)(this + 0x18) = param_1;
      *(void **)(this + 8) = pvVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_create");
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  undefined1 *__src;
  
  uVar3 = (param_4 - param_2) + *(long *)(this + 0x10);
  __n = *(long *)(this + 0x10) - (param_1 + param_2);
  if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) ==
      this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (-1 < (long)uVar3) {
    if (uVar1 < uVar3) {
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar3 < uVar1) {
        uVar3 = uVar2;
      }
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)(this + 8);
      }
      else {
        __dest = (undefined1 *)memcpy(__dest,*(undefined1 **)(this + 8),param_1);
      }
    }
    if ((param_3 != (char *)0x0) && (param_4 != 0)) {
      if (param_4 == 1) {
        __dest[param_1] = *param_3;
      }
      else {
        memcpy(__dest + param_1,param_3,param_4);
      }
    }
    if (__n != 0) {
      __src = (undefined1 *)(param_1 + param_2 + *(long *)(this + 8));
      if (__n == 1) {
        __dest[param_1 + param_4] = *__src;
      }
      else {
        memcpy(__dest + param_1 + param_4,__src,__n);
      }
    }
    *(undefined1 **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_create");
}



/* glslang::TType::appendMangledName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >&) const */

void __thiscall glslang::TType::appendMangledName(TType *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  ulong uVar3;
  
  glslang::TType::buildMangledName((basic_string *)this);
  uVar1 = *(ulong *)(param_1 + 0x10);
  pbVar2 = *(basic_string **)(param_1 + 8);
  if (pbVar2 == param_1 + 0x18) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar3 < uVar1 + 1) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               uVar1,0,(char *)0x0,1);
    pbVar2 = *(basic_string **)(param_1 + 8);
  }
  pbVar2[uVar1] = (basic_string)0x3b;
  *(ulong *)(param_1 + 0x10) = uVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + 1 + uVar1) = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   std::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

char * std::operator+(char *param_1,basic_string *param_2)

{
  ulong uVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  long in_RDX;
  
  uVar1 = *(ulong *)(in_RDX + 0x10);
  pcVar2 = *(char **)(in_RDX + 8);
  sVar3 = strlen((char *)param_2);
  uVar4 = glslang::GetThreadPoolAllocator();
  param_1[0x18] = '\0';
  *(undefined8 *)param_1 = uVar4;
  *(char **)(param_1 + 8) = param_1 + 0x18;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::reserve
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
             uVar1 + sVar3);
  if (sVar3 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
    __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               (char *)param_2,sVar3);
    if (uVar1 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 pcVar2,uVar1);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TResolverUniformAdaptor::TEMPNAMEPLACEHOLDERVALUE(std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>&) */

void __thiscall
glslang::TResolverUniformAdaptor::operator()(TResolverUniformAdaptor *this,pair *param_1)

{
  pair *ppVar1;
  int iVar2;
  code *pcVar3;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var4;
  char *pcVar5;
  char cVar6;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  char acStack_58 [40];
  long local_30;
  
  ppVar1 = param_1 + 0x28;
  plVar8 = *(long **)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x39] = 0;
  lVar9 = *plVar8;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  cVar6 = (**(code **)(lVar9 + 0x10))(plVar8,*(undefined4 *)this,ppVar1);
  if (cVar6 == '\0') {
    std::operator+(acStack_58,(basic_string *)"Invalid binding: ");
    pcVar5 = *(char **)(this + 0x10);
    glslang::TInfoSinkBase::append(pcVar5);
    glslang::TInfoSinkBase::append(pcVar5);
    glslang::TInfoSinkBase::append(pcVar5);
    **(undefined1 **)(this + 0x18) = 1;
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),*(undefined4 *)(param_1 + 0x50),ppVar1);
    (**(code **)(**(long **)(this + 8) + 0x18))
              (*(long **)(this + 8),*(undefined4 *)(param_1 + 0x50),ppVar1);
    (**(code **)(**(long **)(this + 8) + 0x28))
              (*(long **)(this + 8),*(undefined4 *)(param_1 + 0x50),ppVar1);
    if (*(int *)(param_1 + 0x3c) != -1) {
      if (0xfffe < *(int *)(param_1 + 0x3c)) {
        std::operator+(acStack_58,(basic_string *)"mapped binding out of range: ");
        pcVar5 = *(char **)(this + 0x10);
        glslang::TInfoSinkBase::append(pcVar5);
        glslang::TInfoSinkBase::append(pcVar5);
        glslang::TInfoSinkBase::append(pcVar5);
        **(undefined1 **)(this + 0x18) = 1;
      }
      pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar3 == TIntermTyped::getQualifier) {
        plVar8 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar8 = (long *)(*pcVar3)();
      }
      if ((short)plVar8[4] != -1) {
        iVar2 = *(int *)(param_1 + 0x50);
        lVar9 = 0;
        do {
          if ((iVar2 != (int)lVar9) &&
             (p_Var4 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                         **)(this + lVar9 * 8 + 0x20),
             p_Var4 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                        *)0x0)) {
            p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                      *)std::
                        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                        ::find(p_Var4,(basic_string *)param_1);
            if (p_Var7 != p_Var4 + 8) {
              *(undefined4 *)(p_Var7 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0xe);
      }
    }
    if (*(int *)(param_1 + 0x40) != -1) {
      if (0x3e < *(int *)(param_1 + 0x40)) {
        std::operator+(acStack_58,(basic_string *)"mapped set out of range: ");
        pcVar5 = *(char **)(this + 0x10);
        glslang::TInfoSinkBase::append(pcVar5);
        glslang::TInfoSinkBase::append(pcVar5);
        glslang::TInfoSinkBase::append(pcVar5);
        **(undefined1 **)(this + 0x18) = 1;
      }
      pcVar3 = *(code **)(**(long **)(param_1 + 0x30) + 0x108);
      if (pcVar3 == TIntermTyped::getQualifier) {
        plVar8 = *(long **)(param_1 + 0x30) + 6;
      }
      else {
        plVar8 = (long *)(*pcVar3)();
      }
      if ((*(uint *)((long)plVar8 + 0x1c) & 0x3f8000) != 0x1f8000) {
        iVar2 = *(int *)this;
        lVar9 = 0;
        do {
          if ((iVar2 != (int)lVar9) &&
             (p_Var4 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                         **)(this + lVar9 * 8 + 0x20),
             p_Var4 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                        *)0x0)) {
            p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                      *)std::
                        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                        ::find(p_Var4,(basic_string *)param_1);
            if (p_Var7 != p_Var4 + 8) {
              *(undefined4 *)(p_Var7 + 0x60) = *(undefined4 *)(param_1 + 0x40);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0xe);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TSymbolValidater::TEMPNAMEPLACEHOLDERVALUE(std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>&) */

void __thiscall glslang::TSymbolValidater::operator()(TSymbolValidater *this,pair *param_1)

{
  byte bVar1;
  TType TVar2;
  basic_string bVar3;
  int iVar4;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  _Rb_tree_node_base *p_Var12;
  basic_string *pbVar13;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var14;
  TType *pTVar15;
  TType *pTVar16;
  basic_string *pbVar17;
  _Rb_tree_node_base *p_Var18;
  long *plVar19;
  TQualifier *pTVar20;
  long *plVar21;
  TType *pTVar22;
  byte bVar23;
  _Rb_tree_node_base *p_Var24;
  long lVar25;
  ulong uVar26;
  size_t sVar27;
  ulong uVar28;
  long lVar29;
  char *pcVar30;
  long lVar31;
  ulong uVar32;
  ushort uVar33;
  long in_FS_OFFSET;
  string *local_1c8;
  basic_string *local_1c0;
  TType local_198 [160];
  undefined8 local_f8;
  undefined1 *local_f0;
  ulong local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98 [48];
  undefined8 local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar21 = *(long **)(param_1 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
    pbVar13 = (basic_string *)(plVar21 + 4);
  }
  else {
    pbVar13 = (basic_string *)(**(code **)(*plVar21 + 0xf0))(plVar21);
  }
  local_f8 = glslang::GetThreadPoolAllocator();
  local_e8 = 0;
  local_e0 = 0;
  local_f0 = &local_e0;
  local_c8 = glslang::GetThreadPoolAllocator();
  local_b0 = 0;
  local_b8 = 0;
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 + -1 < 0) {
    uVar11 = 0xe;
LAB_00114c44:
    uVar28 = (ulong)(iVar4 + 1);
    do {
      if (*(long *)(this + uVar28 * 8) != 0) goto LAB_00114c65;
      uVar28 = uVar28 + 1;
    } while ((int)uVar28 < 0xe);
  }
  else {
    lVar29 = (long)(iVar4 + -1);
    do {
      if (*(long *)(this + lVar29 * 8) != 0) goto LAB_00114c34;
      lVar29 = lVar29 + -1;
    } while (-1 < (int)lVar29);
    lVar29 = 0xe;
LAB_00114c34:
    uVar11 = (uint)lVar29;
    if (iVar4 + 1 < 0xe) goto LAB_00114c44;
  }
  uVar28 = 0xe;
LAB_00114c65:
  local_c0 = &local_b0;
  if (*(code **)(*(long *)pbVar13 + 0x58) == TType::getQualifier) {
    pTVar20 = (TQualifier *)(pbVar13 + 0x10);
  }
  else {
    pTVar20 = (TQualifier *)(**(code **)(*(long *)pbVar13 + 0x58))(pbVar13);
  }
  cVar7 = TQualifier::isArrayedIo(pTVar20,iVar4);
  if (cVar7 == '\0') {
    glslang::TType::buildMangledName(pbVar13);
    uVar32 = local_e8 + 1;
    if (local_f0 != &local_e0) goto LAB_00114cf4;
LAB_00114ddf:
    if (0xf < uVar32) {
LAB_00114df0:
      uVar26 = local_e8;
      local_1c0 = (basic_string *)&local_f8;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)local_1c0
                ,local_e8,0,(char *)0x0,1);
      local_e8 = uVar26;
    }
  }
  else {
    TType::TType(local_198,(TType *)pbVar13,0,false);
    glslang::TType::buildMangledName((basic_string *)local_198);
    uVar32 = local_e8 + 1;
    if (local_f0 == &local_e0) goto LAB_00114ddf;
LAB_00114cf4:
    if (CONCAT71(uStack_df,local_e0) < uVar32) goto LAB_00114df0;
  }
  local_1c0 = (basic_string *)&local_f8;
  local_f0[local_e8] = 0x3b;
  local_f0[local_e8 + 1] = 0;
  local_e8 = uVar32;
  if (*(code **)(*plVar21 + 0x108) == TIntermTyped::getQualifier) {
    bVar1 = *(byte *)(plVar21 + 7);
    bVar23 = bVar1 & 0x7f;
    if (bVar23 != 3) {
LAB_00114d4b:
      if (bVar23 != 4) {
LAB_00114d54:
        if (1 < (bVar1 & 0x7f) - 5) goto LAB_00114d63;
LAB_001152d8:
        plVar19 = plVar21 + 6;
LAB_001152dc:
        if (*(char *)((long)plVar19 + 0x2d) == '\0') {
          lVar29 = 0;
          do {
            if ((iVar4 != (int)lVar29) && (*(long *)(this + lVar29 * 8 + 0x70) != 0)) {
              p_Var5 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                         **)(this + lVar29 * 8 + 0xe0);
              p_Var14 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                         *)std::
                           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                           ::find(p_Var5,(basic_string *)param_1);
              if (p_Var14 == p_Var5 + 8) {
                if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
                  uVar11 = (uint)*(byte *)(plVar21 + 5);
                }
                else {
                  uVar11 = (**(code **)(*plVar21 + 0x100))(plVar21);
                }
                if (uVar11 == 0x10) {
                  if (*(code **)(*plVar21 + 400) == TIntermSymbol::getName_abi_cxx11_) {
                    plVar19 = plVar21 + 0x19;
                  }
                  else {
                    plVar19 = (long *)(**(code **)(*plVar21 + 400))(plVar21);
                  }
                  uVar28 = plVar19[2];
                  if (uVar28 != 0) {
                    sVar27 = 5;
                    if (uVar28 < 6) {
                      sVar27 = uVar28;
                    }
                    iVar10 = memcmp((void *)plVar19[1],"anon@",sVar27);
                    if (iVar10 == 0 && (int)sVar27 == 5) {
                      if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
                        plVar19 = plVar21 + 4;
                      }
                      else {
                        plVar19 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
                      }
                      lVar25 = plVar19[0xd];
                      lVar31 = *(long *)(lVar25 + 8);
                      if (lVar31 != *(long *)(lVar25 + 0x10)) {
                        uVar28 = 0;
                        do {
                          plVar19 = *(long **)(lVar31 + uVar28 * 0x20);
                          pcVar6 = *(code **)(*plVar19 + 0x30);
                          if (pcVar6 == TType::getFieldName_abi_cxx11_) {
                            pbVar17 = (basic_string *)plVar19[0xe];
                          }
                          else {
                            pbVar17 = (basic_string *)(*pcVar6)();
                          }
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                          basic_string(local_98,pbVar17);
                          p_Var5 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                                     **)(this + lVar29 * 8 + 0xe0);
                          p_Var14 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                                     *)std::
                                       _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                                       ::find(p_Var5,(basic_string *)local_98);
                          if (p_Var5 + 8 != p_Var14) {
                            std::operator+((char *)&local_68,
                                           (basic_string *)"Invalid Uniform variable name : ");
                            TInfoSinkBase::message(*(undefined8 *)(this + 0x158),3,local_60);
                            **(undefined1 **)(this + 0x160) = 1;
                            break;
                          }
                          lVar31 = *(long *)(lVar25 + 8);
                          uVar28 = uVar28 + 1;
                        } while (uVar28 < (ulong)(*(long *)(lVar25 + 0x10) - lVar31 >> 5));
                      }
                    }
                  }
                }
              }
              else {
                pcVar6 = *(code **)(**(long **)(p_Var14 + 0x50) + 0xf0);
                if (pcVar6 == TIntermTyped::getType) {
                  pbVar17 = (basic_string *)(*(long **)(p_Var14 + 0x50) + 4);
                }
                else {
                  pbVar17 = (basic_string *)(*pcVar6)();
                }
                glslang::TType::buildMangledName(pbVar17);
                uVar32 = local_b8;
                uVar28 = local_b8 + 1;
                if (local_c0 == &local_b0) {
                  uVar26 = 0xf;
                }
                else {
                  uVar26 = CONCAT71(uStack_af,local_b0);
                }
                if (uVar26 < uVar28) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_c8,local_b8,0,(char *)0x0,1);
                }
                local_c0[uVar32] = 0x3b;
                local_c0[uVar32 + 1] = 0;
                local_b8 = uVar28;
                bVar9 = std::operator==(local_1c0,(basic_string *)&local_c8);
                if (!bVar9) {
                  pcVar6 = *(code **)(**(long **)(p_Var14 + 0x50) + 0xf0);
                  if (pcVar6 == TIntermTyped::getType) {
                    pTVar16 = (TType *)(*(long **)(p_Var14 + 0x50) + 4);
                  }
                  else {
                    pTVar16 = (TType *)(*pcVar6)();
                  }
                  if (*(basic_string *)(pTVar16 + 8) == pbVar13[8]) {
                    if (*(basic_string *)(pTVar16 + 8) == (basic_string)0xe) {
                      if (((((*(short *)(pTVar16 + 0x80) == *(short *)(pbVar13 + 0x80)) &&
                            (TVar2 = pTVar16[0x82], (((byte)pbVar13[0x82] ^ (byte)TVar2) & 3) == 0))
                           && (bVar3 = pbVar13[0x82],
                              ((byte)TVar2 >> 2 & 1) == ((byte)bVar3 >> 2 & 1))) &&
                          ((((byte)TVar2 >> 3 & 1) == ((byte)bVar3 >> 3 & 1) &&
                           (((byte)TVar2 >> 4 & 1) == ((byte)bVar3 >> 4 & 1))))) &&
                         (((byte)TVar2 >> 5 & 1) == ((byte)bVar3 >> 5 & 1))) {
                        if ((((byte)pTVar16[0x83] >> 5 & 1) == ((byte)pbVar13[0x83] >> 5 & 1)) &&
                           (((byte)pTVar16[0x83] >> 6 & 1) == ((byte)pbVar13[0x83] >> 6 & 1)))
                        goto LAB_00115a0f;
                      }
                    }
                    else {
LAB_00115a0f:
                      if ((((((byte)pTVar16[9] ^ (byte)pbVar13[9]) & 0xf) == 0) &&
                          (((((byte)pTVar16[9] ^ (byte)pbVar13[9]) < 0x10 &&
                            (TVar2 = pTVar16[10], (((byte)pbVar13[10] ^ (byte)TVar2) & 0x1f) == 0))
                           && (((byte)TVar2 >> 5 & 1) == ((byte)pbVar13[10] >> 5 & 1))))) &&
                         ((((byte)TVar2 >> 6 & 1) == ((byte)pbVar13[10] >> 6 & 1) &&
                          (cVar7 = TType::sameStructType
                                             (pTVar16,(TType *)pbVar13,(int *)0x0,(int *)0x0),
                          cVar7 != '\0')))) {
                        TType::sameReferenceType(pTVar16,(TType *)pbVar13);
                      }
                    }
                  }
                  std::operator+((char *)&local_68,
                                 (basic_string *)"Invalid Uniform variable type : ");
                  TInfoSinkBase::message(*(undefined8 *)(this + 0x158),3,local_60);
                  **(undefined1 **)(this + 0x160) = 1;
                }
                local_b8 = 0;
                *local_c0 = 0;
                if (**(char **)(this + 0x160) == '\0') {
                  if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
                    plVar19 = plVar21 + 4;
                  }
                  else {
                    plVar19 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
                  }
                  if (*(code **)(*plVar19 + 0x38) == TType::getBasicType) {
                    uVar11 = (uint)*(byte *)(plVar19 + 1);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar19 + 0x38))();
                  }
                  lVar25 = *plVar21;
                  if (uVar11 == 0x10) {
                    if (*(code **)(lVar25 + 400) == TIntermSymbol::getName_abi_cxx11_) {
                      plVar19 = plVar21 + 0x19;
                    }
                    else {
                      plVar19 = (long *)(**(code **)(lVar25 + 400))(plVar21);
                    }
                    uVar28 = plVar19[2];
                    local_1c8._0_1_ = false;
                    if (uVar28 != 0) {
                      sVar27 = 5;
                      if (uVar28 < 6) {
                        sVar27 = uVar28;
                      }
                      iVar10 = memcmp((void *)plVar19[1],"anon@",sVar27);
                      if (iVar10 == 0) {
                        local_1c8._0_1_ = (int)sVar27 == 5;
                      }
                    }
                    pcVar6 = *(code **)(**(long **)(p_Var14 + 0x50) + 400);
                    if (pcVar6 == TIntermSymbol::getName_abi_cxx11_) {
                      plVar19 = *(long **)(p_Var14 + 0x50) + 0x19;
                    }
                    else {
                      plVar19 = (long *)(*pcVar6)();
                    }
                    uVar28 = plVar19[2];
                    bVar9 = false;
                    if (uVar28 != 0) {
                      sVar27 = 5;
                      if (uVar28 < 6) {
                        sVar27 = uVar28;
                      }
                      iVar10 = memcmp((void *)plVar19[1],"anon@",sVar27);
                      if (iVar10 == 0) {
                        bVar9 = (int)sVar27 == 5;
                      }
                    }
                    if (bVar9 != local_1c8._0_1_) {
                      std::operator+((char *)&local_68,
                                     (basic_string *)
                                     "Matched uniform block names must also either all be lacking an instance name or all having an instance name: "
                                    );
                      TInfoSinkBase::message(*(undefined8 *)(this + 0x158),3,local_60);
                      **(undefined1 **)(this + 0x160) = 1;
                    }
                    goto LAB_001155b1;
                  }
                }
                else {
LAB_001155b1:
                  lVar25 = *plVar21;
                }
                if (*(code **)(lVar25 + 0xf0) == TIntermTyped::getType) {
                  pTVar16 = (TType *)(plVar21 + 4);
                }
                else {
                  pTVar16 = (TType *)(**(code **)(lVar25 + 0xf0))(plVar21);
                }
                pcVar6 = *(code **)(**(long **)(p_Var14 + 0x50) + 0xf0);
                if (pcVar6 == TIntermTyped::getType) {
                  pTVar15 = (TType *)(*(long **)(p_Var14 + 0x50) + 4);
                }
                else {
                  pTVar15 = (TType *)(*pcVar6)();
                }
                if (**(char **)(this + 0x160) == '\0') {
                  if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
                    plVar19 = plVar21 + 4;
                  }
                  else {
                    plVar19 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
                  }
                  if (*(code **)(*plVar19 + 0x38) == TType::getBasicType) {
                    uVar11 = (uint)*(byte *)(plVar19 + 1);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar19 + 0x38))();
                  }
                  if (uVar11 == 0x10) {
                    if (**(char **)(this + 0x160) == '\0') {
                      std::__cxx11::string::string<std::allocator<char>>
                                ((string *)&local_68,*(char **)(param_1 + 8),(allocator *)local_198)
                      ;
                      bVar9 = true;
                      goto LAB_0011541b;
                    }
                  }
                  else if (**(char **)(this + 0x160) == '\0') {
                    std::__cxx11::string::string<std::allocator<char>>
                              ((string *)&local_68,*(char **)(param_1 + 8),(allocator *)local_198);
                    bVar9 = false;
LAB_0011541b:
                    local_1c8 = (string *)&local_68;
                    uVar8 = typeCheck(this,pTVar16,pTVar15,local_1c8,bVar9);
                    **(undefined1 **)(this + 0x160) = uVar8;
                    std::__cxx11::string::_M_dispose();
                  }
                }
              }
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0xe);
        }
        goto LAB_00114d63;
      }
      goto LAB_00114e38;
    }
LAB_00114f80:
    if (uVar11 == 0xe) goto LAB_00114d63;
    if (*(code **)(*plVar21 + 0x180) == TIntermSymbol::getId) {
      lVar29 = plVar21[0x17];
    }
    else {
      lVar29 = (**(code **)(*plVar21 + 0x180))(plVar21);
    }
    if (lVar29 >> 0x38 < 3) goto LAB_00114d63;
    if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
          **)(this + (ulong)uVar11 * 8 + 0x70) ==
        (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
         *)0x0) goto LAB_00114d63;
    p_Var12 = (_Rb_tree_node_base *)
              std::
              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
              ::find(*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                       **)(this + (ulong)uVar11 * 8 + 0x70),(basic_string *)param_1);
    if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
      plVar19 = plVar21 + 4;
    }
    else {
      plVar19 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
    }
    if (*(code **)(*plVar19 + 0x58) == TType::getQualifier) {
      plVar19 = plVar19 + 2;
    }
    else {
      plVar19 = (long *)(**(code **)(*plVar19 + 0x58))();
    }
    p_Var24 = (_Rb_tree_node_base *)(*(long *)(this + (ulong)uVar11 * 8 + 0x70) + 8);
    uVar33 = *(ushort *)((long)plVar19 + 0x1c) & 0xfff;
    p_Var18 = p_Var12;
    if ((p_Var12 == p_Var24) && (uVar33 != 0xfff)) {
      p_Var18 = *(_Rb_tree_node_base **)(*(long *)(this + (ulong)uVar11 * 8 + 0x70) + 0x18);
      if (p_Var12 != p_Var18) {
        do {
          pcVar6 = *(code **)(**(long **)(p_Var18 + 0x50) + 0xf0);
          if (pcVar6 == TIntermTyped::getType) {
            plVar19 = *(long **)(p_Var18 + 0x50) + 4;
          }
          else {
            plVar19 = (long *)(*pcVar6)();
          }
          if (*(code **)(*plVar19 + 0x58) == TType::getQualifier) {
            plVar19 = plVar19 + 2;
          }
          else {
            plVar19 = (long *)(**(code **)(*plVar19 + 0x58))();
          }
          if (uVar33 == (*(ushort *)((long)plVar19 + 0x1c) & 0xfff)) {
            p_Var24 = (_Rb_tree_node_base *)(*(long *)(this + (ulong)uVar11 * 8 + 0x70) + 8);
            goto LAB_00115039;
          }
          p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var18);
        } while (p_Var12 != p_Var18);
        p_Var24 = (_Rb_tree_node_base *)(*(long *)(this + (ulong)uVar11 * 8 + 0x70) + 8);
        p_Var18 = p_Var12;
        goto LAB_00115039;
      }
      lVar29 = *plVar21;
LAB_00115b67:
      if (*(code **)(lVar29 + 0xf0) == TIntermTyped::getType) {
        plVar21 = plVar21 + 4;
      }
      else {
        plVar21 = (long *)(**(code **)(lVar29 + 0xf0))(plVar21);
      }
      cVar7 = (**(code **)(*plVar21 + 0x148))();
      if (((cVar7 == '\0') && (*(int *)(this + 0x168) == 8)) && (param_1[0x38] != '\0')) {
        uVar28 = *(ulong *)(param_1 + 0x10);
        pcVar30 = *(char **)(param_1 + 8);
        **(undefined1 **)(this + 0x160) = 1;
        local_68 = glslang::GetThreadPoolAllocator();
        local_58 = 0;
        local_60 = local_50;
        local_50[0] = 0;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        reserve((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68
                ,uVar28 + 0x3c);
        if ((0x7fffffffffffffffU - local_58 < uVar28) ||
           (std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      &local_68,pcVar30,uVar28), 0x7fffffffffffffffU - local_58 < 0x3c)) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::append");
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  &local_68,": not been declare as a output variable in pre shader stage.",0x3c);
        TInfoSinkBase::message(*(undefined8 *)(this + 0x158),2,local_60);
      }
      goto LAB_00114d63;
    }
LAB_00115039:
    lVar29 = *plVar21;
    if (p_Var18 == p_Var24) goto LAB_00115b67;
    if (*(code **)(lVar29 + 0xf0) == TIntermTyped::getType) {
      pTVar16 = (TType *)(plVar21 + 4);
    }
    else {
      pTVar16 = (TType *)(**(code **)(lVar29 + 0xf0))(plVar21);
    }
    pcVar6 = *(code **)(**(long **)(p_Var18 + 0x50) + 0xf0);
    if (pcVar6 == TIntermTyped::getType) {
      pTVar15 = (TType *)(*(long **)(p_Var18 + 0x50) + 4);
    }
    else {
      pTVar15 = (TType *)(*pcVar6)();
    }
    if (**(char **)(this + 0x160) == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_68,*(char **)(param_1 + 8),(allocator *)local_198);
      uVar8 = typeCheck(this,pTVar16,pTVar15,(string *)&local_68,false);
      **(undefined1 **)(this + 0x160) = uVar8;
      std::__cxx11::string::_M_dispose();
    }
    pcVar6 = *(code **)(**(long **)(p_Var18 + 0x50) + 0xf0);
    if (pcVar6 == TIntermTyped::getType) {
      plVar21 = *(long **)(p_Var18 + 0x50) + 4;
    }
    else {
      plVar21 = (long *)(*pcVar6)();
    }
    if (*(code **)(*plVar21 + 0x58) == TType::getQualifier) {
      pTVar20 = (TQualifier *)(plVar21 + 2);
    }
    else {
      pTVar20 = (TQualifier *)(**(code **)(*plVar21 + 0x58))();
    }
    cVar7 = TQualifier::isArrayedIo(pTVar20,uVar11);
    plVar21 = *(long **)(p_Var18 + 0x50);
    pcVar6 = *(code **)(*plVar21 + 0xf0);
    if (cVar7 == '\0') {
      if (pcVar6 == TIntermTyped::getType) {
        pTVar22 = (TType *)(plVar21 + 4);
      }
      else {
        pTVar22 = (TType *)(*pcVar6)();
      }
      TType::appendMangledName(pTVar22,(basic_string *)&local_c8);
    }
    else {
      if (pcVar6 == TIntermTyped::getType) {
        pTVar22 = (TType *)(plVar21 + 4);
      }
      else {
        pTVar22 = (TType *)(*pcVar6)();
      }
      TType::TType(local_198,pTVar22,0,false);
      TType::appendMangledName(local_198,(basic_string *)&local_c8);
    }
    bVar9 = std::operator==(local_1c0,(basic_string *)&local_c8);
    if (bVar9) {
      if (((*(long *)(this + 0x168) != 0x12c00000008) || (*(int *)(param_1 + 0x50) != 4)) ||
         (cVar7 = (**(code **)(*(long *)pTVar16 + 0x148))(pTVar16), cVar7 != '\0'))
      goto LAB_00114d63;
      if (*(code **)(*(long *)pTVar16 + 0x58) == TType::getQualifier) {
        pTVar22 = pTVar16 + 0x10;
      }
      else {
        pTVar22 = (TType *)(**(code **)(*(long *)pTVar16 + 0x58))(pTVar16);
      }
      TVar2 = pTVar22[0xb];
      if (*(code **)(*(long *)pTVar15 + 0x58) == TType::getQualifier) {
        pTVar22 = pTVar15 + 0x10;
      }
      else {
        pTVar22 = (TType *)(**(code **)(*(long *)pTVar15 + 0x58))(pTVar15);
      }
      if (-1 < (char)((byte)TVar2 ^ (byte)pTVar22[0xb])) {
        if (*(code **)(*(long *)pTVar16 + 0x58) == TType::getQualifier) {
          pTVar16 = pTVar16 + 0x10;
        }
        else {
          pTVar16 = (TType *)(**(code **)(*(long *)pTVar16 + 0x58))(pTVar16);
        }
        TVar2 = pTVar16[0xc];
        if (*(code **)(*(long *)pTVar15 + 0x58) == TType::getQualifier) {
          pTVar15 = pTVar15 + 0x10;
        }
        else {
          pTVar15 = (TType *)(**(code **)(*(long *)pTVar15 + 0x58))(pTVar15);
        }
        if ((((byte)TVar2 ^ (byte)pTVar15[0xc]) & 0x20) == 0) goto LAB_00114d63;
      }
      pcVar30 = "Interpolation qualifier mismatch : ";
    }
    else {
      if (*(code **)(*(long *)pTVar16 + 0x38) == TType::getBasicType) {
        uVar11 = (uint)(byte)pTVar16[8];
      }
      else {
        uVar11 = (**(code **)(*(long *)pTVar16 + 0x38))(pTVar16);
      }
      if (uVar11 == 0x10) {
        if (*(code **)(*(long *)pTVar16 + 0x128) != TType::isStruct) {
          cVar7 = (**(code **)(*(long *)pTVar16 + 0x128))(pTVar16);
          if (cVar7 != '\0') {
            lVar29 = *(long *)pTVar15;
            goto LAB_00115e93;
          }
          goto LAB_00115ad8;
        }
        lVar29 = *(long *)pTVar15;
        if ((byte)((char)pTVar16[8] - 0xfU) < 2) {
LAB_00115e93:
          if (*(code **)(lVar29 + 0x128) == TType::isStruct) {
            if ((byte)((char)pTVar15[8] - 0xfU) < 2) goto LAB_00115ae4;
          }
          else {
            cVar7 = (**(code **)(lVar29 + 0x128))(pTVar15);
            if (cVar7 != '\0') goto LAB_00115ad8;
          }
          local_68 = glslang::GetThreadPoolAllocator();
          local_50[0] = 0;
          local_60 = local_50;
          local_58 = 0;
          TType::appendMangledName
                    ((TType *)**(undefined8 **)(*(long *)(pTVar16 + 0x68) + 8),
                     (basic_string *)&local_68);
          bVar9 = std::operator==((basic_string *)&local_68,(basic_string *)&local_c8);
          if (bVar9) {
            lVar29 = (**(code **)(*(long *)pTVar16 + 0x58))(pTVar16);
            uVar33 = *(ushort *)(lVar29 + 0x1c);
            lVar29 = (**(code **)(*(long *)pTVar15 + 0x58))(pTVar15);
            if (((uVar33 ^ *(ushort *)(lVar29 + 0x1c)) & 0xfff) == 0) goto LAB_00114d63;
          }
          lVar29 = *(long *)pTVar15;
        }
      }
      else {
LAB_00115ad8:
        lVar29 = *(long *)pTVar15;
      }
LAB_00115ae4:
      if (*(code **)(lVar29 + 0x38) == TType::getBasicType) {
        uVar11 = (uint)(byte)pTVar15[8];
      }
      else {
        uVar11 = (**(code **)(lVar29 + 0x38))(pTVar15);
      }
      if (uVar11 == 0x10) {
        if (*(code **)(*(long *)pTVar15 + 0x128) == TType::isStruct) {
          if ((byte)((char)pTVar15[8] - 0xfU) < 2) {
LAB_00115b24:
            if (*(code **)(*(long *)pTVar16 + 0x128) == TType::isStruct) {
              if (1 < (byte)((char)pTVar16[8] - 0xfU)) {
LAB_00116088:
                local_68 = glslang::GetThreadPoolAllocator();
                local_50[0] = 0;
                local_60 = local_50;
                local_58 = 0;
                TType::appendMangledName
                          ((TType *)**(undefined8 **)(*(long *)(pTVar15 + 0x68) + 8),
                           (basic_string *)&local_68);
                bVar9 = std::operator==((basic_string *)&local_68,local_1c0);
                if (bVar9) {
                  if (*(code **)(*(long *)pTVar16 + 0x58) == TType::getQualifier) {
                    pTVar16 = pTVar16 + 0x10;
                  }
                  else {
                    pTVar16 = (TType *)(**(code **)(*(long *)pTVar16 + 0x58))(pTVar16);
                  }
                  uVar33 = *(ushort *)(pTVar16 + 0x1c);
                  if (*(code **)(*(long *)pTVar15 + 0x58) == TType::getQualifier) {
                    pTVar15 = pTVar15 + 0x10;
                  }
                  else {
                    pTVar15 = (TType *)(**(code **)(*(long *)pTVar15 + 0x58))(pTVar15);
                  }
                  if (((uVar33 ^ *(ushort *)(pTVar15 + 0x1c)) & 0xfff) == 0) goto LAB_00114d63;
                }
              }
            }
            else {
              cVar7 = (**(code **)(*(long *)pTVar16 + 0x128))(pTVar16);
              if (cVar7 == '\0') goto LAB_00116088;
            }
          }
        }
        else {
          cVar7 = (**(code **)(*(long *)pTVar15 + 0x128))(pTVar15);
          if (cVar7 != '\0') goto LAB_00115b24;
        }
      }
      pcVar30 = "Invalid In/Out variable type : ";
    }
  }
  else {
    lVar29 = (**(code **)(*plVar21 + 0x108))(plVar21);
    if ((*(byte *)(lVar29 + 8) & 0x7f) == 3) goto LAB_00114f80;
    if (*(code **)(*plVar21 + 0x108) == TIntermTyped::getQualifier) {
      bVar1 = *(byte *)(plVar21 + 7);
      bVar23 = bVar1 & 0x7f;
      goto LAB_00114d4b;
    }
    lVar29 = (**(code **)(*plVar21 + 0x108))(plVar21);
    if ((*(byte *)(lVar29 + 8) & 0x7f) != 4) {
      if (*(code **)(*plVar21 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar21 + 7);
        goto LAB_00114d54;
      }
      lVar29 = (**(code **)(*plVar21 + 0x108))(plVar21);
      if (1 < (*(byte *)(lVar29 + 8) & 0x7f) - 5) goto LAB_00114d63;
      if (*(code **)(*plVar21 + 0x108) == TIntermTyped::getQualifier) goto LAB_001152d8;
      plVar19 = (long *)(**(code **)(*plVar21 + 0x108))(plVar21);
      goto LAB_001152dc;
    }
LAB_00114e38:
    if ((int)uVar28 == 0xe) goto LAB_00114d63;
    if (*(code **)(*plVar21 + 0x180) == TIntermSymbol::getId) {
      lVar29 = plVar21[0x17];
    }
    else {
      lVar29 = (**(code **)(*plVar21 + 0x180))(plVar21);
    }
    if (((lVar29 >> 0x38 < 3) ||
        (p_Var5 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                    **)(this + (long)(int)uVar28 * 8),
        p_Var5 == (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   *)0x0)) ||
       (p_Var14 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                   *)std::
                     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                     ::find(p_Var5,(basic_string *)param_1), p_Var14 == p_Var5 + 8))
    goto LAB_00114d63;
    pcVar6 = *(code **)(**(long **)(p_Var14 + 0x50) + 0xf0);
    if (pcVar6 == TIntermTyped::getType) {
      plVar21 = *(long **)(p_Var14 + 0x50) + 4;
    }
    else {
      plVar21 = (long *)(*pcVar6)();
    }
    if (*(code **)(*plVar21 + 0x58) == TType::getQualifier) {
      pTVar20 = (TQualifier *)(plVar21 + 2);
    }
    else {
      pTVar20 = (TQualifier *)(**(code **)(*plVar21 + 0x58))();
    }
    cVar7 = TQualifier::isArrayedIo(pTVar20,uVar28 & 0xffffffff);
    plVar21 = *(long **)(p_Var14 + 0x50);
    pcVar6 = *(code **)(*plVar21 + 0xf0);
    if (cVar7 == '\0') {
      if (pcVar6 == TIntermTyped::getType) {
        pTVar16 = (TType *)(plVar21 + 4);
      }
      else {
        pTVar16 = (TType *)(*pcVar6)();
      }
      TType::appendMangledName(pTVar16,(basic_string *)&local_c8);
    }
    else {
      if (pcVar6 == TIntermTyped::getType) {
        pTVar16 = (TType *)(plVar21 + 4);
      }
      else {
        pTVar16 = (TType *)(*pcVar6)();
      }
      TType::TType(local_198,pTVar16,0,false);
      TType::appendMangledName(local_198,(basic_string *)&local_c8);
    }
    bVar9 = std::operator==(local_1c0,(basic_string *)&local_c8);
    if (bVar9) goto LAB_00114d63;
    pcVar30 = "Invalid In/Out variable type : ";
  }
  std::operator+((char *)&local_68,(basic_string *)pcVar30);
  TInfoSinkBase::message(*(undefined8 *)(this + 0x158),3,local_60);
  **(undefined1 **)(this + 0x160) = 1;
LAB_00114d63:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  ulong __n;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar1;
  ulong uVar2;
  
  if (this == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1) {
    return;
  }
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__dest == this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (uVar1 < __n) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar1 = uVar1 * 2;
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar2 = uVar1;
    }
    if (uVar1 <= __n) {
      uVar2 = __n;
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(*(ulong *)this);
    *(ulong *)(this + 0x18) = uVar2;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  else if (__n == 0) goto LAB_0011620c;
  if (__n == 1) {
    *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (param_1 + 8);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
  else {
    memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (param_1 + 8),__n);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
LAB_0011620c:
  *(ulong *)(this + 0x10) = __n;
  __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00116360;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0011636a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00116360:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0011636a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0011636a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0011633b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0011633b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* glslang::TDefaultIoResolver::resolveBinding(EShLanguage, glslang::TVarEntryInfo&) */

void __thiscall
glslang::TDefaultIoResolver::resolveBinding
          (TDefaultIoResolver *this,undefined4 param_2,long param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint local_40;
  
  pcVar2 = *(code **)(**(long **)(param_3 + 8) + 0xf0);
  if (pcVar2 == TIntermTyped::getType) {
    plVar6 = *(long **)(param_3 + 8) + 4;
  }
  else {
    plVar6 = (long *)(*pcVar2)();
  }
  if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) {
    if ((*(uint *)((long)plVar6 + 0x2c) & 0x3f8000) == 0x1f8000) goto LAB_001165c8;
LAB_00116497:
    plVar8 = plVar6 + 2;
LAB_0011649b:
    local_40 = *(uint *)((long)plVar8 + 0x1c) >> 0xf & 0x7f;
  }
  else {
    lVar9 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((*(uint *)(lVar9 + 0x1c) & 0x3f8000) != 0x1f8000) {
      if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) goto LAB_00116497;
      plVar8 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
      goto LAB_0011649b;
    }
LAB_001165c8:
    local_40 = 0;
  }
  if (*(int *)(*(long *)(this + 0x48) + 0x74) == 0) {
LAB_001164f8:
    iVar11 = 1;
  }
  else {
    pcVar2 = *(code **)(*plVar6 + 0xf0);
    if (pcVar2 == TType::isSizedArray) {
      pcVar2 = *(code **)(*plVar6 + 0xe8);
      if (pcVar2 == TType::isArray) {
        lVar9 = plVar6[0xc];
        if (lVar9 != 0) {
LAB_001165f9:
          if (**(int **)(*(long *)(lVar9 + 8) + 8) != 0) goto LAB_0011660b;
        }
      }
      else {
        cVar3 = (*pcVar2)(plVar6);
        if (cVar3 != '\0') {
          lVar9 = plVar6[0xc];
          goto LAB_001165f9;
        }
      }
      goto LAB_001164f8;
    }
    cVar3 = (*pcVar2)(plVar6);
    if (cVar3 == '\0') goto LAB_001164f8;
LAB_0011660b:
    if (*(code **)(*plVar6 + 0x88) == TType::getCumulativeArraySize) {
      lVar9 = *(long *)(plVar6[0xc] + 8);
      if (lVar9 != 0) {
        piVar7 = *(int **)(lVar9 + 8);
        iVar4 = (int)(*(long *)(lVar9 + 0x10) - (long)piVar7 >> 4);
        if (0 < iVar4) {
          iVar11 = 1;
          piVar1 = piVar7 + (ulong)(iVar4 - 1) * 4 + 4;
          do {
            iVar11 = iVar11 * *piVar7;
            piVar7 = piVar7 + 4;
          } while (piVar7 != piVar1);
          goto LAB_001164fe;
        }
      }
      goto LAB_001164f8;
    }
    iVar11 = (**(code **)(*plVar6 + 0x88))(plVar6);
  }
LAB_001164fe:
  iVar4 = (**(code **)(*(long *)this + 0xa8))(this,plVar6);
  if (iVar4 < 6) {
    if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) {
      uVar10 = (uint)*(ushort *)(plVar6 + 6);
      if (*(ushort *)(plVar6 + 6) == 0xffff) {
LAB_00116570:
        if ((*(char *)(param_3 + 0x10) != '\0') &&
           (*(char *)(*(long *)(this + 0x48) + 0x4d0) != '\0')) {
          iVar4 = TDefaultIoResolverBase::getBaseBinding
                            ((TDefaultIoResolverBase *)this,param_2,iVar4,local_40);
          uVar5 = TDefaultIoResolverBase::getFreeSlot
                            ((TDefaultIoResolverBase *)this,local_40,iVar4,iVar11);
          goto LAB_0011655d;
        }
        goto LAB_00116708;
      }
      iVar4 = TDefaultIoResolverBase::getBaseBinding
                        ((TDefaultIoResolverBase *)this,param_2,iVar4,local_40);
    }
    else {
      lVar9 = (**(code **)(*plVar6 + 0x58))(plVar6);
      if (*(short *)(lVar9 + 0x20) == -1) goto LAB_00116570;
      iVar4 = TDefaultIoResolverBase::getBaseBinding
                        ((TDefaultIoResolverBase *)this,param_2,iVar4,local_40);
      if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) {
        uVar10 = (uint)*(ushort *)(plVar6 + 6);
      }
      else {
        lVar9 = (**(code **)(*plVar6 + 0x58))(plVar6);
        uVar10 = (uint)*(ushort *)(lVar9 + 0x20);
      }
    }
    uVar5 = TDefaultIoResolverBase::reserveSlot
                      ((TDefaultIoResolverBase *)this,local_40,(uVar10 & 0xffff) + iVar4,iVar11);
  }
  else {
LAB_00116708:
    uVar5 = 0xffffffff;
  }
LAB_0011655d:
  *(undefined4 *)(param_3 + 0x14) = uVar5;
  return;
}



/* void std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair>
   >::_M_realloc_insert<glslang::TVarLivePair>(__gnu_cxx::__normal_iterator<glslang::TVarLivePair*,
   std::vector<glslang::TVarLivePair, std::allocator<glslang::TVarLivePair> > >,
   glslang::TVarLivePair&&) */

void __thiscall
std::vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>>::
_M_realloc_insert<glslang::TVarLivePair>
          (vector<glslang::TVarLivePair,std::allocator<glslang::TVarLivePair>> *this,void *param_2,
          basic_string *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *__dest;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  void *pvVar15;
  ulong *puVar16;
  ulong *local_50;
  ulong local_40;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  lVar11 = (long)pvVar1 - (long)pvVar2 >> 3;
  uVar12 = lVar11 * 0x2e8ba2e8ba2e8ba3;
  if (uVar12 == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar2 == pvVar1) {
    if (0xfffffffffffffffe < uVar12) goto LAB_001168b0;
    local_40 = 0x1745d1745d1745d;
    if (uVar12 + 1 < 0x1745d1745d1745e) {
      local_40 = uVar12 + 1;
    }
    uVar12 = local_40 * 0x58;
  }
  else {
    uVar13 = lVar11 * 0x5d1745d1745d1746;
    if (uVar13 < uVar12) {
LAB_001168b0:
      uVar12 = 0x7ffffffffffffff8;
      local_40 = 0x1745d1745d1745d;
    }
    else {
      if (uVar13 == 0) {
        local_50 = (ulong *)0x0;
        local_40 = uVar13;
        goto LAB_001167af;
      }
      local_40 = 0x1745d1745d1745d;
      if (uVar13 < 0x1745d1745d1745e) {
        local_40 = uVar13;
      }
      uVar12 = local_40 * 0x58;
    }
  }
  local_50 = (ulong *)operator_new(uVar12);
LAB_001167af:
  this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
            (((long)param_2 - (long)pvVar2) + (long)local_50);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (this_00,param_3);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this_00 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(this_00 + 0x38) = uVar5;
  *(undefined8 *)(this_00 + 0x40) = uVar6;
  *(undefined8 *)(this_00 + 0x48) = uVar4;
  *(undefined8 *)(this_00 + 0x50) = uVar7;
  puVar16 = local_50;
  for (pvVar15 = pvVar2; param_2 != pvVar15; pvVar15 = (void *)((long)pvVar15 + 0x58)) {
    uVar13 = glslang::GetThreadPoolAllocator();
    uVar12 = *(ulong *)((long)pvVar15 + 0x10);
    puVar14 = puVar16 + 3;
    puVar16[1] = (ulong)puVar14;
    puVar3 = *(undefined1 **)((long)pvVar15 + 8);
    *puVar16 = uVar13;
    if (uVar12 < 0x10) {
      if (uVar12 == 1) {
        *(undefined1 *)(puVar16 + 3) = *puVar3;
      }
      else if (uVar12 != 0) goto LAB_00116896;
    }
    else {
      if ((long)uVar12 < 0) goto LAB_00116a6b;
      puVar14 = (ulong *)glslang::TPoolAllocator::allocate(uVar13);
      puVar16[3] = uVar12;
      puVar16[1] = (ulong)puVar14;
LAB_00116896:
      memcpy(puVar14,puVar3,uVar12);
      puVar14 = (ulong *)puVar16[1];
    }
    puVar16[2] = uVar12;
    *(undefined1 *)((long)puVar14 + uVar12) = 0;
    uVar12 = *(ulong *)((long)pvVar15 + 0x30);
    uVar13 = *(ulong *)((long)pvVar15 + 0x38);
    uVar8 = *(ulong *)((long)pvVar15 + 0x40);
    uVar9 = *(ulong *)((long)pvVar15 + 0x48);
    uVar10 = *(ulong *)((long)pvVar15 + 0x50);
    puVar16[5] = *(ulong *)((long)pvVar15 + 0x28);
    puVar16[6] = uVar12;
    puVar16[7] = uVar13;
    puVar16[8] = uVar8;
    puVar16[9] = uVar9;
    puVar16[10] = uVar10;
    puVar16 = puVar16 + 0xb;
  }
  puVar16 = puVar16 + 0xb;
  puVar14 = puVar16;
  if (param_2 != pvVar1) {
    do {
      uVar13 = glslang::GetThreadPoolAllocator();
      uVar12 = *(ulong *)((long)param_2 + 0x10);
      __dest = puVar14 + 3;
      puVar3 = *(undefined1 **)((long)param_2 + 8);
      *puVar14 = uVar13;
      puVar14[1] = (ulong)__dest;
      if (uVar12 < 0x10) {
        if (uVar12 == 1) {
          *(undefined1 *)(puVar14 + 3) = *puVar3;
        }
        else if (uVar12 != 0) goto LAB_00116988;
      }
      else {
        if ((long)uVar12 < 0) {
LAB_00116a6b:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::_M_create");
        }
        __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar13);
        puVar14[3] = uVar12;
        puVar14[1] = (ulong)__dest;
LAB_00116988:
        memcpy(__dest,puVar3,uVar12);
        __dest = (ulong *)puVar14[1];
      }
      puVar14[2] = uVar12;
      pvVar15 = (void *)((long)param_2 + 0x58);
      puVar16 = puVar14 + 0xb;
      *(undefined1 *)((long)__dest + uVar12) = 0;
      uVar12 = *(ulong *)((long)param_2 + 0x30);
      uVar13 = *(ulong *)((long)param_2 + 0x38);
      uVar8 = *(ulong *)((long)param_2 + 0x40);
      uVar9 = *(ulong *)((long)param_2 + 0x48);
      uVar10 = *(ulong *)((long)param_2 + 0x50);
      puVar14[5] = *(ulong *)((long)param_2 + 0x28);
      puVar14[6] = uVar12;
      puVar14[7] = uVar13;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = uVar10;
      param_2 = pvVar15;
      puVar14 = puVar16;
    } while (pvVar1 != pvVar15);
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
  }
  *(ulong **)this = local_50;
  *(ulong **)(this + 8) = puVar16;
  *(ulong **)(this + 0x10) = local_50 + local_40 * 0xb;
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



/* glslang::TResolverInOutAdaptor::TEMPNAMEPLACEHOLDERVALUE(std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>&) */

void __thiscall
glslang::TResolverInOutAdaptor::operator()(TResolverInOutAdaptor *this,pair *param_1)

{
  pair *ppVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  char cVar4;
  long lVar5;
  size_t sVar6;
  long *plVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  char *local_60;
  ulong local_58;
  char local_50;
  undefined7 uStack_4f;
  long local_40;
  
  ppVar1 = param_1 + 0x28;
  plVar7 = *(long **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x39] = 0;
  lVar5 = *plVar7;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  if (*(code **)(lVar5 + 0x30) == TDefaultIoResolverBase::validateInOut) {
LAB_00116c49:
    (**(code **)(lVar5 + 0x38))(plVar7,*(undefined4 *)this,ppVar1);
    plVar7 = *(long **)(this + 8);
    uVar2 = *(undefined4 *)this;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x40);
    if (UNRECOVERED_JUMPTABLE == TDefaultIoResolverBase::resolveInOutComponent) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(plVar7,uVar2,ppVar1);
      plVar7 = *(long **)(this + 8);
      uVar2 = *(undefined4 *)this;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x48);
    }
    if (UNRECOVERED_JUMPTABLE != TDefaultIoResolverBase::resolveInOutIndex) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar7,uVar2,ppVar1);
        return;
      }
      goto LAB_00116fee;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  else {
    cVar4 = (**(code **)(lVar5 + 0x30))(plVar7,*(undefined4 *)(param_1 + 0x50),ppVar1);
    if (cVar4 != '\0') {
      plVar7 = *(long **)(this + 8);
      lVar5 = *plVar7;
      goto LAB_00116c49;
    }
    local_68 = glslang::GetThreadPoolAllocator();
    local_50 = '\0';
    local_58 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0xf0);
    local_60 = &local_50;
    if (UNRECOVERED_JUMPTABLE == TIntermTyped::getType) {
      plVar7 = *(long **)(param_1 + 0x30) + 4;
    }
    else {
      plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)();
    }
    if (*(code **)(*plVar7 + 0x58) == TType::getQualifier) {
      plVar7 = plVar7 + 2;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x58))();
    }
    if (*plVar7 == 0) {
      if ((local_60 == &local_50) || (CONCAT71(uStack_4f,local_50) < 0x20)) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  &local_68,0,local_58,"Invalid shader In/Out variable: ",0x20);
      }
      else if (("Invalid shader In/Out variable: " < local_60) ||
              (local_60 + local_58 < "Invalid shader In/Out variable: ")) {
        *(undefined8 *)local_60 = _LC40._0_8_;
        *(undefined8 *)(local_60 + 8) = _LC40._8_8_;
        *(undefined8 *)(local_60 + 0x10) = _LC40._48_8_;
        *(undefined8 *)(local_60 + 0x18) = _LC40._56_8_;
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                        &local_68,local_60,local_58,"Invalid shader In/Out variable: ",0x20,0);
      }
      local_58 = 0x20;
      local_60[0x20] = '\0';
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 400);
      if (UNRECOVERED_JUMPTABLE == TIntermSymbol::getName_abi_cxx11_) {
        plVar7 = *(long **)(param_1 + 0x30) + 0x19;
        uVar8 = 0x7fffffffffffffdf;
      }
      else {
        plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)();
        uVar8 = 0x7fffffffffffffff - local_58;
      }
      if (uVar8 < (ulong)plVar7[2]) goto LAB_00116ff3;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68
                ,(char *)plVar7[1],plVar7[2]);
    }
    else {
      if ((local_60 == &local_50) || (CONCAT71(uStack_4f,local_50) < 0x29)) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  &local_68,0,local_58,"Invalid shader In/Out variable semantic: ",0x29);
      }
      else if (("Invalid shader In/Out variable semantic: " < local_60) ||
              (local_60 + local_58 < "Invalid shader In/Out variable semantic: ")) {
        *(undefined8 *)local_60 = _LC40._0_8_;
        *(undefined8 *)(local_60 + 8) = _LC40._8_8_;
        *(undefined8 *)(local_60 + 0x10) = _LC40._16_8_;
        *(undefined8 *)(local_60 + 0x18) = _LC40._24_8_;
        *(undefined8 *)(local_60 + 0x19) = _LC40._32_8_;
        *(undefined8 *)(local_60 + 0x21) = _LC40._40_8_;
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                        &local_68,local_60,local_58,"Invalid shader In/Out variable semantic: ",0x29
                        ,0);
      }
      local_58 = 0x29;
      local_60[0x29] = '\0';
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0xf0);
      if (UNRECOVERED_JUMPTABLE == TIntermTyped::getType) {
        plVar7 = *(long **)(param_1 + 0x30) + 4;
      }
      else {
        plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)();
      }
      if (*(code **)(*plVar7 + 0x58) == TType::getQualifier) {
        plVar7 = plVar7 + 2;
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x58))();
      }
      pcVar3 = (char *)*plVar7;
      sVar6 = strlen(pcVar3);
      if (0x7fffffffffffffff - local_58 < sVar6) {
LAB_00116ff3:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68
                ,pcVar3,sVar6);
    }
    pcVar3 = *(char **)(this + 0x10);
    glslang::TInfoSinkBase::append(pcVar3);
    glslang::TInfoSinkBase::append(pcVar3);
    glslang::TInfoSinkBase::append(pcVar3);
    **(undefined1 **)(this + 0x18) = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116fee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
           *this,basic_string *param_1)

{
  void *__s1;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *p_Var8;
  _Rb_tree_node_base *p_Var9;
  basic_string *__s2;
  undefined1 auVar10 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var8 = this + 8;
LAB_00117104:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var8) {
      p_Var7 = (_Rb_tree_node_base *)0x0;
      p_Var9 = (_Rb_tree_node_base *)p_Var8;
      goto LAB_001170e6;
    }
    p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var8);
    __s2 = *(basic_string **)(p_Var7 + 0x28);
  }
  else {
    __s1 = *(void **)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var8 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                *)p_Var7;
      uVar2 = *(ulong *)((_Rb_tree_node_base *)p_Var8 + 0x30);
      __s2 = *(basic_string **)((_Rb_tree_node_base *)p_Var8 + 0x28);
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar1;
      }
      if (uVar6 == 0) {
LAB_00117097:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_001170b5;
        if (-0x80000001 < (long)uVar6) goto LAB_001170b1;
LAB_00117060:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x10);
        bVar3 = true;
      }
      else {
        uVar4 = memcmp(__s1,__s2,uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_00117097;
LAB_001170b1:
        if ((int)uVar6 < 0) goto LAB_00117060;
LAB_001170b5:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x18);
        bVar3 = false;
      }
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
    p_Var7 = (_Rb_tree_node_base *)p_Var8;
    if (bVar3) goto LAB_00117104;
  }
  iVar5 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (__s2);
  p_Var9 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < 0) {
    p_Var9 = (_Rb_tree_node_base *)p_Var8;
    p_Var7 = (_Rb_tree_node_base *)0x0;
  }
LAB_001170e6:
  auVar10._8_8_ = p_Var9;
  auVar10._0_8_ = p_Var7;
  return auVar10;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (iVar3 < 0) goto LAB_001171b4;
    }
LAB_001171fe:
    auVar7 = _M_get_insert_unique_pos(this,param_3);
    return auVar7;
  }
  pbVar1 = *(basic_string **)(param_3 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x28);
  iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (pbVar1);
  if (iVar3 < 0) {
    p_Var6 = *(_Rb_tree_node_base **)(this + 0x18);
    p_Var4 = p_Var6;
    if (p_Var6 != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      if (-1 < iVar3) goto LAB_001171fe;
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(p_Var4 + 0x18) != 0) {
        p_Var6 = param_2;
        p_Var4 = param_2;
      }
    }
  }
  else {
    iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            compare(pbVar2);
    p_Var6 = param_2;
    p_Var4 = (_Rb_tree_node_base *)0x0;
    if (iVar3 < 0) {
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
        p_Var6 = (_Rb_tree_node_base *)0x0;
        p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      }
      else {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(pbVar1);
        if (-1 < iVar3) goto LAB_001171fe;
        p_Var6 = (_Rb_tree_node_base *)0x0;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var6 = p_Var5;
        }
        p_Var4 = param_2;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var4 = p_Var5;
        }
      }
    }
  }
LAB_001171b4:
  auVar7._8_8_ = p_Var4;
  auVar7._0_8_ = p_Var6;
  return auVar7;
}



/* glslang::TVarGatherTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TVarGatherTraverser::visitSymbol(TVarGatherTraverser *this,TIntermSymbol *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  TIntermSymbol TVar3;
  TVarGatherTraverser TVar4;
  undefined4 uVar5;
  basic_string *pbVar6;
  bool bVar7;
  int iVar8;
  _Rb_tree_node_base *p_Var9;
  code *pcVar10;
  TIntermSymbol *pTVar11;
  _Rb_tree_node_base *p_Var12;
  byte extraout_var;
  basic_string *pbVar13;
  long lVar14;
  byte bVar15;
  _Rb_tree_node_base _Var16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
  *this_00;
  undefined1 auVar18 [16];
  long local_50;
  
  lVar14 = *(long *)param_1;
  if (*(code **)(lVar14 + 0x108) == TIntermTyped::getQualifier) {
    TVar3 = param_1[0x38];
    bVar15 = (byte)TVar3 & 0x7f;
    if (bVar15 != 3) {
LAB_00117324:
      if (bVar15 == 4) goto LAB_00117360;
      if (((byte)TVar3 & 0x7f) - 5 < 2) {
LAB_00117608:
        if (*(code **)(lVar14 + 0x108) != TIntermTyped::getQualifier) {
          lVar14 = (**(code **)(lVar14 + 0x108))(param_1);
          pcVar10 = *(code **)(*(long *)param_1 + 0x108);
          if (*(char *)(lVar14 + 0x2d) != '\0') goto LAB_0011751c;
          if (pcVar10 == TIntermTyped::getQualifier) goto LAB_00117622;
          lVar14 = (*pcVar10)(param_1);
          if (*(char *)(lVar14 + 0x38) != '\0') goto LAB_00117512;
LAB_0011762c:
          this_00 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                      **)(this + 0xe0);
          goto LAB_00117367;
        }
LAB_00117618:
        if (param_1[0x5d] == (TIntermSymbol)0x0) {
LAB_00117622:
          if (param_1[0x68] == (TIntermSymbol)0x0) goto LAB_0011762c;
        }
      }
LAB_00117338:
      pTVar11 = param_1 + 0x30;
LAB_0011733c:
      if (((byte)pTVar11[8] & 0x7f) != 1) {
        return;
      }
      pbVar13 = (basic_string *)(**(code **)(*(long *)param_1 + 0x198))(param_1);
      auVar18 = std::
                _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
                ::find((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
                        *)(this + 0x90),pbVar13);
      if (auVar18._0_8_ != 0) {
        return;
      }
      std::
      _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Identity,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>
      ::
      _M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,true>>>>
                ((basic_string *)(this + 0x90),pbVar13,auVar18._8_8_);
      TLiveTraverser::pushGlobalReference((TLiveTraverser *)this,pbVar13);
      return;
    }
LAB_001174b0:
    this_00 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                **)(this + 0xd0);
  }
  else {
    lVar14 = (**(code **)(lVar14 + 0x108))(param_1);
    if ((*(byte *)(lVar14 + 8) & 0x7f) == 3) goto LAB_001174b0;
    lVar14 = *(long *)param_1;
    if (*(code **)(lVar14 + 0x108) == TIntermTyped::getQualifier) {
      TVar3 = param_1[0x38];
      bVar15 = (byte)TVar3 & 0x7f;
      goto LAB_00117324;
    }
    lVar14 = (**(code **)(lVar14 + 0x108))(param_1);
    if ((*(byte *)(lVar14 + 8) & 0x7f) != 4) {
      if (*(code **)(*(long *)param_1 + 0x108) == TIntermTyped::getQualifier) {
        if (((byte)param_1[0x38] & 0x7f) - 5 < 2) goto LAB_00117618;
      }
      else {
        lVar14 = (**(code **)(*(long *)param_1 + 0x108))(param_1);
        if ((*(byte *)(lVar14 + 8) & 0x7f) - 5 < 2) {
          lVar14 = *(long *)param_1;
          goto LAB_00117608;
        }
LAB_00117512:
        pcVar10 = *(code **)(*(long *)param_1 + 0x108);
LAB_0011751c:
        if (pcVar10 != TIntermTyped::getQualifier) {
          pTVar11 = (TIntermSymbol *)(*pcVar10)(param_1);
          goto LAB_0011733c;
        }
      }
      goto LAB_00117338;
    }
LAB_00117360:
    this_00 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
                **)(this + 0xd8);
  }
LAB_00117367:
  if (this_00 ==
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
       *)0x0) {
    return;
  }
  lVar14 = *(long *)param_1;
  if (*(code **)(lVar14 + 0x180) == TIntermSymbol::getId) {
    local_50 = *(long *)(param_1 + 0xb8);
  }
  else {
    local_50 = (**(code **)(lVar14 + 0x180))(param_1);
    lVar14 = *(long *)param_1;
  }
  TVar4 = this[200];
  uVar5 = **(undefined4 **)(this + 0x50);
  pbVar13 = (basic_string *)(**(code **)(lVar14 + 0x198))(param_1);
  p_Var9 = (_Rb_tree_node_base *)
           std::
           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
           ::find(this_00,pbVar13);
  p_Var1 = (_Rb_tree_node_base *)(this_00 + 8);
  if ((p_Var9 != p_Var1) && (local_50 == *(long *)(p_Var9 + 0x48))) {
    _Var16 = p_Var9[0x58];
    if (_Var16 == (_Rb_tree_node_base)0x0) {
      _Var16 = (_Rb_tree_node_base)((byte)this[200] ^ 1);
    }
    p_Var9[0x58] = _Var16;
    return;
  }
  pbVar13 = (basic_string *)(**(code **)(*(long *)param_1 + 0x198))(param_1);
  p_Var9 = p_Var1;
  if (*(_Rb_tree_node_base **)(this_00 + 0x10) != (_Rb_tree_node_base *)0x0) {
    pbVar6 = *(basic_string **)(pbVar13 + 8);
    p_Var12 = p_Var1;
    p_Var17 = *(_Rb_tree_node_base **)(this_00 + 0x10);
    do {
      while( true ) {
        p_Var9 = p_Var17;
        iVar8 = std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                          (*(basic_string **)(p_Var9 + 0x28));
        p_Var2 = p_Var9 + 0x18;
        if (-1 < iVar8) break;
        p_Var9 = p_Var12;
        p_Var17 = *(_Rb_tree_node_base **)p_Var2;
        if (*(_Rb_tree_node_base **)p_Var2 == (_Rb_tree_node_base *)0x0) goto LAB_0011743a;
      }
      p_Var12 = p_Var9;
      p_Var17 = *(_Rb_tree_node_base **)(p_Var9 + 0x10);
    } while (*(_Rb_tree_node_base **)(p_Var9 + 0x10) != (_Rb_tree_node_base *)0x0);
LAB_0011743a:
    if ((p_Var1 != p_Var9) &&
       (iVar8 = std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                          (pbVar6), -1 < iVar8)) goto LAB_0011745f;
  }
  p_Var12 = (_Rb_tree_node_base *)operator_new(0x78);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (p_Var12 + 0x20),pbVar13);
  *(undefined1 (*) [16])(p_Var12 + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(p_Var12 + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(p_Var12 + 0x68) = (undefined1  [16])0x0;
  auVar18 = std::
            _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TVarEntryInfo>>>
            ::_M_get_insert_hint_unique_pos
                      (this_00,p_Var9,
                       (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       (p_Var12 + 0x20));
  p_Var17 = auVar18._8_8_;
  p_Var9 = auVar18._0_8_;
  if (p_Var17 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var12,0x78);
  }
  else {
    if ((p_Var1 == p_Var17) || (p_Var9 != (_Rb_tree_node_base *)0x0)) {
      bVar7 = true;
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                (*(basic_string **)(p_Var12 + 0x28));
      bVar7 = (bool)(extraout_var >> 7);
    }
    std::_Rb_tree_insert_and_rebalance(bVar7,p_Var12,p_Var17,p_Var1);
    *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + 1;
    p_Var9 = p_Var12;
  }
LAB_0011745f:
  *(TIntermSymbol **)(p_Var9 + 0x50) = param_1;
  p_Var9[0x59] = (_Rb_tree_node_base)0x0;
  *(long *)(p_Var9 + 0x48) = local_50;
  *(undefined4 *)(p_Var9 + 0x6c) = 0;
  *(undefined1 (*) [16])(p_Var9 + 0x5c) = (undefined1  [16])0x0;
  p_Var9[0x58] = (_Rb_tree_node_base)((byte)TVar4 ^ 1);
  *(undefined4 *)(p_Var9 + 0x70) = uVar5;
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
           *this,basic_string *param_1)

{
  void *__s1;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
  *p_Var8;
  _Rb_tree_node_base *p_Var9;
  basic_string *__s2;
  undefined1 auVar10 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var8 = this + 8;
LAB_00117804:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var8) {
      p_Var7 = (_Rb_tree_node_base *)0x0;
      p_Var9 = (_Rb_tree_node_base *)p_Var8;
      goto LAB_001177e6;
    }
    p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var8);
    __s2 = *(basic_string **)(p_Var7 + 0x28);
  }
  else {
    __s1 = *(void **)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var8 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
                *)p_Var7;
      uVar2 = *(ulong *)((_Rb_tree_node_base *)p_Var8 + 0x30);
      __s2 = *(basic_string **)((_Rb_tree_node_base *)p_Var8 + 0x28);
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar1;
      }
      if (uVar6 == 0) {
LAB_00117797:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_001177b5;
        if (-0x80000001 < (long)uVar6) goto LAB_001177b1;
LAB_00117760:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x10);
        bVar3 = true;
      }
      else {
        uVar4 = memcmp(__s1,__s2,uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_00117797;
LAB_001177b1:
        if ((int)uVar6 < 0) goto LAB_00117760;
LAB_001177b5:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x18);
        bVar3 = false;
      }
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
    p_Var7 = (_Rb_tree_node_base *)p_Var8;
    if (bVar3) goto LAB_00117804;
  }
  iVar5 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (__s2);
  p_Var9 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < 0) {
    p_Var9 = (_Rb_tree_node_base *)p_Var8;
    p_Var7 = (_Rb_tree_node_base *)0x0;
  }
LAB_001177e6:
  auVar10._8_8_ = p_Var9;
  auVar10._0_8_ = p_Var7;
  return auVar10;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (iVar3 < 0) goto LAB_001178b4;
    }
LAB_001178fe:
    auVar7 = _M_get_insert_unique_pos(this,param_3);
    return auVar7;
  }
  pbVar1 = *(basic_string **)(param_3 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x28);
  iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (pbVar1);
  if (iVar3 < 0) {
    p_Var6 = *(_Rb_tree_node_base **)(this + 0x18);
    p_Var4 = p_Var6;
    if (p_Var6 != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      if (-1 < iVar3) goto LAB_001178fe;
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(p_Var4 + 0x18) != 0) {
        p_Var6 = param_2;
        p_Var4 = param_2;
      }
    }
  }
  else {
    iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            compare(pbVar2);
    p_Var6 = param_2;
    p_Var4 = (_Rb_tree_node_base *)0x0;
    if (iVar3 < 0) {
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
        p_Var6 = (_Rb_tree_node_base *)0x0;
        p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      }
      else {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(pbVar1);
        if (-1 < iVar3) goto LAB_001178fe;
        p_Var6 = (_Rb_tree_node_base *)0x0;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var6 = p_Var5;
        }
        p_Var4 = param_2;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var4 = p_Var5;
        }
      }
    }
  }
LAB_001178b4:
  auVar7._8_8_ = p_Var4;
  auVar7._0_8_ = p_Var6;
  return auVar7;
}



/* std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const, std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   >, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > >::_M_emplace_hint_unique<std::piecewise_construct_t const&,
   std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > >, std::piecewise_construct_t const&,
   std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const&>&&, std::tuple<>&&) [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
           *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte extraout_var;
  _Rb_tree_node_base *p_Var1;
  undefined8 uVar2;
  _Rb_tree_node_base *p_Var3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  p_Var1 = (_Rb_tree_node_base *)operator_new(0x70);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (p_Var1 + 0x20),(basic_string *)*param_3);
  uVar2 = glslang::GetThreadPoolAllocator();
  p_Var1[0x60] = (_Rb_tree_node_base)0x0;
  *(undefined8 *)(p_Var1 + 0x48) = uVar2;
  *(_Rb_tree_node_base **)(p_Var1 + 0x50) = p_Var1 + 0x60;
  *(undefined8 *)(p_Var1 + 0x58) = 0;
  auVar5 = _M_get_insert_hint_unique_pos
                     (param_1,param_2,
                      (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      (p_Var1 + 0x20));
  p_Var3 = auVar5._8_8_;
  if (p_Var3 != (_Rb_tree_node_base *)0x0) {
    bVar4 = true;
    if ((auVar5._0_8_ == (_Rb_tree_node_base *)0x0) &&
       (p_Var3 != (_Rb_tree_node_base *)(param_1 + 8))) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                (*(basic_string **)(p_Var1 + 0x28));
      bVar4 = (bool)(extraout_var >> 7);
    }
    std::_Rb_tree_insert_and_rebalance(bVar4,p_Var1,p_Var3,(_Rb_tree_node_base *)(param_1 + 8));
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    return p_Var1;
  }
  operator_delete(p_Var1,0x70);
  return auVar5._0_8_;
}



/* glslang::TSymbolValidater::TSymbolValidater(glslang::TIoMapResolver&, TInfoSink&,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   bool&, EProfile, int) */

void __thiscall
glslang::TSymbolValidater::TSymbolValidater
          (TSymbolValidater *this,undefined8 param_1,undefined8 param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 *param_5,char *param_6,undefined4 param_8,
          undefined4 param_9)

{
  undefined1 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node *p_Var15;
  TType *pTVar16;
  basic_string *pbVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  _Rb_tree_node *p_Var22;
  char *pcVar23;
  uint uVar24;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  char cVar29;
  ushort uVar30;
  ulong uVar31;
  long lVar32;
  _Rb_tree_node *p_Var33;
  TSymbolValidater *pTVar34;
  long lVar35;
  long in_FS_OFFSET;
  ulong local_378;
  undefined8 local_300;
  undefined1 local_2f8 [16];
  long *local_2e8;
  undefined1 local_2d8 [16];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_2c8;
  undefined1 local_2b8 [8];
  undefined4 local_2b0 [2];
  _Rb_tree_node *local_2a8;
  _Rb_tree_node *local_2a0;
  _Rb_tree_node *local_298;
  undefined8 local_290;
  long *local_288;
  long local_280;
  long local_278 [2];
  char *local_268 [2];
  char local_258 [16];
  long *local_248;
  long local_240;
  long local_238 [2];
  char *local_228 [2];
  char local_218 [16];
  ulong local_208;
  ulong *local_200;
  ulong local_1f8;
  ulong local_1f0 [3];
  ulong local_1d8;
  ulong *local_1d0;
  ulong local_1c8;
  ulong local_1c0 [3];
  ulong local_1a8;
  ulong *local_1a0;
  ulong local_198;
  ulong local_190 [3];
  ulong local_178;
  ulong *local_170;
  ulong local_168;
  ulong local_160 [2];
  undefined8 local_150;
  long *plStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char local_118 [8];
  char acStack_110 [8];
  char local_108 [8];
  char acStack_100 [8];
  char local_f8 [8];
  char acStack_f0 [8];
  char local_e8 [8];
  char acStack_e0 [8];
  char local_d8 [8];
  char acStack_d0 [8];
  char local_c8 [8];
  char acStack_c0 [8];
  char local_b8 [8];
  char acStack_b0 [8];
  char local_a8 [8];
  char acStack_a0 [8];
  char local_98 [8];
  char acStack_90 [8];
  char local_88 [8];
  char acStack_80 [8];
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char cStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  char acStack_57 [23];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x158) = param_2;
  *(undefined8 *)(this + 0x150) = param_1;
  *(undefined4 *)(this + 0x168) = param_8;
  *(char **)(this + 0x160) = param_6;
  *(undefined4 *)(this + 0x16c) = param_9;
  uVar4 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar4;
  uVar4 = param_3[5];
  *(undefined8 *)(this + 0x20) = param_3[4];
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar4 = param_3[7];
  *(undefined8 *)(this + 0x30) = param_3[6];
  *(undefined8 *)(this + 0x38) = uVar4;
  uVar4 = param_3[9];
  *(undefined8 *)(this + 0x40) = param_3[8];
  *(undefined8 *)(this + 0x48) = uVar4;
  uVar4 = param_3[0xb];
  *(undefined8 *)(this + 0x50) = param_3[10];
  *(undefined8 *)(this + 0x58) = uVar4;
  uVar4 = param_3[0xd];
  *(undefined8 *)(this + 0x60) = param_3[0xc];
  *(undefined8 *)(this + 0x68) = uVar4;
  uVar4 = param_4[1];
  *(undefined8 *)(this + 0x70) = *param_4;
  *(undefined8 *)(this + 0x78) = uVar4;
  uVar4 = param_4[3];
  *(undefined8 *)(this + 0x80) = param_4[2];
  *(undefined8 *)(this + 0x88) = uVar4;
  uVar4 = param_4[5];
  *(undefined8 *)(this + 0x90) = param_4[4];
  *(undefined8 *)(this + 0x98) = uVar4;
  uVar4 = param_4[7];
  *(undefined8 *)(this + 0xa0) = param_4[6];
  *(undefined8 *)(this + 0xa8) = uVar4;
  uVar4 = param_4[9];
  *(undefined8 *)(this + 0xb0) = param_4[8];
  *(undefined8 *)(this + 0xb8) = uVar4;
  uVar4 = param_4[0xb];
  *(undefined8 *)(this + 0xc0) = param_4[10];
  *(undefined8 *)(this + 200) = uVar4;
  uVar4 = param_4[0xd];
  pTVar34 = this + 0xe0;
  *(undefined8 *)(this + 0xd0) = param_4[0xc];
  *(undefined8 *)(this + 0xd8) = uVar4;
  uVar4 = param_5[1];
  *(undefined8 *)(this + 0xe0) = *param_5;
  *(undefined8 *)(this + 0xe8) = uVar4;
  uVar4 = param_5[3];
  *(undefined8 *)(this + 0xf0) = param_5[2];
  *(undefined8 *)(this + 0xf8) = uVar4;
  uVar4 = param_5[5];
  *(undefined8 *)(this + 0x100) = param_5[4];
  *(undefined8 *)(this + 0x108) = uVar4;
  uVar4 = param_5[7];
  *(undefined8 *)(this + 0x110) = param_5[6];
  *(undefined8 *)(this + 0x118) = uVar4;
  uVar4 = param_5[9];
  *(undefined8 *)(this + 0x120) = param_5[8];
  *(undefined8 *)(this + 0x128) = uVar4;
  uVar4 = param_5[0xb];
  *(undefined8 *)(this + 0x130) = param_5[10];
  *(undefined8 *)(this + 0x138) = uVar4;
  uVar4 = param_5[0xd];
  local_2b0[0] = 0;
  local_2a8 = (_Rb_tree_node *)0x0;
  local_290 = 0;
  local_2e8 = (long *)0x0;
  local_2c8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)0x0;
  *(undefined8 *)(this + 0x140) = param_5[0xc];
  *(undefined8 *)(this + 0x148) = uVar4;
  local_2f8 = (undefined1  [16])0x0;
  local_2d8 = (undefined1  [16])0x0;
  local_2a0 = (_Rb_tree_node *)local_2b0;
  local_298 = (_Rb_tree_node *)local_2b0;
  do {
    lVar21 = *(long *)pTVar34;
    if (lVar21 != 0) {
      for (p_Var14 = *(_Rb_tree_node_base **)(lVar21 + 0x18);
          p_Var14 != (_Rb_tree_node_base *)(lVar21 + 8);
          p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var14)) {
        local_178 = glslang::GetThreadPoolAllocator();
        uVar11 = *(ulong *)(p_Var14 + 0x30);
        puVar1 = *(undefined1 **)(p_Var14 + 0x28);
        local_170 = local_160;
        if (uVar11 < 0x10) {
          if (uVar11 == 1) {
            local_160[0] = CONCAT71(local_160[0]._1_7_,*puVar1);
          }
          else if (uVar11 != 0) goto LAB_00118d00;
        }
        else {
          if ((long)uVar11 < 0) goto LAB_00119394;
          local_170 = (ulong *)glslang::TPoolAllocator::allocate(local_178);
          local_160[0] = uVar11;
LAB_00118d00:
          memcpy(local_170,puVar1,uVar11);
        }
        *(undefined1 *)((long)local_170 + uVar11) = 0;
        local_150 = *(undefined8 *)(p_Var14 + 0x48);
        plVar3 = *(long **)(p_Var14 + 0x50);
        local_140 = *(undefined8 *)(p_Var14 + 0x58);
        uStack_138 = *(undefined8 *)(p_Var14 + 0x60);
        local_130 = *(undefined8 *)(p_Var14 + 0x68);
        uStack_128 = *(undefined8 *)(p_Var14 + 0x70);
        lVar10 = *plVar3;
        local_168 = uVar11;
        plStack_148 = plVar3;
        if (*(code **)(lVar10 + 0x108) == TIntermTyped::getQualifier) {
          plVar12 = plVar3 + 6;
        }
        else {
          plVar12 = (long *)(**(code **)(lVar10 + 0x108))(plVar3);
          lVar10 = *plVar3;
        }
        uVar30 = *(ushort *)((long)plVar12 + 0x1c);
        lVar10 = (**(code **)(lVar10 + 0x198))(plVar3);
        uVar30 = uVar30 & 0xfff;
        local_208 = glslang::GetThreadPoolAllocator();
        local_200 = local_1f0;
        puVar1 = *(undefined1 **)(lVar10 + 8);
        uVar11 = *(ulong *)(lVar10 + 0x10);
        if (uVar11 < 0x10) {
          if (uVar11 == 1) {
            local_1f0[0] = CONCAT71(local_1f0[0]._1_7_,*puVar1);
          }
          else if (uVar11 != 0) goto LAB_00118d4c;
        }
        else {
          if ((long)uVar11 < 0) goto LAB_00119394;
          local_200 = (ulong *)glslang::TPoolAllocator::allocate(local_208);
          local_1f0[0] = uVar11;
LAB_00118d4c:
          memcpy(local_200,puVar1,uVar11);
        }
        uVar31 = (ulong)uVar30;
        *(undefined1 *)((long)local_200 + uVar11) = 0;
        local_1f8 = uVar11;
        if (uVar30 != 0xfff) {
          if (*(code **)(*plVar3 + 0xf0) == TIntermTyped::getType) {
            pTVar16 = (TType *)(plVar3 + 4);
          }
          else {
            pTVar16 = (TType *)(**(code **)(*plVar3 + 0xf0))(plVar3);
          }
          iVar7 = glslang::TIntermediate::computeTypeUniformLocationSize(pTVar16);
          uVar24 = (uVar30 - 1) + iVar7;
          local_300 = (ulong *)CONCAT44(uVar24,(uint)uVar30);
          local_1a8 = glslang::GetThreadPoolAllocator();
          uVar11 = local_1f8;
          puVar5 = local_200;
          local_1a0 = local_190;
          if (local_1f8 < 0x10) {
            if (local_1f8 == 1) {
              local_190[0] = CONCAT71(local_190[0]._1_7_,(char)*local_200);
            }
            else if (local_1f8 != 0) goto LAB_00118e2f;
          }
          else {
            if ((long)local_1f8 < 0) {
LAB_00119394:
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::_M_create");
            }
            local_1a0 = (ulong *)glslang::TPoolAllocator::allocate(local_1a8);
            local_190[0] = uVar11;
LAB_00118e2f:
            memcpy(local_1a0,puVar5,uVar11);
          }
          puVar5 = local_1a0;
          local_198 = uVar11;
          uVar4 = local_2f8._0_8_;
          *(undefined1 *)((long)local_1a0 + uVar11) = 0;
          uVar6 = local_2f8._8_8_;
          lVar10 = local_2f8._8_8_ - local_2f8._0_8_;
          if (local_2f8._0_8_ != local_2f8._8_8_) {
            puVar26 = (undefined8 *)(local_2d8._0_8_ + 8);
            uVar28 = 0;
LAB_00117f97:
            uVar20 = (uint)uVar30;
            if ((puVar26[1] != uVar11) ||
               ((uVar11 != 0 && (iVar7 = memcmp((void *)*puVar26,puVar5,uVar11), iVar7 != 0)))) {
              uVar9 = *(uint *)(uVar4 + uVar28 * 8);
              if (((int)uVar24 < (int)uVar9) || (*(int *)(uVar4 + uVar28 * 8 + 4) < (int)uVar20))
              goto LAB_00118320;
              if ((int)uVar20 < (int)uVar9) {
                uVar31 = (ulong)uVar9;
              }
              uVar11 = glslang::GetThreadPoolAllocator();
              uVar24 = (uint)uVar31;
              if ((int)uVar24 < 10) {
                local_228[0] = local_218;
                std::__cxx11::string::_M_construct((ulong)local_228,'\x01');
                goto LAB_001181ad;
              }
              if ((int)uVar24 < 100) {
                local_228[0] = local_218;
                std::__cxx11::string::_M_construct((ulong)local_228,'\x02');
                local_118[0] = _LC40[0x40];
                local_118[1] = _LC40[0x41];
                local_118[2] = _LC40[0x42];
                local_118[3] = _LC40[0x43];
                local_118[4] = _LC40[0x44];
                local_118[5] = _LC40[0x45];
                local_118[6] = _LC40[0x46];
                local_118[7] = _LC40[0x47];
                acStack_110[0] = _LC40[0x48];
                acStack_110[1] = _LC40[0x49];
                acStack_110[2] = _LC40[0x4a];
                acStack_110[3] = _LC40[0x4b];
                acStack_110[4] = _LC40[0x4c];
                acStack_110[5] = _LC40[0x4d];
                acStack_110[6] = _LC40[0x4e];
                acStack_110[7] = _LC40[0x4f];
                local_108[0] = _LC40[0x50];
                local_108[1] = _LC40[0x51];
                local_108[2] = _LC40[0x52];
                local_108[3] = _LC40[0x53];
                local_108[4] = _LC40[0x54];
                local_108[5] = _LC40[0x55];
                local_108[6] = _LC40[0x56];
                local_108[7] = _LC40[0x57];
                acStack_100[0] = _LC40[0x58];
                acStack_100[1] = _LC40[0x59];
                acStack_100[2] = _LC40[0x5a];
                acStack_100[3] = _LC40[0x5b];
                acStack_100[4] = _LC40[0x5c];
                acStack_100[5] = _LC40[0x5d];
                acStack_100[6] = _LC40[0x5e];
                acStack_100[7] = _LC40[0x5f];
                local_f8[0] = _LC40[0x60];
                local_f8[1] = _LC40[0x61];
                local_f8[2] = _LC40[0x62];
                local_f8[3] = _LC40[99];
                local_f8[4] = _LC40[100];
                local_f8[5] = _LC40[0x65];
                local_f8[6] = _LC40[0x66];
                local_f8[7] = _LC40[0x67];
                acStack_f0[0] = _LC40[0x68];
                acStack_f0[1] = _LC40[0x69];
                acStack_f0[2] = _LC40[0x6a];
                acStack_f0[3] = _LC40[0x6b];
                acStack_f0[4] = _LC40[0x6c];
                acStack_f0[5] = _LC40[0x6d];
                acStack_f0[6] = _LC40[0x6e];
                acStack_f0[7] = _LC40[0x6f];
                local_e8[0] = _LC40[0x70];
                local_e8[1] = _LC40[0x71];
                local_e8[2] = _LC40[0x72];
                local_e8[3] = _LC40[0x73];
                local_e8[4] = _LC40[0x74];
                local_e8[5] = _LC40[0x75];
                local_e8[6] = _LC40[0x76];
                local_e8[7] = _LC40[0x77];
                acStack_e0[0] = _LC40[0x78];
                acStack_e0[1] = _LC40[0x79];
                acStack_e0[2] = _LC40[0x7a];
                acStack_e0[3] = _LC40[0x7b];
                acStack_e0[4] = _LC40[0x7c];
                acStack_e0[5] = _LC40[0x7d];
                acStack_e0[6] = _LC40[0x7e];
                acStack_e0[7] = _LC40[0x7f];
                local_d8[0] = _LC40[0x80];
                local_d8[1] = _LC40[0x81];
                local_d8[2] = _LC40[0x82];
                local_d8[3] = _LC40[0x83];
                local_d8[4] = _LC40[0x84];
                local_d8[5] = _LC40[0x85];
                local_d8[6] = _LC40[0x86];
                local_d8[7] = _LC40[0x87];
                acStack_d0[0] = _LC40[0x88];
                acStack_d0[1] = _LC40[0x89];
                acStack_d0[2] = _LC40[0x8a];
                acStack_d0[3] = _LC40[0x8b];
                acStack_d0[4] = _LC40[0x8c];
                acStack_d0[5] = _LC40[0x8d];
                acStack_d0[6] = _LC40[0x8e];
                acStack_d0[7] = _LC40[0x8f];
                local_c8[0] = _LC40[0x90];
                local_c8[1] = _LC40[0x91];
                local_c8[2] = _LC40[0x92];
                local_c8[3] = _LC40[0x93];
                local_c8[4] = _LC40[0x94];
                local_c8[5] = _LC40[0x95];
                local_c8[6] = _LC40[0x96];
                local_c8[7] = _LC40[0x97];
                acStack_c0[0] = _LC40[0x98];
                acStack_c0[1] = _LC40[0x99];
                acStack_c0[2] = _LC40[0x9a];
                acStack_c0[3] = _LC40[0x9b];
                acStack_c0[4] = _LC40[0x9c];
                acStack_c0[5] = _LC40[0x9d];
                acStack_c0[6] = _LC40[0x9e];
                acStack_c0[7] = _LC40[0x9f];
                local_b8[0] = _LC40[0xa0];
                local_b8[1] = _LC40[0xa1];
                local_b8[2] = _LC40[0xa2];
                local_b8[3] = _LC40[0xa3];
                local_b8[4] = _LC40[0xa4];
                local_b8[5] = _LC40[0xa5];
                local_b8[6] = _LC40[0xa6];
                local_b8[7] = _LC40[0xa7];
                acStack_b0[0] = _LC40[0xa8];
                acStack_b0[1] = _LC40[0xa9];
                acStack_b0[2] = _LC40[0xaa];
                acStack_b0[3] = _LC40[0xab];
                acStack_b0[4] = _LC40[0xac];
                acStack_b0[5] = _LC40[0xad];
                acStack_b0[6] = _LC40[0xae];
                acStack_b0[7] = _LC40[0xaf];
                local_a8[0] = _LC40[0xb0];
                local_a8[1] = _LC40[0xb1];
                local_a8[2] = _LC40[0xb2];
                local_a8[3] = _LC40[0xb3];
                local_a8[4] = _LC40[0xb4];
                local_a8[5] = _LC40[0xb5];
                local_a8[6] = _LC40[0xb6];
                local_a8[7] = _LC40[0xb7];
                acStack_a0[0] = _LC40[0xb8];
                acStack_a0[1] = _LC40[0xb9];
                acStack_a0[2] = _LC40[0xba];
                acStack_a0[3] = _LC40[0xbb];
                acStack_a0[4] = _LC40[0xbc];
                acStack_a0[5] = _LC40[0xbd];
                acStack_a0[6] = _LC40[0xbe];
                acStack_a0[7] = _LC40[0xbf];
                local_98[0] = _LC40[0xc0];
                local_98[1] = _LC40[0xc1];
                local_98[2] = _LC40[0xc2];
                local_98[3] = _LC40[0xc3];
                local_98[4] = _LC40[0xc4];
                local_98[5] = _LC40[0xc5];
                local_98[6] = _LC40[0xc6];
                local_98[7] = _LC40[199];
                acStack_90[0] = _LC40[200];
                acStack_90[1] = _LC40[0xc9];
                acStack_90[2] = _LC40[0xca];
                acStack_90[3] = _LC40[0xcb];
                acStack_90[4] = _LC40[0xcc];
                acStack_90[5] = _LC40[0xcd];
                acStack_90[6] = _LC40[0xce];
                acStack_90[7] = _LC40[0xcf];
                local_88[0] = _LC40[0xd0];
                local_88[1] = _LC40[0xd1];
                local_88[2] = _LC40[0xd2];
                local_88[3] = _LC40[0xd3];
                local_88[4] = _LC40[0xd4];
                local_88[5] = _LC40[0xd5];
                local_88[6] = _LC40[0xd6];
                local_88[7] = _LC40[0xd7];
                acStack_80[0] = _LC40[0xd8];
                acStack_80[1] = _LC40[0xd9];
                acStack_80[2] = _LC40[0xda];
                acStack_80[3] = _LC40[0xdb];
                acStack_80[4] = _LC40[0xdc];
                acStack_80[5] = _LC40[0xdd];
                acStack_80[6] = _LC40[0xde];
                acStack_80[7] = _LC40[0xdf];
                local_78[0] = _LC40[0xe0];
                local_78[1] = _LC40[0xe1];
                local_78[2] = _LC40[0xe2];
                local_78[3] = _LC40[0xe3];
                local_78[4] = _LC40[0xe4];
                local_78[5] = _LC40[0xe5];
                local_78[6] = _LC40[0xe6];
                local_78[7] = _LC40[0xe7];
                acStack_70[0] = _LC40[0xe8];
                acStack_70[1] = _LC40[0xe9];
                acStack_70[2] = _LC40[0xea];
                acStack_70[3] = _LC40[0xeb];
                acStack_70[4] = _LC40[0xec];
                acStack_70[5] = _LC40[0xed];
                acStack_70[6] = _LC40[0xee];
                acStack_70[7] = _LC40[0xef];
                local_68[0] = _LC40[0xf0];
                local_68[1] = _LC40[0xf1];
                local_68[2] = _LC40[0xf2];
                local_68[3] = _LC40[0xf3];
                local_68[4] = _LC40[0xf4];
                local_68[5] = _LC40[0xf5];
                local_68[6] = _LC40[0xf6];
                local_68[7] = _LC40[0xf7];
                cStack_60 = (char)_LC40._248_8_;
                uStack_5f = (undefined7)_LC40._256_8_;
                cStack_58 = SUB81(_LC40._256_8_,7);
                acStack_57[0] = _LC40[0x108];
                acStack_57[1] = _LC40[0x109];
                acStack_57[2] = _LC40[0x10a];
                acStack_57[3] = _LC40[0x10b];
                acStack_57[4] = _LC40[0x10c];
                acStack_57[5] = _LC40[0x10d];
                acStack_57[6] = _LC40[0x10e];
                acStack_57[7] = _LC40[0x10f];
                goto LAB_001191e0;
              }
              if ((int)uVar24 < 1000) {
                uVar20 = 2;
                cVar29 = '\x03';
              }
              else if ((int)uVar24 < 10000) {
                uVar20 = 3;
                cVar29 = '\x04';
              }
              else if (uVar24 < 100000) {
                uVar20 = 5;
LAB_00119205:
                cVar29 = (char)uVar20;
                uVar20 = uVar20 - 1;
              }
              else if (uVar24 < 1000000) {
                uVar20 = 5;
LAB_00118051:
                cVar29 = (char)uVar20 + '\x01';
              }
              else {
                uVar20 = 6;
                cVar29 = '\a';
                if (9999999 < uVar24) {
                  if (99999999 < uVar24) {
                    uVar20 = 9;
                    if (uVar31 < 1000000000) goto LAB_00119205;
                    goto LAB_00118051;
                  }
                  uVar20 = 7;
                  cVar29 = '\b';
                }
              }
              local_228[0] = local_218;
              std::__cxx11::string::_M_construct((ulong)local_228,cVar29);
              local_118[0] = _LC40[0x40];
              local_118[1] = _LC40[0x41];
              local_118[2] = _LC40[0x42];
              local_118[3] = _LC40[0x43];
              local_118[4] = _LC40[0x44];
              local_118[5] = _LC40[0x45];
              local_118[6] = _LC40[0x46];
              local_118[7] = _LC40[0x47];
              acStack_110[0] = _LC40[0x48];
              acStack_110[1] = _LC40[0x49];
              acStack_110[2] = _LC40[0x4a];
              acStack_110[3] = _LC40[0x4b];
              acStack_110[4] = _LC40[0x4c];
              acStack_110[5] = _LC40[0x4d];
              acStack_110[6] = _LC40[0x4e];
              acStack_110[7] = _LC40[0x4f];
              local_108[0] = _LC40[0x50];
              local_108[1] = _LC40[0x51];
              local_108[2] = _LC40[0x52];
              local_108[3] = _LC40[0x53];
              local_108[4] = _LC40[0x54];
              local_108[5] = _LC40[0x55];
              local_108[6] = _LC40[0x56];
              local_108[7] = _LC40[0x57];
              acStack_100[0] = _LC40[0x58];
              acStack_100[1] = _LC40[0x59];
              acStack_100[2] = _LC40[0x5a];
              acStack_100[3] = _LC40[0x5b];
              acStack_100[4] = _LC40[0x5c];
              acStack_100[5] = _LC40[0x5d];
              acStack_100[6] = _LC40[0x5e];
              acStack_100[7] = _LC40[0x5f];
              local_f8[0] = _LC40[0x60];
              local_f8[1] = _LC40[0x61];
              local_f8[2] = _LC40[0x62];
              local_f8[3] = _LC40[99];
              local_f8[4] = _LC40[100];
              local_f8[5] = _LC40[0x65];
              local_f8[6] = _LC40[0x66];
              local_f8[7] = _LC40[0x67];
              acStack_f0[0] = _LC40[0x68];
              acStack_f0[1] = _LC40[0x69];
              acStack_f0[2] = _LC40[0x6a];
              acStack_f0[3] = _LC40[0x6b];
              acStack_f0[4] = _LC40[0x6c];
              acStack_f0[5] = _LC40[0x6d];
              acStack_f0[6] = _LC40[0x6e];
              acStack_f0[7] = _LC40[0x6f];
              local_e8[0] = _LC40[0x70];
              local_e8[1] = _LC40[0x71];
              local_e8[2] = _LC40[0x72];
              local_e8[3] = _LC40[0x73];
              local_e8[4] = _LC40[0x74];
              local_e8[5] = _LC40[0x75];
              local_e8[6] = _LC40[0x76];
              local_e8[7] = _LC40[0x77];
              acStack_e0[0] = _LC40[0x78];
              acStack_e0[1] = _LC40[0x79];
              acStack_e0[2] = _LC40[0x7a];
              acStack_e0[3] = _LC40[0x7b];
              acStack_e0[4] = _LC40[0x7c];
              acStack_e0[5] = _LC40[0x7d];
              acStack_e0[6] = _LC40[0x7e];
              acStack_e0[7] = _LC40[0x7f];
              local_d8[0] = _LC40[0x80];
              local_d8[1] = _LC40[0x81];
              local_d8[2] = _LC40[0x82];
              local_d8[3] = _LC40[0x83];
              local_d8[4] = _LC40[0x84];
              local_d8[5] = _LC40[0x85];
              local_d8[6] = _LC40[0x86];
              local_d8[7] = _LC40[0x87];
              acStack_d0[0] = _LC40[0x88];
              acStack_d0[1] = _LC40[0x89];
              acStack_d0[2] = _LC40[0x8a];
              acStack_d0[3] = _LC40[0x8b];
              acStack_d0[4] = _LC40[0x8c];
              acStack_d0[5] = _LC40[0x8d];
              acStack_d0[6] = _LC40[0x8e];
              acStack_d0[7] = _LC40[0x8f];
              local_c8[0] = _LC40[0x90];
              local_c8[1] = _LC40[0x91];
              local_c8[2] = _LC40[0x92];
              local_c8[3] = _LC40[0x93];
              local_c8[4] = _LC40[0x94];
              local_c8[5] = _LC40[0x95];
              local_c8[6] = _LC40[0x96];
              local_c8[7] = _LC40[0x97];
              acStack_c0[0] = _LC40[0x98];
              acStack_c0[1] = _LC40[0x99];
              acStack_c0[2] = _LC40[0x9a];
              acStack_c0[3] = _LC40[0x9b];
              acStack_c0[4] = _LC40[0x9c];
              acStack_c0[5] = _LC40[0x9d];
              acStack_c0[6] = _LC40[0x9e];
              acStack_c0[7] = _LC40[0x9f];
              local_b8[0] = _LC40[0xa0];
              local_b8[1] = _LC40[0xa1];
              local_b8[2] = _LC40[0xa2];
              local_b8[3] = _LC40[0xa3];
              local_b8[4] = _LC40[0xa4];
              local_b8[5] = _LC40[0xa5];
              local_b8[6] = _LC40[0xa6];
              local_b8[7] = _LC40[0xa7];
              acStack_b0[0] = _LC40[0xa8];
              acStack_b0[1] = _LC40[0xa9];
              acStack_b0[2] = _LC40[0xaa];
              acStack_b0[3] = _LC40[0xab];
              acStack_b0[4] = _LC40[0xac];
              acStack_b0[5] = _LC40[0xad];
              acStack_b0[6] = _LC40[0xae];
              acStack_b0[7] = _LC40[0xaf];
              local_a8[0] = _LC40[0xb0];
              local_a8[1] = _LC40[0xb1];
              local_a8[2] = _LC40[0xb2];
              local_a8[3] = _LC40[0xb3];
              local_a8[4] = _LC40[0xb4];
              local_a8[5] = _LC40[0xb5];
              local_a8[6] = _LC40[0xb6];
              local_a8[7] = _LC40[0xb7];
              acStack_a0[0] = _LC40[0xb8];
              acStack_a0[1] = _LC40[0xb9];
              acStack_a0[2] = _LC40[0xba];
              acStack_a0[3] = _LC40[0xbb];
              acStack_a0[4] = _LC40[0xbc];
              acStack_a0[5] = _LC40[0xbd];
              acStack_a0[6] = _LC40[0xbe];
              acStack_a0[7] = _LC40[0xbf];
              local_98[0] = _LC40[0xc0];
              local_98[1] = _LC40[0xc1];
              local_98[2] = _LC40[0xc2];
              local_98[3] = _LC40[0xc3];
              local_98[4] = _LC40[0xc4];
              local_98[5] = _LC40[0xc5];
              local_98[6] = _LC40[0xc6];
              local_98[7] = _LC40[199];
              acStack_90[0] = _LC40[200];
              acStack_90[1] = _LC40[0xc9];
              acStack_90[2] = _LC40[0xca];
              acStack_90[3] = _LC40[0xcb];
              acStack_90[4] = _LC40[0xcc];
              acStack_90[5] = _LC40[0xcd];
              acStack_90[6] = _LC40[0xce];
              acStack_90[7] = _LC40[0xcf];
              local_88[0] = _LC40[0xd0];
              local_88[1] = _LC40[0xd1];
              local_88[2] = _LC40[0xd2];
              local_88[3] = _LC40[0xd3];
              local_88[4] = _LC40[0xd4];
              local_88[5] = _LC40[0xd5];
              local_88[6] = _LC40[0xd6];
              local_88[7] = _LC40[0xd7];
              acStack_80[0] = _LC40[0xd8];
              acStack_80[1] = _LC40[0xd9];
              acStack_80[2] = _LC40[0xda];
              acStack_80[3] = _LC40[0xdb];
              acStack_80[4] = _LC40[0xdc];
              acStack_80[5] = _LC40[0xdd];
              acStack_80[6] = _LC40[0xde];
              acStack_80[7] = _LC40[0xdf];
              local_78[0] = _LC40[0xe0];
              local_78[1] = _LC40[0xe1];
              local_78[2] = _LC40[0xe2];
              local_78[3] = _LC40[0xe3];
              local_78[4] = _LC40[0xe4];
              local_78[5] = _LC40[0xe5];
              local_78[6] = _LC40[0xe6];
              local_78[7] = _LC40[0xe7];
              acStack_70[0] = _LC40[0xe8];
              acStack_70[1] = _LC40[0xe9];
              acStack_70[2] = _LC40[0xea];
              acStack_70[3] = _LC40[0xeb];
              acStack_70[4] = _LC40[0xec];
              acStack_70[5] = _LC40[0xed];
              acStack_70[6] = _LC40[0xee];
              acStack_70[7] = _LC40[0xef];
              local_68[0] = _LC40[0xf0];
              local_68[1] = _LC40[0xf1];
              local_68[2] = _LC40[0xf2];
              local_68[3] = _LC40[0xf3];
              local_68[4] = _LC40[0xf4];
              local_68[5] = _LC40[0xf5];
              local_68[6] = _LC40[0xf6];
              local_68[7] = _LC40[0xf7];
              cStack_60 = (char)_LC40._248_8_;
              uStack_5f = (undefined7)_LC40._256_8_;
              cStack_58 = SUB81(_LC40._256_8_,7);
              acStack_57[0] = _LC40[0x108];
              acStack_57[1] = _LC40[0x109];
              acStack_57[2] = _LC40[0x10a];
              acStack_57[3] = _LC40[0x10b];
              acStack_57[4] = _LC40[0x10c];
              acStack_57[5] = _LC40[0x10d];
              acStack_57[6] = _LC40[0x10e];
              acStack_57[7] = _LC40[0x10f];
              do {
                uVar24 = (uint)(uVar31 / 100);
                uVar8 = (uint)uVar31;
                uVar9 = (uVar8 + uVar24 * -100) * 2;
                cVar29 = local_118[uVar9];
                local_228[0][uVar20] = local_118[uVar9 + 1];
                uVar9 = uVar20 - 1;
                uVar20 = uVar20 - 2;
                local_228[0][uVar9] = cVar29;
                uVar31 = uVar31 / 100;
              } while (9999 < uVar8);
              if (uVar8 < 1000) {
LAB_001181ad:
                cVar29 = (char)uVar24 + '0';
              }
              else {
LAB_001191e0:
                cVar29 = local_118[uVar24 * 2];
                local_228[0][1] = local_118[uVar24 * 2 + 1];
                local_118 = (char  [8])_LC40._64_8_;
                acStack_110 = (char  [8])_LC40._72_8_;
                local_108 = (char  [8])_LC40._80_8_;
                acStack_100 = (char  [8])_LC40._88_8_;
                local_f8 = (char  [8])_LC40._96_8_;
                acStack_f0 = (char  [8])_LC40._104_8_;
                local_e8 = (char  [8])_LC40._112_8_;
                acStack_e0 = (char  [8])_LC40._120_8_;
                local_d8 = (char  [8])_LC40._128_8_;
                acStack_d0 = (char  [8])_LC40._136_8_;
                local_c8 = (char  [8])_LC40._144_8_;
                acStack_c0 = (char  [8])_LC40._152_8_;
                local_b8 = (char  [8])_LC40._160_8_;
                acStack_b0 = (char  [8])_LC40._168_8_;
                local_a8 = (char  [8])_LC40._176_8_;
                acStack_a0 = (char  [8])_LC40._184_8_;
                local_98 = (char  [8])_LC40._192_8_;
                acStack_90 = (char  [8])_LC40._200_8_;
                local_88 = (char  [8])_LC40._208_8_;
                acStack_80 = (char  [8])_LC40._216_8_;
                local_78 = (char  [8])_LC40._224_8_;
                acStack_70 = (char  [8])_LC40._232_8_;
                local_68 = (char  [8])_LC40._240_8_;
                acStack_57._0_8_ = _LC40._264_8_;
              }
              *local_228[0] = cVar29;
              plVar12 = (long *)std::__cxx11::string::_M_replace
                                          ((ulong)local_228,0,(char *)0x0,0x117af8);
              local_248 = local_238;
              plVar3 = plVar12 + 2;
              if ((long *)*plVar12 == plVar3) {
                uVar31 = plVar12[1] + 1;
                plVar19 = plVar3;
                plVar27 = local_248;
                if (7 < (uint)uVar31) {
                  uVar28 = 0;
                  do {
                    uVar24 = (int)uVar28 + 8;
                    uVar18 = (ulong)uVar24;
                    *(undefined8 *)((long)local_248 + uVar28) =
                         *(undefined8 *)((long)plVar3 + uVar28);
                    uVar28 = uVar18;
                  } while (uVar24 < ((uint)uVar31 & 0xfffffff8));
                  plVar27 = (long *)((long)local_248 + uVar18);
                  plVar19 = (long *)(uVar18 + (long)plVar3);
                }
                lVar21 = 0;
                if ((uVar31 & 4) != 0) {
                  *(undefined4 *)plVar27 = *(undefined4 *)plVar19;
                  lVar21 = 4;
                }
                if ((uVar31 & 2) != 0) {
                  *(undefined2 *)((long)plVar27 + lVar21) = *(undefined2 *)((long)plVar19 + lVar21);
                  lVar21 = lVar21 + 2;
                }
                if ((uVar31 & 1) != 0) {
                  *(undefined1 *)((long)plVar27 + lVar21) = *(undefined1 *)((long)plVar19 + lVar21);
                }
              }
              else {
                local_238[0] = plVar12[2];
                local_248 = (long *)*plVar12;
              }
              plVar27 = local_248;
              local_240 = plVar12[1];
              *plVar12 = (long)plVar3;
              plVar12[1] = 0;
              *(undefined1 *)(plVar12 + 2) = 0;
              local_1a8 = uVar11;
              local_1a0 = local_190;
              if (local_248 == (long *)0x0) goto LAB_0011941f;
              sVar13 = strlen((char *)local_248);
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_construct<char_const*>(&local_1a8,plVar27,(long)plVar27 + sVar13);
              std::__cxx11::string::_M_dispose();
              std::__cxx11::string::_M_dispose();
              TInfoSinkBase::message(*(undefined8 *)(this + 0x158),3,local_1a0);
              *param_6 = '\x01';
              break;
            }
            uVar9 = *(uint *)(uVar4 + uVar28 * 8);
            if (uVar20 == uVar9) {
              uVar20 = uVar9;
              if (uVar24 == ((uint *)(uVar4 + uVar28 * 8))[1]) goto LAB_001183a0;
joined_r0x00118f6c:
              uVar9 = uVar20;
              if (puVar5 == local_190) goto LAB_00118463;
            }
            else {
              if ((int)uVar9 <= (int)uVar20) goto joined_r0x00118f6c;
LAB_00118463:
              uVar31 = (ulong)uVar9;
            }
            uVar11 = glslang::GetThreadPoolAllocator();
            uVar24 = (uint)uVar31;
            if ((int)uVar24 < 10) {
              local_268[0] = local_258;
              std::__cxx11::string::_M_construct((ulong)local_268,'\x01');
              goto LAB_0011864a;
            }
            if (99 < (int)uVar24) {
              if ((int)uVar24 < 1000) {
                uVar20 = 2;
                cVar29 = '\x03';
LAB_00119237:
                local_268[0] = local_258;
                std::__cxx11::string::_M_construct((ulong)local_268,cVar29);
              }
              else {
                if ((int)uVar24 < 10000) {
                  uVar20 = 3;
                  cVar29 = '\x04';
                  goto LAB_00119237;
                }
                if (uVar24 < 100000) {
                  uVar20 = 5;
LAB_00119230:
                  cVar29 = (char)uVar20;
                  uVar20 = uVar20 - 1;
                  goto LAB_00119237;
                }
                if (999999 < uVar24) {
                  uVar20 = 6;
                  cVar29 = '\a';
                  if (9999999 < uVar24) {
                    if (99999999 < uVar24) {
                      uVar20 = 9;
                      if (uVar31 < 1000000000) goto LAB_00119230;
                      goto LAB_001184f0;
                    }
                    uVar20 = 7;
                    cVar29 = '\b';
                  }
                  goto LAB_00119237;
                }
                uVar20 = 5;
LAB_001184f0:
                local_268[0] = local_258;
                std::__cxx11::string::_M_construct((ulong)local_268,(char)uVar20 + '\x01');
              }
              local_118[0] = _LC40[0x40];
              local_118[1] = _LC40[0x41];
              local_118[2] = _LC40[0x42];
              local_118[3] = _LC40[0x43];
              local_118[4] = _LC40[0x44];
              local_118[5] = _LC40[0x45];
              local_118[6] = _LC40[0x46];
              local_118[7] = _LC40[0x47];
              acStack_110[0] = _LC40[0x48];
              acStack_110[1] = _LC40[0x49];
              acStack_110[2] = _LC40[0x4a];
              acStack_110[3] = _LC40[0x4b];
              acStack_110[4] = _LC40[0x4c];
              acStack_110[5] = _LC40[0x4d];
              acStack_110[6] = _LC40[0x4e];
              acStack_110[7] = _LC40[0x4f];
              local_108[0] = _LC40[0x50];
              local_108[1] = _LC40[0x51];
              local_108[2] = _LC40[0x52];
              local_108[3] = _LC40[0x53];
              local_108[4] = _LC40[0x54];
              local_108[5] = _LC40[0x55];
              local_108[6] = _LC40[0x56];
              local_108[7] = _LC40[0x57];
              acStack_100[0] = _LC40[0x58];
              acStack_100[1] = _LC40[0x59];
              acStack_100[2] = _LC40[0x5a];
              acStack_100[3] = _LC40[0x5b];
              acStack_100[4] = _LC40[0x5c];
              acStack_100[5] = _LC40[0x5d];
              acStack_100[6] = _LC40[0x5e];
              acStack_100[7] = _LC40[0x5f];
              local_f8[0] = _LC40[0x60];
              local_f8[1] = _LC40[0x61];
              local_f8[2] = _LC40[0x62];
              local_f8[3] = _LC40[99];
              local_f8[4] = _LC40[100];
              local_f8[5] = _LC40[0x65];
              local_f8[6] = _LC40[0x66];
              local_f8[7] = _LC40[0x67];
              acStack_f0[0] = _LC40[0x68];
              acStack_f0[1] = _LC40[0x69];
              acStack_f0[2] = _LC40[0x6a];
              acStack_f0[3] = _LC40[0x6b];
              acStack_f0[4] = _LC40[0x6c];
              acStack_f0[5] = _LC40[0x6d];
              acStack_f0[6] = _LC40[0x6e];
              acStack_f0[7] = _LC40[0x6f];
              local_e8[0] = _LC40[0x70];
              local_e8[1] = _LC40[0x71];
              local_e8[2] = _LC40[0x72];
              local_e8[3] = _LC40[0x73];
              local_e8[4] = _LC40[0x74];
              local_e8[5] = _LC40[0x75];
              local_e8[6] = _LC40[0x76];
              local_e8[7] = _LC40[0x77];
              acStack_e0[0] = _LC40[0x78];
              acStack_e0[1] = _LC40[0x79];
              acStack_e0[2] = _LC40[0x7a];
              acStack_e0[3] = _LC40[0x7b];
              acStack_e0[4] = _LC40[0x7c];
              acStack_e0[5] = _LC40[0x7d];
              acStack_e0[6] = _LC40[0x7e];
              acStack_e0[7] = _LC40[0x7f];
              local_d8[0] = _LC40[0x80];
              local_d8[1] = _LC40[0x81];
              local_d8[2] = _LC40[0x82];
              local_d8[3] = _LC40[0x83];
              local_d8[4] = _LC40[0x84];
              local_d8[5] = _LC40[0x85];
              local_d8[6] = _LC40[0x86];
              local_d8[7] = _LC40[0x87];
              acStack_d0[0] = _LC40[0x88];
              acStack_d0[1] = _LC40[0x89];
              acStack_d0[2] = _LC40[0x8a];
              acStack_d0[3] = _LC40[0x8b];
              acStack_d0[4] = _LC40[0x8c];
              acStack_d0[5] = _LC40[0x8d];
              acStack_d0[6] = _LC40[0x8e];
              acStack_d0[7] = _LC40[0x8f];
              local_c8[0] = _LC40[0x90];
              local_c8[1] = _LC40[0x91];
              local_c8[2] = _LC40[0x92];
              local_c8[3] = _LC40[0x93];
              local_c8[4] = _LC40[0x94];
              local_c8[5] = _LC40[0x95];
              local_c8[6] = _LC40[0x96];
              local_c8[7] = _LC40[0x97];
              acStack_c0[0] = _LC40[0x98];
              acStack_c0[1] = _LC40[0x99];
              acStack_c0[2] = _LC40[0x9a];
              acStack_c0[3] = _LC40[0x9b];
              acStack_c0[4] = _LC40[0x9c];
              acStack_c0[5] = _LC40[0x9d];
              acStack_c0[6] = _LC40[0x9e];
              acStack_c0[7] = _LC40[0x9f];
              local_b8[0] = _LC40[0xa0];
              local_b8[1] = _LC40[0xa1];
              local_b8[2] = _LC40[0xa2];
              local_b8[3] = _LC40[0xa3];
              local_b8[4] = _LC40[0xa4];
              local_b8[5] = _LC40[0xa5];
              local_b8[6] = _LC40[0xa6];
              local_b8[7] = _LC40[0xa7];
              acStack_b0[0] = _LC40[0xa8];
              acStack_b0[1] = _LC40[0xa9];
              acStack_b0[2] = _LC40[0xaa];
              acStack_b0[3] = _LC40[0xab];
              acStack_b0[4] = _LC40[0xac];
              acStack_b0[5] = _LC40[0xad];
              acStack_b0[6] = _LC40[0xae];
              acStack_b0[7] = _LC40[0xaf];
              local_a8[0] = _LC40[0xb0];
              local_a8[1] = _LC40[0xb1];
              local_a8[2] = _LC40[0xb2];
              local_a8[3] = _LC40[0xb3];
              local_a8[4] = _LC40[0xb4];
              local_a8[5] = _LC40[0xb5];
              local_a8[6] = _LC40[0xb6];
              local_a8[7] = _LC40[0xb7];
              acStack_a0[0] = _LC40[0xb8];
              acStack_a0[1] = _LC40[0xb9];
              acStack_a0[2] = _LC40[0xba];
              acStack_a0[3] = _LC40[0xbb];
              acStack_a0[4] = _LC40[0xbc];
              acStack_a0[5] = _LC40[0xbd];
              acStack_a0[6] = _LC40[0xbe];
              acStack_a0[7] = _LC40[0xbf];
              local_98[0] = _LC40[0xc0];
              local_98[1] = _LC40[0xc1];
              local_98[2] = _LC40[0xc2];
              local_98[3] = _LC40[0xc3];
              local_98[4] = _LC40[0xc4];
              local_98[5] = _LC40[0xc5];
              local_98[6] = _LC40[0xc6];
              local_98[7] = _LC40[199];
              acStack_90[0] = _LC40[200];
              acStack_90[1] = _LC40[0xc9];
              acStack_90[2] = _LC40[0xca];
              acStack_90[3] = _LC40[0xcb];
              acStack_90[4] = _LC40[0xcc];
              acStack_90[5] = _LC40[0xcd];
              acStack_90[6] = _LC40[0xce];
              acStack_90[7] = _LC40[0xcf];
              local_88[0] = _LC40[0xd0];
              local_88[1] = _LC40[0xd1];
              local_88[2] = _LC40[0xd2];
              local_88[3] = _LC40[0xd3];
              local_88[4] = _LC40[0xd4];
              local_88[5] = _LC40[0xd5];
              local_88[6] = _LC40[0xd6];
              local_88[7] = _LC40[0xd7];
              acStack_80[0] = _LC40[0xd8];
              acStack_80[1] = _LC40[0xd9];
              acStack_80[2] = _LC40[0xda];
              acStack_80[3] = _LC40[0xdb];
              acStack_80[4] = _LC40[0xdc];
              acStack_80[5] = _LC40[0xdd];
              acStack_80[6] = _LC40[0xde];
              acStack_80[7] = _LC40[0xdf];
              local_78[0] = _LC40[0xe0];
              local_78[1] = _LC40[0xe1];
              local_78[2] = _LC40[0xe2];
              local_78[3] = _LC40[0xe3];
              local_78[4] = _LC40[0xe4];
              local_78[5] = _LC40[0xe5];
              local_78[6] = _LC40[0xe6];
              local_78[7] = _LC40[0xe7];
              acStack_70[0] = _LC40[0xe8];
              acStack_70[1] = _LC40[0xe9];
              acStack_70[2] = _LC40[0xea];
              acStack_70[3] = _LC40[0xeb];
              acStack_70[4] = _LC40[0xec];
              acStack_70[5] = _LC40[0xed];
              acStack_70[6] = _LC40[0xee];
              acStack_70[7] = _LC40[0xef];
              local_68[0] = _LC40[0xf0];
              local_68[1] = _LC40[0xf1];
              local_68[2] = _LC40[0xf2];
              local_68[3] = _LC40[0xf3];
              local_68[4] = _LC40[0xf4];
              local_68[5] = _LC40[0xf5];
              local_68[6] = _LC40[0xf6];
              local_68[7] = _LC40[0xf7];
              cStack_60 = (char)_LC40._248_8_;
              uStack_5f = (undefined7)_LC40._256_8_;
              cStack_58 = SUB81(_LC40._256_8_,7);
              acStack_57[0] = _LC40[0x108];
              acStack_57[1] = _LC40[0x109];
              acStack_57[2] = _LC40[0x10a];
              acStack_57[3] = _LC40[0x10b];
              acStack_57[4] = _LC40[0x10c];
              acStack_57[5] = _LC40[0x10d];
              acStack_57[6] = _LC40[0x10e];
              acStack_57[7] = _LC40[0x10f];
              do {
                uVar24 = (uint)(uVar31 / 100);
                uVar8 = (uint)uVar31;
                uVar9 = (uVar8 + uVar24 * -100) * 2;
                cVar29 = local_118[uVar9];
                local_268[0][uVar20] = local_118[uVar9 + 1];
                uVar9 = uVar20 - 1;
                uVar20 = uVar20 - 2;
                local_268[0][uVar9] = cVar29;
                uVar31 = uVar31 / 100;
              } while (9999 < uVar8);
              if (uVar8 < 1000) {
LAB_0011864a:
                cVar29 = (char)uVar24 + '0';
              }
              else {
LAB_001190be:
                cVar29 = local_118[uVar24 * 2];
                local_268[0][1] = local_118[uVar24 * 2 + 1];
                local_118 = (char  [8])_LC40._64_8_;
                acStack_110 = (char  [8])_LC40._72_8_;
                local_108 = (char  [8])_LC40._80_8_;
                acStack_100 = (char  [8])_LC40._88_8_;
                local_f8 = (char  [8])_LC40._96_8_;
                acStack_f0 = (char  [8])_LC40._104_8_;
                local_e8 = (char  [8])_LC40._112_8_;
                acStack_e0 = (char  [8])_LC40._120_8_;
                local_d8 = (char  [8])_LC40._128_8_;
                acStack_d0 = (char  [8])_LC40._136_8_;
                local_c8 = (char  [8])_LC40._144_8_;
                acStack_c0 = (char  [8])_LC40._152_8_;
                local_b8 = (char  [8])_LC40._160_8_;
                acStack_b0 = (char  [8])_LC40._168_8_;
                local_a8 = (char  [8])_LC40._176_8_;
                acStack_a0 = (char  [8])_LC40._184_8_;
                local_98 = (char  [8])_LC40._192_8_;
                acStack_90 = (char  [8])_LC40._200_8_;
                local_88 = (char  [8])_LC40._208_8_;
                acStack_80 = (char  [8])_LC40._216_8_;
                local_78 = (char  [8])_LC40._224_8_;
                acStack_70 = (char  [8])_LC40._232_8_;
                local_68 = (char  [8])_LC40._240_8_;
                acStack_57._0_8_ = _LC40._264_8_;
              }
              *local_268[0] = cVar29;
              plVar12 = (long *)std::__cxx11::string::_M_replace
                                          ((ulong)local_268,0,(char *)0x0,0x117ac0);
              local_288 = local_278;
              plVar3 = plVar12 + 2;
              if ((long *)*plVar12 == plVar3) {
                uVar31 = plVar12[1] + 1;
                plVar19 = plVar3;
                plVar27 = local_288;
                if (7 < (uint)uVar31) {
                  uVar28 = 0;
                  do {
                    uVar24 = (int)uVar28 + 8;
                    uVar18 = (ulong)uVar24;
                    *(undefined8 *)((long)local_288 + uVar28) =
                         *(undefined8 *)((long)plVar3 + uVar28);
                    uVar28 = uVar18;
                  } while (uVar24 < ((uint)uVar31 & 0xfffffff8));
                  plVar27 = (long *)((long)local_288 + uVar18);
                  plVar19 = (long *)(uVar18 + (long)plVar3);
                }
                lVar21 = 0;
                if ((uVar31 & 4) != 0) {
                  *(undefined4 *)plVar27 = *(undefined4 *)plVar19;
                  lVar21 = 4;
                }
                if ((uVar31 & 2) != 0) {
                  *(undefined2 *)((long)plVar27 + lVar21) = *(undefined2 *)((long)plVar19 + lVar21);
                  lVar21 = lVar21 + 2;
                }
                if ((uVar31 & 1) != 0) {
                  *(undefined1 *)((long)plVar27 + lVar21) = *(undefined1 *)((long)plVar19 + lVar21);
                }
              }
              else {
                local_278[0] = plVar12[2];
                local_288 = (long *)*plVar12;
              }
              plVar27 = local_288;
              local_280 = plVar12[1];
              *plVar12 = (long)plVar3;
              plVar12[1] = 0;
              local_1d0 = local_1c0;
              *(undefined1 *)(plVar12 + 2) = 0;
              local_1d8 = uVar11;
              if (local_288 == (long *)0x0) {
LAB_0011941f:
                    /* WARNING: Subroutine does not return */
                std::__throw_logic_error("basic_string: construction from null is not valid");
              }
              sVar13 = strlen((char *)local_288);
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_construct<char_const*>(&local_1d8,plVar27,(long)plVar27 + sVar13);
              std::__cxx11::string::_M_dispose();
              std::__cxx11::string::_M_dispose();
              pcVar23 = *(char **)(this + 0x158);
              goto LAB_00118c9d;
            }
            local_268[0] = local_258;
            std::__cxx11::string::_M_construct((ulong)local_268,'\x02');
            local_118[0] = _LC40[0x40];
            local_118[1] = _LC40[0x41];
            local_118[2] = _LC40[0x42];
            local_118[3] = _LC40[0x43];
            local_118[4] = _LC40[0x44];
            local_118[5] = _LC40[0x45];
            local_118[6] = _LC40[0x46];
            local_118[7] = _LC40[0x47];
            acStack_110[0] = _LC40[0x48];
            acStack_110[1] = _LC40[0x49];
            acStack_110[2] = _LC40[0x4a];
            acStack_110[3] = _LC40[0x4b];
            acStack_110[4] = _LC40[0x4c];
            acStack_110[5] = _LC40[0x4d];
            acStack_110[6] = _LC40[0x4e];
            acStack_110[7] = _LC40[0x4f];
            local_108[0] = _LC40[0x50];
            local_108[1] = _LC40[0x51];
            local_108[2] = _LC40[0x52];
            local_108[3] = _LC40[0x53];
            local_108[4] = _LC40[0x54];
            local_108[5] = _LC40[0x55];
            local_108[6] = _LC40[0x56];
            local_108[7] = _LC40[0x57];
            acStack_100[0] = _LC40[0x58];
            acStack_100[1] = _LC40[0x59];
            acStack_100[2] = _LC40[0x5a];
            acStack_100[3] = _LC40[0x5b];
            acStack_100[4] = _LC40[0x5c];
            acStack_100[5] = _LC40[0x5d];
            acStack_100[6] = _LC40[0x5e];
            acStack_100[7] = _LC40[0x5f];
            local_f8[0] = _LC40[0x60];
            local_f8[1] = _LC40[0x61];
            local_f8[2] = _LC40[0x62];
            local_f8[3] = _LC40[99];
            local_f8[4] = _LC40[100];
            local_f8[5] = _LC40[0x65];
            local_f8[6] = _LC40[0x66];
            local_f8[7] = _LC40[0x67];
            acStack_f0[0] = _LC40[0x68];
            acStack_f0[1] = _LC40[0x69];
            acStack_f0[2] = _LC40[0x6a];
            acStack_f0[3] = _LC40[0x6b];
            acStack_f0[4] = _LC40[0x6c];
            acStack_f0[5] = _LC40[0x6d];
            acStack_f0[6] = _LC40[0x6e];
            acStack_f0[7] = _LC40[0x6f];
            local_e8[0] = _LC40[0x70];
            local_e8[1] = _LC40[0x71];
            local_e8[2] = _LC40[0x72];
            local_e8[3] = _LC40[0x73];
            local_e8[4] = _LC40[0x74];
            local_e8[5] = _LC40[0x75];
            local_e8[6] = _LC40[0x76];
            local_e8[7] = _LC40[0x77];
            acStack_e0[0] = _LC40[0x78];
            acStack_e0[1] = _LC40[0x79];
            acStack_e0[2] = _LC40[0x7a];
            acStack_e0[3] = _LC40[0x7b];
            acStack_e0[4] = _LC40[0x7c];
            acStack_e0[5] = _LC40[0x7d];
            acStack_e0[6] = _LC40[0x7e];
            acStack_e0[7] = _LC40[0x7f];
            local_d8[0] = _LC40[0x80];
            local_d8[1] = _LC40[0x81];
            local_d8[2] = _LC40[0x82];
            local_d8[3] = _LC40[0x83];
            local_d8[4] = _LC40[0x84];
            local_d8[5] = _LC40[0x85];
            local_d8[6] = _LC40[0x86];
            local_d8[7] = _LC40[0x87];
            acStack_d0[0] = _LC40[0x88];
            acStack_d0[1] = _LC40[0x89];
            acStack_d0[2] = _LC40[0x8a];
            acStack_d0[3] = _LC40[0x8b];
            acStack_d0[4] = _LC40[0x8c];
            acStack_d0[5] = _LC40[0x8d];
            acStack_d0[6] = _LC40[0x8e];
            acStack_d0[7] = _LC40[0x8f];
            local_c8[0] = _LC40[0x90];
            local_c8[1] = _LC40[0x91];
            local_c8[2] = _LC40[0x92];
            local_c8[3] = _LC40[0x93];
            local_c8[4] = _LC40[0x94];
            local_c8[5] = _LC40[0x95];
            local_c8[6] = _LC40[0x96];
            local_c8[7] = _LC40[0x97];
            acStack_c0[0] = _LC40[0x98];
            acStack_c0[1] = _LC40[0x99];
            acStack_c0[2] = _LC40[0x9a];
            acStack_c0[3] = _LC40[0x9b];
            acStack_c0[4] = _LC40[0x9c];
            acStack_c0[5] = _LC40[0x9d];
            acStack_c0[6] = _LC40[0x9e];
            acStack_c0[7] = _LC40[0x9f];
            local_b8[0] = _LC40[0xa0];
            local_b8[1] = _LC40[0xa1];
            local_b8[2] = _LC40[0xa2];
            local_b8[3] = _LC40[0xa3];
            local_b8[4] = _LC40[0xa4];
            local_b8[5] = _LC40[0xa5];
            local_b8[6] = _LC40[0xa6];
            local_b8[7] = _LC40[0xa7];
            acStack_b0[0] = _LC40[0xa8];
            acStack_b0[1] = _LC40[0xa9];
            acStack_b0[2] = _LC40[0xaa];
            acStack_b0[3] = _LC40[0xab];
            acStack_b0[4] = _LC40[0xac];
            acStack_b0[5] = _LC40[0xad];
            acStack_b0[6] = _LC40[0xae];
            acStack_b0[7] = _LC40[0xaf];
            local_a8[0] = _LC40[0xb0];
            local_a8[1] = _LC40[0xb1];
            local_a8[2] = _LC40[0xb2];
            local_a8[3] = _LC40[0xb3];
            local_a8[4] = _LC40[0xb4];
            local_a8[5] = _LC40[0xb5];
            local_a8[6] = _LC40[0xb6];
            local_a8[7] = _LC40[0xb7];
            acStack_a0[0] = _LC40[0xb8];
            acStack_a0[1] = _LC40[0xb9];
            acStack_a0[2] = _LC40[0xba];
            acStack_a0[3] = _LC40[0xbb];
            acStack_a0[4] = _LC40[0xbc];
            acStack_a0[5] = _LC40[0xbd];
            acStack_a0[6] = _LC40[0xbe];
            acStack_a0[7] = _LC40[0xbf];
            local_98[0] = _LC40[0xc0];
            local_98[1] = _LC40[0xc1];
            local_98[2] = _LC40[0xc2];
            local_98[3] = _LC40[0xc3];
            local_98[4] = _LC40[0xc4];
            local_98[5] = _LC40[0xc5];
            local_98[6] = _LC40[0xc6];
            local_98[7] = _LC40[199];
            acStack_90[0] = _LC40[200];
            acStack_90[1] = _LC40[0xc9];
            acStack_90[2] = _LC40[0xca];
            acStack_90[3] = _LC40[0xcb];
            acStack_90[4] = _LC40[0xcc];
            acStack_90[5] = _LC40[0xcd];
            acStack_90[6] = _LC40[0xce];
            acStack_90[7] = _LC40[0xcf];
            local_88[0] = _LC40[0xd0];
            local_88[1] = _LC40[0xd1];
            local_88[2] = _LC40[0xd2];
            local_88[3] = _LC40[0xd3];
            local_88[4] = _LC40[0xd4];
            local_88[5] = _LC40[0xd5];
            local_88[6] = _LC40[0xd6];
            local_88[7] = _LC40[0xd7];
            acStack_80[0] = _LC40[0xd8];
            acStack_80[1] = _LC40[0xd9];
            acStack_80[2] = _LC40[0xda];
            acStack_80[3] = _LC40[0xdb];
            acStack_80[4] = _LC40[0xdc];
            acStack_80[5] = _LC40[0xdd];
            acStack_80[6] = _LC40[0xde];
            acStack_80[7] = _LC40[0xdf];
            local_78[0] = _LC40[0xe0];
            local_78[1] = _LC40[0xe1];
            local_78[2] = _LC40[0xe2];
            local_78[3] = _LC40[0xe3];
            local_78[4] = _LC40[0xe4];
            local_78[5] = _LC40[0xe5];
            local_78[6] = _LC40[0xe6];
            local_78[7] = _LC40[0xe7];
            acStack_70[0] = _LC40[0xe8];
            acStack_70[1] = _LC40[0xe9];
            acStack_70[2] = _LC40[0xea];
            acStack_70[3] = _LC40[0xeb];
            acStack_70[4] = _LC40[0xec];
            acStack_70[5] = _LC40[0xed];
            acStack_70[6] = _LC40[0xee];
            acStack_70[7] = _LC40[0xef];
            local_68[0] = _LC40[0xf0];
            local_68[1] = _LC40[0xf1];
            local_68[2] = _LC40[0xf2];
            local_68[3] = _LC40[0xf3];
            local_68[4] = _LC40[0xf4];
            local_68[5] = _LC40[0xf5];
            local_68[6] = _LC40[0xf6];
            local_68[7] = _LC40[0xf7];
            cStack_60 = (char)_LC40._248_8_;
            uStack_5f = (undefined7)_LC40._256_8_;
            cStack_58 = SUB81(_LC40._256_8_,7);
            acStack_57[0] = _LC40[0x108];
            acStack_57[1] = _LC40[0x109];
            acStack_57[2] = _LC40[0x10a];
            acStack_57[3] = _LC40[0x10b];
            acStack_57[4] = _LC40[0x10c];
            acStack_57[5] = _LC40[0x10d];
            acStack_57[6] = _LC40[0x10e];
            acStack_57[7] = _LC40[0x10f];
            goto LAB_001190be;
          }
LAB_00118340:
          if ((long *)uVar6 == local_2e8) {
            std::vector<glslang::TRange,std::allocator<glslang::TRange>>::
            _M_realloc_insert<glslang::TRange_const&>
                      ((vector<glslang::TRange,std::allocator<glslang::TRange>> *)local_2f8,uVar6,
                       &local_300);
          }
          else {
            *(ulong **)uVar6 = local_300;
            local_2f8._8_8_ = (long *)(uVar6 + 8);
          }
          if ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              local_2d8._8_8_ == local_2c8) {
            std::
            vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
            ::
            _M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>
                      ((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                        *)local_2d8,local_2d8._8_8_,&local_208);
          }
          else {
            pbVar25 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      (local_2d8._8_8_ + 0x28);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                         local_2d8._8_8_,(basic_string *)&local_208);
            local_2d8._8_8_ = pbVar25;
          }
        }
LAB_001183a0:
        if (*(code **)(*plVar3 + 0x100) == TIntermTyped::getBasicType) {
          uVar24 = (uint)*(byte *)(plVar3 + 5);
        }
        else {
          uVar24 = (**(code **)(*plVar3 + 0x100))(plVar3);
        }
        if (uVar24 == 0x10) {
          if (*(code **)(*plVar3 + 400) == TIntermSymbol::getName_abi_cxx11_) {
            plVar12 = plVar3 + 0x19;
          }
          else {
            plVar12 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
          }
          uVar11 = plVar12[2];
          if (uVar11 != 0) {
            sVar13 = 5;
            if (uVar11 < 6) {
              sVar13 = uVar11;
            }
            iVar7 = memcmp((void *)plVar12[1],"anon@",sVar13);
            if (iVar7 == 0 && (int)sVar13 == 5) {
              if (*(code **)(*plVar3 + 0xf0) == TIntermTyped::getType) {
                plVar12 = plVar3 + 4;
              }
              else {
                plVar12 = (long *)(**(code **)(*plVar3 + 0xf0))(plVar3);
              }
              lVar10 = plVar12[0xd];
              lVar35 = *(long *)(lVar10 + 8);
              if (*(long *)(lVar10 + 0x10) != lVar35) {
                local_378 = 0;
                do {
                  plVar12 = *(long **)(lVar35 + local_378 * 0x20);
                  pcVar2 = *(code **)(*plVar12 + 0x30);
                  if (pcVar2 == TType::getFieldName_abi_cxx11_) {
                    lVar35 = plVar12[0xe];
                  }
                  else {
                    lVar35 = (*pcVar2)();
                  }
                  local_1d8 = glslang::GetThreadPoolAllocator();
                  puVar1 = *(undefined1 **)(lVar35 + 8);
                  uVar11 = *(ulong *)(lVar35 + 0x10);
                  local_1d0 = local_1c0;
                  if (uVar11 < 0x10) {
                    if (uVar11 == 1) {
                      local_1c0[0] = CONCAT71(local_1c0[0]._1_7_,*puVar1);
                    }
                    else if (uVar11 != 0) goto LAB_00118da8;
                  }
                  else {
                    if ((long)uVar11 < 0) goto LAB_00119394;
                    local_1d0 = (ulong *)glslang::TPoolAllocator::allocate(local_1d8);
                    local_1c0[0] = uVar11;
LAB_00118da8:
                    memcpy(local_1d0,puVar1,uVar11);
                  }
                  puVar5 = local_1d0;
                  *(undefined1 *)((long)local_1d0 + uVar11) = 0;
                  p_Var15 = local_2a8;
                  p_Var33 = (_Rb_tree_node *)local_2b0;
                  local_1c8 = uVar11;
                  if (local_2a8 != (_Rb_tree_node *)0x0) {
                    do {
                      while( true ) {
                        p_Var22 = p_Var15;
                        uVar31 = *(ulong *)(p_Var22 + 0x30);
                        uVar28 = uVar11;
                        if (uVar31 <= uVar11) {
                          uVar28 = uVar31;
                        }
                        if ((uVar28 != 0) &&
                           (iVar7 = memcmp(*(void **)(p_Var22 + 0x28),puVar5,uVar28), iVar7 != 0))
                        break;
                        lVar35 = uVar31 - uVar11;
                        if (lVar35 < 0x80000000) {
                          if (-0x80000001 < lVar35) {
                            iVar7 = (int)lVar35;
                            break;
                          }
                          goto LAB_001188d0;
                        }
LAB_00118918:
                        p_Var15 = *(_Rb_tree_node **)(p_Var22 + 0x10);
                        p_Var33 = p_Var22;
                        if (*(_Rb_tree_node **)(p_Var22 + 0x10) == (_Rb_tree_node *)0x0)
                        goto LAB_00118925;
                      }
                      if (-1 < iVar7) goto LAB_00118918;
LAB_001188d0:
                      p_Var15 = *(_Rb_tree_node **)(p_Var22 + 0x18);
                    } while (*(_Rb_tree_node **)(p_Var22 + 0x18) != (_Rb_tree_node *)0x0);
LAB_00118925:
                    if (p_Var33 == (_Rb_tree_node *)local_2b0) goto LAB_00118979;
                    uVar31 = *(ulong *)(p_Var33 + 0x30);
                    uVar28 = uVar11;
                    if (uVar31 <= uVar11) {
                      uVar28 = uVar31;
                    }
                    if ((uVar28 == 0) ||
                       (iVar7 = memcmp(puVar5,*(void **)(p_Var33 + 0x28),uVar28), iVar7 == 0)) {
                      lVar35 = uVar11 - uVar31;
                      if (lVar35 < 0x80000000) {
                        if (lVar35 < -0x80000000) goto LAB_00118979;
                        iVar7 = (int)lVar35;
                        goto LAB_00118971;
                      }
                    }
                    else {
LAB_00118971:
                      if (iVar7 < 0) goto LAB_00118979;
                    }
                    plVar12 = plVar3 + 4;
                    if (*(code **)(*plVar3 + 0xf0) != TIntermTyped::getType) {
                      plVar12 = (long *)(**(code **)(*plVar3 + 0xf0))(plVar3);
                    }
                    p_Var15 = (_Rb_tree_node *)local_2b0;
                    if (*(code **)(*plVar12 + 0x28) == TType::getTypeName_abi_cxx11_) {
                      lVar35 = plVar12[0xf];
                      p_Var33 = local_2a8;
                      uVar11 = local_1c8;
                      puVar5 = local_1d0;
                      if (local_2a8 == (_Rb_tree_node *)0x0) goto LAB_00118c34;
LAB_00118b91:
                      do {
                        while( true ) {
                          uVar31 = *(ulong *)(p_Var33 + 0x30);
                          uVar28 = uVar11;
                          if (uVar31 <= uVar11) {
                            uVar28 = uVar31;
                          }
                          if ((uVar28 != 0) &&
                             (iVar7 = memcmp(*(void **)(p_Var33 + 0x28),puVar5,uVar28), iVar7 != 0))
                          break;
                          lVar32 = uVar31 - uVar11;
                          if (lVar32 < 0x80000000) {
                            if (-0x80000001 < lVar32) {
                              iVar7 = (int)lVar32;
                              break;
                            }
                            goto LAB_00118b88;
                          }
LAB_00118bcd:
                          p_Var22 = p_Var33 + 0x10;
                          p_Var15 = p_Var33;
                          p_Var33 = *(_Rb_tree_node **)p_Var22;
                          if (*(_Rb_tree_node **)p_Var22 == (_Rb_tree_node *)0x0) goto LAB_00118bd9;
                        }
                        if (-1 < iVar7) goto LAB_00118bcd;
LAB_00118b88:
                        p_Var22 = p_Var33 + 0x18;
                        p_Var33 = *(_Rb_tree_node **)p_Var22;
                      } while (*(_Rb_tree_node **)p_Var22 != (_Rb_tree_node *)0x0);
LAB_00118bd9:
                      if (p_Var15 == (_Rb_tree_node *)local_2b0) goto LAB_00118c34;
                      uVar31 = *(ulong *)(p_Var15 + 0x30);
                      uVar28 = uVar11;
                      if (uVar31 <= uVar11) {
                        uVar28 = uVar31;
                      }
                      if ((uVar28 == 0) ||
                         (iVar7 = memcmp(puVar5,*(void **)(p_Var15 + 0x28),uVar28), iVar7 == 0)) {
                        lVar32 = uVar11 - uVar31;
                        if (lVar32 < 0x80000000) {
                          if (lVar32 < -0x80000000) goto LAB_00118c34;
                          iVar7 = (int)lVar32;
                          goto LAB_00118c30;
                        }
                      }
                      else {
LAB_00118c30:
                        if (iVar7 < 0) goto LAB_00118c34;
                      }
                    }
                    else {
                      lVar35 = (**(code **)(*plVar12 + 0x28))();
                      p_Var33 = local_2a8;
                      uVar11 = local_1c8;
                      puVar5 = local_1d0;
                      if (local_2a8 != (_Rb_tree_node *)0x0) goto LAB_00118b91;
LAB_00118c34:
                      local_300 = &local_1d8;
                      p_Var15 = (_Rb_tree_node *)
                                std::
                                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
                                ::
                                _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
                                          (local_2b8,p_Var15,&local_300);
                    }
                    sVar13 = *(size_t *)(p_Var15 + 0x58);
                    if (sVar13 == *(size_t *)(lVar35 + 0x10)) {
                      if ((sVar13 != 0) &&
                         (iVar7 = memcmp(*(void **)(p_Var15 + 0x50),*(void **)(lVar35 + 8),sVar13),
                         iVar7 != 0)) goto LAB_00118c68;
                      goto LAB_00118ad3;
                    }
LAB_00118c68:
                    std::operator+((char *)&local_1a8,(basic_string *)"Invalid block member name: ")
                    ;
                    pcVar23 = *(char **)(this + 0x158);
LAB_00118c9d:
                    glslang::TInfoSinkBase::append(pcVar23);
                    glslang::TInfoSinkBase::append(pcVar23);
                    glslang::TInfoSinkBase::append(pcVar23);
                    *param_6 = '\x01';
                    goto joined_r0x00117d4c;
                  }
LAB_00118979:
                  plVar12 = plVar3 + 4;
                  if (*(code **)(*plVar3 + 0xf0) != TIntermTyped::getType) {
                    plVar12 = (long *)(**(code **)(*plVar3 + 0xf0))(plVar3);
                  }
                  p_Var15 = (_Rb_tree_node *)local_2b0;
                  if (*(code **)(*plVar12 + 0x28) == TType::getTypeName_abi_cxx11_) {
                    pbVar17 = (basic_string *)plVar12[0xf];
                    p_Var33 = local_2a8;
                    uVar11 = local_1c8;
                    puVar5 = local_1d0;
                    if (local_2a8 == (_Rb_tree_node *)0x0) goto LAB_00118aa2;
LAB_00118a01:
                    do {
                      while( true ) {
                        p_Var22 = p_Var33;
                        uVar31 = *(ulong *)(p_Var22 + 0x30);
                        uVar28 = uVar11;
                        if (uVar31 <= uVar11) {
                          uVar28 = uVar31;
                        }
                        if ((uVar28 != 0) &&
                           (iVar7 = memcmp(*(void **)(p_Var22 + 0x28),puVar5,uVar28), iVar7 != 0))
                        break;
                        lVar35 = uVar31 - uVar11;
                        if (lVar35 < 0x80000000) {
                          if (-0x80000001 < lVar35) {
                            iVar7 = (int)lVar35;
                            break;
                          }
                          goto LAB_001189f8;
                        }
LAB_00118a3d:
                        p_Var33 = *(_Rb_tree_node **)(p_Var22 + 0x10);
                        p_Var15 = p_Var22;
                        if (*(_Rb_tree_node **)(p_Var22 + 0x10) == (_Rb_tree_node *)0x0)
                        goto LAB_00118a49;
                      }
                      if (-1 < iVar7) goto LAB_00118a3d;
LAB_001189f8:
                      p_Var33 = *(_Rb_tree_node **)(p_Var22 + 0x18);
                    } while (*(_Rb_tree_node **)(p_Var22 + 0x18) != (_Rb_tree_node *)0x0);
LAB_00118a49:
                    if (p_Var15 == (_Rb_tree_node *)local_2b0) goto LAB_00118aa2;
                    uVar31 = *(ulong *)(p_Var15 + 0x30);
                    uVar28 = uVar11;
                    if (uVar31 <= uVar11) {
                      uVar28 = uVar31;
                    }
                    if ((uVar28 == 0) ||
                       (iVar7 = memcmp(puVar5,*(void **)(p_Var15 + 0x28),uVar28), iVar7 == 0)) {
                      lVar35 = uVar11 - uVar31;
                      if (lVar35 < 0x80000000) {
                        if (lVar35 < -0x80000000) goto LAB_00118aa2;
                        iVar7 = (int)lVar35;
                        goto LAB_00118a9e;
                      }
                    }
                    else {
LAB_00118a9e:
                      if (iVar7 < 0) goto LAB_00118aa2;
                    }
                  }
                  else {
                    pbVar17 = (basic_string *)(**(code **)(*plVar12 + 0x28))();
                    p_Var33 = local_2a8;
                    uVar11 = local_1c8;
                    puVar5 = local_1d0;
                    if (local_2a8 != (_Rb_tree_node *)0x0) goto LAB_00118a01;
LAB_00118aa2:
                    local_300 = &local_1d8;
                    p_Var15 = (_Rb_tree_node *)
                              std::
                              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
                              ::
                              _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
                                        (local_2b8,p_Var15,&local_300);
                  }
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)(p_Var15 + 0x48),pbVar17);
LAB_00118ad3:
                  local_378 = local_378 + 1;
                  lVar35 = *(long *)(lVar10 + 8);
                } while (local_378 < (ulong)(*(long *)(lVar10 + 0x10) - lVar35 >> 5));
              }
            }
          }
        }
        if (*param_6 != '\0') break;
      }
    }
joined_r0x00117d4c:
    pTVar34 = pTVar34 + 8;
    if (pTVar34 == this + 0x150) {
      if ((void *)local_2d8._0_8_ != (void *)0x0) {
        operator_delete((void *)local_2d8._0_8_,(long)local_2c8 - local_2d8._0_8_);
      }
      if ((void *)local_2f8._0_8_ != (void *)0x0) {
        operator_delete((void *)local_2f8._0_8_,(long)local_2e8 - local_2f8._0_8_);
      }
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(local_2a8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
LAB_00118320:
  uVar28 = uVar28 + 1;
  puVar26 = puVar26 + 5;
  if ((ulong)(lVar10 >> 3) <= uVar28) goto LAB_00118340;
  goto LAB_00117f97;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
           *this,basic_string *param_1)

{
  void *__s1;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
  *p_Var8;
  _Rb_tree_node_base *p_Var9;
  basic_string *__s2;
  undefined1 auVar10 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var8 = this + 8;
LAB_00119564:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var8) {
      p_Var7 = (_Rb_tree_node_base *)0x0;
      p_Var9 = (_Rb_tree_node_base *)p_Var8;
      goto LAB_00119546;
    }
    p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var8);
    __s2 = *(basic_string **)(p_Var7 + 0x28);
  }
  else {
    __s1 = *(void **)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var8 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                *)p_Var7;
      uVar2 = *(ulong *)((_Rb_tree_node_base *)p_Var8 + 0x30);
      __s2 = *(basic_string **)((_Rb_tree_node_base *)p_Var8 + 0x28);
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar1;
      }
      if (uVar6 == 0) {
LAB_001194f7:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_00119515;
        if (-0x80000001 < (long)uVar6) goto LAB_00119511;
LAB_001194c0:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x10);
        bVar3 = true;
      }
      else {
        uVar4 = memcmp(__s1,__s2,uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_001194f7;
LAB_00119511:
        if ((int)uVar6 < 0) goto LAB_001194c0;
LAB_00119515:
        p_Var7 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var8 + 0x18);
        bVar3 = false;
      }
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
    p_Var7 = (_Rb_tree_node_base *)p_Var8;
    if (bVar3) goto LAB_00119564;
  }
  iVar5 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (__s2);
  p_Var9 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < 0) {
    p_Var9 = (_Rb_tree_node_base *)p_Var8;
    p_Var7 = (_Rb_tree_node_base *)0x0;
  }
LAB_00119546:
  auVar10._8_8_ = p_Var9;
  auVar10._0_8_ = p_Var7;
  return auVar10;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (iVar3 < 0) goto LAB_00119614;
    }
LAB_0011965e:
    auVar7 = _M_get_insert_unique_pos(this,param_3);
    return auVar7;
  }
  pbVar1 = *(basic_string **)(param_3 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x28);
  iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                    (pbVar1);
  if (iVar3 < 0) {
    p_Var6 = *(_Rb_tree_node_base **)(this + 0x18);
    p_Var4 = p_Var6;
    if (p_Var6 != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
              compare(*(basic_string **)(p_Var4 + 0x28));
      if (-1 < iVar3) goto LAB_0011965e;
      p_Var6 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(p_Var4 + 0x18) != 0) {
        p_Var6 = param_2;
        p_Var4 = param_2;
      }
    }
  }
  else {
    iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            compare(pbVar2);
    p_Var6 = param_2;
    p_Var4 = (_Rb_tree_node_base *)0x0;
    if (iVar3 < 0) {
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
        p_Var6 = (_Rb_tree_node_base *)0x0;
        p_Var4 = *(_Rb_tree_node_base **)(this + 0x20);
      }
      else {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        iVar3 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(pbVar1);
        if (-1 < iVar3) goto LAB_0011965e;
        p_Var6 = (_Rb_tree_node_base *)0x0;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var6 = p_Var5;
        }
        p_Var4 = param_2;
        if (*(long *)(param_2 + 0x18) != 0) {
          p_Var4 = p_Var5;
        }
      }
    }
  }
LAB_00119614:
  auVar7._8_8_ = p_Var4;
  auVar7._0_8_ = p_Var6;
  return auVar7;
}



/* std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int> >
   >::operator[](std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

_Rb_tree_node_base * __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
::operator[](map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
             *this,basic_string *param_1)

{
  _Rb_tree_node_base *p_Var1;
  basic_string *__s2;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte extraout_var;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  ulong __n;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  bool bVar9;
  undefined1 auVar10 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var8 = p_Var1;
  if (*(_Rb_tree_node_base **)(this + 0x10) != (_Rb_tree_node_base *)0x0) {
    __s2 = *(basic_string **)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      while( true ) {
        uVar3 = *(ulong *)(p_Var5 + 0x30);
        __n = uVar2;
        if (uVar3 <= uVar2) {
          __n = uVar3;
        }
        if ((__n != 0) && (iVar4 = memcmp(*(void **)(p_Var5 + 0x28),__s2,__n), iVar4 != 0)) break;
        lVar6 = uVar3 - uVar2;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar4 = (int)lVar6;
            break;
          }
          goto LAB_00119788;
        }
LAB_001197d4:
        p_Var7 = p_Var5 + 0x10;
        p_Var8 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)p_Var7;
        if (*(_Rb_tree_node_base **)p_Var7 == (_Rb_tree_node_base *)0x0) goto LAB_001197e0;
      }
      if (-1 < iVar4) goto LAB_001197d4;
LAB_00119788:
      p_Var5 = *(_Rb_tree_node_base **)(p_Var5 + 0x18);
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
LAB_001197e0:
    if ((p_Var1 != p_Var8) &&
       (iVar4 = __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                compare(__s2), -1 < iVar4)) goto LAB_001197fe;
  }
  p_Var5 = (_Rb_tree_node_base *)operator_new(0x50);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (p_Var5 + 0x20),param_1);
  *(undefined4 *)(p_Var5 + 0x48) = 0;
  auVar10 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>>
                        *)this,p_Var8,
                       (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       (p_Var5 + 0x20));
  p_Var7 = auVar10._8_8_;
  p_Var8 = auVar10._0_8_;
  if (p_Var7 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var5,0x50);
  }
  else {
    if ((p_Var8 == (_Rb_tree_node_base *)0x0) && (p_Var1 != p_Var7)) {
      __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::compare
                (*(basic_string **)(p_Var5 + 0x28));
      bVar9 = (bool)(extraout_var >> 7);
    }
    else {
      bVar9 = true;
    }
    std::_Rb_tree_insert_and_rebalance(bVar9,p_Var5,p_Var7,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var8 = p_Var5;
  }
LAB_001197fe:
  return p_Var8 + 0x48;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<glslang::TVarLivePair> >,
   std::is_move_constructible<glslang::TVarLivePair>, std::is_move_assignable<glslang::TVarLivePair>
   >::value, void>::type std::swap<glslang::TVarLivePair>(glslang::TVarLivePair&,
   glslang::TVarLivePair&) */

void std::swap<glslang::TVarLivePair>(TVarLivePair *param_1,TVarLivePair *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> abStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
            (abStack_78,(basic_string *)param_1);
  local_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  local_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(undefined8 *)(param_1 + 0x48);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
             (basic_string *)param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_2,
             (basic_string *)abStack_78);
  *(undefined8 *)(param_2 + 0x28) = local_50;
  *(undefined8 *)(param_2 + 0x30) = uStack_48;
  *(undefined8 *)(param_2 + 0x38) = local_40;
  *(undefined8 *)(param_2 + 0x40) = uStack_38;
  *(undefined8 *)(param_2 + 0x48) = local_30;
  *(undefined8 *)(param_2 + 0x50) = uStack_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSymbolValidater::TSymbolValidater(glslang::TIoMapResolver&, TInfoSink&,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TVarEntryInfo, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TVarEntryInfo> > >**,
   bool&, EProfile, int) */

void __thiscall glslang::TSymbolValidater::TSymbolValidater(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TGlslIoMapper::~TGlslIoMapper() */

void __thiscall glslang::TGlslIoMapper::~TGlslIoMapper(TGlslIoMapper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TDefaultIoResolver::~TDefaultIoResolver() */

void __thiscall glslang::TDefaultIoResolver::~TDefaultIoResolver(TDefaultIoResolver *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIoMapper::~TIoMapper() */

void __thiscall glslang::TIoMapper::~TIoMapper(TIoMapper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TVarGatherTraverser::~TVarGatherTraverser() */

void __thiscall glslang::TVarGatherTraverser::~TVarGatherTraverser(TVarGatherTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TVarSetTraverser::~TVarSetTraverser() */

void __thiscall glslang::TVarSetTraverser::~TVarSetTraverser(TVarSetTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TLiveTraverser::~TLiveTraverser() */

void __thiscall glslang::TLiveTraverser::~TLiveTraverser(TLiveTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     basic_string(basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver() */

void __thiscall
glslang::TDefaultGlslIoResolver::~TDefaultGlslIoResolver(TDefaultGlslIoResolver *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


