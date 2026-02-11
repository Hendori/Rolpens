
undefined8 uset_cleanup(void)

{
  if (uni32Singleton != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(uni32Singleton);
  }
  uni32Singleton = (UnicodeSet *)0x0;
  LOCK();
  uni32InitOnce = 0;
  UNLOCK();
  return 1;
}



/* icu_76_godot::(anonymous namespace)::intPropertyFilter(int, void*) */

bool icu_76_godot::(anonymous_namespace)::intPropertyFilter(int param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = u_getIntPropertyValue_76_godot(param_1,*param_2);
  return *(int *)((long)param_2 + 4) == iVar1;
}



/* icu_76_godot::(anonymous namespace)::idTypeFilter(int, void*) */

void icu_76_godot::(anonymous_namespace)::idTypeFilter(int param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
  u_hasIDType_76_godot(param_1,*param_2);
  return;
}



/* icu_76_godot::(anonymous namespace)::scriptExtensionsFilter(int, void*) */

void icu_76_godot::(anonymous_namespace)::scriptExtensionsFilter(int param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
  uscript_hasScript_76_godot(param_1,*param_2);
  return;
}



/* icu_76_godot::(anonymous namespace)::generalCategoryMaskFilter(int, void*) */

bool icu_76_godot::(anonymous_namespace)::generalCategoryMaskFilter(int param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2;
  uVar2 = u_charType_76_godot();
  return (uVar1 >> (uVar2 & 0x1f) & 1) != 0;
}



/* icu_76_godot::(anonymous namespace)::versionFilter(int, void*) */

undefined8 icu_76_godot::(anonymous_namespace)::versionFilter(int param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  u_charAge_76_godot(CONCAT44(in_register_0000003c,param_1),local_24);
  iVar1 = memcmp(local_24,&versionFilter(int,void*)::none,4);
  uVar2 = 0;
  if (0 < iVar1) {
    iVar1 = memcmp(local_24,param_2,4);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 < 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::(anonymous namespace)::numericValueFilter(int, void*) */

ulong icu_76_godot::(anonymous_namespace)::numericValueFilter(int param_1,void *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  double extraout_XMM0_Qa;
  
  uVar1 = u_getNumericValue_76_godot();
                    /* WARNING: Load size is inaccurate */
  uVar2 = CONCAT71((int7)((ulong)uVar1 >> 8),!NAN(extraout_XMM0_Qa) && !NAN(*param_2)) & 0xffffffff;
  if (extraout_XMM0_Qa != *param_2) {
    uVar2 = 0;
  }
  return uVar2;
}



/* icu_76_godot::UnicodeSet::applyFilter(signed char (*)(int, void*), void*,
   icu_76_godot::UnicodeSet const*, UErrorCode&) [clone .part.0] */

void __thiscall
icu_76_godot::UnicodeSet::applyFilter
          (UnicodeSet *this,_func_signed_int_void_ptr *param_1,void *param_2,UnicodeSet *param_3,
          UErrorCode *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  icu_76_godot::UnicodeSet::clear();
  iVar2 = icu_76_godot::UnicodeSet::getRangeCount();
  if (iVar2 < 1) {
LAB_00100210:
    if ((((byte)this[0x20] & 1) != 0) && (*(int *)param_4 < 1)) {
      *(undefined4 *)param_4 = 7;
      return;
    }
    return;
  }
  iVar6 = -1;
  iVar5 = 0;
  do {
    iVar3 = icu_76_godot::UnicodeSet::getRangeStart((int)param_3);
    iVar4 = icu_76_godot::UnicodeSet::getRangeEnd((int)param_3);
joined_r0x001001b3:
    if (iVar3 <= iVar4) {
      do {
        cVar1 = (*param_1)(iVar3,param_2);
        if (cVar1 == '\0') {
          if (-1 < iVar6) goto code_r0x001001e1;
        }
        else if (iVar6 < 0) {
          iVar6 = iVar3;
        }
        iVar3 = iVar3 + 1;
        if (iVar4 < iVar3) break;
      } while( true );
    }
    iVar5 = iVar5 + 1;
    if (iVar2 == iVar5) {
      if (-1 < iVar6) {
        icu_76_godot::UnicodeSet::add((int)this,iVar6);
      }
      goto LAB_00100210;
    }
  } while( true );
code_r0x001001e1:
  iVar3 = iVar3 + 1;
  icu_76_godot::UnicodeSet::add((int)this,iVar6);
  iVar6 = -1;
  goto joined_r0x001001b3;
}



/* icu_76_godot::(anonymous namespace)::mungeCharName(char*, char const*, int) [clone .constprop.0]
    */

undefined8
icu_76_godot::(anonymous_namespace)::mungeCharName(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
  cVar1 = *param_2;
  pcVar3 = param_2 + 1;
  pcVar2 = param_1;
  if (cVar1 != '\0') {
    iVar4 = 0;
    do {
      if (cVar1 == ' ') {
        if (iVar4 != 0) {
          if (iVar4 < 1) goto LAB_00100275;
          if (param_1[(long)iVar4 + -1] != ' ') goto joined_r0x00100273;
        }
      }
      else {
joined_r0x00100273:
        if (0x7e < iVar4) {
          return 0;
        }
LAB_00100275:
        lVar5 = (long)iVar4;
        iVar4 = iVar4 + 1;
        param_1[lVar5] = cVar1;
      }
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((iVar4 < 1) || (pcVar2 = param_1 + (long)iVar4 + -1, param_1[(long)iVar4 + -1] != ' ')) {
      pcVar2 = param_1 + iVar4;
    }
  }
  *pcVar2 = '\0';
  return 1;
}



/* icu_76_godot::UnicodeSet::applyFilter(signed char (*)(int, void*), void*,
   icu_76_godot::UnicodeSet const*, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::applyFilter
          (UnicodeSet *this,_func_signed_int_void_ptr *param_1,void *param_2,UnicodeSet *param_3,
          UErrorCode *param_4)

{
  if (0 < *(int *)param_4) {
    return;
  }
  applyFilter(this,param_1,param_2,param_3,param_4);
  return;
}



/* icu_76_godot::UnicodeSet::applyIntPropertyValue(UProperty, int, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyIntPropertyValue
          (UnicodeSet *this,uint param_2,uint param_3,UErrorCode *param_4)

{
  undefined8 uVar1;
  UnicodeSet *pUVar2;
  long in_FS_OFFSET;
  uint local_2c;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = param_3;
  if (((*(int *)param_4 < 1) && (*(long *)(this + 0x28) == 0)) && (*(long *)(this + 0x58) == 0)) {
    if (param_2 == 0x2000) {
      pUVar2 = (UnicodeSet *)
               icu_76_godot::CharacterProperties::getInclusionsForProperty(0x2000,param_4);
      if (*(int *)param_4 < 1) {
        applyFilter(this,(anonymous_namespace)::generalCategoryMaskFilter,&local_2c,pUVar2,param_4);
      }
    }
    else if (param_2 == 0x7000) {
      pUVar2 = (UnicodeSet *)
               icu_76_godot::CharacterProperties::getInclusionsForProperty(0x7000,param_4);
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (*(int *)param_4 < 1) {
        applyFilter(this,(anonymous_namespace)::scriptExtensionsFilter,&local_28,pUVar2,param_4);
      }
    }
    else if (param_2 == 0x7001) {
      pUVar2 = (UnicodeSet *)
               icu_76_godot::CharacterProperties::getInclusionsForProperty(0x7001,param_4);
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (*(int *)param_4 < 1) {
        applyFilter(this,(anonymous_namespace)::idTypeFilter,&local_28,pUVar2,param_4);
      }
    }
    else if (param_2 < 0x4c) {
      if (param_3 < 2) {
        uVar1 = u_getBinaryPropertySet_76_godot(param_2,param_4);
        if (*(int *)param_4 < 1) {
          icu_76_godot::UnicodeSet::copyFrom(this,uVar1,1);
          if (local_2c == 0) {
            icu_76_godot::UnicodeSet::complement();
            icu_76_godot::UnicodeSet::removeAllStrings();
          }
        }
      }
      else {
        icu_76_godot::UnicodeSet::clear();
      }
    }
    else if (param_2 - 0x1000 < 0x1b) {
      pUVar2 = (UnicodeSet *)
               icu_76_godot::CharacterProperties::getInclusionsForProperty(param_2,param_4);
      local_28 = CONCAT44(local_2c,param_2);
      if (*(int *)param_4 < 1) {
        applyFilter(this,(anonymous_namespace)::intPropertyFilter,&local_28,pUVar2,param_4);
      }
    }
    else {
      *(undefined4 *)param_4 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::applyPropertyAlias(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&, UErrorCode&) [clone .part.0] */

void __thiscall
icu_76_godot::UnicodeSet::applyPropertyAlias
          (UnicodeSet *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  UnicodeSet *pUVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  UnicodeString *pUVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  double dVar10;
  undefined1 auVar11 [12];
  char *local_158;
  char *local_150;
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_d0;
  undefined1 local_bc [4];
  char local_b8 [136];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uVar1 & 0x11) == 0) goto LAB_0010055c;
LAB_0010079b:
    pUVar8 = (UnicodeString *)0x0;
  }
  else {
    iVar6 = (int)((short)uVar1 >> 5);
    if ((uVar1 & 0x11) != 0) goto LAB_0010079b;
LAB_0010055c:
    pUVar8 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar8 = *(UnicodeString **)(param_1 + 0x18);
    }
  }
  cVar2 = uprv_isInvariantUString_76_godot(pUVar8,iVar6);
  if (cVar2 != '\0') {
    uVar1 = *(ushort *)(param_2 + 8);
    if ((short)uVar1 < 0) {
      iVar6 = *(int *)(param_2 + 0xc);
      if ((uVar1 & 0x11) == 0) goto LAB_00100593;
LAB_0010075b:
      pUVar8 = (UnicodeString *)0x0;
    }
    else {
      iVar6 = (int)((short)uVar1 >> 5);
      if ((uVar1 & 0x11) != 0) goto LAB_0010075b;
LAB_00100593:
      pUVar8 = param_2 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar8 = *(UnicodeString **)(param_2 + 0x18);
      }
    }
    cVar2 = uprv_isInvariantUString_76_godot(pUVar8,iVar6);
    if (cVar2 != '\0') {
      local_148 = (long)&local_13c + 1;
      local_108 = (char *)((long)&local_fc + 1);
      local_13c = 0;
      local_fc = 0;
      local_140 = 0x28;
      local_110 = 0;
      local_100 = 0x28;
      local_d0 = 0;
      icu_76_godot::CharString::appendInvariantChars
                ((UnicodeString *)&local_148,(UErrorCode *)param_1);
      icu_76_godot::CharString::appendInvariantChars
                ((UnicodeString *)&local_108,(UErrorCode *)param_2);
      if (0 < *(int *)param_3) goto LAB_00100770;
      if (*(short *)(param_2 + 8) < 0) {
        iVar6 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar6 = (int)(*(short *)(param_2 + 8) >> 5);
      }
      iVar7 = (int)this;
      if (iVar6 < 1) {
        iVar6 = u_getPropertyValueEnum_76_godot(0x2000,local_148);
        if (iVar6 == -1) {
          iVar6 = u_getPropertyValueEnum_76_godot(0x100a,local_148,0xffffffff);
          if (iVar6 == -1) {
            uVar3 = u_getPropertyEnum_76_godot(local_148);
            if (0x4b < uVar3) {
              iVar6 = uprv_compareASCIIPropertyNames_76_godot(&::(anonymous_namespace)::ANY);
              if (iVar6 == 0) {
                icu_76_godot::UnicodeSet::set(iVar7,0);
              }
              else {
                iVar6 = uprv_compareASCIIPropertyNames_76_godot("ASCII");
                if (iVar6 != 0) {
                  iVar6 = uprv_compareASCIIPropertyNames_76_godot("Assigned",local_148);
                  if (iVar6 != 0) goto LAB_00100768;
                  applyIntPropertyValue(this,0x2000,1,param_3);
                  icu_76_godot::UnicodeSet::complement();
                  icu_76_godot::UnicodeSet::removeAllStrings();
                  goto LAB_001007e0;
                }
                icu_76_godot::UnicodeSet::set(iVar7,0);
              }
              goto LAB_00100770;
            }
            applyIntPropertyValue(this,uVar3,1,param_3);
          }
          else {
            applyIntPropertyValue(this,0x100a,iVar6,param_3);
          }
        }
        else {
          applyIntPropertyValue(this,0x2000,iVar6,param_3);
        }
LAB_001007e0:
        if ((((byte)this[0x20] & 1) != 0) && (*(int *)param_3 < 1)) {
          *(undefined4 *)param_3 = 7;
        }
      }
      else {
        auVar11 = u_getPropertyEnum_76_godot();
        uVar3 = auVar11._0_4_;
        uVar5 = auVar11._0_8_ & 0xffffffff;
        if (uVar3 == 0xffffffff) goto LAB_00100768;
        if (uVar3 == 0x1005) {
LAB_00100810:
          iVar6 = u_getPropertyValueEnum_76_godot(0x2000,local_108);
          if (iVar6 != -1) {
            uVar3 = 0x2000;
LAB_0010082d:
            applyIntPropertyValue(this,uVar3,iVar6,param_3);
            goto LAB_001007e0;
          }
        }
        else {
          if ((uVar3 - 0x1000 < 0x1b) || (uVar3 < 0x4c)) {
            iVar6 = u_getPropertyValueEnum_76_godot(uVar5,local_108);
            if (iVar6 == -1) {
              if (((((uVar3 - 0x1010 < 2) || (uVar3 == 0x1002)) &&
                   (dVar10 = strtod(local_108,&local_150), *local_150 == '\0')) &&
                  ((0.0 <= dVar10 && (dVar10 <= _LC1)))) && (dVar10 == (double)(int)dVar10)) {
                applyIntPropertyValue(this,uVar5,(int)dVar10,param_3);
                goto LAB_001007e0;
              }
              goto LAB_00100768;
            }
            goto LAB_0010082d;
          }
          if (uVar3 == 0x2000) goto LAB_00100810;
          if (uVar3 == 0x4005) {
            pcVar9 = local_b8;
            cVar2 = (anonymous_namespace)::mungeCharName(pcVar9,local_108,auVar11._8_4_);
            if ((cVar2 == '\0') || (u_charFromName_76_godot(2,pcVar9,param_3), 0 < *(int *)param_3))
            goto LAB_00100768;
            icu_76_godot::UnicodeSet::clear();
            icu_76_godot::UnicodeSet::add(iVar7);
            goto LAB_00100770;
          }
          if ((int)uVar3 < 0x4006) {
            if (uVar3 == 0x3000) {
              local_150 = (char *)strtod(local_108,&local_158);
              if (*local_158 == '\0') {
                pUVar4 = (UnicodeSet *)
                         icu_76_godot::CharacterProperties::getInclusionsForProperty(0x3000,param_3)
                ;
                if (*(int *)param_3 < 1) {
                  applyFilter(this,(anonymous_namespace)::numericValueFilter,&local_150,pUVar4,
                              param_3);
                }
                goto LAB_00100770;
              }
            }
            else if (uVar3 == 0x4000) {
              pcVar9 = local_b8;
              cVar2 = (anonymous_namespace)::mungeCharName(pcVar9,local_108,auVar11._8_4_);
              if (cVar2 != '\0') {
                u_versionFromString_76_godot(local_bc,pcVar9);
                pUVar4 = (UnicodeSet *)
                         icu_76_godot::CharacterProperties::getInclusionsForProperty(0x4000,param_3)
                ;
                if (*(int *)param_3 < 1) {
                  applyFilter(this,(anonymous_namespace)::versionFilter,local_bc,pUVar4,param_3);
                }
                goto LAB_00100770;
              }
            }
          }
          else if (uVar3 == 0x7000) {
            iVar6 = u_getPropertyValueEnum_76_godot(0x100a,local_108);
            if (iVar6 != -1) {
              applyIntPropertyValue(this,0x7000,iVar6,param_3);
              goto LAB_001007e0;
            }
          }
          else if ((uVar3 == 0x7001) &&
                  (iVar6 = u_getPropertyValueEnum_76_godot(0x7001,local_108), iVar6 != -1)) {
            applyIntPropertyValue(this,0x7001,iVar6,param_3);
            goto LAB_001007e0;
          }
        }
LAB_00100768:
        *(undefined4 *)param_3 = 1;
      }
LAB_00100770:
      if ((char)local_fc != '\0') {
        uprv_free_76_godot(local_108);
      }
      if ((char)local_13c != '\0') {
        uprv_free_76_godot(local_148);
      }
      goto LAB_00100710;
    }
  }
  *(undefined4 *)param_3 = 1;
LAB_00100710:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::UnicodeSet::applyPropertyAlias(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyPropertyAlias
          (UnicodeSet *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  if (((*(int *)param_3 < 1) && (*(long *)(this + 0x28) == 0)) && (*(long *)(this + 0x58) == 0)) {
    applyPropertyAlias(this,param_1,param_2,param_3);
    return this;
  }
  return this;
}



/* icu_76_godot::UnicodeSet::resemblesPropertyPattern(icu_76_godot::UnicodeString const&, int) */

bool icu_76_godot::UnicodeSet::resemblesPropertyPattern(UnicodeString *param_1,int param_2)

{
  ushort uVar1;
  UnicodeString *pUVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    if ((int)uVar3 <= param_2 + 4) {
      return false;
    }
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
    if ((int)uVar3 <= param_2 + 4) {
      return false;
    }
  }
  if (uVar3 <= (uint)param_2) {
    return false;
  }
  pUVar2 = param_1 + 10;
  if ((uVar1 & 2) == 0) {
    pUVar2 = *(UnicodeString **)(param_1 + 0x18);
  }
  lVar4 = (long)param_2;
  if (((*(short *)(pUVar2 + lVar4 * 2) == 0x5b) && (param_2 + 1U < uVar3)) &&
     (*(short *)(pUVar2 + lVar4 * 2 + 2) == 0x3a)) {
    return true;
  }
  if ((short)uVar1 < 0) {
    if (uVar3 <= (uint)param_2) {
      return false;
    }
  }
  else if (uVar3 <= (uint)param_2) {
    return false;
  }
  pUVar2 = param_1 + 10;
  if ((uVar1 & 2) == 0) {
    pUVar2 = *(UnicodeString **)(param_1 + 0x18);
  }
  if (((*(short *)(pUVar2 + lVar4 * 2) == 0x5c) && (param_2 + 1U < uVar3)) &&
     ((*(ushort *)(pUVar2 + (long)(int)(param_2 + 1U) * 2) & 0xffdf) == 0x50)) {
    return true;
  }
  if (uVar3 <= (uint)param_2) {
    return false;
  }
  if ((uVar1 & 2) == 0) {
    pUVar2 = *(UnicodeString **)(param_1 + 0x18);
  }
  else {
    pUVar2 = param_1 + 10;
  }
  if (*(short *)(pUVar2 + lVar4 * 2) == 0x5c) {
    if (param_2 + 1U < uVar3) {
      return *(short *)(pUVar2 + lVar4 * 2 + 2) == 0x4e;
    }
    return false;
  }
  return false;
}



/* icu_76_godot::UnicodeSet::resemblesPattern(icu_76_godot::UnicodeString const&, int) */

bool icu_76_godot::UnicodeSet::resemblesPattern(UnicodeString *param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  UnicodeString *pUVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
  }
  if ((param_2 + 1 < (int)uVar3) && ((uint)param_2 < uVar3)) {
    pUVar4 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(param_1 + 0x18);
    }
    if (*(short *)(pUVar4 + (long)param_2 * 2) == 0x5b) {
      return true;
    }
  }
  cVar2 = resemblesPropertyPattern(param_1,param_2);
  return cVar2 != '\0';
}



/* icu_76_godot::UnicodeSet::resemblesPropertyPattern(icu_76_godot::RuleCharacterIterator&, int) */

bool icu_76_godot::UnicodeSet::resemblesPropertyPattern(RuleCharacterIterator *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  UErrorCode local_5d;
  int local_5c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  icu_76_godot::RuleCharacterIterator::getPos((Pos *)param_1);
  iVar2 = icu_76_godot::RuleCharacterIterator::next
                    ((int)param_1,(signed *)(ulong)(param_2 & 0xfffffffd),&local_5d);
  if (iVar2 - 0x5bU < 2) {
    iVar3 = icu_76_godot::RuleCharacterIterator::next
                      ((int)param_1,(signed *)(ulong)(param_2 & 0xfffffff9),&local_5d);
    if (iVar2 == 0x5b) {
      icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_1);
      if (iVar3 != 0x3a) {
        bVar1 = false;
        goto LAB_00100d9f;
      }
    }
    else {
      if ((0x22 < iVar3 - 0x4eU) || ((0x400000005U >> ((ulong)(iVar3 - 0x4eU) & 0x3f) & 1) == 0))
      goto LAB_00100d44;
      icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_1);
    }
    bVar1 = local_5c < 1;
  }
  else {
LAB_00100d44:
    icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_1);
    bVar1 = false;
  }
LAB_00100d9f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::applyPropertyPattern(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyPropertyPattern
          (UnicodeSet *this,UnicodeString *param_1,ParsePosition *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  UnicodeString *pUVar6;
  short sVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  char local_e1;
  uint local_cc;
  code *local_c8;
  short local_c0;
  int local_bc;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_3) goto LAB_00101040;
  uVar3 = *(uint *)(param_2 + 8);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar2 = (uint)((short)uVar1 >> 5);
  }
  if (((int)(uVar3 + 4) < (int)uVar2) && (uVar3 < uVar2)) {
    pUVar6 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar6 = *(UnicodeString **)(param_1 + 0x18);
    }
    lVar8 = (long)(int)uVar3;
    if (*(short *)(pUVar6 + lVar8 * 2) == 0x5b) {
      if (uVar3 + 1 < uVar2) {
        if (*(short *)(pUVar6 + lVar8 * 2 + 2) != 0x3a) {
          if ((short)uVar1 < 0) goto LAB_00100e6f;
          goto LAB_001010ac;
        }
        local_cc = uVar3 + 2;
        local_cc = icu_76_godot::ICU_Utility::skipWhitespace(param_1,&local_cc,0);
        uVar1 = *(ushort *)(param_1 + 8);
        sVar7 = (short)uVar1 >> 5;
        if ((short)uVar1 < 0) {
          if (((int)local_cc < (int)*(uint *)(param_1 + 0xc)) &&
             (local_cc < *(uint *)(param_1 + 0xc))) {
LAB_0010111f:
            pUVar6 = param_1 + 10;
            if ((uVar1 & 2) == 0) {
              pUVar6 = *(UnicodeString **)(param_1 + 0x18);
            }
            bVar9 = *(short *)(pUVar6 + (long)(int)local_cc * 2) == 0x5e;
            if (bVar9) {
              local_cc = local_cc + 1;
            }
            if (-1 < (int)local_cc) {
              if ((short)uVar1 < 0) goto LAB_0010121c;
              goto LAB_001011ad;
            }
            uVar3 = 0;
          }
          else {
            bVar9 = false;
            uVar3 = 0;
            if (-1 < (int)local_cc) {
LAB_0010121c:
              uVar3 = *(uint *)(param_1 + 0xc);
              if ((int)local_cc <= (int)*(uint *)(param_1 + 0xc)) {
                uVar3 = local_cc;
              }
            }
          }
        }
        else {
          if ((int)local_cc < (int)sVar7) {
            if (local_cc < (uint)(int)sVar7) goto LAB_0010111f;
            bVar9 = false;
            uVar3 = 0;
            if ((int)local_cc < 0) goto LAB_001011cd;
          }
          else {
            bVar9 = false;
          }
LAB_001011ad:
          uVar3 = (int)sVar7;
          if ((int)local_cc < (int)sVar7) {
            uVar3 = local_cc;
          }
        }
LAB_001011cd:
        bVar10 = false;
        iVar4 = icu_76_godot::UnicodeString::indexOf((wchar16 *)param_1,0x1028f8,0,2,uVar3);
        local_e1 = '\x01';
LAB_00100f4b:
        if (-1 < iVar4) {
          sVar7 = *(short *)(param_1 + 8);
          if ((int)local_cc < 0) {
            uVar3 = 0;
            uVar2 = 0;
            if (-1 < sVar7) goto LAB_00100f7a;
          }
          else if (sVar7 < 0) {
            uVar3 = local_cc;
            if ((int)*(uint *)(param_1 + 0xc) < (int)local_cc) {
              uVar3 = *(uint *)(param_1 + 0xc);
            }
          }
          else {
            uVar2 = local_cc;
            if ((int)(sVar7 >> 5) <= (int)local_cc) {
              uVar2 = (int)(sVar7 >> 5);
            }
LAB_00100f7a:
            uVar3 = uVar2;
          }
          iVar5 = icu_76_godot::UnicodeString::doIndexOf((wchar16)param_1,0x3d,uVar3);
          local_c0 = 2;
          local_c8 = icu_76_godot::UnicodeString::indexOf;
          local_88 = icu_76_godot::UnicodeString::indexOf;
          local_80 = 2;
          if (((iVar5 < iVar4 & (byte)~(byte)((uint)iVar5 >> 0x18) >> 7) == 0) || (bVar10)) {
            (**(code **)(*(long *)param_1 + 0x18))(param_1,local_cc,iVar4);
            if (bVar10) {
              icu_76_godot::UnicodeString::operator=
                        ((UnicodeString *)&local_88,(UnicodeString *)&local_c8);
              icu_76_godot::UnicodeString::unBogus();
              lVar8 = 0;
              do {
                lVar8 = lVar8 + 1;
              } while (*(short *)((long)&::(anonymous_namespace)::NAME_PROP + lVar8 * 2) != 0);
              if (-1 < local_c0) {
                local_bc = (int)(local_c0 >> 5);
              }
              icu_76_godot::UnicodeString::doReplace
                        ((UnicodeString *)&local_c8,0,local_bc,lVar8,
                         &::(anonymous_namespace)::NAME_PROP);
            }
          }
          else {
            (**(code **)(*(long *)param_1 + 0x18))(param_1,local_cc);
            (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar5 + 1,iVar4,&local_88);
          }
          if ((*(int *)param_3 < 1) &&
             (((*(long *)(this + 0x28) != 0 || (*(long *)(this + 0x58) != 0)) ||
              (applyPropertyAlias(this,(UnicodeString *)&local_c8,(UnicodeString *)&local_88,param_3
                                 ), *(int *)param_3 < 1)))) {
            if (bVar9) {
              icu_76_godot::UnicodeSet::complement();
              icu_76_godot::UnicodeSet::removeAllStrings();
            }
            *(int *)(param_2 + 8) = (char)(local_e1 + '\x01') + iVar4;
          }
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
          goto LAB_00101040;
        }
      }
      else {
LAB_001010ac:
        if (uVar3 < uVar2) {
LAB_001010b0:
          pUVar6 = param_1 + 10;
          if ((uVar1 & 2) == 0) {
            pUVar6 = *(UnicodeString **)(param_1 + 0x18);
          }
          if (((*(short *)(pUVar6 + lVar8 * 2) == 0x5c) && (uVar3 + 1 < uVar2)) &&
             (*(short *)(pUVar6 + lVar8 * 2 + 2) == 0x4e)) goto LAB_00100e9f;
        }
      }
    }
    else {
LAB_00100e6f:
      if (uVar2 <= uVar3) goto LAB_00101080;
      if ((*(short *)(pUVar6 + lVar8 * 2) != 0x5c) || (uVar2 <= uVar3 + 1)) goto LAB_001010b0;
      if ((*(ushort *)(pUVar6 + lVar8 * 2 + 2) & 0xffdf) != 0x50) goto LAB_001010ac;
LAB_00100e9f:
      pUVar6 = param_1 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar6 = *(UnicodeString **)(param_1 + 0x18);
      }
      local_cc = uVar3 + 2;
      sVar7 = *(short *)(pUVar6 + (long)(int)(uVar3 + 1) * 2);
      uVar3 = icu_76_godot::ICU_Utility::skipWhitespace(param_1,&local_cc,0);
      uVar1 = *(ushort *)(param_1 + 8);
      if ((short)uVar1 < 0) {
        uVar2 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar2 = (uint)((short)uVar1 >> 5);
      }
      if ((uVar3 != uVar2) && (local_cc = uVar3 + 1, uVar3 < uVar2)) {
        pUVar6 = param_1 + 10;
        if ((uVar1 & 2) == 0) {
          pUVar6 = *(UnicodeString **)(param_1 + 0x18);
        }
        if (*(short *)(pUVar6 + (long)(int)uVar3 * 2) == 0x7b) {
          uVar3 = local_cc;
          if ((int)uVar2 <= (int)local_cc) {
            uVar3 = uVar2;
          }
          if ((int)local_cc < 0) {
            uVar3 = 0;
          }
          bVar9 = sVar7 == 0x50;
          bVar10 = sVar7 == 0x4e;
          iVar4 = icu_76_godot::UnicodeString::doIndexOf((wchar16)param_1,0x7d,uVar3);
          local_e1 = '\0';
          goto LAB_00100f4b;
        }
      }
    }
  }
LAB_00101080:
  *(undefined4 *)param_3 = 1;
LAB_00101040:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeSet::applyPropertyPattern(icu_76_godot::RuleCharacterIterator&,
   icu_76_godot::UnicodeString&, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::applyPropertyPattern
          (UnicodeSet *this,RuleCharacterIterator *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  code *local_98;
  undefined8 local_90;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    local_88 = icu_76_godot::UnicodeString::indexOf;
    local_80 = 2;
    iVar1 = (int)(UnicodeString *)&local_88;
    icu_76_godot::RuleCharacterIterator::lookahead((UnicodeString *)param_1,iVar1);
    local_98 = icu_76_godot::RuleCharacterIterator::jumpahead;
    local_90 = _LC3;
    applyPropertyPattern(this,(UnicodeString *)&local_88,(ParsePosition *)&local_98,param_3);
    if (*(int *)param_3 < 1) {
      if ((int)local_90 != 0) {
        icu_76_godot::RuleCharacterIterator::jumpahead((int)param_1);
        icu_76_godot::UnicodeString::doAppend(param_2,iVar1,0);
        icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_98);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        goto LAB_001013ca;
      }
      *(undefined4 *)param_3 = 0x10002;
    }
    icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_98);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  }
LAB_001013ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::applyPattern(icu_76_godot::RuleCharacterIterator&,
   icu_76_godot::SymbolTable const*, icu_76_godot::UnicodeString&, unsigned int,
   icu_76_godot::UnicodeSet& (icu_76_godot::UnicodeSet::*)(int), int, UErrorCode&) */

void icu_76_godot::UnicodeSet::applyPattern
               (RuleCharacterIterator *param_1,SymbolTable *param_2,UnicodeString *param_3,
               uint param_4,_func_UnicodeSet_ptr_int *param_5,int param_6,UErrorCode *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  RuleCharacterIterator *this;
  uint uVar11;
  undefined4 in_register_0000000c;
  uint uVar12;
  short *psVar13;
  int iVar14;
  short sVar15;
  long in_FS_OFFSET;
  long in_stack_00000010;
  UErrorCode *in_stack_00000018;
  UErrorCode *local_130;
  UnicodeSet *local_118;
  uint local_108;
  UErrorCode local_db;
  short local_da;
  short local_d8 [8];
  code *local_c8;
  undefined2 local_c0;
  code *local_88;
  ushort local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = param_7;
  if (0 < *(int *)in_stack_00000018) goto LAB_00101766;
  if (100 < param_6) {
    *(undefined4 *)in_stack_00000018 = 1;
    goto LAB_00101766;
  }
  local_c0 = 2;
  local_80 = 2;
  sVar15 = 0;
  cVar6 = '\0';
  local_c8 = icu_76_godot::UnicodeString::indexOf;
  local_88 = icu_76_godot::UnicodeString::indexOf;
  icu_76_godot::UnicodeSet::clear();
  bVar1 = false;
  uVar12 = (-(uint)(((ulong)param_5 & 1) == 0) & 0xfffffffc) + 7;
  local_118 = (UnicodeSet *)0x0;
  local_108 = 0;
  bVar2 = false;
  bVar3 = false;
LAB_001015c4:
  cVar4 = icu_76_godot::RuleCharacterIterator::atEnd();
  if (cVar4 != '\0') goto LAB_0010187a;
  psVar13 = (short *)(ulong)uVar12;
  local_db = (UErrorCode)0x0;
  this = (RuleCharacterIterator *)0x0;
  cVar5 = resemblesPropertyPattern((RuleCharacterIterator *)param_2,uVar12);
  cVar4 = '\x02';
  iVar14 = (int)param_2;
  iVar9 = (int)param_1;
  uVar11 = (uint)(UnicodeString *)&local_c8;
  if (cVar5 != '\0') {
joined_r0x00101830:
    if (cVar6 == '\x01') {
      if (sVar15 != 0) goto LAB_0010187a;
      icu_76_godot::UnicodeSet::add(iVar9,local_108);
      psVar13 = (short *)(ulong)local_108;
      icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,psVar13,0);
    }
    else if ((sVar15 == 0x2d) || (sVar15 == 0x26)) {
      psVar13 = &local_da;
      local_da = sVar15;
      icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)psVar13,0);
    }
    if ((this == (RuleCharacterIterator *)0x0) &&
       (this = (RuleCharacterIterator *)local_118, local_118 == (UnicodeSet *)0x0)) {
      this = (RuleCharacterIterator *)
             icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)psVar13);
      if (this == (RuleCharacterIterator *)0x0) {
        *(undefined4 *)in_stack_00000018 = 7;
        goto LAB_00101752;
      }
      icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet *)this);
      local_118 = (UnicodeSet *)this;
    }
    if (cVar4 == '\x02') {
      icu_76_godot::RuleCharacterIterator::skipIgnored(iVar14);
      applyPropertyPattern
                ((UnicodeSet *)this,(RuleCharacterIterator *)param_2,(UnicodeString *)&local_c8,
                 in_stack_00000018);
      if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
    }
    else if (cVar4 == '\x03') {
      icu_76_godot::UnicodeSet::_toPattern(this,(UnicodeString *)&local_c8,0);
    }
    else {
      applyPattern(this,param_2,param_3,uVar11,
                   (_func_UnicodeSet_ptr_int *)((ulong)param_5 & 0xffffffff),param_6 + 1,param_7);
    }
    if (bVar2) {
      if (sVar15 == 0x26) {
        icu_76_godot::UnicodeSet::retainAll((UnicodeSet *)param_1);
      }
      else if (sVar15 == 0x2d) {
        icu_76_godot::UnicodeSet::removeAll((UnicodeSet *)param_1);
      }
      else if (sVar15 == 0) {
        icu_76_godot::UnicodeSet::addAll((UnicodeSet *)param_1);
      }
      sVar15 = 0;
      cVar6 = '\x02';
      bVar3 = bVar2;
      goto LAB_00101957;
    }
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)param_1,(UnicodeSet *)this);
    bVar3 = true;
LAB_001016c3:
    icu_76_godot::RuleCharacterIterator::skipIgnored(iVar14);
    if (((ulong)param_5 & 6) != 0) {
      if (((ulong)param_7 & 1) != 0) {
        local_130 = *(UErrorCode **)(param_7 + *(long *)(param_1 + in_stack_00000010) + -1);
      }
      (*(code *)local_130)(param_1 + in_stack_00000010,(int)param_5);
    }
    if (bVar1) {
      icu_76_godot::UnicodeSet::complement();
      icu_76_godot::UnicodeSet::removeAllStrings();
    }
    if (bVar3) {
      icu_76_godot::UnicodeString::doAppend
                ((UnicodeString *)CONCAT44(in_register_0000000c,param_4),uVar11,0);
    }
    else {
      icu_76_godot::UnicodeSet::_generatePattern
                (param_1,(UnicodeString *)CONCAT44(in_register_0000000c,param_4),0);
    }
    if ((((byte)param_1[0x20] & 1) != 0) && (*(int *)in_stack_00000018 < 1)) {
      *(undefined4 *)in_stack_00000018 = 7;
    }
    goto LAB_00101740;
  }
  psVar13 = local_d8;
  icu_76_godot::RuleCharacterIterator::getPos((Pos *)param_2);
  uVar7 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
  if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
  if (uVar7 == 0x5b) {
    if (local_db != (UErrorCode)0x0) {
      if (param_3 != (UnicodeString *)0x0) goto LAB_001017e5;
      if (bVar2) goto LAB_00101930;
      goto LAB_0010187a;
    }
    if (bVar2) {
      icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_2);
      cVar4 = '\x01';
      goto joined_r0x00101830;
    }
    local_da = 0x5b;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
    icu_76_godot::RuleCharacterIterator::getPos((Pos *)param_2);
    iVar8 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
    if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
    if (iVar8 == 0x5e) {
      if (local_db == (UErrorCode)0x0) {
        local_da = 0x5e;
        icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
        icu_76_godot::RuleCharacterIterator::getPos((Pos *)param_2);
        iVar8 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
        if (*(int *)in_stack_00000018 < 1) {
          bVar1 = true;
          goto LAB_0010191a;
        }
        goto LAB_00101740;
      }
    }
    else {
LAB_0010191a:
      if (iVar8 == 0x2d) {
        local_db = (UErrorCode)0x1;
        uVar7 = 0x2d;
        goto LAB_00101930;
      }
    }
    icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_2);
    goto LAB_00101957;
  }
  if (param_3 != (UnicodeString *)0x0) {
LAB_001017e5:
    lVar10 = (**(code **)(*(long *)param_3 + 0x18))(param_3,uVar7);
    if (lVar10 != 0) {
      psVar13 = (short *)&UnicodeFunctor::typeinfo;
      this = (RuleCharacterIterator *)__dynamic_cast(lVar10,&UnicodeFunctor::typeinfo,&typeinfo,0);
      if (this != (RuleCharacterIterator *)0x0) {
        cVar4 = '\x03';
        goto joined_r0x00101830;
      }
      goto LAB_0010187a;
    }
  }
  if (!bVar2) goto LAB_0010187a;
  if (local_db == (UErrorCode)0x0) {
    if (uVar7 == 0x5d) {
      if (cVar6 == '\x01') {
        icu_76_godot::UnicodeSet::add(iVar9,local_108);
        icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,local_108,0);
      }
      if (sVar15 == 0x2d) {
        icu_76_godot::UnicodeSet::add(iVar9,0x2d);
        local_da = 0x2d;
        iVar9 = (int)&local_da;
        icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,iVar9,0);
      }
      else {
        iVar9 = (int)&local_da;
        if (sVar15 == 0x26) goto LAB_0010187a;
      }
      local_da = 0x5d;
      icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,iVar9,0);
      goto LAB_001016c3;
    }
    if (0x5d < (int)uVar7) {
      if (uVar7 == 0x5e) goto LAB_0010187a;
      if (uVar7 != 0x7b) goto LAB_00101930;
      if (sVar15 != 0) goto LAB_0010187a;
      if (cVar6 == '\x01') {
        icu_76_godot::UnicodeSet::add(iVar9,local_108);
        icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,local_108,0);
      }
      if ((local_80 & 1) == 0) {
        iVar9 = local_7c;
        if (-1 < (short)local_80) {
          iVar9 = (int)((short)local_80 >> 5);
        }
        if (iVar9 != 0) {
          local_80 = local_80 & 0x1f;
        }
      }
      else {
        icu_76_godot::UnicodeString::unBogus();
      }
      while( true ) {
        cVar6 = icu_76_godot::RuleCharacterIterator::atEnd();
        if (cVar6 != '\0') goto LAB_0010187a;
        iVar9 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
        if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
        if ((iVar9 == 0x7d) && (local_db == (UErrorCode)0x0)) break;
        icu_76_godot::UnicodeString::append((int)(UnicodeString *)&local_88);
      }
      icu_76_godot::UnicodeSet::add((UnicodeString *)param_1);
      local_da = 0x7b;
      icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
      icu_76_godot::UnicodeSet::_appendToPat
                ((UnicodeString *)&local_c8,(UnicodeString *)&local_88,0);
      local_da = 0x7d;
      icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
      cVar6 = '\0';
      goto LAB_00101957;
    }
    if (uVar7 == 0x26) {
      if ((cVar6 != '\x02') || (sVar15 != 0)) goto LAB_0010187a;
      sVar15 = 0x26;
      cVar6 = '\x02';
      goto LAB_00101957;
    }
    if (uVar7 == 0x2d) {
      if (sVar15 != 0) goto LAB_0010187a;
      if (cVar6 == '\0') {
        icu_76_godot::UnicodeSet::add(iVar9,0x2d);
        iVar9 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
        if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
        if ((iVar9 == 0x5d) && (local_db == (UErrorCode)0x0)) {
          icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,0x1028fe,0);
          goto LAB_001016c3;
        }
        goto LAB_0010187a;
      }
      sVar15 = 0x2d;
      goto LAB_00101957;
    }
    if (uVar7 != 0x24) goto LAB_00101930;
    icu_76_godot::RuleCharacterIterator::getPos((Pos *)param_2);
    iVar8 = icu_76_godot::RuleCharacterIterator::next(iVar14,(signed *)(ulong)uVar12,&local_db);
    if (0 < *(int *)in_stack_00000018) goto LAB_00101740;
    if ((iVar8 == 0x5d) && (local_db == (UErrorCode)0x0)) {
      if (sVar15 == 0) {
        if (cVar6 == '\x01') {
          icu_76_godot::UnicodeSet::add(iVar9,local_108);
          icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,local_108,0);
        }
        icu_76_godot::UnicodeSet::add(iVar9);
        local_da = 0x24;
        icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
        local_da = 0x5d;
        icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
        bVar3 = true;
        goto LAB_001016c3;
      }
      goto LAB_0010187a;
    }
    if (param_3 != (UnicodeString *)0x0) goto LAB_0010187a;
    icu_76_godot::RuleCharacterIterator::setPos((Pos *)param_2);
  }
LAB_00101930:
  if (cVar6 == '\x01') {
    if (sVar15 == 0x2d) {
      if ((int)uVar7 <= (int)local_108) goto LAB_0010187a;
      cVar6 = '\0';
      icu_76_godot::UnicodeSet::add(iVar9,local_108);
      icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,local_108,0);
      local_da = 0x2d;
      icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_c8,(int)&local_da,0);
      sVar15 = 0;
      icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,uVar7,0);
    }
    else {
      icu_76_godot::UnicodeSet::add(iVar9,local_108);
      icu_76_godot::UnicodeSet::_appendToPat((UnicodeString *)&local_c8,local_108,0);
      local_108 = uVar7;
    }
  }
  else {
    if (cVar6 == '\x02') {
      if (sVar15 != 0) goto LAB_0010187a;
    }
    else if (cVar6 != '\0') goto LAB_00101957;
    cVar6 = '\x01';
    local_108 = uVar7;
  }
LAB_00101957:
  bVar2 = true;
  goto LAB_001015c4;
LAB_0010187a:
  *(undefined4 *)in_stack_00000018 = 0x10002;
LAB_00101740:
  if (local_118 != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(local_118);
  }
LAB_00101752:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
LAB_00101766:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::UnicodeSet::applyPatternIgnoreSpace(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, icu_76_godot::SymbolTable const*, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::applyPatternIgnoreSpace
          (UnicodeSet *this,UnicodeString *param_1,ParsePosition *param_2,SymbolTable *param_3,
          UErrorCode *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  RuleCharacterIterator aRStack_a8 [24];
  long local_90;
  code *local_78;
  ushort local_70;
  undefined1 local_6e [14];
  int local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
      local_78 = icu_76_godot::UnicodeString::indexOf;
      local_70 = 2;
      icu_76_godot::RuleCharacterIterator::RuleCharacterIterator(aRStack_a8,param_1,param_3,param_2)
      ;
      applyPattern((RuleCharacterIterator *)this,(SymbolTable *)aRStack_a8,(UnicodeString *)param_3,
                   (uint)(UnicodeString *)&local_78,(_func_UnicodeSet_ptr_int *)0x1,0,
                   (UErrorCode *)0x0);
      if (*(int *)param_4 < 1) {
        if (local_90 == 0) {
          iVar1 = 0;
          if (((local_70 & 0x11) == 0) && (iVar1 = (int)local_6e, (local_70 & 2) == 0)) {
            iVar1 = local_60;
          }
          icu_76_godot::UnicodeSet::setPattern((wchar16 *)this,iVar1);
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
          goto LAB_001020eb;
        }
        *(undefined4 *)param_4 = 0x10002;
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
    }
    else {
      *(undefined4 *)param_4 = 0x1e;
    }
  }
LAB_001020eb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::applyPattern(icu_76_godot::UnicodeString const&, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyPattern(UnicodeSet *this,UnicodeString *param_1,UErrorCode *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_4c;
  code *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = icu_76_godot::RuleCharacterIterator::jumpahead;
  local_40 = _LC3;
  applyPatternIgnoreSpace(this,param_1,(ParsePosition *)&local_48,(SymbolTable *)0x0,param_2);
  if (*(int *)param_2 < 1) {
    local_4c = (int)local_40;
    icu_76_godot::ICU_Utility::skipWhitespace(param_1,&local_4c,1);
    if (*(short *)(param_1 + 8) < 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (local_4c != iVar1) {
      *(undefined4 *)param_2 = 1;
    }
  }
  icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::UnicodeSet(icu_76_godot::UnicodeString const&, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::UnicodeSet(UnicodeSet *this,UnicodeString *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar1 = _LC5;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  *(code **)this = icu_76_godot::UnicodeString::doAppend;
  *(undefined8 *)(this + 8) = 0x104350;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  applyPattern(this,param_1,param_2);
  return;
}



UnicodeSet * uniset_getUnicode32Instance_76_godot(UErrorCode *param_1,ulong param_2)

{
  undefined8 uVar1;
  char cVar2;
  UnicodeSet *this;
  long lVar3;
  long in_FS_OFFSET;
  code *local_78;
  undefined2 local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    if (uni32InitOnce != 2) {
      cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&uni32InitOnce);
      if (cVar2 != '\0') {
        this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,param_2);
        if (this == (UnicodeSet *)0x0) {
          uni32Singleton = (UnicodeSet *)0x0;
        }
        else {
          lVar3 = 0;
          local_78 = icu_76_godot::UnicodeString::indexOf;
          local_70 = 2;
          do {
            lVar3 = lVar3 + 1;
          } while (*(short *)(&_LC7 + lVar3 * 2) != 0);
          icu_76_godot::UnicodeString::doAppend(&local_78);
          this[0x20] = (UnicodeSet)0x0;
          *(undefined4 *)(this + 0x38) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(UnicodeSet **)(this + 0x10) = this + 0x60;
          uVar1 = _LC5;
          *(undefined4 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x18) = uVar1;
          *(code **)this = icu_76_godot::UnicodeString::doAppend;
          *(undefined8 *)(this + 8) = 0x104350;
          *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
          icu_76_godot::UnicodeSet::applyPattern(this,(UnicodeString *)&local_78,param_1);
          uni32Singleton = this;
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
        }
        if (uni32Singleton == (UnicodeSet *)0x0) {
          *(undefined4 *)param_1 = 7;
        }
        else {
          icu_76_godot::UnicodeSet::freeze();
        }
        ucln_common_registerCleanup_76_godot(0x11,0x100000);
        DAT_001024c4 = *(int *)param_1;
        icu_76_godot::umtx_initImplPostInit((UInitOnce *)&uni32InitOnce);
        goto LAB_00102344;
      }
    }
    if (0 < DAT_001024c4) {
      *(int *)param_1 = DAT_001024c4;
    }
  }
LAB_00102344:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uni32Singleton;
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
LAB_001027af:
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
      goto LAB_001027af;
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


