
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



void err_load_strings_isra_0(long *param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(err_string_lock);
  if (iVar1 == 0) {
    return;
  }
  for (; *param_1 != 0; param_1 = param_1 + 2) {
    OPENSSL_LH_insert(int_error_hash,param_1);
  }
  CRYPTO_THREAD_unlock(err_string_lock);
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
  ulong uVar1;
  
  uVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((int)uVar1 != 0) &&
     (uVar1 = (ulong)do_err_strings_init_ossl_ret_, do_err_strings_init_ossl_ret_ != 0)) {
    err_load_strings_isra_0(ERR_str_libraries);
    err_load_strings_isra_0(ERR_str_reasons);
    return 1;
  }
  return uVar1;
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
    err_load_strings_isra_0(str);
  }
  return;
}



undefined8 ERR_load_strings_const(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_err_load_ERR_strings();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  err_load_strings_isra_0(param_1);
  return 1;
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
        goto LAB_001005b2;
      }
    }
  }
  pcVar3 = (char *)0x0;
LAB_001005b2:
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
      if (lVar2 == 0) goto LAB_00100680;
LAB_00100678:
      pcVar3 = *(char **)(lVar2 + 8);
      goto LAB_001006c2;
    }
LAB_00100680:
    local_38[0] = (ulong)((uint)e & 0x7fffff);
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar2 = OPENSSL_LH_retrieve(int_error_hash,local_38);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar2 != 0) goto LAB_00100678;
    }
  }
  pcVar3 = (char *)0x0;
LAB_001006c2:
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
    if (buf_00 != (char *)0x0) goto LAB_0010075a;
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
    if (iVar2 != 0) goto LAB_0010075a;
  }
  buf_00 = local_148;
  BIO_snprintf(buf_00,0x100,"reason(%lu)",local_198 & 0xffffffffff83ffff);
LAB_0010075a:
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
LAB_001009d7:
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
          goto LAB_001009d7;
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
get_error_values(int param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar10 = *(int *)(lVar3 + 900);
    iVar5 = *(int *)(lVar3 + 0x380);
    if (iVar5 != iVar10) {
      do {
        lVar11 = (long)iVar5;
        pbVar1 = (byte *)(lVar3 + lVar11 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar6 = (iVar10 + 1) % 0x10;
          lVar8 = (long)iVar6;
          pbVar1 = (byte *)(lVar3 + lVar8 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (iVar5 == iVar10) {
              return 0;
            }
            if (param_1 == 2) {
              uVar7 = *(undefined8 *)(lVar3 + 0x80 + lVar11 * 8);
            }
            else {
              uVar7 = *(undefined8 *)(lVar3 + (lVar8 + 0x10) * 8);
              iVar5 = iVar6;
              if (param_1 == 0) {
                *(int *)(lVar3 + 900) = iVar6;
                *(undefined8 *)(lVar3 + (lVar8 + 0x10) * 8) = 0;
              }
            }
            if (param_2 != (undefined8 *)0x0) {
              puVar4 = *(undefined **)(lVar3 + 0x240 + (long)iVar5 * 8);
              puVar9 = &_LC6;
              if (puVar4 != (undefined *)0x0) {
                puVar9 = puVar4;
              }
              *param_2 = puVar9;
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = *(undefined4 *)(lVar3 + 0x2c0 + (long)iVar5 * 4);
            }
            if (param_4 != (undefined8 *)0x0) {
              puVar4 = *(undefined **)(lVar3 + 0x300 + (long)iVar5 * 8);
              puVar9 = &_LC6;
              if (puVar4 != (undefined *)0x0) {
                puVar9 = puVar4;
              }
              *param_4 = puVar9;
            }
            if (param_6 == (undefined4 *)0x0) {
              if (param_5 == (undefined8 *)0x0) goto LAB_00100de8;
              puVar9 = *(undefined **)(lVar3 + 0x100 + (long)iVar5 * 8);
              puVar4 = &_LC6;
              if (puVar9 != (undefined *)0x0) {
                puVar4 = puVar9;
              }
            }
            else {
              *param_6 = *(undefined4 *)(lVar3 + 0x200 + (long)iVar5 * 4);
              if (param_5 == (undefined8 *)0x0) {
LAB_00100de8:
                if (param_1 != 0) {
                  return uVar7;
                }
                lVar11 = (long)iVar5;
                if ((*(byte *)(lVar3 + 0x200 + lVar11 * 4) & 1) == 0) {
                  *(undefined8 *)(lVar3 + 0x100 + lVar11 * 8) = 0;
                  *(undefined8 *)(lVar3 + 0x180 + lVar11 * 8) = 0;
                  *(undefined4 *)(lVar3 + (lVar11 + 0x80) * 4) = 0;
                  return uVar7;
                }
                puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar11 * 8);
                if (puVar2 != (undefined1 *)0x0) {
                  *puVar2 = 0;
                  *(undefined4 *)(lVar3 + (lVar11 + 0x80) * 4) = 1;
                  return uVar7;
                }
                return uVar7;
              }
              puVar4 = *(undefined **)(lVar3 + 0x100 + (long)iVar5 * 8);
              if (puVar4 == (undefined *)0x0) {
                *param_5 = &_LC6;
                *param_6 = 0;
                return uVar7;
              }
            }
            *param_5 = puVar4;
            return uVar7;
          }
          *(int *)(lVar3 + 900) = iVar6;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x100 + lVar8 * 8) = 0;
            *(undefined8 *)(lVar3 + 0x180 + lVar8 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar8 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar11 = lVar3 + lVar8 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar11 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar11 + 0x240));
          *(undefined8 *)(lVar11 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar11 + 0x300));
          *(undefined8 *)(lVar11 + 0x300) = 0;
          iVar5 = *(int *)(lVar3 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x100 + lVar11 * 8) = 0;
            *(undefined8 *)(lVar3 + 0x180 + lVar11 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar11 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar11 = lVar3 + lVar11 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar11 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          CRYPTO_free(*(void **)(lVar11 + 0x240));
          *(undefined8 *)(lVar11 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar11 + 0x300));
          *(undefined8 *)(lVar11 + 0x300) = 0;
          iVar5 = *(int *)(lVar3 + 0x380) + -1;
          if (*(int *)(lVar3 + 0x380) < 1) {
            iVar5 = 0xf;
          }
          *(int *)(lVar3 + 0x380) = iVar5;
        }
        iVar10 = *(int *)(lVar3 + 900);
      } while (iVar10 != iVar5);
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_get_error(void)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,0,0,0,0,0);
  return uVar1;
}



void ERR_get_error_all(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  get_error_values(0,param_1,param_2,param_3,param_4,param_5);
  return;
}



ulong ERR_get_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,file,line,0,0,0);
  return uVar1;
}



ulong ERR_get_error_line_data(char **file,int *line,char **data,int *flags)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,file,line,0,data,flags);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_error(void)

{
  ulong uVar1;
  
  uVar1 = get_error_values(1,0,0,0,0,0);
  return uVar1;
}



ulong ERR_peek_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(1,file,line,0,0,0);
  return uVar1;
}



void ERR_peek_error_func(undefined8 param_1)

{
  get_error_values(1,0,0,param_1,0,0);
  return;
}



void ERR_peek_error_data(undefined8 param_1,undefined8 param_2)

{
  get_error_values(1,0,0,0,param_1,param_2);
  return;
}



void ERR_peek_error_all(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  get_error_values(1,param_1,param_2,param_3,param_4,param_5);
  return;
}



ulong ERR_peek_error_line_data(char **file,int *line,char **data,int *flags)

{
  ulong uVar1;
  
  uVar1 = get_error_values(1,file,line,0,data,flags);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_last_error(void)

{
  ulong uVar1;
  
  uVar1 = get_error_values(2,0,0,0,0,0);
  return uVar1;
}



ulong ERR_peek_last_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(2,file,line,0,0,0);
  return uVar1;
}



void ERR_peek_last_error_func(undefined8 param_1)

{
  get_error_values(2,0,0,param_1,0,0);
  return;
}



void ERR_peek_last_error_data(undefined8 param_1,undefined8 param_2)

{
  get_error_values(2,0,0,0,param_1,param_2);
  return;
}



void ERR_peek_last_error_all
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  get_error_values(2,param_1,param_2,param_3,param_4,param_5);
  return;
}



ulong ERR_peek_last_error_line_data(char **file,int *line,char **data,int *flags)

{
  ulong uVar1;
  
  uVar1 = get_error_values(2,file,line,0,data,flags);
  return uVar1;
}



undefined8
err_set_error_data_int(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *ptr;
  long lVar5;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = (long)*(int *)(lVar2 + 0x380);
  lVar3 = lVar4 + 0x80;
  uVar1 = *(uint *)(lVar2 + lVar3 * 4) & 1;
  if (uVar1 == 0) {
    lVar5 = lVar4 + 0x20;
    lVar4 = lVar4 + 0x30;
    *(undefined8 *)(lVar2 + lVar5 * 8) = 0;
    *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
    *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
    goto LAB_00101267;
  }
  lVar5 = lVar2 + lVar4 * 8;
  ptr = *(undefined1 **)(lVar5 + 0x100);
  if (param_4 == 0) {
    lVar5 = lVar4 + 0x20;
    if (ptr != (undefined1 *)0x0) {
      *ptr = 0;
      goto LAB_00101203;
    }
  }
  else {
    CRYPTO_free(ptr);
    uVar1 = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(undefined8 *)(lVar5 + 0x180) = 0;
LAB_00101203:
    lVar4 = (long)*(int *)(lVar2 + 0x380);
    *(uint *)(lVar2 + lVar3 * 4) = uVar1;
    lVar5 = lVar4 + 0x20;
    lVar3 = lVar4 + 0x80;
    if ((*(byte *)(lVar2 + 0x200 + lVar4 * 4) & 1) == 0) {
      lVar4 = lVar4 + 0x30;
      goto LAB_00101267;
    }
    ptr = *(undefined1 **)(lVar2 + lVar5 * 8);
  }
  lVar4 = lVar4 + 0x30;
  CRYPTO_free(ptr);
LAB_00101267:
  *(undefined8 *)(lVar2 + lVar5 * 8) = param_1;
  *(undefined8 *)(lVar2 + lVar4 * 8) = param_2;
  *(undefined4 *)(lVar2 + lVar3 * 4) = param_3;
  return 1;
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
  
  sVar1 = strlen(data);
  err_set_error_data_int(data,sVar1 + 1,flags,1);
  return;
}



void ERR_add_error_vdata(int num,va_list args)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  char *__s;
  bool bVar11;
  char *local_40;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 == 0) {
    return;
  }
  lVar1 = (long)*(int *)(lVar5 + 0x380) + 0x80;
  if ((~*(uint *)(lVar5 + lVar1 * 4) & 3) == 0) {
    lVar2 = lVar5 + (long)*(int *)(lVar5 + 0x380) * 8;
    local_40 = *(char **)(lVar2 + 0x100);
    if (local_40 != (char *)0x0) {
      *(undefined8 *)(lVar2 + 0x100) = 0;
      iVar4 = *(int *)(lVar2 + 0x180);
      *(undefined4 *)(lVar5 + lVar1 * 4) = 0;
      goto LAB_001014c3;
    }
  }
  local_40 = (char *)CRYPTO_malloc(0x51,"crypto/err/err.c",0x353);
  if (local_40 == (char *)0x0) {
    return;
  }
  *local_40 = '\0';
  iVar4 = 0x51;
LAB_001014c3:
  sVar6 = strlen(local_40);
  uVar9 = sVar6 & 0xffffffff;
  iVar10 = num + -1;
  if (iVar10 < 0) {
    lVar5 = (long)iVar4;
  }
  else {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar8 = *args;
      if (uVar8 < 0x30) {
        *(uint *)args = uVar8 + 8;
        __s = *(char **)((ulong)uVar8 + *(long *)((long)args + 0x10));
        if (__s == (char *)0x0) goto LAB_00101567;
LAB_001014f6:
        sVar6 = strlen(__s);
        uVar8 = (int)uVar9 + (int)sVar6;
      }
      else {
        plVar3 = *(long **)((long)args + 8);
        *(long **)((long)args + 8) = plVar3 + 1;
        __s = (char *)*plVar3;
        if (__s != (char *)0x0) goto LAB_001014f6;
LAB_00101567:
        __s = "<NULL>";
        uVar8 = (int)uVar9 + 6;
      }
      uVar9 = (ulong)uVar8;
      pcVar7 = local_40;
      if (iVar4 <= (int)uVar8) {
        iVar4 = uVar8 + 0x14;
        pcVar7 = (char *)CRYPTO_realloc(local_40,iVar4,"crypto/err/err.c",0x363);
        if (pcVar7 == (char *)0x0) goto LAB_001015e5;
      }
      local_40 = pcVar7;
      lVar5 = (long)iVar4;
      OPENSSL_strlcat(local_40,__s,lVar5);
      bVar11 = iVar10 != 0;
      iVar10 = iVar10 + -1;
    } while (bVar11);
  }
  iVar4 = err_set_error_data_int(local_40,lVar5,3,0);
  if (iVar4 != 0) {
    return;
  }
LAB_001015e5:
  CRYPTO_free(local_40);
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


