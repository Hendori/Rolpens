
void do_engine_lock_init_ossl_(void)

{
  global_engine_lock = CRYPTO_THREAD_lock_new();
  do_engine_lock_init_ossl_ret_ = (uint)(global_engine_lock != 0);
  return;
}



void engine_cleanup_cb_free(undefined8 *param_1)

{
  (*(code *)*param_1)();
  CRYPTO_free(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_new(void)

{
  int iVar1;
  ENGINE *obj;
  
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,0x100000);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_lib.c",0x21,"ENGINE_new");
    ERR_set_error(0x26,0x8000f,0);
  }
  else {
    obj = (ENGINE *)CRYPTO_zalloc(0xe0,"crypto/engine/eng_lib.c",0x24);
    if (obj != (ENGINE *)0x0) {
      LOCK();
      *(undefined4 *)(obj + 0x9c) = 1;
      UNLOCK();
      iVar1 = CRYPTO_new_ex_data(10,obj,(CRYPTO_EX_DATA *)(obj + 0xa8));
      if (iVar1 != 0) {
        return obj;
      }
      CRYPTO_free(obj);
      return (ENGINE *)0x0;
    }
  }
  return (ENGINE *)0x0;
}



void engine_set_all_null(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[9] = 0;
  *(undefined4 *)(param_1[9] + 8) = 0;
  *(undefined8 *)(param_1[0xd] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[5] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[6] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[7] + 8) = (undefined1  [16])0x0;
  return;
}



undefined8 engine_free_util(void *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return 1;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x9c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return 1;
  }
  engine_pkey_meths_free(param_1);
  engine_pkey_asn1_meths_free(param_1);
  if (*(code **)((long)param_1 + 0x58) != (code *)0x0) {
    (**(code **)((long)param_1 + 0x58))(param_1);
  }
  engine_remove_dynamic_id(param_1,param_2);
  CRYPTO_free_ex_data(10,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0xa8));
  CRYPTO_free(param_1);
  return 1;
}



int ENGINE_free(ENGINE *e)

{
  int iVar1;
  
  iVar1 = engine_free_util(e,1);
  return iVar1;
}



undefined8 engine_cleanup_add_first(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  
  if (((cleanup_stack != 0) || (cleanup_stack = OPENSSL_sk_new_null(), cleanup_stack != 0)) &&
     (ptr = (undefined8 *)CRYPTO_malloc(8,"crypto/engine/eng_lib.c",0x84), ptr != (undefined8 *)0x0)
     ) {
    *ptr = param_1;
    iVar1 = OPENSSL_sk_insert(cleanup_stack,ptr,0);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined8 engine_cleanup_add_last(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  
  if (((cleanup_stack != 0) || (cleanup_stack = OPENSSL_sk_new_null(), cleanup_stack != 0)) &&
     (ptr = (undefined8 *)CRYPTO_malloc(8,"crypto/engine/eng_lib.c",0x84), ptr != (undefined8 *)0x0)
     ) {
    *ptr = param_1;
    iVar1 = OPENSSL_sk_push(cleanup_stack,ptr);
    if (0 < iVar1) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



void engine_cleanup_int(void)

{
  if (cleanup_stack != 0) {
    OPENSSL_sk_pop_free(cleanup_stack,engine_cleanup_cb_free);
    cleanup_stack = 0;
  }
  CRYPTO_THREAD_lock_free(global_engine_lock);
  global_engine_lock = 0;
  return;
}



int ENGINE_set_ex_data(ENGINE *e,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(e + 0xa8),idx,arg);
  return iVar1;
}



void * ENGINE_get_ex_data(ENGINE *e,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(e + 0xa8),idx);
  return pvVar1;
}



int ENGINE_set_id(ENGINE *e,char *id)

{
  if (id != (char *)0x0) {
    *(char **)e = id;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/engine/eng_lib.c",0xce,"ENGINE_set_id");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}



int ENGINE_set_name(ENGINE *e,char *name)

{
  if (name != (char *)0x0) {
    *(char **)(e + 8) = name;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/engine/eng_lib.c",0xd8,"ENGINE_set_name");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}



int ENGINE_set_destroy_function(ENGINE *e,ENGINE_GEN_INT_FUNC_PTR destroy_f)

{
  *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x58) = destroy_f;
  return 1;
}



int ENGINE_set_init_function(ENGINE *e,ENGINE_GEN_INT_FUNC_PTR init_f)

{
  *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x60) = init_f;
  return 1;
}



int ENGINE_set_finish_function(ENGINE *e,ENGINE_GEN_INT_FUNC_PTR finish_f)

{
  *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x68) = finish_f;
  return 1;
}



int ENGINE_set_ctrl_function(ENGINE *e,ENGINE_CTRL_FUNC_PTR ctrl_f)

{
  *(ENGINE_CTRL_FUNC_PTR *)(e + 0x70) = ctrl_f;
  return 1;
}



int ENGINE_set_flags(ENGINE *e,int flags)

{
  *(int *)(e + 0x98) = flags;
  return 1;
}



int ENGINE_set_cmd_defns(ENGINE *e,ENGINE_CMD_DEFN *defns)

{
  *(ENGINE_CMD_DEFN **)(e + 0x90) = defns;
  return 1;
}



char * ENGINE_get_id(ENGINE *e)

{
  return *(char **)e;
}



char * ENGINE_get_name(ENGINE *e)

{
  return *(char **)(e + 8);
}



ENGINE_GEN_INT_FUNC_PTR ENGINE_get_destroy_function(ENGINE *e)

{
  return *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x58);
}



ENGINE_GEN_INT_FUNC_PTR ENGINE_get_init_function(ENGINE *e)

{
  return *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x60);
}



ENGINE_GEN_INT_FUNC_PTR ENGINE_get_finish_function(ENGINE *e)

{
  return *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x68);
}



ENGINE_CTRL_FUNC_PTR ENGINE_get_ctrl_function(ENGINE *e)

{
  return *(ENGINE_CTRL_FUNC_PTR *)(e + 0x70);
}



int ENGINE_get_flags(ENGINE *e)

{
  return *(int *)(e + 0x98);
}



ENGINE_CMD_DEFN * ENGINE_get_cmd_defns(ENGINE *e)

{
  return *(ENGINE_CMD_DEFN **)(e + 0x90);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ENGINE_get_static_state(void)

{
  return &internal_static_hack;
}


