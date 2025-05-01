
void pkey_fake_import(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_3,param_1[1]);
  return;
}



undefined8 ossl_callback_to_pkey_gencb(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0xffffffff;
  uVar3 = 1;
  local_24 = 0xffffffff;
  if (*(long *)(param_2 + 0x60) != 0) {
    lVar4 = OSSL_PARAM_locate_const(param_1,"potential");
    if (lVar4 != 0) {
      iVar2 = OSSL_PARAM_get_int(lVar4,&local_28);
      if (iVar2 != 0) {
        lVar4 = OSSL_PARAM_locate_const(param_1,"iteration");
        if (lVar4 != 0) {
          iVar2 = OSSL_PARAM_get_int(lVar4,&local_24);
          if (iVar2 != 0) {
            puVar1 = *(undefined4 **)(param_2 + 0x68);
            *puVar1 = local_28;
            puVar1[1] = local_24;
            uVar3 = (**(code **)(param_2 + 0x60))(param_2);
            goto LAB_001000b2;
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_001000b2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void trans_cb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = BN_GENCB_get_arg(param_3);
  puVar1 = *(undefined4 **)(lVar2 + 0x68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x001000fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x60))();
  return;
}



undefined8 ossl_pkey_todata_cb(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_PARAM_dup();
  *param_2 = uVar1;
  return 1;
}



int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_001001f8:
    ERR_new();
    iVar2 = -2;
    ERR_set_debug("crypto/evp/pmeth_gn.c",0x59,"gen_init");
    ERR_set_error(6,0x96,0);
    bVar1 = true;
  }
  else {
    evp_pkey_ctx_free_old_ops();
    lVar3 = *(long *)(ctx + 0x20);
    *(undefined4 *)ctx = 2;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x60) != 0)) {
      lVar3 = evp_keymgmt_gen_init(lVar3,0x84,0);
      *(long *)(ctx + 0x28) = lVar3;
      if (lVar3 != 0) {
        return 1;
      }
      ERR_new();
      iVar2 = 0;
      ERR_set_debug("crypto/evp/pmeth_gn.c",0x34,"gen_init");
      ERR_set_error(6,0x86,0);
      goto LAB_001001a6;
    }
    lVar3 = *(long *)(ctx + 0x78);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) goto LAB_001001f8;
    if (*(code **)(lVar3 + 0x20) == (code *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(lVar3 + 0x20))(ctx);
    bVar1 = iVar2 < 1;
  }
  if ((ctx == (EVP_PKEY_CTX *)0x0) || (!bVar1)) {
    return iVar2;
  }
LAB_001001a6:
  evp_pkey_ctx_free_old_ops(ctx);
  *(undefined4 *)ctx = 0;
  return iVar2;
}



int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00100318:
    ERR_new();
    iVar2 = -2;
    ERR_set_debug("crypto/evp/pmeth_gn.c",0x59,"gen_init");
    ERR_set_error(6,0x96,0);
    bVar1 = true;
  }
  else {
    evp_pkey_ctx_free_old_ops();
    lVar3 = *(long *)(ctx + 0x20);
    *(undefined4 *)ctx = 4;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x60) != 0)) {
      lVar3 = evp_keymgmt_gen_init(lVar3,3,0);
      *(long *)(ctx + 0x28) = lVar3;
      if (lVar3 != 0) {
        return 1;
      }
      ERR_new();
      iVar2 = 0;
      ERR_set_debug("crypto/evp/pmeth_gn.c",0x34,"gen_init");
      ERR_set_error(6,0x86,0);
      goto LAB_001002c6;
    }
    lVar3 = *(long *)(ctx + 0x78);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_00100318;
    if (*(code **)(lVar3 + 0x30) == (code *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(lVar3 + 0x30))(ctx);
    bVar1 = iVar2 < 1;
  }
  if ((ctx == (EVP_PKEY_CTX *)0x0) || (!bVar1)) {
    return iVar2;
  }
LAB_001002c6:
  evp_pkey_ctx_free_old_ops(ctx);
  *(undefined4 *)ctx = 0;
  return iVar2;
}



int EVP_PKEY_generate(EVP_PKEY *param_1,long *param_2)

{
  int iVar1;
  ENGINE *pEVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  EVP_PKEY *pEVar7;
  EVP_PKEY *pkey;
  char *pcVar8;
  long in_FS_OFFSET;
  char *local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
LAB_0010061e:
    iVar4 = -1;
    goto LAB_00100444;
  }
  pkey = param_1;
  if (param_1 == (EVP_PKEY *)0x0) {
LAB_001004e0:
    ERR_new();
    iVar4 = -2;
    ERR_set_debug("crypto/evp/pmeth_gn.c",0xf4,"EVP_PKEY_generate");
    ERR_set_error(6,0x96,0);
LAB_0010042f:
    if (pkey != (EVP_PKEY *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if ((param_1->type & 6) != 0) {
      pEVar7 = (EVP_PKEY *)*param_2;
      pkey = (EVP_PKEY *)0x0;
      if (pEVar7 == (EVP_PKEY *)0x0) {
        pEVar7 = EVP_PKEY_new();
        *param_2 = (long)pEVar7;
        pkey = pEVar7;
        if (pEVar7 == (EVP_PKEY *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/evp/pmeth_gn.c",0x94,"EVP_PKEY_generate");
          ERR_set_error(6,0x80006,0);
          goto LAB_0010061e;
        }
      }
      lVar6 = *(long *)&param_1->save_parameters;
      pEVar2 = param_1[2].engine;
      if (lVar6 == 0) {
        if ((pEVar2 == (ENGINE *)0x0) || (*(long *)(pEVar2 + 0x60) == 0)) {
          if (param_1->type == 2) {
            iVar4 = (**(code **)(*(long *)&param_1[2].references + 0x28))(param_1,pEVar7);
          }
          else {
            if (param_1->type != 4) goto LAB_001004e0;
            iVar4 = (**(code **)(*(long *)&param_1[2].references + 0x38))(param_1,pEVar7);
          }
          if (0 < iVar4) goto LAB_00100444;
        }
        else {
          ERR_new();
          iVar4 = -1;
          ERR_set_debug("crypto/evp/pmeth_gn.c",0xfd,"EVP_PKEY_generate");
          ERR_set_error(6,0xcc,0);
        }
      }
      else {
        param_1[2].type = 2;
        pcVar8 = (param_1->pkey).ptr;
        param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)(local_40 + 1);
        if (pEVar2 == (ENGINE *)0x0) {
LAB_00100474:
          lVar6 = evp_keymgmt_util_gen(pEVar7,pcVar8,lVar6,ossl_callback_to_pkey_gencb,param_1);
          if (lVar6 != 0) {
            param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)0x0;
            iVar4 = 1;
            evp_pkey_free_legacy(*param_2);
            *(int *)*param_2 = param_1[2].save_type;
            goto LAB_00100444;
          }
        }
        else {
          local_40[0] = pcVar8;
          uVar5 = evp_pkey_export_to_provider
                            (pEVar2,*(undefined8 *)&param_1->references,local_40,param_1->ameth);
          if (local_40[0] == (char *)0x0) goto LAB_001004e0;
          iVar4 = evp_keymgmt_gen_set_template
                            ((param_1->pkey).ptr,*(undefined8 *)&param_1->save_parameters,uVar5);
          if (iVar4 != 0) {
            lVar6 = *(long *)&param_1->save_parameters;
            pEVar7 = (EVP_PKEY *)*param_2;
            pcVar8 = (param_1->pkey).ptr;
            goto LAB_00100474;
          }
        }
        iVar1 = param_1[2].save_type;
        piVar3 = (int *)*param_2;
        param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)0x0;
        iVar4 = 0;
        *piVar3 = iVar1;
      }
      goto LAB_0010042f;
    }
    ERR_new();
    pkey = (EVP_PKEY *)0x0;
    iVar4 = -1;
    ERR_set_debug("crypto/evp/pmeth_gn.c",0xf8,"EVP_PKEY_generate");
    ERR_set_error(6,0x97,0);
  }
  EVP_PKEY_free(pkey);
LAB_00100444:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx,EVP_PKEY **ppkey)

{
  int iVar1;
  
  if (*(int *)ctx == 2) {
    iVar1 = EVP_PKEY_generate();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/pmeth_gn.c",0x106,"EVP_PKEY_paramgen");
  ERR_set_error(6,0x97,0);
  return -1;
}



int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx,EVP_PKEY **ppkey)

{
  int iVar1;
  
  if (*(int *)ctx == 4) {
    iVar1 = EVP_PKEY_generate();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/pmeth_gn.c",0x10f,"EVP_PKEY_keygen");
  ERR_set_error(6,0x97,0);
  return -1;
}



void EVP_PKEY_CTX_set_cb(EVP_PKEY_CTX *ctx,undefined1 *cb)

{
  *(undefined1 **)(ctx + 0x60) = cb;
  return;
}



undefined1 * EVP_PKEY_CTX_get_cb(EVP_PKEY_CTX *ctx)

{
  return *(undefined1 **)(ctx + 0x60);
}



void evp_pkey_set_cb_translate(undefined8 param_1,undefined8 param_2)

{
  BN_GENCB_set(param_1,trans_cb,param_2);
  return;
}



int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx,int idx)

{
  int iVar1;
  
  if (idx != -1) {
    iVar1 = 0;
    if ((-1 < idx) && (iVar1 = 0, idx <= *(int *)(ctx + 0x70))) {
      iVar1 = *(int *)(*(long *)(ctx + 0x68) + (long)idx * 4);
    }
    return iVar1;
  }
  return *(int *)(ctx + 0x70);
}



EVP_PKEY * EVP_PKEY_new_mac_key(int type,ENGINE *e,uchar *key,int keylen)

{
  int iVar1;
  EVP_PKEY *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY *)EVP_PKEY_CTX_new_id(type,e);
  if (ctx != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_keygen_init((EVP_PKEY_CTX *)ctx);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_CTX_set_mac_key(ctx,key,keylen);
      if (0 < iVar1) {
        EVP_PKEY_keygen((EVP_PKEY_CTX *)ctx,&local_28);
      }
    }
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)ctx);
    ctx = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ctx;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_fromdata_init(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 6) != 0) {
      evp_pkey_ctx_free_old_ops();
      if (*(long *)(param_1 + 8) != 0) {
        *param_1 = 8;
        return 1;
      }
    }
    *param_1 = 0;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/pmeth_gn.c",0x162,"fromdata_init");
  ERR_set_error(6,0x96,0);
  return 0xfffffffe;
}



ulong EVP_PKEY_fromdata(byte *param_1,long *param_2)

{
  long lVar1;
  EVP_PKEY *pkey;
  
  if ((param_1 == (byte *)0x0) || ((*param_1 & 8) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_gn.c",0x172,"EVP_PKEY_fromdata");
    ERR_set_error(6,0x96,0);
    return 0xfffffffe;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      lVar1 = evp_keymgmt_util_fromdata(*param_2,*(undefined8 *)(param_1 + 0x20));
      return (ulong)(lVar1 != 0);
    }
    pkey = EVP_PKEY_new();
    *param_2 = (long)pkey;
    if (pkey != (EVP_PKEY *)0x0) {
      lVar1 = evp_keymgmt_util_fromdata(pkey,*(undefined8 *)(param_1 + 0x20));
      if (lVar1 == 0) {
        *param_2 = 0;
        EVP_PKEY_free(pkey);
        return 0;
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_gn.c",0x17d,"EVP_PKEY_fromdata");
    ERR_set_error(6,0x80006,0);
  }
  return 0xffffffff;
}



undefined8 EVP_PKEY_fromdata_settable(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 6) != 0) {
      evp_pkey_ctx_free_old_ops();
      if (*(long *)(param_1 + 8) != 0) {
        *param_1 = 0;
        uVar1 = evp_keymgmt_import_types(*(long *)(param_1 + 8),param_2);
        return uVar1;
      }
    }
    *param_1 = 0;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/pmeth_gn.c",0x162,"fromdata_init");
  ERR_set_error(6,0x96,0);
  return 0;
}



undefined8 EVP_PKEY_export(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_gn.c",0x1ba,"EVP_PKEY_export");
    ERR_set_error(6,0xc0102,0);
    uVar1 = 0;
  }
  else {
    if ((*param_1 == 0) || (*(long *)(param_1 + 0x18) != 0)) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = evp_keymgmt_util_export();
        return uVar1;
      }
      goto LAB_00100aa4;
    }
    local_28 = param_3;
    local_20 = param_4;
    uVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x120))(param_1,&local_28,0x100000,0,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_00100aa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_todata(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = EVP_PKEY_export(param_1,param_2,ossl_pkey_todata_cb,param_3);
    return uVar1;
  }
  return 0;
}


