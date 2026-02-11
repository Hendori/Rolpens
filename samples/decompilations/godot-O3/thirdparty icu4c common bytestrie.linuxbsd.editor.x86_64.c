
/* icu_76_godot::BytesTrie::~BytesTrie() */

void __thiscall icu_76_godot::BytesTrie::~BytesTrie(BytesTrie *this)

{
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::BytesTrie::readValue(unsigned char const*, int) */

uint icu_76_godot::BytesTrie::readValue(uchar *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x51) {
    return param_2 - 0x10;
  }
  if (param_2 < 0x6c) {
    return (param_2 + -0x51) * 0x100 | (uint)*param_1;
  }
  if (param_2 < 0x7e) {
    return (uint)(ushort)(*(ushort *)param_1 << 8 | *(ushort *)param_1 >> 8) |
           (param_2 + -0x6c) * 0x10000;
  }
  if (param_2 != 0x7e) {
    uVar1 = *(uint *)param_1;
    return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return (uint)param_1[2] | (uint)param_1[1] << 8 | (uint)*param_1 << 0x10;
}



/* icu_76_godot::BytesTrie::jumpByDelta(unsigned char const*) */

uchar * icu_76_godot::BytesTrie::jumpByDelta(uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  uchar *puVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (bVar1 < 0xc0) {
    puVar3 = param_1 + 1;
  }
  else {
    if (bVar1 < 0xf0) {
      return param_1 + (long)(int)((uVar2 - 0xc0) * 0x100 | (uint)param_1[1]) + 2;
    }
    if (bVar1 < 0xfe) {
      return param_1 + (long)(int)((uint)(ushort)(*(ushort *)(param_1 + 1) << 8 |
                                                 *(ushort *)(param_1 + 1) >> 8) |
                                  (bVar1 - 0xf0) * 0x10000) + 3;
    }
    if (uVar2 == 0xfe) {
      puVar3 = param_1 + 4;
      uVar2 = (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)param_1[3];
    }
    else {
      uVar2 = *(uint *)(param_1 + 1);
      puVar3 = param_1 + 5;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    }
  }
  return puVar3 + (int)uVar2;
}



/* icu_76_godot::BytesTrie::current() const */

int __thiscall icu_76_godot::BytesTrie::current(BytesTrie *this)

{
  byte bVar1;
  
  if (*(byte **)(this + 0x10) == (byte *)0x0) {
    return 0;
  }
  if ((*(int *)(this + 0x18) < 0) && (bVar1 = **(byte **)(this + 0x10), 0x1f < bVar1)) {
    return 3 - (bVar1 & 1);
  }
  return 1;
}



/* icu_76_godot::BytesTrie::branchNext(unsigned char const*, int, int) */

int __thiscall
icu_76_godot::BytesTrie::branchNext(BytesTrie *this,uchar *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar3 = (ulong)(uint)param_3;
  bVar1 = *param_1;
  if (param_2 == 0) {
    param_1 = param_1 + 1;
    param_2 = (int)bVar1;
  }
  uVar7 = (ulong)(param_2 + 1);
  while (iVar5 = (int)uVar7, 5 < iVar5) {
    uVar4 = iVar5 >> 1;
    pbVar2 = param_1;
    if ((int)uVar3 < (int)(uint)*param_1) {
      do {
        uVar7 = (ulong)uVar4;
        param_1 = (uchar *)jumpByDelta(param_1 + 1);
        iVar5 = (int)uVar7;
        if (iVar5 < 6) goto LAB_001001f0;
        uVar4 = iVar5 >> 1;
        pbVar2 = param_1;
      } while ((int)uVar3 < (int)(uint)*param_1);
    }
    bVar1 = pbVar2[1];
    uVar7 = (ulong)(iVar5 - uVar4);
    param_1 = pbVar2 + 2;
    if (0xbf < bVar1) {
      if (bVar1 < 0xf0) {
        param_1 = pbVar2 + 3;
      }
      else {
        param_1 = pbVar2 + 4;
        if (0xfd < bVar1) {
          param_1 = pbVar2 + (ulong)(bVar1 & 1) + 5;
        }
      }
    }
  }
LAB_001001f0:
  while( true ) {
    bVar1 = param_1[1];
    uVar4 = (int)(uint)bVar1 >> 1;
    if ((uint)*param_1 == (uint)uVar3) break;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar6;
    pbVar2 = param_1 + 2;
    if (0xa1 < bVar1) {
      if (bVar1 < 0xd8) {
        pbVar2 = param_1 + 3;
      }
      else {
        pbVar2 = param_1 + 4;
        if (0xfb < bVar1) {
          pbVar2 = param_1 + (ulong)(uVar4 & 1) + 5;
        }
      }
    }
    param_1 = pbVar2;
    if ((int)uVar6 < 2) {
      if ((uint)*param_1 == (uint)uVar3) {
        *(uchar **)(this + 0x10) = param_1 + 1;
        iVar5 = 1;
        if (0x1f < param_1[1]) {
          return 3 - (param_1[1] & 1);
        }
      }
      else {
        *(undefined8 *)(this + 0x10) = 0;
        iVar5 = 0;
      }
      return iVar5;
    }
  }
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 0xa2) {
      pbVar2 = param_1 + 2;
      uVar4 = uVar4 - 0x10;
    }
    else if (uVar4 < 0x6c) {
      pbVar2 = param_1 + 3;
      uVar4 = (uVar4 - 0x51) * 0x100 | (uint)param_1[2];
    }
    else if (uVar4 < 0x7e) {
      pbVar2 = param_1 + 4;
      uVar4 = (uVar4 - 0x6c) * 0x10000 |
              (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
    }
    else if (uVar4 == 0x7e) {
      pbVar2 = param_1 + 5;
      uVar4 = (uint)param_1[3] << 8 | (uint)param_1[2] << 0x10 | (uint)param_1[4];
    }
    else {
      uVar4 = *(uint *)(param_1 + 2);
      pbVar2 = param_1 + 6;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    pbVar2 = pbVar2 + (int)uVar4;
    iVar5 = 1;
    bVar1 = *pbVar2;
    if (0x1f < bVar1) {
      *(byte **)(this + 0x10) = pbVar2;
      return 3 - (bVar1 & 1);
    }
  }
  else {
    pbVar2 = param_1 + 1;
    iVar5 = 2;
  }
  *(byte **)(this + 0x10) = pbVar2;
  return iVar5;
}



/* icu_76_godot::BytesTrie::nextImpl(unsigned char const*, int) */

ulong __thiscall icu_76_godot::BytesTrie::nextImpl(BytesTrie *this,uchar *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
LAB_00100380:
  uVar2 = (uint)*param_1;
  pbVar3 = param_1 + 1;
  pbVar4 = param_1;
  if (*param_1 < 0x10) {
LAB_001003b6:
    uVar1 = branchNext(this,pbVar3,uVar2,param_2);
    return uVar1;
  }
  do {
    if (uVar2 < 0x20) {
      if ((uint)pbVar4[1] == param_2) {
        *(byte **)(this + 0x10) = pbVar4 + 2;
        *(uint *)(this + 0x18) = uVar2 - 0x11;
        if (uVar2 - 0x11 != -1) {
          return 1;
        }
        if (pbVar4[2] < 0x20) {
          return 1;
        }
        return (ulong)(3 - (pbVar4[2] & 1));
      }
LAB_001003e8:
      *(undefined8 *)(this + 0x10) = 0;
      return 0;
    }
    if ((uVar2 & 1) != 0) goto LAB_001003e8;
    param_1 = pbVar3;
    if (uVar2 < 0xa2) goto LAB_00100380;
    if (0xd7 < uVar2) break;
    uVar2 = (uint)pbVar4[2];
    pbVar3 = pbVar4 + 3;
    pbVar4 = pbVar4 + 2;
    if (uVar2 < 0x10) goto LAB_001003b6;
  } while( true );
  param_1 = pbVar4 + 3;
  if (0xfb < uVar2) {
    param_1 = pbVar3 + (ulong)((int)uVar2 >> 1 & 1) + 3;
  }
  goto LAB_00100380;
}



/* icu_76_godot::BytesTrie::next(int) */

ulong __thiscall icu_76_godot::BytesTrie::next(BytesTrie *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  pbVar1 = *(byte **)(this + 0x10);
  if (pbVar1 != (byte *)0x0) {
    if (param_1 < 0) {
      param_1 = param_1 + 0x100;
    }
    if (*(int *)(this + 0x18) < 0) {
      uVar3 = nextImpl(this,pbVar1,param_1);
      return uVar3;
    }
    if ((uint)*pbVar1 == param_1) {
      iVar2 = *(int *)(this + 0x18) + -1;
      *(byte **)(this + 0x10) = pbVar1 + 1;
      uVar4 = 1;
      *(int *)(this + 0x18) = iVar2;
      if ((iVar2 == -1) && (0x1f < pbVar1[1])) {
        uVar4 = 3 - (pbVar1[1] & 1);
      }
      goto LAB_00100492;
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  uVar4 = 0;
LAB_00100492:
  return (ulong)uVar4;
}



/* icu_76_godot::BytesTrie::next(char const*, int) */

ulong __thiscall icu_76_godot::BytesTrie::next(BytesTrie *this,char *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  ulong uVar12;
  
  uVar12 = (ulong)(uint)param_2;
  if (param_2 < 0) {
    if (*param_1 == '\0') goto LAB_001004b1;
  }
  else if (param_2 == 0) {
LAB_001004b1:
    pbVar7 = *(byte **)(this + 0x10);
    if (pbVar7 == (byte *)0x0) {
      return 0;
    }
    iVar9 = *(int *)(this + 0x18);
joined_r0x00100541:
    if ((iVar9 < 0) && (0x1f < *pbVar7)) {
      return (ulong)(3 - (*pbVar7 & 1));
    }
    return 1;
  }
  pbVar7 = *(byte **)(this + 0x10);
  if (pbVar7 == (byte *)0x0) {
    return 0;
  }
  iVar9 = *(int *)(this + 0x18);
LAB_001004e1:
  iVar11 = (int)uVar12;
  if (iVar11 < 0) {
    cVar3 = *param_1;
    uVar8 = (uint)cVar3;
    param_1 = param_1 + 1;
    if (cVar3 != '\0') {
      if (-1 < iVar9) {
        do {
          if (*pbVar7 != uVar8) goto LAB_00100529;
          cVar3 = *param_1;
          uVar8 = (uint)cVar3;
          param_1 = param_1 + 1;
          pbVar7 = pbVar7 + 1;
          iVar9 = iVar9 + -1;
          if (cVar3 == '\0') goto LAB_00100538;
        } while (iVar9 != -1);
      }
LAB_001005a0:
      *(int *)(this + 0x18) = iVar9;
LAB_001005a8:
      do {
        pbVar1 = pbVar7 + 1;
        bVar2 = *pbVar7;
        pbVar5 = pbVar7;
        while (uVar4 = (uint)bVar2, 0xf < uVar4) {
          if (uVar4 < 0x20) {
            if (pbVar5[1] != uVar8) goto LAB_00100529;
            pbVar7 = pbVar5 + 2;
            iVar9 = uVar4 - 0x11;
            goto LAB_001004e1;
          }
          if ((bVar2 & 1) != 0) goto LAB_00100529;
          pbVar7 = pbVar1;
          if (uVar4 < 0xa2) goto LAB_001005a8;
          if (0xd7 < uVar4) {
            pbVar7 = pbVar5 + 3;
            if (0xfb < uVar4) {
              pbVar7 = pbVar1 + (ulong)((int)uVar4 >> 1 & 1) + 3;
            }
            goto LAB_001005a8;
          }
          pbVar1 = pbVar5 + 3;
          bVar2 = pbVar5[2];
          pbVar5 = pbVar5 + 2;
        }
        uVar6 = branchNext(this,pbVar1,uVar4,uVar8);
        if ((int)uVar6 == 0) {
          return 0;
        }
        iVar9 = (int)uVar12;
        if (iVar9 < 0) {
          cVar3 = *param_1;
          if (cVar3 == '\0') {
            return uVar6;
          }
        }
        else {
          if (iVar9 == 0) {
            return uVar6;
          }
          cVar3 = *param_1;
          uVar12 = (ulong)(iVar9 - 1);
        }
        uVar8 = (uint)cVar3;
        param_1 = param_1 + 1;
        if ((int)uVar6 == 2) {
LAB_00100529:
          *(undefined8 *)(this + 0x10) = 0;
          return 0;
        }
        pbVar7 = *(byte **)(this + 0x10);
      } while( true );
    }
  }
  else if (iVar11 != 0) {
    uVar8 = (uint)*param_1;
    param_1 = param_1 + 1;
    uVar12 = (ulong)(iVar11 - 1);
    pcVar10 = param_1;
    if (-1 < iVar9) {
      do {
        if (*pbVar7 != uVar8) goto LAB_00100529;
        pbVar7 = pbVar7 + 1;
        iVar9 = iVar9 + -1;
        if ((int)uVar12 == 0) goto LAB_00100538;
        param_1 = pcVar10 + 1;
        uVar12 = (ulong)((int)uVar12 - 1);
        uVar8 = (uint)*pcVar10;
        pcVar10 = param_1;
      } while (iVar9 != -1);
    }
    goto LAB_001005a0;
  }
LAB_00100538:
  *(int *)(this + 0x18) = iVar9;
  *(byte **)(this + 0x10) = pbVar7;
  goto joined_r0x00100541;
}



/* icu_76_godot::BytesTrie::findUniqueValue(unsigned char const*, signed char, int&) */

undefined8 icu_76_godot::BytesTrie::findUniqueValue(byte *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = (ulong)param_2;
  while( true ) {
    while( true ) {
      bVar1 = *param_1;
      pbVar3 = param_1;
      while( true ) {
        uVar4 = (ulong)bVar1;
        pbVar5 = pbVar3 + 1;
        if (0xf < bVar1) break;
        uVar8 = (uint)bVar1;
        if (uVar8 == 0) {
          uVar8 = (uint)pbVar3[1];
          pbVar5 = pbVar3 + 2;
        }
        pbVar3 = (byte *)findUniqueValueFromBranch(pbVar5,uVar8 + 1,(int)(char)uVar7,param_3);
        if (pbVar3 == (byte *)0x0) {
          return 0;
        }
        bVar1 = *pbVar3;
        uVar7 = 1;
      }
      if (0x1f < bVar1) break;
      param_1 = pbVar3 + (uVar4 - 0xe);
    }
    bVar6 = bVar1 & 1;
    uVar8 = (int)(uint)bVar1 >> 1;
    iVar2 = readValue(pbVar5,uVar8);
    if ((char)uVar7 == '\0') {
      *param_3 = iVar2;
      uVar7 = 1;
    }
    else if (*param_3 != iVar2) {
      return 0;
    }
    if (bVar6 != 0) break;
    iVar2 = (int)uVar4;
    param_1 = pbVar5;
    if (0xa1 < iVar2) {
      if (iVar2 < 0xd8) {
        param_1 = pbVar3 + 2;
      }
      else {
        param_1 = pbVar3 + 3;
        if (0xfb < iVar2) {
          param_1 = pbVar5 + (ulong)(uVar8 & 1) + 3;
        }
      }
    }
  }
  return 1;
}



/* icu_76_godot::BytesTrie::findUniqueValueFromBranch(unsigned char const*, int, signed char, int&)
    */

uchar * icu_76_godot::BytesTrie::findUniqueValueFromBranch
                  (uchar *param_1,int param_2,char param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  uchar *puVar7;
  uint uVar8;
  
  if (5 < param_2) {
    puVar7 = param_1;
    do {
      uVar4 = jumpByDelta(puVar7 + 1);
      lVar5 = findUniqueValueFromBranch(uVar4,param_2 >> 1,(int)param_3);
      if (lVar5 == 0) {
        return (uchar *)0x0;
      }
      uVar2 = (uint)puVar7[1];
      param_2 = param_2 - (param_2 >> 1);
      param_1 = puVar7 + 2;
      if (0xbf < uVar2) {
        if (uVar2 < 0xf0) {
          param_1 = puVar7 + 3;
        }
        else {
          param_1 = puVar7 + 4;
          if (0xfd < uVar2) {
            param_1 = puVar7 + (ulong)(uVar2 & 1) + 5;
          }
        }
      }
      puVar7 = param_1;
    } while (5 < param_2);
  }
  do {
    while( true ) {
      bVar6 = param_1[1];
      uVar2 = (uint)bVar6;
      puVar7 = param_1 + 2;
      uVar8 = (int)(uint)bVar6 >> 1;
      bVar6 = bVar6 & 1;
      iVar3 = readValue(puVar7,uVar8);
      if ((int)uVar2 < 0xa2) break;
      if ((int)uVar2 < 0xd8) {
        param_1 = param_1 + 3;
      }
      else {
        param_1 = param_1 + 4;
        if (0xfb < (int)uVar2) {
          param_1 = puVar7 + (ulong)(uVar8 & 1) + 3;
        }
      }
      if (bVar6 != 0) goto LAB_00100845;
LAB_00100888:
      cVar1 = findUniqueValue(param_1 + iVar3,(int)param_3,param_4);
      if (cVar1 == '\0') {
        return (uchar *)0x0;
      }
LAB_001008b3:
      param_2 = param_2 + -1;
      param_3 = '\x01';
      if (param_2 < 2) goto LAB_001008c3;
    }
    param_1 = puVar7;
    if (bVar6 == 0) goto LAB_00100888;
LAB_00100845:
    if (param_3 == '\0') {
      *param_4 = iVar3;
      goto LAB_001008b3;
    }
    if (*param_4 != iVar3) {
      return (uchar *)0x0;
    }
    param_2 = param_2 + -1;
  } while (1 < param_2);
LAB_001008c3:
  return param_1 + 1;
}



/* icu_76_godot::BytesTrie::getNextBranchBytes(unsigned char const*, int, icu_76_godot::ByteSink&)
    */

void icu_76_godot::BytesTrie::getNextBranchBytes(uchar *param_1,int param_2,ByteSink *param_3)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  uchar local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = param_1;
  if (5 < param_2) {
    do {
      puVar2 = (uchar *)jumpByDelta(puVar3 + 1);
      iVar4 = param_2 >> 1;
      param_2 = param_2 - iVar4;
      getNextBranchBytes(puVar2,iVar4,param_3);
      bVar1 = puVar3[1];
      param_1 = puVar3 + 2;
      if (0xbf < bVar1) {
        if (bVar1 < 0xf0) {
          param_1 = puVar3 + 3;
        }
        else {
          param_1 = puVar3 + 4;
          if (0xfd < bVar1) {
            param_1 = puVar3 + (ulong)(bVar1 & 1) + 5;
          }
        }
      }
      puVar3 = param_1;
    } while (5 < param_2);
  }
  do {
    local_31 = *param_1;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,&local_31,1);
    bVar1 = param_1[1];
    puVar3 = param_1 + 2;
    if (0xa1 < bVar1) {
      if (bVar1 < 0xd8) {
        puVar3 = param_1 + 3;
      }
      else {
        puVar3 = param_1 + 4;
        if (0xfb < bVar1) {
          puVar3 = param_1 + (ulong)((int)(uint)bVar1 >> 1 & 1) + 5;
        }
      }
    }
    param_2 = param_2 + -1;
    param_1 = puVar3;
  } while (1 < param_2);
  local_31 = *puVar3;
  (**(code **)(*(long *)param_3 + 0x10))(param_3,&local_31,1);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::BytesTrie::getNextBytes(icu_76_godot::ByteSink&) const */

int __thiscall icu_76_godot::BytesTrie::getNextBytes(BytesTrie *this,ByteSink *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar2 = *(byte **)(this + 0x10);
  if (pbVar2 == (byte *)0x0) {
    iVar4 = 0;
  }
  else {
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (*(int *)(this + 0x18) < 0) {
      pbVar5 = pbVar2 + 1;
      if (0x1f < bVar1) {
        iVar4 = 0;
        if ((bVar1 & 1) != 0) goto LAB_00100b1d;
        if (0xa1 < uVar3) {
          if (uVar3 < 0xd8) {
            pbVar5 = pbVar2 + 2;
          }
          else if (uVar3 < 0xfc) {
            pbVar5 = pbVar2 + 3;
          }
          else {
            pbVar5 = pbVar2 + (ulong)((int)uVar3 >> 1 & 1) + 4;
          }
        }
        uVar3 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      }
      if (uVar3 < 0x10) {
        if (uVar3 == 0) {
          uVar3 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
        }
        iVar4 = uVar3 + 1;
        getNextBranchBytes(pbVar5,iVar4,param_1);
        goto LAB_00100b1d;
      }
      bVar1 = *pbVar5;
    }
    local_11 = bVar1;
    iVar4 = 1;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_11,1);
  }
LAB_00100b1d:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* icu_76_godot::BytesTrie::append(icu_76_godot::ByteSink&, int) */

void icu_76_godot::BytesTrie::append(ByteSink *param_1,int param_2)

{
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_11 = (undefined1)param_2;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_11,1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


