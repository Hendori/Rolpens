
mbstate_t vasnprintf(mbstate_t param_1,mbstate_t *param_2,mbstate_t param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  unkbyte10 Var3;
  char cVar4;
  undefined1 uVar5;
  mbstate_t *pmVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  mbstate_t mVar10;
  mbstate_t mVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  mbstate_t mVar15;
  mbstate_t mVar16;
  mbstate_t mVar17;
  mbstate_t mVar18;
  mbstate_t mVar19;
  ulong uVar20;
  mbstate_t mVar21;
  mbstate_t mVar22;
  mbstate_t mVar23;
  char *pcVar24;
  mbstate_t mVar25;
  ulong uVar26;
  char *pcVar27;
  mbstate_t *pmVar28;
  mbstate_t *pmVar29;
  mbstate_t *pmVar30;
  char *pcVar32;
  wchar_t wVar33;
  uint uVar34;
  int iVar35;
  mbstate_t mVar36;
  int iVar37;
  mbstate_t mVar38;
  size_t sVar39;
  long lVar40;
  mbstate_t mVar41;
  mbstate_t mVar42;
  long in_FS_OFFSET;
  mbstate_t local_4a8;
  mbstate_t local_4a0;
  mbstate_t local_498;
  mbstate_t local_490;
  mbstate_t local_488;
  undefined1 *local_480;
  ulong local_478;
  mbstate_t *local_470;
  long local_468;
  ulong local_460;
  mbstate_t local_458;
  undefined1 *local_450;
  mbstate_t local_448;
  mbstate_t local_440;
  mbstate_t local_438;
  mbstate_t local_430;
  int local_424;
  undefined8 local_420;
  undefined8 local_418;
  mbstate_t local_410;
  undefined1 local_408 [8];
  undefined1 *local_400;
  undefined1 local_3f8 [224];
  long local_318;
  mbstate_t local_310;
  long local_308;
  ulong local_300;
  undefined1 local_2f8 [624];
  char local_88 [72];
  long local_40;
  mbstate_t *pmVar31;
  
  pmVar29 = &local_4a8;
  pmVar31 = &local_4a8;
  pmVar30 = &local_4a8;
  pmVar28 = &local_4a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_470 = param_2;
  local_438 = param_3;
  local_430 = param_1;
  iVar8 = printf_parse(param_3,&local_318,local_408);
  pmVar6 = &local_4a8;
  if (-1 < iVar8) {
    iVar8 = printf_fetchargs(param_4,local_408);
    if (iVar8 < 0) {
      piVar12 = __errno_location();
      *piVar12 = 0x16;
    }
    else {
      uVar9 = local_308 + 7;
      if (((6 < uVar9) && (local_478 = local_300 + uVar9, !CARRY8(local_300,uVar9))) &&
         (local_460 = local_478 + 6, local_478 < 0xfffffffffffffffa)) {
        if (local_460 < 4000) {
          pmVar28 = &local_4a8;
          while (pmVar31 !=
                 (mbstate_t *)((long)&local_4a8 - (local_478 + 0x1d & 0xfffffffffffff000))) {
            pmVar30 = (mbstate_t *)((long)pmVar28 + -0x1000);
            *(undefined8 *)((long)pmVar28 + -8) = *(undefined8 *)((long)pmVar28 + -8);
            pmVar31 = (mbstate_t *)((long)pmVar28 + -0x1000);
            pmVar28 = (mbstate_t *)((long)pmVar28 + -0x1000);
          }
          uVar9 = (ulong)((uint)(local_478 + 0x1d) & 0xff0);
          lVar40 = -uVar9;
          pmVar29 = (mbstate_t *)((long)pmVar30 + lVar40);
          if (uVar9 != 0) {
            *(undefined8 *)((long)pmVar30 + -8) = *(undefined8 *)((long)pmVar30 + -8);
          }
          local_480 = (undefined1 *)0x0;
          local_450 = (undefined1 *)((ulong)((long)pmVar30 + lVar40 + 0xf) & 0xfffffffffffffff0);
          puVar7 = local_480;
LAB_001000f0:
          local_480 = puVar7;
          mVar21.__count = 0;
          mVar21.__value = (_union_27)0x0;
          if (local_430 != (mbstate_t)0x0) {
            mVar21 = *local_470;
          }
          mVar10.__count = 0;
          mVar10.__value = (_union_27)0x0;
          local_468 = 0;
          mVar11 = *(mbstate_t *)local_310;
          mVar15 = mVar10;
          mVar16 = local_438;
          mVar22 = local_430;
          mVar42 = local_310;
          if (mVar11 == local_438) goto LAB_001001d8;
          do {
            uVar9 = (long)mVar11 - (long)mVar16;
            mVar10 = (mbstate_t)((long)mVar15 + uVar9);
            mVar11 = mVar22;
            if (CARRY8((ulong)mVar15,uVar9)) {
              if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
              mVar10.__count = -1;
              mVar10.__value = (_union_27)0xffffffff;
            }
            else if ((ulong)mVar21 < (ulong)mVar10) {
              if (mVar21 == (mbstate_t)0x0) {
                mVar11.__count = 0xc;
                mVar11.__value = (_union_27)0x0;
              }
              else {
                if ((long)mVar21 < 0) goto LAB_00100c07;
                mVar11 = (mbstate_t)((long)mVar21 * 2);
              }
              mVar21 = mVar10;
              if ((ulong)mVar10 <= (ulong)mVar11) {
                mVar21 = mVar11;
              }
              if (mVar21 != (mbstate_t)0xffffffffffffffff) {
                local_448 = mVar16;
                local_440 = mVar15;
                if (mVar22 == local_430) {
                  *(undefined8 *)((long)pmVar29 + -8) = 0x100f38;
                  mVar11 = (mbstate_t)malloc((size_t)mVar21);
                  mVar18 = local_430;
                  mVar15 = local_440;
                  local_438 = mVar11;
                  if (mVar11 != (mbstate_t)0x0) {
                    mVar16 = local_448;
                    if (local_440 != (mbstate_t)0x0) {
                      *(undefined8 *)((long)pmVar29 + -8) = 0x100f86;
                      __memcpy_chk(mVar11,mVar18,mVar15,mVar21);
                      mVar15 = local_440;
                      mVar16 = local_448;
                      mVar11 = local_438;
                    }
                    goto LAB_001001c2;
                  }
                }
                else {
                  *(undefined8 *)((long)pmVar29 + -8) = 0x1001a4;
                  mVar11 = (mbstate_t)realloc((void *)mVar22,(size_t)mVar21);
                  mVar15 = local_440;
                  mVar16 = local_448;
                  local_438 = mVar11;
                  if (mVar11 != (mbstate_t)0x0) goto LAB_001001c2;
                }
              }
LAB_00100c07:
              *(undefined8 *)((long)pmVar29 + -8) = 0x100c0c;
              local_438 = (mbstate_t)__errno_location();
LAB_00100ab5:
              *(wchar_t *)local_438 = L'\f';
LAB_001008e0:
              if (mVar22 != local_430) {
                *(undefined8 *)((long)pmVar29 + -8) = 0x1008f4;
                free((void *)mVar22);
              }
              puVar7 = local_480;
              pmVar28 = pmVar29;
              if (local_480 != (undefined1 *)0x0) {
                *(undefined8 *)((long)pmVar29 + -8) = 0x10090c;
                free(puVar7);
              }
              goto LAB_00100613;
            }
LAB_001001c2:
            local_438 = mVar11;
            pvVar1 = (void *)((long)local_438 + (long)mVar15);
            *(undefined8 *)((long)pmVar29 + -8) = 0x1001d8;
            memcpy(pvVar1,(void *)mVar16,uVar9);
            mVar22 = local_438;
LAB_001001d8:
            do {
              local_438 = mVar22;
              mVar22 = local_438;
              if (local_318 == local_468) {
                mVar11 = (mbstate_t)((long)mVar10 + 1);
                mVar16 = local_438;
                if ((ulong)mVar10 < 0xffffffffffffffff) {
                  if ((ulong)mVar21 < (ulong)mVar11) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar11) goto LAB_00101e84;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100c07;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar11) {
LAB_00101e84:
                        mVar21 = mVar11;
                        if (mVar11 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                      }
                    }
                    if (local_438 == local_430) {
                      *(undefined8 *)((long)pmVar29 + -8) = 0x101ed8;
                      mVar16 = (mbstate_t)malloc((size_t)mVar21);
                      mVar22 = local_430;
                      if (mVar16 == (mbstate_t)0x0) {
LAB_001020f5:
                        *(undefined8 *)((long)pmVar29 + -8) = 0x1020fa;
                        local_438 = (mbstate_t)__errno_location();
                        mVar22 = local_430;
                        goto LAB_00100ab5;
                      }
                      if (mVar10 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101efb;
                        mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar22,mVar10,mVar21);
                      }
                    }
                    else {
                      *(undefined8 *)((long)pmVar29 + -8) = 0x101945;
                      mVar16 = (mbstate_t)realloc((void *)mVar22,(size_t)mVar21);
                      if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                    }
                  }
                }
                else if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                *(undefined1 *)((long)mVar16 + (long)mVar10) = 0;
                if (((ulong)mVar11 < (ulong)mVar21) && (mVar16 != local_430)) {
                  mVar22.__count = 1;
                  mVar22.__value = (_union_27)0x0;
                  if (mVar11 != (mbstate_t)0x0) {
                    mVar22 = mVar11;
                  }
                  *(undefined8 *)((long)pmVar29 + -8) = 0x10197e;
                  mVar21 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar22);
                  if (mVar21 != (mbstate_t)0x0) {
                    mVar16 = mVar21;
                  }
                }
                puVar7 = local_480;
                if (local_480 != (undefined1 *)0x0) {
                  *(undefined8 *)((long)pmVar29 + -8) = 0x101999;
                  free(puVar7);
                }
                if (local_310 != (mbstate_t)local_2f8) {
                  *(undefined8 *)((long)pmVar29 + -8) = 0x1019b1;
                  free((void *)local_310);
                }
                if (local_400 != local_3f8) {
                  *(undefined8 *)((long)pmVar29 + -8) = 0x1019c9;
                  free(local_400);
                }
                *local_470 = mVar10;
                goto LAB_00100646;
              }
              cVar4 = *(char *)((long)mVar42 + 0x48);
              lVar40 = *(long *)((long)mVar42 + 0x50);
              if (cVar4 == '%') {
                if (lVar40 != -1) goto LAB_00102112;
                mVar15 = (mbstate_t)((long)mVar10 + 1);
                mVar11 = local_438;
                if ((ulong)mVar10 < 0xffffffffffffffff) {
                  if ((ulong)mVar21 < (ulong)mVar15) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar18.__count = 0xc;
                      mVar18.__value = (_union_27)0x0;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100c07;
                      mVar18 = (mbstate_t)((long)mVar21 * 2);
                    }
                    mVar21 = mVar15;
                    if ((ulong)mVar15 <= (ulong)mVar18) {
                      mVar21 = mVar18;
                    }
                    if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                    if (local_438 == local_430) {
                      local_438 = mVar15;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x1016ec;
                      mVar11 = (mbstate_t)malloc((size_t)mVar21);
                      mVar16 = local_430;
                      if (mVar11 == (mbstate_t)0x0) goto LAB_001020f5;
                      mVar15 = local_438;
                      if (mVar10 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x10171d;
                        mVar11 = (mbstate_t)__memcpy_chk(mVar11,mVar16,mVar10,mVar21);
                        mVar15 = local_438;
                      }
                    }
                    else {
                      local_440 = mVar15;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x100c58;
                      mVar11 = (mbstate_t)realloc((void *)mVar22,(size_t)mVar21);
                      mVar15 = local_440;
                      mVar22 = local_438;
                      if (mVar11 == (mbstate_t)0x0) goto LAB_00100c07;
                    }
                  }
                }
                else {
                  if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                  mVar15.__count = -1;
                  mVar15.__value = (_union_27)0xffffffff;
                }
                local_438 = mVar11;
                *(undefined1 *)((long)local_438 + (long)mVar10) = 0x25;
                mVar10 = mVar15;
                mVar22 = local_438;
                goto LAB_00100c79;
              }
              if ((lVar40 == -1) || (cVar4 == 'n')) goto LAB_00102112;
              wVar33 = *(wchar_t *)((long)mVar42 + 0x10);
              uVar9 = (ulong)(uint)wVar33;
              piVar12 = (int *)(local_400 + lVar40 * 0x20);
              local_440.__count = *piVar12;
              if (cVar4 == 's') {
                pcVar27 = *(char **)((long)mVar42 + 0x18);
                pcVar32 = *(char **)((long)mVar42 + 0x20);
                if (*piVar12 == 0x20) {
                  if (pcVar27 == pcVar32) {
                    mVar36.__count = 0;
                    mVar36.__value = (_union_27)0x0;
                    iVar8 = 0;
                  }
                  else {
                    if (*(long *)((long)mVar42 + 0x28) == -1) {
                      mVar36.__count = 0;
                      mVar36.__value = (_union_27)0x0;
                      do {
                        cVar4 = *pcVar27;
                        pcVar27 = pcVar27 + 1;
                        uVar26 = (ulong)(cVar4 + -0x30);
                        if ((ulong)mVar36 < 0x199999999999999a) {
                          uVar13 = (long)mVar36 * 10;
                        }
                        else {
                          uVar13 = 0xffffffffffffffff;
                        }
                        while (mVar36 = (mbstate_t)(uVar13 + uVar26), CARRY8(uVar13,uVar26)) {
                          if (pcVar27 == pcVar32) goto LAB_001018a7;
                          cVar4 = *pcVar27;
                          pcVar27 = pcVar27 + 1;
                          uVar26 = (ulong)(cVar4 + -0x30);
                          uVar13 = 0xffffffffffffffff;
                        }
                      } while (pcVar27 != pcVar32);
                    }
                    else {
                      if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) != 5)
                      goto LAB_00102112;
                      iVar8 = *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) +
                                      0x10);
                      mVar36 = (mbstate_t)(long)iVar8;
                      if (iVar8 < 0) {
                        uVar9 = (ulong)(uint)(wVar33 | 2);
                        mVar36 = (mbstate_t)-(long)mVar36;
                      }
                    }
                    if (0x7fffffff < (ulong)mVar36) {
LAB_001018a7:
                      *(undefined8 *)((long)pmVar29 + -8) = 0x1018ac;
                      mVar21 = (mbstate_t)__errno_location();
                      mVar22 = local_438;
                      local_438 = mVar21;
LAB_0010107b:
                      *(wchar_t *)local_438 = L'K';
                      goto LAB_001008e0;
                    }
                    iVar8 = 1;
                  }
                  pcVar27 = *(char **)((long)mVar42 + 0x38);
                  iVar35 = (int)uVar9;
                  if (*(char **)((long)mVar42 + 0x30) == pcVar27) {
                    mVar11 = *(mbstate_t *)(piVar12 + 4);
LAB_00101835:
                    if (iVar8 != 0) {
                      local_410.__count = 0;
                      local_410.__value = (_union_27)0x0;
                      wVar33 = *(wchar_t *)mVar11;
                      mVar41.__count = 0;
                      mVar41.__value = (_union_27)0x0;
                      mVar16 = mVar11;
                      if (wVar33 != L'\0') {
                        local_448.__count = iVar35;
                        local_458.__count = iVar8;
                        local_498 = mVar10;
                        local_490 = mVar11;
                        local_488 = mVar36;
                        local_440 = mVar42;
                        do {
                          *(undefined8 *)((long)pmVar29 + -8) = 0x101d7f;
                          sVar39 = wcrtomb(local_88,wVar33,&local_410);
                          if ((int)sVar39 < 0) goto LAB_00101d83;
                          wVar33 = *(wchar_t *)((long)mVar11 + 4);
                          mVar11 = (mbstate_t)((long)mVar11 + 4);
                          mVar41 = (mbstate_t)((long)mVar41 + (long)(int)sVar39);
                        } while (wVar33 != L'\0');
                        uVar9 = (ulong)local_448 & 0xffffffff;
                        mVar10 = local_498;
                        mVar36 = local_488;
                        mVar16 = local_490;
                        mVar42 = local_440;
                        iVar8 = local_458.__count;
                      }
                      local_448 = mVar11;
                      iVar35 = 0;
                      goto LAB_00101358;
                    }
                    iVar37 = 0;
                    local_458 = (mbstate_t)((ulong)local_458.__value.__wch << 0x20);
                    local_440.__count = iVar35;
                    local_488 = mVar36;
                    *(undefined8 *)((long)pmVar29 + -8) = 0x10185e;
                    sVar39 = wcslen((wchar_t *)mVar11);
                    uVar9 = (ulong)local_440 & 0xffffffff;
                    mVar41.__count = 0;
                    mVar41.__value = (_union_27)0x0;
                    local_448 = (mbstate_t)((long)mVar11 + sVar39 * 4);
                    mVar36 = local_488;
                    iVar8 = local_458.__count;
LAB_00101882:
                    uVar34 = (uint)uVar9;
                    local_458.__count = 0;
                    local_458.__value = (_union_27)0x0;
                    if (mVar36 != (mbstate_t)0x0) {
LAB_00101368:
                      mVar16 = local_438;
                      uVar34 = (uint)uVar9;
                      if ((uVar9 & 2) == 0) {
                        local_488 = (mbstate_t)((long)mVar36 - (long)local_458);
                        local_440 = (mbstate_t)((long)local_488 + (long)mVar10);
                        mVar22 = local_438;
                        if (CARRY8((ulong)local_488,(ulong)mVar10)) {
                          if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                        }
                        else if ((ulong)mVar21 < (ulong)local_440) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar21.__count = 0xc;
                            mVar21.__value = (_union_27)0x0;
                            if (0xc < (ulong)local_440) goto LAB_00101eb6;
                          }
                          else {
                            if ((long)mVar21 < 0) goto LAB_00100c07;
                            mVar21 = (mbstate_t)((long)mVar21 * 2);
                            if ((ulong)mVar21 < (ulong)local_440) {
LAB_00101eb6:
                              mVar21 = local_440;
                              if (local_440 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                            }
                          }
                          if (local_438 == local_430) {
                            local_490.__count = iVar8;
                            local_438.__count = uVar34;
                            local_4a0 = mVar41;
                            local_498 = mVar36;
                            *(undefined8 *)((long)pmVar29 + -8) = 0x101f34;
                            mVar16 = (mbstate_t)malloc((size_t)mVar21);
                            mVar22 = local_430;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_001020f5;
                            mVar41 = local_4a0;
                            mVar36 = local_498;
                            iVar8 = local_490.__count;
                            uVar34 = local_438.__count;
                            if (mVar10 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar29 + -8) = 0x101f8f;
                              mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar22,mVar10,mVar21);
                              mVar41 = local_4a0;
                              mVar36 = local_498;
                              iVar8 = local_490.__count;
                              uVar34 = local_438.__count;
                            }
                          }
                          else {
                            local_498.__count = iVar8;
                            local_490.__count = uVar34;
                            local_4a8 = mVar41;
                            local_4a0 = mVar36;
                            *(undefined8 *)((long)pmVar29 + -8) = 0x101400;
                            mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                            mVar41 = local_4a8;
                            mVar36 = local_4a0;
                            iVar8 = local_498.__count;
                            uVar34 = local_490.__count;
                            if (mVar16 == (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar29 + -8) = 0x1020e2;
                              mVar21 = (mbstate_t)__errno_location();
                              mVar22 = local_438;
                              local_438 = mVar21;
                              goto LAB_00100ab5;
                            }
                          }
                        }
                        local_438 = mVar16;
                        mVar16 = local_488;
                        pvVar1 = (void *)((long)local_438 + (long)mVar10);
                        local_498.__count = iVar8;
                        local_490.__count = uVar34;
                        local_4a8 = mVar41;
                        local_4a0 = mVar36;
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101464;
                        memset(pvVar1,0x20,(size_t)mVar16);
                        mVar10 = local_440;
                        mVar41 = local_4a8;
                        mVar36 = local_4a0;
                        iVar8 = local_498.__count;
                        uVar34 = local_490.__count;
                      }
                    }
                    if (iVar8 != 0 || iVar37 != 0) goto LAB_00101490;
                    local_488 = (mbstate_t)&local_418;
                    local_418 = 0;
                    mVar16 = local_438;
                    if ((ulong)mVar11 < (ulong)local_448) {
                      local_440 = (mbstate_t)local_88;
                      local_4a0.__count = uVar34;
                      local_4a8 = mVar36;
                      local_498 = mVar42;
                      do {
                        mVar22 = local_440;
                        mVar16 = local_488;
                        wVar33 = *(wchar_t *)mVar11;
                        if (wVar33 == L'\0') goto LAB_00102112;
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101c35;
                        sVar39 = wcrtomb((char *)mVar22,wVar33,(mbstate_t *)mVar16);
                        mVar16 = local_438;
                        if ((int)sVar39 < 1) goto LAB_00101d83;
                        uVar9 = (ulong)(int)sVar39;
                        mVar15 = (mbstate_t)(uVar9 + (long)mVar10);
                        mVar22 = local_438;
                        local_490 = mVar15;
                        if (CARRY8(uVar9,(ulong)mVar10)) {
                          if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                        }
                        else if ((ulong)mVar21 < (ulong)mVar15) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar21.__count = 0xc;
                            mVar21.__value = (_union_27)0x0;
                            if (0xc < (ulong)mVar15) goto LAB_00101c6f;
                          }
                          else {
                            if ((long)mVar21 < 0) goto LAB_00100c07;
                            mVar21 = (mbstate_t)((long)mVar21 * 2);
                            if ((ulong)mVar21 < (ulong)mVar15) {
LAB_00101c6f:
                              mVar21 = mVar15;
                              if (mVar15 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                            }
                          }
                          if (local_438 == local_430) {
                            *(undefined8 *)((long)pmVar29 + -8) = 0x101c89;
                            mVar16 = (mbstate_t)malloc((size_t)mVar21);
                            mVar42 = local_430;
                            mVar22 = local_438;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                            if (mVar10 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar29 + -8) = 0x101cac;
                              mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar42,mVar10,mVar21);
                            }
                          }
                          else {
                            *(undefined8 *)((long)pmVar29 + -8) = 0x101bd5;
                            mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                            mVar22 = local_438;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                          }
                        }
                        local_438 = mVar16;
                        mVar16 = local_440;
                        mVar11 = (mbstate_t)((long)mVar11 + 4);
                        pvVar1 = (void *)((long)local_438 + (long)mVar10);
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101c03;
                        memcpy(pvVar1,(void *)mVar16,uVar9);
                        mVar10 = mVar15;
                      } while ((ulong)mVar11 < (ulong)local_448);
                      mVar10 = local_490;
                      mVar36 = local_4a8;
                      mVar16 = local_438;
                      mVar42 = local_498;
                      uVar34 = local_4a0.__count;
                    }
                  }
                  else {
                    if (*(long *)((long)mVar42 + 0x40) == -1) {
                      pcVar32 = *(char **)((long)mVar42 + 0x30) + 1;
                      mVar16 = *(mbstate_t *)(piVar12 + 4);
                      if (pcVar27 != pcVar32) {
                        uVar26 = 0;
                        do {
                          cVar4 = *pcVar32;
                          pcVar32 = pcVar32 + 1;
                          uVar13 = (ulong)(cVar4 + -0x30);
                          if (uVar26 < 0x199999999999999a) {
                            uVar20 = uVar26 * 10;
                          }
                          else {
                            uVar20 = 0xffffffffffffffff;
                          }
                          while (uVar26 = uVar20 + uVar13, CARRY8(uVar20,uVar13)) {
                            if (pcVar27 == pcVar32) {
                              uVar26 = 0xffffffffffffffff;
                              mVar11 = mVar16;
                              goto LAB_00101290;
                            }
                            cVar4 = *pcVar32;
                            pcVar32 = pcVar32 + 1;
                            uVar13 = (ulong)(cVar4 + -0x30);
                            uVar20 = 0xffffffffffffffff;
                          }
                        } while (pcVar27 != pcVar32);
                        goto LAB_0010126f;
                      }
                      mVar41.__count = 0;
                      mVar41.__value = (_union_27)0x0;
                      local_448 = mVar16;
                    }
                    else {
                      if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) != 5)
                      goto LAB_00102112;
                      iVar37 = *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) +
                                       0x10);
                      mVar11 = *(mbstate_t *)(piVar12 + 4);
                      uVar26 = (ulong)iVar37;
                      mVar16 = mVar11;
                      if (iVar37 < 0) goto LAB_00101835;
LAB_0010126f:
                      local_410.__count = 0;
                      local_410.__value = (_union_27)0x0;
                      mVar11 = mVar16;
                      if (uVar26 == 0) {
                        mVar41.__count = 0;
                        mVar41.__value = (_union_27)0x0;
                        local_448 = mVar16;
                      }
                      else {
LAB_00101290:
                        local_410.__count = 0;
                        local_410.__value = (_union_27)0x0;
                        mVar41.__count = 0;
                        mVar41.__value = (_union_27)0x0;
                        local_458.__count = iVar35;
                        local_488.__count = iVar8;
                        local_4a0 = mVar10;
                        local_498 = mVar11;
                        local_490 = mVar36;
                        local_448 = mVar21;
                        local_440 = mVar42;
                        do {
                          wVar33 = *(wchar_t *)mVar11;
                          if (wVar33 == L'\0') break;
                          *(undefined8 *)((long)pmVar29 + -8) = 0x1012e3;
                          sVar39 = wcrtomb(local_88,wVar33,&local_410);
                          iVar8 = (int)sVar39;
                          if (iVar8 < 0) goto LAB_00101d83;
                          if (uVar26 < (sVar39 & 0xffffffff)) break;
                          mVar11 = (mbstate_t)((long)mVar11 + 4);
                          mVar41 = (mbstate_t)((long)mVar41 + (long)iVar8);
                          uVar26 = uVar26 - (long)iVar8;
                        } while (uVar26 != 0);
                        uVar9 = (ulong)local_458 & 0xffffffff;
                        mVar16 = local_498;
                        mVar10 = local_4a0;
                        mVar36 = local_490;
                        mVar21 = local_448;
                        mVar42 = local_440;
                        local_448 = mVar11;
                        iVar8 = local_488.__count;
                      }
                    }
                    iVar37 = 1;
                    mVar11 = mVar16;
                    iVar35 = iVar8;
                    if (iVar8 == 0) goto LAB_00101882;
LAB_00101358:
                    iVar37 = iVar35;
                    uVar34 = (uint)uVar9;
                    mVar11 = mVar16;
                    local_458 = mVar41;
                    if ((ulong)mVar41 < (ulong)mVar36) goto LAB_00101368;
LAB_00101490:
                    mVar16 = local_438;
                    local_440 = (mbstate_t)&local_420;
                    local_420 = 0;
                    mVar15 = (mbstate_t)((long)mVar10 + (long)mVar41);
                    mVar22 = local_438;
                    if (CARRY8((ulong)mVar10,(ulong)mVar41)) {
                      if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                    }
                    else if ((ulong)mVar21 < (ulong)mVar15) {
                      if (mVar21 == (mbstate_t)0x0) {
                        mVar21.__count = 0xc;
                        mVar21.__value = (_union_27)0x0;
                        if (0xc < (ulong)mVar15) goto LAB_00101ce1;
                      }
                      else {
                        if ((long)mVar21 < 0) goto LAB_00100c07;
                        mVar21 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar21 < (ulong)mVar15) {
LAB_00101ce1:
                          mVar21 = mVar15;
                          if (mVar15 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                        }
                      }
                      local_488.__count = uVar34;
                      local_498 = mVar41;
                      local_490 = mVar36;
                      if (local_430 == local_438) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101dae;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar18 = local_430;
                        mVar15 = local_490;
                        iVar8 = local_488.__count;
                        mVar22 = local_438;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                        mVar41 = local_498;
                        mVar36 = local_490;
                        uVar34 = local_488.__count;
                        if (mVar10 != (mbstate_t)0x0) {
                          local_490 = local_498;
                          local_488 = mVar15;
                          local_438.__count = iVar8;
                          *(undefined8 *)((long)pmVar29 + -8) = 0x101e02;
                          __memcpy_chk(mVar16,mVar18,mVar10,mVar21);
                          mVar41 = local_490;
                          mVar36 = local_488;
                          uVar34 = local_438.__count;
                        }
                      }
                      else {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101511;
                        mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                        mVar41 = local_498;
                        mVar36 = local_490;
                        mVar22 = local_438;
                        uVar34 = local_488.__count;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                      }
                    }
                    if (mVar41 != (mbstate_t)0x0) {
                      local_438 = (mbstate_t)local_88;
                      local_498.__count = uVar34;
                      local_4a0 = mVar36;
                      local_490 = mVar21;
                      local_488 = mVar42;
                      do {
                        mVar22 = local_438;
                        mVar21 = local_440;
                        wVar33 = *(wchar_t *)mVar11;
                        if (wVar33 == L'\0') goto LAB_00102112;
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101587;
                        sVar39 = wcrtomb((char *)mVar22,wVar33,(mbstate_t *)mVar21);
                        mVar21 = local_438;
                        if ((int)sVar39 < 1) goto LAB_00102112;
                        sVar39 = (size_t)(int)sVar39;
                        pvVar1 = (void *)((long)mVar16 + (long)mVar10);
                        mVar11 = (mbstate_t)((long)mVar11 + 4);
                        mVar10 = (mbstate_t)((long)mVar10 + sVar39);
                        *(undefined8 *)((long)pmVar29 + -8) = 0x1015ac;
                        memcpy(pvVar1,(void *)mVar21,sVar39);
                        mVar41 = (mbstate_t)((long)mVar41 - sVar39);
                      } while (mVar41 != (mbstate_t)0x0);
                      mVar36 = local_4a0;
                      mVar21 = local_490;
                      mVar42 = local_488;
                      uVar34 = local_498.__count;
                    }
                    if (mVar11 != local_448) {
LAB_00102112:
                    /* WARNING: Subroutine does not return */
                      *(undefined8 *)((long)pmVar29 + -8) = 0x102117;
                      abort();
                    }
                  }
                  mVar22 = mVar16;
                  if (((ulong)local_458 < (ulong)mVar36) && ((uVar34 & 2) != 0)) {
                    uVar9 = (long)mVar36 - (long)local_458;
                    mVar11 = (mbstate_t)((long)mVar10 + uVar9);
                    if (CARRY8((ulong)mVar10,uVar9)) {
                      if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                    }
                    else if ((ulong)mVar21 < (ulong)mVar11) {
                      if (mVar21 == (mbstate_t)0x0) {
                        mVar21.__count = 0xc;
                        mVar21.__value = (_union_27)0x0;
                        if (0xc < (ulong)mVar11) goto LAB_0010201c;
                      }
                      else {
                        if ((long)mVar21 < 0) goto LAB_00100c07;
                        mVar21 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar21 < (ulong)mVar11) {
LAB_0010201c:
                          mVar21 = mVar11;
                          if (mVar11 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                        }
                      }
                      local_438 = mVar10;
                      if (mVar16 == local_430) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x102036;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar15 = local_430;
                        mVar10 = local_438;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                        if (local_438 != (mbstate_t)0x0) {
                          *(undefined8 *)((long)pmVar29 + -8) = 0x102067;
                          mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar15,mVar10,mVar21);
                          mVar10 = local_438;
                        }
                      }
                      else {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x10164e;
                        mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                        mVar10 = local_438;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                      }
                    }
                    *(undefined8 *)((long)pmVar29 + -8) = 0x101672;
                    memset((void *)((long)mVar16 + (long)mVar10),0x20,uVar9);
                    mVar10 = mVar11;
                    mVar22 = mVar16;
                  }
                }
                else {
                  if (pcVar27 == pcVar32) {
                    mVar38.__count = 0;
                    mVar38.__value = (_union_27)0x0;
                    iVar8 = 0;
                  }
                  else {
                    if (*(long *)((long)mVar42 + 0x28) == -1) {
                      mVar38.__count = 0;
                      mVar38.__value = (_union_27)0x0;
                      do {
                        cVar4 = *pcVar27;
                        pcVar27 = pcVar27 + 1;
                        uVar9 = (ulong)(cVar4 + -0x30);
                        if ((ulong)mVar38 < 0x199999999999999a) {
                          uVar26 = (long)mVar38 * 10;
                        }
                        else {
                          uVar26 = 0xffffffffffffffff;
                        }
                        while (mVar38 = (mbstate_t)(uVar9 + uVar26), CARRY8(uVar9,uVar26)) {
                          if (pcVar27 == pcVar32) goto LAB_001018a7;
                          cVar4 = *pcVar27;
                          pcVar27 = pcVar27 + 1;
                          uVar26 = 0xffffffffffffffff;
                          uVar9 = (ulong)(cVar4 + -0x30);
                        }
                      } while (pcVar27 != pcVar32);
                    }
                    else {
                      if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) != 5)
                      goto LAB_00102112;
                      iVar8 = *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) +
                                      0x10);
                      mVar38 = (mbstate_t)(long)iVar8;
                      if (iVar8 < 0) {
                        wVar33 = wVar33 | 2;
                        mVar38 = (mbstate_t)-(long)mVar38;
                      }
                    }
                    if (0x7fffffff < (ulong)mVar38) goto LAB_001018a7;
                    iVar8 = 1;
                  }
                  pcVar27 = *(char **)((long)mVar42 + 0x38);
                  if (*(char **)((long)mVar42 + 0x30) == pcVar27) {
                    local_440 = *(mbstate_t *)(piVar12 + 4);
LAB_001010ae:
                    mVar11 = local_440;
                    local_458.__count = iVar8;
                    local_448.__count = wVar33;
                    *(undefined8 *)((long)pmVar29 + -8) = 0x1010c7;
                    mVar11 = (mbstate_t)strlen((char *)mVar11);
                  }
                  else {
                    if (*(long *)((long)mVar42 + 0x40) == -1) {
                      pcVar32 = *(char **)((long)mVar42 + 0x30) + 1;
                      uVar9 = 0;
                      while (pcVar27 != pcVar32) {
                        cVar4 = *pcVar32;
                        pcVar32 = pcVar32 + 1;
                        uVar26 = (ulong)(cVar4 + -0x30);
                        if (uVar9 < 0x199999999999999a) {
                          uVar13 = uVar9 * 10;
                        }
                        else {
                          uVar13 = 0xffffffffffffffff;
                        }
                        while (uVar9 = uVar26 + uVar13, CARRY8(uVar26,uVar13)) {
                          if (pcVar27 == pcVar32) {
                            uVar9 = 0xffffffffffffffff;
                            goto LAB_00101b34;
                          }
                          cVar4 = *pcVar32;
                          pcVar32 = pcVar32 + 1;
                          uVar13 = 0xffffffffffffffff;
                          uVar26 = (ulong)(cVar4 + -0x30);
                        }
                      }
LAB_00101b34:
                      local_440 = *(mbstate_t *)(piVar12 + 4);
                    }
                    else {
                      if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) != 5)
                      goto LAB_00102112;
                      local_440 = *(mbstate_t *)(piVar12 + 4);
                      iVar35 = *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) +
                                       0x10);
                      uVar9 = (ulong)iVar35;
                      if (iVar35 < 0) goto LAB_001010ae;
                    }
                    mVar11 = local_440;
                    local_458.__count = iVar8;
                    local_448.__count = wVar33;
                    *(undefined8 *)((long)pmVar29 + -8) = 0x100d9e;
                    mVar11 = (mbstate_t)strnlen((char *)mVar11,uVar9);
                  }
                  mVar22 = local_438;
                  mVar23.__count = 0;
                  mVar23.__value = (_union_27)0x0;
                  mVar16 = (mbstate_t)((long)mVar10 + (long)mVar11);
                  mVar15 = mVar23;
                  if (local_458.__count != 0) {
                    mVar15 = mVar11;
                  }
                  mVar18 = (mbstate_t)((long)mVar38 - (long)mVar15);
                  if ((ulong)mVar38 <= (ulong)mVar15) {
                    mVar18 = mVar23;
                  }
                  mVar18 = (mbstate_t)((long)mVar18 + (long)mVar16);
                  uVar34 = local_448.__count;
                  mVar19 = local_438;
                  if ((ulong)mVar18 < (ulong)mVar10) {
                    if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                  }
                  else if ((ulong)mVar21 < (ulong)mVar18) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar18) goto LAB_00101752;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100c07;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar18) {
LAB_00101752:
                        mVar21 = mVar18;
                        if (mVar18 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                      }
                    }
                    if (local_438 == local_430) {
                      local_438.__count = local_448.__count;
                      local_458 = mVar16;
                      local_448 = mVar15;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x1019f5;
                      mVar19 = (mbstate_t)malloc((size_t)mVar21);
                      mVar22 = local_430;
                      if (mVar19 == (mbstate_t)0x0) goto LAB_001020f5;
                      mVar16 = local_458;
                      mVar15 = local_448;
                      uVar34 = local_438.__count;
                      if (mVar10 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101a42;
                        mVar19 = (mbstate_t)__memcpy_chk(mVar19,mVar22,mVar10,mVar21);
                        mVar16 = local_458;
                        mVar15 = local_448;
                        uVar34 = local_438.__count;
                      }
                    }
                    else {
                      local_488 = mVar16;
                      local_458 = mVar15;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x100e2e;
                      mVar19 = (mbstate_t)realloc((void *)mVar22,(size_t)mVar21);
                      mVar16 = local_488;
                      mVar15 = local_458;
                      mVar22 = local_438;
                      uVar34 = local_448.__count;
                      if (mVar19 == (mbstate_t)0x0) goto LAB_00100c07;
                    }
                  }
                  local_438 = mVar19;
                  mVar22 = local_440;
                  pvVar1 = (void *)((long)local_438 + (long)mVar10);
                  if ((ulong)mVar15 < (ulong)mVar38) {
                    sVar39 = (long)mVar38 - (long)mVar15;
                    if ((uVar34 & 2) == 0) {
                      *(undefined8 *)((long)pmVar29 + -8) = 0x1018cf;
                      memset(pvVar1,0x20,sVar39);
                      mVar22 = local_438;
                      mVar16 = local_440;
                      pvVar1 = (void *)((long)local_438 + sVar39 + (long)mVar10);
                      *(undefined8 *)((long)pmVar29 + -8) = 0x1018e9;
                      memcpy(pvVar1,(void *)mVar16,(size_t)mVar11);
                      mVar10 = (mbstate_t)((long)mVar11 + sVar39 + (long)mVar10);
                    }
                    else {
                      local_448 = mVar16;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x101113;
                      memcpy(pvVar1,(void *)mVar22,(size_t)mVar11);
                      mVar22 = local_438;
                      pvVar1 = (void *)((long)local_438 + (long)local_448);
                      local_438 = local_448;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x101139;
                      memset(pvVar1,0x20,sVar39);
                      mVar10 = (mbstate_t)((long)local_438 + sVar39);
                    }
                  }
                  else {
                    local_448 = mVar16;
                    *(undefined8 *)((long)pmVar29 + -8) = 0x100e7d;
                    memcpy(pvVar1,(void *)mVar22,(size_t)mVar11);
                    mVar10 = local_448;
                    mVar22 = local_438;
                  }
                }
              }
              else {
                *local_450 = 0x25;
                if ((wVar33 & 1U) == 0) {
                  mVar11 = (mbstate_t)((long)local_450 + 1);
                  uVar9 = local_478 + 5;
                }
                else {
                  uVar9 = local_478 + 4;
                  local_450[1] = 0x27;
                  mVar11 = (mbstate_t)((long)local_450 + 2);
                }
                if ((wVar33 & 2U) != 0) {
                  *(undefined1 *)mVar11 = 0x2d;
                  uVar26 = local_460;
                  if (local_460 <= uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                if ((wVar33 & 4U) != 0) {
                  *(undefined1 *)mVar11 = 0x2b;
                  uVar26 = local_460;
                  if (local_460 <= uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                if ((wVar33 & 8U) != 0) {
                  *(undefined1 *)mVar11 = 0x20;
                  uVar26 = local_460;
                  if (local_460 < uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                if ((wVar33 & 0x10U) != 0) {
                  *(undefined1 *)mVar11 = 0x23;
                  uVar26 = local_460;
                  if (local_460 <= uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                if ((wVar33 & 0x40U) != 0) {
                  *(undefined1 *)mVar11 = 0x49;
                  uVar26 = local_460;
                  if (local_460 <= uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                if ((wVar33 & 0x20U) != 0) {
                  *(undefined1 *)mVar11 = 0x30;
                  uVar26 = local_460;
                  if (local_460 <= uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (uVar26 - uVar9) + 1;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                  uVar9 = ((uVar9 - 1) - uVar26) + uVar13;
                }
                pcVar27 = *(char **)((long)mVar42 + 0x18);
                pcVar32 = *(char **)((long)mVar42 + 0x20);
                if (pcVar27 != pcVar32) {
                  lVar40 = (long)pcVar32 - (long)pcVar27;
                  if (*(long *)((long)mVar42 + 0x28) == -1) {
                    uVar26 = 0;
                    pcVar24 = pcVar27;
                    do {
                      cVar4 = *pcVar24;
                      pcVar24 = pcVar24 + 1;
                      uVar13 = (ulong)(cVar4 + -0x30);
                      if (uVar26 < 0x199999999999999a) {
                        uVar20 = uVar26 * 10;
                      }
                      else {
                        uVar20 = 0xffffffffffffffff;
                      }
                      while (uVar26 = uVar13 + uVar20, CARRY8(uVar13,uVar20)) {
                        if (pcVar24 == pcVar32) goto LAB_001018a7;
                        cVar4 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        uVar20 = 0xffffffffffffffff;
                        uVar13 = (ulong)(cVar4 + -0x30);
                      }
                    } while (pcVar24 != pcVar32);
                  }
                  else {
                    if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) != 5)
                    goto LAB_00102112;
                    iVar8 = *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) +
                                    0x10);
                    uVar26 = (long)iVar8;
                    if (iVar8 < 0) {
                      uVar26 = -(long)iVar8;
                    }
                  }
                  if (0x7fffffff < uVar26) goto LAB_001018a7;
                  *(undefined8 *)((long)pmVar29 + -8) = 0x100416;
                  lVar14 = __memcpy_chk(mVar11,pcVar27,lVar40,uVar9);
                  uVar26 = local_460;
                  if (local_460 < uVar9) {
                    uVar26 = uVar9;
                  }
                  uVar13 = (lVar40 + uVar26) - uVar9;
                  if (uVar13 < uVar26) {
                    uVar13 = uVar26;
                  }
                  mVar11 = (mbstate_t)(lVar14 + lVar40);
                  uVar9 = (uVar9 - (lVar40 + uVar26)) + uVar13;
                }
                lVar40 = *(long *)((long)mVar42 + 0x30);
                if (lVar40 != *(long *)((long)mVar42 + 0x38)) {
                  lVar14 = *(long *)((long)mVar42 + 0x38) - lVar40;
                  *(undefined8 *)((long)pmVar29 + -8) = 0x100466;
                  lVar40 = __memcpy_chk(mVar11,lVar40,lVar14,uVar9);
                  mVar11 = (mbstate_t)(lVar40 + lVar14);
                }
                mVar16 = local_438;
                if ((uint)local_440.__count < 0x21) {
                  uVar9 = 1L << (local_440.__count & 0x3f);
                  if ((uVar9 & 0x147e60180) == 0) {
                    if ((uVar9 & 0x600) == 0) {
                      if (local_440.__count == 0x1c) {
                        *(undefined1 *)mVar11 = 0x4c;
                        mVar11 = (mbstate_t)((long)mVar11 + 1);
                      }
                      goto LAB_001004aa;
                    }
                    *(undefined1 *)mVar11 = 0x6c;
                    mVar11 = (mbstate_t)((long)mVar11 + 1);
                  }
                  *(undefined1 *)mVar11 = 0x6c;
                  mVar11 = (mbstate_t)((long)mVar11 + 1);
                }
LAB_001004aa:
                uVar5 = *(undefined1 *)((long)mVar42 + 0x48);
                *(undefined1 *)((long)mVar11 + 1) = 0;
                *(undefined1 *)mVar11 = uVar5;
                if (*(long *)((long)mVar42 + 0x28) == -1) {
                  local_448 = (mbstate_t)((ulong)local_448.__value.__wch << 0x20);
                }
                else {
                  if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) != 5)
                  goto LAB_00102112;
                  local_448.__count = 1;
                  local_410.__count =
                       *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x28) * 0x20) + 0x10);
                }
                if (*(long *)((long)mVar42 + 0x40) != -1) {
                  if (*(int *)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) != 5)
                  goto LAB_00102112;
                  *(int *)(local_408 + ((ulong)local_448 & 0xffffffff) * 4 + -8) =
                       *(int *)((long)(local_400 + *(long *)((long)mVar42 + 0x40) * 0x20) + 0x10);
                  local_448.__count = local_448.__count + 1;
                }
                mVar15 = (mbstate_t)((long)mVar10 + 2);
                mVar22 = local_438;
                if ((ulong)mVar10 < 0xfffffffffffffffe) {
                  if ((ulong)mVar21 < (ulong)mVar15) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar15) goto LAB_00100fe0;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100c07;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar15) {
LAB_00100fe0:
                        mVar21 = mVar15;
                        if (mVar15 == (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                      }
                    }
                    if (local_438 == local_430) {
                      local_438 = mVar11;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x101010;
                      mVar16 = (mbstate_t)malloc((size_t)mVar21);
                      mVar22 = local_430;
                      if (mVar16 == (mbstate_t)0x0) goto LAB_001020f5;
                      mVar11 = local_438;
                      if (mVar10 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x101048;
                        __memcpy_chk(mVar16,mVar22,mVar10,mVar21);
                        mVar11 = local_438;
                      }
                    }
                    else {
                      local_458 = mVar11;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x10057e;
                      mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                      mVar11 = local_458;
                      mVar22 = local_438;
                      if (mVar16 == (mbstate_t)0x0) goto LAB_00100c07;
                    }
                  }
                }
                else if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100c07;
                *(undefined1 *)((long)mVar16 + (long)mVar10) = 0;
                local_458 = mVar11;
                *(undefined8 *)((long)pmVar29 + -8) = 0x1005a9;
                local_438 = (mbstate_t)__errno_location();
                local_488.__count = *(wchar_t *)local_438;
LAB_001005c0:
                mVar22 = mVar16;
                puVar7 = local_450;
                mVar19.__count = 0x7fffffff;
                mVar19.__value = (_union_27)0x0;
                local_424 = -1;
                mVar11 = (mbstate_t)((long)mVar21 - (long)mVar10);
                *(wchar_t *)local_438 = L'\0';
                if ((ulong)mVar11 < 0x80000000) {
                  mVar19 = mVar11;
                }
                mVar16 = mVar22;
                switch((ulong)local_440 & 0xffffffff) {
                default:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)pmVar29 + -8) = 0x102112;
                  abort();
                case 1:
                case 0xb:
                case 0x13:
                  uVar9 = (ulong)(uint)(int)(char)local_400[*(long *)((long)mVar42 + 0x50) * 0x20 +
                                                            0x10];
                  break;
                case 2:
                case 0xc:
                case 0x14:
                  uVar9 = (ulong)(byte)local_400[*(long *)((long)mVar42 + 0x50) * 0x20 + 0x10];
                  break;
                case 3:
                case 0xd:
                  uVar9 = (ulong)(uint)(int)*(short *)(local_400 +
                                                      *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10);
                  break;
                case 4:
                case 0xe:
                  uVar9 = (ulong)*(ushort *)
                                  (local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10);
                  break;
                case 5:
                case 6:
                case 0xf:
                case 0x10:
                case 0x1d:
                  uVar9 = (ulong)*(uint *)(local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10)
                  ;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0x11:
                case 0x12:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1f:
                case 0x20:
                case 0x21:
                  piVar12 = *(int **)(local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10);
                  if (local_448.__count == 1) {
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -8) = &local_424;
                    *(int **)((long)pmVar29 + -0x10) = piVar12;
LAB_001009d0:
                    uVar9 = (ulong)local_410 & 0xffffffff;
                    goto LAB_00100852;
                  }
                  if (local_448.__count != 2) {
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -0x10) = &local_424;
LAB_0010071a:
                    puVar7 = local_450;
                    local_490 = mVar19;
                    *(undefined8 *)((long)pmVar29 + -0x18) = 0x10073b;
                    iVar8 = __snprintf_chk((long)mVar22 + (long)mVar10,mVar19,2,0xffffffffffffffff,
                                           puVar7,piVar12);
                    goto LAB_0010074b;
                  }
                  local_498 = mVar11;
                  *(int **)((long)pmVar29 + -0x10) = &local_424;
                  *(int **)((long)pmVar29 + -0x18) = piVar12;
                  goto LAB_00100ade;
                case 0x1b:
                  uVar2 = *(undefined8 *)(local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10);
                  if (local_448.__count == 1) {
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -0x10) = &local_424;
                  }
                  else {
                    if (local_448.__count != 2) {
                      local_498 = mVar11;
                      local_490 = mVar19;
                      *(undefined8 *)((long)pmVar29 + -8) = 0x100a92;
                      iVar8 = __snprintf_chk(uVar2,(long)mVar22 + (long)mVar10,mVar19,2,
                                             0xffffffffffffffff,puVar7,&local_424);
                      goto LAB_0010074b;
                    }
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -8) = &local_424;
                    *(ulong *)((long)pmVar29 + -0x10) = (ulong)local_410 >> 0x20;
                  }
                  puVar7 = local_450;
                  uVar9 = (ulong)local_410 & 0xffffffff;
                  local_490 = mVar19;
                  *(undefined8 *)((long)pmVar29 + -0x18) = 0x10118a;
                  iVar8 = __snprintf_chk(uVar2,(long)mVar22 + (long)mVar10,mVar19,2,
                                         0xffffffffffffffff,puVar7,uVar9);
                  goto LAB_0010074b;
                case 0x1c:
                  Var3 = *(unkbyte10 *)(local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10);
                  if (local_448.__count != 1) {
                    if (local_448.__count != 2) {
                      piVar12 = &local_424;
                      local_498 = mVar11;
                      *(unkbyte10 *)((long)pmVar29 + -0x10) = Var3;
                      goto LAB_0010071a;
                    }
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -0x10) = &local_424;
                    uVar9 = (ulong)local_410 >> 0x20;
                    *(unkbyte10 *)((long)pmVar29 + -0x20) = Var3;
                    *(ulong *)((long)pmVar29 + -0x30) = uVar9;
                    uVar9 = (ulong)local_410 & 0xffffffff;
                    local_490 = mVar19;
                    *(undefined8 *)((long)pmVar29 + -0x38) = 0x1011f3;
                    iVar8 = __snprintf_chk((long)mVar22 + (long)mVar10,mVar19,2,0xffffffffffffffff,
                                           puVar7,uVar9);
                    goto LAB_0010074b;
                  }
                  local_498 = mVar11;
                  *(int **)((long)pmVar29 + -0x10) = &local_424;
                  *(unkbyte10 *)((long)pmVar29 + -0x20) = Var3;
                  goto LAB_00100ae5;
                case 0x1e:
                  uVar9 = (ulong)*(uint *)(local_400 + *(long *)((long)mVar42 + 0x50) * 0x20 + 0x10)
                  ;
                  if (local_448.__count == 1) {
                    local_498 = mVar11;
                    *(int **)((long)pmVar29 + -8) = &local_424;
                    *(ulong *)((long)pmVar29 + -0x10) = uVar9;
                    goto LAB_001009d0;
                  }
                  goto LAB_0010083d;
                }
                if (local_448.__count == 1) {
                  local_498 = mVar11;
                  *(int **)((long)pmVar29 + -8) = &local_424;
                  *(ulong *)((long)pmVar29 + -0x10) = uVar9;
                  uVar9 = (ulong)local_410 & 0xffffffff;
LAB_00100852:
                  puVar7 = local_450;
                  local_490 = mVar19;
                  *(undefined8 *)((long)pmVar29 + -0x18) = 0x100873;
                  iVar8 = __snprintf_chk((long)mVar22 + (long)mVar10,mVar19,2,0xffffffffffffffff,
                                         puVar7,uVar9);
                  if (-1 < local_424) goto LAB_00100759;
LAB_00100893:
                  if (*(char *)((long)local_458 + 1) == '\0') {
                    if (-1 < iVar8) goto LAB_00100772;
                    if (*(wchar_t *)local_438 == L'\0') {
                      wVar33 = L'\x16';
                      if ((*(byte *)((long)mVar42 + 0x48) & 0xef) == 99) {
                        wVar33 = L'T';
                      }
                      *(wchar_t *)local_438 = wVar33;
                    }
                    goto LAB_001008e0;
                  }
                  *(undefined1 *)((long)local_458 + 1) = 0;
                  goto LAB_001005c0;
                }
LAB_0010083d:
                if (local_448.__count != 2) {
                  local_498 = mVar11;
                  *(int **)((long)pmVar29 + -0x10) = &local_424;
                  goto LAB_00100852;
                }
                local_498 = mVar11;
                *(int **)((long)pmVar29 + -0x10) = &local_424;
                *(ulong *)((long)pmVar29 + -0x18) = uVar9;
LAB_00100ade:
                *(ulong *)((long)pmVar29 + -0x20) = (ulong)local_410 >> 0x20;
LAB_00100ae5:
                puVar7 = local_450;
                uVar9 = (ulong)local_410 & 0xffffffff;
                local_490 = mVar19;
                *(undefined8 *)((long)pmVar29 + -0x28) = 0x100b0d;
                iVar8 = __snprintf_chk((long)mVar22 + (long)mVar10,mVar19,2,0xffffffffffffffff,
                                       puVar7,uVar9);
LAB_0010074b:
                if (local_424 < 0) goto LAB_00100893;
LAB_00100759:
                if (((ulong)(long)local_424 < (ulong)local_490) &&
                   (*(char *)((long)local_424 + (long)mVar22 + (long)mVar10) != '\0'))
                goto LAB_00102112;
                if (local_424 < iVar8) {
LAB_00100772:
                  local_424 = iVar8;
                }
                mVar17.__value.__wch = 0;
                mVar17.__count = local_424 + 1;
                if ((ulong)local_490 <= (ulong)mVar17) {
                  if (0x7ffffffe < (ulong)local_498) goto LAB_0010107b;
                  mVar11 = (mbstate_t)((ulong)(local_424 + 2) + (long)mVar10);
                  if ((long)mVar21 < 0) {
                    if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100ab5;
                  }
                  else {
                    if (CARRY8((ulong)(local_424 + 2),(ulong)mVar10)) goto LAB_00100ab5;
                    mVar25 = (mbstate_t)((long)mVar21 * 2);
                    if ((ulong)mVar11 < (ulong)mVar25) {
                      mVar11 = mVar25;
                    }
                    if ((ulong)mVar21 < (ulong)mVar11) {
                      if (mVar21 == (mbstate_t)0x0) {
                        mVar25.__count = 0xc;
                        mVar25.__value = (_union_27)0x0;
                      }
                      mVar21 = mVar11;
                      if ((ulong)mVar11 <= (ulong)mVar25) {
                        mVar21 = mVar25;
                      }
                      if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100ab5;
                      if (mVar22 == local_430) {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x100b30;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar11 = local_430;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100ab5;
                        if (mVar10 != (mbstate_t)0x0) {
                          *(undefined8 *)((long)pmVar29 + -8) = 0x100b53;
                          mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar11,mVar10,mVar21);
                        }
                      }
                      else {
                        *(undefined8 *)((long)pmVar29 + -8) = 0x1007ff;
                        mVar16 = (mbstate_t)realloc((void *)mVar22,(size_t)mVar21);
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100ab5;
                      }
                    }
                  }
                  goto LAB_001005c0;
                }
                mVar10 = (mbstate_t)((long)local_424 + (long)mVar10);
                *(int *)local_438 = local_488.__count;
              }
LAB_00100c79:
              mVar16 = *(mbstate_t *)((long)mVar42 + 8);
              mVar11 = *(mbstate_t *)((long)mVar42 + 0x58);
              mVar42 = (mbstate_t)((long)mVar42 + 0x58);
              local_468 = local_468 + 1;
              mVar15 = mVar10;
            } while (mVar11 == mVar16);
          } while( true );
        }
        if ((local_460 != 0xffffffffffffffff) &&
           (local_450 = (undefined1 *)malloc(local_460), puVar7 = local_450,
           local_450 != (undefined1 *)0x0)) goto LAB_001000f0;
      }
      piVar12 = __errno_location();
      *piVar12 = 0xc;
      pmVar28 = &local_4a8;
    }
LAB_00100613:
    if (local_310 != (mbstate_t)local_2f8) {
      *(undefined8 *)((long)pmVar28 + -8) = 0x10062b;
      free((void *)local_310);
    }
    pmVar6 = pmVar28;
    if (local_400 != local_3f8) {
      *(undefined8 *)((long)pmVar28 + -8) = 0x100643;
      free(local_400);
    }
  }
  pmVar29 = pmVar6;
  mVar16.__count = 0;
  mVar16.__value = (_union_27)0x0;
LAB_00100646:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)pmVar29 + -8) = 0x1020a1;
    __stack_chk_fail();
  }
  return mVar16;
LAB_00101d83:
  *(undefined8 *)((long)pmVar29 + -8) = 0x101d88;
  piVar12 = __errno_location();
  *piVar12 = 0x54;
  mVar22 = local_438;
  goto LAB_001008e0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vasnprintf_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


