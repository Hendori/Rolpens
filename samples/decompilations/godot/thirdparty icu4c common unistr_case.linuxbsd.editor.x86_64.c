
/* icu_76_godot::UnicodeString::doCaseCompare(int, int, char16_t const*, int, int, unsigned int)
   const */

uint __thiscall
icu_76_godot::UnicodeString::doCaseCompare
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4,int param_5,
          uint param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  UnicodeString *pUVar6;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  uVar1 = *(ushort *)(this + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = uVar1 & 1;
  if ((uVar1 & 1) != 0) {
    uVar4 = 0xffffffff;
    goto LAB_001000c2;
  }
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_1 < 0) {
    lVar5 = 0;
    param_1 = 0;
  }
  else {
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lVar5 = (long)param_1 * 2;
  }
  iVar3 = iVar2 - param_1;
  if (param_2 < iVar2 - param_1) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  if (param_3 == (wchar16 *)0x0) {
    if ((uVar1 & 2) == 0) {
      iVar3 = 0;
      param_5 = 0;
      pUVar6 = (UnicodeString *)(lVar5 + *(long *)(this + 0x18));
      if (pUVar6 == (UnicodeString *)0x0) goto LAB_00100114;
    }
    else {
      pUVar6 = this + lVar5 + 10;
      iVar3 = 0;
    }
  }
  else {
    if ((uVar1 & 2) == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar6 = this + 10;
    }
    pUVar6 = pUVar6 + lVar5;
    if (param_4 != 0) {
      param_3 = param_3 + param_4;
    }
    iVar3 = param_5;
    if ((UnicodeString *)param_3 == pUVar6) {
      if (param_5 < 0) {
        param_5 = u_strlen_76_godot((UnicodeString *)((long)param_3 + (long)param_4 * 2));
      }
LAB_00100114:
      if (param_5 != iVar2) {
        uVar4 = iVar2 - param_5 >> 0x18 | 1;
      }
      goto LAB_001000c2;
    }
  }
  local_14 = 0;
  iVar2 = u_strcmpFold_76_godot(pUVar6,iVar2,param_3,iVar3,param_6 | 0x10000,&local_14);
  if (iVar2 != 0) {
    uVar4 = iVar2 >> 0x18 | 1;
  }
LAB_001000c2:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::UnicodeString::caseMap(int, unsigned int, icu_76_godot::BreakIterator*, int
   (*)(int, unsigned int, icu_76_godot::BreakIterator*, char16_t*, int, char16_t const*, int,
   icu_76_godot::Edits*, UErrorCode&)) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::caseMap
          (UnicodeString *this,int param_1,uint param_2,BreakIterator *param_3,
          _func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
          *param_4)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  UnicodeString *pUVar5;
  int iVar6;
  long in_FS_OFFSET;
  UnicodeString *local_368;
  UnicodeString *local_360;
  int local_33c;
  UnicodeString *local_338 [2];
  char local_324;
  uint local_320;
  int local_314;
  int local_310;
  code *local_308;
  undefined2 local_300;
  undefined1 *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac [212];
  UnicodeString local_1d8 [408];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ushort *)(this + 8);
  if (((short)uVar3 >> 5 == 0) || ((uVar3 & 0x11) != 0)) goto LAB_0010049a;
  iVar6 = (int)((short)uVar3 >> 5);
  if ((short)uVar3 < 0) {
    iVar6 = *(int *)(this + 0xc);
  }
  if ((uVar3 & 0x19) == 0) {
    if ((uVar3 & 4) != 0) {
      iVar4 = icu_76_godot::UnicodeString::refCount();
      uVar3 = *(ushort *)(this + 8);
      if (iVar4 != 1) goto LAB_0010030e;
    }
    if (0x36 < iVar6) goto LAB_0010031b;
    bVar1 = true;
LAB_0010021e:
    local_300 = 2;
    local_308 = icu_76_godot::UnicodeString::setTo;
    local_33c = 0;
    if ((uVar3 & 2) == 0) {
      local_360 = *(UnicodeString **)(this + 0x18);
    }
    else {
      local_360 = this + 10;
    }
    u_memcpy_76_godot(local_1d8,local_360,iVar6);
    if (bVar1) {
      iVar4 = 0x1b;
      if (((byte)this[8] & 2) == 0) {
        iVar4 = *(int *)(this + 0x10);
      }
LAB_00100260:
      if (param_3 != (BreakIterator *)0x0) {
        local_338[0] = local_1d8;
        icu_76_godot::UnicodeString::setTo(&local_308,0,local_338,iVar6);
        (**(code **)(*(long *)param_3 + 0x38))(param_3,&local_308);
      }
      iVar4 = (*param_4)(param_1,param_2,param_3,(wchar16 *)local_360,iVar4,(wchar16 *)local_1d8,
                         iVar6,(Edits *)0x0,(UErrorCode *)&local_33c);
      if (local_33c < 1) {
        if (iVar4 < 0x400) {
          *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | (ushort)(iVar4 << 5);
        }
        else {
          *(int *)(this + 0xc) = iVar4;
          *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
        }
        goto LAB_00100490;
      }
      local_360 = local_1d8;
      if (local_33c == 0xf) goto LAB_0010040c;
LAB_00100488:
      icu_76_godot::UnicodeString::setToBogus();
    }
    else {
      cVar2 = icu_76_godot::UnicodeString::cloneArrayIfNeeded(this,0x1b,0x1b,0,0,0);
      local_360 = this + 10;
      iVar4 = 0x1b;
      if (cVar2 != '\0') goto LAB_00100260;
    }
  }
  else {
LAB_0010030e:
    bVar1 = false;
    if (iVar6 < 0x1b) goto LAB_0010021e;
LAB_0010031b:
    local_300 = 2;
    local_308 = icu_76_godot::UnicodeString::setTo;
    local_33c = 0;
    if ((uVar3 & 2) == 0) {
      local_360 = *(UnicodeString **)(this + 0x18);
    }
    else {
      local_360 = this + 10;
    }
    local_2c8 = local_2ac;
    local_2b0 = 0;
    local_2c0 = __LC0;
    uStack_2b8 = _UNK_00100808;
    if (param_3 != (BreakIterator *)0x0) {
      local_338[0] = local_360;
      icu_76_godot::UnicodeString::setTo(&local_308,0,local_338,iVar6);
      (**(code **)(*(long *)param_3 + 0x38))(param_3,&local_308);
    }
    (*param_4)(param_1,param_2 | 0x4000,param_3,(wchar16 *)local_1d8,200,(wchar16 *)local_360,iVar6,
               (Edits *)&local_2c8,(UErrorCode *)&local_33c);
    if (local_33c < 1) {
      iVar4 = (int)uStack_2b8 + iVar6;
      if ((iVar4 <= iVar6) ||
         (cVar2 = icu_76_godot::UnicodeString::cloneArrayIfNeeded(this,iVar4,iVar4,1,0,0),
         cVar2 != '\0')) {
        icu_76_godot::Edits::Iterator::Iterator((Iterator *)local_338,local_2c8,local_2c0._4_4_,1,1)
        ;
        while (cVar2 = icu_76_godot::Edits::Iterator::next
                                 ((Iterator *)local_338,(int)local_324,(UErrorCode *)&local_33c),
              cVar2 != '\0') {
          icu_76_godot::UnicodeString::doReplace
                    ((int)this,local_310,(wchar16 *)(ulong)local_320,(int)local_1d8,local_314);
        }
        if (0 < local_33c) goto LAB_001005d0;
      }
    }
    else {
      if (local_33c == 0xf) {
        iVar4 = (int)uStack_2b8 + iVar6;
        icu_76_godot::Edits::~Edits((Edits *)&local_2c8);
LAB_0010040c:
        local_338[0] = (UnicodeString *)0x0;
        cVar2 = icu_76_godot::UnicodeString::cloneArrayIfNeeded(this,iVar4,iVar4,0,local_338,1);
        if (cVar2 != '\0') {
          local_33c = 0;
          if (((byte)this[8] & 2) == 0) {
            iVar4 = *(int *)(this + 0x10);
            pUVar5 = *(UnicodeString **)(this + 0x18);
          }
          else {
            pUVar5 = this + 10;
            iVar4 = 0x1b;
          }
          iVar6 = (*param_4)(param_1,param_2,param_3,(wchar16 *)pUVar5,iVar4,(wchar16 *)local_360,
                             iVar6,(Edits *)0x0,(UErrorCode *)&local_33c);
          if (local_338[0] != (UnicodeString *)0x0) {
            uprv_free_76_godot();
          }
          if (0 < local_33c) goto LAB_00100488;
          if (iVar6 < 0x400) {
            *(ushort *)(this + 8) = (ushort)(iVar6 << 5) | *(ushort *)(this + 8) & 0x1f;
          }
          else {
            *(int *)(this + 0xc) = iVar6;
            *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
          }
        }
        goto LAB_00100490;
      }
LAB_001005d0:
      icu_76_godot::UnicodeString::setToBogus();
    }
    icu_76_godot::Edits::~Edits((Edits *)&local_2c8);
  }
LAB_00100490:
  local_368 = (UnicodeString *)&local_308;
  icu_76_godot::UnicodeString::~UnicodeString(local_368);
LAB_0010049a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeString::foldCase(unsigned int) */

void __thiscall icu_76_godot::UnicodeString::foldCase(UnicodeString *this,uint param_1)

{
  caseMap(this,1,param_1,(BreakIterator *)0x0,
          (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
           *)&ustrcase_internalFold_76_godot);
  return;
}



undefined4 uhash_hashCaselessUnicodeString_76_godot(UnicodeString *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  UnicodeString aUStack_68 [72];
  long local_20;
  
  uVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (UnicodeString *)0x0) {
    icu_76_godot::UnicodeString::UnicodeString(aUStack_68,param_1);
    icu_76_godot::UnicodeString::caseMap
              (aUStack_68,1,0,(BreakIterator *)0x0,
               (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
                *)&ustrcase_internalFold_76_godot);
    uVar1 = icu_76_godot::UnicodeString::doHashCode();
    icu_76_godot::UnicodeString::~UnicodeString(aUStack_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool uhash_compareCaselessUnicodeString_76_godot(UnicodeString *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  UnicodeString *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (UnicodeString *)0x0) && (param_2 != (UnicodeString *)0x0)) {
    uVar1 = *(ushort *)(param_2 + 8);
    if ((short)uVar1 < 0) {
      iVar7 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar7 = (int)((short)uVar1 >> 5);
    }
    uVar2 = *(ushort *)(param_1 + 8);
    if ((short)uVar2 < 0) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar5 = (int)((short)uVar2 >> 5);
    }
    if ((uVar1 & 1) != 0) {
      return (~uVar2 & 1) == 0;
    }
    iVar8 = iVar7;
    iVar6 = 0;
    if (iVar7 < 0) {
      iVar8 = 0;
      iVar6 = iVar7;
    }
    pUVar4 = param_2 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(param_2 + 0x18);
    }
    cVar3 = icu_76_godot::UnicodeString::doCaseCompare
                      (param_1,0,iVar5,(wchar16 *)pUVar4,iVar6,iVar8,0);
    return cVar3 == '\0';
  }
  return false;
}


