
void destruct_evp_method(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x40))();
  return;
}



long construct_evp_method(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_provider_libctx(param_2);
  uVar2 = ossl_namemap_stored(uVar2);
  iVar1 = ossl_namemap_add_names(uVar2,0,*param_1,0x3a);
  if (iVar1 == 0) {
    return 0;
  }
  lVar3 = (**(code **)(param_3 + 0x30))(iVar1,param_1,param_2);
  if (lVar3 != 0) {
    return lVar3;
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}



void get_tmp_evp_method_store(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = ossl_method_store_new(*param_1);
  param_1[4] = uVar1;
  return;
}



undefined1  [16]
put_evp_method_in_store
          (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulong extraout_RDX;
  ulong uVar5;
  size_t sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  sVar6 = 0;
  if (param_4 != (char *)0x0) {
    pcVar3 = strchr(param_4,0x3a);
    sVar6 = (long)pcVar3 - (long)param_4;
    if (pcVar3 == (char *)0x0) {
      sVar6 = strlen(param_4);
    }
  }
  auVar7 = ossl_namemap_stored(*param_6);
  uVar5 = auVar7._8_8_;
  if (auVar7._0_8_ != 0) {
    iVar2 = ossl_namemap_name2num_n(auVar7._0_8_,param_4,sVar6);
    uVar5 = extraout_RDX;
    if (iVar2 != 0) {
      uVar4 = *(uint *)(param_6 + 1);
      uVar5 = (ulong)uVar4;
      if ((iVar2 - 1U < 0x7fffff) && (uVar4 - 1 < 0xff)) {
        uVar4 = uVar4 | iVar2 << 8;
        if (param_1 == 0) {
          param_1 = ossl_lib_ctx_get_data(*param_6,0);
          uVar5 = (ulong)uVar4;
          if (param_1 == 0) goto LAB_0010018b;
        }
        uVar1 = param_6[8];
        auVar8._0_8_ = ossl_method_store_add(param_1,param_3,uVar4,param_5,param_2,param_6[7]);
        auVar8._8_8_ = uVar1;
        return auVar8;
      }
    }
  }
LAB_0010018b:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar5;
  return auVar7 << 0x40;
}



undefined8 get_evp_method_from_store(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  char *__s;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)((long)param_3 + 0xc);
  local_38 = 0;
  if (iVar2 == 0) {
    if (param_3[2] != 0) {
      lVar3 = ossl_namemap_stored(*param_3);
      __s = (char *)param_3[2];
      pcVar4 = strchr(__s,0x3a);
      sVar6 = (long)pcVar4 - (long)__s;
      if (pcVar4 == (char *)0x0) {
        sVar6 = strlen(__s);
      }
      if ((lVar3 != 0) && (iVar2 = ossl_namemap_name2num_n(lVar3,__s,sVar6), iVar2 != 0))
      goto LAB_00100232;
    }
  }
  else {
LAB_00100232:
    uVar1 = *(uint *)(param_3 + 1);
    if (((iVar2 - 1U < 0x7fffff) && (uVar1 - 1 < 0xff)) &&
       (((param_1 != 0 || (param_1 = ossl_lib_ctx_get_data(*param_3,0), param_1 != 0)) &&
        (iVar2 = ossl_method_store_fetch(param_1,iVar2 << 8 | uVar1,param_3[3],param_2,&local_38),
        uVar5 = local_38, iVar2 != 0)))) goto LAB_00100292;
  }
  uVar5 = 0;
LAB_00100292:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 unreserve_evp_method_store(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = ossl_method_unlock_store();
    return uVar1;
  }
  lVar2 = ossl_lib_ctx_get_data(*param_2,0);
  if (lVar2 != 0) {
    uVar1 = ossl_method_unlock_store(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 reserve_evp_method_store(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = ossl_method_lock_store();
    return uVar1;
  }
  lVar2 = ossl_lib_ctx_get_data(*param_2,0);
  if (lVar2 != 0) {
    uVar1 = ossl_method_lock_store(lVar2);
    return uVar1;
  }
  return 0;
}



undefined4
evp_set_parsed_default_properties
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  void *ptr;
  undefined8 uVar6;
  
  lVar3 = ossl_lib_ctx_get_data(param_1,0);
  puVar4 = (undefined8 *)ossl_ctx_global_properties(param_1,param_3);
  if ((puVar4 == (undefined8 *)0x0) || (lVar3 == 0)) {
    ERR_new();
    uVar6 = 0x1f9;
  }
  else {
    if (param_4 == 0) {
      ossl_global_properties_stop_mirroring();
    }
    else {
      iVar1 = ossl_global_properties_no_mirrored(param_1);
      if (iVar1 != 0) {
        return 0;
      }
    }
    lVar5 = ossl_property_list_to_string(param_1,param_2,0,0);
    if ((lVar5 == 0) ||
       (ptr = CRYPTO_malloc((int)lVar5,"crypto/evp/evp_fetch.c",0x1e2), ptr == (void *)0x0)) {
      ERR_new();
      uVar6 = 0x1e4;
    }
    else {
      lVar5 = ossl_property_list_to_string(param_1,param_2,ptr,lVar5);
      if (lVar5 != 0) {
        ossl_provider_default_props_update(param_1,ptr);
        CRYPTO_free(ptr);
        ossl_property_free(*puVar4);
        *puVar4 = param_2;
        uVar2 = ossl_method_store_cache_flush_all(lVar3);
        ossl_decoder_cache_flush(param_1);
        return uVar2;
      }
      CRYPTO_free(ptr);
      ERR_new();
      uVar6 = 0x1ea;
    }
  }
  ERR_set_debug("crypto/evp/evp_fetch.c",uVar6,"evp_set_parsed_default_properties");
  ERR_set_error(6,0xc0103,0);
  return 0;
}



void filter_on_operation_id(byte param_1,undefined8 param_2,uint *param_3)

{
  if ((uint)param_1 != *param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010051b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 2))(param_2,*(undefined8 *)(param_3 + 4),*(code **)(param_3 + 2));
  return;
}



char * inner_evp_generic_fetch_constprop_0
                 (undefined8 *param_1,undefined8 param_2,uint param_3,char *param_4,char *param_5,
                 undefined8 param_6,undefined8 param_7,code *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_90 [2];
  char *local_80;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code *pcStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90[0] = param_2;
  lVar4 = ossl_lib_ctx_get_data(*param_1,0);
  lVar5 = ossl_namemap_stored(*param_1);
  local_80 = (char *)0x0;
  pcVar6 = "";
  if (param_5 != (char *)0x0) {
    pcVar6 = param_5;
  }
  if ((lVar4 == 0) || (lVar5 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_fetch.c",0x116,"inner_evp_generic_fetch");
    ERR_set_error(6,0x80106,0);
    pcVar6 = (char *)0x0;
    goto LAB_00100752;
  }
  if ((int)param_3 < 1) {
    ERR_new();
    uVar7 = 0x11f;
LAB_00100851:
    ERR_set_debug("crypto/evp/evp_fetch.c",uVar7,"inner_evp_generic_fetch");
    ERR_set_error(6,0xc0103,0);
    pcVar6 = (char *)0x0;
    goto LAB_00100752;
  }
  if ((param_4 == (char *)0x0) || (iVar2 = ossl_namemap_name2num(lVar5,param_4), iVar2 == 0)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    *(uint *)(param_1 + 1) = param_3;
    param_1[2] = param_4;
    local_48 = 0x100000;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[3] = pcVar6;
    local_78 = get_tmp_evp_method_store;
    pcStack_70 = reserve_evp_method_store;
    param_1[6] = param_6;
    local_68 = unreserve_evp_method_store;
    pcStack_60 = get_evp_method_from_store;
    param_1[7] = param_7;
    local_58 = put_evp_method_in_store;
    pcStack_50 = construct_evp_method;
    param_1[8] = param_8;
    local_80 = (char *)ossl_method_construct(*param_1,param_3,local_90,0,&local_78,param_1);
    if (local_80 != (char *)0x0) {
      iVar2 = ossl_namemap_name2num(lVar5,param_4);
      if (iVar2 != 0) {
        if (iVar2 - 1U < 0x7fffff) goto LAB_001007a9;
LAB_001007ea:
        bVar1 = *(byte *)(param_1 + 5);
        pcVar6 = local_80;
        if (local_80 != (char *)0x0) goto LAB_00100752;
        goto LAB_00100938;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c",0x15f,"inner_evp_generic_fetch");
      ERR_set_error(6,0x8010d,"Algorithm %s cannot be found",param_4);
      (*param_8)(local_80);
      local_80 = (char *)0x0;
    }
    bVar1 = *(byte *)(param_1 + 5);
    pcVar6 = param_4;
    if (param_4 == (char *)0x0) goto LAB_00100752;
    iVar2 = 0;
LAB_00100938:
    iVar3 = 0x8010d - (~(uint)bVar1 & 1);
    if (param_4 != (char *)0x0) goto LAB_00100948;
    param_4 = (char *)ossl_namemap_num2name(lVar5,iVar2,0);
    ERR_new();
    ERR_set_debug("crypto/evp/evp_fetch.c",0x177,"inner_evp_generic_fetch");
    if (param_5 == (char *)0x0) {
      param_5 = "<null>";
    }
    if (param_4 == (char *)0x0) {
      param_4 = "<null>";
    }
  }
  else {
    if ((0x7ffffe < iVar2 - 1U) || (0xfe < param_3 - 1)) {
      ERR_new();
      uVar7 = 0x12f;
      goto LAB_00100851;
    }
    iVar3 = ossl_method_store_cache_get(lVar4,local_90[0],iVar2 << 8 | param_3,pcVar6,&local_80);
    if (iVar3 == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      *(int *)((long)param_1 + 0xc) = iVar2;
      *(uint *)(param_1 + 1) = param_3;
      local_48 = 0x100000;
      local_78 = get_tmp_evp_method_store;
      pcStack_70 = reserve_evp_method_store;
      param_1[3] = pcVar6;
      param_1[2] = param_4;
      param_1[6] = param_6;
      local_68 = unreserve_evp_method_store;
      pcStack_60 = get_evp_method_from_store;
      param_1[7] = param_7;
      param_1[8] = param_8;
      local_58 = put_evp_method_in_store;
      pcStack_50 = construct_evp_method;
      local_80 = (char *)ossl_method_construct(*param_1,param_3,local_90,0,&local_78,param_1);
      if (local_80 != (char *)0x0) {
LAB_001007a9:
        if (param_3 - 1 < 0xff) {
          ossl_method_store_cache_set
                    (lVar4,local_90[0],iVar2 << 8 | param_3,pcVar6,local_80,param_7,param_8);
        }
        goto LAB_001007ea;
      }
      bVar1 = *(byte *)(param_1 + 5);
      goto LAB_00100938;
    }
    pcVar6 = local_80;
    if (local_80 != (char *)0x0) goto LAB_00100752;
    iVar3 = 0x8010d;
LAB_00100948:
    ERR_new();
    ERR_set_debug("crypto/evp/evp_fetch.c",0x177,"inner_evp_generic_fetch");
    if (param_5 == (char *)0x0) {
      param_5 = "<null>";
    }
  }
  uVar7 = ossl_lib_ctx_get_descriptor(*param_1);
  ERR_set_error(6,iVar3,"%s, Algorithm (%s : %d), Properties (%s)",uVar7,param_4,iVar2,param_5);
  pcVar6 = local_80;
LAB_00100752:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar6;
}



undefined8
evp_generic_fetch(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_58 [4];
  long local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_58[0] = param_1;
  uVar1 = inner_evp_generic_fetch_constprop_0(local_58,0,param_2,param_3,param_4,param_5,param_6);
  if (local_38 != 0) {
    ossl_method_store_free();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
evp_generic_fetch_from_prov
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_88 [4];
  long local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = ossl_provider_libctx();
  local_68 = 0;
  uVar1 = inner_evp_generic_fetch_constprop_0
                    (local_88,param_1,param_2,param_3,param_4,param_5,param_6);
  if (local_68 != 0) {
    ossl_method_store_free();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 evp_method_store_cache_flush(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,0);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = ossl_method_store_cache_flush_all(lVar1);
  return uVar2;
}



undefined8 evp_method_store_remove_all_provided(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_provider_libctx();
  lVar2 = ossl_lib_ctx_get_data(uVar1,0);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = ossl_method_store_remove_all_provided(lVar2,param_1);
  return uVar1;
}



undefined8
evp_set_default_properties_int
          (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_2 = ossl_parse_query(param_1,param_2,1), param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_fetch.c",0x203,"evp_set_default_properties_int");
    ERR_set_error(6,0xd2,0);
    return 0;
  }
  iVar1 = evp_set_parsed_default_properties(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    ossl_property_free(param_2);
    return 0;
  }
  return 1;
}



void EVP_set_default_properties(undefined8 param_1,undefined8 param_2)

{
  evp_set_default_properties_int(param_1,param_2,1,0);
  return;
}



bool EVP_default_properties_is_fips_enabled(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = (undefined8 *)ossl_ctx_global_properties(param_1,1);
  bVar3 = false;
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = ossl_property_is_enabled(param_1,&_LC5,*puVar2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



undefined8 evp_default_properties_enable_fips_int(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    plVar2 = (long *)ossl_ctx_global_properties(param_1,param_3);
    pcVar6 = "-fips";
  }
  else {
    plVar2 = (long *)ossl_ctx_global_properties(param_1,param_3);
    pcVar6 = "fips=yes";
  }
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    lVar3 = ossl_parse_query(param_1,pcVar6,1);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c",0x21d,"evp_default_properties_merge");
      ERR_set_error(6,0xd2,0);
      uVar5 = 0;
    }
    else {
      lVar4 = ossl_property_merge(lVar3,*plVar2);
      ossl_property_free(lVar3);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_fetch.c",0x223,"evp_default_properties_merge");
        ERR_set_error(6,0x8000f,0);
        uVar5 = 0;
      }
      else {
        iVar1 = evp_set_parsed_default_properties(param_1,lVar4,0,0);
        uVar5 = 1;
        if (iVar1 == 0) {
          ossl_property_free(lVar4);
          uVar5 = 0;
        }
      }
    }
    return uVar5;
  }
  uVar5 = evp_set_default_properties_int(param_1,pcVar6,0,0);
  return uVar5;
}



void EVP_default_properties_enable_fips(undefined8 param_1,undefined8 param_2)

{
  evp_default_properties_enable_fips_int(param_1,param_2,1);
  return;
}



char * evp_get_global_properties_str(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  
  puVar1 = (undefined8 *)ossl_ctx_global_properties();
  if (puVar1 == (undefined8 *)0x0) {
    pcVar3 = CRYPTO_strdup("","crypto/evp/evp_fetch.c",0x24e);
    return pcVar3;
  }
  lVar2 = ossl_property_list_to_string(param_1,*puVar1,0,0);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_fetch.c",0x252,"evp_get_global_properties_str");
    ERR_set_error(6,0xc0103,0);
  }
  else {
    pcVar3 = (char *)CRYPTO_malloc((int)lVar2,"crypto/evp/evp_fetch.c",0x256);
    if (pcVar3 != (char *)0x0) {
      lVar2 = ossl_property_list_to_string(param_1,*puVar1,pcVar3,lVar2);
      if (lVar2 != 0) {
        return pcVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c",0x25a,"evp_get_global_properties_str");
      ERR_set_error(6,0xc0103,0);
      CRYPTO_free(pcVar3);
    }
  }
  return (char *)0x0;
}



void EVP_get1_default_properties(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = ossl_lib_ctx_is_global_default();
  evp_get_global_properties_str(param_1,uVar1);
  return;
}



void evp_generic_do_all(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78 [4];
  long local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_78[0] = param_1;
  inner_evp_generic_fetch_constprop_0(local_78,0,param_2,0,0,param_5,param_6);
  local_98[0] = param_2;
  local_90 = param_3;
  local_88 = param_4;
  if (local_58 != 0) {
    ossl_method_store_do_all(local_58,filter_on_operation_id,local_98);
    param_7 = extraout_RDX;
  }
  uVar1 = ossl_lib_ctx_get_data(param_1,0,param_7);
  ossl_method_store_do_all(uVar1,filter_on_operation_id,local_98);
  if (local_58 != 0) {
    ossl_method_store_free();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool evp_is_a(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_provider_libctx();
  uVar2 = ossl_namemap_stored(uVar2);
  if (param_1 == 0) {
    param_2 = ossl_namemap_name2num(uVar2,param_3);
  }
  iVar1 = ossl_namemap_name2num(uVar2,param_4);
  return iVar1 == param_2;
}



void evp_names_do_all(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_provider_libctx();
  uVar1 = ossl_namemap_stored(uVar1);
  ossl_namemap_doall_names(uVar1,param_2,param_3,param_4);
  return;
}


