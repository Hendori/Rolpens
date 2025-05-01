
/* icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan(icu_76_godot::UnicodeSetStringSpan
   const&, icu_76_godot::UVector const&) */

void __thiscall
icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
          (UnicodeSetStringSpan *this,UnicodeSetStringSpan *param_1,UVector *param_2)

{
  undefined4 uVar1;
  int iVar2;
  UnicodeSet *pUVar3;
  void *__src;
  int iVar4;
  undefined8 uVar5;
  UnicodeSetStringSpan *__dest;
  long lVar6;
  
  icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet *)(this + 8),(UnicodeSet *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  uVar5 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0xd0) = 0;
  pUVar3 = *(UnicodeSet **)(param_1 + 0xd0);
  *(UVector **)(this + 0xd8) = param_2;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x100) = uVar1;
  this[0x104] = (UnicodeSetStringSpan)0x1;
  *(undefined8 *)(this + 0xf8) = uVar5;
  if ((UnicodeSet *)(param_1 + 8) == pUVar3) {
    *(UnicodeSet **)(this + 0xd0) = (UnicodeSet *)(this + 8);
    iVar4 = (int)uVar5;
  }
  else {
    uVar5 = icu_76_godot::UnicodeSet::clone();
    param_2 = *(UVector **)(this + 0xd8);
    *(undefined8 *)(this + 0xd0) = uVar5;
    iVar4 = *(int *)(this + 0xf8);
  }
  iVar2 = *(int *)(param_2 + 8);
  iVar4 = iVar4 + iVar2 * 8;
  if (iVar4 < 0x81) {
    __dest = this + 0x108;
    *(UnicodeSetStringSpan **)(this + 0xe0) = __dest;
  }
  else {
    __dest = (UnicodeSetStringSpan *)uprv_malloc_76_godot((long)iVar4);
    *(UnicodeSetStringSpan **)(this + 0xe0) = __dest;
    if (__dest == (UnicodeSetStringSpan *)0x0) {
      *(undefined8 *)(this + 0xfc) = 0;
      return;
    }
  }
  lVar6 = (long)iVar2 * 4;
  __src = *(void **)(param_1 + 0xe0);
  *(UnicodeSetStringSpan **)(this + 0xe8) = __dest + lVar6;
  *(UnicodeSetStringSpan **)(this + 0xf0) = __dest + lVar6 + lVar6;
  memcpy(__dest,__src,(long)iVar4);
  return;
}



/* icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan() */

void __thiscall
icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(UnicodeSetStringSpan *this)

{
  UnicodeSet *this_00;
  
  this_00 = *(UnicodeSet **)(this + 0xd0);
  if ((this_00 != (UnicodeSet *)0x0) && (this_00 != (UnicodeSet *)(this + 8))) {
    icu_76_godot::UnicodeSet::~UnicodeSet(this_00);
  }
  if ((*(UnicodeSetStringSpan **)(this + 0xe0) != (UnicodeSetStringSpan *)0x0) &&
     (*(UnicodeSetStringSpan **)(this + 0xe0) != this + 0x108)) {
    uprv_free_76_godot();
  }
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 8));
  return;
}



/* icu_76_godot::UnicodeSetStringSpan::addToSpanNotSet(int) */

void icu_76_godot::UnicodeSetStringSpan::addToSpanNotSet(int param_1)

{
  char cVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar2 = *(long *)(lVar3 + 0xd0);
  if ((lVar2 != 0) && (lVar2 != lVar3 + 8)) {
    icu_76_godot::UnicodeSet::add((int)lVar2);
    return;
  }
  cVar1 = icu_76_godot::UnicodeSet::contains((int)(lVar3 + 8));
  if (cVar1 == '\0') {
    lVar2 = icu_76_godot::UnicodeSet::cloneAsThawed();
    if (lVar2 != 0) {
      *(long *)(lVar3 + 0xd0) = lVar2;
      icu_76_godot::UnicodeSet::add((int)lVar2);
      return;
    }
  }
  return;
}



/* icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan(icu_76_godot::UnicodeSet const&,
   icu_76_godot::UVector const&, unsigned int) */

void __thiscall
icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
          (UnicodeSetStringSpan *this,UnicodeSet *param_1,UVector *param_2,uint param_3)

{
  UnicodeSet *this_00;
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  UnicodeSetStringSpan UVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  UnicodeSetStringSpan *pUVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  UnicodeSetStringSpan *pUVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  int local_74;
  UnicodeSetStringSpan *local_68;
  int local_48;
  int local_44;
  long local_40;
  
  this_00 = (UnicodeSet *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeSet::UnicodeSet(this_00,0,0x10ffff);
  *(undefined8 *)(this + 0xd0) = 0;
  *(UVector **)(this + 0xd8) = param_2;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  this[0x104] = (UnicodeSetStringSpan)(param_3 == 0x3f);
  icu_76_godot::UnicodeSet::retainAll(this_00);
  if ((param_3 & 1) != 0) {
    *(UnicodeSet **)(this + 0xd0) = this_00;
  }
  lVar8 = *(long *)(this + 0xd8);
  iVar11 = *(int *)(lVar8 + 8);
  if (0 < iVar11) {
    iVar12 = 0;
    bVar2 = false;
    do {
      lVar8 = icu_76_godot::UVector::elementAt((int)lVar8);
      uVar1 = *(ushort *)(lVar8 + 8);
      if ((uVar1 & 0x11) == 0) {
        lVar15 = lVar8 + 10;
        if ((uVar1 & 2) == 0) {
          lVar15 = *(long *)(lVar8 + 0x18);
        }
      }
      else {
        lVar15 = 0;
      }
      if ((short)uVar1 < 0) {
        iVar7 = *(int *)(lVar8 + 0xc);
      }
      else {
        iVar7 = (int)((short)uVar1 >> 5);
      }
      if (iVar7 != 0) {
        iVar5 = icu_76_godot::UnicodeSet::span(this_00,lVar15,iVar7,1);
        if (iVar5 < iVar7) {
          if (((param_3 & 8) != 0) && (*(int *)(this + 0xfc) < iVar7)) {
            *(int *)(this + 0xfc) = iVar7;
          }
          if ((param_3 & 4) == 0) {
            bVar2 = true;
          }
          else {
            bVar2 = true;
LAB_001003ae:
            local_48 = 0;
            local_44 = 0;
            u_strToUTF8_76_godot(0,0,&local_44,lVar15,iVar7,&local_48);
            if ((local_48 == 0xf) || (iVar7 = 0, local_48 < 1)) {
              iVar7 = local_44;
            }
            *(int *)(this + 0xf8) = *(int *)(this + 0xf8) + iVar7;
            if (*(int *)(this + 0x100) < iVar7) {
              *(int *)(this + 0x100) = iVar7;
            }
          }
        }
        else {
          if (((param_3 & 8) != 0) && (*(int *)(this + 0xfc) < iVar7)) {
            *(int *)(this + 0xfc) = iVar7;
          }
          if (((param_3 & 4) != 0) && ((param_3 & 2) != 0)) goto LAB_001003ae;
        }
      }
      if (iVar11 == iVar12 + 1) goto LAB_00100418;
      iVar12 = iVar12 + 1;
      lVar8 = *(long *)(this + 0xd8);
    } while( true );
  }
LAB_00100480:
  *(undefined8 *)(this + 0xfc) = 0;
LAB_00100708:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a49:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100418:
  if (!bVar2) goto LAB_00100480;
  if ((this[0x104] == (UnicodeSetStringSpan)0x0) ||
     (icu_76_godot::UnicodeSet::freeze(), this[0x104] == (UnicodeSetStringSpan)0x0)) {
    iVar12 = iVar11;
    if ((param_3 & 4) == 0) goto LAB_001004e5;
    iVar12 = *(int *)(this + 0xf8) + iVar11 * 5;
    if (iVar12 < 0x81) goto LAB_001004f1;
LAB_00100458:
    pUVar9 = (UnicodeSetStringSpan *)uprv_malloc_76_godot((long)iVar12);
    *(UnicodeSetStringSpan **)(this + 0xe0) = pUVar9;
    if (pUVar9 == (UnicodeSetStringSpan *)0x0) goto LAB_00100480;
  }
  else {
    iVar12 = *(int *)(this + 0xf8) + iVar11 * 8;
LAB_001004e5:
    if (0x80 < iVar12) goto LAB_00100458;
LAB_001004f1:
    pUVar9 = this + 0x108;
    *(UnicodeSetStringSpan **)(this + 0xe0) = pUVar9;
  }
  uVar6 = param_3 & 4;
  lVar8 = (long)iVar11;
  if (this[0x104] == (UnicodeSetStringSpan)0x0) {
    if (uVar6 != 0) {
      pUVar9 = pUVar9 + lVar8 * 4;
      *(UnicodeSetStringSpan **)(this + 0xf0) = pUVar9 + lVar8;
    }
    *(UnicodeSetStringSpan **)(this + 0xe8) = pUVar9;
    pUVar13 = pUVar9;
    local_68 = pUVar9;
  }
  else {
    pUVar9 = pUVar9 + lVar8 * 4;
    pUVar13 = pUVar9 + lVar8;
    *(UnicodeSetStringSpan **)(this + 0xe8) = pUVar9;
    pUVar9 = pUVar13 + lVar8 + lVar8;
    *(UnicodeSetStringSpan **)(this + 0xf0) = pUVar9 + lVar8;
    local_68 = pUVar13 + lVar8;
  }
  lVar15 = 0;
  local_74 = 0;
  do {
    while( true ) {
      lVar10 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
      uVar1 = *(ushort *)(lVar10 + 8);
      if ((uVar1 & 0x11) == 0) {
        lVar14 = lVar10 + 10;
        if ((uVar1 & 2) == 0) {
          lVar14 = *(long *)(lVar10 + 0x18);
        }
      }
      else {
        lVar14 = 0;
      }
      if ((short)uVar1 < 0) {
        iVar11 = *(int *)(lVar10 + 0xc);
      }
      else {
        iVar11 = (int)((short)uVar1 >> 5);
      }
      iVar7 = icu_76_godot::UnicodeSet::span(this_00,lVar14,iVar11,1);
      iVar12 = 0;
      if (-1 < iVar7) {
        iVar12 = iVar7;
      }
      if (iVar12 < iVar11) break;
      if (uVar6 != 0) {
        if ((param_3 & 2) == 0) {
          *(undefined4 *)(*(long *)(this + 0xe0) + lVar15 * 4) = 0;
        }
        else {
          local_48 = 0;
          local_44 = 0;
          u_strToUTF8_76_godot
                    ((long)local_74 + *(long *)(this + 0xf0),*(int *)(this + 0xf8) - local_74,
                     &local_44,lVar14,iVar11,&local_48);
          iVar11 = 0;
          if (local_48 < 1) {
            local_74 = local_74 + local_44;
            iVar11 = local_44;
          }
          *(int *)(*(long *)(this + 0xe0) + lVar15 * 4) = iVar11;
        }
      }
      if (this[0x104] == (UnicodeSetStringSpan)0x0) {
        *(undefined1 *)(*(long *)(this + 0xe8) + lVar15) = 0xff;
        goto LAB_00100628;
      }
      pUVar9[lVar15] = (UnicodeSetStringSpan)0xff;
      local_68[lVar15] = (UnicodeSetStringSpan)0xff;
      pUVar13[lVar15] = (UnicodeSetStringSpan)0xff;
      *(undefined1 *)(*(long *)(this + 0xe8) + lVar15) = 0xff;
      lVar15 = lVar15 + 1;
      if (lVar15 == lVar8) goto LAB_001006fa;
    }
    if ((param_3 & 8) != 0) {
      if ((param_3 & 2) == 0) {
        pUVar13[lVar15] = (UnicodeSetStringSpan)0x0;
        *(undefined1 *)(*(long *)(this + 0xe8) + lVar15) = 0;
      }
      else {
        if ((param_3 & 0x20) != 0) {
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xfe;
          }
          *(undefined1 *)(*(long *)(this + 0xe8) + lVar15) = uVar3;
        }
        if ((param_3 & 0x10) != 0) {
          iVar12 = icu_76_godot::UnicodeSet::spanBack(this_00,lVar14,iVar11,1);
          UVar4 = SUB41(iVar11 - iVar12,0);
          if (0xfe < iVar11 - iVar12) {
            UVar4 = (UnicodeSetStringSpan)0xfe;
          }
          pUVar13[lVar15] = UVar4;
        }
      }
    }
    if (uVar6 == 0) {
LAB_001005ae:
      if ((param_3 & 1) != 0) {
        if ((param_3 & 0x20) != 0) {
LAB_001005c3:
          addToSpanNotSet((int)this);
        }
        if ((param_3 & 0x10) != 0) {
          addToSpanNotSet((int)this);
        }
      }
    }
    else {
      local_48 = 0;
      lVar10 = (long)local_74 + *(long *)(this + 0xf0);
      local_44 = 0;
      u_strToUTF8_76_godot
                (lVar10,*(int *)(this + 0xf8) - local_74,&local_44,lVar14,iVar11,&local_48);
      iVar11 = local_44;
      if (0 < local_48) {
        *(undefined4 *)(*(long *)(this + 0xe0) + lVar15 * 4) = 0;
LAB_001007c0:
        pUVar9[lVar15] = (UnicodeSetStringSpan)0xff;
        local_68[lVar15] = (UnicodeSetStringSpan)0xff;
        goto LAB_001005ae;
      }
      local_74 = local_74 + local_44;
      *(int *)(*(long *)(this + 0xe0) + lVar15 * 4) = local_44;
      if (local_44 == 0) goto LAB_001007c0;
      if ((param_3 & 2) == 0) {
        pUVar9[lVar15] = (UnicodeSetStringSpan)0x0;
        local_68[lVar15] = (UnicodeSetStringSpan)0x0;
        goto LAB_001005ae;
      }
      if ((param_3 & 0x20) != 0) {
        iVar12 = icu_76_godot::UnicodeSet::spanUTF8(this_00,lVar10,local_44,1);
        UVar4 = SUB41(iVar12,0);
        if (0xfe < iVar12) {
          UVar4 = (UnicodeSetStringSpan)0xfe;
        }
        local_68[lVar15] = UVar4;
        if ((param_3 & 0x10) != 0) goto LAB_001008af;
        if ((~param_3 & 0x21) != 0) goto LAB_00100628;
        goto LAB_001005c3;
      }
      if ((param_3 & 0x10) != 0) {
LAB_001008af:
        iVar12 = icu_76_godot::UnicodeSet::spanBackUTF8(this_00,lVar10,iVar11,1);
        iVar11 = iVar11 - iVar12;
        if (0xfe < iVar11) {
          iVar11 = 0xfe;
        }
        pUVar9[lVar15] = SUB41(iVar11,0);
        goto LAB_001005ae;
      }
    }
LAB_00100628:
    lVar15 = lVar15 + 1;
  } while (lVar15 != lVar8);
LAB_001006fa:
  if (this[0x104] != (UnicodeSetStringSpan)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      icu_76_godot::UnicodeSet::freeze();
      return;
    }
    goto LAB_00100a49;
  }
  goto LAB_00100708;
}



/* icu_76_godot::UnicodeSetStringSpan::spanNot(char16_t const*, int) const */

int __thiscall
icu_76_godot::UnicodeSetStringSpan::spanNot(UnicodeSetStringSpan *this,wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int local_3c;
  
  iVar11 = 0;
  iVar3 = *(int *)(*(long *)(this + 0xd8) + 8);
  iVar9 = (int)this + 8;
  iVar8 = param_2;
  do {
    iVar5 = icu_76_godot::UnicodeSet::span(*(undefined8 *)(this + 0xd0),param_1 + iVar11,iVar8,0);
    if (iVar8 == iVar5) {
      return param_2;
    }
    iVar11 = iVar11 + iVar5;
    iVar8 = iVar8 - iVar5;
    pwVar1 = param_1 + iVar11;
    if ((((ushort)(*pwVar1 + L'⠀') < 0x400) && (1 < iVar8)) && ((pwVar1[1] & 0xfc00U) == 0xdc00))
    {
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar9);
      if (cVar4 != '\0') {
        return iVar11;
      }
      local_3c = -2;
    }
    else {
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar9);
      if (cVar4 != '\0') {
        return iVar11;
      }
      local_3c = -1;
    }
    lVar12 = 0;
    if (0 < iVar3) {
      do {
        while (*(char *)(*(long *)(this + 0xe8) + lVar12) == -1) {
LAB_00100bc7:
          lVar12 = lVar12 + 1;
          if (iVar3 == lVar12) goto LAB_00100bd3;
        }
        lVar6 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
        uVar2 = *(ushort *)(lVar6 + 8);
        if ((uVar2 & 0x11) == 0) {
          lVar10 = lVar6 + 10;
          if ((uVar2 & 2) == 0) {
            lVar10 = *(long *)(lVar6 + 0x18);
          }
        }
        else {
          lVar10 = 0;
        }
        if ((short)uVar2 < 0) {
          lVar6 = (long)*(int *)(lVar6 + 0xc);
        }
        else {
          lVar6 = (long)((short)uVar2 >> 5);
        }
        iVar5 = (int)lVar6;
        if (iVar8 < iVar5) goto LAB_00100bc7;
        lVar7 = 0;
        do {
          if (pwVar1[lVar7] != *(wchar16 *)(lVar10 + lVar7 * 2)) goto LAB_00100bc7;
          lVar7 = lVar7 + 1;
        } while (0 < iVar5 - (int)lVar7);
        if (((iVar11 < 1) || ((pwVar1[-1] & 0xfc00U) != 0xd800)) || ((*pwVar1 & 0xfc00U) != 0xdc00))
        {
          if (param_2 - iVar11 <= iVar5) {
            return iVar11;
          }
          if ((pwVar1[lVar6 + -1] & 0xfc00U) != 0xd800) {
            return iVar11;
          }
          if ((pwVar1[lVar6] & 0xfc00U) != 0xdc00) {
            return iVar11;
          }
        }
        lVar12 = lVar12 + 1;
      } while (iVar3 != lVar12);
    }
LAB_00100bd3:
    iVar11 = iVar11 - local_3c;
    iVar8 = iVar8 + local_3c;
    if (iVar8 == 0) {
      return param_2;
    }
  } while( true );
}



/* icu_76_godot::UnicodeSetStringSpan::span(char16_t const*, int, USetSpanCondition) const */

ulong __thiscall
icu_76_godot::UnicodeSetStringSpan::span
          (UnicodeSetStringSpan *this,wchar16 *param_1,uint param_2,int param_4)

{
  UnicodeSetStringSpan *pUVar1;
  wchar16 *pwVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  size_t __n;
  long lVar21;
  long in_FS_OFFSET;
  uint local_a4;
  uint local_98;
  uint local_94;
  char *local_68;
  int local_60;
  int iStack_5c;
  uint local_58;
  char local_54 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = spanNot(this,param_1,param_2);
      return uVar8;
    }
    goto LAB_00101470;
  }
  pUVar1 = this + 8;
  local_98 = icu_76_godot::UnicodeSet::span(pUVar1,param_1,param_2,1);
  if (param_2 != local_98) {
    local_60 = 0;
    local_58 = 0;
    local_68 = local_54;
    if (param_4 == 1) {
      iVar5 = *(int *)(this + 0xfc);
      if (iVar5 < 0x11) {
        local_60 = 0x10;
        __n = 0x10;
        iVar5 = local_60;
      }
      else {
        __n = (size_t)iVar5;
        local_68 = (char *)uprv_malloc_76_godot(__n);
        if (local_68 == (char *)0x0) {
          __n = 0;
          local_68 = local_54;
          iVar5 = local_60;
        }
      }
      local_60 = iVar5;
      memset(local_68,0,__n);
    }
    iStack_5c = 0;
    iVar5 = *(int *)(*(long *)(this + 0xd8) + 8);
    uVar20 = param_2 - local_98;
    local_94 = local_98;
LAB_00100d82:
    do {
      local_a4 = param_2;
      if (param_4 == 1) {
        lVar21 = 0;
        if (0 < iVar5) {
          do {
            while( true ) {
              bVar3 = *(byte *)(*(long *)(this + 0xe8) + lVar21);
              if (bVar3 != 0xff) break;
LAB_00100fe8:
              lVar21 = lVar21 + 1;
              if (iVar5 == lVar21) goto LAB_00101108;
            }
            lVar9 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
            uVar4 = *(ushort *)(lVar9 + 8);
            if ((uVar4 & 0x11) == 0) {
              lVar17 = lVar9 + 10;
              if ((uVar4 & 2) == 0) {
                lVar17 = *(long *)(lVar9 + 0x18);
              }
            }
            else {
              lVar17 = 0;
            }
            if ((short)uVar4 < 0) {
              uVar7 = *(uint *)(lVar9 + 0xc);
            }
            else {
              uVar7 = (uint)((short)uVar4 >> 5);
            }
            uVar10 = (uint)bVar3;
            if (bVar3 == 0xfe) {
              uVar10 = uVar7 - 1;
              if ((((*(ushort *)(lVar17 + (long)(int)uVar10 * 2) & 0xfc00) == 0xdc00) &&
                  (0 < (int)uVar10)) &&
                 ((*(ushort *)(lVar17 + -2 + (long)(int)uVar10 * 2) & 0xfc00) == 0xd800)) {
                uVar10 = uVar7 - 2;
              }
            }
            if ((int)local_98 <= (int)uVar10) {
              uVar10 = local_98;
            }
            uVar16 = uVar7 - uVar10;
            if ((int)uVar20 < (int)uVar16) goto LAB_00100fe8;
            iVar13 = local_94 - uVar10;
            do {
              iVar11 = local_58 + uVar16;
              if (local_60 <= iVar11) {
                iVar11 = iVar11 - local_60;
              }
              if (local_68[iVar11] == '\0') {
                pwVar2 = param_1 + iVar13;
                lVar9 = 0;
                do {
                  if (pwVar2[lVar9] != *(wchar16 *)(lVar17 + lVar9 * 2)) goto LAB_001010dc;
                  lVar9 = lVar9 + 1;
                } while (0 < (int)(uVar7 - (int)lVar9));
                if ((((iVar13 < 1) || ((pwVar2[-1] & 0xfc00U) != 0xd800)) ||
                    ((*pwVar2 & 0xfc00U) != 0xdc00)) &&
                   ((((int)(param_2 - iVar13) <= (int)uVar7 ||
                     ((pwVar2[(long)(int)uVar7 + -1] & 0xfc00U) != 0xd800)) ||
                    ((pwVar2[(int)uVar7] & 0xfc00U) != 0xdc00)))) {
                  if (uVar16 == uVar20) goto LAB_00100f29;
                  local_68[iVar11] = '\x01';
                  iStack_5c = iStack_5c + 1;
                }
              }
LAB_001010dc:
              if (uVar16 == uVar7) goto LAB_00100fe8;
              uVar16 = uVar16 + 1;
              iVar13 = iVar13 + 1;
            } while ((int)uVar16 <= (int)uVar20);
            lVar21 = lVar21 + 1;
          } while (iVar5 != lVar21);
        }
LAB_00101108:
        if (local_98 == 0) goto LAB_00101118;
LAB_00101266:
        if (iStack_5c != 0) {
LAB_0010126e:
          uVar8 = (ulong)(int)local_58;
          pcVar15 = local_68 + uVar8 + 1;
LAB_001012a0:
          pcVar12 = pcVar15;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar7;
          if ((int)uVar7 < local_60) goto LAB_00101290;
          iVar13 = local_60 - local_58;
          if (*local_68 == '\0') {
            pcVar12 = local_68 + 1;
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar15 == '\0');
            uVar7 = ((int)pcVar15 - (int)(local_68 + 1)) + 1;
            iVar13 = iVar13 + uVar7;
          }
          else {
            uVar7 = 0;
            pcVar15 = local_68;
          }
          *pcVar15 = '\0';
          goto LAB_001012e1;
        }
        local_a4 = local_94;
        goto LAB_00100f29;
      }
      while (0 < iVar5) {
        lVar21 = 0;
        uVar7 = 0;
        iVar13 = 0;
        do {
          bVar3 = *(byte *)(*(long *)(this + 0xe8) + lVar21);
          lVar9 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
          uVar4 = *(ushort *)(lVar9 + 8);
          if ((uVar4 & 0x11) == 0) {
            lVar17 = lVar9 + 10;
            if ((uVar4 & 2) == 0) {
              lVar17 = *(long *)(lVar9 + 0x18);
            }
          }
          else {
            lVar17 = 0;
          }
          if ((short)uVar4 < 0) {
            uVar10 = *(uint *)(lVar9 + 0xc);
          }
          else {
            uVar10 = (uint)((short)uVar4 >> 5);
          }
          uVar16 = uVar7;
          iVar11 = iVar13;
          if (uVar10 != 0) {
            uVar14 = (uint)bVar3;
            if (0xfd < bVar3) {
              uVar14 = uVar10;
            }
            if ((int)local_98 < (int)uVar14) {
              uVar14 = local_98;
            }
            iVar18 = uVar10 - uVar14;
            if (((int)uVar7 <= (int)uVar14) && (iVar18 <= (int)uVar20)) {
              iVar19 = local_94 - uVar14;
              do {
                if (((int)uVar7 < (int)uVar14) || (iVar13 < iVar18)) {
                  pwVar2 = param_1 + iVar19;
                  lVar9 = 0;
                  do {
                    if (pwVar2[lVar9] != *(wchar16 *)(lVar17 + lVar9 * 2)) goto LAB_00100e70;
                    lVar9 = lVar9 + 1;
                  } while (0 < (int)(uVar10 - (int)lVar9));
                  if ((((iVar19 < 1) || ((pwVar2[-1] & 0xfc00U) != 0xd800)) ||
                      ((*pwVar2 & 0xfc00U) != 0xdc00)) &&
                     (((uVar16 = uVar14, iVar11 = iVar18,
                       (int)((param_2 - local_94) + uVar14) <= (int)uVar10 ||
                       ((pwVar2[(long)(int)uVar10 + -1] & 0xfc00U) != 0xd800)) ||
                      ((pwVar2[(int)uVar10] & 0xfc00U) != 0xdc00)))) break;
                }
LAB_00100e70:
                iVar18 = iVar18 + 1;
                uVar14 = uVar14 - 1;
                iVar19 = iVar19 + 1;
                uVar16 = uVar7;
                iVar11 = iVar13;
                if (((int)uVar20 < iVar18) || ((int)uVar14 < (int)uVar7)) break;
              } while( true );
            }
          }
          iVar13 = iVar11;
          uVar7 = uVar16;
          lVar21 = lVar21 + 1;
        } while (iVar5 != lVar21);
        if (uVar7 == 0 && iVar13 == 0) break;
        uVar20 = uVar20 - iVar13;
        if (uVar20 == 0) goto LAB_00100f29;
        local_94 = local_94 + iVar13;
        local_98 = 0;
      }
      if (local_98 != 0) goto LAB_00101266;
LAB_00101118:
      if (local_94 == 0) goto LAB_00101266;
      pwVar2 = param_1 + (int)local_94;
      if (iStack_5c != 0) {
        iVar13 = (int)pUVar1;
        if (((ushort)(*pwVar2 + L'⠀') < 0x400) && (1 < (int)uVar20)) {
          if ((pwVar2[1] & 0xfc00U) == 0xdc00) {
            cVar6 = icu_76_godot::UnicodeSet::contains(iVar13);
            uVar7 = 2;
            if (cVar6 == '\0') goto LAB_0010126e;
            goto LAB_001013aa;
          }
          cVar6 = icu_76_godot::UnicodeSet::contains(iVar13);
          uVar7 = 1;
          if (cVar6 == '\0') goto LAB_0010126e;
        }
        else {
          cVar6 = icu_76_godot::UnicodeSet::contains(iVar13);
          if (cVar6 == '\0') goto LAB_0010126e;
          uVar7 = 1;
LAB_001013aa:
          if (uVar7 == uVar20) goto LAB_00100f29;
        }
        local_94 = local_94 + uVar7;
        uVar20 = uVar20 - uVar7;
        local_58 = uVar7 + local_58;
        if (local_60 <= (int)local_58) {
          local_58 = local_58 - local_60;
        }
        if (local_68[(int)local_58] != '\0') {
          local_68[(int)local_58] = '\0';
          iStack_5c = iStack_5c + -1;
        }
        local_98 = 0;
        goto LAB_00100d82;
      }
      local_98 = icu_76_godot::UnicodeSet::span(pUVar1,pwVar2,uVar20,1);
      if ((local_98 == uVar20) || (local_98 == 0)) goto LAB_001013f8;
      local_94 = local_94 + local_98;
      uVar20 = uVar20 - local_98;
    } while( true );
  }
  goto LAB_00100f3e;
LAB_00101290:
  pcVar15 = pcVar12 + 1;
  if (*pcVar12 != '\0') goto LAB_001013b8;
  goto LAB_001012a0;
LAB_001013b8:
  *pcVar12 = '\0';
  iVar13 = uVar7 - local_58;
LAB_001012e1:
  iStack_5c = iStack_5c + -1;
  local_94 = local_94 + iVar13;
  uVar20 = uVar20 - iVar13;
  local_98 = 0;
  local_58 = uVar7;
  goto LAB_00100d82;
LAB_001013f8:
  local_a4 = local_98 + local_94;
LAB_00100f29:
  if (local_68 != local_54) {
    uprv_free_76_godot(local_68);
  }
  local_98 = local_a4;
LAB_00100f3e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_98;
  }
LAB_00101470:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSetStringSpan::spanNotBackUTF8(unsigned char const*, int) const */

int icu_76_godot::UnicodeSetStringSpan::spanNotBackUTF8(uchar *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined4 in_register_00000034;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar9 = CONCAT44(in_register_00000034,param_2);
  lVar8 = *(long *)(param_1 + 0xe8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 8);
  if (param_1[0x104] != '\0') {
    lVar8 = lVar8 + iVar1 * 3;
  }
  iVar11 = (int)param_1 + 8;
  do {
    iVar4 = icu_76_godot::UnicodeSet::spanBackUTF8(*(undefined8 *)(param_1 + 0xd0),lVar9);
    if (iVar4 == 0) break;
    cVar3 = *(char *)(lVar9 + -1 + (long)iVar4);
    if (cVar3 < '\0') {
      local_44 = iVar4 + -1;
      utf8_prevCharSafeBody_76_godot(lVar9,0,&local_44,cVar3,0xfffffffd);
      iVar2 = local_44;
      cVar3 = icu_76_godot::UnicodeSet::contains(iVar11);
      iVar7 = iVar2 - iVar4;
      if (cVar3 != '\0') {
        iVar7 = iVar4 - iVar2;
      }
      if (0 < iVar7) goto LAB_00101523;
    }
    else {
      cVar3 = icu_76_godot::UnicodeSet::contains(iVar11);
      if (cVar3 != '\0') goto LAB_00101523;
      iVar7 = -1;
    }
    lVar10 = *(long *)(param_1 + 0xf0);
    if (0 < iVar1) {
      lVar5 = 0;
      do {
        while( true ) {
          iVar2 = *(int *)(*(long *)(param_1 + 0xe0) + lVar5 * 4);
          lVar12 = (long)iVar2;
          if (((iVar2 == 0) || (*(char *)(lVar8 + lVar5) == -1)) || (iVar4 < iVar2)) break;
          lVar6 = 0;
          while (*(char *)((iVar4 - lVar12) + lVar9 + lVar6) == *(char *)(lVar10 + lVar6)) {
            lVar6 = lVar6 + 1;
            if (iVar2 - (int)lVar6 < 1) goto LAB_00101523;
          }
          lVar5 = lVar5 + 1;
          lVar10 = lVar10 + lVar12;
          if (iVar1 == lVar5) goto LAB_00101620;
        }
        lVar5 = lVar5 + 1;
        lVar10 = lVar10 + lVar12;
      } while (iVar1 != lVar5);
    }
LAB_00101620:
  } while (iVar7 + iVar4 != 0);
  iVar4 = 0;
LAB_00101523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSetStringSpan::spanBackUTF8(unsigned char const*, int, USetSpanCondition)
   const */

ulong __thiscall
icu_76_godot::UnicodeSetStringSpan::spanBackUTF8
          (UnicodeSetStringSpan *this,long param_1,int param_2,int param_4)

{
  UnicodeSetStringSpan *pUVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  size_t __n;
  long in_FS_OFFSET;
  int local_6c;
  char *local_68;
  undefined8 local_60;
  uint local_58;
  char local_54 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = spanNotBackUTF8((uchar *)this,(int)param_1);
      return uVar10;
    }
    goto LAB_00101d35;
  }
  pUVar1 = this + 8;
  uVar8 = icu_76_godot::UnicodeSet::spanBackUTF8(pUVar1,param_1,param_2,1);
  uVar10 = (ulong)uVar8;
  if (uVar8 != 0) {
    uVar8 = param_2 - uVar8;
    local_60 = 0;
    local_58 = 0;
    local_68 = local_54;
    if (param_4 == 1) {
      iVar4 = *(int *)(this + 0x100);
      if (iVar4 < 0x11) {
        local_60 = 0x10;
        __n = 0x10;
      }
      else {
        __n = (size_t)iVar4;
        pcVar13 = (char *)uprv_malloc_76_godot(__n);
        if (pcVar13 == (char *)0x0) {
          __n = (size_t)(int)local_60;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,iVar4);
          local_68 = pcVar13;
        }
      }
      memset(local_68,0,__n);
    }
    lVar21 = *(long *)(this + 0xe8);
    iVar4 = *(int *)(*(long *)(this + 0xd8) + 8);
    if (this[0x104] != (UnicodeSetStringSpan)0x0) {
      lVar21 = lVar21 + iVar4 * 3;
    }
LAB_0010173d:
    do {
      pbVar20 = *(byte **)(this + 0xf0);
      if (param_4 == 1) {
        lVar22 = 0;
        iVar15 = (int)uVar10;
        if (0 < iVar4) {
          do {
            iVar18 = *(int *)(*(long *)(this + 0xe0) + lVar22 * 4);
            if (iVar18 != 0) {
              bVar2 = *(byte *)(lVar21 + lVar22);
              uVar9 = (uint)bVar2;
              if (bVar2 != 0xff) {
                if (bVar2 == 0xfe) {
                  bVar2 = *pbVar20;
                  if (((byte)(bVar2 + 0x3e) < 0x33) && (iVar18 != 1)) {
                    bVar3 = pbVar20[1];
                    if ((byte)(bVar2 + 0x20) < 0x10) {
                      iVar17 = 1;
                      if ((((uint)(int)(char)(&_LC0)[bVar2 & 0xf] >> (bVar3 >> 5) & 1) != 0) &&
                         (iVar17 = 2, iVar18 != 2)) {
                        iVar17 = ((char)pbVar20[2] < -0x40) + 2;
                      }
                    }
                    else if (bVar2 < 0xe0) {
                      iVar17 = ((char)bVar3 < -0x40) + 1;
                    }
                    else {
                      iVar17 = 1;
                      if ((((((uint)(int)(char)(&DAT_001031bb)[bVar3 >> 4] >> (bVar2 & 7) & 1) != 0)
                           && (iVar17 = 2, iVar18 != 2)) && ((char)pbVar20[2] < -0x40)) &&
                         (iVar17 = 3, iVar18 != 3)) {
                        iVar17 = ((char)pbVar20[3] < -0x40) + 3;
                      }
                    }
                  }
                  else {
                    iVar17 = 1;
                  }
                  uVar9 = iVar18 - iVar17;
                }
                if ((int)uVar8 <= (int)uVar9) {
                  uVar9 = uVar8;
                }
                iVar17 = iVar18 - uVar9;
                pcVar13 = (char *)(((long)iVar15 - (long)iVar17) + param_1);
                for (; iVar17 <= iVar15; iVar17 = iVar17 + 1) {
                  if (-0x41 < *pcVar13) {
                    iVar16 = local_58 + iVar17;
                    if ((int)local_60 <= iVar16) {
                      iVar16 = iVar16 - (int)local_60;
                    }
                    if (local_68[iVar16] == '\0') {
                      lVar11 = 0;
                      do {
                        if (pcVar13[lVar11] != pbVar20[lVar11]) goto joined_r0x00101933;
                        lVar11 = lVar11 + 1;
                      } while (0 < iVar18 - (int)lVar11);
                      if (iVar15 == iVar17) {
                        uVar10 = 0;
                        goto LAB_0010186c;
                      }
                      local_68[iVar16] = '\x01';
                      local_60._4_4_ = (int)((ulong)local_60 >> 0x20);
                      local_60 = CONCAT44(local_60._4_4_ + 1,(int)local_60);
                    }
                  }
joined_r0x00101933:
                  if (iVar18 == iVar17) break;
                  pcVar13 = pcVar13 + -1;
                }
              }
              pbVar20 = pbVar20 + iVar18;
            }
            lVar22 = lVar22 + 1;
          } while (iVar4 != lVar22);
        }
      }
      else {
        while (0 < iVar4) {
          lVar22 = 0;
          uVar9 = 0;
          iVar18 = 0;
          iVar15 = (int)uVar10;
          pbVar19 = pbVar20;
          do {
            while( true ) {
              uVar5 = *(uint *)(*(long *)(this + 0xe0) + lVar22 * 4);
              if (uVar5 == 0) break;
              uVar12 = (uint)*(byte *)(lVar21 + lVar22);
              if (0xfd < *(byte *)(lVar21 + lVar22)) {
                uVar12 = uVar5;
              }
              if ((int)uVar8 < (int)uVar12) {
                uVar12 = uVar8;
              }
              iVar16 = uVar5 - uVar12;
              uVar6 = uVar9;
              iVar17 = iVar18;
              if (((int)uVar9 <= (int)uVar12) && (iVar16 <= iVar15)) {
                pcVar13 = (char *)(((long)iVar15 - (long)iVar16) + param_1);
                do {
                  if ((-0x41 < *pcVar13) && (((int)uVar9 < (int)uVar12 || (iVar18 < iVar16)))) {
                    lVar11 = 0;
                    while (pcVar13[lVar11] == pbVar19[lVar11]) {
                      lVar11 = lVar11 + 1;
                      uVar6 = uVar12;
                      iVar17 = iVar16;
                      if ((int)(uVar5 - (int)lVar11) < 1) goto LAB_00101840;
                    }
                  }
                  iVar16 = iVar16 + 1;
                  uVar12 = uVar12 - 1;
                  pcVar13 = pcVar13 + -1;
                  uVar6 = uVar9;
                  iVar17 = iVar18;
                } while ((iVar16 <= iVar15) && ((int)uVar9 <= (int)uVar12));
              }
LAB_00101840:
              iVar18 = iVar17;
              uVar9 = uVar6;
              pbVar19 = pbVar19 + (int)uVar5;
              lVar22 = lVar22 + 1;
              if (iVar4 == lVar22) goto LAB_0010184d;
            }
            lVar22 = lVar22 + 1;
          } while (iVar4 != lVar22);
LAB_0010184d:
          if (uVar9 == 0 && iVar18 == 0) break;
          uVar10 = (ulong)(uint)(iVar15 - iVar18);
          if (iVar15 - iVar18 == 0) goto LAB_0010186c;
          uVar8 = 0;
        }
      }
      iVar15 = (int)uVar10;
      if ((uVar8 != 0) || (param_2 == iVar15)) {
        if (local_60._4_4_ != 0) {
LAB_00101a74:
          uVar10 = (ulong)(int)local_58;
          pcVar13 = local_68 + uVar10 + 1;
LAB_00101aa0:
          pcVar14 = pcVar13;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar9;
          if ((int)uVar9 < (int)local_60) goto LAB_00101a90;
          iVar18 = (int)local_60 - local_58;
          if (*local_68 == '\0') {
            pcVar14 = local_68 + 1;
            do {
              pcVar13 = pcVar14;
              pcVar14 = pcVar13 + 1;
            } while (*pcVar13 == '\0');
            uVar9 = ((int)pcVar13 - (int)(local_68 + 1)) + 1;
            iVar18 = iVar18 + uVar9;
          }
          else {
            uVar9 = 0;
            pcVar13 = local_68;
          }
          *pcVar13 = '\0';
          goto LAB_00101ae1;
        }
        goto LAB_0010186c;
      }
      if (local_60._4_4_ == 0) {
        uVar9 = icu_76_godot::UnicodeSet::spanBackUTF8(pUVar1,param_1,uVar10,1);
        uVar8 = iVar15 - uVar9;
        if ((uVar9 == 0) || (uVar8 == 0)) goto LAB_00101c10;
        uVar10 = (ulong)uVar9;
        goto LAB_0010173d;
      }
      cVar7 = *(char *)(param_1 + -1 + (long)iVar15);
      if (cVar7 < '\0') {
        local_6c = iVar15 + -1;
        utf8_prevCharSafeBody_76_godot(param_1,0,&local_6c,cVar7);
        iVar18 = local_6c;
        cVar7 = icu_76_godot::UnicodeSet::contains((int)pUVar1);
        iVar17 = iVar18 - iVar15;
        if (cVar7 != '\0') {
          iVar17 = iVar15 - iVar18;
        }
        if (iVar17 < 1) goto LAB_00101a74;
      }
      else {
        cVar7 = icu_76_godot::UnicodeSet::contains((int)pUVar1);
        if (cVar7 == '\0') goto LAB_00101a74;
        iVar17 = 1;
      }
      if (iVar17 == iVar15) {
        uVar10 = 0;
        goto LAB_0010186c;
      }
      uVar10 = (ulong)(uint)(iVar15 - iVar17);
      local_58 = iVar17 + local_58;
      if ((int)local_60 <= (int)local_58) {
        local_58 = local_58 - (int)local_60;
      }
      if (local_68[(int)local_58] != '\0') {
        local_68[(int)local_58] = '\0';
        local_60 = CONCAT44(local_60._4_4_ + -1,(int)local_60);
      }
      uVar8 = 0;
    } while( true );
  }
  goto LAB_00101879;
LAB_00101a90:
  pcVar13 = pcVar14 + 1;
  if (*pcVar14 != '\0') goto LAB_00101b90;
  goto LAB_00101aa0;
LAB_00101b90:
  *pcVar14 = '\0';
  iVar18 = uVar9 - local_58;
LAB_00101ae1:
  local_60 = CONCAT44(local_60._4_4_ + -1,(int)local_60);
  uVar10 = (ulong)(uint)(iVar15 - iVar18);
  uVar8 = 0;
  local_58 = uVar9;
  goto LAB_0010173d;
LAB_00101c10:
  uVar10 = (ulong)uVar9;
LAB_0010186c:
  if (local_68 != local_54) {
    uprv_free_76_godot(local_68);
  }
LAB_00101879:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_00101d35:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSetStringSpan::spanNotBack(char16_t const*, int) const */

int __thiscall
icu_76_godot::UnicodeSetStringSpan::spanNotBack
          (UnicodeSetStringSpan *this,wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 in_register_00000014;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int local_3c;
  
  uVar9 = CONCAT44(in_register_00000014,param_2);
  iVar11 = (int)this + 8;
  iVar3 = *(int *)(*(long *)(this + 0xd8) + 8);
  do {
    iVar5 = icu_76_godot::UnicodeSet::spanBack(*(undefined8 *)(this + 0xd0),param_1,uVar9,0);
    if (iVar5 == 0) {
      return 0;
    }
    if ((((ushort)(param_1[(long)iVar5 + -1] + L'␀') < 0x400) && (1 < iVar5)) &&
       ((param_1[(long)iVar5 + -2] & 0xfc00U) == 0xd800)) {
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar11);
      if (cVar4 != '\0') {
        return iVar5;
      }
      local_3c = -2;
    }
    else {
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar11);
      if (cVar4 != '\0') {
        return iVar5;
      }
      local_3c = -1;
    }
    lVar13 = 0;
    if (0 < iVar3) {
LAB_00101e30:
      do {
        if (*(char *)(*(long *)(this + 0xe8) + lVar13) != -1) {
          lVar6 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
          uVar2 = *(ushort *)(lVar6 + 8);
          if ((uVar2 & 0x11) == 0) {
            lVar10 = lVar6 + 10;
            if ((uVar2 & 2) == 0) {
              lVar10 = *(long *)(lVar6 + 0x18);
            }
          }
          else {
            lVar10 = 0;
          }
          if ((short)uVar2 < 0) {
            lVar6 = (long)*(int *)(lVar6 + 0xc);
          }
          else {
            lVar6 = (long)((short)uVar2 >> 5);
          }
          iVar8 = (int)lVar6;
          if (iVar8 <= iVar5) {
            iVar12 = iVar5 - iVar8;
            pwVar1 = param_1 + iVar12;
            lVar7 = 0;
            do {
              if (pwVar1[lVar7] != *(wchar16 *)(lVar10 + lVar7 * 2)) goto LAB_00101eb0;
              lVar7 = lVar7 + 1;
            } while (0 < iVar8 - (int)lVar7);
            if (((iVar12 != 0) && ((pwVar1[-1] & 0xfc00U) == 0xd800)) &&
               ((*pwVar1 & 0xfc00U) == 0xdc00)) {
              lVar13 = lVar13 + 1;
              if (iVar3 == lVar13) break;
              goto LAB_00101e30;
            }
            if (param_2 - iVar12 <= iVar8) {
              return iVar5;
            }
            if ((pwVar1[lVar6 + -1] & 0xfc00U) != 0xd800) {
              return iVar5;
            }
            if ((pwVar1[lVar6] & 0xfc00U) != 0xdc00) {
              return iVar5;
            }
          }
        }
LAB_00101eb0:
        lVar13 = lVar13 + 1;
      } while (iVar3 != lVar13);
    }
    uVar9 = (ulong)(uint)(local_3c + iVar5);
    if (local_3c + iVar5 == 0) {
      return 0;
    }
  } while( true );
}



/* icu_76_godot::UnicodeSetStringSpan::spanBack(char16_t const*, int, USetSpanCondition) const */

ulong __thiscall
icu_76_godot::UnicodeSetStringSpan::spanBack
          (UnicodeSetStringSpan *this,wchar16 *param_1,uint param_2,int param_4)

{
  wchar16 *pwVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  UnicodeSetStringSpan *pUVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  size_t __n;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  long in_FS_OFFSET;
  long local_b0;
  uint local_94;
  char *local_68;
  undefined8 local_60;
  uint local_58;
  char local_54 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = spanNotBack(this,param_1,param_2);
      return uVar7;
    }
    goto LAB_001026f8;
  }
  pUVar8 = this + 8;
  local_94 = icu_76_godot::UnicodeSet::spanBack(pUVar8,param_1,param_2,1);
  uVar7 = (ulong)local_94;
  if (local_94 != 0) {
    local_94 = param_2 - local_94;
    local_60 = 0;
    local_58 = 0;
    local_68 = local_54;
    if (param_4 == 1) {
      uVar13 = *(uint *)(this + 0xfc);
      if ((int)uVar13 < 0x11) {
        local_60 = 0x10;
        __n = 0x10;
      }
      else {
        __n = (size_t)(int)uVar13;
        local_68 = (char *)uprv_malloc_76_godot(__n);
        if (local_68 == (char *)0x0) {
          __n = 0;
          local_68 = local_54;
        }
        else {
          local_60 = (ulong)uVar13;
        }
      }
      memset(local_68,0,__n);
    }
    local_b0 = *(long *)(this + 0xe8);
    iVar4 = *(int *)(*(long *)(this + 0xd8) + 8);
    if (this[0x104] != (UnicodeSetStringSpan)0x0) {
      local_b0 = local_b0 + iVar4;
    }
LAB_0010206c:
    do {
      uVar13 = (uint)uVar7;
      if (param_4 == 1) {
        lVar21 = 0;
        if (0 < iVar4) {
          do {
            while( true ) {
              bVar2 = *(byte *)(local_b0 + lVar21);
              uVar6 = (uint)bVar2;
              if (bVar2 != 0xff) break;
LAB_001022b0:
              lVar21 = lVar21 + 1;
              if (iVar4 == lVar21) goto LAB_001024a8;
            }
            lVar9 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
            uVar3 = *(ushort *)(lVar9 + 8);
            if ((uVar3 & 0x11) == 0) {
              puVar18 = (ushort *)(lVar9 + 10);
              if ((uVar3 & 2) == 0) {
                puVar18 = *(ushort **)(lVar9 + 0x18);
              }
            }
            else {
              puVar18 = (ushort *)0x0;
            }
            if ((short)uVar3 < 0) {
              uVar10 = *(uint *)(lVar9 + 0xc);
            }
            else {
              uVar10 = (uint)((short)uVar3 >> 5);
            }
            if (bVar2 == 0xfe) {
              if (((*puVar18 & 0xfc00) == 0xd800) && (uVar10 != 1)) {
                iVar14 = ((puVar18[1] & 0xfc00) == 0xdc00) + 1;
              }
              else {
                iVar14 = 1;
              }
              uVar6 = uVar10 - iVar14;
            }
            if ((int)local_94 <= (int)uVar6) {
              uVar6 = local_94;
            }
            uVar6 = uVar10 - uVar6;
            if ((int)uVar13 < (int)uVar6) goto LAB_001022b0;
            uVar20 = uVar13 - uVar6;
            iVar14 = (param_2 - uVar13) + uVar6;
            do {
              iVar11 = local_58 + uVar6;
              if ((int)local_60 <= iVar11) {
                iVar11 = iVar11 - (int)local_60;
              }
              if (local_68[iVar11] == '\0') {
                uVar7 = (ulong)uVar20;
                pwVar1 = param_1 + (int)uVar20;
                lVar9 = 0;
                do {
                  if (pwVar1[lVar9] != puVar18[lVar9]) goto LAB_001023b0;
                  lVar9 = lVar9 + 1;
                } while (0 < (int)(uVar10 - (int)lVar9));
                if (uVar20 == 0) {
                  if (iVar14 <= (int)uVar10) goto LAB_00102205;
LAB_00102429:
                  if (((pwVar1[(long)(int)uVar10 + -1] & 0xfc00U) != 0xd800) ||
                     ((pwVar1[(int)uVar10] & 0xfc00U) != 0xdc00)) {
LAB_00102403:
                    if (uVar13 == uVar6) {
                      uVar7 = 0;
                      goto LAB_00102205;
                    }
                    local_68[iVar11] = '\x01';
                    local_60 = CONCAT44(local_60._4_4_ + 1,(int)local_60);
                  }
                }
                else if (((pwVar1[-1] & 0xfc00U) != 0xd800) || ((*pwVar1 & 0xfc00U) != 0xdc00)) {
                  if ((int)uVar10 < iVar14) goto LAB_00102429;
                  goto LAB_00102403;
                }
              }
LAB_001023b0:
              if (uVar10 == uVar6) goto LAB_001022b0;
              uVar6 = uVar6 + 1;
              uVar20 = uVar20 - 1;
              iVar14 = iVar14 + 1;
            } while ((int)uVar6 <= (int)uVar13);
            lVar21 = lVar21 + 1;
          } while (iVar4 != lVar21);
        }
      }
      else {
        while (uVar13 = (uint)uVar7, 0 < iVar4) {
          lVar21 = 0;
          uVar6 = 0;
          iVar14 = 0;
          do {
            bVar2 = *(byte *)(local_b0 + lVar21);
            lVar9 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xd8));
            uVar3 = *(ushort *)(lVar9 + 8);
            if ((uVar3 & 0x11) == 0) {
              lVar17 = lVar9 + 10;
              if ((uVar3 & 2) == 0) {
                lVar17 = *(long *)(lVar9 + 0x18);
              }
            }
            else {
              lVar17 = 0;
            }
            if ((short)uVar3 < 0) {
              uVar10 = *(uint *)(lVar9 + 0xc);
            }
            else {
              uVar10 = (uint)((short)uVar3 >> 5);
            }
            iVar11 = iVar14;
            uVar20 = uVar6;
            if (uVar10 != 0) {
              uVar15 = (uint)bVar2;
              if (0xfd < bVar2) {
                uVar15 = uVar10;
              }
              if ((int)local_94 <= (int)uVar15) {
                uVar15 = local_94;
              }
              iVar19 = uVar10 - uVar15;
              if ((iVar19 <= (int)uVar13) && ((int)uVar6 <= (int)uVar15)) {
                do {
                  if (((int)uVar6 < (int)uVar15) || (iVar14 < iVar19)) {
                    pwVar1 = param_1 + (int)(uVar13 - iVar19);
                    lVar9 = 0;
                    do {
                      if (pwVar1[lVar9] != *(wchar16 *)(lVar17 + lVar9 * 2)) goto LAB_00102140;
                      lVar9 = lVar9 + 1;
                    } while (0 < (int)(uVar10 - (int)lVar9));
                    if ((((uVar13 - iVar19 == 0) || ((pwVar1[-1] & 0xfc00U) != 0xd800)) ||
                        ((*pwVar1 & 0xfc00U) != 0xdc00)) &&
                       (((iVar11 = iVar19, uVar20 = uVar15,
                         (int)((param_2 - uVar13) + iVar19) <= (int)uVar10 ||
                         ((pwVar1[(long)(int)uVar10 + -1] & 0xfc00U) != 0xd800)) ||
                        ((pwVar1[(int)uVar10] & 0xfc00U) != 0xdc00)))) break;
                  }
LAB_00102140:
                  iVar19 = iVar19 + 1;
                  uVar15 = uVar15 - 1;
                  iVar11 = iVar14;
                  uVar20 = uVar6;
                  if (((int)uVar13 < iVar19) || ((int)uVar15 < (int)uVar6)) break;
                } while( true );
              }
            }
            uVar6 = uVar20;
            iVar14 = iVar11;
            lVar21 = lVar21 + 1;
          } while (lVar21 != iVar4);
          if (uVar6 == 0 && iVar14 == 0) break;
          local_94 = 0;
          uVar7 = (ulong)(uVar13 - iVar14);
          if (uVar13 - iVar14 == 0) goto LAB_001021fd;
        }
      }
LAB_001024a8:
      uVar7 = (ulong)uVar13;
      if ((local_94 != 0) || (uVar13 == param_2)) {
        if (local_60._4_4_ != 0) goto LAB_00102514;
        goto LAB_00102205;
      }
      if (local_60._4_4_ != 0) {
        iVar14 = (int)pUVar8;
        if (((ushort)(param_1[(long)(int)uVar13 + -1] + L'␀') < 0x400) && (1 < (int)uVar13)) {
          if ((param_1[(long)(int)uVar13 + -2] & 0xfc00U) == 0xd800) {
            cVar5 = icu_76_godot::UnicodeSet::contains(iVar14);
            uVar6 = 2;
            if (cVar5 == '\0') goto LAB_00102514;
            goto LAB_00102669;
          }
          cVar5 = icu_76_godot::UnicodeSet::contains(iVar14);
          uVar6 = 1;
          if (cVar5 == '\0') {
LAB_00102514:
            uVar7 = (ulong)(int)local_58;
            pcVar16 = local_68 + uVar7 + 1;
LAB_00102540:
            pcVar12 = pcVar16;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar6;
            if ((int)uVar6 < (int)local_60) goto LAB_00102530;
            iVar14 = (int)local_60 - local_58;
            if (*local_68 == '\0') {
              pcVar12 = local_68 + 1;
              do {
                pcVar16 = pcVar12;
                pcVar12 = pcVar16 + 1;
              } while (*pcVar16 == '\0');
              uVar6 = ((int)pcVar16 - (int)(local_68 + 1)) + 1;
              iVar14 = iVar14 + uVar6;
            }
            else {
              uVar6 = 0;
              pcVar16 = local_68;
            }
            *pcVar16 = '\0';
            goto LAB_00102581;
          }
        }
        else {
          cVar5 = icu_76_godot::UnicodeSet::contains(iVar14);
          if (cVar5 == '\0') goto LAB_00102514;
          uVar6 = 1;
LAB_00102669:
          if (uVar13 == uVar6) {
LAB_001021fd:
            uVar7 = 0;
            goto LAB_00102205;
          }
        }
        uVar7 = (ulong)(uVar13 - uVar6);
        local_58 = uVar6 + local_58;
        if ((int)local_60 <= (int)local_58) {
          local_58 = local_58 - (int)local_60;
        }
        if (local_68[(int)local_58] != '\0') {
          local_68[(int)local_58] = '\0';
          local_60 = CONCAT44(local_60._4_4_ + -1,(int)local_60);
        }
        local_94 = 0;
        goto LAB_0010206c;
      }
      uVar6 = icu_76_godot::UnicodeSet::spanBack(pUVar8,param_1,uVar13,1);
      local_94 = uVar13 - uVar6;
      uVar7 = (ulong)uVar6;
      if ((uVar6 == 0) || (local_94 == 0)) goto LAB_001024f2;
    } while( true );
  }
  goto LAB_0010221a;
LAB_00102530:
  pcVar16 = pcVar12 + 1;
  if (*pcVar12 != '\0') goto LAB_001025b9;
  goto LAB_00102540;
LAB_001025b9:
  *pcVar12 = '\0';
  iVar14 = uVar6 - local_58;
LAB_00102581:
  local_60 = CONCAT44(local_60._4_4_ + -1,(int)local_60);
  uVar7 = (ulong)(uVar13 - iVar14);
  local_94 = 0;
  local_58 = uVar6;
  goto LAB_0010206c;
LAB_001024f2:
  uVar7 = (ulong)uVar6;
LAB_00102205:
  if (local_68 != local_54) {
    uprv_free_76_godot(local_68);
  }
LAB_0010221a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_001026f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSetStringSpan::spanNotUTF8(unsigned char const*, int) const */

int __thiscall
icu_76_godot::UnicodeSetStringSpan::spanNotUTF8
          (UnicodeSetStringSpan *this,uchar *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  lVar13 = *(long *)(this + 0xe8);
  iVar2 = *(int *)(*(long *)(this + 0xd8) + 8);
  if (this[0x104] != (UnicodeSetStringSpan)0x0) {
    lVar13 = lVar13 + iVar2 * 2;
  }
  iVar10 = (int)this + 8;
  iVar12 = 0;
  iVar14 = param_2;
  do {
    iVar5 = icu_76_godot::UnicodeSet::spanUTF8(*(undefined8 *)(this + 0xd0),param_1 + iVar12,iVar14)
    ;
    if (iVar14 == iVar5) {
      return param_2;
    }
    iVar12 = iVar12 + iVar5;
    iVar14 = iVar14 - iVar5;
    pbVar8 = param_1 + iVar12;
    bVar1 = *pbVar8;
    if ((char)bVar1 < '\0') {
      if (iVar14 == 1) {
LAB_00102810:
        iVar5 = 1;
      }
      else {
        uVar9 = (uint)bVar1;
        if (bVar1 < 0xe0) {
          if (0xc1 < uVar9) {
            lVar11 = 1;
            iVar5 = 1;
LAB_0010290a:
            if ((byte)(pbVar8[lVar11] + 0x80) < 0x40) {
              iVar5 = iVar5 + 1;
            }
            goto LAB_0010281b;
          }
          goto LAB_00102810;
        }
        if (uVar9 < 0xf0) {
          if (((uint)(int)(char)(&_LC0)[bVar1 & 0xf] >> (pbVar8[1] >> 5) & 1) == 0)
          goto LAB_00102810;
          iVar5 = 2;
LAB_0010298c:
          if (iVar5 != iVar14) {
            lVar11 = (long)iVar5;
            goto LAB_0010290a;
          }
        }
        else {
          if ((4 < (int)(uVar9 - 0xf0)) ||
             (((uint)(int)(char)(&DAT_001031bb)[pbVar8[1] >> 4] >> (uVar9 - 0xf0 & 0x1f) & 1) == 0))
          goto LAB_00102810;
          if ((iVar14 != 2) && ((byte)(pbVar8[2] + 0x80) < 0x40)) {
            iVar5 = 3;
            goto LAB_0010298c;
          }
          iVar5 = 2;
        }
      }
LAB_0010281b:
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar10);
      if (cVar4 != '\0') {
        return iVar12;
      }
      iVar5 = -iVar5;
    }
    else {
      cVar4 = icu_76_godot::UnicodeSet::contains(iVar10);
      if (cVar4 != '\0') {
        return iVar12;
      }
      iVar5 = -1;
    }
    lVar11 = *(long *)(this + 0xf0);
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        iVar3 = *(int *)(*(long *)(this + 0xe0) + lVar7 * 4);
        if (((iVar3 != 0) && (*(char *)(lVar13 + lVar7) != -1)) && (iVar3 <= iVar14)) {
          lVar6 = 0;
          while (pbVar8[lVar6] == *(byte *)(lVar11 + lVar6)) {
            lVar6 = lVar6 + 1;
            if (iVar3 - (int)lVar6 < 1) {
              return iVar12;
            }
          }
        }
        lVar7 = lVar7 + 1;
        lVar11 = lVar11 + iVar3;
      } while (lVar7 != iVar2);
    }
    iVar12 = iVar12 - iVar5;
    iVar14 = iVar5 + iVar14;
    if (iVar14 == 0) {
      return param_2;
    }
  } while( true );
}



/* icu_76_godot::UnicodeSetStringSpan::spanUTF8(unsigned char const*, int, USetSpanCondition) const
    */

ulong __thiscall
icu_76_godot::UnicodeSetStringSpan::spanUTF8
          (UnicodeSetStringSpan *this,uchar *param_1,uint param_2,int param_4)

{
  UnicodeSetStringSpan *pUVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uchar *puVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  size_t __n;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  char *pcVar22;
  byte *pbVar23;
  uint uVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  uint local_a0;
  char *local_68;
  int local_60;
  int iStack_5c;
  uint local_58;
  char local_54 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = spanNotUTF8(this,param_1,param_2);
      return uVar10;
    }
    goto LAB_0010318a;
  }
  pUVar1 = this + 8;
  uVar8 = icu_76_godot::UnicodeSet::spanUTF8(pUVar1);
  if (param_2 != uVar8) {
    local_60 = 0;
    local_58 = 0;
    local_68 = local_54;
    if (param_4 == 1) {
      iVar4 = *(int *)(this + 0x100);
      if (iVar4 < 0x11) {
        local_60 = 0x10;
        __n = 0x10;
        iVar4 = local_60;
      }
      else {
        __n = (size_t)iVar4;
        local_68 = (char *)uprv_malloc_76_godot(__n);
        if (local_68 == (char *)0x0) {
          __n = 0;
          local_68 = local_54;
          iVar4 = local_60;
        }
      }
      local_60 = iVar4;
      memset(local_68,0,__n);
    }
    iStack_5c = 0;
    pbVar23 = *(byte **)(this + 0xe8);
    uVar17 = param_2 - uVar8;
    iVar4 = *(int *)(*(long *)(this + 0xd8) + 8);
    if (this[0x104] != (UnicodeSetStringSpan)0x0) {
      pbVar23 = pbVar23 + iVar4 * 2;
    }
    local_a0 = uVar8;
    uVar9 = uVar8;
LAB_00102ace:
    do {
      lVar15 = *(long *)(this + 0xf0);
      uVar8 = param_2;
      if (param_4 == 1) {
        lVar16 = 0;
        if (0 < iVar4) {
          do {
            uVar24 = *(uint *)(*(long *)(this + 0xe0) + lVar16 * 4);
            if (uVar24 != 0) {
              bVar3 = pbVar23[lVar16];
              uVar19 = (uint)bVar3;
              if (bVar3 != 0xff) {
                if ((bVar3 == 0xfe) &&
                   (uVar19 = uVar24 - 1, *(char *)(lVar15 + (int)uVar19) < -0x40)) {
                  uVar19 = utf8_back1SafeBody_76_godot(lVar15,0);
                }
                if ((int)uVar9 <= (int)uVar19) {
                  uVar19 = uVar9;
                }
                puVar13 = param_1 + ((long)(int)local_a0 - (long)(int)uVar19);
                for (uVar19 = uVar24 - uVar19; (int)uVar19 <= (int)uVar17; uVar19 = uVar19 + 1) {
                  if (-0x41 < (char)*puVar13) {
                    iVar20 = local_58 + uVar19;
                    if (local_60 <= iVar20) {
                      iVar20 = iVar20 - local_60;
                    }
                    if (local_68[iVar20] == '\0') {
                      lVar11 = 0;
                      do {
                        if (puVar13[lVar11] != *(uchar *)(lVar15 + lVar11)) goto joined_r0x00102d03;
                        lVar11 = lVar11 + 1;
                      } while (0 < (int)(uVar24 - (int)lVar11));
                      if (uVar17 == uVar19) goto LAB_00102c26;
                      local_68[iVar20] = '\x01';
                      iStack_5c = iStack_5c + 1;
                    }
                  }
joined_r0x00102d03:
                  if (uVar24 == uVar19) break;
                  puVar13 = puVar13 + 1;
                }
              }
              lVar15 = lVar15 + (int)uVar24;
            }
            lVar16 = lVar16 + 1;
          } while (iVar4 != lVar16);
        }
        if (uVar9 == 0) goto LAB_00102d99;
LAB_00102e57:
        uVar8 = local_a0;
        if (iStack_5c != 0) {
LAB_00102e5f:
          uVar10 = (ulong)(int)local_58;
          pcVar22 = local_68 + uVar10 + 1;
LAB_00102e90:
          pcVar14 = pcVar22;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar8;
          if ((int)uVar8 < local_60) goto LAB_00102e80;
          iVar20 = local_60 - local_58;
          if (*local_68 == '\0') {
            pcVar14 = local_68 + 1;
            do {
              pcVar22 = pcVar14;
              pcVar14 = pcVar22 + 1;
            } while (*pcVar22 == '\0');
            uVar8 = ((int)pcVar22 - (int)(local_68 + 1)) + 1;
            iVar20 = iVar20 + uVar8;
          }
          else {
            uVar8 = 0;
            pcVar22 = local_68;
          }
          *pcVar22 = '\0';
          goto LAB_00102ece;
        }
        goto LAB_00102c26;
      }
      while (0 < iVar4) {
        uVar24 = 0;
        iVar20 = 0;
        puVar21 = *(uint **)(this + 0xe0);
        puVar2 = puVar21 + iVar4;
        lVar16 = lVar15;
        pbVar25 = pbVar23;
        do {
          while( true ) {
            uVar19 = *puVar21;
            if (uVar19 == 0) break;
            uVar12 = (uint)*pbVar25;
            if (0xfd < *pbVar25) {
              uVar12 = uVar19;
            }
            if ((int)uVar9 < (int)uVar12) {
              uVar12 = uVar9;
            }
            iVar18 = uVar19 - uVar12;
            uVar5 = uVar24;
            iVar6 = iVar20;
            if (((int)uVar24 <= (int)uVar12) && (iVar18 <= (int)uVar17)) {
              puVar13 = param_1 + ((long)(int)local_a0 - (long)(int)uVar12);
              do {
                if ((-0x41 < (char)*puVar13) && (((int)uVar24 < (int)uVar12 || (iVar20 < iVar18))))
                {
                  lVar11 = 0;
                  while (puVar13[lVar11] == *(uchar *)(lVar16 + lVar11)) {
                    lVar11 = lVar11 + 1;
                    uVar5 = uVar12;
                    iVar6 = iVar18;
                    if ((int)(uVar19 - (int)lVar11) < 1) goto LAB_00102be8;
                  }
                }
                iVar18 = iVar18 + 1;
                uVar12 = uVar12 - 1;
                puVar13 = puVar13 + 1;
                uVar5 = uVar24;
                iVar6 = iVar20;
              } while ((iVar18 <= (int)uVar17) && ((int)uVar24 <= (int)uVar12));
            }
LAB_00102be8:
            iVar20 = iVar6;
            uVar24 = uVar5;
            lVar16 = lVar16 + (int)uVar19;
            puVar21 = puVar21 + 1;
            pbVar25 = pbVar25 + 1;
            if (puVar2 == puVar21) goto LAB_00102bfa;
          }
          puVar21 = puVar21 + 1;
          pbVar25 = pbVar25 + 1;
        } while (puVar2 != puVar21);
LAB_00102bfa:
        if (uVar24 == 0 && iVar20 == 0) break;
        uVar17 = uVar17 - iVar20;
        if (uVar17 == 0) goto LAB_00102c26;
        local_a0 = local_a0 + iVar20;
        uVar9 = 0;
      }
      if (uVar9 != 0) goto LAB_00102e57;
LAB_00102d99:
      if (local_a0 == 0) goto LAB_00102e57;
      pbVar25 = param_1 + (int)local_a0;
      if (iStack_5c == 0) {
        uVar9 = icu_76_godot::UnicodeSet::spanUTF8(pUVar1,pbVar25,uVar17);
        if ((uVar9 == uVar17) || (uVar9 == 0)) goto LAB_00102f8b;
        local_a0 = local_a0 + uVar9;
        uVar17 = uVar17 - uVar9;
        goto LAB_00102ace;
      }
      bVar3 = *pbVar25;
      iVar20 = (int)pUVar1;
      if ((char)bVar3 < '\0') {
        if (uVar17 == 1) {
LAB_001030d5:
          cVar7 = icu_76_godot::UnicodeSet::contains(iVar20);
          if (cVar7 == '\0') goto LAB_00102e5f;
          goto LAB_00102c26;
        }
        uVar9 = (uint)bVar3;
        if (bVar3 < 0xe0) {
          if (0xc1 < uVar9) {
            lVar15 = 1;
            uVar9 = 1;
LAB_00103038:
            if ((byte)(pbVar25[lVar15] + 0x80) < 0x40) {
              uVar9 = uVar9 + 1;
            }
            cVar7 = icu_76_godot::UnicodeSet::contains(iVar20);
            if (cVar7 == '\0') goto LAB_00102e5f;
            goto LAB_00103009;
          }
LAB_00103072:
          uVar9 = 1;
        }
        else {
          if (uVar9 < 0xf0) {
            if (((uint)(int)(char)(&_LC0)[bVar3 & 0xf] >> (pbVar25[1] >> 5) & 1) != 0) {
              uVar9 = 2;
LAB_00102f59:
              if (uVar17 == uVar9) goto LAB_001030d5;
              lVar15 = (long)(int)uVar9;
              goto LAB_00103038;
            }
            goto LAB_00103072;
          }
          if ((4 < (int)(uVar9 - 0xf0)) ||
             (((uint)(int)(char)(&DAT_001031bb)[pbVar25[1] >> 4] >> (uVar9 - 0xf0 & 0x1f) & 1) == 0)
             ) goto LAB_00103072;
          if (uVar17 == 2) goto LAB_001030d5;
          if ((byte)(pbVar25[2] + 0x80) < 0x40) {
            uVar9 = 3;
            goto LAB_00102f59;
          }
          uVar9 = 2;
        }
        cVar7 = icu_76_godot::UnicodeSet::contains(iVar20);
        if (cVar7 == '\0') goto LAB_00102e5f;
      }
      else {
        cVar7 = icu_76_godot::UnicodeSet::contains(iVar20);
        if (cVar7 == '\0') goto LAB_00102e5f;
        uVar9 = 1;
LAB_00103009:
        if (uVar9 == uVar17) goto LAB_00102c26;
      }
      local_a0 = local_a0 + uVar9;
      uVar17 = uVar17 - uVar9;
      local_58 = uVar9 + local_58;
      if (local_60 <= (int)local_58) {
        local_58 = local_58 - local_60;
      }
      if (local_68[(int)local_58] != '\0') {
        local_68[(int)local_58] = '\0';
        iStack_5c = iStack_5c + -1;
      }
      uVar9 = 0;
    } while( true );
  }
  goto LAB_00102c36;
LAB_00102e80:
  pcVar22 = pcVar14 + 1;
  if (*pcVar14 != '\0') goto LAB_00102f78;
  goto LAB_00102e90;
LAB_00102f78:
  *pcVar14 = '\0';
  iVar20 = uVar8 - local_58;
LAB_00102ece:
  iStack_5c = iStack_5c + -1;
  local_a0 = local_a0 + iVar20;
  uVar17 = uVar17 - iVar20;
  uVar9 = 0;
  local_58 = uVar8;
  goto LAB_00102ace;
LAB_00102f8b:
  uVar8 = local_a0 + uVar9;
LAB_00102c26:
  if (local_68 != local_54) {
    uprv_free_76_godot(local_68);
  }
LAB_00102c36:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar8;
  }
LAB_0010318a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


