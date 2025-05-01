
void ossl_init_no_register_atexit_ossl_(void)

{
  ossl_init_register_atexit_ossl_ret_ = 1;
  return;
}



void ossl_init_load_crypto_nodelete_ossl_(void)

{
  ossl_init_load_crypto_nodelete_ossl_ret_ = 1;
  return;
}



void ossl_init_no_load_crypto_strings_ossl_(void)

{
  ossl_init_load_crypto_strings_ossl_ret_ = 1;
  return;
}



void ossl_init_no_load_ssl_strings_ossl_(void)

{
  ossl_init_load_ssl_strings_ossl_ret_ = 1;
  return;
}



void ossl_init_no_add_all_ciphers_ossl_(void)

{
  ossl_init_add_all_ciphers_ossl_ret_ = 1;
  return;
}



void ossl_init_no_add_all_digests_ossl_(void)

{
  ossl_init_add_all_digests_ossl_ret_ = 1;
  return;
}



void ossl_init_engine_dynamic_ossl_(void)

{
  engine_load_dynamic_int();
  ossl_init_engine_dynamic_ossl_ret_ = 1;
  return;
}



void ossl_init_engine_rdrand_ossl_(void)

{
  engine_load_rdrand_int();
  ossl_init_engine_rdrand_ossl_ret_ = 1;
  return;
}



void ossl_init_engine_openssl_ossl_(void)

{
  engine_load_openssl_int();
  ossl_init_engine_openssl_ossl_ret_ = 1;
  return;
}



void ossl_init_async_ossl_(void)

{
  ossl_init_async_ossl_ret_ = async_init();
  if (ossl_init_async_ossl_ret_ != 0) {
    async_inited = 1;
    ossl_init_async_ossl_ret_ = 1;
  }
  return;
}



void ossl_init_config_settings_ossl_(void)

{
  ossl_init_config_ossl_ret_ = ossl_config_int(conf_settings);
  return;
}



void ossl_init_config_ossl_(void)

{
  ossl_init_config_ossl_ret_ = ossl_config_int(0);
  return;
}



void ossl_init_no_config_ossl_(void)

{
  ossl_no_config_int();
  ossl_init_config_ossl_ret_ = 1;
  return;
}



void ossl_init_add_all_digests_ossl_(void)

{
  openssl_add_all_digests_int();
  ossl_init_add_all_digests_ossl_ret_ = 1;
  return;
}



void ossl_init_add_all_ciphers_ossl_(void)

{
  openssl_add_all_ciphers_int();
  ossl_init_add_all_ciphers_ossl_ret_ = 1;
  return;
}



void ossl_init_load_ssl_strings_ossl_(void)

{
  ossl_err_load_SSL_strings();
  ossl_init_load_ssl_strings_ossl_ret_ = 1;
  return;
}



void ossl_init_load_crypto_strings_ossl_(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = err_shelve_state(&local_18);
  if (iVar1 != 0) {
    iVar1 = ossl_err_load_crypto_strings();
    err_unshelve_state(local_18);
  }
  ossl_init_load_crypto_strings_ossl_ret_ = iVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_init_register_atexit_ossl_(void)

{
  int iVar1;
  
  iVar1 = atexit(OPENSSL_cleanup);
  ossl_init_register_atexit_ossl_ret_ = (uint)(iVar1 == 0);
  return;
}



void ossl_init_base_ossl_(void)

{
  int iVar1;
  
  optsdone_lock = CRYPTO_THREAD_lock_new();
  if ((optsdone_lock != 0) && (init_lock = CRYPTO_THREAD_lock_new(optsdone_lock), init_lock != 0)) {
    OPENSSL_cpuid_setup();
    iVar1 = ossl_init_thread();
    if ((iVar1 != 0) && (iVar1 = CRYPTO_THREAD_init_local(&in_init_config_local,0), iVar1 != 0)) {
      base_inited = 1;
      ossl_init_base_ossl_ret_ = 1;
      return;
    }
  }
  CRYPTO_THREAD_lock_free(optsdone_lock);
  optsdone_lock = 0;
  CRYPTO_THREAD_lock_free(init_lock);
  init_lock = 0;
  ossl_init_base_ossl_ret_ = 0;
  return;
}



void OPENSSL_cleanup(void)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  if ((base_inited != 0) && (stopped == 0)) {
    stopped = 1;
    OPENSSL_thread_stop();
    ptr = stop_handlers;
    while (ptr != (undefined8 *)0x0) {
      (*(code *)*ptr)();
      puVar1 = (undefined8 *)ptr[1];
      CRYPTO_free(ptr);
      ptr = puVar1;
    }
    stop_handlers = (undefined8 *)0x0;
    CRYPTO_THREAD_lock_free(optsdone_lock);
    optsdone_lock = 0;
    CRYPTO_THREAD_lock_free(init_lock);
    init_lock = 0;
    CRYPTO_THREAD_cleanup_local(&in_init_config_local);
    ossl_comp_zlib_cleanup();
    ossl_comp_brotli_cleanup();
    ossl_comp_zstd_cleanup();
    if (async_inited != 0) {
      async_deinit();
    }
    ossl_rand_cleanup_int();
    ossl_config_modules_free();
    engine_cleanup_int();
    ossl_store_cleanup_int();
    ossl_lib_ctx_default_deinit();
    ossl_cleanup_thread();
    bio_cleanup();
    evp_cleanup_int();
    ossl_obj_cleanup_int();
    err_cleanup();
    CRYPTO_secure_malloc_done();
    OSSL_CMP_log_close();
    ossl_trace_cleanup();
    base_inited = 0;
    return;
  }
  return;
}



bool OPENSSL_init_crypto(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (stopped == 0) {
    iVar1 = CRYPTO_atomic_load(&optsdone,&local_38,0);
    if ((iVar1 != 0) && (iVar1 = 1, (local_38 & param_1) == param_1)) {
LAB_00100670:
      bVar4 = true;
      goto LAB_0010045b;
    }
    iVar2 = CRYPTO_THREAD_run_once(&base,ossl_init_base_ossl_);
    if ((iVar2 != 0) && (ossl_init_base_ossl_ret_ != 0)) {
      if ((param_1 & 0x40000) != 0) goto LAB_00100670;
      if (iVar1 == 0) {
        iVar1 = CRYPTO_atomic_load(&optsdone,&local_38,optsdone_lock);
        if (iVar1 == 0) goto LAB_00100459;
        if ((local_38 & param_1) == param_1) goto LAB_00100670;
      }
      if ((param_1 & 0x80000) == 0) {
        iVar1 = CRYPTO_THREAD_run_once(&register_atexit,ossl_init_register_atexit_ossl_);
      }
      else {
        iVar1 = CRYPTO_THREAD_run_once(&register_atexit,0x100000);
      }
      if ((((((((iVar1 != 0) && (ossl_init_register_atexit_ossl_ret_ != 0)) &&
              (iVar1 = CRYPTO_THREAD_run_once
                                 (&load_crypto_nodelete,ossl_init_load_crypto_nodelete_ossl_),
              iVar1 != 0)) && (ossl_init_load_crypto_nodelete_ossl_ret_ != 0)) &&
            (((param_1 & 1) == 0 ||
             ((iVar1 = CRYPTO_THREAD_run_once
                                 (&load_crypto_strings,ossl_init_no_load_crypto_strings_ossl_),
              iVar1 != 0 && (ossl_init_load_crypto_strings_ossl_ret_ != 0)))))) &&
           (((param_1 & 2) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once
                                (&load_crypto_strings,ossl_init_load_crypto_strings_ossl_),
             iVar1 != 0 && (ossl_init_load_crypto_strings_ossl_ret_ != 0)))))) &&
          ((((param_1 & 0x100000) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&ssl_strings,ossl_init_no_load_ssl_strings_ossl_),
             iVar1 != 0 && (ossl_init_load_ssl_strings_ossl_ret_ != 0)))) &&
           (((param_1 & 0x200000) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&ssl_strings,ossl_init_load_ssl_strings_ossl_),
             iVar1 != 0 && (ossl_init_load_ssl_strings_ossl_ret_ != 0)))))))) &&
         ((((((param_1 & 0x10) == 0 ||
             ((iVar1 = CRYPTO_THREAD_run_once(&add_all_ciphers,ossl_init_no_add_all_ciphers_ossl_),
              iVar1 != 0 && (ossl_init_add_all_ciphers_ossl_ret_ != 0)))) &&
            (((param_1 & 4) == 0 ||
             ((iVar1 = CRYPTO_THREAD_run_once(&add_all_ciphers,ossl_init_add_all_ciphers_ossl_),
              iVar1 != 0 && (ossl_init_add_all_ciphers_ossl_ret_ != 0)))))) &&
           (((param_1 & 0x20) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&add_all_digests,ossl_init_no_add_all_digests_ossl_),
             iVar1 != 0 && (ossl_init_add_all_digests_ossl_ret_ != 0)))))) &&
          ((((param_1 & 8) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&add_all_digests,ossl_init_add_all_digests_ossl_),
             iVar1 != 0 && (ossl_init_add_all_digests_ossl_ret_ != 0)))) &&
           ((((param_1 & 0x20000) == 0 || (iVar1 = openssl_init_fork_handlers(), iVar1 != 0)) &&
            (((param_1 & 0x80) == 0 ||
             ((iVar1 = CRYPTO_THREAD_run_once(&config,ossl_init_no_config_ossl_), iVar1 != 0 &&
              (ossl_init_config_ossl_ret_ != 0)))))))))))) {
        if (((param_1 & 0x40) == 0) ||
           (lVar3 = CRYPTO_THREAD_get_local(&in_init_config_local), lVar3 != 0)) {
LAB_001005b6:
          if ((((((param_1 & 0x100) == 0) ||
                ((iVar1 = CRYPTO_THREAD_run_once(&async,ossl_init_async_ossl_), iVar1 != 0 &&
                 (ossl_init_async_ossl_ret_ != 0)))) &&
               (((param_1 & 0x800) == 0 ||
                ((iVar1 = CRYPTO_THREAD_run_once(&engine_openssl,ossl_init_engine_openssl_ossl_),
                 iVar1 != 0 && (ossl_init_engine_openssl_ossl_ret_ != 0)))))) &&
              (((param_1 & 0x200) == 0 ||
               ((iVar1 = CRYPTO_THREAD_run_once(&engine_rdrand,ossl_init_engine_rdrand_ossl_),
                iVar1 != 0 && (ossl_init_engine_rdrand_ossl_ret_ != 0)))))) &&
             (((param_1 & 0x400) == 0 ||
              ((iVar1 = CRYPTO_THREAD_run_once(&engine_dynamic,ossl_init_engine_dynamic_ossl_),
               iVar1 != 0 && (ossl_init_engine_dynamic_ossl_ret_ != 0)))))) {
            if ((param_1 & 0xfe00) != 0) {
              ENGINE_register_all_complete();
            }
            iVar1 = CRYPTO_atomic_or(&optsdone,param_1,&local_38,optsdone_lock);
            bVar4 = iVar1 != 0;
            goto LAB_0010045b;
          }
        }
        else {
          iVar1 = CRYPTO_THREAD_set_local(&in_init_config_local,0xffffffffffffffff);
          if (iVar1 != 0) {
            if (param_2 == 0) {
              iVar2 = CRYPTO_THREAD_run_once(&config,ossl_init_config_ossl_);
              iVar1 = ossl_init_config_ossl_ret_;
              if (iVar2 != 0) goto LAB_001008d8;
            }
            else {
              iVar1 = CRYPTO_THREAD_write_lock(init_lock);
              if (iVar1 != 0) {
                conf_settings = param_2;
                iVar1 = CRYPTO_THREAD_run_once(&config,ossl_init_config_settings_ossl_);
                if (iVar1 != 0) {
                  iVar1 = ossl_init_config_ossl_ret_;
                }
                conf_settings = 0;
                CRYPTO_THREAD_unlock(init_lock);
LAB_001008d8:
                if (0 < iVar1) goto LAB_001005b6;
              }
            }
          }
        }
      }
    }
  }
  else if ((param_1 & 0x40000) == 0) {
    ERR_new();
    ERR_set_debug("crypto/init.c",0x1fb,"OPENSSL_init_crypto");
    ERR_set_error(0xf,0xc0105,0);
  }
LAB_00100459:
  bVar4 = false;
LAB_0010045b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OPENSSL_atexit(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_malloc(0x10,"crypto/init.c",0x2f3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = stop_handlers;
    stop_handlers = puVar1;
    return 1;
  }
  return 0;
}


