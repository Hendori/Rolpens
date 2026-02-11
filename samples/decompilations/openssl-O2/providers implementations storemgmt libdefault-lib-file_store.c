
undefined1 * file_settable_ctx_params(void)

{
  return known_settable_ctx_params_3;
}



void file_load_construct(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0010001b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_2,param_3[1]);
  return;
}



void file_load_cleanup(void)

{
  return;
}



uint file_eof(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = BIO_ctrl(*(BIO **)(param_1 + 0x18),10,0,(void *)0x0);
    uVar2 = 0;
    if ((int)lVar1 == 0) {
      lVar1 = BIO_ctrl(*(BIO **)(param_1 + 0x18),2,0,(void *)0x0);
      return (uint)((int)lVar1 != 0);
    }
  }
  else {
    uVar2 = 1;
    if (*(int *)(param_1 + 0x10) == 1) {
      return *(uint *)(param_1 + 0x20);
    }
  }
  return uVar2;
}



undefined8 file_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  X509_NAME *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_001002a0:
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 2) == 1) {
LAB_00100173:
      lVar2 = OSSL_PARAM_locate_const(param_2,"expect");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 8);
        if (iVar1 == 0) goto LAB_001001f7;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"subject");
      if (lVar2 == 0) goto LAB_001002a0;
      local_30 = (uchar *)0x0;
      local_28 = 0;
      if (*(int *)(param_1 + 2) == 1) {
        iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar2,&local_30,&local_28);
        if (iVar1 != 0) {
          a = d2i_X509_NAME((X509_NAME **)0x0,&local_30,local_28);
          if (a != (X509_NAME *)0x0) {
            uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
            uVar3 = X509_NAME_hash_ex(a,uVar3,0,&local_34);
            BIO_snprintf((char *)((long)param_1 + 0x24),9,"%08lx",uVar3);
            X509_NAME_free(a);
            if (local_34 != 0) goto LAB_001002a0;
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x164,"file_set_ctx_params"
                     );
        ERR_set_error(0x39,0xde,0);
      }
    }
    else {
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 == 0) {
LAB_00100129:
        lVar2 = OSSL_PARAM_locate_const(param_2,"input-type");
        if (lVar2 != 0) {
          CRYPTO_free((void *)param_1[5]);
          param_1[5] = 0;
          iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 5,0);
          if (iVar1 == 0) goto LAB_001001f7;
        }
        goto LAB_00100173;
      }
      CRYPTO_free((void *)param_1[6]);
      param_1[6] = 0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 6,0);
      if (iVar1 != 0) goto LAB_00100129;
    }
LAB_001001f7:
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void free_file_ctx_part_0(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  if (*(int *)((long)param_1 + 0x10) != 1) {
    OSSL_DECODER_CTX_free(*(undefined8 *)((long)param_1 + 0x20));
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    CRYPTO_free(*(void **)((long)param_1 + 0x28));
  }
  CRYPTO_free(param_1);
  return;
}



undefined8 file_close(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    BIO_free(*(BIO **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    free_file_ctx_part_0(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      OPENSSL_DIR_end(param_1 + 0x18);
    }
    free_file_ctx_part_0(param_1);
  }
  return 1;
}



undefined8 * new_file_ctx(undefined4 param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x48,"providers/implementations/storemgmt/file_store.c",0x80)
  ;
  if (puVar1 == (undefined8 *)0x0) {
LAB_001003fa:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (param_2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_2,"providers/implementations/storemgmt/file_store.c",0x81);
      puVar1[1] = pcVar2;
      if (pcVar2 == (char *)0x0) {
        free_file_ctx_part_0(puVar1);
        goto LAB_001003fa;
      }
    }
    *(undefined4 *)(puVar1 + 2) = param_1;
    *puVar1 = param_3;
  }
  return puVar1;
}



long file_open(undefined8 param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  BIO *a;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_f8;
  byte local_f0 [24];
  stat local_d8;
  long local_40;
  
  lVar6 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_set_mark();
  local_f0[0] = local_f0[0] & 0xfe;
  local_f8 = param_2;
  iVar2 = OPENSSL_strncasecmp(param_2,"file:",5);
  if (iVar2 == 0) {
    lVar3 = param_2 + 5;
    lVar6 = 2;
    iVar2 = OPENSSL_strncasecmp(lVar3,&_LC7,2);
    lVar4 = 1;
    if (iVar2 == 0) {
      lVar3 = param_2 + 7;
      iVar2 = OPENSSL_strncasecmp(lVar3,"localhost/",10);
      if (iVar2 == 0) {
        lVar3 = param_2 + 0x10;
      }
      else {
        iVar2 = OPENSSL_strncasecmp(lVar3,&_LC9,1);
        if (iVar2 != 0) {
          ERR_clear_last_mark();
          lVar6 = 0;
          ERR_new();
          ERR_set_debug("providers/implementations/storemgmt/file_store.c",0xe5,"file_open");
          ERR_set_error(0x39,0xdf,0);
          goto LAB_001004fa;
        }
      }
      lVar6 = 1;
      lVar4 = 0;
    }
    local_f0[lVar4 * 0x10] = local_f0[lVar4 * 0x10] | 1;
    *(long *)(local_f0 + lVar4 * 0x10 + -8) = lVar3;
  }
  lVar3 = 0;
  do {
    if (((local_f0[lVar3 * 0x10] & 1) != 0) &&
       (pcVar1 = *(char **)(local_f0 + lVar3 * 0x10 + -8), *pcVar1 != '/')) {
      ERR_clear_last_mark();
      lVar6 = 0;
      ERR_new();
      ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x102,"file_open");
      ERR_set_error(0x39,0xdb,"Given path=%s",pcVar1);
      goto LAB_001004fa;
    }
    pcVar1 = *(char **)(local_f0 + lVar3 * 0x10 + -8);
    iVar2 = stat(pcVar1,&local_d8);
    if (-1 < iVar2) {
      ERR_pop_to_mark();
      if ((local_d8.st_mode & 0xf000) == 0x4000) {
        lVar3 = new_file_ctx(1,param_2,param_1);
        if (lVar3 == 0) {
          ERR_new();
          lVar6 = 0;
          ERR_set_debug("providers/implementations/storemgmt/file_store.c",0xae,"file_open_dir");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          lVar4 = OPENSSL_DIR_read(lVar3 + 0x18,pcVar1);
          *(long *)(lVar3 + 0x30) = lVar4;
          piVar5 = __errno_location();
          iVar2 = *piVar5;
          *(int *)(lVar3 + 0x38) = iVar2;
          lVar6 = lVar3;
          if (lVar4 == 0) {
            if (iVar2 == 0) {
              *(undefined4 *)(lVar3 + 0x20) = 1;
            }
            else {
              ERR_new();
              ERR_set_debug("providers/implementations/storemgmt/file_store.c",0xb6,"file_open_dir")
              ;
              ERR_set_error(2,*(undefined4 *)(lVar3 + 0x38),"Calling OPENSSL_DIR_read(\"%s\")",
                            pcVar1);
              lVar6 = 0;
              file_close(lVar3);
            }
          }
        }
        goto LAB_001004fa;
      }
      a = BIO_new_file(pcVar1,"rb");
      if (a != (BIO *)0x0) {
        lVar6 = new_file_ctx(0,param_2,param_1);
        if (lVar6 != 0) {
          *(BIO **)(lVar6 + 0x18) = a;
          goto LAB_001004fa;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x9d,"file_open_stream");
        ERR_set_error(0x39,0x80039,0);
      }
      BIO_free_all(a);
      lVar6 = 0;
      goto LAB_001004fa;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x108,"file_open");
    lVar3 = lVar3 + 1;
    piVar5 = __errno_location();
    ERR_set_error(2,*piVar5,"calling stat(%s)",pcVar1);
  } while (lVar3 != lVar6);
  ERR_clear_last_mark();
  lVar6 = 0;
LAB_001004fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
file_load(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
         )

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t sVar6;
  ushort **ppuVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  undefined *local_e8;
  code *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_88;
  char *local_80;
  size_t local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 2) == 0) {
    uVar14 = ossl_prov_ctx_get0_libctx(*param_1);
    lVar10 = param_1[4];
    if (lVar10 != 0) {
LAB_00100c48:
      local_c8 = param_2;
      local_c0 = param_3;
      OSSL_DECODER_CTX_set_construct_data(lVar10,&local_c8);
      OSSL_DECODER_CTX_set_passphrase_cb(param_1[4],param_4,param_5);
      ERR_set_mark();
      uVar4 = OSSL_DECODER_from_bio(param_1[4],param_1[3]);
      lVar10 = BIO_ctrl((BIO *)param_1[3],2,0,(void *)0x0);
      if ((int)lVar10 != 0) {
        uVar15 = ERR_peek_last_error();
        uVar5 = (uint)uVar15;
        if (((0 < (int)uVar5) && ((ulong)(long)(int)uVar5 >> 0x17 == 0x3c)) &&
           ((uVar5 & 0x7fffff) == 0x8010c)) {
          ERR_pop_to_mark();
          goto LAB_00100b3a;
        }
      }
      ERR_clear_last_mark();
      goto LAB_00100b3a;
    }
    lVar10 = OSSL_DECODER_CTX_new();
    param_1[4] = lVar10;
    if (lVar10 == 0) {
      ERR_new(0);
      uVar14 = 0x1a9;
    }
    else {
      iVar3 = OSSL_DECODER_CTX_set_input_type(lVar10,param_1[5]);
      if (iVar3 == 0) {
        ERR_new();
        uVar14 = 0x1b0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8);
        if (iVar3 == 5) {
          pcVar18 = "Certificate";
          iVar3 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"Certificate");
          if (iVar3 == 0) {
            ERR_new();
            uVar14 = 0x1d8;
            goto LAB_00100cf3;
          }
        }
        else {
          pcVar18 = (char *)0x0;
          if (iVar3 < 6) {
            if (iVar3 == 3) {
              pcVar18 = "SubjectPublicKeyInfo";
              iVar3 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"SubjectPublicKeyInfo");
              if (iVar3 == 0) {
                ERR_new();
                uVar14 = 0x1bf;
                goto LAB_00100cf3;
              }
            }
            else if (iVar3 == 4) {
              pcVar18 = "EncryptedPrivateKeyInfo";
              iVar3 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"EncryptedPrivateKeyInfo");
              if (iVar3 == 0) {
                ERR_new();
                uVar14 = 0x1d0;
                goto LAB_00100cf3;
              }
            }
          }
          else if (iVar3 == 6) {
            pcVar18 = "CertificateList";
            iVar3 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"CertificateList");
            if (iVar3 == 0) {
              ERR_new();
              uVar14 = 0x1e0;
              goto LAB_00100cf3;
            }
          }
        }
        plVar17 = (long *)&ossl_any_to_obj_algorithm;
        lVar10 = _ossl_any_to_obj_algorithm;
        while (lVar10 != 0) {
          lVar10 = ossl_decoder_from_algorithm(0,plVar17,0);
          if (lVar10 == 0) {
            OSSL_DECODER_free();
            goto LAB_00100b38;
          }
          lVar12 = ossl_decoder_instance_new_forprov(lVar10,*param_1,pcVar18);
          OSSL_DECODER_free(lVar10);
          if (lVar12 == 0) goto LAB_00100b38;
          uVar13 = OSSL_DECODER_INSTANCE_get_input_type(lVar12);
          if (((param_1[5] == 0) || (iVar3 = OPENSSL_strcasecmp(uVar13), iVar3 == 0)) ||
             ((iVar3 = OPENSSL_strcasecmp(param_1[5],&_LC19), iVar3 == 0 &&
              (iVar3 = OPENSSL_strcasecmp(uVar13,&_LC20), iVar3 == 0)))) {
            iVar3 = ossl_decoder_ctx_add_decoder_inst(param_1[4],lVar12);
            if (iVar3 == 0) {
              ossl_decoder_instance_free(lVar12);
              ERR_new();
              uVar14 = 0x20e;
              goto LAB_00100cf3;
            }
          }
          else {
            ossl_decoder_instance_free();
          }
          plVar17 = plVar17 + 4;
          lVar10 = *plVar17;
        }
        iVar3 = OSSL_DECODER_CTX_add_extra(param_1[4],uVar14,param_1[6]);
        if (iVar3 == 0) {
          ERR_new();
          uVar14 = 0x215;
        }
        else {
          iVar3 = OSSL_DECODER_CTX_set_construct(param_1[4],file_load_construct);
          if ((iVar3 != 0) &&
             (iVar3 = OSSL_DECODER_CTX_set_cleanup(param_1[4],file_load_cleanup), iVar3 != 0)) {
            lVar10 = param_1[4];
            goto LAB_00100c48;
          }
          ERR_new();
          uVar14 = 0x221;
        }
      }
    }
LAB_00100cf3:
    ERR_set_debug("providers/implementations/storemgmt/file_store.c",uVar14,"file_setup_decoders");
    ERR_set_error(0x39,0x8003c,0);
  }
  else if (*(int *)(param_1 + 2) == 1) {
    local_b0 = 1;
    local_b8 = &_LC21;
    local_a8 = &object_type_6;
    local_a0 = __LC22;
    uStack_98 = _UNK_00101288;
    local_90 = &_LC23;
    local_88 = 4;
    local_80 = (char *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_78 = __LC24;
    uStack_70 = _UNK_00101298;
    local_50 = (undefined1  [16])0x0;
LAB_00100880:
    pcVar18 = (char *)param_1[6];
    if (pcVar18 != (char *)0x0) {
      do {
        if (*pcVar18 != '.') {
          sVar6 = strlen((char *)((long)param_1 + 0x24));
          if (*(char *)((long)param_1 + 0x24) == '\0') {
LAB_00100938:
            pcVar9 = (char *)param_1[1];
            sVar6 = strlen(pcVar9);
            if ((*pcVar9 == '\0') || (pcVar9[sVar6 - 1] != '/')) {
              sVar6 = sVar6 + 1;
              local_e8 = &_LC9;
            }
            else {
              local_e8 = &_LC18;
            }
            sVar8 = strlen(pcVar18);
            lVar10 = sVar6 + 1 + sVar8;
            pcVar9 = (char *)CRYPTO_zalloc(lVar10,"providers/implementations/storemgmt/file_store.c"
                                           ,0x25b);
            if (pcVar9 == (char *)0x0) goto LAB_00100b38;
            OPENSSL_strlcat(pcVar9,param_1[1],lVar10);
            OPENSSL_strlcat(pcVar9,local_e8,lVar10);
            OPENSSL_strlcat(pcVar9,pcVar18,lVar10);
            lVar10 = OPENSSL_DIR_read(param_1 + 3,param_1[1]);
            param_1[6] = lVar10;
            piVar11 = __errno_location();
            iVar3 = *piVar11;
            *(int *)(param_1 + 7) = iVar3;
            if ((lVar10 == 0) && (iVar3 == 0)) {
              *(undefined4 *)(param_1 + 4) = 1;
            }
            local_80 = pcVar9;
            local_78 = strlen(pcVar9);
            uVar4 = (*param_2)(&local_b8,param_3);
            CRYPTO_free(pcVar9);
            goto LAB_00100b3a;
          }
          if (((*(int *)(param_1 + 8) - 5U < 2) || (*(int *)(param_1 + 8) == 0)) &&
             ((iVar3 = OPENSSL_strncasecmp(pcVar18,(char *)((long)param_1 + 0x24),sVar6), iVar3 == 0
              && (pcVar18[sVar6] == '.')))) {
            pbVar16 = (byte *)(pcVar18 + sVar6 + 1);
            iVar3 = *(int *)(param_1 + 8);
            bVar2 = *pbVar16;
            if (bVar2 == 0x72) {
              if ((iVar3 == 0) || (iVar3 == 6)) {
                bVar2 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                goto LAB_00100900;
              }
            }
            else if (iVar3 != 6) {
LAB_00100900:
              ppuVar7 = __ctype_b_loc();
              if ((*(byte *)((long)*ppuVar7 + (ulong)bVar2 * 2 + 1) & 8) != 0) {
                do {
                  pbVar1 = pbVar16 + 1;
                  pbVar16 = pbVar16 + 1;
                } while ((*(byte *)((long)*ppuVar7 + (ulong)*pbVar1 * 2 + 1) & 8) != 0);
                if (*pbVar1 == 0) {
                  pcVar18 = (char *)param_1[6];
                  goto LAB_00100938;
                }
              }
            }
          }
        }
        lVar10 = OPENSSL_DIR_read(param_1 + 3,param_1[1]);
        param_1[6] = lVar10;
        piVar11 = __errno_location();
        iVar3 = *piVar11;
        *(int *)(param_1 + 7) = iVar3;
        if ((iVar3 != 0) || (lVar10 != 0)) goto LAB_00100880;
        pcVar18 = (char *)param_1[6];
        *(undefined4 *)(param_1 + 4) = 1;
        if (pcVar18 == (char *)0x0) break;
      } while( true );
    }
    if (*(int *)(param_1 + 4) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x2b7,"file_load_dir_entry");
      ERR_set_error(2,*(undefined4 *)(param_1 + 7),0);
    }
  }
LAB_00100b38:
  uVar4 = 0;
LAB_00100b3a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * file_attach(undefined8 param_1)

{
  BIO *a;
  undefined8 *puVar1;
  
  a = (BIO *)ossl_bio_new_from_core_bio();
  if (a != (BIO *)0x0) {
    puVar1 = (undefined8 *)
             CRYPTO_zalloc(0x48,"providers/implementations/storemgmt/file_store.c",0x80);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = param_1;
      puVar1[3] = a;
      return puVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/storemgmt/file_store.c",0x9d,"file_open_stream");
    ERR_set_error(0x39,0x80039,0);
    BIO_free(a);
  }
  return (undefined8 *)0x0;
}


