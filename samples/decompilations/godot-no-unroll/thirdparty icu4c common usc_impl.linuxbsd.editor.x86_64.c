
int * uscript_openRun_76_godot(long param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_3 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*param_3 < 1) {
    piVar2 = (int *)uprv_malloc_76_godot(0x128);
    uVar1 = _LC0;
    if (piVar2 == (int *)0x0) {
      *param_3 = 7;
      return (int *)0x0;
    }
    if (*param_3 < 1) {
      if ((-1 < param_2) && ((param_1 == 0) == (param_2 == 0))) {
        *(long *)(piVar2 + 2) = param_1;
        *piVar2 = param_2;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = -1;
        *(undefined8 *)(piVar2 + 0x47) = uVar1;
        piVar2[0x49] = 0;
        return piVar2;
      }
      *param_3 = 1;
    }
    uprv_free_76_godot(piVar2);
  }
  return (int *)0x0;
}



void uscript_closeRun_76_godot(long param_1)

{
  if (param_1 != 0) {
    uprv_free_76_godot();
    return;
  }
  return;
}



void uscript_resetRun_76_godot(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _LC0;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x11c) = uVar1;
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  return;
}



void uscript_setRunText_76_godot(int *param_1,long param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  uVar1 = _LC0;
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if ((param_1 == (int *)0x0) || ((param_3 < 0 || ((param_2 == 0) != (param_3 == 0))))) {
      *param_4 = 1;
      return;
    }
    *(long *)(param_1 + 2) = param_2;
    *param_1 = param_3;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = -1;
    *(undefined8 *)(param_1 + 0x47) = uVar1;
    param_1[0x49] = 0;
  }
  return;
}



undefined8 uscript_nextRun_76_godot(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (param_1 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    iVar5 = param_1[5];
    iVar3 = *param_1;
    uVar8 = 0;
    if (iVar5 < iVar3) {
      param_1[4] = iVar5;
      param_1[0x49] = 0;
      param_1[6] = 0;
      do {
        uVar1 = *(ushort *)(*(long *)(param_1 + 2) + (long)iVar5 * 2);
        uVar9 = (uint)uVar1;
        if ((ushort)(uVar1 + 0x2800) < 0x400) {
          uVar9 = (uint)uVar1;
          if ((iVar5 < iVar3 + -1) &&
             (uVar2 = *(ushort *)(*(long *)(param_1 + 2) + 2 + (long)iVar5 * 2),
             (ushort)(uVar2 + 0x2400) < 0x400)) {
            param_1[5] = iVar5 + 1;
            uVar9 = (uVar1 - 0xd800) * 0x400 + 0x2400 + (uint)uVar2;
          }
          iVar3 = uscript_getScript_76_godot(uVar9,&local_44);
          iVar5 = 0x300a;
          uVar7 = 2;
        }
        else {
          iVar3 = uscript_getScript_76_godot(uVar1,&local_44);
          uVar7 = (uint)(0x3b < uVar1) * 2;
          iVar5 = *(int *)(pairedChars + (long)(int)(uVar7 + 0x10) * 4);
        }
        iVar6 = 5;
        iVar4 = 0x20;
        while( true ) {
          if (iVar5 <= (int)uVar9) {
            uVar7 = uVar7 + (iVar4 >> 1);
          }
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) break;
          iVar5 = *(int *)(pairedChars + (long)(int)((iVar4 >> 2) + uVar7) * 4);
          iVar4 = iVar4 >> 1;
        }
        iVar5 = param_1[6];
        if (*(uint *)(pairedChars + (long)(int)uVar7 * 4) == uVar9) {
          if (-1 < (int)uVar7) {
            iVar4 = param_1[0x48];
            if ((uVar7 & 1) == 0) {
              iVar6 = 0x1f;
              if (iVar4 < 0x20) {
                iVar6 = iVar4;
              }
              param_1[0x48] = iVar6 + 1;
              iVar4 = param_1[0x49];
              if (0x1f < iVar4) {
                iVar4 = 0x1f;
              }
              param_1[0x49] = iVar4 + 1;
              iVar4 = (param_1[0x47] + 1) % 0x20;
              param_1[0x47] = iVar4;
              *(ulong *)(param_1 + (long)iVar4 * 2 + 7) = CONCAT44(iVar5,uVar7);
            }
            else if (0 < iVar4) {
              do {
                iVar6 = param_1[0x47];
                if (param_1[(long)iVar6 * 2 + 7] == (uVar7 & 0xfffffffe)) {
                  iVar3 = param_1[((long)iVar6 + 2) * 2 + 4];
                  goto LAB_001002da;
                }
                if (0 < param_1[0x49]) {
                  param_1[0x49] = param_1[0x49] + -1;
                }
                iVar4 = iVar4 + -1;
                param_1[0x48] = iVar4;
                param_1[0x47] = (iVar6 + 0x1f) % 0x20;
              } while (iVar4 != 0);
              param_1[0x47] = -1;
            }
          }
        }
        else {
          uVar7 = 0xffffffff;
        }
LAB_001002da:
        if (1 < iVar3) {
          if (iVar5 < 2) {
            if ((1 < iVar3) && (iVar5 < 2)) {
              iVar4 = param_1[0x49];
              param_1[6] = iVar3;
              iVar6 = ((param_1[0x47] + 0x20) - iVar4) % 0x20;
              iVar5 = iVar4 + -1;
              param_1[0x49] = iVar5;
              if (0 < iVar4) {
                do {
                  iVar6 = (iVar6 + 1) % 0x20;
                  param_1[(long)iVar6 * 2 + 8] = iVar3;
                  bVar10 = iVar5 != 0;
                  iVar5 = iVar5 + -1;
                } while (bVar10);
                param_1[0x49] = -1;
              }
            }
          }
          else if (iVar3 != iVar5) {
            if (0xffff < (int)uVar9) {
              param_1[5] = param_1[5] + -1;
            }
            break;
          }
        }
        if (((-1 < (int)uVar7) && ((uVar7 & 1) != 0)) && (0 < param_1[0x48])) {
          if (0 < param_1[0x49]) {
            param_1[0x49] = param_1[0x49] + -1;
          }
          iVar5 = param_1[0x48] + -1;
          param_1[0x48] = iVar5;
          if (iVar5 == 0) {
            param_1[0x47] = -1;
          }
          else {
            param_1[0x47] = (param_1[0x47] + 0x1f) % 0x20;
          }
        }
        iVar3 = *param_1;
        iVar5 = param_1[5] + 1;
        param_1[5] = iVar5;
      } while (iVar5 < iVar3);
      if (param_2 != (int *)0x0) {
        *param_2 = param_1[4];
      }
      if (param_3 != (int *)0x0) {
        *param_3 = param_1[5];
      }
      if (param_4 != (int *)0x0) {
        *param_4 = param_1[6];
      }
      uVar8 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


