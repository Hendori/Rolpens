
int sig_cmp_BSEARCH_CMP_FN(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



int sig_sk_cmp(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



int sigx_cmp_BSEARCH_CMP_FN(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4) - iVar1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    iVar2 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar2;
}



void o_sig_init_ossl_(void)

{
  sig_lock = CRYPTO_THREAD_lock_new();
  o_sig_init_ossl_ret_ = (uint)(sig_lock != 0);
  return;
}



void sid_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



int sigx_cmp(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4) - iVar1;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    iVar2 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar2;
}



int OBJ_find_sigid_algs(int signid,int *pdig_nid,int *ppkey_nid)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_3c [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (signid != 0) {
    local_3c[0] = signid;
    pvVar2 = OBJ_bsearch_(local_3c,sigoid_srt,0x44,0xc,sig_cmp_BSEARCH_CMP_FN);
    if (pvVar2 != (void *)0x0) {
LAB_00100137:
      if (pdig_nid != (int *)0x0) {
        *pdig_nid = *(int *)((long)pvVar2 + 4);
      }
      if (ppkey_nid != (int *)0x0) {
        *ppkey_nid = *(int *)((long)pvVar2 + 8);
      }
      iVar1 = 1;
      goto LAB_00100153;
    }
    iVar1 = CRYPTO_THREAD_run_once(&sig_init,o_sig_init_ossl_);
    if ((iVar1 != 0) && (o_sig_init_ossl_ret_ != 0)) {
      iVar1 = CRYPTO_THREAD_read_lock(sig_lock);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/objects/obj_xref.c",0x52,"ossl_obj_find_sigid_algs");
        ERR_set_error(8,0xc010f,0);
        iVar1 = 0;
        goto LAB_00100153;
      }
      if (sig_app != 0) {
        iVar1 = OPENSSL_sk_find(sig_app,local_3c);
        if (-1 < iVar1) {
          pvVar2 = (void *)OPENSSL_sk_value(sig_app,iVar1);
          CRYPTO_THREAD_unlock(sig_lock);
          if (pvVar2 == (void *)0x0) {
            iVar1 = 0;
            goto LAB_00100153;
          }
          goto LAB_00100137;
        }
      }
      CRYPTO_THREAD_unlock(sig_lock);
      iVar1 = 0;
      goto LAB_00100153;
    }
  }
  iVar1 = 0;
LAB_00100153:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OBJ_find_sigid_by_algs(int *psignid,int dig_nid,int pkey_nid)

{
  int iVar1;
  undefined1 **ppuVar2;
  long in_FS_OFFSET;
  undefined1 *local_38;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = local_2c;
  if (pkey_nid != 0) {
    local_28 = dig_nid;
    local_24 = pkey_nid;
    ppuVar2 = (undefined1 **)OBJ_bsearch_(&local_38,sigoid_srt_xref,0x30,8,sigx_cmp_BSEARCH_CMP_FN);
    if (ppuVar2 != (undefined1 **)0x0) {
LAB_001002d3:
      if (psignid != (int *)0x0) {
        *psignid = *(int *)*ppuVar2;
      }
      iVar1 = 1;
      goto LAB_00100280;
    }
    iVar1 = CRYPTO_THREAD_run_once(&sig_init,o_sig_init_ossl_);
    if ((iVar1 != 0) && (o_sig_init_ossl_ret_ != 0)) {
      iVar1 = CRYPTO_THREAD_read_lock(sig_lock);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/objects/obj_xref.c",0x7f,"OBJ_find_sigid_by_algs");
        ERR_set_error(8,0xc010f,0);
        iVar1 = 0;
        goto LAB_00100280;
      }
      if (sigx_app != 0) {
        iVar1 = OPENSSL_sk_find(sigx_app,local_2c);
        if (-1 < iVar1) {
          local_38 = (undefined1 *)OPENSSL_sk_value(sigx_app,iVar1);
          CRYPTO_THREAD_unlock(sig_lock);
          ppuVar2 = &local_38;
          goto LAB_001002d3;
        }
      }
      CRYPTO_THREAD_unlock(sig_lock);
      iVar1 = 0;
      goto LAB_00100280;
    }
  }
  iVar1 = 0;
LAB_00100280:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OBJ_add_sigid(int signid,int dig_id,int pkey_id)

{
  undefined8 uVar1;
  int iVar2;
  int *ptr;
  void *pvVar3;
  undefined8 extraout_RDX;
  uint uVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  int local_4c [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((signid != 0) && (pkey_id != 0)) &&
      (iVar2 = CRYPTO_THREAD_run_once(&sig_init,o_sig_init_ossl_), iVar2 != 0)) &&
     ((o_sig_init_ossl_ret_ != 0 &&
      (ptr = (int *)CRYPTO_malloc(0xc,"crypto/objects/obj_xref.c",0x9e), ptr != (int *)0x0)))) {
    *ptr = signid;
    uVar1 = sig_lock;
    ptr[1] = dig_id;
    ptr[2] = pkey_id;
    iVar2 = CRYPTO_THREAD_write_lock(uVar1);
    if (iVar2 != 0) {
      local_4c[0] = signid;
      pvVar3 = OBJ_bsearch_(local_4c,sigoid_srt,0x44,0xc,sig_cmp_BSEARCH_CMP_FN);
      auVar5._8_8_ = extraout_RDX;
      auVar5._0_8_ = pvVar3;
      if ((pvVar3 == (void *)0x0) &&
         (((iVar2 = CRYPTO_THREAD_run_once(&sig_init,o_sig_init_ossl_), iVar2 == 0 ||
           (o_sig_init_ossl_ret_ == 0)) ||
          ((sig_app == 0 ||
           ((iVar2 = OPENSSL_sk_find(sig_app,local_4c), iVar2 < 0 ||
            (auVar5 = OPENSSL_sk_value(sig_app,iVar2), auVar5._0_8_ == 0)))))))) {
        if ((sig_app == 0) && (sig_app = OPENSSL_sk_new(sig_sk_cmp), sig_app == 0)) {
          uVar4 = 0;
        }
        else if ((sigx_app == 0) && (sigx_app = OPENSSL_sk_new(sigx_cmp), sigx_app == 0)) {
          uVar4 = 0;
        }
        else {
          iVar2 = OPENSSL_sk_push(sig_app,ptr);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = OPENSSL_sk_push(sigx_app,ptr);
            ptr = (int *)0x0;
            if (uVar4 != 0) {
              uVar4 = 1;
              OPENSSL_sk_sort(sig_app);
              OPENSSL_sk_sort(sigx_app);
            }
          }
        }
      }
      else {
        uVar4 = (uint)(pkey_id == *(int *)(auVar5._0_8_ + 8)) &
                (uint)CONCAT71(auVar5._9_7_,dig_id == *(int *)(auVar5._0_8_ + 4));
      }
      CRYPTO_free(ptr);
      CRYPTO_THREAD_unlock(sig_lock);
      goto LAB_00100410;
    }
    ERR_new();
    ERR_set_debug("crypto/objects/obj_xref.c",0xa5,"OBJ_add_sigid");
    ERR_set_error(8,0xc0110,0);
    CRYPTO_free(ptr);
  }
  uVar4 = 0;
LAB_00100410:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OBJ_sigid_free(void)

{
  OPENSSL_sk_pop_free(sig_app,sid_free);
  OPENSSL_sk_free(sigx_app);
  CRYPTO_THREAD_lock_free(sig_lock);
  sig_app = 0;
  sigx_app = 0;
  sig_lock = 0;
  return;
}


