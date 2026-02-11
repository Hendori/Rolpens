
/* toUpperOrTitle(int, int (*)(void*, signed char), void*, char16_t const**, int, signed char) */

ulong toUpperOrTitle(uint param_1,code *param_2,undefined8 param_3,long *param_4,int param_5,
                    char param_6)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  ushort uVar12;
  
  *param_4 = 0;
  uVar9 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar9;
LAB_0010005d:
    uVar12 = *(ushort *)
              (&ucase_props_trieIndex +
              (long)(int)((param_1 & 0x1f) +
                         (uint)*(ushort *)(&ucase_props_trieIndex + lVar3 * 2) * 4) * 2);
    if ((uVar12 & 8) == 0) goto LAB_001001f5;
    lVar3 = (ulong)(uVar12 >> 4) * 2;
    uVar1 = *(ushort *)(ucase_props_exceptions + lVar3);
    lVar3 = lVar3 + 0x103582;
    if ((uVar1 & 0x4000) == 0) {
      if ((uVar1 & 0x80) == 0) goto LAB_001000f2;
      if ((uVar1 & 0x100) == 0) {
        puVar11 = (ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar1 & 0x7f] * 2);
        uVar9 = (uint)*puVar11;
      }
      else {
        puVar10 = (undefined2 *)((ulong)(byte)flagsOffset[uVar1 & 0x7f] * 4 + lVar3);
        puVar11 = puVar10 + 1;
        uVar9 = CONCAT22(*puVar10,puVar10[1]);
      }
      puVar11 = puVar11 + (ulong)(uVar9 & 0xf) + 1 + (ulong)((int)uVar9 >> 4 & 0xf);
      uVar8 = (int)uVar9 >> 8 & 0xf;
      uVar4 = (ulong)uVar8;
      if (param_6 == '\0') {
        uVar9 = (int)uVar9 >> 0xc & 0xf;
        if (uVar9 != 0) {
          puVar11 = puVar11 + uVar4;
          uVar4 = (ulong)uVar9;
          goto LAB_001004a6;
        }
        if (((uVar1 & 0x10) != 0) && ((uVar12 & 3) == 1)) goto LAB_001003e0;
        goto LAB_00100340;
      }
      if (uVar8 != 0) {
LAB_001004a6:
        *param_4 = (long)puVar11;
        return uVar4;
      }
      if (((uVar1 & 0x10) != 0) && ((uVar12 & 3) == 1)) goto LAB_001003e0;
LAB_00100111:
      uVar9 = 3;
      if ((uVar1 & 4) == 0) goto LAB_00100201;
    }
    else {
      if ((param_5 == 2) && (param_1 == 0x69)) {
        return 0x130;
      }
      if ((param_5 == 3 && param_1 == 0x307) && (param_2 != (code *)0x0)) {
        do {
          uVar9 = (*param_2)(param_3);
          if ((int)uVar9 < 0) break;
          uVar8 = (int)uVar9 >> 5;
          if (uVar9 < 0xd800) {
LAB_0010026d:
            uVar2 = *(ushort *)
                     (&ucase_props_trieIndex +
                     (long)(int)((uVar9 & 0x1f) +
                                (uint)*(ushort *)(&ucase_props_trieIndex + (long)(int)uVar8 * 2) * 4
                                ) * 2);
            if ((uVar2 & 8) != 0) {
              uVar2 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar2 >> 4) * 2) >> 7;
            }
          }
          else {
            if (uVar9 < 0x10000) {
              iVar7 = 0;
              if ((int)uVar9 < 0xdc00) {
                iVar7 = 0x140;
              }
              uVar8 = uVar8 + iVar7;
              goto LAB_0010026d;
            }
            if (uVar9 < 0x110000) {
              if ((int)uVar9 < 0xe0800) {
                uVar8 = (uint)*(ushort *)
                               (&ucase_props_trieIndex + (long)(((int)uVar9 >> 0xb) + 0x820) * 2) +
                        (uVar8 & 0x3f);
                goto LAB_0010026d;
              }
              lVar5 = 0x6870;
            }
            else {
              lVar5 = 0x1c18;
            }
            uVar2 = *(ushort *)(&ucase_props_trieIndex + lVar5);
          }
          if ((uVar2 & 0x60) == 0x20) {
            return 0;
          }
        } while ((uVar2 & 0x60) == 0x60);
      }
      else if (param_1 == 0x587) {
        if (param_5 == 6) {
          puVar6 = &_LC1;
          if (param_6 != '\0') {
            puVar6 = &_LC0;
          }
        }
        else {
          puVar6 = &_LC3;
          if (param_6 != '\0') {
            puVar6 = &_LC2;
          }
        }
        *param_4 = (long)puVar6;
        return 2;
      }
LAB_001000f2:
      if (((uVar1 & 0x10) != 0) && ((uVar12 & 3) == 1)) {
LAB_001003e0:
        if ((uVar1 & 0x100) == 0) {
          uVar9 = (uint)*(ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar1 & 0xf] * 2);
        }
        else {
          puVar10 = (undefined2 *)(lVar3 + (ulong)(byte)flagsOffset[uVar1 & 0xf] * 4);
          uVar9 = CONCAT22(*puVar10,puVar10[1]);
        }
        uVar8 = -uVar9;
        if ((uVar1 & 0x400) == 0) {
          uVar8 = uVar9;
        }
        return (ulong)(param_1 + uVar8);
      }
      if (param_6 != '\0') goto LAB_00100111;
LAB_00100340:
      if ((uVar1 & 8) == 0) goto LAB_00100111;
      uVar9 = 7;
    }
    if ((uVar1 & 0x100) == 0) {
      uVar4 = (ulong)*(ushort *)(lVar3 + (ulong)(byte)flagsOffset[(int)(uVar9 & uVar1)] * 2);
    }
    else {
      puVar10 = (undefined2 *)(lVar3 + (ulong)(byte)flagsOffset[(int)(uVar9 & uVar1)] * 4);
      uVar4 = (ulong)CONCAT22(*puVar10,puVar10[1]);
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar7 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar7 = 0x140;
      }
      lVar3 = (long)(int)(uVar9 + iVar7);
      goto LAB_0010005d;
    }
    if (param_1 < 0x110000) {
      if ((int)param_1 < 0xe0800) {
        lVar3 = (long)(int)((uint)*(ushort *)
                                   (&ucase_props_trieIndex +
                                   (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar9 & 0x3f));
        goto LAB_0010005d;
      }
      lVar3 = 0x6870;
    }
    else {
      lVar3 = 0x1c18;
    }
    uVar12 = *(ushort *)(&ucase_props_trieIndex + lVar3);
LAB_001001f5:
    if ((uVar12 & 3) != 1) goto LAB_00100201;
    uVar4 = (ulong)((int)((short)uVar12 >> 7) + param_1);
  }
  if ((uint)uVar4 != param_1) {
    return uVar4;
  }
LAB_00100201:
  return (ulong)~param_1;
}



void ucase_addPropertyStarts_76_godot(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  utrie2_enum_76_godot(0x10ab80,0,0x100000,param_1);
  return;
}



undefined1 * ucase_getSingleton_76_godot(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0x688;
  *param_2 = 0x172;
  return ucase_props_singleton;
}



undefined8 ucase_getTrie_76_godot(void)

{
  return 0x10ab80;
}



uint ucase_tolower_76_godot(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined2 *puVar7;
  
  uVar5 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar6 = (long)(int)uVar5;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar6 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar5 & 0x3f));
          goto LAB_001005ad;
        }
        lVar6 = 0x6870;
      }
      else {
        lVar6 = 0x1c18;
      }
      uVar1 = *(ushort *)(&ucase_props_trieIndex + lVar6);
      goto LAB_00100648;
    }
    iVar4 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar4 = 0x140;
    }
    lVar6 = (long)(int)(uVar5 + iVar4);
  }
LAB_001005ad:
  uVar1 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar6 * 2) * 4)
           * 2);
  if ((uVar1 & 8) != 0) {
    lVar6 = (ulong)(uVar1 >> 4) * 2;
    uVar2 = *(ushort *)(ucase_props_exceptions + lVar6);
    if (((uVar2 & 0x10) != 0) && ((uVar1 & 2) != 0)) {
      if ((uVar2 & 0x100) == 0) {
        uVar5 = (uint)*(ushort *)(lVar6 + 0x103582 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
      }
      else {
        puVar7 = (undefined2 *)(lVar6 + 0x103582 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 4);
        uVar5 = CONCAT22(*puVar7,puVar7[1]);
      }
      uVar3 = -uVar5;
      if ((uVar2 & 0x400) == 0) {
        uVar3 = uVar5;
      }
      return param_1 + uVar3;
    }
    if ((uVar2 & 1) == 0) {
      return param_1;
    }
    if ((uVar2 & 0x100) == 0) {
      return (uint)*(ushort *)(ucase_props_exceptions + lVar6 + 2);
    }
    return CONCAT22(*(ushort *)(ucase_props_exceptions + lVar6 + 2),
                    *(undefined2 *)(ucase_props_exceptions + lVar6 + 4));
  }
LAB_00100648:
  if ((uVar1 & 2) == 0) {
    return param_1;
  }
  return param_1 + (int)((short)uVar1 >> 7);
}



uint ucase_toupper_76_godot(uint param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  
  uVar6 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar7 = (long)(int)uVar6;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar7 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar6 & 0x3f));
          goto LAB_00100731;
        }
        lVar7 = 0x6870;
      }
      else {
        lVar7 = 0x1c18;
      }
      uVar5 = *(ushort *)(&ucase_props_trieIndex + lVar7);
      goto LAB_001007ec;
    }
    iVar4 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar4 = 0x140;
    }
    lVar7 = (long)(int)(uVar6 + iVar4);
  }
LAB_00100731:
  uVar5 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar7 * 2) * 4)
           * 2);
  if ((uVar5 & 8) != 0) {
    lVar1 = (ulong)(uVar5 >> 4) * 2;
    lVar7 = lVar1 + 0x103582;
    uVar2 = *(ushort *)(ucase_props_exceptions + lVar1);
    if (((uVar2 & 0x10) != 0) && ((uVar5 & 3) == 1)) {
      if ((uVar2 & 0x100) == 0) {
        uVar6 = (uint)*(ushort *)(lVar7 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
      }
      else {
        puVar8 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0xf] * 4 + lVar7);
        uVar6 = CONCAT22(*puVar8,puVar8[1]);
      }
      uVar3 = -uVar6;
      if ((uVar2 & 0x400) == 0) {
        uVar3 = uVar6;
      }
      return param_1 + uVar3;
    }
    if ((uVar2 & 4) == 0) {
      return param_1;
    }
    if ((uVar2 & 0x100) != 0) {
      puVar8 = (undefined2 *)(lVar7 + (ulong)(byte)flagsOffset[uVar2 & 3] * 4);
      return CONCAT22(*puVar8,puVar8[1]);
    }
    return (uint)*(ushort *)(lVar7 + (ulong)(byte)flagsOffset[uVar2 & 3] * 2);
  }
LAB_001007ec:
  if ((uVar5 & 3) != 1) {
    return param_1;
  }
  return param_1 + (int)((short)uVar5 >> 7);
}



uint ucase_totitle_76_godot(uint param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  
  uVar6 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar7 = (long)(int)uVar6;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar7 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar6 & 0x3f));
          goto LAB_001008fd;
        }
        lVar7 = 0x6870;
      }
      else {
        lVar7 = 0x1c18;
      }
      uVar5 = *(ushort *)(&ucase_props_trieIndex + lVar7);
      goto LAB_001009ac;
    }
    iVar4 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar4 = 0x140;
    }
    lVar7 = (long)(int)(uVar6 + iVar4);
  }
LAB_001008fd:
  uVar5 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar7 * 2) * 4)
           * 2);
  if ((uVar5 & 8) != 0) {
    lVar1 = (ulong)(uVar5 >> 4) * 2;
    lVar7 = lVar1 + 0x103582;
    uVar2 = *(ushort *)(ucase_props_exceptions + lVar1);
    if (((uVar2 & 0x10) != 0) && ((uVar5 & 3) == 1)) {
      if ((uVar2 & 0x100) == 0) {
        uVar6 = (uint)*(ushort *)(lVar7 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
      }
      else {
        puVar8 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0xf] * 4 + lVar7);
        uVar6 = CONCAT22(*puVar8,puVar8[1]);
      }
      uVar3 = -uVar6;
      if ((uVar2 & 0x400) == 0) {
        uVar3 = uVar6;
      }
      return param_1 + uVar3;
    }
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 4) == 0) {
        return param_1;
      }
      uVar6 = 3;
    }
    else {
      uVar6 = 7;
    }
    if ((uVar2 & 0x100) != 0) {
      puVar8 = (undefined2 *)(lVar7 + (ulong)(byte)flagsOffset[(int)(uVar6 & uVar2)] * 4);
      return CONCAT22(*puVar8,puVar8[1]);
    }
    return (uint)*(ushort *)(lVar7 + (ulong)(byte)flagsOffset[(int)(uVar6 & uVar2)] * 2);
  }
LAB_001009ac:
  if ((uVar5 & 3) != 1) {
    return param_1;
  }
  return param_1 + (int)((short)uVar5 >> 7);
}



void ucase_addCaseClosure_76_godot(uint param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 *puVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
LAB_00100af1:
    uVar1 = *(ushort *)
             (&ucase_props_trieIndex +
             (long)(int)((param_1 & 0x1f) +
                        (uint)*(ushort *)(&ucase_props_trieIndex + lVar3 * 2) * 4) * 2);
    if ((uVar1 & 8) != 0) {
      lVar3 = (ulong)(uVar1 >> 4) * 2;
      uVar1 = *(ushort *)(ucase_props_exceptions + lVar3);
      uVar2 = (uint)uVar1;
      if ((short)uVar1 < 0) {
        if (param_1 == 0x49) {
          uVar10 = *param_2;
          UNRECOVERED_JUMPTABLE = (code *)param_2[1];
          iVar8 = 0x69;
          goto LAB_00100c92;
        }
        if (param_1 == 0x130) {
                    /* WARNING: Could not recover jumptable at 0x00100cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)param_2[3])(*param_2,&iDot,2);
          return;
        }
      }
      else {
        if (param_1 == 0x69) {
          uVar10 = *param_2;
          UNRECOVERED_JUMPTABLE = (code *)param_2[1];
          iVar8 = 0x49;
          goto LAB_00100c92;
        }
        if (param_1 == 0x131) {
          return;
        }
      }
      lVar3 = lVar3 + 0x103582;
      uVar11 = 0;
      do {
        if ((uVar1 >> (uVar11 & 0x1f) & 1) != 0) {
          if ((uVar1 & 0x100) == 0) {
            uVar9 = (uint)*(ushort *)
                           (lVar3 + (ulong)(byte)flagsOffset
                                                 [(int)((1 << ((byte)uVar11 & 0x1f)) - 1U & uVar2)]
                                    * 2);
          }
          else {
            puVar4 = (undefined2 *)
                     ((ulong)(byte)flagsOffset[(int)((1 << ((byte)uVar11 & 0x1f)) - 1U & uVar2)] * 4
                     + lVar3);
            uVar9 = CONCAT22(*puVar4,puVar4[1]);
          }
          (*(code *)param_2[1])(*param_2,uVar9);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 4);
      if ((uVar1 & 0x10) != 0) {
        if ((uVar1 & 0x100) == 0) {
          uVar11 = (uint)*(ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
        }
        else {
          puVar4 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0xf] * 4 + lVar3);
          uVar11 = CONCAT22(*puVar4,puVar4[1]);
        }
        if ((uVar1 & 0x400) != 0) {
          uVar11 = -uVar11;
        }
        (*(code *)param_2[1])(*param_2,uVar11 + param_1);
      }
      uVar6 = uVar1 & 0x80;
      if ((uVar1 & 0x40) == 0) {
        if (uVar6 == 0) {
          return;
        }
        uVar11 = 0;
        if ((uVar1 & 0x100) != 0) goto LAB_00100d47;
LAB_00100c17:
        puVar7 = (ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar2 & 0x7f] * 2);
        uVar1 = *puVar7;
      }
      else {
        if ((uVar1 & 0x100) == 0) {
          puVar7 = (ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar2 & 0x3f] * 2);
          uVar11 = *puVar7 & 0xf;
          if (uVar6 == 0) {
            puVar7 = puVar7 + 1;
            goto LAB_00100da5;
          }
          goto LAB_00100c17;
        }
        lVar5 = (ulong)(byte)flagsOffset[uVar2 & 0x3f] * 4 + lVar3;
        uVar11 = *(ushort *)(lVar5 + 2) & 0xf;
        if (uVar6 == 0) {
          puVar7 = (ushort *)(lVar5 + 4);
          goto LAB_00100da5;
        }
LAB_00100d47:
        lVar3 = lVar3 + (long)(int)((uint)(byte)flagsOffset[uVar2 & 0x7f] * 2) * 2;
        uVar1 = *(ushort *)(lVar3 + 2);
        puVar7 = (ushort *)(lVar3 + 2);
      }
      uVar9 = (uint)uVar1;
      puVar7 = puVar7 + (ulong)(uVar1 & 0xf) + 1;
      uVar2 = (int)uVar9 >> 4 & 0xf;
      if (uVar2 != 0) {
        (*(code *)param_2[3])(*param_2,puVar7,uVar2);
        puVar7 = puVar7 + (int)uVar2;
      }
      puVar7 = puVar7 + (ulong)((int)uVar9 >> 8 & 0xf) + (long)((int)uVar9 >> 0xc);
LAB_00100da5:
      if (uVar11 == 0) {
        return;
      }
      iVar8 = 0;
      do {
        uVar1 = puVar7[iVar8];
        uVar2 = (uint)uVar1;
        if ((uVar1 & 0xfc00) == 0xd800) {
          lVar3 = (long)iVar8;
          iVar8 = iVar8 + 2;
          uVar2 = puVar7[lVar3 + 1] + 0xfca02400 + (uint)uVar1 * 0x400;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        (*(code *)param_2[1])(*param_2,uVar2);
      } while (iVar8 < (int)uVar11);
      return;
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar8 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar8 = 0x140;
      }
      lVar3 = (long)(int)(uVar2 + iVar8);
      goto LAB_00100af1;
    }
    if (param_1 < 0x110000) {
      if ((int)param_1 < 0xe0800) {
        lVar3 = (long)(int)((uint)*(ushort *)
                                   (&ucase_props_trieIndex +
                                   (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar2 & 0x3f));
        goto LAB_00100af1;
      }
      lVar3 = 0x6870;
    }
    else {
      lVar3 = 0x1c18;
    }
    uVar1 = *(ushort *)(&ucase_props_trieIndex + lVar3);
  }
  if (((uVar1 & 3) == 0) || ((short)uVar1 >> 7 == 0)) {
    return;
  }
  uVar10 = *param_2;
  iVar8 = (int)((short)uVar1 >> 7) + param_1;
  UNRECOVERED_JUMPTABLE = (code *)param_2[1];
LAB_00100c92:
                    /* WARNING: Could not recover jumptable at 0x00100ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar10,iVar8);
  return;
}



void ucase_addSimpleCaseClosure_76_godot(uint param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar7 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar7;
LAB_00100f11:
    uVar2 = *(ushort *)
             (&ucase_props_trieIndex +
             (long)(int)((param_1 & 0x1f) +
                        (uint)*(ushort *)(&ucase_props_trieIndex + lVar3 * 2) * 4) * 2);
    if ((uVar2 & 8) != 0) {
      lVar3 = (ulong)(uVar2 >> 4) * 2;
      uVar2 = *(ushort *)(ucase_props_exceptions + lVar3);
      uVar7 = (uint)uVar2;
      if ((short)uVar2 < 0) {
        if (param_1 != 0x49) {
          if (param_1 == 0x130) {
            return;
          }
          goto LAB_00100f64;
        }
        uVar10 = *param_2;
        UNRECOVERED_JUMPTABLE = (code *)param_2[1];
        iVar8 = 0x69;
      }
      else {
        if (param_1 != 0x69) {
          if (param_1 == 0x131) {
            return;
          }
LAB_00100f64:
          lVar3 = lVar3 + 0x103582;
          uVar11 = 0;
          do {
            if ((uVar2 >> (uVar11 & 0x1f) & 1) != 0) {
              if ((uVar2 & 0x100) == 0) {
                uVar9 = (uint)*(ushort *)
                               (lVar3 + (ulong)(byte)flagsOffset
                                                     [(int)((1 << ((byte)uVar11 & 0x1f)) - 1U &
                                                           uVar7)] * 2);
              }
              else {
                puVar5 = (undefined2 *)
                         ((ulong)(byte)flagsOffset[(int)((1 << ((byte)uVar11 & 0x1f)) - 1U & uVar7)]
                          * 4 + lVar3);
                uVar9 = CONCAT22(*puVar5,puVar5[1]);
              }
              (*(code *)param_2[1])(*param_2,uVar9);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != 4);
          if ((uVar2 & 0x10) != 0) {
            if ((uVar2 & 0x100) == 0) {
              uVar11 = (uint)*(ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar7 & 0xf] * 2);
            }
            else {
              puVar5 = (undefined2 *)((ulong)(byte)flagsOffset[uVar7 & 0xf] * 4 + lVar3);
              uVar11 = CONCAT22(*puVar5,puVar5[1]);
            }
            if ((uVar2 & 0x400) != 0) {
              uVar11 = -uVar11;
            }
            (*(code *)param_2[1])(*param_2,uVar11 + param_1);
          }
          if ((uVar2 & 0x40) == 0) {
            return;
          }
          if ((uVar2 & 0x100) == 0) {
            puVar6 = (ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar7 & 0x3f] * 2);
            uVar1 = *puVar6;
          }
          else {
            lVar4 = (ulong)(byte)flagsOffset[uVar7 & 0x3f] * 4 + lVar3;
            uVar1 = *(ushort *)(lVar4 + 2);
            puVar6 = (ushort *)(lVar4 + 2);
          }
          if ((uVar1 & 0xf) == 0) {
            return;
          }
          if ((uVar2 & 0x80) == 0) {
            puVar6 = puVar6 + 1;
          }
          else {
            if ((uVar2 & 0x100) == 0) {
              puVar6 = (ushort *)(lVar3 + (ulong)(byte)flagsOffset[uVar7 & 0x7f] * 2);
              uVar2 = *puVar6;
            }
            else {
              lVar3 = lVar3 + (ulong)(byte)flagsOffset[uVar7 & 0x7f] * 4;
              uVar2 = *(ushort *)(lVar3 + 2);
              puVar6 = (ushort *)(lVar3 + 2);
            }
            uVar7 = (uint)uVar2;
            puVar6 = puVar6 + (ulong)((int)uVar7 >> 8 & 0xf) +
                              (ulong)((int)uVar7 >> 4 & 0xf) + 1 + (ulong)(uVar7 & 0xf) +
                              (long)((int)uVar7 >> 0xc);
          }
          iVar8 = 0;
          do {
            while( true ) {
              lVar3 = (long)iVar8;
              if ((puVar6[lVar3] & 0xfc00) == 0xd800) break;
              iVar8 = iVar8 + 1;
              (*(code *)param_2[1])(*param_2);
              if ((int)(uVar1 & 0xf) <= iVar8) {
                return;
              }
            }
            lVar4 = (long)iVar8;
            iVar8 = iVar8 + 2;
            (*(code *)param_2[1])
                      (*param_2,puVar6[lVar4 + 1] + 0xfca02400 + (uint)puVar6[lVar3] * 0x400);
          } while (iVar8 < (int)(uVar1 & 0xf));
          return;
        }
        uVar10 = *param_2;
        UNRECOVERED_JUMPTABLE = (code *)param_2[1];
        iVar8 = 0x49;
      }
      goto LAB_00101142;
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar8 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar8 = 0x140;
      }
      lVar3 = (long)(int)(uVar7 + iVar8);
      goto LAB_00100f11;
    }
    if (param_1 < 0x110000) {
      if ((int)param_1 < 0xe0800) {
        lVar3 = (long)(int)((uint)*(ushort *)
                                   (&ucase_props_trieIndex +
                                   (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar7 & 0x3f));
        goto LAB_00100f11;
      }
      lVar3 = 0x6870;
    }
    else {
      lVar3 = 0x1c18;
    }
    uVar2 = *(ushort *)(&ucase_props_trieIndex + lVar3);
  }
  if (((uVar2 & 3) == 0) || ((short)uVar2 >> 7 == 0)) {
    return;
  }
  uVar10 = *param_2;
  iVar8 = (int)((short)uVar2 >> 7) + param_1;
  UNRECOVERED_JUMPTABLE = (code *)param_2[1];
LAB_00101142:
                    /* WARNING: Could not recover jumptable at 0x00101150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar10,iVar8);
  return;
}



undefined8 ucase_addStringCaseClosure_76_godot(ushort *param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((1 < param_2 - 2) || (param_1 == (ushort *)0x0)) {
    return 0;
  }
  iVar10 = 0;
  iVar8 = 0x49;
joined_r0x001012eb:
  do {
    iVar9 = iVar8;
    if (iVar9 <= iVar10) {
      return 0;
    }
    iVar8 = (iVar10 + iVar9) / 2;
    lVar1 = (long)(iVar8 * 5) * 2;
    puVar3 = param_1;
    puVar7 = (ushort *)(ucase_props_unfold + lVar1 + 10);
    do {
      uVar6 = (uint)*puVar7;
      puVar4 = puVar3 + 1;
      puVar7 = puVar7 + 1;
      if (uVar6 == 0) {
LAB_0010132c:
        iVar10 = iVar8 + 1;
        iVar8 = iVar9;
        goto joined_r0x001012eb;
      }
      if (*puVar3 != uVar6) {
        if (-1 < (int)(*puVar3 - uVar6)) goto LAB_0010132c;
        goto joined_r0x001012eb;
      }
      puVar3 = puVar4;
    } while (puVar4 != param_1 + param_2);
    if (param_2 == 3) goto LAB_00101395;
  } while (*puVar7 != 0);
  param_2 = 3;
LAB_00101395:
  do {
    lVar5 = (long)(int)param_2;
    uVar2 = *(ushort *)((long)(ucase_props_unfold + lVar1 + 10) + lVar5 * 2);
    if (uVar2 == 0) {
      return 1;
    }
    uVar6 = (uint)uVar2;
    if ((uVar2 & 0xfc00) == 0xd800) {
      param_2 = param_2 + 2;
      uVar6 = *(ushort *)(lVar1 + 0x10328c + lVar5 * 2) + 0xfca02400 + (uint)uVar2 * 0x400;
    }
    else {
      param_2 = param_2 + 1;
    }
    (*(code *)param_3[1])(*param_3,uVar6);
    ucase_addCaseClosure_76_godot(uVar6,param_3);
  } while ((int)param_2 < 5);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::FullCaseFoldingIterator::FullCaseFoldingIterator() */

void __thiscall
icu_76_godot::FullCaseFoldingIterator::FullCaseFoldingIterator(FullCaseFoldingIterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0010abe8;
  uVar1 = __LC4;
  *(undefined4 *)(this + 0x18) = 3;
  *(undefined8 *)this = 0x10328a;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  return;
}



/* icu_76_godot::FullCaseFoldingIterator::next(icu_76_godot::UnicodeString&) */

uint __thiscall
icu_76_godot::FullCaseFoldingIterator::next(FullCaseFoldingIterator *this,UnicodeString *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  iVar5 = *(int *)(this + 0xc);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(this + 0x14);
  lVar6 = *(long *)this + (long)(iVar3 * iVar5) * 2;
  if ((iVar5 <= *(int *)(this + 0x18)) || (*(short *)(lVar6 + (long)*(int *)(this + 0x18) * 2) == 0)
     ) {
    iVar3 = iVar3 + 1;
    lVar6 = lVar6 + (long)iVar5 * 2;
    *(ulong *)(this + 0x14) = CONCAT44(*(undefined4 *)(this + 0x10),iVar3);
  }
  if (iVar3 < *(int *)(this + 8)) {
    iVar5 = *(int *)(this + 0x10);
    if (0 < iVar5) {
      lVar4 = lVar6 + (long)iVar5 * 2;
      do {
        if (*(short *)(lVar4 + -2) != 0) break;
        lVar4 = lVar4 + -2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_28 = lVar6;
    icu_76_godot::UnicodeString::setTo(param_1,0,&local_28);
    iVar5 = *(int *)(this + 0x18);
    *(int *)(this + 0x18) = iVar5 + 1;
    uVar1 = *(ushort *)(lVar6 + (long)iVar5 * 2);
    uVar2 = (uint)uVar1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      *(int *)(this + 0x18) = iVar5 + 2;
      uVar2 = *(ushort *)(lVar6 + 2 + (long)iVar5 * 2) + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ushort ucase_getType_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x1c18;
    if ((0x10ffff < param_1) || (lVar3 = 0x6870, 0xe07ff < (int)param_1)) goto LAB_0010154d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (&ucase_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2)
                       + (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar3 * 2) * 4)
          * 2;
LAB_0010154d:
  return *(ushort *)(&ucase_props_trieIndex + lVar3) & 3;
}



ushort ucase_getTypeOrIgnorable_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x1c18;
    if ((0x10ffff < param_1) || (lVar3 = 0x6870, 0xe07ff < (int)param_1)) goto LAB_001015fd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (&ucase_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2)
                       + (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar3 * 2) * 4)
          * 2;
LAB_001015fd:
  return *(ushort *)(&ucase_props_trieIndex + lVar3) & 7;
}



bool ucase_isSoftDotted_76_godot(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar4 = (long)(int)uVar3;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar4 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar3 & 0x3f));
          goto LAB_0010169d;
        }
        lVar4 = 0x6870;
      }
      else {
        lVar4 = 0x1c18;
      }
      return (*(ushort *)(&ucase_props_trieIndex + lVar4) & 0x60) == 0x20;
    }
    iVar2 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar2 = 0x140;
    }
    lVar4 = (long)(int)(uVar3 + iVar2);
  }
LAB_0010169d:
  uVar1 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar4 * 2) * 4)
           * 2);
  if ((uVar1 & 8) != 0) {
    uVar1 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar1 >> 4) * 2) >> 7;
  }
  return (uVar1 & 0x60) == 0x20;
}



ushort ucase_isCaseSensitive_76_godot(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar4 = (long)(int)uVar3;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar4 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar3 & 0x3f));
          goto LAB_0010178d;
        }
        lVar4 = 0x6870;
      }
      else {
        lVar4 = 0x1c18;
      }
      uVar1 = *(ushort *)(&ucase_props_trieIndex + lVar4);
      goto LAB_00101808;
    }
    iVar2 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar2 = 0x140;
    }
    lVar4 = (long)(int)(uVar3 + iVar2);
  }
LAB_0010178d:
  uVar1 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar4 * 2) * 4)
           * 2);
  if ((uVar1 & 8) != 0) {
    return *(ushort *)(ucase_props_exceptions + (ulong)(uVar1 >> 4) * 2) >> 0xb & 1;
  }
LAB_00101808:
  return uVar1 >> 4 & 1;
}



/* WARNING: Type propagation algorithm not settling */

char ucase_getCaseLocale_76_godot(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  if (cVar1 == 'e') {
switchD_001018e8_caseD_45:
    if ((param_1[1] & 0xdfU) != 0x4c) {
      return '\x01';
    }
    bVar2 = param_1[2];
    if ((bVar2 & 0xdf) == 0x4c) {
      bVar2 = param_1[3];
    }
    if ((bVar2 != 0x5f && bVar2 != 0x2d) && (bVar2 != 0)) {
      return '\x01';
    }
    return '\x04';
  }
  if (cVar1 == 'z') {
    return '\x01';
  }
  if ('`' < cVar1) {
    switch(cVar1) {
    case 'a':
switchD_00101883_caseD_61:
      if ((param_1[1] & 0xdfU) != 0x5a) {
        return '\x01';
      }
      bVar2 = param_1[2];
      if ((bVar2 & 0xdf) == 0x45) {
        bVar2 = param_1[3];
      }
      break;
    default:
LAB_001018c9:
      return '\x01';
    case 'h':
switchD_00101883_caseD_68:
      if ((param_1[1] & 0xdfU) != 0x59) {
        return '\x01';
      }
      bVar2 = param_1[2];
      if ((bVar2 & 0xdf) == 0x45) {
        bVar2 = param_1[3];
      }
      if ((bVar2 != 0x5f && bVar2 != 0x2d) && (bVar2 != 0)) {
        return '\x01';
      }
      return '\x06';
    case 'l':
switchD_00101883_caseD_6c:
      pcVar4 = param_1 + 2;
      bVar2 = param_1[1] & 0xdf;
      if (bVar2 == 0x49) {
        pcVar4 = param_1 + 3;
        bVar2 = param_1[2] & 0xdf;
      }
      if (bVar2 != 0x54) {
        return '\x01';
      }
      cVar1 = *pcVar4;
      if ((cVar1 != '_' && cVar1 != '-') && (cVar1 != '\0')) {
        return '\x01';
      }
      return '\x03';
    case 'n':
switchD_00101883_caseD_6e:
      if ((param_1[1] & 0xdfU) != 0x4c) {
        return '\x01';
      }
      bVar2 = param_1[2];
      if ((bVar2 & 0xdf) == 0x44) {
        bVar2 = param_1[3];
      }
      if ((bVar2 != 0x5f && bVar2 != 0x2d) && (bVar2 != 0)) {
        return '\x01';
      }
      return '\x05';
    case 't':
switchD_00101883_caseD_74:
      pbVar3 = (byte *)(param_1 + 2);
      bVar2 = param_1[1] & 0xdf;
      if (bVar2 == 0x55) {
        pbVar3 = (byte *)(param_1 + 3);
        bVar2 = param_1[2] & 0xdf;
      }
      if (bVar2 != 0x52) {
        return '\x01';
      }
      bVar2 = *pbVar3;
    }
    return ((bVar2 == 0x5f || bVar2 == 0x2d) || bVar2 == 0) + '\x01';
  }
  switch(cVar1) {
  case 'A':
    goto switchD_00101883_caseD_61;
  default:
    goto LAB_001018c9;
  case 'E':
    goto switchD_001018e8_caseD_45;
  case 'H':
    goto switchD_00101883_caseD_68;
  case 'L':
    goto switchD_00101883_caseD_6c;
  case 'N':
    goto switchD_00101883_caseD_6e;
  case 'T':
    goto switchD_00101883_caseD_74;
  }
}



uint ucase_toFullLower_76_godot
               (uint param_1,code *param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined6 *puVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  bool bVar14;
  
  *param_4 = 0;
  uVar5 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar7 = (long)(int)uVar5;
LAB_00101aaf:
    uVar2 = *(ushort *)
             (&ucase_props_trieIndex +
             (long)(int)((param_1 & 0x1f) +
                        (uint)*(ushort *)(&ucase_props_trieIndex + lVar7 * 2) * 4) * 2);
    if ((uVar2 & 8) == 0) goto LAB_00101c05;
    lVar1 = (ulong)(uVar2 >> 4) * 2;
    uVar3 = *(ushort *)(ucase_props_exceptions + lVar1);
    lVar7 = lVar1 + 0x103582;
    if ((uVar3 & 0x4000) == 0) {
      if ((uVar3 & 0x80) != 0) {
        if ((uVar3 & 0x100) == 0) {
          puVar10 = (ushort *)(lVar7 + (ulong)(byte)flagsOffset[uVar3 & 0x7f] * 2);
          uVar4 = *puVar10;
        }
        else {
          lVar9 = (ulong)(byte)flagsOffset[uVar3 & 0x7f] * 4 + lVar7;
          puVar10 = (ushort *)(lVar9 + 2);
          uVar4 = *(ushort *)(lVar9 + 2);
        }
        if ((uVar4 & 0xf) != 0) {
          *param_4 = puVar10 + 1;
          return uVar4 & 0xf;
        }
      }
    }
    else {
      if (param_5 == 3) {
        if ((param_1 - 0x49 < 2 || param_1 == 0x12e) && (param_2 != (code *)0x0)) {
          uVar12 = 1;
          do {
            uVar5 = (*param_2)(param_3,uVar12);
            if ((int)uVar5 < 0) break;
            uVar11 = (int)uVar5 >> 5;
            if (uVar5 < 0xd800) {
LAB_00101fb5:
              uVar4 = *(ushort *)
                       (&ucase_props_trieIndex +
                       (long)(int)((uVar5 & 0x1f) +
                                  (uint)*(ushort *)(&ucase_props_trieIndex + (long)(int)uVar11 * 2)
                                  * 4) * 2);
              if ((uVar4 & 8) != 0) {
                uVar4 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar4 >> 4) * 2) >> 7;
              }
            }
            else {
              if (uVar5 < 0x10000) {
                iVar6 = 0;
                if ((int)uVar5 < 0xdc00) {
                  iVar6 = 0x140;
                }
                uVar11 = uVar11 + iVar6;
                goto LAB_00101fb5;
              }
              if (uVar5 < 0x110000) {
                if ((int)uVar5 < 0xe0800) {
                  uVar11 = (uint)*(ushort *)
                                  (&ucase_props_trieIndex + (long)(((int)uVar5 >> 0xb) + 0x820) * 2)
                           + (uVar11 & 0x3f);
                  goto LAB_00101fb5;
                }
                lVar9 = 0x6870;
              }
              else {
                lVar9 = 0x1c18;
              }
              uVar4 = *(ushort *)(&ucase_props_trieIndex + lVar9);
            }
            if ((uVar4 & 0x60) == 0x40) goto LAB_00101e48;
            uVar12 = 0;
          } while ((uVar4 & 0x60) == 0x60);
        }
        if ((1 < param_1 - 0xcc) && (param_1 != 0x128)) goto LAB_00101dcc;
LAB_00101e48:
        if (param_1 == 0xcd) {
          puVar8 = &iDotAcute;
LAB_0010204b:
          *param_4 = puVar8;
          return 3;
        }
        if (0xcd < (int)param_1) {
          if (param_1 == 0x128) {
            puVar8 = &iDotTilde;
            goto LAB_0010204b;
          }
          puVar8 = &iOgonekDot;
          if (param_1 != 0x12e) {
            return 0;
          }
          goto LAB_00101e83;
        }
        if (param_1 == 0x4a) {
          puVar8 = (undefined6 *)&jDot;
          goto LAB_00101e83;
        }
        if (param_1 == 0xcc) {
          puVar8 = &iDotGrave;
          goto LAB_0010204b;
        }
        if (param_1 != 0x49) {
          return 0;
        }
LAB_00101e7c:
        puVar8 = (undefined6 *)&iDot;
LAB_00101e83:
        *param_4 = puVar8;
        return 2;
      }
      bVar14 = param_5 == 2;
      if ((param_1 == 0x130) && (bVar14)) {
        return 0x69;
      }
      if ((param_1 == 0x307) && (bVar14)) {
        if (param_2 != (code *)0x0) {
          do {
            uVar5 = (*param_2)(param_3);
            if ((int)uVar5 < 0) break;
            if (uVar5 == 0x49) {
              return 0;
            }
            uVar11 = (int)uVar5 >> 5;
            if (uVar5 < 0xd800) {
LAB_00101b5d:
              uVar4 = *(ushort *)
                       (&ucase_props_trieIndex +
                       (long)(int)((uVar5 & 0x1f) +
                                  (uint)*(ushort *)(&ucase_props_trieIndex + (long)(int)uVar11 * 2)
                                  * 4) * 2);
              if ((uVar4 & 8) != 0) {
                uVar4 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar4 >> 4) * 2) >> 7;
              }
            }
            else {
              if (uVar5 < 0x10000) {
                iVar6 = 0;
                if ((int)uVar5 < 0xdc00) {
                  iVar6 = 0x140;
                }
                uVar11 = uVar11 + iVar6;
                goto LAB_00101b5d;
              }
              if (uVar5 < 0x110000) {
                if ((int)uVar5 < 0xe0800) {
                  uVar11 = (uint)*(ushort *)
                                  (&ucase_props_trieIndex + (long)(((int)uVar5 >> 0xb) + 0x820) * 2)
                           + (uVar11 & 0x3f);
                  goto LAB_00101b5d;
                }
                lVar9 = 0x6870;
              }
              else {
                lVar9 = 0x1c18;
              }
              uVar4 = *(ushort *)(&ucase_props_trieIndex + lVar9);
            }
          } while ((uVar4 & 0x60) == 0x60);
        }
      }
      else {
        if ((param_1 == 0x49) && (bVar14)) {
          if (param_2 != (code *)0x0) {
            do {
              uVar5 = (*param_2)(param_3);
              if ((int)uVar5 < 0) {
                return 0x131;
              }
              if (uVar5 == 0x307) goto LAB_00101c6a;
              uVar11 = (int)uVar5 >> 5;
              if (uVar5 < 0xd800) {
LAB_00101ebd:
                uVar4 = *(ushort *)
                         (&ucase_props_trieIndex +
                         (long)(int)((uVar5 & 0x1f) +
                                    (uint)*(ushort *)
                                           (&ucase_props_trieIndex + (long)(int)uVar11 * 2) * 4) * 2
                         );
                if ((uVar4 & 8) != 0) {
                  uVar4 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar4 >> 4) * 2) >> 7;
                }
              }
              else {
                if (uVar5 < 0x10000) {
                  iVar6 = 0;
                  if ((int)uVar5 < 0xdc00) {
                    iVar6 = 0x140;
                  }
                  uVar11 = uVar11 + iVar6;
                  goto LAB_00101ebd;
                }
                if (uVar5 < 0x110000) {
                  if ((int)uVar5 < 0xe0800) {
                    uVar11 = (uint)*(ushort *)
                                    (&ucase_props_trieIndex +
                                    (long)(((int)uVar5 >> 0xb) + 0x820) * 2) + (uVar11 & 0x3f);
                    goto LAB_00101ebd;
                  }
                  lVar9 = 0x6870;
                }
                else {
                  lVar9 = 0x1c18;
                }
                uVar4 = *(ushort *)(&ucase_props_trieIndex + lVar9);
              }
            } while ((uVar4 & 0x60) == 0x60);
          }
          return 0x131;
        }
LAB_00101dcc:
        if (param_1 == 0x130) goto LAB_00101e7c;
        if ((param_1 == 0x3a3) && (uVar12 = 1, param_2 != (code *)0x0)) {
          do {
            iVar6 = (*param_2)(param_3,uVar12);
            if (iVar6 < 0) goto LAB_00101e12;
            uVar5 = ucase_getTypeOrIgnorable_76_godot(iVar6);
            uVar12 = 0;
          } while ((uVar5 & 4) != 0);
          if (uVar5 == 0) {
LAB_00101e12:
            uVar12 = 0xffffffff;
            do {
              iVar6 = (*param_2)(param_3,uVar12);
              if (iVar6 < 0) goto LAB_00101c6a;
              uVar5 = ucase_getTypeOrIgnorable_76_godot(iVar6);
              uVar12 = 0;
            } while ((uVar5 & 4) != 0);
            if (uVar5 != 0) {
              return 0x3c2;
            }
          }
        }
      }
    }
LAB_00101c6a:
    if (((uVar3 & 0x10) != 0) && ((uVar2 & 2) != 0)) {
      if ((uVar3 & 0x100) == 0) {
        uVar5 = (uint)*(ushort *)(lVar7 + (ulong)(byte)flagsOffset[uVar3 & 0xf] * 2);
      }
      else {
        puVar13 = (undefined2 *)(lVar7 + (ulong)(byte)flagsOffset[uVar3 & 0xf] * 4);
        uVar5 = CONCAT22(*puVar13,puVar13[1]);
      }
      uVar11 = -uVar5;
      if ((uVar3 & 0x400) == 0) {
        uVar11 = uVar5;
      }
      return param_1 + uVar11;
    }
    if ((uVar3 & 1) == 0) goto LAB_00101c76;
    uVar5 = (uint)*(ushort *)(ucase_props_exceptions + lVar1 + 2);
    if ((uVar3 & 0x100) != 0) {
      uVar5 = CONCAT22(*(ushort *)(ucase_props_exceptions + lVar1 + 2),
                       *(undefined2 *)(ucase_props_exceptions + lVar1 + 4));
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar6 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar6 = 0x140;
      }
      lVar7 = (long)(int)(uVar5 + iVar6);
      goto LAB_00101aaf;
    }
    if (param_1 < 0x110000) {
      if ((int)param_1 < 0xe0800) {
        lVar7 = (long)(int)((uint)*(ushort *)
                                   (&ucase_props_trieIndex +
                                   (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar5 & 0x3f));
        goto LAB_00101aaf;
      }
      lVar7 = 0x6870;
    }
    else {
      lVar7 = 0x1c18;
    }
    uVar2 = *(ushort *)(&ucase_props_trieIndex + lVar7);
LAB_00101c05:
    if ((uVar2 & 2) == 0) goto LAB_00101c76;
    uVar5 = (int)((short)uVar2 >> 7) + param_1;
  }
  if (uVar5 != param_1) {
    return uVar5;
  }
LAB_00101c76:
  return ~param_1;
}



void ucase_toFullUpper_76_godot(void)

{
  toUpperOrTitle();
  return;
}



void ucase_toFullTitle_76_godot(void)

{
  toUpperOrTitle();
  return;
}



uint ucase_fold_76_godot(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar4 = (long)(int)uVar7;
  }
  else {
    if (0xffff < param_1) {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0xe0800) {
          lVar4 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar7 & 0x3f));
          goto LAB_00102230;
        }
        lVar4 = 0x6870;
      }
      else {
        lVar4 = 0x1c18;
      }
      uVar1 = *(ushort *)(&ucase_props_trieIndex + lVar4);
      goto LAB_00102338;
    }
    iVar8 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar8 = 0x140;
    }
    lVar4 = (long)(int)(uVar7 + iVar8);
  }
LAB_00102230:
  uVar1 = *(ushort *)
           (&ucase_props_trieIndex +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(&ucase_props_trieIndex + lVar4 * 2) * 4)
           * 2);
  if ((uVar1 & 8) != 0) {
    lVar4 = (ulong)(uVar1 >> 4) * 2;
    uVar2 = *(ushort *)(ucase_props_exceptions + lVar4);
    if ((short)uVar2 < 0) {
      if ((param_2 & 7) == 0) {
        if (param_1 == 0x49) {
          return 0x69;
        }
        if (param_1 == 0x130) {
          return 0x130;
        }
      }
      else {
        if (param_1 == 0x49) {
          return 0x131;
        }
        if (param_1 == 0x130) {
          return 0x69;
        }
      }
    }
    if ((uVar2 & 0x200) != 0) {
      return param_1;
    }
    lVar4 = lVar4 + 0x103582;
    if (((uVar2 & 0x10) != 0) && ((uVar1 & 2) != 0)) {
      if ((uVar2 & 0x100) == 0) {
        uVar7 = (uint)*(ushort *)(lVar4 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
      }
      else {
        puVar5 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0xf] * 4 + lVar4);
        uVar7 = CONCAT22(*puVar5,puVar5[1]);
      }
      uVar3 = -uVar7;
      if ((uVar2 & 0x400) == 0) {
        uVar3 = uVar7;
      }
      return param_1 + uVar3;
    }
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 1) == 0) {
        return param_1;
      }
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = (ulong)(byte)flagsOffset[uVar2 & 1];
      uVar7 = (uint)(byte)flagsOffset[uVar2 & 1];
    }
    if ((uVar2 & 0x100) != 0) {
      puVar5 = (undefined2 *)(lVar4 + (ulong)(uVar7 * 4));
      return CONCAT22(*puVar5,puVar5[1]);
    }
    return (uint)*(ushort *)(lVar4 + uVar6 * 2);
  }
LAB_00102338:
  if ((uVar1 & 2) == 0) {
    return param_1;
  }
  return param_1 + (int)((short)uVar1 >> 7);
}



uint ucase_toFullFolding_76_godot(uint param_1,long *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  
  *param_2 = 0;
  uVar5 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar6 = (long)(int)uVar5;
LAB_00102467:
    uVar1 = *(ushort *)
             (&ucase_props_trieIndex +
             (long)(int)((param_1 & 0x1f) +
                        (uint)*(ushort *)(&ucase_props_trieIndex + lVar6 * 2) * 4) * 2);
    if ((uVar1 & 8) == 0) goto LAB_0010254c;
    lVar6 = (ulong)(uVar1 >> 4) * 2;
    uVar2 = *(ushort *)(ucase_props_exceptions + lVar6);
    lVar6 = lVar6 + 0x103582;
    if ((short)uVar2 < 0) {
      if ((param_3 & 7) == 0) {
        if (param_1 == 0x49) {
          return 0x69;
        }
        if (param_1 == 0x130) {
          *param_2 = (long)&iDot;
          return 2;
        }
      }
      else {
        if (param_1 == 0x49) {
          return 0x131;
        }
        if (param_1 == 0x130) {
          return 0x69;
        }
      }
    }
    else if ((uVar2 & 0x80) != 0) {
      if ((uVar2 & 0x100) == 0) {
        puVar9 = (ushort *)(lVar6 + (ulong)(byte)flagsOffset[uVar2 & 0x7f] * 2);
        uVar5 = (uint)*puVar9;
      }
      else {
        puVar8 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0x7f] * 4 + lVar6);
        puVar9 = puVar8 + 1;
        uVar5 = CONCAT22(*puVar8,puVar8[1]);
      }
      uVar4 = (int)uVar5 >> 4 & 0xf;
      if (uVar4 != 0) {
        *param_2 = (long)(puVar9 + (ulong)(uVar5 & 0xf) + 1);
        return uVar4;
      }
    }
    if ((uVar2 & 0x200) != 0) goto LAB_001025a4;
    if (((uVar2 & 0x10) != 0) && ((uVar1 & 2) != 0)) {
      if ((uVar2 & 0x100) == 0) {
        uVar5 = (uint)*(ushort *)(lVar6 + (ulong)(byte)flagsOffset[uVar2 & 0xf] * 2);
      }
      else {
        puVar8 = (undefined2 *)((ulong)(byte)flagsOffset[uVar2 & 0xf] * 4 + lVar6);
        uVar5 = CONCAT22(*puVar8,puVar8[1]);
      }
      uVar4 = -uVar5;
      if ((uVar2 & 0x400) == 0) {
        uVar4 = uVar5;
      }
      return param_1 + uVar4;
    }
    if ((uVar2 & 2) == 0) {
      uVar7 = 0;
      if ((uVar2 & 1) == 0) goto LAB_001025a4;
    }
    else {
      uVar7 = (ulong)(byte)flagsOffset[uVar2 & 1];
    }
    if ((uVar2 & 0x100) == 0) {
      uVar5 = (uint)*(ushort *)(lVar6 + uVar7 * 2);
    }
    else {
      puVar8 = (undefined2 *)(lVar6 + (ulong)(uint)((int)uVar7 * 4));
      uVar5 = CONCAT22(*puVar8,puVar8[1]);
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar3 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar3 = 0x140;
      }
      lVar6 = (long)(int)(uVar5 + iVar3);
      goto LAB_00102467;
    }
    if (param_1 < 0x110000) {
      if ((int)param_1 < 0xe0800) {
        lVar6 = (long)(int)((uint)*(ushort *)
                                   (&ucase_props_trieIndex +
                                   (long)(((int)param_1 >> 0xb) + 0x820) * 2) + (uVar5 & 0x3f));
        goto LAB_00102467;
      }
      lVar6 = 0x6870;
    }
    else {
      lVar6 = 0x1c18;
    }
    uVar1 = *(ushort *)(&ucase_props_trieIndex + lVar6);
LAB_0010254c:
    if ((uVar1 & 2) == 0) goto LAB_001025a4;
    uVar5 = (int)((short)uVar1 >> 7) + param_1;
  }
  if (uVar5 != param_1) {
    return uVar5;
  }
LAB_001025a4:
  return ~param_1;
}



bool u_isULowercase_76_godot(void)

{
  int iVar1;
  
  iVar1 = ucase_getType_76_godot();
  return iVar1 == 1;
}



bool u_isUUppercase_76_godot(void)

{
  int iVar1;
  
  iVar1 = ucase_getType_76_godot();
  return iVar1 == 2;
}



void u_tolower_76_godot(void)

{
  ucase_tolower_76_godot();
  return;
}



void u_toupper_76_godot(void)

{
  ucase_toupper_76_godot();
  return;
}



void u_totitle_76_godot(void)

{
  ucase_totitle_76_godot();
  return;
}



void u_foldCase_76_godot(void)

{
  ucase_fold_76_godot();
  return;
}



uint ucase_hasBinaryProperty_76_godot(ulong param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)param_1;
  switch(param_2) {
  case 0x16:
    iVar3 = ucase_getType_76_godot();
    uVar5 = (uint)(iVar3 == 1);
    break;
  default:
    uVar5 = 0;
    break;
  case 0x1b:
    uVar4 = (int)uVar5 >> 5;
    if (uVar5 < 0xd800) {
      lVar6 = (long)(int)uVar4;
LAB_00102858:
      uVar2 = *(ushort *)
               (&ucase_props_trieIndex +
               (long)(int)((uVar5 & 0x1f) +
                          (uint)*(ushort *)(&ucase_props_trieIndex + lVar6 * 2) * 4) * 2);
      if ((uVar2 & 8) != 0) {
        uVar2 = *(ushort *)(ucase_props_exceptions + (ulong)(uVar2 >> 4) * 2) >> 7;
      }
    }
    else {
      if (uVar5 < 0x10000) {
        iVar3 = 0;
        if ((int)uVar5 < 0xdc00) {
          iVar3 = 0x140;
        }
        lVar6 = (long)(int)(uVar4 + iVar3);
        goto LAB_00102858;
      }
      if (uVar5 < 0x110000) {
        if ((int)uVar5 < 0xe0800) {
          lVar6 = (long)(int)((uint)*(ushort *)
                                     (&ucase_props_trieIndex +
                                     (long)(((int)uVar5 >> 0xb) + 0x820) * 2) + (uVar4 & 0x3f));
          goto LAB_00102858;
        }
        lVar6 = 0x6870;
      }
      else {
        lVar6 = 0x1c18;
      }
      uVar2 = *(ushort *)(&ucase_props_trieIndex + lVar6);
    }
    uVar5 = (uint)((uVar2 & 0x60) == 0x20);
    break;
  case 0x1e:
    iVar3 = ucase_getType_76_godot();
    uVar5 = (uint)(iVar3 == 2);
    break;
  case 0x22:
    cVar1 = ucase_isCaseSensitive_76_godot();
    uVar5 = (uint)cVar1;
    break;
  case 0x31:
    iVar3 = ucase_getType_76_godot();
    uVar5 = (uint)(iVar3 != 0);
    break;
  case 0x32:
    iVar3 = ucase_getTypeOrIgnorable_76_godot();
    uVar5 = (uint)(char)(iVar3 >> 2);
    break;
  case 0x33:
    uVar5 = ucase_toFullLower_76_godot(param_1,0,0,local_18,1);
    uVar5 = ~uVar5 >> 0x1f;
    break;
  case 0x34:
    uVar7 = 1;
    goto LAB_00102921;
  case 0x35:
    uVar7 = 0;
LAB_00102921:
    uVar5 = toUpperOrTitle(param_1,0,0,local_18,1,uVar7);
    uVar5 = ~uVar5 >> 0x1f;
    break;
  case 0x37:
    iVar3 = ucase_toFullLower_76_godot(param_1,0,0,local_18,1);
    if (iVar3 < 0) {
      iVar3 = toUpperOrTitle(param_1 & 0xffffffff,0,0,local_18,1,1);
      param_1 = param_1 & 0xffffffff;
      if (iVar3 < 0) {
        uVar7 = 0;
        goto LAB_00102921;
      }
    }
    uVar5 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


