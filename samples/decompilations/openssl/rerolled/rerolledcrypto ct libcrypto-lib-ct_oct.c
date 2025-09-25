int o2i_SCT_signature(int *param_1, long *param_2, ulong param_3) {
   undefined1 *puVar1;
   int iVar2;
   undefined1 *puVar3;
   ushort uVar4;
   ulong uVar5;
   undefined8 uVar6;
   ulong uVar7;
   if (*param_1 == 0) {
      if (param_3 < 5) {
         ERR_new();
         uVar6 = 0x2a;
      }
 else {
         puVar1 = (undefined1*)*param_2;
         *(undefined1*)( param_1 + 0x10 ) = *puVar1;
         *(undefined1*)( (long)param_1 + 0x41 ) = puVar1[1];
         iVar2 = SCT_get_signature_nid();
         if (iVar2 == 0) {
            ERR_new();
            uVar6 = 0x33;
         }
 else {
            puVar3 = puVar1 + 4;
            uVar4 = *(ushort*)( puVar1 + 2 ) << 8 | *(ushort*)( puVar1 + 2 ) >> 8;
            uVar7 = param_3 - ( (long)puVar3 - *param_2 );
            uVar5 = (ulong)uVar4;
            if (uVar5 <= uVar7) {
               iVar2 = SCT_set1_signature(param_1, puVar3, uVar5);
               if (iVar2 != 1) {
                  return -1;
               }

               *param_2 = (long)( puVar3 + uVar5 );
               return (int)param_3 - ( (int)uVar7 - (uint)uVar4 );
            }

            ERR_new();
            uVar6 = 0x3a;
         }

      }

      ERR_set_debug("crypto/ct/ct_oct.c", uVar6, "o2i_SCT_signature");
      ERR_set_error(0x32, 0x6b, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_oct.c", 0x1f, "o2i_SCT_signature");
      ERR_set_error(0x32, 0x67, 0);
   }

   return -1;
}
uint *o2i_SCT(undefined8 *param_1, undefined8 *param_2, ulong param_3) {
   byte bVar1;
   ushort uVar2;
   int iVar3;
   uint *puVar4;
   long lVar5;
   ulong uVar6;
   uint *puVar7;
   undefined8 uVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   byte *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 - 1 < 0xffff) {
      puVar4 = (uint*)SCT_new();
      if (puVar4 == (uint*)0x0) goto LAB_001003b8;
      local_48 = (byte*)*param_2;
      bVar1 = *local_48;
      *puVar4 = (uint)bVar1;
      if (bVar1 == 0) {
         if (param_3 < 0x2b) {
            ERR_new();
            uVar8 = 99;
         }
 else {
            local_48 = local_48 + 1;
            lVar5 = CRYPTO_memdup(local_48, 0x20, "crypto/ct/ct_oct.c", 0x68);
            *(long*)( puVar4 + 6 ) = lVar5;
            if (lVar5 == 0) goto LAB_00100320;
            puVar4[8] = 0x20;
            puVar4[9] = 0;
            bVar1 = local_48[0x20];
            pbVar9 = local_48 + 0x2a;
            *(ulong*)( puVar4 + 10 ) = (ulong)bVar1 << 0x38;
            uVar6 = (ulong)local_48[0x21] << 0x30 | (ulong)bVar1 << 0x38;
            *(ulong*)( puVar4 + 10 ) = uVar6;
            for (int i = 0; i < 5; i++) {
               uVar6 = (ulong)local_48[( i + 34 )] << ( -8*i + 40 ) | uVar6;
               *(ulong*)( puVar4 + 10 ) = uVar6;
            }

            *(ulong*)( puVar4 + 10 ) = uVar6 | local_48[0x27];
            uVar2 = *(ushort*)( local_48 + 0x28 );
            uVar6 = ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8);
            local_48 = pbVar9;
            if (param_3 - 0x2b < uVar6) {
               ERR_new();
               uVar8 = 0x72;
            }
 else {
               if (uVar2 != 0) {
                  lVar5 = CRYPTO_memdup(pbVar9, uVar6, "crypto/ct/ct_oct.c", 0x76);
                  *(long*)( puVar4 + 0xc ) = lVar5;
                  if (lVar5 == 0) goto LAB_00100320;
               }

               *(ulong*)( puVar4 + 0xe ) = uVar6;
               local_48 = local_48 + uVar6;
               lVar5 = ( param_3 - 0x2b ) - uVar6;
               iVar3 = o2i_SCT_signature(puVar4, &local_48, lVar5);
               if (0 < iVar3) {
                  pbVar9 = local_48 + ( lVar5 - iVar3 );
                  goto LAB_001002b1;
               }

               ERR_new();
               uVar8 = 0x80;
            }

         }

         ERR_set_debug("crypto/ct/ct_oct.c", uVar8, "o2i_SCT");
         ERR_set_error(0x32, 0x68, 0);
      }
 else {
         lVar5 = CRYPTO_memdup(local_48, param_3, "crypto/ct/ct_oct.c", 0x87);
         *(long*)( puVar4 + 2 ) = lVar5;
         if (lVar5 != 0) {
            *(ulong*)( puVar4 + 4 ) = param_3;
            pbVar9 = local_48 + param_3;
            LAB_001002b1:*param_2 = pbVar9;
            puVar7 = puVar4;
            if (param_1 != (undefined8*)0x0) {
               SCT_free(*param_1);
               *param_1 = puVar4;
            }

            goto LAB_001002c7;
         }

      }

   }
 else {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_oct.c", 0x4c, "o2i_SCT");
      ERR_set_error(0x32, 0x68, 0);
      LAB_001003b8:puVar4 = (uint*)0x0;
   }

   LAB_00100320:puVar7 = (uint*)0x0;
   SCT_free(puVar4);
   LAB_001002c7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
ulong i2o_SCT_signature(int *param_1, long *param_2) {
   ulong uVar1;
   int iVar2;
   undefined1 *puVar3;
   undefined1 *puVar4;
   iVar2 = SCT_signature_is_complete();
   if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_oct.c", 0x9f, "i2o_SCT_signature");
      ERR_set_error(0x32, 0x6b, 0);
   }
 else {
      if (*param_1 == 0) {
         uVar1 = *(long*)( param_1 + 0x14 ) + 4;
         if (param_2 != (long*)0x0) {
            puVar3 = (undefined1*)*param_2;
            if (puVar3 == (undefined1*)0x0) {
               puVar3 = (undefined1*)CRYPTO_malloc((int)uVar1, "crypto/ct/ct_oct.c", 0xb4);
               puVar4 = puVar3;
               if (puVar3 == (undefined1*)0x0) goto LAB_001004dc;
            }
 else {
               puVar4 = puVar3 + uVar1;
            }

            *param_2 = (long)puVar4;
            *puVar3 = (char)param_1[0x10];
            puVar3[1] = *(undefined1*)( (long)param_1 + 0x41 );
            puVar3[2] = (char)( ( ulong ) * (undefined8*)( param_1 + 0x14 ) >> 8 );
            puVar3[3] = (char)*(undefined8*)( param_1 + 0x14 );
            memcpy(puVar3 + 4, *(void**)( param_1 + 0x12 ), *(size_t*)( param_1 + 0x14 ));
         }

         return uVar1 & 0xffffffff;
      }

      ERR_new();
      ERR_set_debug("crypto/ct/ct_oct.c", 0xa4, "i2o_SCT_signature");
      ERR_set_error(0x32, 0x67, 0);
   }

   LAB_001004dc:CRYPTO_free((void*)0x0);
   return 0xffffffff;
}
ulong i2o_SCT(int *param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   int iVar3;
   undefined1 *__dest;
   void *pvVar4;
   ulong uVar5;
   undefined1 *ptr;
   long in_FS_OFFSET;
   undefined1 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1*)0x0;
   iVar3 = SCT_is_complete();
   if (iVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_oct.c", 0xcc, "i2o_SCT");
      ERR_set_error(0x32, 0x6a, 0);
      LAB_00100735:ptr = (undefined1*)0x0;
      LAB_001006e8:CRYPTO_free(ptr);
      uVar5 = 0xffffffff;
   }
 else {
      iVar3 = *param_1;
      if (iVar3 == 0) {
         uVar5 = *(long*)( param_1 + 0x14 ) + *(long*)( param_1 + 0xe ) + 0x2f;
      }
 else {
         uVar5 = *(ulong*)( param_1 + 4 );
      }

      if (param_2 != (undefined8*)0x0) {
         __dest = (undefined1*)*param_2;
         if (__dest == (undefined1*)0x0) {
            __dest = (undefined1*)CRYPTO_malloc((int)uVar5, "crypto/ct/ct_oct.c", 0xe1);
            local_38 = __dest;
            if (__dest == (undefined1*)0x0) goto LAB_00100735;
            *param_2 = __dest;
            iVar3 = *param_1;
            ptr = __dest;
         }
 else {
            *param_2 = __dest + uVar5;
            ptr = (undefined1*)0x0;
         }

         if (iVar3 == 0) {
            *__dest = 0;
            puVar1 = *(undefined8**)( param_1 + 6 );
            uVar2 = puVar1[1];
            local_38 = __dest + 0x2b;
            *(undefined8*)( __dest + 1 ) = *puVar1;
            *(undefined8*)( __dest + 9 ) = uVar2;
            uVar2 = puVar1[3];
            *(undefined8*)( __dest + 0x11 ) = puVar1[2];
            *(undefined8*)( __dest + 0x19 ) = uVar2;
            __dest[0x21] = *(undefined1*)( (long)param_1 + 0x2f );
            __dest[0x22] = (char)*(undefined2*)( (long)param_1 + 0x2e );
            __dest[0x23] = (char)( ( ulong ) * (undefined8*)( param_1 + 10 ) >> 0x28 );
            __dest[0x24] = (char)param_1[0xb];
            for (int i = 0; i < 3; i++) {
               __dest[( i + 37 )] = (char)( ( ulong ) * (undefined8*)( param_1 + 10 ) >> ( -8*i + 24 ) );
            }

            __dest[0x28] = (char)*(undefined8*)( param_1 + 10 );
            __dest[0x29] = (char)( ( ulong ) * (undefined8*)( param_1 + 0xe ) >> 8 );
            __dest[0x2a] = (char)*(undefined8*)( param_1 + 0xe );
            if (*(size_t*)( param_1 + 0xe ) != 0) {
               pvVar4 = memcpy(local_38, *(void**)( param_1 + 0xc ), *(size_t*)( param_1 + 0xe ));
               local_38 = (undefined1*)( (long)pvVar4 + *(long*)( param_1 + 0xe ) );
            }

            iVar3 = i2o_SCT_signature(param_1, &local_38);
            if (iVar3 < 1) goto LAB_001006e8;
         }
 else {
            local_38 = __dest;
            memcpy(__dest, *(void**)( param_1 + 2 ), uVar5);
         }

      }

      uVar5 = uVar5 & 0xffffffff;
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
long o2i_SCT_LIST(long *param_1, undefined8 *param_2, long param_3) {
   ushort uVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   undefined8 uVar7;
   if (param_3 - 2U < 0xfffe) {
      uVar1 = *(ushort*)*param_2;
      *param_2 = (ushort*)*param_2 + 1;
      uVar6 = ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (param_3 - 2U == uVar6) {
         if (( param_1 == (long*)0x0 ) || ( lVar3 = lVar3 == 0 )) {
            lVar3 = OPENSSL_sk_new_null();
            if (lVar3 == 0) {
               return 0;
            }

         }
 else {
            while (lVar4 = OPENSSL_sk_pop(lVar3),lVar4 != 0) {
               SCT_free();
            }
;
         }

         do {
            if (uVar6 == 0) {
               if (( param_1 != (long*)0x0 ) && ( *param_1 == 0 )) {
                  *param_1 = lVar3;
               }

               return lVar3;
            }

            if (uVar6 == 1) {
               ERR_new();
               uVar7 = 0x11f;
               LAB_00100861:ERR_set_debug("crypto/ct/ct_oct.c", uVar7, "o2i_SCT_LIST");
               ERR_set_error(0x32, 0x69, 0);
               goto joined_r0x00100883;
            }

            uVar1 = *(ushort*)*param_2;
            *param_2 = (ushort*)*param_2 + 1;
            uVar5 = ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8);
            if (uVar6 - 2 <= uVar5 - 1) {
               ERR_new();
               uVar7 = 0x126;
               goto LAB_00100861;
            }

            uVar6 = ( uVar6 - 2 ) - uVar5;
            lVar4 = o2i_SCT(0, param_2);
            if (lVar4 == 0) goto joined_r0x00100883;
            iVar2 = OPENSSL_sk_push(lVar3, lVar4);
         }
 while ( iVar2 != 0 );
         SCT_free(lVar4);
         joined_r0x00100883:if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
            return 0;
         }

         SCT_LIST_free(lVar3);
         return 0;
      }

      ERR_new();
      uVar7 = 0x10a;
   }
 else {
      ERR_new();
      uVar7 = 0x104;
   }

   ERR_set_debug("crypto/ct/ct_oct.c", uVar7, "o2i_SCT_LIST");
   ERR_set_error(0x32, 0x69, 0);
   return 0;
}
ulong i2o_SCT_LIST(undefined8 param_1, long *param_2) {
   bool bVar1;
   ushort *puVar2;
   int iVar3;
   undefined8 uVar4;
   void *pvVar5;
   int iVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   ushort *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (ushort*)0x0;
   if (param_2 == (long*)0x0) {
      uVar7 = 2;
      for (iVar6 = 0; iVar3 = OPENSSL_sk_num(param_1),iVar6 < iVar3; iVar6 = iVar6 + 1) {
         uVar4 = OPENSSL_sk_value(param_1, iVar6);
         iVar3 = i2o_SCT(uVar4, 0);
         if (iVar3 == -1) goto LAB_00100a6b;
         uVar7 = uVar7 + (long)( iVar3 + 2 );
      }

      if (0xffff < uVar7) goto LAB_00100a6b;
      LAB_00100a1f:uVar7 = uVar7 & 0xffffffff;
   }
 else {
      pvVar5 = (void*)*param_2;
      if (pvVar5 == (void*)0x0) {
         uVar7 = 2;
         for (iVar6 = 0; iVar3 = OPENSSL_sk_num(param_1),iVar6 < iVar3; iVar6 = iVar6 + 1) {
            uVar4 = OPENSSL_sk_value(param_1, iVar6);
            iVar3 = i2o_SCT(uVar4, 0);
            if (iVar3 == -1) goto LAB_00100b52;
            uVar7 = uVar7 + (long)( iVar3 + 2 );
         }

         if (uVar7 < 0x10000) {
            pvVar5 = CRYPTO_malloc((int)uVar7, "crypto/ct/ct_oct.c", 0x149);
            *param_2 = (long)pvVar5;
            if (pvVar5 != (void*)0x0) {
               bVar1 = true;
               goto LAB_00100992;
            }

         }
 else {
            LAB_00100b52:ERR_new();
            ERR_set_debug("crypto/ct/ct_oct.c", 0x146, "i2o_SCT_LIST");
            ERR_set_error(0x32, 0x69, 0);
         }

      }
 else {
         bVar1 = false;
         LAB_00100992:local_48 = (ushort*)( (long)pvVar5 + 2 );
         uVar7 = 2;
         for (iVar6 = 0; iVar3 = OPENSSL_sk_num(param_1),puVar2 = local_48,iVar6 < iVar3; iVar6 = iVar6 + 1) {
            local_48 = local_48 + 1;
            uVar4 = OPENSSL_sk_value(param_1, iVar6);
            iVar3 = i2o_SCT(uVar4, &local_48);
            if (iVar3 == -1) goto LAB_00100a48;
            *puVar2 = (ushort)iVar3 << 8 | (ushort)iVar3 >> 8;
            uVar7 = uVar7 + (long)( iVar3 + 2 );
         }

         if (uVar7 < 0x10000) {
            local_48 = (ushort*)*param_2;
            *(char*)local_48 = (char)( uVar7 - 2 >> 8 );
            *(char*)( (long)local_48 + 1 ) = (char)uVar7 + -2;
            if (!bVar1) {
               *param_2 = *param_2 + uVar7;
            }

            goto LAB_00100a1f;
         }

         LAB_00100a48:if (bVar1) {
            CRYPTO_free((void*)*param_2);
            *param_2 = 0;
         }

      }

      LAB_00100a6b:uVar7 = 0xffffffff;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
long d2i_SCT_LIST(undefined8 param_1, long *param_2, long param_3) {
   ASN1_OCTET_STRING *pAVar1;
   long lVar2;
   long in_FS_OFFSET;
   ASN1_OCTET_STRING *local_40;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (uchar*)*param_2;
   local_40 = (ASN1_OCTET_STRING*)0x0;
   pAVar1 = d2i_ASN1_OCTET_STRING(&local_40, &local_38, param_3);
   if (pAVar1 == (ASN1_OCTET_STRING*)0x0) {
      lVar2 = 0;
   }
 else {
      local_38 = local_40.data;
      lVar2 = o2i_SCT_LIST(param_1, &local_38, (long)local_40.length);
      if (lVar2 != 0) {
         *param_2 = *param_2 + param_3;
      }

      ASN1_OCTET_STRING_free(local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int i2d_SCT_LIST(undefined8 param_1, uchar **param_2) {
   int iVar1;
   long in_FS_OFFSET;
   ASN1_OCTET_STRING local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38.data = (uchar*)0x0;
   local_38.length = i2o_SCT_LIST(param_1, &local_38.data);
   if (local_38.length == -1) {
      iVar1 = -1;
   }
 else {
      iVar1 = i2d_ASN1_OCTET_STRING(&local_38, param_2);
      CRYPTO_free(local_38.data);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

