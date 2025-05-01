
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ENGINE * setup_engine_methods(char *param_1,uint param_2,int param_3)

{
  int iVar1;
  ENGINE *e;
  void *p;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"auto");
    if (iVar1 == 0) {
      BIO_printf(_bio_err,"Enabling auto ENGINE support\n");
      ENGINE_register_all_complete();
      return (ENGINE *)0x0;
    }
    e = ENGINE_by_id(param_1);
    if (e == (ENGINE *)0x0) {
      e = ENGINE_by_id("dynamic");
      if (e == (ENGINE *)0x0) {
LAB_0010017f:
        BIO_printf(_bio_err,"Invalid engine \"%s\"\n",param_1);
        ERR_print_errors(_bio_err);
        return (ENGINE *)0x0;
      }
      iVar1 = ENGINE_ctrl_cmd_string(e,"SO_PATH",param_1,0);
      if ((iVar1 == 0) || (iVar1 = ENGINE_ctrl_cmd_string(e,"LOAD",(char *)0x0,0), iVar1 == 0)) {
        ENGINE_free(e);
        goto LAB_0010017f;
      }
    }
    if (param_3 != 0) {
      ENGINE_ctrl(e,1,0,_bio_err,(f *)0x0);
    }
    p = (void *)get_ui_method();
    iVar1 = ENGINE_ctrl_cmd(e,"SET_USER_INTERFACE",0,p,(f *)0x0,1);
    if ((iVar1 != 0) && (iVar1 = ENGINE_set_default(e,param_2), iVar1 != 0)) {
      pcVar2 = ENGINE_get_id(e);
      BIO_printf(_bio_err,"Engine \"%s\" set.\n",pcVar2);
      return e;
    }
    pcVar2 = ENGINE_get_id(e);
    BIO_printf(_bio_err,"Cannot use engine \"%s\"\n",pcVar2);
    ERR_print_errors(_bio_err);
    ENGINE_free(e);
  }
  return (ENGINE *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int release_engine(ENGINE *e)

{
  int iVar1;
  
  iVar1 = ENGINE_free(e);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_engine(ENGINE *e)

{
  int iVar1;
  
  iVar1 = ENGINE_init(e);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int finish_engine(ENGINE *e)

{
  int iVar1;
  
  iVar1 = ENGINE_finish(e);
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * make_engine_uri(ENGINE *param_1,char *param_2)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  
  if (param_1 == (ENGINE *)0x0) {
    BIO_printf(_bio_err,"No engine specified for loading %s\n");
  }
  else {
    if (param_2 != (char *)0x0) {
      __s = ENGINE_get_id(param_1);
      sVar2 = strlen(__s);
      sVar3 = strlen(param_2);
      lVar1 = sVar2 + 0x15 + sVar3;
      pvVar4 = CRYPTO_malloc((int)lVar1,"apps/lib/engine.c",0x7c);
      if (pvVar4 != (void *)0x0) {
        OPENSSL_strlcpy(pvVar4,"org.openssl.engine:",lVar1);
        OPENSSL_strlcat(pvVar4,__s,lVar1);
        OPENSSL_strlcat(pvVar4,&_LC13,lVar1);
        OPENSSL_strlcat(pvVar4,param_2,lVar1);
      }
      return pvVar4;
    }
    BIO_printf(_bio_err,"No engine key id specified for loading %s\n");
  }
  return (void *)0x0;
}



int get_legacy_pkey_id(undefined8 param_1,char *param_2,ENGINE *param_3)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  long in_FS_OFFSET;
  int local_2c;
  ENGINE *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  local_28 = (ENGINE *)0x0;
  ERR_set_mark();
  ameth = EVP_PKEY_asn1_find_str(&local_28,param_2,-1);
  ENGINE_finish(local_28);
  if ((ameth == (EVP_PKEY_ASN1_METHOD *)0x0) && (param_3 != (ENGINE *)0x0)) {
    ameth = ENGINE_get_pkey_asn1_meth_str(param_3,param_2,-1);
    ERR_pop_to_mark();
  }
  else {
    if (local_28 == (ENGINE *)0x0) {
      ERR_pop_to_mark();
      iVar1 = 0;
      goto LAB_0010036d;
    }
    ERR_pop_to_mark();
  }
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar1 = 0;
  }
  else {
    EVP_PKEY_asn1_get0_info(&local_2c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,ameth);
    iVar1 = local_2c;
  }
LAB_0010036d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



EVP_MD * get_digest_from_engine(char *param_1)

{
  int nid;
  ENGINE *e;
  EVP_MD *pEVar1;
  
  nid = OBJ_sn2nid(param_1);
  e = ENGINE_get_digest_engine(nid);
  if (e != (ENGINE *)0x0) {
    ENGINE_finish(e);
    pEVar1 = EVP_get_digestbyname(param_1);
    return pEVar1;
  }
  return (EVP_MD *)0x0;
}



EVP_CIPHER * get_cipher_from_engine(char *param_1)

{
  int nid;
  ENGINE *e;
  EVP_CIPHER *pEVar1;
  
  nid = OBJ_sn2nid(param_1);
  e = ENGINE_get_cipher_engine(nid);
  if (e != (ENGINE *)0x0) {
    ENGINE_finish(e);
    pEVar1 = EVP_get_cipherbyname(param_1);
    return pEVar1;
  }
  return (EVP_CIPHER *)0x0;
}


