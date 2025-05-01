
void CTLOG_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x10));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x38));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



int ctlog_store_load_log(long param_1,int param_2,long *param_3)

{
  CONF *conf;
  undefined8 *puVar1;
  int iVar2;
  char *group;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 != 0) {
    group = (char *)CRYPTO_strndup(param_1,(long)param_2,"crypto/ct/ct_log.c",0xbe);
    if (group == (char *)0x0) {
LAB_0010021f:
      iVar2 = -1;
      goto LAB_00100156;
    }
    conf = (CONF *)param_3[1];
    puVar1 = (undefined8 *)*param_3;
    pcVar3 = NCONF_get_string(conf,group,"description");
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_log.c",0x93,"ctlog_new_from_conf");
      uVar5 = 0x6f;
LAB_001001a0:
      ERR_set_error(0x32,uVar5,0);
      CRYPTO_free(group);
    }
    else {
      pcVar4 = NCONF_get_string(conf,group,"key");
      if (pcVar4 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ct/ct_log.c",0x99,"ctlog_new_from_conf");
        uVar5 = 0x70;
        goto LAB_001001a0;
      }
      iVar2 = CTLOG_new_from_base64_ex(&local_48,pcVar4,pcVar3,*puVar1,puVar1[1]);
      CRYPTO_free(group);
      if (iVar2 < 0) goto LAB_00100156;
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(*param_3 + 0x10),local_48);
        if (iVar2 != 0) goto LAB_00100150;
        CTLOG_free(local_48);
        ERR_new();
        ERR_set_debug("crypto/ct/ct_log.c",0xd1,"ctlog_store_load_log");
        ERR_set_error(0x32,0x8000f,0);
        goto LAB_0010021f;
      }
    }
    param_3[2] = param_3[2] + 1;
  }
LAB_00100150:
  iVar2 = 1;
LAB_00100156:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CTLOG_STORE_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x10),0x100000);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * CTLOG_STORE_new_ex(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/ct/ct_log.c",0x66);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  if (param_2 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(param_2,"crypto/ct/ct_log.c",0x6d);
    puVar1[1] = pcVar2;
    if (pcVar2 == (char *)0x0) goto LAB_00100334;
  }
  lVar3 = OPENSSL_sk_new_null();
  puVar1[2] = lVar3;
  if (lVar3 != 0) {
    return puVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ct/ct_log.c",0x74,"CTLOG_STORE_new_ex");
  ERR_set_error(0x32,0x8000f,0);
LAB_00100334:
  CTLOG_STORE_free(puVar1);
  return (undefined8 *)0x0;
}



void CTLOG_STORE_new(void)

{
  CTLOG_STORE_new_ex(0,0);
  return;
}



undefined8 CTLOG_STORE_load_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *arg;
  CONF *conf;
  char *list;
  undefined8 uVar2;
  undefined8 uVar3;
  
  arg = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/ct/ct_log.c",0x3f);
  if (arg == (undefined8 *)0x0) {
    return 0;
  }
  *arg = param_1;
  uVar2 = 0;
  conf = NCONF_new((CONF_METHOD *)0x0);
  arg[1] = conf;
  if (conf != (CONF *)0x0) {
    iVar1 = NCONF_load(conf,param_2,(long *)0x0);
    if (iVar1 < 1) {
      ERR_new();
      uVar3 = 0xe5;
    }
    else {
      list = NCONF_get_string((CONF *)arg[1],(char *)0x0,"enabled_logs");
      if (list != (char *)0x0) {
        iVar1 = CONF_parse_list(list,0x2c,1,ctlog_store_load_log,arg);
        if ((iVar1 == 0) || (arg[2] != 0)) {
          ERR_new();
          uVar2 = 0;
          ERR_set_debug("crypto/ct/ct_log.c",0xf1,"CTLOG_STORE_load_file");
          ERR_set_error(0x32,0x6d,0);
          conf = (CONF *)arg[1];
        }
        else {
          conf = (CONF *)arg[1];
          uVar2 = 1;
        }
        goto LAB_001003fa;
      }
      ERR_new();
      uVar3 = 0xeb;
    }
    ERR_set_debug("crypto/ct/ct_log.c",uVar3,"CTLOG_STORE_load_file");
    ERR_set_error(0x32,0x6d,0);
    conf = (CONF *)arg[1];
  }
LAB_001003fa:
  NCONF_free(conf);
  CRYPTO_free(arg);
  return uVar2;
}



void CTLOG_STORE_load_default_file(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)ossl_safe_getenv("CTLOG_FILE");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "/usr/local/ssl/ct_log_list.cnf";
  }
  CTLOG_STORE_load_file(param_1,pcVar1);
  return;
}



undefined8 * CTLOG_new_ex(EVP_PKEY *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  EVP_MD *type;
  long in_FS_OFFSET;
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto/ct/ct_log.c",0x104);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
    if (param_4 == (char *)0x0) {
LAB_00100558:
      pcVar3 = CRYPTO_strdup(param_2,"crypto/ct/ct_log.c",0x110);
      puVar2[2] = pcVar3;
      if (pcVar3 != (char *)0x0) {
        local_48 = (uchar *)0x0;
        iVar1 = i2d_PUBKEY(param_1,&local_48);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("crypto/ct/ct_log.c",0x53,"ct_v1_log_id_from_pkey");
          ERR_set_error(0x32,0x71,0);
        }
        else {
          type = (EVP_MD *)EVP_MD_fetch(*puVar2,"SHA2-256",puVar2[1]);
          if (type != (EVP_MD *)0x0) {
            iVar1 = EVP_Digest(local_48,(long)iVar1,(uchar *)(puVar2 + 3),&local_4c,type,
                               (ENGINE *)0x0);
            EVP_MD_free(type);
            CRYPTO_free(local_48);
            if (iVar1 == 1) {
              puVar2[7] = param_1;
              goto LAB_001005f5;
            }
            goto LAB_00100665;
          }
          ERR_new();
          ERR_set_debug("crypto/ct/ct_log.c",0x58,"ct_v1_log_id_from_pkey");
          ERR_set_error(0x32,0x80006,0);
        }
        EVP_MD_free(0);
        CRYPTO_free(local_48);
      }
    }
    else {
      pcVar3 = CRYPTO_strdup(param_4,"crypto/ct/ct_log.c",0x10b);
      puVar2[1] = pcVar3;
      if (pcVar3 != (char *)0x0) goto LAB_00100558;
    }
LAB_00100665:
    CTLOG_free(puVar2);
  }
  puVar2 = (undefined8 *)0x0;
LAB_001005f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CTLOG_new(undefined8 param_1,undefined8 param_2)

{
  CTLOG_new_ex(param_1,param_2,0,0);
  return;
}



undefined8 CTLOG_get0_name(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void CTLOG_get0_log_id(long param_1,long *param_2,undefined8 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 0x20;
  return;
}



undefined8 CTLOG_get0_public_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



long CTLOG_STORE_get0_log_by_id(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar3);
    iVar1 = memcmp((void *)(lVar2 + 0x18),param_2,param_3);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return lVar2;
}


