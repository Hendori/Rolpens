
void str_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void sk_strcmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
add_entry(uint param_1,int param_2,char *param_3,void *param_4,int param_5,ushort param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  size_t sVar10;
  long *ptr;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  
  uVar14 = (param_1 + param_2) % 0x101;
  for (puVar13 = (undefined8 *)(&hash_table)[uVar14]; puVar13 != (undefined8 *)0x0;
      puVar13 = (undefined8 *)*puVar13) {
    if ((*(ushort *)((long)puVar13 + 0x1c) == param_1) && (*(int *)(puVar13 + 3) == param_2))
    goto LAB_001000ab;
  }
  puVar13 = (undefined8 *)app_malloc(0x20,"hash bucket");
  uVar2 = nilbucket_1._24_8_;
  uVar1 = nilbucket_1._16_8_;
  uVar12 = nilbucket_1._8_8_;
  *puVar13 = nilbucket_1._0_8_;
  puVar13[1] = uVar12;
  puVar13[2] = uVar1;
  puVar13[3] = uVar2;
  uVar12 = (&hash_table)[uVar14];
  *(short *)((long)puVar13 + 0x1c) = (short)param_1;
  *puVar13 = uVar12;
  *(int *)(puVar13 + 3) = param_2;
  (&hash_table)[uVar14] = puVar13;
LAB_001000ab:
  plVar15 = (long *)puVar13[1];
  if (plVar15 == (long *)0x0) {
LAB_0010010b:
    if (*(ushort *)((long)puVar13 + 0x1e) < 0x100) {
      ptr = (long *)app_malloc(0x58,"collision bucket");
      uVar8 = nilhentry_0._72_8_;
      uVar7 = nilhentry_0._64_8_;
      uVar6 = nilhentry_0._56_8_;
      uVar5 = nilhentry_0._48_8_;
      uVar4 = nilhentry_0._40_8_;
      uVar3 = nilhentry_0._32_8_;
      uVar2 = nilhentry_0._24_8_;
      uVar1 = nilhentry_0._16_8_;
      uVar12 = nilhentry_0._8_8_;
      *ptr = nilhentry_0._0_8_;
      ptr[1] = uVar12;
      ptr[2] = uVar1;
      ptr[3] = uVar2;
      ptr[4] = uVar3;
      ptr[5] = uVar4;
      ptr[6] = uVar5;
      ptr[7] = uVar6;
      ptr[8] = uVar7;
      ptr[9] = uVar8;
      uVar12 = nilhentry_0._80_8_;
      *(undefined2 *)(ptr + 2) = 0xffff;
      ptr[10] = uVar12;
      pcVar11 = CRYPTO_strdup(param_3,"apps/rehash.c",0xa8);
      ptr[1] = (long)pcVar11;
      if (pcVar11 != (char *)0x0) {
        if ((undefined8 *)puVar13[2] != (undefined8 *)0x0) {
          *(undefined8 *)puVar13[2] = ptr;
        }
        if (puVar13[1] == 0) {
          puVar13[1] = ptr;
        }
        puVar13[2] = ptr;
        if (param_6 < *(ushort *)(ptr + 2)) {
          *(ushort *)(ptr + 2) = param_6;
        }
        goto LAB_001001d0;
      }
      CRYPTO_free(ptr);
      BIO_printf(_bio_err,"out of memory\n");
    }
    else {
      uVar12 = opt_getprog();
      BIO_printf(_bio_err,"%s: error: hash table overflow for %s\n",uVar12,param_3);
    }
    uVar12 = 1;
  }
  else {
    sVar10 = (size_t)evpmdsize;
    ptr = (long *)0x0;
    if (param_4 == (void *)0x0) {
      do {
        ptr = plVar15;
        iVar9 = strcmp(param_3,(char *)ptr[1]);
        if (iVar9 == 0) goto LAB_0010020c;
        plVar15 = (long *)*ptr;
      } while ((long *)*ptr != (long *)0x0);
      goto LAB_0010010b;
    }
    do {
      iVar9 = memcmp(param_4,(void *)((long)plVar15 + 0x13),sVar10);
      if (iVar9 == 0) {
        pcVar11 = "CRL";
        if (param_1 == 0) {
          pcVar11 = "certificate";
        }
        uVar12 = opt_getprog();
        BIO_printf(_bio_err,"%s: warning: skipping duplicate %s in %s\n",uVar12,pcVar11,param_3);
        goto LAB_001001d8;
      }
      iVar9 = strcmp(param_3,(char *)plVar15[1]);
      if (iVar9 == 0) {
        ptr = plVar15;
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
    if (ptr == (long *)0x0) goto LAB_0010010b;
LAB_0010020c:
    if (param_6 < *(ushort *)(ptr + 2)) {
      *(ushort *)(ptr + 2) = param_6;
    }
LAB_001001d0:
    if ((param_5 != 0) && (*(char *)((long)ptr + 0x12) == '\0')) {
      *(undefined1 *)((long)ptr + 0x12) = 1;
      sVar10 = (size_t)evpmdsize;
      *(short *)((long)puVar13 + 0x1e) = *(short *)((long)puVar13 + 0x1e) + 1;
      memcpy((void *)((long)ptr + 0x13),param_4,sVar10);
    }
LAB_001001d8:
    uVar12 = 0;
  }
  return uVar12;
}



undefined8 handle_symlink(byte *param_1,char *param_2)

{
  int iVar1;
  ushort **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  char *local_1050;
  char local_1048 [4104];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar2 = __ctype_b_loc();
  pbVar7 = param_1;
  do {
    if ((*(byte *)((long)*ppuVar2 + (ulong)*pbVar7 * 2 + 1) & 0x10) == 0) goto LAB_00100470;
    iVar1 = OPENSSL_hexchar2int((ulong)*pbVar7);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 * 0x10 + iVar1;
  } while (param_1 + 8 != pbVar7);
  if (param_1[8] == 0x2e) {
    iVar1 = OPENSSL_strncasecmp(param_1 + 9,&_LC8,1);
    uVar3 = strtoul((char *)(param_1 + (10 - (ulong)(iVar1 != 0))),&local_1050,10);
    if (*local_1050 == '\0') {
      uVar4 = readlink(param_2,local_1048,0x1000);
      if (uVar4 < 0x1000) {
        local_1048[uVar4] = '\0';
        uVar5 = add_entry(iVar1 == 0,iVar6,local_1048,0,0,uVar3 & 0xffff);
        goto LAB_0010044a;
      }
    }
  }
LAB_00100470:
  uVar5 = 0xffffffff;
LAB_0010044a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int do_dir(char *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  int *piVar16;
  undefined8 uVar17;
  BIO *bp;
  stack_st_X509_INFO *psVar18;
  undefined8 *puVar19;
  X509_NAME *x;
  ulong uVar20;
  undefined8 uVar21;
  long *ptr;
  byte *pbVar22;
  long *plVar23;
  uint uVar24;
  long *ptr_00;
  int iVar25;
  long lVar26;
  long in_FS_OFFSET;
  ulong uVar27;
  char *local_188;
  undefined *local_160;
  int local_144;
  int local_124;
  undefined8 local_120;
  stat local_118;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  iVar6 = app_access(param_1,2);
  if (iVar6 < 0) {
    BIO_printf(_bio_err,"Skipping %s, can\'t write\n",param_1);
    local_144 = 1;
  }
  else {
    sVar11 = strlen(param_1);
    iVar6 = (int)sVar11;
    local_160 = &_LC9;
    if ((iVar6 != 0) && ((*param_1 == '\0' || (param_1[sVar11 - 1] != '/')))) {
      iVar6 = iVar6 + 1;
      local_160 = &_LC10;
    }
    if (verbose != 0) {
      BIO_printf(_bio_out,"Doing %s\n",param_1);
    }
    lVar12 = OPENSSL_sk_new(sk_strcmp);
    uVar20 = 0x14;
    if (lVar12 == 0) {
      BIO_printf(_bio_err,"Skipping %s, out of memory\n",param_1);
LAB_00100d14:
      local_188 = (char *)0x0;
      local_144 = 1;
    }
    else {
      while (pcVar13 = (char *)OPENSSL_DIR_read(&local_120,param_1), pcVar13 != (char *)0x0) {
        sVar11 = strlen(pcVar13);
        pcVar13 = CRYPTO_strdup(pcVar13,"apps/rehash.c",0x180);
        if ((pcVar13 == (char *)0x0) || (iVar7 = OPENSSL_sk_push(lVar12,pcVar13), iVar7 == 0)) {
          CRYPTO_free(pcVar13);
          OPENSSL_DIR_end(&local_120);
          BIO_puts(_bio_err,"out of memory\n");
          goto LAB_00100d14;
        }
        if (uVar20 < sVar11) {
          uVar20 = sVar11;
        }
      }
      OPENSSL_DIR_end(&local_120);
      OPENSSL_sk_sort(lVar12);
      iVar7 = iVar6 + 1 + (int)uVar20;
      sVar11 = (size_t)iVar7;
      local_188 = (char *)app_malloc(sVar11,"filename buffer");
      iVar8 = OPENSSL_sk_num(lVar12);
      if (iVar8 < 1) {
        local_144 = 0;
      }
      else {
        local_144 = 0;
        iVar25 = 0;
        do {
          pcVar13 = (char *)OPENSSL_sk_value(lVar12,iVar25);
          iVar9 = BIO_snprintf(local_188,sVar11,"%s%s%s",param_1,local_160,pcVar13);
          if (((iVar9 < iVar7) && (iVar9 = lstat(local_188,&local_118), -1 < iVar9)) &&
             (((local_118.st_mode & 0xf000) != 0xa000 ||
              (iVar9 = handle_symlink(pcVar13,local_188), iVar9 != 0)))) {
            pcVar14 = strrchr(pcVar13,0x2e);
            if (pcVar14 != (char *)0x0) {
              lVar26 = 0;
              do {
                iVar9 = OPENSSL_strcasecmp((&extensions)[lVar26],pcVar14 + 1);
                if (iVar9 == 0) {
                  bp = BIO_new_file(local_188,"r");
                  if (bp == (BIO *)0x0) {
                    uVar17 = opt_getprog();
                    local_144 = local_144 + 1;
                    BIO_printf(_bio_err,"%s: error: skipping %s, cannot open file\n",uVar17,pcVar13)
                    ;
                  }
                  else {
                    psVar18 = PEM_X509_INFO_read_bio
                                        (bp,(stack_st_X509_INFO *)0x0,(undefined1 *)0x0,(void *)0x0)
                    ;
                    BIO_free(bp);
                    if (psVar18 != (stack_st_X509_INFO *)0x0) {
                      iVar9 = OPENSSL_sk_num(psVar18);
                      if (iVar9 != 1) {
                        uVar17 = opt_getprog();
                        BIO_printf(_bio_err,
                                   "%s: warning: skipping %s, it does not contain exactly one certificate or CRL\n"
                                   ,uVar17,pcVar13);
                        goto LAB_0010068c;
                      }
                      puVar19 = (undefined8 *)OPENSSL_sk_value(psVar18,0);
                      if ((X509 *)*puVar19 == (X509 *)0x0) {
                        if (puVar19[1] != 0) {
                          x = (X509_NAME *)X509_CRL_get_issuer();
                          iVar9 = X509_CRL_digest((X509_CRL *)puVar19[1],evpmd,local_88,(uint *)0x0)
                          ;
                          uVar5 = 1;
                          goto joined_r0x00100dd3;
                        }
                      }
                      else {
                        x = X509_get_subject_name((X509 *)*puVar19);
                        iVar9 = X509_digest((X509 *)*puVar19,evpmd,local_88,(uint *)0x0);
                        uVar5 = 0;
joined_r0x00100dd3:
                        if (iVar9 != 0) {
                          if (x != (X509_NAME *)0x0) {
                            iVar9 = 0;
                            if (param_2 - 1 < 2) {
                              uVar17 = app_get0_propq();
                              uVar21 = app_get0_libctx();
                              uVar17 = X509_NAME_hash_ex(x,uVar21,uVar17,&local_124);
                              if (local_124 == 0) {
                                uVar17 = opt_getprog();
                                BIO_printf(_bio_err,"%s: error calculating SHA1 hash value\n",uVar17
                                          );
                                iVar9 = 1;
                              }
                              else {
                                iVar9 = add_entry(uVar5,uVar17,pcVar13,local_88,1,0xffff);
                              }
                            }
                            if ((param_2 & 0xfffffffd) == 0) {
                              uVar20 = X509_NAME_hash_old(x);
                              iVar10 = add_entry(uVar5,uVar20 & 0xffffffff,pcVar13,local_88,1,0xffff
                                                );
                              local_144 = local_144 + iVar10 + iVar9;
                            }
                            else {
                              local_144 = local_144 + iVar9;
                            }
                          }
                          goto LAB_0010068c;
                        }
                        BIO_printf(_bio_err,"out of memory\n");
                      }
                      local_144 = local_144 + 1;
                      goto LAB_0010068c;
                    }
                  }
                  break;
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 != 4);
            }
            psVar18 = (stack_st_X509_INFO *)0x0;
LAB_0010068c:
            OPENSSL_sk_pop_free(psVar18,&X509_INFO_free);
          }
          iVar25 = iVar25 + 1;
        } while (iVar8 != iVar25);
      }
      plVar23 = &hash_table;
      do {
        if ((long *)*plVar23 != (long *)0x0) {
          ptr = (long *)*plVar23;
          do {
            uVar2 = *(ushort *)((long)ptr + 0x1e);
            plVar4 = (long *)*ptr;
            uVar24 = (uint)uVar2;
            __memset_chk(local_88,0,(int)(uVar24 + 7) >> 3,0x20);
            ptr_00 = (long *)ptr[1];
            plVar15 = ptr_00;
            if (ptr_00 != (long *)0x0) {
              do {
                while( true ) {
                  uVar3 = *(ushort *)(plVar15 + 2);
                  if (uVar2 <= uVar3) break;
                  pbVar22 = local_88 + (((ulong)uVar3 << 0x30) >> 0x33);
                  *pbVar22 = *pbVar22 | (byte)(1 << ((byte)uVar3 & 7));
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_0010074d;
                }
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
LAB_0010074d:
              uVar20 = 0;
              while( true ) {
                uVar2 = *(ushort *)(ptr_00 + 2);
                plVar15 = (long *)*ptr_00;
                if (uVar2 < (ushort)uVar24) {
                  BIO_snprintf(local_188,sVar11,"%08x.%s%d",(ulong)*(uint *)(ptr + 3),
                               *(undefined8 *)(suffixes + (ulong)*(ushort *)((long)ptr + 0x1c) * 8),
                               (ulong)uVar2);
                  if (verbose != 0) {
                    BIO_printf(_bio_out,"link %s -> %s\n",ptr_00[1],local_188);
                  }
                }
                else if (*(char *)((long)ptr_00 + 0x12) == '\0') {
                  if (remove_links != 0) {
                    BIO_snprintf(local_188,sVar11,"%s%s%08x.%s%d",param_1,local_160,
                                 (ulong)*(uint *)(ptr + 3),
                                 *(undefined8 *)
                                  (suffixes + (ulong)*(ushort *)((long)ptr + 0x1c) * 8),(ulong)uVar2
                                );
                    if (verbose != 0) {
                      BIO_printf(_bio_out,"unlink %s\n",local_188 + iVar6);
                    }
                    iVar7 = unlink(local_188);
                    if (iVar7 < 0) {
                      piVar16 = __errno_location();
                      if (*piVar16 != 2) {
                        pcVar13 = strerror(*piVar16);
                        uVar17 = opt_getprog();
                        BIO_printf(_bio_err,"%s: Can\'t unlink %s, %s\n",uVar17,local_188,pcVar13);
                        local_144 = local_144 + 1;
                      }
                    }
                  }
                }
                else {
                  while( true ) {
                    pbVar22 = local_88 + (uVar20 >> 3);
                    uVar24 = 1 << ((byte)uVar20 & 7);
                    bVar1 = *pbVar22;
                    if ((bVar1 & uVar24) == 0) break;
                    uVar20 = (ulong)((int)uVar20 + 1);
                  }
                  uVar27 = uVar20;
                  BIO_snprintf(local_188,sVar11,"%s%s%08x.%s%d",param_1,local_160,
                               (ulong)*(uint *)(ptr + 3),
                               *(undefined8 *)(suffixes + (ulong)*(ushort *)((long)ptr + 0x1c) * 8))
                  ;
                  if (verbose != 0) {
                    BIO_printf(_bio_out,"link %s -> %s\n",ptr_00[1],local_188 + iVar6,uVar27);
                  }
                  iVar7 = unlink(local_188);
                  if (iVar7 < 0) {
                    piVar16 = __errno_location();
                    if (*piVar16 != 2) {
                      pcVar13 = strerror(*piVar16);
                      uVar17 = opt_getprog();
                      BIO_printf(_bio_err,"%s: Can\'t unlink %s, %s\n",uVar17,local_188,pcVar13);
                      local_144 = local_144 + 1;
                    }
                  }
                  iVar7 = symlink((char *)ptr_00[1],local_188);
                  if (iVar7 < 0) {
                    piVar16 = __errno_location();
                    pcVar13 = strerror(*piVar16);
                    lVar26 = ptr_00[1];
                    uVar17 = opt_getprog();
                    BIO_printf(_bio_err,"%s: Can\'t symlink %s, %s\n",uVar17,lVar26,pcVar13);
                    local_144 = local_144 + 1;
                  }
                  *pbVar22 = bVar1 | (byte)uVar24;
                }
                CRYPTO_free((void *)ptr_00[1]);
                CRYPTO_free(ptr_00);
                if (plVar15 == (long *)0x0) break;
                uVar24 = (uint)*(ushort *)((long)ptr + 0x1e);
                ptr_00 = plVar15;
              }
            }
            CRYPTO_free(ptr);
            ptr = plVar4;
          } while (plVar4 != (long *)0x0);
        }
        *plVar23 = 0;
        plVar23 = plVar23 + 1;
      } while (plVar23 != (long *)&verbose);
    }
    OPENSSL_sk_pop_free(lVar12,0x100000);
    CRYPTO_free(local_188);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_144;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong rehash_main(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined2 local_32;
  long local_30;
  
  uVar9 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = opt_init(param_1,param_2,rehash_options);
switchD_00100f48_caseD_0:
  uVar1 = opt_next();
joined_r0x00100f28:
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0) {
    opt_num_rest();
    plVar4 = (long *)opt_rest();
    evpmd = EVP_sha1();
    evpmdsize = EVP_MD_get_size(evpmd);
    if (0x3f < evpmdsize - 1U) goto LAB_00100f70;
    lVar8 = *plVar4;
    if (lVar8 != 0) goto LAB_00100ff0;
    pcVar5 = X509_get_default_cert_dir_env();
    pcVar5 = getenv(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = X509_get_default_cert_dir();
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = do_dir(pcVar5,uVar9);
        return uVar7;
      }
      goto LAB_0010111d;
    }
    local_32 = 0x3a;
    pcVar5 = CRYPTO_strdup(pcVar5,"apps/rehash.c",0x235);
    if (pcVar5 == (char *)0x0) {
      uVar7 = 1;
      BIO_puts(_bio_err,"out of memory\n");
    }
    else {
      pcVar6 = strtok(pcVar5,(char *)&local_32);
      while (pcVar6 != (char *)0x0) {
        iVar2 = do_dir(pcVar6,uVar9);
        uVar7 = (ulong)(uint)((int)uVar7 + iVar2);
        pcVar6 = strtok((char *)0x0,(char *)&local_32);
      }
      CRYPTO_free(pcVar5);
    }
    goto LAB_00100f72;
  }
  if ((int)uVar1 < 6) {
    if ((int)uVar1 < -1) goto switchD_00100f48_caseD_0;
    switch(uVar1) {
    default:
      goto switchD_00100f48_caseD_0;
    case 1:
      opt_help(rehash_options);
      break;
    case 2:
      uVar9 = 2;
      goto switchD_00100f48_caseD_0;
    case 3:
      uVar9 = 0;
      goto switchD_00100f48_caseD_0;
    case 4:
      remove_links = 0;
      goto switchD_00100f48_caseD_0;
    case 5:
      goto switchD_00100f48_caseD_5;
    case 0xffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar3);
    }
LAB_00100f70:
    uVar7 = 0;
    goto LAB_00100f72;
  }
  if ((uVar1 - 0x641 < 4) && (iVar2 = opt_provider(uVar7), iVar2 == 0)) goto LAB_00100f70;
  goto switchD_00100f48_caseD_0;
switchD_00100f48_caseD_5:
  verbose = 1;
  uVar1 = opt_next();
  goto joined_r0x00100f28;
LAB_00100ff0:
  do {
    plVar4 = plVar4 + 1;
    iVar2 = do_dir(lVar8,uVar9);
    lVar8 = *plVar4;
    uVar7 = (ulong)(uint)((int)uVar7 + iVar2);
  } while (lVar8 != 0);
LAB_00100f72:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_0010111d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


