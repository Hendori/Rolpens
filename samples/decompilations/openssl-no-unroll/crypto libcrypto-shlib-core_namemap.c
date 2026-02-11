
void names_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,name_string_free);
  return;
}



void name_string_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



bool ossl_namemap_empty(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0x20) == 0;
  }
  return bVar1;
}



bool ossl_namemap_doall_names(long param_1,int param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return false;
  }
  if (0 < param_2) {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),param_2 + -1);
      if (lVar3 == 0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      }
      else {
        lVar3 = OPENSSL_sk_dup(lVar3);
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
        if (lVar3 != 0) {
          iVar1 = 0;
          while( true ) {
            iVar2 = OPENSSL_sk_num(lVar3);
            if (iVar2 <= iVar1) break;
            uVar4 = OPENSSL_sk_value(lVar3,iVar1);
            (*param_3)(uVar4,param_4);
            iVar1 = iVar1 + 1;
          }
          OPENSSL_sk_free(lVar3);
          return 0 < iVar1;
        }
      }
    }
  }
  return false;
}



long ossl_namemap_num2name(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != 0) && (0 < param_2)) {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),param_2 + -1);
      if (lVar2 != 0) {
        lVar2 = OPENSSL_sk_value(lVar2,param_3);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      return lVar2;
    }
  }
  return 0;
}



void * ossl_namemap_stored(undefined8 param_1)

{
  int iVar1;
  void *arg;
  EVP_PKEY_ASN1_METHOD *ameth;
  int idx;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  uint local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  arg = (void *)ossl_lib_ctx_get_data(param_1,4);
  if (arg != (void *)0x0) {
    iVar1 = ossl_namemap_empty(arg);
    if (-1 < iVar1) {
      if (iVar1 == 1) {
        OPENSSL_init_crypto(0xc,0);
        OBJ_NAME_do_all(2,get_legacy_cipher_names,arg);
        OBJ_NAME_do_all(1,get_legacy_md_names,arg);
        iVar1 = EVP_PKEY_asn1_get_count();
        if (0 < iVar1) {
          idx = 0;
          do {
            ameth = EVP_PKEY_asn1_get0(idx);
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = (char *)0x0;
            EVP_PKEY_asn1_get0_info
                      (&local_54,&local_50,(int *)&local_4c,(char **)0x0,&local_48,ameth);
            if (local_54 != 0) {
              if ((local_4c & 1) == 0) {
                if (local_54 == 0x398) {
                  get_legacy_evp_names(0,0x398,&_LC1,arg);
                }
                get_legacy_evp_names(0,local_54,local_48);
              }
              else if (local_54 == 0x494) {
                get_legacy_evp_names(0,0x494,local_48);
              }
              else {
                get_legacy_evp_names(local_50,local_54,local_48);
              }
            }
            idx = idx + 1;
          } while (iVar1 != idx);
        }
      }
      goto LAB_001001e5;
    }
  }
  arg = (void *)0x0;
LAB_001001e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return arg;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_namemap_name2num(long param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    param_1 = ossl_namemap_stored();
    if (param_1 != 0) goto LAB_00100361;
  }
  else {
LAB_00100361:
    local_60 = local_58;
    local_68 = 0x40;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    local_28 = (undefined1  [16])0x0;
    if ((param_2 != (byte *)0x0) && (bVar4 = *param_2, bVar4 != 0)) {
      lVar3 = 0;
      do {
        local_60[lVar3] = bVar4 & 0xdf;
        lVar3 = lVar3 + 1;
        bVar4 = param_2[lVar3];
        if ((int)lVar3 == 0x3f) break;
      } while (bVar4 != 0);
    }
    puVar2 = (undefined4 *)ossl_ht_get(*(undefined8 *)(param_1 + 8),&local_68);
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *puVar2;
      goto LAB_001003ca;
    }
  }
  uVar1 = 0;
LAB_001003ca:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int namemap_add_name(long param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *ptr;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  iVar2 = ossl_namemap_name2num(param_1,param_3);
  iVar5 = iVar2;
  if (iVar2 != 0) goto LAB_00100459;
  if (param_2 < 1) {
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 == 0) goto LAB_00100459;
    ptr = CRYPTO_strdup((char *)param_3,"crypto/core_namemap.c",0xea);
    if (ptr == (char *)0x0) {
LAB_001005f0:
      ptr = (char *)0x0;
    }
    else {
      iVar3 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar3 != 0) {
        iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x18),lVar4);
        if (iVar3 != 0) {
          param_2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x18));
          if (param_2 == 0) goto LAB_00100459;
          goto LAB_00100561;
        }
        goto LAB_001005f0;
      }
    }
    OPENSSL_sk_pop_free(lVar4,name_string_free);
  }
  else {
    lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),param_2 + -1);
    if (lVar4 == 0) goto LAB_00100459;
    ptr = CRYPTO_strdup((char *)param_3,"crypto/core_namemap.c",0xea);
    if (ptr != (char *)0x0) {
      iVar3 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar3 != 0) {
LAB_00100561:
        *(int *)(param_1 + 0x20) = param_2;
        local_90 = local_88;
        local_98 = 0x40;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        if ((param_3 != (byte *)0x0) && (bVar1 = *param_3, bVar1 != 0)) {
          lVar4 = 0;
          do {
            local_90[lVar4] = bVar1 & 0xdf;
            lVar4 = lVar4 + 1;
            bVar1 = param_3[lVar4];
            if ((int)lVar4 == 0x3f) break;
          } while (bVar1 != 0);
        }
        local_b8._0_8_ = (long)param_2;
        iVar3 = ossl_ht_insert(*(undefined8 *)(param_1 + 8),&local_98,local_b8,0);
        if ((iVar3 != 0) && (iVar5 = param_2, iVar3 < 1)) {
          ERR_new();
          ERR_set_debug("crypto/core_namemap.c",0x119,"namemap_add_name");
          ERR_set_error(0xf,0x84,0);
          iVar5 = iVar2;
        }
        goto LAB_00100459;
      }
    }
  }
  CRYPTO_free(ptr);
LAB_00100459:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int ossl_namemap_add_names(long param_1,int param_2,char *param_3,char param_4)

{
  char cVar1;
  char *__s;
  int iVar2;
  int iVar3;
  char *ptr;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/core_namemap.c",0x13a,"ossl_namemap_add_names");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    ptr = CRYPTO_strdup(param_3,"crypto/core_namemap.c",0x13e);
    if (ptr != (char *)0x0) {
      iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        pcVar6 = ptr;
        if (*ptr != '\0') {
          do {
            pcVar4 = strchr(pcVar6,(int)param_4);
            if (pcVar4 == (char *)0x0) {
              sVar5 = strlen(pcVar6);
              pcVar4 = pcVar6 + sVar5;
            }
            else {
              *pcVar4 = '\0';
              pcVar4 = pcVar4 + 1;
              if (*pcVar6 == '\0') {
                ERR_new();
                param_2 = 0;
                ERR_set_debug("crypto/core_namemap.c",0x156,"ossl_namemap_add_names");
                ERR_set_error(0xf,0x75,0);
                goto LAB_00100752;
              }
            }
            iVar2 = ossl_namemap_name2num(param_1,pcVar6);
            if (param_2 == 0) {
              cVar1 = *pcVar4;
              param_2 = iVar2;
            }
            else {
              if ((iVar2 != 0) && (param_2 != iVar2)) {
                param_2 = 0;
                ERR_new();
                ERR_set_debug("crypto/core_namemap.c",0x160,"ossl_namemap_add_names");
                ERR_set_error(0xf,0x76,"\"%s\" has an existing different identity %d (from \"%s\")",
                              pcVar6,iVar2,param_3);
                goto LAB_00100752;
              }
              cVar1 = *pcVar4;
            }
            pcVar6 = pcVar4;
            __s = ptr;
          } while (cVar1 != '\0');
          do {
            iVar2 = param_2;
            param_2 = iVar2;
            if (pcVar4 <= __s) goto LAB_00100752;
            sVar5 = strlen(__s);
            pcVar6 = __s + sVar5 + 1;
            iVar3 = namemap_add_name(param_1,iVar2,__s);
            __s = pcVar6;
            param_2 = iVar3;
          } while ((iVar2 == 0) || (iVar3 == iVar2));
          ERR_new();
          ERR_set_debug("crypto/core_namemap.c",0x173,"ossl_namemap_add_names");
          param_2 = 0;
          ERR_set_error(0xf,0xc0103,"Got number %d when expecting %d",iVar3,iVar2);
        }
LAB_00100752:
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
        CRYPTO_free(ptr);
        return param_2;
      }
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



undefined4 ossl_namemap_name2num_n(long param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) || (param_1 = ossl_namemap_stored(), param_1 != 0)) {
    local_70 = local_68;
    local_78 = 0x40;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    if (param_3 < 0x40) {
      if (((param_2 != (byte *)0x0) && (bVar1 = *param_2, 0 < (int)param_3)) && (bVar1 != 0)) {
        lVar4 = 0;
        do {
          local_70[lVar4] = bVar1 & 0xdf;
          lVar4 = lVar4 + 1;
          bVar1 = param_2[lVar4];
          if ((int)param_3 <= (int)lVar4) break;
        } while (bVar1 != 0);
      }
    }
    else if ((param_2 != (byte *)0x0) && (bVar1 = *param_2, bVar1 != 0)) {
      lVar4 = 0;
      do {
        local_70[lVar4] = bVar1 & 0xdf;
        lVar4 = lVar4 + 1;
        bVar1 = param_2[lVar4];
        if ((int)lVar4 == 0x3f) break;
      } while (bVar1 != 0);
    }
    puVar3 = (undefined4 *)ossl_ht_get(*(undefined8 *)(param_1 + 8),&local_78);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = *puVar3;
      goto LAB_00100983;
    }
  }
  uVar2 = 0;
LAB_00100983:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined4 ossl_namemap_add_name(long param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_1 = ossl_namemap_stored(0);
    if (param_3 == (char *)0x0) {
      return 0;
    }
    if (*param_3 == '\0') {
      return 0;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    if (param_3 == (char *)0x0) {
      return 0;
    }
    if (*param_3 == '\0') {
      return 0;
    }
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = namemap_add_name(param_1,param_2,param_3);
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  return uVar2;
}



void get_legacy_evp_names(int param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  ASN1_OBJECT *a;
  long in_FS_OFFSET;
  char acStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar3 = OBJ_nid2sn(param_1);
    uVar1 = ossl_namemap_add_name(param_4,0,pcVar3);
    pcVar3 = OBJ_nid2ln(param_1);
    param_1 = ossl_namemap_add_name(param_4,uVar1,pcVar3);
  }
  if (param_2 != 0) {
    pcVar3 = OBJ_nid2sn(param_2);
    uVar1 = ossl_namemap_add_name(param_4,param_1,pcVar3);
    pcVar3 = OBJ_nid2ln(param_2);
    param_1 = ossl_namemap_add_name(param_4,uVar1,pcVar3);
    a = OBJ_nid2obj(param_2);
    if (a != (ASN1_OBJECT *)0x0) {
      iVar2 = OBJ_obj2txt(acStack_68,0x32,a,1);
      if (0 < iVar2) {
        param_1 = ossl_namemap_add_name(param_4,param_1,acStack_68);
      }
    }
  }
  if (param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ossl_namemap_add_name(param_4,param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void get_legacy_md_names(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  ASN1_OBJECT *a;
  long in_FS_OFFSET;
  char acStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = OBJ_NAME_get(*(char **)(param_1 + 2),*param_1);
  if (pcVar3 != (char *)0x0) {
    iVar1 = EVP_MD_get_type(pcVar3);
    if (iVar1 != 0) {
      pcVar3 = OBJ_nid2sn(iVar1);
      uVar2 = ossl_namemap_add_name(param_2,0,pcVar3);
      pcVar3 = OBJ_nid2ln(iVar1);
      uVar2 = ossl_namemap_add_name(param_2,uVar2,pcVar3);
      a = OBJ_nid2obj(iVar1);
      if (a != (ASN1_OBJECT *)0x0) {
        iVar1 = OBJ_obj2txt(acStack_58,0x32,a,1);
        if (0 < iVar1) {
          ossl_namemap_add_name(param_2,uVar2,acStack_58);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void get_legacy_cipher_names(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  ASN1_OBJECT *a;
  long in_FS_OFFSET;
  char acStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = OBJ_NAME_get(*(char **)(param_1 + 2),*param_1);
  if (pcVar3 != (char *)0x0) {
    iVar1 = EVP_CIPHER_get_type(pcVar3);
    if (iVar1 != 0) {
      pcVar3 = OBJ_nid2sn(iVar1);
      uVar2 = ossl_namemap_add_name(param_2,0,pcVar3);
      pcVar3 = OBJ_nid2ln(iVar1);
      uVar2 = ossl_namemap_add_name(param_2,uVar2,pcVar3);
      a = OBJ_nid2obj(iVar1);
      if (a != (ASN1_OBJECT *)0x0) {
        iVar1 = OBJ_obj2txt(acStack_58,0x32,a,1);
        if (0 < iVar1) {
          ossl_namemap_add_name(param_2,uVar2,acStack_58);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_namemap_free(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),0x100000);
  ossl_ht_free(*(undefined8 *)(param_1 + 8));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



void ossl_stored_namemap_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    *param_1 = *param_1 & 0xfe;
    ossl_namemap_free();
    return;
  }
  return;
}



long ossl_namemap_new(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x800;
  local_18 = _LC4;
  local_30 = (undefined1  [16])0x0;
  local_38 = param_1;
  lVar1 = CRYPTO_zalloc(0x28,"crypto/core_namemap.c",0x210);
  if (lVar1 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      lVar2 = ossl_ht_new(&local_38);
      *(long *)(lVar1 + 8) = lVar2;
      if (lVar2 != 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(long *)(lVar1 + 0x18) = lVar3;
        lVar2 = lVar1;
        if (lVar3 != 0) goto LAB_00100e66;
      }
    }
  }
  lVar2 = 0;
  ossl_namemap_free(lVar1);
LAB_00100e66:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_stored_namemap_new(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)ossl_namemap_new();
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}


