undefined8 loader_set_params(long param_1, undefined8 param_2, long param_3, long param_4) {
   undefined8 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
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
   if (( param_3 != 0 ) && ( uVar1 = ( **(code**)( param_1 + 0xa0 ) )(param_2, param_3) ),(int)uVar1 == 0) goto LAB_0010006b;
   if (param_4 != 0) {
      lVar2 = OSSL_PARAM_locate_const(param_3, "properties");
      uVar1 = 1;
      if (lVar2 != 0) goto LAB_0010006b;
      OSSL_PARAM_construct_utf8_string(&local_b8, "properties", param_4, 0);
      local_68 = local_98;
      local_88 = local_b8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_60 = local_b8;
      uStack_58 = uStack_b0;
      local_40 = local_98;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      uVar1 = ( **(code**)( param_1 + 0xa0 ) )(param_2, &local_88);
      if ((int)uVar1 == 0) goto LAB_0010006b;
   }
   uVar1 = 1;
   LAB_0010006b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar1;
}void OSSL_STORE_INFO_free(undefined4 *param_1) {
   if (param_1 == (undefined4*)0x0) {
      return;
   }
   switch (*param_1) {
      case 1:
    CRYPTO_free(*(void **)(param_1 + 2));
    CRYPTO_free(*(void **)(param_1 + 4));
    break;
      case 2:
      case 3:
      case 4:
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 2));
    break;
      case 5:
    X509_free(*(X509 **)(param_1 + 2));
    break;
      case 6:
    X509_CRL_free(*(X509_CRL **)(param_1 + 2));
      default:
   }
   CRYPTO_free(param_1);
   return;
}long *OSSL_STORE_open_ex(undefined8 param_1, undefined8 param_2, char *param_3, long param_4, undefined8 param_5, undefined8 param_6, long param_7, long param_8) {
   undefined *puVar1;
   bool bVar2;
   int iVar3;
   char *pcVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   long lVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   bool bVar13;
   byte bVar14;
   ulong local_250;
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined1 local_1e8[16];
   long local_1d8;
   long local_1d0;
   long local_1c8;
   undefined8 local_1c0[3];
   void *local_1a8;
   undefined8 local_198;
   undefined1 local_190[56];
   undefined *local_158[2];
   char local_148[264];
   long local_40;
   bVar14 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_158[0] = &_LC2;
   local_208 = (undefined1[16])0x0;
   local_1f8 = (undefined1[16])0x0;
   local_1e8 = (undefined1[16])0x0;
   OPENSSL_strlcpy(local_148, param_1, 0x100);
   pcVar4 = strchr(local_148, 0x3a);
   if (pcVar4 == (char*)0x0) {
      LAB_001002b0:local_250 = 1;
   } else {
      *pcVar4 = '\0';
      iVar3 = OPENSSL_strcasecmp(local_148, &_LC2);
      if (iVar3 == 0) goto LAB_001002b0;
      iVar3 = (byte)pcVar4[1] - 0x2f;
      if (iVar3 == 0) {
         iVar3 = (byte)pcVar4[2] - 0x2f;
      }
      local_250 = ( ulong )(iVar3 != 0) + 1;
      local_158[iVar3 != 0] = local_148;
   }
   ERR_set_mark();
   if (param_4 == 0) {
      LAB_001002ef:lVar11 = 0;
      lVar8 = 0;
      bVar2 = true;
      do {
         puVar1 = local_158[lVar11];
         ERR_set_mark();
         lVar5 = ossl_store_get0_loader_int(puVar1);
         if (lVar5 == 0) {
            ERR_pop_to_mark();
            lVar8 = OSSL_STORE_LOADER_fetch(param_2, puVar1, param_3);
            if (lVar8 == 0) {
               lVar8 = 0;
               bVar13 = true;
               lVar6 = 0;
            } else {
               uVar9 = OSSL_STORE_LOADER_get0_provider(lVar8);
               uVar9 = OSSL_PROVIDER_get0_provider_ctx(uVar9);
               lVar5 = lVar8;
               if (*(code**)( lVar8 + 0xd0 ) == (code*)0x0) {
                  if (( *(code**)( lVar8 + 0x88 ) != (code*)0x0 ) && ( lVar6 = lVar6 != 0 )) {
                     iVar3 = loader_set_params(lVar8, lVar6, param_6, param_3);
                     if (iVar3 != 0) {
                        bVar13 = false;
                        goto LAB_001004f5;
                     }
                     ( **(code**)( lVar8 + 0xb8 ) )(lVar6);
                  }
                  LAB_001006c9:lVar6 = 0;
                  OSSL_STORE_LOADER_free(lVar8);
                  bVar13 = true;
                  lVar5 = 0;
               } else {
                  lVar6 = ( **(code**)( lVar8 + 0xd0 ) )(uVar9, param_1, param_6, &ossl_pw_passphrase_callback_dec, local_208);
                  bVar13 = false;
                  if (lVar6 == 0) goto LAB_001006c9;
               }
               LAB_001004f5:ossl_pw_clear_passphrase_cache(local_208);
               bVar2 = false;
               lVar8 = lVar5;
            }
         } else {
            ERR_clear_last_mark();
            if (*(code**)( lVar5 + 0x58 ) == (code*)0x0) {
               lVar6 = ( **(code**)( lVar5 + 0x10 ) )(lVar5, param_1, param_4, param_5);
               bVar13 = lVar6 == 0;
               bVar2 = false;
            } else {
               lVar6 = ( **(code**)( lVar5 + 0x58 ) )(lVar5, param_1, param_2, param_3, param_4, param_5);
               bVar13 = lVar6 == 0;
               bVar2 = false;
            }
         }
         uVar10 = lVar11 + 1;
         lVar11 = 1;
      } while ( (bool)( uVar10 < local_250 & bVar13 ) );
      if (bVar2) {
         ERR_clear_last_mark();
         if (lVar6 != 0) {
            LAB_001005ed:param_3 = (char*)0x0;
            goto LAB_001005f0;
         }
         param_3 = (char*)0x0;
      } else if (lVar6 == 0) {
         ERR_clear_last_mark();
         param_3 = (char*)0x0;
      } else {
         if (( param_3 != (char*)0x0 ) && ( param_3 = CRYPTO_strdup(param_3, "crypto/store/store_lib.c", 0xbd) ),param_3 == (char*)0x0) {
            ERR_clear_last_mark();
            goto LAB_001005ed;
         }
         plVar7 = (long*)CRYPTO_zalloc(0x78, "crypto/store/store_lib.c", 0xbe);
         if (plVar7 != (long*)0x0) {
            plVar7[6] = (long)param_3;
            plVar7[1] = lVar8;
            *plVar7 = lVar5;
            plVar7[2] = lVar6;
            plVar7[9] = local_208._0_8_;
            plVar7[10] = local_208._8_8_;
            plVar7[3] = param_7;
            plVar7[0xb] = local_1f8._0_8_;
            plVar7[0xc] = local_1f8._8_8_;
            plVar7[4] = param_8;
            plVar7[0xd] = local_1e8._0_8_;
            plVar7[0xe] = local_1e8._8_8_;
            ERR_pop_to_mark();
            goto LAB_00100429;
         }
         ERR_clear_last_mark();
         LAB_001005f0:puVar12 = local_1c0;
         for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
         }
         local_1d8 = lVar5;
         local_1d0 = lVar8;
         local_1c8 = lVar6;
         if (( lVar8 == 0 ) || ( ( **(code**)( lVar5 + 0xb8 ) )(lVar6),local_1d0 == 0 )) {
            ( **(code**)( local_1d8 + 0x50 ) )(local_1c8);
         }
         OPENSSL_sk_pop_free(local_198, OSSL_STORE_INFO_free);
         OSSL_STORE_LOADER_free(local_1d0);
         CRYPTO_free(local_1a8);
         ossl_pw_clear_passphrase_data(local_190);
      }
   } else {
      iVar3 = ossl_pw_set_ui_method(local_208, param_4, param_5);
      if (( iVar3 != 0 ) && ( iVar3 = ossl_pw_enable_passphrase_caching(local_208) ),iVar3 != 0) goto LAB_001002ef;
      param_3 = (char*)0x0;
      lVar8 = 0;
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x6d, "OSSL_STORE_open_ex");
      ERR_set_error(0x2c, 0x8000f, 0);
      ERR_clear_last_mark();
   }
   plVar7 = (long*)0x0;
   OSSL_STORE_LOADER_free(lVar8);
   CRYPTO_free(param_3);
   CRYPTO_free((void*)0x0);
   LAB_00100429:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return plVar7;
}void OSSL_STORE_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   OSSL_STORE_open_ex(param_1, 0, 0, param_2, param_3, 0, param_4, param_5);
   return;
}undefined8 OSSL_STORE_vctrl(long *param_1, int param_2, uint *param_3) {
   uint uVar1;
   undefined8 uVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined4 local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[1] == 0) {
      if (*(code**)( *param_1 + 0x20 ) != (code*)0x0) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1840 = 0; i_1840 < 2; i_1840++) {
               /* WARNING: Could not recover jumptable at 0x0010083f. Too many branches */
            }
            uVar2 = ( **(code**)( *param_1 + 0x20 ) )(param_1[2]);
            return uVar2;
         }
         goto LAB_001008be;
      }
      uVar2 = 1;
   } else {
      pcVar3 = *(code**)( param_1[1] + 0xa0 );
      uVar2 = 1;
      if (pcVar3 != (code*)0x0) {
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         local_38 = (undefined1[16])0x0;
         local_28 = (undefined1[16])0x0;
         if (param_2 == 1) {
            uVar1 = *param_3;
            if (uVar1 < 0x30) {
               puVar4 = (undefined8*)( (ulong)uVar1 + *(long*)( param_3 + 4 ) );
               *param_3 = uVar1 + 8;
            } else {
               puVar4 = *(undefined8**)( param_3 + 2 );
               *(undefined8**)( param_3 + 2 ) = puVar4 + 1;
            }
            local_6c = *(undefined4*)*puVar4;
            OSSL_PARAM_construct_int(&local_a8, "use_secmem", &local_6c);
            local_48._0_8_ = local_88;
            local_68._8_8_ = uStack_a0;
            local_68._0_8_ = local_a8;
            pcVar3 = *(code**)( param_1[1] + 0xa0 );
            local_58._8_8_ = uStack_90;
            local_58._0_8_ = local_98;
         }
         uVar2 = ( *pcVar3 )(param_1[2], local_68);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   LAB_001008be:/* WARNING: Subroutine does not return */__stack_chk_fail();
}void OSSL_STORE_ctrl(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = param_1;
      local_78 = param_2;
      local_68 = param_3;
      local_58 = param_4;
      local_48 = param_5;
      local_38 = param_6;
      local_28 = param_7;
      local_18 = param_8;
   }
   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = &stack0x00000008;
   local_d8 = 0x10;
   local_c8 = local_b8;
   local_d4 = 0x30;
   local_a8 = param_11;
   local_a0 = param_12;
   local_98 = param_13;
   local_90 = param_14;
   OSSL_STORE_vctrl(param_9, param_10, &local_d8);
   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 OSSL_STORE_expect(long *param_1, undefined8 param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   uint local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_6c = (uint)param_2;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (long*)0x0 ) || ( 6 < local_6c )) {
      ERR_new(param_1, param_2, 0);
      ERR_set_debug("crypto/store/store_lib.c", 299, "OSSL_STORE_expect");
      ERR_set_error(0x2c, 0x80106, 0);
      uVar1 = 0;
   } else if ((int)param_1[7] == 0) {
      *(uint*)( param_1 + 5 ) = local_6c;
      uVar1 = 1;
      if (param_1[1] != 0) {
         if (*(long*)( param_1[1] + 0xa0 ) == 0) goto LAB_00100a68;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         local_38 = (undefined1[16])0x0;
         local_28 = (undefined1[16])0x0;
         OSSL_PARAM_construct_int(local_a8, "expect", &local_6c);
         local_48._0_8_ = local_88;
         uVar1 = ( **(code**)( param_1[1] + 0xa0 ) )(param_1[2], local_68);
         if (param_1[1] != 0) goto LAB_00100a68;
      }
      if (*(code**)( *param_1 + 0x28 ) != (code*)0x0) {
         uVar1 = ( **(code**)( *param_1 + 0x28 ) )(param_1[2], local_6c);
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x12f, "OSSL_STORE_expect");
      ERR_set_error(0x2c, 0x75, 0);
      uVar1 = 0;
   }
   LAB_00100a68:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar1;
}ulong OSSL_STORE_find(long *param_1, int *param_2) {
   int iVar1;
   uint uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   BIGNUM *a;
   long in_FS_OFFSET;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)param_1[7] == 0) {
      if (param_2 == (int*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/store/store_lib.c", 0x14e, "OSSL_STORE_find");
         ERR_set_error(0x2c, 0xc0102, 0);
         goto LAB_00100ca0;
      }
      if (param_1[1] == 0) {
         if (*(code**)( *param_1 + 0x30 ) != (code*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               for (int i_1841 = 0; i_1841 < 2; i_1841++) {
                  /* WARNING: Could not recover jumptable at 0x00100c64. Too many branches */
               }
               uVar4 = ( **(code**)( *param_1 + 0x30 ) )(param_1[2]);
               return uVar4;
            }
            goto LAB_00100eb5;
         }
         ERR_new();
         uVar5 = 0x199;
         LAB_00100d21:ERR_set_debug("crypto/store/store_lib.c", uVar5, "OSSL_STORE_find");
         ERR_set_error(0x2c, 0x76, 0);
         goto LAB_00100ca0;
      }
      local_38 = (uchar*)0x0;
      if (*(long*)( param_1[1] + 0xa0 ) == 0) {
         ERR_new();
         uVar5 = 0x15c;
         goto LAB_00100d21;
      }
      lVar3 = OSSL_PARAM_BLD_new();
      if (lVar3 == 0) {
         ERR_new();
         ERR_set_debug("crypto/store/store_lib.c", 0x161, "OSSL_STORE_find");
         ERR_set_error(0x2c, 0x8000f, 0);
         goto LAB_00100ca0;
      }
      iVar1 = *param_2;
      uVar2 = 0;
      if (iVar1 == 3) {
         uVar5 = EVP_MD_get0_name(*(undefined8*)( param_2 + 6 ));
         iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar3, "digest", uVar5, 0);
         if (( iVar1 == 0 ) || ( iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar3, "fingerprint", *(undefined8*)( param_2 + 8 ), *(undefined8*)( param_2 + 10 )) ),iVar1 == 0) goto LAB_00100be0;
         LAB_00100cd8:a = (BIGNUM*)0x0;
         LAB_00100cda:uVar5 = OSSL_PARAM_BLD_to_param(lVar3);
         uVar2 = ( **(code**)( param_1[1] + 0xa0 ) )(param_1[2], uVar5);
         OSSL_PARAM_free(uVar5);
      } else {
         if (iVar1 < 4) {
            if (iVar1 == 1) {
               iVar1 = i2d_X509_NAME(*(X509_NAME**)( param_2 + 2 ), &local_38);
               if (0 < iVar1) {
                  iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar3, "subject", local_38, (long)iVar1);
                  goto joined_r0x00100cd2;
               }
            } else if (( ( iVar1 == 2 ) && ( iVar1 = i2d_X509_NAME(*(X509_NAME**)( param_2 + 2 ), &local_38) ),0 < iVar1 )) {
               iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar3, &_LC6, local_38, (long)iVar1);
               if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_00100cda;
               goto LAB_00100be2;
            }
         } else if (iVar1 == 4) {
            iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar3, "alias", *(undefined8*)( param_2 + 8 ), *(undefined8*)( param_2 + 10 ));
            joined_r0x00100cd2:if (iVar1 != 0) goto LAB_00100cd8;
         }
         LAB_00100be0:a = (BIGNUM*)0x0;
      }
      LAB_00100be2:OSSL_PARAM_BLD_free(lVar3);
      CRYPTO_free(local_38);
      BN_free(a);
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x14a, "OSSL_STORE_find");
      ERR_set_error(0x2c, 0x75, 0);
      LAB_00100ca0:uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar2;
   }
   LAB_00100eb5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined4 OSSL_STORE_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   char *pcVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   char local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_178 = (undefined1[16])0x0;
   local_168 = (undefined1[16])0x0;
   local_158 = (undefined1[16])0x0;
   OPENSSL_strlcpy(local_148, param_1, 0x100);
   pcVar3 = strchr(local_148, 0x3a);
   if (pcVar3 != (char*)0x0) {
      *pcVar3 = '\0';
      if (param_4 == 0) {
         LAB_00100f66:uVar2 = 0;
         lVar4 = OSSL_STORE_LOADER_fetch(param_2, local_148, param_3);
         if (( lVar4 != 0 ) && ( *(long*)( lVar4 + 200 ) != 0 )) {
            uVar5 = OSSL_STORE_LOADER_get0_provider(lVar4);
            uVar5 = OSSL_PROVIDER_get0_provider_ctx(uVar5);
            uVar2 = ( **(code**)( lVar4 + 200 ) )(uVar5, param_1, param_6, &ossl_pw_passphrase_callback_dec, local_178);
         }
         ossl_pw_clear_passphrase_cache(local_178);
         OSSL_STORE_LOADER_free(lVar4);
         goto LAB_00101003;
      }
      iVar1 = ossl_pw_set_ui_method(local_178, param_4, param_5);
      if (iVar1 != 0) {
         iVar1 = ossl_pw_enable_passphrase_caching(local_178);
         if (iVar1 != 0) goto LAB_00100f66;
      }
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x203, "OSSL_STORE_delete");
      ERR_set_error(0x2c, 0x8000f, 0);
   }
   uVar2 = 0;
   LAB_00101003:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong OSSL_STORE_error(long *param_1) {
   ulong uVar1;
   if (param_1[1] != 0) {
      return ( ulong ) * (uint*)( (long)param_1 + 0x3c );
   }
   for (int i_1842 = 0; i_1842 < 2; i_1842++) {
      /* WARNING: Could not recover jumptable at 0x0010104e. Too many branches */
   }
   uVar1 = ( **(code**)( *param_1 + 0x48 ) )(param_1[2]);
   return uVar1;
}bool OSSL_STORE_eof(long *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   lVar2 = *param_1;
   lVar3 = param_1[2];
   if (param_1[1] != 0) {
      iVar1 = ( **(code**)( lVar2 + 0xb0 ) )(lVar3);
      if (param_1[1] != 0) {
         return iVar1 != 0;
      }
      lVar2 = *param_1;
      lVar3 = param_1[2];
   }
   iVar1 = ( **(code**)( lVar2 + 0x40 ) )(lVar3);
   return iVar1 != 0;
}undefined4 OSSL_STORE_close(long *param_1) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   if (param_1 == (long*)0x0) {
      uVar1 = 1;
      goto LAB_0010110b;
   }
   lVar2 = *param_1;
   lVar3 = param_1[2];
   if (param_1[1] == 0) {
      LAB_00101130:uVar1 = ( **(code**)( lVar2 + 0x50 ) )(lVar3);
   } else {
      uVar1 = ( **(code**)( lVar2 + 0xb8 ) )(lVar3);
      if (param_1[1] == 0) {
         lVar2 = *param_1;
         lVar3 = param_1[2];
         goto LAB_00101130;
      }
   }
   OPENSSL_sk_pop_free(param_1[8], OSSL_STORE_INFO_free);
   OSSL_STORE_LOADER_free(param_1[1]);
   CRYPTO_free((void*)param_1[6]);
   ossl_pw_clear_passphrase_data(param_1 + 9);
   LAB_0010110b:CRYPTO_free(param_1);
   return uVar1;
}void OSSL_STORE_INFO_new(undefined4 param_1, undefined8 param_2) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)CRYPTO_zalloc(0x18, "crypto/store/store_lib.c", 0x261);
   if (puVar1 != (undefined4*)0x0) {
      *puVar1 = param_1;
      *(undefined8*)( puVar1 + 2 ) = param_2;
   }
   return;
}long OSSL_STORE_INFO_new_NAME(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(1, 0);
   if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x270, "OSSL_STORE_INFO_new_NAME");
      ERR_set_error(0x2c, 0x8002c, 0);
   } else {
      *(undefined8*)( lVar1 + 8 ) = param_1;
      *(undefined8*)( lVar1 + 0x10 ) = 0;
   }
   return lVar1;
}int OSSL_STORE_INFO_set0_NAME_description(int *param_1, undefined8 param_2) {
   if (*param_1 == 1) {
      *(undefined8*)( param_1 + 4 ) = param_2;
      return *param_1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x27d, "OSSL_STORE_INFO_set0_NAME_description");
   ERR_set_error(0x2c, 0x80106, 0);
   return 0;
}long OSSL_STORE_INFO_new_PARAMS(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(2, param_1);
   if (lVar1 != 0) {
      return lVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x28a, "OSSL_STORE_INFO_new_PARAMS");
   ERR_set_error(0x2c, 0x8002c, 0);
   return 0;
}long OSSL_STORE_INFO_new_PUBKEY(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(3, param_1);
   if (lVar1 != 0) {
      return lVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x293, "OSSL_STORE_INFO_new_PUBKEY");
   ERR_set_error(0x2c, 0x8002c, 0);
   return 0;
}long OSSL_STORE_INFO_new_PKEY(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(4, param_1);
   if (lVar1 != 0) {
      return lVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x29c, "OSSL_STORE_INFO_new_PKEY");
   ERR_set_error(0x2c, 0x8002c, 0);
   return 0;
}long OSSL_STORE_INFO_new_CERT(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(5, param_1);
   if (lVar1 != 0) {
      return lVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x2a5, "OSSL_STORE_INFO_new_CERT");
   ERR_set_error(0x2c, 0x8002c, 0);
   return 0;
}long OSSL_STORE_INFO_new_CRL(undefined8 param_1) {
   long lVar1;
   lVar1 = OSSL_STORE_INFO_new(6, param_1);
   if (lVar1 != 0) {
      return lVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x2ae, "OSSL_STORE_INFO_new_CRL");
   ERR_set_error(0x2c, 0x8002c, 0);
   return 0;
}undefined4 OSSL_STORE_INFO_get_type(undefined4 *param_1) {
   return *param_1;
}long OSSL_STORE_load(long *param_1) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   code *pcVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_38;
   long *local_30;
   long local_20;
   plVar1 = param_1 + 9;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 7 ) = 1;
   LAB_001014fe:iVar3 = OSSL_STORE_eof(param_1);
   if (iVar3 == 0) {
      if (param_1[8] != 0) {
         iVar3 = OPENSSL_sk_num();
         if (iVar3 == 0) {
            OPENSSL_sk_free();
            param_1[8] = 0;
            goto LAB_0010151b;
         }
         if (param_1[8] == 0) goto LAB_0010151b;
         lVar5 = OPENSSL_sk_shift();
         LAB_001014a2:pcVar4 = (code*)param_1[3];
         if (pcVar4 == (code*)0x0) goto LAB_001015a0;
         LAB_001014af:if (lVar5 != 0) goto code_r0x001014b8;
         lVar5 = 0;
         ossl_pw_clear_passphrase_cache(param_1 + 9);
         goto LAB_001015b8;
      }
      LAB_0010151b:lVar5 = param_1[2];
      if (param_1[1] != 0) {
         local_38 = 0;
         *(undefined4*)( (long)param_1 + 0x3c ) = 0;
         local_30 = param_1;
         iVar3 = ( **(code**)( param_1[1] + 0xa8 ) )(lVar5, &ossl_store_handle_load_result, &local_38, &ossl_pw_passphrase_callback_dec, plVar1);
         if (iVar3 == 0) {
            *(undefined4*)( (long)param_1 + 0x3c ) = 1;
            lVar5 = 0;
            goto LAB_001015b8;
         }
         lVar5 = local_38;
         if (param_1[1] != 0) goto LAB_001014a2;
         lVar5 = param_1[2];
      }
      lVar5 = ( **(code**)( *param_1 + 0x38 ) )(lVar5, param_1[10], param_1[0xb]);
      pcVar4 = (code*)param_1[3];
      if (pcVar4 != (code*)0x0) goto LAB_001014af;
      LAB_001015a0:ossl_pw_clear_passphrase_cache(plVar1);
      if (lVar5 != 0) goto LAB_001014d1;
   }
   lVar5 = 0;
   LAB_001015b8:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar5;
   code_r0x001014b8:lVar5 = ( *pcVar4 )(lVar5, param_1[4]);
   if (lVar5 != 0) {
      ossl_pw_clear_passphrase_cache(plVar1);
      LAB_001014d1:if (( ( (int)param_1[5] == 0 ) || ( uVar2 = OSSL_STORE_INFO_get_type(lVar5) ),uVar2 < 2 )) goto LAB_001015b8;
      OSSL_STORE_INFO_free(lVar5);
   }
   goto LAB_001014fe;
}undefined8 OSSL_STORE_INFO_get0_data(int param_1, int *param_2) {
   if (*param_2 != param_1) {
      return 0;
   }
   return *(undefined8*)( param_2 + 2 );
}undefined8 OSSL_STORE_INFO_get0_NAME(int *param_1) {
   if (*param_1 != 1) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}char *OSSL_STORE_INFO_get1_NAME(int *param_1) {
   char *pcVar1;
   if (*param_1 != 1) {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x2cc, "OSSL_STORE_INFO_get1_NAME");
      ERR_set_error(0x2c, 0x67, 0);
      return (char*)0x0;
   }
   pcVar1 = CRYPTO_strdup(*(char**)( param_1 + 2 ), "crypto/store/store_lib.c", 0x2cb);
   return pcVar1;
}undefined8 OSSL_STORE_INFO_get0_NAME_description(int *param_1) {
   if (*param_1 != 1) {
      return 0;
   }
   return *(undefined8*)( param_1 + 4 );
}char *OSSL_STORE_INFO_get1_NAME_description(int *param_1) {
   char *pcVar1;
   if (*param_1 == 1) {
      pcVar1 = *(char**)( param_1 + 4 );
      if (pcVar1 == (char*)0x0) {
         pcVar1 = "";
      }
      pcVar1 = CRYPTO_strdup(pcVar1, "crypto/store/store_lib.c", 0x2da);
      return pcVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/store/store_lib.c", 0x2db, "OSSL_STORE_INFO_get1_NAME_description");
   ERR_set_error(0x2c, 0x67, 0);
   return (char*)0x0;
}undefined8 OSSL_STORE_INFO_get0_PARAMS(int *param_1) {
   if (*param_1 != 2) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}undefined8 OSSL_STORE_INFO_get1_PARAMS(int *param_1) {
   int iVar1;
   if (*param_1 == 2) {
      iVar1 = EVP_PKEY_up_ref(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         return *(undefined8*)( param_1 + 2 );
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x2ed, "OSSL_STORE_INFO_get1_PARAMS");
      ERR_set_error(0x2c, 0x68, 0);
   }
   return 0;
}undefined8 OSSL_STORE_INFO_get0_PUBKEY(int *param_1) {
   if (*param_1 != 3) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}undefined8 OSSL_STORE_INFO_get1_PUBKEY(int *param_1) {
   int iVar1;
   if (*param_1 == 3) {
      iVar1 = EVP_PKEY_up_ref(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         return *(undefined8*)( param_1 + 2 );
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x2ff, "OSSL_STORE_INFO_get1_PUBKEY");
      ERR_set_error(0x2c, 0x7a, 0);
   }
   return 0;
}undefined8 OSSL_STORE_INFO_get0_PKEY(int *param_1) {
   if (*param_1 != 4) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}undefined8 OSSL_STORE_INFO_get1_PKEY(int *param_1) {
   int iVar1;
   if (*param_1 == 4) {
      iVar1 = EVP_PKEY_up_ref(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         return *(undefined8*)( param_1 + 2 );
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x311, "OSSL_STORE_INFO_get1_PKEY");
      ERR_set_error(0x2c, 0x66, 0);
   }
   return 0;
}undefined8 OSSL_STORE_INFO_get0_CERT(int *param_1) {
   if (*param_1 != 5) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}undefined8 OSSL_STORE_INFO_get1_CERT(int *param_1) {
   int iVar1;
   if (*param_1 == 5) {
      iVar1 = X509_up_ref(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         return *(undefined8*)( param_1 + 2 );
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x323, "OSSL_STORE_INFO_get1_CERT");
      ERR_set_error(0x2c, 100, 0);
   }
   return 0;
}undefined8 OSSL_STORE_INFO_get0_CRL(int *param_1) {
   if (*param_1 != 6) {
      return 0;
   }
   return *(undefined8*)( param_1 + 2 );
}undefined8 OSSL_STORE_INFO_get1_CRL(int *param_1) {
   int iVar1;
   if (*param_1 == 6) {
      iVar1 = X509_CRL_up_ref(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         return *(undefined8*)( param_1 + 2 );
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/store/store_lib.c", 0x335, "OSSL_STORE_INFO_get1_CRL");
      ERR_set_error(0x2c, 0x65, 0);
   }
   return 0;
}ulong OSSL_STORE_supports_search(long *param_1, int param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   int local_78[14];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[1] == 0) {
      LAB_00101ab0:if (*(code**)( *param_1 + 0x30 ) != (code*)0x0) {
         local_78[0] = param_2;
         uVar7 = ( **(code**)( *param_1 + 0x30 ) )(0, local_78);
         goto LAB_00101aca;
      }
   } else {
      uVar1 = OSSL_STORE_LOADER_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      if (*(code**)( param_1[1] + 0x98 ) != (code*)0x0) {
         uVar1 = ( **(code**)( param_1[1] + 0x98 ) )(uVar1);
         lVar2 = OSSL_PARAM_locate_const(uVar1, "subject");
         lVar3 = OSSL_PARAM_locate_const(uVar1, &_LC6);
         lVar4 = OSSL_PARAM_locate_const(uVar1, "serial");
         lVar5 = OSSL_PARAM_locate_const(uVar1, "fingerprint");
         lVar6 = OSSL_PARAM_locate_const(uVar1, "alias");
         if (param_2 == 3) {
            uVar7 = ( ulong )(lVar5 != 0);
         } else if (param_2 < 4) {
            if (param_2 == 1) {
               uVar7 = ( ulong )(lVar2 != 0);
            } else {
               uVar7 = 0;
               if (param_2 == 2) {
                  uVar7 = ( ulong )(( uint )(lVar4 != 0) & (uint)CONCAT71(( int7 )((ulong)param_4 >> 8), lVar3 != 0));
               }
            }
         } else {
            uVar7 = ( ulong )(lVar6 != 0);
            if (param_2 != 4) {
               uVar7 = 0;
            }
         }
         if (param_1[1] != 0) goto LAB_00101aca;
         goto LAB_00101ab0;
      }
   }
   uVar7 = 0;
   LAB_00101aca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
}void OSSL_STORE_SEARCH_by_name(undefined8 param_1) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)CRYPTO_zalloc(0x30, "crypto/store/store_lib.c", 0x390);
   if (puVar1 != (undefined4*)0x0) {
      *puVar1 = 1;
      *(undefined8*)( puVar1 + 2 ) = param_1;
   }
   return;
}void OSSL_STORE_SEARCH_by_issuer_serial(undefined8 param_1, undefined8 param_2) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)CRYPTO_zalloc(0x30, "crypto/store/store_lib.c", 0x39d);
   if (puVar1 != (undefined4*)0x0) {
      *puVar1 = 2;
      *(undefined8*)( puVar1 + 2 ) = param_1;
      *(undefined8*)( puVar1 + 4 ) = param_2;
   }
   return;
}undefined4 *OSSL_STORE_SEARCH_by_key_fingerprint(long param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined4 *ptr;
   undefined8 uVar2;
   ptr = (undefined4*)CRYPTO_zalloc(0x30, "crypto/store/store_lib.c", 0x3ac);
   if (ptr != (undefined4*)0x0) {
      iVar1 = EVP_MD_get_size(param_1);
      if (iVar1 < 1) {
         CRYPTO_free(ptr);
      } else {
         if (( param_1 == 0 ) || ( iVar1 == param_3 )) {
            *ptr = 3;
            *(long*)( ptr + 6 ) = param_1;
            *(undefined8*)( ptr + 8 ) = param_2;
            *(long*)( ptr + 10 ) = param_3;
            return ptr;
         }
         ERR_new();
         ERR_set_debug("crypto/store/store_lib.c", 0x3b9, "OSSL_STORE_SEARCH_by_key_fingerprint");
         uVar2 = EVP_MD_get0_name(param_1);
         ERR_set_error(0x2c, 0x79, "%s size is %d, fingerprint size is %zu", uVar2, iVar1, param_3);
         CRYPTO_free(ptr);
      }
   }
   return (undefined4*)0x0;
}undefined4 *OSSL_STORE_SEARCH_by_alias(char *param_1) {
   undefined4 *puVar1;
   size_t sVar2;
   puVar1 = (undefined4*)CRYPTO_zalloc(0x30, "crypto/store/store_lib.c", 0x3ca);
   if (puVar1 != (undefined4*)0x0) {
      *puVar1 = 4;
      *(char**)( puVar1 + 8 ) = param_1;
      sVar2 = strlen(param_1);
      *(size_t*)( puVar1 + 10 ) = sVar2;
   }
   return puVar1;
}void OSSL_STORE_SEARCH_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}undefined4 OSSL_STORE_SEARCH_get_type(undefined4 *param_1) {
   return *param_1;
}undefined8 OSSL_STORE_SEARCH_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}undefined8 OSSL_STORE_SEARCH_get0_serial(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 OSSL_STORE_SEARCH_get0_bytes(long param_1, undefined8 *param_2) {
   *param_2 = *(undefined8*)( param_1 + 0x28 );
   return *(undefined8*)( param_1 + 0x20 );
}undefined8 OSSL_STORE_SEARCH_get0_string(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}undefined8 OSSL_STORE_SEARCH_get0_digest(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}long *OSSL_STORE_attach(undefined8 param_1, undefined *param_2, undefined8 param_3, undefined8 param_4, long param_5, undefined8 param_6, undefined8 param_7, long param_8, long param_9) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *ptr;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   if (param_2 == (undefined*)0x0) {
      param_2 = &_LC2;
   }
   ERR_set_mark();
   lVar2 = ossl_store_get0_loader_int(param_2);
   if (lVar2 == 0) {
      lVar4 = OSSL_STORE_LOADER_fetch(param_3, param_2, param_4);
      if (lVar4 == 0) goto LAB_00101f32;
      uVar5 = OSSL_STORE_LOADER_get0_provider(lVar4);
      uVar5 = OSSL_PROVIDER_get0_provider_ctx(uVar5);
      lVar6 = ossl_core_bio_new_from_bio(param_1);
      if (( ( lVar6 == 0 ) || ( *(code**)( lVar4 + 0x90 ) == (code*)0x0 ) ) || ( lVar3 = lVar3 == 0 )) {
         OSSL_STORE_LOADER_free(lVar4);
         ossl_core_bio_free(lVar6);
         goto LAB_00101f32;
      }
      iVar1 = loader_set_params(lVar4, lVar3, param_7, param_4);
      if (iVar1 == 0) {
         ( **(code**)( lVar4 + 0xb8 ) )(lVar3);
         OSSL_STORE_LOADER_free(lVar4);
         ossl_core_bio_free(lVar6);
         goto LAB_00101e00;
      }
      ossl_core_bio_free(lVar6);
      lVar2 = lVar4;
   } else {
      lVar3 = ( **(code**)( lVar2 + 0x18 ) )(lVar2, param_1, param_3, param_4, param_5, param_6);
      if (lVar3 == 0) goto LAB_00101f32;
      LAB_00101e00:lVar4 = lVar2;
      lVar2 = 0;
   }
   ptr = (long*)CRYPTO_zalloc(0x78, "crypto/store/store_lib.c", 0x42f);
   if (ptr != (long*)0x0) {
      if (( param_5 != 0 ) && ( iVar1 = ossl_pw_set_ui_method(ptr + 9, param_5, param_6) ),iVar1 == 0) {
         ERR_clear_last_mark();
         CRYPTO_free(ptr);
         return (long*)0x0;
      }
      ptr[1] = lVar2;
      *ptr = lVar4;
      ptr[3] = param_8;
      ptr[2] = lVar3;
      ptr[4] = param_9;
      ERR_pop_to_mark();
      return ptr;
   }
   LAB_00101f32:ERR_clear_last_mark();
   return (long*)0x0;
}
