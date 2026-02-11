
/* icu_76_godot::UCharsTrie::~UCharsTrie() */

void __thiscall icu_76_godot::UCharsTrie::~UCharsTrie(UCharsTrie *this)

{
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::UCharsTrie::current() const */

int __thiscall icu_76_godot::UCharsTrie::current(UCharsTrie *this)

{
  uint uVar1;
  
  if (*(ushort **)(this + 0x10) == (ushort *)0x0) {
    return 0;
  }
  if ((*(int *)(this + 0x18) < 0) && (uVar1 = (uint)**(ushort **)(this + 0x10), 0x3f < uVar1)) {
    return 3 - ((int)uVar1 >> 0xf);
  }
  return 1;
}



/* icu_76_godot::UCharsTrie::branchNext(char16_t const*, int, int) */

int __thiscall
icu_76_godot::UCharsTrie::branchNext(UCharsTrie *this,wchar16 *param_1,int param_2,int param_3)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    param_2 = (int)(ushort)*param_1;
    param_1 = param_1 + 1;
  }
  iVar3 = param_2 + 1;
  while (pwVar2 = param_1, iVar4 = iVar3, 5 < iVar3) {
    while( true ) {
      wVar1 = pwVar2[1];
      param_1 = pwVar2 + 2;
      iVar3 = iVar4 >> 1;
      if ((int)(uint)(ushort)*pwVar2 <= param_3) break;
      uVar5 = (uint)(ushort)wVar1;
      if (0xfbff < (ushort)wVar1) {
        if ((ushort)wVar1 == 0xffff) {
          param_1 = pwVar2 + 4;
          uVar5 = CONCAT22(pwVar2[2],pwVar2[3]);
        }
        else {
          param_1 = pwVar2 + 3;
          uVar5 = ((ushort)wVar1 - 0xfc00) * 0x10000 | (uint)(ushort)pwVar2[2];
        }
      }
      param_1 = param_1 + (int)uVar5;
      pwVar2 = param_1;
      iVar4 = iVar3;
      if (iVar3 < 6) goto LAB_001000d9;
    }
    iVar3 = iVar4 - iVar3;
    if (0xfbff < (ushort)wVar1) {
      param_1 = pwVar2 + 3;
      if (wVar1 == L'\xffff') {
        param_1 = pwVar2 + 4;
      }
    }
  }
LAB_001000d9:
  do {
    wVar1 = param_1[1];
    uVar5 = (uint)(ushort)wVar1;
    if ((uint)(ushort)*param_1 == param_3) {
      if (wVar1 < L'\0') {
        pwVar2 = param_1 + 1;
        iVar3 = 2;
      }
      else {
        if ((ushort)wVar1 < 0x4000) {
          pwVar2 = param_1 + 2;
        }
        else if (uVar5 == 0x7fff) {
          pwVar2 = param_1 + 4;
          uVar5 = CONCAT22(param_1[2],param_1[3]);
        }
        else {
          pwVar2 = param_1 + 3;
          uVar5 = (uVar5 - 0x4000) * 0x10000 | (uint)(ushort)param_1[2];
        }
        pwVar2 = pwVar2 + (int)uVar5;
        iVar3 = 1;
        wVar1 = *pwVar2;
        if (0x3f < (ushort)wVar1) {
          *(wchar16 **)(this + 0x10) = pwVar2;
          return 3 - ((int)(uint)(ushort)wVar1 >> 0xf);
        }
      }
      *(wchar16 **)(this + 0x10) = pwVar2;
      return iVar3;
    }
    iVar3 = iVar3 + -1;
    if ((wVar1 & 0x4000U) == 0) {
      param_1 = param_1 + 2;
    }
    else {
      pwVar2 = param_1 + 3;
      param_1 = param_1 + 4;
      if ((~uVar5 & 0x7fff) != 0) {
        param_1 = pwVar2;
      }
    }
  } while (1 < iVar3);
  if ((uint)(ushort)*param_1 == param_3) {
    *(wchar16 **)(this + 0x10) = param_1 + 1;
    iVar3 = 1;
    if (0x3f < (ushort)param_1[1]) {
      return 3 - ((int)(uint)(ushort)param_1[1] >> 0xf);
    }
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    iVar3 = 0;
  }
  return iVar3;
}



/* icu_76_godot::UCharsTrie::nextImpl(char16_t const*, int) */

ulong __thiscall icu_76_godot::UCharsTrie::nextImpl(UCharsTrie *this,wchar16 *param_1,int param_2)

{
  wchar16 wVar1;
  ulong uVar2;
  uint uVar3;
  wchar16 *pwVar4;
  
  wVar1 = *param_1;
  uVar3 = (uint)(ushort)wVar1;
  pwVar4 = param_1 + 1;
  if ((ushort)wVar1 < 0x30) {
LAB_00100280:
    uVar2 = branchNext(this,pwVar4,uVar3,param_2);
    return uVar2;
  }
  if (0x3f < (ushort)wVar1) {
    if (wVar1 < L'\0') goto LAB_00100272;
    if (0x403f < (ushort)wVar1) {
      pwVar4 = param_1 + 2;
      if (0x7fbf < (ushort)wVar1) {
        pwVar4 = param_1 + 3;
      }
    }
    uVar3 = uVar3 & 0x3f;
    if ((ushort)(wVar1 & 0x3fU) < 0x30) goto LAB_00100280;
  }
  if ((uint)(ushort)*pwVar4 == param_2) {
    *(wchar16 **)(this + 0x10) = pwVar4 + 1;
    *(uint *)(this + 0x18) = uVar3 - 0x31;
    if (uVar3 - 0x31 != -1) {
      return 1;
    }
    if ((ushort)pwVar4[1] < 0x40) {
      return 1;
    }
    return (ulong)(3 - ((int)(uint)(ushort)pwVar4[1] >> 0xf));
  }
LAB_00100272:
  *(undefined8 *)(this + 0x10) = 0;
  return 0;
}



/* icu_76_godot::UCharsTrie::next(int) */

ulong __thiscall icu_76_godot::UCharsTrie::next(UCharsTrie *this,int param_1)

{
  wchar16 *pwVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  pwVar1 = *(wchar16 **)(this + 0x10);
  if (pwVar1 != (wchar16 *)0x0) {
    if (*(int *)(this + 0x18) < 0) {
      uVar3 = nextImpl(this,pwVar1,param_1);
      return uVar3;
    }
    if ((uint)(ushort)*pwVar1 == param_1) {
      iVar2 = *(int *)(this + 0x18) + -1;
      *(wchar16 **)(this + 0x10) = pwVar1 + 1;
      uVar4 = 1;
      *(int *)(this + 0x18) = iVar2;
      if ((iVar2 == -1) && (0x3f < (ushort)pwVar1[1])) {
        uVar4 = 3 - ((int)(uint)(ushort)pwVar1[1] >> 0xf);
      }
      goto LAB_0010031a;
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  uVar4 = 0;
LAB_0010031a:
  return (ulong)uVar4;
}



/* icu_76_godot::UCharsTrie::firstForCodePoint(int) */

undefined8 __thiscall icu_76_godot::UCharsTrie::firstForCodePoint(UCharsTrie *this,int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  if (param_1 < 0x10000) {
    uVar1 = nextImpl(this,*(wchar16 **)(this + 8),param_1);
    return uVar1;
  }
  uVar2 = nextImpl(this,*(wchar16 **)(this + 8),(uint)(ushort)((short)(param_1 >> 10) + 0xd7c0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = next(this,param_1 & 0x3ffU | 0xdc00);
  return uVar1;
}



/* icu_76_godot::UCharsTrie::nextForCodePoint(int) */

undefined8 __thiscall icu_76_godot::UCharsTrie::nextForCodePoint(UCharsTrie *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (0xffff < param_1) {
    uVar1 = next(this,(uint)(ushort)((short)(param_1 >> 10) + 0xd7c0));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    param_1 = param_1 & 0x3ffU | 0xdc00;
  }
  uVar2 = next(this,param_1);
  return uVar2;
}



/* icu_76_godot::UCharsTrie::next(icu_76_godot::ConstChar16Ptr, int) */

ulong __thiscall icu_76_godot::UCharsTrie::next(UCharsTrie *this,undefined8 *param_2,int param_3)

{
  wchar16 *pwVar1;
  ulong uVar2;
  uint uVar3;
  wchar16 *pwVar4;
  uint uVar5;
  int iVar6;
  wchar16 wVar7;
  wchar16 *pwVar8;
  
  pwVar4 = (wchar16 *)*param_2;
  if (param_3 < 0) {
    if (*pwVar4 != L'\0') goto LAB_00100416;
  }
  else if (param_3 != 0) {
LAB_00100416:
    pwVar1 = *(wchar16 **)(this + 0x10);
    if (pwVar1 == (wchar16 *)0x0) {
      return 0;
    }
    iVar6 = *(int *)(this + 0x18);
LAB_00100422:
    if (param_3 < 0) {
      pwVar8 = pwVar4 + 1;
      wVar7 = *pwVar4;
      uVar3 = (uint)(ushort)wVar7;
      if (wVar7 != L'\0') {
        pwVar4 = pwVar8;
        if (-1 < iVar6) {
          do {
            if (*pwVar1 != wVar7) goto LAB_00100461;
            wVar7 = *pwVar8;
            uVar3 = (uint)(ushort)wVar7;
            pwVar8 = pwVar8 + 1;
            pwVar1 = pwVar1 + 1;
            iVar6 = iVar6 + -1;
            if (wVar7 == L'\0') goto LAB_00100470;
            pwVar4 = pwVar8;
          } while (iVar6 != -1);
        }
        goto LAB_001004d8;
      }
    }
    else if (param_3 != 0) {
      pwVar8 = pwVar4 + 1;
      param_3 = param_3 + -1;
      uVar3 = (uint)(ushort)*pwVar4;
      pwVar4 = pwVar8;
      if (-1 < iVar6) {
        do {
          if (*pwVar1 != (wchar16)uVar3) goto LAB_00100461;
          pwVar1 = pwVar1 + 1;
          iVar6 = iVar6 + -1;
          if (param_3 == 0) goto LAB_00100470;
          param_3 = param_3 + -1;
          uVar3 = (uint)(ushort)*pwVar8;
          pwVar4 = pwVar8 + 1;
          pwVar8 = pwVar8 + 1;
        } while (iVar6 != -1);
      }
LAB_001004d8:
      *(int *)(this + 0x18) = iVar6;
      wVar7 = *pwVar1;
      do {
        uVar5 = (uint)(ushort)wVar7;
        pwVar8 = pwVar1 + 1;
        if (0x2f < (ushort)wVar7) {
          if ((ushort)wVar7 < 0x40) goto LAB_0010051d;
          if ((wVar7 & 0x8000U) != 0) goto LAB_00100461;
          if (0x403f < (ushort)wVar7) {
            pwVar8 = pwVar1 + 3;
            if ((ushort)wVar7 < 0x7fc0) {
              pwVar8 = pwVar1 + 2;
            }
          }
          uVar5 = uVar5 & 0x3f;
          if (0x2f < uVar5) goto LAB_0010051d;
        }
        uVar2 = branchNext(this,pwVar8,uVar5,uVar3);
        if ((int)uVar2 == 0) {
          return 0;
        }
        if (param_3 < 0) {
          wVar7 = *pwVar4;
          if (wVar7 == L'\0') {
            return uVar2;
          }
        }
        else {
          if (param_3 == 0) {
            return uVar2;
          }
          wVar7 = *pwVar4;
          param_3 = param_3 + -1;
        }
        uVar3 = (uint)(ushort)wVar7;
        pwVar4 = pwVar4 + 1;
        if ((int)uVar2 == 2) goto LAB_00100461;
        pwVar1 = *(wchar16 **)(this + 0x10);
        wVar7 = *pwVar1;
      } while( true );
    }
LAB_00100470:
    *(int *)(this + 0x18) = iVar6;
    *(wchar16 **)(this + 0x10) = pwVar1;
    goto joined_r0x00100479;
  }
  pwVar1 = *(wchar16 **)(this + 0x10);
  if (pwVar1 == (wchar16 *)0x0) {
    return 0;
  }
  iVar6 = *(int *)(this + 0x18);
joined_r0x00100479:
  if ((iVar6 < 0) && (0x3f < (ushort)*pwVar1)) {
    return (ulong)(3 - ((int)(uint)(ushort)*pwVar1 >> 0xf));
  }
  return 1;
LAB_0010051d:
  if ((ushort)*pwVar8 != uVar3) {
LAB_00100461:
    *(undefined8 *)(this + 0x10) = 0;
    return 0;
  }
  pwVar1 = pwVar8 + 1;
  iVar6 = uVar5 - 0x31;
  goto LAB_00100422;
}



/* icu_76_godot::UCharsTrie::findUniqueValue(char16_t const*, signed char, int&) */

ulong icu_76_godot::UCharsTrie::findUniqueValue(ushort *param_1,char param_2,uint *param_3)

{
  ushort uVar1;
  ulong uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  ushort *puVar8;
  
  puVar8 = param_1 + 1;
  uVar2 = (ulong)*param_1;
  iVar7 = (int)param_2;
  do {
    while (uVar4 = (uint)uVar2, uVar4 < 0x30) {
LAB_00100640:
      uVar4 = (uint)uVar2;
      if (uVar4 == 0) {
        uVar4 = (uint)*puVar8;
        puVar8 = puVar8 + 1;
      }
      puVar3 = (ushort *)findUniqueValueFromBranch(puVar8,uVar4 + 1,iVar7,param_3);
      if (puVar3 == (ushort *)0x0) {
        return 0;
      }
      puVar8 = puVar3 + 1;
      iVar7 = 1;
      uVar2 = (ulong)*puVar3;
    }
    if (0x3f < uVar4) {
      cVar6 = (char)iVar7;
      if (uVar4 >> 0xf != 0) {
        uVar4 = uVar4 & 0x7fff;
        if ((uVar2 & 0x4000) != 0) {
          uVar1 = *puVar8;
          uVar2 = (ulong)uVar1;
          if (uVar4 == 0x7fff) {
            uVar4 = CONCAT22(uVar1,puVar8[1]);
            if (cVar6 != '\0') {
              return (ulong)CONCAT31((int3)(((uint)uVar1 << 0x10) >> 8),*param_3 == uVar4);
            }
            goto LAB_00100690;
          }
          uVar4 = (uVar4 - 0x4000) * 0x10000 | (uint)uVar1;
        }
        if (cVar6 != '\0') {
          return CONCAT71((int7)(uVar2 >> 8),*param_3 == uVar4);
        }
LAB_00100690:
        *param_3 = uVar4;
        return 1;
      }
      if (uVar4 < 0x4040) {
        uVar5 = ((int)uVar4 >> 6) - 1;
        if (cVar6 == '\0') {
          *param_3 = uVar5;
          iVar7 = 1;
        }
        else if (uVar5 != *param_3) {
          return 0;
        }
      }
      else if (uVar4 < 0x7fc0) {
        uVar5 = ((uVar4 & 0x7fc0) - 0x4040) * 0x400 | (uint)*puVar8;
        if (cVar6 == '\0') {
          *param_3 = uVar5;
          iVar7 = 1;
        }
        else if (uVar5 != *param_3) {
          return 0;
        }
        puVar8 = puVar8 + 1;
      }
      else {
        uVar5 = CONCAT22(*puVar8,puVar8[1]);
        if (cVar6 == '\0') {
          *param_3 = uVar5;
          iVar7 = 1;
        }
        else if (uVar5 != *param_3) {
          return 0;
        }
        puVar8 = puVar8 + 2;
      }
      uVar2 = (ulong)(uVar4 & 0x3f);
      if ((uVar4 & 0x3f) < 0x30) goto LAB_00100640;
    }
    puVar3 = puVar8 + (uVar2 - 0x2f);
    puVar8 = puVar3 + 1;
    uVar2 = (ulong)*puVar3;
  } while( true );
}



/* icu_76_godot::UCharsTrie::findUniqueValueFromBranch(char16_t const*, int, signed char, int&) */

long icu_76_godot::UCharsTrie::findUniqueValueFromBranch
               (long param_1,int param_2,char param_3,uint *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (5 < param_2) {
    iVar7 = (int)param_3;
    do {
      uVar3 = *(ushort *)(param_1 + 2);
      iVar8 = param_2 >> 1;
      if (uVar3 < 0xfc00) {
        param_1 = param_1 + 4;
        lVar5 = findUniqueValueFromBranch(param_1 + (ulong)uVar3 * 2,iVar8,iVar7,param_4);
        if (lVar5 == 0) {
          return 0;
        }
        param_2 = param_2 - iVar8;
      }
      else if (uVar3 == 0xffff) {
        lVar5 = findUniqueValueFromBranch
                          (param_1 + 8 +
                           (long)CONCAT22(*(ushort *)(param_1 + 4),*(undefined2 *)(param_1 + 6)) * 2
                           ,iVar8,iVar7,param_4);
        if (lVar5 == 0) {
          return 0;
        }
        param_2 = param_2 - iVar8;
        param_1 = param_1 + 8;
      }
      else {
        lVar5 = findUniqueValueFromBranch
                          (param_1 + 6 +
                           (long)(int)((uVar3 - 0xfc00) * 0x10000 | (uint)*(ushort *)(param_1 + 4))
                           * 2,iVar8,iVar7,param_4);
        if (lVar5 == 0) {
          return 0;
        }
        param_2 = param_2 - iVar8;
        param_1 = param_1 + 6;
      }
    } while (5 < param_2);
  }
  do {
    while( true ) {
      uVar3 = *(ushort *)(param_1 + 2);
      uVar6 = uVar3 & 0x7fff;
      if ((uVar3 & 0x4000) == 0) break;
      puVar1 = (ushort *)(param_1 + 4);
      if ((uVar3 & 0x7fff) == 0x7fff) {
        puVar2 = (undefined2 *)(param_1 + 6);
        param_1 = param_1 + 8;
        uVar6 = CONCAT22(*puVar1,*puVar2);
        goto LAB_001007ac;
      }
      param_1 = param_1 + 6;
      uVar6 = (uVar6 - 0x4000) * 0x10000 | (uint)*puVar1;
      if ((int)(uint)uVar3 >> 0xf != 0) goto LAB_001007b0;
LAB_001007fe:
      cVar4 = findUniqueValue(param_1 + (long)(int)uVar6 * 2,(int)param_3,param_4);
      if (cVar4 == '\0') {
        return 0;
      }
LAB_00100834:
      param_2 = param_2 + -1;
      param_3 = '\x01';
      if (param_2 < 2) goto LAB_00100842;
    }
    param_1 = param_1 + 4;
LAB_001007ac:
    if ((int)(uint)uVar3 >> 0xf == 0) goto LAB_001007fe;
LAB_001007b0:
    if (param_3 == '\0') {
      *param_4 = uVar6;
      goto LAB_00100834;
    }
    if (*param_4 != uVar6) {
      return 0;
    }
    param_2 = param_2 + -1;
  } while (1 < param_2);
LAB_00100842:
  return param_1 + 2;
}



/* icu_76_godot::UCharsTrie::getNextBranchUChars(char16_t const*, int, icu_76_godot::Appendable&) */

void icu_76_godot::UCharsTrie::getNextBranchUChars(wchar16 *param_1,int param_2,Appendable *param_3)

{
  wchar16 wVar1;
  uint uVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  int iVar5;
  
  pwVar4 = param_1;
  if (5 < param_2) {
    do {
      wVar1 = pwVar4[1];
      uVar2 = (uint)(ushort)wVar1;
      param_1 = pwVar4 + 2;
      pwVar3 = param_1;
      if (0xfbff < (ushort)wVar1) {
        if ((ushort)wVar1 == 0xffff) {
          pwVar3 = pwVar4 + 4;
          uVar2 = CONCAT22(pwVar4[2],pwVar4[3]);
        }
        else {
          pwVar3 = pwVar4 + 3;
          uVar2 = ((ushort)wVar1 - 0xfc00) * 0x10000 | (uint)(ushort)pwVar4[2];
        }
      }
      iVar5 = param_2 >> 1;
      param_2 = param_2 - iVar5;
      getNextBranchUChars(pwVar3 + (int)uVar2,iVar5,param_3);
      if (0xfbff < (ushort)pwVar4[1]) {
        param_1 = pwVar4 + 3;
        if (pwVar4[1] == L'\xffff') {
          param_1 = pwVar4 + 4;
        }
      }
      pwVar4 = param_1;
    } while (5 < param_2);
  }
  do {
    (**(code **)(*(long *)param_3 + 0x18))(param_3,*param_1);
    pwVar4 = param_1 + 1;
    if ((*pwVar4 & 0x4000U) == 0) {
      param_1 = param_1 + 2;
    }
    else {
      pwVar3 = param_1 + 3;
      param_1 = param_1 + 4;
      if ((~*pwVar4 & 0x7fffU) != 0) {
        param_1 = pwVar3;
      }
    }
    param_2 = param_2 + -1;
  } while (1 < param_2);
                    /* WARNING: Could not recover jumptable at 0x001009a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_3 + 0x18))(param_3,*param_1);
  return;
}



/* icu_76_godot::UCharsTrie::getNextUChars(icu_76_godot::Appendable&) const */

int __thiscall icu_76_godot::UCharsTrie::getNextUChars(UCharsTrie *this,Appendable *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  wchar16 *pwVar5;
  
  puVar2 = *(ushort **)(this + 0x10);
  if (puVar2 == (ushort *)0x0) {
    return 0;
  }
  uVar1 = *puVar2;
  uVar4 = (uint)uVar1;
  if (*(int *)(this + 0x18) < 0) {
    pwVar5 = (wchar16 *)(puVar2 + 1);
    if (0x3f < uVar1) {
      if ((short)uVar1 < 0) {
        return 0;
      }
      if (0x403f < uVar1) {
        pwVar5 = (wchar16 *)(puVar2 + 2);
        if (0x7fbf < uVar1) {
          pwVar5 = (wchar16 *)(puVar2 + 3);
        }
      }
      uVar4 = uVar1 & 0x3f;
    }
    if (uVar4 < 0x30) {
      if (uVar4 == 0) {
        uVar4 = (uint)(ushort)*pwVar5;
        pwVar5 = pwVar5 + 1;
      }
      iVar3 = uVar4 + 1;
      (**(code **)(*(long *)param_1 + 0x30))(param_1,iVar3);
      getNextBranchUChars(pwVar5,iVar3,param_1);
      return iVar3;
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,*pwVar5);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  return 1;
}


