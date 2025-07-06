void lh_SRTM_ITEM_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_914 = 0; i_914 < 2; i_914++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_SRTM_ITEM_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_915 = 0; i_915 < 2; i_915++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_SRTM_ITEM_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_916 = 0; i_916 < 2; i_916++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_SRTM_ITEM_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_917 = 0; i_917 < 2; i_917++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}undefined8 items_fwd_hash(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}bool items_fwd_cmp(long param_1, long param_2) {
   return *(long*)( param_1 + 0x10 ) != *(long*)( param_2 + 0x10 );
}undefined8 items_rev_hash(long param_1) {
   return *(undefined8*)( param_1 + 0x30 );
}void items_rev_cmp(long param_1, long param_2) {
   memcmp((void*)( param_1 + 0x30 ), (void*)( param_2 + 0x30 ), 0x10);
   return;
}void srtm_free_each(void *param_1) {
   void *pvVar1;
   void *ptr;
   ptr = *(void**)( (long)param_1 + 8 );
   while (ptr != (void*)0x0) {
      pvVar1 = *(void**)( (long)ptr + 8 );
      CRYPTO_free(ptr);
      ptr = pvVar1;
   };
   CRYPTO_free(param_1);
   return;
}void ossl_quic_srtm_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      OPENSSL_LH_free(param_1[2]);
      if (param_1[1] != 0) {
         OPENSSL_LH_doall(param_1[1], srtm_free_each);
         OPENSSL_LH_free(param_1[1]);
      }
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)*param_1);
      CRYPTO_free(param_1);
      return;
   }
   return;
}undefined8 *ossl_quic_srtm_new(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   EVP_CIPHER_CTX *pEVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 auStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = RAND_priv_bytes_ex(param_1, auStack_48, 0x10, 0x80);
   if (iVar1 == 1) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x20, "ssl/quic/quic_srtm.c", 0x77);
      if (puVar2 != (undefined8*)0x0) {
         lVar3 = EVP_CIPHER_fetch(param_1, "AES-128-ECB", param_2);
         if (lVar3 != 0) {
            pEVar4 = EVP_CIPHER_CTX_new();
            *puVar2 = pEVar4;
            if (pEVar4 != (EVP_CIPHER_CTX*)0x0) {
               iVar1 = EVP_EncryptInit_ex2(pEVar4, lVar3, auStack_48, 0, 0);
               if (iVar1 != 0) {
                  EVP_CIPHER_free(lVar3);
                  uVar5 = OPENSSL_LH_new(items_fwd_hash, items_fwd_cmp);
                  lVar3 = OPENSSL_LH_set_thunks(uVar5, 0x100000, lh_SRTM_ITEM_cfn_thunk, lh_SRTM_ITEM_doall_thunk, lh_SRTM_ITEM_doall_arg_thunk);
                  puVar2[1] = lVar3;
                  if (lVar3 != 0) {
                     uVar5 = OPENSSL_LH_new(items_rev_hash, items_rev_cmp);
                     lVar3 = OPENSSL_LH_set_thunks(uVar5, 0x100000, lh_SRTM_ITEM_cfn_thunk, lh_SRTM_ITEM_doall_thunk, lh_SRTM_ITEM_doall_arg_thunk);
                     puVar2[2] = lVar3;
                     if (lVar3 != 0) goto LAB_0010029a;
                  }
                  lVar3 = 0;
               }
            }
         }
         ossl_quic_srtm_free(puVar2);
         EVP_CIPHER_free(lVar3);
      }
   } else {
      ossl_quic_srtm_free(0);
      EVP_CIPHER_free(0);
   }
   puVar2 = (undefined8*)0x0;
   LAB_0010029a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_quic_srtm_add(undefined8 *param_1, int ****param_2, int ****param_3, undefined8 *param_4) {
   EVP_CIPHER_CTX *ctx;
   int ****ppppiVar1;
   int ****ppppiVar2;
   int iVar3;
   int *****pppppiVar4;
   int *****pppppiVar5;
   int *****pppppiVar6;
   undefined8 uVar7;
   int *****pppppiVar8;
   int *****pppppiVar9;
   long in_FS_OFFSET;
   int ****local_90;
   undefined1 local_88[16];
   int ***local_78;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( param_1 + 3 ) & 1 ) == 0) {
      local_78 = (int***)param_2;
      pppppiVar4 = (int*****)OPENSSL_LH_retrieve(param_1[1], local_88);
      for (pppppiVar5 = pppppiVar4; pppppiVar5 != (int*****)0x0; pppppiVar5 = (int*****)pppppiVar5[1]) {
         if (param_3 == pppppiVar5[3]) goto LAB_00100308;
         if (pppppiVar5[3] < param_3) break;
      }
      pppppiVar5 = (int*****)CRYPTO_zalloc(0x40, "ssl/quic/quic_srtm.c", 0x126);
      if (pppppiVar5 != (int*****)0x0) {
         pppppiVar5[3] = param_3;
         ctx = (EVP_CIPHER_CTX*)*param_1;
         ppppiVar1 = (int****)*param_4;
         ppppiVar2 = (int****)param_4[1];
         pppppiVar5[2] = param_2;
         local_90 = (int****)( (ulong)local_90 & 0xffffffff00000000 );
         pppppiVar5[4] = ppppiVar1;
         pppppiVar5[5] = ppppiVar2;
         iVar3 = EVP_EncryptUpdate(ctx, (uchar*)( pppppiVar5 + 6 ), (int*)&local_90, (uchar*)( pppppiVar5 + 4 ), 0x10);
         if (( iVar3 != 0 ) && ( (int)local_90 == 0x10 )) {
            if (pppppiVar4 == (int*****)0x0) {
               OPENSSL_LH_insert(param_1[1], pppppiVar5);
               iVar3 = OPENSSL_LH_error(param_1[1]);
               if (iVar3 != 0) {
                  *(byte*)( param_1 + 3 ) = *(byte*)( param_1 + 3 ) | 1;
                  CRYPTO_free(pppppiVar5);
                  goto LAB_00100308;
               }
            } else {
               pppppiVar6 = pppppiVar4;
               pppppiVar9 = &local_90;
               do {
                  if (pppppiVar6[3] <= pppppiVar5[3]) break;
                  pppppiVar9 = pppppiVar6 + 1;
                  pppppiVar6 = (int*****)pppppiVar6[1];
               } while ( pppppiVar6 != (int*****)0x0 );
               pppppiVar5[1] = (int****)pppppiVar6;
               local_90 = (int****)pppppiVar4;
               *pppppiVar9 = (int****)pppppiVar5;
               if ((int*****)local_90 != pppppiVar4) {
                  OPENSSL_LH_insert(param_1[1]);
                  iVar3 = OPENSSL_LH_error(param_1[1]);
                  if (iVar3 != 0) {
                     *(byte*)( param_1 + 3 ) = *(byte*)( param_1 + 3 ) | 1;
                     CRYPTO_free(pppppiVar5);
                     goto LAB_00100308;
                  }
               }
            }
            pppppiVar4 = (int*****)OPENSSL_LH_retrieve(param_1[2], pppppiVar5);
            if (pppppiVar4 == (int*****)0x0) {
               uVar7 = param_1[2];
               LAB_0010049d:OPENSSL_LH_insert(uVar7, pppppiVar5);
               iVar3 = OPENSSL_LH_error(param_1[2]);
               if (iVar3 != 0) {
                  *(byte*)( param_1 + 3 ) = *(byte*)( param_1 + 3 ) | 1;
                  goto LAB_00100308;
               }
            } else {
               pppppiVar9 = pppppiVar4;
               pppppiVar6 = &local_90;
               do {
                  pppppiVar8 = pppppiVar9;
                  pppppiVar9 = pppppiVar8;
                  if (pppppiVar8[2] <= pppppiVar5[2]) break;
                  pppppiVar9 = (int*****)*pppppiVar8;
                  pppppiVar6 = pppppiVar8;
               } while ( pppppiVar9 != (int*****)0x0 );
               *pppppiVar5 = (int****)pppppiVar9;
               local_90 = (int****)pppppiVar4;
               *pppppiVar6 = (int****)pppppiVar5;
               if ((int*****)local_90 != pppppiVar4) {
                  uVar7 = param_1[2];
                  pppppiVar5 = (int*****)local_90;
                  goto LAB_0010049d;
               }
            }
            uVar7 = 1;
            goto LAB_0010030a;
         }
         CRYPTO_free(pppppiVar5);
      }
   }
   LAB_00100308:uVar7 = 0;
   LAB_0010030a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_quic_srtm_remove(long param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   long *ptr;
   long *plVar2;
   long *plVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined1 auStack_68[16];
   undefined8 local_58;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(byte*)( param_1 + 0x18 ) & 1 ) == 0 ) && ( local_58 = param_2 ),ptr = (long*)OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 8 ), auStack_68),ptr != (long*)0x0) {
      plVar2 = (long*)0x0;
      do {
         if (param_3 == ptr[3]) {
            if (plVar2 == (long*)0x0) {
               if (ptr[1] == 0) {
                  OPENSSL_LH_delete(*(undefined8*)( param_1 + 8 ), ptr);
                  goto LAB_001005fa;
               }
               OPENSSL_LH_insert();
               iVar1 = OPENSSL_LH_error(*(undefined8*)( param_1 + 8 ));
               if (iVar1 == 0) goto LAB_001005fa;
            } else {
               plVar2[1] = ptr[1];
               LAB_001005fa:plVar2 = (long*)OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 0x10 ), ptr);
               if (plVar2 != ptr) goto LAB_00100610;
               if (*ptr == 0) {
                  OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x10 ), ptr);
                  goto LAB_00100621;
               }
               OPENSSL_LH_insert();
               iVar1 = OPENSSL_LH_error(*(undefined8*)( param_1 + 0x10 ));
               if (iVar1 == 0) goto LAB_00100621;
            }
            *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) | 1;
            uVar4 = 0;
            goto LAB_00100588;
         }
      } while ( ( param_3 <= (ulong)ptr[3] ) && ( plVar3 = ptr + 1 ),plVar2 = ptr,ptr = (long*)*plVar3,(long*)*plVar3 != (long*)0x0 );
   }
   uVar4 = 0;
   LAB_00100588:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
   LAB_00100610:do {
      plVar3 = plVar2;
      plVar2 = (long*)*plVar3;
   } while ( plVar2 != ptr );
   *plVar3 = *ptr;
   LAB_00100621:CRYPTO_free(ptr);
   uVar4 = 1;
   goto LAB_00100588;
}undefined8 ossl_quic_srtm_cull(long param_1, undefined8 param_2) {
   int iVar1;
   long *ptr;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   long *plVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined1 auStack_78[16];
   undefined8 local_68;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = 0;
   local_68 = param_2;
   if (( *(byte*)( param_1 + 0x18 ) & 1 ) == 0) {
      ptr = (long*)OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 8 ), auStack_78);
      plVar4 = ptr;
      if (ptr != (long*)0x0) {
         do {
            plVar5 = (long*)plVar4[1];
            if (ptr != plVar4) {
               plVar2 = (long*)OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 0x10 ), plVar4);
               if (plVar4 == plVar2) {
                  if (*plVar4 == 0) {
                     OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x10 ), plVar4);
                  } else {
                     OPENSSL_LH_insert();
                     iVar1 = OPENSSL_LH_error(*(undefined8*)( param_1 + 0x10 ));
                     if (iVar1 != 0) {
                        *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) | 1;
                     }
                  }
               } else {
                  do {
                     plVar3 = plVar2;
                     plVar2 = (long*)*plVar3;
                  } while ( plVar4 != plVar2 );
                  *plVar3 = *plVar4;
               }
               CRYPTO_free(plVar4);
            }
            plVar4 = plVar5;
         } while ( plVar5 != (long*)0x0 );
         OPENSSL_LH_delete(*(undefined8*)( param_1 + 8 ), ptr);
         plVar4 = (long*)OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 0x10 ), ptr);
         if (ptr == plVar4) {
            if (*ptr == 0) {
               OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x10 ), ptr);
            } else {
               OPENSSL_LH_insert();
               iVar1 = OPENSSL_LH_error(*(undefined8*)( param_1 + 0x10 ));
               if (iVar1 != 0) {
                  *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) | 1;
               }
            }
         } else {
            do {
               plVar5 = plVar4;
               plVar4 = (long*)*plVar5;
            } while ( ptr != plVar4 );
            *plVar5 = *ptr;
         }
         CRYPTO_free(ptr);
      }
      uVar6 = 1;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}undefined8 ossl_quic_srtm_lookup(undefined8 *param_1, uchar *param_2, long param_3, undefined8 *param_4, undefined8 *param_5) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   int local_7c;
   undefined1 local_78[48];
   uchar local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( param_1 + 3 ) & 1 ) == 0) {
      local_7c = 0;
      iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX*)*param_1, local_48, &local_7c, param_2, 0x10);
      if (( ( iVar1 != 0 ) && ( local_7c == 0x10 ) ) && ( puVar2 = (undefined8*)OPENSSL_LH_retrieve(param_1[2], local_78) ),puVar2 != (undefined8*)0x0) {
         if (param_3 != 0) {
            puVar2 = (undefined8*)*puVar2;
            for (param_3 = param_3 + -1; param_3 != 0; param_3 = param_3 + -1) {
               if (puVar2 == (undefined8*)0x0) goto LAB_00100896;
               puVar2 = (undefined8*)*puVar2;
            }
         }
         if (puVar2 != (undefined8*)0x0) {
            if (param_4 != (undefined8*)0x0) {
               *param_4 = puVar2[2];
            }
            if (param_5 != (undefined8*)0x0) {
               *param_5 = puVar2[3];
            }
            uVar3 = 1;
            goto LAB_00100898;
         }
      }
   }
   LAB_00100896:uVar3 = 0;
   LAB_00100898:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}void ossl_quic_srtm_check(void) {
   return;
}
