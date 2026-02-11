
int utrie_swap_76_godot(long param_1,undefined4 *param_2,uint param_3,long param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
       ((-1 < (int)param_3 && (param_4 == 0)))) {
      *param_5 = 1;
    }
    else {
      if (0xf < param_3) {
        iVar2 = (**(code **)(param_1 + 0x10))(*param_2);
        uVar3 = (**(code **)(param_1 + 0x10))(param_2[1]);
        uVar4 = udata_readInt32_76_godot(param_1,param_2[2]);
        uVar5 = udata_readInt32_76_godot(param_1,param_2[3]);
        if ((((iVar2 != 0x54726965) || ((char)uVar3 != '%')) || ((int)uVar4 < 0x800)) ||
           ((((int)uVar5 < 0x20 || ((uVar4 & 0x1f) != 0 || (uVar5 & 3) != 0)) ||
            (((uVar3 & 0x200) != 0 && ((int)uVar5 < 0x120)))))) {
          *param_5 = 3;
          return 0;
        }
        iVar2 = uVar4 * 2 + 0x10 + ((-(uint)((uVar3 & 0x100) == 0) & 0xfffffffe) + 4) * uVar5;
        if ((int)param_3 < 0) {
          return iVar2;
        }
        if (iVar2 <= (int)param_3) {
          (**(code **)(param_1 + 0x38))(param_1,param_2,0x10,param_4);
          if ((uVar3 & 0x100) == 0) {
            (**(code **)(param_1 + 0x30))(param_1,param_2 + 4,(uVar4 + uVar5) * 2,param_4 + 0x10);
            return iVar2;
          }
          (**(code **)(param_1 + 0x30))(param_1,param_2 + 4,uVar4 * 2);
          lVar1 = (long)(int)uVar4 * 2 + 0x10;
          (**(code **)(param_1 + 0x38))
                    (param_1,(long)param_2 + lVar1,uVar5 * 4,param_4 + lVar1,param_5);
          return iVar2;
        }
      }
      *param_5 = 8;
    }
  }
  return 0;
}



int utrie2_swap_76_godot(long param_1,undefined4 *param_2,uint param_3,long param_4,int *param_5)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  if (0 < *param_5) {
    return 0;
  }
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || ((-1 < (int)param_3 && (param_4 == 0))))
  {
    *param_5 = 1;
    return 0;
  }
  if (param_3 < 0x10) {
LAB_001002b8:
    *param_5 = 8;
  }
  else {
    iVar5 = (**(code **)(param_1 + 0x10))(*param_2);
    uVar2 = (**(code **)(param_1 + 8))(*(undefined2 *)(param_2 + 1));
    uVar3 = (**(code **)(param_1 + 8))(*(undefined2 *)((long)param_2 + 6));
    uVar4 = (**(code **)(param_1 + 8))(*(undefined2 *)(param_2 + 2));
    if (iVar5 == 0x54726932) {
      uVar6 = (uint)uVar4 * 4;
      if (((uVar2 & 0xe) == 0 && 0x83f < uVar3) && (0xbf < uVar6)) {
        if ((uVar2 & 0xf) == 1) {
          iVar5 = (uint)uVar4 << 4;
        }
        else {
          iVar5 = (uint)uVar4 * 8;
        }
        iVar5 = (uint)uVar3 + (uint)uVar3 + 0x10 + iVar5;
        if ((int)param_3 < 0) {
          return iVar5;
        }
        if (iVar5 <= (int)param_3) {
          (**(code **)(param_1 + 0x38))(param_1,param_2,4,param_4);
          (**(code **)(param_1 + 0x30))(param_1,param_2 + 1,0xc,param_4 + 4,param_5);
          if ((uVar2 & 0xf) == 1) {
            (**(code **)(param_1 + 0x30))
                      (param_1,param_2 + 4,(uint)uVar3 + (uint)uVar3,param_4 + 0x10);
            lVar1 = (ulong)uVar3 * 2 + 0x10;
            (**(code **)(param_1 + 0x38))
                      (param_1,(long)param_2 + lVar1,(uint)uVar4 << 4,param_4 + lVar1,param_5);
            return iVar5;
          }
          (**(code **)(param_1 + 0x30))(param_1,param_2 + 4,(uVar3 + uVar6) * 2);
          return iVar5;
        }
        goto LAB_001002b8;
      }
    }
    *param_5 = 3;
  }
  return 0;
}



int ucptrie_swap_76_godot
              (long param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *__dest;
  void *__src;
  ushort uVar7;
  
  if (0 < *param_5) {
    return 0;
  }
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
     ((-1 < (int)param_3 && (param_4 == (undefined4 *)0x0)))) {
    *param_5 = 1;
    return 0;
  }
  if (param_3 < 0x10) {
LAB_00100590:
    *param_5 = 8;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x10))(*param_2);
    uVar5 = (**(code **)(param_1 + 8))(*(undefined2 *)(param_2 + 1));
    uVar2 = (**(code **)(param_1 + 8))(*(undefined2 *)((long)param_2 + 6));
    uVar3 = (**(code **)(param_1 + 8))(*(undefined2 *)(param_2 + 2));
    if ((uVar5 & 0xc0) == 0) {
      uVar6 = 0x400;
      if (iVar4 == 0x54726933) {
LAB_00100470:
        uVar7 = (ushort)uVar5 & 7;
        if (((((uVar5 & 0x38) == 0) && (uVar7 < 3)) &&
            (uVar5 = (uVar5 & 0xf000) << 4 | (uint)uVar3, 0x7f < uVar5)) && (uVar6 <= uVar2)) {
          iVar4 = (uint)uVar2 + (uint)uVar2;
          if (uVar7 == 1) {
            uVar6 = uVar5 * 4;
          }
          else {
            uVar6 = uVar5 * 2;
            if (uVar7 == 2) {
              uVar6 = uVar5;
            }
          }
          iVar1 = iVar4 + 0x10 + uVar6;
          if ((int)param_3 < 0) {
            return iVar1;
          }
          if (iVar1 <= (int)param_3) {
            (**(code **)(param_1 + 0x38))(param_1,param_2,4,param_4,param_5);
            (**(code **)(param_1 + 0x30))(param_1,param_2 + 1,0xc,param_4 + 1,param_5);
            (**(code **)(param_1 + 0x30))(param_1,param_2 + 4,iVar4,param_4 + 4,param_5);
            __src = (void *)((long)(param_2 + 4) + (ulong)uVar2 * 2);
            __dest = (void *)((long)(param_4 + 4) + (ulong)uVar2 * 2);
            if (uVar7 == 1) {
              (**(code **)(param_1 + 0x38))(param_1,__src,uVar5 * 4,__dest,param_5);
              return iVar1;
            }
            if (uVar7 == 2) {
              if (param_2 != param_4) {
                memmove(__dest,__src,(long)(int)uVar5);
                return iVar1;
              }
              return iVar1;
            }
            (**(code **)(param_1 + 0x30))(param_1,__src,uVar5 * 2,__dest,param_5);
            return iVar1;
          }
          goto LAB_00100590;
        }
      }
    }
    else if ((iVar4 == 0x54726933) && ((uVar5 & 0x80) == 0)) {
      uVar6 = 0x40;
      goto LAB_00100470;
    }
    *param_5 = 3;
  }
  return 0;
}



undefined8
utrie_swapAnyVersion_76_godot
          (undefined8 param_1,int *param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_5 < 1) {
    if (((0xf < param_3) && (param_2 != (int *)0x0)) && (((ulong)param_2 & 3) == 0)) {
      iVar1 = *param_2;
      if ((iVar1 == 0x33697254) || (iVar1 == 0x54726933)) {
        uVar2 = ucptrie_swap_76_godot();
        return uVar2;
      }
      if ((iVar1 == 0x32697254) || (iVar1 == 0x54726932)) {
        uVar2 = utrie2_swap_76_godot();
        return uVar2;
      }
      if ((iVar1 == 0x65697254) || (iVar1 == 0x54726965)) {
        uVar2 = utrie_swap_76_godot();
        return uVar2;
      }
    }
    *param_5 = 3;
  }
  return 0;
}


