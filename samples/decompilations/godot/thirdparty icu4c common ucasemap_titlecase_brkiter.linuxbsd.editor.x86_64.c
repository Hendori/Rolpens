
/* icu_76_godot::CaseMap::utf8ToTitle(char const*, unsigned int, icu_76_godot::BreakIterator*,
   icu_76_godot::StringPiece, icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void __thiscall
icu_76_godot::CaseMap::utf8ToTitle
          (CaseMap *this,uint param_2,undefined8 param_3_00,char *param_3,int param_5,
          ByteSink *param_6,Edits *param_7,UErrorCode *param_8)

{
  int iVar1;
  BreakIterator *pBVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  long *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [4];
  undefined8 uStack_d0;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_8 < 1) {
    _local_d4 = 0;
    local_50 = 0;
    puVar4 = (undefined8 *)(local_d4 + 4);
    for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_d8 = 0x345ad82c;
    uStack_d0._4_4_ = 0x90;
    utext_openUTF8_76_godot(&local_d8,param_3,(long)param_5,param_8);
    local_e0 = (long *)0x0;
    pBVar2 = (BreakIterator *)
             ustrcase_getTitleBreakIterator_76_godot(0,this,param_2,param_3_00,&local_e0,param_8);
    if (pBVar2 != (BreakIterator *)0x0) {
      (**(code **)(*(long *)pBVar2 + 0x40))(pBVar2,&local_d8,param_8);
      iVar1 = ustrcase_getCaseLocale_76_godot(this);
      ucasemap_mapUTF8_76_godot
                (iVar1,param_2,pBVar2,param_3,param_5,
                 (_func_void_int_uint_BreakIterator_ptr_uchar_ptr_int_ByteSink_ptr_Edits_ptr_UErrorCode_ptr
                  *)&ucasemap_internalUTF8ToTitle_76_godot,param_6,param_7,param_8);
    }
    utext_close_76_godot(&local_d8);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 8))();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CaseMap::utf8ToTitle(char const*, unsigned int, icu_76_godot::BreakIterator*, char
   const*, int, char*, int, icu_76_godot::Edits*, UErrorCode&) */

undefined4
icu_76_godot::CaseMap::utf8ToTitle
          (char *param_1,uint param_2,BreakIterator *param_3,char *param_4,int param_5,char *param_6
          ,int param_7,Edits *param_8,UErrorCode *param_9)

{
  int iVar1;
  undefined4 uVar2;
  BreakIterator *pBVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  long *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [4];
  undefined8 uStack_d0;
  undefined8 local_50;
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_9 < 1) {
    _local_d4 = 0;
    local_50 = 0;
    puVar5 = (undefined8 *)(local_d4 + 4);
    for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_d8 = 0x345ad82c;
    uStack_d0._4_4_ = 0x90;
    utext_openUTF8_76_godot(&local_d8,param_4,(long)param_5,param_9);
    local_e0 = (long *)0x0;
    pBVar3 = (BreakIterator *)
             ustrcase_getTitleBreakIterator_76_godot(0,param_1,param_2,param_3,&local_e0,param_9);
    if (pBVar3 != (BreakIterator *)0x0) {
      (**(code **)(*(long *)pBVar3 + 0x40))(pBVar3,&local_d8,param_9);
      iVar1 = ustrcase_getCaseLocale_76_godot(param_1);
      uVar2 = ucasemap_mapUTF8_76_godot
                        (iVar1,param_2,pBVar3,param_6,param_7,param_4,param_5,
                         (_func_void_int_uint_BreakIterator_ptr_uchar_ptr_int_ByteSink_ptr_Edits_ptr_UErrorCode_ptr
                          *)_GLOBAL_OFFSET_TABLE_,param_8,param_9);
    }
    utext_close_76_godot(&local_d8);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 8))();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ucasemap_getBreakIterator_76_godot(undefined8 *param_1)

{
  return *param_1;
}



void ucasemap_setBreakIterator_76_godot(long *param_1,long param_2,int *param_3)

{
  if (*param_3 < 1) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
    *param_1 = param_2;
    return;
  }
  return;
}



undefined4
ucasemap_utf8ToTitle_76_godot
          (long *param_1,char *param_2,int param_3,char *param_4,int param_5,UErrorCode *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [4];
  undefined8 uStack_d0;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    _local_d4 = 0;
    local_50 = 0;
    puVar3 = (undefined8 *)(local_d4 + 4);
    for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_d8 = 0x345ad82c;
    uStack_d0._4_4_ = 0x90;
    utext_openUTF8_76_godot(&local_d8,param_4,(long)param_5,param_6);
    if (*(int *)param_6 < 1) {
      plVar4 = (long *)*param_1;
      if ((long *)*param_1 == (long *)0x0) {
        local_e0 = (long *)0x0;
        lVar2 = ustrcase_getTitleBreakIterator_76_godot
                          (0,param_1 + 1,*(undefined4 *)((long)param_1 + 0x2c),0,&local_e0,param_6);
        if (lVar2 == 0) {
          utext_close_76_godot(&local_d8);
          if (local_e0 != (long *)0x0) {
            uVar1 = 0;
            (**(code **)(*local_e0 + 8))();
            goto LAB_0010042c;
          }
          goto LAB_00100370;
        }
        *param_1 = (long)local_e0;
        plVar4 = local_e0;
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_d8,param_6);
      uVar1 = ucasemap_mapUTF8_76_godot
                        ((int)param_1[5],*(uint *)((long)param_1 + 0x2c),(BreakIterator *)*param_1,
                         param_2,param_3,param_4,param_5,
                         (_func_void_int_uint_BreakIterator_ptr_uchar_ptr_int_ByteSink_ptr_Edits_ptr_UErrorCode_ptr
                          *)_GLOBAL_OFFSET_TABLE_,(Edits *)0x0,param_6);
      utext_close_76_godot(&local_d8);
      goto LAB_0010042c;
    }
  }
LAB_00100370:
  uVar1 = 0;
LAB_0010042c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


