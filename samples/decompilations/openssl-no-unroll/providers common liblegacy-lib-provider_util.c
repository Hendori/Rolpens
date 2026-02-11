
void ossl_prov_cipher_reset(undefined1 (*param_1) [16])

{
  ENGINE *e;
  
  EVP_CIPHER_free(*(undefined8 *)(*param_1 + 8));
  e = *(ENGINE **)param_1[1];
  *param_1 = (undefined1  [16])0x0;
  ENGINE_finish(e);
  *(undefined8 *)param_1[1] = 0;
  return;
}



undefined8 ossl_prov_cipher_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ENGINE *e;
  
  if (param_2[1] == 0) {
LAB_00100052:
    e = (ENGINE *)param_2[2];
    if (e != (ENGINE *)0x0) {
      iVar3 = ENGINE_init(e);
      if (iVar3 == 0) {
        EVP_CIPHER_free(param_2[1]);
        goto LAB_00100089;
      }
      e = (ENGINE *)param_2[2];
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_1[2] = e;
    uVar4 = 1;
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  else {
    iVar3 = EVP_CIPHER_up_ref();
    if (iVar3 != 0) goto LAB_00100052;
LAB_00100089:
    uVar4 = 0;
  }
  return uVar4;
}



bool ossl_prov_cipher_load_from_params(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ENGINE *e;
  EVP_CIPHER *pEVar4;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 == 0) {
    return true;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      return false;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  ENGINE_finish((ENGINE *)param_1[2]);
  param_1[2] = 0;
  lVar3 = OSSL_PARAM_locate_const(param_2,"engine");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 4) {
      return false;
    }
    e = ENGINE_by_id(*(char **)(lVar3 + 0x10));
    param_1[2] = (long)e;
    if (e == (ENGINE *)0x0) {
      return false;
    }
    iVar1 = ENGINE_init(e);
    if (iVar1 == 0) {
      ENGINE_free((ENGINE *)param_1[2]);
      param_1[2] = 0;
      return false;
    }
    ENGINE_free((ENGINE *)param_1[2]);
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"cipher");
  if (lVar3 == 0) {
    return true;
  }
  if (*(int *)(lVar3 + 8) != 4) {
    return false;
  }
  EVP_CIPHER_free(param_1[1]);
  ERR_set_mark();
  lVar2 = EVP_CIPHER_fetch(param_3,*(undefined8 *)(lVar3 + 0x10),lVar2);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  if (lVar2 == 0) {
    pEVar4 = EVP_get_cipherbyname(*(char **)(lVar3 + 0x10));
    if ((pEVar4 == (EVP_CIPHER *)0x0) || (*(int *)&pEVar4->init == 1)) {
      if (*param_1 == 0) {
        ERR_clear_last_mark();
        goto LAB_001001ab;
      }
    }
    else {
      *param_1 = (long)pEVar4;
    }
  }
  ERR_pop_to_mark();
LAB_001001ab:
  return *param_1 != 0;
}



undefined8 ossl_prov_cipher_cipher(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ossl_prov_cipher_engine(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void ossl_prov_digest_reset(undefined1 (*param_1) [16])

{
  ENGINE *e;
  
  EVP_MD_free(*(undefined8 *)(*param_1 + 8));
  e = *(ENGINE **)param_1[1];
  *param_1 = (undefined1  [16])0x0;
  ENGINE_finish(e);
  *(undefined8 *)param_1[1] = 0;
  return;
}



undefined8 ossl_prov_digest_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ENGINE *e;
  
  if (param_2[1] == 0) {
LAB_00100282:
    e = (ENGINE *)param_2[2];
    if (e != (ENGINE *)0x0) {
      iVar3 = ENGINE_init(e);
      if (iVar3 == 0) {
        EVP_MD_free(param_2[1]);
        goto LAB_001002b9;
      }
      e = (ENGINE *)param_2[2];
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_1[2] = e;
    uVar4 = 1;
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  else {
    iVar3 = EVP_MD_up_ref();
    if (iVar3 != 0) goto LAB_00100282;
LAB_001002b9:
    uVar4 = 0;
  }
  return uVar4;
}



void ossl_prov_digest_fetch
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  EVP_MD_free(param_1[1]);
  uVar1 = EVP_MD_fetch(param_2,param_3,param_4);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  return;
}



bool ossl_prov_digest_load_from_params(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ENGINE *e;
  EVP_MD *pEVar4;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 == 0) {
    return true;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      return false;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  ENGINE_finish((ENGINE *)param_1[2]);
  param_1[2] = 0;
  lVar3 = OSSL_PARAM_locate_const(param_2,"engine");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 4) {
      return false;
    }
    e = ENGINE_by_id(*(char **)(lVar3 + 0x10));
    param_1[2] = (long)e;
    if (e == (ENGINE *)0x0) {
      return false;
    }
    iVar1 = ENGINE_init(e);
    if (iVar1 == 0) {
      ENGINE_free((ENGINE *)param_1[2]);
      param_1[2] = 0;
      return false;
    }
    ENGINE_free((ENGINE *)param_1[2]);
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
  if (lVar3 == 0) {
    return true;
  }
  if (*(int *)(lVar3 + 8) != 4) {
    return false;
  }
  ERR_set_mark();
  ossl_prov_digest_fetch(param_1,param_3,*(undefined8 *)(lVar3 + 0x10),lVar2);
  if (*param_1 == 0) {
    pEVar4 = EVP_get_digestbyname(*(char **)(lVar3 + 0x10));
    if ((pEVar4 == (EVP_MD *)0x0) || (*(int *)&pEVar4->init == 1)) {
      if (*param_1 == 0) {
        ERR_clear_last_mark();
        goto LAB_00100409;
      }
    }
    else {
      *param_1 = (long)pEVar4;
    }
  }
  ERR_pop_to_mark();
LAB_00100409:
  return *param_1 != 0;
}



void ossl_prov_digest_set_md(undefined8 *param_1,undefined8 param_2)

{
  ossl_prov_digest_reset();
  *param_1 = param_2;
  param_1[1] = param_2;
  return;
}



undefined8 ossl_prov_digest_md(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ossl_prov_digest_engine(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8
ossl_prov_set_macctx
          (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
          long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110 [26];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_00100710:
    if (param_4 == 0) {
      puVar3 = &local_138;
    }
    else {
LAB_0010051e:
      puVar3 = local_110;
      OSSL_PARAM_construct_utf8_string(&local_168,"digest",param_4,0);
      local_118 = local_148;
      local_138 = local_168;
      uStack_130 = uStack_160;
      local_128 = local_158;
      uStack_120 = uStack_150;
    }
    puVar4 = puVar3;
    if (param_3 != 0) {
LAB_0010056c:
      puVar4 = puVar3 + 5;
      OSSL_PARAM_construct_utf8_string(&local_168,"cipher",param_3,0);
      *puVar3 = local_168;
      puVar3[1] = uStack_160;
      puVar3[2] = local_158;
      puVar3[3] = uStack_150;
      puVar3[4] = local_148;
    }
    if (param_6 != 0) {
LAB_001005b2:
      OSSL_PARAM_construct_utf8_string(&local_168,"properties",param_6,0);
      *puVar4 = local_168;
      puVar4[1] = uStack_160;
      puVar4[2] = local_158;
      puVar4[3] = uStack_150;
      puVar4[4] = local_148;
      puVar4 = puVar4 + 5;
    }
    puVar3 = puVar4;
    if (param_5 != 0) goto LAB_001005f8;
  }
  else {
    if (param_4 == 0) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) == 4) {
          param_4 = *(long *)(lVar2 + 0x10);
          if (param_3 == 0) goto LAB_00100730;
          if (param_5 != 0) {
            if (param_4 != 0) goto LAB_0010051e;
            goto LAB_001007cb;
          }
          goto LAB_0010075a;
        }
LAB_001007a7:
        uVar1 = 0;
        goto LAB_001006aa;
      }
      if (param_3 == 0) goto LAB_00100730;
      if ((param_5 == 0) && (lVar2 = OSSL_PARAM_locate_const(param_2,"engine"), lVar2 != 0))
      goto LAB_001006fd;
LAB_001007cb:
      puVar3 = &local_138;
      goto LAB_0010056c;
    }
    if (param_3 != 0) {
      if ((param_5 == 0) &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,"engine"), param_5 = lVar2, lVar2 != 0))
      goto LAB_001006fd;
      goto LAB_0010051e;
    }
LAB_00100730:
    lVar2 = OSSL_PARAM_locate_const(param_2,"cipher");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) goto LAB_001007a7;
      param_3 = *(long *)(lVar2 + 0x10);
      if (param_5 != 0) goto LAB_00100710;
LAB_0010075a:
      lVar2 = OSSL_PARAM_locate_const(param_2,"engine");
      if (lVar2 == 0) {
        param_5 = 0;
        goto LAB_00100710;
      }
LAB_001006fd:
      if (*(int *)(lVar2 + 8) != 4) goto LAB_001007a7;
      param_5 = *(long *)(lVar2 + 0x10);
      goto LAB_00100710;
    }
    param_3 = 0;
    if (param_5 == 0) goto LAB_0010075a;
    if (param_4 != 0) goto LAB_0010051e;
    puVar4 = &local_138;
    if (param_6 != 0) goto LAB_001005b2;
LAB_001005f8:
    OSSL_PARAM_construct_utf8_string(&local_168,"engine",param_5,0);
    puVar3 = puVar4 + 5;
    *puVar4 = local_168;
    puVar4[1] = uStack_160;
    puVar4[2] = local_158;
    puVar4[3] = uStack_150;
    puVar4[4] = local_148;
  }
  puVar4 = puVar3;
  if (param_7 != 0) {
    puVar4 = puVar3 + 5;
    OSSL_PARAM_construct_octet_string(&local_168,&_LC4,param_7,param_8);
    *puVar3 = local_168;
    puVar3[1] = uStack_160;
    puVar3[2] = local_158;
    puVar3[3] = uStack_150;
    puVar3[4] = local_148;
  }
  OSSL_PARAM_construct_end(&local_168);
  *puVar4 = local_168;
  puVar4[1] = uStack_160;
  puVar4[2] = local_158;
  puVar4[3] = uStack_150;
  puVar4[4] = local_148;
  uVar1 = EVP_MAC_CTX_set_params(param_1,&local_138);
LAB_001006aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8
ossl_prov_macctx_load_from_params
          (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar2 == 0) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        lVar2 = *(long *)(lVar2 + 0x10);
      }
    }
    else {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      param_3 = *(long *)(lVar2 + 0x10);
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        lVar2 = *(long *)(lVar2 + 0x10);
      }
      if (param_3 != 0) goto LAB_001008a4;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 1;
    }
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    }
LAB_001008a4:
    lVar3 = EVP_MAC_fetch(param_6,param_3,lVar2);
    EVP_MAC_CTX_free(*param_1);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = EVP_MAC_CTX_new(lVar3);
    }
    *param_1 = lVar4;
    EVP_MAC_free(lVar3);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = ossl_prov_set_macctx(lVar3,param_2,param_4,param_5,0,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
  EVP_MAC_CTX_free(*param_1);
  *param_1 = 0;
  return 0;
}



void ossl_prov_cache_exported_algorithms(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  if (*param_2 != 0) {
    return;
  }
  if (*param_1 != 0) {
    iVar5 = 0;
    do {
      if ((code *)param_1[4] == (code *)0x0) {
LAB_00100a07:
        lVar3 = (long)iVar5;
        lVar1 = param_1[1];
        iVar5 = iVar5 + 1;
        plVar4 = param_2 + lVar3 * 4;
        *plVar4 = *param_1;
        plVar4[1] = lVar1;
        lVar1 = param_1[3];
        plVar4[2] = param_1[2];
        plVar4[3] = lVar1;
      }
      else {
        iVar2 = (*(code *)param_1[4])();
        if (iVar2 != 0) goto LAB_00100a07;
      }
      param_1 = param_1 + 5;
    } while (*param_1 != 0);
    param_2 = param_2 + (long)iVar5 * 4;
  }
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  lVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = lVar1;
  return;
}



undefined8 ossl_prov_memdup(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (param_1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    lVar1 = CRYPTO_memdup(param_1,param_2,"providers/common/provider_util.c",0x16e);
    *param_3 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *param_4 = param_2;
  }
  return 1;
}


