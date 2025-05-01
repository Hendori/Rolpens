
undefined8 dlfcn_globallookup(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = dlopen(0,1);
  if (lVar1 != 0) {
    uVar2 = dlsym(lVar1,param_1);
    dlclose(lVar1);
  }
  return uVar2;
}



char * dlfcn_merger(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0 && param_3 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dso/dso_dlfcn.c",0xc9,"dlfcn_merger");
    ERR_set_error(0x25,0xc0102,0);
    return (char *)0x0;
  }
  if (param_3 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      pcVar3 = CRYPTO_strdup(param_3,"crypto/dso/dso_dlfcn.c",0xd9);
      return pcVar3;
    }
    if (*param_2 != '/') {
      sVar2 = strlen(param_3);
      iVar4 = (int)sVar2;
      sVar2 = strlen(param_2);
      iVar1 = (int)sVar2 + iVar4;
      if ((iVar4 != 0) && (param_3[(long)iVar4 + -1] == '/')) {
        iVar4 = iVar4 + -1;
        iVar1 = iVar1 + -1;
      }
      pcVar3 = (char *)CRYPTO_malloc(iVar1 + 2,"crypto/dso/dso_dlfcn.c",0xed);
      if (pcVar3 == (char *)0x0) {
        return (char *)0x0;
      }
      strcpy(pcVar3,param_3);
      pcVar3[iVar4] = '/';
      strcpy(pcVar3 + (long)iVar4 + 1,param_2);
      return pcVar3;
    }
  }
  pcVar3 = CRYPTO_strdup(param_2,"crypto/dso/dso_dlfcn.c",0xd1);
  return pcVar3;
}



char * dlfcn_name_converter(DSO *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  int num;
  
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3;
  pcVar4 = strchr(param_2,0x2f);
  if (pcVar4 == (char *)0x0) {
    uVar2 = DSO_flags(param_1);
    num = iVar1 + 4;
    if ((uVar2 & 2) == 0) {
      num = iVar1 + 7;
    }
    pcVar4 = (char *)CRYPTO_malloc(num,"crypto/dso/dso_dlfcn.c",0x105);
    if (pcVar4 != (char *)0x0) {
      uVar2 = DSO_flags(param_1);
      if ((uVar2 & 2) != 0) {
        BIO_snprintf(pcVar4,(long)num,"%s.so",param_2);
        return pcVar4;
      }
      BIO_snprintf(pcVar4,(long)num,"lib%s.so",param_2);
      return pcVar4;
    }
  }
  else {
    pcVar4 = (char *)CRYPTO_malloc(iVar1 + 1,"crypto/dso/dso_dlfcn.c",0x105);
    if (pcVar4 != (char *)0x0) {
      BIO_snprintf(pcVar4,(long)(iVar1 + 1),"%s",param_2);
      return pcVar4;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/dso/dso_dlfcn.c",0x107,"dlfcn_name_converter");
  ERR_set_error(0x25,0x6d,0);
  return (char *)0x0;
}



long dlfcn_bind_func(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dso/dso_dlfcn.c",0xae,"dlfcn_bind_func");
    ERR_set_error(0x25,0xc0102,0);
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_dlfcn.c",0xb2,"dlfcn_bind_func");
      ERR_set_error(0x25,0x69,0);
    }
    else {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (lVar2 == 0) {
        ERR_new(0);
        ERR_set_debug("crypto/dso/dso_dlfcn.c",0xb7,"dlfcn_bind_func");
        ERR_set_error(0x25,0x68,0);
      }
      else {
        lVar2 = dlsym(lVar2,param_2);
        if (lVar2 != 0) {
          return lVar2;
        }
        ERR_new();
        ERR_set_debug("crypto/dso/dso_dlfcn.c",0xbc,"dlfcn_bind_func");
        uVar3 = dlerror();
        ERR_set_error(0x25,0x6a,"symname(%s): %s",param_2,uVar3);
      }
    }
  }
  return 0;
}



undefined8 dlfcn_unload(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/dso/dso_dlfcn.c",0x92,"dlfcn_unload");
    ERR_set_error(0x25,0xc0102,0);
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    lVar2 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 8));
    if (lVar2 == 0) {
      ERR_new(0);
      ERR_set_debug("crypto/dso/dso_dlfcn.c",0x99,"dlfcn_unload");
      ERR_set_error(0x25,0x68,0);
      OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),0);
      return 0;
    }
    dlclose();
  }
  return 1;
}



undefined8 dlfcn_load(DSO *param_1)

{
  int iVar1;
  char *ptr;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  ptr = DSO_convert_filename(param_1,(char *)0x0);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dso/dso_dlfcn.c",0x69,"dlfcn_load");
    ERR_set_error(0x25,0x6f,0);
    CRYPTO_free((void *)0x0);
    uVar4 = 0;
  }
  else {
    lVar3 = dlopen(ptr,(-(uint)((param_1->flags & 0x20U) == 0) & 0xffffff00) + 0x102);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_dlfcn.c",0x76,"dlfcn_load");
      uVar4 = dlerror();
      ERR_set_error(0x25,0x67,"filename(%s): %s",ptr,uVar4);
      CRYPTO_free(ptr);
      uVar4 = 0;
    }
    else {
      *piVar2 = iVar1;
      iVar1 = OPENSSL_sk_push(param_1->meth_data,lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/dso/dso_dlfcn.c",0x80,"dlfcn_load");
        ERR_set_error(0x25,0x69,0);
        CRYPTO_free(ptr);
        dlclose(lVar3);
        uVar4 = 0;
      }
      else {
        param_1->loaded_filename = ptr;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



int dlfcn_pathbyaddr(code *param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (code *)0x0) {
    param_1 = dlfcn_pathbyaddr;
  }
  iVar1 = dladdr(param_1,local_58);
  if (iVar1 == 0) {
    uVar3 = dlerror();
    param_3 = -1;
    ERR_add_error_data(2,"dlfcn_pathbyaddr(): ",uVar3);
  }
  else {
    sVar2 = strlen(local_58[0]);
    iVar1 = (int)sVar2;
    if (param_3 < 1) {
      param_3 = iVar1 + 1;
    }
    else {
      if (iVar1 < param_3) {
        param_3 = iVar1 + 1;
      }
      else {
        iVar1 = param_3 + -1;
      }
      memcpy(param_2,local_58[0],(long)iVar1);
      *(undefined1 *)((long)param_2 + (long)iVar1) = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSO_METHOD * DSO_METHOD_openssl(void)

{
  return (DSO_METHOD *)dso_meth_dlfcn;
}


