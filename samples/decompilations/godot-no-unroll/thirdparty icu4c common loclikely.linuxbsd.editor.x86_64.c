
/* icu_76_godot::RegionValidateMap::~RegionValidateMap() */

void __thiscall icu_76_godot::RegionValidateMap::~RegionValidateMap(RegionValidateMap *this)

{
  *(undefined ***)this = &PTR__RegionValidateMap_00101d10;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::RegionValidateMap::~RegionValidateMap() */

void __thiscall icu_76_godot::RegionValidateMap::~RegionValidateMap(RegionValidateMap *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__RegionValidateMap_00101d10;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* (anonymous namespace)::createTagStringWithAlternates(char const*, int, char const*, int, char
   const*, int, char const*, int, char const*, int, icu_76_godot::ByteSink&, UErrorCode&) */

void (anonymous_namespace)::createTagStringWithAlternates
               (char *param_1,int param_2,char *param_3,int param_4,char *param_5,int param_6,
               char *param_7,int param_8,char *param_9,int param_10,ByteSink *param_11,
               UErrorCode *param_12)

{
  long lVar1;
  
  if (0 < *(int *)param_12) {
    return;
  }
  if ((5 < param_4 || 3 < param_6) || (0xb < param_2)) {
    *(undefined4 *)param_12 = 1;
    return;
  }
  if (0 < param_2) {
    (**(code **)(*(long *)param_11 + 0x10))(param_11,param_1,param_2);
  }
  if (0 < param_4) {
    (**(code **)(*(long *)param_11 + 0x10))(param_11,&_LC0,1);
    (**(code **)(*(long *)param_11 + 0x10))(param_11,param_3,param_4);
  }
  if (param_6 < 1) {
    if (param_8 < 1) goto LAB_00100172;
    lVar1 = *(long *)param_11;
    if (param_6 == 0) {
      (**(code **)(lVar1 + 0x10))(param_11,&_LC0,1);
      lVar1 = *(long *)param_11;
    }
  }
  else {
    (**(code **)(*(long *)param_11 + 0x10))(param_11,&_LC0,1);
    (**(code **)(*(long *)param_11 + 0x10))(param_11,param_5,param_6);
    if (param_8 < 1) goto LAB_00100172;
    lVar1 = *(long *)param_11;
  }
  (**(code **)(lVar1 + 0x10))(param_11,&_LC0,1);
  (**(code **)(*(long *)param_11 + 0x10))(param_11,param_7,param_8);
LAB_00100172:
  if (param_10 < 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_11 + 0x10))(param_11,param_9,param_10);
  return;
}



/* (anonymous namespace)::_uloc_minimizeSubtags(char const*, icu_76_godot::ByteSink&, bool,
   UErrorCode&) */

void (anonymous_namespace)::_uloc_minimizeSubtags
               (char *param_1,ByteSink *param_2,bool param_3,UErrorCode *param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  size_t sVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  long local_160;
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    if (param_1 == (char *)0x0) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      local_148 = (long)&local_13c + 1;
      local_108 = (long)&local_fc + 1;
      local_13c = 0;
      local_c8 = (long)&local_bc + 1;
      local_88 = (char *)((long)&local_7c + 1);
      local_140 = 0x28;
      local_110 = 0;
      local_100 = 0x28;
      local_d0 = 0;
      local_fc = 0;
      local_c0 = 0x28;
      local_90 = 0;
      local_bc = 0;
      local_80 = 0x28;
      local_50 = 0;
      local_7c = 0;
      local_180 = (char *)0x0;
      ulocimp_getSubtags_76_godot
                (param_1,(CharString *)&local_148,(CharString *)&local_108,(CharString *)&local_c8,
                 (CharString *)&local_88,&local_180,param_4);
      if (*(int *)param_4 < 1) {
        if (0 < local_50) {
          iVar1 = 0;
          pcVar2 = local_88;
          do {
            while( true ) {
              if ((*pcVar2 != '_') && (*pcVar2 != '-')) break;
              pcVar2 = pcVar2 + 1;
              iVar1 = 0;
              if (local_88 + local_50 == pcVar2) goto LAB_0010038d;
            }
            if (iVar1 == 8) {
              *(undefined4 *)param_4 = 1;
              goto LAB_001003b0;
            }
            pcVar2 = pcVar2 + 1;
            iVar1 = iVar1 + 1;
          } while (local_88 + local_50 != pcVar2);
        }
LAB_0010038d:
        sVar3 = strlen(local_180);
        uVar4 = icu_76_godot::LikelySubtags::getSingleton(param_4);
        if (*(int *)param_4 < 1) {
          icu_76_godot::LikelySubtags::minimizeSubtags
                    (&local_178,uVar4,local_148,local_110,local_108,local_d0,local_c8,local_90,
                     param_3,param_4);
          if (*(int *)param_4 < 1) {
            iVar1 = strcmp(local_178,"und");
            if (iVar1 == 0) {
              local_178 = "";
              iVar1 = 0;
            }
            else {
              sVar5 = strlen(local_178);
              iVar1 = (int)sVar5;
            }
            sVar5 = strlen(local_168);
            sVar6 = strlen(local_170);
            createTagStringWithAlternates
                      (local_178,iVar1,local_170,(int)sVar6,local_168,(int)sVar5,local_88,local_50,
                       local_180,(int)sVar3,param_2,param_4);
          }
          if (local_160 != 0) {
            icu_76_godot::LSR::deleteOwned();
          }
        }
      }
LAB_001003b0:
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      if ((char)local_bc != '\0') {
        uprv_free_76_godot(local_c8);
      }
      if ((char)local_fc != '\0') {
        uprv_free_76_godot(local_108);
      }
      if ((char)local_13c != '\0') {
        uprv_free_76_godot(local_148);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_minimizeSubtags_76_godot(char const*, icu_76_godot::ByteSink&, bool, UErrorCode&) */

void ulocimp_minimizeSubtags_76_godot
               (char *param_1,ByteSink *param_2,bool param_3,UErrorCode *param_4)

{
  long in_FS_OFFSET;
  char *local_68;
  char local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    ulocimp_canonicalize_76_godot((char *)&local_68,(UErrorCode *)param_1);
    (anonymous_namespace)::_uloc_minimizeSubtags(local_68,param_2,param_3,param_4);
    if (local_5c != '\0') {
      uprv_free_76_godot(local_68);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::RegionValidateMap::RegionValidateMap() */

void __thiscall icu_76_godot::RegionValidateMap::RegionValidateMap(RegionValidateMap *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00101de8;
  uVar1 = __LC3;
  *(undefined ***)this = &PTR__RegionValidateMap_00101d10;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = _UNK_00101df8;
  uVar1 = __LC4;
  *(undefined8 *)(this + 0x58) = 0x100400408;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar1 = _UNK_00101e08;
  *(undefined8 *)(this + 0x28) = __LC5;
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = _UNK_00101e18;
  *(undefined8 *)(this + 0x38) = __LC6;
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = _UNK_00101e28;
  *(undefined8 *)(this + 0x48) = __LC7;
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}



/* icu_76_godot::RegionValidateMap::equals(icu_76_godot::RegionValidateMap const&) const */

bool __thiscall
icu_76_godot::RegionValidateMap::equals(RegionValidateMap *this,RegionValidateMap *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this + 8,param_1 + 8,0x58);
  return iVar1 == 0;
}



/* icu_76_godot::RegionValidateMap::value(char const*) const */

int __thiscall icu_76_godot::RegionValidateMap::value(RegionValidateMap *this,char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = uprv_isASCIILetter_76_godot((int)*param_1);
  if (((cVar1 != '\0') && (cVar1 = uprv_isASCIILetter_76_godot((int)param_1[1]), cVar1 != '\0')) &&
     (param_1[2] == '\0')) {
    cVar1 = uprv_toupper_76_godot((int)*param_1);
    cVar2 = uprv_toupper_76_godot((int)param_1[1]);
    return (cVar1 + -0x41) * 0x1a + -0x41 + (int)cVar2;
  }
  return -1;
}



/* icu_76_godot::RegionValidateMap::isSet(char const*) const */

uint __thiscall icu_76_godot::RegionValidateMap::isSet(RegionValidateMap *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = value(this,param_1);
  uVar2 = 0;
  if (-1 < iVar1) {
    uVar2 = (uint)((long)(ulong)*(uint *)(this + (long)(iVar1 >> 5) * 4 + 8) >> ((byte)iVar1 & 0x1f)
                  ) & 1;
  }
  return uVar2;
}



/* (anonymous namespace)::GetRegionFromKey(char const*, std::basic_string_view<char,
   std::char_traits<char> >, UErrorCode&) [clone .constprop.0] */

long * (anonymous_namespace)::GetRegionFromKey(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_R8;
  long in_FS_OFFSET;
  char *local_78;
  char local_6c;
  int local_40;
  undefined2 local_34;
  undefined1 local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 1) = 0x28;
  *param_1 = (long)param_1 + 0xd;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  ulocimp_getKeywordValue_76_godot(&local_78);
  if ((*in_R8 < 1) && (local_40 - 3U < 4)) {
    cVar1 = uprv_isASCIILetter_76_godot((int)*local_78);
    if (cVar1 != '\0') {
      cVar1 = uprv_isASCIILetter_76_godot((int)local_78[1]);
      if (cVar1 != '\0') {
        if (GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid == '\0') {
          iVar3 = __cxa_guard_acquire(&GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
                                       ::valid);
          if (iVar3 != 0) {
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._0_8_ = &PTR__RegionValidateMap_00101d10;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._8_8_ = gValidRegionMap._0_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._16_8_ = gValidRegionMap._8_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._24_8_ = gValidRegionMap._16_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._32_8_ = gValidRegionMap._24_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._40_8_ = gValidRegionMap._32_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._48_8_ = gValidRegionMap._40_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._56_8_ = gValidRegionMap._48_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._64_8_ = gValidRegionMap._56_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._72_8_ = gValidRegionMap._64_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._80_8_ = gValidRegionMap._72_8_;
            GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
            ::valid._88_8_ = gValidRegionMap._80_8_;
            __cxa_atexit(0x100000,GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
                                  ::valid,&__dso_handle);
            __cxa_guard_release(&GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
                                 ::valid);
          }
        }
        local_32 = 0;
        local_34 = *(undefined2 *)local_78;
        uVar2 = icu_76_godot::RegionValidateMap::value
                          ((RegionValidateMap *)
                           GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
                           ::valid,(char *)&local_34);
        if ((-1 < (int)uVar2) &&
           ((*(uint *)(GetRegionFromKey(char_const*,std::basic_string_view<char,std::char_traits<char>>,UErrorCode&)
                       ::valid + (long)((int)uVar2 >> 5) * 4 + 8) >> (uVar2 & 0x1f) & 1) != 0)) {
          cVar1 = uprv_toupper_76_godot((int)*local_78);
          icu_76_godot::CharString::append((char)param_1,(UErrorCode *)(ulong)(uint)(int)cVar1);
          cVar1 = uprv_toupper_76_godot((int)local_78[1]);
          icu_76_godot::CharString::append((char)param_1,(UErrorCode *)(ulong)(uint)(int)cVar1);
        }
      }
    }
  }
  if (local_6c != '\0') {
    uprv_free_76_godot(local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uloc_minimizeSubtags_76_godot(UErrorCode *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_a8 [24];
  undefined4 local_90;
  char local_8c;
  char *local_88;
  char local_7c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_4) goto LAB_0010094d;
  icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_a8,param_2,param_3);
  if (*(int *)param_4 < 1) {
    ulocimp_canonicalize_76_godot((char *)&local_88,param_1);
    (anonymous_namespace)::_uloc_minimizeSubtags(local_88,(ByteSink *)aCStack_a8,false,param_4);
    if (local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
    if (0 < *(int *)param_4) goto LAB_00100995;
    if (local_8c == '\0') {
      uVar1 = u_terminateChars_76_godot(param_2,param_3,local_90,param_4);
    }
    else {
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_90;
    }
  }
  else {
LAB_00100995:
    uVar1 = 0;
  }
  icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_a8);
LAB_0010094d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_minimizeSubtags_76_godot(char const*, bool, UErrorCode&) */

char * ulocimp_minimizeSubtags_76_godot(char *param_1,bool param_2,UErrorCode *param_3)

{
  UErrorCode *in_RCX;
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_d8 [16];
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  char local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RCX < 1) {
    local_c8 = (long)&local_bc + 1;
    local_c0 = 0x28;
    local_90 = 0;
    local_bc = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_d8,(CharString *)&local_c8);
    if (*(int *)in_RCX < 1) {
      ulocimp_canonicalize_76_godot
                ((char *)&local_88,(UErrorCode *)CONCAT71(in_register_00000031,param_2));
      (anonymous_namespace)::_uloc_minimizeSubtags
                (local_88,(ByteSink *)aCStack_d8,SUB81(param_3,0),in_RCX);
      if (local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
    }
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_c8);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_d8);
    if ((char)local_bc != '\0') {
      uprv_free_76_godot(local_c8);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::_uloc_addLikelySubtags(char const*, icu_76_godot::ByteSink&, UErrorCode&)
    */

void (anonymous_namespace)::_uloc_addLikelySubtags
               (char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  long local_240;
  undefined1 *local_228;
  undefined4 local_220;
  undefined2 local_21c;
  int local_1f0;
  long local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  int local_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_170;
  char *local_168;
  undefined4 local_160;
  undefined2 local_15c;
  int local_130;
  Locale local_128 [216];
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_3) goto LAB_00100d73;
  if (param_1 == (char *)0x0) {
    *(undefined4 *)param_3 = 1;
    goto LAB_00100d73;
  }
  local_228 = (undefined1 *)((long)&local_21c + 1);
  local_1e8 = (long)&local_1dc + 1;
  local_1a8 = (long)&local_19c + 1;
  local_168 = (char *)((long)&local_15c + 1);
  local_21c = 0;
  local_1dc = 0;
  local_220 = 0x28;
  local_1f0 = 0;
  local_1e0 = 0x28;
  local_1b0 = 0;
  local_1a0 = 0x28;
  local_170 = 0;
  local_19c = 0;
  local_160 = 0x28;
  local_130 = 0;
  local_15c = 0;
  local_260 = (char *)0x0;
  ulocimp_getSubtags_76_godot
            (param_1,(CharString *)&local_228,(CharString *)&local_1e8,(CharString *)&local_1a8,
             (CharString *)&local_168,&local_260,param_3);
  if (*(int *)param_3 < 1) {
    if (0 < local_130) {
      iVar2 = 0;
      pcVar3 = local_168;
      do {
        while ((*pcVar3 == '_' || (*pcVar3 == '-'))) {
          pcVar3 = pcVar3 + 1;
          iVar2 = 0;
          if (local_168 + local_130 == pcVar3) goto LAB_00100d05;
        }
        if (iVar2 == 8) goto LAB_00100dd0;
        pcVar3 = pcVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (local_168 + local_130 != pcVar3);
    }
LAB_00100d05:
    if (local_1f0 == 4) {
      if (local_1b0 == 0) {
        icu_76_godot::CharString::operator=((CharString *)&local_1e8,(CharString *)&local_228);
        local_1f0 = 0;
        *local_228 = 0;
        goto LAB_00100d1e;
      }
    }
    else if (local_1f0 < 9) {
LAB_00100d1e:
      sVar4 = strlen(local_260);
      bVar1 = (bool)icu_76_godot::LikelySubtags::getSingleton(param_3);
      if (*(int *)param_3 < 1) {
        icu_76_godot::Locale::createFromName((char *)local_128);
        if (local_50 == '\0') {
          icu_76_godot::LikelySubtags::makeMaximizedLsrFrom
                    ((Locale *)&local_258,bVar1,(UErrorCode *)local_128);
          if (*(int *)param_3 < 1) {
            iVar2 = strcmp(local_258,"und");
            if (iVar2 == 0) {
              local_258 = "";
              iVar2 = 0;
            }
            else {
              sVar5 = strlen(local_258);
              iVar2 = (int)sVar5;
            }
            sVar5 = strlen(local_248);
            sVar6 = strlen(local_250);
            createTagStringWithAlternates
                      (local_258,iVar2,local_250,(int)sVar6,local_248,(int)sVar5,local_168,local_130
                       ,local_260,(int)sVar4,param_2,param_3);
          }
          if (local_240 != 0) {
            icu_76_godot::LSR::deleteOwned();
          }
        }
        else {
          *(undefined4 *)param_3 = 1;
        }
        icu_76_godot::Locale::~Locale(local_128);
      }
      goto LAB_00100d42;
    }
LAB_00100dd0:
    *(undefined4 *)param_3 = 1;
    if ((char)local_15c == '\0') goto LAB_00100d50;
LAB_00100de6:
    uprv_free_76_godot(local_168);
    if ((char)local_19c == '\0') goto LAB_00100d5e;
LAB_00100e01:
    uprv_free_76_godot(local_1a8);
  }
  else {
LAB_00100d42:
    if ((char)local_15c != '\0') goto LAB_00100de6;
LAB_00100d50:
    if ((char)local_19c != '\0') goto LAB_00100e01;
LAB_00100d5e:
  }
  if ((char)local_1dc != '\0') {
    uprv_free_76_godot(local_1e8);
  }
  if ((char)local_21c != '\0') {
    uprv_free_76_godot(local_228);
  }
LAB_00100d73:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined4 uloc_isRightToLeft_76_godot(UErrorCode *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  UErrorCode *pUVar4;
  undefined8 uStack_170;
  int local_15c;
  CharStringByteSink local_158 [16];
  char *local_148;
  undefined4 local_140;
  undefined2 local_13c;
  int local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  char local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = (char *)((long)&local_13c + 1);
  local_13c = 0;
  local_108 = (long)&local_fc + 1;
  local_15c = 0;
  local_140 = 0x28;
  local_110 = 0;
  local_100 = 0x28;
  local_d0 = 0;
  local_fc = 0;
  pUVar4 = (UErrorCode *)&local_15c;
  ulocimp_getSubtags_76_godot
            ((char *)param_1,(CharString *)&local_148,(CharString *)&local_108,(CharString *)0x0,
             (CharString *)0x0,(char **)0x0,pUVar4);
  if ((local_15c < 1) && (local_d0 != 0)) {
LAB_00101131:
    uVar1 = u_getPropertyValueEnum_76_godot(0x100a,local_108);
    uVar1 = uscript_isRightToLeft_76_godot(uVar1);
  }
  else {
    lVar3 = (long)local_110;
    if ((local_110 == 0) ||
       (pcVar2 = strstr("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-",local_148),
       pcVar2 == (char *)0x0)) {
LAB_00101037:
      local_15c = 0;
      local_c8 = (long)&local_bc + 1;
      local_c0 = 0x28;
      local_90 = 0;
      local_bc = 0;
      icu_76_godot::CharStringByteSink::CharStringByteSink(local_158,(CharString *)&local_c8);
      if (local_15c < 1) {
        ulocimp_canonicalize_76_godot((char *)&local_88,param_1);
        (anonymous_namespace)::_uloc_addLikelySubtags(local_88,(ByteSink *)local_158,pUVar4);
        if (local_7c != '\0') {
          uprv_free_76_godot(local_88);
        }
      }
      icu_76_godot::CharString::CharString((CharString *)&local_88,(CharString *)&local_c8);
      uStack_170 = 0x1010b2;
      icu_76_godot::CharStringByteSink::~CharStringByteSink(local_158);
      if ((char)local_bc != '\0') {
        uStack_170 = 0x10123d;
        uprv_free_76_godot(local_c8);
      }
      if (((local_15c < 1) &&
          (ulocimp_getSubtags_76_godot
                     (local_88,(CharString *)0x0,(CharString *)&local_108,(CharString *)0x0,
                      (CharString *)0x0,(char **)0x0,pUVar4), local_15c < 1)) && (local_d0 != 0)) {
        if (local_7c != '\0') {
          uprv_free_76_godot(local_88,uStack_170,local_d0,pUVar4);
        }
        goto LAB_00101131;
      }
      if (local_7c == '\0') goto LAB_001010dc;
      uVar1 = 0;
      uprv_free_76_godot(local_88);
    }
    else {
      uVar1 = 1;
      if (pcVar2[lVar3] != '+') {
        if (pcVar2[lVar3] != '-') goto LAB_00101037;
LAB_001010dc:
        uVar1 = 0;
      }
    }
  }
  if ((char)local_fc == '\0') {
  }
  else {
    uprv_free_76_godot(local_108);
  }
  if ((char)local_13c != '\0') {
    uprv_free_76_godot(local_148);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::isRightToLeft() const */

void icu_76_godot::Locale::isRightToLeft(void)

{
  undefined8 uVar1;
  
  uVar1 = icu_76_godot::Locale::getBaseName();
  uloc_isRightToLeft_76_godot(uVar1);
  return;
}



/* ulocimp_addLikelySubtags_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_addLikelySubtags_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  long in_FS_OFFSET;
  char *local_68;
  char local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    ulocimp_canonicalize_76_godot((char *)&local_68,(UErrorCode *)param_1);
    (anonymous_namespace)::_uloc_addLikelySubtags(local_68,param_2,param_3);
    if (local_5c != '\0') {
      uprv_free_76_godot(local_68);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uloc_addLikelySubtags_76_godot(UErrorCode *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_a8 [24];
  undefined4 local_90;
  char local_8c;
  char *local_88;
  char local_7c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_4) goto LAB_0010131d;
  icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_a8,param_2,param_3);
  if (*(int *)param_4 < 1) {
    ulocimp_canonicalize_76_godot((char *)&local_88,param_1);
    (anonymous_namespace)::_uloc_addLikelySubtags(local_88,(ByteSink *)aCStack_a8,param_4);
    if (local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
    if (0 < *(int *)param_4) goto LAB_00101365;
    if (local_8c == '\0') {
      uVar1 = u_terminateChars_76_godot(param_2,param_3,local_90,param_4);
    }
    else {
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_90;
    }
  }
  else {
LAB_00101365:
    uVar1 = 0;
  }
  icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_a8);
LAB_0010131d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_addLikelySubtags_76_godot(char const*, UErrorCode&) */

char * ulocimp_addLikelySubtags_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_c8 [16];
  long local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_80;
  char *local_78;
  char local_6c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_b8 = (long)&local_ac + 1;
    local_b0 = 0x28;
    local_80 = 0;
    local_ac = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_c8,(CharString *)&local_b8);
    if (*(int *)in_RDX < 1) {
      ulocimp_canonicalize_76_godot((char *)&local_78,param_2);
      (anonymous_namespace)::_uloc_addLikelySubtags(local_78,(ByteSink *)aCStack_c8,in_RDX);
      if (local_6c != '\0') {
        uprv_free_76_godot(local_78);
      }
    }
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_b8);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_c8);
    if ((char)local_ac != '\0') {
      uprv_free_76_godot(local_b8);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getRegionForSupplementalData_76_godot(char const*, bool, UErrorCode&) */

char * ulocimp_getRegionForSupplementalData_76_godot(char *param_1,bool param_2,UErrorCode *param_3)

{
  int *in_RCX;
  undefined7 in_register_00000031;
  UErrorCode *pUVar1;
  long in_FS_OFFSET;
  int local_15c;
  CharStringByteSink local_158 [16];
  undefined8 local_148;
  char local_13c;
  int local_110;
  UErrorCode *local_108;
  char local_fc;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  char local_7c;
  long local_40;
  
  pUVar1 = (UErrorCode *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RCX < 1) {
    (anonymous_namespace)::GetRegionFromKey((CharString *)&local_148,pUVar1,2,&_LC8);
    if ((*in_RCX < 1) && (local_110 == 0)) {
      ulocimp_getRegion_76_godot((char *)&local_88,pUVar1);
      icu_76_godot::CharString::operator=((CharString *)&local_148,(CharString *)&local_88);
      if (local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      if (((*in_RCX < 1) && (local_110 == 0)) && ((char)param_3 != '\0')) {
        (anonymous_namespace)::GetRegionFromKey((CharString *)&local_88,pUVar1,2,&_LC9);
        icu_76_godot::CharString::operator=((CharString *)&local_148,(CharString *)&local_88);
        if (local_7c != '\0') {
          uprv_free_76_godot(local_88);
        }
        if ((*in_RCX < 1) && (local_110 == 0)) {
          local_c0 = 0x28;
          local_15c = 0;
          local_c8 = (long)&local_bc + 1;
          local_90 = 0;
          local_bc = 0;
          icu_76_godot::CharStringByteSink::CharStringByteSink(local_158,(CharString *)&local_c8);
          if (local_15c < 1) {
            ulocimp_canonicalize_76_godot((char *)&local_88,pUVar1);
            (anonymous_namespace)::_uloc_addLikelySubtags
                      (local_88,(ByteSink *)local_158,(UErrorCode *)&local_15c);
            if (local_7c != '\0') {
              uprv_free_76_godot(local_88);
            }
          }
          icu_76_godot::CharString::CharString((CharString *)&local_108,(CharString *)&local_c8);
          icu_76_godot::CharStringByteSink::~CharStringByteSink(local_158);
          if ((char)local_bc != '\0') {
            uprv_free_76_godot(local_c8);
          }
          if (local_15c < 1) {
            ulocimp_getRegion_76_godot((char *)&local_88,local_108);
            icu_76_godot::CharString::operator=((CharString *)&local_148,(CharString *)&local_88);
            if (local_7c != '\0') {
              uprv_free_76_godot(local_88);
            }
          }
          if (local_fc != '\0') {
            uprv_free_76_godot(local_108);
          }
        }
      }
    }
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_148);
    if (local_13c != '\0') {
      uprv_free_76_godot(local_148);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_00101b6f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_00101b6f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


