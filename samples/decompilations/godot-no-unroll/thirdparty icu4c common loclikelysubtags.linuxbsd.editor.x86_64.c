
/* icu_76_godot::LocaleDistanceData::LocaleDistanceData(icu_76_godot::LocaleDistanceData&&) */

void __thiscall
icu_76_godot::LocaleDistanceData::LocaleDistanceData
          (LocaleDistanceData *this,LocaleDistanceData *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  return;
}



/* icu_76_godot::LocaleDistanceData::~LocaleDistanceData() */

void __thiscall icu_76_godot::LocaleDistanceData::~LocaleDistanceData(LocaleDistanceData *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *in_RSI;
  
  uprv_free_76_godot(*(undefined8 *)(this + 0x10));
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + -8) * 0x30 + lVar1;
  lVar3 = lVar2;
  if (lVar1 != lVar2) {
    do {
      lVar2 = lVar3 + -0x30;
      if (*(long *)(lVar3 + -0x18) != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
      lVar3 = lVar2;
    } while (*(long *)(this + 0x18) != lVar2);
  }
  icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar2 + -8),in_RSI);
  return;
}



/* icu_76_godot::LikelySubtags::LikelySubtags(icu_76_godot::LikelySubtagsData&) */

void __thiscall
icu_76_godot::LikelySubtags::LikelySubtags(LikelySubtags *this,LikelySubtagsData *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = (int)this + 0x20;
  lVar7 = 0x61;
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0x140) = uVar4;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x130) = uVar1;
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x158) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 (*) [16])(param_1 + 0xf8) = (undefined1  [16])0x0;
  icu_76_godot::BytesTrie::next(iVar8);
  *(ulong *)(this + 0x40) =
       (ulong)(*(int *)(this + 0x38) + 2) << 0x3b | *(long *)(this + 0x30) - *(long *)(this + 0x28);
  icu_76_godot::BytesTrie::next(iVar8);
  *(ulong *)(this + 0x48) =
       (ulong)(*(int *)(this + 0x38) + 2) << 0x3b | *(long *)(this + 0x30) - *(long *)(this + 0x28);
  icu_76_godot::BytesTrie::next(iVar8);
  uVar5 = icu_76_godot::BytesTrie::readValue
                    (*(byte **)(this + 0x30) + 1,(int)(uint)**(byte **)(this + 0x30) >> 1);
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = uVar5;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  do {
    iVar6 = icu_76_godot::BytesTrie::next(iVar8);
    lVar2 = *(long *)(this + 0x28);
    if (iVar6 == 1) {
      *(ulong *)(this + lVar7 * 8 + -0x2b0) =
           (ulong)(*(int *)(this + 0x38) + 2) << 0x3b | *(long *)(this + 0x30) - lVar2;
    }
    lVar7 = lVar7 + 1;
    *(long *)(this + 0x30) = lVar2;
    *(undefined4 *)(this + 0x38) = 0xffffffff;
  } while (lVar7 != 0x7b);
  return;
}



/* icu_76_godot::LikelySubtags::~LikelySubtags() */

void __thiscall icu_76_godot::LikelySubtags::~LikelySubtags(LikelySubtags *this)

{
  UMemory *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  void *in_RSI;
  
  ures_close_76_godot(*(undefined8 *)this);
  this_00 = *(UMemory **)(this + 8);
  if (this_00 != (UMemory *)0x0) {
    if (this_00[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this_00);
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  lVar1 = *(long *)(this + 0x128);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8) * 0x30 + lVar1;
    lVar3 = lVar2;
    if (lVar1 != lVar2) {
      do {
        lVar2 = lVar3 + -0x30;
        if (*(long *)(lVar3 + -0x18) != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
        lVar3 = lVar2;
      } while (*(long *)(this + 0x128) != lVar2);
    }
    icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar2 + -8),in_RSI);
  }
  LocaleDistanceData::~LocaleDistanceData((LocaleDistanceData *)(this + 0x130));
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)(this + 0x20));
  uhash_close_76_godot(*(undefined8 *)(this + 0x18));
  uhash_close_76_godot(*(undefined8 *)(this + 0x10));
  return;
}



/* icu_76_godot::(anonymous namespace)::cleanup() */

undefined8 icu_76_godot::(anonymous_namespace)::cleanup(void)

{
  LikelySubtags *this;
  void *in_RSI;
  
  this = gLikelySubtags;
  if (gLikelySubtags != (LikelySubtags *)0x0) {
    LikelySubtags::~LikelySubtags(gLikelySubtags);
    icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  }
  gLikelySubtags = (LikelySubtags *)0x0;
  if (gMacroregions != (long *)0x0) {
    (**(code **)(*gMacroregions + 8))();
  }
  gMacroregions = (long *)0x0;
  LOCK();
  gInitOnce = 0;
  UNLOCK();
  return 1;
}



/* icu_76_godot::LikelySubtags::initLikelySubtags(UErrorCode&) */

void icu_76_godot::LikelySubtags::initLikelySubtags(UErrorCode *param_1)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  UMemory *pUVar4;
  int iVar5;
  LikelySubtags *pLVar6;
  UVector *this;
  uint uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  UErrorCode *pUVar13;
  LikelySubtagsData *this_00;
  ushort **ppuVar14;
  code *pcVar15;
  undefined **ppuVar16;
  long in_FS_OFFSET;
  ushort local_1ca;
  ushort *local_1b0;
  ushort local_1a4 [6];
  code *local_198;
  ushort local_190;
  undefined1 local_18e [2];
  uint local_18c;
  undefined1 *local_180;
  undefined8 local_158;
  undefined1 local_150 [80];
  UMemory *local_100;
  int local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  char local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  LocaleDistanceData local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = local_e0;
  puVar12 = &uhash_hashUChars_76_godot;
  local_158 = 0;
  local_100 = (UMemory *)0x0;
  local_f8 = 0;
  local_e8 = 8;
  local_e4 = '\0';
  local_a0 = 0;
  uhash_init_76_godot(local_150,&uhash_hashUChars_76_godot,&uhash_compareUChars_76_godot,
                      &uhash_compareLong_76_godot,param_1);
  if (*(int *)param_1 < 1) {
    local_100 = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)puVar12);
    if (local_100 == (UMemory *)0x0) {
      *(undefined4 *)param_1 = 7;
      local_100 = (UMemory *)0x0;
    }
    else {
      *(undefined4 *)(local_100 + 8) = 0x28;
      *(UMemory **)local_100 = local_100 + 0xd;
      *(undefined4 *)(local_100 + 0x38) = 0;
      *(undefined2 *)(local_100 + 0xc) = 0;
    }
  }
  this_00 = (LikelySubtagsData *)&local_158;
  local_78 = 0;
  local_98 = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = 0;
  local_88 = (undefined1  [16])0x0;
  local_70[0] = (LocaleDistanceData)0x0;
  local_70[1] = (LocaleDistanceData)0x0;
  local_70[2] = (LocaleDistanceData)0x0;
  local_70[3] = (LocaleDistanceData)0x0;
  local_70[4] = (LocaleDistanceData)0x0;
  local_70[5] = (LocaleDistanceData)0x0;
  local_70[6] = (LocaleDistanceData)0x0;
  local_70[7] = (LocaleDistanceData)0x0;
  local_70[8] = (LocaleDistanceData)0x0;
  local_70[9] = (LocaleDistanceData)0x0;
  local_70[10] = (LocaleDistanceData)0x0;
  local_70[0xb] = (LocaleDistanceData)0x0;
  local_70[0xc] = (LocaleDistanceData)0x0;
  local_70[0xd] = (LocaleDistanceData)0x0;
  local_70[0xe] = (LocaleDistanceData)0x0;
  local_70[0xf] = (LocaleDistanceData)0x0;
  local_60 = (undefined1  [16])0x0;
  pUVar13 = param_1;
  LikelySubtagsData::load(this_00,param_1);
  if (*(int *)param_1 < 1) {
    pLVar6 = (LikelySubtags *)icu_76_godot::UMemory::operator_new((UMemory *)0x160,(ulong)pUVar13);
    if (pLVar6 == (LikelySubtags *)0x0) {
      (anonymous_namespace)::gLikelySubtags = (LikelySubtags *)0x0;
      this_00 = (LikelySubtagsData *)pUVar13;
      if (*(int *)param_1 < 1) goto LAB_001005e2;
      (anonymous_namespace)::gMacroregions = (UVector *)0x0;
    }
    else {
      LikelySubtags(pLVar6,this_00);
      (anonymous_namespace)::gLikelySubtags = pLVar6;
      if (*(int *)param_1 < 1) {
LAB_001005e2:
        this = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)this_00);
        if (this == (UVector *)0x0) {
          if (*(int *)param_1 < 1) {
            *(undefined4 *)param_1 = 7;
          }
LAB_00100695:
          (anonymous_namespace)::gMacroregions = (UVector *)0x0;
          pUVar13 = (UErrorCode *)this_00;
          if ((anonymous_namespace)::gLikelySubtags == (LikelySubtags *)0x0) goto LAB_001006ce;
          goto LAB_001006ac;
        }
        this_00 = (LikelySubtagsData *)&uprv_deleteUObject_76_godot;
        icu_76_godot::UVector::UVector
                  (this,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
                   (_func_signed_UElement_UElement *)&uhash_compareUnicodeString_76_godot,param_1);
        if (0 < *(int *)param_1) {
LAB_0010068b:
          (**(code **)(*(long *)this + 8))();
          goto LAB_00100695;
        }
        ppuVar16 = &(anonymous_namespace)::MACROREGION_HARDCODE;
        do {
          psVar3 = (short *)*ppuVar16;
          local_198 = icu_76_godot::UnicodeString::doIndexOf;
          this_00 = (LikelySubtagsData *)0x0;
          local_190 = 2;
          if (psVar3 != (short *)0x0) {
            sVar1 = *psVar3;
            while (sVar1 != 0) {
              this_00 = this_00 + 1;
              sVar1 = psVar3[(long)this_00];
            }
          }
          icu_76_godot::UnicodeString::doAppend(&local_198);
          if (0 < *(int *)param_1) {
LAB_00100681:
            icu_76_godot::UnicodeString::~UnicodeString(&local_198);
            goto LAB_0010068b;
          }
          iVar5 = icu_76_godot::UnicodeString::doIndexOf((wchar16)&local_198,0x7e,0);
          ppuVar14 = &local_1b0;
          local_1b0 = local_1a4;
          icu_76_godot::UnicodeString::extract(&local_198,ppuVar14,6,param_1);
          if (iVar5 < 1) {
            this_00 = (LikelySubtagsData *)
                      icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)ppuVar14);
            if (this_00 == (LikelySubtagsData *)0x0) {
              if (*(int *)param_1 < 1) {
                *(undefined4 *)param_1 = 7;
              }
            }
            else {
              icu_76_godot::UnicodeString::UnicodeString(this_00,(UnicodeString *)&local_198);
            }
            icu_76_godot::UVector::adoptElement(this,(UErrorCode *)this_00);
LAB_0010085a:
            iVar5 = *(int *)param_1;
          }
          else {
            uVar7 = local_18c;
            if (-1 < (short)local_190) {
              uVar7 = (int)((short)local_190 >> 5);
            }
            uVar11 = iVar5 - 1;
            this_00 = (LikelySubtagsData *)(ulong)uVar11;
            if (uVar7 <= iVar5 + 1U) {
              local_1a4[iVar5] = 0;
              local_1ca = 0xffff;
LAB_001007d9:
              do {
                if (0 < *(int *)param_1) goto LAB_00100681;
                this_00 = (LikelySubtagsData *)
                          icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)this_00);
                if (this_00 == (LikelySubtagsData *)0x0) {
                  if (*(int *)param_1 < 1) {
                    *(undefined4 *)param_1 = 7;
                  }
                }
                else {
                  lVar10 = 0;
                  *(code **)this_00 = icu_76_godot::UnicodeString::doIndexOf;
                  *(undefined2 *)((UErrorCode *)this_00 + 8) = 2;
                  uVar2 = local_1a4[0];
                  while (uVar2 != 0) {
                    lVar10 = lVar10 + 1;
                    uVar2 = local_1a4[lVar10];
                  }
                  icu_76_godot::UnicodeString::doAppend(this_00,lVar10,local_1a4);
                }
                icu_76_godot::UVector::adoptElement(this,(UErrorCode *)this_00);
                uVar2 = local_1a4[(int)uVar11];
                local_1a4[(int)uVar11] = uVar2 + 1;
              } while ((ushort)(uVar2 + 1) <= local_1ca);
              goto LAB_0010085a;
            }
            puVar8 = local_18e;
            if ((local_190 & 2) == 0) {
              puVar8 = local_180;
            }
            local_1ca = *(ushort *)(puVar8 + (long)(int)(iVar5 + 1U) * 2);
            local_1a4[iVar5] = 0;
            iVar5 = *(int *)param_1;
            if (local_1a4[(int)uVar11] <= local_1ca) goto LAB_001007d9;
          }
          if (0 < iVar5) goto LAB_00100681;
          ppuVar16 = ppuVar16 + 1;
          icu_76_godot::UnicodeString::~UnicodeString(&local_198);
        } while (ppuVar16 != &PTR__LC16_00104120);
        (anonymous_namespace)::gMacroregions = this;
        if (*(int *)param_1 < 1) {
          if ((anonymous_namespace)::gLikelySubtags != (LikelySubtags *)0x0) {
            pcVar15 = (anonymous_namespace)::cleanup;
            ucln_common_registerCleanup_76_godot(10);
            ures_close_76_godot(local_158);
            if (local_88._8_8_ != 0) {
              lVar9 = *(long *)(local_88._8_8_ + -8) * 0x30 + local_88._8_8_;
              lVar10 = lVar9;
              if (local_88._8_8_ != lVar9) {
                do {
                  lVar9 = lVar10 + -0x30;
                  if (*(long *)(lVar10 + -0x18) != 0) {
                    icu_76_godot::LSR::deleteOwned();
                  }
                  lVar10 = lVar9;
                } while (local_88._8_8_ != lVar9);
              }
              icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar9 + -8),pcVar15);
            }
            LocaleDistanceData::~LocaleDistanceData(local_70);
            uhash_close_76_godot(local_98._8_8_);
            uhash_close_76_godot(local_98._0_8_);
            uhash_close_76_godot(local_150);
            pUVar4 = local_100;
            if (local_100 != (UMemory *)0x0) {
              if (local_100[0xc] != (UMemory)0x0) {
                uprv_free_76_godot(*(undefined8 *)local_100);
              }
              icu_76_godot::UMemory::operator_delete(pUVar4,pcVar15);
            }
            lVar10 = 0;
            if (0 < local_f8) {
              do {
                if (*(long **)(local_f0 + lVar10 * 8) != (long *)0x0) {
                  (**(code **)(**(long **)(local_f0 + lVar10 * 8) + 8))();
                }
                lVar10 = lVar10 + 1;
              } while ((int)lVar10 < local_f8);
            }
            goto LAB_00100564;
          }
          goto LAB_001006bc;
        }
        if ((anonymous_namespace)::gLikelySubtags != (LikelySubtags *)0x0) goto LAB_001006ac;
      }
      else {
        (anonymous_namespace)::gMacroregions = (UVector *)0x0;
LAB_001006ac:
        pLVar6 = (anonymous_namespace)::gLikelySubtags;
        ~LikelySubtags((anonymous_namespace)::gLikelySubtags);
        icu_76_godot::UMemory::operator_delete((UMemory *)pLVar6,this_00);
LAB_001006bc:
        pUVar13 = (UErrorCode *)this_00;
        if ((anonymous_namespace)::gMacroregions == (UVector *)0x0) goto LAB_001006ce;
      }
      (**(code **)(*(long *)(anonymous_namespace)::gMacroregions + 8))();
      pUVar13 = (UErrorCode *)this_00;
    }
LAB_001006ce:
    *(undefined4 *)param_1 = 7;
  }
  ures_close_76_godot(local_158);
  if (local_88._8_8_ != 0) {
    lVar9 = *(long *)(local_88._8_8_ + -8) * 0x30 + local_88._8_8_;
    lVar10 = lVar9;
    if (local_88._8_8_ != lVar9) {
      do {
        lVar9 = lVar10 + -0x30;
        if (*(long *)(lVar10 + -0x18) != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
        lVar10 = lVar9;
      } while (local_88._8_8_ != lVar9);
    }
    icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar9 + -8),pUVar13);
  }
  LocaleDistanceData::~LocaleDistanceData(local_70);
  uhash_close_76_godot(local_98._8_8_);
  uhash_close_76_godot(local_98._0_8_);
  uhash_close_76_godot(local_150);
  pUVar4 = local_100;
  if (local_100 != (UMemory *)0x0) {
    if (local_100[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)local_100);
    }
    icu_76_godot::UMemory::operator_delete(pUVar4,pUVar13);
  }
  lVar10 = 0;
  if (0 < local_f8) {
    do {
      if (*(long **)(local_f0 + lVar10 * 8) != (long *)0x0) {
        (**(code **)(**(long **)(local_f0 + lVar10 * 8) + 8))();
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < local_f8);
  }
LAB_00100564:
  if (local_e4 != '\0') {
    uprv_free_76_godot(local_f0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::LikelySubtags::getSingleton(UErrorCode&) */

undefined8 icu_76_godot::LikelySubtags::getSingleton(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (((anonymous_namespace)::gInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gInitOnce),
     cVar1 != '\0')) {
    initLikelySubtags(param_1);
    DAT_0010266c = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gInitOnce);
    return (anonymous_namespace)::gLikelySubtags;
  }
  if (0 < DAT_0010266c) {
    *(int *)param_1 = DAT_0010266c;
  }
  return (anonymous_namespace)::gLikelySubtags;
}



/* icu_76_godot::LikelySubtags::isMacroregion(icu_76_godot::StringPiece&, UErrorCode&) const */

byte __thiscall
icu_76_godot::LikelySubtags::isMacroregion
          (LikelySubtags *this,StringPiece *param_1,UErrorCode *param_2)

{
  char cVar1;
  byte bVar2;
  byte extraout_var;
  long in_FS_OFFSET;
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    if ((anonymous_namespace)::gInitOnce == 2) {
LAB_00100ba0:
      if (0 < DAT_0010266c) {
        *(int *)param_2 = DAT_0010266c;
        goto LAB_00100b50;
      }
    }
    else {
      cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gInitOnce);
      if (cVar1 == '\0') goto LAB_00100ba0;
      initLikelySubtags(param_2);
      DAT_0010266c = *(int *)param_2;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gInitOnce);
    }
    if (*(int *)param_2 < 1) {
      icu_76_godot::UnicodeString::fromUTF8
                (local_68,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      icu_76_godot::UVector::indexOf((anonymous_namespace)::gMacroregions,(int)local_68);
      bVar2 = (byte)~extraout_var >> 7;
      icu_76_godot::UnicodeString::~UnicodeString(local_68);
      goto LAB_00100b52;
    }
  }
LAB_00100b50:
  bVar2 = 0;
LAB_00100b52:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LikelySubtags::trieNext(icu_76_godot::BytesTrie&, char const*, int) */

undefined8 icu_76_godot::LikelySubtags::trieNext(BytesTrie *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  pcVar4 = param_2 + (long)param_3 + 1;
  iVar1 = (int)param_1;
  if (param_2[param_3] == '\0') {
    iVar1 = icu_76_godot::BytesTrie::next(iVar1);
joined_r0x00100c7e:
    if (iVar1 == 2) {
      uVar3 = icu_76_godot::BytesTrie::readValue
                        (*(byte **)(param_1 + 0x10) + 1,(int)(uint)**(byte **)(param_1 + 0x10) >> 1)
      ;
      return uVar3;
    }
    if (iVar1 == 3) {
      return 1;
    }
    if (iVar1 == 1) {
      return 0;
    }
  }
  else {
    do {
      if (*pcVar4 == '\0') {
        iVar1 = icu_76_godot::BytesTrie::next(iVar1);
        goto joined_r0x00100c7e;
      }
      pcVar4 = pcVar4 + 1;
      uVar2 = icu_76_godot::BytesTrie::next(iVar1);
    } while ((uVar2 & 1) != 0);
  }
  return 0xffffffff;
}



/* icu_76_godot::LikelySubtags::getLikelyIndex(char const*, char const*) const */

int __thiscall
icu_76_godot::LikelySubtags::getLikelyIndex(LikelySubtags *this,char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  long local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = strcmp(param_1,"und");
  iVar4 = strcmp(param_2,"Zzzz");
  local_50 = *(int *)(this + 0x38);
  local_58 = *(long *)(this + 0x30);
  local_60 = *(long *)(this + 0x28);
  if (iVar3 == 0) {
    param_1 = "";
    if (iVar4 == 0) {
      param_2 = "";
      param_1 = "";
    }
LAB_00100d6b:
    local_68 = 0;
    iVar3 = trieNext((BytesTrie *)&local_68,param_1,0);
  }
  else {
    local_68 = 0;
    if (iVar4 == 0) {
      param_2 = "";
    }
    if (((0x19 < (int)*param_1 - 0x61U) || (param_1[1] == '\0')) ||
       (uVar5 = *(ulong *)(this + (long)(int)((int)*param_1 - 0x61U) * 8 + 0x58), uVar5 == 0))
    goto LAB_00100d6b;
    local_50 = (uint)(uVar5 >> 0x3b) - 2;
    local_58 = (uVar5 & 0x7ffffffffffffff) + local_60;
    iVar3 = trieNext((BytesTrie *)&local_68,param_1,1);
  }
  iVar4 = local_50;
  lVar2 = local_58;
  lVar1 = local_60;
  if (iVar3 < 0) {
    local_50 = (uint)(*(ulong *)(this + 0x40) >> 0x3b) - 2;
    local_58 = (*(ulong *)(this + 0x40) & 0x7ffffffffffffff) + local_60;
    iVar3 = trieNext((BytesTrie *)&local_68,param_2,0);
    if (-1 < iVar3) goto LAB_00100e8f;
LAB_00100dd5:
    local_50 = (uint)(*(ulong *)(this + 0x48) >> 0x3b) - 2;
    local_58 = local_60 + (*(ulong *)(this + 0x48) & 0x7ffffffffffffff);
  }
  else if (iVar3 == 0) {
    iVar3 = trieNext((BytesTrie *)&local_68,param_2,0);
    if (iVar3 < 0) {
      uVar5 = (ulong)(iVar4 + 2) << 0x3b | lVar2 - lVar1;
      if (uVar5 == 0) goto LAB_00100dd5;
      local_50 = (uint)(uVar5 >> 0x3b) - 2;
      local_58 = local_60 + (lVar2 - lVar1 & 0x7ffffffffffffffU);
      iVar3 = trieNext((BytesTrie *)&local_68,"",0);
    }
LAB_00100e8f:
    if (0 < iVar3) goto LAB_00100da1;
  }
  else if (iVar3 != 1) goto LAB_00100da1;
  iVar3 = trieNext((BytesTrie *)&local_68,"",0);
LAB_00100da1:
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* icu_76_godot::LikelySubtags::compareLikely(icu_76_godot::LSR const&, icu_76_godot::LSR const&,
   int) const */

uint __thiscall
icu_76_godot::LikelySubtags::compareLikely
          (LikelySubtags *this,LSR *param_1,LSR *param_2,int param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  __s1 = *(char **)param_1;
  iVar1 = strcmp(__s1,*(char **)param_2);
  if (iVar1 == 0) {
    pcVar4 = *(char **)(param_1 + 8);
    iVar1 = strcmp(pcVar4,*(char **)(param_2 + 8));
    iVar2 = param_3 >> 2;
    if (iVar1 == 0) {
      pcVar4 = *(char **)(param_1 + 0x10);
      iVar1 = strcmp(pcVar4,*(char **)(param_2 + 0x10));
      uVar3 = param_3 & 0xfffffffe;
      if (iVar1 != 0) {
        if ((param_3 < 0) || ((param_3 & 2U) == 0)) {
          iVar2 = getLikelyIndex(this,__s1,pcVar4);
          pcVar4 = *(char **)(param_1 + 0x10);
          param_3 = iVar2 * 4 + 2;
        }
        iVar1 = strcmp(pcVar4,*(char **)((long)iVar2 * 0x30 + *(long *)(this + 0x128) + 0x10));
        uVar3 = param_3 | 1;
        if (iVar1 != 0) {
          uVar3 = param_3 & 0xfffffffe;
        }
        return uVar3;
      }
    }
    else {
      if ((param_3 < 0) || ((param_3 & 2U) != 0)) {
        iVar2 = getLikelyIndex(this,__s1,"");
        pcVar4 = *(char **)(param_1 + 8);
        param_3 = iVar2 * 4;
      }
      iVar1 = strcmp(pcVar4,*(char **)((long)iVar2 * 0x30 + *(long *)(this + 0x128) + 8));
      uVar3 = param_3 & 0xfffffffe;
      if (iVar1 == 0) {
        uVar3 = param_3 | 1;
      }
    }
  }
  else {
    uVar3 = 0xfffffffc;
  }
  return uVar3;
}



/* icu_76_godot::LikelySubtags::trieNext(icu_76_godot::BytesTrie&, icu_76_godot::StringPiece, int)
    */

undefined8 __thiscall
icu_76_godot::LikelySubtags::trieNext(LikelySubtags *this,long param_1,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)this;
  if (param_3 == param_4) {
    iVar1 = icu_76_godot::BytesTrie::next(iVar1);
  }
  else {
    if (param_3 != param_4 + 1) {
      lVar4 = (param_4 + 1) + param_1;
      do {
        uVar2 = icu_76_godot::BytesTrie::next(iVar1);
        if ((uVar2 & 1) == 0) {
          return 0xffffffff;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != (long)param_4 + 2 + param_1 + (ulong)(uint)((param_3 + -2) - param_4));
    }
    iVar1 = icu_76_godot::BytesTrie::next(iVar1);
  }
  if (iVar1 != 2) {
    uVar3 = 1;
    if ((iVar1 != 3) && (uVar3 = 0, iVar1 != 1)) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  uVar3 = icu_76_godot::BytesTrie::readValue
                    (*(byte **)(this + 0x10) + 1,(int)(uint)**(byte **)(this + 0x10) >> 1);
  return uVar3;
}



/* icu_76_godot::LikelySubtags::maximize(icu_76_godot::StringPiece, icu_76_godot::StringPiece,
   icu_76_godot::StringPiece, bool, UErrorCode&) const */

LSR * icu_76_godot::LikelySubtags::maximize
                (LSR *param_1,LikelySubtags *param_2,char *param_3,undefined8 param_4,char *param_5,
                undefined8 param_6,char *param_7,undefined8 param_8,undefined4 param_9,
                UErrorCode *param_10)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  UErrorCode *pUVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uStack_c4;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  int local_70;
  undefined4 uStack_6c;
  char *local_68;
  long local_60;
  long local_58;
  int local_50;
  long local_40;
  
  pUVar6 = param_10;
  uVar2 = param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_5;
  local_b0 = param_6;
  local_a8 = param_3;
  local_a0 = param_4;
  if (0 < *(int *)param_10) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined **)(param_1 + 0x10) = &_LC16;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)param_1 = &_LC15;
    *(undefined **)(param_1 + 8) = &_LC16;
    goto LAB_00101231;
  }
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"und");
  iVar9 = icu_76_godot::StringPiece::compare(&local_a8,local_68,local_60);
  if (iVar9 == 0) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"");
    local_a8 = local_68;
    local_a0 = CONCAT44(local_a0._4_4_,(int)local_60);
  }
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"Zzzz");
  iVar9 = icu_76_godot::StringPiece::compare(&local_b8,local_68,local_60);
  if (iVar9 == 0) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"");
    local_b8 = local_68;
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_60);
  }
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"ZZ");
  iVar9 = icu_76_godot::StringPiece::compare(&param_7,local_68,local_60);
  if (iVar9 == 0) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,"");
    param_7 = local_68;
    param_8._0_4_ = (int)local_60;
  }
  if (((int)local_b0 == 0) || ((int)param_8 == 0)) {
    local_58 = *(long *)(param_2 + 0x30);
    local_60 = *(long *)(param_2 + 0x28);
    local_68 = (char *)0x0;
    local_50 = *(int *)(param_2 + 0x38);
    if ((0x19 < (int)*local_a8 - 0x61U) ||
       (((int)local_a0 < 2 ||
        (uVar12 = *(ulong *)(param_2 + (long)(int)((int)*local_a8 - 0x61U) * 8 + 0x58), uVar12 == 0)
        ))) goto LAB_00101331;
    local_50 = (uint)(uVar12 >> 0x3b) - 2;
    local_58 = local_60 + (uVar12 & 0x7ffffffffffffff);
    iVar9 = trieNext((LikelySubtags *)&local_68,local_a8,local_a0,1);
  }
  else {
    if ((int)local_a0 != 0) {
      icu_76_godot::LSR::LSR
                (param_1,local_a8,local_a0,local_b8,local_b0,7,param_7,
                 CONCAT44(param_8._4_4_,(int)param_8),pUVar6);
      goto LAB_00101231;
    }
    local_60 = *(long *)(param_2 + 0x28);
    local_58 = *(long *)(param_2 + 0x30);
    local_50 = *(int *)(param_2 + 0x38);
LAB_00101331:
    local_68 = (char *)0x0;
    iVar9 = trieNext((LikelySubtags *)&local_68,local_a8,local_a0,0);
  }
  if (iVar9 < 0) {
    local_50 = (uint)(*(ulong *)(param_2 + 0x40) >> 0x3b) - 2;
    local_58 = local_60 + (*(ulong *)(param_2 + 0x40) & 0x7ffffffffffffff);
    iVar10 = trieNext((LikelySubtags *)&local_68,local_b8,local_b0,0);
    bVar17 = false;
    bVar16 = true;
    bVar5 = false;
    if (-1 < iVar10) {
LAB_0010164b:
      uVar12 = (ulong)(local_50 + 2) << 0x3b | local_58 - local_60;
      bVar7 = (int)local_b0 != 0;
      bVar5 = bVar17;
      goto LAB_00101672;
    }
LAB_00101950:
    local_50 = (uint)(*(ulong *)(param_2 + 0x48) >> 0x3b) - 2;
    local_58 = (*(ulong *)(param_2 + 0x48) & 0x7ffffffffffffff) + local_60;
    iVar10 = trieNext((LikelySubtags *)&local_68,param_7,CONCAT44(param_8._4_4_,(int)param_8),0);
    bVar17 = true;
    if (iVar10 < 0) {
LAB_00101939:
      lVar14 = (long)*(int *)(param_2 + 0x50);
      bVar7 = false;
      bVar18 = true;
    }
    else {
LAB_001016cd:
      if ((int)param_8 != 0) {
        cVar8 = isMacroregion(param_2,(StringPiece *)&param_7,pUVar6);
        lVar14 = (long)iVar10;
        if (cVar8 == '\0') {
          bVar7 = true;
          bVar18 = true;
          goto LAB_001013af;
        }
      }
      lVar14 = (long)iVar10;
      bVar7 = false;
      bVar18 = false;
    }
  }
  else {
    bVar16 = (int)local_a0 != 0;
    uVar13 = local_58 - local_60;
    uVar12 = (ulong)(local_50 + 2) << 0x3b | uVar13;
    bVar17 = (int)local_b0 != 0;
    bVar5 = bVar17;
    if (iVar9 == 0) {
      iVar10 = trieNext((LikelySubtags *)&local_68,local_b8,local_b0,0);
      if (-1 < iVar10) goto LAB_0010164b;
      if (uVar12 == 0) goto LAB_00101950;
      local_50 = (uint)(uVar12 >> 0x3b) - 2;
      local_58 = local_60 + (uVar13 & 0x7ffffffffffffff);
      iVar10 = trieNext((BytesTrie *)&local_68,"",0);
      uVar12 = (ulong)(local_50 + 2) << 0x3b | local_58 - local_60;
      bVar7 = true;
LAB_00101672:
      bVar17 = bVar7;
      if (iVar10 < 1) goto LAB_00101680;
    }
    else {
      iVar10 = iVar9;
      if (iVar9 == 1) {
LAB_00101680:
        iVar10 = trieNext((LikelySubtags *)&local_68,param_7,CONCAT44(param_8._4_4_,(int)param_8),0)
        ;
        if (-1 < iVar10) goto LAB_001016cd;
        if (uVar12 == 0) goto LAB_00101939;
        local_50 = (uint)(uVar12 >> 0x3b) - 2;
        local_58 = (uVar12 & 0x7ffffffffffffff) + local_60;
        iVar10 = trieNext((BytesTrie *)&local_68,"",0);
        bVar7 = false;
        lVar14 = (long)iVar10;
        bVar18 = true;
        goto LAB_001013af;
      }
    }
    lVar14 = (long)iVar10;
    bVar18 = (int)param_8 != 0;
    bVar7 = false;
  }
LAB_001013af:
  puVar15 = (undefined8 *)(lVar14 * 0x30 + *(long *)(param_2 + 0x128));
  if ((((char)uVar2 == '\0') || (-1 < iVar9)) || (bVar5)) {
    if ((int)local_a0 == 0) goto LAB_00101788;
LAB_0010153c:
    if (bVar16) {
      if (bVar17 == false) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)puVar15[1]);
        local_b8 = local_78;
        cVar8 = '\x05';
        local_b0 = CONCAT44(local_b0._4_4_,local_70);
        if (!bVar18) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)puVar15[2]);
          cVar8 = '\x04';
          param_7 = local_78;
          param_8._0_4_ = local_70;
        }
      }
      else {
        cVar8 = '\a';
        if (!bVar18) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)puVar15[2]);
          cVar8 = '\x06';
          param_7 = local_78;
          param_8._0_4_ = local_70;
        }
      }
    }
    else {
      if (bVar17 == false) {
        pcVar3 = (char *)*puVar15;
        if (!bVar18) {
          pcVar4 = (char *)puVar15[2];
          uVar2 = *(undefined4 *)((long)puVar15 + 0x24);
          uVar1 = puVar15[1];
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(char **)(param_1 + 0x10) = pcVar4;
          *(char **)param_1 = pcVar3;
          *(undefined8 *)(param_1 + 8) = uVar1;
          uVar11 = icu_76_godot::LSR::indexForRegion(pcVar4);
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(ulong *)(param_1 + 0x20) = CONCAT44(uVar2,uVar11);
          goto LAB_001015dd;
        }
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,pcVar3);
        local_a8 = local_78;
        local_a0 = CONCAT44(local_a0._4_4_,local_70);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)puVar15[1]);
        local_b8 = local_78;
        local_b0 = CONCAT44(local_b0._4_4_,local_70);
      }
      else {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)*puVar15);
        local_a8 = local_78;
        local_a0 = CONCAT44(local_a0._4_4_,local_70);
        if (!bVar18) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)puVar15[2]);
          param_7 = local_78;
          param_8._0_4_ = local_70;
          cVar8 = bVar17 * '\x02';
          goto LAB_001015a9;
        }
      }
      cVar8 = bVar17 * '\x02' + '\x01';
    }
LAB_001015a9:
    icu_76_godot::LSR::LSR
              (param_1,local_a8,local_a0,local_b8,local_b0,cVar8,param_7,
               CONCAT44(param_8._4_4_,(int)param_8),pUVar6);
  }
  else {
    if ((bVar7) && ((int)local_a0 == 0)) {
LAB_00101788:
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,"und");
      local_a8 = local_78;
      local_a0 = CONCAT44(local_a0._4_4_,local_70);
      goto LAB_0010153c;
    }
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,"");
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_88,"");
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,"");
    icu_76_godot::LSR::LSR
              (param_1,local_98,local_90,local_88,local_80,7,local_78,CONCAT44(uStack_6c,local_70),
               pUVar6);
  }
LAB_001015dd:
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)&local_68);
LAB_00101231:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LikelySubtags::maximize(char const*, char const*, char const*, bool, UErrorCode&)
   const */

char * icu_76_godot::LikelySubtags::maximize
                 (char *param_1,char *param_2,char *param_3,bool param_4,UErrorCode *param_5)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined7 in_register_00000009;
  undefined1 in_R9B;
  long in_FS_OFFSET;
  int *in_stack_00000008;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_stack_00000008 < 1) {
    sVar2 = strlen((char *)param_5);
    sVar3 = strlen((char *)CONCAT71(in_register_00000009,param_4));
    sVar4 = strlen(param_3);
    maximize(param_1,param_2,param_3,sVar4 & 0xffffffff,
             (char *)CONCAT71(in_register_00000009,param_4),sVar3 & 0xffffffff,param_5,
             sVar2 & 0xffffffff,in_R9B,in_stack_00000008);
  }
  else {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined **)(param_1 + 0x10) = &_LC16;
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    *(undefined **)param_1 = &_LC15;
    *(undefined **)(param_1 + 8) = &_LC16;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LikelySubtags::makeMaximizedLsr(char const*, char const*, char const*, char const*,
   bool, UErrorCode&) const */

char * icu_76_godot::LikelySubtags::makeMaximizedLsr
                 (char *param_1,char *param_2,char *param_3,char *param_4,bool param_5,
                 UErrorCode *param_6)

{
  UErrorCode UVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  UErrorCode *pUVar5;
  UErrorCode *pUVar6;
  undefined7 in_register_00000081;
  long in_FS_OFFSET;
  char in_stack_00000008;
  UErrorCode *in_stack_00000010;
  
  pUVar6 = (UErrorCode *)CONCAT71(in_register_00000081,param_5);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)in_stack_00000010) {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined **)(param_1 + 0x10) = &_LC16;
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    *(undefined **)param_1 = &_LC15;
    *(undefined **)(param_1 + 8) = &_LC16;
    goto LAB_00101ce6;
  }
  if (in_stack_00000008 == '\0') {
    if (*pUVar6 == (UErrorCode)0x58) {
      UVar1 = pUVar6[1];
      if ((UVar1 != (UErrorCode)0x0) && (pUVar6[2] == (UErrorCode)0x0)) {
        if (UVar1 != (UErrorCode)0x42) {
          if (UVar1 != (UErrorCode)0x43) {
            if (UVar1 == (UErrorCode)0x41) {
              iVar3 = 7;
              goto LAB_00101dcf;
            }
            goto LAB_00101df0;
          }
          iVar3 = 7;
LAB_00101f2b:
          icu_76_godot::LSR::LSR
                    ((LSR *)param_1,',',param_3,param_4,(char *)pUVar6,iVar3,in_stack_00000010);
          goto LAB_00101ce6;
        }
        iVar3 = 7;
LAB_00101eb3:
        icu_76_godot::LSR::LSR
                  ((LSR *)param_1,'+',param_3,param_4,(char *)pUVar6,iVar3,in_stack_00000010);
        goto LAB_00101ce6;
      }
LAB_00101df0:
      if ((*param_6 == (UErrorCode)0x50) && (param_6[1] == (UErrorCode)0x53)) goto LAB_00101e05;
    }
    else if ((*param_6 == (UErrorCode)0x50) && (param_6[1] == (UErrorCode)0x53)) {
      if (*pUVar6 == (UErrorCode)0x0) {
        iVar3 = strcmp((char *)param_6,"PSACCENT");
        if (iVar3 == 0) {
          iVar3 = 6;
          pUVar6 = (UErrorCode *)&_LC20;
LAB_00101dcf:
          icu_76_godot::LSR::LSR
                    ((LSR *)param_1,'\'',param_3,param_4,(char *)pUVar6,iVar3,in_stack_00000010);
          goto LAB_00101ce6;
        }
        iVar3 = strcmp((char *)param_6,"PSBIDI");
        if (iVar3 == 0) {
          iVar3 = 6;
          pUVar6 = (UErrorCode *)&_LC21;
          goto LAB_00101eb3;
        }
        iVar3 = strcmp((char *)param_6,"PSCRACK");
        if (iVar3 == 0) {
          iVar3 = 6;
          pUVar6 = (UErrorCode *)&_LC22;
          goto LAB_00101f2b;
        }
      }
      else {
LAB_00101e05:
        iVar3 = strcmp((char *)param_6,"PSACCENT");
        if (iVar3 == 0) {
          iVar3 = 7;
          goto LAB_00101dcf;
        }
        iVar3 = strcmp((char *)param_6,"PSBIDI");
        if (iVar3 == 0) {
          iVar3 = 7;
          goto LAB_00101eb3;
        }
        iVar3 = strcmp((char *)param_6,"PSCRACK");
        if (iVar3 == 0) {
          iVar3 = 7;
          goto LAB_00101f2b;
        }
      }
    }
  }
  pcVar4 = (char *)uhash_get_76_godot(*(undefined8 *)(param_2 + 0x10),param_3);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = param_3;
  }
  pUVar5 = (UErrorCode *)uhash_get_76_godot(*(undefined8 *)(param_2 + 0x18),pUVar6);
  if (pUVar5 == (UErrorCode *)0x0) {
    pUVar5 = pUVar6;
  }
  maximize(param_1,param_2,pcVar4,SUB81(param_4,0),pUVar5);
LAB_00101ce6:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LikelySubtags::makeMaximizedLsrFrom(icu_76_godot::Locale const&, bool, UErrorCode&)
   const */

Locale * icu_76_godot::LikelySubtags::makeMaximizedLsrFrom
                   (Locale *param_1,bool param_2,UErrorCode *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined7 in_register_00000031;
  int *in_R8;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_R8 < 1) {
    if (param_3[0xd8] == (UErrorCode)0x0) {
      pcVar1 = *(char **)(param_3 + 0x28);
      if (((*pcVar1 == '@') && (pcVar1[1] == 'x')) && (pcVar1[2] == '=')) {
        *(char **)param_1 = pcVar1;
        *(undefined **)(param_1 + 8) = &_LC16;
        *(undefined **)(param_1 + 0x10) = &_LC16;
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar2 = icu_76_godot::LSR::indexForRegion("");
        *(undefined8 *)(param_1 + 0x24) = 7;
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        makeMaximizedLsr((char *)&local_78,(char *)CONCAT71(in_register_00000031,param_2),
                         (char *)(param_3 + 8),(char *)(param_3 + 0x14),SUB81(param_3 + 0x1a,0),
                         (UErrorCode *)((long)*(int *)(param_3 + 0x20) + *(long *)(param_3 + 0xd0)))
        ;
        if (((*local_78 == '\0') && (*local_70 == '\0')) && (*local_68 == '\0')) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_88,(char *)(param_3 + 0x1a));
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,(char *)(param_3 + 0x14));
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_a8,(char *)(param_3 + 8));
          icu_76_godot::LSR::LSR
                    ((LSR *)param_1,local_a8,local_a0,local_98,local_90,7,local_88,local_80);
        }
        else {
          icu_76_godot::LSR::LSR((LSR *)param_1,(LSR *)&local_78);
        }
        if (local_60 != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
      }
      goto LAB_0010202a;
    }
    *in_R8 = 1;
  }
  *(undefined **)(param_1 + 0x10) = &_LC16;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)param_1 = &_LC15;
  *(undefined **)(param_1 + 8) = &_LC16;
LAB_0010202a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LikelySubtags::minimizeSubtags(icu_76_godot::StringPiece,
   icu_76_godot::StringPiece, icu_76_godot::StringPiece, bool, UErrorCode&) const */

LSR * icu_76_godot::LikelySubtags::minimizeSubtags
                (LSR *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 param_7,undefined8 param_8,char param_9,int *param_10
                )

{
  char cVar1;
  UErrorCode *pUVar2;
  long in_FS_OFFSET;
  int *piVar3;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  UErrorCode *local_c8;
  long local_c0;
  LSR local_a8 [24];
  long local_90;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *param_10) {
    *(undefined **)(param_1 + 0x10) = &_LC16;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)param_1 = &_LC15;
    *(undefined **)(param_1 + 8) = &_LC16;
    goto LAB_00102210;
  }
  piVar3 = param_10;
  maximize(&local_d8,param_2,param_3);
  if (*param_10 < 1) {
    if (((*local_d8 == '\0') && (*local_d0 == '\0')) && (*local_c8 == (UErrorCode)0x0)) {
      icu_76_godot::LSR::LSR
                (param_1,param_3,param_4,param_5,param_6,7,param_7,param_8,param_10,piVar3);
    }
    else {
      maximize((char *)local_a8,param_2,local_d8,true,(UErrorCode *)&_LC16);
      if (0 < *param_10) goto LAB_00102343;
      cVar1 = icu_76_godot::LSR::isEquivalentTo(local_a8);
      if (cVar1 == '\0') {
        if (param_9 == '\0') {
          maximize((char *)&local_78,param_2,local_d8,true,local_c8);
          icu_76_godot::LSR::operator=(local_a8,(LSR *)&local_78);
          if (local_60 != 0) {
            icu_76_godot::LSR::deleteOwned();
          }
          if (0 < *param_10) goto LAB_00102343;
          cVar1 = icu_76_godot::LSR::isEquivalentTo(local_a8);
          if (cVar1 == '\0') goto LAB_001024b1;
LAB_00102642:
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)local_c8);
          local_d0 = "";
          goto LAB_001025d8;
        }
LAB_001024b1:
        maximize((char *)&local_78,param_2,local_d8,SUB81(local_d0,0),(UErrorCode *)&_LC16);
        icu_76_godot::LSR::operator=(local_a8,(LSR *)&local_78);
        if (local_60 != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
        if (*param_10 < 1) {
          cVar1 = icu_76_godot::LSR::isEquivalentTo(local_a8);
          pUVar2 = (UErrorCode *)&_LC16;
          if ((cVar1 == '\0') && (pUVar2 = local_c8, param_9 != '\0')) {
            maximize((char *)&local_78,param_2,local_d8,true,local_c8);
            icu_76_godot::LSR::operator=(local_a8,(LSR *)&local_78);
            if (local_60 != 0) {
              icu_76_godot::LSR::deleteOwned();
            }
            if (0 < *param_10) goto LAB_00102343;
            cVar1 = icu_76_godot::LSR::isEquivalentTo(local_a8);
            pUVar2 = local_c8;
            if (cVar1 != '\0') goto LAB_00102642;
          }
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)pUVar2);
          goto LAB_001025d8;
        }
LAB_00102343:
        *(undefined **)(param_1 + 0x10) = &_LC16;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined **)param_1 = &_LC15;
        *(undefined **)(param_1 + 8) = &_LC16;
      }
      else {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,"");
        local_d0 = "";
LAB_001025d8:
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_e8,local_d0);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_f8,local_d8);
        icu_76_godot::LSR::LSR
                  (param_1,local_f8,local_f0,local_e8,local_e0,0,local_78,local_70,param_10);
      }
      if (local_90 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
    }
  }
  else {
    *(undefined **)(param_1 + 0x10) = &_LC16;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)param_1 = &_LC15;
    *(undefined **)(param_1 + 8) = &_LC16;
  }
  if (local_c0 != 0) {
    icu_76_godot::LSR::deleteOwned();
  }
LAB_00102210:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
LAB_0010295f:
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
      goto LAB_0010295f;
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



/* icu_76_godot::UniqueCharStrings::addByValue(icu_76_godot::UnicodeString, UErrorCode&) */

int __thiscall
icu_76_godot::UniqueCharStrings::addByValue
          (UniqueCharStrings *this,UnicodeString *param_2,int *param_3)

{
  wchar16 *pwVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *this_00;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  if (0 < *param_3) {
    return -1;
  }
  if (this[0xb0] == (UniqueCharStrings)0x0) {
    uVar4 = icu_76_godot::UnicodeString::getTerminatedBuffer();
    iVar2 = uhash_geti_76_godot(this);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = *(int *)(this + 0x68);
    if (iVar2 == *(int *)(this + 0x58)) {
      if (iVar2 == 8) {
        lVar6 = uprv_malloc_76_godot(0x100);
        if (lVar6 != 0) {
          iVar7 = 0x20;
LAB_00102b5d:
          uVar4 = *(ulong *)(this + 0x60);
          if (*(int *)(this + 0x68) < iVar2) {
            iVar2 = *(int *)(this + 0x68);
          }
          if (iVar7 < iVar2) {
            iVar2 = iVar7;
          }
          __memcpy_chk(lVar6,uVar4,(long)iVar2 << 3);
          goto LAB_00102b81;
        }
      }
      else {
        iVar7 = iVar2 * 2;
        if ((0 < iVar7) && (lVar6 = uprv_malloc_76_godot((long)iVar7 << 3), lVar6 != 0)) {
          if (iVar2 != 0) goto LAB_00102b5d;
LAB_00102b81:
          if (this[0x6c] != (UniqueCharStrings)0x0) {
            uprv_free_76_godot(*(undefined8 *)(this + 0x60));
          }
          *(long *)(this + 0x60) = lVar6;
          *(int *)(this + 0x68) = iVar7;
          this[0x6c] = (UniqueCharStrings)0x1;
          goto LAB_00102b97;
        }
      }
    }
    else {
LAB_00102b97:
      this_00 = icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar4);
      if (this_00 != (void *)0x0) {
        icu_76_godot::UnicodeString::UnicodeString(this_00,param_2);
        iVar2 = *(int *)(this + 0x58);
        *(int *)(this + 0x58) = iVar2 + 1;
        *(void **)(*(long *)(this + 0x60) + (long)iVar2 * 8) = this_00;
        uVar5 = icu_76_godot::UnicodeString::getTerminatedBuffer();
        if (0 < *param_3) {
          return -1;
        }
        if (this[0xb0] == (UniqueCharStrings)0x0) {
          iVar2 = uhash_geti_76_godot(this);
          if (iVar2 == 0) {
            icu_76_godot::CharString::append((char)*(undefined8 *)(this + 0x50),(UErrorCode *)0x0);
            pwVar1 = *(wchar16 **)(this + 0x50);
            iVar2 = *(int *)(pwVar1 + 0x1c);
            uVar3 = u_strlen_76_godot(uVar5);
            icu_76_godot::CharString::appendInvariantChars
                      (pwVar1,(int)uVar5,(UErrorCode *)(ulong)uVar3);
            uhash_puti_76_godot(this,uVar5,iVar2,param_3);
            return iVar2;
          }
          return iVar2;
        }
        goto LAB_00102ca0;
      }
      iVar2 = *(int *)(this + 0x58);
      *(int *)(this + 0x58) = iVar2 + 1;
      *(undefined8 *)(*(long *)(this + 0x60) + (long)iVar2 * 8) = 0;
    }
    *param_3 = 7;
  }
  else {
LAB_00102ca0:
    *param_3 = 0x1e;
  }
  return -1;
}



/* icu_76_godot::LikelySubtagsData::readStrings(icu_76_godot::ResourceTable const&, char const*,
   icu_76_godot::ResourceValue&, icu_76_godot::LocalMemory<int>&, int&, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::LikelySubtagsData::readStrings
          (LikelySubtagsData *this,ResourceTable *param_1,char *param_2,ResourceValue *param_3,
          LocalMemory *param_4,int *param_5,UErrorCode *param_6)

{
  wchar16 *pwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if (0 < *(int *)param_6) goto LAB_00102d03;
  cVar2 = icu_76_godot::ResourceTable::findValue((char *)param_1,(ResourceValue *)param_2);
  if (cVar2 == '\0') {
LAB_00102ec8:
    uVar6 = 1;
  }
  else {
    (**(code **)(*(long *)param_3 + 0x50))(local_58,param_3,param_6);
    if (*(int *)param_6 < 1) {
      uVar6 = 1;
      *param_5 = local_48;
      if (local_48 == 0) goto LAB_00102d03;
      if ((0 < local_48) && (lVar7 = uprv_malloc_76_godot((long)local_48 * 4), lVar7 != 0)) {
        uprv_free_76_godot(*(undefined8 *)param_4);
        iVar4 = *param_5;
        *(long *)param_4 = lVar7;
        uVar8 = 0;
        if (0 < iVar4) {
          do {
            cVar2 = icu_76_godot::ResourceArray::getValue
                              ((int)local_58,(ResourceValue *)(uVar8 & 0xffffffff));
            if (cVar2 != '\0') {
              local_5c = 0;
              uVar6 = (**(code **)(*(long *)param_3 + 0x20))(param_3,&local_5c,param_6);
              if (*(int *)param_6 < 1) {
                if (this[0xb8] == (LikelySubtagsData)0x0) {
                  iVar4 = uhash_geti_76_godot(this + 8);
                  if (iVar4 == 0) {
                    icu_76_godot::CharString::append
                              ((char)*(undefined8 *)(this + 0x58),(UErrorCode *)0x0);
                    pwVar1 = *(wchar16 **)(this + 0x58);
                    iVar4 = *(int *)(pwVar1 + 0x1c);
                    uVar5 = u_strlen_76_godot(uVar6);
                    icu_76_godot::CharString::appendInvariantChars
                              (pwVar1,(int)uVar6,(UErrorCode *)(ulong)uVar5);
                    uhash_puti_76_godot(this + 8,uVar6,iVar4,param_6);
                    iVar3 = *(int *)param_6;
                  }
                  else {
                    iVar3 = *(int *)param_6;
                  }
                  *(int *)(lVar7 + uVar8 * 4) = iVar4;
                  if (iVar3 < 1) goto LAB_00102ded;
                  goto LAB_00102ee0;
                }
                *(undefined4 *)param_6 = 0x1e;
              }
              *(undefined4 *)(lVar7 + uVar8 * 4) = 0xffffffff;
              uVar6 = 0;
              goto LAB_00102d03;
            }
LAB_00102ded:
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < *param_5);
        }
        goto LAB_00102ec8;
      }
      *(undefined4 *)param_6 = 7;
    }
LAB_00102ee0:
    uVar6 = 0;
  }
LAB_00102d03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* icu_76_godot::LikelySubtagsData::readLSREncodedStrings(icu_76_godot::ResourceTable const&, char
   const*, icu_76_godot::ResourceValue&, icu_76_godot::ResourceArray const&,
   icu_76_godot::LocalMemory<int>&, int&, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::LikelySubtagsData::readLSREncodedStrings
          (LikelySubtagsData *this,ResourceTable *param_1,char *param_2,ResourceValue *param_3,
          ResourceArray *param_4,LocalMemory *param_5,int *param_6,UErrorCode *param_7)

{
  UniqueCharStrings *pUVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined4 local_94;
  wchar16 *local_90;
  undefined1 local_88 [69];
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_7 < 1) {
    cVar2 = icu_76_godot::ResourceTable::findValue((char *)param_1,(ResourceValue *)param_2);
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(*(long *)param_3 + 0x40))(param_3,param_6,param_7);
      if (0 < *(int *)param_7) goto LAB_00102f71;
      if (*param_6 != 0) {
        iVar9 = *param_6 * 3;
        if ((iVar9 < 1) ||
           (puVar5 = (undefined4 *)uprv_malloc_76_godot((long)iVar9 * 4),
           puVar5 == (undefined4 *)0x0)) {
          *(undefined4 *)param_7 = 7;
          goto LAB_00102f71;
        }
        uprv_free_76_godot(*(undefined8 *)param_5);
        iVar9 = *param_6;
        *(undefined4 **)param_5 = puVar5;
        if (0 < iVar9) {
          pUVar1 = (UniqueCharStrings *)(this + 8);
          lVar10 = 0;
          do {
            uVar8 = *(uint *)(lVar4 + lVar10 * 4);
            if (uVar8 == 0) {
              local_90 = L"";
LAB_001032d7:
              icu_76_godot::UnicodeString::UnicodeString(local_88,1,&local_90,0xffffffff);
            }
            else {
              if (uVar8 == 1) {
                local_90 = L"skip";
                goto LAB_001032d7;
              }
              uVar8 = (uVar8 & 0xffffff) % 0x4ce3;
              cVar2 = (char)(uVar8 / 0x1b);
              local_43 = (char)uVar8 + cVar2 * -0x1b + '`';
              local_42 = cVar2 + (char)((uVar8 / 0x1b) / 0x1b) * -0x1b + '`';
              if (uVar8 + 0x2d8 < 0x5b1) {
                icu_76_godot::UnicodeString::UnicodeString(local_88,&local_43,2,0);
              }
              else {
                local_41 = (char)(uVar8 / 0x2d9) + '`';
                icu_76_godot::UnicodeString::UnicodeString(local_88,&local_43,3,0);
              }
            }
            uVar3 = UniqueCharStrings::addByValue(pUVar1,local_88,param_7);
            *puVar5 = uVar3;
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
            uVar8 = *(uint *)(lVar4 + lVar10 * 4);
            if (uVar8 == 0) {
LAB_001032a0:
              local_90 = L"";
LAB_001032a7:
              icu_76_godot::UnicodeString::UnicodeString(local_88,1,&local_90,0xffffffff);
            }
            else {
              if (uVar8 == 1) {
                local_90 = L"script";
                goto LAB_001032a7;
              }
              lVar6 = uscript_getShortName_76_godot(uVar8 >> 0x18);
              if (lVar6 == 0) goto LAB_001032a0;
              icu_76_godot::UnicodeString::UnicodeString(local_88,lVar6,4,0);
            }
            uVar3 = UniqueCharStrings::addByValue(pUVar1,local_88,param_7);
            puVar5[1] = uVar3;
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
            uVar8 = *(uint *)(lVar4 + lVar10 * 4);
            if ((*(int *)param_7 < 1) && (1 < uVar8)) {
              uVar8 = ((uVar8 & 0xffffff) / 0x4ce3) % 0x2d9;
              if (uVar8 < 0x1b) {
                cVar2 = icu_76_godot::ResourceArray::getValue
                                  ((int)param_4,(ResourceValue *)(ulong)uVar8);
                if (cVar2 == '\0') {
                  *(undefined4 *)param_7 = 2;
                  goto LAB_0010323e;
                }
                local_94 = 0;
                local_90 = (wchar16 *)
                           (**(code **)(*(long *)param_3 + 0x20))(param_3,&local_94,param_7);
                icu_76_godot::UnicodeString::UnicodeString(local_88,1,&local_90,local_94);
              }
              else {
                cVar2 = (char)(uVar8 / 0x1b);
                local_42 = cVar2 + '@';
                local_43 = (char)uVar8 + cVar2 * -0x1b + '@';
                icu_76_godot::UnicodeString::UnicodeString(local_88,&local_43,2,0);
              }
            }
            else {
LAB_0010323e:
              local_90 = L"";
              icu_76_godot::UnicodeString::UnicodeString(local_88,1,&local_90,0xffffffff);
            }
            uVar3 = UniqueCharStrings::addByValue(pUVar1,local_88,param_7);
            puVar5[2] = uVar3;
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
            if (0 < *(int *)param_7) goto LAB_00102f71;
            lVar10 = lVar10 + 1;
            puVar5 = puVar5 + 3;
            iVar9 = *param_6;
          } while ((int)lVar10 < iVar9);
        }
        *param_6 = iVar9 * 3;
      }
    }
    uVar7 = 1;
  }
  else {
LAB_00102f71:
    uVar7 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* icu_76_godot::LikelySubtagsData::load(UErrorCode&) */

void __thiscall icu_76_godot::LikelySubtagsData::load(LikelySubtagsData *this,UErrorCode *param_1)

{
  LikelySubtagsData LVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  char *pcVar12;
  long *plVar13;
  LSR *pLVar14;
  ulong *puVar15;
  LSR *pLVar16;
  UErrorCode *pUVar17;
  UMemory *this_00;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  long local_1f8;
  int local_1c4;
  uint local_1ac;
  uint local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined5 uStack_160;
  undefined3 uStack_15b;
  undefined4 uStack_158;
  undefined1 uStack_154;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  UErrorCode local_128 [48];
  long local_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  long local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  StackUResourceBundle local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_1) goto LAB_0010345e;
  uVar8 = ures_openDirect_76_godot(0,"langInfo",param_1);
  iVar2 = *(int *)param_1;
  *(undefined8 *)this = uVar8;
  if (0 < iVar2) goto LAB_0010345e;
  icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_c8);
  local_140 = 0;
  local_148 = icu_76_godot::ResourceDataValue::getTable;
  local_138 = 0;
  local_130 = 0xffffffff;
  ures_getValueWithFallback_76_godot
            (*(undefined8 *)this,"likely",local_c8,(ResourceValue *)&local_148,param_1);
  icu_76_godot::ResourceDataValue::getTable(local_128);
  if (*(int *)param_1 < 1) {
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_1ac = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    uStack_158 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    cVar7 = icu_76_godot::ResourceTable::findValue((char *)local_128,(ResourceValue *)&_LC5);
    if (cVar7 == '\0') {
      *(undefined4 *)param_1 = 2;
      lVar18 = 0;
      local_1f8 = 0;
      lVar22 = 0;
    }
    else {
      icu_76_godot::ResourceDataValue::getArray((UErrorCode *)&local_f8);
      local_168 = local_f8;
      uStack_160 = uStack_f0;
      uStack_15b = uStack_eb;
      uStack_158 = (undefined4)uStack_e8;
      uStack_154 = (undefined1)((uint5)uStack_e8 >> 0x20);
      cVar7 = readStrings(this,(ResourceTable *)local_128,"languageAliases",
                          (ResourceValue *)&local_148,(LocalMemory *)&local_190,(int *)&local_1ac,
                          param_1);
      if (cVar7 == '\0') {
        local_1f8 = 0;
        lVar18 = 0;
        lVar22 = local_190;
      }
      else {
        cVar7 = readStrings(this,(ResourceTable *)local_128,"regionAliases",
                            (ResourceValue *)&local_148,(LocalMemory *)&local_188,(int *)&local_1a8,
                            param_1);
        lVar22 = local_190;
        if (cVar7 == '\0') {
          local_1f8 = local_188;
          lVar18 = 0;
        }
        else {
          cVar7 = readLSREncodedStrings
                            (this,(ResourceTable *)local_128,"lsrnum",(ResourceValue *)&local_148,
                             (ResourceArray *)&local_168,(LocalMemory *)&local_180,&local_1a4,
                             param_1);
          lVar18 = local_180;
          lVar21 = local_188;
          uVar6 = local_1a8;
          uVar5 = local_1ac;
          local_1f8 = local_188;
          if (cVar7 != '\0') {
            if ((((local_1ac & 1) == 0) && ((local_1a8 & 1) == 0)) && (local_1a4 % 3 == 0)) {
              if ((local_1a4 == 0) ||
                 (cVar7 = icu_76_godot::ResourceTable::findValue
                                    ((char *)local_128,(ResourceValue *)&_LC9), cVar7 == '\0')) {
                *(undefined4 *)param_1 = 2;
              }
              else {
                uVar8 = icu_76_godot::ResourceDataValue::getBinary
                                  ((int *)&local_148,(UErrorCode *)&local_1a0);
                iVar2 = *(int *)param_1;
                *(undefined8 *)(this + 0xd0) = uVar8;
                if (iVar2 < 1) {
                  local_19c = 0;
                  ures_getValueWithFallback_76_godot
                            (*(undefined8 *)this,"match",local_c8,(ResourceValue *)&local_148,
                             &local_19c);
                  local_178 = 0;
                  local_170 = 0;
                  local_198 = 0;
                  local_194 = 0;
                  if (local_19c < 1) {
                    icu_76_godot::ResourceDataValue::getTable((UErrorCode *)&local_f8);
                    if (0 < *(int *)param_1) goto LAB_001037f8;
                    cVar7 = icu_76_godot::ResourceTable::findValue
                                      ((char *)&local_f8,(ResourceValue *)&_LC9);
                    if (cVar7 != '\0') {
                      uVar8 = icu_76_godot::ResourceDataValue::getBinary
                                        ((int *)&local_148,(UErrorCode *)&local_1a0);
                      iVar2 = *(int *)param_1;
                      *(undefined8 *)(this + 0xe8) = uVar8;
                      if (0 < iVar2) goto LAB_001037f8;
                    }
                    cVar7 = icu_76_godot::ResourceTable::findValue
                                      ((char *)&local_f8,(ResourceValue *)"regionToPartitions");
                    if (cVar7 != '\0') {
                      uVar8 = icu_76_godot::ResourceDataValue::getBinary
                                        ((int *)&local_148,(UErrorCode *)&local_1a0);
                      iVar2 = *(int *)param_1;
                      *(undefined8 *)(this + 0xf0) = uVar8;
                      if (iVar2 < 1) {
                        if (0x68c < local_1a0) goto LAB_00103bfc;
LAB_00103cd8:
                        *(undefined4 *)param_1 = 3;
                      }
                      goto LAB_001037f8;
                    }
LAB_00103bfc:
                    cVar7 = readStrings(this,(ResourceTable *)&local_f8,"partitions",
                                        (ResourceValue *)&local_148,(LocalMemory *)&local_178,
                                        &local_198,param_1);
                    if ((cVar7 == '\0') ||
                       (cVar7 = readLSREncodedStrings
                                          (this,(ResourceTable *)&local_f8,"paradigmnum",
                                           (ResourceValue *)&local_148,(ResourceArray *)&local_168,
                                           (LocalMemory *)&local_170,&local_194,param_1),
                       cVar7 == '\0')) goto LAB_001037f8;
                    if (local_194 % 3 != 0) goto LAB_00103cd8;
                    cVar7 = icu_76_godot::ResourceTable::findValue
                                      ((char *)&local_f8,(ResourceValue *)"distances");
                    if (cVar7 != '\0') {
                      uVar8 = icu_76_godot::ResourceDataValue::getIntVector
                                        ((int *)&local_148,(UErrorCode *)&local_1a0);
                      iVar2 = *(int *)param_1;
                      *(undefined8 *)(this + 0x110) = uVar8;
                      if (0 < iVar2) goto LAB_001037f8;
                      if (local_1a0 < 4) goto LAB_00103cd8;
                    }
LAB_00103843:
                    this[0xb8] = (LikelySubtagsData)0x1;
                    uVar8 = uhash_openSize_76_godot
                                      (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                       &uhash_compareChars_76_godot,
                                       (long)(int)uVar5 / 2 & 0xffffffff,param_1);
                    *(undefined8 *)(this + 0xc0) = uVar8;
                    uhash_close_76_godot(0);
                    for (lVar19 = 0; (int)lVar19 < (int)uVar5; lVar19 = lVar19 + 2) {
                      iVar2 = *(int *)(lVar22 + 4 + lVar19 * 4);
                      if ((iVar2 < 1) || (this[0xb8] == (LikelySubtagsData)0x0)) {
                        lVar9 = 0;
                      }
                      else {
                        lVar9 = (long)iVar2 + **(long **)(this + 0x58);
                      }
                      iVar2 = *(int *)(lVar22 + lVar19 * 4);
                      if ((iVar2 < 1) || (this[0xb8] == (LikelySubtagsData)0x0)) {
                        lVar10 = 0;
                      }
                      else {
                        lVar10 = (long)iVar2 + **(long **)(this + 0x58);
                      }
                      uhash_put_76_godot(*(undefined8 *)(this + 0xc0),lVar10,lVar9);
                    }
                    pUVar17 = (UErrorCode *)&uhash_compareChars_76_godot;
                    uVar8 = uhash_openSize_76_godot();
                    *(undefined8 *)(this + 200) = uVar8;
                    uhash_close_76_godot();
                    for (lVar19 = 0; (int)lVar19 < (int)uVar6; lVar19 = lVar19 + 2) {
                      iVar2 = *(int *)(lVar21 + 4 + lVar19 * 4);
                      if ((iVar2 < 1) || (this[0xb8] == (LikelySubtagsData)0x0)) {
                        lVar9 = 0;
                      }
                      else {
                        lVar9 = (long)iVar2 + **(long **)(this + 0x58);
                      }
                      iVar2 = *(int *)(lVar21 + lVar19 * 4);
                      if ((iVar2 < 1) || (this[0xb8] == (LikelySubtagsData)0x0)) {
                        pUVar17 = (UErrorCode *)0x0;
                      }
                      else {
                        pUVar17 = (UErrorCode *)((long)iVar2 + **(long **)(this + 0x58));
                      }
                      uhash_put_76_godot(*(undefined8 *)(this + 200),pUVar17,lVar9);
                    }
                    if (0 < *(int *)param_1) goto LAB_001037f8;
                    this_00 = (UMemory *)0xffffffffffffffff;
                    *(int *)(this + 0xe0) = local_1a4 / 3;
                    uVar20 = (ulong)(local_1a4 / 3);
                    if (uVar20 < 0x2aaaaaaaaaaaaab) {
                      this_00 = (UMemory *)(uVar20 * 0x30 + 8);
                    }
                    puVar11 = (ulong *)icu_76_godot::UMemory::operator_new__(this_00,(ulong)pUVar17)
                    ;
                    if (puVar11 == (ulong *)0x0) {
                      *(undefined8 *)(this + 0xd8) = 0;
                      *(undefined4 *)param_1 = 7;
                      goto LAB_001037f8;
                    }
                    *puVar11 = uVar20;
                    puVar4 = PTR__LC16_00104120;
                    puVar15 = puVar11 + 1;
                    while (uVar20 = uVar20 - 1, -1 < (long)uVar20) {
                      puVar15[3] = 0;
                      puVar15[4] = 0;
                      puVar15[2] = (ulong)&_LC16;
                      *(undefined4 *)(puVar15 + 5) = 0;
                      *puVar15 = (ulong)&_LC15;
                      puVar15[1] = (ulong)puVar4;
                      puVar15 = puVar15 + 6;
                    }
                    *(ulong **)(this + 0xd8) = puVar11 + 1;
                    for (lVar21 = 0; lVar19 = local_178, iVar2 = local_198, (int)lVar21 < local_1a4;
                        lVar21 = lVar21 + 3) {
                      iVar2 = *(int *)(lVar18 + 8 + lVar21 * 4);
                      LVar1 = this[0xb8];
                      if ((iVar2 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                        pcVar12 = (char *)0x0;
                      }
                      else {
                        pcVar12 = (char *)((long)iVar2 + **(long **)(this + 0x58));
                      }
                      iVar2 = *(int *)(lVar18 + 4 + lVar21 * 4);
                      if ((iVar2 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                        lVar19 = 0;
                      }
                      else {
                        lVar19 = (long)iVar2 + **(long **)(this + 0x58);
                      }
                      iVar2 = *(int *)(lVar18 + lVar21 * 4);
                      if ((iVar2 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                        local_f8 = 0;
                      }
                      else {
                        local_f8 = (long)iVar2 + **(long **)(this + 0x58);
                      }
                      uStack_e8 = SUB85(pcVar12,0);
                      uStack_e3 = (undefined3)((ulong)pcVar12 >> 0x28);
                      local_e0 = 0;
                      uStack_f0 = (undefined5)lVar19;
                      uStack_eb = (undefined3)((ulong)lVar19 >> 0x28);
                      local_d8 = icu_76_godot::LSR::indexForRegion(pcVar12);
                      local_d4 = 0;
                      pUVar17 = (UErrorCode *)&local_f8;
                      icu_76_godot::LSR::operator=
                                ((LSR *)(lVar21 * 0x10 + *(long *)(this + 0xd8)),(LSR *)&local_f8);
                      if (local_e0 != 0) {
                        icu_76_godot::LSR::deleteOwned();
                      }
                    }
                    if (0 < local_198) {
                      lVar21 = uprv_malloc_76_godot((long)local_198 << 3);
                      *(long *)(this + 0xf8) = lVar21;
                      if (lVar21 != 0) {
                        LVar1 = this[0xb8];
                        pUVar17 = (UErrorCode *)(ulong)(byte)LVar1;
                        lVar9 = 0;
                        do {
                          iVar3 = *(int *)(lVar19 + lVar9 * 4);
                          if ((iVar3 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                            lVar10 = 0;
                          }
                          else {
                            lVar10 = (long)iVar3 + **(long **)(this + 0x58);
                          }
                          *(long *)(lVar21 + lVar9 * 8) = lVar10;
                          lVar9 = lVar9 + 1;
                        } while ((int)lVar9 < iVar2);
                        goto LAB_00103d14;
                      }
LAB_00103ee5:
                      *(undefined4 *)param_1 = 7;
                      goto LAB_001037f8;
                    }
LAB_00103d14:
                    if (0 < local_194) {
                      lVar21 = (long)(local_194 / 3);
                      *(int *)(this + 0x108) = local_194 / 3;
                      plVar13 = (long *)icu_76_godot::UMemory::operator_new__
                                                  ((UMemory *)(lVar21 * 0x30 + 8),(ulong)pUVar17);
                      if (plVar13 == (long *)0x0) goto LAB_00103ee5;
                      pLVar14 = (LSR *)(plVar13 + 1);
                      *plVar13 = lVar21;
                      pLVar16 = pLVar14;
                      while (bVar23 = lVar21 != 0, lVar21 = lVar21 + -1, bVar23) {
                        *(undefined8 *)(pLVar16 + 0x18) = 0;
                        *(undefined **)(pLVar16 + 0x10) = &_LC16;
                        *(undefined8 *)(pLVar16 + 0x20) = 0;
                        *(undefined4 *)(pLVar16 + 0x28) = 0;
                        *(undefined **)pLVar16 = &_LC15;
                        *(undefined **)(pLVar16 + 8) = puVar4;
                        pLVar16 = pLVar16 + 0x30;
                      }
                      lVar21 = 0;
                      pLVar16 = pLVar14;
                      for (local_1c4 = 0; local_1c4 < local_194; local_1c4 = local_1c4 + 3) {
                        LVar1 = this[0xb8];
                        iVar2 = *(int *)(local_170 + 8 + lVar21);
                        if ((iVar2 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                          pcVar12 = (char *)0x0;
                        }
                        else {
                          pcVar12 = (char *)((long)iVar2 + **(long **)(this + 0x58));
                        }
                        iVar2 = *(int *)(local_170 + 4 + lVar21);
                        if ((iVar2 < 1) || (LVar1 == (LikelySubtagsData)0x0)) {
                          lVar9 = 0;
                        }
                        else {
                          lVar9 = (long)iVar2 + **(long **)(this + 0x58);
                        }
                        if ((*(int *)(local_170 + lVar21) < 1) || (LVar1 == (LikelySubtagsData)0x0))
                        {
                          local_f8 = 0;
                        }
                        else {
                          local_f8 = (long)*(int *)(local_170 + lVar21) + **(long **)(this + 0x58);
                        }
                        uStack_f0 = (undefined5)lVar9;
                        uStack_eb = (undefined3)((ulong)lVar9 >> 0x28);
                        uStack_e8 = SUB85(pcVar12,0);
                        uStack_e3 = (undefined3)((ulong)pcVar12 >> 0x28);
                        local_e0 = 0;
                        local_d8 = icu_76_godot::LSR::indexForRegion(pcVar12);
                        local_d4 = 0;
                        icu_76_godot::LSR::operator=(pLVar16,(LSR *)&local_f8);
                        if (local_e0 != 0) {
                          icu_76_godot::LSR::deleteOwned();
                        }
                        pLVar16 = pLVar16 + 0x30;
                        lVar21 = lVar21 + 0xc;
                      }
                      *(LSR **)(this + 0x100) = pLVar14;
                    }
                    uprv_free_76_godot(local_170);
                  }
                  else {
                    if (local_19c == 2) goto LAB_00103843;
                    *(int *)param_1 = local_19c;
LAB_001037f8:
                    uprv_free_76_godot(local_170);
                    lVar19 = local_178;
                  }
                  uprv_free_76_godot(lVar19);
                }
              }
            }
            else {
              *(undefined4 *)param_1 = 3;
            }
          }
        }
      }
    }
    uprv_free_76_godot(lVar18);
    uprv_free_76_godot(local_1f8);
    uprv_free_76_godot(lVar22);
  }
  icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue *)&local_148);
  icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
LAB_0010345e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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


