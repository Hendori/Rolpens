
mbstate_t vasnprintf(mbstate_t param_1,mbstate_t *param_2,mbstate_t param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  unkbyte10 Var3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  mbstate_t *pmVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  mbstate_t mVar11;
  mbstate_t mVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  mbstate_t mVar16;
  mbstate_t mVar17;
  mbstate_t mVar18;
  mbstate_t mVar19;
  ulong uVar20;
  mbstate_t mVar21;
  mbstate_t mVar22;
  mbstate_t mVar23;
  mbstate_t mVar24;
  mbstate_t mVar25;
  mbstate_t mVar26;
  ulong uVar27;
  mbstate_t mVar28;
  mbstate_t mVar29;
  mbstate_t mVar30;
  mbstate_t mVar31;
  mbstate_t mVar32;
  mbstate_t mVar33;
  mbstate_t *pmVar34;
  mbstate_t *pmVar35;
  mbstate_t *pmVar36;
  mbstate_t mVar38;
  mbstate_t mVar39;
  mbstate_t mVar40;
  mbstate_t mVar41;
  wchar_t wVar42;
  int iVar43;
  uint uVar44;
  mbstate_t mVar45;
  size_t sVar46;
  mbstate_t mVar47;
  long in_FS_OFFSET;
  bool bVar48;
  mbstate_t local_4a8;
  mbstate_t local_4a0;
  mbstate_t local_498;
  mbstate_t local_490;
  mbstate_t local_488;
  ulong local_480;
  mbstate_t *local_478;
  long local_470;
  ulong local_468;
  mbstate_t local_460;
  undefined1 *local_458;
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
  mbstate_t *pmVar37;
  
  pmVar35 = &local_4a8;
  pmVar37 = &local_4a8;
  pmVar36 = &local_4a8;
  pmVar34 = &local_4a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_478 = param_2;
  local_430 = param_1;
  iVar8 = printf_parse(param_3,&local_318,local_408);
  pmVar7 = &local_4a8;
  if (-1 < iVar8) {
    iVar8 = printf_fetchargs(param_4,local_408);
    if (iVar8 < 0) {
      piVar13 = __errno_location();
      *piVar13 = 0x16;
    }
    else {
      uVar9 = local_308 + 7;
      if (((6 < uVar9) && (local_480 = local_300 + uVar9, !CARRY8(local_300,uVar9))) &&
         (local_468 = local_480 + 6, local_480 < 0xfffffffffffffffa)) {
        if (local_468 < 4000) {
          pmVar34 = &local_4a8;
          while (pmVar37 !=
                 (mbstate_t *)((long)&local_4a8 - (local_480 + 0x1d & 0xfffffffffffff000))) {
            pmVar36 = (mbstate_t *)((long)pmVar34 + -0x1000);
            *(undefined8 *)((long)pmVar34 + -8) = *(undefined8 *)((long)pmVar34 + -8);
            pmVar37 = (mbstate_t *)((long)pmVar34 + -0x1000);
            pmVar34 = (mbstate_t *)((long)pmVar34 + -0x1000);
          }
          uVar9 = (ulong)((uint)(local_480 + 0x1d) & 0xff0);
          lVar15 = -uVar9;
          pmVar35 = (mbstate_t *)((long)pmVar36 + lVar15);
          if (uVar9 != 0) {
            *(undefined8 *)((long)pmVar36 + -8) = *(undefined8 *)((long)pmVar36 + -8);
          }
          puVar10 = (undefined1 *)0x0;
          local_450 = (undefined1 *)((ulong)((long)pmVar36 + lVar15 + 0xf) & 0xfffffffffffffff0);
LAB_001000e4:
          mVar21.__count = 0;
          mVar21.__value = (_union_27)0x0;
          if (local_430 != (mbstate_t)0x0) {
            mVar21 = *local_478;
          }
          mVar17.__count = 0;
          mVar17.__value = (_union_27)0x0;
          local_470 = 0;
          mVar40 = *(mbstate_t *)local_310;
          mVar16 = local_430;
          mVar11 = mVar17;
          mVar12 = local_430;
          mVar47 = local_310;
          local_458 = puVar10;
          if (mVar40 == param_3) goto LAB_001001d5;
          do {
            mVar40 = (mbstate_t)((long)mVar40 - (long)param_3);
            mVar11 = (mbstate_t)((long)mVar17 + (long)mVar40);
            puVar10 = local_458;
            mVar26 = mVar16;
            mVar12 = mVar16;
            mVar19 = local_440;
            if (CARRY8((ulong)mVar17,(ulong)mVar40)) {
              if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
              mVar11.__count = -1;
              mVar11.__value = (_union_27)0xffffffff;
            }
            else if ((ulong)mVar21 < (ulong)mVar11) {
              if (mVar21 == (mbstate_t)0x0) {
                mVar24.__count = 0xc;
                mVar24.__value = (_union_27)0x0;
              }
              else {
                if ((long)mVar21 < 0) goto LAB_00100d8c;
                mVar24 = (mbstate_t)((long)mVar21 * 2);
              }
              mVar21 = mVar11;
              if ((ulong)mVar11 <= (ulong)mVar24) {
                mVar21 = mVar24;
              }
              if (mVar21 != (mbstate_t)0xffffffffffffffff) {
                local_448 = param_3;
                local_440 = mVar17;
                local_438 = mVar40;
                if (mVar16 == local_430) {
                  *(undefined8 *)((long)pmVar35 + -8) = 0x100fa0;
                  mVar12 = (mbstate_t)malloc((size_t)mVar21);
                  mVar16 = local_430;
                  mVar17 = local_440;
                  puVar10 = local_458;
                  mVar19 = local_440;
                  if (mVar12 != (mbstate_t)0x0) {
                    mVar40 = local_438;
                    param_3 = local_448;
                    if (local_440 != (mbstate_t)0x0) {
                      local_440 = local_438;
                      local_438 = mVar17;
                      *(undefined8 *)((long)pmVar35 + -8) = 0x100ff4;
                      __memcpy_chk(mVar12,mVar16,mVar17,mVar21);
                      mVar40 = local_440;
                      param_3 = local_448;
                      mVar17 = local_438;
                    }
                    goto LAB_001001c6;
                  }
                }
                else {
                  *(undefined8 *)((long)pmVar35 + -8) = 0x1001a5;
                  mVar12 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                  mVar40 = local_438;
                  param_3 = local_448;
                  mVar17 = local_440;
                  puVar10 = local_458;
                  mVar19 = local_440;
                  if (mVar12 != (mbstate_t)0x0) goto LAB_001001c6;
                }
              }
LAB_00100d8c:
              local_440 = mVar19;
              *(undefined8 *)((long)pmVar35 + -8) = 0x100d91;
              local_438 = (mbstate_t)__errno_location();
              mVar16 = mVar26;
LAB_00100bd4:
              *(wchar_t *)local_438 = L'\f';
LAB_00100be1:
              if (mVar16 != local_430) {
                *(undefined8 *)((long)pmVar35 + -8) = 0x100bf5;
                free((void *)mVar16);
              }
              pmVar34 = pmVar35;
              if (puVar10 != (undefined1 *)0x0) {
                *(undefined8 *)((long)pmVar35 + -8) = 0x100c06;
                free(puVar10);
              }
              goto LAB_00100633;
            }
LAB_001001c6:
            *(undefined8 *)((long)pmVar35 + -8) = 0x1001d5;
            memcpy((void *)((long)mVar12 + (long)mVar17),(void *)param_3,(size_t)mVar40);
LAB_001001d5:
            do {
              puVar10 = local_458;
              mVar26 = mVar12;
              mVar19 = local_440;
              if (local_318 == local_470) {
                mVar40 = (mbstate_t)((long)mVar11 + 1);
                if ((ulong)mVar11 < 0xffffffffffffffff) {
                  if ((ulong)mVar21 < (ulong)mVar40) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar40) goto LAB_00102311;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100d8c;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar40) {
LAB_00102311:
                        mVar21 = mVar40;
                        if (mVar40 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                      }
                    }
                    if (mVar12 == local_430) {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x10258e;
                      mVar12 = (mbstate_t)malloc((size_t)mVar21);
                      mVar17 = local_430;
                      if (mVar12 == (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x102759;
                        local_438 = (mbstate_t)__errno_location();
                        mVar16 = local_430;
                        goto LAB_00100bd4;
                      }
                      if (mVar11 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x1025b1;
                        mVar12 = (mbstate_t)__memcpy_chk(mVar12,mVar17,mVar11,mVar21);
                      }
                    }
                    else {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101b2d;
                      mVar12 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                      mVar19 = local_440;
                      if (mVar12 == (mbstate_t)0x0) goto LAB_00100d8c;
                    }
                  }
                }
                else if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                *(char *)((long)mVar12 + (long)mVar11) = '\0';
                if (((ulong)mVar40 < (ulong)mVar21) && (mVar12 != local_430)) {
                  mVar16.__count = 1;
                  mVar16.__value = (_union_27)0x0;
                  if (mVar40 != (mbstate_t)0x0) {
                    mVar16 = mVar40;
                  }
                  *(undefined8 *)((long)pmVar35 + -8) = 0x101b66;
                  mVar21 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar16);
                  if (mVar21 != (mbstate_t)0x0) {
                    mVar12 = mVar21;
                  }
                }
                if (puVar10 != (undefined1 *)0x0) {
                  *(undefined8 *)((long)pmVar35 + -8) = 0x101b7a;
                  free(puVar10);
                }
                if (local_310 != (mbstate_t)local_2f8) {
                  *(undefined8 *)((long)pmVar35 + -8) = 0x101b92;
                  free((void *)local_310);
                }
                if (local_400 != local_3f8) {
                  *(undefined8 *)((long)pmVar35 + -8) = 0x101baa;
                  free(local_400);
                }
                *local_478 = mVar11;
                goto LAB_00100666;
              }
              cVar4 = (char)((mbstate_t *)((long)mVar47 + 0x48))->__count;
              mVar40 = *(mbstate_t *)((long)mVar47 + 0x50);
              mVar16 = mVar12;
              if (cVar4 == '%') {
                if (mVar40 != (mbstate_t)0xffffffffffffffff) goto code_r0x001027c7;
                mVar17 = (mbstate_t)((long)mVar11 + 1);
                if ((ulong)mVar11 < 0xffffffffffffffff) {
                  if ((ulong)mVar21 < (ulong)mVar17) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar40.__count = 0xc;
                      mVar40.__value = (_union_27)0x0;
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100ce0;
                      mVar40 = (mbstate_t)((long)mVar21 * 2);
                    }
                    mVar21 = mVar17;
                    if ((ulong)mVar17 <= (ulong)mVar40) {
                      mVar21 = mVar40;
                    }
                    if (mVar21 != (mbstate_t)0xffffffffffffffff) {
                      local_438 = mVar17;
                      if (mVar12 == local_430) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x1017be;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar40 = local_430;
                        if (mVar16 != (mbstate_t)0x0) {
                          mVar17 = local_438;
                          if (mVar11 != (mbstate_t)0x0) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1017f6;
                            __memcpy_chk(mVar16,mVar40,mVar11,mVar21);
                            mVar17 = local_438;
                          }
                          goto LAB_00100d42;
                        }
LAB_0010278a:
                        *(undefined8 *)((long)pmVar35 + -8) = 0x10278f;
                        local_438 = (mbstate_t)__errno_location();
                        puVar10 = local_458;
                        mVar16 = local_430;
                        goto LAB_00100bd4;
                      }
                      *(undefined8 *)((long)pmVar35 + -8) = 0x100d33;
                      mVar16 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                      mVar17 = local_438;
                      mVar19 = local_440;
                      if (mVar16 != (mbstate_t)0x0) goto LAB_00100d42;
                    }
LAB_00100ce0:
                    local_440 = mVar19;
                    *(undefined8 *)((long)pmVar35 + -8) = 0x100ce5;
                    local_438 = (mbstate_t)__errno_location();
                    puVar10 = local_458;
                    mVar16 = mVar12;
                    goto LAB_00100bd4;
                  }
                }
                else {
                  if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100ce0;
                  mVar17.__count = -1;
                  mVar17.__value = (_union_27)0xffffffff;
                }
LAB_00100d42:
                *(char *)((long)mVar16 + (long)mVar11) = '%';
                goto LAB_00100d4a;
              }
              if ((mVar40 == (mbstate_t)0xffffffffffffffff) || (cVar4 == 'n'))
              goto code_r0x001027c7;
              wVar42 = ((mbstate_t *)((long)mVar47 + 0x10))->__count;
              uVar9 = (ulong)(uint)wVar42;
              piVar13 = (int *)(local_400 + (long)mVar40 * 0x20);
              local_440.__count = *piVar13;
              if (cVar4 == 's') {
                mVar40 = *(mbstate_t *)((long)mVar47 + 0x18);
                mVar17 = *(mbstate_t *)((long)mVar47 + 0x20);
                if (*piVar13 == 0x20) {
                  if (mVar40 == mVar17) {
                    mVar41.__count = 0;
                    mVar41.__value = (_union_27)0x0;
                    iVar8 = 0;
                  }
                  else {
                    if (*(mbstate_t *)((long)mVar47 + 0x28) == (mbstate_t)0xffffffffffffffff) {
                      mVar41.__count = 0;
                      mVar41.__value = (_union_27)0x0;
                      do {
                        cVar4 = *(char *)mVar40;
                        mVar40 = (mbstate_t)((long)mVar40 + 1);
                        uVar27 = (ulong)(cVar4 + -0x30);
                        if ((ulong)mVar41 < 0x199999999999999a) {
                          uVar14 = (long)mVar41 * 10;
                        }
                        else {
                          uVar14 = 0xffffffffffffffff;
                        }
                        while (mVar41 = (mbstate_t)(uVar27 + uVar14), CARRY8(uVar27,uVar14)) {
                          if (mVar40 == mVar17) goto LAB_00101a7c;
                          cVar4 = *(char *)mVar40;
                          mVar40 = (mbstate_t)((long)mVar40 + 1);
                          uVar14 = 0xffffffffffffffff;
                          uVar27 = (ulong)(cVar4 + -0x30);
                        }
                      } while (mVar40 != mVar17);
                    }
                    else {
                      if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) !=
                          5) goto code_r0x001027c7;
                      iVar8 = *(int *)((long)(local_400 +
                                             (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) +
                                      0x10);
                      mVar41 = (mbstate_t)(long)iVar8;
                      if (iVar8 < 0) {
                        uVar9 = (ulong)(uint)(wVar42 | 2);
                        mVar41 = (mbstate_t)-(long)mVar41;
                      }
                    }
                    if (0x7fffffff < (ulong)mVar41) {
LAB_00101a7c:
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101a81;
                      local_438 = (mbstate_t)__errno_location();
LAB_00101142:
                      *(wchar_t *)local_438 = L'K';
                      puVar10 = local_458;
                      goto LAB_00100be1;
                    }
                    iVar8 = 1;
                  }
                  mVar40 = *(mbstate_t *)((long)mVar47 + 0x38);
                  iVar43 = (int)uVar9;
                  if (*(mbstate_t *)((long)mVar47 + 0x30) == mVar40) {
                    local_448 = *(mbstate_t *)(piVar13 + 4);
LAB_001018e5:
                    mVar40 = local_448;
                    if (iVar8 != 0) {
                      mVar32.__count = 0;
                      mVar32.__value = (_union_27)0x0;
                      local_410.__count = 0;
                      local_410.__value = (_union_27)0x0;
                      wVar42 = *(wchar_t *)local_448;
                      if (wVar42 == L'\0') {
                        local_460 = local_448;
                      }
                      else {
                        local_460.__count = iVar43;
                        local_488.__count = iVar8;
                        local_498 = mVar11;
                        local_490 = mVar41;
                        local_440 = mVar21;
                        local_438 = mVar47;
                        do {
                          *(undefined8 *)((long)pmVar35 + -8) = 0x102057;
                          sVar46 = wcrtomb(local_88,wVar42,&local_410);
                          if ((int)sVar46 < 0) goto LAB_00102065;
                          wVar42 = ((_union_27 *)((long)mVar40 + 4))->__wch;
                          mVar40 = (mbstate_t)((long)mVar40 + 4);
                          mVar32 = (mbstate_t)((long)mVar32 + (long)(int)sVar46);
                        } while (wVar42 != L'\0');
                        uVar9 = (ulong)local_460 & 0xffffffff;
                        mVar21 = local_440;
                        mVar41 = local_490;
                        mVar11 = local_498;
                        mVar47 = local_438;
                        local_460 = mVar40;
                        iVar8 = local_488.__count;
                      }
                      iVar43 = 0;
                      local_440.__count = iVar8;
                      goto LAB_0010142d;
                    }
                    local_440 = (mbstate_t)((ulong)local_440.__value.__wch << 0x20);
                    local_438.__count = iVar43;
                    local_488 = mVar41;
                    *(undefined8 *)((long)pmVar35 + -8) = 0x101912;
                    sVar46 = wcslen((wchar_t *)mVar40);
                    uVar9 = (ulong)local_438 & 0xffffffff;
                    mVar32.__count = 0;
                    mVar32.__value = (_union_27)0x0;
                    local_460 = (mbstate_t)((long)mVar40 + sVar46 * 4);
                    iVar8 = 0;
                    mVar41 = local_488;
LAB_00101938:
                    uVar44 = (uint)uVar9;
                    local_488.__count = 0;
                    local_488.__value = (_union_27)0x0;
                    mVar12 = mVar16;
                    if (mVar41 != (mbstate_t)0x0) {
LAB_0010143d:
                      uVar44 = (uint)uVar9;
                      mVar16 = mVar12;
                      if ((uVar9 & 2) == 0) {
                        mVar19 = (mbstate_t)((long)mVar41 - (long)local_488);
                        local_438 = (mbstate_t)((long)mVar19 + (long)mVar11);
                        puVar10 = local_458;
                        mVar26 = mVar12;
                        iVar43 = local_440.__count;
                        if (CARRY8((ulong)mVar19,(ulong)mVar11)) {
                          if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                        }
                        else if ((ulong)mVar21 < (ulong)local_438) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar21.__count = 0xc;
                            mVar21.__value = (_union_27)0x0;
                            if (0xc < (ulong)local_438) {
LAB_00102372:
                              mVar21 = local_438;
                              if (local_438 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                            }
                          }
                          else {
                            if ((long)mVar21 < 0) goto LAB_00100ce0;
                            mVar21 = (mbstate_t)((long)mVar21 * 2);
                            if ((ulong)mVar21 < (ulong)local_438) goto LAB_00102372;
                          }
                          local_498.__count = local_440.__count;
                          local_490.__count = uVar44;
                          local_4a8 = mVar32;
                          local_4a0 = mVar41;
                          local_440 = mVar19;
                          if (mVar12 == local_430) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1025db;
                            mVar16 = (mbstate_t)malloc((size_t)mVar21);
                            mVar40 = local_430;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_0010278a;
                            mVar41 = local_4a0;
                            mVar32 = local_4a8;
                            iVar43 = local_498.__count;
                            uVar44 = local_490.__count;
                            mVar19 = local_440;
                            if (mVar11 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x10263d;
                              __memcpy_chk(mVar16,mVar40,mVar11,mVar21);
                              mVar41 = local_4a0;
                              mVar32 = local_4a8;
                              iVar43 = local_498.__count;
                              uVar44 = local_490.__count;
                              mVar19 = local_440;
                            }
                          }
                          else {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1014c2;
                            mVar16 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                            mVar41 = local_4a0;
                            mVar32 = local_4a8;
                            iVar43 = local_498.__count;
                            uVar44 = local_490.__count;
                            mVar19 = local_440;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_00100ce0;
                          }
                        }
                        local_440 = mVar19;
                        mVar40 = local_440;
                        local_498.__count = iVar43;
                        local_490.__count = uVar44;
                        local_4a8 = mVar32;
                        local_4a0 = mVar41;
                        *(undefined8 *)((long)pmVar35 + -8) = 0x10151b;
                        memset((void *)((long)mVar16 + (long)mVar11),0x20,(size_t)mVar40);
                        mVar41 = local_4a0;
                        mVar32 = local_4a8;
                        mVar11 = local_438;
                        local_440.__count = local_498.__count;
                        uVar44 = local_490.__count;
                      }
                    }
                    mVar12 = mVar16;
                    if (local_440.__count != 0 || iVar8 != 0) goto LAB_00101547;
                    local_440 = (mbstate_t)&local_418;
                    local_418 = 0;
                    if ((ulong)local_448 < (ulong)local_460) {
                      local_438 = (mbstate_t)local_88;
                      local_4a0.__count = uVar44;
                      mVar40 = local_448;
                      mVar26 = mVar16;
                      local_4a8 = mVar41;
                      local_498 = mVar47;
                      do {
                        mVar16 = local_438;
                        mVar17 = local_440;
                        wVar42 = *(wchar_t *)mVar40;
                        if (wVar42 == L'\0') goto code_r0x001027c7;
                        *(undefined8 *)((long)pmVar35 + -8) = 0x101a3d;
                        sVar46 = wcrtomb((char *)mVar16,wVar42,(mbstate_t *)mVar17);
                        mVar16 = mVar26;
                        if ((int)sVar46 < 1) goto LAB_00102065;
                        mVar17 = (mbstate_t)(long)(int)sVar46;
                        mVar12 = (mbstate_t)((long)mVar17 + (long)mVar11);
                        puVar10 = local_458;
                        local_448 = mVar12;
                        mVar19 = local_440;
                        if (CARRY8((ulong)mVar17,(ulong)mVar11)) {
                          if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                        }
                        else if ((ulong)mVar21 < (ulong)mVar12) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar21.__count = 0xc;
                            mVar21.__value = (_union_27)0x0;
                            if (0xc < (ulong)mVar12) goto LAB_00101d2b;
                          }
                          else {
                            if ((long)mVar21 < 0) goto LAB_00100d8c;
                            mVar21 = (mbstate_t)((long)mVar21 * 2);
                            if ((ulong)mVar21 < (ulong)mVar12) {
LAB_00101d2b:
                              mVar21 = mVar12;
                              if (mVar12 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                            }
                          }
                          local_490 = mVar17;
                          if (mVar26 == local_430) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x101d45;
                            mVar16 = (mbstate_t)malloc((size_t)mVar21);
                            mVar47 = local_430;
                            puVar10 = local_458;
                            mVar19 = local_440;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                            mVar17 = local_490;
                            if (mVar11 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x101d76;
                              mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar47,mVar11,mVar21);
                              mVar17 = local_490;
                            }
                          }
                          else {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1019e5;
                            mVar16 = (mbstate_t)realloc((void *)mVar26,(size_t)mVar21);
                            mVar17 = local_490;
                            puVar10 = local_458;
                            mVar19 = local_440;
                            if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                          }
                        }
                        mVar47 = local_438;
                        mVar40 = (mbstate_t)((long)mVar40 + 4);
                        *(undefined8 *)((long)pmVar35 + -8) = 0x101a0b;
                        memcpy((void *)((long)mVar16 + (long)mVar11),(void *)mVar47,(size_t)mVar17);
                        mVar11 = mVar12;
                        mVar26 = mVar16;
                      } while ((ulong)mVar40 < (ulong)local_460);
                      mVar41 = local_4a8;
                      mVar11 = local_448;
                      mVar47 = local_498;
                      uVar44 = local_4a0.__count;
                    }
                  }
                  else {
                    local_440.__count = iVar8;
                    if (*(mbstate_t *)((long)mVar47 + 0x40) == (mbstate_t)0xffffffffffffffff) {
                      mVar26 = *(mbstate_t *)(piVar13 + 4);
                      mVar17 = (mbstate_t)((long)*(mbstate_t *)((long)mVar47 + 0x30) + 1);
                      if (mVar40 != mVar17) {
                        uVar27 = 0;
                        do {
                          cVar4 = *(char *)mVar17;
                          mVar17 = (mbstate_t)((long)mVar17 + 1);
                          uVar14 = (ulong)(cVar4 + -0x30);
                          if (uVar27 < 0x199999999999999a) {
                            uVar20 = uVar27 * 10;
                          }
                          else {
                            uVar20 = 0xffffffffffffffff;
                          }
                          while (uVar27 = uVar14 + uVar20, CARRY8(uVar14,uVar20)) {
                            if (mVar40 == mVar17) {
                              uVar27 = 0xffffffffffffffff;
                              local_448 = mVar26;
                              goto LAB_0010134c;
                            }
                            cVar4 = *(char *)mVar17;
                            mVar17 = (mbstate_t)((long)mVar17 + 1);
                            uVar20 = 0xffffffffffffffff;
                            uVar14 = (ulong)(cVar4 + -0x30);
                          }
                          local_448 = mVar26;
                        } while (mVar40 != mVar17);
                        goto LAB_0010132a;
                      }
                      mVar32.__count = 0;
                      mVar32.__value = (_union_27)0x0;
                      local_460 = mVar26;
                    }
                    else {
                      if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20) !=
                          5) goto code_r0x001027c7;
                      local_448 = *(mbstate_t *)(piVar13 + 4);
                      iVar5 = *(int *)((long)(local_400 +
                                             (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20) +
                                      0x10);
                      uVar27 = (ulong)iVar5;
                      if (iVar5 < 0) goto LAB_001018e5;
LAB_0010132a:
                      local_410.__count = 0;
                      local_410.__value = (_union_27)0x0;
                      if (uVar27 == 0) {
                        local_460 = local_448;
                        mVar32.__count = 0;
                        mVar32.__value = (_union_27)0x0;
                        mVar26 = local_448;
                      }
                      else {
LAB_0010134c:
                        local_410.__count = 0;
                        local_410.__value = (_union_27)0x0;
                        mVar32.__count = 0;
                        mVar32.__value = (_union_27)0x0;
                        local_488.__count = iVar43;
                        local_490.__count = iVar8;
                        local_4a0 = local_448;
                        mVar40 = local_448;
                        local_498 = mVar41;
                        local_460 = mVar21;
                        local_448 = mVar11;
                        local_440 = mVar47;
                        local_438 = mVar12;
                        do {
                          wVar42 = *(wchar_t *)mVar40;
                          if (wVar42 == L'\0') break;
                          *(undefined8 *)((long)pmVar35 + -8) = 0x1013ab;
                          sVar46 = wcrtomb(local_88,wVar42,&local_410);
                          iVar8 = (int)sVar46;
                          mVar16 = local_438;
                          if (iVar8 < 0) goto LAB_00102065;
                          if (uVar27 < (sVar46 & 0xffffffff)) break;
                          mVar40 = (mbstate_t)((long)mVar40 + 4);
                          mVar32 = (mbstate_t)((long)mVar32 + (long)iVar8);
                          uVar27 = uVar27 - (long)iVar8;
                        } while (uVar27 != 0);
                        uVar9 = (ulong)local_488 & 0xffffffff;
                        mVar26 = local_4a0;
                        mVar21 = local_460;
                        mVar41 = local_498;
                        mVar11 = local_448;
                        mVar12 = local_438;
                        mVar47 = local_440;
                        local_460 = mVar40;
                        local_440.__count = local_490.__count;
                      }
                    }
                    iVar8 = 1;
                    mVar16 = mVar12;
                    iVar43 = local_440.__count;
                    local_448 = mVar26;
                    if (local_440.__count == 0) goto LAB_00101938;
LAB_0010142d:
                    iVar8 = iVar43;
                    uVar44 = (uint)uVar9;
                    local_488 = mVar32;
                    if ((ulong)mVar32 < (ulong)mVar41) goto LAB_0010143d;
LAB_00101547:
                    local_440 = (mbstate_t)&local_420;
                    local_420 = 0;
                    mVar40 = (mbstate_t)((long)mVar11 + (long)mVar32);
                    puVar10 = local_458;
                    mVar16 = mVar12;
                    mVar26 = mVar12;
                    mVar19 = local_440;
                    if (CARRY8((ulong)mVar11,(ulong)mVar32)) {
                      if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                    }
                    else if ((ulong)mVar21 < (ulong)mVar40) {
                      if (mVar21 == (mbstate_t)0x0) {
                        mVar21.__count = 0xc;
                        mVar21.__value = (_union_27)0x0;
                        if (0xc < (ulong)mVar40) goto LAB_00101faa;
                      }
                      else {
                        if ((long)mVar21 < 0) goto LAB_00100d8c;
                        mVar21 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar21 < (ulong)mVar40) {
LAB_00101faa:
                          mVar21 = mVar40;
                          if (mVar40 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                        }
                      }
                      local_438.__count = uVar44;
                      local_498 = mVar32;
                      local_490 = mVar41;
                      if (local_430 == mVar12) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x10207d;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar40 = local_430;
                        puVar10 = local_458;
                        mVar19 = local_440;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                        mVar41 = local_490;
                        mVar32 = local_498;
                        uVar44 = local_438.__count;
                        if (mVar11 != (mbstate_t)0x0) {
                          *(undefined8 *)((long)pmVar35 + -8) = 0x1020d1;
                          __memcpy_chk(mVar16,mVar40,mVar11,mVar21);
                          mVar41 = local_490;
                          mVar32 = local_498;
                          uVar44 = local_438.__count;
                        }
                      }
                      else {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x1015bd;
                        mVar16 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                        mVar41 = local_490;
                        mVar32 = local_498;
                        puVar10 = local_458;
                        uVar44 = local_438.__count;
                        mVar19 = local_440;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                      }
                    }
                    if (mVar32 != (mbstate_t)0x0) {
                      local_438 = (mbstate_t)local_88;
                      local_4a0.__count = uVar44;
                      mVar40 = local_448;
                      local_4a8 = mVar41;
                      local_498 = mVar21;
                      local_490 = mVar47;
                      do {
                        mVar17 = local_438;
                        mVar21 = local_440;
                        wVar42 = *(wchar_t *)mVar40;
                        if (wVar42 == L'\0') goto code_r0x001027c7;
                        *(undefined8 *)((long)pmVar35 + -8) = 0x10163e;
                        sVar46 = wcrtomb((char *)mVar17,wVar42,(mbstate_t *)mVar21);
                        mVar21 = local_438;
                        if ((int)sVar46 < 1) goto code_r0x001027c7;
                        sVar46 = (size_t)(int)sVar46;
                        pvVar1 = (void *)((long)mVar16 + (long)mVar11);
                        mVar40 = (mbstate_t)((long)mVar40 + 4);
                        mVar11 = (mbstate_t)((long)mVar11 + sVar46);
                        *(undefined8 *)((long)pmVar35 + -8) = 0x101663;
                        memcpy(pvVar1,(void *)mVar21,sVar46);
                        mVar32 = (mbstate_t)((long)mVar32 - sVar46);
                      } while (mVar32 != (mbstate_t)0x0);
                      mVar21 = local_498;
                      mVar41 = local_4a8;
                      mVar47 = local_490;
                      uVar44 = local_4a0.__count;
                      local_448 = mVar40;
                    }
                    if (local_448 != local_460) {
code_r0x001027c7:
                    /* WARNING: Subroutine does not return */
                      *(uint **)((long)pmVar35 + -8) = &switchD_0010061f::switchdataD_001027cc;
                      abort();
                    }
                  }
                  mVar17 = mVar11;
                  if (((ulong)local_488 < (ulong)mVar41) && ((uVar44 & 2) != 0)) {
                    uVar9 = (long)mVar41 - (long)local_488;
                    mVar17 = (mbstate_t)((long)mVar11 + uVar9);
                    puVar10 = local_458;
                    mVar26 = mVar16;
                    mVar19 = local_440;
                    if (CARRY8((ulong)mVar11,uVar9)) {
                      if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                    }
                    else if ((ulong)mVar21 < (ulong)mVar17) {
                      if (mVar21 == (mbstate_t)0x0) {
                        mVar21.__count = 0xc;
                        mVar21.__value = (_union_27)0x0;
                        if (0xc < (ulong)mVar17) goto LAB_00102691;
                      }
                      else {
                        if ((long)mVar21 < 0) goto LAB_00100d8c;
                        mVar21 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar21 < (ulong)mVar17) {
LAB_00102691:
                          mVar21 = mVar17;
                          if (mVar17 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                        }
                      }
                      local_438 = mVar11;
                      if (mVar16 == local_430) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x1026ba;
                        mVar16 = (mbstate_t)malloc((size_t)mVar21);
                        mVar12 = local_430;
                        mVar40 = local_438;
                        puVar10 = local_458;
                        mVar19 = local_440;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                        mVar11 = local_438;
                        if (local_438 != (mbstate_t)0x0) {
                          *(undefined8 *)((long)pmVar35 + -8) = 0x1026eb;
                          mVar16 = (mbstate_t)__memcpy_chk(mVar16,mVar12,mVar40,mVar21);
                          mVar11 = local_438;
                        }
                      }
                      else {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x101710;
                        mVar16 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                        mVar11 = local_438;
                        puVar10 = local_458;
                        mVar19 = local_440;
                        if (mVar16 == (mbstate_t)0x0) goto LAB_00100d8c;
                      }
                    }
                    *(undefined8 *)((long)pmVar35 + -8) = 0x101734;
                    memset((void *)((long)mVar16 + (long)mVar11),0x20,uVar9);
                  }
                }
                else {
                  if (mVar40 == mVar17) {
                    mVar45.__count = 0;
                    mVar45.__value = (_union_27)0x0;
                    iVar8 = 0;
                  }
                  else {
                    if (*(mbstate_t *)((long)mVar47 + 0x28) == (mbstate_t)0xffffffffffffffff) {
                      mVar45.__count = 0;
                      mVar45.__value = (_union_27)0x0;
                      do {
                        cVar4 = *(char *)mVar40;
                        mVar40 = (mbstate_t)((long)mVar40 + 1);
                        uVar9 = (ulong)(cVar4 + -0x30);
                        if ((ulong)mVar45 < 0x199999999999999a) {
                          uVar27 = (long)mVar45 * 10;
                        }
                        else {
                          uVar27 = 0xffffffffffffffff;
                        }
                        while (mVar45 = (mbstate_t)(uVar9 + uVar27), CARRY8(uVar9,uVar27)) {
                          if (mVar40 == mVar17) goto LAB_00101a7c;
                          cVar4 = *(char *)mVar40;
                          mVar40 = (mbstate_t)((long)mVar40 + 1);
                          uVar27 = 0xffffffffffffffff;
                          uVar9 = (ulong)(cVar4 + -0x30);
                        }
                      } while (mVar40 != mVar17);
                    }
                    else {
                      if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) !=
                          5) goto code_r0x001027c7;
                      iVar8 = *(int *)((long)(local_400 +
                                             (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) +
                                      0x10);
                      mVar45 = (mbstate_t)(long)iVar8;
                      if (iVar8 < 0) {
                        wVar42 = wVar42 | 2;
                        mVar45 = (mbstate_t)-(long)mVar45;
                      }
                    }
                    if (0x7fffffff < (ulong)mVar45) goto LAB_00101a7c;
                    iVar8 = 1;
                  }
                  mVar40 = *(mbstate_t *)((long)mVar47 + 0x38);
                  if (*(mbstate_t *)((long)mVar47 + 0x30) == mVar40) {
                    local_438 = *(mbstate_t *)(piVar13 + 4);
LAB_001011c7:
                    mVar40 = local_438;
                    local_448.__count = iVar8;
                    local_440.__count = wVar42;
                    *(undefined8 *)((long)pmVar35 + -8) = 0x1011e1;
                    mVar40 = (mbstate_t)strlen((char *)mVar40);
                  }
                  else {
                    if (*(mbstate_t *)((long)mVar47 + 0x40) == (mbstate_t)0xffffffffffffffff) {
                      mVar17 = (mbstate_t)((long)*(mbstate_t *)((long)mVar47 + 0x30) + 1);
                      uVar9 = 0;
                      while (mVar40 != mVar17) {
                        cVar4 = *(char *)mVar17;
                        mVar17 = (mbstate_t)((long)mVar17 + 1);
                        uVar27 = (ulong)(cVar4 + -0x30);
                        if (uVar9 < 0x199999999999999a) {
                          uVar14 = uVar9 * 10;
                        }
                        else {
                          uVar14 = 0xffffffffffffffff;
                        }
                        while (uVar9 = uVar27 + uVar14, CARRY8(uVar27,uVar14)) {
                          if (mVar40 == mVar17) {
                            uVar9 = 0xffffffffffffffff;
                            goto LAB_00101d0c;
                          }
                          cVar4 = *(char *)mVar17;
                          mVar17 = (mbstate_t)((long)mVar17 + 1);
                          uVar14 = 0xffffffffffffffff;
                          uVar27 = (ulong)(cVar4 + -0x30);
                        }
                      }
LAB_00101d0c:
                      mVar40 = *(mbstate_t *)(piVar13 + 4);
                    }
                    else {
                      if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20) !=
                          5) goto code_r0x001027c7;
                      mVar40 = *(mbstate_t *)(piVar13 + 4);
                      iVar43 = *(int *)((long)(local_400 +
                                              (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20) +
                                       0x10);
                      uVar9 = (ulong)iVar43;
                      local_438 = mVar40;
                      if (iVar43 < 0) goto LAB_001011c7;
                    }
                    local_448.__count = iVar8;
                    local_440.__count = wVar42;
                    local_438 = mVar40;
                    *(undefined8 *)((long)pmVar35 + -8) = 0x100e7c;
                    mVar40 = (mbstate_t)strnlen((char *)mVar40,uVar9);
                  }
                  mVar25.__count = 0;
                  mVar25.__value = (_union_27)0x0;
                  mVar17 = (mbstate_t)((long)mVar11 + (long)mVar40);
                  mVar24 = mVar25;
                  if (local_448.__count != 0) {
                    mVar24 = mVar40;
                  }
                  mVar18 = (mbstate_t)((long)mVar45 - (long)mVar24);
                  if ((ulong)mVar45 <= (ulong)mVar24) {
                    mVar18 = mVar25;
                  }
                  mVar18 = (mbstate_t)((long)mVar18 + (long)mVar17);
                  puVar10 = local_458;
                  mVar19 = local_440;
                  if ((ulong)mVar18 < (ulong)mVar11) {
                    if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                  }
                  else if ((ulong)mVar21 < (ulong)mVar18) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar18) {
LAB_00100edb:
                        mVar21 = mVar18;
                        if (mVar18 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                      }
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100ce0;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar18) goto LAB_00100edb;
                    }
                    local_488 = mVar17;
                    local_460 = mVar24;
                    local_448 = mVar40;
                    if (mVar12 == local_430) {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101bc1;
                      mVar16 = (mbstate_t)malloc((size_t)mVar21);
                      mVar12 = local_430;
                      if (mVar16 == (mbstate_t)0x0) goto LAB_0010278a;
                      mVar40 = local_448;
                      mVar24 = local_460;
                      mVar17 = local_488;
                      if (mVar11 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x101c23;
                        __memcpy_chk(mVar16,mVar12,mVar11,mVar21);
                        mVar40 = local_448;
                        mVar24 = local_460;
                        mVar17 = local_488;
                      }
                    }
                    else {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101054;
                      mVar16 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                      mVar40 = local_448;
                      mVar24 = local_460;
                      mVar17 = local_488;
                      mVar19 = local_440;
                      if (mVar16 == (mbstate_t)0x0) goto LAB_00100ce0;
                    }
                  }
                  mVar12 = local_438;
                  pvVar1 = (void *)((long)mVar16 + (long)mVar11);
                  local_440 = mVar17;
                  if ((ulong)mVar24 < (ulong)mVar45) {
                    sVar46 = (long)mVar45 - (long)mVar24;
                    if ((local_440.__count & 2U) == 0) {
                      local_440 = mVar40;
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101aae;
                      memset(pvVar1,0x20,sVar46);
                      mVar17 = local_438;
                      mVar40 = local_440;
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101ac5;
                      memcpy((void *)((long)mVar16 + sVar46 + (long)mVar11),(void *)mVar17,
                             (size_t)mVar40);
                      mVar17 = (mbstate_t)((long)local_440 + sVar46 + (long)mVar11);
                    }
                    else {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101233;
                      memcpy(pvVar1,(void *)mVar12,(size_t)mVar40);
                      pvVar1 = (void *)((long)mVar16 + (long)local_440);
                      local_438 = local_440;
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101252;
                      memset(pvVar1,0x20,sVar46);
                      mVar17 = (mbstate_t)((long)local_438 + sVar46);
                    }
                  }
                  else {
                    *(undefined8 *)((long)pmVar35 + -8) = 0x1010a2;
                    memcpy(pvVar1,(void *)mVar12,(size_t)mVar40);
                    mVar17 = local_440;
                  }
                }
              }
              else {
                *local_450 = 0x25;
                if ((wVar42 & 1U) == 0) {
                  mVar40 = (mbstate_t)((long)local_450 + 1);
                  uVar9 = local_480 + 5;
                }
                else {
                  uVar9 = local_480 + 4;
                  local_450[1] = 0x27;
                  mVar40 = (mbstate_t)((long)local_450 + 2);
                }
                if ((wVar42 & 2U) != 0) {
                  *(char *)mVar40 = '-';
                  uVar27 = local_468;
                  if (local_468 <= uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                if ((wVar42 & 4U) != 0) {
                  *(char *)mVar40 = '+';
                  uVar27 = local_468;
                  if (local_468 <= uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                if ((wVar42 & 8U) != 0) {
                  *(char *)mVar40 = ' ';
                  uVar27 = local_468;
                  if (local_468 < uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                if ((wVar42 & 0x10U) != 0) {
                  *(char *)mVar40 = '#';
                  uVar27 = local_468;
                  if (local_468 <= uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                if ((wVar42 & 0x40U) != 0) {
                  *(char *)mVar40 = 'I';
                  uVar27 = local_468;
                  if (local_468 <= uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                if ((wVar42 & 0x20U) != 0) {
                  *(char *)mVar40 = '0';
                  uVar27 = local_468;
                  if (local_468 <= uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = (uVar27 - uVar9) + 1;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                  uVar9 = ((uVar9 - 1) - uVar27) + uVar14;
                }
                mVar17 = *(mbstate_t *)((long)mVar47 + 0x18);
                mVar19 = *(mbstate_t *)((long)mVar47 + 0x20);
                if (mVar17 != mVar19) {
                  if (*(mbstate_t *)((long)mVar47 + 0x28) == (mbstate_t)0xffffffffffffffff) {
                    uVar27 = 0;
                    mVar24 = mVar17;
                    do {
                      cVar4 = *(char *)mVar24;
                      mVar24 = (mbstate_t)((long)mVar24 + 1);
                      uVar14 = (ulong)(cVar4 + -0x30);
                      if (uVar27 < 0x199999999999999a) {
                        uVar20 = uVar27 * 10;
                      }
                      else {
                        uVar20 = 0xffffffffffffffff;
                      }
                      while (uVar27 = uVar14 + uVar20, CARRY8(uVar14,uVar20)) {
                        if (mVar19 == mVar24) goto LAB_00101a7c;
                        cVar4 = *(char *)mVar24;
                        mVar24 = (mbstate_t)((long)mVar24 + 1);
                        uVar20 = 0xffffffffffffffff;
                        uVar14 = (ulong)(cVar4 + -0x30);
                      }
                    } while (mVar19 != mVar24);
                  }
                  else {
                    if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) != 5)
                    goto code_r0x001027c7;
                    iVar8 = *(int *)((long)(local_400 +
                                           (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) + 0x10)
                    ;
                    uVar27 = (long)iVar8;
                    if (iVar8 < 0) {
                      uVar27 = -(long)iVar8;
                    }
                  }
                  if (0x7fffffff < uVar27) goto LAB_00101a7c;
                  local_438 = (mbstate_t)((long)mVar19 - (long)mVar17);
                  *(undefined8 *)((long)pmVar35 + -8) = 0x10041a;
                  lVar15 = __memcpy_chk(mVar40,mVar17,(long)mVar19 - (long)mVar17,uVar9);
                  uVar27 = local_468;
                  if (local_468 < uVar9) {
                    uVar27 = uVar9;
                  }
                  uVar14 = ((long)local_438 + uVar27) - uVar9;
                  if (uVar14 < uVar27) {
                    uVar14 = uVar27;
                  }
                  mVar40 = (mbstate_t)(lVar15 + (long)local_438);
                  uVar9 = (uVar9 - ((long)local_438 + uVar27)) + uVar14;
                }
                mVar17 = *(mbstate_t *)((long)mVar47 + 0x30);
                if (mVar17 != *(mbstate_t *)((long)mVar47 + 0x38)) {
                  mVar16 = (mbstate_t)((long)*(mbstate_t *)((long)mVar47 + 0x38) - (long)mVar17);
                  local_438 = mVar16;
                  *(undefined8 *)((long)pmVar35 + -8) = 0x100474;
                  lVar15 = __memcpy_chk(mVar40,mVar17,mVar16,uVar9);
                  mVar40 = (mbstate_t)(lVar15 + (long)local_438);
                }
                if ((uint)local_440.__count < 0x21) {
                  uVar9 = 1L << (local_440.__count & 0x3f);
                  if ((uVar9 & 0x147e60180) == 0) {
                    if ((uVar9 & 0x600) == 0) {
                      if (local_440.__count == 0x1c) {
                        *(char *)mVar40 = 'L';
                        mVar40 = (mbstate_t)((long)mVar40 + 1);
                      }
                      goto LAB_001004bf;
                    }
                    *(char *)mVar40 = 'l';
                    mVar40 = (mbstate_t)((long)mVar40 + 1);
                  }
                  *(char *)mVar40 = 'l';
                  mVar40 = (mbstate_t)((long)mVar40 + 1);
                }
LAB_001004bf:
                iVar8 = ((mbstate_t *)((long)mVar47 + 0x48))->__count;
                *(char *)((long)mVar40 + 1) = '\0';
                *(char *)mVar40 = (char)iVar8;
                if (*(mbstate_t *)((long)mVar47 + 0x28) == (mbstate_t)0xffffffffffffffff) {
                  local_448 = (mbstate_t)((ulong)local_448.__value.__wch << 0x20);
                  iVar8 = 1;
                }
                else {
                  if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20) != 5)
                  goto code_r0x001027c7;
                  iVar8 = 2;
                  local_448.__count = 1;
                  local_410.__count =
                       *(int *)((long)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x28) * 0x20)
                               + 0x10);
                }
                if (*(mbstate_t *)((long)mVar47 + 0x40) != (mbstate_t)0xffffffffffffffff) {
                  if (*(int *)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20) != 5)
                  goto code_r0x001027c7;
                  uVar9 = (ulong)local_448 & 0xffffffff;
                  local_448.__count = iVar8;
                  *(int *)(local_408 + uVar9 * 4 + -8) =
                       *(int *)((long)(local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x40) * 0x20)
                               + 0x10);
                }
                mVar16 = (mbstate_t)((long)mVar11 + 2);
                puVar10 = local_458;
                mVar17 = mVar12;
                mVar19 = local_440;
                if ((ulong)mVar11 < 0xfffffffffffffffe) {
                  if ((ulong)mVar21 < (ulong)mVar16) {
                    if (mVar21 == (mbstate_t)0x0) {
                      mVar21.__count = 0xc;
                      mVar21.__value = (_union_27)0x0;
                      if (0xc < (ulong)mVar16) {
LAB_001010ff:
                        mVar21 = mVar16;
                        if (mVar16 == (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                      }
                    }
                    else {
                      if ((long)mVar21 < 0) goto LAB_00100ce0;
                      mVar21 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar21 < (ulong)mVar16) goto LAB_001010ff;
                    }
                    local_438 = mVar40;
                    if (mVar12 == local_430) {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x101178;
                      mVar17 = (mbstate_t)malloc((size_t)mVar21);
                      mVar16 = local_430;
                      if (mVar17 == (mbstate_t)0x0) goto LAB_0010278a;
                      mVar40 = local_438;
                      if (mVar11 != (mbstate_t)0x0) {
                        *(undefined8 *)((long)pmVar35 + -8) = 0x1011b0;
                        __memcpy_chk(mVar17,mVar16,mVar11,mVar21);
                        mVar40 = local_438;
                      }
                    }
                    else {
                      *(undefined8 *)((long)pmVar35 + -8) = 0x10058d;
                      mVar17 = (mbstate_t)realloc((void *)mVar12,(size_t)mVar21);
                      mVar40 = local_438;
                      mVar19 = local_440;
                      if (mVar17 == (mbstate_t)0x0) goto LAB_00100ce0;
                    }
                  }
                }
                else if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100d8c;
                *(char *)((long)mVar17 + (long)mVar11) = '\0';
                local_460 = mVar40;
                *(undefined8 *)((long)pmVar35 + -8) = 0x1005b1;
                local_438 = (mbstate_t)__errno_location();
                local_488.__count = *(wchar_t *)local_438;
                if (local_440.__count != 1) {
LAB_001005e0:
                  do {
                    mVar16 = mVar17;
                    puVar10 = local_450;
                    mVar26.__count = 0x7fffffff;
                    mVar26.__value = (_union_27)0x0;
                    local_424 = -1;
                    mVar40 = (mbstate_t)((long)mVar21 - (long)mVar11);
                    *(wchar_t *)local_438 = L'\0';
                    if ((ulong)mVar40 < 0x80000000) {
                      mVar26 = mVar40;
                    }
                    mVar17 = mVar16;
                    switch((ulong)local_440 & 0xffffffff) {
                    default:
                    /* WARNING: Subroutine does not return */
                      *(code **)((long)pmVar35 + -8) = abort;
                      abort();
                    case 2:
                      uVar9 = (ulong)(byte)local_400[(long)*(mbstate_t *)((long)mVar47 + 0x50) *
                                                     0x20 + 0x10];
                      if (local_448.__count == 1) goto LAB_00100950;
                      if (local_448.__count != 2) {
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -0x10) = &local_424;
                        local_490 = mVar26;
                        *(undefined8 *)((long)pmVar35 + -0x18) = 0x100b14;
                        iVar8 = __snprintf_chk((long)mVar16 + (long)mVar11,mVar26,2,
                                               0xffffffffffffffff,puVar10);
                        goto LAB_00100775;
                      }
                      goto LAB_001009a8;
                    case 3:
                    case 0xd:
                      uVar9 = (ulong)(uint)(int)*(short *)(local_400 +
                                                          (long)*(mbstate_t *)((long)mVar47 + 0x50)
                                                          * 0x20 + 0x10);
                      if (local_448.__count == 1) goto LAB_00100950;
                      if (local_448.__count == 2) goto LAB_001009a8;
                      goto LAB_00100876;
                    case 4:
                    case 0xe:
                      uVar9 = (ulong)*(ushort *)
                                      (local_400 +
                                      (long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 + 0x10);
                      break;
                    case 5:
                    case 6:
                    case 0xf:
                    case 0x10:
                    case 0x1d:
                    case 0x1e:
                      uVar9 = (ulong)*(uint *)(local_400 +
                                              (long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 +
                                              0x10);
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
                      piVar13 = *(int **)(local_400 +
                                         (long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 + 0x10);
                      if (local_448.__count == 1) {
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -8) = &local_424;
                        *(int **)((long)pmVar35 + -0x10) = piVar13;
                        goto LAB_00100961;
                      }
                      if (local_448.__count != 2) {
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -0x10) = &local_424;
LAB_00100c54:
                        puVar10 = local_450;
                        local_490 = mVar26;
                        *(undefined8 *)((long)pmVar35 + -0x18) = 0x100c75;
                        iVar8 = __snprintf_chk((long)mVar16 + (long)mVar11,mVar26,2,
                                               0xffffffffffffffff,puVar10,piVar13);
                        goto LAB_00100775;
                      }
                      local_498 = mVar40;
                      *(int **)((long)pmVar35 + -0x10) = &local_424;
                      *(int **)((long)pmVar35 + -0x18) = piVar13;
                      goto LAB_00100734;
                    case 0xb:
                    case 0x13:
                      uVar9 = (ulong)(uint)(int)(char)local_400[(long)*(mbstate_t *)
                                                                       ((long)mVar47 + 0x50) * 0x20
                                                                + 0x10];
                      break;
                    case 0xc:
                    case 0x14:
                      uVar9 = (ulong)(byte)local_400[(long)*(mbstate_t *)((long)mVar47 + 0x50) *
                                                     0x20 + 0x10];
                      break;
                    case 0x1b:
                      uVar2 = *(undefined8 *)
                               (local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 + 0x10)
                      ;
                      if (local_448.__count == 1) {
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -0x10) = &local_424;
                      }
                      else {
                        if (local_448.__count != 2) {
                          local_498 = mVar40;
                          local_490 = mVar26;
                          *(undefined8 *)((long)pmVar35 + -8) = 0x10128f;
                          iVar8 = __snprintf_chk(uVar2,(long)mVar16 + (long)mVar11,mVar26,2,
                                                 0xffffffffffffffff,puVar10,&local_424);
                          goto LAB_00100775;
                        }
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -8) = &local_424;
                        *(ulong *)((long)pmVar35 + -0x10) = (ulong)local_410 >> 0x20;
                      }
                      puVar10 = local_450;
                      uVar9 = (ulong)local_410 & 0xffffffff;
                      local_490 = mVar26;
                      *(undefined8 *)((long)pmVar35 + -0x18) = 0x100a91;
                      iVar8 = __snprintf_chk(uVar2,(long)mVar16 + (long)mVar11,mVar26,2,
                                             0xffffffffffffffff,puVar10,uVar9);
                      goto LAB_00100775;
                    case 0x1c:
                      Var3 = *(unkbyte10 *)
                              (local_400 + (long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 + 0x10);
                      if (local_448.__count != 1) {
                        if (local_448.__count != 2) {
                          piVar13 = &local_424;
                          local_498 = mVar40;
                          *(unkbyte10 *)((long)pmVar35 + -0x10) = Var3;
                          goto LAB_00100c54;
                        }
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -0x10) = &local_424;
                        uVar9 = (ulong)local_410 >> 0x20;
                        *(unkbyte10 *)((long)pmVar35 + -0x20) = Var3;
                        *(ulong *)((long)pmVar35 + -0x30) = uVar9;
                        uVar9 = (ulong)local_410 & 0xffffffff;
                        local_490 = mVar26;
                        *(undefined8 *)((long)pmVar35 + -0x38) = 0x100ba8;
                        iVar8 = __snprintf_chk((long)mVar16 + (long)mVar11,mVar26,2,
                                               0xffffffffffffffff,puVar10,uVar9);
                        goto LAB_00100775;
                      }
                      local_498 = mVar40;
                      *(int **)((long)pmVar35 + -0x10) = &local_424;
                      *(unkbyte10 *)((long)pmVar35 + -0x20) = Var3;
                      goto LAB_0010073b;
                    }
                    if (local_448.__count != 1) {
                      if (local_448.__count != 2) {
LAB_00100876:
                        local_498 = mVar40;
                        *(int **)((long)pmVar35 + -0x10) = &local_424;
                        goto LAB_00100882;
                      }
LAB_001009a8:
                      local_498 = mVar40;
                      *(int **)((long)pmVar35 + -0x10) = &local_424;
                      *(ulong *)((long)pmVar35 + -0x18) = uVar9;
LAB_00100734:
                      *(ulong *)((long)pmVar35 + -0x20) = (ulong)local_410 >> 0x20;
LAB_0010073b:
                      puVar10 = local_450;
                      uVar9 = (ulong)local_410 & 0xffffffff;
                      local_490 = mVar26;
                      *(undefined8 *)((long)pmVar35 + -0x28) = 0x100763;
                      iVar8 = __snprintf_chk((long)mVar16 + (long)mVar11,mVar26,2,0xffffffffffffffff
                                             ,puVar10,uVar9);
LAB_00100775:
                      if (local_424 < 0) goto LAB_001008c2;
LAB_00100783:
                      if (((ulong)(long)local_424 < (ulong)local_490) &&
                         (((char *)((long)local_424 + (long)mVar16))[(long)mVar11] != '\0')) {
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      if (local_424 < iVar8) {
LAB_0010079d:
                        local_424 = iVar8;
                      }
                      mVar19.__value.__wch = 0;
                      mVar19.__count = local_424 + 1;
                      if ((ulong)local_490 <= (ulong)mVar19) {
                        if (0x7ffffffe < (ulong)local_498) goto LAB_00101142;
                        mVar40 = (mbstate_t)((ulong)(local_424 + 2) + (long)mVar11);
                        puVar10 = local_458;
                        if ((long)mVar21 < 0) {
                          if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                        }
                        else {
                          if (CARRY8((ulong)(local_424 + 2),(ulong)mVar11)) goto LAB_00100bd4;
                          mVar18 = (mbstate_t)((long)mVar21 * 2);
                          if ((ulong)mVar40 <= (ulong)mVar18) {
                            mVar40 = mVar18;
                          }
                          if ((ulong)mVar21 < (ulong)mVar40) {
                            if (mVar21 == (mbstate_t)0x0) {
                              mVar18.__count = 0xc;
                              mVar18.__value = (_union_27)0x0;
                            }
                            mVar21 = mVar18;
                            if ((ulong)mVar18 <= (ulong)mVar40) {
                              mVar21 = mVar40;
                            }
                            if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                            if (local_430 == mVar16) {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x100c18;
                              mVar17 = (mbstate_t)malloc((size_t)mVar21);
                              mVar40 = local_430;
                              puVar10 = local_458;
                              if (mVar17 == (mbstate_t)0x0) goto LAB_00100bd4;
                              if (mVar11 != (mbstate_t)0x0) {
                                *(undefined8 *)((long)pmVar35 + -8) = 0x100c37;
                                mVar17 = (mbstate_t)__memcpy_chk(mVar17,mVar40,mVar11,mVar21);
                              }
                            }
                            else {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x100827;
                              mVar17 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                              puVar10 = local_458;
                              if (mVar17 == (mbstate_t)0x0) goto LAB_00100bd4;
                            }
                          }
                        }
                        goto LAB_001005e0;
                      }
                      goto LAB_0010111b;
                    }
LAB_00100950:
                    local_498 = mVar40;
                    *(int **)((long)pmVar35 + -8) = &local_424;
                    *(ulong *)((long)pmVar35 + -0x10) = uVar9;
LAB_00100961:
                    uVar9 = (ulong)local_410 & 0xffffffff;
LAB_00100882:
                    puVar10 = local_450;
                    local_490 = mVar26;
                    *(undefined8 *)((long)pmVar35 + -0x18) = 0x1008a3;
                    iVar8 = __snprintf_chk((long)mVar16 + (long)mVar11,mVar26,2,0xffffffffffffffff,
                                           puVar10,uVar9);
                    if (-1 < local_424) goto LAB_00100783;
LAB_001008c2:
                    if (*(char *)((long)local_460 + 1) == '\0') {
                      if (-1 < iVar8) goto LAB_0010079d;
                      goto LAB_001008e8;
                    }
                    *(char *)((long)local_460 + 1) = '\0';
                  } while( true );
                }
                local_440 = (mbstate_t)((long)mVar17 + (long)mVar11);
                mVar16 = mVar17;
                if (local_448.__count == 2) {
                  local_448 = (mbstate_t)&local_424;
                  local_490 = local_460;
LAB_0010210a:
                  puVar6 = local_400;
                  mVar17 = local_440;
                  puVar10 = local_450;
                  mVar39.__count = 0x7fffffff;
                  mVar39.__value = (_union_27)0x0;
                  local_424 = -1;
                  local_460 = (mbstate_t)((long)mVar21 - (long)mVar11);
                  *(wchar_t *)local_438 = L'\0';
                  mVar40 = *(mbstate_t *)((long)mVar47 + 0x50);
                  if ((ulong)local_460 < 0x80000000) {
                    mVar39 = local_460;
                  }
                  *(mbstate_t *)((long)pmVar35 + -0x10) = local_448;
                  *(ulong *)((long)pmVar35 + -0x18) =
                       (ulong)(uint)(int)(char)puVar6[(long)mVar40 * 0x20 + 0x10];
                  *(ulong *)((long)pmVar35 + -0x20) = (ulong)local_410 >> 0x20;
                  uVar9 = (ulong)local_410 & 0xffffffff;
                  *(undefined8 *)((long)pmVar35 + -0x28) = 0x10218a;
                  iVar8 = __snprintf_chk(mVar17,mVar39,2,0xffffffffffffffff,puVar10,uVar9);
                  if (local_424 < 0) {
                    if (*(char *)((long)local_490 + 1) != '\0') {
                      *(char *)((long)local_490 + 1) = '\0';
                      goto LAB_0010210a;
                    }
                    if (iVar8 < 0) goto LAB_001008e8;
LAB_001021bd:
                    local_424 = iVar8;
                  }
                  else {
                    if (((ulong)(long)local_424 < (ulong)mVar39) &&
                       (((char *)((long)local_424 + (long)mVar16))[(long)mVar11] != '\0'))
                    goto code_r0x001027c7;
                    if (local_424 < iVar8) goto LAB_001021bd;
                  }
                  mVar23.__value.__wch = 0;
                  mVar23.__count = local_424 + 1;
                  if ((ulong)mVar39 <= (ulong)mVar23) {
                    if (0x7ffffffe < (ulong)local_460) goto LAB_00101142;
                    mVar40 = (mbstate_t)((ulong)(local_424 + 2) + (long)mVar11);
                    puVar10 = local_458;
                    if ((long)mVar21 < 0) {
                      if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                    }
                    else {
                      if (CARRY8((ulong)(local_424 + 2),(ulong)mVar11)) goto LAB_00100bd4;
                      mVar29 = (mbstate_t)((long)mVar21 * 2);
                      if ((ulong)mVar40 <= (ulong)mVar29) {
                        mVar40 = mVar29;
                      }
                      if ((ulong)mVar21 < (ulong)mVar40) {
                        if (mVar21 == (mbstate_t)0x0) {
                          mVar29.__count = 0xc;
                          mVar29.__value = (_union_27)0x0;
                        }
                        mVar21 = mVar40;
                        if ((ulong)mVar40 <= (ulong)mVar29) {
                          mVar21 = mVar29;
                        }
                        if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                        if (mVar16 == local_430) {
                          *(undefined8 *)((long)pmVar35 + -8) = 0x1022a2;
                          mVar17 = (mbstate_t)malloc((size_t)mVar21);
                          mVar40 = local_430;
                          puVar10 = local_458;
                          if (mVar17 == (mbstate_t)0x0) goto LAB_00100bd4;
                          if (mVar11 != (mbstate_t)0x0) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1022c1;
                            mVar17 = (mbstate_t)__memcpy_chk(mVar17,mVar40,mVar11,mVar21);
                          }
                          local_440 = (mbstate_t)((long)mVar17 + (long)mVar11);
                          mVar16 = mVar17;
                        }
                        else {
                          *(undefined8 *)((long)pmVar35 + -8) = 0x102242;
                          mVar40 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                          puVar10 = local_458;
                          if (mVar40 == (mbstate_t)0x0) goto LAB_00100bd4;
                          local_440 = (mbstate_t)((long)mVar40 + (long)mVar11);
                          mVar16 = mVar40;
                        }
                      }
                    }
                    goto LAB_0010210a;
                  }
                }
                else {
                  bVar48 = local_448.__count == 1;
                  local_448 = (mbstate_t)&local_424;
                  if (bVar48) {
                    local_490 = local_460;
LAB_00102396:
                    while( true ) {
                      puVar6 = local_400;
                      mVar17 = local_440;
                      puVar10 = local_450;
                      local_424 = -1;
                      local_460 = (mbstate_t)((long)mVar21 - (long)mVar11);
                      mVar33.__count = 0x7fffffff;
                      mVar33.__value = (_union_27)0x0;
                      *(wchar_t *)local_438 = L'\0';
                      mVar40 = *(mbstate_t *)((long)mVar47 + 0x50);
                      if ((ulong)local_460 < 0x80000000) {
                        mVar33 = local_460;
                      }
                      *(mbstate_t *)((long)pmVar35 + -8) = local_448;
                      *(ulong *)((long)pmVar35 + -0x10) =
                           (ulong)(uint)(int)(char)puVar6[(long)mVar40 * 0x20 + 0x10];
                      uVar9 = (ulong)local_410 & 0xffffffff;
                      *(undefined8 *)((long)pmVar35 + -0x18) = 0x10240e;
                      iVar8 = __snprintf_chk(mVar17,mVar33,2,0xffffffffffffffff,puVar10,uVar9);
                      if (-1 < local_424) break;
                      if (*(char *)((long)local_490 + 1) == '\0') {
                        if (-1 < iVar8) {
LAB_00102445:
                          local_424 = iVar8;
                          goto LAB_0010244e;
                        }
                        goto LAB_001008e8;
                      }
                      *(char *)((long)local_490 + 1) = '\0';
                    }
                    if (((ulong)(long)local_424 < (ulong)mVar33) &&
                       (*(char *)((long)local_440 + (long)local_424) != '\0')) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    if (local_424 < iVar8) goto LAB_00102445;
LAB_0010244e:
                    mVar30.__count = local_424 + 1;
                    mVar30.__value.__wch = 0;
                    if ((ulong)mVar33 <= (ulong)mVar30) {
                      if (0x7ffffffe < (ulong)local_460) goto LAB_00101142;
                      mVar40 = (mbstate_t)((ulong)(local_424 + 2) + (long)mVar11);
                      puVar10 = local_458;
                      if ((long)mVar21 < 0) {
                        if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                      }
                      else {
                        if (CARRY8((ulong)(local_424 + 2),(ulong)mVar11)) goto LAB_00100bd4;
                        mVar31 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar40 < (ulong)mVar31) {
                          mVar40 = mVar31;
                        }
                        if ((ulong)mVar21 < (ulong)mVar40) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar31.__count = 0xc;
                            mVar31.__value = (_union_27)0x0;
                          }
                          mVar21 = mVar40;
                          if ((ulong)mVar40 <= (ulong)mVar31) {
                            mVar21 = mVar31;
                          }
                          if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                          if (mVar16 == local_430) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x10251c;
                            mVar17 = (mbstate_t)malloc((size_t)mVar21);
                            mVar40 = local_430;
                            puVar10 = local_458;
                            if (mVar17 == (mbstate_t)0x0) goto LAB_00100bd4;
                            if (mVar11 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x10253f;
                              mVar17 = (mbstate_t)__memcpy_chk(mVar17,mVar40,mVar11,mVar21);
                            }
                            local_440 = (mbstate_t)((long)mVar17 + (long)mVar11);
                            mVar16 = mVar17;
                          }
                          else {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x1024cf;
                            mVar40 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                            puVar10 = local_458;
                            if (mVar40 == (mbstate_t)0x0) goto LAB_00100bd4;
                            local_440 = (mbstate_t)((long)mVar40 + (long)mVar11);
                            mVar16 = mVar40;
                          }
                        }
                      }
                      goto LAB_00102396;
                    }
                  }
                  else {
                    local_490 = local_460;
LAB_00101dd0:
                    mVar40 = local_440;
                    puVar10 = local_450;
                    mVar38.__count = 0x7fffffff;
                    mVar38.__value = (_union_27)0x0;
                    local_424 = -1;
                    mVar17 = (mbstate_t)((long)mVar21 - (long)mVar11);
                    *(wchar_t *)local_438 = L'\0';
                    if ((ulong)mVar17 < 0x80000000) {
                      mVar38 = mVar17;
                    }
                    cVar4 = local_400[(long)*(mbstate_t *)((long)mVar47 + 0x50) * 0x20 + 0x10];
                    *(mbstate_t *)((long)pmVar35 + -0x10) = local_448;
                    local_460 = mVar38;
                    *(undefined8 *)((long)pmVar35 + -0x18) = 0x101e3f;
                    iVar8 = __snprintf_chk(mVar40,mVar38,2,0xffffffffffffffff,puVar10,(int)cVar4);
                    if (local_424 < 0) {
                      if (*(char *)((long)local_490 + 1) != '\0') {
                        *(char *)((long)local_490 + 1) = '\0';
                        goto LAB_00101dd0;
                      }
                      if (iVar8 < 0) goto LAB_001008e8;
LAB_00101e74:
                      local_424 = iVar8;
                    }
                    else {
                      if (((ulong)(long)local_424 < (ulong)local_460) &&
                         (*(char *)((long)local_440 + (long)local_424) != '\0'))
                      goto code_r0x001027c7;
                      if (local_424 < iVar8) goto LAB_00101e74;
                    }
                    mVar22.__value.__wch = 0;
                    mVar22.__count = local_424 + 1;
                    if ((ulong)local_460 <= (ulong)mVar22) {
                      if (0x7ffffffe < (ulong)mVar17) goto LAB_00101142;
                      mVar40 = (mbstate_t)((ulong)(local_424 + 2) + (long)mVar11);
                      puVar10 = local_458;
                      if ((long)mVar21 < 0) {
                        if (mVar21 != (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                      }
                      else {
                        if (CARRY8((ulong)(local_424 + 2),(ulong)mVar11)) goto LAB_00100bd4;
                        mVar28 = (mbstate_t)((long)mVar21 * 2);
                        if ((ulong)mVar40 < (ulong)mVar28) {
                          mVar40 = mVar28;
                        }
                        if ((ulong)mVar21 < (ulong)mVar40) {
                          if (mVar21 == (mbstate_t)0x0) {
                            mVar28.__count = 0xc;
                            mVar28.__value = (_union_27)0x0;
                          }
                          mVar21 = mVar28;
                          if ((ulong)mVar28 <= (ulong)mVar40) {
                            mVar21 = mVar40;
                          }
                          if (mVar21 == (mbstate_t)0xffffffffffffffff) goto LAB_00100bd4;
                          if (local_430 == mVar16) {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x101f47;
                            mVar17 = (mbstate_t)malloc((size_t)mVar21);
                            mVar40 = local_430;
                            puVar10 = local_458;
                            if (mVar17 == (mbstate_t)0x0) goto LAB_00100bd4;
                            if (mVar11 != (mbstate_t)0x0) {
                              *(undefined8 *)((long)pmVar35 + -8) = 0x101f6a;
                              mVar17 = (mbstate_t)__memcpy_chk(mVar17,mVar40,mVar11,mVar21);
                            }
                            local_440 = (mbstate_t)((long)mVar17 + (long)mVar11);
                            mVar16 = mVar17;
                          }
                          else {
                            *(undefined8 *)((long)pmVar35 + -8) = 0x101efa;
                            mVar40 = (mbstate_t)realloc((void *)mVar16,(size_t)mVar21);
                            puVar10 = local_458;
                            if (mVar40 == (mbstate_t)0x0) goto LAB_00100bd4;
                            local_440 = (mbstate_t)((long)mVar40 + (long)mVar11);
                            mVar16 = mVar40;
                          }
                        }
                      }
                      goto LAB_00101dd0;
                    }
                  }
                }
LAB_0010111b:
                *(int *)local_438 = local_488.__count;
                mVar17 = (mbstate_t)((long)local_424 + (long)mVar11);
              }
LAB_00100d4a:
              param_3 = *(mbstate_t *)((long)mVar47 + 8);
              mVar40 = *(mbstate_t *)((long)mVar47 + 0x58);
              mVar47 = (mbstate_t)((long)mVar47 + 0x58);
              local_470 = local_470 + 1;
              mVar11 = mVar17;
              mVar12 = mVar16;
            } while (mVar40 == param_3);
          } while( true );
        }
        if ((local_468 != 0xffffffffffffffff) &&
           (puVar10 = (undefined1 *)malloc(local_468), local_450 = puVar10,
           puVar10 != (undefined1 *)0x0)) goto LAB_001000e4;
      }
      piVar13 = __errno_location();
      *piVar13 = 0xc;
      pmVar34 = &local_4a8;
    }
LAB_00100633:
    if (local_310 != (mbstate_t)local_2f8) {
      *(undefined8 *)((long)pmVar34 + -8) = 0x10064b;
      free((void *)local_310);
    }
    pmVar7 = pmVar34;
    if (local_400 != local_3f8) {
      *(undefined8 *)((long)pmVar34 + -8) = 0x100663;
      free(local_400);
    }
  }
  pmVar35 = pmVar7;
  mVar12.__count = 0;
  mVar12.__value = (_union_27)0x0;
LAB_00100666:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)pmVar35 + -8) = 0x10272b;
    __stack_chk_fail();
  }
  return mVar12;
LAB_001008e8:
  puVar10 = local_458;
  if (*(wchar_t *)local_438 == L'\0') {
    wVar42 = L'\x16';
    if ((((mbstate_t *)((long)mVar47 + 0x48))->__count & 0xef) == 99) {
      wVar42 = L'T';
    }
    *(wchar_t *)local_438 = wVar42;
  }
  goto LAB_00100be1;
LAB_00102065:
  puVar10 = local_458;
  *(undefined8 *)((long)pmVar35 + -8) = 0x10206a;
  piVar13 = __errno_location();
  *piVar13 = 0x54;
  goto LAB_00100be1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vasnprintf_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


