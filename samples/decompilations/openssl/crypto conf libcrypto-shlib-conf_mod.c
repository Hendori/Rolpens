
void do_load_builtin_modules_ossl_(void)

{
  OPENSSL_load_builtin_modules();
  ENGINE_load_builtin_engines();
  do_load_builtin_modules_ossl_ret_ = 1;
  return;
}



void do_init_module_list_lock_ossl_(void)

{
  bool bVar1;
  
  module_list_lock = ossl_rcu_lock_new(1,0);
  bVar1 = module_list_lock == 0;
  if (bVar1) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_mod.c",0x68,"do_init_module_list_lock");
    ERR_set_error(0xe,0x8000f,0);
  }
  do_init_module_list_lock_ossl_ret_ = (uint)!bVar1;
  return;
}



void module_free(undefined8 *param_1)

{
  DSO_free((DSO *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free(param_1);
  return;
}



undefined8 * module_add(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *ptr;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_run_once(&init_module_list_lock,do_init_module_list_lock_ossl_);
  if ((iVar1 != 0) && (do_init_module_list_lock_ossl_ret_ != 0)) {
    ossl_rcu_write_lock(module_list_lock);
    lVar2 = ossl_rcu_uptr_deref(&supported_modules);
    if (lVar2 == 0) {
      local_48 = OPENSSL_sk_new_null();
    }
    else {
      local_48 = OPENSSL_sk_dup(lVar2);
    }
    if (local_48 == 0) {
LAB_00100288:
      ossl_rcu_write_unlock(module_list_lock);
    }
    else {
      ptr = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/conf/conf_mod.c",0x168);
      if (ptr == (undefined8 *)0x0) goto LAB_00100288;
      *ptr = param_1;
      pcVar3 = CRYPTO_strdup(param_2,"crypto/conf/conf_mod.c",0x16c);
      ptr[2] = param_3;
      ptr[1] = pcVar3;
      ptr[3] = param_4;
      if (pcVar3 != (char *)0x0) {
        iVar1 = OPENSSL_sk_push(local_48,ptr);
        if (iVar1 != 0) {
          ossl_rcu_assign_uptr(&supported_modules,&local_48);
          ossl_rcu_write_unlock(module_list_lock);
          ossl_synchronize_rcu(module_list_lock);
          OPENSSL_sk_free(lVar2);
          goto LAB_00100205;
        }
      }
      ossl_rcu_write_unlock(module_list_lock);
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free(ptr);
    }
    OPENSSL_sk_free(local_48);
  }
  ptr = (undefined8 *)0x0;
LAB_00100205:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong conf_modules_finish_int(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *ptr;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar2 = CRYPTO_THREAD_run_once(&init_module_list_lock,do_init_module_list_lock_ossl_);
  if ((((int)uVar2 != 0) &&
      (uVar2 = (ulong)do_init_module_list_lock_ossl_ret_, do_init_module_list_lock_ossl_ret_ != 0))
     && (uVar2 = 0, module_list_lock != 0)) {
    ossl_rcu_write_lock();
    uVar3 = ossl_rcu_uptr_deref(&initialized_modules);
    ossl_rcu_assign_uptr(&initialized_modules,&local_28);
    ossl_rcu_write_unlock(module_list_lock);
    ossl_synchronize_rcu(module_list_lock);
    do {
      iVar1 = OPENSSL_sk_num(uVar3);
      while( true ) {
        if (iVar1 < 1) {
          OPENSSL_sk_free();
          uVar2 = 1;
          goto LAB_001003bb;
        }
        ptr = (long *)OPENSSL_sk_pop(uVar3);
        if (ptr == (long *)0x0) break;
        lVar4 = *ptr;
        if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(ptr);
          lVar4 = *ptr;
        }
        *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + -1;
        CRYPTO_free((void *)ptr[1]);
        CRYPTO_free((void *)ptr[2]);
        CRYPTO_free(ptr);
        iVar1 = OPENSSL_sk_num(uVar3);
      }
    } while( true );
  }
LAB_001003bb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int CONF_modules_load(CONF *cnf,char *appname,ulong flags)

{
  char *__s;
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  stack_st_CONF_VALUE *psVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  size_t sVar12;
  ulong *ptr;
  code *pcVar13;
  DSO *dso;
  DSO_FUNC_TYPE pDVar14;
  ulong uVar15;
  void *ptr_00;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cnf != (CONF *)0x0) {
    local_48 = 0;
    ERR_set_mark();
    iVar2 = NCONF_get_number_e(cnf,(char *)0x0,"config_diagnostics",&local_48);
    ERR_pop_to_mark();
    if (iVar2 < 1) {
      uVar3 = OSSL_LIB_CTX_get_conf_diagnostics(cnf[1].data);
    }
    else {
      OSSL_LIB_CTX_set_conf_diagnostics(cnf[1].data);
      uVar3 = (uint)(0 < local_48);
    }
    if (uVar3 != 0) {
      flags = flags & 0xffffffffffffffe8;
    }
    ERR_set_mark();
    if (appname == (char *)0x0) {
LAB_0010096a:
      pcVar7 = NCONF_get_string(cnf,(char *)0x0,"openssl_conf");
      if (pcVar7 == (char *)0x0) {
LAB_00100989:
        ERR_pop_to_mark();
        goto LAB_00100990;
      }
    }
    else {
      pcVar7 = NCONF_get_string(cnf,(char *)0x0,appname);
      if (pcVar7 == (char *)0x0) {
        if ((flags & 0x20) != 0) goto LAB_0010096a;
        goto LAB_00100989;
      }
    }
    psVar8 = NCONF_get_section(cnf,pcVar7);
    if (psVar8 == (stack_st_CONF_VALUE *)0x0) {
      if ((flags & 4) == 0) {
        ERR_clear_last_mark();
        ERR_new();
        ERR_set_debug("crypto/conf/conf_mod.c",0xa3,"CONF_modules_load");
        ERR_set_error(0xe,0x7c,"openssl_conf=%s",pcVar7);
      }
      else {
        ERR_pop_to_mark();
      }
      iVar2 = 0;
      goto LAB_001009db;
    }
    ERR_pop_to_mark();
    for (iVar2 = 0; iVar4 = OPENSSL_sk_num(psVar8), iVar2 < iVar4; iVar2 = iVar2 + 1) {
      lVar9 = OPENSSL_sk_value(psVar8,iVar2);
      ERR_set_mark();
      pcVar7 = *(char **)(lVar9 + 0x10);
      __s = *(char **)(lVar9 + 8);
      iVar4 = CRYPTO_THREAD_run_once(&load_builtin_modules,0x100000);
      if ((iVar4 == 0) || (do_load_builtin_modules_ossl_ret_ == 0)) {
LAB_00100600:
        if ((flags & 1) == 0) {
LAB_0010084e:
          ERR_clear_last_mark();
          iVar2 = -1;
          goto LAB_001009db;
        }
      }
      else {
        pcVar10 = strrchr(__s,0x2e);
        if (pcVar10 == (char *)0x0) {
          sVar12 = strlen(__s);
          iVar4 = (int)sVar12;
        }
        else {
          iVar4 = (int)pcVar10 - (int)__s;
        }
        iVar5 = CRYPTO_THREAD_run_once(&init_module_list_lock,do_init_module_list_lock_ossl_);
        if ((iVar5 != 0) && (do_init_module_list_lock_ossl_ret_ != 0)) {
          ossl_rcu_read_lock(module_list_lock);
          uVar11 = ossl_rcu_uptr_deref(&supported_modules);
          for (iVar5 = 0; iVar6 = OPENSSL_sk_num(uVar11), iVar5 < iVar6; iVar5 = iVar5 + 1) {
            uVar15 = OPENSSL_sk_value(uVar11,iVar5);
            iVar6 = strncmp(*(char **)(uVar15 + 8),__s,(long)iVar4);
            if (iVar6 == 0) {
              ossl_rcu_read_unlock(module_list_lock);
              goto LAB_0010066c;
            }
          }
          ossl_rcu_read_unlock(module_list_lock);
        }
        if ((flags & 8) != 0) {
LAB_001005eb:
          if ((flags & 4) == 0) {
            ERR_new();
            ERR_set_debug("crypto/conf/conf_mod.c",0x116,"module_run");
            ERR_set_error(0xe,0x71,"module=%s");
          }
          goto LAB_00100600;
        }
        pcVar10 = _CONF_get_string((lhash_st_CONF_VALUE *)cnf,pcVar7,"path");
        if (pcVar10 == (char *)0x0) {
          pcVar10 = __s;
        }
        dso = DSO_load((DSO *)0x0,pcVar10,(DSO_METHOD *)0x0,0);
        if (dso == (DSO *)0x0) {
          uVar15 = 0x6e;
LAB_00100920:
          DSO_free(dso);
          ERR_new();
          ERR_set_debug("crypto/conf/conf_mod.c",0x14d,"module_load_dso");
          ERR_set_error(0xe,uVar15 & 0xffffffff,"module=%s, path=%s",__s,pcVar10);
          goto LAB_001005eb;
        }
        pDVar14 = DSO_bind_func(dso,"OPENSSL_init");
        if (pDVar14 == (DSO_FUNC_TYPE)0x0) {
          uVar15 = 0x70;
          goto LAB_00100920;
        }
        DSO_bind_func(dso,"OPENSSL_finish");
        uVar15 = module_add(dso,__s,pDVar14);
        if (uVar15 == 0) goto LAB_00100920;
LAB_0010066c:
        ptr = (ulong *)CRYPTO_malloc(0x28,"crypto/conf/conf_mod.c",0x1b7);
        if (ptr == (ulong *)0x0) {
LAB_001007f8:
          if ((flags & 4) != 0) goto LAB_00100600;
          ERR_new();
          ERR_set_debug("crypto/conf/conf_mod.c",0x120,"module_run");
          ERR_set_error(0xe,0x6d,"module=%s, value=%s retcode=%-8d",__s,pcVar7,0xffffffff);
          if ((flags & 1) != 0) goto LAB_0010060c;
          goto LAB_0010084e;
        }
        *ptr = uVar15;
        pcVar10 = CRYPTO_strdup(__s,"crypto/conf/conf_mod.c",0x1bc);
        ptr[1] = (ulong)pcVar10;
        pcVar10 = CRYPTO_strdup(pcVar7,"crypto/conf/conf_mod.c",0x1bd);
        ptr_00 = (void *)ptr[1];
        ptr[4] = 0;
        ptr[2] = (ulong)pcVar10;
        bVar1 = pcVar10 == (char *)0x0 || ptr_00 == (void *)0x0;
        if (bVar1) {
LAB_001007ca:
          CRYPTO_free(ptr_00);
          CRYPTO_free((void *)ptr[2]);
          CRYPTO_free(ptr);
          goto LAB_001007f8;
        }
        if (*(code **)(uVar15 + 0x10) == (code *)0x0) {
          iVar4 = CRYPTO_THREAD_run_once(&init_module_list_lock,do_init_module_list_lock_ossl_);
          if ((iVar4 != 0) && (do_init_module_list_lock_ossl_ret_ != 0)) goto LAB_00100731;
LAB_001007c6:
          ptr_00 = (void *)ptr[1];
          goto LAB_001007ca;
        }
        iVar4 = (**(code **)(uVar15 + 0x10))(ptr,cnf);
        if ((iVar4 < 1) ||
           ((iVar4 = CRYPTO_THREAD_run_once(&init_module_list_lock,do_init_module_list_lock_ossl_),
            iVar4 == 0 || (do_init_module_list_lock_ossl_ret_ == 0)))) {
          pcVar13 = *(code **)(uVar15 + 0x18);
          if (pcVar13 == (code *)0x0) goto LAB_001007c6;
LAB_001007c1:
          (*pcVar13)(ptr);
          goto LAB_001007c6;
        }
        bVar1 = true;
LAB_00100731:
        ossl_rcu_write_lock(module_list_lock);
        lVar9 = ossl_rcu_uptr_deref(&initialized_modules);
        if (lVar9 == 0) {
          local_48 = OPENSSL_sk_new_null();
        }
        else {
          local_48 = OPENSSL_sk_dup(lVar9);
        }
        if (local_48 == 0) {
          ossl_rcu_write_unlock(module_list_lock);
          ERR_new();
          uVar11 = 0x1da;
LAB_00100a87:
          ERR_set_debug("crypto/conf/conf_mod.c",uVar11,"module_init");
          ERR_set_error(0xe,0x8000f,0);
          pcVar13 = *(code **)(uVar15 + 0x18);
          if ((pcVar13 == (code *)0x0) || (!bVar1)) goto LAB_001007c6;
          goto LAB_001007c1;
        }
        iVar4 = OPENSSL_sk_push(local_48,ptr);
        if (iVar4 == 0) {
          ossl_rcu_write_unlock(module_list_lock);
          OPENSSL_sk_free(local_48);
          ERR_new();
          uVar11 = 0x1e1;
          goto LAB_00100a87;
        }
        *(int *)(uVar15 + 0x20) = *(int *)(uVar15 + 0x20) + 1;
        ossl_rcu_assign_uptr(&initialized_modules,&local_48);
        ossl_rcu_write_unlock(module_list_lock);
        ossl_synchronize_rcu(module_list_lock);
        OPENSSL_sk_free(lVar9);
      }
LAB_0010060c:
      ERR_pop_to_mark();
    }
  }
LAB_00100990:
  iVar2 = 1;
LAB_001009db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void CONF_modules_unload(int all)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = conf_modules_finish_int();
  if (iVar1 != 0) {
    ossl_rcu_write_lock(module_list_lock);
    uVar2 = ossl_rcu_uptr_deref(&supported_modules);
    local_38 = OPENSSL_sk_dup(uVar2);
    if (local_38 == 0) {
      ossl_rcu_write_unlock(module_list_lock);
    }
    else {
      uVar3 = OPENSSL_sk_new_null();
      iVar1 = OPENSSL_sk_num(local_38);
      iVar1 = iVar1 + -1;
      if (-1 < iVar1) {
        if (all == 0) {
          do {
            plVar5 = (long *)OPENSSL_sk_value(local_38,iVar1);
            if (((int)plVar5[4] < 1) && (*plVar5 != 0)) {
              OPENSSL_sk_delete(local_38,iVar1);
              OPENSSL_sk_push(uVar3,plVar5);
            }
            bVar6 = iVar1 != 0;
            iVar1 = iVar1 + -1;
          } while (bVar6);
        }
        else {
          do {
            uVar4 = OPENSSL_sk_value(local_38,iVar1);
            OPENSSL_sk_delete(local_38,iVar1);
            OPENSSL_sk_push(uVar3,uVar4);
            bVar6 = iVar1 != 0;
            iVar1 = iVar1 + -1;
          } while (bVar6);
        }
      }
      iVar1 = OPENSSL_sk_num(local_38);
      if (iVar1 == 0) {
        OPENSSL_sk_free(local_38);
        local_38 = 0;
      }
      ossl_rcu_assign_uptr(&supported_modules,&local_38);
      ossl_rcu_write_unlock(module_list_lock);
      ossl_synchronize_rcu(module_list_lock);
      OPENSSL_sk_free(uVar2);
      OPENSSL_sk_pop_free(uVar3,module_free);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void CONF_modules_finish(void)

{
  conf_modules_finish_int();
  return;
}



int CONF_module_add(char *name,undefined1 *ifunc,undefined1 *ffunc)

{
  long lVar1;
  
  lVar1 = module_add(0,name,ifunc,ffunc);
  return (int)(lVar1 != 0);
}



void ossl_config_modules_free(void)

{
  CONF_modules_unload(1);
  ossl_rcu_lock_free(module_list_lock);
  module_list_lock = 0;
  OPENSSL_sk_free(supported_modules);
  supported_modules = 0;
  OPENSSL_sk_free(initialized_modules);
  initialized_modules = 0;
  return;
}



char * CONF_imodule_get_name(CONF_IMODULE *md)

{
  return *(char **)(md + 8);
}



char * CONF_imodule_get_value(CONF_IMODULE *md)

{
  return *(char **)(md + 0x10);
}



void * CONF_imodule_get_usr_data(CONF_IMODULE *md)

{
  return *(void **)(md + 0x20);
}



void CONF_imodule_set_usr_data(CONF_IMODULE *md,void *usr_data)

{
  *(void **)(md + 0x20) = usr_data;
  return;
}



CONF_MODULE * CONF_imodule_get_module(CONF_IMODULE *md)

{
  return *(CONF_MODULE **)md;
}



ulong CONF_imodule_get_flags(CONF_IMODULE *md)

{
  return *(ulong *)(md + 0x18);
}



void CONF_imodule_set_flags(CONF_IMODULE *md,ulong flags)

{
  *(ulong *)(md + 0x18) = flags;
  return;
}



void * CONF_module_get_usr_data(CONF_MODULE *pmod)

{
  return *(void **)(pmod + 0x28);
}



void CONF_module_set_usr_data(CONF_MODULE *pmod,void *usr_data)

{
  *(void **)(pmod + 0x28) = usr_data;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * CONF_get1_default_config_file(void)

{
  char *pcVar1;
  size_t sVar2;
  char *buf;
  
  pcVar1 = (char *)ossl_safe_getenv("OPENSSL_CONF");
  if (pcVar1 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(pcVar1,"crypto/conf/conf_mod.c",0x2b4);
    return pcVar1;
  }
  pcVar1 = X509_get_default_cert_area();
  if (pcVar1 != (char *)0x0) {
    sVar2 = strlen(pcVar1);
    buf = (char *)CRYPTO_malloc((int)(sVar2 + 0xd),"crypto/conf/conf_mod.c",0x2c7);
    if (buf != (char *)0x0) {
      BIO_snprintf(buf,sVar2 + 0xd,"%s%s%s",pcVar1,&_LC13,"openssl.cnf");
    }
    return buf;
  }
  pcVar1 = CRYPTO_strdup("","crypto/conf/conf_mod.c",0x2c1);
  return pcVar1;
}



uint CONF_modules_load_file_ex(undefined8 param_1,char *param_2,char *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  CONF *conf;
  ulong uVar3;
  char *file;
  int local_3c;
  
  local_3c = OSSL_LIB_CTX_get_conf_diagnostics();
  ERR_set_mark();
  if (param_2 == (char *)0x0) {
    file = CONF_get1_default_config_file();
    if (file == (char *)0x0) {
      conf = (CONF *)0x0;
      uVar2 = 0;
    }
    else if (*file == '\0') {
      conf = (CONF *)0x0;
      uVar2 = 1;
    }
    else {
      conf = (CONF *)NCONF_new_ex(param_1,0);
      if (conf != (CONF *)0x0) goto LAB_00100ece;
      uVar2 = 0;
    }
LAB_00100fd9:
    CRYPTO_free(file);
LAB_00100f05:
    NCONF_free(conf);
    if (((param_4 & 2) == 0) || (local_3c != 0)) {
      if ((int)uVar2 < 1) {
LAB_00100f90:
        ERR_clear_last_mark();
        return uVar2;
      }
      goto LAB_00100f24;
    }
  }
  else {
    conf = (CONF *)NCONF_new_ex(param_1,0);
    file = param_2;
    if (conf != (CONF *)0x0) {
LAB_00100ece:
      iVar1 = NCONF_load(conf,file,(long *)0x0);
      if (iVar1 < 1) {
        uVar2 = 0;
        if ((param_4 & 0x10) != 0) {
          uVar3 = ERR_peek_last_error();
          uVar2 = (uint)uVar3 & 0x7fffffff;
          if ((uVar3 & 0x80000000) == 0) {
            uVar2 = (uint)uVar3 & 0x7fffff;
          }
          uVar2 = (uint)(uVar2 == 0x72);
        }
      }
      else {
        uVar2 = CONF_modules_load(conf,param_3,param_4);
        local_3c = OSSL_LIB_CTX_get_conf_diagnostics(param_1);
      }
      if (param_2 == (char *)0x0) goto LAB_00100fd9;
      goto LAB_00100f05;
    }
    NCONF_free((CONF *)0x0);
    if (((param_4 & 2) == 0) || (local_3c != 0)) {
      uVar2 = 0;
      goto LAB_00100f90;
    }
  }
  uVar2 = 1;
LAB_00100f24:
  ERR_pop_to_mark();
  return uVar2;
}



int CONF_modules_load_file(char *filename,char *appname,ulong flags)

{
  int iVar1;
  
  iVar1 = CONF_modules_load_file_ex(0,filename,appname,flags);
  return iVar1;
}



int CONF_parse_list(char *list,int sep,int nospc,list_cb *list_cb,void *arg)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  
  if (list == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_mod.c",0x2df,"CONF_parse_list");
    ERR_set_error(0xe,0x73,0);
    return 0;
  }
  do {
    if (nospc == 0) {
LAB_00101099:
      pbVar4 = (byte *)strchr(list,sep);
      if (((byte *)list == pbVar4) || (*list == 0)) {
        iVar3 = (*list_cb)((char *)0x0,0,arg);
      }
      else {
        pbVar7 = pbVar4 + -1;
        if (pbVar4 == (byte *)0x0) {
          sVar5 = strlen(list);
          pbVar7 = (byte *)list + (sVar5 - 1);
        }
        if (nospc != 0) {
          ppuVar6 = __ctype_b_loc();
          bVar2 = *(byte *)((long)*ppuVar6 + (ulong)*pbVar7 * 2 + 1);
          while ((bVar2 & 0x20) != 0) {
            pbVar1 = pbVar7 + -1;
            pbVar7 = pbVar7 + -1;
            bVar2 = *(byte *)((long)*ppuVar6 + (ulong)*pbVar1 * 2 + 1);
          }
        }
        iVar3 = (*list_cb)(list,((int)pbVar7 - (int)list) + 1,arg);
      }
    }
    else {
      bVar2 = *list;
      if (bVar2 != 0) {
        ppuVar6 = __ctype_b_loc();
        do {
          if ((*(byte *)((long)*ppuVar6 + (ulong)bVar2 * 2 + 1) & 0x20) == 0) break;
          bVar2 = ((byte *)list)[1];
          list = (char *)((byte *)list + 1);
        } while (bVar2 != 0);
        goto LAB_00101099;
      }
      pbVar4 = (byte *)strchr(list,sep);
      iVar3 = (*list_cb)((char *)0x0,0,arg);
    }
    if (iVar3 < 1) {
      return iVar3;
    }
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    list = (char *)(pbVar4 + 1);
  } while( true );
}


