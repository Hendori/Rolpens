void do_one(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
   for (int i_815 = 0; i_815 < 2; i_815++) {
      /* WARNING: Could not recover jumptable at 0x0010000b. Too many branches */
   }
   ( *(code*)*param_3 )(param_2, param_3[1]);
   return;
}void get_tmp_decoder_store(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1[4] != 0) {
      return;
   }
   uVar1 = ossl_method_store_new(*param_1);
   param_1[4] = uVar1;
   return;
}undefined1[16];put_decoder_in_store(long param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 param_5, undefined8 *param_6) {
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
            auVar5 = ossl_lib_ctx_get_data(*param_6, 0xb);
            uVar2 = auVar5._8_8_;
            param_1 = auVar5._0_8_;
            if (param_1 == 0) goto LAB_00100106;
         }
         auVar5._0_8_ = ossl_method_store_add(param_1, param_3, auVar4._0_8_ & 0xffffffff, param_5, param_2, ossl_decoder_up_ref);
         auVar5._8_8_ = ossl_decoder_free;
         return auVar5;
      }
   }
   LAB_00100106:auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar2;
   return auVar4 << 0x40;
}undefined8 get_decoder_from_store(long param_1, undefined8 param_2, undefined8 *param_3) {
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
      LAB_001001b0:if (( ( param_1 != 0 ) || ( param_1 = ossl_lib_ctx_get_data(*param_3, 0xb) ),param_1 != 0 )) &&( iVar1 = ossl_method_store_fetch(param_1, iVar1, param_3[3], param_2, &local_38) ),uVar4 = local_38,iVar1 != 0;
   }
   uVar4 = 0;
   LAB_001001d1:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}undefined8 unreserve_decoder_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_unlock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0xb);
   if (lVar2 != 0) {
      uVar1 = ossl_method_unlock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined8 reserve_decoder_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_lock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0xb);
   if (lVar2 != 0) {
      uVar1 = ossl_method_lock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined8 OSSL_DECODER_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x28 ) = *(int*)( param_1 + 0x28 ) + 1;
   UNLOCK();
   return 1;
}void ossl_decoder_up_ref(void) {
   OSSL_DECODER_up_ref();
   return;
}void up_ref_decoder(void) {
   OSSL_DECODER_up_ref();
   return;
}void OSSL_DECODER_free(undefined8 *param_1) {
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
}void destruct_decoder(void) {
   OSSL_DECODER_free();
   return;
}void ossl_decoder_free(void) {
   OSSL_DECODER_free();
   return;
}void free_decoder(void) {
   OSSL_DECODER_free();
   return;
}/* WARNING: Type propagation algorithm not settling */long *ossl_decoder_from_algorithm(undefined4 param_1, long param_2, long param_3) {
   int *piVar1;
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   long *plVar6;
   long lVar7;
   piVar1 = *(int**)( param_2 + 0x10 );
   uVar5 = ossl_provider_libctx(param_3);
   plVar6 = (long*)CRYPTO_zalloc(0x78, "crypto/encode_decode/decoder_meth.c", 0x2a);
   if (plVar6 == (long*)0x0) {
      return (long*)0x0;
   }
   LOCK();
   *(undefined4*)( plVar6 + 5 ) = 1;
   UNLOCK();
   *(undefined4*)( plVar6 + 1 ) = param_1;
   lVar7 = ossl_algorithm_get1_first_name(param_2);
   plVar6[2] = lVar7;
   if (lVar7 != 0) {
      uVar2 = *(undefined8*)( param_2 + 8 );
      plVar6[3] = param_2;
      lVar7 = ossl_parse_property(uVar5, uVar2);
      plVar6[4] = lVar7;
      if (lVar7 == 0) goto LAB_00100690;
      iVar4 = *piVar1;
      lVar3 = plVar6[6];
      lVar7 = plVar6[7];
      while (iVar4 != 0) {
         switch (iVar4) {
            case 1:
        if (lVar3 != 0) break;
        lVar3 = *(long *)(piVar1 + 2);
        iVar4 = piVar1[4];
        plVar6[6] = lVar3;
        goto joined_r0x0010061a;
            case 2:
        if (lVar7 == 0) {
          lVar7 = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          plVar6[7] = lVar7;
          goto joined_r0x0010061a;
        }
        break;
            case 3:
        if (plVar6[8] == 0) {
          plVar6[8] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 4:
        if (plVar6[9] == 0) {
          plVar6[9] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 5:
        if (plVar6[10] == 0) {
          plVar6[10] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 6:
        if (plVar6[0xb] == 0) {
          plVar6[0xb] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 10:
        if (plVar6[0xc] == 0) {
          plVar6[0xc] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 0xb:
        if (plVar6[0xd] == 0) {
          plVar6[0xd] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
        break;
            case 0x14:
        if (plVar6[0xe] == 0) {
          plVar6[0xe] = *(long *)(piVar1 + 2);
          iVar4 = piVar1[4];
          goto joined_r0x0010061a;
        }
         }
         iVar4 = piVar1[4];
         joined_r0x0010061a:piVar1 = piVar1 + 4;
      };
      if (lVar3 == 0) {
         if (lVar7 != 0) goto LAB_00100631;
      } else if (lVar7 == 0) goto LAB_00100631;
      if (plVar6[0xd] == 0) {
         LAB_00100631:OSSL_DECODER_free(plVar6);
         ERR_new();
         ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x11c, "ossl_decoder_from_algorithm");
         ERR_set_error(0x3c, 0xc0108, 0);
         return (long*)0x0;
      }
      if (( param_3 == 0 ) || ( iVar4 = iVar4 != 0 )) {
         *plVar6 = param_3;
         return plVar6;
      }
   }
   LAB_00100690:OSSL_DECODER_free(plVar6);
   return (long*)0x0;
}long construct_decoder(undefined8 *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   uVar2 = ossl_provider_libctx(param_2);
   uVar2 = ossl_namemap_stored(uVar2);
   iVar1 = ossl_namemap_add_names(uVar2, 0, *param_1, 0x3a);
   if (iVar1 != 0) {
      lVar3 = ossl_decoder_from_algorithm(iVar1, param_1, param_2);
      if (lVar3 != 0) {
         return lVar3;
      }
   }
   *(byte*)( param_3 + 0x28 ) = *(byte*)( param_3 + 0x28 ) | 1;
   return 0;
}long OSSL_DECODER_fetch(undefined8 param_1, char *param_2, undefined *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   undefined *puVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   int local_a0;
   char *local_98;
   undefined *local_90;
   long local_88;
   byte local_80;
   code *local_78;
   code *pcStack_70;
   code *local_68;
   code *pcStack_60;
   code *local_58;
   code *pcStack_50;
   code *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_a8 = param_1;
   lVar2 = ossl_lib_ctx_get_data(param_1, 0xb);
   lVar3 = ossl_namemap_stored(local_a8);
   local_b8 = 0;
   puVar7 = &_LC1;
   if (param_3 != (undefined*)0x0) {
      puVar7 = param_3;
   }
   bVar8 = lVar2 == 0 || lVar3 == 0;
   if (bVar8) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x169, "inner_ossl_decoder_fetch");
      ERR_set_error(0x3c, 0x80106, 0);
      lVar2 = 0;
      goto LAB_00100893;
   }
   if (( param_2 == (char*)0x0 ) || ( iVar1 = iVar1 == 0 )) {
      local_78 = get_tmp_decoder_store;
      pcStack_70 = reserve_decoder_store;
      local_80 = local_80 & 0xfe;
      local_48 = destruct_decoder;
      local_b0 = 0;
      local_a0 = 0;
      local_68 = unreserve_decoder_store;
      pcStack_60 = get_decoder_from_store;
      local_58 = put_decoder_in_store;
      pcStack_50 = construct_decoder;
      local_98 = param_2;
      local_90 = puVar7;
      local_b8 = ossl_method_construct(local_a8, 0x15, &local_b0, 0, &local_78, &local_a8);
      if (local_b8 == 0) {
         bVar8 = param_2 != (char*)0x0;
      } else if (param_2 != (char*)0x0) {
         iVar1 = ossl_namemap_name2num(lVar3, param_2);
         if (iVar1 != 0) goto LAB_00100a8e;
         uVar5 = ~(uint)local_80 & 1;
         goto LAB_0010090d;
      }
      lVar2 = local_b8;
      if (!bVar8) goto LAB_00100893;
      iVar1 = 0;
      LAB_00100ad4:lVar2 = local_b8;
      if (local_b8 != 0) goto LAB_00100893;
      iVar6 = 0x8010d - ( ~(uint)local_80 & 1 );
      if (param_2 != (char*)0x0) goto LAB_0010091b;
      param_2 = (char*)ossl_namemap_num2name(lVar3, iVar1, 0);
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1a2, "inner_ossl_decoder_fetch");
      if (param_2 == (char*)0x0) {
         param_2 = "<null>";
      }
   } else {
      iVar6 = ossl_method_store_cache_get(lVar2, 0, iVar1, puVar7, &local_b8);
      if (iVar6 == 0) {
         local_80 = local_80 & 0xfe;
         local_78 = get_tmp_decoder_store;
         pcStack_70 = reserve_decoder_store;
         local_68 = unreserve_decoder_store;
         pcStack_60 = get_decoder_from_store;
         local_48 = destruct_decoder;
         local_b0 = 0;
         local_58 = put_decoder_in_store;
         pcStack_50 = construct_decoder;
         local_a0 = iVar1;
         local_98 = param_2;
         local_90 = puVar7;
         local_b8 = ossl_method_construct(local_a8, 0x15, &local_b0, 0, &local_78, &local_a8);
         if (local_b8 != 0) {
            LAB_00100a8e:ossl_method_store_cache_set(lVar2, local_b0, iVar1, puVar7, local_b8, up_ref_decoder, free_decoder);
         }
         goto LAB_00100ad4;
      }
      uVar5 = 0;
      LAB_0010090d:lVar2 = local_b8;
      if (local_b8 != 0) goto LAB_00100893;
      iVar6 = 0x8010d - uVar5;
      LAB_0010091b:ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1a2, "inner_ossl_decoder_fetch");
   }
   uVar4 = ossl_lib_ctx_get_descriptor(local_a8);
   ERR_set_error(0x3c, iVar6, "%s, Name (%s : %d), Properties (%s)", uVar4, param_2, iVar1);
   lVar2 = local_b8;
   LAB_00100893:if (local_88 != 0) {
      ossl_method_store_free();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_decoder_store_cache_flush(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_lib_ctx_get_data(param_1, 0xb);
   if (lVar1 == 0) {
      return 1;
   }
   uVar2 = ossl_method_store_cache_flush_all(lVar1);
   return uVar2;
}undefined8 ossl_decoder_store_remove_all_provided(undefined8 param_1) {
   undefined8 uVar1;
   long lVar2;
   uVar1 = ossl_provider_libctx();
   lVar2 = ossl_lib_ctx_get_data(uVar1, 0xb);
   if (lVar2 == 0) {
      return 1;
   }
   uVar1 = ossl_method_store_remove_all_provided(lVar2, param_1);
   return uVar1;
}undefined8 OSSL_DECODER_get0_provider(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1d3, "OSSL_DECODER_get0_provider");
   ERR_set_error(0x3c, 0xc0102, 0);
   return 0;
}undefined8 OSSL_DECODER_get0_properties(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( *(long*)( param_1 + 0x18 ) + 8 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1dd, "OSSL_DECODER_get0_properties");
   ERR_set_error(0x3c, 0xc0102, 0);
   return 0;
}undefined8 ossl_decoder_parsed_properties(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x20 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1e8, "ossl_decoder_parsed_properties");
   ERR_set_error(0x3c, 0xc0102, 0);
   return 0;
}undefined4 ossl_decoder_get_number(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 8 );
   }
   ERR_new();
   ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x1f2, "ossl_decoder_get_number");
   ERR_set_error(0x3c, 0xc0102, 0);
   return 0;
}undefined8 OSSL_DECODER_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 OSSL_DECODER_get0_description(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 0x18 ) + 0x18 );
}bool OSSL_DECODER_is_a(long *param_1, undefined8 param_2) {
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
}bool ossl_decoder_fast_is_a(undefined8 *param_1, undefined8 param_2, int *param_3) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   iVar2 = *param_3;
   if (iVar2 < 1) {
      uVar3 = ossl_provider_libctx(*param_1);
      uVar3 = ossl_namemap_stored(uVar3);
      iVar2 = ossl_namemap_name2num(uVar3, param_2);
      *param_3 = iVar2;
      if (iVar2 < 1) {
         return false;
      }
   }
   iVar1 = ossl_decoder_get_number(param_1);
   return iVar1 == iVar2;
}void OSSL_DECODER_do_all_provided(undefined8 param_1, code *param_2, undefined8 param_3) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   undefined4 local_90;
   undefined8 local_88;
   undefined *local_80;
   long local_78;
   byte local_70;
   code *local_68;
   code *pcStack_60;
   code *local_58;
   code *pcStack_50;
   code *local_48;
   code *pcStack_40;
   code *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   local_98 = param_1;
   lVar1 = ossl_lib_ctx_get_data(param_1, 0xb);
   lVar2 = ossl_namemap_stored(local_98);
   if (( lVar1 == 0 ) || ( lVar2 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x169, "inner_ossl_decoder_fetch");
      ERR_set_error(0x3c, 0x80106, 0);
   } else {
      local_70 = local_70 & 0xfe;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_68 = get_tmp_decoder_store;
      pcStack_60 = reserve_decoder_store;
      local_58 = unreserve_decoder_store;
      pcStack_50 = get_decoder_from_store;
      local_38 = destruct_decoder;
      local_80 = &_LC1;
      local_48 = put_decoder_in_store;
      pcStack_40 = construct_decoder;
      ossl_method_construct(local_98, 0x15, &local_a0, 0, &local_68, &local_98);
   }
   local_68 = param_2;
   pcStack_60 = (code*)param_3;
   if (local_78 != 0) {
      ossl_method_store_do_all(local_78, 0x100000, &local_68);
   }
   uVar3 = ossl_lib_ctx_get_data(param_1, 0xb);
   ossl_method_store_do_all(uVar3, 0x100000, &local_68);
   if (local_78 != 0) {
      ossl_method_store_free();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 OSSL_DECODER_names_do_all(long *param_1, undefined8 param_2, undefined8 param_3) {
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
}undefined8 OSSL_DECODER_gettable_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x48 ) != 0) {
      uVar1 = OSSL_DECODER_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_816 = 0; i_816 < 2; i_816++) {
         /* WARNING: Could not recover jumptable at 0x00101079. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x48 ) )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 OSSL_DECODER_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(code**)( param_1 + 0x40 ) != (code*)0x0 )) {
      for (int i_817 = 0; i_817 < 2; i_817++) {
         /* WARNING: Could not recover jumptable at 0x001010a5. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x40 ) )(param_2);
      return uVar1;
   }
   return 0;
}undefined8 OSSL_DECODER_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x58 ) != 0) {
      uVar1 = OSSL_DECODER_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_818 = 0; i_818 < 2; i_818++) {
         /* WARNING: Could not recover jumptable at 0x001010e9. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x58 ) )(uVar1);
      return uVar1;
   }
   return 0;
}void OSSL_DECODER_CTX_new(void) {
   CRYPTO_zalloc(0x70, "crypto/encode_decode/decoder_meth.c", 0x27c);
   return;
}undefined4 OSSL_DECODER_CTX_set_params(long param_1, undefined8 param_2) {
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
      ERR_set_debug("crypto/encode_decode/decoder_meth.c", 0x288, "OSSL_DECODER_CTX_set_params");
      ERR_set_error(0x3c, 0xc0102, 0);
   } else {
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = OSSL_DECODER_CTX_get_num_decoders();
         if ((long)iVar1 != 0) {
            uVar7 = 0;
            uVar6 = 1;
            do {
               uVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x18 ), uVar7 & 0xffffffff);
               lVar4 = OSSL_DECODER_INSTANCE_get_decoder(uVar3);
               lVar5 = OSSL_DECODER_INSTANCE_get_decoder_ctx(uVar3);
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
}void OSSL_DECODER_CTX_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      if (*(code**)( (long)param_1 + 0x28 ) != (code*)0x0) {
         ( **(code**)( (long)param_1 + 0x28 ) )(*(undefined8*)( (long)param_1 + 0x30 ));
      }
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x18 ), &ossl_decoder_instance_free);
      ossl_pw_clear_passphrase_data((long)param_1 + 0x38);
      CRYPTO_free(param_1);
      return;
   }
   return;
}
