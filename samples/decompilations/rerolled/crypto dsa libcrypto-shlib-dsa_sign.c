DSA_SIG *DSA_do_sign(uchar *dgst, int dlen, DSA *dsa) {
   DSA_SIG *pDVar1;
   for (int i_2009 = 0; i_2009 < 2; i_2009++) {
      /* WARNING: Could not recover jumptable at 0x0010000b. Too many branches */
   }
   pDVar1 = (DSA_SIG*)( **(code**)&(dsa[1].p)->top )();
   return pDVar1;
}int DSA_sign_setup(DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp, BIGNUM **rp) {
   int iVar1;
   for (int i_2010 = 0; i_2010 < 2; i_2010++) {
      /* WARNING: Could not recover jumptable at 0x0010001b. Too many branches */
   }
   iVar1 = ( **(code**)&(dsa[1].p)->neg )();
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */DSA_SIG *DSA_SIG_new(void) {
   DSA_SIG *pDVar1;
   pDVar1 = (DSA_SIG*)CRYPTO_zalloc(0x10, "crypto/dsa/dsa_sign.c", 0x24);
   return pDVar1;
}void DSA_SIG_free(DSA_SIG *a) {
   if (a != (DSA_SIG*)0x0) {
      BN_clear_free(a->r);
      BN_clear_free(a->s);
      CRYPTO_free(a);
      return;
   }
   return;
}DSA_SIG *d2i_DSA_SIG(DSA_SIG **v, uchar **pp, long length) {
   long lVar1;
   DSA_SIG *a;
   BIGNUM *pBVar2;
   BIGNUM *pBVar3;
   BIGNUM *pBVar4;
   if (length < 0) {
      return (DSA_SIG*)0x0;
   }
   if (( ( v == (DSA_SIG**)0x0 ) || ( a = *v ),a == (DSA_SIG*)0x0 )) {
      return (DSA_SIG*)0x0;
   }
   pBVar3 = a->r;
   if (pBVar3 == (BIGNUM*)0x0) {
      pBVar3 = BN_new();
      pBVar2 = a->s;
      a->r = pBVar3;
      pBVar4 = pBVar3;
      if (pBVar2 == (BIGNUM*)0x0) goto LAB_00100110;
      joined_r0x00100177:if (pBVar4 == (BIGNUM*)0x0) goto LAB_00100129;
   } else {
      pBVar2 = a->s;
      if (pBVar2 == (BIGNUM*)0x0) {
         LAB_00100110:pBVar2 = BN_new();
         pBVar3 = a->r;
         a->s = pBVar2;
         pBVar4 = pBVar2;
         if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100129;
         goto joined_r0x00100177;
      }
   }
   lVar1 = ossl_decode_der_dsa_sig(pBVar3, pBVar2, pp, length);
   if (lVar1 != 0) {
      if (( v != (DSA_SIG**)0x0 ) && ( *v == (DSA_SIG*)0x0 )) {
         *v = a;
         return a;
      }
      return a;
   }
   LAB_00100129:if (( v == (DSA_SIG**)0x0 ) || ( *v == (DSA_SIG*)0x0 )) {
      DSA_SIG_free(a);
   }
   return (DSA_SIG*)0x0;
}int i2d_DSA_SIG(DSA_SIG *a, uchar **pp) {
   int iVar1;
   BUF_MEM *a_00;
   long in_FS_OFFSET;
   long local_70;
   undefined1 local_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pp == (uchar**)0x0) {
      iVar1 = WPACKET_init_null(local_68, 0);
      joined_r0x001002c1:if (iVar1 != 0) {
         a_00 = (BUF_MEM*)0x0;
         LAB_001001da:iVar1 = ossl_encode_der_dsa_sig(local_68, a->r, a->s);
         if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_get_total_written(local_68, &local_70) ),iVar1 != 0 )) {
            if (pp != (uchar**)0x0) {
               if (*pp == (uchar*)0x0) {
                  *pp = (uchar*)a_00->data;
                  a_00->data = (char*)0x0;
                  BUF_MEM_free(a_00);
               } else {
                  *pp = *pp + local_70;
               }
            }
            goto LAB_0010022f;
         }
         BUF_MEM_free(a_00);
         WPACKET_cleanup(local_68);
      }
   } else {
      if (*pp != (uchar*)0x0) {
         iVar1 = WPACKET_init_static_len(local_68, *pp, 0xffffffffffffffff, 0);
         goto joined_r0x001002c1;
      }
      a_00 = BUF_MEM_new();
      if (( a_00 != (BUF_MEM*)0x0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_001001da;
      BUF_MEM_free(a_00);
   }
   local_70 = 0xffffffff;
   LAB_0010022f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (int)local_70;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int DSA_size(DSA *param_1) {
   BIGNUM *pBVar1;
   int iVar2;
   long in_FS_OFFSET;
   DSA_SIG local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pBVar1 = *(BIGNUM**)&param_1->write_params;
   if (pBVar1 == (BIGNUM*)0x0) {
      iVar2 = -1;
   } else {
      local_28.r = pBVar1;
      local_28.s = pBVar1;
      iVar2 = i2d_DSA_SIG(&local_28, (uchar**)0x0);
      if (iVar2 < 0) {
         iVar2 = 0;
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void DSA_SIG_get0(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *param_1;
   }
   if (param_3 != (undefined8*)0x0) {
      *param_3 = param_1[1];
   }
   return;
}bool DSA_SIG_set0(long *param_1, long param_2, long param_3) {
   if (param_2 != 0) {
      if (param_3 != 0) {
         BN_clear_free((BIGNUM*)*param_1);
         BN_clear_free((BIGNUM*)param_1[1]);
         *param_1 = param_2;
         param_1[1] = param_3;
      }
      return param_3 != 0;
   }
   return false;
}undefined8 ossl_dsa_sign_int(undefined8 param_1, uchar *param_2, int param_3, uchar *param_4, int *param_5, DSA *param_6, undefined4 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10) {
   DSA_METHOD *pDVar1;
   int iVar2;
   DSA_METHOD *pDVar3;
   DSA_SIG *a;
   uchar *local_30;
   local_30 = param_4;
   if (param_4 == (uchar*)0x0) {
      iVar2 = DSA_size(param_6);
      *param_5 = iVar2;
      return 1;
   }
   if (( param_6[1].pub_key == (BIGNUM*)0x0 ) || ( pDVar1 = (DSA_METHOD*)param_6[1].p ),pDVar3 = DSA_get_default_method(),pDVar1 != pDVar3) {
      a = DSA_do_sign(param_2, param_3, param_6);
   } else {
      a = (DSA_SIG*)ossl_dsa_do_sign_int(param_2, param_3, param_6, param_7, param_8, param_9, param_10);
   }
   if (a != (DSA_SIG*)0x0) {
      iVar2 = i2d_DSA_SIG(a, &local_30);
      *param_5 = iVar2;
      DSA_SIG_free(a);
      return 1;
   }
   *param_5 = 0;
   return 0;
}int DSA_sign(int type, uchar *dgst, int dlen, uchar *sig, uint *siglen, DSA *dsa) {
   int iVar1;
   iVar1 = ossl_dsa_sign_int();
   return iVar1;
}int DSA_verify(int type, uchar *dgst, int dgst_len, uchar *sigbuf, int siglen, DSA *dsa) {
   int iVar1;
   int iVar2;
   DSA_SIG *pDVar3;
   uchar *puVar4;
   size_t __n;
   long in_FS_OFFSET;
   DSA_SIG *local_58;
   uchar *local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (uchar*)0x0;
   local_50 = sigbuf;
   local_58 = DSA_SIG_new();
   if (local_58 == (DSA_SIG*)0x0) {
      iVar1 = -1;
   } else {
      __n = (size_t)siglen;
      pDVar3 = d2i_DSA_SIG(&local_58, &local_50, __n);
      if (pDVar3 == (DSA_SIG*)0x0) {
         __n = 0xffffffffffffffff;
         iVar1 = -1;
         puVar4 = local_48;
      } else {
         iVar1 = i2d_DSA_SIG(local_58, &local_48);
         puVar4 = local_48;
         if (siglen == iVar1) {
            iVar1 = -1;
            iVar2 = memcmp(sigbuf, local_48, __n);
            if (iVar2 == 0) {
               iVar1 = DSA_do_verify(dgst, dgst_len, local_58, dsa);
               puVar4 = local_48;
            }
         } else {
            __n = (size_t)iVar1;
            iVar1 = -1;
         }
      }
      CRYPTO_clear_free(puVar4, __n, "crypto/dsa/dsa_sign.c", 0xd6);
      DSA_SIG_free(local_58);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
