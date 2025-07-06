bool tls_unprocessed_read_pending(long param_1) {
   return *(long*)( param_1 + 0x6c0 ) != 0;
}bool tls_processed_read_pending(long param_1) {
   return *(ulong*)( param_1 + 0xfd8 ) < *(ulong*)( param_1 + 0xfd0 );
}long tls_app_data_pending(long param_1) {
   int *piVar1;
   long lVar2;
   ulong uVar3;
   uVar3 = *(ulong*)( param_1 + 0xfd8 );
   if (uVar3 < *(ulong*)( param_1 + 0xfd0 )) {
      lVar2 = 0;
      piVar1 = (int*)( param_1 + 0x6d4 + uVar3 * 0x48 );
      do {
         if (*piVar1 != 0x17) {
            return lVar2;
         }
         uVar3 = uVar3 + 1;
         lVar2 = lVar2 + *(long*)( piVar1 + 1 );
         piVar1 = piVar1 + 0x12;
      } while ( uVar3 != *(ulong*)( param_1 + 0xfd0 ) );
   } else {
      lVar2 = 0;
   }
   return lVar2;
}void tls_get_max_records(long param_1, undefined1 param_2) {
   for (int i_45 = 0; i_45 < 2; i_45++) {
      /* WARNING: Could not recover jumptable at 0x0010009f. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x40 ) )(param_1, param_2);
   return;
}undefined4 tls_get_alert_code(long param_1) {
   return *(undefined4*)( param_1 + 0x1008 );
}void tls_set_protocol_version(long param_1) {
   for (int i_46 = 0; i_46 < 2; i_46++) {
      /* WARNING: Could not recover jumptable at 0x001000cb. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x18 ) )();
   return;
}void tls_set_plain_alerts(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x10d0 ) = param_2;
   return;
}void tls_set_first_handshake(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x1048 ) = param_2;
   return;
}void tls_set_max_pipelines(long param_1, ulong param_2) {
   *(ulong*)( param_1 + 0x1140 ) = param_2;
   if (1 < param_2) {
      *(undefined4*)( param_1 + 0x100c ) = 1;
   }
   return;
}void tls_get_state(long param_1, undefined8 *param_2, undefined8 *param_3) {
   char *pcVar1;
   char *pcVar2;
   pcVar1 = "read header";
   pcVar2 = "RH";
   if (*(int*)( param_1 + 0xfe8 ) != 0xf0) {
      pcVar1 = "read body";
      pcVar2 = "RB";
      if (*(int*)( param_1 + 0xfe8 ) != 0xf1) {
         pcVar1 = "unknown";
         pcVar2 = pcVar1;
      }
   }
   if (param_2 != (undefined8*)0x0) {
      *param_2 = pcVar2;
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = pcVar1;
   }
   return;
}void tls_set_max_frag_len(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x104c ) = param_2;
   return;
}undefined8 tls_set_options(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   lVar2 = OSSL_PARAM_locate_const(param_2, "options");
   if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar2, param_1 + 0x50);
      if (iVar1 == 0) {
         ERR_new();
         uVar3 = 0x4b0;
         goto LAB_001002a9;
      }
   }
   lVar2 = OSSL_PARAM_locate_const(param_2, &_LC7);
   if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint32(lVar2, param_1 + 0x58);
      if (iVar1 == 0) {
         ERR_new();
         uVar3 = 0x4b6;
         goto LAB_001002a9;
      }
   }
   if (*(int*)( param_1 + 0x1c ) == 0) {
      lVar2 = OSSL_PARAM_locate_const(param_2, "read_buffer_len");
      if (lVar2 != 0) {
         iVar1 = OSSL_PARAM_get_size_t(lVar2, param_1 + 0x6a8);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x4be;
            goto LAB_001002a9;
         }
      }
   } else {
      lVar2 = OSSL_PARAM_locate_const(param_2, "block_padding");
      if (lVar2 != 0) {
         iVar1 = OSSL_PARAM_get_size_t(lVar2, param_1 + 0x1060);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x4c5;
            goto LAB_001002a9;
         }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2, "hs_padding");
      if (lVar2 != 0) {
         iVar1 = OSSL_PARAM_get_size_t(lVar2, param_1 + 0x1068);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x4cb;
            goto LAB_001002a9;
         }
      }
   }
   if (*(int*)( param_1 + 0x20 ) == 3) {
      lVar2 = OSSL_PARAM_locate_const(param_2, "read_ahead");
      if (lVar2 != 0) {
         iVar1 = OSSL_PARAM_get_int(lVar2, param_1 + 0x100c);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x4da;
            LAB_001002a9:ERR_set_debug("ssl/record/methods/tls_common.c", uVar3, "tls_set_options");
            ERR_set_error(0x14, 0x13c, 0);
            return 0;
         }
      }
   }
   return 1;
}undefined8 tls_set1_bio(long param_1, long param_2) {
   undefined8 uVar1;
   if (( param_2 != 0 ) && ( uVar1 = BIO_up_ref(param_2) ),(int)uVar1 == 0) {
      return uVar1;
   }
   BIO_free(*(BIO**)( param_1 + 0x40 ));
   *(long*)( param_1 + 0x40 ) = param_2;
   return 1;
}undefined8 tls_get_compression(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x1040 ) != 0) {
      uVar1 = COMP_CTX_get_method();
      return uVar1;
   }
   return 0;
}undefined8 tls_free_buffers(long param_1) {
   undefined8 *puVar1;
   ulong uVar2;
   if (*(int*)( param_1 + 0x1c ) != 1) {
      if (*(ulong*)( param_1 + 0xfd8 ) < *(ulong*)( param_1 + 0xfd0 )) {
         return 0;
      }
      if (*(ulong*)( param_1 + 0xfd8 ) != *(ulong*)( param_1 + 0xfe0 )) {
         return 0;
      }
      if (*(long*)( param_1 + 0x6c0 ) != 0) {
         return 0;
      }
      if (*(int*)( param_1 + 0xfe8 ) != 0xf1) {
         if (( *(byte*)( param_1 + 0x50 ) & 2 ) != 0) {
            OPENSSL_cleanse(*(void**)( param_1 + 0x6a0 ), *(size_t*)( param_1 + 0x6b0 ));
         }
         CRYPTO_free(*(void**)( param_1 + 0x6a0 ));
         *(undefined8*)( param_1 + 0x6a0 ) = 0;
         *(undefined8*)( param_1 + 0xff0 ) = 0;
         *(undefined8*)( param_1 + 0xff8 ) = 0;
         return 1;
      }
      return 0;
   }
   uVar2 = *(ulong*)( param_1 + 0x698 );
   if (*(ulong*)( param_1 + 0x690 ) < uVar2) {
      if (( *(ulong*)( param_1 + 0x690 ) != 0 ) || ( uVar2 != 1 )) {
         return 0;
      }
      if (*(long*)( param_1 + 0x80 ) != 0) {
         return 0;
      }
   } else if (uVar2 == 0) goto LAB_001004d3;
   puVar1 = (undefined8*)( ( uVar2 * 3 + 3 ) * 0x10 + param_1 );
   do {
      while (uVar2 = uVar2 - 1,*(int*)( puVar1 + 5 ) == 0) {
         CRYPTO_free((void*)*puVar1);
         *puVar1 = 0;
         puVar1 = puVar1 + -6;
         if (uVar2 == 0) goto LAB_001004d3;
      };
      *(undefined4*)( puVar1 + 5 ) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + -6;
   } while ( uVar2 != 0 );
   LAB_001004d3:*(undefined8*)( param_1 + 0x698 ) = 0;
   return 1;
}void ossl_tls_buffer_release(undefined8 *param_1) {
   CRYPTO_free((void*)*param_1);
   *param_1 = 0;
   return;
}void tls_int_free(void *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   BIO_free(*(BIO**)( (long)param_1 + 0x38 ));
   BIO_free(*(BIO**)( (long)param_1 + 0x40 ));
   BIO_free(*(BIO**)( (long)param_1 + 0x48 ));
   ossl_tls_buffer_release((long)param_1 + 0x6a0);
   lVar3 = *(long*)( (long)param_1 + 0x698 );
   if (lVar3 != 0) {
      puVar1 = (undefined8*)( ( lVar3 * 3 + 3 ) * 0x10 + (long)param_1 );
      do {
         while (lVar3 = lVar3 + -1,*(int*)( puVar1 + 5 ) == 0) {
            CRYPTO_free((void*)*puVar1);
            *puVar1 = 0;
            puVar1 = puVar1 + -6;
            if (lVar3 == 0) goto LAB_001005ff;
         };
         *(undefined4*)( puVar1 + 5 ) = 0;
         *puVar1 = 0;
         puVar1 = puVar1 + -6;
      } while ( lVar3 != 0 );
   }
   LAB_001005ff:*(undefined8*)( (long)param_1 + 0x698 ) = 0;
   EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX**)( (long)param_1 + 0x1020 ));
   EVP_MAC_CTX_free(*(undefined8*)( (long)param_1 + 0x1028 ));
   EVP_MD_CTX_free(*(undefined8*)( (long)param_1 + 0x1038 ));
   COMP_CTX_free(*(COMP_CTX**)( (long)param_1 + 0x1040 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x10c0 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x10c8 ));
   if (*(int*)( (long)param_1 + 0x14 ) == 0x300) {
      OPENSSL_cleanse((void*)( (long)param_1 + 0x1070 ), 0x40);
   }
   puVar1 = (undefined8*)( (long)param_1 + 0x700 );
   do {
      puVar2 = puVar1 + 9;
      CRYPTO_free((void*)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar2;
   } while ( puVar2 != (undefined8*)( (long)param_1 + 0x1000 ) );
   CRYPTO_free(param_1);
   return;
}undefined4 tls_free(long param_1) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar1 = 1;
   } else {
      uVar1 = 1;
      if (*(long*)( param_1 + 0x6c0 ) != 0) {
         uVar1 = BIO_write_ex(*(undefined8*)( param_1 + 0x48 ), *(long*)( param_1 + 0x6b8 ) + *(long*)( param_1 + 0x6a0 ), *(long*)( param_1 + 0x6c0 ), auStack_28);
      }
      tls_int_free(param_1);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_tls_rl_record_set_seq_num(long param_1, undefined8 *param_2) {
   *(undefined8*)( param_1 + 0x3a ) = *param_2;
   return;
}void ossl_rlayer_fatal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_e8;
   undefined4 local_e4;
   undefined1 *local_e0;
   undefined1 *local_d8;
   long local_d0;
   undefined1 local_c8[32];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   if (in_AL != '\0') {
      local_98 = param_1;
      local_88 = param_2;
      local_78 = param_3;
      local_68 = param_4;
      local_58 = param_5;
      local_48 = param_6;
      local_38 = param_7;
      local_28 = param_8;
   }
   local_d0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = &stack0x00000008;
   local_d8 = local_c8;
   local_e8 = 0x20;
   local_e4 = 0x30;
   local_a8 = param_13;
   local_a0 = param_14;
   ERR_vset_error(0x14, param_11, param_12, &local_e8);
   *(undefined4*)( param_9 + 0x1008 ) = param_10;
   if (local_d0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_read_record(long param_1, long *param_2, undefined4 *param_3, undefined1 *param_4, long *param_5, undefined8 *param_6, undefined2 *param_7, undefined8 *param_8) {
   long lVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   while (true) {
      uVar2 = *(ulong*)( param_1 + 0xfd8 );
      if (uVar2 < *(ulong*)( param_1 + 0xfd0 )) {
         lVar4 = uVar2 * 0x48;
         *(ulong*)( param_1 + 0xfd8 ) = uVar2 + 1;
         *param_2 = param_1 + 0x6d0 + lVar4;
         lVar1 = param_1 + lVar4;
         *param_3 = *(undefined4*)( lVar1 + 0x6d0 );
         *param_4 = (char)*(undefined4*)( lVar1 + 0x6d4 );
         *param_5 = *(long*)( lVar1 + 0x6e8 ) + *(long*)( lVar1 + 0x6f0 );
         *param_6 = *(undefined8*)( lVar1 + 0x6d8 );
         if (*(int*)( param_1 + 0x10 ) != 0) {
            *param_7 = *(undefined2*)( lVar1 + 0x708 );
            *param_8 = *(undefined8*)( param_1 + 0x70a + lVar4 );
         }
         return 1;
      }
      if (*(ulong*)( param_1 + 0xfe0 ) != *(ulong*)( param_1 + 0xfd0 )) break;
      uVar3 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x28 ) )(param_1);
      if ((int)uVar3 != 1) {
         return uVar3;
      }
   };
   ERR_new();
   ERR_set_debug("ssl/record/methods/tls_common.c", 0x469, "tls_read_record");
   ossl_rlayer_fatal(param_1, 0x50, 0x141, 0);
   return 0xfffffffe;
}undefined8 tls_release_record(long param_1, long param_2, size_t param_3) {
   long *plVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   uVar2 = *(ulong*)( param_1 + 0xfe0 );
   if (( param_2 == param_1 + 0x6d0 + uVar2 * 0x48 ) && ( uVar2 < *(ulong*)( param_1 + 0xfd8 ) )) {
      lVar4 = param_1 + uVar2 * 0x48;
      uVar3 = *(ulong*)( lVar4 + 0x6d8 );
      if (param_3 <= uVar3) {
         if (( *(byte*)( param_1 + 0x50 ) & 2 ) != 0) {
            OPENSSL_cleanse((void*)( *(long*)( lVar4 + 0x6e8 ) + *(long*)( lVar4 + 0x6f0 ) ), param_3);
            uVar3 = *(ulong*)( lVar4 + 0x6d8 );
         }
         lVar4 = param_1 + uVar2 * 0x48;
         plVar1 = (long*)( lVar4 + 0x6e8 );
         *plVar1 = *plVar1 + param_3;
         *(ulong*)( lVar4 + 0x6d8 ) = uVar3 - param_3;
         if (( ( ( uVar3 - param_3 == 0 ) && ( lVar4 = *(long*)( param_1 + 0xfe0 ) + 1 ),*(long*)( param_1 + 0xfe0 ) = lVar4,lVar4 == *(long*)( param_1 + 0xfd8 ) ) ) && ( ( *(byte*)( param_1 + 0x58 ) & 0x10 ) != 0 )) {
            if (( *(byte*)( param_1 + 0x50 ) & 2 ) != 0) {
               OPENSSL_cleanse(*(void**)( param_1 + 0x6a0 ), *(size_t*)( param_1 + 0x6b0 ));
            }
            CRYPTO_free(*(void**)( param_1 + 0x6a0 ));
            *(undefined8*)( param_1 + 0x6a0 ) = 0;
            *(undefined8*)( param_1 + 0xff0 ) = 0;
            *(undefined8*)( param_1 + 0xff8 ) = 0;
         }
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x493, "tls_release_record");
      ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x48d, "tls_release_record");
      ossl_rlayer_fatal(param_1, 0x50, 0x13d, 0);
   }
   return 0xfffffffe;
}undefined8 tls_retry_write_records(long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   int iVar4;
   int *piVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   ulong uVar9;
   BIO *b;
   long lVar10;
   ulong uVar11;
   long lVar12;
   uVar11 = *(ulong*)( param_1 + 0x690 );
   if (uVar11 < *(ulong*)( param_1 + 0x698 )) {
      piVar5 = __errno_location();
      LAB_00100bb1:do {
         b = *(BIO**)( param_1 + 0x40 );
         *piVar5 = 0;
         if (b == (BIO*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/record/methods/tls_common.c", 0x799, "tls_retry_write_records");
            ossl_rlayer_fatal(param_1, 0x50, 0x80, 0);
            LAB_00100d93:uVar6 = 0xfffffffe;
            LAB_00100ca4:if (*(int*)( param_1 + 0x10 ) == 0) {
               return uVar6;
            }
            *(undefined8*)( param_1 + 0x80 + uVar11 * 0x30 ) = 0;
            lVar12 = *(long*)( param_1 + 0x690 );
            lVar10 = *(long*)( param_1 + 0x698 );
            lVar7 = lVar12 + 1;
            *(long*)( param_1 + 0x690 ) = lVar7;
            if (lVar7 != lVar10) {
               return uVar6;
            }
            if (( *(byte*)( param_1 + 0x58 ) & 0x10 ) == 0) {
               return uVar6;
            }
            if (lVar10 != 0) {
               puVar8 = (undefined8*)( ( lVar12 * 3 + 6 ) * 0x10 + param_1 );
               do {
                  lVar10 = lVar10 + -1;
                  if (*(int*)( puVar8 + 5 ) == 0) {
                     CRYPTO_free((void*)*puVar8);
                     *puVar8 = 0;
                  } else {
                     *(undefined4*)( puVar8 + 5 ) = 0;
                     *puVar8 = 0;
                  }
                  puVar8 = puVar8 + -6;
               } while ( lVar10 != 0 );
            }
            *(undefined8*)( param_1 + 0x698 ) = 0;
            return uVar6;
         }
         pcVar3 = *(code**)( *(long*)( param_1 + 0x1148 ) + 0x88 );
         if (pcVar3 != (code*)0x0) {
            uVar6 = ( *pcVar3 )(param_1, *(undefined4*)( param_1 + 0x8c + uVar11 * 0x30 ));
            if ((int)uVar6 != 1) {
               return uVar6;
            }
            b = *(BIO**)( param_1 + 0x40 );
         }
         lVar12 = uVar11 * 0x30;
         lVar7 = param_1 + lVar12;
         iVar4 = BIO_write(b, (void*)( *(long*)( lVar7 + 0x78 ) + *(long*)( lVar7 + 0x60 ) ), *(int*)( lVar7 + 0x80 ));
         if (iVar4 < 0) {
            iVar4 = BIO_test_flags(*(BIO**)( param_1 + 0x40 ), 8);
            if (iVar4 != 0) {
               LAB_00100ca2:uVar6 = 0;
               goto LAB_00100ca4;
            }
            ERR_new();
            ERR_set_debug("ssl/record/methods/tls_common.c", 0x793, "tls_retry_write_records");
            ERR_set_error(2, *piVar5, "tls_retry_write_records failure");
            goto LAB_00100d93;
         }
         if (iVar4 == 0) {
            iVar4 = BIO_test_flags(*(BIO**)( param_1 + 0x40 ), 8);
            lVar7 = *(long*)( lVar7 + 0x80 );
            if (iVar4 == 0) {
               if (lVar7 != 0) {
                  uVar6 = 1;
                  goto LAB_00100ca4;
               }
            } else if (lVar7 != 0) goto LAB_00100ca2;
         } else {
            plVar1 = (long*)( param_1 + 0x78 + lVar12 );
            lVar10 = plVar1[1];
            lVar7 = (long)iVar4;
            uVar9 = *(ulong*)( param_1 + 0x690 );
            if (lVar7 != lVar10) {
               plVar2 = (long*)( param_1 + 0x78 + lVar12 );
               *plVar2 = *plVar1 + lVar7;
               plVar2[1] = lVar10 - lVar7;
               uVar11 = uVar9;
               goto LAB_00100bb1;
            }
         }
         lVar12 = uVar11 * 0x30 + param_1;
         plVar1 = (long*)( lVar12 + 0x78 );
         *plVar1 = *plVar1 + lVar7;
         *(undefined8*)( lVar12 + 0x80 ) = 0;
         lVar7 = *(long*)( param_1 + 0x690 );
         uVar9 = *(ulong*)( param_1 + 0x698 );
         uVar11 = lVar7 + 1;
         *(ulong*)( param_1 + 0x690 ) = uVar11;
      } while ( uVar11 < uVar9 );
      if (( uVar11 == uVar9 ) && ( ( *(byte*)( param_1 + 0x58 ) & 0x10 ) != 0 )) {
         if (uVar9 != 0) {
            puVar8 = (undefined8*)( ( lVar7 * 3 + 6 ) * 0x10 + param_1 );
            do {
               while (uVar9 = uVar9 - 1,*(int*)( puVar8 + 5 ) == 0) {
                  CRYPTO_free((void*)*puVar8);
                  *puVar8 = 0;
                  puVar8 = puVar8 + -6;
                  if (uVar9 == 0) goto LAB_00100ea0;
               };
               *(undefined4*)( puVar8 + 5 ) = 0;
               *puVar8 = 0;
               puVar8 = puVar8 + -6;
            } while ( uVar9 != 0 );
         }
         LAB_00100ea0:*(undefined8*)( param_1 + 0x698 ) = 0;
      }
   }
   return 1;
}undefined8 tls_write_records(long param_1) {
   int iVar1;
   undefined8 uVar2;
   if (( *(ulong*)( param_1 + 0x690 ) < *(ulong*)( param_1 + 0x698 ) ) && ( *(long*)( param_1 + 0x80 + *(ulong*)( param_1 + 0x690 ) * 0x30 ) != 0 )) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x764, "tls_write_records");
      ossl_rlayer_fatal(param_1, 0x50, 0xc0101, 0);
   } else {
      iVar1 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x48 ) )(param_1);
      if (iVar1 != 0) {
         *(undefined8*)( param_1 + 0x690 ) = 0;
         uVar2 = tls_retry_write_records(param_1);
         return uVar2;
      }
   }
   return 0xfffffffe;
}undefined8 tls_increment_sequence_ctr(long param_1) {
   char *pcVar1;
   pcVar1 = (char*)( param_1 + 0x1007 );
   *pcVar1 = *pcVar1 + '\x01';
   if (*pcVar1 != '\0') {
      return 1;
   }
   pcVar1 = (char*)( param_1 + 0x1006 );
   *pcVar1 = *pcVar1 + '\x01';
   if (*pcVar1 == '\0') {
      pcVar1 = (char*)( param_1 + 0x1005 );
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
         pcVar1 = (char*)( param_1 + 0x1004 );
         *pcVar1 = *pcVar1 + '\x01';
         if (*pcVar1 == '\0') {
            pcVar1 = (char*)( param_1 + 0x1003 );
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
               pcVar1 = (char*)( param_1 + 0x1002 );
               *pcVar1 = *pcVar1 + '\x01';
               if (*pcVar1 == '\0') {
                  pcVar1 = (char*)( param_1 + 0x1001 );
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 == '\0') {
                     pcVar1 = (char*)( param_1 + 0x1000 );
                     *pcVar1 = *pcVar1 + '\x01';
                     if (*pcVar1 == '\0') {
                        ERR_new();
                        ERR_set_debug("ssl/record/methods/tls_common.c", 0x829, "tls_increment_sequence_ctr");
                        ossl_rlayer_fatal(param_1, 0x50, 0x147, 0);
                        return 0;
                     }
                  }
               }
            }
         }
      }
   }
   return 1;
}bool ossl_set_tls_provider_parameters(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   long local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   uVar2 = EVP_CIPHER_get_flags(param_3);
   if (( ( ( uVar2 & 0x200000 ) == 0 ) && ( *(int*)( param_1 + 0x10b0 ) == 0 ) ) && ( iVar1= EVP_MD_get_size(param_4),0 < iVar1 )) {
      local_a0 = (long)iVar1;
   }
   OSSL_PARAM_construct_int(&local_d8, "tls-version", param_1 + 0x14);
   local_98 = local_d8;
   uStack_90 = uStack_d0;
   local_88 = local_c8;
   uStack_80 = uStack_c0;
   local_78 = local_b8;
   OSSL_PARAM_construct_size_t(&local_d8, "tls-mac-size", &local_a0);
   local_50 = local_b8;
   local_70 = local_d8;
   uStack_68 = uStack_d0;
   local_60 = local_c8;
   uStack_58 = uStack_c0;
   OSSL_PARAM_construct_end(&local_d8);
   local_48 = local_d8;
   uStack_40 = uStack_d0;
   local_28 = local_b8;
   local_38 = local_c8;
   uStack_30 = uStack_c0;
   iVar1 = EVP_CIPHER_CTX_set_params(param_2, &local_98);
   if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x56, "ossl_set_tls_provider_parameters");
      ERR_set_error(0x14, 0xc0103, 0);
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1 != 0;
}bool ssl3_cbc_record_digest_supported(void) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = EVP_MD_CTX_get0_md();
   iVar1 = EVP_MD_get_type(uVar2);
   if (iVar1 == 0x40) {
      return true;
   }
   if (0x40 < iVar1) {
      return iVar1 - 0x2a0U < 4;
   }
   return iVar1 == 4;
}undefined8 tls_setup_write_buffer(long param_1, ulong param_2, long param_3, long param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   void *ptr;
   undefined8 *puVar4;
   long lVar5;
   undefined1(*pauVar6)[16];
   ulong uVar7;
   ulong uVar8;
   if (( param_3 != 0 ) && ( ( param_2 < 2 || ( param_4 != 0 ) ) )) {
      lVar5 = 0;
      goto LAB_001012f1;
   }
   iVar2 = *(int*)( param_1 + 0x10 );
   lVar1 = ( -(ulong)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff7 ) + 0x15 + ( ulong ) * (uint*)( param_1 + 0x104c ) + *(long*)( param_1 + 0x1030 ) + ( ulong )(*(int*)( param_1 + 0x14 ) == 0x304);
   uVar8 = *(ulong*)( param_1 + 0x50 );
   lVar5 = lVar1 + 0x50;
   if (( uVar8 & 0x20000 ) == 0) {
      if (*(code**)( param_1 + 0x1130 ) != (code*)0x0) {
         iVar3 = ( **(code**)( param_1 + 0x1130 ) )(*(undefined8*)( param_1 + 0x1118 ), 0xf, 0, 0, 0);
         if (iVar3 == 0) {
            uVar8 = *(ulong*)( param_1 + 0x50 );
            goto LAB_001012e7;
         }
         uVar8 = *(ulong*)( param_1 + 0x50 );
      }
      lVar5 = lVar1 + 0x450;
   }
   LAB_001012e7:if (( uVar8 & 0x800 ) == 0) {
      lVar5 = ( -(ulong)(iVar2 == 0) & 0xfffffffffffffff7 ) + 0x65 + lVar5;
   }
   LAB_001012f1:if (param_2 == 0) {
      uVar7 = 0;
   } else {
      uVar8 = 0;
      pauVar6 = (undefined1(*) [16])( param_1 + 0x60 );
      do {
         ptr = *(void**)*pauVar6;
         if (param_3 == 0) {
            param_3 = lVar5;
         }
         if (*(long*)pauVar6[1] == param_3) {
            if (ptr == (void*)0x0) goto LAB_00101330;
         } else {
            CRYPTO_free(ptr);
            *(undefined8*)*pauVar6 = 0;
            LAB_00101330:ptr = CRYPTO_malloc((int)param_3, "ssl/record/methods/tls_common.c", 0xc4);
            if (ptr == (void*)0x0) {
               if (*(ulong*)( param_1 + 0x698 ) < uVar8) {
                  *(ulong*)( param_1 + 0x698 ) = uVar8;
               }
               ERR_new();
               ERR_set_debug("ssl/record/methods/tls_common.c", 0xcd, "tls_setup_write_buffer");
               ossl_rlayer_fatal(param_1, 0xffffffff, 0x8000f, 0);
               return 0;
            }
         }
         uVar8 = uVar8 + 1;
         *pauVar6 = (undefined1[16])0x0;
         pauVar6[1] = (undefined1[16])0x0;
         *(void**)*pauVar6 = ptr;
         *(long*)pauVar6[1] = param_3;
         pauVar6[2] = (undefined1[16])0x0;
         param_3 = param_4;
         uVar7 = param_2;
         pauVar6 = pauVar6 + 3;
      } while ( param_2 != uVar8 );
   }
   uVar8 = *(ulong*)( param_1 + 0x698 );
   if (uVar7 < uVar8) {
      puVar4 = (undefined8*)( ( uVar8 * 3 + 3 ) * 0x10 + param_1 );
      do {
         while (uVar8 = uVar8 - 1,*(int*)( puVar4 + 5 ) != 0) {
            *(undefined4*)( puVar4 + 5 ) = 0;
            *puVar4 = 0;
            puVar4 = puVar4 + -6;
            if (uVar8 <= uVar7) goto LAB_001013f3;
         };
         CRYPTO_free((void*)*puVar4);
         *puVar4 = 0;
         puVar4 = puVar4 + -6;
      } while ( uVar7 < uVar8 );
   }
   LAB_001013f3:*(ulong*)( param_1 + 0x698 ) = param_2;
   return 1;
}bool tls_setup_read_buffer(long param_1) {
   int iVar1;
   void *pvVar2;
   ulong uVar3;
   long lVar4;
   if (*(long*)( param_1 + 0x6a0 ) != 0) {
      return true;
   }
   lVar4 = ( ulong )(*(int*)( param_1 + 0x104c ) + 0x140) + ( -(ulong)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff8 ) + 0xd;
   uVar3 = lVar4 + 7;
   if (( *(byte*)( param_1 + 0x52 ) & 2 ) == 0) {
      if (*(code**)( param_1 + 0x1130 ) != (code*)0x0) {
         iVar1 = ( **(code**)( param_1 + 0x1130 ) )(*(undefined8*)( param_1 + 0x1118 ), 0xf, 0, 0, 0);
         if (iVar1 == 0) goto LAB_0010151f;
      }
      uVar3 = lVar4 + 0x407;
   }
   LAB_0010151f:if (1 < *(ulong*)( param_1 + 0x1140 )) {
      uVar3 = uVar3 * *(ulong*)( param_1 + 0x1140 );
   }
   if (uVar3 < *(ulong*)( param_1 + 0x6a8 )) {
      uVar3 = *(ulong*)( param_1 + 0x6a8 );
   }
   pvVar2 = CRYPTO_malloc((int)uVar3, "ssl/record/methods/tls_common.c", 0x105);
   if (pvVar2 == (void*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x10b, "tls_setup_read_buffer");
      ossl_rlayer_fatal(param_1, 0xffffffff, 0x8000f, 0);
   } else {
      *(ulong*)( param_1 + 0x6b0 ) = uVar3;
      *(void**)( param_1 + 0x6a0 ) = pvVar2;
   }
   return pvVar2 != (void*)0x0;
}undefined8 tls_alloc_buffers(long param_1) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0x1c ) == 1) {
      if (*(ulong*)( param_1 + 0x698 ) <= *(ulong*)( param_1 + 0x690 )) {
         uVar1 = tls_setup_write_buffer(param_1, 1, 0, 0);
         if ((int)uVar1 != 0) {
            uVar1 = 1;
            *(undefined8*)( param_1 + 0x80 ) = 0;
         }
         return uVar1;
      }
   } else if (( *(ulong*)( param_1 + 0xfd0 ) <= *(ulong*)( param_1 + 0xfd8 ) ) && ( *(long*)( param_1 + 0x6c0 ) == 0 )) {
      uVar1 = tls_setup_read_buffer();
      return uVar1;
   }
   return 1;
}undefined8 tls_default_read_n(long param_1, ulong param_2, ulong param_3, int param_4, int param_5, ulong *param_6) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   int *piVar4;
   undefined8 uVar5;
   long lVar6;
   BIO *b;
   ulong uVar7;
   void *__src;
   void *__dest;
   ulong uVar8;
   int local_48;
   if (param_2 == 0) {
      return 0xffffffff;
   }
   lVar6 = *(long*)( param_1 + 0x6a0 );
   uVar8 = *(ulong*)( param_1 + 0x6c0 );
   uVar3 = ( ulong )(-(int)lVar6 - 5U & 7);
   if (param_4 == 0) {
      if (uVar8 == 0) {
         *(ulong*)( param_1 + 0x6b8 ) = uVar3;
         uVar7 = uVar3;
      } else {
         uVar7 = *(ulong*)( param_1 + 0x6b8 );
      }
      *(undefined8*)( param_1 + 0xff8 ) = 0;
      __src = (void*)( uVar7 + lVar6 );
      *(void**)( param_1 + 0xff0 ) = __src;
   } else {
      __src = *(void**)( param_1 + 0xff0 );
   }
   if (__src == (void*)0x0) {
      ERR_new();
      uVar5 = 0x14c;
      goto LAB_00101931;
   }
   lVar1 = *(long*)( param_1 + 0xff8 );
   __dest = (void*)( lVar6 + uVar3 );
   if (( param_5 == 1 ) && ( __src != __dest )) {
      memmove(__dest, __src, uVar8 + lVar1);
      *(void**)( param_1 + 0xff0 ) = __dest;
      *(ulong*)( param_1 + 0x6b8 ) = uVar3 + lVar1;
   }
   if (*(int*)( param_1 + 0x10 ) == 0) {
      LAB_001016e0:if (uVar8 < param_2) {
         uVar3 = *(long*)( param_1 + 0x6b0 ) - *(long*)( param_1 + 0x6b8 );
         if (uVar3 < param_2) {
            ERR_new();
            uVar5 = 0x17a;
            LAB_00101931:ERR_set_debug("ssl/record/methods/tls_common.c", uVar5, "tls_default_read_n");
            ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
            return 0xfffffffe;
         }
         if (param_3 <= param_2) {
            param_3 = param_2;
         }
         if (uVar3 < param_3) {
            param_3 = uVar3;
         }
         if (*(int*)( param_1 + 0x10 ) == 0 && *(int*)( param_1 + 0x100c ) == 0) {
            param_3 = param_2;
         }
         piVar4 = __errno_location();
         do {
            b = *(BIO**)( param_1 + 0x38 );
            if (b == (BIO*)0x0) {
               b = *(BIO**)( param_1 + 0x40 );
               *piVar4 = 0;
               if (b != (BIO*)0x0) goto LAB_00101738;
               ERR_new();
               ERR_set_debug("ssl/record/methods/tls_common.c", 0x1ab, "tls_default_read_n");
               ossl_rlayer_fatal(param_1, 0x50, 0xd3, 0);
               LAB_001017c4:uVar5 = 0xfffffffe;
               LAB_00101872:*(ulong*)( param_1 + 0x6c0 ) = uVar8;
               if (( *(byte*)( param_1 + 0x58 ) & 0x10 ) == 0) {
                  return uVar5;
               }
               if (*(int*)( param_1 + 0x10 ) == 0) {
                  if (lVar1 + uVar8 == 0) {
                     if (( *(byte*)( param_1 + 0x50 ) & 2 ) != 0) {
                        OPENSSL_cleanse(*(void**)( param_1 + 0x6a0 ), *(size_t*)( param_1 + 0x6b0 ));
                     }
                     CRYPTO_free(*(void**)( param_1 + 0x6a0 ));
                     *(undefined8*)( param_1 + 0x6a0 ) = 0;
                     *(undefined8*)( param_1 + 0xff0 ) = 0;
                     *(undefined8*)( param_1 + 0xff8 ) = 0;
                     return uVar5;
                  }
                  return uVar5;
               }
               return uVar5;
            }
            *piVar4 = 0;
            LAB_00101738:local_48 = (int)param_3;
            iVar2 = BIO_read(b, (void*)( lVar1 + uVar8 + (long)__dest ), local_48 - (int)uVar8);
            if (iVar2 < 1) {
               iVar2 = BIO_test_flags(b, 8);
               if (iVar2 == 0) {
                  lVar6 = BIO_ctrl(b, 2, 0, (void*)0x0);
                  uVar5 = 0xfffffffd;
                  if ((int)lVar6 != 0) goto LAB_00101872;
                  goto LAB_001017c4;
               }
               if (*(BIO**)( param_1 + 0x38 ) == (BIO*)0x0) {
                  uVar5 = 0;
                  goto LAB_00101872;
               }
               BIO_free(*(BIO**)( param_1 + 0x38 ));
               *(undefined8*)( param_1 + 0x38 ) = 0;
            } else {
               uVar8 = uVar8 + (long)iVar2;
               if (( *(int*)( param_1 + 0x10 ) != 0 ) && ( uVar8 < param_2 )) {
                  param_2 = uVar8;
               }
            }
         } while ( uVar8 < param_2 );
         *(long*)( param_1 + 0x6b8 ) = *(long*)( param_1 + 0x6b8 ) + param_2;
         *(long*)( param_1 + 0xff8 ) = *(long*)( param_1 + 0xff8 ) + param_2;
         *(ulong*)( param_1 + 0x6c0 ) = uVar8 - param_2;
         goto LAB_00101820;
      }
      lVar6 = uVar8 - param_2;
      uVar8 = param_2;
   } else {
      if (uVar8 == 0) {
         if (param_4 != 0) {
            return 0xffffffff;
         }
         goto LAB_001016e0;
      }
      lVar6 = 0;
      if (param_2 <= uVar8) goto LAB_001016e0;
   }
   param_2 = uVar8;
   *(long*)( param_1 + 0xff8 ) = *(long*)( param_1 + 0xff8 ) + param_2;
   *(long*)( param_1 + 0x6b8 ) = *(long*)( param_1 + 0x6b8 ) + param_2;
   *(long*)( param_1 + 0x6c0 ) = lVar6;
   LAB_00101820:*param_6 = param_2;
   return 1;
}undefined8 tls_get_more_records(long param_1) {
   ushort uVar1;
   uint uVar2;
   ushort *puVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   char *pcVar9;
   ushort uVar10;
   uint *puVar11;
   long lVar12;
   uint *puVar13;
   undefined8 *puVar14;
   ushort uVar15;
   long lVar16;
   size_t len;
   uint *puVar17;
   long in_FS_OFFSET;
   long local_c8;
   undefined8 *local_b8;
   undefined1 local_90[8];
   undefined1 local_88[72];
   long local_40;
   puVar13 = (uint*)( param_1 + 0x6d0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x6a0 ) != 0 ) || ( iVar4 = iVar4 != 0 )) {
      lVar16 = *(long*)( param_1 + 0x1140 );
      local_c8 = 0;
      puVar17 = puVar13;
      if (lVar16 == 0) {
         lVar16 = 1;
      }
      do {
         puVar11 = puVar17;
         if (( *(int*)( param_1 + 0xfe8 ) == 0xf1 ) && ( 4 < *(ulong*)( param_1 + 0xff8 ) )) {
            lVar7 = *(long*)( puVar11 + 2 );
            if (*puVar11 != 2) goto LAB_00101b9e;
            LAB_00101e70:lVar7 = lVar7 + -3;
            if (lVar7 != 0) goto LAB_00101ba7;
            *(undefined4*)( param_1 + 0xfe8 ) = 0xf0;
            lVar7 = *(long*)( param_1 + 0xff0 );
            uVar6 = 3;
            LAB_00101e90:lVar7 = lVar7 + 2;
         } else {
            uVar6 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x20 ) )(param_1, 5, *(undefined8*)( param_1 + 0x6b0 ), 0, local_c8 == 0, local_90);
            if ((int)uVar6 < 1) goto LAB_00101da8;
            uVar8 = *(ulong*)( param_1 + 0xff8 );
            puVar3 = *(ushort**)( param_1 + 0xff0 );
            *(undefined4*)( param_1 + 0xfe8 ) = 0xf1;
            uVar6 = _LC15;
            if ((long)uVar8 < 0) {
               ERR_new();
               ERR_set_debug("ssl/record/methods/tls_common.c", 0x252, "tls_get_more_records");
               ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
               break;
            }
            if (uVar8 < 3) {
               ERR_new();
               uVar6 = 600;
               LAB_00101e09:ERR_set_debug("ssl/record/methods/tls_common.c", uVar6, "tls_get_more_records");
               ossl_rlayer_fatal(param_1, 0x32, 0xc0103, 0);
               uVar6 = 0xfffffffe;
               goto LAB_00101da8;
            }
            uVar1 = *(ushort*)( (long)puVar3 + 1 );
            if (( ( ( *(int*)( param_1 + 0x18 ) == 1 ) && ( *(int*)( param_1 + 0x10d4 ) != 0 ) ) && ( uVar10 = *puVar3 << 8 | *puVar3 >> 8 ),(byte)puVar3[1] == 1 )) {
               uVar8 = ( ulong )(uVar10 & 0x7fff);
               *(ulong*)( puVar11 + 2 ) = uVar8;
               *(undefined8*)puVar11 = uVar6;
               if (*(long*)( param_1 + 0x6b0 ) - 2U < uVar8) {
                  ERR_new();
                  uVar6 = 0x272;
                  LAB_00101f20:ERR_set_debug("ssl/record/methods/tls_common.c", uVar6, "tls_get_more_records");
                  ossl_rlayer_fatal(param_1, 0x16, 0xc6, 0);
                  break;
               }
            } else {
               if (uVar8 - 3 < 2) {
                  if (*(code**)( param_1 + 0x1128 ) != (code*)0x0) {
                     ( **(code**)( param_1 + 0x1128 ) )(0, 0, 0x100, puVar3, 5, *(undefined8*)( param_1 + 0x1118 ));
                  }
                  ERR_new();
                  uVar6 = 0x27f;
                  goto LAB_00101e09;
               }
               uVar10 = *(ushort*)( (long)puVar3 + 3 );
               uVar15 = uVar1 << 8 | uVar1 >> 8;
               puVar11[1] = ( uint )(byte) * puVar3;
               uVar8 = ( ulong )(ushort)(uVar10 << 8 | uVar10 >> 8);
               *puVar11 = (uint)uVar15;
               *(ulong*)( puVar11 + 2 ) = uVar8;
               if (uVar1 == 0x200) {
                  ERR_new();
                  ERR_set_debug("ssl/record/methods/tls_common.c", 0x28c, "tls_get_more_records");
                  ossl_rlayer_fatal(param_1, 0x46, 0x10b, 0);
                  break;
               }
               if (*(code**)( param_1 + 0x1128 ) != (code*)0x0) {
                  ( **(code**)( param_1 + 0x1128 ) )(0, uVar15, 0x100, puVar3, 5, *(undefined8*)( param_1 + 0x1118 ));
                  uVar8 = *(ulong*)( puVar11 + 2 );
               }
               if (*(long*)( param_1 + 0x6b0 ) - 5U < uVar8) {
                  ERR_new();
                  uVar6 = 0x296;
                  goto LAB_00101f20;
               }
            }
            iVar4 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x30 ) )(param_1, puVar11);
            if (iVar4 == 0) break;
            lVar7 = *(long*)( puVar11 + 2 );
            if (*puVar11 == 2) goto LAB_00101e70;
            LAB_00101b9e:if (lVar7 == 0) {
               *(undefined4*)( param_1 + 0xfe8 ) = 0xf0;
               lVar7 = *(long*)( param_1 + 0xff0 );
               uVar6 = 0;
            } else {
               LAB_00101ba7:uVar6 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x20 ) )(param_1, lVar7, lVar7, 1, 0, local_90);
               if ((int)uVar6 < 1) goto LAB_00101da8;
               uVar2 = *puVar11;
               uVar6 = *(undefined8*)( puVar11 + 2 );
               *(undefined4*)( param_1 + 0xfe8 ) = 0xf0;
               lVar7 = *(long*)( param_1 + 0xff0 );
               if (uVar2 == 2) goto LAB_00101e90;
            }
            lVar7 = lVar7 + 5;
         }
         local_c8 = local_c8 + 1;
         *(undefined8*)( puVar11 + 4 ) = uVar6;
         *(long*)( puVar11 + 8 ) = lVar7;
         *(long*)( puVar11 + 10 ) = lVar7;
         *(undefined8*)( param_1 + 0xff8 ) = 0;
         *(undefined4*)( param_1 + 0x10d4 ) = 0;
         if (( ( ( local_c8 == lVar16 ) || ( puVar11[1] != 0x17 ) ) || ( ( uVar2 = *(uint*)( param_1 + 0x14 )(uVar2 & 0xfffffffd) != 0xfefd && uVar2 != 0x100 && ( 1 < uVar2 - 0x302 ) ) ) ) || ( *(long*)( param_1 + 0x1020 ) == 0 )) goto LAB_00101c9a;
         uVar6 = EVP_CIPHER_CTX_get0_cipher();
         uVar8 = EVP_CIPHER_get_flags(uVar6);
         if (( ( ( uVar8 & 0x800000 ) == 0 ) || ( *(long*)( param_1 + 0x6a0 ) == 0 ) ) || ( ( *(ulong*)( param_1 + 0x6c0 ) < 5 || ( ( pcVar9 = (char*)( *(long*)( param_1 + 0x6a0 ) + *(long*)( param_1 + 0x6b8 ) ) * pcVar9 != '\x17' || ( uVar1= *(ushort *)(pcVar9 + 3),puVar17 = puVar11 + 0x12,*(ulong*)( param_1 + 0x6c0 ) < ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) + 5 ) ) ) ) )) goto LAB_00101c9a;
      } while ( true );
   }
   LAB_00101d9f:uVar6 = 0xfffffffe;
   LAB_00101da8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
   LAB_00101c9a:if (( local_c8 != 1 ) || ( ( ( puVar11[1] != 0x14 || ( *(int*)( param_1 + 0x14 ) != 0x304 ) ) || ( *(int*)( param_1 + 0x1048 ) == 0 ) ) )) {
      if (*(long*)( param_1 + 0x1038 ) == 0) {
         LAB_00101fd0:local_b8 = (undefined8*)0x0;
         len = 0;
      } else {
         lVar16 = EVP_MD_CTX_get0_md();
         if (lVar16 == 0) {
            if (( *(int*)( param_1 + 0x10b0 ) != 0 ) && ( *(long*)( param_1 + 0x1038 ) != 0 )) {
               len = 0;
               LAB_00101cf9:puVar17 = puVar13;
               do {
                  if (*(ulong*)( puVar17 + 2 ) < len) {
                     ERR_new();
                     ERR_set_debug("ssl/record/methods/tls_common.c", 0x31b, "tls_get_more_records");
                     ossl_rlayer_fatal(param_1, 0x32, 0xa0, 0);
                     goto LAB_00101d9f;
                  }
                  lVar16 = *(long*)( param_1 + 0x1148 );
                  lVar12 = *(ulong*)( puVar17 + 2 ) - len;
                  *(long*)( puVar17 + 2 ) = lVar12;
                  lVar7 = *(long*)( puVar17 + 8 );
                  iVar4 = ( **(code**)( lVar16 + 0x10 ) )(param_1, puVar17, local_88, 0);
                  if (( iVar4 == 0 ) || ( iVar4 = CRYPTO_memcmp(local_88, (void*)( lVar12 + lVar7 ), len) ),iVar4 != 0) {
                     ERR_new();
                     ERR_set_debug("ssl/record/methods/tls_common.c", 0x322, "tls_get_more_records");
                     ossl_rlayer_fatal(param_1, 0x14, 0x119, 0);
                     goto LAB_00101d9f;
                  }
                  puVar17 = puVar17 + 0x12;
               } while ( puVar17 != puVar13 + local_c8 * 0x12 );
            }
            goto LAB_00101fd0;
         }
         iVar4 = EVP_MD_get_size(lVar16);
         if (0x3f < iVar4 - 1U) {
            ERR_new();
            ERR_set_debug("ssl/record/methods/tls_common.c", 0x309, "tls_get_more_records");
            ossl_rlayer_fatal(param_1, 0x50, 0x80006, 0);
            goto LAB_00101d9f;
         }
         len = (size_t)iVar4;
         if (( *(int*)( param_1 + 0x10b0 ) != 0 ) && ( *(long*)( param_1 + 0x1038 ) != 0 )) goto LAB_00101cf9;
         local_b8 = (undefined8*)CRYPTO_zalloc(local_c8 * 0x10, "ssl/record/methods/tls_common.c", 0x32f);
         if (local_b8 == (undefined8*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/record/methods/tls_common.c", 0x331, "tls_get_more_records");
            ossl_rlayer_fatal(param_1, 0x50, 0x8000f, 0);
            goto LAB_00101d9f;
         }
      }
      ERR_set_mark();
      iVar4 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 8 ) )(param_1, puVar13, local_c8, 0, local_b8, len);
      if (iVar4 == 0) {
         if (*(int*)( param_1 + 0x1008 ) == -1) {
            if (( ( local_c8 == 1 ) && ( *(code**)( param_1 + 0x1120 ) != (code*)0x0 ) ) && ( iVar4 = ( **(code**)( param_1 + 0x1120 ) )(*(undefined8*)( param_1 + 0x1118 )) ),iVar4 != 0) {
               ERR_pop_to_mark();
               if (*(int*)( param_1 + 0x1050 ) == 0) goto LAB_00102588;
               uVar8 = *(long*)( param_1 + 0x6d8 ) + *(long*)( param_1 + 0x1058 );
               if (*(int*)( param_1 + 0x1050 ) + 0x68 < uVar8) goto LAB_001025c3;
               *(ulong*)( param_1 + 0x1058 ) = uVar8;
               *(undefined8*)( param_1 + 0x6d8 ) = 0;
               *(undefined8*)( param_1 + 0xfe0 ) = 0;
               *(undefined8*)( param_1 + 0x1000 ) = 0;
               *(undefined1(*) [16])( param_1 + 0xfd0 ) = (undefined1[16])0x0;
               goto LAB_001020a3;
            }
            ERR_clear_last_mark();
            ERR_new();
            uVar6 = 0x365;
            LAB_00102307:ERR_set_debug("ssl/record/methods/tls_common.c", uVar6, "tls_get_more_records");
            ossl_rlayer_fatal(param_1, 0x14, 0x119, 0);
         } else {
            ERR_clear_last_mark();
         }
         LAB_0010232c:uVar6 = 0xfffffffe;
      } else {
         ERR_clear_last_mark();
         if (( ( *(long*)( param_1 + 0x1020 ) != 0 ) && ( *(int*)( param_1 + 0x10b0 ) == 0 ) ) && ( lVar16 = EVP_MD_CTX_get0_md(*(undefined8*)( param_1 + 0x1038 )) ),lVar16 != 0) {
            puVar14 = local_b8;
            puVar17 = puVar13;
            do {
               iVar5 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x10 ) )(param_1, puVar17, local_88, 0);
               if (( ( iVar5 == 0 ) || ( puVar14 == (undefined8*)0x0 ) ) || ( ( (void*)*puVar14 == (void*)0x0 || ( iVar5 = CRYPTO_memcmp(local_88, (void*)*puVar14, len) ),iVar5 != 0 ) )) {
                  iVar4 = 0;
               }
               if (len + 0x4400 < *(ulong*)( puVar17 + 2 )) {
                  iVar4 = 0;
               }
               puVar17 = puVar17 + 0x12;
               puVar14 = puVar14 + 2;
            } while ( local_b8 + local_c8 * 2 != puVar14 );
            if (iVar4 == 0) {
               if (*(int*)( param_1 + 0x1008 ) == -1) {
                  ERR_new();
                  uVar6 = 0x394;
                  goto LAB_00102307;
               }
               goto LAB_0010232c;
            }
         }
         puVar17 = puVar13 + local_c8 * 0x12;
         do {
            iVar4 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x38 ) )(param_1, puVar13);
            if (iVar4 == 0) goto LAB_0010232c;
            if (( *(uint*)( param_1 + 0x104c ) != 0x4000 ) && ( ( ulong ) * (uint*)( param_1 + 0x104c ) < *(ulong*)( puVar13 + 2 ) )) {
               ERR_new();
               ERR_set_debug("ssl/record/methods/tls_common.c", 0x3ad, "tls_get_more_records");
               ossl_rlayer_fatal(param_1, 0x16, 0x92, 0);
               goto LAB_0010232c;
            }
            puVar13[6] = 0;
            puVar13[7] = 0;
            if (*(ulong*)( puVar13 + 2 ) == 0) {
               uVar8 = *(long*)( param_1 + 0x1010 ) + 1;
               *(ulong*)( param_1 + 0x1010 ) = uVar8;
               if (0x20 < uVar8) {
                  ERR_new();
                  ERR_set_debug("ssl/record/methods/tls_common.c", 0x3bd, "tls_get_more_records");
                  ossl_rlayer_fatal(param_1, 10, 0x12a, 0);
                  goto LAB_0010232c;
               }
            } else {
               *(undefined8*)( param_1 + 0x1010 ) = 0;
            }
            puVar13 = puVar13 + 0x12;
         } while ( puVar13 != puVar17 );
         if (( *(int*)( param_1 + 0x20 ) == 1 ) && ( *(int*)( param_1 + 0x6d4 ) == 0x17 )) {
            if (*(uint*)( param_1 + 0x1050 ) == 0) {
               LAB_00102588:ERR_new();
               uVar6 = 0x1f7;
            } else {
               uVar8 = *(long*)( param_1 + 0x6d8 ) + *(long*)( param_1 + 0x1058 );
               if (uVar8 <= *(uint*)( param_1 + 0x1050 )) {
                  *(ulong*)( param_1 + 0x1058 ) = uVar8;
                  goto LAB_001024b4;
               }
               LAB_001025c3:ERR_new();
               uVar6 = 0x200;
            }
            ERR_set_debug("ssl/record/methods/tls_common.c", uVar6, "rlayer_early_data_count_ok");
            ossl_rlayer_fatal(param_1, 10, 0xa4, 0);
            goto LAB_0010232c;
         }
         LAB_001024b4:*(undefined8*)( param_1 + 0xfd8 ) = 0;
         *(undefined8*)( param_1 + 0xfe0 ) = 0;
         *(long*)( param_1 + 0xfd0 ) = local_c8;
         LAB_001020a3:uVar6 = 1;
      }
      if (local_b8 != (undefined8*)0x0) {
         puVar14 = local_b8;
         do {
            if (*(int*)( puVar14 + 1 ) != 0) {
               CRYPTO_free((void*)*puVar14);
            }
            puVar14 = puVar14 + 2;
         } while ( puVar14 != local_b8 + local_c8 * 2 );
         CRYPTO_free(local_b8);
      }
      goto LAB_00101da8;
   }
   if (( *(long*)( puVar11 + 2 ) == 1 ) && ( **(char**)( puVar11 + 8 ) == '\x01' )) {
      if (*(code**)( param_1 + 0x1128 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0x1128 ) )(0, 0x304, 0x14, *(char**)( puVar11 + 8 ), 1, *(undefined8*)( param_1 + 0x1118 ));
      }
      lVar16 = *(long*)( param_1 + 0x1010 );
      puVar11[1] = 0x16;
      uVar8 = lVar16 + 1;
      *(ulong*)( param_1 + 0x1010 ) = uVar8;
      if (uVar8 < 0x21) {
         uVar6 = 1;
         *(undefined8*)( param_1 + 0xfe0 ) = 0;
         *(undefined1(*) [16])( param_1 + 0xfd0 ) = (undefined1[16])0x0;
         goto LAB_00101da8;
      }
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x2f8, "tls_get_more_records");
      ossl_rlayer_fatal(param_1, 10, 0x106, 0);
   } else {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x2eb, "tls_get_more_records");
      ossl_rlayer_fatal(param_1, 10, 0x104, 0);
   }
   goto LAB_00101d9f;
}undefined8 tls_default_validate_record_header(long param_1, int *param_2) {
   if (*param_2 == *(int*)( param_1 + 0x14 )) {
      if (*(ulong*)( param_2 + 2 ) <= ( -(ulong)(*(long *)(param_1 + 0x1040) == 0) & 0xfffffffffffffc00 ) + 0x4540) {
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x3f2, "tls_default_validate_record_header");
      ossl_rlayer_fatal(param_1, 0x16, 0x96, 0);
   } else {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x3e4, "tls_default_validate_record_header");
      ossl_rlayer_fatal(param_1, 0x46, 0x10b, 0);
   }
   return 0;
}bool tls_do_compress(long param_1, long param_2) {
   int iVar1;
   iVar1 = (int)*(undefined8*)( param_2 + 8 );
   iVar1 = COMP_compress_block(*(COMP_CTX**)( param_1 + 0x1040 ), *(uchar**)( param_2 + 0x20 ), iVar1 + 0x400, *(uchar**)( param_2 + 0x28 ), iVar1);
   if (-1 < iVar1) {
      *(long*)( param_2 + 8 ) = (long)iVar1;
      *(undefined8*)( param_2 + 0x28 ) = *(undefined8*)( param_2 + 0x20 );
   }
   return -1 < iVar1;
}undefined8 tls_do_uncompress(long param_1, long param_2) {
   int iVar1;
   uchar *out;
   out = *(uchar**)( param_2 + 0x30 );
   if (out == (uchar*)0x0) {
      out = (uchar*)CRYPTO_malloc(0x4540, "ssl/record/methods/tls_common.c", 0x414);
      *(uchar**)( param_2 + 0x30 ) = out;
      if (out == (uchar*)0x0) {
         return 0;
      }
   }
   iVar1 = COMP_expand_block(*(COMP_CTX**)( param_1 + 0x1040 ), out, 0x4000, *(uchar**)( param_2 + 0x20 ), *(int*)( param_2 + 8 ));
   if (iVar1 < 0) {
      return 0;
   }
   *(long*)( param_2 + 8 ) = (long)iVar1;
   *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_2 + 0x30 );
   return 1;
}bool tls_default_post_process_record(long param_1, long param_2) {
   bool bVar1;
   int iVar2;
   if (*(long*)( param_1 + 0x1040 ) != 0) {
      if (0x4400 < *(ulong*)( param_2 + 8 )) {
         ERR_new();
         ERR_set_debug("ssl/record/methods/tls_common.c", 0x42b, "tls_default_post_process_record");
         ossl_rlayer_fatal(param_1, 0x16, 0x8c, 0);
         return false;
      }
      iVar2 = tls_do_uncompress();
      if (iVar2 == 0) {
         ERR_new();
         ERR_set_debug("ssl/record/methods/tls_common.c", 0x430, "tls_default_post_process_record");
         ossl_rlayer_fatal(param_1, 0x1e, 0x6b, 0);
         return false;
      }
   }
   bVar1 = 0x4000 < *(ulong*)( param_2 + 8 );
   if (bVar1) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x437, "tls_default_post_process_record");
      ossl_rlayer_fatal(param_1, 0x16, 0x92, 0);
   }
   return !bVar1;
}undefined8 tls13_common_post_process_record(long param_1, long param_2) {
   uint uVar1;
   undefined8 uVar2;
   uVar1 = *(int*)( param_2 + 4 ) - 0x15;
   if (uVar1 < 3) {
      if (*(code**)( param_1 + 0x1128 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0x1128 ) )(0, *(undefined4*)( param_1 + 0x14 ), 0x101, param_2 + 4, 1, *(undefined8*)( param_1 + 0x1118 ));
         uVar1 = *(int*)( param_2 + 4 ) - 0x15;
      }
      uVar2 = 1;
      if (( uVar1 < 2 ) && ( *(long*)( param_2 + 8 ) == 0 )) {
         ERR_new();
         ERR_set_debug("ssl/record/methods/tls_common.c", 0x452, "tls13_common_post_process_record");
         ossl_rlayer_fatal(param_1, 10, 0x10f, 0);
         uVar2 = 0;
      }
   } else {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls_common.c", 0x444, "tls13_common_post_process_record");
      ossl_rlayer_fatal(param_1, 10, 0x1bb, 0);
      uVar2 = 0;
   }
   return uVar2;
}undefined8 tls_int_new_record_layer(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, undefined8 param_12, long param_13, undefined8 *param_14, undefined8 param_15, int *param_16, undefined8 param_17, long *param_18) {
   undefined8 *puVar1;
   char *__s1;
   int iVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   puVar3 = (undefined8*)CRYPTO_zalloc(0x1150, "ssl/record/methods/tls_common.c", 0x4ec);
   *param_18 = 0;
   if (puVar3 != (undefined8*)0x0) {
      *(undefined4*)( (long)puVar3 + 0x104c ) = 0x4000;
      if (param_14 != (undefined8*)0x0) {
         __s1 = (char*)*param_14;
         while (__s1 != (char*)0x0) {
            iVar2 = strcmp(__s1, "use_etm");
            if (iVar2 == 0) {
               iVar2 = OSSL_PARAM_get_int(param_14, puVar3 + 0x216);
               if (iVar2 == 0) {
                  ERR_new();
                  uVar4 = 0x4ff;
                  goto LAB_00102b78;
               }
            } else {
               iVar2 = strcmp(__s1, "max_frag_len");
               if (iVar2 == 0) {
                  iVar2 = OSSL_PARAM_get_uint(param_14, (long)puVar3 + 0x104c);
                  if (iVar2 == 0) {
                     ERR_new();
                     uVar4 = 0x505;
                     goto LAB_00102b78;
                  }
               } else {
                  iVar2 = strcmp(__s1, "max_early_data");
                  if (iVar2 == 0) {
                     iVar2 = OSSL_PARAM_get_uint32(param_14, puVar3 + 0x20a);
                     if (iVar2 == 0) {
                        ERR_new();
                        uVar4 = 0x50b;
                        goto LAB_00102b78;
                     }
                  } else {
                     iVar2 = strcmp(__s1, "stream_mac");
                     if (iVar2 == 0) {
                        iVar2 = OSSL_PARAM_get_int(param_14, (long)puVar3 + 0x10b4);
                        if (iVar2 == 0) {
                           ERR_new();
                           uVar4 = 0x511;
                           goto LAB_00102b78;
                        }
                     } else {
                        iVar2 = strcmp(__s1, "tlstree");
                        if (iVar2 != 0) {
                           ERR_new();
                           ERR_set_debug("ssl/record/methods/tls_common.c", 0x51b, "tls_int_new_record_layer");
                           ERR_set_error(0x14, 0x143, 0);
                           goto LAB_00102b97;
                        }
                        iVar2 = OSSL_PARAM_get_int(param_14, puVar3 + 0x217);
                        if (iVar2 == 0) {
                           ERR_new();
                           uVar4 = 0x517;
                           goto LAB_00102b78;
                        }
                     }
                  }
               }
            }
            puVar1 = param_14 + 5;
            param_14 = param_14 + 5;
            __s1 = (char*)*puVar1;
         };
      }
      *(undefined4*)( puVar3 + 0x201 ) = 0xffffffff;
      *(undefined4*)( puVar3 + 0x1fd ) = 0xf0;
      *puVar3 = param_1;
      puVar3[1] = param_2;
      puVar3[0x21b] = param_8;
      *(ulong*)( (long)puVar3 + 0x14 ) = CONCAT44(param_4, param_3);
      *(ulong*)( (long)puVar3 + 0x1c ) = CONCAT44(param_6, param_5);
      puVar3[5] = param_9;
      if (param_6 == 0) {
         *(undefined4*)( (long)puVar3 + 0x10d4 ) = 1;
      }
      iVar2 = tls_set1_bio(puVar3, param_12);
      if (( ( iVar2 != 0 ) && ( ( param_11 == 0 || ( iVar2 = BIO_up_ref(param_11) ),iVar2 != 0 ) ) )) {
         puVar3[9] = param_13;
         puVar3[0x223] = param_17;
         if (param_16 != (int*)0x0) {
            for (; iVar2 = *param_16,iVar2 != 0; param_16 = param_16 + 4) {
               if (iVar2 == 3) {
                  puVar3[0x226] = *(undefined8*)( param_16 + 2 );
               } else if (iVar2 < 4) {
                  if (iVar2 == 1) {
                     puVar3[0x224] = *(undefined8*)( param_16 + 2 );
                  } else if (iVar2 == 2) {
                     puVar3[0x225] = *(undefined8*)( param_16 + 2 );
                  }
               } else if (iVar2 == 4) {
                  puVar3[0x227] = *(undefined8*)( param_16 + 2 );
               }
            }
         }
         iVar2 = tls_set_options(puVar3, param_15);
         if (iVar2 != 0) {
            if (( ( ( ( *(byte*)( (long)puVar3 + 0x51 ) & 8 ) == 0 ) && ( *(int*)( (long)puVar3 + 0x14 ) < 0x302 ) ) && ( iVar2 = EVP_CIPHER_is_a(param_7, &_LC22) ),iVar2 == 0 )) &&( iVar2 = iVar2 == 0 ) * (undefined4*)( puVar3 + 0x203 ) = 1;
         }
         *param_18 = (long)puVar3;
         return 1;
      }
      ERR_new();
      uVar4 = 0x553;
      LAB_00102b78:ERR_set_debug("ssl/record/methods/tls_common.c", uVar4, "tls_int_new_record_layer");
      ERR_set_error(0x14, 0x13c, 0);
   }
   LAB_00102b97:tls_int_free(puVar3);
}return 0xfffffffe;}ulong tls_new_record_layer(undefined8 param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6) {
   ulong uVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 in_stack_00000020;
   undefined8 in_stack_00000028;
   undefined8 in_stack_00000030;
   undefined8 in_stack_00000038;
   undefined8 in_stack_00000040;
   undefined8 in_stack_00000048;
   undefined8 in_stack_00000050;
   undefined8 in_stack_00000058;
   undefined4 in_stack_00000060;
   undefined8 in_stack_00000068;
   undefined8 in_stack_00000070;
   long *in_stack_000000d0;
   long *plVar4;
   plVar4 = in_stack_000000d0;
   uVar1 = tls_int_new_record_layer();
   if ((int)uVar1 != 1) {
      return uVar1;
   }
   if (param_3 == 0x304) {
      lVar3 = *in_stack_000000d0;
      puVar2 = (undefined8*)&tls_1_3_funcs;
      *(undefined**)( lVar3 + 0x1148 ) = &tls_1_3_funcs;
   } else if (param_3 < 0x305) {
      if (param_3 == 0x300) {
         lVar3 = *in_stack_000000d0;
         puVar2 = (undefined8*)&ssl_3_0_funcs;
         *(undefined**)( lVar3 + 0x1148 ) = &ssl_3_0_funcs;
      } else {
         if (2 < param_3 - 0x301U) goto LAB_00103060;
         lVar3 = *in_stack_000000d0;
         puVar2 = (undefined8*)&tls_1_funcs;
         *(undefined**)( lVar3 + 0x1148 ) = &tls_1_funcs;
      }
   } else {
      if (param_3 != 0x10000) {
         LAB_00103060:ERR_new();
         ERR_set_debug("ssl/record/methods/tls_common.c", 0x593, "tls_new_record_layer");
         ERR_set_error(0x14, 0xc0103, 0);
         uVar1 = 0xfffffffe;
         goto LAB_00102fd0;
      }
      lVar3 = *in_stack_000000d0;
      puVar2 = (undefined8*)&tls_any_funcs;
      *(undefined**)( lVar3 + 0x1148 ) = &tls_any_funcs;
   }
   uVar1 = ( *(code*)*puVar2 )(lVar3, param_6, in_stack_00000020, in_stack_00000028, in_stack_00000030, in_stack_00000038, in_stack_00000040, in_stack_00000048, in_stack_00000050, in_stack_00000058, in_stack_00000060, in_stack_00000068, in_stack_00000070, plVar4);
   if ((int)uVar1 == 1) {
      return uVar1;
   }
   LAB_00102fd0:tls_int_free(*in_stack_000000d0);
   *in_stack_000000d0 = 0;
   return uVar1 & 0xffffffff;
}ulong tls_get_max_records_default(long param_1, undefined8 param_2, long param_3, undefined8 param_4, ulong *param_5) {
   uint uVar1;
   undefined8 uVar2;
   ulong uVar3;
   if (*(long*)( param_1 + 0x1140 ) == 0) {
      return 1;
   }
   if (*(long*)( param_1 + 0x1020 ) != 0) {
      uVar2 = EVP_CIPHER_CTX_get0_cipher();
      uVar3 = EVP_CIPHER_get_flags(uVar2);
      if (( ( uVar3 & 0x800000 ) != 0 ) && ( ( ( uVar1 = *(uint*)( param_1 + 0x14 )(uVar1 & 0xfffffffd) == 0xfefd || uVar1 == 0x100 || ( uVar1 - 0x302 < 2 ) ) && ( param_3 != 0 ) ) )) {
         uVar3 = ( param_3 - 1U ) / *param_5 + 1;
         if (uVar3 <= *(ulong*)( param_1 + 0x1140 )) {
            return uVar3;
         }
         return *(ulong*)( param_1 + 0x1140 );
      }
   }
   return 1;
}bool tls_allocate_write_buffers_default(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = tls_setup_write_buffer(param_1, param_3, 0, 0);
   return iVar1 != 0;
}undefined8 tls_initialise_write_packets_default(undefined8 param_1, byte *param_2, long param_3, undefined8 param_4, long param_5, undefined8 *param_6, long *param_7) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   if (param_3 != 0) {
      lVar3 = 0;
      do {
         *(uint*)( (long)param_6 + 0x2c ) = ( uint ) * param_2;
         uVar4 = ( ulong )(-((int)*param_6 + 0xd) & 7);
         param_6[3] = uVar4;
         iVar1 = WPACKET_init_static_len(param_5, *param_6, param_6[2], 0);
         if (iVar1 == 0) {
            ERR_new();
            uVar2 = 0x634;
            LAB_00103245:ERR_set_debug("ssl/record/methods/tls_common.c", uVar2, "tls_initialise_write_packets_default");
            ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
            return 0;
         }
         *param_7 = *param_7 + 1;
         iVar1 = WPACKET_allocate_bytes(param_5, uVar4, 0);
         if (iVar1 == 0) {
            ERR_new();
            uVar2 = 0x639;
            goto LAB_00103245;
         }
         lVar3 = lVar3 + 1;
         param_2 = param_2 + 0x18;
         param_6 = param_6 + 6;
         param_5 = param_5 + 0x38;
      } while ( param_3 != lVar3 );
   }
   return 1;
}undefined8 tls_prepare_record_header_default(long param_1, undefined8 param_2, long param_3, undefined1 param_4, undefined8 *param_5) {
   long lVar1;
   int iVar2;
   long lVar3;
   lVar1 = *(long*)( param_1 + 0x1040 );
   *param_5 = 0;
   lVar3 = *(long*)( param_3 + 0x10 );
   if (lVar1 != 0) {
      lVar3 = lVar3 + 0x400;
   }
   iVar2 = WPACKET_put_bytes__(param_2, param_4, 1);
   if (( ( ( iVar2 != 0 ) && ( iVar2 = WPACKET_put_bytes__(param_2, *(undefined4*)( param_3 + 4 ), 2) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )) &&( ( ( *(long*)( param_1 + 0x1030 ) == 0 || ( iVar2 = WPACKET_allocate_bytes(param_2, *(long*)( param_1 + 0x1030 ), 0) ),iVar2 != 0 ) ) && ( ( lVar3 == 0 || ( iVar2 = WPACKET_reserve_bytes(param_2, lVar3, param_5) ),iVar2 != 0 ) ) );
}ERR_new();ERR_set_debug("ssl/record/methods/tls_common.c", 0x657, "tls_prepare_record_header_default");ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);return 0;}undefined8 tls_prepare_for_encryption_default(long param_1, long param_2, undefined8 param_3, long param_4) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_1 + 0x10b0 ) == 0 ) && ( param_2 != 0 )) {
      iVar1 = WPACKET_allocate_bytes(param_3, param_2, &local_38);
      if (iVar1 != 0) {
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x10 ) )(param_1, param_4, local_38, 1);
         if (iVar1 != 0) goto LAB_001033ed;
      }
      ERR_new();
      uVar3 = 0x671;
   } else {
      LAB_001033ed:iVar1 = WPACKET_reserve_bytes(param_3, 0x50 - param_2, 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_get_length(param_3, &local_38);
         if (iVar1 != 0) {
            lVar2 = WPACKET_get_curr(param_3);
            *(long*)( param_4 + 8 ) = local_38;
            uVar3 = 1;
            *(long*)( param_4 + 0x20 ) = lVar2 - local_38;
            *(long*)( param_4 + 0x28 ) = lVar2 - local_38;
            goto LAB_00103447;
         }
      }
      ERR_new();
      uVar3 = 0x683;
   }
   ERR_set_debug("ssl/record/methods/tls_common.c", uVar3, "tls_prepare_for_encryption_default");
   ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
   uVar3 = 0;
   LAB_00103447:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_post_encryption_processing_default(long param_1, long param_2, undefined1 *param_3, undefined8 param_4, undefined4 *param_5) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 local_51;
   ulong local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = ( -(ulong)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff8 ) + 0xd;
   iVar2 = WPACKET_get_length(param_4, &local_50);
   if (iVar2 == 0) {
      LAB_00103620:ERR_new();
      uVar4 = 0x6a5;
   } else {
      uVar1 = *(ulong*)( param_5 + 2 );
      if (( ( local_50 + 0x50 ) - param_2 < uVar1 ) || ( uVar1 < local_50 )) goto LAB_00103620;
      if (local_50 < uVar1) {
         iVar2 = WPACKET_allocate_bytes(param_4, uVar1 - local_50, 0);
         if (iVar2 == 0) goto LAB_00103620;
      }
      if (( *(int*)( param_1 + 0x10b0 ) == 0 ) || ( param_2 == 0 )) {
         LAB_00103578:iVar2 = WPACKET_get_length(param_4, &local_48);
         if (iVar2 != 0) {
            iVar2 = WPACKET_close(param_4);
            if (iVar2 != 0) {
               if (*(long*)( param_1 + 0x1128 ) != 0) {
                  lVar3 = WPACKET_get_curr(param_4);
                  ( **(code**)( param_1 + 0x1128 ) )(1, *param_5, 0x100, lVar3 - ( local_48 + lVar5 ), lVar5, *(undefined8*)( param_1 + 0x1118 ));
                  if (( *(int*)( param_1 + 0x14 ) == 0x304 ) && ( *(long*)( param_1 + 0x1020 ) != 0 )) {
                     local_51 = *param_3;
                     ( **(code**)( param_1 + 0x1128 ) )(1, *param_5, 0x101, &local_51, 1, *(undefined8*)( param_1 + 0x1118 ));
                  }
               }
               iVar2 = WPACKET_finish(param_4);
               if (iVar2 != 0) {
                  *(long*)( param_5 + 2 ) = *(long*)( param_5 + 2 ) + lVar5;
                  uVar4 = 1;
                  goto LAB_00103655;
               }
               ERR_new();
               uVar4 = 0x6ca;
               goto LAB_00103631;
            }
         }
         ERR_new();
         uVar4 = 0x6b6;
      } else {
         iVar2 = WPACKET_allocate_bytes(param_4, param_2, &local_48);
         if (iVar2 != 0) {
            iVar2 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x10 ) )(param_1, param_5, local_48, 1);
            if (iVar2 != 0) {
               *(long*)( param_5 + 2 ) = *(long*)( param_5 + 2 ) + param_2;
               goto LAB_00103578;
            }
         }
         ERR_new();
         uVar4 = 0x6ad;
      }
   }
   LAB_00103631:ERR_set_debug("ssl/record/methods/tls_common.c", uVar4, "tls_post_encryption_processing_default");
   ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
   uVar4 = 0;
   LAB_00103655:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00103842) *//* WARNING: Removing unreachable block (ram,0x00103848) */undefined8 tls_write_records_default(long param_1, long param_2, long param_3) {
   undefined1 uVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   ulong *puVar5;
   ulong uVar6;
   undefined1 *puVar7;
   ulong *puVar8;
   undefined8 uVar9;
   ulong uVar10;
   undefined1 *puVar11;
   long lVar12;
   undefined1 *puVar13;
   long in_FS_OFFSET;
   byte bVar14;
   ulong local_10f8;
   ulong local_10f0;
   undefined1 local_10e8[32];
   undefined1 local_10c8[1856];
   ulong local_988[297];
   long local_40;
   bVar14 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10f8 = 0;
   if (( *(long*)( param_1 + 0x1038 ) == 0 ) || ( lVar4 = lVar4 == 0 )) {
      iVar2 = 0;
      LAB_00103898:iVar3 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x50 ) )(param_1, param_2, param_3, &local_10f8);
      if (iVar3 != 0) {
         puVar13 = local_10c8;
         iVar3 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x58 ) )(param_1, param_2, param_3, local_10e8, puVar13, param_1 + 0x60);
         if (iVar3 != 0) {
            puVar8 = local_988;
            puVar5 = puVar8;
            for (lVar4 = 0x129; lVar4 != 0; lVar4 = lVar4 + -1) {
               *puVar5 = 0;
               puVar5 = puVar5 + (ulong)bVar14 * -2 + 1;
            }
            if (param_3 + local_10f8 != 0) {
               uVar10 = 0;
               puVar5 = puVar8;
               puVar7 = puVar13;
               do {
                  local_10f0 = 0;
                  puVar11 = local_10e8;
                  if (local_10f8 <= uVar10) {
                     puVar11 = (undefined1*)( param_2 + ( uVar10 - local_10f8 ) * 0x18 );
                  }
                  lVar4 = *(long*)( param_1 + 0x1148 );
                  if (*(code**)( lVar4 + 0x60 ) == (code*)0x0) {
                     uVar1 = *puVar11;
                  } else {
                     uVar1 = ( **(code**)( lVar4 + 0x60 ) )(param_1, puVar11);
                     lVar4 = *(long*)( param_1 + 0x1148 );
                  }
                  *puVar5 = (ulong)CONCAT14(uVar1, *(undefined4*)( puVar11 + 4 ));
                  iVar3 = ( **(code**)( lVar4 + 0x68 ) )(param_1, puVar7, puVar11, uVar1, &local_10f0);
                  if (iVar3 == 0) goto LAB_00103830;
                  uVar6 = *(ulong*)( puVar11 + 8 );
                  lVar4 = *(long*)( param_1 + 0x1040 );
                  puVar5[1] = *(ulong*)( puVar11 + 0x10 );
                  puVar5[4] = local_10f0;
                  puVar5[5] = uVar6;
                  if (lVar4 == 0) {
                     if (local_10f0 != 0) {
                        iVar3 = WPACKET_memcpy(puVar7, uVar6);
                        if (iVar3 == 0) {
                           ERR_new();
                           uVar9 = 0x725;
                           goto LAB_00103808;
                        }
                        puVar5[5] = puVar5[4];
                     }
                  } else {
                     iVar3 = tls_do_compress(param_1, puVar5);
                     if (( iVar3 == 0 ) || ( iVar3 = iVar3 == 0 )) {
                        ERR_new();
                        ERR_set_debug("ssl/record/methods/tls_common.c", 0x720, "tls_write_records_default");
                        ossl_rlayer_fatal(param_1, 0x50, 0x8d, 0);
                        goto LAB_00103830;
                     }
                  }
                  lVar4 = *(long*)( param_1 + 0x1148 );
                  if (*(code**)( lVar4 + 0x70 ) != (code*)0x0) {
                     iVar3 = ( **(code**)( lVar4 + 0x70 ) )(param_1, puVar11, puVar7, puVar5);
                     if (iVar3 == 0) goto LAB_00103830;
                     lVar4 = *(long*)( param_1 + 0x1148 );
                  }
                  iVar3 = ( **(code**)( lVar4 + 0x78 ) )(param_1, (long)iVar2, puVar7, puVar5);
                  if (iVar3 == 0) goto LAB_00103830;
                  uVar10 = uVar10 + 1;
                  puVar7 = puVar7 + 0x38;
                  puVar5 = puVar5 + 9;
               } while ( uVar10 < local_10f8 + param_3 );
            }
            lVar12 = (long)iVar2;
            lVar4 = *(long*)( param_1 + 0x1148 );
            if (local_10f8 != 0) {
               iVar2 = ( **(code**)( lVar4 + 8 ) )(param_1, puVar8, 1, 1, 0, lVar12);
               if (iVar2 < 1) {
                  if (*(int*)( param_1 + 0x1008 ) == -1) {
                     ERR_new();
                     uVar9 = 0x73b;
                     goto LAB_00103808;
                  }
                  goto LAB_00103830;
               }
               lVar4 = *(long*)( param_1 + 0x1148 );
            }
            iVar2 = ( **(code**)( lVar4 + 8 ) )(param_1, puVar8 + local_10f8 * 9, param_3, 1, 0, lVar12);
            if (0 < iVar2) {
               uVar10 = 0;
               if (param_3 + local_10f8 != 0) {
                  do {
                     puVar7 = local_10e8;
                     if (local_10f8 <= uVar10) {
                        puVar7 = (undefined1*)( param_2 + ( uVar10 - local_10f8 ) * 0x18 );
                     }
                     iVar2 = ( **(code**)( *(long*)( param_1 + 0x1148 ) + 0x80 ) )(param_1, lVar12, puVar7, puVar13, puVar8);
                     if (iVar2 == 0) goto LAB_00103830;
                     puVar5 = puVar8 + 1;
                     uVar6 = uVar10 + 1;
                     puVar8 = puVar8 + 9;
                     puVar13 = puVar13 + 0x38;
                     *(ulong*)( param_1 + 0x80 + uVar10 * 0x30 ) = *puVar5;
                     uVar10 = uVar6;
                  } while ( uVar6 < local_10f8 + param_3 );
               }
               uVar9 = 1;
               goto LAB_00103833;
            }
            if (*(int*)( param_1 + 0x1008 ) == -1) {
               ERR_new();
               uVar9 = 0x743;
               goto LAB_00103808;
            }
         }
      }
   } else {
      iVar2 = EVP_MD_CTX_get_size_ex(*(undefined8*)( param_1 + 0x1038 ));
      if (-1 < iVar2) goto LAB_00103898;
      ERR_new();
      uVar9 = 0x6e4;
      LAB_00103808:ERR_set_debug("ssl/record/methods/tls_common.c", uVar9, "tls_write_records_default");
      ossl_rlayer_fatal(param_1, 0x50, 0xc0103, 0);
   }
   LAB_00103830:uVar9 = 0;
   LAB_00103833:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool tls_default_set_protocol_version(long param_1, int param_2) {
   return *(int*)( param_1 + 0x14 ) == param_2;
}
