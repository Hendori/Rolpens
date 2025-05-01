
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 engine_add_dynamic_id(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      lVar3 = engine_dyn_list_head;
      if (engine_dyn_list_head != 0) {
LAB_00100060:
        do {
          if (param_2 == *(long *)(lVar3 + 0xd8)) goto LAB_00100069;
          plVar1 = (long *)(lVar3 + 0xc0);
          lVar3 = *plVar1;
        } while (*plVar1 != 0);
        if (*(long *)(param_1 + 0xd8) == 0) {
          *(long *)(param_1 + 0xd8) = param_2;
          goto LAB_00100090;
        }
        goto LAB_00100069;
      }
      bVar5 = engine_dyn_list_tail != 0;
      *(long *)(param_1 + 0xd8) = param_2;
      if (bVar5) {
        return 0;
      }
    }
    else {
      iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar2 == 0) {
        return 0;
      }
      lVar3 = engine_dyn_list_head;
      if (engine_dyn_list_head != 0) goto LAB_00100060;
      uVar4 = 0;
      if (*(long *)(param_1 + 0xd8) != 0) goto LAB_001000d7;
LAB_001001c0:
      *(long *)(param_1 + 0xd8) = param_2;
LAB_001001d0:
      if (engine_dyn_list_tail != 0) goto LAB_00100069;
    }
    engine_dyn_list_tail = 0;
    engine_dyn_list_head = param_1;
LAB_001000a6:
    *(long *)(param_1 + 200) = engine_dyn_list_tail;
    uVar4 = 1;
    engine_dyn_list_tail = param_1;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    if ((param_3 != 0) && (iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock), iVar2 == 0)) {
      return 0;
    }
    if (param_2 == 0) {
      if (engine_dyn_list_head == 0) goto LAB_001001d0;
LAB_00100090:
      if ((engine_dyn_list_tail != 0) && (*(long *)(engine_dyn_list_tail + 0xd0) == 0)) {
        *(long *)(engine_dyn_list_tail + 0xd0) = param_1;
        goto LAB_001000a6;
      }
    }
    else {
      lVar3 = engine_dyn_list_head;
      if (engine_dyn_list_head != 0) goto LAB_00100060;
      if (*(long *)(param_1 + 0xd8) == 0) goto LAB_001001c0;
    }
LAB_00100069:
    uVar4 = 0;
  }
  if (param_3 == 0) {
    return uVar4;
  }
LAB_001000d7:
  CRYPTO_THREAD_unlock(_global_engine_lock);
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_remove_dynamic_id(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((param_2 == 0 || (iVar3 = CRYPTO_THREAD_write_lock(_global_engine_lock), iVar3 != 0)))) {
    lVar1 = *(long *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_1 + 200);
    }
    lVar2 = *(long *)(param_1 + 200);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0xd0) = lVar1;
    }
    if (engine_dyn_list_head == param_1) {
      engine_dyn_list_head = *(long *)(param_1 + 0xd0);
    }
    if (engine_dyn_list_tail != param_1) {
      lVar2 = engine_dyn_list_tail;
    }
    engine_dyn_list_tail = lVar2;
    if (param_2 != 0) {
      CRYPTO_THREAD_unlock(_global_engine_lock);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_first(void)

{
  ENGINE *pEVar1;
  int iVar2;
  
  iVar2 = CRYPTO_THREAD_run_once(&engine_lock_init,&do_engine_lock_init_ossl_);
  if ((iVar2 == 0) || (_do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0xeb,"ENGINE_get_first");
    ERR_set_error(0x26,0x8000f,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    pEVar1 = engine_list_head;
    if (iVar2 != 0) {
      if (engine_list_head != (ENGINE *)0x0) {
        LOCK();
        *(int *)(engine_list_head + 0x9c) = *(int *)(engine_list_head + 0x9c) + 1;
        UNLOCK();
      }
      CRYPTO_THREAD_unlock(_global_engine_lock);
      return pEVar1;
    }
  }
  return (ENGINE *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_last(void)

{
  ENGINE *pEVar1;
  int iVar2;
  
  iVar2 = CRYPTO_THREAD_run_once(&engine_lock_init,&do_engine_lock_init_ossl_);
  if ((iVar2 == 0) || (_do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x106,"ENGINE_get_last");
    ERR_set_error(0x26,0x8000f,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    pEVar1 = engine_list_tail;
    if (iVar2 != 0) {
      if (engine_list_tail != (ENGINE *)0x0) {
        LOCK();
        *(int *)(engine_list_tail + 0x9c) = *(int *)(engine_list_tail + 0x9c) + 1;
        UNLOCK();
      }
      CRYPTO_THREAD_unlock(_global_engine_lock);
      return pEVar1;
    }
  }
  return (ENGINE *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ENGINE * ENGINE_get_next(ENGINE *e)

{
  ENGINE *pEVar1;
  int iVar2;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x120,"ENGINE_get_next");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    if (iVar2 != 0) {
      pEVar1 = *(ENGINE **)(e + 0xc0);
      if (pEVar1 != (ENGINE *)0x0) {
        LOCK();
        *(int *)(pEVar1 + 0x9c) = *(int *)(pEVar1 + 0x9c) + 1;
        UNLOCK();
      }
      CRYPTO_THREAD_unlock(_global_engine_lock);
      ENGINE_free(e);
      return pEVar1;
    }
  }
  return (ENGINE *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ENGINE * ENGINE_get_prev(ENGINE *e)

{
  ENGINE *pEVar1;
  int iVar2;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x13b,"ENGINE_get_prev");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    if (iVar2 != 0) {
      pEVar1 = *(ENGINE **)(e + 0xb8);
      if (pEVar1 != (ENGINE *)0x0) {
        LOCK();
        *(int *)(pEVar1 + 0x9c) = *(int *)(pEVar1 + 0x9c) + 1;
        UNLOCK();
      }
      CRYPTO_THREAD_unlock(_global_engine_lock);
      ENGINE_free(e);
      return pEVar1;
    }
  }
  return (ENGINE *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ENGINE_add(ENGINE *e)

{
  char *__s2;
  ENGINE *pEVar1;
  ENGINE *pEVar2;
  int iVar3;
  ENGINE *pEVar4;
  undefined8 uVar5;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x157,"ENGINE_add");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  if ((*(long *)e == 0) || (*(long *)(e + 8) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x15b,"ENGINE_add");
    ERR_set_error(0x26,0x6c,0);
    return 0;
  }
  iVar3 = CRYPTO_THREAD_write_lock(_global_engine_lock);
  if (iVar3 == 0) {
    return 0;
  }
  if (engine_list_head == (ENGINE *)0x0) {
LAB_00100607:
    pEVar4 = e + 0x9c;
    LOCK();
    *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
    pEVar1 = engine_list_tail;
    UNLOCK();
    if (engine_list_head == (ENGINE *)0x0) {
      if (engine_list_tail == (ENGINE *)0x0) {
        iVar3 = engine_cleanup_add_last(engine_list_cleanup);
        pEVar2 = e;
        if (iVar3 != 0) goto LAB_001007a7;
        LOCK();
        *(int *)pEVar4 = *(int *)pEVar4 + -1;
        UNLOCK();
        ERR_new();
        uVar5 = 0x61;
      }
      else {
        LOCK();
        *(int *)pEVar4 = *(int *)pEVar4 + -1;
        UNLOCK();
        ERR_new();
        uVar5 = 0x59;
      }
    }
    else {
      if ((engine_list_tail != (ENGINE *)0x0) && (*(long *)(engine_list_tail + 0xc0) == 0)) {
        *(ENGINE **)(engine_list_tail + 0xc0) = e;
        pEVar2 = engine_list_head;
LAB_001007a7:
        engine_list_head = pEVar2;
        *(ENGINE **)(e + 0xb8) = pEVar1;
        iVar3 = 1;
        engine_list_tail = e;
        *(undefined8 *)(e + 0xc0) = 0;
        goto LAB_001006ab;
      }
      LOCK();
      *(int *)pEVar4 = *(int *)pEVar4 + -1;
      UNLOCK();
      ERR_new();
      uVar5 = 0x6a;
    }
    ERR_set_debug("crypto/engine/eng_list.c",uVar5,"engine_list_add");
    ERR_set_error(0x26,0x6e,0);
  }
  else {
    __s2 = *(char **)e;
    pEVar4 = engine_list_head;
    do {
      iVar3 = strcmp(*(char **)pEVar4,__s2);
      pEVar4 = *(ENGINE **)(pEVar4 + 0xc0);
      if (iVar3 == 0) goto LAB_00100738;
    } while (pEVar4 != (ENGINE *)0x0);
    if (iVar3 != 0) goto LAB_00100607;
LAB_00100738:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x49,"engine_list_add");
    ERR_set_error(0x26,0x67,0);
  }
  ERR_new();
  iVar3 = 0;
  ERR_set_debug("crypto/engine/eng_list.c",0x161,"ENGINE_add");
  ERR_set_error(0x26,0x6e,0);
LAB_001006ab:
  CRYPTO_THREAD_unlock(_global_engine_lock);
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ENGINE_remove(ENGINE *e)

{
  long lVar1;
  ENGINE *pEVar2;
  int iVar3;
  ENGINE *pEVar4;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x16d,"ENGINE_remove");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar3 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    pEVar2 = engine_list_head;
    if (iVar3 != 0) {
      pEVar4 = engine_list_head;
      if ((e != engine_list_head) && (engine_list_head != (ENGINE *)0x0)) {
        do {
          pEVar4 = *(ENGINE **)(pEVar4 + 0xc0);
          if (pEVar4 == (ENGINE *)0x0) goto LAB_001008e0;
        } while (e != pEVar4);
      }
      if (pEVar4 == (ENGINE *)0x0) {
LAB_001008e0:
        ERR_new();
        ERR_set_debug("crypto/engine/eng_list.c",0x84,"engine_list_remove");
        ERR_set_error(0x26,0x69,0);
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("crypto/engine/eng_list.c",0x173,"ENGINE_remove");
        ERR_set_error(0x26,0x6e,0);
      }
      else {
        lVar1 = *(long *)(e + 0xc0);
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(e + 0xb8);
        }
        pEVar4 = *(ENGINE **)(e + 0xb8);
        if (pEVar4 != (ENGINE *)0x0) {
          *(long *)(pEVar4 + 0xc0) = lVar1;
        }
        if (e == pEVar2) {
          engine_list_head = *(ENGINE **)(e + 0xc0);
        }
        if (e == engine_list_tail) {
          engine_list_tail = pEVar4;
        }
        iVar3 = 1;
        engine_free_util(e,0);
      }
      CRYPTO_THREAD_unlock(_global_engine_lock);
      return iVar3;
    }
  }
  return 0;
}



void engine_list_cleanup(void)

{
  if (engine_list_head == (ENGINE *)0x0) {
    return;
  }
  do {
    ENGINE_remove(engine_list_head);
  } while (engine_list_head != (ENGINE *)0x0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ENGINE * ENGINE_by_id(char *id)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ENGINE *pEVar7;
  char *arg;
  ENGINE *pEVar8;
  
  if (id == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x19d,"ENGINE_by_id");
    ERR_set_error(0x26,0xc0102,0);
    return (ENGINE *)0x0;
  }
  ENGINE_load_builtin_engines();
  iVar6 = CRYPTO_THREAD_run_once(&engine_lock_init,&do_engine_lock_init_ossl_);
  if ((iVar6 == 0) || (_do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_list.c",0x1a4,"ENGINE_by_id");
    ERR_set_error(0x26,0x8000f,0);
    return (ENGINE *)0x0;
  }
  iVar6 = CRYPTO_THREAD_write_lock(_global_engine_lock);
  pEVar8 = engine_list_head;
  if (iVar6 == 0) {
    return (ENGINE *)0x0;
  }
  for (; pEVar8 != (ENGINE *)0x0; pEVar8 = *(ENGINE **)(pEVar8 + 0xc0)) {
    iVar6 = strcmp(id,*(char **)pEVar8);
    if (iVar6 == 0) {
      if (((byte)pEVar8[0x98] & 4) == 0) {
        LOCK();
        *(int *)(pEVar8 + 0x9c) = *(int *)(pEVar8 + 0x9c) + 1;
        UNLOCK();
        CRYPTO_THREAD_unlock(_global_engine_lock);
        return pEVar8;
      }
      pEVar7 = ENGINE_new();
      if (pEVar7 != (ENGINE *)0x0) {
        uVar3 = *(undefined8 *)(pEVar8 + 0x18);
        uVar4 = *(undefined8 *)(pEVar8 + 0x20);
        uVar5 = *(undefined8 *)(pEVar8 + 0x28);
        uVar1 = *(undefined8 *)pEVar8;
        uVar2 = *(undefined8 *)(pEVar8 + 8);
        *(undefined8 *)(pEVar7 + 0x10) = *(undefined8 *)(pEVar8 + 0x10);
        *(undefined8 *)(pEVar7 + 0x18) = uVar3;
        *(undefined8 *)pEVar7 = uVar1;
        *(undefined8 *)(pEVar7 + 8) = uVar2;
        *(undefined8 *)(pEVar7 + 0x20) = uVar4;
        *(undefined8 *)(pEVar7 + 0x28) = uVar5;
        *(undefined8 *)(pEVar7 + 0x30) = *(undefined8 *)(pEVar8 + 0x30);
        uVar1 = *(undefined8 *)(pEVar8 + 0x40);
        *(undefined8 *)(pEVar7 + 0x38) = *(undefined8 *)(pEVar8 + 0x38);
        *(undefined8 *)(pEVar7 + 0x40) = uVar1;
        *(undefined8 *)(pEVar7 + 0x48) = *(undefined8 *)(pEVar8 + 0x48);
        uVar1 = *(undefined8 *)(pEVar8 + 0x70);
        uVar2 = *(undefined8 *)(pEVar8 + 0x78);
        uVar3 = *(undefined8 *)(pEVar8 + 0x80);
        uVar4 = *(undefined8 *)(pEVar8 + 0x58);
        uVar5 = *(undefined8 *)(pEVar8 + 0x60);
        *(undefined8 *)(pEVar7 + 0x68) = *(undefined8 *)(pEVar8 + 0x68);
        *(undefined8 *)(pEVar7 + 0x70) = uVar1;
        *(undefined8 *)(pEVar7 + 0x58) = uVar4;
        *(undefined8 *)(pEVar7 + 0x60) = uVar5;
        *(undefined8 *)(pEVar7 + 0x78) = uVar2;
        *(undefined8 *)(pEVar7 + 0x80) = uVar3;
        *(undefined8 *)(pEVar7 + 0x90) = *(undefined8 *)(pEVar8 + 0x90);
        *(undefined4 *)(pEVar7 + 0x98) = *(undefined4 *)(pEVar8 + 0x98);
        *(undefined8 *)(pEVar7 + 0xd8) = *(undefined8 *)(pEVar8 + 0xd8);
        engine_add_dynamic_id(pEVar7,0,0);
        CRYPTO_THREAD_unlock(_global_engine_lock);
        return pEVar7;
      }
      break;
    }
  }
  CRYPTO_THREAD_unlock(_global_engine_lock);
  iVar6 = strcmp(id,"dynamic");
  if (iVar6 != 0) {
    arg = (char *)ossl_safe_getenv("OPENSSL_ENGINES");
    if (arg == (char *)0x0) {
      arg = (char *)ossl_get_enginesdir();
    }
    pEVar8 = ENGINE_by_id("dynamic");
    if (pEVar8 != (ENGINE *)0x0) {
      iVar6 = ENGINE_ctrl_cmd_string(pEVar8,"ID",id,0);
      if ((((iVar6 != 0) && (iVar6 = ENGINE_ctrl_cmd_string(pEVar8,"DIR_LOAD","2",0), iVar6 != 0))
          && (iVar6 = ENGINE_ctrl_cmd_string(pEVar8,"DIR_ADD",arg,0), iVar6 != 0)) &&
         ((iVar6 = ENGINE_ctrl_cmd_string(pEVar8,"LIST_ADD","1",0), iVar6 != 0 &&
          (iVar6 = ENGINE_ctrl_cmd_string(pEVar8,"LOAD",(char *)0x0,0), iVar6 != 0)))) {
        return pEVar8;
      }
      goto LAB_00100c92;
    }
  }
  pEVar8 = (ENGINE *)0x0;
LAB_00100c92:
  ENGINE_free(pEVar8);
  ERR_new();
  ERR_set_debug("crypto/engine/eng_list.c",0x1db,"ENGINE_by_id");
  ERR_set_error(0x26,0x74,"id=%s",id);
  return (ENGINE *)0x0;
}



int ENGINE_up_ref(ENGINE *e)

{
  if (e != (ENGINE *)0x0) {
    LOCK();
    *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
    UNLOCK();
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/engine/eng_list.c",0x1e4,"ENGINE_up_ref");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}


