
/* doWriteReverse(char16_t const*, int, char16_t*, int, unsigned short, UErrorCode*) */

int doWriteReverse(wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,ushort param_5,
                  UErrorCode *param_6)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  wchar16 wVar5;
  wchar16 *pwVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_44;
  
  if ((param_5 & 0xb) == 0) {
    iVar10 = param_2;
    if (param_2 <= param_4) {
      do {
        iVar8 = iVar10 + -1;
        lVar4 = (long)iVar8;
        iVar9 = iVar8;
        lVar2 = lVar4;
        if ((((param_1[lVar4] & 0xfc00U) == 0xdc00) && (0 < iVar8)) &&
           ((param_1[lVar4 + -1] & 0xfc00U) == 0xd800)) {
          iVar9 = iVar10 + -2;
          lVar4 = (long)iVar9;
          lVar2 = lVar4;
        }
        do {
          param_3[lVar4 - lVar2] = param_1[lVar4];
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < iVar10);
        lVar2 = (ulong)(uint)(iVar8 - iVar9) * 2 + 2;
        if (iVar10 <= iVar9) {
          lVar2 = 2;
        }
        param_3 = (wchar16 *)((long)param_3 + lVar2);
        iVar10 = iVar9;
      } while (0 < iVar9);
      return param_2;
    }
  }
  else {
    if ((param_5 & 0xb) != 1) {
      uVar1 = param_5 & 8;
      local_44 = param_2;
      if (uVar1 != 0) {
        local_44 = 0;
        pwVar6 = param_1;
        iVar10 = param_2;
        do {
          wVar5 = *pwVar6;
          pwVar6 = pwVar6 + 1;
          if ((((ushort)wVar5 & 0xfffffffc) != 0x200c) && (4 < (ushort)wVar5 - 0x202a)) {
            local_44 = (local_44 + 1) - (uint)((ushort)wVar5 - 0x2066 < 4);
          }
          iVar10 = iVar10 + -1;
        } while (0 < iVar10);
        lVar2 = (ulong)(param_2 - 1) * 2 + 2;
        if (param_2 < 1) {
          lVar2 = 2;
        }
        param_1 = (wchar16 *)((long)param_1 + lVar2 + (long)param_2 * -2);
      }
      if (param_4 < local_44) {
        *(undefined4 *)param_6 = 0xf;
        return local_44;
      }
      do {
        iVar8 = param_2 + -1;
        uVar7 = (uint)(ushort)param_1[iVar8];
        iVar10 = iVar8;
        if (((uVar7 & 0xfffffc00) == 0xdc00) && (0 < iVar8)) {
          if (((ushort)param_1[(long)iVar8 + -1] & 0xfffffc00) == 0xd800) {
            iVar10 = param_2 + -2;
            uVar7 = uVar7 + 0xfca02400 + (uint)(ushort)param_1[(long)iVar8 + -1] * 0x400;
            goto LAB_00100127;
          }
          if ((param_5 & 1) != 0) {
LAB_00100268:
            do {
              iVar9 = iVar10;
              uVar3 = u_charType_76_godot(uVar7);
              iVar10 = iVar9;
              if ((0x1c0UL >> (uVar3 & 0x3f) & 1) == 0) break;
              iVar10 = iVar9 + -1;
              uVar7 = (uint)(ushort)param_1[iVar10];
              if ((uVar7 & 0xfffffc00) == 0xdc00) {
                if (iVar10 == 0) goto LAB_001001b0;
                if (((ushort)param_1[(long)iVar10 + -1] & 0xfffffc00) != 0xd800) goto LAB_00100268;
                uVar7 = uVar7 + 0xfca02400 + (uint)(ushort)param_1[(long)iVar10 + -1] * 0x400;
                iVar10 = iVar9 + -2;
              }
            } while (iVar10 != 0);
            goto LAB_00100133;
          }
          if (uVar1 == 0) goto LAB_001001b0;
LAB_00100148:
          if ((4 < uVar7 - 0x202a) && (3 < uVar7 - 0x2066)) goto LAB_001001b0;
        }
        else {
LAB_00100127:
          if ((param_5 & 1) == 0) {
LAB_00100133:
            if (uVar1 != 0) {
              if ((uVar7 & 0xfffffffc) != 0x200c) goto LAB_00100148;
              goto LAB_00100163;
            }
          }
          else {
            if (0 < iVar10) goto LAB_00100268;
            if (uVar1 != 0) {
              if ((uVar7 & 0xfffffffc) == 0x200c) {
                return local_44;
              }
              if (uVar7 - 0x202a < 5) {
                return local_44;
              }
              if (uVar7 - 0x2066 < 4) {
                return local_44;
              }
            }
          }
LAB_001001b0:
          iVar9 = iVar10;
          if ((param_5 & 2) != 0) {
            uVar7 = u_charMirror_76_godot(uVar7);
            wVar5 = (wchar16)uVar7;
            if (uVar7 < 0x10000) {
              iVar9 = 1;
              lVar2 = 2;
            }
            else {
              iVar9 = 2;
              param_3[1] = wVar5 & 0x3ffU | 0xdc00;
              wVar5 = (short)((int)uVar7 >> 10) + L'ퟀ';
              lVar2 = 4;
            }
            *param_3 = wVar5;
            iVar9 = iVar9 + iVar10;
            param_3 = (wchar16 *)((long)param_3 + lVar2);
          }
          if (iVar9 < param_2) {
            lVar2 = 0;
            do {
              *(undefined2 *)((long)param_3 + lVar2) =
                   *(undefined2 *)((long)param_1 + lVar2 + (long)iVar9 * 2);
              lVar2 = lVar2 + 2;
            } while ((ulong)(uint)(param_2 - iVar9) * 2 != lVar2);
            param_3 = param_3 + (ulong)(uint)(iVar8 - iVar9) + 1;
          }
        }
LAB_00100163:
        param_2 = iVar10;
        if (iVar10 < 1) {
          return local_44;
        }
      } while( true );
    }
    iVar10 = param_2;
    iVar8 = param_2;
    if (param_2 <= param_4) {
LAB_00100043:
      do {
        iVar9 = iVar10 + -1;
        lVar2 = (long)iVar9;
        wVar5 = param_1[lVar2];
        uVar7 = (uint)(ushort)wVar5;
        if ((wVar5 & 0xfc00U) == 0xdc00) {
          lVar4 = lVar2;
          if (0 < iVar9) {
            if ((param_1[lVar2 + -1] & 0xfc00U) == 0xd800) {
              iVar9 = iVar10 + -2;
              uVar7 = (ushort)wVar5 + 0xfca02400 + (uint)(ushort)param_1[lVar2 + -1] * 0x400;
              goto LAB_00100067;
            }
            goto LAB_00100200;
          }
        }
        else {
LAB_00100067:
          if (0 < iVar9) {
LAB_00100200:
            uVar3 = u_charType_76_godot(uVar7);
            iVar10 = iVar9;
            if ((0x1c0UL >> (uVar3 & 0x3f) & 1) != 0) goto LAB_00100043;
          }
          lVar2 = (long)iVar9;
          lVar4 = lVar2;
        }
        do {
          param_3[lVar2 - lVar4] = param_1[lVar2];
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 < iVar8);
        lVar2 = (ulong)(uint)((iVar8 + -1) - iVar9) * 2 + 2;
        if (iVar8 <= iVar9) {
          lVar2 = 2;
        }
        param_3 = (wchar16 *)((long)param_3 + lVar2);
        iVar10 = iVar9;
        iVar8 = iVar9;
        if (iVar9 < 1) {
          return param_2;
        }
      } while( true );
    }
  }
  *(undefined4 *)param_6 = 0xf;
  return param_2;
}



/* doWriteForward(char16_t const*, int, char16_t*, int, unsigned short, UErrorCode*) */

ulong doWriteForward(wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,ushort param_5,
                    UErrorCode *param_6)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = param_5 & 10;
  uVar6 = (ulong)(uint)param_2;
  if (uVar7 == 2) {
    if (param_2 <= param_4) {
      iVar10 = 0;
      iVar9 = 0;
      do {
        iVar8 = iVar9 + 1;
        wVar2 = param_1[iVar9];
        uVar3 = (uint)(ushort)wVar2;
        if ((((wVar2 & 0xfc00U) == 0xd800) && (param_2 != iVar8)) &&
           ((param_1[(long)iVar9 + 1] & 0xfc00U) == 0xdc00)) {
          iVar8 = iVar9 + 2;
          uVar3 = (ushort)param_1[(long)iVar9 + 1] + 0xfca02400 + (uint)(ushort)wVar2 * 0x400;
        }
        uVar3 = u_charMirror_76_godot(uVar3);
        if (uVar3 < 0x10000) {
          param_3[iVar10] = (wchar16)uVar3;
          iVar9 = iVar10 + 1;
        }
        else {
          iVar9 = iVar10 + 2;
          param_3[iVar10] = (short)((int)uVar3 >> 10) + L'ퟀ';
          param_3[(long)iVar10 + 1] = (wchar16)uVar3 & 0x3ffU | 0xdc00;
        }
        iVar10 = iVar9;
        iVar9 = iVar8;
      } while (iVar8 < param_2);
      return uVar6;
    }
  }
  else {
    iVar10 = param_4;
    if (uVar7 == 8) {
      do {
        wVar2 = *param_1;
        uVar3 = (uint)(ushort)wVar2;
        param_1 = param_1 + 1;
        iVar9 = (int)uVar6;
        if ((((uVar3 & 0xfffc) != 0x200c) && (4 < uVar3 - 0x202a)) && (3 < uVar3 - 0x2066)) {
          iVar10 = iVar10 + -1;
          if (iVar10 < 0) {
            *(undefined4 *)param_6 = 0xf;
            if (1 < iVar9) {
              pwVar1 = param_1 + (iVar9 - 1);
              do {
                wVar2 = *param_1;
                param_1 = param_1 + 1;
                if ((((ushort)wVar2 & 0xfffffffc) != 0x200c) && (4 < (ushort)wVar2 - 0x202a)) {
                  iVar10 = iVar10 + -1 + (uint)((ushort)wVar2 - 0x2066 < 4);
                }
              } while (pwVar1 != param_1);
            }
            break;
          }
          *param_3 = wVar2;
          param_3 = param_3 + 1;
        }
        uVar6 = (ulong)(iVar9 - 1U);
      } while (0 < (int)(iVar9 - 1U));
      return (ulong)(uint)(param_4 - iVar10);
    }
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        wVar2 = *param_1;
        uVar3 = (uint)(ushort)wVar2;
        iVar9 = (int)uVar6;
        if ((wVar2 & 0xfc00U) == 0xd800) {
          if (iVar9 == 1) {
            param_1 = param_1 + 1;
            iVar9 = 1;
            uVar6 = 0;
          }
          else {
            pwVar1 = param_1 + 1;
            if ((*pwVar1 & 0xfc00U) == 0xdc00) {
              param_1 = param_1 + 2;
              uVar6 = (ulong)(iVar9 - 2);
              uVar3 = (ushort)*pwVar1 + 0xfca02400 + (uint)(ushort)wVar2 * 0x400;
              iVar9 = 2;
            }
            else {
              param_1 = param_1 + 1;
              uVar6 = (ulong)(iVar9 - 1);
              iVar9 = 1;
            }
          }
LAB_00100605:
          iVar10 = iVar10 - iVar9;
          if (iVar10 < 0) {
            *(undefined4 *)param_6 = 0xf;
            if (0 < (int)uVar6) {
              pwVar1 = param_1 + uVar6;
              do {
                wVar2 = *param_1;
                param_1 = param_1 + 1;
                if ((((ushort)wVar2 & 0xfffffffc) != 0x200c) && (4 < (ushort)wVar2 - 0x202a)) {
                  iVar10 = iVar10 + -1 + (uint)((ushort)wVar2 - 0x2066 < 4);
                }
              } while (param_1 != pwVar1);
            }
            return (ulong)(uint)(param_4 - iVar10);
          }
          iVar9 = (int)uVar5;
          uVar3 = u_charMirror_76_godot(uVar3);
          if (uVar3 < 0x10000) {
            param_3[iVar9] = (wchar16)uVar3;
            uVar5 = (ulong)(iVar9 + 1);
          }
          else {
            uVar5 = (ulong)(iVar9 + 2);
            param_3[iVar9] = (short)((int)uVar3 >> 10) + L'ퟀ';
            param_3[(long)iVar9 + 1] = (wchar16)uVar3 & 0x3ffU | 0xdc00;
          }
        }
        else {
          param_1 = param_1 + 1;
          uVar6 = (ulong)(iVar9 - 1);
          if ((((wVar2 & 0xfffcU) != 0x200c) && (4 < (ushort)wVar2 - 0x202a)) &&
             (3 < (ushort)wVar2 - 0x2066)) {
            iVar9 = 1;
            goto LAB_00100605;
          }
        }
        if ((int)uVar6 < 1) {
          return uVar5;
        }
      } while( true );
    }
    lVar4 = 0;
    if (param_2 <= param_4) {
      do {
        param_3[lVar4] = param_1[lVar4];
        lVar4 = lVar4 + 1;
      } while (0 < param_2 - (int)lVar4);
      return uVar6;
    }
  }
  *(undefined4 *)param_6 = 0xf;
  return uVar6;
}



undefined8
ubidi_writeReverse_76_godot
          (wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,ushort param_5,
          UErrorCode *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_6 == (UErrorCode *)0x0) || (0 < *(int *)param_6)) {
    return 0;
  }
  if ((param_1 != (wchar16 *)0x0 && -2 < param_2) && (-1 < param_4)) {
    if (param_4 < 1) {
      if (param_3 == (wchar16 *)0x0) goto LAB_0010087a;
    }
    else if (param_3 == (wchar16 *)0x0) goto LAB_001008d4;
    if (param_3 <= param_1) {
      if (param_1 < param_3 + param_4) goto LAB_001008d4;
      if (param_1 != param_3) goto LAB_0010087a;
    }
    if (param_1 + param_2 <= param_3) {
LAB_0010087a:
      if (param_2 == -1) {
        param_2 = u_strlen_76_godot();
      }
      uVar1 = 0;
      if (0 < param_2) {
        uVar1 = doWriteReverse(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      uVar2 = u_terminateUChars_76_godot(param_3,param_4,uVar1,param_6);
      return uVar2;
    }
  }
LAB_001008d4:
  *(undefined4 *)param_6 = 1;
  return 0;
}



undefined8
ubidi_writeReordered_76_godot
          (long param_1,wchar16 *param_2,uint param_3,ushort param_4,UErrorCode *param_5)

{
  wchar16 *pwVar1;
  long lVar2;
  ushort uVar3;
  wchar16 wVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  wchar16 *pwVar9;
  uint uVar10;
  uint uVar11;
  wchar16 *pwVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 == (UErrorCode *)0x0) || (0 < *(int *)param_5)) {
LAB_00100996:
    uVar8 = 0;
  }
  else {
    if ((param_1 == 0) ||
       ((pwVar1 = *(wchar16 **)(param_1 + 8), pwVar1 == (wchar16 *)0x0 ||
        ((int)(*(uint *)(param_1 + 0x14) | param_3) < 0)))) {
LAB_00100990:
      *(undefined4 *)param_5 = 1;
      goto LAB_00100996;
    }
    if (0 < (int)param_3) {
      if (param_2 != (wchar16 *)0x0) goto LAB_001009dd;
      goto LAB_00100990;
    }
    if (param_2 != (wchar16 *)0x0) {
LAB_001009dd:
      if (param_2 <= pwVar1) {
        if (pwVar1 < param_2 + (int)param_3) goto LAB_00100990;
        if (pwVar1 != param_2) goto LAB_001009f3;
      }
      if (param_2 < pwVar1 + *(int *)(param_1 + 0x10)) goto LAB_00100990;
    }
LAB_001009f3:
    if (*(uint *)(param_1 + 0x14) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = u_terminateUChars_76_godot(param_2,param_3,0,param_5);
        return uVar8;
      }
      goto LAB_001010fe;
    }
    iVar5 = ubidi_countRuns_76_godot(param_1,param_5);
    if (0 < *(int *)param_5) goto LAB_00100996;
    if ((*(uint *)(param_1 + 0x88) & 1) != 0) {
      param_4 = param_4 & 0xfff7 | 4;
    }
    if ((*(uint *)(param_1 + 0x88) & 2) != 0) {
      param_4 = param_4 & 0xfffb | 8;
    }
    uVar3 = param_4 & 0x10;
    if (*(int *)(param_1 + 0x84) - 3U < 4) {
      if ((param_4 & 0x10) == 0) {
        if ((param_4 & 4) == 0) goto LAB_00100e18;
        lVar2 = *(long *)(param_1 + 0x70);
        if (0 < iVar5) {
          uVar13 = 0;
          pwVar9 = param_2;
          uVar11 = param_3;
          do {
            iVar6 = ubidi_getVisualRun_76_godot(param_1,uVar13 & 0xffffffff,&local_48,&local_44);
            uVar10 = *(uint *)(*(long *)(param_1 + 0x130) + uVar13 * 0xc + 8);
            if ((int)uVar10 < 0) {
              uVar10 = 0;
            }
            if (iVar6 == 0) {
              if ((*(char *)(param_1 + 0x80) == '\0') || (*(char *)(lVar2 + local_48) == '\0')) {
                if ((uVar10 & 1) != 0) {
                  wVar4 = L'\x200e';
                  goto LAB_00100b46;
                }
                wVar4 = L'\x200f';
                if ((uVar10 & 4) != 0) goto LAB_00100b46;
              }
              else {
                wVar4 = L'\x200e';
LAB_00100b46:
                if (0 < (int)uVar11) {
                  *pwVar9 = wVar4;
                  pwVar9 = pwVar9 + 1;
                }
                uVar11 = uVar11 - 1;
              }
              local_44 = doWriteForward(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4 & 0xfffd,
                                        param_5);
              if (pwVar9 != (wchar16 *)0x0) {
                pwVar9 = pwVar9 + local_44;
              }
              uVar11 = uVar11 - local_44;
              if ((((*(char *)(param_1 + 0x80) != '\0') && (0 < local_44)) &&
                  (*(char *)(lVar2 + -1 + (long)(local_44 + local_48)) != '\0')) ||
                 ((uVar10 & 2) != 0)) goto LAB_00100cc1;
LAB_00100ba2:
              wVar4 = L'\x200f';
              if ((uVar10 & 8) != 0) goto LAB_00100bac;
            }
            else {
              if ((*(char *)(param_1 + 0x80) != '\0') &&
                 ((0x2002UL >> (*(byte *)(lVar2 + -1 + (long)(local_48 + local_44)) & 0x3f) & 1) ==
                  0)) {
                uVar10 = uVar10 | 4;
              }
              if ((uVar10 & 1) == 0) {
                wVar4 = L'\x200f';
                if ((uVar10 & 4) != 0) goto LAB_00100c54;
              }
              else {
                wVar4 = L'\x200e';
LAB_00100c54:
                if (0 < (int)uVar11) {
                  *pwVar9 = wVar4;
                  pwVar9 = pwVar9 + 1;
                }
                uVar11 = uVar11 - 1;
              }
              local_44 = doWriteReverse(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4,param_5);
              if (pwVar9 != (wchar16 *)0x0) {
                pwVar9 = pwVar9 + local_44;
              }
              uVar11 = uVar11 - local_44;
              if ((*(char *)(param_1 + 0x80) != '\0') &&
                 ((0x2002UL >> (*(byte *)(lVar2 + local_48) & 0x3f) & 1) == 0)) {
                uVar10 = uVar10 | 8;
              }
              if ((uVar10 & 2) == 0) goto LAB_00100ba2;
LAB_00100cc1:
              wVar4 = L'\x200e';
LAB_00100bac:
              if (0 < (int)uVar11) {
                *pwVar9 = wVar4;
                pwVar9 = pwVar9 + 1;
              }
              uVar11 = uVar11 - 1;
            }
            uVar13 = uVar13 + 1;
          } while ((long)iVar5 != uVar13);
          iVar5 = param_3 - uVar11;
          goto LAB_00101090;
        }
LAB_001010fa:
        iVar5 = 0;
      }
      else {
        if ((param_4 & 4) == 0) goto LAB_00100d00;
        lVar2 = *(long *)(param_1 + 0x70);
        if (iVar5 < 1) goto LAB_001010fa;
        pwVar9 = param_2;
        uVar11 = param_3;
        do {
          iVar5 = iVar5 + -1;
          iVar6 = ubidi_getVisualRun_76_godot(param_1,iVar5,&local_48,&local_44);
          pwVar12 = pwVar9;
          if (iVar6 == 0) {
            if (*(char *)(lVar2 + -1 + (long)(local_48 + local_44)) != '\0') {
              if (0 < (int)uVar11) {
                pwVar12 = pwVar9 + 1;
                *pwVar9 = L'\x200e';
              }
              uVar11 = uVar11 - 1;
            }
            local_44 = doWriteReverse(pwVar1 + local_48,local_44,pwVar12,uVar11,param_4 & 0xfffd,
                                      param_5);
            if (pwVar12 != (wchar16 *)0x0) {
              pwVar12 = pwVar12 + local_44;
            }
            uVar11 = uVar11 - local_44;
            if (*(char *)(lVar2 + local_48) != '\0') {
              pwVar9 = pwVar12;
              if (0 < (int)uVar11) {
                pwVar9 = pwVar12 + 1;
                *pwVar12 = L'\x200e';
              }
              goto LAB_00100fad;
            }
          }
          else {
            if ((0x2002UL >> ((ulong)*(byte *)(lVar2 + local_48) & 0x3f) & 1) == 0) {
              if (0 < (int)uVar11) {
                pwVar12 = pwVar9 + 1;
                *pwVar9 = L'\x200f';
              }
              uVar11 = uVar11 - 1;
            }
            local_44 = doWriteForward(pwVar1 + local_48,local_44,pwVar12,uVar11,param_4,param_5);
            if (pwVar12 != (wchar16 *)0x0) {
              pwVar12 = pwVar12 + local_44;
            }
            uVar11 = uVar11 - local_44;
            if ((0 < local_44) &&
               ((0x2002UL >> ((ulong)*(byte *)(lVar2 + -1 + (long)(local_44 + local_48)) & 0x3f) & 1
                ) == 0)) {
              pwVar9 = pwVar12;
              if (0 < (int)uVar11) {
                *pwVar12 = L'\x200f';
                pwVar9 = pwVar12 + 1;
              }
LAB_00100fad:
              uVar11 = uVar11 - 1;
              pwVar12 = pwVar9;
            }
          }
          pwVar9 = pwVar12;
        } while (iVar5 != 0);
        iVar5 = param_3 - uVar11;
      }
    }
    else {
      param_4 = param_4 & 0xfffb;
      if (uVar3 == 0) {
LAB_00100e18:
        if (iVar5 < 1) goto LAB_001010fa;
        iVar6 = 0;
        pwVar9 = param_2;
        uVar11 = param_3;
        do {
          iVar7 = ubidi_getVisualRun_76_godot(param_1,iVar6,&local_48,&local_44);
          if (iVar7 == 0) {
            local_44 = doWriteForward(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4 & 0xfffd,
                                      param_5);
          }
          else {
            local_44 = doWriteReverse(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4,param_5);
          }
          if (pwVar9 != (wchar16 *)0x0) {
            pwVar9 = pwVar9 + local_44;
          }
          iVar6 = iVar6 + 1;
          uVar11 = uVar11 - local_44;
        } while (iVar5 != iVar6);
        iVar5 = param_3 - uVar11;
      }
      else {
LAB_00100d00:
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) goto LAB_001010fa;
        pwVar9 = param_2;
        uVar11 = param_3;
        do {
          iVar6 = ubidi_getVisualRun_76_godot(param_1,iVar5,&local_48,&local_44);
          if (iVar6 == 0) {
            local_44 = doWriteReverse(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4 & 0xfffd,
                                      param_5);
          }
          else {
            local_44 = doWriteForward(pwVar1 + local_48,local_44,pwVar9,uVar11,param_4,param_5);
          }
          if (pwVar9 != (wchar16 *)0x0) {
            pwVar9 = pwVar9 + local_44;
          }
          uVar11 = uVar11 - local_44;
          bVar14 = iVar5 != 0;
          iVar5 = iVar5 + -1;
        } while (bVar14);
        iVar5 = param_3 - uVar11;
      }
    }
LAB_00101090:
    uVar8 = u_terminateUChars_76_godot(param_2,param_3,iVar5,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_001010fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


