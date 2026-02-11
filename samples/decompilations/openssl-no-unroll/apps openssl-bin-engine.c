
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
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  BIO *bio;
  undefined8 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  ENGINE *pEVar15;
  char *pcVar16;
  long lVar17;
  RSA_METHOD *pRVar18;
  DSA_METHOD *pDVar19;
  DH_METHOD *pDVar20;
  RAND_METHOD *pRVar21;
  ENGINE_CIPHERS_PTR pEVar22;
  ENGINE_DIGESTS_PTR pEVar23;
  ENGINE_PKEY_METHS_PTR pEVar24;
  size_t sVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  long in_FS_OFFSET;
  int local_cc;
  int local_bc;
  char *local_b0;
  void *local_a0;
  undefined4 local_7c;
  char *local_78;
  int *local_70;
  ENGINE *local_68;
  char **local_60;
  undefined4 *local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = OPENSSL_sk_new_null();
  lVar10 = OPENSSL_sk_new_null();
  lVar11 = OPENSSL_sk_new_null();
  bio = (BIO *)dup_bio_out(0x8001);
  if ((lVar9 != 0 && lVar10 != 0) && (lVar11 != 0)) {
    uVar1 = *param_2;
    pcVar14 = (char *)param_2[1];
    while ((pcVar14 != (char *)0x0 && (*pcVar14 != '-'))) {
      iVar3 = OPENSSL_sk_push(lVar9);
      if (iVar3 == 0) goto LAB_001005b8;
      puVar12 = param_2 + 2;
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
      pcVar14 = (char *)*puVar12;
    }
    *param_2 = uVar1;
    opt_init(param_1,param_2,engine_options);
    local_bc = 0;
    iVar3 = 0;
    bVar2 = false;
    iVar28 = 0;
switchD_00100510_caseD_0:
    do {
      while( true ) {
        iVar4 = opt_next();
        if (iVar4 == 0) {
          opt_num_rest();
          puVar12 = (undefined8 *)opt_rest();
          pcVar14 = (char *)*puVar12;
          goto joined_r0x00100551;
        }
        if (iVar4 < 7) break;
        iVar5 = iVar4 + -99;
        if (iVar4 + -99 <= iVar28) {
          iVar5 = iVar28;
        }
        if (iVar4 - 100U < 4) {
          iVar28 = iVar5;
        }
      }
    } while (iVar4 < -1);
    switch(iVar4) {
    default:
      goto switchD_00100510_caseD_0;
    case 1:
      opt_help(engine_options);
      local_cc = 0;
      goto LAB_00100618;
    case 2:
      bVar2 = true;
      goto switchD_00100510_caseD_0;
    case 4:
      local_bc = local_bc + 1;
    case 3:
      iVar3 = iVar3 + 1;
      goto switchD_00100510_caseD_0;
    case 5:
      uVar13 = opt_arg();
      iVar4 = OPENSSL_sk_push(lVar10,uVar13);
      break;
    case 6:
      uVar13 = opt_arg();
      iVar4 = OPENSSL_sk_push(lVar11,uVar13);
      break;
    case -1:
      goto switchD_00100510_caseD_ffffffff;
    }
    if (iVar4 < 1) goto LAB_001005b8;
    goto switchD_00100510_caseD_0;
  }
LAB_001005b8:
  local_cc = 1;
  goto LAB_00100618;
joined_r0x00100551:
  if (pcVar14 != (char *)0x0) {
    if (*pcVar14 == '-') {
      BIO_printf(_bio_err,"%s: Cannot mix flags and engine names.\n",uVar1);
switchD_00100510_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar1);
    }
    else {
      iVar4 = OPENSSL_sk_push(lVar9);
      if (iVar4 != 0) goto code_r0x0010056c;
    }
    goto LAB_001005b8;
  }
  goto LAB_00100685;
LAB_00101039:
  local_a0 = (void *)0x0;
LAB_00100e37:
  OPENSSL_sk_free(lVar17);
  CRYPTO_free(local_b0);
  CRYPTO_free(local_a0);
  goto LAB_00100618;
code_r0x0010056c:
  pcVar14 = (char *)puVar12[1];
  puVar12 = puVar12 + 1;
  goto joined_r0x00100551;
LAB_00100685:
  iVar4 = OPENSSL_sk_num(lVar9);
  if (iVar4 == 0) {
    for (pEVar15 = ENGINE_get_first(); pEVar15 != (ENGINE *)0x0; pEVar15 = ENGINE_get_next(pEVar15))
    {
      pcVar14 = ENGINE_get_id(pEVar15);
      iVar4 = OPENSSL_sk_push(lVar9,pcVar14);
      if (iVar4 == 0) goto LAB_001005b8;
    }
  }
  local_cc = 0;
  for (iVar4 = 0; iVar5 = OPENSSL_sk_num(lVar9), iVar4 < iVar5; iVar4 = iVar4 + 1) {
    pcVar14 = (char *)OPENSSL_sk_value(lVar9,iVar4);
    pEVar15 = ENGINE_by_id(pcVar14);
    if (pEVar15 != (ENGINE *)0x0) {
      pcVar16 = ENGINE_get_name(pEVar15);
      BIO_printf(bio,"(%s) %s\n",pcVar14,pcVar16);
      util_do_cmds_constprop_0(pEVar15,lVar10,bio);
      pcVar16 = ENGINE_get_id(pEVar15);
      iVar5 = strcmp(pcVar16,pcVar14);
      if (iVar5 != 0) {
        pcVar14 = ENGINE_get_name(pEVar15);
        pcVar16 = ENGINE_get_id(pEVar15);
        BIO_printf(bio,"Loaded: (%s) %s\n",pcVar16,pcVar14);
      }
      if (bVar2) {
        local_7c = 0x100;
        local_78 = (char *)0x0;
        pRVar18 = ENGINE_get_RSA(pEVar15);
        if ((((((pRVar18 != (RSA_METHOD *)0x0) &&
               (iVar5 = append_buf(&local_78,&local_7c,&_LC13), iVar5 == 0)) ||
              ((lVar26 = ENGINE_get_EC(pEVar15), lVar26 != 0 &&
               (iVar5 = append_buf(&local_78,&local_7c,&_LC14), iVar5 == 0)))) ||
             ((pDVar19 = ENGINE_get_DSA(pEVar15), pDVar19 != (DSA_METHOD *)0x0 &&
              (iVar5 = append_buf(&local_78,&local_7c,&_LC15), iVar5 == 0)))) ||
            ((pDVar20 = ENGINE_get_DH(pEVar15), pDVar20 != (DH_METHOD *)0x0 &&
             (iVar5 = append_buf(&local_78,&local_7c,&_LC16), iVar5 == 0)))) ||
           ((pRVar21 = ENGINE_get_RAND(pEVar15), pRVar21 != (RAND_METHOD *)0x0 &&
            (iVar5 = append_buf(&local_78,&local_7c,&_LC17), iVar5 == 0)))) break;
        pEVar22 = ENGINE_get_ciphers(pEVar15);
        if ((pEVar22 != (ENGINE_CIPHERS_PTR)0x0) &&
           (iVar5 = (*pEVar22)(pEVar15,(EVP_CIPHER **)0x0,&local_70,0), 0 < iVar5)) {
          lVar26 = 0;
          do {
            pcVar14 = OBJ_nid2sn(*(int *)((long)local_70 + lVar26));
            iVar8 = append_buf(&local_78,&local_7c,pcVar14);
            if (iVar8 == 0) goto LAB_00100618;
            lVar26 = lVar26 + 4;
          } while (lVar26 != (long)iVar5 * 4);
        }
        pEVar23 = ENGINE_get_digests(pEVar15);
        if ((pEVar23 != (ENGINE_DIGESTS_PTR)0x0) &&
           (iVar5 = (*pEVar23)(pEVar15,(EVP_MD **)0x0,&local_70,0), 0 < iVar5)) {
          lVar26 = 0;
          do {
            pcVar14 = OBJ_nid2sn(*(int *)((long)local_70 + lVar26));
            iVar8 = append_buf(&local_78,&local_7c,pcVar14);
            if (iVar8 == 0) goto LAB_00100618;
            lVar26 = lVar26 + 4;
          } while ((long)iVar5 * 4 != lVar26);
        }
        pEVar24 = ENGINE_get_pkey_meths(pEVar15);
        if ((pEVar24 != (ENGINE_PKEY_METHS_PTR)0x0) &&
           (iVar5 = (*pEVar24)(pEVar15,(EVP_PKEY_METHOD **)0x0,&local_70,0), 0 < iVar5)) {
          lVar26 = 0;
          do {
            pcVar14 = OBJ_nid2sn(*(int *)((long)local_70 + lVar26));
            iVar8 = append_buf(&local_78,&local_7c,pcVar14);
            if (iVar8 == 0) goto LAB_00100618;
            lVar26 = lVar26 + 4;
          } while ((long)iVar5 * 4 != lVar26);
        }
        local_50 = 1;
        local_68 = pEVar15;
        local_60 = &local_78;
        local_58 = &local_7c;
        OSSL_STORE_do_all_loaders(util_store_cap,&local_68);
        if (local_50 == 0) break;
        if ((local_78 != (char *)0x0) && (*local_78 != '\0')) {
          BIO_printf(bio," [%s]\n",local_78);
        }
        CRYPTO_free(local_78);
      }
      if (iVar3 != 0) {
        BIO_printf(bio,"%s","     ");
        iVar5 = ENGINE_init(pEVar15);
        if (iVar5 == 0) {
          BIO_printf(bio,"[ unavailable ]\n");
          if (local_bc != 0) {
            ERR_print_errors_fp(_stdout);
          }
          ERR_clear_error();
        }
        else {
          BIO_printf(bio,"[ available ]\n");
          util_do_cmds_constprop_0(pEVar15,lVar11,bio);
          ENGINE_finish(pEVar15);
        }
      }
      if ((iVar28 < 1) || (iVar5 = ENGINE_ctrl(pEVar15,10,0,(void *)0x0,(f *)0x0), iVar5 == 0)) {
LAB_001009c2:
        ENGINE_free(pEVar15);
        goto LAB_001009ca;
      }
      iVar5 = ENGINE_ctrl(pEVar15,0xb,0,(void *)0x0,(f *)0x0);
      lVar26 = (long)iVar5;
      if (iVar5 < 1) goto LAB_001009c2;
      lVar17 = OPENSSL_sk_new_null();
      if (lVar17 != 0) {
        if (iVar28 == 1) {
          iVar5 = 0;
          do {
            uVar6 = ENGINE_ctrl(pEVar15,0x12,lVar26,(void *)0x0,(f *)0x0);
            if ((int)uVar6 < 0) goto LAB_00100e2c;
            if ((uVar6 & 8) == 0) {
              iVar8 = ENGINE_ctrl(pEVar15,0xe,lVar26,(void *)0x0,(f *)0x0);
              if (iVar8 < 1) goto LAB_00100e2c;
              local_b0 = (char *)app_malloc((long)(iVar8 + 1),"name buffer");
              iVar8 = ENGINE_ctrl(pEVar15,0xf,lVar26,local_b0,(f *)0x0);
              if (iVar8 < 1) goto LAB_00101039;
              iVar8 = ENGINE_ctrl(pEVar15,0x10,lVar26,(void *)0x0,(f *)0x0);
              if (iVar8 < 0) goto LAB_00101039;
              local_a0 = (void *)0x0;
              if (iVar8 != 0) {
                local_a0 = (void *)app_malloc((long)(iVar8 + 1),"description buffer");
                iVar8 = ENGINE_ctrl(pEVar15,0x11,lVar26,local_a0,(f *)0x0);
                if (iVar8 < 1) goto LAB_00100e37;
              }
              if (iVar5 == 0) {
                iVar5 = BIO_puts(bio,"     ");
              }
              else {
                iVar8 = BIO_printf(bio,", ");
                iVar5 = iVar5 + iVar8;
              }
              if ((5 < iVar5) && (sVar25 = strlen(local_b0), 0x4e < (int)sVar25 + iVar5)) {
                BIO_printf(bio,"\n");
                iVar5 = BIO_puts(bio,"     ");
              }
              iVar8 = BIO_printf(bio,"%s",local_b0);
              iVar5 = iVar5 + iVar8;
            }
            else {
              local_b0 = (char *)0x0;
              local_a0 = (void *)0x0;
            }
            CRYPTO_free(local_b0);
            CRYPTO_free(local_a0);
            iVar8 = ENGINE_ctrl(pEVar15,0xc,lVar26,(void *)0x0,(f *)0x0);
            lVar26 = (long)iVar8;
          } while (0 < iVar8);
          if (0 < iVar5) {
            BIO_printf(bio,"\n");
          }
        }
        else {
          do {
            uVar6 = ENGINE_ctrl(pEVar15,0x12,lVar26,(void *)0x0,(f *)0x0);
            if ((int)uVar6 < 0) goto LAB_00100e2c;
            if ((iVar28 < 4) && ((uVar6 & 8) != 0)) {
              local_a0 = (void *)0x0;
              local_b0 = (char *)0x0;
            }
            else {
              iVar5 = ENGINE_ctrl(pEVar15,0xe,lVar26,(void *)0x0,(f *)0x0);
              if (iVar5 < 1) goto LAB_00100e2c;
              local_b0 = (char *)app_malloc((long)(iVar5 + 1),"name buffer");
              iVar5 = ENGINE_ctrl(pEVar15,0xf,lVar26,local_b0,(f *)0x0);
              if (iVar5 < 1) goto LAB_00101039;
              iVar5 = ENGINE_ctrl(pEVar15,0x10,lVar26,(void *)0x0,(f *)0x0);
              if (iVar5 < 0) goto LAB_00101039;
              if (iVar5 == 0) {
                BIO_puts(bio,"     ");
LAB_001008d3:
                local_a0 = (void *)0x0;
              }
              else {
                local_a0 = (void *)app_malloc((long)(iVar5 + 1),"description buffer");
                iVar5 = ENGINE_ctrl(pEVar15,0x11,lVar26,local_a0,(f *)0x0);
                if (iVar5 < 1) goto LAB_00100e37;
                BIO_puts(bio,"     ");
                if (local_a0 == (void *)0x0) goto LAB_001008d3;
              }
              BIO_printf(bio,"%s: %s\n",local_b0);
              if (iVar28 != 2) {
                BIO_printf(bio,"%s%s(input flags): ","     ");
                if (uVar6 == 0) {
                  BIO_printf(bio,"<no flags>\n");
                }
                else {
                  if ((uVar6 & 8) != 0) {
                    BIO_printf(bio,"[Internal] ");
                  }
                  uVar7 = uVar6 & 4;
                  uVar27 = uVar6 & 0xfffffff0;
                  if ((uVar6 & 1) == 0) {
                    if ((uVar6 & 2) == 0) {
                      if (uVar7 != 0) {
                        BIO_printf(bio,"NO_INPUT");
                        goto LAB_0010108d;
                      }
                      if (uVar27 == 0) goto LAB_0010097f;
                    }
                    else {
                      BIO_printf(bio,"STRING");
                      if (uVar7 != 0) goto LAB_001010e9;
LAB_0010108d:
                      if (uVar27 == 0) goto LAB_0010097f;
                      BIO_printf(bio,"|");
                    }
                    BIO_printf(bio,"<0x%04X>",(ulong)uVar27);
                  }
                  else {
                    BIO_printf(bio,"NUMERIC");
                    if ((uVar6 & 2) == 0) {
                      if (uVar7 == 0) goto LAB_0010108d;
LAB_001010e9:
                      BIO_printf(bio,"|");
                      BIO_printf(bio,"NO_INPUT");
                    }
                    else {
                      BIO_printf(bio,"|");
                      BIO_printf(bio,"STRING");
                      if (uVar7 != 0) goto LAB_001010e9;
                    }
                    if (uVar27 != 0) {
                      BIO_printf(bio,"|");
                      BIO_printf(bio,"<0x%04X>",(ulong)uVar27);
                    }
                    BIO_printf(bio,"  <illegal flags!>");
                  }
LAB_0010097f:
                  BIO_printf(bio,"\n");
                }
              }
            }
            CRYPTO_free(local_b0);
            CRYPTO_free(local_a0);
            iVar5 = ENGINE_ctrl(pEVar15,0xc,lVar26,(void *)0x0,(f *)0x0);
            lVar26 = (long)iVar5;
          } while (0 < iVar5);
        }
        OPENSSL_sk_free();
        CRYPTO_free((void *)0x0);
        CRYPTO_free((void *)0x0);
        goto LAB_001009c2;
      }
LAB_00100e2c:
      local_b0 = (char *)0x0;
      local_a0 = (void *)0x0;
      goto LAB_00100e37;
    }
    ERR_print_errors(_bio_err);
    iVar5 = local_cc + 1;
    local_cc = 0x7f;
    if (iVar5 < 0x80) {
      local_cc = iVar5;
    }
LAB_001009ca:
  }
LAB_00100618:
  ERR_print_errors(_bio_err);
  OPENSSL_sk_free(lVar9);
  OPENSSL_sk_free(lVar10);
  OPENSSL_sk_free(lVar11);
  BIO_free_all(bio);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_cc;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


