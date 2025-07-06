void destruct_evp_method(undefined8 param_1, long param_2) {
   for (int i_18 = 0; i_18 < 2; i_18++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( **(code**)( param_2 + 0x40 ) )();
   return;
}long construct_evp_method(undefined8 *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   uVar2 = ossl_provider_libctx(param_2);
   uVar2 = ossl_namemap_stored(uVar2);
   iVar1 = ossl_namemap_add_names(uVar2, 0, *param_1, 0x3a);
   if (iVar1 == 0) {
      return 0;
   }
   lVar3 = ( **(code**)( param_3 + 0x30 ) )(iVar1, param_1, param_2);
   if (lVar3 != 0) {
      return lVar3;
   }
   *(byte*)( param_3 + 0x28 ) = *(byte*)( param_3 + 0x28 ) | 1;
   return 0;
}void get_tmp_evp_method_store(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1[4] != 0) {
      return;
   }
   uVar1 = ossl_method_store_new(*param_1);
   param_1[4] = uVar1;
   return;
}undefined1[16];put_evp_method_in_store(long param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 param_5, undefined8 *param_6) {
   undefined8 uVar1;
   int iVar2;
   char *pcVar3;
   uint uVar4;
   ulong extraout_RDX;
   ulong uVar5;
   size_t sVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   sVar6 = 0;
   if (param_4 != (char*)0x0) {
      pcVar3 = strchr(param_4, 0x3a);
      sVar6 = (long)pcVar3 - (long)param_4;
      if (pcVar3 == (char*)0x0) {
         sVar6 = strlen(param_4);
      }
   }
   auVar7 = ossl_namemap_stored(*param_6);
   uVar5 = auVar7._8_8_;
   if (auVar7._0_8_ != 0) {
      iVar2 = ossl_namemap_name2num_n(auVar7._0_8_, param_4, sVar6);
      uVar5 = extraout_RDX;
      if (iVar2 != 0) {
         uVar4 = *(uint*)( param_6 + 1 );
         uVar5 = (ulong)uVar4;
         if (( iVar2 - 1U < 0x7fffff ) && ( uVar4 - 1 < 0xff )) {
            uVar4 = uVar4 | iVar2 << 8;
            if (param_1 == 0) {
               param_1 = ossl_lib_ctx_get_data(*param_6, 0);
               uVar5 = (ulong)uVar4;
               if (param_1 == 0) goto LAB_0010018b;
            }
            uVar1 = param_6[8];
            auVar8._0_8_ = ossl_method_store_add(param_1, param_3, uVar4, param_5, param_2, param_6[7]);
            auVar8._8_8_ = uVar1;
            return auVar8;
         }
      }
   }
   LAB_0010018b:auVar7._8_8_ = 0;
   auVar7._0_8_ = uVar5;
   return auVar7 << 0x40;
}undefined8 get_evp_method_from_store(long param_1, undefined8 param_2, undefined8 *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)( (long)param_3 + 0xc );
   local_38 = 0;
   if (iVar2 == 0) {
      if (param_3[2] != 0) {
         lVar3 = ossl_namemap_stored(*param_3);
         __s = (char*)param_3[2];
         pcVar4 = strchr(__s, 0x3a);
         sVar6 = (long)pcVar4 - (long)__s;
         if (pcVar4 == (char*)0x0) {
            sVar6 = strlen(__s);
         }
         if (( lVar3 != 0 ) && ( iVar2 = iVar2 != 0 )) goto LAB_00100232;
      }
   } else {
      LAB_00100232:uVar1 = *(uint*)( param_3 + 1 );
      if (( ( iVar2 - 1U < 0x7fffff ) && ( uVar1 - 1 < 0xff ) ) && ( ( ( param_1 != 0 || ( param_1 = ossl_lib_ctx_get_data(*param_3, 0) ),param_1 != 0 ) ) && ( iVar2 = ossl_method_store_fetch(param_1, iVar2 << 8 | uVar1, param_3[3], param_2, &local_38) ),uVar5 = local_38,iVar2 != 0 )) goto LAB_00100292;
   }
   uVar5 = 0;
   LAB_00100292:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}undefined8 unreserve_evp_method_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_unlock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0);
   if (lVar2 != 0) {
      uVar1 = ossl_method_unlock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined8 reserve_evp_method_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_lock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0);
   if (lVar2 != 0) {
      uVar1 = ossl_method_lock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined4 evp_set_parsed_default_properties(undefined8 param_1, undefined8 param_2, undefined4 param_3, int param_4) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 *puVar4;
   long lVar5;
   void *ptr;
   undefined8 uVar6;
   lVar3 = ossl_lib_ctx_get_data(param_1, 0);
   puVar4 = (undefined8*)ossl_ctx_global_properties(param_1, param_3);
   if (( puVar4 == (undefined8*)0x0 ) || ( lVar3 == 0 )) {
      ERR_new();
      uVar6 = 0x1f9;
   } else {
      if (param_4 == 0) {
         ossl_global_properties_stop_mirroring();
      } else {
         iVar1 = ossl_global_properties_no_mirrored(param_1);
         if (iVar1 != 0) {
            return 0;
         }
      }
      lVar5 = ossl_property_list_to_string(param_1, param_2, 0, 0);
      if (( lVar5 == 0 ) || ( ptr = CRYPTO_malloc((int)lVar5, "crypto/evp/evp_fetch.c", 0x1e2) ),ptr == (void*)0x0) {
         ERR_new();
         uVar6 = 0x1e4;
      } else {
         lVar5 = ossl_property_list_to_string(param_1, param_2, ptr, lVar5);
         if (lVar5 != 0) {
            ossl_provider_default_props_update(param_1, ptr);
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
   ERR_set_debug("crypto/evp/evp_fetch.c", uVar6, "evp_set_parsed_default_properties");
   ERR_set_error(6, 0xc0103, 0);
   return 0;
}void filter_on_operation_id(byte param_1, undefined8 param_2, uint *param_3) {
   if ((uint)param_1 != *param_3) {
      return;
   }
   for (int i_19 = 0; i_19 < 2; i_19++) {
      /* WARNING: Could not recover jumptable at 0x0010051b. Too many branches */
   }
   ( **(code**)( param_3 + 2 ) )(param_2, *(undefined8*)( param_3 + 4 ), *(code**)( param_3 + 2 ));
   return;
}char *evp_generic_fetch(undefined8 param_1, uint param_2, char *param_3, char *param_4, undefined8 param_5, undefined8 param_6, code *param_7) {
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined8 local_d8;
   char *local_d0;
   code *local_c8;
   code *pcStack_c0;
   code *local_b8;
   code *pcStack_b0;
   code *local_a8;
   code *pcStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   uint local_80;
   int local_7c;
   char *local_78;
   char *local_70;
   long local_68;
   byte local_60;
   undefined8 local_58;
   undefined8 local_50;
   code *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_d8 = 0;
   local_88 = param_1;
   lVar3 = ossl_lib_ctx_get_data(param_1, 0);
   lVar4 = ossl_namemap_stored(local_88);
   local_d0 = (char*)0x0;
   pcVar5 = "";
   if (param_4 != (char*)0x0) {
      pcVar5 = param_4;
   }
   if (( lVar3 == 0 ) || ( lVar4 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x116, "inner_evp_generic_fetch");
      ERR_set_error(6, 0x80106, 0);
      pcVar5 = (char*)0x0;
      goto LAB_00100781;
   }
   if ((int)param_2 < 1) {
      ERR_new();
      uVar6 = 0x11f;
      LAB_001008a1:ERR_set_debug("crypto/evp/evp_fetch.c", uVar6, "inner_evp_generic_fetch");
      ERR_set_error(6, 0xc0103, 0);
      pcVar5 = (char*)0x0;
      goto LAB_00100781;
   }
   if (( param_3 == (char*)0x0 ) || ( iVar1 = iVar1 == 0 )) {
      local_98 = 0x100000;
      local_c8 = get_tmp_evp_method_store;
      pcStack_c0 = reserve_evp_method_store;
      local_60 = local_60 & 0xfe;
      local_7c = 0;
      local_48 = param_7;
      local_b8 = unreserve_evp_method_store;
      pcStack_b0 = get_evp_method_from_store;
      local_a8 = put_evp_method_in_store;
      pcStack_a0 = construct_evp_method;
      local_80 = param_2;
      local_78 = param_3;
      local_70 = pcVar5;
      local_58 = param_5;
      local_50 = param_6;
      local_d0 = (char*)ossl_method_construct(local_88, param_2, &local_d8, 0, &local_c8, &local_88);
      if (local_d0 != (char*)0x0) {
         iVar1 = ossl_namemap_name2num(lVar4, param_3);
         if (iVar1 != 0) {
            if (iVar1 - 1U < 0x7fffff) goto LAB_001007e9;
            LAB_00100828:pcVar5 = local_d0;
            if (local_d0 != (char*)0x0) goto LAB_00100781;
            goto LAB_001009a8;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/evp_fetch.c", 0x15f, "inner_evp_generic_fetch");
         ERR_set_error(6, 0x8010d, "Algorithm %s cannot be found", param_3);
         ( *param_7 )(local_d0);
         local_d0 = (char*)0x0;
      }
      pcVar5 = param_3;
      if (param_3 == (char*)0x0) goto LAB_00100781;
      iVar1 = 0;
      LAB_001009a8:iVar2 = 0x8010d - ( ~(uint)local_60 & 1 );
      if (param_3 != (char*)0x0) goto LAB_001009b8;
      param_3 = (char*)ossl_namemap_num2name(lVar4, iVar1, 0);
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x177, "inner_evp_generic_fetch");
      if (param_4 == (char*)0x0) {
         param_4 = "<null>";
      }
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
   } else {
      if (( 0x7ffffe < iVar1 - 1U ) || ( 0xfe < param_2 - 1 )) {
         ERR_new();
         uVar6 = 0x12f;
         goto LAB_001008a1;
      }
      iVar2 = ossl_method_store_cache_get(lVar3, local_d8, iVar1 << 8 | param_2, pcVar5, &local_d0);
      if (iVar2 == 0) {
         local_98 = 0x100000;
         local_c8 = get_tmp_evp_method_store;
         pcStack_c0 = reserve_evp_method_store;
         local_b8 = unreserve_evp_method_store;
         pcStack_b0 = get_evp_method_from_store;
         local_60 = local_60 & 0xfe;
         local_48 = param_7;
         local_a8 = put_evp_method_in_store;
         pcStack_a0 = construct_evp_method;
         local_80 = param_2;
         local_7c = iVar1;
         local_78 = param_3;
         local_70 = pcVar5;
         local_58 = param_5;
         local_50 = param_6;
         local_d0 = (char*)ossl_method_construct(local_88, param_2, &local_d8, 0, &local_c8, &local_88);
         if (local_d0 != (char*)0x0) {
            LAB_001007e9:if (param_2 - 1 < 0xff) {
               ossl_method_store_cache_set(lVar3, local_d8, iVar1 << 8 | param_2, pcVar5, local_d0, param_6, param_7);
            }
            goto LAB_00100828;
         }
         goto LAB_001009a8;
      }
      pcVar5 = local_d0;
      if (local_d0 != (char*)0x0) goto LAB_00100781;
      iVar2 = 0x8010d;
      LAB_001009b8:ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x177, "inner_evp_generic_fetch");
      if (param_4 == (char*)0x0) {
         param_4 = "<null>";
      }
   }
   uVar6 = ossl_lib_ctx_get_descriptor(local_88);
   ERR_set_error(6, iVar2, "%s, Algorithm (%s : %d), Properties (%s)", uVar6, param_3, iVar1, param_4);
   pcVar5 = local_d0;
   LAB_00100781:if (local_68 != 0) {
      ossl_method_store_free();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pcVar5;
}char *evp_generic_fetch_from_prov(undefined8 param_1, uint param_2, char *param_3, char *param_4, undefined8 param_5, undefined8 param_6, code *param_7) {
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined8 local_d8;
   char *local_d0;
   code *local_c8;
   code *pcStack_c0;
   code *local_b8;
   code *pcStack_b0;
   code *local_a8;
   code *pcStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   uint local_80;
   int local_7c;
   char *local_78;
   char *local_70;
   long local_68;
   byte local_60;
   undefined8 local_58;
   undefined8 local_50;
   code *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = ossl_provider_libctx();
   local_68 = 0;
   local_d8 = param_1;
   lVar3 = ossl_lib_ctx_get_data(local_88, 0);
   lVar4 = ossl_namemap_stored(local_88);
   local_d0 = (char*)0x0;
   pcVar5 = "";
   if (param_4 != (char*)0x0) {
      pcVar5 = param_4;
   }
   if (( lVar3 == 0 ) || ( lVar4 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x116, "inner_evp_generic_fetch");
      ERR_set_error(6, 0x80106, 0);
      pcVar5 = (char*)0x0;
      goto LAB_00100d71;
   }
   if ((int)param_2 < 1) {
      ERR_new();
      uVar6 = 0x11f;
      LAB_00100e91:ERR_set_debug("crypto/evp/evp_fetch.c", uVar6, "inner_evp_generic_fetch");
      ERR_set_error(6, 0xc0103, 0);
      pcVar5 = (char*)0x0;
      goto LAB_00100d71;
   }
   if (( param_3 == (char*)0x0 ) || ( iVar1 = iVar1 == 0 )) {
      local_98 = 0x100000;
      local_c8 = get_tmp_evp_method_store;
      pcStack_c0 = reserve_evp_method_store;
      local_60 = local_60 & 0xfe;
      local_7c = 0;
      local_48 = param_7;
      local_b8 = unreserve_evp_method_store;
      pcStack_b0 = get_evp_method_from_store;
      local_a8 = put_evp_method_in_store;
      pcStack_a0 = construct_evp_method;
      local_80 = param_2;
      local_78 = param_3;
      local_70 = pcVar5;
      local_58 = param_5;
      local_50 = param_6;
      local_d0 = (char*)ossl_method_construct(local_88, param_2, &local_d8, 0, &local_c8, &local_88);
      if (local_d0 != (char*)0x0) {
         iVar1 = ossl_namemap_name2num(lVar4, param_3);
         if (iVar1 != 0) {
            if (iVar1 - 1U < 0x7fffff) goto LAB_00100dd9;
            LAB_00100e18:pcVar5 = local_d0;
            if (local_d0 != (char*)0x0) goto LAB_00100d71;
            goto LAB_00100f98;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/evp_fetch.c", 0x15f, "inner_evp_generic_fetch");
         ERR_set_error(6, 0x8010d, "Algorithm %s cannot be found", param_3);
         ( *param_7 )(local_d0);
         local_d0 = (char*)0x0;
      }
      pcVar5 = param_3;
      if (param_3 == (char*)0x0) goto LAB_00100d71;
      iVar1 = 0;
      LAB_00100f98:iVar2 = 0x8010d - ( ~(uint)local_60 & 1 );
      if (param_3 != (char*)0x0) goto LAB_00100fa8;
      param_3 = (char*)ossl_namemap_num2name(lVar4, iVar1, 0);
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x177, "inner_evp_generic_fetch");
      if (param_4 == (char*)0x0) {
         param_4 = "<null>";
      }
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
   } else {
      if (( 0x7ffffe < iVar1 - 1U ) || ( 0xfe < param_2 - 1 )) {
         ERR_new();
         uVar6 = 0x12f;
         goto LAB_00100e91;
      }
      iVar2 = ossl_method_store_cache_get(lVar3, local_d8, iVar1 << 8 | param_2, pcVar5, &local_d0);
      if (iVar2 == 0) {
         local_98 = 0x100000;
         local_c8 = get_tmp_evp_method_store;
         pcStack_c0 = reserve_evp_method_store;
         local_b8 = unreserve_evp_method_store;
         pcStack_b0 = get_evp_method_from_store;
         local_60 = local_60 & 0xfe;
         local_48 = param_7;
         local_a8 = put_evp_method_in_store;
         pcStack_a0 = construct_evp_method;
         local_80 = param_2;
         local_7c = iVar1;
         local_78 = param_3;
         local_70 = pcVar5;
         local_58 = param_5;
         local_50 = param_6;
         local_d0 = (char*)ossl_method_construct(local_88, param_2, &local_d8, 0, &local_c8, &local_88);
         if (local_d0 != (char*)0x0) {
            LAB_00100dd9:if (param_2 - 1 < 0xff) {
               ossl_method_store_cache_set(lVar3, local_d8, iVar1 << 8 | param_2, pcVar5, local_d0, param_6, param_7);
            }
            goto LAB_00100e18;
         }
         goto LAB_00100f98;
      }
      pcVar5 = local_d0;
      if (local_d0 != (char*)0x0) goto LAB_00100d71;
      iVar2 = 0x8010d;
      LAB_00100fa8:ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x177, "inner_evp_generic_fetch");
      if (param_4 == (char*)0x0) {
         param_4 = "<null>";
      }
   }
   uVar6 = ossl_lib_ctx_get_descriptor(local_88);
   ERR_set_error(6, iVar2, "%s, Algorithm (%s : %d), Properties (%s)", uVar6, param_3, iVar1, param_4);
   pcVar5 = local_d0;
   LAB_00100d71:if (local_68 != 0) {
      ossl_method_store_free();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pcVar5;
}undefined8 evp_method_store_cache_flush(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_lib_ctx_get_data(param_1, 0);
   if (lVar1 == 0) {
      return 1;
   }
   uVar2 = ossl_method_store_cache_flush_all(lVar1);
   return uVar2;
}undefined8 evp_method_store_remove_all_provided(undefined8 param_1) {
   undefined8 uVar1;
   long lVar2;
   uVar1 = ossl_provider_libctx();
   lVar2 = ossl_lib_ctx_get_data(uVar1, 0);
   if (lVar2 == 0) {
      return 1;
   }
   uVar1 = ossl_method_store_remove_all_provided(lVar2, param_1);
   return uVar1;
}undefined8 evp_set_default_properties_int(undefined8 param_1, long param_2, undefined4 param_3, undefined4 param_4) {
   int iVar1;
   if (( param_2 != 0 ) && ( param_2 = param_2 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x203, "evp_set_default_properties_int");
      ERR_set_error(6, 0xd2, 0);
      return 0;
   }
   iVar1 = evp_set_parsed_default_properties(param_1, param_2, param_3, param_4);
   if (iVar1 == 0) {
      ossl_property_free(param_2);
      return 0;
   }
   return 1;
}void EVP_set_default_properties(undefined8 param_1, undefined8 param_2) {
   evp_set_default_properties_int(param_1, param_2, 1, 0);
   return;
}bool EVP_default_properties_is_fips_enabled(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   bool bVar3;
   puVar2 = (undefined8*)ossl_ctx_global_properties(param_1, 1);
   bVar3 = false;
   if (puVar2 != (undefined8*)0x0) {
      iVar1 = ossl_property_is_enabled(param_1, &_LC5, *puVar2);
      bVar3 = iVar1 != 0;
   }
   return bVar3;
}undefined8 evp_default_properties_enable_fips_int(undefined8 param_1, int param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   char *pcVar6;
   if (param_2 == 0) {
      plVar2 = (long*)ossl_ctx_global_properties(param_1, param_3);
      pcVar6 = "-fips";
   } else {
      plVar2 = (long*)ossl_ctx_global_properties(param_1, param_3);
      pcVar6 = "fips=yes";
   }
   if (( plVar2 != (long*)0x0 ) && ( *plVar2 != 0 )) {
      lVar3 = ossl_parse_query(param_1, pcVar6, 1);
      if (lVar3 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/evp_fetch.c", 0x21d, "evp_default_properties_merge");
         ERR_set_error(6, 0xd2, 0);
         uVar5 = 0;
      } else {
         lVar4 = ossl_property_merge(lVar3, *plVar2);
         ossl_property_free(lVar3);
         if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/evp_fetch.c", 0x223, "evp_default_properties_merge");
            ERR_set_error(6, 0x8000f, 0);
            uVar5 = 0;
         } else {
            iVar1 = evp_set_parsed_default_properties(param_1, lVar4, 0, 0);
            uVar5 = 1;
            if (iVar1 == 0) {
               ossl_property_free(lVar4);
               uVar5 = 0;
            }
         }
      }
      return uVar5;
   }
   uVar5 = evp_set_default_properties_int(param_1, pcVar6, 0, 0);
   return uVar5;
}void EVP_default_properties_enable_fips(undefined8 param_1, undefined8 param_2) {
   evp_default_properties_enable_fips_int(param_1, param_2, 1);
   return;
}char *evp_get_global_properties_str(undefined8 param_1) {
   undefined8 *puVar1;
   long lVar2;
   char *pcVar3;
   puVar1 = (undefined8*)ossl_ctx_global_properties();
   if (puVar1 == (undefined8*)0x0) {
      pcVar3 = CRYPTO_strdup("", "crypto/evp/evp_fetch.c", 0x24e);
      return pcVar3;
   }
   lVar2 = ossl_property_list_to_string(param_1, *puVar1, 0, 0);
   if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x252, "evp_get_global_properties_str");
      ERR_set_error(6, 0xc0103, 0);
   } else {
      pcVar3 = (char*)CRYPTO_malloc((int)lVar2, "crypto/evp/evp_fetch.c", 0x256);
      if (pcVar3 != (char*)0x0) {
         lVar2 = ossl_property_list_to_string(param_1, *puVar1, pcVar3, lVar2);
         if (lVar2 != 0) {
            return pcVar3;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/evp_fetch.c", 0x25a, "evp_get_global_properties_str");
         ERR_set_error(6, 0xc0103, 0);
         CRYPTO_free(pcVar3);
      }
   }
   return (char*)0x0;
}void EVP_get1_default_properties(undefined8 param_1) {
   undefined4 uVar1;
   uVar1 = ossl_lib_ctx_is_global_default();
   evp_get_global_properties_str(param_1, uVar1);
   return;
}void evp_generic_do_all(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, code *param_7) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   ulong extraout_RDX;
   ulong extraout_RDX_00;
   ulong extraout_RDX_01;
   ulong extraout_RDX_02;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   undefined8 local_d0;
   code *local_c8;
   code *pcStack_c0;
   code *local_b8;
   code *pcStack_b0;
   code *local_a8;
   code *pcStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   uint local_80;
   undefined4 local_7c;
   undefined8 local_78;
   undefined *local_70;
   long local_68;
   byte local_60;
   undefined8 local_58;
   undefined8 local_50;
   code *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_d0 = 0;
   local_88 = param_1;
   lVar2 = ossl_lib_ctx_get_data(param_1, 0);
   lVar3 = ossl_namemap_stored(local_88);
   if (( lVar2 == 0 ) || ( lVar3 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x116, "inner_evp_generic_fetch");
      ERR_set_error(6, 0x80106, 0);
      uVar6 = extraout_RDX_01;
   } else if ((int)param_2 < 1) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_fetch.c", 0x11f, "inner_evp_generic_fetch");
      ERR_set_error(6, 0xc0103, 0);
      uVar6 = extraout_RDX_02;
   } else {
      local_60 = local_60 & 0xfe;
      local_c8 = get_tmp_evp_method_store;
      pcStack_c0 = reserve_evp_method_store;
      local_7c = 0;
      local_b8 = unreserve_evp_method_store;
      pcStack_b0 = get_evp_method_from_store;
      local_98 = 0x100000;
      local_78 = 0;
      local_70 = &_LC1;
      local_48 = param_7;
      local_a8 = put_evp_method_in_store;
      pcStack_a0 = construct_evp_method;
      local_80 = param_2;
      local_58 = param_5;
      local_50 = param_6;
      auVar7 = ossl_method_construct(local_88, param_2, &local_d0, 0, &local_c8, &local_88);
      uVar6 = auVar7._8_8_;
      lVar4 = auVar7._0_8_;
      if (lVar4 != 0) {
         iVar1 = ossl_namemap_name2num(lVar3, 0);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/evp_fetch.c", 0x15f, "inner_evp_generic_fetch");
            ERR_set_error(6, 0x8010d, "Algorithm %s cannot be found", 0);
            ( *param_7 )(lVar4);
            uVar6 = extraout_RDX_00;
         } else {
            uVar6 = ( ulong )(iVar1 - 1U);
            if (( iVar1 - 1U < 0x7fffff ) && ( uVar6 = ( ulong )(param_2 - 1) ),param_2 - 1 < 0xff) {
               ossl_method_store_cache_set(lVar2, local_d0, iVar1 << 8 | param_2, &_LC1, lVar4, param_6, param_7);
               uVar6 = 0x10169d;
            }
         }
      }
   }
   local_c8 = (code*)CONCAT44(local_c8._4_4_, param_2);
   pcStack_c0 = (code*)param_3;
   local_b8 = (code*)param_4;
   if (local_68 != 0) {
      ossl_method_store_do_all(local_68, filter_on_operation_id, &local_c8);
      uVar6 = extraout_RDX;
   }
   uVar5 = ossl_lib_ctx_get_data(param_1, 0, uVar6);
   ossl_method_store_do_all(uVar5, filter_on_operation_id, &local_c8);
   if (local_68 != 0) {
      ossl_method_store_free();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool evp_is_a(long param_1, int param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = ossl_provider_libctx();
   uVar2 = ossl_namemap_stored(uVar2);
   if (param_1 == 0) {
      param_2 = ossl_namemap_name2num(uVar2, param_3);
   }
   iVar1 = ossl_namemap_name2num(uVar2, param_4);
   return iVar1 == param_2;
}void evp_names_do_all(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   uVar1 = ossl_provider_libctx();
   uVar1 = ossl_namemap_stored(uVar1);
   ossl_namemap_doall_names(uVar1, param_2, param_3, param_4);
   return;
}
