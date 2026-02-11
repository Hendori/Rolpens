
/* Script::_get_property_default_value(StringName const&) */

StringName * Script::_get_property_default_value(StringName *param_1)

{
  long lVar1;
  long *in_RSI;
  
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = *in_RSI;
  *(undefined4 *)param_1 = 0;
  (**(code **)(lVar1 + 0x2a0))();
  return param_1;
}



/* ScriptLanguage::frame() */

void ScriptLanguage::frame(void)

{
  return;
}



/* Script::_set_debugger_break_language() */

void __thiscall Script::_set_debugger_break_language(Script *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if ((EngineDebugger::singleton != 0) && (EngineDebugger::script_debugger != 0)) {
    uVar1 = (**(code **)(*(long *)this + 0x288))();
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
      ScriptDebugger::break_lang();
    }
    *(undefined8 *)(in_FS_OFFSET + lRam000000000010007b) = uVar1;
    return;
  }
  return;
}



/* void call_with_validated_variant_args_retc_helper<__UnexistingClass, Variant>(__UnexistingClass*,
   Variant (__UnexistingClass::*)() const, Variant const**, Variant*, IndexSequence<>) [clone
   .isra.0] */

void call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
               (long param_1,code *param_2,long param_3,Variant_conflict *param_4)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + param_3) + -1);
  }
  (*param_2)(local_38);
  Variant::operator=(param_4,(Variant_conflict *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName *pSVar13;
  StringName *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC0;
LAB_0010023c:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_001001f0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001001f0;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010028e:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_001001f0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001001f0;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_0010028e;
          }
          uVar8 = 0;
          pbVar10 = &_LC0;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_0010023c;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_001001f0;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_001001f0;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_00100218;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_001001f0;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_001001f0;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_00100218:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_001001f0:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_00100658;
  }
  else {
    this = (StringName *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName *)&local_48,param_4);
      goto LAB_00100432;
    }
LAB_00100658:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC0;
        if (pbVar10 != (byte *)0x0) goto LAB_001004f3;
LAB_00100495:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00100428;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00100428;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00100428;
          }
          goto LAB_001003f0;
        }
      }
LAB_00100428:
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC0;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar3 = 0;
        goto LAB_001004f9;
      }
LAB_0010055a:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_00100428;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_00100428;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_00100428;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_00100428;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_0010055a;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_00100428;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_00100428;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_00100428;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_00100432;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00100495;
LAB_001004f3:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001004f9:
        if (bVar4 == 0) goto LAB_00100428;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_00100428;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_00100428;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100428;
        }
      }
    }
LAB_001003f0:
    StringName::operator=((StringName *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_00100432:
  local_50 = (StringName *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_0010089b;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC0;
LAB_001007a1:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0010089b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0010089b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0010089b;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_0010089b;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001007fe:
        if (bVar4 == 0) goto LAB_0010089b;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0010089b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0010089b;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010089b;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC0;
          uVar9 = 0;
          goto LAB_001007fe;
        }
        uVar8 = 0;
        pbVar10 = &_LC0;
LAB_00100717:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0010089b;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0010089b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0010089b;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0010089b;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_001007a1;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00100717;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_0010089b;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0010089b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0010089b;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0010089b;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010089b:
      StringName::operator=((StringName *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName *param_3)

{
  StringName *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC0;
LAB_00100a78:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_001009d0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001009d0;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00100b20:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_001009d0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001009d0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC0;
        uVar7 = 0;
        goto LAB_00100b20;
      }
      uVar6 = 0;
      pbVar8 = &_LC0;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_00100a78;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_001009d0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001009d0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00100ac8;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_001009d0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_001009d0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_00100ac8:
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  unguarded_linear_insert(param_2,(StringName *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00100a16;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_00100a02;
  }
  goto LAB_00100a06;
LAB_001009d0:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName *)&local_50);
LAB_00100a02:
  if (StringName::configured == '\0') goto LAB_00100a16;
LAB_00100a06:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00100a16:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName *param_1,StringName *param_2,StringName *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_00101500:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_00100dce:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00100dd4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_001010c9;
LAB_00100f22:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00100d52:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00100e40:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00100e88;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00100e88;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00100db8;
        }
        goto LAB_00101500;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00100e88;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00100e88;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00100db8;
      }
      if (lVar9 == 0) goto LAB_00101121;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00100dd4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00100f19;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00101406;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_001010b0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0010140f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00101296:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_001012f8:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00100e40;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_00100c39:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00100e88;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00100e88;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00100db8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_00100dce;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_001011b8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00101473;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_001010b0;
        }
LAB_00101406:
        if (pbVar15 != (byte *)0x0) goto LAB_001012f8;
        goto LAB_0010140f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_001014d1;
      }
LAB_00101121:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00100f19:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00100f22;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00100d52;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00100c39;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00101028:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00100e88;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00101028;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00100db8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_001011b8;
      }
LAB_001014d1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_00101473:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001010b0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00101296;
  }
LAB_001010c9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00100e88:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00100f77;
LAB_00100ea4:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00101040;
    }
LAB_0010150e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010122e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00100ea4;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_001013a9;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00101040;
        }
LAB_001013a9:
        if (pbVar16 == (byte *)0x0) goto LAB_001013ae;
        goto LAB_00101356;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00100f77:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0010150e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00101040:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_001013ae:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010122e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00101356:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Pair<int,int>>::_copy_on_write(CowData<Pair<int,int>> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* PlaceHolderScriptInstance::get_method_list(List<MethodInfo, DefaultAllocator>*) const */

void __thiscall
PlaceHolderScriptInstance::get_method_list(PlaceHolderScriptInstance *this,List *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x80);
  lVar2 = *plVar3;
  if (*(code **)(lVar2 + 0x2d8) != Script::is_placeholder_fallback_enabled) {
    cVar1 = (**(code **)(lVar2 + 0x2d8))();
    if ((cVar1 != '\0') || (plVar3 = *(long **)(this + 0x80), plVar3 == (long *)0x0)) {
      return;
    }
    lVar2 = *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x001016d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x2b0))(plVar3,param_1);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x0010174f:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_00101870;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC0;
LAB_00101806:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_001017d0;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_001017d0;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_00101870;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00101b46:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_001017d0;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_001017d0;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC0;
        goto LAB_00101b46;
      }
      uVar6 = 0;
      pbVar5 = &_LC0;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00101806;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_001017d0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001017d0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00101870;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_001017d0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_001017d0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_00101870;
LAB_001017d0:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_00101870:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_00101880:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC0;
            uVar6 = 0;
            goto LAB_00101a2e;
          }
          uVar6 = 0;
          pbVar5 = &_LC0;
LAB_0010194a:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_00101aa8;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00101aa8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00101aa8;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00101aa8;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_00101a70;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_0010194a;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_00101aa8;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00101aa8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00101aa8;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00101aa8;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_00101a80;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC0;
      goto LAB_001019b9;
    }
    goto LAB_00101aa8;
  }
LAB_001017de:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x0010174f;
LAB_00101a70:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_001019b9:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_00101aa8;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00101aa8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00101aa8;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_00101aa8;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_00101a2e:
    if (bVar12 == 0) goto LAB_00101aa8;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00101aa8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00101aa8;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101aa8;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_00101a80;
  goto LAB_00101880;
LAB_00101a80:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00101aa8:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_001017de;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_00101f2b;
LAB_00101d16:
    lVar14 = param_3;
LAB_00101d50:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC0;
LAB_00101f64:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_00101dd0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00101dd0;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_00101fc6:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_00101dd0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00101dd0;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC0;
          goto LAB_00101fc6;
        }
        uVar8 = 0;
        pbVar11 = &_LC0;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_00101f64;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_00101dd0;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_00101dd0;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_00101e58;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_00101dd0;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_00101dd0;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_00101e58;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_00101d16;
  goto LAB_00101e8b;
LAB_00101dd0:
  StringName::StringName((StringName *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_00101e58:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x00101e65;
  goto LAB_00101d50;
code_r0x00101e65:
  if (lVar10 < 2) goto LAB_00101f2b;
LAB_00101e8b:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_00101f2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Pair<int, int> >::_ref(CowData<Pair<int, int> > const&) [clone .part.0] */

void __thiscall CowData<Pair<int,int>>::_ref(CowData<Pair<int,int>> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001021e2) */
/* WARNING: Removing unreachable block (ram,0x001021f0) */
/* WARNING: Removing unreachable block (ram,0x00102310) */
/* WARNING: Removing unreachable block (ram,0x00102224) */
/* WARNING: Removing unreachable block (ram,0x0010223a) */
/* WARNING: Removing unreachable block (ram,0x00102246) */
/* WARNING: Removing unreachable block (ram,0x0010232e) */
/* WARNING: Removing unreachable block (ram,0x001022ee) */
/* WARNING: Removing unreachable block (ram,0x0010225e) */
/* WARNING: Removing unreachable block (ram,0x00102270) */
/* WARNING: Removing unreachable block (ram,0x0010227e) */
/* WARNING: Removing unreachable block (ram,0x00102320) */
/* WARNING: Removing unreachable block (ram,0x0010229b) */
/* WARNING: Removing unreachable block (ram,0x001022a4) */
/* WARNING: Removing unreachable block (ram,0x001022ab) */
/* WARNING: Removing unreachable block (ram,0x001022b4) */
/* WARNING: Removing unreachable block (ram,0x001022cb) */
/* WARNING: Removing unreachable block (ram,0x001022d4) */
/* Script::_get_script_constant_map() */

void Script::_get_script_constant_map(void)

{
  long lVar1;
  long *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  if (*(code **)(*in_RSI + 0x2c8) != get_constants) {
    (**(code **)(*in_RSI + 0x2c8))();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PlaceHolderScriptInstance::has_method(StringName const&) const */

undefined4 PlaceHolderScriptInstance::has_method(StringName *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pOVar3 = *(Object **)(param_1 + 0x80);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(code **)(*(long *)pOVar3 + 0x2d8) == Script::is_placeholder_fallback_enabled) ||
      ((cVar1 = (**(code **)(*(long *)pOVar3 + 0x2d8))(pOVar3), cVar1 == '\0' &&
       (pOVar3 = *(Object **)(param_1 + 0x80), pOVar3 != (Object *)0x0)))) &&
     (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
LAB_001023a8:
    do {
      uVar2 = (**(code **)(*(long *)pOVar3 + 0x250))(pOVar3);
      if ((char)uVar2 != '\0') {
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        goto LAB_00102418;
      }
      (**(code **)(*(long *)pOVar3 + 0x1d8))(&local_38);
      pOVar4 = local_38;
      if (local_38 == pOVar3) {
        cVar1 = RefCounted::unreference();
        pOVar5 = local_38;
        if ((cVar1 == '\0') || (cVar1 = predelete_handler(local_38), cVar1 == '\0'))
        goto LAB_001023a8;
LAB_00102494:
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pOVar3 = pOVar4;
      }
      else {
        if ((local_38 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          pOVar4 = (Object *)0x0;
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        pOVar3 = pOVar4;
        if (((local_38 != (Object *)0x0) &&
            (cVar1 = RefCounted::unreference(), pOVar5 = local_38, cVar1 != '\0')) &&
           (cVar1 = predelete_handler(local_38), cVar1 != '\0')) goto LAB_00102494;
      }
    } while (pOVar3 != (Object *)0x0);
  }
  uVar2 = 0;
LAB_00102418:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName *param_3,long param_4)

{
  long lVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_00102f6a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_001025b2:
      param_4 = param_4 + -1;
      pSVar2 = (StringName *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_00102671:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00102732:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_001027ec:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName *)&local_48,param_3);
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName *)&local_48,param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName *)&local_48,param_3)
                                    ;
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_00102d3e:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,(StringName *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_00102cae:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_00102c60;
                                              goto LAB_00102d09;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_00102d3e;
                                          }
                                          if (local_138 == 0) {
LAB_00102c9d:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_00102cae;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,(StringName *)&local_48
                                                                ,param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName *)&local_48,pSVar2);
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName *)&local_48,
                                                                       param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_00102cae;
                                                    goto LAB_00102c34;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_00102c9d;
LAB_00102c34:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_00102d87;
                                      goto LAB_00102c81;
                                    }
                                    if (local_120 == 0) break;
LAB_00102d09:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_00102c60:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_00102e40;
                                goto LAB_001027ec;
                              }
                              if (local_100 == 0) break;
LAB_00102c81:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_00102d87:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_00102ed1;
                          goto LAB_00102732;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_00102e40:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_00102f5e;
                    goto LAB_00102671;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_00102ed1:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_00102f5e;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_00102f3d;
        goto LAB_00102f9c;
      }
      goto LAB_00102f6a;
    }
LAB_00102f9c:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102f5e:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_00102f6a;
LAB_00102f3d:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_001025b2;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::erase(StringName const&) [clone
   .isra.0] */

ulong __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::erase(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  ulong in_RAX;
  uint uVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  if (*(uint *)(this + 0x2c) == 0) {
    return (ulong)*(uint *)(this + 0x2c);
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar32 = StringName::get_empty_hash();
  }
  else {
    uVar32 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar8 = *(long *)(this + 0x10);
  if (uVar32 == 0) {
    uVar32 = 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)uVar32 * lVar7;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar38;
  auVar12 = auVar12 * auVar22;
  lVar36 = auVar12._8_8_;
  uVar34 = *(uint *)(lVar8 + lVar36 * 4);
  uVar33 = auVar12._8_4_;
  if (uVar34 == 0) {
    return auVar12._0_8_;
  }
  uVar39 = 0;
  while ((uVar32 != uVar34 ||
         (lVar9 = *(long *)(this + 8),
         *(long *)(*(long *)(lVar9 + lVar36 * 8) + 0x10) != *(long *)param_1))) {
    uVar39 = uVar39 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar33 + 1) * lVar7;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    auVar13 = auVar13 * auVar23;
    lVar36 = auVar13._8_8_;
    uVar34 = *(uint *)(lVar8 + lVar36 * 4);
    uVar33 = auVar13._8_4_;
    if (uVar34 == 0) {
      return auVar13._0_8_;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar34 * lVar7;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar33) - SUB164(auVar14 * auVar24,8)) * lVar7;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar38;
    if (SUB164(auVar15 * auVar25,8) < uVar39) {
      return SUB168(auVar15 * auVar25,0);
    }
  }
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar33 + 1) * lVar7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar36 = SUB168(auVar16 * auVar26,8);
  puVar1 = (uint *)(lVar8 + lVar36 * 4);
  uVar34 = SUB164(auVar16 * auVar26,8);
  uVar32 = *puVar1;
  if (uVar32 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar32 * lVar7;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar6 + uVar34) - SUB164(auVar17 * auVar27,8)) * lVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    iVar35 = SUB164(auVar18 * auVar28,8);
    while (uVar39 = uVar34, iVar35 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)uVar33 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar36 * 8);
      *puVar2 = uVar32;
      puVar4 = (undefined8 *)(lVar9 + (ulong)uVar33 * 8);
      uVar10 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)(uVar39 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar38;
      lVar36 = SUB168(auVar21 * auVar31,8);
      puVar1 = (uint *)(lVar8 + lVar36 * 4);
      uVar34 = SUB164(auVar21 * auVar31,8);
      uVar32 = *puVar1;
      uVar33 = uVar39;
      if (uVar32 == 0) break;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar32 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)((uVar34 + uVar6) - SUB164(auVar19 * auVar29,8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar38;
      iVar35 = SUB164(auVar20 * auVar30,8);
    }
  }
  uVar38 = (ulong)uVar33;
  plVar5 = (long *)(lVar9 + uVar38 * 8);
  *(undefined4 *)(lVar8 + uVar38 * 4) = 0;
  plVar37 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar37) {
    *(long *)(this + 0x18) = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*(long **)(this + 0x20) == plVar37) {
    *(long *)(this + 0x20) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if (Variant::needs_deinit[(int)plVar37[3]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (plVar37[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar37,false);
  uVar11 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar11 + uVar38 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar11;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
  return;
}



/* PlaceHolderScriptInstance::get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall
PlaceHolderScriptInstance::get_property_list(PlaceHolderScriptInstance *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(**(long **)(this + 0x80) + 0x2d8) != Script::is_placeholder_fallback_enabled) {
    cVar4 = (**(code **)(**(long **)(this + 0x80) + 0x2d8))();
    if (cVar4 != '\0') {
      if ((*(undefined8 **)(this + 0x10) != (undefined8 *)0x0) &&
         (puVar7 = (undefined4 *)**(undefined8 **)(this + 0x10), puVar7 != (undefined4 *)0x0)) {
        if (*(long *)param_1 == 0) {
          pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar6;
          *(undefined4 *)pauVar6[1] = 0;
          *pauVar6 = (undefined1  [16])0x0;
        }
        do {
          puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
          *(undefined8 *)(puVar5 + 8) = 0;
          *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
          lVar2 = *(long *)(puVar7 + 2);
          *puVar5 = 0;
          puVar5[6] = 0;
          puVar5[10] = 6;
          *(undefined8 *)(puVar5 + 0x10) = 0;
          *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
          *puVar5 = *puVar7;
          if (lVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar7 + 2));
          }
          StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(puVar7 + 4));
          puVar5[6] = puVar7[6];
          if (*(long *)(puVar5 + 8) != *(long *)(puVar7 + 8)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(puVar7 + 8));
          }
          puVar5[10] = puVar7[10];
          plVar1 = *(long **)param_1;
          lVar2 = plVar1[1];
          *(undefined8 *)(puVar5 + 0xc) = 0;
          *(long **)(puVar5 + 0x10) = plVar1;
          *(long *)(puVar5 + 0xe) = lVar2;
          if (lVar2 != 0) {
            *(undefined4 **)(lVar2 + 0x30) = puVar5;
          }
          plVar1[1] = (long)puVar5;
          if (*plVar1 == 0) {
            *plVar1 = (long)puVar5;
          }
          puVar7 = *(undefined4 **)(puVar7 + 0xc);
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        } while (puVar7 != (undefined4 *)0x0);
      }
      goto LAB_001036a8;
    }
  }
  if ((*(undefined8 **)(this + 0x10) != (undefined8 *)0x0) &&
     (puVar7 = (undefined4 *)**(undefined8 **)(this + 0x10), puVar7 != (undefined4 *)0x0)) {
    do {
      local_70 = 0;
      if (*(long *)(puVar7 + 2) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar7 + 2));
      }
      StringName::StringName((StringName *)&local_68,(StringName *)(puVar7 + 4));
      local_60 = puVar7[6];
      local_58 = 0;
      if (*(long *)(puVar7 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar7 + 8));
      }
      local_50 = puVar7[10];
      if (*(long *)param_1 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
      lVar2 = *(long *)(puVar7 + 2);
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[10] = 6;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
      *puVar5 = *puVar7;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar7 + 2));
      }
      StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(puVar7 + 4));
      puVar5[6] = puVar7[6];
      if (*(long *)(puVar5 + 8) != *(long *)(puVar7 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(puVar7 + 8));
      }
      lVar3 = local_58;
      puVar5[10] = puVar7[10];
      plVar1 = *(long **)param_1;
      lVar2 = plVar1[1];
      *(long **)(puVar5 + 0x10) = plVar1;
      *(undefined8 *)(puVar5 + 0xc) = 0;
      *(long *)(puVar5 + 0xe) = lVar2;
      if (lVar2 != 0) {
        *(undefined4 **)(lVar2 + 0x30) = puVar5;
      }
      plVar1[1] = (long)puVar5;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar5;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      puVar7 = *(undefined4 **)(puVar7 + 0xc);
    } while (puVar7 != (undefined4 *)0x0);
  }
LAB_001036a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceHolderScriptInstance::callp(StringName const&, Variant const**, int, Callable::CallError&)
    */

StringName *
PlaceHolderScriptInstance::callp
          (StringName *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *in_R9 = 1;
  lVar2 = Engine::get_singleton();
  local_40 = 0;
  if (*(char *)(lVar2 + 0xc0) == '\0') {
    local_30 = 0x52;
    local_38 = "Attempt to call a method on a placeholder instance. Probably a bug, please report.";
  }
  else {
    local_30 = 0x58;
    local_38 = 
    "Attempt to call a method on a placeholder instance. Check if the script is in tool mode.";
  }
  String::parse_latin1((StrRange *)&local_40);
  Variant::Variant((Variant_conflict *)param_1,(String *)&local_40);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::_notification(int) */

void __thiscall Script::_notification(Script *this,int param_1)

{
  undefined8 uVar1;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == 0) && (EngineDebugger::singleton != 0)) && (EngineDebugger::script_debugger != 0)
     ) {
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(Script **)(this_00 + 0x28) = this;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_00120ef0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar1 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    *(code **)(this_00 + 0x38) = _set_debugger_break_language;
    *(undefined **)(this_00 + 0x20) = &_LC0;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "Script::_set_debugger_break_language";
    Callable::Callable(aCStack_48,this_00);
    Variant::Variant((Variant_conflict *)local_38,0);
    Callable::call_deferredp((Variant_conflict **)aCStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(aCStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::set_scripting_enabled(bool) */

void ScriptServer::set_scripting_enabled(bool param_1)

{
  scripting_enabled = param_1;
  return;
}



/* ScriptServer::is_scripting_enabled() */

undefined1 ScriptServer::is_scripting_enabled(void)

{
  return scripting_enabled;
}



/* ScriptServer::get_language(int) */

undefined8 ScriptServer::get_language(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar1 == 0) {
    if ((param_1 < 0) || (_language_count <= param_1)) {
      uVar2 = 0;
      _err_print_index_error
                ("get_language","core/object/script_language.cpp",0xda,(long)param_1,
                 (long)_language_count,"p_idx","_language_count","",false,false);
    }
    else {
      uVar2 = (&_languages)[param_1];
    }
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* ScriptServer::get_language_for_extension(String const&) */

undefined8 ScriptServer::get_language_for_extension(String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  lVar5 = 0;
  if (0 < _language_count) {
    do {
      if ((long *)(&_languages)[lVar5] != (long *)0x0) {
        (**(code **)(*(long *)(&_languages)[lVar5] + 0x168))(&local_48);
        cVar3 = String::operator==((String *)&local_48,param_1);
        lVar2 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if (cVar3 != '\0') {
          uVar6 = (&_languages)[(int)lVar5];
          goto LAB_00103bc2;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < _language_count);
  }
  uVar6 = 0;
LAB_00103bc2:
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* ScriptServer::unregister_language(ScriptLanguage const*) */

undefined8 ScriptServer::unregister_language(ScriptLanguage *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  lVar2 = 0;
  if (0 < _language_count) {
    do {
      if ((ScriptLanguage *)(&_languages)[lVar2] == param_1) {
        iVar1 = _language_count + -1;
        _language_count = iVar1;
        if ((int)lVar2 < iVar1) {
          (&_languages)[(int)lVar2] = (&_languages)[iVar1];
          (&_languages)[iVar1] = param_1;
        }
        uVar3 = 0;
        goto LAB_00103c7d;
      }
      lVar2 = lVar2 + 1;
    } while (_language_count != lVar2);
  }
  uVar3 = 0x21;
LAB_00103c7d:
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  return uVar3;
}



/* ScriptServer::are_languages_initialized() */

undefined1 ScriptServer::are_languages_initialized(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  uVar1 = languages_ready;
  if (iVar2 == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* ScriptServer::thread_is_entered() */

undefined1 ScriptServer::thread_is_entered(void)

{
  undefined1 *in_FS_OFFSET;
  
  return *in_FS_OFFSET;
}



/* ScriptServer::set_reload_scripts_on_save(bool) */

void ScriptServer::set_reload_scripts_on_save(bool param_1)

{
  reload_scripts_on_save = param_1;
  return;
}



/* ScriptServer::is_reload_scripts_on_save_enabled() */

undefined1 ScriptServer::is_reload_scripts_on_save_enabled(void)

{
  return reload_scripts_on_save;
}



/* ScriptServer::thread_enter() */

void ScriptServer::thread_enter(void)

{
  int iVar1;
  long lVar2;
  char *in_FS_OFFSET;
  
  if (*in_FS_OFFSET != '\0') {
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (languages_ready != '\0') {
    lVar2 = 0;
    if (0 < _language_count) {
      do {
        while (*(code **)(*(long *)(&_languages)[lVar2] + 0x250) != ScriptLanguage::thread_enter) {
          (**(code **)(*(long *)(&_languages)[lVar2] + 0x250))();
          lVar2 = lVar2 + 1;
          if (_language_count <= (int)lVar2) goto LAB_00103da0;
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < _language_count);
    }
LAB_00103da0:
    *in_FS_OFFSET = '\x01';
  }
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  return;
}



/* ScriptServer::thread_exit() */

void ScriptServer::thread_exit(void)

{
  int iVar1;
  long lVar2;
  char *in_FS_OFFSET;
  
  if (*in_FS_OFFSET == '\0') {
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (languages_ready != '\0') {
    lVar2 = 0;
    if (0 < _language_count) {
      do {
        while (*(code **)(*(long *)(&_languages)[lVar2] + 600) != ScriptLanguage::thread_exit) {
          (**(code **)(*(long *)(&_languages)[lVar2] + 600))();
          lVar2 = lVar2 + 1;
          if (_language_count <= (int)lVar2) goto LAB_00103e60;
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < _language_count);
    }
LAB_00103e60:
    *in_FS_OFFSET = '\0';
  }
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  return;
}



/* ScriptServer::is_global_class(StringName const&) */

undefined8 ScriptServer::is_global_class(StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
  if (*(long *)param_1 == 0) {
    uVar11 = StringName::get_empty_hash();
  }
  else {
    uVar11 = *(uint *)(*(long *)param_1 + 0x20);
  }
  uVar15 = CONCAT44(0,uVar1);
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (ulong)uVar11 * lVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  lVar13 = SUB168(auVar3 * auVar7,8);
  uVar14 = *(uint *)(global_classes._16_8_ + lVar13 * 4);
  iVar12 = SUB164(auVar3 * auVar7,8);
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar11 == uVar14) &&
         (*(long *)(*(long *)(global_classes._8_8_ + lVar13 * 8) + 0x10) == *(long *)param_1)) {
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      lVar13 = SUB168(auVar4 * auVar8,8);
      uVar14 = *(uint *)(global_classes._16_8_ + lVar13 * 4);
      iVar12 = SUB164(auVar4 * auVar8,8);
    } while ((uVar14 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
}



/* ScriptCodeCompletionCache::ScriptCodeCompletionCache() */

void __thiscall
ScriptCodeCompletionCache::ScriptCodeCompletionCache(ScriptCodeCompletionCache *this)

{
  singleton = this;
  *(undefined ***)this = &PTR__ScriptCodeCompletionCache_001207b8;
  return;
}



/* ScriptLanguage::CodeCompletionOption::get_option_characteristics(String const&) */

String * ScriptLanguage::CodeCompletionOption::get_option_characteristics(String *param_1)

{
  Variant_conflict *pVVar1;
  CowData<Pair<int,int>> *this;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long *in_RDX;
  int iVar8;
  long in_RSI;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  lVar6 = *(long *)(in_RSI + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(in_RSI + 0x60);
  if (lVar3 == 0) {
    if (lVar6 == 0) goto LAB_00104088;
    lVar4 = *(long *)(lVar6 + -8);
joined_r0x00104306:
    if (lVar4 == 0) goto LAB_00104088;
  }
  else {
    lVar4 = *(long *)(lVar3 + -8);
    if (lVar6 == 0) goto joined_r0x00104306;
    if (lVar4 == *(long *)(lVar6 + -8)) {
      if (0 < lVar4) {
        lVar9 = 0;
        do {
          if ((*(int *)(lVar3 + lVar9 * 8) != *(int *)(lVar6 + lVar9 * 8)) ||
             (*(int *)(lVar3 + 4 + lVar9 * 8) != *(int *)(lVar6 + 4 + lVar9 * 8)))
          goto LAB_00104021;
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
      }
      goto LAB_00104088;
    }
  }
LAB_00104021:
  pVVar1 = (Variant_conflict *)(in_RSI + 0x78);
  Array::clear();
  if ((*in_RDX == 0) || (*(uint *)(*in_RDX + -8) < 2)) {
    if (*(long *)(in_RSI + 0x60) != *(long *)(in_RSI + 0x50)) {
      CowData<Pair<int,int>>::_ref
                ((CowData<Pair<int,int>> *)(in_RSI + 0x60),(CowData *)(in_RSI + 0x50));
    }
    Variant::Variant((Variant_conflict *)local_58,*(int *)(in_RSI + 0x68));
    Array::push_back(pVVar1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00104088:
    Array::Array((Array *)param_1,(Array *)(in_RSI + 0x78));
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  if (*(long *)(in_RSI + 0x50) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(in_RSI + 0x50) + -8);
  }
  Variant::Variant((Variant_conflict *)local_58,lVar6);
  Array::push_back(pVVar1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  piVar11 = *(int **)(in_RSI + 0x50);
  if (piVar11 != (int *)0x0) {
    lVar6 = *(long *)(piVar11 + -2);
    if (lVar6 < 1) goto LAB_00104336;
    Variant::Variant((Variant_conflict *)local_58,(uint)(*piVar11 != 0));
    Array::push_back(pVVar1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    puVar7 = (undefined8 *)*in_RDX;
    if ((puVar7 == (undefined8 *)0x0) || (lVar6 = puVar7[-1], lVar6 == 0)) {
      puVar7 = &String::_null;
    }
    else if (lVar6 < 1) goto LAB_00104336;
    this = (CowData<Pair<int,int>> *)(in_RSI + 0x50);
    CowData<Pair<int,int>>::_copy_on_write(this);
    piVar10 = *(int **)(in_RSI + 0x50);
    CowData<Pair<int,int>>::_copy_on_write(this);
    piVar11 = *(int **)(in_RSI + 0x50);
    if (piVar11 != (int *)0x0) {
      piVar11 = piVar11 + *(long *)(piVar11 + -2) * 2;
    }
    if (piVar11 == piVar10) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      do {
        uVar2 = piVar10[1];
        if (0 < (int)uVar2) {
          lVar6 = 0;
          do {
            if (*(int *)(*(long *)(in_RSI + 8) + (long)*piVar10 * 4 + lVar6) !=
                *(int *)((long)puVar7 + lVar6)) {
              iVar8 = iVar8 + 1;
            }
            lVar6 = lVar6 + 4;
          } while (lVar6 != (long)(int)uVar2 * 4);
          puVar7 = (undefined8 *)((long)puVar7 + (ulong)uVar2 * 4);
        }
        piVar10 = piVar10 + 2;
      } while (piVar10 != piVar11);
    }
    Variant::Variant((Variant_conflict *)local_58,iVar8);
    Array::push_back(pVVar1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant_conflict *)local_58,*(int *)(in_RSI + 0x68));
    Array::push_back(pVVar1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    piVar11 = *(int **)(in_RSI + 0x50);
    if (piVar11 != (int *)0x0) {
      lVar6 = *(long *)(piVar11 + -2);
      if (0 < lVar6) {
        Variant::Variant((Variant_conflict *)local_58,*piVar11);
        Array::push_back(pVVar1);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (*(long *)(in_RSI + 0x60) != *(long *)(in_RSI + 0x50)) {
          CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>> *)(in_RSI + 0x60),(CowData *)this);
        }
        goto LAB_00104088;
      }
      goto LAB_00104336;
    }
  }
  lVar6 = 0;
LAB_00104336:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* ScriptLanguage::CodeCompletionOption::clear_characteristics() */

void __thiscall
ScriptLanguage::CodeCompletionOption::clear_characteristics(CodeCompletionOption *this)

{
  long in_FS_OFFSET;
  Array aAStack_58 [8];
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(aAStack_58);
  local_48 = 0;
  local_50 = 0;
  local_40 = (undefined1  [16])0x0;
  Array::set_typed((uint)aAStack_58,(StringName *)0x2,(Variant_conflict *)&local_50);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  Array::operator=((Array *)(this + 0x78),aAStack_58);
  Array::~Array(aAStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::CodeCompletionOption::get_option_cached_characteristics() const */

void ScriptLanguage::CodeCompletionOption::get_option_cached_characteristics(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  long lVar4;
  Array *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x60);
  lVar2 = *(long *)(in_RSI + 0x50);
  if (lVar1 == 0) {
    if (lVar2 == 0) goto LAB_00104508;
    lVar3 = *(long *)(lVar2 + -8);
joined_r0x00104552:
    if (lVar3 == 0) goto LAB_00104508;
  }
  else {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 == 0) goto joined_r0x00104552;
    if (lVar3 == *(long *)(lVar2 + -8)) {
      if (0 < lVar3) {
        lVar4 = 0;
        do {
          if ((*(int *)(lVar1 + lVar4 * 8) != *(int *)(lVar2 + lVar4 * 8)) ||
             (*(int *)(lVar1 + 4 + lVar4 * 8) != *(int *)(lVar2 + 4 + lVar4 * 8)))
          goto LAB_001044e0;
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      goto LAB_00104508;
    }
  }
LAB_001044e0:
  _err_print_error("get_option_cached_characteristics","core/object/script_language.cpp",0x271,
                   "Characteristics are not up to date.",0,1);
LAB_00104508:
  Array::Array(in_RDI,(Array *)(in_RSI + 0x78));
  return;
}



/* PlaceHolderScriptInstance::PlaceHolderScriptInstance(ScriptLanguage*, Ref<Script>, Object*) */

void __thiscall
PlaceHolderScriptInstance::PlaceHolderScriptInstance
          (PlaceHolderScriptInstance *this,undefined8 param_1,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR_set_00120e10;
  uVar1 = _LC12;
  *(undefined8 *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = param_1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  if (*param_3 != 0) {
    *(long *)(this + 0x80) = *param_3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0x80) = 0;
    }
  }
  return;
}



/* Script::_get_script_property_list() */

void Script::_get_script_property_list(void)

{
  long lVar1;
  long *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)in_RDI,(StringName *)0x1b,(Variant_conflict *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_68 = (long *)0x0;
  (**(code **)(*in_RSI + 0x2b8))();
  if (local_68 != (long *)0x0) {
    for (lVar1 = *local_68; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      PropertyInfo::operator_cast_to_Dictionary((PropertyInfo *)&local_60);
      Variant::Variant((Variant_conflict *)&local_58,(PropertyInfo *)&local_60);
      Array::push_back((Variant_conflict *)in_RDI);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_60);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PlaceHolderScriptInstance::~PlaceHolderScriptInstance() */

void __thiscall
PlaceHolderScriptInstance::~PlaceHolderScriptInstance(PlaceHolderScriptInstance *this)

{
  uint uVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR_set_00120e10;
  if ((*(long **)(this + 0x80) != (long *)0x0) &&
     (((pcVar2 = *(code **)(**(long **)(this + 0x80) + 0x1c8), pcVar2 == Script::_placeholder_erased
       || ((*pcVar2)(), *(long *)(this + 0x80) != 0)) &&
      (cVar4 = RefCounted::unreference(), cVar4 != '\0')))) {
    pOVar3 = *(Object **)(this + 0x80);
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  pvVar6 = *(void **)(this + 0x50);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x74) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x58) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x58) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar1 << 2 != lVar5);
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010485e;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x58),false);
  }
LAB_0010485e:
  pvVar6 = *(void **)(this + 0x20);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x44) = 0;
        *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x28) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x28) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x20);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x44) = 0;
        *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010491a;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x28),false);
  }
LAB_0010491a:
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x10));
  ScriptInstance::~ScriptInstance((ScriptInstance *)this);
  return;
}



/* PlaceHolderScriptInstance::~PlaceHolderScriptInstance() */

void __thiscall
PlaceHolderScriptInstance::~PlaceHolderScriptInstance(PlaceHolderScriptInstance *this)

{
  ~PlaceHolderScriptInstance(this);
  operator_delete(this,0x88);
  return;
}



/* ScriptServer::get_global_class_list(List<StringName, DefaultAllocator>*) */

void ScriptServer::get_global_class_list(List *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  StringName *pSVar4;
  StringName *this;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 (*local_48) [16];
  long local_40;
  
  puVar5 = (undefined8 *)global_classes._24_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1 (*) [16])0x0;
  if (global_classes._24_8_ == 0) {
    List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
              ((List<StringName,DefaultAllocator> *)&local_48);
  }
  else {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    local_48 = pauVar3;
    do {
      pSVar4 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar4 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar4 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar4,(StringName *)(puVar5 + 2));
      lVar1 = *(long *)(*pauVar3 + 8);
      *(undefined1 (**) [16])(pSVar4 + 0x18) = pauVar3;
      *(undefined8 *)(pSVar4 + 8) = 0;
      *(long *)(pSVar4 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(StringName **)(lVar1 + 8) = pSVar4;
      }
      lVar1 = *(long *)*pauVar3;
      *(StringName **)(*pauVar3 + 8) = pSVar4;
      if (lVar1 == 0) {
        puVar5 = (undefined8 *)*puVar5;
        *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
        *(StringName **)*pauVar3 = pSVar4;
      }
      else {
        puVar5 = (undefined8 *)*puVar5;
        *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
      }
    } while (puVar5 != (undefined8 *)0x0);
    List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
              ((List<StringName,DefaultAllocator> *)&local_48);
    pSVar4 = *(StringName **)*pauVar3;
    if (pSVar4 != (StringName *)0x0) {
      if (*(long *)param_1 == 0) {
        pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar3;
        *(undefined4 *)pauVar3[1] = 0;
        *pauVar3 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          this = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
          StringName::operator=(this,pSVar4);
          plVar2 = *(long **)param_1;
          lVar1 = plVar2[1];
          *(undefined8 *)(this + 8) = 0;
          *(long **)(this + 0x18) = plVar2;
          *(long *)(this + 0x10) = lVar1;
          if (lVar1 != 0) {
            *(StringName **)(lVar1 + 8) = this;
          }
          plVar2[1] = (long)this;
          if (*plVar2 == 0) break;
          pSVar4 = *(StringName **)(pSVar4 + 8);
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          if (pSVar4 == (StringName *)0x0) goto LAB_00104bce;
        }
        pSVar4 = *(StringName **)(pSVar4 + 8);
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        *plVar2 = (long)this;
      } while (pSVar4 != (StringName *)0x0);
    }
  }
LAB_00104bce:
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::get_core_type_words(List<String, DefaultAllocator>*) const */

void __thiscall ScriptLanguage::get_core_type_words(ScriptLanguage *this,List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "String";
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector2";
  local_40 = 0;
  local_30 = 7;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector2i";
  local_40 = 0;
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Rect2";
  local_40 = 0;
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Rect2i";
  local_40 = 0;
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector3";
  local_40 = 0;
  local_30 = 7;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector3i";
  local_40 = 0;
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Transform2D";
  local_40 = 0;
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector4";
  local_40 = 0;
  local_30 = 7;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Vector4i";
  local_40 = 0;
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Plane";
  local_40 = 0;
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Quaternion";
  local_40 = 0;
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "AABB";
  local_40 = 0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Basis";
  local_40 = 0;
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Transform3D";
  local_40 = 0;
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Projection";
  local_40 = 0;
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Color";
  local_40 = 0;
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "StringName";
  local_40 = 0;
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "NodePath";
  local_40 = 0;
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "RID";
  local_40 = 0;
  local_30 = 3;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Callable";
  local_40 = 0;
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Signal";
  local_40 = 0;
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Dictionary";
  local_40 = 0;
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "Array";
  local_40 = 0;
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedByteArray";
  local_40 = 0;
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedInt32Array";
  local_40 = 0;
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedInt64Array";
  local_40 = 0;
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedFloat32Array";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedFloat64Array";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedStringArray";
  local_40 = 0;
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedVector2Array";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedVector3Array";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedColorArray";
  local_40 = 0;
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "PackedVector4Array";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::reload_from_file() */

void __thiscall Script::reload_from_file(Script *this)

{
  Script *pSVar1;
  code *pcVar2;
  char cVar3;
  Object *pOVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  Object *local_78;
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  Script *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x48) == get_class) {
    if (*(long *)(this + 8) == 0) {
      local_60 = 0;
      local_58 = (Script *)0x110b0d;
      local_50 = 6;
LAB_001054cc:
      String::parse_latin1((StrRange *)&local_60);
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
      if (lVar5 != 0) {
        pSVar1 = *(Script **)(lVar5 + 8);
        local_60 = 0;
        if (pSVar1 != (Script *)0x0) {
          local_50 = strlen((char *)pSVar1);
          local_58 = pSVar1;
          goto LAB_001054cc;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          goto LAB_001054e1;
        }
      }
      local_60 = 0;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(&local_60,this);
  }
LAB_001054e1:
  Resource::get_path();
  ResourceLoader::path_remap(local_68);
  ResourceLoader::load((CowData<char32_t> *)&local_58,local_68,(CowData<char32_t> *)&local_60,0,0);
  local_78 = (Object *)0x0;
  if (local_58 == (Script *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_00105574:
      cVar3 = RefCounted::unreference();
      pSVar1 = local_58;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)local_58), cVar3 != '\0')) {
        (**(code **)(*(long *)pSVar1 + 0x140))();
        Memory::free_static(pSVar1,false);
      }
    }
    else {
      cVar3 = RefCounted::reference();
      local_78 = pOVar4;
      if (cVar3 == '\0') {
        local_78 = (Object *)0x0;
      }
      if (local_58 != (Script *)0x0) goto LAB_00105574;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_78 != (Object *)0x0) {
      pcVar2 = *(code **)(*(long *)this + 0x220);
      (**(code **)(*(long *)local_78 + 0x218))((CowData<char32_t> *)&local_58,local_78);
      (*pcVar2)(this,(CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (*(code **)(*(long *)this + 0x1b0) == Resource::set_last_modified_time) {
        *(undefined8 *)(this + 0x198) = *(undefined8 *)(local_78 + 0x198);
      }
      else {
        (**(code **)(*(long *)this + 0x1b0))(this);
      }
      cVar3 = (**(code **)(*(long *)local_78 + 0x278))(local_78);
      if (cVar3 == '\0') {
LAB_00105607:
        cVar3 = RefCounted::unreference();
      }
      else {
        lVar5 = Engine::get_singleton();
        if ((*(char *)(lVar5 + 0xc0) != '\0') &&
           (cVar3 = (**(code **)(*(long *)this + 0x270))(this), cVar3 != '\0')) {
          plVar6 = (long *)(**(code **)(*(long *)this + 0x288))(this);
          pcVar2 = *(code **)(*plVar6 + 0x2c8);
          local_58 = this;
          cVar3 = RefCounted::init_ref();
          if (cVar3 == '\0') {
            local_58 = (Script *)0x0;
          }
          (*pcVar2)(plVar6,(CowData<char32_t> *)&local_58,1);
          if (((local_58 != (Script *)0x0) &&
              (cVar3 = RefCounted::unreference(), pSVar1 = local_58, cVar3 != '\0')) &&
             (cVar3 = predelete_handler((Object *)local_58), cVar3 != '\0')) {
            (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
            Memory::free_static(pSVar1,false);
          }
          goto LAB_00105607;
        }
        (**(code **)(*(long *)this + 0x228))(this);
        cVar3 = RefCounted::unreference();
      }
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_78,false);
          return;
        }
        goto LAB_0010585e;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010585e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::register_language(ScriptLanguage*) */

undefined8 ScriptServer::register_language(ScriptLanguage *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  CowData<char32_t> local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  if (param_1 == (ScriptLanguage *)0x0) {
    uVar9 = 0x1f;
    _err_print_error("register_language","core/object/script_language.cpp",0xec,
                     "Parameter \"p_language\" is null.",0,0);
  }
  else if (_language_count < 0x10) {
    lVar6 = 0;
    if (0 < _language_count) {
      do {
        plVar2 = (long *)(&_languages)[lVar6];
        (**(code **)(*(long *)param_1 + 0x168))((CowData<char32_t> *)&local_58,param_1);
        (**(code **)(*plVar2 + 0x168))((String *)&local_60,plVar2);
        cVar4 = String::operator==((String *)&local_60,(String *)&local_58);
        lVar3 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        if (cVar4 != '\0') {
          (**(code **)(*(long *)param_1 + 0x168))(local_68,param_1);
          local_58 = "A script language with extension \'%s\' is already registered.";
          local_60 = 0;
          local_50 = 0x3c;
          String::parse_latin1((StrRange *)&local_60);
          vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_60,local_68);
          pcVar7 = 
          "Condition \"other_language->get_extension() == p_language->get_extension()\" is true. Returning: ERR_ALREADY_EXISTS"
          ;
          uVar8 = 0xf0;
LAB_00105b28:
          uVar9 = 0x20;
          _err_print_error("register_language","core/object/script_language.cpp",uVar8,pcVar7,
                           (CowData<char32_t> *)&local_58,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref(local_68);
          goto LAB_00105b5a;
        }
        (**(code **)(*(long *)param_1 + 0x150))((CowData<char32_t> *)&local_58,param_1);
        (**(code **)(*plVar2 + 0x150))((String *)&local_60,plVar2);
        cVar4 = String::operator==((String *)&local_60,(String *)&local_58);
        lVar3 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        if (cVar4 != '\0') {
          (**(code **)(*(long *)param_1 + 0x150))(local_68,param_1);
          local_58 = "A script language with name \'%s\' is already registered.";
          local_60 = 0;
          local_50 = 0x37;
          String::parse_latin1((StrRange *)&local_60);
          vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_60,local_68);
          pcVar7 = 
          "Condition \"other_language->get_name() == p_language->get_name()\" is true. Returning: ERR_ALREADY_EXISTS"
          ;
          uVar8 = 0xf1;
          goto LAB_00105b28;
        }
        (**(code **)(*(long *)param_1 + 0x160))((CowData<char32_t> *)&local_58,param_1);
        (**(code **)(*plVar2 + 0x160))((String *)&local_60,plVar2);
        cVar4 = String::operator==((String *)&local_60,(String *)&local_58);
        lVar3 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar2 = (long *)(local_60 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        if (cVar4 != '\0') {
          (**(code **)(*(long *)param_1 + 0x160))(local_68,param_1);
          local_58 = "A script language with type \'%s\' is already registered.";
          local_60 = 0;
          local_50 = 0x37;
          String::parse_latin1((StrRange *)&local_60);
          vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_60,local_68);
          pcVar7 = 
          "Condition \"other_language->get_type() == p_language->get_type()\" is true. Returning: ERR_ALREADY_EXISTS"
          ;
          uVar8 = 0xf2;
          goto LAB_00105b28;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < _language_count);
    }
    lVar6 = (long)_language_count;
    _language_count = _language_count + 1;
    (&_languages)[lVar6] = param_1;
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
    _err_print_error("register_language","core/object/script_language.cpp",0xed,
                     "Condition \"_language_count >= MAX_LANGUAGES\" is true. Returning: ERR_UNAVAILABLE"
                     ,"Script languages limit has been reach, cannot register more.",0,0);
  }
LAB_00105b5a:
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, ScriptServer::GlobalScriptClass, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ScriptServer::GlobalScriptClass> > >::erase(StringName const&) [clone .isra.0] */

ulong __thiscall
HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
::erase(HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  ulong in_RAX;
  uint uVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  if (*(uint *)(this + 0x2c) == 0) {
    return (ulong)*(uint *)(this + 0x2c);
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar32 = StringName::get_empty_hash();
  }
  else {
    uVar32 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar8 = *(long *)(this + 0x10);
  if (uVar32 == 0) {
    uVar32 = 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)uVar32 * lVar7;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar38;
  auVar12 = auVar12 * auVar22;
  lVar36 = auVar12._8_8_;
  uVar34 = *(uint *)(lVar8 + lVar36 * 4);
  uVar33 = auVar12._8_4_;
  if (uVar34 == 0) {
    return auVar12._0_8_;
  }
  uVar39 = 0;
  while ((uVar32 != uVar34 ||
         (lVar9 = *(long *)(this + 8),
         *(long *)(*(long *)(lVar9 + lVar36 * 8) + 0x10) != *(long *)param_1))) {
    uVar39 = uVar39 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar33 + 1) * lVar7;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    auVar13 = auVar13 * auVar23;
    lVar36 = auVar13._8_8_;
    uVar34 = *(uint *)(lVar8 + lVar36 * 4);
    uVar33 = auVar13._8_4_;
    if (uVar34 == 0) {
      return auVar13._0_8_;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar34 * lVar7;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar33) - SUB164(auVar14 * auVar24,8)) * lVar7;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar38;
    if (SUB164(auVar15 * auVar25,8) < uVar39) {
      return SUB168(auVar15 * auVar25,0);
    }
  }
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar33 + 1) * lVar7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar36 = SUB168(auVar16 * auVar26,8);
  puVar1 = (uint *)(lVar8 + lVar36 * 4);
  uVar34 = SUB164(auVar16 * auVar26,8);
  uVar32 = *puVar1;
  if (uVar32 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar32 * lVar7;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar6 + uVar34) - SUB164(auVar17 * auVar27,8)) * lVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    iVar35 = SUB164(auVar18 * auVar28,8);
    while (uVar39 = uVar34, iVar35 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)uVar33 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar36 * 8);
      *puVar2 = uVar32;
      puVar4 = (undefined8 *)(lVar9 + (ulong)uVar33 * 8);
      uVar10 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)(uVar39 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar38;
      lVar36 = SUB168(auVar21 * auVar31,8);
      puVar1 = (uint *)(lVar8 + lVar36 * 4);
      uVar34 = SUB164(auVar21 * auVar31,8);
      uVar32 = *puVar1;
      uVar33 = uVar39;
      if (uVar32 == 0) break;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar32 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)((uVar34 + uVar6) - SUB164(auVar19 * auVar29,8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar38;
      iVar35 = SUB164(auVar20 * auVar30,8);
    }
  }
  uVar38 = (ulong)uVar33;
  plVar5 = (long *)(lVar9 + uVar38 * 8);
  *(undefined4 *)(lVar8 + uVar38 * 4) = 0;
  plVar37 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar37) {
    *(long *)(this + 0x18) = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*(long **)(this + 0x20) == plVar37) {
    *(long *)(this + 0x20) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((StringName::configured != '\0') && (plVar37[5] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar37 + 4));
  if ((StringName::configured != '\0') &&
     (((plVar37[3] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (plVar37[2] != 0)))) {
    StringName::unref();
  }
  Memory::free_static(plVar37,false);
  uVar11 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar11 + uVar38 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar11;
}



/* ScriptServer::remove_global_class_by_path(String const&) */

void ScriptServer::remove_global_class_by_path(String *param_1)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)global_classes._24_8_;
  if (global_classes._24_8_ != 0) {
    do {
      cVar1 = String::operator==((String *)(plVar2 + 4),param_1);
      if (cVar1 != '\0') {
        HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
        ::erase((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                 *)global_classes,(StringName *)(plVar2 + 2));
        inheriters_cache_dirty = 1;
        return;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return;
}



/* ScriptServer::remove_global_class(StringName const&) */

void ScriptServer::remove_global_class(StringName *param_1)

{
  HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
  ::erase((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
           *)global_classes,param_1);
  inheriters_cache_dirty = 1;
  return;
}



/* Script::get_class_category() const */

void Script::get_class_category(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long in_RSI;
  undefined4 *in_RDI;
  char *pcVar4;
  long in_FS_OFFSET;
  CowData *local_b8;
  long local_90;
  char *local_88;
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  local_88 = (char *)0x0;
  if ((*(long *)(in_RSI + 0x188) == 0) || (*(uint *)(*(long *)(in_RSI + 0x188) + -8) < 2)) {
LAB_001060a7:
    Resource::get_name();
    if ((local_58 == (char *)0x0) || (uVar1 = *(undefined8 *)(local_58 + -8), (int)uVar1 == 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00106310:
      local_60 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Built-in script";
      local_68 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        pcVar4 = local_58;
        local_58 = (char *)0x0;
        local_88 = pcVar4;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((int)uVar1 == 1) goto LAB_00106310;
      local_70 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_78 = 0;
      local_58 = "Built-in";
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_78);
      TTR((String *)&local_68,(String *)&local_78);
      Resource::get_name();
      local_58 = "%s (%s)";
      local_60 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_60);
      vformat<String,String>
                ((CowData<char32_t> *)&local_58,(StrRange *)&local_60,local_80,(String *)&local_68);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = pcVar4;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
LAB_00106212:
    local_b8 = (CowData *)&local_88;
    local_60 = 0;
    *in_RDI = 0;
    *(undefined8 *)(in_RDI + 2) = 0;
    if (pcVar4 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(in_RDI + 2),local_b8);
    }
  }
  else {
    iVar3 = String::find((char *)(in_RSI + 0x188),0x114bc7);
    if (iVar3 != -1) goto LAB_001060a7;
    cVar2 = String::begins_with((char *)(in_RSI + 0x188));
    if (cVar2 != '\0') goto LAB_001060a7;
    Resource::get_name();
    if ((local_58 != (char *)0x0) && (uVar1 = *(undefined8 *)(local_58 + -8), (int)uVar1 != 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((int)uVar1 == 1) goto LAB_001064d7;
      Resource::get_name();
      if (local_58 == (char *)0x0) goto LAB_001064ea;
LAB_00106474:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pcVar4 = local_58;
      local_58 = (char *)0x0;
      local_88 = pcVar4;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      goto LAB_00106212;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_001064d7:
    String::get_file();
    if (local_58 != (char *)0x0) goto LAB_00106474;
LAB_001064ea:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_60 = 0;
    *in_RDI = 0;
    *(undefined8 *)(in_RDI + 2) = 0;
  }
  local_b8 = (CowData *)&local_88;
  *(undefined8 *)(in_RDI + 4) = 0;
  in_RDI[6] = 0;
  *(undefined8 *)(in_RDI + 8) = 0;
  if (local_90 == 0) {
    in_RDI[10] = 0x80;
LAB_001063cf:
    StringName::operator=((StringName *)(in_RDI + 4),(StringName *)&local_60);
LAB_001062b3:
    if (StringName::configured == '\0') goto LAB_001062c9;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(in_RDI + 8),(CowData *)&local_90);
    in_RDI[10] = 0x80;
    if (in_RDI[6] != 0x11) goto LAB_001063cf;
    StringName::StringName((StringName *)&local_58,(String *)(in_RDI + 8),false);
    if (*(char **)(in_RDI + 4) != local_58) {
      StringName::unref();
      *(char **)(in_RDI + 4) = local_58;
      goto LAB_001062b3;
    }
    if (StringName::configured == '\0') goto LAB_001062c9;
    if (local_58 != (char *)0x0) {
      StringName::unref();
      goto LAB_001062b3;
    }
  }
  if (local_60 != 0) {
    StringName::unref();
  }
LAB_001062c9:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::get_global_class_language(StringName const&) */

ScriptServer * __thiscall
ScriptServer::get_global_class_language(ScriptServer *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  StringName *pSVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if ((global_classes._8_8_ != 0) && (global_classes._44_4_ != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar16 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar11 == uVar15) &&
           (*(long *)(*(long *)(global_classes._8_8_ + lVar14 * 8) + 0x10) == *(long *)param_1)) {
          pSVar12 = (StringName *)
                    HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                    ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                                  *)global_classes,param_1);
          StringName::StringName((StringName *)this,pSVar12);
          return this;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("get_global_class_language","core/object/script_language.cpp",0x1d0,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: StringName()",0,0
                  );
  *(undefined8 *)this = 0;
  return this;
}



/* ScriptServer::get_global_class_path(String const&) */

ScriptServer * __thiscall ScriptServer::get_global_class_path(ScriptServer *this,String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
joined_r0x001067e7:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar11 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar15 == 0) goto joined_r0x001067e7;
    uVar16 = 0;
    do {
      if ((uVar11 == uVar15) &&
         (*(long *)(*(long *)(global_classes._8_8_ + lVar14 * 8) + 0x10) == local_48)) {
        bVar10 = false;
        goto LAB_00106860;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
    } while ((uVar15 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar12, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
            auVar5._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar4 * auVar8,8)) * lVar12,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar17, uVar16 <= SUB164(auVar5 * auVar9,8)));
    bVar10 = true;
LAB_00106860:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (!bVar10) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      lVar12 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,(StringName *)&local_48);
      *(undefined8 *)this = 0;
      if (*(long *)(lVar12 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(lVar12 + 8));
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00106828;
    }
  }
  _err_print_error("get_global_class_path","core/object/script_language.cpp",0x1d5,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: String()",0,0);
  *(undefined8 *)this = 0;
LAB_00106828:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ScriptServer::get_global_class_base(String const&) */

ScriptServer * __thiscall ScriptServer::get_global_class_base(ScriptServer *this,String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
joined_r0x00106a4f:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar11 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar15 == 0) goto joined_r0x00106a4f;
    uVar16 = 0;
    do {
      if ((uVar11 == uVar15) &&
         (*(long *)(*(long *)(global_classes._8_8_ + lVar14 * 8) + 0x10) == local_48)) {
        bVar10 = false;
        goto LAB_00106aea;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
    } while ((uVar15 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar12, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
            auVar5._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar4 * auVar8,8)) * lVar12,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar17, uVar16 <= SUB164(auVar5 * auVar9,8)));
    bVar10 = true;
LAB_00106aea:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (!bVar10) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      lVar12 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,(StringName *)&local_48);
      StringName::StringName((StringName *)this,(StringName *)(lVar12 + 0x10));
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00106ab0;
    }
  }
  _err_print_error("get_global_class_base","core/object/script_language.cpp",0x1da,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: String()",0,0);
  local_48 = 0;
  StringName::StringName((StringName *)this,(String *)&local_48,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00106ab0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ScriptServer::get_global_class_native_base(String const&) */

ScriptServer * __thiscall
ScriptServer::get_global_class_native_base(ScriptServer *this,String *param_1)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  String *local_98;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,param_1,false);
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
joined_r0x00106ccd:
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (local_58 == (char *)0x0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(local_58 + 0x20);
    }
    uVar26 = CONCAT44(0,uVar2);
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar20 * lVar21;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar24 = SUB168(auVar4 * auVar12,8);
    uVar25 = *(uint *)(global_classes._16_8_ + lVar24 * 4);
    iVar23 = SUB164(auVar4 * auVar12,8);
    if (uVar25 == 0) goto joined_r0x00106ccd;
    uVar27 = 0;
    do {
      if ((uVar20 == uVar25) &&
         (*(char **)(*(long *)(global_classes._8_8_ + lVar24 * 8) + 0x10) == local_58)) {
        bVar28 = false;
        goto LAB_00106d67;
      }
      uVar27 = uVar27 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)(iVar23 + 1) * lVar21;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      lVar24 = SUB168(auVar5 * auVar13,8);
      uVar25 = *(uint *)(global_classes._16_8_ + lVar24 * 4);
      iVar23 = SUB164(auVar5 * auVar13,8);
    } while ((uVar25 != 0) &&
            (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar25 * lVar21, auVar14._8_8_ = 0,
            auVar14._0_8_ = uVar26, auVar7._8_8_ = 0,
            auVar7._0_8_ = (ulong)((uVar2 + iVar23) - SUB164(auVar6 * auVar14,8)) * lVar21,
            auVar15._8_8_ = 0, auVar15._0_8_ = uVar26, uVar27 <= SUB164(auVar7 * auVar15,8)));
    bVar28 = true;
LAB_00106d67:
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    if (!bVar28) {
      StringName::StringName((StringName *)&local_60,param_1,false);
      lVar21 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,(StringName *)&local_60);
      lVar21 = *(long *)(lVar21 + 0x10);
      if (lVar21 == 0) {
        local_70 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar21 + 8);
        local_70 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar21 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar21 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_70);
        }
      }
      local_98 = (String *)&local_70;
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      while ((StringName::StringName((StringName *)&local_58,local_98,false),
             global_classes._8_8_ != 0 && (global_classes._44_4_ != 0))) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
        lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
        if (local_58 == (char *)0x0) {
          uVar20 = StringName::get_empty_hash();
        }
        else {
          uVar20 = *(uint *)(local_58 + 0x20);
        }
        uVar26 = CONCAT44(0,uVar2);
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar20 * lVar21;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar26;
        lVar24 = SUB168(auVar8 * auVar16,8);
        uVar25 = *(uint *)(global_classes._16_8_ + lVar24 * 4);
        iVar23 = SUB164(auVar8 * auVar16,8);
        if (uVar25 == 0) break;
        uVar27 = 0;
        while ((uVar20 != uVar25 ||
               (*(char **)(*(long *)(global_classes._8_8_ + lVar24 * 8) + 0x10) != local_58))) {
          uVar27 = uVar27 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar23 + 1) * lVar21;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar26;
          lVar24 = SUB168(auVar9 * auVar17,8);
          uVar25 = *(uint *)(global_classes._16_8_ + lVar24 * 4);
          iVar23 = SUB164(auVar9 * auVar17,8);
          if ((uVar25 == 0) ||
             (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar25 * lVar21, auVar18._8_8_ = 0,
             auVar18._0_8_ = uVar26, auVar11._8_8_ = 0,
             auVar11._0_8_ = (ulong)((uVar2 + iVar23) - SUB164(auVar10 * auVar18,8)) * lVar21,
             auVar19._8_8_ = 0, auVar19._0_8_ = uVar26, SUB164(auVar11 * auVar19,8) < uVar27)) {
            if ((StringName::configured == '\0') || (local_58 == (char *)0x0)) goto LAB_00106d20;
            goto LAB_00107021;
          }
        }
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_68,local_98,false);
        lVar21 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                 ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                               *)global_classes,(StringName *)&local_68);
        lVar21 = *(long *)(lVar21 + 0x10);
        if (lVar21 == 0) {
LAB_00107059:
          local_60 = 0;
          if (local_70 != 0) {
LAB_00107067:
            lVar21 = local_70;
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar21 + -0x10),false);
            }
            goto LAB_00106fb0;
          }
        }
        else {
          pcVar3 = *(char **)(lVar21 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00107059;
            plVar1 = (long *)(*(long *)(lVar21 + 0x10) + -0x10);
            do {
              lVar24 = *plVar1;
              if (lVar24 == 0) goto LAB_00106f9d;
              LOCK();
              lVar22 = *plVar1;
              bVar28 = lVar24 == lVar22;
              if (bVar28) {
                *plVar1 = lVar24 + 1;
                lVar22 = lVar24;
              }
              UNLOCK();
            } while (!bVar28);
            if (lVar22 != -1) {
              local_60 = *(long *)(lVar21 + 0x10);
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
LAB_00106f9d:
          lVar21 = local_60;
          if (local_70 == local_60) {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
          }
          else {
            if (local_70 != 0) goto LAB_00107067;
LAB_00106fb0:
            local_70 = local_60;
          }
        }
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
      }
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
LAB_00107021:
        StringName::unref();
      }
      goto LAB_00106d20;
    }
  }
  _err_print_error("get_global_class_native_base","core/object/script_language.cpp",0x1df,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: String()",0,0);
  local_58 = (char *)0x0;
  local_98 = (String *)&local_58;
LAB_00106d20:
  StringName::StringName((StringName *)this,local_98,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::add_global_class(StringName const&, StringName const&, StringName const&, String
   const&, bool, bool) */

void ScriptServer::add_global_class
               (StringName *param_1,StringName *param_2,StringName *param_3,String *param_4,
               bool param_5,bool param_6)

{
  CowData<char32_t> *this;
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  StringName *this_00;
  int iVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar22 = *(long *)param_2;
  if (lVar22 == *(long *)param_1) {
LAB_00107560:
    _err_print_error("add_global_class","core/object/script_language.cpp",0x18a,
                     "Condition \"p_class == p_base || (global_classes.has(p_base) && get_global_class_native_base(p_base) == p_class)\" is true."
                     ,"Cyclic inheritance in script class.",0,0);
  }
  else {
    if ((global_classes._8_8_ != 0) && (global_classes._44_4_ != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
      uVar27 = CONCAT44(0,uVar1);
      lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
      if (lVar22 == 0) {
        uVar20 = StringName::get_empty_hash();
      }
      else {
        uVar20 = *(uint *)(lVar22 + 0x20);
      }
      if (uVar20 == 0) {
        uVar20 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar20 * lVar23;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar27;
      lVar22 = SUB168(auVar2 * auVar10,8);
      uVar24 = *(uint *)(global_classes._16_8_ + lVar22 * 4);
      iVar21 = SUB164(auVar2 * auVar10,8);
      if (uVar24 != 0) {
        uVar25 = 0;
        while ((uVar24 != uVar20 ||
               (lVar22 = *(long *)(*(long *)(global_classes._8_8_ + lVar22 * 8) + 0x10),
               lVar22 != *(long *)param_2))) {
          uVar25 = uVar25 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar21 + 1) * lVar23;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar27;
          lVar22 = SUB168(auVar3 * auVar11,8);
          uVar24 = *(uint *)(global_classes._16_8_ + lVar22 * 4);
          iVar21 = SUB164(auVar3 * auVar11,8);
          if ((uVar24 == 0) ||
             (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar24 * lVar23, auVar12._8_8_ = 0,
             auVar12._0_8_ = uVar27, auVar5._8_8_ = 0,
             auVar5._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar4 * auVar12,8)) * lVar23,
             auVar13._8_8_ = 0, auVar13._0_8_ = uVar27, SUB164(auVar5 * auVar13,8) < uVar25))
          goto LAB_00107310;
        }
        if (lVar22 == 0) {
          local_70 = 0;
        }
        else {
          local_70 = 0;
          if (*(char **)(lVar22 + 8) == (char *)0x0) {
            if (*(long *)(lVar22 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar22 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_70,*(char **)(lVar22 + 8));
          }
        }
        get_global_class_native_base((ScriptServer *)local_68,(String *)&local_70);
        uVar18 = local_68._0_8_;
        lVar22 = *(long *)param_1;
        if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (uVar18 == lVar22) goto LAB_00107560;
      }
LAB_00107310:
      if ((global_classes._8_8_ != 0) && (global_classes._44_4_ != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
        uVar27 = CONCAT44(0,uVar1);
        lVar22 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
        if (*(long *)param_1 == 0) {
          uVar20 = StringName::get_empty_hash();
        }
        else {
          uVar20 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar20 * lVar22;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar27;
        lVar23 = SUB168(auVar6 * auVar14,8);
        uVar24 = *(uint *)(global_classes._16_8_ + lVar23 * 4);
        uVar25 = SUB164(auVar6 * auVar14,8);
        if (uVar24 != 0) {
          uVar26 = 0;
          do {
            if ((uVar24 == uVar20) &&
               (*(long *)(*(long *)(global_classes._8_8_ + lVar23 * 8) + 0x10) == *(long *)param_1))
            {
              lVar22 = *(long *)(global_classes._8_8_ + (ulong)uVar25 * 8);
              if ((*(long *)(lVar22 + 0x28) != *(long *)param_2) ||
                 ((cVar19 = String::operator!=((String *)(lVar22 + 0x20),param_4), cVar19 != '\0' ||
                  (*(long *)(lVar22 + 0x18) != *(long *)param_3)))) {
                StringName::operator=((StringName *)(lVar22 + 0x28),param_2);
                if (*(long *)(lVar22 + 0x20) != *(long *)param_4) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(lVar22 + 0x20),(CowData *)param_4);
                }
                StringName::operator=((StringName *)(lVar22 + 0x18),param_3);
                inheriters_cache_dirty = 1;
                *(bool *)(lVar22 + 0x30) = param_5;
                *(bool *)(lVar22 + 0x31) = param_6;
              }
              goto LAB_00107591;
            }
            uVar26 = uVar26 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(uVar25 + 1) * lVar22;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar27;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar24 = *(uint *)(global_classes._16_8_ + lVar23 * 4);
            uVar25 = SUB164(auVar7 * auVar15,8);
          } while ((uVar24 != 0) &&
                  (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar24 * lVar22, auVar16._8_8_ = 0,
                  auVar16._0_8_ = uVar27, auVar9._8_8_ = 0,
                  auVar9._0_8_ = (ulong)((uVar1 + uVar25) - SUB164(auVar8 * auVar16,8)) * lVar22,
                  auVar17._8_8_ = 0, auVar17._0_8_ = uVar27, uVar26 <= SUB164(auVar9 * auVar17,8)));
        }
      }
    }
    local_50 = 0;
    this = (CowData<char32_t> *)(local_68 + 8);
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    StringName::operator=((StringName *)local_68,param_3);
    if (local_68._8_8_ != *(long *)param_4) {
      CowData<char32_t>::_ref(this,(CowData *)param_4);
    }
    StringName::operator=((StringName *)&local_58,param_2);
    local_50 = CONCAT11(param_6,param_5);
    this_00 = (StringName *)
              HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
              ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                            *)global_classes,param_1);
    StringName::operator=(this_00,(StringName *)local_68);
    if (*(long *)(this_00 + 8) != local_68._8_8_) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 8),(CowData *)this);
    }
    StringName::operator=(this_00 + 0x10,(StringName *)&local_58);
    bVar28 = StringName::configured != '\0';
    inheriters_cache_dirty = 1;
    *(undefined2 *)(this_00 + 0x18) = local_50;
    if ((bVar28) && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(this);
    if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
      StringName::unref();
    }
  }
LAB_00107591:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ScriptServer::is_global_class_abstract(String const&) */

undefined1 ScriptServer::is_global_class_abstract(String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
joined_r0x00107797:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar11 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar16 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar16 == 0) goto joined_r0x00107797;
    uVar17 = 0;
    do {
      if ((uVar11 == uVar16) &&
         (*(long *)(*(long *)(global_classes._8_8_ + lVar14 * 8) + 0x10) == local_48)) {
        bVar10 = false;
        goto LAB_00107802;
      }
      uVar17 = uVar17 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar16 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
    } while ((uVar16 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar12, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
            auVar5._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar4 * auVar8,8)) * lVar12,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar18, uVar17 <= SUB164(auVar5 * auVar9,8)));
    bVar10 = true;
LAB_00107802:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (!bVar10) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      lVar12 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,(StringName *)&local_48);
      uVar15 = *(undefined1 *)(lVar12 + 0x18);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_001077d0;
    }
  }
  uVar15 = 0;
  _err_print_error("is_global_class_abstract","core/object/script_language.cpp",0x1e8,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: false",0,0);
LAB_001077d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* ScriptServer::is_global_class_tool(String const&) */

undefined1 ScriptServer::is_global_class_tool(String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((global_classes._8_8_ == 0) || (global_classes._44_4_ == 0)) {
joined_r0x001079c7:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)global_classes._40_4_ * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar11 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar16 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar16 == 0) goto joined_r0x001079c7;
    uVar17 = 0;
    do {
      if ((uVar11 == uVar16) &&
         (*(long *)(*(long *)(global_classes._8_8_ + lVar14 * 8) + 0x10) == local_48)) {
        bVar10 = false;
        goto LAB_00107a32;
      }
      uVar17 = uVar17 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar16 = *(uint *)(global_classes._16_8_ + lVar14 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
    } while ((uVar16 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar12, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
            auVar5._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar4 * auVar8,8)) * lVar12,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar18, uVar17 <= SUB164(auVar5 * auVar9,8)));
    bVar10 = true;
LAB_00107a32:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (!bVar10) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      lVar12 = HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,(StringName *)&local_48);
      uVar15 = *(undefined1 *)(lVar12 + 0x19);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00107a00;
    }
  }
  uVar15 = 0;
  _err_print_error("is_global_class_tool","core/object/script_language.cpp",0x1ed,
                   "Condition \"!global_classes.has(p_class)\" is true. Returning: false",0,0);
LAB_00107a00:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* ScriptServer::save_global_classes() */

void ScriptServer::save_global_classes(void)

{
  char cVar1;
  char cVar2;
  Variant_conflict *pVVar3;
  Variant_conflict *this;
  StringName *pSVar4;
  Array *pAVar5;
  StringName *pSVar6;
  long in_FS_OFFSET;
  Dictionary local_f0 [8];
  Array local_e8 [8];
  long *local_e0;
  Variant_conflict *local_d8;
  Variant_conflict *local_d0;
  Variant_conflict *local_c8 [2];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_f0);
  ProjectSettings::get_singleton();
  ProjectSettings::get_global_class_list();
  Array::Array(local_e8,(Array *)local_c8);
  Array::~Array((Array *)local_c8);
  Array::begin();
  Array::end();
  if (local_c8[0] != local_d8) {
    do {
      if (local_d0 != (Variant_conflict *)0x0) {
        Variant::operator=(local_d0,local_d8);
      }
      Variant::operator_cast_to_Dictionary((Variant_conflict *)&local_e0);
      Variant::Variant((Variant_conflict *)local_78,"name");
      cVar2 = Dictionary::has((Variant_conflict *)&local_e0);
      if (cVar2 == '\0') {
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant_conflict *)local_58,"icon");
        cVar2 = Dictionary::has((Variant_conflict *)&local_e0);
        if (Variant::needs_deinit[local_58[0]] == '\0') {
          cVar1 = Variant::needs_deinit[local_78[0]];
        }
        else {
          Variant::_clear_internal();
          cVar1 = Variant::needs_deinit[local_78[0]];
        }
        if (cVar1 != '\0') {
          Variant::_clear_internal();
        }
        if (cVar2 != '\0') {
          Variant::Variant((Variant_conflict *)local_58,"icon");
          pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)&local_e0);
          Variant::Variant((Variant_conflict *)local_78,"name");
          Dictionary::operator[]((Variant_conflict *)&local_e0);
          this = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_f0);
          Variant::operator=(this,pVVar3);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      Dictionary::~Dictionary((Dictionary *)&local_e0);
      local_d8 = local_d8 + 0x18;
    } while (local_d8 != local_c8[0]);
  }
  local_e0 = (long *)0x0;
  get_global_class_list((List *)&local_e0);
  Array::Array((Array *)&local_d8);
  if ((local_e0 != (long *)0x0) && (pSVar6 = (StringName *)*local_e0, pSVar6 != (StringName *)0x0))
  {
    do {
      pSVar4 = (StringName *)
               HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::operator[]((HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
                             *)global_classes,pSVar6);
      Dictionary::Dictionary((Dictionary *)local_c8);
      Variant::Variant((Variant_conflict *)local_58,pSVar6);
      Variant::Variant((Variant_conflict *)local_78,"class");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,pSVar4);
      Variant::Variant((Variant_conflict *)local_78,"language");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,(String *)(pSVar4 + 8));
      Variant::Variant((Variant_conflict *)local_78,"path");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,pSVar4 + 0x10);
      Variant::Variant((Variant_conflict *)local_78,"base");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_78,"");
      Variant::Variant((Variant_conflict *)local_98,pSVar6);
      Dictionary::get((Variant_conflict *)local_58,(Variant_conflict *)local_f0);
      Variant::Variant((Variant_conflict *)local_b8,"icon");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_b8[0]] == '\0') {
        if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_00108240;
LAB_0010801f:
        if (Variant::needs_deinit[local_98[0]] != '\0') goto LAB_00108260;
LAB_00108032:
        cVar2 = Variant::needs_deinit[local_78[0]];
      }
      else {
        Variant::_clear_internal();
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010801f;
LAB_00108240:
        Variant::_clear_internal();
        if (Variant::needs_deinit[local_98[0]] == '\0') goto LAB_00108032;
LAB_00108260:
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_78[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,(bool)pSVar4[0x18]);
      Variant::Variant((Variant_conflict *)local_78,"is_abstract");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,(bool)pSVar4[0x19]);
      Variant::Variant((Variant_conflict *)local_78,"is_tool");
      pVVar3 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_c8);
      if (pVVar3 != (Variant_conflict *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant_conflict *)local_58,(Array *)local_c8);
      Array::push_back((Variant_conflict *)&local_d8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_c8);
      pSVar6 = *(StringName **)(pSVar6 + 8);
    } while (pSVar6 != (StringName *)0x0);
  }
  pAVar5 = (Array *)ProjectSettings::get_singleton();
  ProjectSettings::store_global_class_list(pAVar5);
  Array::~Array((Array *)&local_d8);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_e0);
  Array::~Array(local_e8);
  Dictionary::~Dictionary(local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Script::_get_script_method_list() */

void Script::_get_script_method_list(void)

{
  long lVar1;
  long *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)in_RDI,(StringName *)0x1b,(Variant_conflict *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_68 = (long *)0x0;
  (**(code **)(*in_RSI + 0x2b0))();
  if (local_68 != (long *)0x0) {
    for (lVar1 = *local_68; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x70)) {
      MethodInfo::operator_cast_to_Dictionary((MethodInfo *)&local_60);
      Variant::Variant((Variant_conflict *)&local_58,(MethodInfo *)&local_60);
      Array::push_back((Variant_conflict *)in_RDI);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_60);
    }
  }
  List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Script::_get_script_signal_list() */

void Script::_get_script_signal_list(void)

{
  long lVar1;
  long *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)in_RDI,(StringName *)0x1b,(Variant_conflict *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_68 = (long *)0x0;
  (**(code **)(*in_RSI + 0x298))();
  if (local_68 != (long *)0x0) {
    for (lVar1 = *local_68; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x70)) {
      MethodInfo::operator_cast_to_Dictionary((MethodInfo *)&local_60);
      Variant::Variant((Variant_conflict *)&local_58,(MethodInfo *)&local_60);
      Array::push_back((Variant_conflict *)in_RDI);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_60);
    }
  }
  List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Script::get_script_method_argument_count(StringName const&, bool*) const */

undefined4 __thiscall
Script::get_script_method_argument_count(Script *this,StringName *param_1,bool *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [16];
  CowData<char32_t> local_118 [8];
  long local_110;
  CowData<char32_t> local_100 [20];
  int local_ec;
  long local_e8 [2];
  int *local_d8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x268))(local_128,this,param_1);
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_ec == 0) {
    cVar5 = String::operator==((String *)local_128,(String *)&local_b8);
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    piVar4 = local_68;
    if (local_68 != (int *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar2 = *(long *)(local_68 + -2);
        lVar7 = 0;
        local_68 = (int *)0x0;
        piVar6 = piVar4;
        if (lVar2 != 0) {
          do {
            if (Variant::needs_deinit[*piVar6] != '\0') {
              Variant::_clear_internal();
            }
            lVar7 = lVar7 + 1;
            piVar6 = piVar6 + 6;
          } while (lVar2 != lVar7);
        }
        Memory::free_static(piVar4 + -4,false);
      }
    }
  }
  else {
    cVar5 = '\0';
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  lVar2 = local_c0;
  if (cVar5 == '\0') {
    if (param_2 != (bool *)0x0) {
      *param_2 = true;
    }
    if (local_e8[0] != 0) {
      uVar8 = *(undefined4 *)(local_e8[0] + 0x10);
      goto LAB_001088c2;
    }
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  uVar8 = 0;
LAB_001088c2:
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_d8;
  if (local_d8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_d8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_d8 + -2);
      lVar7 = 0;
      local_d8 = (int *)0x0;
      piVar6 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_e8);
  CowData<char32_t>::_unref(local_100);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_118);
  CowData<char32_t>::_unref(local_128);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::_bind_methods() */

void ScriptLanguage::_bind_methods(void)

{
  StringName *this;
  long in_FS_OFFSET;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_70._8_8_ = local_70._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_a8,"SCRIPT_NAME_CASING_AUTO",false);
  local_78 = "SCRIPT_NAME_CASING_AUTO";
  local_b0 = 0;
  local_70._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b0);
  local_78 = "ScriptLanguage::ScriptNameCasing";
  local_90 = 0;
  local_70._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90);
  StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
  this = (StringName *)(local_70 + 8);
  local_70 = (undefined1  [16])0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = (char *)0x2;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10006;
  StringName::operator=(this,(StringName *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_80 = local_70._8_8_;
  local_70._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  local_78 = "ScriptLanguage";
  local_88 = 0;
  local_70._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_80,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"SCRIPT_NAME_CASING_PASCAL_CASE",false);
  local_78 = "SCRIPT_NAME_CASING_PASCAL_CASE";
  local_b0 = 0;
  local_70._0_8_ = 0x1e;
  String::parse_latin1((StrRange *)&local_b0);
  local_78 = "ScriptLanguage::ScriptNameCasing";
  local_90 = 0;
  local_70._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90);
  StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
  local_70 = (undefined1  [16])0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = (char *)0x2;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10006;
  StringName::operator=(this,(StringName *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_80 = local_70._8_8_;
  local_70._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  local_78 = "ScriptLanguage";
  local_88 = 0;
  local_70._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_80,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"SCRIPT_NAME_CASING_SNAKE_CASE",false);
  local_78 = "SCRIPT_NAME_CASING_SNAKE_CASE";
  local_b0 = 0;
  local_70._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b0);
  local_78 = "ScriptLanguage::ScriptNameCasing";
  local_90 = 0;
  local_70._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90);
  StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
  local_70 = (undefined1  [16])0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = (char *)0x2;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10006;
  StringName::operator=(this,(StringName *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_80 = local_70._8_8_;
  local_70._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  local_78 = "ScriptLanguage";
  local_88 = 0;
  local_70._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_80,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"SCRIPT_NAME_CASING_KEBAB_CASE",false);
  local_78 = "SCRIPT_NAME_CASING_KEBAB_CASE";
  local_b0 = 0;
  local_70._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b0);
  local_78 = "ScriptLanguage::ScriptNameCasing";
  local_90 = 0;
  local_70._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90);
  StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
  local_70 = (undefined1  [16])0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = (char *)0x2;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10006;
  StringName::operator=(this,(StringName *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_80 = local_70._8_8_;
  local_70._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  local_78 = "ScriptLanguage";
  local_88 = 0;
  local_70._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_80,(StringName *)&local_a8,3,false);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceHolderScriptInstance::property_get_fallback(StringName const&, bool*) */

StringName * PlaceHolderScriptInstance::property_get_fallback(StringName *param_1,bool *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  undefined1 *in_RCX;
  uint uVar12;
  StringName *in_RDX;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(code **)(**(long **)(param_2 + 0x80) + 0x2d8) != Script::is_placeholder_fallback_enabled)
     && (cVar10 = (**(code **)(**(long **)(param_2 + 0x80) + 0x2d8))(), cVar10 != '\0')) {
    if ((*(long *)(param_2 + 0x20) != 0) && (*(int *)(param_2 + 0x44) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x40) * 4);
      uVar17 = CONCAT44(0,uVar1);
      lVar14 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x40) * 8);
      if (*(long *)in_RDX == 0) {
        uVar11 = StringName::get_empty_hash();
      }
      else {
        uVar11 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar11 * lVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar13 = SUB168(auVar2 * auVar6,8);
      uVar15 = *(uint *)(*(long *)(param_2 + 0x28) + lVar13 * 4);
      uVar12 = SUB164(auVar2 * auVar6,8);
      if (uVar15 != 0) {
        uVar16 = 0;
        while ((uVar15 != uVar11 ||
               (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + lVar13 * 8) + 0x10) !=
                *(long *)in_RDX))) {
          uVar16 = uVar16 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(uVar12 + 1) * lVar14;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar17;
          lVar13 = SUB168(auVar3 * auVar7,8);
          uVar15 = *(uint *)(*(long *)(param_2 + 0x28) + lVar13 * 4);
          uVar12 = SUB164(auVar3 * auVar7,8);
          if ((uVar15 == 0) ||
             (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar14, auVar8._8_8_ = 0,
             auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
             auVar5._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar4 * auVar8,8)) * lVar14,
             auVar9._8_8_ = 0, auVar9._0_8_ = uVar17, SUB164(auVar5 * auVar9,8) < uVar16))
          goto LAB_00109550;
        }
        lVar14 = *(long *)(*(long *)(param_2 + 0x20) + (ulong)uVar12 * 8);
        if (lVar14 != 0) goto LAB_0010952d;
      }
    }
LAB_00109550:
    local_44 = 0;
    cVar10 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)(param_2 + 0x48),in_RDX,&local_44);
    if ((cVar10 != '\0') &&
       (lVar14 = *(long *)(*(long *)(param_2 + 0x50) + (ulong)local_44 * 8), lVar14 != 0)) {
LAB_0010952d:
      if (in_RCX != (undefined1 *)0x0) {
        *in_RCX = 1;
      }
      Variant::Variant((Variant_conflict *)param_1,(Variant_conflict *)(lVar14 + 0x18));
      goto LAB_00109416;
    }
  }
  if (in_RCX != (undefined1 *)0x0) {
    *in_RCX = 0;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00109416:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PlaceHolderScriptInstance::get(StringName const&, Variant&) const */

undefined8 __thiscall
PlaceHolderScriptInstance::get
          (PlaceHolderScriptInstance *this,StringName *param_1,Variant_conflict *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  undefined8 uVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
    uVar28 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
    if (*(long *)param_1 == 0) {
      uVar21 = StringName::get_empty_hash();
    }
    else {
      uVar21 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar21 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28;
    lVar24 = SUB168(auVar3 * auVar11,8);
    uVar25 = *(uint *)(*(long *)(this + 0x28) + lVar24 * 4);
    iVar23 = SUB164(auVar3 * auVar11,8);
    if (uVar25 != 0) {
      uVar27 = 0;
      do {
        if ((uVar25 == uVar21) &&
           (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar24 * 8) + 0x10) == *(long *)param_1)) {
          local_60 = 0;
          cVar20 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x18),param_1,&local_60);
          if (cVar20 == '\0') goto LAB_0010991a;
          Variant::operator=(param_2,(Variant_conflict *)
                                     (*(long *)(*(long *)(this + 0x20) + (ulong)local_60 * 8) + 0x18
                                     ));
          goto LAB_001096f4;
        }
        uVar27 = uVar27 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar23 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar28;
        lVar24 = SUB168(auVar4 * auVar12,8);
        uVar25 = *(uint *)(*(long *)(this + 0x28) + lVar24 * 4);
        iVar23 = SUB164(auVar4 * auVar12,8);
      } while ((uVar25 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar25 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar28, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar28, uVar27 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  if ((*(long *)(this + 0x50) != 0) && (*(int *)(this + 0x74) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
    uVar28 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x70) * 8);
    if (*(long *)param_1 == 0) {
      uVar21 = StringName::get_empty_hash();
    }
    else {
      uVar21 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar21 * lVar2;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    lVar24 = SUB168(auVar7 * auVar15,8);
    uVar25 = *(uint *)(*(long *)(this + 0x58) + lVar24 * 4);
    iVar23 = SUB164(auVar7 * auVar15,8);
    if (uVar25 != 0) {
      uVar27 = 0;
      do {
        if ((uVar25 == uVar21) &&
           (*(long *)(*(long *)(*(long *)(this + 0x50) + lVar24 * 8) + 0x10) == *(long *)param_1)) {
          local_5c = 0;
          cVar20 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x48),param_1,&local_5c);
          if (cVar20 == '\0') {
LAB_0010991a:
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          Variant::operator=(param_2,(Variant_conflict *)
                                     (*(long *)(*(long *)(this + 0x50) + (ulong)local_5c * 8) + 0x18
                                     ));
          goto LAB_001096f4;
        }
        uVar27 = uVar27 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar23 + 1) * lVar2;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar28;
        lVar24 = SUB168(auVar8 * auVar16,8);
        uVar25 = *(uint *)(*(long *)(this + 0x58) + lVar24 * 4);
        iVar23 = SUB164(auVar8 * auVar16,8);
      } while ((uVar25 != 0) &&
              (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar25 * lVar2, auVar17._8_8_ = 0,
              auVar17._0_8_ = uVar28, auVar10._8_8_ = 0,
              auVar10._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar9 * auVar17,8)) * lVar2,
              auVar18._8_8_ = 0, auVar18._0_8_ = uVar28, uVar27 <= SUB164(auVar10 * auVar18,8)));
    }
  }
  plVar26 = *(long **)(this + 0x80);
  if (*(code **)(*plVar26 + 0x2d8) == Script::is_placeholder_fallback_enabled) {
LAB_0010985e:
    local_58[0] = 0;
    local_58[1] = 0;
    local_50 = (undefined1  [16])0x0;
    cVar20 = (**(code **)(*plVar26 + 0x2a0))(plVar26,param_1,(Variant_conflict *)local_58);
    if (cVar20 != '\0') {
      Variant::operator=(param_2,(Variant_conflict *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_001096f4:
      uVar22 = 1;
      goto LAB_001096f9;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
      uVar22 = 0;
      goto LAB_001096f9;
    }
  }
  else {
    cVar20 = (**(code **)(*plVar26 + 0x2d8))();
    if (cVar20 == '\0') {
      plVar26 = *(long **)(this + 0x80);
      goto LAB_0010985e;
    }
  }
  uVar22 = 0;
LAB_001096f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceHolderScriptInstance::get_property_type(StringName const&, bool*) const */

undefined4 __thiscall
PlaceHolderScriptInstance::get_property_type
          (PlaceHolderScriptInstance *this,StringName *param_1,bool *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  code *pcVar27;
  char cVar28;
  undefined4 uVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
    if (*(long *)param_1 == 0) {
      uVar30 = StringName::get_empty_hash();
    }
    else {
      uVar30 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar36 = CONCAT44(0,uVar1);
    lVar33 = *(long *)(this + 0x28);
    if (uVar30 == 0) {
      uVar30 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar30 * lVar2;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar36;
    lVar32 = SUB168(auVar3 * auVar15,8);
    uVar37 = *(uint *)(lVar33 + lVar32 * 4);
    uVar35 = (ulong)uVar37;
    iVar31 = SUB164(auVar3 * auVar15,8);
    if (uVar37 != 0) {
      uVar37 = 0;
      do {
        if ((uVar30 == (uint)uVar35) &&
           (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar32 * 8) + 0x10) == *(long *)param_1)) {
          if (param_2 != (bool *)0x0) {
            *param_2 = true;
          }
          if ((*(long *)(this + 0x20) == 0) || (*(int *)(this + 0x44) == 0)) goto LAB_00109cb8;
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
          uVar36 = CONCAT44(0,uVar1);
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
          if (*(long *)param_1 == 0) {
            uVar30 = StringName::get_empty_hash();
            lVar33 = *(long *)(this + 0x28);
          }
          else {
            uVar30 = *(uint *)(*(long *)param_1 + 0x20);
          }
          if (uVar30 == 0) {
            uVar30 = 1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar30 * lVar2;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar36;
          lVar32 = SUB168(auVar7 * auVar19,8);
          uVar37 = *(uint *)(lVar33 + lVar32 * 4);
          uVar38 = SUB164(auVar7 * auVar19,8);
          if (uVar37 == 0) goto LAB_00109cb8;
          uVar34 = 0;
          goto LAB_00109b22;
        }
        uVar37 = uVar37 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar31 + 1) * lVar2;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar36;
        lVar32 = SUB168(auVar4 * auVar16,8);
        uVar38 = *(uint *)(lVar33 + lVar32 * 4);
        uVar35 = (ulong)uVar38;
        iVar31 = SUB164(auVar4 * auVar16,8);
      } while ((uVar38 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar35 * lVar2, auVar17._8_8_ = 0,
              auVar17._0_8_ = uVar36, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar5 * auVar17,8)) * lVar2,
              auVar18._8_8_ = 0, auVar18._0_8_ = uVar36, uVar37 <= SUB164(auVar6 * auVar18,8)));
    }
  }
  if ((*(long *)(this + 0x50) != 0) && (*(int *)(this + 0x74) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
    uVar36 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x70) * 8);
    if (*(long *)param_1 == 0) {
      uVar30 = StringName::get_empty_hash();
    }
    else {
      uVar30 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar30 == 0) {
      uVar30 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar30 * lVar2;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar36;
    lVar33 = SUB168(auVar11 * auVar23,8);
    uVar37 = *(uint *)(*(long *)(this + 0x58) + lVar33 * 4);
    iVar31 = SUB164(auVar11 * auVar23,8);
    if (uVar37 != 0) {
      uVar38 = 0;
      do {
        if ((uVar30 == uVar37) &&
           (*(long *)(*(long *)(*(long *)(this + 0x50) + lVar33 * 8) + 0x10) == *(long *)param_1)) {
          if (param_2 != (bool *)0x0) {
            *param_2 = true;
          }
          local_44 = 0;
          cVar28 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x48),param_1,&local_44);
          if (cVar28 == '\0') goto LAB_00109cb8;
          uVar29 = *(undefined4 *)(*(long *)(*(long *)(this + 0x50) + (ulong)local_44 * 8) + 0x18);
          goto LAB_00109b40;
        }
        uVar38 = uVar38 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar31 + 1) * lVar2;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar36;
        lVar33 = SUB168(auVar12 * auVar24,8);
        uVar37 = *(uint *)(*(long *)(this + 0x58) + lVar33 * 4);
        iVar31 = SUB164(auVar12 * auVar24,8);
      } while ((uVar37 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar2, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar36, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar13 * auVar25,8)) * lVar2,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar36, uVar38 <= SUB164(auVar14 * auVar26,8)));
    }
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  uVar29 = 0;
LAB_00109b40:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00109b22:
  if ((uVar30 == uVar37) &&
     (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar32 * 8) + 0x10) == *(long *)param_1)) {
    uVar29 = *(undefined4 *)(*(long *)(*(long *)(this + 0x20) + (ulong)uVar38 * 8) + 0x18);
    goto LAB_00109b40;
  }
  uVar34 = uVar34 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)(uVar38 + 1) * lVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar36;
  lVar32 = SUB168(auVar8 * auVar20,8);
  uVar37 = *(uint *)(lVar33 + lVar32 * 4);
  uVar38 = SUB164(auVar8 * auVar20,8);
  if ((uVar37 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar2, auVar21._8_8_ = 0,
     auVar21._0_8_ = uVar36, auVar10._8_8_ = 0,
     auVar10._0_8_ = (ulong)((uVar1 + uVar38) - SUB164(auVar9 * auVar21,8)) * lVar2,
     auVar22._8_8_ = 0, auVar22._0_8_ = uVar36, SUB164(auVar10 * auVar22,8) < uVar34)) {
LAB_00109cb8:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar27 = (code *)invalidInstructionException();
    (*pcVar27)();
  }
  goto LAB_00109b22;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ScriptServer::global_classes_clear() */

void ScriptServer::global_classes_clear(void)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  if ((global_classes._8_8_ != 0) && (global_classes._44_4_ != 0)) {
    lVar5 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)global_classes._40_4_ * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(global_classes._16_8_ + lVar5) != 0) {
          *(int *)(global_classes._16_8_ + lVar5) = 0;
          pvVar3 = *(void **)(global_classes._8_8_ + lVar5 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
            StringName::unref();
          }
          if (*(long *)((long)pvVar3 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar3 + 0x20);
              *(undefined8 *)((long)pvVar3 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (StringName::configured != '\0') {
            if (*(long *)((long)pvVar3 + 0x18) != 0) {
              StringName::unref();
              if (StringName::configured == '\0') goto LAB_00109efc;
            }
            if (*(long *)((long)pvVar3 + 0x10) != 0) {
              StringName::unref();
            }
          }
LAB_00109efc:
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(global_classes._8_8_ + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 << 2 != lVar5);
    }
    global_classes._44_4_ = 0;
    global_classes._24_16_ = (undefined1  [16])0x0;
  }
  if ((inheriters_cache._8_8_ != 0) && (inheriters_cache._44_4_ != 0)) {
    lVar5 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)inheriters_cache._40_4_ * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(inheriters_cache._16_8_ + lVar5) != 0) {
          *(int *)(inheriters_cache._16_8_ + lVar5) = 0;
          pvVar3 = *(void **)(inheriters_cache._8_8_ + lVar5 * 2);
          CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar3 + 0x20));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(inheriters_cache._8_8_ + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar2 << 2);
    }
    inheriters_cache._44_4_ = 0;
    inheriters_cache._24_16_ = (undefined1  [16])0x0;
  }
  return;
}



/* ScriptServer::finish_languages() */

void ScriptServer::finish_languages(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  ScriptLanguage *apSStack_68 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_38 = 2;
  local_48 = (undefined1  [16])0x0;
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  plVar5 = &_languages;
  if (_language_count < 1) {
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  }
  else {
    iVar3 = 0;
    do {
      if (*plVar5 != 0) {
        HashSet<ScriptLanguage*,HashMapHasherDefault,HashMapComparatorDefault<ScriptLanguage*>>::
        insert(apSStack_68);
      }
      iVar3 = iVar3 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar3 < _language_count);
    iVar3 = local_38._4_4_;
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
    if (iVar3 != 0) {
      uVar1 = local_58._0_8_;
      lVar6 = 0;
      while( true ) {
        (**(code **)(**(long **)(uVar1 + lVar6 * 8) + 0x170))();
        if (iVar3 <= (int)lVar6 + 1) break;
        lVar6 = lVar6 + 1;
      }
      goto LAB_0010a0e8;
    }
  }
  iVar3 = 0;
LAB_0010a0e8:
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  languages_ready = 0;
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  global_classes_clear();
  uVar1 = local_58._0_8_;
  if ((void *)local_58._0_8_ == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar2 = local_48._8_8_;
    if ((iVar3 != 0) && (*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) != 0)) {
      memset((void *)local_48._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) * 4);
    }
    Memory::free_static((void *)uVar1,false);
    Memory::free_static((void *)local_48._0_8_,false);
    Memory::free_static((void *)local_58._8_8_,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar2,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::init_languages() */

void ScriptServer::init_languages(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  String *pSVar11;
  Variant_conflict *pVVar12;
  long *plVar13;
  long lVar14;
  long in_FS_OFFSET;
  Variant_conflict local_168 [8];
  Dictionary local_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  Variant_conflict *local_138;
  Variant_conflict *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  global_classes_clear();
  pSVar11 = (String *)ProjectSettings::get_singleton();
  local_138 = (Variant_conflict *)0x0;
  local_128._8_8_ = 0x16;
  local_128._0_8_ = "_global_script_classes";
  String::parse_latin1((StrRange *)&local_138);
  cVar3 = ProjectSettings::has_setting(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (cVar3 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)local_128,"_global_script_classes",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Array(local_168);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128._0_8_ != 0)) {
      StringName::unref();
    }
    Array::begin();
    Array::end();
    if (local_138 != (Variant_conflict *)local_128._0_8_) {
      do {
        if (local_130 != (Variant_conflict *)0x0) {
          Variant::operator=(local_130,local_138);
        }
        Variant::operator_cast_to_Dictionary((Variant_conflict *)local_160);
        Variant::Variant((Variant_conflict *)local_f8,"class");
        bVar4 = Dictionary::has((Variant_conflict *)local_160);
        if (bVar4 == 0) {
          if (Variant::needs_deinit[local_f8[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Variant::Variant((Variant_conflict *)local_d8,"language");
          bVar5 = Dictionary::has((Variant_conflict *)local_160);
          if (bVar5 == 0) {
LAB_0010aa35:
            cVar3 = Variant::needs_deinit[local_d8[0]];
          }
          else {
            Variant::Variant((Variant_conflict *)local_b8,"path");
            bVar8 = Dictionary::has((Variant_conflict *)local_160);
            bVar4 = bVar5;
            if (bVar8 != 0) {
              Variant::Variant((Variant_conflict *)local_98,"base");
              bVar4 = Dictionary::has((Variant_conflict *)local_160);
              if (bVar4 != 0) {
                Variant::Variant((Variant_conflict *)local_78,"is_abstract");
                cVar3 = Dictionary::has((Variant_conflict *)local_160);
                bVar8 = bVar4;
                if (cVar3 != '\0') {
                  Variant::Variant((Variant_conflict *)local_58,"is_tool");
                  bVar8 = Dictionary::has((Variant_conflict *)local_160);
                  bVar8 = bVar8 ^ 1;
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              bVar4 = bVar8;
              if (Variant::needs_deinit[local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            if (Variant::needs_deinit[local_b8[0]] == '\0') goto LAB_0010aa35;
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[local_d8[0]];
          }
          if (cVar3 != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_f8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (bVar4 == 0) {
            Variant::Variant((Variant_conflict *)local_58,"is_tool");
            pVVar12 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_160);
            bVar6 = Variant::operator_cast_to_bool(pVVar12);
            Variant::Variant((Variant_conflict *)local_78,"is_abstract");
            pVVar12 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_160);
            bVar7 = Variant::operator_cast_to_bool(pVVar12);
            Variant::Variant((Variant_conflict *)local_98,"path");
            Dictionary::operator[]((Variant_conflict *)local_160);
            Variant::operator_cast_to_String((Variant_conflict *)&local_140);
            Variant::Variant((Variant_conflict *)local_b8,"language");
            Dictionary::operator[]((Variant_conflict *)local_160);
            Variant::operator_cast_to_StringName((Variant_conflict *)&local_148);
            Variant::Variant((Variant_conflict *)local_d8,"base");
            Dictionary::operator[]((Variant_conflict *)local_160);
            Variant::operator_cast_to_StringName((Variant_conflict *)&local_150);
            Variant::Variant((Variant_conflict *)local_f8,"class");
            Dictionary::operator[]((Variant_conflict *)local_160);
            Variant::operator_cast_to_StringName((Variant_conflict *)&local_158);
            add_global_class((StringName *)&local_158,(StringName *)&local_150,
                             (StringName *)&local_148,(String *)&local_140,bVar7,bVar6);
            if ((StringName::configured != '\0') && (local_158 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_f8[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_150 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_d8[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_148 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_b8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        Dictionary::~Dictionary(local_160);
        local_138 = local_138 + 0x18;
      } while (local_138 != (Variant_conflict *)local_128._0_8_);
    }
    pSVar11 = (String *)ProjectSettings::get_singleton();
    local_138 = (Variant_conflict *)0x0;
    local_128._8_8_ = 0x16;
    local_128._0_8_ = "_global_script_classes";
    String::parse_latin1((StrRange *)&local_138);
    ProjectSettings::clear(pSVar11);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    Array::~Array((Array *)local_168);
  }
  ProjectSettings::get_singleton();
  ProjectSettings::get_global_class_list();
  Array::Array((Array *)local_168,(Array *)local_128);
  Array::~Array((Array *)local_128);
  Array::begin();
  Array::end();
  if (local_138 != (Variant_conflict *)local_128._0_8_) {
    do {
      if (local_130 != (Variant_conflict *)0x0) {
        Variant::operator=(local_130,local_138);
      }
      Variant::operator_cast_to_Dictionary((Variant_conflict *)local_160);
      Variant::Variant((Variant_conflict *)local_f8,"class");
      bVar4 = Dictionary::has((Variant_conflict *)local_160);
      if (bVar4 == 0) {
        if (Variant::needs_deinit[local_f8[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant_conflict *)local_d8,"language");
        bVar5 = Dictionary::has((Variant_conflict *)local_160);
        if (bVar5 == 0) {
LAB_0010a399:
          cVar3 = Variant::needs_deinit[local_d8[0]];
        }
        else {
          Variant::Variant((Variant_conflict *)local_b8,"path");
          bVar8 = Dictionary::has((Variant_conflict *)local_160);
          bVar4 = bVar5;
          if (bVar8 != 0) {
            Variant::Variant((Variant_conflict *)local_98,"base");
            bVar4 = Dictionary::has((Variant_conflict *)local_160);
            if (bVar4 == 0) {
LAB_0010ada0:
              cVar3 = Variant::needs_deinit[local_98[0]];
            }
            else {
              Variant::Variant((Variant_conflict *)local_78,"is_abstract");
              cVar3 = Dictionary::has((Variant_conflict *)local_160);
              bVar8 = bVar4;
              if (cVar3 != '\0') {
                Variant::Variant((Variant_conflict *)local_58,"is_tool");
                bVar8 = Dictionary::has((Variant_conflict *)local_160);
                bVar8 = bVar8 ^ 1;
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              if (Variant::needs_deinit[local_78[0]] == '\0') goto LAB_0010ada0;
              Variant::_clear_internal();
              cVar3 = Variant::needs_deinit[local_98[0]];
            }
            bVar4 = bVar8;
            if (cVar3 != '\0') {
              Variant::_clear_internal();
            }
          }
          if (Variant::needs_deinit[local_b8[0]] == '\0') goto LAB_0010a399;
          Variant::_clear_internal();
          cVar3 = Variant::needs_deinit[local_d8[0]];
        }
        if (cVar3 != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_f8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (bVar4 == 0) {
          Variant::Variant((Variant_conflict *)local_58,"is_tool");
          pVVar12 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_160);
          bVar6 = Variant::operator_cast_to_bool(pVVar12);
          Variant::Variant((Variant_conflict *)local_78,"is_abstract");
          pVVar12 = (Variant_conflict *)Dictionary::operator[]((Variant_conflict *)local_160);
          bVar7 = Variant::operator_cast_to_bool(pVVar12);
          Variant::Variant((Variant_conflict *)local_98,"path");
          Dictionary::operator[]((Variant_conflict *)local_160);
          Variant::operator_cast_to_String((Variant_conflict *)&local_140);
          Variant::Variant((Variant_conflict *)local_b8,"language");
          Dictionary::operator[]((Variant_conflict *)local_160);
          Variant::operator_cast_to_StringName((Variant_conflict *)&local_148);
          Variant::Variant((Variant_conflict *)local_d8,"base");
          Dictionary::operator[]((Variant_conflict *)local_160);
          Variant::operator_cast_to_StringName((Variant_conflict *)&local_150);
          Variant::Variant((Variant_conflict *)local_f8,"class");
          Dictionary::operator[]((Variant_conflict *)local_160);
          Variant::operator_cast_to_StringName((Variant_conflict *)&local_158);
          add_global_class((StringName *)&local_158,(StringName *)&local_150,
                           (StringName *)&local_148,(String *)&local_140,bVar7,bVar6);
          if ((StringName::configured != '\0') && (local_158 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_f8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_150 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_148 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar14 = local_140;
          if (local_140 != 0) {
            LOCK();
            plVar13 = (long *)(local_140 + -0x10);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_140 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      Dictionary::~Dictionary(local_160);
      local_138 = local_138 + 0x18;
    } while (local_138 != (Variant_conflict *)local_128._0_8_);
  }
  Array::~Array((Array *)local_168);
  local_108 = 2;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  iVar9 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  plVar13 = &_languages;
  if (_language_count < 1) {
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  }
  else {
    iVar9 = 0;
    do {
      if (*plVar13 != 0) {
        HashSet<ScriptLanguage*,HashMapHasherDefault,HashMapComparatorDefault<ScriptLanguage*>>::
        insert((ScriptLanguage **)&local_138);
      }
      iVar9 = iVar9 + 1;
      plVar13 = plVar13 + 1;
    } while (iVar9 < _language_count);
    iVar9 = local_108._4_4_;
    pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
    if (iVar9 != 0) {
      uVar1 = local_128._0_8_;
      for (lVar14 = 0; (**(code **)(**(long **)(uVar1 + lVar14 * 8) + 0x158))(),
          (int)lVar14 + 1 < iVar9; lVar14 = lVar14 + 1) {
      }
      goto LAB_0010a710;
    }
  }
  iVar9 = 0;
LAB_0010a710:
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)languages_mutex);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  languages_ready = 1;
  pthread_mutex_unlock((pthread_mutex_t *)languages_mutex);
  uVar1 = local_128._0_8_;
  if ((void *)local_128._0_8_ == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar2 = local_118._8_8_;
    if ((iVar9 != 0) && (*(uint *)(hash_table_size_primes + (local_108 & 0xffffffff) * 4) != 0)) {
      memset((void *)local_118._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_108 & 0xffffffff) * 4) * 4);
    }
    Memory::free_static((void *)uVar1,false);
    Memory::free_static((void *)local_118._0_8_,false);
    Memory::free_static((void *)local_128._8_8_,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar2,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::_bind_methods() */

void Script::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  long local_b0;
  long local_a8;
  int local_a0;
  long local_98;
  undefined4 local_90;
  Variant_conflict *local_88;
  undefined8 local_80;
  Variant_conflict **local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_b8,(char ***)"can_instantiate",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool>((_func_bool *)0x1d1);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (Variant_conflict *)0x110444;
  local_80 = 0;
  uVar5 = (uint)(Variant_conflict *)&local_78;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"instance_has",uVar5);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool,Object_const*>((_func_bool_Object_ptr *)0x209);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"has_source_code",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool>((_func_bool *)0x211);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_source_code",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,String>((_func_String *)0x219);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (Variant_conflict *)0x11047d;
  local_80 = 0;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_source_code",uVar5);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,String_const&>((_func_void_String_ptr *)0x221);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (Variant_conflict *)0x110494;
  local_80 = 0;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"reload",uVar5);
  Variant::Variant((Variant_conflict *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88 = (Variant_conflict *)&local_78;
  pMVar4 = create_method_bind<Script,Error,bool>((_func_Error_bool *)0x229);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,&local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_base_script",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,Ref<Script>>((_func_Ref *)0x1d9);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_instance_base_type",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,StringName>((_func_StringName *)0x1f1);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_global_name",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,StringName>((_func_StringName *)0x1e1);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (Variant_conflict *)0x1104dd;
  local_80 = 0;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"has_script_signal",uVar5);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool,StringName_const&>((_func_bool_StringName_ptr *)0x291);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_script_property_list",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,TypedArray<Dictionary>>(_get_script_property_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_script_method_list",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,TypedArray<Dictionary>>(_get_script_method_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_script_signal_list",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,TypedArray<Dictionary>>(_get_script_signal_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_script_constant_map",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,Dictionary>(_get_script_constant_map);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (Variant_conflict *)0x11055a;
  local_80 = 0;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"get_property_default_value",uVar5);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,Variant,StringName_const&>(_get_property_default_value);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"is_tool",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool>((_func_bool *)0x271);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"is_abstract",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,bool>((_func_bool *)0x281);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_rpc_config",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant_conflict **)0x0;
  pMVar4 = create_method_bind<Script,Variant>((_func_Variant_conflict *)0x2e1);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant_conflict **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_b8 = "";
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "source_code";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,4);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_e8);
    local_90 = 0;
    if (local_a0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)&local_98,false);
      if ((char *)local_a8 == local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a8 = (long)local_c8;
      }
      goto LAB_0010bc1a;
    }
  }
  local_90 = 0;
  StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
LAB_0010bc1a:
  local_f8 = 0;
  local_c8 = "Script";
  local_c0 = 6;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::get_inheriters_list(StringName const&, List<StringName, DefaultAllocator>*) */

void ScriptServer::get_inheriters_list(StringName *param_1,List *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  uint uVar20;
  StringName *pSVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  StringName *pSVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  long in_FS_OFFSET;
  long *local_78;
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar23 = inheriters_cache._8_8_;
  if (inheriters_cache_dirty == '\0') {
LAB_0010bf5a:
    if (lVar23 == 0) goto LAB_0010c0f0;
  }
  else {
    if ((inheriters_cache._8_8_ == 0) || (inheriters_cache._44_4_ == 0)) {
      if (global_classes._24_8_ != 0) goto LAB_0010c208;
LAB_0010c440:
      lVar23 = inheriters_cache._8_8_;
      if (inheriters_cache._24_8_ != 0) {
        local_78 = (long *)inheriters_cache._24_8_;
        do {
          if ((local_78[4] != 0) && (lVar23 = *(long *)(local_78[4] + -8), lVar23 != 0)) {
            CowData<StringName>::_copy_on_write((CowData<StringName> *)(local_78 + 4));
            pSVar21 = (StringName *)local_78[4];
            if (lVar23 != 1) {
              lVar26 = 0;
              lVar31 = lVar23;
              do {
                lVar31 = lVar31 >> 1;
                lVar26 = lVar26 + 1;
              } while (lVar31 != 1);
              lVar26 = lVar26 * 2;
              lVar31 = lVar23;
              lVar25 = 1;
              if (lVar23 < 0x11) {
                do {
                  lVar26 = lVar25 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert
                            (0,lVar25,pSVar21);
                  lVar25 = lVar26;
                } while (lVar23 != lVar26);
              }
              else {
                do {
                  lVar26 = lVar26 + -1;
                  pSVar24 = (StringName *)
                            SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                                      (pSVar21,pSVar21 + (lVar31 >> 1) * 8,pSVar21 + lVar31 * 8 + -8
                                      );
                  StringName::StringName((StringName *)&local_58,pSVar24);
                  lVar25 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                                     (0,lVar31,(StringName *)&local_58,pSVar21);
                  if ((StringName::configured != '\0') && (local_58 != 0)) {
                    StringName::unref();
                  }
                  SortArray<StringName,StringName::AlphCompare,true>::introsort
                            (lVar25,lVar31,pSVar21,lVar26);
                  lVar31 = 1;
                  if (lVar25 < 0x11) goto LAB_0010c558;
                  lVar31 = lVar25;
                } while (lVar26 != 0);
                SortArray<StringName,StringName::AlphCompare,true>::partial_sort
                          (0,lVar25,lVar25,pSVar21);
                lVar31 = 1;
LAB_0010c558:
                do {
                  lVar26 = lVar31 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert
                            (0,lVar31,pSVar21);
                  lVar31 = lVar26;
                } while (lVar26 != 0x10);
                do {
                  StringName::StringName((StringName *)&local_58,pSVar21 + lVar26 * 8);
                  SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                            (lVar26,(StringName *)&local_58,pSVar21);
                  if ((StringName::configured != '\0') && (local_58 != 0)) {
                    StringName::unref();
                  }
                  lVar26 = lVar26 + 1;
                } while (lVar23 != lVar26);
              }
            }
          }
          local_78 = (long *)*local_78;
          lVar23 = inheriters_cache._8_8_;
        } while (local_78 != (long *)0x0);
      }
LAB_0010c5d1:
      inheriters_cache_dirty = '\0';
      goto LAB_0010bf5a;
    }
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)inheriters_cache._40_4_ * 4);
    if (uVar1 != 0) {
      lVar26 = 0;
      do {
        if (*(int *)(inheriters_cache._16_8_ + lVar26) != 0) {
          pvVar2 = *(void **)(lVar23 + lVar26 * 2);
          *(int *)(inheriters_cache._16_8_ + lVar26) = 0;
          CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar2 + 0x20));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          lVar23 = inheriters_cache._8_8_;
          *(undefined8 *)(inheriters_cache._8_8_ + lVar26 * 2) = 0;
        }
        lVar26 = lVar26 + 4;
      } while ((ulong)uVar1 * 4 - lVar26 != 0);
      inheriters_cache._44_4_ = 0;
      inheriters_cache._24_16_ = (undefined1  [16])0x0;
      if (global_classes._24_8_ != 0) goto LAB_0010c208;
      goto LAB_0010c5d1;
    }
    inheriters_cache._44_4_ = 0;
    inheriters_cache._24_16_ = (undefined1  [16])0x0;
    if (global_classes._24_8_ != 0) {
LAB_0010c208:
      pSVar21 = (StringName *)(global_classes._24_8_ + 0x28);
      plVar30 = (long *)global_classes._24_8_;
      if (lVar23 == 0) goto LAB_0010c3e0;
LAB_0010c238:
      if (inheriters_cache._44_4_ == 0) goto LAB_0010c3e0;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)inheriters_cache._40_4_ * 4);
      uVar28 = CONCAT44(0,uVar1);
      lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)inheriters_cache._40_4_ * 8);
      if (plVar30[5] == 0) {
        uVar20 = StringName::get_empty_hash();
      }
      else {
        uVar20 = *(uint *)(plVar30[5] + 0x20);
      }
      if (uVar20 == 0) {
        uVar20 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar20 * lVar23;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar28;
      lVar26 = SUB168(auVar7 * auVar15,8);
      uVar27 = *(uint *)(inheriters_cache._16_8_ + lVar26 * 4);
      iVar19 = SUB164(auVar7 * auVar15,8);
      if (uVar27 == 0) goto LAB_0010c3e0;
      uVar29 = 0;
      while ((uVar20 != uVar27 ||
             (*(long *)(*(long *)(inheriters_cache._8_8_ + lVar26 * 8) + 0x10) != plVar30[5]))) {
        uVar29 = uVar29 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar19 + 1) * lVar23;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar28;
        lVar26 = SUB168(auVar8 * auVar16,8);
        uVar27 = *(uint *)(inheriters_cache._16_8_ + lVar26 * 4);
        iVar19 = SUB164(auVar8 * auVar16,8);
        if (uVar27 == 0) goto LAB_0010c3e0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar27 * lVar23;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar28;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((uVar1 + iVar19) - SUB164(auVar9 * auVar17,8)) * lVar23;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar28;
        if (SUB164(auVar10 * auVar18,8) < uVar29) goto LAB_0010c3e0;
      }
      do {
        lVar23 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                 ::operator[]((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                               *)inheriters_cache,pSVar21);
        StringName::StringName((StringName *)&local_58,(StringName *)(plVar30 + 2));
        if (*(long *)(lVar23 + 8) == 0) {
          lVar26 = 1;
        }
        else {
          lVar26 = *(long *)(*(long *)(lVar23 + 8) + -8) + 1;
        }
        iVar19 = CowData<StringName>::resize<false>((CowData<StringName> *)(lVar23 + 8),lVar26);
        if (iVar19 == 0) {
          if (*(long *)(lVar23 + 8) == 0) {
            lVar31 = -1;
            lVar26 = 0;
          }
          else {
            lVar26 = *(long *)(*(long *)(lVar23 + 8) + -8);
            lVar31 = lVar26 + -1;
            if (-1 < lVar31) {
              CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar23 + 8));
              StringName::operator=
                        ((StringName *)(*(long *)(lVar23 + 8) + lVar31 * 8),(StringName *)&local_58)
              ;
              goto LAB_0010c3a0;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar31,lVar26,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_0010c3a0:
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        plVar30 = (long *)*plVar30;
        if (plVar30 == (long *)0x0) goto LAB_0010c440;
        pSVar21 = (StringName *)(plVar30 + 5);
        if (inheriters_cache._8_8_ != 0) goto LAB_0010c238;
LAB_0010c3e0:
        local_50[0] = 0;
        lVar23 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                 ::operator[]((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                               *)inheriters_cache,pSVar21);
        if (*(long *)(lVar23 + 8) != 0) {
          CowData<StringName>::_unref((CowData<StringName> *)(lVar23 + 8));
          *(undefined8 *)(lVar23 + 8) = 0;
        }
        CowData<StringName>::_unref((CowData<StringName> *)local_50);
      } while( true );
    }
    inheriters_cache_dirty = '\0';
  }
  if (inheriters_cache._44_4_ != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)inheriters_cache._40_4_ * 4);
    lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)inheriters_cache._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar28 = CONCAT44(0,uVar1);
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar20 * lVar23;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28;
    lVar26 = SUB168(auVar3 * auVar11,8);
    uVar27 = *(uint *)(inheriters_cache._16_8_ + lVar26 * 4);
    iVar19 = SUB164(auVar3 * auVar11,8);
    if (uVar27 != 0) {
      uVar29 = 0;
      while ((uVar20 != uVar27 ||
             (*(long *)(*(long *)(inheriters_cache._8_8_ + lVar26 * 8) + 0x10) != *(long *)param_1))
            ) {
        uVar29 = uVar29 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar19 + 1) * lVar23;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar28;
        lVar26 = SUB168(auVar4 * auVar12,8);
        uVar27 = *(uint *)(inheriters_cache._16_8_ + lVar26 * 4);
        iVar19 = SUB164(auVar4 * auVar12,8);
        if ((uVar27 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar27 * lVar23, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar28, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + iVar19) - SUB164(auVar5 * auVar13,8)) * lVar23,
           auVar14._8_8_ = 0, auVar14._0_8_ = uVar28, SUB164(auVar6 * auVar14,8) < uVar29))
        goto LAB_0010c0f0;
      }
      lVar26 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
               ::operator[]((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                             *)inheriters_cache,param_1);
      lVar23 = *(long *)(lVar26 + 8);
      if (lVar23 != 0) {
        lVar31 = 0;
        goto LAB_0010c081;
      }
    }
  }
LAB_0010c0f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    if (*(long *)param_2 == 0) {
      pauVar22 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar22;
      *(undefined4 *)pauVar22[1] = 0;
      *pauVar22 = (undefined1  [16])0x0;
    }
    pSVar21 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pSVar21 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pSVar21 + 0x10) = (undefined1  [16])0x0;
    StringName::operator=(pSVar21,(StringName *)(lVar23 + lVar31 * 8));
    plVar30 = *(long **)param_2;
    lVar23 = plVar30[1];
    *(undefined8 *)(pSVar21 + 8) = 0;
    *(long **)(pSVar21 + 0x18) = plVar30;
    *(long *)(pSVar21 + 0x10) = lVar23;
    if (lVar23 != 0) {
      *(StringName **)(lVar23 + 8) = pSVar21;
    }
    plVar30[1] = (long)pSVar21;
    if (*plVar30 == 0) {
      *plVar30 = (long)pSVar21;
    }
    lVar23 = *(long *)(lVar26 + 8);
    *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
    lVar31 = lVar31 + 1;
    if (lVar23 == 0) break;
LAB_0010c081:
    if (*(long *)(lVar23 + -8) <= lVar31) break;
  }
  goto LAB_0010c0f0;
}



/* PlaceHolderScriptInstance::set(StringName const&, Variant const&) */

undefined8 __thiscall
PlaceHolderScriptInstance::set
          (PlaceHolderScriptInstance *this,StringName *param_1,Variant_conflict *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  bool bVar12;
  uint uVar13;
  Variant_conflict *this_00;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool local_7d;
  undefined4 local_7c;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(code **)(**(long **)(this + 0x80) + 0x2d8) == Script::is_placeholder_fallback_enabled) ||
     (cVar11 = (**(code **)(**(long **)(this + 0x80) + 0x2d8))(), cVar11 == '\0')) {
    if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
      uVar19 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
      if (*(long *)param_1 == 0) {
        uVar13 = StringName::get_empty_hash();
      }
      else {
        uVar13 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar19;
      lVar16 = SUB168(auVar3 * auVar7,8);
      uVar17 = *(uint *)(*(long *)(this + 0x28) + lVar16 * 4);
      iVar15 = SUB164(auVar3 * auVar7,8);
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          if ((uVar13 == uVar17) &&
             (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar16 * 8) + 0x10) == *(long *)param_1))
          {
            local_78[0] = 0;
            local_78[1] = 0;
            local_70 = (undefined1  [16])0x0;
            cVar11 = (**(code **)(**(long **)(this + 0x80) + 0x2a0))
                               (*(long **)(this + 0x80),param_1,(Variant_conflict *)local_78);
            if (cVar11 == '\0') goto LAB_0010c8af;
            local_50 = (undefined1  [16])0x0;
            local_7c = 0;
            local_7d = true;
            local_58[0] = 0;
            Variant::evaluate((Operator *)&local_7c,(Variant_conflict *)local_78,param_2,
                              (Variant_conflict *)local_58,&local_7d);
            bVar12 = Variant::operator_cast_to_bool((Variant_conflict *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (!bVar12) goto LAB_0010c8af;
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::erase((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                     *)(this + 0x18),param_1);
            goto LAB_0010c8c7;
          }
          uVar18 = uVar18 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar19;
          lVar16 = SUB168(auVar4 * auVar8,8);
          uVar17 = *(uint *)(*(long *)(this + 0x28) + lVar16 * 4);
          iVar15 = SUB164(auVar4 * auVar8,8);
        } while ((uVar17 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, uVar18 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    cVar11 = (**(code **)(**(long **)(this + 0x80) + 0x2a0))
                       (*(long **)(this + 0x80),param_1,(Variant_conflict *)local_78);
    if (cVar11 != '\0') {
      local_50 = (undefined1  [16])0x0;
      local_7c = 1;
      local_7d = true;
      local_58[0] = 0;
      Variant::evaluate((Operator *)&local_7c,(Variant_conflict *)local_78,param_2,
                        (Variant_conflict *)local_58,&local_7d);
      bVar12 = Variant::operator_cast_to_bool((Variant_conflict *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar12) {
LAB_0010c8af:
        this_00 = (Variant_conflict *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)(this + 0x18),param_1);
        Variant::operator=(this_00,param_2);
      }
LAB_0010c8c7:
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar14 = 1;
      goto LAB_0010c929;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  uVar14 = 0;
LAB_0010c929:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* PlaceHolderScriptInstance::update(List<PropertyInfo, DefaultAllocator> const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) */

void __thiscall
PlaceHolderScriptInstance::update(PlaceHolderScriptInstance *this,List *param_1,HashMap *param_2)

{
  StringName *pSVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  code *pcVar36;
  undefined8 uVar37;
  char cVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int *piVar42;
  Variant_conflict *this_00;
  undefined1 (*pauVar43) [16];
  undefined4 *puVar44;
  StringName *pSVar45;
  long lVar46;
  long lVar47;
  long *plVar48;
  undefined4 *puVar49;
  ulong uVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  long lVar54;
  uint uVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long *local_c8;
  List<StringName,DefaultAllocator> *local_c0;
  long local_a0;
  undefined1 (*local_98 [2]) [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = *(long **)param_1;
  local_88 = (undefined1  [16])0x0;
  local_68 = 2;
  local_78 = (undefined1  [16])0x0;
  if ((local_c8 != (long *)0x0) && (local_c8 = (long *)*local_c8, local_c8 != (long *)0x0)) {
    do {
      uVar55 = *(uint *)(local_c8 + 5) & 0x1c0;
      if ((*(uint *)(local_c8 + 5) & 0x1c0) == 0) {
        StringName::StringName((StringName *)&local_a0,(String *)(local_c8 + 1),false);
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_98);
        if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
          uVar50 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
          if (local_a0 == 0) {
            uVar41 = StringName::get_empty_hash();
          }
          else {
            uVar41 = *(uint *)(local_a0 + 0x20);
          }
          if (uVar41 == 0) {
            uVar41 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar41 * lVar54;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar50;
          lVar46 = SUB168(auVar4 * auVar20,8);
          uVar51 = *(uint *)(*(long *)(this + 0x28) + lVar46 * 4);
          iVar40 = SUB164(auVar4 * auVar20,8);
          if (uVar51 != 0) {
            uVar52 = 0;
            while ((uVar41 != uVar51 ||
                   (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar46 * 8) + 0x10) != local_a0)))
            {
              uVar52 = uVar52 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar40 + 1) * lVar54;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar50;
              lVar46 = SUB168(auVar5 * auVar21,8);
              uVar51 = *(uint *)(*(long *)(this + 0x28) + lVar46 * 4);
              iVar40 = SUB164(auVar5 * auVar21,8);
              if ((uVar51 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar51 * lVar54, auVar22._8_8_ = 0,
                 auVar22._0_8_ = uVar50, auVar7._8_8_ = 0,
                 auVar7._0_8_ = (ulong)((uVar39 + iVar40) - SUB164(auVar6 * auVar22,8)) * lVar54,
                 auVar23._8_8_ = 0, auVar23._0_8_ = uVar50, SUB164(auVar7 * auVar23,8) < uVar52))
              goto LAB_0010cbee;
            }
            piVar42 = (int *)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                           *)(this + 0x18),(StringName *)&local_a0);
            if ((int)*local_c8 == *piVar42) goto LAB_0010cdfb;
          }
        }
LAB_0010cbee:
        if ((*(long *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar50 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          if (local_a0 == 0) {
            uVar41 = StringName::get_empty_hash();
          }
          else {
            uVar41 = *(uint *)(local_a0 + 0x20);
          }
          if (uVar41 == 0) {
            uVar41 = 1;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar41 * lVar54;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar50;
          lVar47 = SUB168(auVar8 * auVar24,8);
          lVar46 = *(long *)(param_2 + 0x10);
          iVar40 = SUB164(auVar8 * auVar24,8);
          uVar51 = *(uint *)(lVar46 + lVar47 * 4);
          if (uVar51 != 0) {
            uVar52 = 0;
            while ((uVar41 != uVar51 ||
                   (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar47 * 8) + 0x10) != local_a0)))
            {
              uVar52 = uVar52 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar40 + 1) * lVar54;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar50;
              lVar47 = SUB168(auVar9 * auVar25,8);
              uVar51 = *(uint *)(lVar46 + lVar47 * 4);
              iVar40 = SUB164(auVar9 * auVar25,8);
              if ((uVar51 == 0) ||
                 (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar51 * lVar54, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar50, auVar11._8_8_ = 0,
                 auVar11._0_8_ = (ulong)((uVar39 + iVar40) - SUB164(auVar10 * auVar26,8)) * lVar54,
                 auVar27._8_8_ = 0, auVar27._0_8_ = uVar50, SUB164(auVar11 * auVar27,8) < uVar52))
              goto LAB_0010cdfb;
            }
            if ((*(long *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x2c) == 0)) goto LAB_0010d4a0;
            uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
            uVar50 = CONCAT44(0,uVar39);
            lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
            if (local_a0 == 0) {
              uVar41 = StringName::get_empty_hash();
              lVar46 = *(long *)(param_2 + 0x10);
            }
            else {
              uVar41 = *(uint *)(local_a0 + 0x20);
            }
            if (uVar41 == 0) {
              uVar41 = 1;
            }
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar41 * lVar54;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar50;
            lVar47 = SUB168(auVar12 * auVar28,8);
            uVar51 = *(uint *)(lVar46 + lVar47 * 4);
            uVar52 = SUB164(auVar12 * auVar28,8);
            if (uVar51 == 0) goto LAB_0010d4a0;
            while ((uVar51 != uVar41 ||
                   (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar47 * 8) + 0x10) != local_a0)))
            {
              uVar55 = uVar55 + 1;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar54;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar50;
              lVar47 = SUB168(auVar13 * auVar29,8);
              uVar51 = *(uint *)(lVar46 + lVar47 * 4);
              uVar52 = SUB164(auVar13 * auVar29,8);
              if ((uVar51 == 0) ||
                 (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar51 * lVar54, auVar30._8_8_ = 0,
                 auVar30._0_8_ = uVar50, auVar15._8_8_ = 0,
                 auVar15._0_8_ = (ulong)((uVar39 + uVar52) - SUB164(auVar14 * auVar30,8)) * lVar54,
                 auVar31._8_8_ = 0, auVar31._0_8_ = uVar50, SUB164(auVar15 * auVar31,8) < uVar55)) {
LAB_0010d4a0:
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar36 = (code *)invalidInstructionException();
                (*pcVar36)();
              }
            }
            lVar54 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar52 * 8);
            this_00 = (Variant_conflict *)
                      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                      ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                    *)(this + 0x18),(StringName *)&local_a0);
            Variant::operator=(this_00,(Variant_conflict *)(lVar54 + 0x18));
          }
        }
LAB_0010cdfb:
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
      }
      local_c8 = (long *)local_c8[6];
    } while (local_c8 != (long *)0x0);
    local_c8 = (long *)local_88._0_8_;
  }
  local_c0 = (List<StringName,DefaultAllocator> *)local_98;
  plVar48 = *(long **)(this + 0x10);
  if (plVar48 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar48;
      if (pvVar2 == (void *)0x0) goto LAB_0010cee2;
      if (*(long **)((long)pvVar2 + 0x40) == plVar48) {
        lVar54 = *(long *)((long)pvVar2 + 0x30);
        lVar46 = *(long *)((long)pvVar2 + 0x38);
        *plVar48 = lVar54;
        if (pvVar2 == (void *)plVar48[1]) {
          plVar48[1] = lVar46;
        }
        if (lVar46 != 0) {
          *(long *)(lVar46 + 0x30) = lVar54;
          lVar54 = *(long *)((long)pvVar2 + 0x30);
        }
        if (lVar54 != 0) {
          *(long *)(lVar54 + 0x38) = lVar46;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(plVar48 + 2) = (int)plVar48[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0);
      }
      plVar48 = *(long **)(this + 0x10);
    } while ((int)plVar48[2] != 0);
    Memory::free_static(plVar48,false);
    *(undefined8 *)(this + 0x10) = 0;
  }
  plVar48 = (long *)0x0;
LAB_0010cee2:
  if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
     (puVar49 = (undefined4 *)**(undefined8 **)param_1, puVar49 != (undefined4 *)0x0)) {
    if (plVar48 == (long *)0x0) {
      pauVar43 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x10) = pauVar43;
      *(undefined4 *)pauVar43[1] = 0;
      *pauVar43 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar44 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar44 + 8) = 0;
        *(undefined1 (*) [16])(puVar44 + 2) = (undefined1  [16])0x0;
        lVar54 = *(long *)(puVar49 + 2);
        *puVar44 = 0;
        puVar44[6] = 0;
        puVar44[10] = 6;
        *(undefined8 *)(puVar44 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar44 + 0xc) = (undefined1  [16])0x0;
        *puVar44 = *puVar49;
        if (lVar54 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar44 + 2),(CowData *)(puVar49 + 2));
        }
        StringName::operator=((StringName *)(puVar44 + 4),(StringName *)(puVar49 + 4));
        puVar44[6] = puVar49[6];
        if (*(long *)(puVar44 + 8) != *(long *)(puVar49 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar44 + 8),(CowData *)(puVar49 + 8));
        }
        puVar44[10] = puVar49[10];
        plVar48 = *(long **)(this + 0x10);
        lVar54 = plVar48[1];
        *(undefined8 *)(puVar44 + 0xc) = 0;
        *(long **)(puVar44 + 0x10) = plVar48;
        *(long *)(puVar44 + 0xe) = lVar54;
        if (lVar54 != 0) {
          *(undefined4 **)(lVar54 + 0x30) = puVar44;
        }
        plVar48[1] = (long)puVar44;
        if (*plVar48 == 0) break;
        puVar49 = *(undefined4 **)(puVar49 + 0xc);
        *(int *)(plVar48 + 2) = (int)plVar48[2] + 1;
        if (puVar49 == (undefined4 *)0x0) goto LAB_0010d01d;
      }
      puVar49 = *(undefined4 **)(puVar49 + 0xc);
      *(int *)(plVar48 + 2) = (int)plVar48[2] + 1;
      *plVar48 = (long)puVar44;
    } while (puVar49 != (undefined4 *)0x0);
  }
LAB_0010d01d:
  puVar3 = *(undefined8 **)(this + 0x30);
  pauVar43 = (undefined1 (*) [16])0x0;
  local_98[0] = (undefined1 (*) [16])0x0;
  uVar50 = local_68;
  for (; local_68 = uVar50, puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    pSVar1 = (StringName *)(puVar3 + 2);
    if ((local_c8 != (long *)0x0) &&
       (local_68._4_4_ = (uint)(uVar50 >> 0x20), bVar56 = local_68._4_4_ != 0, bVar56)) {
      uVar55 = *(uint *)(hash_table_size_primes + (uVar50 & 0xffffffff) * 4);
      uVar53 = CONCAT44(0,uVar55);
      lVar54 = *(long *)(hash_table_size_primes_inv + (uVar50 & 0xffffffff) * 8);
      if (puVar3[2] == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(puVar3[2] + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar39 * lVar54;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar53;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar41 = *(uint *)(local_78._8_8_ + lVar46 * 4);
      iVar40 = SUB164(auVar16 * auVar32,8);
      if (uVar41 != 0) {
        uVar51 = 0;
        do {
          if ((uVar41 == uVar39) && (local_c8[*(uint *)(local_88._8_8_ + lVar46 * 4)] == puVar3[2]))
          goto LAB_0010d160;
          uVar51 = uVar51 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(iVar40 + 1) * lVar54;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar53;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar41 = *(uint *)(local_78._8_8_ + lVar46 * 4);
          iVar40 = SUB164(auVar17 * auVar33,8);
        } while ((uVar41 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar41 * lVar54, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar53, auVar19._8_8_ = 0,
                auVar19._0_8_ = (ulong)((uVar55 + iVar40) - SUB164(auVar18 * auVar34,8)) * lVar54,
                auVar35._8_8_ = 0, auVar35._0_8_ = uVar53, uVar51 <= SUB164(auVar19 * auVar35,8)));
      }
    }
    if (pauVar43 == (undefined1 (*) [16])0x0) {
      pauVar43 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar43[1] = 0;
      *pauVar43 = (undefined1  [16])0x0;
      local_98[0] = pauVar43;
    }
    pSVar45 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pSVar45 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pSVar45 + 0x10) = (undefined1  [16])0x0;
    StringName::operator=(pSVar45,pSVar1);
    lVar54 = *(long *)(*pauVar43 + 8);
    *(undefined1 (**) [16])(pSVar45 + 0x18) = pauVar43;
    *(undefined8 *)(pSVar45 + 8) = 0;
    *(long *)(pSVar45 + 0x10) = lVar54;
    if (lVar54 != 0) {
      *(StringName **)(lVar54 + 8) = pSVar45;
    }
    lVar54 = *(long *)*pauVar43;
    *(StringName **)(*pauVar43 + 8) = pSVar45;
    if (lVar54 == 0) {
      *(StringName **)*pauVar43 = pSVar45;
    }
    *(int *)pauVar43[1] = *(int *)pauVar43[1] + 1;
LAB_0010d160:
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    cVar38 = (**(code **)(**(long **)(this + 0x80) + 0x2a0))
                       (*(long **)(this + 0x80),pSVar1,(Variant_conflict *)&local_58);
    if ((cVar38 != '\0') &&
       (cVar38 = Variant::operator==((Variant_conflict *)&local_58,(Variant_conflict *)(puVar3 + 3))
       , cVar38 != '\0')) {
      if (pauVar43 == (undefined1 (*) [16])0x0) {
        pauVar43 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar43[1] = 0;
        *pauVar43 = (undefined1  [16])0x0;
        local_98[0] = pauVar43;
      }
      pSVar45 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar45 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar45 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar45,pSVar1);
      lVar54 = *(long *)(*pauVar43 + 8);
      *(undefined1 (**) [16])(pSVar45 + 0x18) = pauVar43;
      *(undefined8 *)(pSVar45 + 8) = 0;
      *(long *)(pSVar45 + 0x10) = lVar54;
      if (lVar54 != 0) {
        *(StringName **)(lVar54 + 8) = pSVar45;
      }
      lVar54 = *(long *)*pauVar43;
      *(StringName **)(*pauVar43 + 8) = pSVar45;
      if (lVar54 == 0) {
        *(StringName **)*pauVar43 = pSVar45;
      }
      *(int *)pauVar43[1] = *(int *)pauVar43[1] + 1;
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    uVar50 = local_68;
  }
  if (pauVar43 != (undefined1 (*) [16])0x0) {
    do {
      do {
        if (*(int *)pauVar43[1] == 0) goto LAB_0010d1d2;
        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
        ::erase((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 *)(this + 0x18),*(StringName **)*pauVar43);
        plVar48 = *(long **)*pauVar43;
      } while (plVar48 == (long *)0x0);
      if ((undefined1 (*) [16])plVar48[3] == pauVar43) {
        lVar54 = plVar48[1];
        lVar46 = plVar48[2];
        *(long *)*pauVar43 = lVar54;
        if (plVar48 == *(long **)(*pauVar43 + 8)) {
          *(long *)(*pauVar43 + 8) = lVar46;
        }
        if (lVar46 != 0) {
          *(long *)(lVar46 + 8) = lVar54;
          lVar54 = plVar48[1];
        }
        if (lVar54 != 0) {
          *(long *)(lVar54 + 0x10) = lVar46;
        }
        if ((StringName::configured != '\0') && (*plVar48 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar48,false);
        iVar40 = *(int *)pauVar43[1] + -1;
        *(int *)pauVar43[1] = iVar40;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        iVar40 = *(int *)pauVar43[1];
      }
    } while (iVar40 != 0);
    Memory::free_static(pauVar43,false);
    local_98[0] = (undefined1 (*) [16])0x0;
  }
LAB_0010d1d2:
  if ((*(long *)(this + 8) != 0) &&
     (this == *(PlaceHolderScriptInstance **)(*(long *)(this + 8) + 0x98))) {
    Object::notify_property_list_changed();
  }
  if ((*(long *)(this + 0x50) != 0) && (*(int *)(this + 0x74) != 0)) {
    lVar54 = 0;
    uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
    if (uVar55 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x58) + lVar54) != 0) {
          *(int *)(*(long *)(this + 0x58) + lVar54) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x50) + lVar54 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x50) + lVar54 * 2) = 0;
        }
        lVar54 = lVar54 + 4;
      } while ((ulong)uVar55 << 2 != lVar54);
    }
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  }
  if (*(code **)(**(long **)(this + 0x80) + 0x2c8) != Script::get_constants) {
    (**(code **)(**(long **)(this + 0x80) + 0x2c8))();
  }
  List<StringName,DefaultAllocator>::~List(local_c0);
  if (local_c8 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar50 = (ulong)local_68._4_4_;
    uVar37 = local_78._8_8_;
    if (local_68._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
        memset((void *)local_78._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) * 4);
      }
      plVar48 = local_c8;
      do {
        if ((StringName::configured != '\0') && (*plVar48 != 0)) {
          StringName::unref();
        }
        plVar48 = plVar48 + 1;
      } while (local_c8 + uVar50 != plVar48);
    }
    Memory::free_static(local_c8,false);
    Memory::free_static((void *)local_78._0_8_,false);
    Memory::free_static((void *)local_88._8_8_,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar37,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaceHolderScriptInstance::property_set_fallback(StringName const&, Variant const&, bool*) */

void __thiscall
PlaceHolderScriptInstance::property_set_fallback
          (PlaceHolderScriptInstance *this,StringName *param_1,Variant_conflict *param_2,
          bool *param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(code **)(**(long **)(this + 0x80) + 0x2d8) == Script::is_placeholder_fallback_enabled) ||
     (cVar12 = (**(code **)(**(long **)(this + 0x80) + 0x2d8))(), cVar12 == '\0'))
  goto LAB_0010d749;
  if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4);
    uVar21 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(*(long *)(this + 0x28) + lVar18 * 4);
    uVar17 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar20 = 0;
      while ((uVar13 != uVar19 ||
             (*(long *)(*(long *)(*(long *)(this + 0x20) + lVar18 * 8) + 0x10) != *(long *)param_1))
            ) {
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar17 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar19 = *(uint *)(*(long *)(this + 0x28) + lVar18 * 4);
        uVar17 = SUB164(auVar5 * auVar9,8);
        if ((uVar19 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar2, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar1 + uVar17) - SUB164(auVar6 * auVar10,8)) * lVar2,
           auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar20))
        goto LAB_0010d870;
      }
      lVar2 = *(long *)(*(long *)(this + 0x20) + (ulong)uVar17 * 8);
      if (lVar2 != 0) {
        Variant::operator=((Variant_conflict *)(lVar2 + 0x18),param_2);
        goto LAB_0010d88c;
      }
    }
  }
LAB_0010d870:
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::insert((StringName *)&local_78,(Variant_conflict *)(this + 0x18),SUB81(param_1,0));
LAB_0010d88c:
  if (*(long **)(this + 0x10) != (long *)0x0) {
    for (lVar2 = **(long **)(this + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
      cVar12 = operator==((String *)(lVar2 + 8),param_1);
      if (cVar12 != '\0') goto LAB_0010d749;
    }
  }
  plVar14 = (long *)Variant::get_validated_object();
  if (plVar14 == (long *)0x0) {
LAB_0010dba0:
    iVar22 = 0;
  }
  else {
    pcVar3 = *(code **)(*plVar14 + 0x58);
    local_80 = 0;
    local_70 = 4;
    local_78 = &_LC169;
    String::parse_latin1((StrRange *)&local_80);
    cVar12 = (*pcVar3)(plVar14,(StrRange *)&local_80);
    iVar22 = 0x22;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar12 == '\0') goto LAB_0010dba0;
  }
  local_88 = 0;
  local_78 = &_LC0;
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  lVar2 = *(long *)param_1;
  if (lVar2 == 0) {
LAB_0010dbc9:
    local_98 = 0;
    local_70 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,*(undefined4 *)param_2);
  }
  else {
    local_98 = 0;
    if (*(char **)(lVar2 + 8) == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_0010dbc9;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(lVar2 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_98,*(char **)(lVar2 + 8));
    }
    local_70 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,*(undefined4 *)param_2);
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    }
  }
  local_68 = 0;
  local_58 = 0;
  local_60 = iVar22;
  if (local_90 == 0) {
LAB_0010da18:
    local_50 = 0x1002;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x1002;
    if (local_60 != 0x11) goto LAB_0010da18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  local_a8 = (StringName *)&local_68;
  if (*(long *)(this + 0x10) == 0) {
    pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x10) = pauVar16;
    *(undefined4 *)pauVar16[1] = 0;
    *pauVar16 = (undefined1  [16])0x0;
  }
  puVar15 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar15 + 8) = 0;
  *(undefined1 (*) [16])(puVar15 + 2) = (undefined1  [16])0x0;
  *puVar15 = 0;
  puVar15[6] = 0;
  puVar15[10] = 6;
  *(undefined8 *)(puVar15 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar15 + 0xc) = (undefined1  [16])0x0;
  *puVar15 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar15 + 4),local_a8);
  puVar15[6] = local_60;
  if (*(long *)(puVar15 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 8),(CowData *)&local_58);
  }
  puVar15[10] = local_50;
  plVar14 = *(long **)(this + 0x10);
  lVar2 = plVar14[1];
  *(undefined8 *)(puVar15 + 0xc) = 0;
  *(long **)(puVar15 + 0x10) = plVar14;
  *(long *)(puVar15 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar15;
  }
  plVar14[1] = (long)puVar15;
  if (*plVar14 == 0) {
    *plVar14 = (long)puVar15;
  }
  *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
LAB_0010d749:
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* ScriptInstance::to_string(bool*) */

void ScriptInstance::to_string(bool *param_1)

{
  undefined1 *in_RDX;
  
  if (in_RDX != (undefined1 *)0x0) {
    *in_RDX = 0;
  }
  param_1[0] = false;
  param_1[1] = false;
  param_1[2] = false;
  param_1[3] = false;
  param_1[4] = false;
  param_1[5] = false;
  param_1[6] = false;
  param_1[7] = false;
  return;
}



/* ScriptInstance::refcount_incremented() */

void ScriptInstance::refcount_incremented(void)

{
  return;
}



/* ScriptInstance::refcount_decremented() */

undefined8 ScriptInstance::refcount_decremented(void)

{
  return 1;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* Script::is_class_ptr(void*) const */

uint __thiscall Script::is_class_ptr(Script *this,void *param_1)

{
  return (uint)CONCAT71(0x1214,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1214,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1214,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1214,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Script::_getv(StringName const&, Variant&) const */

undefined8 Script::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* Script::_setv(StringName const&, Variant const&) */

undefined8 Script::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* Script::_validate_propertyv(PropertyInfo&) const */

void Script::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Script::_property_can_revertv(StringName const&) const */

undefined8 Script::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Script::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Script::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* Script::editor_can_reload_from_file() */

undefined8 Script::editor_can_reload_from_file(void)

{
  return 0;
}



/* Script::_placeholder_erased(PlaceHolderScriptInstance*) */

void Script::_placeholder_erased(PlaceHolderScriptInstance *param_1)

{
  return;
}



/* Script::placeholder_instance_create(Object*) */

undefined8 Script::placeholder_instance_create(Object *param_1)

{
  return 0;
}



/* Script::has_static_method(StringName const&) const */

undefined8 Script::has_static_method(StringName *param_1)

{
  return 0;
}



/* Script::update_exports() */

void Script::update_exports(void)

{
  return;
}



/* Script::get_member_line(StringName const&) const */

undefined8 Script::get_member_line(StringName *param_1)

{
  return 0xffffffff;
}



/* Script::get_constants(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >*) */

void Script::get_constants(HashMap *param_1)

{
  return;
}



/* Script::get_members(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */

void Script::get_members(HashSet *param_1)

{
  return;
}



/* Script::is_placeholder_fallback_enabled() const */

undefined8 Script::is_placeholder_fallback_enabled(void)

{
  return 0;
}



/* ScriptCodeCompletionCache::~ScriptCodeCompletionCache() */

void __thiscall
ScriptCodeCompletionCache::~ScriptCodeCompletionCache(ScriptCodeCompletionCache *this)

{
  return;
}



/* ScriptLanguage::is_class_ptr(void*) const */

uint __thiscall ScriptLanguage::is_class_ptr(ScriptLanguage *this,void *param_1)

{
  return (uint)CONCAT71(0x1214,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1213,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ScriptLanguage::_getv(StringName const&, Variant&) const */

undefined8 ScriptLanguage::_getv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ScriptLanguage::_setv(StringName const&, Variant const&) */

undefined8 ScriptLanguage::_setv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ScriptLanguage::_validate_propertyv(PropertyInfo&) const */

void ScriptLanguage::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ScriptLanguage::_property_can_revertv(StringName const&) const */

undefined8 ScriptLanguage::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ScriptLanguage::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ScriptLanguage::_property_get_revertv(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* ScriptLanguage::_notificationv(int, bool) */

void ScriptLanguage::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ScriptLanguage::make_template(String const&, String const&, String const&) const */

String * ScriptLanguage::make_template(String *param_1,String *param_2,String *param_3)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* ScriptLanguage::get_built_in_templates(StringName const&) */

StringName * ScriptLanguage::get_built_in_templates(StringName *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* ScriptLanguage::is_using_templates() */

undefined8 ScriptLanguage::is_using_templates(void)

{
  return 0;
}



/* ScriptLanguage::supports_documentation() const */

undefined8 ScriptLanguage::supports_documentation(void)

{
  return 0;
}



/* ScriptLanguage::can_inherit_from_file() const */

undefined8 ScriptLanguage::can_inherit_from_file(void)

{
  return 0;
}



/* ScriptLanguage::can_make_function() const */

undefined8 ScriptLanguage::can_make_function(void)

{
  return 1;
}



/* ScriptLanguage::open_in_external_editor(Ref<Script> const&, int, int) */

undefined8 ScriptLanguage::open_in_external_editor(Ref *param_1,int param_2,int param_3)

{
  return 2;
}



/* ScriptLanguage::overrides_external_editor() */

undefined8 ScriptLanguage::overrides_external_editor(void)

{
  return 0;
}



/* ScriptLanguage::preferred_file_name_casing() const */

undefined8 ScriptLanguage::preferred_file_name_casing(void)

{
  return 2;
}



/* ScriptLanguage::complete_code(String const&, String const&, Object*,
   List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*, bool&, String&) */

undefined8
ScriptLanguage::complete_code
          (String *param_1,String *param_2,Object *param_3,List *param_4,bool *param_5,
          String *param_6)

{
  return 2;
}



/* ScriptLanguage::lookup_code(String const&, String const&, String const&, Object*,
   ScriptLanguage::LookupResult&) */

undefined8
ScriptLanguage::lookup_code
          (String *param_1,String *param_2,String *param_3,Object *param_4,LookupResult *param_5)

{
  return 2;
}



/* ScriptLanguage::add_named_global_constant(StringName const&, Variant const&) */

void ScriptLanguage::add_named_global_constant(StringName *param_1,Variant_conflict *param_2)

{
  return;
}



/* ScriptLanguage::remove_named_global_constant(StringName const&) */

void ScriptLanguage::remove_named_global_constant(StringName *param_1)

{
  return;
}



/* ScriptLanguage::thread_enter() */

void ScriptLanguage::thread_enter(void)

{
  return;
}



/* ScriptLanguage::thread_exit() */

void ScriptLanguage::thread_exit(void)

{
  return;
}



/* ScriptLanguage::debug_get_stack_level_instance(int) */

undefined8 ScriptLanguage::debug_get_stack_level_instance(int param_1)

{
  return 0;
}



/* ScriptLanguage::debug_get_current_stack_info() */

ScriptLanguage * __thiscall ScriptLanguage::debug_get_current_stack_info(ScriptLanguage *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* ScriptLanguage::handles_global_class_type(String const&) const */

undefined8 ScriptLanguage::handles_global_class_type(String *param_1)

{
  return 0;
}



/* ScriptLanguage::get_global_class_name(String const&, String*, String*, bool*, bool*) const */

String * ScriptLanguage::get_global_class_name
                   (String *param_1,String *param_2,String *param_3,bool *param_4,bool *param_5)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* PlaceHolderScriptInstance::validate_property(PropertyInfo&) const */

void PlaceHolderScriptInstance::validate_property(PropertyInfo *param_1)

{
  return;
}



/* PlaceHolderScriptInstance::property_can_revert(StringName const&) const */

undefined8 PlaceHolderScriptInstance::property_can_revert(StringName *param_1)

{
  return 0;
}



/* PlaceHolderScriptInstance::property_get_revert(StringName const&, Variant&) const */

undefined8
PlaceHolderScriptInstance::property_get_revert(StringName *param_1,Variant_conflict *param_2)

{
  return 0;
}



/* PlaceHolderScriptInstance::get_method_argument_count(StringName const&, bool*) const */

undefined8 __thiscall
PlaceHolderScriptInstance::get_method_argument_count
          (PlaceHolderScriptInstance *this,StringName *param_1,bool *param_2)

{
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  return 0;
}



/* PlaceHolderScriptInstance::notification(int, bool) */

void PlaceHolderScriptInstance::notification(int param_1,bool param_2)

{
  return;
}



/* PlaceHolderScriptInstance::get_language() */

undefined8 __thiscall PlaceHolderScriptInstance::get_language(PlaceHolderScriptInstance *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* PlaceHolderScriptInstance::get_owner() */

undefined8 __thiscall PlaceHolderScriptInstance::get_owner(PlaceHolderScriptInstance *this)

{
  return *(undefined8 *)(this + 8);
}



/* PlaceHolderScriptInstance::is_placeholder() const */

undefined8 PlaceHolderScriptInstance::is_placeholder(void)

{
  return 1;
}



/* PlaceHolderScriptInstance::get_rpc_config() const */

PlaceHolderScriptInstance * __thiscall
PlaceHolderScriptInstance::get_rpc_config(PlaceHolderScriptInstance *this)

{
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* CallableCustomMethodPointer<Script, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Script,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Script,void> *this)

{
  return;
}



/* MethodBindTRC<Variant>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Variant>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindTRC<Variant>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Variant>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Variant,StringName_const&>::_gen_argument_type
          (MethodBindTR<Variant,StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindTR<Variant, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Variant,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTR<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<TypedArray<Dictionary>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<TypedArray<Dictionary>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTR<TypedArray<Dictionary>>::get_argument_meta(int) const */

undefined8 MethodBindTR<TypedArray<Dictionary>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,StringName_const&>::_gen_argument_type
          (MethodBindTRC<bool,StringName_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x14U) + 1;
}



/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<StringName>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1)

{
  return 0x15;
}



/* MethodBindTRC<StringName>::get_argument_meta(int) const */

undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<Script>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Script>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Script>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Script>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Error,bool>::_gen_argument_type(MethodBindTR<Error,bool> *this,int param_1)

{
  return 2 - (uint)(param_1 == 0);
}



/* MethodBindTR<Error, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, Object const*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Object_const*>::_gen_argument_type
          (MethodBindTRC<bool,Object_const*> *this,int param_1)

{
  return (-(param_1 == 0) & 0x17U) + 1;
}



/* MethodBindTRC<bool, Object const*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Object_const*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Script, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Script,void>::get_argument_count
          (CallableCustomMethodPointer<Script,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* ScriptCodeCompletionCache::~ScriptCodeCompletionCache() */

void __thiscall
ScriptCodeCompletionCache::~ScriptCodeCompletionCache(ScriptCodeCompletionCache *this)

{
  operator_delete(this,8);
  return;
}



/* CallableCustomMethodPointer<Script, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Script,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Script,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindTRC<bool, Object const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Object_const*>::~MethodBindTRC(MethodBindTRC<bool,Object_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Object const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Object_const*>::~MethodBindTRC(MethodBindTRC<bool,Object_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121040;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121040;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001210a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001210a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121100;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121100;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Script>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Script>>::~MethodBindTRC(MethodBindTRC<Ref<Script>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121160;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Script>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Script>>::~MethodBindTRC(MethodBindTRC<Ref<Script>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121160;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001211c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001211c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121220;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121220;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121280;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121280;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001212e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001212e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121340;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121340;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120f80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120f80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001213a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001213a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC0;
LAB_0010e944:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_0010e8f0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_0010e8f0;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010e996:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_0010e8f0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_0010e8f0;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC0;
            uVar4 = 0;
            goto LAB_0010e996;
          }
          uVar8 = 0;
          pbVar14 = &_LC0;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_0010e944;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_0010e8f0;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_0010e8f0;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_0010e918;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_0010e8f0;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_0010e8f0;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_0010e918:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_0010e8f0:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_0010ed1d;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_0010eb1a;
LAB_0010ed1d:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC0;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC0;
          goto LAB_0010eb9a;
        }
LAB_0010ebfa:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_0010eb10;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_0010eb10;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_0010eb10;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_0010eb10;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_0010ebfa;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_0010eb10;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_0010eb10;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_0010eb10;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_0010eb45;
LAB_0010eb94:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010eb9a:
          if (bVar5 == 0) goto LAB_0010eb10;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_0010eb10;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_0010eb10;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010eb10;
          }
        }
      }
LAB_0010eae0:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC0;
      if (pbVar14 != (byte *)0x0) goto LAB_0010eb94;
LAB_0010eb45:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_0010eb10;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_0010eb10;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_0010eb10;
        }
        goto LAB_0010eae0;
      }
    }
LAB_0010eb10:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_0010eb1a:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_0010ede0:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x0010ee91;
        uVar7 = 0;
        pbVar11 = &_LC0;
LAB_0010ee1c:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_0010efab;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010efab;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010efab;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010efab;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_0010eebc;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_0010ee1c;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010efab;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010efab;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010efab;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010efab;
        }
      }
      if (param_1 == 1) goto LAB_0010ef80;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC0;
LAB_0010eebc:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_0010ef2f;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_0010efab;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_0010efab;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010efab;
      }
      goto LAB_0010ef10;
    }
  }
  goto LAB_0010efab;
code_r0x0010ee91:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC0;
  uVar8 = 0;
LAB_0010ef2f:
  if (bVar4 == 0) goto LAB_0010efab;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_0010efab;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_0010efab;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010efab;
  }
LAB_0010ef10:
  if (param_1 == 1) {
LAB_0010ef80:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_0010efab:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_0010ede0;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_0010f180;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC0;
LAB_0010f134:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_0010f0d0;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_0010f0d0;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_0010f180;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010f1a7:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_0010f0d0;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_0010f0d0;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar9 = 0;
        goto LAB_0010f1a7;
      }
      uVar8 = 0;
      pbVar10 = &_LC0;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_0010f134;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_0010f0d0;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_0010f0d0;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_0010f180;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_0010f0d0:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_0010f0d0;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_0010f180:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_0010fb90:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_0010f45e:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_0010f464;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_0010f759;
LAB_0010f5b2:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_0010f3e2:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_0010f4d0:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x0010f518;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x0010f518;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_0010f448;
        }
        goto LAB_0010fb90;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x0010f518;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x0010f518;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_0010f448;
      }
      if (lVar9 == 0) goto LAB_0010f7b1;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_0010f464:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_0010f5a9;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_0010fa96;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_0010f740:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0010fa9f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_0010f926:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_0010f988:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_0010f4d0;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_0010f2c2:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x0010f518;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x0010f518;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_0010f448:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_0010f45e;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_0010f848:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_0010fb03;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_0010f740;
        }
LAB_0010fa96:
        if (pbVar15 != (byte *)0x0) goto LAB_0010f988;
        goto LAB_0010fa9f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_0010fb61;
      }
LAB_0010f7b1:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_0010f5a9:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_0010f5b2;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_0010f3e2;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_0010f2c2;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_0010f6b8:
            pbVar16 = (byte *)0x0;
            goto joined_r0x0010f518;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_0010f6b8;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_0010f448;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_0010f848;
      }
LAB_0010fb61:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_0010fb03:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_0010f740;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_0010f926;
  }
LAB_0010f759:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x0010f518:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_0010f607;
LAB_0010f534:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_0010f6d0;
    }
LAB_0010fb9e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010f8be;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_0010f534;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_0010fa39;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_0010f6d0;
        }
LAB_0010fa39:
        if (pbVar16 == (byte *)0x0) goto LAB_0010fa3e;
        goto LAB_0010f9e6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_0010f607:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0010fb9e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_0010f6d0:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_0010fa3e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010f8be:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_0010f9e6:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x0010fc47:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_0010fd78;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC0;
LAB_0010fcfe:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_0010fcc8;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_0010fcc8;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_0010fd78;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010ffc5:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_0010fcc8;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_0010fcc8;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC0;
        goto LAB_0010ffc5;
      }
      uVar9 = 0;
      pbVar13 = &_LC0;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_0010fcfe;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_0010fcc8;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0010fcc8;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_0010fd78;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_0010fcc8;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_0010fcc8;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_0010fd78;
LAB_0010fcc8:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_0010fd78:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_0010ff78;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC0;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_0010fe4c:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_0010ff78;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_0010ff78;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_0010ff78;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0010ff78;
          }
        }
        else {
LAB_0010feab:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010feb1:
          if (bVar6 == 0) goto LAB_0010ff78;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_0010ff78;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_0010ff78;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010ff78;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC0;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC0;
            goto LAB_0010feb1;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_0010fe4c;
            goto LAB_0010feab;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_0010ff78;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_0010ff78;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_0010ff78;
              }
              goto LAB_0010fe10;
            }
            goto LAB_0010ff78;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_0010ff78;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_0010ff78;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_0010ff78;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_0010ff78;
        }
      }
LAB_0010fe10:
      if (lVar10 == param_1) goto LAB_0010ff50;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_0010fcd6:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x0010fc47;
LAB_0010ff50:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010ff78:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_0010fcd6;
}



/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Pair<int,int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Script::get_script_method_argument_count(StringName const&, bool*) const [clone .cold] */

void Script::get_script_method_argument_count(StringName *param_1,bool *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<Script, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Script,void>::get_object(CallableCustomMethodPointer<Script,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001106dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001106dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001106dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_0011088c;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_001107e0:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC0;
LAB_001108f4:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_00110860;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_00110860;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_00110956:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_00110860;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_00110860;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC0;
        uVar11 = 0;
        goto LAB_00110956;
      }
      uVar10 = 0;
      pbVar14 = &_LC0;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_001108f4;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_00110860;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_00110860;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_00110874;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_00110860;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_00110860;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_00110874;
LAB_00110860:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_00110874:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x00110881;
  goto LAB_001107e0;
code_r0x00110881:
  if (lVar16 < 2) {
    return;
  }
LAB_0011088c:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* PlaceHolderScriptInstance::get_script() const */

void PlaceHolderScriptInstance::get_script(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x80) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x80);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ScriptLanguage::validate_path(String const&) const */

String * ScriptLanguage::validate_path(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::get_save_class() const */

Script * __thiscall Script::get_save_class(Script *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::_get_class_namev() const */

undefined8 * ScriptLanguage::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00110ca3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110ca3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ScriptLanguage");
      goto LAB_00110d0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ScriptLanguage");
LAB_00110d0e:
  return &_get_class_namev()::_class_name_static;
}



/* Script::_get_class_namev() const */

undefined8 * Script::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00110d83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110d83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Script");
      goto LAB_00110dee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Script");
LAB_00110dee:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00111733:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_00110e83:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_00110f0c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_00110fa4:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x00110ff0;
LAB_00111486:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00111496;
            goto LAB_00111633;
          }
LAB_001116a8:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_001115bf:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00111671;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_0011170c;
  goto LAB_00111733;
code_r0x00110ff0:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0011102c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_001110b2:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_00111133:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_001111b1:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_00111227:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_001113bc;
                                      goto LAB_00111227;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x001114d0;
                                goto LAB_001111b1;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_001113bc:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0011144b;
                          goto LAB_00111133;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x001114d0:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x00111510;
                    goto LAB_001110b2;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0011144b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00111486;
              goto LAB_0011102c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x00111510:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_001115bf;
        goto LAB_00110fa4;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00111633:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_00110f0c;
    goto joined_r0x00111671;
  }
LAB_00111496:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_001116a8;
  goto LAB_00110fa4;
joined_r0x00111671:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_0011170c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00110e83;
}



/* HashMap<StringName, ScriptServer::GlobalScriptClass, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ScriptServer::GlobalScriptClass> > >::~HashMap() */

void __thiscall
HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
::~HashMap(HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          bVar6 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          if ((bVar6) && (*(long *)((long)pvVar5 + 0x28) != 0)) {
            StringName::unref();
          }
          if (*(long *)((long)pvVar5 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x20);
              *(undefined8 *)((long)pvVar5 + 0x20) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') &&
             (((*(long *)((long)pvVar5 + 0x18) == 0 ||
               (StringName::unref(), StringName::configured != '\0')) &&
              (*(long *)((long)pvVar5 + 0x10) != 0)))) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* Script::get_class() const */

void Script::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::get_class() const */

void ScriptLanguage::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::is_class(String const&) const */

undefined8 __thiscall ScriptLanguage::is_class(ScriptLanguage *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00111adf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00111adf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00111b93;
  }
  cVar6 = String::operator==(param_1,"ScriptLanguage");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00111b93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00111b93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Variant>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar1 = 0;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x20006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_28 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Dictionary>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<TypedArray<Dictionary>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x1b);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_38);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(puVar3 + 8),false);
      if (*(long *)(puVar3 + 4) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar3 + 4) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x00111e7c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x00111e7c:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00111ffc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111ffc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011217c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011217c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<StringName>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x15;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001122fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001122fc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Script>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Script>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Script";
  local_40 = 6;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001123f0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001123f0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011260c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011260c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00112ddf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00112ddf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00112e93;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00112e93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00112e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::is_class(String const&) const */

undefined8 __thiscall Script::is_class(Script *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011304f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011304f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00113103;
  }
  cVar6 = String::operator==(param_1,"Script");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00113103;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_00113248;
    }
  }
LAB_00113103:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::_notificationv(int, bool) */

void Script::_notificationv(int param_1,bool param_2)

{
  undefined3 in_register_00000031;
  undefined4 in_register_0000003c;
  
  _notification((Script *)CONCAT44(in_register_0000003c,param_1),
                CONCAT31(in_register_00000031,param_2));
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ScriptLanguage*, HashMapHasherDefault, HashMapComparatorDefault<ScriptLanguage*>
   >::insert(ScriptLanguage* const&) */

undefined1  [16]
HashSet<ScriptLanguage*,HashMapHasherDefault,HashMapComparatorDefault<ScriptLanguage*>>::insert
          (ScriptLanguage **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ScriptLanguage *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (ScriptLanguage *)*in_RSI;
  if (local_88 == (ScriptLanguage *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (ScriptLanguage *)*in_RSI;
    if (local_88 != (ScriptLanguage *)0x0) goto LAB_0011368f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011368f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00113b31;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC37 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (ScriptLanguage *)*in_RSI;
      goto LAB_00113b31;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (ScriptLanguage *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00113b31:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_00113db0;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_00113db0:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00113f2c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00113f2c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00114378;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC37) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00114255;
LAB_001143b6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00114378;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_001143b6;
LAB_00114255:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00114378:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001146e0) */
/* WARNING: Removing unreachable block (ram,0x00114875) */
/* WARNING: Removing unreachable block (ram,0x00114881) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant_conflict local_88 [24];
  Variant_conflict local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant_conflict *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant_conflict *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001149d8) */
/* WARNING: Removing unreachable block (ram,0x00114b6d) */
/* WARNING: Removing unreachable block (ram,0x00114b79) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  Variant_conflict *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant_conflict *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant_conflict *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant_conflict *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x114bc7);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC45;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00114c6a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC45;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00114c6a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Script, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Script,void>::call
          (CallableCustomMethodPointer<Script,void> *this,Variant_conflict **param_1,int param_2,
          Variant_conflict *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00114fdf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00114fdf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001150a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114fdf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001150a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ScriptServer::GlobalScriptClass, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ScriptServer::GlobalScriptClass> > >::operator[](StringName const&) */

StringName * __thiscall
HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
::operator[](HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  long in_FS_OFFSET;
  bool bVar55;
  CowData<char32_t> *local_c0;
  StringName *local_b8;
  undefined1 local_98 [16];
  long local_88;
  undefined2 local_80;
  undefined1 local_78 [16];
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined2 local_48;
  long local_40;
  
  lVar54 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar54 == 0) {
LAB_001158eb:
    local_80 = 0;
    local_88 = 0;
    local_98 = (undefined1  [16])0x0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
      goto LAB_00115291;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_001153e7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011529d;
LAB_0011540d:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b8 = (StringName *)0x18;
      goto LAB_00115862;
    }
    uVar39 = (ulong)(uVar37 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      uVar39 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar37 != 0) {
          lVar54 = *(long *)(this + 0x10);
          uVar53 = 0;
          uVar51 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar51);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar43;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar54 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar52 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar52 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar43;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((iVar44 + uVar51) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar43;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar50 = uVar40;
            if (uVar36 < uVar53) {
              *puVar1 = uVar37;
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar50 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar52;
              uVar53 = uVar36;
            }
            uVar53 = uVar53 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar43;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar54 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar50;
            uVar52 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar38 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_88 = 0;
      local_80 = 0;
      local_98 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar54 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      uVar52 = SUB164(auVar4 * auVar20,8);
      if (uVar51 != 0) {
        uVar53 = 0;
        do {
          if ((uVar38 == uVar51) &&
             (*(long *)(*(long *)(lVar54 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_b8 = (StringName *)(*(long *)(lVar54 + (ulong)uVar52 * 8) + 0x18);
            goto LAB_00115234;
          }
          uVar53 = uVar53 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar52 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar52 = SUB164(auVar5 * auVar21,8);
        } while ((uVar51 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar51 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar52 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar53 <= SUB164(auVar7 * auVar23,8)));
      }
      local_80 = 0;
      local_88 = 0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_98 = (undefined1  [16])0x0;
      if (lVar54 == 0) goto LAB_001158eb;
    }
LAB_00115291:
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
LAB_0011529d:
      uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      uVar43 = CONCAT44(0,uVar37);
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      uVar53 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar38 * lVar54;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar43;
      lVar46 = SUB168(auVar8 * auVar24,8);
      uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar52 = SUB164(auVar8 * auVar24,8);
      if (uVar51 != 0) {
        do {
          if ((uVar51 == uVar38) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1)) {
            lVar54 = *(long *)(*(long *)(this + 8) + (ulong)uVar52 * 8);
            StringName::operator=((StringName *)(lVar54 + 0x18),(StringName *)local_98);
            if (*(long *)(lVar54 + 0x20) != local_98._8_8_) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(lVar54 + 0x20),(CowData *)(local_98 + 8));
            }
            StringName::operator=((StringName *)(lVar54 + 0x28),(StringName *)&local_88);
            *(undefined2 *)(lVar54 + 0x30) = local_80;
            local_b8 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar52 * 8) + 0x18);
            goto LAB_00115862;
          }
          uVar53 = uVar53 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar52 + 1) * lVar54;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar43;
          lVar46 = SUB168(auVar9 * auVar25,8);
          uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar52 = SUB164(auVar9 * auVar25,8);
        } while ((uVar51 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar51 * lVar54, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar37 + uVar52) - SUB164(auVar10 * auVar26,8)) * lVar54,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar53 <= SUB164(auVar11 * auVar27,8)));
      }
      iVar44 = *(int *)(this + 0x2c);
    }
LAB_001153e7:
    if ((float)uVar39 * __LC37 < (float)(iVar44 + 1)) goto LAB_0011540d;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  StringName::StringName((StringName *)&local_60,(StringName *)local_98);
  local_58 = 0;
  if (local_98._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(local_98 + 8));
  }
  StringName::StringName((StringName *)&local_50,(StringName *)&local_88);
  local_48 = local_80;
  puVar41 = (undefined8 *)operator_new(0x38,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_b8 = (StringName *)(puVar41 + 3);
  StringName::StringName(local_b8,(StringName *)&local_60);
  puVar41[4] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 4),(CowData *)&local_58);
  }
  StringName::StringName((StringName *)(puVar41 + 5),(StringName *)&local_50);
  bVar55 = StringName::configured != '\0';
  *(undefined2 *)(puVar41 + 6) = local_48;
  if ((bVar55) && (local_50 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_60 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_68 != 0)))
     ) {
    StringName::unref();
  }
  puVar49 = *(undefined8 **)(this + 0x20);
  if (puVar49 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    *puVar49 = puVar41;
    puVar41[1] = puVar49;
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar54 = *(long *)(this + 0x10);
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar52 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar54 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar51 = *puVar1;
  while (uVar51 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar51 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((iVar44 + uVar38) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar49 = puVar41;
    if (uVar37 < uVar52) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar51;
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      puVar49 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar52 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar52 = uVar52 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar54 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar49;
    uVar51 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00115862:
  local_c0 = (CowData<char32_t> *)(local_98 + 8);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c0);
  if ((StringName::configured != '\0') && (local_98._0_8_ != 0)) {
    StringName::unref();
  }
LAB_00115234:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00115c15:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115c15;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00115c37;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00115c37:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptLanguage::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void ScriptLanguage::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "ScriptLanguage";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScriptLanguage";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00115fad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115fad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00115fcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00115fcf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ScriptLanguage",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0011635d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011635d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011637f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011637f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Script::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Script::_get_property_listv(Script *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Script";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Script";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00116738:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116738;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011675a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011675a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Script",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar5;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x80) == plVar5) {
      lVar4 = *(long *)(this_00 + 0x70);
      lVar7 = *(long *)(this_00 + 0x78);
      *plVar5 = lVar4;
      if (this_00 == (CowData<char32_t> *)plVar5[1]) {
        plVar5[1] = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x70) = lVar4;
        lVar4 = *(long *)(this_00 + 0x70);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x78) = lVar7;
      }
      if (*(long *)(this_00 + 0x68) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this_00 + 0x68) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(this_00 + 0x68);
          *(undefined8 *)(this_00 + 0x68) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*(long *)(this_00 + 0x50) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this_00 + 0x50) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          piVar2 = *(int **)(this_00 + 0x50);
          if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar4 = *(long *)(piVar2 + -2);
          *(undefined8 *)(this_00 + 0x50) = 0;
          lVar7 = 0;
          piVar6 = piVar2;
          if (lVar4 != 0) {
            do {
              if (Variant::needs_deinit[*piVar6] != '\0') {
                Variant::_clear_internal();
              }
              lVar7 = lVar7 + 1;
              piVar6 = piVar6 + 6;
            } while (lVar4 != lVar7);
          }
          Memory::free_static(piVar2 + -4,false);
        }
      }
      List<PropertyInfo,DefaultAllocator>::~List
                ((List<PropertyInfo,DefaultAllocator> *)(this_00 + 0x40));
      CowData<char32_t>::_unref(this_00 + 0x28);
      if ((StringName::configured != '\0') && (*(long *)(this_00 + 0x18) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* MethodBindTR<Error, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX != 0) {
    local_a0 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_a0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_98,(String *)&local_a0)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
    *puVar6 = 2;
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 0x10006;
    *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    local_a8 = 0;
    local_b0 = 0;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    goto LAB_00116dcf;
  }
  local_98 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = "";
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_00116e08:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116e08;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar5 = local_90._8_8_;
  uVar4 = local_90._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_90._8_8_;
  local_90 = auVar3 << 0x40;
  *puVar6 = (undefined4)local_98;
  *(undefined8 *)(puVar6 + 2) = uVar4;
  *(undefined8 *)(puVar6 + 4) = uVar5;
  puVar6[6] = (undefined4)local_80;
  *(long *)(puVar6 + 8) = local_78;
  puVar6[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_00116dcf:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Variant,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX != 0) {
    *puVar6 = 0;
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 0x20006;
    *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_98 = 0;
    local_a0 = 0;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
      StringName::unref();
    }
    goto LAB_001170fd;
  }
  local_98 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_00117138:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117138;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar5 = local_90._8_8_;
  uVar4 = local_90._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_90._8_8_;
  local_90 = auVar3 << 0x40;
  *puVar6 = (undefined4)local_98;
  *(undefined8 *)(puVar6 + 2) = uVar4;
  *(undefined8 *)(puVar6 + 4) = uVar5;
  puVar6[6] = (undefined4)local_80;
  *(long *)(puVar6 + 8) = local_78;
  puVar6[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_001170fd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindTRC<bool, Object const*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Object_const*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_68 = "Object";
    local_78 = 0;
    local_a8 = 0;
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_a0);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00117540;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00117507:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00117507;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00117540:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_68 = &_LC0;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar7 = 1;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_00117777:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_00117777;
      StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
      if (*(undefined **)(puVar7 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar7 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_001177b2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_001177e8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001177e8;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_001177b2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00117999;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117a95:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117a95;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00117999:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* ScriptLanguage::_initialize_classv() */

void ScriptLanguage::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "ScriptLanguage";
    local_50 = 0;
    local_30 = 0xe;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00117be5;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00117be5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, bool>(bool (Script::*)() const) */

MethodBind * create_method_bind<Script,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120f80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, bool, Object const*>(bool (Script::*)(Object const*)
   const) */

MethodBind * create_method_bind<Script,bool,Object_const*>(_func_bool_Object_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120fe0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, String>(String (Script::*)() const) */

MethodBind * create_method_bind<Script,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121040;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, String const&>(void (Script::*)(String const&)) */

MethodBind * create_method_bind<Script,String_const&>(_func_void_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001210a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, Error, bool>(Error (Script::*)(bool)) */

MethodBind * create_method_bind<Script,Error,bool>(_func_Error_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121100;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, Ref<Script>>(Ref<Script> (Script::*)() const) */

MethodBind * create_method_bind<Script,Ref<Script>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121160;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, StringName>(StringName (Script::*)() const) */

MethodBind * create_method_bind<Script,StringName>(_func_StringName *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_StringName **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001211c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, bool, StringName const&>(bool (Script::*)(StringName
   const&) const) */

MethodBind * create_method_bind<Script,bool,StringName_const&>(_func_bool_StringName_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121220;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, TypedArray<Dictionary>>(TypedArray<Dictionary>
   (Script::*)()) */

MethodBind * create_method_bind<Script,TypedArray<Dictionary>>(_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121280;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, Dictionary>(Dictionary (Script::*)()) */

MethodBind * create_method_bind<Script,Dictionary>(_func_Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001212e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, Variant, StringName const&>(Variant (Script::*)(StringName
   const&)) */

MethodBind *
create_method_bind<Script,Variant,StringName_const&>(_func_Variant_StringName_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Variant_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121340;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Script, Variant>(Variant (Script::*)() const) */

MethodBind * create_method_bind<Script,Variant>(_func_Variant_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Variant_conflict **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001213a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Script";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_ref(CowData<StringName> const&) [clone .part.0] */

void __thiscall CowData<StringName>::_ref(CowData<StringName> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::operator[](HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  long local_48;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_001194b0:
    local_70 = 0;
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
      }
      else {
        memset(pvVar3,0,uVar45);
        memset(pvVar44,0,uVar50);
      }
LAB_00118f31:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_00118f3d:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar39 * lVar43;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar45;
        lVar48 = SUB168(auVar9 * auVar25,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
        uVar53 = SUB164(auVar9 * auVar25,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar48 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              if (puVar42[4] != 0) {
                CowData<StringName>::_ref((CowData<StringName> *)(puVar42 + 4),(CowData *)&local_70)
                ;
                puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              }
              goto LAB_0011941c;
            }
            uVar54 = uVar54 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            lVar48 = SUB168(auVar10 * auVar26,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
            uVar53 = SUB164(auVar10 * auVar26,8);
          } while ((uVar52 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar52 * lVar43, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar45, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar11 * auVar27,8)) * lVar43,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, uVar54 <= SUB164(auVar12 * auVar28,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0011903c;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011903c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00118f3d;
LAB_00119062:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011941c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar48;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar45;
          lVar47 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar53 * lVar48;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar45;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            lVar47 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar48;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_00118edc;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar48;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar48, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar48,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      local_70 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_001194b0;
      goto LAB_00118f31;
    }
    local_70 = 0;
    iVar46 = 0;
LAB_0011903c:
    if ((float)uVar40 * __LC37 < (float)(iVar46 + 1)) goto LAB_00119062;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_58,param_1);
  local_48 = 0;
  puVar42 = (undefined8 *)operator_new(0x28,"");
  *puVar42 = local_68._0_8_;
  puVar42[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)local_58);
  puVar42[4] = 0;
  if (local_48 != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)(puVar42 + 4),(CowData *)&local_48);
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_48);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011946d;
LAB_00119320:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00119320;
LAB_0011946d:
    uVar38 = StringName::get_empty_hash();
  }
  lVar43 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  uVar53 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar40 * lVar48;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar45;
  lVar49 = SUB168(auVar17 * auVar33,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar49 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar52 * lVar48;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar18 * auVar34,8)) * lVar48;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar49 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar45;
    lVar49 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar43 + lVar49 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar49 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011941c:
  CowData<StringName>::_unref((CowData<StringName> *)&local_70);
LAB_00118edc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::~HashMap() */

void __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::~HashMap(HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar3 + 0x20));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* Script::_initialize_classv() */

void Script::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00127010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00127008 != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Script";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00119dc0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_00119dc0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_00119c9a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_00119c9a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00119c67;
  }
  if (lVar8 == lVar5) {
LAB_00119d3b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00119c67:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00119d1b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_00119d3b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00119d1b:
  puVar7[-1] = param_1;
  return 0;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_resize_and_rehash
          (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant_conflict * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong __n;
  void *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  void *__s_00;
  ulong uVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  undefined8 *puVar41;
  long in_FS_OFFSET;
  uint local_c8;
  Variant_conflict *local_a8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar40 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar27);
  if (lVar40 == 0) {
LAB_0011a5a0:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar31 = uVar36 * 4;
    __n = uVar36 * 8;
    uVar30 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar30;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar36 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar36 != uVar31);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,__n);
      }
LAB_0011a1ce:
      iVar32 = *(int *)(this + 0x2c);
      if (iVar32 != 0) {
LAB_0011a1de:
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar31 = CONCAT44(0,uVar27);
        lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar28 = StringName::get_empty_hash();
        }
        else {
          uVar28 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar28 == 0) {
          uVar28 = 1;
        }
        uVar39 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar28 * lVar40;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar31;
        lVar34 = SUB168(auVar7 * auVar19,8);
        uVar38 = SUB164(auVar7 * auVar19,8);
        uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
        if (uVar37 != 0) {
          do {
            if ((uVar28 == uVar37) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar34 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant_conflict *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar38 * 8) + 0x18),
                                 (Variant_conflict *)local_98);
              local_a8 = (Variant_conflict *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar38 * 8) + 0x18);
              goto LAB_0011a500;
            }
            uVar39 = uVar39 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(uVar38 + 1) * lVar40;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar31;
            lVar34 = SUB168(auVar8 * auVar20,8);
            uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
            uVar38 = SUB164(auVar8 * auVar20,8);
          } while ((uVar37 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar40, auVar21._8_8_ = 0,
                  auVar21._0_8_ = uVar31, auVar10._8_8_ = 0,
                  auVar10._0_8_ = (ulong)((uVar27 + uVar38) - SUB164(auVar9 * auVar21,8)) * lVar40,
                  auVar22._8_8_ = 0, auVar22._0_8_ = uVar31, uVar39 <= SUB164(auVar10 * auVar22,8)))
          ;
        }
        iVar32 = *(int *)(this + 0x2c);
      }
      goto LAB_0011a305;
    }
    iVar32 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011a305;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011a1de;
LAB_0011a327:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a8 = (Variant_conflict *)0x18;
      goto LAB_0011a500;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar28 = StringName::get_empty_hash();
        lVar40 = *(long *)(this + 8);
      }
      else {
        uVar28 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar34;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar36;
      lVar33 = SUB168(auVar3 * auVar15,8);
      uVar38 = SUB164(auVar3 * auVar15,8);
      uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar33 * 4);
      if (uVar37 != 0) {
        uVar39 = 0;
        do {
          if ((uVar28 == uVar37) &&
             (*(long *)(*(long *)(lVar40 + lVar33 * 8) + 0x10) == *(long *)param_1)) {
            local_a8 = (Variant_conflict *)(*(long *)(lVar40 + (ulong)uVar38 * 8) + 0x18);
            goto LAB_0011a174;
          }
          uVar39 = uVar39 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar38 + 1) * lVar34;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar36;
          lVar33 = SUB168(auVar4 * auVar16,8);
          uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar33 * 4);
          uVar38 = SUB164(auVar4 * auVar16,8);
        } while ((uVar37 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar37 * lVar34, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar36, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar27) - SUB164(auVar5 * auVar17,8)) * lVar34,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar36, uVar39 <= SUB164(auVar6 * auVar18,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar36 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar40 == 0) goto LAB_0011a5a0;
      goto LAB_0011a1ce;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar32 = 0;
LAB_0011a305:
    if ((float)uVar36 * __LC37 < (float)(iVar32 + 1)) goto LAB_0011a327;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant_conflict *)local_60,(Variant_conflict *)local_98);
  puVar29 = (undefined8 *)operator_new(0x30,"");
  *puVar29 = local_78._0_8_;
  puVar29[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar29 + 2),(StringName *)&local_68);
  local_a8 = (Variant_conflict *)(puVar29 + 3);
  Variant::Variant(local_a8,(Variant_conflict *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar29;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar29;
    puVar29[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar29;
  if (*(long *)param_1 == 0) {
    uVar27 = StringName::get_empty_hash();
  }
  else {
    uVar27 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar36 = (ulong)uVar27;
  uVar38 = 0;
  lVar40 = *(long *)(this + 0x10);
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar28);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar36 * lVar34;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar31;
  lVar35 = SUB168(auVar11 * auVar23,8);
  lVar33 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar40 + lVar35 * 4);
  iVar32 = SUB164(auVar11 * auVar23,8);
  uVar37 = *puVar1;
  while (uVar37 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar37 * lVar34;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar31;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar28 + iVar32) - SUB164(auVar12 * auVar24,8)) * lVar34;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    local_c8 = SUB164(auVar13 * auVar25,8);
    puVar41 = puVar29;
    if (local_c8 < uVar38) {
      puVar2 = (undefined8 *)(lVar33 + lVar35 * 8);
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar37;
      puVar41 = (undefined8 *)*puVar2;
      *puVar2 = puVar29;
      uVar38 = local_c8;
    }
    uVar27 = (uint)uVar36;
    uVar38 = uVar38 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar34;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    lVar35 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar40 + lVar35 * 4);
    iVar32 = SUB164(auVar14 * auVar26,8);
    puVar29 = puVar41;
    uVar37 = *puVar1;
  }
  *(undefined8 **)(lVar33 + lVar35 * 8) = puVar29;
  *puVar1 = uVar27;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a500:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011a174:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */

StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant_conflict *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  Variant_conflict *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  long in_FS_OFFSET;
  undefined8 *local_90;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0011a712;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011a809;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011a71e;
LAB_0011a82b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined8 *)0x0;
      goto LAB_0011a9e3;
    }
    _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011a712:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0011a71e:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            Variant::operator=((Variant_conflict *)
                               (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8) + 0x18),in_RCX
                              );
            local_90 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            goto LAB_0011a9e3;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_0011a809:
    if ((float)uVar23 * __LC37 < (float)(iVar28 + 1)) goto LAB_0011a82b;
  }
  StringName::StringName((StringName *)&local_68,pSVar29);
  Variant::Variant((Variant_conflict *)local_60,in_RCX);
  local_90 = (undefined8 *)operator_new(0x30,"");
  *local_90 = 0;
  local_90[1] = 0;
  StringName::StringName((StringName *)(local_90 + 2),(StringName *)&local_68);
  Variant::Variant((Variant_conflict *)(local_90 + 3),(Variant_conflict *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_90;
    *(undefined8 **)(param_2 + 0x20) = local_90;
LAB_0011a902:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0011a90f;
LAB_0011aa45:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = local_90;
      local_90[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = local_90;
      goto LAB_0011a902;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_90;
    *local_90 = *(undefined8 *)(param_2 + 0x18);
    lVar25 = *(long *)pSVar29;
    *(undefined8 **)(param_2 + 0x18) = local_90;
    if (lVar25 == 0) goto LAB_0011aa45;
LAB_0011a90f:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  puVar22 = local_90;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar28 + uVar3) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    puVar36 = puVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar2 = (undefined8 *)(lVar4 + lVar31 * 8);
      puVar36 = (undefined8 *)*puVar2;
      *puVar2 = puVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    puVar22 = puVar36;
    uVar24 = *puVar1;
  }
  *(undefined8 **)(lVar4 + lVar31 * 8) = puVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011a9e3:
  *(undefined8 **)param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011acb8) */
/* WARNING: Removing unreachable block (ram,0x0011ae4d) */
/* WARNING: Removing unreachable block (ram,0x0011ae59) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant_conflict *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant_conflict *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant_conflict *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant_conflict *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Variant>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Variant>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b040;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant_conflict **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011b040:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Variant>::validated_call
          (MethodBindTRC<Variant> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar1 = *(long **)(param_1 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b461;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
              (param_1,*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60),param_3);
    return;
  }
LAB_0011b461:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Variant>::ptrcall
          (MethodBindTRC<Variant> *this,Object *param_1,void **param_2,void *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar1 = *(long **)(param_1 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b631;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    call_with_validated_variant_args_retc_helper<__UnexistingClass,Variant>
              (param_1,*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60),param_3);
    return;
  }
LAB_0011b631:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::validated_call
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b6ad;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant_conflict *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Variant::operator=(param_3,(Variant_conflict *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011b6ad:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::ptrcall
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b8bb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant_conflict *)local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Variant::operator=((Variant_conflict *)param_3,(Variant_conflict *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011b8bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bb30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant_conflict **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Dictionary *)&local_58);
      Variant::Variant((Variant_conflict *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011bb30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary>::validated_call
          (MethodBindTR<Dictionary> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant_conflict **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bd59;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011bd59:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary>::ptrcall
          (MethodBindTR<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bf2a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011bf2a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Dictionary>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<TypedArray<Dictionary>>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c170;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant_conflict **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant_conflict *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011c170:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<bool,StringName_const&>::validated_call
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Variant_conflict VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c389;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant_conflict)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar1;
LAB_0011c389:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,StringName_const&>::ptrcall
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c565;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0011c565:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<StringName>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  bool bVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c7d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant_conflict **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((StringName *)&local_58);
      Variant::Variant((Variant_conflict *)local_48,(StringName *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar5 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if ((bVar5) && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011c7d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName>::validated_call
          (MethodBindTRC<StringName> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant_conflict **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ca0a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
    StringName::unref();
  }
LAB_0011ca0a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName>::ptrcall
          (MethodBindTRC<StringName> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cbeb;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
    StringName::unref();
  }
LAB_0011cbeb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,bool>::validated_call
          (MethodBindTR<Error,bool> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cdac;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011cdac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,bool>::ptrcall
          (MethodBindTR<Error,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cf91;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2 != '\0');
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011cf91:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call
               (Object *param_1,Variant_conflict **param_2,Variant_conflict *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant_conflict *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant_conflict **)0x0) && (param_2[1] != (Variant_conflict *)0x0)) &&
     (param_2[1][0x2e] != (Variant_conflict)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant_conflict *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant_conflict *)0x0) {
        pVVar1 = (Variant_conflict *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d2f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011d17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011d2f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d4d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011d359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011d4d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Variant_conflict *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d5b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant_conflict **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant_conflict *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011d5b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Variant_conflict **ppVVar1;
  Variant_conflict **ppVVar2;
  code *pcVar3;
  long *plVar4;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant_conflict **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d811;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant_conflict ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant_conflict **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant_conflict *)0x0) {
      local_48 = (Variant_conflict **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_0011d811:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d9fe;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0011d9fe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant_conflict *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dc20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant_conflict **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant_conflict *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011dc20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Variant_conflict VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011de32;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant_conflict)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011de32:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dfe1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0011dfe1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Dictionary>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<TypedArray<Dictionary>>::validated_call
          (MethodBindTR<TypedArray<Dictionary>> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant_conflict **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e1a9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011e1a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Dictionary>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<TypedArray<Dictionary>>::ptrcall
          (MethodBindTR<TypedArray<Dictionary>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e37a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011e37a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Script>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Script>>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant_conflict *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11aea8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e600;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant_conflict *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant_conflict **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant_conflict *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011e600:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Script>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Script>>::ptrcall
          (MethodBindTRC<Ref<Script>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11aea8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e886;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011e886;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011e8c9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011e8c9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011e8c9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011e886;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011e886:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Object const*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,Object_const*>::validated_call
          (MethodBindTRC<bool,Object_const*> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Variant_conflict VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ead9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant_conflict)
          (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  param_3[8] = VVar1;
LAB_0011ead9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Object const*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Object_const*>::ptrcall
          (MethodBindTRC<bool,Object_const*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ecbd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  plVar3 = (long *)*param_2;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),plVar3);
  *(undefined1 *)param_3 = uVar1;
LAB_0011ecbd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,StringName_const&>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar11;
  Variant_conflict *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011efa0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_0011eff0;
LAB_0011efe0:
      pVVar11 = *(Variant_conflict **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011eff0:
        uVar7 = 4;
        goto LAB_0011ef95;
      }
      if (in_R8D == 1) goto LAB_0011efe0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant_conflict **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC176;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant_conflict *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant_conflict *)((long)plVar10 + (long)pVVar1),
                                     (Variant_conflict *)&local_68);
    Variant::Variant((Variant_conflict *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar6 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar6) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0011ef95:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011efa0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Variant,StringName_const&>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar10;
  Variant_conflict *pVVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f348;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_0011f390;
LAB_0011f380:
      pVVar10 = *(Variant_conflict **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f390:
        uVar6 = 4;
        goto LAB_0011f33d;
      }
      if (in_R8D == 1) goto LAB_0011f380;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant_conflict **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC176;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant_conflict *)&local_68);
    (*(code *)pVVar11)(local_58,(Variant_conflict *)((long)plVar9 + (long)pVVar1),
                       (Variant_conflict *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar12 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar12) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0011f33d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011f348:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,bool>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar12;
  Variant_conflict *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f6d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_0011f710;
LAB_0011f700:
      pVVar12 = *(Variant_conflict **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f710:
        uVar8 = 4;
        goto LAB_0011f6c5;
      }
      if (in_R8D == 1) goto LAB_0011f700;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant_conflict **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC177;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar12);
    iVar7 = (*(code *)pVVar13)((Variant_conflict *)((long)plVar11 + (long)pVVar1),bVar6);
    Variant::Variant((Variant_conflict *)local_48,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0011f6c5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011f6d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar10;
  Variant_conflict *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fac0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant_conflict *)0x0) {
      if (in_R8D != 1) goto LAB_0011fb10;
LAB_0011fb00:
      pVVar10 = *(Variant_conflict **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011fb10:
        uVar6 = 4;
        goto LAB_0011fab5;
      }
      if (in_R8D == 1) goto LAB_0011fb00;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant_conflict **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC179;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant_conflict *)&local_48);
    (*(code *)pVVar11)((Variant_conflict *)((long)plVar9 + (long)pVVar1),
                       (Variant_conflict *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0011fab5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011fac0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Object const*>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,Object_const*>::call
                   (Object *param_1,Variant_conflict **param_2,int param_3,CallError *param_4)

{
  Variant_conflict *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant_conflict *pVVar13;
  Variant_conflict *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC100,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011fe15:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011fe20;
  }
  pVVar14 = param_2[5];
  if (pVVar14 == (Variant_conflict *)0x0) {
    if (in_R8D != 1) goto LAB_0011fe60;
LAB_0011fe50:
    pVVar14 = *(Variant_conflict **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar14 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011fe60:
      uVar7 = 4;
      goto LAB_0011fe15;
    }
    if (in_R8D == 1) goto LAB_0011fe50;
    lVar11 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar11) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar14 = pVVar14 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant_conflict **)(pVVar13 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x18);
  if (cVar5 == '\0') {
LAB_0011fdb6:
    uVar4 = _LC180;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar14);
    if ((pOVar10 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0011fdb6;
  }
  pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
  bVar6 = (bool)(*(code *)pVVar13)((Variant_conflict *)((long)plVar12 + (long)pVVar1),pOVar8);
  Variant::Variant((Variant_conflict *)local_48,bVar6);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_48[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
LAB_0011fe20:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Script>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Script>>::validated_call
          (MethodBindTRC<Ref<Script>> *this,Object *param_1,Variant_conflict **param_2,
          Variant_conflict *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant_conflict **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant_conflict **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant_conflict **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant_conflict **)0x11aea8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120106;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant_conflict **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant_conflict ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant_conflict ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00120106:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScriptServer::_languages */

void ScriptServer::_GLOBAL__sub_I__languages(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC12;
  global_classes._8_16_ = (undefined1  [16])0x0;
  global_classes._24_16_ = (undefined1  [16])0x0;
  global_classes._40_8_ = _LC12;
  __cxa_atexit(HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
               ::~HashMap,global_classes,&__dso_handle);
  inheriters_cache._40_8_ = uVar1;
  inheriters_cache._8_16_ = (undefined1  [16])0x0;
  inheriters_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
               ::~HashMap,inheriters_cache,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::~HashMap() */

void __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::~HashMap(HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, ScriptServer::GlobalScriptClass, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ScriptServer::GlobalScriptClass> > >::~HashMap() */

void __thiscall
HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
::~HashMap(HashMap<StringName,ScriptServer::GlobalScriptClass,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ScriptServer::GlobalScriptClass>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Variant>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant>::~MethodBindTRC(MethodBindTRC<Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<TypedArray<Dictionary>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Script>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Script>>::~MethodBindTRC(MethodBindTRC<Ref<Script>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Object const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Object_const*>::~MethodBindTRC(MethodBindTRC<bool,Object_const*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Script, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Script,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Script,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ScriptCodeCompletionCache::~ScriptCodeCompletionCache() */

void __thiscall
ScriptCodeCompletionCache::~ScriptCodeCompletionCache(ScriptCodeCompletionCache *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.