
/* icu_76_godot::UnicodeString::trim() */

UnicodeString * __thiscall icu_76_godot::UnicodeString::trim(UnicodeString *this)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UnicodeString *pUVar8;
  
  uVar1 = *(ushort *)(this + 8);
  if ((uVar1 & 1) == 0) {
    pUVar8 = this + 10;
    if ((uVar1 & 2) == 0) {
      pUVar8 = *(UnicodeString **)(this + 0x18);
    }
    if ((short)uVar1 < 0) {
      uVar5 = *(uint *)(this + 0xc);
    }
    else {
      uVar5 = (uint)((short)uVar1 >> 5);
    }
    uVar4 = uVar5;
    if (0 < (int)uVar5) {
LAB_0010004c:
      while( true ) {
        uVar6 = uVar4;
        uVar4 = uVar6 - 1;
        lVar3 = (long)(int)uVar4;
        uVar1 = *(ushort *)(pUVar8 + lVar3 * 2);
        uVar7 = (uint)uVar1;
        if ((uVar1 & 0xfc00) == 0xdc00) break;
        if (uVar1 != 0x20) {
LAB_001000ae:
          cVar2 = u_isWhitespace_76_godot(uVar7);
          if (cVar2 == '\0') goto LAB_001000b7;
        }
        if (uVar4 == 0) {
LAB_00100077:
          *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f;
          return this;
        }
      }
      if (uVar4 == 0) {
        cVar2 = u_isWhitespace_76_godot();
        if (cVar2 != '\0') goto LAB_00100077;
        uVar6 = uVar5;
        if (uVar5 != 1) {
          uVar6 = 1;
          *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | 0x20;
        }
      }
      else {
        if ((*(ushort *)(pUVar8 + lVar3 * 2 + -2) & 0xfffffc00) == 0xd800) {
          uVar4 = uVar6 - 2;
          uVar7 = uVar1 + 0xfca02400 + (uint)*(ushort *)(pUVar8 + lVar3 * 2 + -2) * 0x400;
          goto LAB_001000ae;
        }
        cVar2 = u_isWhitespace_76_godot();
        if (cVar2 != '\0') goto LAB_0010004c;
LAB_001000b7:
        if ((int)uVar6 < (int)uVar5) {
          if ((int)uVar6 < 0x400) {
            *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | (ushort)(uVar6 << 5);
          }
          else {
            *(uint *)(this + 0xc) = uVar6;
            *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
          }
        }
      }
      uVar5 = 0;
      goto LAB_00100100;
    }
  }
  return this;
LAB_00100100:
  do {
    uVar4 = uVar5 + 1;
    uVar1 = *(ushort *)(pUVar8 + (long)(int)uVar5 * 2);
    uVar7 = (uint)uVar1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (uVar4 != uVar6) {
        if ((*(ushort *)(pUVar8 + (long)(int)uVar5 * 2 + 2) & 0xfc00) == 0xdc00) {
          uVar4 = uVar5 + 2;
          uVar7 = *(ushort *)(pUVar8 + (long)(int)uVar5 * 2 + 2) + 0xfca02400 + (uint)uVar1 * 0x400;
        }
        goto LAB_00100158;
      }
      cVar2 = u_isWhitespace_76_godot();
      uVar4 = uVar6;
      if (cVar2 == '\0') {
LAB_00100161:
        uVar4 = uVar5;
        if ((int)uVar5 < 1) {
          return this;
        }
      }
      break;
    }
    if (uVar1 != 0x20) {
LAB_00100158:
      cVar2 = u_isWhitespace_76_godot(uVar7);
      if (cVar2 == '\0') goto LAB_00100161;
    }
    uVar5 = uVar4;
  } while ((int)uVar4 < (int)uVar6);
  icu_76_godot::UnicodeString::doReplace((int)this,0,(wchar16 *)(ulong)uVar4,0,0);
  return this;
}


