
/* icu_76_godot::UCharsDictionaryMatcher::getType() const */

undefined8 icu_76_godot::UCharsDictionaryMatcher::getType(void)

{
  return 1;
}



/* icu_76_godot::BytesDictionaryMatcher::getType() const */

undefined8 icu_76_godot::BytesDictionaryMatcher::getType(void)

{
  return 0;
}



/* icu_76_godot::UCharsDictionaryMatcher::~UCharsDictionaryMatcher() */

void __thiscall
icu_76_godot::UCharsDictionaryMatcher::~UCharsDictionaryMatcher(UCharsDictionaryMatcher *this)

{
  *(undefined ***)this = &PTR__UCharsDictionaryMatcher_00100ac8;
  udata_close_76_godot(*(undefined8 *)(this + 0x10));
  return;
}



/* icu_76_godot::UCharsDictionaryMatcher::~UCharsDictionaryMatcher() */

void __thiscall
icu_76_godot::UCharsDictionaryMatcher::~UCharsDictionaryMatcher(UCharsDictionaryMatcher *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UCharsDictionaryMatcher_00100ac8;
  udata_close_76_godot(*(undefined8 *)(this + 0x10));
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::BytesDictionaryMatcher::~BytesDictionaryMatcher() */

void __thiscall
icu_76_godot::BytesDictionaryMatcher::~BytesDictionaryMatcher(BytesDictionaryMatcher *this)

{
  *(undefined ***)this = &PTR__BytesDictionaryMatcher_00100af8;
  udata_close_76_godot(*(undefined8 *)(this + 0x18));
  return;
}



/* icu_76_godot::BytesDictionaryMatcher::~BytesDictionaryMatcher() */

void __thiscall
icu_76_godot::BytesDictionaryMatcher::~BytesDictionaryMatcher(BytesDictionaryMatcher *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__BytesDictionaryMatcher_00100af8;
  udata_close_76_godot(*(undefined8 *)(this + 0x18));
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UCharsDictionaryMatcher::matches(UText*, int, int, int*, int*, int*, int*) const */

int __thiscall
icu_76_godot::UCharsDictionaryMatcher::matches
          (UCharsDictionaryMatcher *this,UText *param_1,int param_2,int param_3,int *param_4,
          int *param_5,int *param_6,int *param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined8 local_68;
  ushort *local_60;
  ushort *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *(ushort **)(this + 8);
  local_50 = 0xffffffff;
  local_68 = 0;
  local_58 = local_60;
  iVar2 = utext_getNativeIndex_76_godot(param_1);
  iVar3 = utext_next32_76_godot(param_1);
  if (-1 < iVar3) {
    iVar3 = 0;
    local_50 = 0xffffffff;
    iVar6 = 0;
    iVar4 = icu_76_godot::UCharsTrie::nextImpl((wchar16 *)&local_68,(int)local_60);
    do {
      iVar3 = iVar3 + 1;
      iVar5 = utext_getNativeIndex_76_godot(param_1);
      if (iVar4 < 2) {
        if (iVar4 == 0) goto LAB_00100228;
      }
      else {
        if (iVar6 < param_3) {
          if (param_6 != (int *)0x0) {
            uVar1 = *local_58;
            if ((short)uVar1 < 0) {
              uVar7 = uVar1 & 0x7fff;
              if ((uVar1 & 0x4000) != 0) {
                if ((uVar1 & 0x7fff) == 0x7fff) {
                  uVar7 = CONCAT22(local_58[1],local_58[2]);
                }
                else {
                  uVar7 = (uVar7 - 0x4000) * 0x10000 | (uint)local_58[1];
                }
              }
            }
            else if (uVar1 < 0x4040) {
              uVar7 = ((int)(uint)uVar1 >> 6) - 1;
            }
            else if (uVar1 < 0x7fc0) {
              uVar7 = (uint)local_58[1] | ((uVar1 & 0x7fc0) - 0x4040) * 0x400;
            }
            else {
              uVar7 = CONCAT22(local_58[1],local_58[2]);
            }
            param_6[iVar6] = uVar7;
          }
          if (param_4 != (int *)0x0) {
            param_4[iVar6] = iVar5 - iVar2;
          }
          if (param_5 != (int *)0x0) {
            param_5[iVar6] = iVar3;
          }
          iVar6 = iVar6 + 1;
        }
        if (iVar4 == 2) goto LAB_00100228;
      }
      if (param_2 <= iVar5 - iVar2) goto LAB_00100228;
      iVar4 = utext_next32_76_godot(param_1);
      if (iVar4 < 0) goto LAB_00100228;
      iVar4 = icu_76_godot::UCharsTrie::next((int)&local_68);
    } while( true );
  }
  iVar3 = 0;
  iVar6 = 0;
LAB_00100228:
  if (param_7 != (int *)0x0) {
    *param_7 = iVar3;
  }
  icu_76_godot::UCharsTrie::~UCharsTrie((UCharsTrie *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BytesDictionaryMatcher::matches(UText*, int, int, int*, int*, int*, int*) const */

int __thiscall
icu_76_godot::BytesDictionaryMatcher::matches
          (BytesDictionaryMatcher *this,UText *param_1,int param_2,int param_3,int *param_4,
          int *param_5,int *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_68;
  byte *local_60;
  byte *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *(byte **)(this + 8);
  local_50 = 0xffffffff;
  local_68 = 0;
  local_58 = local_60;
  iVar1 = utext_getNativeIndex_76_godot(param_1);
  iVar2 = utext_next32_76_godot(param_1);
  if (-1 < iVar2) {
    iVar6 = 0;
    iVar2 = 0;
    local_50 = 0xffffffff;
    iVar3 = icu_76_godot::BytesTrie::nextImpl((uchar *)&local_68,(int)local_60);
    do {
      iVar2 = iVar2 + 1;
      iVar4 = utext_getNativeIndex_76_godot(param_1);
      if (iVar3 < 2) {
        if (iVar3 == 0) goto LAB_001004b0;
      }
      else {
        if (iVar6 < param_3) {
          if (param_6 != (int *)0x0) {
            iVar5 = icu_76_godot::BytesTrie::readValue(local_58 + 1,(int)(uint)*local_58 >> 1);
            param_6[iVar6] = iVar5;
          }
          if (param_4 != (int *)0x0) {
            param_4[iVar6] = iVar4 - iVar1;
          }
          if (param_5 != (int *)0x0) {
            param_5[iVar6] = iVar2;
          }
          iVar6 = iVar6 + 1;
        }
        if (iVar3 == 2) goto LAB_001004b0;
      }
      if ((param_2 <= iVar4 - iVar1) || (iVar3 = utext_next32_76_godot(param_1), iVar3 < 0))
      goto LAB_001004b0;
      iVar3 = icu_76_godot::BytesTrie::next((int)&local_68);
    } while( true );
  }
  iVar2 = 0;
  iVar6 = 0;
LAB_001004b0:
  if (param_7 != (int *)0x0) {
    *param_7 = iVar2;
  }
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* icu_76_godot::DictionaryMatcher::~DictionaryMatcher() */

void __thiscall icu_76_godot::DictionaryMatcher::~DictionaryMatcher(DictionaryMatcher *this)

{
  return;
}



/* icu_76_godot::DictionaryMatcher::~DictionaryMatcher() */

void __thiscall icu_76_godot::DictionaryMatcher::~DictionaryMatcher(DictionaryMatcher *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::BytesDictionaryMatcher::transform(int) const */

int __thiscall
icu_76_godot::BytesDictionaryMatcher::transform(BytesDictionaryMatcher *this,int param_1)

{
  if ((*(uint *)(this + 0x10) & 0x7f000000) == 0x1000000) {
    if (param_1 == 0x200d) {
      return 0xff;
    }
    if (param_1 == 0x200c) {
      return 0xfe;
    }
    param_1 = param_1 - (*(uint *)(this + 0x10) & 0x1fffff);
    if (0xfd < (uint)param_1) {
      return 0xffffffff;
    }
  }
  return param_1;
}



int udict_swap_76_godot(long param_1,long param_2,int param_3,void *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  void *__src;
  long in_FS_OFFSET;
  int local_68 [4];
  uint local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = udata_swapDataHeader_76_godot();
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if ((*(short *)(param_2 + 0xc) == 0x6944) &&
       ((*(short *)(param_2 + 0xe) == 0x7463 && (*(char *)(param_2 + 0x10) == '\x01')))) {
      __src = (void *)(param_2 + iVar1);
      if (param_4 != (void *)0x0) {
        param_4 = (void *)((long)iVar1 + (long)param_4);
      }
      if ((param_3 < 0) || (param_3 = param_3 - iVar1, 0x1f < param_3)) {
        lVar3 = 0;
        do {
          uVar2 = udata_readInt32_76_godot(param_1,*(undefined4 *)((long)__src + lVar3));
          *(undefined4 *)((long)local_68 + lVar3) = uVar2;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x20);
        if (-1 < param_3) {
          if (param_3 < local_68[3]) {
            udata_printError_76_godot
                      (param_1,
                       "udict_swap(): too few bytes (%d after header) for all of dictionary data\n",
                       param_3);
            *param_5 = 8;
            goto LAB_001006c0;
          }
          if (param_4 != __src) {
            memcpy(param_4,__src,(long)local_68[3]);
          }
          (**(code **)(param_1 + 0x38))(param_1,__src,0x20,param_4,param_5);
          if ((local_58 & 7) == 1) {
            (**(code **)(param_1 + 0x30))
                      (param_1,(long)__src + 0x20,local_68[1] + -0x20,(long)param_4 + 0x20,param_5);
          }
          else if ((local_58 & 7) != 0) {
            udata_printError_76_godot(param_1,"udict_swap(): unknown trie type!\n");
            *param_5 = 0x10;
            goto LAB_001006c0;
          }
        }
        iVar1 = iVar1 + local_68[3];
        goto LAB_001006c2;
      }
      udata_printError_76_godot
                (param_1,"udict_swap(): too few bytes (%d after header) for dictionary data\n",
                 param_3);
      *param_5 = 8;
    }
    else {
      udata_printError_76_godot
                (param_1,
                 "udict_swap(): data format %02x.%02x.%02x.%02x (format version %02x) is not recognized as dictionary data\n"
                 ,*(undefined1 *)(param_2 + 0xc),*(undefined1 *)(param_2 + 0xd),
                 *(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf),
                 *(char *)(param_2 + 0x10));
      *param_5 = 0x10;
    }
  }
LAB_001006c0:
  iVar1 = 0;
LAB_001006c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


