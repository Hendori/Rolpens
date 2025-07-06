void do_one(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
   for (int i_759 = 0; i_759 < 2; i_759++) {
      /* WARNING: Could not recover jumptable at 0x0010000b. Too many branches */
   }
   ( *(code*)*param_3 )(param_2, param_3[1]);
   return;
}void get_tmp_loader_store(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1[4] != 0) {
      return;
   }
   uVar1 = ossl_method_store_new(*param_1);
   param_1[4] = uVar1;
   return;
}undefined1[16];put_loader_in_store(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 *param_6) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   auVar2 = ossl_namemap_stored(*param_6);
   uVar1 = auVar2._8_8_;
   if (auVar2._0_8_ != 0) {
      auVar2 = ossl_namemap_name2num(auVar2._0_8_, param_4);
      uVar1 = auVar2._8_8_;
      if (auVar2._0_4_ != 0) {
         if (param_1 == 0) {
            auVar3 = ossl_lib_ctx_get_data(*param_6, 0xf);
            uVar1 = auVar3._8_8_;
            param_1 = auVar3._0_8_;
            if (param_1 == 0) goto LAB_001000d6;
         }
         auVar3._0_8_ = ossl_method_store_add(param_1, param_3, auVar2._0_8_ & 0xffffffff, param_5, param_2, up_ref_loader);
         auVar3._8_8_ = free_loader;
         return auVar3;
      }
   }
   LAB_001000d6:auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar1;
   return auVar2 << 0x40;
}undefined8 get_loader_from_store(long param_1, undefined8 param_2, undefined8 *param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   iVar1 = *(int*)( param_3 + 1 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (iVar1 == 0) {
      uVar2 = ossl_namemap_stored(*param_3);
      iVar1 = ossl_namemap_name2num(uVar2, param_3[2]);
      if (param_1 == 0) goto LAB_00100184;
      LAB_0010012d:iVar1 = ossl_method_store_fetch(param_1, iVar1, param_3[3], param_2, &local_38);
      uVar2 = local_38;
      if (iVar1 != 0) goto LAB_0010014a;
   } else {
      if (param_1 != 0) goto LAB_0010012d;
      LAB_00100184:param_1 = ossl_lib_ctx_get_data(*param_3, 0xf);
      if (param_1 != 0) goto LAB_0010012d;
   }
   uVar2 = 0;
   LAB_0010014a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 unreserve_loader_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_unlock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0xf);
   if (lVar2 != 0) {
      uVar1 = ossl_method_unlock_store(lVar2);
      return uVar1;
   }
   return 0;
}undefined8 reserve_loader_store(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = ossl_method_lock_store();
      return uVar1;
   }
   lVar2 = ossl_lib_ctx_get_data(*param_2, 0xf);
   if (lVar2 != 0) {
      uVar1 = ossl_method_lock_store(lVar2);
      return uVar1;
   }
   return 0;
}long inner_loader_fetch_constprop_0(undefined8 *param_1, char *param_2, char *param_3) {
   byte bVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   uint uVar7;
   int iVar8;
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
   lVar3 = ossl_lib_ctx_get_data(*param_1, 0xf);
   lVar4 = ossl_namemap_stored(*param_1);
   local_88 = 0;
   pcVar5 = "";
   if (param_3 != (char*)0x0) {
      pcVar5 = param_3;
   }
   if (( lVar3 == 0 ) || ( lVar4 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/store/store_meth.c", 0x12d, "inner_loader_fetch");
      ERR_set_error(0x2c, 0x80106, 0);
      lVar3 = 0;
      goto LAB_001003a0;
   }
   if (( param_2 == (char*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
      *(byte*)( param_1 + 5 ) = *(byte*)( param_1 + 5 ) & 0xfe;
      param_1[2] = param_2;
      param_1[3] = pcVar5;
      *(undefined4*)( param_1 + 1 ) = 0;
      local_78 = get_tmp_loader_store;
      pcStack_70 = reserve_loader_store;
      local_48 = destruct_loader;
      local_80 = 0;
      local_68 = unreserve_loader_store;
      pcStack_60 = get_loader_from_store;
      local_58 = put_loader_in_store;
      pcStack_50 = construct_loader;
      local_88 = ossl_method_construct(*param_1, 0x16, &local_80, 0, &local_78, param_1);
      if (local_88 == 0) {
         uVar7 = ( uint ) * (byte*)( param_1 + 5 );
         lVar3 = 0;
         if (param_2 == (char*)0x0) goto LAB_001003a0;
         iVar2 = 0;
      } else {
         iVar2 = ossl_namemap_name2num(lVar4, param_2);
         ossl_method_store_cache_set(lVar3, local_80, iVar2, pcVar5, local_88, up_ref_loader, free_loader);
         bVar1 = *(byte*)( param_1 + 5 );
         if (( iVar2 == 0 ) && ( lVar3 = local_88 ),param_2 == (char*)0x0) goto LAB_001003a0;
         joined_r0x00100430:uVar7 = (uint)bVar1;
         lVar3 = local_88;
         if (local_88 != 0) goto LAB_001003a0;
      }
      LAB_0010048b:pcVar5 = "";
      iVar8 = ( (int)( ~uVar7 << 0x1f ) >> 0x1f ) + 0x8010d;
      if (( ~uVar7 & 1 ) != 0) {
         pcVar5 = "No store loader found. For standard store loaders you need at least one of the default or base providers available. Did you forget to load them? Info: ";
      }
      if (param_2 != (char*)0x0) goto LAB_001004c0;
      param_2 = (char*)ossl_namemap_num2name(lVar4, iVar2, 0);
      ERR_new();
      ERR_set_debug("crypto/store/store_meth.c", 0x16b, "inner_loader_fetch");
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
      if (param_2 == (char*)0x0) {
         param_2 = "<null>";
      }
   } else {
      iVar8 = ossl_method_store_cache_get(lVar3, 0, iVar2, pcVar5, &local_88);
      if (iVar8 == 0) {
         *(byte*)( param_1 + 5 ) = *(byte*)( param_1 + 5 ) & 0xfe;
         *(int*)( param_1 + 1 ) = iVar2;
         param_1[2] = param_2;
         local_78 = get_tmp_loader_store;
         pcStack_70 = reserve_loader_store;
         param_1[3] = pcVar5;
         local_68 = unreserve_loader_store;
         pcStack_60 = get_loader_from_store;
         local_48 = destruct_loader;
         local_80 = 0;
         local_58 = put_loader_in_store;
         pcStack_50 = construct_loader;
         local_88 = ossl_method_construct(*param_1, 0x16, &local_80, 0, &local_78, param_1);
         if (local_88 != 0) {
            ossl_method_store_cache_set(lVar3, local_80, iVar2, pcVar5, local_88, up_ref_loader, free_loader);
            bVar1 = *(byte*)( param_1 + 5 );
            goto joined_r0x00100430;
         }
         uVar7 = ( uint ) * (byte*)( param_1 + 5 );
         goto LAB_0010048b;
      }
      lVar3 = local_88;
      if (local_88 != 0) goto LAB_001003a0;
      pcVar5 = "";
      iVar8 = 0x8010d;
      LAB_001004c0:ERR_new();
      ERR_set_debug("crypto/store/store_meth.c", 0x16b, "inner_loader_fetch");
      if (param_3 == (char*)0x0) {
         param_3 = "<null>";
      }
   }
   uVar6 = ossl_lib_ctx_get_descriptor(*param_1);
   ERR_set_error(0x2c, iVar8, "%s%s, Scheme (%s : %d), Properties (%s)", pcVar5, uVar6, param_2, iVar2, param_3);
   lVar3 = local_88;
   LAB_001003a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar3;
}undefined8 OSSL_STORE_LOADER_up_ref(long param_1) {
   if (*(long*)( param_1 + 0x60 ) != 0) {
      LOCK();
      *(int*)( param_1 + 0x80 ) = *(int*)( param_1 + 0x80 ) + 1;
      UNLOCK();
   }
   return 1;
}void up_ref_loader(void) {
   OSSL_STORE_LOADER_up_ref();
   return;
}void OSSL_STORE_LOADER_free(void *param_1) {
   int *piVar1;
   int iVar2;
   if (( param_1 != (void*)0x0 ) && ( *(long*)( (long)param_1 + 0x60 ) != 0 )) {
      LOCK();
      piVar1 = (int*)( (long)param_1 + 0x80 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
         return;
      }
      ossl_provider_free(*(undefined8*)( (long)param_1 + 0x60 ));
   }
   CRYPTO_free(param_1);
   return;
}void free_loader(void) {
   OSSL_STORE_LOADER_free();
   return;
}void destruct_loader(void) {
   OSSL_STORE_LOADER_free();
   return;
}void *construct_loader(undefined8 *param_1, undefined8 param_2, long param_3) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   void *ptr;
   long lVar6;
   int *piVar7;
   uVar5 = ossl_provider_libctx(param_2);
   uVar5 = ossl_namemap_stored(uVar5);
   iVar3 = ossl_namemap_add_name(uVar5, 0, *param_1);
   if (iVar3 != 0) {
      piVar7 = (int*)param_1[2];
      ptr = (void*)CRYPTO_zalloc(0xd8, "crypto/store/store_meth.c", 0x32);
      if (ptr != (void*)0x0) {
         LOCK();
         *(undefined4*)( (long)ptr + 0x80 ) = 1;
         UNLOCK();
         iVar4 = ossl_provider_up_ref(param_2);
         if (iVar4 != 0) {
            uVar5 = param_1[1];
            iVar4 = *piVar7;
            *(undefined8*)( (long)ptr + 0x60 ) = param_2;
            *(int*)( (long)ptr + 0x68 ) = iVar3;
            lVar6 = *(long*)( (long)ptr + 0x88 );
            uVar2 = param_1[3];
            *(undefined8*)( (long)ptr + 0x70 ) = uVar5;
            *(undefined8*)( (long)ptr + 0x78 ) = uVar2;
            while (iVar4 != 0) {
               /* WARNING: Could not find normalized switch variable to match jumptable */
               switch (iVar4) {
                  case 1:
            if (lVar6 == 0) {
              lVar6 = *(long *)(piVar7 + 2);
              *(long *)((long)ptr + 0x88) = lVar6;
            }
            break;
                  for (int i_760 = 0; i_760 < 8; i_760++) {
                     case 2:
            if (*(long *)((long)ptr + 0x90) == 0) {
              *(undefined8 *)((long)ptr + 0x90) = *(undefined8 *)(piVar7 + 2);
            }
            break;
                  }
                  case 10:
            if (*(long *)((long)ptr + 0xd0) == 0) {
              *(undefined8 *)((long)ptr + 0xd0) = *(undefined8 *)(piVar7 + 2);
            }
               }
               piVar1 = piVar7 + 4;
               piVar7 = piVar7 + 4;
               /* WARNING: This code block may not be properly labeled as switch case */
               iVar4 = *piVar1;
            };
            if (( ( ( lVar6 != 0 ) || ( *(long*)( (long)ptr + 0x90 ) != 0 ) ) && ( *(long*)( (long)ptr + 0xa8 ) != 0 ) ) && ( ( *(long*)( (long)ptr + 0xb0 ) != 0 && ( *(long*)( (long)ptr + 0xb8 ) != 0 ) ) )) {
               return ptr;
            }
            OSSL_STORE_LOADER_free(ptr);
            ERR_new();
            ERR_set_debug("crypto/store/store_meth.c", 0xf2, "loader_from_algorithm");
            ERR_set_error(0x2c, 0x74, 0);
            goto LAB_00100890;
         }
      }
      CRYPTO_free(ptr);
   }
   LAB_00100890:*(byte*)( param_3 + 0x28 ) = *(byte*)( param_3 + 0x28 ) | 1;
   return (void*)0x0;
}undefined8 OSSL_STORE_LOADER_fetch(undefined8 param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_48[4];
   long local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   local_48[0] = param_1;
   uVar1 = inner_loader_fetch_constprop_0(local_48);
   if (local_28 != 0) {
      ossl_method_store_free();
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_store_loader_store_cache_flush(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_lib_ctx_get_data(param_1, 0xf);
   if (lVar1 == 0) {
      return 1;
   }
   uVar2 = ossl_method_store_cache_flush_all(lVar1);
   return uVar2;
}undefined8 ossl_store_loader_store_remove_all_provided(undefined8 param_1) {
   undefined8 uVar1;
   long lVar2;
   uVar1 = ossl_provider_libctx();
   lVar2 = ossl_lib_ctx_get_data(uVar1, 0xf);
   if (lVar2 == 0) {
      return 1;
   }
   uVar1 = ossl_method_store_remove_all_provided(lVar2, param_1);
   return uVar1;
}undefined8 OSSL_STORE_LOADER_get0_provider(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x60 );
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_meth.c", 0x19e, "OSSL_STORE_LOADER_get0_provider");
   ERR_set_error(0x2c, 0xc0102, 0);
   return 0;
}undefined8 OSSL_STORE_LOADER_get0_properties(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x70 );
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_meth.c", 0x1a8, "OSSL_STORE_LOADER_get0_properties");
   ERR_set_error(0x2c, 0xc0102, 0);
   return 0;
}undefined4 ossl_store_loader_get_number(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 0x68 );
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_meth.c", 0x1b2, "ossl_store_loader_get_number");
   ERR_set_error(0x2c, 0xc0102, 0);
   return 0;
}undefined8 OSSL_STORE_LOADER_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x78 );
}bool OSSL_STORE_LOADER_is_a(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   bool bVar3;
   bVar3 = false;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar2 = ossl_provider_libctx();
      uVar2 = ossl_namemap_stored(uVar2);
      iVar1 = ossl_namemap_name2num(uVar2, param_2);
      bVar3 = *(int*)( param_1 + 0x68 ) == iVar1;
   }
   return bVar3;
}void OSSL_STORE_LOADER_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
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
   inner_loader_fetch_constprop_0(local_58, 0, 0);
   local_68 = param_2;
   local_60 = param_3;
   if (local_38 != 0) {
      ossl_method_store_do_all(local_38, 0x100000, &local_68);
   }
   uVar1 = ossl_lib_ctx_get_data(param_1, 0xf);
   ossl_method_store_do_all(uVar1, 0x100000, &local_68);
   if (local_38 != 0) {
      ossl_method_store_free();
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 OSSL_STORE_LOADER_names_do_all(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x60 ) == 0) {
      return 1;
   }
   uVar1 = ossl_provider_libctx();
   uVar1 = ossl_namemap_stored(uVar1);
   uVar1 = ossl_namemap_doall_names(uVar1, *(undefined4*)( param_1 + 0x68 ), param_2, param_3);
   return uVar1;
}
