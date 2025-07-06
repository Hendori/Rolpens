undefined1 *EC_KEY_OpenSSL(void) {
   return openssl_ec_key_method;
}undefined *EC_KEY_get_default_method(void) {
   return default_ec_key_meth;
}void EC_KEY_set_default_method(undefined1 *param_1) {
   if (param_1 == (undefined*)0x0) {
      param_1 = openssl_ec_key_method;
   }
   default_ec_key_meth = param_1;
   return;
}undefined8 EC_KEY_get_method(undefined8 *param_1) {
   return *param_1;
}undefined8 EC_KEY_set_method(long *param_1, long param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x18 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x18 ) )();
   }
   ENGINE_finish((ENGINE*)param_1[1]);
   UNRECOVERED_JUMPTABLE = *(code**)( param_2 + 0x10 );
   param_1[1] = 0;
   *param_1 = param_2;
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_142 = 0; i_142 < 2; i_142++) {
         /* WARNING: Could not recover jumptable at 0x00100094. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(param_1);
      return uVar1;
   }
   return 1;
}EC_KEY *ossl_ec_key_new_method_int(undefined8 param_1, char *param_2, ENGINE *param_3) {
   int iVar1;
   EC_KEY *key;
   char *pcVar2;
   undefined8 uVar3;
   long lVar4;
   key = (EC_KEY*)CRYPTO_zalloc(0x68, "crypto/ec/ec_kmeth.c", 0x54);
   if (key == (EC_KEY*)0x0) {
      return (EC_KEY*)0x0;
   }
   LOCK();
   *(undefined4*)( key + 0x38 ) = 1;
   UNLOCK();
   *(undefined8*)( key + 0x50 ) = param_1;
   if (param_2 != (char*)0x0) {
      pcVar2 = CRYPTO_strdup(param_2, "crypto/ec/ec_kmeth.c", 0x60);
      *(char**)( key + 0x58 ) = pcVar2;
      if (pcVar2 == (char*)0x0) goto LAB_001001dc;
   }
   uVar3 = EC_KEY_get_default_method();
   *(undefined8*)key = uVar3;
   if (param_3 == (ENGINE*)0x0) {
      param_3 = (ENGINE*)ENGINE_get_default_EC();
      *(ENGINE**)( key + 8 ) = param_3;
      if (param_3 != (ENGINE*)0x0) goto LAB_00100135;
      LAB_00100149:*(undefined4*)( key + 0x10 ) = 1;
      *(undefined4*)( key + 0x34 ) = 4;
      iVar1 = CRYPTO_new_ex_data(8, key, (CRYPTO_EX_DATA*)( key + 0x40 ));
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/ec/ec_kmeth.c", 0x7e, "ossl_ec_key_new_method_int");
         ERR_set_error(0x10, 0x8000f, 0);
      } else {
         if (( *(code**)( *(long*)key + 0x10 ) == (code*)0x0 ) || ( iVar1 = iVar1 != 0 )) {
            return key;
         }
         ERR_new();
         ERR_set_debug("crypto/ec/ec_kmeth.c", 0x84, "ossl_ec_key_new_method_int");
         ERR_set_error(0x10, 0xc0105, 0);
      }
   } else {
      iVar1 = ENGINE_init(param_3);
      if (iVar1 == 0) {
         ERR_new();
         uVar3 = 0x69;
      } else {
         *(ENGINE**)( key + 8 ) = param_3;
         LAB_00100135:lVar4 = ENGINE_get_EC(param_3);
         *(long*)key = lVar4;
         if (lVar4 != 0) goto LAB_00100149;
         ERR_new();
         uVar3 = 0x72;
      }
      ERR_set_debug("crypto/ec/ec_kmeth.c", uVar3, "ossl_ec_key_new_method_int");
      ERR_set_error(0x10, 0x80026, 0);
   }
   LAB_001001dc:EC_KEY_free(key);
   return (EC_KEY*)0x0;
}void EC_KEY_new_method(undefined8 param_1) {
   ossl_ec_key_new_method_int(0, 0, param_1);
   return;
}int ECDH_compute_key(void *out, size_t outlen, EC_POINT *pub_key, EC_KEY *ecdh, KDF *KDF) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   ulong local_50[2];
   void *local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (void*)0x0;
   local_50[0] = outlen;
   if (*(code**)( *(long*)ecdh + 0x48 ) == (code*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_kmeth.c", 0x9d, "ECDH_compute_key");
      ERR_set_error(0x10, 0x98, 0);
      iVar1 = 0;
   } else {
      if (outlen < 0x80000000) {
         iVar1 = ( **(code**)( *(long*)ecdh + 0x48 ) )(&local_40, &local_38);
         pvVar2 = local_40;
         if (iVar1 != 0) {
            if (KDF == (KDF*)0x0) {
               if (local_38 < local_50[0]) {
                  local_50[0] = local_38;
               }
               memcpy(out, local_40, local_50[0]);
            } else {
               ( *KDF )(local_40, local_38, out, local_50);
               pvVar2 = local_40;
            }
            CRYPTO_clear_free(pvVar2, local_38, "crypto/ec/ec_kmeth.c", 0xad);
            iVar1 = (int)local_50[0];
            goto LAB_0010033d;
         }
      } else {
         ERR_new();
         ERR_set_debug("crypto/ec/ec_kmeth.c", 0xa1, "ECDH_compute_key");
         ERR_set_error(0x10, 0xa1, 0);
      }
      iVar1 = 0;
   }
   LAB_0010033d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EC_KEY_METHOD_new(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 *puVar15;
   puVar15 = (undefined8*)CRYPTO_zalloc(0x78, "crypto/ec/ec_kmeth.c", 0xb3);
   if (puVar15 != (undefined8*)0x0) {
      if (param_1 != (undefined8*)0x0) {
         uVar1 = *param_1;
         uVar2 = param_1[1];
         uVar3 = param_1[2];
         uVar4 = param_1[3];
         uVar5 = param_1[4];
         uVar6 = param_1[5];
         uVar7 = param_1[6];
         uVar8 = param_1[7];
         uVar9 = param_1[8];
         uVar10 = param_1[9];
         puVar15[0xe] = param_1[0xe];
         uVar11 = param_1[10];
         uVar12 = param_1[0xb];
         uVar13 = param_1[0xc];
         uVar14 = param_1[0xd];
         *puVar15 = uVar1;
         puVar15[1] = uVar2;
         puVar15[2] = uVar3;
         puVar15[3] = uVar4;
         puVar15[4] = uVar5;
         puVar15[5] = uVar6;
         puVar15[6] = uVar7;
         puVar15[7] = uVar8;
         puVar15[8] = uVar9;
         puVar15[9] = uVar10;
         puVar15[10] = uVar11;
         puVar15[0xb] = uVar12;
         puVar15[0xc] = uVar13;
         puVar15[0xd] = uVar14;
      }
      *(uint*)( puVar15 + 1 ) = *(uint*)( puVar15 + 1 ) | 1;
   }
   return;
}void EC_KEY_METHOD_free(void *param_1) {
   if (( *(byte*)( (long)param_1 + 8 ) & 1 ) == 0) {
      return;
   }
   CRYPTO_free(param_1);
   return;
}void EC_KEY_METHOD_set_init(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   *(undefined8*)( param_1 + 0x10 ) = param_2;
   *(undefined8*)( param_1 + 0x18 ) = param_3;
   *(undefined8*)( param_1 + 0x20 ) = param_4;
   *(undefined8*)( param_1 + 0x28 ) = param_5;
   *(undefined8*)( param_1 + 0x30 ) = param_6;
   *(undefined8*)( param_1 + 0x38 ) = param_7;
   return;
}void EC_KEY_METHOD_set_keygen(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x40 ) = param_2;
   return;
}void EC_KEY_METHOD_set_compute_key(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x48 ) = param_2;
   return;
}void EC_KEY_METHOD_set_sign(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0x50 ) = param_2;
   *(undefined8*)( param_1 + 0x58 ) = param_3;
   *(undefined8*)( param_1 + 0x60 ) = param_4;
   return;
}void EC_KEY_METHOD_set_verify(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x68 ) = param_2;
   *(undefined8*)( param_1 + 0x70 ) = param_3;
   return;
}void EC_KEY_METHOD_get_init(long param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4, undefined8 *param_5, undefined8 *param_6, undefined8 *param_7) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x10 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x18 );
   }
   if (param_4 != (undefined8*)0x0) {
      *param_4 = *(undefined8*)( param_1 + 0x20 );
   }
   if (param_5 != (undefined8*)0x0) {
      *param_5 = *(undefined8*)( param_1 + 0x28 );
   }
   if (param_6 != (undefined8*)0x0) {
      *param_6 = *(undefined8*)( param_1 + 0x30 );
   }
   if (param_7 != (undefined8*)0x0) {
      *param_7 = *(undefined8*)( param_1 + 0x38 );
   }
   return;
}void EC_KEY_METHOD_get_keygen(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x40 );
   }
   return;
}void EC_KEY_METHOD_get_compute_key(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x48 );
   }
   return;
}void EC_KEY_METHOD_get_sign(long param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x50 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x58 );
   }
   if (param_4 != (undefined8*)0x0) {
      *param_4 = *(undefined8*)( param_1 + 0x60 );
   }
   return;
}void EC_KEY_METHOD_get_verify(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x68 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x70 );
   }
   return;
}
