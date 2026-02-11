
bool memoutws(BIO *param_1,undefined1 param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
LAB_00100048:
    local_41 = param_2;
    iVar1 = BIO_write(param_1,&local_41,1);
    if (iVar1 == 1) {
      if (param_4 == *param_5 + 1) {
        local_41 = 10;
        *param_5 = 0;
        iVar1 = BIO_write(param_1,&local_41,1);
        bVar3 = iVar1 == 1;
      }
      else {
        *param_5 = *param_5 + 1;
        bVar3 = true;
      }
      goto LAB_00100064;
    }
  }
  else {
    uVar2 = test_random();
    if (param_3 <= (uint)((uVar2 & 0xffffffff) % (ulong)param_4)) goto LAB_00100048;
    local_41 = 0x20;
    iVar1 = BIO_write(param_1,&local_41,1);
    if (iVar1 == 1) {
      if (param_4 == *param_5 + 1) {
        local_41 = 10;
        *param_5 = 0;
        iVar1 = BIO_write(param_1,&local_41,1);
        if (iVar1 != 1) goto LAB_00100062;
      }
      else {
        *param_5 = *param_5 + 1;
      }
      goto LAB_00100048;
    }
  }
LAB_00100062:
  bVar3 = false;
LAB_00100064:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



undefined4 generic_case_constprop_0(undefined8 *param_1)

{
  char *__s;
  char *__s_00;
  char *__s_01;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *data;
  size_t sVar9;
  size_t sVar10;
  BIO_METHOD *pBVar11;
  BIO *pBVar12;
  BIO *b;
  void *data_00;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  long in_FS_OFFSET;
  int *local_b8;
  int *local_90;
  ushort *local_80;
  uint *local_68;
  undefined4 local_5c;
  undefined1 local_4a;
  undefined1 local_49;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (linelengths == 0) {
    local_5c = 1;
  }
  else {
    uVar14 = *(uint *)(param_1 + 2);
    local_68 = (uint *)&linelengths;
    local_5c = 1;
    do {
      iVar8 = wscnts;
      uVar18 = *local_68;
      if ((uint)(wscnts * 2) < uVar18) {
        iVar17 = *(int *)((long)param_1 + 0x24);
        if (param_1[1] == 0) {
          local_90 = &wscnts;
          goto LAB_001006d5;
        }
        local_80 = (ushort *)CRYPTO_zalloc(uVar14,"test/bio_base64_test.c",0xca);
        if (local_80 != (ushort *)0x0) {
          iVar15 = *(int *)(param_1 + 2);
          local_90 = &wscnts;
          goto LAB_00100212;
        }
        uVar14 = *(uint *)(param_1 + 2);
        local_90 = &wscnts;
LAB_00100200:
        if (uVar14 != 0) {
          test_error("test/bio_base64_test.c",0xcf,"out of memory");
          goto LAB_00100690;
        }
        local_80 = (ushort *)0x0;
        iVar15 = 0;
LAB_00100212:
        do {
          iVar15 = iVar15 + 0x400;
          data = CRYPTO_malloc(iVar15,"test/bio_base64_test.c",0xd4);
          if (data == (void *)0x0) {
            CRYPTO_free(local_80);
            test_error("test/bio_base64_test.c",0xd7,"out of memory");
LAB_00100690:
            local_5c = 0;
            lVar2 = param_1[1];
          }
          else {
            __s = (char *)*param_1;
            iVar7 = *(int *)((long)param_1 + 0x14);
            uVar14 = *(uint *)(param_1 + 2);
            __s_00 = (char *)param_1[3];
            __s_01 = (char *)param_1[1];
            sVar9 = strlen(__s);
            sVar10 = strlen(__s_00);
            local_4a = 10;
            pBVar11 = BIO_s_mem();
            pBVar12 = BIO_new(pBVar11);
            if (pBVar12 == (BIO *)0x0) {
LAB_00100408:
              data_00 = (void *)0x0;
LAB_0010040a:
              CRYPTO_free(local_80);
              CRYPTO_free(data);
              CRYPTO_free(data_00);
              test_error("test/bio_base64_test.c",0xe1,"out of memory");
              goto LAB_00100690;
            }
            if ((*__s != '\0') &&
               ((iVar6 = BIO_write(pBVar12,__s,(int)sVar9), iVar6 != (int)sVar9 ||
                (iVar6 = BIO_write(pBVar12,&local_4a,1), iVar6 != 1)))) {
LAB_00100400:
              BIO_free(pBVar12);
              goto LAB_00100408;
            }
            local_48 = 0;
            local_49 = 10;
            if (__s_01 == (char *)0x0) {
              iVar17 = uVar18 + (uint)(iVar17 != 0) * 0x40;
              puVar16 = local_80;
              for (; 2 < uVar14; uVar14 = uVar14 - 3) {
                uVar4 = puVar16[1];
                uVar13 = (ulong)(int)((uint)(byte)*puVar16 << 0x10 |
                                      (uint)*(byte *)((long)puVar16 + 1) << 8 | (uint)(byte)uVar4);
                iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [uVar13 >> 0x12],iVar8,iVar17,&local_48);
                if ((((iVar6 == 0) ||
                     (iVar6 = memoutws(pBVar12,(int)
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(uint)(uVar13 >> 0xc) & 0x3f],iVar8,iVar17,
                                       &local_48), iVar6 == 0)) ||
                    (iVar6 = memoutws(pBVar12,(int)
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(uint)(uVar13 >> 6) & 0x3f],iVar8,iVar17,
                                      &local_48), iVar6 == 0)) ||
                   (iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(byte)uVar4 & 0x3f],iVar8,iVar17,&local_48),
                   iVar6 == 0)) goto LAB_00100400;
                puVar16 = (ushort *)((long)puVar16 + 3);
              }
              if (uVar14 == 2) {
                uVar4 = *puVar16 << 8;
                uVar5 = uVar4 | *puVar16 >> 8;
                iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [uVar4 >> 10],iVar8,iVar17);
                if ((iVar6 != 0) &&
                   (iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [uVar5 >> 4 & 0x3f],iVar8,iVar17,&local_48),
                   iVar6 != 0)) {
                  iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                [(uint)uVar5 * 4 & 0x3c],iVar8,iVar17,&local_48);
joined_r0x00100acb:
                  if (iVar6 != 0) {
                    local_b8 = &local_48;
                    iVar6 = memoutws(pBVar12,0x3d,iVar8,iVar17,local_b8);
                    if (iVar6 != 0) goto LAB_001009a4;
                  }
                }
              }
              else if (uVar14 == 1) {
                uVar4 = *puVar16;
                iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [(byte)((byte)uVar4 >> 2)],iVar8,iVar17);
                if ((iVar6 != 0) &&
                   (iVar6 = memoutws(pBVar12,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [((byte)uVar4 & 3) << 4],iVar8,iVar17,&local_48),
                   iVar6 != 0)) {
                  iVar6 = memoutws(pBVar12,0x3d,iVar8,iVar17,&local_48);
                  goto joined_r0x00100acb;
                }
              }
              else {
LAB_001009a4:
                do {
                  if (iVar7 < 1) {
                    if ((local_48 < 1) || (iVar8 = BIO_write(pBVar12,&local_49,1), iVar8 == 1))
                    goto LAB_001004a0;
                    BIO_free(pBVar12);
                    goto LAB_00100408;
                  }
                  iVar7 = iVar7 + -1;
                  iVar6 = memoutws(pBVar12,0x41,iVar8,iVar17,&local_48);
                } while (iVar6 != 0);
              }
              goto LAB_00100400;
            }
            sVar9 = strlen(__s_01);
            iVar8 = BIO_write(pBVar12,__s_01,(int)sVar9);
            if (iVar8 != (int)sVar9) goto LAB_00100400;
LAB_001004a0:
            if ((*__s_00 != '\0') &&
               ((iVar8 = BIO_write(pBVar12,__s_00,(int)sVar10), iVar8 != (int)sVar10 ||
                (iVar8 = BIO_write(pBVar12,&local_4a,1), iVar8 != 1)))) goto LAB_00100400;
            BIO_ctrl(pBVar12,0x73,0,&local_48);
            puVar3 = (undefined8 *)CONCAT44(uStack_44,local_48);
            data_00 = (void *)puVar3[1];
            uVar1 = *puVar3;
            puVar3[1] = 0;
            BIO_ctrl(pBVar12,9,0,(void *)0x0);
            BIO_free(pBVar12);
            BUF_MEM_free((BUF_MEM *)CONCAT44(uStack_44,local_48));
            iVar8 = (int)uVar1;
            if (iVar8 < 0) goto LAB_0010040a;
            pBVar11 = BIO_s_mem();
            pBVar12 = BIO_new(pBVar11);
            if (pBVar12 == (BIO *)0x0) goto LAB_0010040a;
            if (*(int *)(param_1 + 4) == 0) {
              BIO_ctrl(pBVar12,0x82,0,(void *)0x0);
            }
            else {
              BIO_ctrl(pBVar12,0x82,-0x6c1,(void *)0x0);
            }
            iVar17 = iVar8;
            if (*(int *)(param_1 + 4) != 0) {
              iVar17 = iVar8 >> 1;
            }
            if (iVar17 != 0) {
              BIO_write(pBVar12,data_00,iVar17);
            }
            pBVar11 = BIO_f_base64();
            b = BIO_new(pBVar11);
            if (*(int *)((long)param_1 + 0x24) != 0) {
              BIO_set_flags(b,0x100);
            }
            BIO_push(b,pBVar12);
            iVar7 = BIO_read(b,data,iVar15);
            if (iVar17 < iVar8) {
              BIO_write(pBVar12,(void *)((long)iVar17 + (long)data_00),iVar8 - iVar17);
              if (iVar7 < 1) {
                if (iVar7 == -0x6c1) {
                  iVar7 = BIO_read(b,data,iVar15);
                  goto LAB_001005d9;
                }
              }
              else {
                iVar8 = BIO_read(b,(void *)((long)iVar7 + (long)data),iVar15 - iVar7);
                if (0 < iVar8) {
                  iVar7 = iVar7 + iVar8;
                }
              }
            }
            else {
LAB_001005d9:
              if (iVar7 == -0x6c1) {
                iVar7 = 0;
              }
            }
            if (*(int *)(param_1 + 4) != 0) {
              BIO_ctrl(pBVar12,0x82,0,(void *)0x0);
            }
            if (iVar7 < iVar15) {
              iVar8 = BIO_read(b,(void *)((long)iVar7 + (long)data),iVar15 - iVar7);
              if (*(int *)((long)param_1 + 0x14) < 1) goto LAB_001007e5;
              goto LAB_0010062f;
            }
            test_error("test/bio_base64_test.c",0x114,"Unexpectedly long decode output");
            if (*(int *)((long)param_1 + 0x14) < 1) {
              iVar8 = -1;
LAB_001007e5:
              if (*(int *)(param_1 + 2) == 0) {
                if (*(int *)((long)param_1 + 0x24) != 0) {
                  if ((*(char *)param_1[3] == '\0') || (*(char *)param_1[3] == '-'))
                  goto LAB_00100949;
                  goto LAB_0010062f;
                }
                if (iVar8 == 0 && iVar7 == 0) goto LAB_00100760;
LAB_00100809:
                test_error("test/bio_base64_test.c",0x12a,"Failed to decode expected data");
LAB_0010064f:
                BIO_free_all(b);
                CRYPTO_free(data);
                CRYPTO_free(local_80);
                CRYPTO_free(data_00);
                goto LAB_00100690;
              }
              if ((*(char *)param_1[3] == '-') || (*(char *)param_1[3] == '\0')) {
                if (*(int *)((long)param_1 + 0x24) != 0) {
LAB_00100949:
                  if (*(char *)*param_1 != '\0') goto LAB_0010062f;
                }
                if (((iVar8 != 0) || (iVar7 != *(int *)(param_1 + 2))) ||
                   ((0 < iVar7 && (iVar8 = memcmp(local_80,data,(long)iVar7), iVar8 != 0))))
                goto LAB_00100809;
              }
              else {
LAB_0010062f:
                if (-1 < iVar8) {
                  test_error("test/bio_base64_test.c",0x126,"Final read result was non-negative");
                  goto LAB_0010064f;
                }
              }
            }
LAB_00100760:
            BIO_free_all(b);
            CRYPTO_free(data);
            CRYPTO_free(local_80);
            CRYPTO_free(data_00);
            lVar2 = param_1[1];
          }
          if (lVar2 != 0) goto LAB_001007b5;
          local_90 = local_90 + 1;
          uVar14 = *(uint *)(param_1 + 2);
          uVar18 = *local_68;
          if (uVar18 <= (uint)(*local_90 * 2)) break;
          iVar17 = *(int *)((long)param_1 + 0x24);
          iVar8 = *local_90;
LAB_001006d5:
          if (0x9ffff < uVar14 - 1) goto LAB_00100200;
          local_80 = (ushort *)CRYPTO_malloc(uVar14,"test/bio_base64_test.c",0x3a);
          if (local_80 == (ushort *)0x0) goto LAB_00100bf7;
          RAND_bytes((uchar *)local_80,uVar14);
          iVar15 = *(int *)(param_1 + 2);
        } while( true );
      }
    } while ((uVar18 <= (uVar14 >> 1) + uVar14) && (local_68 = local_68 + 1, *local_68 != 0));
  }
LAB_001007b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_5c;
LAB_00100bf7:
  uVar14 = *(uint *)(param_1 + 2);
  goto LAB_00100200;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_bio_base64_generated(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  char *local_20;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = param_1 / 300 & 1;
  uVar1 = (int)((ulong)param_1 / 6) + (int)(((ulong)param_1 / 6) / 0x19) * -0x19;
  uVar4 = uVar1 % 6;
  local_18 = param_1 / 0x96 & 1;
  if (599 < param_1) {
    __fprintf_chk(_stderr,2,"Test index out of range: %d",param_1);
    uVar3 = 0;
    goto LAB_00100d07;
  }
  lVar2 = (long)(int)(uVar1 / 6);
  local_30 = 0;
  local_38 = *(undefined8 *)(prefixes + lVar2 * 8);
  local_24 = 0;
  local_28 = *(int *)(lengths + (long)(int)(param_1 % 6) * 4);
  local_20 = *(char **)(suffixes + lVar2 * 8);
  if ((uVar4 == 0) || (2 < uVar4)) {
    if (2 < uVar4) {
      local_24 = uVar4 - 2;
      goto LAB_00100cef;
    }
  }
  else {
    local_28 = local_28 + uVar4;
LAB_00100cef:
    if ((*local_20 != '\0') && (*local_20 != '-')) {
      test_error("test/bio_base64_test.c",0x18e,"Unexpected suffix test after padding");
      uVar3 = 0;
      goto LAB_00100d07;
    }
  }
  uVar3 = generic_case_constprop_0(&local_38);
LAB_00100d07:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_bio_base64_corner_case_bug(uint param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  char *local_38;
  char *pcStack_30;
  undefined8 local_28;
  undefined *local_20;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1 & 1;
  local_14 = param_1 >> 1 & 1;
  if (param_1 >> 2 == 0) {
    local_28 = 6;
    local_20 = &_LC9;
    local_38 = "#foo\n#bar";
    pcStack_30 = "A\nAAA\nAAAA\n";
    uVar1 = generic_case_constprop_0(&local_38);
  }
  else {
    __fprintf_chk(_stderr,2,"Test index out of range: %d",param_1);
    uVar1 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = &gunk;
  for (lVar1 = 0x100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0x6f6f6f6f6f6f6f6f;
    puVar2 = puVar2 + 1;
  }
  gunk._0_1_ = 0x23;
  DAT_0010171f = 0;
  add_all_tests("test_bio_base64_generated",test_bio_base64_generated,600,1);
  add_all_tests("test_bio_base64_corner_case_bug",test_bio_base64_corner_case_bug,4,1);
  return 1;
}


