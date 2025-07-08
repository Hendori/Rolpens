int psa_mac_finish_internal(uint *param_1, void *param_2, size_t param_3) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *param_1 & 0xffc07fff ) == 0x3c00200) {
      iVar4 = mbedtls_cipher_cmac_finish(param_1 + 2, local_88);
      if (iVar4 == 0) {
         memcpy(param_2, local_88, param_3);
      }

      mbedtls_platform_zeroize(local_88, 0x10);
      iVar4 = mbedtls_to_psa_error(iVar4);
   }
 else if (( *param_1 & 0x7fc00000 ) == 0x3800000) {
      local_90 = 0;
      uVar2 = param_1[2];
      uVar5 = 0;
      uVar3 = ( uVar2 & 0xff | 0x2000000 ) + 0xfdfffffd;
      if (uVar3 < 0x11) {
         uVar5 = *(undefined8*)( CSWTCH_62 + (ulong)uVar3 * 8 );
      }

      puVar1 = param_1 + 4;
      iVar4 = psa_hash_finish(puVar1, local_88, 0x40, &local_90);
      if (iVar4 == 0) {
         iVar4 = psa_hash_setup(puVar1, uVar2);
         if (iVar4 == 0) {
            iVar4 = psa_hash_update(puVar1, param_1 + 0x3e, uVar5);
            if (iVar4 == 0) {
               iVar4 = psa_hash_update(puVar1, local_88, local_90);
               if (iVar4 == 0) {
                  iVar4 = psa_hash_finish(puVar1, local_88, 0x40, &local_90);
                  if (iVar4 == 0) {
                     memcpy(param_2, local_88, param_3);
                  }

               }

            }

         }

         mbedtls_platform_zeroize(local_88, local_90);
      }

   }
 else {
      iVar4 = -0x89;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_psa_mac_abort(uint *param_1) {
   uint uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   uVar1 = *param_1;
   if (uVar1 == 0) {
      return 0;
   }

   if (( uVar1 & 0xffc07fff ) == 0x3c00200) {
      mbedtls_cipher_free(param_1 + 2);
   }
 else {
      if (( uVar1 & 0x7fc00000 ) != 0x3800000) {
         param_1[0] = 0;
         param_1[1] = 0;
         param_1[0x60] = 0;
         param_1[0x61] = 0;
         puVar3 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
         for (uVar2 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x188U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
         }

         return 0xffffff77;
      }

      mbedtls_platform_zeroize(param_1 + 0x3e, 0x90);
      psa_hash_abort(param_1 + 4);
   }

   *param_1 = 0;
   return 0;
}
int psa_mac_setup_part_0(long param_1, undefined2 *param_2, void *param_3, ulong param_4, uint param_5) {
   uint uVar1;
   int iVar2;
   long lVar3;
   byte *pbVar4;
   ulong uVar5;
   ulong uVar6;
   uint uVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   byte bVar10;
   ulong local_e0;
   byte local_d8[152];
   long local_40;
   bVar10 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_5 & 0xffc07fff ) == 0x3c00200) {
      lVar3 = mbedtls_cipher_info_from_psa(0x3c00200, *param_2, param_2[1], 0);
      if (lVar3 == 0) goto LAB_001002ba;
      iVar2 = mbedtls_cipher_setup(param_1 + 8, lVar3);
      if (iVar2 == 0) {
         iVar2 = mbedtls_cipher_cmac_starts(param_1 + 8, param_3, param_2[1]);
      }

      iVar2 = mbedtls_to_psa_error(iVar2);
      LAB_00100330:if (iVar2 == 0) goto LAB_001002c8;
   }
 else if (( param_5 & 0x7fc00000 ) == 0x3800000) {
      uVar7 = param_5 & 0xff | 0x2000000;
      uVar1 = uVar7 + 0xfdfffffd;
      local_e0 = param_4;
      if (uVar1 < 0x11) {
         lVar3 = *(long*)( CSWTCH_59 + (ulong)uVar1 * 8 );
         switch ((ulong)uVar1) {
            default:
        uVar9 = 0x40;
        break;
            case 3:
            case 4:
            case 0xb:
            case 0xc:
        *(uint *)(param_1 + 8) = uVar7;
        if (lVar3 == 0) {
          if (param_4 == 0) goto LAB_001003a4;
          goto LAB_001004f0;
        }
        goto LAB_001002ba;
            case 7:
            case 8:
            case 9:
            case 10:
        uVar9 = 0x80;
        break;
            case 0xd:
        uVar9 = 0x90;
        break;
            case 0xe:
        uVar9 = 0x88;
        break;
            case 0xf:
        uVar9 = 0x68;
        break;
            case 0x10:
        uVar9 = 0x48;
         }

         *(uint*)( param_1 + 8 ) = uVar7;
         if (param_4 <= uVar9) {
            if (param_4 == 0) goto LAB_00100530;
            memcpy(local_d8, param_3, param_4);
            LAB_001003e6:pbVar4 = local_d8;
            if (( param_4 & 1 ) == 0) goto LAB_00100408;
            local_d8[0] = local_d8[0] ^ 0x36;
            for (pbVar4 = local_d8 + 1; local_d8 + param_4 != pbVar4; pbVar4 = pbVar4 + 2) {
               LAB_00100408:*pbVar4 = *pbVar4 ^ 0x36;
               pbVar4[1] = pbVar4[1] ^ 0x36;
            }

            uVar6 = uVar9 - param_4;
            __memset_chk(local_d8 + param_4, 0x36, uVar6, 0x90 - param_4);
            uVar5 = 0;
            do {
               *(byte*)( param_1 + 0xf8 + uVar5 ) = local_d8[uVar5] ^ 0x6a;
               uVar5 = uVar5 + 1;
            }
 while ( uVar5 != param_4 );
            goto LAB_00100458;
         }

         LAB_001004f8:iVar2 = psa_hash_compute(uVar7, param_3, param_4, local_d8, 0x90, &local_e0);
         if (iVar2 == 0) {
            param_4 = local_e0;
            if (local_e0 == 0) goto LAB_00100530;
            goto LAB_001003e6;
         }

      }
 else {
         *(uint*)( param_1 + 8 ) = uVar7;
         if (param_4 != 0) {
            LAB_001004f0:uVar9 = 0;
            goto LAB_001004f8;
         }

         LAB_001003a4:uVar9 = 0;
         LAB_00100530:if (7 < (uint)uVar9) {
            pbVar4 = local_d8;
            for (uVar6 = uVar9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
               for (int i = 0; i < 8; i++) {
                  pbVar4[i] = 54;
               }

               pbVar4 = pbVar4 + ( (ulong)bVar10 * -2 + 1 ) * 8;
            }

         }

         param_4 = 0;
         uVar6 = uVar9;
         LAB_00100458:puVar8 = (undefined8*)( param_1 + 0xf8 + param_4 );
         if (uVar6 < 8) {
            if (( uVar6 & 4 ) == 0) {
               if (( uVar6 != 0 ) && ( *(undefined1*)puVar8 = 0x5c(uVar6 & 2) != 0 )) {
                  *(undefined2*)( (long)puVar8 + ( uVar6 - 2 ) ) = 0x5c5c;
               }

            }
 else {
               *(undefined4*)puVar8 = 0x5c5c5c5c;
               *(undefined4*)( (long)puVar8 + ( uVar6 - 4 ) ) = 0x5c5c5c5c;
            }

         }
 else {
            *puVar8 = 0x5c5c5c5c5c5c5c5c;
            *(undefined8*)( (long)puVar8 + ( uVar6 - 8 ) ) = 0x5c5c5c5c5c5c5c5c;
            uVar6 = ( ulong )((long)puVar8 + ( uVar6 - (long)( ( ulong )(puVar8 + 1) & 0xfffffffffffffff8 ) )) >> 3;
            puVar8 = (undefined8*)( ( ulong )(puVar8 + 1) & 0xfffffffffffffff8 );
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
               *puVar8 = 0x5c5c5c5c5c5c5c5c;
               puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
            }

         }

         iVar2 = psa_hash_setup(param_1 + 0x10, uVar7);
         if (iVar2 == 0) {
            iVar2 = psa_hash_update(param_1 + 0x10, local_d8, uVar9);
            mbedtls_platform_zeroize(local_d8, 0x90);
            goto LAB_00100330;
         }

      }

      mbedtls_platform_zeroize(local_d8, 0x90);
   }
 else {
      LAB_001002ba:iVar2 = -0x86;
   }

   mbedtls_psa_mac_abort(param_1);
   LAB_001002c8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_psa_mac_sign_setup(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint param_5) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   if (*param_1 != 0) {
      return 0xffffff77;
   }

   *param_1 = param_5;
   if (( param_5 & 0xffc07fff ) != 0x3c00200) {
      if (( param_5 & 0x7fc00000 ) == 0x3800000) {
         param_1[2] = 0;
         uVar1 = psa_mac_setup_part_0(param_1);
         return uVar1;
      }

      param_1[0] = 0;
      param_1[1] = 0;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      puVar3 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x188U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + 1;
      }

      return 0xffffff7a;
   }

   mbedtls_cipher_init(param_1 + 2);
   uVar1 = psa_mac_setup_part_0(param_1, param_2, param_3, param_4, param_5);
   return uVar1;
}
undefined8 mbedtls_psa_mac_verify_setup(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint param_5) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   if (*param_1 != 0) {
      return 0xffffff77;
   }

   *param_1 = param_5;
   if (( param_5 & 0xffc07fff ) != 0x3c00200) {
      if (( param_5 & 0x7fc00000 ) == 0x3800000) {
         param_1[2] = 0;
         uVar1 = psa_mac_setup_part_0(param_1);
         return uVar1;
      }

      param_1[0] = 0;
      param_1[1] = 0;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      puVar3 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x188U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + 1;
      }

      return 0xffffff7a;
   }

   mbedtls_cipher_init(param_1 + 2);
   uVar1 = psa_mac_setup_part_0(param_1, param_2, param_3, param_4, param_5);
   return uVar1;
}
undefined8 mbedtls_psa_mac_update(uint *param_1) {
   uint uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   uVar1 = *param_1;
   if (uVar1 != 0) {
      if (( uVar1 & 0xffc07fff ) == 0x3c00200) {
         uVar2 = mbedtls_cipher_cmac_update(param_1 + 2);
         uVar3 = mbedtls_to_psa_error(uVar2);
         return uVar3;
      }

      if (( uVar1 & 0x7fc00000 ) == 0x3800000) {
         uVar3 = psa_hash_update(param_1 + 4);
         return uVar3;
      }

   }

   return 0xffffff77;
}
undefined8 mbedtls_psa_mac_sign_finish(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4) {
   undefined8 uVar1;
   if (*param_1 != 0) {
      uVar1 = psa_mac_finish_internal();
      if ((int)uVar1 == 0) {
         *param_4 = param_3;
      }

      return uVar1;
   }

   return 0xffffff77;
}
uint mbedtls_psa_mac_verify_finish(int *param_1, undefined8 param_2, ulong param_3) {
   uint uVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 auStack_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 == 0) {
      uVar1 = 0xffffff77;
   }
 else if (param_3 < 0x41) {
      uVar1 = psa_mac_finish_internal(param_1, auStack_78);
      if (uVar1 == 0) {
         iVar2 = mbedtls_ct_memcmp(param_2, auStack_78, param_3);
         uVar1 = -(uint)(iVar2 != 0) & 0xffffff6b;
      }

      mbedtls_platform_zeroize(auStack_78, 0x40);
   }
 else {
      uVar1 = 0xffffff79;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_psa_mac_compute(undefined8 param_1, undefined8 param_2, undefined8 param_3, uint param_4, undefined8 param_5, long param_6, undefined8 param_7, undefined8 param_8, undefined8 *param_9) {
   int iVar1;
   long lVar2;
   uint *puVar3;
   long in_FS_OFFSET;
   uint local_1c8[2];
   undefined1 local_1c0[384];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = local_1c8;
   for (lVar2 = 0x31; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
   }

   local_1c8[0] = param_4;
   if (( param_4 & 0xffc07fff ) == 0x3c00200) {
      mbedtls_cipher_init(local_1c0);
   }
 else if (( param_4 & 0x7fc00000 ) != 0x3800000) {
      iVar1 = -0x86;
      puVar3 = local_1c8;
      for (lVar2 = 0x31; lVar2 != 0; lVar2 = lVar2 + -1) {
         puVar3[0] = 0;
         puVar3[1] = 0;
         puVar3 = puVar3 + 2;
      }

      goto LAB_001009cb;
   }

   iVar1 = psa_mac_setup_part_0(local_1c8, param_1, param_2, param_3, param_4);
   if (( iVar1 == 0 ) && ( ( ( param_6 == 0 || ( iVar1 = mbedtls_psa_mac_update(local_1c8, param_5, param_6) ),iVar1 == 0 ) ) && ( iVar1 = psa_mac_finish_internal(local_1c8, param_7, param_8) ),iVar1 == 0 )) {
      *param_9 = param_8;
   }

   LAB_001009cb:mbedtls_psa_mac_abort(local_1c8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}

