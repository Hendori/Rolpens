void do_one(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
   for (int i_618 = 0; i_618 < 2; i_618++) {
      /* WARNING: Could not recover jumptable at 0x0010000b. Too many branches */
   }
   ( *(code*)*param_3 )(param_2, param_3[1]);
   return;
}void get_tmp_encoder_store(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1[4] != 0) {
      return;
   }
   uVar1 = ossl_method_store_new(*param_1);
   param_1[4] = uVar1;
   return;
}undefined1[16];put_encoder_in_store(long param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 param_5, undefined8 *param_6) {
   char *pcVar1;
   ulong uVar2;
   size_t sVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   sVar3 = 0;
   if (param_4 != (char*)0x0) {
      pcVar1 = strchr(param_4, 0x3a);
      sVar3 = (long)pcVar1 - (long)param_4;
      if (pcVar1 == (char*)0x0) {
         sVar3 = strlen(param_4);
      }
   }
   auVar4 = ossl_namemap_stored(*param_6);
   uVar2 = auVar4._8_8_;
   if (auVar4._0_8_ != 0) {
      auVar4 = ossl_namemap_name2num_n(auVar4._0_8_, param_4, sVar3);
      uVar2 = auVar4._8_8_;
      if (auVar4._0_4_ != 0) {
         if (param_1 == 0) {
            auVar5 = ossl_lib_ctx_get_data(*param_6, 10);
            uVar2 = auVar5._8_8_;
            param_1 = auVar5._0_8_;
            if (param_1 == 0) goto LAB_00100106;
         }
         auVar5._0_8_ = ossl_method_store_add(param_1, param_3, auVar4._0_8_ & 0xffffffff, param_5, param_2, ossl_encoder_up_ref);
         auVar5._8_8_ = ossl_encoder_free;
         return auVar5;
      }
   }
   LAB_00100106:auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar2;
   return auVar4 << 0x40;
}undefined8 get_encoder_from_store(long param_1, undefined8 param_2, undefined8 *param_3) {
   char *__s;
   int iVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   size_t sVar5;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   iVar1 = *(int*)( param_3 + 1 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (iVar1 == 0) {
      if (param_3[2] != 0) {
         lVar2 = ossl_namemap_stored(*param_3);
         __s = (char*)param_3[2];
         pcVar3 = strchr(__s, 0x3a);
         sVar5 = (long)pcVar3 - (long)__s;
         if (pcVar3 == (char*)0x0) {
            sVar5 = strlen(__s);
         }
         if (( lVar2 != 0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_001001b0;
      }
   } else {
      LAB_001001b0:if (( ( param_1 != 0 ) || ( param_1 = ossl_lib_ctx_get_data(*param_3, 10) ),param_1 != 0 )) &&( iVar1 = ossl_method_store_fetch(param_1, iVar1, param_3[3], param_2, &local_38) ),uVar4 = local_38,iVar1 != 0;
   }
   uVar4 = 0;
   LAB_001001d1:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}undefined8 unreserve_encoder_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_unlock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 10);
   if (lVar2 != 0) {
      uVar1 = ossl_method_unlock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined8 reserve_encoder_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_lock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 10);
   if (lVar2 != 0) {
      uVar1 = ossl_method_lock_store(lVar2);
      return uVar1;
   }
   return 0;
}long inner_ossl_encoder_fetch_constprop_0(undefined8 *param_1, char *param_2, char *param_3) {
   byte bVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   char *pcVar7;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   code *local_78;
   code *pcStack_70;
   code *local_68;
   code *pcStack_60;
   code *local_58;
   code *pcStack_50;
   code *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = ossl_lib_ctx_get_data(*param_1, 10);
   lVar4 = ossl_namemap_stored(*param_1);
   local_88 = 0;
   pcVar7 = "";
   if (param_3 != (char*)0x0) {
      pcVar7 = param_3;
   }
   if (( lVar3 == 0 ) || ( lVar4 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x173, "inner_ossl_encoder_fetch");
      ERR_set_error(0x3b, 0x80106, 0);
      lVar3 = 0;
      goto LAB_0010041f;
   }
   if (( param_2 == (char*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
      *(byte*)( param_1 + 5 ) = *(byte*)( param_1 + 5 ) & 0xfe;
      param_1[2] = param_2;
      param_1[3] = pcVar7;
      *(undefined4*)( param_1 + 1 ) = 0;
      local_78 = get_tmp_encoder_store;
      pcStack_70 = reserve_encoder_store;
      local_48 = destruct_encoder;
      local_80 = 0;
      local_68 = unreserve_encoder_store;
      pcStack_60 = get_encoder_from_store;
      local_58 = put_encoder_in_store;
      pcStack_50 = construct_encoder;
      local_88 = ossl_method_construct(*param_1, 0x14, &local_80, 0, &local_78, param_1);
      iVar2 = 0;
      if (local_88 != 0) {
         iVar2 = ossl_namemap_name2num(lVar4, param_2);
         LAB_00100533:ossl_method_store_cache_set(lVar3, local_80, iVar2, pcVar7, local_88, up_ref_encoder, free_encoder);
      }
      bVar1 = *(byte*)( param_1 + 5 );
      lVar3 = local_88;
      if (( ( iVar2 == 0 ) && ( param_2 == (char*)0x0 ) ) || ( local_88 != 0 )) goto LAB_0010041f;
      LAB_00100455:iVar6 = 0x8010d - ( ~(uint)bVar1 & 1 );
      if (param_2 != (char*)0x0) goto LAB_0010046c;
      param_2 = (char*)ossl_namemap_num2name(lVar4, iVar2, 0);
      ERR_new();
      ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1ab, "inner_ossl_encoder_fetch");
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
      if (param_2 == (char*)0x0) {
         param_2 = "<null>";
      }
   } else {
      iVar6 = ossl_method_store_cache_get(lVar3, 0, iVar2, pcVar7, &local_88);
      if (iVar6 == 0) {
         *(byte*)( param_1 + 5 ) = *(byte*)( param_1 + 5 ) & 0xfe;
         *(int*)( param_1 + 1 ) = iVar2;
         param_1[2] = param_2;
         local_78 = get_tmp_encoder_store;
         pcStack_70 = reserve_encoder_store;
         param_1[3] = pcVar7;
         local_68 = unreserve_encoder_store;
         pcStack_60 = get_encoder_from_store;
         local_48 = destruct_encoder;
         local_80 = 0;
         local_58 = put_encoder_in_store;
         pcStack_50 = construct_encoder;
         local_88 = ossl_method_construct(*param_1, 0x14, &local_80, 0, &local_78, param_1);
         if (local_88 != 0) goto LAB_00100533;
         bVar1 = *(byte*)( param_1 + 5 );
         goto LAB_00100455;
      }
      lVar3 = local_88;
      if (local_88 != 0) goto LAB_0010041f;
      iVar6 = 0x8010d;
      LAB_0010046c:ERR_new();
      ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1ab, "inner_ossl_encoder_fetch");
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
   }
   uVar5 = ossl_lib_ctx_get_descriptor(*param_1);
   ERR_set_error(0x3b, iVar6, "%s, Name (%s : %d), Properties (%s)", uVar5, param_2, iVar2, param_3);
   lVar3 = local_88;
   LAB_0010041f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar3;
}undefined8 OSSL_ENCODER_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x28 ) = *(int*)( param_1 + 0x28 ) + 1;
   UNLOCK();
   return 1;
}void ossl_encoder_up_ref(void) {
   OSSL_ENCODER_up_ref();
   return;
}void up_ref_encoder(void) {
   OSSL_ENCODER_up_ref();
   return;
}void OSSL_ENCODER_free(undefined8 *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (undefined8*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( param_1 + 5 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free((void*)param_1[2]);
   ossl_property_free(param_1[4]);
   ossl_provider_free(*param_1);
   CRYPTO_free(param_1);
   return;
}void destruct_encoder(void) {
   OSSL_ENCODER_free();
   return;
}long *construct_encoder(undefined8 *param_1, long param_2, long param_3) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   int *piVar8;
   uVar4 = ossl_provider_libctx(param_2);
   uVar4 = ossl_namemap_stored(uVar4);
   iVar3 = ossl_namemap_add_names(uVar4, 0, *param_1, 0x3a);
   if (iVar3 == 0) goto LAB_001008a0;
   piVar8 = (int*)param_1[2];
   uVar4 = ossl_provider_libctx(param_2);
   plVar5 = (long*)CRYPTO_zalloc(0x80, "crypto/encode_decode/encoder_meth.c", 0x2a);
   if (plVar5 == (long*)0x0) goto LAB_001008a0;
   LOCK();
   *(undefined4*)( plVar5 + 5 ) = 1;
   UNLOCK();
   *(int*)( plVar5 + 1 ) = iVar3;
   lVar6 = ossl_algorithm_get1_first_name(param_1);
   plVar5[2] = lVar6;
   if (lVar6 != 0) {
      uVar2 = param_1[1];
      plVar5[3] = (long)param_1;
      lVar6 = ossl_parse_property(uVar4, uVar2);
      plVar5[4] = lVar6;
      if (lVar6 != 0) {
         lVar7 = plVar5[6];
         lVar6 = plVar5[7];
         iVar3 = *piVar8;
         while (iVar3 != 0) {
            /* WARNING: Could not find normalized switch variable to match jumptable */
            switch (iVar3) {
               case 1:
          if (lVar7 == 0) {
            lVar7 = *(long *)(piVar8 + 2);
            plVar5[6] = lVar7;
          }
          break;
               case 2:
          if (lVar6 == 0) {
            lVar6 = *(long *)(piVar8 + 2);
            plVar5[7] = lVar6;
          }
          break;
               case 3:
          if (plVar5[8] == 0) {
            plVar5[8] = *(long *)(piVar8 + 2);
          }
          break;
               case 4:
          if (plVar5[9] == 0) {
            plVar5[9] = *(long *)(piVar8 + 2);
          }
          break;
               case 5:
          if (plVar5[10] == 0) {
            plVar5[10] = *(long *)(piVar8 + 2);
          }
          break;
               case 6:
          if (plVar5[0xb] == 0) {
            plVar5[0xb] = *(long *)(piVar8 + 2);
          }
          break;
               case 10:
          if (plVar5[0xc] == 0) {
            plVar5[0xc] = *(long *)(piVar8 + 2);
          }
          break;
               case 0xb:
          if (plVar5[0xd] == 0) {
            plVar5[0xd] = *(long *)(piVar8 + 2);
          }
          break;
               case 0x14:
          if (plVar5[0xe] == 0) {
            plVar5[0xe] = *(long *)(piVar8 + 2);
          }
          break;
               case 0x15:
          if (plVar5[0xf] == 0) {
            plVar5[0xf] = *(long *)(piVar8 + 2);
          }
            }
            piVar1 = piVar8 + 4;
            piVar8 = piVar8 + 4;
            /* WARNING: This code block may not be properly labeled as switch case */
            iVar3 = *piVar1;
         };
         if (lVar6 == 0) {
            LAB_001008f2:if (plVar5[0xd] != 0) {
               if (( param_2 == 0 ) || ( iVar3 = iVar3 != 0 )) {
                  *plVar5 = param_2;
                  return plVar5;
               }
               goto LAB_00100a40;
            }
         } else if (plVar5[0xe] == 0) {
            if (plVar5[0xf] == 0) goto LAB_001008f2;
         } else if (plVar5[0xf] != 0) goto LAB_001008f2;
         OSSL_ENCODER_free(plVar5);
         ERR_new();
         ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x126, "encoder_from_algorithm");
         ERR_set_error(0x3b, 0xc0108, 0);
         goto LAB_001008a0;
      }
   }
   LAB_00100a40:OSSL_ENCODER_free(plVar5);
   LAB_001008a0:*(byte*)( param_3 + 0x28 ) = *(byte*)( param_3 + 0x28 ) | 1;
   return (long*)0x0;
}void ossl_encoder_free(void) {
   OSSL_ENCODER_free();
   return;
}void free_encoder(void) {
   OSSL_ENCODER_free();
   return;
}undefined8 OSSL_ENCODER_fetch(undefined8 param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_48[4];
   long local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   local_48[0] = param_1;
   uVar1 = inner_ossl_encoder_fetch_constprop_0(local_48);
   if (local_28 != 0) {
      ossl_method_store_free();
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_encoder_store_cache_flush(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_lib_ctx_get_data(param_1, 10);
   if (lVar1 == 0) {
      return 1;
   }
   uVar2 = ossl_method_store_cache_flush_all(lVar1);
   return uVar2;
}undefined8 ossl_encoder_store_remove_all_provided(undefined8 param_1) {
   undefined8 uVar1;
   long lVar2;
   uVar1 = ossl_provider_libctx();
   lVar2 = ossl_lib_ctx_get_data(uVar1, 10);
   if (lVar2 == 0) {
      return 1;
   }
   uVar1 = ossl_method_store_remove_all_provided(lVar2, param_1);
   return uVar1;
}undefined8 OSSL_ENCODER_get0_provider(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1dc, "OSSL_ENCODER_get0_provider");
   ERR_set_error(0x3b, 0xc0102, 0);
   return 0;
}undefined8 OSSL_ENCODER_get0_properties(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( *(long*)( param_1 + 0x18 ) + 8 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1e6, "OSSL_ENCODER_get0_properties");
   ERR_set_error(0x3b, 0xc0102, 0);
   return 0;
}undefined8 ossl_encoder_parsed_properties(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x20 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1f1, "ossl_encoder_parsed_properties");
   ERR_set_error(0x3b, 0xc0102, 0);
   return 0;
}undefined4 ossl_encoder_get_number(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 8 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x1fb, "ossl_encoder_get_number");
   ERR_set_error(0x3b, 0xc0102, 0);
   return 0;
}undefined8 OSSL_ENCODER_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 OSSL_ENCODER_get0_description(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 0x18 ) + 0x18 );
}bool OSSL_ENCODER_is_a(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   bool bVar3;
   bVar3 = false;
   if (*param_1 != 0) {
      uVar2 = ossl_provider_libctx();
      uVar2 = ossl_namemap_stored(uVar2);
      iVar1 = ossl_namemap_name2num(uVar2, param_2);
      bVar3 = (int)param_1[1] == iVar1;
   }
   return bVar3;
}void OSSL_ENCODER_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58[4];
   long local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   local_58[0] = param_1;
   inner_ossl_encoder_fetch_constprop_0(local_58, 0, 0);
   local_68 = param_2;
   local_60 = param_3;
   if (local_38 != 0) {
      ossl_method_store_do_all(local_38, 0x100000, &local_68);
   }
   uVar1 = ossl_lib_ctx_get_data(param_1, 10);
   ossl_method_store_do_all(uVar1, 0x100000, &local_68);
   if (local_38 != 0) {
      ossl_method_store_free();
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 OSSL_ENCODER_names_do_all(long *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == (long*)0x0) {
      return 0;
   }
   if (*param_1 == 0) {
      return 1;
   }
   uVar1 = ossl_provider_libctx();
   uVar1 = ossl_namemap_stored(uVar1);
   uVar1 = ossl_namemap_doall_names(uVar1, (int)param_1[1], param_2, param_3);
   return uVar1;
}undefined8 OSSL_ENCODER_gettable_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x48 ) != 0) {
      uVar1 = OSSL_ENCODER_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_619 = 0; i_619 < 2; i_619++) {
         /* WARNING: Could not recover jumptable at 0x00100e69. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x48 ) )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 OSSL_ENCODER_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(code**)( param_1 + 0x40 ) != (code*)0x0 )) {
      for (int i_620 = 0; i_620 < 2; i_620++) {
         /* WARNING: Could not recover jumptable at 0x00100e95. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x40 ) )(param_2);
      return uVar1;
   }
   return 0;
}undefined8 OSSL_ENCODER_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x58 ) != 0) {
      uVar1 = OSSL_ENCODER_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_621 = 0; i_621 < 2; i_621++) {
         /* WARNING: Could not recover jumptable at 0x00100ed9. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x58 ) )(uVar1);
      return uVar1;
   }
   return 0;
}void OSSL_ENCODER_CTX_new(void) {
   CRYPTO_zalloc(0x68, "crypto/encode_decode/encoder_meth.c", 0x26c);
   return;
}undefined4 OSSL_ENCODER_CTX_set_params(long param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   undefined4 uVar6;
   ulong uVar7;
   if (param_1 == 0) {
      ERR_new();
      uVar6 = 0;
      ERR_set_debug("crypto/encode_decode/encoder_meth.c", 0x278, "OSSL_ENCODER_CTX_set_params");
      ERR_set_error(0x3b, 0xc0102, 0);
   } else {
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = OSSL_ENCODER_CTX_get_num_encoders();
         if ((long)iVar1 != 0) {
            uVar7 = 0;
            uVar6 = 1;
            do {
               uVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x18 ), uVar7 & 0xffffffff);
               lVar4 = OSSL_ENCODER_INSTANCE_get_encoder(uVar3);
               lVar5 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(uVar3);
               if (( ( lVar5 != 0 ) && ( *(code**)( lVar4 + 0x50 ) != (code*)0x0 ) ) && ( iVar2 = iVar2 == 0 )) {
                  uVar6 = 0;
               }
               uVar7 = uVar7 + 1;
            } while ( (long)iVar1 != uVar7 );
            return uVar6;
         }
      }
      uVar6 = 1;
   }
   return uVar6;
}void OSSL_ENCODER_CTX_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x18 ), &ossl_encoder_instance_free);
      CRYPTO_free(*(void**)( (long)param_1 + 0x30 ));
      ossl_pw_clear_passphrase_data((long)param_1 + 0x38);
      CRYPTO_free(param_1);
      return;
   }
   return;
}
