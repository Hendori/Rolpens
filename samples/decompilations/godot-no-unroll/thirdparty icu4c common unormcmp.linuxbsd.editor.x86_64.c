
uint unorm_compare_76_godot
               (code *param_1,int param_2,code *param_3,int param_4,uint param_5,UErrorCode *param_6
               )

{
  uint uVar1;
  uint uVar2;
  wchar16 wVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  Normalizer2 *pNVar10;
  code *pcVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  long in_FS_OFFSET;
  UnicodeString *local_250;
  UnicodeString *local_248;
  code *local_228;
  code *local_218;
  uint local_1dc;
  code *local_1d8;
  Normalizer2 *local_1d0;
  undefined8 local_1c8;
  int local_1b8 [2];
  int local_1b0 [2];
  code *local_1a8 [6];
  code *local_178 [6];
  code *local_148;
  ushort local_140;
  undefined1 local_13e [2];
  int local_13c;
  code *local_130;
  code *local_108;
  ushort local_100;
  undefined1 local_fe [2];
  int local_fc;
  code *local_f0;
  wchar16 local_c8;
  ushort local_c6;
  wchar16 local_88;
  ushort local_86;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    if ((((param_1 != (code *)0x0) && (-2 < param_2)) && (param_3 != (code *)0x0)) &&
       (lVar16 = (long)param_4, -2 < param_4)) {
      local_148 = uniset_getUnicode32Instance_76_godot;
      local_108 = uniset_getUnicode32Instance_76_godot;
      local_140 = 2;
      local_100 = 2;
      if ((param_5 & 0x20001) == 0x20000) {
LAB_001003aa:
        uVar13 = 0;
        iVar6 = icu_76_godot::Normalizer2Factory::getNFCImpl(param_6);
        if (*(int *)param_6 < 1) {
          local_228 = (code *)0x0;
          if (param_2 != -1) {
            local_228 = param_1 + (long)param_2 * 2;
          }
          pcVar18 = (code *)0x0;
          if ((int)lVar16 != -1) {
            pcVar18 = param_3 + lVar16 * 2;
          }
          uVar7 = param_5 | 0x80000;
          iVar15 = 0;
          uVar13 = 0xffffffff;
          iVar14 = 0;
          local_218 = param_1;
LAB_00100433:
          uVar17 = 0xffffffff;
          pcVar12 = param_3;
          if (uVar13 == 0xffffffff) goto LAB_00100570;
LAB_0010043d:
          if (uVar17 == 0xffffffff) goto LAB_001009ba;
          pcVar11 = param_1;
          if (uVar17 == uVar13) goto LAB_00100840;
          while( true ) {
            uVar8 = uVar13 & 0xfffff800;
            uVar1 = uVar13;
            if (uVar8 == 0xd800) {
              if ((uVar13 & 0x400) == 0) {
                if ((pcVar11 != local_228) && ((*(wchar16 *)pcVar11 & 0xfc00U) == 0xdc00)) {
                  uVar1 = (ushort)*(wchar16 *)pcVar11 + 0xfca02400 + uVar13 * 0x400;
                }
              }
              else if ((local_218 <= pcVar11 + -4) &&
                      (((ushort)*(wchar16 *)(pcVar11 + -4) & 0xfffffc00) == 0xd800)) {
                uVar1 = uVar13 + 0xfca02400 + (uint)(ushort)*(wchar16 *)(pcVar11 + -4) * 0x400;
              }
            }
            uVar9 = uVar17 & 0xfffff800;
            uVar2 = uVar17;
            if (uVar9 == 0xd800) {
              if ((uVar17 & 0x400) == 0) {
                if ((pcVar18 != param_3) && ((*(wchar16 *)param_3 & 0xfc00U) == 0xdc00)) {
                  uVar2 = (ushort)*(wchar16 *)param_3 + 0xfca02400 + uVar17 * 0x400;
                }
              }
              else if ((pcVar12 <= param_3 + -4) &&
                      (((ushort)*(wchar16 *)(param_3 + -4) & 0xfffffc00) == 0xd800)) {
                uVar2 = uVar17 + 0xfca02400 + (uint)(ushort)*(wchar16 *)(param_3 + -4) * 0x400;
              }
            }
            if (iVar14 != 0) break;
            if ((param_5 & 0x10000) == 0) {
              if (iVar15 == 0) {
LAB_001004a8:
                param_1 = (code *)icu_76_godot::Normalizer2Impl::getDecomposition
                                            (iVar6,(wchar16 *)(ulong)uVar1,local_1b8);
                local_1d8 = param_1;
                if (param_1 == (code *)0x0) goto LAB_00100797;
              }
              else {
LAB_00100a48:
                param_1 = (code *)icu_76_godot::Normalizer2Impl::getDecomposition
                                            (iVar6,(wchar16 *)(ulong)uVar1,local_1b8);
                local_1d8 = param_1;
                if (param_1 == (code *)0x0) goto LAB_00100862;
              }
              if (uVar8 == 0xd800) {
                if ((uVar13 & 0x400) == 0) {
                  pcVar11 = pcVar11 + 2;
                }
                else {
                  uVar17 = (uint)(ushort)*(wchar16 *)(param_3 + -4);
                  param_3 = param_3 + -2;
                }
              }
              lVar16 = (long)iVar14;
              local_1a8[lVar16 * 3 + 1] = pcVar11;
              local_1a8[lVar16 * 3] = local_218;
              local_1a8[lVar16 * 3 + 2] = local_228;
              iVar4 = iVar14 + 1;
              if (iVar14 == 1) {
                iVar14 = 2;
              }
              else {
                iVar14 = iVar14 + 2;
                local_1a8[(long)iVar4 * 3] = (code *)0x0;
              }
              uVar13 = 0xffffffff;
              local_228 = param_1 + (long)(int)local_1dc * 2;
              local_218 = param_1;
              local_1d8 = param_1;
            }
            else {
              local_1dc = ucase_toFullFolding_76_godot(uVar1,&local_1d8,uVar7);
              if ((int)local_1dc < 0) {
                if (iVar15 != 0) goto LAB_00100a48;
                local_1dc = ucase_toFullFolding_76_godot(uVar2,&local_1d8,uVar7);
                if (-1 < (int)local_1dc) goto LAB_00100b88;
                goto LAB_001004a8;
              }
              if (uVar8 == 0xd800) {
                if ((uVar13 & 0x400) == 0) {
                  pcVar11 = pcVar11 + 2;
                }
                else {
                  uVar17 = (uint)(ushort)*(wchar16 *)(param_3 + -4);
                  param_3 = param_3 + -2;
                }
              }
              local_1a8[1] = pcVar11;
              local_1a8[0] = local_218;
              local_1a8[2] = local_228;
              if ((int)local_1dc < 0x20) {
                u_memcpy_76_godot(&local_c8,local_1d8,local_1dc);
                lVar16 = (long)(int)local_1dc * 2;
              }
              else {
                local_c8 = (wchar16)local_1dc;
                if (local_1dc < 0x10000) {
                  lVar16 = 2;
                  local_1dc = 1;
                }
                else {
                  lVar16 = 4;
                  local_c6 = local_c8 & 0x3ffU | 0xdc00;
                  local_c8 = (short)((int)local_1dc >> 10) + L'ퟀ';
                  local_1dc = 2;
                }
              }
              param_1 = (code *)&local_c8;
              local_228 = param_1 + lVar16;
              uVar13 = 0xffffffff;
              iVar14 = 1;
              local_218 = param_1;
            }
LAB_00100570:
            while( true ) {
              while( true ) {
                if ((param_1 != local_228) &&
                   ((wVar3 = *(wchar16 *)param_1, wVar3 != L'\0' ||
                    ((local_228 != (code *)0x0 && ((param_5 & 0x1000) == 0)))))) {
                  param_1 = param_1 + 2;
                  uVar13 = (uint)(ushort)wVar3;
                  goto LAB_0010043d;
                }
                if (iVar14 == 0) break;
                lVar16 = (long)(iVar14 + -1);
                local_218 = local_1a8[lVar16 * 3];
                iVar4 = iVar14 + -1;
                if (local_218 == (code *)0x0) {
                  lVar16 = (long)(iVar14 + -2);
                  local_218 = local_1a8[lVar16 * 3];
                  iVar4 = iVar14 + -2;
                }
                iVar14 = iVar4;
                param_1 = local_1a8[lVar16 * 3 + 1];
                local_228 = local_1a8[lVar16 * 3 + 2];
              }
              if (uVar17 != 0xffffffff) goto LAB_0010061d;
              uVar13 = 0xffffffff;
LAB_001009ba:
              while ((param_3 == pcVar18 ||
                     ((uVar17 = (uint)(ushort)*(wchar16 *)param_3, *(wchar16 *)param_3 == L'\0' &&
                      ((pcVar18 == (code *)0x0 || ((param_5 & 0x1000) != 0))))))) {
                if (iVar15 == 0) {
                  uVar13 = (uint)(uVar13 != 0xffffffff);
                  goto LAB_0010061d;
                }
                lVar16 = (long)(iVar15 + -1);
                pcVar12 = local_178[lVar16 * 3];
                iVar4 = iVar15 + -1;
                if (pcVar12 == (code *)0x0) {
                  lVar16 = (long)(iVar15 + -2);
                  pcVar12 = local_178[lVar16 * 3];
                  iVar4 = iVar15 + -2;
                }
                iVar15 = iVar4;
                param_3 = local_178[lVar16 * 3 + 1];
                pcVar18 = local_178[lVar16 * 3 + 2];
              }
              param_3 = param_3 + 2;
              if (uVar17 != uVar13) break;
LAB_00100840:
              uVar17 = 0xffffffff;
              uVar13 = 0xffffffff;
            }
            pcVar11 = param_1;
            if (uVar13 == 0xffffffff) goto LAB_0010061d;
          }
          if (iVar15 == 0) {
            if (((param_5 & 0x10000) == 0) ||
               (local_1dc = ucase_toFullFolding_76_godot(uVar2,&local_1d8,uVar7), (int)local_1dc < 0
               )) {
              if (iVar14 < 2) goto LAB_001004a8;
LAB_00100797:
              local_1d8 = (code *)icu_76_godot::Normalizer2Impl::getDecomposition
                                            (iVar6,(wchar16 *)(ulong)uVar2,local_1b0);
              if (local_1d8 == (code *)0x0) goto LAB_00100870;
              if (uVar9 == 0xd800) {
                if ((uVar17 & 0x400) == 0) {
                  param_3 = param_3 + 2;
                }
                else {
                  uVar13 = (uint)(ushort)*(wchar16 *)(pcVar11 + -4);
                  pcVar11 = pcVar11 + -2;
                }
              }
              lVar16 = (long)iVar15;
              local_178[lVar16 * 3] = pcVar12;
              local_178[lVar16 * 3 + 1] = param_3;
              local_178[lVar16 * 3 + 2] = pcVar18;
              iVar4 = iVar15 + 1;
              if (iVar15 == 1) {
                iVar15 = 2;
              }
              else {
                iVar15 = iVar15 + 2;
                local_178[(long)iVar4 * 3] = (code *)0x0;
              }
              pcVar18 = local_1d8 + (long)(int)local_1dc * 2;
              param_1 = pcVar11;
              param_3 = local_1d8;
            }
            else {
LAB_00100b88:
              param_1 = pcVar11;
              if (uVar9 == 0xd800) {
                if ((uVar17 & 0x400) == 0) {
                  param_3 = param_3 + 2;
                }
                else {
                  uVar13 = (uint)(ushort)*(wchar16 *)(pcVar11 + -4);
                  param_1 = pcVar11 + -2;
                }
              }
              local_178[0] = pcVar12;
              local_178[1] = param_3;
              local_178[2] = pcVar18;
              if ((int)local_1dc < 0x20) {
                u_memcpy_76_godot(&local_88,local_1d8,local_1dc);
                lVar16 = (long)(int)local_1dc * 2;
              }
              else {
                local_88 = (wchar16)local_1dc;
                if ((int)local_1dc < 0x10000) {
                  lVar16 = 2;
                  local_1dc = 1;
                }
                else {
                  lVar16 = 4;
                  local_86 = local_88 & 0x3ffU | 0xdc00;
                  local_88 = (short)((int)local_1dc >> 10) + L'ퟀ';
                  local_1dc = 2;
                }
              }
              param_3 = (code *)&local_88;
              pcVar18 = param_3 + lVar16;
              iVar15 = 1;
            }
            goto LAB_00100433;
          }
          if (iVar14 < 2) goto LAB_00100a48;
LAB_00100862:
          if (iVar15 < 2) goto LAB_00100797;
LAB_00100870:
          if (((0xd7ff < (int)uVar13) && (0xd7ff < (int)uVar17)) && ((param_5 & 0x8000) != 0)) {
            if (((int)uVar13 < 0xdc00) && (pcVar11 != local_228)) {
              if ((*(wchar16 *)pcVar11 & 0xfc00U) != 0xdc00) {
LAB_001008c5:
                uVar13 = uVar13 - 0x2800;
              }
            }
            else if (((uVar13 & 0xfffffc00) != 0xdc00) ||
                    ((local_218 == pcVar11 + -2 ||
                     ((*(wchar16 *)(pcVar11 + -4) & 0xfc00U) != 0xd800)))) goto LAB_001008c5;
            if (((int)uVar17 < 0xdc00) && (pcVar18 != param_3)) {
              if ((*(wchar16 *)param_3 & 0xfc00U) != 0xdc00) {
LAB_001008f4:
                uVar17 = uVar17 - 0x2800;
              }
            }
            else if (((uVar17 & 0xfffffc00) != 0xdc00) ||
                    ((pcVar12 == param_3 + -2 || ((*(wchar16 *)(param_3 + -4) & 0xfc00U) != 0xd800))
                    )) goto LAB_001008f4;
          }
          uVar13 = uVar13 - uVar17;
        }
      }
      else {
        if ((param_5 & 1) == 0) {
          pNVar10 = (Normalizer2 *)icu_76_godot::Normalizer2Factory::getFCDInstance(param_6);
        }
        else {
          pNVar10 = (Normalizer2 *)icu_76_godot::Normalizer2::getNFDInstance(param_6);
        }
        if (*(int *)param_6 < 1) {
          if ((param_5 & 0x2000000) == 0) {
            cVar5 = _normalize(pNVar10,(wchar16 *)param_1,param_2,(UnicodeString *)&local_148,
                               param_6);
            if (cVar5 != '\0') {
              if ((local_140 & 0x11) == 0) {
                param_1 = (code *)local_13e;
                if ((local_140 & 2) == 0) {
                  param_1 = local_130;
                }
              }
              else {
                param_1 = (code *)0x0;
              }
              param_2 = local_13c;
              if (-1 < (short)local_140) {
                param_2 = (int)((short)local_140 >> 5);
              }
            }
            cVar5 = _normalize(pNVar10,(wchar16 *)param_3,param_4,(UnicodeString *)&local_108,
                               param_6);
            if (cVar5 != '\0') {
              if ((local_100 & 0x11) == 0) {
                param_3 = (code *)local_fe;
                if ((local_100 & 2) == 0) {
                  param_3 = local_f0;
                }
              }
              else {
                param_3 = (code *)0x0;
              }
              if ((short)local_100 < 0) {
                lVar16 = (long)local_fc;
              }
              else {
                lVar16 = (long)((short)local_100 >> 5);
              }
            }
          }
          else {
            local_1c8 = uniset_getUnicode32Instance_76_godot(param_6);
            local_1d8 = icu_76_godot::Normalizer2Factory::getNFCImpl;
            local_1d0 = pNVar10;
            cVar5 = _normalize((Normalizer2 *)&local_1d8,(wchar16 *)param_1,param_2,
                               (UnicodeString *)&local_148,param_6);
            if (cVar5 != '\0') {
              if ((local_140 & 0x11) == 0) {
                param_1 = (code *)local_13e;
                if ((local_140 & 2) == 0) {
                  param_1 = local_130;
                }
              }
              else {
                param_1 = (code *)0x0;
              }
              param_2 = local_13c;
              if (-1 < (short)local_140) {
                param_2 = (int)((short)local_140 >> 5);
              }
            }
            cVar5 = _normalize((Normalizer2 *)&local_1d8,(wchar16 *)param_3,param_4,
                               (UnicodeString *)&local_108,param_6);
            if (cVar5 != '\0') {
              if ((local_100 & 0x11) == 0) {
                param_3 = (code *)local_fe;
                if ((local_100 & 2) == 0) {
                  param_3 = local_f0;
                }
              }
              else {
                param_3 = (code *)0x0;
              }
              if ((short)local_100 < 0) {
                lVar16 = (long)local_fc;
              }
              else {
                lVar16 = (long)((short)local_100 >> 5);
              }
            }
            icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2
                      ((FilteredNormalizer2 *)&local_1d8);
          }
          if (*(int *)param_6 < 1) goto LAB_001003aa;
        }
        uVar13 = 0;
      }
LAB_0010061d:
      local_248 = (UnicodeString *)&local_108;
      local_250 = (UnicodeString *)&local_148;
      icu_76_godot::UnicodeString::~UnicodeString(local_248);
      icu_76_godot::UnicodeString::~UnicodeString(local_250);
      goto LAB_0010035a;
    }
    *(undefined4 *)param_6 = 1;
  }
  uVar13 = 0;
LAB_0010035a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}


