
undefined1  [16]
X509_STORE_set_default_paths_ex(X509_STORE *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  X509_LOOKUP_METHOD *pXVar2;
  X509_LOOKUP *pXVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  pXVar2 = X509_LOOKUP_file();
  pXVar3 = X509_STORE_add_lookup(param_1,pXVar2);
  uVar4 = extraout_RDX;
  if (pXVar3 != (X509_LOOKUP *)0x0) {
    X509_LOOKUP_ctrl_ex(pXVar3,1,0,3,0,param_2,param_3);
    pXVar2 = X509_LOOKUP_hash_dir();
    pXVar3 = X509_STORE_add_lookup(param_1,pXVar2);
    uVar4 = extraout_RDX_00;
    if (pXVar3 != (X509_LOOKUP *)0x0) {
      X509_LOOKUP_ctrl(pXVar3,2,(char *)0x0,3,(char **)0x0);
      pXVar2 = (X509_LOOKUP_METHOD *)X509_LOOKUP_store();
      pXVar3 = X509_STORE_add_lookup(param_1,pXVar2);
      uVar4 = extraout_RDX_01;
      if (pXVar3 != (X509_LOOKUP *)0x0) {
        X509_LOOKUP_ctrl_ex(pXVar3,3,0,0,0,param_2,param_3);
        ERR_clear_error();
        auVar5._8_8_ = 0x100088;
        auVar5._0_8_ = 1;
        return auVar5;
      }
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  return auVar1 << 0x40;
}



int X509_STORE_set_default_paths(X509_STORE *ctx)

{
  int iVar1;
  
  iVar1 = X509_STORE_set_default_paths_ex(ctx,0,0);
  return iVar1;
}



bool X509_STORE_load_file_ex(X509_STORE *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *pXVar3;
  
  if (param_2 != 0) {
    m = X509_LOOKUP_file();
    pXVar3 = X509_STORE_add_lookup(param_1,m);
    bVar1 = false;
    if (pXVar3 != (X509_LOOKUP *)0x0) {
      iVar2 = X509_LOOKUP_ctrl_ex(pXVar3,1,param_2,1,0,param_3,param_4);
      bVar1 = 0 < iVar2;
    }
    return bVar1;
  }
  return false;
}



void X509_STORE_load_file(undefined8 param_1,undefined8 param_2)

{
  X509_STORE_load_file_ex(param_1,param_2,0,0);
  return;
}



bool X509_STORE_load_path(X509_STORE *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  
  if (param_2 != (char *)0x0) {
    m = X509_LOOKUP_hash_dir();
    ctx = X509_STORE_add_lookup(param_1,m);
    bVar1 = false;
    if (ctx != (X509_LOOKUP *)0x0) {
      iVar2 = X509_LOOKUP_ctrl(ctx,2,param_2,1,(char **)0x0);
      bVar1 = 0 < iVar2;
    }
    return bVar1;
  }
  return false;
}



bool X509_STORE_load_store_ex
               (X509_STORE *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *pXVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    m = (X509_LOOKUP_METHOD *)X509_LOOKUP_store();
    pXVar2 = X509_STORE_add_lookup(param_1,m);
    bVar3 = false;
    if (pXVar2 != (X509_LOOKUP *)0x0) {
      iVar1 = X509_LOOKUP_ctrl_ex(pXVar2,3,param_2,0,0,param_3,param_4);
      bVar3 = iVar1 != 0;
    }
    return bVar3;
  }
  return false;
}



void X509_STORE_load_store(undefined8 param_1,undefined8 param_2)

{
  X509_STORE_load_store_ex(param_1,param_2,0,0);
  return;
}



bool X509_STORE_load_locations_ex
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 == 0 && param_2 == 0) {
    return false;
  }
  if ((param_2 != 0) &&
     (iVar1 = X509_STORE_load_file_ex(param_1,param_2,param_4,param_5), iVar1 == 0)) {
    return false;
  }
  bVar2 = true;
  if (param_3 != 0) {
    iVar1 = X509_STORE_load_path(param_1,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



int X509_STORE_load_locations(X509_STORE *ctx,char *file,char *dir)

{
  int iVar1;
  
  iVar1 = X509_STORE_load_locations_ex();
  return iVar1;
}


