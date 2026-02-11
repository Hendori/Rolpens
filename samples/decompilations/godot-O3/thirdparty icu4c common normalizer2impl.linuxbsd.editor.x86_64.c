
uint segmentStarterMapper(undefined8 param_1,uint param_2)

{
  return param_2 & 0x80000000;
}



/* icu_76_godot::(anonymous namespace)::codePointFromValidUTF8(unsigned char const*, unsigned char
   const*) */

ulong icu_76_godot::(anonymous_namespace)::codePointFromValidUTF8(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  ulong uVar2;
  uchar *puVar3;
  
  puVar3 = param_2 + -(long)param_1;
  bVar1 = *param_1;
  if (puVar3 == (uchar *)0x3) {
    return (ulong)(param_1[2] & 0x3f | (bVar1 & 0xf) << 0xc |
                  (uint)(ushort)((param_1[1] & 0x3f) << 6));
  }
  if (3 < (long)puVar3) {
    if (puVar3 == (uchar *)0x4) {
      return (ulong)((param_1[1] & 0x3f) << 0xc | (bVar1 & 7) << 0x12 | param_1[3] & 0x3f |
                    (param_1[2] & 0x3f) << 6);
    }
    uVar2 = codePointFromValidUTF8(param_1,puVar3);
    return uVar2;
  }
  if (puVar3 == (uchar *)0x1) {
    return (ulong)bVar1;
  }
  if (puVar3 == (uchar *)0x2) {
    return (ulong)(param_1[1] & 0x3f | (bVar1 & 0x1f) << 6);
  }
  uVar2 = codePointFromValidUTF8(param_1,puVar3);
  return uVar2;
}



/* icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryAfter(unsigned short) const [clone .part.0]
    */

ulong __thiscall
icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryAfter(Normalizer2Impl *this,ushort param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined7 uVar5;
  ulong uVar4;
  undefined6 in_register_00000032;
  
  uVar2 = *(ushort *)(this + 0x1a);
  uVar4 = CONCAT62(in_register_00000032,param_1) & 0xffffffff;
  if (param_1 < uVar2) {
    uVar3 = *(ushort *)(this + 0x1e);
    if (param_1 < uVar3) goto LAB_001000cf;
  }
  else {
    uVar5 = (undefined7)(uVar4 >> 8);
    if (*(ushort *)(this + 0x22) <= param_1) {
      return (ulong)((uint)CONCAT71(uVar5,param_1 < 0xfc01) |
                    (uint)CONCAT11((char)(uVar2 >> 8),param_1 == 0xfe00));
    }
    uVar3 = *(ushort *)(this + 0x1e);
    if (param_1 < uVar3) {
      return CONCAT71(uVar5,(param_1 & 6) < 3);
    }
  }
  uVar4 = (ulong)(((uint)uVar2 + (int)CONCAT62(in_register_00000032,param_1)) - (uint)uVar3);
LAB_001000cf:
  puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)((ushort)(uVar4 >> 1) & 0x7fff) * 2);
  uVar4 = 0;
  uVar2 = *puVar1;
  if (((uVar2 < 0x200) && (uVar4 = 1, 0xff < uVar2)) && ((uVar2 & 0x80) != 0)) {
    return (ulong)(puVar1[-1] < 0x100);
  }
  return uVar4;
}



/* icu_76_godot::ReorderingBuffer::ReorderingBuffer(icu_76_godot::Normalizer2Impl const&,
   icu_76_godot::UnicodeString&, UErrorCode&) */

void __thiscall
icu_76_godot::ReorderingBuffer::ReorderingBuffer
          (ReorderingBuffer *this,Normalizer2Impl *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  *(Normalizer2Impl **)this = param_1;
  *(UnicodeString **)(this + 8) = param_2;
  lVar1 = icu_76_godot::UnicodeString::getBuffer((int)param_2);
  uVar2 = 0x1b;
  *(long *)(this + 0x20) = lVar1;
  *(long *)(this + 0x10) = lVar1;
  *(long *)(this + 0x18) = lVar1;
  if ((*(byte *)(*(long *)(this + 8) + 8) & 2) == 0) {
    uVar2 = *(undefined4 *)(*(long *)(this + 8) + 0x10);
  }
  *(undefined4 *)(this + 0x28) = uVar2;
  this[0x2c] = (ReorderingBuffer)0x0;
  if ((lVar1 == 0) && (*(int *)param_3 < 1)) {
    *(undefined4 *)param_3 = 7;
    return;
  }
  return;
}



/* icu_76_godot::ReorderingBuffer::equals(char16_t const*, char16_t const*) const */

bool __thiscall
icu_76_godot::ReorderingBuffer::equals(ReorderingBuffer *this,wchar16 *param_1,wchar16 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(this + 0x20) - *(long *)(this + 0x10) >> 1;
  if ((int)uVar2 != (int)((long)param_2 - (long)param_1 >> 1)) {
    return false;
  }
  iVar1 = u_memcmp_76_godot(*(long *)(this + 0x10),param_1,uVar2 & 0xffffffff);
  return iVar1 == 0;
}



/* icu_76_godot::ReorderingBuffer::equals(unsigned char const*, unsigned char const*) const */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::equals(ReorderingBuffer *this,uchar *param_1,uchar *param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  uVar6 = 0;
  lVar3 = *(long *)(this + 0x10);
  iVar9 = (int)param_2 - (int)param_1;
  iVar4 = (int)(*(long *)(this + 0x20) - lVar3 >> 1);
  if ((iVar4 <= iVar9) && (iVar9 / 3 <= iVar4)) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      if (iVar4 <= iVar10) {
        return CONCAT71((int7)(uVar6 >> 8),iVar9 <= iVar5);
      }
      if (iVar9 <= iVar5) {
        return 0;
      }
      lVar8 = (long)iVar10;
      iVar11 = iVar5 + 1;
      uVar2 = *(ushort *)(lVar3 + lVar8 * 2);
      uVar6 = (ulong)uVar2;
      bVar1 = param_1[iVar5];
      uVar7 = (uint)bVar1;
      if ((uVar2 & 0xfc00) == 0xd800) {
        iVar10 = iVar10 + 2;
        uVar6 = (ulong)(*(ushort *)(lVar3 + 2 + lVar8 * 2) + 0xfca02400 + (uint)uVar2 * 0x400);
        if (-1 < (char)bVar1) {
          return 0;
        }
LAB_001002c8:
        bVar1 = param_1[iVar11];
        if (uVar7 < 0xe0) {
          iVar11 = iVar5 + 2;
          uVar7 = (uVar7 & 0x1f) << 6 | bVar1 & 0x3f;
        }
        else {
          lVar8 = (long)iVar11;
          if (uVar7 < 0xf0) {
            iVar11 = iVar5 + 3;
            uVar7 = (uVar7 & 0xf) << 0xc |
                    (uint)(ushort)((bVar1 & 0x3f) << 6) | param_1[lVar8 + 1] & 0x3f;
          }
          else {
            lVar12 = (long)iVar11;
            iVar11 = iVar5 + 4;
            uVar7 = (uVar7 & 7) << 0x12 | (bVar1 & 0x3f) << 0xc | param_1[lVar12 + 2] & 0x3f |
                    (param_1[lVar8 + 1] & 0x3f) << 6;
          }
        }
      }
      else {
        iVar10 = iVar10 + 1;
        if ((char)bVar1 < '\0') goto LAB_001002c8;
      }
      iVar5 = iVar11;
    } while (uVar7 == (uint)uVar6);
  }
  return 0;
}



/* icu_76_godot::ReorderingBuffer::remove() */

void __thiscall icu_76_godot::ReorderingBuffer::remove(ReorderingBuffer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  if ((*(byte *)(*(long *)(this + 8) + 8) & 2) == 0) {
    uVar1 = *(undefined4 *)(*(long *)(this + 8) + 0x10);
  }
  *(undefined4 *)(this + 0x28) = uVar1;
  this[0x2c] = (ReorderingBuffer)0x0;
  return;
}



/* icu_76_godot::ReorderingBuffer::removeSuffix(int) */

void __thiscall icu_76_godot::ReorderingBuffer::removeSuffix(ReorderingBuffer *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(this + 0x10);
  if ((long)param_1 < *(long *)(this + 0x20) - lVar2 >> 1) {
    iVar3 = param_1 + *(int *)(this + 0x28);
    lVar2 = *(long *)(this + 0x20) + (long)param_1 * -2;
    *(long *)(this + 0x20) = lVar2;
  }
  else {
    *(long *)(this + 0x20) = lVar2;
    iVar3 = 0x1b;
    if ((*(byte *)(*(long *)(this + 8) + 8) & 2) == 0) {
      uVar1 = *(undefined4 *)(*(long *)(this + 8) + 0x10);
      this[0x2c] = (ReorderingBuffer)0x0;
      *(long *)(this + 0x18) = lVar2;
      *(undefined4 *)(this + 0x28) = uVar1;
      return;
    }
  }
  *(int *)(this + 0x28) = iVar3;
  this[0x2c] = (ReorderingBuffer)0x0;
  *(long *)(this + 0x18) = lVar2;
  return;
}



/* icu_76_godot::ReorderingBuffer::resize(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::resize(ReorderingBuffer *this,int param_1,UErrorCode *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0x10);
  lVar5 = *(long *)(this + 0x20);
  lVar2 = *(long *)(this + 0x18);
  icu_76_godot::UnicodeString::releaseBuffer((int)*(undefined8 *)(this + 8));
  iVar3 = (int)(lVar5 - lVar1 >> 1);
  lVar5 = icu_76_godot::UnicodeString::getBuffer((int)*(undefined8 *)(this + 8));
  *(long *)(this + 0x10) = lVar5;
  if (lVar5 != 0) {
    *(long *)(this + 0x18) = lVar5 + (long)(int)(lVar2 - lVar1 >> 1) * 2;
    *(long *)(this + 0x20) = lVar5 + (long)iVar3 * 2;
    iVar4 = 0x1b;
    if ((*(byte *)(*(long *)(this + 8) + 8) & 2) == 0) {
      iVar4 = *(int *)(*(long *)(this + 8) + 0x10);
    }
    *(int *)(this + 0x28) = iVar4 - iVar3;
    return 1;
  }
  *(undefined4 *)param_2 = 7;
  return 0;
}



/* icu_76_godot::ReorderingBuffer::appendZeroCC(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::appendZeroCC(ReorderingBuffer *this,int param_1,UErrorCode *param_2)

{
  ushort *puVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  
  iVar4 = *(int *)(this + 0x28);
  if ((uint)param_1 < 0x10000) {
    if (iVar4 < 1) {
      cVar3 = resize(this,1,param_2);
      if (cVar3 == '\0') {
        return 0;
      }
      iVar4 = *(int *)(this + 0x28);
    }
    puVar1 = *(ushort **)(this + 0x20);
    *(int *)(this + 0x28) = iVar4 + -1;
    puVar5 = puVar1 + 1;
    *(ushort **)(this + 0x20) = puVar5;
    *puVar1 = (ushort)param_1;
  }
  else {
    if (iVar4 < 2) {
      cVar3 = resize(this,2,param_2);
      if (cVar3 == '\0') {
        return 0;
      }
      iVar4 = *(int *)(this + 0x28);
    }
    *(int *)(this + 0x28) = iVar4 + -2;
    psVar2 = *(short **)(this + 0x20);
    *psVar2 = (short)(param_1 >> 10) + -0x2840;
    puVar5 = (ushort *)(psVar2 + 2);
    psVar2[1] = (ushort)param_1 & 0x3ff | 0xdc00;
    *(ushort **)(this + 0x20) = puVar5;
  }
  *(ushort **)(this + 0x18) = puVar5;
  this[0x2c] = (ReorderingBuffer)0x0;
  return 1;
}



/* icu_76_godot::ReorderingBuffer::appendZeroCC(char16_t const*, char16_t const*, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::appendZeroCC
          (ReorderingBuffer *this,wchar16 *param_1,wchar16 *param_2,UErrorCode *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  uVar4 = (long)param_2 - (long)param_1 >> 1;
  iVar3 = (int)uVar4;
  if (*(int *)(this + 0x28) < iVar3) {
    uVar2 = resize(this,iVar3,param_3);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  u_memcpy_76_godot(*(undefined8 *)(this + 0x20),param_1,uVar4 & 0xffffffff);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar3;
  this[0x2c] = (ReorderingBuffer)0x0;
  lVar1 = *(long *)(this + 0x20) + (long)iVar3 * 2;
  *(long *)(this + 0x18) = lVar1;
  *(long *)(this + 0x20) = lVar1;
  return 1;
}



/* icu_76_godot::ReorderingBuffer::skipPrevious() */

void __thiscall icu_76_godot::ReorderingBuffer::skipPrevious(ReorderingBuffer *this)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30);
  uVar1 = *(ushort *)(lVar2 + -2);
  *(ulong *)(this + 0x30) = lVar2 - 2U;
  *(long *)(this + 0x38) = lVar2;
  if ((((uVar1 & 0xfc00) == 0xdc00) && (*(ulong *)(this + 0x10) < lVar2 - 2U)) &&
     ((*(ushort *)(lVar2 + -4) & 0xfc00) == 0xd800)) {
    *(long *)(this + 0x30) = lVar2 + -4;
    return;
  }
  return;
}



/* icu_76_godot::ReorderingBuffer::previousCC() */

ushort __thiscall icu_76_godot::ReorderingBuffer::previousCC(ReorderingBuffer *this)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(ulong *)(this + 0x30);
  *(ulong *)(this + 0x38) = uVar3;
  if (uVar3 <= *(ulong *)(this + 0x18)) {
    return 0;
  }
  uVar1 = *(ushort *)(uVar3 - 2);
  lVar7 = *(long *)this;
  *(ulong *)(this + 0x30) = uVar3 - 2;
  uVar9 = uVar1 & 0xfc00;
  plVar4 = *(long **)(lVar7 + 0x28);
  uVar8 = (uint)uVar1;
  if (uVar9 == 0xdc00) {
    if ((*(ulong *)(this + 0x10) < uVar3 - 2) &&
       (uVar2 = *(ushort *)(uVar3 - 4), (uVar2 & 0xfc00) == 0xd800)) {
      lVar7 = plVar4[1];
      *(ulong *)(this + 0x30) = uVar3 - 4;
      if ((int)(uVar1 + 0xfca02400 + (uint)uVar2 * 0x400) < (int)plVar4[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot(plVar4);
        lVar6 = (long)iVar5 * 2;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar4 + 0x14) + -2) * 2;
      }
      goto LAB_0010076c;
    }
    if (uVar8 < *(ushort *)(lVar7 + 10)) {
      return 0;
    }
  }
  else {
    if (uVar8 < *(ushort *)(lVar7 + 10)) {
      return 0;
    }
    if (uVar9 == 0xd800) {
      return 0;
    }
  }
  lVar7 = plVar4[1];
  lVar6 = (long)(int)((uint)*(ushort *)(*plVar4 + (long)((int)uVar8 >> 6) * 2) + (uVar1 & 0x3f)) * 2
  ;
LAB_0010076c:
  if (*(ushort *)(lVar7 + lVar6) < 0xfc00) {
    return 0;
  }
  return *(ushort *)(lVar7 + lVar6) >> 1;
}



/* icu_76_godot::ReorderingBuffer::init(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::init(ReorderingBuffer *this,int param_1,UErrorCode *param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  ReorderingBuffer RVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  lVar6 = *(long *)(this + 8);
  sVar1 = *(short *)(lVar6 + 8);
  if (sVar1 < 0) {
    iVar10 = *(int *)(lVar6 + 0xc);
    lVar6 = icu_76_godot::UnicodeString::getBuffer((int)lVar6);
    *(long *)(this + 0x10) = lVar6;
  }
  else {
    lVar6 = icu_76_godot::UnicodeString::getBuffer((int)lVar6);
    *(long *)(this + 0x10) = lVar6;
    iVar10 = (int)(sVar1 >> 5);
  }
  if (lVar6 == 0) {
    *(undefined4 *)param_2 = 7;
    return 0;
  }
  lVar8 = lVar6 + (long)iVar10 * 2;
  iVar9 = 0x1b;
  *(long *)(this + 0x20) = lVar8;
  if ((*(byte *)(*(long *)(this + 8) + 8) & 2) == 0) {
    iVar9 = *(int *)(*(long *)(this + 8) + 0x10);
  }
  *(long *)(this + 0x18) = lVar6;
  *(int *)(this + 0x28) = iVar9 - iVar10;
  if (lVar6 == lVar8) {
    this[0x2c] = (ReorderingBuffer)0x0;
  }
  else {
    *(long *)(this + 0x30) = lVar8;
    RVar5 = (ReorderingBuffer)previousCC(this);
    this[0x2c] = RVar5;
    while (1 < (byte)RVar5) {
      uVar7 = *(ulong *)(this + 0x30);
      *(ulong *)(this + 0x38) = uVar7;
      if (uVar7 <= *(ulong *)(this + 0x18)) goto LAB_0010087c;
      uVar2 = *(ushort *)(uVar7 - 2);
      lVar6 = *(long *)this;
      *(ulong *)(this + 0x30) = uVar7 - 2;
      plVar4 = *(long **)(lVar6 + 0x28);
      uVar12 = uVar2 & 0xfc00;
      uVar11 = (uint)uVar2;
      if (uVar12 == 0xdc00) {
        if ((uVar7 - 2 <= *(ulong *)(this + 0x10)) ||
           (uVar3 = *(ushort *)(uVar7 - 4), (uVar3 & 0xfc00) != 0xd800)) {
          if (*(ushort *)(lVar6 + 10) <= uVar11) goto LAB_001008c9;
          goto LAB_0010087c;
        }
        lVar6 = plVar4[1];
        *(ulong *)(this + 0x30) = uVar7 - 4;
        if ((int)(uVar2 + 0xfca02400 + (uint)uVar3 * 0x400) < (int)plVar4[3]) {
          iVar10 = ucptrie_internalSmallIndex_76_godot(plVar4);
          lVar8 = (long)iVar10 * 2;
        }
        else {
          lVar8 = (long)(*(int *)((long)plVar4 + 0x14) + -2) * 2;
        }
      }
      else {
        if ((uVar11 < *(ushort *)(lVar6 + 10)) || (uVar12 == 0xd800)) goto LAB_0010087c;
LAB_001008c9:
        lVar6 = plVar4[1];
        lVar8 = (long)(int)((uint)*(ushort *)(*plVar4 + (long)((int)uVar11 >> 6) * 2) +
                           (uVar2 & 0x3f)) * 2;
      }
      if (*(ushort *)(lVar6 + lVar8) < 0xfc00) break;
      RVar5 = SUB21(*(ushort *)(lVar6 + lVar8) >> 1,0);
    }
    uVar7 = *(ulong *)(this + 0x38);
LAB_0010087c:
    *(ulong *)(this + 0x18) = uVar7;
  }
  return 1;
}



/* icu_76_godot::ReorderingBuffer::insert(int, unsigned char) */

void __thiscall
icu_76_godot::ReorderingBuffer::insert(ReorderingBuffer *this,int param_1,uchar param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulong uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  long lVar15;
  
  uVar10 = (ushort)param_1;
  lVar15 = *(long *)(this + 0x20);
  uVar6 = *(ushort *)(lVar15 + -2);
  uVar8 = lVar15 - 2;
  *(ulong *)(this + 0x30) = uVar8;
  if ((((uVar6 & 0xfc00) == 0xdc00) && (*(ulong *)(this + 0x10) < uVar8)) &&
     ((*(ushort *)(lVar15 + -4) & 0xfc00) == 0xd800)) {
    uVar8 = lVar15 - 4;
    *(ulong *)(this + 0x30) = uVar8;
  }
  while (*(ulong *)(this + 0x38) = uVar8, *(ulong *)(this + 0x18) < uVar8) {
    uVar6 = *(ushort *)(uVar8 - 2);
    lVar15 = *(long *)this;
    *(ulong *)(this + 0x30) = uVar8 - 2;
    plVar4 = *(long **)(lVar15 + 0x28);
    uVar14 = uVar6 & 0xfc00;
    uVar12 = (uint)uVar6;
    if (uVar14 == 0xdc00) {
      if ((*(ulong *)(this + 0x10) < uVar8 - 2) &&
         (uVar3 = *(ushort *)(uVar8 - 4), (uVar3 & 0xfc00) == 0xd800)) {
        lVar15 = plVar4[1];
        *(ulong *)(this + 0x30) = uVar8 - 4;
        if ((int)(uVar6 + 0xfca02400 + (uint)uVar3 * 0x400) < (int)plVar4[3]) {
          iVar7 = ucptrie_internalSmallIndex_76_godot(plVar4);
          goto LAB_00100ad4;
        }
        uVar6 = *(ushort *)(lVar15 + (long)(*(int *)((long)plVar4 + 0x14) + -2) * 2);
        if (0xfbff < uVar6) goto LAB_00100adf;
LAB_00100b38:
        uVar8 = *(ulong *)(this + 0x38);
      }
      else if (*(ushort *)(lVar15 + 10) <= uVar12) goto LAB_00100ab9;
      break;
    }
    if ((uVar12 < *(ushort *)(lVar15 + 10)) || (uVar14 == 0xd800)) break;
LAB_00100ab9:
    lVar15 = plVar4[1];
    iVar7 = (uint)*(ushort *)(*plVar4 + (long)((int)uVar12 >> 6) * 2) + (uVar6 & 0x3f);
LAB_00100ad4:
    uVar6 = *(ushort *)(lVar15 + (long)iVar7 * 2);
    if (uVar6 < 0xfc00) goto LAB_00100b38;
LAB_00100adf:
    if ((byte)(uVar6 >> 1) <= param_2) goto LAB_00100b38;
    uVar8 = *(ulong *)(this + 0x30);
  }
  uVar5 = *(ulong *)(this + 0x20);
  puVar2 = (undefined2 *)(uVar5 + 4 + (-(ulong)((uint)param_1 < 0x10000) & 0xfffffffffffffffe));
  *(undefined2 **)(this + 0x20) = puVar2;
  puVar9 = puVar2;
  uVar11 = uVar5;
  do {
    puVar1 = (undefined2 *)(uVar11 - 2);
    uVar11 = uVar11 - 2;
    puVar9 = puVar9 + -1;
    *puVar9 = *puVar1;
  } while (uVar11 != uVar8);
  uVar8 = ~((uVar5 - 2) - uVar11) & 0xfffffffffffffffe;
  puVar13 = (ushort *)(uVar5 + uVar8);
  if (0xffff < param_1) {
    puVar13[1] = uVar10 & 0x3ff | 0xdc00;
    uVar10 = (short)(param_1 >> 10) + 0xd7c0;
  }
  *puVar13 = uVar10;
  if (param_2 < 2) {
    *(ulong *)(this + 0x18) = (long)puVar2 + uVar8;
  }
  return;
}



/* icu_76_godot::ReorderingBuffer::appendSupplementary(int, unsigned char, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::appendSupplementary
          (ReorderingBuffer *this,int param_1,uchar param_2,UErrorCode *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  
  if ((1 < *(int *)(this + 0x28)) || (uVar2 = resize(this,2,param_3), (char)uVar2 != '\0')) {
    if ((param_2 < (byte)this[0x2c]) && (param_2 != '\0')) {
      insert(this,param_1,param_2);
    }
    else {
      psVar1 = *(short **)(this + 0x20);
      psVar1[1] = (ushort)param_1 & 0x3ff | 0xdc00;
      *psVar1 = (short)(param_1 >> 10) + -0x2840;
      *(short **)(this + 0x20) = psVar1 + 2;
      this[0x2c] = (ReorderingBuffer)param_2;
      if (param_2 < 2) {
        *(short **)(this + 0x18) = psVar1 + 2;
      }
    }
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -2;
    uVar2 = 1;
  }
  return uVar2;
}



/* icu_76_godot::ReorderingBuffer::append(char16_t const*, int, signed char, unsigned char, unsigned
   char, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::ReorderingBuffer::append
          (ReorderingBuffer *this,ushort *param_1,int param_2,char param_4,ReorderingBuffer param_5,
          ReorderingBuffer param_6,UErrorCode *param_7)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  char cVar4;
  ReorderingBuffer RVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  
  lVar12 = (long)param_2;
  if (param_2 == 0) {
    return 1;
  }
  if (*(int *)(this + 0x28) < param_2) {
    uVar9 = resize(this,param_2,param_7);
    if ((char)uVar9 == '\0') {
      return uVar9;
    }
    *(int *)(this + 0x28) = *(int *)(this + 0x28) - param_2;
    uVar6 = *param_1;
    if ((byte)param_5 < (byte)this[0x2c]) goto LAB_00100ce0;
LAB_00100c73:
    if ((byte)param_6 < 2) {
LAB_00100e50:
      lVar11 = *(long *)(this + 0x20);
      lVar13 = lVar11 + lVar12 * 2;
      *(long *)(this + 0x18) = lVar13;
      goto LAB_00100c92;
    }
    if (1 < (byte)param_5) {
      lVar11 = *(long *)(this + 0x20);
      lVar13 = lVar11 + lVar12 * 2;
      goto LAB_00100c92;
    }
  }
  else {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) - param_2;
    uVar6 = *param_1;
    if ((byte)this[0x2c] <= (byte)param_5) goto LAB_00100c73;
LAB_00100ce0:
    if (param_5 != (ReorderingBuffer)0x0) {
      uVar15 = (uint)uVar6;
      if (((uVar15 & 0xfc00) == 0xd800) && (param_2 != 1)) {
        iVar7 = 1;
        if ((param_1[1] & 0xfc00) == 0xdc00) {
          iVar7 = 2;
          uVar15 = param_1[1] + 0xfca02400 + uVar15 * 0x400;
        }
      }
      else {
        iVar7 = 1;
      }
      insert(this,uVar15,(uchar)param_5);
      do {
        while( true ) {
          if (param_2 <= iVar7) {
            return 1;
          }
          iVar14 = iVar7 + 1;
          uVar15 = (uint)param_1[iVar7];
          if ((uVar15 & 0xfc00) == 0xd800) break;
          if (param_2 <= iVar14) goto LAB_00100e68;
          if (param_4 == '\0') {
            lVar12 = *(long *)this;
            uVar6 = *(ushort *)
                     ((*(long **)(lVar12 + 0x28))[1] +
                     (long)(int)((uint)*(ushort *)
                                        (**(long **)(lVar12 + 0x28) + (long)((int)uVar15 >> 6) * 2)
                                + (uVar15 & 0x3f)) * 2);
            if (uVar6 < 0xfc00) {
              if (uVar6 < *(ushort *)(lVar12 + 0x12)) {
                RVar5 = (ReorderingBuffer)0x0;
              }
              else if (uVar6 < *(ushort *)(lVar12 + 0x1a)) {
LAB_001010ef:
                pbVar1 = (byte *)(*(long *)(lVar12 + 0x30) + (ulong)(uVar6 >> 1) * 2);
                if ((*pbVar1 & 0x80) == 0) {
                  RVar5 = (ReorderingBuffer)0x0;
                }
                else {
                  RVar5 = *(ReorderingBuffer *)(pbVar1 + -2);
                }
                if (0xffff < (int)uVar15) goto LAB_00101000;
              }
              else {
                RVar5 = (ReorderingBuffer)0x0;
              }
            }
            else {
              RVar5 = SUB21(uVar6 >> 1,0);
            }
          }
          else {
LAB_00100f58:
            uVar6 = *(ushort *)
                     ((*(long **)(*(long *)this + 0x28))[1] +
                     (long)(int)((uint)*(ushort *)
                                        (**(long **)(*(long *)this + 0x28) +
                                        (long)((int)uVar15 >> 6) * 2) + (param_1[iVar7] & 0x3f)) * 2
                     );
            RVar5 = SUB21(uVar6 >> 1,0);
            if (uVar6 < 0xfc00) {
              RVar5 = (ReorderingBuffer)0x0;
            }
          }
LAB_00100d99:
          if (*(int *)(this + 0x28) != 0) goto LAB_00100da8;
LAB_00100e76:
          cVar4 = resize(this,1,param_7);
          iVar7 = iVar14;
          if (cVar4 != '\0') {
            if ((byte)RVar5 < (byte)this[0x2c]) goto LAB_00100ec1;
LAB_00100db2:
            puVar3 = *(undefined2 **)(this + 0x20);
            puVar10 = puVar3 + 1;
            *(undefined2 **)(this + 0x20) = puVar10;
            *puVar3 = (short)uVar15;
            this[0x2c] = RVar5;
            if ((byte)RVar5 < 2) {
LAB_00100edd:
              *(undefined2 **)(this + 0x18) = puVar10;
            }
LAB_00100dcf:
            *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
            iVar7 = iVar14;
          }
        }
        if (param_2 == iVar14) {
LAB_00100e68:
          RVar5 = param_6;
          if (*(int *)(this + 0x28) == 0) goto LAB_00100e76;
LAB_00100da8:
          if ((byte)this[0x2c] <= (byte)RVar5) goto LAB_00100db2;
LAB_00100ec1:
          if (RVar5 == (ReorderingBuffer)0x0) {
            puVar3 = *(undefined2 **)(this + 0x20);
            puVar10 = puVar3 + 1;
            *(undefined2 **)(this + 0x20) = puVar10;
            *puVar3 = (short)uVar15;
            this[0x2c] = (ReorderingBuffer)0x0;
            goto LAB_00100edd;
          }
          insert(this,uVar15,(uchar)RVar5);
          goto LAB_00100dcf;
        }
        if ((param_1[(long)iVar7 + 1] & 0xfc00) != 0xdc00) {
          if (iVar14 < param_2) {
            if (param_4 != '\0') goto LAB_00100f58;
            lVar12 = *(long *)this;
            RVar5 = (ReorderingBuffer)0x0;
            if (((*(ushort *)(lVar12 + 0x12) < 2) && (1 < *(ushort *)(lVar12 + 0x1a))) &&
               (RVar5 = (ReorderingBuffer)0x0, (**(byte **)(lVar12 + 0x30) & 0x80) != 0)) {
              RVar5 = *(ReorderingBuffer *)(*(byte **)(lVar12 + 0x30) + -2);
            }
            goto LAB_00100d99;
          }
          goto LAB_00100e68;
        }
        iVar14 = iVar7 + 2;
        uVar15 = param_1[(long)iVar7 + 1] + 0xfca02400 + uVar15 * 0x400;
        if (param_2 <= iVar14) {
          appendSupplementary(this,uVar15,(uchar)param_6,param_7);
          return 1;
        }
        lVar12 = *(long *)this;
        lVar13 = *(long *)(lVar12 + 0x28);
        lVar11 = *(long *)(lVar13 + 8);
        if (param_4 == '\0') {
          if ((int)uVar15 < *(int *)(lVar13 + 0x18)) {
            iVar7 = ucptrie_internalSmallIndex_76_godot(lVar13,uVar15);
            uVar6 = *(ushort *)(lVar11 + (long)iVar7 * 2);
          }
          else {
            uVar6 = *(ushort *)(lVar11 + (long)(*(int *)(lVar13 + 0x14) + -2) * 2);
          }
          if (uVar6 < 0xfc00) {
            if (uVar6 < *(ushort *)(lVar12 + 0x12)) goto LAB_001010ca;
            RVar5 = (ReorderingBuffer)0x0;
            if (uVar6 < *(ushort *)(lVar12 + 0x1a)) goto LAB_001010ef;
          }
          else {
            RVar5 = SUB21(uVar6 >> 1,0);
          }
        }
        else {
          if ((int)uVar15 < *(int *)(lVar13 + 0x18)) {
            iVar7 = ucptrie_internalSmallIndex_76_godot(lVar13,uVar15);
            uVar6 = *(ushort *)(lVar11 + (long)iVar7 * 2);
          }
          else {
            uVar6 = *(ushort *)(lVar11 + (long)(*(int *)(lVar13 + 0x14) + -2) * 2);
          }
          if (uVar6 < 0xfc00) {
LAB_001010ca:
            RVar5 = (ReorderingBuffer)0x0;
          }
          else {
            RVar5 = SUB21(uVar6 >> 1,0);
          }
        }
LAB_00101000:
        appendSupplementary(this,uVar15,(uchar)RVar5,param_7);
        iVar7 = iVar14;
      } while( true );
    }
    if ((byte)param_6 < 2) goto LAB_00100e50;
  }
  lVar11 = *(long *)(this + 0x20);
  lVar13 = lVar11 + lVar12 * 2;
  *(long *)(this + 0x18) = lVar11 + 2;
LAB_00100c92:
  lVar8 = 0;
  do {
    uVar2 = *(undefined2 *)((long)param_1 + lVar8);
    *(undefined2 *)(lVar11 + lVar8) = uVar2;
    lVar8 = lVar8 + 2;
  } while (lVar12 * 2 != lVar8);
  *(long *)(this + 0x20) = lVar13;
  *(undefined2 *)(lVar12 * 2 + -2 + lVar11) = uVar2;
  this[0x2c] = param_6;
  return 1;
}



/* icu_76_godot::Normalizer2Impl::init(int const*, UCPTrie const*, unsigned short const*, unsigned
   char const*) */

void __thiscall
icu_76_godot::Normalizer2Impl::init
          (Normalizer2Impl *this,int *param_1,UCPTrie *param_2,ushort *param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = param_1[0x14];
  iVar11 = param_1[0xd];
  iVar12 = param_1[8];
  iVar13 = param_1[9];
  iVar1 = param_1[0xf];
  iVar2 = param_1[0x10];
  iVar3 = param_1[0xb];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x11];
  uVar6 = param_1[0xc];
  iVar7 = param_1[0xe];
  iVar8 = param_1[0x15];
  iVar9 = param_1[0xd];
  *(UCPTrie **)(this + 0x28) = param_2;
  *(short *)(this + 0x20) = (short)iVar8;
  *(short *)(this + 0x22) = (short)iVar9;
  *(ushort **)(this + 0x30) = param_3;
  *(uchar **)(this + 0x38) = param_4;
  *(short *)(this + 8) = (short)iVar12;
  *(short *)(this + 10) = (short)iVar13;
  *(short *)(this + 0xc) = (short)iVar10;
  *(short *)(this + 0xe) = (short)iVar11;
  *(short *)(this + 0x10) = (short)iVar7;
  *(short *)(this + 0x12) = (short)iVar3;
  *(short *)(this + 0x14) = (short)iVar1;
  *(short *)(this + 0x16) = (short)iVar2;
  *(ulong *)(this + 0x18) =
       (((ulong)(uVar4 & 0xffff) << 0x10 | (ulong)((uVar4 >> 3 & 0x1fff) - 0x41 & 0xffff)) << 0x10 |
       (ulong)(uVar6 & 0xffff)) << 0x10 | (ulong)(uVar5 & 0xffff);
  return;
}



/* icu_76_godot::Normalizer2Impl::copyLowPrefixFromNulTerminated(char16_t const*, int,
   icu_76_godot::ReorderingBuffer*, UErrorCode&) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::copyLowPrefixFromNulTerminated
          (Normalizer2Impl *this,wchar16 *param_1,int param_2,ReorderingBuffer *param_3,
          UErrorCode *param_4)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = param_1;
  do {
    pwVar2 = pwVar1;
    if (*pwVar2 == L'\0') break;
    pwVar1 = pwVar2 + 1;
  } while ((int)(uint)(ushort)*pwVar2 < param_2);
  if ((param_3 != (ReorderingBuffer *)0x0) && (pwVar2 != param_1)) {
    ReorderingBuffer::appendZeroCC(param_3,param_1,pwVar2,param_4);
  }
  return pwVar2;
}



/* icu_76_godot::Normalizer2Impl::decompose(int, unsigned short, icu_76_godot::ReorderingBuffer&,
   UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::Normalizer2Impl::decompose
          (Normalizer2Impl *this,int param_1,ushort param_2,ReorderingBuffer *param_3,
          UErrorCode *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ReorderingBuffer RVar9;
  ushort uVar10;
  int iVar11;
  undefined1 uVar12;
  long in_FS_OFFSET;
  wchar16 local_36;
  short local_34;
  wchar16 local_32;
  long local_30 [2];
  
  local_30[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < *(ushort *)(this + 0x1a)) {
LAB_0010137a:
    uVar10 = *(ushort *)(this + 0xe);
    if (param_2 < uVar10) {
      if (0xffff < param_1) {
LAB_00101424:
        if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          RVar9 = (ReorderingBuffer)0x0;
LAB_001014e7:
          uVar7 = ReorderingBuffer::appendSupplementary(param_3,param_1,(uchar)RVar9,param_4);
          return uVar7;
        }
        goto LAB_001016be;
      }
LAB_00101580:
      iVar11 = *(int *)(param_3 + 0x28);
      if (iVar11 == 0) {
        cVar6 = ReorderingBuffer::resize(param_3,1,param_4);
        if (cVar6 == '\0') goto LAB_00101658;
        iVar11 = *(int *)(param_3 + 0x28);
      }
      puVar2 = *(undefined2 **)(param_3 + 0x20);
      puVar8 = puVar2 + 1;
      *(undefined2 **)(param_3 + 0x20) = puVar8;
      *puVar2 = (short)param_1;
      param_3[0x2c] = (ReorderingBuffer)0x0;
      *(undefined2 **)(param_3 + 0x18) = puVar8;
      *(int *)(param_3 + 0x28) = iVar11 + -1;
LAB_001015b1:
      uVar7 = 1;
    }
    else {
LAB_00101387:
      if ((uVar10 == param_2) || ((*(ushort *)(this + 0x10) | 1) == param_2)) {
        iVar11 = (int)(param_1 - 0xac00U) / 0x1c;
        sVar5 = (short)(iVar11 / 0x15);
        local_36 = sVar5 + L'ᄀ';
        local_34 = (short)iVar11 + sVar5 * -0x15 + 0x1161;
        iVar11 = (int)(param_1 - 0xac00U) % 0x1c;
        if (iVar11 == 0) {
          uVar7 = ReorderingBuffer::appendZeroCC(param_3,&local_36,&local_32,param_4);
        }
        else {
          local_32 = (short)iVar11 + L'ᆧ';
          uVar7 = ReorderingBuffer::appendZeroCC(param_3,&local_36,(wchar16 *)local_30,param_4);
        }
      }
      else {
        if (*(ushort *)(this + 0x1e) <= param_2) {
          param_2 = param_2 + (*(short *)(this + 0x1a) - *(ushort *)(this + 0x1e));
        }
        uVar12 = 0;
        puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(param_2 >> 1) * 2);
        uVar10 = *puVar1;
        if ((uVar10 & 0x80) != 0) {
          uVar12 = *(undefined1 *)((long)puVar1 + -1);
        }
        uVar7 = ReorderingBuffer::append
                          (param_3,puVar1 + 1,uVar10 & 0x1f,1,uVar12,(char)(uVar10 >> 8),param_4);
      }
    }
  }
  else {
    if (param_2 < *(ushort *)(this + 0x22)) {
      if (*(ushort *)(this + 0x1e) <= param_2) goto LAB_0010137a;
      plVar3 = *(long **)(this + 0x28);
      lVar4 = plVar3[1];
      param_1 = ((uint)(param_2 >> 3) + param_1) - (uint)*(ushort *)(this + 0x1c);
      if ((uint)param_1 < 0x10000) {
        uVar10 = *(ushort *)(this + 0xe);
        param_2 = *(ushort *)
                   (lVar4 + (long)(int)((uint)*(ushort *)(*plVar3 + (long)(param_1 >> 6) * 2) +
                                       (param_1 & 0x3fU)) * 2);
        if (uVar10 <= param_2) goto LAB_00101387;
        goto LAB_00101580;
      }
      if (0x10ffff < (uint)param_1) {
        param_2 = *(ushort *)(lVar4 + (long)(*(int *)((long)plVar3 + 0x14) + -1) * 2);
        goto LAB_0010137a;
      }
      if (param_1 < (int)plVar3[3]) {
        iVar11 = ucptrie_internalSmallIndex_76_godot(plVar3,param_1);
        uVar10 = *(ushort *)(this + 0xe);
        param_2 = *(ushort *)(lVar4 + (long)iVar11 * 2);
        if (param_2 < uVar10) goto LAB_00101424;
      }
      else {
        uVar10 = *(ushort *)(this + 0xe);
        param_2 = *(ushort *)(lVar4 + (long)(*(int *)((long)plVar3 + 0x14) + -2) * 2);
        if (param_2 < uVar10) goto LAB_00101424;
      }
      goto LAB_00101387;
    }
    RVar9 = (ReorderingBuffer)0x0;
    if (0xfbff < param_2) {
      RVar9 = SUB21(param_2 >> 1,0);
    }
    if (0xffff < param_1) {
      if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001014e7;
      goto LAB_001016be;
    }
    if ((*(int *)(param_3 + 0x28) != 0) ||
       (cVar6 = ReorderingBuffer::resize(param_3,1,param_4), cVar6 != '\0')) {
      if ((byte)RVar9 < (byte)param_3[0x2c]) {
        if (RVar9 == (ReorderingBuffer)0x0) {
          puVar2 = *(undefined2 **)(param_3 + 0x20);
          puVar8 = puVar2 + 1;
          *(undefined2 **)(param_3 + 0x20) = puVar8;
          *puVar2 = (short)param_1;
          param_3[0x2c] = (ReorderingBuffer)0x0;
          goto LAB_001015dc;
        }
        ReorderingBuffer::insert(param_3,param_1 & 0xffff,(uchar)RVar9);
      }
      else {
        puVar2 = *(undefined2 **)(param_3 + 0x20);
        puVar8 = puVar2 + 1;
        *(undefined2 **)(param_3 + 0x20) = puVar8;
        *puVar2 = (short)param_1;
        param_3[0x2c] = RVar9;
        if ((byte)RVar9 < 2) {
LAB_001015dc:
          *(undefined2 **)(param_3 + 0x18) = puVar8;
        }
      }
      *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + -1;
      goto LAB_001015b1;
    }
LAB_00101658:
    uVar7 = 0;
  }
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_001016be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2Impl::decompose(char16_t const*, char16_t const*,
   icu_76_godot::ReorderingBuffer*, UErrorCode&) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::decompose
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,ReorderingBuffer *param_3,
          UErrorCode *param_4)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  wchar16 wVar3;
  ushort uVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  wchar16 *pwVar11;
  byte bVar12;
  wchar16 *pwVar13;
  byte local_41;
  
  wVar2 = *(wchar16 *)(this + 8);
  pwVar13 = param_1;
  if (param_2 == (wchar16 *)0x0) {
    do {
      pwVar11 = pwVar13;
      if ((ushort)wVar2 <= (ushort)*pwVar11) break;
      pwVar13 = pwVar11 + 1;
    } while (*pwVar11 != L'\0');
    if ((param_3 != (ReorderingBuffer *)0x0) && (param_1 != pwVar11)) {
      ReorderingBuffer::appendZeroCC(param_3,param_1,pwVar11,param_4);
    }
    if (0 < *(int *)param_4) {
      return pwVar11;
    }
    param_2 = (wchar16 *)u_strchr_76_godot(pwVar11,0);
    param_1 = pwVar11;
  }
  local_41 = 0;
  pwVar13 = param_1;
LAB_0010170c:
  pwVar11 = param_1;
  if (param_1 != param_2) {
    do {
      wVar3 = *pwVar11;
      while ((ushort)wVar2 <= (ushort)wVar3) {
        uVar10 = (uint)(ushort)wVar3;
        plVar5 = *(long **)(this + 0x28);
        lVar6 = plVar5[1];
        uVar4 = *(ushort *)
                 (lVar6 + (long)(int)((uVar10 & 0x3f) +
                                     (uint)*(ushort *)(*plVar5 + (long)((int)uVar10 >> 6) * 2)) * 2)
        ;
        uVar8 = *(ushort *)(this + 0xe);
        if ((uVar4 < uVar8) || ((uVar4 & 0xfdff) == 0xfc00)) break;
        if ((uVar10 & 0xfffffc00) != 0xd800) {
LAB_001018d4:
          if (param_1 != pwVar11) {
            if (param_3 == (ReorderingBuffer *)0x0) {
              local_41 = 0;
              pwVar13 = pwVar11;
            }
            else {
              cVar7 = ReorderingBuffer::appendZeroCC(param_3,param_1,pwVar11,param_4);
              if (cVar7 == '\0') {
                return pwVar11;
              }
            }
          }
          if (param_2 == pwVar11) {
            return param_2;
          }
          param_1 = pwVar11 + (ulong)(0xffff < (int)uVar10) + 1;
          if (param_3 == (ReorderingBuffer *)0x0) {
            if ((*(ushort *)(this + 0xe) <= uVar4) && (uVar4 < *(ushort *)(this + 0x22))) {
              return pwVar13;
            }
            if (uVar4 < 0xfc00) {
              local_41 = 0;
              pwVar13 = param_1;
            }
            else {
              bVar12 = (byte)(uVar4 >> 1);
              if ((bVar12 < local_41) && (bVar12 != 0)) {
                return pwVar13;
              }
              local_41 = bVar12;
              if (bVar12 < 2) {
                pwVar13 = param_1;
              }
            }
          }
          else {
            cVar7 = decompose(this,uVar10,uVar4,param_3,param_4);
            if (cVar7 == '\0') {
              return param_1;
            }
          }
          goto LAB_0010170c;
        }
        pwVar1 = pwVar11 + 1;
        if (pwVar1 == param_2) goto LAB_001017c8;
        if ((pwVar11[1] & 0xfc00U) == 0xdc00) {
          uVar10 = (ushort)pwVar11[1] + 0xfca02400 + uVar10 * 0x400;
          if ((int)uVar10 < (int)plVar5[3]) {
            iVar9 = ucptrie_internalSmallIndex_76_godot(plVar5,uVar10);
            uVar8 = *(ushort *)(this + 0xe);
          }
          else {
            iVar9 = *(int *)((long)plVar5 + 0x14) + -2;
          }
          uVar4 = *(ushort *)(lVar6 + (long)iVar9 * 2);
          if ((uVar8 <= uVar4) && ((uVar4 & 0xfdff) != 0xfc00)) goto LAB_001018d4;
          pwVar11 = pwVar11 + 2;
          goto LAB_001017bc;
        }
        pwVar11 = pwVar1;
        wVar3 = *pwVar1;
      }
      pwVar11 = pwVar11 + 1;
LAB_001017bc:
    } while (pwVar11 != param_2);
LAB_001017c8:
    if (param_3 != (ReorderingBuffer *)0x0) {
      ReorderingBuffer::appendZeroCC(param_3,param_1,param_2,param_4);
    }
  }
  return param_2;
}



/* icu_76_godot::Normalizer2Impl::decompose(char16_t const*, char16_t const*,
   icu_76_godot::UnicodeString&, int, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::decompose
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,UnicodeString *param_3,
          int param_4,UErrorCode *param_5)

{
  ushort uVar1;
  char cVar2;
  long in_FS_OFFSET;
  Normalizer2Impl *local_78;
  UnicodeString *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 < 0) && (param_2 != (wchar16 *)0x0)) {
    param_4 = (int)((long)param_2 - (long)param_1 >> 1);
  }
  local_50 = 0;
  local_58 = 0;
  uVar1 = *(ushort *)(param_3 + 8) & 0x1f;
  if ((*(ushort *)(param_3 + 8) & 1) != 0) {
    uVar1 = 2;
  }
  local_4c = 0;
  local_68 = (undefined1  [16])0x0;
  *(ushort *)(param_3 + 8) = uVar1;
  local_78 = this;
  local_70 = param_3;
  cVar2 = ReorderingBuffer::init((ReorderingBuffer *)&local_78,param_4,param_5);
  if (cVar2 != '\0') {
    decompose(this,param_1,param_2,(ReorderingBuffer *)&local_78,param_5);
  }
  if (local_68._0_8_ == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    icu_76_godot::UnicodeString::releaseBuffer((int)local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2Impl::decompose(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::Normalizer2Impl::decompose
          (Normalizer2Impl *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  UnicodeString *pUVar2;
  int iVar3;
  
  if (*(int *)param_3 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((uVar1 & 0x11) == 0) {
      pUVar2 = param_1 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar2 = *(UnicodeString **)(param_1 + 0x18);
      }
      if ((param_1 != param_2) && (pUVar2 != (UnicodeString *)0x0)) {
        if ((short)uVar1 < 0) {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar3 = (int)((short)uVar1 >> 5);
        }
        decompose(this,(wchar16 *)pUVar2,(wchar16 *)(pUVar2 + (long)iVar3 * 2),param_2,iVar3,param_3
                 );
        return param_2;
      }
    }
    *(undefined4 *)param_3 = 1;
  }
  icu_76_godot::UnicodeString::setToBogus();
  return param_2;
}



/* icu_76_godot::Normalizer2Impl::decomposeShort(char16_t const*, char16_t const*, signed char,
   signed char, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

ushort * __thiscall
icu_76_godot::Normalizer2Impl::decomposeShort
          (Normalizer2Impl *this,ushort *param_1,ushort *param_2,char param_4,char param_5,
          ReorderingBuffer *param_6,UErrorCode *param_7)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  long *plVar6;
  
  if (*(int *)param_7 < 1) {
    if (param_1 < param_2) {
      uVar4 = (uint)*param_1;
      puVar5 = param_1;
      if (param_4 == '\0') goto LAB_00101bf0;
      while (puVar5 = param_1, *(ushort *)(this + 10) <= (ushort)uVar4) {
LAB_00101bf0:
        while( true ) {
          plVar6 = *(long **)(this + 0x28);
          param_1 = puVar5 + 1;
          if ((uVar4 & 0xf800) == 0xd800) {
            if ((((uVar4 & 0x400) == 0) && (param_2 != param_1)) && ((puVar5[1] & 0xfc00) == 0xdc00)
               ) {
              param_1 = puVar5 + 2;
              uVar4 = puVar5[1] + 0xfca02400 + uVar4 * 0x400;
              if ((int)uVar4 < (int)plVar6[3]) {
                iVar3 = ucptrie_internalSmallIndex_76_godot();
                plVar6 = *(long **)(this + 0x28);
              }
              else {
                iVar3 = *(int *)((long)plVar6 + 0x14) + -2;
              }
            }
            else {
              iVar3 = *(int *)((long)plVar6 + 0x14) + -1;
            }
          }
          else {
            iVar3 = (uint)*(ushort *)(*plVar6 + (long)((int)uVar4 >> 6) * 2) + (uVar4 & 0x3f);
          }
          uVar1 = *(ushort *)(plVar6[1] + (long)iVar3 * 2);
          if (param_4 != '\0') break;
          cVar2 = decompose(this,uVar4,uVar1,param_6,param_7);
          if (cVar2 == '\0') goto LAB_00101d30;
          if (param_2 <= param_1) {
            return param_1;
          }
          uVar4 = (uint)*param_1;
          puVar5 = param_1;
        }
        if (uVar1 < *(ushort *)(this + 0x16)) {
          return puVar5;
        }
        if ((*(ushort *)(this + 0x1a) <= uVar1) && (uVar1 < *(ushort *)(this + 0x1e))) {
          return puVar5;
        }
        cVar2 = decompose(this,uVar4,uVar1,param_6,param_7);
        if (cVar2 == '\0') goto LAB_00101d30;
        if ((uVar1 & 1) != 0) {
          if (param_5 == '\0') {
            return param_1;
          }
          if (uVar1 == 1) {
            return param_1;
          }
          if ((uVar1 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar1)) {
            if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar1 >> 1) * 2) < 0x200) {
              return param_1;
            }
          }
          else if ((uVar1 & 6) < 3) {
            return param_1;
          }
        }
        if (param_2 <= param_1) {
          return param_1;
        }
        uVar4 = (uint)*param_1;
      }
    }
  }
  else {
LAB_00101d30:
    param_1 = (ushort *)0x0;
  }
  return param_1;
}



/* icu_76_godot::Normalizer2Impl::decomposeShort(unsigned char const*, unsigned char const*,
   icu_76_godot::Normalizer2Impl::StopAt, signed char, icu_76_godot::ReorderingBuffer&, UErrorCode&)
   const */

byte * __thiscall
icu_76_godot::Normalizer2Impl::decomposeShort
          (Normalizer2Impl *this,byte *param_1,byte *param_2,int param_4,char param_5,
          ReorderingBuffer *param_6,UErrorCode *param_7)

{
  ushort *puVar1;
  byte bVar2;
  undefined2 *puVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined2 *puVar8;
  long lVar9;
  ReorderingBuffer RVar10;
  ushort uVar11;
  int iVar12;
  long *plVar13;
  byte *pbVar14;
  long in_FS_OFFSET;
  bool bVar15;
  wchar16 local_46;
  short local_44;
  short local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_7) {
LAB_00102080:
    param_1 = (byte *)0x0;
LAB_00102083:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (param_2 <= param_1) goto LAB_00102083;
LAB_00101e10:
  bVar2 = *param_1;
  uVar7 = (uint)bVar2;
  plVar13 = *(long **)(this + 0x28);
  pbVar14 = param_1 + 1;
  if ((char)bVar2 < '\0') {
    if (param_2 != pbVar14) {
      uVar7 = (uint)bVar2;
      if (uVar7 < 0xe0) {
        if ((0xc1 < uVar7) && ((byte)(param_1[1] + 0x80) < 0x40)) {
          uVar7 = (uint)*(ushort *)(*plVar13 + (ulong)(bVar2 & 0x1f) * 2) +
                  (uint)(byte)(param_1[1] + 0x80);
          goto LAB_001022e0;
        }
      }
      else if (uVar7 < 0xf0) {
        if (((((uint)(int)(char)(&_LC1)[bVar2 & 0xf] >> (param_1[1] >> 5) & 1) != 0) &&
            (pbVar14 = param_1 + 2, param_2 != pbVar14)) && ((byte)(param_1[2] + 0x80) < 0x40)) {
          uVar7 = (uint)(byte)(param_1[2] + 0x80) +
                  (uint)*(ushort *)
                         (*plVar13 + (long)(int)((uVar7 & 0xf) * 0x40 + (param_1[1] & 0x3f)) * 2);
LAB_001022e0:
          pbVar14 = pbVar14 + 1;
          goto LAB_00101e26;
        }
      }
      else {
        uVar7 = uVar7 - 0xf0;
        if ((((((int)uVar7 < 5) &&
              (((uint)(int)(char)(&DAT_00108ec8)[param_1[1] >> 4] >> (uVar7 & 0x1f) & 1) != 0)) &&
             (pbVar14 = param_1 + 2, param_2 != pbVar14)) &&
            (((byte)(param_1[2] + 0x80) < 0x40 && (pbVar14 = param_1 + 3, param_2 != pbVar14)))) &&
           ((byte)(param_1[3] + 0x80) < 0x40)) {
          uVar7 = param_1[1] & 0x3f | uVar7 * 0x40;
          if ((int)uVar7 < (int)(uint)*(ushort *)((long)plVar13 + 0x1c)) {
            uVar7 = ucptrie_internalSmallU8Index_76_godot(plVar13,uVar7,param_1[2] + 0x80);
            plVar13 = *(long **)(this + 0x28);
          }
          else {
            uVar7 = *(int *)((long)plVar13 + 0x14) - 2;
          }
          goto LAB_001022e0;
        }
      }
    }
    uVar7 = *(int *)((long)plVar13 + 0x14) - 1;
  }
LAB_00101e26:
  lVar9 = plVar13[1];
  uVar11 = *(ushort *)(lVar9 + (long)(int)uVar7 * 2);
  if (uVar11 < *(ushort *)(this + 0x1a)) {
    if ((param_4 != 0) && (uVar11 < *(ushort *)(this + 0x16))) goto LAB_00102083;
    if (uVar11 < *(ushort *)(this + 0xe)) {
LAB_00102047:
      uVar7 = (anonymous_namespace)::codePointFromValidUTF8(param_1,pbVar14);
      if (0xffff < (int)uVar7) {
        cVar5 = ReorderingBuffer::appendSupplementary(param_6,uVar7,'\0',param_7);
        goto joined_r0x00102278;
      }
LAB_00102110:
      iVar12 = *(int *)(param_6 + 0x28);
      if (iVar12 == 0) {
        cVar5 = ReorderingBuffer::resize(param_6,1,param_7);
        if (cVar5 == '\0') goto LAB_00102080;
        iVar12 = *(int *)(param_6 + 0x28);
      }
      puVar3 = *(undefined2 **)(param_6 + 0x20);
      puVar8 = puVar3 + 1;
      *(undefined2 **)(param_6 + 0x20) = puVar8;
      *puVar3 = (short)uVar7;
      param_6[0x2c] = (ReorderingBuffer)0x0;
      *(undefined2 **)(param_6 + 0x18) = puVar8;
      *(int *)(param_6 + 0x28) = iVar12 + -1;
    }
    else {
      if ((uVar11 != *(ushort *)(this + 0xe)) && (uVar11 != (*(ushort *)(this + 0x10) | 1))) {
LAB_00101f07:
        uVar6 = uVar11;
        if (*(ushort *)(this + 0x1e) <= uVar11) {
          uVar6 = (*(short *)(this + 0x1a) + uVar11) - *(ushort *)(this + 0x1e);
        }
        goto LAB_00101f16;
      }
LAB_00102450:
      uVar7 = (anonymous_namespace)::codePointFromValidUTF8(param_1,pbVar14);
LAB_001021f0:
      iVar12 = (int)(uVar7 - 0xac00) / 0x1c;
      sVar4 = (short)(iVar12 / 0x15);
      local_46 = sVar4 + L'ᄀ';
      lVar9 = 4;
      local_44 = (short)iVar12 + sVar4 * -0x15 + 0x1161;
      iVar12 = (int)(uVar7 - 0xac00) % 0x1c;
      if (iVar12 != 0) {
        local_42 = (short)iVar12 + 0x11a7;
        lVar9 = 6;
      }
      cVar5 = ReorderingBuffer::appendZeroCC
                        (param_6,&local_46,(wchar16 *)(lVar9 + (long)&local_46),param_7);
joined_r0x00102278:
      if (cVar5 == '\0') goto LAB_00102080;
    }
LAB_00101f80:
    if (param_4 == 2) {
      if ((uVar11 & 1) != 0) {
        param_1 = pbVar14;
        if ((param_5 == '\0') || (uVar11 == 1)) goto LAB_00102083;
        if ((uVar11 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar11)) {
          if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar11 >> 1) * 2) < 0x200)
          goto LAB_00102083;
        }
        else if ((uVar11 & 6) < 3) goto LAB_00102083;
      }
      goto LAB_00101f9c;
    }
  }
  else {
    if (uVar11 < *(ushort *)(this + 0x22)) {
      if (*(ushort *)(this + 0x1e) <= uVar11) {
        if (uVar11 < *(ushort *)(this + 0xe)) goto LAB_00102047;
        if ((uVar11 == *(ushort *)(this + 0xe)) || (uVar11 == (*(ushort *)(this + 0x10) | 1)))
        goto LAB_00102450;
        uVar6 = (*(ushort *)(this + 0x1a) + uVar11) - *(ushort *)(this + 0x1e);
LAB_00101f16:
        puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar6 >> 1) * 2);
        uVar6 = *puVar1;
        if ((uVar6 & 0x80) == 0) {
          bVar15 = true;
          cVar5 = '\0';
        }
        else {
          cVar5 = *(char *)((long)puVar1 + -1);
          bVar15 = cVar5 == '\0';
        }
        if ((param_4 != 1) || (!bVar15)) {
          cVar5 = ReorderingBuffer::append
                            (param_6,puVar1 + 1,uVar6 & 0x1f,1,cVar5,(char)(uVar6 >> 8));
          if (cVar5 != '\0') goto LAB_00101f80;
          goto LAB_00102080;
        }
        goto LAB_00102083;
      }
      if (param_4 != 0) goto LAB_00102083;
      iVar12 = (anonymous_namespace)::codePointFromValidUTF8(param_1,pbVar14);
      uVar7 = ((uint)(uVar11 >> 3) + iVar12) - (uint)*(ushort *)(this + 0x1c);
      if (uVar7 < 0x10000) {
        uVar11 = *(ushort *)
                  (lVar9 + (long)(int)((uint)*(ushort *)(*plVar13 + (long)((int)uVar7 >> 6) * 2) +
                                      (uVar7 & 0x3f)) * 2);
        uVar6 = *(ushort *)(this + 0xe);
        if (uVar6 <= uVar11) goto LAB_001021d5;
        goto LAB_00102110;
      }
      if (uVar7 < 0x110000) {
        if ((int)uVar7 < (int)plVar13[3]) {
          iVar12 = ucptrie_internalSmallIndex_76_godot(plVar13);
          uVar11 = *(ushort *)(lVar9 + (long)iVar12 * 2);
          uVar6 = *(ushort *)(this + 0xe);
          if (uVar6 <= uVar11) goto LAB_001021d5;
        }
        else {
          uVar11 = *(ushort *)(lVar9 + (long)(*(int *)((long)plVar13 + 0x14) + -2) * 2);
          uVar6 = *(ushort *)(this + 0xe);
          if (uVar6 <= uVar11) {
LAB_001021d5:
            if ((uVar11 != uVar6) && (uVar11 != (*(ushort *)(this + 0x10) | 1))) goto LAB_00101f07;
            goto LAB_001021f0;
          }
        }
      }
      else {
        uVar11 = *(ushort *)(lVar9 + (long)(*(int *)((long)plVar13 + 0x14) + -1) * 2);
        if (*(ushort *)(this + 0xe) <= uVar11) {
          if ((*(ushort *)(this + 0xe) != uVar11) && ((*(ushort *)(this + 0x10) | 1) != uVar11))
          goto LAB_00101f07;
          if ((int)uVar7 < 0) goto LAB_00102450;
          goto LAB_001021f0;
        }
        if ((int)uVar7 < 0) goto LAB_00102047;
      }
      cVar5 = ReorderingBuffer::appendSupplementary(param_6,uVar7,'\0',param_7);
      if (cVar5 == '\0') goto LAB_00102080;
      goto LAB_00101f9c;
    }
    if (uVar11 < 0xfc00) {
      bVar15 = true;
      RVar10 = (ReorderingBuffer)0x0;
    }
    else {
      RVar10 = SUB21(uVar11 >> 1,0);
      bVar15 = RVar10 == (ReorderingBuffer)0x0;
    }
    if ((param_4 == 1) && (bVar15)) goto LAB_00102083;
    uVar7 = (anonymous_namespace)::codePointFromValidUTF8(param_1,pbVar14);
    if ((int)uVar7 < 0x10000) {
      if ((*(int *)(param_6 + 0x28) != 0) ||
         (cVar5 = ReorderingBuffer::resize(param_6,1,param_7), cVar5 != '\0')) {
        if ((byte)RVar10 < (byte)param_6[0x2c]) {
          if (RVar10 == (ReorderingBuffer)0x0) {
            puVar3 = *(undefined2 **)(param_6 + 0x20);
            puVar8 = puVar3 + 1;
            *(undefined2 **)(param_6 + 0x20) = puVar8;
            *puVar3 = (short)uVar7;
            param_6[0x2c] = (ReorderingBuffer)0x0;
LAB_00101ec2:
            *(undefined2 **)(param_6 + 0x18) = puVar8;
          }
          else {
            ReorderingBuffer::insert(param_6,uVar7 & 0xffff,(uchar)RVar10);
          }
        }
        else {
          puVar3 = *(undefined2 **)(param_6 + 0x20);
          puVar8 = puVar3 + 1;
          *(undefined2 **)(param_6 + 0x20) = puVar8;
          *puVar3 = (short)uVar7;
          param_6[0x2c] = RVar10;
          if ((byte)RVar10 < 2) goto LAB_00101ec2;
        }
        *(int *)(param_6 + 0x28) = *(int *)(param_6 + 0x28) + -1;
        goto LAB_00101f8a;
      }
      goto LAB_00102080;
    }
    cVar5 = ReorderingBuffer::appendSupplementary(param_6,uVar7,(uchar)RVar10,param_7);
    if (cVar5 == '\0') goto LAB_00102080;
  }
LAB_00101f8a:
  if ((param_4 == 1) && (param_1 = pbVar14, (byte)param_6[0x2c] < 2)) goto LAB_00102083;
LAB_00101f9c:
  param_1 = pbVar14;
  if (param_2 <= pbVar14) goto LAB_00102083;
  goto LAB_00101e10;
}



/* icu_76_godot::Normalizer2Impl::getDecomposition(int, char16_t*, int&) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::getDecomposition
          (Normalizer2Impl *this,int param_1,wchar16 *param_2,int *param_3)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  wchar16 *pwVar9;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 8)) {
    return (wchar16 *)0x0;
  }
  uVar5 = 1;
  if ((param_1 & 0xfffffc00U) != 0xd800) {
    plVar2 = *(long **)(this + 0x28);
    lVar3 = plVar2[1];
    if ((uint)param_1 < 0x10000) {
      lVar7 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
    }
    else if ((uint)param_1 < 0x110000) {
      if (param_1 < (int)plVar2[3]) {
        iVar6 = ucptrie_internalSmallIndex_76_godot();
        lVar7 = (long)iVar6 * 2;
      }
      else {
        lVar7 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar7 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
    }
    uVar5 = *(ushort *)(lVar3 + lVar7);
  }
  pwVar9 = (wchar16 *)0x0;
  if (uVar5 < *(ushort *)(this + 0x22)) {
    if ((*(ushort *)(this + 0x1a) <= uVar5) && (uVar5 < *(ushort *)(this + 0x1e))) {
      plVar2 = *(long **)(this + 0x28);
      lVar3 = plVar2[1];
      param_1 = ((uint)(uVar5 >> 3) + param_1) - (uint)*(ushort *)(this + 0x1c);
      if ((uint)param_1 < 0x10000) {
        lVar7 = *plVar2;
        *param_3 = 1;
        *param_2 = (wchar16)param_1;
        lVar7 = (long)(int)((uint)*(ushort *)(lVar7 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
                * 2;
      }
      else {
        *param_2 = (short)(param_1 >> 10) + L'ퟀ';
        *param_3 = 2;
        param_2[1] = (wchar16)param_1 & 0x3ffU | 0xdc00;
        if ((uint)param_1 < 0x110000) {
          if (param_1 < (int)plVar2[3]) {
            iVar6 = ucptrie_internalSmallIndex_76_godot();
            lVar7 = (long)iVar6 * 2;
          }
          else {
            lVar7 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
          }
        }
        else {
          lVar7 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
        }
      }
      uVar5 = *(ushort *)(lVar3 + lVar7);
      pwVar9 = param_2;
    }
    if (*(ushort *)(this + 0xe) <= uVar5) {
      if ((*(ushort *)(this + 0xe) == uVar5) || (uVar5 == (*(ushort *)(this + 0x10) | 1))) {
        iVar6 = (int)(param_1 - 0xac00U) / 0x1c;
        sVar4 = (short)(iVar6 / 0x15);
        *param_2 = sVar4 + L'ᄀ';
        param_2[1] = (short)iVar6 + sVar4 * -0x15 + L'ᅡ';
        iVar6 = 2;
        iVar8 = (int)(param_1 - 0xac00U) % 0x1c;
        if (iVar8 != 0) {
          iVar6 = 3;
          param_2[2] = (short)iVar8 + L'ᆧ';
        }
        *param_3 = iVar6;
        return param_2;
      }
      if (*(ushort *)(this + 0x1e) <= uVar5) {
        uVar5 = (uVar5 + *(short *)(this + 0x1a)) - *(ushort *)(this + 0x1e);
      }
      puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar5 >> 1) * 2);
      pwVar9 = (wchar16 *)(puVar1 + 1);
      *param_3 = *puVar1 & 0x1f;
    }
  }
  return pwVar9;
}



/* icu_76_godot::Normalizer2Impl::getRawDecomposition(int, char16_t*, int&) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::getRawDecomposition
          (Normalizer2Impl *this,int param_1,wchar16 *param_2,int *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  wchar16 wVar11;
  wchar16 wVar13;
  int iVar14;
  short sVar12;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 8)) {
    return (wchar16 *)0x0;
  }
  uVar5 = 1;
  if ((param_1 & 0xfffffc00U) != 0xd800) {
    plVar3 = *(long **)(this + 0x28);
    lVar4 = plVar3[1];
    if ((uint)param_1 < 0x10000) {
      lVar9 = (long)(int)((uint)*(ushort *)(*plVar3 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
    }
    else if ((uint)param_1 < 0x110000) {
      if (param_1 < (int)plVar3[3]) {
        iVar8 = ucptrie_internalSmallIndex_76_godot();
        lVar9 = (long)iVar8 * 2;
      }
      else {
        lVar9 = (long)(*(int *)((long)plVar3 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar9 = (long)(*(int *)((long)plVar3 + 0x14) + -1) * 2;
    }
    uVar5 = *(ushort *)(lVar4 + lVar9);
  }
  if ((uVar5 < *(ushort *)(this + 0xe)) || (*(ushort *)(this + 0x22) <= uVar5)) {
    return (wchar16 *)0x0;
  }
  if ((*(ushort *)(this + 0xe) == uVar5) || ((*(ushort *)(this + 0x10) | 1) == uVar5)) {
    iVar10 = param_1 + -0xac00;
    iVar14 = iVar10 >> 0x1f;
    iVar8 = iVar10 / 0x1c + iVar14;
    iVar10 = iVar10 + (iVar8 - iVar14) * -0x1c;
    if (iVar10 == 0) {
      iVar8 = iVar8 - iVar14;
      sVar12 = (short)(iVar8 / 0x15);
      wVar13 = sVar12 + L'ᄀ';
      wVar11 = (short)iVar8 + sVar12 * -0x15 + L'ᅡ';
    }
    else {
      sVar12 = (short)iVar10;
      wVar11 = sVar12 + L'ᆧ';
      wVar13 = (short)param_1 - sVar12;
    }
    param_2[1] = wVar11;
    *param_2 = wVar13;
    *param_3 = 2;
    return param_2;
  }
  uVar2 = *(ushort *)(this + 0x1e);
  if (uVar5 < *(ushort *)(this + 0x1a)) {
    if (uVar5 < uVar2) goto LAB_00102969;
  }
  else if (uVar5 < uVar2) {
    uVar6 = ((uint)(uVar5 >> 3) + param_1) - (uint)*(ushort *)(this + 0x1c);
    if (uVar6 < 0x10000) {
      *param_3 = 1;
      *param_2 = (wchar16)uVar6;
      return param_2;
    }
    *param_2 = (short)((int)uVar6 >> 10) + L'ퟀ';
    *param_3 = 2;
    param_2[1] = (wchar16)uVar6 & 0x3ffU | 0xdc00;
    return param_2;
  }
  uVar5 = uVar5 + (*(ushort *)(this + 0x1a) - uVar2);
LAB_00102969:
  puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar5 >> 1) * 2);
  uVar5 = *puVar1;
  uVar6 = uVar5 & 0x1f;
  if ((uVar5 & 0x40) == 0) {
    *param_3 = uVar6;
    param_2 = (wchar16 *)(puVar1 + 1);
  }
  else {
    uVar7 = uVar5 >> 7 & 1;
    wVar13 = puVar1[-1 - (ulong)uVar7];
    if ((ushort)wVar13 < 0x20) {
      *param_3 = (uint)(ushort)wVar13;
      param_2 = (wchar16 *)(puVar1 + ((-1 - (ulong)(ushort)wVar13) - (ulong)uVar7));
    }
    else {
      *param_2 = wVar13;
      u_memcpy_76_godot(param_2 + 1,puVar1 + 3,uVar6 - 2);
      *param_3 = uVar6 - 1;
    }
  }
  return param_2;
}



/* icu_76_godot::Normalizer2Impl::decomposeAndAppend(char16_t const*, char16_t const*, signed char,
   icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::decomposeAndAppend
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,char param_4,long param_5,
          ReorderingBuffer *param_6,UErrorCode *param_7)

{
  byte *pbVar1;
  wchar16 wVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ushort uVar10;
  ushort uVar11;
  wchar16 *pwVar12;
  wchar16 *pwVar13;
  
  uVar3 = *(undefined8 *)(param_6 + 0x18);
  icu_76_godot::UnicodeString::unBogus();
  if (*(short *)(param_5 + 8) < 0) {
    uVar8 = *(uint *)(param_5 + 0xc);
  }
  else {
    uVar8 = (uint)(*(short *)(param_5 + 8) >> 5);
  }
  icu_76_godot::UnicodeString::doReplace((int)param_5,0,(wchar16 *)(ulong)uVar8,(int)uVar3,0);
  if (param_4 != '\0') {
    decompose(this,param_1,param_2,param_6,param_7);
    return;
  }
  uVar10 = 0;
  uVar11 = 0;
  pwVar12 = param_1;
  if (param_1 != param_2) {
    plVar9 = *(long **)(this + 0x28);
    uVar11 = 0;
    uVar10 = 0;
    bVar4 = true;
    do {
      wVar2 = *pwVar12;
      pwVar13 = pwVar12 + 1;
      if (((ushort)wVar2 & 0xf800) == 0xd800) {
        if (((wVar2 & 0x400U) == 0) && (param_2 != pwVar13)) {
          if ((pwVar12[1] & 0xfc00U) == 0xdc00) {
            pwVar13 = pwVar12 + 2;
            if ((int)((ushort)pwVar12[1] + 0xfca02400 + (uint)(ushort)wVar2 * 0x400) <
                (int)plVar9[3]) {
              iVar7 = ucptrie_internalSmallIndex_76_godot();
              plVar9 = *(long **)(this + 0x28);
              uVar10 = uVar10 & 0xff;
            }
            else {
              iVar7 = *(int *)((long)plVar9 + 0x14) + -2;
            }
            goto LAB_00102bcb;
          }
        }
        iVar7 = *(int *)((long)plVar9 + 0x14) + -1;
      }
      else {
        iVar7 = (uint)*(ushort *)(*plVar9 + (long)((int)(uint)(ushort)wVar2 >> 6) * 2) +
                ((ushort)wVar2 & 0x3f);
      }
LAB_00102bcb:
      uVar6 = *(ushort *)(plVar9[1] + (long)iVar7 * 2);
      if (uVar6 < 0xfc00) {
        if (((*(ushort *)(this + 0x12) <= uVar6) && (uVar6 < *(ushort *)(this + 0x1a))) &&
           (pbVar1 = (byte *)(*(long *)(this + 0x30) + (ulong)(uVar6 >> 1) * 2),
           (*pbVar1 & 0x80) != 0)) {
          uVar6 = (ushort)pbVar1[-2];
          goto LAB_00102b7b;
        }
LAB_00102c08:
        uVar10 = uVar10 & 0xff;
        break;
      }
      uVar6 = uVar6 >> 1;
LAB_00102b7b:
      if ((char)uVar6 == '\0') goto LAB_00102c08;
      if (bVar4) {
        uVar10 = uVar6;
      }
      bVar4 = false;
      if (pwVar13 == param_2) goto LAB_00102c90;
      uVar11 = uVar6 & 0xff;
      pwVar12 = pwVar13;
    } while( true );
  }
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)u_strchr_76_godot(pwVar12,0);
  }
LAB_00102c15:
  cVar5 = ReorderingBuffer::append
                    (param_6,param_1,(long)pwVar12 - (long)param_1 >> 1,0,uVar10,uVar11,param_7);
  if (cVar5 == '\0') {
    return;
  }
  ReorderingBuffer::appendZeroCC(param_6,pwVar12,param_2,param_7);
  return;
LAB_00102c90:
  uVar11 = uVar6 & 0xff;
  uVar10 = uVar10 & 0xff;
  pwVar12 = param_2;
  goto LAB_00102c15;
}



/* icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryBefore(unsigned short) const */

uint icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryBefore(ushort param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 in_RDX;
  ushort in_SI;
  undefined6 in_register_0000003a;
  
  uVar2 = 1;
  if (*(ushort *)(CONCAT62(in_register_0000003a,param_1) + 0x16) <= in_SI) {
    if (*(ushort *)(CONCAT62(in_register_0000003a,param_1) + 0x1a) <= in_SI) {
      return (uint)(in_SI < 0xfc01) | (uint)CONCAT71((int7)((ulong)in_RDX >> 8),in_SI == 0xfe00);
    }
    pbVar1 = (byte *)(*(long *)(CONCAT62(in_register_0000003a,param_1) + 0x30) +
                     (ulong)(in_SI >> 1) * 2);
    if ((*pbVar1 & 0x80) != 0) {
      uVar2 = (uint)(*(ushort *)(pbVar1 + -2) < 0x100);
    }
  }
  return uVar2;
}



/* icu_76_godot::Normalizer2Impl::decomposeUTF8(unsigned int, unsigned char const*, unsigned char
   const*, icu_76_godot::ByteSink*, icu_76_godot::Edits*, UErrorCode&) const */

byte * __thiscall
icu_76_godot::Normalizer2Impl::decomposeUTF8
          (Normalizer2Impl *this,uint param_1,uchar *param_2,uchar *param_3,ByteSink *param_4,
          Edits *param_5,UErrorCode *param_6)

{
  ushort uVar1;
  wchar16 *pwVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  long in_FS_OFFSET;
  byte *local_108;
  Normalizer2Impl *local_c8;
  UnicodeString *local_c0;
  wchar16 *local_b8;
  wchar16 *pwStack_b0;
  wchar16 *local_a8;
  undefined4 local_a0;
  byte local_9c;
  code *local_88;
  ushort local_80;
  undefined4 local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_88 = icu_76_godot::ByteSinkUtil::appendUnchanged;
  uVar12 = (uint)*(ushort *)(this + 8);
  if ((0x7f < uVar12) && (uVar12 = ((int)uVar12 >> 6) - 0x40, 0x7ff < *(ushort *)(this + 8))) {
    uVar12 = 0xffffffe0;
  }
  uVar13 = 0;
  local_108 = param_2;
LAB_00102e4e:
  pbVar9 = param_2;
  if (param_2 != param_3) {
    do {
      bVar4 = *pbVar9;
      pbVar7 = pbVar9 + 1;
      if ((byte)uVar12 <= bVar4) {
        plVar10 = *(long **)(this + 0x28);
        uVar5 = (uint)bVar4;
        uVar11 = uVar13;
        if ((char)bVar4 < '\0') {
          if (param_3 != pbVar7) {
            uVar6 = (uint)bVar4;
            uVar5 = (uint)bVar4;
            if (uVar6 < 0xe0) {
              if ((0xc1 < uVar6) && ((byte)(pbVar9[1] + 0x80) < 0x40)) {
                uVar5 = (uint)*(ushort *)(*plVar10 + (ulong)(uVar5 & 0x1f) * 2) +
                        (uint)(byte)(pbVar9[1] + 0x80);
                goto LAB_0010304f;
              }
            }
            else if (uVar6 < 0xf0) {
              if (((((uint)(int)(char)(&_LC1)[uVar5 & 0xf] >> (pbVar9[1] >> 5) & 1) != 0) &&
                  (pbVar7 = pbVar9 + 2, param_3 != pbVar7)) && ((byte)(pbVar9[2] + 0x80) < 0x40)) {
                uVar5 = (uint)*(ushort *)
                               (*plVar10 +
                               (long)(int)((pbVar9[1] & 0x3f) + (uVar5 & 0xf) * 0x40) * 2) +
                        (uint)(byte)(pbVar9[2] + 0x80);
LAB_0010304f:
                pbVar7 = pbVar7 + 1;
                uVar11 = uVar13;
                goto LAB_00102e60;
              }
            }
            else {
              uVar6 = uVar6 - 0xf0;
              if ((((((int)uVar6 < 5) &&
                    (((uint)(int)(char)(&DAT_00108ec8)[pbVar9[1] >> 4] >> (uVar6 & 0x1f) & 1) != 0))
                   && (pbVar7 = pbVar9 + 2, param_3 != pbVar7)) &&
                  (((byte)(pbVar9[2] + 0x80) < 0x40 && (pbVar7 = pbVar9 + 3, param_3 != pbVar7))))
                 && ((byte)(pbVar9[3] + 0x80) < 0x40)) {
                uVar5 = pbVar9[1] & 0x3f | uVar6 * 0x40;
                if ((int)uVar5 < (int)(uint)*(ushort *)((long)plVar10 + 0x1c)) {
                  uVar5 = ucptrie_internalSmallU8Index_76_godot
                                    (plVar10,uVar5,pbVar9[2] + 0x80,pbVar9[3] + 0x80);
                  plVar10 = *(long **)(this + 0x28);
                  uVar13 = uVar13 & 0xff;
                }
                else {
                  uVar5 = *(int *)((long)plVar10 + 0x14) - 2;
                }
                goto LAB_0010304f;
              }
            }
          }
          uVar5 = *(int *)((long)plVar10 + 0x14) - 1;
        }
LAB_00102e60:
        uVar1 = *(ushort *)(plVar10[1] + (long)(int)uVar5 * 2);
        uVar13 = uVar11;
        if ((*(ushort *)(this + 0xe) <= uVar1) && ((uVar1 & 0xfdff) != 0xfc00)) goto LAB_00103060;
      }
      pbVar9 = pbVar7;
      if (pbVar7 == param_3) break;
    } while( true );
  }
  pbVar8 = param_3;
  if ((local_108 != param_3) && (param_4 != (ByteSink *)0x0)) {
    icu_76_godot::ByteSinkUtil::appendUnchanged(local_108,param_3,param_4,param_1,param_5,param_6);
  }
LAB_00102f55:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103060:
  pbVar8 = pbVar7;
  if (param_2 == pbVar9) {
    if (uVar1 < *(ushort *)(this + 0x22)) {
LAB_00103131:
      pbVar8 = local_108;
      if ((param_4 == (ByteSink *)0x0) ||
         (((local_108 != pbVar9 &&
           (cVar3 = norm16HasDecompBoundaryBefore((ushort)this), cVar3 != '\0')) &&
          (cVar3 = icu_76_godot::ByteSinkUtil::appendUnchanged
                             (local_108,pbVar9,param_4,param_1,param_5,param_6), pbVar8 = pbVar7,
          local_108 = pbVar9, cVar3 == '\0')))) goto LAB_00102f55;
LAB_00103157:
      local_c8 = this;
      local_c0 = (UnicodeString *)&local_88;
      local_b8 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer((int)(UnicodeString *)&local_88);
      local_a0 = 0x1b;
      if ((local_80 & 2) == 0) {
        local_a0 = local_78;
      }
      local_9c = 0;
      pwStack_b0 = local_b8;
      local_a8 = local_b8;
      if (local_b8 == (wchar16 *)0x0) {
        pbVar8 = pbVar7;
        if (*(int *)param_6 < 1) {
          *(undefined4 *)param_6 = 7;
        }
        goto LAB_00102f55;
      }
      if (*(int *)param_6 < 1) {
        decomposeShort(this,local_108,pbVar7,0,0,(ReorderingBuffer *)&local_c8,param_6);
        if (1 < local_9c) {
          pbVar7 = (byte *)decomposeShort(this,pbVar7,param_3,1,0,(ReorderingBuffer *)&local_c8,
                                          param_6);
        }
        pwVar2 = local_b8;
        if (*(int *)param_6 < 1) {
          if ((long)pbVar7 - (long)pbVar9 < 0x80000000) {
            if ((uVar1 < *(ushort *)(this + 0x22)) ||
               (cVar3 = ReorderingBuffer::equals((ReorderingBuffer *)&local_c8,local_108,pbVar7),
               cVar3 == '\0')) {
              cVar3 = icu_76_godot::ByteSinkUtil::appendChange
                                (local_108,pbVar7,pwVar2,(int)((long)local_a8 - (long)pwVar2 >> 1),
                                 param_4,param_5,param_6);
            }
            else {
              cVar3 = icu_76_godot::ByteSinkUtil::appendUnchanged
                                (local_108,pbVar7,param_4,param_1,param_5,param_6);
            }
            if (cVar3 != '\0') {
              if (pwVar2 != (wchar16 *)0x0) {
                icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
              }
              uVar13 = 0;
              param_2 = pbVar7;
              local_108 = pbVar7;
              goto LAB_00102e4e;
            }
          }
          else {
            *(undefined4 *)param_6 = 8;
          }
        }
        pbVar8 = pbVar7;
        if (pwVar2 == (wchar16 *)0x0) goto LAB_00102f55;
      }
      icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
      pbVar8 = pbVar7;
      goto LAB_00102f55;
    }
    if (uVar1 < 0xfc00) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar1 >> 1;
      bVar4 = (byte)uVar13;
      if ((bVar4 < (byte)uVar11) && (bVar4 != 0)) goto LAB_00103131;
      param_2 = pbVar7;
      if (1 < bVar4) goto LAB_00102e4e;
    }
    bVar4 = (byte)uVar13;
    pbVar9 = local_108;
    if (param_4 == (ByteSink *)0x0) goto LAB_001030f8;
  }
  else {
    if (param_4 == (ByteSink *)0x0) {
      pbVar8 = pbVar9;
      if (uVar1 < *(ushort *)(this + 0x22)) goto LAB_00102f55;
      uVar13 = 0;
      if ((0xfbff < uVar1) &&
         (uVar13 = uVar1 >> 1, param_2 = pbVar7, local_108 = pbVar9, 1 < (byte)uVar13))
      goto LAB_00102e4e;
      goto LAB_001030f8;
    }
    cVar3 = icu_76_godot::ByteSinkUtil::appendUnchanged
                      (local_108,pbVar9,param_4,param_1,param_5,param_6);
    if (cVar3 == '\0') goto LAB_00102f55;
    local_108 = pbVar9;
    if (uVar1 < *(ushort *)(this + 0x22)) goto LAB_00103157;
    bVar4 = 0;
    if (0xfbff < uVar1) {
      uVar13 = uVar1 >> 1;
      bVar4 = (byte)uVar13;
      param_2 = pbVar7;
      if (1 < bVar4) goto LAB_00102e4e;
    }
  }
  cVar3 = icu_76_godot::ByteSinkUtil::appendUnchanged(pbVar9,pbVar7,param_4,param_1,param_5,param_6)
  ;
  uVar13 = (ushort)bVar4;
  if (cVar3 == '\0') goto LAB_00102f55;
LAB_001030f8:
  param_2 = pbVar7;
  local_108 = pbVar7;
  goto LAB_00102e4e;
}



/* icu_76_godot::Normalizer2Impl::hasDecompBoundaryBefore(int) const */

bool __thiscall
icu_76_godot::Normalizer2Impl::hasDecompBoundaryBefore(Normalizer2Impl *this,int param_1)

{
  byte bVar1;
  char cVar2;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 0xc)) {
    return true;
  }
  if (param_1 < 0x10000) {
    bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)(param_1 >> 8));
    if (bVar1 == 0) {
      return true;
    }
    if ((bVar1 >> ((uint)param_1 >> 5 & 7) & 1) == 0) {
      return true;
    }
  }
  else if (((uint)param_1 < 0x110000) && (param_1 < *(int *)(*(long *)(this + 0x28) + 0x18))) {
    ucptrie_internalSmallIndex_76_godot();
  }
  cVar2 = norm16HasDecompBoundaryBefore((ushort)this);
  return cVar2 != '\0';
}



/* icu_76_godot::Normalizer2Impl::hasDecompBoundaryAfter(int) const */

undefined8 __thiscall
icu_76_godot::Normalizer2Impl::hasDecompBoundaryAfter(Normalizer2Impl *this,int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 8)) {
    return 1;
  }
  if (param_1 < 0x10000) {
    bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)(param_1 >> 8));
    if (bVar1 == 0) {
      return 1;
    }
    if ((bVar1 >> ((uint)param_1 >> 5 & 7) & 1) == 0) {
      return 1;
    }
    uVar2 = 1;
    if ((param_1 & 0xfffffc00U) == 0xd800) {
      if (*(short *)(this + 0xe) != 0) {
        return 1;
      }
      goto LAB_00103572;
    }
    lVar6 = (*(long **)(this + 0x28))[1];
    lVar5 = (long)(int)((uint)*(ushort *)(**(long **)(this + 0x28) + (long)(param_1 >> 6) * 2) +
                       (param_1 & 0x3fU)) * 2;
  }
  else {
    lVar5 = *(long *)(this + 0x28);
    lVar6 = *(long *)(lVar5 + 8);
    if ((uint)param_1 < 0x110000) {
      if (param_1 < *(int *)(lVar5 + 0x18)) {
        iVar3 = ucptrie_internalSmallIndex_76_godot();
        lVar5 = (long)iVar3 * 2;
      }
      else {
        lVar5 = (long)(*(int *)(lVar5 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar5 = (long)(*(int *)(lVar5 + 0x14) + -1) * 2;
    }
  }
  uVar2 = *(ushort *)(lVar6 + lVar5);
  if (uVar2 <= *(ushort *)(this + 0xe)) {
    return 1;
  }
LAB_00103572:
  if ((*(ushort *)(this + 0x10) | 1) == uVar2) {
    return 1;
  }
  uVar4 = norm16HasDecompBoundaryAfter(this,uVar2);
  return uVar4;
}



/* icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryAfter(unsigned short) const */

uint __thiscall
icu_76_godot::Normalizer2Impl::norm16HasDecompBoundaryAfter(Normalizer2Impl *this,ushort param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined6 in_register_00000032;
  
  uVar6 = CONCAT62(in_register_00000032,param_1) & 0xffffffff;
  if (param_1 <= *(ushort *)(this + 0xe)) {
    return 1;
  }
  if (param_1 == (*(ushort *)(this + 0x10) | 1)) {
    return 1;
  }
  uVar2 = *(ushort *)(this + 0x1a);
  if (param_1 < uVar2) {
    uVar3 = *(ushort *)(this + 0x1e);
    if (param_1 < uVar3) goto LAB_0010365a;
  }
  else {
    uVar4 = (undefined1)(uVar2 >> 8);
    if (*(ushort *)(this + 0x22) <= param_1) {
      return (uint)CONCAT11(uVar4,param_1 < 0xfc01) |
             (uint)CONCAT71((int7)(uVar6 >> 8),param_1 == 0xfe00);
    }
    uVar3 = *(ushort *)(this + 0x1e);
    if (param_1 < uVar3) {
      return (uint)CONCAT11(uVar4,(param_1 & 6) < 3);
    }
  }
  uVar6 = (ulong)(((uint)uVar2 + (int)CONCAT62(in_register_00000032,param_1)) - (uint)uVar3);
LAB_0010365a:
  puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)((ushort)(uVar6 >> 1) & 0x7fff) * 2);
  uVar5 = 0;
  uVar2 = *puVar1;
  if (((uVar2 < 0x200) && (uVar5 = 1, 0xff < uVar2)) && ((uVar2 & 0x80) != 0)) {
    uVar5 = (uint)(puVar1[-1] < 0x100);
  }
  return uVar5;
}



/* icu_76_godot::Normalizer2Impl::combine(unsigned short const*, int) */

uint icu_76_godot::Normalizer2Impl::combine(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_2 < 0x3400) {
    uVar1 = (short)param_2 * 2;
    uVar3 = *param_1;
    while (uVar3 < uVar1) {
      param_1 = param_1 + (ulong)(uVar3 & 1) + 2;
      uVar3 = *param_1;
    }
    if (uVar1 == (uVar3 & 0x7ffe)) {
      if ((uVar3 & 1) != 0) {
        return CONCAT22(param_1[1],param_1[2]);
      }
      return (uint)param_1[1];
    }
  }
  else {
    uVar3 = ((ushort)(param_2 >> 9) & 0xfffe) + 0x3400;
    while( true ) {
      uVar1 = *param_1;
      while (uVar1 < uVar3) {
        param_1 = param_1 + (ulong)(uVar1 & 1) + 2;
        uVar1 = *param_1;
      }
      if (uVar3 != (uVar1 & 0x7ffe)) {
        return 0xffffffff;
      }
      uVar2 = param_1[1];
      uVar4 = (ushort)(param_2 << 6);
      if (uVar4 <= uVar2) break;
      if ((short)uVar1 < 0) {
        return 0xffffffff;
      }
      param_1 = param_1 + 3;
    }
    if (uVar4 == (uVar2 & 0xffc0)) {
      return (uVar2 & 0x3f) << 0x10 | (uint)param_1[2];
    }
  }
  return 0xffffffff;
}



/* icu_76_godot::Normalizer2Impl::addComposites(unsigned short const*, icu_76_godot::UnicodeSet&)
   const */

void __thiscall
icu_76_godot::Normalizer2Impl::addComposites
          (Normalizer2Impl *this,ushort *param_1,UnicodeSet *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  do {
    uVar3 = param_1[1];
    uVar4 = (uint)uVar3;
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 2;
      uVar8 = (int)(uint)uVar3 >> 1;
      if ((uVar3 & 1) != 0) {
        plVar7 = *(long **)(this + 0x28);
        lVar9 = plVar7[1];
LAB_00103860:
        lVar6 = (long)(int)((uint)*(ushort *)(*plVar7 + (long)((int)uVar4 >> 7) * 2) +
                           (uVar8 & 0x3f)) * 2;
LAB_00103879:
        uVar3 = *(ushort *)(lVar9 + lVar6);
        if (*(ushort *)(this + 0x1e) <= uVar3) {
          uVar3 = (*(short *)(this + 0x1a) - *(ushort *)(this + 0x1e)) + uVar3;
        }
        puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2);
        addComposites(this,puVar1 + (ulong)(*puVar1 & 0x1f) + 1,param_2);
      }
    }
    else {
      puVar1 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar4 = (uVar3 & 0x3f) << 0x10 | (uint)*puVar1;
      uVar8 = (int)uVar4 >> 1;
      if ((*puVar1 & 1) != 0) {
        plVar7 = *(long **)(this + 0x28);
        lVar9 = plVar7[1];
        if (uVar8 < 0x10000) goto LAB_00103860;
        if (uVar8 < 0x110000) {
          if ((int)uVar8 < (int)plVar7[3]) {
            iVar5 = ucptrie_internalSmallIndex_76_godot(plVar7,uVar8);
            lVar6 = (long)iVar5 * 2;
          }
          else {
            lVar6 = (long)(*(int *)((long)plVar7 + 0x14) + -2) * 2;
          }
        }
        else {
          lVar6 = (long)(*(int *)((long)plVar7 + 0x14) + -1) * 2;
        }
        goto LAB_00103879;
      }
    }
    icu_76_godot::UnicodeSet::add((int)param_2);
    if ((short)uVar2 < 0) {
      return;
    }
  } while( true );
}



/* icu_76_godot::Normalizer2Impl::recompose(icu_76_godot::ReorderingBuffer&, int, signed char) const
    */

void __thiscall
icu_76_godot::Normalizer2Impl::recompose
          (Normalizer2Impl *this,long param_1,int param_2,uint param_4)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long *plVar23;
  ushort *puVar24;
  byte bVar25;
  ushort *local_60;
  ushort *puVar17;
  
  bVar25 = 0;
  puVar24 = *(ushort **)(param_1 + 0x20);
  puVar14 = (ushort *)(*(long *)(param_1 + 0x10) + (long)param_2 * 2);
  if (puVar14 == puVar24) {
    return;
  }
  local_60 = (ushort *)0x0;
  uVar21 = (ulong)param_4;
  bVar2 = false;
  uVar4 = 0;
  plVar23 = *(long **)(this + 0x28);
  puVar12 = (ushort *)0x0;
LAB_00103930:
  while( true ) {
    uVar6 = *puVar14;
    uVar15 = (uint)uVar6;
    puVar18 = puVar14 + 1;
    uVar11 = uVar4;
    if ((uVar6 & 0xf800) == 0xd800) {
      if ((((uVar6 & 0x400) == 0) && (puVar24 != puVar18)) &&
         (puVar13 = puVar14 + 1, (*puVar13 & 0xfc00) == 0xdc00)) {
        puVar14 = puVar14 + 2;
        uVar15 = *puVar13 + 0xfca02400 + (uint)uVar6 * 0x400;
        if ((int)uVar15 < (int)plVar23[3]) {
          iVar7 = ucptrie_internalSmallIndex_76_godot(plVar23);
          plVar23 = *(long **)(this + 0x28);
          uVar21 = uVar21 & 0xff;
          uVar11 = uVar4 & 0xff;
        }
        else {
          iVar7 = *(int *)((long)plVar23 + 0x14) + -2;
        }
      }
      else {
        iVar7 = *(int *)((long)plVar23 + 0x14) + -1;
        puVar14 = puVar18;
      }
    }
    else {
      iVar7 = (uint)*(ushort *)(*plVar23 + (long)((int)(uint)uVar6 >> 6) * 2) + (uVar6 & 0x3f);
      puVar14 = puVar18;
    }
    lVar1 = plVar23[1];
    uVar6 = *(ushort *)(this + 0x1e);
    uVar22 = (uint)uVar6;
    uVar19 = *(ushort *)(lVar1 + (long)iVar7 * 2);
    uVar20 = (uint)uVar19;
    bVar10 = (byte)uVar11;
    puVar13 = puVar14;
    puVar18 = puVar24;
    if (0xfbff < uVar19) break;
    if (uVar19 < uVar6) {
      if (puVar14 != puVar24) goto code_r0x00103a81;
      goto LAB_00103b11;
    }
    if (puVar12 == (ushort *)0x0) {
      if (puVar14 == puVar24) goto LAB_00103b11;
      if ((ushort)(uVar19 - 2) < 0xfbfe) {
LAB_001039b0:
        puVar12 = (ushort *)
                  ((ulong)((*(ushort *)(this + 0x1a) + uVar20) - uVar22 & 0xfffe) +
                  *(long *)(this + 0x30));
        if (puVar12 != (ushort *)0x0) goto joined_r0x00103aaa;
        goto LAB_00103abe;
      }
      uVar4 = 0;
    }
    else {
      if (bVar10 != 0) {
        if (puVar14 != puVar24) {
          uVar20 = (uint)uVar19;
          uVar22 = (uint)uVar6;
          if ((ushort)(uVar19 - 2) < 0xfbfe) goto LAB_001039b0;
          goto LAB_00103a30;
        }
        goto LAB_00103b11;
      }
      bVar3 = 0;
LAB_00103b6c:
      uVar20 = (uint)uVar19;
      uVar22 = (uint)uVar6;
      uVar8 = combine(puVar12,uVar15);
      uVar19 = (ushort)uVar20;
      if ((int)uVar8 < 0) {
        if (puVar14 != puVar24) {
          if (bVar3 != 0) {
            uVar4 = (ushort)bVar3;
            goto LAB_00103a1a;
          }
          if (0xfbfd < (ushort)(uVar19 - 2)) goto LAB_00103a30;
          if ((ushort)uVar22 <= uVar19) goto LAB_001039b0;
          goto LAB_00103a93;
        }
        goto LAB_00103b11;
      }
      uVar20 = (int)uVar8 >> 1;
      puVar12 = puVar14 + ((ulong)((int)uVar15 < 0x10000) - 2);
      uVar4 = (ushort)uVar20;
      sVar5 = (short)((int)uVar8 >> 0xb);
      puVar18 = puVar12;
      if (bVar2) {
        if (uVar20 - 0x10000 < 0x100000) {
          *local_60 = sVar5 + 0xd7c0;
          local_60[1] = uVar4 & 0x3ff | 0xdc00;
        }
        else {
          *local_60 = uVar4;
          if (local_60 + 2 < puVar12) {
            memmove(local_60 + 1,local_60 + 2,
                    ((long)puVar12 + (-5 - (long)local_60) & 0xfffffffffffffffeU) + 2);
            uVar21 = uVar21 & 0xff;
          }
          puVar18 = puVar12 + -1;
          bVar2 = false;
        }
      }
      else if (uVar20 - 0x10000 < 0x100000) {
        puVar18 = puVar12 + 1;
        if (local_60 + 1 < puVar12) {
          __n = ((long)puVar12 + (-3 - (long)local_60) & 0xfffffffffffffffeU) + 2;
          memmove((void *)((long)puVar18 - __n),(void *)((long)puVar12 - __n),__n);
          uVar21 = uVar21 & 0xff;
        }
        local_60[1] = uVar4 & 0x3ff | 0xdc00;
        *local_60 = sVar5 + 0xd7c0;
        bVar2 = true;
      }
      else {
        *local_60 = uVar4;
      }
      if (puVar18 < puVar14) {
        puVar12 = puVar14;
        puVar13 = puVar18;
        if (puVar24 <= puVar14) goto LAB_00103b11;
        do {
          puVar16 = puVar12 + (ulong)bVar25 * -2 + 1;
          *puVar13 = *puVar12;
          puVar12 = puVar16;
          puVar13 = puVar13 + (ulong)bVar25 * -2 + 1;
        } while (puVar16 < puVar24);
        puVar24 = (ushort *)
                  ((long)puVar18 + ((long)puVar24 + (-1 - (long)puVar14) & 0xfffffffffffffffeU) + 2)
        ;
        puVar14 = puVar18;
      }
      uVar4 = uVar11 & 0xff;
      puVar18 = puVar24;
      if (puVar14 == puVar24) goto LAB_00103b11;
      puVar12 = (ushort *)0x0;
      if ((uVar8 & 1) != 0) {
        if ((int)uVar20 < 0x10000) {
          lVar9 = (long)(int)((uint)*(ushort *)(*plVar23 + (long)((int)uVar8 >> 7) * 2) +
                             (uVar20 & 0x3f)) * 2;
        }
        else if ((int)uVar20 < 0x110000) {
          if ((int)uVar20 < (int)plVar23[3]) {
            iVar7 = ucptrie_internalSmallIndex_76_godot(plVar23,uVar20);
            plVar23 = *(long **)(this + 0x28);
            uVar21 = uVar21 & 0xff;
            lVar9 = (long)iVar7 * 2;
          }
          else {
            lVar9 = (long)(*(int *)((long)plVar23 + 0x14) + -2) * 2;
          }
        }
        else {
          lVar9 = (long)(*(int *)((long)plVar23 + 0x14) + -1) * 2;
        }
        uVar4 = uVar11 & 0xff;
        uVar6 = *(ushort *)(lVar1 + lVar9);
        if (*(ushort *)(this + 0x1e) <= uVar6) {
          uVar6 = uVar6 + (*(short *)(this + 0x1a) - *(ushort *)(this + 0x1e));
        }
        puVar12 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar6 >> 1) * 2);
        puVar12 = puVar12 + (ulong)(*puVar12 & 0x1f) + 1;
      }
    }
  }
  uVar4 = uVar19 >> 1;
  bVar3 = (byte)uVar4;
  if ((uVar19 < uVar6) || (0xfe00 < uVar19)) {
LAB_00103a0b:
    if (puVar14 == puVar24) goto LAB_00103b11;
    if (bVar3 != 0) {
LAB_00103a1a:
      if ((char)uVar21 != '\0') {
        puVar12 = (ushort *)0x0;
      }
      goto LAB_00103930;
    }
LAB_00103a30:
    uVar4 = 0;
  }
  else {
    if (puVar12 == (ushort *)0x0) {
      if (puVar14 == puVar24) goto LAB_00103b11;
      if (bVar3 != 0) goto LAB_00103a1a;
      uVar4 = 0;
      goto LAB_00103930;
    }
    if ((bVar3 <= bVar10) && (bVar10 != 0)) goto LAB_00103a0b;
    if (uVar19 != 0xfe00) goto LAB_00103b6c;
    if (((int)uVar15 < 0x11a7) && ((ushort)(*local_60 + 0xef00) < 0x13)) {
      puVar13 = puVar14 + -1;
      uVar4 = ((short)uVar15 + -0x1161) * 0x1c + (*local_60 + 0xef00) * 0x24c + 0xac00;
      puVar18 = puVar13;
      if (puVar14 == puVar24) {
        *local_60 = uVar4;
LAB_00103b11:
        lVar1 = *(long *)(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(ushort **)(param_1 + 0x18) = puVar18;
        *(ushort **)(param_1 + 0x20) = puVar18;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (int)(lVar1 - (long)puVar18 >> 1);
        return;
      }
      puVar12 = puVar14;
      if ((ushort)(*puVar14 + 0xee59) < 0x1c) {
        puVar12 = puVar14 + 1;
        uVar4 = uVar4 + *puVar14 + 0xee59;
      }
      *local_60 = uVar4;
      puVar16 = puVar12;
      if (puVar24 <= puVar12) goto LAB_00103b11;
      do {
        puVar17 = puVar16 + (ulong)bVar25 * -2 + 1;
        *puVar18 = *puVar16;
        puVar16 = puVar17;
        puVar18 = puVar18 + (ulong)bVar25 * -2 + 1;
      } while (puVar17 < puVar24);
      puVar24 = (ushort *)
                ((long)puVar14 + ((long)puVar24 + (-1 - (long)puVar12) & 0xfffffffffffffffeU));
    }
    puVar18 = puVar24;
    uVar4 = uVar11;
    if (puVar13 == puVar24) goto LAB_00103b11;
  }
  puVar12 = (ushort *)0x0;
  puVar14 = puVar13;
  goto LAB_00103930;
code_r0x00103a81:
  uVar4 = 0;
  puVar12 = (ushort *)0x0;
  if ((ushort)(uVar19 - 2) < 0xfbfe) {
LAB_00103a93:
    puVar12 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar19 >> 1) * 2);
joined_r0x00103aaa:
    if ((int)uVar15 < 0x10000) {
      local_60 = puVar14 + -1;
      bVar2 = false;
      uVar4 = 0;
    }
    else {
      local_60 = puVar14 + -2;
      bVar2 = true;
LAB_00103abe:
      uVar4 = 0;
    }
  }
  goto LAB_00103930;
}



/* icu_76_godot::Normalizer2Impl::composePair(int, int) const */

int __thiscall
icu_76_godot::Normalizer2Impl::composePair(Normalizer2Impl *this,int param_1,int param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  
  plVar2 = *(long **)(this + 0x28);
  if ((param_1 & 0xfffffc00U) == 0xd800) {
    return -1;
  }
  lVar3 = plVar2[1];
  if ((uint)param_1 < 0x10000) {
    lVar5 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU)) *
            2;
  }
  else if ((uint)param_1 < 0x110000) {
    if (param_1 < (int)plVar2[3]) {
      iVar4 = ucptrie_internalSmallIndex_76_godot();
      lVar5 = (long)iVar4 * 2;
    }
    else {
      lVar5 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
    }
  }
  else {
    lVar5 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
  }
  uVar1 = *(ushort *)(lVar3 + lVar5);
  if (uVar1 == 1) {
    return -1;
  }
  if (uVar1 < *(ushort *)(this + 0x10)) {
    if (uVar1 == 2) {
      if (param_2 < 0x1161) {
        return -1;
      }
      if (0x14 < param_2 + -0x1161) {
        return -1;
      }
      return ((param_1 + -0x1100) * 0x15 + param_2 + -0x1161) * 0x1c + 0xac00;
    }
    if (*(ushort *)(this + 0xe) == uVar1) {
      if (param_2 < 0x11a8) {
        return -1;
      }
      if (0x1b < param_2 + -0x11a7) {
        return -1;
      }
      return param_1 + param_2 + -0x11a7;
    }
    puVar6 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar1 >> 1) * 2);
    if (uVar1 <= *(ushort *)(this + 0xe)) goto LAB_00104030;
  }
  else {
    if (uVar1 < *(ushort *)(this + 0x20)) {
      return -1;
    }
    if (0xfbff < uVar1) {
      return -1;
    }
    puVar6 = (ushort *)
             (*(long *)(this + 0x30) +
             (long)((int)(((uint)uVar1 - (uint)*(ushort *)(this + 0x1e)) +
                         (uint)*(ushort *)(this + 0x1a)) >> 1) * 2);
    if (*(ushort *)(this + 0x22) <= uVar1) goto LAB_00104030;
  }
  puVar6 = puVar6 + (ulong)(*puVar6 & 0x1f) + 1;
LAB_00104030:
  if (0x10ffff < (uint)param_2) {
    return -1;
  }
  iVar4 = combine(puVar6,param_2);
  return iVar4 >> 1;
}



/* icu_76_godot::Normalizer2Impl::composeQuickCheck(char16_t const*, char16_t const*, signed char,
   UNormalizationCheckResult*) const */

ushort * __thiscall
icu_76_godot::Normalizer2Impl::composeQuickCheck
          (Normalizer2Impl *this,ushort *param_1,ushort *param_2,char param_4,undefined4 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  long *plVar13;
  ushort uVar14;
  ushort *puVar15;
  
  uVar1 = *(ushort *)(this + 10);
  puVar9 = param_1;
  puVar8 = param_1;
  if (param_2 == (ushort *)0x0) {
    do {
      puVar8 = puVar9;
      if (*puVar8 == 0) break;
      puVar9 = puVar8 + 1;
    } while ((uint)*puVar8 < (uint)uVar1);
    param_2 = (ushort *)u_strchr_76_godot(puVar8,0);
    puVar9 = puVar8;
    if (param_1 != puVar8) {
      uVar4 = puVar8[-1];
      if ((uVar4 & 0xfc00) != 0xd800) {
        uVar4 = *(ushort *)
                 ((*(long **)(this + 0x28))[1] +
                 (long)(int)((uVar4 & 0x3f) +
                            (uint)*(ushort *)
                                   (**(long **)(this + 0x28) + (long)((int)(uint)uVar4 >> 6) * 2)) *
                 2);
        if ((uVar4 & 1) != 0) {
          if ((uVar4 == 1) || (param_4 == '\0')) goto joined_r0x00104199;
          if ((uVar4 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar4)) {
            if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar4 >> 1) * 2) < 0x200)
            goto joined_r0x00104199;
          }
          else if ((uVar4 & 6) < 3) goto joined_r0x00104199;
        }
        puVar8 = puVar8 + -1;
        puVar9 = puVar8;
      }
    }
  }
joined_r0x00104199:
  do {
    if (puVar8 == param_2) {
      return param_2;
    }
    do {
      puVar6 = puVar8;
      uVar10 = (uint)*puVar6;
      puVar8 = puVar6 + 1;
      if (uVar10 < uVar1) goto joined_r0x00104199;
      plVar13 = *(long **)(this + 0x28);
      lVar3 = plVar13[1];
      uVar2 = *(ushort *)
               (lVar3 + (long)(int)((uVar10 & 0x3f) +
                                   (uint)*(ushort *)(*plVar13 + (long)((int)uVar10 >> 6) * 2)) * 2);
      uVar4 = *(ushort *)(this + 0x12);
      if (uVar2 < uVar4) goto joined_r0x00104199;
      if ((uVar10 & 0xfffffc00) != 0xd800) goto LAB_00104328;
      if (param_2 == puVar8) {
        return param_2;
      }
    } while ((puVar6[1] & 0xfc00) != 0xdc00);
    puVar8 = puVar6 + 2;
    if ((int)(puVar6[1] + 0xfca02400 + uVar10 * 0x400) < (int)plVar13[3]) {
      iVar11 = ucptrie_internalSmallIndex_76_godot();
      uVar4 = *(ushort *)(this + 0x12);
    }
    else {
      iVar11 = *(int *)((long)plVar13 + 0x14) + -2;
    }
    uVar2 = *(ushort *)(lVar3 + (long)iVar11 * 2);
  } while (uVar2 < uVar4);
LAB_00104328:
  puVar7 = puVar6;
  if ((puVar6 == puVar9) || (uVar2 < *(ushort *)(this + 0x16))) {
    uVar4 = *(ushort *)(this + 0x1e);
    uVar5 = 1;
  }
  else {
    if ((*(ushort *)(this + 0x1a) <= uVar2) && (uVar2 < *(ushort *)(this + 0x1e))) {
LAB_00104585:
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      return puVar7;
    }
    uVar4 = puVar6[-1];
    plVar13 = *(long **)(this + 0x28);
    puVar15 = puVar6 + -1;
    if ((uVar4 & 0xf800) == 0xd800) {
      if ((((uVar4 & 0x400) == 0) || (puVar9 == puVar15)) || ((puVar6[-2] & 0xfc00) != 0xd800)) {
        iVar11 = *(int *)((long)plVar13 + 0x14) + -1;
      }
      else {
        puVar15 = puVar6 + -2;
        if ((int)(uVar4 + 0xfca02400 + (uint)puVar6[-2] * 0x400) < (int)plVar13[3]) {
          iVar11 = ucptrie_internalSmallIndex_76_godot();
          plVar13 = *(long **)(this + 0x28);
        }
        else {
          iVar11 = *(int *)((long)plVar13 + 0x14) + -2;
        }
      }
    }
    else {
      iVar11 = (uint)*(ushort *)(*plVar13 + (long)((int)(uint)uVar4 >> 6) * 2) + (uVar4 & 0x3f);
    }
    uVar14 = *(ushort *)(plVar13[1] + (long)iVar11 * 2);
    uVar4 = *(ushort *)(this + 0x1e);
    uVar12 = uVar14 & 1;
    puVar7 = puVar15;
    uVar5 = uVar14;
    if (((uVar12 != 0) && (puVar7 = puVar6, uVar5 = uVar12, param_4 != '\0')) && (uVar14 != 1)) {
      if ((uVar14 < *(ushort *)(this + 0x1a)) || (uVar4 <= uVar14)) {
        puVar7 = puVar15;
        uVar5 = uVar14;
        if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar14 >> 1) * 2) < 0x200) {
          puVar7 = puVar6;
          uVar5 = uVar12;
        }
      }
      else {
        puVar7 = puVar15;
        uVar5 = uVar14;
        if ((uVar14 & 6) < 3) {
          puVar7 = puVar6;
          uVar5 = uVar12;
        }
      }
    }
  }
  if (uVar4 <= uVar2) {
    if (uVar2 < 0xfc00) {
      uVar14 = 0;
      if (uVar2 < *(ushort *)(this + 0x22)) {
        uVar14 = (ushort)*(byte *)(*(long *)(this + 0x30) + 1 +
                                  (long)((int)(((uint)uVar2 - (uint)uVar4) +
                                              (uint)*(ushort *)(this + 0x1a)) >> 1) * 2);
      }
    }
    else {
      uVar12 = uVar2 >> 1;
      uVar14 = (uVar12 & 0xff) + uVar12 * 0x100;
      if ((((param_4 != '\0') && ((ushort)(uVar12 * 0x100) != 0)) &&
          (*(ushort *)(this + 0xe) < uVar5)) &&
         ((byte)uVar12 < *(byte *)(*(long *)(this + 0x30) + 1 + (ulong)(uVar5 >> 1) * 2)))
      goto LAB_00104585;
    }
    puVar9 = puVar8;
    uVar5 = uVar14;
    if (uVar2 < 0xfe02) goto LAB_001044e9;
LAB_0010445d:
    puVar9 = puVar8;
    uVar5 = uVar14;
    if (param_2 == puVar8) {
      return param_2;
    }
    do {
      uVar2 = *puVar9;
      plVar13 = *(long **)(this + 0x28);
      puVar8 = puVar9 + 1;
      if ((uVar2 & 0xf800) == 0xd800) {
        if ((((uVar2 & 0x400) == 0) && (puVar8 != param_2)) && ((puVar9[1] & 0xfc00) == 0xdc00)) {
          puVar8 = puVar9 + 2;
          iVar11 = puVar9[1] + 0xfca02400 + (uint)uVar2 * 0x400;
          if (iVar11 < (int)plVar13[3]) {
            iVar11 = ucptrie_internalSmallIndex_76_godot(plVar13,iVar11);
            plVar13 = *(long **)(this + 0x28);
            uVar4 = *(ushort *)(this + 0x1e);
          }
          else {
            iVar11 = *(int *)((long)plVar13 + 0x14) + -2;
          }
        }
        else {
          iVar11 = *(int *)((long)plVar13 + 0x14) + -1;
        }
      }
      else {
        iVar11 = (uint)*(ushort *)(*plVar13 + (long)((int)(uint)uVar2 >> 6) * 2) + (uVar2 & 0x3f);
      }
      uVar2 = *(ushort *)(plVar13[1] + (long)iVar11 * 2);
      if (uVar2 < uVar4) {
LAB_0010457a:
        if (*(ushort *)(this + 0x12) <= uVar2) break;
        goto joined_r0x00104199;
      }
      if (uVar2 < 0xfc00) {
        puVar9 = puVar8;
        uVar5 = 0;
        if (uVar2 < *(ushort *)(this + 0x22)) {
          uVar5 = (ushort)*(byte *)(*(long *)(this + 0x30) + 1 +
                                   (long)((int)(((uint)uVar2 - (uint)uVar4) +
                                               (uint)*(ushort *)(this + 0x1a)) >> 1) * 2);
        }
      }
      else {
        uVar12 = uVar2 >> 1;
        uVar14 = (uVar12 & 0xff) + uVar12 * 0x100;
        if (((ushort)(uVar12 * 0x100) != 0) && ((byte)uVar12 < (byte)uVar5)) goto LAB_0010457a;
        puVar9 = puVar8;
        uVar5 = uVar14;
        if (0xfe01 < uVar2) goto LAB_0010445d;
      }
LAB_001044e9:
      if (param_5 == (undefined4 *)0x0) {
        return puVar7;
      }
      *param_5 = 2;
      if (param_2 == puVar9) {
        return param_2;
      }
    } while( true );
  }
  goto LAB_00104585;
}



/* icu_76_godot::Normalizer2Impl::hasCompBoundaryBefore(char16_t const*, char16_t const*) const */

bool __thiscall
icu_76_godot::Normalizer2Impl::hasCompBoundaryBefore
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  
  if (param_1 == param_2) {
    return true;
  }
  wVar1 = *param_1;
  if ((ushort)*(wchar16 *)(this + 10) <= (ushort)wVar1) {
    plVar4 = *(long **)(this + 0x28);
    if (((ushort)wVar1 & 0xf800) == 0xd800) {
      if (((param_2 == param_1 + 1) || ((wVar1 & 0x400U) != 0)) ||
         ((param_1[1] & 0xfc00U) != 0xdc00)) {
        iVar3 = *(int *)((long)plVar4 + 0x14) + -1;
      }
      else if ((int)((ushort)param_1[1] + 0xfca02400 + (uint)(ushort)wVar1 * 0x400) < (int)plVar4[3]
              ) {
        iVar3 = ucptrie_internalSmallIndex_76_godot();
        plVar4 = *(long **)(this + 0x28);
      }
      else {
        iVar3 = *(int *)((long)plVar4 + 0x14) + -2;
      }
    }
    else {
      iVar3 = (uint)*(ushort *)(*plVar4 + (long)((int)(uint)(ushort)wVar1 >> 6) * 2) +
              ((ushort)wVar1 & 0x3f);
    }
    uVar2 = *(ushort *)(plVar4[1] + (long)iVar3 * 2);
    bVar5 = true;
    if ((*(ushort *)(this + 0x16) <= uVar2) && (bVar5 = false, *(ushort *)(this + 0x1a) <= uVar2)) {
      bVar5 = uVar2 < *(ushort *)(this + 0x1e);
    }
    return bVar5;
  }
  return true;
}



/* icu_76_godot::Normalizer2Impl::hasCompBoundaryBefore(unsigned char const*, unsigned char const*)
   const */

bool __thiscall
icu_76_godot::Normalizer2Impl::hasCompBoundaryBefore
          (Normalizer2Impl *this,uchar *param_1,uchar *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  
  if (param_1 == param_2) {
    return true;
  }
  bVar1 = *param_1;
  uVar4 = (uint)bVar1;
  plVar5 = *(long **)(this + 0x28);
  uVar3 = (uint)bVar1;
  if (-1 < (char)bVar1) goto LAB_00104804;
  if (param_2 != param_1 + 1) {
    uVar4 = (uint)bVar1;
    if (uVar3 < 0xe0) {
      if ((0xc1 < uVar4) && ((byte)(param_1[1] + 0x80) < 0x40)) {
        uVar4 = (uint)*(ushort *)(*plVar5 + (ulong)(uVar3 & 0x1f) * 2) +
                (uint)(byte)(param_1[1] + 0x80);
        goto LAB_00104804;
      }
    }
    else if (uVar4 < 0xf0) {
      if (((((uint)(int)(char)(&_LC1)[uVar3 & 0xf] >> (param_1[1] >> 5) & 1) != 0) &&
          (param_2 != param_1 + 2)) && ((byte)(param_1[2] + 0x80) < 0x40)) {
        uVar4 = (uint)*(ushort *)
                       (*plVar5 + (long)(int)((param_1[1] & 0x3f) + (uVar4 & 0xf) * 0x40) * 2) +
                (uint)(byte)(param_1[2] + 0x80);
        goto LAB_00104804;
      }
    }
    else {
      uVar4 = uVar4 - 0xf0;
      if ((((((int)uVar4 < 5) &&
            (((uint)(int)(char)(&DAT_00108ec8)[param_1[1] >> 4] >> (uVar4 & 0x1f) & 1) != 0)) &&
           (param_2 != param_1 + 2)) &&
          (((byte)(param_1[2] + 0x80) < 0x40 && (param_2 != param_1 + 3)))) &&
         ((byte)(param_1[3] + 0x80) < 0x40)) {
        uVar4 = param_1[1] & 0x3f | uVar4 * 0x40;
        if ((int)uVar4 < (int)(uint)*(ushort *)((long)plVar5 + 0x1c)) {
          uVar4 = ucptrie_internalSmallU8Index_76_godot
                            (plVar5,uVar4,param_1[2] + 0x80,param_1[3] + 0x80);
          plVar5 = *(long **)(this + 0x28);
        }
        else {
          uVar4 = *(int *)((long)plVar5 + 0x14) - 2;
        }
        goto LAB_00104804;
      }
    }
  }
  uVar4 = *(int *)((long)plVar5 + 0x14) - 1;
LAB_00104804:
  uVar2 = *(ushort *)(plVar5[1] + (long)(int)uVar4 * 2);
  bVar6 = true;
  if ((*(ushort *)(this + 0x16) <= uVar2) && (bVar6 = false, *(ushort *)(this + 0x1a) <= uVar2)) {
    bVar6 = uVar2 < *(ushort *)(this + 0x1e);
  }
  return bVar6;
}



/* icu_76_godot::Normalizer2Impl::hasCompBoundaryAfter(char16_t const*, char16_t const*, signed
   char) const */

ulong __thiscall
icu_76_godot::Normalizer2Impl::hasCompBoundaryAfter
          (Normalizer2Impl *this,long param_1,long param_2,char param_4)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  uVar1 = *(ushort *)(param_2 + -2);
  plVar4 = *(long **)(this + 0x28);
  if ((uVar1 & 0xf800) == 0xd800) {
    if ((param_1 != param_2 + -2) && ((uVar1 & 0x400) != 0)) {
      if ((*(ushort *)(param_2 + -4) & 0xfc00) == 0xd800) {
        if ((int)(uVar1 + 0xfca02400 + (uint)*(ushort *)(param_2 + -4) * 0x400) < (int)plVar4[3]) {
          iVar2 = ucptrie_internalSmallIndex_76_godot();
          plVar4 = *(long **)(this + 0x28);
        }
        else {
          iVar2 = *(int *)((long)plVar4 + 0x14) + -2;
        }
        goto LAB_001049d6;
      }
    }
    iVar2 = *(int *)((long)plVar4 + 0x14) + -1;
  }
  else {
    iVar2 = (uint)*(ushort *)(*plVar4 + (long)((int)(uint)uVar1 >> 6) * 2) + (uVar1 & 0x3f);
  }
LAB_001049d6:
  uVar1 = *(ushort *)(plVar4[1] + (long)iVar2 * 2);
  uVar3 = 0;
  if ((((uVar1 & 1) != 0) && (uVar3 = 1, param_4 != '\0')) && (uVar1 != 1)) {
    if ((uVar1 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar1)) {
      return CONCAT71((int7)((ulong)*(long *)(this + 0x30) >> 8),
                      *(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar1 >> 1) * 2) < 0x200) &
             0xffffffff;
    }
    uVar3 = (ulong)((uVar1 & 6) < 3);
  }
  return uVar3;
}



/* icu_76_godot::Normalizer2Impl::hasCompBoundaryAfter(unsigned char const*, unsigned char const*,
   signed char) const */

ulong __thiscall
icu_76_godot::Normalizer2Impl::hasCompBoundaryAfter
          (Normalizer2Impl *this,long param_1,long param_2,char param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return 1;
  }
  bVar1 = *(byte *)(param_2 + -1);
  uVar4 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    iVar3 = ucptrie_internalU8PrevIndex_76_godot
                      (*(undefined8 *)(this + 0x28),bVar1,param_1,param_2 + -1);
    uVar4 = iVar3 >> 3;
  }
  uVar2 = *(ushort *)(*(long *)(*(long *)(this + 0x28) + 8) + (long)(int)uVar4 * 2);
  uVar5 = 0;
  if ((((uVar2 & 1) != 0) && (uVar5 = 1, param_4 != '\0')) && (uVar2 != 1)) {
    if ((uVar2 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar2)) {
      return CONCAT71((int7)((ulong)*(long *)(this + 0x30) >> 8),
                      *(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar2 >> 1) * 2) < 0x200) &
             0xffffffff;
    }
    uVar5 = (ulong)((uVar2 & 6) < 3);
  }
  return uVar5;
}



/* icu_76_godot::Normalizer2Impl::findPreviousCompBoundary(char16_t const*, char16_t const*, signed
   char) const */

long __thiscall
icu_76_godot::Normalizer2Impl::findPreviousCompBoundary
          (Normalizer2Impl *this,long param_1,long param_2,char param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  if (param_2 != param_1) {
    plVar4 = *(long **)(this + 0x28);
    do {
      uVar1 = *(ushort *)(param_2 + -2);
      uVar5 = (uint)uVar1;
      lVar3 = param_2 + -2;
      if ((uVar5 & 0xf800) == 0xd800) {
        if ((((uVar1 & 0x400) == 0) || (param_1 == lVar3)) ||
           ((*(ushort *)(param_2 + -4) & 0xfffffc00) != 0xd800)) {
          iVar2 = *(int *)((long)plVar4 + 0x14) + -1;
        }
        else {
          lVar3 = param_2 + -4;
          uVar5 = uVar5 + 0xfca02400 + (uint)*(ushort *)(param_2 + -4) * 0x400;
          if ((int)uVar5 < (int)plVar4[3]) {
            iVar2 = ucptrie_internalSmallIndex_76_godot(plVar4,uVar5);
            plVar4 = *(long **)(this + 0x28);
          }
          else {
            iVar2 = *(int *)((long)plVar4 + 0x14) + -2;
          }
        }
      }
      else {
        iVar2 = (uint)*(ushort *)(*plVar4 + (long)((int)uVar5 >> 6) * 2) + (uVar1 & 0x3f);
      }
      uVar1 = *(ushort *)(plVar4[1] + (long)iVar2 * 2);
      if ((uVar1 & 1) != 0) {
        if (param_4 == '\0') {
          return param_2;
        }
        if (uVar1 == 1) {
          return param_2;
        }
        if ((uVar1 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar1)) {
          if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar1 >> 1) * 2) < 0x200) {
            return param_2;
          }
        }
        else if ((uVar1 & 6) < 3) {
          return param_2;
        }
      }
      if ((((int)uVar5 < (int)(uint)*(ushort *)(this + 10)) || (uVar1 < *(ushort *)(this + 0x16)))
         || ((*(ushort *)(this + 0x1a) <= uVar1 && (uVar1 < *(ushort *)(this + 0x1e))))) {
        return lVar3;
      }
      param_2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_1;
}



/* icu_76_godot::Normalizer2Impl::findNextCompBoundary(char16_t const*, char16_t const*, signed
   char) const */

ushort * __thiscall
icu_76_godot::Normalizer2Impl::findNextCompBoundary
          (Normalizer2Impl *this,ushort *param_1,ushort *param_2,char param_4)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  ushort *puVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  plVar3 = *(long **)(this + 0x28);
  do {
    uVar1 = *param_1;
    puVar4 = param_1 + 1;
    if ((uVar1 & 0xf800) == 0xd800) {
      if ((((uVar1 & 0x400) != 0) || (param_2 == puVar4)) || ((param_1[1] & 0xfc00) != 0xdc00)) {
        iVar2 = *(int *)((long)plVar3 + 0x14) + -1;
        goto LAB_00104d2e;
      }
      puVar4 = param_1 + 2;
      if ((int)(param_1[1] + 0xfca02400 + (uint)uVar1 * 0x400) < (int)plVar3[3]) {
        iVar2 = ucptrie_internalSmallIndex_76_godot();
        plVar3 = *(long **)(this + 0x28);
      }
      else {
        iVar2 = *(int *)((long)plVar3 + 0x14) + -2;
      }
    }
    else {
      iVar2 = (uVar1 & 0x3f) + (uint)*(ushort *)(*plVar3 + (long)((int)(uint)uVar1 >> 6) * 2);
LAB_00104d2e:
      if ((uint)uVar1 < (uint)*(ushort *)(this + 10)) {
        return param_1;
      }
    }
    uVar1 = *(ushort *)(plVar3[1] + (long)iVar2 * 2);
    if (uVar1 < *(ushort *)(this + 0x16)) {
      return param_1;
    }
    if ((*(ushort *)(this + 0x1a) <= uVar1) && (uVar1 < *(ushort *)(this + 0x1e))) {
      return param_1;
    }
    if ((uVar1 & 1) != 0) {
      if (uVar1 == 1) {
        return puVar4;
      }
      if (param_4 == '\0') {
        return puVar4;
      }
      if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar1 >> 1) * 2) < 0x200) {
        return puVar4;
      }
    }
    param_1 = puVar4;
    if (param_2 == puVar4) {
      return puVar4;
    }
  } while( true );
}



/* icu_76_godot::Normalizer2Impl::getFCD16FromNormData(int) const */

uint __thiscall
icu_76_godot::Normalizer2Impl::getFCD16FromNormData(Normalizer2Impl *this,int param_1)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  
  plVar2 = *(long **)(this + 0x28);
  if ((param_1 & 0xfffffc00U) == 0xd800) {
    uVar7 = 1;
    if (1 < *(ushort *)(this + 0x1a)) goto LAB_00104ea8;
  }
  else {
    lVar3 = plVar2[1];
    if ((uint)param_1 < 0x10000) {
      lVar6 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
LAB_00104e4b:
      uVar7 = *(ushort *)(lVar3 + lVar6);
      if (uVar7 < *(ushort *)(this + 0x1a)) goto LAB_00104ea8;
    }
    else {
      if (0x10ffff < (uint)param_1) {
        lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
        goto LAB_00104e4b;
      }
      if (param_1 < (int)plVar2[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
        goto LAB_00104e4b;
      }
      uVar7 = *(ushort *)(lVar3 + (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2);
      if (uVar7 < *(ushort *)(this + 0x1a)) goto LAB_00104ea8;
    }
    if (0xfbff < uVar7) {
      return (uVar7 >> 1 & 0xff) + (uint)(uVar7 >> 1) * 0x100;
    }
  }
  if (*(ushort *)(this + 0x22) <= uVar7) {
    return 0;
  }
  if (uVar7 < *(ushort *)(this + 0x1e)) {
    if ((uVar7 & 6) < 3) {
      return (uint)((uVar7 & 6) >> 1);
    }
    plVar2 = *(long **)(this + 0x28);
    lVar3 = plVar2[1];
    uVar8 = (param_1 + (uint)(uVar7 >> 3)) - (uint)*(ushort *)(this + 0x1c);
    if (uVar8 < 0x10000) {
      lVar6 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)((int)uVar8 >> 6) * 2) + (uVar8 & 0x3f))
              * 2;
    }
    else if (uVar8 < 0x110000) {
      if ((int)uVar8 < (int)plVar2[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
    }
    uVar7 = *(ushort *)(lVar3 + lVar6);
  }
LAB_00104ea8:
  if ((uVar7 <= *(ushort *)(this + 0xe)) || (uVar7 == (*(ushort *)(this + 0x10) | 1))) {
    return 0;
  }
  if (*(ushort *)(this + 0x1e) <= uVar7) {
    uVar7 = (uVar7 + *(short *)(this + 0x1a)) - *(ushort *)(this + 0x1e);
  }
  puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar7 >> 1) * 2);
  uVar7 = *puVar1;
  uVar4 = uVar7 >> 8;
  if ((uVar7 & 0x80) == 0) {
    return (uint)uVar4;
  }
  return (uint)uVar4 | (uint)(byte)(puVar1[-1] >> 8) << 8;
}



/* icu_76_godot::Normalizer2Impl::getPreviousTrailCC(unsigned char const*, unsigned char const*)
   const */

undefined8 __thiscall
icu_76_godot::Normalizer2Impl::getPreviousTrailCC
          (Normalizer2Impl *this,uchar *param_1,uchar *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    local_14 = ((int)param_2 - (int)param_1) + -1;
    bVar1 = param_1[local_14];
    uVar2 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar2 = utf8_prevCharSafeBody_76_godot(param_1,0,&local_14,(ushort)bVar1,0xffffffff);
      if ((int)(uint)*(ushort *)(this + 8) <= (int)uVar2) {
        if ((int)uVar2 < 0x10000) goto LAB_00105042;
LAB_00105064:
        uVar3 = getFCD16FromNormData(this,uVar2);
        goto LAB_00105092;
      }
    }
    else if (*(ushort *)(this + 8) <= (ushort)bVar1) {
LAB_00105042:
      bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)((int)uVar2 >> 8));
      if ((bVar1 != 0) && ((bVar1 >> (uVar2 >> 5 & 7) & 1) != 0)) goto LAB_00105064;
    }
  }
  uVar3 = 0;
LAB_00105092:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* icu_76_godot::Normalizer2Impl::composeUTF8(unsigned int, signed char, unsigned char const*,
   unsigned char const*, icu_76_godot::ByteSink*, icu_76_godot::Edits*, UErrorCode&) const */

undefined4 __thiscall
icu_76_godot::Normalizer2Impl::composeUTF8
          (Normalizer2Impl *this,uint param_1,char param_3,byte *param_4,byte *param_5,
          ByteSink *param_6,Edits *param_7,UErrorCode *param_8)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  ushort uVar23;
  byte *pbVar24;
  wchar16 *pwVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  byte *local_e0;
  Normalizer2Impl *local_c8;
  UnicodeString *local_c0;
  wchar16 *local_b8;
  wchar16 *pwStack_b0;
  wchar16 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  code *local_88;
  ushort local_80;
  undefined4 local_78;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_88 = icu_76_godot::ByteSinkUtil::appendUnchanged;
  uVar19 = (uint)*(ushort *)(this + 10);
  if ((0x7f < uVar19) && (uVar19 = ((int)uVar19 >> 6) - 0x40, 0x7ff < *(ushort *)(this + 10))) {
    uVar19 = 0xffffffe0;
  }
  pbVar26 = param_4;
joined_r0x00105173:
  do {
    do {
      pbVar11 = param_4;
      if (pbVar11 == param_5) {
        if ((pbVar26 != param_5) && (param_6 != (ByteSink *)0x0)) {
          icu_76_godot::ByteSinkUtil::appendUnchanged
                    (pbVar26,param_5,param_6,param_1,param_7,param_8);
        }
        goto LAB_001051e0;
      }
      bVar18 = *pbVar11;
      pbVar24 = pbVar11 + 1;
      param_4 = pbVar24;
    } while (bVar18 < (byte)uVar19);
    plVar17 = *(long **)(this + 0x28);
    uVar10 = (uint)bVar18;
    if ((char)bVar18 < '\0') {
      if (param_5 != pbVar24) {
        uVar10 = (uint)bVar18;
        if (bVar18 < 0xe0) {
          if ((0xc1 < bVar18) && ((byte)(pbVar11[1] + 0x80) < 0x40)) {
            uVar10 = (uint)*(ushort *)(*plVar17 + (ulong)(uVar10 & 0x1f) * 2) +
                     (uint)(byte)(pbVar11[1] + 0x80);
            goto LAB_0010534f;
          }
        }
        else if (bVar18 < 0xf0) {
          if (((((uint)(int)(char)(&_LC1)[uVar10 & 0xf] >> (pbVar11[1] >> 5) & 1) != 0) &&
              (param_4 = pbVar11 + 2, param_5 != param_4)) && ((byte)(pbVar11[2] + 0x80) < 0x40)) {
            uVar10 = (uint)*(ushort *)
                            (*plVar17 + (long)(int)((pbVar11[1] & 0x3f) + (uVar10 & 0xf) * 0x40) * 2
                            ) + (uint)(byte)(pbVar11[2] + 0x80);
LAB_0010534f:
            param_4 = param_4 + 1;
            goto LAB_00105197;
          }
        }
        else {
          uVar10 = bVar18 - 0xf0;
          if (((((int)uVar10 < 5) &&
               (((uint)(int)(char)(&DAT_00108ec8)[pbVar11[1] >> 4] >> (uVar10 & 0x1f) & 1) != 0)) &&
              (param_4 = pbVar11 + 2, param_5 != param_4)) &&
             ((((byte)(pbVar11[2] + 0x80) < 0x40 && (param_4 = pbVar11 + 3, param_5 != param_4)) &&
              ((byte)(pbVar11[3] + 0x80) < 0x40)))) {
            uVar10 = pbVar11[1] & 0x3f | uVar10 * 0x40;
            if ((int)uVar10 < (int)(uint)*(ushort *)((long)plVar17 + 0x1c)) {
              uVar10 = ucptrie_internalSmallU8Index_76_godot
                                 (plVar17,uVar10,pbVar11[2] + 0x80,pbVar11[3] + 0x80);
              uVar19 = uVar19 & 0xff;
              plVar17 = *(long **)(this + 0x28);
            }
            else {
              uVar10 = *(int *)((long)plVar17 + 0x14) - 2;
            }
            goto LAB_0010534f;
          }
        }
      }
      uVar10 = *(int *)((long)plVar17 + 0x14) - 1;
    }
LAB_00105197:
    bVar18 = (byte)uVar19;
    uVar3 = *(ushort *)(plVar17[1] + (long)(int)uVar10 * 2);
  } while (uVar3 < *(ushort *)(this + 0x12));
  iVar21 = (int)param_4;
  if (uVar3 < *(ushort *)(this + 0x1e)) goto code_r0x0010536b;
  if (uVar3 == 0xfe00) {
    if ((((2 < (long)pbVar11 - (long)pbVar26) && (bVar6 = pbVar11[-3], (byte)(bVar6 + 0x1f) < 0xd))
        && (bVar22 = pbVar11[-2] + 0x80, bVar22 < 0x40)) &&
       ((bVar12 = pbVar11[-1] + 0x80, bVar12 < 0x40 && ((bVar6 < 0xed || (bVar22 < 0x20)))))) {
      bVar2 = pbVar11[1];
      uVar10 = (bVar6 & 0xf) << 0xc | (uint)bVar22 << 6 | (uint)bVar12;
      if (bVar2 == 0x85) {
        if (uVar10 - 0x1100 < 0x13) {
          if (param_6 == (ByteSink *)0x0) goto LAB_00105672;
          if (((long)param_5 - (long)param_4 < 3) || (*param_4 != 0xe1)) {
LAB_0010602b:
            cVar5 = hasCompBoundaryBefore(this,param_4,param_5);
            uVar19 = uVar19 & 0xff;
            if (cVar5 == '\0') goto LAB_001053c0;
            iVar21 = 0;
          }
          else {
            if (param_4[1] == 0x86) {
              if ((byte)(param_4[2] + 0x58) < 0x18) {
                iVar21 = param_4[2] - 0xa7;
                goto LAB_00105ddc;
              }
              goto LAB_0010602b;
            }
            if ((param_4[1] != 0x87) || (-0x7e < (char)param_4[2])) goto LAB_0010602b;
            iVar21 = param_4[2] - 0x67;
LAB_00105ddc:
            param_4 = param_4 + 3;
          }
          bVar18 = pbVar11[2];
          pbVar11 = pbVar11 + -3;
          if ((pbVar26 != pbVar11) &&
             (cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                                (pbVar26,pbVar11,param_6,param_1,param_7,param_8), cVar5 == '\0'))
          goto LAB_001051e0;
          icu_76_godot::ByteSinkUtil::appendCodePoint
                    ((int)param_4 - (int)pbVar11,
                     iVar21 + 0xac00 + ((uVar10 - 0x1100) * 0x15 + -0xa1 + (uint)bVar18) * 0x1c,
                     param_6,param_7);
          uVar19 = uVar19 & 0xff;
          pbVar26 = param_4;
          goto joined_r0x00105173;
        }
      }
      else if ((uVar10 - 0xac00 < 0x2ba4) &&
              (((uVar10 - 0xac00) * -0x49249249 + 0x12492490 >> 2 | (uint)bVar12 * -0x40000000) <
               0x9249249)) {
        if (param_6 == (ByteSink *)0x0) goto LAB_00105672;
        if (((long)param_4 - (long)pbVar11 < 3) || (*pbVar11 != 0xe1)) {
LAB_001060ba:
          iVar20 = -1;
        }
        else if (bVar2 == 0x86) {
          iVar20 = pbVar11[2] - 0xa7;
          if (0x17 < (byte)(pbVar11[2] + 0x58)) {
            iVar20 = -1;
          }
        }
        else {
          if (bVar2 != 0x87) goto LAB_001060ba;
          iVar20 = pbVar11[2] - 0x67;
          if (-0x7e < (char)pbVar11[2]) {
            iVar20 = -1;
          }
        }
        pbVar11 = pbVar11 + -3;
        if ((pbVar26 != pbVar11) &&
           (cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                              (pbVar26,pbVar11,param_6,param_1,param_7,param_8), cVar5 == '\0'))
        goto LAB_001051e0;
        icu_76_godot::ByteSinkUtil::appendCodePoint
                  (iVar21 - (int)pbVar11,uVar10 + iVar20,param_6,param_7);
        uVar19 = uVar19 & 0xff;
        pbVar26 = param_4;
        goto joined_r0x00105173;
      }
    }
  }
  else if (0xfe00 < uVar3) {
    uVar23 = uVar3 >> 1;
    pbVar24 = param_4;
    if (param_3 != '\0') {
      bVar22 = (byte)uVar23;
      bVar6 = getPreviousTrailCC(this,pbVar26,pbVar11);
      uVar23 = uVar23 & 0xff;
      uVar19 = uVar19 & 0xff;
      if (bVar22 < bVar6) {
        if (param_6 == (ByteSink *)0x0) goto LAB_00105672;
        goto LAB_001053c0;
      }
    }
    do {
      param_4 = pbVar24;
      if (param_4 == param_5) {
        if (param_6 != (ByteSink *)0x0) {
          icu_76_godot::ByteSinkUtil::appendUnchanged
                    (pbVar26,param_4,param_6,param_1,param_7,param_8);
        }
        goto LAB_001051e0;
      }
      uVar10 = (uint)*param_4;
      plVar17 = *(long **)(this + 0x28);
      pbVar24 = param_4 + 1;
      if ((char)*param_4 < '\0') {
        if (param_5 != pbVar24) {
          if (uVar10 < 0xe0) {
            if ((0xc1 < uVar10) && ((byte)(param_4[1] + 0x80) < 0x40)) {
              uVar10 = (uint)*(ushort *)(*plVar17 + (ulong)(uVar10 & 0x1f) * 2) +
                       (uint)(byte)(param_4[1] + 0x80);
              goto LAB_00105724;
            }
          }
          else if (uVar10 < 0xf0) {
            if (((((uint)(int)(char)(&_LC1)[uVar10 & 0xf] >> (param_4[1] >> 5) & 1) != 0) &&
                (pbVar24 = param_4 + 2, param_5 != pbVar24)) && ((byte)(param_4[2] + 0x80) < 0x40))
            {
              uVar10 = (uint)(byte)(param_4[2] + 0x80) +
                       (uint)*(ushort *)
                              (*plVar17 +
                              (long)(int)((uVar10 & 0xf) * 0x40 + (param_4[1] & 0x3f)) * 2);
              goto LAB_00105724;
            }
          }
          else {
            uVar10 = uVar10 - 0xf0;
            if ((((((int)uVar10 < 5) &&
                  (((uint)(int)(char)(&DAT_00108ec8)[param_4[1] >> 4] >> (uVar10 & 0x1f) & 1) != 0))
                 && (pbVar24 = param_4 + 2, param_5 != pbVar24)) &&
                (((byte)(param_4[2] + 0x80) < 0x40 && (pbVar24 = param_4 + 3, param_5 != pbVar24))))
               && ((byte)(param_4[3] + 0x80) < 0x40)) {
              uVar10 = param_4[1] & 0x3f | uVar10 * 0x40;
              if ((int)uVar10 < (int)(uint)*(ushort *)((long)plVar17 + 0x1c)) {
                uVar10 = ucptrie_internalSmallU8Index_76_godot
                                   (plVar17,uVar10,param_4[2] + 0x80,param_4[3] + 0x80);
                uVar19 = uVar19 & 0xff;
                plVar17 = *(long **)(this + 0x28);
              }
              else {
                uVar10 = *(int *)((long)plVar17 + 0x14) - 2;
              }
LAB_00105724:
              pbVar24 = pbVar24 + 1;
              goto LAB_00105728;
            }
          }
        }
        uVar10 = *(int *)((long)plVar17 + 0x14) - 1;
      }
LAB_00105728:
      bVar6 = (byte)uVar23;
      bVar18 = (byte)uVar19;
      uVar4 = *(ushort *)(plVar17[1] + (long)(int)uVar10 * 2);
      if (uVar4 < 0xfe02) goto LAB_00105d50;
      uVar23 = uVar4 >> 1;
    } while (bVar6 <= (byte)uVar23);
    if (param_6 == (ByteSink *)0x0) {
LAB_00105672:
      uVar7 = 0;
      goto LAB_001051e6;
    }
LAB_00105d50:
    if ((uVar4 < *(ushort *)(this + 0x16)) ||
       ((*(ushort *)(this + 0x1a) <= uVar4 && (uVar4 < *(ushort *)(this + 0x1e))))) {
      if (uVar4 < *(ushort *)(this + 0x12)) {
        param_4 = pbVar24;
      }
      goto joined_r0x00105173;
    }
  }
LAB_001053c0:
  local_e0 = pbVar26;
  if (pbVar11 != pbVar26) {
    if ((uVar3 < *(ushort *)(this + 0x16)) ||
       ((*(ushort *)(this + 0x1a) <= uVar3 && (uVar3 < *(ushort *)(this + 0x1e))))) {
LAB_001053d5:
      local_e0 = pbVar11;
    }
    else {
      bVar6 = pbVar11[-1];
      uVar19 = (uint)bVar6;
      local_e0 = pbVar11 + -1;
      if ((char)bVar6 < '\0') {
        uVar19 = ucptrie_internalU8PrevIndex_76_godot
                           (*(undefined8 *)(this + 0x28),bVar6,pbVar26,local_e0);
        local_e0 = local_e0 + -(ulong)(uVar19 & 7);
        uVar19 = (int)uVar19 >> 3;
      }
      uVar3 = *(ushort *)(*(long *)(*(long *)(this + 0x28) + 8) + (long)(int)uVar19 * 2);
      if ((uVar3 & 1) != 0) {
        if ((uVar3 == 1) || (param_3 == '\0')) goto LAB_001053d5;
        if ((uVar3 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar3)) {
          if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2) < 0x200)
          goto LAB_001053d5;
        }
        else if ((uVar3 & 6) < 3) goto LAB_001053d5;
      }
    }
  }
  local_c8 = this;
  local_c0 = (UnicodeString *)&local_88;
  local_b8 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer((int)(UnicodeString *)&local_88);
  local_a0 = 0x1b;
  if ((local_80 & 2) == 0) {
    local_a0 = local_78;
  }
  local_9c = 0;
  pwStack_b0 = local_b8;
  local_a8 = local_b8;
  if (local_b8 == (wchar16 *)0x0) {
    if (*(int *)param_8 < 1) {
      *(undefined4 *)param_8 = 7;
    }
    goto LAB_001051e0;
  }
  if (*(int *)param_8 < 1) {
    decomposeShort(this,local_e0,param_4,0,(int)param_3,(ReorderingBuffer *)&local_c8,param_8);
    param_4 = (byte *)decomposeShort(this,param_4,param_5,2,(int)param_3,
                                     (ReorderingBuffer *)&local_c8,param_8);
    pwVar25 = local_b8;
    if (*(int *)param_8 < 1) {
      if (0x7fffffff < (long)param_4 - (long)local_e0) {
        uVar7 = 1;
        *(undefined4 *)param_8 = 8;
LAB_00105fe5:
        if (local_b8 != (wchar16 *)0x0) {
          icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
        }
        goto LAB_001051e6;
      }
      recompose(this,(ReorderingBuffer *)&local_c8,0);
      uVar7 = ReorderingBuffer::equals((ReorderingBuffer *)&local_c8,local_e0,param_4);
      pwVar25 = local_b8;
      if ((char)uVar7 == '\0') {
        if (param_6 == (ByteSink *)0x0) goto LAB_00105fe5;
        if (((pbVar26 != local_e0) &&
            (cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                               (pbVar26,local_e0,param_6,param_1,param_7,param_8),
            pwVar25 = local_b8, cVar5 == '\0')) ||
           (pwVar25 = local_b8,
           cVar5 = icu_76_godot::ByteSinkUtil::appendChange
                             (local_e0,param_4,local_b8,(int)((long)local_a8 - (long)local_b8 >> 1),
                              param_6,param_7,param_8), pbVar26 = param_4, cVar5 == '\0'))
        goto LAB_00105ed0;
      }
      uVar19 = (uint)bVar18;
      if (pwVar25 != (wchar16 *)0x0) {
        icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
        uVar19 = (uint)bVar18;
      }
      goto joined_r0x00105173;
    }
LAB_00105ed0:
    if (pwVar25 == (wchar16 *)0x0) goto LAB_001051e0;
  }
  icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
  goto LAB_001051e0;
code_r0x0010536b:
  if (param_6 == (ByteSink *)0x0) goto LAB_00105672;
  iVar20 = (int)pbVar11;
  if (uVar3 < *(ushort *)(this + 0x1a)) {
    if (uVar3 < *(ushort *)(this + 0x14)) {
      if (((uVar3 & 1) == 0) ||
         (((param_3 != '\0' && (uVar3 != 1)) &&
          (0x1ff < *(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2))))) {
        cVar5 = hasCompBoundaryBefore(this,param_4,param_5);
        uVar19 = uVar19 & 0xff;
        if (cVar5 == '\0') goto LAB_001053c0;
      }
      if ((pbVar11 != pbVar26) &&
         (cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                            (pbVar26,pbVar11,param_6,param_1,param_7,param_8), cVar5 == '\0'))
      goto LAB_001051e0;
      puVar1 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2);
      cVar5 = icu_76_godot::ByteSinkUtil::appendChange
                        (pbVar11,param_4,(wchar16 *)(puVar1 + 1),*puVar1 & 0x1f,param_6,param_7,
                         param_8);
      uVar19 = uVar19 & 0xff;
      pbVar26 = param_4;
      if (cVar5 == '\0') {
LAB_001051e0:
        uVar7 = 1;
LAB_001051e6:
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      if ((uVar3 < *(ushort *)(this + 0x18)) ||
         ((cVar5 = hasCompBoundaryBefore(this,param_4,param_5), cVar5 == '\0' &&
          (cVar5 = hasCompBoundaryAfter(this,pbVar26,pbVar11,(int)param_3), cVar5 == '\0'))))
      goto LAB_001053c0;
      uVar19 = uVar19 & 0xff;
      if ((pbVar11 != pbVar26) &&
         (cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                            (pbVar26,pbVar11,param_6,param_1,param_7,param_8), cVar5 == '\0'))
      goto LAB_001051e0;
      pbVar26 = param_4;
      if (param_7 != (Edits *)0x0) {
        icu_76_godot::Edits::addReplace((int)param_7,iVar21 - iVar20);
      }
    }
  }
  else {
    if (((uVar3 & 1) == 0) || (((param_3 != '\0' && (uVar3 != 1)) && (2 < (uVar3 & 6))))) {
      cVar5 = hasCompBoundaryBefore(this,param_4,param_5);
      uVar19 = uVar19 & 0xff;
      if (cVar5 == '\0') goto LAB_001053c0;
    }
    if (pbVar11 != pbVar26) {
      cVar5 = icu_76_godot::ByteSinkUtil::appendUnchanged
                        (pbVar26,pbVar11,param_6,param_1,param_7,param_8);
      uVar19 = uVar19 & 0xff;
      if (cVar5 == '\0') goto LAB_001051e0;
    }
    iVar8 = (uint)(uVar3 >> 3) - (uint)*(ushort *)(this + 0x1c);
    if (iVar21 - iVar20 == 1) {
      uVar10 = (uint)*pbVar11 + iVar8;
LAB_00105eb2:
      local_44[0] = (byte)uVar10;
      iVar15 = 1;
    }
    else {
      bVar18 = param_4[-1];
      if (((uint)bVar18 + iVar8) - 0x80 < 0x40) {
        pbVar26 = param_4 + -1;
        pbVar14 = local_44;
        do {
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          *pbVar14 = bVar6;
          pbVar14 = pbVar14 + 1;
        } while (pbVar11 < pbVar26);
        iVar15 = 0;
        if (pbVar24 <= pbVar26) {
          iVar15 = (iVar21 - iVar20) + -2;
        }
        iVar9 = (iVar21 - iVar20) + -1;
        iVar15 = iVar15 + 2;
        if (pbVar24 > pbVar26) {
          iVar9 = 1;
        }
        local_44[iVar9] = (byte)((uint)bVar18 + iVar8);
      }
      else {
        iVar15 = (anonymous_namespace)::codePointFromValidUTF8(pbVar11,param_4);
        uVar19 = uVar19 & 0xff;
        uVar10 = iVar15 + iVar8;
        if (uVar10 < 0x80) goto LAB_00105eb2;
        bVar18 = (byte)(uVar10 >> 6);
        if (uVar10 < 0x800) {
          local_44[0] = bVar18 | 0xc0;
          iVar15 = 2;
          lVar13 = 1;
        }
        else {
          local_44[0] = (byte)(uVar10 >> 0xc);
          if (uVar10 < 0x10000) {
            iVar15 = 3;
            lVar13 = 2;
            lVar16 = 1;
            local_44[0] = local_44[0] | 0xe0;
          }
          else {
            iVar15 = 4;
            lVar16 = 2;
            local_44[1] = local_44[0] & 0x3f | 0x80;
            local_44[0] = (byte)(uVar10 >> 0x12) | 0xf0;
            lVar13 = 3;
          }
          local_44[lVar16] = bVar18 & 0x3f | 0x80;
        }
        local_44[lVar13] = (byte)uVar10 & 0x3f | 0x80;
      }
    }
    if (param_7 != (Edits *)0x0) {
      icu_76_godot::Edits::addReplace((int)param_7,iVar21 - iVar20);
    }
    (**(code **)(*(long *)param_6 + 0x10))(param_6,local_44,iVar15);
    uVar19 = uVar19 & 0xff;
    pbVar26 = param_4;
  }
  goto joined_r0x00105173;
}



/* icu_76_godot::Normalizer2Impl::getPreviousTrailCC(char16_t const*, char16_t const*) const */

ulong __thiscall
icu_76_godot::Normalizer2Impl::getPreviousTrailCC
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2)

{
  byte bVar1;
  wchar16 wVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar5 = (int)((long)param_2 - (long)param_1 >> 1) + -1;
  wVar2 = param_1[iVar5];
  uVar4 = (uint)(ushort)wVar2;
  if ((uVar4 & 0xfffffc00) == 0xdc00) {
    if (iVar5 < 1) {
      if ((ushort)wVar2 < (ushort)*(wchar16 *)(this + 8)) {
        return 0;
      }
    }
    else {
      if (((ushort)param_1[(long)iVar5 + -1] & 0xfffffc00) == 0xd800) {
        uVar4 = uVar4 + 0xfca02400 + (uint)(ushort)param_1[(long)iVar5 + -1] * 0x400;
        goto LAB_0010618d;
      }
      if (uVar4 < *(ushort *)(this + 8)) {
        return 0;
      }
    }
  }
  else if (uVar4 < *(ushort *)(this + 8)) {
    return 0;
  }
  bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)((int)uVar4 >> 8));
  uVar3 = (ulong)bVar1;
  if ((bVar1 == 0) || (uVar3 = 0, (bVar1 >> ((byte)wVar2 >> 5) & 1) == 0)) {
    return uVar3;
  }
LAB_0010618d:
  uVar3 = getFCD16FromNormData(this,uVar4);
  return uVar3;
}



/* icu_76_godot::Normalizer2Impl::compose(char16_t const*, char16_t const*, signed char, signed
   char, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::Normalizer2Impl::compose
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,char param_4,char param_5,
          ReorderingBuffer *param_6,UErrorCode *param_7)

{
  undefined2 *puVar1;
  short *psVar2;
  ushort *puVar3;
  wchar16 wVar4;
  ushort uVar5;
  wchar16 wVar6;
  long lVar7;
  undefined2 *puVar8;
  short *psVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  wchar16 *pwVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  wchar16 *pwVar19;
  wchar16 *pwVar20;
  uint uVar21;
  wchar16 *pwVar22;
  int iVar23;
  wchar16 *pwVar24;
  long *plVar25;
  ushort uVar26;
  ushort uVar27;
  ReorderingBuffer *this_00;
  
  wVar4 = *(wchar16 *)(this + 10);
  pwVar15 = param_1;
  if (param_2 == (wchar16 *)0x0) {
    this_00 = (ReorderingBuffer *)0x0;
    if (param_5 != '\0') {
      this_00 = param_6;
    }
    do {
      pwVar24 = pwVar15;
      if (*pwVar24 == L'\0') break;
      pwVar15 = pwVar24 + 1;
    } while ((ushort)*pwVar24 < (ushort)wVar4);
    pwVar15 = pwVar24;
    if (param_1 == pwVar24) {
      if (0 < *(int *)param_7) {
        return 0;
      }
      param_2 = (wchar16 *)u_strchr_76_godot(param_1,0);
    }
    else {
      if (this_00 != (ReorderingBuffer *)0x0) {
        ReorderingBuffer::appendZeroCC(this_00,param_1,pwVar24,param_7);
      }
      if (0 < *(int *)param_7) {
        return 0;
      }
      param_2 = (wchar16 *)u_strchr_76_godot(pwVar24,0);
      wVar6 = pwVar24[-1];
      param_1 = pwVar24;
      if (((ushort)wVar6 & 0xfc00) != 0xd800) {
        uVar27 = *(ushort *)
                  ((*(long **)(this + 0x28))[1] +
                  (long)(int)(((ushort)wVar6 & 0x3f) +
                             (uint)*(ushort *)
                                    (**(long **)(this + 0x28) +
                                    (long)((int)(uint)(ushort)wVar6 >> 6) * 2)) * 2);
        if ((uVar27 & 1) != 0) {
          if ((param_4 == '\0') || (uVar27 == 1)) goto joined_r0x0010623e;
          if ((uVar27 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar27)) {
            if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar27 >> 1) * 2) < 0x200)
            goto joined_r0x0010623e;
          }
          else if ((uVar27 & 6) < 3) goto joined_r0x0010623e;
        }
        lVar16 = *(long *)(param_6 + 0x10);
        if (*(long *)(param_6 + 0x20) - lVar16 < 3) {
          *(long *)(param_6 + 0x20) = lVar16;
          iVar23 = 0x1b;
          if ((*(byte *)(*(long *)(param_6 + 8) + 8) & 2) == 0) {
            iVar23 = *(int *)(*(long *)(param_6 + 8) + 0x10);
          }
        }
        else {
          lVar16 = *(long *)(param_6 + 0x20) + -2;
          *(long *)(param_6 + 0x20) = lVar16;
          iVar23 = *(int *)(param_6 + 0x28) + 1;
        }
        *(int *)(param_6 + 0x28) = iVar23;
        param_6[0x2c] = (ReorderingBuffer)0x0;
        *(long *)(param_6 + 0x18) = lVar16;
        pwVar15 = pwVar24 + -1;
        param_1 = pwVar24 + -1;
      }
    }
  }
joined_r0x0010623e:
  do {
    pwVar24 = param_1;
    if (pwVar15 == param_2) {
LAB_001062d0:
      if (pwVar24 == param_2) {
        return 1;
      }
      if (param_5 != '\0') {
        ReorderingBuffer::appendZeroCC(param_6,pwVar24,param_2,param_7);
        return 1;
      }
      return 1;
    }
    do {
      pwVar19 = pwVar15;
      uVar21 = (uint)(ushort)*pwVar19;
      pwVar15 = pwVar19 + 1;
      param_1 = pwVar24;
      if (uVar21 < (ushort)wVar4) goto joined_r0x0010623e;
      plVar25 = *(long **)(this + 0x28);
      lVar16 = plVar25[1];
      uVar5 = *(ushort *)
               (lVar16 + (long)(int)((uVar21 & 0x3f) +
                                    (uint)*(ushort *)(*plVar25 + (long)((int)uVar21 >> 6) * 2)) * 2)
      ;
      uVar27 = *(ushort *)(this + 0x12);
      if (uVar5 < uVar27) goto joined_r0x0010623e;
      if ((uVar21 & 0xfffffc00) != 0xd800) goto LAB_00106340;
      if (param_2 == pwVar15) goto LAB_001062d0;
    } while ((pwVar19[1] & 0xfc00U) != 0xdc00);
    pwVar15 = pwVar19 + 2;
    uVar21 = (ushort)pwVar19[1] + 0xfca02400 + uVar21 * 0x400;
    if ((int)uVar21 < (int)plVar25[3]) {
      iVar23 = ucptrie_internalSmallIndex_76_godot(plVar25,uVar21);
      uVar27 = *(ushort *)(this + 0x12);
    }
    else {
      iVar23 = *(int *)((long)plVar25 + 0x14) + -2;
    }
    uVar5 = *(ushort *)(lVar16 + (long)iVar23 * 2);
  } while (uVar5 < uVar27);
LAB_00106340:
  pwVar20 = pwVar19;
  if (uVar5 < *(ushort *)(this + 0x1e)) {
    if (param_5 == '\0') {
      return 0;
    }
    param_1 = pwVar15;
    if (*(ushort *)(this + 0x1a) <= uVar5) {
      if ((((uVar5 & 1) == 0) || (((param_4 != '\0' && (uVar5 != 1)) && (2 < (uVar5 & 6))))) &&
         (cVar10 = hasCompBoundaryBefore(this,pwVar15,param_2), cVar10 == '\0')) goto LAB_0010651c;
      if ((pwVar24 != pwVar19) &&
         (cVar10 = ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar19,param_7), cVar10 == '\0'))
      {
        return 1;
      }
      iVar23 = ((uVar5 >> 3) + uVar21) - (uint)*(ushort *)(this + 0x1c);
      if (iVar23 < 0x10000) {
        iVar13 = *(int *)(param_6 + 0x28);
        if (iVar13 == 0) {
          cVar10 = ReorderingBuffer::resize(param_6,1,param_7);
          if (cVar10 == '\0') {
            return 1;
          }
          iVar13 = *(int *)(param_6 + 0x28);
        }
        puVar8 = *(undefined2 **)(param_6 + 0x20);
        puVar1 = puVar8 + 1;
        *(undefined2 **)(param_6 + 0x20) = puVar1;
        *puVar8 = (short)iVar23;
        param_6[0x2c] = (ReorderingBuffer)0x0;
        *(undefined2 **)(param_6 + 0x18) = puVar1;
        *(int *)(param_6 + 0x28) = iVar13 + -1;
      }
      else {
        cVar10 = ReorderingBuffer::appendSupplementary(param_6,iVar23,'\0',param_7);
joined_r0x001063d8:
        if (cVar10 == '\0') {
          return 1;
        }
      }
      goto joined_r0x0010623e;
    }
    if (uVar5 < *(ushort *)(this + 0x14)) {
      if ((((uVar5 & 1) != 0) &&
          (((uVar5 == 1 || (param_4 == '\0')) ||
           (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar5 >> 1) * 2) < 0x200)))) ||
         (cVar10 = hasCompBoundaryBefore(this,pwVar15,param_2), cVar10 != '\0')) {
        if ((pwVar24 != pwVar19) &&
           (cVar10 = ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar19,param_7), cVar10 == '\0'
           )) {
          return 1;
        }
        puVar3 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar5 >> 1) * 2);
        pwVar24 = (wchar16 *)(puVar3 + 1);
        pwVar19 = pwVar24 + (*puVar3 & 0x1f);
LAB_001063c4:
        cVar10 = ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar19,param_7);
        goto joined_r0x001063d8;
      }
    }
    else if ((*(ushort *)(this + 0x18) <= uVar5) &&
            ((cVar10 = hasCompBoundaryBefore(this,pwVar15,param_2), cVar10 != '\0' ||
             (cVar10 = hasCompBoundaryAfter(this,pwVar24,pwVar19,(int)param_4), cVar10 != '\0')))) {
      if (pwVar24 != pwVar19) goto LAB_001063c4;
      goto joined_r0x0010623e;
    }
  }
  else {
    if (uVar5 == 0xfe00) {
      if (pwVar24 == pwVar19) goto LAB_001065e4;
      wVar6 = pwVar19[-1];
      if ((int)uVar21 < 0x11a7) {
        if ((ushort)(wVar6 + L'\xef00') < 0x13) {
          if (param_5 == '\0') {
            return 0;
          }
          if ((pwVar15 == param_2) || (0x1a < (ushort)*pwVar15 - 0x11a8)) {
            cVar10 = hasCompBoundaryBefore(this,pwVar15,param_2);
            if (cVar10 == '\0') goto LAB_00106525;
            sVar12 = 0;
          }
          else {
            sVar12 = *pwVar15 + L'\xee59';
            pwVar15 = pwVar15 + 1;
          }
          sVar12 = sVar12 + -0x5400 + ((short)uVar21 + -0x1161) * 0x1c + (wVar6 + L'\xef00') * 0x24c
          ;
joined_r0x00106d9d:
          if ((pwVar24 != pwVar19 + -1) &&
             (cVar10 = ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar19 + -1,param_7),
             cVar10 == '\0')) {
            return 1;
          }
          iVar23 = *(int *)(param_6 + 0x28);
          if (iVar23 == 0) {
            cVar10 = ReorderingBuffer::resize(param_6,1,param_7);
            if (cVar10 == '\0') {
              return 1;
            }
            iVar23 = *(int *)(param_6 + 0x28);
          }
          psVar9 = *(short **)(param_6 + 0x20);
          psVar2 = psVar9 + 1;
          *(short **)(param_6 + 0x20) = psVar2;
          *psVar9 = sVar12;
          param_6[0x2c] = (ReorderingBuffer)0x0;
          *(short **)(param_6 + 0x18) = psVar2;
          *(int *)(param_6 + 0x28) = iVar23 + -1;
          param_1 = pwVar15;
          goto joined_r0x0010623e;
        }
      }
      else {
        uVar18 = (ushort)wVar6 - 0xac00;
        if ((uVar18 < 0x2ba4) &&
           ((uVar18 * -0x49249249 + 0x12492490 >> 2 | (uint)(ushort)wVar6 * -0x40000000) < 0x9249249
           )) {
          if (param_5 == '\0') {
            return 0;
          }
          sVar12 = wVar6 + L'\xee59' + (short)uVar21;
          goto joined_r0x00106d9d;
        }
      }
LAB_00106525:
      if ((uVar5 < *(ushort *)(this + 0x16)) ||
         ((*(ushort *)(this + 0x1a) <= uVar5 && (uVar5 < *(ushort *)(this + 0x1e))))) {
LAB_001065a6:
        pwVar20 = pwVar19;
      }
      else {
        wVar6 = pwVar19[-1];
        plVar25 = *(long **)(this + 0x28);
        pwVar20 = pwVar19 + -1;
        if (((ushort)wVar6 & 0xf800) == 0xd800) {
          if ((((wVar6 & 0x400U) == 0) || (pwVar24 == pwVar20)) ||
             ((pwVar19[-2] & 0xfc00U) != 0xd800)) {
            iVar23 = *(int *)((long)plVar25 + 0x14) + -1;
          }
          else {
            pwVar20 = pwVar19 + -2;
            if ((int)((ushort)wVar6 + 0xfca02400 + (uint)(ushort)pwVar19[-2] * 0x400) <
                (int)plVar25[3]) {
              iVar23 = ucptrie_internalSmallIndex_76_godot();
              plVar25 = *(long **)(this + 0x28);
            }
            else {
              iVar23 = *(int *)((long)plVar25 + 0x14) + -2;
            }
          }
        }
        else {
          iVar23 = (uint)*(ushort *)(*plVar25 + (long)((int)(uint)(ushort)wVar6 >> 6) * 2) +
                   ((ushort)wVar6 & 0x3f);
        }
        uVar27 = *(ushort *)(plVar25[1] + (long)iVar23 * 2);
        if ((uVar27 & 1) == 0) goto LAB_001065a9;
        if ((uVar27 == 1) || (param_4 == '\0')) goto LAB_001065a6;
        if ((uVar27 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= uVar27)) {
          if (*(ushort *)(*(long *)(this + 0x30) + (ulong)(uVar27 >> 1) * 2) < 0x200)
          goto LAB_001065a6;
        }
        else if ((uVar27 & 6) < 3) goto LAB_001065a6;
      }
LAB_001065a9:
      if (((param_5 != '\0') && (pwVar24 != pwVar20)) &&
         (cVar10 = ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar20,param_7), cVar10 == '\0'))
      {
        return 1;
      }
LAB_001065e4:
      lVar16 = *(long *)(param_6 + 0x20);
      lVar7 = *(long *)(param_6 + 0x10);
      iVar23 = (int)param_4;
      decomposeShort(this,pwVar20,pwVar15,0,iVar23,param_6,param_7);
      pwVar15 = (wchar16 *)decomposeShort(this,pwVar15,param_2,1,iVar23,param_6,param_7);
      if (0 < *(int *)param_7) {
        return 1;
      }
      if (0xfffffffe < (long)pwVar15 - (long)pwVar20) {
        *(undefined4 *)param_7 = 8;
        return 1;
      }
      recompose(this,param_6,lVar16 - lVar7 >> 1 & 0xffffffff,iVar23);
      param_1 = pwVar15;
      if (param_5 == '\0') {
        uVar17 = *(long *)(param_6 + 0x20) - *(long *)(param_6 + 0x10) >> 1;
        if ((int)uVar17 != (int)((long)pwVar15 - (long)pwVar20 >> 1)) {
          return 0;
        }
        iVar23 = u_memcmp_76_godot(*(long *)(param_6 + 0x10),pwVar20,uVar17 & 0xffffffff);
        if (iVar23 != 0) {
          return 0;
        }
        uVar14 = 0x1b;
        *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_6 + 0x10);
        *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(param_6 + 0x10);
        if ((*(byte *)(*(long *)(param_6 + 8) + 8) & 2) == 0) {
          uVar14 = *(undefined4 *)(*(long *)(param_6 + 8) + 0x10);
        }
        *(undefined4 *)(param_6 + 0x28) = uVar14;
        param_6[0x2c] = (ReorderingBuffer)0x0;
      }
      goto joined_r0x0010623e;
    }
    if (uVar5 < 0xfe01) goto LAB_0010651c;
    uVar26 = uVar5 >> 1;
    pwVar22 = pwVar15;
    uVar27 = uVar26;
    if (param_4 != '\0') {
      bVar11 = getPreviousTrailCC(this,pwVar24,pwVar19);
      uVar27 = uVar26 & 0xff;
      if ((byte)uVar26 < bVar11) {
        if (param_5 == '\0') {
          return 0;
        }
        goto LAB_0010651c;
      }
    }
    do {
      pwVar15 = pwVar22;
      if (pwVar15 == param_2) {
        if (param_5 != '\0') {
          ReorderingBuffer::appendZeroCC(param_6,pwVar24,pwVar15,param_7);
          return 1;
        }
        return 1;
      }
      wVar6 = *pwVar15;
      plVar25 = *(long **)(this + 0x28);
      pwVar22 = pwVar15 + 1;
      uVar21 = (uint)(ushort)wVar6;
      if ((uVar21 & 0xf800) == 0xd800) {
        if ((((wVar6 & 0x400U) == 0) && (pwVar22 != param_2)) && ((pwVar15[1] & 0xfc00U) == 0xdc00))
        {
          pwVar22 = pwVar15 + 2;
          if ((int)((ushort)pwVar15[1] + 0xfca02400 + (uint)(ushort)wVar6 * 0x400) < (int)plVar25[3]
             ) {
            iVar23 = ucptrie_internalSmallIndex_76_godot();
            plVar25 = *(long **)(this + 0x28);
          }
          else {
            iVar23 = *(int *)((long)plVar25 + 0x14) + -2;
          }
        }
        else {
          iVar23 = *(int *)((long)plVar25 + 0x14) + -1;
        }
      }
      else {
        iVar23 = (uint)*(ushort *)(*plVar25 + (long)((int)uVar21 >> 6) * 2) + (uVar21 & 0x3f);
      }
      uVar26 = *(ushort *)(plVar25[1] + (long)iVar23 * 2);
      if (uVar26 < 0xfe02) goto LAB_00106ca6;
      bVar11 = (byte)uVar27;
      uVar27 = uVar26 >> 1;
    } while (bVar11 <= (byte)(uVar26 >> 1));
    if (param_5 == '\0') {
      return 0;
    }
LAB_00106ca6:
    if ((uVar26 < *(ushort *)(this + 0x16)) ||
       ((*(ushort *)(this + 0x1a) <= uVar26 && (uVar26 < *(ushort *)(this + 0x1e))))) {
      if (uVar26 < *(ushort *)(this + 0x12)) {
        pwVar15 = pwVar22;
      }
      goto joined_r0x0010623e;
    }
  }
LAB_0010651c:
  if (pwVar24 != pwVar19) goto LAB_00106525;
  goto LAB_001065e4;
}



/* icu_76_godot::Normalizer2Impl::composeAndAppend(char16_t const*, char16_t const*, signed char,
   signed char, icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::composeAndAppend
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,char param_4,char param_5,
          UnicodeString *param_6,ReorderingBuffer *param_7,UErrorCode *param_8)

{
  undefined1 *puVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  UnicodeString local_88 [8];
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  undefined1 *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar2 = param_1;
  if (*(long *)(param_7 + 0x20) != *(long *)(param_7 + 0x10)) {
    pwVar2 = (wchar16 *)findNextCompBoundary();
    if (param_1 != pwVar2) {
      pwVar3 = (wchar16 *)
               findPreviousCompBoundary
                         (this,*(undefined8 *)(param_7 + 0x10),*(undefined8 *)(param_7 + 0x20),
                          (int)param_5);
      iVar5 = (int)(*(long *)(param_7 + 0x20) - (long)pwVar3 >> 1);
      icu_76_godot::UnicodeString::UnicodeString(local_88,pwVar3,iVar5);
      ReorderingBuffer::removeSuffix(param_7,iVar5);
      icu_76_godot::UnicodeString::operator=(param_6,local_88);
      icu_76_godot::UnicodeString::doAppend((wchar16 *)local_88,(int)param_1,0);
      if ((local_80 & 0x11) == 0) {
        puVar1 = local_7e;
        if ((local_80 & 2) != 0) goto LAB_00106f7a;
        if ((short)local_80 < 0) goto LAB_0010706e;
LAB_00106f83:
        lVar4 = (long)((short)local_80 >> 5);
      }
      else {
        puVar1 = (undefined1 *)0x0;
LAB_00106f7a:
        local_70 = puVar1;
        if (-1 < (short)local_80) goto LAB_00106f83;
LAB_0010706e:
        lVar4 = (long)local_7c;
      }
      compose(this,local_70,local_70 + lVar4 * 2,(int)param_5,1,param_7,param_8);
      if (0 < *(int *)param_8) {
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001070c7;
      }
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
    }
  }
  if (param_4 == '\0') {
    if (param_2 == (wchar16 *)0x0) {
      param_2 = (wchar16 *)u_strchr_76_godot(pwVar2,0);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ReorderingBuffer::appendZeroCC(param_7,pwVar2,param_2,param_8);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    compose(this,pwVar2,param_2,(int)param_5,1,param_7);
    return;
  }
LAB_001070c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2Impl::addPropertyStarts(USetAdder const*, UErrorCode&) const */

void icu_76_godot::Normalizer2Impl::addPropertyStarts(USetAdder *param_1,UErrorCode *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 uStack_60;
  uint local_44;
  long local_40;
  
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar3 = uStack_60;
    uVar8 = (uint)uVar9;
    uVar6 = ucptrie_getRange_76_godot(*(undefined8 *)(param_1 + 0x28),uVar9,1,1,0,0,&local_44);
    if ((int)uVar6 < 0) break;
    uStack_60 = 0x107112;
    (**(code **)(param_2 + 8))(*(undefined8 *)param_2,uVar9,uVar3);
    if ((((uVar8 != uVar6) && (*(ushort *)(param_1 + 0x1a) <= (ushort)local_44)) &&
        ((ushort)local_44 < *(ushort *)(param_1 + 0x1e))) && (2 < (local_44 & 6))) {
      sVar4 = 0;
      if (((int)(uint)*(ushort *)(param_1 + 8) <= (int)uVar8) &&
         ((0xffff < (int)uVar8 ||
          ((bVar2 = *(byte *)(*(long *)(param_1 + 0x38) + (long)((int)uVar8 >> 8)), bVar2 != 0 &&
           ((bVar2 >> ((uint)(uVar9 >> 5) & 7) & 1) != 0)))))) {
        uStack_60 = 0x107201;
        sVar4 = getFCD16FromNormData((Normalizer2Impl *)param_1,uVar8);
      }
      while (uVar8 = uVar8 + 1, (int)uVar8 <= (int)uVar6) {
        sVar5 = 0;
        if (((int)(uint)*(ushort *)(param_1 + 8) <= (int)uVar8) &&
           ((0xffff < (int)uVar8 ||
            ((bVar2 = *(byte *)(*(long *)(param_1 + 0x38) + (long)((int)uVar8 >> 8)), bVar2 != 0 &&
             ((bVar2 >> (uVar8 >> 5 & 7) & 1) != 0)))))) {
          uStack_60 = 0x107264;
          sVar5 = getFCD16FromNormData((Normalizer2Impl *)param_1,uVar8);
        }
        bVar10 = sVar5 != sVar4;
        sVar4 = sVar5;
        if (bVar10) {
          uStack_60 = 0x10727b;
          (**(code **)(param_2 + 8))(*(undefined8 *)param_2,uVar8);
        }
      }
    }
    uVar9 = (ulong)(uVar6 + 1);
  }
  iVar7 = 0xac00;
  do {
    (**(code **)(param_2 + 8))(*(undefined8 *)param_2,iVar7);
    iVar1 = iVar7 + 1;
    iVar7 = iVar7 + 0x1c;
    (**(code **)(param_2 + 8))(*(undefined8 *)param_2,iVar1);
  } while (iVar7 != 0xd7a4);
  (**(code **)(param_2 + 8))(*(undefined8 *)param_2,0xd7a4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::Normalizer2Impl::getFCD16FromMaybeOrNonZeroCC(unsigned short) const */

uint __thiscall
icu_76_godot::Normalizer2Impl::getFCD16FromMaybeOrNonZeroCC(Normalizer2Impl *this,ushort param_1)

{
  uint uVar1;
  undefined6 in_register_00000032;
  
  if (param_1 < 0xfc00) {
    uVar1 = 0;
    if (param_1 < *(ushort *)(this + 0x22)) {
      uVar1 = (uint)*(byte *)(*(long *)(this + 0x30) + 1 +
                             (long)((int)(((uint)param_1 - (uint)*(ushort *)(this + 0x1e)) +
                                         (uint)*(ushort *)(this + 0x1a)) >> 1) * 2);
    }
    return uVar1;
  }
  return (param_1 >> 1 & 0xff) + (int)CONCAT62(in_register_00000032,param_1 >> 1) * 0x100;
}



/* icu_76_godot::Normalizer2Impl::findPreviousFCDBoundary(char16_t const*, char16_t const*) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::findPreviousFCDBoundary
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  wchar16 *pwVar4;
  long *plVar5;
  Normalizer2Impl *pNVar6;
  uint uVar7;
  
  while( true ) {
    if (param_2 <= param_1) {
      return param_2;
    }
    uVar7 = (uint)(ushort)param_2[-1];
    plVar5 = *(long **)(this + 0x28);
    pwVar4 = param_2 + -1;
    if ((uVar7 & 0xf800) == 0xd800) {
      if ((((param_2[-1] & 0x400U) == 0) || (param_1 == pwVar4)) ||
         (((ushort)param_2[-2] & 0xfffffc00) != 0xd800)) {
        iVar3 = *(int *)((long)plVar5 + 0x14) + -1;
      }
      else {
        pwVar4 = param_2 + -2;
        uVar7 = uVar7 + 0xfca02400 + (uint)(ushort)param_2[-2] * 0x400;
        if ((int)uVar7 < (int)plVar5[3]) {
          iVar3 = ucptrie_internalSmallIndex_76_godot(plVar5,uVar7);
          plVar5 = *(long **)(this + 0x28);
        }
        else {
          iVar3 = *(int *)((long)plVar5 + 0x14) + -2;
        }
      }
    }
    else {
      iVar3 = (uint)*(ushort *)(*plVar5 + (long)((int)uVar7 >> 6) * 2) + (uVar7 & 0x3f);
    }
    uVar1 = *(ushort *)(plVar5[1] + (long)iVar3 * 2);
    if ((int)uVar7 < (int)(uint)*(ushort *)(this + 8)) {
      return param_2;
    }
    if (uVar1 <= *(ushort *)(this + 0xe)) {
      return param_2;
    }
    if (uVar1 == (*(ushort *)(this + 0x10) | 1)) break;
    pNVar6 = this;
    cVar2 = norm16HasDecompBoundaryAfter(this,uVar1);
    if (cVar2 != '\0') {
      return param_2;
    }
    cVar2 = norm16HasDecompBoundaryBefore((ushort)pNVar6);
    param_2 = pwVar4;
    if (cVar2 != '\0') {
      return pwVar4;
    }
  }
  return param_2;
}



/* icu_76_godot::Normalizer2Impl::findNextFCDBoundary(char16_t const*, char16_t const*) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::findNextFCDBoundary
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  wchar16 *pwVar5;
  Normalizer2Impl *this_00;
  long *plVar6;
  ushort uVar7;
  
  if (param_2 <= param_1) {
    return param_1;
  }
  do {
    wVar1 = *param_1;
    plVar6 = *(long **)(this + 0x28);
    pwVar5 = param_1 + 1;
    if (((ushort)wVar1 & 0xf800) == 0xd800) {
      if ((((wVar1 & 0x400U) != 0) || (param_2 == pwVar5)) || ((param_1[1] & 0xfc00U) != 0xdc00)) {
        iVar3 = *(int *)((long)plVar6 + 0x14) + -1;
        goto LAB_00107452;
      }
      pwVar5 = param_1 + 2;
      if ((int)((ushort)param_1[1] + 0xfca02400 + (uint)(ushort)wVar1 * 0x400) < (int)plVar6[3]) {
        iVar3 = ucptrie_internalSmallIndex_76_godot();
        plVar6 = *(long **)(this + 0x28);
      }
      else {
        iVar3 = *(int *)((long)plVar6 + 0x14) + -2;
      }
      uVar4 = *(ushort *)(plVar6[1] + (long)iVar3 * 2);
    }
    else {
      iVar3 = (uint)*(ushort *)(*plVar6 + (long)((int)(uint)(ushort)wVar1 >> 6) * 2) +
              ((ushort)wVar1 & 0x3f);
LAB_00107452:
      uVar4 = *(ushort *)(plVar6[1] + (long)iVar3 * 2);
      if ((ushort)wVar1 < (ushort)*(wchar16 *)(this + 0xc)) {
        return param_1;
      }
    }
    this_00 = this;
    uVar7 = uVar4;
    cVar2 = norm16HasDecompBoundaryBefore((ushort)this);
    if (cVar2 != '\0') {
      return param_1;
    }
    if (uVar4 <= *(ushort *)(this + 0xe)) {
      return pwVar5;
    }
    if ((*(ushort *)(this + 0x10) | 1) == uVar4) {
      return pwVar5;
    }
    cVar2 = norm16HasDecompBoundaryAfter(this_00,uVar7);
    if (cVar2 != '\0') {
      return pwVar5;
    }
    param_1 = pwVar5;
    if (param_2 <= pwVar5) {
      return pwVar5;
    }
  } while( true );
}



/* icu_76_godot::Normalizer2Impl::makeFCD(char16_t const*, char16_t const*,
   icu_76_godot::ReorderingBuffer*, UErrorCode&) const */

wchar16 * __thiscall
icu_76_godot::Normalizer2Impl::makeFCD
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,ReorderingBuffer *param_3,
          UErrorCode *param_4)

{
  byte bVar1;
  wchar16 wVar2;
  char cVar3;
  ushort uVar4;
  ulong uVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  wchar16 *local_58;
  
  uVar11 = 0;
  pwVar6 = param_1;
  local_58 = param_1;
  if (param_2 != (wchar16 *)0x0) goto LAB_00107555;
  pwVar7 = param_1;
  do {
    pwVar6 = pwVar7;
    if ((ushort)*(wchar16 *)(this + 0xc) <= (ushort)*pwVar6) break;
    pwVar7 = pwVar6 + 1;
  } while (*pwVar6 != L'\0');
  if (param_1 == pwVar6) {
    if (0 < *(int *)param_4) {
      return pwVar6;
    }
LAB_00107977:
    uVar11 = 0;
    local_58 = param_1;
  }
  else {
    if (param_3 != (ReorderingBuffer *)0x0) {
      ReorderingBuffer::appendZeroCC(param_3,param_1,pwVar6,param_4);
    }
    if (0 < *(int *)param_4) {
      return pwVar6;
    }
    if (pwVar6 <= param_1) goto LAB_00107977;
    wVar2 = pwVar6[-1];
    if ((((ushort)wVar2 < (ushort)*(wchar16 *)(this + 8)) ||
        (bVar1 = *(byte *)(*(long *)(this + 0x38) + (ulong)((ushort)wVar2 >> 8)), bVar1 == 0)) ||
       ((bVar1 >> ((ushort)wVar2 >> 5 & 7) & 1) == 0)) {
      uVar11 = 0;
      local_58 = pwVar6;
    }
    else {
      uVar4 = getFCD16FromNormData(this,(uint)(ushort)wVar2);
      uVar11 = (uint)uVar4;
      local_58 = pwVar6 + -1;
      if (uVar11 < 2) {
        local_58 = pwVar6;
      }
    }
  }
  param_2 = (wchar16 *)u_strchr_76_godot(pwVar6,0);
LAB_00107555:
  do {
    pwVar7 = pwVar6;
    if (pwVar6 == param_2) {
      return param_2;
    }
LAB_00107577:
    while( true ) {
      wVar2 = *pwVar7;
      uVar10 = (uint)(ushort)wVar2;
      if ((ushort)*(wchar16 *)(this + 0xc) <= (ushort)wVar2) break;
      pwVar7 = pwVar7 + 1;
      uVar11 = ~uVar10;
joined_r0x001075d8:
      pwVar8 = pwVar7;
      if (param_2 == pwVar7) {
LAB_001075e0:
        if (param_3 == (ReorderingBuffer *)0x0) {
          return pwVar8;
        }
        cVar3 = ReorderingBuffer::appendZeroCC(param_3,pwVar6,pwVar8,param_4);
        if (cVar3 != '\0') {
          return param_2;
        }
        return pwVar8;
      }
    }
    bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)((int)uVar10 >> 8));
    if ((bVar1 == 0) || ((bVar1 >> ((byte)wVar2 >> 5) & 1) == 0)) {
      pwVar7 = pwVar7 + 1;
      uVar11 = 0;
      goto joined_r0x001075d8;
    }
    if ((uVar10 & 0xfffffc00) != 0xd800) {
      uVar5 = getFCD16FromNormData(this,uVar10);
      uVar9 = uVar5 & 0xffffffff;
      if ((ushort)uVar5 < 0x100) {
        pwVar7 = pwVar7 + 1;
        uVar11 = (uint)(ushort)uVar5;
        goto joined_r0x001075d8;
      }
      goto LAB_001076d8;
    }
    if (pwVar7 + 1 != param_2) {
      if ((pwVar7[1] & 0xfc00U) == 0xdc00) {
        uVar10 = (ushort)pwVar7[1] + 0xfca02400 + uVar10 * 0x400;
        uVar5 = getFCD16FromNormData(this,uVar10);
        uVar9 = uVar5 & 0xffffffff;
        if ((ushort)uVar5 < 0x100) {
          uVar11 = (uint)(ushort)uVar5;
          pwVar7 = pwVar7 + 2;
          goto joined_r0x001075d8;
        }
        goto LAB_001076d8;
      }
      uVar5 = getFCD16FromNormData(this,uVar10);
      uVar9 = uVar5 & 0xffffffff;
      if (0xff < (ushort)uVar5) goto LAB_001076d8;
      uVar11 = (uint)(ushort)uVar5;
      pwVar7 = pwVar7 + 1;
      goto LAB_00107577;
    }
    uVar5 = getFCD16FromNormData(this,uVar10);
    uVar9 = uVar5 & 0xffffffff;
    pwVar8 = param_2;
    if ((ushort)uVar5 < 0x100) goto LAB_001075e0;
LAB_001076d8:
    if (pwVar6 != pwVar7) {
      if ((param_3 != (ReorderingBuffer *)0x0) &&
         (cVar3 = ReorderingBuffer::appendZeroCC(param_3,pwVar6,pwVar7,param_4), cVar3 == '\0')) {
        return pwVar7;
      }
      if (param_2 == pwVar7) {
        return param_2;
      }
      local_58 = pwVar7;
      if (-1 < (int)uVar11) {
        local_58 = pwVar7 + -1;
        if ((((pwVar7[-1] & 0xfc00U) == 0xdc00) && (pwVar6 < local_58)) &&
           ((pwVar7[-2] & 0xfc00U) == 0xd800)) {
          local_58 = pwVar7 + -2;
          uVar4 = getFCD16FromNormData
                            (this,(ushort)pwVar7[-1] + 0xfca02400 + (uint)(ushort)pwVar7[-2] * 0x400
                            );
          uVar11 = (uint)uVar4;
        }
        if ((int)uVar11 < 2) {
          local_58 = pwVar7;
        }
        goto LAB_0010774e;
      }
      if ((int)(uint)*(ushort *)(this + 8) <= (int)~uVar11) {
        uVar4 = getFCD16FromNormData(this,~uVar11);
        uVar11 = (uint)uVar4;
        local_58 = pwVar7 + -1;
        if (uVar11 < 2) {
          local_58 = pwVar7;
        }
        goto LAB_0010774e;
      }
      if ((int)uVar10 < 0x10000) {
        pwVar6 = pwVar7 + 1;
      }
      else {
        pwVar6 = pwVar7 + 2;
      }
LAB_001077e0:
      if ((uVar9 & 0xfe) == 0) {
        local_58 = pwVar6;
      }
      if ((param_3 != (ReorderingBuffer *)0x0) &&
         (cVar3 = ReorderingBuffer::appendZeroCC(param_3,uVar10,param_4), cVar3 == '\0')) {
        return pwVar6;
      }
      uVar11 = (uint)(ushort)uVar9;
      goto LAB_00107555;
    }
LAB_0010774e:
    pwVar6 = pwVar7 + (ulong)(0xffff < (int)uVar10) + 1;
    if ((byte)uVar11 <= (byte)(uVar9 >> 8)) goto LAB_001077e0;
    if (param_3 == (ReorderingBuffer *)0x0) {
      return local_58;
    }
    ReorderingBuffer::removeSuffix(param_3,(int)((long)pwVar7 - (long)local_58 >> 1));
    pwVar6 = (wchar16 *)findNextFCDBoundary(this,pwVar6,param_2);
    decomposeShort(this,local_58,pwVar6,0,0,param_3,param_4);
    if (0 < *(int *)param_4) {
      return pwVar6;
    }
    uVar11 = 0;
    local_58 = pwVar6;
  } while( true );
}



/* icu_76_godot::Normalizer2Impl::makeFCDAndAppend(char16_t const*, char16_t const*, signed char,
   icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::makeFCDAndAppend
          (Normalizer2Impl *this,wchar16 *param_1,wchar16 *param_2,char param_4,
          UnicodeString *param_5,ReorderingBuffer *param_6,UErrorCode *param_7)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  UnicodeString local_88 [8];
  ushort local_80;
  wchar16 local_7e;
  int local_7c;
  wchar16 *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar1 = param_1;
  if ((*(long *)(param_6 + 0x20) != *(long *)(param_6 + 0x10)) &&
     (pwVar1 = (wchar16 *)findNextFCDBoundary(this,param_1,param_2), param_1 != pwVar1)) {
    pwVar2 = (wchar16 *)
             findPreviousFCDBoundary
                       (this,*(wchar16 **)(param_6 + 0x10),*(wchar16 **)(param_6 + 0x20));
    iVar4 = (int)(*(long *)(param_6 + 0x20) - (long)pwVar2 >> 1);
    icu_76_godot::UnicodeString::UnicodeString(local_88,pwVar2,iVar4);
    ReorderingBuffer::removeSuffix(param_6,iVar4);
    icu_76_godot::UnicodeString::operator=(param_5,local_88);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)local_88,(int)param_1,0);
    if ((local_80 & 0x11) == 0) {
      pwVar2 = &local_7e;
      if ((local_80 & 2) != 0) goto LAB_00107a8c;
      if ((short)local_80 < 0) goto LAB_00107b5e;
LAB_00107a95:
      lVar3 = (long)((short)local_80 >> 5);
    }
    else {
      pwVar2 = (wchar16 *)0x0;
LAB_00107a8c:
      local_70 = pwVar2;
      if (-1 < (short)local_80) goto LAB_00107a95;
LAB_00107b5e:
      lVar3 = (long)local_7c;
    }
    makeFCD(this,local_70,local_70 + lVar3,param_6,param_7);
    if (0 < *(int *)param_7) {
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00107bb7;
    }
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
  }
  if (param_4 == '\0') {
    if (param_2 == (wchar16 *)0x0) {
      param_2 = (wchar16 *)u_strchr_76_godot(pwVar1,0);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ReorderingBuffer::appendZeroCC(param_6,pwVar1,param_2,param_7);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    makeFCD(this,pwVar1,param_2,param_6,param_7);
    return;
  }
LAB_00107bb7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CanonIterData::CanonIterData(UErrorCode&) */

void __thiscall icu_76_godot::CanonIterData::CanonIterData(CanonIterData *this,UErrorCode *param_1)

{
  undefined8 uVar1;
  
  uVar1 = umutablecptrie_open_76_godot(0,0,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = 0;
  icu_76_godot::UVector::UVector
            ((UVector *)(this + 0x10),(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
             (_func_signed_UElement_UElement *)0x0,param_1);
  return;
}



/* icu_76_godot::Normalizer2Impl::getCanonValue(int) const */

void icu_76_godot::Normalizer2Impl::getCanonValue(int param_1)

{
  undefined4 in_register_0000003c;
  
  ucptrie_get_76_godot
            (*(undefined8 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 0x48) + 8));
  return;
}



/* icu_76_godot::Normalizer2Impl::getCanonStartSet(int) const */

void icu_76_godot::Normalizer2Impl::getCanonStartSet(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::UVector::elementAt
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x48) + 0x10);
  return;
}



/* icu_76_godot::Normalizer2Impl::isCanonSegmentStarter(int) const */

uint icu_76_godot::Normalizer2Impl::isCanonSegmentStarter(int param_1)

{
  uint uVar1;
  undefined4 in_register_0000003c;
  
  uVar1 = ucptrie_get_76_godot
                    (*(undefined8 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 0x48) + 8));
  return ~uVar1 >> 0x1f;
}



int unorm2_swap_76_godot(long param_1,long param_2,int param_3,void *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *__src;
  long lVar5;
  long in_FS_OFFSET;
  int local_68 [7];
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = udata_swapDataHeader_76_godot();
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    cVar1 = *(char *)(param_2 + 0x10);
    if ((*(short *)(param_2 + 0xc) == 0x724e) &&
       ((*(short *)(param_2 + 0xe) == 0x326d && ((byte)(cVar1 - 1U) < 5)))) {
      __src = (void *)(param_2 + iVar2);
      if (param_4 != (void *)0x0) {
        param_4 = (void *)((long)iVar2 + (long)param_4);
      }
      iVar4 = 0xe;
      if ((cVar1 != '\x01') && (iVar4 = 0xf, cVar1 != '\x02')) {
        iVar4 = (uint)(cVar1 == '\x05') * 3 + 0x13;
      }
      if (-1 < param_3) {
        param_3 = param_3 - iVar2;
        if (param_3 < iVar4 * 4) {
          udata_printError_76_godot
                    (param_1,"unorm2_swap(): too few bytes (%d after header) for Normalizer2 data\n"
                     ,param_3);
          *param_5 = 8;
          goto LAB_00107e21;
        }
      }
      lVar5 = 0;
      do {
        uVar3 = udata_readInt32_76_godot(param_1,*(undefined4 *)((long)__src + lVar5));
        *(undefined4 *)((long)local_68 + lVar5) = uVar3;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x20);
      if (-1 < param_3) {
        if (param_3 < local_4c) {
          udata_printError_76_godot
                    (param_1,
                     "unorm2_swap(): too few bytes (%d after header) for all of Normalizer2 data\n",
                     param_3);
          *param_5 = 8;
          goto LAB_00107e21;
        }
        if (param_4 != __src) {
          memcpy(param_4,__src,(long)local_4c);
        }
        (**(code **)(param_1 + 0x38))(param_1,__src,local_68[0],param_4,param_5);
        utrie_swapAnyVersion_76_godot
                  (param_1,(long)local_68[0] + (long)__src,local_68[1] - local_68[0],
                   (long)param_4 + (long)local_68[0],param_5);
        (**(code **)(param_1 + 0x30))
                  (param_1,(long)__src + (long)local_68[1],local_68[2] - local_68[1],
                   (long)param_4 + (long)local_68[1],param_5);
      }
      iVar2 = iVar2 + local_4c;
      goto LAB_00107e23;
    }
    udata_printError_76_godot
              (param_1,
               "unorm2_swap(): data format %02x.%02x.%02x.%02x (format version %02x) is not recognized as Normalizer2 data\n"
               ,*(undefined1 *)(param_2 + 0xc),*(undefined1 *)(param_2 + 0xd),
               *(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf),cVar1);
    *param_5 = 0x10;
  }
LAB_00107e21:
  iVar2 = 0;
LAB_00107e23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2Impl::addLcccChars(icu_76_godot::UnicodeSet&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::addLcccChars(Normalizer2Impl *this,UnicodeSet *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while (iVar3 = ucptrie_getRange_76_godot(*(undefined8 *)(this + 0x28),uVar4,1,1,0,0,&local_34),
        -1 < iVar3) {
    if (((0xfc00 < local_34) && (local_34 != 0xfe00)) ||
       ((((*(ushort *)(this + 0x16) <= local_34 &&
          ((local_34 < *(ushort *)(this + 0x1a) && ((int)(uint)*(ushort *)(this + 8) <= (int)uVar4))
          )) && ((0xffff < (int)uVar4 ||
                 ((bVar1 = *(byte *)(*(long *)(this + 0x38) + (long)((int)uVar4 >> 8)), bVar1 != 0
                  && ((bVar1 >> (uVar4 >> 5 & 7) & 1) != 0)))))) &&
        (uVar2 = getFCD16FromNormData(this,uVar4), 0xff < uVar2)))) {
      icu_76_godot::UnicodeSet::add((int)param_1,uVar4);
    }
    uVar4 = iVar3 + 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::CanonIterData::~CanonIterData() */

void __thiscall icu_76_godot::CanonIterData::~CanonIterData(CanonIterData *this)

{
  umutablecptrie_close_76_godot(*(undefined8 *)this);
  ucptrie_close_76_godot(*(undefined8 *)(this + 8));
  icu_76_godot::UVector::~UVector((UVector *)(this + 0x10));
  return;
}



/* icu_76_godot::Normalizer2Impl::~Normalizer2Impl() */

void __thiscall icu_76_godot::Normalizer2Impl::~Normalizer2Impl(Normalizer2Impl *this)

{
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x48);
  *(undefined ***)this = &PTR__Normalizer2Impl_00109050;
  if (this_00 != (UMemory *)0x0) {
    umutablecptrie_close_76_godot(*(undefined8 *)this_00);
    ucptrie_close_76_godot(*(undefined8 *)(this_00 + 8));
    icu_76_godot::UVector::~UVector((UVector *)(this_00 + 0x10));
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Normalizer2Impl::~Normalizer2Impl() */

void __thiscall icu_76_godot::Normalizer2Impl::~Normalizer2Impl(Normalizer2Impl *this)

{
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x48);
  *(undefined ***)this = &PTR__Normalizer2Impl_00109050;
  if (this_00 != (UMemory *)0x0) {
    umutablecptrie_close_76_godot(*(undefined8 *)this_00);
    ucptrie_close_76_godot(*(undefined8 *)(this_00 + 8));
    icu_76_godot::UVector::~UVector((UVector *)(this_00 + 0x10));
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CanonIterData::addToStartSet(int, int, UErrorCode&) */

void __thiscall
icu_76_godot::CanonIterData::addToStartSet
          (CanonIterData *this,int param_1,int param_2,UErrorCode *param_3)

{
  uint uVar1;
  UnicodeSet *this_00;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)param_2;
  uVar1 = umutablecptrie_get_76_godot(*(undefined8 *)this);
  if ((uVar1 & 0x3fffff) == 0) {
    if (param_1 != 0) {
      umutablecptrie_set_76_godot(*(undefined8 *)this,param_2,param_1 | uVar1,param_3);
      return;
    }
  }
  else if ((uVar1 & 0x200000) != 0) {
    this_00 = (UnicodeSet *)icu_76_godot::UVector::elementAt((int)this + 0x10);
    goto LAB_00108123;
  }
  this_00 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,uVar2);
  if (this_00 == (UnicodeSet *)0x0) {
    if (*(int *)param_3 < 1) {
      *(undefined4 *)param_3 = 7;
    }
  }
  else {
    icu_76_godot::UnicodeSet::UnicodeSet(this_00);
    if (0 < *(int *)param_3) {
      icu_76_godot::UnicodeSet::~UnicodeSet(this_00);
      return;
    }
    umutablecptrie_set_76_godot
              (*(undefined8 *)this,param_2,uVar1 & 0xffc00000 | *(uint *)(this + 0x18) | 0x200000,
               param_3);
    icu_76_godot::UVector::adoptElement(this + 0x10,(UErrorCode *)this_00);
    if (*(int *)param_3 < 1) {
      if ((uVar1 & 0x1fffff) != 0) {
        icu_76_godot::UnicodeSet::add((int)this_00);
      }
LAB_00108123:
      icu_76_godot::UnicodeSet::add((int)this_00);
      return;
    }
  }
  return;
}



/* icu_76_godot::Normalizer2Impl::makeCanonIterDataFromNorm16(int, int, unsigned short,
   icu_76_godot::CanonIterData&, UErrorCode&) const [clone .part.0] */

void __thiscall
icu_76_godot::Normalizer2Impl::makeCanonIterDataFromNorm16
          (Normalizer2Impl *this,int param_1,int param_2,ushort param_3,CanonIterData *param_4,
          UErrorCode *param_5)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_2 < param_1) {
    return;
  }
  do {
    uVar4 = umutablecptrie_get_76_godot(*(undefined8 *)param_4,param_1);
    if (param_3 < *(ushort *)(this + 0x22)) {
      uVar3 = *(ushort *)(this + 0xe);
      if (param_3 < uVar3) {
        uVar9 = uVar4 | 0x40000000;
        goto LAB_00108226;
      }
      if ((param_3 < *(ushort *)(this + 0x1a)) || (*(ushort *)(this + 0x1e) <= param_3)) {
        uVar13 = (ulong)param_3;
        uVar9 = param_1;
        if (uVar3 < param_3) goto LAB_0010830b;
LAB_001082d0:
        CanonIterData::addToStartSet(param_4,param_1,uVar9,param_5);
      }
      else {
        plVar2 = *(long **)(this + 0x28);
        lVar7 = plVar2[1];
        uVar9 = ((uint)(param_3 >> 3) + param_1) - (uint)*(ushort *)(this + 0x1c);
        if (uVar9 < 0x10000) {
          lVar8 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)((int)uVar9 >> 6) * 2) +
                             (uVar9 & 0x3f)) * 2;
        }
        else if (uVar9 < 0x110000) {
          if ((int)uVar9 < (int)plVar2[3]) {
            iVar6 = ucptrie_internalSmallIndex_76_godot(plVar2,uVar9);
            uVar3 = *(ushort *)(this + 0xe);
            lVar8 = (long)iVar6 * 2;
          }
          else {
            lVar8 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
          }
        }
        else {
          lVar8 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
        }
        uVar13 = (ulong)*(ushort *)(lVar7 + lVar8);
        if (*(ushort *)(lVar7 + lVar8) <= uVar3) goto LAB_001082d0;
LAB_0010830b:
        puVar1 = (ushort *)(*(long *)(this + 0x30) + (uVar13 & 0xfffffffffffffffe));
        uVar12 = *puVar1 & 0x1f;
        if ((((*puVar1 & 0x80) != 0) && (uVar9 == param_1)) && ((char)puVar1[-1] != '\0')) {
          uVar9 = uVar4 | 0x80000000;
          if ((short)uVar12 == 0) goto LAB_00108226;
LAB_00108340:
          uVar10 = (uint)puVar1[1];
          uVar11 = 1;
          if ((uVar10 & 0xfffffc00) == 0xd800) {
            uVar11 = 2;
            uVar10 = (uint)puVar1[1] * 0x400 + -0x35fdc00 + (uint)puVar1[2];
          }
          CanonIterData::addToStartSet(param_4,param_1,uVar10,param_5);
          if ((*(ushort *)(this + 0x12) <= (ushort)uVar13) && (uVar11 < uVar12)) {
            do {
              uVar3 = puVar1[(long)(int)uVar11 + 1];
              uVar10 = (uint)uVar3;
              if ((uVar3 & 0xfc00) == 0xd800) {
                lVar7 = (long)(int)uVar11;
                uVar11 = uVar11 + 2;
                uVar10 = puVar1[lVar7 + 2] + 0xfca02400 + (uint)uVar3 * 0x400;
              }
              else {
                uVar11 = uVar11 + 1;
              }
              uVar5 = umutablecptrie_get_76_godot(*(undefined8 *)param_4,uVar10);
              if (-1 < (int)uVar5) {
                umutablecptrie_set_76_godot
                          (*(undefined8 *)param_4,uVar10,uVar5 | 0x80000000,param_5);
              }
            } while ((int)uVar11 < (int)uVar12);
          }
          goto LAB_00108226;
        }
        uVar9 = uVar4;
        if ((short)uVar12 != 0) goto LAB_00108340;
      }
    }
    else {
      uVar9 = uVar4 | 0x80000000;
      if (param_3 < 0xfc00) {
        uVar9 = uVar4 | 0xc0000000;
      }
LAB_00108226:
      if (uVar4 != uVar9) {
        umutablecptrie_set_76_godot(*(undefined8 *)param_4,param_1,uVar9,param_5);
      }
    }
    param_1 = param_1 + 1;
    if (param_2 < param_1) {
      return;
    }
  } while( true );
}



/* icu_76_godot::Normalizer2Impl::makeCanonIterDataFromNorm16(int, int, unsigned short,
   icu_76_godot::CanonIterData&, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::makeCanonIterDataFromNorm16
          (Normalizer2Impl *this,int param_1,int param_2,ushort param_3,CanonIterData *param_4,
          UErrorCode *param_5)

{
  if (((param_3 != 1) &&
      ((param_3 < *(ushort *)(this + 0xe) || (*(ushort *)(this + 0x12) <= param_3)))) &&
     ((param_3 < *(ushort *)(this + 0x1e) || (*(ushort *)(this + 0x22) <= param_3)))) {
    makeCanonIterDataFromNorm16(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



/* icu_76_godot::InitCanonIterData::doInit(icu_76_godot::Normalizer2Impl*, UErrorCode&) */

void icu_76_godot::InitCanonIterData::doInit(Normalizer2Impl *param_1,UErrorCode *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  UMemory *this;
  undefined8 uVar4;
  ushort uVar5;
  void *pvVar6;
  int iVar7;
  UVector *this_00;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)param_2);
  if (this == (UMemory *)0x0) {
    *(undefined4 *)param_2 = 7;
  }
  else {
    uVar4 = umutablecptrie_open_76_godot(0,0,param_2);
    this_00 = (UVector *)(this + 0x10);
    *(undefined8 *)this = uVar4;
    *(undefined8 *)(this + 8) = 0;
    icu_76_godot::UVector::UVector
              (this_00,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
               (_func_signed_UElement_UElement *)0x0,param_2);
    uVar1 = *(uint *)param_2;
    pvVar6 = (void *)(ulong)uVar1;
    *(UMemory **)(param_1 + 0x48) = this;
    if ((int)uVar1 < 1) {
      iVar7 = 0;
      while( true ) {
        iVar3 = ucptrie_getRange_76_godot(*(undefined8 *)(param_1 + 0x28),iVar7,1,1,0,0,&local_34);
        if (iVar3 < 0) break;
        if ((((local_34 != 1) && (uVar5 = (ushort)local_34, uVar5 != 1)) &&
            ((uVar5 < *(ushort *)(param_1 + 0xe) || (*(ushort *)(param_1 + 0x12) <= uVar5)))) &&
           ((uVar5 < *(ushort *)(param_1 + 0x1e) || (*(ushort *)(param_1 + 0x22) <= uVar5)))) {
          Normalizer2Impl::makeCanonIterDataFromNorm16
                    (param_1,iVar7,iVar3,uVar5,*(CanonIterData **)(param_1 + 0x48),param_2);
        }
        iVar7 = iVar3 + 1;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      pvVar6 = (void *)0x1;
      uVar4 = umutablecptrie_buildImmutable_76_godot(*puVar2,1,1,param_2);
      puVar2[1] = uVar4;
      umutablecptrie_close_76_godot(**(undefined8 **)(param_1 + 0x48));
      this = *(UMemory **)(param_1 + 0x48);
      iVar7 = *(int *)param_2;
      *(undefined8 *)this = 0;
      if (iVar7 < 1) goto LAB_00108600;
      this_00 = (UVector *)(this + 0x10);
    }
    umutablecptrie_close_76_godot(*(undefined8 *)this);
    ucptrie_close_76_godot(*(undefined8 *)(this + 8));
    icu_76_godot::UVector::~UVector(this_00);
    icu_76_godot::UMemory::operator_delete(this,pvVar6);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_00108600:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2Impl::ensureCanonIterData(UErrorCode&) const */

undefined4 __thiscall
icu_76_godot::Normalizer2Impl::ensureCanonIterData(Normalizer2Impl *this,UErrorCode *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)param_1;
  if (0 < iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 1);
  }
  if (*(int *)(this + 0x40) != 2) {
    cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)(this + 0x40));
    if (cVar2 != '\0') {
      InitCanonIterData::doInit(this,param_1);
      *(undefined4 *)(this + 0x44) = *(undefined4 *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)(this + 0x40));
      iVar1 = *(int *)param_1;
      goto LAB_0010872f;
    }
  }
  iVar1 = *(int *)(this + 0x44);
  if (iVar1 < 1) {
    return CONCAT31((int3)((uint)*(int *)param_1 >> 8),*(int *)param_1 < 1);
  }
  *(int *)param_1 = iVar1;
LAB_0010872f:
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 1);
}



/* icu_76_godot::Normalizer2Impl::addCanonIterPropertyStarts(USetAdder const*, UErrorCode&) const */

void __thiscall
icu_76_godot::Normalizer2Impl::addCanonIterPropertyStarts
          (Normalizer2Impl *this,USetAdder *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  undefined1 local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_2) goto LAB_001087aa;
  if (*(int *)(this + 0x40) == 2) {
LAB_001087e5:
    if (0 < *(int *)(this + 0x44)) {
      *(int *)param_2 = *(int *)(this + 0x44);
      goto LAB_001087aa;
    }
  }
  else {
    uStack_50 = 0x108800;
    cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)(this + 0x40));
    if (cVar2 == '\0') goto LAB_001087e5;
    InitCanonIterData::doInit(this,param_2);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)param_2;
    uStack_50 = 0x10881e;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)(this + 0x40));
  }
  if (*(int *)param_2 < 1) {
    iVar4 = 0;
    while (uVar1 = uStack_50,
          iVar3 = ucptrie_getRange_76_godot
                            (*(undefined8 *)(*(long *)(this + 0x48) + 8),iVar4,0,0,0x100000,0,
                             local_44), -1 < iVar3) {
      uStack_50 = 0x108846;
      (**(code **)(param_1 + 8))(*(undefined8 *)param_1,iVar4,uVar1);
      iVar4 = iVar3 + 1;
    }
  }
LAB_001087aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::Normalizer2Impl::getCanonStartSet(int, icu_76_godot::UnicodeSet&) const */

undefined8 __thiscall
icu_76_godot::Normalizer2Impl::getCanonStartSet
          (Normalizer2Impl *this,int param_1,UnicodeSet *param_2)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  
  uVar4 = ucptrie_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 8));
  if ((uVar4 & 0x7fffffff) == 0) {
    return 0;
  }
  icu_76_godot::UnicodeSet::clear();
  if ((uVar4 & 0x200000) == 0) {
    if ((uVar4 & 0x1fffff) != 0) {
      icu_76_godot::UnicodeSet::add((int)param_2);
    }
  }
  else {
    icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x48) + 0x10);
    icu_76_godot::UnicodeSet::addAll(param_2);
  }
  if ((uVar4 & 0x40000000) != 0) {
    plVar1 = *(long **)(this + 0x28);
    lVar2 = plVar1[1];
    if ((uint)param_1 < 0x10000) {
      lVar6 = (long)(int)((uint)*(ushort *)(*plVar1 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
    }
    else if ((uint)param_1 < 0x110000) {
      if (param_1 < (int)plVar1[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar1 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar6 = (long)(*(int *)((long)plVar1 + 0x14) + -1) * 2;
    }
    uVar3 = *(ushort *)(lVar2 + lVar6);
    if (uVar3 == 2) {
      icu_76_godot::UnicodeSet::add((int)param_2,(param_1 + -0x1100) * 0x24c + 0xac00);
    }
    else {
      if ((uVar3 < *(ushort *)(this + 0xe)) || (*(ushort *)(this + 0x22) <= uVar3)) {
        if ((ushort)(uVar3 - 2) < 0xfbfe) {
          if (*(ushort *)(this + 0x1e) <= uVar3) {
            uVar3 = (uVar3 + *(short *)(this + 0x1a)) - *(ushort *)(this + 0x1e);
          }
          puVar7 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2);
        }
        else {
          puVar7 = (ushort *)0x0;
        }
      }
      else {
        if (*(ushort *)(this + 0x1e) <= uVar3) {
          uVar3 = (uVar3 + *(short *)(this + 0x1a)) - *(ushort *)(this + 0x1e);
        }
        puVar7 = (ushort *)(*(long *)(this + 0x30) + (ulong)(uVar3 >> 1) * 2);
        puVar7 = puVar7 + (ulong)(*puVar7 & 0x1f) + 1;
      }
      addComposites(this,puVar7,param_2);
    }
  }
  return 1;
}



/* icu_76_godot::(anonymous namespace)::codePointFromValidUTF8(unsigned char const*, unsigned char
   const*) [clone .cold] */

void icu_76_godot::(anonymous_namespace)::codePointFromValidUTF8(uchar *param_1,uchar *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
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
LAB_00108d6f:
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
      goto LAB_00108d6f;
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


