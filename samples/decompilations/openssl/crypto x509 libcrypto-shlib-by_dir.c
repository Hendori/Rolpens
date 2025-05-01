
int by_dir_hash_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(ulong *)*param_1 <= *(ulong *)*param_2) {
    iVar1 = -(uint)(*(ulong *)*param_1 < *(ulong *)*param_2);
  }
  return iVar1;
}



void by_dir_hash_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8
get_cert_by_subject_ex
          (X509_LOOKUP *param_1,int param_2,long param_3,undefined4 *param_4,undefined8 param_5,
          undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  BUF_MEM *str;
  undefined8 uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 *puVar8;
  undefined8 *ptr;
  int iVar9;
  ulong uVar10;
  undefined *puVar11;
  long in_FS_OFFSET;
  long local_2a8;
  int local_27c;
  int local_278 [2];
  undefined1 *local_270;
  undefined8 local_268 [2];
  stat local_258;
  undefined1 local_1c8 [24];
  long local_1b0;
  long local_180;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar5 = 0;
    goto LAB_00100514;
  }
  local_278[0] = param_2;
  if (param_2 == 1) {
    local_270 = local_1c8;
    puVar11 = &_LC1;
    local_180 = param_3;
    str = BUF_MEM_new();
  }
  else {
    if (param_2 != 2) {
      ERR_new();
      str = (BUF_MEM *)0x0;
      uVar5 = 0;
      ERR_set_debug("crypto/x509/by_dir.c",0xfa,"get_cert_by_subject_ex");
      ERR_set_error(0xb,0x70,0);
      goto LAB_001004ff;
    }
    local_270 = local_1c8;
    puVar11 = &_LC2;
    local_1b0 = param_3;
    str = BUF_MEM_new();
  }
  if (str != (BUF_MEM *)0x0) {
    pcVar1 = param_1->method_data;
    uVar5 = X509_NAME_hash_ex(param_3,param_5,param_6,&local_27c);
    if (local_27c != 0) {
      local_27c = 0;
      if (param_2 == 1) {
        while (iVar3 = OPENSSL_sk_num(*(undefined8 *)(pcVar1 + 8)), local_27c < iVar3) {
          puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(pcVar1 + 8));
          sVar7 = strlen((char *)*puVar6);
          iVar3 = BUF_MEM_grow(str,(long)((int)sVar7 + 0x11));
          if (CONCAT44(extraout_var_00,iVar3) == 0) goto LAB_00100543;
          uVar10 = 0;
          while( true ) {
            BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar6,0x2f,uVar5,puVar11,uVar10);
            iVar3 = stat(str->data,&local_258);
            if ((iVar3 < 0) ||
               (iVar3 = X509_load_cert_file_ex
                                  (param_1,str->data,*(undefined4 *)(puVar6 + 1),param_5,param_6),
               iVar3 == 0)) break;
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          if ((int)uVar10 != 0) {
            iVar3 = X509_STORE_lock(param_1->store_ctx);
            if (iVar3 == 0) break;
            uVar4 = OPENSSL_sk_find(param_1->store_ctx->objs,local_278);
            puVar8 = (undefined4 *)OPENSSL_sk_value(param_1->store_ctx->objs,uVar4);
            X509_STORE_unlock(param_1->store_ctx);
            if (puVar8 != (undefined4 *)0x0) goto LAB_001003ff;
          }
          local_27c = local_27c + 1;
        }
      }
      else {
        while (iVar3 = OPENSSL_sk_num(*(undefined8 *)(pcVar1 + 8)), local_27c < iVar3) {
          puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(pcVar1 + 8));
          sVar7 = strlen((char *)*puVar6);
          iVar3 = BUF_MEM_grow(str,(long)((int)sVar7 + 0x11));
          if (CONCAT44(extraout_var,iVar3) == 0) goto LAB_00100543;
          if (puVar6[2] == 0) {
            uVar10 = 0;
            local_2a8 = 0;
          }
          else {
            local_268[0] = uVar5;
            iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pcVar1 + 0x10));
            if (iVar3 == 0) break;
            iVar3 = OPENSSL_sk_find(puVar6[2],local_268);
            if (iVar3 < 0) {
              local_2a8 = 0;
              uVar10 = 0;
            }
            else {
              local_2a8 = OPENSSL_sk_value(puVar6[2],iVar3);
              uVar10 = (ulong)*(uint *)(local_2a8 + 8);
            }
            CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar1 + 0x10));
          }
          while( true ) {
            BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar6,0x2f,uVar5,puVar11,uVar10);
            iVar3 = stat(str->data,&local_258);
            iVar9 = (int)uVar10;
            if ((iVar3 < 0) ||
               (iVar3 = X509_load_crl_file(param_1,str->data,*(int *)(puVar6 + 1)), iVar3 == 0))
            break;
            uVar10 = (ulong)(iVar9 + 1);
          }
          if (0 < iVar9) {
            iVar3 = X509_STORE_lock(param_1->store_ctx);
            if (iVar3 == 0) break;
            uVar4 = OPENSSL_sk_find(param_1->store_ctx->objs,local_278);
            puVar8 = (undefined4 *)OPENSSL_sk_value(param_1->store_ctx->objs,uVar4);
            X509_STORE_unlock(param_1->store_ctx);
            iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(pcVar1 + 0x10));
            if (iVar3 == 0) break;
            if (local_2a8 == 0) {
              local_268[0] = uVar5;
              uVar4 = OPENSSL_sk_find(puVar6[2],local_268);
              local_2a8 = OPENSSL_sk_value(puVar6[2],uVar4);
              if (local_2a8 != 0) goto LAB_001003d8;
              ptr = (undefined8 *)CRYPTO_malloc(0x10,"crypto/x509/by_dir.c",0x17a);
              if (ptr == (undefined8 *)0x0) {
                uVar5 = 0;
                CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar1 + 0x10));
                goto LAB_001004ff;
              }
              uVar2 = puVar6[2];
              *(int *)(ptr + 1) = iVar9;
              *ptr = uVar5;
              iVar3 = OPENSSL_sk_push(uVar2,ptr);
              if (iVar3 == 0) {
                uVar5 = 0;
                CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar1 + 0x10));
                CRYPTO_free(ptr);
                ERR_new();
                ERR_set_debug("crypto/x509/by_dir.c",0x185,"get_cert_by_subject_ex");
                ERR_set_error(0xb,0x8000f,0);
                goto LAB_001004ff;
              }
              OPENSSL_sk_sort(puVar6[2]);
            }
            else {
LAB_001003d8:
              if (*(int *)(local_2a8 + 8) < iVar9) {
                *(int *)(local_2a8 + 8) = iVar9;
              }
            }
            CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar1 + 0x10));
            if (puVar8 != (undefined4 *)0x0) goto LAB_001003ff;
          }
          local_27c = local_27c + 1;
        }
      }
    }
    goto LAB_00100573;
  }
  ERR_new();
  uVar5 = 0;
  ERR_set_debug("crypto/x509/by_dir.c",0xff,"get_cert_by_subject_ex");
  ERR_set_error(0xb,0x80007,0);
  iVar3 = X509_STORE_lock(param_1->store_ctx);
  goto joined_r0x00100490;
LAB_00100543:
  ERR_new();
  ERR_set_debug("crypto/x509/by_dir.c",0x10f,"get_cert_by_subject_ex");
  ERR_set_error(0xb,0x80007,0);
LAB_00100573:
  uVar5 = 0;
  goto LAB_001004ff;
LAB_001003ff:
  uVar5 = 1;
  *param_4 = *puVar8;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar8 + 2);
  ERR_clear_error();
LAB_001004ff:
  iVar3 = X509_STORE_lock(param_1->store_ctx);
joined_r0x00100490:
  if (iVar3 != 0) {
    iVar3 = OPENSSL_sk_is_sorted(param_1->store_ctx->objs);
    if (iVar3 == 0) {
      OPENSSL_sk_sort(param_1->store_ctx->objs);
    }
    X509_STORE_unlock(param_1->store_ctx);
  }
  BUF_MEM_free(str);
LAB_00100514:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



void get_cert_by_subject(void)

{
  get_cert_by_subject_ex();
  return;
}



void by_dir_entry_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  OPENSSL_sk_pop_free(param_1[2],by_dir_hash_free);
  CRYPTO_free(param_1);
  return;
}



void free_dir(long param_1)

{
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x10);
  OPENSSL_sk_pop_free(ptr[1],by_dir_entry_free);
  BUF_MEM_free((BUF_MEM *)*ptr);
  CRYPTO_THREAD_lock_free(ptr[2]);
  CRYPTO_free(ptr);
  return;
}



undefined8 new_dir(long param_1)

{
  undefined8 *ptr;
  BUF_MEM *pBVar1;
  long lVar2;
  
  ptr = (undefined8 *)CRYPTO_malloc(0x18,"crypto/x509/by_dir.c",0x6e);
  if (ptr != (undefined8 *)0x0) {
    pBVar1 = BUF_MEM_new();
    *ptr = pBVar1;
    if (pBVar1 == (BUF_MEM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/by_dir.c",0x74,"new_dir");
      ERR_set_error(0xb,0x80003,0);
    }
    else {
      ptr[1] = 0;
      lVar2 = CRYPTO_THREAD_lock_new();
      ptr[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined8 **)(param_1 + 0x10) = ptr;
        return 1;
      }
      BUF_MEM_free((BUF_MEM *)*ptr);
      ERR_new();
      ERR_set_debug("crypto/x509/by_dir.c",0x7b,"new_dir");
      ERR_set_error(0xb,0x8000f,0);
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined8 add_cert_dir(long param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char *__s;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 uVar7;
  void *ptr;
  long lVar8;
  char *pcVar9;
  size_t __n;
  
  if ((param_2 == (char *)0x0) || (cVar2 = *param_2, pcVar9 = param_2, cVar2 == '\0')) {
    ERR_new();
    ERR_set_debug("crypto/x509/by_dir.c",0xad,"add_cert_dir");
    ERR_set_error(0xb,0x71,0);
    return 0;
  }
  do {
    pcVar1 = pcVar9 + 1;
    if ((cVar2 == ':') || (cVar2 == '\0')) {
      __n = (long)pcVar9 - (long)param_2;
      if (__n != 0) {
        for (iVar4 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8)), iVar4 < iVar3;
            iVar4 = iVar4 + 1) {
          puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar4);
          __s = (char *)*puVar5;
          sVar6 = strlen(__s);
          if ((sVar6 == __n) && (iVar3 = strncmp(__s,param_2,__n), iVar3 == 0)) break;
        }
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (iVar3 <= iVar4) {
          if (*(long *)(param_1 + 8) == 0) {
            lVar8 = OPENSSL_sk_new_null();
            *(long *)(param_1 + 8) = lVar8;
            if (lVar8 == 0) {
              ERR_new();
              uVar7 = 0xc6;
              goto LAB_00100a68;
            }
          }
          puVar5 = (undefined8 *)CRYPTO_malloc(0x18,"crypto/x509/by_dir.c",0xca);
          if (puVar5 == (undefined8 *)0x0) {
            return 0;
          }
          *(undefined4 *)(puVar5 + 1) = param_3;
          uVar7 = OPENSSL_sk_new(0x100000);
          puVar5[2] = uVar7;
          ptr = (void *)CRYPTO_strndup(param_2,__n,"crypto/x509/by_dir.c",0xcf);
          *puVar5 = ptr;
          if ((ptr == (void *)0x0) || (puVar5[2] == 0)) {
            CRYPTO_free(ptr);
            OPENSSL_sk_pop_free(puVar5[2],by_dir_hash_free);
            CRYPTO_free(puVar5);
            return 0;
          }
          iVar4 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar5);
          if (iVar4 == 0) {
            CRYPTO_free((void *)*puVar5);
            OPENSSL_sk_pop_free(puVar5[2],by_dir_hash_free);
            CRYPTO_free(puVar5);
            ERR_new();
            uVar7 = 0xd6;
LAB_00100a68:
            ERR_set_debug("crypto/x509/by_dir.c",uVar7,"add_cert_dir");
            ERR_set_error(0xb,0x8000f,0);
            return 0;
          }
        }
        cVar2 = *pcVar9;
      }
      param_2 = pcVar1;
      if (cVar2 == '\0') {
        return 1;
      }
    }
    cVar2 = *pcVar1;
    pcVar9 = pcVar1;
  } while( true );
}



ulong dir_ctrl(long param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  if (param_2 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (param_4 != 3) {
      uVar3 = add_cert_dir(uVar1,param_3,(int)param_4);
      return uVar3;
    }
    pcVar4 = X509_get_default_cert_dir_env();
    pcVar4 = (char *)ossl_safe_getenv(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = X509_get_default_cert_dir();
    }
    uVar2 = add_cert_dir(uVar1,pcVar4,1);
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/by_dir.c",99,"dir_ctrl");
      ERR_set_error(0xb,0x67,0);
    }
  }
  return uVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_LOOKUP_METHOD * X509_LOOKUP_hash_dir(void)

{
  return (X509_LOOKUP_METHOD *)x509_dir_lookup;
}


