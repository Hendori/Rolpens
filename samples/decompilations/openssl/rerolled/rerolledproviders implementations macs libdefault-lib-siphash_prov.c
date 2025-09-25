undefined1 *siphash_gettable_ctx_params(void) {
   return known_gettable_ctx_params_0;
}
undefined1 *siphash_settable_ctx_params(void) {
   return known_settable_ctx_params_1;
}
bool siphash_get_ctx_params(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   lVar2 = OSSL_PARAM_locate(param_2, &_LC0);
   if (lVar2 != 0) {
      uVar3 = SipHash_hash_size(param_1 + 8);
      iVar1 = OSSL_PARAM_set_size_t(lVar2, uVar3);
      if (iVar1 == 0) {
         return false;
      }

   }

   lVar2 = OSSL_PARAM_locate(param_2, "c-rounds");
   if (lVar2 != 0) {
      iVar1 = *(int*)( param_1 + 0x88 );
      if (*(int*)( param_1 + 0x88 ) == 0) {
         iVar1 = 2;
      }

      iVar1 = OSSL_PARAM_set_uint(lVar2, iVar1);
      if (iVar1 == 0) {
         return false;
      }

   }

   lVar2 = OSSL_PARAM_locate(param_2, "d-rounds");
   bVar4 = true;
   if (lVar2 != 0) {
      iVar1 = *(int*)( param_1 + 0x8c );
      if (*(int*)( param_1 + 0x8c ) == 0) {
         iVar1 = 4;
      }

      iVar1 = OSSL_PARAM_set_uint(lVar2, iVar1);
      bVar4 = iVar1 != 0;
   }

   return bVar4;
}
undefined8 siphash_final(long param_1, undefined8 param_2, ulong *param_3, ulong param_4) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   uVar2 = SipHash_hash_size(param_1 + 8);
   iVar1 = ossl_prov_is_running();
   if (( uVar2 <= param_4 ) && ( iVar1 != 0 )) {
      *param_3 = uVar2;
      uVar3 = SipHash_Final(param_1 + 8, param_2, uVar2);
      return uVar3;
   }

   return 0;
}
undefined8 siphash_update(long param_1, undefined8 param_2, long param_3) {
   if (param_3 == 0) {
      return 1;
   }

   SipHash_Update(param_1 + 8);
   return 1;
}
void siphash_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}
undefined8 *siphash_dup(undefined8 *param_1) {
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
   int iVar15;
   undefined8 *puVar16;
   iVar15 = ossl_prov_is_running();
   puVar16 = (undefined8*)0x0;
   if (iVar15 != 0) {
      puVar16 = (undefined8*)CRYPTO_malloc(0x90, "providers/implementations/macs/siphash_prov.c", 0x50);
      if (puVar16 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         uVar2 = param_1[2];
         uVar3 = param_1[3];
         uVar4 = param_1[4];
         uVar5 = param_1[5];
         uVar6 = param_1[6];
         uVar7 = param_1[7];
         uVar8 = param_1[8];
         uVar9 = param_1[9];
         uVar10 = param_1[10];
         uVar11 = param_1[0xb];
         *puVar16 = *param_1;
         puVar16[1] = uVar1;
         uVar1 = param_1[0xc];
         uVar12 = param_1[0xd];
         uVar13 = param_1[0xe];
         uVar14 = param_1[0xf];
         puVar16[2] = uVar2;
         puVar16[3] = uVar3;
         uVar2 = param_1[0x10];
         uVar3 = param_1[0x11];
         puVar16[4] = uVar4;
         puVar16[5] = uVar5;
         puVar16[6] = uVar6;
         puVar16[7] = uVar7;
         puVar16[8] = uVar8;
         puVar16[9] = uVar9;
         puVar16[10] = uVar10;
         puVar16[0xb] = uVar11;
         puVar16[0xc] = uVar1;
         puVar16[0xd] = uVar12;
         puVar16[0xe] = uVar13;
         puVar16[0xf] = uVar14;
         puVar16[0x10] = uVar2;
         puVar16[0x11] = uVar3;
      }

   }

   return puVar16;
}
undefined8 *siphash_new(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x90, "providers/implementations/macs/siphash_prov.c", 0x3e);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
      }

   }

   return puVar2;
}
undefined8 siphash_set_params(long param_1, long *param_2) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == (long*)0x0 ) || ( *param_2 == 0 )) {
      LAB_001003d0:uVar4 = 1;
   }
 else {
      lVar3 = OSSL_PARAM_locate_const(param_2, &_LC0);
      if (lVar3 == 0) {
         LAB_001002fa:lVar3 = OSSL_PARAM_locate_const(param_2, "c-rounds");
         if (lVar3 != 0) {
            iVar2 = OSSL_PARAM_get_uint(lVar3, param_1 + 0x88);
            if (iVar2 == 0) goto LAB_001002b6;
         }

         lVar3 = OSSL_PARAM_locate_const(param_2, "d-rounds");
         if (lVar3 != 0) {
            iVar2 = OSSL_PARAM_get_uint(lVar3, param_1 + 0x8c);
            if (iVar2 == 0) goto LAB_001002b6;
         }

         lVar3 = OSSL_PARAM_locate_const(param_2, &_LC4);
         if (lVar3 == 0) goto LAB_001003d0;
         if (( *(int*)( lVar3 + 8 ) == 5 ) && ( *(long*)( lVar3 + 0x18 ) == 0x10 )) {
            iVar2 = *(int*)( param_1 + 0x8c );
            if (*(int*)( param_1 + 0x8c ) == 0) {
               iVar2 = 4;
            }

            iVar1 = *(int*)( param_1 + 0x88 );
            if (*(int*)( param_1 + 0x88 ) == 0) {
               iVar1 = 2;
            }

            iVar2 = SipHash_Init(param_1 + 8, *(undefined8*)( lVar3 + 0x10 ), iVar1, iVar2);
            if (iVar2 != 0) {
               for (int i = 0; i < 8; i++) {
                  *(undefined8*)( param_1 + ( 8*i + 72 ) ) = *(undefined8*)( param_1 + ( 8*i + 8 ) );
               }

               goto LAB_001003d0;
            }

         }

      }
 else {
         iVar2 = OSSL_PARAM_get_size_t(lVar3, &local_28);
         if (iVar2 != 0) {
            iVar2 = SipHash_set_hash_size(param_1 + 8, local_28);
            if (iVar2 != 0) {
               iVar2 = SipHash_set_hash_size(param_1 + 0x48, local_28);
               if (iVar2 != 0) goto LAB_001002fa;
            }

         }

      }

      LAB_001002b6:uVar4 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 siphash_init(long param_1, long param_2, long param_3, long *param_4) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      if (( param_4 == (long*)0x0 ) || ( *param_4 == 0 )) {
         LAB_00100570:if (param_2 == 0) {
            uVar4 = 1;
            for (int i = 0; i < 8; i++) {
               *(undefined8*)( param_1 + ( 8*i + 8 ) ) = *(undefined8*)( param_1 + ( 8*i + 72 ) );
            }

            goto LAB_00100415;
         }

         if (param_3 == 0x10) {
            iVar2 = *(int*)( param_1 + 0x8c );
            if (*(int*)( param_1 + 0x8c ) == 0) {
               iVar2 = 4;
            }

            iVar1 = *(int*)( param_1 + 0x88 );
            if (*(int*)( param_1 + 0x88 ) == 0) {
               iVar1 = 2;
            }

            uVar4 = SipHash_Init(param_1 + 8, param_2, iVar1, iVar2);
            if ((int)uVar4 != 0) {
               for (int i = 0; i < 8; i++) {
                  *(undefined8*)( param_1 + ( 8*i + 72 ) ) = *(undefined8*)( param_1 + ( 8*i + 8 ) );
               }

            }

            goto LAB_00100415;
         }

      }
 else {
         lVar3 = OSSL_PARAM_locate_const(param_4, &_LC0);
         if (lVar3 == 0) {
            LAB_00100491:lVar3 = OSSL_PARAM_locate_const(param_4, "c-rounds");
            if (lVar3 != 0) {
               iVar2 = OSSL_PARAM_get_uint(lVar3, param_1 + 0x88);
               if (iVar2 == 0) goto LAB_00100413;
            }

            lVar3 = OSSL_PARAM_locate_const(param_4, "d-rounds");
            if (lVar3 != 0) {
               iVar2 = OSSL_PARAM_get_uint(lVar3, param_1 + 0x8c);
               if (iVar2 == 0) goto LAB_00100413;
            }

            lVar3 = OSSL_PARAM_locate_const(param_4, &_LC4);
            if (lVar3 == 0) goto LAB_00100570;
            if (( *(int*)( lVar3 + 8 ) == 5 ) && ( *(long*)( lVar3 + 0x18 ) == 0x10 )) {
               iVar2 = *(int*)( param_1 + 0x8c );
               if (*(int*)( param_1 + 0x8c ) == 0) {
                  iVar2 = 4;
               }

               iVar1 = *(int*)( param_1 + 0x88 );
               if (*(int*)( param_1 + 0x88 ) == 0) {
                  iVar1 = 2;
               }

               iVar2 = SipHash_Init(param_1 + 8, *(undefined8*)( lVar3 + 0x10 ), iVar1, iVar2);
               if (iVar2 != 0) {
                  for (int i = 0; i < 8; i++) {
                     *(undefined8*)( param_1 + ( 8*i + 72 ) ) = *(undefined8*)( param_1 + ( 8*i + 8 ) );
                  }

                  goto LAB_00100570;
               }

            }

         }
 else {
            iVar2 = OSSL_PARAM_get_size_t(lVar3, &local_38);
            if (iVar2 != 0) {
               iVar2 = SipHash_set_hash_size(param_1 + 8, local_38);
               if (iVar2 != 0) {
                  iVar2 = SipHash_set_hash_size(param_1 + 0x48, local_38);
                  if (iVar2 != 0) goto LAB_00100491;
               }

            }

         }

      }

   }

   LAB_00100413:uVar4 = 0;
   LAB_00100415:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

