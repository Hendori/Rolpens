
undefined8 provider_conf_parse_bool_setting(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == (char *)0x0) {
    ERR_new();
    uVar4 = 0x118;
LAB_001000f1:
    ERR_set_debug("crypto/provider_conf.c",uVar4,"provider_conf_parse_bool_setting");
    ERR_set_error(0xf,0x69,"directive %s set to unrecognized value",param_1);
    uVar4 = 0;
  }
  else {
    cVar1 = *param_2;
    if ((((((cVar1 == '1') && (param_2[1] == '\0')) || (iVar3 = strcmp(param_2,"yes"), iVar3 == 0))
         || (((iVar3 = strcmp(param_2,"YES"), iVar3 == 0 ||
              (iVar3 = strcmp(param_2,"true"), iVar3 == 0)) ||
             (iVar3 = strcmp(param_2,"TRUE"), iVar3 == 0)))) ||
        (((cVar2 = *param_2, cVar2 == 'o' && (param_2[1] == 'n')) && (param_2[2] == '\0')))) ||
       (((cVar2 == 'O' && (param_2[1] == 'N')) && (param_2[2] == '\0')))) {
      *param_3 = 1;
    }
    else {
      if ((((cVar1 != '0') || (param_2[1] != '\0')) &&
          (((cVar2 != 'n' || ((param_2[1] != 'o' || (param_2[2] != '\0')))) &&
           ((cVar2 != 'N' || ((param_2[1] != 'O' || (param_2[2] != '\0')))))))) &&
         ((iVar3 = strcmp(param_2,"false"), iVar3 != 0 &&
          (((iVar3 = strcmp(param_2,"FALSE"), iVar3 != 0 &&
            (iVar3 = strcmp(param_2,"off"), iVar3 != 0)) &&
           (iVar3 = strcmp(param_2,"OFF"), iVar3 != 0)))))) {
        ERR_new();
        uVar4 = 0x12e;
        goto LAB_001000f1;
      }
      *param_3 = 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}



ulong provider_conf_params_internal
                (long param_1,undefined8 param_2,long param_3,char *param_4,CONF *param_5,
                undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  stack_st_CONF_VALUE *psVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  char local_248 [520];
  long local_40;
  
  iVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  psVar4 = NCONF_get_section(param_5,param_4);
  if (psVar4 == (stack_st_CONF_VALUE *)0x0) {
    if (param_1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar9 = ossl_provider_info_add_parameter(param_2,param_3,param_4);
        return uVar9;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = OSSL_PROVIDER_add_conf_parameter(param_1,param_3,param_4);
      return uVar9;
    }
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_6);
      if (iVar1 <= iVar2) break;
      pcVar5 = (char *)OPENSSL_sk_value(param_6,iVar2);
      if (param_4 == pcVar5) {
        ERR_new();
        ERR_set_debug("crypto/provider_conf.c",100,"provider_conf_params_internal");
        ERR_set_error(0xe,0x7e,0);
        goto LAB_00100370;
      }
      iVar2 = iVar2 + 1;
    }
    iVar2 = OPENSSL_sk_push(param_6,param_4);
    if (iVar2 == 0) {
LAB_00100370:
      uVar9 = 0xffffffff;
    }
    else {
      sVar6 = 0;
      if (param_3 != 0) {
        OPENSSL_strlcpy(local_248,param_3,0x200);
        OPENSSL_strlcat(local_248,&_LC10,0x200);
        sVar6 = strlen(local_248);
      }
      iVar1 = 0;
      iVar2 = OPENSSL_sk_num(psVar4);
      if (0 < iVar2) {
        do {
          lVar7 = OPENSSL_sk_value(psVar4,iVar1);
          sVar8 = strlen(*(char **)(lVar7 + 8));
          if (0x1ff < sVar8 + sVar6) {
            OPENSSL_sk_pop(param_6);
            goto LAB_00100370;
          }
          local_248[sVar6] = '\0';
          OPENSSL_strlcat(local_248,*(undefined8 *)(lVar7 + 8),0x200);
          uVar3 = provider_conf_params_internal
                            (param_1,param_2,local_248,*(undefined8 *)(lVar7 + 0x10),param_5,param_6
                            );
          if ((int)uVar3 < 0) {
            OPENSSL_sk_pop(param_6);
            uVar9 = (ulong)uVar3;
            goto LAB_00100311;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar4);
        } while (iVar1 < iVar2);
      }
      OPENSSL_sk_pop(param_6);
      uVar9 = 1;
    }
LAB_00100311:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 provider_conf_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  stack_st_CONF_VALUE *psVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  stack_st_CONF_VALUE *psVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  long in_FS_OFFSET;
  char *local_b0;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = CONF_imodule_get_value(param_1);
  psVar9 = NCONF_get_section(param_2,pcVar8);
  if (psVar9 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/provider_conf.c",0x19c,"provider_conf_init");
    ERR_set_error(0xf,0x69,0);
    uVar11 = 0;
  }
  else {
    iVar20 = 0;
    iVar4 = OPENSSL_sk_num(psVar9);
    if (0 < iVar4) {
      do {
        lVar10 = OPENSSL_sk_value(psVar9,iVar20);
        pcVar8 = *(char **)(lVar10 + 0x10);
        pcVar17 = *(char **)(lVar10 + 8);
        uVar11 = NCONF_get0_libctx(param_2);
        local_70 = 0;
        local_6c = 0;
        pcVar12 = strchr(pcVar17,0x2e);
        if (pcVar12 != (char *)0x0) {
          pcVar17 = pcVar12 + 1;
        }
        psVar13 = NCONF_get_section(param_2,pcVar8);
        if (psVar13 == (stack_st_CONF_VALUE *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/provider_conf.c",0x148,"provider_conf_load");
          ERR_set_error(0xf,0x69,"section=%s not found",pcVar8);
          uVar11 = 0;
          goto LAB_001006c6;
        }
        local_b0 = (char *)0x0;
        for (iVar4 = 0; iVar5 = OPENSSL_sk_num(psVar13), iVar6 = local_70, iVar4 < iVar5;
            iVar4 = iVar4 + 1) {
          lVar10 = OPENSSL_sk_value(psVar13,iVar4);
          pcVar12 = *(char **)(lVar10 + 8);
          pcVar14 = strchr(pcVar12,0x2e);
          pcVar1 = *(char **)(lVar10 + 0x10);
          if (pcVar14 != (char *)0x0) {
            pcVar12 = pcVar14 + 1;
          }
          iVar6 = strcmp(pcVar12,"identity");
          pcVar14 = pcVar1;
          pcVar3 = local_b0;
          if (iVar6 != 0) {
            iVar6 = strcmp(pcVar12,"soft_load");
            piVar19 = &local_70;
            pcVar14 = pcVar17;
            if (iVar6 != 0) {
              iVar6 = strcmp(pcVar12,"module");
              pcVar3 = pcVar1;
              if ((iVar6 == 0) ||
                 (iVar6 = strcmp(pcVar12,"activate"), pcVar3 = local_b0, iVar6 != 0))
              goto LAB_00100570;
              piVar19 = &local_6c;
            }
            iVar6 = provider_conf_parse_bool_setting(pcVar12,pcVar1,piVar19);
            pcVar3 = local_b0;
            if (iVar6 == 0) goto LAB_001005dc;
          }
LAB_00100570:
          local_b0 = pcVar3;
          pcVar17 = pcVar14;
        }
        if (local_6c == 0) {
          local_48 = 0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (pcVar17 == (char *)0x0) {
joined_r0x0010087d:
            if (local_b0 != (char *)0x0) {
              pcVar17 = CRYPTO_strdup(local_b0,"crypto/provider_conf.c",0x176);
              local_68._8_8_ = pcVar17;
              if (pcVar17 == (char *)0x0) goto LAB_001007a5;
            }
            lVar10 = OPENSSL_sk_new_null();
            if (lVar10 == 0) {
              ossl_provider_info_clear(local_68);
              uVar11 = 0;
              goto LAB_001006c6;
            }
            iVar4 = provider_conf_params_internal(0,local_68,0,pcVar8,param_2,lVar10);
            OPENSSL_sk_free(lVar10);
            if (iVar4 < 1) {
              ossl_provider_info_clear(local_68);
            }
            else {
              if ((local_68._8_8_ == 0) && (local_58._8_8_ == 0)) goto LAB_001007a5;
              iVar4 = ossl_provider_info_add_to_store(uVar11,local_68);
            }
LAB_0010085a:
            if (iVar4 < 0) {
              uVar11 = 0;
              goto LAB_001006c6;
            }
          }
          else {
            pcVar17 = CRYPTO_strdup(pcVar17,"crypto/provider_conf.c",0x171);
            local_68._0_8_ = pcVar17;
            if (pcVar17 != (char *)0x0) goto joined_r0x0010087d;
LAB_001007a5:
            ossl_provider_info_clear(local_68);
          }
        }
        else {
          puVar15 = (undefined8 *)ossl_lib_ctx_get_data(uVar11,0x10);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_68._8_8_;
          local_68 = auVar2 << 0x40;
          if ((puVar15 == (undefined8 *)0x0) ||
             (iVar4 = CRYPTO_THREAD_write_lock(*puVar15), iVar4 == 0)) {
            ERR_new();
            uVar11 = 0xd3;
LAB_00100a33:
            ERR_set_debug("crypto/provider_conf.c",uVar11,"provider_conf_activate");
            ERR_set_error(0xf,0xc0103,0);
            uVar11 = 0;
            goto LAB_001006c6;
          }
          lVar10 = puVar15[1];
          if ((lVar10 != 0) && (iVar4 = OPENSSL_sk_num(lVar10), 0 < iVar4)) {
            iVar5 = 0;
            do {
              uVar16 = OPENSSL_sk_value(lVar10,iVar5);
              pcVar12 = (char *)OSSL_PROVIDER_get0_name(uVar16);
              iVar7 = strcmp(pcVar12,pcVar17);
              if (iVar7 == 0) goto LAB_0010069d;
              iVar5 = iVar5 + 1;
            } while (iVar4 != iVar5);
          }
          iVar4 = ossl_provider_disable_fallback_loading(uVar11);
          if (iVar4 == 0) {
            CRYPTO_THREAD_unlock(*puVar15);
            ERR_new();
            uVar11 = 0xe0;
            goto LAB_00100a33;
          }
          lVar10 = ossl_provider_find(uVar11,pcVar17,1);
          if ((lVar10 != 0) || (lVar10 = ossl_provider_new(uVar11,pcVar17,0,0,1), lVar10 != 0)) {
            if (local_b0 != (char *)0x0) {
              ossl_provider_set_module_path(lVar10,local_b0);
            }
            lVar18 = OPENSSL_sk_new_null();
            if (lVar18 != 0) {
              iVar4 = provider_conf_params_internal(lVar10,0,0,pcVar8,param_2,lVar18);
              OPENSSL_sk_free(lVar18);
              if (iVar4 == 1) {
                iVar4 = ossl_provider_activate(lVar10,1,0);
                if (iVar4 != 0) {
                  iVar4 = ossl_provider_add_to_store(lVar10,local_68,0);
                  if (iVar4 == 0) {
                    ossl_provider_deactivate(lVar10,1);
                  }
                  else {
                    if ((lVar10 == local_68._0_8_) ||
                       (iVar4 = ossl_provider_activate(local_68._0_8_,1,0), iVar4 != 0)) {
                      lVar18 = puVar15[1];
                      if (lVar18 == 0) {
                        lVar18 = OPENSSL_sk_new_null();
                        puVar15[1] = lVar18;
                        if (lVar18 != 0) goto LAB_001009bb;
                      }
                      else {
LAB_001009bb:
                        iVar4 = OPENSSL_sk_push(lVar18,local_68._0_8_);
                        if (iVar4 != 0) goto LAB_0010069d;
                      }
                      ossl_provider_deactivate(local_68._0_8_,1);
                    }
                    ossl_provider_free(local_68._0_8_);
                  }
                }
                ossl_provider_free(lVar10);
                CRYPTO_THREAD_unlock(*puVar15);
                goto LAB_001006aa;
              }
              if (0 < iVar4) {
LAB_0010069d:
                CRYPTO_THREAD_unlock(*puVar15);
                goto LAB_001006aa;
              }
              ossl_provider_free(lVar10);
              CRYPTO_THREAD_unlock(*puVar15);
              goto LAB_0010085a;
            }
            ossl_provider_free(lVar10);
            CRYPTO_THREAD_unlock(*puVar15);
            uVar11 = 0;
            goto LAB_001006c6;
          }
          CRYPTO_THREAD_unlock(*puVar15);
          if (iVar6 == 0) {
LAB_001005dc:
            uVar11 = 0;
            goto LAB_001006c6;
          }
          ERR_clear_error();
        }
LAB_001006aa:
        iVar20 = iVar20 + 1;
        iVar4 = OPENSSL_sk_num(psVar9);
      } while (iVar20 < iVar4);
    }
    uVar11 = 1;
  }
LAB_001006c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ossl_prov_conf_ctx_new(void)

{
  long *ptr;
  long lVar1;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"crypto/provider_conf.c",0x20);
  if (ptr != (long *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *ptr = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void ossl_prov_conf_ctx_free(undefined8 *param_1)

{
  OPENSSL_sk_pop_free(param_1[1],ossl_provider_free);
  CRYPTO_THREAD_lock_free(*param_1);
  CRYPTO_free(param_1);
  return;
}



void ossl_provider_add_conf_module(void)

{
  CONF_module_add("providers",provider_conf_init,(undefined1 *)0x0);
  return;
}


