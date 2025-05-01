
/* icu_76_godot::(anonymous namespace)::utf16_caseContextIterator(void*, signed char) */

uint icu_76_godot::(anonymous_namespace)::utf16_caseContextIterator(long *param_1,char param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < '\0') {
    iVar5 = *(int *)((long)param_1 + 0x14);
    *(char *)((long)param_1 + 0x1c) = param_2;
    *(int *)((long)param_1 + 0xc) = iVar5;
LAB_00100069:
    if ((int)param_1[1] < iVar5) {
      iVar1 = iVar5 + -1;
      *(int *)((long)param_1 + 0xc) = iVar1;
      uVar2 = *(ushort *)(*param_1 + (long)iVar1 * 2);
      uVar4 = (uint)uVar2;
      if ((uVar2 & 0xfc00) != 0xdc00) {
        return uVar4;
      }
      if (iVar1 <= (int)param_1[1]) {
        return uVar4;
      }
      uVar3 = *(ushort *)(*param_1 + -2 + (long)iVar1 * 2);
      if ((uVar3 & 0xfc00) != 0xd800) {
        return uVar4;
      }
      *(int *)((long)param_1 + 0xc) = iVar5 + -2;
      return uVar2 + 0xfca02400 + (uint)uVar3 * 0x400;
    }
  }
  else {
    if (param_2 == '\0') {
      iVar5 = *(int *)((long)param_1 + 0xc);
      if (*(char *)((long)param_1 + 0x1c) < '\0') goto LAB_00100069;
    }
    else {
      iVar5 = (int)param_1[3];
      *(char *)((long)param_1 + 0x1c) = param_2;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
    if (iVar5 < (int)param_1[2]) {
      *(int *)((long)param_1 + 0xc) = iVar5 + 1;
      uVar2 = *(ushort *)(*param_1 + (long)iVar5 * 2);
      uVar4 = (uint)uVar2;
      if ((uVar2 & 0xfc00) != 0xd800) {
        return uVar4;
      }
      if ((int)param_1[2] == iVar5 + 1) {
        return uVar4;
      }
      uVar3 = *(ushort *)(*param_1 + 2 + (long)iVar5 * 2);
      if ((uVar3 & 0xfc00) != 0xdc00) {
        return uVar4;
      }
      *(int *)((long)param_1 + 0xc) = iVar5 + 2;
      return uVar3 + 0xfca02400 + (uint)uVar2 * 0x400;
    }
  }
  return 0xffffffff;
}



/* icu_76_godot::(anonymous namespace)::appendResult(char16_t*, int, int, int, char16_t const*, int,
   unsigned int, icu_76_godot::Edits*) */

int icu_76_godot::(anonymous_namespace)::appendResult
              (wchar16 *param_1,int param_2,int param_3,int param_4,wchar16 *param_5,int param_6,
              uint param_7,Edits *param_8)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (ulong)(uint)param_4;
  iVar4 = (int)param_8;
  if (param_4 < 0) {
    if (param_8 != (Edits *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar4);
    }
    if ((param_7 & 0x4000) != 0) {
      return param_2;
    }
    param_4 = ~param_4;
    if ((param_2 < param_3) && (param_4 < 0x10000)) goto LAB_00100260;
    if (0x7fffffff - param_2 < param_6) {
      return -1;
    }
    if (param_3 <= param_2) goto LAB_001001c2;
  }
  else {
    if (param_4 < 0x20) {
      param_4 = 0xffffffff;
    }
    else {
      if ((param_2 < param_3) && (param_4 < 0x10000)) {
        param_1[param_2] = (wchar16)param_4;
        if (param_8 != (Edits *)0x0) {
          icu_76_godot::Edits::addReplace(iVar4,param_6);
        }
        return param_2 + 1;
      }
      if ((uint)param_4 < 0x10000) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    iVar2 = (int)uVar3;
    if (param_8 != (Edits *)0x0) {
      icu_76_godot::Edits::addReplace(iVar4,param_6);
    }
    if (0x7fffffff - param_2 < iVar2) {
      return -1;
    }
    param_6 = iVar2;
    if (param_3 <= param_2) goto LAB_001001c2;
    if (param_4 == 0xffffffff) {
      if (param_3 < iVar2 + param_2) {
        return iVar2 + param_2;
      }
      if (iVar2 == 0) {
        return param_2;
      }
      uVar1 = 0;
      do {
        param_1[(long)param_2 + uVar1] = param_5[uVar1];
        uVar1 = uVar1 + 1;
      } while (uVar3 != uVar1);
      goto LAB_001001c2;
    }
  }
  if (0xffff < param_4) {
    if ((param_4 < 0x110000) && (param_2 + 1 < param_3)) {
      param_1[(long)param_2 + 1] = (ushort)param_4 & 0x3ff | 0xdc00;
      param_1[param_2] = (short)(param_4 >> 10) + L'ퟀ';
      return param_2 + 2;
    }
LAB_001001c2:
    return param_2 + param_6;
  }
LAB_00100260:
  param_1[param_2] = (wchar16)param_4;
  return param_2 + 1;
}



/* icu_76_godot::(anonymous namespace)::toLower(int, unsigned int, char16_t*, int, char16_t const*,
   UCaseContext*, int, int, icu_76_godot::Edits*, UErrorCode&) */

ulong icu_76_godot::(anonymous_namespace)::toLower
                (int param_1,uint param_2,wchar16 *param_3,int param_4,wchar16 *param_5,
                UCaseContext *param_6,int param_7,int param_8,Edits *param_9,UErrorCode *param_10)

{
  char cVar1;
  wchar16 wVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined8 *local_90;
  wchar16 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = &LatinCase::TO_LOWER_NORMAL;
  if (param_1 != 1) {
    if (param_1 < 0) {
      local_90 = &LatinCase::TO_LOWER_TR_LT;
      if ((param_2 & 7) == 0) {
        local_90 = &LatinCase::TO_LOWER_NORMAL;
      }
    }
    else {
      local_90 = &LatinCase::TO_LOWER_TR_LT;
      if (1 < param_1 - 2U) {
        local_90 = &LatinCase::TO_LOWER_NORMAL;
      }
    }
  }
  uVar14 = 0;
  plVar6 = (long *)ucase_getTrie_76_godot();
  lVar13 = (long)param_7;
LAB_00100c28:
  iVar5 = (int)param_9;
  if (param_7 < param_8) {
    lVar9 = (long)param_7;
    uVar14 = uVar14 & 0xffffffff;
    lVar16 = (ulong)(uint)(param_8 - param_7) + lVar9;
    do {
      wVar2 = param_5[lVar9];
      iVar7 = (int)lVar9;
      param_7 = iVar7 + 1;
      iVar12 = (int)lVar13;
      iVar15 = (int)uVar14;
      if ((ushort)wVar2 < 0x17f) {
        cVar1 = *(char *)((long)local_90 + (ulong)(ushort)wVar2);
        sVar10 = (short)cVar1;
        if (cVar1 == -0x80) goto LAB_00100f38;
        if (cVar1 != '\0') {
          iVar7 = iVar7 - iVar12;
          if (iVar7 < 1) {
LAB_00100d9d:
            iVar7 = iVar15;
            if (iVar15 < 0) goto LAB_00101048;
LAB_00100da5:
            if (param_4 <= iVar7) goto LAB_00100cf3;
            param_3[iVar7] = sVar10 + wVar2;
          }
          else {
LAB_00100c92:
            if (param_9 != (Edits *)0x0) {
              icu_76_godot::Edits::addUnchanged(iVar5);
              lVar13 = (long)iVar12;
            }
            if ((param_2 & 0x4000) != 0) goto LAB_00100d9d;
            if (0x7fffffff - iVar15 < iVar7) goto LAB_00101048;
            iVar7 = iVar7 + iVar15;
            if (iVar7 <= param_4) {
              u_memcpy_76_godot(param_3 + iVar15,param_5 + lVar13);
              goto LAB_00100da5;
            }
LAB_00100cf3:
            if (iVar7 == 0x7fffffff) {
              if (param_9 != (Edits *)0x0) {
                icu_76_godot::Edits::addReplace(iVar5,1);
              }
              goto LAB_00100feb;
            }
          }
          if (param_9 != (Edits *)0x0) {
            icu_76_godot::Edits::addReplace(iVar5,1);
          }
          uVar14 = (ulong)(iVar7 + 1);
          lVar13 = (long)param_7;
        }
      }
      else {
        if (0xd7ff < (ushort)wVar2) {
          uVar11 = (uint)(ushort)wVar2;
          if (((((ushort)wVar2 & 0xfc00) == 0xd800) && (param_7 < param_8)) &&
             (lVar13 = (long)param_7, (param_5[lVar13] & 0xfc00U) == 0xdc00)) {
            param_7 = iVar7 + 2;
            uVar11 = (ushort)param_5[lVar13] + 0xfca02400 + (uint)(ushort)wVar2 * 0x400;
          }
          goto LAB_00100e21;
        }
        uVar3 = *(ushort *)
                 (*plVar6 +
                 (long)(int)(((ushort)wVar2 & 0x1f) +
                            (uint)*(ushort *)(*plVar6 + (ulong)((ushort)wVar2 >> 5) * 2) * 4) * 2);
        if ((uVar3 & 8) != 0) goto LAB_00100f38;
        if (((uVar3 & 2) != 0) && (sVar10 = (short)uVar3 >> 7, sVar10 != 0)) {
          iVar7 = iVar7 - iVar12;
          if (0 < iVar7) goto LAB_00100c92;
          goto LAB_00100d9d;
        }
      }
      lVar9 = lVar9 + 1;
      if (lVar16 == lVar9) {
        uVar14 = (ulong)(int)uVar14;
        break;
      }
    } while( true );
  }
  iVar7 = param_7 - (int)lVar13;
  iVar15 = (int)uVar14;
  if (iVar7 < 1) {
LAB_00100fe6:
    if (-1 < iVar15) goto LAB_00100fc0;
  }
  else {
    if (param_9 != (Edits *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar5);
      lVar13 = (long)(int)lVar13;
    }
    if ((param_2 & 0x4000) != 0) goto LAB_00100fe6;
    if (iVar7 <= 0x7fffffff - iVar15) {
      if (iVar7 + iVar15 <= param_4) {
        u_memcpy_76_godot(param_3 + uVar14,param_5 + lVar13,iVar7);
      }
      uVar14 = (ulong)(uint)(iVar7 + iVar15);
      goto LAB_00100fc0;
    }
  }
LAB_00100feb:
  *(undefined4 *)param_10 = 8;
  uVar14 = 0;
LAB_00100fc0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14 & 0xffffffff;
LAB_00100f38:
  uVar11 = (uint)(ushort)wVar2;
LAB_00100e21:
  uVar14 = (ulong)iVar15;
  local_48 = (wchar16 *)0x0;
  if (param_1 < 0) {
    iVar4 = ucase_toFullFolding_76_godot(uVar11,&local_48,param_2);
  }
  else {
    *(int *)(param_6 + 0x14) = iVar7;
    *(int *)(param_6 + 0x18) = param_7;
    iVar4 = ucase_toFullLower_76_godot(uVar11,0x100000,param_6,&local_48);
  }
  lVar13 = (long)iVar12;
  if (iVar4 < 0) goto LAB_00100c28;
  iVar8 = iVar7 - iVar12;
  if (iVar8 < 1) {
LAB_00100ed0:
    if (iVar15 < 0) goto LAB_00101048;
  }
  else {
    if (param_9 != (Edits *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar5);
    }
    if ((param_2 & 0x4000) != 0) goto LAB_00100ed0;
    if (0x7fffffff - iVar15 < iVar8) goto LAB_00101048;
    iVar15 = iVar8 + iVar15;
    if (iVar15 <= param_4) {
      u_memcpy_76_godot(param_3 + uVar14,param_5 + iVar12);
    }
  }
  iVar5 = appendResult(param_3,iVar15,param_4,iVar4,local_48,param_7 - iVar7,param_2,param_9);
  uVar14 = (ulong)iVar5;
  if (-1 < iVar5) {
    lVar13 = (long)param_7;
    goto LAB_00100c28;
  }
LAB_00101048:
  uVar14 = 0;
  *(undefined4 *)param_10 = 8;
  goto LAB_00100fc0;
}



int ustrcase_internalFold_76_godot
              (undefined8 param_1,uint param_2,undefined8 param_3,wchar16 *param_4,int param_5,
              wchar16 *param_6,int param_7,UErrorCode *param_8,UErrorCode *param_9)

{
  int iVar1;
  
  iVar1 = icu_76_godot::(anonymous_namespace)::toLower
                    (-1,param_2,param_4,param_5,param_6,(UCaseContext *)0x0,0,param_7,
                     (Edits *)param_8,param_9);
  if (*(int *)param_9 < 1) {
    if (param_5 < iVar1) {
      *(undefined4 *)param_9 = 0xf;
      return iVar1;
    }
    if (param_8 != (UErrorCode *)0x0) {
      icu_76_godot::Edits::copyErrorTo(param_8);
      return iVar1;
    }
  }
  return iVar1;
}



int ustrcase_internalToTitle_76_godot
              (int param_1,uint param_2,long *param_3,wchar16 *param_4,int param_5,wchar16 *param_6,
              uint param_7,UErrorCode *param_8,UErrorCode *param_9)

{
  wchar16 wVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  wchar16 *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  int local_c4;
  wchar16 *local_70;
  wchar16 *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_9 < 1) {
    if ((~param_2 & 0x600) != 0) {
      local_50 = 0;
      local_60 = ZEXT416(param_7) << 0x40;
      local_68 = param_6;
      if (0 < (int)param_7) {
        uVar5 = (**(code **)(*param_3 + 0x50))(param_3);
        if ((uVar5 == 0xffffffff) || ((int)param_7 < (int)uVar5)) {
          local_c4 = 0;
          uVar14 = 0;
          uVar15 = param_7;
          goto LAB_00101280;
        }
        local_c4 = 0;
        uVar14 = 0;
LAB_0010127b:
        uVar15 = uVar5;
        iVar8 = local_c4;
        if ((int)uVar14 < (int)uVar15) {
LAB_00101280:
          uVar5 = uVar14 + 1;
          wVar1 = param_6[(int)uVar14];
          uVar7 = (uint)(ushort)wVar1;
          iVar12 = (int)param_8;
          uVar13 = uVar14;
          iVar8 = local_c4;
          if (((uVar7 & 0xfffffc00) == 0xd800) && (uVar5 != uVar15)) {
            if ((param_6[(long)(int)uVar14 + 1] & 0xfc00U) == 0xdc00) {
              uVar5 = uVar14 + 2;
              uVar7 = (ushort)param_6[(long)(int)uVar14 + 1] + 0xfca02400 +
                      (uint)(ushort)wVar1 * 0x400;
              goto LAB_001012b6;
            }
            if ((param_2 & 0x200) == 0) goto LAB_001012be;
            goto LAB_00101380;
          }
LAB_001012b6:
          if ((param_2 & 0x200) == 0) {
LAB_001012be:
            uVar10 = uVar5;
LAB_00101340:
            uVar5 = uVar10;
            if ((param_2 & 0x400) == 0) {
              uVar10 = u_charType_76_godot(uVar7);
              if ((0xf020e2eU >> (uVar10 & 0x1f) & 1) != 0) goto joined_r0x00101375;
              if ((char)uVar10 == '\x04') {
                iVar6 = ucase_getType_76_godot(uVar7);
                goto joined_r0x001015e2;
              }
            }
            else {
              iVar6 = ucase_getType_76_godot();
joined_r0x001015e2:
              if (iVar6 != 0) goto joined_r0x00101375;
            }
            uVar13 = uVar5;
            if (uVar5 == uVar15) goto joined_r0x00101375;
            uVar10 = uVar5 + 1;
            uVar7 = (uint)(ushort)param_6[(int)uVar5];
            if ((((uVar7 & 0xfffffc00) == 0xd800) && (uVar10 != uVar15)) &&
               ((param_6[(long)(int)uVar5 + 1] & 0xfc00U) == 0xdc00)) {
              uVar7 = (ushort)param_6[(long)(int)uVar5 + 1] + 0xfca02400 + uVar7 * 0x400;
              uVar10 = uVar5 + 2;
            }
            goto LAB_00101340;
          }
          goto LAB_00101390;
        }
        goto joined_r0x001017c7;
      }
      local_c4 = 0;
      goto LAB_001017df;
    }
    *(undefined4 *)param_9 = 1;
  }
LAB_00101838:
  local_c4 = 0;
  goto LAB_00101490;
joined_r0x00101375:
  if ((int)uVar14 < (int)uVar13) {
    if (param_8 != (UErrorCode *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar12);
    }
    if ((param_2 & 0x4000) == 0) {
      if (0x7fffffff - local_c4 < (int)(uVar13 - uVar14)) goto LAB_0010181e;
      iVar8 = (uVar13 - uVar14) + local_c4;
      if (iVar8 <= param_5) {
        u_memcpy_76_godot(param_4 + local_c4,param_6 + (int)uVar14);
      }
    }
    else if (local_c4 < 0) goto LAB_0010181e;
  }
LAB_00101380:
  local_c4 = iVar8;
  uVar14 = uVar13;
  iVar8 = local_c4;
  if ((int)uVar14 < (int)uVar5) {
LAB_00101390:
    local_60._12_4_ = uVar14;
    local_50 = CONCAT44(local_50._4_4_,uVar5);
    uVar7 = ucase_toFullTitle_76_godot(uVar7,0x100000,(UCaseContext *)&local_68,&local_70,param_1);
    iVar8 = icu_76_godot::(anonymous_namespace)::appendResult
                      (param_4,local_c4,param_5,uVar7,local_70,uVar5 - uVar14,param_2,
                       (Edits *)param_8);
    if (iVar8 < 0) goto LAB_0010181e;
    uVar13 = uVar14 + 1;
    local_c4 = iVar8;
    if (((int)uVar13 < (int)uVar15) && (param_1 == 5)) {
      uVar7 = (int)uVar7 >> 0x1f ^ uVar7;
      bVar2 = uVar7 == 0x49 || uVar7 == 0xcd;
      if (uVar7 != 0x49 && uVar7 != 0xcd) goto LAB_0010141d;
      uVar10 = uVar14 + 2;
      lVar9 = (long)(int)uVar13;
      wVar1 = param_6[lVar9];
      if (uVar7 == 0x49) {
        if (wVar1 == L'́') {
          uVar5 = uVar13;
          if (uVar10 != uVar15) {
            uVar5 = uVar14 + 3;
            if (param_6[(long)(int)uVar13 + 1] == L'j') {
              iVar6 = 1;
            }
            else {
              if (param_6[(long)(int)uVar13 + 1] != L'J') goto LAB_00101426;
              iVar6 = 2;
              bVar2 = false;
            }
            goto LAB_0010166a;
          }
          goto LAB_0010141d;
        }
        uVar5 = uVar10;
        if (wVar1 != L'j') {
          if (wVar1 != L'J') goto LAB_00101426;
          if ((int)uVar10 < (int)uVar15) {
            bVar3 = false;
            iVar6 = 1;
            bVar2 = false;
            goto LAB_001019c5;
          }
          bVar3 = false;
          iVar6 = 1;
          bVar2 = false;
          uVar13 = uVar10;
          goto LAB_001016a3;
        }
        if ((int)uVar10 < (int)uVar15) {
          bVar3 = false;
          iVar6 = 0;
          goto LAB_001019c5;
        }
        bVar3 = false;
LAB_0010194e:
        if (local_c4 < param_5) {
LAB_0010195c:
          param_4[local_c4] = L'J';
LAB_00101973:
          local_c4 = local_c4 + 1;
        }
        else {
LAB_00101af6:
          if (local_c4 != 0x7fffffff) goto LAB_00101973;
          local_c4 = -1;
        }
        pwVar11 = param_6 + (int)uVar10;
        if (param_8 == (UErrorCode *)0x0) {
          if (bVar3) goto LAB_00101740;
        }
        else {
          icu_76_godot::Edits::addReplace(iVar12,1);
          if (bVar3) {
LAB_00101731:
            icu_76_godot::Edits::addUnchanged(iVar12);
LAB_00101740:
            if ((param_2 & 0x4000) == 0) {
              lVar9 = (long)local_c4;
              if (local_c4 == 0x7fffffff) {
                local_c4 = -1;
              }
              else {
                local_c4 = local_c4 + 1;
                if (local_c4 <= param_5) {
                  u_memcpy_76_godot(param_4 + lVar9,pwVar11,1);
                }
              }
            }
          }
        }
        goto LAB_0010141d;
      }
      uVar5 = uVar10;
      if (wVar1 == L'j') {
        iVar6 = 0;
LAB_0010166a:
        if ((uVar5 != uVar15) && (param_6[(int)uVar5] == L'́')) {
          uVar5 = uVar5 + 1;
          if (bVar2) {
            if ((int)uVar5 < (int)uVar15) {
              bVar3 = true;
              uVar10 = uVar5;
              goto LAB_001019c5;
            }
            bVar3 = true;
            if (iVar6 == 0) goto LAB_0010194e;
            uVar13 = uVar13 + iVar6;
LAB_001016a3:
            if (param_8 != (UErrorCode *)0x0) {
              icu_76_godot::Edits::addUnchanged(iVar12);
            }
            if ((param_2 & 0x4000) != 0) goto LAB_0010193f;
            if (iVar6 <= 0x7fffffff - iVar8) {
              local_c4 = iVar8 + iVar6;
              if (local_c4 <= param_5) {
                u_memcpy_76_godot(param_4 + iVar8,param_6 + lVar9);
                goto LAB_0010193f;
              }
              if (!bVar2) goto LAB_00101719;
              uVar10 = uVar13 + 1;
              goto LAB_00101af6;
            }
            if (!bVar2) {
              local_c4 = -1;
              goto LAB_00101719;
            }
            uVar10 = uVar13 + 1;
            if (-1 < param_5) {
              local_c4 = -1;
              goto LAB_0010195c;
            }
            local_c4 = -1;
            goto LAB_00101973;
          }
          iVar6 = iVar6 + 1;
          if ((int)uVar15 <= (int)uVar5) {
            bVar3 = false;
            uVar13 = uVar13 + iVar6;
            goto LAB_001016a3;
          }
          bVar3 = false;
          uVar10 = uVar5;
LAB_001019c5:
          wVar1 = param_6[(int)uVar10];
          uVar5 = (uint)(ushort)wVar1;
          if (((uVar10 + 1 != uVar15) && ((wVar1 & 0xfc00U) == 0xd800)) &&
             ((param_6[(long)(int)uVar10 + 1] & 0xfc00U) == 0xdc00)) {
            uVar5 = (ushort)param_6[(long)(int)uVar10 + 1] + 0xfca02400 +
                    (uint)(ushort)wVar1 * 0x400;
          }
          bVar4 = u_charType_76_godot(uVar5);
          if ((1 << (bVar4 & 0x1f) & 0x1c0U) != 0) goto LAB_00101426;
          uVar5 = uVar10;
          if (iVar6 != 0) {
            uVar13 = uVar13 + iVar6;
            goto LAB_001016a3;
          }
LAB_0010193f:
          if (bVar2) {
            uVar10 = uVar13 + 1;
            goto LAB_0010194e;
          }
LAB_00101719:
          if (!bVar3) goto LAB_0010141d;
          pwVar11 = param_6 + (int)uVar13;
          if (param_8 != (UErrorCode *)0x0) goto LAB_00101731;
          goto LAB_00101740;
        }
      }
      else if (wVar1 == L'J') {
        iVar6 = 1;
        bVar2 = false;
        goto LAB_0010166a;
      }
    }
    else {
LAB_0010141d:
      uVar13 = uVar5;
      iVar8 = local_c4;
      if ((int)uVar15 <= (int)uVar13) goto joined_r0x001017c7;
    }
LAB_00101426:
    if ((param_2 & 0x100) == 0) {
      pwVar11 = (wchar16 *)0x0;
      if (param_4 != (wchar16 *)0x0) {
        pwVar11 = param_4 + local_c4;
      }
      iVar8 = icu_76_godot::(anonymous_namespace)::toLower
                        (param_1,param_2,pwVar11,param_5 - local_c4,param_6,
                         (UCaseContext *)&local_68,uVar13,uVar15,(Edits *)param_8,param_9);
      local_c4 = local_c4 + iVar8;
      iVar8 = local_c4;
      if (*(int *)param_9 == 0xf) {
        *(undefined4 *)param_9 = 0;
      }
      else if (0 < *(int *)param_9) goto LAB_00101490;
    }
    else {
      iVar6 = uVar15 - uVar13;
      if (param_8 != (UErrorCode *)0x0) {
        icu_76_godot::Edits::addUnchanged(iVar12);
      }
      if ((param_2 & 0x4000) == 0) {
        if (0x7fffffff - local_c4 < iVar6) {
LAB_0010181e:
          *(undefined4 *)param_9 = 8;
          goto LAB_00101838;
        }
        iVar8 = iVar6 + local_c4;
        if (iVar8 <= param_5) {
          u_memcpy_76_godot(param_4 + local_c4,param_6 + (int)uVar13,iVar6);
        }
      }
      else {
        iVar8 = local_c4;
        if (local_c4 == -1) goto LAB_0010181e;
      }
    }
  }
joined_r0x001017c7:
  local_c4 = iVar8;
  if ((int)uVar15 < (int)param_7) {
    uVar5 = (**(code **)(*param_3 + 0x68))(param_3);
    uVar14 = uVar15;
    if ((uVar5 == 0xffffffff) || ((int)param_7 < (int)uVar5)) {
      uVar5 = param_7;
    }
    goto LAB_0010127b;
  }
  if (0 < *(int *)param_9) goto LAB_00101490;
LAB_001017df:
  if (param_5 < local_c4) {
    *(undefined4 *)param_9 = 0xf;
  }
  else if (param_8 != (UErrorCode *)0x0) {
    icu_76_godot::Edits::copyErrorTo(param_8);
  }
LAB_00101490:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::GreekUpper::getLetterData(int) */

undefined2 icu_76_godot::GreekUpper::getLetterData(int param_1)

{
  undefined2 uVar1;
  
  if ((0x1db6 < param_1 - 0x370U) || (param_1 - 0x400U < 0x1b00)) {
    return 0;
  }
  if (param_1 < 0x400) {
    return *(undefined2 *)(data0370 + (long)(int)(param_1 - 0x370U) * 2);
  }
  if (0x1fff < param_1) {
    uVar1 = 0x13a9;
    if (param_1 != 0x2126) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return *(undefined2 *)(data1F00 + (long)(param_1 + -0x1f00) * 2);
}



/* icu_76_godot::GreekUpper::getDiacriticData(int) */

undefined4 icu_76_godot::GreekUpper::getDiacriticData(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 0x300U < 0x46) {
    uVar1 = *(undefined4 *)(CSWTCH_159 + (ulong)(param_1 - 0x300U) * 4);
  }
  return uVar1;
}



/* icu_76_godot::GreekUpper::isFollowedByCasedLetter(char16_t const*, int, int) */

bool icu_76_godot::GreekUpper::isFollowedByCasedLetter(wchar16 *param_1,int param_2,int param_3)

{
  int iVar1;
  wchar16 wVar2;
  uint uVar3;
  
  do {
    if (param_3 <= param_2) {
      return false;
    }
    iVar1 = param_2 + 1;
    wVar2 = param_1[param_2];
    uVar3 = (uint)(ushort)wVar2;
    if ((((wVar2 & 0xfc00U) == 0xd800) && (param_3 != iVar1)) &&
       ((param_1[(long)param_2 + 1] & 0xfc00U) == 0xdc00)) {
      uVar3 = (ushort)param_1[(long)param_2 + 1] + 0xfca02400 + (uint)(ushort)wVar2 * 0x400;
      iVar1 = param_2 + 2;
    }
    param_2 = iVar1;
    uVar3 = ucase_getTypeOrIgnorable_76_godot(uVar3);
  } while ((uVar3 & 4) != 0);
  return uVar3 != 0;
}



/* icu_76_godot::GreekUpper::toUpper(unsigned int, char16_t*, int, char16_t const*, int,
   icu_76_godot::Edits*, UErrorCode&) */

Edits * icu_76_godot::GreekUpper::toUpper
                  (uint param_1,wchar16 *param_2,int param_3,wchar16 *param_4,int param_5,
                  Edits *param_6,UErrorCode *param_7)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  wchar16 *pwVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 in_register_00000014;
  Edits *pEVar13;
  wchar16 *pwVar14;
  Edits *extraout_RDX;
  int iVar15;
  uint uVar16;
  wchar16 wVar17;
  int iVar18;
  int iVar19;
  Edits *pEVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  wchar16 *local_48;
  long local_40;
  
  pEVar13 = (Edits *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 1) {
LAB_001020db:
    pEVar20 = (Edits *)0x0;
  }
  else {
    bVar1 = false;
    iVar19 = 0;
    pEVar20 = (Edits *)0x0;
    bVar3 = 0;
    do {
      iVar7 = iVar19 + 1;
      pwVar10 = param_4 + iVar19;
      uVar8 = (uint)(ushort)*pwVar10;
      iVar18 = (int)pEVar20;
      if (((uVar8 & 0xfffffc00) == 0xd800) && (param_5 != iVar7)) {
        uVar6 = (ushort)param_4[(long)iVar19 + 1] & 0xfffffc00;
        pEVar13 = (Edits *)(ulong)uVar6;
        if (uVar6 != 0xdc00) goto LAB_00101d80;
        iVar15 = iVar19 + 2;
        uVar8 = (ushort)param_4[(long)iVar19 + 1] + 0xfca02400 + (uint)(ushort)*pwVar10 * 0x400;
        uVar6 = ucase_getTypeOrIgnorable_76_godot(uVar8);
        if ((uVar6 & 4) == 0) goto LAB_00101e80;
LAB_00101d90:
        uVar9 = getLetterData(uVar8);
        uVar6 = (uint)uVar9;
        bVar21 = bVar1;
        if (uVar6 != 0) goto LAB_00101e9e;
LAB_00101dad:
        bVar4 = 0;
        iVar7 = ucase_toFullUpper_76_godot(uVar8,0,0,&local_48,4);
        pEVar13 = param_6;
        uVar8 = (anonymous_namespace)::appendResult
                          (param_2,iVar18,param_3,iVar7,local_48,iVar15 - iVar19,param_1,param_6);
        pEVar20 = (Edits *)(ulong)uVar8;
        iVar19 = iVar15;
        bVar1 = bVar21;
        if (-1 < (int)uVar8) goto LAB_00101e04;
LAB_001020d0:
        *(undefined4 *)param_7 = 8;
        goto LAB_001020db;
      }
LAB_00101d80:
      uVar6 = ucase_getTypeOrIgnorable_76_godot(uVar8,param_4,pEVar13);
      iVar15 = iVar7;
      if ((uVar6 & 4) != 0) goto LAB_00101d90;
LAB_00101e80:
      bVar21 = uVar6 != 0;
      uVar9 = getLetterData(uVar8);
      uVar6 = (uint)uVar9;
      if (uVar6 == 0) goto LAB_00101dad;
LAB_00101e9e:
      bVar4 = 0;
      uVar12 = uVar9 & 0xffffffff;
      uVar8 = uVar6 & 0x3ff;
      if ((((uVar6 & 0x1000) != 0) && ((bVar3 & 6) != 0)) && ((uVar8 == 0x399 || (uVar8 == 0x3a5))))
      {
        uVar12 = (ulong)((uint)uVar9 | (-(uint)((bVar3 & 4) == 0) & 0x8000) + 0x8000);
      }
      uVar9 = uVar12 & 0x4000;
      uVar2 = uVar12 & 0x4000;
      uVar6 = (uint)(uVar12 >> 0xd) & 1;
      if (iVar15 < param_5) {
        pwVar14 = param_4 + iVar15;
        do {
          if ((0x45 < (ushort)*pwVar14 - 0x300) ||
             (uVar11 = *(uint *)(CSWTCH_159 + (ulong)((ushort)*pwVar14 - 0x300) * 4), uVar11 == 0))
          break;
          uVar12 = (ulong)((uint)uVar12 | uVar11);
          uVar6 = (uVar6 + 1) - (uint)((uVar11 & 0x2000) == 0);
          iVar15 = iVar15 + 1;
          pwVar14 = pwVar14 + 1;
        } while (param_5 != iVar15);
      }
      if (((uint)uVar12 & 0xd000) == 0x5000) {
        bVar4 = (-(uVar9 == 0) & 0xfeU) + 4;
      }
      if (uVar8 == 0x397) {
        if (((uVar12 & 0x4000) == 0) ||
           ((bVar1 || uVar6 != 0 ||
            (cVar5 = isFollowedByCasedLetter(param_4,iVar15,param_5), cVar5 != '\0')))) {
LAB_00102100:
          bVar23 = false;
        }
        else {
          bVar23 = uVar2 == 0;
          if (!bVar23) {
            uVar8 = 0x389;
          }
        }
        if (param_6 == (Edits *)0x0) {
LAB_001021fa:
          wVar17 = (wchar16)uVar8;
          uVar11 = (uint)uVar12;
          if ((param_1 & 0x4000) != 0) goto LAB_0010210e;
          goto LAB_00102010;
        }
LAB_0010210e:
        wVar17 = (wchar16)uVar8;
        bVar1 = (ushort)*pwVar10 != uVar8 || 0 < (int)uVar6;
        uVar11 = (uint)uVar12;
        if ((uVar12 & 0x18000) != 0) {
          bVar22 = true;
          if (iVar7 < iVar15) {
            bVar22 = param_4[(long)iVar19 + 1] != L'̈' || bVar1;
          }
          bVar1 = bVar22;
          iVar7 = iVar19 + 2;
        }
        if (bVar23) {
          bVar22 = bVar23;
          if (iVar7 < iVar15) {
            bVar22 = param_4[iVar7] != L'́';
          }
          bVar1 = (bool)(bVar1 | bVar22);
          iVar7 = iVar7 + 1;
        }
        uVar16 = iVar15 - iVar19;
        uVar8 = (iVar7 - iVar19) + uVar6;
        pEVar13 = (Edits *)(ulong)uVar8;
        if (uVar16 == uVar8 && !bVar1) {
          if (param_6 != (Edits *)0x0) goto LAB_00101fc8;
          goto LAB_00101fef;
        }
        if (param_6 == (Edits *)0x0) goto LAB_00102010;
LAB_00102194:
        icu_76_godot::Edits::addReplace((int)param_6,uVar16);
        if (iVar18 < param_3) goto LAB_0010201b;
LAB_001021c6:
        if (iVar18 != 0x7fffffff) {
LAB_00102028:
          uVar8 = iVar18 + 1;
          if (-1 < (int)uVar8) {
            if ((uVar11 & 0x18000) != 0) {
              if ((int)uVar8 < param_3) {
                param_2[(int)uVar8] = L'̈';
              }
              else if (uVar8 == 0x7fffffff) goto LAB_001020d0;
              uVar8 = iVar18 + 2;
            }
            if (bVar23) {
              if ((int)uVar8 < param_3) {
                param_2[(int)uVar8] = L'́';
              }
              else if (uVar8 == 0x7fffffff) goto LAB_001020d0;
              uVar8 = uVar8 + 1;
            }
            pEVar13 = (Edits *)(ulong)uVar8;
            pEVar20 = pEVar13;
            iVar19 = iVar15;
            bVar1 = bVar21;
            if (0 < (int)uVar6) {
              pwVar10 = param_2 + (int)uVar8;
              do {
                iVar19 = (int)pEVar20;
                if (iVar19 < param_3) {
                  *pwVar10 = L'Ι';
                }
                else if (iVar19 == 0x7fffffff) goto LAB_001020d0;
                pEVar20 = (Edits *)(ulong)(iVar19 + 1U);
                pwVar10 = pwVar10 + 1;
                uVar11 = (uVar6 + uVar8) - (iVar19 + 1U);
                pEVar13 = (Edits *)(ulong)uVar11;
                iVar19 = iVar15;
              } while (0 < (int)uVar11);
            }
            goto LAB_00101e04;
          }
        }
        goto LAB_001020d0;
      }
      if ((uVar12 & 0x8000) == 0) goto LAB_00102100;
      if (uVar8 == 0x399) {
        uVar8 = 0x3aa;
      }
      else {
        if (uVar8 != 0x3a5) goto LAB_00102100;
        uVar8 = 0x3ab;
      }
      wVar17 = (wchar16)uVar8;
      uVar11 = 0;
      uVar12 = 0;
      if (param_6 == (Edits *)0x0) {
        bVar23 = false;
        goto LAB_001021fa;
      }
      uVar16 = iVar15 - iVar19;
      bVar23 = false;
      if (((ushort)*pwVar10 != uVar8 || 0 < (int)uVar6) || (uVar16 != uVar6 + 1)) goto LAB_00102194;
LAB_00101fc8:
      icu_76_godot::Edits::addUnchanged((int)param_6);
      pEVar13 = extraout_RDX;
LAB_00101fef:
      iVar19 = iVar15;
      bVar1 = bVar21;
      if ((param_1 & 0x4000) == 0) {
LAB_00102010:
        if (param_3 <= iVar18) goto LAB_001021c6;
LAB_0010201b:
        param_2[iVar18] = wVar17;
        goto LAB_00102028;
      }
LAB_00101e04:
      bVar3 = bVar4;
    } while (iVar19 < param_5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar20;
}



int ustrcase_internalToLower_76_godot
              (int param_1,uint param_2,undefined8 param_3,wchar16 *param_4,int param_5,
              wchar16 *param_6,uint param_7,UErrorCode *param_8,UErrorCode *param_9)

{
  int iVar1;
  long in_FS_OFFSET;
  wchar16 *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_50 = ZEXT416(param_7) << 0x40;
  local_58 = param_6;
  iVar1 = icu_76_godot::(anonymous_namespace)::toLower
                    (param_1,param_2,param_4,param_5,param_6,(UCaseContext *)&local_58,0,param_7,
                     (Edits *)param_8,param_9);
  if (*(int *)param_9 < 1) {
    if (param_5 < iVar1) {
      *(undefined4 *)param_9 = 0xf;
    }
    else if (param_8 != (UErrorCode *)0x0) {
      icu_76_godot::Edits::copyErrorTo(param_8);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ustrcase_internalToUpper_76_godot
                (int param_1,uint param_2,undefined8 param_3,wchar16 *param_4,int param_5,
                wchar16 *param_6,uint param_7,UErrorCode *param_8,UErrorCode *param_9)

{
  char cVar1;
  wchar16 wVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  short sVar18;
  long in_FS_OFFSET;
  wchar16 *local_70;
  wchar16 *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    uVar12 = icu_76_godot::GreekUpper::toUpper
                       (param_2,param_4,param_5,param_6,param_7,(Edits *)param_8,param_9);
    uVar16 = (ulong)uVar12;
    iVar17 = *(int *)param_9;
LAB_00102862:
    if (iVar17 < 1) {
      if (param_5 < (int)uVar16) {
LAB_0010278b:
        *(undefined4 *)param_9 = 0xf;
      }
      else if (param_8 != (UErrorCode *)0x0) {
        icu_76_godot::Edits::copyErrorTo(param_8);
      }
    }
LAB_001027b6:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar16 & 0xffffffff;
  }
  local_60 = ZEXT416(param_7) << 0x40;
  puVar6 = &icu_76_godot::LatinCase::TO_UPPER_TR;
  if (param_1 != 2) {
    puVar6 = &icu_76_godot::LatinCase::TO_UPPER_NORMAL;
  }
  iVar17 = 0;
  uVar16 = 0;
  local_50 = 0;
  local_68 = param_6;
  plVar7 = (long *)ucase_getTrie_76_godot();
  lVar15 = 0;
LAB_0010245b:
  iVar5 = (int)param_8;
  if (iVar17 < (int)param_7) {
    lVar13 = (long)iVar17;
    lVar8 = (ulong)(param_7 - iVar17) + lVar13;
    uVar16 = uVar16 & 0xffffffff;
    do {
      wVar2 = param_6[lVar13];
      iVar10 = (int)lVar13;
      iVar17 = iVar10 + 1;
      iVar14 = (int)lVar15;
      iVar9 = (int)uVar16;
      if ((ushort)wVar2 < 0x17f) {
        cVar1 = *(char *)((long)puVar6 + (ulong)(ushort)wVar2);
        sVar18 = (short)cVar1;
        if (cVar1 == -0x80) goto LAB_001027e8;
        if (cVar1 != '\0') {
          iVar10 = iVar10 - iVar14;
          if (iVar10 < 1) {
LAB_001025bf:
            iVar10 = iVar9;
            if (iVar9 < 0) goto LAB_001027a8;
LAB_001025c7:
            if (param_5 <= iVar10) goto LAB_0010250c;
            param_4[iVar10] = sVar18 + wVar2;
          }
          else {
LAB_001024bb:
            if (param_8 != (UErrorCode *)0x0) {
              icu_76_godot::Edits::addUnchanged(iVar5);
              lVar15 = (long)iVar14;
            }
            if ((param_2 & 0x4000) != 0) goto LAB_001025bf;
            if (0x7fffffff - iVar9 < iVar10) goto LAB_001027a8;
            iVar10 = iVar10 + iVar9;
            if (iVar10 <= param_5) {
              u_memcpy_76_godot(param_4 + iVar9,param_6 + lVar15);
              goto LAB_001025c7;
            }
LAB_0010250c:
            if (iVar10 == 0x7fffffff) {
              if (param_8 != (UErrorCode *)0x0) {
                icu_76_godot::Edits::addReplace(iVar5,1);
              }
              goto LAB_001027a8;
            }
          }
          if (param_8 != (UErrorCode *)0x0) {
            icu_76_godot::Edits::addReplace(iVar5,1);
          }
          uVar16 = (ulong)(iVar10 + 1);
          lVar15 = (long)iVar17;
        }
      }
      else {
        if (0xd7ff < (ushort)wVar2) {
          uVar12 = (uint)(ushort)wVar2;
          if ((((wVar2 & 0xfc00U) == 0xd800) && (iVar17 < (int)param_7)) &&
             (lVar15 = (long)iVar17, (param_6[lVar15] & 0xfc00U) == 0xdc00)) {
            iVar17 = iVar10 + 2;
            uVar12 = (ushort)param_6[lVar15] + 0xfca02400 + (uint)(ushort)wVar2 * 0x400;
          }
          goto LAB_0010263f;
        }
        uVar3 = *(ushort *)
                 (*plVar7 +
                 (long)(int)(((ushort)wVar2 & 0x1f) +
                            (uint)*(ushort *)(*plVar7 + (ulong)((ushort)wVar2 >> 5) * 2) * 4) * 2);
        if ((uVar3 & 8) != 0) goto LAB_001027e8;
        if (((uVar3 & 3) == 1) && (sVar18 = (short)uVar3 >> 7, sVar18 != 0)) {
          iVar10 = iVar10 - iVar14;
          if (0 < iVar10) goto LAB_001024bb;
          goto LAB_001025bf;
        }
      }
      lVar13 = lVar13 + 1;
      if (lVar8 == lVar13) {
        uVar16 = (ulong)(int)uVar16;
        break;
      }
    } while( true );
  }
  iVar17 = iVar17 - (int)lVar15;
  iVar10 = (int)uVar16;
  if (0 < iVar17) {
    if (param_8 != (UErrorCode *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar5);
      lVar15 = (long)(int)lVar15;
    }
    if ((param_2 & 0x4000) != 0) goto LAB_00102798;
    if (0x7fffffff - iVar10 < iVar17) goto LAB_001027a8;
    uVar12 = iVar10 + iVar17;
    if ((int)uVar12 <= param_5) {
      param_4 = param_4 + uVar16;
      uVar16 = (ulong)uVar12;
      u_memcpy_76_godot(param_4,param_6 + lVar15,iVar17);
      iVar17 = *(int *)param_9;
      goto LAB_00102862;
    }
    uVar16 = (ulong)uVar12;
    if (0 < *(int *)param_9) goto LAB_001027b6;
    goto LAB_0010278b;
  }
LAB_00102798:
  if (-1 < iVar10) {
    iVar17 = *(int *)param_9;
    goto LAB_00102862;
  }
LAB_001027a8:
  uVar16 = 0;
  *(undefined4 *)param_9 = 8;
  goto LAB_001027b6;
LAB_001027e8:
  uVar12 = (uint)(ushort)wVar2;
LAB_0010263f:
  local_60._12_4_ = iVar10;
  uVar16 = (ulong)iVar9;
  local_50 = CONCAT44(local_50._4_4_,iVar17);
  local_70 = (wchar16 *)0x0;
  iVar4 = ucase_toFullUpper_76_godot(uVar12,0x100000,&local_68,&local_70,param_1);
  lVar15 = (long)iVar14;
  if (iVar4 < 0) goto LAB_0010245b;
  iVar11 = iVar10 - iVar14;
  if (0 < iVar11) {
    if (param_8 != (UErrorCode *)0x0) {
      icu_76_godot::Edits::addUnchanged(iVar5);
    }
    if ((param_2 & 0x4000) == 0) {
      if (0x7fffffff - iVar9 < iVar11) goto LAB_001027a8;
      iVar9 = iVar11 + iVar9;
      if (iVar9 <= param_5) {
        u_memcpy_76_godot(param_4 + uVar16,param_6 + iVar14);
      }
      goto LAB_001026e1;
    }
  }
  if (iVar9 < 0) goto LAB_001027a8;
LAB_001026e1:
  iVar5 = icu_76_godot::(anonymous_namespace)::appendResult
                    (param_4,iVar9,param_5,iVar4,local_70,iVar17 - iVar10,param_2,(Edits *)param_8);
  uVar16 = (ulong)iVar5;
  if (iVar5 < 0) goto LAB_001027a8;
  lVar15 = (long)iVar17;
  goto LAB_0010245b;
}



undefined8
ustrcase_map_76_godot
          (undefined4 param_1,uint param_2,undefined8 param_3,ulong param_4,int param_5,
          ulong param_6,uint param_7,code *param_8,long param_9,int *param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_7;
  if (0 < *param_10) {
    return 0;
  }
  if (((-1 < param_5) && (((param_4 != 0 || (param_5 < 1)) && (param_6 != 0)))) &&
     (-2 < (int)param_7)) {
    if (param_7 == 0xffffffff) {
      uVar3 = u_strlen_76_godot(param_6);
    }
    if (param_4 != 0) {
      if (param_4 <= param_6) {
        if (param_6 < param_4 + (long)param_5 * 2) goto LAB_00102959;
        if (param_4 != param_6) goto LAB_0010299a;
      }
      if (param_4 < param_6 + (long)(int)uVar3 * 2) goto LAB_00102959;
    }
LAB_0010299a:
    if ((param_9 != 0) && ((param_2 & 0x2000) == 0)) {
      icu_76_godot::Edits::reset();
      uVar3 = uVar3 & 0xffffffff;
    }
    uVar1 = (*param_8)(param_1,param_2,param_3,param_4,param_5,param_6,uVar3,param_9,param_10);
    uVar2 = u_terminateUChars_76_godot(param_4,param_5,uVar1,param_10);
    return uVar2;
  }
LAB_00102959:
  *param_10 = 1;
  return 0;
}



undefined8
ustrcase_mapWithOverlap_76_godot
          (undefined4 param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,int param_5,
          undefined1 *param_6,int param_7,code *param_8,int *param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_288 [600];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_9 < 1) {
    if (((-1 < param_5) &&
        (((param_4 != (undefined1 *)0x0 || (param_5 < 1)) && (param_6 != (undefined1 *)0x0)))) &&
       (-2 < param_7)) {
      if (param_7 == -1) {
        param_7 = u_strlen_76_godot(param_6);
        param_2 = param_2 & 0xffffffff;
      }
      if (param_4 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
LAB_00102be2:
        iVar1 = (*param_8)(param_1,param_2,param_3,puVar3,param_5,param_6,param_7,0,param_9);
      }
      else {
        puVar3 = param_4;
        if (param_6 < param_4) {
LAB_00102b27:
          if (param_6 + (long)param_7 * 2 <= param_4) goto LAB_00102be2;
        }
        else if (param_4 + (long)param_5 * 2 <= param_6) {
          if (param_4 != param_6) goto LAB_00102be2;
          goto LAB_00102b27;
        }
        if (param_5 < 0x12d) {
          puVar3 = local_288;
          iVar1 = (*param_8)(param_1,param_2,param_3,puVar3,param_5,param_6,param_7,0,param_9);
          if (*param_9 < 1) {
LAB_00102b87:
            if ((0 < iVar1) && (iVar1 <= param_5)) {
              u_memmove_76_godot(param_4,puVar3,iVar1);
            }
            if (puVar3 != local_288) {
LAB_00102bb6:
              uprv_free_76_godot(puVar3);
            }
          }
        }
        else {
          puVar3 = (undefined1 *)uprv_malloc_76_godot((long)(param_5 * 2));
          if (puVar3 == (undefined1 *)0x0) {
            *param_9 = 7;
            goto LAB_00102acb;
          }
          iVar1 = (*param_8)(param_1,param_2 & 0xffffffff,param_3,puVar3,param_5,param_6,param_7,0,
                             param_9);
          if (param_4 != puVar3) {
            if (*param_9 < 1) goto LAB_00102b87;
            goto LAB_00102bb6;
          }
        }
      }
      uVar2 = u_terminateUChars_76_godot(param_4,param_5,iVar1,param_9);
      goto LAB_00102acd;
    }
    *param_9 = 1;
  }
LAB_00102acb:
  uVar2 = 0;
LAB_00102acd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void u_strFoldCase_76_godot
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  ustrcase_mapWithOverlap_76_godot
            (1,param_5,0,param_1,param_2,param_3,param_4,ustrcase_internalFold_76_godot,param_6);
  return;
}



/* icu_76_godot::CaseMap::fold(unsigned int, char16_t const*, int, char16_t*, int,
   icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::CaseMap::fold
               (uint param_1,wchar16 *param_2,int param_3,wchar16 *param_4,int param_5,
               Edits *param_6,UErrorCode *param_7)

{
  undefined4 in_register_00000014;
  
  ustrcase_map_76_godot
            (1,param_1,0,param_4,param_5,param_2,CONCAT44(in_register_00000014,param_3),
             ustrcase_internalFold_76_godot,param_6,param_7);
  return;
}



undefined8
u_strcmpFold_76_godot
          (wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,uint param_5,int *param_6)

{
  undefined8 uVar1;
  UErrorCode *in_stack_fffffffffffffff0;
  
  if (*param_6 < 1) {
    uVar1 = _cmpFold(param_1,param_2,param_3,param_4,param_5,(int *)0x0,(int *)0x0,
                     in_stack_fffffffffffffff0);
    return uVar1;
  }
  return 0;
}



undefined8
u_strCaseCompare_76_godot
          (wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,uint param_5,int *param_6)

{
  undefined8 uVar1;
  UErrorCode *in_stack_fffffffffffffff0;
  
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if ((param_1 != (wchar16 *)0x0) &&
       (((-2 < param_2 && (param_3 != (wchar16 *)0x0)) && (-2 < param_4)))) {
      uVar1 = _cmpFold(param_1,param_2,param_3,param_4,param_5 | 0x10000,(int *)0x0,(int *)0x0,
                       in_stack_fffffffffffffff0);
      return uVar1;
    }
    *param_6 = 1;
  }
  return 0;
}



void u_strcasecmp_76_godot(wchar16 *param_1,wchar16 *param_2,uint param_3)

{
  UErrorCode *in_stack_fffffffffffffff0;
  
  _cmpFold(param_1,-1,param_2,-1,param_3 | 0x10000,(int *)0x0,(int *)0x0,in_stack_fffffffffffffff0);
  return;
}



void u_memcasecmp_76_godot(wchar16 *param_1,wchar16 *param_2,int param_3,uint param_4)

{
  UErrorCode *in_stack_fffffffffffffff0;
  
  _cmpFold(param_1,param_3,param_2,param_3,param_4 | 0x10000,(int *)0x0,(int *)0x0,
           in_stack_fffffffffffffff0);
  return;
}



void u_strncasecmp_76_godot(wchar16 *param_1,wchar16 *param_2,int param_3,uint param_4)

{
  UErrorCode *in_stack_fffffffffffffff0;
  
  _cmpFold(param_1,param_3,param_2,param_3,param_4 | 0x11000,(int *)0x0,(int *)0x0,
           in_stack_fffffffffffffff0);
  return;
}



void u_caseInsensitivePrefixMatch_76_godot
               (wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,uint param_5,int *param_6,
               int *param_7,UErrorCode *param_8)

{
  if (*(int *)param_8 < 1) {
    _cmpFold(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}


