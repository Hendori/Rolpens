
undefined8 fake_rsa_keymgmt_has(void)

{
  return 1;
}



undefined * fake_rsa_keymgmt_query(void)

{
  return &_LC9;
}



undefined8 fake_rsa_keymgmt_import(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}



undefined1 * fake_rsa_keymgmt_imptypes(void)

{
  return fake_rsa_import_key_types;
}



undefined1 * fake_rsa_keymgmt_exptypes(void)

{
  return fake_rsa_export_key_types;
}



long fake_rsa_keymgmt_load(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_2 == 8) && (lVar1 = *param_1, *(int *)(lVar1 + 4) == 1)) {
    *param_1 = 0;
    return lVar1;
  }
  return 0;
}



undefined1 * fake_rsa_st_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined8 fake_rsa_st_set_ctx_params(void)

{
  return 1;
}



undefined8 fake_rsa_st_delete(void)

{
  key_deleted = 1;
  return 1;
}



bool fake_rsa_st_eof(char *param_1)

{
  return *param_1 != '\0';
}



undefined1 * fake_rsa_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fake_rsa_sig_algs;
  if (((param_2 != 0xc) && (puVar1 = fake_rsa_store_algs, param_2 != 0x16)) &&
     (puVar1 = fake_rsa_keymgmt_algs, param_2 != 10)) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fake_rsa_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_LIB_CTX_new();
  *param_4 = uVar1;
  uVar1 = test_ptr("test/fake_rsaprov.c",0x2de,"*provctx = OSSL_LIB_CTX_new()",uVar1);
  if ((int)uVar1 != 0) {
    *param_3 = fake_rsa_method;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 fake_rsa_st_close(void *param_1)

{
  CRYPTO_free(param_1);
  return 1;
}



void fake_rsa_keymgmt_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fake_rsa_gen_cleanup(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fake_rsa_sig_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 fake_rsa_sig_sign_init(undefined1 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = test_ptr("test/fake_rsaprov.c",0x140,"sigctx",param_1);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/fake_rsaprov.c",0x144,"keydata",param_2);
    if (iVar1 != 0) {
      iVar1 = test_int_gt("test/fake_rsaprov.c",0x144,"keydata->status",&_LC14,
                          *(undefined4 *)(param_2 + 4),0);
      if (iVar1 != 0) {
        *param_1 = 1;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 fake_rsa_keymgmt_new(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CRYPTO_zalloc(8,"test/fake_rsaprov.c",0x31);
  iVar1 = test_ptr("test/fake_rsaprov.c",0x31,
                   "key = OPENSSL_zalloc(sizeof(struct fake_rsa_keydata))",uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



byte * fake_rsa_sig_dupctx(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if ((*param_1 & 0xa0) == 0) {
    pbVar2 = (byte *)CRYPTO_zalloc(1,"test/fake_rsaprov.c",0x171);
    iVar1 = test_ptr("test/fake_rsaprov.c",0x171,"newctx = OPENSSL_zalloc(1)",pbVar2);
    if (iVar1 != 0) {
      *pbVar2 = *param_1;
      return pbVar2;
    }
  }
  return (byte *)0x0;
}



undefined8 fake_rsa_sig_newctx(void)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_zalloc(1,"test/fake_rsaprov.c",0x12d);
  test_ptr("test/fake_rsaprov.c",0x12f,"sigctx",uVar1);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fake_rsa_st_open_ex(undefined8 param_1,char *param_2,undefined8 param_3,code *param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = strncmp(param_2,"fake_rsa:",9);
  if (iVar1 == 0) {
    iVar1 = strncmp(param_2,"fake_rsa:openpwtest",0x13);
    if (iVar1 == 0) {
      local_28 = 0;
      local_38 = (undefined1  [16])0x0;
      local_88 = &_LC18;
      local_70 = __LC19;
      uStack_68 = _UNK_00101dd8;
      local_90 = 0;
      local_80 = 4;
      local_78 = "Fake Prompt Info";
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      if (param_4 != (code *)0x0) {
        iVar1 = (*param_4)(local_38,0x14,&local_90,&local_88,param_5);
        if (iVar1 != 0) {
          iVar1 = strncmp("Passphrase Testing",local_38,7);
          if (iVar1 != 0) {
            uVar2 = 0;
            test_info("test/fake_rsaprov.c",0x23c,"fake_rsa_open_ex failed passphrase check");
            goto LAB_0010050d;
          }
          goto LAB_001004c0;
        }
        test_info("test/fake_rsaprov.c",0x238,"fake_rsa_open_ex failed passphrase callback");
      }
    }
    else {
LAB_001004c0:
      uVar2 = CRYPTO_zalloc(1,"test/fake_rsaprov.c",0x241);
      iVar1 = test_ptr("test/fake_rsaprov.c",0x242,"storectx",uVar2);
      if (iVar1 != 0) {
        test_info("test/fake_rsaprov.c",0x245,"fake_rsa_open_ex called");
        goto LAB_0010050d;
      }
    }
  }
  uVar2 = 0;
LAB_0010050d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fake_rsa_st_open(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fake_rsa_st_open_ex(param_1,param_2,0,0,0);
  test_info("test/fake_rsaprov.c",0x250,"fake_rsa_open called");
  return uVar1;
}



undefined1 * fake_rsa_gen_init(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)CRYPTO_malloc(1,"test/fake_rsaprov.c",0xf0);
  iVar1 = test_ptr("test/fake_rsaprov.c",0xf0,"gctx = OPENSSL_malloc(1)",puVar2);
  if (iVar1 != 0) {
    *puVar2 = 1;
    return puVar2;
  }
  return (undefined1 *)0x0;
}



undefined8 fake_rsa_dgstsgnvfy_init(byte *param_1,byte param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_ptr("test/fake_rsaprov.c",0x17f,"sigctx",param_1);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/fake_rsaprov.c",0x183,"keydata",param_3);
    if (iVar1 != 0) {
      iVar1 = test_int_gt("test/fake_rsaprov.c",0x183,"keydata->status",&_LC14,
                          *(undefined4 *)(param_3 + 4),0);
      if (iVar1 != 0) {
        *param_1 = param_2;
        if (param_4 != 0) {
          lVar2 = OSSL_PARAM_locate_const(param_4,"NO_DUP");
          if (lVar2 != 0) {
            iVar1 = OSSL_PARAM_get_int(lVar2,local_34);
            if (iVar1 != 0) {
              *param_1 = *param_1 | 0xa0;
            }
          }
        }
        uVar3 = 1;
        goto LAB_0010066c;
      }
    }
  }
  uVar3 = 0;
LAB_0010066c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void fake_rsa_dgstvfy_init(undefined8 param_1)

{
  fake_rsa_dgstsgnvfy_init(param_1,2);
  return;
}



void fake_rsa_dgstsgn_init(undefined8 param_1)

{
  fake_rsa_dgstsgnvfy_init(param_1,1);
  return;
}



undefined8 fake_rsa_dgstsgnvfy_final(byte *param_1,void *param_2,size_t *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = test_ptr("test/fake_rsaprov.c",0x1b9,"sigctx",param_1);
  if (((iVar2 == 0) || (bVar1 = *param_1, bVar1 == 0)) || ((bVar1 & 8) != 0)) {
LAB_001007b0:
    uVar3 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if (param_3 != (size_t *)0x0) goto LAB_001007c9;
      }
      else if (param_3 != (size_t *)0x0) goto LAB_001007b0;
    }
    else {
      if ((param_3 == (size_t *)0x0) || ((bVar1 & 2) != 0)) goto LAB_001007b0;
LAB_001007c9:
      *param_3 = 0x100;
      if (param_2 != (void *)0x0) {
        iVar2 = test_int_ge("test/fake_rsaprov.c",0x1ca,"sigsize","*siglen",param_4,0x100);
        if (iVar2 == 0) goto LAB_001007b0;
        memset(param_2,0x61,*param_3);
      }
      bVar1 = *param_1;
    }
    if ((bVar1 & 0xa0) != 0) {
      *param_1 = bVar1 | 8;
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 fake_rsa_sig_sign(undefined1 *param_1,void *param_2,size_t *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = test_ptr("test/fake_rsaprov.c",0x153,"sigctx",param_1);
  if ((iVar1 != 0) &&
     (iVar1 = test_int_eq("test/fake_rsaprov.c",0x153,"*sigctx",&_LC32,*param_1,1), iVar1 != 0)) {
    *param_3 = 0x100;
    if (param_2 != (void *)0x0) {
      iVar1 = test_int_ge("test/fake_rsaprov.c",0x159,"sigsize","*siglen",param_4,0x100);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = 2;
      memset(param_2,0x61,*param_3);
    }
    return 1;
  }
  return 0;
}



undefined8 fake_rsa_dgstsgnvfy_update(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = test_ptr("test/fake_rsaprov.c",0x1a9,"sigctx",param_1);
  if ((int)uVar2 != 0) {
    bVar1 = *param_1;
    uVar2 = 0;
    if ((bVar1 != 0) && ((bVar1 & 8) == 0)) {
      uVar2 = 1;
      *param_1 = bVar1 | 4;
    }
  }
  return uVar2;
}



undefined8 fake_rsa_dgstsgn(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = test_ptr("test/fake_rsaprov.c",0x1a9,"sigctx",param_1);
  if (((iVar2 != 0) && (bVar1 = *param_1, bVar1 != 0)) && ((bVar1 & 8) == 0)) {
    *param_1 = bVar1 | 4;
    uVar3 = fake_rsa_dgstsgnvfy_final(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 0;
}



undefined8 fake_rsa_dgstvfy(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = test_ptr("test/fake_rsaprov.c",0x1a9,"sigctx",param_1);
  if (((iVar2 != 0) && (bVar1 = *param_1, bVar1 != 0)) && ((bVar1 & 8) == 0)) {
    *param_1 = bVar1 | 4;
    uVar3 = fake_rsa_dgstsgnvfy_final(param_1,param_2,0,param_3);
    return uVar3;
  }
  return 0;
}



long fake_rsa_gen(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = test_ptr("test/fake_rsaprov.c",0xfe,&_LC34,param_1);
  if (iVar1 != 0) {
    iVar1 = test_mem_eq("test/fake_rsaprov.c",0xff,&_LC34,"inited",param_1,1,&inited_0);
    if (iVar1 != 0) {
      lVar2 = CRYPTO_zalloc(8,"test/fake_rsaprov.c",0x31,1);
      iVar1 = test_ptr("test/fake_rsaprov.c",0x31,
                       "key = OPENSSL_zalloc(sizeof(struct fake_rsa_keydata))",lVar2);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      iVar1 = test_ptr("test/fake_rsaprov.c",0x102,"keydata = fake_rsa_keymgmt_new(NULL)",lVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(lVar2 + 4) = 2;
        return lVar2;
      }
    }
  }
  return 0;
}



undefined8 fake_rsa_dgstvfy_final(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = test_ptr("test/fake_rsaprov.c",0x1b9,"sigctx",param_1);
  if ((int)uVar2 != 0) {
    bVar1 = *param_1;
    uVar2 = 0;
    if ((bVar1 != 0) && ((bVar1 & 9) == 0)) {
      if ((bVar1 & 0xa0) != 0) {
        *param_1 = bVar1 | 8;
      }
      return 1;
    }
  }
  return uVar2;
}



int fake_rsa_st_load(char *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e4;
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_e4 = 2;
  local_e0 = (void *)0x0;
  if (*param_1 == '\0') {
    if (key_deleted != 1) {
      pvVar2 = (void *)CRYPTO_zalloc(8,"test/fake_rsaprov.c",0x31);
      iVar1 = test_ptr("test/fake_rsaprov.c",0x31,
                       "key = OPENSSL_zalloc(sizeof(struct fake_rsa_keydata))",pvVar2);
      if (iVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      local_e0 = pvVar2;
      iVar1 = test_ptr("test/fake_rsaprov.c",0x275,"key = fake_rsa_keymgmt_new(NULL)",pvVar2);
      if (iVar1 != 0) {
        *(undefined4 *)((long)local_e0 + 4) = 1;
        iVar1 = test_int_gt("test/fake_rsaprov.c",0x277,"fake_rsa_keymgmt_import(key, 0, NULL)",
                            &_LC14,1,0);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_int(&local_118,&_LC40,&local_e4);
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          local_c8 = local_108;
          uStack_c0 = uStack_100;
          local_b8 = local_f8;
          OSSL_PARAM_construct_utf8_string(&local_118,"data-type",&_LC9,0);
          local_b0 = local_118;
          uStack_a8 = uStack_110;
          local_a0 = local_108;
          uStack_98 = uStack_100;
          local_90 = local_f8;
          OSSL_PARAM_construct_octet_string(&local_118,"reference",&local_e0,8);
          local_68 = local_f8;
          local_88 = local_118;
          uStack_80 = uStack_110;
          local_78 = local_108;
          uStack_70 = uStack_100;
          OSSL_PARAM_construct_end(&local_118);
          local_40 = local_f8;
          local_60 = local_118;
          uStack_58 = uStack_110;
          local_50 = local_108;
          uStack_48 = uStack_100;
          iVar1 = (*param_2)(&local_d8,param_3);
          *param_1 = '\x01';
          test_info("test/fake_rsaprov.c",0x290,"fake_rsa_load called - rv: %d",iVar1);
          if (iVar1 != 0) goto LAB_00100bff;
          goto joined_r0x00100c73;
        }
      }
      goto LAB_00100bd6;
    }
    *param_1 = '\x01';
    test_info("test/fake_rsaprov.c",0x290,"fake_rsa_load called - rv: %d",0);
  }
  else {
    pcVar3 = "fake_rsa_load() called in error state";
    uVar4 = 0x288;
    if (*param_1 != '\x02') {
      pcVar3 = "fake_rsa_load() called in eof state";
      uVar4 = 0x28c;
    }
    test_info("test/fake_rsaprov.c",uVar4,pcVar3);
LAB_00100bd6:
    test_info("test/fake_rsaprov.c",0x290,"fake_rsa_load called - rv: %d",0);
  }
joined_r0x00100c73:
  if (key_deleted == 0) {
    CRYPTO_free(local_e0);
    *param_1 = '\x02';
  }
  iVar1 = 0;
LAB_00100bff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void fake_rsa_restore_store_state(void)

{
  key_deleted = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fake_rsa_key_params(int param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long in_FS_OFFSET;
  undefined *local_178;
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined4 local_148;
  undefined2 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_170 = 2;
    local_178 = &_LC0;
    local_160 = __LC46;
    uStack_158 = _UNK_00101de8;
    local_168 = fake_rsa_n;
    local_150 = &_LC1;
    local_138 = __LC47;
    uStack_130 = _UNK_00101df8;
    local_148 = 2;
    local_140 = &fake_rsa_e;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = (undefined1  [16])0x0;
    OSSL_PARAM_dup(&local_178);
  }
  else {
    ppuVar2 = &PTR__LC0_00101080;
    ppuVar3 = &local_178;
    for (lVar1 = 0x2d; lVar1 != 0; lVar1 = lVar1 + -1) {
      *ppuVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
    }
    OSSL_PARAM_dup(&local_178);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 fake_rsa_keymgmt_export(undefined8 param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) == 0) {
    uVar3 = fake_rsa_key_params(0);
    iVar1 = test_ptr("test/fake_rsaprov.c",0xb0,"params = fake_rsa_key_params(0)",uVar3);
    if (iVar1 != 0) {
      uVar2 = (*param_3)(uVar3,param_4);
      OSSL_PARAM_free(uVar3);
      return uVar2;
    }
  }
  return 0;
}



undefined8 fake_rsa_start(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OSSL_PROVIDER_add_builtin(param_1,"fake-rsa",fake_rsa_provider_init);
  iVar1 = test_true("test/fake_rsaprov.c",0x2e8,
                    "OSSL_PROVIDER_add_builtin(libctx, \"fake-rsa\", fake_rsa_provider_init)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = OSSL_PROVIDER_try_load(param_1,"fake-rsa",1);
    iVar1 = test_ptr("test/fake_rsaprov.c",0x2ea,
                     "p = OSSL_PROVIDER_try_load(libctx, \"fake-rsa\", 1)",uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  return 0;
}



void fake_rsa_finish(void)

{
  OSSL_PROVIDER_unload();
  return;
}


