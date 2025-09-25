/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_cert_cb(SSL *param_1, long param_2) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   X509_NAME *nm;
   long lVar4;
   char *buf;
   long lVar5;
   undefined **ppuVar6;
   uint local_44;
   SSL_certs_clear();
   if (param_2 != 0) {
      do {
         lVar5 = param_2;
         param_2 = *(long*)( lVar5 + 0x48 );
      }
 while ( *(long*)( lVar5 + 0x48 ) != 0 );
      local_44 = 0;
      do {
         local_44 = local_44 + 1;
         uVar1 = SSL_check_chain(param_1, *(undefined8*)( lVar5 + 0x28 ), *(undefined8*)( lVar5 + 0x30 ), *(undefined8*)( lVar5 + 0x38 ));
         BIO_printf(_bio_err, "Checking cert chain %d:\nSubject: ", (ulong)local_44);
         uVar3 = get_nameopt();
         nm = X509_get_subject_name(*(X509**)( lVar5 + 0x28 ));
         X509_NAME_print_ex(_bio_err, nm, 0, uVar3);
         BIO_puts(_bio_err, "\n");
         if (chain_flags != (undefined*)0x0) {
            ppuVar6 = &chain_flags;
            do {
               ppuVar6 = ppuVar6 + 2;
               BIO_printf(_bio_err, "\t%s: %s\n");
            }
 while ( *ppuVar6 != (undefined*)0x0 );
         }

         BIO_printf(_bio_err, "\tSuite B: ");
         uVar3 = SSL_ctrl(param_1, 99, 0, (void*)0x0);
         if (( uVar3 & 0x30000 ) == 0) {
            BIO_printf(_bio_err, "not tested\n");
         }
 else {
            buf = "NOT OK\n";
            if (( uVar1 & 0x800 ) != 0) {
               buf = "OK\n";
            }

            BIO_puts(_bio_err, buf);
         }

         if (( uVar1 & 1 ) != 0) {
            iVar2 = SSL_use_certificate(param_1, *(X509**)( lVar5 + 0x28 ));
            if (iVar2 == 0) {
               return 0;
            }

            iVar2 = SSL_use_PrivateKey(param_1, *(EVP_PKEY**)( lVar5 + 0x30 ));
            if (iVar2 == 0) {
               return 0;
            }

            if (*(int*)( lVar5 + 0x40 ) == 0) {
               if (*(void**)( lVar5 + 0x38 ) == (void*)0x0) goto LAB_0010015f;
               lVar4 = SSL_ctrl(param_1, 0x58, 1, *(void**)( lVar5 + 0x38 ));
            }
 else {
               lVar4 = SSL_ctrl(param_1, 0x69, 0, (void*)0x0);
            }

            if (lVar4 == 0) {
               return 0;
            }

         }

         LAB_0010015f:lVar5 = *(long*)( lVar5 + 0x50 );
      }
 while ( lVar5 != 0 );
   }

   return 1;
}
int security_callback_debug(undefined8 param_1, undefined8 param_2, uint param_3, uint param_4, int param_5, SSL_CIPHER *param_6, undefined8 *param_7) {
   undefined **ppuVar1;
   ushort uVar2;
   bool bVar3;
   int iVar4;
   int n;
   uint uVar5;
   undefined **ppuVar6;
   char *pcVar7;
   EVP_PKEY *pkey;
   EVP_PKEY_ASN1_METHOD *ameth;
   undefined *puVar8;
   BIO *bio;
   ulong uVar9;
   long in_FS_OFFSET;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = ( *(code*)param_7[2] )();
   if (( iVar4 == 1 ) && ( *(int*)( param_7 + 1 ) < 2 )) goto LAB_0010034d;
   BIO_puts((BIO*)*param_7, "Security callback: ");
   puVar8 = callback_types;
   if (callback_types == (undefined*)0x0) {
      if ((int)param_3 < 0x5000f) {
         if ((int)param_3 < 0x5000b) {
            if (( param_3 == 10 ) || ( param_3 == 0xf )) goto LAB_00100328;
            if (param_3 == 9) goto LAB_001002e5;
            bVar3 = false;
            goto LAB_00100421;
         }

         uVar2 = (ushort)param_6.valid;
         bio = (BIO*)*param_7;
         uVar9 = ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8);
         LAB_001004a6:BIO_printf(bio, "s_cb.c:security_callback_debug op=0x%x", (ulong)param_3);
         LAB_001003a3:if (signature_tls13_scheme_list != (undefined*)0x0) {
            ppuVar6 = &signature_tls13_scheme_list;
            do {
               if (*(int*)( ppuVar6 + 1 ) == (int)uVar9) {
                  BIO_printf((BIO*)*param_7, " scheme=%s");
                  goto LAB_00100451;
               }

               ppuVar1 = ppuVar6 + 2;
               ppuVar6 = ppuVar6 + 2;
            }
 while ( *ppuVar1 != (undefined*)0x0 );
         }

         puVar8 = signature_tls12_alg_list;
         if (signature_tls12_alg_list != (undefined*)0x0) {
            ppuVar6 = &signature_tls12_alg_list;
            do {
               if (( uint ) * (byte*)( (long)&param_6.valid + 1 ) == *(uint*)( ppuVar6 + 1 )) break;
               puVar8 = ppuVar6[2];
               ppuVar6 = ppuVar6 + 2;
            }
 while ( puVar8 != (undefined*)0x0 );
         }

         if (signature_tls12_hash_list != (undefined*)0x0) {
            ppuVar6 = &signature_tls12_hash_list;
            do {
               if ((uint)(byte)param_6.valid == *(uint*)( ppuVar6 + 1 )) {
                  if (puVar8 != (undefined*)0x0) {
                     BIO_printf((BIO*)*param_7, " digest=%s, algorithm=%s");
                     goto LAB_00100451;
                  }

                  break;
               }

               ppuVar1 = ppuVar6 + 2;
               ppuVar6 = ppuVar6 + 2;
            }
 while ( *ppuVar1 != (undefined*)0x0 );
         }

         BIO_printf((BIO*)*param_7, " scheme=unknown(0x%04x)", uVar9);
      }
 else if (( param_3 & 0xffffefff ) == 0x60012) {
         LAB_00100479:n = X509_get_signature_nid(param_6);
         pcVar7 = OBJ_nid2sn(n);
         BIO_puts((BIO*)*param_7, pcVar7);
      }
 else {
         LAB_00100684:if (( param_3 & 0xffff0000 ) == 0x50000) goto LAB_00100378;
         if (( param_3 & 0xffff0000 ) == 0x60000) {
            LAB_00100612:pkey = (EVP_PKEY*)X509_get0_pubkey(param_6);
            if (pkey == (EVP_PKEY*)0x0) {
               BIO_printf((BIO*)*param_7, "Public key missing");
            }
 else {
               local_48 = "";
               ameth = EVP_PKEY_get0_asn1(pkey);
               EVP_PKEY_asn1_get0_info((int*)0x0, (int*)0x0, (int*)0x0, (char**)0x0, &local_48, ameth);
               uVar5 = EVP_PKEY_get_bits(pkey);
               BIO_printf((BIO*)*param_7, "%s, bits=%d", local_48, (ulong)uVar5);
            }

         }

      }

      LAB_00100451:BIO_printf((BIO*)*param_7, ", security bits=%d", (ulong)param_4);
   }
 else {
      ppuVar6 = &callback_types;
      do {
         if (param_3 == *(uint*)( ppuVar6 + 1 )) break;
         puVar8 = ppuVar6[2];
         ppuVar6 = ppuVar6 + 2;
      }
 while ( puVar8 != (undefined*)0x0 );
      if (0x5000e < (int)param_3) {
         if (( param_3 & 0xffffefff ) == 0x60012) {
            if (puVar8 == (undefined*)0x0) goto LAB_00100479;
            bVar3 = true;
         }
 else {
            bVar3 = false;
            if (puVar8 == (undefined*)0x0) goto LAB_00100684;
         }

         LAB_0010040d:BIO_printf((BIO*)*param_7, "%s=", puVar8);
         LAB_00100421:uVar5 = param_3 & 0xffff0000;
         if (uVar5 == 0x20000) {
            pcVar7 = (char*)EC_curve_nid2nist(param_5);
            if (pcVar7 == (char*)0x0) {
               pcVar7 = OBJ_nid2sn(param_5);
            }

            BIO_puts((BIO*)*param_7, pcVar7);
         }
 else if ((int)uVar5 < 0x20001) {
            if (uVar5 == 0x10000) {
               pcVar7 = SSL_CIPHER_get_name(param_6);
               BIO_puts((BIO*)*param_7, pcVar7);
            }

         }
 else {
            if (uVar5 == 0x50000) goto LAB_00100378;
            if (uVar5 == 0x60000) {
               if (!bVar3) goto LAB_00100612;
               goto LAB_00100479;
            }

         }

         goto LAB_00100451;
      }

      if (0x5000a < (int)param_3) {
         LAB_00100378:uVar2 = (ushort)param_6.valid;
         bio = (BIO*)*param_7;
         uVar9 = ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8);
         if (puVar8 == (undefined*)0x0) goto LAB_001004a6;
         BIO_printf(bio, "%s", puVar8);
         goto LAB_001003a3;
      }

      if (( param_3 != 10 ) && ( param_3 != 0xf )) {
         if (param_3 != 9) {
            bVar3 = false;
            if (puVar8 == (undefined*)0x0) goto LAB_00100421;
            goto LAB_0010040d;
         }

         LAB_001002e5:if (ssl_versions != (undefined*)0x0) {
            ppuVar6 = &ssl_versions;
            puVar8 = ssl_versions;
            do {
               if (param_5 == *(int*)( ppuVar6 + 1 )) goto LAB_00100317;
               puVar8 = ppuVar6[2];
               ppuVar6 = ppuVar6 + 2;
            }
 while ( puVar8 != (undefined*)0x0 );
         }

         puVar8 = &_LC9;
         LAB_00100317:BIO_printf((BIO*)*param_7, "Version=%s", puVar8);
      }

   }

   LAB_00100328:puVar8 = &_LC11;
   if (iVar4 != 0) {
      puVar8 = &_LC10;
   }

   BIO_printf((BIO*)*param_7, ": %s\n", puVar8);
   LAB_0010034d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void keylog_callback(undefined8 param_1, undefined8 param_2) {
   if (bio_keylog != (BIO*)0x0) {
      BIO_printf(bio_keylog, "%s\n", param_2);
      BIO_ctrl(bio_keylog, 0xb, 0, (void*)0x0);
      return;
   }

   BIO_printf(_bio_err, "Keylog callback is invoked without valid file!\n");
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void hexencode_part_0(undefined8 param_1) {
   undefined8 uVar1;
   uVar1 = opt_getprog();
   BIO_printf(_bio_err, "%s: %zu-byte buffer too large to hexencode\n", uVar1, param_1);
   /* WARNING: Subroutine does not return */
   exit(1);
}
void do_print_sigalgs_isra_0(BIO *param_1, undefined8 param_2, int param_3) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   byte local_4a;
   byte local_49;
   int local_48;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = SSL_is_server(param_2);
   if (param_3 == 0) {
      iVar2 = SSL_get_sigalgs(param_2, 0xffffffff, 0, 0, 0, 0, 0);
      if (iVar2 == 0) goto LAB_001008eb;
   }
 else {
      iVar2 = SSL_get_shared_sigalgs(param_2, 0, 0, 0, 0, 0, 0);
      if (iVar2 == 0) {
         LAB_001008eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00100ded;
      }

      BIO_puts(param_1, "Shared ");
   }

   if (iVar1 == 0) {
      BIO_puts(param_1, "Requested ");
   }

   BIO_puts(param_1, "Signature Algorithms: ");
   if (0 < iVar2) {
      if (param_3 == 0) {
         iVar1 = 0;
         do {
            SSL_get_sigalgs(param_2, iVar1, &local_44, &local_48, 0, &local_49, &local_4a);
            if (iVar1 != 0) {
               BIO_puts(param_1, ":");
            }

            switch (CONCAT11(local_4a, local_49)) {
               case 0x809:
          BIO_puts(param_1,"rsa_pss_pss_sha256");
          break;
               case 0x80a:
          BIO_puts(param_1,"rsa_pss_pss_sha384");
          break;
               case 0x80b:
          BIO_puts(param_1,"rsa_pss_pss_sha512");
          break;
               default:
          if (local_44 == 0x390) {
            pcVar3 = "RSA-PSS";
LAB_00100ad0:
            BIO_printf(param_1,"%s",pcVar3);
            if (local_48 == 0) break;
          }
          else {
            if (local_44 < 0x391) {
              if (local_44 == 0x198) {
                pcVar3 = "ECDSA";
              }
              else if (local_44 < 0x199) {
                if (local_44 == 6) {
                  pcVar3 = "RSA";
                }
                else {
                  pcVar3 = "DSA";
                  if (local_44 != 0x74) goto LAB_00100c63;
                }
              }
              else {
                pcVar3 = "gost2001";
                if (local_44 != 0x32b) goto LAB_00100c63;
              }
              goto LAB_00100ad0;
            }
            if (local_44 == 0x43f) {
              pcVar3 = "ed25519";
              goto LAB_00100ad0;
            }
            if (local_44 < 0x440) {
              if (local_44 == 0x3d3) {
                pcVar3 = "gost2012_256";
              }
              else {
                pcVar3 = "gost2012_512";
                if (local_44 != 0x3d4) goto LAB_00100c63;
              }
              goto LAB_00100ad0;
            }
            pcVar3 = "ed448";
            if (local_44 == 0x440) goto LAB_00100ad0;
LAB_00100c63:
            pcVar3 = OBJ_nid2sn(local_44);
            if (pcVar3 != (char *)0x0) goto LAB_00100ad0;
            BIO_printf(param_1,"0x%02X",(ulong)local_49);
            if (local_48 == 0) {
              BIO_printf(param_1,"+0x%02X",(ulong)local_4a);
              break;
            }
          }
          pcVar3 = OBJ_nid2sn(local_48);
          BIO_printf(param_1,"+%s",pcVar3);
          break;
               case 0x81a:
          BIO_puts(param_1,"ecdsa_brainpoolP256r1_sha256");
          break;
               case 0x81b:
          BIO_puts(param_1,"ecdsa_brainpoolP384r1_sha384");
          break;
               case 0x81c:
          BIO_puts(param_1,"ecdsa_brainpoolP512r1_sha512");
            }

            iVar1 = iVar1 + 1;
         }
 while ( iVar2 != iVar1 );
      }
 else {
         iVar1 = 0;
         do {
            SSL_get_shared_sigalgs(param_2, iVar1, &local_44, &local_48, 0, &local_49, &local_4a);
            if (iVar1 != 0) {
               BIO_puts(param_1, ":");
            }

            switch (CONCAT11(local_4a, local_49)) {
               case 0x809:
          BIO_puts(param_1,"rsa_pss_pss_sha256");
          break;
               case 0x80a:
          BIO_puts(param_1,"rsa_pss_pss_sha384");
          break;
               case 0x80b:
          BIO_puts(param_1,"rsa_pss_pss_sha512");
          break;
               default:
          if (local_44 == 0x390) {
            pcVar3 = "RSA-PSS";
LAB_00100ce0:
            BIO_printf(param_1,"%s",pcVar3);
            if (local_48 == 0) break;
          }
          else {
            if (local_44 < 0x391) {
              if (local_44 == 0x198) {
                pcVar3 = "ECDSA";
              }
              else if (local_44 < 0x199) {
                if (local_44 == 6) {
                  pcVar3 = "RSA";
                }
                else {
                  pcVar3 = "DSA";
                  if (local_44 != 0x74) goto LAB_00100a37;
                }
              }
              else {
                pcVar3 = "gost2001";
                if (local_44 != 0x32b) goto LAB_00100a37;
              }
              goto LAB_00100ce0;
            }
            if (local_44 == 0x43f) {
              pcVar3 = "ed25519";
              goto LAB_00100ce0;
            }
            if (local_44 < 0x440) {
              if (local_44 == 0x3d3) {
                pcVar3 = "gost2012_256";
              }
              else {
                pcVar3 = "gost2012_512";
                if (local_44 != 0x3d4) goto LAB_00100a37;
              }
              goto LAB_00100ce0;
            }
            pcVar3 = "ed448";
            if (local_44 == 0x440) goto LAB_00100ce0;
LAB_00100a37:
            pcVar3 = OBJ_nid2sn(local_44);
            if (pcVar3 != (char *)0x0) goto LAB_00100ce0;
            BIO_printf(param_1,"0x%02X",(ulong)local_49);
            if (local_48 == 0) {
              BIO_printf(param_1,"+0x%02X",(ulong)local_4a);
              break;
            }
          }
          pcVar3 = OBJ_nid2sn(local_48);
          BIO_printf(param_1,"+%s",pcVar3);
          break;
               case 0x81a:
          BIO_puts(param_1,"ecdsa_brainpoolP256r1_sha256");
          break;
               case 0x81b:
          BIO_puts(param_1,"ecdsa_brainpoolP384r1_sha384");
          break;
               case 0x81c:
          BIO_puts(param_1,"ecdsa_brainpoolP512r1_sha512");
            }

            iVar1 = iVar1 + 1;
         }
 while ( iVar1 != iVar2 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      BIO_puts(param_1, "\n");
      return;
   }

   LAB_00100ded:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong verify_callback(uint param_1, X509_STORE_CTX *param_2) {
   uint uVar1;
   uint uVar2;
   X509 *a;
   ulong uVar3;
   X509_NAME *pXVar4;
   char *pcVar5;
   ASN1_TIME *a_00;
   int iVar6;
   ulong uVar7;
   uVar7 = (ulong)param_1;
   a = X509_STORE_CTX_get_current_cert(param_2);
   uVar1 = X509_STORE_CTX_get_error(param_2);
   uVar2 = X509_STORE_CTX_get_error_depth(param_2);
   if (( DAT_00103c24 == 0 ) || ( param_1 == 0 )) {
      BIO_printf(_bio_err, "depth=%d ", (ulong)uVar2);
      if (a == (X509*)0x0) {
         BIO_puts(_bio_err, "<no cert>\n");
      }
 else {
         uVar3 = get_nameopt();
         pXVar4 = X509_get_subject_name(a);
         X509_NAME_print_ex(_bio_err, pXVar4, 0, uVar3);
         BIO_puts(_bio_err, "\n");
      }

      if (param_1 != 0) goto LAB_00100e4c;
      pcVar5 = X509_verify_cert_error_string((long)(int)uVar1);
      BIO_printf(_bio_err, "verify error:num=%d:%s\n", (ulong)uVar1, pcVar5);
      if (( verify_args < (int)uVar2 ) && ( -1 < verify_args )) {
         DAT_00103c28 = 0x16;
         switch (uVar1) {
            default:
        DAT_00103c28 = 0x16;
        return 0;
            case 2:
        if (a == (X509 *)0x0) {
          DAT_00103c28 = 0x16;
          return 0;
        }
        break;
            case 9:
            case 0xd:
        if (a == (X509 *)0x0) {
          DAT_00103c28 = 0x16;
          return 0;
        }
        goto LAB_00100fdc;
            case 10:
            case 0xe:
        if (a == (X509 *)0x0) {
          DAT_00103c28 = 0x16;
          return 0;
        }
        goto LAB_00100f89;
            case 0x2b:
        if (DAT_00103c24 != 0) {
          DAT_00103c28 = 0x16;
          return 0;
        }
        policies_print(param_2);
        return 0;
         }

         goto LAB_00100ffc;
      }

      uVar7 = ( ulong )(DAT_00103c2c == 0);
      DAT_00103c28 = uVar1;
      switch (uVar1) {
         case 2:
      if (a != (X509 *)0x0) goto LAB_00100ffc;
      break;
         case 9:
         case 0xd:
      if (a != (X509 *)0x0) goto LAB_00100fdc;
      break;
         case 10:
         case 0xe:
      if (a != (X509 *)0x0) goto LAB_00100f89;
      break;
         case 0x2b:
      if (DAT_00103c24 == 0) {
        policies_print(param_2);
      }
      }

      goto switchD_00100f32_caseD_0;
   }

   LAB_00100e4c:switch (uVar1) {
      default:
    if ((uVar1 != 0) || (param_1 != 2)) goto LAB_00101078;
    if (DAT_00103c24 != 0) {
      return 2;
    }
    break;
      case 2:
    if (a == (X509 *)0x0) goto LAB_00101078;
LAB_00100ffc:
    BIO_puts(_bio_err,"issuer= ");
    uVar3 = get_nameopt();
    pXVar4 = X509_get_issuer_name(a);
    X509_NAME_print_ex(_bio_err,pXVar4,0,uVar3);
    BIO_puts(_bio_err,"\n");
    iVar6 = (int)uVar7;
    goto joined_r0x00100fc0;
      case 9:
      case 0xd:
    if (a == (X509 *)0x0) goto LAB_00101078;
LAB_00100fdc:
    BIO_printf(_bio_err,"notBefore=");
    a_00 = (ASN1_TIME *)X509_get0_notBefore(a);
    goto LAB_00100fa2;
      case 10:
      case 0xe:
    if (a == (X509 *)0x0) goto LAB_00101078;
LAB_00100f89:
    BIO_printf(_bio_err,"notAfter=");
    a_00 = (ASN1_TIME *)X509_get0_notAfter(a);
LAB_00100fa2:
    ASN1_TIME_print(_bio_err,a_00);
    BIO_printf(_bio_err,"\n");
switchD_00100f32_caseD_0:
    iVar6 = (int)uVar7;
joined_r0x00100fc0:
    if (iVar6 == 0) {
      return 0;
    }
    goto LAB_00101078;
      case 0x2b:
    if (DAT_00103c24 != 0) goto LAB_00101078;
   }

   policies_print(param_2);
   LAB_00101078:if (DAT_00103c24 == 0) {
      BIO_printf(_bio_err, "verify return:%d\n", uVar7);
   }

   return uVar7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_cert_stuff(SSL_CTX *param_1, char *param_2, char *param_3) {
   int iVar1;
   if (param_2 == (char*)0x0) {
      return 1;
   }

   iVar1 = SSL_CTX_use_certificate_file(param_1, param_2, 1);
   if (iVar1 < 1) {
      BIO_printf(_bio_err, "unable to get certificate from \'%s\'\n", param_2);
      ERR_print_errors(_bio_err);
   }
 else {
      if (param_3 == (char*)0x0) {
         param_3 = param_2;
      }

      iVar1 = SSL_CTX_use_PrivateKey_file(param_1, param_3, 1);
      if (iVar1 < 1) {
         BIO_printf(_bio_err, "unable to get private key from \'%s\'\n", param_3);
         ERR_print_errors(_bio_err);
      }
 else {
         iVar1 = SSL_CTX_check_private_key(param_1);
         if (iVar1 != 0) {
            return 1;
         }

         BIO_printf(_bio_err, "Private key does not match the certificate public key\n");
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_cert_key_stuff(SSL_CTX *param_1, X509 *param_2, EVP_PKEY *param_3, void *param_4, int param_5) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   if (param_2 == (X509*)0x0) {
      return 1;
   }

   iVar1 = SSL_CTX_use_certificate(param_1, param_2);
   if (iVar1 < 1) {
      BIO_printf(_bio_err, "error setting certificate\n");
      ERR_print_errors(_bio_err);
      uVar3 = 0;
   }
 else {
      iVar1 = SSL_CTX_use_PrivateKey(param_1, param_3);
      if (iVar1 < 1) {
         BIO_printf(_bio_err, "error setting private key\n");
         ERR_print_errors(_bio_err);
         uVar3 = 0;
      }
 else {
         iVar1 = SSL_CTX_check_private_key(param_1);
         if (iVar1 == 0) {
            BIO_printf(_bio_err, "Private key does not match the certificate public key\n");
            uVar3 = 0;
         }
 else {
            if (( param_4 != (void*)0x0 ) && ( lVar2 = lVar2 == 0 )) {
               BIO_printf(_bio_err, "error setting certificate chain\n");
               ERR_print_errors(_bio_err);
               return 0;
            }

            if (( param_5 != 0 ) && ( lVar2 = SSL_CTX_ctrl(param_1, 0x69, ( ulong )(param_4 != (void*)0x0) * 4, (void*)0x0) ),lVar2 == 0) {
               BIO_printf(_bio_err, "error building certificate chain\n");
               ERR_print_errors(_bio_err);
               return 0;
            }

            uVar3 = 1;
         }

      }

   }

   return uVar3;
}
undefined8 ssl_print_sigalgs(BIO *param_1, SSL *param_2) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   undefined **ppuVar4;
   char *pcVar5;
   ulong uVar6;
   uint uVar7;
   long in_FS_OFFSET;
   int local_4c;
   byte *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = SSL_is_server(param_2);
   if (iVar2 == 0) {
      lVar3 = SSL_ctrl(param_2, 0x67, 0, &local_48);
      iVar2 = (int)lVar3;
      if (iVar2 != 0) {
         BIO_puts(param_1, "Client Certificate Types: ");
         if (0 < iVar2) {
            uVar7 = ( uint ) * local_48;
            if (cert_type_list == (undefined*)0x0) {
               uVar6 = 0;
               goto LAB_00101632;
            }

            uVar6 = 0;
            do {
               ppuVar4 = &cert_type_list;
               pcVar5 = cert_type_list;
               while (*(uint*)( ppuVar4 + 1 ) != uVar7) {
                  pcVar5 = ppuVar4[2];
                  ppuVar4 = ppuVar4 + 2;
                  if (pcVar5 == (char*)0x0) {
                     if (uVar6 == 0) goto LAB_00101632;
                     goto LAB_00101620;
                  }

               }
;
               if (uVar6 != 0) {
                  BIO_puts(param_1, ", ");
               }

               BIO_puts(param_1, pcVar5);
               uVar1 = uVar6;
               while (true) {
                  if (iVar2 - 1 == uVar1) goto LAB_00101651;
                  uVar6 = uVar1 + 1;
                  uVar7 = (uint)local_48[uVar1 + 1];
                  if (cert_type_list != (undefined*)0x0) break;
                  LAB_00101620:BIO_puts(param_1, ", ");
                  LAB_00101632:BIO_printf(param_1, "UNKNOWN (%d),", (ulong)uVar7);
                  uVar1 = uVar6;
               }
;
            }
 while ( true );
         }

         LAB_00101651:BIO_puts(param_1, "\n");
      }

   }

   do_print_sigalgs_isra_0(param_1, param_2, 0);
   do_print_sigalgs_isra_0(param_1, param_2, 1);
   lVar3 = SSL_ctrl(param_2, 0x6c, 0, &local_4c);
   if (( lVar3 != 0 ) && ( local_4c != 0 )) {
      pcVar5 = OBJ_nid2sn(local_4c);
      BIO_printf(param_1, "Peer signing digest: %s\n", pcVar5);
   }

   lVar3 = SSL_ctrl(param_2, 0x8d, 0, &local_48);
   if (lVar3 != 0) {
      BIO_printf(param_1, "Peer signature type: %s\n", local_48);
      goto LAB_0010149f;
   }

   iVar2 = SSL_get_peer_signature_type_nid(param_2, &local_4c);
   if (iVar2 == 0) goto LAB_0010149f;
   pcVar5 = "RSA-PSS";
   if (local_4c != 0x390) {
      if (local_4c < 0x391) {
         pcVar5 = "ECDSA";
         if (local_4c != 0x198) {
            if (local_4c < 0x199) {
               pcVar5 = "RSA";
               if (( local_4c != 6 ) && ( pcVar5 = local_4c != 0x74 )) {
                  LAB_001016d2:pcVar5 = OBJ_nid2sn(local_4c);
               }

            }
 else {
               pcVar5 = "gost2001";
               if (local_4c != 0x32b) goto LAB_001016d2;
            }

         }

      }
 else {
         pcVar5 = "ed25519";
         if (local_4c != 0x43f) {
            if (local_4c < 0x440) {
               pcVar5 = "gost2012_256";
               if (( local_4c != 0x3d3 ) && ( pcVar5 = local_4c != 0x3d4 )) goto LAB_001016d2;
            }
 else {
               pcVar5 = "ed448";
               if (local_4c != 0x440) goto LAB_001016d2;
            }

         }

      }

   }

   BIO_printf(param_1, "Peer signature type: %s\n", pcVar5);
   LAB_0010149f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ssl_print_point_formats(BIO *param_1, SSL *param_2) {
   char cVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = SSL_ctrl(param_2, 0x6f, 0, &local_48);
   if (0 < (int)lVar2) {
      iVar3 = 0;
      BIO_puts(param_1, "Supported Elliptic Curve Point Formats: ");
      while (true) {
         cVar1 = *local_48;
         if (cVar1 == '\x01') {
            BIO_puts(param_1, "ansiX962_compressed_prime");
         }
 else if (cVar1 == '\x02') {
            BIO_puts(param_1, "ansiX962_compressed_char2");
         }
 else if (cVar1 == '\0') {
            BIO_puts(param_1, "uncompressed");
         }
 else {
            BIO_printf(param_1, "unknown(%d)");
         }

         local_48 = local_48 + 1;
         if ((int)lVar2 == iVar3 + 1) break;
         iVar3 = iVar3 + 1;
         BIO_puts(param_1, ":");
      }
;
      BIO_puts(param_1, "\n");
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ssl_print_groups(BIO *param_1, SSL *param_2, int param_3) {
   int iVar1;
   long lVar2;
   undefined4 *parg;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   lVar2 = SSL_ctrl(param_2, 0x5a, 0, (void*)0x0);
   iVar1 = (int)lVar2;
   if (0 < iVar1) {
      parg = (undefined4*)app_malloc((long)iVar1 << 2, "groups to print");
      SSL_ctrl(param_2, 0x5a, 0, parg);
      BIO_puts(param_1, "Supported groups: ");
      while (true) {
         uVar3 = SSL_group_to_name(param_2, *parg);
         BIO_printf(param_1, "%s", uVar3);
         if (( ulong )(iVar1 - 1) == 0) break;
         uVar4 = 1;
         do {
            BIO_puts(param_1, ":");
            uVar3 = SSL_group_to_name(param_2, parg[uVar4]);
            BIO_printf(param_1, "%s", uVar3);
            uVar5 = uVar4 + 1;
            if (uVar4 == iVar1 - 1) goto LAB_00101948;
            uVar4 = uVar5;
         }
 while ( uVar5 != 0 );
      }
;
      LAB_00101948:CRYPTO_free(parg);
      if (param_3 == 0) {
         BIO_puts(param_1, "\nShared groups: ");
         lVar2 = SSL_ctrl(param_2, 0x5d, -1, (void*)0x0);
         iVar1 = (int)lVar2;
         if (iVar1 < 1) {
            if (iVar1 == 0) {
               BIO_puts(param_1, "NONE");
               BIO_puts(param_1, "\n");
               return 1;
            }

         }
 else {
            while (true) {
               uVar4 = SSL_ctrl(param_2, 0x5d, 0, (void*)0x0);
               uVar3 = SSL_group_to_name(param_2, uVar4 & 0xffffffff);
               BIO_printf(param_1, "%s", uVar3);
               if (( ulong )(iVar1 - 1) == 0) break;
               uVar4 = 1;
               do {
                  BIO_puts(param_1, ":");
                  uVar5 = SSL_ctrl(param_2, 0x5d, uVar4, (void*)0x0);
                  uVar3 = SSL_group_to_name(param_2, uVar5 & 0xffffffff);
                  BIO_printf(param_1, "%s", uVar3);
                  uVar5 = uVar4 + 1;
                  if (uVar4 == iVar1 - 1) goto LAB_00101964;
                  uVar4 = uVar5;
               }
 while ( uVar5 != 0 );
            }
;
         }

      }

      LAB_00101964:BIO_puts(param_1, "\n");
   }

   return 1;
}
undefined8 ssl_print_tmp_key(BIO *param_1, SSL *param_2) {
   int iVar1;
   uint uVar2;
   long lVar3;
   undefined *puVar4;
   char *pcVar5;
   ulong uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   EVP_PKEY *local_88;
   undefined1 local_80[8];
   undefined2 local_78[44];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = SSL_ctrl(param_2, 0x6d, 0, &local_88);
   if (lVar3 == 0) {
      iVar1 = SSL_version(param_2);
      if (iVar1 == 0x304) {
         uVar6 = SSL_ctrl(param_2, 0x86, 0, (void*)0x0);
         uVar7 = SSL_group_to_name(param_2, uVar6 & 0xffffffff);
         BIO_printf(param_1, "Negotiated TLS1.3 group: %s\n", uVar7);
      }

      goto LAB_00101b3b;
   }

   BIO_puts(param_1, "Peer Temp Key: ");
   iVar1 = EVP_PKEY_get_id(local_88);
   if (iVar1 == 0x1c) {
      uVar2 = EVP_PKEY_get_bits(local_88);
      BIO_printf(param_1, "DH, %d bits\n", (ulong)uVar2);
   }
 else if (iVar1 < 0x1d) {
      if (iVar1 == -1) {
         puVar4 = (undefined*)EVP_PKEY_get0_type_name(local_88);
         if (puVar4 == (undefined*)0x0) {
            puVar4 = &_LC79;
         }

         BIO_printf(param_1, "%s\n", puVar4);
      }
 else {
         if (iVar1 != 6) goto LAB_00101c18;
         uVar2 = EVP_PKEY_get_bits(local_88);
         BIO_printf(param_1, "RSA, %d bits\n", (ulong)uVar2);
      }

   }
 else if (iVar1 == 0x198) {
      iVar1 = EVP_PKEY_get_utf8_string_param(local_88, "group", local_78, 0x50, local_80);
      if (iVar1 == 0) {
         local_78[0] = 0x3f;
      }

      uVar2 = EVP_PKEY_get_bits(local_88);
      BIO_printf(param_1, "ECDH, %s, %d bits\n", local_78, (ulong)uVar2);
   }
 else {
      LAB_00101c18:uVar2 = EVP_PKEY_get_bits(local_88);
      iVar1 = EVP_PKEY_get_id(local_88);
      pcVar5 = OBJ_nid2sn(iVar1);
      BIO_printf(param_1, "%s, %d bits\n", pcVar5, (ulong)uVar2);
   }

   EVP_PKEY_free(local_88);
   LAB_00101b3b:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long bio_dump_callback(BIO *param_1, int param_2, long *param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, uint param_7, int *param_8) {
   BIO *bio;
   char *format;
   undefined8 uVar1;
   undefined8 *puVar2;
   long lVar3;
   ulong uVar4;
   bio = (BIO*)BIO_get_callback_arg(param_1);
   lVar3 = (long)(int)param_7;
   if (bio == (BIO*)0x0) {
      return lVar3;
   }

   if (param_2 == 0x87) {
      if (0 < (int)param_7) {
         uVar4 = 0;
         if (*(long*)param_3[4] == 0) {
            return lVar3;
         }

         do {
            puVar2 = (undefined8*)( param_3[1] * uVar4 + *param_3 );
            uVar4 = uVar4 + 1;
            uVar1 = puVar2[1];
            BIO_printf(bio, "read from %p [%p] (%zu bytes => %zu (0x%zX))\n", param_1, *puVar2, uVar1, uVar1, uVar1);
            BIO_dump(bio, (char*)*puVar2, *(int*)( puVar2 + 1 ));
         }
 while ( uVar4 < *(ulong*)param_3[4] );
         return lVar3;
      }

      if (param_3[2] == 0) {
         return lVar3;
      }

      puVar2 = (undefined8*)*param_3;
      param_3 = (long*)*puVar2;
      param_4 = puVar2[1];
      LAB_00101edb:BIO_printf(bio, "read from %p [%p] (%zu bytes => %d)\n", param_1, param_3, param_4, (ulong)param_7);
   }
 else {
      if (0x87 < param_2) {
         if (param_2 != 0x88) {
            return lVar3;
         }

         if (0 < (int)param_7) {
            if (*(long*)param_3[4] == 0) {
               return lVar3;
            }

            uVar4 = 0;
            do {
               puVar2 = (undefined8*)( param_3[1] * uVar4 + *param_3 );
               uVar4 = uVar4 + 1;
               uVar1 = puVar2[1];
               BIO_printf(bio, "write to %p [%p] (%zu bytes => %zu (0x%zX))\n", param_1, *puVar2, uVar1, uVar1, uVar1);
               BIO_dump(bio, (char*)*puVar2, *(int*)( puVar2 + 1 ));
            }
 while ( uVar4 < *(ulong*)param_3[4] );
            return lVar3;
         }

         if (param_3[2] == 0) {
            return lVar3;
         }

         puVar2 = (undefined8*)*param_3;
         param_3 = (long*)*puVar2;
         param_4 = puVar2[1];
         LAB_00101eb3:BIO_printf(bio, "write to %p [%p] (%zu bytes => %d)\n", param_1, param_3, param_4, (ulong)param_7);
         return lVar3;
      }

      if (param_2 == 0x82) {
         if (( (int)param_7 < 1 ) || ( param_8 == (int*)0x0 )) goto LAB_00101edb;
         format = "read from %p [%p] (%zu bytes => %zu (0x%zX))\n";
         uVar1 = *(undefined8*)param_8;
      }
 else {
         if (param_2 != 0x83) {
            return lVar3;
         }

         if (( (int)param_7 < 1 ) || ( param_8 == (int*)0x0 )) goto LAB_00101eb3;
         format = "write to %p [%p] (%zu bytes => %zu (0x%zX))\n";
         uVar1 = *(undefined8*)param_8;
      }

      BIO_printf(bio, format, param_1, param_3, param_4, uVar1, uVar1);
      BIO_dump(bio, (char*)param_3, *param_8);
   }

   return lVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void apps_ssl_info_callback(SSL *param_1, ulong param_2, int param_3) {
   char *pcVar1;
   char *pcVar2;
   char *pcVar3;
   pcVar3 = "SSL_connect";
   if (( ( param_2 & 0x1000 ) == 0 ) && ( pcVar3 = "undefined"(param_2 & 0x2000) != 0 )) {
      pcVar3 = "SSL_accept";
   }

   if (( param_2 & 1 ) == 0) {
      if (( param_2 & 0x4000 ) != 0) {
         pcVar3 = "write";
         if (( param_2 & 4 ) != 0) {
            pcVar3 = "read";
         }

         pcVar1 = SSL_alert_desc_string_long(param_3);
         pcVar2 = SSL_alert_type_string_long(param_3);
         BIO_printf(_bio_err, "SSL3 alert %s:%s:%s\n", pcVar3, pcVar2, pcVar1);
         return;
      }

      if (( param_2 & 2 ) == 0) {
         return;
      }

      if (param_3 == 0) {
         pcVar1 = SSL_state_string_long(param_1);
         pcVar2 = "%s:failed in %s\n";
      }
 else {
         if (-1 < param_3) {
            return;
         }

         pcVar1 = SSL_state_string_long(param_1);
         pcVar2 = "%s:error in %s\n";
      }

   }
 else {
      pcVar1 = SSL_state_string_long(param_1);
      pcVar2 = "%s:%s\n";
   }

   BIO_printf(_bio_err, pcVar2, pcVar3, pcVar1);
   return;
}
void msg_cb(int param_1, uint param_2, uint param_3, byte *param_4, ulong param_5, undefined8 param_6, BIO *param_7) {
   undefined **ppuVar1;
   byte *pbVar2;
   undefined **ppuVar3;
   char *pcVar4;
   char *pcVar5;
   ulong uVar6;
   char *pcVar7;
   undefined *puVar8;
   long in_FS_OFFSET;
   char acStack_c8[136];
   long local_40;
   puVar8 = &_LC101;
   pcVar5 = acStack_c8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      puVar8 = &_LC100;
   }

   if (( param_2 == 0xfeff || param_2 == 0x100 ) || ( param_2 - 0x300 < 5 )) {
      if (ssl_versions != (undefined*)0x0) {
         ppuVar3 = &ssl_versions;
         pcVar5 = ssl_versions;
         do {
            if (param_2 == *(uint*)( ppuVar3 + 1 )) goto joined_r0x001020f9;
            pcVar5 = ppuVar3[2];
            ppuVar3 = ppuVar3 + 2;
         }
 while ( pcVar5 != (undefined*)0x0 );
      }

      pcVar5 = &_LC9;
      joined_r0x001020f9:if (param_3 == 0x17) {
         pcVar4 = "";
         pcVar7 = ", ApplicationData";
         goto LAB_001021b3;
      }

      if (0x17 < (int)param_3) {
         pcVar7 = ", RecordHeader";
         pcVar4 = "";
         if (( param_3 != 0x100 ) && ( pcVar7 = param_3 != 0x101 )) {
            LAB_00102158:BIO_snprintf(acStack_c8, 0x7f, ", Unknown (content_type=%d)", (ulong)param_3, pcVar7);
            pcVar4 = "";
            pcVar7 = acStack_c8;
         }

         goto LAB_001021b3;
      }

      if (param_3 == 0x15) {
         pcVar4 = ", ???";
         pcVar7 = ", Alert";
         if (param_5 == 2) {
            pcVar7 = ", warning";
            if (( *param_4 != 1 ) && ( pcVar7 = ", fatal" * param_4 != 2 )) {
               pcVar7 = ", ???";
            }

            if (alert_types == (undefined*)0x0) {
               pcVar4 = ", Alert";
            }
 else {
               ppuVar3 = &alert_types;
               do {
                  if ((uint)param_4[1] == *(uint*)( ppuVar3 + 1 )) {
                     pcVar4 = ", Alert";
                     goto LAB_00102295;
                  }

                  ppuVar1 = ppuVar3 + 2;
                  ppuVar3 = ppuVar3 + 2;
               }
 while ( *ppuVar1 != (undefined*)0x0 );
               pcVar4 = ", Alert";
            }

            goto LAB_00102295;
         }

         goto LAB_001021b3;
      }

      if (param_3 != 0x16) {
         pcVar7 = ", ChangeCipherSpec";
         pcVar4 = "";
         if (param_3 != 0x14) goto LAB_00102158;
         goto LAB_001021b3;
      }

      if (param_5 == 0) {
         BIO_printf(param_7, "%s %s%s [length %04lx]%s%s\n", puVar8, pcVar5, ", Handshake", 0, &_LC9, &_LC16);
         goto LAB_001021db;
      }

      if (handshakes == (undefined*)0x0) {
         pcVar7 = "???";
         pcVar4 = ", Handshake";
      }
 else {
         ppuVar3 = &handshakes;
         pcVar7 = handshakes;
         do {
            if (( uint ) * param_4 == *(uint*)( ppuVar3 + 1 )) {
               pcVar4 = ", Handshake";
               goto LAB_00102295;
            }

            pcVar7 = ppuVar3[2];
            ppuVar3 = ppuVar3 + 2;
         }
 while ( pcVar7 != (char*)0x0 );
         pcVar7 = "???";
         pcVar4 = ", Handshake";
      }

      LAB_00102295:BIO_printf(param_7, "%s %s%s [length %04lx]%s%s\n", puVar8, pcVar5, pcVar4, param_5, pcVar7);
   }
 else {
      BIO_snprintf(acStack_c8, 0x7f, "Not TLS data or unknown version (version=%d, content_type=%d)", (ulong)param_2, (ulong)param_3);
      pcVar4 = "";
      pcVar7 = "";
      LAB_001021b3:BIO_printf(param_7, "%s %s%s [length %04lx]%s%s\n", puVar8, pcVar5, pcVar7, param_5, pcVar4, &_LC16);
      if (param_5 == 0) goto LAB_001021db;
   }

   uVar6 = 0;
   BIO_printf(param_7, "   ");
   do {
      if (( ( uVar6 & 0xf ) == 0 ) && ( uVar6 != 0 )) {
         BIO_printf(param_7, "\n   ");
      }

      pbVar2 = param_4 + uVar6;
      uVar6 = uVar6 + 1;
      BIO_printf(param_7, " %02x", ( ulong ) * pbVar2);
   }
 while ( uVar6 < param_5 );
   BIO_printf(param_7, "\n");
   LAB_001021db:BIO_ctrl(param_7, 0xb, 0, (void*)0x0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void tlsext_cb(undefined8 param_1, int param_2, uint param_3, char *param_4, uint param_5, BIO *param_6) {
   undefined1 *puVar1;
   char *pcVar2;
   char *pcVar3;
   puVar1 = tlsext_types;
   pcVar2 = "server name";
   do {
      if (param_3 == *(uint*)( puVar1 + 8 )) goto LAB_0010247a;
      pcVar2 = *(char**)( puVar1 + 0x10 );
      puVar1 = puVar1 + 0x10;
   }
 while ( pcVar2 != (char*)0x0 );
   pcVar2 = "unknown";
   LAB_0010247a:pcVar3 = "client";
   if (param_2 != 0) {
      pcVar3 = "server";
   }

   BIO_printf(param_6, "TLS %s extension \"%s\" (id=%d), len=%d\n", pcVar3, pcVar2, (ulong)param_3, (ulong)param_5);
   BIO_dump(param_6, param_4, param_5);
   BIO_ctrl(param_6, 0xb, 0, (void*)0x0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool generate_stateless_cookie_callback(SSL *param_1, undefined8 param_2, undefined8 param_3) {
   undefined2 uVar1;
   int iVar2;
   undefined2 *ptr;
   long lVar3;
   void *parg;
   BIO *bp;
   size_t extraout_RDX;
   char *__s2;
   void *pvVar4;
   long in_FS_OFFSET;
   bool bVar5;
   size_t sStack_b8;
   undefined1 auStack_b0[48];
   undefined8 uStack_80;
   undefined8 uStack_78;
   undefined2 *puStack_70;
   long lStack_68;
   SSL *pSStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (cookie_initialized == 0) {
      uStack_50 = 0x10252e;
      iVar2 = RAND_bytes(cookie_secret, 0x10);
      if (iVar2 < 1) {
         bVar5 = false;
         uStack_50 = 0x102692;
         BIO_printf(_bio_err, "error setting random cookie secret\n");
         goto LAB_00102613;
      }

      cookie_initialized = 1;
   }

   uStack_50 = 0x102548;
   iVar2 = SSL_is_dtls(param_1);
   if (iVar2 == 0) {
      parg = (void*)0x0;
      pvVar4 = _ourpeer;
   }
 else {
      uStack_50 = 0x102645;
      parg = (void*)BIO_ADDR_new();
      if (parg == (void*)0x0) {
         bVar5 = false;
         uStack_50 = 0x10270a;
         BIO_printf(_bio_err, "memory full\n");
         goto LAB_00102613;
      }

      uStack_50 = 0x10265c;
      bp = SSL_get_rbio(param_1);
      uStack_50 = 0x10266e;
      BIO_ctrl(bp, 0x2e, 0, parg);
      pvVar4 = parg;
   }

   uStack_50 = 0x10256a;
   iVar2 = BIO_ADDR_rawaddress(pvVar4, 0, &local_48);
   if (iVar2 == 0) {
      bVar5 = false;
      uStack_50 = 0x1026ba;
      BIO_printf(_bio_err, "Failed getting peer address\n");
      uStack_50 = 0x1026c2;
      BIO_ADDR_free(parg);
      LAB_00102613:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return bVar5;
      }

      /* WARNING: Subroutine does not return */
      uStack_50 = 0x102714;
      __stack_chk_fail();
   }

   if (local_48 != 0) {
      uStack_50 = 0x102585;
      uVar1 = BIO_ADDR_rawport(pvVar4);
      local_48 = local_48 + 2;
      uStack_50 = 0x1025a0;
      ptr = (undefined2*)app_malloc(local_48, "cookie generate buffer");
      *ptr = uVar1;
      uStack_50 = 0x1025b5;
      BIO_ADDR_rawaddress(pvVar4, ptr + 1, 0);
      uStack_58 = 0xff;
      lStack_68 = local_48;
      uStack_78 = 0x10;
      uStack_80 = 0x1025ea;
      puStack_70 = ptr;
      pSStack_60 = (SSL*)param_2;
      uStack_50 = param_3;
      lVar3 = EVP_Q_mac(0, &_LC129, 0, &_LC128, 0, cookie_secret);
      if (lVar3 == 0) {
         uStack_50 = 0x1026ea;
         BIO_printf(_bio_err, "Error calculating HMAC-SHA1 of buffer with secret\n");
      }

      bVar5 = lVar3 != 0;
      uStack_50 = 0x10260b;
      CRYPTO_free(ptr);
      uStack_50 = 0x102613;
      BIO_ADDR_free(parg);
      goto LAB_00102613;
   }

   __s2 = "apps/lib/s_cb.c";
   uStack_50 = 0x10272c;
   OPENSSL_die("assertion failed: length != 0", "apps/lib/s_cb.c", 0x375);
   lStack_68 = *(long*)( in_FS_OFFSET + 0x28 );
   pSStack_60 = param_1;
   uStack_58 = param_2;
   uStack_50 = param_3;
   if (cookie_initialized != 0) {
      iVar2 = generate_stateless_cookie_callback();
      if (( iVar2 != 0 ) && ( sStack_b8 == extraout_RDX )) {
         iVar2 = memcmp(auStack_b0, __s2, sStack_b8);
         bVar5 = iVar2 == 0;
         goto LAB_00102758;
      }

   }

   bVar5 = false;
   LAB_00102758:if (lStack_68 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool verify_stateless_cookie_callback(undefined8 param_1, void *param_2, size_t param_3) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   size_t local_70;
   undefined1 local_68[72];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (cookie_initialized != 0) {
      iVar1 = generate_stateless_cookie_callback(param_1, local_68, &local_70);
      if (( iVar1 != 0 ) && ( local_70 == param_3 )) {
         iVar1 = memcmp(local_68, param_2, local_70);
         bVar2 = iVar1 == 0;
         goto LAB_00102758;
      }

   }

   bVar2 = false;
   LAB_00102758:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void generate_cookie_callback(undefined8 param_1, undefined8 param_2, undefined4 *param_3) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   iVar1 = generate_stateless_cookie_callback(param_1, param_2, &local_18);
   if (iVar1 != 0) {
      *param_3 = (int)local_18;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void verify_cookie_callback(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
   verify_stateless_cookie_callback(param_1, param_2, param_3);
   return;
}
void ssl_ctx_set_excert(undefined8 param_1, undefined8 param_2) {
   SSL_CTX_set_cert_cb(param_1, 0x100000, param_2);
   return;
}
void ssl_excert_free(void *param_1) {
   void *pvVar1;
   if (param_1 == (void*)0x0) {
      return;
   }

   do {
      X509_free(*(X509**)( (long)param_1 + 0x28 ));
      EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0x30 ));
      OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0x38 ));
      pvVar1 = *(void**)( (long)param_1 + 0x48 );
      CRYPTO_free(param_1);
      param_1 = pvVar1;
   }
 while ( pvVar1 != (void*)0x0 );
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 load_excert(undefined8 *param_1) {
   undefined4 uVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   undefined4 *puVar5;
   puVar5 = (undefined4*)*param_1;
   if (puVar5 == (undefined4*)0x0) {
      LAB_001029b0:uVar4 = 1;
   }
 else {
      lVar3 = *(long*)( puVar5 + 2 );
      if (lVar3 == 0) {
         if (*(long*)( puVar5 + 0x12 ) == 0) {
            ssl_excert_free(puVar5);
            *param_1 = 0;
            goto LAB_001029b0;
         }

      }
 else {
         do {
            lVar3 = load_cert_pass(lVar3, *puVar5, 1, 0, "Server Certificate");
            *(long*)( puVar5 + 10 ) = lVar3;
            if (lVar3 == 0) goto LAB_00102997;
            lVar3 = *(long*)( puVar5 + 6 );
            if (lVar3 == 0) {
               uVar1 = *puVar5;
               lVar3 = *(long*)( puVar5 + 2 );
            }
 else {
               uVar1 = puVar5[4];
            }

            lVar3 = load_key(lVar3, uVar1, 0, 0, 0, "server key");
            *(long*)( puVar5 + 0xc ) = lVar3;
            if (lVar3 == 0) goto LAB_00102997;
            if (*(long*)( puVar5 + 8 ) != 0) {
               iVar2 = load_certs(*(long*)( puVar5 + 8 ), 0, puVar5 + 0xe, 0, "server chain");
               if (iVar2 == 0) goto LAB_00102997;
            }

            puVar5 = *(undefined4**)( puVar5 + 0x12 );
            if (puVar5 == (undefined4*)0x0) goto LAB_001029b0;
            lVar3 = *(long*)( puVar5 + 2 );
         }
 while ( lVar3 != 0 );
      }

      BIO_printf(_bio_err, "Missing filename\n");
      LAB_00102997:uVar4 = 0;
   }

   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool args_excert(undefined4 param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   byte bVar7;
   bVar7 = 0;
   puVar3 = (undefined8*)*param_2;
   if (puVar3 == (undefined8*)0x0) {
      puVar3 = (undefined8*)app_malloc(0x58, "prepend cert");
      *(undefined8*)( (long)puVar3 + 4 ) = 0;
      puVar6 = (undefined8*)( (long)puVar3 + 0xcU & 0xfffffffffffffff8 );
      puVar3[10] = 0;
      uVar4 = ( ulong )(( (int)puVar3 - (int)puVar6 ) + 0x58U >> 3);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
         *puVar6 = 0;
         puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }

      *(undefined4*)puVar3 = 0x8005;
      *(undefined4*)( puVar3 + 2 ) = 0x8005;
      *param_2 = puVar3;
   }

   switch (param_1) {
      case 1000:
      case 0x3ef:
    goto switchD_001029f6_caseD_3e8;
      case 0x3e9:
    if (puVar3[3] == 0) {
      uVar2 = opt_arg();
      puVar3[3] = uVar2;
      return true;
    }
    uVar2 = opt_getprog();
    BIO_printf(_bio_err,"%s: Key already specified\n",uVar2);
    goto LAB_00102a2b;
      case 0x3ea:
    puVar6 = puVar3;
    if (puVar3[1] != 0) {
      puVar6 = (undefined8 *)app_malloc(0x58,"prepend cert");
      *puVar6 = 0;
      puVar6[10] = 0;
      puVar5 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
      for (uVar4 = (ulong)(((int)puVar6 -
                           (int)(undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8)) + 0x58U >>
                          3); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      }
      puVar6[9] = puVar3;
      *(undefined4 *)puVar6 = *(undefined4 *)puVar3;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar3 + 2);
      puVar3[10] = puVar6;
    }
    *param_2 = puVar6;
    uVar2 = opt_arg();
    puVar6[1] = uVar2;
    break;
      case 0x3eb:
    if (puVar3[4] == 0) {
      uVar2 = opt_arg();
      puVar3[4] = uVar2;
      return true;
    }
    uVar2 = opt_getprog();
    BIO_printf(_bio_err,"%s: Chain already specified\n",uVar2);
LAB_00102a2b:
    ERR_print_errors(_bio_err);
    ssl_excert_free(puVar3);
    *param_2 = 0;
switchD_001029f6_caseD_3e8:
    return false;
      case 0x3ec:
    *(undefined4 *)(puVar3 + 8) = 1;
    break;
      case 0x3ed:
    uVar2 = opt_arg();
    goto LAB_00102b0b;
      case 0x3ee:
    uVar2 = opt_arg();
    puVar3 = puVar3 + 2;
LAB_00102b0b:
    iVar1 = opt_format(uVar2,0xffe,puVar3);
    return iVar1 != 0;
   }

   return true;
}
void print_verify_detail(SSL *param_1, BIO *param_2) {
   ulong uVar1;
   byte *pbVar2;
   byte bVar3;
   ulong uVar4;
   int iVar5;
   uint uVar6;
   long lVar7;
   char *ptr;
   char *pcVar8;
   undefined *puVar9;
   long in_FS_OFFSET;
   undefined8 uStack_80;
   byte local_5b;
   byte local_5a;
   byte local_59;
   long local_58;
   byte *local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   lVar7 = SSL_get_verify_result(param_1);
   if (lVar7 == 0) {
      lVar7 = SSL_get0_peername(param_1);
      BIO_printf(param_2, "Verification: OK\n");
      if (lVar7 != 0) {
         BIO_printf(param_2, "Verified peername: %s\n", lVar7);
      }

   }
 else {
      pcVar8 = X509_verify_cert_error_string(lVar7);
      BIO_printf(param_2, "Verification error: %s\n", pcVar8);
   }

   iVar5 = SSL_get0_dane_authority(param_1, 0, &local_58);
   if (-1 < iVar5) {
      local_50 = (byte*)0x0;
      local_48 = 0;
      uVar6 = SSL_get0_dane_tlsa(param_1, &local_5b, &local_5a, &local_59, &local_50, &local_48);
      uVar4 = local_48;
      pbVar2 = local_50;
      if (local_48 < 0xd) {
         lVar7 = local_48 * 2;
         uVar1 = lVar7 + 1;
         if (uVar1 < local_48) {
            /* WARNING: Subroutine does not return */
            hexencode_part_0(local_48);
         }

         uStack_80 = 0x102f37;
         ptr = (char*)app_malloc(uVar1, "TLSA hex data buffer");
         pcVar8 = ptr;
         if (uVar4 != 0) {
            *ptr = "0123456789abcdef"[*pbVar2 >> 4];
            ptr[1] = "0123456789abcdef"[*pbVar2 & 0xf];
            if (uVar4 != 1) {
               ptr[2] = "0123456789abcdef"[pbVar2[1] >> 4];
               ptr[3] = "0123456789abcdef"[pbVar2[1] & 0xf];
               if (uVar4 != 2) {
                  ptr[4] = "0123456789abcdef"[pbVar2[2] >> 4];
                  ptr[5] = "0123456789abcdef"[pbVar2[2] & 0xf];
                  if (uVar4 != 3) {
                     ptr[6] = "0123456789abcdef"[pbVar2[3] >> 4];
                     ptr[7] = "0123456789abcdef"[pbVar2[3] & 0xf];
                     if (uVar4 != 4) {
                        ptr[8] = "0123456789abcdef"[pbVar2[4] >> 4];
                        ptr[9] = "0123456789abcdef"[pbVar2[4] & 0xf];
                        if (uVar4 != 5) {
                           ptr[10] = "0123456789abcdef"[pbVar2[5] >> 4];
                           ptr[0xb] = "0123456789abcdef"[pbVar2[5] & 0xf];
                           if (uVar4 != 6) {
                              ptr[0xc] = "0123456789abcdef"[pbVar2[6] >> 4];
                              ptr[0xd] = "0123456789abcdef"[pbVar2[6] & 0xf];
                              if (uVar4 != 7) {
                                 ptr[0xe] = "0123456789abcdef"[pbVar2[7] >> 4];
                                 ptr[0xf] = "0123456789abcdef"[pbVar2[7] & 0xf];
                                 if (uVar4 != 8) {
                                    ptr[0x10] = "0123456789abcdef"[pbVar2[8] >> 4];
                                    ptr[0x11] = "0123456789abcdef"[pbVar2[8] & 0xf];
                                    if (uVar4 != 9) {
                                       ptr[0x12] = "0123456789abcdef"[pbVar2[9] >> 4];
                                       ptr[0x13] = "0123456789abcdef"[pbVar2[9] & 0xf];
                                       if (uVar4 != 10) {
                                          ptr[0x14] = "0123456789abcdef"[pbVar2[10] >> 4];
                                          ptr[0x15] = "0123456789abcdef"[pbVar2[10] & 0xf];
                                          if (uVar4 != 0xb) {
                                             ptr[0x16] = "0123456789abcdef"[pbVar2[0xb] >> 4];
                                             ptr[0x17] = "0123456789abcdef"[pbVar2[0xb] & 0xf];
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

            pcVar8 = ptr + lVar7;
         }

         *pcVar8 = '\0';
      }
 else {
         pbVar2 = local_50 + ( local_48 - 0xc );
         uStack_80 = 0x102ce0;
         ptr = (char*)app_malloc(0x19, "TLSA hex data buffer");
         *ptr = "0123456789abcdef"[*pbVar2 >> 4];
         ptr[1] = "0123456789abcdef"[*pbVar2 & 0xf];
         ptr[2] = "0123456789abcdef"[pbVar2[1] >> 4];
         for (int i = 0; i < 10; i++) {
            ptr[( 2*i + 3 )] = "0123456789abcdef"[pbVar2[( i + 1 )] & 15];
            ptr[( 2*i + 4 )] = "0123456789abcdef"[pbVar2[( i + 2 )] >> 4];
         }

         bVar3 = pbVar2[0xb];
         ptr[0x18] = '\0';
         ptr[0x17] = "0123456789abcdef"[bVar3 & 0xf];
      }

      puVar9 = &_LC16;
      if (0xc < local_48) {
         puVar9 = &_LC138;
      }

      BIO_printf(param_2, "DANE TLSA %d %d %d %s%s ", (ulong)local_5b, (ulong)local_5a, (ulong)local_59, puVar9);
      lVar7 = SSL_get0_peer_rpk(param_1);
      if (lVar7 == 0) {
         pcVar8 = "signed the peer";
         if (( local_58 == 0 ) && ( pcVar8 = uVar6 != 0 )) {
            pcVar8 = "matched the TA";
         }

         BIO_printf(param_2, "%s certificate at depth %d\n", pcVar8, (ulong)uVar6);
      }
 else {
         BIO_printf(param_2, "matched the peer raw public key\n", ptr, uStack_80);
      }

      CRYPTO_free(ptr);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 print_ssl_summary(SSL *param_1) {
   int iVar1;
   int iVar2;
   X509 *a;
   long lVar3;
   char *pcVar4;
   SSL_CIPHER *pSVar5;
   ulong uVar6;
   X509_NAME *nm;
   long lVar7;
   undefined8 uVar8;
   char *pcVar9;
   char *pcVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   int local_4c;
   byte *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   a = (X509*)SSL_get0_peer_certificate();
   lVar3 = SSL_get0_peer_rpk(param_1);
   pcVar4 = SSL_get_version(param_1);
   BIO_printf(_bio_err, "Protocol version: %s\n", pcVar4);
   iVar1 = SSL_is_server(param_1);
   if (iVar1 != 0) {
      lVar7 = SSL_ctrl(param_1, 0x6e, 0, (void*)0x0);
      if (lVar7 != 2) {
         pcVar4 = "apps/lib/s_cb.c";
         pcVar10 = "assertion failed: num == 2";
         OPENSSL_die("assertion failed: num == 2", "apps/lib/s_cb.c", 0x4bc);
         iVar1 = 0;
         SSL_CONF_CTX_set_ssl_ctx();
         while (true) {
            iVar2 = OPENSSL_sk_num(pcVar4);
            if (iVar2 <= iVar1) {
               iVar1 = SSL_CONF_CTX_finish(pcVar10);
               if (iVar1 == 0) {
                  BIO_puts(_bio_err, "Error finishing context\n");
                  ERR_print_errors(_bio_err);
                  return 0;
               }

               return 1;
            }

            uVar8 = OPENSSL_sk_value(pcVar4, iVar1);
            pcVar9 = (char*)OPENSSL_sk_value(pcVar4, iVar1 + 1);
            iVar2 = SSL_CONF_cmd(pcVar10, uVar8, pcVar9);
            if (iVar2 < 1) break;
            iVar1 = iVar1 + 2;
         }
;
         if (pcVar9 == (char*)0x0) {
            pcVar9 = "<NULL>";
         }

         BIO_printf(_bio_err, "Call to SSL_CONF_cmd(%s, %s) failed\n", uVar8, pcVar9);
         ERR_print_errors(_bio_err);
         return 0;
      }

      uVar6 = SSL_ctrl(param_1, 0x6e, 0, &local_48);
      BIO_puts(_bio_err, "Client cipher list: ");
      if (uVar6 != 0) {
         uVar11 = 0;
         do {
            pSVar5 = (SSL_CIPHER*)SSL_CIPHER_find(param_1, local_48);
            if (uVar11 != 0) {
               BIO_puts(_bio_err, ":");
            }

            if (pSVar5 == (SSL_CIPHER*)0x0) {
               if (*(short*)local_48 == -0x100) {
                  BIO_puts(_bio_err, "SCSV");
               }
 else {
                  BIO_puts(_bio_err, "0x");
                  BIO_printf(_bio_err, "%02X", ( ulong ) * local_48);
                  BIO_printf(_bio_err, "%02X", (ulong)local_48[1]);
               }

            }
 else {
               pcVar4 = SSL_CIPHER_get_name(pSVar5);
               BIO_puts(_bio_err, pcVar4);
            }

            uVar11 = uVar11 + 2;
            local_48 = local_48 + 2;
         }
 while ( uVar11 < uVar6 );
      }

      BIO_puts(_bio_err, "\n");
   }

   pSVar5 = SSL_get_current_cipher(param_1);
   pcVar4 = SSL_CIPHER_get_name(pSVar5);
   BIO_printf(_bio_err, "Ciphersuite: %s\n", pcVar4);
   do_print_sigalgs_isra_0(_bio_err, param_1, 0);
   if (a == (X509*)0x0) {
      if (lVar3 == 0) {
         BIO_puts(_bio_err, "No peer certificate or raw public key\n");
         goto LAB_001032e1;
      }

      BIO_printf(_bio_err, "Peer used raw public key\n");
   }
 else {
      BIO_puts(_bio_err, "Peer certificate: ");
      uVar6 = get_nameopt();
      nm = X509_get_subject_name(a);
      X509_NAME_print_ex(_bio_err, nm, 0, uVar6);
      BIO_puts(_bio_err, "\n");
      lVar3 = SSL_ctrl(param_1, 0x6c, 0, &local_4c);
      if (lVar3 != 0) {
         pcVar4 = OBJ_nid2sn(local_4c);
         BIO_printf(_bio_err, "Hash used: %s\n", pcVar4);
      }

   }

   lVar3 = SSL_ctrl(param_1, 0x8d, 0, &local_48);
   if (lVar3 != 0) {
      BIO_printf(_bio_err, "Signature type: %s\n", local_48);
   }

   print_verify_detail(param_1, _bio_err);
   LAB_001032e1:ssl_print_point_formats(_bio_err, param_1);
   iVar1 = SSL_is_server(param_1);
   if (iVar1 != 0) {
      ssl_print_groups(_bio_err, param_1, 1);
   }

   ssl_print_tmp_key(_bio_err, param_1);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 config_ctx(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   iVar2 = 0;
   SSL_CONF_CTX_set_ssl_ctx(param_1, param_3);
   while (true) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar2) {
         iVar2 = SSL_CONF_CTX_finish(param_1);
         if (iVar2 == 0) {
            BIO_puts(_bio_err, "Error finishing context\n");
            ERR_print_errors(_bio_err);
            return 0;
         }

         return 1;
      }

      uVar3 = OPENSSL_sk_value(param_2, iVar2);
      pcVar4 = (char*)OPENSSL_sk_value(param_2, iVar2 + 1);
      iVar1 = SSL_CONF_cmd(param_1, uVar3, pcVar4);
      if (iVar1 < 1) break;
      iVar2 = iVar2 + 2;
   }
;
   if (pcVar4 == (char*)0x0) {
      pcVar4 = "<NULL>";
   }

   BIO_printf(_bio_err, "Call to SSL_CONF_cmd(%s, %s) failed\n", uVar3, pcVar4);
   ERR_print_errors(_bio_err);
   return 0;
}
undefined8 ssl_ctx_add_crls(SSL_CTX *param_1, undefined8 param_2, int param_3) {
   int iVar1;
   X509_STORE *ctx;
   X509_CRL *x;
   int iVar2;
   ctx = SSL_CTX_get_cert_store(param_1);
   iVar2 = 0;
   while (true) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar2) break;
      x = (X509_CRL*)OPENSSL_sk_value(param_2, iVar2);
      X509_STORE_add_crl(ctx, x);
      iVar2 = iVar2 + 1;
   }
;
   if (param_3 == 0) {
      return 1;
   }

   store_setup_crl_download(ctx);
   return 1;
}
uint ssl_load_stores(SSL_CTX *param_1, long param_2, long param_3, X509_STORE *param_4, long param_5, long param_6, long param_7, undefined8 param_8, int param_9) {
   int iVar1;
   int iVar2;
   uint uVar3;
   X509_STORE *pXVar4;
   X509_CRL *x;
   long lVar5;
   X509_STORE *v;
   if (param_3 != 0 || param_2 != 0) {
      pXVar4 = X509_STORE_new();
      if (pXVar4 == (X509_STORE*)0x0) {
         LAB_00103860:uVar3 = 0;
         v = (X509_STORE*)0x0;
         pXVar4 = (X509_STORE*)0x0;
         goto LAB_00103807;
      }

      if (param_3 == 0) {
         LAB_001037df:iVar1 = X509_STORE_load_path(pXVar4, param_2);
         if (iVar1 != 0) {
            LAB_001037ee:if (param_4 != (X509_STORE*)0x0) goto LAB_001036d6;
            goto LAB_001036e9;
         }

      }
 else {
         iVar1 = X509_STORE_load_file(pXVar4, param_3);
         if (iVar1 != 0) {
            if (param_2 != 0) goto LAB_001037df;
            goto LAB_001037ee;
         }

      }

      LAB_00103800:uVar3 = 0;
      v = (X509_STORE*)0x0;
      goto LAB_00103807;
   }

   if (param_4 != (X509_STORE*)0x0) {
      pXVar4 = X509_STORE_new();
      if (pXVar4 == (X509_STORE*)0x0) goto LAB_00103860;
      LAB_001036d6:iVar1 = X509_STORE_load_store(pXVar4, param_4);
      if (iVar1 == 0) {
         v = (X509_STORE*)0x0;
         uVar3 = 0;
         goto LAB_00103807;
      }

      LAB_001036e9:param_4 = pXVar4;
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_8),iVar1 < iVar2; iVar1 = iVar1 + 1) {
         x = (X509_CRL*)OPENSSL_sk_value(param_8, iVar1);
         X509_STORE_add_crl(param_4, x);
      }

      lVar5 = SSL_CTX_ctrl(param_1, 0x6a, 1, param_4);
      pXVar4 = param_4;
      if (lVar5 == 0) goto LAB_00103800;
      if (param_9 != 0) {
         store_setup_crl_download(param_4);
      }

   }

   pXVar4 = param_4;
   if (param_5 == 0 && param_6 == 0) {
      if (param_7 == 0) {
         v = (X509_STORE*)0x0;
         uVar3 = 1;
         goto LAB_00103807;
      }

      v = X509_STORE_new();
      if (v == (X509_STORE*)0x0) goto LAB_001038c8;
      LAB_0010376b:uVar3 = X509_STORE_load_store(v, param_7);
      if (uVar3 == 0) goto LAB_00103807;
   }
 else {
      v = X509_STORE_new();
      if (v == (X509_STORE*)0x0) {
         LAB_001038c8:uVar3 = 0;
         goto LAB_00103807;
      }

      if (param_6 == 0) {
         LAB_001038b0:iVar1 = X509_STORE_load_path(v, param_5);
         if (iVar1 == 0) {
            uVar3 = 0;
            goto LAB_00103807;
         }

      }
 else {
         uVar3 = X509_STORE_load_file(v, param_6);
         if (uVar3 == 0) goto LAB_00103807;
         if (param_5 != 0) goto LAB_001038b0;
      }

      if (param_7 != 0) goto LAB_0010376b;
   }

   lVar5 = SSL_CTX_ctrl(param_1, 0x6b, 1, v);
   uVar3 = ( uint )(lVar5 != 0);
   LAB_00103807:X509_STORE_free(pXVar4);
   X509_STORE_free(v);
   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ssl_ctx_security_debug(undefined8 param_1, undefined4 param_2) {
   sdb_1._0_8_ = _bio_err;
   sdb_1._8_4_ = param_2;
   sdb_1._16_8_ = SSL_CTX_get_security_callback();
   SSL_CTX_set_security_callback(param_1, security_callback_debug);
   SSL_CTX_set0_security_ex_data(param_1, sdb_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_keylog_file(long param_1, char *param_2) {
   long lVar1;
   BIO_free_all(bio_keylog);
   bio_keylog = (BIO*)0x0;
   if (( param_1 != 0 ) && ( param_2 != (char*)0x0 )) {
      bio_keylog = BIO_new_file(param_2, "a");
      if (bio_keylog == (BIO*)0x0) {
         BIO_printf(_bio_err, "Error writing keylog file %s\n", param_2);
         return 1;
      }

      lVar1 = BIO_ctrl(bio_keylog, 0x85, 0, (void*)0x0);
      if ((int)lVar1 == 0) {
         BIO_puts(bio_keylog, "# SSL/TLS secrets log file, generated by OpenSSL\n");
         BIO_ctrl(bio_keylog, 0xb, 0, (void*)0x0);
      }

      SSL_CTX_set_keylog_callback(param_1, keylog_callback);
   }

   return 0;
}
void print_ca_names(BIO *param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   ulong flags;
   X509_NAME *nm;
   iVar1 = SSL_is_server(param_2);
   pcVar3 = "server";
   if (iVar1 == 0) {
      pcVar3 = "client";
   }

   lVar4 = SSL_get0_peer_CA_list(param_2);
   if (lVar4 != 0) {
      iVar1 = OPENSSL_sk_num(lVar4);
      if (iVar1 != 0) {
         BIO_printf(param_1, "---\nAcceptable %s certificate CA names\n", pcVar3);
         iVar1 = 0;
         while (true) {
            iVar2 = OPENSSL_sk_num(lVar4);
            if (iVar2 <= iVar1) break;
            flags = get_nameopt();
            nm = (X509_NAME*)OPENSSL_sk_value(lVar4, iVar1);
            X509_NAME_print_ex(param_1, nm, 0, flags);
            BIO_write(param_1, &_LC3, 1);
            iVar1 = iVar1 + 1;
         }
;
         return;
      }

   }

   iVar1 = SSL_is_server(param_2);
   if (iVar1 != 0) {
      return;
   }

   BIO_printf(param_1, "---\nNo %s certificate CA names sent\n", pcVar3);
   return;
}
void ssl_print_secure_renegotiation_notes(BIO *param_1, SSL *param_2) {
   int iVar1;
   long lVar2;
   undefined *puVar3;
   iVar1 = SSL_is_dtls(param_2);
   if (iVar1 == 0) {
      iVar1 = SSL_version(param_2);
      if (0x303 < iVar1) {
         BIO_printf(param_1, "This TLS version forbids renegotiation.\n");
         return;
      }

   }

   lVar2 = SSL_ctrl(param_2, 0x4c, 0, (void*)0x0);
   puVar3 = &_LC16;
   if (lVar2 == 0) {
      puVar3 = &_LC170;
   }

   BIO_printf(param_1, "Secure Renegotiation IS%s supported\n", puVar3);
   return;
}
undefined8 progress_cb(EVP_PKEY_CTX *param_1) {
   uint uVar1;
   BIO *b;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   b = (BIO*)EVP_PKEY_CTX_get_app_data(param_1);
   uVar1 = EVP_PKEY_CTX_get_keygen_info(param_1, 0);
   local_21 = 0x3f;
   if (uVar1 < 5) {
      local_21 = *(undefined1*)( (long)&symbols_0 + (long)(int)uVar1 );
   }

   BIO_write(b, &local_21, 1);
   BIO_ctrl(b, 0xb, 0, (void*)0x0);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

