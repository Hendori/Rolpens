uint cipher_compare(long param_1, long param_2) {
   uint uVar1;
   uVar1 = 0;
   if (*(uint*)( param_1 + 0x18 ) != *(uint*)( param_2 + 0x18 )) {
      uVar1 = -(uint)(*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x18)) | 1;
   }
   return uVar1;
}void sslcon_undefined_function_1(void) {
   ssl_undefined_function();
   return;
}ulong ssl3_set_handshake_header(undefined8 param_1, undefined8 param_2, int param_3) {
   int iVar1;
   ulong uVar2;
   if (param_3 == 0x101) {
      return 1;
   }
   uVar2 = WPACKET_put_bytes__(param_2, (long)param_3, 1);
   if ((int)uVar2 == 0) {
      return uVar2;
   }
   iVar1 = WPACKET_start_sub_packet_len__(param_2, 3);
   return ( ulong )(iVar1 != 0);
}void ssl3_handshake_write(undefined8 param_1) {
   ssl3_do_write(param_1, 0x16);
   return;
}char *srp_password_from_info_cb(uint *param_1) {
   char *pcVar1;
   if (param_1 == (uint*)0x0) {
      return (char*)0x0;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001000c4;
      }
      return (char*)0x0;
   }
   LAB_001000c4:pcVar1 = CRYPTO_strdup(*(char**)( param_1 + 0x30e ), "ssl/s3_lib.c", 0xdc7);
   return pcVar1;
}void ssl_sort_cipher_list(void) {
   qsort(tls13_ciphers, 7, 0x50, cipher_compare);
   qsort(ssl3_ciphers, 0xa7, 0x50, cipher_compare);
   qsort(ssl3_scsvs, 2, 0x50, cipher_compare);
   return;
}undefined8 ssl3_default_timeout(void) {
   return 7200000000000;
}undefined8 ssl3_num_ciphers(void) {
   return 0xa7;
}undefined1 *ssl3_get_cipher(uint param_1) {
   undefined1 *puVar1;
   puVar1 = (undefined1*)0x0;
   if (param_1 < 0xa7) {
      puVar1 = ssl3_ciphers + ( 0xa6 - (ulong)param_1 ) * 0x50;
   }
   return puVar1;
}bool ssl3_new(uint *param_1) {
   int iVar1;
   uint *puVar2;
   if (param_1 == (uint*)0x0) {
      return false;
   }
   puVar2 = param_1;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return false;
      }
      puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (puVar2 == (uint*)0x0) {
         return false;
      }
   }
   iVar1 = ssl_srp_ctx_init_intern(puVar2);
   if (iVar1 == 0) {
      return false;
   }
   iVar1 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x30 ) )(param_1);
   return iVar1 != 0;
}void ssl3_free(uint *param_1) {
   EVP_PKEY *pkey;
   ulong uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   if (param_1 == (uint*)0x0) {
      return;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_0010024d;
      }
      return;
   }
   LAB_0010024d:uVar2 = 0;
   ssl3_cleanup_key_block(param_1);
   EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x138 ));
   uVar1 = *(ulong*)( param_1 + 0xce );
   param_1[0x138] = 0;
   param_1[0x139] = 0;
   if (uVar1 != 0) {
      do {
         pkey = *(EVP_PKEY**)( param_1 + uVar2 * 2 + 0xc4 );
         if (pkey != (EVP_PKEY*)0x0) {
            if (pkey == *(EVP_PKEY**)( param_1 + 0xc2 )) {
               param_1[0xc2] = 0;
               param_1[0xc3] = 0;
            }
            EVP_PKEY_free(pkey);
            uVar1 = *(ulong*)( param_1 + 0xce );
            ( param_1 + uVar2 * 2 + 0xc4 )[0] = 0;
            ( param_1 + uVar2 * 2 + 0xc4 )[1] = 0;
         }
         uVar2 = uVar2 + 1;
      } while ( uVar2 < uVar1 );
   }
   param_1[0xce] = 0;
   param_1[0xcf] = 0;
   if (*(EVP_PKEY**)( param_1 + 0xc2 ) != (EVP_PKEY*)0x0) {
      EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0xc2 ));
      param_1[0xc2] = 0;
      param_1[0xc3] = 0;
   }
   ssl_evp_cipher_free(*(undefined8*)( param_1 + 0xdc ));
   ssl_evp_md_free(*(undefined8*)( param_1 + 0xde ));
   CRYPTO_free(*(void**)( param_1 + 0xd2 ));
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0xd6 ), &X509_NAME_free);
   CRYPTO_free(*(void**)( param_1 + 0xe8 ));
   CRYPTO_clear_free(*(undefined8*)( param_1 + 0xec ), *(undefined8*)( param_1 + 0xee ), "ssl/s3_lib.c", 0xd6e);
   CRYPTO_free(*(void**)( param_1 + 0xf8 ));
   CRYPTO_free(*(void**)( param_1 + 0xfa ));
   CRYPTO_free(*(void**)( param_1 + 0x102 ));
   ssl3_free_digest_list(param_1);
   CRYPTO_free(*(void**)( param_1 + 0x12e ));
   CRYPTO_free(*(void**)( param_1 + 0x132 ));
   ossl_quic_tls_free(*(undefined8*)( param_1 + 0x56 ));
   CRYPTO_free(*(void**)( param_1 + 0xf0 ));
   ssl_srp_ctx_free_intern(param_1);
   param_1[0x58] = 0;
   param_1[0x59] = 0;
   param_1[0x13a] = 0;
   param_1[0x13b] = 0;
   puVar3 = (undefined8*)( ( ulong )(param_1 + 0x5a) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 0x5a) & 0xfffffffffffffff8 ) ) + 0x4f0U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }
   return;
}undefined8 ssl3_clear(uint *param_1) {
   EVP_PKEY *pkey;
   undefined8 uVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   byte bVar6;
   bVar6 = 0;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }
      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return 0;
      }
   }
   uVar4 = 0;
   ssl3_cleanup_key_block(param_1);
   CRYPTO_free(*(void**)( param_1 + 0xd2 ));
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0xd6 ), &X509_NAME_free);
   CRYPTO_free(*(void**)( param_1 + 0xe8 ));
   CRYPTO_clear_free(*(undefined8*)( param_1 + 0xec ), *(undefined8*)( param_1 + 0xee ), "ssl/s3_lib.c", 0xd8e);
   CRYPTO_free(*(void**)( param_1 + 0xf8 ));
   CRYPTO_free(*(void**)( param_1 + 0xfa ));
   CRYPTO_free(*(void**)( param_1 + 0x102 ));
   EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x138 ));
   uVar3 = *(ulong*)( param_1 + 0xce );
   if (uVar3 != 0) {
      do {
         pkey = *(EVP_PKEY**)( param_1 + uVar4 * 2 + 0xc4 );
         if (pkey != (EVP_PKEY*)0x0) {
            if (pkey == *(EVP_PKEY**)( param_1 + 0xc2 )) {
               param_1[0xc2] = 0;
               param_1[0xc3] = 0;
            }
            EVP_PKEY_free(pkey);
            uVar3 = *(ulong*)( param_1 + 0xce );
            ( param_1 + uVar4 * 2 + 0xc4 )[0] = 0;
            ( param_1 + uVar4 * 2 + 0xc4 )[1] = 0;
         }
         uVar4 = uVar4 + 1;
      } while ( uVar4 < uVar3 );
   }
   param_1[0xce] = 0;
   param_1[0xcf] = 0;
   if (*(EVP_PKEY**)( param_1 + 0xc2 ) != (EVP_PKEY*)0x0) {
      EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0xc2 ));
      param_1[0xc2] = 0;
      param_1[0xc3] = 0;
   }
   ssl3_free_digest_list(param_1);
   CRYPTO_free(*(void**)( param_1 + 0x12e ));
   CRYPTO_free(*(void**)( param_1 + 0x132 ));
   uVar1 = *(undefined8*)( param_1 + 0x58 );
   param_1[0x13a] = 0;
   param_1[0x13b] = 0;
   puVar5 = (undefined8*)( ( ulong )(param_1 + 0x5a) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 0x5a) & 0xfffffffffffffff8 ) ) + 0x4f0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }
   *(ulong*)( param_1 + 0x58 ) = ( ulong )((uint)uVar1 & 0x6000);
   iVar2 = ssl_free_wbio_buffer(param_1);
   if (iVar2 == 0) {
      return 0;
   }
   param_1[0x12] = 0x300;
   CRYPTO_free(*(void**)( param_1 + 0x2c0 ));
   for (int i_385 = 0; i_385 < 4; i_385++) {
      param_1[( i_385 + 704 )] = 0;
   }
   return 1;
}ulong ssl3_ctrl(uint *param_1, undefined4 param_2, ulong param_3, long *param_4) {
   long *plVar1;
   long lVar2;
   undefined4 uVar3;
   uint uVar4;
   int iVar5;
   uint *puVar6;
   ulong uVar7;
   EVP_PKEY *pkey;
   size_t sVar8;
   char *pcVar9;
   long lVar10;
   long lVar11;
   undefined8 uVar12;
   undefined2 uVar13;
   long lVar14;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar6 = param_1;
   if (( *param_1 != 0 ) && ( ( ( *param_1 & 0x80 ) == 0 || ( puVar6 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar6 == (uint*)0x0 ) )) goto switchD_001006b4_caseD_5;
   switch (param_2) {
      case 3:
    if (param_4 == (long *)0x0) {
      ERR_new();
      uVar12 = 0xdea;
      goto LAB_00100ef2;
    }
    pkey = (EVP_PKEY *)ssl_dh_to_pkey(param_4);
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c",0xdef,__func___6);
      ERR_set_error(0x14,0x80005,0);
    }
    else {
      iVar5 = SSL_set0_tmp_dh_pkey(param_1,pkey);
      if (iVar5 != 0) goto LAB_00100700;
      EVP_PKEY_free(pkey);
    }
    goto switchD_001006b4_caseD_5;
      case 4:
    if (param_4 != (long *)0x0) {
      iVar5 = ssl_set_tmp_ecdh_groups
                        (puVar6 + 0x2a4,puVar6 + 0x2a2,puVar6 + 0x2ac,puVar6 + 0x2aa,puVar6 + 0x2b0,
                         puVar6 + 0x2ae,param_4);
      return (long)iVar5;
    }
    ERR_new();
    uVar12 = 0xe06;
LAB_00100ef2:
    ERR_set_debug("ssl/s3_lib.c",uVar12,__func___6);
    ERR_set_error(0x14,0xc0102,0);
      default:
    goto switchD_001006b4_caseD_5;
      case 6:
    ERR_new();
    ERR_set_debug("ssl/s3_lib.c",0xdfb,__func___6);
    ERR_set_error(0x14,0xc0101,0);
    goto switchD_001006b4_caseD_5;
      case 10:
    uVar7 = (ulong)(int)puVar6[0x75];
    break;
      case 0xb:
    uVar7 = (ulong)(int)puVar6[0x75];
    puVar6[0x75] = 0;
    break;
      case 0xc:
    uVar7 = (ulong)(int)puVar6[0x74];
    break;
      case 0xd:
    uVar7 = (ulong)(int)puVar6[0x58];
    break;
      case 0x10:
    *(long **)(puVar6 + 0x140) = param_4;
    goto LAB_00100700;
      case 0x37:
    if (param_3 == 0) {
      CRYPTO_free(*(void **)(puVar6 + 0x288));
      puVar6[0x288] = 0;
      puVar6[0x289] = 0;
      if (param_4 == (long *)0x0) goto LAB_00100700;
      sVar8 = strlen((char *)param_4);
      if (sVar8 - 1 < 0xff) {
        pcVar9 = CRYPTO_strdup((char *)param_4,"ssl/s3_lib.c",0xe29);
        *(char **)(puVar6 + 0x288) = pcVar9;
        if (pcVar9 != (char *)0x0) goto LAB_00100700;
        ERR_new();
        ERR_set_debug("ssl/s3_lib.c",0xe2a,__func___6);
        ERR_set_error(0x14,0xc0103,0);
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/s3_lib.c",0xe26,__func___6);
        ERR_set_error(0x14,0x13f,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c",0xe2e,__func___6);
      ERR_set_error(0x14,0x140,0);
    }
    goto switchD_001006b4_caseD_5;
      case 0x39:
    *(long **)(puVar6 + 0x286) = param_4;
    goto LAB_00100700;
      case 0x41:
    puVar6[0x28a] = (uint)param_3;
    goto LAB_00100700;
      case 0x42:
    *param_4 = *(long *)(puVar6 + 0x292);
    goto LAB_00100700;
      case 0x43:
    *(long **)(puVar6 + 0x292) = param_4;
    goto LAB_00100700;
      case 0x44:
    *param_4 = *(long *)(puVar6 + 0x290);
    goto LAB_00100700;
      case 0x45:
    *(long **)(puVar6 + 0x290) = param_4;
    goto LAB_00100700;
      case 0x46:
    *param_4 = *(long *)(puVar6 + 0x294);
    uVar7 = *(ulong *)(puVar6 + 0x296);
    if ((long)uVar7 < 1) {
      uVar7 = 0xffffffffffffffff;
    }
    break;
      case 0x47:
    CRYPTO_free(*(void **)(puVar6 + 0x294));
    *(long **)(puVar6 + 0x294) = param_4;
    *(ulong *)(puVar6 + 0x296) = param_3;
    goto LAB_00100700;
      case 0x58:
    if (param_3 == 0) {
      iVar5 = ssl_cert_set0_chain(puVar6,0,param_4);
      uVar7 = (ulong)iVar5;
    }
    else {
      iVar5 = ssl_cert_set1_chain();
      uVar7 = (ulong)iVar5;
    }
    break;
      case 0x59:
    if (param_3 == 0) {
      iVar5 = ssl_cert_add0_chain_cert(puVar6,0,param_4);
      uVar7 = (ulong)iVar5;
    }
    else {
      iVar5 = ssl_cert_add1_chain_cert();
      uVar7 = (ulong)iVar5;
    }
    break;
      case 0x5a:
    if (*(long *)(puVar6 + 0x240) != 0) {
      lVar2 = *(long *)(puVar6 + 0x2a6);
      if ((param_4 != (long *)0x0) && (lVar2 != 0)) {
        lVar11 = *(long *)(puVar6 + 0x2a8);
        lVar14 = 0;
        do {
          while (lVar10 = tls1_group_id_lookup
                                    (*(undefined8 *)(param_1 + 2),
                                     *(undefined2 *)(lVar11 + lVar14 * 2)), lVar10 != 0) {
            uVar3 = tls1_group_id2nid(*(undefined2 *)(lVar10 + 0x1c),1);
            *(undefined4 *)((long)param_4 + lVar14 * 4) = uVar3;
            lVar14 = lVar14 + 1;
            if (lVar2 == lVar14) goto LAB_001009e2;
          }
          *(uint *)((long)param_4 + lVar14 * 4) = *(ushort *)(lVar11 + lVar14 * 2) | 0x1000000;
          lVar14 = lVar14 + 1;
        } while (lVar2 != lVar14);
      }
LAB_001009e2:
      return (long)(int)lVar2;
    }
    goto switchD_001006b4_caseD_5;
      case 0x5b:
    iVar5 = tls1_set_groups(puVar6 + 0x2a4,puVar6 + 0x2a2,puVar6 + 0x2ac,puVar6 + 0x2aa,
                            puVar6 + 0x2b0,puVar6 + 0x2ae,param_4,param_3);
    uVar7 = (ulong)iVar5;
    break;
      case 0x5c:
    iVar5 = tls1_set_groups_list
                      (*(undefined8 *)(param_1 + 2),puVar6 + 0x2a4,puVar6 + 0x2a2,puVar6 + 0x2ac,
                       puVar6 + 0x2aa,puVar6 + 0x2b0,puVar6 + 0x2ae,param_4);
    uVar7 = (ulong)iVar5;
    break;
      case 0x5d:
    uVar4 = tls1_shared_group(puVar6,param_3 & 0xffffffff);
    uVar7 = (ulong)(uVar4 & 0xffff);
    if (param_3 != 0xffffffffffffffff) {
      iVar5 = tls1_group_id2nid((short)uVar4,1,uVar4);
      uVar7 = (ulong)iVar5;
    }
    break;
      case 0x61:
    iVar5 = tls1_set_sigalgs(*(undefined8 *)(puVar6 + 0x220),param_4,param_3,0);
    uVar7 = (ulong)iVar5;
    break;
      case 0x62:
    iVar5 = tls1_set_sigalgs_list
                      (*(undefined8 *)(param_1 + 2),*(undefined8 *)(puVar6 + 0x220),param_4,0);
    uVar7 = (ulong)iVar5;
    break;
      case 0x65:
    iVar5 = tls1_set_sigalgs(*(undefined8 *)(puVar6 + 0x220),param_4,param_3,1);
    uVar7 = (ulong)iVar5;
    break;
      case 0x66:
    iVar5 = tls1_set_sigalgs_list
                      (*(undefined8 *)(param_1 + 2),*(undefined8 *)(puVar6 + 0x220),param_4,1);
    uVar7 = (ulong)iVar5;
    break;
      case 0x67:
    if ((puVar6[0x1e] == 0) && (puVar6[0xd0] != 0)) {
      if (param_4 != (long *)0x0) {
        *param_4 = *(long *)(puVar6 + 0xd2);
      }
      return *(ulong *)(puVar6 + 0xd4);
    }
    goto switchD_001006b4_caseD_5;
      case 0x68:
    if (puVar6[0x1e] != 0) {
      lVar2 = *(long *)(puVar6 + 0x220);
      CRYPTO_free(*(void **)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if ((param_4 == (long *)0x0) || (param_3 == 0)) goto LAB_00100700;
      if (param_3 < 0x100) {
        lVar11 = CRYPTO_memdup(param_4,param_3,"ssl/s3_lib.c",0x11df);
        *(long *)(lVar2 + 0x30) = lVar11;
        if (lVar11 != 0) {
          *(ulong *)(lVar2 + 0x38) = param_3;
          goto LAB_00100700;
        }
      }
    }
    goto switchD_001006b4_caseD_5;
      case 0x69:
    iVar5 = ssl_build_cert_chain(puVar6,0,param_3 & 0xffffffff);
    uVar7 = (ulong)iVar5;
    break;
      case 0x6a:
    iVar5 = ssl_cert_set_cert_store(*(undefined8 *)(puVar6 + 0x220),param_4,0,param_3 & 0xffffffff);
    uVar7 = (ulong)iVar5;
    break;
      case 0x6b:
    iVar5 = ssl_cert_set_cert_store(*(undefined8 *)(puVar6 + 0x220),param_4,1,param_3 & 0xffffffff);
    uVar7 = (ulong)iVar5;
    break;
      case 0x6c:
    lVar2 = *(long *)(puVar6 + 0x100);
    goto joined_r0x00100c3d;
      case 0x6d:
    if (((*(long *)(puVar6 + 0x240) != 0) && (*(long *)(puVar6 + 0x138) != 0)) &&
       (iVar5 = EVP_PKEY_up_ref(), iVar5 != 0)) {
      *param_4 = *(long *)(puVar6 + 0x138);
      goto LAB_00100700;
    }
    goto switchD_001006b4_caseD_5;
      case 0x6f:
    if (*(long *)(puVar6 + 0x2a0) != 0) {
      *param_4 = *(long *)(puVar6 + 0x2a0);
      return (long)(int)puVar6[0x29e];
    }
    goto switchD_001006b4_caseD_5;
      case 0x73:
    *param_4 = *(long *)(**(long **)(puVar6 + 0x220) + 0x10);
    goto LAB_00100700;
      case 0x74:
    iVar5 = ssl_cert_select_current(*(undefined8 *)(puVar6 + 0x220),param_4);
    uVar7 = (ulong)iVar5;
    break;
      case 0x75:
    if (param_3 != 3) {
      iVar5 = ssl_cert_set_current(*(undefined8 *)(puVar6 + 0x220),param_3);
      return (long)iVar5;
    }
    if ((puVar6[0x1e] != 0) && (*(long *)(puVar6 + 0xc0) != 0)) {
      if ((*(byte *)(*(long *)(puVar6 + 0xc0) + 0x20) & 0x44) != 0) {
        return 2;
      }
      if (*(long *)(puVar6 + 0xf6) != 0) {
        **(long **)(puVar6 + 0x220) = *(long *)(puVar6 + 0xf6);
        goto LAB_00100700;
      }
    }
    goto switchD_001006b4_caseD_5;
      case 0x76:
    *(uint *)(*(long *)(puVar6 + 0x220) + 0x18) = (uint)param_3;
LAB_00100700:
    uVar7 = 1;
    break;
      case 0x7f:
    uVar7 = (ulong)(int)puVar6[0x28a];
    break;
      case 0x84:
    lVar2 = *(long *)(puVar6 + 0xf4);
joined_r0x00100c3d:
    if (lVar2 != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(lVar2 + 0x14);
      goto LAB_00100700;
    }
    goto switchD_001006b4_caseD_5;
      case 0x85:
    if (((*(long *)(puVar6 + 0x240) != 0) && (*(long *)(puVar6 + 0xc2) != 0)) &&
       (iVar5 = EVP_PKEY_up_ref(), iVar5 != 0)) {
      *param_4 = *(long *)(puVar6 + 0xc2);
      goto LAB_00100700;
    }
    goto switchD_001006b4_caseD_5;
      case 0x86:
    if (((((*(byte *)(*(long *)(*(int **)(puVar6 + 6) + 0x36) + 0x50) & 8) == 0) &&
         (iVar5 = **(int **)(puVar6 + 6), 0x303 < iVar5)) && (iVar5 != 0x10000)) &&
       (*(char *)((long)puVar6 + 0x4dd) != '\0')) {
      uVar13 = *(undefined2 *)((long)puVar6 + 0x4de);
    }
    else {
      uVar13 = 0;
      if (*(long *)(puVar6 + 0x240) != 0) {
        uVar13 = *(undefined2 *)(*(long *)(puVar6 + 0x240) + 0x308);
      }
    }
    iVar5 = tls1_group_id2nid(uVar13,1);
    uVar7 = (ulong)iVar5;
    break;
      case 0x87:
    if (param_4 != (long *)0x0) {
      *param_4 = *(long *)(puVar6 + 0x2a8);
    }
    uVar7 = (ulong)(int)puVar6[0x2a6];
    break;
      case 0x89:
    iVar5 = ssl_cert_get_cert_store(*(undefined8 *)(puVar6 + 0x220),param_4,0);
    uVar7 = (ulong)iVar5;
    break;
      case 0x8a:
    iVar5 = ssl_cert_get_cert_store(*(undefined8 *)(puVar6 + 0x220),param_4,1);
    uVar7 = (ulong)iVar5;
    break;
      case 0x8c:
    if (param_4 != (long *)0x0) {
      plVar1 = *(long **)(puVar6 + 0xf4);
joined_r0x001006f2:
      if (plVar1 != (long *)0x0) {
        *param_4 = *plVar1;
        goto LAB_00100700;
      }
    }
    goto switchD_001006b4_caseD_5;
      case 0x8d:
    if (param_4 != (long *)0x0) {
      plVar1 = *(long **)(puVar6 + 0x100);
      goto joined_r0x001006f2;
    }
switchD_001006b4_caseD_5:
    uVar7 = 0;
   }
   return uVar7;
}undefined8 ssl3_callback_ctrl(uint *param_1, int param_2, undefined8 param_3) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }
      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return 0;
      }
   }
   if (param_2 == 0x38) {
      *(undefined8*)( param_1 + 0x284 ) = param_3;
   } else if (param_2 < 0x39) {
      if (param_2 == 6) {
         *(undefined8*)( *(long*)( param_1 + 0x220 ) + 0x10 ) = param_3;
      } else {
         if (param_2 != 0xf) {
            return 0;
         }
         *(undefined8*)( param_1 + 0x13e ) = param_3;
      }
   } else {
      if (param_2 != 0x4f) {
         return 0;
      }
      *(undefined8*)( param_1 + 0x314 ) = param_3;
   }
   return 1;
}long ssl3_ctx_ctrl(long param_1, int param_2, ulong param_3, long *param_4) {
   long *plVar1;
   int iVar2;
   EVP_PKEY *pkey;
   long lVar3;
   long lVar4;
   char *pcVar5;
   size_t sVar6;
   undefined8 uVar7;
   undefined4 uVar8;
   uVar8 = (undefined4)param_3;
   switch (param_2) {
      case 3:
    if (param_4 == (long *)0x0) {
      ERR_new();
      uVar7 = 0xf6a;
      goto LAB_00101757;
    }
    pkey = (EVP_PKEY *)ssl_dh_to_pkey(param_4);
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c",0xf6f,"ssl3_ctx_ctrl");
      ERR_set_error(0x14,0x80005,0);
    }
    else {
      iVar2 = SSL_CTX_set0_tmp_dh_pkey(param_1,pkey);
      if (iVar2 != 0) goto LAB_00101130;
      EVP_PKEY_free(pkey);
    }
    goto switchD_00101083_caseD_5;
      case 4:
    if (param_4 != (long *)0x0) {
      iVar2 = ssl_set_tmp_ecdh_groups
                        (param_1 + 0x298,param_1 + 0x290,param_1 + 0x2a8,param_1 + 0x2a0,
                         param_1 + 0x2b8,param_1 + 0x2b0,param_4);
      return (long)iVar2;
    }
    ERR_new();
    uVar7 = 0xf85;
LAB_00101757:
    ERR_set_debug("ssl/s3_lib.c",uVar7,"ssl3_ctx_ctrl");
    ERR_set_error(0x14,0xc0102,0);
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x5a:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 99:
      case 100:
      case 0x67:
      for (int i_388 = 0; i_388 < 7; i_388++) {
         case 0x6c:
      }
      for (int i_387 = 0; i_387 < 8; i_387++) {
         case 0x77:
      }
      for (int i_386 = 0; i_386 < 6; i_386++) {
         case 0x82:
      }
      case 0x88:
    goto switchD_00101083_caseD_5;
      case 6:
    ERR_new();
    ERR_set_debug("ssl/s3_lib.c",0xf7a,"ssl3_ctx_ctrl");
    ERR_set_error(0x14,0xc0101,0);
    goto switchD_00101083_caseD_5;
      case 0xe:
    lVar4 = *(long *)(param_1 + 0x110);
    if (lVar4 == 0) {
      lVar4 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 0x110) = lVar4;
      if (lVar4 != 0) goto LAB_00101285;
      ERR_new(0);
      uVar7 = 0x102b;
    }
    else {
LAB_00101285:
      iVar2 = OPENSSL_sk_push(lVar4,param_4);
      if (iVar2 != 0) goto LAB_00101130;
      ERR_new();
      uVar7 = 0x1030;
    }
    ERR_set_debug("ssl/s3_lib.c",uVar7,"ssl3_ctx_ctrl");
    ERR_set_error(0x14,0x8000f,0);
    goto switchD_00101083_caseD_5;
      case 0x36:
    *(long **)(param_1 + 0x238) = param_4;
    goto LAB_00101130;
      case 0x3a:
      case 0x3b:
    if (param_4 == (long *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 == 0x3b) {
        lVar4 = param_4[1];
        plVar1 = *(long **)(param_1 + 0x250);
        *(long *)(param_1 + 0x240) = *param_4;
        *(long *)(param_1 + 0x248) = lVar4;
        lVar4 = param_4[3];
        *plVar1 = param_4[2];
        plVar1[1] = lVar4;
        lVar4 = param_4[5];
        plVar1[2] = param_4[4];
        plVar1[3] = lVar4;
        lVar4 = *(long *)(param_1 + 0x250);
        lVar3 = param_4[7];
        *(long *)(lVar4 + 0x20) = param_4[6];
        *(long *)(lVar4 + 0x28) = lVar3;
        lVar3 = param_4[9];
        *(long *)(lVar4 + 0x30) = param_4[8];
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x248);
        *param_4 = *(long *)(param_1 + 0x240);
        param_4[1] = lVar4;
        plVar1 = *(long **)(param_1 + 0x250);
        lVar4 = plVar1[1];
        param_4[2] = *plVar1;
        param_4[3] = lVar4;
        lVar4 = plVar1[3];
        param_4[4] = plVar1[2];
        param_4[5] = lVar4;
        lVar4 = *(long *)(param_1 + 0x250);
        lVar3 = *(long *)(lVar4 + 0x28);
        param_4[6] = *(long *)(lVar4 + 0x20);
        param_4[7] = lVar3;
        lVar3 = *(long *)(lVar4 + 0x38);
        param_4[8] = *(long *)(lVar4 + 0x30);
        param_4[9] = lVar3;
      }
      goto LAB_00101130;
    }
    ERR_new();
    ERR_set_debug("ssl/s3_lib.c",0xf9e,"ssl3_ctx_ctrl");
    ERR_set_error(0x14,0x145,0);
    goto switchD_00101083_caseD_5;
      case 0x40:
    *(long **)(param_1 + 0x270) = param_4;
    goto LAB_00101130;
      case 0x41:
    *(undefined4 *)(param_1 + 0x278) = uVar8;
    goto LAB_00101130;
      case 0x4e:
    *(ulong *)(param_1 + 0x3b8) = *(ulong *)(param_1 + 0x3b8) | 0x20;
    *(long **)(param_1 + 0x340) = param_4;
    goto LAB_00101130;
      case 0x4f:
    *(ulong *)(param_1 + 0x3b8) = *(ulong *)(param_1 + 0x3b8) | 0x20;
    CRYPTO_free(*(void **)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    if (param_4 != (long *)0x0) {
      sVar6 = strlen((char *)param_4);
      if ((0xff < sVar6) || ((char)*param_4 == '\0')) {
        ERR_new();
        ERR_set_debug("ssl/s3_lib.c",0xfd4,"ssl3_ctx_ctrl");
        ERR_set_error(0x14,0x165,0);
        goto switchD_00101083_caseD_5;
      }
      pcVar5 = CRYPTO_strdup((char *)param_4,"ssl/s3_lib.c",0xfd7);
      *(char **)(param_1 + 0x360) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        ERR_new();
        uVar7 = 0xfd8;
        goto LAB_00101574;
      }
    }
    goto LAB_00101130;
      case 0x50:
    *(undefined4 *)(param_1 + 0x3b0) = uVar8;
    goto LAB_00101130;
      case 0x51:
    *(code **)(param_1 + 0x358) = srp_password_from_info_cb;
    if (*(void **)(param_1 + 0x3a8) != (void *)0x0) {
      CRYPTO_free(*(void **)(param_1 + 0x3a8));
    }
    pcVar5 = CRYPTO_strdup((char *)param_4,"ssl/s3_lib.c",0xfe1);
    *(char **)(param_1 + 0x3a8) = pcVar5;
    if (pcVar5 != (char *)0x0) goto LAB_00101130;
    ERR_new();
    uVar7 = 0xfe2;
LAB_00101574:
    ERR_set_debug("ssl/s3_lib.c",uVar7,"ssl3_ctx_ctrl");
    ERR_set_error(0x14,0xc0103,0);
    goto switchD_00101083_caseD_5;
      case 0x52:
    lVar4 = *(long *)(param_1 + 0x110);
    if (param_3 == 0 && lVar4 == 0) goto switchD_00101083_caseD_73;
    goto LAB_00101151;
      case 0x53:
    OSSL_STACK_OF_X509_free(*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    goto LAB_00101130;
      case 0x58:
    if (param_3 == 0) {
      iVar2 = ssl_cert_set0_chain(0,param_1,param_4);
      lVar4 = (long)iVar2;
    }
    else {
      iVar2 = ssl_cert_set1_chain();
      lVar4 = (long)iVar2;
    }
    break;
      case 0x59:
    if (param_3 == 0) {
      iVar2 = ssl_cert_add0_chain_cert(0,param_1,param_4);
      lVar4 = (long)iVar2;
    }
    else {
      iVar2 = ssl_cert_add1_chain_cert();
      lVar4 = (long)iVar2;
    }
    break;
      case 0x5b:
    iVar2 = tls1_set_groups(param_1 + 0x298,param_1 + 0x290,param_1 + 0x2a8,param_1 + 0x2a0,
                            param_1 + 0x2b8,param_1 + 0x2b0,param_4,param_3);
    lVar4 = (long)iVar2;
    break;
      case 0x5c:
    iVar2 = tls1_set_groups_list
                      (param_1,param_1 + 0x298,param_1 + 0x290,param_1 + 0x2a8,param_1 + 0x2a0,
                       param_1 + 0x2b8,param_1 + 0x2b0,param_4);
    lVar4 = (long)iVar2;
    break;
      case 0x61:
    iVar2 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x158),param_4,param_3,0);
    lVar4 = (long)iVar2;
    break;
      case 0x62:
    iVar2 = tls1_set_sigalgs_list(param_1,*(undefined8 *)(param_1 + 0x158),param_4,0);
    lVar4 = (long)iVar2;
    break;
      case 0x65:
    iVar2 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x158),param_4,param_3,1);
    lVar4 = (long)iVar2;
    break;
      case 0x66:
    iVar2 = tls1_set_sigalgs_list(param_1,*(undefined8 *)(param_1 + 0x158),param_4,1);
    lVar4 = (long)iVar2;
    break;
      case 0x68:
    lVar4 = *(long *)(param_1 + 0x158);
    CRYPTO_free(*(void **)(lVar4 + 0x30));
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    if ((param_4 == (long *)0x0) || (param_3 == 0)) goto LAB_00101130;
    if (param_3 < 0x100) {
      lVar3 = CRYPTO_memdup(param_4,param_3,"ssl/s3_lib.c",0x11df);
      *(long *)(lVar4 + 0x30) = lVar3;
      if (lVar3 != 0) {
        *(ulong *)(lVar4 + 0x38) = param_3;
        goto LAB_00101130;
      }
    }
switchD_00101083_caseD_5:
    lVar4 = 0;
    break;
      case 0x69:
    iVar2 = ssl_build_cert_chain(0,param_1,param_3 & 0xffffffff);
    lVar4 = (long)iVar2;
    break;
      case 0x6a:
    iVar2 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x158),param_4,0,param_3 & 0xffffffff)
    ;
    lVar4 = (long)iVar2;
    break;
      case 0x6b:
    iVar2 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x158),param_4,1,param_3 & 0xffffffff)
    ;
    lVar4 = (long)iVar2;
    break;
      case 0x73:
switchD_00101083_caseD_73:
    lVar4 = *(long *)(**(long **)(param_1 + 0x158) + 0x10);
LAB_00101151:
    *param_4 = lVar4;
    goto LAB_00101130;
      case 0x74:
    iVar2 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x158),param_4);
    lVar4 = (long)iVar2;
    break;
      case 0x75:
    iVar2 = ssl_cert_set_current(*(undefined8 *)(param_1 + 0x158),param_3);
    lVar4 = (long)iVar2;
    break;
      case 0x76:
    *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = uVar8;
    goto LAB_00101130;
      case 0x7f:
    lVar4 = (long)*(int *)(param_1 + 0x278);
    break;
      case 0x80:
    *param_4 = *(long *)(param_1 + 0x268);
    goto LAB_00101130;
      case 0x81:
    *param_4 = *(long *)(param_1 + 0x270);
LAB_00101130:
    lVar4 = 1;
    break;
      case 0x89:
    iVar2 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x158),param_4,0);
    lVar4 = (long)iVar2;
    break;
      case 0x8a:
    iVar2 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x158),param_4,1);
    lVar4 = (long)iVar2;
    break;
      case 0x8b:
    iVar2 = tls1_get0_implemented_groups
                      (*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                       *(undefined8 *)(param_1 + 0x670),*(undefined8 *)(param_1 + 0x678),param_3,
                       param_4);
    lVar4 = (long)iVar2;
    break;
      default:
    return 0;
   }
   return lVar4;
}undefined8 ssl3_ctx_callback_ctrl(long param_1, int param_2, undefined8 param_3) {
   if (param_2 == 6) {
      *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0x10 ) = param_3;
   } else {
      switch (param_2) {
         case 0x35:
      *(undefined8 *)(param_1 + 0x230) = param_3;
      return 1;
         default:
      return 0;
         case 0x3f:
      *(undefined8 *)(param_1 + 0x268) = param_3;
      break;
         case 0x48:
      *(undefined8 *)(param_1 + 600) = param_3;
      break;
         case 0x4b:
      *(ulong *)(param_1 + 0x3b8) = *(ulong *)(param_1 + 0x3b8) | 0x20;
      *(undefined8 *)(param_1 + 0x348) = param_3;
      break;
         case 0x4c:
      *(ulong *)(param_1 + 0x3b8) = *(ulong *)(param_1 + 0x3b8) | 0x20;
      *(undefined8 *)(param_1 + 0x350) = param_3;
      break;
         case 0x4d:
      *(ulong *)(param_1 + 0x3b8) = *(ulong *)(param_1 + 0x3b8) | 0x20;
      *(undefined8 *)(param_1 + 0x358) = param_3;
      break;
         case 0x4f:
      *(undefined8 *)(param_1 + 1000) = param_3;
      }
   }
   return 1;
}undefined8 SSL_CTX_set_tlsext_ticket_key_evp_cb(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x260 ) = param_2;
   return 1;
}void ssl3_get_cipher_by_id(undefined4 param_1) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 auStack_68[24];
   undefined4 local_50;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = param_1;
   lVar1 = OBJ_bsearch_ssl_cipher_id(auStack_68, tls13_ciphers, 7);
   if (lVar1 == 0) {
      lVar1 = OBJ_bsearch_ssl_cipher_id(auStack_68, ssl3_ciphers, 0xa7);
      if (lVar1 == 0) {
         OBJ_bsearch_ssl_cipher_id(auStack_68, ssl3_scsvs, 2);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined1 *ssl3_get_cipher_by_std_name(char *param_1) {
   long lVar1;
   int iVar2;
   undefined1 *puVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 *local_78[4];
   long local_58[5];
   lVar4 = 0;
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   local_58[2] = 2;
   local_78[2] = ssl3_scsvs;
   local_78[0] = tls13_ciphers;
   local_78[1] = ssl3_ciphers;
   local_58[0] = __LC1;
   local_58[1] = _UNK_00109b98;
   do {
      puVar3 = local_78[lVar4];
      lVar1 = local_58[lVar4];
      if (lVar1 != 0) {
         lVar5 = 0;
         do {
            if (*(char**)( puVar3 + 0x10 ) != (char*)0x0) {
               iVar2 = strcmp(param_1, *(char**)( puVar3 + 0x10 ));
               if (iVar2 == 0) goto LAB_00101a1e;
            }
            lVar5 = lVar5 + 1;
            puVar3 = puVar3 + 0x50;
         } while ( lVar5 != lVar1 );
      }
      lVar4 = lVar4 + 1;
   } while ( lVar4 != 3 );
   puVar3 = (undefined1*)0x0;
   LAB_00101a1e:if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ssl3_get_cipher_by_char(ushort *param_1) {
   ssl3_get_cipher_by_id(( ushort )(*param_1 << 8 | *param_1 >> 8) | 0x3000000);
   return;
}undefined8 ssl3_put_cipher_by_char(long param_1, undefined8 param_2, undefined8 *param_3) {
   undefined8 uVar1;
   if (( *(uint*)( param_1 + 0x18 ) & 0xff000000 ) == 0x3000000) {
      uVar1 = WPACKET_put_bytes__(param_2, *(uint*)( param_1 + 0x18 ) & 0xffff, 2);
      if ((int)uVar1 == 0) {
         return uVar1;
      }
      *param_3 = 2;
   } else {
      *param_3 = 0;
   }
   return 1;
}long ssl3_choose_cipher(long param_1, long param_2, long param_3) {
   long *plVar1;
   undefined4 uVar2;
   uint uVar3;
   long lVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   void *pvVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   size_t __n;
   undefined4 uVar14;
   uint uVar15;
   bool bVar16;
   long local_58;
   long local_50;
   long local_48;
   lVar10 = param_3;
   local_58 = param_2;
   if (( ( ( ( ( *(uint*)( *(long*)( param_1 + 0x880 ) + 0x1c ) & 0x30000 ) == 0 ) && ( lVar10 = param_2 ),local_58 = param_3,( *(ulong*)( param_1 + 0x9b0 ) & 0x400000 ) != 0 ) ) && ( lVar10 = param_3 ),local_58 = param_2,( *(ulong*)( param_1 + 0x9b0 ) & 0x200000 ) != 0 )) {
      iVar5 = 0;
      LAB_00101e93:lVar9 = OPENSSL_sk_value(param_3, iVar5);
      if (*(int*)( lVar9 + 0x24 ) != 0x80000) goto LAB_00101e87;
      lVar11 = OPENSSL_sk_new_reserve(0, iVar13);
      if (lVar11 != 0) {
         iVar5 = iVar5 + 1;
         OPENSSL_sk_push(lVar11, lVar9);
         if (iVar5 < iVar13) {
            do {
               lVar10 = OPENSSL_sk_value(param_3, iVar5);
               if (*(int*)( lVar10 + 0x24 ) == 0x80000) {
                  OPENSSL_sk_push(lVar11, lVar10);
               }
               iVar5 = iVar5 + 1;
            } while ( iVar13 != iVar5 );
         }
         iVar5 = 0;
         do {
            lVar10 = OPENSSL_sk_value(param_3, iVar5);
            if (*(int*)( lVar10 + 0x24 ) != 0x80000) {
               OPENSSL_sk_push(lVar11, lVar10);
            }
            iVar5 = iVar5 + 1;
            local_48 = lVar11;
         } while ( iVar13 != iVar5 );
         goto LAB_00101b19;
      }
   }
   LAB_00101b10:lVar11 = lVar10;
   local_48 = 0;
   LAB_00101b19:if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar13 = **(int**)( param_1 + 0x18 ) ),iVar13 != 0x10000 )) {
      if (*(long*)( param_1 + 0x978 ) != 0) {
         lVar10 = *(long*)( param_1 + 0x118 );
         lVar9 = 0;
         if (lVar10 != 0) {
            do {
               iVar13 = (int)lVar9;
               if (( -1 < iVar13 ) && ( iVar13 < (int)lVar10 )) {
                  if (*(int*)( param_1 + 0x78 ) == 0) {
                     pvVar8 = *(void**)( param_1 + 0x1598 );
                     __n = *(size_t*)( param_1 + 0x15a0 );
                  } else {
                     pvVar8 = *(void**)( param_1 + 0x15a8 );
                     __n = *(size_t*)( param_1 + 0x15b0 );
                  }
                  plVar1 = (long*)( *(long*)( *(long*)( param_1 + 0x880 ) + 0x20 ) + (long)iVar13 * 0x28 );
                  if (( pvVar8 == (void*)0x0 ) || ( pvVar8 = memchr(pvVar8, 2, __n) ),pvVar8 == (void*)0x0) {
                     if (*plVar1 == 0) goto LAB_00101f20;
                     lVar4 = plVar1[1];
                  } else {
                     lVar4 = plVar1[1];
                  }
                  if (lVar4 != 0) {
                     bVar16 = lVar9 == lVar10;
                     goto LAB_00101c08;
                  }
               }
               LAB_00101f20:lVar9 = lVar9 + 1;
            } while ( lVar9 != lVar10 );
         }
         bVar16 = true;
         goto LAB_00101c08;
      }
   } else {
      tls1_set_cert_validity(param_1);
      ssl_set_masks(param_1);
   }
   bVar16 = false;
   LAB_00101c08:uVar3 = 0;
   uVar15 = 0;
   iVar13 = 0;
   local_50 = 0;
   do {
      iVar5 = OPENSSL_sk_num(lVar11);
      lVar10 = local_50;
      if (iVar5 <= iVar13) {
         LAB_00101dbd:local_50 = lVar10;
         OPENSSL_sk_free(local_48);
         return local_50;
      }
      lVar9 = OPENSSL_sk_value(lVar11, iVar13);
      if (( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 8 ) == 0) {
         uVar2 = *(undefined4*)( lVar9 + 0x2c );
         uVar14 = *(undefined4*)( lVar9 + 0x30 );
      } else {
         uVar2 = *(undefined4*)( lVar9 + 0x34 );
         uVar14 = *(undefined4*)( lVar9 + 0x38 );
      }
      iVar5 = ssl_version_cmp(param_1, *(undefined4*)( param_1 + 0x48 ), uVar2);
      if (( -1 < iVar5 ) && ( iVar5 = ssl_version_cmp(param_1, *(undefined4*)( param_1 + 0x48 ), uVar14) ),iVar5 < 1) {
         if (( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 ) || ( ( iVar5 = **(int**)( param_1 + 0x18 ) ),iVar5 < 0x304 || ( iVar5 == 0x10000 ) )) {
            uVar6 = *(uint*)( param_1 + 0x410 );
            uVar12 = *(uint*)( param_1 + 0x414 );
            if (( *(byte*)( param_1 + 0xc48 ) & 0x20 ) != 0) {
               uVar6 = uVar6 | 0x20;
               uVar12 = uVar12 | 0x40;
            }
            uVar15 = *(uint*)( lVar9 + 0x1c );
            uVar3 = *(uint*)( lVar9 + 0x20 );
            if (( ( ( ( uVar15 & 0x1c8 ) != 0 ) && ( *(long*)( param_1 + 0x978 ) == 0 ) ) || ( ( uVar6 & uVar15 ) == 0 ) ) || ( ( ( uVar3 & uVar12 ) == 0 || ( ( ( uVar15 & 4 ) != 0 && ( iVar5 = tls1_check_ec_tmp_key(param_1, *(undefined4*)( lVar9 + 0x18 )) ),iVar5 == 0 ) ) ) )) goto LAB_00101c90;
         }
         iVar5 = OPENSSL_sk_find(local_58, lVar9);
         if (( -1 < iVar5 ) && ( iVar7 = ssl_security(param_1, 0x10002, *(undefined4*)( lVar9 + 0x44 ), 0, lVar9) ),iVar7 != 0) {
            if (( ( ( uVar15 & 4 ) == 0 ) || ( ( uVar3 & 8 ) == 0 ) ) || ( *(char*)( param_1 + 0x4dc ) == '\0' )) {
               if (!bVar16) {
                  lVar10 = OPENSSL_sk_value(local_58, iVar5);
                  goto LAB_00101dbd;
               }
               lVar10 = OPENSSL_sk_value(local_58, iVar5);
               lVar9 = ssl_md(*(undefined8*)( param_1 + 8 ), *(undefined4*)( lVar10 + 0x40 ));
               if (( lVar9 != 0 ) && ( iVar5 = iVar5 != 0 )) goto LAB_00101dbd;
               if (local_50 != 0) {
                  lVar10 = local_50;
               }
            } else if (local_50 == 0) {
               lVar10 = OPENSSL_sk_value(local_58, iVar5);
            }
         }
      }
      LAB_00101c90:local_50 = lVar10;
      iVar13 = iVar13 + 1;
   } while ( true );
   LAB_00101e87:iVar5 = iVar5 + 1;
   if (iVar13 == iVar5) goto LAB_00101b10;
   goto LAB_00101e93;
}ulong ssl3_get_req_cert_type(long param_1, undefined8 param_2) {
   uint uVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   lVar2 = *(long*)( *(long*)( param_1 + 0x880 ) + 0x30 );
   if (lVar2 != 0) {
      uVar4 = WPACKET_memcpy(param_2, lVar2, *(undefined8*)( *(long*)( param_1 + 0x880 ) + 0x38 ));
      goto LAB_00101fe3;
   }
   ssl_set_sig_mask(&local_24, param_1, 0x5000e);
   uVar1 = *(uint*)( *(long*)( param_1 + 0x300 ) + 0x1c );
   iVar3 = *(int*)( param_1 + 0x48 );
   if (iVar3 < 0x301) {
      LAB_00102090:if (( iVar3 == 0x300 ) && ( ( uVar1 & 2 ) != 0 )) {
         iVar3 = WPACKET_put_bytes__(param_2, 5, 1);
         if (iVar3 == 0) goto LAB_00102060;
         if (( local_24 & 2 ) == 0) {
            iVar3 = WPACKET_put_bytes__(param_2, 6, 1);
            if (iVar3 == 0) {
               uVar4 = 0;
               goto LAB_00101fe3;
            }
            goto LAB_001020a1;
         }
         if (( local_24 & 1 ) == 0) goto LAB_001021d8;
      } else {
         LAB_001020a1:if (( local_24 & 1 ) == 0) {
            LAB_001021d8:iVar3 = WPACKET_put_bytes__(param_2, 1, 1);
            if (iVar3 == 0) goto LAB_00102060;
         }
         if (( ( local_24 & 2 ) == 0 ) && ( iVar3 = iVar3 == 0 )) goto LAB_00102060;
      }
      uVar4 = 1;
      if (( 0x300 < *(int*)( param_1 + 0x48 ) ) && ( ( local_24 & 8 ) == 0 )) {
         iVar3 = WPACKET_put_bytes__(param_2, 0x40, 1);
         uVar4 = ( ulong )(iVar3 != 0);
      }
   } else {
      if (( uVar1 & 0x10 ) == 0) {
         if (0x302 < iVar3) {
            LAB_0010203b:if (( uVar1 & 0x200 ) != 0) {
               iVar3 = WPACKET_put_bytes__(param_2, 0x43, 1);
               if (( iVar3 != 0 ) && ( iVar3 = iVar3 != 0 )) {
                  iVar3 = *(int*)( param_1 + 0x48 );
                  goto LAB_00102090;
               }
               goto LAB_00102060;
            }
         }
         goto LAB_001020a1;
      }
      iVar3 = WPACKET_put_bytes__(param_2, 0x16, 1);
      if (( ( ( iVar3 != 0 ) && ( iVar3 = WPACKET_put_bytes__(param_2, 0x43, 1) ),iVar3 != 0 ) ) && ( iVar3 = iVar3 != 0 )) {
         iVar3 = *(int*)( param_1 + 0x48 );
         if (0x302 < iVar3) goto LAB_0010203b;
         goto LAB_00102090;
      }
      LAB_00102060:uVar4 = 0;
   }
   LAB_00101fe3:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}ulong ssl3_shutdown(int *param_1) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined1 local_18[8];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      if (( param_1[0x20] != 0 ) || ( iVar1 = iVar1 != 0 )) {
         param_1[0x21] = 3;
         uVar3 = 1;
         goto LAB_00102282;
      }
      uVar2 = param_1[0x21];
      if (( uVar2 & 1 ) == 0) {
         param_1[0x21] = uVar2 | 1;
         ssl3_send_alert(param_1, 1, 0);
         if (0 < param_1[0x71]) goto LAB_00102314;
         LAB_001022cf:uVar2 = param_1[0x21];
      } else {
         if (0 < param_1[0x71]) {
            iVar1 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x90 ) )(param_1);
            if (iVar1 != -1) goto LAB_001022cf;
            LAB_00102314:uVar3 = 0xffffffff;
            goto LAB_00102282;
         }
         if (( uVar2 & 2 ) == 0) {
            ( **(code**)( *(long*)( param_1 + 6 ) + 0x80 ) )(param_1, 0, 0, 0, 0, 0, local_18);
            uVar2 = param_1[0x21];
            if (( uVar2 & 2 ) == 0) goto LAB_00102314;
         }
      }
      if (uVar2 == 3) {
         uVar3 = ( ulong )(param_1[0x71] == 0);
         goto LAB_00102282;
      }
   }
   uVar3 = 0;
   LAB_00102282:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}undefined8 ssl3_renegotiate(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      if (*(long*)( param_1 + 0x1c ) != 0) {
         param_1[0x73] = 1;
      }
      return 1;
   }
   return 0;
}undefined8 ssl3_renegotiate_check(int *param_1, int param_2) {
   int iVar1;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (( *param_1 == 0 ) && ( param_1[0x73] != 0 )) {
      iVar1 = RECORD_LAYER_read_pending(param_1 + 0x316);
      if (( ( iVar1 == 0 ) && ( iVar1 = RECORD_LAYER_write_pending(param_1 + 0x316) ),iVar1 == 0 )) {
         ossl_statem_set_renegotiate(param_1);
         param_1[0x75] = param_1[0x75] + 1;
         param_1[0x74] = param_1[0x74] + 1;
         param_1[0x73] = 0;
         return 1;
      }
   }
   return 0;
}undefined8 ssl3_write(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int *piVar1;
   undefined8 uVar2;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (*param_1 == 0) {
      piVar1 = __errno_location();
      *piVar1 = 0;
      if (param_1[0x73] != 0) {
         ssl3_renegotiate_check(param_1, 0);
      }
      for (int i_389 = 0; i_389 < 2; i_389++) {
         /* WARNING: Could not recover jumptable at 0x001024a0. Too many branches */
      }
      uVar2 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x88 ) )(param_1, 0x17, param_2, param_3, param_4);
      return uVar2;
   }
   return 0;
}ulong ssl3_peek(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   uint uVar1;
   ulong uVar2;
   int *piVar3;
   undefined1 auVar4[16];
   undefined8 uVar5;
   if (param_1 != (int*)0x0) {
      uVar2 = 0;
      if (*param_1 == 0) {
         piVar3 = __errno_location();
         *piVar3 = 0;
         if (param_1[0x73] != 0) {
            ssl3_renegotiate_check(param_1, 0);
         }
         param_1[0x76] = 1;
         uVar5 = param_4;
         auVar4 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x80 ) )(param_1, 0x17, 0, param_2, param_3, 1);
         uVar2 = auVar4._0_8_;
         if (( auVar4._0_4_ == -1 ) && ( param_1[0x76] == 2 )) {
            ossl_statem_set_in_handshake(param_1, 1, auVar4._8_8_, uVar5);
            uVar1 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x80 ) )(param_1, 0x17, 0, param_2, param_3, 1, param_4);
            ossl_statem_set_in_handshake(param_1, 0);
            uVar2 = (ulong)uVar1;
         } else {
            param_1[0x76] = 0;
         }
      }
      return uVar2;
   }
   return 0;
}ulong ssl3_read(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   uint uVar1;
   ulong uVar2;
   int *piVar3;
   undefined1 auVar4[16];
   undefined8 uVar5;
   if (param_1 != (int*)0x0) {
      uVar2 = 0;
      if (*param_1 == 0) {
         piVar3 = __errno_location();
         *piVar3 = 0;
         if (param_1[0x73] != 0) {
            ssl3_renegotiate_check(param_1, 0);
         }
         param_1[0x76] = 1;
         uVar5 = param_4;
         auVar4 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x80 ) )(param_1, 0x17, 0, param_2, param_3, 0);
         uVar2 = auVar4._0_8_;
         if (( auVar4._0_4_ == -1 ) && ( param_1[0x76] == 2 )) {
            ossl_statem_set_in_handshake(param_1, 1, auVar4._8_8_, uVar5);
            uVar1 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x80 ) )(param_1, 0x17, 0, param_2, param_3, 0, param_4);
            ossl_statem_set_in_handshake(param_1, 0);
            uVar2 = (ulong)uVar1;
         } else {
            param_1[0x76] = 0;
         }
      }
      return uVar2;
   }
   return 0;
}ulong ssl_get_algorithm2(long param_1) {
   long lVar1;
   ulong uVar2;
   lVar1 = *(long*)( param_1 + 0x300 );
   if (lVar1 == 0) {
      uVar2 = 0xffffffffffffffff;
   } else {
      uVar2 = ( ulong ) * (uint*)( lVar1 + 0x40 );
      if (( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 4 ) != 0) {
         if (uVar2 == 0x909) {
            uVar2 = 0x404;
         }
         return uVar2;
      }
      if (( *(uint*)( lVar1 + 0x1c ) & 0x1c8 ) != 0) {
         if (uVar2 == 0x505) {
            uVar2 = 0x909;
         }
         return uVar2;
      }
   }
   return uVar2;
}undefined8 ssl_fill_hello_random(long param_1, int param_2, uint *param_3, ulong param_4, int param_5) {
   uint uVar1;
   undefined8 uVar2;
   time_t tVar3;
   if (param_4 < 4) {
      return 0;
   }
   if (param_2 == 0) {
      uVar1 = *(uint*)( param_1 + 0x9b8 ) & 0x20;
   } else {
      uVar1 = *(uint*)( param_1 + 0x9b8 ) & 0x40;
   }
   if (uVar1 == 0) {
      uVar2 = RAND_bytes_ex(**(undefined8**)( param_1 + 8 ), param_3, param_4, 0);
   } else {
      tVar3 = time((time_t*)0x0);
      uVar1 = (uint)tVar3;
      *param_3 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      uVar2 = RAND_bytes_ex(**(undefined8**)( param_1 + 8 ), param_3 + 1, param_4 - 4, 0);
   }
   if (0 < (int)uVar2) {
      if (param_4 < 9) {
         return 0;
      }
      if (param_5 == 1) {
         *(undefined8*)( (long)param_3 + ( param_4 - 8 ) ) = 0x14452474e574f44;
      } else if (param_5 == 2) {
         *(undefined8*)( (long)param_3 + ( param_4 - 8 ) ) = 0x4452474e574f44;
      }
   }
   return uVar2;
}bool ssl_generate_master_secret(long param_1, void *param_2, size_t param_3, int param_4) {
   uint uVar1;
   size_t __n;
   void *__src;
   long lVar2;
   int iVar3;
   ushort *puVar4;
   void *pvVar5;
   ushort uVar6;
   bool bVar7;
   long local_58;
   uVar1 = *(uint*)( *(long*)( param_1 + 0x300 ) + 0x1c );
   if (( uVar1 & 0x1c8 ) == 0) {
      iVar3 = ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 8 ) )(param_1, *(long*)( param_1 + 0x900 ) + 0x50, param_2, param_3, *(long*)( param_1 + 0x900 ) + 8);
      bVar7 = iVar3 != 0;
   } else {
      __n = *(size_t*)( param_1 + 0x3c8 );
      uVar6 = *(ushort*)( param_1 + 0x3c8 ) << 8 | *(ushort*)( param_1 + 0x3c8 ) >> 8;
      if (( uVar1 & 8 ) == 0) {
         local_58 = __n + 4 + param_3;
         puVar4 = (ushort*)CRYPTO_malloc((int)local_58, "ssl/s3_lib.c", 0x12df);
         if (puVar4 == (ushort*)0x0) {
            bVar7 = false;
            goto LAB_00102961;
         }
         *puVar4 = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
         pvVar5 = memcpy(puVar4 + 1, param_2, param_3);
      } else {
         local_58 = __n * 2 + 4;
         puVar4 = (ushort*)CRYPTO_malloc((int)local_58, "ssl/s3_lib.c", 0x12df);
         param_3 = __n;
         if (puVar4 == (ushort*)0x0) {
            bVar7 = false;
            goto LAB_00102961;
         }
         *puVar4 = uVar6;
         pvVar5 = memset(puVar4 + 1, 0, __n);
      }
      __src = *(void**)( param_1 + 0x3c0 );
      *(ushort*)( (long)pvVar5 + param_3 ) = uVar6;
      memcpy((ushort*)( (long)pvVar5 + param_3 ) + 1, __src, __n);
      CRYPTO_clear_free(__src, __n, "ssl/s3_lib.c", 0x12ec);
      *(undefined8*)( param_1 + 0x3c0 ) = 0;
      lVar2 = *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 );
      *(undefined8*)( param_1 + 0x3c8 ) = 0;
      iVar3 = ( **(code**)( lVar2 + 8 ) )(param_1, *(long*)( param_1 + 0x900 ) + 0x50, puVar4, local_58, *(long*)( param_1 + 0x900 ) + 8);
      if (iVar3 == 0) {
         CRYPTO_clear_free(puVar4, local_58, "ssl/s3_lib.c", 0x12f2);
         bVar7 = false;
      } else {
         bVar7 = true;
         CRYPTO_clear_free(puVar4, local_58, "ssl/s3_lib.c", 0x12f6);
      }
   }
   LAB_00102961:if (param_2 != (void*)0x0) {
      if (param_4 == 0) {
         OPENSSL_cleanse(param_2, param_3);
      } else {
         CRYPTO_clear_free(param_2, param_3, "ssl/s3_lib.c", 0x1308);
      }
   }
   if (*(int*)( param_1 + 0x78 ) == 0) {
      *(undefined8*)( param_1 + 0x3b0 ) = 0;
      *(undefined8*)( param_1 + 0x3b8 ) = 0;
   }
   return bVar7;
}EVP_PKEY *ssl_generate_pkey(long param_1, long param_2) {
   int iVar1;
   EVP_PKEY_CTX *ctx;
   long in_FS_OFFSET;
   EVP_PKEY *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = (EVP_PKEY*)0x0;
   if (param_2 == 0) {
      local_18 = (EVP_PKEY*)0x0;
   } else {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(**(undefined8**)( param_1 + 8 ), param_2, ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         iVar1 = EVP_PKEY_keygen_init(ctx);
         if (0 < iVar1) {
            iVar1 = EVP_PKEY_keygen(ctx, &local_18);
            if (iVar1 < 1) {
               EVP_PKEY_free(local_18);
               local_18 = (EVP_PKEY*)0x0;
            }
         }
      }
      EVP_PKEY_CTX_free(ctx);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_18;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}EVP_PKEY *ssl_generate_pkey_group(long param_1, undefined2 param_2) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar4;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   puVar1 = *(undefined8**)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = tls1_group_id_lookup(puVar1, param_2);
   local_28 = (EVP_PKEY*)0x0;
   if (lVar3 == 0) {
      ERR_new();
      ctx = (EVP_PKEY_CTX*)0x0;
      ERR_set_debug("ssl/s3_lib.c", 0x1334, "ssl_generate_pkey_group");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(*puVar1, *(undefined8*)( lVar3 + 0x10 ), puVar1[0x8e]);
      if (ctx == (EVP_PKEY_CTX*)0x0) {
         ERR_new();
         ctx = (EVP_PKEY_CTX*)0x0;
         ERR_set_debug("ssl/s3_lib.c", 0x133c, "ssl_generate_pkey_group");
         ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
      } else {
         iVar2 = EVP_PKEY_keygen_init(ctx);
         if (iVar2 < 1) {
            ERR_new();
            uVar4 = 0x1340;
         } else {
            iVar2 = EVP_PKEY_CTX_set_group_name(ctx, *(undefined8*)( lVar3 + 8 ));
            if (0 < iVar2) {
               iVar2 = EVP_PKEY_keygen(ctx, &local_28);
               if (iVar2 < 1) {
                  ERR_new();
                  ERR_set_debug("ssl/s3_lib.c", 0x1348, "ssl_generate_pkey_group");
                  ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
                  EVP_PKEY_free(local_28);
                  local_28 = (EVP_PKEY*)0x0;
               }
               goto LAB_00102bd4;
            }
            ERR_new();
            uVar4 = 0x1344;
         }
         ERR_set_debug("ssl/s3_lib.c", uVar4, "ssl_generate_pkey_group");
         ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
      }
   }
   LAB_00102bd4:EVP_PKEY_CTX_free(ctx);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}EVP_PKEY *ssl_generate_param_group(long param_1, undefined2 param_2) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   EVP_PKEY_CTX *ctx;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   puVar1 = *(undefined8**)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (EVP_PKEY*)0x0;
   lVar3 = tls1_group_id_lookup(puVar1, param_2);
   if (lVar3 != 0) {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(*puVar1, *(undefined8*)( lVar3 + 0x10 ), puVar1[0x8e]);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         iVar2 = EVP_PKEY_paramgen_init(ctx);
         if (0 < iVar2) {
            iVar2 = EVP_PKEY_CTX_set_group_name(ctx, *(undefined8*)( lVar3 + 8 ));
            if (iVar2 < 1) {
               ERR_new();
               ERR_set_debug("ssl/s3_lib.c", 0x1367, "ssl_generate_param_group");
               ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
            } else {
               iVar2 = EVP_PKEY_paramgen(ctx, &local_28);
               if (iVar2 < 1) {
                  EVP_PKEY_free(local_28);
                  local_28 = (EVP_PKEY*)0x0;
               }
            }
         }
         goto LAB_00102dc2;
      }
   }
   ctx = (EVP_PKEY_CTX*)0x0;
   LAB_00102dc2:EVP_PKEY_CTX_free(ctx);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong ssl_gensecret(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 )) {
      if (*(int*)( param_1 + 0x508 ) == 0) {
         uVar2 = ssl_handshake_md();
         uVar3 = tls13_generate_secret(param_1, uVar2, 0, 0, 0, param_1 + 0x57c);
         if ((int)uVar3 == 0) {
            return uVar3;
         }
      }
      iVar1 = tls13_generate_handshake_secret(param_1, param_2, param_3);
      return ( ulong )(iVar1 != 0);
   }
   uVar3 = ssl_generate_master_secret(param_1, param_2, param_3, 0);
   return uVar3;
}undefined4 ssl_derive(long param_1, long param_2, EVP_PKEY *param_3, int param_4) {
   int iVar1;
   undefined4 uVar2;
   EVP_PKEY_CTX *ctx;
   uchar *key;
   undefined8 uVar3;
   long in_FS_OFFSET;
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (( param_2 == 0 ) || ( param_3 == (EVP_PKEY*)0x0 )) {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c", 0x1398, "ssl_derive");
      uVar2 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      goto LAB_00103046;
   }
   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(**(undefined8**)( param_1 + 8 ), param_2, ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
   iVar1 = EVP_PKEY_derive_init(ctx);
   if (iVar1 < 1) {
      LAB_00102ff0:ERR_new();
      key = (uchar*)0x0;
      ERR_set_debug("ssl/s3_lib.c", 0x13a1, "ssl_derive");
      uVar2 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      iVar1 = EVP_PKEY_derive_set_peer(ctx, param_3);
      if (iVar1 < 1) goto LAB_00102ff0;
      iVar1 = EVP_PKEY_derive(ctx, (uchar*)0x0, &local_48);
      if (iVar1 < 1) goto LAB_00102ff0;
      if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 )) {
         iVar1 = EVP_PKEY_is_a(param_2, &_LC3);
         if (iVar1 != 0) {
            EVP_PKEY_CTX_set_dh_pad(ctx, 1);
         }
      }
      key = (uchar*)CRYPTO_malloc((int)local_48, "ssl/s3_lib.c", 0x13a8);
      if (key == (uchar*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/s3_lib.c", 0x13aa, "ssl_derive");
         uVar3 = 0x8000f;
         LAB_001030f0:uVar2 = 0;
         ossl_statem_fatal(param_1, 0x50, uVar3, 0);
      } else {
         iVar1 = EVP_PKEY_derive(ctx, key, &local_48);
         if (iVar1 < 1) {
            ERR_new();
            ERR_set_debug("ssl/s3_lib.c", 0x13af, "ssl_derive");
            uVar3 = 0xc0103;
            goto LAB_001030f0;
         }
         if (param_4 == 0) {
            *(uchar**)( param_1 + 0x3b0 ) = key;
            key = (uchar*)0x0;
            *(size_t*)( param_1 + 0x3b8 ) = local_48;
            uVar2 = 1;
         } else {
            uVar2 = ssl_gensecret(param_1, key, local_48);
         }
      }
   }
   CRYPTO_clear_free(key, local_48, "ssl/s3_lib.c", 0x13bf);
   EVP_PKEY_CTX_free(ctx);
   LAB_00103046:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 ssl_decapsulate(long param_1, long param_2, undefined8 param_3, undefined8 param_4, int param_5) {
   int iVar1;
   undefined4 uVar2;
   EVP_PKEY_CTX *ctx;
   void *pvVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c", 0x13d0, "ssl_decapsulate");
      uVar2 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      goto LAB_001032b8;
   }
   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(**(undefined8**)( param_1 + 8 ), param_2, ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
   iVar1 = EVP_PKEY_decapsulate_init(ctx, 0);
   if (iVar1 < 1) {
      LAB_00103260:ERR_new();
      ERR_set_debug("ssl/s3_lib.c", 0x13d8, "ssl_decapsulate");
      uVar2 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      pvVar3 = (void*)0x0;
   } else {
      iVar1 = EVP_PKEY_decapsulate(ctx, 0, &local_48, param_3, param_4);
      if (iVar1 < 1) goto LAB_00103260;
      pvVar3 = CRYPTO_malloc((int)local_48, "ssl/s3_lib.c", 0x13dc);
      if (pvVar3 == (void*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/s3_lib.c", 0x13de, "ssl_decapsulate");
         uVar4 = 0x8000f;
         LAB_00103368:uVar2 = 0;
         ossl_statem_fatal(param_1, 0x50, uVar4, 0);
      } else {
         iVar1 = EVP_PKEY_decapsulate(ctx, pvVar3, &local_48, param_3, param_4);
         if (iVar1 < 1) {
            ERR_new();
            ERR_set_debug("ssl/s3_lib.c", 0x13e3, "ssl_decapsulate");
            uVar4 = 0xc0103;
            goto LAB_00103368;
         }
         if (param_5 == 0) {
            *(void**)( param_1 + 0x3b0 ) = pvVar3;
            pvVar3 = (void*)0x0;
            *(undefined8*)( param_1 + 0x3b8 ) = local_48;
            uVar2 = 1;
         } else {
            uVar2 = ssl_gensecret(param_1, pvVar3, local_48);
         }
      }
   }
   CRYPTO_clear_free(pvVar3, local_48, "ssl/s3_lib.c", 0x13f3);
   EVP_PKEY_CTX_free(ctx);
   LAB_001032b8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int ssl_encapsulate(long param_1, long param_2, undefined8 *param_3, long *param_4, int param_5) {
   int iVar1;
   EVP_PKEY_CTX *ctx;
   void *pvVar2;
   void *ptr;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = 0;
   if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("ssl/s3_lib.c", 0x1403, "ssl_encapsulate");
      iVar1 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      goto LAB_001034d6;
   }
   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(**(undefined8**)( param_1 + 8 ), param_2, ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
   iVar1 = EVP_PKEY_encapsulate_init(ctx, 0);
   if (iVar1 < 1) {
      LAB_0010346b:ERR_new();
      ptr = (void*)0x0;
      ERR_set_debug("ssl/s3_lib.c", 0x140c, "ssl_encapsulate");
      iVar1 = 0;
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      pvVar2 = (void*)0x0;
   } else {
      iVar1 = EVP_PKEY_encapsulate(ctx, 0, &local_48, 0);
      if (( ( iVar1 < 1 ) || ( local_50 == 0 ) ) || ( local_48 == 0 )) goto LAB_0010346b;
      pvVar2 = CRYPTO_malloc((int)local_50, "ssl/s3_lib.c", 0x1410);
      ptr = CRYPTO_malloc((int)local_48, "ssl/s3_lib.c", 0x1411);
      if (( pvVar2 == (void*)0x0 ) || ( ptr == (void*)0x0 )) {
         ERR_new();
         ERR_set_debug("ssl/s3_lib.c", 0x1413, "ssl_encapsulate");
         uVar3 = 0x8000f;
         LAB_00103644:iVar1 = 0;
         ossl_statem_fatal(param_1, 0x50, uVar3, 0);
      } else {
         iVar1 = EVP_PKEY_encapsulate(ctx, ptr, &local_48, pvVar2, &local_50);
         if (iVar1 < 1) {
            ERR_new();
            ERR_set_debug("ssl/s3_lib.c", 0x1418, "ssl_encapsulate");
            uVar3 = 0xc0103;
            goto LAB_00103644;
         }
         if (param_5 == 0) {
            *(void**)( param_1 + 0x3b0 ) = pvVar2;
            pvVar2 = (void*)0x0;
            *(long*)( param_1 + 0x3b8 ) = local_50;
            iVar1 = 1;
            LAB_0010358f:*param_3 = ptr;
            ptr = (void*)0x0;
            *param_4 = local_48;
         } else {
            iVar1 = ssl_gensecret(param_1, pvVar2, local_50);
            if (0 < iVar1) goto LAB_0010358f;
         }
      }
   }
   CRYPTO_clear_free(pvVar2, local_50, "ssl/s3_lib.c", 0x142f);
   CRYPTO_free(ptr);
   EVP_PKEY_CTX_free(ctx);
   LAB_001034d6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}undefined8 SSL_get0_group_name(uint *param_1) {
   undefined2 uVar1;
   int iVar2;
   undefined8 uVar3;
   uint *puVar4;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar4 = param_1;
   if (( *param_1 != 0 ) && ( ( ( *param_1 & 0x80 ) == 0 || ( puVar4 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar4 == (uint*)0x0 ) )) {
      return 0;
   }
   if (( ( ( ( *(byte*)( *(long*)( *(int**)( puVar4 + 6 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( puVar4 + 6 ) ),iVar2 != 0x10000 ) ) && ( 0x303 < iVar2 )) {
      uVar1 = *(undefined2*)( (long)puVar4 + 0x4de );
   } else {
      uVar1 = *(undefined2*)( *(long*)( puVar4 + 0x240 ) + 0x308 );
   }
   uVar3 = tls1_group_id2name(*(undefined8*)( param_1 + 2 ), uVar1);
   return uVar3;
}undefined8 *SSL_group_to_name(long param_1, uint param_2) {
   ushort uVar1;
   undefined8 *puVar2;
   if (( param_2 & 0x1000000 ) == 0) {
      uVar1 = tls1_nid2group_id(param_2);
      param_2 = (uint)uVar1;
   } else {
      param_2 = param_2 & 0xffff;
   }
   puVar2 = (undefined8*)tls1_group_id_lookup(*(undefined8*)( param_1 + 8 ), param_2);
   if (puVar2 != (undefined8*)0x0) {
      puVar2 = (undefined8*)*puVar2;
   }
   return puVar2;
}
