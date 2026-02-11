
void context_deinit_objs(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    ossl_method_store_free();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    ossl_rand_ctx_free();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    ossl_prov_conf_ctx_free();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    ossl_method_store_free();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    ossl_decoder_cache_free();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    ossl_method_store_free();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    ossl_method_store_free();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    ossl_provider_store_free();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    ossl_property_string_data_free();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    ossl_stored_namemap_free();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    ossl_property_defns_free();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    ossl_ctx_global_properties_free();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    ossl_bio_core_globals_free();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    ossl_prov_drbg_nonce_ctx_free();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    ossl_indicator_set_callback_free();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    ossl_self_test_set_callback_free();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    ossl_threads_ctx_free();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    ossl_child_prov_ctx_free();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    ossl_free_compression_methods_int();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
}



undefined8 context_init(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = CRYPTO_THREAD_init_local(param_1 + 0x1c,0);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *param_1 = lVar2;
    if ((lVar2 == 0) || (iVar1 = ossl_do_ex_data_init(param_1), iVar1 == 0)) {
      context_deinit_objs(param_1);
    }
    else {
      lVar2 = ossl_method_store_new(param_1);
      param_1[0x15] = lVar2;
      if (lVar2 != 0) {
        lVar2 = ossl_prov_conf_ctx_new(param_1);
        param_1[0x1d] = lVar2;
        if (lVar2 != 0) {
          lVar2 = ossl_rand_ctx_new(param_1);
          param_1[0x1a] = lVar2;
          if (lVar2 != 0) {
            lVar2 = ossl_method_store_new(param_1);
            param_1[0x20] = lVar2;
            if (lVar2 != 0) {
              lVar2 = ossl_decoder_cache_new(param_1);
              param_1[0x21] = lVar2;
              if (lVar2 != 0) {
                lVar2 = ossl_method_store_new(param_1);
                param_1[0x22] = lVar2;
                if (lVar2 != 0) {
                  lVar2 = ossl_method_store_new(param_1);
                  param_1[0x23] = lVar2;
                  if (lVar2 != 0) {
                    lVar2 = ossl_provider_store_new(param_1);
                    param_1[0x16] = lVar2;
                    if (lVar2 != 0) {
                      lVar2 = ossl_property_string_data_new(param_1);
                      param_1[0x14] = lVar2;
                      if (lVar2 != 0) {
                        lVar2 = ossl_stored_namemap_new(param_1);
                        param_1[0x17] = lVar2;
                        if (lVar2 != 0) {
                          lVar2 = ossl_property_defns_new(param_1);
                          param_1[0x18] = lVar2;
                          if (lVar2 != 0) {
                            lVar2 = ossl_ctx_global_properties_new(param_1);
                            param_1[0x19] = lVar2;
                            if (lVar2 != 0) {
                              lVar2 = ossl_bio_core_globals_new(param_1);
                              param_1[0x1e] = lVar2;
                              if (lVar2 != 0) {
                                lVar2 = ossl_prov_drbg_nonce_ctx_new(param_1);
                                param_1[0x1b] = lVar2;
                                if (lVar2 != 0) {
                                  lVar2 = ossl_self_test_set_callback_new(param_1);
                                  param_1[0x24] = lVar2;
                                  if (lVar2 != 0) {
                                    lVar2 = ossl_indicator_set_callback_new(param_1);
                                    param_1[0x25] = lVar2;
                                    if (lVar2 != 0) {
                                      lVar2 = ossl_threads_ctx_new(param_1);
                                      param_1[0x26] = lVar2;
                                      if (lVar2 != 0) {
                                        lVar2 = ossl_child_prov_ctx_new(param_1);
                                        param_1[0x1f] = lVar2;
                                        if ((lVar2 != 0) &&
                                           (iVar1 = ossl_property_parse_init(param_1), iVar1 != 0))
                                        {
                                          lVar2 = ossl_load_builtin_compressions();
                                          param_1[0x27] = lVar2;
                                          return 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      context_deinit_objs(param_1);
      ossl_crypto_cleanup_all_ex_data_int(param_1);
    }
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_THREAD_cleanup_local(param_1 + 0x1c);
    *param_1 = 0;
    param_1[0x28] = 0;
    puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar3 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x148U >>
                        3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
  }
  return 0;
}



void default_context_do_init_ossl_(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_init_local(&default_context_thread_local,0);
  if (iVar1 == 0) {
    default_context_do_init_ossl_ret_ = 0;
  }
  else {
    iVar1 = context_init(&default_context_int);
    if (iVar1 == 0) {
      CRYPTO_THREAD_cleanup_local(&default_context_thread_local);
      default_context_do_init_ossl_ret_ = 0;
    }
    else {
      default_context_inited = 1;
      default_context_do_init_ossl_ret_ = 1;
    }
  }
  return;
}



void ossl_lib_ctx_default_deinit(void)

{
  if (default_context_inited == 0) {
    return;
  }
  ossl_ctx_thread_stop(&default_context_int);
  context_deinit_objs(&default_context_int);
  ossl_crypto_cleanup_all_ex_data_int(&default_context_int);
  CRYPTO_THREAD_lock_free(default_context_int);
  default_context_int = 0;
  CRYPTO_THREAD_cleanup_local(&DAT_00100d60);
  CRYPTO_THREAD_cleanup_local(&default_context_thread_local);
  default_context_inited = 0;
  return;
}



void * OSSL_LIB_CTX_new(void)

{
  int iVar1;
  void *ptr;
  
  ptr = (void *)CRYPTO_zalloc(0x148,"crypto/context.c",0x1c0);
  if (ptr != (void *)0x0) {
    iVar1 = context_init(ptr);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



bool OSSL_LIB_CTX_load_config(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = CONF_modules_load_file_ex(param_1,param_2,0,0);
  return 0 < iVar1;
}



undefined8 * OSSL_LIB_CTX_get0_global_default(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if (iVar1 != 0) {
    puVar2 = &default_context_int;
    if (default_context_do_init_ossl_ret_ == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



undefined8 * OSSL_LIB_CTX_set0_default(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if ((iVar1 != 0) && (default_context_do_init_ossl_ret_ != 0)) {
    puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&default_context_thread_local);
    if (puVar2 != (undefined8 *)0x0) goto LAB_00100672;
  }
  puVar2 = &default_context_int;
  if (default_context_inited == 0) {
    return (undefined8 *)0x0;
  }
LAB_00100672:
  if (param_1 != (undefined8 *)0x0) {
    if (param_1 == &default_context_int) {
      param_1 = (undefined8 *)0x0;
    }
    CRYPTO_THREAD_set_local(&default_context_thread_local,param_1);
  }
  return puVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_release_default_drbg_ctx(void)

{
  if (_DAT_00100d50 != 0) {
    ossl_rand_ctx_free();
    _DAT_00100d50 = 0;
    return;
  }
  return;
}



undefined8 * ossl_lib_ctx_get_concrete(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (((param_1 == (undefined8 *)0x0) &&
      (((iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_),
        iVar1 == 0 || (default_context_do_init_ossl_ret_ == 0)) ||
       (puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&default_context_thread_local),
       puVar2 == (undefined8 *)0x0)))) && (puVar2 = param_1, default_context_inited != 0)) {
    puVar2 = &default_context_int;
  }
  return puVar2;
}



undefined8 ossl_lib_ctx_write_lock(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = CRYPTO_THREAD_write_lock(*puVar1);
    return uVar2;
  }
  return 0;
}



undefined8 ossl_lib_ctx_read_lock(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = CRYPTO_THREAD_read_lock(*puVar1);
    return uVar2;
  }
  return 0;
}



undefined8 ossl_lib_ctx_unlock(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = CRYPTO_THREAD_unlock(*puVar1);
    return uVar2;
  }
  return 0;
}



undefined4 ossl_lib_ctx_is_child(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x140);
  }
  return 0;
}



uint ossl_lib_ctx_is_default(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if ((iVar1 != 0) && (default_context_do_init_ossl_ret_ != 0)) {
    puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&default_context_thread_local);
    if (puVar2 != (undefined8 *)0x0) goto LAB_00100887;
  }
  puVar2 = &default_context_int;
  if (default_context_inited == 0) {
    return default_context_inited;
  }
LAB_00100887:
  return (uint)(param_1 == puVar2);
}



void OSSL_LIB_CTX_free(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  iVar1 = ossl_lib_ctx_is_default();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      ossl_provider_deinit_child(param_1);
    }
    ossl_ctx_thread_stop(param_1);
    context_deinit_objs(param_1);
    ossl_crypto_cleanup_all_ex_data_int(param_1);
    CRYPTO_THREAD_lock_free(*param_1);
    *param_1 = 0;
    CRYPTO_THREAD_cleanup_local(param_1 + 0x1c);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long OSSL_LIB_CTX_new_from_dispatch(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_LIB_CTX_new();
  if (lVar2 != 0) {
    iVar1 = ossl_bio_init_core(lVar2,param_2);
    if (iVar1 != 0) {
      return lVar2;
    }
    OSSL_LIB_CTX_free(lVar2);
  }
  return 0;
}



long OSSL_LIB_CTX_new_child(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_LIB_CTX_new_from_dispatch();
  if (lVar2 != 0) {
    iVar1 = ossl_provider_init_as_child(lVar2,param_1,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(lVar2 + 0x140) = 1;
      return lVar2;
    }
    OSSL_LIB_CTX_free(lVar2);
  }
  return 0;
}



bool ossl_lib_ctx_is_global_default(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  return puVar1 == &default_context_int;
}



long ossl_lib_ctx_get_data(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    switch(param_2) {
    case 0:
      return *(long *)(lVar1 + 0xa8);
    case 1:
      return *(long *)(lVar1 + 0xb0);
    case 2:
      return *(long *)(lVar1 + 0xc0);
    case 3:
      return *(long *)(lVar1 + 0xa0);
    case 4:
      return *(long *)(lVar1 + 0xb8);
    case 5:
      return *(long *)(lVar1 + 0xd0);
    case 6:
      return *(long *)(lVar1 + 0xd8);
    default:
      lVar1 = 0;
      break;
    case 10:
      return *(long *)(lVar1 + 0x110);
    case 0xb:
      return *(long *)(lVar1 + 0x100);
    case 0xc:
      return *(long *)(lVar1 + 0x120);
    case 0xe:
      return *(long *)(lVar1 + 200);
    case 0xf:
      return *(long *)(lVar1 + 0x118);
    case 0x10:
      return *(long *)(lVar1 + 0xe8);
    case 0x11:
      return *(long *)(lVar1 + 0xf0);
    case 0x12:
      return *(long *)(lVar1 + 0xf8);
    case 0x13:
      return *(long *)(lVar1 + 0x130);
    case 0x14:
      return *(long *)(lVar1 + 0x108);
    case 0x15:
      return lVar1 + 0x138;
    case 0x16:
      return *(long *)(lVar1 + 0x128);
    }
  }
  return lVar1;
}



void OSSL_LIB_CTX_get_data(void)

{
  ossl_lib_ctx_get_data();
  return;
}



long ossl_lib_ctx_get_ex_data_global(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}



char * ossl_lib_ctx_get_descriptor(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = ossl_lib_ctx_is_global_default();
  if (iVar1 != 0) {
    return "Global default library context";
  }
  iVar1 = ossl_lib_ctx_is_default(param_1);
  pcVar2 = "Thread-local default library context";
  if (iVar1 == 0) {
    pcVar2 = "Non-default library context";
  }
  return pcVar2;
}



long ossl_lib_ctx_get_rcukey(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0xe0;
  }
  return lVar1;
}



undefined4 OSSL_LIB_CTX_get_conf_diagnostics(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x144);
  }
  return 0;
}



void OSSL_LIB_CTX_set_conf_diagnostics(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x144) = param_2;
  }
  return;
}


