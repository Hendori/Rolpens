bool tls_construct_encrypted_extensions(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   iVar1 = tls_construct_extensions(param_1, param_2, 0x400, 0, 0);
   return iVar1 != 0;
}uint tls_construct_server_hello(long param_1, undefined8 param_2) {
   bool bVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   ulong uVar5;
   long lVar6;
   undefined *puVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar2 ) ) && ( iVar2 != 0x10000 )) {
      lVar6 = 0x303;
      bVar1 = true;
   } else {
      lVar6 = (long)*(int*)( param_1 + 0x48 );
      bVar1 = false;
   }
   iVar2 = WPACKET_put_bytes__(param_2, lVar6, 2);
   if (iVar2 == 0) {
      LAB_001001c0:ERR_new();
      uVar8 = 0x97f;
      LAB_0010016d:ERR_set_debug("ssl/statem/statem_srvr.c", uVar8, "tls_construct_server_hello");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      puVar7 = (undefined*)( param_1 + 0x168 );
      if (*(int*)( param_1 + 0x8d0 ) == 1) {
         puVar7 = &hrrrandom;
      }
      iVar2 = WPACKET_memcpy(param_2, puVar7, 0x20);
      if (iVar2 == 0) goto LAB_001001c0;
      if (( ( *(byte*)( *(long*)( param_1 + 8 ) + 0x50 ) & 2 ) != 0 ) || ( *(int*)( param_1 + 0x508 ) != 0 )) {
         if (bVar1) goto LAB_00100111;
         lVar6 = *(long*)( param_1 + 0x900 );
         uVar5 = *(ulong*)( lVar6 + 0x250 );
         if (uVar5 < 0x21) goto LAB_001001f7;
         LAB_001002b8:ERR_new();
         uVar8 = 0x9a2;
         goto LAB_0010016d;
      }
      lVar6 = *(long*)( param_1 + 0x900 );
      *(undefined8*)( lVar6 + 0x250 ) = 0;
      if (bVar1) {
         LAB_00100111:uVar5 = *(ulong*)( param_1 + 0x948 );
         lVar6 = param_1 + 0x928;
         if (0x20 < uVar5) goto LAB_001002b8;
         iVar2 = 0;
      } else {
         uVar5 = 0;
         LAB_001001f7:lVar6 = lVar6 + 600;
         iVar2 = 0;
         if (*(int**)( param_1 + 0x390 ) != (int*)0x0) {
            iVar2 = **(int**)( param_1 + 0x390 );
         }
      }
      iVar3 = WPACKET_sub_memcpy__(param_2, lVar6, uVar5, 1);
      if (( ( iVar3 == 0 ) || ( iVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0xb0 ) )(*(undefined8*)( param_1 + 0x300 ), param_2, auStack_28) ),iVar3 == 0 )) {
         ERR_new();
         uVar8 = 0x9b4;
         goto LAB_0010016d;
      }
      uVar8 = 0x800;
      if (*(int*)( param_1 + 0x8d0 ) != 1) {
         uVar8 = 0x100;
         if (( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( ( iVar2 = **(int**)( param_1 + 0x18 ) ),iVar2 < 0x304 || ( uVar8 = iVar2 == 0x10000 ) )) {
            uVar8 = 0x100;
         }
      }
      iVar2 = tls_construct_extensions(param_1, param_2, uVar8, 0, 0);
      if (iVar2 != 0) {
         if (*(int*)( param_1 + 0x8d0 ) == 1) {
            SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
            *(undefined8*)( param_1 + 0x900 ) = 0;
            *(undefined4*)( param_1 + 0x508 ) = 0;
            iVar2 = create_synthetic_message_hash(param_1, 0, 0, 0, 0);
            uVar4 = ( uint )(iVar2 != 0);
         } else {
            uVar4 = *(uint*)( param_1 + 0x950 ) & 1;
            if (uVar4 == 0) {
               iVar2 = ssl3_digest_cached_records(param_1, 0);
               uVar4 = ( uint )(iVar2 != 0);
            }
         }
         goto LAB_00100191;
      }
   }
   uVar4 = 0;
   LAB_00100191:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}bool tls_construct_server_done(long param_1) {
   int iVar1;
   if (*(int*)( param_1 + 0x398 ) != 0) {
      return true;
   }
   iVar1 = ssl3_digest_cached_records(param_1, 0);
   return iVar1 != 0;
}undefined8 create_ticket_prequel(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
   ulong uVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   uVar1 = *(ulong*)( *(long*)( param_1 + 0x900 ) + 0x2d8 );
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 0x18 ) ),iVar2 != 0x10000 )) {
      uVar3 = 0x93a80;
      if (uVar1 < 0x2260ff9290001) goto LAB_00100414;
   } else {
      uVar3 = 0;
      if (*(int*)( param_1 + 0x508 ) == 0) {
         LAB_00100414:uVar3 = uVar1 / 1000000000 & 0xffffffff;
      }
   }
   iVar2 = WPACKET_put_bytes__(param_2, uVar3, 4);
   if (iVar2 == 0) {
      ERR_new();
      uVar4 = 0xf4f;
      goto LAB_00100441;
   }
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 0x18 ) ),iVar2 != 0x10000 )) {
      iVar2 = WPACKET_put_bytes__(param_2, param_3, 4);
      if (iVar2 != 0) {
         iVar2 = WPACKET_sub_memcpy__(param_2, param_4, 8, 1);
         if (iVar2 != 0) goto LAB_001003d9;
      }
      ERR_new();
      uVar4 = 0xf56;
   } else {
      LAB_001003d9:iVar2 = WPACKET_start_sub_packet_len__(param_2, 2);
      if (iVar2 != 0) {
         return 1;
      }
      ERR_new();
      uVar4 = 0xf5d;
   }
   LAB_00100441:ERR_set_debug("ssl/statem/statem_srvr.c", uVar4, "create_ticket_prequel");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}undefined4 tls_construct_server_key_exchange(long param_1, undefined8 param_2) {
   long lVar1;
   uint uVar2;
   undefined8 *puVar3;
   char *__s;
   BIGNUM *a;
   undefined8 uVar4;
   bool bVar5;
   ushort uVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   long lVar13;
   size_t sVar14;
   EVP_PKEY *pkey;
   uint uVar15;
   undefined8 uVar16;
   EVP_PKEY *pEVar17;
   long *plVar18;
   long lVar19;
   long in_FS_OFFSET;
   long local_100;
   long local_e0;
   void *local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   void *local_78;
   uchar *local_70;
   undefined1 local_68[16];
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = *(long*)( param_1 + 0x3d0 );
   local_b0 = (void*)0x0;
   lVar13 = EVP_MD_CTX_new();
   local_a8 = 0;
   puVar3 = *(undefined8**)( param_1 + 8 );
   iVar7 = WPACKET_get_total_written(param_2, &local_98);
   if (iVar7 == 0) {
      ERR_new();
      uVar16 = 0x9f8;
      goto LAB_001008d1;
   }
   if (lVar13 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_srvr.c", 0x9fd, "tls_construct_server_key_exchange");
      ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
      goto LAB_001008f6;
   }
   lVar19 = *(long*)( param_1 + 0x300 );
   local_68 = (undefined1[16])0x0;
   uVar2 = *(uint*)( lVar19 + 0x1c );
   local_58._0_16_ = (undefined1[16])0x0;
   if (( uVar2 & 0x48 ) != 0) {
      bVar5 = false;
      uVar10 = 0;
      local_e0 = 0;
      LAB_00100590:if (( ( *(byte*)( lVar19 + 0x20 ) & 0x44 ) == 0 ) && ( ( *(uint*)( lVar19 + 0x1c ) & 0x1c8 ) == 0 )) {
         LAB_0010090d:if (local_100 != 0) goto LAB_001005a3;
         ERR_new();
         uVar9 = 0;
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xa83, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x32, 0xc0103, 0);
      } else {
         local_100 = 0;
         LAB_001005a3:if (( uVar2 & 0x1c8 ) == 0) {
            LAB_0010061b:uVar15 = uVar2 & 0x102;
            if (( uVar2 & 0x20 ) != 0) goto LAB_00100afa;
            lVar19 = 0;
            if (( uVar2 & 0x102 ) == 0) {
               do {
                  if (*(long*)( local_68 + lVar19 * 8 ) == 0) break;
                  iVar7 = WPACKET_start_sub_packet_len__(param_2, 2);
                  if (iVar7 == 0) goto LAB_0010137d;
                  iVar8 = BN_num_bits(*(BIGNUM**)( local_68 + lVar19 * 8 ));
                  iVar7 = iVar8 + 0xe;
                  if (-1 < iVar8 + 7) {
                     iVar7 = iVar8 + 7;
                  }
                  iVar7 = WPACKET_allocate_bytes(param_2, (long)( iVar7 >> 3 ), &local_70);
                  if (( iVar7 == 0 ) || ( iVar7 = iVar7 == 0 )) goto LAB_001012da;
                  lVar1 = lVar19 * 8;
                  lVar19 = lVar19 + 1;
                  BN_bn2bin(*(BIGNUM**)( local_68 + lVar1 ), local_70);
               } while ( lVar19 != 4 );
            } else {
               do {
                  if (*(long*)( local_68 + lVar19 * 8 ) == 0) break;
                  if (lVar19 == 2) {
                     iVar7 = WPACKET_start_sub_packet_len__(param_2, 2);
                     if (iVar7 == 0) goto LAB_0010137d;
                     iVar8 = BN_num_bits((BIGNUM*)local_68._0_8_);
                     iVar11 = BN_num_bits((BIGNUM*)local_58._0_8_);
                     iVar7 = iVar11 + 7;
                     if (iVar11 + 7 < 0) {
                        iVar7 = iVar11 + 0xe;
                     }
                     iVar11 = iVar8 + 0xe;
                     if (-1 < iVar8 + 7) {
                        iVar11 = iVar8 + 7;
                     }
                     sVar14 = (size_t)( ( iVar11 >> 3 ) - ( iVar7 >> 3 ) );
                     if (sVar14 != 0) {
                        iVar7 = WPACKET_allocate_bytes(param_2, sVar14, &local_70);
                        if (iVar7 == 0) goto LAB_00101554;
                        memset(local_70, 0, sVar14);
                     }
                  } else {
                     iVar7 = WPACKET_start_sub_packet_len__(param_2, 2);
                     if (iVar7 == 0) goto LAB_0010137d;
                  }
                  iVar8 = BN_num_bits(*(BIGNUM**)( local_68 + lVar19 * 8 ));
                  iVar7 = iVar8 + 0xe;
                  if (-1 < iVar8 + 7) {
                     iVar7 = iVar8 + 7;
                  }
                  iVar7 = WPACKET_allocate_bytes(param_2, (long)( iVar7 >> 3 ), &local_70);
                  if (( iVar7 == 0 ) || ( iVar7 = iVar7 == 0 )) goto LAB_001012da;
                  lVar1 = lVar19 * 8;
                  lVar19 = lVar19 + 1;
                  BN_bn2bin(*(BIGNUM**)( local_68 + lVar1 ), local_70);
               } while ( lVar19 != 4 );
            }
            goto LAB_001006ba;
         }
         __s = *(char**)( *(long*)( param_1 + 0x880 ) + 0xa8 );
         if (__s == (char*)0x0) {
            sVar14 = 0;
            LAB_001005e8:iVar7 = WPACKET_sub_memcpy__(param_2, __s, sVar14, 2);
            if (iVar7 != 0) goto LAB_0010061b;
         } else {
            sVar14 = strlen(__s);
            if (sVar14 < 0x101) goto LAB_001005e8;
         }
         ERR_new();
         uVar9 = 0;
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xa93, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      }
      goto LAB_00100744;
   }
   if (( uVar2 & 0x102 ) == 0) {
      if (( uVar2 & 0x84 ) != 0) {
         if (*(long*)( param_1 + 0x308 ) != 0) {
            ERR_new();
            uVar16 = 0xa47;
            goto LAB_001008d1;
         }
         uVar6 = tls1_shared_group(param_1, 0xfffffffe);
         uVar10 = (uint)uVar6;
         if (uVar6 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xa4e, "tls_construct_server_key_exchange");
            ossl_statem_fatal(param_1, 0x28, 0x13b, 0);
         } else {
            *(uint*)( *(long*)( param_1 + 0x900 ) + 0x308 ) = uVar10;
            lVar19 = ssl_generate_pkey_group(param_1, uVar10);
            *(long*)( param_1 + 0x308 ) = lVar19;
            if (lVar19 != 0) {
               local_e0 = EVP_PKEY_get1_encoded_public_key(lVar19, &local_b0);
               if (local_e0 != 0) {
                  bVar5 = false;
                  lVar19 = *(long*)( param_1 + 0x300 );
                  local_68 = (undefined1[16])0x0;
                  local_58._0_16_ = (undefined1[16])0x0;
                  goto LAB_00100590;
               }
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0xa5f, "tls_construct_server_key_exchange");
               ossl_statem_fatal(param_1, 0x50, 0x80010, 0);
            }
         }
         LAB_001008f6:pkey = (EVP_PKEY*)0x0;
         goto LAB_00100865;
      }
      if (( uVar2 & 0x20 ) == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xa7b, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0xfa, 0);
         goto LAB_001008f6;
      }
      if (( ( ( *(long*)( param_1 + 0xbf8 ) == 0 ) || ( *(long*)( param_1 + 0xc00 ) == 0 ) ) || ( *(long*)( param_1 + 0xc08 ) == 0 ) ) || ( *(long*)( param_1 + 0xc10 ) == 0 )) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xa71, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0x166, 0);
         goto LAB_001008f6;
      }
      bVar5 = false;
      local_58._8_8_ = *(undefined8*)( param_1 + 0xc10 );
      local_58._0_8_ = *(long*)( param_1 + 0xc08 );
      local_68._8_8_ = *(long*)( param_1 + 0xc00 );
      local_68._0_8_ = *(long*)( param_1 + 0xbf8 );
      if (( *(byte*)( lVar19 + 0x20 ) & 0x44 ) == 0) {
         uVar10 = 0;
         local_e0 = 0;
         goto LAB_0010090d;
      }
      local_100 = 0;
      uVar10 = 0;
      local_e0 = 0;
      uVar15 = 0;
      LAB_00100afa:plVar18 = (long*)local_68;
      iVar7 = 0;
      do {
         if (*plVar18 == 0) break;
         if (iVar7 == 2) {
            iVar8 = WPACKET_start_sub_packet_len__(param_2, 1);
            if (iVar8 == 0) goto LAB_0010137d;
            if (uVar15 != 0) {
               iVar11 = BN_num_bits((BIGNUM*)local_68._0_8_);
               iVar12 = BN_num_bits((BIGNUM*)local_58._0_8_);
               iVar8 = iVar11 + 0xe;
               if (-1 < iVar11 + 7) {
                  iVar8 = iVar11 + 7;
               }
               iVar11 = iVar12 + 7;
               if (iVar12 + 7 < 0) {
                  iVar11 = iVar12 + 0xe;
               }
               sVar14 = (size_t)( ( iVar8 >> 3 ) - ( iVar11 >> 3 ) );
               if (sVar14 != 0) {
                  iVar8 = WPACKET_allocate_bytes(param_2, sVar14, &local_70);
                  if (iVar8 == 0) goto LAB_00101554;
                  memset(local_70, 0, sVar14);
               }
            }
         } else {
            iVar8 = WPACKET_start_sub_packet_len__(param_2, 2);
            if (iVar8 == 0) goto LAB_0010137d;
         }
         iVar11 = BN_num_bits((BIGNUM*)*plVar18);
         iVar8 = iVar11 + 0xe;
         if (-1 < iVar11 + 7) {
            iVar8 = iVar11 + 7;
         }
         iVar8 = WPACKET_allocate_bytes(param_2, (long)( iVar8 >> 3 ), &local_70);
         if (( iVar8 == 0 ) || ( iVar8 = iVar8 == 0 )) goto LAB_001012da;
         a = (BIGNUM*)*plVar18;
         iVar7 = iVar7 + 1;
         plVar18 = plVar18 + 1;
         BN_bn2bin(a, local_70);
      } while ( iVar7 != 4 );
      LAB_001006ba:if (( uVar2 & 0x84 ) != 0) {
         iVar7 = WPACKET_put_bytes__(param_2, 3, 1);
         if (( ( ( iVar7 == 0 ) || ( iVar7 = WPACKET_put_bytes__(param_2, 0, 1) ),iVar7 == 0 ) ) || ( iVar7 = iVar7 == 0 )) {
            ERR_new();
            uVar16 = 0xace;
            goto LAB_00100723;
         }
         CRYPTO_free(local_b0);
         local_b0 = (void*)0x0;
      }
      if (local_100 == 0) {
         LAB_0010153a:uVar9 = 1;
         goto LAB_00100744;
      }
      lVar19 = *(long*)( *(long*)( param_1 + 0x3d8 ) + 8 );
      local_70 = (uchar*)0x0;
      if (( lVar19 == 0 ) || ( iVar7 = iVar7 == 0 )) {
         ERR_new();
         uVar16 = 0xade;
         goto LAB_00100723;
      }
      iVar7 = WPACKET_get_length(param_2, &local_a0);
      if (iVar7 == 0) {
         ERR_new();
         uVar16 = 0xae3;
         goto LAB_00100723;
      }
      if (( ( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 2 ) != 0 ) && ( iVar7 = WPACKET_put_bytes__(param_2, *(undefined2*)( local_100 + 0x10 ), 2) ),iVar7 == 0) {
         ERR_new();
         uVar16 = 0xae8;
         goto LAB_00100723;
      }
      uVar16 = puVar3[0x8e];
      uVar4 = *puVar3;
      if (local_90 != 0) {
         local_90 = EVP_MD_get0_name(local_90);
      }
      iVar7 = EVP_DigestSignInit_ex(lVar13, &local_a8, local_90, uVar4, uVar16, lVar19);
      if (iVar7 < 1) {
         ERR_new();
         uVar16 = 0xaf0;
         goto LAB_00100723;
      }
      if (( *(int*)( local_100 + 0x1c ) == 0x390 ) && ( ( iVar7 = EVP_PKEY_CTX_set_rsa_padding(local_a8, 6) ),iVar7 < 1 || ( iVar7 = iVar7 < 1 ) )) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xaf6, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
      } else {
         lVar19 = construct_key_exchange_tbs(param_1, &local_78, local_98 + *(long*)( *(long*)( param_1 + 0xf8 ) + 8 ), local_a0);
         if (lVar19 != 0) {
            iVar7 = EVP_DigestSign(lVar13, 0, &local_70, local_78, lVar19);
            if (( ( ( 0 < iVar7 ) && ( iVar7 = WPACKET_sub_reserve_bytes__(param_2, local_70, &local_88, 2) ),iVar7 != 0 ) ) && ( iVar7 = EVP_DigestSign(lVar13, local_88, &local_70, local_78, lVar19) ),0 < iVar7) {
               CRYPTO_free(local_78);
               goto LAB_0010153a;
            }
            CRYPTO_free(local_78);
            ERR_new();
            uVar16 = 0xb08;
            goto LAB_00100723;
         }
      }
      goto LAB_00100741;
   }
   lVar19 = *(long*)( param_1 + 0x880 );
   if (*(int*)( lVar19 + 0x18 ) == 0) {
      pkey = (EVP_PKEY*)0x0;
      pEVar17 = *(EVP_PKEY**)( lVar19 + 8 );
      if (*(EVP_PKEY**)( lVar19 + 8 ) == (EVP_PKEY*)0x0) {
         if (*(code**)( lVar19 + 0x10 ) == (code*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xa23, "tls_construct_server_key_exchange");
            ossl_statem_fatal(param_1, 0x50, 0xab, 0);
            goto LAB_001008f6;
         }
         uVar16 = ( **(code**)( lVar19 + 0x10 ) )(*(undefined8*)( param_1 + 0x40 ), 0, 0x400);
         pkey = (EVP_PKEY*)ssl_dh_to_pkey(uVar16);
         pEVar17 = pkey;
         if (pkey == (EVP_PKEY*)0x0) {
            ERR_new();
            uVar16 = 0xa1c;
            goto LAB_001008d1;
         }
      }
   } else {
      pkey = (EVP_PKEY*)ssl_get_auto_dh(param_1);
      pEVar17 = pkey;
      if (pkey == (EVP_PKEY*)0x0) {
         ERR_new();
         uVar16 = 0xa10;
         LAB_001008d1:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_construct_server_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         goto LAB_001008f6;
      }
   }
   uVar9 = EVP_PKEY_get_security_bits(pEVar17);
   iVar7 = ssl_security(param_1, 0x40007, uVar9, 0, pEVar17);
   if (iVar7 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_srvr.c", 0xa28, "tls_construct_server_key_exchange");
      ossl_statem_fatal(param_1, 0x28, 0x18a, 0);
      LAB_00100865:uVar9 = 0;
      EVP_PKEY_free(pkey);
      CRYPTO_free(local_b0);
      EVP_MD_CTX_free(lVar13);
      goto LAB_0010088a;
   }
   if (*(long*)( param_1 + 0x308 ) != 0) {
      ERR_new();
      uVar16 = 0xa2c;
      LAB_0010083b:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_construct_server_key_exchange");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      goto LAB_00100865;
   }
   lVar19 = ssl_generate_pkey(param_1, pEVar17);
   *(long*)( param_1 + 0x308 ) = lVar19;
   if (lVar19 == 0) {
      ERR_new();
      uVar16 = 0xa32;
      goto LAB_0010083b;
   }
   EVP_PKEY_free(pkey);
   iVar7 = EVP_PKEY_get_bn_param(*(undefined8*)( param_1 + 0x308 ), &_LC1, local_68);
   if (( ( iVar7 != 0 ) && ( iVar7 = EVP_PKEY_get_bn_param(*(undefined8*)( param_1 + 0x308 ), &_LC2, local_68 + 8) ),iVar7 != 0 )) {
      bVar5 = true;
      lVar19 = *(long*)( param_1 + 0x300 );
      uVar10 = 0;
      local_e0 = 0;
      goto LAB_00100590;
   }
   ERR_new();
   ERR_set_debug("ssl/statem/statem_srvr.c", 0xa41, "tls_construct_server_key_exchange");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   EVP_PKEY_free((EVP_PKEY*)0x0);
   CRYPTO_free(local_b0);
   EVP_MD_CTX_free(lVar13);
   uVar9 = 0;
   goto LAB_00100771;
   LAB_00101554:ERR_new();
   uVar16 = 0xab3;
   goto LAB_00100723;
   LAB_0010137d:ERR_new();
   uVar16 = 0xaa5;
   goto LAB_00100723;
   LAB_001012da:ERR_new();
   uVar16 = 0xabc;
   LAB_00100723:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_construct_server_key_exchange");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   LAB_00100741:uVar9 = 0;
   LAB_00100744:EVP_PKEY_free((EVP_PKEY*)0x0);
   CRYPTO_free(local_b0);
   EVP_MD_CTX_free(lVar13);
   if (bVar5) {
      LAB_00100771:BN_free((BIGNUM*)local_68._0_8_);
      BN_free((BIGNUM*)local_68._8_8_);
      BN_free((BIGNUM*)local_58._0_8_);
      BN_free((BIGNUM*)local_58._8_8_);
   }
   LAB_0010088a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar9;
}undefined8 tls_construct_certificate_request(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 )) {
      if (*(int*)( param_1 + 0xba8 ) == 3) {
         CRYPTO_free(*(void**)( param_1 + 0xbb0 ));
         *(undefined8*)( param_1 + 3000 ) = 0x20;
         pvVar3 = CRYPTO_malloc(0x20, "ssl/statem/statem_srvr.c", 0xb24);
         *(void**)( param_1 + 0xbb0 ) = pvVar3;
         if (pvVar3 == (void*)0x0) {
            *(undefined8*)( param_1 + 3000 ) = 0;
            ERR_new();
            uVar2 = 0xb26;
         } else {
            iVar1 = RAND_bytes_ex(**(undefined8**)( param_1 + 8 ), pvVar3, *(undefined8*)( param_1 + 3000 ), 0);
            if (( 0 < iVar1 ) && ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0xbb0 ), *(undefined8*)( param_1 + 3000 ), 1) ),iVar1 != 0) {
               iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
               if (iVar1 == 0) {
                  uVar2 = 0;
                  goto LAB_00101620;
               }
               goto LAB_001015ed;
            }
            ERR_new();
            uVar2 = 0xb2d;
         }
         goto LAB_00101678;
      }
      iVar1 = WPACKET_put_bytes__(param_2, 0, 1);
      if (iVar1 == 0) {
         ERR_new();
         uVar2 = 0xb37;
         goto LAB_00101678;
      }
      LAB_001015ed:iVar1 = tls_construct_extensions(param_1, param_2, 0x4000, 0, 0);
      if (iVar1 != 0) goto LAB_0010160a;
   } else {
      iVar1 = WPACKET_start_sub_packet_len__(param_2, 1);
      if (( ( iVar1 != 0 ) && ( iVar1 = ssl3_get_req_cert_type(param_1, param_2) ),iVar1 != 0 )) {
         if (( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 2 ) != 0) {
            uVar2 = tls12_get_psigalgs(param_1, 1, &local_28);
            iVar1 = WPACKET_start_sub_packet_len__(param_2, 2);
            if (( ( iVar1 == 0 ) || ( iVar1 = WPACKET_set_flags(param_2, 1) ),iVar1 == 0 )) {
               ERR_new();
               uVar2 = 0xb54;
               goto LAB_00101678;
            }
         }
         uVar2 = get_ca_names(param_1);
         iVar1 = construct_ca_names(param_1, uVar2, param_2);
         if (iVar1 == 0) {
            uVar2 = 0;
            goto LAB_00101620;
         }
         LAB_0010160a:*(int*)( param_1 + 0xbc0 ) = *(int*)( param_1 + 0xbc0 ) + 1;
         uVar2 = 1;
         *(undefined4*)( param_1 + 0x398 ) = 1;
         goto LAB_00101620;
      }
      ERR_new();
      uVar2 = 0xb48;
      LAB_00101678:ERR_set_debug("ssl/statem/statem_srvr.c", uVar2, "tls_construct_certificate_request");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
   uVar2 = 0;
   LAB_00101620:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 tls_process_cke_psk_preamble(long param_1, long *param_2) {
   ushort *puVar1;
   long lVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   undefined8 uVar6;
   ushort uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   undefined1 auStack_238[520];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_2[1] < 2) {
      LAB_001019b8:ERR_new();
      ERR_set_debug("ssl/statem/statem_srvr.c", 0xb6c, "tls_process_cke_psk_preamble");
      ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   } else {
      uVar7 = *(ushort*)*param_2;
      uVar4 = param_2[1] - 2;
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      uVar8 = (ulong)uVar7;
      if (uVar4 < uVar8) goto LAB_001019b8;
      puVar1 = (ushort*)*param_2 + 1;
      param_2[1] = uVar4 - uVar8;
      *param_2 = (long)puVar1 + uVar8;
      if (uVar7 < 0x101) {
         if (*(long*)( param_1 + 0x978 ) == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xb74, "tls_process_cke_psk_preamble");
            ossl_statem_fatal(param_1, 0x50, 0xe1, 0);
         } else {
            lVar2 = *(long*)( param_1 + 0x900 );
            CRYPTO_free(*(void**)( lVar2 + 0x2a8 ));
            lVar5 = CRYPTO_strndup(puVar1, uVar8, "include/internal/packet.h", 0x1e6);
            *(long*)( lVar2 + 0x2a8 ) = lVar5;
            if (lVar5 == 0) {
               ERR_new();
               uVar6 = 0xb79;
            } else {
               uVar3 = ( **(code**)( param_1 + 0x978 ) )(*(undefined8*)( param_1 + 0x40 ), *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x2a8 ), auStack_238, 0x200);
               uVar4 = (ulong)uVar3;
               if (uVar3 < 0x201) {
                  if (uVar4 == 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xb88, "tls_process_cke_psk_preamble");
                     ossl_statem_fatal(param_1, 0x73, 0xdf, 0);
                  } else {
                     CRYPTO_free(*(void**)( param_1 + 0x3c0 ));
                     uVar6 = CRYPTO_memdup(auStack_238, uVar4, "ssl/statem/statem_srvr.c", 0xb8d);
                     *(undefined8*)( param_1 + 0x3c0 ) = uVar6;
                     OPENSSL_cleanse(auStack_238, uVar4);
                     if (*(long*)( param_1 + 0x3c0 ) != 0) {
                        *(ulong*)( param_1 + 0x3c8 ) = uVar4;
                        uVar6 = 1;
                        goto LAB_001019ed;
                     }
                     *(undefined8*)( param_1 + 0x3c8 ) = 0;
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xb92, "tls_process_cke_psk_preamble");
                     ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
                  }
                  goto LAB_001019eb;
               }
               ERR_new();
               uVar6 = 0xb82;
            }
            ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, "tls_process_cke_psk_preamble");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         }
      } else {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xb70, "tls_process_cke_psk_preamble");
         ossl_statem_fatal(param_1, 0x32, 0x92, 0);
      }
   }
   LAB_001019eb:uVar6 = 0;
   LAB_001019ed:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool tls_construct_server_certificate(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   lVar2 = *(long*)( param_1 + 0x3d8 );
   if (lVar2 == 0) {
      ERR_new();
      uVar3 = 0xefe;
   } else if (( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 ) ) && ( 0x303 < iVar1 )) {
      ERR_new();
      uVar3 = 0xf07;
   } else {
      if (*(char*)( param_1 + 0xb52 ) == '\0') {
         lVar2 = ssl3_output_cert_chain(param_1, param_2, lVar2, 0);
         return lVar2 != 0;
      }
      if (*(char*)( param_1 + 0xb52 ) == '\x02') {
         lVar2 = tls_output_rpk(param_1, param_2, lVar2);
         return lVar2 != 0;
      }
      ERR_new();
      uVar3 = 0xf18;
   }
   ERR_set_debug("ssl/statem/statem_srvr.c", uVar3, "tls_construct_server_certificate");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return false;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 tls_construct_new_session_ticket(long param_1, undefined8 param_2) {
   undefined8 *puVar1;
   ulong uVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   code *pcVar6;
   uchar *in;
   SSL_SESSION *in_00;
   undefined8 uVar7;
   long lVar8;
   EVP_CIPHER *cipher;
   char *pcVar9;
   undefined4 uVar10;
   undefined8 uVar11;
   long in_FS_OFFSET;
   long lVar12;
   EVP_CIPHER_CTX *local_f8;
   long local_f0;
   int local_c8;
   int local_c4;
   uchar *local_c0;
   uchar *local_b8;
   uchar *local_b0;
   long local_a8;
   long local_a0;
   uchar *local_98;
   ulong local_90;
   long local_88;
   long local_80;
   undefined4 local_74;
   ulong local_70;
   uchar local_68[16];
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   lVar12 = *(long*)( param_1 + 0xb88 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_74 = 0;
   if (( *(uint*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0) {
      iVar3 = **(int**)( param_1 + 0x18 );
      if (( iVar3 != 0x10000 ) && ( 0x303 < iVar3 )) {
         uVar11 = ssl_handshake_md();
         iVar3 = EVP_MD_get_size(uVar11);
         if (iVar3 < 1) {
            ERR_new();
            pcVar9 = "tls_construct_new_session_ticket";
            uVar11 = 0x106a;
            goto LAB_001021a9;
         }
         lVar8 = *(long*)( param_1 + 0x900 );
         if (( *(long*)( param_1 + 0x1558 ) == 0 ) && ( *(int*)( param_1 + 0x508 ) == 0 )) {
            LAB_00102230:iVar4 = ssl_generate_session_id(param_1, lVar8);
            if (iVar4 != 0) {
               iVar4 = RAND_bytes_ex(**(undefined8**)( param_1 + 8 ), &local_74, 4, 0);
               if (iVar4 < 1) {
                  ERR_new();
                  pcVar9 = "tls_construct_new_session_ticket";
                  uVar11 = 0x1086;
                  goto LAB_001021a9;
               }
               lVar8 = *(long*)( param_1 + 0x900 );
               *(undefined4*)( lVar8 + 0x340 ) = local_74;
               uVar2 = *(ulong*)( param_1 + 0x1560 );
               local_70 = uVar2 >> 0x38 | ( uVar2 & 0xff000000000000 ) >> 0x28 | ( uVar2 & 0xff0000000000 ) >> 0x18 | ( uVar2 & 0xff00000000 ) >> 8 | ( uVar2 & 0xff000000 ) << 8 | ( uVar2 & 0xff0000 ) << 0x18 | ( uVar2 & 0xff00 ) << 0x28 | uVar2 << 0x38;
               iVar4 = tls13_hkdf_expand(param_1, uVar11, param_1 + 0x63c, "resumption", 10, &local_70, 8, lVar8 + 0x50, (long)iVar3, 1);
               if (iVar4 != 0) {
                  lVar8 = *(long*)( param_1 + 0x900 );
                  *(long*)( lVar8 + 8 ) = (long)iVar3;
                  uVar7 = ossl_time_now();
                  uVar11 = *(undefined8*)( param_1 + 0x900 );
                  *(undefined8*)( lVar8 + 0x2e0 ) = uVar7;
                  ssl_session_calculate_timeout(uVar11);
                  lVar8 = *(long*)( param_1 + 0x900 );
                  if (*(long*)( param_1 + 0x4b8 ) != 0) {
                     CRYPTO_free(*(void**)( lVar8 + 0x348 ));
                     lVar8 = *(long*)( param_1 + 0x900 );
                     uVar11 = CRYPTO_memdup(*(undefined8*)( param_1 + 0x4b8 ), *(undefined8*)( param_1 + 0x4c0 ), "ssl/statem/statem_srvr.c");
                     *(undefined8*)( lVar8 + 0x348 ) = uVar11;
                     lVar8 = *(long*)( param_1 + 0x900 );
                     if (*(long*)( lVar8 + 0x348 ) == 0) {
                        *(undefined8*)( lVar8 + 0x350 ) = 0;
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0x10a5, "tls_construct_new_session_ticket");
                        ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
                        goto LAB_00101dc0;
                     }
                     *(undefined8*)( lVar8 + 0x350 ) = *(undefined8*)( param_1 + 0x4c0 );
                  }
                  *(undefined4*)( lVar8 + 0x344 ) = *(undefined4*)( param_1 + 0x1540 );
                  pcVar6 = *(code**)( lVar12 + 0x428 );
                  if (pcVar6 != (code*)0x0) goto LAB_00101d21;
                  goto LAB_00101d36;
               }
            }
         } else {
            lVar8 = ssl_session_dup(lVar8, 0);
            if (lVar8 != 0) {
               SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
               *(long*)( param_1 + 0x900 ) = lVar8;
               goto LAB_00102230;
            }
         }
         goto LAB_00101dc0;
      }
      pcVar6 = *(code**)( lVar12 + 0x428 );
      if (pcVar6 != (code*)0x0) goto LAB_00101d21;
      LAB_00101e1a:uVar10 = local_74;
      uVar11 = *(undefined8*)( param_1 + 0x40 );
      puVar1 = *(undefined8**)( param_1 + 8 );
      iVar3 = i2d_SSL_SESSION(*(SSL_SESSION**)( param_1 + 0x900 ), (uchar**)0x0);
      if (( iVar3 == 0 ) || ( 0xff00 < iVar3 )) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xf81, "construct_stateless_ticket");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         LAB_001020be:iVar3 = 0;
         in = (uchar*)0x0;
         local_f0 = 0;
         local_f8 = (EVP_CIPHER_CTX*)0x0;
      } else {
         in = (uchar*)CRYPTO_malloc(iVar3, "ssl/statem/statem_srvr.c", 0xf84);
         if (in == (uchar*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xf86, "construct_stateless_ticket");
            ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
            goto LAB_001020be;
         }
         local_f8 = EVP_CIPHER_CTX_new();
         if (local_f8 == (EVP_CIPHER_CTX*)0x0) {
            ERR_new();
            iVar3 = 0;
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xf8c, "construct_stateless_ticket");
            ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
            local_f0 = 0;
         } else {
            local_f0 = ssl_hmac_new(lVar12);
            if (local_f0 == 0) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0xf91, "construct_stateless_ticket");
               uVar11 = 0x80014;
               LAB_001023c0:ossl_statem_fatal(param_1, 0x50, uVar11, 0);
               LAB_001023cf:iVar3 = 0;
            } else {
               local_c0 = in;
               iVar4 = i2d_SSL_SESSION(*(SSL_SESSION**)( param_1 + 0x900 ), &local_c0);
               if (iVar4 == 0) {
                  ERR_new();
                  uVar11 = 0xf97;
                  goto LAB_001023b1;
               }
               local_98 = in;
               in_00 = (SSL_SESSION*)d2i_SSL_SESSION_ex(0, &local_98, (long)iVar3, *puVar1, puVar1[0x8e]);
               if (in_00 == (SSL_SESSION*)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_srvr.c", 0xfa2, "construct_stateless_ticket");
                  uVar11 = 0xc0103;
                  goto LAB_001023c0;
               }
               iVar4 = i2d_SSL_SESSION(in_00, (uchar**)0x0);
               if (( iVar4 == 0 ) || ( iVar3 < iVar4 )) {
                  ERR_new();
                  uVar11 = 0xfa9;
               } else {
                  local_c0 = in;
                  iVar3 = i2d_SSL_SESSION(in_00, &local_c0);
                  if (iVar3 != 0) {
                     SSL_SESSION_free(in_00);
                     pcVar6 = *(code**)( lVar12 + 0x260 );
                     if (pcVar6 != (code*)0x0) {
                        uVar7 = ssl_hmac_get0_EVP_MAC_CTX(local_f0);
                        LAB_00101f4d:iVar3 = ( *pcVar6 )(uVar11, &local_58, local_68, local_f8, uVar7, 1);
                        if (iVar3 == 0) {
                           if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) {
                              iVar3 = 2;
                              goto LAB_001020d0;
                           }
                           iVar3 = WPACKET_put_bytes__(param_2, 0, 4);
                           if (( iVar3 != 0 ) && ( iVar3 = iVar3 != 0 )) {
                              CRYPTO_free(in);
                              EVP_CIPHER_CTX_free(local_f8);
                              ssl_hmac_free(local_f0);
                              goto LAB_00102160;
                           }
                           ERR_new();
                           uVar11 = 0xfd9;
                        } else {
                           if (iVar3 < 0) {
                              ERR_new();
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xfe2, "construct_stateless_ticket");
                              uVar11 = 0xea;
                              goto LAB_001023c0;
                           }
                           iVar3 = EVP_CIPHER_CTX_get_iv_length(local_f8);
                           if (-1 < iVar3) goto LAB_00101f99;
                           ERR_new();
                           uVar11 = 0xfe7;
                        }
                        LAB_001023b1:ERR_set_debug("ssl/statem/statem_srvr.c", uVar11, "construct_stateless_ticket");
                        uVar11 = 0xc0103;
                        goto LAB_001023c0;
                     }
                     pcVar6 = *(code**)( lVar12 + 600 );
                     if (pcVar6 != (code*)0x0) {
                        uVar7 = ssl_hmac_get0_HMAC_CTX(local_f0);
                        goto LAB_00101f4d;
                     }
                     cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(*puVar1, "AES-256-CBC", puVar1[0x8e]);
                     if (cipher == (EVP_CIPHER*)0x0) {
                        iVar3 = 0;
                        ossl_statem_send_fatal(param_1, 0x50);
                        goto LAB_001020d0;
                     }
                     iVar3 = EVP_CIPHER_get_iv_length(cipher);
                     if (iVar3 < 0) {
                        LAB_0010274a:EVP_CIPHER_free(cipher);
                        ERR_new();
                        uVar11 = 0xffd;
                        goto LAB_001023b1;
                     }
                     iVar5 = RAND_bytes_ex(*puVar1, local_68, (long)iVar3, 0);
                     if (( ( iVar5 < 1 ) || ( iVar5 = EVP_EncryptInit_ex(local_f8, cipher, (ENGINE*)0x0, (uchar*)( *(long*)( lVar12 + 0x250 ) + 0x20 ), local_68) ),iVar5 == 0 )) goto LAB_0010274a;
                     EVP_CIPHER_free(cipher);
                     local_58 = *(undefined8*)( lVar12 + 0x240 );
                     uStack_50 = *(undefined8*)( lVar12 + 0x248 );
                     LAB_00101f99:iVar5 = create_ticket_prequel(param_1, param_2, uVar10, &local_70);
                     if (iVar5 != 0) {
                        iVar5 = WPACKET_get_total_written(param_2, &local_88);
                        if (( ( iVar5 != 0 ) && ( iVar5 = WPACKET_memcpy(param_2, &local_58, 0x10) ),iVar5 != 0 )) {
                           iVar3 = WPACKET_reserve_bytes(param_2, (long)( iVar4 + 0x20 ), &local_b8);
                           if (( iVar3 != 0 ) && ( iVar3 = EVP_EncryptUpdate(local_f8, local_b8, &local_c8, in, iVar4) ),iVar3 != 0) {
                              iVar3 = WPACKET_allocate_bytes(param_2, (long)local_c8, &local_b0);
                              if (( ( ( ( iVar3 != 0 ) && ( ( local_b8 == local_b0 && ( iVar3 = EVP_EncryptFinal(local_f8, local_b8 + local_c8, &local_c4) ),iVar3 != 0 ) ) ) ) && ( iVar3 = WPACKET_allocate_bytes(param_2, (long)local_c4, &local_b0) ),iVar3 != 0 )) &&( ( ( ( ( local_b0 == local_b8 + local_c8 && ( local_c8 + local_c4 <= iVar4 + 0x20 ) ) && ( iVar3 = WPACKET_get_total_written(param_2, &local_80) ),iVar3 != 0 ) ) && ( ( iVar3 = ssl_hmac_update(local_f0, local_88 + *(long*)( *(long*)( param_1 + 0xf8 ) + 8 ), local_80 - local_88) ),iVar3 != 0 && ( iVar3 = WPACKET_reserve_bytes(param_2, 0x40, &local_a8) ),iVar3 != 0 ) ) ) && ( ( iVar3 = ssl_hmac_final(local_f0, local_a8, &local_90, 0x40) ),iVar3 != 0 && ( ( local_90 < 0x41 && ( iVar3 = iVar3 != 0 ) ) ) ) && ( local_a8 == local_a0 );
                              iVar4 = WPACKET_close(param_2);
                              if (iVar4 != 0) goto LAB_001020d0;
                              ERR_new();
                              uVar11 = 0x1028;
                              goto LAB_001023b1;
                           }
                        }
                     }
                     ERR_new();
                     uVar11 = 0x1022;
                     goto LAB_001023b1;
                  }
                  goto LAB_001023cf;
               }
               ERR_new();
               uVar11 = 0xfaf;
            }
            iVar3 = 0;
            ERR_set_debug("ssl/statem/statem_srvr.c", uVar11, "construct_stateless_ticket");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            SSL_SESSION_free(in_00);
         }
      }
   }
   LAB_001020d0:CRYPTO_free(in);
   EVP_CIPHER_CTX_free(local_f8);
   ssl_hmac_free(local_f0);
   if (iVar3 == 1) goto LAB_00102160;
   if (iVar3 == 2) {
      lVar12 = *(long*)( param_1 + 0x1560 ) + _UNK_00108d78;
      *(long*)( param_1 + 0x1558 ) = *(long*)( param_1 + 0x1558 ) + __LC7;
      *(long*)( param_1 + 0x1560 ) = lVar12;
      uVar10 = 2;
      if (0 < *(int*)( param_1 + 0xa64 )) {
         *(int*)( param_1 + 0xa64 ) = *(int*)( param_1 + 0xa64 ) + -1;
      }
      goto LAB_00101dc2;
   }
}else{pcVar6 = *(code**)( lVar12 + 0x428 );if (pcVar6 == (code*)0x0) goto LAB_00101e1a;LAB_00101d21:iVar3 = ( *pcVar6 )(*(undefined8*)( param_1 + 0x40 ));if (iVar3 != 0) {
   LAB_00101d36:if (( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0) {
      LAB_00102390:lVar12 = *(long*)( param_1 + 0xb88 );
      goto LAB_00101e1a;
   }
   iVar3 = **(int**)( param_1 + 0x18 );
   if (( iVar3 == 0x10000 ) || ( iVar3 < 0x304 )) {
      lVar12 = *(long*)( param_1 + 0xb88 );
      goto LAB_00101e1a;
   }
   if (( ( *(ulong*)( param_1 + 0x9b0 ) & 0x4000 ) == 0 ) && ( ( *(int*)( param_1 + 0x1540 ) == 0 || ( ( *(ulong*)( param_1 + 0x9b0 ) & 0x1000000 ) != 0 ) ) )) goto LAB_00102390;
   iVar3 = create_ticket_prequel(param_1, param_2, local_74, &local_70);
   if (iVar3 == 0) goto LAB_00101dc0;
   iVar3 = WPACKET_memcpy(param_2, *(long*)( param_1 + 0x900 ) + 600, *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x250 ));
   if (( iVar3 == 0 ) || ( iVar3 = iVar3 == 0 )) {
      ERR_new();
      pcVar9 = "construct_stateful_ticket";
      uVar11 = 0x1040;
      goto LAB_001021a9;
   }
   LAB_00102160:if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) {
      iVar3 = tls_construct_extensions(param_1, param_2, 0x2000, 0, 0);
      if (iVar3 == 0) goto LAB_00101dc0;
      lVar12 = *(long*)( param_1 + 0x1560 ) + _UNK_00108d78;
      *(long*)( param_1 + 0x1558 ) = *(long*)( param_1 + 0x1558 ) + __LC7;
      *(long*)( param_1 + 0x1560 ) = lVar12;
      if (0 < *(int*)( param_1 + 0xa64 )) {
         *(int*)( param_1 + 0xa64 ) = *(int*)( param_1 + 0xa64 ) + -1;
      }
      ssl_update_cache(param_1, 2);
   }
   uVar10 = 1;
   goto LAB_00101dc2;
}ERR_new();pcVar9 = "tls_construct_new_session_ticket";uVar11 = 0x10b0;LAB_001021a9:ERR_set_debug("ssl/statem/statem_srvr.c", uVar11, pcVar9);ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);}LAB_00101dc0:uVar10 = 0;LAB_00101dc2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar10;}undefined1 *GOST_KX_MESSAGE_it(void) {
   return local_it_39;
}void d2i_GOST_KX_MESSAGE(ASN1_VALUE **param_1, uchar **param_2, long param_3) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)GOST_KX_MESSAGE_it();
   ASN1_item_d2i(param_1, param_2, param_3, it);
   return;
}void i2d_GOST_KX_MESSAGE(ASN1_VALUE *param_1, uchar **param_2) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)GOST_KX_MESSAGE_it();
   ASN1_item_i2d(param_1, param_2, it);
   return;
}void GOST_KX_MESSAGE_new(void) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)GOST_KX_MESSAGE_it();
   ASN1_item_new(it);
   return;
}void GOST_KX_MESSAGE_free(ASN1_VALUE *param_1) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)GOST_KX_MESSAGE_it();
   ASN1_item_free(param_1, it);
   return;
}undefined8 ossl_statem_server_read_transition(SSL *param_1, int param_2) {
   undefined4 uVar1;
   int iVar2;
   BIO *b;
   uint uVar3;
   uVar1 = *(undefined4*)&param_1->field_0xac;
   uVar3 = *(uint*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8;
   if (uVar3 != 0) {
      switch (uVar1) {
         case 0:
         case 1:
         case 0x17:
      if (param_2 == 1) goto LAB_00102c49;
      break;
         case 0x1d:
switchD_00102a40_caseD_1d:
      if (param_2 == 0x10) {
        if (*(int *)&param_1[1].enc_write_ctx != 0) {
          if (param_1->state != 0x300) goto switchD_00102a40_caseD_2;
          if ((~param_1[3].verify_mode & 3U) == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c",0xe4,"ossl_statem_server_read_transition");
            ossl_statem_fatal(param_1,0x28,199,0);
            return 0;
          }
        }
LAB_00102bd9:
        *(undefined4 *)&param_1->field_0xac = 0x20;
        return 1;
      }
      if ((param_2 == 0xb) && (*(int *)&param_1[1].enc_write_ctx != 0)) goto LAB_00102bc0;
      break;
         case 0x1e:
      if (param_2 == 0x10) goto LAB_00102bd9;
      break;
         case 0x20:
switchD_00102a40_caseD_20:
      if (((param_1[3].write_hash[0xe].md_data == (void *)0x0) &&
          (param_1[3].write_hash[0xe].pctx == (EVP_PKEY_CTX *)0x0)) ||
         (*(int *)((long)&param_1->cipher_list_by_id + 4) != 0)) goto switchD_00102a40_caseD_21;
      if (param_2 == 0xf) {
LAB_00102c09:
        *(undefined4 *)&param_1->field_0xac = 0x21;
        return 1;
      }
      break;
         case 0x21:
         case 0x28:
switchD_00102a40_caseD_21:
      if (param_2 == 0x101) {
        *(undefined4 *)&param_1->field_0xac = 0x23;
        return 1;
      }
      goto switchD_00102a40_caseD_2;
         case 0x22:
switchD_00102ad3_caseD_22:
      if (param_2 == 0x14) goto LAB_00102c31;
      break;
         case 0x23:
switchD_00102a40_caseD_23:
      if (*(int *)((long)&param_1[1].tlsext_ocsp_ids + 4) == 0) goto switchD_00102ad3_caseD_22;
      if (param_2 == 0x43) {
        *(undefined4 *)&param_1->field_0xac = 0x22;
        return 1;
      }
      }
      if (( param_2 == 0x101 ) && ( uVar3 != 0 )) {
         param_1->sid_ctx_length = 0;
         for (int i_374 = 0; i_374 < 4; i_374++) {
            param_1->sid_ctx[i_374] = '\0';
         }
         *(undefined4*)&param_1->packet = 3;
         b = SSL_get_rbio(param_1);
         BIO_clear_flags(b, 0xf);
         BIO_set_flags(b, 9);
         return 0;
      }
      goto switchD_00102a40_caseD_2;
   }
   iVar2 = *(int*)&param_1->wbio->method;
   if (( iVar2 < 0x304 ) || ( iVar2 == 0x10000 )) {
      switch (uVar1) {
         case 0:
         case 1:
         case 0x17:
switchD_00102a40_caseD_0:
      if (param_2 == 1) {
LAB_00102c49:
        *(undefined4 *)&param_1->field_0xac = 0x16;
        return 1;
      }
      break;
         case 0x1d:
      goto switchD_00102a40_caseD_1d;
         case 0x1e:
      if (param_2 == 0x10) goto LAB_00102bd9;
      break;
         case 0x20:
      goto switchD_00102a40_caseD_20;
         case 0x21:
         case 0x28:
      goto switchD_00102a40_caseD_21;
         case 0x22:
      goto switchD_00102a40_caseD_22;
         case 0x23:
      goto switchD_00102a40_caseD_23;
      }
      goto switchD_00102a40_caseD_2;
   }
   switch (uVar1) {
      default:
    goto switchD_00102a40_caseD_2;
      case 1:
    if (*(int *)&param_1->write_hash == 0xb) goto switchD_00102a40_caseD_2;
    if ((*(int *)&param_1[4].enc_write_ctx != 4) || (param_2 != 0xb)) {
      if ((param_2 == 0x18) && (((ulong)param_1->kssl_ctx & 0x2000) == 0)) {
        *(undefined4 *)&param_1->field_0xac = 0x30;
        return 1;
      }
      goto switchD_00102a40_caseD_2;
    }
    goto LAB_00102bc0;
      case 0x1e:
      case 0x1f:
    if ((param_1[3].write_hash[0xe].md_data != (void *)0x0) ||
       (param_1[3].write_hash[0xe].pctx != (EVP_PKEY_CTX *)0x0)) {
      if (param_2 != 0xf) goto switchD_00102a40_caseD_2;
      goto LAB_00102c09;
    }
    break;
      case 0x21:
    break;
      case 0x28:
      case 0x35:
    goto switchD_00102b6f_caseD_28;
      case 0x32:
    if (*(int *)&param_1[3].cipher_list_by_id == 1) goto switchD_00102a40_caseD_0;
    if ((*(int *)&param_1[4].init_msg == 2) && (((ulong)param_1->kssl_ctx & 0x2000) == 0)) {
      if (param_2 == 5) {
        *(undefined4 *)&param_1->field_0xac = 0x35;
        return 1;
      }
      goto switchD_00102a40_caseD_2;
    }
switchD_00102b6f_caseD_28:
    if (*(int *)&param_1[1].enc_write_ctx != 0) {
      if (param_2 == 0xb) {
LAB_00102bc0:
        *(undefined4 *)&param_1->field_0xac = 0x1e;
        return 1;
      }
      goto switchD_00102a40_caseD_2;
    }
   }
   switchD_00102a40_caseD_22:if (param_2 == 0x14) {
      LAB_00102c31:*(undefined4*)&param_1->field_0xac = 0x24;
      return 1;
   }
   switchD_00102a40_caseD_2:ERR_new();
   ERR_set_debug("ssl/statem/statem_srvr.c", 0x154, "ossl_statem_server_read_transition");
   ossl_statem_fatal(param_1, 10, 0xf4, 0);
   return 0;
}bool send_certificate_request(long param_1) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   bool bVar4;
   uVar1 = *(uint*)( param_1 + 0x950 );
   bVar4 = false;
   if (( uVar1 & 1 ) != 0) {
      if (( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 != 0x10000 ) ) && ( 0x303 < iVar3 )) {
         return false;
      }
      if (( ( *(int*)( param_1 + 0xbc0 ) < 1 ) || ( bVar4 = false(uVar1 & 4) == 0 ) ) && ( ( uVar2 = *(uint*)( *(long*)( param_1 + 0x300 ) + 0x20 )(uVar2 & 4) == 0 || ( bVar4 = false(uVar1 & 2) != 0 ) ) )) {
         bVar4 = ( uVar2 & 0x50 ) == 0;
      }
   }
   return bVar4;
}char ossl_statem_server_write_transition(long param_1) {
   undefined4 uVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   char *pcVar6;
   undefined8 uVar7;
   uVar1 = *(undefined4*)( param_1 + 0xac );
   if (( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0) {
      switch (uVar1) {
         case 0:
         case 0x17:
      goto switchD_00102e88_caseD_0;
         case 1:
switchD_00102e88_caseD_1:
      if (*(int *)(param_1 + 0xb0) == 0x15) {
        *(undefined8 *)(param_1 + 0xac) = 0x15;
        return '\x01';
      }
      iVar3 = tls_setup_handshake(param_1);
      return (iVar3 != 0) * '\x02';
         default:
switchD_00102e88_caseD_2:
      ERR_new();
      pcVar6 = "ossl_statem_server_write_transition";
      uVar7 = 0x26f;
LAB_00102ec1:
      ERR_set_debug("ssl/statem/statem_srvr.c",uVar7,pcVar6);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return '\0';
         case 0x15:
      break;
         case 0x16:
      if ((*(int *)(*(long *)(param_1 + 0x4f0) + 0x108) == 0) &&
         (uVar5 = SSL_get_options(param_1), (uVar5 & 0x2000) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0x17;
        return '\x01';
      }
switchD_00102e88_caseD_16:
      if (((*(int *)(param_1 + 0xba0) != 0) || (*(long *)(param_1 + 0x260) == 0)) ||
         (*(long *)(param_1 + 0x2e8) == 0)) goto switchD_00103087_caseD_16;
      break;
         case 0x18:
switchD_00102e88_caseD_18:
      if (*(int *)(param_1 + 0x508) != 0) {
LAB_00102faa:
        if (*(int *)(param_1 + 0xa60) == 0) {
switchD_00102e88_caseD_25:
          *(undefined4 *)(param_1 + 0xac) = 0x27;
          return '\x01';
        }
LAB_001030c8:
        *(undefined4 *)(param_1 + 0xac) = 0x25;
        return '\x01';
      }
      lVar4 = *(long *)(param_1 + 0x300);
      if ((*(byte *)(lVar4 + 0x20) & 0x54) == 0) goto LAB_00103023;
      goto LAB_00102f3d;
         case 0x19:
switchD_00102e88_caseD_19:
      if (*(int *)(param_1 + 0xa3c) != 0) {
        *(undefined4 *)(param_1 + 0xac) = 0x26;
        return '\x01';
      }
         case 0x26:
switchD_00102e88_caseD_26:
      lVar4 = *(long *)(param_1 + 0x300);
LAB_00102f3d:
      uVar2 = *(uint *)(lVar4 + 0x1c);
      if (((uVar2 & 6) != 0) ||
         ((((uVar2 & 0x48) != 0 && (*(long *)(*(long *)(param_1 + 0x880) + 0xa8) != 0)) ||
          ((uVar2 & 0x1a0) != 0)))) {
        *(undefined4 *)(param_1 + 0xac) = 0x1b;
        return '\x01';
      }
         case 0x1b:
switchD_00102e88_caseD_1b:
      iVar3 = send_certificate_request(param_1);
      if (iVar3 != 0) {
LAB_001030f8:
        *(undefined4 *)(param_1 + 0xac) = 0x1c;
        return '\x01';
      }
switchD_00102e88_caseD_1c:
      *(undefined4 *)(param_1 + 0xac) = 0x1d;
      return '\x01';
         case 0x1c:
      goto switchD_00102e88_caseD_1c;
         case 0x1d:
switchD_00102e88_caseD_1d:
      uVar7 = ossl_time_now();
      *(undefined8 *)(param_1 + 0x88) = uVar7;
switchD_00102e88_caseD_0:
      return '\x02';
         case 0x24:
switchD_00102e88_caseD_24:
      uVar7 = ossl_time_now();
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      if (*(int *)(param_1 + 0x508) == 0) goto LAB_00102faa;
      break;
         case 0x25:
      goto switchD_00102e88_caseD_25;
         case 0x27:
      goto switchD_00102e88_caseD_27;
         case 0x28:
switchD_00102e88_caseD_28:
      if (*(int *)(param_1 + 0x508) != 0) {
        return '\x02';
      }
      }
      goto switchD_00102e88_caseD_15;
   }
   iVar3 = **(int**)( param_1 + 0x18 );
   if (( iVar3 == 0x10000 ) || ( iVar3 < 0x304 )) {
      switch (uVar1) {
         case 0:
         case 0x17:
      goto switchD_00102e88_caseD_0;
         case 1:
      goto switchD_00102e88_caseD_1;
         default:
      goto switchD_00102e88_caseD_2;
         case 0x15:
      goto switchD_00102e88_caseD_15;
         case 0x16:
      goto switchD_00102e88_caseD_16;
         case 0x18:
      goto switchD_00102e88_caseD_18;
         case 0x19:
      goto switchD_00102e88_caseD_19;
         case 0x1b:
      goto switchD_00102e88_caseD_1b;
         case 0x1c:
      goto switchD_00102e88_caseD_1c;
         case 0x1d:
      goto switchD_00102e88_caseD_1d;
         case 0x24:
      goto switchD_00102e88_caseD_24;
         case 0x25:
      goto switchD_00102e88_caseD_25;
         case 0x26:
      goto switchD_00102e88_caseD_26;
         case 0x27:
      goto switchD_00102e88_caseD_27;
         case 0x28:
      goto switchD_00102e88_caseD_28;
      }
   }
   switch (uVar1) {
      default:
    ERR_new();
    pcVar6 = "ossl_statem_server13_write_transition";
    uVar7 = 0x1e1;
    goto LAB_00102ec1;
      case 1:
    if (*(int *)(param_1 + 0xba4) != -1) {
      *(undefined4 *)(param_1 + 0xac) = 0x2e;
      return '\x01';
    }
    if (*(int *)(param_1 + 0xba8) != 3) {
      if (*(int *)(param_1 + 0xa64) < 1) {
        return '\x02';
      }
      goto LAB_001030c8;
    }
    goto LAB_001030f8;
      case 0x16:
switchD_00103087_caseD_16:
    *(undefined4 *)(param_1 + 0xac) = 0x18;
    break;
      case 0x18:
    iVar3 = *(int *)(param_1 + 0x8d0);
    if ((*(byte *)(param_1 + 0x9b2) & 0x10) == 0) goto joined_r0x001031ff;
    if (iVar3 != 2) goto switchD_00102e88_caseD_25;
    goto LAB_001031ce;
      case 0x19:
      case 0x1a:
    *(undefined4 *)(param_1 + 0xac) = 0x2c;
    break;
      case 0x1c:
    if (*(int *)(param_1 + 0xba8) == 3) {
      *(undefined4 *)(param_1 + 0xba8) = 4;
      *(undefined4 *)(param_1 + 0xac) = 1;
      return '\x01';
    }
    goto LAB_00103023;
      case 0x24:
    uVar7 = ossl_time_now();
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    if (*(int *)(param_1 + 0xba8) == 4) {
      *(undefined4 *)(param_1 + 0xba8) = 2;
    }
    else if (*(int *)(param_1 + 0xa60) == 0) goto switchD_00102e88_caseD_15;
    if (*(ulong *)(param_1 + 0x1558) < *(ulong *)(param_1 + 0x1550)) goto LAB_001030c8;
      case 0x2e:
      case 0x30:
switchD_00102e88_caseD_15:
    *(undefined4 *)(param_1 + 0xac) = 1;
    break;
      case 0x25:
    if (((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) &&
       (0 < *(int *)(param_1 + 0xa64))) {
      return '\x01';
    }
    if ((*(int *)(param_1 + 0x508) == 0) &&
       (*(ulong *)(param_1 + 0x1558) < *(ulong *)(param_1 + 0x1550))) {
      return '\x01';
    }
    goto switchD_00102e88_caseD_15;
      case 0x27:
    iVar3 = *(int *)(param_1 + 0x8d0);
joined_r0x001031ff:
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0xac) = 0x32;
      return '\x01';
    }
LAB_001031ce:
    *(undefined4 *)(param_1 + 0xac) = 0x29;
    break;
      case 0x28:
    *(undefined4 *)(param_1 + 0xac) = 0x32;
    uVar7 = ossl_time_now();
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    break;
      case 0x29:
    if (*(int *)(param_1 + 0x508) != 0) goto switchD_00102e88_caseD_27;
    iVar3 = send_certificate_request();
    if (iVar3 != 0) goto LAB_001030f8;
LAB_00103023:
    *(undefined4 *)(param_1 + 0xac) = 0x19;
    break;
      case 0x2c:
switchD_00102e88_caseD_27:
    *(undefined4 *)(param_1 + 0xac) = 0x28;
    break;
      case 0x32:
    goto switchD_00102e88_caseD_0;
   }
   return '\x01';
}undefined8 ossl_statem_server_pre_work(long param_1, undefined8 param_2) {
   ulong uVar1;
   undefined8 *puVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   switch (*(undefined4*)( param_1 + 0xac )) {
      case 0:
      case 2:
      for (int i_377 = 0; i_377 < 9; i_377++) {
         case 3:
         case 4:
      }
      case 0x16:
      for (int i_376 = 0; i_376 < 6; i_376++) {
         case 0x19:
         case 0x1a:
      }
      case 0x26:
      for (int i_375 = 0; i_375 < 9; i_375++) {
         case 0x28:
      }
      case 0x31:
    break;
      case 1:
switchD_001032e9_caseD_1:
    uVar5 = tls_finish_handshake(param_1,param_2,1,1);
    return uVar5;
      case 0x15:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      dtls1_clear_sent_buffer();
    }
    break;
      case 0x17:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      dtls1_clear_sent_buffer();
      *(undefined4 *)(param_1 + 200) = 0;
    }
    break;
      case 0x18:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      *(undefined4 *)(param_1 + 200) = 1;
    }
    break;
      case 0x25:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
      iVar4 = **(int **)(param_1 + 0x18);
      if (iVar4 == 0x10000) {
        return 2;
      }
      if (iVar4 < 0x304) {
        return 2;
      }
      if (*(long *)(param_1 + 0x1558) != 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0xa64) != 0) {
        return 2;
      }
      uVar5 = tls_finish_handshake(param_1,param_2,0,0);
      return uVar5;
    }
    goto LAB_001033f0;
      case 0x27:
    puVar2 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
    if ((((*(byte *)(puVar2 + 10) & 8) == 0) &&
        (iVar4 = **(int **)(param_1 + 0x18), iVar4 != 0x10000)) && (0x303 < iVar4)) {
      return 2;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8);
    if (lVar3 == 0) {
      *(long *)(*(long *)(param_1 + 0x900) + 0x2f8) = *(long *)(param_1 + 0x300);
    }
    else if (lVar3 != *(long *)(param_1 + 0x300)) {
      ERR_new();
      uVar5 = 0x334;
      goto LAB_001034d0;
    }
    iVar4 = (*(code *)*puVar2)(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
LAB_001033f0:
    *(undefined4 *)(param_1 + 200) = 0;
    break;
      case 0x32:
    uVar1 = *(ulong *)(param_1 + 0x160);
    if (*(int *)(param_1 + 0xf0) == 9) {
      if (((uVar1 & 0x2000) == 0) || (*(int *)(param_1 + 0xb18) != 2))
      goto switchD_001032e9_caseD_1;
    }
    else {
      if ((uVar1 & 0x800) == 0) {
        return 2;
      }
      if ((((uVar1 & 0x2000) == 0) || (*(int *)(param_1 + 0xb18) != 2)) ||
         (*(int *)(param_1 + 0xf0) == 0xc)) goto switchD_001032e9_caseD_1;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0xc;
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1);
    if (iVar4 != 0) {
      return 3;
    }
    ERR_new();
    uVar5 = 0x354;
LAB_001034d0:
    ERR_set_debug("ssl/statem/statem_srvr.c",uVar5,"ossl_statem_server_pre_work");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    return 0;
      default:
    return 2;
   }
   return 2;
}char ossl_statem_server_post_work(SSL *param_1) {
   undefined4 uVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   int *piVar6;
   undefined8 *puVar7;
   BIO *pBVar8;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined4*)&param_1->field_0xac;
   param_1->sid_ctx_length = 0;
   for (int i_378 = 0; i_378 < 4; i_378++) {
      param_1->sid_ctx[i_378] = '\0';
   }
   switch (uVar1) {
      case 0x15:
    iVar5 = statem_flush();
    if (iVar5 == 1) {
      iVar5 = ssl3_init_finished_mac(param_1);
      cVar4 = (iVar5 != 0) * '\x02';
      goto LAB_001035f5;
    }
    break;
      default:
    goto switchD_001035b4_caseD_16;
      case 0x17:
    iVar5 = statem_flush();
    if (iVar5 == 1) {
      if ((param_1->state != 0x100) && (iVar5 = ssl3_init_finished_mac(param_1), iVar5 == 0)) {
LAB_001038f0:
        cVar4 = '\0';
        goto LAB_001035f5;
      }
      *(undefined4 *)&param_1[3].max_cert_list = 1;
      goto switchD_001035b4_caseD_16;
    }
    break;
      case 0x18:
    pBVar8 = param_1->wbio;
    puVar7 = *(undefined8 **)&pBVar8[1].ex_data.dummy;
    if (((*(byte *)(puVar7 + 10) & 8) == 0) && (iVar5 = *(int *)&pBVar8->method, iVar5 != 0x10000))
    {
      if (iVar5 < 0x304) {
        if ((iVar5 != 0x10000) && (0x303 < iVar5)) {
          iVar5 = *(int *)&param_1[3].cipher_list_by_id;
          if (((ulong)param_1[3].client_CA & 0x100000) == 0) {
            if (iVar5 != 1) goto LAB_0010385a;
            goto LAB_00103968;
          }
LAB_00103797:
          if (iVar5 == 2) goto LAB_001037a0;
        }
      }
      else {
        iVar5 = *(int *)&param_1[3].cipher_list_by_id;
        if (iVar5 != 1) {
          if (((ulong)param_1[3].client_CA & 0x100000) != 0) goto LAB_00103797;
          goto LAB_001037ba;
        }
        if (((ulong)param_1[3].client_CA & 0x100000) == 0) goto switchD_001035b4_caseD_1d;
      }
    }
    goto switchD_001035b4_caseD_16;
      case 0x1c:
    if (*(int *)&param_1[4].enc_write_ctx == 3) goto switchD_001035b4_caseD_1d;
LAB_001035c9:
    if (((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
         (iVar5 = *(int *)&param_1->wbio->method, iVar5 == 0x10000)) || (iVar5 < 0x304)) ||
       (((ulong)param_1[3].client_CA & 0x100000000) != 0)) {
      *(undefined4 *)((long)&param_1[4].s2 + 4) = 0;
    }
    goto switchD_001035b4_caseD_16;
      case 0x1d:
switchD_001035b4_caseD_1d:
    iVar5 = statem_flush(param_1);
    if (iVar5 == 1) goto switchD_001035b4_caseD_16;
    break;
      case 0x25:
    piVar6 = __errno_location();
    *piVar6 = 0;
    if ((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
        (iVar5 = *(int *)&param_1->wbio->method, iVar5 != 0x10000)) &&
       ((0x303 < iVar5 && (iVar5 = statem_flush(param_1), iVar5 != 1)))) {
      iVar5 = SSL_get_error(param_1,0);
      if ((iVar5 != 5) || ((*piVar6 != 0x20 && (*piVar6 != 0x68)))) break;
      *(undefined4 *)&param_1->packet = 1;
    }
    goto switchD_001035b4_caseD_16;
      case 0x27:
    if (*(int *)&param_1[3].cipher_list_by_id != 1) {
      pBVar8 = param_1->wbio;
      puVar7 = *(undefined8 **)&pBVar8[1].ex_data.dummy;
      if ((*(byte *)(puVar7 + 10) & 8) == 0) {
LAB_001037a0:
        if ((*(int *)&pBVar8->method != 0x10000) && (0x303 < *(int *)&pBVar8->method)) {
LAB_001037ba:
          iVar5 = (*(code *)*puVar7)(param_1);
          if (((iVar5 == 0) ||
              (iVar5 = (**(code **)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x10))(param_1,0xa2),
              iVar5 == 0)) ||
             ((*(int *)&param_1[4].init_msg != 2 &&
              (iVar5 = (**(code **)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x10))(param_1,0xa1),
              iVar5 == 0)))) goto LAB_001038f0;
          pcVar2 = *(code **)(param_1[4].options + 0x68);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(param_1[4].max_cert_list,1);
          }
          goto switchD_001035b4_caseD_16;
        }
      }
LAB_0010385a:
      iVar5 = (*(code *)puVar7[2])(param_1,0x22);
      cVar4 = (iVar5 != 0) * '\x02';
      goto LAB_001035f5;
    }
LAB_00103968:
    iVar5 = statem_flush(param_1);
    if (iVar5 != 0) goto switchD_001035b4_caseD_16;
    break;
      case 0x28:
    iVar5 = statem_flush();
    if (iVar5 == 1) {
      lVar3 = *(long *)&param_1->wbio[1].ex_data.dummy;
      if (((((*(byte *)(lVar3 + 0x50) & 8) == 0) &&
           (iVar5 = *(int *)&param_1->wbio->method, iVar5 != 0x10000)) && (0x303 < iVar5)) &&
         ((iVar5 = (**(code **)(lVar3 + 8))
                             (param_1,(undefined1 *)((long)&param_1[2].msg_callback + 4),
                              (undefined1 *)((long)&param_1[2].init_msg + 4),0,auStack_28),
          iVar5 == 0 ||
          (iVar5 = (**(code **)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x10))(param_1,0x122),
          iVar5 == 0)))) goto LAB_001038f0;
      goto switchD_001035b4_caseD_16;
    }
    break;
      case 0x29:
    if ((*(int *)&param_1[1].tls_session_ticket_ext_cb == 0) &&
       (iVar5 = send_certificate_request(), iVar5 == 0)) goto LAB_001035c9;
switchD_001035b4_caseD_16:
    cVar4 = '\x02';
    goto LAB_001035f5;
      case 0x2e:
    iVar5 = statem_flush();
    if (iVar5 == 1) {
      iVar5 = tls13_update_key(param_1,1);
      cVar4 = (iVar5 != 0) * '\x02';
      goto LAB_001035f5;
    }
   }
   cVar4 = '\x04';
   LAB_001035f5:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_statem_server_construct_message(long param_1, undefined8 *param_2, undefined4 *param_3) {
   undefined *puVar1;
   switch (*(undefined4*)( param_1 + 0xac )) {
      case 0x15:
    *param_2 = 0;
    *param_3 = 0;
    break;
      default:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_srvr.c",0x45e,"ossl_statem_server_construct_message");
    ossl_statem_fatal(param_1,0x50,0xec,0);
    return 0;
      case 0x17:
    *param_2 = dtls_construct_hello_verify_request;
    *param_3 = 3;
    break;
      case 0x18:
    *param_2 = tls_construct_server_hello;
    *param_3 = 2;
    break;
      case 0x19:
    *param_2 = tls_construct_server_certificate;
    *param_3 = 0xb;
    break;
      case 0x1b:
    *param_2 = tls_construct_server_key_exchange;
    *param_3 = 0xc;
    break;
      case 0x1c:
    *param_2 = tls_construct_certificate_request;
    *param_3 = 0xd;
    break;
      case 0x1d:
    *param_2 = tls_construct_server_done;
    *param_3 = 0xe;
    break;
      case 0x25:
    *param_2 = tls_construct_new_session_ticket;
    *param_3 = 4;
    break;
      case 0x26:
    *param_2 = tls_construct_cert_status;
    *param_3 = 0x16;
    break;
      case 0x27:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      puVar1 = &tls_construct_change_cipher_spec;
    }
    else {
      puVar1 = &dtls_construct_change_cipher_spec;
    }
    *param_2 = puVar1;
    *param_3 = 0x101;
    break;
      case 0x28:
    *param_2 = &tls_construct_finished;
    *param_3 = 0x14;
    break;
      case 0x29:
    *param_2 = 0x100000;
    *param_3 = 8;
    break;
      case 0x2c:
    *param_2 = &tls_construct_cert_verify;
    *param_3 = 0xf;
    break;
      case 0x2e:
    *param_2 = &tls_construct_key_update;
    *param_3 = 0x18;
    break;
      case 0x32:
    *param_2 = 0;
    *param_3 = 0xffffffff;
   }
   return 1;
}undefined8 ossl_statem_server_max_message_size(long param_1) {
   switch (*(undefined4*)( param_1 + 0xac )) {
      case 0x16:
    return 0x20144;
      default:
    return 0;
      case 0x1e:
      case 0x1f:
    return *(undefined8 *)(param_1 + 0x9c8);
      case 0x20:
    return 0x800;
      case 0x21:
    return 0x10003;
      case 0x22:
    return 0x202;
      case 0x23:
      case 0x30:
    return 1;
      case 0x24:
    return 0x40;
   }
}ulong dtls_raw_hello_verify_request(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_put_bytes__(param_1, 0xfeff, 2);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_sub_memcpy__(param_1, param_2, param_3, 1);
      uVar2 = ( ulong )(iVar1 != 0);
   }
   return uVar2;
}undefined8 dtls_construct_hello_verify_request(long param_1, undefined8 param_2) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0xd0 );
   if (pcVar1 != (code*)0x0) {
      iVar2 = ( *pcVar1 )(*(undefined8*)( param_1 + 0x40 ), *(undefined8*)( param_1 + 0x4f0 ), &local_24);
      if (( iVar2 != 0 ) && ( local_24 < 0x100 )) {
         *(ulong*)( *(long*)( param_1 + 0x4f0 ) + 0x100 ) = (ulong)local_24;
         iVar2 = dtls_raw_hello_verify_request(param_2);
         uVar3 = 1;
         if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0x585, "dtls_construct_hello_verify_request");
            ossl_statem_fatal(param_1, 0xffffffff, 0xc0103, 0);
            uVar3 = 0;
         }
         goto LAB_00103d31;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/statem_srvr.c", 0x57e, "dtls_construct_hello_verify_request");
   ossl_statem_fatal(param_1, 0xffffffff, 400, 0);
   uVar3 = 0;
   LAB_00103d31:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_process_client_hello(long param_1, long *param_2) {
   byte bVar1;
   char cVar2;
   ushort uVar3;
   ushort uVar4;
   undefined8 uVar5;
   int iVar6;
   uint uVar7;
   int *ptr;
   ushort uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   byte *pbVar12;
   long lVar13;
   ushort uVar14;
   uint uVar15;
   undefined8 uVar16;
   byte *pbVar17;
   undefined8 *puVar18;
   ushort *puVar19;
   ulong uVar20;
   long in_FS_OFFSET;
   byte bVar21;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   bVar21 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(int*)( param_1 + 0xba0 ) == 0 ) && ( *(long*)( param_1 + 0x260 ) != 0 ) ) && ( *(long*)( param_1 + 0x2e8 ) != 0 )) {
      if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 ) || ( iVar6 = **(int**)( param_1 + 0x18 ) ),iVar6 < 0x304 )) {
         if (( ( ( uint ) * (ulong*)( param_1 + 0x9b0 ) & 0x40000100 ) == 0x100 ) && ( ( *(int*)( param_1 + 0x4b0 ) != 0 || ( ( *(ulong*)( param_1 + 0x9b0 ) & 0x40000 ) != 0 ) ) )) {
            *(undefined4*)( param_1 + 0xba0 ) = 1;
            *(undefined4*)( param_1 + 0x7c ) = 1;
            goto LAB_00103dce;
         }
         ssl3_send_alert(param_1, 1, 100);
         LAB_001040da:uVar16 = 1;
         goto LAB_00104065;
      }
      ERR_new();
      uVar16 = 0x5da;
      LAB_001041d8:ptr = (int*)0x0;
      ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_process_client_hello");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      LAB_00103dce:ptr = (int*)CRYPTO_zalloc(0x290, "ssl/statem/statem_srvr.c", 0x5e8);
      if (ptr == (int*)0x0) {
         ERR_new();
         uVar16 = 0x5ea;
         goto LAB_001041d8;
      }
      iVar6 = RECORD_LAYER_is_sslv2_record(param_1 + 0xc58);
      *ptr = iVar6;
      if (iVar6 == 0) {
         uVar11 = param_2[1];
         LAB_00103e0f:if (uVar11 < 2) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0x619, "tls_process_client_hello");
            ossl_statem_fatal(param_1, 0x32, 0xa0, 0);
         } else {
            pbVar17 = (byte*)*param_2;
            bVar1 = *pbVar17;
            ptr[1] = (uint)bVar1 << 8;
            ptr[1] = (uint)CONCAT11(bVar1, pbVar17[1]);
            uVar10 = uVar11 - 2;
            *param_2 = (long)( pbVar17 + 2 );
            param_2[1] = uVar10;
            if (iVar6 == 0) {
               if (uVar10 < 0x20) {
                  LAB_00104188:ERR_new();
                  uVar16 = 0x657;
               } else {
                  uVar16 = *(undefined8*)( pbVar17 + 10 );
                  *(undefined8*)( ptr + 2 ) = *(undefined8*)( pbVar17 + 2 );
                  *(undefined8*)( ptr + 4 ) = uVar16;
                  uVar16 = *(undefined8*)( pbVar17 + 0x12 );
                  uVar5 = *(undefined8*)( pbVar17 + 0x1a );
                  *param_2 = (long)( pbVar17 + 0x22 );
                  param_2[1] = uVar11 - 0x22;
                  *(undefined8*)( ptr + 6 ) = uVar16;
                  *(undefined8*)( ptr + 8 ) = uVar5;
                  if (uVar11 - 0x22 == 0) goto LAB_00104188;
                  bVar1 = pbVar17[0x22];
                  uVar10 = (ulong)bVar1;
                  if (uVar11 - 0x23 < uVar10) goto LAB_00104188;
                  uVar11 = ( uVar11 - 0x23 ) - uVar10;
                  puVar19 = (ushort*)( pbVar17 + uVar10 + 0x23 );
                  param_2[1] = uVar11;
                  *param_2 = (long)puVar19;
                  if (0x20 < uVar10) {
                     ptr[10] = 0;
                     ptr[0xb] = 0;
                     goto LAB_00104188;
                  }
                  *(ulong*)( ptr + 10 ) = uVar10;
                  pbVar12 = (byte*)( ptr + 0xc );
                  if (bVar1 < 8) {
                     if (( bVar1 & 4 ) == 0) {
                        if (( bVar1 != 0 ) && ( *pbVar12 = pbVar17[0x23](bVar1 & 2) != 0 )) {
                           *(undefined2*)( (long)ptr + uVar10 + 0x2e ) = *(undefined2*)( pbVar17 + uVar10 + 0x21 );
                        }
                     } else {
                        *(undefined4*)pbVar12 = *(undefined4*)( pbVar17 + 0x23 );
                        *(undefined4*)( (long)ptr + uVar10 + 0x2c ) = *(undefined4*)( pbVar17 + uVar10 + 0x1f );
                     }
                  } else {
                     *(undefined8*)( ptr + 0xc ) = *(undefined8*)( pbVar17 + 0x23 );
                     *(undefined8*)( (long)ptr + uVar10 + 0x28 ) = *(undefined8*)( pbVar17 + uVar10 + 0x1b );
                     lVar13 = (long)pbVar12 - (long)( ( ulong )(ptr + 0xe) & 0xfffffffffffffff8 );
                     pbVar17 = pbVar17 + ( 0x23 - lVar13 );
                     puVar18 = (undefined8*)( ( ulong )(ptr + 0xe) & 0xfffffffffffffff8 );
                     for (uVar10 = ( ulong )((uint)bVar1 + (int)lVar13 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
                        *puVar18 = *(undefined8*)pbVar17;
                        pbVar17 = pbVar17 + ( (ulong)bVar21 * -2 + 1 ) * 8;
                        puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
                     }
                  }
                  if (( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 8 ) == 0) {
                     LAB_00104366:if (1 < uVar11) {
                        uVar10 = ( ulong )(ushort)(*puVar19 << 8 | *puVar19 >> 8);
                        if (uVar10 <= uVar11 - 2) {
                           lVar13 = ( uVar11 - 2 ) - uVar10;
                           *(ulong*)( ptr + 0x58 ) = uVar10;
                           pbVar17 = (byte*)( (long)( puVar19 + 1 ) + uVar10 );
                           param_2[1] = lVar13;
                           *param_2 = (long)pbVar17;
                           *(ushort**)( ptr + 0x56 ) = puVar19 + 1;
                           if (lVar13 != 0) {
                              uVar11 = ( ulong ) * pbVar17;
                              if (uVar11 <= lVar13 - 1U) {
                                 pbVar17 = pbVar17 + 1;
                                 lVar13 = ( lVar13 - 1U ) - uVar11;
                                 puVar19 = (ushort*)( pbVar17 + uVar11 );
                                 param_2[1] = lVar13;
                                 *param_2 = (long)puVar19;
                                 if (lVar13 == 0) {
                                    for (int i_379 = 0; i_379 < 4; i_379++) {
                                       ptr[( i_379 + 156 )] = 0;
                                    }
                                    LAB_00104400:pbVar12 = (byte*)( ptr + 0x5c );
                                    *(ulong*)( ptr + 0x5a ) = uVar11;
                                    uVar15 = (uint)uVar11;
                                    if (uVar15 < 8) {
                                       if (( uVar11 & 4 ) == 0) {
                                          if (( uVar15 != 0 ) && ( *pbVar12 = *pbVar17(uVar11 & 2) != 0 )) {
                                             *(undefined2*)( (long)ptr + uVar11 + 0x16e ) = *(undefined2*)( pbVar17 + ( uVar11 - 2 ) );
                                          }
                                       } else {
                                          *(undefined4*)pbVar12 = *(undefined4*)pbVar17;
                                          *(undefined4*)( (long)ptr + uVar11 + 0x16c ) = *(undefined4*)( pbVar17 + ( uVar11 - 4 ) );
                                       }
                                    } else {
                                       *(undefined8*)pbVar12 = *(undefined8*)pbVar17;
                                       *(undefined8*)( (long)ptr + uVar11 + 0x168 ) = *(undefined8*)( pbVar17 + ( uVar11 - 8 ) );
                                       lVar13 = (long)pbVar12 - (long)( ( ulong )(ptr + 0x5e) & 0xfffffffffffffff8 );
                                       pbVar17 = pbVar17 + -lVar13;
                                       puVar18 = (undefined8*)( ( ulong )(ptr + 0x5e) & 0xfffffffffffffff8 );
                                       for (uVar11 = ( ulong )(uVar15 + (int)lVar13 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
                                          *puVar18 = *(undefined8*)pbVar17;
                                          pbVar17 = pbVar17 + ( (ulong)bVar21 * -2 + 1 ) * 8;
                                          puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
                                       }
                                    }
                                    local_48 = *(undefined8*)( ptr + 0x9c );
                                    uStack_40 = *(undefined8*)( ptr + 0x9e );
                                    iVar6 = tls_collect_extensions(param_1, &local_48, 0x80, ptr + 0xa2, ptr + 0xa0, 1);
                                    if (iVar6 != 0) {
                                       *(int**)( param_1 + 0xb58 ) = ptr;
                                       uVar16 = 2;
                                       goto LAB_00104065;
                                    }
                                    goto LAB_0010403f;
                                 }
                                 if (lVar13 != 1) {
                                    uVar10 = ( ulong )(ushort)(*puVar19 << 8 | *puVar19 >> 8);
                                    if (uVar10 <= lVar13 - 2U) {
                                       *(ulong*)( ptr + 0x9e ) = uVar10;
                                       lVar13 = ( lVar13 - 2U ) - uVar10;
                                       *(ushort**)( ptr + 0x9c ) = puVar19 + 1;
                                       *param_2 = (long)( (long)( puVar19 + 1 ) + uVar10 );
                                       param_2[1] = lVar13;
                                       if (lVar13 == 0) goto LAB_00104400;
                                    }
                                 }
                                 ERR_new();
                                 uVar16 = 0x683;
                                 goto LAB_00104199;
                              }
                           }
                           ERR_new();
                           uVar16 = 0x679;
                           goto LAB_00104199;
                        }
                     }
                     ERR_new();
                     uVar16 = 0x674;
                  } else {
                     if (uVar11 != 0) {
                        bVar1 = ( byte ) * puVar19;
                        uVar10 = (ulong)bVar1;
                        if (uVar10 <= uVar11 - 1) {
                           pbVar17 = (byte*)( (long)puVar19 + 1 );
                           *(ulong*)( ptr + 0x14 ) = uVar10;
                           param_2[1] = ( uVar11 - 1 ) - uVar10;
                           pbVar12 = (byte*)( ptr + 0x16 );
                           *param_2 = (long)( pbVar17 + uVar10 );
                           if (bVar1 < 8) {
                              if (( bVar1 & 4 ) == 0) {
                                 if (( bVar1 != 0 ) && ( *pbVar12 = *pbVar17(bVar1 & 2) != 0 )) {
                                    *(undefined2*)( (long)ptr + uVar10 + 0x56 ) = *(undefined2*)( (long)puVar19 + ( uVar10 - 1 ) );
                                 }
                              } else {
                                 *(undefined4*)pbVar12 = *(undefined4*)pbVar17;
                                 *(undefined4*)( (long)ptr + uVar10 + 0x54 ) = *(undefined4*)( (long)puVar19 + ( uVar10 - 3 ) );
                              }
                           } else {
                              *(undefined8*)( ptr + 0x16 ) = *(undefined8*)( (long)puVar19 + 1 );
                              *(undefined8*)( (long)ptr + uVar10 + 0x50 ) = *(undefined8*)( (long)puVar19 + ( uVar10 - 7 ) );
                              lVar13 = (long)pbVar12 - (long)( ( ulong )(ptr + 0x18) & 0xfffffffffffffff8 );
                              pbVar17 = pbVar17 + -lVar13;
                              puVar18 = (undefined8*)( ( ulong )(ptr + 0x18) & 0xfffffffffffffff8 );
                              for (uVar11 = ( ulong )((uint)bVar1 + (int)lVar13 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
                                 *puVar18 = *(undefined8*)pbVar17;
                                 pbVar17 = pbVar17 + ( (ulong)bVar21 * -2 + 1 ) * 8;
                                 puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
                              }
                           }
                           uVar11 = SSL_get_options(param_1);
                           if (( ( uVar11 & 0x2000 ) != 0 ) && ( *(long*)( ptr + 0x14 ) == 0 )) {
                              CRYPTO_free(ptr);
                              goto LAB_001040da;
                           }
                           puVar19 = (ushort*)*param_2;
                           uVar11 = param_2[1];
                           goto LAB_00104366;
                        }
                     }
                     ERR_new();
                     uVar16 = 0x65d;
                  }
               }
               LAB_00104199:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_process_client_hello");
               ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
            } else {
               if (uVar10 < 2) {
                  LAB_00104090:ERR_new();
                  uVar16 = 0x62a;
               } else {
                  uVar14 = *(ushort*)( pbVar17 + 2 );
                  *param_2 = (long)( pbVar17 + 4 );
                  param_2[1] = uVar11 - 4;
                  if (uVar11 - 4 < 2) goto LAB_00104090;
                  uVar8 = *(ushort*)( pbVar17 + 4 );
                  *param_2 = (long)( pbVar17 + 6 );
                  param_2[1] = uVar11 - 6;
                  if (uVar11 - 6 < 2) goto LAB_00104090;
                  uVar3 = *(ushort*)( pbVar17 + 6 );
                  uVar11 = uVar11 - 8;
                  pbVar17 = pbVar17 + 8;
                  uVar4 = uVar8 >> 8;
                  uVar8 = uVar8 << 8 | uVar4;
                  *param_2 = (long)pbVar17;
                  param_2[1] = uVar11;
                  if (0x20 < uVar8) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0x62f, "tls_process_client_hello");
                     ossl_statem_fatal(param_1, 0x2f, 0x9f, 0);
                     goto LAB_0010403f;
                  }
                  uVar10 = ( ulong )(ushort)(uVar14 << 8 | uVar14 >> 8);
                  if (uVar10 <= uVar11) {
                     *(byte**)( ptr + 0x56 ) = pbVar17;
                     uVar11 = uVar11 - uVar10;
                     pbVar17 = pbVar17 + uVar10;
                     uVar9 = (ulong)uVar8;
                     *(ulong*)( ptr + 0x58 ) = uVar10;
                     *param_2 = (long)pbVar17;
                     param_2[1] = uVar11;
                     if (uVar9 <= uVar11) {
                        uVar14 = uVar3 << 8 | uVar3 >> 8;
                        uVar10 = (ulong)uVar14;
                        pbVar12 = (byte*)( ptr + 0xc );
                        if (uVar8 < 8) {
                           if (( uVar4 & 4 ) == 0) {
                              if (( uVar8 != 0 ) && ( *pbVar12 = *pbVar17(uVar4 & 2) != 0 )) {
                                 *(undefined2*)( (long)ptr + uVar9 + 0x2e ) = *(undefined2*)( pbVar17 + ( uVar9 - 2 ) );
                              }
                           } else {
                              *(undefined4*)pbVar12 = *(undefined4*)pbVar17;
                              *(undefined4*)( (long)ptr + uVar9 + 0x2c ) = *(undefined4*)( pbVar17 + ( uVar9 - 4 ) );
                           }
                        } else {
                           *(undefined8*)( ptr + 0xc ) = *(undefined8*)pbVar17;
                           *(undefined8*)( (long)ptr + uVar9 + 0x28 ) = *(undefined8*)( pbVar17 + ( uVar9 - 8 ) );
                           lVar13 = (long)pbVar12 - ( ( ulong )(ptr + 0xe) & 0xfffffffffffffff8 );
                           uVar15 = (int)lVar13 + (uint)uVar8 & 0xfffffff8;
                           if (7 < uVar15) {
                              uVar7 = 0;
                              do {
                                 uVar20 = (ulong)uVar7;
                                 uVar7 = uVar7 + 8;
                                 *(undefined8*)( ( ( ulong )(ptr + 0xe) & 0xfffffffffffffff8 ) + uVar20 ) = *(undefined8*)( pbVar17 + ( uVar20 - lVar13 ) );
                              } while ( uVar7 < uVar15 );
                           }
                        }
                        pbVar17 = pbVar17 + uVar9;
                        uVar11 = uVar11 - uVar9;
                        *param_2 = (long)pbVar17;
                        param_2[1] = uVar11;
                        if (uVar10 <= uVar11) {
                           *param_2 = (long)( pbVar17 + uVar10 );
                           param_2[1] = uVar11 - uVar10;
                           if (uVar11 - uVar10 == 0) {
                              *(ulong*)( ptr + 10 ) = uVar9;
                              uVar15 = (uint)uVar14;
                              if (0x20 < uVar14) {
                                 uVar15 = 0x20;
                              }
                              uVar11 = (ulong)uVar15;
                              *(undefined1(*) [16])( ptr + 2 ) = (undefined1[16])0x0;
                              *(undefined1(*) [16])( ptr + 6 ) = (undefined1[16])0x0;
                              pbVar12 = (byte*)( (long)ptr + -uVar11 + 0x28 );
                              if (uVar10 < uVar11) {
                                 ERR_new();
                                 uVar16 = 0x64b;
                                 goto LAB_00103f63;
                              }
                              if (uVar15 < 8) {
                                 if (( uVar15 & 4 ) == 0) {
                                    if (( uVar15 != 0 ) && ( *pbVar12 = *pbVar17(uVar15 & 2) != 0 )) {
                                       *(undefined2*)( (long)ptr + 0x26 ) = *(undefined2*)( pbVar17 + ( uVar11 - 2 ) );
                                    }
                                 } else {
                                    *(undefined4*)pbVar12 = *(undefined4*)pbVar17;
                                    ptr[9] = *(int*)( pbVar17 + ( uVar11 - 4 ) );
                                 }
                              } else {
                                 *(undefined8*)pbVar12 = *(undefined8*)pbVar17;
                                 *(undefined8*)( ptr + 8 ) = *(undefined8*)( pbVar17 + ( uVar11 - 8 ) );
                                 uVar11 = (long)ptr + -uVar11 + 0x30 & 0xfffffffffffffff8;
                                 lVar13 = (long)pbVar12 - uVar11;
                                 uVar15 = uVar15 + (int)lVar13 & 0xfffffff8;
                                 if (7 < uVar15) {
                                    uVar7 = 0;
                                    do {
                                       uVar10 = (ulong)uVar7;
                                       uVar7 = uVar7 + 8;
                                       *(undefined8*)( uVar11 + uVar10 ) = *(undefined8*)( pbVar17 + ( uVar10 - lVar13 ) );
                                    } while ( uVar7 < uVar15 );
                                 }
                              }
                              ptr[0x9c] = 0;
                              ptr[0x9d] = 0;
                              uVar11 = 1;
                              pbVar17 = (byte*)&null_compression_29;
                              ptr[0x9e] = 0;
                              ptr[0x9f] = 0;
                              goto LAB_00104400;
                           }
                        }
                     }
                  }
                  ERR_new();
                  uVar16 = 0x639;
               }
               ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_process_client_hello");
               ossl_statem_fatal(param_1, 0x32, 0xd5, 0);
            }
         }
      } else if (( ( *(long*)( param_1 + 0x260 ) == 0 ) || ( *(long*)( param_1 + 0x2e8 ) == 0 ) ) && ( *(int*)( param_1 + 0x8d0 ) == 0 )) {
         if (param_2[1] != 0) {
            uVar11 = param_2[1] - 1;
            cVar2 = *(char*)*param_2;
            param_2[1] = uVar11;
            *param_2 = (long)( (char*)*param_2 + 1 );
            if (cVar2 == '\x01') goto LAB_00103e0f;
         }
         ERR_new();
         uVar16 = 0x613;
         LAB_00103f63:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_process_client_hello");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      } else {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0x5f9, "tls_process_client_hello");
         ossl_statem_fatal(param_1, 10, 0xf4, 0);
      }
      LAB_0010403f:CRYPTO_free(*(void**)( ptr + 0xa2 ));
   }
   CRYPTO_free(ptr);
   uVar16 = 0;
   LAB_00104065:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar16;
}undefined8 tls_handle_alpn(long param_1) {
   code *pcVar1;
   void *__s2;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   ulong __n;
   long in_FS_OFFSET;
   byte local_29;
   void *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_29 = 0;
   local_28 = (void*)0x0;
   pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x2c0 );
   if (( pcVar1 == (code*)0x0 ) || ( *(long*)( param_1 + 0x4c8 ) == 0 )) {
      LAB_00104817:if (*(long*)( *(long*)( param_1 + 0x900 ) + 0x348 ) != 0) {
         *(undefined4*)( param_1 + 0xb1c ) = 0;
      }
   } else {
      iVar2 = ( *pcVar1 )(*(undefined8*)( param_1 + 0x40 ), &local_28, &local_29, *(long*)( param_1 + 0x4c8 ), *(undefined4*)( param_1 + 0x4d0 ), *(undefined8*)( *(long*)( param_1 + 8 ) + 0x2c8 ));
      if (iVar2 != 0) {
         if (iVar2 != 3) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0x8e0, "tls_handle_alpn");
            ossl_statem_fatal(param_1, 0x78, 0xeb, 0);
            uVar3 = 0;
            goto LAB_00104837;
         }
         goto LAB_00104817;
      }
      CRYPTO_free(*(void**)( param_1 + 0x4b8 ));
      lVar4 = CRYPTO_memdup(local_28, local_29, "ssl/statem/statem_srvr.c");
      *(long*)( param_1 + 0x4b8 ) = lVar4;
      if (lVar4 == 0) {
         *(undefined8*)( param_1 + 0x4c0 ) = 0;
         ERR_new();
         uVar3 = 0x8b7;
         LAB_00104933:ERR_set_debug("ssl/statem/statem_srvr.c", uVar3, "tls_handle_alpn");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar3 = 0;
         goto LAB_00104837;
      }
      lVar4 = *(long*)( param_1 + 0x900 );
      __n = (ulong)local_29;
      *(undefined4*)( param_1 + 0x4b4 ) = 0;
      __s2 = *(void**)( lVar4 + 0x348 );
      *(ulong*)( param_1 + 0x4c0 ) = __n;
      if (__s2 == (void*)0x0) {
         *(undefined4*)( param_1 + 0xb1c ) = 0;
         if (*(int*)( param_1 + 0x508 ) == 0) {
            uVar3 = CRYPTO_memdup(local_28, __n, "ssl/statem/statem_srvr.c", 0x8d3);
            *(undefined8*)( lVar4 + 0x348 ) = uVar3;
            if (*(long*)( *(long*)( param_1 + 0x900 ) + 0x348 ) == 0) {
               ERR_new();
               uVar3 = 0x8d6;
               goto LAB_00104933;
            }
            *(ulong*)( *(long*)( param_1 + 0x900 ) + 0x350 ) = (ulong)local_29;
         }
      } else if (( ( __n != *(ulong*)( lVar4 + 0x350 ) ) || ( iVar2 = memcmp(local_28, __s2, __n) ),iVar2 != 0 )) {
         ERR_new();
         uVar3 = 0x8cf;
         goto LAB_00104933;
      }
   }
   uVar3 = 1;
   LAB_00104837:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}undefined8 tls_post_process_client_hello(SSL *param_1, int param_2) {
   uint uVar1;
   SSL *s;
   code *pcVar2;
   undefined8 uVar3;
   SSL_METHOD *pSVar4;
   _func_3071 *p_Var5;
   _func_3150 *p_Var6;
   stack_st_void *psVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   stack_st_X509_NAME *psVar11;
   int iVar12;
   int iVar14;
   int iVar15;
   undefined8 uVar16;
   undefined4 uVar13;
   void *pvVar17;
   stack_st_SSL_CIPHER *psVar18;
   BUF_MEM *pBVar19;
   ulong uVar20;
   long lVar21;
   SSL_CIPHER *pSVar22;
   BIO *pBVar23;
   SSL_METHOD *pSVar24;
   ulong uVar25;
   COMP_CTX *pCVar26;
   _func_3150 *p_Var27;
   size_t len;
   EVP_MD_CTX *pEVar28;
   long in_FS_OFFSET;
   bool bVar29;
   undefined4 local_64;
   undefined4 local_60;
   int local_5c;
   long local_58;
   long local_50;
   _func_1088 *local_48;
   long local_40;
   s = *(SSL**)&param_1->quiet_shutdown;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 4) {
      pSVar4 = param_1->method;
      p_Var6 = param_1[4].msg_callback;
      local_64 = 0x50;
      local_58 = 0;
      local_60 = 0;
      local_50 = 0;
      if (pSVar4[2].ssl_write == (_func_3060*)0x0) {
         LAB_00104ff0:psVar7 = *(stack_st_void**)( p_Var6 + 0x10 );
         param_1->verify_result = *(long*)( p_Var6 + 8 );
         (param_1->ex_data).sk = psVar7;
         psVar11 = *(stack_st_X509_NAME**)( p_Var6 + 0x20 );
         *(undefined8*)&(param_1->ex_data).dummy = *(undefined8*)( p_Var6 + 0x18 );
         param_1->client_CA = psVar11;
         if (*(int*)p_Var6 != 0) {
            uVar1 = *(uint*)( p_Var6 + 4 );
            if (( uVar1 == 2 ) || ( ( uVar1 & 0xff00 ) != 0x300 )) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0x6d4, "tls_early_post_process_client_hello");
               ossl_statem_fatal(param_1, 0x46, 0xfc, 0);
               goto LAB_00104f57;
            }
            *(uint*)( (long)&param_1[3].max_cert_list + 4 ) = uVar1;
         }
         iVar12 = ssl_choose_server_version(param_1, p_Var6, &local_60);
         if (iVar12 == 0) {
            if (( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0) {
               iVar12 = *(int*)&param_1->wbio->method;
               if (( iVar12 != 0x10000 ) && ( 0x303 < iVar12 )) {
                  iVar12 = RECORD_LAYER_processed_read_pending(&param_1[4].ex_data.dummy);
                  if (iVar12 != 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0x6ea, "tls_early_post_process_client_hello");
                     ossl_statem_fatal(param_1, 10, 0xb6, 0);
                     goto LAB_00104f57;
                  }
                  if (( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0) goto LAB_00105130;
               }
            } else {
               LAB_00105130:uVar20 = SSL_get_options(param_1);
               if (( uVar20 & 0x2000 ) != 0) {
                  if (pSVar4->ssl_callback_ctrl == (_func_3078*)0x0) {
                     pvVar17 = param_1[1].tlsext_opaque_prf_input;
                     if (( *(fp**)( (long)pvVar17 + 0x100 ) == *(fp**)( p_Var6 + 0x50 ) ) && ( iVar12 = memcmp(p_Var6 + 0x58, pvVar17, (size_t)*(fp**)( (long)pvVar17 + 0x100 )) ),iVar12 == 0) goto LAB_0010516a;
                     ERR_new();
                     uVar16 = 0x6fd;
                  } else {
                     lVar21 = ( *pSVar4->ssl_callback_ctrl )(s, (int)p_Var6 + 0x58, *(fp**)( p_Var6 + 0x50 ));
                     if ((int)lVar21 != 0) {
                        pvVar17 = param_1[1].tlsext_opaque_prf_input;
                        LAB_0010516a:*(undefined4*)( (long)pvVar17 + 0x108 ) = 1;
                        goto LAB_00105178;
                     }
                     ERR_new();
                     uVar16 = 0x6f4;
                  }
                  ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_early_post_process_client_hello");
                  ossl_statem_fatal(param_1, 0x28, 0x134, 0);
                  goto LAB_00104f57;
               }
            }
            LAB_00105178:iVar12 = *(int*)p_Var6;
            *(undefined4*)&param_1[1].tls_session_ticket_ext_cb = 0;
            iVar12 = ssl_cache_cipherlist(param_1, p_Var6 + 0x158, iVar12);
            if (( iVar12 != 0 ) && ( iVar12 = ossl_bytes_to_cipher_list(param_1, p_Var6 + 0x158, &local_58, &local_50, *(int*)p_Var6, 1) ),iVar12 != 0) {
               iVar12 = 0;
               *(undefined4*)&param_1[1].tlsext_ocsp_ids = 0;
               if (local_50 != 0) {
                  for (; iVar15 = OPENSSL_sk_num(local_50),iVar12 < iVar15; iVar12 = iVar12 + 1) {
                     pSVar22 = (SSL_CIPHER*)OPENSSL_sk_value(local_50, iVar12);
                     uVar20 = SSL_CIPHER_get_id(pSVar22);
                     if ((int)uVar20 == 0x30000ff) {
                        if (*(int*)&param_1[4].expand != 0) {
                           ERR_new();
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0x716, "tls_early_post_process_client_hello");
                           ossl_statem_fatal(param_1, 0x28, 0x159, 0);
                           goto LAB_00104f57;
                        }
                        *(undefined4*)&param_1[1].tlsext_ocsp_ids = 1;
                     } else {
                        uVar20 = SSL_CIPHER_get_id(pSVar22);
                        if (( (int)uVar20 == 0x3005600 ) && ( iVar15 = iVar15 == 0 )) {
                           ERR_new();
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0x724, "tls_early_post_process_client_hello");
                           ossl_statem_fatal(param_1, 0x56, 0x175, 0);
                           goto LAB_00104f57;
                        }
                     }
                  }
               }
               if (( ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( iVar12 = *(int*)&param_1->wbio->method ),iVar12 != 0x10000 )) {
                  psVar18 = SSL_get_ciphers(param_1);
                  pBVar19 = (BUF_MEM*)ssl3_choose_cipher(param_1, local_58, psVar18);
                  if (pBVar19 != (BUF_MEM*)0x0) {
                     if (( *(int*)&param_1[3].cipher_list_by_id == 1 ) && ( ( param_1[1].init_buf == (BUF_MEM*)0x0 || ( (int)param_1[1].init_buf[1].length != (int)pBVar19[1].length ) ) )) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0x73b, "tls_early_post_process_client_hello");
                        ossl_statem_fatal(param_1, 0x2f, 0xba, 0);
                        goto LAB_00104f57;
                     }
                     param_1[1].init_buf = pBVar19;
                     goto LAB_00104ab1;
                  }
                  ERR_new();
                  uVar16 = 0x731;
                  LAB_00105ac4:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_early_post_process_client_hello");
                  ossl_statem_fatal(param_1, 0x28, 0xc1, 0);
               } else {
                  LAB_00104ab1:iVar12 = tls_parse_extension(param_1, 0xd, 0x80, *(undefined8*)( p_Var6 + 0x288 ), 0, 0);
                  if (iVar12 == 0) goto LAB_00104f57;
                  if (( *(int*)p_Var6 != 0 ) || ( ( *(int*)( (long)&param_1->s2 + 4 ) != 0 && ( ( (ulong)param_1[3].client_CA & 0x10000 ) != 0 ) ) )) {
                     LAB_00104b11:iVar12 = ssl_get_new_session(param_1);
                     if (iVar12 != 0) {
                        pBVar23 = param_1->wbio;
                        if (( *(byte*)( *(long*)&pBVar23[1].ex_data.dummy + 0x50 ) & 8 ) == 0) goto LAB_00104b37;
                        goto LAB_00104b51;
                     }
                     goto LAB_00104f57;
                  }
                  iVar12 = ssl_get_prev_session(param_1);
                  if (iVar12 != 1) {
                     if (iVar12 == -1) goto LAB_00104f57;
                     goto LAB_00104b11;
                  }
                  *(undefined4*)&param_1[1].tls_session_ticket_ext_cb = 1;
                  pBVar23 = param_1->wbio;
                  if (( *(byte*)( *(long*)&pBVar23[1].ex_data.dummy + 0x50 ) & 8 ) == 0) {
                     LAB_00104b37:iVar12 = *(int*)&pBVar23->method;
                     if (iVar12 < 0x304) {
                        LAB_00105680:if (( iVar12 == 0x10000 ) || ( iVar12 < 0x304 )) goto LAB_00104b51;
                     } else {
                        if (iVar12 != 0x10000) {
                           memcpy(param_1[3].sid_ctx + 0xc, param_1[4].msg_callback + 0x30, *(size_t*)( param_1[4].msg_callback + 0x28 ));
                           param_1[3].generate_session_id = *(GEN_SESSION_CB*)( param_1[4].msg_callback + 0x28 );
                           if (( *(byte*)( *(long*)&pBVar23[1].ex_data.dummy + 0x50 ) & 8 ) == 0) {
                              iVar12 = *(int*)&pBVar23->method;
                              goto LAB_00105680;
                           }
                        }
                        LAB_00104b51:if (*(int*)&param_1[1].tls_session_ticket_ext_cb != 0) goto LAB_0010556e;
                     }
                     LAB_00104b61:if (*(size_t*)( p_Var6 + 0x168 ) == 0) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0x79c, "tls_early_post_process_client_hello");
                        ossl_statem_fatal(param_1, 0x32, 0xbb, 0);
                     } else {
                        pvVar17 = memchr(p_Var6 + 0x170, 0, *(size_t*)( p_Var6 + 0x168 ));
                        if (pvVar17 == (void*)0x0) {
                           ERR_new();
                           uVar16 = 0x7a2;
                           LAB_00105992:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_early_post_process_client_hello");
                           ossl_statem_fatal(param_1, 0x2f, 0x156, 0);
                        } else {
                           if (( ( (ulong)param_1[3].client_CA & 0x40 ) != 0 ) && ( 5 < *(ulong*)( p_Var6 + 0x278 ) )) {
                              lVar21 = *(long*)( p_Var6 + 0x270 );
                              uVar25 = *(ulong*)( p_Var6 + 0x278 ) - 6;
                              uVar20 = ( ulong )(ushort)(*(ushort*)( lVar21 + 4 ) << 8 | *(ushort*)( lVar21 + 4 ) >> 8);
                              if (( uVar20 <= uVar25 ) && ( *(short*)( lVar21 + 2 ) == 0 )) {
                                 iVar12 = SSL_client_version(param_1);
                                 if (( iVar12 >> 8 == 3 ) && ( iVar12 = 0x302 < iVar12 )) {
                                    len = 0x22;
                                 } else {
                                    len = 0x12;
                                 }
                                 bVar29 = false;
                                 if (uVar25 - uVar20 == len) {
                                    iVar12 = CRYPTO_memcmp((void*)( lVar21 + 6 + uVar20 ), kSafariExtensionsBlock_25, len);
                                    bVar29 = iVar12 == 0;
                                 }
                                 *(bool*)( (long)&param_1[1].tlsext_ecpointformatlist + 4 ) = bVar29;
                              }
                           }
                           iVar12 = tls_parse_all_extensions(param_1, 0x80, *(undefined8*)( p_Var6 + 0x288 ), 0, 0, 1);
                           if (iVar12 != 0) {
                              iVar12 = ssl_fill_hello_random(param_1, 1, &param_1->psk_client_callback, 0x20);
                              if (iVar12 < 1) {
                                 ERR_new();
                                 uVar16 = 0x7bb;
                                 LAB_001059cd:ERR_set_debug("ssl/statem/statem_srvr.c", uVar16, "tls_early_post_process_client_hello");
                                 ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                              } else {
                                 if (*(int*)&param_1[1].tls_session_ticket_ext_cb == 0) {
                                    iVar12 = tls1_set_server_sigalgs(param_1);
                                    if (iVar12 == 0) goto LAB_00104f57;
                                    pBVar23 = param_1->wbio;
                                    if (( ( ( ( *(int*)&param_1[1].tls_session_ticket_ext_cb == 0 ) && ( 0x300 < param_1->state ) ) && ( ( *(uint*)( *(long*)&pBVar23[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) ) && ( ( *(int*)&pBVar23->method < 0x304 || ( *(int*)&pBVar23->method == 0x10000 ) ) ) ) && ( param_1[4].bbio != (BIO*)0x0 )) {
                                       local_48 = (_func_1088*)0x0;
                                       local_5c = 0x200;
                                       iVar12 = ( *(code*)param_1[4].bbio )(s, &param_1[3].write_hash[1].pctx, &local_5c, local_58);
                                       if (( iVar12 != 0 ) && ( 0 < local_5c )) {
                                          pEVar28 = param_1[3].write_hash;
                                          pEVar28->engine = (ENGINE*)(long)local_5c;
                                          *(undefined4*)&param_1[1].tls_session_ticket_ext_cb = 1;
                                          param_1[1].tlsext_hb_seq = (undefined4)local_58;
                                          param_1[1].renegotiate = local_58._4_4_;
                                          pEVar28[0xf].digest = (EVP_MD*)0x0;
                                          local_58 = 0;
                                          if (local_48 == (_func_1088*)0x0) {
                                             psVar18 = SSL_get_ciphers(param_1);
                                             uVar16._0_4_ = param_1[1].tlsext_hb_seq;
                                             uVar16._4_4_ = param_1[1].renegotiate;
                                             local_48 = (_func_1088*)ssl3_choose_cipher(param_1, uVar16, psVar18);
                                             if (local_48 == (_func_1088*)0x0) {
                                                ERR_new();
                                                uVar16 = 0x7e3;
                                                goto LAB_00105ac4;
                                             }
                                             pEVar28 = param_1[3].write_hash;
                                          }
                                          pEVar28[0xf].update = local_48;
                                          uVar8._0_4_ = param_1[2].version;
                                          uVar8._4_4_ = param_1[2].type;
                                          OPENSSL_sk_free(uVar8);
                                          uVar9._0_4_ = param_1[1].tlsext_hb_seq;
                                          uVar9._4_4_ = param_1[1].renegotiate;
                                          uVar16 = OPENSSL_sk_dup(uVar9);
                                          param_1[2].version = (int)uVar16;
                                          param_1[2].type = (int)( (ulong)uVar16 >> 0x20 );
                                          OPENSSL_sk_free(param_1[2].method);
                                          uVar10._0_4_ = param_1[1].tlsext_hb_seq;
                                          uVar10._4_4_ = param_1[1].renegotiate;
                                          pSVar24 = (SSL_METHOD*)OPENSSL_sk_dup(uVar10);
                                          param_1[2].method = pSVar24;
                                       }
                                       goto LAB_00104bfb;
                                    }
                                 } else {
                                    LAB_00104bfb:pBVar23 = param_1->wbio;
                                 }
                                 lVar21 = *(long*)&pBVar23[1].ex_data.dummy;
                                 param_1[1].expand = (COMP_CTX*)0x0;
                                 if (( ( ( *(byte*)( lVar21 + 0x50 ) & 8 ) == 0 ) && ( *(int*)&pBVar23->method != 0x10000 ) ) && ( 0x303 < *(int*)&pBVar23->method )) {
                                    pCVar26 = (COMP_CTX*)0x0;
                                    if (*(long*)( p_Var6 + 0x168 ) == 1) {
                                       LAB_00104c44:OPENSSL_sk_free();
                                       param_1[1].tlsext_hb_seq = (undefined4)local_58;
                                       param_1[1].renegotiate = local_58._4_4_;
                                       if (local_58 == 0) {
                                          ERR_new();
                                          uVar16 = 0x850;
                                          goto LAB_001059cd;
                                       }
                                       local_58 = 0;
                                       if (*(int*)&param_1[1].tls_session_ticket_ext_cb == 0) {
                                          if (pCVar26 == (COMP_CTX*)0x0) {
                                             uVar13 = 0;
                                          } else {
                                             uVar13 = *(undefined4*)&pCVar26->meth;
                                          }
                                          *(undefined4*)&param_1[3].write_hash[0xf].pctx = uVar13;
                                       }
                                       LAB_00104c98:OPENSSL_sk_free(local_58);
                                       OPENSSL_sk_free(local_50);
                                       CRYPTO_free(*(void**)( p_Var6 + 0x288 ));
                                       CRYPTO_free(param_1[4].msg_callback);
                                       param_1[4].msg_callback = (_func_3150*)0x0;
                                       goto LAB_00104ce8;
                                    }
                                    ERR_new();
                                    ERR_set_debug("ssl/statem/statem_srvr.c", 0x7fc, "tls_early_post_process_client_hello");
                                    ossl_statem_fatal(param_1, 0x2f, 0x155, 0);
                                 } else {
                                    uVar1 = *(uint*)&param_1[3].write_hash[0xf].pctx;
                                    if (uVar1 == 0) {
                                       pCVar26 = (COMP_CTX*)0x0;
                                       if (*(int*)&param_1[1].tls_session_ticket_ext_cb == 0) {
                                          iVar12 = ssl_allow_compression(param_1);
                                          if (( iVar12 != 0 ) && ( pSVar4[1].ssl_read != (_func_3058*)0x0 )) {
                                             iVar15 = OPENSSL_sk_num();
                                             for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
                                                pCVar26 = (COMP_CTX*)OPENSSL_sk_value(pSVar4[1].ssl_read, iVar12);
                                                if (*(long*)( p_Var6 + 0x168 ) != 0) {
                                                   p_Var27 = p_Var6 + 0x170;
                                                   do {
                                                      if (*(uint*)&pCVar26->meth == ( uint )(byte) * p_Var27) {
                                                         param_1[1].expand = pCVar26;
                                                         goto LAB_00105a93;
                                                      }
                                                      p_Var27 = p_Var27 + 1;
                                                   } while ( p_Var27 != p_Var6 + *(long*)( p_Var6 + 0x168 ) + 0x170 );
                                                }
                                             }
                                          }
                                          pCVar26 = (COMP_CTX*)0x0;
                                          LAB_00105a93:if (*(int*)&param_1[1].tls_session_ticket_ext_cb == 0) goto LAB_00104c44;
                                          pBVar23 = param_1->wbio;
                                       }
                                       if (( ( ( *(byte*)( *(long*)&pBVar23[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( *(int*)&pBVar23->method != 0x10000 ) ) && ( 0x303 < *(int*)&pBVar23->method )) goto LAB_00104c44;
                                       goto LAB_00104c98;
                                    }
                                    iVar15 = ssl_allow_compression(param_1);
                                    pCVar26 = (COMP_CTX*)0x0;
                                    iVar12 = 0;
                                    if (iVar15 == 0) {
                                       ERR_new();
                                       ERR_set_debug("ssl/statem/statem_srvr.c", 0x809, "tls_early_post_process_client_hello");
                                       ossl_statem_fatal(param_1, 0x28, 0x154, 0);
                                    } else {
                                       for (; iVar15 = OPENSSL_sk_num(pSVar4[1].ssl_read),iVar12 < iVar15; iVar12 = iVar12 + 1) {
                                          pCVar26 = (COMP_CTX*)OPENSSL_sk_value(pSVar4[1].ssl_read, iVar12);
                                          if (uVar1 == *(uint*)&pCVar26->meth) {
                                             param_1[1].expand = pCVar26;
                                             break;
                                          }
                                       }
                                       if (param_1[1].expand != (COMP_CTX*)0x0) {
                                          uVar20 = *(ulong*)( p_Var6 + 0x168 );
                                          uVar25 = 0;
                                          if (uVar20 != 0) {
                                             do {
                                                if (uVar1 == (byte)p_Var6[uVar25 + 0x170]) {
                                                   if (uVar25 < uVar20) goto LAB_00105a93;
                                                   break;
                                                }
                                                uVar25 = uVar25 + 1;
                                             } while ( uVar20 != uVar25 );
                                          }
                                          ERR_new();
                                          uVar16 = 0x820;
                                          goto LAB_00105992;
                                       }
                                       ERR_new();
                                       ERR_set_debug("ssl/statem/statem_srvr.c", 0x816, "tls_early_post_process_client_hello");
                                       ossl_statem_fatal(param_1, 0x28, 0x155, 0);
                                    }
                                 }
                              }
                           }
                        }
                     }
                  } else {
                     LAB_0010556e:iVar12 = *(int*)( param_1[3].write_hash[0xf].update + 0x18 );
                     for (iVar15 = 0; iVar14 = OPENSSL_sk_num(local_58),iVar15 < iVar14; iVar15 = iVar15 + 1) {
                        lVar21 = OPENSSL_sk_value(local_58);
                        if (iVar12 == *(int*)( lVar21 + 0x18 )) goto LAB_00104b61;
                     }
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0x792, "tls_early_post_process_client_hello");
                     ossl_statem_fatal(param_1, 0x2f, 0xd7, 0);
                  }
               }
            }
         } else {
            if (( param_1->tls_session_ticket_ext_cb_arg == (void*)0x0 ) || ( lVar21._0_4_ = param_1[1].server ),lVar21._4_4_ = param_1[1].new_session,lVar21 == 0) {
               iVar15 = *(int*)( p_Var6 + 4 );
               *(int*)( (long)&param_1[3].max_cert_list + 4 ) = iVar15;
               param_1->state = iVar15;
            }
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0x6e3, "tls_early_post_process_client_hello");
            ossl_statem_fatal(param_1, 0x46, iVar12, 0);
         }
      } else {
         iVar12 = ( *pSVar4[2].ssl_write )(s, &local_64, (int)pSVar4[2].ssl_shutdown);
         if (iVar12 == -1) {
            *(undefined4*)&param_1->packet = 7;
            uVar16 = 4;
            goto LAB_00104a69;
         }
         if (iVar12 == 1) goto LAB_00104ff0;
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0x6c2, "tls_early_post_process_client_hello");
         ossl_statem_fatal(param_1, local_64, 0xea, 0);
      }
      LAB_00104f57:OPENSSL_sk_free(local_58);
      OPENSSL_sk_free(local_50);
      CRYPTO_free(*(void**)( p_Var6 + 0x288 ));
      CRYPTO_free(param_1[4].msg_callback);
      uVar16 = 0;
      param_1[4].msg_callback = (_func_3150*)0x0;
      goto LAB_00104a69;
   }
   if (param_2 == 5) {
      LAB_00104ce8:if (*(int*)&param_1[1].tls_session_ticket_ext_cb == 0) {
         pcVar2 = *(code**)( *(long*)&param_1[3].packet_length + 0x60 );
         if (pcVar2 != (code*)0x0) {
            iVar12 = ( *pcVar2 )(s, *(undefined8*)( *(long*)&param_1[3].packet_length + 0x68 ));
            if (iVar12 == 0) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0x90a, "tls_post_process_client_hello");
               ossl_statem_fatal(param_1, 0x50, 0x179, 0);
               uVar16 = 0;
               goto LAB_00104a69;
            }
            if (iVar12 < 0) {
               *(undefined4*)&param_1->packet = 4;
               uVar16 = 5;
               goto LAB_00104a69;
            }
            *(undefined4*)&param_1->packet = 1;
         }
         if (( ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 ) || ( iVar12 = *(int*)&param_1->wbio->method ),iVar12 == 0x10000 )) {
            psVar18 = SSL_get_ciphers(param_1);
            uVar3._0_4_ = param_1[1].tlsext_hb_seq;
            uVar3._4_4_ = param_1[1].renegotiate;
            pBVar19 = (BUF_MEM*)ssl3_choose_cipher(param_1, uVar3, psVar18);
            if (pBVar19 == (BUF_MEM*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0x91b, "tls_post_process_client_hello");
               ossl_statem_fatal(param_1, 0x28, 0xc1, 0);
               uVar16 = 0;
               goto LAB_00104a69;
            }
            param_1[1].init_buf = pBVar19;
         }
         if (*(int*)&param_1[1].tls_session_ticket_ext_cb != 0) goto LAB_00104d80;
         iVar12 = tls_choose_sigalg(param_1, 1);
         if (iVar12 != 0) {
            psVar7 = param_1[4].ex_data.sk;
            if (psVar7 != (stack_st_void*)0x0) {
               pEVar28 = param_1[3].write_hash;
               uVar13 = ( *(code*)psVar7 )(s, ( param_1[1].init_buf[1].length & 0x600000000 ) != 0);
               *(undefined4*)&pEVar28[0xe].flags = uVar13;
            }
            if ((int)param_1[3].write_hash[0xe].flags != 0) {
               *(undefined4*)&param_1[3].tlsext_session_ticket = 0;
            }
            goto LAB_00104d80;
         }
      } else {
         if (( ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 ) || ( iVar12 = *(int*)&param_1->wbio->method ),iVar12 == 0x10000 )) {
            param_1[1].init_buf = (BUF_MEM*)param_1[3].write_hash[0xf].update;
         }
         LAB_00104d80:iVar12 = param_1[3].tlsext_ocsp_resplen;
         pSVar4 = param_1->method;
         *(undefined4*)( (long)&param_1[3].tlsext_ecpointformatlist + 4 ) = 0;
         if (( ( iVar12 != -1 ) && ( pSVar4 != (SSL_METHOD*)0x0 ) ) && ( ( p_Var5 = pSVar4[2].put_cipher_by_char ),p_Var5 != (_func_3071*)0x0 && ( *(long*)( param_1[1].sid_ctx + 0x1c ) != 0 ) )) {
            pSVar22 = *(SSL_CIPHER**)&param_1->quiet_shutdown;
            **(long**)&param_1[3].packet_length = *(long*)( param_1[1].sid_ctx + 0x1c );
            iVar12 = ( *p_Var5 )(pSVar22, (uchar*)pSVar4[2].ssl_pending);
            if (iVar12 == 0) {
               if (param_1[3].tlsext_opaque_prf_input != (void*)0x0) {
                  *(undefined4*)( (long)&param_1[3].tlsext_ecpointformatlist + 4 ) = 1;
               }
            } else {
               if (iVar12 != 3) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_srvr.c", 0x898, "tls_handle_status_request");
                  ossl_statem_fatal(param_1, 0x50, 0xe2, 0);
                  uVar16 = 0;
                  goto LAB_00104a69;
               }
               *(undefined4*)( (long)&param_1[3].tlsext_ecpointformatlist + 4 ) = 0;
            }
         }
         if (( ( ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( iVar12 = *(int*)&param_1->wbio->method ),iVar12 != 0x10000 ) ) && ( 0x303 < iVar12 )) goto LAB_00104e21;
      }
      LAB_00104eb0:uVar16 = 0;
   } else {
      if (param_2 == 6) {
         LAB_00104e21:local_48 = (_func_1088*)CONCAT44(local_48._4_4_, 0x70);
         if (( ( param_1[1].init_buf[1].length & 0x2000000000 ) != 0 ) && ( *(long*)( param_1[4].sid_ctx + 0xc ) != 0 )) {
            if (param_1[4].session == (SSL_SESSION*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0x555, "ssl_check_srp_ext_ClientHello");
               ossl_statem_fatal(param_1, 0x73, 0xdf, 0);
               uVar16 = 0;
               goto LAB_00104a69;
            }
            iVar12 = ssl_srp_server_param_with_username_intern(param_1, &local_48);
            if (iVar12 < 0) {
               *(undefined4*)&param_1->packet = 4;
               uVar16 = 6;
               goto LAB_00104a69;
            }
            if (iVar12 == 2) {
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0x55d, "ssl_check_srp_ext_ClientHello");
               ossl_statem_fatal(param_1, (ulong)local_48 & 0xffffffff, ( ulong )((int)local_48 != 0x73) * 3 + 0xdf, 0);
               goto LAB_00104eb0;
            }
         }
      }
      uVar16 = 1;
   }
   LAB_00104a69:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar16;
}undefined8 tls_process_client_key_exchange(long param_1, size_t *param_2) {
   byte *pbVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   EVP_PKEY_CTX *pEVar5;
   undefined8 uVar6;
   uchar *out;
   undefined8 *puVar7;
   ulong uVar8;
   BIGNUM *a;
   char *pcVar9;
   EVP_PKEY *pEVar10;
   EVP_PKEY *pEVar11;
   long *plVar12;
   size_t sVar13;
   ulong uVar14;
   long lVar15;
   ushort uVar16;
   long lVar17;
   undefined8 uVar18;
   ushort *puVar19;
   long in_FS_OFFSET;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   size_t local_118;
   size_t local_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 local_e0[5];
   undefined8 local_b8[6];
   undefined1 local_88[32];
   uchar local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(uint*)( *(long*)( param_1 + 0x300 ) + 0x1c );
   if (( uVar2 & 0x1c8 ) != 0) {
      iVar3 = tls_process_cke_psk_preamble();
      if (iVar3 == 0) goto LAB_00105ef0;
      if (( uVar2 & 8 ) == 0) goto LAB_00105d44;
      if (param_2[1] != 0) {
         ERR_new();
         pcVar9 = "tls_process_client_key_exchange";
         uVar6 = 0xd58;
         goto LAB_001061f7;
      }
      iVar3 = ssl_generate_master_secret(param_1, 0, 0, 0);
      if (iVar3 == 0) goto LAB_00105ef0;
      LAB_00105ea0:uVar6 = 2;
      goto LAB_00105f23;
   }
   LAB_00105d44:if (( uVar2 & 0x41 ) == 0) {
      if (( uVar2 & 0x102 ) == 0) {
         if (( uVar2 & 0x84 ) == 0) {
            if (( uVar2 & 0x20 ) == 0) {
               if (( uVar2 & 0x10 ) == 0) {
                  if (( uVar2 & 0x200 ) == 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xd7f, "tls_process_client_key_exchange");
                     ossl_statem_fatal(param_1, 0x50, 0xf9, 0);
                  } else {
                     local_110 = 0x20;
                     iVar3 = ossl_gost18_cke_cipher_nid(param_1);
                     puVar7 = *(undefined8**)( param_1 + 8 );
                     if (iVar3 == 0) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xd08, "tls_process_cke_gost18");
                        ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                     } else {
                        iVar4 = ossl_gost_ukm(param_1, local_88);
                        if (iVar4 < 1) {
                           ERR_new();
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0xd0d, "tls_process_cke_gost18");
                           uVar6 = 0xc0103;
                        } else {
                           lVar15 = *(long*)( *(long*)( param_1 + 0x880 ) + 0x20 );
                           lVar17 = *(long*)( lVar15 + 0xf8 );
                           if (( lVar17 == 0 ) && ( lVar17 = lVar17 == 0 )) {
                              ERR_new();
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xd16, "tls_process_cke_gost18");
                              uVar6 = 0xec;
                           } else {
                              pEVar5 = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(*puVar7, lVar17, puVar7[0x8e]);
                              if (pEVar5 != (EVP_PKEY_CTX*)0x0) {
                                 iVar4 = EVP_PKEY_decrypt_init(pEVar5);
                                 if (iVar4 < 1) {
                                    ERR_new();
                                    ERR_set_debug("ssl/statem/statem_srvr.c", 0xd20, "tls_process_cke_gost18");
                                    uVar6 = 0xc0103;
                                    uVar18 = 0x50;
                                 } else {
                                    iVar4 = EVP_PKEY_CTX_ctrl(pEVar5, -1, 0x400, 8, 0x20, local_88);
                                    if (iVar4 < 1) {
                                       ERR_new();
                                       uVar6 = 0xd27;
                                    } else {
                                       iVar3 = EVP_PKEY_CTX_ctrl(pEVar5, -1, 0x400, 0xc, iVar3, (void*)0x0);
                                       if (0 < iVar3) {
                                          iVar3 = EVP_PKEY_decrypt(pEVar5, local_68, &local_110, (uchar*)*param_2, param_2[1]);
                                          if (0 < iVar3) {
                                             iVar3 = ssl_generate_master_secret(param_1, local_68, local_110, 0);
                                             if (iVar3 != 0) {
                                                EVP_PKEY_CTX_free(pEVar5);
                                                goto LAB_00105ea0;
                                             }
                                             EVP_PKEY_CTX_free(pEVar5);
                                             goto LAB_00105ef0;
                                          }
                                          ERR_new();
                                          ERR_set_debug("ssl/statem/statem_srvr.c", 0xd34, "tls_process_cke_gost18");
                                          uVar6 = 0x93;
                                          uVar18 = 0x32;
                                          goto LAB_00106b46;
                                       }
                                       ERR_new();
                                       uVar6 = 0xd2d;
                                    }
                                    ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, "tls_process_cke_gost18");
                                    uVar6 = 0x112;
                                    uVar18 = 0x50;
                                 }
                                 LAB_00106b46:ossl_statem_fatal(param_1, uVar18, uVar6, 0);
                                 EVP_PKEY_CTX_free(pEVar5);
                                 goto LAB_00105ef0;
                              }
                              ERR_new();
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xd1c, "tls_process_cke_gost18");
                              uVar6 = 0x80006;
                           }
                        }
                        ossl_statem_fatal(param_1, 0x50, uVar6, 0);
                        EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
                     }
                  }
               } else {
                  local_118 = 0x20;
                  uVar2 = *(uint*)( *(long*)( param_1 + 0x300 ) + 0x20 );
                  if (( uVar2 & 0x80 ) == 0) {
                     lVar17 = 0;
                     if (( uVar2 & 0x20 ) != 0) {
                        lVar15 = *(long*)( *(long*)( param_1 + 0x880 ) + 0x20 );
                        LAB_001064ea:lVar17 = *(long*)( lVar15 + 0xa8 );
                     }
                  } else {
                     lVar15 = *(long*)( *(long*)( param_1 + 0x880 ) + 0x20 );
                     lVar17 = *(long*)( lVar15 + 0xf8 );
                     if (( lVar17 == 0 ) && ( lVar17 = lVar17 == 0 )) goto LAB_001064ea;
                  }
                  pEVar5 = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(**(undefined8**)( param_1 + 8 ), lVar17, ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
                  if (pEVar5 == (EVP_PKEY_CTX*)0x0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xcb4, "tls_process_cke_gost");
                     ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
                  } else {
                     iVar3 = EVP_PKEY_decrypt_init(pEVar5);
                     if (iVar3 < 1) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xcb8, "tls_process_cke_gost");
                        ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                        EVP_PKEY_CTX_free(pEVar5);
                        GOST_KX_MESSAGE_free(0);
                     } else {
                        pEVar11 = (EVP_PKEY*)tls_get_peer_pkey(param_1);
                        if (( pEVar11 != (EVP_PKEY*)0x0 ) && ( iVar3 = iVar3 < 1 )) {
                           ERR_clear_error();
                        }
                        local_110 = *param_2;
                        plVar12 = (long*)d2i_GOST_KX_MESSAGE(0, &local_110, param_2[1]);
                        if (( ( plVar12 == (long*)0x0 ) || ( (ASN1_TYPE*)*plVar12 == (ASN1_TYPE*)0x0 ) ) || ( iVar3 = iVar3 != 0x10 )) {
                           ERR_new();
                           uVar6 = 0xcce;
                           LAB_00106921:ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, "tls_process_cke_gost");
                           uVar6 = 0x32;
                        } else {
                           if (param_2[1] < local_110 - *param_2) {
                              ERR_new();
                              uVar6 = 0xcd3;
                           } else {
                              sVar13 = param_2[1] - ( local_110 - *param_2 );
                              *param_2 = local_110;
                              param_2[1] = sVar13;
                              if (sVar13 == 0) {
                                 iVar3 = EVP_PKEY_decrypt(pEVar5, local_68, &local_118, *(uchar**)( *(int**)( *plVar12 + 8 ) + 2 ), (long)**(int**)( *plVar12 + 8 ));
                                 if (0 < iVar3) {
                                    iVar3 = ssl_generate_master_secret(param_1, local_68, local_118, 0);
                                    if (iVar3 != 0) {
                                       iVar3 = EVP_PKEY_CTX_ctrl(pEVar5, -1, -1, 2, 2, (void*)0x0);
                                       if (0 < iVar3) {
                                          *(undefined4*)( param_1 + 0xc4 ) = 1;
                                       }
                                       EVP_PKEY_CTX_free(pEVar5);
                                       GOST_KX_MESSAGE_free(plVar12);
                                       goto LAB_00105ea0;
                                    }
                                    EVP_PKEY_CTX_free(pEVar5);
                                    GOST_KX_MESSAGE_free(plVar12);
                                    goto LAB_00105ef0;
                                 }
                                 ERR_new();
                                 uVar6 = 0xce1;
                                 goto LAB_00106921;
                              }
                              ERR_new();
                              uVar6 = 0xcd8;
                           }
                           ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, "tls_process_cke_gost");
                           uVar6 = 0x50;
                        }
                        ossl_statem_fatal(param_1, uVar6, 0x93, 0);
                        EVP_PKEY_CTX_free(pEVar5);
                        GOST_KX_MESSAGE_free(plVar12);
                     }
                  }
               }
            } else {
               if (1 < param_2[1]) {
                  uVar8 = param_2[1] - 2;
                  uVar16 = *(ushort*)*param_2;
                  puVar19 = (ushort*)*param_2 + 1;
                  param_2[1] = uVar8;
                  *param_2 = (size_t)puVar19;
                  uVar16 = uVar16 << 8 | uVar16 >> 8;
                  uVar14 = (ulong)uVar16;
                  if (uVar14 <= uVar8) {
                     *param_2 = (long)puVar19 + uVar14;
                     param_2[1] = uVar8 - uVar14;
                     a = BN_bin2bn((uchar*)puVar19, (uint)uVar16, (BIGNUM*)0x0);
                     *(BIGNUM**)( param_1 + 0xc18 ) = a;
                     if (a == (BIGNUM*)0x0) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xc78, "tls_process_cke_srp");
                        ossl_statem_fatal(param_1, 0x50, 0x80003, 0);
                     } else {
                        iVar3 = BN_ucmp(a, *(BIGNUM**)( param_1 + 0xbf8 ));
                        if (( iVar3 < 0 ) && ( iVar3 = BN_is_zero(*(undefined8*)( param_1 + 0xc18 )) ),iVar3 == 0) {
                           CRYPTO_free(*(void**)( *(long*)( param_1 + 0x900 ) + 0x360 ));
                           lVar15 = *(long*)( param_1 + 0x900 );
                           pcVar9 = CRYPTO_strdup(*(char**)( param_1 + 0xbf0 ), "ssl/statem/statem_srvr.c", 0xc80);
                           *(char**)( lVar15 + 0x360 ) = pcVar9;
                           if (*(long*)( *(long*)( param_1 + 0x900 ) + 0x360 ) == 0) {
                              ERR_new();
                              pcVar9 = "tls_process_cke_srp";
                              uVar6 = 0xc82;
                              goto LAB_00106d77;
                           }
                           iVar3 = srp_generate_server_master_secret(param_1);
                           if (iVar3 != 0) goto LAB_00105ea0;
                        } else {
                           ERR_new();
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0xc7c, "tls_process_cke_srp");
                           ossl_statem_fatal(param_1, 0x2f, 0x173, 0);
                        }
                     }
                     goto LAB_00105ef0;
                  }
               }
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0xc74, "tls_process_cke_srp");
               ossl_statem_fatal(param_1, 0x32, 0x15b, 0);
            }
            goto LAB_00105ef0;
         }
         pEVar11 = *(EVP_PKEY**)( param_1 + 0x308 );
         if (param_2[1] != 0) {
            uVar8 = param_2[1] - 1;
            uVar14 = ( ulong ) * (byte*)*param_2;
            pbVar1 = (byte*)*param_2 + 1;
            param_2[1] = uVar8;
            *param_2 = (size_t)pbVar1;
            if (uVar14 <= uVar8) {
               *param_2 = (size_t)( pbVar1 + uVar14 );
               param_2[1] = uVar8 - uVar14;
               if (uVar8 - uVar14 == 0) {
                  if (pEVar11 != (EVP_PKEY*)0x0) {
                     pEVar10 = EVP_PKEY_new();
                     if (( pEVar10 == (EVP_PKEY*)0x0 ) || ( iVar3 = iVar3 < 1 )) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xc54, "tls_process_cke_ecdhe");
                        uVar6 = 0x128;
                        uVar18 = 0x50;
                     } else {
                        iVar3 = EVP_PKEY_set1_encoded_public_key(pEVar10, pbVar1, uVar14);
                        if (0 < iVar3) {
                           iVar3 = ssl_derive(param_1, pEVar11, pEVar10, 1);
                           if (iVar3 != 0) {
                              EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x308 ));
                              *(undefined8*)( param_1 + 0x308 ) = 0;
                              EVP_PKEY_free(pEVar10);
                              goto LAB_00105ea0;
                           }
                           EVP_PKEY_free(pEVar10);
                           goto LAB_00105ef0;
                        }
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xc59, "tls_process_cke_ecdhe");
                        uVar6 = 0x6c;
                        uVar18 = 0x2f;
                     }
                     ossl_statem_fatal(param_1, uVar18, uVar6, 0);
                     EVP_PKEY_free(pEVar10);
                     goto LAB_00105ef0;
                  }
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_srvr.c", 0xc4e, "tls_process_cke_ecdhe");
                  uVar6 = 0x137;
                  uVar18 = 0x50;
                  goto LAB_0010641c;
               }
            }
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xc4a, "tls_process_cke_ecdhe");
            uVar6 = 0x9f;
            goto LAB_00106417;
         }
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xc3c, "tls_process_cke_ecdhe");
         uVar6 = 0x137;
         uVar18 = 0x28;
      } else {
         if (1 < param_2[1]) {
            uVar8 = param_2[1] - 2;
            uVar16 = *(ushort*)*param_2;
            puVar19 = (ushort*)*param_2 + 1;
            param_2[1] = uVar8;
            *param_2 = (size_t)puVar19;
            if (uVar8 == ( ushort )(uVar16 << 8 | uVar16 >> 8)) {
               pEVar11 = *(EVP_PKEY**)( param_1 + 0x308 );
               if (pEVar11 == (EVP_PKEY*)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_srvr.c", 0xc0f, "tls_process_cke_dhe");
                  uVar6 = 0xab;
                  uVar18 = 0x50;
                  goto LAB_0010641c;
               }
               if (uVar8 != 0) {
                  param_2[1] = 0;
                  *param_2 = (long)puVar19 + uVar8;
                  pEVar10 = EVP_PKEY_new();
                  if (( pEVar10 == (EVP_PKEY*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xc1e, "tls_process_cke_dhe");
                     uVar6 = 0x128;
                     uVar18 = 0x50;
                  } else {
                     iVar3 = EVP_PKEY_set1_encoded_public_key(pEVar10, puVar19, uVar8);
                     if (0 < iVar3) {
                        iVar3 = ssl_derive(param_1, pEVar11, pEVar10, 1);
                        if (iVar3 != 0) {
                           EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x308 ));
                           *(undefined8*)( param_1 + 0x308 ) = 0;
                           EVP_PKEY_free(pEVar10);
                           goto LAB_00105ea0;
                        }
                        EVP_PKEY_free(pEVar10);
                        goto LAB_00105ef0;
                     }
                     ERR_new();
                     ERR_set_debug("ssl/statem/statem_srvr.c", 0xc23, "tls_process_cke_dhe");
                     uVar6 = 0x6c;
                     uVar18 = 0x2f;
                  }
                  ossl_statem_fatal(param_1, uVar18, uVar6, 0);
                  EVP_PKEY_free(pEVar10);
                  goto LAB_00105ef0;
               }
               ERR_new();
               ERR_set_debug("ssl/statem/statem_srvr.c", 0xc14, "tls_process_cke_dhe");
               uVar6 = 0xab;
               goto LAB_00106417;
            }
         }
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xc0a, "tls_process_cke_dhe");
         uVar6 = 0x94;
         LAB_00106417:uVar18 = 0x32;
      }
      LAB_0010641c:ossl_statem_fatal(param_1, uVar18, uVar6, 0);
      EVP_PKEY_free((EVP_PKEY*)0x0);
   } else {
      puVar7 = *(undefined8**)( param_1 + 8 );
      lVar15 = *(long*)( *(long*)( *(long*)( param_1 + 0x880 ) + 0x20 ) + 8 );
      if (lVar15 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xbad, "tls_process_cke_rsa");
         ossl_statem_fatal(param_1, 0x50, 0xa8, 0);
      } else {
         uVar8 = param_2[1];
         puVar19 = (ushort*)*param_2;
         if (( *(uint*)( param_1 + 0x48 ) & 0xfffffdff ) == 0x100) {
            LAB_00105f85:local_110 = 0x30;
            out = (uchar*)CRYPTO_malloc(0x30, "ssl/statem/statem_srvr.c", 0xbbd);
            if (out == (uchar*)0x0) {
               ERR_new();
               pcVar9 = "tls_process_cke_rsa";
               uVar6 = 0xbbf;
               LAB_00106d77:ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, pcVar9);
               ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
            } else {
               pEVar5 = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(*puVar7, lVar15, puVar7[0x8e]);
               if (pEVar5 == (EVP_PKEY_CTX*)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_srvr.c", 0xbc5, "tls_process_cke_rsa");
                  ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
                  CRYPTO_free(out);
                  EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
               } else {
                  iVar3 = EVP_PKEY_decrypt_init(pEVar5);
                  if (( iVar3 < 1 ) || ( iVar3 = iVar3 < 1 )) {
                     ERR_new();
                     uVar6 = 0xbd6;
                     LAB_00106479:ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, "tls_process_cke_rsa");
                     ossl_statem_fatal(param_1, 0x33, 0x93, 0);
                  } else {
                     OSSL_PARAM_construct_uint(&local_148, "tls-client-version", param_1 + 0x9d4);
                     local_e8 = local_128;
                     puVar7 = local_e0;
                     local_108 = local_148;
                     uStack_100 = uStack_140;
                     local_f8 = local_138;
                     uStack_f0 = uStack_130;
                     if (( *(byte*)( param_1 + 0x9b2 ) & 0x80 ) != 0) {
                        OSSL_PARAM_construct_uint(&local_148, "tls-negotiated-version", param_1 + 0x48);
                        puVar7 = local_b8;
                     }
                     OSSL_PARAM_construct_end(&local_148);
                     *puVar7 = local_148;
                     puVar7[1] = uStack_140;
                     puVar7[2] = local_138;
                     puVar7[3] = uStack_130;
                     puVar7[4] = local_128;
                     iVar3 = EVP_PKEY_CTX_set_params(pEVar5, &local_108);
                     if (( iVar3 == 0 ) || ( iVar3 = EVP_PKEY_decrypt(pEVar5, out, &local_110, (uchar*)puVar19, uVar8) ),iVar3 < 1) {
                        ERR_new();
                        uVar6 = 0xbe6;
                        goto LAB_00106479;
                     }
                     if (local_110 != 0x30) {
                        OPENSSL_cleanse(out, 0x30);
                        ERR_new();
                        uVar6 = 0xbf0;
                        goto LAB_00106479;
                     }
                     iVar3 = ssl_generate_master_secret(param_1, out, 0x30, 0);
                     if (iVar3 != 0) {
                        CRYPTO_free(out);
                        EVP_PKEY_CTX_free(pEVar5);
                        goto LAB_00105ea0;
                     }
                  }
                  CRYPTO_free(out);
                  EVP_PKEY_CTX_free(pEVar5);
               }
            }
         } else {
            if (1 < uVar8) {
               uVar14 = uVar8 - 2;
               uVar8 = ( ulong )(ushort)(*puVar19 << 8 | *puVar19 >> 8);
               if (uVar8 <= uVar14) {
                  puVar19 = puVar19 + 1;
                  sVar13 = uVar14 - uVar8;
                  param_2[1] = sVar13;
                  *param_2 = (long)puVar19 + uVar8;
                  if (sVar13 == 0) goto LAB_00105f85;
               }
            }
            ERR_new();
            pcVar9 = "tls_process_cke_rsa";
            uVar6 = 2999;
            LAB_001061f7:ERR_set_debug("ssl/statem/statem_srvr.c", uVar6, pcVar9);
            ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
         }
      }
   }
   LAB_00105ef0:CRYPTO_clear_free(*(undefined8*)( param_1 + 0x3c0 ), *(undefined8*)( param_1 + 0x3c8 ), "ssl/statem/statem_srvr.c", 0xd86);
   uVar6 = 0;
   *(undefined8*)( param_1 + 0x3c0 ) = 0;
   *(undefined8*)( param_1 + 0x3c8 ) = 0;
   LAB_00105f23:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}char tls_post_process_client_key_exchange(long param_1) {
   int iVar1;
   undefined8 uVar2;
   if (( *(int*)( param_1 + 0xc4 ) == 0 ) && ( ( *(long*)( *(long*)( param_1 + 0x900 ) + 0x2b8 ) != 0 || ( *(long*)( *(long*)( param_1 + 0x900 ) + 0x2c0 ) != 0 ) ) )) {
      uVar2 = 1;
      if (*(long*)( param_1 + 0x1a8 ) == 0) {
         ERR_new(param_1, 1);
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xdbd, "tls_post_process_client_key_exchange");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return '\0';
      }
   } else {
      uVar2 = 0;
   }
   iVar1 = ssl3_digest_cached_records(param_1, uVar2);
   return ( iVar1 != 0 ) * '\x02';
}undefined8 ossl_statem_server_post_process_message(long param_1) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0xac ) == 0x16) {
      uVar1 = tls_post_process_client_hello();
      return uVar1;
   }
   if (*(int*)( param_1 + 0xac ) != 0x20) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_srvr.c", 0x53c, "ossl_statem_server_post_process_message");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }
   uVar1 = tls_post_process_client_key_exchange();
   return uVar1;
}undefined4 tls_process_client_rpk(long param_1, undefined8 param_2) {
   EVP_PKEY *pEVar1;
   int iVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (EVP_PKEY*)0x0;
   iVar2 = tls_process_rpk(param_1, param_2, &local_28);
   if (iVar2 == 0) {
      LAB_0010713b:uVar3 = 0;
   } else {
      if (local_28 == (EVP_PKEY*)0x0) {
         if (( ~*(uint *)(param_1 + 0x950) & 3 ) == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xddb, "tls_process_client_rpk");
            uVar5 = 199;
            uVar3 = 0x74;
            goto LAB_00107131;
         }
      } else {
         iVar2 = ssl_verify_rpk(param_1);
         if (iVar2 < 1) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xde1, "tls_process_client_rpk");
            uVar3 = ssl_x509err2alert(*(undefined4*)( param_1 + 0x998 ));
            uVar5 = 0x86;
            LAB_00107131:ossl_statem_fatal(param_1, uVar3, uVar5, 0);
            goto LAB_0010713b;
         }
      }
      lVar4 = *(long*)( param_1 + 0x900 );
      if (*(int*)( param_1 + 0xba8 ) == 4) {
         lVar4 = ssl_session_dup(lVar4, 0);
         if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0xdf1, "tls_process_client_rpk");
            ossl_statem_fatal(param_1, 0x50, 0xc0100, 0);
            uVar3 = 0;
            goto LAB_001070d7;
         }
         SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
         *(long*)( param_1 + 0x900 ) = lVar4;
      }
      X509_free(*(X509**)( lVar4 + 0x2c0 ));
      lVar4 = *(long*)( param_1 + 0x900 );
      *(undefined8*)( lVar4 + 0x2c0 ) = 0;
      OPENSSL_sk_pop_free(*(undefined8*)( lVar4 + 0x2c8 ), X509_free);
      lVar4 = *(long*)( param_1 + 0x900 );
      *(undefined8*)( lVar4 + 0x2c8 ) = 0;
      EVP_PKEY_free(*(EVP_PKEY**)( lVar4 + 0x2b8 ));
      pEVar1 = local_28;
      lVar4 = *(long*)( param_1 + 0x900 );
      local_28 = (EVP_PKEY*)0x0;
      *(EVP_PKEY**)( lVar4 + 0x2b8 ) = pEVar1;
      *(undefined8*)( lVar4 + 0x2d0 ) = *(undefined8*)( param_1 + 0x998 );
      if (( ( ( *(uint*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar2 )) {
         iVar2 = ssl3_digest_cached_records(param_1, 1);
         if (iVar2 != 0) {
            iVar2 = ssl_handshake_hash(param_1, param_1 + 0x888, 0x40, param_1 + 0x8c8);
            if (iVar2 != 0) {
               *(undefined8*)( param_1 + 0x1558 ) = 0;
               uVar3 = 3;
               goto LAB_001070d7;
            }
         }
         uVar3 = 0;
      } else {
         uVar3 = 3;
      }
   }
   LAB_001070d7:EVP_PKEY_free(local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 tls_process_client_certificate(long param_1, long *param_2) {
   byte *a;
   undefined8 *puVar1;
   code *pcVar2;
   void *b;
   int iVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   long lVar6;
   X509 *pXVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   byte *pbVar13;
   ushort *puVar14;
   long in_FS_OFFSET;
   X509 *local_70;
   ushort *local_68;
   void *local_60;
   ushort *local_58;
   ulong local_50;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (X509*)0x0;
   pcVar2 = *(code**)( *(long*)( param_1 + 0xc70 ) + 0x68 );
   if (pcVar2 != (code*)0x0) {
      ( *pcVar2 )(*(undefined8*)( param_1 + 0xc80 ), 0);
   }
   if (*(char*)( param_1 + 0xb50 ) == '\x02') {
      uVar4 = tls_process_client_rpk(param_1, param_2);
      goto LAB_0010744a;
   }
   if (*(char*)( param_1 + 0xb50 ) == '\0') {
      lVar6 = OPENSSL_sk_new_null();
      if (lVar6 == 0) {
         ERR_new();
         uVar4 = 0;
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xe41, "tls_process_client_certificate");
         ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
      } else {
         uVar10 = param_2[1];
         pbVar13 = (byte*)*param_2;
         if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 ) || ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 == 0x10000 )) goto LAB_00107277;
         if (uVar10 != 0) {
            uVar12 = ( ulong ) * pbVar13;
            if (uVar12 <= uVar10 - 1) {
               a = pbVar13 + 1;
               b = *(void**)( param_1 + 0xbb0 );
               uVar10 = ( uVar10 - 1 ) - uVar12;
               pbVar13 = a + uVar12;
               param_2[1] = uVar10;
               *param_2 = (long)pbVar13;
               if (b == (void*)0x0) {
                  if (uVar12 == 0) {
                     LAB_00107277:if (uVar10 < 3) {
                        LAB_001073c0:ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0xe51, "tls_process_client_certificate");
                        ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
                     } else {
                        puVar14 = (ushort*)( pbVar13 + 3 );
                        uVar12 = ( ulong ) * pbVar13 << 0x10 | (ulong)pbVar13[1] << 8 | (ulong)pbVar13[2];
                        if (uVar10 - 3 < uVar12) goto LAB_001073c0;
                        lVar11 = ( uVar10 - 3 ) - uVar12;
                        *param_2 = (long)( (long)puVar14 + uVar12 );
                        param_2[1] = lVar11;
                        if (lVar11 != 0) goto LAB_001073c0;
                        while (uVar12 != 0) {
                           if (uVar12 < 3) {
                              LAB_001074d0:ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe58, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x32, 0x87, 0);
                              goto LAB_00107438;
                           }
                           uVar10 = ( ulong )(byte) * puVar14 << 0x10 | ( ulong ) * (byte*)( (long)puVar14 + 1 ) << 8 | (ulong)(byte)puVar14[1];
                           if (uVar12 - 3 < uVar10) goto LAB_001074d0;
                           local_68 = (ushort*)( (long)puVar14 + 3 );
                           uVar12 = ( uVar12 - 3 ) - uVar10;
                           puVar14 = (ushort*)( (long)local_68 + uVar10 );
                           local_70 = (X509*)X509_new_ex(*puVar1, puVar1[0x8e]);
                           if (local_70 == (X509*)0x0) {
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe5f, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x32, 0x8000b, 0);
                              goto LAB_00107438;
                           }
                           pXVar7 = d2i_X509(&local_70, (uchar**)&local_68, uVar10);
                           if (pXVar7 == (X509*)0x0) {
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe63, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x32, 0x8000d, 0);
                              goto LAB_00107438;
                           }
                           if (local_68 != puVar14) {
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe68, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x32, 0x87, 0);
                              goto LAB_00107438;
                           }
                           if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) {
                              local_60 = (void*)0x0;
                              if (1 < uVar12) {
                                 uVar10 = ( ulong )(ushort)(*puVar14 << 8 | *puVar14 >> 8);
                                 if (uVar10 <= uVar12 - 2) {
                                    uVar12 = ( uVar12 - 2 ) - uVar10;
                                    local_58 = puVar14 + 1;
                                    puVar14 = (ushort*)( (long)local_58 + uVar10 );
                                    local_50 = uVar10;
                                    iVar3 = tls_collect_extensions(param_1, &local_58, 0x1000, &local_60, 0, lVar11 == 0);
                                    if (iVar3 != 0) {
                                       iVar3 = tls_parse_all_extensions(param_1, 0x1000, local_60, local_70, lVar11, uVar12 == 0);
                                       if (iVar3 != 0) {
                                          CRYPTO_free(local_60);
                                          goto LAB_0010738d;
                                       }
                                    }
                                    uVar4 = 0;
                                    CRYPTO_free(local_60);
                                    goto LAB_00107438;
                                 }
                              }
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe71, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x32, 0x10f, 0);
                              goto LAB_00107438;
                           }
                           LAB_0010738d:iVar3 = OPENSSL_sk_push(lVar6);
                           if (iVar3 == 0) {
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe81, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
                              goto LAB_00107438;
                           }
                           local_70 = (X509*)0x0;
                           lVar11 = lVar11 + 1;
                        };
                        iVar3 = OPENSSL_sk_num(lVar6);
                        if (0 < iVar3) {
                           iVar3 = ssl_verify_cert_chain(param_1, lVar6);
                           if (iVar3 < 1) {
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xe9e, "tls_process_client_certificate");
                              uVar5 = ssl_x509err2alert(*(undefined4*)( param_1 + 0x998 ));
                              ossl_statem_fatal(param_1, uVar5, 0x86, 0);
                           } else {
                              uVar9 = OPENSSL_sk_value(lVar6, 0);
                              lVar11 = X509_get0_pubkey(uVar9);
                              if (lVar11 != 0) goto LAB_0010770b;
                              ERR_new();
                              uVar4 = 0;
                              ERR_set_debug("ssl/statem/statem_srvr.c", 0xea4, "tls_process_client_certificate");
                              ossl_statem_fatal(param_1, 0x28, 0xf7, 0);
                           }
                           goto LAB_00107438;
                        }
                        if (*(int*)( param_1 + 0x48 ) == 0x300) {
                           ERR_new();
                           uVar4 = 0;
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0xe8a, "tls_process_client_certificate");
                           ossl_statem_fatal(param_1, 0x28, 0xb0, 0);
                           goto LAB_00107438;
                        }
                        if (( ~*(uint *)(param_1 + 0x950) & 3 ) == 0) {
                           ERR_new();
                           uVar4 = 0;
                           ERR_set_debug("ssl/statem/statem_srvr.c", 0xe91, "tls_process_client_certificate");
                           ossl_statem_fatal(param_1, 0x74, 199, 0);
                           goto LAB_00107438;
                        }
                        if (*(long*)( param_1 + 0x1a8 ) == 0) {
                           LAB_0010770b:lVar11 = *(long*)( param_1 + 0x900 );
                           if (*(int*)( param_1 + 0xba8 ) == 4) {
                              lVar11 = ssl_session_dup(lVar11, 0);
                              if (lVar11 == 0) {
                                 ERR_new();
                                 uVar4 = 0;
                                 ERR_set_debug("ssl/statem/statem_srvr.c", 0xeb4, "tls_process_client_certificate");
                                 ossl_statem_fatal(param_1, 0x50, 0x80014, 0);
                                 goto LAB_00107438;
                              }
                              SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
                              *(long*)( param_1 + 0x900 ) = lVar11;
                           }
                           X509_free(*(X509**)( lVar11 + 0x2c0 ));
                           lVar11 = *(long*)( param_1 + 0x900 );
                           uVar8 = OPENSSL_sk_shift(lVar6);
                           uVar9 = *(undefined8*)( param_1 + 0x998 );
                           *(undefined8*)( lVar11 + 0x2c0 ) = uVar8;
                           lVar11 = *(long*)( param_1 + 0x900 );
                           *(undefined8*)( lVar11 + 0x2d0 ) = uVar9;
                           OSSL_STACK_OF_X509_free(*(undefined8*)( lVar11 + 0x2c8 ));
                           lVar11 = *(long*)( param_1 + 0x900 );
                           *(long*)( lVar11 + 0x2c8 ) = lVar6;
                           EVP_PKEY_free(*(EVP_PKEY**)( lVar11 + 0x2b8 ));
                           *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x2b8 ) = 0;
                           if (( ( ( *(uint*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 != 0x10000 )) {
                              iVar3 = ssl3_digest_cached_records(param_1, 1);
                              if (iVar3 == 0) {
                                 LAB_00107a8d:lVar6 = 0;
                                 uVar4 = 0;
                                 goto LAB_00107438;
                              }
                              if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 != 0x10000 )) {
                                 iVar3 = ssl_handshake_hash(param_1, param_1 + 0x888, 0x40, param_1 + 0x8c8);
                                 if (iVar3 == 0) goto LAB_00107a8d;
                                 *(undefined8*)( param_1 + 0x1558 ) = 0;
                              }
                           }
                           lVar6 = 0;
                           uVar4 = 3;
                           goto LAB_00107438;
                        }
                        iVar3 = ssl3_digest_cached_records(param_1, 0);
                        if (iVar3 != 0) goto LAB_0010770b;
                     }
                     uVar4 = 0;
                     goto LAB_00107438;
                  }
               } else if (*(ulong*)( param_1 + 3000 ) == uVar12) {
                  iVar3 = CRYPTO_memcmp(a, b, uVar12);
                  if (iVar3 == 0) {
                     uVar10 = param_2[1];
                     pbVar13 = (byte*)*param_2;
                     goto LAB_00107277;
                  }
               }
            }
         }
         ERR_new();
         uVar4 = 0;
         ERR_set_debug("ssl/statem/statem_srvr.c", 0xe4b, "tls_process_client_certificate");
         ossl_statem_fatal(param_1, 0x32, 0x11a, 0);
      }
   } else {
      ERR_new();
      lVar6 = 0;
      uVar4 = 0;
      ERR_set_debug("ssl/statem/statem_srvr.c", 0xe3b, "tls_process_client_certificate");
      ossl_statem_fatal(param_1, 0x2b, 0xf7, 0);
   }
   LAB_00107438:X509_free(local_70);
   OSSL_STACK_OF_X509_free(lVar6);
   LAB_0010744a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_cert_status_body(long param_1, undefined8 param_2) {
   int iVar1;
   iVar1 = WPACKET_put_bytes__(param_2, (long)*(int*)( param_1 + 0xa28 ), 1);
   if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0xa50 ), *(undefined8*)( param_1 + 0xa58 ), 3);
      if (iVar1 != 0) {
         return 1;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/statem_srvr.c", 0x10ea, "tls_construct_cert_status_body");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}bool tls_construct_cert_status(void) {
   int iVar1;
   iVar1 = tls_construct_cert_status_body();
   return iVar1 != 0;
}undefined8 tls_process_next_proto(long param_1, long *param_2) {
   byte *pbVar1;
   byte *pbVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   if (param_2[1] != 0) {
      uVar5 = ( ulong ) * (byte*)*param_2;
      uVar3 = param_2[1] - 1;
      if (uVar5 <= uVar3) {
         pbVar1 = (byte*)*param_2 + 1;
         lVar4 = uVar3 - uVar5;
         pbVar2 = pbVar1 + uVar5;
         param_2[1] = lVar4;
         *param_2 = (long)pbVar2;
         if (lVar4 != 0) {
            uVar3 = ( ulong ) * pbVar2;
            if (uVar3 <= lVar4 - 1U) {
               lVar4 = ( lVar4 - 1U ) - uVar3;
               *param_2 = (long)( pbVar2 + uVar3 + 1 );
               param_2[1] = lVar4;
               if (lVar4 == 0) {
                  CRYPTO_free(*(void**)( param_1 + 0xb00 ));
                  *(undefined8*)( param_1 + 0xb00 ) = 0;
                  if (uVar5 != 0) {
                     lVar4 = CRYPTO_memdup(pbVar1, uVar5, "include/internal/packet.h", 0x1cf);
                     *(long*)( param_1 + 0xb00 ) = lVar4;
                     if (lVar4 == 0) {
                        *(undefined8*)( param_1 + 0xb08 ) = 0;
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_srvr.c", 0x1115, "tls_process_next_proto");
                        ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                        return 0;
                     }
                  }
                  *(ulong*)( param_1 + 0xb08 ) = uVar5;
                  return 3;
               }
            }
         }
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/statem_srvr.c", 0x110f, "tls_process_next_proto");
   ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   return 0;
}undefined8 tls_process_end_of_early_data(long param_1, long param_2) {
   int iVar1;
   if (*(long*)( param_2 + 8 ) == 0) {
      if (*(int*)( param_1 + 0xf0 ) - 10U < 2) {
         iVar1 = RECORD_LAYER_processed_read_pending(param_1 + 0xc58);
         if (iVar1 == 0) {
            *(undefined4*)( param_1 + 0xf0 ) = 0xc;
            iVar1 = ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x10 ) )(param_1, 0xa1);
            if (iVar1 != 0) {
               return 3;
            }
         } else {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_srvr.c", 0x113d, "tls_process_end_of_early_data");
            ossl_statem_fatal(param_1, 10, 0xb6, 0);
         }
      } else {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_srvr.c", 0x1134, "tls_process_end_of_early_data");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      }
   } else {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_srvr.c", 0x112e, "tls_process_end_of_early_data");
      ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   }
   return 0;
}undefined8 ossl_statem_server_process_message(long param_1) {
   undefined8 uVar1;
   switch (*(undefined4*)( param_1 + 0xac )) {
      case 0x16:
    uVar1 = tls_process_client_hello();
    return uVar1;
      default:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_srvr.c",0x508,"ossl_statem_server_process_message");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    return 0;
      case 0x1e:
    uVar1 = tls_process_client_certificate();
    return uVar1;
      case 0x20:
    uVar1 = tls_process_client_key_exchange();
    return uVar1;
      case 0x21:
    uVar1 = tls_process_cert_verify();
    return uVar1;
      case 0x22:
    uVar1 = tls_process_next_proto();
    return uVar1;
      case 0x23:
    uVar1 = tls_process_change_cipher_spec();
    return uVar1;
      case 0x24:
    uVar1 = tls_process_finished();
    return uVar1;
      case 0x30:
    uVar1 = tls_process_key_update();
    return uVar1;
      case 0x35:
    uVar1 = tls_process_end_of_early_data();
    return uVar1;
   }
}
