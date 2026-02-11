
/* icu_76_godot::(anonymous namespace)::cleanup() */

undefined8 icu_76_godot::(anonymous_namespace)::cleanup(void)

{
  UMemory *this;
  void *in_RSI;
  
  this = gLocaleDistance;
  if (gLocaleDistance != (UMemory *)0x0) {
    icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)(gLocaleDistance + 8));
    icu_76_godot::UMemory::operator_delete(this,in_RSI);
  }
  gLocaleDistance = (UMemory *)0x0;
  LOCK();
  gInitOnce = 0;
  UNLOCK();
  return 1;
}



/* icu_76_godot::LocaleDistance::getRegionPartitionsDistance(icu_76_godot::BytesTrie&, unsigned
   long, char const*, char const*, int) */

ulong icu_76_godot::LocaleDistance::getRegionPartitionsDistance
                (BytesTrie *param_1,ulong param_2,char *param_3,char *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  char *local_70;
  int local_5c;
  
  cVar1 = param_4[1];
  iVar10 = (int)param_1;
  uVar8 = (uint)(param_2 >> 0x20);
  if (cVar1 == '\0' && param_3[1] == '\0') {
    uVar5 = icu_76_godot::BytesTrie::next(iVar10);
    if (((uVar5 & 1) == 0) || (iVar7 = icu_76_godot::BytesTrie::next(iVar10), iVar7 < 2)) {
      *(uint *)(param_1 + 0x18) = (uVar8 >> 0x1b) - 2;
      *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
      icu_76_godot::BytesTrie::next(iVar10);
    }
    uVar5 = icu_76_godot::BytesTrie::readValue
                      (*(byte **)(param_1 + 0x10) + 1,(int)(uint)**(byte **)(param_1 + 0x10) >> 1);
    return uVar5;
  }
  bVar2 = false;
  iVar7 = (uVar8 >> 0x1b) - 2;
  uVar8 = 0;
  local_70 = param_3 + 1;
  do {
    uVar5 = icu_76_godot::BytesTrie::next(iVar10);
    if ((uVar5 & 1) == 0) {
      if (!bVar2) {
        *(int *)(param_1 + 0x18) = iVar7;
        *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
        icu_76_godot::BytesTrie::next(iVar10);
        uVar5 = icu_76_godot::BytesTrie::readValue
                          (*(byte **)(param_1 + 0x10) + 1,
                           (int)(uint)**(byte **)(param_1 + 0x10) >> 1);
        uVar4 = (uint)uVar5;
        if (param_5 < (int)uVar4) {
          return uVar5;
        }
        bVar2 = true;
        if ((int)uVar8 < (int)uVar4) {
          uVar8 = uVar4;
        }
      }
    }
    else {
      pcVar9 = param_4 + 1;
      if (cVar1 == '\0') {
        local_5c = -2;
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)(*(int *)(param_1 + 0x18) + 2) << 0x3b |
                *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
        local_5c = (uint)(uVar5 >> 0x3b) - 2;
      }
      while( true ) {
        iVar3 = icu_76_godot::BytesTrie::next(iVar10);
        if (iVar3 < 2) {
          uVar6 = 0;
          if (!bVar2) {
            bVar2 = true;
            *(int *)(param_1 + 0x18) = iVar7;
            *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
            icu_76_godot::BytesTrie::next(iVar10);
            uVar6 = icu_76_godot::BytesTrie::readValue
                              (*(byte **)(param_1 + 0x10) + 1,
                               (int)(uint)**(byte **)(param_1 + 0x10) >> 1);
          }
          iVar3 = (int)uVar6;
        }
        else {
          uVar6 = icu_76_godot::BytesTrie::readValue
                            (*(byte **)(param_1 + 0x10) + 1,
                             (int)(uint)**(byte **)(param_1 + 0x10) >> 1);
          iVar3 = (int)uVar6;
        }
        if (param_5 < iVar3) {
          return uVar6;
        }
        if ((int)uVar8 < (int)(uint)uVar6) {
          uVar8 = (uint)uVar6;
        }
        if (*pcVar9 == '\0') break;
        *(int *)(param_1 + 0x18) = local_5c;
        *(ulong *)(param_1 + 0x10) = (uVar5 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
        pcVar9 = pcVar9 + 1;
      }
    }
    if (*local_70 == '\0') {
      return (ulong)uVar8;
    }
    *(int *)(param_1 + 0x18) = iVar7;
    *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
    local_70 = local_70 + 1;
  } while( true );
}



/* icu_76_godot::LocaleDistance::getFallbackRegionDistance(icu_76_godot::BytesTrie&, unsigned long)
    */

void icu_76_godot::LocaleDistance::getFallbackRegionDistance(BytesTrie *param_1,ulong param_2)

{
  *(uint *)(param_1 + 0x18) = (uint)(param_2 >> 0x3b) - 2;
  *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
  icu_76_godot::BytesTrie::next((int)param_1);
  icu_76_godot::BytesTrie::readValue
            (*(byte **)(param_1 + 0x10) + 1,(int)(uint)**(byte **)(param_1 + 0x10) >> 1);
  return;
}



/* icu_76_godot::LocaleDistance::trieNext(icu_76_godot::BytesTrie&, char const*, bool) */

uint icu_76_godot::LocaleDistance::trieNext(BytesTrie *param_1,char *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*param_2 != '\0') {
    do {
      param_2 = param_2 + 1;
      if (*param_2 == '\0') {
        uVar1 = icu_76_godot::BytesTrie::next((int)param_1);
        if (!param_3) {
          return (uVar1 & 1) - 1;
        }
        if ((int)uVar1 < 2) {
          return 0xffffffff;
        }
        uVar2 = icu_76_godot::BytesTrie::readValue
                          (*(byte **)(param_1 + 0x10) + 1,
                           (int)(uint)**(byte **)(param_1 + 0x10) >> 1);
        if (uVar1 == 2) {
          uVar2 = uVar2 | 0x100;
        }
        return uVar2;
      }
      uVar3 = icu_76_godot::BytesTrie::next((int)param_1);
    } while ((uVar3 & 1) != 0);
  }
  return 0xffffffff;
}



/* icu_76_godot::LocaleDistance::getDesSuppScriptDistance(icu_76_godot::BytesTrie&, unsigned long,
   char const*, char const*) */

ulong icu_76_godot::LocaleDistance::getDesSuppScriptDistance
                (BytesTrie *param_1,ulong param_2,char *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar1 = trieNext(param_1,param_3,false);
  if ((-1 < iVar1) && (uVar4 = trieNext(param_1,param_4,true), -1 < (int)uVar4)) {
    return uVar4;
  }
  *(uint *)(param_1 + 0x18) = (uint)(param_2 >> 0x3b) - 2;
  *(ulong *)(param_1 + 0x10) = (param_2 & 0x7ffffffffffffff) + *(long *)(param_1 + 8);
  iVar1 = icu_76_godot::BytesTrie::next((int)param_1);
  iVar2 = strcmp(param_3,param_4);
  if (iVar2 == 0) {
    uVar4 = 0;
    if (iVar1 == 2) {
      uVar4 = 0x100;
    }
  }
  else {
    uVar3 = icu_76_godot::BytesTrie::readValue
                      (*(byte **)(param_1 + 0x10) + 1,(int)(uint)**(byte **)(param_1 + 0x10) >> 1);
    uVar4 = (ulong)uVar3;
    if (iVar1 == 2) {
      uVar4 = (ulong)uVar3 | 0x100;
    }
  }
  return uVar4;
}



/* icu_76_godot::LocaleDistance::getBestIndexAndDistance(icu_76_godot::LSR const&, icu_76_godot::LSR
   const**, int, int, ULocMatchFavorSubtag, ULocMatchDirection) const */

uint __thiscall
icu_76_godot::LocaleDistance::getBestIndexAndDistance
          (LocaleDistance *this,undefined8 *param_1,long param_2,int param_3,uint param_4,
          int param_6,int param_7)

{
  LSR *pLVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint local_c0;
  ulong local_90;
  int local_88;
  undefined8 *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *(long *)(this + 0x10);
  local_68 = 0;
  local_58 = *(long *)(this + 0x18);
  local_50 = *(int *)(this + 0x20);
  iVar4 = trieNext((BytesTrie *)&local_68,(char *)*param_1,false);
  if ((iVar4 < 0) || (param_3 < 2)) {
    local_90 = 0;
    if (0 < param_3) goto LAB_001005db;
  }
  else {
    local_90 = (ulong)(local_50 + 2) << 0x3b | local_58 - local_60;
LAB_001005db:
    local_88 = -1;
    lVar8 = 0;
    local_c0 = param_4;
LAB_00100610:
    do {
      pLVar1 = *(LSR **)(param_2 + lVar8 * 8);
      if (iVar4 < 0) {
LAB_001007b0:
        iVar9 = strcmp((char *)*param_1,*(char **)pLVar1);
        if (iVar9 == 0) {
          bVar2 = true;
          uVar5 = 0;
          uVar11 = 0;
        }
        else {
          bVar2 = true;
          uVar5 = 0;
          uVar11 = *(uint *)(this + 0x44);
        }
      }
      else {
        if (lVar8 != 0) {
          local_58 = (local_90 & 0x7ffffffffffffff) + local_60;
          local_50 = (uint)(local_90 >> 0x3b) - 2;
        }
        uVar5 = trieNext((BytesTrie *)&local_68,*(char **)pLVar1,true);
        if ((int)uVar5 < 0) goto LAB_001007b0;
        bVar2 = false;
        uVar11 = uVar5 & 0xfffffe7f;
        uVar5 = uVar5 & 0x180;
      }
      iVar9 = (int)(local_c0 + 7) >> 3;
      if (param_6 == 1) {
        uVar11 = (int)uVar11 >> 2;
      }
      iVar3 = local_88;
      if (iVar9 < (int)uVar11) {
joined_r0x00100a9a:
        lVar8 = lVar8 + 1;
        local_88 = iVar3;
        if (lVar8 == param_3) break;
        goto LAB_00100610;
      }
      if ((uVar5 != 0) || (bVar2)) {
        iVar6 = strcmp((char *)param_1[1],*(char **)(pLVar1 + 8));
        if (iVar6 != 0) {
          uVar10 = *(uint *)(this + 0x48);
          goto LAB_001006f7;
        }
      }
      else {
        uVar5 = getDesSuppScriptDistance
                          ((BytesTrie *)&local_68,
                           (ulong)(local_50 + 2) << 0x3b | local_58 - local_60,(char *)param_1[1],
                           *(char **)(pLVar1 + 8));
        uVar10 = uVar5 & 0xfffffeff;
        uVar5 = uVar5 & 0x100;
LAB_001006f7:
        uVar11 = uVar11 + uVar10;
        if (iVar9 < (int)uVar11) goto joined_r0x00100a9a;
      }
      iVar6 = strcmp((char *)param_1[2],*(char **)(pLVar1 + 0x10));
      if (iVar6 != 0) {
        if ((bVar2) || ((uVar5 & 0x100) != 0)) {
          uVar11 = uVar11 + *(int *)(this + 0x4c);
        }
        else {
          if ((int)(iVar9 - uVar11) < *(int *)(this + 0x50)) goto joined_r0x00100a9a;
          iVar9 = getRegionPartitionsDistance
                            ((BytesTrie *)&local_68,
                             (ulong)(local_50 + 2) << 0x3b | local_58 - local_60,
                             *(char **)(*(long *)(this + 0x30) +
                                       (ulong)*(byte *)(*(long *)(this + 0x28) +
                                                       (long)*(int *)(param_1 + 4)) * 8),
                             *(char **)(*(long *)(this + 0x30) +
                                       (ulong)*(byte *)(*(long *)(this + 0x28) +
                                                       (long)*(int *)(pLVar1 + 0x20)) * 8),
                             iVar9 - uVar11);
          uVar11 = uVar11 + iVar9;
        }
      }
      uVar11 = uVar11 * 8;
      iVar9 = (int)lVar8;
      if (uVar11 == 0) {
        uVar5 = *(uint *)((long)param_1 + 0x24);
        uVar11 = *(uint *)(pLVar1 + 0x24);
        uVar10 = uVar5 ^ uVar11;
        if (((int)local_c0 <= (int)uVar10) ||
           (((param_7 == 1 &&
             (local_70 = param_1,
             iVar6 = getBestIndexAndDistance(this,pLVar1,&local_70,1,local_c0,param_6,0), iVar6 < 0)
             ) || (local_c0 = uVar10, iVar3 = iVar9, uVar5 != uVar11)))) goto joined_r0x00100a9a;
        local_c0 = iVar9 << 10;
        goto LAB_00100771;
      }
      if ((int)local_c0 <= (int)uVar11) {
        if ((((uVar11 == local_c0) && (-1 < local_88)) &&
            ((param_7 != 1 ||
             (local_70 = param_1,
             iVar6 = getBestIndexAndDistance(this,pLVar1,&local_70,1,local_c0,param_6,0), -1 < iVar6
             )))) && (uVar7 = icu_76_godot::LikelySubtags::compareLikely
                                        (*(LSR **)this,pLVar1,
                                         (int)*(undefined8 *)(param_2 + (long)local_88 * 8)),
                     iVar3 = iVar9, (uVar7 & 1) == 0)) {
          iVar3 = local_88;
        }
        goto joined_r0x00100a9a;
      }
      if ((param_7 == 1) &&
         (local_70 = param_1,
         iVar6 = getBestIndexAndDistance(this,pLVar1,&local_70,1,local_c0,param_6,0), iVar6 < 0))
      goto joined_r0x00100a9a;
      lVar8 = lVar8 + 1;
      local_c0 = uVar11;
      local_88 = iVar9;
    } while (lVar8 != param_3);
    if (-1 < local_88) {
      local_c0 = local_88 << 10 | local_c0;
      goto LAB_00100771;
    }
  }
  local_c0 = 0xffffff20;
LAB_00100771:
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleDistance::LocaleDistance(icu_76_godot::LocaleDistanceData const&,
   icu_76_godot::LikelySubtags const&) */

void __thiscall
icu_76_godot::LocaleDistance::LocaleDistance
          (LocaleDistance *this,LocaleDistanceData *param_1,LikelySubtags *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined **local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  long local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(LikelySubtags **)this = param_2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x40) = uVar1;
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  *(undefined4 *)(this + 0x44) = *puVar3;
  *(undefined4 *)(this + 0x48) = puVar3[1];
  *(undefined4 *)(this + 0x4c) = puVar3[2];
  local_88 = &_LC0;
  puStack_80 = &_LC1;
  *(undefined4 *)(this + 0x50) = puVar3[3];
  local_78 = &_LC2;
  local_70 = 0;
  local_68 = icu_76_godot::LSR::indexForRegion("US");
  local_64 = 7;
  local_48 = &_LC3;
  local_40 = 0;
  local_58 = &_LC0;
  puStack_50 = &_LC1;
  local_38 = icu_76_godot::LSR::indexForRegion("GB");
  local_34 = 7;
  local_90 = &local_58;
  iVar5 = getBestIndexAndDistance(this,&local_88,&local_90,1,400,0,0);
  *(uint *)(this + 0x54) = iVar5 >> 3 & 0x7f;
  if (local_40 != 0) {
    icu_76_godot::LSR::deleteOwned();
  }
  if (local_70 != 0) {
    icu_76_godot::LSR::deleteOwned();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleDistance::initLocaleDistance(UErrorCode&) */

void __thiscall
icu_76_godot::LocaleDistance::initLocaleDistance(LocaleDistance *this,UErrorCode *param_1)

{
  LikelySubtags *pLVar1;
  LocaleDistance *this_00;
  
  pLVar1 = (LikelySubtags *)icu_76_godot::LikelySubtags::getSingleton((UErrorCode *)this);
  if (*(int *)this < 1) {
    if ((((*(long *)(pLVar1 + 0x130) == 0) || (*(long *)(pLVar1 + 0x138) == 0)) ||
        (*(long *)(pLVar1 + 0x140) == 0)) || (*(long *)(pLVar1 + 0x158) == 0)) {
      *(undefined4 *)this = 2;
    }
    else {
      this_00 = (LocaleDistance *)
                icu_76_godot::UMemory::operator_new((UMemory *)0x58,(ulong)param_1);
      if (this_00 != (LocaleDistance *)0x0) {
        LocaleDistance(this_00,(LocaleDistanceData *)(pLVar1 + 0x130),pLVar1);
        (anonymous_namespace)::gLocaleDistance = this_00;
        ucln_common_registerCleanup_76_godot(0xb,0x100000);
        return;
      }
      *(undefined4 *)this = 7;
      (anonymous_namespace)::gLocaleDistance = (LocaleDistance *)0x0;
    }
  }
  return;
}



/* icu_76_godot::LocaleDistance::getSingleton(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::LocaleDistance::getSingleton(LocaleDistance *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (((anonymous_namespace)::gInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gInitOnce),
     cVar1 != '\0')) {
    initLocaleDistance(this,param_1);
    DAT_00100dd4 = *(int *)this;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gInitOnce);
    return (anonymous_namespace)::gLocaleDistance;
  }
  if (0 < DAT_00100dd4) {
    *(int *)this = DAT_00100dd4;
  }
  return (anonymous_namespace)::gLocaleDistance;
}



/* icu_76_godot::LocaleDistance::isParadigmLSR(icu_76_godot::LSR const&) const */

undefined8 __thiscall icu_76_godot::LocaleDistance::isParadigmLSR(LocaleDistance *this,LSR *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(this + 0x40) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    cVar1 = icu_76_godot::LSR::isEquivalentTo(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 0x40));
  return 0;
}


