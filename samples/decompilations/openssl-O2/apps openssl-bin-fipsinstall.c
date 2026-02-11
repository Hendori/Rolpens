
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 self_test_events(undefined8 param_1)

{
  char *__s1;
  char *__s2;
  char *__s2_00;
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate_const(param_1,"st-phase");
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 8) != 4) {
    return 0;
  }
  __s1 = *(char **)(lVar2 + 0x10);
  lVar2 = OSSL_PARAM_locate_const(param_1,"st-desc");
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 8) != 4) {
    return 0;
  }
  __s2 = *(char **)(lVar2 + 0x10);
  lVar2 = OSSL_PARAM_locate_const(param_1,"st-type");
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 8) != 4) {
    return 0;
  }
  __s2_00 = *(char **)(lVar2 + 0x10);
  if (self_test_log != 0) {
    iVar1 = strcmp(__s1,"Start");
    if (iVar1 == 0) {
      BIO_printf(_bio_err,"%s : (%s) : ",__s2,__s2_00);
    }
    else {
      iVar1 = strcmp(__s1,"Pass");
      if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"Fail"), iVar1 == 0)) {
        BIO_printf(_bio_err,"%s\n",__s1);
      }
    }
  }
  iVar1 = strcmp(__s1,"Corrupt");
  if (iVar1 != 0) {
    return 1;
  }
  if (self_test_corrupt_desc == (char *)0x0) {
    if (self_test_corrupt_type == (char *)0x0) {
      return 1;
    }
  }
  else {
    iVar1 = strcmp(self_test_corrupt_desc,__s2);
    if (iVar1 != 0) {
      return 1;
    }
    if (self_test_corrupt_type == (char *)0x0) goto LAB_00100138;
  }
  iVar1 = strcmp(self_test_corrupt_type,__s2_00);
  if (iVar1 != 0) {
    return 1;
  }
LAB_00100138:
  BIO_printf(_bio_err,"%s ",__s1);
  return 0;
}



bool do_mac(undefined8 param_1,void *param_2,BIO *param_3,undefined8 param_4,ulong *param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *param_5;
  iVar2 = EVP_MAC_init(param_1,0,0,0);
  if (iVar2 != 0) {
    uVar3 = EVP_MAC_CTX_get_mac_size(param_1);
    if (uVar1 < uVar3) {
LAB_00100208:
      iVar2 = EVP_MAC_final(param_1,param_4,param_5,uVar1);
      return iVar2 != 0;
    }
    do {
      iVar2 = BIO_read(param_3,param_2,0x1000);
      if (iVar2 == 0) goto LAB_00100208;
    } while ((-1 < iVar2) && (iVar2 = EVP_MAC_update(param_1,param_2,(long)iVar2), iVar2 != 0));
  }
  return false;
}



int print_mac(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  void *ptr;
  
  iVar1 = 0;
  ptr = (void *)OPENSSL_buf2hexstr(param_3,param_4);
  if (ptr != (void *)0x0) {
    iVar1 = BIO_printf(param_1,"%s = %s\n",param_2,ptr);
    CRYPTO_free(ptr);
  }
  return iVar1;
}



bool write_config_fips_section_constprop_0
               (BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = BIO_printf(param_1,"[%s]\n",param_2);
  if (((0 < iVar1) && (iVar1 = BIO_printf(param_1,"activate = 1\n"), 0 < iVar1)) &&
     (iVar1 = BIO_printf(param_1,"%s = %s\n","install-version",&_LC12), 0 < iVar1)) {
    puVar2 = &_LC13;
    if ((fips_opts & 2) != 0) {
      puVar2 = &_LC12;
    }
    iVar1 = BIO_printf(param_1,"%s = %s\n","conditional-errors",puVar2);
    if (0 < iVar1) {
      puVar2 = &_LC13;
      if ((fips_opts & 4) != 0) {
        puVar2 = &_LC12;
      }
      iVar1 = BIO_printf(param_1,"%s = %s\n","security-checks",puVar2);
      if (0 < iVar1) {
        puVar2 = &_LC13;
        if ((fips_opts & 8) != 0) {
          puVar2 = &_LC12;
        }
        iVar1 = BIO_printf(param_1,"%s = %s\n","hmac-key-check",puVar2);
        if (0 < iVar1) {
          puVar2 = &_LC13;
          if ((fips_opts & 0x10) != 0) {
            puVar2 = &_LC12;
          }
          iVar1 = BIO_printf(param_1,"%s = %s\n","kmac-key-check",puVar2);
          if (0 < iVar1) {
            puVar2 = &_LC13;
            if ((fips_opts & 0x20) != 0) {
              puVar2 = &_LC12;
            }
            iVar1 = BIO_printf(param_1,"%s = %s\n","tls1-prf-ems-check",puVar2);
            if (0 < iVar1) {
              puVar2 = &_LC13;
              if ((fips_opts & 0x40) != 0) {
                puVar2 = &_LC12;
              }
              iVar1 = BIO_printf(param_1,"%s = %s\n","no-short-mac",puVar2);
              if (0 < iVar1) {
                puVar2 = &_LC13;
                if ((char)fips_opts < '\0') {
                  puVar2 = &_LC12;
                }
                iVar1 = BIO_printf(param_1,"%s = %s\n","drbg-no-trunc-md",puVar2);
                if (0 < iVar1) {
                  puVar2 = &_LC12;
                  if ((DAT_00101cc1 & 1) == 0) {
                    puVar2 = &_LC13;
                  }
                  iVar1 = BIO_printf(param_1,"%s = %s\n","signature-digest-check",puVar2);
                  if (0 < iVar1) {
                    puVar2 = &_LC12;
                    if ((DAT_00101cc1 & 2) == 0) {
                      puVar2 = &_LC13;
                    }
                    iVar1 = BIO_printf(param_1,"%s = %s\n","hkdf-digest-check",puVar2);
                    if (0 < iVar1) {
                      puVar2 = &_LC12;
                      if ((DAT_00101cc1 & 4) == 0) {
                        puVar2 = &_LC13;
                      }
                      iVar1 = BIO_printf(param_1,"%s = %s\n","tls13-kdf-digest-check",puVar2);
                      if (0 < iVar1) {
                        puVar2 = &_LC12;
                        if ((DAT_00101cc1 & 8) == 0) {
                          puVar2 = &_LC13;
                        }
                        iVar1 = BIO_printf(param_1,"%s = %s\n","tls1-prf-digest-check",puVar2);
                        if (0 < iVar1) {
                          puVar2 = &_LC12;
                          if ((DAT_00101cc1 & 0x10) == 0) {
                            puVar2 = &_LC13;
                          }
                          iVar1 = BIO_printf(param_1,"%s = %s\n","sshkdf-digest-check",puVar2);
                          if (0 < iVar1) {
                            puVar2 = &_LC12;
                            if ((DAT_00101cc1 & 0x20) == 0) {
                              puVar2 = &_LC13;
                            }
                            iVar1 = BIO_printf(param_1,"%s = %s\n","sskdf-digest-check",puVar2);
                            if (0 < iVar1) {
                              puVar2 = &_LC12;
                              if ((DAT_00101cc1 & 0x40) == 0) {
                                puVar2 = &_LC13;
                              }
                              iVar1 = BIO_printf(param_1,"%s = %s\n","x963kdf-digest-check",puVar2);
                              if (0 < iVar1) {
                                puVar2 = &_LC12;
                                if (-1 < (char)DAT_00101cc1) {
                                  puVar2 = &_LC13;
                                }
                                iVar1 = BIO_printf(param_1,"%s = %s\n","dsa-sign-disabled",puVar2);
                                if (0 < iVar1) {
                                  puVar2 = &_LC12;
                                  if ((DAT_00101cc2 & 1) == 0) {
                                    puVar2 = &_LC13;
                                  }
                                  iVar1 = BIO_printf(param_1,"%s = %s\n","tdes-encrypt-disabled",
                                                     puVar2);
                                  if (0 < iVar1) {
                                    puVar2 = &_LC12;
                                    if ((DAT_00101cc2 & 2) == 0) {
                                      puVar2 = &_LC13;
                                    }
                                    iVar1 = BIO_printf(param_1,"%s = %s\n","rsa-pkcs15-pad-disabled"
                                                       ,puVar2);
                                    if (0 < iVar1) {
                                      puVar2 = &_LC12;
                                      if ((DAT_00101cc2 & 4) == 0) {
                                        puVar2 = &_LC13;
                                      }
                                      iVar1 = BIO_printf(param_1,"%s = %s\n","rsa-pss-saltlen-check"
                                                         ,puVar2);
                                      if (0 < iVar1) {
                                        puVar2 = &_LC12;
                                        if ((DAT_00101cc2 & 8) == 0) {
                                          puVar2 = &_LC13;
                                        }
                                        iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                           "rsa-sign-x931-pad-disabled",puVar2);
                                        if (0 < iVar1) {
                                          puVar2 = &_LC12;
                                          if ((DAT_00101cc2 & 0x10) == 0) {
                                            puVar2 = &_LC13;
                                          }
                                          iVar1 = BIO_printf(param_1,"%s = %s\n","hkdf-key-check",
                                                             puVar2);
                                          if (0 < iVar1) {
                                            puVar2 = &_LC12;
                                            if ((DAT_00101cc2 & 0x20) == 0) {
                                              puVar2 = &_LC13;
                                            }
                                            iVar1 = BIO_printf(param_1,"%s = %s\n","kbkdf-key-check"
                                                               ,puVar2);
                                            if (0 < iVar1) {
                                              puVar2 = &_LC12;
                                              if ((DAT_00101cc2 & 0x40) == 0) {
                                                puVar2 = &_LC13;
                                              }
                                              iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                 "tls13-kdf-key-check",puVar2);
                                              if (0 < iVar1) {
                                                puVar2 = &_LC12;
                                                if (-1 < (char)DAT_00101cc2) {
                                                  puVar2 = &_LC13;
                                                }
                                                iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                   "tls1-prf-key-check",puVar2);
                                                if (0 < iVar1) {
                                                  puVar2 = &_LC12;
                                                  if ((DAT_00101cc3 & 1) == 0) {
                                                    puVar2 = &_LC13;
                                                  }
                                                  iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                     "sshkdf-key-check",puVar2);
                                                  if (0 < iVar1) {
                                                    puVar2 = &_LC12;
                                                    if ((DAT_00101cc3 & 2) == 0) {
                                                      puVar2 = &_LC13;
                                                    }
                                                    iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                       "sskdf-key-check",puVar2);
                                                    if (0 < iVar1) {
                                                      puVar2 = &_LC12;
                                                      if ((DAT_00101cc3 & 4) == 0) {
                                                        puVar2 = &_LC13;
                                                      }
                                                      iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                         "x963kdf-key-check",puVar2)
                                                      ;
                                                      if (0 < iVar1) {
                                                        puVar2 = &_LC12;
                                                        if ((DAT_00101cc3 & 8) == 0) {
                                                          puVar2 = &_LC13;
                                                        }
                                                        iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                           "x942kdf-key-check",
                                                                           puVar2);
                                                        if (0 < iVar1) {
                                                          puVar2 = &_LC12;
                                                          if ((DAT_00101cc3 & 0x10) == 0) {
                                                            puVar2 = &_LC13;
                                                          }
                                                          iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                                                                                                          
                                                  "pbkdf2-lower-bound-check",puVar2);
                                                  if (0 < iVar1) {
                                                    puVar2 = &_LC12;
                                                    if ((DAT_00101cc3 & 0x20) == 0) {
                                                      puVar2 = &_LC13;
                                                    }
                                                    iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                       "ecdh-cofactor-check",puVar2)
                                                    ;
                                                    if ((0 < iVar1) &&
                                                       (iVar1 = print_mac(param_1,"module-mac",
                                                                          param_3,param_4),
                                                       iVar1 != 0)) {
                                                      if (param_5 == 0) {
                                                        return true;
                                                      }
                                                      if (param_6 == 0) {
                                                        return true;
                                                      }
                                                      if ((fips_opts & 1) != 0) {
                                                        return true;
                                                      }
                                                      iVar1 = print_mac(param_1,"install-mac",
                                                                        param_5,param_6);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BIO_printf(param_1,"%s = %s\n",
                                                                           "install-status",
                                                                                                                                                      
                                                  "INSTALL_SELF_TEST_KATS_RUN");
                                                  return 0 < iVar1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fipsinstall_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *__n;
  undefined *__n_00;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  CONF *pCVar14;
  BIO_METHOD *type;
  BIO *pBVar15;
  void *__s2;
  long lVar16;
  BIO *a;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long in_FS_OFFSET;
  byte bVar19;
  BIO *local_240;
  char *local_238;
  undefined *local_230;
  void *local_228;
  long local_220;
  BIO *local_218;
  int local_20c;
  void *local_208;
  long local_200;
  char *local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined4 local_1c8 [14];
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  char *local_178;
  undefined *local_170;
  undefined4 local_168 [10];
  undefined4 local_140 [10];
  undefined4 local_118 [10];
  undefined4 local_f0 [10];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_190 = (undefined *)0x40;
  local_188 = (undefined *)0x40;
  lVar8 = OPENSSL_sk_new_null();
  if (lVar8 == 0) {
    local_220 = 0;
    pCVar14 = (CONF *)0x0;
    pcVar11 = (char *)0x0;
    a = (BIO *)0x0;
    local_228 = (void *)0x0;
    local_238 = (char *)0x0;
    local_230 = (undefined *)0x0;
    local_240 = (BIO *)0x0;
    local_218 = (BIO *)0x0;
    local_20c = 0;
    goto LAB_001012a5;
  }
  lVar13 = 0;
  bVar1 = false;
  uVar9 = opt_init(param_1,param_2,fipsinstall_options);
  bVar2 = false;
  local_1f0 = &_LC50;
  local_230 = &_LC51;
  local_238 = (char *)0x0;
  local_1e8 = 0;
  local_200 = 0;
  local_1f8 = "fips_sect";
  bVar4 = false;
  local_20c = 0;
  bVar5 = false;
switchD_001009d8_caseD_0:
  bVar3 = bVar5;
  iVar6 = opt_next();
  if (iVar6 != 0) {
    do {
      bVar5 = bVar3;
      switch(iVar6) {
      default:
        goto switchD_001009d8_caseD_0;
      case 1:
        pcVar11 = (char *)0x0;
        pCVar14 = (CONF *)0x0;
        pBVar15 = (BIO *)0x0;
        opt_help(fipsinstall_options);
        local_220 = 0;
        local_228 = (void *)0x0;
        local_238 = (char *)0x0;
        local_230 = (undefined *)0x0;
        local_240 = (BIO *)0x0;
        local_218 = (BIO *)0x0;
        goto LAB_00100f2d;
      case 2:
        local_200 = opt_arg();
        goto switchD_001009d8_caseD_0;
      case 3:
        local_1e8 = opt_arg();
        goto switchD_001009d8_caseD_0;
      case 4:
        local_238 = (char *)opt_arg();
        goto switchD_001009d8_caseD_0;
      case 5:
        _fips_opts = pedantic_opts;
        bVar1 = true;
        goto switchD_001009d8_caseD_0;
      case 6:
        local_1f0 = (undefined *)opt_arg();
        goto switchD_001009d8_caseD_0;
      case 7:
        local_1f8 = (char *)opt_arg();
        goto switchD_001009d8_caseD_0;
      case 8:
        local_230 = (undefined *)opt_arg();
        goto switchD_001009d8_caseD_0;
      case 9:
        uVar12 = opt_arg();
        iVar6 = OPENSSL_sk_push(lVar8,uVar12);
        if (iVar6 == 0) goto switchD_001009d8_caseD_ffffffff;
        pcVar11 = (char *)opt_arg();
        iVar6 = strncmp(pcVar11,"hexkey:",7);
        if (iVar6 == 0) {
          bVar4 = true;
        }
        else {
          pcVar11 = (char *)opt_arg();
          iVar6 = strncmp(pcVar11,"digest:",7);
          bVar5 = true;
          if (iVar6 != 0) {
            bVar5 = bVar3;
          }
        }
        goto switchD_001009d8_caseD_0;
      case 10:
        local_20c = 1;
        goto switchD_001009d8_caseD_0;
      case 0xc:
        self_test_corrupt_desc = opt_arg();
        goto switchD_001009d8_caseD_0;
      case 0xd:
        self_test_corrupt_type = opt_arg();
        goto switchD_001009d8_caseD_0;
      case 0xe:
        quiet = 1;
      case 0xb:
        self_test_log = 0;
        iVar6 = opt_next();
        if (iVar6 == 0) goto LAB_00100a00;
        break;
      case 0xf:
        lVar13 = opt_arg();
        goto switchD_001009d8_caseD_0;
      case 0x10:
        if (!bVar1) {
          _fips_opts = _fips_opts & 0xfffffffd;
          goto LAB_00101118;
        }
        pcVar11 = "no_conditional_errors";
LAB_00101392:
        pcVar10 = "Cannot specify -%s after -pedantic\n";
        goto LAB_0010133c;
      case 0x11:
        if (bVar1) {
          pcVar11 = "no_security_checks";
          goto LAB_00101392;
        }
        _fips_opts = _fips_opts & 0xfffffffb;
LAB_00101118:
        bVar1 = false;
        goto switchD_001009d8_caseD_0;
      case 0x12:
        _fips_opts = _fips_opts | 0x20;
        goto switchD_001009d8_caseD_0;
      case 0x13:
        _fips_opts = _fips_opts | 0x40;
        goto switchD_001009d8_caseD_0;
      case 0x14:
        _fips_opts = _fips_opts | 0x20000;
        goto switchD_001009d8_caseD_0;
      case 0x15:
        _fips_opts = _fips_opts | 0x40000;
        goto switchD_001009d8_caseD_0;
      case 0x16:
        _fips_opts = _fips_opts | 0x80000;
        goto switchD_001009d8_caseD_0;
      case 0x17:
        _fips_opts = _fips_opts | 8;
        goto switchD_001009d8_caseD_0;
      case 0x18:
        _fips_opts = _fips_opts | 0x10;
        goto switchD_001009d8_caseD_0;
      case 0x19:
        _fips_opts = _fips_opts | 0x80;
        goto switchD_001009d8_caseD_0;
      case 0x1a:
        _fips_opts = _fips_opts | 0x100;
        goto switchD_001009d8_caseD_0;
      case 0x1b:
        _fips_opts = _fips_opts | 0x200;
        goto switchD_001009d8_caseD_0;
      case 0x1c:
        _fips_opts = _fips_opts | 0x400;
        goto switchD_001009d8_caseD_0;
      case 0x1d:
        _fips_opts = _fips_opts | 0x800;
        goto switchD_001009d8_caseD_0;
      case 0x1e:
        _fips_opts = _fips_opts | 0x1000;
        goto switchD_001009d8_caseD_0;
      case 0x1f:
        _fips_opts = _fips_opts | 0x2000;
        goto switchD_001009d8_caseD_0;
      case 0x20:
        _fips_opts = _fips_opts | 0x4000;
        goto switchD_001009d8_caseD_0;
      case 0x21:
        _fips_opts = _fips_opts | 0x8000;
        goto switchD_001009d8_caseD_0;
      case 0x22:
        _fips_opts = _fips_opts | 0x10000;
        goto switchD_001009d8_caseD_0;
      case 0x23:
        _fips_opts = _fips_opts | 0x100000;
        goto switchD_001009d8_caseD_0;
      case 0x24:
        _fips_opts = _fips_opts | 0x200000;
        goto switchD_001009d8_caseD_0;
      case 0x25:
        _fips_opts = _fips_opts | 0x400000;
        goto switchD_001009d8_caseD_0;
      case 0x26:
        _fips_opts = _fips_opts | 0x800000;
        goto switchD_001009d8_caseD_0;
      case 0x27:
        _fips_opts = _fips_opts | 0x1000000;
        goto switchD_001009d8_caseD_0;
      case 0x28:
        _fips_opts = _fips_opts | 0x2000000;
        goto switchD_001009d8_caseD_0;
      case 0x29:
        _fips_opts = _fips_opts | 0x4000000;
        goto switchD_001009d8_caseD_0;
      case 0x2a:
        _fips_opts = _fips_opts | 0x8000000;
        goto switchD_001009d8_caseD_0;
      case 0x2b:
        if (bVar1) {
          pcVar11 = "no_pbkdf2_lower_bound_check";
          pcVar10 = "Cannot specify -%s after -pedantic\n";
          goto LAB_0010133c;
        }
        _fips_opts = _fips_opts & 0xefffffff;
        goto switchD_001009d8_caseD_0;
      case 0x2c:
        _fips_opts = _fips_opts | 0x20000000;
        goto switchD_001009d8_caseD_0;
      case 0x2d:
        _fips_opts = _fips_opts | 1;
        bVar2 = true;
        goto switchD_001009d8_caseD_0;
      case 0x2e:
        if (bVar1) {
          BIO_printf(_bio_err,"Cannot specify -%s after -pedantic\n","self_test_oninstall");
          goto LAB_001013d0;
        }
        _fips_opts = _fips_opts & 0xfffffffe;
        bVar2 = true;
        goto switchD_001009d8_caseD_0;
      case -1:
        goto switchD_001009d8_caseD_ffffffff;
      }
    } while( true );
  }
LAB_00100a00:
  iVar7 = opt_check_rest_arg(0);
  if (iVar7 != 0) {
    if ((local_200 != 0) || (local_20c == 0)) {
      if (lVar13 == 0) {
        if (local_238 == (char *)0x0) goto switchD_001009d8_caseD_ffffffff;
        pcVar10 = (char *)opt_path_end();
        a = (BIO *)0x0;
        pcVar11 = pcVar10;
        if (pcVar10 != (char *)0x0) {
          pcVar11 = CRYPTO_strdup(local_238,"apps/fipsinstall.c",0x312);
          if (pcVar11 == (char *)0x0) {
LAB_001013d0:
            pCVar14 = (CONF *)0x0;
            pcVar11 = (char *)0x0;
            local_220 = 0;
            a = (BIO *)0x0;
            local_228 = (void *)0x0;
            local_238 = (char *)0x0;
            local_230 = (undefined *)0x0;
            local_240 = (BIO *)0x0;
            local_218 = (BIO *)0x0;
          }
          else {
            pcVar11[(long)pcVar10 - (long)local_238] = '\0';
            iVar6 = OSSL_PROVIDER_set_default_search_path(0,pcVar11);
            if (iVar6 != 0) goto LAB_00100a95;
            local_220 = 0;
            pCVar14 = (CONF *)0x0;
            local_228 = (void *)0x0;
            local_238 = (char *)0x0;
            local_230 = (undefined *)0x0;
            local_240 = (BIO *)0x0;
            local_218 = (BIO *)0x0;
          }
          goto LAB_001012a5;
        }
LAB_00100a95:
        if (((self_test_log != 0) || (self_test_corrupt_desc != 0)) || (self_test_corrupt_type != 0)
           ) {
          OSSL_SELF_TEST_set_callback(0,0x100000,0);
        }
        if (((bVar3) || (iVar6 = OPENSSL_sk_push(lVar8,"digest:SHA256"), iVar6 != 0)) &&
           ((bVar4 || (iVar6 = OPENSSL_sk_push(lVar8,
                                               "hexkey:f4556650ac31d35461610bac4ed81b1a181b2d8a43ea2854cbae22ca74560813"
                                              ), iVar6 != 0)))) {
          local_218 = (BIO *)bio_open_default(local_238,0x72,2);
          if (local_218 == (BIO *)0x0) {
            BIO_printf(_bio_err,"Failed to open module file\n");
            goto LAB_00101465;
          }
          local_228 = (void *)app_malloc(0x1000,"I/O buffer");
          if (local_228 == (void *)0x0) {
            local_220 = 0;
            pCVar14 = (CONF *)0x0;
            a = (BIO *)0x0;
            local_238 = (char *)0x0;
            local_230 = (undefined *)0x0;
            local_240 = (BIO *)0x0;
          }
          else {
            uVar9 = app_get0_propq();
            uVar12 = app_get0_libctx();
            local_220 = EVP_MAC_fetch(uVar12,local_230,uVar9);
            if (local_220 == 0) {
              pCVar14 = (CONF *)0x0;
              a = (BIO *)0x0;
              BIO_printf(_bio_err,"Unable to get MAC of type %s\n",local_230);
              local_238 = (char *)0x0;
              local_230 = (undefined *)0x0;
              local_240 = (BIO *)0x0;
            }
            else {
              local_230 = (undefined *)EVP_MAC_CTX_new(local_220);
              if (local_230 == (undefined *)0x0) {
                pCVar14 = (CONF *)0x0;
                a = (BIO *)0x0;
                BIO_printf(_bio_err,"Unable to create MAC CTX for module check\n");
                local_238 = (char *)0x0;
                local_240 = (BIO *)0x0;
              }
              else {
                uVar9 = EVP_MAC_settable_ctx_params(local_220);
                lVar13 = app_params_new_from_opts(lVar8,uVar9);
                if (lVar13 == 0) {
LAB_001016c0:
                  pCVar14 = (CONF *)0x0;
                  local_238 = (char *)0x0;
                  local_240 = (BIO *)0x0;
                }
                else {
                  iVar6 = EVP_MAC_CTX_set_params(local_230,lVar13);
                  if (iVar6 == 0) {
                    pCVar14 = (CONF *)0x0;
                    BIO_printf(_bio_err,"MAC parameter error\n");
                    ERR_print_errors(_bio_err);
                    app_params_free(lVar13);
                    local_238 = (char *)0x0;
                    local_240 = (BIO *)0x0;
                  }
                  else {
                    app_params_free(lVar13);
                    local_238 = (char *)EVP_MAC_CTX_dup(local_230);
                    if (local_238 == (char *)0x0) {
                      BIO_printf(_bio_err,"Unable to create MAC CTX for install indicator\n");
                      goto LAB_001016c0;
                    }
                    iVar6 = do_mac(local_230,local_228,local_218,local_c8,&local_190);
                    if (iVar6 == 0) {
                      local_240 = (BIO *)0x0;
                      pCVar14 = (CONF *)0x0;
                    }
                    else {
                      local_240 = BIO_new_mem_buf("INSTALL_SELF_TEST_KATS_RUN",0x1a);
                      if (local_240 == (BIO *)0x0) {
                        pCVar14 = (CONF *)0x0;
                        a = (BIO *)0x0;
                        BIO_printf(_bio_err,"Unable to create memory BIO\n");
                      }
                      else {
                        iVar6 = do_mac(local_238,local_228,local_240,local_88,&local_188);
                        __n = local_190;
                        if (iVar6 != 0) {
                          if (local_20c == 0) {
                            type = BIO_s_mem();
                            pBVar15 = BIO_new(type);
                            if (pBVar15 != (BIO *)0x0) {
                              iVar6 = BIO_printf(pBVar15,"openssl_conf = openssl_init\n\n");
                              if (((((iVar6 == 0) ||
                                    (iVar6 = BIO_printf(pBVar15,"[openssl_init]\n"), iVar6 == 0)) ||
                                   (iVar6 = BIO_printf(pBVar15,"providers = provider_section\n\n"),
                                   iVar6 == 0)) ||
                                  ((iVar6 = BIO_printf(pBVar15,"[provider_section]\n"), iVar6 == 0
                                   || (iVar6 = BIO_printf(pBVar15,"%s = %s\n\n",local_1f0,local_1f8)
                                      , iVar6 == 0)))) ||
                                 ((iVar6 = write_config_fips_section_constprop_0
                                                     (pBVar15,local_1f8,local_c8,__n,0,0),
                                  iVar6 == 0 ||
                                  (pCVar14 = (CONF *)app_load_config_bio(pBVar15),
                                  pCVar14 == (CONF *)0x0)))) {
                                pCVar14 = (CONF *)0x0;
                              }
                              else {
                                iVar6 = CONF_modules_load(pCVar14,(char *)0x0,0);
                                if (0 < iVar6) {
                                  BIO_free(pBVar15);
                                  local_180 = &_LC88;
                                  local_178 = "";
                                  local_170 = &_LC88;
                                  lVar13 = OSSL_PROVIDER_load(0,local_1f0);
                                  if (lVar13 == 0) {
                                    BIO_printf(_bio_err,"Failed to load FIPS module\n");
LAB_00101c99:
                                    OSSL_PROVIDER_unload(lVar13);
                                  }
                                  else {
                                    if (quiet == 0) {
                                      OSSL_PARAM_construct_utf8_ptr(local_1c8,&_LC90,&local_180,8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_168;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      OSSL_PARAM_construct_utf8_ptr
                                                (local_1c8,"version",&local_178,8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_140;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      OSSL_PARAM_construct_utf8_ptr
                                                (local_1c8,"buildinfo",&local_170,8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_118;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      OSSL_PARAM_construct_end(local_1c8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_f0;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      iVar6 = OSSL_PROVIDER_get_params(lVar13,local_168);
                                      if (iVar6 == 0) {
LAB_00101c86:
                                        BIO_printf(_bio_err,
                                                  "Failed to query FIPS module parameters\n");
                                        goto LAB_00101c99;
                                      }
                                      iVar6 = OSSL_PARAM_modified(local_168);
                                      if (iVar6 != 0) {
                                        BIO_printf(_bio_err,"\t%-10s\t%s\n","name:",local_180);
                                      }
                                      iVar6 = OSSL_PARAM_modified(local_140);
                                      if (iVar6 != 0) {
                                        BIO_printf(_bio_err,"\t%-10s\t%s\n","version:",local_178);
                                      }
                                      iVar6 = OSSL_PARAM_modified(local_118);
                                      if (iVar6 != 0) {
                                        BIO_printf(_bio_err,"\t%-10s\t%s\n","build:",local_170);
                                      }
                                    }
                                    else {
                                      OSSL_PARAM_construct_utf8_ptr
                                                (local_1c8,"version",&local_178,8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_168;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      OSSL_PARAM_construct_end(local_1c8);
                                      puVar17 = local_1c8;
                                      puVar18 = local_140;
                                      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
                                        *puVar18 = *puVar17;
                                        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
                                        puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
                                      }
                                      iVar6 = OSSL_PROVIDER_get_params(lVar13,local_168);
                                      if (iVar6 == 0) goto LAB_00101c86;
                                    }
                                    iVar6 = strncmp("3.0.",local_178,4);
                                    OSSL_PROVIDER_unload(lVar13);
                                    if (iVar6 == 0 && !bVar2) {
                                      _fips_opts = _fips_opts & 0xfffffffe;
                                    }
                                    if (local_1e8 == 0) {
                                      pBVar15 = (BIO *)dup_bio_out(0x8001);
                                    }
                                    else {
                                      pBVar15 = (BIO *)bio_open_default(local_1e8,0x77,0x8001);
                                    }
                                    if (pBVar15 == (BIO *)0x0) {
                                      BIO_printf(_bio_err,"Failed to open file\n");
                                    }
                                    else {
                                      local_20c = write_config_fips_section_constprop_0
                                                            (pBVar15,local_1f8,local_c8,local_190,
                                                             local_88,local_188);
                                      a = pBVar15;
                                      if (local_20c != 0) {
                                        if (quiet == 0) {
                                          BIO_printf(_bio_err,"INSTALL PASSED\n");
                                        }
                                        goto LAB_00100f2d;
                                      }
                                    }
                                  }
                                  goto LAB_001012a5;
                                }
                              }
                              NCONF_free(pCVar14);
                              BIO_free(pBVar15);
                            }
                          }
                          else {
                            if ((_fips_opts & 1) != 0) {
                              local_188 = (undefined *)0x0;
                            }
                            __n_00 = local_188;
                            pCVar14 = (CONF *)app_load_config_internal(local_200,0);
                            if (pCVar14 == (CONF *)0x0) {
LAB_00101b4a:
                              __s2 = (void *)0x0;
                              local_208 = (void *)0x0;
                            }
                            else {
                              pcVar10 = NCONF_get_string(pCVar14,local_1f8,"install-version");
                              if ((pcVar10 == (char *)0x0) ||
                                 (iVar6 = strcmp(pcVar10,"1"), iVar6 != 0)) {
                                BIO_printf(_bio_err,"version not found\n");
                                goto LAB_00101b4a;
                              }
                              pcVar10 = NCONF_get_string(pCVar14,local_1f8,"module-mac");
                              if (pcVar10 == (char *)0x0) {
                                BIO_printf(_bio_err,"Module integrity MAC not found\n");
                                goto LAB_00101b4a;
                              }
                              local_208 = (void *)OPENSSL_hexstr2buf(pcVar10,&local_170);
                              if (((local_208 == (void *)0x0) || (local_170 != __n)) ||
                                 (iVar6 = memcmp(local_c8,local_208,(size_t)__n), iVar6 != 0)) {
                                BIO_printf(_bio_err,"Module integrity mismatch\n");
                                goto LAB_00101676;
                              }
                              __s2 = (void *)0x0;
                              if (__n_00 == (undefined *)0x0) {
LAB_00100d50:
                                CRYPTO_free(local_208);
                                CRYPTO_free(__s2);
                                NCONF_free(pCVar14);
                                pBVar15 = a;
                                if (quiet == 0) {
                                  pCVar14 = (CONF *)0x0;
                                  BIO_printf(_bio_err,"VERIFY PASSED\n");
                                }
                                else {
                                  pCVar14 = (CONF *)0x0;
                                }
LAB_00100f2d:
                                iVar6 = 0;
                                a = pBVar15;
                                goto LAB_00100e0d;
                              }
                              pcVar10 = NCONF_get_string(pCVar14,local_1f8,"install-status");
                              if ((pcVar10 == (char *)0x0) ||
                                 (iVar6 = strcmp(pcVar10,"INSTALL_SELF_TEST_KATS_RUN"), iVar6 != 0))
                              {
                                BIO_printf(_bio_err,"install status not found\n");
LAB_00101676:
                                __s2 = (void *)0x0;
                              }
                              else {
                                pcVar10 = NCONF_get_string(pCVar14,local_1f8,"install-mac");
                                if (pcVar10 == (char *)0x0) {
                                  BIO_printf(_bio_err,"Install indicator MAC not found\n");
                                  goto LAB_00101676;
                                }
                                __s2 = (void *)OPENSSL_hexstr2buf(pcVar10,&local_170);
                                if (((__s2 != (void *)0x0) && (local_170 == __n_00)) &&
                                   (iVar6 = memcmp(local_88,__s2,(size_t)__n_00), iVar6 == 0))
                                goto LAB_00100d50;
                                BIO_printf(_bio_err,"Install indicator status mismatch\n");
                              }
                            }
                            CRYPTO_free(local_208);
                            CRYPTO_free(__s2);
                            NCONF_free(pCVar14);
                          }
                        }
                        pCVar14 = (CONF *)0x0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_00101465:
          local_220 = 0;
          pCVar14 = (CONF *)0x0;
          local_228 = (void *)0x0;
          local_238 = (char *)0x0;
          local_230 = (undefined *)0x0;
          local_240 = (BIO *)0x0;
          local_218 = (BIO *)0x0;
        }
LAB_001012a5:
        if (quiet == 0) {
          pcVar10 = "INSTALL";
          if (local_20c != 0) {
            pcVar10 = "VERIFY";
          }
          BIO_printf(_bio_err,"%s FAILED\n",pcVar10);
        }
      }
      else {
        iVar7 = OSSL_LIB_CTX_load_config(0,lVar13);
        if (iVar7 == 0) {
LAB_00101341:
          local_220 = 0;
          pCVar14 = (CONF *)0x0;
          pcVar11 = (char *)0x0;
          a = (BIO *)0x0;
          local_228 = (void *)0x0;
          local_238 = (char *)0x0;
          local_230 = (undefined *)0x0;
          local_240 = (BIO *)0x0;
          local_218 = (BIO *)0x0;
          goto LAB_001012a5;
        }
        iVar7 = OSSL_PROVIDER_available(0);
        if (quiet == 0) {
          if (iVar7 != 0) {
            BIO_printf(_bio_err,"FIPS provider is %s\n","available");
LAB_0010152d:
            local_220 = 0;
            pCVar14 = (CONF *)0x0;
            pcVar11 = (char *)0x0;
            a = (BIO *)0x0;
            local_228 = (void *)0x0;
            local_238 = (char *)0x0;
            local_230 = (undefined *)0x0;
            local_240 = (BIO *)0x0;
            local_218 = (BIO *)0x0;
            goto LAB_00100e0d;
          }
          pcVar11 = "not available";
          pcVar10 = "FIPS provider is %s\n";
LAB_0010133c:
          BIO_printf(_bio_err,pcVar10,pcVar11);
          goto LAB_00101341;
        }
        if (iVar7 != 0) goto LAB_0010152d;
        pCVar14 = (CONF *)0x0;
        pcVar11 = (char *)0x0;
        local_220 = 0;
        a = (BIO *)0x0;
        local_228 = (void *)0x0;
        local_238 = (char *)0x0;
        local_230 = (undefined *)0x0;
        local_240 = (BIO *)0x0;
        local_218 = (BIO *)0x0;
      }
      iVar6 = 1;
      ERR_print_errors(_bio_err);
      goto LAB_00100e0d;
    }
    BIO_printf(_bio_err,"Missing -in option for -verify\n");
  }
switchD_001009d8_caseD_ffffffff:
  a = (BIO *)0x0;
  pCVar14 = (CONF *)0x0;
  pcVar11 = (char *)0x0;
  iVar6 = 1;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar9);
  local_220 = 0;
  local_228 = (void *)0x0;
  local_238 = (char *)0x0;
  local_230 = (undefined *)0x0;
  local_240 = (BIO *)0x0;
  local_218 = (BIO *)0x0;
LAB_00100e0d:
  CRYPTO_free(pcVar11);
  BIO_free(a);
  BIO_free(local_240);
  BIO_free(local_218);
  OPENSSL_sk_free(lVar8);
  EVP_MAC_free(local_220);
  EVP_MAC_CTX_free(local_238);
  EVP_MAC_CTX_free(local_230);
  CRYPTO_free(local_228);
  if (pCVar14 != (CONF *)0x0) {
    NCONF_free(pCVar14);
    CONF_modules_unload(1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


