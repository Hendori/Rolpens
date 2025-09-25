int hash_mprime(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 local_68[32];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   lVar2 = mbedtls_md_info_from_type(param_6);
   if (lVar2 == 0) {
      iVar1 = -0x4080;
   }
 else {
      mbedtls_md_init(local_68);
      iVar1 = mbedtls_md_setup(local_68, lVar2, 0);
      if (iVar1 == 0) {
         iVar1 = mbedtls_md_starts(local_68);
         if (iVar1 == 0) {
            iVar1 = mbedtls_md_update(local_68, &local_48, 8);
            if (iVar1 == 0) {
               iVar1 = mbedtls_md_update(local_68, param_1, param_2);
               if (iVar1 == 0) {
                  iVar1 = mbedtls_md_update(local_68, param_3, param_4);
                  if (iVar1 == 0) {
                     iVar1 = mbedtls_md_finish(local_68, param_5);
                  }

               }

            }

         }

      }

      mbedtls_md_free(local_68);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 myrand(undefined8 param_1, undefined1 *param_2, long param_3) {
   int iVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   if (param_3 != 0) {
      puVar2 = param_2;
      do {
         iVar1 = rand();
         puVar3 = puVar2 + 1;
         *puVar2 = (char)iVar1;
         puVar2 = puVar3;
      }
 while ( puVar3 != param_2 + param_3 );
      return 0;
   }

   return 0;
}
int mgf_mask(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5) {
   byte bVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   int local_ac;
   undefined1 local_a8[28];
   undefined4 local_8c;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_md_init(local_a8);
   lVar3 = mbedtls_md_info_from_type(param_5);
   if (lVar3 == 0) {
      local_ac = -0x4080;
   }
 else {
      mbedtls_md_init(local_a8);
      iVar2 = mbedtls_md_setup(local_a8, lVar3, 0);
      local_ac = iVar2;
      if (iVar2 == 0) {
         bVar1 = mbedtls_md_get_size(lVar3);
         local_8c = 0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         if (param_2 != 0) {
            do {
               while (true) {
                  uVar5 = param_2;
                  if (bVar1 <= param_2) {
                     uVar5 = (ulong)bVar1;
                  }

                  local_ac = mbedtls_md_starts(local_a8);
                  if (( ( ( local_ac != 0 ) || ( local_ac = mbedtls_md_update(local_a8, param_3, param_4) ),local_ac != 0 ) ) || ( local_ac = local_ac != 0 )) goto LAB_001001d9;
                  uVar4 = 0;
                  if (uVar5 != 0) break;
                  local_8c = CONCAT13(local_8c._3_1_ + '\x01', (undefined3)local_8c);
               }
;
               do {
                  *(byte*)( param_1 + uVar4 ) = *(byte*)( param_1 + uVar4 ) ^ local_88[uVar4];
                  uVar4 = uVar4 + 1;
               }
 while ( uVar4 != uVar5 );
               local_8c = CONCAT13(local_8c._3_1_ + '\x01', (undefined3)local_8c);
               param_1 = param_1 + uVar4;
               param_2 = param_2 - uVar4;
               local_ac = iVar2;
            }
 while ( param_2 != 0 );
         }

      }

      LAB_001001d9:mbedtls_platform_zeroize(local_88, 0x40);
      mbedtls_md_free(local_a8);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_ac;
}
void mbedtls_rsa_free_part_0(long param_1) {
   mbedtls_mpi_free(param_1 + 0xc0);
   mbedtls_mpi_free(param_1 + 0xd0);
   mbedtls_mpi_free(param_1 + 0x90);
   mbedtls_mpi_free(param_1 + 0x30);
   mbedtls_mpi_free(param_1 + 0x50);
   mbedtls_mpi_free(param_1 + 0x40);
   mbedtls_mpi_free(param_1 + 0x20);
   mbedtls_mpi_free(param_1 + 0x10);
   mbedtls_mpi_free(param_1 + 0xb0);
   mbedtls_mpi_free(param_1 + 0xa0);
   mbedtls_mpi_free(param_1 + 0x80);
   mbedtls_mpi_free(param_1 + 0x70);
   mbedtls_mpi_free(param_1 + 0x60);
   return;
}
undefined8 rsa_check_context_isra_0(long param_1, int param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   lVar1 = param_1 + 0x10;
   lVar2 = *(long*)( param_1 + 8 );
   lVar4 = mbedtls_mpi_size(lVar1);
   if (lVar2 != lVar4) {
      return 0xffffbf80;
   }

   if (0x400 < *(ulong*)( param_1 + 8 )) {
      return 0xffffbf80;
   }

   iVar3 = mbedtls_mpi_cmp_int(lVar1, 0);
   if (iVar3 < 1) {
      return 0xffffbf80;
   }

   iVar3 = mbedtls_mpi_get_bit(lVar1, 0);
   if (iVar3 == 0) {
      return 0xffffbf80;
   }

   if (param_2 == 0) {
      iVar3 = mbedtls_mpi_cmp_int(param_1 + 0x20, 0);
   }
 else {
      iVar3 = mbedtls_mpi_cmp_int(param_1 + 0x40, 0);
      if (iVar3 < 1) {
         return 0xffffbf80;
      }

      iVar3 = mbedtls_mpi_get_bit(param_1 + 0x40, 0);
      if (iVar3 == 0) {
         return 0xffffbf80;
      }

      iVar3 = mbedtls_mpi_cmp_int(param_1 + 0x50, 0);
      if (iVar3 < 1) {
         return 0xffffbf80;
      }

      iVar3 = mbedtls_mpi_get_bit(param_1 + 0x50, 0);
      if (iVar3 == 0) {
         return 0xffffbf80;
      }

      iVar3 = mbedtls_mpi_cmp_int(param_1 + 0x20, 0);
      for (int i = 0; i < 3; i++) {
         if (iVar3 < 1) {
            return 4294950784;
         }

         iVar3 = mbedtls_mpi_cmp_int(param_1 + ( 16*i + 96 ), 0);
      }

   }

   if (iVar3 < 1) {
      return 0xffffbf80;
   }

   return 0;
}
undefined8 rsa_rsassa_pkcs1_v15_encode(int param_1, uint param_2, undefined8 *param_3, ulong param_4, undefined2 *param_5) {
   char cVar1;
   byte bVar2;
   int iVar3;
   undefined8 uVar4;
   void *pvVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   size_t __n;
   undefined8 *puVar9;
   undefined1 *puVar10;
   undefined2 *puVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   byte bVar13;
   ulong local_50;
   void *local_48;
   long local_40;
   bVar13 = 0;
   uVar6 = (ulong)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = (void*)0x0;
   if (param_1 == 0) {
      if (( uVar6 <= param_4 ) && ( 10 < param_4 - uVar6 )) {
         __n = ( param_4 - uVar6 ) - 3;
         *param_5 = 0x100;
         pvVar5 = memset(param_5 + 1, 0xff, __n);
         puVar10 = (undefined1*)( (long)pvVar5 + __n );
         *puVar10 = 0;
         memcpy(puVar10 + 1, param_3, uVar6);
         goto LAB_0010055e;
      }

   }
 else {
      uVar4 = mbedtls_md_info_from_type();
      bVar2 = mbedtls_md_get_size(uVar4);
      if (( ( ( bVar2 != 0 ) && ( iVar3 = mbedtls_oid_get_oid_by_md(param_1, &local_48, &local_50) ),iVar3 == 0 ) ) && ( bVar2 == param_2 )) {
         uVar6 = local_50 + ( param_2 + 10 );
         if (( ( uVar6 <= param_4 ) && ( !CARRY8(local_50,(ulong)(param_2 + 10)) ) ) && ( uVar6 = 10 < uVar6 )) {
            *param_5 = 0x100;
            pvVar5 = memset(param_5 + 1, 0xff, uVar6 - 3);
            *(undefined2*)( (long)pvVar5 + ( uVar6 - 3 ) ) = 0x3000;
            *(undefined1*)( (long)pvVar5 + uVar6 ) = 0x30;
            cVar1 = (char)local_50;
            *(char*)( (long)pvVar5 + uVar6 + 3 ) = cVar1;
            *(char*)( (long)pvVar5 + ( uVar6 - 1 ) ) = cVar1 + '\b' + (char)param_2;
            *(char*)( (long)pvVar5 + uVar6 + 1 ) = cVar1 + '\x04';
            *(undefined1*)( (long)pvVar5 + uVar6 + 2 ) = 6;
            pvVar5 = memcpy((void*)( (long)pvVar5 + uVar6 + 4 ), local_48, local_50);
            uVar6 = (ulong)param_2;
            puVar11 = (undefined2*)( local_50 + (long)pvVar5 );
            *puVar11 = 5;
            *(undefined1*)( puVar11 + 1 ) = 4;
            *(char*)( (long)puVar11 + 3 ) = (char)param_2;
            if (param_2 < 8) {
               if (( param_2 & 4 ) == 0) {
                  if (( param_2 != 0 ) && ( *(undefined1*)( puVar11 + 2 ) = *(undefined1*)param_3(param_2 & 2) != 0 )) {
                     *(undefined2*)( (long)puVar11 + uVar6 + 2 ) = *(undefined2*)( (long)param_3 + ( uVar6 - 2 ) );
                  }

               }
 else {
                  *(undefined4*)( puVar11 + 2 ) = *(undefined4*)param_3;
                  *(undefined4*)( (long)puVar11 + uVar6 ) = *(undefined4*)( (long)param_3 + ( uVar6 - 4 ) );
               }

               if ((long)param_5 + param_4 != (long)puVar11 + uVar6 + 4) {
                  LAB_001006a9:mbedtls_platform_zeroize(param_5, param_4);
                  goto LAB_0010051d;
               }

            }
 else {
               *(undefined8*)( puVar11 + 2 ) = *param_3;
               *(undefined8*)( (long)puVar11 + ( uVar6 - 4 ) ) = *(undefined8*)( (long)param_3 + ( uVar6 - 8 ) );
               lVar7 = (long)puVar11 + ( 4 - (long)( ( ulong )(puVar11 + 6) & 0xfffffffffffffff8 ) );
               puVar9 = (undefined8*)( (long)param_3 - lVar7 );
               puVar12 = (undefined8*)( ( ulong )(puVar11 + 6) & 0xfffffffffffffff8 );
               for (uVar8 = ( ulong )((int)lVar7 + (uint)bVar2 >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar13 * -2 + 1;
               }

               if ((long)param_5 + param_4 != (long)puVar11 + uVar6 + 4) goto LAB_001006a9;
            }

            LAB_0010055e:uVar4 = 0;
            goto LAB_00100560;
         }

      }

   }

   LAB_0010051d:uVar4 = 0xffffbf80;
   LAB_00100560:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
int mbedtls_rsa_import(long param_1, long param_2, long param_3, long param_4, long param_5, long param_6) {
   int iVar1;
   undefined8 uVar2;
   if (param_2 != 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x10);
      if (iVar1 != 0) goto LAB_00100800;
   }

   if (param_3 != 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x40, param_3);
      if (iVar1 != 0) goto LAB_00100800;
   }

   if (param_4 != 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x50, param_4);
      if (iVar1 != 0) goto LAB_00100800;
   }

   if (param_5 != 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x30, param_5);
      if (iVar1 != 0) goto LAB_00100800;
   }

   if (param_6 != 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x20, param_6);
      if (iVar1 != 0) {
         LAB_00100800:return iVar1 + -0x4080;
      }

   }

   if (param_2 != 0) {
      uVar2 = mbedtls_mpi_size(param_1 + 0x10);
      *(undefined8*)( param_1 + 8 ) = uVar2;
   }

   return 0;
}
int mbedtls_rsa_import_raw(long param_1, long param_2, undefined8 param_3, long param_4, undefined8 param_5, long param_6, undefined8 param_7, long param_8, undefined8 param_9, long param_10, undefined8 param_11) {
   int iVar1;
   undefined8 uVar2;
   if (param_2 != 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x10);
      if (iVar1 != 0) goto LAB_001008e0;
      uVar2 = mbedtls_mpi_size(param_1 + 0x10);
      *(undefined8*)( param_1 + 8 ) = uVar2;
   }

   if (param_4 != 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x40, param_4, param_5);
      if (iVar1 != 0) goto LAB_001008e0;
   }

   if (param_6 != 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x50, param_6, param_7);
      if (iVar1 != 0) goto LAB_001008e0;
   }

   if (param_8 != 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x30, param_8, param_9);
      if (iVar1 != 0) goto LAB_001008e0;
   }

   if (param_10 != 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x20, param_10, param_11);
      if (iVar1 != 0) {
         LAB_001008e0:return iVar1 + -0x4080;
      }

   }

   return 0;
}
ulong mbedtls_rsa_complete(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   ulong uVar14;
   undefined8 uVar15;
   bool bVar16;
   lVar1 = param_1 + 0x10;
   lVar2 = param_1 + 0x40;
   lVar3 = param_1 + 0x50;
   lVar4 = param_1 + 0x30;
   iVar6 = mbedtls_mpi_cmp_int(lVar1, 0);
   iVar7 = mbedtls_mpi_cmp_int(lVar2, 0);
   iVar8 = mbedtls_mpi_cmp_int(lVar3, 0);
   iVar9 = mbedtls_mpi_cmp_int(lVar4, 0);
   lVar5 = param_1 + 0x20;
   iVar10 = mbedtls_mpi_cmp_int(lVar5, 0);
   bVar16 = iVar10 == 0;
   iVar11 = mbedtls_mpi_cmp_int(param_1 + 0x60, 0);
   iVar12 = mbedtls_mpi_cmp_int(param_1 + 0x70, 0);
   iVar13 = mbedtls_mpi_cmp_int(param_1 + 0x80, 0);
   if (( iVar7 == 0 ) || ( iVar8 == 0 )) {
      if (( iVar6 == 0 ) || ( iVar7 != 0 )) {
         return 0xffffbf80;
      }

      if (( iVar8 != 0 ) || ( iVar9 == 0 )) {
         if (iVar9 != 0 || iVar8 != 0) {
            return 0xffffbf80;
         }

         if (bVar16) {
            return 0xffffbf80;
         }

         uVar15 = 0;
         goto LAB_00100a38;
      }

      if (iVar10 == 0) {
         return 0xffffbf80;
      }

      iVar6 = mbedtls_rsa_deduce_primes(lVar1, lVar5, lVar4, lVar2, lVar3);
      joined_r0x00100a8b:if (iVar6 != 0) goto LAB_00100a91;
   }
 else {
      if (( iVar9 == 0 ) || ( bVar16 )) {
         if (iVar9 != 0) {
            return 0xffffbf80;
         }

         if (bVar16) {
            return 0xffffbf80;
         }

         if (iVar6 == 0) {
            iVar6 = mbedtls_mpi_mul_mpi(lVar1, lVar2, lVar3);
            if (iVar6 != 0) goto LAB_00100a91;
            uVar15 = mbedtls_mpi_size(lVar1);
            *(undefined8*)( param_1 + 8 ) = uVar15;
         }

         iVar6 = mbedtls_rsa_deduce_private_exponent(lVar2, lVar3, lVar5, lVar4);
         goto joined_r0x00100a8b;
      }

      if (iVar6 == 0) {
         iVar6 = mbedtls_mpi_mul_mpi(lVar1, lVar2, lVar3);
         if (iVar6 != 0) goto LAB_00100a91;
         uVar15 = mbedtls_mpi_size(lVar1);
         *(undefined8*)( param_1 + 8 ) = uVar15;
      }

   }

   if (( ( iVar11 != 0 && iVar12 != 0 ) && ( iVar13 != 0 ) ) || ( iVar6 = mbedtls_rsa_deduce_crt(lVar2, lVar3, lVar4, param_1 + 0x60, param_1 + 0x70, param_1 + 0x80) ),iVar6 == 0) {
      uVar15 = 1;
      LAB_00100a38:uVar14 = rsa_check_context_isra_0(param_1, uVar15);
      return uVar14;
   }

   LAB_00100a91:return ( ulong )(iVar6 - 0x4080);
}
undefined8 mbedtls_rsa_export_raw(long param_1, long param_2, undefined8 param_3, long param_4, undefined8 param_5, long param_6, undefined8 param_7, long param_8, undefined8 param_9, long param_10, undefined8 param_11) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   lVar1 = param_1 + 0x10;
   iVar2 = mbedtls_mpi_cmp_int(lVar1, 0);
   if (iVar2 == 0) {
      LAB_00100bd6:if (( param_8 != 0 || param_6 != 0 ) || param_4 != 0) {
         return 0xffffbf80;
      }

      if (param_2 == 0) goto LAB_00100cee;
      uVar3 = mbedtls_mpi_write_binary(lVar1, param_2, param_3);
      iVar2 = (int)uVar3;
   }
 else {
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x40, 0);
      if (iVar2 == 0) goto LAB_00100bd6;
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x50, 0);
      if (iVar2 == 0) goto LAB_00100bd6;
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x30, 0);
      if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00100bd6;
      if (( param_2 != 0 ) && ( uVar3 = mbedtls_mpi_write_binary(lVar1, param_2, param_3) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (( param_4 != 0 ) && ( uVar3 = mbedtls_mpi_write_binary(param_1 + 0x40, param_4, param_5) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (( param_6 != 0 ) && ( uVar3 = mbedtls_mpi_write_binary(param_1 + 0x50, param_6, param_7) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (param_8 == 0) goto LAB_00100cee;
      uVar3 = mbedtls_mpi_write_binary(param_1 + 0x30, param_8, param_9);
      iVar2 = (int)uVar3;
   }

   if (iVar2 != 0) {
      return uVar3;
   }

   LAB_00100cee:if (param_10 == 0) {
      return 0;
   }

   uVar3 = mbedtls_mpi_write_binary(param_1 + 0x20, param_10, param_11);
   return uVar3;
}
undefined8 mbedtls_rsa_export(long param_1, long param_2, long param_3, long param_4, long param_5, long param_6) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   lVar1 = param_1 + 0x10;
   iVar2 = mbedtls_mpi_cmp_int(lVar1, 0);
   if (iVar2 == 0) {
      LAB_00100d67:if (( param_5 != 0 || param_4 != 0 ) || param_3 != 0) {
         return 0xffffbf80;
      }

      if (param_2 == 0) goto LAB_00100e5e;
      uVar3 = mbedtls_mpi_copy(param_2, lVar1);
      iVar2 = (int)uVar3;
   }
 else {
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x40, 0);
      if (iVar2 == 0) goto LAB_00100d67;
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x50, 0);
      if (iVar2 == 0) goto LAB_00100d67;
      iVar2 = mbedtls_mpi_cmp_int(param_1 + 0x30, 0);
      if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00100d67;
      if (( param_2 != 0 ) && ( uVar3 = mbedtls_mpi_copy(param_2, lVar1) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (( param_3 != 0 ) && ( uVar3 = mbedtls_mpi_copy(param_3, param_1 + 0x40) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (( param_4 != 0 ) && ( uVar3 = mbedtls_mpi_copy(param_4, param_1 + 0x50) ),(int)uVar3 != 0) {
         return uVar3;
      }

      if (param_5 == 0) goto LAB_00100e5e;
      uVar3 = mbedtls_mpi_copy(param_5, param_1 + 0x30);
      iVar2 = (int)uVar3;
   }

   if (iVar2 != 0) {
      return uVar3;
   }

   LAB_00100e5e:if (param_6 == 0) {
      return 0;
   }

   uVar3 = mbedtls_mpi_copy(param_6, param_1 + 0x20);
   return uVar3;
}
int mbedtls_rsa_write_pubkey(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined1 auStack_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_58);
   iVar1 = mbedtls_rsa_export(param_1, 0, 0, 0, 0, auStack_58);
   if (iVar1 == 0) {
      iVar1 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      if (iVar1 < 0) {
         LAB_00100fc0:mbedtls_mpi_free(auStack_58);
         goto LAB_00100f31;
      }

      lVar3 = (long)iVar1;
      iVar1 = mbedtls_rsa_export(param_1, auStack_58, 0, 0, 0, 0);
      if (iVar1 != 0) goto LAB_00100ef3;
      iVar1 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      if (iVar1 < 0) goto LAB_00100fc0;
      lVar3 = lVar3 + iVar1;
      mbedtls_mpi_free(auStack_58);
   }
 else {
      lVar3 = 0;
      LAB_00100ef3:mbedtls_mpi_free(auStack_58);
      if (iVar1 < 0) goto LAB_00100f31;
   }

   iVar2 = mbedtls_asn1_write_len(param_3, param_2, lVar3);
   iVar1 = iVar2;
   if (( -1 < iVar2 ) && ( iVar1 = -1 < iVar1 )) {
      iVar1 = iVar2 + (int)lVar3 + iVar1;
   }

   LAB_00100f31:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
int mbedtls_rsa_export_crt(long param_1, long param_2, long param_3, long param_4) {
   int iVar1;
   iVar1 = mbedtls_mpi_cmp_int(param_1 + 0x10, 0);
   if (( ( ( iVar1 == 0 ) || ( iVar1 = mbedtls_mpi_cmp_int(param_1 + 0x40, 0) ),iVar1 == 0 ) ) || ( iVar1 = iVar1 == 0 )) {
      return -0x4080;
   }

   if (( ( ( param_2 == 0 ) || ( iVar1 = mbedtls_mpi_copy(param_2, param_1 + 0x60) ),iVar1 == 0 ) ) && ( ( param_3 == 0 || ( iVar1 = mbedtls_mpi_copy(param_3, param_1 + 0x70) ),iVar1 == 0 ) )) {
      return 0;
   }

   return iVar1 + -0x4080;
}
ulong mbedtls_rsa_write_key(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 auStack_58[24];
   long local_40;
   lVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_58);
   uVar1 = mbedtls_rsa_export_crt(param_1, 0, 0, auStack_58);
   uVar4 = (ulong)uVar1;
   if (uVar1 == 0) {
      uVar1 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
         LAB_00101350:mbedtls_mpi_free(auStack_58);
         goto LAB_00101170;
      }

      lVar5 = (long)(int)uVar1;
      uVar1 = mbedtls_rsa_export_crt(param_1, 0, auStack_58, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      uVar1 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 0) goto LAB_00101350;
      lVar5 = lVar5 + (int)uVar1;
      uVar1 = mbedtls_rsa_export_crt(param_1, auStack_58, 0, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      uVar1 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 0) goto LAB_00101350;
      lVar5 = lVar5 + (int)uVar1;
      uVar1 = mbedtls_rsa_export(param_1, 0, 0, auStack_58, 0, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      iVar2 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)iVar2;
      if (iVar2 < 0) goto LAB_00101350;
      lVar5 = lVar5 + uVar4;
      uVar1 = mbedtls_rsa_export(param_1, 0, auStack_58, 0, 0, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      iVar2 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)iVar2;
      if (iVar2 < 0) goto LAB_00101350;
      lVar5 = lVar5 + uVar4;
      uVar1 = mbedtls_rsa_export(param_1, 0, 0, 0, auStack_58, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      iVar2 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)iVar2;
      if (iVar2 < 0) goto LAB_00101350;
      lVar5 = lVar5 + uVar4;
      uVar1 = mbedtls_rsa_export(param_1, 0, 0, 0, 0, auStack_58);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      iVar2 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)iVar2;
      if (iVar2 < 0) goto LAB_00101350;
      lVar5 = lVar5 + uVar4;
      uVar1 = mbedtls_rsa_export(param_1, auStack_58, 0, 0, 0, 0);
      uVar4 = (ulong)uVar1;
      if (uVar1 != 0) goto LAB_00101112;
      iVar2 = mbedtls_asn1_write_mpi(param_3, param_2, auStack_58);
      uVar4 = (ulong)iVar2;
      if (iVar2 < 0) goto LAB_00101350;
      lVar5 = lVar5 + uVar4;
      mbedtls_mpi_free(auStack_58);
   }
 else {
      LAB_00101112:mbedtls_mpi_free(auStack_58);
      if ((int)uVar4 < 0) goto LAB_00101170;
   }

   uVar1 = mbedtls_asn1_write_int(param_3, param_2, 0);
   uVar4 = (ulong)uVar1;
   if (-1 < (int)uVar1) {
      iVar2 = mbedtls_asn1_write_len(param_3, param_2, lVar5 + (int)uVar1);
      uVar4 = (ulong)iVar2;
      if (-1 < iVar2) {
         uVar3 = mbedtls_asn1_write_tag(param_3, param_2, 0x30);
         if ((int)uVar3 < 0) {
            uVar4 = (ulong)uVar3;
         }
 else {
            uVar4 = ( ulong )(iVar2 + (int)( lVar5 + (int)uVar1 ) + uVar3);
         }

      }

   }

   LAB_00101170:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_rsa_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x1c] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xe8U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
undefined8 mbedtls_rsa_set_padding(long param_1, uint param_2, int param_3) {
   long lVar1;
   if (1 < param_2) {
      return 0xffffbf00;
   }

   if (( ( param_3 != 0 ) && ( ( param_2 & 1 ) != 0 ) ) && ( lVar1 = lVar1 == 0 )) {
      return 0xffffbf00;
   }

   *(uint*)( param_1 + 0xe0 ) = param_2;
   *(int*)( param_1 + 0xe4 ) = param_3;
   return 0;
}
undefined4 mbedtls_rsa_get_padding_mode(long param_1) {
   return *(undefined4*)( param_1 + 0xe0 );
}
undefined4 mbedtls_rsa_get_md_alg(long param_1) {
   return *(undefined4*)( param_1 + 0xe4 );
}
void mbedtls_rsa_get_bitlen(long param_1) {
   mbedtls_mpi_bitlen(param_1 + 0x10);
   return;
}
undefined8 mbedtls_rsa_get_len(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}
undefined8 mbedtls_rsa_check_pubkey(long param_1) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   iVar1 = rsa_check_context_isra_0(param_1, 0);
   if (iVar1 == 0) {
      uVar2 = mbedtls_mpi_bitlen(param_1 + 0x10);
      if (0x7f < uVar2) {
         lVar3 = param_1 + 0x20;
         iVar1 = mbedtls_mpi_get_bit(lVar3, 0);
         if (( ( iVar1 != 0 ) && ( uVar2 = mbedtls_mpi_bitlen(lVar3) ),1 < uVar2 )) {
            return 0;
         }

      }

   }

   return 0xffffbe00;
}
undefined8 mbedtls_rsa_parse_pubkey(long param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   param_3 = param_2 + param_3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = param_2;
   uVar2 = mbedtls_asn1_get_tag(&local_40, param_3, &local_38, 0x30);
   if ((int)uVar2 != 0) goto LAB_00101537;
   if (param_3 == local_38 + local_40) {
      uVar2 = mbedtls_asn1_get_tag(&local_40, param_3, &local_38, 2);
      if ((int)uVar2 != 0) goto LAB_00101537;
      if (local_40 != 0) {
         iVar1 = mbedtls_mpi_read_binary(param_1 + 0x10);
         if (iVar1 == 0) {
            uVar2 = mbedtls_mpi_size(param_1 + 0x10);
            *(undefined8*)( param_1 + 8 ) = uVar2;
         }
 else if (iVar1 != 0x4080) goto LAB_00101630;
      }

      local_40 = local_40 + local_38;
      uVar2 = mbedtls_asn1_get_tag(&local_40, param_3, &local_38, 2);
      if ((int)uVar2 != 0) goto LAB_00101537;
      if (( ( local_40 == 0 ) || ( iVar1 = mbedtls_mpi_read_binary(param_1 + 0x20) ),iVar1 == 0 )) {
         local_40 = local_40 + local_38;
         iVar1 = mbedtls_rsa_complete(param_1);
         if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
            uVar2 = 0;
            if (local_40 != param_3) {
               uVar2 = 0xffffff9a;
            }

            goto LAB_00101537;
         }

      }

   }

   LAB_00101630:uVar2 = 0xffffbf80;
   LAB_00101537:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
int mbedtls_rsa_parse_key(long param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   int local_5c;
   long local_58;
   long local_50;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_48);
   param_3 = param_2 + param_3;
   local_50 = param_2;
   iVar1 = mbedtls_asn1_get_tag(&local_50, param_3, &local_58, 0x30);
   if (iVar1 != 0) goto LAB_00101700;
   if (param_3 != local_58 + local_50) {
      LAB_00101990:iVar1 = -0x4080;
      goto LAB_00101700;
   }

   iVar1 = mbedtls_asn1_get_int(&local_50, param_3, &local_5c);
   if (iVar1 != 0) goto LAB_00101700;
   if (local_5c != 0) goto LAB_00101990;
   iVar1 = mbedtls_asn1_get_mpi(&local_50, param_3, local_48);
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
      if (iVar1 != 0) {
         iVar1 = mbedtls_mpi_copy(param_1 + 0x10, local_48);
         if (iVar1 == 0) {
            uVar2 = mbedtls_mpi_size(param_1 + 0x10);
            *(undefined8*)( param_1 + 8 ) = uVar2;
         }
 else {
            iVar1 = iVar1 + -0x4080;
            if (iVar1 != 0) goto LAB_001016e7;
         }

         iVar1 = mbedtls_asn1_get_mpi(&local_50, param_3, local_48);
         if (iVar1 == 0) {
            iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
            if (iVar1 == 0) {
               LAB_001019e7:iVar1 = -0x4080;
            }
 else {
               iVar1 = mbedtls_mpi_copy(param_1 + 0x20, local_48);
               if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 )) {
                  iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                  if (iVar1 == 0) goto LAB_001019e7;
                  iVar1 = mbedtls_mpi_copy(param_1 + 0x30, local_48);
                  if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 )) {
                     iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                     if (iVar1 == 0) goto LAB_001019e7;
                     iVar1 = mbedtls_mpi_copy(param_1 + 0x40, local_48);
                     if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 )) {
                        iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                        if (iVar1 == 0) goto LAB_001019e7;
                        iVar1 = mbedtls_mpi_copy(param_1 + 0x50, local_48);
                        if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 )) {
                           iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                           if (iVar1 == 0) goto LAB_001019e7;
                           iVar1 = mbedtls_mpi_copy(param_1 + 0x60, local_48);
                           if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
                              iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                              if (iVar1 == 0) goto LAB_001019e7;
                              iVar1 = mbedtls_mpi_copy(param_1 + 0x70, local_48);
                              if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
                                 iVar1 = mbedtls_mpi_cmp_int(local_48, 0);
                                 if (iVar1 == 0) goto LAB_001019e7;
                                 iVar1 = mbedtls_mpi_copy(param_1 + 0x80, local_48);
                                 if (( ( iVar1 == 0 ) && ( iVar1 = mbedtls_rsa_complete(param_1) ),iVar1 == 0 )) {
                                    if (local_50 == param_3) {
                                       mbedtls_mpi_free(local_48);
                                       goto LAB_00101700;
                                    }

                                    mbedtls_mpi_free(local_48);
                                    iVar1 = -0x66;
                                    goto LAB_001016ef;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         goto LAB_001016e7;
      }

      iVar1 = -0x4080;
      mbedtls_mpi_free(local_48);
   }
 else {
      LAB_001016e7:mbedtls_mpi_free(local_48);
   }

   LAB_001016ef:if (param_1 != 0) {
      mbedtls_rsa_free_part_0(param_1);
   }

   LAB_00101700:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
undefined8 mbedtls_rsa_check_privkey(long param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = mbedtls_rsa_check_pubkey();
   if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
      iVar1 = mbedtls_rsa_validate_params(param_1 + 0x10, param_1 + 0x40, param_1 + 0x50, param_1 + 0x30, param_1 + 0x20, 0, 0);
      if (( iVar1 == 0 ) && ( uVar2 = mbedtls_rsa_validate_crt(param_1 + 0x40, param_1 + 0x50, param_1 + 0x30, param_1 + 0x60, param_1 + 0x70, param_1 + 0x80) ),(int)uVar2 == 0) {
         return uVar2;
      }

   }

   return 0xffffbe00;
}
int mbedtls_rsa_gen_key(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, int param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 uVar9;
   uint uVar10;
   long in_FS_OFFSET;
   undefined1 local_78[8];
   short local_70;
   undefined1 local_68[16];
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_78);
   mbedtls_mpi_init(local_68);
   mbedtls_mpi_init(local_58);
   if (( ( param_5 < 3 ) || ( ( param_4 & 1 ) != 0 ) ) || ( uVar10 = uVar10 < 0x400 )) {
      mbedtls_mpi_free(local_78);
      mbedtls_mpi_free(local_68);
      mbedtls_mpi_free(local_58);
      if (param_1 != 0) {
         mbedtls_rsa_free_part_0(param_1);
      }

      iVar6 = -0x4080;
      goto LAB_00101d6a;
   }

   lVar1 = param_1 + 0x20;
   iVar6 = mbedtls_mpi_lset(lVar1, (long)param_5);
   if (iVar6 == 0) {
      lVar2 = param_1 + 0x50;
      cVar5 = ( 0x400 < uVar10 ) * '\x02';
      uVar7 = param_4 >> 1 & 0x7fffffff;
      lVar3 = param_1 + 0x40;
      do {
         do {
            do {
               iVar6 = mbedtls_mpi_gen_prime(lVar3, uVar7, cVar5, param_2, param_3);
               if (( ( iVar6 != 0 ) || ( iVar6 = mbedtls_mpi_gen_prime(lVar2, uVar7, cVar5, param_2, param_3) ),iVar6 != 0 )) goto LAB_00101d93;
               uVar8 = mbedtls_mpi_bitlen(local_78);
            }
 while ( uVar8 <= (int)uVar7 - 99 );
            if (local_70 < 0) {
               mbedtls_mpi_swap(lVar3, lVar2);
            }

            iVar6 = mbedtls_mpi_sub_int(lVar3, lVar3, 1);
            if (( ( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 ) ) || ( ( iVar6 = mbedtls_mpi_mul_mpi(local_78, lVar3, lVar2) ),iVar6 != 0 || ( iVar6 = mbedtls_mpi_gcd(local_68, lVar1, local_78) ),iVar6 != 0 )) goto LAB_00101d93;
            iVar6 = mbedtls_mpi_cmp_int(local_68, 1);
         }
 while ( iVar6 != 0 );
         iVar6 = mbedtls_mpi_gcd(local_68, lVar3, lVar2);
         if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_00101d93;
         lVar4 = param_1 + 0x30;
         iVar6 = mbedtls_mpi_inv_mod(lVar4, lVar1, local_58);
         if (iVar6 != 0) goto LAB_00101d93;
         uVar8 = mbedtls_mpi_bitlen(lVar4);
      }
 while ( uVar8 <= uVar10 + 1 >> 1 );
      iVar6 = mbedtls_mpi_add_int(lVar3, lVar3, 1);
      if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_00101d93;
      iVar6 = mbedtls_mpi_mul_mpi(param_1 + 0x10, lVar3, lVar2);
      if (iVar6 != 0) {
         mbedtls_mpi_free(local_78);
         mbedtls_mpi_free(local_68);
         mbedtls_mpi_free(local_58);
         goto LAB_00101dae;
      }

      uVar9 = mbedtls_mpi_size(param_1 + 0x10);
      *(undefined8*)( param_1 + 8 ) = uVar9;
      iVar6 = mbedtls_rsa_deduce_crt(lVar3, lVar2, lVar4, param_1 + 0x60, param_1 + 0x70, param_1 + 0x80);
      if (iVar6 == 0) {
         iVar6 = mbedtls_rsa_check_privkey(param_1);
         mbedtls_mpi_free(local_78);
         mbedtls_mpi_free(local_68);
         mbedtls_mpi_free(local_58);
         if (iVar6 == 0) goto LAB_00101d6a;
      }
 else {
         mbedtls_mpi_free(local_78);
         mbedtls_mpi_free(local_68);
         mbedtls_mpi_free(local_58);
      }

      LAB_00101e12:mbedtls_rsa_free_part_0(param_1);
   }
 else {
      LAB_00101d93:mbedtls_mpi_free(local_78);
      mbedtls_mpi_free(local_68);
      mbedtls_mpi_free(local_58);
      LAB_00101dae:if (param_1 != 0) goto LAB_00101e12;
   }

   if (( uint ) - iVar6 < 0x80) {
      iVar6 = iVar6 + -0x4180;
   }

   LAB_00101d6a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
}
undefined8 mbedtls_rsa_check_pub_priv(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = mbedtls_rsa_check_pubkey();
   if (( ( ( iVar1 == 0 ) && ( iVar1 = mbedtls_rsa_check_privkey(param_2) ),iVar1 == 0 ) ) && ( iVar1 = iVar1 == 0 )) {
      return uVar2;
   }

   return 0xffffbe00;
}
int mbedtls_rsa_public(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = rsa_check_context_isra_0(param_1, 0);
   if (iVar2 != 0) {
      iVar2 = -0x4080;
      goto LAB_00101f38;
   }

   mbedtls_mpi_init(local_48);
   iVar2 = mbedtls_mpi_read_binary(local_48, param_2, *(undefined8*)( param_1 + 8 ));
   if (iVar2 == 0) {
      iVar2 = mbedtls_mpi_cmp_mpi(local_48, param_1 + 0x10);
      if (-1 < iVar2) {
         mbedtls_mpi_free(local_48);
         iVar2 = -0x4284;
         goto LAB_00101f38;
      }

      uVar1 = *(undefined8*)( param_1 + 8 );
      iVar2 = mbedtls_mpi_exp_mod_unsafe(local_48, local_48, param_1 + 0x20, param_1 + 0x10, param_1 + 0x90);
      if (iVar2 == 0) {
         iVar2 = mbedtls_mpi_write_binary(local_48, param_3, uVar1);
         mbedtls_mpi_free(local_48);
         if (iVar2 != 0) {
            iVar2 = iVar2 + -0x4280;
         }

         goto LAB_00101f38;
      }

   }

   mbedtls_mpi_free(local_48);
   iVar2 = iVar2 + -0x4280;
   LAB_00101f38:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_rsa_private(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   bool bVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   int local_114;
   long local_110;
   undefined8 local_108[2];
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined8 local_68[2];
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( iVar4 = iVar4 != 0 )) {
      iVar4 = -0x4080;
      goto LAB_00102192;
   }

   mbedtls_mpi_init(local_108);
   mbedtls_mpi_init(local_f8);
   mbedtls_mpi_init(local_e8);
   mbedtls_mpi_init(local_d8);
   mbedtls_mpi_init(local_a8);
   mbedtls_mpi_init(local_98);
   mbedtls_mpi_init(local_c8);
   mbedtls_mpi_init(local_b8);
   mbedtls_mpi_init(local_88);
   mbedtls_mpi_init(local_78);
   iVar4 = mbedtls_mpi_read_binary(local_108, param_4, *(undefined8*)( param_1 + 8 ));
   if (iVar4 != 0) goto LAB_0010211c;
   lVar1 = param_1 + 0x10;
   iVar4 = mbedtls_mpi_cmp_mpi(local_108, lVar1);
   if (-1 < iVar4) {
      mbedtls_mpi_free(local_f8);
      mbedtls_mpi_free(local_e8);
      mbedtls_mpi_free(local_d8);
      mbedtls_mpi_free(local_a8);
      mbedtls_mpi_free(local_98);
      mbedtls_mpi_free(local_108);
      mbedtls_mpi_free(local_c8);
      mbedtls_mpi_free(local_b8);
      mbedtls_mpi_free(local_78);
      mbedtls_mpi_free(local_88);
      iVar4 = -0x4304;
      goto LAB_00102192;
   }

   mbedtls_mpi_init(local_58);
   if (*(long*)( param_1 + 0xd0 ) == 0) {
      local_114 = 0xc;
      while (true) {
         local_114 = local_114 + -1;
         if (local_114 == 0) {
            bVar7 = false;
            iVar4 = -0x4480;
            goto LAB_0010235e;
         }

         iVar4 = mbedtls_mpi_fill_random(param_1 + 0xd0, *(long*)( param_1 + 8 ) + -1, param_2, param_3);
         if (( iVar4 != 0 ) || ( iVar4 = mbedtls_mpi_fill_random(local_58, *(long*)( param_1 + 8 ) + -1, param_2, param_3) ),iVar4 != 0) break;
         lVar3 = param_1 + 0xc0;
         iVar4 = mbedtls_mpi_mul_mpi(lVar3, param_1 + 0xd0, local_58);
         if (( iVar4 != 0 ) || ( iVar4 = iVar4 != 0 )) break;
         iVar4 = mbedtls_mpi_inv_mod(lVar3, lVar3, lVar1);
         if (iVar4 == 0) {
            iVar4 = mbedtls_mpi_mul_mpi(lVar3, lVar3, local_58);
            if (( iVar4 != 0 ) || ( iVar4 = iVar4 != 0 )) goto LAB_00102774;
            iVar4 = mbedtls_mpi_exp_mod(lVar3, lVar3, param_1 + 0x20, lVar1, param_1 + 0x90);
            goto joined_r0x001023ce;
         }

         if (iVar4 != -0xe) break;
      }
;
      bVar7 = -0x80 < iVar4;
      LAB_0010235e:mbedtls_mpi_free(local_58);
   }
 else {
      lVar3 = param_1 + 0xc0;
      iVar4 = mbedtls_mpi_mul_mpi(lVar3, lVar3, lVar3);
      if (iVar4 == 0) {
         iVar4 = mbedtls_mpi_mod_mpi(lVar3, lVar3, lVar1);
         if (iVar4 == 0) {
            lVar3 = param_1 + 0xd0;
            iVar4 = mbedtls_mpi_mul_mpi(lVar3, lVar3, lVar3);
            if (iVar4 != 0) goto LAB_00102774;
            iVar4 = mbedtls_mpi_mod_mpi(lVar3, lVar3, lVar1);
            joined_r0x001023ce:if (iVar4 != 0) goto LAB_00102774;
            local_110 = param_1 + 0xd0;
            mbedtls_mpi_free(local_58);
            iVar4 = mbedtls_mpi_mul_mpi(local_108, local_108, param_1 + 0xc0);
            if (( ( iVar4 == 0 ) && ( iVar4 = mbedtls_mpi_mod_mpi(local_108, local_108, lVar1) ),iVar4 == 0 )) {
               lVar3 = param_1 + 0x40;
               iVar4 = mbedtls_mpi_sub_int(local_f8, lVar3, 1);
               if (iVar4 == 0) {
                  lVar2 = param_1 + 0x50;
                  iVar4 = mbedtls_mpi_sub_int(local_e8, lVar2, 1);
                  if (( ( ( ( iVar4 == 0 ) && ( iVar4 = mbedtls_mpi_fill_random(local_d8, 0x1c, param_2, param_3) ),iVar4 == 0 ) ) && ( ( iVar4 = mbedtls_mpi_mul_mpi(local_a8, local_f8, local_d8) ),iVar4 == 0 && ( ( iVar4 = mbedtls_mpi_add_mpi(local_a8, local_a8, param_1 + 0x60) ),iVar4 == 0 && ( iVar4 = mbedtls_mpi_fill_random(local_d8, 0x1c, param_2, param_3) ),iVar4 == 0 ) ) )) ( ( iVar4 = mbedtls_mpi_mul_mpi(local_98, local_e8, local_d8) ),iVar4 == 0 && ( ( ( ( iVar4 = mbedtls_mpi_add_mpi(local_98, local_98, param_1 + 0x70) ),iVar4 == 0 && ( iVar4 = mbedtls_mpi_exp_mod(local_c8, local_108, local_a8, lVar3, param_1 + 0xa0) ),iVar4 == 0 ) ) && ( iVar4 = mbedtls_mpi_exp_mod(local_b8, local_108, local_98, lVar2, param_1 + 0xb0) ),iVar4 == 0 ) ) && ( ( iVar4 = mbedtls_mpi_sub_mpi(local_108, local_c8, local_b8) ),iVar4 == 0 && ( iVar4 = mbedtls_mpi_mul_mpi(local_c8, local_108, param_1 + 0x80) ),iVar4 == 0 ) && ( ( ( iVar4 = mbedtls_mpi_mod_mpi(local_108, local_c8, lVar3) ),iVar4 == 0 && ( ( iVar4 = mbedtls_mpi_mul_mpi(local_c8, local_108, lVar2) ),iVar4 == 0 && ( iVar4 = mbedtls_mpi_add_mpi(local_108, local_b8, local_c8) ),iVar4 == 0 ) ) ) && ( iVar4= mbedtls_mpi_exp_mod(local_78,local_108,param_1 + 0x20,lVar1,param_1 + 0x90),iVar4 == 0 )))) {
              iVar4 = mbedtls_mpi_cmp_mpi(local_78,local_88;
                  if (iVar4 != 0) {
                     mbedtls_mpi_free(local_f8);
                     mbedtls_mpi_free(local_e8);
                     mbedtls_mpi_free(local_d8);
                     mbedtls_mpi_free(local_a8);
                     mbedtls_mpi_free(local_98);
                     mbedtls_mpi_free(local_108);
                     mbedtls_mpi_free(local_c8);
                     mbedtls_mpi_free(local_b8);
                     mbedtls_mpi_free(local_78);
                     mbedtls_mpi_free(local_88);
                     iVar4 = -0x4380;
                     goto LAB_00102192;
                  }

                  uVar5 = mbedtls_mpi_core_montmul_init(*(undefined8*)( param_1 + 0x10 ));
                  uVar8 = ( ulong ) * (ushort*)( param_1 + 0x1a );
                  mbedtls_mpi_init(local_68);
                  mbedtls_mpi_init(local_58);
                  uVar6 = mbedtls_mpi_core_get_mont_r2_unsafe(local_68, lVar1);
                  if (( ( ( (int)uVar6 == 0 ) && ( uVar6 = mbedtls_mpi_grow(local_58, uVar8 * 2 + 1) ),(int)uVar6 == 0 ) ) && ( uVar6 = mbedtls_mpi_grow(local_108, uVar8) ),(int)uVar6 == 0) {
                     mbedtls_mpi_core_to_mont_rep(local_108[0], local_108[0], *(undefined8*)( param_1 + 0x10 ), uVar8, uVar5, local_68[0], local_58[0], uVar6);
                     mbedtls_mpi_core_montmul(local_108[0], local_108[0], *(undefined8*)( param_1 + 0xd0 ), uVar8, *(undefined8*)( param_1 + 0x10 ), uVar8, uVar5, local_58[0]);
                     mbedtls_mpi_free(local_68);
                     mbedtls_mpi_free(local_58);
                     iVar4 = mbedtls_mpi_write_binary(local_108, param_5, *(undefined8*)( param_1 + 8 ));
                     bVar7 = iVar4 != 0 && -0x80 < iVar4;
                     goto LAB_00102122;
                  }

                  iVar4 = (int)uVar6;
                  mbedtls_mpi_free(local_68);
                  goto LAB_00102774;
               }

            }

         }

      }
 else {
         LAB_00102774:mbedtls_mpi_free(local_58);
      }

      LAB_0010211c:bVar7 = -0x80 < iVar4;
   }

   else{mbedtls_mpi_free(local_58);
   bVar7 = -0x80 < iVar4;
}
}LAB_00102122:mbedtls_mpi_free(local_f8);mbedtls_mpi_free(local_e8);mbedtls_mpi_free(local_d8);mbedtls_mpi_free(local_a8);mbedtls_mpi_free(local_98);mbedtls_mpi_free(local_108);mbedtls_mpi_free(local_c8);mbedtls_mpi_free(local_b8);mbedtls_mpi_free(local_78);mbedtls_mpi_free(local_88);if (bVar7) {
   iVar4 = iVar4 + -0x4300;
}
LAB_00102192:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar4;}ulong rsa_rsassa_pss_sign_no_mode_check(long param_1, code *param_2, undefined8 param_3, int param_4, uint param_5, long param_6, int param_7, byte *param_8) {
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   if (param_5 == 0 && param_4 == 0) {
      if (param_2 == (code*)0x0) {
         return 0xffffbf80;
      }

      uVar9 = *(ulong*)( param_1 + 8 );
   }
 else {
      if (param_6 == 0) {
         return 0xffffbf80;
      }

      if (param_2 == (code*)0x0) {
         return 0xffffbf80;
      }

      uVar9 = *(ulong*)( param_1 + 8 );
      if (param_4 != 0) {
         uVar6 = mbedtls_md_info_from_type(param_4);
         bVar3 = mbedtls_md_get_size(uVar6);
         if (bVar3 == 0) {
            return 0xffffbf80;
         }

         if (bVar3 != param_5) {
            return 0xffffbf80;
         }

      }

   }

   if (*(int*)( param_1 + 0xe4 ) != 0) {
      param_4 = *(int*)( param_1 + 0xe4 );
   }

   uVar6 = mbedtls_md_info_from_type(param_4);
   bVar3 = mbedtls_md_get_size(uVar6);
   uVar10 = (ulong)bVar3;
   if (uVar10 != 0) {
      if (param_7 == -1) {
         if (uVar10 * 2 <= uVar9) {
            uVar8 = ( uVar9 - 2 ) - uVar10;
            if (uVar10 * 2 + 2 <= uVar9) {
               uVar8 = uVar10;
            }

            goto LAB_0010290e;
         }

      }
 else if (( -1 < param_7 ) && ( uVar8 = (long)param_7 ),(long)param_7 + 2U + uVar10 <= uVar9) {
         LAB_0010290e:memset(param_8, 0, uVar9);
         lVar7 = mbedtls_mpi_bitlen(param_1 + 0x10);
         pbVar1 = param_8 + ( uVar9 - uVar10 ) + ( -2 - uVar8 ) + 1;
         param_8[( uVar9 - uVar10 ) + ( -2 - uVar8 )] = 1;
         iVar5 = ( *param_2 )(param_3, pbVar1, uVar8);
         if (iVar5 != 0) {
            return ( ulong )(iVar5 - 0x4480);
         }

         pbVar2 = pbVar1 + uVar8;
         uVar8 = hash_mprime(param_6, param_5, pbVar1, uVar8, pbVar2, param_4);
         if ((int)uVar8 == 0) {
            uVar8 = ( ulong )(( lVar7 - 1U & 7 ) == 0);
            uVar8 = mgf_mask(param_8 + uVar8, ( ( uVar9 - uVar10 ) + -1 ) - uVar8, pbVar2, uVar10, param_4);
            if ((int)uVar8 == 0) {
               cVar4 = mbedtls_mpi_bitlen(param_1 + 0x10);
               *param_8 = *param_8 & ( byte )(0xff >> ( (char)uVar9 * '\b' - ( cVar4 + -1 ) & 0x1fU ));
               pbVar2[uVar10] = 0xbc;
               uVar9 = mbedtls_rsa_private(param_1, param_2, param_3, param_8, param_8);
               return uVar9;
            }

            return uVar8;
         }

         return uVar8;
      }

   }

   return 0xffffbf80;
}
ulong mbedtls_rsa_rsaes_oaep_encrypt(long param_1, code *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, void *param_7, undefined1 *param_8) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   ulong __n;
   byte bVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   if (param_2 != (code*)0x0) {
      uVar5 = mbedtls_md_info_from_type(*(undefined4*)( param_1 + 0xe4 ));
      bVar3 = mbedtls_md_get_size(uVar5);
      uVar8 = (ulong)bVar3;
      if (bVar3 != 0) {
         __n = *(ulong*)( param_1 + 8 );
         uVar7 = ( ulong )((uint)bVar3 + (uint)bVar3) + 2 + param_6;
         if (( param_6 <= uVar7 ) && ( uVar7 <= __n )) {
            memset(param_8, 0, __n);
            puVar1 = param_8 + 1;
            *param_8 = 0;
            iVar4 = ( *param_2 )(param_3, puVar1, uVar8);
            if (iVar4 != 0) {
               return ( ulong )(iVar4 - 0x4480);
            }

            puVar2 = puVar1 + uVar8;
            lVar6 = mbedtls_md_info_from_type(*(undefined4*)( param_1 + 0xe4 ));
            if (lVar6 != 0) {
               uVar7 = mbedtls_md(lVar6, param_4, param_5, puVar2);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               puVar2[( ( uVar8 - 2 ) + ( __n - param_6 ) ) - ( ulong )((uint)bVar3 + (uint)bVar3)] = 1;
               if (param_6 != 0) {
                  memcpy(puVar2 + ( ( ( uVar8 - 2 ) + ( __n - param_6 ) ) - ( ulong )((uint)bVar3 + (uint)bVar3) ) + 1, param_7, param_6);
               }

               lVar6 = ( __n - 1 ) - uVar8;
               uVar7 = mgf_mask(param_8 + uVar8 + 1, lVar6, puVar1, uVar8, *(undefined4*)( param_1 + 0xe4 ));
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               uVar8 = mgf_mask(puVar1, uVar8, param_8 + uVar8 + 1, lVar6, *(undefined4*)( param_1 + 0xe4 ));
               if ((int)uVar8 != 0) {
                  return uVar8;
               }

               uVar8 = mbedtls_rsa_public(param_1, param_8, param_8);
               return uVar8;
            }

         }

      }

   }

   return 0xffffbf80;
}
ulong mbedtls_rsa_rsaes_pkcs1_v15_encrypt(long param_1, code *param_2, undefined8 param_3, ulong param_4, void *param_5, undefined1 *param_6) {
   char *pcVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   char *pcVar6;
   if (( 0xfffffffffffffff4 < param_4 ) || ( *(ulong*)( param_1 + 8 ) < param_4 + 0xb )) {
      return 0xffffbf80;
   }

   lVar3 = *(ulong*)( param_1 + 8 ) - param_4;
   *param_6 = 0;
   if (param_2 == (code*)0x0) {
      return 0xffffbf80;
   }

   param_6[1] = 2;
   if (lVar3 == 3) {
      param_6[2] = 0;
      pcVar6 = param_6 + 3;
   }
 else {
      pcVar1 = param_6 + 2;
      do {
         pcVar6 = pcVar1;
         iVar5 = 100;
         while (iVar2 = ( *param_2 )(param_3, pcVar6, 1),*pcVar6 == '\0') {
            iVar5 = iVar5 + -1;
            if (( iVar5 == 0 ) || ( iVar2 != 0 )) goto LAB_00102ce0;
         }
;
         if (iVar2 != 0) {
            LAB_00102ce0:return ( ulong )(iVar2 - 0x4480);
         }

         pcVar1 = pcVar6 + 1;
      }
 while ( pcVar6 + 1 != param_6 + lVar3 + -1 );
      param_6[lVar3 + -1] = '\0';
      if (param_4 == 0) goto LAB_00102d00;
      pcVar6 = pcVar6 + 2;
   }

   memcpy(pcVar6, param_5, param_4);
   LAB_00102d00:uVar4 = mbedtls_rsa_public(param_1, param_6, param_6);
   return uVar4;
}
undefined8 mbedtls_rsa_pkcs1_encrypt(long param_1) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0xe0 ) == 0) {
      uVar1 = mbedtls_rsa_rsaes_pkcs1_v15_encrypt();
      return uVar1;
   }

   if (*(int*)( param_1 + 0xe0 ) != 1) {
      return 0xffffbf00;
   }

   uVar1 = mbedtls_rsa_rsaes_oaep_encrypt();
   return uVar1;
}
int mbedtls_rsa_rsaes_oaep_decrypt(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong *param_6, undefined8 param_7, void *param_8, ulong param_9) {
   byte *pbVar1;
   byte bVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   byte *pbVar7;
   byte *pbVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined1 local_488[63];
   byte abStack_449[1033];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0xe0 ) == 1) {
      uVar12 = *(ulong*)( param_1 + 8 );
      if (uVar12 - 0x10 < 0x3f1) {
         uVar6 = mbedtls_md_info_from_type(*(undefined4*)( param_1 + 0xe4 ));
         bVar2 = mbedtls_md_get_size(uVar6);
         uVar11 = (ulong)bVar2;
         if (( bVar2 != 0 ) && ( uVar3 = uVar3 <= uVar12 )) {
            pbVar1 = abStack_449 + 1;
            iVar4 = mbedtls_rsa_private(param_1, param_2, param_3, param_7, pbVar1);
            if (iVar4 == 0) {
               pbVar7 = abStack_449 + 2;
               lVar10 = ( uVar12 - 1 ) - uVar11;
               iVar4 = mgf_mask(pbVar7, uVar11, abStack_449 + uVar11 + 2, lVar10, *(undefined4*)( param_1 + 0xe4 ));
               if (iVar4 == 0) {
                  iVar4 = mgf_mask(abStack_449 + uVar11 + 2, lVar10, pbVar7, uVar11, *(undefined4*)( param_1 + 0xe4 ));
                  if (iVar4 == 0) {
                     lVar10 = mbedtls_md_info_from_type(*(undefined4*)( param_1 + 0xe4 ));
                     if (lVar10 == 0) {
                        iVar4 = -0x4080;
                     }
 else {
                        iVar4 = mbedtls_md(lVar10, param_4, param_5, local_488);
                        if (iVar4 == 0) {
                           iVar5 = mbedtls_ct_memcmp(local_488, pbVar7 + uVar11, uVar11);
                           pbVar7 = pbVar7 + uVar11 + uVar11;
                           uVar11 = 0xffffffffffffffff;
                           lVar10 = uVar12 - ( uVar3 - 2 );
                           if (lVar10 != 2) {
                              lVar9 = 0;
                              pbVar8 = pbVar7;
                              do {
                                 bVar2 = *pbVar8;
                                 pbVar8 = pbVar8 + 1;
                                 uVar11 = uVar11 & ~((long)(-(ulong)bVar2 | (ulong)bVar2) >> 0x3f);
                                 lVar9 = lVar9 + ( ulong )((uint)uVar11 & 1);
                              }
 while ( pbVar8 != pbVar7 + lVar10 + -2 );
                              pbVar7 = pbVar7 + lVar9;
                           }

                           if ((long)( -(long)iVar5 | (long)iVar5 | -(ulong)abStack_449[1] | (ulong)abStack_449[1] | -((ulong)*pbVar7 ^ 1) | ( ulong ) * pbVar7 ^ 1 ) < 0) {
                              iVar4 = -0x4100;
                           }
 else {
                              uVar12 = uVar12 - ( (long)( pbVar7 + 1 ) - (long)pbVar1 );
                              if (param_9 < uVar12) {
                                 iVar4 = -0x4400;
                              }
 else {
                                 *param_6 = uVar12;
                                 if (uVar12 != 0) {
                                    memcpy(param_8, pbVar7 + 1, uVar12);
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

            mbedtls_platform_zeroize(pbVar1, 0x400);
            mbedtls_platform_zeroize(local_488, 0x40);
            goto LAB_00102e95;
         }

      }

   }

   iVar4 = -0x4080;
   LAB_00102e95:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_rsa_rsaes_pkcs1_v15_decrypt(long param_1, undefined8 param_2, undefined8 param_3, ulong *param_4, undefined8 param_5, byte *param_6, ulong param_7) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   byte *pbVar8;
   undefined8 *puVar9;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   byte bVar14;
   undefined8 local_450;
   byte local_448[11];
   undefined1 local_43d[1021];
   long local_40;
   bVar14 = 0;
   lVar12 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_1 + 0xe0 ) == 0 ) && ( lVar12 - 0x10U < 0x3f1 )) {
      iVar4 = mbedtls_rsa_private();
      if (iVar4 == 0) {
         uVar13 = lVar12 - 0xb;
         uVar7 = uVar13;
         if (param_7 <= uVar13) {
            uVar7 = param_7;
         }

         uVar6 = 0;
         uVar10 = 0;
         pbVar8 = local_448 + 2;
         do {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar6 = uVar6 | ~((long)(-(ulong)bVar1 | (ulong)bVar1) >> 0x3f);
            uVar10 = uVar10 + ( (uint)~uVar6 & 1 );
         }
 while ( pbVar8 != local_448 + lVar12 );
         uVar11 = (long)( -(ulong)local_448[0] | (ulong)local_448[0] | -((ulong)local_448[1] ^ 2) | (ulong)local_448[1] ^ 2 ) >> 0x3f | ~uVar6 | (long)( uVar10 - 8 & ~(uVar10 ^ 8) | ( uVar10 ^ 8 ) & 8 ) >> 0x3f;
         uVar2 = (uint)uVar7;
         uVar3 = (uint)uVar11;
         uVar5 = ( (int)lVar12 - (int)uVar10 ) - 3U & ~uVar3 | uVar2 & uVar3;
         uVar10 = (ulong)uVar5;
         uVar6 = uVar7 - uVar10 & ~(uVar7 ^ uVar10);
         local_450 = (long)( uVar6 | uVar10 & ( uVar7 ^ uVar10 ) ) >> 0x3f;
         iVar4 = -((uint)((long)uVar6 >> 0x3f) & 0x4400 & ~uVar3 | uVar3 & 0x4100);
         mbedtls_ct_zeroize_if(uVar11 | local_450, local_43d, uVar13);
         lVar12 = lVar12 - uVar7;
         uVar13 = ( ulong )(uVar5 & ~(uint)local_450 | uVar2 & (uint)local_450);
         pbVar8 = local_448 + lVar12;
         mbedtls_ct_memmove_left(pbVar8, uVar7, uVar7 - uVar13);
         if (param_7 != 0) {
            if (uVar2 < 8) {
               if (( uVar7 & 4 ) == 0) {
                  if (( uVar2 != 0 ) && ( *param_6 = *pbVar8(uVar7 & 2) != 0 )) {
                     *(undefined2*)( param_6 + ( ( uVar7 & 0xffffffff ) - 2 ) ) = *(undefined2*)( local_448 + ( uVar7 & 0xffffffff ) + lVar12 + -2 );
                  }

               }
 else {
                  *(undefined4*)param_6 = *(undefined4*)pbVar8;
                  *(undefined4*)( param_6 + ( ( uVar7 & 0xffffffff ) - 4 ) ) = *(undefined4*)( local_448 + ( uVar7 & 0xffffffff ) + lVar12 + -4 );
               }

            }
 else {
               *(undefined8*)param_6 = *(undefined8*)pbVar8;
               *(undefined8*)( param_6 + ( ( uVar7 & 0xffffffff ) - 8 ) ) = *(undefined8*)( local_448 + ( uVar7 & 0xffffffff ) + lVar12 + -8 );
               lVar12 = (long)param_6 - (long)( ( ulong )(param_6 + 8) & 0xfffffffffffffff8 );
               pbVar8 = pbVar8 + -lVar12;
               puVar9 = (undefined8*)( ( ulong )(param_6 + 8) & 0xfffffffffffffff8 );
               for (uVar7 = ( ulong )(uVar2 + (int)lVar12 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar9 = *(undefined8*)pbVar8;
                  pbVar8 = pbVar8 + ( (ulong)bVar14 * -2 + 1 ) * 8;
                  puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
               }

            }

         }

         *param_4 = uVar13;
      }

      mbedtls_platform_zeroize(local_448, 0x400);
   }
 else {
      iVar4 = -0x4080;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
undefined8 mbedtls_rsa_pkcs1_decrypt(long param_1) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0xe0 ) == 0) {
      uVar1 = mbedtls_rsa_rsaes_pkcs1_v15_decrypt();
      return uVar1;
   }

   if (*(int*)( param_1 + 0xe0 ) == 1) {
      uVar1 = mbedtls_rsa_rsaes_oaep_decrypt();
      return uVar1;
   }

   return 0xffffbf00;
}
void mbedtls_rsa_rsassa_pss_sign_no_mode_check(void) {
   rsa_rsassa_pss_sign_no_mode_check();
   return;
}
undefined8 mbedtls_rsa_rsassa_pss_sign_ext(long param_1, undefined8 param_2, undefined8 param_3, int param_4) {
   undefined8 uVar1;
   if (( *(int*)( param_1 + 0xe0 ) == 1 ) && ( param_4 != 0 || *(int*)( param_1 + 0xe4 ) != 0 )) {
      uVar1 = rsa_rsassa_pss_sign_no_mode_check();
      return uVar1;
   }

   return 0xffffbf80;
}
undefined8 mbedtls_rsa_rsassa_pss_sign(long param_1, undefined8 param_2, undefined8 param_3, int param_4) {
   undefined8 uVar1;
   if (( *(int*)( param_1 + 0xe0 ) == 1 ) && ( param_4 != 0 || *(int*)( param_1 + 0xe4 ) != 0 )) {
      uVar1 = rsa_rsassa_pss_sign_no_mode_check();
      return uVar1;
   }

   return 0xffffbf80;
}
int mbedtls_rsa_rsassa_pkcs1_v15_sign(long param_1, undefined8 param_2, undefined8 param_3, int param_4, int param_5, long param_6, void *param_7) {
   size_t __size;
   int iVar1;
   void *__ptr;
   void *pvVar2;
   if (( ( param_4 == 0 && param_5 == 0 ) || ( param_6 != 0 ) ) && ( *(int*)( param_1 + 0xe0 ) == 0 )) {
      iVar1 = rsa_rsassa_pkcs1_v15_encode(param_4, param_5, param_6, *(undefined8*)( param_1 + 8 ), param_7);
      if (iVar1 == 0) {
         __size = *(size_t*)( param_1 + 8 );
         __ptr = calloc(1, __size);
         if (__ptr != (void*)0x0) {
            pvVar2 = calloc(1, __size);
            if (pvVar2 != (void*)0x0) {
               iVar1 = mbedtls_rsa_private(param_1, param_2, param_3, param_7, __ptr);
               if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
                  iVar1 = mbedtls_ct_memcmp(pvVar2, param_7, *(undefined8*)( param_1 + 8 ));
                  if (iVar1 == 0) {
                     memcpy(param_7, __ptr, *(size_t*)( param_1 + 8 ));
                     mbedtls_zeroize_and_free(__ptr, *(undefined8*)( param_1 + 8 ));
                     mbedtls_zeroize_and_free(pvVar2, *(undefined8*)( param_1 + 8 ));
                     return 0;
                  }

                  iVar1 = -0x4300;
               }

               mbedtls_zeroize_and_free(__ptr, *(undefined8*)( param_1 + 8 ));
               mbedtls_zeroize_and_free(pvVar2, *(undefined8*)( param_1 + 8 ));
               memset(param_7, 0x21, *(size_t*)( param_1 + 8 ));
               return iVar1;
            }

            free(__ptr);
         }

         iVar1 = -0x10;
      }

   }
 else {
      iVar1 = -0x4080;
   }

   return iVar1;
}
undefined1[16];mbedtls_rsa_pkcs1_sign(long param_1, undefined8 param_2, undefined8 param_3, int param_4, int param_5, long param_6) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   if (( param_4 == 0 && param_5 == 0 ) || ( param_6 != 0 )) {
      if (*(int*)( param_1 + 0xe0 ) == 0) {
         auVar3 = mbedtls_rsa_rsassa_pkcs1_v15_sign();
         return auVar3;
      }

      if (*(int*)( param_1 + 0xe0 ) != 1) {
         uVar1 = 0xffffbf00;
         goto LAB_0010361d;
      }

      if (param_4 != 0 || *(int*)( param_1 + 0xe4 ) != 0) {
         auVar3._0_8_ = rsa_rsassa_pss_sign_no_mode_check();
         auVar3._8_8_ = 0xffffffffffffffff;
         return auVar3;
      }

   }

   uVar1 = 0xffffbf80;
   LAB_0010361d:auVar2._8_8_ = param_3;
   auVar2._0_8_ = uVar1;
   return auVar2;
}
int mbedtls_rsa_rsassa_pss_verify_ext(long param_1, int param_2, uint param_3, long param_4, undefined4 param_5, int param_6, undefined8 param_7) {
   byte bVar1;
   char *__s1;
   ulong uVar2;
   byte bVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   char *pcVar8;
   ulong uVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   undefined1 local_488[63];
   char cStack_449;
   undefined8 local_448;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar10 = (char*)&local_448;
   for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
      for (int i = 0; i < 8; i++) {
         pcVar10[i] = '\0';
      }

      pcVar10 = pcVar10 + 8;
   }

   if (( ( param_2 == 0 && param_3 == 0 ) || ( param_4 != 0 ) ) && ( uVar9 = uVar9 - 0x10 < 0x3f1 )) {
      iVar5 = mbedtls_rsa_public(param_1, param_7, &local_448);
      if (iVar5 != 0) goto LAB_00103849;
      if (( &cStack_449 )[uVar9] != -0x44) {
         LAB_001038b8:iVar5 = -0x4100;
         goto LAB_00103849;
      }

      if (param_2 != 0) {
         uVar6 = mbedtls_md_info_from_type(param_2);
         bVar3 = mbedtls_md_get_size(uVar6);
         if (( bVar3 == 0 ) || ( param_3 != bVar3 )) goto LAB_00103890;
      }

      uVar6 = mbedtls_md_info_from_type(param_5);
      bVar3 = mbedtls_md_get_size(uVar6);
      if (bVar3 != 0) {
         cVar4 = mbedtls_mpi_bitlen(param_1 + 0x10);
         bVar1 = cVar4 - 1;
         if ((int)(uint)(byte)local_448 >> ( bVar1 + ( '\x01' - (char)uVar9 ) * '\b' & 0x1f ) == 0) {
            pcVar10 = (char*)( (long)&local_448 + 1 );
            uVar2 = uVar9 - 1;
            if (( bVar1 & 7 ) != 0) {
               pcVar10 = (char*)&local_448;
               uVar2 = uVar9;
            }

            if (bVar3 + 2 <= uVar2) {
               uVar9 = (ulong)bVar3;
               lVar7 = ( uVar2 - uVar9 ) + -1;
               __s1 = pcVar10 + lVar7;
               iVar5 = mgf_mask(pcVar10, lVar7, __s1, uVar9, param_5);
               if (iVar5 != 0) goto LAB_00103849;
               local_448._0_1_ = (byte)local_448 & ( byte )(0xff >> ( (char)uVar2 * '\b' - bVar1 & 0x1f ));
               if (pcVar10 < __s1 + -1) {
                  do {
                     pcVar8 = pcVar10;
                     cVar4 = *pcVar8;
                     pcVar10 = pcVar8 + 1;
                     if (cVar4 != '\0') goto LAB_001037f7;
                  }
 while ( pcVar10 != __s1 + -1 );
                  cVar4 = pcVar8[1];
                  pcVar8 = pcVar10;
               }
 else {
                  cVar4 = *pcVar10;
                  pcVar8 = pcVar10;
               }

               LAB_001037f7:if (cVar4 == '\x01') {
                  lVar7 = (long)__s1 - (long)( pcVar8 + 1 );
                  if (( param_6 == -1 ) || ( param_6 == lVar7 )) {
                     iVar5 = hash_mprime(param_4, param_3, pcVar8 + 1, lVar7, local_488, param_5);
                     if (iVar5 == 0) {
                        iVar5 = memcmp(__s1, local_488, uVar9);
                        if (iVar5 != 0) {
                           iVar5 = -0x4380;
                        }

                     }

                     goto LAB_00103849;
                  }

               }

               goto LAB_001038b8;
            }

         }

      }

   }

   LAB_00103890:iVar5 = -0x4080;
   LAB_00103849:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
undefined8 mbedtls_rsa_rsassa_pss_verify(undefined8 param_1, int param_2, int param_3, long param_4) {
   undefined8 uVar1;
   if (( param_2 != 0 || param_3 != 0 ) && ( param_4 == 0 )) {
      return 0xffffbf80;
   }

   uVar1 = mbedtls_rsa_rsassa_pss_verify_ext();
   return uVar1;
}
int mbedtls_rsa_rsassa_pkcs1_v15_verify(long param_1, int param_2, int param_3, long param_4, undefined8 param_5) {
   size_t __size;
   int iVar1;
   void *pvVar2;
   void *pvVar3;
   if (( param_2 != 0 || param_3 != 0 ) && ( param_4 == 0 )) {
      return -0x4080;
   }

   __size = *(size_t*)( param_1 + 8 );
   pvVar2 = calloc(1, __size);
   if (pvVar2 != (void*)0x0) {
      pvVar3 = calloc(1, __size);
      if (pvVar3 != (void*)0x0) {
         iVar1 = rsa_rsassa_pkcs1_v15_encode(param_2, param_3, param_4, __size, pvVar3);
         if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
            iVar1 = mbedtls_ct_memcmp(pvVar2, pvVar3, __size);
            if (iVar1 == 0) {
               mbedtls_zeroize_and_free(pvVar2, __size);
               iVar1 = 0;
            }
 else {
               mbedtls_zeroize_and_free(pvVar2, __size);
               iVar1 = -0x4380;
            }

         }
 else {
            mbedtls_zeroize_and_free(pvVar2, __size);
         }

         mbedtls_zeroize_and_free(pvVar3, __size);
         return iVar1;
      }

      mbedtls_zeroize_and_free(pvVar2, __size);
   }

   return -0x10;
}
undefined8 mbedtls_rsa_pkcs1_verify(long param_1, int param_2, int param_3, long param_4) {
   undefined8 uVar1;
   if (( param_2 != 0 || param_3 != 0 ) && ( param_4 == 0 )) {
      return 0xffffbf80;
   }

   if (*(int*)( param_1 + 0xe0 ) == 0) {
      uVar1 = mbedtls_rsa_rsassa_pkcs1_v15_verify();
      return uVar1;
   }

   if (*(int*)( param_1 + 0xe0 ) != 1) {
      return 0xffffbf00;
   }

   uVar1 = mbedtls_rsa_rsassa_pss_verify_ext();
   return uVar1;
}
int mbedtls_rsa_copy(long param_1, long param_2) {
   int iVar1;
   *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   iVar1 = mbedtls_mpi_copy();
   if (( ( ( ( iVar1 == 0 ) && ( iVar1 = mbedtls_mpi_copy(param_1 + 0x20, param_2 + 0x20) ),iVar1 == 0 ) ) && ( iVar1 = mbedtls_mpi_copy(param_1 + 0x30, param_2 + 0x30) ),iVar1 == 0 )) &&( ( ( iVar1 = mbedtls_mpi_copy(param_1 + 0x40, param_2 + 0x40) ),iVar1 == 0 && ( iVar1 = mbedtls_mpi_copy(param_1 + 0x50, param_2 + 0x50) ),iVar1 == 0 ) ) && ( ( iVar1 = mbedtls_mpi_copy(param_1 + 0x60, param_2 + 0x60) ),iVar1 == 0 && ( ( iVar1 = mbedtls_mpi_copy(param_1 + 0x70, param_2 + 0x70) ),iVar1 == 0 && ( iVar1 = mbedtls_mpi_copy(param_1 + 0x80, param_2 + 0x80) ),iVar1 == 0 ) ) && ( ( iVar1 = mbedtls_mpi_copy(param_1 + 0xa0, param_2 + 0xa0) ),iVar1 == 0 && ( ( ( ( iVar1 = mbedtls_mpi_copy(param_1 + 0xb0, param_2 + 0xb0) ),iVar1 == 0 && ( iVar1 = mbedtls_mpi_copy(param_1 + 0x90, param_2 + 0x90) ),iVar1 == 0 ) ) && ( iVar1 = mbedtls_mpi_copy(param_1 + 0xc0, param_2 + 0xc0) ),iVar1 == 0 ) ) && ( iVar1 = iVar1 == 0 ) * (undefined8*)( param_1 + 0xe0 ) = *(undefined8*)( param_2 + 0xe0 );
   return 0;
}
mbedtls_rsa_free_part_0(param_1);return iVar1;}void mbedtls_rsa_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_rsa_free_part_0();
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_rsa_self_test(int param_1) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   char *pcVar5;
   undefined8 *puVar6;
   undefined1 *puVar7;
   long in_FS_OFFSET;
   byte bVar8;
   size_t local_230;
   undefined1 local_228[16];
   undefined8 local_218;
   undefined8 local_210;
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined1 local_1e8[16];
   undefined1 local_1d8[16];
   undefined1 local_1c8[160];
   undefined1 local_128[32];
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined1 local_e8[32];
   undefined1 local_c8[136];
   long local_40;
   bVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_228);
   puVar6 = &local_218;
   for (lVar4 = 0x1d; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
   }

   iVar1 = mbedtls_mpi_read_string(local_228, 0x10, "9292758453063D803DD603D5E777D7888ED1D5BF35786190FA2F23EBC0848AEADDA92CA6C3D80B32C4D109BE0F36D6AE7130B9CED7ACDF54CFC7555AC14EEBAB93A89813FBF3C4F8066D2D800F7C38A81AE31942917403FF4946B0A83D3D3E05EE57C6F5F5606FB5D4BC6CD34EE0801A5E94BB77B07507233A0BC7BAC8F90F79");
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_copy(local_208, local_228);
      if (iVar1 == 0) {
         local_210 = mbedtls_mpi_size(local_208);
      }
 else {
         iVar1 = iVar1 + -0x4080;
         if (iVar1 != 0) goto LAB_00103cb5;
      }

      iVar1 = mbedtls_mpi_read_string(local_228, 0x10, "C36D0EB7FCD285223CFB5AABA5BDA3D82C01CAD19EA484A87EA4377637E75500FCB2005C5C7DD6EC4AC023CDA285D796C3D9E75E1EFC42488BB4F1D13AC30A57");
      if (( ( ( iVar1 == 0 ) && ( ( ( ( iVar1 = mbedtls_mpi_copy(local_1d8, local_228) ),iVar1 == 0 || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 ) ) && ( iVar1 = mbedtls_mpi_read_string(local_228, 0x10, "C000DF51A7C77AE8D7C7370C1FF55B69E211C2B9E5DB1ED0BF61D0D9899620F4910E4168387E3C30AA1E00C339A795088452DD96A9A5EA5D9DCA68DA636032AF") ),iVar1 == 0 ) ) && ( ( iVar1 = mbedtls_mpi_copy(local_1c8, local_228) ),iVar1 == 0 || ( iVar1 = iVar1 + -0x4080 ),iVar1 == 0 ) )) {
         if (param_1 == 0) {
            iVar2 = mbedtls_rsa_check_pubkey(&local_218);
            if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
               local_f8 = 0xddddddddddcc0c0b;
               local_108 = __LC15;
               uStack_100 = _UNK_00104578;
               uVar3 = mbedtls_rsa_pkcs1_encrypt(&local_218, myrand, 0, 0x18, &local_108, local_c8);
               if ((int)uVar3 == 0) {
                  puVar7 = local_e8;
                  iVar2 = mbedtls_rsa_pkcs1_decrypt(&local_218, myrand, 0, &local_230, local_c8, local_e8, 0x18, uVar3);
                  if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
                     uVar3 = mbedtls_md_info_from_type(5);
                     iVar2 = mbedtls_md(uVar3, &local_108, 0x18, local_128);
                     if (iVar2 != 0) {
                        LAB_00103f04:iVar1 = 1;
                        goto LAB_00103cc5;
                     }

                     iVar2 = mbedtls_rsa_pkcs1_sign(&local_218, myrand, 0, 5, 0x14, local_128, local_c8, puVar7);
                     if (( iVar2 == 0 ) && ( iVar2 = mbedtls_rsa_pkcs1_verify(&local_218, 5, 0x14, local_128, local_c8) ),iVar2 == 0) goto LAB_00103cb5;
                  }

               }

            }

         }
 else {
            __printf_chk(2, "  RSA key validation: ");
            iVar2 = mbedtls_rsa_check_pubkey(&local_218);
            if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
               __printf_chk(2, "passed\n  PKCS#1 encryption : ");
               puVar6 = &local_108;
               local_f8 = 0xddddddddddcc0c0b;
               local_108 = __LC15;
               uStack_100 = _UNK_00104578;
               iVar2 = mbedtls_rsa_pkcs1_encrypt(&local_218, myrand, 0, 0x18, puVar6, local_c8);
               if (iVar2 == 0) {
                  pcVar5 = "passed\n  PKCS#1 decryption : ";
                  __printf_chk(2);
                  iVar2 = mbedtls_rsa_pkcs1_decrypt(&local_218, myrand, 0, &local_230, local_c8, local_e8, 0x18, pcVar5);
                  if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
                     puts("passed");
                     __printf_chk(2, "  PKCS#1 data sign  : ");
                     uVar3 = mbedtls_md_info_from_type(5);
                     iVar2 = mbedtls_md(uVar3, puVar6, 0x18, local_128);
                     if (iVar2 != 0) {
                        puts("failed");
                        goto LAB_00103f04;
                     }

                     puVar7 = local_c8;
                     iVar2 = mbedtls_rsa_pkcs1_sign(&local_218, myrand, 0, 5, 0x14, local_128);
                     if (iVar2 == 0) {
                        __printf_chk(2, "passed\n  PKCS#1 sig. verify: ", puVar7, puVar6);
                        iVar2 = mbedtls_rsa_pkcs1_verify(&local_218, 5, 0x14, local_128, local_c8);
                        if (iVar2 == 0) {
                           puts("passed");
                           putchar(10);
                           goto LAB_00103cb5;
                        }

                     }

                  }

               }

            }

            puts("failed");
         }

         iVar1 = 1;
      }

   }

   LAB_00103cb5:mbedtls_mpi_free(local_228);
   mbedtls_rsa_free_part_0(&local_218);
   LAB_00103cc5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}

