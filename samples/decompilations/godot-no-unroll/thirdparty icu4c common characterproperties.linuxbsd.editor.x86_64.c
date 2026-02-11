
/* (anonymous namespace)::_set_add(USet*, int) */

void (anonymous_namespace)::_set_add(USet *param_1,int param_2)

{
  icu_76_godot::UnicodeSet::add((int)param_1);
  return;
}



/* (anonymous namespace)::characterproperties_cleanup() */

undefined8 (anonymous_namespace)::characterproperties_cleanup(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = &DAT_00101048;
  do {
    if (*(UnicodeSet **)(puVar1 + -2) != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(puVar1 + -2));
    }
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    LOCK();
    *puVar1 = 0;
    UNLOCK();
    puVar1 = puVar1 + 4;
  } while (puVar1 != &UINT_00101338);
  puVar2 = &sets;
  do {
    if ((UnicodeSet *)*puVar2 != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)*puVar2);
    }
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 != &gInclusions);
  puVar2 = &maps;
  do {
    puVar3 = puVar2 + 1;
    ucptrie_close_76_godot(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined8 *)&DAT_00100dd8);
  return 1;
}



/* (anonymous namespace)::initInclusion(UPropertySource, UErrorCode&) */

void (anonymous_namespace)::initInclusion(int param_1,UErrorCode *param_2)

{
  int iVar1;
  UnicodeSet *this;
  USetAdder *pUVar2;
  long in_FS_OFFSET;
  UnicodeSet *local_68;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    *(undefined4 *)param_2 = 5;
    goto LAB_001000e7;
  }
  this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_2);
  if (this == (UnicodeSet *)0x0) {
    *(undefined4 *)param_2 = 7;
    goto LAB_001000e7;
  }
  icu_76_godot::UnicodeSet::UnicodeSet(this);
  local_48 = (undefined1  [16])0x0;
  local_50 = _set_addString;
  local_60 = _set_add;
  pcStack_58 = _set_addRange;
  local_68 = this;
  switch(param_1) {
  default:
    *(undefined4 *)param_2 = 5;
    goto LAB_001001b6;
  case 1:
    uchar_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 2:
    upropsvec_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 4:
    ucase_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 5:
    ubidi_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 6:
    uchar_addPropertyStarts_76_godot(&local_68,param_2);
    upropsvec_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 7:
    pUVar2 = (USetAdder *)icu_76_godot::Normalizer2Factory::getNFCImpl(param_2);
    if (*(int *)param_2 < 1) {
      icu_76_godot::Normalizer2Impl::addPropertyStarts(pUVar2,(UErrorCode *)&local_68);
    }
    ucase_addPropertyStarts_76_godot(&local_68,param_2);
    break;
  case 8:
    pUVar2 = (USetAdder *)icu_76_godot::Normalizer2Factory::getNFCImpl(param_2);
    iVar1 = *(int *)param_2;
    goto joined_r0x00100355;
  case 9:
    pUVar2 = (USetAdder *)icu_76_godot::Normalizer2Factory::getNFKCImpl(param_2);
    if (0 < *(int *)param_2) goto LAB_001001b6;
    goto LAB_0010031d;
  case 10:
    pUVar2 = (USetAdder *)icu_76_godot::Normalizer2Factory::getNFKC_CFImpl(param_2);
    iVar1 = *(int *)param_2;
joined_r0x00100355:
    if (iVar1 < 1) {
LAB_0010031d:
      icu_76_godot::Normalizer2Impl::addPropertyStarts(pUVar2,(UErrorCode *)&local_68);
      break;
    }
    goto LAB_001001b6;
  case 0xb:
    pUVar2 = (USetAdder *)icu_76_godot::Normalizer2Factory::getNFCImpl(param_2);
    if (*(int *)param_2 < 1) {
      icu_76_godot::Normalizer2Impl::addCanonIterPropertyStarts(pUVar2,(UErrorCode *)&local_68);
      break;
    }
    goto LAB_001001b6;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x13:
    uprops_addPropertyStarts_76_godot(param_1,&local_68,param_2);
    break;
  case 0xf:
    pUVar2 = (USetAdder *)icu_76_godot::EmojiProps::getSingleton(param_2);
    if (*(int *)param_2 < 1) {
      icu_76_godot::EmojiProps::addPropertyStarts(pUVar2,(UErrorCode *)&local_68);
      break;
    }
    goto LAB_001001b6;
  case 0x10:
    icu_76_godot::UnicodeSet::add((int)this);
    (*local_60)(local_68,0x3000);
    break;
  case 0x12:
    ublock_addPropertyStarts_76_godot(&local_68,param_2);
  }
  if (*(int *)param_2 < 1) {
    if (((byte)this[0x20] & 1) == 0) {
      icu_76_godot::UnicodeSet::compact();
      (&gInclusions)[(long)param_1 * 2] = this;
      ucln_common_registerCleanup_76_godot(0x10,characterproperties_cleanup);
      goto LAB_001000e7;
    }
    *(undefined4 *)param_2 = 7;
  }
LAB_001001b6:
  icu_76_godot::UnicodeSet::~UnicodeSet(this);
LAB_001000e7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CharacterProperties::getInclusionsForProperty(UProperty, UErrorCode&) */

undefined8 icu_76_godot::CharacterProperties::getInclusionsForProperty(int param_1,int *param_2)

{
  UInitOnce *pUVar1;
  UInitOnce *pUVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  UnicodeSet *this;
  int *piVar12;
  int local_40;
  
  if (0 < *param_2) {
    return 0;
  }
  if (0x1a < param_1 - 0x1000U) {
    uVar5 = uprops_getSource_76_godot();
    if (*param_2 < 1) {
      if (uVar5 < 0x14) {
        pUVar1 = (UInitOnce *)(&DAT_00101048 + (ulong)uVar5 * 4);
        if ((*(int *)pUVar1 == 2) ||
           (cVar4 = icu_76_godot::umtx_initImplPreInit(pUVar1), cVar4 == '\0')) {
          if (0 < *(int *)(&DAT_0010104c + (long)(int)uVar5 * 0x10)) {
            *param_2 = *(int *)(&DAT_0010104c + (long)(int)uVar5 * 0x10);
          }
        }
        else {
          (anonymous_namespace)::initInclusion(uVar5,param_2);
          *(int *)(&DAT_0010104c + (long)(int)uVar5 * 0x10) = *param_2;
          icu_76_godot::umtx_initImplPostInit(pUVar1);
        }
        return (&(anonymous_namespace)::gInclusions)[(long)(int)uVar5 * 2];
      }
      *param_2 = 1;
    }
    return 0;
  }
  lVar11 = (long)(param_1 + -0xfec);
  pUVar1 = (UInitOnce *)(&DAT_00101048 + lVar11 * 4);
  if ((*(int *)pUVar1 == 2) ||
     (piVar12 = param_2, cVar4 = icu_76_godot::umtx_initImplPreInit(pUVar1), cVar4 == '\0')) {
    if (0 < *(int *)(&DAT_0010104c + lVar11 * 0x10)) {
      *param_2 = *(int *)(&DAT_0010104c + lVar11 * 0x10);
    }
    goto LAB_0010047e;
  }
  uVar5 = uprops_getSource_76_godot(param_1);
  iVar10 = *param_2;
  if (iVar10 < 1) {
    if (uVar5 < 0x14) {
      pUVar2 = (UInitOnce *)(&DAT_00101048 + (ulong)uVar5 * 4);
      if ((*(int *)pUVar2 == 2) ||
         (cVar4 = icu_76_godot::umtx_initImplPreInit(pUVar2), cVar4 == '\0')) {
        iVar10 = *(int *)(&DAT_0010104c + (long)(int)uVar5 * 0x10);
        if (0 < iVar10) {
          *param_2 = iVar10;
          goto LAB_00100636;
        }
        iVar10 = *param_2;
      }
      else {
        piVar12 = param_2;
        (anonymous_namespace)::initInclusion(uVar5);
        *(int *)(&DAT_0010104c + (long)(int)uVar5 * 0x10) = *param_2;
        icu_76_godot::umtx_initImplPostInit(pUVar2);
        iVar10 = *param_2;
      }
      if (iVar10 < 1) {
        uVar3 = (&(anonymous_namespace)::gInclusions)[(long)(int)uVar5 * 2];
        this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)piVar12);
        if (this == (UnicodeSet *)0x0) {
          *param_2 = 7;
          iVar10 = 7;
        }
        else {
          iVar10 = 0;
          icu_76_godot::UnicodeSet::UnicodeSet(this,0,0);
          iVar6 = icu_76_godot::UnicodeSet::getRangeCount();
          local_40 = 0;
          if (0 < iVar6) {
            do {
              iVar7 = icu_76_godot::UnicodeSet::getRangeEnd((int)uVar3);
              iVar8 = icu_76_godot::UnicodeSet::getRangeStart((int)uVar3);
              for (; iVar8 <= iVar7; iVar8 = iVar8 + 1) {
                iVar9 = u_getIntPropertyValue_76_godot(iVar8,param_1);
                if (iVar10 != iVar9) {
                  icu_76_godot::UnicodeSet::add((int)this);
                }
                iVar10 = iVar9;
              }
              local_40 = local_40 + 1;
            } while (iVar6 != local_40);
          }
          if (((byte)this[0x20] & 1) == 0) {
            icu_76_godot::UnicodeSet::compact();
            (&(anonymous_namespace)::gInclusions)[lVar11 * 2] = this;
            ucln_common_registerCleanup_76_godot
                      (0x10,(anonymous_namespace)::characterproperties_cleanup);
            iVar10 = *param_2;
          }
          else {
            *param_2 = 7;
            icu_76_godot::UnicodeSet::~UnicodeSet(this);
            iVar10 = *param_2;
          }
        }
      }
    }
    else {
      *param_2 = 1;
      iVar10 = 1;
    }
  }
LAB_00100636:
  *(int *)(&DAT_0010104c + lVar11 * 0x10) = iVar10;
  icu_76_godot::umtx_initImplPostInit(pUVar1);
LAB_0010047e:
  return (&(anonymous_namespace)::gInclusions)[lVar11 * 2];
}



long u_getIntPropertyMap_76_godot(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_58;
  
  if (*param_2 < 1) {
    uVar12 = param_1 - 0x1000;
    if (uVar12 < 0x1b) {
      umtx_lock_76_godot((anonymous_namespace)::cpMutex);
      lVar10 = (&(anonymous_namespace)::maps)[(int)uVar12];
      if (lVar10 == 0) {
        if (*param_2 < 1) {
          iVar8 = 0x67;
          if (param_1 != 0x100a) {
            iVar8 = 0;
          }
          lVar9 = umutablecptrie_open_76_godot(iVar8,iVar8,param_2);
          iVar2 = icu_76_godot::CharacterProperties::getInclusionsForProperty(param_1,param_2);
          if (*param_2 < 1) {
            iVar3 = icu_76_godot::UnicodeSet::getRangeCount();
            local_58 = 0;
            iVar14 = iVar8;
            if (0 < iVar3) {
              iVar4 = 0;
              do {
                iVar5 = icu_76_godot::UnicodeSet::getRangeEnd(iVar2);
                iVar6 = icu_76_godot::UnicodeSet::getRangeStart(iVar2);
                iVar1 = local_58;
                for (; local_58 = iVar1, iVar6 <= iVar5; iVar6 = iVar6 + 1) {
                  iVar7 = u_getIntPropertyValue_76_godot(iVar6,param_1);
                  iVar13 = iVar14;
                  if ((iVar7 != iVar14) && (local_58 = iVar6, iVar13 = iVar7, iVar8 != iVar14)) {
                    umutablecptrie_setRange_76_godot(lVar9,iVar1,iVar6 + -1,iVar14,param_2);
                  }
                  iVar14 = iVar13;
                  iVar1 = local_58;
                }
                iVar4 = iVar4 + 1;
              } while (iVar3 != iVar4);
            }
            if (iVar14 != 0) {
              umutablecptrie_setRange_76_godot(lVar9,local_58,0x10ffff,iVar14,param_2);
            }
            iVar8 = u_getIntPropertyMaxValue_76_godot(param_1);
            uVar11 = 2;
            if (0xff < iVar8) {
              uVar11 = 0xffff < iVar8;
            }
            lVar10 = umutablecptrie_buildImmutable_76_godot
                               (lVar9,param_1 != 0x1000 && param_1 != 0x1005,uVar11,param_2);
          }
          if (lVar9 != 0) {
            umutablecptrie_close_76_godot(lVar9);
          }
        }
        (&(anonymous_namespace)::maps)[(int)uVar12] = lVar10;
      }
      umtx_unlock_76_godot((anonymous_namespace)::cpMutex);
      return lVar10;
    }
    *param_2 = 1;
  }
  return 0;
}



/* (anonymous namespace)::_set_addString(USet*, char16_t const*, int) */

void (anonymous_namespace)::_set_addString(USet *param_1,wchar16 *param_2,int param_3)

{
  long in_FS_OFFSET;
  wchar16 *local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,(uint)param_3 >> 0x1f,&local_70);
  icu_76_godot::UnicodeSet::add((UnicodeString *)param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::_set_addRange(USet*, int, int) */

void (anonymous_namespace)::_set_addRange(USet *param_1,int param_2,int param_3)

{
  icu_76_godot::UnicodeSet::add((int)param_1,param_2);
  return;
}



/* (anonymous namespace)::makeSet(UProperty, UErrorCode&) */

UnicodeSet * (anonymous_namespace)::makeSet(int param_1,UErrorCode *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UnicodeSet *this;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  UnicodeSet *local_78;
  undefined8 local_70;
  code *pcStack_68;
  code *local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_2);
    if (this == (UnicodeSet *)0x0) {
      *(undefined4 *)param_2 = 7;
    }
    else {
      icu_76_godot::UnicodeSet::UnicodeSet(this);
      if (param_1 - 0x41U < 7) {
        uVar6 = icu_76_godot::EmojiProps::getSingleton(param_2);
        if (*(int *)param_2 < 1) {
          local_58 = (undefined1  [16])0x0;
          local_60 = _set_addString;
          local_70 = 0x100000;
          pcStack_68 = _set_addRange;
          local_78 = this;
          icu_76_godot::EmojiProps::addStrings(uVar6,&local_78,param_1,param_2);
          if ((param_1 == 0x41) || (param_1 == 0x47)) goto LAB_001009f1;
          goto LAB_00100aad;
        }
      }
      else {
LAB_001009f1:
        iVar2 = icu_76_godot::CharacterProperties::getInclusionsForProperty(param_1,param_2);
        if (*(int *)param_2 < 1) {
          iVar3 = icu_76_godot::UnicodeSet::getRangeCount();
          if (0 < iVar3) {
            iVar7 = 0;
            iVar8 = -1;
            do {
              iVar4 = icu_76_godot::UnicodeSet::getRangeEnd(iVar2);
              iVar5 = icu_76_godot::UnicodeSet::getRangeStart(iVar2);
joined_r0x00100b01:
              if (iVar5 <= iVar4) {
                do {
                  cVar1 = u_hasBinaryProperty_76_godot(iVar5,param_1);
                  if (cVar1 == '\0') {
                    if (-1 < iVar8) goto code_r0x00100b2b;
                  }
                  else if (iVar8 < 0) {
                    iVar8 = iVar5;
                  }
                  iVar5 = iVar5 + 1;
                  if (iVar4 < iVar5) break;
                } while( true );
              }
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) {
                if (-1 < iVar8) {
                  icu_76_godot::UnicodeSet::add((int)this,iVar8);
                }
                break;
              }
            } while( true );
          }
LAB_00100aad:
          icu_76_godot::UnicodeSet::freeze();
          goto LAB_00100a14;
        }
      }
      icu_76_godot::UnicodeSet::~UnicodeSet(this);
    }
  }
  this = (UnicodeSet *)0x0;
LAB_00100a14:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100b2b:
  iVar5 = iVar5 + 1;
  icu_76_godot::UnicodeSet::add((int)this,iVar8);
  iVar8 = -1;
  goto joined_r0x00100b01;
}



/* icu_76_godot::CharacterProperties::getBinaryPropertySet(UProperty, UErrorCode&) */

long icu_76_godot::CharacterProperties::getBinaryPropertySet(uint param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 < 1) {
    if (param_1 < 0x4c) {
      umtx_lock_76_godot((anonymous_namespace)::cpMutex);
      lVar1 = (&(anonymous_namespace)::sets)[(int)param_1];
      if (lVar1 == 0) {
        lVar1 = (anonymous_namespace)::makeSet(param_1,param_2);
        (&(anonymous_namespace)::sets)[(int)param_1] = lVar1;
      }
      umtx_unlock_76_godot((anonymous_namespace)::cpMutex);
      return lVar1;
    }
    *param_2 = 1;
  }
  return 0;
}



long u_getBinaryPropertySet_76_godot(uint param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 < 1) {
    if (param_1 < 0x4c) {
      umtx_lock_76_godot((anonymous_namespace)::cpMutex);
      lVar1 = (&(anonymous_namespace)::sets)[(int)param_1];
      if (lVar1 == 0) {
        lVar1 = (anonymous_namespace)::makeSet(param_1,param_2);
        (&(anonymous_namespace)::sets)[(int)param_1] = lVar1;
      }
      umtx_unlock_76_godot((anonymous_namespace)::cpMutex);
      if (*param_2 < 1) {
        return lVar1;
      }
    }
    else {
      *param_2 = 1;
    }
  }
  return 0;
}


