
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



undefined8 test_bio_base64_run(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *__s;
  char *__s_00;
  char *__s_01;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *data;
  size_t sVar8;
  size_t sVar9;
  BIO_METHOD *pBVar10;
  BIO *pBVar11;
  BIO *b;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  ushort *puVar15;
  void *data_00;
  long in_FS_OFFSET;
  ushort *local_78;
  undefined1 local_4a;
  undefined1 local_49;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  iVar14 = *(int *)(param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] == 0) {
    if (0x9ffff < iVar14 - 1U) goto LAB_001003e0;
    local_78 = (ushort *)CRYPTO_malloc(iVar14,"test/bio_base64_test.c",0x3a);
    if (local_78 == (ushort *)0x0) goto LAB_001003d8;
    RAND_bytes((uchar *)local_78,iVar14);
    iVar14 = *(int *)(param_1 + 2);
LAB_001001a7:
    iVar14 = iVar14 + 0x400;
    data = CRYPTO_malloc(iVar14,"test/bio_base64_test.c",0xd4);
    if (data == (void *)0x0) {
      CRYPTO_free(local_78);
      test_error("test/bio_base64_test.c",0xd7,"out of memory");
    }
    else {
      iVar7 = *(int *)((long)param_1 + 0x14);
      __s = (char *)*param_1;
      __s_00 = (char *)param_1[3];
      __s_01 = (char *)param_1[1];
      uVar1 = *(uint *)(param_1 + 2);
      sVar8 = strlen(__s);
      sVar9 = strlen(__s_00);
      local_4a = 10;
      pBVar10 = BIO_s_mem();
      pBVar11 = BIO_new(pBVar10);
      if (pBVar11 == (BIO *)0x0) {
LAB_00100378:
        data_00 = (void *)0x0;
      }
      else {
        if ((*__s != '\0') &&
           ((iVar5 = BIO_write(pBVar11,__s,(int)sVar8), iVar5 != (int)sVar8 ||
            (iVar5 = BIO_write(pBVar11,&local_4a,1), iVar5 != 1)))) {
LAB_00100370:
          BIO_free(pBVar11);
          goto LAB_00100378;
        }
        local_48 = 0;
        local_49 = 10;
        if (__s_01 == (char *)0x0) {
          puVar15 = local_78;
          for (; 2 < uVar1; uVar1 = uVar1 - 3) {
            uVar3 = puVar15[1];
            uVar13 = (ulong)(int)((uint)(byte)*puVar15 << 0x10 |
                                  (uint)*(byte *)((long)puVar15 + 1) << 8 | (uint)(byte)uVar3);
            iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                          [uVar13 >> 0x12],param_3,param_2,&local_48);
            if ((((iVar5 == 0) ||
                 (iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                [(uint)(uVar13 >> 0xc) & 0x3f],param_3,param_2,
                                   &local_48), iVar5 == 0)) ||
                (iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                               [(uint)(uVar13 >> 6) & 0x3f],param_3,param_2,
                                  &local_48), iVar5 == 0)) ||
               (iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [(byte)uVar3 & 0x3f],param_3,param_2,&local_48),
               iVar5 == 0)) goto LAB_00100370;
            puVar15 = (ushort *)((long)puVar15 + 3);
          }
          if (uVar1 == 2) {
            uVar3 = *puVar15 << 8;
            uVar4 = uVar3 | *puVar15 >> 8;
            iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                          [uVar3 >> 10],param_3,param_2,&local_48);
            if ((iVar5 != 0) &&
               (iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [uVar4 >> 4 & 0x3f],param_3,param_2,&local_48),
               iVar5 != 0)) {
              iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                            [(uint)uVar4 * 4 & 0x3c],param_3,param_2,&local_48);
joined_r0x00100990:
              if ((iVar5 != 0) &&
                 (iVar5 = memoutws(pBVar11,0x3d,param_3,param_2,&local_48), iVar5 != 0))
              goto LAB_00100882;
            }
          }
          else if (uVar1 == 1) {
            uVar3 = *puVar15;
            iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                          [(byte)((byte)uVar3 >> 2)],param_3,param_2,&local_48);
            if ((iVar5 != 0) &&
               (iVar5 = memoutws(pBVar11,(int)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                              [((byte)uVar3 & 3) << 4],param_3,param_2,&local_48),
               iVar5 != 0)) {
              iVar5 = memoutws(pBVar11,0x3d,param_3,param_2,&local_48);
              goto joined_r0x00100990;
            }
          }
          else {
LAB_00100882:
            do {
              if (iVar7 < 1) {
                if ((local_48 < 1) || (iVar7 = BIO_write(pBVar11,&local_49,1), iVar7 == 1))
                goto LAB_00100420;
                break;
              }
              iVar7 = iVar7 + -1;
              iVar5 = memoutws(pBVar11,0x41,param_3,param_2,&local_48);
            } while (iVar5 != 0);
          }
          goto LAB_00100370;
        }
        sVar8 = strlen(__s_01);
        iVar7 = BIO_write(pBVar11,__s_01,(int)sVar8);
        if (iVar7 != (int)sVar8) goto LAB_00100370;
LAB_00100420:
        if ((*__s_00 != '\0') &&
           ((iVar7 = BIO_write(pBVar11,__s_00,(int)sVar9), iVar7 != (int)sVar9 ||
            (iVar7 = BIO_write(pBVar11,&local_4a,1), iVar7 != 1)))) goto LAB_00100370;
        BIO_ctrl(pBVar11,0x73,0,&local_48);
        puVar2 = (undefined8 *)CONCAT44(uStack_44,local_48);
        data_00 = (void *)puVar2[1];
        uVar12 = *puVar2;
        puVar2[1] = 0;
        BIO_ctrl(pBVar11,9,0,(void *)0x0);
        BIO_free(pBVar11);
        BUF_MEM_free((BUF_MEM *)CONCAT44(uStack_44,local_48));
        iVar7 = (int)uVar12;
        if (-1 < iVar7) {
          pBVar10 = BIO_s_mem();
          pBVar11 = BIO_new(pBVar10);
          if (pBVar11 != (BIO *)0x0) {
            if (*(int *)(param_1 + 4) == 0) {
              BIO_ctrl(pBVar11,0x82,0,(void *)0x0);
            }
            else {
              BIO_ctrl(pBVar11,0x82,-0x6c1,(void *)0x0);
            }
            iVar5 = iVar7;
            if (*(int *)(param_1 + 4) != 0) {
              iVar5 = iVar7 >> 1;
            }
            if (iVar5 != 0) {
              BIO_write(pBVar11,data_00,iVar5);
            }
            pBVar10 = BIO_f_base64();
            b = BIO_new(pBVar10);
            if (*(int *)((long)param_1 + 0x24) != 0) {
              BIO_set_flags(b,0x100);
            }
            BIO_push(b,pBVar11);
            iVar6 = BIO_read(b,data,iVar14);
            if (iVar5 < iVar7) {
              BIO_write(pBVar11,(void *)((long)iVar5 + (long)data_00),iVar7 - iVar5);
              if (iVar6 < 1) {
                if (iVar6 == -0x6c1) {
                  iVar6 = BIO_read(b,data,iVar14);
                  goto LAB_00100556;
                }
              }
              else {
                iVar7 = BIO_read(b,(void *)((long)iVar6 + (long)data),iVar14 - iVar6);
                if (0 < iVar7) {
                  iVar6 = iVar6 + iVar7;
                }
              }
            }
            else {
LAB_00100556:
              if (iVar6 == -0x6c1) {
                iVar6 = 0;
              }
            }
            if (*(int *)(param_1 + 4) != 0) {
              BIO_ctrl(pBVar11,0x82,0,(void *)0x0);
            }
            if (iVar6 < iVar14) {
              iVar14 = BIO_read(b,(void *)((long)iVar6 + (long)data),iVar14 - iVar6);
              if (*(int *)((long)param_1 + 0x14) < 1) {
LAB_00100675:
                iVar7 = *(int *)(param_1 + 2);
                if (iVar7 == 0) {
                  if (*(int *)((long)param_1 + 0x24) != 0) {
                    if ((*(char *)param_1[3] == '\0') || (*(char *)param_1[3] == '-'))
                    goto LAB_001006a5;
                    goto LAB_001005ac;
                  }
                  if (iVar14 != 0 || iVar6 != 0) goto LAB_001007f1;
                  uVar12 = 0;
                  goto LAB_001005d1;
                }
                if ((*(char *)param_1[3] != '-') && (*(char *)param_1[3] != '\0'))
                goto LAB_001005ac;
                if (*(int *)((long)param_1 + 0x24) != 0) {
LAB_001006a5:
                  if (*(char *)*param_1 != '\0') goto LAB_001005ac;
                }
                if ((iVar14 == 0) && (iVar7 == iVar6)) {
                  if (iVar7 < 1) goto LAB_00100664;
                  iVar14 = memcmp(local_78,data,(long)iVar7);
                  if (iVar14 == 0) {
                    uVar12 = 0;
                    goto LAB_001005d1;
                  }
                }
LAB_001007f1:
                test_error("test/bio_base64_test.c",0x12a,"Failed to decode expected data");
              }
              else {
LAB_001005ac:
                if (iVar14 < 0) goto LAB_00100664;
                test_error("test/bio_base64_test.c",0x126,"Final read result was non-negative");
              }
              uVar12 = 0xffffffff;
            }
            else {
              test_error("test/bio_base64_test.c",0x114,"Unexpectedly long decode output");
              if (*(int *)((long)param_1 + 0x14) < 1) {
                iVar14 = -1;
                goto LAB_00100675;
              }
LAB_00100664:
              uVar12 = 0;
            }
LAB_001005d1:
            BIO_free_all(b);
            CRYPTO_free(data);
            CRYPTO_free(local_78);
            CRYPTO_free(data_00);
            goto LAB_00100612;
          }
        }
      }
      CRYPTO_free(local_78);
      CRYPTO_free(data);
      CRYPTO_free(data_00);
      test_error("test/bio_base64_test.c",0xe1,"out of memory");
    }
  }
  else {
    local_78 = (ushort *)CRYPTO_zalloc(iVar14,"test/bio_base64_test.c",0xca);
    if (local_78 != (ushort *)0x0) {
      iVar14 = *(int *)(param_1 + 2);
      goto LAB_001001a7;
    }
LAB_001003d8:
    iVar14 = *(int *)(param_1 + 2);
LAB_001003e0:
    if (iVar14 == 0) {
      local_78 = (ushort *)0x0;
      iVar14 = 0;
      goto LAB_001001a7;
    }
    test_error("test/bio_base64_test.c",0xcf,"out of memory");
  }
  uVar12 = 0xffffffff;
LAB_00100612:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bio_base64_corner_case_bug(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  char *local_38;
  char *pcStack_30;
  undefined8 local_28;
  undefined *local_20;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = param_1 >> 1 & 1;
  local_18 = param_1 & 1;
  if (param_1 >> 2 == 0) {
    local_28 = 6;
    local_20 = &_LC8;
    local_38 = "#foo\n#bar";
    pcStack_30 = "A\nAAA\nAAAA\n";
    puVar3 = &linelengths;
    uVar1 = linelengths;
    if (linelengths != 0) {
      do {
        if ((uint)(wscnts * 2) < uVar1) {
          iVar2 = test_bio_base64_run(&local_38,local_14 * 0x40 + uVar1);
          bVar4 = iVar2 == 0;
          goto LAB_00100b2d;
        }
        if (9 < uVar1) break;
        uVar1 = puVar3[1];
        puVar3 = puVar3 + 1;
      } while (uVar1 != 0);
    }
    bVar4 = true;
  }
  else {
    __fprintf_chk(_stderr,2,"Test index out of range: %d",param_1);
    bVar4 = false;
  }
LAB_00100b2d:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_bio_base64_generated(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  char *local_50;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (int)((ulong)param_1 / 6) + (int)(((ulong)param_1 / 6) / 0x19) * -0x19;
  uVar7 = uVar3 % 6;
  local_44 = param_1 / 300 & 1;
  local_48 = param_1 / 0x96 & 1;
  if (param_1 < 600) {
    lVar5 = (long)(int)(uVar3 / 6);
    local_60 = 0;
    local_68 = *(undefined8 *)(prefixes + lVar5 * 8);
    local_54 = 0;
    local_58 = *(uint *)(lengths + (long)(int)(param_1 % 6) * 4);
    uVar6 = (ulong)local_58;
    local_50 = *(char **)(suffixes + lVar5 * 8);
    if ((uVar7 == 0) || (2 < uVar7)) {
      if (2 < uVar7) {
        local_54 = uVar7 - 2;
        goto LAB_00100c7c;
      }
    }
    else {
      local_58 = local_58 + uVar7;
      uVar6 = (ulong)local_58;
LAB_00100c7c:
      if ((*local_50 != '\0') && (*local_50 != '-')) {
        test_error("test/bio_base64_test.c",0x18e,"Unexpected suffix test after padding");
        goto LAB_00100d74;
      }
    }
    if (linelengths == 0) {
      uVar10 = 1;
    }
    else {
      iVar8 = local_44 * 0x40;
      puVar9 = (uint *)&linelengths;
      uVar10 = 1;
      do {
        uVar3 = *puVar9;
        puVar11 = &wscnts;
        if ((uint)(wscnts * 2) < uVar3) {
          do {
            iVar4 = test_bio_base64_run(&local_68,uVar3 + iVar8);
            uVar3 = *puVar9;
            if (iVar4 != 0) {
              uVar10 = 0;
            }
            piVar1 = puVar11 + 1;
            puVar11 = puVar11 + 1;
          } while ((uint)(*piVar1 * 2) < uVar3);
        }
      } while ((uVar3 <= (uint)((int)(uVar6 >> 1) + (int)uVar6)) &&
              (puVar2 = puVar9 + 1, puVar9 = puVar9 + 1, *puVar2 != 0));
    }
  }
  else {
    __fprintf_chk(_stderr,2,"Test index out of range: %d",param_1);
LAB_00100d74:
    uVar10 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
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
  DAT_0010169f = 0;
  add_all_tests("test_bio_base64_generated",test_bio_base64_generated,600,1);
  add_all_tests("test_bio_base64_corner_case_bug",test_bio_base64_corner_case_bug,4,1);
  return 1;
}


