undefined8 *EVP_MAC_CTX_new(undefined8 *param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   long lVar4;
   ptr = (undefined8*)CRYPTO_zalloc(0x10, "crypto/evp/mac_lib.c", 0x18);
   if (ptr != (undefined8*)0x0) {
      uVar3 = *param_1;
      pcVar1 = (code*)param_1[5];
      *ptr = param_1;
      uVar3 = ossl_provider_ctx(uVar3);
      lVar4 = ( *pcVar1 )(uVar3);
      ptr[1] = lVar4;
      if (lVar4 != 0) {
         iVar2 = EVP_MAC_up_ref(param_1);
         if (iVar2 != 0) {
            return ptr;
         }
         lVar4 = ptr[1];
      }
      ( *(code*)param_1[7] )(lVar4);
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x1f, "EVP_MAC_CTX_new");
      ERR_set_error(6, 0x80006, 0);
      CRYPTO_free(ptr);
   }
   return (undefined8*)0x0;
}void EVP_MAC_CTX_free(long *param_1) {
   if (param_1 != (long*)0x0) {
      ( **(code**)( *param_1 + 0x38 ) )(param_1[1]);
      param_1[1] = 0;
      EVP_MAC_free(*param_1);
      CRYPTO_free(param_1);
      return;
   }
   return;
}long *EVP_MAC_CTX_dup(long *param_1) {
   long lVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   if (( param_1[1] != 0 ) && ( ptr = (long*)CRYPTO_malloc(0x10, "crypto/evp/mac_lib.c", 0x39) ),ptr != (long*)0x0) {
      lVar1 = param_1[1];
      lVar3 = *param_1;
      *ptr = *param_1;
      ptr[1] = lVar1;
      iVar2 = EVP_MAC_up_ref(lVar3);
      if (iVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/mac_lib.c", 0x3f, "EVP_MAC_CTX_dup");
         ERR_set_error(6, 0x80006, 0);
         CRYPTO_free(ptr);
      } else {
         lVar3 = ( **(code**)( *param_1 + 0x30 ) )(param_1[1]);
         ptr[1] = lVar3;
         if (lVar3 != 0) {
            return ptr;
         }
         EVP_MAC_CTX_free(ptr);
      }
   }
   return (long*)0x0;
}undefined8 EVP_MAC_CTX_get0_mac(undefined8 *param_1) {
   return *param_1;
}undefined8 EVP_MAC_CTX_get_mac_size(long *param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (param_1[1] != 0) {
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      OSSL_PARAM_construct_size_t(local_a8, &_LC1, &local_70);
      local_48._0_8_ = local_88;
      pcVar1 = *(code**)( *param_1 + 0x78 );
      if (pcVar1 == (code*)0x0) {
         pcVar1 = *(code**)( *param_1 + 0x70 );
         if (pcVar1 == (code*)0x0) goto LAB_001002a0;
         iVar2 = ( *pcVar1 )(local_68);
         uVar3 = local_70;
      } else {
         iVar2 = ( *pcVar1 )(param_1[1], local_68);
         uVar3 = local_70;
      }
      local_70 = uVar3;
      if (iVar2 != 0) goto LAB_001002a2;
   }
   LAB_001002a0:uVar3 = 0;
   LAB_001002a2:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_MAC_CTX_get_block_size(long *param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (param_1[1] != 0) {
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      OSSL_PARAM_construct_size_t(local_a8, "block-size", &local_70);
      local_48._0_8_ = local_88;
      pcVar1 = *(code**)( *param_1 + 0x78 );
      if (pcVar1 == (code*)0x0) {
         pcVar1 = *(code**)( *param_1 + 0x70 );
         if (pcVar1 == (code*)0x0) goto LAB_00100380;
         iVar2 = ( *pcVar1 )(local_68);
         uVar3 = local_70;
      } else {
         iVar2 = ( *pcVar1 )(param_1[1], local_68);
         uVar3 = local_70;
      }
      local_70 = uVar3;
      if (iVar2 != 0) goto LAB_00100382;
   }
   LAB_00100380:uVar3 = 0;
   LAB_00100382:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_MAC_init(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x40 ) != (code*)0x0) {
      for (int i_652 = 0; i_652 < 2; i_652++) {
         /* WARNING: Could not recover jumptable at 0x001003d4. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x40 ) )(param_1[1]);
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/mac_lib.c", 0x77, "EVP_MAC_init");
   ERR_set_error(0x80006, 0x8010c, 0);
   return 0;
}undefined8 EVP_MAC_init_SKEY(long *param_1, long param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = (code*)( (long*)*param_1 )[0x11];
   if (( UNRECOVERED_JUMPTABLE != (code*)0x0 ) && ( *(long*)( *(long*)( param_2 + 0x18 ) + 0x18 ) == *(long*)*param_1 )) {
      for (int i_653 = 0; i_653 < 2; i_653++) {
         /* WARNING: Could not recover jumptable at 0x00100488. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(param_1[1], *(undefined8*)( param_2 + 0x10 ));
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/mac_lib.c", 0x82, "EVP_MAC_init_SKEY");
   ERR_set_error(0x80006, 0x8010c, 0);
   return 0;
}void EVP_MAC_update(long *param_1) {
   for (int i_654 = 0; i_654 < 2; i_654++) {
      /* WARNING: Could not recover jumptable at 0x001004a2. Too many branches */
   }
   ( **(code**)( *param_1 + 0x48 ) )(param_1[1]);
   return;
}undefined8 EVP_MAC_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x70 ) != (code*)0x0) {
      for (int i_655 = 0; i_655 < 2; i_655++) {
         /* WARNING: Could not recover jumptable at 0x001004c0. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x70 ) )(param_2);
      return uVar1;
   }
   return 1;
}undefined8 EVP_MAC_CTX_get_params(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      for (int i_656 = 0; i_656 < 2; i_656++) {
         /* WARNING: Could not recover jumptable at 0x001004e4. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
      return uVar1;
   }
   return 1;
}undefined8 EVP_MAC_CTX_set_params(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x80 ) != (code*)0x0) {
      for (int i_657 = 0; i_657 < 2; i_657++) {
         /* WARNING: Could not recover jumptable at 0x00100517. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x80 ) )(param_1[1]);
      return uVar1;
   }
   return 1;
}undefined8 EVP_MAC_final(long *param_1, long param_2, ulong *param_3, ulong param_4) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   int local_94;
   ulong local_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 0;
   if (( param_1 == (long*)0x0 ) || ( *param_1 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x96, "evp_mac_final");
      ERR_set_error(6, 0xda, 0);
      uVar3 = 0;
   } else if (*(long*)( *param_1 + 0x50 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x9a, "evp_mac_final");
      ERR_set_error(6, 0xbc, 0);
      uVar3 = 0;
   } else {
      uVar2 = EVP_MAC_CTX_get_mac_size();
      if (param_2 == 0) {
         if (param_3 == (ulong*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/mac_lib.c", 0xa1, "evp_mac_final");
            ERR_set_error(6, 0xc0102, 0);
            uVar3 = 0;
         } else {
            *param_3 = uVar2;
            uVar3 = 1;
         }
      } else if (param_4 < uVar2) {
         ERR_new();
         ERR_set_debug("crypto/evp/mac_lib.c", 0xa8, "evp_mac_final");
         ERR_set_error(6, 0x9b, 0);
         uVar3 = 0;
      } else {
         if (local_94 != 0) {
            OSSL_PARAM_construct_int(&local_c8, &_LC3, &local_94);
            local_68 = local_a8;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            local_78 = local_b8;
            uStack_70 = uStack_b0;
            OSSL_PARAM_construct_end(&local_c8);
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            local_40 = local_a8;
            local_50 = local_b8;
            uStack_48 = uStack_b0;
            iVar1 = EVP_MAC_CTX_set_params(param_1, &local_88);
            if (iVar1 < 1) {
               ERR_new();
               ERR_set_debug("crypto/evp/mac_lib.c", 0xb0, "evp_mac_final");
               ERR_set_error(6, 0xe3, 0);
               uVar3 = 0;
               goto LAB_001005d0;
            }
         }
         uVar3 = ( **(code**)( *param_1 + 0x50 ) )(param_1[1], param_2, &local_90, param_4);
         if (param_3 != (ulong*)0x0) {
            *param_3 = local_90;
         }
      }
   }
   LAB_001005d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_MAC_finalXOF(long *param_1, long param_2, ulong param_3) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   int local_94;
   undefined1 local_90[8];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 1;
   if (( param_1 == (long*)0x0 ) || ( *param_1 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x96, "evp_mac_final");
      ERR_set_error(6, 0xda, 0);
      uVar3 = 0;
   } else if (*(long*)( *param_1 + 0x50 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x9a, "evp_mac_final");
      ERR_set_error(6, 0xbc, 0);
      uVar3 = 0;
   } else {
      uVar2 = EVP_MAC_CTX_get_mac_size();
      if (param_2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/mac_lib.c", 0xa1, "evp_mac_final");
         ERR_set_error(6, 0xc0102, 0);
         uVar3 = 0;
      } else if (param_3 < uVar2) {
         ERR_new();
         ERR_set_debug("crypto/evp/mac_lib.c", 0xa8, "evp_mac_final");
         ERR_set_error(6, 0x9b, 0);
         uVar3 = 0;
      } else {
         if (local_94 != 0) {
            OSSL_PARAM_construct_int(&local_c8, &_LC3, &local_94);
            local_68 = local_a8;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            local_78 = local_b8;
            uStack_70 = uStack_b0;
            OSSL_PARAM_construct_end(&local_c8);
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            local_40 = local_a8;
            local_50 = local_b8;
            uStack_48 = uStack_b0;
            iVar1 = EVP_MAC_CTX_set_params(param_1, &local_88);
            if (iVar1 < 1) {
               ERR_new();
               ERR_set_debug("crypto/evp/mac_lib.c", 0xb0, "evp_mac_final");
               ERR_set_error(6, 0xe3, 0);
               uVar3 = 0;
               goto LAB_00100845;
            }
         }
         uVar3 = ( **(code**)( *param_1 + 0x50 ) )(param_1[1], param_2, local_90, param_3);
      }
   }
   LAB_00100845:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 evp_mac_get_number(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}undefined8 EVP_MAC_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 EVP_MAC_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}bool EVP_MAC_is_a(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined8*)0x0) {
      iVar1 = evp_is_a(*param_1, *(undefined4*)( param_1 + 1 ), 0, param_2);
      return iVar1 != 0;
   }
   return false;
}undefined8 EVP_MAC_names_do_all(long *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*param_1 == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*param_1, (int)param_1[1], param_2, param_3);
   return uVar1;
}void *EVP_Q_mac(void) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   long in_RCX;
   char *pcVar5;
   undefined8 in_R8;
   long in_R9;
   void *pvVar6;
   long in_FS_OFFSET;
   long in_stack_00000008;
   long in_stack_00000010;
   undefined8 in_stack_00000018;
   void *in_stack_00000020;
   undefined8 in_stack_00000028;
   undefined8 *in_stack_00000030;
   void *local_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_e0 = in_stack_00000020;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = EVP_MAC_fetch();
   local_a0 = 0;
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (in_stack_00000030 != (undefined8*)0x0) {
      *in_stack_00000030 = 0;
   }
   if (lVar2 == 0) {
      pvVar6 = (void*)0x0;
      goto LAB_00100bf1;
   }
   if (in_RCX == 0) {
      LAB_00100ba6:if (in_R9 == 0 && in_stack_00000008 == 0) {
         in_R9 = in_stack_00000010;
      }
      lVar4 = EVP_MAC_CTX_new(lVar2);
      if (lVar4 == 0) goto LAB_00100c78;
      iVar1 = EVP_MAC_CTX_set_params(lVar4, local_98);
      if (iVar1 == 0) {
         LAB_00100bde:pvVar6 = (void*)0x0;
      } else {
         iVar1 = EVP_MAC_CTX_set_params(lVar4, in_R8);
         pvVar6 = (void*)0x0;
         if (iVar1 != 0) {
            iVar1 = EVP_MAC_init(lVar4, in_R9, in_stack_00000008, in_R8);
            if (iVar1 != 0) {
               iVar1 = EVP_MAC_update(lVar4, in_stack_00000010, in_stack_00000018);
               if (iVar1 != 0) {
                  iVar1 = EVP_MAC_final(lVar4, in_stack_00000020, &local_a0, in_stack_00000028);
                  if (iVar1 != 0) {
                     if (in_stack_00000020 != (void*)0x0) {
                        LAB_00100d03:pvVar6 = local_e0;
                        if (in_stack_00000030 != (undefined8*)0x0) {
                           *in_stack_00000030 = local_a0;
                        }
                        goto LAB_00100be1;
                     }
                     local_e0 = CRYPTO_malloc((int)local_a0, "crypto/evp/mac_lib.c", 300);
                     if (local_e0 != (void*)0x0) {
                        iVar1 = EVP_MAC_final(lVar4, local_e0, 0, local_a0);
                        if (iVar1 != 0) goto LAB_00100d03;
                        CRYPTO_free(local_e0);
                     }
                  }
               }
            }
            goto LAB_00100bde;
         }
      }
   } else {
      uVar3 = EVP_MAC_settable_ctx_params(lVar2);
      lVar4 = OSSL_PARAM_locate_const(uVar3, "digest");
      pcVar5 = "digest";
      if (lVar4 != 0) {
         LAB_00100b77:OSSL_PARAM_construct_utf8_string(&local_d8, pcVar5, in_RCX, 0);
         local_78._0_8_ = local_b8;
         local_98._8_8_ = uStack_d0;
         local_98._0_8_ = local_d8;
         local_88._8_8_ = uStack_c0;
         local_88._0_8_ = local_c8;
         goto LAB_00100ba6;
      }
      lVar4 = OSSL_PARAM_locate_const(uVar3, "cipher");
      pcVar5 = "cipher";
      if (lVar4 != 0) goto LAB_00100b77;
      ERR_new();
      ERR_set_debug("crypto/evp/mac_lib.c", 0x11b, __func___0);
      ERR_set_error(6, 0x80106, 0);
      LAB_00100c78:pvVar6 = (void*)0x0;
      lVar4 = 0;
   }
   LAB_00100be1:EVP_MAC_CTX_free(lVar4);
   EVP_MAC_free(lVar2);
   LAB_00100bf1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pvVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
