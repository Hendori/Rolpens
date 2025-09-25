void OSSL_ERR_STATE_new(void) {
   CRYPTO_zalloc(0x388, 0, 0);
   return;
}
void OSSL_ERR_STATE_save(undefined8 *param_1) {
   void *ptr;
   undefined8 *puVar1;
   ulong uVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   byte bVar6;
   bVar6 = 0;
   if (param_1 != (undefined8*)0x0) {
      lVar3 = 0;
      do {
         if (( *(byte*)( (long)param_1 + lVar3 * 4 + 0x200 ) & 1 ) != 0) {
            CRYPTO_free((void*)param_1[lVar3 + 0x20]);
         }

         ptr = (void*)param_1[lVar3 + 0x48];
         param_1[lVar3 + 0x20] = 0;
         param_1[lVar3 + 0x30] = 0;
         *(undefined4*)( (long)param_1 + lVar3 * 4 + 0x200 ) = 0;
         *(undefined4*)( (long)param_1 + lVar3 * 4 + 0x40 ) = 0;
         *(undefined4*)( (long)param_1 + lVar3 * 4 ) = 0;
         param_1[lVar3 + 0x10] = 0;
         *(undefined4*)( (long)param_1 + lVar3 * 4 + 0x2c0 ) = 0xffffffff;
         CRYPTO_free(ptr);
         param_1[lVar3 + 0x48] = 0;
         CRYPTO_free((void*)param_1[lVar3 + 0x60]);
         param_1[lVar3 + 0x60] = 0;
         lVar3 = lVar3 + 1;
      }
 while ( lVar3 != 0x10 );
      puVar1 = (undefined8*)ossl_err_get_state_int();
      if (puVar1 != (undefined8*)0x0) {
         *param_1 = *puVar1;
         param_1[0x70] = puVar1[0x70];
         lVar3 = (long)param_1 - (long)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
         puVar4 = (undefined8*)( (long)puVar1 - lVar3 );
         puVar5 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
         for (uVar2 = ( ulong )((int)lVar3 + 0x388U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
            puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
         }

         *puVar1 = 0;
         puVar1[0x70] = 0;
         uVar2 = ( ulong )(( (int)puVar1 - (int)(undefined8*)( ( ulong )(puVar1 + 1) & 0xfffffffffffffff8 ) ) + 0x388U >> 3);
         puVar1 = (undefined8*)( ( ulong )(puVar1 + 1) & 0xfffffffffffffff8 );
         for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = 0;
            puVar1 = puVar1 + (ulong)bVar6 * -2 + 1;
         }

      }

      return;
   }

   return;
}
void OSSL_ERR_STATE_save_to_mark(undefined4 *param_1) {
   undefined4 *puVar1;
   long lVar2;
   int iVar3;
   undefined4 uVar4;
   void *pvVar5;
   int iVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   undefined8 *puVar10;
   undefined4 *puVar11;
   long local_50;
   int local_3c;
   if (param_1 == (undefined4*)0x0) {
      return;
   }

   lVar7 = ossl_err_get_state_int();
   if (lVar7 == 0) {
      lVar7 = 0;
      do {
         if (( *(byte*)( param_1 + lVar7 + 0x80 ) & 1 ) != 0) {
            CRYPTO_free(*(void**)( param_1 + lVar7 * 2 + 0x40 ));
         }

         pvVar5 = *(void**)( param_1 + lVar7 * 2 + 0x90 );
         *(undefined8*)( param_1 + lVar7 * 2 + 0x40 ) = 0;
         *(undefined8*)( param_1 + lVar7 * 2 + 0x60 ) = 0;
         param_1[lVar7 + 0x80] = 0;
         param_1[lVar7 + 0x10] = 0;
         param_1[lVar7] = 0;
         *(undefined8*)( param_1 + lVar7 * 2 + 0x20 ) = 0;
         param_1[lVar7 + 0xb0] = 0xffffffff;
         CRYPTO_free(pvVar5);
         *(undefined8*)( param_1 + lVar7 * 2 + 0x90 ) = 0;
         CRYPTO_free(*(void**)( param_1 + lVar7 * 2 + 0xc0 ));
         *(undefined8*)( param_1 + lVar7 * 2 + 0xc0 ) = 0;
         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 0x10 );
      *(undefined8*)( param_1 + 0xe0 ) = 0;
      return;
   }

   iVar3 = *(int*)( lVar7 + 900 );
   iVar6 = *(int*)( lVar7 + 0x380 );
   lVar9 = 0;
   if (iVar6 != iVar3) {
      do {
         local_3c = iVar6;
         if (*(int*)( lVar7 + 0x40 + (long)iVar6 * 4 ) != 0) break;
         local_3c = iVar3;
         if (iVar6 < 1) {
            lVar9 = lVar9 + 1;
            if (iVar3 == 0xf) break;
            if (*(int*)( lVar7 + 0x7c ) != 0) {
               local_3c = 0xf;
               break;
            }

            iVar6 = 0xf;
         }

         iVar6 = iVar6 + -1;
         lVar9 = lVar9 + 1;
      }
 while ( iVar6 != iVar3 );
      uVar8 = (ulong)local_3c;
      if (lVar9 != 0) {
         local_50 = 0;
         puVar10 = (undefined8*)( param_1 + 0x20 );
         puVar11 = param_1;
         do {
            uVar8 = ( ulong )((int)uVar8 + 1U & 0xf);
            if (( *(byte*)( puVar11 + 0x80 ) & 1 ) != 0) {
               CRYPTO_free((void*)puVar10[0x10]);
            }

            pvVar5 = (void*)puVar10[0x38];
            puVar10[0x10] = 0;
            puVar10[0x20] = 0;
            puVar11[0x80] = 0;
            puVar11[0x10] = 0;
            *puVar11 = 0;
            *puVar10 = 0;
            puVar11[0xb0] = 0xffffffff;
            CRYPTO_free(pvVar5);
            puVar10[0x38] = 0;
            CRYPTO_free((void*)puVar10[0x50]);
            local_50 = local_50 + 1;
            puVar10[0x50] = 0;
            puVar1 = (undefined4*)( lVar7 + uVar8 * 4 );
            uVar4 = *puVar1;
            puVar11[0x10] = 0;
            *puVar11 = uVar4;
            lVar2 = lVar7 + uVar8 * 8;
            *puVar10 = *(undefined8*)( lVar2 + 0x80 );
            puVar10[0x10] = *(undefined8*)( lVar2 + 0x100 );
            puVar10[0x20] = *(undefined8*)( lVar2 + 0x180 );
            puVar11[0x80] = puVar1[0x80];
            puVar10[0x38] = *(undefined8*)( lVar2 + 0x240 );
            puVar11[0xb0] = puVar1[0xb0];
            puVar10[0x50] = *(undefined8*)( lVar7 + 0x300 + uVar8 * 8 );
            *puVar1 = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( lVar2 + ( 128*i + 128 ) ) = 0;
            }

            puVar1[0x80] = 0;
            *(undefined8*)( lVar2 + 0x240 ) = 0;
            puVar1[0xb0] = 0;
            *(undefined8*)( lVar2 + 0x300 ) = 0;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
         }
 while ( local_50 != lVar9 );
         *(int*)( lVar7 + 0x380 ) = local_3c;
         param_1[0xe0] = (int)lVar9 + -1;
         param_1[0xe1] = 0xf;
         if (lVar9 == 0x10) {
            return;
         }

         goto LAB_00100410;
      }

   }

   *(undefined8*)( param_1 + 0xe0 ) = 0;
   lVar9 = 0;
   LAB_00100410:do {
      if (( *(byte*)( param_1 + lVar9 + 0x80 ) & 1 ) != 0) {
         CRYPTO_free(*(void**)( param_1 + lVar9 * 2 + 0x40 ));
      }

      pvVar5 = *(void**)( param_1 + lVar9 * 2 + 0x90 );
      *(undefined8*)( param_1 + lVar9 * 2 + 0x40 ) = 0;
      *(undefined8*)( param_1 + lVar9 * 2 + 0x60 ) = 0;
      param_1[lVar9 + 0x80] = 0;
      param_1[lVar9 + 0x10] = 0;
      param_1[lVar9] = 0;
      *(undefined8*)( param_1 + lVar9 * 2 + 0x20 ) = 0;
      param_1[lVar9 + 0xb0] = 0xffffffff;
      CRYPTO_free(pvVar5);
      *(undefined8*)( param_1 + lVar9 * 2 + 0x90 ) = 0;
      CRYPTO_free(*(void**)( param_1 + lVar9 * 2 + 0xc0 ));
      *(undefined8*)( param_1 + lVar9 * 2 + 0xc0 ) = 0;
      lVar9 = lVar9 + 1;
   }
 while ( lVar9 != 0x10 );
   return;
}
void OSSL_ERR_STATE_restore(long param_1) {
   byte *pbVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined4 uVar4;
   uint uVar5;
   undefined1 *puVar6;
   char *__s;
   int iVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   void *pvVar11;
   char *__dest;
   size_t sVar12;
   char *pcVar13;
   ulong uVar14;
   if (( ( param_1 != 0 ) && ( *(int*)( param_1 + 900 ) != *(int*)( param_1 + 0x380 ) ) ) && ( lVar8 = lVar8 != 0 )) {
      uVar14 = ( ulong ) * (int*)( param_1 + 900 );
      uVar9 = ( ulong ) * (int*)( param_1 + 0x380 );
      if (uVar14 != uVar9) {
         do {
            uVar14 = ( ulong )((int)uVar14 + 1U & 0xf);
            pbVar1 = (byte*)( param_1 + uVar14 * 4 );
            if (( *pbVar1 & 2 ) == 0) {
               iVar7 = ( *(int*)( lVar8 + 0x380 ) + 1 ) % 0x10;
               *(int*)( lVar8 + 0x380 ) = iVar7;
               if (iVar7 == *(int*)( lVar8 + 900 )) {
                  *(int*)( lVar8 + 900 ) = ( iVar7 + 1 ) % 0x10;
               }

               lVar10 = (long)iVar7;
               puVar3 = (undefined4*)( lVar8 + lVar10 * 4 );
               if (( *(byte*)( puVar3 + 0x80 ) & 1 ) == 0) {
                  *(undefined8*)( lVar8 + 0x100 + lVar10 * 8 ) = 0;
                  *(undefined8*)( lVar8 + 0x180 + lVar10 * 8 ) = 0;
                  puVar3[0x80] = 0;
               }
 else {
                  puVar6 = *(undefined1**)( lVar8 + 0x100 + lVar10 * 8 );
                  if (puVar6 != (undefined1*)0x0) {
                     *puVar6 = 0;
                     puVar3[0x80] = 1;
                  }

               }

               lVar2 = lVar8 + lVar10 * 8;
               puVar3[0x10] = 0;
               *puVar3 = 0;
               *(undefined8*)( lVar2 + 0x80 ) = 0;
               puVar3[0xb0] = 0xffffffff;
               CRYPTO_free(*(void**)( lVar2 + 0x240 ));
               *(undefined8*)( lVar2 + 0x240 ) = 0;
               CRYPTO_free(*(void**)( lVar2 + 0x300 ));
               *(undefined8*)( lVar2 + 0x300 ) = 0;
               *puVar3 = *(undefined4*)pbVar1;
               lVar10 = param_1 + uVar14 * 8;
               *(undefined8*)( lVar2 + 0x80 ) = *(undefined8*)( lVar10 + 0x80 );
               __s = *(char**)( lVar10 + 0x300 );
               pcVar13 = *(char**)( lVar10 + 0x240 );
               uVar4 = *(undefined4*)( pbVar1 + 0x2c0 );
               CRYPTO_free(*(void**)( lVar2 + 0x240 ));
               if (( pcVar13 == (char*)0x0 ) || ( *pcVar13 == '\0' )) {
                  *(undefined8*)( lVar2 + 0x240 ) = 0;
               }
 else {
                  sVar12 = strlen(pcVar13);
                  __dest = (char*)CRYPTO_malloc((int)sVar12 + 1, (char*)0x0, 0);
                  *(char**)( lVar2 + 0x240 ) = __dest;
                  if (__dest != (char*)0x0) {
                     strcpy(__dest, pcVar13);
                  }

               }

               puVar3[0xb0] = uVar4;
               CRYPTO_free(*(void**)( lVar2 + 0x300 ));
               if (( __s == (char*)0x0 ) || ( *__s == '\0' )) {
                  *(undefined8*)( lVar2 + 0x300 ) = 0;
               }
 else {
                  sVar12 = strlen(__s);
                  pcVar13 = (char*)CRYPTO_malloc((int)sVar12 + 1, (char*)0x0, 0);
                  *(char**)( lVar2 + 0x300 ) = pcVar13;
                  if (pcVar13 != (char*)0x0) {
                     strcpy(pcVar13, __s);
                  }

               }

               if (( *(long*)( lVar10 + 0x100 ) == 0 ) || ( sVar12 = sVar12 == 0 )) {
                  if (( *(byte*)( puVar3 + 0x80 ) & 1 ) == 0) {
                     *(undefined8*)( lVar2 + 0x100 ) = 0;
                     *(undefined8*)( lVar2 + 0x180 ) = 0;
                     puVar3[0x80] = 0;
                  }
 else if (*(undefined1**)( lVar2 + 0x100 ) != (undefined1*)0x0) {
                     **(undefined1**)( lVar2 + 0x100 ) = 0;
                     puVar3[0x80] = 1;
                     uVar9 = ( ulong ) * (int*)( param_1 + 0x380 );
                     goto LAB_00100800;
                  }

               }
 else {
                  pvVar11 = CRYPTO_malloc((int)sVar12, (char*)0x0, 0);
                  if (pvVar11 != (void*)0x0) {
                     pvVar11 = memcpy(pvVar11, *(void**)( lVar10 + 0x100 ), sVar12);
                     uVar5 = *(uint*)( pbVar1 + 0x200 );
                     if (( *(byte*)( puVar3 + 0x80 ) & 1 ) != 0) {
                        CRYPTO_free(*(void**)( lVar2 + 0x100 ));
                     }

                     *(void**)( lVar2 + 0x100 ) = pvVar11;
                     *(size_t*)( lVar2 + 0x180 ) = sVar12;
                     puVar3[0x80] = uVar5 | 1;
                     uVar9 = ( ulong ) * (int*)( param_1 + 0x380 );
                     goto LAB_00100800;
                  }

               }

               uVar9 = ( ulong ) * (int*)( param_1 + 0x380 );
            }

            LAB_00100800:;
         }
 while ( uVar9 != uVar14 );
      }

   }

   return;
}

