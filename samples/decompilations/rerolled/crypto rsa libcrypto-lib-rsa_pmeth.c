void pkey_rsa_cleanup(long param_1) {
   void *ptr;
   ptr = *(void**)( param_1 + 0x98 );
   if (ptr != (void*)0x0) {
      BN_free(*(BIGNUM**)( (long)ptr + 8 ));
      CRYPTO_free(*(void**)( (long)ptr + 0x38 ));
      CRYPTO_free(*(void**)( (long)ptr + 0x40 ));
      CRYPTO_free(ptr);
      return;
   }

   return;
}
ulong pkey_rsa_ctrl_str(long param_1, char *param_2, char *param_3) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   void *ptr;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   BIGNUM *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (char*)0x0) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x293, "pkey_rsa_ctrl_str");
      ERR_set_error(4, 0x93, 0);
   }
 else {
      iVar1 = strcmp(param_2, "rsa_padding_mode");
      if (iVar1 == 0) {
         iVar1 = strcmp(param_3, "pkcs1");
         if (iVar1 == 0) {
            uVar5 = 1;
         }
 else {
            iVar1 = strcmp(param_3, "none");
            if (iVar1 == 0) {
               uVar5 = 3;
            }
 else {
               iVar1 = strcmp(param_3, "oeap");
               if (iVar1 != 0) {
                  iVar1 = strcmp(param_3, "oaep");
                  if (iVar1 != 0) {
                     iVar1 = strcmp(param_3, "x931");
                     if (iVar1 == 0) {
                        uVar5 = 5;
                     }
 else {
                        iVar1 = strcmp(param_3, "pss");
                        if (iVar1 != 0) {
                           ERR_new();
                           ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x2a6, "pkey_rsa_ctrl_str");
                           ERR_set_error(4, 0x76, 0);
                           goto LAB_00100599;
                        }

                        uVar5 = 6;
                     }

                     goto LAB_00100148;
                  }

               }

               uVar5 = 4;
            }

         }

         LAB_00100148:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar3 = EVP_PKEY_CTX_set_rsa_padding(param_1, uVar5);
            return uVar3;
         }

         goto LAB_001005a3;
      }

      iVar1 = strcmp(param_2, "rsa_pss_saltlen");
      if (iVar1 == 0) {
         iVar1 = strcmp(param_3, "digest");
         uVar3 = 0xffffffff;
         if (iVar1 != 0) {
            iVar1 = strcmp(param_3, "max");
            uVar3 = 0xfffffffd;
            if (iVar1 != 0) {
               iVar1 = strcmp(param_3, "auto");
               uVar3 = 0xfffffffe;
               if (iVar1 != 0) {
                  uVar3 = strtol(param_3, (char**)0x0, 10);
                  uVar3 = uVar3 & 0xffffffff;
               }

            }

         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar3 = EVP_PKEY_CTX_set_rsa_pss_saltlen(param_1, uVar3);
            return uVar3;
         }

         goto LAB_001005a3;
      }

      iVar1 = strcmp(param_2, "rsa_keygen_bits");
      if (iVar1 == 0) {
         lVar4 = strtol(param_3, (char**)0x0, 10);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar3 = EVP_PKEY_CTX_set_rsa_keygen_bits(param_1, lVar4);
            return uVar3;
         }

         goto LAB_001005a3;
      }

      iVar1 = strcmp(param_2, "rsa_keygen_pubexp");
      if (iVar1 == 0) {
         local_28 = (BIGNUM*)0x0;
         uVar2 = BN_asc2bn(&local_28, param_3);
         if (uVar2 != 0) {
            uVar2 = EVP_PKEY_CTX_set1_rsa_keygen_pubexp(param_1, local_28);
            BN_free(local_28);
         }

      }
 else {
         iVar1 = strcmp(param_2, "rsa_keygen_primes");
         if (iVar1 == 0) {
            lVar4 = strtol(param_3, (char**)0x0, 10);
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar3 = EVP_PKEY_CTX_set_rsa_keygen_primes(param_1, lVar4);
               return uVar3;
            }

            goto LAB_001005a3;
         }

         iVar1 = strcmp(param_2, "rsa_mgf1_md");
         if (iVar1 == 0) {
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = 0x1005;
               uVar6 = 0xc7f0;
               goto LAB_001004f1;
            }

            goto LAB_001005a3;
         }

         if (**(int**)( param_1 + 0x78 ) == 0x390) {
            iVar1 = strcmp(param_2, "rsa_pss_keygen_mgf1_md");
            if (iVar1 == 0) {
               if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001005a3;
               uVar5 = 0x1005;
               uVar6 = 4;
               goto LAB_001004f1;
            }

            iVar1 = strcmp(param_2, "rsa_pss_keygen_md");
            if (iVar1 == 0) {
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar5 = 1;
                  uVar6 = 4;
                  goto LAB_001004f1;
               }

               goto LAB_001005a3;
            }

            iVar1 = strcmp(param_2, "rsa_pss_keygen_saltlen");
            if (iVar1 == 0) {
               lVar4 = strtol(param_3, (char**)0x0, 10);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar3 = EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(param_1, lVar4);
                  return uVar3;
               }

               goto LAB_001005a3;
            }

         }

         iVar1 = strcmp(param_2, "rsa_oaep_md");
         if (iVar1 == 0) {
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = 0x1009;
               uVar6 = 0x600;
               LAB_001004f1:uVar3 = EVP_PKEY_CTX_md(param_1, uVar6, uVar5, param_3);
               return uVar3;
            }

            goto LAB_001005a3;
         }

         iVar1 = strcmp(param_2, "rsa_oaep_label");
         if (iVar1 == 0) {
            ptr = (void*)OPENSSL_hexstr2buf(param_3, &local_28);
            uVar2 = 0;
            if (ptr != (void*)0x0) {
               uVar2 = EVP_PKEY_CTX_set0_rsa_oaep_label(param_1, ptr, (ulong)local_28 & 0xffffffff);
               if ((int)uVar2 < 1) {
                  CRYPTO_free(ptr);
               }

            }

         }
 else {
            LAB_00100599:uVar2 = 0xfffffffe;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar2;
   }

   LAB_001005a3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 check_padding_md(long param_1, int param_2) {
   int iVar1;
   if (param_1 == 0) {
      return 1;
   }

   iVar1 = EVP_MD_get_type();
   if (param_2 == 3) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x198, "check_padding_md");
      ERR_set_error(4, 0x8d, 0);
   }
 else if (param_2 == 5) {
      iVar1 = RSA_X931_hash_id(iVar1);
      if (iVar1 != -1) {
         return 1;
      }

      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x19e, "check_padding_md");
      ERR_set_error(4, 0x8e, 0);
   }
 else {
      if (iVar1 < 0x76) {
         if (iVar1 < 0x40) {
            if (iVar1 - 3U < 2) {
               return 1;
            }

         }
 else if (( 0x24000080000001U >> ( ( ulong )(iVar1 - 0x40) & 0x3f ) & 1 ) != 0) {
            return 1;
         }

      }
 else if (iVar1 < 0x2a4) {
         if (0x29f < iVar1) {
            return 1;
         }

         if (iVar1 == 0x101) {
            return 1;
         }

      }
 else if (iVar1 - 0x446U < 6) {
         return 1;
      }

      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x1b8, "check_padding_md");
      ERR_set_error(4, 0x9d, 0);
   }

   return 0;
}
int pkey_rsa_ctrl(uint *param_1, int param_2, int param_3, long *param_4) {
   int *piVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   EVP_MD *pEVar5;
   ulong uVar6;
   undefined8 uVar7;
   piVar1 = *(int**)( param_1 + 0x26 );
   if (0x100e < param_2) {
      return -2;
   }

   if (param_2 < 0x1001) {
      if (0xd < param_2) {
         return -2;
      }

      if (param_2 < 3) {
         if (param_2 == 1) {
            iVar3 = check_padding_md(param_4, piVar1[7]);
            if (iVar3 == 0) {
               return 0;
            }

            if (piVar1[0xd] != -1) {
               iVar3 = EVP_MD_get_type(*(undefined8*)( piVar1 + 8 ));
               iVar2 = EVP_MD_get_type(param_4);
               if (iVar3 != iVar2) {
                  ERR_new();
                  ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x231, "pkey_rsa_ctrl");
                  ERR_set_error(4, 0x91, 0);
                  return 0;
               }

               return 1;
            }

            LAB_001008af:*(long**)( piVar1 + 8 ) = param_4;
            return 1;
         }

         if (param_2 != 2) {
            return -2;
         }

         LAB_0010079e:ERR_new();
         ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x286, "pkey_rsa_ctrl");
         ERR_set_error(4, 0x94, 0);
         return -2;
      }

      uVar6 = 1L << ( (byte)param_2 & 0x3f );
      if (( uVar6 & 0x618 ) != 0) {
         if (**(int**)( param_1 + 0x1e ) != 0x390) {
            return 1;
         }

         goto LAB_0010079e;
      }

      if (( uVar6 & 0x8a0 ) != 0) {
         return 1;
      }

      if (param_2 != 0xd) {
         return -2;
      }

      goto LAB_001009d0;
   }

   switch (param_2) {
      case 0x1002:
      case 0x1007:
    if (piVar1[7] != 6) {
      ERR_new();
      uVar7 = 0x1e8;
LAB_00100c7e:
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",uVar7,"pkey_rsa_ctrl");
      ERR_set_error(4,0x92,0);
      return -2;
    }
    if (param_2 == 0x1007) {
      *(int *)param_4 = piVar1[0xc];
      return 1;
    }
    if (param_3 < -3) {
      return -2;
    }
    if (piVar1[0xd] != -1) {
      if (param_3 == -2) {
        if (*param_1 == 0x20) {
          ERR_new();
          uVar7 = 499;
          goto LAB_00100c7e;
        }
        iVar3 = EVP_MD_get_size(*(undefined8 *)(piVar1 + 8));
        if (iVar3 < 1) goto LAB_00100d6a;
      }
      else {
        iVar3 = EVP_MD_get_size(*(undefined8 *)(piVar1 + 8));
        if (iVar3 < 1) {
LAB_00100d6a:
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x1f8,"pkey_rsa_ctrl");
          ERR_set_error(4,0x8f,0);
          return -2;
        }
        if (param_3 == -1) {
          if (iVar3 < piVar1[0xd]) {
LAB_00100b60:
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x1fe,"pkey_rsa_ctrl");
            ERR_set_error(4,0xa4,0);
            return 0;
          }
        }
        else if ((-1 < param_3) && (param_3 < piVar1[0xd])) goto LAB_00100b60;
      }
    }
    piVar1[0xc] = param_3;
    break;
      case 0x1003:
    if (param_3 < 0x200) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x208,"pkey_rsa_ctrl");
      ERR_set_error(4,0x78,0);
      return -2;
    }
    *piVar1 = param_3;
    break;
      case 0x1004:
    if (((param_4 == (long *)0x0) || (iVar3 = BN_is_odd(param_4), iVar3 == 0)) ||
       (iVar3 = BN_is_one(param_4), iVar3 != 0)) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x210,"pkey_rsa_ctrl");
      ERR_set_error(4,0x65,0);
      return -2;
    }
    BN_free(*(BIGNUM **)(piVar1 + 2));
    *(long **)(piVar1 + 2) = param_4;
    break;
      case 0x1005:
      case 0x1008:
    if ((piVar1[7] & 0xfffffffdU) != 4) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x23f,"pkey_rsa_ctrl");
      ERR_set_error(4,0x9c,0);
      return -2;
    }
    if (param_2 != 0x1008) {
      if (piVar1[0xd] == -1) {
        *(long **)(piVar1 + 10) = param_4;
        return 1;
      }
      iVar3 = EVP_MD_get_type(*(undefined8 *)(piVar1 + 10));
      iVar2 = EVP_MD_get_type(param_4);
      if (iVar3 != iVar2) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x24b,"pkey_rsa_ctrl");
        ERR_set_error(4,0x98,0);
        return 0;
      }
      return 1;
    }
    lVar4 = *(long *)(piVar1 + 10);
    if (lVar4 != 0) goto LAB_001009d4;
    goto LAB_001009d0;
      case 0x1006:
    *(int *)param_4 = piVar1[7];
    break;
      case 0x1009:
      case 0x100b:
    if (piVar1[7] != 4) {
      ERR_new();
      uVar7 = 0x222;
      goto LAB_00100c36;
    }
    if (param_2 != 0x100b) goto LAB_001008af;
LAB_001009d0:
    lVar4 = *(long *)(piVar1 + 8);
LAB_001009d4:
    *param_4 = lVar4;
    return 1;
      case 0x100a:
    if (piVar1[7] == 4) {
      CRYPTO_free(*(void **)(piVar1 + 0x10));
      if ((param_4 != (long *)0x0) && (0 < param_3)) {
        *(long **)(piVar1 + 0x10) = param_4;
        *(long *)(piVar1 + 0x12) = (long)param_3;
        return 1;
      }
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      return 1;
    }
    ERR_new();
    uVar7 = 0x254;
    goto LAB_00100c36;
      case 0x100c:
    if (piVar1[7] == 4) {
      if (param_4 != (long *)0x0) {
        *param_4 = *(long *)(piVar1 + 0x10);
        return piVar1[0x12];
      }
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x267,"pkey_rsa_ctrl");
      ERR_set_error(6,0xc0102,0);
      return 0;
    }
    ERR_new();
    uVar7 = 0x263;
    goto LAB_00100c36;
      case 0x100d:
    if (3 < param_3 - 2U) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x219,"pkey_rsa_ctrl");
      ERR_set_error(4,0xa5,0);
      return -2;
    }
    piVar1[4] = param_3;
    break;
      case 0x100e:
    if (piVar1[7] == 1) {
      piVar1[0x14] = param_3;
      return 1;
    }
    ERR_new();
    uVar7 = 0x26f;
LAB_00100c36:
    ERR_set_debug("crypto/rsa/rsa_pmeth.c",uVar7,"pkey_rsa_ctrl");
    ERR_set_error(4,0x8d,0);
    return -2;
      default:
    if (5 < param_3 - 1U) {
LAB_00100b05:
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pmeth.c",0x1de,"pkey_rsa_ctrl");
      ERR_set_error(4,0x90,0);
      return -2;
    }
    iVar3 = check_padding_md(*(undefined8 *)(piVar1 + 8),param_3);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_3 == 6) {
      if ((*param_1 & 0x30) == 0) goto LAB_00100b05;
    }
    else {
      if (**(int **)(param_1 + 0x1e) == 0x390) goto LAB_00100b05;
      if (param_3 != 4) goto LAB_00100aa4;
      if ((*param_1 & 0x600) == 0) goto LAB_00100b05;
    }
    if (*(long *)(piVar1 + 8) == 0) {
      pEVar5 = EVP_sha1();
      *(EVP_MD **)(piVar1 + 8) = pEVar5;
    }
LAB_00100aa4:
    piVar1[7] = param_3;
    return 1;
   }

   return 1;
}
undefined8 pkey_rsa_init(long param_1) {
   int iVar1;
   int *piVar2;
   undefined4 *puVar3;
   puVar3 = (undefined4*)CRYPTO_zalloc(0x58, "crypto/rsa/rsa_pmeth.c", 0x40);
   if (puVar3 != (undefined4*)0x0) {
      piVar2 = *(int**)( param_1 + 0x78 );
      *puVar3 = 0x800;
      puVar3[4] = 2;
      iVar1 = *piVar2;
      *(undefined8*)( puVar3 + 0xc ) = 0xfffffffffffffffe;
      puVar3[0x14] = 1;
      *(undefined4**)( param_1 + 0x98 ) = puVar3;
      *(undefined4*)( param_1 + 0x70 ) = 2;
      puVar3[7] = ( uint )(iVar1 == 0x390) * 5 + 1;
      *(undefined4**)( param_1 + 0x68 ) = puVar3 + 5;
      return 1;
   }

   return 0;
}
undefined8 pkey_pss_init(long param_1) {
   long lVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   RSA *rsa;
   undefined8 uVar5;
   long in_FS_OFFSET;
   int local_44;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   lVar1 = *(long*)( param_1 + 0x98 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (**(int**)( param_1 + 0x78 ) == 0x390) {
      rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
      if (rsa->_method_mod_p != (BN_MONT_CTX*)0x0) {
         iVar2 = ossl_rsa_pss_get_param(rsa->_method_mod_p, &local_40, &local_38, &local_44);
         if (iVar2 == 0) goto LAB_00100e71;
         iVar2 = EVP_MD_get_size(local_40);
         if (iVar2 < 1) {
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x378, "pkey_pss_init");
            ERR_set_error(4, 0x8f, 0);
            uVar5 = 0;
            goto LAB_00100f14;
         }

         iVar3 = RSA_size(rsa);
         uVar4 = RSA_bits(rsa);
         if ((int)( ( iVar3 - iVar2 ) - ( uint )(( uVar4 & 7 ) == 1) ) < local_44) {
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0x37f, "pkey_pss_init");
            ERR_set_error(4, 0x96, 0);
            uVar5 = 0;
            goto LAB_00100f14;
         }

         *(ulong*)( lVar1 + 0x30 ) = CONCAT44(local_44, local_44);
         *(undefined8*)( lVar1 + 0x20 ) = local_40;
         *(undefined8*)( lVar1 + 0x28 ) = local_38;
      }

      uVar5 = 1;
   }
 else {
      LAB_00100e71:uVar5 = 0;
   }

   LAB_00100f14:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int pkey_rsa_keygen(long param_1, EVP_PKEY *param_2) {
   undefined4 *puVar1;
   int iVar2;
   RSA *r;
   long lVar3;
   BN_MONT_CTX *pBVar4;
   BIGNUM *a;
   int iVar5;
   int type;
   puVar1 = *(undefined4**)( param_1 + 0x98 );
   if (*(long*)( puVar1 + 2 ) == 0) {
      a = BN_new();
      *(BIGNUM**)( puVar1 + 2 ) = a;
      if (a == (BIGNUM*)0x0) {
         return 0;
      }

      iVar2 = BN_set_word(a, 0x10001);
      if (iVar2 == 0) {
         return 0;
      }

   }

   r = RSA_new();
   if (r == (RSA*)0x0) {
      return 0;
   }

   if (*(long*)( param_1 + 0x60 ) == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = BN_GENCB_new();
      if (lVar3 == 0) goto LAB_001010f8;
      evp_pkey_set_cb_translate(lVar3, param_1);
   }

   iVar2 = RSA_generate_multi_prime_key(r, *puVar1, puVar1[4], *(undefined8*)( puVar1 + 2 ), lVar3);
   BN_GENCB_free(lVar3);
   if (iVar2 < 1) {
      RSA_free(r);
      return iVar2;
   }

   lVar3 = *(long*)( param_1 + 0x98 );
   type = **(int**)( param_1 + 0x78 );
   if (type == 0x390) {
      iVar5 = *(int*)( lVar3 + 0x30 );
      if (( *(long*)( lVar3 + 0x20 ) == 0 ) && ( *(long*)( lVar3 + 0x28 ) == 0 )) {
         if (iVar5 == -2) goto LAB_00101085;
      }
 else if (iVar5 == -2) {
         iVar5 = 0;
      }

      pBVar4 = (BN_MONT_CTX*)ossl_rsa_pss_params_create(*(long*)( lVar3 + 0x20 ), *(long*)( lVar3 + 0x28 ), iVar5);
      r->_method_mod_p = pBVar4;
      if (pBVar4 == (BN_MONT_CTX*)0x0) {
         LAB_001010f8:RSA_free(r);
         return 0;
      }

      type = **(int**)( param_1 + 0x78 );
   }

   LAB_00101085:EVP_PKEY_assign(param_2, type, r);
   return iVar2;
}
undefined8 pkey_rsa_copy(long param_1, long param_2) {
   undefined4 uVar1;
   int iVar2;
   undefined4 *puVar3;
   undefined8 uVar4;
   undefined4 *puVar5;
   BIGNUM *pBVar6;
   long lVar7;
   undefined8 uVar8;
   puVar5 = (undefined4*)CRYPTO_zalloc(0x58, "crypto/rsa/rsa_pmeth.c", 0x40);
   if (puVar5 == (undefined4*)0x0) {
      LAB_00101230:uVar8 = 0;
   }
 else {
      *puVar5 = 0x800;
      puVar5[4] = 2;
      iVar2 = **(int**)( param_1 + 0x78 );
      *(undefined4**)( param_1 + 0x98 ) = puVar5;
      *(undefined4*)( param_1 + 0x70 ) = 2;
      *(undefined8*)( puVar5 + 0xc ) = 0xfffffffffffffffe;
      puVar5[0x14] = 1;
      puVar5[7] = ( uint )(iVar2 == 0x390) * 5 + 1;
      *(undefined4**)( param_1 + 0x68 ) = puVar5 + 5;
      puVar3 = *(undefined4**)( param_2 + 0x98 );
      pBVar6 = *(BIGNUM**)( puVar3 + 2 );
      *puVar5 = *puVar3;
      if (pBVar6 != (BIGNUM*)0x0) {
         pBVar6 = BN_dup(pBVar6);
         *(BIGNUM**)( puVar5 + 2 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) goto LAB_00101230;
      }

      lVar7 = *(long*)( puVar3 + 0x10 );
      puVar5[7] = puVar3[7];
      uVar8 = *(undefined8*)( puVar3 + 8 );
      uVar4 = *(undefined8*)( puVar3 + 10 );
      puVar5[0xc] = puVar3[0xc];
      uVar1 = puVar3[0x14];
      *(undefined8*)( puVar5 + 8 ) = uVar8;
      *(undefined8*)( puVar5 + 10 ) = uVar4;
      puVar5[0x14] = uVar1;
      if (lVar7 != 0) {
         CRYPTO_free(*(void**)( puVar5 + 0x10 ));
         lVar7 = CRYPTO_memdup(*(undefined8*)( puVar3 + 0x10 ), *(undefined8*)( puVar3 + 0x12 ), "crypto/rsa/rsa_pmeth.c", 0x6a);
         *(long*)( puVar5 + 0x10 ) = lVar7;
         if (lVar7 == 0) goto LAB_00101230;
         *(undefined8*)( puVar5 + 0x12 ) = *(undefined8*)( puVar3 + 0x12 );
      }

      uVar8 = 1;
   }

   return uVar8;
}
int pkey_rsa_encrypt(long param_1, uchar *param_2, long *param_3, uchar *param_4, int param_5) {
   long lVar1;
   int iVar2;
   int iVar3;
   RSA *rsa;
   RSA *rsa_00;
   void *pvVar4;
   lVar1 = *(long*)( param_1 + 0x98 );
   rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
   if (*(int*)( lVar1 + 0x1c ) == 4) {
      iVar2 = RSA_size(rsa);
      pvVar4 = *(void**)( lVar1 + 0x38 );
      if (pvVar4 == (void*)0x0) {
         rsa_00 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
         iVar3 = RSA_size(rsa_00);
         pvVar4 = CRYPTO_malloc(iVar3, "crypto/rsa/rsa_pmeth.c", 0x77);
         *(void**)( lVar1 + 0x38 ) = pvVar4;
         if (pvVar4 != (void*)0x0) goto LAB_001012cd;
      }
 else {
         LAB_001012cd:iVar3 = RSA_padding_add_PKCS1_OAEP_mgf1(pvVar4, iVar2, param_4, param_5, *(undefined8*)( lVar1 + 0x40 ), *(undefined8*)( lVar1 + 0x48 ), *(undefined8*)( lVar1 + 0x20 ), *(undefined8*)( lVar1 + 0x28 ));
         if (iVar3 != 0) {
            iVar2 = RSA_public_encrypt(iVar2, *(uchar**)( lVar1 + 0x38 ), param_2, rsa, 3);
            goto LAB_00101293;
         }

      }

      iVar2 = -1;
   }
 else {
      iVar2 = RSA_public_encrypt(param_5, param_4, param_2, rsa, *(int*)( lVar1 + 0x1c ));
      LAB_00101293:if (-1 < iVar2) {
         *param_3 = (long)iVar2;
         iVar2 = 1;
      }

   }

   return iVar2;
}
uint pkey_rsa_decrypt(long param_1, uchar *param_2, ulong *param_3, uchar *param_4, int param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   RSA *rsa;
   RSA *rsa_00;
   uchar *to;
   ulong uVar4;
   lVar1 = *(long*)( param_1 + 0x98 );
   rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
   iVar3 = *(int*)( lVar1 + 0x1c );
   if (iVar3 == 4) {
      to = *(uchar**)( lVar1 + 0x38 );
      if (to == (uchar*)0x0) {
         rsa_00 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
         iVar3 = RSA_size(rsa_00);
         to = (uchar*)CRYPTO_malloc(iVar3, "crypto/rsa/rsa_pmeth.c", 0x77);
         *(uchar**)( lVar1 + 0x38 ) = to;
         if (to == (uchar*)0x0) {
            return 0xffffffff;
         }

      }

      uVar2 = RSA_private_decrypt(param_5, param_4, to, rsa, 3);
      if ((int)uVar2 < 1) {
         return uVar2;
      }

      uVar2 = RSA_padding_check_PKCS1_OAEP_mgf1(param_2, uVar2, *(undefined8*)( lVar1 + 0x38 ), uVar2, uVar2, *(undefined8*)( lVar1 + 0x40 ), *(undefined8*)( lVar1 + 0x48 ), *(undefined8*)( lVar1 + 0x20 ), *(undefined8*)( lVar1 + 0x28 ));
   }
 else {
      if (( iVar3 == 1 ) && ( *(int*)( lVar1 + 0x50 ) == 0 )) {
         iVar3 = 8;
      }

      uVar2 = RSA_private_decrypt(param_5, param_4, param_2, rsa, iVar3);
   }

   uVar4 = (long)(int)uVar2 >> 0x3f;
   *param_3 = uVar4 & *param_3 | (long)(int)uVar2 & ~uVar4;
   return uVar2 & (int)uVar2 >> 0x1f | ~((int)uVar2 >> 0x1f) & 1U;
}
uint pkey_rsa_sign(long param_1, uchar *param_2, long *param_3, uchar *param_4, size_t param_5) {
   long lVar1;
   uint m_length;
   int iVar2;
   uint uVar3;
   RSA *rsa;
   RSA *pRVar4;
   uchar *puVar5;
   void *__dest;
   undefined8 uVar6;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
   if (*(long*)( lVar1 + 0x20 ) == 0) {
      local_44 = RSA_private_encrypt((int)param_5, param_4, param_2, rsa, *(int*)( lVar1 + 0x1c ));
      LAB_0010158e:uVar3 = local_44;
      if (-1 < (int)local_44) {
         *param_3 = (long)(int)local_44;
         uVar3 = 1;
      }

      goto LAB_0010159c;
   }

   m_length = EVP_MD_get_size();
   if ((int)m_length < 1) {
      ERR_new();
      uVar6 = 0x98;
      LAB_00101781:ERR_set_debug("crypto/rsa/rsa_pmeth.c", uVar6, "pkey_rsa_sign");
      ERR_set_error(4, 0x8f, 0);
   }
 else {
      if ((long)(int)m_length != param_5) {
         ERR_new();
         uVar6 = 0x9d;
         goto LAB_00101781;
      }

      iVar2 = EVP_MD_get_type();
      if (iVar2 == 0x5f) {
         uVar3 = 0xffffffff;
         if (*(int*)( lVar1 + 0x1c ) != 1) goto LAB_0010159c;
         uVar3 = RSA_sign_ASN1_OCTET_STRING(0, param_4, m_length, param_2, &local_44, rsa);
         joined_r0x001015e5:if ((int)uVar3 < 1) goto LAB_0010159c;
         goto LAB_0010158e;
      }

      iVar2 = *(int*)( lVar1 + 0x1c );
      if (iVar2 == 5) {
         iVar2 = RSA_size(rsa);
         if ((long)(int)m_length + 1U <= (ulong)(long)iVar2) {
            __dest = *(void**)( lVar1 + 0x38 );
            if (__dest == (void*)0x0) {
               pRVar4 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
               iVar2 = RSA_size(pRVar4);
               __dest = CRYPTO_malloc(iVar2, "crypto/rsa/rsa_pmeth.c", 0x77);
               *(void**)( lVar1 + 0x38 ) = __dest;
               if (__dest == (void*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0xb0, "pkey_rsa_sign");
                  ERR_set_error(4, 0x80004, 0);
                  goto LAB_00101760;
               }

            }

            memcpy(__dest, param_4, param_5);
            iVar2 = EVP_MD_get_type(*(undefined8*)( lVar1 + 0x20 ));
            iVar2 = RSA_X931_hash_id(iVar2);
            *(char*)( *(long*)( lVar1 + 0x38 ) + param_5 ) = (char)iVar2;
            local_44 = RSA_private_encrypt((int)param_5 + 1, *(uchar**)( lVar1 + 0x38 ), param_2, rsa, 5);
            goto LAB_0010158e;
         }

         ERR_new();
         ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0xac, "pkey_rsa_sign");
         ERR_set_error(4, 0x78, 0);
      }
 else {
         if (iVar2 == 1) {
            iVar2 = EVP_MD_get_type(*(undefined8*)( lVar1 + 0x20 ));
            uVar3 = RSA_sign(iVar2, param_4, m_length, param_2, &local_44, rsa);
            goto joined_r0x001015e5;
         }

         if (iVar2 == 6) {
            puVar5 = *(uchar**)( lVar1 + 0x38 );
            if (puVar5 == (uchar*)0x0) {
               pRVar4 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
               iVar2 = RSA_size(pRVar4);
               puVar5 = (uchar*)CRYPTO_malloc(iVar2, "crypto/rsa/rsa_pmeth.c", 0x77);
               *(uchar**)( lVar1 + 0x38 ) = puVar5;
               if (puVar5 == (uchar*)0x0) goto LAB_00101760;
            }

            iVar2 = RSA_padding_add_PKCS1_PSS_mgf1(rsa, puVar5, param_4, *(EVP_MD**)( lVar1 + 0x20 ), *(EVP_MD**)( lVar1 + 0x28 ), *(int*)( lVar1 + 0x30 ));
            if (iVar2 != 0) {
               puVar5 = *(uchar**)( lVar1 + 0x38 );
               iVar2 = RSA_size(rsa);
               local_44 = RSA_private_encrypt(iVar2, puVar5, param_2, rsa, 3);
               goto LAB_0010158e;
            }

         }

      }

   }

   LAB_00101760:uVar3 = 0xffffffff;
   LAB_0010159c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int pkey_rsa_verifyrecover(long param_1, uchar *param_2, size_t *param_3, uchar *param_4, undefined8 param_5) {
   byte bVar1;
   long lVar2;
   undefined4 uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   RSA *rsa;
   RSA *rsa_00;
   uchar *to;
   size_t __n;
   long in_FS_OFFSET;
   int local_48[2];
   long local_40;
   lVar2 = *(long*)( param_1 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
   if (*(long*)( lVar2 + 0x20 ) == 0) {
      local_48[0] = RSA_public_decrypt((int)param_5, param_4, param_2, rsa, *(int*)( lVar2 + 0x1c ));
      joined_r0x001018d7:if (local_48[0] < 0) goto LAB_0010189c;
      __n = (size_t)local_48[0];
      LAB_0010188f:*param_3 = __n;
      local_48[0] = 1;
   }
 else {
      if (*(int*)( lVar2 + 0x1c ) == 5) {
         to = *(uchar**)( lVar2 + 0x38 );
         if (to == (uchar*)0x0) {
            rsa_00 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
            iVar4 = RSA_size(rsa_00);
            to = (uchar*)CRYPTO_malloc(iVar4, "crypto/rsa/rsa_pmeth.c", 0x77);
            *(uchar**)( lVar2 + 0x38 ) = to;
            if (to == (uchar*)0x0) goto LAB_001019e0;
         }

         iVar4 = RSA_public_decrypt((int)param_5, param_4, to, rsa, 5);
         if (0 < iVar4) {
            __n = (size_t)( iVar4 + -1 );
            bVar1 = *(byte*)( *(long*)( lVar2 + 0x38 ) + __n );
            iVar5 = EVP_MD_get_type(*(undefined8*)( lVar2 + 0x20 ));
            uVar6 = RSA_X931_hash_id(iVar5);
            if (bVar1 == uVar6) {
               iVar5 = EVP_MD_get_size(*(undefined8*)( lVar2 + 0x20 ));
               if (iVar5 != iVar4 + -1) {
                  ERR_new();
                  ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0xef, "pkey_rsa_verifyrecover");
                  ERR_set_error(4, 0x8f, 0);
                  local_48[0] = 0;
                  goto LAB_0010189c;
               }

               if (param_2 != (uchar*)0x0) {
                  memcpy(param_2, *(void**)( lVar2 + 0x38 ), __n);
               }

               goto LAB_0010188f;
            }

            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_pmeth.c", 0xeb, "pkey_rsa_verifyrecover");
            ERR_set_error(4, 100, 0);
         }

      }
 else {
         if (*(int*)( lVar2 + 0x1c ) != 1) {
            LAB_001019e0:local_48[0] = -1;
            goto LAB_0010189c;
         }

         uVar3 = EVP_MD_get_type();
         iVar4 = ossl_rsa_verify(uVar3, 0, 0, param_2, local_48, param_4, param_5, rsa);
         if (0 < iVar4) goto joined_r0x001018d7;
      }

      local_48[0] = 0;
   }

   LAB_0010189c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_48[0];
}
uint pkey_rsa_verify(long param_1, uchar *param_2, undefined8 param_3, uchar *param_4, size_t param_5) {
   long lVar1;
   int iVar2;
   uint uVar3;
   RSA *rsa;
   RSA *pRVar4;
   uchar *puVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   size_t local_48;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   rsa = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
   uVar3 = (uint)param_3;
   if (*(long*)( lVar1 + 0x20 ) == 0) {
      puVar5 = *(uchar**)( lVar1 + 0x38 );
      if (puVar5 == (uchar*)0x0) {
         pRVar4 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
         iVar2 = RSA_size(pRVar4);
         puVar5 = (uchar*)CRYPTO_malloc(iVar2, "crypto/rsa/rsa_pmeth.c", 0x77);
         *(uchar**)( lVar1 + 0x38 ) = puVar5;
         if (puVar5 == (uchar*)0x0) goto LAB_00101c20;
      }

      iVar2 = RSA_public_decrypt(uVar3, param_2, puVar5, rsa, *(int*)( lVar1 + 0x1c ));
      local_48 = (size_t)iVar2;
      if (local_48 != 0) {
         LAB_00101b7e:if (local_48 == param_5) {
            iVar2 = memcmp(param_4, *(void**)( lVar1 + 0x38 ), local_48);
            uVar3 = ( uint )(iVar2 == 0);
            goto LAB_00101b02;
         }

      }

      LAB_00101b50:uVar3 = 0;
   }
 else {
      if (*(int*)( lVar1 + 0x1c ) == 1) {
         iVar2 = EVP_MD_get_type();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar3 = RSA_verify(iVar2, param_4, (uint)param_5, param_2, uVar3, rsa);
            return uVar3;
         }

         goto LAB_00101cb8;
      }

      iVar2 = EVP_MD_get_size();
      if (iVar2 < 1) {
         ERR_new();
         uVar6 = 0x11c;
         LAB_00101c81:ERR_set_debug("crypto/rsa/rsa_pmeth.c", uVar6, "pkey_rsa_verify");
         ERR_set_error(4, 0x8f, 0);
      }
 else {
         if ((long)iVar2 != param_5) {
            ERR_new();
            uVar6 = 0x120;
            goto LAB_00101c81;
         }

         if (*(int*)( lVar1 + 0x1c ) == 5) {
            iVar2 = pkey_rsa_verifyrecover(param_1, 0, &local_48, param_2, param_3);
            if (0 < iVar2) goto LAB_00101b7e;
            goto LAB_00101b50;
         }

         if (*(int*)( lVar1 + 0x1c ) == 6) {
            puVar5 = *(uchar**)( lVar1 + 0x38 );
            if (puVar5 == (uchar*)0x0) {
               pRVar4 = (RSA*)EVP_PKEY_get0_RSA(*(undefined8*)( param_1 + 0x88 ));
               iVar2 = RSA_size(pRVar4);
               puVar5 = (uchar*)CRYPTO_malloc(iVar2, "crypto/rsa/rsa_pmeth.c", 0x77);
               *(uchar**)( lVar1 + 0x38 ) = puVar5;
               if (puVar5 == (uchar*)0x0) goto LAB_00101c20;
            }

            iVar2 = RSA_public_decrypt(uVar3, param_2, puVar5, rsa, 3);
            if (0 < iVar2) {
               iVar2 = RSA_verify_PKCS1_PSS_mgf1(rsa, param_4, *(EVP_MD**)( lVar1 + 0x20 ), *(EVP_MD**)( lVar1 + 0x28 ), *(uchar**)( lVar1 + 0x38 ), *(int*)( lVar1 + 0x30 ));
               uVar3 = ( uint )(0 < iVar2);
               goto LAB_00101b02;
            }

            goto LAB_00101b50;
         }

      }

      LAB_00101c20:uVar3 = 0xffffffff;
   }

   LAB_00101b02:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_00101cb8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined1 *ossl_rsa_pkey_method(void) {
   return rsa_pkey_meth;
}
undefined1 *ossl_rsa_pss_pkey_method(void) {
   return rsa_pss_pkey_meth;
}

