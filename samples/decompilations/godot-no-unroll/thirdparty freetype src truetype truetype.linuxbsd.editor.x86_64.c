
undefined8
tt_get_kerning(long param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x370);
  *param_4 = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    iVar2 = (**(code **)(lVar1 + 0xa8))();
    *(long *)*param_4 = (long)iVar2;
    return 0;
  }
  return 0;
}



void tt_get_metrics_incremental(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_38 [2];
  long local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = *(long **)(*(long *)(*param_1 + 0xf0) + 0x68);
  if ((plVar1 != (long *)0x0) && (*(code **)(*plVar1 + 0x10) != (code *)0x0)) {
    local_38[0] = (long)(int)param_1[0xc];
    local_38[1] = 0;
    local_20 = 0;
    local_28 = (long)*(int *)((long)param_1 + 100);
    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1[1],param_2,0,local_38);
    if (iVar2 == 0) {
      param_1[0x26] = 0;
      *(int *)(param_1 + 0xc) = (int)(short)local_38[0];
      *(uint *)((long)param_1 + 100) = (uint)(ushort)local_28;
      if (*(char *)((long)param_1 + 0x6c) == '\0') {
        *(undefined1 *)((long)param_1 + 0x6c) = 1;
        *(uint *)(param_1 + 0xd) = (uint)(ushort)local_28;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 TT_Load_Glyph_Header(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x158);
  uVar3 = 0x14;
  if (puVar2 + 5 <= *(ushort **)(param_1 + 0x160)) {
    *(ushort *)(param_1 + 0x3c) = *puVar2 << 8 | *puVar2 >> 8;
    *(long *)(param_1 + 0x40) = (long)(short)(puVar2[1] << 8 | puVar2[1] >> 8);
    *(long *)(param_1 + 0x48) = (long)(short)(puVar2[2] << 8 | puVar2[2] >> 8);
    *(long *)(param_1 + 0x50) = (long)(short)(puVar2[3] << 8 | puVar2[3] >> 8);
    uVar1 = puVar2[4];
    uVar3 = 0;
    *(ushort **)(param_1 + 0x158) = puVar2 + 5;
    *(long *)(param_1 + 0x58) = (long)(short)(uVar1 << 8 | uVar1 >> 8);
  }
  return uVar3;
}



void tt_loader_set_pp(long *param_1)

{
  int iVar1;
  long lVar2;
  
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x27] = 0;
  lVar2 = param_1[8] - (long)(int)param_1[0xc];
  iVar1 = *(int *)((long)param_1 + 100);
  param_1[0xe] = lVar2;
  param_1[0x29] = 0;
  param_1[0x10] = lVar2 + iVar1;
  lVar2 = (long)(int)param_1[0x26] + param_1[0xb];
  param_1[0x28] = lVar2;
  param_1[0x2a] = lVar2 - *(int *)((long)param_1 + 0x134);
  if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) && (lVar2 = param_1[0x22], lVar2 != 0)
       ) && (*(char *)(lVar2 + 0x449) != '\0')) && (*(char *)(lVar2 + 0x44e) != '\0')) {
    lVar2 = (long)((int)(((uint)((ulong)(long)iVar1 >> 0x1f) & 1) + iVar1) >> 1);
    param_1[0x27] = lVar2;
    param_1[0x29] = lVar2;
    return;
  }
  return;
}



long ft_var_get_value_pointer(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 == 0x7362786f) {
    return param_1 + 0x276;
  }
  if (param_2 < 0x73627870) {
    if (param_2 < 0x6773703a) {
      if (param_2 < 0x67737030) {
        lVar1 = 0;
        if (param_2 == 0x63706874) {
          lVar1 = param_1 + 0x2e2;
        }
        return lVar1;
      }
      switch(param_2) {
      case 0x67737031:
        lVar1 = 0;
        if (2 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 4;
        }
        break;
      case 0x67737032:
        lVar1 = 0;
        if (3 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 8;
        }
        break;
      case 0x67737033:
        lVar1 = 0;
        if (4 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0xc;
        }
        break;
      case 0x67737034:
        lVar1 = 0;
        if (5 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x10;
        }
        break;
      case 0x67737035:
        lVar1 = 0;
        if (6 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x14;
        }
        break;
      case 0x67737036:
        lVar1 = 0;
        if (7 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x18;
        }
        break;
      case 0x67737037:
        lVar1 = 0;
        if (8 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x1c;
        }
        break;
      case 0x67737038:
        lVar1 = 0;
        if (9 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x20;
        }
        break;
      case 0x67737039:
        lVar1 = 0;
        if (10 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x24;
        }
        break;
      default:
        lVar1 = 0;
        if (1 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8);
        }
      }
    }
    else {
      if (param_2 == 0x6863726e) {
        return param_1 + 0x1a8;
      }
      if (param_2 < 0x6863726f) {
        lVar1 = param_1 + 0x2ca;
        if (param_2 != 0x68636c64) {
          if (0x68636c64 < param_2) {
            lVar1 = 0;
            if (param_2 == 0x68636f66) {
              lVar1 = param_1 + 0x1aa;
            }
            return lVar1;
          }
          lVar1 = param_1 + 0x2c2;
          if (param_2 != 0x68617363) {
            lVar1 = 0;
            if (param_2 == 0x68636c61) {
              lVar1 = param_1 + 0x2c8;
            }
            return lVar1;
          }
        }
      }
      else {
        lVar1 = param_1 + 0x2c4;
        if ((param_2 != 0x68647363) && (lVar1 = param_1 + 0x2c6, param_2 != 0x686c6770)) {
          lVar1 = 0;
          if (param_2 == 0x68637273) {
            lVar1 = param_1 + 0x1a6;
          }
          return lVar1;
        }
      }
    }
  }
  else {
    if (param_2 == 0x756e646f) {
      return param_1 + 0x300;
    }
    if (param_2 < 0x756e6470) {
      if (param_2 == 0x73707873) {
        return param_1 + 0x27a;
      }
      if (param_2 < 0x73707874) {
        lVar1 = param_1 + 0x274;
        if (param_2 != 0x73627973) {
          if (0x73627973 < param_2) {
            lVar1 = 0;
            if (param_2 == 0x7370786f) {
              lVar1 = param_1 + 0x27e;
            }
            return lVar1;
          }
          lVar1 = param_1 + 0x272;
          if (param_2 != 0x73627873) {
            lVar1 = 0;
            if (param_2 == 0x7362796f) {
              lVar1 = param_1 + 0x278;
            }
            return lVar1;
          }
        }
      }
      else {
        lVar1 = param_1 + 0x284;
        if (param_2 != 0x7374726f) {
          if (0x7374726f < param_2) {
            lVar1 = 0;
            if (param_2 == 0x73747273) {
              lVar1 = param_1 + 0x282;
            }
            return lVar1;
          }
          lVar1 = param_1 + 0x280;
          if (param_2 != 0x7370796f) {
            lVar1 = 0;
            if (param_2 == 0x73707973) {
              lVar1 = param_1 + 0x27c;
            }
            return lVar1;
          }
        }
      }
    }
    else {
      if (param_2 == 0x76637273) {
        return param_1 + 0x20e;
      }
      if (param_2 < 0x76637274) {
        lVar1 = param_1 + 0x212;
        if (param_2 != 0x76636f66) {
          if (0x76636f66 < param_2) {
            lVar1 = 0;
            if (param_2 == 0x7663726e) {
              lVar1 = param_1 + 0x210;
            }
            return lVar1;
          }
          lVar1 = param_1 + 0x302;
          if (param_2 != 0x756e6473) {
            lVar1 = 0;
            if (param_2 == 0x76617363) {
              lVar1 = param_1 + 0x200;
            }
            return lVar1;
          }
        }
      }
      else {
        lVar1 = param_1 + 0x204;
        if ((param_2 != 0x766c6770) && (lVar1 = param_1 + 0x2e0, param_2 != 0x78686774)) {
          lVar1 = 0;
          if (param_2 == 0x76647363) {
            lVar1 = param_1 + 0x202;
          }
          return lVar1;
        }
      }
    }
  }
  return lVar1;
}



undefined8 ft_size_reset_iterator(long param_1,long param_2)

{
  (**(code **)(param_2 + 0x40))(*(undefined8 *)(param_1 + 0x10));
  return 0;
}



undefined8 tt_cvt_ready_iterator(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x224) = 0xffffffff;
  return 0;
}



undefined8
tt_get_var_blend(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c0);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      return 0;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(puVar1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(puVar1 + 4);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(puVar1 + 6);
    }
  }
  return 0;
}



long TT_MulFix14_long_long(int param_1,int param_2)

{
  return (long)param_1 * (long)param_2 + 0x2000 + ((long)param_1 * (long)param_2 >> 0x3f) >> 0xe;
}



undefined2 Current_Ppem(long param_1)

{
  return *(undefined2 *)(param_1 + 0x1d8);
}



undefined8 Read_CVT(long param_1,long param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x2b0) + param_2 * 8);
}



void Direct_Move_X(long *param_1,long param_2,ushort param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar3 = (ulong)param_3;
  iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
  if (iVar1 == 0x28) {
    if (*(char *)((long)param_1 + 1099) == '\0') goto LAB_00100789;
  }
  else if (iVar1 == 0x23) {
LAB_00100789:
    pbVar4 = (byte *)(uVar3 + *(long *)(param_2 + 0x28));
    plVar2 = (long *)(uVar3 * 0x10 + *(long *)(param_2 + 0x18));
    *plVar2 = *plVar2 + param_4;
    *pbVar4 = *pbVar4 | 8;
    return;
  }
  pbVar4 = (byte *)(uVar3 + *(long *)(param_2 + 0x28));
  *pbVar4 = *pbVar4 | 8;
  return;
}



void Direct_Move_Y(long *param_1,long param_2,ushort param_3,long param_4)

{
  long *plVar1;
  byte *pbVar2;
  
  if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
       (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0')) ||
     (*(char *)((long)param_1 + 0x44d) == '\0')) {
    plVar1 = (long *)((ulong)param_3 * 0x10 + *(long *)(param_2 + 0x18) + 8);
    *plVar1 = *plVar1 + param_4;
  }
  pbVar2 = (byte *)((ulong)param_3 + *(long *)(param_2 + 0x28));
  *pbVar2 = *pbVar2 | 0x10;
  return;
}



void Direct_Move_Orig_X(undefined8 param_1,long param_2,ushort param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)((ulong)param_3 * 0x10 + *(long *)(param_2 + 0x10));
  *plVar1 = *plVar1 + param_4;
  return;
}



void Direct_Move_Orig_Y(undefined8 param_1,long param_2,ushort param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)((ulong)param_3 * 0x10 + *(long *)(param_2 + 0x10) + 8);
  *plVar1 = *plVar1 + param_4;
  return;
}



long Round_None(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    param_2 = param_2 + lVar1;
    if (param_2 < 0) {
      param_2 = 0;
    }
    return param_2;
  }
  param_2 = param_2 - lVar1;
  if (0 < param_2) {
    param_2 = 0;
  }
  return param_2;
}



ulong Round_To_Grid(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    uVar2 = lVar1 + 0x20 + param_2 & 0xffffffffffffffc0;
    if ((long)uVar2 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar3 = (lVar1 - param_2) + 0x20U & 0xffffffffffffffc0;
  uVar2 = -uVar3;
  if (uVar2 != 0 && (long)uVar3 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



long Round_To_Half_Grid(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    lVar1 = (lVar1 + param_2 & 0xffffffffffffffc0U) + 0x20;
    if (lVar1 < 0) {
      lVar1 = 0x20;
    }
    return lVar1;
  }
  lVar1 = -0x20 - (lVar1 - param_2 & 0xffffffffffffffc0U);
  if (0 < lVar1) {
    lVar1 = -0x20;
  }
  return lVar1;
}



ulong Round_Down_To_Grid(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    uVar2 = lVar1 + param_2 & 0xffffffffffffffc0;
    if ((long)uVar2 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar3 = lVar1 - param_2 & 0xffffffffffffffc0;
  uVar2 = -uVar3;
  if (uVar2 != 0 && (long)uVar3 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



ulong Round_Up_To_Grid(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    uVar2 = lVar1 + 0x3f + param_2 & 0xffffffffffffffc0;
    if ((long)uVar2 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar3 = (lVar1 - param_2) + 0x3fU & 0xffffffffffffffc0;
  uVar2 = -uVar3;
  if (uVar2 != 0 && (long)uVar3 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



ulong Round_To_Double_Grid(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    uVar2 = lVar1 + 0x10 + param_2 & 0xffffffffffffffe0;
    if ((long)uVar2 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar3 = (lVar1 - param_2) + 0x10U & 0xffffffffffffffe0;
  uVar2 = -uVar3;
  if (uVar2 != 0 && (long)uVar3 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



long Round_Super(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x370);
  lVar1 = (*(long *)(param_1 + 0x378) - lVar3) + *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    lVar1 = (lVar1 + param_2 & -*(long *)(param_1 + 0x368)) + lVar3;
    if (-1 < lVar1) {
      lVar3 = lVar1;
    }
    return lVar3;
  }
  lVar1 = (lVar1 - param_2 & -*(long *)(param_1 + 0x368)) + lVar3;
  lVar2 = -lVar1;
  lVar3 = -lVar3;
  if (lVar2 == 0 || 0 < lVar1) {
    lVar3 = lVar2;
  }
  return lVar3;
}



long Round_Super_45(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x370);
  lVar2 = (*(long *)(param_1 + 0x378) - lVar1) + *(long *)(param_1 + 0x1f0 + (long)param_3 * 8);
  if (-1 < param_2) {
    lVar2 = lVar2 + param_2;
    lVar2 = (lVar2 - lVar2 % *(long *)(param_1 + 0x368)) + lVar1;
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  lVar2 = lVar2 - param_2;
  lVar2 = (lVar2 % *(long *)(param_1 + 0x368) - lVar2) - lVar1;
  lVar1 = -lVar1;
  if (lVar2 < 1) {
    lVar1 = lVar2;
  }
  return lVar1;
}



long Project(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)*(short *)(param_1 + 0x224) * (long)param_3 +
          (long)*(short *)(param_1 + 0x222) * (long)param_2;
  return (long)(int)(lVar1 + 0x2000 + (lVar1 >> 0x3f) >> 0xe);
}



long Dual_Project(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)*(short *)(param_1 + 0x220) * (long)param_3 +
          (long)*(short *)(param_1 + 0x21e) * (long)param_2;
  return (long)(int)(lVar1 + 0x2000 + (lVar1 >> 0x3f) >> 0xe);
}



undefined8 Project_x(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



undefined8 Project_y(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



void Compute_Funcs(long param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  long lVar4;
  
  sVar1 = *(short *)(param_1 + 0x226);
  sVar2 = *(short *)(param_1 + 0x222);
  lVar4 = (long)sVar2;
  if (sVar1 != 0x4000) {
    lVar4 = (long)*(short *)(param_1 + 0x224);
    if (*(short *)(param_1 + 0x228) != 0x4000) {
      lVar4 = (long)sVar2 * (long)sVar1 + *(short *)(param_1 + 0x228) * lVar4 >> 0xe;
    }
  }
  *(long *)(param_1 + 0x3f0) = lVar4;
  pcVar3 = Project_x;
  if ((sVar2 != 0x4000) && (pcVar3 = Project_y, *(short *)(param_1 + 0x224) != 0x4000)) {
    pcVar3 = Project;
  }
  *(code **)(param_1 + 0x400) = pcVar3;
  pcVar3 = Project_x;
  if ((*(short *)(param_1 + 0x21e) != 0x4000) &&
     (pcVar3 = Project_y, *(short *)(param_1 + 0x220) != 0x4000)) {
    pcVar3 = Dual_Project;
  }
  *(code **)(param_1 + 0x408) = pcVar3;
  *(code **)(param_1 + 0x418) = Direct_Move;
  *(code **)(param_1 + 0x420) = Direct_Move_Orig;
  if (lVar4 == 0x4000) {
    if (sVar1 == 0x4000) {
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(code **)(param_1 + 0x418) = Direct_Move_X;
      *(code **)(param_1 + 0x420) = Direct_Move_Orig_X;
      return;
    }
    if (*(short *)(param_1 + 0x228) == 0x4000) {
      *(code **)(param_1 + 0x418) = Direct_Move_Y;
      *(code **)(param_1 + 0x420) = Direct_Move_Orig_Y;
    }
  }
  else if (lVar4 + 0x3ffU < 0x7ff) {
    *(undefined8 *)(param_1 + 0x3f0) = 0x4000;
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



undefined8 SkipCode(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x290);
  lVar4 = (long)*(int *)(param_1 + 0x29c) + *(long *)(param_1 + 0x288);
  *(long *)(param_1 + 0x288) = lVar4;
  if (lVar4 < lVar3) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x280) + lVar4);
    *(byte *)(param_1 + 0x298) = bVar1;
    cVar2 = opcode_length[bVar1];
    iVar5 = (int)cVar2;
    *(int *)(param_1 + 0x29c) = iVar5;
    if (cVar2 < '\0') {
      if (lVar3 <= lVar4 + 1) goto LAB_00100d33;
      iVar5 = 2 - (uint)*(byte *)(*(long *)(param_1 + 0x280) + 1 + lVar4) * iVar5;
      *(int *)(param_1 + 0x29c) = iVar5;
    }
    if (iVar5 + lVar4 <= lVar3) {
      return 0;
    }
  }
LAB_00100d33:
  *(undefined4 *)(param_1 + 0x18) = 0x83;
  return 1;
}



void Move_Zp2_Point(long *param_1,ushort param_2,long param_3,long param_4,char param_5)

{
  long *plVar1;
  
  if (*(short *)((long)param_1 + 0x226) != 0) {
    if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
       (*(char *)((long)param_1 + 1099) == '\0')) {
      plVar1 = (long *)((ulong)param_2 * 0x10 + param_1[0x1c]);
      *plVar1 = *plVar1 + param_3;
    }
    if (param_5 != '\0') {
      *(byte *)((ulong)param_2 + param_1[0x1e]) = *(byte *)((ulong)param_2 + param_1[0x1e]) | 8;
    }
  }
  if ((short)param_1[0x45] != 0) {
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
       || (*(char *)((long)param_1 + 0x44d) == '\0')) {
      plVar1 = (long *)((ulong)param_2 * 0x10 + param_1[0x1c] + 8);
      *plVar1 = *plVar1 + param_4;
    }
    if (param_5 != '\0') {
      *(byte *)((ulong)param_2 + param_1[0x1e]) = *(byte *)((ulong)param_2 + param_1[0x1e]) | 0x10;
    }
  }
  return;
}



undefined8 tt_size_init(long param_1)

{
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x220) = 0xffffffffffffffff;
  return 0;
}



undefined8 tt_size_reset_height(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x1c) = 0;
  lVar1 = *param_1;
  param_1[0x12] = param_1[9];
  uVar2 = 0x97;
  param_1[0xc] = param_1[3];
  param_1[0xd] = param_1[4];
  param_1[0xe] = param_1[5];
  param_1[0xf] = param_1[6];
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[8];
  if (((short)param_1[3] != 0) && (*(short *)((long)param_1 + 0x62) != 0)) {
    if ((*(byte *)(lVar1 + 0x150) & 8) != 0) {
      lVar4 = (long)(int)param_1[0xe];
      lVar3 = *(short *)(lVar1 + 0x8a) * lVar4;
      param_1[0xf] = (long)(int)((int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + 0x20U &
                                0xffffffc0);
      lVar3 = *(short *)(lVar1 + 0x8c) * lVar4;
      param_1[0x10] =
           (long)(int)((int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0
                      );
      lVar4 = *(short *)(lVar1 + 0x8e) * lVar4;
      param_1[0x11] =
           (long)(int)((int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0
                      );
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 tt_driver_init(long param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0x28;
  return 0;
}



void tt_driver_done(void)

{
  return;
}



ulong tt_face_get_location(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  ushort *puVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x4f8);
  if (param_2 < uVar2) {
    lVar5 = *(long *)(param_1 + 0x500);
    uVar3 = *(ulong *)(param_1 + 0x4a8);
    if (*(short *)(param_1 + 0x186) == 0) {
      puVar8 = (ushort *)((ulong)(param_2 * 2) + lVar5);
      uVar4 = (ulong)(ushort)(*puVar8 << 8 | *puVar8 >> 8);
      uVar6 = uVar4;
      if (puVar8 + 2 <= (ushort *)(lVar5 + uVar2 * 2)) {
        uVar6 = (ulong)(ushort)(puVar8[1] << 8 | puVar8[1] >> 8);
      }
      uVar4 = uVar4 * 2;
      uVar6 = uVar6 * 2;
    }
    else {
      puVar7 = (uint *)((ulong)(param_2 * 4) + lVar5);
      uVar1 = *puVar7;
      uVar4 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18);
      if ((uint *)(lVar5 + uVar2 * 4) < puVar7 + 2) {
        lVar5 = 0;
        if (uVar4 <= uVar3) goto LAB_00100fdc;
        goto LAB_00100fda;
      }
      uVar1 = puVar7[1];
      uVar6 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18);
    }
    if (uVar4 <= uVar3) {
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
        if ((ulong)param_2 != uVar2 - 2) goto LAB_00100fda;
      }
      else {
        lVar5 = uVar3 - uVar4;
        if (uVar6 < uVar4) goto LAB_00100fdc;
      }
      lVar5 = uVar6 - uVar4;
      goto LAB_00100fdc;
    }
  }
LAB_00100fda:
  lVar5 = 0;
  uVar4 = 0;
LAB_00100fdc:
  *param_3 = lVar5;
  return uVar4;
}



int compare_ppem(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)*(byte *)*param_1 - (uint)*(byte *)*param_2;
}



undefined8 ft_var_apply_tuple(uint *param_1,ushort param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*param_1 == 0) {
    return 0x10000;
  }
  uVar6 = 0x10000;
  lVar5 = 0;
  do {
    while (lVar4 = *(long *)(param_3 + lVar5 * 8), lVar4 == 0) {
LAB_001010e4:
      lVar5 = lVar5 + 1;
      if (*param_1 <= (uint)lVar5) {
        return uVar6;
      }
    }
    lVar3 = *(long *)(*(long *)(param_1 + 4) + lVar5 * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar4 == lVar3) goto LAB_001010e4;
    if ((param_2 & 0x4000) == 0) {
      lVar2 = 0;
      if (lVar4 < 1) {
        lVar2 = lVar4;
      }
      if (lVar3 < lVar2) {
        return 0;
      }
      lVar2 = 0;
      if (-1 < lVar4) {
        lVar2 = lVar4;
      }
      if (lVar2 < lVar3) {
        return 0;
      }
LAB_001010dc:
      uVar6 = FT_MulDiv(uVar6,lVar3,lVar4);
      goto LAB_001010e4;
    }
    lVar2 = *(long *)(param_4 + lVar5 * 8);
    if (lVar3 <= lVar2) {
      return 0;
    }
    lVar1 = *(long *)(param_5 + lVar5 * 8);
    if (lVar1 <= lVar3) {
      return 0;
    }
    if (lVar4 <= lVar3) {
      lVar3 = lVar1 - lVar3;
      lVar4 = lVar1 - lVar4;
      goto LAB_001010dc;
    }
    lVar5 = lVar5 + 1;
    uVar6 = FT_MulDiv(uVar6,lVar3 - lVar2,lVar4 - lVar2);
    if (*param_1 <= (uint)lVar5) {
      return uVar6;
    }
  } while( true );
}



void Direct_Move_Orig(long param_1,long param_2,ushort param_3,undefined8 param_4)

{
  short sVar1;
  long lVar2;
  long lVar3;
  
  if ((long)*(short *)(param_1 + 0x226) == 0) {
    sVar1 = *(short *)(param_1 + 0x228);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + (ulong)param_3 * 0x10);
    lVar3 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x226),*(undefined8 *)(param_1 + 0x3f0));
    sVar1 = *(short *)(param_1 + 0x228);
    *(long *)(*(long *)(param_2 + 0x10) + (ulong)param_3 * 0x10) = lVar3 + lVar2;
  }
  if ((long)sVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 8 + (ulong)param_3 * 0x10);
  lVar3 = FT_MulDiv(param_4,(long)sVar1,*(undefined8 *)(param_1 + 0x3f0));
  *(long *)(*(long *)(param_2 + 0x10) + 8 + (ulong)param_3 * 0x10) = lVar3 + lVar2;
  return;
}



void Direct_Move(long *param_1,long param_2,ushort param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  
  if ((long)*(short *)((long)param_1 + 0x226) == 0) goto LAB_001012a5;
  iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
  if (iVar1 == 0x28) {
    if (*(char *)((long)param_1 + 1099) == '\0') goto LAB_0010132d;
  }
  else if (iVar1 == 0x23) {
LAB_0010132d:
    lVar5 = (ulong)param_3 * 0x10;
    lVar2 = *(long *)(*(long *)(param_2 + 0x18) + lVar5);
    lVar4 = FT_MulDiv(param_4,(long)*(short *)((long)param_1 + 0x226),param_1[0x7e]);
    *(long *)(*(long *)(param_2 + 0x18) + lVar5) = lVar4 + lVar2;
  }
  pbVar3 = (byte *)(*(long *)(param_2 + 0x28) + (ulong)param_3);
  *pbVar3 = *pbVar3 | 8;
LAB_001012a5:
  if ((long)(short)param_1[0x45] != 0) {
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
       || (*(char *)((long)param_1 + 0x44d) == '\0')) {
      lVar5 = (ulong)param_3 * 0x10;
      lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 8 + lVar5);
      lVar4 = FT_MulDiv(param_4,(long)(short)param_1[0x45],param_1[0x7e]);
      *(long *)(*(long *)(param_2 + 0x18) + 8 + lVar5) = lVar4 + lVar2;
    }
    pbVar3 = (byte *)((ulong)param_3 + *(long *)(param_2 + 0x28));
    *pbVar3 = *pbVar3 | 0x10;
  }
  return;
}



void TT_Done_Context(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1[1];
  *(undefined4 *)param_1[0x31] = 0;
  ft_mem_free(uVar1,*(undefined8 *)param_1[3]);
  *(undefined8 *)param_1[3] = 0;
  uVar2 = *(undefined8 *)param_1[0x2c];
  *(undefined8 *)(param_1[2] + 8) = 0;
  ft_mem_free(uVar1,uVar2);
  uVar2 = *(undefined8 *)param_1[0x36];
  *(undefined8 *)param_1[0x2c] = 0;
  *(undefined8 *)(param_1[0x2b] + 8) = 0;
  ft_mem_free(uVar1,uVar2);
  uVar2 = *(undefined8 *)(param_1[0x30] + 8);
  *(undefined2 *)(param_1[0x35] + 8) = 0;
  *(undefined8 *)param_1[0x36] = 0;
  ft_mem_free(uVar1,uVar2);
  uVar2 = *(undefined8 *)param_1[0x2d];
  *(undefined8 *)(param_1[0x30] + 8) = 0;
  *(undefined8 *)param_1[0x30] = 0;
  ft_mem_free(uVar1,uVar2);
  *(undefined8 *)param_1[0x2d] = 0;
  *(undefined4 *)(param_1[0x2c] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  ft_mem_free(uVar1,param_1);
  return;
}



void tt_glyphzone_done(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    ft_mem_free(lVar1,param_1[6]);
    param_1[6] = 0;
    ft_mem_free(lVar1,param_1[5]);
    param_1[5] = 0;
    ft_mem_free(lVar1,param_1[3]);
    param_1[3] = 0;
    ft_mem_free(lVar1,param_1[2]);
    param_1[2] = 0;
    ft_mem_free(lVar1,param_1[4]);
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void tt_size_done_bytecode(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0xb8);
  if (param_1[0x43] != 0) {
    TT_Done_Context();
    param_1[0x43] = 0;
  }
  ft_mem_free(uVar1,param_1[0x38]);
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  ft_mem_free(uVar1,param_1[0x3a]);
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  tt_glyphzone_done(param_1 + 0x3b);
  ft_mem_free(uVar1,param_1[0x21]);
  param_1[0x21] = 0;
  ft_mem_free(uVar1,param_1[0x23]);
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x44] = -1;
  return;
}



void tt_size_done(long param_1)

{
  tt_size_done_bytecode();
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



void tt_var_done_delta_set_index_map(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  ft_mem_free(uVar1,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



void tt_var_done_item_variation_store(long param_1,uint *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    if (*param_2 != 0) {
      lVar4 = 0;
      do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 * 0x20;
        ft_mem_free(uVar1,*(undefined8 *)(lVar3 + 8 + lVar4));
        lVar3 = *(long *)(param_2 + 2);
        *(undefined8 *)(lVar3 + lVar4 + 8) = 0;
        ft_mem_free(uVar1,*(undefined8 *)(lVar3 + lVar4 + 0x10));
        lVar3 = *(long *)(param_2 + 2);
        *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
        lVar4 = lVar2;
      } while ((uint)lVar2 < *param_2);
    }
    ft_mem_free(uVar1);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  lVar3 = *(long *)(param_2 + 6);
  if (lVar3 != 0) {
    if (param_2[5] != 0) {
      lVar4 = 0;
      do {
        ft_mem_free(uVar1,*(undefined8 *)(lVar3 + lVar4 * 8));
        lVar3 = *(long *)(param_2 + 6);
        *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < param_2[5]);
    }
    ft_mem_free(uVar1);
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}



void tt_construct_ps_name(long param_1)

{
  ft_mem_free(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x4a0));
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  return;
}



int TT_Load_Context(long *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  long lVar2;
  long *plVar3;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar2 = param_1[2];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    lVar4 = *(long *)(param_3 + 0xb8);
    lVar5 = *(long *)(param_3 + 0xc0);
    lVar6 = *(long *)(param_3 + 0x98);
    lVar7 = *(long *)(param_3 + 0xa0);
    lVar8 = *(long *)(param_3 + 0xa8);
    lVar9 = *(long *)(param_3 + 0xb0);
    param_1[0x5b] = *(long *)(param_3 + 0x100);
    param_1[0x5d] = *(long *)(param_3 + 0x110);
    param_1[0x5c] = *(long *)(param_3 + 0x108);
    param_1[0x5e] = *(long *)(param_3 + 0x118);
    lVar18 = *(long *)(param_3 + 0xf8);
    param_1[0x3d] = lVar4;
    param_1[0x3e] = lVar5;
    param_1[0x31] = lVar18;
    plVar3 = *(long **)(param_3 + 0x58);
    param_1[0x39] = lVar6;
    param_1[0x3a] = lVar7;
    lVar18 = *(long *)(param_3 + 200);
    lVar4 = *(long *)(param_3 + 0xd0);
    lVar5 = *plVar3;
    lVar6 = plVar3[1];
    param_1[0x3b] = lVar8;
    param_1[0x3c] = lVar9;
    lVar7 = *(long *)(param_3 + 0xd8);
    lVar8 = *(long *)(param_3 + 0xe0);
    param_1[0x3f] = lVar18;
    param_1[0x40] = lVar4;
    param_1[0x32] = lVar5;
    param_1[0x33] = lVar6;
    lVar18 = plVar3[2];
    lVar4 = plVar3[3];
    param_1[0x41] = lVar7;
    param_1[0x42] = lVar8;
    lVar5 = *(long *)(param_3 + 0x128);
    lVar6 = *(long *)(param_3 + 0x130);
    param_1[0x34] = lVar18;
    param_1[0x35] = lVar4;
    lVar18 = plVar3[5];
    param_1[0x36] = plVar3[4];
    param_1[0x37] = lVar18;
    param_1[0x38] = plVar3[6];
    param_1[0x5f] = *(long *)(param_3 + 0x120);
    param_1[99] = lVar5;
    param_1[100] = lVar6;
    lVar4 = *(long *)(param_3 + 0x140);
    lVar18 = *(long *)(param_3 + 0x1b8);
    lVar5 = *(long *)(param_3 + 0x148);
    lVar6 = *(long *)(param_3 + 0x150);
    lVar7 = *(long *)(param_3 + 0x158);
    lVar8 = *(long *)(param_3 + 0x160);
    lVar9 = *(long *)(param_3 + 0x168);
    lVar10 = *(long *)(param_3 + 0x170);
    lVar11 = *(long *)(param_3 + 0x178);
    lVar12 = *(long *)(param_3 + 0x180);
    param_1[0x65] = *(long *)(param_3 + 0x138);
    param_1[0x66] = lVar4;
    lVar4 = *(long *)(param_3 + 0x188);
    lVar13 = *(long *)(param_3 + 400);
    lVar14 = *(long *)(param_3 + 0x198);
    lVar15 = *(long *)(param_3 + 0x1a0);
    param_1[0x67] = lVar5;
    param_1[0x68] = lVar6;
    lVar5 = *(long *)(param_3 + 0x1a8);
    lVar6 = *(long *)(param_3 + 0x1b0);
    param_1[0x55] = lVar18;
    lVar18 = *(long *)(param_3 + 0x1c0);
    lVar16 = *(long *)(param_3 + 0x1d8);
    lVar17 = *(long *)(param_3 + 0x1e0);
    param_1[0x43] = lVar7;
    param_1[0x44] = lVar8;
    param_1[0x45] = lVar9;
    param_1[0x46] = lVar10;
    lVar7 = *(long *)(param_3 + 0x1e8);
    lVar8 = *(long *)(param_3 + 0x1f0);
    lVar9 = *(long *)(param_3 + 0x1f8);
    lVar10 = *(long *)(param_3 + 0x200);
    param_1[0x56] = lVar18;
    uVar1 = *(undefined2 *)(param_3 + 0x1c8);
    param_1[0x47] = lVar11;
    param_1[0x48] = lVar12;
    lVar11 = *(long *)(param_3 + 0x208);
    lVar12 = *(long *)(param_3 + 0x210);
    *(undefined2 *)(param_1 + 0x69) = uVar1;
    lVar18 = *(long *)(param_3 + 0x1d0);
    param_1[0x49] = lVar4;
    param_1[0x4a] = lVar13;
    param_1[0x6a] = lVar18;
    param_1[0x4b] = lVar14;
    param_1[0x4c] = lVar15;
    param_1[0x4d] = lVar5;
    param_1[0x4e] = lVar6;
    param_1[0x29] = lVar16;
    param_1[0x2a] = lVar17;
    param_1[0x2b] = lVar7;
    param_1[0x2c] = lVar8;
    param_1[0x2d] = lVar9;
    param_1[0x2e] = lVar10;
    param_1[0x2f] = lVar11;
    param_1[0x30] = lVar12;
    *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xd) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xf) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x11) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x15) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x17) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x19) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1b) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1f) = (undefined1  [16])0x0;
  }
  lVar18 = ft_mem_qrealloc(lVar2,8,param_1[5],(ulong)*(ushort *)(param_2 + 0x1e4) + 0x20,param_1[6],
                           &local_34);
  param_1[6] = lVar18;
  if (local_34 == 0) {
    param_1[5] = (ulong)*(ushort *)(param_2 + 0x1e4) + 0x20;
    ft_mem_free(lVar2,param_1[0x5a]);
    lVar6 = param_1[0x23];
    lVar7 = param_1[0x24];
    lVar2 = param_1[0x25];
    lVar18 = param_1[0x26];
    *(undefined4 *)((long)param_1 + 0x114) = 0;
    lVar4 = param_1[0x27];
    lVar5 = param_1[0x28];
    lVar8 = param_1[0x21];
    lVar9 = param_1[0x22];
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
    param_1[0x11] = lVar8;
    param_1[0x12] = lVar9;
    param_1[0x13] = lVar6;
    param_1[0x14] = lVar7;
    param_1[0x15] = lVar2;
    param_1[0x16] = lVar18;
    param_1[0x17] = lVar4;
    param_1[0x18] = lVar5;
    param_1[0x19] = lVar8;
    param_1[0x1a] = lVar9;
    param_1[0x1b] = lVar6;
    param_1[0x1c] = lVar7;
    param_1[0x1d] = lVar2;
    param_1[0x1e] = lVar18;
    param_1[0x1f] = lVar4;
    param_1[0x20] = lVar5;
    param_1[9] = lVar8;
    param_1[10] = lVar9;
    param_1[0xb] = lVar6;
    param_1[0xc] = lVar7;
    param_1[0xd] = lVar2;
    param_1[0xe] = lVar18;
    param_1[0xf] = lVar4;
    param_1[0x10] = lVar5;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tt_size_run_prep(long *param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
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
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  ulong uVar19;
  
  lVar1 = *param_1;
  lVar2 = param_1[0x17];
  if (param_1[0x37] != 0) {
    lVar3 = *(long *)(lVar1 + 0x480);
    uVar19 = 0;
    lVar4 = param_1[0x38];
    do {
      lVar18 = (long)*(int *)(lVar3 + uVar19 * 4) * (long)(int)(lVar2 >> 6);
      *(long *)(lVar4 + uVar19 * 8) =
           (long)(int)((ulong)(lVar18 + 0x8000 + (lVar18 >> 0x3f)) >> 0x10);
      uVar19 = (ulong)((int)uVar19 + 1);
    } while (uVar19 < (ulong)param_1[0x37]);
  }
  lVar2 = param_1[0x43];
  iVar16 = TT_Load_Context(lVar2,lVar1,param_1);
  if (iVar16 == 0) {
    *(undefined1 *)(lVar2 + 0x380) = 0;
    *(undefined1 *)(lVar2 + 0x3e9) = param_2;
    lVar3 = *(long *)(lVar1 + 0x468);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    uVar5 = *(undefined8 *)(lVar1 + 0x470);
    *(undefined4 *)(lVar2 + 0x300) = 0;
    *(undefined8 *)(lVar2 + 0x328) = uVar5;
    *(long *)(lVar2 + 0x330) = lVar3;
    *(undefined8 *)(lVar2 + 0x338) = 0;
    *(undefined8 *)(lVar2 + 0x340) = 0;
    uVar17 = 0;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar2 + 0x280) = uVar5;
      *(long *)(lVar2 + 0x290) = lVar3;
      *(undefined8 *)(lVar2 + 0x288) = 0;
      *(undefined4 *)(lVar2 + 0x27c) = 2;
      uVar17 = (**(code **)(lVar1 + 0x488))(lVar2);
    }
    *(undefined4 *)((long)param_1 + 0x224) = uVar17;
    *(undefined2 *)(lVar2 + 0x228) = 0;
    *(undefined8 *)(lVar2 + 0x218) = 0x4000000000000000;
    lVar1 = *(long *)(lVar2 + 0x238);
    lVar3 = *(long *)(lVar2 + 0x240);
    *(undefined8 *)(lVar2 + 0x220) = 0x4000000040000000;
    lVar4 = *(long *)(lVar2 + 0x248);
    lVar18 = *(long *)(lVar2 + 0x250);
    *(undefined4 *)(lVar2 + 0x26c) = 0x10001;
    lVar6 = *(long *)(lVar2 + 0x218);
    lVar7 = *(long *)(lVar2 + 0x220);
    *(undefined2 *)(lVar2 + 0x270) = 1;
    lVar8 = *(long *)(lVar2 + 600);
    lVar9 = *(long *)(lVar2 + 0x260);
    *(undefined8 *)(lVar2 + 0x230) = 1;
    lVar10 = *(long *)(lVar2 + 0x268);
    lVar11 = *(long *)(lVar2 + 0x270);
    lVar12 = *(long *)(lVar2 + 0x228);
    lVar13 = *(long *)(lVar2 + 0x230);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar2 + 0x2d8);
    uVar17 = *(undefined4 *)(lVar2 + 0x2e8);
    param_1[0x2b] = lVar6;
    param_1[0x2c] = lVar7;
    lVar6 = *(long *)(lVar2 + 0x318);
    lVar7 = *(long *)(lVar2 + 800);
    param_1[0x2d] = lVar12;
    param_1[0x2e] = lVar13;
    lVar12 = *(long *)(lVar2 + 0x328);
    lVar13 = *(long *)(lVar2 + 0x330);
    lVar14 = *(long *)(lVar2 + 0x338);
    lVar15 = *(long *)(lVar2 + 0x340);
    *(undefined4 *)(param_1 + 0x22) = uVar17;
    param_1[0x2f] = lVar1;
    param_1[0x30] = lVar3;
    param_1[0x31] = lVar4;
    param_1[0x32] = lVar18;
    param_1[0x33] = lVar8;
    param_1[0x34] = lVar9;
    param_1[0x35] = lVar10;
    param_1[0x36] = lVar11;
    lVar1 = *(long *)(lVar2 + 0x2f8);
    param_1[0x25] = lVar6;
    param_1[0x26] = lVar7;
    param_1[0x24] = lVar1;
    param_1[0x27] = lVar12;
    param_1[0x28] = lVar13;
    param_1[0x29] = lVar14;
    param_1[0x2a] = lVar15;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 TT_Hint_Glyph(long *param_1,char param_2)

{
  ulong *puVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  void *__dest;
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
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  void *__src;
  ulong uVar19;
  
  plVar4 = (long *)param_1[0x22];
  uVar19 = (ulong)*(uint *)(plVar4 + 0x59);
  lVar5 = *(long *)(*param_1 + 0xb0);
  if (uVar19 != 0) {
    memcpy((void *)param_1[0x1c],(void *)param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4
          );
  }
  lVar16 = param_1[1];
  __src = (void *)param_1[0x1d];
  lVar17 = *(long *)(lVar16 + 0x160);
  lVar6 = *(long *)(lVar16 + 0x168);
  lVar7 = *(long *)(lVar16 + 0x170);
  lVar8 = *(long *)(lVar16 + 0x178);
  lVar9 = *(long *)(lVar16 + 0x180);
  lVar10 = *(long *)(lVar16 + 0x188);
  lVar11 = *(long *)(lVar16 + 400);
  lVar12 = *(long *)(lVar16 + 0x198);
  lVar13 = *(long *)(lVar16 + 0x1a0);
  lVar14 = *(long *)(lVar16 + 0x1a8);
  lVar15 = *(long *)(lVar16 + 0x1b0);
  plVar4[0x43] = *(long *)(lVar16 + 0x158);
  plVar4[0x44] = lVar17;
  plVar4[0x45] = lVar6;
  plVar4[0x46] = lVar7;
  plVar4[0x47] = lVar8;
  plVar4[0x48] = lVar9;
  plVar4[0x49] = lVar10;
  plVar4[0x4a] = lVar11;
  plVar4[0x4b] = lVar12;
  plVar4[0x4c] = lVar13;
  plVar4[0x4d] = lVar14;
  plVar4[0x4e] = lVar15;
  lVar17 = _UNK_001118f8;
  if (param_2 == '\0') {
    lVar17 = *(long *)(*(long *)(lVar16 + 0x58) + 0x10);
    plVar4[0x33] = *(long *)(*(long *)(lVar16 + 0x58) + 8);
    plVar4[0x34] = lVar17;
  }
  else {
    uVar2 = *(ushort *)((long)param_1 + 0xdc);
    __dest = (void *)param_1[0x1e];
    plVar4[0x33] = __LC2;
    plVar4[0x34] = lVar17;
    memcpy(__dest,__src,(ulong)uVar2 << 4);
    __src = (void *)param_1[0x1d];
  }
  lVar16 = (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
  puVar1 = (ulong *)((long)__src + lVar16 + -0x40);
  *puVar1 = *puVar1 + 0x20 & 0xffffffffffffffc0;
  puVar1 = (ulong *)((long)__src + lVar16 + -0x30);
  *puVar1 = *puVar1 + 0x20 & 0xffffffffffffffc0;
  *(ulong *)((long)__src + lVar16 + -0x18) =
       *(long *)((long)__src + lVar16 + -0x18) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)((long)__src + lVar16 + -8) =
       *(long *)((long)__src + lVar16 + -8) + 0x20U & 0xffffffffffffffc0;
  if (uVar19 == 0) {
    iVar3 = *(int *)(lVar5 + 0x78);
  }
  else {
    *(char *)(plVar4 + 0x7d) = param_2;
    lVar16 = param_1[0x1a];
    lVar17 = param_1[0x1b];
    plVar4[0x68] = uVar19;
    plVar4[0x21] = lVar16;
    plVar4[0x22] = lVar17;
    lVar6 = param_1[0x1c];
    lVar7 = param_1[0x1d];
    plVar4[0x67] = plVar4[0x5a];
    plVar4[0x23] = lVar6;
    plVar4[0x24] = lVar7;
    lVar8 = param_1[0x1e];
    lVar9 = param_1[0x1f];
    plVar4[0x25] = lVar8;
    plVar4[0x26] = lVar9;
    lVar10 = param_1[0x20];
    lVar11 = param_1[0x21];
    plVar4[0x50] = plVar4[0x5a];
    *(undefined2 *)(plVar4 + 0x4e) = 1;
    *(undefined4 *)((long)plVar4 + 0x226) = 0x4000;
    plVar4[0x52] = uVar19;
    plVar4[0x51] = 0;
    *(undefined4 *)((long)plVar4 + 0x27c) = 3;
    *(undefined4 *)((long)plVar4 + 0x26c) = 0x10001;
    *(undefined4 *)((long)plVar4 + 0x222) = 0x4000;
    plVar4[0x27] = lVar10;
    plVar4[0x28] = lVar11;
    plVar4[9] = lVar16;
    plVar4[10] = lVar17;
    plVar4[0xb] = lVar6;
    plVar4[0xc] = lVar7;
    plVar4[0xd] = lVar8;
    plVar4[0xe] = lVar9;
    plVar4[0xf] = lVar10;
    plVar4[0x10] = lVar11;
    plVar4[0x11] = lVar16;
    plVar4[0x12] = lVar17;
    plVar4[0x13] = lVar6;
    plVar4[0x14] = lVar7;
    plVar4[0x15] = lVar8;
    plVar4[0x16] = lVar9;
    plVar4[0x17] = lVar10;
    plVar4[0x18] = lVar11;
    plVar4[0x19] = lVar16;
    plVar4[0x1a] = lVar17;
    plVar4[0x1b] = lVar6;
    plVar4[0x1c] = lVar7;
    plVar4[0x1d] = lVar8;
    plVar4[0x1e] = lVar9;
    plVar4[0x1f] = lVar10;
    plVar4[0x20] = lVar11;
    *(undefined4 *)((long)plVar4 + 0x21e) = 0x4000;
    *(undefined4 *)(plVar4 + 0x48) = 1;
    plVar4[0x46] = 1;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 0x60) = 0;
    uVar18 = (**(code **)(*plVar4 + 0x488))(plVar4);
    if (((int)uVar18 != 0) && (*(char *)((long)plVar4 + 0x3e9) != '\0')) {
      return uVar18;
    }
    **(byte **)(param_1[3] + 0x70) = (char)plVar4[0x4d] << 5 | **(byte **)(param_1[3] + 0x70) | 4;
    iVar3 = *(int *)(lVar5 + 0x78);
  }
  if ((iVar3 != 0x28) || (*(char *)((long)plVar4 + 1099) == '\0')) {
    lVar5 = param_1[0x1d];
    lVar17 = (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
    plVar4 = (long *)(lVar5 + -0x40 + lVar17);
    lVar16 = plVar4[1];
    param_1[0xe] = *plVar4;
    param_1[0xf] = lVar16;
    plVar4 = (long *)(lVar5 + -0x30 + lVar17);
    lVar16 = plVar4[1];
    param_1[0x10] = *plVar4;
    param_1[0x11] = lVar16;
    plVar4 = (long *)(lVar5 + -0x20 + lVar17);
    lVar16 = plVar4[1];
    param_1[0x27] = *plVar4;
    param_1[0x28] = lVar16;
    plVar4 = (long *)(lVar5 + -0x10 + lVar17);
    lVar5 = plVar4[1];
    param_1[0x29] = *plVar4;
    param_1[0x2a] = lVar5;
  }
  return 0;
}



void TT_Access_Glyph_Frame(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  iVar3 = FT_Stream_Seek(lVar1,param_3);
  if (iVar3 == 0) {
    iVar3 = FT_Stream_EnterFrame(lVar1,param_4);
    if (iVar3 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(param_1 + 0x160) = uVar2;
      return;
    }
  }
  return;
}



void TT_Forget_Glyph_Frame(long param_1)

{
  FT_Stream_ExitFrame(*(undefined8 *)(param_1 + 0x30));
  return;
}



long ft_var_readpackedpoints(long param_1,ulong param_2,uint *param_3)

{
  long lVar1;
  short *psVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  short sVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  byte local_5c;
  int local_44;
  long local_40;
  
  lVar12 = -1;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  uVar7 = FT_Stream_GetByte();
  uVar9 = (ulong)(byte)uVar7;
  uVar13 = uVar7 & 0xff;
  if ((uVar7 & 0xff) != 0) {
    if ((char)(byte)uVar7 < '\0') {
      bVar4 = FT_Stream_GetByte(param_1);
      uVar13 = (uint)bVar4 | (uVar7 & 0x7f) << 8;
      uVar9 = (ulong)uVar13;
    }
    if ((param_2 < uVar9) ||
       (lVar12 = ft_mem_qrealloc(uVar3,2,0,uVar13 + 1,0,&local_44), local_44 != 0)) {
      lVar12 = 0;
    }
    else {
      *param_3 = uVar13;
      if (uVar13 != 0) {
        sVar11 = 0;
        uVar9 = 0;
LAB_00102180:
        do {
          iVar8 = (int)uVar9;
          bVar4 = FT_Stream_GetByte(param_1);
          psVar2 = (short *)(lVar12 + uVar9 * 2);
          if ((char)bVar4 < '\0') {
            local_5c = bVar4 & 0x7f;
            sVar6 = FT_Stream_GetUShort(param_1);
            sVar11 = sVar11 + sVar6;
            *psVar2 = sVar11;
            if (local_5c != 0) {
              uVar10 = (ulong)(iVar8 + 2);
              lVar1 = uVar9 + 3;
              do {
                sVar6 = FT_Stream_GetUShort(param_1);
                uVar9 = uVar10 & 0xffffffff;
                sVar11 = sVar11 + sVar6;
                *(short *)(lVar12 + -2 + uVar10 * 2) = sVar11;
                if (uVar13 <= (uint)uVar10) goto LAB_00102203;
                uVar10 = uVar10 + 1;
              } while (lVar1 + (ulong)((bVar4 & 0x7f) - 1) != uVar10);
              goto LAB_00102180;
            }
          }
          else {
            bVar5 = FT_Stream_GetByte(param_1);
            sVar11 = sVar11 + (ushort)bVar5;
            *psVar2 = sVar11;
            if (bVar4 != 0) {
              uVar10 = (ulong)(iVar8 + 2);
              lVar1 = uVar9 + 3;
              do {
                bVar5 = FT_Stream_GetByte(param_1);
                uVar9 = uVar10 & 0xffffffff;
                sVar11 = sVar11 + (ushort)bVar5;
                *(short *)(lVar12 + -2 + uVar10 * 2) = sVar11;
                if (uVar13 <= (uint)uVar10) goto LAB_00102203;
                uVar10 = uVar10 + 1;
              } while (lVar1 + (ulong)(bVar4 - 1) != uVar10);
              goto LAB_00102180;
            }
          }
          uVar9 = (ulong)(iVar8 + 1U);
        } while (iVar8 + 1U < uVar13);
      }
    }
  }
LAB_00102203:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar12;
}



long ft_var_readpackeddeltas(long param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long in_FS_OFFSET;
  uint local_64;
  long local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_58 = ft_mem_qrealloc(uVar1,8,0,param_3,0,&local_44);
  if (local_44 == 0) {
    local_64 = 0;
    uVar9 = 0;
LAB_00102358:
    do {
      if (param_3 <= uVar9) goto LAB_00102408;
      if (param_2 <= local_64) break;
      uVar4 = FT_Stream_GetByte(param_1);
      uVar6 = uVar4 & 0x3f;
      uVar7 = local_64 + 1;
      if ((char)uVar4 < '\0') {
        uVar4 = 0;
        puVar5 = (undefined8 *)(local_58 + (ulong)uVar9 * 8);
        do {
          uVar4 = uVar4 + 1;
          *puVar5 = 0;
          uVar9 = uVar9 + 1;
          puVar5 = puVar5 + 1;
          local_64 = uVar7;
          if (uVar6 < uVar4) break;
        } while (uVar9 < param_3);
joined_r0x001023e9:
        if (uVar4 <= uVar6) break;
        goto LAB_00102358;
      }
      if ((uVar4 & 0x40) != 0) {
        local_64 = local_64 + 3 + uVar6 * 2;
        if (local_64 <= param_2) {
          uVar4 = 0;
          plVar8 = (long *)(local_58 + (ulong)uVar9 * 8);
          do {
            uVar4 = uVar4 + 1;
            uVar9 = uVar9 + 1;
            sVar3 = FT_Stream_GetUShort(param_1);
            *plVar8 = (long)sVar3 << 0x10;
            if (uVar6 < uVar4) goto LAB_00102358;
            plVar8 = plVar8 + 1;
          } while (uVar9 < param_3);
          goto joined_r0x001023e9;
        }
        break;
      }
      local_64 = local_64 + 2 + uVar6;
      if (param_2 < local_64) break;
      uVar4 = 0;
      plVar8 = (long *)(local_58 + (ulong)uVar9 * 8);
      do {
        uVar4 = uVar4 + 1;
        uVar9 = uVar9 + 1;
        cVar2 = FT_Stream_GetByte(param_1);
        *plVar8 = (long)cVar2 << 0x10;
        if (uVar6 < uVar4) goto LAB_00102358;
        plVar8 = plVar8 + 1;
      } while (uVar9 < param_3);
    } while (uVar6 < uVar4);
    ft_mem_free(uVar1,local_58);
  }
  local_58 = 0;
LAB_00102408:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_58;
}



long Current_Ratio(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  ulong extraout_RDX;
  
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return *(long *)(param_1 + 0x1e0);
  }
  sVar4 = *(short *)(param_1 + 0x224);
  if (sVar4 == 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1c8);
    return *(long *)(param_1 + 0x1c8);
  }
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (*(short *)(param_1 + 0x222) != 0) {
    iVar1 = TT_MulFix14_long_long(*(undefined4 *)(param_1 + 0x1c8));
    iVar2 = TT_MulFix14_long_long(extraout_RDX & 0xffffffff,(int)sVar4);
    lVar3 = FT_Hypot((long)iVar1,(long)iVar2);
  }
  *(long *)(param_1 + 0x1e0) = lVar3;
  return lVar3;
}



ulong TT_Load_Simple_Glyph(long param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  short *psVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  long lVar9;
  undefined8 uVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  void *__dest;
  ulong __n;
  short *psVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  byte *pbVar24;
  ushort *puVar25;
  ushort *puVar26;
  int iVar27;
  long in_FS_OFFSET;
  byte bVar28;
  uint local_44;
  long local_40;
  
  bVar28 = 0;
  uVar6 = *(ushort *)(param_1 + 0x3c);
  iVar27 = (int)(short)uVar6;
  puVar25 = *(ushort **)(param_1 + 0x158);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = *(ushort **)(param_1 + 0x160);
  lVar9 = *(long *)(param_1 + 0x18);
  if (uVar6 == 0) {
    local_44 = 0;
    if (puVar25 + 1 <= puVar8) {
LAB_0010269e:
      iVar27 = 0;
      iVar14 = -1;
LAB_001026b0:
      if ((uint)(*(short *)(lVar9 + 0x1a) + 4 + (int)*(short *)(lVar9 + 0x62) + iVar27) <=
          *(uint *)(lVar9 + 8)) goto LAB_001026c7;
      uVar15 = FT_GlyphLoader_CheckPoints(lVar9,iVar14 + 5,0);
      local_44 = (uint)uVar15;
      if (local_44 != 0) goto LAB_001025df;
LAB_001026cf:
      uVar7 = *puVar25;
      uVar13 = uVar7 << 8 | uVar7 >> 8;
      __n = (ulong)uVar13;
      uVar15 = 0x16;
      puVar26 = (ushort *)((long)(puVar25 + 1) + __n);
      if (puVar26 <= puVar8) {
        if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
          lVar21 = *(long *)(param_1 + 0x110);
          uVar10 = *(undefined8 *)(lVar21 + 0x10);
          if (*(int *)(lVar21 + 0x2c8) != 0) {
            ft_mem_free(uVar10,*(undefined8 *)(lVar21 + 0x2d0));
            *(undefined8 *)(lVar21 + 0x2d0) = 0;
          }
          *(undefined4 *)(lVar21 + 0x2c8) = 0;
          if (uVar7 != 0) {
            __dest = (void *)ft_mem_qrealloc(uVar10,1,0,__n,0,&local_44);
            *(void **)(lVar21 + 0x2d0) = __dest;
            uVar15 = (ulong)local_44;
            if (local_44 != 0) goto LAB_001025df;
            memcpy(__dest,puVar25 + 1,__n);
            *(uint *)(lVar21 + 0x2c8) = (uint)uVar13;
          }
        }
        pbVar24 = *(byte **)(lVar9 + 0x70) + iVar27;
        pbVar20 = *(byte **)(lVar9 + 0x70);
        while (puVar25 = puVar26, pbVar19 = pbVar20, pbVar19 < pbVar24) {
          puVar26 = (ushort *)((long)puVar25 + 1);
          if (puVar8 < puVar26) goto LAB_001025da;
          bVar4 = (byte)*puVar25;
          pbVar18 = pbVar19 + 1;
          *pbVar19 = bVar4;
          pbVar20 = pbVar18;
          if ((bVar4 & 8) != 0) {
            puVar25 = puVar25 + 1;
            if (puVar8 < puVar25) goto LAB_001025da;
            bVar5 = *(byte *)puVar26;
            pbVar1 = pbVar18 + bVar5;
            if (pbVar24 < pbVar1) goto LAB_001025da;
            puVar26 = puVar25;
            if (bVar5 != 0) {
              lVar21 = (ulong)bVar4 * 0x101010101010101;
              pbVar20 = pbVar1;
              if (bVar5 < 8) {
                if ((bVar5 & 4) == 0) {
                  if ((bVar5 != 0) && (*pbVar18 = (byte)lVar21, (bVar5 & 2) != 0)) {
                    *(short *)(pbVar19 + ((ulong)bVar5 - 1)) = (short)lVar21;
                  }
                }
                else {
                  *(int *)pbVar18 = (int)lVar21;
                  *(int *)(pbVar19 + ((ulong)bVar5 - 3)) = (int)lVar21;
                }
              }
              else {
                *(long *)pbVar18 = lVar21;
                *(long *)(pbVar19 + ((ulong)bVar5 - 7)) = lVar21;
                plVar23 = (long *)((ulong)(pbVar19 + 9) & 0xfffffffffffffff8);
                for (uVar15 = (ulong)((uint)bVar5 +
                                      ((int)pbVar18 -
                                      (int)(long *)((ulong)(pbVar19 + 9) & 0xfffffffffffffff8)) >> 3
                                     ); uVar15 != 0; uVar15 = uVar15 - 1) {
                  *plVar23 = lVar21;
                  plVar23 = plVar23 + (ulong)bVar28 * -2 + 1;
                }
              }
            }
          }
        }
        if (iVar27 != 0) {
          pbVar24 = *(byte **)(lVar9 + 0x70);
          if ((*pbVar24 & 0x40) != 0) {
            *(uint *)(lVar9 + 0x38) = *(uint *)(lVar9 + 0x38) | 0x40;
          }
          plVar22 = *(long **)(lVar9 + 0x68);
          plVar23 = plVar22 + (long)iVar27 * 2;
          if (plVar22 < plVar23) {
            lVar21 = 0;
            plVar16 = plVar22;
            pbVar20 = pbVar24;
            do {
              bVar28 = *pbVar20;
              if ((bVar28 & 2) == 0) {
                puVar26 = puVar25;
                if ((bVar28 & 0x10) == 0) {
                  puVar26 = puVar25 + 1;
                  if (puVar8 < puVar26) goto LAB_001025da;
                  lVar21 = lVar21 + (short)(*puVar25 << 8 | *puVar25 >> 8);
                }
              }
              else {
                puVar26 = (ushort *)((long)puVar25 + 1);
                if (puVar8 < puVar26) goto LAB_001025da;
                if ((bVar28 & 0x10) == 0) {
                  lVar21 = lVar21 - (ulong)(byte)*puVar25;
                }
                else {
                  lVar21 = lVar21 + (ulong)(byte)*puVar25;
                }
              }
              *plVar16 = lVar21;
              plVar16 = plVar16 + 2;
              pbVar20 = pbVar20 + 1;
              puVar25 = puVar26;
            } while (plVar16 < plVar23);
            lVar21 = 0;
            do {
              bVar28 = *pbVar24;
              if ((bVar28 & 4) == 0) {
                puVar25 = puVar26;
                if ((bVar28 & 0x20) == 0) {
                  puVar25 = puVar26 + 1;
                  if (puVar8 < puVar25) goto LAB_001025da;
                  lVar21 = lVar21 + (short)(*puVar26 << 8 | *puVar26 >> 8);
                }
              }
              else {
                puVar25 = (ushort *)((long)puVar26 + 1);
                if (puVar8 < puVar25) goto LAB_001025da;
                if ((bVar28 & 0x20) == 0) {
                  lVar21 = lVar21 - (ulong)(byte)*puVar26;
                }
                else {
                  lVar21 = lVar21 + (ulong)(byte)*puVar26;
                }
              }
              plVar22[1] = lVar21;
              plVar22 = plVar22 + 2;
              *pbVar24 = bVar28 & 1;
              pbVar24 = pbVar24 + 1;
              puVar26 = puVar25;
            } while (plVar22 < plVar23);
          }
        }
        uVar15 = (ulong)local_44;
        *(uint *)(lVar9 + 0x60) = iVar27 << 0x10 | (uint)uVar6;
        *(ushort **)(param_1 + 0x158) = puVar25;
      }
      goto LAB_001025df;
    }
  }
  else {
    if (*(uint *)(lVar9 + 0xc) <
        (uint)((int)*(short *)(lVar9 + 0x18) + (int)*(short *)(lVar9 + 0x60) + iVar27)) {
      uVar15 = FT_GlyphLoader_CheckPoints(lVar9,0,iVar27);
      local_44 = (uint)uVar15;
      if (local_44 != 0) goto LAB_001025df;
    }
    else {
      local_44 = 0;
    }
    if ((iVar27 < 0xfff) &&
       (lVar21 = (long)(iVar27 * 2 + 2), (ushort *)((long)puVar25 + lVar21) <= puVar8)) {
      psVar17 = *(short **)(lVar9 + 0x78);
      psVar3 = (short *)((long)psVar17 + lVar21 + -2);
      if (psVar3 <= psVar17) goto LAB_0010269e;
      sVar12 = -1;
      do {
        uVar7 = *puVar25;
        puVar2 = (undefined1 *)((long)puVar25 + 1);
        puVar25 = puVar25 + 1;
        sVar11 = CONCAT11((char)uVar7,*puVar2);
        *psVar17 = sVar11;
        if (sVar11 <= sVar12) goto LAB_001025da;
        psVar17 = psVar17 + 1;
        sVar12 = sVar11;
      } while (psVar17 < psVar3);
      iVar14 = (int)sVar11;
      iVar27 = iVar14 + 1;
      if (iVar27 != -4) goto LAB_001026b0;
LAB_001026c7:
      local_44 = 0;
      goto LAB_001026cf;
    }
  }
LAB_001025da:
  uVar15 = 0x14;
LAB_001025df:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



void tt_slot_init(long param_1)

{
  FT_GlyphLoader_CreateExtra(**(undefined8 **)(param_1 + 0x128));
  return;
}



int tt_face_vary_cvt(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  void *__dest;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8;
  ulong local_90;
  int local_54;
  uint local_50;
  uint local_4c;
  ulong local_48;
  long local_40;
  
  puVar4 = *(uint **)(param_1 + 0x4c0);
  lVar5 = param_2[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  if ((((puVar4 == (uint *)0x0) || (*(long *)(param_1 + 0x480) == 0)) ||
      (local_54 = (**(code **)(param_1 + 0x340))(param_1,0x63766172,param_2,&local_48),
      local_54 != 0)) || (local_54 = FT_Stream_EnterFrame(param_2,local_48), local_54 != 0)) {
    local_54 = 0;
LAB_00102ae0:
    local_a8 = 0;
    lVar15 = 0;
    lVar23 = 0;
    __dest = (void *)0x0;
    local_b0 = 0;
  }
  else {
    lVar15 = param_2[8];
    lVar23 = *param_2;
    iVar12 = FT_Stream_GetULong(param_2);
    if (iVar12 != 0x10000) {
      local_54 = 0;
      FT_Stream_ExitFrame(param_2);
      goto LAB_00102ae0;
    }
    __dest = (void *)ft_mem_realloc(lVar5,8,0,*puVar4,0,&local_54);
    if (local_54 == 0) {
      local_b0 = ft_mem_realloc(lVar5,8,0,*puVar4,0,&local_54);
      if (local_54 == 0) {
        local_a8 = ft_mem_realloc(lVar5,8,0,*puVar4,0,&local_54);
        if (local_54 == 0) {
          uVar13 = FT_Stream_GetUShort(param_2);
          uVar10 = FT_Stream_GetUShort(param_2);
          if ((ulong)((uVar13 & 0xfff) << 2) + (ulong)uVar10 <= local_48) {
            local_90 = (lVar15 - lVar23) + (ulong)uVar10;
            if ((short)uVar13 < 0) {
              lVar15 = *param_2;
              lVar16 = param_2[8];
              lVar23 = param_2[9];
              if (local_90 < (ulong)(param_2[9] - lVar15)) {
                lVar23 = lVar15 + local_90;
              }
              param_2[8] = lVar23;
              lVar23 = ft_var_readpackedpoints(param_2,local_48,&local_4c);
              lVar6 = *param_2;
              lVar7 = param_2[8];
              uVar8 = *(undefined8 *)(param_1 + 0x478);
              lVar20 = param_2[9];
              if ((ulong)(lVar16 - lVar15) < (ulong)(param_2[9] - lVar6)) {
                lVar20 = lVar6 + (lVar16 - lVar15);
              }
              param_2[8] = lVar20;
              lVar15 = ft_mem_realloc(lVar5,8,0,uVar8,0,&local_54);
              if (local_54 == 0) {
                local_90 = lVar7 - lVar6;
                goto LAB_00102d2f;
              }
            }
            else {
              lVar15 = ft_mem_realloc(lVar5,8,0,*(undefined8 *)(param_1 + 0x478),0,&local_54);
              if (local_54 != 0) {
                FT_Stream_ExitFrame(param_2);
                lVar23 = 0;
                goto LAB_00102afb;
              }
              lVar23 = 0;
LAB_00102d2f:
              uVar3 = 0;
              if ((uVar13 & 0xfff) != 0) {
                do {
                  uVar10 = FT_Stream_GetUShort(param_2);
                  uVar14 = FT_Stream_GetUShort(param_2);
                  if ((short)uVar14 < 0) {
                    lVar16 = 0;
                    if (*puVar4 != 0) {
                      do {
                        sVar11 = FT_Stream_GetUShort(param_2);
                        *(long *)((long)__dest + lVar16 * 8) = (long)sVar11 << 2;
                        lVar16 = lVar16 + 1;
                      } while ((uint)lVar16 < *puVar4);
                    }
                  }
                  else {
                    if ((puVar4[0x1a] <= (uVar14 & 0xfff)) || (*(long *)(puVar4 + 0x1c) == 0)) {
                      local_54 = 8;
                      goto LAB_00103155;
                    }
                    memcpy(__dest,(void *)(*(long *)(puVar4 + 0x1c) +
                                          (ulong)((uVar14 & 0xfff) * *puVar4) * 8),
                           (ulong)*puVar4 << 3);
                  }
                  if (((uVar14 & 0x4000) != 0) && (*puVar4 != 0)) {
                    lVar16 = 0;
                    do {
                      sVar11 = FT_Stream_GetUShort(param_2);
                      *(long *)(local_b0 + lVar16 * 8) = (long)sVar11 << 2;
                      lVar16 = lVar16 + 1;
                    } while ((uint)lVar16 < *puVar4);
                    if (*puVar4 != 0) {
                      lVar16 = 0;
                      do {
                        sVar11 = FT_Stream_GetUShort(param_2);
                        *(long *)(local_a8 + lVar16 * 8) = (long)sVar11 << 2;
                        lVar16 = lVar16 + 1;
                      } while ((uint)lVar16 < *puVar4);
                    }
                  }
                  lVar16 = ft_var_apply_tuple(puVar4,uVar14 & 0xffff,__dest,local_b0);
                  if (lVar16 != 0) {
                    lVar6 = *param_2;
                    lVar7 = param_2[8];
                    lVar20 = param_2[9];
                    if (local_90 < (ulong)(param_2[9] - lVar6)) {
                      lVar20 = lVar6 + local_90;
                    }
                    param_2[8] = lVar20;
                    if ((uVar14 & 0x2000) == 0) {
                      lVar19 = 0;
                      local_50 = local_4c;
                      lVar20 = lVar23;
                    }
                    else {
                      lVar19 = ft_var_readpackedpoints(param_2,local_48,&local_50);
                      lVar20 = lVar19;
                    }
                    uVar9 = local_50;
                    uVar14 = local_50;
                    if (local_50 == 0) {
                      uVar14 = *(uint *)(param_1 + 0x478);
                    }
                    lVar17 = ft_var_readpackeddeltas(param_2,local_48,uVar14);
                    if ((lVar20 == 0) || (lVar17 == 0)) {
                      if (lVar19 != -1) goto LAB_00102efa;
                    }
                    else if (lVar19 == -1) {
                      uVar18 = 0;
                      if (*(long *)(param_1 + 0x478) != 0) {
                        do {
                          lVar20 = (long)*(int *)(lVar17 + uVar18 * 8) * (long)(int)lVar16;
                          plVar2 = (long *)(lVar15 + uVar18 * 8);
                          *plVar2 = *plVar2 + (long)(int)((ulong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)
                                                                 ) >> 0x10);
                          uVar18 = (ulong)((int)uVar18 + 1);
                        } while (uVar18 < *(ulong *)(param_1 + 0x478));
                      }
                    }
                    else {
                      uVar18 = 0;
                      if (uVar9 != 0) {
                        do {
                          uVar22 = (ulong)*(ushort *)(lVar20 + uVar18 * 2);
                          if (uVar22 < *(ulong *)(param_1 + 0x478)) {
                            lVar21 = (long)*(int *)(lVar17 + uVar18 * 8) * (long)(int)lVar16;
                            plVar2 = (long *)(lVar15 + uVar22 * 8);
                            *plVar2 = *plVar2 + (long)(int)((ulong)(lVar21 + 0x8000 +
                                                                   (lVar21 >> 0x3f)) >> 0x10);
                          }
                          uVar18 = uVar18 + 1;
                        } while (uVar18 != uVar9);
                      }
LAB_00102efa:
                      ft_mem_free(lVar5,lVar19);
                    }
                    ft_mem_free(lVar5,lVar17);
                    lVar16 = param_2[9];
                    if ((ulong)(lVar7 - lVar6) < (ulong)(param_2[9] - *param_2)) {
                      lVar16 = *param_2 + (lVar7 - lVar6);
                    }
                    param_2[8] = lVar16;
                  }
                  uVar3 = uVar3 + 1;
                  local_90 = local_90 + uVar10;
                } while ((uVar13 & 0xfff) != uVar3);
              }
              uVar18 = *(ulong *)(param_1 + 0x478);
              if (uVar18 != 0) {
                lVar16 = *(long *)(param_1 + 0x480);
                uVar22 = 0;
                do {
                  piVar1 = (int *)(lVar16 + uVar22 * 4);
                  *piVar1 = *piVar1 + (int)(*(long *)(lVar15 + uVar22 * 8) + 0x200 >> 10);
                  uVar22 = (ulong)((int)uVar22 + 1);
                } while (uVar22 < uVar18);
              }
            }
LAB_00103155:
            FT_Stream_ExitFrame(param_2);
            if (lVar23 == -1) goto LAB_00102b06;
            goto LAB_00102afb;
          }
          local_54 = 8;
        }
        FT_Stream_ExitFrame(param_2);
        lVar15 = 0;
        lVar23 = 0;
      }
      else {
        lVar15 = 0;
        FT_Stream_ExitFrame(param_2);
        lVar23 = 0;
        local_a8 = 0;
      }
    }
    else {
      lVar15 = 0;
      FT_Stream_ExitFrame(param_2);
      lVar23 = 0;
      local_a8 = 0;
      local_b0 = 0;
    }
  }
LAB_00102afb:
  ft_mem_free(lVar5,lVar23);
LAB_00102b06:
  ft_mem_free(lVar5,__dest);
  ft_mem_free(lVar5,local_b0);
  ft_mem_free(lVar5,local_a8);
  ft_mem_free(lVar5,lVar15);
  FT_List_Iterate(param_1 + 200,tt_cvt_ready_iterator,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_54;
}



ulong tt_face_load_cvt(long param_1,long param_2)

{
  int *piVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  uint local_3c;
  ulong local_38;
  long local_30;
  
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = (**(code **)(param_1 + 0x340))(param_1,0x63767420,param_2,&local_38);
  if (local_3c == 0) {
    *(ulong *)(param_1 + 0x478) = local_38 >> 1;
    uVar3 = ft_mem_qrealloc(uVar3,4,0,local_38 >> 1,0,&local_3c);
    *(undefined8 *)(param_1 + 0x480) = uVar3;
    uVar4 = (ulong)local_3c;
    if (local_3c == 0) {
      uVar4 = FT_Stream_EnterFrame(param_2,*(long *)(param_1 + 0x478) * 2);
      local_3c = (uint)uVar4;
      if (local_3c == 0) {
        piVar5 = *(int **)(param_1 + 0x480);
        piVar1 = piVar5 + *(long *)(param_1 + 0x478);
        for (; piVar5 < piVar1; piVar5 = piVar5 + 1) {
          sVar2 = FT_Stream_GetUShort(param_2);
          *piVar5 = (int)sVar2 << 6;
        }
        FT_Stream_ExitFrame(param_2);
        uVar4 = (ulong)local_3c;
        if (*(char *)(param_1 + 0x4b9) != '\0') {
          uVar4 = tt_face_vary_cvt(param_1,param_2);
        }
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x478) = 0;
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int TT_Load_Composite_Glyph(long *param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ushort *puVar15;
  ulong uVar16;
  
  uVar14 = 0;
  puVar1 = (ushort *)param_1[0x2c];
  lVar6 = param_1[3];
  lVar2 = *(long *)(*param_1 + 0x20);
  puVar15 = (ushort *)param_1[0x2b];
  do {
    uVar16 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    iVar4 = FT_GlyphLoader_CheckSubGlyphs(lVar6,uVar14);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (puVar1 < puVar15 + 2) {
      return 0x15;
    }
    puVar5 = (uint *)(uVar16 * 0x30 + *(long *)(lVar6 + 0xa0));
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar3 = *puVar15 >> 8;
    *(ushort *)(puVar5 + 1) = *puVar15 << 8 | uVar3;
    uVar7 = puVar15[1] << 8 | puVar15[1] >> 8;
    *puVar5 = (uint)uVar7;
    if (lVar2 <= (long)(ulong)uVar7) {
      return 0x15;
    }
    uVar7 = uVar3 & 1;
    uVar8 = -(uint)(uVar7 == 0) & 0xfffffffe;
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x40) == 0) {
        iVar4 = uVar8 + 4;
        if ((uVar3 & 0x80) != 0) {
          iVar4 = uVar8 + 0xc;
        }
        goto LAB_001033a3;
      }
      uVar8 = uVar8 + 0xc;
    }
    else {
      iVar4 = uVar8 + 6;
LAB_001033a3:
      uVar8 = iVar4 + 4;
    }
    if (puVar1 < (ushort *)((ulong)uVar8 + (long)puVar15)) {
      return 0x15;
    }
    if ((uVar3 & 2) == 0) {
      if (uVar7 == 0) {
        puVar10 = puVar15 + 3;
        puVar5[2] = (uint)(byte)puVar15[2];
        uVar8 = (uint)*(byte *)((long)puVar15 + 5);
      }
      else {
        puVar10 = puVar15 + 4;
        puVar5[2] = (uint)(ushort)(puVar15[2] << 8 | puVar15[2] >> 8);
        uVar8 = (uint)(ushort)(puVar15[3] << 8 | puVar15[3] >> 8);
      }
    }
    else if (uVar7 == 0) {
      puVar5[2] = (int)(char)(byte)puVar15[2];
      puVar10 = puVar15 + 3;
      uVar8 = (uint)*(char *)((long)puVar15 + 5);
    }
    else {
      puVar10 = puVar15 + 4;
      puVar5[2] = (int)(short)(puVar15[2] << 8 | puVar15[2] >> 8);
      uVar8 = (uint)(short)(puVar15[3] << 8 | puVar15[3] >> 8);
    }
    puVar5[3] = uVar8;
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x40) == 0) {
        if ((uVar3 & 0x80) == 0) {
          lVar12 = 0;
          lVar11 = 0x10000;
          lVar13 = 0;
          lVar9 = 0x10000;
        }
        else {
          lVar9 = (long)(short)(*puVar10 << 8 | *puVar10 >> 8) << 2;
          lVar12 = (long)(short)(puVar10[1] << 8 | puVar10[1] >> 8) << 2;
          lVar13 = (long)(short)(puVar10[2] << 8 | puVar10[2] >> 8) << 2;
          lVar11 = (long)(short)(puVar10[3] << 8 | puVar10[3] >> 8) << 2;
          puVar10 = puVar10 + 4;
        }
      }
      else {
        lVar12 = 0;
        lVar13 = 0;
        lVar9 = (long)(short)(*puVar10 << 8 | *puVar10 >> 8) << 2;
        lVar11 = (long)(short)(puVar10[1] << 8 | puVar10[1] >> 8) << 2;
        puVar10 = puVar10 + 2;
      }
    }
    else {
      lVar12 = 0;
      lVar13 = 0;
      lVar9 = (long)(short)(*puVar10 << 8 | *puVar10 >> 8) << 2;
      lVar11 = lVar9;
      puVar10 = puVar10 + 1;
    }
    *(long *)(puVar5 + 4) = lVar9;
    *(long *)(puVar5 + 6) = lVar13;
    *(long *)(puVar5 + 8) = lVar12;
    *(long *)(puVar5 + 10) = lVar11;
    puVar15 = puVar10;
    if ((uVar3 & 0x20) == 0) {
      *(uint *)(lVar6 + 0x98) = uVar14;
      lVar6 = FT_Stream_Pos(param_1[6]);
      param_1[0x2b] = (long)puVar10;
      param_1[0x24] = (long)puVar10 + (lVar6 - (long)puVar1);
      return 0;
    }
  } while( true );
}



int tt_property_get(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 != 0) {
    return 0xc;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x78);
  return iVar1;
}



undefined4 tt_var_get_item_delta(long param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *puVar18;
  long *plVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined1 *local_140;
  uint *local_138;
  undefined1 *local_130;
  int local_10c;
  uint local_108 [16];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10c = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((*(long *)(param_1 + 0x4c0) == 0) || (*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) == 0)) {
    uVar8 = 0;
    goto LAB_001038c3;
  }
  if ((((param_3 == 0xffff) && (uVar8 = 0, param_4 == 0xffff)) || (uVar8 = 0, *param_2 <= param_3))
     || (puVar18 = (uint *)((ulong)param_3 * 0x20 + *(long *)(param_2 + 2)), *puVar18 <= param_4))
  goto LAB_001038c3;
  uVar14 = puVar18[1];
  if (uVar14 < 0x10) {
    local_140 = local_c8;
    puVar11 = local_108;
LAB_00103742:
    uVar2 = (ushort)puVar18[6];
    uVar13 = (ulong)uVar2;
    param_4 = (uVar2 + uVar14) * param_4;
    uVar12 = (uint)uVar2;
    if (*(char *)((long)puVar18 + 0x1a) == '\0') {
      lVar20 = *(long *)(puVar18 + 4) + (ulong)param_4;
      lVar15 = 0;
      if (uVar2 == 0) {
        if (uVar14 != 0) goto LAB_00103799;
      }
      else {
        do {
          puVar11[lVar15] =
               (int)CONCAT11(*(undefined1 *)(lVar20 + lVar15 * 2),
                             *(undefined1 *)(lVar20 + 1 + lVar15 * 2));
          lVar15 = lVar15 + 1;
        } while ((uint)lVar15 < uVar12);
        uVar14 = puVar18[1];
        lVar20 = lVar20 + uVar13 * 2;
        if (uVar12 < uVar14) {
LAB_00103799:
          lVar15 = 0;
          do {
            puVar11[uVar13 + lVar15] = (int)*(char *)(lVar20 + lVar15);
            lVar15 = lVar15 + 1;
            uVar14 = puVar18[1];
          } while ((uint)uVar2 + (int)lVar15 < uVar14);
        }
LAB_001037bf:
        if (uVar14 != 0) {
          lVar20 = 0;
          do {
            plVar19 = *(long **)(*(long *)(param_2 + 6) +
                                (ulong)*(uint *)(*(long *)(puVar18 + 2) + lVar20 * 4) * 8);
            if ((short)param_2[4] == 0) {
              uVar16 = 0x10000;
            }
            else {
              lVar15 = 0;
              uVar14 = 0;
              uVar16 = 0x10000;
              do {
                lVar4 = *plVar19;
                lVar5 = plVar19[1];
                if ((((lVar4 <= lVar5) && (lVar6 = plVar19[2], lVar5 <= lVar6)) &&
                    ((lVar6 < 1 || (-1 < lVar4)))) &&
                   ((lVar5 != 0 &&
                    (lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) + lVar15),
                    lVar5 != lVar7)))) {
                  if ((lVar7 <= lVar4) || (lVar6 <= lVar7)) {
                    uVar16 = 0;
                    uVar14 = puVar18[1];
                    goto LAB_00103900;
                  }
                  if (lVar7 < lVar5) {
                    uVar16 = FT_MulDiv(uVar16,lVar7 - lVar4,lVar5 - lVar4);
                  }
                  else {
                    uVar16 = FT_MulDiv(uVar16,lVar6 - lVar7,lVar6 - lVar5);
                  }
                }
                uVar14 = uVar14 + 1;
                plVar19 = plVar19 + 3;
                lVar15 = lVar15 + 8;
              } while (uVar14 < (ushort)param_2[4]);
              uVar14 = puVar18[1];
            }
LAB_00103900:
            *(undefined8 *)(local_140 + lVar20 * 8) = uVar16;
            lVar20 = lVar20 + 1;
          } while ((uint)lVar20 < uVar14);
          goto LAB_00103922;
        }
      }
      uVar14 = 0;
    }
    else {
      pbVar9 = (byte *)(*(long *)(puVar18 + 4) + (ulong)(param_4 * 2));
      pbVar1 = pbVar9 + uVar13 * 4;
      puVar17 = puVar11;
      if (uVar12 != 0) {
        do {
          pbVar10 = pbVar9 + 4;
          *puVar17 = (uint)*pbVar9 << 0x18 | (uint)pbVar9[1] << 0x10 | (uint)pbVar9[3] |
                     (uint)pbVar9[2] << 8;
          pbVar9 = pbVar10;
          puVar17 = puVar17 + 1;
        } while (pbVar10 != pbVar1);
        uVar14 = puVar18[1];
        pbVar9 = pbVar1;
        if (uVar14 <= uVar12) goto LAB_001037bf;
LAB_001039f2:
        lVar20 = 0;
        do {
          puVar11[uVar13 + lVar20] = (int)CONCAT11(pbVar9[lVar20 * 2],pbVar9[lVar20 * 2 + 1]);
          lVar20 = lVar20 + 1;
          uVar14 = puVar18[1];
        } while ((uint)uVar2 + (int)lVar20 < uVar14);
        goto LAB_001037bf;
      }
      if (uVar14 != 0) goto LAB_001039f2;
      uVar14 = 0;
    }
LAB_00103922:
    uVar8 = FT_MulAddFix(local_140,puVar11,uVar14);
LAB_00103934:
    local_130 = local_c8;
    if (local_140 != local_130) goto LAB_00103940;
  }
  else {
    puVar11 = (uint *)ft_mem_qrealloc(uVar3,4,0,uVar14,0);
    if (local_10c == 0) {
      local_140 = (undefined1 *)ft_mem_qrealloc(uVar3,8,0,puVar18[1],0,&local_10c);
      if (local_10c == 0) {
        uVar14 = puVar18[1];
        goto LAB_00103742;
      }
      uVar8 = 0;
      goto LAB_00103934;
    }
    uVar8 = 0;
    local_140 = (undefined1 *)0x0;
LAB_00103940:
    ft_mem_free(uVar3,local_140);
  }
  local_138 = local_108;
  if (puVar11 != local_138) {
    ft_mem_free(uVar3,puVar11);
  }
LAB_001038c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



void tt_apply_mvar(long param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  ushort *puVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar10;
  undefined1 auVar11 [16];
  short local_3c;
  short local_3a;
  ulong uVar9;
  
  lVar3 = *(long *)(param_1 + 0x4c0);
  if ((*(byte *)(param_1 + 0x4c9) & 1) != 0) {
    puVar5 = *(ushort **)(lVar3 + 0x60);
    plVar10 = *(long **)(puVar5 + 0x14);
    if (plVar10 == (long *)0x0) {
      sVar8 = 0;
      local_3a = 0;
      local_3c = 0;
    }
    else {
      uVar9 = 0;
      sVar8 = 0;
      plVar7 = plVar10 + (ulong)*puVar5 * 2;
      if (plVar10 < plVar7) {
        lVar6 = 0;
        local_3a = 0;
        local_3c = 0;
        do {
          sVar8 = (short)uVar9;
          psVar4 = (short *)ft_var_get_value_pointer(param_1,*plVar10,lVar6,puVar5);
          auVar11 = tt_var_get_item_delta
                              (param_1,puVar5 + 4,(short)plVar10[1],
                               *(undefined2 *)((long)plVar10 + 10));
          lVar6 = auVar11._8_8_;
          sVar1 = local_3a;
          if ((psVar4 == (short *)0x0) || (auVar11._0_4_ == 0)) {
LAB_00103b90:
            local_3a = sVar1;
            sVar8 = (short)uVar9;
            sVar1 = local_3c;
          }
          else {
            sVar1 = auVar11._0_2_;
            *psVar4 = *(short *)((long)plVar10 + 0xc) + sVar1;
            lVar6 = *plVar10;
            if (lVar6 != 0x68617363) {
              if ((lVar6 != 0x68647363) && (sVar1 = local_3a, lVar6 == 0x686c6770)) {
                uVar9 = auVar11._0_8_ & 0xffffffff;
              }
              goto LAB_00103b90;
            }
          }
          local_3c = sVar1;
          if (plVar7 <= plVar10 + 2) goto LAB_00103c04;
          plVar10 = plVar10 + 2;
          puVar5 = *(ushort **)(lVar3 + 0x60);
        } while( true );
      }
      local_3a = 0;
      local_3c = 0;
    }
LAB_00103c04:
    sVar2 = *(short *)(param_1 + 0x8c);
    local_3c = local_3c + *(short *)(param_1 + 0x8a);
    lVar3 = *(long *)(param_1 + 0x390);
    sVar1 = *(short *)(param_1 + 0x8a);
    local_3a = local_3a + sVar2;
    *(short *)(param_1 + 0x8a) = local_3c;
    *(short *)(param_1 + 0x8c) = local_3a;
    *(short *)(param_1 + 0x8e) =
         (((*(short *)(param_1 + 0x8e) + sVar2) - sVar1) + sVar8 + local_3c) - local_3a;
    *(uint *)(param_1 + 0x94) =
         (uint)*(ushort *)(param_1 + 0x302) << 0x10 |
         (uint)*(ushort *)(param_1 + 0x300) -
         (uint)(ushort)((short)*(ushort *)(param_1 + 0x302) / 2) & 0xffff;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) != 0)) {
      FT_List_Iterate(param_1 + 200,ft_size_reset_iterator,lVar3);
      return;
    }
  }
  return;
}



void ft_var_to_normalized(long param_1,uint param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  local_44 = 0;
  lVar17 = *(long *)(param_1 + 0x4c0);
  puVar2 = *(uint **)(lVar17 + 0x18);
  uVar10 = *puVar2;
  lVar9 = *(long *)(puVar2 + 4);
  uVar13 = (ulong)param_2;
  if (uVar10 <= param_2) {
    uVar13 = (ulong)uVar10;
  }
  uVar11 = (uint)uVar13;
  if (uVar11 != 0) {
    plVar4 = param_3 + uVar13;
    puVar15 = param_4;
    do {
      lVar8 = *param_3;
      lVar3 = *(long *)(lVar9 + 0x10);
      if (lVar3 < lVar8) {
        uVar6 = 0x10000;
        if (lVar8 < *(long *)(lVar9 + 0x18)) {
          uVar6 = FT_DivFix(lVar8 - lVar3);
        }
      }
      else {
        uVar6 = 0;
        if ((lVar8 < lVar3) && (uVar6 = 0xffffffffffff0000, *(long *)(lVar9 + 8) < lVar8)) {
          uVar6 = FT_DivFix(lVar8 - lVar3);
        }
      }
      param_3 = param_3 + 1;
      *puVar15 = uVar6;
      lVar9 = lVar9 + 0x30;
      puVar15 = puVar15 + 1;
    } while (plVar4 != param_3);
    uVar10 = *puVar2;
  }
  if (uVar11 < uVar10) {
    memset(param_4 + uVar13,0,(ulong)((uVar10 - 1) - uVar11) * 8 + 8);
    puVar15 = *(undefined8 **)(lVar17 + 0x38);
    if (puVar15 == (undefined8 *)0x0) goto LAB_00103fd7;
    puVar16 = (ushort *)*puVar15;
    if (puVar16 != (ushort *)0x0) {
LAB_00103e37:
      lVar17 = 0;
      do {
        if (1 < *puVar16) {
          uVar10 = 1;
          plVar4 = *(long **)(puVar16 + 4);
          do {
            lVar9 = plVar4[2];
            if ((long)param_4[lVar17] < lVar9) {
              plVar14 = *(long **)(puVar16 + 4) + (ulong)(uVar10 - 1) * 2;
              lVar8 = *plVar14;
              lVar9 = FT_MulDiv(param_4[lVar17] - lVar8,plVar4[3] - plVar14[1],lVar9 - lVar8);
              param_4[lVar17] =
                   lVar9 + *(long *)(*(long *)(puVar16 + 4) + 8 + (ulong)(uVar10 - 1) * 0x10);
              break;
            }
            uVar10 = uVar10 + 1;
            plVar4 = plVar4 + 2;
          } while (*puVar16 != uVar10);
        }
        puVar16 = puVar16 + 8;
        lVar17 = lVar17 + 1;
      } while ((uint)lVar17 < *puVar2);
    }
  }
  else {
    puVar15 = *(undefined8 **)(lVar17 + 0x38);
    if (puVar15 == (undefined8 *)0x0) goto LAB_00103fd7;
    puVar16 = (ushort *)*puVar15;
    if ((puVar16 != (ushort *)0x0) && (uVar10 != 0)) goto LAB_00103e37;
  }
  if ((puVar15[2] != 0) && (lVar17 = ft_mem_qrealloc(uVar1,8,0,*puVar2,0,&local_44), local_44 == 0))
  {
    lVar9 = *(long *)(param_1 + 0x4c0);
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 **)(lVar9 + 0x10) = param_4;
    if (*puVar2 != 0) {
      uVar13 = 0;
      do {
        lVar9 = param_4[uVar13];
        uVar7 = uVar13 & 0xffffffff;
        uVar12 = 0;
        if (puVar15[7] != 0) {
          uVar7 = (ulong)((int)puVar15[5] - 1);
          if (uVar13 < (ulong)puVar15[5]) {
            uVar7 = uVar13;
          }
          uVar12 = *(undefined4 *)(puVar15[6] + uVar7 * 4);
          uVar7 = (ulong)*(uint *)(puVar15[7] + uVar7 * 4);
        }
        iVar5 = tt_var_get_item_delta(param_1,puVar15 + 1,uVar12,uVar7);
        lVar9 = (iVar5 << 2) + lVar9;
        if (0x10000 < lVar9) {
          lVar9 = 0x10000;
        }
        if (lVar9 < -0x10000) {
          lVar9 = -0x10000;
        }
        *(long *)(lVar17 + uVar13 * 8) = lVar9;
        uVar10 = *puVar2;
        uVar13 = uVar13 + 1;
      } while ((uint)uVar13 < uVar10);
      lVar9 = *(long *)(param_1 + 0x4c0);
      if (uVar10 != 0) {
        lVar8 = 0;
        do {
          *(undefined8 *)((long)param_4 + lVar8) = *(undefined8 *)(lVar17 + lVar8);
          lVar8 = lVar8 + 8;
        } while ((ulong)uVar10 * 8 - lVar8 != 0);
      }
    }
    *(undefined8 *)(lVar9 + 0x10) = uVar6;
    ft_mem_free(uVar1,lVar17);
  }
LAB_00103fd7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



int tt_var_load_item_variation_store(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ushort uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  uint *puVar20;
  ulong *puVar21;
  long in_FS_OFFSET;
  long local_68;
  ushort local_60;
  byte local_50;
  int local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 0x4c0);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = FT_Stream_Seek(lVar1);
  if (local_44 == 0) {
    sVar5 = FT_Stream_ReadUShort(lVar1,&local_44);
    if (local_44 == 0) {
      if (sVar5 == 1) {
        uVar11 = FT_Stream_ReadULong(lVar1,&local_44);
        if ((local_44 != 0) || (uVar6 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0))
        goto LAB_0010407b;
        uVar17 = (uint)uVar6;
        if (uVar17 != 0) {
          uVar18 = (ulong)uVar6;
          puVar14 = (ulong *)ft_mem_qrealloc(uVar3,8,0,uVar18,0,&local_44);
          if (local_44 == 0) {
            puVar21 = puVar14;
            do {
              uVar12 = FT_Stream_ReadULong(lVar1,&local_44);
              *puVar21 = (ulong)uVar12;
              if (local_44 != 0) goto LAB_0010407e;
              puVar21 = puVar21 + 1;
            } while (puVar14 + uVar18 != puVar21);
            local_44 = FT_Stream_Seek(lVar1,(ulong)uVar11 + param_2);
            if (((local_44 == 0) && (uVar6 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 == 0))
               && (uVar7 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 == 0)) {
              if (((uint)uVar6 == **(uint **)(lVar2 + 0x18)) &&
                 (*(ushort *)(param_3 + 4) = uVar6, -1 < (short)uVar7)) {
                uVar15 = ft_mem_realloc(uVar3,8,0,uVar7,0,&local_44);
                *(undefined8 *)(param_3 + 6) = uVar15;
                if (local_44 == 0) {
                  param_3[5] = (uint)uVar7;
                  for (uVar11 = 0; uVar11 < param_3[5]; uVar11 = uVar11 + 1) {
                    lVar2 = *(long *)(param_3 + 6);
                    uVar15 = ft_mem_realloc(uVar3,0x18,0,uVar6,0,&local_44);
                    *(undefined8 *)(lVar2 + (ulong)uVar11 * 8) = uVar15;
                    if (local_44 != 0) goto LAB_0010407e;
                    if ((short)param_3[4] != 0) {
                      uVar12 = 0;
                      plVar19 = *(long **)(*(long *)(param_3 + 6) + (ulong)uVar11 * 8);
                      do {
                        sVar5 = FT_Stream_ReadUShort(lVar1,&local_44);
                        if (((local_44 != 0) ||
                            (sVar8 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0)) ||
                           (sVar9 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0))
                        goto LAB_0010407e;
                        uVar12 = uVar12 + 1;
                        plVar19[2] = (long)sVar9 << 2;
                        uVar4 = param_3[4];
                        *plVar19 = (long)sVar5 << 2;
                        plVar19[1] = (long)sVar8 << 2;
                        plVar19 = plVar19 + 3;
                      } while (uVar12 < (ushort)uVar4);
                    }
                  }
                  uVar15 = ft_mem_realloc(uVar3,0x20,0,uVar18,0,&local_44);
                  *(undefined8 *)(param_3 + 2) = uVar15;
                  if (local_44 == 0) {
                    *param_3 = uVar17;
                    local_68 = 0;
                    while( true ) {
                      puVar20 = (uint *)(local_68 * 0x20 + *(long *)(param_3 + 2));
                      local_44 = FT_Stream_Seek(lVar1,param_2 + puVar14[local_68]);
                      if ((((local_44 != 0) ||
                           (uVar6 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0)) ||
                          (uVar11 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0)) ||
                         (uVar7 = FT_Stream_ReadUShort(lVar1,&local_44), local_44 != 0)) break;
                      local_50 = (byte)(uVar11 >> 0xf) & 1;
                      uVar16 = (ushort)uVar11;
                      local_60 = uVar16 & 0x7fff;
                      if ((uVar7 < (uVar16 & 0x7fff)) || (param_3[5] < (uint)uVar7))
                      goto LAB_00104355;
                      uVar15 = ft_mem_realloc(uVar3,4,0,uVar7,0,&local_44);
                      *(undefined8 *)(puVar20 + 2) = uVar15;
                      if (local_44 != 0) break;
                      puVar20[1] = (uint)uVar7;
                      *(ushort *)(puVar20 + 6) = local_60;
                      *(byte *)((long)puVar20 + 0x1a) = local_50;
                      for (uVar18 = 0; (uint)uVar18 < puVar20[1]; uVar18 = (ulong)((uint)uVar18 + 1)
                          ) {
                        uVar10 = FT_Stream_ReadUShort(lVar1,&local_44);
                        *(uint *)(*(long *)(puVar20 + 2) + uVar18 * 4) = (uint)uVar10;
                        if (local_44 != 0) goto LAB_0010407e;
                        if (param_3[5] <= (uint)uVar10) goto LAB_00104355;
                      }
                      iVar13 = (uint)local_60 + (uint)uVar7;
                      if ((short)uVar16 < 0) {
                        iVar13 = iVar13 * 2;
                      }
                      iVar13 = iVar13 * (uint)uVar6;
                      uVar15 = ft_mem_realloc(uVar3,1,0,iVar13,0,&local_44);
                      *(undefined8 *)(puVar20 + 4) = uVar15;
                      if (local_44 != 0) break;
                      iVar13 = FT_Stream_Read(lVar1,uVar15,iVar13);
                      if (iVar13 != 0) goto LAB_00104355;
                      local_68 = local_68 + 1;
                      *puVar20 = (uint)uVar6;
                      if (uVar17 <= (uint)local_68) break;
                    }
                  }
                }
              }
              else {
LAB_00104355:
                local_44 = 8;
              }
            }
          }
          goto LAB_0010407e;
        }
      }
      local_44 = 8;
    }
  }
LAB_0010407b:
  puVar14 = (ulong *)0x0;
LAB_0010407e:
  ft_mem_free(uVar3,puVar14);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_44;
}



ulong tt_var_load_delta_set_index_mapping
                (long param_1,undefined8 param_2,ulong *param_3,uint *param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  sbyte sVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ulong local_58;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar8 = FT_Stream_Seek(lVar1);
  local_44 = (uint)uVar8;
  if (local_44 != 0) goto LAB_001045d6;
  cVar3 = FT_Stream_ReadByte(lVar1,&local_44);
  uVar8 = (ulong)local_44;
  if (local_44 != 0) goto LAB_001045d6;
  bVar4 = FT_Stream_ReadByte(lVar1,&local_44);
  uVar8 = (ulong)local_44;
  if (local_44 != 0) goto LAB_001045d6;
  if (cVar3 == '\0') {
    uVar5 = FT_Stream_ReadUShort(lVar1,&local_44);
    uVar8 = (ulong)uVar5;
LAB_00104663:
    *param_3 = uVar8;
    uVar8 = (ulong)local_44;
    if (local_44 != 0) goto LAB_001045d6;
    if (bVar4 < 0x40) {
      if ((long)(((int)(uint)bVar4 >> 4) + 1) * *param_3 <= param_5) {
        uVar8 = ft_mem_realloc(uVar2,4,0,*param_3,0,&local_44);
        param_3[2] = uVar8;
        uVar8 = (ulong)local_44;
        if (local_44 == 0) {
          uVar8 = ft_mem_realloc(uVar2,4,0,*param_3,0,&local_44);
          param_3[1] = uVar8;
          uVar8 = (ulong)local_44;
          if ((local_44 == 0) && (*param_3 != 0)) {
            local_58 = 0;
            sVar9 = (bVar4 & 0xf) + 1;
            do {
              uVar7 = 0;
              iVar10 = 0;
              do {
                uVar6 = FT_Stream_ReadByte(lVar1,&local_44);
                uVar8 = (ulong)local_44;
                if (local_44 != 0) goto LAB_001045d6;
                uVar7 = uVar7 << 8 | uVar6 & 0xff;
                bVar11 = iVar10 != (int)(uint)bVar4 >> 4;
                iVar10 = iVar10 + 1;
              } while (bVar11);
              if (uVar7 == 0xffffffff) {
                *(undefined4 *)(param_3[1] + local_58 * 4) = 0xffff;
                *(undefined4 *)(param_3[2] + local_58 * 4) = 0xffff;
              }
              else {
                uVar6 = uVar7 >> sVar9;
                if (*param_4 <= uVar6) goto LAB_00104644;
                *(uint *)(param_3[1] + local_58 * 4) = uVar6;
                uVar7 = uVar7 & (1 << sVar9) - 1U;
                if (*(uint *)((ulong)uVar6 * 0x20 + *(long *)(param_4 + 2)) <= uVar7)
                goto LAB_00104644;
                *(uint *)(param_3[2] + local_58 * 4) = uVar7;
              }
              local_58 = local_58 + 1;
            } while (local_58 < *param_3);
            uVar8 = 0;
          }
        }
        goto LAB_001045d6;
      }
    }
  }
  else if (cVar3 == '\x01') {
    uVar7 = FT_Stream_ReadULong(lVar1,&local_44);
    uVar8 = (ulong)uVar7;
    goto LAB_00104663;
  }
LAB_00104644:
  uVar8 = 8;
LAB_001045d6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



int ft_var_load_hvvar(long param_1,char param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  lVar9 = *(long *)(param_1 + 0xc0);
  lVar1 = *(long *)(param_1 + 0x4c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(param_1 + 0x340);
  uVar3 = *(undefined8 *)(lVar9 + 0x38);
  if (param_2 == '\0') {
    *(undefined1 *)(lVar1 + 0x40) = 1;
    local_4c = (*pcVar2)(param_1,0x48564152,lVar9,&local_48);
  }
  else {
    *(undefined1 *)(lVar1 + 0x50) = 1;
    local_4c = (*pcVar2)(param_1,0x56564152,lVar9,&local_48);
  }
  iVar10 = local_4c;
  if (local_4c == 0) {
    lVar8 = FT_Stream_Pos(lVar9);
    sVar4 = FT_Stream_ReadUShort(lVar9,&local_4c);
    iVar10 = local_4c;
    if ((((local_4c == 0) && (local_4c = FT_Stream_Skip(lVar9,2), iVar10 = local_4c, local_4c == 0))
        && (iVar10 = 8, sVar4 == 1)) &&
       (uVar5 = FT_Stream_ReadULong(lVar9,&local_4c), iVar10 = local_4c, local_4c == 0)) {
      uVar6 = FT_Stream_ReadULong(lVar9,&local_4c);
      iVar10 = local_4c;
      if (local_4c == 0) {
        if (param_2 == '\0') {
          lVar9 = ft_mem_alloc(uVar3,0x38,&local_4c);
          *(long *)(lVar1 + 0x48) = lVar9;
        }
        else {
          lVar9 = ft_mem_alloc(uVar3,0x38,&local_4c);
          *(long *)(lVar1 + 0x58) = lVar9;
        }
        iVar10 = local_4c;
        if (((local_4c == 0) &&
            (iVar7 = tt_var_load_item_variation_store(param_1,(ulong)uVar5 + lVar8,lVar9),
            local_4c = iVar7, iVar10 = iVar7, iVar7 == 0)) &&
           (((ulong)uVar6 == 0 ||
            (local_4c = tt_var_load_delta_set_index_mapping
                                  (param_1,lVar8 + (ulong)uVar6,lVar9 + 0x20,lVar9,local_48),
            iVar10 = local_4c, local_4c == 0)))) {
          local_4c = 0;
          uVar5 = *(uint *)(param_1 + 0x4c8);
          if (param_2 == '\0') {
            *(undefined1 *)(lVar1 + 0x41) = 1;
            *(uint *)(param_1 + 0x4c8) = uVar5 | 2;
            iVar10 = iVar7;
          }
          else {
            *(undefined1 *)(lVar1 + 0x51) = 1;
            *(uint *)(param_1 + 0x4c8) = uVar5 | 0x10;
            iVar10 = iVar7;
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



undefined4 tt_hvadvance_adjust(long param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x4c0);
  if (lVar3 != 0) {
    uVar4 = (ulong)param_2;
    if (param_4 == '\0') {
      if (*(char *)(lVar3 + 0x40) == '\0') {
        uVar2 = ft_var_load_hvvar(param_1,0);
        *(undefined4 *)(lVar3 + 0x44) = uVar2;
        lVar3 = *(long *)(param_1 + 0x4c0);
      }
      if (*(char *)(lVar3 + 0x41) == '\0') {
        return *(undefined4 *)(lVar3 + 0x44);
      }
      lVar3 = *(long *)(lVar3 + 0x48);
    }
    else {
      if (*(char *)(lVar3 + 0x50) == '\0') {
        uVar2 = ft_var_load_hvvar(param_1,1);
        *(undefined4 *)(lVar3 + 0x54) = uVar2;
        lVar3 = *(long *)(param_1 + 0x4c0);
      }
      if (*(char *)(lVar3 + 0x51) == '\0') {
        return *(undefined4 *)(lVar3 + 0x54);
      }
      lVar3 = *(long *)(lVar3 + 0x58);
    }
    uVar2 = 0;
    if (*(long *)(lVar3 + 0x30) != 0) {
      if (*(ulong *)(lVar3 + 0x20) <= uVar4) {
        uVar4 = (ulong)((int)*(ulong *)(lVar3 + 0x20) - 1);
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0x28) + uVar4 * 4);
      uVar4 = (ulong)*(uint *)(*(long *)(lVar3 + 0x30) + uVar4 * 4);
    }
    iVar1 = tt_var_get_item_delta(param_1,lVar3,uVar2,uVar4);
    if (iVar1 != 0) {
      *param_3 = *param_3 + iVar1;
    }
  }
  return 0;
}



void tt_vadvance_adjust(void)

{
  tt_hvadvance_adjust();
  return;
}



void tt_hadvance_adjust(void)

{
  tt_hvadvance_adjust();
  return;
}



void ft_var_load_avar(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ushort *puVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  lVar14 = *(long *)(param_1 + 0x4c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined1 *)(lVar14 + 0x30) = 1;
  local_4c = (**(code **)(param_1 + 0x340))(param_1,0x61766172,lVar1,&local_48);
  if (local_4c == 0) {
    lVar9 = FT_Stream_Pos(lVar1);
    local_4c = FT_Stream_EnterFrame(lVar1,local_48);
    if (local_4c == 0) {
      iVar5 = FT_Stream_GetULong(lVar1);
      iVar6 = FT_Stream_GetULong(lVar1);
      if (((iVar5 - 0x10000U & 0xfffeffff) == 0) &&
         (uVar7 = **(uint **)(lVar14 + 0x18), (ulong)uVar7 == (long)iVar6)) {
        plVar10 = (long *)ft_mem_alloc(uVar2,0x40,&local_4c);
        *(long **)(lVar14 + 0x38) = plVar10;
        if (local_4c == 0) {
          puVar11 = (ushort *)ft_mem_qrealloc(uVar2,0x10,0,(ulong)uVar7,0,&local_4c);
          *plVar10 = (long)puVar11;
          if (local_4c == 0) {
            if (iVar6 != 0) {
              iVar13 = 0;
              do {
                uVar3 = FT_Stream_GetUShort(lVar1);
                *puVar11 = uVar3;
                if (local_48 < (ulong)uVar3 * 4) {
LAB_00104e30:
                  lVar14 = *plVar10;
                  if (iVar13 != 0) {
                    lVar9 = (long)(int)(iVar13 - 1U) << 4;
                    do {
                      ft_mem_free(uVar2,*(undefined8 *)(lVar14 + 8 + lVar9));
                      lVar14 = *plVar10;
                      *(undefined8 *)(lVar14 + 8 + lVar9) = 0;
                      lVar9 = lVar9 + -0x10;
                    } while (((long)iVar13 - (ulong)(iVar13 - 1U)) * 0x10 + -0x20 != lVar9);
                  }
                  ft_mem_free(uVar2);
                  *plVar10 = 0;
                  goto LAB_00104c90;
                }
                uVar12 = ft_mem_qrealloc(uVar2,0x10,0,(ulong)uVar3,0,&local_4c);
                *(undefined8 *)(puVar11 + 4) = uVar12;
                if (local_4c != 0) goto LAB_00104e30;
                lVar14 = 0;
                if (*puVar11 != 0) {
                  do {
                    lVar15 = lVar14 + 1;
                    sVar4 = FT_Stream_GetUShort(lVar1);
                    *(long *)(*(long *)(puVar11 + 4) + lVar14 * 0x10) = (long)sVar4 << 2;
                    sVar4 = FT_Stream_GetUShort(lVar1);
                    *(long *)(*(long *)(puVar11 + 4) + 8 + lVar14 * 0x10) = (long)sVar4 << 2;
                    lVar14 = lVar15;
                  } while ((int)lVar15 < (int)(uint)*puVar11);
                }
                iVar13 = iVar13 + 1;
                puVar11 = puVar11 + 8;
              } while (iVar6 != iVar13);
            }
            if (iVar5 == 0x20000) {
              uVar7 = FT_Stream_GetULong(lVar1);
              uVar8 = FT_Stream_GetULong(lVar1);
              if ((((ulong)uVar8 == 0) ||
                  (local_4c = tt_var_load_item_variation_store
                                        (param_1,lVar9 + (ulong)uVar8,plVar10 + 1), local_4c == 0))
                 && ((ulong)uVar7 != 0)) {
                local_4c = tt_var_load_delta_set_index_mapping
                                     (param_1,lVar9 + (ulong)uVar7,plVar10 + 5,plVar10 + 1,local_48)
                ;
              }
            }
          }
        }
      }
LAB_00104c90:
      FT_Stream_ExitFrame(lVar1);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ulong TT_Get_MM_Var(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  void *pvVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  ulong *puVar24;
  undefined2 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  ulong uVar36;
  undefined4 uVar37;
  ulong *puVar38;
  long in_FS_OFFSET;
  bool bVar39;
  uint local_98;
  int local_94;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  ushort local_78;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined2 local_48;
  ushort local_46;
  long local_40;
  
  puVar15 = *(uint **)(param_1 + 0x4c0);
  uVar23 = *(undefined8 *)(param_1 + 0xc0);
  uVar9 = *(ushort *)(param_1 + 0x1a);
  uVar31 = (ulong)uVar9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  if (puVar15 == (uint *)0x0) {
    uVar18 = (**(code **)(param_1 + 0x340))(param_1,0x66766172,uVar23,local_90);
    local_98 = (uint)uVar18;
    if (local_98 != 0) goto LAB_00105100;
    lVar29 = FT_Stream_Pos(uVar23);
    uVar18 = FT_Stream_ReadFields(uVar23,fvar_fields_1,&local_88);
    uVar5 = local_78;
    local_98 = (uint)uVar18;
    if (local_98 != 0) goto LAB_00105100;
    uVar18 = 8;
    if ((uint)uVar9 < (uint)local_80._6_2_) goto LAB_00105100;
    uVar4 = local_80._2_2_;
    puVar34 = (uint *)ft_mem_alloc(uVar1,0x90,&local_98);
    *(uint **)(param_1 + 0x4c0) = puVar34;
    uVar18 = (ulong)local_98;
    if (local_98 != 0) goto LAB_00105100;
    uVar31 = (ulong)(uint)uVar9;
    uVar33 = (uint)local_80._2_2_;
    bVar39 = (uint)uVar4 * 4 + 6 == (uint)uVar5;
    *puVar34 = uVar33;
  }
  else {
    bVar39 = false;
    uVar33 = *puVar15;
    lVar29 = 0;
  }
  uVar36 = (ulong)uVar33;
  uVar10 = (uint)uVar31;
  uVar32 = (ulong)(uVar33 * uVar10);
  uVar13 = uVar36 * 2 + 7 & 0xfffffffffffffff8;
  if (puVar15 == (uint *)0x0) {
    *(ulong *)(*(long *)(param_1 + 0x4c0) + 0x20) =
         uVar31 * 0x10 + 0x20 + (ulong)(uVar33 * 5) + uVar13 + uVar36 * 0x30 + uVar32 * 8;
    puVar15 = (uint *)ft_mem_alloc(uVar1);
    uVar18 = (ulong)local_98;
    if (local_98 != 0) goto LAB_00105100;
    puVar34 = puVar15 + 8;
    plVar20 = (long *)((long)puVar34 + uVar13);
    plVar17 = plVar20 + uVar36 * 6;
    *(uint **)(*(long *)(param_1 + 0x4c0) + 0x18) = puVar15;
    *puVar15 = uVar33;
    puVar15[1] = 0xffffffff;
    puVar15[2] = uVar10;
    *(long **)(puVar15 + 4) = plVar20;
    *(long **)(puVar15 + 6) = plVar17;
    plVar26 = plVar17 + uVar31 * 2;
    plVar16 = plVar17;
    if (uVar10 != 0) {
      do {
        *plVar16 = (long)plVar26;
        plVar16 = plVar16 + 2;
        plVar26 = plVar26 + uVar36;
      } while (plVar16 != plVar17 + uVar31 * 2);
    }
    plVar17 = plVar17 + uVar32 + uVar31 * 2;
    lVar29 = (local_80 & 0xffff) + lVar29;
    plVar26 = (long *)(uVar36 * 5 + (long)plVar17);
    if (uVar33 == 0) {
      uVar18 = FT_Stream_Seek(uVar23,lVar29);
      local_98 = (uint)uVar18;
      if (local_98 != 0) goto LAB_00105100;
    }
    else {
      do {
        *plVar20 = (long)plVar17;
        plVar17 = (long *)((long)plVar17 + 5);
        plVar20 = plVar20 + 6;
      } while (plVar26 != plVar17);
      uVar18 = FT_Stream_Seek(uVar23,lVar29);
      local_98 = (uint)uVar18;
      if (local_98 != 0) goto LAB_00105100;
      plVar20 = *(long **)(puVar15 + 4);
      plVar17 = plVar20 + uVar36 * 6;
      do {
        local_98 = 0;
        uVar18 = FT_Stream_ReadFields(uVar23,fvaraxis_fields_0,&local_68);
        local_98 = (uint)uVar18;
        if (local_98 != 0) goto LAB_00105100;
        plVar20[4] = local_68;
        plVar20[1] = local_60;
        plVar20[2] = lStack_58;
        plVar20[3] = local_50;
        *(uint *)(plVar20 + 5) = (uint)local_46;
        *(char *)*plVar20 = (char)((ulong)local_68 >> 0x18);
        *(char *)(*plVar20 + 1) = (char)((ulong)plVar20[4] >> 0x10);
        *(char *)(*plVar20 + 2) = (char)((ulong)plVar20[4] >> 8);
        *(char *)(*plVar20 + 3) = (char)plVar20[4];
        *(undefined1 *)(*plVar20 + 4) = 0;
        *(undefined2 *)puVar34 = local_48;
        lVar29 = plVar20[2];
        if ((lVar29 < plVar20[1]) || (plVar20[3] < lVar29)) {
          plVar20[1] = lVar29;
          plVar20[3] = lVar29;
        }
        plVar20 = plVar20 + 6;
        puVar34 = (uint *)((long)puVar34 + 2);
      } while (plVar17 != plVar20);
    }
    lVar29 = *(long *)(param_1 + 0x4c0);
    uVar19 = ft_mem_realloc(uVar1,8,0,uVar32,0,&local_98);
    *(undefined8 *)(lVar29 + 0x28) = uVar19;
    uVar18 = (ulong)local_98;
    if (local_98 != 0) goto LAB_00105100;
    if (local_80._6_2_ == 0) {
LAB_001054a6:
      uVar12 = 0;
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4c0) + 0x30) == '\0') {
        uVar19 = FT_Stream_Pos(uVar23);
        ft_var_load_avar(param_1);
        uVar18 = FT_Stream_Seek(uVar23,uVar19);
        local_98 = (uint)uVar18;
        if (local_98 != 0) goto LAB_00105100;
        plVar20 = *(long **)(puVar15 + 6);
        lVar29 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x28);
        uVar35 = 0;
        if (local_80._6_2_ == 0) goto LAB_001054a6;
      }
      else {
        plVar20 = *(long **)(puVar15 + 6);
        lVar29 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x28);
        uVar35 = local_98;
      }
      local_98 = uVar35;
      uVar35 = 0;
      do {
        uVar18 = FT_Stream_EnterFrame
                           (uVar23,(-(ulong)!bVar39 & 0xfffffffffffffffe) + 6 + uVar36 * 4);
        local_98 = (uint)uVar18;
        if (local_98 != 0) goto LAB_00105100;
        uVar9 = FT_Stream_GetUShort(uVar23);
        *(uint *)(plVar20 + 1) = (uint)uVar9;
        FT_Stream_GetUShort(uVar23);
        plVar17 = (long *)*plVar20;
        plVar26 = plVar17;
        if (uVar33 != 0) {
          do {
            plVar16 = plVar26 + 1;
            iVar11 = FT_Stream_GetULong(uVar23);
            *plVar26 = (long)iVar11;
            plVar26 = plVar16;
          } while (plVar17 + uVar36 != plVar16);
        }
        uVar12 = 0xffff;
        if (bVar39) {
          uVar9 = FT_Stream_GetUShort(uVar23);
          uVar12 = (uint)uVar9;
        }
        *(uint *)((long)plVar20 + 0xc) = uVar12;
        lVar2 = *plVar20;
        uVar35 = uVar35 + 1;
        plVar20 = plVar20 + 2;
        ft_var_to_normalized(param_1,uVar33,lVar2,lVar29);
        lVar29 = lVar29 + uVar36 * 8;
        FT_Stream_ExitFrame(uVar23);
        uVar12 = (uint)local_80._6_2_;
      } while (uVar35 < uVar12);
    }
    if (uVar10 != uVar12) {
      lVar29 = *(long *)(param_1 + 0x370);
      cVar6 = (**(code **)(lVar29 + 0x150))(param_1,0x11,&local_94);
      if (cVar6 == '\0') {
        cVar6 = (**(code **)(lVar29 + 0x150))(param_1,2,&local_94);
        if (cVar6 == '\0') goto LAB_001055a5;
        uVar37 = 2;
      }
      else {
        uVar37 = 0x11;
      }
      cVar6 = (**(code **)(lVar29 + 0x150))(param_1,6,&local_94);
      if (cVar6 != '\0') {
        plVar20 = (long *)((local_80 >> 0x30) * 0x10 + *(long *)(puVar15 + 6));
        lVar29 = *(long *)(puVar15 + 4);
        *(uint *)(param_1 + 0x4dc) = uVar10;
        *(undefined4 *)(plVar20 + 1) = uVar37;
        *(undefined4 *)((long)plVar20 + 0xc) = 6;
        puVar30 = (undefined8 *)*plVar20;
        if (uVar33 != 0) {
          puVar21 = puVar30;
          do {
            puVar28 = (undefined8 *)(lVar29 + 0x10);
            puVar27 = puVar21 + 1;
            lVar29 = lVar29 + 0x30;
            *puVar21 = *puVar28;
            puVar21 = puVar27;
          } while (puVar27 != puVar30 + uVar36);
        }
      }
    }
LAB_001055a5:
    lVar29 = *(long *)(param_1 + 0xc0);
    lVar2 = *(long *)(param_1 + 0x4c0);
    uVar23 = *(undefined8 *)(lVar29 + 0x38);
    local_94 = (**(code **)(param_1 + 0x340))(param_1,0x4d564152,lVar29,&local_68);
    if (local_94 == 0) {
      lVar22 = FT_Stream_Pos(lVar29);
      sVar7 = FT_Stream_ReadUShort(lVar29,&local_94);
      if (((local_94 == 0) && (local_94 = FT_Stream_Skip(lVar29,2), sVar7 == 1)) && (local_94 == 0))
      {
        uVar19 = ft_mem_alloc(uVar23,0x30,&local_94);
        *(undefined8 *)(lVar2 + 0x60) = uVar19;
        if ((local_94 == 0) && (local_94 = FT_Stream_Skip(lVar29,4), local_94 == 0)) {
          puVar25 = *(undefined2 **)(lVar2 + 0x60);
          uVar8 = FT_Stream_ReadUShort(lVar29,&local_94);
          *puVar25 = uVar8;
          if ((local_94 == 0) && (uVar9 = FT_Stream_ReadUShort(lVar29,&local_94), local_94 == 0)) {
            uVar19 = FT_Stream_Pos(lVar29);
            local_94 = tt_var_load_item_variation_store
                                 (param_1,(ulong)uVar9 + lVar22,*(long *)(lVar2 + 0x60) + 8);
            if (local_94 == 0) {
              puVar25 = *(undefined2 **)(lVar2 + 0x60);
              uVar23 = ft_mem_realloc(uVar23,0x10,0,*puVar25,0,&local_94);
              *(undefined8 *)(puVar25 + 0x14) = uVar23;
              if (((local_94 == 0) && (local_94 = FT_Stream_Seek(lVar29,uVar19), local_94 == 0)) &&
                 (local_94 = FT_Stream_EnterFrame(lVar29,(uint)**(ushort **)(lVar2 + 0x60) << 3),
                 local_94 == 0)) {
                puVar3 = *(ushort **)(lVar2 + 0x60);
                puVar38 = *(ulong **)(puVar3 + 0x14);
                if (puVar38 != (ulong *)0x0) {
                  puVar24 = puVar38 + (ulong)*puVar3 * 2;
                  for (; puVar38 < puVar24; puVar38 = puVar38 + 2) {
                    uVar10 = FT_Stream_GetULong(lVar29);
                    *puVar38 = (ulong)uVar10;
                    uVar8 = FT_Stream_GetUShort(lVar29);
                    *(undefined2 *)(puVar38 + 1) = uVar8;
                    uVar9 = FT_Stream_GetUShort(lVar29);
                    *(ushort *)((long)puVar38 + 10) = uVar9;
                    if (((int)puVar38[1] != -1) &&
                       ((*(uint *)(puVar3 + 4) <= (uint)(ushort)puVar38[1] ||
                        (*(uint *)((ulong)(ushort)puVar38[1] * 0x20 + *(long *)(puVar3 + 8)) <=
                         (uint)uVar9)))) {
                      local_94 = 8;
                      break;
                    }
                  }
                }
                FT_Stream_ExitFrame(lVar29);
                if (local_94 == 0) {
                  puVar30 = *(undefined8 **)(*(ushort **)(lVar2 + 0x60) + 0x14);
                  if (puVar30 != (undefined8 *)0x0) {
                    puVar21 = puVar30 + (ulong)**(ushort **)(lVar2 + 0x60) * 2;
                    for (; puVar30 < puVar21; puVar30 = puVar30 + 2) {
                      puVar25 = (undefined2 *)ft_var_get_value_pointer(param_1,*puVar30);
                      if (puVar25 != (undefined2 *)0x0) {
                        *(undefined2 *)((long)puVar30 + 0xc) = *puVar25;
                      }
                    }
                  }
                  *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) | 0x100;
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    pvVar14 = (void *)ft_mem_alloc(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x20),
                                   &local_98);
    uVar18 = (ulong)local_98;
    if (local_98 != 0) goto LAB_00105100;
    pvVar14 = memcpy(pvVar14,*(void **)(*(long *)(param_1 + 0x4c0) + 0x18),
                     *(size_t *)(*(long *)(param_1 + 0x4c0) + 0x20));
    puVar21 = (undefined8 *)((long)pvVar14 + uVar13 + 0x20);
    puVar28 = puVar21 + uVar36 * 6;
    *(undefined8 **)((long)pvVar14 + 0x10) = puVar21;
    puVar30 = puVar28 + uVar31 * 2;
    uVar10 = *(uint *)((long)pvVar14 + 8);
    *(undefined8 **)((long)pvVar14 + 0x18) = puVar28;
    if (uVar10 != 0) {
      puVar27 = puVar28;
      do {
        *puVar27 = puVar30;
        puVar27 = puVar27 + 2;
        puVar30 = puVar30 + uVar36;
      } while (puVar28 + (ulong)uVar10 * 2 != puVar27);
    }
    puVar28 = puVar28 + uVar32 + uVar31 * 2;
    puVar30 = (undefined8 *)(uVar36 * 5 + (long)puVar28);
    if (uVar33 != 0) {
      do {
        while( true ) {
          lVar29 = puVar21[4];
          *puVar21 = puVar28;
          if (lVar29 != 0x77676874) break;
          puVar28 = (undefined8 *)((long)puVar28 + 5);
          *puVar21 = "Weight";
          puVar21 = puVar21 + 6;
          if (puVar28 == puVar30) goto LAB_001050f5;
        }
        if (lVar29 == 0x77647468) {
          *puVar21 = "Width";
        }
        else if (lVar29 == 0x6f70737a) {
          *puVar21 = "OpticalSize";
        }
        else if (lVar29 == 0x736c6e74) {
          *puVar21 = "Slant";
        }
        else if (lVar29 == 0x6974616c) {
          *puVar21 = "Italic";
        }
        puVar28 = (undefined8 *)((long)puVar28 + 5);
        puVar21 = puVar21 + 6;
      } while (puVar28 != puVar30);
    }
LAB_001050f5:
    *param_2 = pvVar14;
  }
  uVar18 = (ulong)local_98;
LAB_00105100:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}



undefined8 TT_Get_Default_Named_Instance(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x4c0) != 0) || (uVar1 = TT_Get_MM_Var(param_1,0), (int)uVar1 == 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x4dc);
    uVar1 = 0;
  }
  return uVar1;
}



void TT_Get_VMetrics(long param_1,undefined4 param_2,short param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00105aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x370) + 0x140))(param_1,1,param_2);
    return;
  }
  if (*(short *)(param_1 + 0x268) == -1) {
    *param_4 = *(short *)(param_1 + 0x198) - param_3;
    sVar3 = *(short *)(param_1 + 0x198);
    sVar1 = *(short *)(param_1 + 0x19a);
  }
  else {
    *param_4 = *(short *)(param_1 + 0x2c2) - param_3;
    sVar3 = *(short *)(param_1 + 0x2c2);
    sVar1 = *(short *)(param_1 + 0x2c4);
  }
  sVar2 = sVar3 - sVar1;
  if (sVar3 < sVar1) {
    sVar2 = sVar1 - sVar3;
  }
  *param_5 = sVar2;
  return;
}



undefined8 tt_get_advances(long param_1,int param_2,int param_3,uint param_4,ulong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_44 [2];
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 & 0x10) == 0) {
    if ((((*(ulong *)(param_1 + 8) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 0x11) & 0x80) != 0))
       && (uVar1 = 7, (*(byte *)(param_1 + 0x4c8) & 2) == 0)) goto LAB_00105ba1;
    iVar2 = param_2;
    if (param_3 != 0) {
      do {
        iVar3 = iVar2 + 1;
        (**(code **)(*(long *)(param_1 + 0x370) + 0x140))(param_1,0,iVar2,local_44,&local_42);
        *param_5 = (ulong)local_42;
        param_5 = param_5 + 1;
        iVar2 = iVar3;
      } while (iVar3 != param_3 + param_2);
    }
  }
  else {
    if ((((*(ulong *)(param_1 + 8) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 0x11) & 0x80) != 0))
       && (uVar1 = 7, (*(byte *)(param_1 + 0x4c8) & 0x10) == 0)) goto LAB_00105ba1;
    iVar2 = param_2;
    if (param_3 != 0) {
      do {
        iVar3 = iVar2 + 1;
        TT_Get_VMetrics(param_1,iVar2,0,local_44,&local_42);
        *param_5 = (ulong)local_42;
        param_5 = param_5 + 1;
        iVar2 = iVar3;
      } while (param_3 + param_2 != iVar3);
    }
  }
  uVar1 = 0;
LAB_00105ba1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void tt_delta_interpolate_part_0
               (int param_1,int param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = 0;
  do {
    param_5 = param_5 + lVar14;
    param_6 = param_6 + lVar14;
    lVar12 = *(long *)(param_5 + (long)param_3 * 0x10);
    lVar8 = *(long *)(param_6 + (long)param_3 * 0x10);
    lVar6 = *(long *)(param_6 + (long)param_4 * 0x10);
    lVar13 = *(long *)(param_5 + (long)param_4 * 0x10);
    lVar15 = lVar8 - lVar12;
    lVar5 = lVar6 - lVar13;
    lVar9 = lVar5;
    lVar4 = lVar6;
    lVar7 = lVar8;
    lVar11 = lVar12;
    lVar1 = lVar13;
    lVar2 = lVar15;
    iVar10 = param_4;
    iVar3 = param_3;
    if (lVar13 < lVar12) {
LAB_00105cbf:
      param_4 = iVar3;
      lVar5 = lVar2;
      lVar12 = lVar1;
      iVar3 = FT_DivFix(lVar7 - lVar4,lVar11 - lVar12);
      lVar8 = lVar4;
      lVar13 = lVar11;
      lVar15 = lVar9;
      param_3 = iVar10;
      if (param_1 <= param_2) {
LAB_00105d1b:
        lVar6 = (long)param_1 << 4;
        lVar9 = ((long)param_1 + 1 + (ulong)(uint)(param_2 - param_1)) * 0x10;
        do {
          while (lVar4 = *(long *)(param_5 + lVar6), lVar4 <= lVar12) {
            lVar4 = lVar4 + lVar15;
LAB_00105d43:
            *(long *)(param_6 + lVar6) = lVar4;
            lVar6 = lVar6 + 0x10;
            if (lVar9 == lVar6) goto LAB_00105d70;
          }
          if (lVar4 < lVar13) {
            lVar4 = (long)((int)lVar4 - (int)lVar12) * (long)iVar3;
            lVar4 = (int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + lVar8;
            goto LAB_00105d43;
          }
          *(long *)(param_6 + lVar6) = lVar4 + lVar5;
          lVar6 = lVar6 + 0x10;
        } while (lVar9 != lVar6);
      }
    }
    else if ((lVar12 != lVar13) || (lVar8 == lVar6)) {
      lVar9 = lVar15;
      lVar4 = lVar8;
      lVar7 = lVar6;
      lVar11 = lVar13;
      lVar1 = lVar12;
      lVar2 = lVar5;
      iVar10 = param_3;
      iVar3 = param_4;
      if (lVar12 != lVar13) goto LAB_00105cbf;
      iVar3 = 0;
      if (param_2 < param_1) goto LAB_00105d70;
      goto LAB_00105d1b;
    }
LAB_00105d70:
    if (lVar14 == 8) {
      return;
    }
    lVar14 = 8;
  } while( true );
}



int TT_Vary_Apply_Glyph_Deltas(long *param_1,short *param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  void *__dest;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  int iVar32;
  long *plVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  long lVar39;
  undefined1 *local_138;
  long local_128;
  long local_120;
  int local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f0;
  ulong local_e8;
  int local_4c;
  uint local_48;
  uint local_44;
  long local_40;
  
  lVar23 = *param_1;
  uVar12 = *(uint *)(param_1 + 5);
  plVar2 = *(long **)(lVar23 + 0xc0);
  puVar3 = *(uint **)(lVar23 + 0x4c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = plVar2[7];
  local_44 = 0;
  uVar11 = (uint)param_2[1];
  if ((*(char *)(lVar23 + 0x4b9) == '\0') || (puVar3 == (uint *)0x0)) {
    iVar35 = 6;
    goto LAB_00105f65;
  }
  uVar37 = uVar11 + 4;
  if (uVar37 != 0) {
    lVar15 = *(long *)(param_2 + 4);
    lVar14 = 0;
    do {
      *(long *)((long)param_3 + lVar14) = *(long *)(lVar15 + lVar14) << 6;
      *(long *)((long)param_3 + lVar14 + 8) = *(long *)(lVar15 + 8 + lVar14) << 6;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != (ulong)uVar37 << 4);
  }
  iVar35 = 0;
  if (puVar3[0x1e] <= uVar12) goto LAB_00105f65;
  if (*(long *)(*(long *)(puVar3 + 0x20) + (ulong)uVar12 * 8) ==
      *(long *)(*(long *)(puVar3 + 0x20) + (ulong)(uVar12 + 1) * 8)) goto LAB_00105f65;
  lVar15 = ft_mem_realloc(lVar4,0x10,0,uVar37,0,&local_4c);
  if (local_4c == 0) {
    local_128 = ft_mem_realloc(lVar4,0x10,0,uVar37,0,&local_4c);
    local_138 = (undefined1 *)0x0;
    if ((local_4c == 0) &&
       (local_138 = (undefined1 *)ft_mem_realloc(lVar4,1,0,uVar37,0,&local_4c), local_4c == 0)) {
      lVar14 = *(long *)(*(long *)(puVar3 + 0x20) + (ulong)uVar12 * 8);
      lVar17 = *(long *)(*(long *)(puVar3 + 0x20) + (ulong)(uVar12 + 1) * 8);
      local_4c = FT_Stream_Seek(plVar2,lVar14);
      if (local_4c == 0) {
        uVar29 = lVar17 - lVar14;
        local_4c = FT_Stream_EnterFrame(plVar2,uVar29);
        if (local_4c == 0) {
          lVar14 = plVar2[8];
          lVar17 = *plVar2;
          __dest = (void *)ft_mem_realloc(lVar4,8,0,*puVar3,0,&local_4c);
          if (local_4c == 0) {
            local_f0 = ft_mem_realloc(lVar4,8,0,*puVar3,0,&local_4c);
            if (local_4c != 0) {
              local_108 = 0;
              local_100 = 0;
              goto LAB_00106129;
            }
            local_100 = ft_mem_realloc(lVar4,8,0,*puVar3,0,&local_4c);
            if (local_4c != 0) {
LAB_00106120:
              local_108 = 0;
              goto LAB_00106129;
            }
            uVar12 = FT_Stream_GetUShort(plVar2);
            uVar9 = FT_Stream_GetUShort(plVar2);
            if (uVar29 < uVar9) {
LAB_0010673e:
              local_4c = 8;
              goto LAB_00106120;
            }
            if (uVar29 < (uVar12 & 0xfff) * 4) goto LAB_0010673e;
            local_e8 = (lVar14 - lVar17) + (ulong)uVar9;
            if ((short)uVar12 < 0) {
              lVar14 = plVar2[9];
              lVar17 = *plVar2;
              lVar16 = plVar2[8];
              if (local_e8 < (ulong)(lVar14 - lVar17)) {
                lVar14 = local_e8 + lVar17;
              }
              plVar2[8] = lVar14;
              local_108 = ft_var_readpackedpoints(plVar2,*(undefined8 *)(puVar3 + 0x22),&local_44);
              lVar5 = *plVar2;
              lVar6 = plVar2[8];
              lVar14 = plVar2[9];
              if ((ulong)(lVar16 - lVar17) < (ulong)(lVar14 - lVar5)) {
                lVar14 = lVar5 + (lVar16 - lVar17);
              }
              plVar2[8] = lVar14;
              local_110 = ft_mem_realloc(lVar4,8,0,uVar37,0);
              lVar14 = 0;
              if (local_4c == 0) {
                local_e8 = lVar6 - lVar5;
                goto LAB_0010626d;
              }
            }
            else {
              local_110 = ft_mem_realloc(lVar4,8,0,uVar37,0,&local_4c);
              if (local_4c != 0) {
                ft_mem_free(lVar4,local_110);
                ft_mem_free(lVar4,0);
                goto LAB_00106120;
              }
              local_108 = 0;
LAB_0010626d:
              lVar14 = ft_mem_realloc(lVar4,8,0,uVar37,0,&local_4c);
              if (local_4c == 0) {
                if (uVar37 != 0) {
                  lVar17 = *(long *)(param_2 + 4);
                  lVar16 = 0;
                  do {
                    lVar5 = ((long *)(lVar17 + lVar16))[1];
                    *(long *)(lVar15 + lVar16) = *(long *)(lVar17 + lVar16) << 0x10;
                    ((long *)(lVar15 + lVar16))[1] = lVar5 << 0x10;
                    lVar16 = lVar16 + 0x10;
                  } while (lVar16 != (ulong)uVar37 << 4);
                }
                if ((uVar12 & 0xfff) != 0) {
                  lVar17 = (ulong)(uVar11 + 3) + 1;
                  local_120 = 0;
                  uVar34 = 0;
                  do {
                    uVar9 = FT_Stream_GetUShort(plVar2);
                    uVar13 = FT_Stream_GetUShort(plVar2);
                    if ((short)uVar13 < 0) {
                      lVar16 = 0;
                      if (*puVar3 != 0) {
                        do {
                          sVar10 = FT_Stream_GetUShort(plVar2);
                          *(long *)((long)__dest + lVar16 * 8) = (long)sVar10 << 2;
                          lVar16 = lVar16 + 1;
                        } while ((uint)lVar16 < *puVar3);
                      }
                    }
                    else {
                      if (puVar3[0x1a] <= (uVar13 & 0xfff)) {
                        local_4c = 8;
                        goto LAB_0010670a;
                      }
                      memcpy(__dest,(void *)(*(long *)(puVar3 + 0x1c) +
                                            (ulong)((uVar13 & 0xfff) * *puVar3) * 8),
                             (ulong)*puVar3 << 3);
                    }
                    if (((uVar13 & 0x4000) != 0) && (*puVar3 != 0)) {
                      lVar16 = 0;
                      do {
                        sVar10 = FT_Stream_GetUShort(plVar2);
                        *(long *)(local_f0 + lVar16 * 8) = (long)sVar10 << 2;
                        lVar16 = lVar16 + 1;
                      } while ((uint)lVar16 < *puVar3);
                      if (*puVar3 != 0) {
                        lVar16 = 0;
                        do {
                          sVar10 = FT_Stream_GetUShort(plVar2);
                          *(long *)(local_100 + lVar16 * 8) = (long)sVar10 << 2;
                          lVar16 = lVar16 + 1;
                        } while ((uint)lVar16 < *puVar3);
                      }
                    }
                    lVar16 = ft_var_apply_tuple(puVar3,uVar13 & 0xffff,__dest,local_f0,local_100);
                    if (lVar16 != 0) {
                      lVar5 = *plVar2;
                      lVar6 = plVar2[8];
                      lVar18 = plVar2[9];
                      if (local_e8 < (ulong)(lVar18 - lVar5)) {
                        lVar18 = local_e8 + lVar5;
                      }
                      plVar2[8] = lVar18;
                      uVar31 = *(undefined8 *)(puVar3 + 0x22);
                      if ((uVar13 & 0x2000) == 0) {
                        local_48 = local_44;
                        lVar18 = local_108;
                      }
                      else {
                        lVar18 = ft_var_readpackedpoints(plVar2,uVar31,&local_48);
                        uVar31 = *(undefined8 *)(puVar3 + 0x22);
                        local_120 = lVar18;
                      }
                      uVar8 = local_48;
                      uVar13 = uVar37;
                      if (local_48 != 0) {
                        uVar13 = local_48;
                      }
                      lVar19 = ft_var_readpackeddeltas(plVar2,uVar31);
                      lVar20 = ft_var_readpackeddeltas(plVar2,*(undefined8 *)(puVar3 + 0x22),uVar13)
                      ;
                      if ((lVar20 != 0 && lVar19 != 0) && (lVar18 != 0)) {
                        local_118 = (int)lVar16;
                        if (lVar18 == -1) {
                          for (lVar16 = 0; (uint)lVar16 < uVar37; lVar16 = lVar16 + 1) {
                            lVar18 = *(long *)(lVar14 + lVar16 * 8);
                            lVar39 = (long)*(int *)(lVar19 + lVar16 * 8) * (long)local_118;
                            lVar27 = (long)*(int *)(lVar20 + lVar16 * 8) * (long)local_118;
                            plVar21 = (long *)(local_110 + lVar16 * 8);
                            *plVar21 = *plVar21 +
                                       (long)(int)((ulong)(lVar39 + 0x8000 + (lVar39 >> 0x3f)) >>
                                                  0x10);
                            *(long *)(lVar14 + lVar16 * 8) =
                                 (int)((ulong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10) + lVar18
                            ;
                          }
                        }
                        else {
                          lVar16 = 0;
                          puVar26 = local_138;
                          if (uVar37 != 0) {
                            do {
                              *puVar26 = 0;
                              uVar31 = ((undefined8 *)(lVar15 + lVar16))[1];
                              puVar26 = puVar26 + 1;
                              *(undefined8 *)(local_128 + lVar16) = *(undefined8 *)(lVar15 + lVar16)
                              ;
                              ((undefined8 *)(local_128 + lVar16))[1] = uVar31;
                              lVar16 = lVar16 + 0x10;
                            } while (lVar16 != lVar17 * 0x10);
                          }
                          uVar29 = 0;
                          if (uVar8 != 0) {
                            do {
                              uVar1 = *(ushort *)(lVar18 + uVar29 * 2);
                              if (uVar1 < uVar37) {
                                plVar21 = (long *)((ulong)uVar1 * 0x10 + local_128);
                                local_138[uVar1] = 1;
                                lVar16 = (long)*(int *)(lVar19 + uVar29 * 8) * (long)local_118;
                                *plVar21 = *plVar21 +
                                           (long)(int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f))
                                                      >> 0x10);
                                lVar16 = (long)*(int *)(lVar20 + uVar29 * 8) * (long)local_118;
                                plVar21[1] = plVar21[1] +
                                             (long)(int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f))
                                                        >> 0x10);
                              }
                              uVar29 = uVar29 + 1;
                            } while (uVar8 != uVar29);
                          }
                          if (*param_2 != 0) {
                            sVar10 = 0;
                            uVar29 = 0;
                            do {
                              iVar35 = (int)*(short *)(*(long *)(param_2 + 0xc) + (long)sVar10 * 2);
                              iVar36 = (int)uVar29;
                              uVar24 = uVar29;
                              if (iVar36 <= iVar35) {
                                lVar16 = (long)iVar36;
                                uVar38 = (ulong)(iVar35 + 1U);
                                pcVar22 = local_138 + lVar16;
                                uVar30 = uVar29;
                                do {
                                  if (*pcVar22 != '\0') break;
                                  uVar13 = (int)uVar30 + 1;
                                  uVar30 = (ulong)uVar13;
                                  pcVar22 = pcVar22 + 1;
                                } while (iVar35 + 1U != uVar13);
                                iVar28 = (int)uVar30;
                                uVar24 = uVar30;
                                if (iVar28 <= iVar35) {
                                  uVar13 = iVar28 + 1;
                                  if (iVar35 < (int)uVar13) {
                                    uVar38 = (ulong)uVar13;
                                  }
                                  else {
                                    uVar24 = (ulong)(int)uVar13;
                                    uVar25 = uVar30;
                                    do {
                                      if (local_138[uVar24] != '\0') {
                                        if ((int)uVar25 + 1 <= (int)uVar24 + -1) {
                                          tt_delta_interpolate_part_0();
                                        }
                                        uVar25 = uVar24 & 0xffffffff;
                                      }
                                      uVar24 = uVar24 + 1;
                                    } while ((int)uVar24 <= iVar35);
                                    if ((int)uVar25 != iVar28) {
                                      iVar32 = (int)uVar25 + 1;
                                      if (iVar32 <= iVar35) {
                                        tt_delta_interpolate_part_0
                                                  (iVar32,iVar35,uVar25,uVar30,lVar15);
                                      }
                                      uVar24 = uVar38;
                                      if ((0 < iVar28) && (iVar36 <= iVar28 + -1)) {
                                        tt_delta_interpolate_part_0
                                                  (uVar29,iVar28 + -1,uVar25,uVar30,lVar15,local_128
                                                  );
                                      }
                                      goto LAB_001065fb;
                                    }
                                  }
                                  lVar18 = (long)iVar28 * 0x10;
                                  lVar20 = *(long *)(local_128 + lVar18) -
                                           *(long *)(lVar15 + lVar18);
                                  lVar39 = ((long *)(local_128 + lVar18))[1] -
                                           ((long *)(lVar15 + lVar18))[1];
                                  uVar24 = uVar38;
                                  if (lVar39 != 0 || lVar20 != 0) {
                                    lVar27 = lVar16 << 4;
                                    for (; (int)lVar16 < iVar28; lVar16 = lVar16 + 1) {
                                      lVar7 = ((long *)(local_128 + lVar27))[1];
                                      *(long *)(local_128 + lVar27) =
                                           *(long *)(local_128 + lVar27) + lVar20;
                                      ((long *)(local_128 + lVar27))[1] = lVar7 + lVar39;
                                      lVar27 = lVar27 + 0x10;
                                    }
                                    for (; lVar18 = lVar18 + 0x10, (int)uVar13 <= iVar35;
                                        uVar13 = uVar13 + 1) {
                                      lVar16 = ((long *)(local_128 + lVar18))[1];
                                      *(long *)(local_128 + lVar18) =
                                           *(long *)(local_128 + lVar18) + lVar20;
                                      ((long *)(local_128 + lVar18))[1] = lVar16 + lVar39;
                                    }
                                  }
                                }
                              }
LAB_001065fb:
                              sVar10 = sVar10 + 1;
                              uVar29 = uVar24;
                            } while (sVar10 < *param_2);
                          }
                          lVar16 = 0;
                          if (uVar37 != 0) {
                            do {
                              lVar18 = *(long *)(lVar14 + lVar16);
                              lVar20 = *(long *)(local_128 + 8 + lVar16 * 2);
                              lVar39 = *(long *)(lVar15 + 8 + lVar16 * 2);
                              *(long *)(local_110 + lVar16) =
                                   *(long *)(local_110 + lVar16) +
                                   (*(long *)(local_128 + lVar16 * 2) -
                                   *(long *)(lVar15 + lVar16 * 2));
                              *(long *)(lVar14 + lVar16) = lVar18 + (lVar20 - lVar39);
                              lVar16 = lVar16 + 8;
                            } while (lVar16 != lVar17 * 8);
                          }
                        }
                      }
                      if (local_120 != -1) {
                        ft_mem_free(lVar4,local_120);
                        local_120 = 0;
                      }
                      ft_mem_free(lVar4,lVar19);
                      ft_mem_free(lVar4);
                      lVar16 = plVar2[9];
                      if ((ulong)(lVar6 - lVar5) < (ulong)(lVar16 - *plVar2)) {
                        lVar16 = (lVar6 - lVar5) + *plVar2;
                      }
                      plVar2[8] = lVar16;
                    }
                    uVar34 = uVar34 + 1;
                    local_e8 = uVar9 + local_e8;
                  } while ((uVar12 & 0xfff) != uVar34);
                }
                uVar12 = *(uint *)(lVar23 + 0x4c8);
                uVar34 = uVar12 & 2;
                if (uVar34 != 0) {
                  *(undefined8 *)(local_110 + (ulong)uVar11 * 8) = 0;
                  *(undefined8 *)(lVar14 + (ulong)uVar11 * 8) = 0;
                  *(undefined8 *)(local_110 + (ulong)(uVar11 + 1) * 8) = 0;
                  *(undefined8 *)(lVar14 + (ulong)(uVar11 + 1) * 8) = 0;
                }
                uVar12 = uVar12 & 0x10;
                if (uVar12 != 0) {
                  *(undefined8 *)(local_110 + (ulong)(uVar11 + 2) * 8) = 0;
                  *(undefined8 *)(lVar14 + (ulong)(uVar11 + 2) * 8) = 0;
                  *(undefined8 *)(local_110 + (ulong)(uVar11 + 3) * 8) = 0;
                  *(undefined8 *)(lVar14 + (ulong)(uVar11 + 3) * 8) = 0;
                }
                plVar21 = param_3;
                for (lVar23 = 0; (uint)lVar23 < uVar37; lVar23 = lVar23 + 1) {
                  plVar33 = (long *)(lVar23 * 0x10 + *(long *)(param_2 + 4));
                  *plVar21 = *plVar21 + (*(long *)(local_110 + lVar23 * 8) + 0x200 >> 10);
                  plVar21[1] = plVar21[1] + (*(long *)(lVar14 + lVar23 * 8) + 0x200 >> 10);
                  plVar21 = plVar21 + 2;
                  *plVar33 = *plVar33 +
                             (long)(short)((ulong)(*(long *)(local_110 + lVar23 * 8) + 0x8000) >>
                                          0x10);
                  plVar33[1] = plVar33[1] +
                               (long)(short)((ulong)(*(long *)(lVar14 + lVar23 * 8) + 0x8000) >>
                                            0x10);
                }
                if (uVar34 == 0) {
                  lVar23 = *(long *)(param_2 + 4);
                  plVar21 = (long *)(lVar23 + (ulong)uVar11 * 0x10);
                  lVar17 = plVar21[1];
                  param_1[0xe] = *plVar21;
                  param_1[0xf] = lVar17;
                  plVar21 = (long *)(lVar23 + (ulong)(uVar11 + 1) * 0x10);
                  lVar23 = plVar21[1];
                  param_1[0x10] = *plVar21;
                  param_1[0x11] = lVar23;
                  *(int *)(param_1 + 0xd) =
                       (int)((param_3[(ulong)(uVar11 + 1) * 2] - param_3[(ulong)uVar11 * 2]) + 0x20
                            >> 6);
                }
                if (uVar12 == 0) {
                  lVar23 = *(long *)(param_2 + 4);
                  plVar21 = (long *)(lVar23 + (ulong)(uVar11 + 2) * 0x10);
                  lVar17 = plVar21[1];
                  param_1[0x27] = *plVar21;
                  param_1[0x28] = lVar17;
                  plVar21 = (long *)(lVar23 + (ulong)(uVar11 + 3) * 0x10);
                  lVar23 = plVar21[1];
                  param_1[0x29] = *plVar21;
                  param_1[0x2a] = lVar23;
                  *(int *)((long)param_1 + 0x134) =
                       (int)((param_3[(ulong)(uVar11 + 3) * 2 + 1] -
                             param_3[(ulong)(uVar11 + 2) * 2 + 1]) + 0x20 >> 6);
                }
              }
            }
LAB_0010670a:
            ft_mem_free(lVar4,local_110);
            ft_mem_free(lVar4,lVar14);
            if (local_108 != -1) goto LAB_00106129;
          }
          else {
            local_108 = 0;
            local_100 = 0;
            local_f0 = 0;
LAB_00106129:
            ft_mem_free(lVar4,local_108);
          }
          ft_mem_free(lVar4,__dest);
          ft_mem_free(lVar4,local_f0);
          ft_mem_free(lVar4,local_100);
          FT_Stream_ExitFrame(plVar2);
        }
      }
    }
  }
  else {
    local_138 = (undefined1 *)0x0;
    local_128 = 0;
  }
  ft_mem_free(lVar4,lVar15);
  ft_mem_free(lVar4,local_128);
  ft_mem_free(lVar4,local_138);
  iVar35 = local_4c;
LAB_00105f65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar35;
}



void iup_worker_interpolate_(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_2 <= param_3) {
    uVar6 = param_5;
    if (param_5 <= param_4) {
      uVar6 = param_4;
    }
    if (uVar6 < *(uint *)(param_1 + 3)) {
      uVar7 = (ulong)param_2;
      lVar8 = param_1[2];
      lVar9 = (ulong)param_4 * 0x10;
      lVar12 = (ulong)param_5 * 0x10;
      lVar13 = *(long *)(lVar8 + lVar9);
      lVar4 = *(long *)(lVar8 + lVar12);
      lVar10 = lVar9;
      lVar11 = lVar4;
      if (lVar13 <= lVar4) {
        lVar10 = lVar12;
        lVar12 = lVar9;
        lVar11 = lVar13;
        lVar13 = lVar4;
      }
      lVar4 = *param_1;
      lVar5 = param_1[1];
      lVar9 = *(long *)(lVar4 + lVar10);
      lVar1 = *(long *)(lVar5 + lVar12);
      lVar10 = *(long *)(lVar5 + lVar10);
      lVar12 = *(long *)(lVar4 + lVar12);
      if ((lVar1 == lVar10) || (bVar2 = false, lVar11 == lVar13)) {
        do {
          lVar8 = uVar7 * 0x10;
          lVar13 = *(long *)(lVar4 + lVar8);
          if (lVar12 < lVar13) {
            lVar11 = lVar13 + (lVar10 - lVar9);
            if (lVar13 < lVar9) {
              lVar11 = lVar1;
            }
          }
          else {
            lVar11 = lVar13 + (lVar1 - lVar12);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar6;
          *(long *)(lVar5 + lVar8) = lVar11;
        } while (uVar6 <= param_3);
      }
      else {
        iVar3 = 0;
        while( true ) {
          lVar14 = uVar7 * 0x10;
          lVar4 = *(long *)(lVar4 + lVar14);
          if (lVar12 < lVar4) {
            if (lVar4 < lVar9) {
              if (!bVar2) {
                iVar3 = FT_DivFix(lVar10 - lVar1,lVar13 - lVar11);
                lVar8 = param_1[2];
                lVar5 = param_1[1];
              }
              lVar4 = (long)(*(int *)(lVar8 + lVar14) - (int)lVar11) * (long)iVar3;
              bVar2 = true;
              lVar4 = (int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + lVar1;
            }
            else {
              lVar4 = lVar4 + (lVar10 - lVar9);
            }
          }
          else {
            lVar4 = lVar4 + (lVar1 - lVar12);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar6;
          *(long *)(lVar5 + lVar14) = lVar4;
          if (param_3 < uVar6) break;
          lVar4 = *param_1;
        }
      }
    }
    return;
  }
  return;
}



void Modify_CVT_Check_part_0(long param_1)

{
  void *__dest;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x2b0) != *(long *)(param_1 + 0x2c0)) {
    __dest = (void *)ft_mem_qrealloc(*(undefined8 *)(param_1 + 0x10),8,
                                     *(undefined8 *)(param_1 + 0x2b8),
                                     *(undefined8 *)(param_1 + 0x2a8),*(long *)(param_1 + 0x2c0),
                                     &local_14);
    *(void **)(param_1 + 0x2c0) = __dest;
    *(int *)(param_1 + 0x18) = local_14;
    if (local_14 == 0) {
      *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2a8);
      memcpy(__dest,*(void **)(param_1 + 0x2b0),*(long *)(param_1 + 0x2a8) << 3);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2c0);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void Write_CVT(long param_1,long param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x278) == 3) {
    Modify_CVT_Check_part_0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) = param_3;
  }
  return;
}



void Move_CVT_Stretched(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x278) == 3) {
    Modify_CVT_Check_part_0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x2b0) + param_2 * 8);
    uVar2 = Current_Ratio(param_1);
    lVar3 = FT_DivFix(param_3,uVar2);
    *(long *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) = lVar3 + lVar1;
  }
  return;
}



void Write_CVT_Stretched(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x278) == 3) {
    Modify_CVT_Check_part_0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = Current_Ratio(param_1);
    lVar1 = *(long *)(param_1 + 0x2b0);
    uVar2 = FT_DivFix(param_3,uVar2);
    *(undefined8 *)(lVar1 + param_2 * 8) = uVar2;
  }
  return;
}



uint tt_face_init(undefined8 param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5
                 )

{
  short sVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  size_t sVar13;
  char *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  void *__base;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  long *plVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *extraout_RDX;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  char *pcVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  char *__s;
  long in_FS_OFFSET;
  uint local_d4;
  ulong local_d0;
  int local_c8 [31];
  int local_4c;
  char local_48 [8];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = FT_Get_Module_Interface(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),&_LC10);
  if (lVar12 == 0) {
    uVar9 = 0xb;
    goto LAB_00107130;
  }
  uVar9 = FT_Stream_Seek(param_1,0);
  if ((uVar9 != 0) ||
     (uVar9 = (**(code **)(lVar12 + 8))(param_1,param_2,param_3,param_4,param_5), uVar9 != 0))
  goto LAB_00107130;
  lVar2 = *(long *)(param_2 + 0x118);
  if (((lVar2 != 0x74727565 && lVar2 != 0xa56b6264) && lVar2 != 0xa56c7374) &&
     ((lVar2 - 0x10000U & 0xfffffffffffeffff) != 0)) {
    uVar9 = 2;
    goto LAB_00107130;
  }
  lVar2 = *(long *)(param_2 + 0xc0);
  *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x800;
  if (((int)param_3 < 0) ||
     (uVar9 = (**(code **)(lVar12 + 0x10))(lVar2,param_2,param_3,param_4,param_5), uVar9 != 0))
  goto LAB_00107130;
  __s = *(char **)(param_2 + 0x28);
  if (__s != (char *)0x0) {
    sVar13 = strlen(__s);
    if ((7 < sVar13) && (__s[6] == '+')) {
      pcVar27 = __s;
      do {
        if (0x19 < (int)*pcVar27 - 0x41U) goto LAB_00107182;
        pcVar27 = pcVar27 + 1;
      } while (__s + 6 != pcVar27);
      __s = __s + 7;
    }
LAB_00107182:
    pcVar27 = "cpop";
    do {
      pcVar14 = strstr(__s,pcVar27);
      if (pcVar14 != (char *)0x0) {
        pcVar15 = *(code **)(param_2 + 0x340);
        goto LAB_001072e0;
      }
      pcVar27 = pcVar27 + 0x14;
    } while (pcVar27 != "");
  }
  piVar29 = local_c8;
  sVar1 = *(short *)(param_2 + 0x120);
  piVar25 = piVar29;
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    piVar25[0] = 0;
    piVar25[1] = 0;
    piVar25 = piVar25 + (ulong)bVar8 * -4 + 2;
  }
  pcVar15 = *(code **)(param_2 + 0x340);
  *piVar25 = 0;
  if (sVar1 == 0) {
    local_c8[0] = 0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
  }
  else {
    bVar7 = false;
    lVar12 = 0;
    bVar5 = false;
    bVar6 = false;
    do {
      lVar17 = *(long *)(param_2 + 0x128);
      lVar26 = lVar12 * 0x20;
      lVar28 = *(long *)(lVar17 + lVar26);
      if (lVar28 == 0x6670676d) {
        bVar6 = true;
        lVar28 = 1;
LAB_00107263:
        uVar18 = 0;
        puVar23 = &sfnt_id_3 + lVar28 * 2;
        piVar25 = piVar29;
        while( true ) {
          if (((undefined8 *)(lVar17 + lVar26))[3] == puVar23[1]) {
            if ((uVar18 == 0) && (pcVar15 != (code *)0x0)) {
              iVar10 = (*pcVar15)(param_2,*(undefined8 *)(lVar17 + lVar26),
                                  *(undefined8 *)(param_2 + 0xc0),0);
              if (iVar10 == 0) {
                uVar22 = *(ulong *)(*(long *)(param_2 + 0x128) + 0x18 + lVar26);
                uVar16 = *(undefined8 *)(param_2 + 0xc0);
                iVar10 = FT_Stream_EnterFrame(uVar16,uVar22);
                if (iVar10 == 0) {
                  if (uVar22 < 4) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    uVar30 = uVar22;
                    do {
                      uVar30 = uVar30 - 4;
                      iVar10 = FT_Stream_GetULong(uVar16);
                      uVar18 = (ulong)(uint)((int)uVar18 + iVar10);
                    } while (3 < uVar30);
                    uVar22 = (ulong)((uint)uVar22 & 3);
                  }
                  if (uVar22 != 0) {
                    iVar10 = 3;
                    do {
                      bVar8 = FT_Stream_GetByte(uVar16);
                      cVar4 = (char)iVar10;
                      iVar10 = iVar10 + -1;
                      uVar9 = (int)uVar18 + ((uint)bVar8 << (cVar4 * '\b' & 0x1fU));
                      uVar18 = (ulong)uVar9;
                    } while (3 - (int)uVar22 != iVar10);
                    uVar18 = (ulong)uVar9;
                  }
                  FT_Stream_ExitFrame(uVar16);
                }
              }
              pcVar15 = *(code **)(param_2 + 0x340);
            }
            iVar10 = *piVar25;
            if (*puVar23 == uVar18) {
              iVar10 = iVar10 + 1;
              *piVar25 = iVar10;
            }
            if (iVar10 == 3) goto LAB_001072e0;
          }
          piVar25 = piVar25 + 1;
          puVar23 = puVar23 + 6;
          if (&local_4c == piVar25) break;
          lVar17 = *(long *)(param_2 + 0x128);
        }
      }
      else {
        if (lVar28 == 0x70726570) {
          bVar7 = true;
          lVar28 = 2;
          goto LAB_00107263;
        }
        if (lVar28 == 0x63767420) {
          bVar5 = true;
          lVar28 = 0;
          goto LAB_00107263;
        }
      }
      lVar12 = lVar12 + 1;
    } while ((ushort)lVar12 < *(ushort *)(param_2 + 0x120));
  }
  plVar21 = &DAT_00110c08;
  while( true ) {
    iVar10 = local_c8[0];
    if ((!bVar5) && (*plVar21 == 0)) {
      iVar10 = local_c8[0] + 1;
      *piVar29 = iVar10;
    }
    if ((!bVar6) && (plVar21[2] == 0)) {
      iVar10 = iVar10 + 1;
      *piVar29 = iVar10;
    }
    if ((!bVar7) && (plVar21[4] == 0)) {
      iVar10 = iVar10 + 1;
      *piVar29 = iVar10;
    }
    if (iVar10 == 3) goto LAB_001072e0;
    plVar21 = plVar21 + 6;
    piVar29 = piVar29 + 1;
    if (plVar21 == (long *)&DAT_001111d8) break;
    local_c8[0] = *piVar29;
  }
  goto LAB_001072e8;
LAB_001072e0:
  *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x2000;
LAB_001072e8:
  uVar11 = 0;
  puVar23 = &local_d0;
  uVar16 = *(undefined8 *)(lVar2 + 0x38);
  local_d4 = (*pcVar15)(param_2,0x68646d78,lVar2,puVar23);
  if ((local_d4 == 0) && (7 < local_d0)) {
    local_d4 = FT_Stream_ExtractFrame(lVar2,local_d0,param_2 + 0x508);
    uVar18 = local_d0;
    uVar9 = local_d4;
    if (local_d4 != 0) goto LAB_00107130;
    lVar12 = *(long *)(param_2 + 0x508);
    uVar9 = *(uint *)(lVar12 + 4);
    uVar20 = *(ushort *)(lVar12 + 2) << 8 | *(ushort *)(lVar12 + 2) >> 8;
    uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8;
    uVar9 = uVar3 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (0xfffeffff < uVar9) {
      uVar9 = uVar3;
    }
    uVar22 = (ulong)uVar9;
    if ((uVar20 - 1 < 0xff) && ((*(long *)(param_2 + 0x20) + 5U & 0xfffffffffffffffc) == uVar22)) {
      __base = (void *)ft_mem_qrealloc(uVar16,8,0,uVar20,0,&local_d4);
      *(void **)(param_2 + 0x528) = __base;
      if (local_d4 != 0) goto LAB_001076bd;
      lVar17 = lVar12 + 8;
      uVar30 = lVar17 + uVar22;
      if (uVar18 + lVar12 < uVar30) {
        sVar13 = 0;
      }
      else {
        uVar24 = 1;
        do {
          *(long *)((long)__base + uVar24 * 8 + -8) = lVar17;
          sVar13 = uVar24 & 0xffffffff;
          if ((uint)uVar20 <= (uint)uVar24) break;
          uVar30 = uVar30 + uVar22;
          uVar24 = uVar24 + 1;
          lVar17 = lVar17 + uVar22;
        } while (uVar30 <= uVar18 + lVar12);
      }
      qsort(__base,sVar13,8,compare_ppem);
      *(int *)(param_2 + 0x518) = (int)sVar13;
      *(ulong *)(param_2 + 0x510) = local_d0;
      *(ulong *)(param_2 + 0x520) = uVar22;
    }
    else {
LAB_001076bd:
      FT_Stream_ReleaseFrame(lVar2,param_2 + 0x508);
      *(undefined8 *)(param_2 + 0x510) = 0;
    }
    uVar9 = local_d4;
    if (local_d4 != 0) goto LAB_00107130;
  }
  uVar18 = *(ulong *)(param_2 + 0x10);
  if ((uVar18 & 0x20001) != 0) {
    if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) {
      uVar9 = (**(code **)(param_2 + 0x340))(param_2,0x676c7966,lVar2,param_2 + 0x4a8);
      if ((char)uVar9 == -0x72) {
        *(undefined8 *)(param_2 + 0x4a8) = 0;
LAB_00107752:
        uVar16 = 0;
      }
      else {
        if (uVar9 != 0) goto LAB_00107130;
        if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) != 0) goto LAB_00107752;
        uVar16 = FT_Stream_Pos(lVar2);
      }
      *(undefined8 *)(param_2 + 0x4b0) = uVar16;
      iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x6c6f6361,lVar2);
      if (iVar10 != 0) {
        uVar9 = 0x90;
        goto LAB_00107130;
      }
      uVar18 = (-(ulong)(*(short *)(param_2 + 0x186) == 0) & 0xfffffffffffe0000) + 0x40000;
      bVar8 = 2 - (*(short *)(param_2 + 0x186) == 0);
      if (uVar18 < local_d0) {
        local_d0 = uVar18;
      }
      uVar22 = local_d0 >> (bVar8 & 0x3f);
      uVar18 = *(long *)(param_2 + 0x20) + 1;
      *(ulong *)(param_2 + 0x4f8) = uVar22;
      if (uVar22 < uVar18) {
        uVar20 = *(ushort *)(param_2 + 0x120);
        uVar22 = *(ulong *)(param_2 + 0x128);
        uVar18 = uVar18 << (bVar8 & 0x3f);
        lVar12 = FT_Stream_Pos(lVar2);
        uVar30 = (ulong)uVar20 * 0x20 + uVar22;
        if (uVar22 < uVar30) {
          bVar5 = false;
          uVar24 = 0x7fffffff;
          do {
            uVar19 = *(long *)(uVar22 + 0x10) - lVar12;
            if (((long)uVar19 < (long)uVar24) && (0 < (long)uVar19)) {
              bVar5 = true;
              uVar24 = uVar19;
            }
            uVar22 = uVar22 + 0x20;
          } while (uVar22 < uVar30);
          if (!bVar5) goto LAB_00107a99;
        }
        else {
LAB_00107a99:
          uVar24 = *(long *)(lVar2 + 8) - lVar12;
        }
        if (uVar24 < uVar18) {
          lVar12 = 0;
          if (*(long *)(param_2 + 0x4f8) != 0) {
            lVar12 = *(long *)(param_2 + 0x4f8) + -1;
          }
          *(long *)(param_2 + 0x20) = lVar12;
        }
        else {
          *(long *)(param_2 + 0x4f8) = *(long *)(param_2 + 0x20) + 1;
          local_d0 = uVar18;
        }
      }
      uVar9 = FT_Stream_ExtractFrame(lVar2,local_d0,param_2 + 0x500);
      if (((*(long *)(param_2 + 0x4a8) != 0) && ((char)uVar9 == -0x72)) || (uVar9 != 0))
      goto LAB_00107130;
    }
    uVar9 = tt_face_load_cvt(param_2,lVar2);
    if ((uVar9 != 0) && ((char)uVar9 != -0x72)) goto LAB_00107130;
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x6670676d,lVar2,puVar23);
    if (iVar10 == 0) {
      *(ulong *)(param_2 + 0x458) = local_d0;
      uVar9 = FT_Stream_ExtractFrame(lVar2,local_d0,param_2 + 0x460);
      if ((uVar9 != 0) && ((char)uVar9 != -0x72)) goto LAB_00107130;
    }
    else {
      *(undefined8 *)(param_2 + 0x460) = 0;
      *(undefined8 *)(param_2 + 0x458) = 0;
    }
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x70726570,lVar2,puVar23);
    if (iVar10 == 0) {
      *(ulong *)(param_2 + 0x468) = local_d0;
      uVar9 = FT_Stream_ExtractFrame(lVar2,local_d0,param_2 + 0x470);
      if ((uVar9 != 0) && (uVar11 = uVar9, (char)uVar9 != -0x72)) goto LAB_00107130;
    }
    else {
      *(undefined8 *)(param_2 + 0x470) = 0;
      *(undefined8 *)(param_2 + 0x468) = 0;
    }
    if ((((*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) && (*(int *)(param_2 + 0x38) != 0)) &&
        (*(long *)(param_2 + 0x500) != 0)) && (uVar18 = *(ulong *)(param_2 + 0x4f8), uVar18 != 0)) {
      uVar22 = 0;
      uVar9 = 0;
      uVar30 = 0;
      do {
        tt_face_get_location(param_2,uVar30 & 0xffffffff,puVar23);
        if ((local_d0 != 0) && (uVar9 = uVar9 + 1, uVar22 = uVar30, 1 < uVar9)) goto LAB_001073d1;
        uVar30 = uVar30 + 1;
        puVar23 = extraout_RDX;
      } while (uVar18 != uVar30);
      if (uVar9 == 1) {
        if (uVar22 != 0) {
          iVar10 = FT_Get_Glyph_Name(param_2,uVar22 & 0xffffffff,local_48,8);
          if (((iVar10 != 0) || (local_48[0] != '.')) ||
             (iVar10 = strcmp(local_48,".notdef"), iVar10 != 0)) goto LAB_001073d1;
        }
        uVar18 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffe;
        *(ulong *)(param_2 + 0x10) = uVar18;
        goto LAB_001073d5;
      }
    }
LAB_001073d1:
    uVar18 = *(ulong *)(param_2 + 0x10);
  }
LAB_001073d5:
  if ((((uVar18 & 0x100) == 0) || (param_3 >> 0x10 == 0)) ||
     (uVar11 = FT_Set_Named_Instance(param_2), uVar9 = uVar11, uVar11 == 0)) {
    *(code **)(param_2 + 0x368) = TT_Load_Composite_Glyph;
    *(code **)(param_2 + 0x348) = TT_Access_Glyph_Frame;
    *(code **)(param_2 + 0x350) = TT_Forget_Glyph_Frame;
    *(code **)(param_2 + 0x358) = TT_Load_Glyph_Header;
    *(code **)(param_2 + 0x360) = TT_Load_Simple_Glyph;
    uVar9 = uVar11;
  }
LAB_00107130:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



long tt_get_interface(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = ft_service_list_lookup(tt_services);
  if (((lVar1 == 0) && (param_1 != 0)) && (*(long *)(param_1 + 8) != 0)) {
    plVar2 = (long *)FT_Get_Module(*(long *)(param_1 + 8),&_LC10);
    if ((plVar2 != (long *)0x0) && (*(long *)(*plVar2 + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00107b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*(long *)(*plVar2 + 0x28) + 0x20))(param_1,param_2);
      return lVar1;
    }
  }
  return lVar1;
}



undefined8 tt_property_set(long param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 != 0) {
    return 0xc;
  }
  if (param_4 == '\0') {
    iVar1 = *param_3;
  }
  else {
    lVar2 = strtol((char *)param_3,(char **)0x0,10);
    iVar1 = (int)lVar2;
  }
  if ((iVar1 - 0x26U & 0xfffffffd) != 0) {
    if (iVar1 != 0x23) {
      return 7;
    }
    *(undefined4 *)(param_1 + 0x78) = 0x23;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x28;
  return 0;
}



void Ins_DELTAP_constprop_0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = (*(code *)param_1[0x85])();
  uVar1 = *param_2;
  if (uVar1 == 0) {
    lVar5 = param_1[7];
  }
  else {
    uVar8 = 1;
    lVar4 = param_1[7];
    do {
      while( true ) {
        if (lVar4 < 2) {
          if (*(char *)((long)param_1 + 0x3e9) != '\0') {
            *(undefined4 *)(param_1 + 3) = 0x81;
          }
          param_1[7] = 0;
          param_1[8] = 0;
          return;
        }
        lVar5 = lVar4 + -2;
        param_1[7] = lVar5;
        uVar2 = *(ulong *)(param_1[6] + -8 + lVar4 * 8);
        uVar7 = *(ulong *)(param_1[6] + lVar5 * 8);
        if ((ushort)uVar2 < *(ushort *)((long)param_1 + 0x54)) break;
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
        }
LAB_00107cde:
        uVar8 = uVar8 + 1;
        lVar4 = lVar5;
        if (uVar1 < uVar8) goto LAB_00107d79;
      }
      uVar6 = (ulong)((uint)(uVar7 >> 4) & 0xf);
      if ((char)param_1[0x53] == 'q') {
        uVar6 = uVar6 + 0x10;
      }
      else if ((char)param_1[0x53] == 'r') {
        uVar6 = uVar6 + 0x20;
      }
      if (lVar3 != uVar6 + *(ushort *)(param_1 + 0x4c)) goto LAB_00107cde;
      uVar7 = (ulong)((uint)uVar7 & 0xf);
      lVar4 = uVar7 - 8;
      if (-1 < lVar4) {
        lVar4 = uVar7 - 7;
      }
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
          (*(char *)((long)param_1 + 1099) != '\0')) &&
         (((*(char *)((long)param_1 + 0x44c) != '\0' && (*(char *)((long)param_1 + 0x44d) != '\0'))
          || ((((char)param_1[0x7d] == '\0' || ((short)param_1[0x45] == 0)) &&
              ((*(byte *)(param_1[0xe] + (uVar2 & 0xffff)) & 0x10) == 0)))))) goto LAB_00107cde;
      uVar8 = uVar8 + 1;
      (*(code *)param_1[0x83])
                (param_1,param_1 + 9,uVar2 & 0xffff,
                 lVar4 << (6U - *(char *)((long)param_1 + 0x262) & 0x3f));
      lVar5 = param_1[7];
      lVar4 = lVar5;
    } while (uVar8 <= uVar1);
  }
LAB_00107d79:
  param_1[8] = lVar5;
  return;
}



void Ins_IP_constprop_0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long local_50;
  undefined8 local_40;
  
  lVar8 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x20) < lVar8) {
LAB_00107f08:
    lVar10 = *(long *)(param_1 + 0x38);
    if (*(char *)(param_1 + 0x3e9) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x21a);
    if (((*(short *)(param_1 + 0x26c) == 0) || (*(short *)(param_1 + 0x26e) == 0)) ||
       (*(short *)(param_1 + 0x270) == 0)) {
      if (*(ushort *)(param_1 + 0x54) <= uVar1) goto LAB_00107f08;
      lVar10 = (ulong)uVar1 * 0x10;
      plVar12 = (long *)(*(long *)(param_1 + 0x58) + lVar10);
      plVar11 = (long *)(lVar10 + *(long *)(param_1 + 0x60));
      if (*(ushort *)(param_1 + 0x21c) < *(ushort *)(param_1 + 0x94)) {
        plVar7 = (long *)((ulong)*(ushort *)(param_1 + 0x21c) * 0x10 + *(long *)(param_1 + 0x98));
        bVar6 = true;
        local_50 = (**(code **)(param_1 + 0x408))(param_1,*plVar7 - *plVar12,plVar7[1] - plVar12[1])
        ;
        goto LAB_00107ec6;
      }
      local_40 = 0;
      bVar6 = true;
      local_50 = 0;
    }
    else {
      if (*(ushort *)(param_1 + 0x54) <= uVar1) goto LAB_00107f08;
      lVar10 = (ulong)uVar1 * 0x10;
      plVar12 = (long *)(*(long *)(param_1 + 0x68) + lVar10);
      plVar11 = (long *)(lVar10 + *(long *)(param_1 + 0x60));
      if (*(ushort *)(param_1 + 0x21c) < *(ushort *)(param_1 + 0x94)) {
        plVar7 = (long *)((ulong)*(ushort *)(param_1 + 0x21c) * 0x10 + *(long *)(param_1 + 0xa8));
        lVar8 = *plVar7;
        lVar10 = plVar7[1];
        if (*(long *)(param_1 + 0x198) == *(long *)(param_1 + 0x1a0)) {
          bVar6 = false;
          local_50 = (**(code **)(param_1 + 0x408))(param_1,lVar8 - *plVar12,lVar10 - plVar12[1]);
        }
        else {
          bVar6 = false;
          lVar9 = (long)((int)lVar8 - (int)*plVar12) * (long)(int)*(long *)(param_1 + 0x198);
          lVar8 = (long)((int)lVar10 - (int)plVar12[1]) * (long)(int)*(long *)(param_1 + 0x1a0);
          local_50 = (**(code **)(param_1 + 0x408))
                               (param_1,(long)(int)((ulong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >>
                                                   0x10),
                                (long)(int)((ulong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10));
        }
LAB_00107ec6:
        plVar7 = (long *)((ulong)*(ushort *)(param_1 + 0x21c) * 0x10 + *(long *)(param_1 + 0xa0));
        local_40 = (**(code **)(param_1 + 0x400))(param_1,*plVar7 - *plVar11,plVar7[1] - plVar11[1])
        ;
        lVar8 = *(long *)(param_1 + 0x230);
      }
      else {
        local_40 = 0;
        bVar6 = false;
        local_50 = 0;
      }
    }
    lVar10 = *(long *)(param_1 + 0x38);
    while (0 < lVar8) {
      lVar10 = lVar10 + -1;
      *(long *)(param_1 + 0x38) = lVar10;
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar10 * 8);
      if ((uint)uVar2 < (uint)*(ushort *)(param_1 + 0xd4)) {
        lVar8 = *plVar12;
        lVar10 = plVar12[1];
        pcVar3 = *(code **)(param_1 + 0x408);
        lVar9 = (uVar2 & 0xffffffff) * 0x10;
        if (bVar6) {
          plVar7 = (long *)(lVar9 + *(long *)(param_1 + 0xd8));
          lVar8 = (*pcVar3)(param_1,*plVar7 - lVar8,plVar7[1] - lVar10);
        }
        else {
          plVar7 = (long *)(*(long *)(param_1 + 0xe8) + lVar9);
          lVar4 = *plVar7;
          lVar5 = plVar7[1];
          if (*(long *)(param_1 + 0x198) == *(long *)(param_1 + 0x1a0)) {
            lVar8 = (*pcVar3)(param_1,lVar4 - lVar8,lVar5 - lVar10);
          }
          else {
            lVar8 = (long)((int)lVar4 - (int)lVar8) * (long)(int)*(long *)(param_1 + 0x198);
            lVar10 = (long)((int)lVar5 - (int)lVar10) * (long)(int)*(long *)(param_1 + 0x1a0);
            lVar8 = (*pcVar3)(param_1,(long)(int)((ulong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10)
                              ,(long)(int)((ulong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10));
          }
        }
        plVar7 = (long *)(lVar9 + *(long *)(param_1 + 0xe0));
        lVar9 = (**(code **)(param_1 + 0x400))(param_1,*plVar7 - *plVar11,plVar7[1] - plVar11[1]);
        lVar10 = 0;
        if ((lVar8 != 0) && (lVar10 = lVar8, local_50 != 0)) {
          lVar10 = FT_MulDiv(lVar8,local_40,local_50);
        }
        (**(code **)(param_1 + 0x418))(param_1,param_1 + 200,uVar2 & 0xffff,lVar10 - lVar9);
        lVar10 = *(long *)(param_1 + 0x38);
      }
      else if (*(char *)(param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
        return;
      }
      lVar8 = *(long *)(param_1 + 0x230) + -1;
      *(long *)(param_1 + 0x230) = lVar8;
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 1;
  *(long *)(param_1 + 0x40) = lVar10;
  return;
}



void Ins_ISECT_constprop_0(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
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
  long *plVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  
  uVar21 = *param_2;
  uVar3 = (ushort)param_2[4];
  uVar17 = (ushort)param_2[3];
  if (uVar3 <= uVar17) {
    uVar3 = uVar17;
  }
  if (uVar3 < *(ushort *)(param_1 + 0x54)) {
    uVar3 = (ushort)param_2[2];
    uVar17 = (ushort)param_2[1];
    if (uVar3 <= uVar17) {
      uVar3 = uVar17;
    }
    if ((uVar3 < *(ushort *)(param_1 + 0x94)) && ((ushort)uVar21 < *(ushort *)(param_1 + 0xd4))) {
      lVar13 = (param_2[4] & 0xffff) * 0x10;
      lVar18 = (param_2[3] & 0xffff) * 0x10;
      plVar16 = (long *)(*(long *)(param_1 + 0x60) + lVar13);
      plVar4 = (long *)(*(long *)(param_1 + 0x60) + lVar18);
      lVar20 = (param_2[2] & 0xffff) * 0x10;
      lVar10 = *plVar4;
      lVar11 = plVar4[1];
      lVar25 = (param_2[1] & 0xffff) * 0x10;
      lVar12 = plVar16[1];
      plVar4 = (long *)(*(long *)(param_1 + 0xa0) + lVar20);
      plVar5 = (long *)(*(long *)(param_1 + 0xa0) + lVar25);
      lVar14 = *plVar16 - lVar10;
      lVar1 = *plVar5;
      lVar2 = plVar5[1];
      lVar15 = lVar11 - lVar12;
      lVar19 = *plVar4 - lVar1;
      lVar6 = plVar4[1] - lVar2;
      lVar7 = FT_MulDiv(lVar19,lVar15,0x40);
      lVar8 = FT_MulDiv(lVar6,lVar14,0x40);
      lVar7 = lVar7 + lVar8;
      lVar8 = FT_MulDiv(lVar19,lVar14,0x40);
      lVar9 = FT_MulDiv(lVar6,lVar12 - lVar11,0x40);
      uVar21 = uVar21 & 0xffff;
      lVar23 = uVar21 * 0x10;
      lVar12 = -lVar7;
      if (0 < lVar7) {
        lVar12 = lVar7;
      }
      lVar8 = lVar8 + lVar9;
      lVar9 = -lVar8;
      if (0 < lVar8) {
        lVar9 = lVar8;
      }
      if (lVar9 < lVar12 * 0x13) {
        lVar10 = FT_MulDiv(lVar10 - lVar1,lVar15,0x40);
        lVar11 = FT_MulDiv(lVar11 - lVar2,lVar14,0x40);
        lVar12 = FT_MulDiv(lVar10 + lVar11,lVar19,lVar7);
        lVar11 = FT_MulDiv(lVar10 + lVar11,lVar6,lVar7);
        plVar16 = (long *)(*(long *)(param_1 + 0xa0) + lVar25);
        lVar10 = plVar16[1];
        plVar4 = (long *)(*(long *)(param_1 + 0xe0) + lVar23);
        *plVar4 = *plVar16 + lVar12;
        plVar4[1] = lVar10 + lVar11;
      }
      else {
        plVar24 = (long *)(lVar23 + *(long *)(param_1 + 0xe0));
        plVar26 = (long *)(lVar25 + *(long *)(param_1 + 0xa0));
        plVar4 = (long *)(lVar18 + *(long *)(param_1 + 0x60));
        plVar5 = (long *)(*(long *)(param_1 + 0xa0) + lVar20);
        plVar16 = (long *)(*(long *)(param_1 + 0x60) + lVar13);
        lVar10 = *plVar5 + *plVar26 + *plVar4 + *plVar16;
        if (lVar10 < 0) {
          lVar10 = lVar10 + 3;
        }
        *plVar24 = lVar10 >> 2;
        lVar10 = plVar5[1] + plVar26[1] + plVar4[1] + plVar16[1];
        if (lVar10 < 0) {
          lVar10 = lVar10 + 3;
        }
        plVar24[1] = lVar10 >> 2;
      }
      pbVar22 = (byte *)(uVar21 + *(long *)(param_1 + 0xf0));
      *pbVar22 = *pbVar22 | 0x18;
      return;
    }
  }
  if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



void Ins_MIRP_constprop_0(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int extraout_EDX;
  long lVar13;
  long lVar14;
  long *plVar15;
  ushort uVar16;
  long lVar17;
  
  uVar2 = *param_2;
  uVar6 = *(ushort *)(param_1 + 0x218);
  uVar16 = (ushort)uVar2;
  if (((uVar16 < *(ushort *)(param_1 + 0x94)) &&
      (uVar11 = param_2[1] + 1, uVar11 < *(long *)(param_1 + 0x2a8) + 1U)) &&
     (uVar6 < *(ushort *)(param_1 + 0x54))) {
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar11 = (**(code **)(param_1 + 0x430))(param_1);
      uVar6 = *(ushort *)(param_1 + 0x218);
      uVar9 = uVar11;
    }
    uVar3 = *(ulong *)(param_1 + 600);
    lVar17 = uVar11 - uVar3;
    if ((long)(uVar11 - uVar3) < 0) {
      lVar17 = uVar3 - uVar11;
    }
    uVar11 = uVar9;
    if ((lVar17 < *(long *)(param_1 + 0x250)) && (uVar11 = uVar3, (long)uVar9 < 0)) {
      uVar11 = -uVar3;
    }
    lVar17 = (uVar2 & 0xffff) * 0x10;
    plVar12 = (long *)((ulong)uVar6 * 0x10 + *(long *)(param_1 + 0x58));
    plVar15 = (long *)(*(long *)(param_1 + 0x98) + lVar17);
    if (*(short *)(param_1 + 0x26e) == 0) {
      uVar7 = TT_MulFix14_long_long(uVar11 & 0xffffffff,(int)*(short *)(param_1 + 0x226));
      iVar8 = TT_MulFix14_long_long(uVar11 & 0xffffffff,(int)*(short *)(param_1 + 0x228),uVar7);
      lVar4 = *plVar12;
      lVar13 = plVar12[1];
      lVar14 = *(long *)(param_1 + 0xa0);
      *plVar15 = extraout_EDX + lVar4;
      plVar15[1] = iVar8 + lVar13;
      plVar1 = (long *)(lVar14 + lVar17);
      *plVar1 = extraout_EDX + lVar4;
      plVar1[1] = iVar8 + lVar13;
    }
    uVar9 = (**(code **)(param_1 + 0x408))(param_1,*plVar15 - *plVar12,plVar15[1] - plVar12[1]);
    plVar15 = (long *)(lVar17 + *(long *)(param_1 + 0xa0));
    plVar12 = (long *)((ulong)*(ushort *)(param_1 + 0x218) * 0x10 + *(long *)(param_1 + 0x60));
    lVar17 = (**(code **)(param_1 + 0x400))(param_1,*plVar15 - *plVar12,plVar15[1] - plVar12[1]);
    if ((*(char *)(param_1 + 0x244) != '\0') && ((long)(uVar11 ^ uVar9) < 0)) {
      uVar11 = -uVar11;
    }
    bVar5 = *(byte *)(param_1 + 0x298);
    if ((bVar5 & 4) == 0) {
      lVar14 = *(long *)(param_1 + 0x1f0 + (ulong)(bVar5 & 3) * 8);
      if ((long)uVar11 < 0) {
        lVar14 = uVar11 - lVar14;
        if (0 < lVar14) {
          lVar14 = 0;
        }
      }
      else {
        lVar14 = uVar11 + lVar14;
        if (lVar14 < 0) {
          lVar14 = 0;
        }
      }
    }
    else {
      if (*(short *)(param_1 + 0x26c) == *(short *)(param_1 + 0x26e)) {
        lVar14 = uVar11 - uVar9;
        if ((long)(uVar11 - uVar9) < 0) {
          lVar14 = uVar9 - uVar11;
        }
        if (*(long *)(param_1 + 0x248) < lVar14) {
          uVar11 = uVar9;
        }
      }
      lVar14 = (**(code **)(param_1 + 0x3f8))(param_1,uVar11);
      bVar5 = *(byte *)(param_1 + 0x298);
    }
    if ((bVar5 & 8) != 0) {
      lVar4 = *(long *)(param_1 + 0x238);
      lVar13 = lVar4;
      if (lVar4 <= lVar14) {
        lVar13 = lVar14;
      }
      lVar10 = -lVar4;
      if (lVar14 != lVar10 && SBORROW8(lVar14,lVar10) == lVar14 + lVar4 < 0) {
        lVar14 = lVar10;
      }
      if (-1 < (long)uVar9) {
        lVar14 = lVar13;
      }
    }
    (**(code **)(param_1 + 0x418))(param_1,param_1 + 0x88,uVar2 & 0xffff,lVar14 - lVar17);
    uVar6 = *(ushort *)(param_1 + 0x218);
  }
  else if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *(ushort *)(param_1 + 0x21a) = uVar6;
  if ((*(byte *)(param_1 + 0x298) & 0x10) != 0) {
    *(ushort *)(param_1 + 0x218) = uVar16;
  }
  *(ushort *)(param_1 + 0x21c) = uVar16;
  return;
}



void Ins_MIAP_constprop_0(long param_1,ulong *param_2)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_RDX;
  long extraout_RDX_00;
  long *plVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  
  uVar2 = *param_2;
  auVar9 = pshuflw(in_XMM0,ZEXT416((uint)uVar2),0);
  if (((ushort)uVar2 < *(ushort *)(param_1 + 0x54)) && (param_2[1] < *(ulong *)(param_1 + 0x2a8))) {
    uVar4 = (**(code **)(param_1 + 0x430))(param_1,param_2[1]);
    lVar5 = (uVar2 & 0xffff) * 0x10;
    if (*(short *)(param_1 + 0x26c) == 0) {
      iVar3 = TT_MulFix14_long_long(uVar4 & 0xffffffff,(int)*(short *)(param_1 + 0x226),lVar5);
      sVar1 = *(short *)(param_1 + 0x228);
      plVar8 = (long *)(*(long *)(param_1 + 0x58) + extraout_RDX);
      *plVar8 = (long)iVar3;
      iVar3 = TT_MulFix14_long_long(uVar4 & 0xffffffff,(int)sVar1);
      plVar8[1] = (long)iVar3;
      lVar5 = plVar8[1];
      plVar6 = (long *)(*(long *)(param_1 + 0x60) + extraout_RDX_00);
      *plVar6 = *plVar8;
      plVar6[1] = lVar5;
    }
    else {
      plVar6 = (long *)(lVar5 + *(long *)(param_1 + 0x60));
    }
    uVar7 = (**(code **)(param_1 + 0x400))(param_1,*plVar6,plVar6[1]);
    if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
      lVar5 = uVar4 - uVar7;
      if ((long)(uVar4 - uVar7) < 0) {
        lVar5 = uVar7 - uVar4;
      }
      if (*(long *)(param_1 + 0x248) < lVar5) {
        uVar4 = uVar7;
      }
      uVar4 = (**(code **)(param_1 + 0x3f8))(param_1,uVar4,3);
    }
    (**(code **)(param_1 + 0x418))(param_1,param_1 + 0x48,uVar2 & 0xffff,uVar4 - uVar7);
  }
  else if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    *(int *)(param_1 + 0x218) = auVar9._0_4_;
    return;
  }
  *(int *)(param_1 + 0x218) = auVar9._0_4_;
  return;
}



undefined8
Compute_Point_Displacement_constprop_0
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,ushort *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar1 = *(ushort *)(param_1 + 0x21c);
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    uVar7 = *(ushort *)(param_1 + 0x94);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar11 = *(undefined2 *)(param_1 + 0x90);
    uVar10 = *(undefined2 *)(param_1 + 0x92);
    uVar2 = *(undefined2 *)(param_1 + 0x96);
    lVar12 = *(long *)(param_1 + 0x98);
    lVar13 = *(long *)(param_1 + 0xa0);
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    uVar15 = *(undefined8 *)(param_1 + 0xb0);
    uVar9 = *(undefined2 *)(param_1 + 0xc0);
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    if (uVar7 <= uVar1) goto LAB_00108a59;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x54);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = *(undefined2 *)(param_1 + 0x50);
    uVar10 = *(undefined2 *)(param_1 + 0x52);
    uVar2 = *(undefined2 *)(param_1 + 0x56);
    lVar12 = *(long *)(param_1 + 0x58);
    lVar13 = *(long *)(param_1 + 0x60);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    uVar9 = *(undefined2 *)(param_1 + 0x80);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    uVar1 = *(ushort *)(param_1 + 0x21a);
    if (uVar7 <= *(ushort *)(param_1 + 0x21a)) {
LAB_00108a59:
      if (*(char *)(param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      *param_5 = 0;
      return 1;
    }
  }
  param_4[2] = lVar12;
  param_4[3] = lVar13;
  param_4[4] = uVar14;
  param_4[5] = uVar15;
  *(undefined2 *)(param_4 + 1) = uVar11;
  *(undefined2 *)((long)param_4 + 10) = uVar10;
  *(undefined2 *)((long)param_4 + 0xe) = uVar2;
  *param_4 = uVar5;
  *(ushort *)((long)param_4 + 0xc) = uVar7;
  param_4[6] = uVar6;
  *(undefined2 *)(param_4 + 7) = uVar9;
  *param_5 = uVar1;
  plVar8 = (long *)(lVar13 + (ulong)uVar1 * 0x10);
  plVar4 = (long *)(lVar12 + (ulong)uVar1 * 0x10);
  uVar5 = (**(code **)(param_1 + 0x400))(param_1,*plVar8 - *plVar4,plVar8[1] - plVar4[1]);
  uVar6 = FT_MulDiv(uVar5,(long)*(short *)(param_1 + 0x226),*(undefined8 *)(param_1 + 0x3f0));
  sVar3 = *(short *)(param_1 + 0x228);
  *param_2 = uVar6;
  uVar5 = FT_MulDiv(uVar5,(long)sVar3,*(undefined8 *)(param_1 + 0x3f0));
  *param_3 = uVar5;
  return 0;
}



void Ins_JMPR_constprop_0(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*param_2 != 0) || (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = *param_2 + *(long *)(param_1 + 0x288);
    *(long *)(param_1 + 0x288) = lVar1;
    if ((-1 < lVar1) &&
       ((*(int *)(param_1 + 0x300) < 1 ||
        (lVar1 <= *(long *)(*(long *)((long)*(int *)(param_1 + 0x300) * 0x20 +
                                      *(long *)(param_1 + 0x308) + -8) + 0x10))))) {
      *(undefined1 *)(param_1 + 0x2a0) = 0;
      if ((*param_2 < 0) &&
         (uVar2 = *(long *)(param_1 + 0x460) + 1, *(ulong *)(param_1 + 0x460) = uVar2,
         *(ulong *)(param_1 + 0x468) < uVar2)) {
        *(undefined4 *)(param_1 + 0x18) = 0x8b;
        return;
      }
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0x84;
  return;
}



void SetSuperRound_constprop_0(long param_1,short param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  uVar3 = param_3 & 0xc0;
  if (uVar3 == 0x80) {
    lVar4 = (long)(param_2 * 2);
LAB_00108b36:
    iVar1 = (param_3 & 0x30) - 0x20;
    bVar6 = (param_3 & 0x30) == 0x20;
    if (bVar6) {
LAB_00108ba1:
      lVar5 = lVar4 - (lVar4 >> 0x3f) >> 9;
      goto joined_r0x00108bb2;
    }
  }
  else {
    if (uVar3 < 0x81) {
      if (uVar3 != 0) goto LAB_00108b32;
      lVar4 = (long)(param_2 >> 1);
      goto LAB_00108b36;
    }
    if (uVar3 == 0xc0) {
LAB_00108b32:
      lVar4 = (long)param_2;
      goto LAB_00108b36;
    }
    lVar4 = *(long *)(param_1 + 0x368);
    iVar1 = (param_3 & 0x30) - 0x20;
    bVar6 = iVar1 == 0;
    if (bVar6) goto LAB_00108ba1;
  }
  uVar3 = param_3 & 0x30;
  if (bVar6 || SBORROW4(uVar3,0x20) != iVar1 < 0) {
    lVar5 = 0;
    if (uVar3 != 0) {
      lVar5 = lVar4 + 3;
      if (-1 < lVar4) {
        lVar5 = lVar4;
      }
      lVar5 = lVar5 >> 10;
    }
  }
  else if (uVar3 == 0x30) {
    lVar2 = lVar4 * 3;
    lVar5 = lVar2 + 3;
    if (-1 < lVar2) {
      lVar5 = lVar2;
    }
    lVar5 = lVar5 >> 10;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x370) >> 8;
  }
joined_r0x00108bb2:
  if ((param_3 & 0xf) == 0) {
    lVar2 = lVar4 + -1;
  }
  else {
    lVar2 = (int)((param_3 & 0xf) - 4) * lVar4;
    if (lVar2 < 0) {
      lVar2 = lVar2 + 7;
    }
    lVar2 = lVar2 >> 3;
  }
  *(long *)(param_1 + 0x370) = lVar5;
  *(long *)(param_1 + 0x368) = lVar4 >> 8;
  *(long *)(param_1 + 0x378) = lVar2 >> 8;
  return;
}



int tt_size_reset(long *param_1)

{
  undefined2 uVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  
  lVar3 = *param_1;
  iVar4 = tt_size_reset_height();
  if (iVar4 != 0) {
    return iVar4;
  }
  if ((*(byte *)(lVar3 + 0x150) & 8) == 0) {
    uVar11 = *(ushort *)(param_1 + 0xc);
    uVar7 = *(ushort *)((long)param_1 + 0x62);
    if (uVar7 <= uVar11) {
LAB_00108ce0:
      *(ushort *)(param_1 + 0x15) = uVar11;
      param_1[0x13] = 0x10000;
      param_1[0x17] = param_1[0xd];
      lVar6 = FT_DivFix(uVar7);
      goto LAB_00108c7e;
    }
  }
  else {
    lVar6 = FT_DivFix((uint)*(ushort *)(param_1 + 0xc) << 6,*(undefined2 *)(lVar3 + 0x88));
    uVar1 = *(undefined2 *)(lVar3 + 0x88);
    param_1[0xd] = lVar6;
    lVar6 = FT_DivFix((uint)*(ushort *)((long)param_1 + 0x62) << 6,uVar1);
    uVar11 = *(ushort *)(param_1 + 0xc);
    uVar7 = *(ushort *)((long)param_1 + 0x62);
    sVar2 = *(short *)(lVar3 + 0x90);
    param_1[0xe] = lVar6;
    lVar6 = (long)(int)param_1[0xd] * (long)sVar2;
    param_1[0x12] =
         (long)(int)((int)((ulong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0);
    if (uVar7 <= uVar11) goto LAB_00108ce0;
  }
  *(ushort *)(param_1 + 0x15) = uVar7;
  param_1[0x17] = param_1[0xe];
  lVar6 = FT_DivFix();
  param_1[0x13] = lVar6;
  lVar6 = 0x10000;
LAB_00108c7e:
  param_1[0x14] = lVar6;
  uVar8 = 0;
  uVar5 = *(uint *)(lVar3 + 0x518);
  do {
    do {
      uVar9 = uVar5;
      if (uVar9 <= uVar8) {
        pbVar10 = (byte *)0x0;
LAB_00108cbe:
        param_1[0x1d] = (long)pbVar10;
        param_1[0xb] = (long)(param_1 + 0xc);
        *(undefined4 *)((long)param_1 + 0x224) = 0xffffffff;
        return 0;
      }
      uVar5 = uVar9 + uVar8 >> 1;
      pbVar10 = *(byte **)(*(long *)(lVar3 + 0x528) + (ulong)uVar5 * 8);
      uVar11 = (ushort)*pbVar10;
    } while (*(ushort *)(param_1 + 0xc) < uVar11);
    if (*(ushort *)(param_1 + 0xc) <= uVar11) {
      pbVar10 = pbVar10 + 2;
      goto LAB_00108cbe;
    }
    uVar8 = uVar5 + 1;
    uVar5 = uVar9;
  } while( true );
}



undefined8 tt_size_select(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  param_1[0x1e] = param_2;
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x370) + 0xd8))(lVar1,param_2,param_1 + 3);
    if ((int)uVar2 != 0) {
      param_1[0x1e] = 0xffffffff;
    }
    return uVar2;
  }
  FT_Select_Metrics();
  tt_size_reset(param_1);
  return 0;
}



int tt_size_request(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  lVar3 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(lVar3 + 0x10) & 2) == 0) {
    iVar1 = 0;
    iVar2 = FT_Request_Metrics(lVar3,param_2);
  }
  else {
    iVar1 = (**(code **)(*(long *)(lVar3 + 0x370) + 0xd0))(lVar3,param_2,&local_28);
    if (iVar1 == 0) {
      iVar2 = tt_size_select(param_1,local_28);
      goto LAB_00108e79;
    }
    param_1[0x1e] = 0xffffffff;
    iVar2 = FT_Request_Metrics(*param_1,param_2);
  }
  if (((iVar2 == 0) && (iVar2 = iVar1, (*(byte *)(*param_1 + 0x10) & 1) != 0)) &&
     (iVar2 = tt_size_reset(param_1), iVar2 == 0)) {
    iVar1 = param_2[7];
    if (((ushort *)param_1[0xb])[1] < *(ushort *)param_1[0xb]) {
      iVar1 = param_2[6];
    }
    if ((*param_2 == 4) || (iVar1 == 0)) {
      iVar1 = 0x48;
    }
    lVar3 = FT_MulDiv((short)param_1[0x15],0x1200,iVar1);
    param_1[0x1f] = lVar3;
  }
LAB_00108e79:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void Move_CVT(long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x278) == 3) {
    Modify_CVT_Check_part_0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x2b0) + param_2 * 8);
    *plVar1 = *plVar1 + param_3;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ins_IUP_constprop_0(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  long in_FS_OFFSET;
  long local_68;
  long lStack_60;
  long local_58;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
     (*(char *)((long)param_1 + 1099) != '\0')) {
    if ((*(char *)((long)param_1 + 0x44c) != '\0') && (*(char *)((long)param_1 + 0x44d) != '\0')) {
LAB_00109180:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x44c) = 1;
      if (*(short *)((long)param_1 + 0x116) == 0) goto LAB_00109180;
LAB_001091a3:
      local_68 = param_1[0x23];
      lStack_60 = param_1[0x24];
      local_58 = param_1[0x25];
      bVar11 = 8;
      goto LAB_00108fe4;
    }
    *(undefined1 *)((long)param_1 + 0x44d) = 1;
    if (*(short *)((long)param_1 + 0x116) == 0) goto LAB_00109180;
  }
  else {
    if (*(short *)((long)param_1 + 0x116) == 0) goto LAB_00109180;
    if ((*(byte *)(param_1 + 0x53) & 1) != 0) goto LAB_001091a3;
  }
  bVar11 = 0x10;
  local_68 = param_1[0x23] + __LC12;
  lStack_60 = param_1[0x24] + _UNK_00111908;
  local_58 = param_1[0x25] + 8;
LAB_00108fe4:
  sVar8 = 0;
  uVar12 = 0;
  uVar1 = *(ushort *)((long)param_1 + 0x114);
  local_50 = (uint)uVar1;
  do {
    uVar6 = (uint)*(ushort *)(param_1[0x27] + (long)sVar8 * 2) - (uint)*(ushort *)(param_1 + 0x28);
    if (uVar1 <= uVar6) {
      uVar6 = uVar1 - 1;
    }
    uVar10 = uVar12;
    if (uVar12 <= uVar6) {
      lVar7 = param_1[0x26];
      uVar4 = uVar12;
      do {
        uVar5 = (ulong)uVar4;
        if ((bVar11 & *(byte *)(lVar7 + uVar5)) != 0) {
          uVar10 = uVar4;
          if (uVar4 <= uVar6) {
            uVar9 = uVar4 + 1;
            uVar2 = uVar5;
            uVar10 = uVar9;
            if (uVar6 < uVar9) goto LAB_001091d3;
            while( true ) {
              if ((bVar11 & *(byte *)(lVar7 + (ulong)uVar10)) != 0) {
                iup_worker_interpolate_(&local_68,(int)uVar2 + 1,uVar10 - 1,uVar2,uVar10);
                uVar2 = (ulong)uVar10;
              }
              if (uVar6 < uVar10 + 1) break;
              lVar7 = param_1[0x26];
              uVar10 = uVar10 + 1;
            }
            uVar10 = uVar10 + 1;
            if ((uint)uVar2 == uVar4) {
LAB_001091d3:
              lVar7 = *(long *)(lStack_60 + uVar5 * 0x10) - *(long *)(local_68 + uVar5 * 0x10);
              if (lVar7 != 0) {
                if (uVar12 < uVar4) {
                  plVar3 = (long *)((ulong)uVar12 * 0x10 + lStack_60);
                  do {
                    *plVar3 = *plVar3 + lVar7;
                    plVar3 = plVar3 + 2;
                  } while ((long *)(lStack_60 + 0x10 +
                                   ((ulong)((uVar4 - uVar12) - 1) + (ulong)uVar12) * 0x10) != plVar3
                          );
                }
                plVar3 = (long *)((ulong)uVar9 * 0x10 + lStack_60);
                for (; uVar9 <= uVar6; uVar9 = uVar9 + 1) {
                  *plVar3 = *plVar3 + lVar7;
                  plVar3 = plVar3 + 2;
                }
              }
            }
            else {
              iup_worker_interpolate_(&local_68,(uint)uVar2 + 1 & 0xffff,uVar6,uVar2,uVar5);
              if (uVar4 != 0) {
                iup_worker_interpolate_(&local_68,uVar12,uVar4 - 1,uVar2,uVar5);
              }
            }
          }
          break;
        }
        uVar4 = uVar4 + 1;
        uVar10 = uVar4;
      } while (uVar4 <= uVar6);
    }
    uVar12 = uVar10;
    sVar8 = sVar8 + 1;
    if (*(short *)((long)param_1 + 0x116) <= sVar8) goto LAB_00109180;
    uVar1 = *(ushort *)((long)param_1 + 0x114);
  } while( true );
}



ulong tt_set_mm_blend(long param_1,uint param_2,long *param_3,char param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ushort *puVar15;
  int *piVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  uint *puVar27;
  ushort *puVar28;
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  ulong local_70;
  long local_68;
  ushort local_60;
  ushort local_5e;
  long local_58;
  ushort local_50;
  ushort local_4e;
  long local_48;
  long local_40;
  
  uVar25 = (ulong)param_2;
  puVar27 = *(uint **)(param_1 + 0x4c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  local_78 = 0;
  if (puVar27 == (uint *)0x0) {
    uVar9 = TT_Get_MM_Var();
    local_78 = (uint)uVar9;
    if (local_78 != 0) goto LAB_0010933f;
    puVar27 = *(uint **)(param_1 + 0x4c0);
  }
  puVar2 = *(uint **)(puVar27 + 6);
  uVar7 = *puVar2;
  if (uVar7 <= param_2) {
    uVar25 = (ulong)uVar7;
  }
  uVar17 = (uint)uVar25;
  if (uVar17 != 0) {
    plVar20 = param_3;
    do {
      if (0x20000 < *plVar20 + 0x10000U) {
        uVar9 = 6;
        goto LAB_0010933f;
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != param_3 + uVar25);
  }
  if ((*(char *)(param_1 + 0x4b8) == '\0') && (*(long *)(puVar27 + 0x20) == 0)) {
    lVar23 = *(long *)(param_1 + 0xc0);
    uVar11 = *(undefined8 *)(lVar23 + 0x38);
    uVar9 = (**(code **)(param_1 + 0x340))(param_1,0x67766172,lVar23,&local_70);
    local_74 = (uint)uVar9;
    if (local_74 == 0) {
      lVar10 = FT_Stream_Pos(lVar23);
      uVar9 = FT_Stream_ReadFields(lVar23,gvar_fields_2,&local_68);
      local_74 = (uint)uVar9;
      if (local_74 == 0) {
        if ((((local_68 != 0x10000) || (local_60 != **(ushort **)(puVar27 + 6))) ||
            (local_70 >> 1 < (ulong)local_60 * (ulong)local_5e)) ||
           (local_70 <
            ((ulong)local_50 + 1) * ((-(ulong)((local_4e & 1) == 0) & 0xfffffffffffffffe) + 4))) {
          uVar9 = 8;
          goto LAB_0010933f;
        }
        *(ulong *)(puVar27 + 0x22) = local_70;
        uVar9 = FT_Stream_EnterFrame(lVar23);
        local_74 = (uint)uVar9;
        if (local_74 == 0) {
          uVar12 = ft_mem_qrealloc(uVar11,8,0,(ulong)local_50 + 1);
          *(undefined8 *)(puVar27 + 0x20) = uVar12;
          if (local_74 == 0) {
            uVar9 = 0;
            uVar13 = lVar10 + local_70;
            lVar21 = 0;
            if ((local_4e & 1) == 0) {
              do {
                iVar8 = FT_Stream_GetUShort(lVar23);
                uVar14 = (ulong)(iVar8 * 2 & 0x1fffe) + local_48 + lVar10;
                if (uVar9 < uVar14) {
                  uVar9 = uVar14;
                }
                uVar14 = uVar13;
                if (uVar9 <= uVar13) {
                  uVar14 = uVar9;
                }
                *(ulong *)(*(long *)(puVar27 + 0x20) + lVar21 * 8) = uVar14;
                lVar21 = lVar21 + 1;
                uVar7 = (uint)local_50;
              } while ((uint)lVar21 <= uVar7);
            }
            else {
              do {
                uVar7 = FT_Stream_GetULong(lVar23);
                uVar14 = (ulong)uVar7 + local_48 + lVar10;
                if (uVar9 < uVar14) {
                  uVar9 = uVar14;
                }
                uVar14 = uVar13;
                if (uVar9 <= uVar13) {
                  uVar14 = uVar9;
                }
                *(ulong *)(*(long *)(puVar27 + 0x20) + lVar21 * 8) = uVar14;
                uVar7 = (uint)local_50;
                lVar21 = lVar21 + 1;
              } while ((uint)lVar21 <= (uint)local_50);
            }
            puVar27[0x1e] = uVar7;
            FT_Stream_ExitFrame(lVar23);
            if (local_5e != 0) {
              local_74 = FT_Stream_Seek(lVar23,lVar10 + local_58);
              if ((local_74 != 0) ||
                 (local_74 = FT_Stream_EnterFrame
                                       (lVar23,(long)(int)((uint)local_5e * (uint)local_60) * 2),
                 local_74 != 0)) goto LAB_00109a99;
              uVar12 = ft_mem_qrealloc(uVar11,8,0,(long)(int)((uint)local_60 * (uint)local_5e),0,
                                       &local_74);
              *(undefined8 *)(puVar27 + 0x1c) = uVar12;
              if (local_74 != 0) goto LAB_00109a8f;
              uVar7 = (uint)local_5e;
              for (uVar24 = 0; uVar24 < uVar7; uVar24 = uVar24 + 1) {
                uVar19 = 0;
                if (local_60 != 0) {
                  do {
                    sVar6 = FT_Stream_GetUShort(lVar23);
                    uVar7 = local_60 * uVar24 + uVar19;
                    uVar19 = uVar19 + 1;
                    *(long *)(*(long *)(puVar27 + 0x1c) + (ulong)uVar7 * 8) = (long)sVar6 << 2;
                  } while (uVar19 < local_60);
                  uVar7 = (uint)local_5e;
                }
              }
              puVar27[0x1a] = uVar7;
              FT_Stream_ExitFrame(lVar23);
            }
            uVar9 = (ulong)local_74;
          }
          else {
LAB_00109a8f:
            FT_Stream_ExitFrame(lVar23);
LAB_00109a99:
            ft_mem_free(uVar11);
            puVar27[0x20] = 0;
            puVar27[0x21] = 0;
            uVar9 = (ulong)local_74;
            puVar27[0x1e] = 0;
          }
        }
      }
    }
    if (((int)uVar9 != 0x8e) && ((int)uVar9 != 0)) goto LAB_0010933f;
    local_78 = 0;
    uVar7 = *puVar2;
  }
  bVar5 = false;
  if (*(long *)(puVar27 + 2) == 0) {
    uVar11 = ft_mem_realloc(uVar1,8,0,uVar7,0,&local_78);
    *(undefined8 *)(puVar27 + 2) = uVar11;
    uVar9 = (ulong)local_78;
    if (local_78 != 0) goto LAB_0010933f;
    bVar5 = true;
    uVar7 = *puVar2;
  }
  plVar20 = *(long **)(puVar27 + 4);
  if (plVar20 != (long *)0x0) {
    uVar9 = 0;
    if (uVar17 == 0) {
      uVar24 = 0;
      uVar9 = 0;
      plVar18 = plVar20;
    }
    else {
      do {
        uVar24 = (uint)uVar9;
        if (plVar20[uVar9] != param_3[uVar9]) {
          iVar8 = 2;
          if (uVar24 < uVar7) goto LAB_001093e4;
          *puVar27 = uVar7;
          goto LAB_00109424;
        }
        uVar9 = uVar9 + 1;
      } while (uVar25 != uVar9);
      uVar24 = uVar24 + 1;
      uVar9 = (ulong)uVar24;
      plVar18 = plVar20 + uVar9;
    }
    if ((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) {
      if (uVar24 < uVar7) {
        bVar4 = false;
        plVar3 = plVar18 + (ulong)((uVar7 - 1) - uVar24) + 1;
        do {
          if (*plVar18 != 0) {
            bVar4 = true;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != plVar3);
        goto LAB_001096f9;
      }
    }
    else if (uVar24 < uVar7) {
      bVar4 = false;
      lVar23 = 0;
      do {
        if (*(long *)(*(long *)(puVar27 + 10) +
                      ((((uint)*(ulong *)(param_1 + 8) >> 0x10) - 1) * uVar7 + uVar9) * 8 + lVar23)
            != *(long *)((long)plVar18 + lVar23)) {
          bVar4 = true;
        }
        lVar23 = lVar23 + 8;
      } while ((ulong)((uVar7 - 1) - uVar24) * 8 + 8 != lVar23);
LAB_001096f9:
      if (bVar4) {
        iVar8 = 0;
LAB_001093e4:
        plVar18 = plVar20 + uVar24;
        do {
          if (*plVar18 != 0) {
            iVar8 = 2;
            break;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != plVar20 + (ulong)((uVar7 - 1) - uVar24) + (ulong)uVar24 + 1);
        goto LAB_00109415;
      }
    }
    *(undefined1 *)(param_1 + 0x4b9) = 1;
    uVar9 = 0xffffffff;
    goto LAB_0010933f;
  }
  uVar11 = ft_mem_realloc(uVar1,8,0,uVar7,0,&local_78);
  *(undefined8 *)(puVar27 + 4) = uVar11;
  uVar9 = (ulong)local_78;
  if (local_78 != 0) goto LAB_0010933f;
  uVar7 = *puVar2;
  iVar8 = 1;
LAB_00109415:
  *puVar27 = uVar7;
  if (param_3 != (long *)0x0) {
    plVar20 = *(long **)(puVar27 + 4);
LAB_00109424:
    memcpy(plVar20,param_3,uVar25 << 3);
  }
  if (param_4 != '\0') {
    plVar20 = *(long **)(puVar27 + 2);
    lVar23 = *(long *)(puVar27 + 4);
    if (bVar5) {
      uVar17 = *puVar27;
    }
    puVar27 = *(uint **)(param_1 + 0x4c0);
    uVar7 = *puVar27;
    if (uVar17 <= *puVar27) {
      uVar7 = uVar17;
    }
    uVar25 = (ulong)uVar7;
    if (uVar7 == 0) {
      uVar25 = 0;
    }
    else {
      lVar10 = 0;
      do {
        *(undefined8 *)((long)plVar20 + lVar10) = *(undefined8 *)(lVar23 + lVar10);
        lVar10 = lVar10 + 8;
      } while (lVar10 != uVar25 << 3);
    }
    if ((uint)uVar25 < uVar17) {
      memset(plVar20 + uVar25,0,(ulong)((uVar17 - 1) - (uint)uVar25) * 8 + 8);
    }
    if ((*(undefined8 **)(puVar27 + 0xe) == (undefined8 *)0x0) ||
       (puVar28 = (ushort *)**(undefined8 **)(puVar27 + 0xe), puVar28 == (ushort *)0x0)) {
      lVar23 = *(long *)(*(long *)(puVar27 + 6) + 0x10);
      if (uVar7 != 0) goto LAB_0010958d;
    }
    else if (uVar7 != 0) {
      puVar15 = puVar28 + (ulong)uVar7 * 8;
      plVar18 = plVar20;
      do {
        if (1 < *puVar28) {
          uVar17 = 1;
          plVar3 = *(long **)(puVar28 + 4);
          do {
            if (*plVar18 < plVar3[3]) {
              plVar26 = *(long **)(puVar28 + 4) + (ulong)(uVar17 - 1) * 2;
              lVar23 = plVar26[1];
              lVar23 = FT_MulDiv(*plVar18 - lVar23,plVar3[2] - *plVar26,plVar3[3] - lVar23);
              *plVar18 = lVar23 + *(long *)(*(long *)(puVar28 + 4) + (ulong)(uVar17 - 1) * 0x10);
              break;
            }
            uVar17 = uVar17 + 1;
            plVar3 = plVar3 + 2;
          } while (*puVar28 != uVar17);
        }
        puVar28 = puVar28 + 8;
        plVar18 = plVar18 + 1;
      } while (puVar28 != puVar15);
      lVar23 = *(long *)(*(long *)(puVar27 + 6) + 0x10);
LAB_0010958d:
      piVar16 = (int *)(lVar23 + 8);
      plVar18 = plVar20 + uVar7;
      do {
        lVar23 = *plVar20;
        lVar10 = *(long *)(piVar16 + 2);
        if (lVar23 < 0) {
          iVar22 = (int)lVar10 - *piVar16;
LAB_001095a7:
          lVar23 = (long)(int)lVar23 * (long)iVar22;
          lVar10 = lVar10 + (int)((ulong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10);
        }
        else if (lVar23 != 0) {
          iVar22 = piVar16[4] - (int)lVar10;
          goto LAB_001095a7;
        }
        *plVar20 = lVar10;
        plVar20 = plVar20 + 1;
        piVar16 = piVar16 + 0xc;
      } while (plVar20 != plVar18);
    }
  }
  *(undefined1 *)(param_1 + 0x4b9) = 1;
  if (*(long *)(param_1 + 0x480) != 0) {
    if (iVar8 == 1) {
      uVar9 = tt_face_vary_cvt(param_1,*(undefined8 *)(param_1 + 0xc0));
      goto LAB_0010933f;
    }
    if (iVar8 == 2) {
      ft_mem_free(uVar1);
      *(undefined8 *)(param_1 + 0x480) = 0;
      uVar9 = tt_face_load_cvt(param_1,*(undefined8 *)(param_1 + 0xc0));
      goto LAB_0010933f;
    }
  }
  uVar9 = (ulong)local_78;
LAB_0010933f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void TT_Set_MM_Blend(void)

{
  tt_set_mm_blend();
  return;
}



undefined8 TT_Get_Var_Design(long param_1,uint param_2,void *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = *(uint **)(param_1 + 0x4c0);
  if (puVar1 == (uint *)0x0) {
    uVar4 = TT_Get_MM_Var();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    puVar1 = *(uint **)(param_1 + 0x4c0);
    lVar2 = *(long *)(puVar1 + 2);
  }
  else {
    lVar2 = *(long *)(puVar1 + 2);
  }
  if ((lVar2 != 0) || (uVar4 = tt_set_mm_blend(param_1,0,0,1), (int)uVar4 == 0)) {
    uVar6 = (ulong)*puVar1;
    if (param_2 <= *puVar1) {
      uVar6 = (ulong)param_2;
    }
    uVar5 = (uint)uVar6;
    if (*(char *)(param_1 + 0x4b9) == '\0') {
      if (uVar5 != 0) {
        memset(param_3,0,uVar6 << 3);
      }
    }
    else if (uVar5 != 0) {
      lVar2 = *(long *)(puVar1 + 2);
      lVar3 = 0;
      do {
        *(undefined8 *)((long)param_3 + lVar3) = *(undefined8 *)(lVar2 + lVar3);
        lVar3 = lVar3 + 8;
      } while (uVar6 << 3 != lVar3);
    }
    if (uVar5 < param_2) {
      memset((void *)((long)param_3 + uVar6 * 8),0,(ulong)((param_2 - 1) - uVar5) * 8 + 8);
    }
    uVar4 = 0;
  }
  return uVar4;
}



int TT_Set_Var_Design(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar13 = *(long *)(param_1 + 0x4c0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (lVar13 == 0) {
    local_44 = TT_Get_MM_Var();
    if (local_44 == 0) {
      lVar13 = *(long *)(param_1 + 0x4c0);
      goto LAB_00109d09;
    }
LAB_00109f10:
    uVar6 = 0;
  }
  else {
LAB_00109d09:
    puVar3 = *(uint **)(lVar13 + 0x18);
    plVar7 = *(long **)(lVar13 + 8);
    uVar8 = *puVar3;
    if (uVar8 <= param_2) {
      param_2 = uVar8;
    }
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)ft_mem_realloc(uVar2,8,0,uVar8,0);
      *(long **)(lVar13 + 8) = plVar7;
      if (local_44 != 0) goto LAB_00109f10;
      uVar8 = *puVar3;
    }
    if (param_2 == 0) {
      uVar11 = 0;
      bVar4 = false;
      uVar12 = 0;
    }
    else {
      uVar12 = (ulong)param_2;
      bVar4 = false;
      plVar9 = plVar7;
      do {
        if (*plVar9 != *param_3) {
          *plVar9 = *param_3;
          bVar4 = true;
        }
        plVar9 = plVar9 + 1;
        param_3 = param_3 + 1;
      } while (plVar9 != plVar7 + uVar12);
      plVar7 = plVar7 + uVar12;
      uVar11 = param_2;
    }
    if ((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) {
      lVar10 = uVar12 * 0x30 + *(long *)(puVar3 + 4);
      if (uVar11 < uVar8) {
        plVar9 = plVar7 + (ulong)((uVar8 - 1) - uVar11) + 1;
        do {
          if (*plVar7 != *(long *)(lVar10 + 0x10)) {
            *plVar7 = *(long *)(lVar10 + 0x10);
            bVar4 = true;
          }
          plVar7 = plVar7 + 1;
          lVar10 = lVar10 + 0x30;
        } while (plVar9 != plVar7);
      }
    }
    else {
      plVar9 = (long *)(*(long *)((*(ulong *)(param_1 + 8) >> 0x10 & 0xffff) * 0x10 +
                                  *(long *)(puVar3 + 6) + -0x10) + uVar12 * 8);
      if (uVar11 < uVar8) {
        plVar1 = plVar7 + (ulong)((uVar8 - 1) - uVar11) + 1;
        do {
          if (*plVar7 != *plVar9) {
            *plVar7 = *plVar9;
            bVar4 = true;
          }
          plVar7 = plVar7 + 1;
          plVar9 = plVar9 + 1;
        } while (plVar1 != plVar7);
      }
    }
    if ((*(long *)(lVar13 + 0x10) != 0) && (!bVar4)) {
      iVar5 = -1;
      goto LAB_00109e35;
    }
    uVar6 = ft_mem_realloc(uVar2,8,0,uVar8,0,&local_44);
    if (local_44 == 0) {
      if (*(char *)(*(long *)(param_1 + 0x4c0) + 0x30) == '\0') {
        ft_var_load_avar(param_1);
      }
      ft_var_to_normalized(param_1,param_2,*(undefined8 *)(lVar13 + 8),uVar6);
      local_44 = tt_set_mm_blend(param_1,*puVar3,uVar6,0);
    }
  }
  ft_mem_free(uVar2,uVar6);
  iVar5 = local_44;
LAB_00109e35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



ulong TT_Set_Named_Instance(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint local_3c;
  undefined8 local_38;
  long local_30;
  
  lVar6 = *(long *)(param_1 + 0x4c0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
    uVar4 = TT_Get_MM_Var(param_1,0);
    local_3c = (uint)uVar4;
    if (local_3c != 0) goto LAB_00109fe2;
    lVar6 = *(long *)(param_1 + 0x4c0);
  }
  uVar4 = 6;
  if (param_2 <= *(ushort *)(param_1 + 0x1a)) {
    puVar3 = *(undefined4 **)(lVar6 + 0x18);
    if (param_2 == 0) {
      ft_mem_free(uVar5,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar5 = ft_mem_strdup(uVar5,*(undefined8 *)(param_1 + 0x4e0),&local_3c);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      uVar4 = (ulong)local_3c;
      if (local_3c == 0) {
        uVar4 = TT_Set_Var_Design(param_1,0,0);
      }
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 6) + -0x10 + (ulong)param_2 * 0x10);
      uVar4 = (**(code **)(*(long *)(param_1 + 0x370) + 0x148))
                        (param_1,*(undefined2 *)(puVar1 + 1),&local_38);
      local_3c = (uint)uVar4;
      if (local_3c == 0) {
        ft_mem_free(uVar5,*(undefined8 *)(param_1 + 0x30));
        uVar5 = *puVar1;
        uVar2 = *puVar3;
        *(undefined8 *)(param_1 + 0x30) = local_38;
        uVar4 = TT_Set_Var_Design(param_1,uVar2,uVar5);
      }
    }
  }
LAB_00109fe2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 TT_Get_MM_Blend(long param_1,uint param_2,void *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = *(uint **)(param_1 + 0x4c0);
  if (puVar1 == (uint *)0x0) {
    uVar4 = TT_Get_MM_Var();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    puVar1 = *(uint **)(param_1 + 0x4c0);
    lVar2 = *(long *)(puVar1 + 2);
  }
  else {
    lVar2 = *(long *)(puVar1 + 2);
  }
  if ((lVar2 != 0) || (uVar4 = tt_set_mm_blend(param_1,0,0,1), (int)uVar4 == 0)) {
    uVar6 = (ulong)*puVar1;
    if (param_2 <= *puVar1) {
      uVar6 = (ulong)param_2;
    }
    uVar5 = (uint)uVar6;
    if (*(char *)(param_1 + 0x4b9) == '\0') {
      if (uVar5 != 0) {
        memset(param_3,0,uVar6 << 3);
      }
    }
    else if (uVar5 != 0) {
      lVar2 = *(long *)(puVar1 + 4);
      lVar3 = 0;
      do {
        *(undefined8 *)((long)param_3 + lVar3) = *(undefined8 *)(lVar2 + lVar3);
        lVar3 = lVar3 + 8;
      } while (uVar6 << 3 != lVar3);
    }
    if (uVar5 < param_2) {
      memset((void *)((long)param_3 + uVar6 * 8),0,(ulong)((param_2 - 1) - uVar5) * 8 + 8);
    }
    uVar4 = 0;
  }
  return uVar4;
}



ulong load_truetype_glyph(long *param_1,uint param_2,uint param_3,char param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ushort uVar30;
  uint uVar31;
  long lVar32;
  int *piVar33;
  short sVar34;
  long lVar35;
  short sVar36;
  long lVar37;
  ulong uVar38;
  long *plVar39;
  uint uVar40;
  long lVar41;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar42 [16];
  int local_1f8;
  int local_1f0;
  long local_1e0;
  undefined8 local_1d8;
  short local_162;
  short local_160;
  ushort local_15e;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  long *local_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar38 = (ulong)param_2;
  lVar5 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar22 = param_1[3];
  local_15c = 0;
  if (*(ushort *)(lVar5 + 0x1ea) < param_3) {
    *(short *)(lVar5 + 0x1ea) = (short)param_3;
  }
  *(uint *)(param_1 + 5) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_1f8 = (int)*(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
    local_1f0 = (int)*(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
  }
  else {
    local_1f0 = 0x10000;
    local_1f8 = 0x10000;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xf0) + 0x68);
  if (puVar6 == (undefined8 *)0x0) {
    local_1e0 = tt_face_get_location(lVar5,param_2,local_118);
    bVar13 = false;
    iVar18 = local_118._0_4_;
    *(int *)(param_1 + 7) = iVar18;
  }
  else {
    uVar20 = (**(code **)*puVar6)(puVar6[1],param_2,&local_158);
    local_15c = (uint)uVar20;
    if (local_15c != 0) goto LAB_0010a21c;
    local_118 = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 7) = local_150;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    FT_Stream_OpenMemory(local_118,local_158);
    param_1[6] = (long)local_118;
    iVar18 = (int)param_1[7];
    bVar13 = true;
    local_1e0 = 0;
  }
  if (iVar18 == 0) {
LAB_0010a355:
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
LAB_0010a363:
    lVar35 = param_1[6];
    lVar32 = *param_1;
    local_162 = 0;
    local_160 = 0;
    local_148 = local_148 & 0xffff0000;
    local_15e = 0;
    uVar21 = FT_Stream_Pos(lVar35);
    (**(code **)(*(long *)(lVar32 + 0x370) + 0x140))(lVar32,0,uVar38,&local_162,&local_15e);
    TT_Get_VMetrics(lVar32,param_2,param_1[0xb],&local_160);
    uVar16 = FT_Stream_Seek(lVar35,uVar21);
    if (uVar16 == 0) {
      *(int *)(param_1 + 0x26) = (int)local_160;
      *(int *)(param_1 + 0xc) = (int)local_162;
      *(uint *)((long)param_1 + 0x134) = local_148 & 0xffff;
      lVar35 = *(long *)(lVar32 + 0xf0);
      *(uint *)((long)param_1 + 100) = (uint)local_15e;
      if ((*(long *)(lVar35 + 0x68) == 0) && (*(char *)((long)param_1 + 0x6c) == '\0')) {
        *(undefined1 *)((long)param_1 + 0x6c) = 1;
        *(uint *)(param_1 + 0xd) = (uint)local_15e;
      }
      local_15c = 0;
      uVar16 = local_15c;
      if (param_4 == '\0') {
        if (((int)param_1[7] == 0) || (*(short *)((long)param_1 + 0x3c) == 0)) {
          tt_get_metrics_incremental(param_1,param_2);
          tt_loader_set_pp(param_1);
          if (((*(ulong *)(lVar5 + 8) & 0x7fff0000) != 0) || ((*(byte *)(lVar5 + 0x11) & 0x80) != 0)
             ) {
            local_c8 = param_1[0xe];
            lStack_c0 = param_1[0xf];
            local_b8 = param_1[0x10];
            lStack_b0 = param_1[0x11];
            local_a8 = param_1[0x27];
            lStack_a0 = param_1[0x28];
            local_140 = &local_c8;
            local_98 = param_1[0x29];
            lStack_90 = param_1[0x2a];
            local_148 = 0;
            local_138 = ZEXT816(0);
            local_88 = (undefined1  [16])0x0;
            local_78 = (undefined1  [16])0x0;
            local_68 = (undefined1  [16])0x0;
            local_58 = (undefined1  [16])0x0;
            uVar16 = TT_Vary_Apply_Glyph_Deltas(param_1,&local_148,local_88);
            if (uVar16 != 0) goto LAB_0010a658;
          }
          if ((*(byte *)(param_1 + 4) & 1) == 0) {
            lVar35 = (long)local_1f8;
            lVar22 = (int)param_1[0xe] * lVar35;
            param_1[0xe] = (long)(int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
            lVar22 = (int)param_1[0x10] * lVar35;
            param_1[0x10] = (long)(int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
            lVar22 = (int)param_1[0x27] * lVar35;
            param_1[0x27] = (long)(int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
            lVar22 = (long)(int)param_1[0x28] * (long)local_1f0;
            param_1[0x28] = (long)(int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
            lVar35 = (int)param_1[0x29] * lVar35;
            param_1[0x29] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10);
            lVar22 = (long)(int)param_1[0x2a] * (long)local_1f0;
            param_1[0x2a] = (long)(int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
          }
          local_15c = 0;
          uVar16 = local_15c;
        }
        else {
          tt_get_metrics_incremental(param_1,param_2);
          tt_loader_set_pp(param_1);
          local_15c = (**(code **)(lVar5 + 0x348))();
          uVar16 = local_15c;
          if (local_15c == 0) {
            if (*(short *)((long)param_1 + 0x3c) < 1) {
              if (*(short *)((long)param_1 + 0x3c) != 0) {
                lVar35 = param_1[0x2d];
                plVar26 = param_1 + 0x2d;
                uVar21 = *(undefined8 *)(lVar5 + 0xb8);
                *(undefined2 *)((long)param_1 + 0x3c) = 0xffff;
                if (lVar35 != 0) {
                  uVar16 = param_3;
                  lVar32 = lVar35;
                  if (param_3 != 0) {
                    do {
                      lVar35 = *(long *)(lVar35 + 8);
                      uVar16 = uVar16 - 1;
                      if (lVar35 == 0) goto LAB_0010a9d4;
                      lVar32 = lVar35;
                    } while (uVar16 != 0);
                  }
                  do {
                    *(undefined8 *)(lVar35 + 0x10) = 0xffffffffffffffff;
                    lVar35 = *(long *)(lVar35 + 8);
                  } while (lVar35 != 0);
                  lVar35 = FT_List_Find(plVar26,uVar38);
                  if (lVar35 != 0) goto LAB_0010a9e8;
                  *(ulong *)(lVar32 + 0x10) = uVar38;
LAB_0010aa91:
                  sVar1 = *(short *)(lVar22 + 0x1a);
                  sVar2 = *(short *)(lVar22 + 0x18);
                  local_15c = (**(code **)(lVar5 + 0x368))(param_1);
                  if (local_15c != 0) goto LAB_0010a9f3;
                  lVar35 = param_1[0x24];
                  (**(code **)(lVar5 + 0x350))(param_1);
                  if (((*(ulong *)(lVar5 + 8) & 0x7fff0000) != 0) ||
                     ((*(byte *)(lVar5 + 0x11) & 0x80) != 0)) {
                    local_138 = (undefined1  [16])0x0;
                    uVar16 = *(uint *)(lVar22 + 0x98);
                    local_148 = 0;
                    local_128 = 0;
                    sVar36 = (short)uVar16;
                    plVar26 = (long *)ft_mem_qrealloc(uVar21,0x10,0,(long)(sVar36 + 4),0,&local_15c)
                    ;
                    local_140 = plVar26;
                    if (local_15c == 0) {
                      lVar32 = ft_mem_qrealloc(uVar21,1,0,(long)sVar36,0,&local_15c);
                      local_138._0_8_ = lVar32;
                      if (local_15c != 0) goto LAB_0010b3a7;
                      lVar27 = ft_mem_qrealloc(uVar21,2,0,(long)sVar36,0,&local_15c);
                      local_138._8_8_ = lVar27;
                      if (local_15c != 0) goto LAB_0010b3a7;
                      local_1d8 = ft_mem_qrealloc(uVar21,0x10,0,(long)(sVar36 + 4),0,&local_15c);
                      auVar42._8_8_ = extraout_XMM0_Qb;
                      auVar42._0_8_ = extraout_XMM0_Qa;
                      if (local_15c == 0) {
                        auVar42 = pshuflw(auVar42,ZEXT416(uVar16),0);
                        local_148 = auVar42._0_4_;
                        plVar39 = plVar26;
                        lVar37 = *(long *)(lVar22 + 0xa0);
                        for (lVar28 = 0; (short)lVar28 < sVar36; lVar28 = lVar28 + 1) {
                          *plVar39 = (long)*(int *)(lVar37 + 8);
                          plVar39[1] = (long)*(int *)(lVar37 + 0xc);
                          *(undefined1 *)(lVar32 + lVar28) = 1;
                          *(short *)(lVar27 + lVar28 * 2) = (short)lVar28;
                          plVar39 = plVar39 + 2;
                          lVar37 = lVar37 + 0x30;
                        }
                        uVar31 = 0;
                        if (-1 < sVar36) {
                          uVar31 = uVar16;
                        }
                        lVar27 = (ulong)(uVar16 & 0xffff) << 4;
                        lVar32 = param_1[0xf];
                        if (sVar36 < 0) {
                          lVar27 = 0;
                        }
                        *(long *)((long)plVar26 + lVar27) = param_1[0xe];
                        ((long *)((long)plVar26 + lVar27))[1] = lVar32;
                        lVar32 = param_1[0x11];
                        sVar34 = (short)uVar31;
                        plVar26[(long)(short)(sVar34 + 1) * 2] = param_1[0x10];
                        (plVar26 + (long)(short)(sVar34 + 1) * 2)[1] = lVar32;
                        lVar32 = param_1[0x28];
                        plVar26[(long)(short)(sVar34 + 2) * 2] = param_1[0x27];
                        (plVar26 + (long)(short)(sVar34 + 2) * 2)[1] = lVar32;
                        lVar32 = param_1[0x2a];
                        plVar26[(long)(short)(sVar34 + 3) * 2] = param_1[0x29];
                        (plVar26 + (long)(short)(sVar34 + 3) * 2)[1] = lVar32;
                        local_15c = TT_Vary_Apply_Glyph_Deltas(param_1,&local_148,local_1d8);
                        if (local_15c == 0) {
                          lVar32 = *(long *)(lVar22 + 0xa0);
                          plVar39 = plVar26;
                          for (sVar34 = 0; sVar34 < sVar36; sVar34 = sVar34 + 1) {
                            if ((*(byte *)(lVar32 + 4) & 2) != 0) {
                              *(int *)(lVar32 + 8) = (int)(short)*plVar39;
                              *(int *)(lVar32 + 0xc) = (int)(short)plVar39[1];
                            }
                            lVar32 = lVar32 + 0x30;
                            plVar39 = plVar39 + 2;
                          }
                        }
                      }
                    }
                    else {
LAB_0010b3a7:
                      local_1d8 = 0;
                    }
                    ft_mem_free(uVar21,plVar26);
                    ft_mem_free(uVar21,local_138._0_8_);
                    ft_mem_free(uVar21,local_138._8_8_);
                    ft_mem_free(uVar21,local_1d8);
                    uVar16 = local_15c;
                    if (local_15c != 0) goto LAB_0010a658;
                  }
                  if ((param_1[4] & 1U) == 0) {
                    lVar27 = (long)local_1f8;
                    lVar32 = (int)param_1[0xe] * lVar27;
                    param_1[0xe] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10);
                    lVar32 = (int)param_1[0x10] * lVar27;
                    param_1[0x10] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10)
                    ;
                    lVar32 = (int)param_1[0x27] * lVar27;
                    param_1[0x27] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10)
                    ;
                    lVar32 = (long)(int)param_1[0x28] * (long)local_1f0;
                    param_1[0x28] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10)
                    ;
                    lVar27 = (int)param_1[0x29] * lVar27;
                    param_1[0x29] = (long)(int)((ulong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10)
                    ;
                    lVar32 = (long)(int)param_1[0x2a] * (long)local_1f0;
                    param_1[0x2a] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10)
                    ;
                  }
                  if ((param_1[4] & 0x400U) != 0) {
                    FT_GlyphLoader_Add(lVar22);
                    *(undefined4 *)(param_1[2] + 0x90) = 0x636f6d70;
                    uVar16 = local_15c;
                    goto LAB_0010a658;
                  }
                  lVar27 = param_1[7];
                  lVar32 = param_1[6];
                  uVar31 = *(uint *)(lVar22 + 0x98);
                  uVar3 = *(uint *)(lVar22 + 0x50);
                  FT_GlyphLoader_Add(lVar22);
                  if (uVar31 == 0) {
                    param_1[6] = lVar32;
                    *(int *)(param_1 + 7) = (int)lVar27;
                    param_1[0x24] = lVar35;
                  }
                  else {
                    uVar17 = (uint)sVar1;
                    lVar37 = (ulong)uVar3 * 0x30;
                    do {
                      lVar28 = param_1[0xe];
                      lVar29 = param_1[0xf];
                      lVar7 = param_1[0x10];
                      lVar8 = param_1[0x11];
                      sVar36 = *(short *)(lVar22 + 0x1a);
                      uVar40 = (uint)sVar36;
                      lVar14 = param_1[0xd];
                      lVar9 = param_1[0x27];
                      lVar10 = param_1[0x28];
                      lVar11 = param_1[0x29];
                      lVar12 = param_1[0x2a];
                      uVar4 = *(undefined4 *)((long)param_1 + 0x134);
                      local_15c = load_truetype_glyph(param_1,*(undefined4 *)
                                                               (*(long *)(lVar22 + 0x58) + lVar37),
                                                      param_3 + 1);
                      uVar16 = local_15c;
                      if (local_15c != 0) goto LAB_0010a658;
                      lVar41 = *(long *)(lVar22 + 0x58) + lVar37;
                      uVar15 = *(ushort *)(lVar41 + 4);
                      if ((uVar15 & 0x200) == 0) {
                        *(int *)(param_1 + 0xd) = (int)lVar14;
                        *(undefined4 *)((long)param_1 + 0x134) = uVar4;
                        param_1[0xe] = lVar28;
                        param_1[0xf] = lVar29;
                        param_1[0x10] = lVar7;
                        param_1[0x11] = lVar8;
                        param_1[0x27] = lVar9;
                        param_1[0x28] = lVar10;
                        param_1[0x29] = lVar11;
                        param_1[0x2a] = lVar12;
                      }
                      sVar34 = *(short *)(lVar22 + 0x1a);
                      if (uVar40 != (int)sVar34) {
                        lVar28 = param_1[3];
                        local_140 = (long *)((ulong)uVar40 * 0x10 + *(long *)(lVar28 + 0x20));
                        local_148 = CONCAT22(*(short *)(lVar28 + 0x1a) - sVar36,
                                             (undefined2)local_148);
                        uVar30 = uVar15 & 200;
                        if ((uVar15 & 200) != 0) {
                          FT_Outline_Transform(&local_148,lVar41 + 0x10);
                          uVar15 = *(ushort *)(lVar41 + 4);
                        }
                        iVar18 = *(int *)(lVar41 + 8);
                        iVar19 = *(int *)(lVar41 + 0xc);
                        if ((uVar15 & 2) == 0) {
                          if (((uint)(int)*(short *)(lVar28 + 0x1a) <= iVar19 + uVar40) ||
                             (uVar40 <= iVar18 + uVar17)) {
                            local_15c = 0x15;
                            uVar16 = local_15c;
                            goto LAB_0010a658;
                          }
                          plVar26 = (long *)((ulong)(iVar18 + uVar17) * 0x10 +
                                            *(long *)(lVar28 + 0x20));
                          plVar39 = (long *)(*(long *)(lVar28 + 0x20) +
                                            (ulong)(iVar19 + uVar40) * 0x10);
                          uVar20 = *plVar26 - *plVar39;
                          uVar38 = plVar26[1] - plVar39[1];
LAB_0010af32:
                          if (uVar20 != 0 || uVar38 != 0) {
                            FT_Outline_Translate(&local_148,uVar20,uVar38);
                            local_15c = 0;
                            goto LAB_0010af49;
                          }
                        }
                        else if (iVar18 != 0 || iVar19 != 0) {
                          uVar20 = (ulong)iVar18;
                          uVar38 = (ulong)iVar19;
                          if ((uVar30 != 0) && ((uVar15 & 0x800) != 0)) {
                            iVar18 = FT_Hypot(*(undefined8 *)(lVar41 + 0x10),
                                              *(undefined8 *)(lVar41 + 0x18));
                            iVar19 = FT_Hypot(*(undefined8 *)(lVar41 + 0x28),
                                              *(undefined8 *)(lVar41 + 0x20));
                            uVar20 = (ulong)(int)((long)iVar18 * uVar20 + 0x8000 +
                                                  ((long)((long)iVar18 * uVar20) >> 0x3f) >> 0x10);
                            uVar38 = (ulong)(int)((long)iVar19 * uVar38 + 0x8000 +
                                                  ((long)((long)iVar19 * uVar38) >> 0x3f) >> 0x10);
                          }
                          if ((param_1[4] & 1U) == 0) {
                            lVar28 = (long)*(int *)(*(long *)(param_1[1] + 0x58) + 8) * uVar20;
                            lVar29 = (long)*(int *)(*(long *)(param_1[1] + 0x58) + 0x10) * uVar38;
                            uVar20 = (ulong)(int)((ulong)(lVar28 + 0x8000 + (lVar28 >> 0x3f)) >>
                                                 0x10);
                            uVar38 = (ulong)(int)((ulong)(lVar29 + 0x8000 + (lVar29 >> 0x3f)) >>
                                                 0x10);
                            if (((*(byte *)(lVar41 + 4) & 4) != 0) && ((param_1[4] & 2U) == 0)) {
                              if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x23) {
                                uVar20 = uVar20 + 0x20 & 0xffffffffffffffc0;
                              }
                              uVar38 = uVar38 + 0x20 & 0xffffffffffffffc0;
                            }
                          }
                          goto LAB_0010af32;
                        }
                        local_15c = 0;
                      }
LAB_0010af49:
                      lVar37 = lVar37 + 0x30;
                    } while (lVar37 != ((ulong)uVar31 + (ulong)uVar3) * 0x30);
                    *(int *)(param_1 + 7) = (int)lVar27;
                    param_1[6] = lVar32;
                    param_1[0x24] = lVar35;
                    if ((((*(byte *)(param_1 + 4) & 2) == 0) && ((*(byte *)(lVar41 + 5) & 1) != 0))
                       && (uVar17 < (uint)(int)sVar34)) {
                      lVar35 = param_1[3];
                      sVar36 = *(short *)(lVar35 + 0x1a);
                      if (((sVar36 == -4) ||
                          ((uint)(*(short *)(lVar35 + 0x62) + 4 + sVar36 * 2) <=
                           *(uint *)(lVar35 + 8))) ||
                         (uVar16 = FT_GlyphLoader_CheckPoints(lVar35,sVar36 + 4,0), uVar16 == 0)) {
                        lVar27 = *(long *)(lVar35 + 0x20);
                        lVar37 = param_1[0xf];
                        local_148 = 0;
                        lVar28 = (long)*(short *)(lVar35 + 0x1a) * 0x10;
                        lVar35 = param_1[0x22];
                        *(long *)(lVar27 + lVar28) = param_1[0xe];
                        ((long *)(lVar27 + lVar28))[1] = lVar37;
                        lVar37 = param_1[0x11];
                        iVar18 = *(int *)(lVar35 + 0x2c8);
                        uVar21 = *(undefined8 *)(lVar35 + 0x10);
                        plVar26 = (long *)(lVar27 + 0x10 + lVar28);
                        *plVar26 = param_1[0x10];
                        plVar26[1] = lVar37;
                        lVar37 = param_1[0x28];
                        plVar26 = (long *)(lVar27 + 0x20 + lVar28);
                        *plVar26 = param_1[0x27];
                        plVar26[1] = lVar37;
                        lVar37 = param_1[0x2a];
                        plVar26 = (long *)(lVar27 + 0x30 + lVar28);
                        *plVar26 = param_1[0x29];
                        plVar26[1] = lVar37;
                        if (iVar18 != 0) {
                          ft_mem_free(uVar21,*(undefined8 *)(lVar35 + 0x2d0));
                          *(undefined8 *)(lVar35 + 0x2d0) = 0;
                        }
                        lVar27 = param_1[0x24];
                        *(undefined4 *)(lVar35 + 0x2c8) = 0;
                        local_148 = FT_Stream_Seek(lVar32,lVar27);
                        uVar16 = local_148;
                        if ((local_148 == 0) &&
                           (uVar15 = FT_Stream_ReadUShort(lVar32,&local_148), uVar16 = local_148,
                           local_148 == 0)) {
                          if (uVar15 == 0) {
                            local_15c = 0;
                            goto LAB_0010b499;
                          }
                          if (*(uint *)(param_1 + 7) < (uint)uVar15) {
                            local_15c = 0x16;
                            uVar16 = local_15c;
                            goto LAB_0010a658;
                          }
                          uVar21 = ft_mem_qrealloc(uVar21,1,0,uVar15,0,&local_148);
                          *(undefined8 *)(lVar35 + 0x2d0) = uVar21;
                          uVar16 = local_148;
                          if ((local_148 == 0) &&
                             (uVar16 = FT_Stream_Read(lVar32,uVar21,uVar15), local_148 = uVar16,
                             uVar16 == 0)) {
                            lVar32 = param_1[3];
                            *(uint *)(lVar35 + 0x2c8) = (uint)uVar15;
                            *(short *)((long)param_1 + 0xdc) =
                                 (*(short *)(lVar32 + 0x1a) + 4) - sVar1;
                            *(short *)((long)param_1 + 0xde) = *(short *)(lVar32 + 0x18) - sVar2;
                            lVar27 = *(long *)(lVar32 + 0x20);
                            lVar35 = *(long *)(lVar32 + 0x28);
                            lVar37 = (ulong)uVar17 * 0x10;
                            param_1[0x1c] = *(long *)(lVar32 + 0x40) + lVar37;
                            param_1[0x1d] = lVar27 + lVar37;
                            lVar27 = *(long *)(lVar32 + 0x48);
                            param_1[0x1f] = (ulong)uVar17 + lVar35;
                            lVar35 = *(long *)(lVar32 + 0x30);
                            param_1[0x1e] = lVar37 + lVar27;
                            param_1[0x20] = (ulong)(uint)(int)sVar2 * 2 + lVar35;
                            *(short *)(param_1 + 0x21) = sVar1;
                            for (uVar38 = 0; (uint)uVar38 < *(ushort *)((long)param_1 + 0xdc) - 4;
                                uVar38 = (ulong)((uint)uVar38 + 1)) {
                              *(byte *)(uVar38 + param_1[0x1f]) =
                                   *(byte *)(uVar38 + param_1[0x1f]) & 0xe7;
                            }
                            uVar16 = TT_Hint_Glyph(param_1,1);
                          }
                        }
                        local_15c = uVar16;
                        if (uVar16 == 0) goto LAB_0010b499;
                      }
                      goto LAB_0010a658;
                    }
                  }
LAB_0010b499:
                  uVar16 = local_15c;
                  if ((*(int *)(lVar22 + 0x50) != 0) &&
                     ((*(byte *)(*(long *)(lVar22 + 0x58) + 5) & 4) != 0)) {
                    *(uint *)(lVar22 + 0x38) = *(uint *)(lVar22 + 0x38) | 0x40;
                  }
                  goto LAB_0010a658;
                }
LAB_0010a9d4:
                lVar35 = FT_List_Find(plVar26,uVar38);
                if (lVar35 == 0) {
                  lVar35 = ft_mem_qalloc(uVar21,0x18,&local_15c);
                  if (local_15c == 0) {
                    *(ulong *)(lVar35 + 0x10) = uVar38;
                    FT_List_Add(plVar26,lVar35);
                    goto LAB_0010aa91;
                  }
                }
                else {
LAB_0010a9e8:
                  local_15c = 0x15;
                }
              }
LAB_0010a9f3:
              (**(code **)(lVar5 + 0x350))(param_1);
              uVar16 = local_15c;
            }
            else {
              local_15c = (**(code **)(lVar5 + 0x360))(param_1);
              if (local_15c != 0) goto LAB_0010a9f3;
              (**(code **)(lVar5 + 0x350))(param_1);
              lVar35 = param_1[3];
              lVar32 = *param_1;
              local_148 = 0;
              lVar27 = param_1[0xf];
              sVar1 = *(short *)(lVar35 + 0x62);
              lVar37 = (long)sVar1;
              plVar26 = *(long **)(lVar35 + 0x68);
              uVar21 = *(undefined8 *)(lVar32 + 0xb8);
              plVar26[lVar37 * 2] = param_1[0xe];
              (plVar26 + lVar37 * 2)[1] = lVar27;
              lVar27 = param_1[0x11];
              plVar26[lVar37 * 2 + 2] = param_1[0x10];
              (plVar26 + lVar37 * 2 + 2)[1] = lVar27;
              lVar27 = param_1[0x28];
              plVar26[lVar37 * 2 + 4] = param_1[0x27];
              (plVar26 + lVar37 * 2 + 4)[1] = lVar27;
              lVar27 = param_1[0x2a];
              plVar26[lVar37 * 2 + 6] = param_1[0x29];
              (plVar26 + lVar37 * 2 + 6)[1] = lVar27;
              if (((*(ulong *)(lVar32 + 8) & 0x7fff0000) == 0) &&
                 ((*(byte *)(lVar32 + 0x11) & 0x80) == 0)) {
                piVar25 = (int *)0x0;
LAB_0010a80b:
                uVar38 = param_1[4];
                uVar16 = 2;
                if ((uVar38 & 2) == 0) {
                  __dest = *(void **)(lVar35 + 0x90);
                  lVar32 = *(long *)(lVar35 + 0x88);
                  sVar1 = *(short *)(lVar35 + 0x62);
                  *(undefined2 *)((long)param_1 + 0xde) = *(undefined2 *)(lVar35 + 0x60);
                  lVar27 = *(long *)(lVar35 + 0x70);
                  uVar15 = sVar1 + 4;
                  param_1[0x1c] = lVar32;
                  param_1[0x1d] = (long)plVar26;
                  param_1[0x1e] = (long)__dest;
                  param_1[0x1f] = lVar27;
                  lVar32 = *(long *)(lVar35 + 0x78);
                  *(ushort *)((long)param_1 + 0xdc) = uVar15;
                  param_1[0x20] = lVar32;
                  *(undefined2 *)(param_1 + 0x21) = 0;
                  memcpy(__dest,plVar26,(ulong)uVar15 << 4);
                  uVar38 = param_1[4];
                  plVar26 = *(long **)(lVar35 + 0x68);
                  uVar16 = (uint)uVar38 & 2;
                }
                lVar35 = *param_1;
                if ((uVar38 & 1) == 0) {
                  plVar39 = plVar26 + lVar37 * 2 + 8;
                  iVar19 = (int)*(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
                  iVar18 = (int)*(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
                  if (((*(ulong *)(lVar35 + 8) & 0x7fff0000) == 0) &&
                     ((*(byte *)(lVar35 + 0x11) & 0x80) == 0)) {
                    if (plVar26 < plVar39) {
                      plVar23 = plVar26;
                      do {
                        plVar24 = plVar23 + 2;
                        lVar32 = (long)(int)*plVar23 * (long)iVar19;
                        *plVar23 = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10);
                        lVar32 = (long)(int)plVar23[1] * (long)iVar18;
                        plVar23[1] = (long)(int)((ulong)(lVar32 + 0x8000 + (lVar32 >> 0x3f)) >> 0x10
                                                );
                        plVar23 = plVar24;
                      } while (plVar24 < plVar39);
                    }
                  }
                  else if (plVar26 < plVar39) {
                    plVar23 = plVar26;
                    piVar33 = piVar25;
                    do {
                      plVar24 = plVar23 + 2;
                      *plVar23 = (long)(int)((ulong)((long)*piVar33 * (long)iVar19 + 0x8000 +
                                                    ((long)*piVar33 * (long)iVar19 >> 0x3f)) >> 0x10
                                            ) + 0x20 >> 6;
                      plVar23[1] = (long)(int)((ulong)((long)piVar33[2] * (long)iVar18 + 0x8000 +
                                                      ((long)piVar33[2] * (long)iVar18 >> 0x3f)) >>
                                              0x10) + 0x20 >> 6;
                      plVar23 = plVar24;
                      piVar33 = piVar33 + 4;
                    } while (plVar24 < plVar39);
                  }
                }
                else {
                  iVar18 = 0;
                  iVar19 = 0;
                }
                uVar31 = *(uint *)(lVar35 + 0x4c8) & 0x10;
                if ((*(uint *)(lVar35 + 0x4c8) & 2) == 0) {
                  lVar35 = (plVar26 + lVar37 * 2)[1];
                  param_1[0xe] = plVar26[lVar37 * 2];
                  param_1[0xf] = lVar35;
                  lVar35 = (plVar26 + lVar37 * 2 + 2)[1];
                  param_1[0x10] = plVar26[lVar37 * 2 + 2];
                  param_1[0x11] = lVar35;
                  if (uVar31 != 0) {
                    if (uVar16 != 0) goto LAB_0010b15e;
LAB_0010b308:
                    lVar35 = (long)(int)param_1[0x27] * (long)iVar19;
                    param_1[0x27] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10)
                    ;
                    lVar35 = (long)(int)param_1[0x28] * (long)iVar18;
                    param_1[0x28] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10)
                    ;
                    lVar35 = (long)(int)param_1[0x29] * (long)iVar19;
                    param_1[0x29] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10)
                    ;
                    lVar35 = (long)(int)param_1[0x2a] * (long)iVar18;
                    param_1[0x2a] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10)
                    ;
                    goto LAB_0010a93c;
                  }
                  lVar35 = (plVar26 + lVar37 * 2 + 4)[1];
                  param_1[0x27] = plVar26[lVar37 * 2 + 4];
                  param_1[0x28] = lVar35;
                  lVar35 = (plVar26 + lVar37 * 2 + 6)[1];
                  param_1[0x29] = plVar26[lVar37 * 2 + 6];
                  param_1[0x2a] = lVar35;
                  if (uVar16 == 0) goto LAB_0010a93c;
                }
                else if (uVar16 == 0) {
                  lVar35 = (long)(int)param_1[0xe] * (long)iVar19;
                  param_1[0xe] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10);
                  lVar35 = (long)(int)param_1[0x10] * (long)iVar19;
                  param_1[0x10] = (long)(int)((ulong)(lVar35 + 0x8000 + (lVar35 >> 0x3f)) >> 0x10);
                  if (uVar31 != 0) goto LAB_0010b308;
                  lVar35 = (plVar26 + lVar37 * 2 + 4)[1];
                  param_1[0x27] = plVar26[lVar37 * 2 + 4];
                  param_1[0x28] = lVar35;
                  lVar35 = (plVar26 + lVar37 * 2 + 6)[1];
                  param_1[0x29] = plVar26[lVar37 * 2 + 6];
                  param_1[0x2a] = lVar35;
LAB_0010a93c:
                  local_148 = TT_Hint_Glyph(param_1,0);
                }
                else {
                  lVar35 = (plVar26 + lVar37 * 2)[1];
                  param_1[0xe] = plVar26[lVar37 * 2];
                  param_1[0xf] = lVar35;
                  lVar35 = (plVar26 + lVar37 * 2 + 2)[1];
                  param_1[0x10] = plVar26[lVar37 * 2 + 2];
                  param_1[0x11] = lVar35;
                  if (uVar31 == 0) {
                    lVar35 = (plVar26 + lVar37 * 2 + 4)[1];
                    param_1[0x27] = plVar26[lVar37 * 2 + 4];
                    param_1[0x28] = lVar35;
                    lVar35 = (plVar26 + lVar37 * 2 + 6)[1];
                    param_1[0x29] = plVar26[lVar37 * 2 + 6];
                    param_1[0x2a] = lVar35;
                  }
                  else {
LAB_0010b15e:
                    lVar35 = (plVar26 + lVar37 * 2 + 4)[1];
                    param_1[0x27] = plVar26[lVar37 * 2 + 4];
                    param_1[0x28] = lVar35;
                    lVar35 = (plVar26 + lVar37 * 2 + 6)[1];
                    param_1[0x29] = plVar26[lVar37 * 2 + 6];
                    param_1[0x2a] = lVar35;
                  }
                }
              }
              else {
                piVar25 = (int *)ft_mem_qrealloc(uVar21,0x10,0,(long)(sVar1 + 4),0,&local_148);
                if ((local_148 == 0) &&
                   (local_148 = TT_Vary_Apply_Glyph_Deltas(param_1,lVar35 + 0x60,piVar25),
                   local_148 == 0)) {
                  plVar26 = *(long **)(lVar35 + 0x68);
                  goto LAB_0010a80b;
                }
              }
              ft_mem_free(uVar21,piVar25);
              local_15c = local_148;
              uVar16 = local_15c;
              if (local_148 == 0) {
                FT_GlyphLoader_Add(lVar22);
                uVar16 = local_15c;
              }
            }
          }
        }
      }
    }
  }
  else if ((*(long *)(lVar5 + 0x4b0) == 0) && (*(long *)(*(long *)(lVar5 + 0xf0) + 0x68) == 0)) {
    local_15c = 8;
    uVar16 = local_15c;
  }
  else {
    local_15c = (**(code **)(lVar5 + 0x348))(param_1,param_2,*(long *)(lVar5 + 0x4b0) + local_1e0);
    uVar16 = local_15c;
    if (local_15c == 0) {
      local_15c = (**(code **)(lVar5 + 0x358))(param_1);
      (**(code **)(lVar5 + 0x350))(param_1);
      uVar16 = local_15c;
      if (local_15c == 0) {
        if (((int)param_1[7] == 0) || (*(short *)((long)param_1 + 0x3c) == 0)) goto LAB_0010a355;
        goto LAB_0010a363;
      }
    }
  }
LAB_0010a658:
  local_15c = uVar16;
  if (bVar13) {
    plVar26 = *(long **)(*(long *)(lVar5 + 0xf0) + 0x68);
    (**(code **)(*plVar26 + 8))(plVar26[1],&local_158);
  }
  uVar20 = (ulong)local_15c;
LAB_0010a21c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}



undefined8 Ins_SxVTL_constprop_0(long param_1,ushort param_2,ushort param_3,undefined2 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 < *(ushort *)(param_1 + 0xd4)) && (param_3 < *(ushort *)(param_1 + 0x94))) {
    plVar5 = (long *)((ulong)param_3 * 0x10 + *(long *)(param_1 + 0xa0));
    plVar7 = (long *)((ulong)param_2 * 0x10 + *(long *)(param_1 + 0xe0));
    lVar6 = plVar5[1];
    lVar1 = plVar7[1];
    lVar2 = *plVar5 - *plVar7;
    lVar8 = lVar6 - lVar1;
    if (lVar2 == 0 && lVar8 == 0) {
      lVar4 = 0;
      lVar6 = 0x4000;
    }
    else {
      lVar4 = lVar2;
      lVar6 = lVar1 - lVar6;
      if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
        lVar4 = lVar8;
        lVar6 = lVar2;
      }
      if (lVar6 == 0 && lVar4 == 0) {
        uVar3 = 0;
        goto LAB_0010b83e;
      }
    }
    local_28 = lVar6;
    local_20 = lVar4;
    FT_Vector_NormLen(&local_28);
    lVar6 = local_28 + 3;
    if (-1 < local_28) {
      lVar6 = local_28;
    }
    *param_4 = (short)(lVar6 >> 2);
    lVar6 = local_20 + 3;
    if (-1 < local_20) {
      lVar6 = local_20;
    }
    param_4[1] = (short)(lVar6 >> 2);
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3e9) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
    uVar3 = 1;
  }
LAB_0010b83e:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void tt_done_blend(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 0x4c0);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    uVar1 = **(uint **)(lVar2 + 0x18);
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 8) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x18));
    plVar5 = *(long **)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        if (uVar1 != 0) {
          lVar6 = 0;
          do {
            ft_mem_free(uVar3,*(undefined8 *)(lVar7 + 8 + lVar6));
            lVar7 = **(long **)(lVar2 + 0x38);
            *(undefined8 *)(lVar7 + 8 + lVar6) = 0;
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        ft_mem_free(uVar3);
        plVar5 = *(long **)(lVar2 + 0x38);
        *plVar5 = 0;
      }
      tt_var_done_item_variation_store(param_1,plVar5 + 1);
      lVar7 = *(long *)(lVar2 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x38));
      *(undefined8 *)(lVar7 + 0x38) = 0;
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x30));
      *(undefined8 *)(lVar7 + 0x30) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    if (*(long *)(lVar2 + 0x48) != 0) {
      tt_var_done_item_variation_store(param_1);
      lVar7 = *(long *)(lVar2 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x30));
      *(undefined8 *)(lVar7 + 0x30) = 0;
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x28));
      *(undefined8 *)(lVar7 + 0x28) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    if (*(long *)(lVar2 + 0x58) != 0) {
      tt_var_done_item_variation_store(param_1);
      lVar7 = *(long *)(lVar2 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x30));
      *(undefined8 *)(lVar7 + 0x30) = 0;
      ft_mem_free(uVar4,*(undefined8 *)(lVar7 + 0x28));
      *(undefined8 *)(lVar7 + 0x28) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x58));
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    if (*(long *)(lVar2 + 0x60) != 0) {
      tt_var_done_item_variation_store(param_1,*(long *)(lVar2 + 0x60) + 8);
      ft_mem_free(uVar3,*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x28));
      *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x28) = 0;
      ft_mem_free(uVar3);
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x70));
    *(undefined8 *)(lVar2 + 0x70) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x80));
    *(undefined8 *)(lVar2 + 0x80) = 0;
    ft_mem_free(uVar3,lVar2);
    return;
  }
  return;
}



void tt_face_done(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar3 = *(long *)(param_1 + 0x370);
    if (*(code **)(param_1 + 0x498) != (code *)0x0) {
      (**(code **)(param_1 + 0x498))(*(undefined8 *)(param_1 + 0x490));
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(param_1);
    }
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x500);
    lVar3 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    ft_mem_free(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(param_1 + 0x528));
    *(undefined8 *)(param_1 + 0x528) = 0;
    FT_Stream_ReleaseFrame(lVar3,param_1 + 0x508);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x460);
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    tt_done_blend(param_1);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    return;
  }
  return;
}



long Current_Ppem_Stretched(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  ulong extraout_RDX;
  
  lVar3 = *(long *)(param_1 + 0x1e0);
  if (lVar3 == 0) {
    sVar4 = *(short *)(param_1 + 0x224);
    if (sVar4 == 0) {
      lVar3 = *(long *)(param_1 + 0x1c8);
      *(long *)(param_1 + 0x1e0) = lVar3;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x1d0);
      if (*(short *)(param_1 + 0x222) != 0) {
        iVar1 = TT_MulFix14_long_long(*(undefined4 *)(param_1 + 0x1c8));
        iVar2 = TT_MulFix14_long_long(extraout_RDX & 0xffffffff,(int)sVar4);
        lVar3 = FT_Hypot((long)iVar1,(long)iVar2);
      }
      *(long *)(param_1 + 0x1e0) = lVar3;
    }
  }
  lVar3 = (ulong)*(ushort *)(param_1 + 0x1d8) * (long)(int)lVar3;
  return lVar3 + 0x8000 + (lVar3 >> 0x3f) >> 0x10;
}



long Read_CVT_Stretched(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  ulong extraout_RDX;
  
  lVar3 = *(long *)(param_1 + 0x1e0);
  if (lVar3 == 0) {
    sVar4 = *(short *)(param_1 + 0x224);
    if (sVar4 == 0) {
      lVar3 = *(long *)(param_1 + 0x1c8);
      *(long *)(param_1 + 0x1e0) = lVar3;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x1d0);
      if (*(short *)(param_1 + 0x222) != 0) {
        iVar1 = TT_MulFix14_long_long(*(undefined4 *)(param_1 + 0x1c8));
        iVar2 = TT_MulFix14_long_long(extraout_RDX & 0xffffffff,(int)sVar4);
        lVar3 = FT_Hypot((long)iVar1,(long)iVar2);
      }
      *(long *)(param_1 + 0x1e0) = lVar3;
    }
  }
  lVar3 = (long)*(int *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) * (long)(int)lVar3;
  return (long)(int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
}



void Ins_UNKNOWN_constprop_0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  piVar5 = *(int **)(param_1 + 0x2f0);
  if ((piVar5 != (int *)0x0) &&
     (piVar7 = piVar5 + (ulong)*(uint *)(param_1 + 0x2e8) * 8, piVar5 < piVar7)) {
    do {
      if ((*(char *)(param_1 + 0x298) == (char)piVar5[6]) && ((char)piVar5[7] != '\0')) {
        iVar1 = *(int *)(param_1 + 0x300);
        if (*(int *)(param_1 + 0x304) <= iVar1) {
          *(undefined4 *)(param_1 + 0x18) = 0x82;
          return;
        }
        lVar3 = *(long *)(param_1 + 0x288);
        puVar8 = (undefined4 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x308));
        *(int *)(param_1 + 0x300) = iVar1 + 1;
        uVar2 = *(undefined4 *)(param_1 + 0x27c);
        *(int **)(puVar8 + 6) = piVar5;
        *puVar8 = uVar2;
        *(long *)(puVar8 + 2) = lVar3 + 1;
        lVar3 = *(long *)(piVar5 + 2);
        *(undefined8 *)(puVar8 + 4) = 1;
        iVar1 = *piVar5;
        if (iVar1 - 1U < 3) {
          lVar6 = (long)iVar1 * 0x10 + param_1;
          lVar4 = *(long *)(lVar6 + 0x308);
          if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x18) = 0x8a;
          }
          else {
            lVar6 = *(long *)(lVar6 + 0x310);
            if (lVar6 < lVar3) {
              *(undefined4 *)(param_1 + 0x18) = 0x83;
            }
            else {
              *(long *)(param_1 + 0x280) = lVar4;
              *(int *)(param_1 + 0x27c) = iVar1;
              *(long *)(param_1 + 0x288) = lVar3;
              *(long *)(param_1 + 0x290) = lVar6;
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 0x84;
        }
        *(undefined1 *)(param_1 + 0x2a0) = 0;
        return;
      }
      piVar5 = piVar5 + 8;
    } while (piVar5 < piVar7);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80;
  return;
}



undefined4 TT_RunIns(long *param_1)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  byte *pbVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  code *pcVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  byte bVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  code *pcVar28;
  undefined4 *puVar29;
  long lVar30;
  long extraout_RDX;
  undefined4 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ushort uVar35;
  ulong uVar36;
  code *pcVar37;
  byte bVar38;
  ulong uVar39;
  long *plVar40;
  long lVar41;
  ushort uVar42;
  ushort uVar43;
  long in_FS_OFFSET;
  bool bVar44;
  byte bVar45;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar46 [16];
  short local_da;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  int local_88 [6];
  long local_70;
  long local_40;
  
  bVar45 = 0;
  uVar42 = *(ushort *)((long)param_1 + 0x114);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = param_1[0x55];
  uVar26 = (uVar42 + uVar27) * 2;
  uVar36 = 0x1e;
  if (0x1d < uVar26) {
    uVar36 = uVar26;
  }
  if (uVar36 < *(ushort *)((long)param_1 + 0x154)) {
    if (0xffff < uVar26) {
      uVar36 = 0xffff;
    }
    *(short *)((long)param_1 + 0x154) = (short)uVar36;
  }
  if (uVar42 == 0) {
    uVar26 = uVar27 * 0x16 + 300;
  }
  else {
    uVar25 = ((uint)uVar42 + (uint)uVar42 * 4) * 2;
    if (uVar25 < 0x32) {
      uVar25 = 0x32;
    }
    uVar26 = 0x32;
    if (499 < uVar27) {
      uVar26 = uVar27 / 10;
    }
    uVar26 = (long)(int)uVar25 + uVar26;
  }
  param_1[0x8b] = uVar26;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  uVar27 = *(long *)(*param_1 + 0x20) * 100;
  if (uVar27 < uVar26) {
    param_1[0x8b] = uVar27;
    uVar26 = uVar27;
  }
  param_1[0x8d] = uVar26;
  pcVar37 = Current_Ppem_Stretched;
  pcVar20 = Read_CVT_Stretched;
  bVar44 = (short)param_1[0x32] == *(short *)((long)param_1 + 0x192);
  pcVar28 = Write_CVT_Stretched;
  if (bVar44) {
    pcVar37 = Current_Ppem;
    pcVar20 = Read_CVT;
    pcVar28 = Write_CVT;
  }
  pcVar10 = Move_CVT_Stretched;
  param_1[0x85] = (long)pcVar37;
  if (bVar44) {
    pcVar10 = Move_CVT;
  }
  param_1[0x86] = (long)pcVar20;
  param_1[0x87] = (long)pcVar28;
  param_1[0x88] = (long)pcVar10;
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)((long)param_1 + 0x27c);
  Compute_Funcs(param_1);
  switch(*(uint *)(param_1 + 0x48) & 0xff) {
  case 0:
    param_1[0x7f] = (long)Round_To_Half_Grid;
    break;
  case 1:
    param_1[0x7f] = (long)Round_To_Grid;
    break;
  case 2:
    param_1[0x7f] = (long)Round_To_Double_Grid;
    break;
  case 3:
    param_1[0x7f] = (long)Round_Down_To_Grid;
    break;
  case 4:
    param_1[0x7f] = (long)Round_Up_To_Grid;
    break;
  case 5:
    param_1[0x7f] = (long)Round_None;
    break;
  case 6:
    param_1[0x7f] = (long)Round_Super;
    break;
  case 7:
    param_1[0x7f] = (long)Round_Super_45;
  }
  lVar11 = param_1[0x52];
  uVar27 = 0;
  *(undefined2 *)((long)param_1 + 0x44c) = 0;
  lVar17 = param_1[0x51];
LAB_0010c09e:
  lVar34 = param_1[0x50];
  bVar24 = *(byte *)(lVar34 + lVar17);
  uVar26 = (ulong)bVar24;
  cVar7 = opcode_length[uVar26];
  iVar8 = (int)cVar7;
  *(byte *)(param_1 + 0x53) = bVar24;
  *(int *)((long)param_1 + 0x29c) = iVar8;
  if (cVar7 < '\0') {
    if (lVar17 + 1 < lVar11) {
      iVar8 = 2 - (uint)*(byte *)(lVar34 + 1 + lVar17) * iVar8;
      *(int *)((long)param_1 + 0x29c) = iVar8;
      goto LAB_0010c0c8;
    }
    goto LAB_0010c540;
  }
LAB_0010c0c8:
  if (lVar11 < iVar8 + lVar17) goto LAB_0010c540;
  bVar2 = Pop_Push_Count[uVar26];
  bVar38 = bVar2 >> 4;
  lVar11 = param_1[4] - (ulong)bVar38;
  param_1[7] = lVar11;
  if (lVar11 < 0) {
    if (*(char *)((long)param_1 + 0x3e9) != '\0') {
      *(undefined4 *)(param_1 + 3) = 0x81;
      uVar9 = 0x81;
      goto LAB_0010c2a2;
    }
    if (bVar2 >> 4 != 0) {
      puVar12 = (undefined8 *)param_1[6];
      *puVar12 = 0;
      puVar12[(ulong)bVar38 - 1] = 0;
      uVar36 = (ulong)((uint)bVar38 * 8 +
                       ((int)puVar12 -
                       (int)(undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8)) >> 3);
      puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      for (; uVar36 != 0; uVar36 = uVar36 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + (ulong)bVar45 * -2 + 1;
      }
    }
    param_1[7] = 0;
  }
  lVar11 = param_1[5];
  iVar8 = (int)lVar11;
  if (bVar24 != 0x91) {
    lVar18 = param_1[7];
    lVar17 = (ulong)(bVar2 & 0xf) + lVar18;
    param_1[8] = lVar17;
    if (lVar11 < lVar17) goto LAB_0010c296;
    lVar11 = param_1[6];
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 3) = 0;
    puVar1 = (ulong *)(lVar11 + lVar18 * 8);
    if (0x92 < bVar24) {
switchD_0010c147_caseD_91:
      if (bVar24 < 0xe0) {
        if (bVar24 < 0xc0) {
          if (bVar24 < 0xb8) {
            if (bVar24 < 0xb0) goto switchD_0010c147_caseD_28;
            if ((uint)(ushort)(bVar24 - 0xaf) < (uint)((iVar8 + 1) - (int)param_1[4])) {
              lVar11 = 1;
              do {
                puVar1[lVar11 + -1] = (ulong)*(byte *)(lVar34 + lVar11 + param_1[0x51]);
                lVar11 = lVar11 + 1;
              } while ((ushort)lVar11 <= (ushort)(bVar24 - 0xaf));
              goto switchD_0010c147_caseD_21;
            }
          }
          else if ((uint)(ushort)(bVar24 - 0xb7) < (uint)((iVar8 + 1) - (int)param_1[4])) {
            lVar11 = param_1[0x51];
            param_1[0x51] = lVar11 + 3;
            *puVar1 = (long)(short)((ushort)*(byte *)(lVar34 + 1 + lVar11) * 0x100 +
                                   (ushort)*(byte *)(lVar34 + 2 + lVar11));
            if ((ushort)(bVar24 - 0xb7) != 1) {
              puVar22 = puVar1 + 1;
              do {
                lVar11 = param_1[0x51];
                puVar23 = puVar22 + 1;
                param_1[0x51] = lVar11 + 2;
                *puVar22 = (long)(short)((ushort)*(byte *)(lVar34 + lVar11) * 0x100 +
                                        (ushort)*(byte *)(lVar34 + 1 + lVar11));
                puVar22 = puVar23;
              } while (puVar23 != puVar1 + (ulong)(bVar24 - 0xb9 & 0xffff) + 2);
            }
            *(undefined1 *)(param_1 + 0x54) = 0;
            lVar17 = param_1[8];
            goto LAB_0010d324;
          }
          goto LAB_0010dad6;
        }
        uVar26 = *puVar1;
        uVar42 = *(ushort *)(param_1 + 0x43);
        uVar43 = (ushort)uVar26;
        if ((uVar43 < *(ushort *)((long)param_1 + 0x94)) &&
           (uVar42 < *(ushort *)((long)param_1 + 0x54))) {
          pcVar37 = (code *)param_1[0x81];
          lVar11 = (uVar26 & 0xffff) * 0x10;
          if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0))
          {
            plVar16 = (long *)((ulong)uVar42 * 0x10 + param_1[0xb]);
            lVar17 = (*pcVar37)(param_1,*(long *)(param_1[0x13] + lVar11) - *plVar16,
                                ((long *)(param_1[0x13] + lVar11))[1] - plVar16[1]);
          }
          else {
            plVar16 = (long *)((ulong)uVar42 * 0x10 + param_1[0xd]);
            lVar17 = *plVar16;
            lVar34 = plVar16[1];
            lVar18 = *(long *)(param_1[0x15] + lVar11);
            lVar30 = ((long *)(param_1[0x15] + lVar11))[1];
            if (param_1[0x33] == param_1[0x34]) {
              iVar8 = (*pcVar37)(param_1,lVar18 - lVar17,lVar30 - lVar34);
              lVar17 = (long)(int)param_1[0x33] * (long)iVar8;
              lVar17 = (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
            }
            else {
              lVar34 = (long)((int)lVar30 - (int)lVar34) * (long)(int)param_1[0x34];
              lVar17 = (long)((int)lVar18 - (int)lVar17) * (long)(int)param_1[0x33];
              lVar17 = (*pcVar37)(param_1,(long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >>
                                                     0x10),
                                  (long)(int)((ulong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >> 0x10));
            }
          }
          lVar34 = param_1[0x4a];
          lVar18 = lVar17;
          if ((((0 < lVar34) && (lVar30 = param_1[0x4b], lVar17 < lVar34 + lVar30)) &&
              (lVar30 - lVar34 < lVar17)) && (lVar18 = lVar30, lVar17 < 0)) {
            lVar18 = -lVar30;
          }
          bVar24 = *(byte *)(param_1 + 0x53);
          if ((bVar24 & 4) == 0) {
            if (lVar18 < 0) {
              lVar17 = lVar18 - param_1[(ulong)(bVar24 & 3) + 0x3e];
              if (0 < lVar17) {
                lVar17 = 0;
              }
              if ((bVar24 & 8) != 0) {
                lVar34 = param_1[0x47];
                goto LAB_0010e87c;
              }
            }
            else {
              lVar17 = lVar18 + param_1[(ulong)(bVar24 & 3) + 0x3e];
              if (lVar17 < 0) {
                lVar17 = 0;
              }
              if ((bVar24 & 8) != 0) {
                lVar34 = param_1[0x47];
                goto LAB_0010edf1;
              }
            }
          }
          else {
            lVar17 = (*(code *)param_1[0x7f])(param_1,lVar18);
            if ((*(byte *)(param_1 + 0x53) & 8) != 0) {
              lVar34 = param_1[0x47];
              if (lVar18 < 0) {
LAB_0010e87c:
                lVar18 = -lVar34;
                if (lVar17 != lVar18 && SBORROW8(lVar17,lVar18) == lVar17 + lVar34 < 0) {
                  lVar17 = lVar18;
                }
              }
              else {
LAB_0010edf1:
                if (lVar17 < lVar34) {
                  lVar17 = lVar34;
                }
              }
            }
          }
          plVar16 = (long *)((ulong)*(ushort *)(param_1 + 0x43) * 0x10 + param_1[0xc]);
          lVar11 = (*(code *)param_1[0x80])
                             (param_1,*(long *)(lVar11 + param_1[0x14]) - *plVar16,
                              ((long *)(lVar11 + param_1[0x14]))[1] - plVar16[1]);
          (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar26 & 0xffff,lVar17 - lVar11);
          uVar42 = *(ushort *)(param_1 + 0x43);
        }
        else if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
        }
        *(ushort *)((long)param_1 + 0x21a) = uVar42;
        *(ushort *)((long)param_1 + 0x21c) = uVar43;
        if ((*(byte *)(param_1 + 0x53) & 0x10) != 0) {
          *(ushort *)(param_1 + 0x43) = uVar43;
        }
        goto LAB_0010c938;
      }
      Ins_MIRP_constprop_0(param_1,puVar1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    }
    switch(uVar26) {
    default:
      uVar36 = (ulong)bVar24 << 0xe & 0xffffffffffff4000;
      uVar26 = uVar36 ^ 0x4000;
      if (bVar24 < 4) {
        uVar21 = uVar26 & 0xffff;
        uVar39 = (ulong)bVar24 << 0xe & 0x4000;
        *(ulong *)((long)param_1 + 0x21e) =
             ((uVar21 << 0x10 | uVar39) << 0x10 | uVar21) << 0x10 | uVar39;
      }
      if ((bVar24 & 2) == 0) {
        *(short *)((long)param_1 + 0x226) = (short)uVar36;
        *(short *)(param_1 + 0x45) = (short)uVar26;
      }
      goto LAB_0010c246;
    case 6:
    case 7:
      cVar7 = Ins_SxVTL_constprop_0(param_1,(short)puVar1[1],(short)*puVar1,(long)param_1 + 0x222);
      if (cVar7 == '\0') goto LAB_0010c95c;
      goto LAB_0010c938;
    case 8:
    case 9:
      cVar7 = Ins_SxVTL_constprop_0(param_1,(short)puVar1[1],(short)*puVar1,(long)param_1 + 0x226);
      if (cVar7 == '\0') goto LAB_0010c968;
      goto LAB_0010c938;
    case 10:
      if ((short)*puVar1 != 0 || (short)puVar1[1] != 0) {
        local_c8 = (long)(short)*puVar1;
        local_c0 = (long)(short)puVar1[1];
        FT_Vector_NormLen(&local_c8);
        lVar11 = local_c8 + 3;
        if (-1 < local_c8) {
          lVar11 = local_c8;
        }
        *(short *)((long)param_1 + 0x222) = (short)(lVar11 >> 2);
        lVar11 = local_c0 + 3;
        if (-1 < local_c0) {
          lVar11 = local_c0;
        }
        *(short *)((long)param_1 + 0x224) = (short)(lVar11 >> 2);
      }
LAB_0010c95c:
      *(undefined4 *)((long)param_1 + 0x21e) = *(undefined4 *)((long)param_1 + 0x222);
LAB_0010c968:
      Compute_Funcs(param_1);
      goto LAB_0010c938;
    case 0xb:
      if ((short)*puVar1 != 0 || (short)puVar1[1] != 0) {
        local_b8 = (long)(short)*puVar1;
        local_b0 = (long)(short)puVar1[1];
        FT_Vector_NormLen(&local_b8);
        lVar11 = local_b8 + 3;
        if (-1 < local_b8) {
          lVar11 = local_b8;
        }
        *(short *)((long)param_1 + 0x226) = (short)(lVar11 >> 2);
        lVar11 = local_b0 + 3;
        if (-1 < local_b0) {
          lVar11 = local_b0;
        }
        *(short *)(param_1 + 0x45) = (short)(lVar11 >> 2);
      }
      goto LAB_0010cacc;
    case 0xc:
      *puVar1 = (long)*(short *)((long)param_1 + 0x222);
      puVar1[1] = (long)*(short *)((long)param_1 + 0x224);
      lVar17 = param_1[8];
      break;
    case 0xd:
      *puVar1 = (long)*(short *)((long)param_1 + 0x226);
      puVar1[1] = (long)(short)param_1[0x45];
      lVar17 = param_1[8];
      break;
    case 0xe:
      *(undefined4 *)((long)param_1 + 0x226) = *(undefined4 *)((long)param_1 + 0x222);
LAB_0010c246:
      Compute_Funcs(param_1);
      break;
    case 0xf:
      Ins_ISECT_constprop_0(param_1,puVar1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x10:
      *(short *)(param_1 + 0x43) = (short)*puVar1;
      break;
    case 0x11:
      *(short *)((long)param_1 + 0x21a) = (short)*puVar1;
      break;
    case 0x12:
      *(short *)((long)param_1 + 0x21c) = (short)*puVar1;
      break;
    case 0x13:
      uVar26 = *puVar1;
      iVar8 = (int)uVar26;
      if (iVar8 == 0) {
        param_1[9] = param_1[0x29];
        param_1[10] = param_1[0x2a];
        param_1[0xb] = param_1[0x2b];
        param_1[0xc] = param_1[0x2c];
        param_1[0xd] = param_1[0x2d];
        param_1[0xe] = param_1[0x2e];
        param_1[0xf] = param_1[0x2f];
        param_1[0x10] = param_1[0x30];
      }
      else {
        if (iVar8 != 1) goto LAB_0010d1e8;
        param_1[9] = param_1[0x21];
        param_1[10] = param_1[0x22];
        param_1[0xb] = param_1[0x23];
        param_1[0xc] = param_1[0x24];
        param_1[0xd] = param_1[0x25];
        param_1[0xe] = param_1[0x26];
        param_1[0xf] = param_1[0x27];
        param_1[0x10] = param_1[0x28];
      }
      *(short *)((long)param_1 + 0x26c) = (short)uVar26;
      break;
    case 0x14:
      uVar26 = *puVar1;
      iVar8 = (int)uVar26;
      if (iVar8 == 0) {
        param_1[0x11] = param_1[0x29];
        param_1[0x12] = param_1[0x2a];
        param_1[0x13] = param_1[0x2b];
        param_1[0x14] = param_1[0x2c];
        param_1[0x15] = param_1[0x2d];
        param_1[0x16] = param_1[0x2e];
        param_1[0x17] = param_1[0x2f];
        param_1[0x18] = param_1[0x30];
      }
      else {
        if (iVar8 != 1) goto LAB_0010d1e8;
        param_1[0x11] = param_1[0x21];
        param_1[0x12] = param_1[0x22];
        param_1[0x13] = param_1[0x23];
        param_1[0x14] = param_1[0x24];
        param_1[0x15] = param_1[0x25];
        param_1[0x16] = param_1[0x26];
        param_1[0x17] = param_1[0x27];
        param_1[0x18] = param_1[0x28];
      }
      *(short *)((long)param_1 + 0x26e) = (short)uVar26;
      break;
    case 0x15:
      uVar26 = *puVar1;
      if ((int)uVar26 == 0) {
        param_1[0x19] = param_1[0x29];
        param_1[0x1a] = param_1[0x2a];
        param_1[0x1b] = param_1[0x2b];
        param_1[0x1c] = param_1[0x2c];
        param_1[0x1d] = param_1[0x2d];
        param_1[0x1e] = param_1[0x2e];
        param_1[0x1f] = param_1[0x2f];
        param_1[0x20] = param_1[0x30];
      }
      else {
        if ((int)uVar26 != 1) goto LAB_0010d1e8;
        param_1[0x19] = param_1[0x21];
        param_1[0x1a] = param_1[0x22];
        param_1[0x1b] = param_1[0x23];
        param_1[0x1c] = param_1[0x24];
        param_1[0x1d] = param_1[0x25];
        param_1[0x1e] = param_1[0x26];
        param_1[0x1f] = param_1[0x27];
        param_1[0x20] = param_1[0x28];
      }
      goto LAB_0010df79;
    case 0x16:
      uVar26 = *puVar1;
      uVar25 = (uint)uVar26;
      if (uVar25 == 0) {
        param_1[9] = param_1[0x29];
        param_1[10] = param_1[0x2a];
        param_1[0xb] = param_1[0x2b];
        param_1[0xc] = param_1[0x2c];
        param_1[0xd] = param_1[0x2d];
        param_1[0xe] = param_1[0x2e];
        param_1[0xf] = param_1[0x2f];
        param_1[0x10] = param_1[0x30];
      }
      else {
        if (uVar25 != 1) goto LAB_0010d1e8;
        param_1[9] = param_1[0x21];
        param_1[10] = param_1[0x22];
        param_1[0xb] = param_1[0x23];
        param_1[0xc] = param_1[0x24];
        param_1[0xd] = param_1[0x25];
        param_1[0xe] = param_1[0x26];
        param_1[0xf] = param_1[0x27];
        param_1[0x10] = param_1[0x28];
      }
      param_1[0x17] = param_1[0xf];
      param_1[0x18] = param_1[0x10];
      param_1[0x1f] = param_1[0xf];
      param_1[0x20] = param_1[0x10];
      auVar46 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
      param_1[0x11] = param_1[9];
      param_1[0x12] = param_1[10];
      param_1[0x13] = param_1[0xb];
      param_1[0x14] = param_1[0xc];
      param_1[0x15] = param_1[0xd];
      param_1[0x16] = param_1[0xe];
      param_1[0x19] = param_1[9];
      param_1[0x1a] = param_1[10];
      param_1[0x1b] = param_1[0xb];
      param_1[0x1c] = param_1[0xc];
      param_1[0x1d] = param_1[0xd];
      param_1[0x1e] = param_1[0xe];
      *(int *)((long)param_1 + 0x26c) = auVar46._0_4_;
LAB_0010df79:
      *(short *)(param_1 + 0x4e) = (short)uVar26;
      break;
    case 0x17:
      uVar26 = *puVar1;
      if (-1 < (long)uVar26) {
        if (0xffff < (long)uVar26) {
          uVar26 = 0xffff;
        }
        param_1[0x46] = uVar26;
        break;
      }
LAB_0010cef4:
      uVar9 = 0x84;
      goto LAB_0010cdd0;
    case 0x18:
      *(undefined4 *)(param_1 + 0x48) = 1;
      param_1[0x7f] = (long)Round_To_Grid;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x48) = 0;
      param_1[0x7f] = (long)Round_To_Half_Grid;
      break;
    case 0x1a:
      param_1[0x47] = *puVar1;
      break;
    case 0x1b:
      uVar26 = 1;
LAB_0010e0a0:
      do {
        cVar7 = SkipCode(param_1);
        if (cVar7 == '\x01') break;
        if ((char)param_1[0x53] == 'X') {
          uVar25 = (int)uVar26 + 1;
        }
        else {
          if ((char)param_1[0x53] != 'Y') goto LAB_0010e0a0;
          uVar25 = (int)uVar26 - 1;
        }
        uVar26 = (ulong)uVar25;
      } while (uVar25 != 0);
      goto LAB_0010c938;
    case 0x1c:
switchD_0010c147_caseD_1c:
      Ins_JMPR_constprop_0(param_1,puVar1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x1d:
      param_1[0x49] = *puVar1;
      break;
    case 0x1e:
      param_1[0x4a] = *puVar1;
      break;
    case 0x1f:
      lVar11 = (long)(int)*puVar1 * (long)(int)param_1[0x3d];
      param_1[0x4b] = (long)(int)((ulong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
      break;
    case 0x20:
      puVar1[1] = *puVar1;
      lVar17 = param_1[8];
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      goto switchD_0010c147_caseD_21;
    case 0x22:
      param_1[8] = 0;
      lVar17 = 0;
      break;
    case 0x23:
      uVar26 = *puVar1;
      *puVar1 = puVar1[1];
      puVar1[1] = uVar26;
      lVar11 = param_1[8];
      cVar7 = (char)param_1[0x54];
      goto LAB_0010c17b;
    case 0x24:
      *puVar1 = param_1[4];
      lVar17 = param_1[8];
      break;
    case 0x25:
      uVar26 = *puVar1;
      if ((0 < (long)uVar26) && ((long)uVar26 <= lVar18)) {
        *puVar1 = *(ulong *)(lVar11 + (lVar18 - uVar26) * 8);
        lVar17 = param_1[8];
        break;
      }
      if (*(char *)((long)param_1 + 0x3e9) == '\0') {
        *puVar1 = 0;
        goto switchD_0010c147_caseD_21;
      }
      *(undefined4 *)(param_1 + 3) = 0x86;
      *puVar1 = 0;
      goto LAB_0010c3c0;
    case 0x26:
      uVar26 = *puVar1;
      if (((long)uVar26 < 1) || (lVar18 < (long)uVar26)) {
LAB_0010d1e8:
        if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
        break;
      }
      lVar17 = (lVar18 - uVar26) * 8;
      puVar12 = (undefined8 *)(lVar11 + lVar17);
      uVar6 = *puVar12;
      memmove(puVar12,(void *)(lVar11 + 8 + lVar17),uVar26 * 8 - 8);
      *(undefined8 *)(param_1[6] + -8 + param_1[7] * 8) = uVar6;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x27:
      uVar26 = *puVar1;
      uVar36 = puVar1[1];
      if ((*(ushort *)((long)param_1 + 0x94) <= (ushort)uVar26) ||
         (*(ushort *)((long)param_1 + 0x54) <= (ushort)uVar36)) goto LAB_0010d1e8;
      plVar40 = (long *)((uVar36 & 0xffff) * 0x10 + param_1[0xc]);
      plVar16 = (long *)((uVar26 & 0xffff) * 0x10 + param_1[0x14]);
      lVar11 = (*(code *)param_1[0x80])(param_1,*plVar40 - *plVar16,plVar40[1] - plVar16[1]);
      (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar26 & 0xffff,lVar11 / 2);
      (*(code *)param_1[0x83])(param_1,param_1 + 9,uVar36 & 0xffff,-(lVar11 / 2));
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
      goto switchD_0010c147_caseD_28;
    case 0x29:
      if (*(ushort *)((long)param_1 + 0x54) <= (ushort)*puVar1) goto LAB_0010d1e8;
      bVar24 = -(*(short *)((long)param_1 + 0x226) == 0) | 0xf7;
      if ((short)param_1[0x45] != 0) {
        bVar24 = bVar24 & 0xef;
      }
      pbVar14 = (byte *)((*puVar1 & 0xffff) + param_1[0xe]);
      *pbVar14 = *pbVar14 & bVar24;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x2a:
      uVar26 = puVar1[1];
      uVar25 = (int)param_1[0x5f] + 1;
      if (uVar26 < uVar25) {
        piVar13 = (int *)param_1[0x5c];
        uVar3 = *(uint *)(param_1 + 0x5b);
        if (piVar13 == (int *)0x0) {
          if (uVar25 == uVar3) {
                    /* WARNING: Does not return */
            pcVar37 = (code *)invalidInstructionException();
            (*pcVar37)();
          }
        }
        else {
          if ((uVar25 != uVar3) || (piVar15 = piVar13 + uVar26 * 8, uVar26 != (uint)piVar15[6])) {
            for (piVar15 = piVar13;
                (piVar15 < piVar13 + (ulong)uVar3 * 8 && (uVar26 != (uint)piVar15[6]));
                piVar15 = piVar15 + 8) {
            }
            if (piVar13 + (ulong)uVar3 * 8 == piVar15) goto LAB_0010d1f5;
          }
          if ((char)piVar15[7] != '\0') {
            iVar8 = (int)param_1[0x60];
            if (*(int *)((long)param_1 + 0x304) <= iVar8) goto LAB_0010dad6;
            if ((long)*puVar1 < 1) break;
            puVar29 = (undefined4 *)((long)iVar8 * 0x20 + param_1[0x61]);
            *puVar29 = *(undefined4 *)((long)param_1 + 0x27c);
            *(long *)(puVar29 + 2) = param_1[0x51] + 1;
            uVar26 = *puVar1;
            *(int **)(puVar29 + 6) = piVar15;
            *(long *)(puVar29 + 4) = (long)(int)uVar26;
            iVar4 = *piVar15;
            *(int *)(param_1 + 0x60) = iVar8 + 1;
            lVar11 = *(long *)(piVar15 + 2);
            if (iVar4 - 1U < 3) {
              if (param_1[(long)iVar4 * 2 + 0x61] == 0) {
                *(undefined4 *)(param_1 + 3) = 0x8a;
              }
              else {
                lVar17 = param_1[(long)iVar4 * 2 + 0x62];
                if (lVar17 < lVar11) {
                  *(undefined4 *)(param_1 + 3) = 0x83;
                }
                else {
                  param_1[0x50] = param_1[(long)iVar4 * 2 + 0x61];
                  *(int *)((long)param_1 + 0x27c) = iVar4;
                  param_1[0x51] = lVar11;
                  param_1[0x52] = lVar17;
                }
              }
            }
            else {
              *(undefined4 *)(param_1 + 3) = 0x84;
            }
            *(undefined1 *)(param_1 + 0x54) = 0;
            uVar26 = *puVar1;
            lVar11 = param_1[0x8a];
            param_1[0x8a] = uVar26 + lVar11;
            if ((ulong)param_1[0x8b] < uVar26 + lVar11) {
              uVar9 = 0x8b;
              goto LAB_0010cdd0;
            }
            goto LAB_0010c938;
          }
        }
      }
      goto LAB_0010d1f5;
    case 0x2b:
      uVar26 = *puVar1;
      uVar25 = (int)param_1[0x5f] + 1;
      if ((uVar26 < uVar25) && (piVar13 = (int *)param_1[0x5c], piVar13 != (int *)0x0)) {
        if ((uVar25 != *(uint *)(param_1 + 0x5b)) ||
           (piVar15 = piVar13 + uVar26 * 8, uVar26 != (uint)piVar15[6])) {
          for (piVar15 = piVar13;
              (piVar15 < piVar13 + (ulong)*(uint *)(param_1 + 0x5b) * 8 &&
              (uVar26 != (uint)piVar15[6])); piVar15 = piVar15 + 8) {
          }
          if (piVar13 + (ulong)*(uint *)(param_1 + 0x5b) * 8 == piVar15) goto LAB_0010d1f5;
        }
        if ((char)piVar15[7] != '\0') {
          iVar8 = (int)param_1[0x60];
          if (iVar8 < *(int *)((long)param_1 + 0x304)) {
            puVar29 = (undefined4 *)((long)iVar8 * 0x20 + param_1[0x61]);
            *puVar29 = *(undefined4 *)((long)param_1 + 0x27c);
            lVar11 = param_1[0x51];
            *(int **)(puVar29 + 6) = piVar15;
            *(undefined8 *)(puVar29 + 4) = 1;
            *(long *)(puVar29 + 2) = lVar11 + 1;
            iVar4 = *piVar15;
            *(int *)(param_1 + 0x60) = iVar8 + 1;
            lVar11 = *(long *)(piVar15 + 2);
            if (iVar4 - 1U < 3) {
              if (param_1[(long)iVar4 * 2 + 0x61] == 0) {
                *(undefined4 *)(param_1 + 3) = 0x8a;
                *(undefined1 *)(param_1 + 0x54) = 0;
              }
              else {
                lVar17 = param_1[(long)iVar4 * 2 + 0x62];
                if (lVar11 <= lVar17) {
                  param_1[0x50] = param_1[(long)iVar4 * 2 + 0x61];
                  *(int *)((long)param_1 + 0x27c) = iVar4;
                  *(undefined1 *)(param_1 + 0x54) = 0;
                  param_1[0x51] = lVar11;
                  param_1[0x52] = lVar17;
                  goto switchD_0010c147_caseD_21;
                }
                *(undefined4 *)(param_1 + 3) = 0x83;
                *(undefined1 *)(param_1 + 0x54) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 3) = 0x84;
              *(undefined1 *)(param_1 + 0x54) = 0;
            }
            goto LAB_0010c3c0;
          }
          goto LAB_0010dad6;
        }
      }
LAB_0010d1f5:
      uVar9 = 0x86;
      goto LAB_0010cdd0;
    case 0x2c:
      if ((int)param_1[0x4f] == 3) {
LAB_0010e2a6:
        uVar9 = 0x9c;
      }
      else {
        puVar29 = (undefined4 *)param_1[0x5c];
        uVar25 = *(uint *)(param_1 + 0x5b);
        uVar26 = *puVar1;
        if (puVar29 == (undefined4 *)0x0) {
LAB_0010e638:
          if (uVar25 < *(uint *)((long)param_1 + 0x2dc)) {
            *(uint *)(param_1 + 0x5b) = uVar25 + 1;
            goto LAB_0010d9eb;
          }
        }
        else {
          puVar31 = puVar29 + (ulong)uVar25 * 8;
          for (; (puVar29 < puVar31 && ((uint)puVar29[6] != uVar26)); puVar29 = puVar29 + 8) {
          }
          if (puVar31 == puVar29) goto LAB_0010e638;
LAB_0010d9eb:
          if (uVar26 < 0x10000) {
            uVar9 = *(undefined4 *)((long)param_1 + 0x27c);
            puVar29[6] = (int)uVar26;
            *puVar29 = uVar9;
            lVar11 = param_1[0x51];
            *(undefined1 *)(puVar29 + 7) = 1;
            *(long *)(puVar29 + 2) = lVar11 + 1;
            if (*(uint *)(param_1 + 0x5f) < uVar26) {
              *(int *)(param_1 + 0x5f) = (int)uVar26;
            }
            while (cVar7 = SkipCode(param_1), cVar7 == '\0') {
              cVar7 = (char)param_1[0x53];
              if (cVar7 == '-') goto LAB_0010e293;
              if ((cVar7 == -0x77) || (cVar7 == ',')) goto LAB_0010d669;
            }
            goto LAB_0010c938;
          }
        }
        uVar9 = 0x8c;
      }
      goto LAB_0010cdd0;
    case 0x2d:
      iVar8 = (int)param_1[0x60];
      if (iVar8 < 1) {
        uVar9 = 0x88;
      }
      else {
        *(int *)(param_1 + 0x60) = iVar8 + -1;
        piVar13 = (int *)((long)(iVar8 + -1) * 0x20 + param_1[0x61]);
        lVar11 = *(long *)(piVar13 + 4);
        *(long *)(piVar13 + 4) = lVar11 + -1;
        *(undefined1 *)(param_1 + 0x54) = 0;
        if (0 < lVar11 + -1) {
          lVar11 = *(long *)(piVar13 + 6);
          *(int *)(param_1 + 0x60) = iVar8;
          param_1[0x51] = *(long *)(lVar11 + 8);
          goto LAB_0010d324;
        }
        iVar8 = *piVar13;
        lVar11 = *(long *)(piVar13 + 2);
        if (2 < iVar8 - 1U) goto LAB_0010cef4;
        if (param_1[(long)iVar8 * 2 + 0x61] == 0) {
          uVar9 = 0x8a;
        }
        else {
          lVar34 = param_1[(long)iVar8 * 2 + 0x62];
          if (lVar11 <= lVar34) {
            param_1[0x50] = param_1[(long)iVar8 * 2 + 0x61];
            *(int *)((long)param_1 + 0x27c) = iVar8;
            param_1[0x51] = lVar11;
            param_1[0x52] = lVar34;
            goto LAB_0010d324;
          }
          uVar9 = 0x83;
        }
      }
      goto LAB_0010cdd0;
    case 0x2e:
    case 0x2f:
      uVar26 = *puVar1;
      if (*(ushort *)((long)param_1 + 0x54) <= (ushort)uVar26) goto LAB_0010d1e8;
      lVar11 = 0;
      if ((bVar24 & 1) != 0) {
        puVar12 = (undefined8 *)((uVar26 & 0xffff) * 0x10 + param_1[0xc]);
        lVar17 = (*(code *)param_1[0x80])(param_1,*puVar12,puVar12[1]);
        lVar11 = (*(code *)param_1[0x7f])(param_1,lVar17,3);
        lVar11 = lVar11 - lVar17;
      }
      auVar46._0_8_ = (*(code *)param_1[0x83])(param_1,param_1 + 9,uVar26 & 0xffff,lVar11);
      auVar46._8_8_ = extraout_XMM0_Qb;
      iVar8 = (int)param_1[3];
      auVar46 = pshuflw(auVar46,ZEXT416((uint)uVar26),0);
      *(int *)(param_1 + 0x43) = auVar46._0_4_;
      goto LAB_0010c370;
    case 0x30:
    case 0x31:
      Ins_IUP_constprop_0(param_1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x32:
    case 0x33:
      if (param_1[4] < param_1[0x46]) {
LAB_0010e114:
        iVar8 = 0;
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
          iVar8 = 0x86;
        }
      }
      else {
        cVar7 = Compute_Point_Displacement_constprop_0
                          (param_1,&local_d8,&local_d0,local_88,&local_da);
        if (cVar7 != '\0') goto LAB_0010c938;
        lVar11 = param_1[0x46];
        lVar18 = param_1[7];
        while (0 < lVar11) {
          lVar18 = lVar18 + -1;
          param_1[7] = lVar18;
          uVar26 = *(ulong *)(param_1[6] + lVar18 * 8);
          if ((ushort)uVar26 < *(ushort *)((long)param_1 + 0xd4)) {
            Move_Zp2_Point(param_1,uVar26 & 0xffff,local_d8,local_d0,1);
            lVar18 = param_1[7];
          }
          else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010c8cb;
          lVar11 = param_1[0x46] + -1;
          param_1[0x46] = lVar11;
        }
LAB_0010e265:
        iVar8 = (int)param_1[3];
      }
      goto LAB_0010e12b;
    case 0x34:
    case 0x35:
      uVar42 = 1;
      if ((short)param_1[0x4e] != 0) {
        uVar42 = *(ushort *)((long)param_1 + 0xd6);
      }
      uVar43 = (ushort)*puVar1;
      if (uVar43 < uVar42) {
        cVar7 = Compute_Point_Displacement_constprop_0
                          (param_1,&local_d8,&local_d0,local_88,&local_da);
        if (cVar7 == '\0') {
          uVar42 = 0;
          if (uVar43 != 0) {
            uVar42 = (1 - (short)param_1[0x20]) +
                     *(short *)(param_1[0x1f] + -2 + (long)(short)uVar43 * 2);
          }
          if ((short)param_1[0x4e] == 0) {
            uVar43 = *(ushort *)((long)param_1 + 0xd4);
          }
          else {
            uVar43 = (1 - (short)param_1[0x20]) +
                     *(short *)(param_1[0x1f] + (long)(short)uVar43 * 2);
          }
          uVar26 = (ulong)uVar43;
          if (uVar42 < uVar43) {
            uVar25 = (uint)uVar42;
            lVar11 = local_70;
            do {
              if ((param_1[0x1c] != lVar11) || (local_da != (short)uVar25)) {
                Move_Zp2_Point(param_1,uVar25,local_d8,local_d0,1);
              }
              uVar25 = uVar25 + 1;
            } while ((ushort)uVar25 < (ushort)uVar26);
          }
        }
        goto LAB_0010c938;
      }
LAB_0010c8be:
      if (*(char *)((long)param_1 + 0x3e9) != '\0') {
LAB_0010c8cb:
        *(undefined4 *)(param_1 + 3) = 0x86;
        goto LAB_0010c3c0;
      }
      goto switchD_0010c147_caseD_21;
    case 0x36:
    case 0x37:
      if (1 < (uint)*puVar1) goto LAB_0010c8be;
      cVar7 = Compute_Point_Displacement_constprop_0(param_1,&local_d8,&local_d0,local_88,&local_da)
      ;
      if (cVar7 == '\0') {
        if ((short)param_1[0x4e] == 0) {
          uVar42 = *(ushort *)((long)param_1 + 0xd4);
        }
        else {
          if (((short)param_1[0x4e] != 1) || (*(short *)((long)param_1 + 0xd6) < 1))
          goto LAB_0010c938;
          uVar42 = *(short *)(param_1[0x1f] + -2 + (long)*(short *)((long)param_1 + 0xd6) * 2) + 1;
        }
        if (uVar42 != 0) {
          uVar26 = (ulong)uVar42;
          iVar8 = 0;
          lVar11 = local_70;
          do {
            if ((param_1[0x1c] != lVar11) || (local_da != (short)iVar8)) {
              Move_Zp2_Point(param_1,iVar8,local_d8,local_d0,0);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != (int)uVar26);
        }
      }
      goto LAB_0010c938;
    case 0x38:
      uVar26 = 1;
      if ((*(short *)((long)param_1 + 0x26c) != 0) && (*(short *)((long)param_1 + 0x26e) != 0)) {
        uVar26 = (ulong)((short)param_1[0x4e] == 0);
      }
      lVar11 = param_1[0x46];
      if (param_1[4] <= lVar11) goto LAB_0010e114;
      uVar36 = (ulong)(uint)*puVar1;
      iVar8 = TT_MulFix14_long_long(uVar36,(int)*(short *)((long)param_1 + 0x226));
      lVar30 = (long)iVar8;
      iVar8 = TT_MulFix14_long_long(uVar36 & 0xffffffff,(int)(short)param_1[0x45]);
      lVar34 = (long)iVar8;
      lVar17 = extraout_RDX;
      if (0 < lVar11) {
        while( true ) {
          lVar18 = lVar18 + -1;
          param_1[7] = lVar18;
          uVar36 = *(ulong *)(lVar17 + lVar18 * 8);
          if ((ushort)uVar36 < *(ushort *)((long)param_1 + 0xd4)) {
            if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
               (*(char *)((long)param_1 + 1099) != '\0')) {
              if (((int)uVar26 != 0) ||
                 (((*(char *)((long)param_1 + 0x44c) == '\0' ||
                   (*(char *)((long)param_1 + 0x44d) == '\0')) &&
                  ((((char)param_1[0x7d] != '\0' && ((short)param_1[0x45] != 0)) ||
                   ((*(byte *)(param_1[0x1e] + (uVar36 & 0xffff)) & 0x10) != 0)))))) {
                Move_Zp2_Point(param_1,uVar36 & 0xffff,0,lVar34,1);
                lVar18 = param_1[7];
              }
            }
            else {
              Move_Zp2_Point(param_1,uVar36 & 0xffff,lVar30,lVar34,1);
              lVar18 = param_1[7];
            }
          }
          else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
          lVar11 = param_1[0x46];
          param_1[0x46] = lVar11 + -1;
          if (lVar11 + -1 < 1) break;
          lVar17 = param_1[6];
        }
        goto LAB_0010e265;
      }
      goto LAB_0010e492;
    case 0x39:
      Ins_IP_constprop_0(param_1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x3a:
    case 0x3b:
      uVar26 = *puVar1;
      if ((*(ushort *)((long)param_1 + 0x94) <= (ushort)uVar26) ||
         (uVar36 = (ulong)*(ushort *)(param_1 + 0x43),
         *(ushort *)((long)param_1 + 0x54) <= *(ushort *)(param_1 + 0x43))) goto LAB_0010d1e8;
      lVar11 = (uVar26 & 0xffff) * 0x10;
      if (*(short *)((long)param_1 + 0x26e) == 0) {
        puVar12 = (undefined8 *)(uVar36 * 0x10 + param_1[0xb]);
        lVar17 = param_1[0x13];
        uVar6 = puVar12[1];
        *(undefined8 *)(lVar17 + lVar11) = *puVar12;
        ((undefined8 *)(lVar17 + lVar11))[1] = uVar6;
        (*(code *)param_1[0x84])(param_1,param_1 + 0x11,uVar26 & 0xffff,puVar1[1]);
        lVar17 = ((long *)(param_1[0x13] + lVar11))[1];
        plVar16 = (long *)(param_1[0x14] + lVar11);
        uVar36 = (ulong)*(ushort *)(param_1 + 0x43);
        *plVar16 = *(long *)(param_1[0x13] + lVar11);
        plVar16[1] = lVar17;
      }
      else {
        plVar16 = (long *)(param_1[0x14] + lVar11);
      }
      plVar40 = (long *)(uVar36 * 0x10 + param_1[0xc]);
      lVar11 = (*(code *)param_1[0x80])(param_1,*plVar16 - *plVar40,plVar16[1] - plVar40[1]);
      (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar26 & 0xffff,puVar1[1] - lVar11);
      *(uint *)((long)param_1 + 0x21a) = (int)uVar26 << 0x10 | (uint)*(ushort *)(param_1 + 0x43);
      if ((*(byte *)(param_1 + 0x53) & 1) == 0) goto LAB_0010c938;
      *(ushort *)(param_1 + 0x43) = (ushort)uVar26;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x3c:
      if ((param_1[4] < param_1[0x46]) ||
         (*(ushort *)((long)param_1 + 0x54) <= *(ushort *)(param_1 + 0x43))) goto LAB_0010e114;
      if (0 < param_1[0x46]) {
        while( true ) {
          lVar18 = lVar18 + -1;
          param_1[7] = lVar18;
          uVar26 = *(ulong *)(lVar11 + lVar18 * 8);
          if ((ushort)uVar26 < *(ushort *)((long)param_1 + 0x94)) {
            plVar40 = (long *)((uVar26 & 0xffff) * 0x10 + param_1[0x14]);
            plVar16 = (long *)((ulong)*(ushort *)(param_1 + 0x43) * 0x10 + param_1[0xc]);
            lVar11 = (*(code *)param_1[0x80])(param_1,*plVar40 - *plVar16,plVar40[1] - plVar16[1]);
            (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar26 & 0xffff,-lVar11);
            lVar18 = param_1[7];
          }
          else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
          lVar11 = param_1[0x46];
          param_1[0x46] = lVar11 + -1;
          if (lVar11 + -1 < 1) break;
          lVar11 = param_1[6];
        }
        iVar8 = (int)param_1[3];
        goto LAB_0010e12b;
      }
      goto LAB_0010e492;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x48) = 2;
      param_1[0x7f] = (long)Round_To_Double_Grid;
      break;
    case 0x3e:
    case 0x3f:
      Ins_MIAP_constprop_0(param_1,puVar1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x40:
      bVar24 = *(byte *)(lVar34 + 1 + param_1[0x51]);
      if ((uint)bVar24 < (uint)((iVar8 + 1) - (int)param_1[4])) {
        uVar42 = (ushort)bVar24;
        if (uVar42 != 0) {
          *puVar1 = (ulong)*(byte *)(lVar34 + 2 + param_1[0x51]);
          lVar11 = 2;
          if (uVar42 != 1) {
            do {
              puVar1[lVar11 + -1] = (ulong)*(byte *)(lVar34 + lVar11 + param_1[0x51] + 1);
              lVar11 = lVar11 + 1;
            } while ((ushort)lVar11 <= uVar42);
          }
          lVar17 = param_1[8];
        }
        lVar17 = lVar17 + (ulong)bVar24;
        param_1[8] = lVar17;
        break;
      }
LAB_0010dad6:
      uVar9 = 0x82;
      goto LAB_0010cdd0;
    case 0x41:
      lVar11 = param_1[0x51];
      bVar24 = *(byte *)(lVar34 + 1 + lVar11);
      if ((uint)((iVar8 + 1) - (int)param_1[4]) <= (uint)bVar24) goto LAB_0010dad6;
      if (bVar24 == 0) {
        param_1[0x51] = lVar11 + 2;
      }
      else {
        param_1[0x51] = lVar11 + 4;
        *puVar1 = (long)(short)((ushort)*(byte *)(lVar34 + 2 + lVar11) * 0x100 +
                               (ushort)*(byte *)(lVar34 + 3 + lVar11));
        if (bVar24 != 1) {
          puVar22 = puVar1 + 1;
          do {
            lVar11 = param_1[0x51];
            puVar23 = puVar22 + 1;
            param_1[0x51] = lVar11 + 2;
            *puVar22 = (long)(short)((ushort)*(byte *)(lVar34 + lVar11) * 0x100 +
                                    (ushort)*(byte *)(lVar34 + 1 + lVar11));
            puVar22 = puVar23;
          } while (puVar23 != puVar1 + (ulong)(bVar24 - 2 & 0xffff) + 2);
        }
        lVar17 = param_1[8];
      }
      lVar17 = lVar17 + (ulong)bVar24;
      *(undefined1 *)(param_1 + 0x54) = 0;
      param_1[8] = lVar17;
LAB_0010d324:
      param_1[4] = lVar17;
      goto LAB_0010c187;
    case 0x42:
      uVar26 = *puVar1;
      if (*(ushort *)(param_1 + 0x69) <= uVar26) goto LAB_0010d1e8;
      iVar8 = 0;
      lVar11 = param_1[0x6a];
      if (((int)param_1[0x4f] != 3) || (param_1[0x6c] == lVar11)) {
LAB_0010cfb2:
        *(ulong *)(lVar11 + uVar26 * 8) = puVar1[1];
        goto LAB_0010c370;
      }
      pvVar19 = (void *)ft_mem_qrealloc(param_1[2],8,(short)param_1[0x6b]);
      param_1[0x6c] = (long)pvVar19;
      *(int *)(param_1 + 3) = local_88[0];
      iVar8 = local_88[0];
      if (local_88[0] == 0) {
        *(ushort *)(param_1 + 0x6b) = *(ushort *)(param_1 + 0x69);
        memcpy(pvVar19,(void *)param_1[0x6a],(ulong)*(ushort *)(param_1 + 0x69) * 8);
        lVar11 = param_1[0x6c];
        iVar8 = (int)param_1[3];
        param_1[0x6a] = lVar11;
        goto LAB_0010cfb2;
      }
      goto LAB_0010c378;
    case 0x43:
      if (*puVar1 < (ulong)*(ushort *)(param_1 + 0x69)) {
        *puVar1 = *(ulong *)(param_1[0x6a] + *puVar1 * 8);
        lVar17 = param_1[8];
      }
      else {
LAB_0010e248:
        if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
        *puVar1 = 0;
        lVar17 = param_1[8];
      }
      break;
    case 0x44:
      if ((ulong)param_1[0x55] <= *puVar1) goto LAB_0010d1e8;
      (*(code *)param_1[0x87])(param_1,*puVar1,puVar1[1]);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x45:
      if ((ulong)param_1[0x55] <= *puVar1) goto LAB_0010e248;
      uVar26 = (*(code *)param_1[0x86])(param_1);
      *puVar1 = uVar26;
      goto LAB_0010c938;
    case 0x46:
    case 0x47:
      if (*puVar1 < (ulong)*(ushort *)((long)param_1 + 0xd4)) {
        lVar11 = *puVar1 * 0x10;
        if ((bVar24 & 1) == 0) {
          puVar12 = (undefined8 *)(lVar11 + param_1[0x1c]);
          uVar26 = (*(code *)param_1[0x80])(param_1,*puVar12,puVar12[1]);
          iVar8 = (int)param_1[3];
        }
        else {
          puVar12 = (undefined8 *)(lVar11 + param_1[0x1b]);
          uVar26 = (*(code *)param_1[0x81])(param_1,*puVar12,puVar12[1]);
          iVar8 = (int)param_1[3];
        }
      }
      else {
LAB_0010e13f:
        if (*(char *)((long)param_1 + 0x3e9) == '\0') {
          iVar8 = 0;
          uVar26 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 3) = 0x86;
          iVar8 = 0x86;
          uVar26 = 0;
        }
      }
      goto LAB_0010c708;
    case 0x48:
      uVar26 = *puVar1;
      if (*(ushort *)((long)param_1 + 0xd4) <= (ushort)uVar26) goto LAB_0010d1e8;
      lVar17 = (uVar26 & 0xffff) * 0x10;
      lVar11 = (*(code *)param_1[0x80])
                         (param_1,*(undefined8 *)(lVar17 + param_1[0x1c]),
                          ((undefined8 *)(lVar17 + param_1[0x1c]))[1]);
      (*(code *)param_1[0x83])(param_1,param_1 + 0x19,uVar26 & 0xffff,puVar1[1] - lVar11);
      if ((short)param_1[0x4e] != 0) goto LAB_0010c938;
      lVar11 = param_1[0x1b];
      uVar6 = ((undefined8 *)(param_1[0x1c] + lVar17))[1];
      *(undefined8 *)(lVar11 + lVar17) = *(undefined8 *)(param_1[0x1c] + lVar17);
      ((undefined8 *)(lVar11 + lVar17))[1] = uVar6;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x49:
    case 0x4a:
      if ((*(ushort *)((long)param_1 + 0x54) <= (ushort)*puVar1) ||
         (*(ushort *)((long)param_1 + 0x94) <= (ushort)puVar1[1])) goto LAB_0010e13f;
      lVar11 = (*puVar1 & 0xffff) * 0x10;
      lVar17 = (puVar1[1] & 0xffff) * 0x10;
      if ((bVar24 & 1) == 0) {
        pcVar37 = (code *)param_1[0x81];
        if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
          uVar26 = (*pcVar37)(param_1,*(long *)(lVar11 + param_1[0xb]) -
                                      *(long *)(lVar17 + param_1[0x13]),
                              ((long *)(lVar11 + param_1[0xb]))[1] -
                              ((long *)(lVar17 + param_1[0x13]))[1]);
          iVar8 = (int)param_1[3];
        }
        else {
          lVar34 = *(long *)(lVar11 + param_1[0xd]);
          lVar18 = *(long *)(lVar17 + param_1[0x15]);
          lVar11 = ((long *)(lVar11 + param_1[0xd]))[1];
          lVar17 = ((long *)(lVar17 + param_1[0x15]))[1];
          if (param_1[0x33] == param_1[0x34]) {
            iVar8 = (*pcVar37)(param_1,lVar34 - lVar18,lVar11 - lVar17);
            lVar11 = (long)(int)param_1[0x33] * (long)iVar8;
            iVar8 = (int)param_1[3];
            uVar26 = (ulong)(int)((ulong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          }
          else {
            lVar34 = (long)((int)lVar34 - (int)lVar18) * (long)(int)param_1[0x33];
            lVar11 = (long)((int)lVar11 - (int)lVar17) * (long)(int)param_1[0x34];
            uVar26 = (*pcVar37)(param_1,(long)(int)((ulong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >>
                                                   0x10),
                                (long)(int)((ulong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10));
            iVar8 = (int)param_1[3];
          }
        }
      }
      else {
        uVar26 = (*(code *)param_1[0x80])
                           (param_1,*(long *)(lVar11 + param_1[0xc]) -
                                    *(long *)(lVar17 + param_1[0x14]),
                            ((long *)(lVar11 + param_1[0xc]))[1] -
                            ((long *)(lVar17 + param_1[0x14]))[1]);
        iVar8 = (int)param_1[3];
      }
LAB_0010c708:
      *puVar1 = uVar26;
      goto LAB_0010c370;
    case 0x4b:
switchD_0010c147_caseD_4b:
      uVar26 = (*(code *)param_1[0x85])(param_1);
      *puVar1 = uVar26;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x4c:
      if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x23) goto switchD_0010c147_caseD_4b;
      *puVar1 = param_1[0x31];
      lVar17 = param_1[8];
      break;
    case 0x4d:
      *(undefined1 *)((long)param_1 + 0x244) = 1;
      break;
    case 0x4e:
      *(undefined1 *)((long)param_1 + 0x244) = 0;
      break;
    case 0x4f:
      uVar9 = 0x87;
      goto LAB_0010cdd0;
    case 0x50:
      *puVar1 = (ulong)((long)*puVar1 < (long)puVar1[1]);
      lVar17 = param_1[8];
      break;
    case 0x51:
      *puVar1 = (ulong)((long)*puVar1 <= (long)puVar1[1]);
      lVar17 = param_1[8];
      break;
    case 0x52:
      *puVar1 = (ulong)((long)puVar1[1] < (long)*puVar1);
      lVar17 = param_1[8];
      break;
    case 0x53:
      *puVar1 = (ulong)((long)puVar1[1] <= (long)*puVar1);
      lVar17 = param_1[8];
      break;
    case 0x54:
      *puVar1 = (ulong)(*puVar1 == puVar1[1]);
      lVar17 = param_1[8];
      break;
    case 0x55:
      *puVar1 = (ulong)(*puVar1 != puVar1[1]);
      lVar17 = param_1[8];
      break;
    case 0x56:
      uVar25 = (*(code *)param_1[0x7f])(param_1,*puVar1,3);
      *puVar1 = (ulong)((uVar25 & 0x7f) == 0x40);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x57:
      uVar26 = (*(code *)param_1[0x7f])(param_1,*puVar1,3);
      *puVar1 = (ulong)((uVar26 & 0x7f) == 0);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x58:
      if (*puVar1 != 0) break;
      uVar26 = 1;
      do {
        while( true ) {
          while( true ) {
            cVar7 = SkipCode(param_1);
            if (cVar7 == '\x01') goto LAB_0010c938;
            cVar7 = (char)param_1[0x53];
            iVar8 = (int)uVar26;
            if (cVar7 != 'X') break;
            uVar26 = (ulong)(iVar8 + 1);
          }
          if (cVar7 == 'Y') break;
          if ((cVar7 == '\x1b') && (iVar8 == 1)) goto LAB_0010c938;
        }
        uVar26 = (ulong)(iVar8 - 1U);
      } while (iVar8 - 1U != 0);
LAB_0010c938:
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x5a:
      uVar26 = *puVar1;
      if (*puVar1 != 0) {
LAB_0010cdf4:
        uVar26 = (ulong)(puVar1[1] != 0);
      }
      goto LAB_0010c5b8;
    case 0x5b:
      uVar26 = 1;
      if (*puVar1 == 0) goto LAB_0010cdf4;
      goto LAB_0010c5b8;
    case 0x5c:
      *puVar1 = (ulong)(*puVar1 == 0);
      lVar17 = param_1[8];
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      Ins_DELTAP_constprop_0(param_1,puVar1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x5e:
      *(short *)(param_1 + 0x4c) = (short)*puVar1;
      break;
    case 0x5f:
      if (6 < *puVar1) goto LAB_0010cef4;
      *(short *)((long)param_1 + 0x262) = (short)*puVar1;
      break;
    case 0x60:
      *puVar1 = *puVar1 + puVar1[1];
      lVar17 = param_1[8];
      break;
    case 0x61:
      *puVar1 = *puVar1 - puVar1[1];
      lVar17 = param_1[8];
      break;
    case 0x62:
      if (puVar1[1] == 0) {
        uVar9 = 0x85;
        goto LAB_0010cdd0;
      }
      uVar26 = FT_MulDiv_No_Round(*puVar1,0x40);
      *puVar1 = uVar26;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 99:
      uVar26 = FT_MulDiv(*puVar1,puVar1[1],0x40);
      *puVar1 = uVar26;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 100:
      if ((long)*puVar1 < 0) {
        uVar26 = -*puVar1;
        goto LAB_0010c5b8;
      }
      break;
    case 0x65:
      *puVar1 = -*puVar1;
      lVar17 = param_1[8];
      break;
    case 0x66:
      *puVar1 = *puVar1 & 0xffffffffffffffc0;
      lVar17 = param_1[8];
      break;
    case 0x67:
      *puVar1 = *puVar1 + 0x3f & 0xffffffffffffffc0;
      lVar17 = param_1[8];
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar26 = (*(code *)param_1[0x7f])(param_1,*puVar1,bVar24 & 3);
      *puVar1 = uVar26;
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar26 = *puVar1;
      if ((long)uVar26 < 0) {
        uVar26 = uVar26 - param_1[(ulong)(bVar24 & 3) + 0x3e];
        if (0 < (long)uVar26) {
          uVar26 = 0;
        }
      }
      else {
        uVar26 = uVar26 + param_1[(ulong)(bVar24 & 3) + 0x3e];
        if ((long)uVar26 < 0) {
          uVar26 = 0;
        }
      }
      goto LAB_0010c5b8;
    case 0x70:
      if ((ulong)param_1[0x55] <= *puVar1) goto LAB_0010d1e8;
      lVar11 = (long)(int)puVar1[1] * (long)(int)param_1[0x3d];
      *(long *)(param_1[0x56] + *puVar1 * 8) =
           (long)(int)((ulong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
      lVar17 = param_1[8];
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      lVar17 = (*(code *)param_1[0x85])(param_1);
      uVar26 = *puVar1;
      lVar11 = param_1[7];
      if (uVar26 == 0) {
        iVar8 = (int)param_1[3];
      }
      else {
        uVar36 = 1;
        lVar34 = lVar11;
        do {
          if (lVar34 < 2) {
            if (*(char *)((long)param_1 + 0x3e9) == '\0') {
              iVar8 = (int)param_1[3];
            }
            else {
              *(undefined4 *)(param_1 + 3) = 0x81;
              iVar8 = 0x81;
            }
            param_1[7] = 0;
            lVar11 = 0;
            goto LAB_0010e2c9;
          }
          lVar11 = lVar34 + -2;
          param_1[7] = lVar11;
          uVar39 = *(ulong *)(param_1[6] + -8 + lVar34 * 8);
          uVar21 = *(ulong *)(param_1[6] + lVar11 * 8);
          if (uVar39 < (ulong)param_1[0x55]) {
            uVar32 = (ulong)((uint)(uVar21 >> 4) & 0xf);
            if ((char)param_1[0x53] == 't') {
              uVar32 = uVar32 + 0x10;
            }
            else if ((char)param_1[0x53] == 'u') {
              uVar32 = uVar32 + 0x20;
            }
            if (lVar17 == *(ushort *)(param_1 + 0x4c) + uVar32) {
              uVar21 = (ulong)((uint)uVar21 & 0xf);
              lVar11 = uVar21 - 8;
              if (-1 < lVar11) {
                lVar11 = uVar21 - 7;
              }
              (*(code *)param_1[0x88])
                        (param_1,uVar39,lVar11 << (6U - *(char *)((long)param_1 + 0x262) & 0x3f));
              lVar11 = param_1[7];
            }
          }
          else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
          uVar36 = uVar36 + 1;
          lVar34 = lVar11;
        } while (uVar36 <= uVar26);
        iVar8 = (int)param_1[3];
      }
LAB_0010e2c9:
      param_1[8] = lVar11;
      goto LAB_0010c370;
    case 0x76:
      SetSuperRound_constprop_0(param_1,0x4000,*puVar1);
      *(undefined4 *)(param_1 + 0x48) = 6;
      param_1[0x7f] = (long)Round_Super;
      break;
    case 0x77:
      SetSuperRound_constprop_0(param_1,0x2d41,*puVar1);
      *(undefined4 *)(param_1 + 0x48) = 7;
      param_1[0x7f] = (long)Round_Super_45;
      break;
    case 0x78:
      if (puVar1[1] != 0) goto switchD_0010c147_caseD_1c;
      break;
    case 0x79:
      if (puVar1[1] == 0) goto switchD_0010c147_caseD_1c;
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x48) = 5;
      param_1[0x7f] = (long)Round_None;
      break;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x48) = 4;
      param_1[0x7f] = (long)Round_Up_To_Grid;
      break;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x48) = 3;
      param_1[0x7f] = (long)Round_Down_To_Grid;
      break;
    case 0x80:
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
          (*(char *)((long)param_1 + 1099) == '\0')) ||
         ((*(char *)((long)param_1 + 0x44c) == '\0' || (*(char *)((long)param_1 + 0x44d) == '\0'))))
      {
        if (param_1[4] < param_1[0x46]) {
          iVar8 = 0;
          if (*(char *)((long)param_1 + 0x3e9) != '\0') {
            *(undefined4 *)(param_1 + 3) = 0x81;
            iVar8 = 0x81;
          }
          goto LAB_0010e12b;
        }
        if (0 < param_1[0x46]) {
          while( true ) {
            lVar18 = lVar18 + -1;
            param_1[7] = lVar18;
            uVar26 = *(ulong *)(lVar11 + lVar18 * 8);
            if ((ushort)uVar26 < *(ushort *)((long)param_1 + 0x114)) {
              pbVar14 = (byte *)((uVar26 & 0xffff) + param_1[0x26]);
              *pbVar14 = *pbVar14 ^ 1;
              lVar18 = param_1[7];
            }
            else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_0010d1f5;
            lVar11 = param_1[0x46];
            param_1[0x46] = lVar11 + -1;
            if (lVar11 + -1 < 1) break;
            lVar11 = param_1[6];
          }
          goto LAB_0010e265;
        }
      }
LAB_0010e492:
      iVar8 = 0;
LAB_0010e12b:
      param_1[0x46] = 1;
      param_1[8] = lVar18;
      goto LAB_0010c370;
    case 0x81:
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
          (*(char *)((long)param_1 + 1099) == '\0')) ||
         ((*(char *)((long)param_1 + 0x44c) == '\0' || (*(char *)((long)param_1 + 0x44d) == '\0'))))
      {
        uVar42 = (ushort)puVar1[1];
        uVar35 = (ushort)*puVar1;
        uVar26 = *puVar1 & 0xffffffff;
        uVar43 = uVar42;
        if (uVar42 <= uVar35) {
          uVar43 = uVar35;
        }
        if (*(ushort *)((long)param_1 + 0x114) <= uVar43) goto LAB_0010d1e8;
        if (uVar35 <= uVar42) {
          do {
            uVar36 = uVar26 & 0xffff;
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar25;
            pbVar14 = (byte *)(uVar36 + param_1[0x26]);
            *pbVar14 = *pbVar14 | 1;
          } while ((ushort)uVar25 <= uVar42);
          goto LAB_0010c938;
        }
      }
      break;
    case 0x82:
      if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
           (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
         || (*(char *)((long)param_1 + 0x44d) == '\0')) {
        uVar42 = (ushort)puVar1[1];
        uVar35 = (ushort)*puVar1;
        uVar26 = *puVar1 & 0xffffffff;
        uVar43 = uVar42;
        if (uVar42 <= uVar35) {
          uVar43 = uVar35;
        }
        if (*(ushort *)((long)param_1 + 0x114) <= uVar43) goto LAB_0010d1e8;
        if (uVar35 <= uVar42) {
          do {
            uVar36 = uVar26 & 0xffff;
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar25;
            pbVar14 = (byte *)(uVar36 + param_1[0x26]);
            *pbVar14 = *pbVar14 & 0xfe;
          } while ((ushort)uVar25 <= uVar42);
          goto LAB_0010c938;
        }
      }
      break;
    case 0x85:
      uVar26 = *puVar1;
      uVar25 = (uint)uVar26 & 0xff;
      if (uVar25 == 0xff) {
        *(undefined1 *)((long)param_1 + 0x265) = 1;
      }
      else {
        if ((uVar26 & 0xff) != 0) {
          if (((uVar26 & 0x100) != 0) && (*(ushort *)(param_1 + 0x3b) <= uVar25)) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar26 & 0x200) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar26 & 0x400) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar26 & 0x800) != 0) && (uVar25 < *(ushort *)(param_1 + 0x3b))) {
            *(undefined1 *)((long)param_1 + 0x265) = 0;
          }
          if (((uVar26 & 0x1000) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 0;
          }
          if (((uVar26 & 0x2000) == 0) || (*(char *)((long)param_1 + 0x212) == '\0')) break;
        }
        *(undefined1 *)((long)param_1 + 0x265) = 0;
      }
      break;
    case 0x86:
    case 0x87:
      if ((*(ushort *)((long)param_1 + 0x94) <= (ushort)*puVar1) ||
         (*(ushort *)((long)param_1 + 0xd4) <= (ushort)puVar1[1])) goto LAB_0010d1e8;
      lVar34 = (*puVar1 & 0xffff) * 0x10;
      plVar40 = (long *)(param_1[0x13] + lVar34);
      lVar18 = (puVar1[1] & 0xffff) * 0x10;
      lVar11 = plVar40[1];
      plVar16 = (long *)(param_1[0x1b] + lVar18);
      lVar30 = *plVar40 - *plVar16;
      lVar17 = plVar16[1];
      lVar41 = lVar11 - lVar17;
      if (lVar30 == 0 && lVar41 == 0) {
        bVar24 = 0;
        lVar33 = 0;
        lVar11 = 0x4000;
LAB_0010e6cb:
        local_a8 = lVar11;
        local_a0 = lVar33;
        FT_Vector_NormLen(&local_a8);
        uVar26 = (ulong)bVar24;
        lVar11 = local_a8 + 3;
        if (-1 < local_a8) {
          lVar11 = local_a8;
        }
        *(short *)((long)param_1 + 0x21e) = (short)(lVar11 >> 2);
        lVar11 = local_a0 + 3;
        if (-1 < local_a0) {
          lVar11 = local_a0;
        }
        *(short *)(param_1 + 0x44) = (short)(lVar11 >> 2);
      }
      else {
        lVar33 = lVar30;
        lVar11 = lVar17 - lVar11;
        if ((bVar24 & 1) == 0) {
          lVar33 = lVar41;
          lVar11 = lVar30;
        }
        if (lVar11 != 0 || lVar33 != 0) goto LAB_0010e6cb;
      }
      plVar40 = (long *)(lVar34 + param_1[0x14]);
      plVar16 = (long *)(lVar18 + param_1[0x1c]);
      lVar11 = plVar40[1];
      lVar17 = plVar16[1];
      lVar34 = *plVar40 - *plVar16;
      lVar18 = lVar11 - lVar17;
      if (lVar34 == 0 && lVar18 == 0) {
        lVar30 = 0;
        lVar11 = 0x4000;
      }
      else {
        lVar30 = lVar34;
        lVar11 = lVar17 - lVar11;
        if ((uVar26 & 1) == 0) {
          lVar30 = lVar18;
          lVar11 = lVar34;
        }
        if (lVar11 == 0 && lVar30 == 0) goto LAB_0010cacc;
      }
      local_98 = lVar11;
      local_90 = lVar30;
      FT_Vector_NormLen(&local_98);
      lVar11 = local_98 + 3;
      if (-1 < local_98) {
        lVar11 = local_98;
      }
      *(short *)((long)param_1 + 0x222) = (short)(lVar11 >> 2);
      lVar11 = local_90 + 3;
      if (-1 < local_90) {
        lVar11 = local_90;
      }
      *(short *)((long)param_1 + 0x224) = (short)(lVar11 >> 2);
LAB_0010cacc:
      Compute_Funcs(param_1);
      iVar8 = (int)param_1[3];
      goto LAB_0010c370;
    case 0x88:
      uVar36 = *puVar1;
      uVar25 = *(uint *)(*(long *)(*param_1 + 0xb0) + 0x78);
      uVar26 = 0;
      if ((uVar36 & 1) != 0) {
        uVar26 = (ulong)uVar25;
      }
      if (((uVar36 & 2) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
        uVar26 = uVar26 | 0x100;
      }
      if (((uVar36 & 4) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
        uVar26 = uVar26 | 0x200;
      }
      if (((uVar36 & 8) != 0) && (*(long *)(*param_1 + 0x4c0) != 0)) {
        uVar26 = uVar26 | 0x400;
      }
      if (((uVar36 & 0x20) != 0) && ((char)param_1[0x89] != '\0')) {
        uVar26 = uVar26 | 0x1000;
      }
      if ((uVar25 == 0x28) && (*(char *)((long)param_1 + 0x449) != '\0')) {
        if ((uVar36 & 0x40) != 0) {
          uVar26 = uVar26 | 0x2000;
        }
        if (((uVar36 & 0x100) != 0) && (*(char *)((long)param_1 + 0x44a) != '\0')) {
          uVar26 = uVar26 | 0x8000;
        }
        if ((uVar36 & 0x400) != 0) {
          uVar26 = uVar26 | 0x20000;
        }
        if ((uVar36 & 0x800) != 0) {
          uVar26 = uVar26 | 0x40000;
        }
        if (((uVar36 & 0x1000) != 0) && (*(char *)((long)param_1 + 0x44e) != '\0')) {
          uVar26 = uVar26 | 0x80000;
        }
      }
LAB_0010c5b8:
      *puVar1 = uVar26;
      lVar17 = param_1[8];
      break;
    case 0x89:
      if ((int)param_1[0x4f] == 3) goto LAB_0010e2a6;
      puVar29 = (undefined4 *)param_1[0x5e];
      uVar25 = *(uint *)(param_1 + 0x5d);
      if (puVar29 == (undefined4 *)0x0) {
LAB_0010e652:
        if (uVar25 < *(uint *)((long)param_1 + 0x2ec)) {
          *(uint *)(param_1 + 0x5d) = uVar25 + 1;
          goto LAB_0010d5fb;
        }
      }
      else {
        puVar31 = puVar29 + (ulong)uVar25 * 8;
        if (puVar29 < puVar31) {
          do {
            if ((ulong)(uint)puVar29[6] == *puVar1) break;
            puVar29 = puVar29 + 8;
          } while (puVar29 < puVar31);
        }
        if (puVar29 == puVar31) goto LAB_0010e652;
LAB_0010d5fb:
        if (*puVar1 < 0x100) {
          puVar29[6] = (int)*puVar1;
          *(long *)(puVar29 + 2) = param_1[0x51] + 1;
          uVar9 = *(undefined4 *)((long)param_1 + 0x27c);
          *(undefined1 *)(puVar29 + 7) = 1;
          uVar25 = *(uint *)((long)param_1 + 0x2fc);
          *puVar29 = uVar9;
          if ((ulong)uVar25 < *puVar1) {
            *(uint *)((long)param_1 + 0x2fc) = (uint)*puVar1 & 0xff;
          }
          while (cVar7 = SkipCode(param_1), cVar7 == '\0') {
            cVar7 = (char)param_1[0x53];
            if (cVar7 == '-') goto LAB_0010e293;
            if ((cVar7 == -0x77) || (cVar7 == ',')) goto LAB_0010d669;
          }
          goto LAB_0010c938;
        }
      }
      uVar9 = 0x8d;
      goto LAB_0010cdd0;
    case 0x8a:
      uVar26 = puVar1[2];
      puVar1[2] = *puVar1;
      *puVar1 = puVar1[1];
      puVar1[1] = uVar26;
      lVar11 = param_1[8];
      cVar7 = (char)param_1[0x54];
      goto LAB_0010c17b;
    case 0x8b:
      uVar26 = puVar1[1];
      if ((long)*puVar1 < (long)puVar1[1]) goto LAB_0010c5b8;
      break;
    case 0x8c:
      uVar26 = puVar1[1];
      if ((long)puVar1[1] < (long)*puVar1) goto LAB_0010c5b8;
      break;
    case 0x8d:
      if (-1 < (long)*puVar1) {
        *(uint *)(param_1 + 0x4d) = (uint)*puVar1 & 0xffff;
      }
      break;
    case 0x8e:
      uVar26 = puVar1[1];
      uVar36 = *puVar1;
      if ((2 < uVar26 - 1) ||
         ((iVar8 = 1 << ((char)uVar26 - 1U & 0x1f), (long)iVar8 != uVar36 && (uVar36 != 0))))
      goto LAB_0010d1e8;
      if ((int)param_1[0x4f] == 2) {
        *(byte *)((long)param_1 + 0x264) =
             ~(byte)iVar8 & *(byte *)((long)param_1 + 0x264) | (byte)uVar36;
      }
      else {
        if (((int)param_1[0x4f] != 3) || (uVar26 != 3)) goto LAB_0010d1e8;
        if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) {
          *(bool *)((long)param_1 + 1099) = uVar36 != 4;
        }
      }
      break;
    case 0x91:
      goto switchD_0010c147_caseD_91;
    case 0x92:
      if (*(long *)(*param_1 + 0x4c0) != 0) {
        *puVar1 = 0x11;
        lVar17 = param_1[8];
        break;
      }
      goto switchD_0010c147_caseD_28;
    }
    param_1[4] = lVar17;
    goto LAB_0010c254;
  }
  puVar5 = *(uint **)(*param_1 + 0x4c0);
  if (puVar5 == (uint *)0x0) {
    lVar17 = param_1[8];
  }
  else {
    lVar17 = (ulong)*puVar5 + param_1[7];
    param_1[8] = lVar17;
  }
  if (lVar17 <= lVar11) {
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 3) = 0;
    if (puVar5 == (uint *)0x0) goto switchD_0010c147_caseD_28;
    uVar25 = *puVar5;
    lVar11 = *(long *)(puVar5 + 4);
    if ((uint)((iVar8 + 1) - (int)param_1[4]) <= uVar25) goto LAB_0010dad6;
    pvVar19 = (void *)(param_1[6] + param_1[7] * 8);
    if (lVar11 == 0) {
      if (uVar25 != 0) {
        memset(pvVar19,0,(ulong)uVar25 * 8);
        iVar8 = (int)param_1[3];
        goto LAB_0010c370;
      }
    }
    else if (uVar25 != 0) {
      lVar17 = 0;
      do {
        *(long *)((long)pvVar19 + lVar17) = *(long *)(lVar11 + lVar17) >> 2;
        lVar17 = lVar17 + 8;
      } while (lVar17 != (ulong)uVar25 * 8);
      goto LAB_0010c938;
    }
    goto switchD_0010c147_caseD_21;
  }
LAB_0010c296:
  *(undefined4 *)(param_1 + 3) = 0x82;
  uVar9 = 0x82;
  goto LAB_0010c2a2;
LAB_0010e293:
  *(long *)(puVar29 + 4) = param_1[0x51];
  iVar8 = (int)param_1[3];
LAB_0010c370:
  if (iVar8 == 0) {
switchD_0010c147_caseD_21:
    lVar11 = param_1[8];
    cVar7 = (char)param_1[0x54];
LAB_0010c17b:
    param_1[4] = lVar11;
    if (cVar7 != '\0') {
LAB_0010c254:
      param_1[0x51] = param_1[0x51] + (long)*(int *)((long)param_1 + 0x29c);
    }
LAB_0010c187:
    uVar27 = uVar27 + 1;
    if (1000000 < uVar27) {
      *(undefined4 *)(param_1 + 3) = 0x8b;
      uVar9 = 0x8b;
      goto LAB_0010c2a2;
    }
    lVar17 = param_1[0x51];
    lVar11 = param_1[0x52];
  }
  else {
LAB_0010c378:
    if ((iVar8 != 0x80) || (piVar13 = (int *)param_1[0x5e], piVar13 == (int *)0x0)) {
LAB_0010c3c0:
      uVar9 = (undefined4)param_1[3];
      goto LAB_0010c2a2;
    }
    piVar15 = piVar13 + (ulong)*(uint *)(param_1 + 0x5d) * 8;
    while( true ) {
      if (piVar15 <= piVar13) goto LAB_0010c3c0;
      if (((char)piVar13[7] != '\0') && ((char)param_1[0x53] == (char)piVar13[6])) break;
      piVar13 = piVar13 + 8;
    }
    if (*(int *)((long)param_1 + 0x304) <= (int)param_1[0x60]) {
      *(undefined4 *)(param_1 + 3) = 0x86;
      uVar9 = 0x86;
      goto LAB_0010c2a2;
    }
    lVar11 = param_1[0x51];
    puVar29 = (undefined4 *)((long)(int)param_1[0x60] * 0x20 + param_1[0x61]);
    *puVar29 = *(undefined4 *)((long)param_1 + 0x27c);
    iVar8 = *piVar13;
    *(int **)(puVar29 + 6) = piVar13;
    *(long *)(puVar29 + 2) = lVar11 + 1;
    *(undefined8 *)(puVar29 + 4) = 1;
    lVar17 = *(long *)(piVar13 + 2);
    if (2 < iVar8 - 1U) {
      *(undefined4 *)(param_1 + 3) = 0x84;
      uVar9 = 0x84;
      goto LAB_0010c2a2;
    }
    if (param_1[(long)iVar8 * 2 + 0x61] == 0) {
      *(undefined4 *)(param_1 + 3) = 0x8a;
      uVar9 = 0x8a;
      goto LAB_0010c2a2;
    }
    lVar11 = param_1[(long)iVar8 * 2 + 0x62];
    if (lVar11 < lVar17) goto LAB_0010c540;
    param_1[0x50] = param_1[(long)iVar8 * 2 + 0x61];
    *(int *)((long)param_1 + 0x27c) = iVar8;
    param_1[0x51] = lVar17;
    param_1[0x52] = lVar11;
  }
  if (lVar17 < lVar11) {
    if ((char)param_1[0x70] != '\0') {
LAB_0010c1bc:
      uVar9 = 0;
LAB_0010c2a2:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_0010c09e;
  }
  if ((int)param_1[0x60] < 1) goto LAB_0010c1bc;
LAB_0010c540:
  *(undefined4 *)(param_1 + 3) = 0x83;
  uVar9 = 0x83;
  goto LAB_0010c2a2;
LAB_0010d669:
  uVar9 = 0x89;
LAB_0010cdd0:
  *(undefined4 *)(param_1 + 3) = uVar9;
  goto LAB_0010c2a2;
switchD_0010c147_caseD_28:
  Ins_UNKNOWN_constprop_0(param_1);
  iVar8 = (int)param_1[3];
  goto LAB_0010c370;
}



long TT_New_Context(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = ft_mem_alloc(uVar1,0x470,&local_24);
    if (local_24 != 0) goto LAB_0010ef39;
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    *(undefined4 *)(lVar2 + 0x304) = 0x20;
    uVar3 = ft_mem_qrealloc(uVar1,0x20,0,0x20,0,&local_24);
    *(undefined8 *)(lVar2 + 0x308) = uVar3;
    if (local_24 == 0) goto LAB_0010ef39;
    ft_mem_free(uVar1,lVar2);
  }
  lVar2 = 0;
LAB_0010ef39:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong tt_loader_init(long *param_1,long *param_2,long param_3,uint param_4,char param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  char cVar24;
  byte bVar25;
  short sVar26;
  long *plVar27;
  byte bVar28;
  byte bVar29;
  long in_FS_OFFSET;
  byte local_d8;
  char local_88;
  uint local_48;
  uint local_44;
  
  lVar6 = *(long *)(param_3 + 8);
  lVar7 = *(long *)(lVar6 + 0xc0);
  lVar21 = *(long *)(lVar6 + 0xb0);
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  plVar27 = param_1;
  for (lVar23 = 0x30; lVar23 != 0; lVar23 = lVar23 + -1) {
    *plVar27 = 0;
    plVar27 = plVar27 + 1;
  }
  if ((param_4 & 2) == 0) {
    if (param_5 == '\0') {
      bVar25 = (byte)(param_4 >> 7);
      local_d8 = bVar25 & 1;
      uVar4 = *(uint *)(param_2 + 0x44);
      uVar18 = (ulong)uVar4;
      if ((int)uVar4 < 0) {
        lVar23 = *param_2;
        lVar22 = *(long *)(lVar23 + 0xb8);
        ft_mem_free(lVar22,param_2[0x21]);
        param_2[0x21] = 0;
        ft_mem_free(lVar22,param_2[0x23]);
        param_2[0x23] = 0;
        ft_mem_free(lVar22,param_2[0x38]);
        param_2[0x38] = 0;
        ft_mem_free(lVar22,param_2[0x3a]);
        param_2[0x3a] = 0;
        if (param_2[0x43] != 0) {
          TT_Done_Context();
        }
        tt_glyphzone_done(param_2 + 0x3b);
        param_2[0x44] = -1;
        lVar20 = TT_New_Context(*(undefined8 *)(lVar23 + 0xb0));
        param_2[0x43] = lVar20;
        uVar3 = *(ushort *)(lVar23 + 0x1e0);
        *(uint *)((long)param_2 + 0x104) = (uint)uVar3;
        uVar1 = *(ushort *)(lVar23 + 0x1e2);
        *(undefined4 *)(param_2 + 0x20) = 0;
        *(uint *)((long)param_2 + 0x114) = (uint)uVar1;
        lVar20 = *(long *)(lVar23 + 0x478);
        *(undefined4 *)(param_2 + 0x22) = 0;
        param_2[0x37] = lVar20;
        uVar2 = *(undefined2 *)(lVar23 + 0x1de);
        *(undefined2 *)((long)param_2 + 0xe1) = 0;
        param_2[0x24] = 0;
        *(undefined2 *)(param_2 + 0x39) = uVar2;
        *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_2 + 0x1a) = (undefined1  [16])0x0;
        lVar20 = ft_mem_realloc(lVar22,0x20,0,uVar3);
        param_2[0x21] = lVar20;
        if (local_48 == 0) {
          lVar20 = ft_mem_realloc(lVar22,0x20,0,*(undefined4 *)((long)param_2 + 0x114));
          param_2[0x23] = lVar20;
          lVar20 = ft_mem_realloc(lVar22,8,0,param_2[0x37]);
          param_2[0x38] = lVar20;
          lVar20 = ft_mem_realloc(lVar22,8,0,(short)param_2[0x39]);
          param_2[0x3a] = lVar20;
          sVar26 = *(short *)(lVar23 + 0x1dc);
          *(undefined1 (*) [16])(param_2 + 0x3b) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_2 + 0x3d) = (undefined1  [16])0x0;
          sVar26 = sVar26 + 4;
          *(undefined1 (*) [16])(param_2 + 0x3f) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_2 + 0x41) = (undefined1  [16])0x0;
          param_2[0x3b] = lVar22;
          lVar20 = ft_mem_realloc(lVar22,0x10,0);
          param_2[0x3d] = lVar20;
          if (local_44 == 0) {
            lVar20 = ft_mem_realloc(lVar22,0x10,0,sVar26);
            param_2[0x3e] = lVar20;
            lVar20 = ft_mem_realloc(lVar22,0x10,0,sVar26);
            param_2[0x3f] = lVar20;
            lVar20 = ft_mem_realloc(lVar22,1,0,sVar26);
            param_2[0x40] = lVar20;
            lVar22 = ft_mem_realloc(lVar22,2,0,0);
            param_2[0x41] = lVar22;
            *(undefined2 *)((long)param_2 + 0x1e2) = 0;
            *(short *)(param_2 + 0x3c) = sVar26;
          }
          else {
            tt_glyphzone_done();
            local_48 = local_44;
            if (local_44 != 0) goto LAB_0010fad0;
          }
          *(undefined1 *)((long)param_2 + 0x184) = 1;
          lVar10 = _UNK_00111918;
          lVar20 = __LC13;
          *(short *)((long)param_2 + 0x1e4) = sVar26;
          param_2[0x2b] = 0x4000000000000000;
          param_2[0x2c] = 0x4000000040000000;
          *(undefined2 *)((long)param_2 + 0x1a4) = 0;
          param_2[0x35] = 0x1000100000000;
          lVar22 = *(long *)(lVar23 + 0xb0);
          param_2[0x2e] = lVar20;
          param_2[0x2f] = lVar10;
          lVar10 = _UNK_00111928;
          lVar20 = __LC14;
          lVar22 = *(long *)(lVar22 + 8);
          *(undefined2 *)(param_2 + 0x2d) = 0;
          *(undefined4 *)(param_2 + 0x30) = 1;
          pcVar19 = *(code **)(lVar22 + 0x138);
          param_2[0x33] = 0;
          if (pcVar19 == (code *)0x0) {
            pcVar19 = TT_RunIns;
          }
          *(undefined4 *)(param_2 + 0x34) = 0x30009;
          *(undefined2 *)(param_2 + 0x36) = 1;
          param_2[0x31] = lVar20;
          param_2[0x32] = lVar10;
          *(code **)(lVar23 + 0x488) = pcVar19;
          lVar23 = *param_2;
          lVar22 = param_2[0x43];
          uVar18 = TT_Load_Context(lVar22,lVar23,param_2);
          uVar15 = _UNK_00111938;
          uVar9 = __LC16;
          if ((int)uVar18 != 0) goto LAB_0010f036;
          *(undefined4 *)(lVar22 + 0x300) = 0;
          *(undefined8 *)(lVar22 + 0x20) = 0;
          *(undefined8 *)(lVar22 + 0x368) = uVar9;
          *(undefined8 *)(lVar22 + 0x370) = uVar15;
          *(undefined8 *)(lVar22 + 0x378) = 0;
          *(undefined1 (*) [16])(lVar22 + 0x198) = (undefined1  [16])0x0;
          uVar16 = _UNK_00111948;
          uVar15 = __LC17;
          *(byte *)(lVar22 + 0x3e9) = local_d8;
          *(undefined1 *)(lVar22 + 0x380) = 0;
          uVar9 = *(undefined8 *)(lVar23 + 0x460);
          *(undefined4 *)(lVar22 + 400) = 0;
          *(undefined8 *)(lVar22 + 0x1e0) = uVar15;
          *(undefined8 *)(lVar22 + 0x1e8) = uVar16;
          lVar20 = *(long *)(lVar23 + 0x458);
          *(undefined8 *)(lVar22 + 0x3f0) = 0x4000;
          *(undefined8 *)(lVar22 + 0x318) = uVar9;
          *(undefined2 *)(lVar22 + 0x1d8) = 0;
          *(long *)(lVar22 + 800) = lVar20;
          *(undefined8 *)(lVar22 + 0x328) = 0;
          *(undefined8 *)(lVar22 + 0x330) = 0;
          *(undefined8 *)(lVar22 + 0x338) = 0;
          *(undefined8 *)(lVar22 + 0x340) = 0;
          if (lVar20 == 0) {
            *(undefined4 *)(param_2 + 0x44) = 0;
          }
          else {
            *(undefined8 *)(lVar22 + 0x288) = 0;
            *(undefined8 *)(lVar22 + 0x280) = uVar9;
            *(long *)(lVar22 + 0x290) = lVar20;
            *(undefined4 *)(lVar22 + 0x27c) = 1;
            uVar18 = (**(code **)(lVar23 + 0x488))();
            *(int *)(param_2 + 0x44) = (int)uVar18;
            if ((int)uVar18 != 0) goto LAB_0010f036;
          }
          lVar20 = *(long *)(lVar22 + 0x318);
          lVar10 = *(long *)(lVar22 + 800);
          lVar11 = *(long *)(lVar22 + 0x328);
          lVar12 = *(long *)(lVar22 + 0x330);
          lVar13 = *(long *)(lVar22 + 0x338);
          lVar14 = *(long *)(lVar22 + 0x340);
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar22 + 0x2d8);
          *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(lVar22 + 0x2e8);
          lVar23 = *(long *)(lVar22 + 0x2f8);
          param_2[0x25] = lVar20;
          param_2[0x26] = lVar10;
          param_2[0x24] = lVar23;
          param_2[0x27] = lVar11;
          param_2[0x28] = lVar12;
          param_2[0x29] = lVar13;
          param_2[0x2a] = lVar14;
        }
        else {
LAB_0010fad0:
          tt_size_done_bytecode(param_2);
          uVar18 = (ulong)local_48;
          if (local_48 != 0) goto LAB_0010f036;
        }
        uVar18 = (ulong)*(uint *)((long)param_2 + 0x224);
        if ((int)*(uint *)((long)param_2 + 0x224) < 0) goto LAB_0010f960;
      }
      else if ((int)*(uint *)((long)param_2 + 0x224) < 0) {
        if (uVar4 != 0) goto LAB_0010f036;
LAB_0010f960:
        uVar3 = *(ushort *)((long)param_2 + 0x1e4);
        if (uVar3 != 0) {
          lVar23 = param_2[0x3d];
          lVar22 = param_2[0x3e];
          lVar20 = 0;
          do {
            *(undefined1 (*) [16])(lVar23 + lVar20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar22 + lVar20) = (undefined1  [16])0x0;
            lVar20 = lVar20 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar20);
        }
        if (*(ushort *)(param_2 + 0x39) != 0) {
          memset((void *)param_2[0x3a],0,(ulong)*(ushort *)(param_2 + 0x39) * 8);
        }
        lVar22 = _UNK_00111918;
        lVar23 = __LC13;
        *(undefined2 *)(param_2 + 0x2d) = 0;
        param_2[0x2b] = 0x4000000000000000;
        param_2[0x2c] = 0x4000000040000000;
        *(undefined2 *)(param_2 + 0x36) = 1;
        param_2[0x2e] = lVar23;
        param_2[0x2f] = lVar22;
        lVar22 = _UNK_00111928;
        lVar23 = __LC14;
        *(undefined4 *)(param_2 + 0x30) = 1;
        *(undefined1 *)((long)param_2 + 0x184) = 1;
        param_2[0x33] = 0;
        *(undefined4 *)(param_2 + 0x34) = 0x30009;
        *(undefined2 *)((long)param_2 + 0x1a4) = 0;
        param_2[0x35] = 0x1000100000000;
        param_2[0x31] = lVar23;
        param_2[0x32] = lVar22;
        uVar18 = tt_size_run_prep(param_2,bVar25 & 1);
      }
      else {
        if (uVar4 != 0) goto LAB_0010f036;
        uVar18 = (ulong)*(uint *)((long)param_2 + 0x224);
      }
      if ((int)uVar18 != 0) goto LAB_0010f036;
      lVar23 = param_2[0x43];
      if (lVar23 == 0) {
        uVar18 = 0x99;
        goto LAB_0010f036;
      }
      bVar29 = 0;
      bVar17 = bVar29;
      if ((param_4 & 0xf0000) == 0x20000) {
        bVar28 = bVar29;
        if (*(int *)(lVar21 + 0x78) != 0x28) goto LAB_0010f0ff;
        local_88 = '\0';
        cVar24 = '\0';
      }
      else {
        bVar28 = 1;
        if (*(int *)(lVar21 + 0x78) == 0x28) {
          if ((param_4 & 0x70000) == 0) {
            local_88 = '\x01';
            cVar24 = '\x01';
          }
          else {
            local_88 = '\0';
            cVar24 = '\x01';
            bVar17 = (byte)(param_4 >> 0x12) & 1;
          }
        }
        else {
LAB_0010f0ff:
          local_88 = '\0';
          cVar24 = '\0';
          bVar29 = bVar28;
        }
      }
      *(byte *)(lVar23 + 0x44a) = bVar17;
      uVar18 = TT_Load_Context(lVar23,lVar6,param_2);
      if ((int)uVar18 != 0) goto LAB_0010f036;
      iVar5 = *(int *)(lVar21 + 0x78);
      bVar17 = *(byte *)(lVar23 + 0x448);
      if (iVar5 == 0x28) {
        if (*(char *)(lVar23 + 0x449) == cVar24) {
          if (local_88 != *(char *)(lVar23 + 0x44e)) goto LAB_0010fba3;
          goto LAB_0010f16b;
        }
        *(char *)(lVar23 + 0x449) = cVar24;
        if (local_88 != *(char *)(lVar23 + 0x44e)) {
LAB_0010fba3:
          *(char *)(lVar23 + 0x44e) = local_88;
          if (bVar17 == bVar29) goto LAB_0010f177;
          goto LAB_0010f170;
        }
        if (bVar17 != bVar29) goto LAB_0010f170;
LAB_0010f177:
        uVar18 = tt_size_run_prep(param_2,bVar25 & 1);
        if (((int)uVar18 != 0) || (uVar18 = TT_Load_Context(lVar23,lVar6,param_2), (int)uVar18 != 0)
           ) goto LAB_0010f036;
        iVar5 = *(int *)(lVar21 + 0x78);
      }
      else {
LAB_0010f16b:
        if (bVar17 != bVar29) {
LAB_0010f170:
          *(byte *)(lVar23 + 0x448) = bVar29;
          goto LAB_0010f177;
        }
      }
      lVar22 = _UNK_00111918;
      lVar21 = __LC13;
      param_4 = param_4 | (*(byte *)(lVar23 + 0x264) & 1) * 2;
      if ((*(byte *)(lVar23 + 0x264) & 2) != 0) {
        *(undefined8 *)(lVar23 + 0x218) = 0x4000000000000000;
        *(undefined8 *)(lVar23 + 0x220) = 0x4000000040000000;
        *(undefined2 *)(lVar23 + 0x264) = 0;
        *(long *)(lVar23 + 0x230) = lVar21;
        *(long *)(lVar23 + 0x238) = lVar22;
        lVar22 = _UNK_00111928;
        lVar21 = __LC14;
        *(undefined2 *)(lVar23 + 0x228) = 0;
        *(undefined4 *)(lVar23 + 0x240) = 1;
        *(undefined1 *)(lVar23 + 0x244) = 1;
        *(undefined8 *)(lVar23 + 600) = 0;
        *(undefined4 *)(lVar23 + 0x260) = 0x30009;
        *(undefined8 *)(lVar23 + 0x268) = 0x1000100000000;
        *(undefined2 *)(lVar23 + 0x270) = 1;
        *(long *)(lVar23 + 0x248) = lVar21;
        *(long *)(lVar23 + 0x250) = lVar22;
      }
      uVar18 = param_1[4];
      bVar25 = (byte)param_4 >> 7;
      lVar21 = *(long *)(lVar23 + 0x2d0);
      if (((iVar5 == 0x28) && (cVar24 != '\0')) &&
         ((*(byte *)(*(long *)(param_3 + 8) + 0x11) & 0x20) == 0)) {
        bVar29 = *(byte *)(lVar23 + 0x264);
        *(byte *)(lVar23 + 0x3e9) = bVar25;
        *(bool *)(lVar23 + 1099) = (bVar29 & 4) == 0;
        param_1[0x22] = lVar23;
        param_1[0x23] = lVar21;
        if (((uVar18 & 0x200002) != 0) || ((bVar29 & 4) == 0)) goto LAB_0010fb70;
LAB_0010f2cb:
        if (*(long *)(lVar6 + 0x308) != 0) goto LAB_0010fb70;
        lVar21 = param_2[0x1d];
      }
      else {
        *(undefined1 *)(lVar23 + 1099) = 0;
        *(byte *)(lVar23 + 0x3e9) = bVar25;
        param_1[0x22] = lVar23;
        param_1[0x23] = lVar21;
        if ((uVar18 & 0x200002) == 0) goto LAB_0010f2cb;
LAB_0010fb70:
        lVar21 = 0;
      }
      param_1[0x2f] = lVar21;
      goto LAB_0010f065;
    }
  }
  else {
    if (param_5 != '\0') goto LAB_0010f017;
LAB_0010f065:
    lVar21 = **(long **)(param_3 + 0x128);
    FT_GlyphLoader_Rewind(lVar21);
    param_1[3] = lVar21;
  }
LAB_0010f017:
  param_1[2] = param_3;
  uVar18 = 0;
  param_1[4] = (long)(int)param_4;
  param_1[6] = lVar7;
  *param_1 = lVar6;
  param_1[1] = (long)param_2;
  *(undefined1 (*) [16])(param_1 + 0x2d) = (undefined1  [16])0x0;
LAB_0010f036:
  if (lVar8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int TT_Load_Glyph(long param_1,long param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined8 uStack_240;
  undefined8 local_228;
  int local_220;
  short local_20a;
  ulong local_208;
  long lStack_200;
  long local_1f8;
  long lStack_1f0;
  ulong local_1e8;
  long local_1e0;
  ulong local_1d8;
  ushort local_1c8;
  ushort uStack_1c6;
  short sStack_1c4;
  short sStack_1c2;
  ushort local_1c0;
  short sStack_1be;
  short sStack_1bc;
  ushort uStack_1ba;
  long local_1b8;
  long local_1b0;
  byte local_1a8;
  short local_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  long local_178;
  long lStack_170;
  int local_168;
  int local_160;
  long local_158;
  long local_148;
  long local_b8;
  int local_98;
  int local_94;
  long local_88;
  long local_78;
  undefined1 local_60 [16];
  long local_50;
  long local_40;
  
  uVar16 = (ulong)param_3;
  lVar13 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(long *)(param_1 + 0xf0) != 0xffffffff) && ((param_4 & 8) == 0)) &&
      ((*(ulong *)(lVar13 + 8) & 0x7fff0000) == 0)) && ((*(byte *)(lVar13 + 0x11) & 0x80) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    iVar9 = (**(code **)(*(long *)(lVar13 + 0x370) + 0x90))
                      (lVar13,*(long *)(param_1 + 0xf0),uVar16,param_4,
                       *(undefined8 *)(lVar13 + 0xc0),param_2 + 0x98,&local_1c8);
    local_228._0_4_ = (int)uVar3;
    local_220 = (int)uVar2;
    if (iVar9 != 0) {
      uVar12 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
      if ((char)iVar9 == -99) {
        if ((uVar12 & 1) == 0) {
          local_20a = 0;
          local_208 = local_208 & 0xffffffffffff0000;
          local_1e8 = local_1e8 & 0xffffffffffff0000;
          local_1c8 = 0;
          if (*(long *)(lVar13 + 0x4e8) != 0) {
            (**(code **)(*(long *)(lVar13 + 0x370) + 0x140))
                      (lVar13,0,param_3,&local_20a,&local_1e8,uStack_240);
            TT_Get_VMetrics(lVar13,uVar16,0,&local_208,&local_1c8);
            *(undefined4 *)(param_2 + 200) = 0;
            lVar13 = (long)local_20a * (long)(int)local_228;
            *(undefined1 (*) [16])(param_2 + 0x30) = (undefined1  [16])0x0;
            *(undefined8 *)(param_2 + 0x48) = 0;
            *(undefined8 *)(param_2 + 0x58) = 0;
            *(undefined4 *)(param_2 + 0x90) = 0x62697473;
            *(undefined1 *)(param_2 + 0xb2) = 1;
            *(undefined8 *)(param_2 + 0xc0) = 0;
            *(long *)(param_2 + 0x40) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
            lVar13 = (local_1e8 & 0xffff) * (long)(int)local_228;
            iVar9 = 0;
            *(long *)(param_2 + 0x50) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
            lVar13 = (long)(short)local_208 * (long)local_220;
            *(long *)(param_2 + 0x60) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
            lVar13 = (ulong)local_1c8 * (long)local_220;
            *(long *)(param_2 + 0x68) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
          }
          goto LAB_00110186;
        }
      }
      else if ((uVar12 & 1) == 0) goto LAB_00110186;
      goto LAB_0010fddd;
    }
    *(undefined4 *)(param_2 + 200) = 0;
    *(ulong *)(param_2 + 0x30) = (ulong)uStack_1c6 << 6;
    *(ulong *)(param_2 + 0x38) = (ulong)local_1c8 << 6;
    uVar12 = (ulong)sStack_1c4;
    *(ulong *)(param_2 + 0x40) = uVar12 << 6;
    uVar11 = (ulong)sStack_1c2;
    *(ulong *)(param_2 + 0x48) = uVar11 << 6;
    *(ulong *)(param_2 + 0x50) = (ulong)local_1c0 << 6;
    *(long *)(param_2 + 0x58) = (long)sStack_1be << 6;
    *(long *)(param_2 + 0x60) = (long)sStack_1bc << 6;
    if ((param_4 & 0x10) != 0) {
      uVar12 = (ulong)(uint)(int)sStack_1be;
      uVar11 = (ulong)(uint)(int)sStack_1bc;
    }
    *(int *)(param_2 + 0xc0) = (int)uVar12;
    *(undefined4 *)(param_2 + 0x90) = 0x62697473;
    *(int *)(param_2 + 0xc4) = (int)uVar11;
    *(ulong *)(param_2 + 0x68) = (ulong)uStack_1ba << 6;
    if ((*(ulong *)(*(long *)(param_2 + 8) + 0x10) & 0x20001) != 0) {
      tt_loader_init(&local_1c8,param_1,param_2,param_4 & 0xffffffff,1);
      load_truetype_glyph(&local_1c8,uVar16,0,1);
      FT_List_Finalize(local_60,0,
                       *(undefined8 *)
                        (CONCAT26(sStack_1c2,CONCAT24(sStack_1c4,CONCAT22(uStack_1c6,local_1c8))) +
                        0xb8),0);
      lVar15 = (long)local_160;
      lVar14 = (long)local_94;
      iVar9 = *(int *)(lVar13 + 0x540);
      *(long *)(param_2 + 0x70) = lVar15;
      *(long *)(param_2 + 0x78) = lVar14;
      if ((iVar9 == 3) && (0 < local_18c)) {
        if ((param_4 & 0x10) != 0) {
          iStack_180 = local_98;
          local_168 = local_188;
        }
        *(ulong *)(param_2 + 0xc0) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20) +
                      ((int)((ulong)((long)local_220 * (long)iStack_180 + 0x8000 +
                                    ((long)local_220 * (long)iStack_180 >> 0x3f)) >> 0x10) >> 6),
                      (int)*(undefined8 *)(param_2 + 0xc0) +
                      ((int)((ulong)((long)(int)local_228 * (long)local_168 + 0x8000 +
                                    ((long)(int)local_228 * (long)local_168 >> 0x3f)) >> 0x10) >> 6)
                     );
      }
      if ((*(long *)(param_2 + 0x50) == 0) && (lVar15 != 0)) {
        *(long *)(param_2 + 0x50) =
             (long)(int)((ulong)((int)local_228 * lVar15 + 0x8000 +
                                ((int)local_228 * lVar15 >> 0x3f)) >> 0x10);
      }
      if ((*(long *)(param_2 + 0x68) == 0) && (lVar14 != 0)) {
        *(long *)(param_2 + 0x68) =
             (long)(int)((ulong)(local_220 * lVar14 + 0x8000 + (local_220 * lVar14 >> 0x3f)) >> 0x10
                        );
      }
    }
LAB_00110175:
    iVar9 = 0;
    goto LAB_00110186;
  }
LAB_0010fddd:
  if ((param_4 & 0x4000) == 0) {
    if (((param_4 & 1) == 0) && (iVar9 = 0x24, *(char *)(param_1 + 0xe0) == '\0'))
    goto LAB_00110186;
    if ((((uint)param_4 & 0x1100000) == 0x100000) && (*(long *)(lVar13 + 0x5c8) != 0)) {
      lVar15 = *(long *)(lVar13 + 0x370);
      iVar9 = (**(code **)(lVar15 + 0x168))(param_2,uVar16);
      if (iVar9 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        *(undefined4 *)(param_2 + 0x90) = 0x53564720;
        (**(code **)(lVar15 + 0x140))(lVar13,0,uVar16,&local_20a,&local_1e8);
        (**(code **)(lVar15 + 0x140))(lVar13,1,uVar16,&local_208,&local_1c8);
        lVar13 = (long)(int)uVar3 * (local_1e8 & 0xffff);
        *(ulong *)(param_2 + 0x70) = local_1e8 & 0xffff;
        *(ulong *)(param_2 + 0x78) = (ulong)local_1c8;
        *(long *)(param_2 + 0x50) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
        lVar13 = (long)(int)uVar2 * (ulong)local_1c8;
        *(long *)(param_2 + 0x68) = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
        goto LAB_00110175;
      }
    }
    if ((param_4 & 0x800000) == 0) {
      iVar9 = tt_loader_init(&local_1c8,param_1,param_2,param_4 & 0xffffffff,0);
      if (iVar9 != 0) goto LAB_00110186;
      if ((((uint)param_4 & 0x110) == 0x100) && (local_50 != 0)) {
        *(ulong *)(param_2 + 0x50) = (ulong)*(byte *)(local_50 + uVar16) << 6;
      }
      else {
        *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
        *(undefined4 *)(param_2 + 0xf0) = 0;
        *(undefined4 *)(param_2 + 0xe8) = 0;
        iVar10 = load_truetype_glyph(&local_1c8,uVar16,0,0);
        iVar9 = iVar10;
        if (iVar10 == 0) {
          if (*(int *)(param_2 + 0x90) == 0x636f6d70) {
            uVar3 = *(undefined8 *)(local_1b0 + 0x58);
            *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(local_1b0 + 0x50);
            *(undefined8 *)(param_2 + 0xf8) = uVar3;
          }
          else {
            uVar2 = *(undefined8 *)(local_1b0 + 0x20);
            uVar5 = *(undefined8 *)(local_1b0 + 0x28);
            uVar6 = *(undefined8 *)(local_1b0 + 0x30);
            uVar3 = *(undefined8 *)(local_1b0 + 0x38);
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_1b0 + 0x18);
            *(undefined8 *)(param_2 + 0xd0) = uVar2;
            *(undefined8 *)(param_2 + 0xe8) = uVar3;
            *(undefined8 *)(param_2 + 0xd8) = uVar5;
            *(undefined8 *)(param_2 + 0xe0) = uVar6;
            *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) & 0xfffffdff;
            if (local_158 != 0) {
              FT_Outline_Translate(param_2 + 200,-local_158,0);
            }
          }
          if ((param_4 & 2) == 0) {
            uVar1 = *(uint *)(local_b8 + 0x2c8);
            *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(local_b8 + 0x2d0);
            *(ulong *)(param_2 + 0x108) = (ulong)uVar1;
            if (*(char *)(local_b8 + 0x265) == '\0') {
LAB_001102a0:
              *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 8;
            }
            else {
              iVar9 = *(int *)(local_b8 + 0x268);
              if (iVar9 == 4) {
                *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x30;
              }
              else if (iVar9 < 5) {
                if (iVar9 == 0) {
                  *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x20;
                }
                else if (iVar9 != 1) goto LAB_001102a0;
              }
              else {
                if (iVar9 != 5) goto LAB_001102a0;
                *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x10;
              }
            }
          }
          local_228 = 0x10000;
          lVar13 = CONCAT26(sStack_1c2,CONCAT24(sStack_1c4,CONCAT22(uStack_1c6,local_1c8)));
          if ((local_1a8 & 1) == 0) {
            local_228 = *(undefined8 *)
                         (*(long *)(CONCAT26(uStack_1ba,
                                             CONCAT24(sStack_1bc,CONCAT22(sStack_1be,local_1c0))) +
                                   0x58) + 0x10);
          }
          if (*(int *)(local_1b8 + 0x90) == 0x636f6d70) {
            local_208 = CONCAT44(uStack_184,local_188);
            lStack_200 = CONCAT44(uStack_17c,iStack_180);
            local_1f8 = local_178;
            lStack_1f0 = lStack_170;
          }
          else {
            FT_Outline_Get_CBox(local_1b8 + 200,&local_208);
          }
          *(long *)(local_1b8 + 0x70) = (long)local_160;
          *(ulong *)(local_1b8 + 0x40) = local_208;
          *(long *)(local_1b8 + 0x48) = lStack_1f0;
          if (local_50 == 0) {
            local_148 = local_148 - local_158;
          }
          else {
            local_148 = (long)(int)((uint)*(byte *)(local_50 + uVar16) << 6);
          }
          *(long *)(local_1b8 + 0x50) = local_148;
          *(ulong *)(local_1b8 + 0x30) = local_1f8 - local_208;
          *(long *)(local_1b8 + 0x38) = lStack_1f0 - lStack_200;
          if ((*(char *)(lVar13 + 0x1f0) == '\0') || (*(short *)(lVar13 + 0x21e) == 0)) {
            sVar7 = FT_DivFix(lStack_1f0 - lStack_200,local_228);
            if (*(short *)(lVar13 + 0x268) == -1) {
              iVar9 = (int)*(short *)(lVar13 + 0x198) - (int)*(short *)(lVar13 + 0x19a);
            }
            else {
              iVar9 = (int)*(short *)(lVar13 + 0x2c2) - (int)*(short *)(lVar13 + 0x2c4);
            }
            uVar12 = (ulong)iVar9;
            lVar15 = (long)(uVar12 - (long)sVar7) / 2;
          }
          else {
            sVar7 = FT_DivFix(local_88 - lStack_1f0,local_228);
            lVar15 = (long)sVar7;
            uVar12 = 0;
            if (local_78 < local_88) {
              uVar8 = FT_DivFix(local_88 - local_78,local_228);
              uVar12 = (ulong)uVar8;
            }
          }
          plVar4 = *(long **)(*(long *)(lVar13 + 0xf0) + 0x68);
          if ((plVar4 != (long *)0x0) && (*(code **)(*plVar4 + 0x10) != (code *)0x0)) {
            local_1e8 = 0;
            local_1e0 = lVar15;
            local_1d8 = uVar12;
            iVar9 = (**(code **)(*plVar4 + 0x10))(plVar4[1],uVar16,1,&local_1e8);
            uVar12 = local_1d8;
            lVar15 = local_1e0;
            if (iVar9 != 0) goto LAB_0011048a;
          }
          *(ulong *)(local_1b8 + 0x78) = uVar12;
          if ((local_1a8 & 1) == 0) {
            lVar15 = (long)(int)lVar15 * (long)(int)local_228;
            lVar13 = (long)(int)uVar12 * (long)(int)local_228;
            lVar15 = (long)(int)((ulong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
            uVar12 = (ulong)(int)((ulong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
          }
          *(long *)(local_1b8 + 0x60) = lVar15;
          *(ulong *)(local_1b8 + 0x68) = uVar12;
          *(long *)(local_1b8 + 0x58) =
               *(long *)(local_1b8 + 0x40) - *(long *)(local_1b8 + 0x50) / 2;
          iVar9 = iVar10;
        }
LAB_0011048a:
        if (((param_4 & 1) == 0) && (*(ushort *)(*(long *)(param_1 + 0x58) + 2) < 0x18)) {
          *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x100;
        }
      }
      FT_List_Finalize(local_60,0,
                       *(undefined8 *)
                        (CONCAT26(sStack_1c2,CONCAT24(sStack_1c4,CONCAT22(uStack_1c6,local_1c8))) +
                        0xb8),0);
      goto LAB_00110186;
    }
  }
  iVar9 = 6;
LAB_00110186:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



undefined8 tt_glyph_load(long param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_2 == 0) {
    return 0x24;
  }
  if (lVar1 == 0) {
    return 0x23;
  }
  if ((*(uint *)(lVar1 + 0x20) <= param_3) && (*(long *)(*(long *)(lVar1 + 0xf0) + 0x68) == 0)) {
    return 6;
  }
  uVar3 = (uint)param_4;
  if ((param_4 & 2) == 0) {
    if ((param_4 & 0x401) == 0) goto LAB_00110869;
    if ((*(byte *)(lVar1 + 0x11) & 0x20) != 0) {
      param_4 = (ulong)(uVar3 | 9);
      goto LAB_00110869;
    }
LAB_00110890:
    param_4 = (ulong)((uint)param_4 | 0xb);
  }
  else {
    if ((*(ulong *)(lVar1 + 0x10) & 0x2000) != 0) {
      uVar3 = uVar3 & 0xfffffffd;
    }
    if ((uVar3 & 0x8000) != 0) {
      uVar3 = uVar3 | 2;
    }
    param_4 = (ulong)uVar3;
    if ((uVar3 & 0x401) != 0) {
      if ((*(ulong *)(lVar1 + 0x10) & 0x2000) == 0) goto LAB_00110890;
      param_4 = (ulong)(uVar3 | 9);
    }
  }
  if ((param_4 & 2) != 0) {
    *(long *)(param_2 + 0x58) = param_2 + 0x18;
    uVar2 = TT_Load_Glyph(param_2,param_1);
    return uVar2;
  }
LAB_00110869:
  *(long *)(param_2 + 0x58) = param_2 + 0x60;
  uVar2 = TT_Load_Glyph(param_2,param_1,param_3,param_4);
  return uVar2;
}


