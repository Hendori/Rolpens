
RuleBasedBreakIterator *
ubrk_openBinaryRules_76_godot
          (uchar *param_1,ulong param_2,long param_3,int param_4,UErrorCode *param_5)

{
  RuleBasedBreakIterator *this;
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_d8;
  undefined1 local_d4 [8];
  undefined4 local_cc;
  undefined8 local_50;
  long local_40;
  
  bVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_5 < 1) {
    if ((int)(uint)param_2 < 0) {
      *(undefined4 *)param_5 = 1;
    }
    else {
      this = (RuleBasedBreakIterator *)icu_76_godot::UMemory::operator_new((UMemory *)0x2f0,param_2)
      ;
      if (this == (RuleBasedBreakIterator *)0x0) {
        if (*(int *)param_5 < 1) {
          *(undefined4 *)param_5 = 7;
        }
      }
      else {
        icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
                  (this,param_1,(uint)param_2,param_5);
        if (*(int *)param_5 < 1) {
          if (param_3 != 0) {
            local_d4 = (undefined1  [8])0x0;
            local_50 = 0;
            puVar2 = (undefined8 *)(local_d4 + 4);
            for (lVar1 = 0x11; lVar1 != 0; lVar1 = lVar1 + -1) {
              *puVar2 = 0;
              puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
            }
            local_d8 = 0x345ad82c;
            local_cc = 0x90;
            utext_openUChars_76_godot(&local_d8,param_3,(long)param_4,param_5);
            (**(code **)(*(long *)this + 0x40))(this,&local_d8,param_5);
          }
          goto LAB_001000ea;
        }
        icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator(this);
      }
    }
  }
  this = (RuleBasedBreakIterator *)0x0;
LAB_001000ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ubrk_safeClone_76_godot(long *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if (*param_4 < 1) {
    if (param_1 == (long *)0x0) {
      *param_4 = 1;
    }
    else {
      if (param_3 == (int *)0x0) {
        lVar2 = (**(code **)(*param_1 + 0x20))();
        if (lVar2 != 0) {
          return lVar2;
        }
      }
      else {
        iVar1 = *param_3;
        *param_3 = 1;
        if (iVar1 == 0) {
          return 0;
        }
        lVar2 = (**(code **)(*param_1 + 0x20))();
        if (lVar2 != 0) {
          *param_4 = -0x7e;
          return lVar2;
        }
      }
      *param_4 = 7;
    }
  }
  return 0;
}



long ubrk_clone_76_godot(long *param_1,int *param_2)

{
  long lVar1;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 < 1) {
    if (param_1 != (long *)0x0) {
      lVar1 = (**(code **)(*param_1 + 0x20))();
      if (lVar1 != 0) {
        return lVar1;
      }
      *param_2 = 7;
      return 0;
    }
    *param_2 = 1;
  }
  return 0;
}



void ubrk_close_76_godot(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



void ubrk_setText_76_godot(long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  undefined8 uStack_b0;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _local_b4 = 0;
  local_30 = 0;
  puVar2 = (undefined8 *)(local_b4 + 4);
  for (lVar1 = 0x11; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_b8 = 0x345ad82c;
  uStack_b0._4_4_ = 0x90;
  utext_openUChars_76_godot(&local_b8,param_2,(long)param_3,param_4);
  (**(code **)(*param_1 + 0x40))(param_1,&local_b8,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ubrk_setUText_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



void ubrk_current_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



void ubrk_next_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



void ubrk_previous_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



void ubrk_first_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



void ubrk_last_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



void ubrk_preceding_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



void ubrk_following_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}



void ubrk_getAvailable_76_godot(void)

{
  uloc_getAvailable_76_godot();
  return;
}



void ubrk_countAvailable_76_godot(void)

{
  uloc_countAvailable_76_godot();
  return;
}



void ubrk_isBoundary_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}



void ubrk_getRuleStatus_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



void ubrk_getRuleStatusVec_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



undefined8 ubrk_getLocaleByType_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = icu_76_godot::BreakIterator::getLocaleID();
    return uVar1;
  }
  if (*param_3 < 1) {
    *param_3 = 1;
  }
  return 0;
}



void ubrk_refreshUText_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001003a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



uint ubrk_getBinaryRules_76_godot(long param_1,void *param_2,int param_3,int *param_4)

{
  long *plVar1;
  void *__src;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if (((param_2 != (void *)0x0 || param_3 < 1) && (-1 < param_3)) && (param_1 != 0)) {
      plVar1 = (long *)__dynamic_cast(param_1,&icu_76_godot::BreakIterator::typeinfo,
                                      &icu_76_godot::RuleBasedBreakIterator::typeinfo,0);
      if (plVar1 != (long *)0x0) {
        __src = (void *)(**(code **)(*plVar1 + 200))(plVar1,&local_34);
        if (-1 < (int)local_34) {
          if (param_2 != (void *)0x0) {
            if (param_3 < (int)local_34) {
              *param_4 = 0xf;
            }
            else {
              memcpy(param_2,__src,(ulong)local_34);
            }
          }
          goto LAB_00100449;
        }
        *param_4 = 8;
        goto LAB_00100446;
      }
    }
    *param_4 = 1;
  }
LAB_00100446:
  local_34 = 0;
LAB_00100449:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ubrk_open_76_godot(uint param_1,char *param_2,long param_3,int param_4,UErrorCode *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_1a8;
  undefined1 local_1a4 [8];
  undefined4 local_19c;
  undefined8 local_120;
  Locale local_118 [232];
  long local_30;
  
  bVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_5 < 1) {
    if (4 < param_1) {
      *(undefined4 *)param_5 = 1;
      plVar1 = (long *)0x0;
      goto LAB_0010059a;
    }
    switch(param_1) {
    case 0:
      icu_76_godot::Locale::Locale(local_118,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
      plVar1 = (long *)icu_76_godot::BreakIterator::createCharacterInstance(local_118,param_5);
      icu_76_godot::Locale::~Locale(local_118);
      break;
    case 1:
      icu_76_godot::Locale::Locale(local_118,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
      plVar1 = (long *)icu_76_godot::BreakIterator::createWordInstance(local_118,param_5);
      icu_76_godot::Locale::~Locale(local_118);
      break;
    case 2:
      icu_76_godot::Locale::Locale(local_118,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
      plVar1 = (long *)icu_76_godot::BreakIterator::createLineInstance(local_118,param_5);
      icu_76_godot::Locale::~Locale(local_118);
      break;
    case 3:
      icu_76_godot::Locale::Locale(local_118,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
      plVar1 = (long *)icu_76_godot::BreakIterator::createSentenceInstance(local_118,param_5);
      icu_76_godot::Locale::~Locale(local_118);
      break;
    case 4:
      icu_76_godot::Locale::Locale(local_118,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
      plVar1 = (long *)icu_76_godot::BreakIterator::createTitleInstance(local_118,param_5);
      icu_76_godot::Locale::~Locale(local_118);
      if (0 < *(int *)param_5) goto LAB_001005ed;
      goto LAB_00100535;
    }
    if (*(int *)param_5 < 1) {
LAB_00100535:
      if (plVar1 == (long *)0x0) {
        *(undefined4 *)param_5 = 7;
        plVar1 = (long *)0x0;
      }
      else if (param_3 != 0) {
        local_1a4 = (undefined1  [8])0x0;
        local_120 = 0;
        puVar3 = (undefined8 *)(local_1a4 + 4);
        for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
        }
        local_1a8 = 0x345ad82c;
        local_19c = 0x90;
        utext_openUChars_76_godot(&local_1a8,param_3,(long)param_4,param_5);
        (**(code **)(*plVar1 + 0x40))(plVar1,&local_1a8,param_5);
      }
      goto LAB_0010059a;
    }
  }
LAB_001005ed:
  plVar1 = (long *)0x0;
LAB_0010059a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ubrk_openRules_76_godot
                 (wchar16 *param_1,int param_2,long param_3,int param_4,UParseError *param_5,
                 UErrorCode *param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_118;
  undefined1 local_114 [8];
  undefined4 local_10c;
  undefined8 local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  bVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == (UErrorCode *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)0x0;
    if (*(int *)param_6 < 1) {
      icu_76_godot::UnicodeString::UnicodeString(local_88,param_1,param_2);
      plVar1 = (long *)icu_76_godot::RBBIRuleBuilder::createRuleBasedBreakIterator
                                 (local_88,param_5,param_6);
      if (*(int *)param_6 < 1) {
        if (param_3 != 0) {
          local_114 = (undefined1  [8])0x0;
          local_90 = 0;
          puVar3 = (undefined8 *)(local_114 + 4);
          for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
          }
          local_118 = 0x345ad82c;
          local_10c = 0x90;
          utext_openUChars_76_godot(&local_118,param_3,(long)param_4,param_6);
          (**(code **)(*plVar1 + 0x40))(plVar1,&local_118,param_6);
          icu_76_godot::UnicodeString::~UnicodeString(local_88);
          goto LAB_00100778;
        }
      }
      else {
        plVar1 = (long *)0x0;
      }
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
    }
  }
LAB_00100778:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


