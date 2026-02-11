
void engine_unregister_all_pkey_asn1_meths(void)

{
  engine_table_cleanup(&pkey_asn1_meth_table);
  return;
}



void look_str_cb(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char *__s;
  int iVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4[1] == 0) {
    iVar4 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar4) break;
      lVar2 = OPENSSL_sk_value(param_2,iVar4);
      (**(code **)(lVar2 + 0x50))(lVar2,&local_48,0,param_1);
      if (local_48 != 0) {
        __s = *(char **)(local_48 + 0x10);
        sVar3 = strlen(__s);
        if ((int)param_4[3] == (int)sVar3) {
          iVar1 = OPENSSL_strncasecmp(__s,param_4[2]);
          if (iVar1 == 0) {
            *param_4 = lVar2;
            param_4[1] = local_48;
            break;
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ENGINE_unregister_pkey_asn1_meths(ENGINE *e)

{
  engine_table_unregister(&pkey_asn1_meth_table,e);
  return;
}



int ENGINE_register_pkey_asn1_meths(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x50))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&pkey_asn1_meth_table,0x100000,e,local_18,iVar1,0);
      goto LAB_00100155;
    }
  }
  iVar1 = 1;
LAB_00100155:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_pkey_asn1_meths(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_pkey_asn1_meths(e);
  }
  return;
}



int ENGINE_set_default_pkey_asn1_meths(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x50))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&pkey_asn1_meth_table,0x100000,e,local_18,iVar1,1);
      goto LAB_00100215;
    }
  }
  iVar1 = 1;
LAB_00100215:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ENGINE * ENGINE_get_pkey_asn1_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)
           ossl_engine_table_select(&pkey_asn1_meth_table,nid,"crypto/engine/tb_asnmth.c",0x50);
  return pEVar1;
}



ENGINE_PKEY_ASN1_METHS_PTR ENGINE_get_pkey_asn1_meths(ENGINE *e)

{
  return *(ENGINE_PKEY_ASN1_METHS_PTR *)(e + 0x50);
}



EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_PKEY_ASN1_METHS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_PKEY_ASN1_METHOD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_pkey_asn1_meths(e);
  if ((pEVar2 == (ENGINE_PKEY_ASN1_METHS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/tb_asnmth.c",0x5c,"ENGINE_get_pkey_asn1_meth");
    ERR_set_error(0x26,0x65,0);
    local_28 = (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



int ENGINE_set_pkey_asn1_meths(ENGINE *e,ENGINE_PKEY_ASN1_METHS_PTR f)

{
  *(ENGINE_PKEY_ASN1_METHS_PTR *)(e + 0x50) = f;
  return 1;
}



void engine_pkey_asn1_meths_free(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  EVP_PKEY_ASN1_METHOD *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_38,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        while( true ) {
          iVar2 = (**(code **)(param_1 + 0x50))
                            (param_1,&local_40,0,*(undefined4 *)(local_38 + lVar3));
          if (iVar2 == 0) break;
          lVar3 = lVar3 + 4;
          EVP_PKEY_asn1_free(local_40);
          if ((long)iVar1 * 4 - lVar3 == 0) goto LAB_001003c3;
        }
        lVar3 = lVar3 + 4;
      } while ((long)iVar1 * 4 - lVar3 != 0);
    }
  }
LAB_001003c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth_str(ENGINE *e,char *str,int len)

{
  code *pcVar1;
  char *__s;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_50;
  EVP_PKEY_ASN1_METHOD *local_48;
  long local_40;
  
  pcVar1 = *(code **)(e + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar1 != (code *)0x0) {
    if (len == -1) {
      sVar4 = strlen(str);
      len = (int)sVar4;
    }
    iVar2 = (*pcVar1)(e,0,&local_50,0);
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        (**(code **)(e + 0x50))(e,&local_48,0,*(undefined4 *)(local_50 + lVar5));
        if (local_48 != (EVP_PKEY_ASN1_METHOD *)0x0) {
          __s = *(char **)(local_48 + 0x10);
          sVar4 = strlen(__s);
          if ((len == (int)sVar4) && (iVar3 = OPENSSL_strncasecmp(__s,str,(long)len), iVar3 == 0))
          goto LAB_001004ca;
        }
        lVar5 = lVar5 + 4;
      } while ((long)iVar2 * 4 - lVar5 != 0);
    }
  }
  local_48 = (EVP_PKEY_ASN1_METHOD *)0x0;
LAB_001004ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY_ASN1_METHOD * ENGINE_pkey_asn1_find_str(ENGINE **pe,char *str,int len)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_38 = str;
  local_30 = len;
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,&do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (_do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/tb_asnmth.c",200,"ENGINE_pkey_asn1_find_str");
    ERR_set_error(0x26,0x8000f,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_read_lock(_global_engine_lock);
    if (iVar1 != 0) {
      engine_table_doall(pkey_asn1_meth_table,look_str_cb,local_48);
      if ((ENGINE *)local_48._0_8_ != (ENGINE *)0x0) {
        LOCK();
        *(int *)(local_48._0_8_ + 0x9c) = *(int *)(local_48._0_8_ + 0x9c) + 1;
        UNLOCK();
      }
      *pe = (ENGINE *)local_48._0_8_;
      CRYPTO_THREAD_unlock(_global_engine_lock);
      pEVar2 = (EVP_PKEY_ASN1_METHOD *)local_48._8_8_;
      goto LAB_00100596;
    }
  }
  pEVar2 = (EVP_PKEY_ASN1_METHOD *)0x0;
LAB_00100596:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


