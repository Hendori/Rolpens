
undefined8 append_buf(undefined8 *param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  
  sVar3 = strlen(param_3);
  pcVar4 = (char *)*param_1;
  iVar2 = (int)sVar3;
  if (pcVar4 == (char *)0x0) {
    iVar2 = (iVar2 + 0x100) - (iVar2 + 0x100) % 0x100;
    *param_2 = iVar2;
    pcVar4 = (char *)app_malloc((long)iVar2,"engine buffer");
    *param_1 = pcVar4;
  }
  else {
    sVar3 = strlen(pcVar4);
    iVar1 = (int)sVar3;
    if (iVar1 < 1) {
      if (*param_2 < iVar2 + 1) {
        iVar2 = (iVar2 + 0x100) - (iVar2 + 0x100) % 0x100;
        *param_2 = iVar2;
        pcVar4 = (char *)CRYPTO_realloc(pcVar4,iVar2,"apps/engine.c",0x48);
        if (pcVar4 == (char *)0x0) goto LAB_001000d6;
        *param_1 = pcVar4;
      }
    }
    else {
      iVar2 = iVar2 + 3 + iVar1;
      if (*param_2 < iVar2) {
        iVar2 = iVar2 + 0xff;
        iVar2 = iVar2 - iVar2 % 0x100;
        *param_2 = iVar2;
        pcVar4 = (char *)CRYPTO_realloc(pcVar4,iVar2,"apps/engine.c",0x48);
        if (pcVar4 == (char *)0x0) {
LAB_001000d6:
          CRYPTO_free((void *)*param_1);
          *param_1 = 0;
          return 0;
        }
        *param_1 = pcVar4;
      }
      pcVar4 = pcVar4 + iVar1;
      pcVar4[0] = ',';
      pcVar4[1] = ' ';
      pcVar4 = pcVar4 + 2;
    }
  }
  strcpy(pcVar4,param_3);
  return 1;
}



void util_store_cap(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_STORE_LOADER_get0_engine();
  if (*param_2 == lVar2) {
    uVar3 = OSSL_STORE_LOADER_get0_scheme(param_1);
    BIO_snprintf(acStack_128,0x100,"STORE(%s)",uVar3);
    iVar1 = append_buf(param_2[1],param_2[2],acStack_128);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 3) = 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void util_do_cmds_constprop_0(ENGINE *param_1,undefined8 param_2,BIO *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  long in_FS_OFFSET;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_sk_num(param_2);
  if (iVar1 < 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar3 = "[Error]: internal stack error\n";
LAB_001003b2:
      BIO_printf(param_3,pcVar3);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (iVar1 != 0) {
      do {
        while( true ) {
          pcVar3 = (char *)OPENSSL_sk_value(param_2,iVar5);
          pcVar4 = strchr(pcVar3,0x3a);
          if (pcVar4 == (char *)0x0) break;
          iVar2 = (int)((long)pcVar4 - (long)pcVar3);
          if (0xfe < iVar2) {
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001003ec;
            pcVar3 = "[Error]: command name too long\n";
            goto LAB_001003b2;
          }
          __memcpy_chk(local_148,pcVar3,(long)iVar2);
          local_148[(long)pcVar4 - (long)pcVar3] = '\0';
          iVar2 = ENGINE_ctrl_cmd_string(param_1,local_148,pcVar4 + 1,0);
          if (iVar2 == 0) goto LAB_00100290;
LAB_00100328:
          BIO_printf(param_3,"[Success]: %s\n",pcVar3);
          iVar5 = iVar5 + 1;
          if (iVar1 == iVar5) goto LAB_00100349;
        }
        iVar2 = ENGINE_ctrl_cmd_string(param_1,pcVar3,(char *)0x0,0);
        if (iVar2 != 0) goto LAB_00100328;
LAB_00100290:
        BIO_printf(param_3,"[Failure]: %s\n",pcVar3);
        iVar5 = iVar5 + 1;
        ERR_print_errors(param_3);
      } while (iVar1 != iVar5);
    }
LAB_00100349:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001003ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  BIO *bio;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  ENGINE *pEVar16;
  char *__s1;
  long lVar17;
  RSA_METHOD *pRVar18;
  DSA_METHOD *pDVar19;
  DH_METHOD *pDVar20;
  RAND_METHOD *pRVar21;
  ENGINE_CIPHERS_PTR pEVar22;
  size_t sVar23;
  ENGINE_DIGESTS_PTR pEVar24;
  ENGINE_PKEY_METHS_PTR pEVar25;
  long i;
  void *p;
  long in_FS_OFFSET;
  int local_c8;
  int local_c4;
  int local_bc;
  undefined4 local_7c;
  char *local_78;
  int *local_70;
  ENGINE *local_68;
  char **local_60;
  undefined4 *local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = OPENSSL_sk_new_null();
  lVar11 = OPENSSL_sk_new_null();
  lVar12 = OPENSSL_sk_new_null();
  bio = (BIO *)dup_bio_out(0x8001);
  if ((lVar10 != 0 && lVar11 != 0) && (lVar12 != 0)) {
    uVar1 = *param_2;
    pcVar15 = (char *)param_2[1];
    while ((pcVar15 != (char *)0x0 && (*pcVar15 != '-'))) {
      iVar4 = OPENSSL_sk_push(lVar10);
      if (iVar4 == 0) goto LAB_001005b8;
      puVar13 = param_2 + 2;
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
      pcVar15 = (char *)*puVar13;
    }
    *param_2 = uVar1;
    opt_init(param_1,param_2,engine_options);
    local_bc = 0;
    local_c4 = 0;
    bVar2 = false;
    iVar4 = 0;
switchD_00100510_caseD_0:
    do {
      while( true ) {
        iVar5 = opt_next();
        if (iVar5 == 0) {
          opt_num_rest();
          puVar13 = (undefined8 *)opt_rest();
          pcVar15 = (char *)*puVar13;
          goto joined_r0x00100551;
        }
        if (iVar5 < 7) break;
        iVar6 = iVar5 + -99;
        if (iVar5 + -99 <= iVar4) {
          iVar6 = iVar4;
        }
        if (iVar5 - 100U < 4) {
          iVar4 = iVar6;
        }
      }
    } while (iVar5 < -1);
    switch(iVar5) {
    default:
      goto switchD_00100510_caseD_0;
    case 1:
      opt_help(engine_options);
      local_c8 = 0;
      goto LAB_00100618;
    case 2:
      bVar2 = true;
      goto switchD_00100510_caseD_0;
    case 4:
      local_bc = local_bc + 1;
    case 3:
      local_c4 = local_c4 + 1;
      goto switchD_00100510_caseD_0;
    case 5:
      uVar14 = opt_arg();
      iVar5 = OPENSSL_sk_push(lVar11,uVar14);
      break;
    case 6:
      uVar14 = opt_arg();
      iVar5 = OPENSSL_sk_push(lVar12,uVar14);
      break;
    case -1:
      goto switchD_00100510_caseD_ffffffff;
    }
    if (iVar5 < 1) goto LAB_001005b8;
    goto switchD_00100510_caseD_0;
  }
LAB_001005b8:
  local_c8 = 1;
  goto LAB_00100618;
joined_r0x00100551:
  if (pcVar15 != (char *)0x0) {
    if (*pcVar15 == '-') {
      BIO_printf(_bio_err,"%s: Cannot mix flags and engine names.\n",uVar1);
switchD_00100510_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar1);
    }
    else {
      iVar5 = OPENSSL_sk_push(lVar10);
      if (iVar5 != 0) goto code_r0x0010056c;
    }
    goto LAB_001005b8;
  }
  goto LAB_00100685;
code_r0x0010056c:
  pcVar15 = (char *)puVar13[1];
  puVar13 = puVar13 + 1;
  goto joined_r0x00100551;
LAB_00100685:
  iVar5 = OPENSSL_sk_num(lVar10);
  if (iVar5 == 0) {
    for (pEVar16 = ENGINE_get_first(); pEVar16 != (ENGINE *)0x0; pEVar16 = ENGINE_get_next(pEVar16))
    {
      pcVar15 = ENGINE_get_id(pEVar16);
      iVar5 = OPENSSL_sk_push(lVar10,pcVar15);
      if (iVar5 == 0) goto LAB_001005b8;
    }
  }
  local_c8 = 0;
  for (iVar5 = 0; iVar6 = OPENSSL_sk_num(lVar10), iVar5 < iVar6; iVar5 = iVar5 + 1) {
    pcVar15 = (char *)OPENSSL_sk_value(lVar10,iVar5);
    pEVar16 = ENGINE_by_id(pcVar15);
    if (pEVar16 == (ENGINE *)0x0) {
      ERR_print_errors(_bio_err);
      iVar6 = local_c8 + 1;
      local_c8 = 0x7f;
      if (iVar6 < 0x80) {
        local_c8 = iVar6;
      }
    }
    else {
      ENGINE_get_name(pEVar16);
      BIO_printf(bio,"(%s) %s\n",pcVar15);
      util_do_cmds_constprop_0(pEVar16,lVar11,bio);
      __s1 = ENGINE_get_id(pEVar16);
      iVar6 = strcmp(__s1,pcVar15);
      if (iVar6 != 0) {
        ENGINE_get_name(pEVar16);
        pcVar15 = ENGINE_get_id(pEVar16);
        BIO_printf(bio,"Loaded: (%s) %s\n",pcVar15);
      }
      if (bVar2) {
        local_7c = 0x100;
        local_78 = (char *)0x0;
        pRVar18 = ENGINE_get_RSA(pEVar16);
        if ((((((pRVar18 != (RSA_METHOD *)0x0) &&
               (iVar6 = append_buf(&local_78,&local_7c,&_LC13), iVar6 == 0)) ||
              ((lVar17 = ENGINE_get_EC(pEVar16), lVar17 != 0 &&
               (iVar6 = append_buf(&local_78,&local_7c,&_LC14), iVar6 == 0)))) ||
             ((pDVar19 = ENGINE_get_DSA(pEVar16), pDVar19 != (DSA_METHOD *)0x0 &&
              (iVar6 = append_buf(&local_78,&local_7c,&_LC15), iVar6 == 0)))) ||
            ((pDVar20 = ENGINE_get_DH(pEVar16), pDVar20 != (DH_METHOD *)0x0 &&
             (iVar6 = append_buf(&local_78,&local_7c,&_LC16), iVar6 == 0)))) ||
           ((pRVar21 = ENGINE_get_RAND(pEVar16), pRVar21 != (RAND_METHOD *)0x0 &&
            (iVar6 = append_buf(&local_78,&local_7c,&_LC17), iVar6 == 0)))) break;
        pEVar22 = ENGINE_get_ciphers(pEVar16);
        if ((pEVar22 != (ENGINE_CIPHERS_PTR)0x0) &&
           (iVar6 = (*pEVar22)(pEVar16,(EVP_CIPHER **)0x0,&local_70,0), 0 < iVar6)) {
          lVar17 = 0;
          do {
            pcVar15 = OBJ_nid2sn(*(int *)((long)local_70 + lVar17));
            iVar8 = append_buf(&local_78,&local_7c,pcVar15);
            if (iVar8 == 0) goto LAB_00100618;
            lVar17 = lVar17 + 4;
          } while (lVar17 != (long)iVar6 * 4);
        }
        pEVar24 = ENGINE_get_digests(pEVar16);
        if ((pEVar24 != (ENGINE_DIGESTS_PTR)0x0) &&
           (iVar6 = (*pEVar24)(pEVar16,(EVP_MD **)0x0,&local_70,0), 0 < iVar6)) {
          lVar17 = 0;
          do {
            pcVar15 = OBJ_nid2sn(*(int *)((long)local_70 + lVar17));
            iVar8 = append_buf(&local_78,&local_7c,pcVar15);
            if (iVar8 == 0) goto LAB_00100618;
            lVar17 = lVar17 + 4;
          } while (lVar17 != (long)iVar6 * 4);
        }
        pEVar25 = ENGINE_get_pkey_meths(pEVar16);
        if ((pEVar25 != (ENGINE_PKEY_METHS_PTR)0x0) &&
           (iVar6 = (*pEVar25)(pEVar16,(EVP_PKEY_METHOD **)0x0,&local_70,0), 0 < iVar6)) {
          lVar17 = 0;
          do {
            pcVar15 = OBJ_nid2sn(*(int *)((long)local_70 + lVar17));
            iVar8 = append_buf(&local_78,&local_7c,pcVar15);
            if (iVar8 == 0) goto LAB_00100618;
            lVar17 = lVar17 + 4;
          } while ((long)iVar6 * 4 != lVar17);
        }
        local_50 = 1;
        local_68 = pEVar16;
        local_60 = &local_78;
        local_58 = &local_7c;
        OSSL_STORE_do_all_loaders(util_store_cap,&local_68);
        if (local_50 == 0) break;
        if ((local_78 != (char *)0x0) && (*local_78 != '\0')) {
          BIO_printf(bio," [%s]\n",local_78);
        }
        CRYPTO_free(local_78);
      }
      if (local_c4 != 0) {
        BIO_printf(bio,"%s","     ");
        iVar6 = ENGINE_init(pEVar16);
        if (iVar6 == 0) {
          BIO_printf(bio,"[ unavailable ]\n");
          if (local_bc != 0) {
            ERR_print_errors_fp(_stdout);
          }
          ERR_clear_error();
        }
        else {
          BIO_printf(bio,"[ available ]\n");
          util_do_cmds_constprop_0(pEVar16,lVar12,bio);
          ENGINE_finish(pEVar16);
        }
      }
      if (((0 < iVar4) && (iVar6 = ENGINE_ctrl(pEVar16,10,0,(void *)0x0,(f *)0x0), iVar6 != 0)) &&
         (iVar6 = ENGINE_ctrl(pEVar16,0xb,0,(void *)0x0,(f *)0x0), 0 < iVar6)) {
        lVar17 = OPENSSL_sk_new_null();
        if (lVar17 == 0) {
LAB_00100f6b:
          p = (void *)0x0;
          pcVar15 = (char *)0x0;
LAB_00100c28:
          OPENSSL_sk_free(lVar17);
          CRYPTO_free(pcVar15);
          CRYPTO_free(p);
          break;
        }
        iVar8 = 0;
        do {
          i = (long)iVar6;
          uVar7 = ENGINE_ctrl(pEVar16,0x12,i,(void *)0x0,(f *)0x0);
          if ((int)uVar7 < 0) goto LAB_00100f6b;
          if ((3 < iVar4) || ((uVar7 & 8) == 0)) {
            iVar6 = ENGINE_ctrl(pEVar16,0xe,i,(void *)0x0,(f *)0x0);
            if (iVar6 < 1) goto LAB_00100f6b;
            pcVar15 = (char *)app_malloc((long)(iVar6 + 1),"name buffer");
            iVar6 = ENGINE_ctrl(pEVar16,0xf,i,pcVar15,(f *)0x0);
            if (0 < iVar6) {
              iVar6 = ENGINE_ctrl(pEVar16,0x10,i,(void *)0x0,(f *)0x0);
              if (-1 < iVar6) {
                p = (void *)0x0;
                if (iVar6 != 0) {
                  p = (void *)app_malloc((long)(iVar6 + 1),"description buffer");
                  iVar6 = ENGINE_ctrl(pEVar16,0x11,i,p,(f *)0x0);
                  if (iVar6 < 1) goto LAB_00100c28;
                }
                if (iVar8 == 0) {
                  iVar6 = BIO_puts(bio,"     ");
                }
                else {
                  iVar6 = BIO_printf(bio,", ");
                  iVar6 = iVar8 + iVar6;
                }
                if (iVar4 == 1) {
                  if ((5 < iVar6) && (sVar23 = strlen(pcVar15), 0x4e < (int)sVar23 + iVar6)) {
                    BIO_printf(bio,"\n");
                    iVar6 = BIO_puts(bio,"     ");
                  }
                  iVar8 = BIO_printf(bio,"%s",pcVar15);
                  iVar8 = iVar8 + iVar6;
                  goto LAB_001007cf;
                }
                BIO_printf(bio,"%s: %s\n",pcVar15);
                if (iVar4 != 2) {
                  BIO_printf(bio,"%s%s(input flags): ","     ");
                  if (uVar7 == 0) {
                    BIO_printf(bio,"<no flags>\n");
                  }
                  else {
                    if ((uVar7 & 8) != 0) {
                      BIO_printf(bio,"[Internal] ");
                    }
                    uVar3 = uVar7 & 0xfffffff0;
                    uVar9 = uVar7 & 4;
                    if ((uVar7 & 1) == 0) {
                      if ((uVar7 & 2) == 0) {
                        if (uVar9 == 0) {
                          if (uVar3 != 0) {
                            BIO_printf(bio,"<0x%04X>",(ulong)uVar7 & 0xfffffff0);
                          }
                          goto LAB_00100dae;
                        }
                        BIO_printf(bio,"NO_INPUT");
                      }
                      else {
                        BIO_printf(bio,"STRING");
                        if (uVar9 != 0) goto LAB_00100d55;
                      }
joined_r0x0010101f:
                      if (uVar3 != 0) {
                        BIO_printf(bio,"|");
                        BIO_printf(bio,"<0x%04X>",(ulong)uVar7 & 0xfffffff0);
                      }
                    }
                    else {
                      BIO_printf(bio,"NUMERIC");
                      if ((uVar7 & 2) == 0) {
                        if (uVar9 == 0) goto joined_r0x0010101f;
LAB_00100d55:
                        BIO_printf(bio,"|");
                        BIO_printf(bio,"NO_INPUT");
                      }
                      else {
                        BIO_printf(bio,"|");
                        BIO_printf(bio,"STRING");
                        if (uVar9 != 0) goto LAB_00100d55;
                      }
                      if (uVar3 != 0) {
                        BIO_printf(bio,"|");
                        BIO_printf(bio,"<0x%04X>",(ulong)uVar7 & 0xfffffff0);
                      }
                      BIO_printf(bio,"  <illegal flags!>");
                    }
LAB_00100dae:
                    BIO_printf(bio,"\n");
                  }
                }
                iVar8 = 0;
                goto LAB_001007cf;
              }
            }
            p = (void *)0x0;
            goto LAB_00100c28;
          }
          p = (void *)0x0;
          pcVar15 = (char *)0x0;
LAB_001007cf:
          CRYPTO_free(pcVar15);
          CRYPTO_free(p);
          iVar6 = ENGINE_ctrl(pEVar16,0xc,i,(void *)0x0,(f *)0x0);
        } while (0 < iVar6);
        if (0 < iVar8) {
          BIO_printf(bio,"\n");
        }
        OPENSSL_sk_free();
        CRYPTO_free((void *)0x0);
        CRYPTO_free((void *)0x0);
      }
      ENGINE_free(pEVar16);
    }
  }
LAB_00100618:
  ERR_print_errors(_bio_err);
  OPENSSL_sk_free(lVar10);
  OPENSSL_sk_free(lVar11);
  OPENSSL_sk_free(lVar12);
  BIO_free_all(bio);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


