undefined8 custom_ext_add_old_cb_wrap(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 *param_9) {
   undefined8 uVar1;
   if ((code*)param_9[1] != (code*)0x0) {
      for (int i_920 = 0; i_920 < 2; i_920++) {
         /* WARNING: Could not recover jumptable at 0x00100020. Too many branches */
      }
      uVar1 = ( *(code*)param_9[1] )(param_1, param_2, param_4, param_5, param_8, *param_9);
      return uVar1;
   }
   return 1;
}void custom_ext_free_old_cb_wrap(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 *param_5) {
   if ((code*)param_5[2] != (code*)0x0) {
      for (int i_921 = 0; i_921 < 2; i_921++) {
         /* WARNING: Could not recover jumptable at 0x00100043. Too many branches */
      }
      ( *(code*)param_5[2] )(param_1, param_2, param_4, *param_5);
      return;
   }
   return;
}undefined8 custom_ext_parse_old_cb_wrap(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 *param_9) {
   undefined8 uVar1;
   if ((code*)param_9[1] != (code*)0x0) {
      for (int i_922 = 0; i_922 < 2; i_922++) {
         /* WARNING: Could not recover jumptable at 0x00100070. Too many branches */
      }
      uVar1 = ( *(code*)param_9[1] )(param_1, param_2, param_4, param_5, param_8, *param_9);
      return uVar1;
   }
   return 1;
}ushort *custom_ext_find(undefined8 *param_1, int param_2, uint param_3, long *param_4) {
   long lVar1;
   ushort *puVar2;
   long lVar3;
   lVar1 = param_1[1];
   puVar2 = (ushort*)*param_1;
   if (lVar1 != 0) {
      lVar3 = 0;
      if (param_2 == 2) {
         do {
            if (*puVar2 == param_3) {
               LAB_001000c5:if (param_4 == (long*)0x0) {
                  return puVar2;
               }
               *param_4 = lVar3;
               return puVar2;
            }
            lVar3 = lVar3 + 1;
            puVar2 = puVar2 + 0x1c;
         } while ( lVar3 != lVar1 );
      } else {
         do {
            if (( param_3 == *puVar2 ) && ( ( *(int*)( puVar2 + 2 ) == 2 || ( param_2 == *(int*)( puVar2 + 2 ) ) ) )) goto LAB_001000c5;
            lVar3 = lVar3 + 1;
            puVar2 = puVar2 + 0x1c;
         } while ( lVar1 != lVar3 );
      }
   }
   return (ushort*)0x0;
}void custom_ext_init(long *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = param_1[1];
   lVar2 = *param_1;
   if (lVar1 != 0) {
      lVar3 = 0;
      do {
         lVar3 = lVar3 + 1;
         *(undefined4*)( lVar2 + 0xc ) = 0;
         lVar2 = lVar2 + 0x38;
      } while ( lVar3 != lVar1 );
   }
   return;
}undefined8 custom_ext_parse(long param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined1 uVar4;
   undefined4 local_44;
   long local_40;
   uVar4 = 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   if (( param_2 & 0x180 ) != 0) {
      uVar4 = *(int*)( param_1 + 0x78 ) != 0;
   }
   lVar2 = custom_ext_find(*(long*)( param_1 + 0x880 ) + 0x80, uVar4, param_3, 0);
   if (lVar2 != 0) {
      iVar1 = extension_is_relevant(param_1, *(undefined4*)( lVar2 + 8 ), param_2);
      if (iVar1 != 0) {
         if (( ( param_2 & 0x700 ) != 0 ) && ( ( *(byte*)( lVar2 + 0xc ) & 2 ) == 0 )) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_cust.c", 0x90, "custom_ext_parse");
            ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
            uVar3 = 0;
            goto LAB_00100202;
         }
         if (( param_2 & 0x4080 ) != 0) {
            *(uint*)( lVar2 + 0xc ) = *(uint*)( lVar2 + 0xc ) | 1;
         }
         if (*(code**)( lVar2 + 0x28 ) != (code*)0x0) {
            iVar1 = ( **(code**)( lVar2 + 0x28 ) )(*(undefined8*)( param_1 + 0x40 ), param_3, param_2, param_4, param_5, param_6, param_7, &local_44, *(undefined8*)( lVar2 + 0x30 ));
            if (iVar1 < 1) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_cust.c", 0xa4, "custom_ext_parse");
               ossl_statem_fatal(param_1, local_44, 0x6e, 0);
               uVar3 = 0;
               goto LAB_00100202;
            }
         }
      }
   }
   uVar3 = 1;
   LAB_00100202:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 custom_ext_add(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6) {
   long lVar1;
   code *pcVar2;
   uint uVar3;
   uint uVar4;
   int iVar5;
   undefined8 uVar6;
   undefined2 *puVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   undefined4 local_54;
   undefined8 local_50;
   long local_48;
   long local_40;
   uVar3 = param_2 & 0x8000;
   lVar1 = *(long*)( param_1 + 0x880 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar1 + 0x88 ) != 0) {
      uVar8 = 0;
      uVar4 = param_2 & 0x80;
      if (( param_2 & 0x11f00 ) == 0) {
         do {
            local_50 = 0;
            local_48 = 0;
            puVar7 = (undefined2*)( *(long*)( lVar1 + 0x80 ) + uVar8 * 0x38 );
            iVar5 = should_add_extension(param_1, *(undefined4*)( puVar7 + 4 ), param_2, param_6);
            if (iVar5 != 0) {
               pcVar2 = *(code**)( puVar7 + 8 );
               if (uVar4 == 0) {
                  if (pcVar2 != (code*)0x0) goto LAB_00100331;
               } else {
                  if (pcVar2 != (code*)0x0) {
                     LAB_00100331:iVar5 = ( *pcVar2 )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, &local_50, &local_48, param_4, param_5, &local_54, *(undefined8*)( puVar7 + 0x10 ));
                     if (iVar5 < 0) goto LAB_00100692;
                     if (iVar5 == 0) goto LAB_00100404;
                  }
                  iVar5 = WPACKET_put_bytes__(param_3, *puVar7, 2);
                  if (( ( iVar5 == 0 ) || ( iVar5 = WPACKET_start_sub_packet_len__(param_3, 2) ),iVar5 == 0 )) goto LAB_001005c8;
                  if (uVar4 != 0) {
                     if (( *(uint*)( puVar7 + 6 ) & 2 ) != 0) goto LAB_00100620;
                     *(uint*)( puVar7 + 6 ) = *(uint*)( puVar7 + 6 ) | 2;
                  }
                  if (*(code**)( puVar7 + 0xc ) != (code*)0x0) {
                     ( **(code**)( puVar7 + 0xc ) )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, local_50, *(undefined8*)( puVar7 + 0x10 ));
                  }
               }
            }
            LAB_00100404:uVar8 = uVar8 + 1;
         } while ( uVar8 < *(ulong*)( lVar1 + 0x88 ) );
      } else {
         do {
            local_50 = 0;
            local_48 = 0;
            puVar7 = (undefined2*)( *(long*)( lVar1 + 0x80 ) + uVar8 * 0x38 );
            iVar5 = should_add_extension(param_1, *(undefined4*)( puVar7 + 4 ), param_2, param_6);
            if (( iVar5 != 0 ) && ( ( *(byte*)( puVar7 + 6 ) & 1 ) != 0 )) {
               pcVar2 = *(code**)( puVar7 + 8 );
               if (uVar4 == 0) {
                  if (pcVar2 != (code*)0x0) goto LAB_00100481;
               } else {
                  if (pcVar2 != (code*)0x0) {
                     LAB_00100481:iVar5 = ( *pcVar2 )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, &local_50, &local_48, param_4, param_5, &local_54, *(undefined8*)( puVar7 + 0x10 ));
                     if (iVar5 < 0) goto LAB_00100692;
                     if (iVar5 == 0) goto LAB_00100552;
                  }
                  iVar5 = WPACKET_put_bytes__(param_3, *puVar7, 2);
                  if (( ( ( iVar5 == 0 ) || ( iVar5 = WPACKET_start_sub_packet_len__(param_3, 2) ),iVar5 == 0 ) ) || ( ( local_48 != 0 && ( iVar5 = WPACKET_memcpy(param_3, local_50) ),iVar5 == 0 ) )) goto LAB_001005c8;
                  if (uVar4 != 0) {
                     if (( *(uint*)( puVar7 + 6 ) & 2 ) != 0) goto LAB_00100620;
                     *(uint*)( puVar7 + 6 ) = *(uint*)( puVar7 + 6 ) | 2;
                  }
                  if (*(code**)( puVar7 + 0xc ) != (code*)0x0) {
                     ( **(code**)( puVar7 + 0xc ) )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, local_50, *(undefined8*)( puVar7 + 0x10 ));
                  }
               }
            }
            LAB_00100552:uVar8 = uVar8 + 1;
         } while ( uVar8 < *(ulong*)( lVar1 + 0x88 ) );
      }
   }
   uVar6 = 1;
   goto LAB_001005f1;
   LAB_00100692:if (uVar3 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_cust.c", 0xda, "custom_ext_add");
      ossl_statem_fatal(param_1, local_54, 0xea, 0);
   }
   goto LAB_001005ef;
   LAB_001005c8:if (*(code**)( puVar7 + 0xc ) != (code*)0x0) {
      ( **(code**)( puVar7 + 0xc ) )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, local_50, *(undefined8*)( puVar7 + 0x10 ));
   }
   if (uVar3 == 0) {
      ERR_new();
      uVar6 = 0xe9;
      goto LAB_0010066b;
   }
   goto LAB_001005ef;
   LAB_00100620:if (*(code**)( puVar7 + 0xc ) != (code*)0x0) {
      ( **(code**)( puVar7 + 0xc ) )(*(undefined8*)( param_1 + 0x40 ), *puVar7, param_2, local_50, *(undefined8*)( puVar7 + 0x10 ));
   }
   if (uVar3 == 0) {
      ERR_new();
      uVar6 = 0xf5;
      LAB_0010066b:ERR_set_debug("ssl/statem/extensions_cust.c", uVar6, "custom_ext_add");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
   LAB_001005ef:uVar6 = 0;
   LAB_001005f1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}undefined8 custom_exts_copy_flags(undefined8 param_1, undefined8 *param_2) {
   undefined4 *puVar1;
   long lVar2;
   undefined2 *puVar3;
   ulong uVar4;
   puVar3 = (undefined2*)*param_2;
   if (param_2[1] != 0) {
      uVar4 = 0;
      do {
         while (true) {
            lVar2 = custom_ext_find(param_1, *(undefined4*)( puVar3 + 2 ), *puVar3, 0);
            if (lVar2 != 0) break;
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 0x1c;
            if ((ulong)param_2[1] <= uVar4) {
               return 1;
            }
         };
         puVar1 = (undefined4*)( puVar3 + 6 );
         uVar4 = uVar4 + 1;
         puVar3 = puVar3 + 0x1c;
         *(undefined4*)( lVar2 + 0xc ) = *puVar1;
      } while ( uVar4 < (ulong)param_2[1] );
   }
   return 1;
}void custom_exts_free(long *param_1) {
   ulong uVar1;
   void *ptr;
   ulong uVar2;
   uVar1 = param_1[1];
   ptr = (void*)*param_1;
   if (uVar1 != 0) {
      uVar2 = 0;
      do {
         while (*(long*)( (long)ptr + 0x10 ) == 0x100000) {
            uVar2 = uVar2 + 1;
            CRYPTO_free(*(void**)( (long)ptr + 0x20 ));
            CRYPTO_free(*(void**)( (long)ptr + 0x30 ));
            uVar1 = param_1[1];
            ptr = (void*)( (long)ptr + 0x38 );
            if (uVar1 <= uVar2) goto LAB_001007a3;
         };
         uVar2 = uVar2 + 1;
         ptr = (void*)( (long)ptr + 0x38 );
      } while ( uVar2 < uVar1 );
      LAB_001007a3:ptr = (void*)*param_1;
   }
   CRYPTO_free(ptr);
   *param_1 = 0;
   param_1[1] = 0;
   return;
}undefined8 custom_exts_copy(long *param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   bool bVar3;
   long lVar4;
   long lVar5;
   if (param_2[1] == 0) {
      return 1;
   }
   lVar1 = CRYPTO_memdup(*param_2, param_2[1] * 0x38, "ssl/statem/extensions_cust.c");
   *param_1 = lVar1;
   if (lVar1 == 0) {
      return 0;
   }
   lVar4 = param_2[1];
   param_1[1] = lVar4;
   if (lVar4 == 0) {
      return 1;
   }
   bVar3 = false;
   lVar4 = 0;
   do {
      lVar5 = *param_2 + lVar4 * 0x38;
      if (*(long*)( lVar5 + 0x10 ) == 0x100000) {
         lVar1 = lVar1 + lVar4 * 0x38;
         if (!bVar3) {
            uVar2 = CRYPTO_memdup(*(undefined8*)( lVar5 + 0x20 ), 0x18, "ssl/statem/extensions_cust.c", 0x13a);
            *(undefined8*)( lVar1 + 0x20 ) = uVar2;
            lVar5 = CRYPTO_memdup(*(undefined8*)( lVar5 + 0x30 ), 0x10, "ssl/statem/extensions_cust.c", 0x13c);
            *(long*)( lVar1 + 0x30 ) = lVar5;
            bVar3 = *(long*)( lVar1 + 0x20 ) == 0 || lVar5 == 0;
            goto LAB_00100890;
         }
         *(undefined8*)( lVar1 + 0x20 ) = 0;
         *(undefined8*)( lVar1 + 0x30 ) = 0;
         if ((ulong)param_2[1] <= lVar4 + 1U) goto LAB_001008db;
      } else {
         LAB_00100890:if ((ulong)param_2[1] <= lVar4 + 1U) {
            LAB_001008db:if (!bVar3) {
               return 1;
            }
            custom_exts_free(param_1);
            return 0;
         }
      }
      lVar4 = lVar4 + 1;
      lVar1 = *param_1;
   } while ( true );
}bool SSL_CTX_has_client_custom_ext(long param_1, undefined4 param_2) {
   long lVar1;
   lVar1 = custom_ext_find(*(long*)( param_1 + 0x158 ) + 0x80, 0, param_2, 0);
   return lVar1 != 0;
}bool SSL_extension_supported(uint param_1) {
   if (param_1 < 0x34) {
      return ( 0xabe0808fd7c23U >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0;
   }
   if (param_1 != 0x3374) {
      return param_1 == 0xff01;
   }
   return true;
}undefined8 ossl_tls_add_custom_ext_intern(long param_1, undefined8 *param_2, undefined4 param_3, uint param_4, uint param_5, long param_6, long param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10) {
   undefined2 *puVar1;
   int iVar2;
   long lVar3;
   void *pvVar4;
   if (( param_6 == 0 ) && ( param_7 != 0 )) {
      return 0;
   }
   if (param_2 == (undefined8*)0x0) {
      param_2 = (undefined8*)( *(long*)( param_1 + 0x158 ) + 0x80 );
      if (param_4 == 0x12) {
         if (( param_5 & 0x80 ) != 0) goto LAB_00100b1d;
         goto LAB_00100a24;
      }
   } else if (param_4 == 0x12) {
      if (( ( param_5 & 0x80 ) != 0 ) && ( param_1 != 0 )) {
         LAB_00100b1d:iVar2 = SSL_CTX_ct_is_enabled();
         if (iVar2 != 0) {
            return 0;
         }
      }
      LAB_00100a24:SSL_extension_supported(0x12);
      goto LAB_00100a2e;
   }
   iVar2 = SSL_extension_supported(param_4);
   if (iVar2 != 0) {
      return 0;
   }
   if (0xffff < param_4) {
      return 0;
   }
   LAB_00100a2e:lVar3 = custom_ext_find(param_2, param_3, param_4, 0);
   if (( lVar3 == 0 ) && ( pvVar4 = CRYPTO_realloc((void*)*param_2, ( (int)param_2[1] + 1 ) * 0x38, "ssl/statem/extensions_cust.c", 0x195) ),pvVar4 != (void*)0x0) {
      *param_2 = pvVar4;
      puVar1 = (undefined2*)( (long)pvVar4 + param_2[1] * 0x38 );
      *(undefined1(*) [16])( puVar1 + 1 ) = (undefined1[16])0x0;
      *(undefined8*)( puVar1 + 0x14 ) = param_9;
      *(undefined4*)( puVar1 + 2 ) = param_3;
      *(undefined8*)( puVar1 + 0x10 ) = param_8;
      *(uint*)( puVar1 + 4 ) = param_5;
      *(long*)( puVar1 + 8 ) = param_6;
      *(long*)( puVar1 + 0xc ) = param_7;
      *puVar1 = (short)param_4;
      *(undefined8*)( puVar1 + 0x18 ) = param_10;
      param_2[1] = param_2[1] + 1;
      return 1;
   }
   return 0;
}void SSL_CTX_add_custom_ext(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
   ossl_tls_add_custom_ext_intern(param_1, 0, 2, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
   return;
}ulong SSL_CTX_add_client_custom_ext(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   undefined8 *ptr;
   undefined8 *ptr_00;
   ulong uVar1;
   ptr = (undefined8*)CRYPTO_malloc(0x18, "ssl/statem/extensions_cust.c", 0x1b2);
   ptr_00 = (undefined8*)CRYPTO_malloc(0x10, "ssl/statem/extensions_cust.c", 0x1b4);
   if (( ptr == (undefined8*)0x0 ) || ( ptr_00 == (undefined8*)0x0 )) {
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
      uVar1 = 0;
   } else {
      *ptr = param_5;
      ptr[1] = param_3;
      *ptr_00 = param_7;
      ptr[2] = param_4;
      ptr_00[1] = param_6;
      uVar1 = ossl_tls_add_custom_ext_intern(param_1, 0, 0, param_2, 0x1d0, 0x100000, custom_ext_free_old_cb_wrap, ptr, custom_ext_parse_old_cb_wrap, ptr_00);
      if ((int)uVar1 == 0) {
         CRYPTO_free(ptr);
         CRYPTO_free(ptr_00);
         return uVar1 & 0xffffffff;
      }
   }
   return uVar1;
}ulong SSL_CTX_add_server_custom_ext(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   undefined8 *ptr;
   undefined8 *ptr_00;
   ulong uVar1;
   ptr = (undefined8*)CRYPTO_malloc(0x18, "ssl/statem/extensions_cust.c", 0x1b2);
   ptr_00 = (undefined8*)CRYPTO_malloc(0x10, "ssl/statem/extensions_cust.c", 0x1b4);
   if (( ptr == (undefined8*)0x0 ) || ( ptr_00 == (undefined8*)0x0 )) {
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
      uVar1 = 0;
   } else {
      *ptr = param_5;
      ptr[1] = param_3;
      *ptr_00 = param_7;
      ptr[2] = param_4;
      ptr_00[1] = param_6;
      uVar1 = ossl_tls_add_custom_ext_intern(param_1, 0, 1, param_2, 0x1d0, 0x100000, custom_ext_free_old_cb_wrap, ptr, custom_ext_parse_old_cb_wrap, ptr_00);
      if ((int)uVar1 == 0) {
         CRYPTO_free(ptr);
         CRYPTO_free(ptr_00);
         return uVar1 & 0xffffffff;
      }
   }
   return uVar1;
}
