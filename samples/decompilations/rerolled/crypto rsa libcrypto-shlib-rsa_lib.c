RSA_METHOD *RSA_get_method(RSA *rsa) {
   return (RSA_METHOD*)rsa->engine;
}int RSA_set_method(RSA *rsa, RSA_METHOD *meth) {
   _func_1624 *p_Var1;
   if (*(code**)( rsa->engine + 0x40 ) != (code*)0x0) {
      ( **(code**)( rsa->engine + 0x40 ) )();
   }
   ENGINE_finish((ENGINE*)rsa->n);
   p_Var1 = meth->init;
   rsa->engine = (ENGINE*)meth;
   rsa->n = (BIGNUM*)0x0;
   if (p_Var1 != (_func_1624*)0x0) {
      ( *p_Var1 )(rsa);
   }
   return 1;
}void RSA_free(RSA *r) {
   BN_BLINDING **ppBVar1;
   int iVar2;
   code *pcVar3;
   if (r == (RSA*)0x0) {
      return;
   }
   LOCK();
   ppBVar1 = &r->mt_blinding;
   iVar2 = *(int*)ppBVar1;
   *(int*)ppBVar1 = *(int*)ppBVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   if (( r->engine != (ENGINE*)0x0 ) && ( pcVar3 = *(code**)( r->engine + 0x40 ) ),pcVar3 != (code*)0x0) {
      ( *pcVar3 )(r);
   }
   ENGINE_finish((ENGINE*)r->n);
   CRYPTO_free_ex_data(9, r, (CRYPTO_EX_DATA*)&r->bignum_data);
   CRYPTO_THREAD_lock_free(r[1].e);
   BN_free(r->e);
   BN_free(r->d);
   BN_clear_free(r->p);
   BN_clear_free(r->q);
   BN_clear_free(r->dmp1);
   BN_clear_free(r->dmq1);
   BN_clear_free(r->iqmp);
   BN_clear_free((BIGNUM*)(r->ex_data).sk);
   RSA_PSS_PARAMS_free((RSA_PSS_PARAMS*)r->_method_mod_p);
   OPENSSL_sk_pop_free(r->_method_mod_q, ossl_rsa_multip_info_free);
   BN_BLINDING_free((BN_BLINDING*)r[1].engine);
   BN_BLINDING_free((BN_BLINDING*)r[1].n);
   CRYPTO_free(r);
   return;
}RSA *rsa_new_intern(BIGNUM *param_1, long param_2) {
   int iVar1;
   RSA *r;
   BIGNUM *pBVar2;
   RSA_METHOD *pRVar3;
   undefined8 uVar4;
   r = (RSA*)CRYPTO_zalloc(0xe0, "crypto/rsa/rsa_lib.c", 0x4d);
   if (r == (RSA*)0x0) {
      return (RSA*)0x0;
   }
   pBVar2 = (BIGNUM*)CRYPTO_THREAD_lock_new();
   r[1].e = pBVar2;
   if (pBVar2 == (BIGNUM*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x54, "rsa_new_intern");
      ERR_set_error(4, 0x8000f, 0);
      CRYPTO_free(r);
      return (RSA*)0x0;
   }
   LOCK();
   *(undefined4*)&r->mt_blinding = 1;
   UNLOCK();
   r->version = param_2;
   pRVar3 = RSA_get_default_method();
   r->engine = (ENGINE*)pRVar3;
   *(uint*)( (long)&r->mt_blinding + 4 ) = pRVar3->flags & 0xfffffbff;
   if (param_1 == (BIGNUM*)0x0) {
      param_1 = (BIGNUM*)ENGINE_get_default_RSA();
      r->n = param_1;
      if (param_1 != (BIGNUM*)0x0) goto LAB_001001f7;
      pRVar3 = (RSA_METHOD*)r->engine;
      LAB_0010020c:*(uint*)( (long)&r->mt_blinding + 4 ) = pRVar3->flags & 0xfffffbff;
      iVar1 = CRYPTO_new_ex_data(9, r, (CRYPTO_EX_DATA*)&r->bignum_data);
      if (iVar1 != 0) {
         if (*(code**)( r->engine + 0x38 ) == (code*)0x0) {
            return r;
         }
         iVar1 = ( **(code**)( r->engine + 0x38 ) )(r);
         if (iVar1 != 0) {
            return r;
         }
         ERR_new();
         ERR_set_debug("crypto/rsa/rsa_lib.c", 0x7d, "rsa_new_intern");
         ERR_set_error(4, 0xc0105, 0);
      }
   } else {
      iVar1 = ENGINE_init((ENGINE*)param_1);
      if (iVar1 == 0) {
         ERR_new();
         uVar4 = 0x65;
      } else {
         r->n = param_1;
         LAB_001001f7:pRVar3 = ENGINE_get_RSA((ENGINE*)param_1);
         r->engine = (ENGINE*)pRVar3;
         if (pRVar3 != (RSA_METHOD*)0x0) goto LAB_0010020c;
         ERR_new();
         uVar4 = 0x6f;
      }
      ERR_set_debug("crypto/rsa/rsa_lib.c", uVar4, "rsa_new_intern");
      ERR_set_error(4, 0x80026, 0);
   }
   RSA_free(r);
   return (RSA*)0x0;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */RSA *RSA_new(void) {
   RSA *pRVar1;
   pRVar1 = (RSA*)rsa_new_intern(0, 0);
   return pRVar1;
}RSA *RSA_new_method(ENGINE *engine) {
   RSA *pRVar1;
   pRVar1 = (RSA*)rsa_new_intern(engine, 0);
   return pRVar1;
}void ossl_rsa_new_with_ctx(undefined8 param_1) {
   rsa_new_intern(0, param_1);
   return;
}int RSA_up_ref(RSA *r) {
   BN_BLINDING **ppBVar1;
   int iVar2;
   LOCK();
   ppBVar1 = &r->mt_blinding;
   iVar2 = *(int*)ppBVar1;
   *(int*)ppBVar1 = *(int*)ppBVar1 + 1;
   UNLOCK();
   return (int)( 1 < iVar2 + 1 );
}undefined8 ossl_rsa_get0_libctx(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}void ossl_rsa_set0_libctx(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 8 ) = param_2;
   return;
}int RSA_set_ex_data(RSA *r, int idx, void *arg) {
   int iVar1;
   iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA*)&r->bignum_data, idx, arg);
   return iVar1;
}void *RSA_get_ex_data(RSA *r, int idx) {
   void *pvVar1;
   pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA*)&r->bignum_data, idx);
   return pvVar1;
}uint ossl_ifc_ffc_compute_security_bits(int param_1) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   if (param_1 == 0x1800) {
      return 0xb0;
   }
   if (param_1 < 0x1801) {
      uVar6 = 0x80;
      if (( ( ( param_1 == 0xc00 ) || ( uVar6 = 0x98 ),param_1 == 0x1000 ) ) || ( uVar6 = param_1 == 0x800 )) {
         return uVar6;
      }
      uVar4 = (long)param_1 * 0x2c5c8;
      uVar6 = 0xc0;
   } else {
      if (param_1 == 0x2000) {
         return 200;
      }
      if (param_1 == 0x3c00) {
         return 0x100;
      }
      if (param_1 == 0x1e00) {
         return 0xc0;
      }
      if (0xa7e78 < param_1) {
         return 0x4b0;
      }
      uVar4 = (long)param_1 * 0x2c5c8;
      if (param_1 < 0x1e01) {
         uVar6 = 0xc0;
      } else {
         uVar6 = 0x100;
         if (0x3c00 < param_1) {
            uVar6 = 0x4b0;
         }
      }
   }
   uVar8 = 0;
   uVar1 = uVar4;
   do {
      uVar1 = uVar1 >> 1;
      uVar8 = uVar8 + 0x40000;
   } while ( 0x7ffff < uVar1 );
   iVar5 = 0x12;
   uVar7 = 0x20000;
   do {
      uVar2 = uVar1 * uVar1;
      uVar1 = uVar2 >> 0x12;
      if (0x7ffff < uVar1) {
         uVar8 = uVar8 + uVar7;
         uVar1 = uVar2 >> 0x13;
      }
      uVar7 = uVar7 >> 1;
      iVar5 = iVar5 + -1;
   } while ( iVar5 != 0 );
   lVar3 = 0;
   uVar1 = ( (ulong)uVar8 << 0x12 ) / 0x5c551;
   iVar5 = 0x3f;
   uVar4 = ( uVar4 * uVar1 >> 0x12 ) * uVar1 >> 0x12;
   do {
      lVar3 = lVar3 * 2;
      uVar1 = ( lVar3 + 1 ) * lVar3 * 3 + 1;
      if (uVar1 <= uVar4 >> ( (byte)iVar5 & 0x3f )) {
         uVar4 = uVar4 - ( uVar1 << ( (byte)iVar5 & 0x3f ) );
         lVar3 = lVar3 + 1;
      }
      iVar5 = iVar5 + -3;
   } while ( iVar5 != -3 );
   uVar8 = (int)( ( ( ( ulong )(lVar3 * 0x7b126000) >> 0x12 ) - 0x12c28f ) / 0x2c5c8 ) + 4U & 0xfffffff8;
   if ((ushort)uVar6 < (ushort)uVar8) {
      uVar8 = uVar6;
   }
   return uVar8;
}undefined2 RSA_security_bits(long param_1) {
   undefined2 uVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   iVar2 = BN_num_bits(*(BIGNUM**)( param_1 + 0x28 ));
   if (*(int*)( param_1 + 0x10 ) != 1) {
      LAB_001005ce:uVar1 = ossl_ifc_ffc_compute_security_bits(iVar2);
      return uVar1;
   }
   iVar3 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x88 ));
   if (0 < iVar3) {
      iVar4 = ossl_rsa_multip_cap(iVar2);
      if (iVar3 + 1 < iVar4) goto LAB_001005ce;
   }
   return 0;
}undefined8 RSA_set0_key(long param_1, BIGNUM *param_2, long param_3, long param_4) {
   BIGNUM *a;
   a = *(BIGNUM**)( param_1 + 0x28 );
   if (a == (BIGNUM*)0x0) {
      if (param_2 == (BIGNUM*)0x0) {
         return 0;
      }
      if (*(long*)( param_1 + 0x30 ) != 0) {
         LAB_0010069c:BN_free(a);
         *(BIGNUM**)( param_1 + 0x28 ) = param_2;
         goto joined_r0x001006a8;
      }
      if (param_3 == 0) {
         return 0;
      }
      LAB_001006c5:BN_free(a);
      *(BIGNUM**)( param_1 + 0x28 ) = param_2;
      param_2 = *(BIGNUM**)( param_1 + 0x30 );
   } else if (*(long*)( param_1 + 0x30 ) == 0) {
      if (param_3 == 0) {
         return 0;
      }
      if (param_2 != (BIGNUM*)0x0) goto LAB_001006c5;
   } else {
      if (param_2 != (BIGNUM*)0x0) goto LAB_0010069c;
      joined_r0x001006a8:if (param_3 == 0) goto LAB_00100648;
      param_2 = *(BIGNUM**)( param_1 + 0x30 );
   }
   BN_free(param_2);
   *(long*)( param_1 + 0x30 ) = param_3;
   LAB_00100648:if (param_4 != 0) {
      BN_clear_free(*(BIGNUM**)( param_1 + 0x38 ));
      *(long*)( param_1 + 0x38 ) = param_4;
      BN_set_flags(param_4, 4);
   }
   *(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
   return 1;
}undefined8 RSA_set0_factors(long param_1, BIGNUM *param_2, long param_3) {
   BIGNUM *a;
   a = *(BIGNUM**)( param_1 + 0x40 );
   if (a == (BIGNUM*)0x0) {
      if (param_2 == (BIGNUM*)0x0) {
         return 0;
      }
      if (*(long*)( param_1 + 0x48 ) != 0) {
         LAB_0010074c:BN_clear_free(a);
         *(BIGNUM**)( param_1 + 0x40 ) = param_2;
         BN_set_flags(param_2, 4);
         goto joined_r0x00100765;
      }
      if (param_3 == 0) {
         return 0;
      }
      LAB_00100795:BN_clear_free(a);
      *(BIGNUM**)( param_1 + 0x40 ) = param_2;
      BN_set_flags(param_2, 4);
      LAB_00100767:param_2 = *(BIGNUM**)( param_1 + 0x48 );
   } else {
      if (*(long*)( param_1 + 0x48 ) != 0) {
         if (param_2 != (BIGNUM*)0x0) goto LAB_0010074c;
         joined_r0x00100765:if (param_3 == 0) goto LAB_0010071b;
         goto LAB_00100767;
      }
      if (param_3 == 0) {
         return 0;
      }
      if (param_2 != (BIGNUM*)0x0) goto LAB_00100795;
   }
   BN_clear_free(param_2);
   *(long*)( param_1 + 0x48 ) = param_3;
   BN_set_flags(param_3, 4);
   LAB_0010071b:*(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
   return 1;
}undefined8 RSA_set0_crt_params(long param_1, BIGNUM *param_2, BIGNUM *param_3, long param_4) {
   BIGNUM *a;
   BIGNUM *a_00;
   a = *(BIGNUM**)( param_1 + 0x50 );
   if (a == (BIGNUM*)0x0) {
      if (param_2 == (BIGNUM*)0x0) {
         return 0;
      }
      if (*(long*)( param_1 + 0x58 ) == 0) {
         if (param_3 == (BIGNUM*)0x0) {
            return 0;
         }
         if (*(long*)( param_1 + 0x60 ) == 0) goto LAB_001008ec;
      } else if (( *(long*)( param_1 + 0x60 ) == 0 ) && ( param_4 == 0 )) {
         return 0;
      }
      goto LAB_001008c0;
   }
   a_00 = *(BIGNUM**)( param_1 + 0x58 );
   if (a_00 == (BIGNUM*)0x0) {
      if (param_3 == (BIGNUM*)0x0) {
         return 0;
      }
      if (*(long*)( param_1 + 0x60 ) != 0) {
         if (param_2 != (BIGNUM*)0x0) {
            LAB_00100841:BN_clear_free(a);
            *(BIGNUM**)( param_1 + 0x50 ) = param_2;
            BN_set_flags(param_2, 4);
            goto LAB_00100860;
         }
         LAB_00100864:BN_clear_free(param_2);
         *(BIGNUM**)( param_1 + 0x58 ) = param_3;
         BN_set_flags(param_3, 4);
         goto joined_r0x00100880;
      }
      LAB_001008ec:if (param_4 == 0) {
         return 0;
      }
      if (param_2 != (BIGNUM*)0x0) goto LAB_00100841;
      a_00 = (BIGNUM*)0x0;
      LAB_001008fc:BN_clear_free(a_00);
      *(BIGNUM**)( param_1 + 0x58 ) = param_3;
      BN_set_flags(param_3, 4);
      LAB_00100882:param_3 = *(BIGNUM**)( param_1 + 0x60 );
   } else {
      if (*(long*)( param_1 + 0x60 ) != 0) {
         if (param_2 != (BIGNUM*)0x0) goto LAB_001008c0;
         LAB_00100804:if (param_3 != (BIGNUM*)0x0) {
            LAB_00100860:param_2 = *(BIGNUM**)( param_1 + 0x58 );
            goto LAB_00100864;
         }
         joined_r0x00100880:if (param_4 == 0) goto LAB_0010080e;
         goto LAB_00100882;
      }
      if (param_4 == 0) {
         return 0;
      }
      if (param_2 != (BIGNUM*)0x0) {
         LAB_001008c0:BN_clear_free(a);
         *(BIGNUM**)( param_1 + 0x50 ) = param_2;
         BN_set_flags(param_2, 4);
         goto LAB_00100804;
      }
      if (param_3 != (BIGNUM*)0x0) goto LAB_001008fc;
   }
   BN_clear_free(param_3);
   *(long*)( param_1 + 0x60 ) = param_4;
   BN_set_flags(param_4, 4);
   LAB_0010080e:*(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
   return 1;
}undefined8 RSA_set0_multi_prime_params(long param_1, long param_2, long param_3, long param_4, int param_5) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   undefined8 *puVar6;
   long lVar7;
   if (( ( ( param_2 != 0 ) && ( param_3 != 0 ) ) && ( param_4 != 0 ) ) && ( ( param_5 != 0 && ( lVar5 = OPENSSL_sk_new_reserve(0, param_5) ),lVar5 != 0 ) )) {
      lVar2 = *(long*)( param_1 + 0x88 );
      if (0 < param_5) {
         lVar7 = 0;
         do {
            puVar6 = (undefined8*)ossl_rsa_multip_info_new();
            if (puVar6 == (undefined8*)0x0) goto LAB_00100a81;
            if (( ( *(long*)( param_2 + lVar7 ) == 0 ) || ( *(long*)( param_3 + lVar7 ) == 0 ) ) || ( *(long*)( param_4 + lVar7 ) == 0 )) {
               ossl_rsa_multip_info_free(puVar6);
               OPENSSL_sk_pop_free(lVar5, &ossl_rsa_multip_info_free_ex);
               return 0;
            }
            BN_clear_free((BIGNUM*)*puVar6);
            BN_clear_free((BIGNUM*)puVar6[1]);
            BN_clear_free((BIGNUM*)puVar6[2]);
            uVar3 = *(undefined8*)( param_2 + lVar7 );
            *puVar6 = uVar3;
            puVar6[1] = *(undefined8*)( param_3 + lVar7 );
            puVar1 = (undefined8*)( param_4 + lVar7 );
            lVar7 = lVar7 + 8;
            puVar6[2] = *puVar1;
            BN_set_flags(uVar3, 4);
            BN_set_flags(puVar6[1], 4);
            BN_set_flags(puVar6[2], 4);
            OPENSSL_sk_push(lVar5, puVar6);
         } while ( (long)param_5 * 8 != lVar7 );
      }
      *(long*)( param_1 + 0x88 ) = lVar5;
      iVar4 = ossl_rsa_multip_calc_product(param_1);
      if (iVar4 != 0) {
         if (lVar2 != 0) {
            OPENSSL_sk_pop_free(lVar2, ossl_rsa_multip_info_free);
         }
         *(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
         *(undefined4*)( param_1 + 0x10 ) = 1;
         return 1;
      }
      *(long*)( param_1 + 0x88 ) = lVar2;
      LAB_00100a81:OPENSSL_sk_pop_free(lVar5, &ossl_rsa_multip_info_free_ex);
   }
   return 0;
}void RSA_get0_key(long param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x28 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x30 );
   }
   if (param_4 != (undefined8*)0x0) {
      *param_4 = *(undefined8*)( param_1 + 0x38 );
   }
   return;
}void RSA_get0_factors(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x40 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x48 );
   }
   return;
}int RSA_get_multi_prime_extra_count(long param_1) {
   int iVar1;
   iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x88 ));
   if (iVar1 < 0) {
      iVar1 = 0;
   }
   return iVar1;
}undefined8 RSA_get0_multi_prime_factors(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   ulong uVar4;
   uVar2 = RSA_get_multi_prime_extra_count();
   iVar1 = (int)uVar2;
   if (iVar1 != 0) {
      uVar4 = 0;
      if (0 < iVar1) {
         do {
            puVar3 = (undefined8*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), uVar4 & 0xffffffff);
            *(undefined8*)( param_2 + uVar4 * 8 ) = *puVar3;
            uVar4 = uVar4 + 1;
         } while ( (long)iVar1 != uVar4 );
      }
      uVar2 = 1;
   }
   return uVar2;
}void RSA_get0_crt_params(long param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x50 );
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x58 );
   }
   if (param_4 != (undefined8*)0x0) {
      *param_4 = *(undefined8*)( param_1 + 0x60 );
   }
   return;
}undefined8 RSA_get0_multi_prime_crt_params(long param_1, ulong param_2, ulong param_3) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   uVar2 = RSA_get_multi_prime_extra_count();
   iVar1 = (int)uVar2;
   if (iVar1 != 0) {
      if (( param_3 != 0 || param_2 != 0 ) && ( 0 < iVar1 )) {
         uVar4 = (ulong)iVar1;
         if (param_2 == 0) {
            do {
               lVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), param_2 & 0xffffffff);
               *(undefined8*)( param_3 + param_2 * 8 ) = *(undefined8*)( lVar3 + 0x10 );
               param_2 = param_2 + 1;
            } while ( uVar4 != param_2 );
         } else {
            uVar5 = 0;
            if (param_3 == 0) {
               do {
                  lVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), param_3 & 0xffffffff);
                  *(undefined8*)( param_2 + param_3 * 8 ) = *(undefined8*)( lVar3 + 8 );
                  param_3 = param_3 + 1;
               } while ( uVar4 != param_3 );
            } else {
               do {
                  lVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), uVar5 & 0xffffffff);
                  *(undefined8*)( param_2 + uVar5 * 8 ) = *(undefined8*)( lVar3 + 8 );
                  *(undefined8*)( param_3 + uVar5 * 8 ) = *(undefined8*)( lVar3 + 0x10 );
                  uVar5 = uVar5 + 1;
               } while ( uVar5 != uVar4 );
            }
         }
      }
      uVar2 = 1;
   }
   return uVar2;
}undefined8 RSA_get0_n(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}undefined8 RSA_get0_e(long param_1) {
   return *(undefined8*)( param_1 + 0x30 );
}undefined8 RSA_get0_d(long param_1) {
   return *(undefined8*)( param_1 + 0x38 );
}undefined8 RSA_get0_p(long param_1) {
   return *(undefined8*)( param_1 + 0x40 );
}undefined8 RSA_get0_q(long param_1) {
   return *(undefined8*)( param_1 + 0x48 );
}undefined8 RSA_get0_dmp1(long param_1) {
   return *(undefined8*)( param_1 + 0x50 );
}undefined8 RSA_get0_dmq1(long param_1) {
   return *(undefined8*)( param_1 + 0x58 );
}undefined8 RSA_get0_iqmp(long param_1) {
   return *(undefined8*)( param_1 + 0x60 );
}undefined8 RSA_get0_pss_params(long param_1) {
   return *(undefined8*)( param_1 + 0x80 );
}undefined8 ossl_rsa_set0_pss_params(long param_1, undefined8 param_2) {
   RSA_PSS_PARAMS_free(*(RSA_PSS_PARAMS**)( param_1 + 0x80 ));
   *(undefined8*)( param_1 + 0x80 ) = param_2;
   return 1;
}long ossl_rsa_get0_pss_params_30(long param_1) {
   return param_1 + 0x68;
}void RSA_clear_flags(long param_1, uint param_2) {
   *(uint*)( param_1 + 0xa4 ) = *(uint*)( param_1 + 0xa4 ) & ~param_2;
   return;
}uint RSA_test_flags(long param_1, uint param_2) {
   return *(uint*)( param_1 + 0xa4 ) & param_2;
}void RSA_set_flags(long param_1, uint param_2) {
   *(uint*)( param_1 + 0xa4 ) = *(uint*)( param_1 + 0xa4 ) | param_2;
   return;
}undefined4 RSA_get_version(long param_1) {
   return *(undefined4*)( param_1 + 0x10 );
}undefined8 RSA_get0_engine(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}int RSA_pkey_ctx_ctrl(EVP_PKEY_CTX *param_1, int param_2, int param_3, int param_4, void *param_5) {
   int iVar1;
   if (( ( ( param_1 != (EVP_PKEY_CTX*)0x0 ) && ( *(int**)( param_1 + 0x78 ) != (int*)0x0 ) ) && ( iVar1 = **(int**)( param_1 + 0x78 ) ),iVar1 != 0x390 )) {
      return -1;
   }
   iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, param_2, param_3, param_4, param_5);
   return iVar1;
}undefined8 ossl_rsa_set0_all_params(long param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long *plVar10;
   undefined8 uVar11;
   int local_5c;
   if (( ( param_3 != 0 && param_4 != 0 ) && ( param_2 != 0 ) ) && ( iVar2 = 1 < iVar2 )) {
      uVar4 = OPENSSL_sk_value(param_2, 1);
      uVar5 = OPENSSL_sk_value(param_2, 0);
      iVar3 = RSA_set0_factors(param_1, uVar5, uVar4);
      if (iVar3 != 0) {
         for (int i_2443 = 0; i_2443 < 2; i_2443++) {
            OPENSSL_sk_delete(param_2, 0);
         }
         iVar3 = OPENSSL_sk_num(param_3);
         if (( iVar2 == iVar3 ) && ( iVar3 = OPENSSL_sk_num(param_4) ),iVar3 + 1 == iVar2) {
            uVar4 = OPENSSL_sk_value(param_4, 0);
            uVar5 = OPENSSL_sk_value(param_3, 1);
            uVar11 = OPENSSL_sk_value(param_3, 0);
            iVar3 = RSA_set0_crt_params(param_1, uVar11, uVar5, uVar4);
            if (iVar3 == 0) {
               return 0;
            }
            for (int i_2444 = 0; i_2444 < 2; i_2444++) {
               OPENSSL_sk_delete(param_3, 0);
            }
            OPENSSL_sk_delete(param_4, 0);
         }
         lVar1 = *(long*)( param_1 + 0x88 );
         if (iVar2 != 2) {
            lVar6 = OPENSSL_sk_new_reserve(0, iVar2);
            if (lVar6 == 0) {
               return 0;
            }
            local_5c = 2;
            do {
               lVar7 = OPENSSL_sk_pop(param_2);
               lVar8 = OPENSSL_sk_pop(param_3);
               lVar9 = OPENSSL_sk_pop(param_4);
               if (( ( lVar7 == 0 || lVar8 == 0 ) || ( lVar9 == 0 ) ) || ( plVar10 = (long*)CRYPTO_zalloc(0x28, "crypto/rsa/rsa_lib.c", 0x339) ),plVar10 == (long*)0x0) goto LAB_00100f83;
               *plVar10 = lVar7;
               plVar10[2] = lVar9;
               plVar10[1] = lVar8;
               BN_set_flags(lVar7, 4);
               BN_set_flags(plVar10[1], 4);
               BN_set_flags(plVar10[2], 4);
               OPENSSL_sk_push(lVar6, plVar10);
               local_5c = local_5c + 1;
            } while ( local_5c < iVar2 );
            *(long*)( param_1 + 0x88 ) = lVar6;
            iVar3 = ossl_rsa_multip_calc_product(param_1);
            if (iVar3 == 0) {
               *(long*)( param_1 + 0x88 ) = lVar1;
               LAB_00100f83:OPENSSL_sk_pop_free(lVar6, &ossl_rsa_multip_info_free_ex);
               return 0;
            }
         }
         if (lVar1 != 0) {
            OPENSSL_sk_pop_free(lVar1, ossl_rsa_multip_info_free);
         }
         *(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
         *(uint*)( param_1 + 0x10 ) = ( uint )(2 < iVar2);
         return 1;
      }
   }
   return 0;
}undefined8 ossl_rsa_get0_all_params(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   int iVar5;
   int iVar6;
   uVar3 = 0;
   if (param_1 != 0) {
      lVar2 = RSA_get0_p();
      if (lVar2 != 0) {
         uVar3 = RSA_get0_p(param_1);
         OPENSSL_sk_push(param_2, uVar3);
         uVar3 = RSA_get0_q(param_1);
         OPENSSL_sk_push(param_2, uVar3);
         uVar3 = RSA_get0_dmp1(param_1);
         OPENSSL_sk_push(param_3, uVar3);
         uVar3 = RSA_get0_dmq1(param_1);
         OPENSSL_sk_push(param_3, uVar3);
         uVar3 = RSA_get0_iqmp(param_1);
         OPENSSL_sk_push(param_4, uVar3);
         iVar1 = RSA_get_multi_prime_extra_count(param_1);
         if (0 < iVar1) {
            iVar5 = 0;
            do {
               iVar6 = iVar5 + 1;
               puVar4 = (undefined8*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), iVar5);
               OPENSSL_sk_push(param_2, *puVar4);
               OPENSSL_sk_push(param_3, puVar4[1]);
               OPENSSL_sk_push(param_4, puVar4[2]);
               iVar5 = iVar6;
            } while ( iVar1 != iVar6 );
         }
      }
      uVar3 = 1;
   }
   return uVar3;
}undefined8 ossl_rsa_check_factors(undefined8 param_1) {
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   BIGNUM *pBVar7;
   undefined8 uVar8;
   int iVar9;
   lVar3 = OPENSSL_sk_new_null();
   lVar4 = OPENSSL_sk_new_null();
   lVar5 = OPENSSL_sk_new_null();
   if (( lVar3 == 0 || lVar4 == 0 ) || ( lVar5 == 0 )) {
      LAB_00101308:uVar8 = 0;
   } else {
      ossl_rsa_get0_all_params(param_1, lVar3, lVar4, lVar5);
      lVar6 = RSA_get0_n(param_1);
      if (lVar6 == 0) {
         lVar6 = RSA_get0_d(param_1);
         iVar9 = 0;
         iVar1 = 0;
         if (lVar6 != 0) goto LAB_001012ab;
      } else {
         pBVar7 = (BIGNUM*)RSA_get0_n();
         iVar1 = BN_num_bits(pBVar7);
         lVar6 = RSA_get0_d(param_1);
         iVar2 = 0;
         if (lVar6 != 0) {
            LAB_001012ab:pBVar7 = (BIGNUM*)RSA_get0_d(param_1);
            iVar2 = BN_num_bits(pBVar7);
         }
         iVar9 = iVar1;
         if (iVar1 < iVar2) goto LAB_00101308;
      }
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(lVar4),iVar1 < iVar2; iVar1 = iVar1 + 1) {
         lVar6 = OPENSSL_sk_value(lVar4, iVar1);
         if (lVar6 == 0) {
            if (iVar9 < 0) goto LAB_00101308;
         } else {
            pBVar7 = (BIGNUM*)OPENSSL_sk_value(lVar4, iVar1);
            iVar2 = BN_num_bits(pBVar7);
            if (iVar9 < iVar2) goto LAB_00101308;
         }
      }
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(lVar3),iVar1 < iVar2; iVar1 = iVar1 + 1) {
         lVar6 = OPENSSL_sk_value(lVar3, iVar1);
         if (lVar6 == 0) {
            if (iVar9 < 0) goto LAB_00101308;
         } else {
            pBVar7 = (BIGNUM*)OPENSSL_sk_value(lVar3, iVar1);
            iVar2 = BN_num_bits(pBVar7);
            if (iVar9 < iVar2) goto LAB_00101308;
         }
      }
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(lVar5),iVar1 < iVar2; iVar1 = iVar1 + 1) {
         lVar6 = OPENSSL_sk_value(lVar5, iVar1);
         if (lVar6 == 0) {
            if (iVar9 < 0) goto LAB_00101308;
         } else {
            pBVar7 = (BIGNUM*)OPENSSL_sk_value(lVar5, iVar1);
            iVar2 = BN_num_bits(pBVar7);
            if (iVar9 < iVar2) goto LAB_00101308;
         }
      }
      uVar8 = 1;
   }
   OPENSSL_sk_free(lVar3);
   OPENSSL_sk_free(lVar4);
   OPENSSL_sk_free(lVar5);
   return uVar8;
}void EVP_PKEY_CTX_set_rsa_padding(undefined8 param_1, undefined4 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xffffffff, 0x1001, param_2, 0);
   return;
}void EVP_PKEY_CTX_get_rsa_padding(undefined8 param_1, undefined8 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xffffffff, 0x1006, 0, param_2);
   return;
}void EVP_PKEY_CTX_set_rsa_pss_keygen_md(EVP_PKEY_CTX *param_1, void *param_2) {
   EVP_PKEY_CTX_ctrl(param_1, 0x390, 4, 1, 0, param_2);
   return;
}undefined8 EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(byte *param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 local_58[5];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (byte*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 4 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3cb, "int_set_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      uVar2 = evp_pkey_type2name(0x390);
      iVar1 = EVP_PKEY_CTX_is_a(param_1, uVar2);
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         OSSL_PARAM_construct_utf8_string(&local_d8, "digest", param_2, 0);
         local_a8 = local_d8;
         uStack_a0 = uStack_d0;
         local_88 = local_b8;
         local_98 = local_c8;
         uStack_90 = uStack_c0;
         if (( *(long*)( param_1 + 0x20 ) == 0 ) || ( param_3 == 0 )) {
            puVar3 = &local_80;
         } else {
            OSSL_PARAM_construct_utf8_string(&local_d8, "properties", param_3, 0);
            puVar3 = local_58;
            local_80 = local_d8;
            uStack_78 = uStack_d0;
            local_60 = local_b8;
            local_70 = local_c8;
            uStack_68 = uStack_c0;
         }
         OSSL_PARAM_construct_end(&local_d8);
         *puVar3 = local_d8;
         puVar3[1] = uStack_d0;
         puVar3[2] = local_c8;
         puVar3[3] = uStack_c0;
         puVar3[4] = local_b8;
         uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_a8);
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_PKEY_CTX_set_rsa_oaep_md(EVP_PKEY_CTX *param_1, void *param_2) {
   int iVar1;
   iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
   if (iVar1 != 0) {
      iVar1 = EVP_PKEY_CTX_ctrl(param_1, 6, 0x600, 0x1009, 0, param_2);
      return iVar1;
   }
   return -1;
}undefined8 EVP_PKEY_CTX_set_rsa_oaep_md_name(uint *param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 local_58[5];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (uint*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 0x600 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3cb, "int_set_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      uVar2 = evp_pkey_type2name(6);
      iVar1 = EVP_PKEY_CTX_is_a(param_1, uVar2);
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         OSSL_PARAM_construct_utf8_string(&local_d8, "digest", param_2, 0);
         local_a8 = local_d8;
         uStack_a0 = uStack_d0;
         local_88 = local_b8;
         local_98 = local_c8;
         uStack_90 = uStack_c0;
         if (( *(long*)( param_1 + 8 ) == 0 ) || ( param_3 == 0 )) {
            puVar3 = &local_80;
         } else {
            OSSL_PARAM_construct_utf8_string(&local_d8, "digest-props", param_3, 0);
            puVar3 = local_58;
            local_80 = local_d8;
            uStack_78 = uStack_d0;
            local_60 = local_b8;
            local_70 = local_c8;
            uStack_68 = uStack_c0;
         }
         OSSL_PARAM_construct_end(&local_d8);
         *puVar3 = local_d8;
         puVar3[1] = uStack_d0;
         puVar3[2] = local_c8;
         puVar3[3] = uStack_c0;
         puVar3[4] = local_b8;
         uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_a8);
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_CTX_get_rsa_oaep_md_name(uint *param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (uint*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 0x600 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3f3, "int_get_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      uVar2 = evp_pkey_type2name(6);
      iVar1 = EVP_PKEY_CTX_is_a(param_1, uVar2);
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         OSSL_PARAM_construct_utf8_string(&local_b8, "digest", param_2, param_3);
         local_68 = local_98;
         local_88 = local_b8;
         uStack_80 = uStack_b0;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         OSSL_PARAM_construct_end(&local_b8);
         local_60 = local_b8;
         uStack_58 = uStack_b0;
         local_40 = local_98;
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         uVar2 = evp_pkey_ctx_get_params_strict(param_1, &local_88);
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_PKEY_CTX_get_rsa_oaep_md(EVP_PKEY_CTX *param_1, void *param_2) {
   int iVar1;
   iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
   if (iVar1 != 0) {
      iVar1 = EVP_PKEY_CTX_ctrl(param_1, 6, 0x600, 0x100b, 0, param_2);
      return iVar1;
   }
   return -1;
}void EVP_PKEY_CTX_set_rsa_mgf1_md(undefined8 param_1, undefined8 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xc7f0, 0x1005, 0, param_2);
   return;
}undefined8 EVP_PKEY_CTX_set_rsa_mgf1_md_name(uint *param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 local_58[5];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (uint*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 0xc7f0 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3cb, "int_set_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 == 0) {
         iVar1 = EVP_PKEY_CTX_is_a(param_1, "RSA-PSS");
         if (iVar1 == 0) {
            uVar2 = 0xffffffff;
            goto LAB_00101ac6;
         }
      }
      OSSL_PARAM_construct_utf8_string(&local_d8, "mgf1-digest", param_2, 0);
      local_a8 = local_d8;
      uStack_a0 = uStack_d0;
      local_88 = local_b8;
      local_98 = local_c8;
      uStack_90 = uStack_c0;
      if (( *(long*)( param_1 + 8 ) == 0 ) || ( param_3 == 0 )) {
         puVar3 = &local_80;
      } else {
         OSSL_PARAM_construct_utf8_string(&local_d8, "mgf1-properties", param_3, 0);
         puVar3 = local_58;
         local_80 = local_d8;
         uStack_78 = uStack_d0;
         local_60 = local_b8;
         local_70 = local_c8;
         uStack_68 = uStack_c0;
      }
      OSSL_PARAM_construct_end(&local_d8);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      puVar3[2] = local_c8;
      puVar3[3] = uStack_c0;
      puVar3[4] = local_b8;
      uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_a8);
   }
   LAB_00101ac6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_CTX_get_rsa_mgf1_md_name(uint *param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (uint*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 0xc7f0 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3f3, "int_get_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 == 0) {
         iVar1 = EVP_PKEY_CTX_is_a(param_1, "RSA-PSS");
         if (iVar1 == 0) {
            uVar2 = 0xffffffff;
            goto LAB_00101c1a;
         }
      }
      OSSL_PARAM_construct_utf8_string(&local_b8, "mgf1-digest", param_2, param_3);
      local_68 = local_98;
      local_88 = local_b8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_60 = local_b8;
      uStack_58 = uStack_b0;
      local_40 = local_98;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      uVar2 = evp_pkey_ctx_get_params_strict(param_1, &local_88);
   }
   LAB_00101c1a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(EVP_PKEY_CTX *param_1, void *param_2) {
   EVP_PKEY_CTX_ctrl(param_1, 0x390, 4, 0x1005, 0, param_2);
   return;
}undefined8 EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(byte *param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
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
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (byte*)0x0 ) || ( param_2 == 0 ) ) || ( ( *param_1 & 4 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x3cb, "int_set_rsa_md_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      uVar2 = evp_pkey_type2name(0x390);
      iVar1 = EVP_PKEY_CTX_is_a(param_1, uVar2);
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         OSSL_PARAM_construct_utf8_string(&local_c8, "mgf1-digest", param_2, 0);
         local_78 = local_a8;
         local_98 = local_c8;
         uStack_90 = uStack_c0;
         local_88 = local_b8;
         uStack_80 = uStack_b0;
         OSSL_PARAM_construct_end(&local_c8);
         local_70 = local_c8;
         uStack_68 = uStack_c0;
         local_50 = local_a8;
         local_60 = local_b8;
         uStack_58 = uStack_b0;
         uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_98);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_PKEY_CTX_get_rsa_mgf1_md(undefined8 param_1, undefined8 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xc7f0, 0x1008, 0, param_2);
   return;
}undefined8 EVP_PKEY_CTX_set0_rsa_oaep_label(uint *param_1, undefined *param_2, int param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x600 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x4a3, "EVP_PKEY_CTX_set0_rsa_oaep_label");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         if (( param_2 != (undefined*)0x0 ) || ( puVar3 = param_3 != 0 )) {
            puVar3 = param_2;
         }
         OSSL_PARAM_construct_octet_string(&local_b8, "oaep-label", puVar3, (long)param_3);
         local_68 = local_98;
         local_88 = local_b8;
         uStack_80 = uStack_b0;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         OSSL_PARAM_construct_end(&local_b8);
         local_60 = local_b8;
         uStack_58 = uStack_b0;
         local_40 = local_98;
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_88);
         if (0 < (int)uVar2) {
            CRYPTO_free(param_2);
            uVar2 = 1;
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong EVP_PKEY_CTX_get0_rsa_oaep_label(uint *param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   ulong local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   ulong local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   ulong local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x600 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x4c4, "EVP_PKEY_CTX_get0_rsa_oaep_label");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 != 0) {
         OSSL_PARAM_construct_octet_ptr(&local_a8, "oaep-label", param_2, 0);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_78);
         if (( iVar1 != 0 ) && ( uVar2 = local_58 < 0x80000000 )) goto LAB_0010205c;
      }
      uVar2 = 0xffffffff;
   }
   LAB_0010205c:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_PKEY_CTX_set_rsa_pss_saltlen(undefined8 param_1, undefined4 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xc1f0, 0x1002, param_2, 0);
   return;
}void EVP_PKEY_CTX_get_rsa_pss_saltlen(undefined8 param_1, undefined8 param_2) {
   RSA_pkey_ctx_ctrl(param_1, 0xc1f0, 0x1007, 0, param_2);
   return;
}undefined8 EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(byte *param_1, undefined4 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = param_2;
   if (( param_1 == (byte*)0x0 ) || ( ( *param_1 & 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x507, "EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, "RSA-PSS");
      if (iVar1 == 0) {
         uVar2 = 0xffffffff;
      } else {
         OSSL_PARAM_construct_int(&local_b8, "saltlen", &local_7c);
         local_58 = local_98;
         local_78 = local_b8;
         uStack_70 = uStack_b0;
         local_68 = local_a8;
         uStack_60 = uStack_a0;
         OSSL_PARAM_construct_end(&local_b8);
         local_50 = local_b8;
         uStack_48 = uStack_b0;
         local_30 = local_98;
         local_40 = local_a8;
         uStack_38 = uStack_a0;
         uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_78);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_CTX_set_rsa_keygen_bits(byte *param_1, int param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   long local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_80 = (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (byte*)0x0 ) || ( ( *param_1 & 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x51c, "EVP_PKEY_CTX_set_rsa_keygen_bits");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 == 0) {
         iVar1 = EVP_PKEY_CTX_is_a(param_1, "RSA-PSS");
         if (iVar1 == 0) {
            uVar2 = 0xffffffff;
            goto LAB_001022fe;
         }
      }
      OSSL_PARAM_construct_size_t(&local_b8, &_LC11, &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_78);
   }
   LAB_001022fe:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong EVP_PKEY_CTX_set_rsa_keygen_pubexp(long param_1, undefined8 param_2) {
   ulong uVar1;
   uVar1 = RSA_pkey_ctx_ctrl(param_1, 4, 0x1004, 0, param_2);
   if (( 0 < (int)uVar1 ) && ( *(long*)( param_1 + 0x20 ) != 0 )) {
      BN_free(*(BIGNUM**)( param_1 + 0xa8 ));
      *(undefined8*)( param_1 + 0xa8 ) = param_2;
      uVar1 = uVar1 & 0xffffffff;
   }
   return uVar1;
}int EVP_PKEY_CTX_set1_rsa_keygen_pubexp(EVP_PKEY_CTX *param_1, BIGNUM *param_2) {
   int iVar1;
   if (( *(long*)( param_1 + 0x20 ) == 0 ) && ( param_2 = BN_dup(param_2) ),param_2 == (BIGNUM*)0x0) {
      return 0;
   }
   iVar1 = EVP_PKEY_CTX_ctrl(param_1, 6, 4, 0x1004, 0, param_2);
   if (( *(long*)( param_1 + 0x20 ) == 0 ) && ( iVar1 < 1 )) {
      BN_free(param_2);
   }
   return iVar1;
}undefined8 EVP_PKEY_CTX_set_rsa_keygen_primes(byte *param_1, int param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   long local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_80 = (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (byte*)0x0 ) || ( ( *param_1 & 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_lib.c", 0x558, "EVP_PKEY_CTX_set_rsa_keygen_primes");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   } else {
      iVar1 = EVP_PKEY_CTX_is_a(param_1, &_LC3);
      if (iVar1 == 0) {
         iVar1 = EVP_PKEY_CTX_is_a(param_1, "RSA-PSS");
         if (iVar1 == 0) {
            uVar2 = 0xffffffff;
            goto LAB_0010251e;
         }
      }
      OSSL_PARAM_construct_size_t(&local_b8, "primes", &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar2 = evp_pkey_ctx_set_params_strict(param_1, &local_78);
   }
   LAB_0010251e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
