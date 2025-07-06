void trampoline(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
   for (int i_1703 = 0; i_1703 < 2; i_1703++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *(code*)*param_3 )();
   return;
}void sa_free_node(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void sa_free_leaf(undefined8 param_1, void *param_2) {
   CRYPTO_free(param_2);
   return;
}void ossl_sa_new(void) {
   CRYPTO_zalloc(0x20, "crypto/sparse_array.c", 0x3c);
   return;
}void ossl_sa_free(int *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   void *pvVar4;
   long in_FS_OFFSET;
   bool bVar5;
   int local_e8[16];
   void *local_a8[17];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (int*)0x0) {
      pvVar4 = *(void**)( param_1 + 6 );
      local_e8[0] = 0;
      lVar2 = 0;
      iVar3 = 0;
      local_a8[0] = pvVar4;
      do {
         if ((int)lVar2 < 0x10) {
            lVar1 = (long)iVar3;
            local_e8[lVar1] = (int)lVar2 + 1;
            if (( ( pvVar4 != (void*)0x0 ) && ( pvVar4 = *(void**)( (long)pvVar4 + lVar2 * 8 ) ),pvVar4 != (void*)0x0 )) {
               iVar3 = iVar3 + 1;
               lVar1 = (long)iVar3;
               local_e8[lVar1] = 0;
               local_a8[lVar1] = pvVar4;
            }
         } else {
            if (pvVar4 != (void*)0x0) {
               CRYPTO_free(pvVar4);
            }
            bVar5 = iVar3 == 0;
            iVar3 = iVar3 + -1;
            if (bVar5) goto LAB_00100120;
            lVar1 = (long)iVar3;
         }
         lVar2 = (long)local_e8[lVar1];
         pvVar4 = local_a8[lVar1];
      } while ( true );
   }
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00100177:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00100120:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CRYPTO_free(param_1);
      return;
   }
   goto LAB_00100177;
}void ossl_sa_free_leaves(int *param_1) {
   int iVar1;
   int iVar2;
   long lVar3;
   void *pvVar4;
   long in_FS_OFFSET;
   bool bVar5;
   int local_f8[16];
   void *local_b8[17];
   long local_30;
   iVar2 = 0;
   pvVar4 = *(void**)( param_1 + 6 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = 0;
   local_f8[0] = 0;
   local_b8[0] = pvVar4;
   do {
      if (iVar1 < 0x10) {
         lVar3 = (long)iVar2;
         local_f8[lVar3] = iVar1 + 1;
         if (( pvVar4 != (void*)0x0 ) && ( pvVar4 = *(void**)( (long)pvVar4 + (long)iVar1 * 8 ) ),pvVar4 != (void*)0x0) {
            if (iVar2 < *param_1 + -1) {
               iVar2 = iVar2 + 1;
               lVar3 = (long)iVar2;
               local_f8[lVar3] = 0;
               local_b8[lVar3] = pvVar4;
            } else {
               CRYPTO_free(pvVar4);
            }
         }
      } else {
         if (pvVar4 != (void*)0x0) {
            CRYPTO_free(pvVar4);
         }
         bVar5 = iVar2 == 0;
         iVar2 = iVar2 + -1;
         if (bVar5) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               CRYPTO_free(param_1);
               return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         lVar3 = (long)iVar2;
      }
      iVar1 = local_f8[lVar3];
      pvVar4 = local_b8[lVar3];
   } while ( true );
}void ossl_sa_doall(int *param_1, code *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   int local_f8[16];
   long local_b8[17];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = 0;
   if (param_1 != (int*)0x0) {
      lVar2 = *(long*)( param_1 + 6 );
      local_f8[0] = 0;
      iVar4 = 0;
      uVar5 = 0;
      local_b8[0] = lVar2;
      do {
         if (iVar1 < 0x10) {
            lVar3 = (long)iVar4;
            local_f8[lVar3] = iVar1 + 1;
            if (lVar2 != 0) {
               lVar2 = *(long*)( lVar2 + (long)iVar1 * 8 );
               if (lVar2 != 0) {
                  uVar5 = uVar5 & 0xfffffffffffffff0 | (long)iVar1;
                  if (iVar4 < *param_1 + -1) {
                     iVar4 = iVar4 + 1;
                     uVar5 = uVar5 << 4;
                     lVar3 = (long)iVar4;
                     local_f8[lVar3] = 0;
                     local_b8[lVar3] = lVar2;
                  } else {
                     ( *param_2 )(uVar5);
                  }
               }
            }
         } else {
            iVar4 = iVar4 + -1;
            uVar5 = uVar5 >> 4;
            if (iVar4 == -1) break;
            lVar3 = (long)iVar4;
         }
         iVar1 = local_f8[lVar3];
         lVar2 = local_b8[lVar3];
      } while ( true );
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_sa_doall_arg(int *param_1, code *param_2, undefined8 param_3) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   int local_108[16];
   long local_c8[17];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = 0;
   if (param_1 != (int*)0x0) {
      lVar3 = *(long*)( param_1 + 6 );
      local_108[0] = 0;
      local_c8[0] = lVar3;
      if (param_2 == (code*)0x0) {
         lVar5 = 0;
         do {
            lVar6 = (long)iVar4;
            local_108[lVar6] = (int)lVar5 + 1;
            while (( ( lVar3 != 0 && ( lVar3 = *(long*)( lVar3 + lVar5 * 8 ) ),lVar3 != 0 ) ) && ( iVar4 < *param_1 + -1 )) {
               iVar4 = iVar4 + 1;
               lVar6 = (long)iVar4;
               local_108[iVar4] = 0;
               local_c8[iVar4] = lVar3;
               lVar5 = 0;
               local_108[lVar6] = 1;
            };
            lVar3 = local_c8[lVar6];
            iVar1 = local_108[lVar6];
            while (lVar5 = (long)iVar1,0xf < iVar1) {
               bVar8 = iVar4 == 0;
               iVar4 = iVar4 + -1;
               if (bVar8) goto LAB_00100450;
               lVar3 = local_c8[iVar4];
               iVar1 = local_108[iVar4];
            };
         } while ( true );
      }
      uVar2 = 0;
      uVar7 = 0;
      iVar4 = 0;
      do {
         if ((int)uVar2 < 0x10) {
            lVar5 = (long)iVar4;
            local_108[lVar5] = (int)uVar2 + 1;
            if (( lVar3 != 0 ) && ( lVar3 = lVar3 != 0 )) {
               uVar7 = uVar7 & 0xfffffffffffffff0 | uVar2;
               if (iVar4 < *param_1 + -1) {
                  iVar4 = iVar4 + 1;
                  uVar7 = uVar7 << 4;
                  lVar5 = (long)iVar4;
                  local_108[lVar5] = 0;
                  local_c8[lVar5] = lVar3;
               } else {
                  ( *param_2 )(uVar7, lVar3, param_3);
               }
            }
         } else {
            iVar4 = iVar4 + -1;
            uVar7 = uVar7 >> 4;
            if (iVar4 == -1) break;
            lVar5 = (long)iVar4;
         }
         uVar2 = (ulong)local_108[lVar5];
         lVar3 = local_c8[lVar5];
      } while ( true );
   }
   LAB_00100450:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_sa_num(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x10 );
   }
   return uVar1;
}long ossl_sa_get(int *param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   lVar2 = 0;
   if (( ( param_1 != (int*)0x0 ) && ( *(long*)( param_1 + 4 ) != 0 ) ) && ( param_2 <= *(ulong*)( param_1 + 2 ) )) {
      iVar1 = *param_1;
      for (lVar2 = *(long*)( param_1 + 6 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + ( ulong )(( uint )(param_2 >> ( (char)iVar1 * '\x04' & 0x3fU )) & 0xf) * 8 )) {
         iVar1 = iVar1 + -1;
         if (iVar1 < 1) {
            if (lVar2 == 0) {
               return 0;
            }
            return *(long*)( lVar2 + ( ulong )((uint)param_2 & 0xf) * 8 );
         }
      }
   }
   return lVar2;
}undefined8 ossl_sa_set(int *param_1, ulong param_2, long param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 *puVar4;
   int iVar5;
   int iVar6;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (param_2 >> 4 == 0) {
      iVar6 = 1;
   } else if (param_2 >> 8 == 0) {
      iVar6 = 2;
   } else if (param_2 >> 0xc == 0) {
      iVar6 = 3;
   } else if (param_2 >> 0x10 == 0) {
      iVar6 = 4;
   } else if (param_2 >> 0x14 == 0) {
      iVar6 = 5;
   } else if (param_2 >> 0x18 == 0) {
      iVar6 = 6;
   } else if (param_2 >> 0x1c == 0) {
      iVar6 = 7;
   } else if (param_2 >> 0x20 == 0) {
      iVar6 = 8;
   } else if (param_2 >> 0x24 == 0) {
      iVar6 = 9;
   } else if (param_2 >> 0x28 == 0) {
      iVar6 = 10;
   } else if (param_2 >> 0x2c == 0) {
      iVar6 = 0xb;
   } else if (param_2 >> 0x30 == 0) {
      iVar6 = 0xc;
   } else if (param_2 >> 0x34 == 0) {
      iVar6 = 0xd;
   } else if (param_2 >> 0x38 == 0) {
      iVar6 = 0xe;
   } else {
      iVar6 = ( param_2 >> 0x3c != 0 ) + 0xf;
   }
   if (*param_1 < iVar6) {
      do {
         puVar4 = (undefined8*)CRYPTO_zalloc(0x80, "crypto/sparse_array.c", 0xb0);
         if (puVar4 == (undefined8*)0x0) {
            return 0;
         }
         uVar2 = *(undefined8*)( param_1 + 6 );
         iVar5 = *param_1;
         *(undefined8**)( param_1 + 6 ) = puVar4;
         *puVar4 = uVar2;
         *param_1 = iVar5 + 1;
      } while ( iVar5 + 1 < iVar6 );
   } else {
      puVar4 = *(undefined8**)( param_1 + 6 );
      iVar5 = *param_1 + -1;
   }
   if (*(ulong*)( param_1 + 2 ) < param_2) {
      *(ulong*)( param_1 + 2 ) = param_2;
   }
   do {
      if (iVar5 == 0) {
         lVar3 = puVar4[(uint)param_2 & 0xf];
         if (param_3 == 0) {
            if (lVar3 != 0) {
               *(long*)( param_1 + 4 ) = *(long*)( param_1 + 4 ) + -1;
            }
         } else if (lVar3 == 0) {
            *(long*)( param_1 + 4 ) = *(long*)( param_1 + 4 ) + 1;
         }
         puVar4[(uint)param_2 & 0xf] = param_3;
         return 1;
      }
      puVar1 = puVar4 + ( ( uint )(param_2 >> ( (char)iVar5 * '\x04' & 0x3fU )) & 0xf );
      puVar4 = (undefined8*)*puVar1;
      if (puVar4 == (undefined8*)0x0) {
         puVar4 = (undefined8*)CRYPTO_zalloc(0x80, "crypto/sparse_array.c", 0xb0);
         *puVar1 = puVar4;
         if (puVar4 == (undefined8*)0x0) {
            return 0;
         }
      }
      iVar5 = iVar5 + -1;
   } while ( true );
}
