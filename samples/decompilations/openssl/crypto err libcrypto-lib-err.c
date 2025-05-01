
void lh_ERR_STRING_DATA_hash_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ERR_STRING_DATA_comp_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ERR_STRING_DATA_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ERR_STRING_DATA_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



ulong err_string_data_hash(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = 2;
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = uVar1 >> 0x17 & 0xff;
  }
  return ((uVar1 ^ uVar2) % 0x13) * 0xd ^ uVar1 ^ uVar2;
}



int err_string_data_cmp(ulong *param_1,ulong *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != *param_2) {
    iVar1 = (-(uint)(*param_2 < *param_1) & 2) - 1;
  }
  return iVar1;
}



void do_err_strings_init_ossl_(void)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = OPENSSL_init_crypto(0x40000,0);
  if ((iVar2 != 0) && (err_string_lock = CRYPTO_THREAD_lock_new(), err_string_lock != 0)) {
    uVar1 = OPENSSL_LH_new(err_string_data_hash,err_string_data_cmp);
    int_error_hash =
         OPENSSL_LH_set_thunks
                   (uVar1,0x100000,lh_ERR_STRING_DATA_comp_thunk,lh_ERR_STRING_DATA_doall_thunk,
                    lh_ERR_STRING_DATA_doall_arg_thunk);
    if (int_error_hash != 0) {
      do_err_strings_init_ossl_ret_ = 1;
      return;
    }
    CRYPTO_THREAD_lock_free(err_string_lock);
    do_err_strings_init_ossl_ret_ = 0;
    err_string_lock = 0;
    return;
  }
  do_err_strings_init_ossl_ret_ = 0;
  return;
}



void err_do_init_ossl_(void)

{
  set_err_thread_local = 1;
  err_do_init_ossl_ret_ = CRYPTO_THREAD_init_local(&err_thread_local,0);
  return;
}



void OSSL_ERR_STATE_free(void *param_1)

{
  void *ptr;
  long lVar1;
  
  if (param_1 != (void *)0x0) {
    lVar1 = 0;
    do {
      if ((*(byte *)((long)param_1 + lVar1 * 4 + 0x200) & 1) != 0) {
        CRYPTO_free(*(void **)((long)param_1 + lVar1 * 8 + 0x100));
      }
      ptr = *(void **)((long)param_1 + lVar1 * 8 + 0x240);
      *(undefined8 *)((long)param_1 + lVar1 * 8 + 0x100) = 0;
      *(undefined8 *)((long)param_1 + lVar1 * 8 + 0x180) = 0;
      *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x200) = 0;
      *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x40) = 0;
      *(undefined4 *)((long)param_1 + lVar1 * 4) = 0;
      *(undefined8 *)((long)param_1 + lVar1 * 8 + 0x80) = 0;
      *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x2c0) = 0xffffffff;
      CRYPTO_free(ptr);
      *(undefined8 *)((long)param_1 + lVar1 * 8 + 0x240) = 0;
      CRYPTO_free(*(void **)((long)param_1 + lVar1 * 8 + 0x300));
      *(undefined8 *)((long)param_1 + lVar1 * 8 + 0x300) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x10);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void err_delete_thread_state(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_THREAD_get_local(&err_thread_local);
  if (lVar1 != 0) {
    CRYPTO_THREAD_set_local(&err_thread_local,0);
    OSSL_ERR_STATE_free(lVar1);
    return;
  }
  return;
}



void err_cleanup(void)

{
  if (set_err_thread_local != 0) {
    CRYPTO_THREAD_cleanup_local(&err_thread_local);
  }
  CRYPTO_THREAD_lock_free(err_string_lock);
  err_string_lock = 0;
  OPENSSL_LH_free(int_error_hash);
  int_error_hash = 0;
  return;
}



ulong ossl_err_load_ERR_strings(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((int)uVar2 != 0) &&
     (uVar2 = (ulong)do_err_strings_init_ossl_ret_, do_err_strings_init_ossl_ret_ != 0)) {
    iVar1 = CRYPTO_THREAD_write_lock(err_string_lock);
    if (iVar1 != 0) {
      if (ERR_str_libraries != 0) {
        plVar4 = &ERR_str_libraries;
        do {
          plVar3 = plVar4 + 2;
          OPENSSL_LH_insert(int_error_hash,plVar4);
          plVar4 = plVar3;
        } while (*plVar3 != 0);
      }
      CRYPTO_THREAD_unlock(err_string_lock);
    }
    iVar1 = CRYPTO_THREAD_write_lock(err_string_lock);
    if (iVar1 != 0) {
      if (ERR_str_reasons != 0) {
        plVar4 = &ERR_str_reasons;
        do {
          plVar3 = plVar4 + 2;
          OPENSSL_LH_insert(int_error_hash,plVar4);
          plVar4 = plVar3;
        } while (*plVar3 != 0);
      }
      CRYPTO_THREAD_unlock(err_string_lock);
    }
    return 1;
  }
  return uVar2;
}



void ERR_load_strings(int lib,ERR_STRING_DATA *str)

{
  ulong uVar1;
  ERR_STRING_DATA *pEVar2;
  int iVar3;
  
  iVar3 = ossl_err_load_ERR_strings();
  if (iVar3 != 0) {
    uVar1 = str->error;
    pEVar2 = str;
    while (uVar1 != 0) {
      pEVar2->error = uVar1 | (lib & 0xffU) << 0x17;
      uVar1 = pEVar2[1].error;
      pEVar2 = pEVar2 + 1;
    }
    iVar3 = CRYPTO_THREAD_write_lock(err_string_lock);
    if (iVar3 != 0) {
      uVar1 = str->error;
      while (uVar1 != 0) {
        OPENSSL_LH_insert(int_error_hash,str);
        uVar1 = str[1].error;
        str = str + 1;
      }
      CRYPTO_THREAD_unlock(err_string_lock);
    }
  }
  return;
}



undefined8 ERR_load_strings_const(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_err_load_ERR_strings();
  if ((int)uVar2 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(err_string_lock);
    if (iVar1 != 0) {
      for (; *param_1 != 0; param_1 = param_1 + 2) {
        OPENSSL_LH_insert(int_error_hash,param_1);
      }
      CRYPTO_THREAD_unlock(err_string_lock);
    }
    return 1;
  }
  return uVar2;
}



void ERR_unload_strings(int lib,ERR_STRING_DATA *str)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(err_string_lock), iVar1 != 0)) {
    for (; str->error != 0; str = str + 1) {
      OPENSSL_LH_delete(int_error_hash,str);
    }
    CRYPTO_THREAD_unlock(err_string_lock);
    return;
  }
  return;
}



void err_free_strings_int(void)

{
  return;
}



char * ERR_lib_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  ulong local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if ((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) {
    local_28[0] = 0x1000000;
    if ((e & 0x80000000) == 0) {
      local_28[0] = (ulong)((uint)e & 0x7f800000);
    }
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar2 = OPENSSL_LH_retrieve(int_error_hash,local_28);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar2 != 0) {
        pcVar3 = *(char **)(lVar2 + 8);
        goto LAB_00100632;
      }
    }
  }
  pcVar3 = (char *)0x0;
LAB_00100632:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * ERR_func_error_string(ulong e)

{
  return (char *)0x0;
}



char * ERR_reason_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  ulong local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) && ((e & 0x80000000) == 0)) {
    local_38[0] = (ulong)((uint)e & 0x7fffffff);
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar2 = OPENSSL_LH_retrieve(int_error_hash,local_38);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar2 == 0) goto LAB_00100700;
LAB_001006f8:
      pcVar3 = *(char **)(lVar2 + 8);
      goto LAB_00100742;
    }
LAB_00100700:
    local_38[0] = (ulong)((uint)e & 0x7fffff);
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar2 = OPENSSL_LH_retrieve(int_error_hash,local_38);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar2 != 0) goto LAB_001006f8;
    }
  }
  pcVar3 = (char *)0x0;
LAB_00100742:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}



void ossl_err_string_int_part_0(ulong param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  uint uVar1;
  int iVar2;
  char *buf;
  char *buf_00;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_198;
  ulong local_190;
  char local_188 [64];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (uint)param_1;
  if ((param_1 & 0x80000000) == 0) {
    local_190 = param_1 >> 0x17 & 0xff;
    buf = ERR_lib_error_string(param_1);
    if (buf == (char *)0x0) {
      buf = local_188;
      BIO_snprintf(buf,0x40,"lib(%lu)",local_190);
    }
    local_198 = (ulong)(uVar1 & 0x7fffff);
    buf_00 = ERR_reason_error_string(param_1);
    if (buf_00 != (char *)0x0) goto LAB_001007da;
  }
  else {
    buf = ERR_lib_error_string(param_1);
    if (buf == (char *)0x0) {
      buf = local_188;
      BIO_snprintf(buf,0x40,"lib(%lu)",2);
    }
    buf_00 = local_148;
    local_198 = (ulong)(uVar1 & 0x7fffffff);
    iVar2 = openssl_strerror_r(uVar1 & 0x7fffffff,buf_00,0x100);
    local_190 = 2;
    if (iVar2 != 0) goto LAB_001007da;
  }
  buf_00 = local_148;
  BIO_snprintf(buf_00,0x100,"reason(%lu)",local_198 & 0xffffffffff83ffff);
LAB_001007da:
  BIO_snprintf(param_3,param_4,"error:%08lX:%s:%s:%s",param_1,buf,param_2,buf_00);
  sVar3 = strlen(param_3);
  if (sVar3 == param_4 - 1) {
    BIO_snprintf(param_3,param_4,"err:%lx:%lx:%lx:%lx",param_1,local_190,0,local_198);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ossl_err_string_int(void)

{
  long in_RCX;
  
  if (in_RCX != 0) {
    ossl_err_string_int_part_0();
    return;
  }
  return;
}



void ERR_error_string_n(ulong e,char *buf,size_t len)

{
  ossl_err_string_int(e,&_LC6,buf,len);
  return;
}



char * ERR_error_string(ulong e,char *buf)

{
  undefined1 *buf_00;
  
  buf_00 = buf_0;
  if (buf != (char *)0x0) {
    buf_00 = buf;
  }
  ERR_error_string_n(e,buf_00,0x100);
  return buf_00;
}



void ERR_remove_thread_state(CRYPTO_THREADID *tid)

{
  return;
}



void ERR_remove_state(ulong pid)

{
  return;
}



long ossl_err_get_state_int(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = OPENSSL_init_crypto(0x40000,0);
  if ((((iVar2 != 0) && (iVar2 = CRYPTO_THREAD_run_once(&err_init,err_do_init_ossl_), iVar2 != 0))
      && (err_do_init_ossl_ret_ != 0)) &&
     (lVar4 = CRYPTO_THREAD_get_local(&err_thread_local), lVar4 != -1)) {
    if (lVar4 != 0) {
LAB_00100a57:
      *piVar3 = iVar1;
      return lVar4;
    }
    iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,0xffffffffffffffff);
    if (iVar2 != 0) {
      lVar4 = OSSL_ERR_STATE_new();
      if (lVar4 != 0) {
        iVar2 = ossl_init_thread_start(0,0,err_delete_thread_state);
        if ((iVar2 != 0) && (iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,lVar4), iVar2 != 0))
        {
          OPENSSL_init_crypto(2,0);
          goto LAB_00100a57;
        }
        OSSL_ERR_STATE_free(lVar4);
      }
      CRYPTO_THREAD_set_local(&err_thread_local,0);
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_clear_error(void)

{
  undefined1 *puVar1;
  void *ptr;
  long lVar2;
  long lVar3;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar2 + 0x200 + lVar3 * 4) & 1) == 0) {
        *(undefined8 *)(lVar2 + 0x100 + lVar3 * 8) = 0;
        *(undefined8 *)(lVar2 + 0x180 + lVar3 * 8) = 0;
        *(undefined4 *)(lVar2 + 0x200 + lVar3 * 4) = 0;
      }
      else {
        puVar1 = *(undefined1 **)(lVar2 + 0x100 + lVar3 * 8);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(lVar2 + 0x200 + lVar3 * 4) = 1;
        }
      }
      *(undefined4 *)(lVar2 + 0x40 + lVar3 * 4) = 0;
      ptr = *(void **)(lVar2 + 0x240 + lVar3 * 8);
      *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
      *(undefined8 *)(lVar2 + 0x80 + lVar3 * 8) = 0;
      *(undefined4 *)(lVar2 + 0x2c0 + lVar3 * 4) = 0xffffffff;
      CRYPTO_free(ptr);
      *(undefined8 *)(lVar2 + 0x240 + lVar3 * 8) = 0;
      CRYPTO_free(*(void **)(lVar2 + 0x300 + lVar3 * 8));
      *(undefined8 *)(lVar2 + 0x300 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    *(undefined8 *)(lVar2 + 0x380) = 0;
  }
  return;
}



undefined8
ERR_get_error_all(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,long *param_4,
                 undefined4 *param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar9 = *(int *)(lVar6 + 0x380);
    if (iVar9 != iVar10) {
      do {
        lVar8 = (long)iVar9;
        pbVar1 = (byte *)(lVar6 + lVar8 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar8 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar8 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar9) {
              return 0;
            }
            lVar2 = lVar6 + lVar8 * 8;
            uVar3 = *(undefined8 *)(lVar2 + 0x80);
            *(int *)(lVar6 + 900) = iVar5;
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (param_1 != (undefined8 *)0x0) {
              puVar7 = &_LC6;
              if (*(undefined **)(lVar2 + 0x240) != (undefined *)0x0) {
                puVar7 = *(undefined **)(lVar2 + 0x240);
              }
              *param_1 = puVar7;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(lVar6 + 0x2c0 + lVar8 * 4);
            }
            if (param_3 != (undefined8 *)0x0) {
              puVar7 = &_LC6;
              if (*(undefined **)(lVar2 + 0x300) != (undefined *)0x0) {
                puVar7 = *(undefined **)(lVar2 + 0x300);
              }
              *param_3 = puVar7;
            }
            if (param_5 == (undefined4 *)0x0) {
              if (param_4 != (long *)0x0) {
                puVar7 = &_LC6;
                if (*(undefined **)(lVar2 + 0x100) != (undefined *)0x0) {
                  puVar7 = *(undefined **)(lVar2 + 0x100);
                }
                *param_4 = (long)puVar7;
                return uVar3;
              }
            }
            else {
              *param_5 = *(undefined4 *)(lVar6 + 0x200 + lVar8 * 4);
              if (param_4 != (long *)0x0) {
                if (*(long *)(lVar2 + 0x100) == 0) {
                  *param_4 = (long)&_LC6;
                  *param_5 = 0;
                  return uVar3;
                }
                *param_4 = *(long *)(lVar2 + 0x100);
                return uVar3;
              }
            }
            if ((*(byte *)(lVar6 + 0x200 + lVar8 * 4) & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined8 *)(lVar2 + 0x180) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 0;
              return uVar3;
            }
            if (*(undefined1 **)(lVar2 + 0x100) != (undefined1 *)0x0) {
              **(undefined1 **)(lVar2 + 0x100) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 1;
              return uVar3;
            }
            return uVar3;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar9 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar9;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar9);
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_last_error(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 900);
    iVar5 = *(int *)(lVar4 + 0x380);
    if (iVar6 != iVar5) {
      do {
        lVar7 = (long)iVar5;
        pbVar1 = (byte *)(lVar4 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar3 = (iVar6 + 1) % 0x10;
          lVar8 = (long)iVar3;
          pbVar1 = (byte *)(lVar4 + lVar8 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar6 == iVar5) {
              return 0;
            }
            return *(ulong *)(lVar4 + 0x80 + lVar7 * 8);
          }
          *(int *)(lVar4 + 900) = iVar3;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar4 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar8 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar4 + lVar8 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar5 = *(int *)(lVar4 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar4 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar7 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar4 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar5 = *(int *)(lVar4 + 0x380) + -1;
          if (*(int *)(lVar4 + 0x380) < 1) {
            iVar5 = 0xf;
          }
          *(int *)(lVar4 + 0x380) = iVar5;
        }
        iVar6 = *(int *)(lVar4 + 900);
      } while (iVar6 != iVar5);
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_error(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    iVar7 = *(int *)(lVar4 + 900);
    iVar6 = *(int *)(lVar4 + 0x380);
    if (iVar7 != iVar6) {
      do {
        lVar5 = (long)iVar6;
        pbVar1 = (byte *)(lVar4 + lVar5 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar3 = (iVar7 + 1) % 0x10;
          lVar5 = (long)iVar3;
          pbVar1 = (byte *)(lVar4 + lVar5 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar7 == iVar6) {
              return 0;
            }
            return *(ulong *)(lVar4 + 0x80 + lVar5 * 8);
          }
          *(int *)(lVar4 + 900) = iVar3;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
            *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar5 = lVar4 + lVar5 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar5 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar5 + 0x240));
          *(undefined8 *)(lVar5 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar5 + 0x300));
          *(undefined8 *)(lVar5 + 0x300) = 0;
          iVar6 = *(int *)(lVar4 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
            *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar5 = lVar4 + lVar5 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar5 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar5 + 0x240));
          *(undefined8 *)(lVar5 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar5 + 0x300));
          *(undefined8 *)(lVar5 + 0x300) = 0;
          iVar6 = *(int *)(lVar4 + 0x380) + -1;
          if (*(int *)(lVar4 + 0x380) < 1) {
            iVar6 = 0xf;
          }
          *(int *)(lVar4 + 0x380) = iVar6;
        }
        iVar7 = *(int *)(lVar4 + 900);
      } while (iVar7 != iVar6);
    }
  }
  return 0;
}



undefined8 ERR_peek_last_error_func(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar9 = *(int *)(lVar6 + 900);
    iVar7 = *(int *)(lVar6 + 0x380);
    if (iVar7 != iVar9) {
      do {
        lVar10 = (long)iVar7;
        pbVar1 = (byte *)(lVar6 + lVar10 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar9 + 1) % 0x10;
          lVar11 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar11 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar7 == iVar9) {
              return 0;
            }
            uVar2 = *(undefined8 *)(lVar6 + 0x80 + lVar10 * 8);
            if (param_1 != (undefined8 *)0x0) {
              puVar3 = *(undefined **)(lVar6 + 0x300 + lVar10 * 8);
              puVar8 = &_LC6;
              if (puVar3 != (undefined *)0x0) {
                puVar8 = puVar3;
              }
              *param_1 = puVar8;
            }
            return uVar2;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar11 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar10 = lVar6 + lVar11 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar10 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar10 + 0x240));
          *(undefined8 *)(lVar10 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar10 + 0x300));
          *(undefined8 *)(lVar10 + 0x300) = 0;
          iVar7 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar10 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar10 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar10 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar10 = lVar6 + lVar10 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar10 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar10 + 0x240));
          *(undefined8 *)(lVar10 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar10 + 0x300));
          *(undefined8 *)(lVar10 + 0x300) = 0;
          iVar7 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar7;
        }
        iVar9 = *(int *)(lVar6 + 900);
      } while (iVar9 != iVar7);
    }
  }
  return 0;
}



undefined8 ERR_peek_error_func(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar8 = *(int *)(lVar6 + 0x380);
    if (iVar8 != iVar10) {
      do {
        lVar7 = (long)iVar8;
        pbVar1 = (byte *)(lVar6 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar7 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar7 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar8) {
              return 0;
            }
            uVar2 = *(undefined8 *)(lVar6 + 0x80 + lVar7 * 8);
            if (param_1 != (undefined8 *)0x0) {
              puVar3 = *(undefined **)(lVar6 + 0x300 + lVar7 * 8);
              puVar9 = &_LC6;
              if (puVar3 != (undefined *)0x0) {
                puVar9 = puVar3;
              }
              *param_1 = puVar9;
            }
            return uVar2;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar8 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar8;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar8);
    }
  }
  return 0;
}



ulong ERR_peek_last_error_line(char **file,int *line)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar7 = *(int *)(lVar6 + 0x380);
    if (iVar7 != iVar10) {
      do {
        lVar9 = (long)iVar7;
        pbVar1 = (byte *)(lVar6 + lVar9 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar11 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar11 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar7 == iVar10) {
              return 0;
            }
            uVar2 = *(ulong *)(lVar6 + 0x80 + lVar9 * 8);
            if (file != (char **)0x0) {
              pcVar3 = *(char **)(lVar6 + 0x240 + lVar9 * 8);
              pcVar8 = "";
              if (pcVar3 != (char *)0x0) {
                pcVar8 = pcVar3;
              }
              *file = pcVar8;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar6 + 0x2c0 + lVar9 * 4);
            }
            return uVar2;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar11 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar6 + lVar11 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar9 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar6 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar7;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar7);
    }
  }
  return 0;
}



undefined8 ERR_peek_last_error_data(long *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar7 = *(int *)(lVar5 + 0x380);
    if (iVar7 != iVar10) {
      do {
        lVar9 = (long)iVar7;
        pbVar1 = (byte *)(lVar5 + lVar9 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar11 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar11 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar7) {
              return 0;
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar9 * 8);
            if (param_2 == (undefined4 *)0x0) {
              if (param_1 != (long *)0x0) {
                puVar2 = *(undefined **)(lVar5 + 0x100 + lVar9 * 8);
                puVar8 = &_LC6;
                if (puVar2 != (undefined *)0x0) {
                  puVar8 = puVar2;
                }
                *param_1 = (long)puVar8;
                return uVar6;
              }
            }
            else {
              *param_2 = *(undefined4 *)(lVar5 + 0x200 + lVar9 * 4);
              if (param_1 != (long *)0x0) {
                lVar5 = *(long *)(lVar5 + 0x100 + lVar9 * 8);
                if (lVar5 == 0) {
                  *param_1 = (long)&_LC6;
                  *param_2 = 0;
                }
                else {
                  *param_1 = lVar5;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar11 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar11 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar9 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar7;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar7);
    }
  }
  return 0;
}



ulong ERR_peek_error_line(char **file,int *line)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar8 = *(int *)(lVar6 + 0x380);
    if (iVar8 != iVar10) {
      do {
        lVar7 = (long)iVar8;
        pbVar1 = (byte *)(lVar6 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar7 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar7 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar8) {
              return 0;
            }
            uVar2 = *(ulong *)(lVar6 + 0x80 + lVar7 * 8);
            if (file != (char **)0x0) {
              pcVar3 = *(char **)(lVar6 + 0x240 + lVar7 * 8);
              pcVar9 = "";
              if (pcVar3 != (char *)0x0) {
                pcVar9 = pcVar3;
              }
              *file = pcVar9;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar6 + 0x2c0 + lVar7 * 4);
            }
            return uVar2;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar8 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar8;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar8);
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_get_error(void)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar9 = *(int *)(lVar6 + 900);
    iVar8 = *(int *)(lVar6 + 0x380);
    if (iVar8 != iVar9) {
      do {
        lVar7 = (long)iVar8;
        pbVar1 = (byte *)(lVar6 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar9 + 1) % 0x10;
          lVar7 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar7 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar9 == iVar8) {
              return 0;
            }
            lVar2 = lVar6 + lVar7 * 8;
            uVar3 = *(ulong *)(lVar2 + 0x80);
            *(int *)(lVar6 + 900) = iVar5;
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if ((*(byte *)(lVar6 + 0x200 + lVar7 * 4) & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined8 *)(lVar2 + 0x180) = 0;
              *(undefined4 *)(lVar6 + (lVar7 + 0x80) * 4) = 0;
            }
            else if (*(undefined1 **)(lVar2 + 0x100) != (undefined1 *)0x0) {
              **(undefined1 **)(lVar2 + 0x100) = 0;
              *(undefined4 *)(lVar6 + (lVar7 + 0x80) * 4) = 1;
              return uVar3;
            }
            return uVar3;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar7 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar6 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar8 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar8;
        }
        iVar9 = *(int *)(lVar6 + 900);
      } while (iVar9 != iVar8);
    }
  }
  return 0;
}



undefined8 ERR_peek_error_data(long *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar8 = *(int *)(lVar5 + 0x380);
    if (iVar8 != iVar10) {
      do {
        lVar7 = (long)iVar8;
        pbVar1 = (byte *)(lVar5 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar7 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar7 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar8) {
              return 0;
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar7 * 8);
            if (param_2 == (undefined4 *)0x0) {
              if (param_1 != (long *)0x0) {
                puVar2 = *(undefined **)(lVar5 + 0x100 + lVar7 * 8);
                puVar9 = &_LC6;
                if (puVar2 != (undefined *)0x0) {
                  puVar9 = puVar2;
                }
                *param_1 = (long)puVar9;
                return uVar6;
              }
            }
            else {
              *param_2 = *(undefined4 *)(lVar5 + 0x200 + lVar7 * 4);
              if (param_1 != (long *)0x0) {
                lVar5 = *(long *)(lVar5 + 0x100 + lVar7 * 8);
                if (lVar5 == 0) {
                  *param_1 = (long)&_LC6;
                  *param_2 = 0;
                }
                else {
                  *param_1 = lVar5;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar7 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar5 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar7 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar5 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar8 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar8;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar8);
    }
  }
  return 0;
}



ulong ERR_peek_last_error_line_data(char **file,int *line,char **data,int *flags)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar7 = *(int *)(lVar5 + 0x380);
    if (iVar7 != iVar10) {
      do {
        lVar9 = (long)iVar7;
        pbVar1 = (byte *)(lVar5 + lVar9 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar11 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar11 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar7) {
              return 0;
            }
            uVar6 = *(ulong *)(lVar5 + 0x80 + lVar9 * 8);
            if (file != (char **)0x0) {
              pcVar2 = *(char **)(lVar5 + 0x240 + lVar9 * 8);
              pcVar8 = "";
              if (pcVar2 != (char *)0x0) {
                pcVar8 = pcVar2;
              }
              *file = pcVar8;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar5 + 0x2c0 + lVar9 * 4);
            }
            if (flags == (int *)0x0) {
              if (data != (char **)0x0) {
                pcVar2 = *(char **)(lVar5 + 0x100 + lVar9 * 8);
                pcVar8 = "";
                if (pcVar2 != (char *)0x0) {
                  pcVar8 = pcVar2;
                }
                *data = pcVar8;
                return uVar6;
              }
            }
            else {
              *flags = *(int *)(lVar5 + 0x200 + lVar9 * 4);
              if (data != (char **)0x0) {
                pcVar2 = *(char **)(lVar5 + 0x100 + lVar9 * 8);
                if (pcVar2 == (char *)0x0) {
                  *data = "";
                  *flags = 0;
                }
                else {
                  *data = pcVar2;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar11 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar11 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar9 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar7;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar7);
    }
  }
  return 0;
}



ulong ERR_get_error_line(char **file,int *line)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar9 = *(int *)(lVar6 + 0x380);
    if (iVar9 != iVar10) {
      do {
        lVar8 = (long)iVar9;
        pbVar1 = (byte *)(lVar6 + lVar8 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar8 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar8 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar9) {
              return 0;
            }
            lVar2 = lVar6 + lVar8 * 8;
            uVar3 = *(ulong *)(lVar2 + 0x80);
            *(int *)(lVar6 + 900) = iVar5;
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (file != (char **)0x0) {
              pcVar7 = "";
              if (*(char **)(lVar2 + 0x240) != (char *)0x0) {
                pcVar7 = *(char **)(lVar2 + 0x240);
              }
              *file = pcVar7;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar6 + 0x2c0 + lVar8 * 4);
            }
            if ((*(byte *)(lVar6 + 0x200 + lVar8 * 4) & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined8 *)(lVar2 + 0x180) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 0;
            }
            else if (*(undefined1 **)(lVar2 + 0x100) != (undefined1 *)0x0) {
              **(undefined1 **)(lVar2 + 0x100) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 1;
              return uVar3;
            }
            return uVar3;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar9 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar9;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar9);
    }
  }
  return 0;
}



ulong ERR_peek_error_line_data(char **file,int *line,char **data,int *flags)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar8 = *(int *)(lVar5 + 0x380);
    if (iVar8 != iVar10) {
      do {
        lVar7 = (long)iVar8;
        pbVar1 = (byte *)(lVar5 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar7 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar7 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar8) {
              return 0;
            }
            uVar6 = *(ulong *)(lVar5 + 0x80 + lVar7 * 8);
            if (file != (char **)0x0) {
              pcVar2 = *(char **)(lVar5 + 0x240 + lVar7 * 8);
              pcVar9 = "";
              if (pcVar2 != (char *)0x0) {
                pcVar9 = pcVar2;
              }
              *file = pcVar9;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar5 + 0x2c0 + lVar7 * 4);
            }
            if (flags == (int *)0x0) {
              if (data != (char **)0x0) {
                pcVar2 = *(char **)(lVar5 + 0x100 + lVar7 * 8);
                pcVar9 = "";
                if (pcVar2 != (char *)0x0) {
                  pcVar9 = pcVar2;
                }
                *data = pcVar9;
                return uVar6;
              }
            }
            else {
              *flags = *(int *)(lVar5 + 0x200 + lVar7 * 4);
              if (data != (char **)0x0) {
                pcVar2 = *(char **)(lVar5 + 0x100 + lVar7 * 8);
                if (pcVar2 == (char *)0x0) {
                  *data = "";
                  *flags = 0;
                }
                else {
                  *data = pcVar2;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar7 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar5 + lVar7 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar7 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar5 + lVar7 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar7 + 0x240));
          *(undefined8 *)(lVar7 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar7 + 0x300));
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar8 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar8 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar8;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar8);
    }
  }
  return 0;
}



undefined8
ERR_peek_last_error_all
          (undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,long *param_4,
          undefined4 *param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar7 = *(int *)(lVar5 + 0x380);
    if (iVar7 != iVar10) {
      do {
        lVar9 = (long)iVar7;
        pbVar1 = (byte *)(lVar5 + lVar9 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar11 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar11 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar7) {
              return 0;
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar9 * 8);
            if (param_1 != (undefined8 *)0x0) {
              puVar2 = *(undefined **)(lVar5 + 0x240 + lVar9 * 8);
              puVar8 = &_LC6;
              if (puVar2 != (undefined *)0x0) {
                puVar8 = puVar2;
              }
              *param_1 = puVar8;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(lVar5 + 0x2c0 + lVar9 * 4);
            }
            if (param_3 != (undefined8 *)0x0) {
              puVar2 = *(undefined **)(lVar5 + 0x300 + lVar9 * 8);
              puVar8 = &_LC6;
              if (puVar2 != (undefined *)0x0) {
                puVar8 = puVar2;
              }
              *param_3 = puVar8;
            }
            if (param_5 == (undefined4 *)0x0) {
              if (param_4 != (long *)0x0) {
                puVar2 = *(undefined **)(lVar5 + 0x100 + lVar9 * 8);
                puVar8 = &_LC6;
                if (puVar2 != (undefined *)0x0) {
                  puVar8 = puVar2;
                }
                *param_4 = (long)puVar8;
                return uVar6;
              }
            }
            else {
              *param_5 = *(undefined4 *)(lVar5 + 0x200 + lVar9 * 4);
              if (param_4 != (long *)0x0) {
                lVar5 = *(long *)(lVar5 + 0x100 + lVar9 * 8);
                if (lVar5 == 0) {
                  *param_4 = (long)&_LC6;
                  *param_5 = 0;
                }
                else {
                  *param_4 = lVar5;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar11 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar11 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar9 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar7;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar7);
    }
  }
  return 0;
}



undefined8
ERR_peek_error_all(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,long *param_4,
                  undefined4 *param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 900);
    iVar7 = *(int *)(lVar5 + 0x380);
    if (iVar7 != iVar10) {
      do {
        lVar9 = (long)iVar7;
        pbVar1 = (byte *)(lVar5 + lVar9 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar10 + 1) % 0x10;
          lVar9 = (long)iVar4;
          pbVar1 = (byte *)(lVar5 + lVar9 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar7) {
              return 0;
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar9 * 8);
            if (param_1 != (undefined8 *)0x0) {
              puVar2 = *(undefined **)(lVar5 + 0x240 + lVar9 * 8);
              puVar8 = &_LC6;
              if (puVar2 != (undefined *)0x0) {
                puVar8 = puVar2;
              }
              *param_1 = puVar8;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(lVar5 + 0x2c0 + lVar9 * 4);
            }
            if (param_3 != (undefined8 *)0x0) {
              puVar2 = *(undefined **)(lVar5 + 0x300 + lVar9 * 8);
              puVar8 = &_LC6;
              if (puVar2 != (undefined *)0x0) {
                puVar8 = puVar2;
              }
              *param_3 = puVar8;
            }
            if (param_5 == (undefined4 *)0x0) {
              if (param_4 != (long *)0x0) {
                puVar2 = *(undefined **)(lVar5 + 0x100 + lVar9 * 8);
                puVar8 = &_LC6;
                if (puVar2 != (undefined *)0x0) {
                  puVar8 = puVar2;
                }
                *param_4 = (long)puVar8;
                return uVar6;
              }
            }
            else {
              *param_5 = *(undefined4 *)(lVar5 + 0x200 + lVar9 * 4);
              if (param_4 != (long *)0x0) {
                lVar5 = *(long *)(lVar5 + 0x100 + lVar9 * 8);
                if (lVar5 == 0) {
                  *param_4 = (long)&_LC6;
                  *param_5 = 0;
                }
                else {
                  *param_4 = lVar5;
                }
              }
            }
            return uVar6;
          }
          *(int *)(lVar5 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar9 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar3 = *(undefined1 **)(lVar5 + 0x100 + lVar9 * 8);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar9 = lVar5 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar9 + 0x240));
          *(undefined8 *)(lVar9 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar9 + 0x300));
          *(undefined8 *)(lVar9 + 0x300) = 0;
          iVar7 = *(int *)(lVar5 + 0x380) + -1;
          if (*(int *)(lVar5 + 0x380) < 1) {
            iVar7 = 0xf;
          }
          *(int *)(lVar5 + 0x380) = iVar7;
        }
        iVar10 = *(int *)(lVar5 + 900);
      } while (iVar10 != iVar7);
    }
  }
  return 0;
}



ulong ERR_get_error_line_data(char **file,int *line,char **data,int *flags)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = ossl_err_get_state_int();
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 900);
    iVar9 = *(int *)(lVar6 + 0x380);
    if (iVar9 != iVar10) {
      do {
        lVar8 = (long)iVar9;
        pbVar1 = (byte *)(lVar6 + lVar8 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar5 = (iVar10 + 1) % 0x10;
          lVar8 = (long)iVar5;
          pbVar1 = (byte *)(lVar6 + lVar8 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar10 == iVar9) {
              return 0;
            }
            lVar2 = lVar6 + lVar8 * 8;
            uVar3 = *(ulong *)(lVar2 + 0x80);
            *(int *)(lVar6 + 900) = iVar5;
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (file != (char **)0x0) {
              pcVar7 = "";
              if (*(char **)(lVar2 + 0x240) != (char *)0x0) {
                pcVar7 = *(char **)(lVar2 + 0x240);
              }
              *file = pcVar7;
            }
            if (line != (int *)0x0) {
              *line = *(int *)(lVar6 + 0x2c0 + lVar8 * 4);
            }
            if (flags == (int *)0x0) {
              if (data != (char **)0x0) {
                pcVar7 = "";
                if (*(char **)(lVar2 + 0x100) != (char *)0x0) {
                  pcVar7 = *(char **)(lVar2 + 0x100);
                }
                *data = pcVar7;
                return uVar3;
              }
            }
            else {
              *flags = *(int *)(lVar6 + 0x200 + lVar8 * 4);
              if (data != (char **)0x0) {
                if (*(char **)(lVar2 + 0x100) == (char *)0x0) {
                  *data = "";
                  *flags = 0;
                  return uVar3;
                }
                *data = *(char **)(lVar2 + 0x100);
                return uVar3;
              }
            }
            if ((*(byte *)(lVar6 + 0x200 + lVar8 * 4) & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined8 *)(lVar2 + 0x180) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 0;
              return uVar3;
            }
            if (*(undefined1 **)(lVar2 + 0x100) != (undefined1 *)0x0) {
              **(undefined1 **)(lVar2 + 0x100) = 0;
              *(undefined4 *)(lVar6 + (lVar8 + 0x80) * 4) = 1;
              return uVar3;
            }
            return uVar3;
          }
          *(int *)(lVar6 + 900) = iVar5;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar6 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar8 = lVar6 + lVar8 * 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          *(undefined8 *)(lVar8 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar8 + 0x240));
          *(undefined8 *)(lVar8 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar8 + 0x300));
          *(undefined8 *)(lVar8 + 0x300) = 0;
          iVar9 = *(int *)(lVar6 + 0x380) + -1;
          if (*(int *)(lVar6 + 0x380) < 1) {
            iVar9 = 0xf;
          }
          *(int *)(lVar6 + 0x380) = iVar9;
        }
        iVar10 = *(int *)(lVar6 + 900);
      } while (iVar10 != iVar9);
    }
  }
  return 0;
}



void ERR_get_state(void)

{
  ossl_err_get_state_int();
  return;
}



undefined8 err_shelve_state(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = OPENSSL_init_crypto(0x40000,0);
  if (iVar2 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&err_init,err_do_init_ossl_);
    if ((iVar2 != 0) && (err_do_init_ossl_ret_ != 0)) {
      uVar4 = CRYPTO_THREAD_get_local(&err_thread_local);
      *param_1 = uVar4;
      iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,0xffffffffffffffff);
      if (iVar2 != 0) {
        *piVar3 = iVar1;
        return 1;
      }
    }
  }
  return 0;
}



void err_unshelve_state(long param_1)

{
  if (param_1 != -1) {
    CRYPTO_THREAD_set_local(&err_thread_local,param_1);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_get_next_error_library(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if ((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) {
    iVar2 = CRYPTO_THREAD_write_lock(err_string_lock);
    iVar1 = int_err_library_number;
    if (iVar2 != 0) {
      int_err_library_number = int_err_library_number + 1;
      CRYPTO_THREAD_unlock(err_string_lock);
      return iVar1;
    }
  }
  return 0;
}



void ERR_set_error_data(char *data,int flags)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  sVar1 = strlen(data);
  lVar2 = ossl_err_get_state_int();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = (long)*(int *)(lVar2 + 0x380);
  lVar5 = lVar4 + 0x80;
  if ((*(byte *)(lVar2 + 0x200 + lVar4 * 4) & 1) == 0) {
    lVar3 = lVar4 + 0x20;
    lVar4 = lVar4 + 0x30;
    *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
    *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
    *(undefined4 *)(lVar2 + lVar5 * 4) = 0;
  }
  else {
    lVar4 = lVar2 + lVar4 * 8;
    CRYPTO_free(*(void **)(lVar4 + 0x100));
    *(undefined8 *)(lVar4 + 0x100) = 0;
    *(undefined8 *)(lVar4 + 0x180) = 0;
    lVar4 = (long)*(int *)(lVar2 + 0x380);
    *(undefined4 *)(lVar2 + lVar5 * 4) = 0;
    lVar5 = lVar4 + 0x80;
    lVar3 = lVar4 + 0x20;
    if ((*(byte *)(lVar2 + 0x200 + lVar4 * 4) & 1) != 0) {
      CRYPTO_free(*(void **)(lVar2 + lVar3 * 8));
      *(char **)(lVar2 + lVar3 * 8) = data;
      *(size_t *)(lVar2 + (lVar4 + 0x30) * 8) = sVar1 + 1;
      *(int *)(lVar2 + lVar5 * 4) = flags;
      return;
    }
    lVar4 = lVar4 + 0x30;
  }
  *(char **)(lVar2 + lVar3 * 8) = data;
  *(size_t *)(lVar2 + lVar4 * 8) = sVar1 + 1;
  *(int *)(lVar2 + lVar5 * 4) = flags;
  return;
}



void ERR_add_error_vdata(int num,va_list args)

{
  long *plVar1;
  long lVar2;
  size_t sVar3;
  char *__s;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined1 *ptr;
  long lVar8;
  int num_00;
  long lVar9;
  char *__s_00;
  char *addr;
  bool bVar10;
  long local_40;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 == 0) {
    return;
  }
  lVar8 = (long)*(int *)(lVar2 + 0x380) + 0x80;
  if ((~*(uint *)(lVar2 + lVar8 * 4) & 3) == 0) {
    lVar9 = lVar2 + (long)*(int *)(lVar2 + 0x380) * 8;
    __s = *(char **)(lVar9 + 0x100);
    if (__s == (char *)0x0) goto LAB_00103e30;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    num_00 = *(int *)(lVar9 + 0x180);
    *(undefined4 *)(lVar2 + lVar8 * 4) = 0;
  }
  else {
LAB_00103e30:
    __s = (char *)CRYPTO_malloc(0x51,"crypto/err/err.c",0x353);
    if (__s == (char *)0x0) {
      return;
    }
    *__s = '\0';
    num_00 = 0x51;
  }
  sVar3 = strlen(__s);
  uVar5 = sVar3 & 0xffffffff;
  iVar6 = num + -1;
  addr = __s;
  if (iVar6 < 0) {
    local_40 = (long)num_00;
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar4 = *args;
      if (uVar4 < 0x30) {
        *(uint *)args = uVar4 + 8;
        __s_00 = *(char **)((ulong)uVar4 + *(long *)((long)args + 0x10));
        if (__s_00 == (char *)0x0) goto LAB_00103d90;
LAB_00103d1e:
        sVar3 = strlen(__s_00);
        uVar4 = (int)uVar5 + (int)sVar3;
      }
      else {
        plVar1 = *(long **)((long)args + 8);
        *(long **)((long)args + 8) = plVar1 + 1;
        __s_00 = (char *)*plVar1;
        if (__s_00 != (char *)0x0) goto LAB_00103d1e;
LAB_00103d90:
        __s_00 = "<NULL>";
        uVar4 = (int)uVar5 + 6;
      }
      uVar5 = (ulong)uVar4;
      __s = addr;
      if (num_00 <= (int)uVar4) {
        num_00 = uVar4 + 0x14;
        __s = (char *)CRYPTO_realloc(addr,num_00,"crypto/err/err.c",0x363);
        if (__s == (char *)0x0) goto LAB_00103e65;
      }
      local_40 = (long)num_00;
      OPENSSL_strlcat(__s,__s_00,local_40);
      bVar10 = iVar6 != 0;
      iVar6 = iVar6 + -1;
      addr = __s;
    } while (bVar10);
  }
  lVar2 = ossl_err_get_state_int();
  addr = __s;
  if (lVar2 == 0) {
LAB_00103e65:
    CRYPTO_free(addr);
    return;
  }
  lVar7 = (long)*(int *)(lVar2 + 0x380);
  lVar9 = lVar7 + 0x80;
  lVar8 = lVar7 + 0x20;
  if ((*(byte *)(lVar2 + 0x200 + lVar7 * 4) & 1) == 0) {
    lVar7 = lVar7 + 0x30;
    *(undefined8 *)(lVar2 + lVar8 * 8) = 0;
    *(undefined8 *)(lVar2 + lVar7 * 8) = 0;
    *(undefined4 *)(lVar2 + lVar9 * 4) = 0;
    goto LAB_00103e05;
  }
  ptr = *(undefined1 **)(lVar2 + lVar8 * 8);
  if (ptr == (undefined1 *)0x0) {
LAB_00103ebc:
    CRYPTO_free(ptr);
  }
  else {
    *ptr = 0;
    lVar7 = (long)*(int *)(lVar2 + 0x380);
    *(undefined4 *)(lVar2 + lVar9 * 4) = 1;
    lVar8 = lVar7 + 0x20;
    lVar9 = lVar7 + 0x80;
    if ((*(byte *)(lVar2 + 0x200 + lVar7 * 4) & 1) != 0) {
      ptr = *(undefined1 **)(lVar2 + lVar8 * 8);
      goto LAB_00103ebc;
    }
  }
  lVar7 = lVar7 + 0x30;
LAB_00103e05:
  *(char **)(lVar2 + lVar8 * 8) = __s;
  *(long *)(lVar2 + lVar7 * 8) = local_40;
  *(undefined4 *)(lVar2 + lVar9 * 4) = 3;
  return;
}



void ERR_add_error_data(int num,...)

{
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 8;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  ERR_add_error_vdata(num,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void err_clear_last_constant_time(uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 != 0) {
    puVar1 = (uint *)(lVar2 + (long)*(int *)(lVar2 + 0x380) * 4);
    *puVar1 = *puVar1 | ~((int)(~param_1 & param_1 - 1) >> 0x1f) & 2U;
  }
  return;
}


