undefined8 get_raw_key_details(undefined8 param_1, long *param_2) {
   undefined8 uVar1;
   long lVar2;
   if ((int)param_2[2] == 1) {
      lVar2 = OSSL_PARAM_locate_const(param_1, &_LC0);
   } else {
      if ((int)param_2[2] != 2) {
         return 0;
      }
      lVar2 = OSSL_PARAM_locate_const(param_1, &_LC1);
   }
   if (lVar2 == 0) {
      return 0;
   }
   uVar1 = 0;
   if (*param_2 != 0) {
      uVar1 = *(undefined8*)param_2[1];
   }
   uVar1 = OSSL_PARAM_get_octet_string(lVar2, *param_2, uVar1);
   return uVar1;
}void mdname2nid(char *param_1, int *param_2) {
   int iVar1;
   if (*param_2 != 0) {
      return;
   }
   iVar1 = OBJ_sn2nid(param_1);
   *param_2 = iVar1;
   if (iVar1 != 0) {
      return;
   }
   iVar1 = OBJ_ln2nid(param_1);
   *param_2 = iVar1;
   return;
}void find_ameth(char *param_1, long *param_2) {
   size_t sVar1;
   EVP_PKEY_ASN1_METHOD *pEVar2;
   long in_FS_OFFSET;
   ENGINE *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ERR_set_mark();
   sVar1 = strlen(param_1);
   local_28 = (ENGINE*)0x0;
   pEVar2 = EVP_PKEY_asn1_find_str(&local_28, param_1, (int)sVar1);
   ENGINE_finish(local_28);
   if (pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x650, "pkey_set_type");
      ERR_set_error(6, 0x9c, 0);
   } else if (*param_2 == 0) {
      *param_2 = (long)param_1;
   } else if (param_2[1] == 0) {
      param_2[1] = (long)param_1;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ERR_pop_to_mark();
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong EVP_PKEY_get_bits(long param_1) {
   code *pcVar1;
   ulong uVar2;
   if (param_1 != 0) {
      uVar2 = ( ulong ) * (uint*)( param_1 + 0x88 );
      if (( *(long*)( param_1 + 8 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x60 ) ),pcVar1 != (code*)0x0) {
         uVar2 = ( *pcVar1 )();
      }
      if (0 < (int)uVar2) {
         return uVar2;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x47, "EVP_PKEY_get_bits");
   ERR_set_error(6, 0xa6, 0);
   return 0;
}ulong EVP_PKEY_get_security_bits(long param_1) {
   code *pcVar1;
   ulong uVar2;
   if (param_1 != 0) {
      uVar2 = ( ulong ) * (uint*)( param_1 + 0x8c );
      if (( *(long*)( param_1 + 8 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x68 ) ),pcVar1 != (code*)0x0) {
         uVar2 = ( *pcVar1 )();
      }
      if (0 < (int)uVar2) {
         return uVar2;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x57, "EVP_PKEY_get_security_bits");
   ERR_set_error(6, 0xa8, 0);
   return 0;
}int EVP_PKEY_save_parameters(EVP_PKEY *pkey, int mode) {
   int iVar1;
   if (( ( pkey->type == 0x74 ) || ( iVar1 = 0 ),pkey->type == 0x198 )) &&( iVar1 = -1 < mode ) * (int*)&pkey[1].ameth = mode;
   return iVar1;
}return iVar1;}void EVP_PKEY_set_ex_data(long param_1, int param_2, void *param_3) {
   CRYPTO_set_ex_data((CRYPTO_EX_DATA*)( param_1 + 0x50 ), param_2, param_3);
   return;
}void EVP_PKEY_get_ex_data(long param_1, int param_2) {
   CRYPTO_get_ex_data((CRYPTO_EX_DATA*)( param_1 + 0x50 ), param_2);
   return;
}int EVP_PKEY_missing_parameters(EVP_PKEY *pkey) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   if (pkey != (EVP_PKEY*)0x0) {
      if (*(long*)&pkey[1].save_parameters != 0) {
         iVar1 = evp_keymgmt_util_has(pkey, 4);
         return (int)( iVar1 == 0 );
      }
      if (( *(long*)&pkey->references != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)&pkey->references + 0x80 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
         for (int i_1470 = 0; i_1470 < 2; i_1470++) {
            /* WARNING: Could not recover jumptable at 0x001002e5. Too many branches */
         }
         iVar1 = ( *UNRECOVERED_JUMPTABLE )();
         return iVar1;
      }
   }
   return 0;
}undefined8 EVP_PKEY_get_raw_private_key(long param_1, undefined8 ***param_2, undefined8 param_3) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 **local_30;
   undefined8 **local_28;
   undefined8 local_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_2;
   if (*(long*)( param_1 + 0x60 ) == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         ERR_new();
         uVar3 = 0x25b;
      } else {
         pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x108 );
         if (pcVar1 != (code*)0x0) {
            iVar2 = ( *pcVar1 )();
            uVar3 = 1;
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/p_lib.c", 0x265, "EVP_PKEY_get_raw_private_key");
               ERR_set_error(6, 0xb6, 0);
               uVar3 = 0;
            }
            goto LAB_0010037b;
         }
         ERR_new();
         uVar3 = 0x260;
      }
      ERR_set_debug("crypto/evp/p_lib.c", uVar3, "EVP_PKEY_get_raw_private_key");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0;
   } else {
      local_28 = param_2;
      if (param_2 != (undefined8***)0x0) {
         local_28 = &local_30;
      }
      local_18 = 1;
      local_20 = param_3;
      uVar3 = evp_keymgmt_util_export(param_1, 1, 0x100000, &local_28);
   }
   LAB_0010037b:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_get_raw_public_key(long param_1, undefined8 ***param_2, undefined8 param_3) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 **local_30;
   undefined8 **local_28;
   undefined8 local_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_2;
   if (*(long*)( param_1 + 0x60 ) == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         ERR_new();
         uVar3 = 0x27b;
      } else {
         pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x110 );
         if (pcVar1 != (code*)0x0) {
            iVar2 = ( *pcVar1 )();
            uVar3 = 1;
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/p_lib.c", 0x285, "EVP_PKEY_get_raw_public_key");
               ERR_set_error(6, 0xb6, 0);
               uVar3 = 0;
            }
            goto LAB_001004ab;
         }
         ERR_new();
         uVar3 = 0x280;
      }
      ERR_set_debug("crypto/evp/p_lib.c", uVar3, "EVP_PKEY_get_raw_public_key");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0;
   } else {
      local_28 = param_2;
      if (param_2 != (undefined8***)0x0) {
         local_28 = &local_30;
      }
      local_18 = 2;
      local_20 = param_3;
      uVar3 = evp_keymgmt_util_export(param_1, 2, 0x100000, &local_28);
   }
   LAB_001004ab:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_new_CMAC_key(ENGINE *param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   int iVar1;
   long lVar2;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 uStack_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_90[10];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (ENGINE*)0x0) {
      param_1 = (ENGINE*)ENGINE_get_id(param_1);
   }
   local_110 = 0;
   if (param_4 != 0) {
      lVar2 = EVP_CIPHER_get0_name(param_4);
      if (lVar2 != 0) {
         ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(0, &_LC3, 0);
         if (ctx != (EVP_PKEY_CTX*)0x0) {
            iVar1 = EVP_PKEY_fromdata_init(ctx);
            if (iVar1 < 1) {
               ERR_new();
               uVar3 = 0x2a7;
            } else {
               puVar4 = &local_b8;
               OSSL_PARAM_construct_octet_string(&local_148, &_LC0, param_2, param_3);
               local_e8 = local_128;
               local_108 = local_148;
               uStack_100 = uStack_140;
               local_f8 = local_138;
               uStack_f0 = uStack_130;
               OSSL_PARAM_construct_utf8_string(&local_148, "cipher", lVar2, 0);
               local_e0 = local_148;
               uStack_d8 = uStack_140;
               local_c0 = local_128;
               local_d0 = local_138;
               uStack_c8 = uStack_130;
               if (param_1 != (ENGINE*)0x0) {
                  OSSL_PARAM_construct_utf8_string(&local_148, "engine", param_1, 0);
                  puVar4 = local_90;
                  local_98 = local_128;
                  local_b8 = local_148;
                  uStack_b0 = uStack_140;
                  local_a8 = local_138;
                  uStack_a0 = uStack_130;
               }
               OSSL_PARAM_construct_end(&local_148);
               *puVar4 = local_148;
               puVar4[1] = uStack_140;
               puVar4[2] = local_138;
               puVar4[3] = uStack_130;
               puVar4[4] = local_128;
               iVar1 = EVP_PKEY_fromdata(ctx, &local_110, 0x87, &local_108);
               if (0 < iVar1) goto LAB_00100718;
               ERR_new();
               uVar3 = 0x2ba;
            }
            ERR_set_debug("crypto/evp/p_lib.c", uVar3, "new_cmac_key_int");
            ERR_set_error(6, 0xb4, 0);
         }
         LAB_00100718:EVP_PKEY_CTX_free(ctx);
         uVar3 = local_110;
         goto LAB_00100725;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x29e, "new_cmac_key_int");
   ERR_set_error(6, 0xb4, 0);
   uVar3 = 0;
   LAB_00100725:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_set1_engine(int *param_1, ENGINE *param_2) {
   int iVar1;
   EVP_PKEY_METHOD *pEVar2;
   if (param_2 != (ENGINE*)0x0) {
      iVar1 = ENGINE_init(param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x2dd, "EVP_PKEY_set1_engine");
         ERR_set_error(6, 0x80026, 0);
         return 0;
      }
      pEVar2 = ENGINE_get_pkey_meth(param_2, *param_1);
      if (pEVar2 == (EVP_PKEY_METHOD*)0x0) {
         ENGINE_finish(param_2);
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x2e2, "EVP_PKEY_set1_engine");
         ERR_set_error(6, 0x9c, 0);
         return 0;
      }
   }
   ENGINE_finish(*(ENGINE**)( param_1 + 6 ));
   *(ENGINE**)( param_1 + 6 ) = param_2;
   return 1;
}undefined8 EVP_PKEY_get0_engine(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}void *EVP_PKEY_get0(EVP_PKEY *pkey) {
   if (( pkey != (EVP_PKEY*)0x0 ) && ( *(long*)&pkey[1].save_parameters == 0 )) {
      return (pkey->pkey).ptr;
   }
   return (void*)0x0;
}int EVP_PKEY_type(int type) {
   EVP_PKEY_ASN1_METHOD *pEVar1;
   int iVar2;
   long in_FS_OFFSET;
   ENGINE *local_18;
   long local_10;
   iVar2 = 0;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar1 = EVP_PKEY_asn1_find(&local_18, type);
   if (pEVar1 != (EVP_PKEY_ASN1_METHOD*)0x0) {
      iVar2 = *(int*)pEVar1;
   }
   ENGINE_finish(local_18);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 EVP_PKEY_get_id(undefined4 *param_1) {
   return *param_1;
}void EVP_PKEY_get_base_id(int *param_1) {
   EVP_PKEY_type(*param_1);
   return;
}int evp_pkey_name2type(char *param_1) {
   int iVar1;
   long lVar2;
   undefined **ppuVar3;
   ppuVar3 = &PTR_DAT_001057a8;
   lVar2 = 0;
   do {
      iVar1 = OPENSSL_strcasecmp(param_1, *ppuVar3);
      if (iVar1 == 0) {
         return ( &standard_name2type )[lVar2 * 4];
      }
      lVar2 = lVar2 + 1;
      ppuVar3 = ppuVar3 + 2;
   } while ( lVar2 != 0xc );
   iVar1 = OBJ_sn2nid(param_1);
   iVar1 = EVP_PKEY_type(iVar1);
   if (iVar1 != 0) {
      return iVar1;
   }
   iVar1 = OBJ_ln2nid(param_1);
   iVar1 = EVP_PKEY_type(iVar1);
   return iVar1;
}char *evp_pkey_type2name(int param_1) {
   long lVar1;
   char *pcVar2;
   if (param_1 == 6) {
      lVar1 = 0;
   } else if (param_1 == 0x390) {
      lVar1 = 1;
   } else if (param_1 == 0x198) {
      lVar1 = 2;
   } else if (param_1 == 0x43f) {
      lVar1 = 3;
   } else if (param_1 == 0x440) {
      lVar1 = 4;
   } else if (param_1 == 0x40a) {
      lVar1 = 5;
   } else if (param_1 == 0x40b) {
      lVar1 = 6;
   } else if (param_1 == 0x494) {
      lVar1 = 7;
   } else if (param_1 == 0x1c) {
      lVar1 = 8;
   } else if (param_1 == 0x398) {
      lVar1 = 9;
   } else {
      lVar1 = 0xb;
      if (param_1 != 0x74) {
         pcVar2 = OBJ_nid2sn(param_1);
         return pcVar2;
      }
   }
   return ( &PTR_DAT_001057a8 )[lVar1 * 2];
}ulong EVP_PKEY_is_a(int *param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x18 ) != 0) {
      uVar3 = EVP_KEYMGMT_is_a(*(long*)( param_1 + 0x18 ));
      return uVar3;
   }
   iVar1 = *param_1;
   iVar2 = evp_pkey_name2type(param_2);
   return ( ulong )(iVar1 == iVar2);
}ulong EVP_PKEY_type_names_do_all(uint *param_1, code *param_2, undefined8 param_3) {
   long lVar1;
   int n;
   ulong uVar2;
   char *pcVar3;
   lVar1 = *(long*)( param_1 + 0x18 );
   if (*param_1 == 0) {
      if (lVar1 == 0) {
         return ( ulong ) * param_1;
      }
   } else if (lVar1 == 0) {
      n = EVP_PKEY_get_id();
      pcVar3 = OBJ_nid2sn(n);
      ( *param_2 )(pcVar3, param_3);
      return 1;
   }
   uVar2 = EVP_KEYMGMT_names_do_all(lVar1, param_2);
   return uVar2;
}ulong EVP_PKEY_can_sign(long param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   ulong uVar6;
   if (*(long*)( param_1 + 0x60 ) == 0) {
      iVar2 = EVP_PKEY_get_base_id(param_1);
      if (iVar2 == 0x198) {
         uVar6 = EC_KEY_can_sign(*(undefined8*)( param_1 + 0x20 ));
         return uVar6;
      }
      if (iVar2 < 0x199) {
         if (iVar2 == 6) {
            return 1;
         }
         uVar6 = ( ulong )(iVar2 == 0x74);
      } else {
         if (iVar2 == 0x390) {
            return 1;
         }
         uVar6 = ( ulong )(iVar2 - 0x43fU < 2);
      }
   } else {
      uVar3 = EVP_KEYMGMT_get0_provider();
      uVar3 = ossl_provider_libctx(uVar3);
      pcVar1 = *(code**)( *(long*)( param_1 + 0x60 ) + 0xa8 );
      if (pcVar1 == (code*)0x0) {
         uVar4 = EVP_KEYMGMT_get0_name();
      } else {
         uVar4 = ( *pcVar1 )(0xc);
      }
      lVar5 = EVP_SIGNATURE_fetch(uVar3, uVar4, 0);
      uVar6 = 0;
      if (lVar5 != 0) {
         EVP_SIGNATURE_free();
         return 1;
      }
   }
   return uVar6;
}int EVP_PKEY_print_public(BIO *out, EVP_PKEY *pkey, int indent, ASN1_PCTX *pctx) {
   bool bVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   long lVar5;
   BIO_METHOD *type;
   BIO *b;
   long larg;
   undefined8 in_R9;
   long lVar6;
   code *pcVar7;
   pcVar7 = (code*)0x0;
   if (*(long*)&pkey->references != 0) {
      pcVar7 = *(code**)( *(long*)&pkey->references + 0x38 );
   }
   lVar6 = (long)indent;
   larg = 0;
   bVar1 = false;
   if (0 < lVar6) {
      lVar5 = BIO_ctrl(out, 0x51, 0, (void*)0x0);
      larg = 0;
      if (-1 < lVar5) {
         larg = lVar5;
      }
      lVar5 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
      if (lVar5 < 1) {
         type = (BIO_METHOD*)BIO_f_prefix();
         b = BIO_new(type);
         if (b == (BIO*)0x0) {
            return 0;
         }
         out = BIO_push(b, out);
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            BIO_pop(out);
            BIO_free(out);
            return 0;
         }
         bVar1 = true;
      } else {
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         bVar1 = false;
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            return 0;
         }
      }
   }
   uVar4 = OSSL_ENCODER_CTX_new_for_pkey(pkey, 0x86, &_LC6, 0, 0, in_R9, pctx);
   iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
   if (iVar2 == 0) {
      OSSL_ENCODER_CTX_free();
   } else {
      uVar3 = OSSL_ENCODER_to_bio();
      OSSL_ENCODER_CTX_free(uVar4);
      if (uVar3 != 0xfffffffe) goto LAB_00100ca1;
   }
   if (pcVar7 == (code*)0x0) {
      uVar3 = BIO_indent(out, 0, 0x80);
      if (uVar3 != 0) {
         OBJ_nid2ln(pkey->type);
         iVar2 = BIO_printf(out, "%s algorithm \"%s\" unsupported\n", "Public Key");
         uVar3 = ( uint )(0 < iVar2);
      }
   } else {
      uVar3 = ( *pcVar7 )(out, pkey, 0);
   }
   LAB_00100ca1:BIO_ctrl(out, 0x50, larg, (void*)0x0);
   if (bVar1) {
      BIO_pop(out);
      BIO_free(out);
   }
   return uVar3;
}int EVP_PKEY_print_private(BIO *out, EVP_PKEY *pkey, int indent, ASN1_PCTX *pctx) {
   bool bVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   long lVar5;
   BIO_METHOD *type;
   BIO *b;
   long larg;
   undefined8 in_R9;
   long lVar6;
   code *pcVar7;
   pcVar7 = (code*)0x0;
   if (*(long*)&pkey->references != 0) {
      pcVar7 = *(code**)( *(long*)&pkey->references + 0x50 );
   }
   lVar6 = (long)indent;
   larg = 0;
   bVar1 = false;
   if (0 < lVar6) {
      lVar5 = BIO_ctrl(out, 0x51, 0, (void*)0x0);
      larg = 0;
      if (-1 < lVar5) {
         larg = lVar5;
      }
      lVar5 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
      if (lVar5 < 1) {
         type = (BIO_METHOD*)BIO_f_prefix();
         b = BIO_new(type);
         if (b == (BIO*)0x0) {
            return 0;
         }
         out = BIO_push(b, out);
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            BIO_pop(out);
            BIO_free(out);
            return 0;
         }
         bVar1 = true;
      } else {
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         bVar1 = false;
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            return 0;
         }
      }
   }
   uVar4 = OSSL_ENCODER_CTX_new_for_pkey(pkey, 0x85, &_LC6, 0, 0, in_R9, pctx);
   iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
   if (iVar2 == 0) {
      OSSL_ENCODER_CTX_free();
   } else {
      uVar3 = OSSL_ENCODER_to_bio();
      OSSL_ENCODER_CTX_free(uVar4);
      if (uVar3 != 0xfffffffe) goto LAB_00100ee1;
   }
   if (pcVar7 == (code*)0x0) {
      uVar3 = BIO_indent(out, 0, 0x80);
      if (uVar3 != 0) {
         OBJ_nid2ln(pkey->type);
         iVar2 = BIO_printf(out, "%s algorithm \"%s\" unsupported\n", "Public Key");
         uVar3 = ( uint )(0 < iVar2);
      }
   } else {
      uVar3 = ( *pcVar7 )(out, pkey, 0);
   }
   LAB_00100ee1:BIO_ctrl(out, 0x50, larg, (void*)0x0);
   if (bVar1) {
      BIO_pop(out);
      BIO_free(out);
   }
   return uVar3;
}int EVP_PKEY_print_params(BIO *out, EVP_PKEY *pkey, int indent, ASN1_PCTX *pctx) {
   bool bVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   long lVar5;
   BIO_METHOD *type;
   BIO *b;
   long larg;
   undefined8 in_R9;
   long lVar6;
   code *pcVar7;
   pcVar7 = (code*)0x0;
   if (*(long*)&pkey->references != 0) {
      pcVar7 = *(code**)( *(long*)&pkey->references + 0x98 );
   }
   lVar6 = (long)indent;
   larg = 0;
   bVar1 = false;
   if (0 < lVar6) {
      lVar5 = BIO_ctrl(out, 0x51, 0, (void*)0x0);
      larg = 0;
      if (-1 < lVar5) {
         larg = lVar5;
      }
      lVar5 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
      if (lVar5 < 1) {
         type = (BIO_METHOD*)BIO_f_prefix();
         b = BIO_new(type);
         if (b == (BIO*)0x0) {
            return 0;
         }
         out = BIO_push(b, out);
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            BIO_pop(out);
            BIO_free(out);
            return 0;
         }
         bVar1 = true;
      } else {
         lVar6 = BIO_ctrl(out, 0x50, lVar6, (void*)0x0);
         bVar1 = false;
         if (lVar6 < 1) {
            BIO_ctrl(out, 0x50, larg, (void*)0x0);
            return 0;
         }
      }
   }
   uVar4 = OSSL_ENCODER_CTX_new_for_pkey(pkey, 0x84, &_LC6, 0, 0, in_R9, pctx);
   iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
   if (iVar2 == 0) {
      OSSL_ENCODER_CTX_free();
   } else {
      uVar3 = OSSL_ENCODER_to_bio();
      OSSL_ENCODER_CTX_free(uVar4);
      if (uVar3 != 0xfffffffe) goto LAB_00101124;
   }
   if (pcVar7 == (code*)0x0) {
      uVar3 = BIO_indent(out, 0, 0x80);
      if (uVar3 != 0) {
         OBJ_nid2ln(pkey->type);
         iVar2 = BIO_printf(out, "%s algorithm \"%s\" unsupported\n", "Public Key");
         uVar3 = ( uint )(0 < iVar2);
      }
   } else {
      uVar3 = ( *pcVar7 )(out, pkey, 0);
   }
   LAB_00101124:BIO_ctrl(out, 0x50, larg, (void*)0x0);
   if (bVar1) {
      BIO_pop(out);
      BIO_free(out);
   }
   return uVar3;
}int EVP_PKEY_print_public_fp(FILE *param_1, EVP_PKEY *param_2, int param_3, ASN1_PCTX *param_4) {
   int iVar1;
   BIO *out;
   iVar1 = 0;
   out = BIO_new_fp(param_1, 0);
   if (out != (BIO*)0x0) {
      iVar1 = EVP_PKEY_print_public(out, param_2, param_3, param_4);
      BIO_free(out);
   }
   return iVar1;
}int EVP_PKEY_print_private_fp(FILE *param_1, EVP_PKEY *param_2, int param_3, ASN1_PCTX *param_4) {
   int iVar1;
   BIO *out;
   iVar1 = 0;
   out = BIO_new_fp(param_1, 0);
   if (out != (BIO*)0x0) {
      iVar1 = EVP_PKEY_print_private(out, param_2, param_3, param_4);
      BIO_free(out);
   }
   return iVar1;
}int EVP_PKEY_print_params_fp(FILE *param_1, EVP_PKEY *param_2, int param_3, ASN1_PCTX *param_4) {
   int iVar1;
   BIO *out;
   iVar1 = 0;
   out = BIO_new_fp(param_1, 0);
   if (out != (BIO*)0x0) {
      iVar1 = EVP_PKEY_print_params(out, param_2, param_3, param_4);
      BIO_free(out);
   }
   return iVar1;
}ulong EVP_PKEY_get_default_digest_name(EVP_PKEY *param_1, undefined8 param_2, undefined8 param_3) {
   uint uVar1;
   char *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)&param_1->references == 0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar3 = evp_keymgmt_util_get_deflt_digest_name(*(undefined8*)&param_1[1].save_parameters, param_1[1].attributes, param_2, param_3);
         return uVar3;
      }
   } else {
      local_24 = 0;
      uVar1 = EVP_PKEY_get_default_digest_nid(param_1, &local_24);
      if (0 < (int)uVar1) {
         pcVar2 = OBJ_nid2sn(local_24);
         OPENSSL_strlcpy(param_2, pcVar2, param_3);
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (ulong)uVar1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey, int *pnid) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   int local_8c;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pkey == (EVP_PKEY*)0x0) {
      LAB_001014e0:iVar1 = 0;
   } else {
      if (*(long*)&pkey->references == 0) {
         if (*(long*)&pkey[1].save_parameters != 0) {
            local_88 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
            iVar1 = EVP_PKEY_get_default_digest_name(pkey, local_88, 0x50);
            if (iVar1 < 1) goto LAB_001014e2;
            uVar3 = ossl_provider_libctx(*(undefined8*)( *(long*)&pkey[1].save_parameters + 0x20 ));
            local_8c = 0;
            ERR_set_mark();
            uVar4 = EVP_MD_fetch(uVar3, local_88, 0);
            ERR_pop_to_mark();
            uVar3 = ossl_namemap_stored(uVar3);
            EVP_MD_free(uVar4);
            iVar2 = ossl_namemap_name2num(uVar3, local_88);
            if (iVar2 != 0) {
               iVar2 = ossl_namemap_doall_names(uVar3, iVar2, mdname2nid, &local_8c);
               if (iVar2 != 0) {
                  *pnid = local_8c;
                  goto LAB_001014e2;
               }
            }
         }
         goto LAB_001014e0;
      }
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)&pkey->references + 0xb0 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1471 = 0; i_1471 < 2; i_1471++) {
               /* WARNING: Could not recover jumptable at 0x001014db. Too many branches */
            }
            iVar1 = ( *UNRECOVERED_JUMPTABLE )(pkey, 3, 0, pnid);
            return iVar1;
         }
         goto LAB_001015d9;
      }
      iVar1 = -2;
   }
   LAB_001014e2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   LAB_001015d9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined4 EVP_PKEY_digestsign_supports_digest(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined4 uVar1;
   long lVar2;
   lVar2 = EVP_MD_CTX_new();
   if (lVar2 == 0) {
      uVar1 = 0xffffffff;
   } else {
      ERR_set_mark();
      uVar1 = EVP_DigestSignInit_ex(lVar2, 0, param_3, param_2, param_4, param_1, 0);
      ERR_pop_to_mark();
      EVP_MD_CTX_free(lVar2);
   }
   return uVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_PKEY *EVP_PKEY_new(void) {
   int iVar1;
   EVP_PKEY *obj;
   long lVar2;
   undefined8 uVar3;
   obj = (EVP_PKEY*)CRYPTO_zalloc(0x98, "crypto/evp/p_lib.c", 0x5e1);
   if (obj != (EVP_PKEY*)0x0) {
      obj->type = 0;
      obj->save_type = 0;
      LOCK();
      *(undefined4*)&obj->attributes = 1;
      UNLOCK();
      lVar2 = CRYPTO_THREAD_lock_new();
      obj[1].type = (int)lVar2;
      obj[1].save_type = (int)( (ulong)lVar2 >> 0x20 );
      if (lVar2 == 0) {
         ERR_new();
         uVar3 = 0x5ee;
      } else {
         *(undefined4*)&obj[1].ameth = 1;
         iVar1 = CRYPTO_new_ex_data(0x11, obj, (CRYPTO_EX_DATA*)&obj[1].engine);
         if (iVar1 != 0) {
            return obj;
         }
         ERR_new();
         uVar3 = 0x5f5;
      }
      ERR_set_debug("crypto/evp/p_lib.c", uVar3, "EVP_PKEY_new");
      ERR_set_error(6, 0x8000f, 0);
      uVar3._0_4_ = obj[1].type;
      uVar3._4_4_ = obj[1].save_type;
      CRYPTO_THREAD_lock_free(uVar3);
      CRYPTO_free(obj);
   }
   return (EVP_PKEY*)0x0;
}bool EVP_PKEY_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0x30 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}void evp_pkey_free_legacy(int *param_1) {
   undefined8 uVar1;
   EVP_PKEY_ASN1_METHOD *pEVar2;
   ENGINE *e;
   long in_FS_OFFSET;
   ENGINE *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar2 = *(EVP_PKEY_ASN1_METHOD**)( param_1 + 2 );
   local_18 = (ENGINE*)0x0;
   if (( pEVar2 != (EVP_PKEY_ASN1_METHOD*)0x0 ) || ( ( e = *(ENGINE**)( param_1 + 10 ) * (ENGINE**)( param_1 + 10 ) != (ENGINE*)0x0 && ( pEVar2= EVP_PKEY_asn1_find(&local_18,*param_1),e = local_18,pEVar2 != (EVP_PKEY_ASN1_METHOD*)0x0 ) ) )) {
      if (*(long*)( param_1 + 10 ) != 0) {
         uVar1 = *(undefined8*)( param_1 + 10 );
         param_1[10] = 0;
         param_1[0xb] = 0;
         *(undefined8*)( param_1 + 8 ) = uVar1;
      }
      if (*(code**)( pEVar2 + 0xa8 ) != (code*)0x0) {
         ( **(code**)( pEVar2 + 0xa8 ) )(param_1);
      }
      param_1[8] = 0;
      param_1[9] = 0;
      e = local_18;
   }
   ENGINE_finish(e);
   ENGINE_finish(*(ENGINE**)( param_1 + 4 ));
   param_1[4] = 0;
   param_1[5] = 0;
   ENGINE_finish(*(ENGINE**)( param_1 + 6 ));
   param_1[6] = 0;
   param_1[7] = 0;
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}undefined8 pkey_set_type(int *param_1, ENGINE *param_2, int param_3, char *param_4, int param_5, long param_6) {
   int iVar1;
   EVP_PKEY_ASN1_METHOD *pEVar2;
   undefined8 uVar3;
   bool bVar4;
   bool bVar5;
   ENGINE **local_48;
   ENGINE *local_40[2];
   local_40[0] = param_2;
   if (param_2 == (ENGINE*)0x0) {
      bVar5 = param_6 == 0;
      local_48 = local_40;
      bVar4 = param_3 == 0 || bVar5;
      if (param_3 != 0 && !bVar5) goto LAB_00101851;
   } else {
      if (param_6 != 0) {
         LAB_00101851:ERR_new();
         uVar3 = 0x61d;
         goto LAB_00101862;
      }
      local_48 = (ENGINE**)0x0;
      bVar4 = false;
      bVar5 = true;
   }
   if (param_1 != (int*)0x0) {
      if (( *(long*)( param_1 + 8 ) == 0 ) && ( *(long*)( param_1 + 0x1a ) == 0 )) {
         if (( ( *param_1 != 0 ) && ( param_1[1] == param_3 ) ) && ( *(long*)( param_1 + 2 ) != 0 )) {
            return 1;
         }
      } else {
         evp_keymgmt_util_clear_operation_cache(param_1);
         evp_pkey_free_legacy(param_1);
         if (*(long*)( param_1 + 0x18 ) != 0) {
            evp_keymgmt_freedata(*(long*)( param_1 + 0x18 ), *(undefined8*)( param_1 + 0x1a ));
            EVP_KEYMGMT_free(*(undefined8*)( param_1 + 0x18 ));
            *(undefined1(*) [16])( param_1 + 0x18 ) = (undefined1[16])0x0;
         }
         *param_1 = 0;
      }
      ENGINE_finish(*(ENGINE**)( param_1 + 4 ));
      param_1[4] = 0;
      param_1[5] = 0;
      ENGINE_finish(*(ENGINE**)( param_1 + 6 ));
      param_1[6] = 0;
      param_1[7] = 0;
   }
   if (param_4 == (char*)0x0) {
      pEVar2 = (EVP_PKEY_ASN1_METHOD*)0x0;
      if (param_3 != 0) {
         pEVar2 = EVP_PKEY_asn1_find(local_48, param_3);
         bVar5 = (bool)( bVar5 & pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0 );
      }
   } else {
      pEVar2 = EVP_PKEY_asn1_find_str(local_48, param_4, param_5);
      bVar5 = (bool)( bVar5 & pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0 );
   }
   if (( param_1 == (int*)0x0 ) && ( bVar4 )) {
      ENGINE_finish(local_40[0]);
      if (!bVar5) {
         return 1;
      }
   } else if (!bVar5) {
      if (param_1 == (int*)0x0) {
         return 1;
      }
      if (param_6 == 0) {
         param_1[0x18] = 0;
         param_1[0x19] = 0;
         *(EVP_PKEY_ASN1_METHOD**)( param_1 + 2 ) = pEVar2;
         *(ulong*)param_1 = CONCAT44(param_3, param_3);
      } else {
         iVar1 = EVP_KEYMGMT_up_ref(param_6);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x656;
            LAB_00101862:ERR_set_debug("crypto/evp/p_lib.c", uVar3, "pkey_set_type");
            ERR_set_error(6, 0xc0103, 0);
            return 0;
         }
         *(long*)( param_1 + 0x18 ) = param_6;
         *(ulong*)param_1 = CONCAT44(param_3, param_3);
      }
      if (pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0) {
         *param_1 = -1;
      } else if (param_3 == 0) {
         *param_1 = *(int*)pEVar2;
      }
      if (( ( local_48 == (ENGINE**)0x0 ) && ( local_40[0] != (ENGINE*)0x0 ) ) && ( iVar1 = iVar1 == 0 )) {
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x678, "pkey_set_type");
         ERR_set_error(6, 0x86, 0);
         return 0;
      }
      *(ENGINE**)( param_1 + 4 ) = local_40[0];
      return 1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x650, "pkey_set_type");
   ERR_set_error(6, 0x9c, 0);
   return 0;
}undefined8 EVP_PKEY_set_type_by_keymgmt(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1[16])0x0;
   iVar1 = EVP_KEYMGMT_names_do_all(param_2, find_ameth, local_38);
   if (( iVar1 == 0 ) || ( local_38._8_8_ != 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x6a7, "EVP_PKEY_set_type_by_keymgmt");
      ERR_set_error(6, 0xc0103, 0);
      uVar3 = 0;
   } else {
      uVar3 = local_38._0_8_;
      uVar4 = 0xffffffff;
      if ((char*)local_38._0_8_ != (char*)0x0) {
         sVar2 = strlen((char*)local_38._0_8_);
         uVar4 = sVar2 & 0xffffffff;
      }
      uVar3 = pkey_set_type(param_1, 0, 0, uVar3, uVar4, param_2);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_PKEY_set_type_str(EVP_PKEY *pkey, char *str, int len) {
   int iVar1;
   EVP_PKEY_ASN1_METHOD *pEVar2;
   long in_FS_OFFSET;
   ENGINE *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (ENGINE*)0x0;
   if (pkey == (EVP_PKEY*)0x0) {
      if (str == (char*)0x0) {
         ENGINE_finish((ENGINE*)0x0);
      } else {
         pEVar2 = EVP_PKEY_asn1_find_str(&local_28, str, len);
         ENGINE_finish(local_28);
         if (pEVar2 != (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00101d0c;
      }
      LAB_00101d6c:ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x650, "pkey_set_type");
      ERR_set_error(6, 0x9c, 0);
      iVar1 = 0;
   } else {
      if (( (pkey->pkey).ptr == (char*)0x0 ) && ( pkey[1].attributes == (stack_st_X509_ATTRIBUTE*)0x0 )) {
         if (( ( pkey->type == 0 ) || ( pkey->save_type != 0 ) ) || ( *(long*)&pkey->references == 0 )) goto LAB_00101caa;
      } else {
         evp_keymgmt_util_clear_operation_cache(pkey);
         evp_pkey_free_legacy(pkey);
         if (*(long*)&pkey[1].save_parameters != 0) {
            evp_keymgmt_freedata(*(long*)&pkey[1].save_parameters, pkey[1].attributes);
            EVP_KEYMGMT_free(*(undefined8*)&pkey[1].save_parameters);
            pkey[1].save_parameters = 0;
            *(undefined4*)&pkey[1].field_0x2c = 0;
            pkey[1].attributes = (stack_st_X509_ATTRIBUTE*)0x0;
         }
         pkey->type = 0;
         LAB_00101caa:ENGINE_finish((ENGINE*)pkey->ameth);
         pkey->ameth = (EVP_PKEY_ASN1_METHOD*)0x0;
         ENGINE_finish(pkey->engine);
         pkey->engine = (ENGINE*)0x0;
         if (( str == (char*)0x0 ) || ( pEVar2 = EVP_PKEY_asn1_find_str(&local_28, str, len) ),pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00101d6c;
         iVar1 = *(int*)pEVar2;
         *(undefined8*)&pkey[1].save_parameters = 0;
         pkey->save_type = 0;
         pkey->type = iVar1;
         *(EVP_PKEY_ASN1_METHOD**)&pkey->references = pEVar2;
         pkey->ameth = (EVP_PKEY_ASN1_METHOD*)local_28;
      }
      LAB_00101d0c:iVar1 = 1;
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int EVP_PKEY_set_type(EVP_PKEY *pkey, int type) {
   int iVar1;
   EVP_PKEY_ASN1_METHOD *pEVar2;
   long in_FS_OFFSET;
   ENGINE *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (ENGINE*)0x0;
   if (pkey == (EVP_PKEY*)0x0) {
      if (type == 0) {
         ENGINE_finish((ENGINE*)0x0);
      } else {
         pEVar2 = EVP_PKEY_asn1_find(&local_28, type);
         ENGINE_finish(local_28);
         if (pEVar2 != (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00101ef0;
      }
      LAB_00101e6e:ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x650, "pkey_set_type");
      ERR_set_error(6, 0x9c, 0);
      iVar1 = 0;
   } else {
      if (( (pkey->pkey).ptr == (char*)0x0 ) && ( pkey[1].attributes == (stack_st_X509_ATTRIBUTE*)0x0 )) {
         if (( pkey->type == 0 ) || ( ( type != pkey->save_type || ( *(long*)&pkey->references == 0 ) ) )) goto LAB_00101e44;
      } else {
         evp_keymgmt_util_clear_operation_cache(pkey);
         evp_pkey_free_legacy(pkey);
         if (*(long*)&pkey[1].save_parameters != 0) {
            evp_keymgmt_freedata(*(long*)&pkey[1].save_parameters, pkey[1].attributes);
            EVP_KEYMGMT_free(*(undefined8*)&pkey[1].save_parameters);
            pkey[1].save_parameters = 0;
            *(undefined4*)&pkey[1].field_0x2c = 0;
            pkey[1].attributes = (stack_st_X509_ATTRIBUTE*)0x0;
         }
         pkey->type = 0;
         LAB_00101e44:ENGINE_finish((ENGINE*)pkey->ameth);
         pkey->ameth = (EVP_PKEY_ASN1_METHOD*)0x0;
         ENGINE_finish(pkey->engine);
         pkey->engine = (ENGINE*)0x0;
         if (( type == 0 ) || ( pEVar2 = EVP_PKEY_asn1_find(&local_28, type) ),pEVar2 == (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00101e6e;
         *(undefined8*)&pkey[1].save_parameters = 0;
         pkey->type = (int)CONCAT44(type, type);
         pkey->save_type = (int)( CONCAT44(type, type) >> 0x20 );
         *(EVP_PKEY_ASN1_METHOD**)&pkey->references = pEVar2;
         pkey->ameth = (EVP_PKEY_ASN1_METHOD*)local_28;
      }
      LAB_00101ef0:iVar1 = 1;
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int EVP_PKEY_assign(EVP_PKEY *pkey, int type, void *key) {
   byte *pbVar1;
   int iVar2;
   int iVar3;
   EC_GROUP *group;
   bool bVar4;
   iVar2 = EVP_PKEY_type(type);
   if (key != (void*)0x0) {
      if (( ( iVar2 == 0x198 ) || ( iVar2 == 0x494 ) ) && ( group = EC_KEY_get0_group((EC_KEY*)key) ),group != (EC_GROUP*)0x0) {
         iVar3 = EC_GROUP_get_curve_name(group);
         if (iVar3 == 0x494) {
            if (iVar2 == 0x198) {
               type = 0x494;
            }
         } else if (iVar2 == 0x494) {
            type = 0x198;
         }
      }
   }
   if (( pkey == (EVP_PKEY*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
      return 0;
   }
   iVar2 = pkey->type;
   (pkey->pkey).ptr = (char*)key;
   if (iVar2 == 0x198) {
      bVar4 = false;
      if (key != (void*)0x0) {
         iVar2 = ossl_ec_key_is_foreign(key);
         bVar4 = iVar2 != 0;
      }
   } else if (iVar2 < 0x199) {
      if (iVar2 == 0x1c) {
         bVar4 = false;
         if (key != (void*)0x0) {
            iVar2 = ossl_dh_is_foreign(key);
            bVar4 = iVar2 != 0;
         }
      } else {
         if (iVar2 != 0x74) {
            if (iVar2 == 6) goto LAB_00102070;
            goto LAB_0010200a;
         }
         bVar4 = false;
         if (key != (void*)0x0) {
            iVar2 = ossl_dsa_is_foreign(key);
            bVar4 = iVar2 != 0;
         }
      }
   } else {
      if (iVar2 != 0x390) {
         if (iVar2 == 0x494) goto LAB_00102056;
         LAB_0010200a:pbVar1 = (byte*)( (long)&pkey[1].ameth + 4 );
         *pbVar1 = *pbVar1 & 0xfe;
         goto LAB_00102056;
      }
      LAB_00102070:bVar4 = false;
      if (key != (void*)0x0) {
         iVar2 = ossl_rsa_is_foreign(key);
         bVar4 = iVar2 != 0;
      }
   }
   *(byte*)( (long)&pkey[1].ameth + 4 ) = *(byte*)( (long)&pkey[1].ameth + 4 ) & 0xfe | bVar4;
   LAB_00102056:return ( uint )(key != (void*)0x0);
}int EVP_PKEY_set1_DSA(EVP_PKEY *pkey, dsa_st *key) {
   int iVar1;
   iVar1 = DSA_up_ref(key);
   if (iVar1 != 0) {
      iVar1 = EVP_PKEY_assign(pkey, 0x74, key);
      if (iVar1 == 0) {
         DSA_free(key);
         return 0;
      }
   }
   return iVar1;
}int EVP_PKEY_set1_DH(EVP_PKEY *pkey, dh_st *key) {
   int iVar1;
   int iVar2;
   long lVar3;
   iVar1 = ossl_dh_is_named_safe_prime_group(key);
   if (iVar1 == 0) {
      lVar3 = DH_get0_q(key);
      if (lVar3 != 0) {
         iVar1 = 0x398;
         goto LAB_001021a4;
      }
   }
   iVar1 = 0x1c;
   LAB_001021a4:iVar2 = DH_up_ref(key);
   if (iVar2 != 0) {
      iVar2 = EVP_PKEY_assign(pkey, iVar1, key);
      if (iVar2 == 0) {
         DH_free(key);
         return 0;
      }
   }
   return iVar2;
}void EVP_PKEY_free(EVP_PKEY *pkey) {
   stack_st_X509_ATTRIBUTE **ppsVar1;
   int iVar2;
   undefined8 uVar3;
   if (pkey == (EVP_PKEY*)0x0) {
      return;
   }
   LOCK();
   ppsVar1 = &pkey->attributes;
   iVar2 = *(int*)ppsVar1;
   *(int*)ppsVar1 = *(int*)ppsVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   evp_keymgmt_util_clear_operation_cache(pkey);
   evp_pkey_free_legacy(pkey);
   if (*(long*)&pkey[1].save_parameters != 0) {
      evp_keymgmt_freedata(*(long*)&pkey[1].save_parameters, pkey[1].attributes);
      EVP_KEYMGMT_free(*(undefined8*)&pkey[1].save_parameters);
      pkey[1].save_parameters = 0;
      *(undefined4*)&pkey[1].field_0x2c = 0;
      pkey[1].attributes = (stack_st_X509_ATTRIBUTE*)0x0;
   }
   pkey->type = 0;
   CRYPTO_free_ex_data(0x11, pkey, (CRYPTO_EX_DATA*)&pkey[1].engine);
   uVar3._0_4_ = pkey[1].type;
   uVar3._4_4_ = pkey[1].save_type;
   CRYPTO_THREAD_lock_free(uVar3);
   OPENSSL_sk_pop_free(*(undefined8*)&pkey[1].references, &X509_ATTRIBUTE_free);
   CRYPTO_free(pkey);
   return;
}EVP_PKEY *EVP_PKEY_new_raw_public_key(int param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   code *pcVar1;
   int iVar2;
   char *pcVar3;
   EVP_PKEY_CTX *ctx;
   EVP_PKEY_ASN1_METHOD *pEVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_c8[32];
   undefined8 local_a8;
   EVP_PKEY *local_98;
   ENGINE *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (EVP_PKEY*)0x0;
   if (param_2 == 0) {
      local_90 = (ENGINE*)0x0;
      if (( param_1 == 0 ) || ( pEVar4 = EVP_PKEY_asn1_find(&local_90, param_1) ),local_90 == (ENGINE*)0x0) {
         ENGINE_finish((ENGINE*)0x0);
      } else {
         ENGINE_finish(local_90);
         if (pEVar4 != (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00102313;
      }
      pcVar3 = OBJ_nid2sn(param_1);
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(0, pcVar3, 0);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         ERR_set_mark();
         iVar2 = EVP_PKEY_fromdata_init(ctx);
         if (iVar2 != 1) {
            ERR_pop_to_mark();
            goto LAB_00102315;
         }
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         ERR_clear_last_mark();
         OSSL_PARAM_construct_octet_string(local_c8, &_LC1, param_3, param_4);
         local_68._0_8_ = local_a8;
         iVar2 = EVP_PKEY_fromdata(ctx, &local_98, 0x87, local_88);
         if (iVar2 == 1) goto LAB_001023b1;
         ERR_new();
         uVar5 = 0x1d4;
         LAB_0010237f:ERR_set_debug("crypto/evp/p_lib.c", uVar5, "new_raw_key_int");
         ERR_set_error(6, 0xb4, 0);
      }
   } else {
      LAB_00102313:ctx = (EVP_PKEY_CTX*)0x0;
      LAB_00102315:local_98 = EVP_PKEY_new();
      if (local_98 == (EVP_PKEY*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/evp/p_lib.c", 0x1e4, "new_raw_key_int");
         ERR_set_error(6, 0x80006, 0);
      } else {
         iVar2 = pkey_set_type(local_98, param_2, param_1, 0, 0xffffffff, 0);
         if (( iVar2 != 0 ) && ( *(long*)&local_98->references != 0 )) {
            pcVar1 = *(code**)( *(long*)&local_98->references + 0x100 );
            if (pcVar1 != (code*)0x0) {
               iVar2 = ( *pcVar1 )(local_98, param_3, param_4);
               if (iVar2 != 0) goto LAB_001023b1;
               ERR_new();
               uVar5 = 0x201;
               goto LAB_0010237f;
            }
            ERR_new();
            ERR_set_debug("crypto/evp/p_lib.c", 0x1fc, "new_raw_key_int");
            ERR_set_error(6, 0x96, 0);
         }
      }
   }
   EVP_PKEY_free(local_98);
   local_98 = (EVP_PKEY*)0x0;
   LAB_001023b1:EVP_PKEY_CTX_free(ctx);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return local_98;
}EVP_PKEY *EVP_PKEY_dup(int *param_1) {
   code *pcVar1;
   int iVar2;
   EVP_PKEY *pkey;
   long lVar3;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x6c7, "EVP_PKEY_dup");
      ERR_set_error(6, 0xc0102, 0);
      return (EVP_PKEY*)0x0;
   }
   pkey = EVP_PKEY_new();
   if (pkey == (EVP_PKEY*)0x0) {
      return (EVP_PKEY*)0x0;
   }
   if (*param_1 == 0) {
      if (*(long*)( param_1 + 0x18 ) != 0) goto LAB_001025b6;
   } else {
      if (*(long*)( param_1 + 0x18 ) == 0) {
         if (( *(long*)( param_1 + 2 ) == 0 ) || ( pcVar1 = *(code**)( *(long*)( param_1 + 2 ) + 0x130 ) ),pcVar1 == (code*)0x0) {
            if (( *(long*)( param_1 + 8 ) != 0 ) || ( iVar2 = iVar2 == 0 )) {
               ERR_new();
               ERR_set_debug("crypto/evp/p_lib.c", 0x6e3, "EVP_PKEY_dup");
               ERR_set_error(6, 0xe0, 0);
               goto LAB_00102678;
            }
            goto LAB_001025ce;
         }
         iVar2 = ( *pcVar1 )(pkey, param_1);
      } else {
         LAB_001025b6:iVar2 = evp_keymgmt_util_copy(pkey, param_1, 0x87);
      }
      if (iVar2 == 0) goto LAB_00102678;
   }
   LAB_001025ce:iVar2 = CRYPTO_dup_ex_data(0x11, (CRYPTO_EX_DATA*)&pkey[1].engine, (CRYPTO_EX_DATA*)( param_1 + 0x14 ));
   if (iVar2 != 0) {
      if (*(long*)( param_1 + 0x10 ) == 0) {
         return pkey;
      }
      lVar3 = ossl_x509at_dup();
      *(long*)&pkey[1].references = lVar3;
      if (lVar3 != 0) {
         return pkey;
      }
   }
   LAB_00102678:EVP_PKEY_free(pkey);
   return (EVP_PKEY*)0x0;
}EVP_PKEY *EVP_PKEY_new_raw_private_key_ex(undefined8 param_1, char *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   code *pcVar1;
   int iVar2;
   EVP_PKEY_ASN1_METHOD *pEVar3;
   char *pcVar4;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_d8[32];
   undefined8 local_b8;
   EVP_PKEY *local_a8;
   ENGINE *local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (EVP_PKEY*)0x0;
   local_a0 = (ENGINE*)0x0;
   if (param_2 == (char*)0x0) {
      ENGINE_finish((ENGINE*)0x0);
      pcVar4 = OBJ_nid2sn(0);
      LAB_001028e1:ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_1, pcVar4, param_3);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         ERR_set_mark();
         iVar2 = EVP_PKEY_fromdata_init(ctx);
         if (iVar2 != 1) {
            ERR_pop_to_mark();
            goto LAB_00102769;
         }
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         ERR_clear_last_mark();
         OSSL_PARAM_construct_octet_string(local_d8, &_LC0, param_4, param_5);
         local_78._0_8_ = local_b8;
         iVar2 = EVP_PKEY_fromdata(ctx, &local_a8, 0x87, local_98);
         if (iVar2 == 1) goto LAB_001027ce;
         ERR_new();
         uVar5 = 0x1d4;
         LAB_00102898:ERR_set_debug("crypto/evp/p_lib.c", uVar5, "new_raw_key_int");
         ERR_set_error(6, 0xb4, 0);
      }
   } else {
      pEVar3 = EVP_PKEY_asn1_find_str(&local_a0, param_2, -1);
      pcVar4 = param_2;
      if (local_a0 == (ENGINE*)0x0) {
         ENGINE_finish((ENGINE*)0x0);
         goto LAB_001028e1;
      }
      ctx = (EVP_PKEY_CTX*)0x0;
      ENGINE_finish(local_a0);
      if (pEVar3 == (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_001028e1;
      LAB_00102769:local_a8 = EVP_PKEY_new();
      if (local_a8 == (EVP_PKEY*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/evp/p_lib.c", 0x1e4, "new_raw_key_int");
         ERR_set_error(6, 0x80006, 0);
         EVP_PKEY_free(local_a8);
         local_a8 = (EVP_PKEY*)0x0;
         goto LAB_001027ce;
      }
      iVar2 = pkey_set_type(local_a8, 0, 0, param_2, 0xffffffff, 0);
      if (( iVar2 != 0 ) && ( *(long*)&local_a8->references != 0 )) {
         pcVar1 = *(code**)( *(long*)&local_a8->references + 0xf8 );
         if (pcVar1 != (code*)0x0) {
            iVar2 = ( *pcVar1 )(local_a8, param_4, param_5);
            if (iVar2 != 0) goto LAB_001027ce;
            ERR_new();
            uVar5 = 0x1f7;
            goto LAB_00102898;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x1f2, "new_raw_key_int");
         ERR_set_error(6, 0x96, 0);
      }
   }
   EVP_PKEY_free(local_a8);
   local_a8 = (EVP_PKEY*)0x0;
   LAB_001027ce:EVP_PKEY_CTX_free(ctx);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return local_a8;
}EVP_PKEY *EVP_PKEY_new_raw_public_key_ex(undefined8 param_1, char *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   code *pcVar1;
   int iVar2;
   EVP_PKEY_ASN1_METHOD *pEVar3;
   char *pcVar4;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_d8[32];
   undefined8 local_b8;
   EVP_PKEY *local_a8;
   ENGINE *local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (EVP_PKEY*)0x0;
   local_a0 = (ENGINE*)0x0;
   if (param_2 == (char*)0x0) {
      ENGINE_finish((ENGINE*)0x0);
      pcVar4 = OBJ_nid2sn(0);
      LAB_00102bd1:ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_1, pcVar4, param_3);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         ERR_set_mark();
         iVar2 = EVP_PKEY_fromdata_init(ctx);
         if (iVar2 != 1) {
            ERR_pop_to_mark();
            goto LAB_00102a59;
         }
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         ERR_clear_last_mark();
         OSSL_PARAM_construct_octet_string(local_d8, &_LC1, param_4, param_5);
         local_78._0_8_ = local_b8;
         iVar2 = EVP_PKEY_fromdata(ctx, &local_a8, 0x87, local_98);
         if (iVar2 == 1) goto LAB_00102abe;
         ERR_new();
         uVar5 = 0x1d4;
         LAB_00102b88:ERR_set_debug("crypto/evp/p_lib.c", uVar5, "new_raw_key_int");
         ERR_set_error(6, 0xb4, 0);
      }
   } else {
      pEVar3 = EVP_PKEY_asn1_find_str(&local_a0, param_2, -1);
      pcVar4 = param_2;
      if (local_a0 == (ENGINE*)0x0) {
         ENGINE_finish((ENGINE*)0x0);
         goto LAB_00102bd1;
      }
      ctx = (EVP_PKEY_CTX*)0x0;
      ENGINE_finish(local_a0);
      if (pEVar3 == (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00102bd1;
      LAB_00102a59:local_a8 = EVP_PKEY_new();
      if (local_a8 == (EVP_PKEY*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/evp/p_lib.c", 0x1e4, "new_raw_key_int");
         ERR_set_error(6, 0x80006, 0);
         EVP_PKEY_free(local_a8);
         local_a8 = (EVP_PKEY*)0x0;
         goto LAB_00102abe;
      }
      iVar2 = pkey_set_type(local_a8, 0, 0, param_2, 0xffffffff, 0);
      if (( iVar2 != 0 ) && ( *(long*)&local_a8->references != 0 )) {
         pcVar1 = *(code**)( *(long*)&local_a8->references + 0x100 );
         if (pcVar1 != (code*)0x0) {
            iVar2 = ( *pcVar1 )(local_a8, param_4, param_5);
            if (iVar2 != 0) goto LAB_00102abe;
            ERR_new();
            uVar5 = 0x201;
            goto LAB_00102b88;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x1fc, "new_raw_key_int");
         ERR_set_error(6, 0x96, 0);
      }
   }
   EVP_PKEY_free(local_a8);
   local_a8 = (EVP_PKEY*)0x0;
   LAB_00102abe:EVP_PKEY_CTX_free(ctx);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return local_a8;
}EVP_PKEY *EVP_PKEY_new_raw_private_key(int param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   code *pcVar1;
   int iVar2;
   char *pcVar3;
   EVP_PKEY_CTX *ctx;
   EVP_PKEY_ASN1_METHOD *pEVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_c8[32];
   undefined8 local_a8;
   EVP_PKEY *local_98;
   ENGINE *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (EVP_PKEY*)0x0;
   if (param_2 == 0) {
      local_90 = (ENGINE*)0x0;
      if (( param_1 == 0 ) || ( pEVar4 = EVP_PKEY_asn1_find(&local_90, param_1) ),local_90 == (ENGINE*)0x0) {
         ENGINE_finish((ENGINE*)0x0);
      } else {
         ENGINE_finish(local_90);
         if (pEVar4 != (EVP_PKEY_ASN1_METHOD*)0x0) goto LAB_00102d03;
      }
      pcVar3 = OBJ_nid2sn(param_1);
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(0, pcVar3, 0);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         ERR_set_mark();
         iVar2 = EVP_PKEY_fromdata_init(ctx);
         if (iVar2 != 1) {
            ERR_pop_to_mark();
            goto LAB_00102d05;
         }
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         ERR_clear_last_mark();
         OSSL_PARAM_construct_octet_string(local_c8, &_LC0, param_3, param_4);
         local_68._0_8_ = local_a8;
         iVar2 = EVP_PKEY_fromdata(ctx, &local_98, 0x87, local_88);
         if (iVar2 == 1) goto LAB_00102da1;
         ERR_new();
         uVar5 = 0x1d4;
         LAB_00102d6f:ERR_set_debug("crypto/evp/p_lib.c", uVar5, "new_raw_key_int");
         ERR_set_error(6, 0xb4, 0);
      }
   } else {
      LAB_00102d03:ctx = (EVP_PKEY_CTX*)0x0;
      LAB_00102d05:local_98 = EVP_PKEY_new();
      if (local_98 == (EVP_PKEY*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/evp/p_lib.c", 0x1e4, "new_raw_key_int");
         ERR_set_error(6, 0x80006, 0);
      } else {
         iVar2 = pkey_set_type(local_98, param_2, param_1, 0, 0xffffffff, 0);
         if (( iVar2 != 0 ) && ( *(long*)&local_98->references != 0 )) {
            pcVar1 = *(code**)( *(long*)&local_98->references + 0xf8 );
            if (pcVar1 != (code*)0x0) {
               iVar2 = ( *pcVar1 )(local_98, param_3, param_4);
               if (iVar2 != 0) goto LAB_00102da1;
               ERR_new();
               uVar5 = 0x1f7;
               goto LAB_00102d6f;
            }
            ERR_new();
            ERR_set_debug("crypto/evp/p_lib.c", 0x1f2, "new_raw_key_int");
            ERR_set_error(6, 0x96, 0);
         }
      }
   }
   EVP_PKEY_free(local_98);
   local_98 = (EVP_PKEY*)0x0;
   LAB_00102da1:EVP_PKEY_CTX_free(ctx);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return local_98;
}ulong EVP_PKEY_get_size(long param_1) {
   code *pcVar1;
   ulong uVar2;
   if (param_1 != 0) {
      uVar2 = ( ulong ) * (uint*)( param_1 + 0x90 );
      if (( *(long*)( param_1 + 8 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x58 ) ),pcVar1 != (code*)0x0) {
         uVar2 = ( *pcVar1 )();
      }
      if (0 < (int)uVar2) {
         return uVar2;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x759, "EVP_PKEY_get_size");
   ERR_set_error(6, 0xa7, 0);
   return 0;
}long EVP_PKEY_get0_description(long param_1) {
   long lVar1;
   if (( *(long*)( param_1 + 0x20 ) == 0 ) && ( *(long*)( param_1 + 0x68 ) == 0 )) {
      return *(long*)( param_1 + 0x68 );
   }
   if (( ( *(long*)( param_1 + 0x60 ) == 0 ) || ( lVar1 = *(long*)( *(long*)( param_1 + 0x60 ) + 0x18 ) ),lVar1 == 0 )) {
      return *(long*)( lVar1 + 0x18 );
   }
   return lVar1;
}long evp_pkey_export_to_provider(int *param_1, undefined8 param_2, long *param_3, undefined8 param_4) {
   long lVar1;
   int iVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   undefined8 uVar8;
   EVP_PKEY_CTX *ctx;
   long lVar9;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (*(long*)( param_1 + 8 ) == 0) {
      if (*(long*)( param_1 + 0x1a ) == 0) {
         return 0;
      }
   } else {
      if (*(long*)( *(long*)( param_1 + 2 ) + 0x118 ) == 0) {
         return 0;
      }
      if (*(long*)( *(long*)( param_1 + 2 ) + 0x120 ) == 0) {
         return 0;
      }
   }
   if (param_3 == (long*)0x0) {
      LAB_001031f0:ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(param_2, param_1, param_4);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         lVar1 = *(long*)( ctx + 0x20 );
         *(undefined8*)( ctx + 0x20 ) = 0;
         EVP_PKEY_CTX_free(ctx);
         if (lVar1 != 0) {
            lVar3 = *(long*)( param_1 + 8 );
            lVar9 = lVar1;
            goto joined_r0x0010322e;
         }
      }
      lVar3 = 0;
      lVar9 = 0;
      goto LAB_001032b5;
   }
   lVar1 = *param_3;
   lVar9 = 0;
   *param_3 = 0;
   if (lVar1 == 0) goto LAB_001031f0;
   lVar3 = *(long*)( param_1 + 8 );
   joined_r0x0010322e:if (lVar3 == 0) {
      lVar3 = evp_keymgmt_util_export_to_provider(param_1, lVar1, 0x87);
      LAB_00103247:if (lVar3 == 0) {
         lVar3 = 0;
         goto LAB_001032b5;
      }
      LAB_001031c0:if (param_3 != (long*)0x0) {
         *param_3 = lVar1;
         EVP_KEYMGMT_free(0);
         return lVar3;
      }
   } else {
      lVar3 = ( **(code**)( *(long*)( param_1 + 2 ) + 0x118 ) )(param_1);
      if (lVar3 == *(long*)( param_1 + 0x20 )) {
         iVar2 = CRYPTO_THREAD_read_lock(*(undefined8*)( param_1 + 0xe ));
         if (iVar2 != 0) {
            plVar7 = (long*)evp_keymgmt_util_find_operation_cache(param_1, lVar1, 0x87);
            if (( plVar7 != (long*)0x0 ) && ( *plVar7 != 0 )) {
               lVar3 = plVar7[1];
               CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
               goto LAB_00103247;
            }
            CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
            goto LAB_001030b8;
         }
      } else {
         LAB_001030b8:pcVar4 = OBJ_nid2sn(*param_1);
         iVar2 = EVP_KEYMGMT_is_a(lVar1, pcVar4);
         if (( iVar2 != 0 ) && ( lVar5 = lVar5 != 0 )) {
            iVar2 = ( **(code**)( *(long*)( param_1 + 2 ) + 0x120 ) )(param_1, lVar5, *(undefined8*)( lVar1 + 200 ), param_2, param_4);
            if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) {
               LAB_001032e0:lVar3 = 0;
               evp_keymgmt_freedata(lVar1, lVar5);
               goto LAB_001032b5;
            }
            iVar2 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0xe ));
            lVar3 = lVar5;
            if (iVar2 != 0) {
               lVar6 = ( **(code**)( *(long*)( param_1 + 2 ) + 0x118 ) )(param_1);
               if (( lVar6 != *(long*)( param_1 + 0x20 ) ) && ( iVar2 = evp_keymgmt_util_clear_operation_cache(param_1) ),iVar2 == 0) {
                  CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
                  lVar3 = 0;
                  evp_keymgmt_freedata(lVar1, lVar5);
                  EVP_KEYMGMT_free(lVar1);
                  goto LAB_001032b5;
               }
               EVP_KEYMGMT_free(lVar1);
               plVar7 = (long*)evp_keymgmt_util_find_operation_cache(param_1, lVar1, 0x87);
               if (( plVar7 != (long*)0x0 ) && ( *plVar7 != 0 )) {
                  lVar3 = plVar7[1];
                  CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
                  evp_keymgmt_freedata(lVar1, lVar5);
                  goto LAB_00103247;
               }
               iVar2 = evp_keymgmt_util_cache_keydata(param_1, lVar1, lVar5, 0x87);
               if (iVar2 == 0) {
                  CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
                  goto LAB_001032e0;
               }
               uVar8 = ( **(code**)( *(long*)( param_1 + 2 ) + 0x118 ) )(param_1);
               *(undefined8*)( param_1 + 0x20 ) = uVar8;
               CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe ));
            }
            goto LAB_001031c0;
         }
      }
      lVar3 = 0;
   }
   LAB_001032b5:EVP_KEYMGMT_free(lVar9);
   return lVar3;
}undefined8 EVP_PKEY_eq(int *param_1, int *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   bool bVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == param_2) {
      uVar7 = 1;
   } else {
      bVar5 = param_1 == (int*)0x0 || param_2 == (int*)0x0;
      if (bVar5) {
         uVar7 = 0;
      } else if (( *(long*)( param_1 + 0x18 ) == 0 ) && ( *(long*)( param_2 + 0x18 ) == 0 )) {
         if (*param_1 == *param_2) {
            lVar3 = *(long*)( param_1 + 2 );
            if (lVar3 != 0) {
               if (*(code**)( lVar3 + 0x90 ) != (code*)0x0) {
                  uVar7 = ( **(code**)( lVar3 + 0x90 ) )();
                  if ((int)uVar7 < 1) goto LAB_0010344a;
                  lVar3 = *(long*)( param_1 + 2 );
               }
               if (*(code**)( lVar3 + 0x30 ) != (code*)0x0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     for (int i_1472 = 0; i_1472 < 2; i_1472++) {
                        /* WARNING: Could not recover jumptable at 0x001034d2. Too many branches */
                     }
                     uVar7 = ( **(code**)( lVar3 + 0x30 ) )(param_1, param_2);
                     return uVar7;
                  }
                  goto LAB_00103654;
               }
            }
            LAB_00103629:uVar7 = 0xfffffffe;
         } else {
            LAB_0010364a:uVar7 = 0xffffffff;
         }
      } else {
         iVar1 = evp_keymgmt_util_has(param_1, 2);
         if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
            uVar7 = 7;
         } else {
            uVar7 = 6;
         }
         lVar6 = *(long*)( param_1 + 0x18 );
         lVar3 = *(long*)( param_2 + 0x18 );
         local_50 = 0;
         local_48 = 0;
         if (lVar6 == 0) {
            if (lVar3 != 0) {
               if (*param_1 == 0) {
                  lVar2 = *(long*)( param_1 + 0x1a );
                  lVar8 = *(long*)( param_2 + 0x1a );
                  local_48 = lVar3;
               } else {
                  pcVar4 = OBJ_nid2sn(*param_1);
                  iVar1 = EVP_KEYMGMT_is_a(*(undefined8*)( param_2 + 0x18 ), pcVar4);
                  if (iVar1 == 0) goto LAB_0010364a;
                  iVar1 = *param_2;
                  lVar3 = *(long*)( param_2 + 0x18 );
                  if (iVar1 == 0) {
                     lVar6 = *(long*)( param_1 + 0x18 );
                     goto LAB_001035ff;
                  }
                  if (lVar3 == 0) goto LAB_001035e0;
                  lVar6 = *(long*)( param_1 + 0x18 );
                  lVar2 = *(long*)( param_1 + 0x1a );
                  lVar8 = *(long*)( param_2 + 0x1a );
                  local_50 = lVar6;
                  local_48 = lVar3;
               }
               LAB_001035a8:if (( *(long*)( local_48 + 0xc0 ) == 0 ) || ( lVar3 = evp_pkey_export_to_provider(param_1, 0, &local_48, 0) ),lVar6 = local_50,lVar3 == 0) {
                  LAB_00103620:lVar3 = lVar2;
                  if (lVar6 != 0) goto LAB_00103409;
               } else {
                  local_50 = local_48;
                  lVar6 = local_48;
                  LAB_001034f9:if (( lVar6 != 0 ) && ( !bVar5 )) {
                     uVar7 = evp_keymgmt_match(lVar6, lVar3, lVar8, uVar7);
                     goto LAB_0010344a;
                  }
               }
            }
            goto LAB_00103629;
         }
         if (lVar3 == 0) {
            iVar1 = *param_2;
            if (iVar1 == 0) {
               lVar3 = *(long*)( param_1 + 0x1a );
               lVar8 = *(long*)( param_2 + 0x1a );
               local_50 = lVar6;
               LAB_00103409:if (( *(long*)( lVar6 + 0xc0 ) == 0 ) || ( lVar2 = evp_pkey_export_to_provider(param_2, 0, &local_50, 0) ),lVar6 = local_50,lVar2 == 0) {
                  bVar5 = local_48 != lVar6;
               } else {
                  local_48 = local_50;
                  lVar8 = lVar2;
               }
               goto LAB_001034f9;
            }
            LAB_001035e0:pcVar4 = OBJ_nid2sn(iVar1);
            iVar1 = EVP_KEYMGMT_is_a(*(undefined8*)( param_1 + 0x18 ), pcVar4);
            if (iVar1 != 0) {
               lVar6 = *(long*)( param_1 + 0x18 );
               lVar3 = *(long*)( param_2 + 0x18 );
               LAB_001035ff:lVar2 = *(long*)( param_1 + 0x1a );
               lVar8 = *(long*)( param_2 + 0x1a );
               local_50 = lVar6;
               local_48 = lVar3;
               if (lVar3 != 0) goto LAB_001035a8;
               goto LAB_00103620;
            }
            goto LAB_0010364a;
         }
         uVar7 = evp_keymgmt_util_match(param_1, param_2, uVar7);
      }
   }
   LAB_0010344a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   LAB_00103654:/* WARNING: Subroutine does not return */__stack_chk_fail();
}void EVP_PKEY_cmp(void) {
   EVP_PKEY_eq();
   return;
}undefined8 EVP_PKEY_parameters_eq(int *param_1, int *param_2) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   char *pcVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_40;
   long local_38;
   long local_30;
   lVar6 = *(long*)( param_1 + 0x18 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_2 + 0x18 );
   if (lVar6 == 0) {
      iVar1 = *param_1;
      if (lVar2 == 0) {
         if (*param_2 != iVar1) {
            LAB_001038d6:uVar3 = 0xffffffff;
            goto LAB_00103734;
         }
         if (( *(long*)( param_1 + 2 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 2 ) + 0x90 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               for (int i_1473 = 0; i_1473 < 2; i_1473++) {
                  /* WARNING: Could not recover jumptable at 0x0010379e. Too many branches */
               }
               uVar3 = ( *UNRECOVERED_JUMPTABLE )(param_1);
               return uVar3;
            }
            goto LAB_001038e0;
         }
      } else {
         local_40 = 0;
         local_38 = 0;
         if (iVar1 == 0) {
            lVar4 = *(long*)( param_1 + 0x1a );
            lVar7 = *(long*)( param_2 + 0x1a );
            local_38 = lVar2;
         } else {
            pcVar5 = OBJ_nid2sn(iVar1);
            iVar1 = EVP_KEYMGMT_is_a(*(undefined8*)( param_2 + 0x18 ), pcVar5);
            if (iVar1 == 0) goto LAB_001038d6;
            iVar1 = *param_2;
            lVar2 = *(long*)( param_2 + 0x18 );
            if (iVar1 == 0) {
               lVar6 = *(long*)( param_1 + 0x18 );
               goto LAB_0010383b;
            }
            if (lVar2 == 0) goto LAB_00103818;
            lVar6 = *(long*)( param_1 + 0x18 );
            lVar4 = *(long*)( param_1 + 0x1a );
            lVar7 = *(long*)( param_2 + 0x1a );
            local_40 = lVar6;
            local_38 = lVar2;
         }
         LAB_001036d7:if (( *(long*)( local_38 + 0xc0 ) != 0 ) && ( lVar2 = evp_pkey_export_to_provider(param_1, 0, &local_38, 0) ),lVar6 = local_40,lVar2 != 0) {
            bVar8 = false;
            local_40 = local_38;
            lVar6 = local_38;
            goto LAB_00103713;
         }
         LAB_00103860:lVar2 = lVar4;
         if (lVar6 != 0) goto LAB_001037ce;
      }
      LAB_00103869:uVar3 = 0xfffffffe;
   } else {
      local_40 = 0;
      local_38 = 0;
      if (lVar2 == 0) {
         iVar1 = *param_2;
         if (iVar1 != 0) {
            LAB_00103818:pcVar5 = OBJ_nid2sn(iVar1);
            iVar1 = EVP_KEYMGMT_is_a(*(undefined8*)( param_1 + 0x18 ), pcVar5);
            if (iVar1 == 0) goto LAB_001038d6;
            lVar6 = *(long*)( param_1 + 0x18 );
            lVar2 = *(long*)( param_2 + 0x18 );
            LAB_0010383b:lVar4 = *(long*)( param_1 + 0x1a );
            lVar7 = *(long*)( param_2 + 0x1a );
            local_40 = lVar6;
            local_38 = lVar2;
            if (lVar2 != 0) goto LAB_001036d7;
            goto LAB_00103860;
         }
         lVar2 = *(long*)( param_1 + 0x1a );
         lVar7 = *(long*)( param_2 + 0x1a );
         local_40 = lVar6;
         LAB_001037ce:if (*(long*)( lVar6 + 0xc0 ) != 0) {
            lVar4 = evp_pkey_export_to_provider(param_2, 0, &local_40, 0);
            lVar6 = local_40;
            if (lVar4 != 0) {
               bVar8 = false;
               lVar7 = lVar4;
               local_38 = local_40;
               goto LAB_00103713;
            }
         }
         bVar8 = local_38 != lVar6;
         LAB_00103713:if (( lVar6 == 0 ) || ( bVar8 )) goto LAB_00103869;
         uVar3 = evp_keymgmt_match(lVar6, lVar2, lVar7, 4);
      } else {
         uVar3 = evp_keymgmt_util_match(param_1, param_2, 4);
      }
   }
   LAB_00103734:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_001038e0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}void EVP_PKEY_cmp_parameters(void) {
   EVP_PKEY_parameters_eq();
   return;
}undefined8 evp_pkey_copy_downgraded(long *param_1, int *param_2) {
   long lVar1;
   long lVar2;
   undefined4 *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   EVP_PKEY_CTX *ctx;
   EVP_PKEY *pkey;
   if (param_1 == (long*)0x0) {
      return 0;
   }
   if (( *(long*)( param_2 + 8 ) == 0 ) && ( *(long*)( param_2 + 0x1a ) == 0 )) {
      return 0;
   }
   lVar1 = *(long*)( param_2 + 0x18 );
   if (lVar1 == 0) {
      return 0;
   }
   iVar4 = *param_2;
   lVar2 = *(long*)( param_2 + 0x1a );
   pcVar5 = (char*)EVP_KEYMGMT_get0_name(lVar1);
   if (iVar4 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x837, "evp_pkey_copy_downgraded");
      ERR_set_error(6, 0xc0103, "keymgmt key type = %s but legacy type = EVP_PKEY_NONE", pcVar5);
      return 0;
   }
   if (iVar4 != -1) {
      pcVar5 = OBJ_nid2sn(iVar4);
   }
   puVar3 = (undefined4*)*param_1;
   if (puVar3 == (undefined4*)0x0) {
      pkey = EVP_PKEY_new();
      *param_1 = (long)pkey;
      if (pkey == (EVP_PKEY*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x845, "evp_pkey_copy_downgraded");
         ERR_set_error(6, 0x80006, 0);
         return 0;
      }
      iVar4 = EVP_PKEY_set_type(pkey, iVar4);
      if (iVar4 == 0) goto LAB_00103a75;
   } else {
      evp_keymgmt_util_clear_operation_cache(puVar3);
      evp_pkey_free_legacy(puVar3);
      if (*(long*)( puVar3 + 0x18 ) != 0) {
         evp_keymgmt_freedata(*(long*)( puVar3 + 0x18 ), *(undefined8*)( puVar3 + 0x1a ));
         EVP_KEYMGMT_free(*(undefined8*)( puVar3 + 0x18 ));
         *(undefined1(*) [16])( puVar3 + 0x18 ) = (undefined1[16])0x0;
      }
      *puVar3 = 0;
      iVar4 = EVP_PKEY_set_type((EVP_PKEY*)*param_1, iVar4);
      if (iVar4 == 0) {
         return 0;
      }
      pkey = (EVP_PKEY*)0x0;
   }
   if (lVar2 == 0) {
      return 1;
   }
   if (*(long*)( *(long*)( *param_1 + 8 ) + 0x128 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x852, "evp_pkey_copy_downgraded");
      ERR_set_error(6, 0xce, "key type = %s", pcVar5);
   } else {
      uVar6 = ossl_provider_libctx(*(undefined8*)( lVar1 + 0x20 ));
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(uVar6, *param_1, 0);
      if (ctx == (EVP_PKEY_CTX*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/p_lib.c", 0x85f, "evp_pkey_copy_downgraded");
         ERR_set_error(6, 0x80006, 0);
      } else {
         iVar4 = evp_keymgmt_export(lVar1, lVar2, 0x87, *(undefined8*)( *(long*)( *param_1 + 8 ) + 0x128 ), ctx);
         if (iVar4 != 0) {
            lVar1 = *param_1;
            uVar6 = ( **(code**)( *(long*)( lVar1 + 8 ) + 0x118 ) )(lVar1);
            *(undefined8*)( lVar1 + 0x80 ) = uVar6;
            EVP_PKEY_CTX_free(ctx);
            return 1;
         }
      }
      EVP_PKEY_CTX_free(ctx);
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x86f, "evp_pkey_copy_downgraded");
   ERR_set_error(6, 0xcd, "key type = %s", pcVar5);
   if (pkey == (EVP_PKEY*)0x0) {
      return 0;
   }
   LAB_00103a75:EVP_PKEY_free(pkey);
   *param_1 = 0;
   return 0;
}int EVP_PKEY_copy_parameters(EVP_PKEY *to, EVP_PKEY *from) {
   code *pcVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   stack_st_X509_ATTRIBUTE *psVar5;
   long in_FS_OFFSET;
   EVP_PKEY *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = to->type;
   local_30 = (EVP_PKEY*)0x0;
   if (iVar2 == 0) {
      LAB_00103cf0:if (*(long*)&to[1].save_parameters != 0) goto LAB_00103c62;
      if (( from->type != 0 ) && ( *(long*)&from[1].save_parameters == 0 )) {
         iVar2 = EVP_PKEY_set_type(to, from->type);
         if (iVar2 == 0) {
            uVar3 = 0;
            goto LAB_00103cc4;
         }
         goto LAB_00103c62;
      }
      iVar2 = EVP_PKEY_set_type_by_keymgmt(to);
      if (iVar2 != 0) goto LAB_00103c62;
   } else {
      if (*(long*)&to[1].save_parameters == 0) {
         if (*(long*)&from[1].save_parameters != 0) {
            iVar2 = evp_pkey_copy_downgraded(&local_30);
            if (iVar2 == 0) goto LAB_00103d21;
            iVar2 = to->type;
            from = local_30;
            if (iVar2 == 0) goto LAB_00103cf0;
            if (*(long*)&to[1].save_parameters != 0) goto LAB_00103c62;
         }
         if (from->type != iVar2) {
            ERR_new();
            uVar3 = 0;
            ERR_set_debug("crypto/evp/p_lib.c", 0xaf, "EVP_PKEY_copy_parameters");
            ERR_set_error(6, 0x65, 0);
            goto LAB_00103cc4;
         }
      }
      LAB_00103c62:iVar2 = EVP_PKEY_missing_parameters(from);
      if (iVar2 != 0) {
         ERR_new();
         uVar3 = 0;
         ERR_set_debug("crypto/evp/p_lib.c", 0xb6, "EVP_PKEY_copy_parameters");
         ERR_set_error(6, 0x67, 0);
         goto LAB_00103cc4;
      }
      iVar2 = EVP_PKEY_missing_parameters(to);
      if (iVar2 == 0) {
         uVar3 = EVP_PKEY_parameters_eq(to, from);
         if (uVar3 != 1) {
            ERR_new();
            uVar3 = 0;
            ERR_set_debug("crypto/evp/p_lib.c", 0xbe, "EVP_PKEY_copy_parameters");
            ERR_set_error(6, 0x99, 0);
         }
         goto LAB_00103cc4;
      }
      if (*(long*)&to[1].save_parameters != 0) {
         if (*(long*)&from[1].save_parameters != 0) {
            uVar3 = evp_keymgmt_util_copy(to, from, 4);
            goto LAB_00103cc4;
         }
         if (to[1].attributes == (stack_st_X509_ATTRIBUTE*)0x0) {
            local_28 = *(long*)&to[1].save_parameters;
            lVar4 = evp_pkey_export_to_provider(from, 0, &local_28, 0);
            if (lVar4 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/p_lib.c", 0xdb, "EVP_PKEY_copy_parameters");
               ERR_set_error(6, 0x65, 0);
               uVar3 = 0;
            } else {
               psVar5 = (stack_st_X509_ATTRIBUTE*)evp_keymgmt_dup(*(undefined8*)&to[1].save_parameters, lVar4, 4);
               to[1].attributes = psVar5;
               uVar3 = ( uint )(psVar5 != (stack_st_X509_ATTRIBUTE*)0x0);
            }
            goto LAB_00103cc4;
         }
      }
      if (( *(long*)&from->references != 0 ) && ( pcVar1 = *(code**)( *(long*)&from->references + 0x88 ) ),pcVar1 != (code*)0x0) {
         uVar3 = ( *pcVar1 )(to, from);
         goto LAB_00103cc4;
      }
   }
   LAB_00103d21:uVar3 = 0;
   LAB_00103cc4:EVP_PKEY_free(local_30);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}char *evp_pkey_get_legacy(long param_1) {
   int iVar1;
   char *pcVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (EVP_PKEY*)0x0;
   if (( param_1 != 0 ) && ( ( pcVar2 = *(char**)( param_1 + 0x20 ) ),pcVar2 != (char*)0x0 || ( *(long*)( param_1 + 0x68 ) != 0 ) )) {
      if (*(long*)( param_1 + 0x60 ) == 0) goto LAB_00103f4f;
      iVar1 = CRYPTO_THREAD_read_lock(*(undefined8*)( param_1 + 0x38 ));
      if (iVar1 != 0) {
         pcVar2 = *(char**)( param_1 + 0x28 );
         iVar1 = CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0x38 ));
         if (iVar1 != 0) {
            if (pcVar2 == (char*)0x0) {
               iVar1 = evp_pkey_copy_downgraded(&local_28, param_1);
               if (( iVar1 != 0 ) && ( iVar1 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0x38 )) ),iVar1 != 0) {
                  pcVar3 = *(char**)( param_1 + 0x28 );
                  if (pcVar3 == (char*)0x0) {
                     pcVar3 = (local_28->pkey).ptr;
                     *(char**)( param_1 + 0x28 ) = pcVar3;
                     (local_28->pkey).ptr = (char*)0x0;
                  }
                  iVar1 = CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0x38 ));
                  if (iVar1 != 0) {
                     pcVar2 = pcVar3;
                  }
               }
               EVP_PKEY_free(local_28);
            }
            goto LAB_00103f4f;
         }
      }
   }
   pcVar2 = (char*)0x0;
   LAB_00103f4f:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pcVar2;
}undefined8 EVP_PKEY_get0_hmac(int *param_1, long *param_2) {
   undefined8 uVar1;
   int *piVar2;
   if (*param_1 == 0x357) {
      piVar2 = (int*)evp_pkey_get_legacy();
      if (piVar2 != (int*)0x0) {
         uVar1 = *(undefined8*)( piVar2 + 2 );
         *param_2 = (long)*piVar2;
         return uVar1;
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x345, "EVP_PKEY_get0_hmac");
      ERR_set_error(6, 0xae, 0);
   }
   return 0;
}undefined8 EVP_PKEY_get0_poly1305(int *param_1, long *param_2) {
   undefined8 uVar1;
   int *piVar2;
   if (*param_1 == 0x425) {
      piVar2 = (int*)evp_pkey_get_legacy();
      if (piVar2 != (int*)0x0) {
         uVar1 = *(undefined8*)( piVar2 + 2 );
         *param_2 = (long)*piVar2;
         return uVar1;
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x355, "EVP_PKEY_get0_poly1305");
      ERR_set_error(6, 0xa4, 0);
   }
   return 0;
}undefined8 EVP_PKEY_get0_siphash(int *param_1, long *param_2) {
   undefined8 uVar1;
   int *piVar2;
   if (*param_1 == 0x426) {
      piVar2 = (int*)evp_pkey_get_legacy();
      if (piVar2 != (int*)0x0) {
         uVar1 = *(undefined8*)( piVar2 + 2 );
         *param_2 = (long)*piVar2;
         return uVar1;
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x367, "EVP_PKEY_get0_siphash");
      ERR_set_error(6, 0xaf, 0);
   }
   return 0;
}dsa_st *EVP_PKEY_get1_DSA(EVP_PKEY *pkey) {
   int iVar1;
   DSA *r;
   if (pkey->type == 0x74) {
      r = (DSA*)evp_pkey_get_legacy();
      if (r != (DSA*)0x0) {
         iVar1 = DSA_up_ref(r);
         if (iVar1 != 0) {
            return r;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x377, "evp_pkey_get0_DSA_int");
      ERR_set_error(6, 0x81, 0);
   }
   return (dsa_st*)0x0;
}long ossl_evp_pkey_get1_ED448(undefined8 param_1) {
   int iVar1;
   long lVar2;
   iVar1 = EVP_PKEY_get_base_id();
   if (iVar1 == 0x440) {
      lVar2 = evp_pkey_get_legacy(param_1);
      if (lVar2 != 0) {
         iVar1 = ossl_ecx_key_up_ref(lVar2);
         if (iVar1 != 0) {
            return lVar2;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x39f, "evp_pkey_get0_ECX_KEY");
      ERR_set_error(6, 0xdb, 0);
   }
   return 0;
}undefined8 evp_pkey_get0_DH_int(int *param_1) {
   undefined8 uVar1;
   if (( *param_1 != 0x1c ) && ( *param_1 != 0x398 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x3e6, "evp_pkey_get0_DH_int");
      ERR_set_error(6, 0x80, 0);
      return 0;
   }
   uVar1 = evp_pkey_get_legacy();
   return uVar1;
}void EVP_PKEY_get0_DH(void) {
   evp_pkey_get0_DH_int();
   return;
}dh_st *EVP_PKEY_get1_DH(EVP_PKEY *pkey) {
   int iVar1;
   DH *dh;
   dh = (DH*)evp_pkey_get0_DH_int();
   if (dh != (DH*)0x0) {
      iVar1 = DH_up_ref(dh);
      if (iVar1 != 0) {
         return dh;
      }
   }
   return (dh_st*)0x0;
}undefined8 EVP_PKEY_get0_DSA(int *param_1) {
   undefined8 uVar1;
   if (*param_1 == 0x74) {
      uVar1 = evp_pkey_get_legacy();
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x377, "evp_pkey_get0_DSA_int");
   ERR_set_error(6, 0x81, 0);
   return 0;
}long ossl_evp_pkey_get1_X25519(undefined8 param_1) {
   int iVar1;
   long lVar2;
   iVar1 = EVP_PKEY_get_base_id();
   if (iVar1 == 0x40a) {
      lVar2 = evp_pkey_get_legacy(param_1);
      if (lVar2 != 0) {
         iVar1 = ossl_ecx_key_up_ref(lVar2);
         if (iVar1 != 0) {
            return lVar2;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x39f, "evp_pkey_get0_ECX_KEY");
      ERR_set_error(6, 0xdb, 0);
   }
   return 0;
}long ossl_evp_pkey_get1_X448(undefined8 param_1) {
   int iVar1;
   long lVar2;
   iVar1 = EVP_PKEY_get_base_id();
   if (iVar1 == 0x40b) {
      lVar2 = evp_pkey_get_legacy(param_1);
      if (lVar2 != 0) {
         iVar1 = ossl_ecx_key_up_ref(lVar2);
         if (iVar1 != 0) {
            return lVar2;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x39f, "evp_pkey_get0_ECX_KEY");
      ERR_set_error(6, 0xdb, 0);
   }
   return 0;
}long ossl_evp_pkey_get1_ED25519(undefined8 param_1) {
   int iVar1;
   long lVar2;
   iVar1 = EVP_PKEY_get_base_id();
   if (iVar1 == 0x43f) {
      lVar2 = evp_pkey_get_legacy(param_1);
      if (lVar2 != 0) {
         iVar1 = ossl_ecx_key_up_ref(lVar2);
         if (iVar1 != 0) {
            return lVar2;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/p_lib.c", 0x39f, "evp_pkey_get0_ECX_KEY");
      ERR_set_error(6, 0xdb, 0);
   }
   return 0;
}undefined8 EVP_PKEY_settable_params(long param_1) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x60 ) != 0 )) {
      uVar1 = EVP_KEYMGMT_settable_params();
      return uVar1;
   }
   return 0;
}undefined8 EVP_PKEY_set_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x60 ) != 0 )) {
      *(long*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + 1;
      uVar1 = evp_keymgmt_set_params(*(long*)( param_1 + 0x60 ), *(undefined8*)( param_1 + 0x68 ), param_2);
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x993, "EVP_PKEY_set_params");
   ERR_set_error(6, 0xa3, 0);
   return 0;
}undefined8 EVP_PKEY_set_int_param(undefined8 param_1, long param_2, undefined4 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   local_7c = param_3;
   if (param_2 != 0) {
      OSSL_PARAM_construct_int(&local_b8, param_2, &local_7c);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_set_params(param_1, &local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_set_size_t_param(undefined8 param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   local_80 = param_3;
   if (param_2 != 0) {
      OSSL_PARAM_construct_size_t(&local_b8, param_2, &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_set_params(param_1, &local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_set_bn_param(long param_1, long param_2, BIGNUM *param_3) {
   int iVar1;
   undefined8 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 local_8b8;
   undefined8 uStack_8b0;
   undefined8 local_8a8;
   undefined8 uStack_8a0;
   undefined8 local_898;
   undefined8 local_888;
   undefined8 uStack_880;
   undefined8 local_878;
   undefined8 uStack_870;
   undefined8 local_868;
   undefined8 local_860;
   undefined8 uStack_858;
   undefined8 local_850;
   undefined8 uStack_848;
   undefined8 local_840;
   undefined1 local_838[2056];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_3 != (BIGNUM*)0x0 && param_1 != 0 ) && ( param_2 != 0 ) ) && ( ( *(long*)( param_1 + 0x20 ) != 0 || ( *(long*)( param_1 + 0x68 ) != 0 ) ) )) {
      iVar1 = BN_num_bits(param_3);
      iVar3 = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
         iVar3 = iVar1 + 7;
      }
      if (iVar1 < 0x4001) {
         iVar1 = BN_bn2nativepad(param_3, local_838, iVar3 >> 3);
         if (-1 < iVar1) {
            OSSL_PARAM_construct_BN(&local_8b8, param_2, local_838, (long)( iVar3 >> 3 ));
            local_868 = local_898;
            local_888 = local_8b8;
            uStack_880 = uStack_8b0;
            local_878 = local_8a8;
            uStack_870 = uStack_8a0;
            OSSL_PARAM_construct_end(&local_8b8);
            local_860 = local_8b8;
            uStack_858 = uStack_8b0;
            local_840 = local_898;
            local_850 = local_8a8;
            uStack_848 = uStack_8a0;
            uVar2 = EVP_PKEY_set_params(param_1, &local_888);
            goto LAB_00104792;
         }
      }
   }
   uVar2 = 0;
   LAB_00104792:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 EVP_PKEY_set_utf8_string_param(undefined8 param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (param_2 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_a8, param_2, param_3, 0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar1 = EVP_PKEY_set_params(param_1, &local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_set_octet_string_param(undefined8 param_1, long param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (param_2 != 0) {
      OSSL_PARAM_construct_octet_string(&local_a8);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar1 = EVP_PKEY_set_params(param_1, &local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong EVP_PKEY_set1_encoded_public_key(long param_1, undefined8 param_2, ulong param_3) {
   code *pcVar1;
   int iVar2;
   ulong uVar3;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x60 ) == 0) {
      if (( ( param_3 < 0x80000000 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0xb0 ) ),pcVar1 != (code*)0x0) {
         iVar2 = ( *pcVar1 )(param_1, 9, param_3, param_2);
         return ( ulong )(0 < iVar2);
      }
      return 0;
   }
   uVar3 = EVP_PKEY_set_octet_string_param(param_1, "encoded-pub-key", param_2, param_3);
   return uVar3;
}undefined8 EVP_PKEY_gettable_params(long param_1) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x60 ) != 0 )) {
      uVar1 = EVP_KEYMGMT_gettable_params();
      return uVar1;
   }
   return 0;
}bool EVP_PKEY_get_params(int *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (int*)0x0) {
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = evp_keymgmt_get_params(*(long*)( param_1 + 0x18 ), *(undefined8*)( param_1 + 0x1a ), param_2);
         return 0 < iVar1;
      }
      if (*param_1 != 0) {
         iVar1 = evp_pkey_get_params_to_ctrl();
         return 0 < iVar1;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/evp/p_lib.c", 0x9a8, "EVP_PKEY_get_params");
   ERR_set_error(6, 0xa3, 0);
   return false;
}undefined4 EVP_PKEY_get_bn_param(undefined8 param_1, long param_2, long param_3) {
   size_t sVar1;
   int iVar2;
   undefined4 uVar3;
   void *ptr;
   long lVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_8c8;
   undefined8 uStack_8c0;
   void *local_8b8;
   size_t sStack_8b0;
   size_t local_8a8;
   undefined8 local_898;
   undefined8 uStack_890;
   void *local_888;
   size_t sStack_880;
   size_t local_878;
   undefined8 local_870;
   undefined8 uStack_868;
   void *local_860;
   size_t sStack_858;
   size_t local_850;
   undefined8 local_848[257];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      puVar5 = local_848;
      for (lVar4 = 0x100; lVar4 != 0; lVar4 = lVar4 + -1) {
         *puVar5 = 0;
         puVar5 = puVar5 + 1;
      }
      OSSL_PARAM_construct_BN(&local_8c8, param_2, local_848, 0x800);
      local_878 = local_8a8;
      local_898 = local_8c8;
      uStack_890 = uStack_8c0;
      local_888 = local_8b8;
      sStack_880 = sStack_8b0;
      OSSL_PARAM_construct_end(&local_8c8);
      local_870 = local_8c8;
      uStack_868 = uStack_8c0;
      local_850 = local_8a8;
      local_860 = local_8b8;
      sStack_858 = sStack_8b0;
      iVar2 = EVP_PKEY_get_params(param_1, &local_898);
      if (iVar2 != 0) {
         iVar2 = OSSL_PARAM_modified(&local_898);
         if (iVar2 == 0) {
            iVar2 = OSSL_PARAM_modified(&local_898);
            uVar3 = 0;
         } else {
            uVar3 = OSSL_PARAM_get_BN(&local_898, param_3);
            iVar2 = OSSL_PARAM_modified(&local_898);
         }
         if (iVar2 != 0) {
            OPENSSL_cleanse(local_848, sStack_880);
         }
         goto LAB_00104b83;
      }
      iVar2 = OSSL_PARAM_modified(&local_898);
      sVar1 = local_878;
      if (( ( iVar2 != 0 ) && ( local_878 != 0 ) ) && ( ptr = (void*)CRYPTO_zalloc(local_878, "crypto/evp/p_lib.c", 0x8c9) ),ptr != (void*)0x0) {
         sStack_880 = sVar1;
         local_888 = ptr;
         iVar2 = EVP_PKEY_get_params(param_1, &local_898);
         uVar3 = 0;
         if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
            uVar3 = OSSL_PARAM_get_BN(&local_898, param_3);
         }
         iVar2 = OSSL_PARAM_modified(&local_898);
         if (iVar2 == 0) {
            CRYPTO_free(ptr);
         } else {
            CRYPTO_clear_free(ptr, sVar1, "crypto/evp/p_lib.c", 0x8d9);
         }
         goto LAB_00104b83;
      }
   }
   uVar3 = 0;
   LAB_00104b83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong EVP_PKEY_get_octet_string_param(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 *param_5) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 0;
   if (param_2 != 0) {
      OSSL_PARAM_construct_octet_string(&local_a8);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar2 = EVP_PKEY_get_params(param_1, &local_78);
      if ((int)uVar2 != 0) {
         iVar1 = OSSL_PARAM_modified(&local_78);
         if (( param_5 == (undefined8*)0x0 ) || ( iVar1 == 0 )) {
            uVar2 = ( ulong )(iVar1 != 0);
         } else {
            *param_5 = local_58;
            uVar2 = 1;
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long EVP_PKEY_get1_encoded_public_key(long param_1, undefined8 *param_2) {
   code *pcVar1;
   int iVar2;
   void *ptr;
   long lVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0x60 ) == 0) {
         if (( *(long*)( param_1 + 8 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0xb0 ) ),pcVar1 != (code*)0x0) {
            iVar2 = ( *pcVar1 )(param_1, 10, 0, param_2);
            if (0 < iVar2) {
               lVar3 = (long)iVar2;
               goto LAB_00104e27;
            }
         }
      } else {
         local_38 = -1;
         EVP_PKEY_get_octet_string_param(param_1, "encoded-pub-key", 0, 0, &local_38);
         if (local_38 != -1) {
            *param_2 = 0;
            ptr = CRYPTO_malloc((int)local_38, "crypto/evp/p_lib.c", 0x5c5);
            if (ptr != (void*)0x0) {
               iVar2 = EVP_PKEY_get_octet_string_param(param_1, "encoded-pub-key", ptr, local_38, 0);
               if (iVar2 != 0) {
                  *param_2 = ptr;
                  lVar3 = local_38;
                  goto LAB_00104e27;
               }
               CRYPTO_free(ptr);
            }
         }
      }
   }
   lVar3 = 0;
   LAB_00104e27:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_get_utf8_string_param(undefined8 param_1, long param_2, long param_3, long param_4, long *param_5) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   long local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   long local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_b8);
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
      iVar1 = EVP_PKEY_get_params(param_1, &local_88);
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
         if (param_5 == (long*)0x0) {
            if (iVar1 == 0) goto LAB_00104f2c;
         } else {
            *param_5 = local_68;
         }
         if (param_4 != local_68) {
            if (param_3 != 0) {
               *(undefined1*)( param_3 + local_68 ) = 0;
            }
            uVar2 = 1;
            goto LAB_00104f2e;
         }
      }
   }
   LAB_00104f2c:uVar2 = 0;
   LAB_00104f2e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}void EVP_PKEY_get_group_name(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   EVP_PKEY_get_utf8_string_param(param_1, "group", param_2, param_3, param_4);
   return;
}bool EVP_PKEY_get_int_param(undefined8 param_1, long param_2) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      OSSL_PARAM_construct_int(&local_a8);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_get_params(param_1, &local_78);
      if (iVar1 != 0) {
         iVar1 = OSSL_PARAM_modified(&local_78);
         bVar2 = iVar1 != 0;
         goto LAB_0010504f;
      }
   }
   bVar2 = false;
   LAB_0010504f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool EVP_PKEY_get_size_t_param(undefined8 param_1, long param_2) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      OSSL_PARAM_construct_size_t(&local_a8);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_get_params(param_1, &local_78);
      if (iVar1 != 0) {
         iVar1 = OSSL_PARAM_modified(&local_78);
         bVar2 = iVar1 != 0;
         goto LAB_0010511f;
      }
   }
   bVar2 = false;
   LAB_0010511f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}point_conversion_form_t EVP_PKEY_get_ec_point_conv_form(long param_1) {
   int iVar1;
   point_conversion_form_t pVar2;
   EC_KEY *key;
   long in_FS_OFFSET;
   undefined1 local_70[8];
   int local_68;
   undefined1 uStack_64;
   undefined2 uStack_63;
   int iStack_61;
   undefined2 uStack_5d;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_001051f0:pVar2 = 0;
   } else {
      if (( *(long*)( param_1 + 0x60 ) == 0 ) || ( *(long*)( param_1 + 0x68 ) == 0 )) {
         key = (EC_KEY*)EVP_PKEY_get0_EC_KEY();
         if (key != (EC_KEY*)0x0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               pVar2 = EC_KEY_get_conv_form(key);
               return pVar2;
            }
            goto LAB_0010528a;
         }
         goto LAB_001051f0;
      }
      iVar1 = EVP_PKEY_get_utf8_string_param(param_1, "point-format", &local_68, 0x50, local_70);
      if (iVar1 == 0) goto LAB_001051f0;
      if (( CONCAT17((undefined1)iStack_61, CONCAT25(uStack_63, CONCAT14(uStack_64, local_68))) == 0x6572706d6f636e75 ) && ( CONCAT26(uStack_5d, CONCAT42(iStack_61, uStack_63)) == 0x64657373657270 )) {
         pVar2 = POINT_CONVERSION_UNCOMPRESSED;
      } else if (( CONCAT17((undefined1)iStack_61, CONCAT25(uStack_63, CONCAT14(uStack_64, local_68))) != 0x73736572706d6f63 ) || ( pVar2 = iStack_61 != 0x646573 )) {
         if (( local_68 != 0x72627968 ) || ( CONCAT22(uStack_63, CONCAT11(uStack_64, 0x72)) != 0x646972 )) goto LAB_001051f0;
         pVar2 = POINT_CONVERSION_HYBRID;
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pVar2;
   }
   LAB_0010528a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined8 EVP_PKEY_get_field_type(long param_1) {
   int iVar1;
   undefined8 uVar2;
   EC_KEY *key;
   EC_GROUP *pEVar3;
   long in_FS_OFFSET;
   undefined1 local_70[8];
   long local_68;
   int local_60;
   undefined4 uStack_5c;
   undefined1 uStack_58;
   long local_57;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_0010533a:uVar2 = 0;
   } else {
      if (( *(long*)( param_1 + 0x60 ) == 0 ) || ( *(long*)( param_1 + 0x68 ) == 0 )) {
         key = (EC_KEY*)EVP_PKEY_get0_EC_KEY();
         if (( key != (EC_KEY*)0x0 ) && ( pEVar3 = EC_KEY_get0_group(key) ),pEVar3 != (EC_GROUP*)0x0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar2 = EC_GROUP_get_field_type(pEVar3);
               return uVar2;
            }
            goto LAB_001053b9;
         }
         goto LAB_0010533a;
      }
      iVar1 = EVP_PKEY_get_utf8_string_param(param_1, "field-type", &local_68, 0x50, local_70);
      if (iVar1 == 0) goto LAB_0010533a;
      if (( local_68 != 0x69662d656d697270 ) || ( uVar2 = local_60 != 0x646c65 )) {
         if (( local_68 == 0x6574636172616863 && CONCAT44(uStack_5c, local_60) == 0x742d636974736972 ) && ( CONCAT17(uStack_58, CONCAT43(uStack_5c, local_60._1_3_)) == 0x77742d6369747369 && local_57 == 0x646c6569662d6f )) goto LAB_0010533a;
         uVar2 = 0x197;
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   LAB_001053b9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
