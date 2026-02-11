
/* icu_76_godot::BytesTrie::Iterator::Iterator(void const*, int, UErrorCode&) */

void __thiscall
icu_76_godot::BytesTrie::Iterator::Iterator
          (Iterator *this,void *param_1,int param_2,UErrorCode *param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  UVector32 *this_00;
  ulong uVar4;
  
  *(void **)(this + 0x10) = param_1;
  uVar1 = *(uint *)param_3;
  uVar4 = (ulong)uVar1;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = 0;
  *(int *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(void **)this = param_1;
  *(void **)(this + 8) = param_1;
  if ((int)uVar1 < 1) {
    plVar3 = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar4);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 0x28;
      *plVar3 = (long)plVar3 + 0xd;
      *(undefined4 *)(plVar3 + 7) = 0;
      *(undefined2 *)((long)plVar3 + 0xc) = 0;
    }
    *(long **)(this + 0x20) = plVar3;
    this_00 = (UVector32 *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,uVar4);
    if (this_00 == (UVector32 *)0x0) {
      iVar2 = *(int *)param_3;
      *(undefined8 *)(this + 0x30) = 0;
      if (0 < iVar2) {
        return;
      }
    }
    else {
      icu_76_godot::UVector32::UVector32(this_00,param_3);
      iVar2 = *(int *)param_3;
      *(UVector32 **)(this + 0x30) = this_00;
      if (0 < iVar2) {
        return;
      }
      if (*(long *)(this + 0x20) != 0) {
        return;
      }
    }
    *(undefined4 *)param_3 = 7;
  }
  return;
}



/* icu_76_godot::BytesTrie::Iterator::Iterator(icu_76_godot::BytesTrie const&, int, UErrorCode&) */

void __thiscall
icu_76_godot::BytesTrie::Iterator::Iterator
          (Iterator *this,BytesTrie *param_1,int param_2,UErrorCode *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  UVector32 *this_00;
  ulong uVar8;
  uint uVar9;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(int *)(this + 0x28) = param_2;
  *(undefined8 *)this = uVar5;
  *(undefined8 *)(this + 8) = uVar6;
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(uint *)param_3;
  uVar8 = (ulong)uVar2;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(ulong *)(this + 0x18) = CONCAT44(uVar1,uVar1);
  if (0 < (int)uVar2) {
    return;
  }
  plVar7 = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar8);
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 0x28;
    *plVar7 = (long)plVar7 + 0xd;
    *(undefined4 *)(plVar7 + 7) = 0;
    *(undefined2 *)((long)plVar7 + 0xc) = 0;
  }
  *(long **)(this + 0x20) = plVar7;
  this_00 = (UVector32 *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,uVar8);
  if (this_00 == (UVector32 *)0x0) {
    iVar3 = *(int *)param_3;
    *(undefined8 *)(this + 0x30) = 0;
    if (0 < iVar3) {
      return;
    }
  }
  else {
    icu_76_godot::UVector32::UVector32(this_00,param_3);
    iVar3 = *(int *)param_3;
    *(UVector32 **)(this + 0x30) = this_00;
    if (0 < iVar3) {
      return;
    }
    if (*(char **)(this + 0x20) != (char *)0x0) {
      if (*(int *)(this + 0x18) < 0) {
        return;
      }
      uVar2 = *(uint *)(this + 0x28);
      uVar9 = *(int *)(this + 0x18) + 1;
      uVar4 = uVar2;
      if ((int)uVar9 <= (int)uVar2) {
        uVar4 = uVar9;
      }
      if (0 < (int)uVar2) {
        uVar9 = uVar4;
      }
      icu_76_godot::CharString::append
                (*(char **)(this + 0x20),(int)*(undefined8 *)(this + 8),(UErrorCode *)(ulong)uVar9);
      *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar9;
      *(long *)(this + 8) = *(long *)(this + 8) + (long)(int)uVar9;
      return;
    }
  }
  *(undefined4 *)param_3 = 7;
  return;
}



/* icu_76_godot::BytesTrie::Iterator::~Iterator() */

void __thiscall icu_76_godot::BytesTrie::Iterator::~Iterator(Iterator *this)

{
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x20);
  if (this_00 != (UMemory *)0x0) {
    if (this_00[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this_00);
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010021a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::BytesTrie::Iterator::reset() */

Iterator * __thiscall icu_76_godot::BytesTrie::Iterator::reset(Iterator *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x10);
  iVar1 = *(int *)(this + 0x28);
  *(int *)(this + 0x18) = *(int *)(this + 0x1c);
  iVar3 = *(int *)(this + 0x1c) + 1;
  iVar2 = iVar1;
  if (iVar3 <= iVar1) {
    iVar2 = iVar3;
  }
  if (0 < iVar1) {
    iVar3 = iVar2;
  }
  icu_76_godot::CharString::truncate((int)*(undefined8 *)(this + 0x20));
  *(int *)(this + 0x18) = *(int *)(this + 0x18) - iVar3;
  *(long *)(this + 8) = *(long *)(this + 8) + (long)iVar3;
  icu_76_godot::UVector32::setSize((int)*(undefined8 *)(this + 0x30));
  return this;
}



/* icu_76_godot::BytesTrie::Iterator::hasNext() const */

undefined4 __thiscall icu_76_godot::BytesTrie::Iterator::hasNext(Iterator *this)

{
  if (*(long *)(this + 8) != 0) {
    return 1;
  }
  return CONCAT31((int3)((uint)*(int *)(*(long *)(this + 0x30) + 8) >> 8),
                  *(int *)(*(long *)(this + 0x30) + 8) != 0);
}



/* icu_76_godot::BytesTrie::Iterator::getString() const */

undefined1  [16] __thiscall icu_76_godot::BytesTrie::Iterator::getString(Iterator *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = *(undefined8 **)(this + 0x20);
  uVar2 = 0;
  uVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = (ulong)*(uint *)(puVar1 + 7);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* icu_76_godot::BytesTrie::Iterator::truncateAndStop() */

undefined8 __thiscall icu_76_godot::BytesTrie::Iterator::truncateAndStop(Iterator *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  return 1;
}



/* icu_76_godot::BytesTrie::Iterator::branchNext(unsigned char const*, int, UErrorCode&) */

uchar * icu_76_godot::BytesTrie::Iterator::branchNext
                  (uchar *param_1,int param_2,UErrorCode *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_register_00000034;
  ulong uVar13;
  uchar *puVar14;
  byte local_58;
  
  pcVar7 = (char *)CONCAT44(in_register_00000034,param_2);
  uVar10 = (uint)param_3;
  uVar13 = (ulong)param_3 & 0xffffffff;
  if (5 < (int)uVar10) {
    do {
      bVar1 = pcVar7[1];
      lVar9 = *(long *)(param_1 + 0x30);
      iVar2 = (int)pcVar7;
      iVar6 = iVar2 + 2;
      if (0xbf < bVar1) {
        if (bVar1 < 0xf0) {
          iVar6 = iVar2 + 3;
        }
        else if (bVar1 < 0xfe) {
          iVar6 = iVar2 + 4;
        }
        else {
          iVar6 = iVar2 + 5 + (bVar1 & 1);
        }
      }
      iVar2 = *(int *)(lVar9 + 8);
      uVar3 = *(undefined8 *)param_1;
      uVar10 = iVar2 + 1;
      if (((int)uVar10 < 0) || (lVar8 = lVar9, *(int *)(lVar9 + 0xc) < (int)uVar10)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity((int)lVar9,(UErrorCode *)(ulong)uVar10);
        if (cVar4 != '\0') {
          iVar2 = *(int *)(lVar9 + 8);
          lVar8 = *(long *)(param_1 + 0x30);
          goto LAB_001003f5;
        }
        lVar8 = *(long *)(param_1 + 0x30);
      }
      else {
LAB_001003f5:
        *(int *)(*(long *)(lVar9 + 0x18) + (long)iVar2 * 4) = iVar6 - (int)uVar3;
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      }
      uVar10 = (int)uVar13 >> 1;
      uVar11 = *(uint *)(*(long *)(param_1 + 0x20) + 0x38);
      iVar6 = *(int *)(lVar8 + 8);
      uVar12 = iVar6 + 1;
      if (((int)uVar12 < 0) || (*(int *)(lVar8 + 0xc) < (int)uVar12)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity((int)lVar8,(UErrorCode *)(ulong)uVar12);
        if (cVar4 != '\0') {
          iVar6 = *(int *)(lVar8 + 8);
          goto LAB_00100414;
        }
        pcVar7 = (char *)icu_76_godot::BytesTrie::jumpByDelta((uchar *)(pcVar7 + 1));
      }
      else {
LAB_00100414:
        *(uint *)(*(long *)(lVar8 + 0x18) + (long)iVar6 * 4) =
             ((int)uVar13 - uVar10) * 0x10000 | uVar11;
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        pcVar7 = (char *)icu_76_godot::BytesTrie::jumpByDelta((uchar *)(pcVar7 + 1));
      }
      if ((int)uVar10 < 6) break;
      uVar13 = (ulong)uVar10;
    } while( true );
  }
  cVar4 = *pcVar7;
  bVar1 = pcVar7[1];
  puVar14 = (uchar *)(pcVar7 + 2);
  local_58 = bVar1 & 1;
  iVar6 = icu_76_godot::BytesTrie::readValue(puVar14,(int)(uint)bVar1 >> 1);
  if (0xa1 < bVar1) {
    if (bVar1 < 0xd8) {
      puVar14 = (uchar *)(pcVar7 + 3);
    }
    else if (bVar1 < 0xfc) {
      puVar14 = (uchar *)(pcVar7 + 4);
    }
    else {
      puVar14 = (uchar *)(pcVar7 + (ulong)((int)(uint)bVar1 >> 1 & 1) + 5);
    }
  }
  lVar9 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)param_1;
  iVar2 = *(int *)(lVar9 + 8);
  uVar11 = iVar2 + 1;
  if (((int)uVar11 < 0) || (lVar8 = lVar9, *(int *)(lVar9 + 0xc) < (int)uVar11)) {
    cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar9,(UErrorCode *)(ulong)uVar11);
    if (cVar5 != '\0') {
      iVar2 = *(int *)(lVar9 + 8);
      lVar8 = *(long *)(param_1 + 0x30);
      goto LAB_0010059b;
    }
    lVar8 = *(long *)(param_1 + 0x30);
  }
  else {
LAB_0010059b:
    *(int *)(*(long *)(lVar9 + 0x18) + (long)iVar2 * 4) = (int)puVar14 - (int)uVar3;
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
  }
  iVar2 = *(int *)(lVar8 + 8);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar11 = *(uint *)(lVar9 + 0x38);
  uVar12 = iVar2 + 1;
  if (((int)uVar12 < 0) || (*(int *)(lVar8 + 0xc) < (int)uVar12)) {
    cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar8,(UErrorCode *)(ulong)uVar12);
    if (cVar5 == '\0') {
      cVar5 = (char)*(undefined8 *)(param_1 + 0x20);
      goto LAB_0010050e;
    }
    iVar2 = *(int *)(lVar8 + 8);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  cVar5 = (char)lVar9;
  *(uint *)(*(long *)(lVar8 + 0x18) + (long)iVar2 * 4) = (uVar10 - 1) * 0x10000 | uVar11;
  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
LAB_0010050e:
  icu_76_godot::CharString::append(cVar5,(UErrorCode *)(ulong)(uint)(int)cVar4);
  if (local_58 == 0) {
    return puVar14 + iVar6;
  }
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  *(int *)(param_1 + 0x2c) = iVar6;
  return (uchar *)0x0;
}



/* icu_76_godot::BytesTrie::Iterator::next(UErrorCode&) */

undefined8 __thiscall icu_76_godot::BytesTrie::Iterator::next(Iterator *this,UErrorCode *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  pbVar5 = *(byte **)(this + 8);
  if (pbVar5 == (byte *)0x0) {
    lVar3 = *(long *)(this + 0x30);
    iVar2 = *(int *)(lVar3 + 8);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar8 = *(char **)this;
    iVar6 = iVar2 + -1;
    if (iVar6 < 0) {
      icu_76_godot::UVector32::setSize((int)lVar3);
      icu_76_godot::CharString::truncate((int)*(undefined8 *)(this + 0x20));
    }
    else {
      uVar7 = *(uint *)(*(long *)(lVar3 + 0x18) + (long)iVar6 * 4);
      if (iVar2 != 1) {
        pcVar8 = pcVar8 + *(int *)(*(long *)(lVar3 + 0x18) + -4 + (long)iVar6 * 4);
      }
      icu_76_godot::UVector32::setSize((int)lVar3);
      icu_76_godot::CharString::truncate((int)*(undefined8 *)(this + 0x20));
      if (0x1ffff < uVar7) {
        pbVar5 = (byte *)branchNext((uchar *)this,(int)pcVar8,(UErrorCode *)(ulong)(uVar7 >> 0x10));
        if (pbVar5 == (byte *)0x0) {
          return 1;
        }
        goto LAB_00100651;
      }
    }
    pbVar5 = (byte *)(pcVar8 + 1);
    icu_76_godot::CharString::append
              ((char)*(undefined8 *)(this + 0x20),(UErrorCode *)(ulong)(uint)(int)*pcVar8);
  }
LAB_00100651:
  if (-1 < *(int *)(this + 0x18)) {
LAB_0010065a:
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x2c) = 0xffffffff;
    return 1;
  }
LAB_001006a6:
  bVar1 = *pbVar5;
  do {
    uVar7 = (uint)bVar1;
    pbVar9 = pbVar5 + 1;
    if (0x1f < uVar7) {
      uVar4 = icu_76_godot::BytesTrie::readValue(pbVar9,(int)uVar7 >> 1);
      *(undefined4 *)(this + 0x2c) = uVar4;
      if (((bVar1 & 1) == 0) &&
         ((*(int *)(this + 0x28) < 1 ||
          (*(int *)(this + 0x28) != *(int *)(*(long *)(this + 0x20) + 0x38))))) {
        if (0xa1 < uVar7) {
          if (uVar7 < 0xd8) {
            pbVar9 = pbVar5 + 2;
          }
          else if (uVar7 < 0xfc) {
            pbVar9 = pbVar5 + 3;
          }
          else {
            pbVar9 = pbVar9 + (ulong)((int)uVar7 >> 1 & 1) + 3;
          }
        }
        *(byte **)(this + 8) = pbVar9;
        return 1;
      }
      *(undefined8 *)(this + 8) = 0;
      return 1;
    }
    iVar2 = *(int *)(this + 0x28);
    if (iVar2 < 1) {
      if (uVar7 < 0x10) break;
      pcVar8 = *(char **)(this + 0x20);
    }
    else {
      pcVar8 = *(char **)(this + 0x20);
      iVar6 = *(int *)(pcVar8 + 0x38);
      if (iVar2 == iVar6) goto LAB_0010065a;
      if (uVar7 < 0x10) break;
      if (iVar2 < (int)((uVar7 - 0xf) + iVar6)) {
        icu_76_godot::CharString::append
                  (pcVar8,(int)pbVar9,(UErrorCode *)(ulong)(uint)(iVar2 - iVar6));
        goto LAB_0010065a;
      }
    }
    icu_76_godot::CharString::append(pcVar8,(int)pbVar9,(UErrorCode *)(ulong)(uVar7 - 0xf));
    pbVar5 = pbVar9 + (int)(uVar7 - 0xf);
    bVar1 = *pbVar5;
  } while( true );
  if (uVar7 == 0) {
    uVar7 = (uint)pbVar5[1];
    pbVar9 = pbVar5 + 2;
  }
  pbVar5 = (byte *)branchNext((uchar *)this,(int)pbVar9,(UErrorCode *)(ulong)(uVar7 + 1));
  if (pbVar5 == (byte *)0x0) {
    return 1;
  }
  goto LAB_001006a6;
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
LAB_00100b5f:
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
      goto LAB_00100b5f;
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


