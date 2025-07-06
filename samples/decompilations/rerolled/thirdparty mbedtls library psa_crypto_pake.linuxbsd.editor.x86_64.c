int mbedtls_ecjpake_to_psa_error(int param_1) {
   int iVar1;
   if (param_1 == -0x4c80) {
      return -0x99;
   }

   if (param_1 < -0x4c7f) {
      if (param_1 == -0x4f80) {
         return -0x99;
      }

      if (param_1 < -0x4f7f) {
         return ( ( param_1 != -0x5080 ) - 0x86 ) + ( uint )(param_1 != -0x5080);
      }

      iVar1 = -0x8a;
      if (param_1 != -0x4f00) {
         iVar1 = -0x84;
         if (param_1 == -0x4e00) {
            iVar1 = -0x99;
         }

         return iVar1;
      }

   }
 else {
      iVar1 = -0x97;
      if (param_1 != -0x6e) {
         if (param_1 < -0x6e) {
            return -0x84;
         }

         iVar1 = -0x8a;
         if (param_1 != -8) {
            iVar1 = -0x84;
            if (param_1 == -4) {
               iVar1 = -0x99;
            }

            return iVar1;
         }

      }

   }

   return iVar1;
}
int mbedtls_psa_pake_setup(int *param_1, undefined8 param_2) {
   size_t sVar1;
   int iVar2;
   int iVar3;
   void *pvVar4;
   void *__s1;
   void *__s1_00;
   long in_FS_OFFSET;
   size_t local_80;
   size_t local_78;
   size_t local_70;
   long local_68;
   long local_60;
   undefined8 local_58;
   undefined8 local_4c;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_4c = 0;
   iVar2 = psa_crypto_driver_pake_get_password_len(param_2, &local_70);
   if (( ( ( iVar2 != 0 ) || ( iVar2 = psa_crypto_driver_pake_get_user_len(param_2, &local_80) ),iVar2 != 0 ) ) || ( iVar2 = psa_crypto_driver_pake_get_peer_len(param_2, &local_78) ),iVar2 != 0) goto LAB_00100132;
   pvVar4 = calloc(1, local_70);
   *(void**)( param_1 + 2 ) = pvVar4;
   if (( pvVar4 == (void*)0x0 ) || ( __s1 = calloc(1, local_80) ),__s1 == (void*)0x0) {
      __s1 = (void*)0x0;
      __s1_00 = (void*)0x0;
      iVar3 = -0x8d;
   }
 else {
      __s1_00 = calloc(1, local_78);
      if (__s1_00 == (void*)0x0) {
         iVar3 = -0x8d;
      }
 else {
         iVar3 = psa_crypto_driver_pake_get_password(param_2, pvVar4, sVar1, &local_58);
         if (( ( iVar3 == 0 ) && ( iVar3 = psa_crypto_driver_pake_get_user(param_2, __s1, local_80, &local_68) ),iVar3 == 0 )) {
            *(undefined8*)( param_1 + 4 ) = local_58;
            *param_1 = (int)local_4c;
            if (( ( ( (int)local_4c == 0xa000100 ) && ( local_4c._4_4_ == 0x1001201 ) ) && ( local_44 == 0x2000009 ) ) && ( ( local_68 == 6 && ( local_60 == 6 ) ) )) {
               iVar3 = memcmp(__s1, &jpake_client_id, 6);
               if (( iVar3 == 0 ) && ( iVar3 = iVar3 == 0 )) {
                  iVar3 = 0;
               }
 else {
                  iVar3 = memcmp(__s1, &jpake_server_id, 6);
                  if (( iVar3 != 0 ) || ( iVar3 = iVar3 != 0 )) goto LAB_001002ab;
                  iVar3 = 1;
               }

               param_1[6] = iVar3;
               *(undefined1(*) [16])( param_1 + 0x5c ) = (undefined1[16])0x0;
               mbedtls_ecjpake_init(param_1 + 0x60);
               iVar3 = mbedtls_ecjpake_setup(param_1 + 0x60, param_1[6], 9, 3, *(undefined8*)( param_1 + 2 ), *(undefined8*)( param_1 + 4 ));
               mbedtls_platform_zeroize(*(undefined8*)( param_1 + 2 ), *(undefined8*)( param_1 + 4 ));
               if (( iVar3 == 0 ) || ( iVar3 = iVar3 == 0 )) {
                  free(__s1);
                  free(__s1_00);
                  goto LAB_00100132;
               }

            }
 else {
               LAB_001002ab:iVar3 = -0x86;
            }

         }

      }

   }

   iVar2 = iVar3;
   free(__s1);
   free(__s1_00);
   mbedtls_zeroize_and_free(*(undefined8*)( param_1 + 2 ), *(undefined8*)( param_1 + 4 ));
   for (int i = 0; i < 4; i++) {
      param_1[( i + 2 )] = 0;
   }

   if (*param_1 == 0xa000100) {
      param_1[6] = 2;
      mbedtls_platform_zeroize(param_1 + 7, 0x150);
      *(undefined1(*) [16])( param_1 + 0x5c ) = (undefined1[16])0x0;
      mbedtls_ecjpake_free(param_1 + 0x60);
   }

   *param_1 = 0;
   LAB_00100132:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
undefined8 mbedtls_psa_pake_output(int *param_1, int param_2, undefined8 *param_3, ulong param_4, ulong *param_5) {
   byte bVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   byte bVar10;
   bVar10 = 0;
   if (*param_1 != 0xa000100) {
      return 0xffffff7a;
   }

   if (param_2 == 1) {
      iVar2 = mbedtls_ecjpake_write_round_one(param_1 + 0x60, param_1 + 7, 0x150, param_1 + 0x5c, &mbedtls_psa_get_random, 0);
      if (iVar2 != 0) {
         LAB_001005c0:uVar5 = mbedtls_ecjpake_to_psa_error(iVar2);
         return uVar5;
      }

   }
 else {
      if (param_2 != 7) {
         lVar4 = *(long*)( param_1 + 0x5e );
         lVar7 = lVar4 + 1;
         goto LAB_00100474;
      }

      iVar2 = mbedtls_ecjpake_write_round_two(param_1 + 0x60, param_1 + 7, 0x150, param_1 + 0x5c, &mbedtls_psa_get_random, 0);
      if (iVar2 != 0) goto LAB_001005c0;
      if (param_1[6] == 1) {
         lVar7 = 4;
         lVar4 = 3;
         goto LAB_00100474;
      }

   }

   lVar7 = 1;
   lVar4 = 0;
   LAB_00100474:bVar1 = *(byte*)( (long)param_1 + lVar4 + 0x1c );
   uVar3 = (ulong)bVar1;
   *(long*)( param_1 + 0x5e ) = lVar7;
   if (*(ulong*)( param_1 + 0x5c ) < uVar3 + lVar7) {
      uVar5 = 0xffffff68;
   }
 else if (param_4 < uVar3) {
      uVar5 = 0xffffff76;
   }
 else {
      puVar8 = (undefined8*)( lVar7 + (long)( param_1 + 7 ) );
      if (bVar1 < 8) {
         if (( bVar1 & 4 ) == 0) {
            if (( bVar1 != 0 ) && ( *(undefined1*)param_3 = *(undefined1*)puVar8(bVar1 & 2) != 0 )) {
               *(undefined2*)( (long)param_3 + ( uVar3 - 2 ) ) = *(undefined2*)( ( uVar3 - 2 ) + (long)puVar8 );
            }

         }
 else {
            *(undefined4*)param_3 = *(undefined4*)puVar8;
            *(undefined4*)( (long)param_3 + ( uVar3 - 4 ) ) = *(undefined4*)( ( uVar3 - 4 ) + (long)puVar8 );
         }

      }
 else {
         *param_3 = *puVar8;
         *(undefined8*)( (long)param_3 + ( uVar3 - 8 ) ) = *(undefined8*)( ( uVar3 - 8 ) + (long)puVar8 );
         lVar7 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         puVar8 = (undefined8*)( (long)puVar8 - lVar7 );
         puVar9 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         for (uVar6 = ( ulong )((int)lVar7 + (uint)bVar1 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
            puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
         }

      }

      *param_5 = uVar3;
      *(ulong*)( param_1 + 0x5e ) = *(long*)( param_1 + 0x5e ) + uVar3;
      if (( param_2 == 6 ) || ( param_2 == 9 )) {
         mbedtls_platform_zeroize(param_1 + 7, 0x150);
         *(undefined1(*) [16])( param_1 + 0x5c ) = (undefined1[16])0x0;
      }

      uVar5 = 0;
   }

   return uVar5;
}
undefined8 mbedtls_psa_pake_input(int *param_1, int param_2, void *param_3, size_t param_4) {
   int *piVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 == 0xa000100) {
      lVar5 = *(long*)( param_1 + 0x5c );
      if (( param_2 == 10 ) && ( param_1[6] == 0 )) {
         if (lVar5 + 3U < 0x151) {
            *(undefined1*)( (long)param_1 + lVar5 + 0x1e ) = 0x17;
            *(undefined2*)( (long)param_1 + lVar5 + 0x1c ) = 3;
            lVar5 = *(long*)( param_1 + 0x5c ) + 3;
            *(long*)( param_1 + 0x5c ) = lVar5;
            goto LAB_00100657;
         }

      }
 else {
         LAB_00100657:if (lVar5 + 1 + param_4 < 0x151) {
            *(char*)( (long)param_1 + lVar5 + 0x1c ) = (char)param_4;
            piVar1 = param_1 + 7;
            *(long*)( param_1 + 0x5c ) = lVar5 + 1;
            memcpy((void*)( lVar5 + 1 + (long)piVar1 ), param_3, param_4);
            lVar5 = param_4 + *(long*)( param_1 + 0x5c );
            *(long*)( param_1 + 0x5c ) = lVar5;
            if (param_2 == 6) {
               iVar3 = mbedtls_ecjpake_read_round_one(param_1 + 0x60, piVar1, lVar5);
               LAB_001006e2:mbedtls_platform_zeroize(piVar1, 0x150);
               param_1[0x5c] = 0;
               param_1[0x5d] = 0;
               if (iVar3 != 0) {
                  if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar4 = mbedtls_ecjpake_to_psa_error(iVar3);
                     return uVar4;
                  }

                  goto LAB_0010079a;
               }

            }
 else if (param_2 == 0xc) {
               iVar3 = mbedtls_ecjpake_read_round_two(param_1 + 0x60, piVar1, lVar5);
               goto LAB_001006e2;
            }

            uVar4 = 0;
            goto LAB_001006a7;
         }

      }

      uVar4 = 0xffffff76;
   }
 else {
      uVar4 = 0xffffff7a;
   }

   LAB_001006a7:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_0010079a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
ulong mbedtls_psa_pake_get_implicit_key(int *param_1) {
   ulong uVar1;
   if (*param_1 != 0xa000100) {
      return 0xffffff7a;
   }

   uVar1 = mbedtls_ecjpake_write_shared_key(param_1 + 0x60);
   if ((int)uVar1 != 0) {
      uVar1 = mbedtls_ecjpake_to_psa_error(uVar1 & 0xffffffff);
      return uVar1;
   }

   return uVar1;
}
undefined8 mbedtls_psa_pake_abort(int *param_1) {
   mbedtls_zeroize_and_free(*(undefined8*)( param_1 + 2 ), *(undefined8*)( param_1 + 4 ));
   for (int i = 0; i < 4; i++) {
      param_1[( i + 2 )] = 0;
   }

   if (*param_1 != 0xa000100) {
      *param_1 = 0;
      return 0;
   }

   param_1[6] = 2;
   mbedtls_platform_zeroize(param_1 + 7, 0x150);
   *(undefined1(*) [16])( param_1 + 0x5c ) = (undefined1[16])0x0;
   mbedtls_ecjpake_free(param_1 + 0x60);
   *param_1 = 0;
   return 0;
}

