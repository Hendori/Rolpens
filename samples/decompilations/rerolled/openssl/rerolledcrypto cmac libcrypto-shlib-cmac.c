/* WARNING: Unknown calling convention -- yet parameter storage is locked */CMAC_CTX *CMAC_CTX_new(void) {
   CMAC_CTX *ptr;
   EVP_CIPHER_CTX *pEVar1;
   ptr = (CMAC_CTX*)CRYPTO_malloc(0x90, "crypto/cmac/cmac.c", 0x3a);
   if (ptr != (CMAC_CTX*)0x0) {
      pEVar1 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX**)ptr = pEVar1;
      if (pEVar1 != (EVP_CIPHER_CTX*)0x0) {
         *(undefined4*)( ptr + 0x88 ) = 0xffffffff;
         return ptr;
      }

      CRYPTO_free(ptr);
   }

   return (CMAC_CTX*)0x0;
}
void CMAC_CTX_cleanup(CMAC_CTX *ctx) {
   EVP_CIPHER_CTX_reset(*(undefined8*)ctx);
   OPENSSL_cleanse(ctx + 0x48, 0x20);
   OPENSSL_cleanse(ctx + 8, 0x20);
   OPENSSL_cleanse(ctx + 0x28, 0x20);
   OPENSSL_cleanse(ctx + 0x68, 0x20);
   *(undefined4*)( ctx + 0x88 ) = 0xffffffff;
   return;
}
EVP_CIPHER_CTX *CMAC_CTX_get0_cipher_ctx(CMAC_CTX *ctx) {
   return *(EVP_CIPHER_CTX**)ctx;
}
void CMAC_CTX_free(CMAC_CTX *ctx) {
   if (ctx != (CMAC_CTX*)0x0) {
      CMAC_CTX_cleanup(ctx);
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX**)ctx);
      CRYPTO_free(ctx);
      return;
   }

   return;
}
int CMAC_CTX_copy(CMAC_CTX *out, CMAC_CTX *in) {
   int iVar1;
   size_t __n;
   if (*(int*)( in + 0x88 ) == -1) {
      return 0;
   }

   iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8*)in);
   __n = (size_t)iVar1;
   if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_CTX_copy(*(EVP_CIPHER_CTX**)out, *(EVP_CIPHER_CTX**)in);
      if (iVar1 != 0) {
         for (int i = 0; i < 4; i++) {
            memcpy(out + ( 32*i + 8 ), in + ( 32*i + 8 ), __n);
         }

         *(undefined4*)( out + 0x88 ) = *(undefined4*)( in + 0x88 );
         return 1;
      }

   }

   return 0;
}
undefined8 ossl_cmac_init(undefined8 *param_1, long param_2, long param_3, EVP_CIPHER *param_4, ENGINE *param_5, undefined8 param_6) {
   uchar *out;
   byte bVar1;
   byte bVar2;
   int iVar3;
   uint inl;
   long lVar4;
   byte *pbVar5;
   byte bVar6;
   ulong uVar7;
   byte bVar8;
   byte *pbVar9;
   if (param_2 == 0 && param_4 == (EVP_CIPHER*)0x0) {
      if (param_5 == (ENGINE*)0x0 && param_3 == 0) {
         if (*(int*)( param_1 + 0x11 ) == -1) {
            return 0;
         }

         iVar3 = EVP_EncryptInit_ex2(*param_1, 0, 0, zero_iv_0, param_6);
         if (iVar3 == 0) {
            return 0;
         }

         iVar3 = EVP_CIPHER_CTX_get_block_size(*param_1);
         if (iVar3 == 0) {
            return 0;
         }

         memset(param_1 + 9, 0, (long)iVar3);
         *(undefined4*)( param_1 + 0x11 ) = 0;
      }

   }
 else {
      if (param_4 != (EVP_CIPHER*)0x0) {
         *(undefined4*)( param_1 + 0x11 ) = 0xffffffff;
         if (param_5 == (ENGINE*)0x0) {
            iVar3 = EVP_EncryptInit_ex2((EVP_CIPHER_CTX*)*param_1, param_4, 0, 0, param_6);
         }
 else {
            iVar3 = EVP_EncryptInit_ex((EVP_CIPHER_CTX*)*param_1, param_4, param_5, (uchar*)0x0, (uchar*)0x0);
         }

         if (iVar3 == 0) {
            return 0;
         }

      }

      if (param_2 != 0) {
         *(undefined4*)( param_1 + 0x11 ) = 0xffffffff;
         lVar4 = EVP_CIPHER_CTX_get0_cipher(*param_1);
         if (( ( lVar4 != 0 ) && ( iVar3 = EVP_CIPHER_CTX_set_key_length((EVP_CIPHER_CTX*)*param_1, (int)param_3) ),0 < iVar3 )) {
            inl = EVP_CIPHER_CTX_get_block_size(*param_1);
            if (-1 < (int)inl) {
               out = (uchar*)( param_1 + 9 );
               iVar3 = EVP_Cipher((EVP_CIPHER_CTX*)*param_1, out, zero_iv_0, inl);
               if (0 < iVar3) {
                  bVar6 = *(byte*)( param_1 + 9 );
                  if ((int)( inl - 1 ) < 1) {
                     bVar8 = 0x1b;
                     bVar1 = bVar6 * '\x02' ^ (char)bVar6 >> 7 & 0x1bU;
                     pbVar9 = (byte*)( param_1 + 5 );
                     *(byte*)( param_1 + 1 ) = bVar1;
                     bVar6 = bVar1;
                  }
 else {
                     uVar7 = ( ulong )(inl - 2);
                     pbVar9 = (byte*)( param_1 + 1 );
                     bVar1 = bVar6;
                     do {
                        bVar2 = pbVar9[0x41];
                        pbVar5 = pbVar9 + 1;
                        *pbVar9 = bVar2 >> 7 | bVar1 * '\x02';
                        pbVar9 = pbVar5;
                        bVar1 = bVar2;
                     }
 while ( (byte*)( (long)param_1 + 9 ) + uVar7 != pbVar5 );
                     bVar8 = 0x1b;
                     if (inl == 0x10) {
                        bVar8 = 0x87;
                     }

                     *(byte*)( (long)param_1 + uVar7 + 9 ) = (char)bVar6 >> 7 & bVar8 ^ bVar2 * '\x02';
                     bVar6 = *(byte*)( param_1 + 1 );
                     pbVar9 = (byte*)( (long)param_1 + 9 );
                     bVar2 = bVar6;
                     do {
                        bVar1 = *pbVar9;
                        pbVar5 = pbVar9 + 1;
                        pbVar9[0x1f] = bVar1 >> 7 | bVar2 * '\x02';
                        pbVar9 = pbVar5;
                        bVar2 = bVar1;
                     }
 while ( (byte*)( (long)param_1 + uVar7 + 10 ) != pbVar5 );
                     pbVar9 = (byte*)( (long)param_1 + (long)(int)( inl - 1 ) + 0x28 );
                  }

                  *pbVar9 = bVar1 * '\x02' ^ (char)bVar6 >> 7 & bVar8;
                  OPENSSL_cleanse(out, (long)(int)inl);
                  iVar3 = EVP_EncryptInit_ex2(*param_1, 0, 0, zero_iv_0, param_6);
                  if (iVar3 != 0) {
                     memset(out, 0, (long)(int)inl);
                     *(undefined4*)( param_1 + 0x11 ) = 0;
                     return 1;
                  }

               }

            }

         }

         return 0;
      }

   }

   return 1;
}
int CMAC_Init(CMAC_CTX *ctx, void *key, size_t keylen, EVP_CIPHER *cipher, ENGINE *impl) {
   int iVar1;
   iVar1 = ossl_cmac_init();
   return iVar1;
}
int CMAC_Update(CMAC_CTX *ctx, void *data, size_t dlen) {
   uint inl;
   int iVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   ulong __n;
   long in_FS_OFFSET;
   uchar *local_860;
   uchar local_848[2056];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( ctx + 0x88 ) == -1) {
      LAB_00100560:iVar2 = 0;
   }
 else {
      if (dlen != 0) {
         inl = EVP_CIPHER_CTX_get_block_size(*(undefined8*)ctx);
         if (inl == 0) goto LAB_00100560;
         iVar2 = *(int*)( ctx + 0x88 );
         if (0 < iVar2) {
            uVar4 = (long)(int)( inl - iVar2 );
            if (dlen < (ulong)(long)(int)( inl - iVar2 )) {
               uVar4 = dlen;
            }

            memcpy(ctx + 0x68 + iVar2, data, uVar4);
            *(int*)( ctx + 0x88 ) = *(int*)( ctx + 0x88 ) + (int)uVar4;
            dlen = dlen - uVar4;
            if (dlen == 0) goto LAB_0010048d;
            iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX**)ctx, (uchar*)( ctx + 0x48 ), (uchar*)( ctx + 0x68 ), inl);
            if (iVar2 < 1) goto LAB_00100560;
            data = (void*)( (long)data + uVar4 );
         }

         __n = (ulong)(int)inl;
         iVar2 = (int)( 0x800 / (long)(int)inl );
         uVar4 = (ulong)iVar2;
         if (uVar4 == 0) {
            if (__n < dlen) {
               do {
                  iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX**)ctx, (uchar*)( ctx + 0x48 ), (uchar*)data, inl);
                  if (iVar2 < 1) goto LAB_00100560;
                  dlen = dlen - __n;
                  data = (void*)( (long)data + __n );
               }
 while ( __n < dlen );
            }

         }
 else {
            uVar3 = ( dlen - 1 ) / __n;
            if (uVar4 < uVar3) {
               do {
                  iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX**)ctx, local_848, (uchar*)data, iVar2 * inl);
                  if (iVar1 < 1) goto LAB_00100560;
                  uVar3 = uVar3 - uVar4;
                  dlen = dlen - __n * uVar4;
                  data = (void*)( (long)data + __n * uVar4 );
               }
 while ( uVar4 < uVar3 );
            }
 else if (dlen - 1 < __n) goto LAB_00100680;
            local_860 = local_848;
            iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX**)ctx, local_860, (uchar*)data, inl * (int)uVar3);
            if (iVar2 < 1) goto LAB_00100560;
            dlen = dlen - __n * uVar3;
            data = (void*)( (long)data + __n * uVar3 );
            memcpy(ctx + 0x48, local_860 + ( uVar3 - 1 ) * __n, __n);
         }

         LAB_00100680:memcpy(ctx + 0x68, data, dlen);
         *(int*)( ctx + 0x88 ) = (int)dlen;
      }

      LAB_0010048d:iVar2 = 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int CMAC_Final(CMAC_CTX *ctx, uchar *out, size_t *poutlen) {
   ulong uVar1;
   ulong uVar2;
   uint inl;
   int iVar3;
   uint uVar4;
   int iVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   if (*(int*)( ctx + 0x88 ) == -1) {
      return 0;
   }

   uVar6 = EVP_CIPHER_CTX_get_block_size(*(undefined8*)ctx);
   inl = (uint)uVar6;
   if (inl == 0) {
      LAB_001008c0:iVar3 = 0;
   }
 else {
      if (poutlen != (size_t*)0x0) {
         *poutlen = (long)(int)inl;
      }

      if (out != (uchar*)0x0) {
         uVar8 = *(uint*)( ctx + 0x88 );
         if (inl == uVar8) {
            if (0 < (int)inl) {
               if (( inl - 1 < 7 ) || ( ( ulong )((long)out - (long)( ctx + 9 )) < 0x6f )) {
                  lVar7 = 0;
                  do {
                     out[lVar7] = (byte)ctx[lVar7 + 8] ^ (byte)ctx[lVar7 + 0x68];
                     lVar7 = lVar7 + 1;
                  }
 while ( lVar7 != (int)uVar8 );
               }
 else if (inl - 1 < 0xf) {
                  uVar6 = 0;
                  uVar9 = 0;
                  uVar4 = inl;
                  LAB_00100995:*(ulong*)( out + uVar6 ) = *(ulong*)( ctx + uVar6 + 0x68 ) ^ *(ulong*)( ctx + uVar6 + 8 );
                  uVar9 = uVar9 + ( uVar4 & 0xfffffff8 );
                  if (( uVar4 & 7 ) != 0) {
                     LAB_001009bb:out[(int)uVar9] = (byte)ctx[(long)(int)uVar9 + 0x68] ^ (byte)ctx[(long)(int)uVar9 + 8];
                     iVar3 = uVar9 + 1;
                     if (iVar3 < (int)uVar8) {
                        out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 8];
                        iVar3 = uVar9 + 2;
                        if (iVar3 < (int)uVar8) {
                           out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 8];
                           iVar3 = uVar9 + 3;
                           if (iVar3 < (int)uVar8) {
                              out[iVar3] = (byte)ctx[(long)iVar3 + 8] ^ (byte)ctx[(long)iVar3 + 0x68];
                              iVar3 = uVar9 + 4;
                              if (iVar3 < (int)uVar8) {
                                 out[iVar3] = (byte)ctx[(long)iVar3 + 8] ^ (byte)ctx[(long)iVar3 + 0x68];
                                 iVar3 = uVar9 + 5;
                                 if (iVar3 < (int)uVar8) {
                                    iVar5 = uVar9 + 6;
                                    out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 8];
                                    if (iVar5 < (int)uVar8) {
                                       out[iVar5] = (byte)ctx[(long)iVar5 + 0x68] ^ (byte)ctx[(long)iVar5 + 8];
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }
 else {
                  uVar1 = *(ulong*)( ctx + 0x70 );
                  uVar2 = *(ulong*)( ctx + 0x10 );
                  *(ulong*)out = *(ulong*)( ctx + 0x68 ) ^ *(ulong*)( ctx + 8 );
                  *(ulong*)( out + 8 ) = uVar1 ^ uVar2;
                  if (( ( uint )(uVar6 >> 4) & 0xfffffff ) != 1) {
                     uVar6 = *(ulong*)( ctx + 0x80 );
                     uVar1 = *(ulong*)( ctx + 0x20 );
                     *(ulong*)( out + 0x10 ) = *(ulong*)( ctx + 0x78 ) ^ *(ulong*)( ctx + 0x18 );
                     *(ulong*)( out + 0x18 ) = uVar6 ^ uVar1;
                  }

                  uVar9 = uVar8 & 0xfffffff0;
                  uVar6 = (ulong)uVar9;
                  if (inl != uVar9) {
                     uVar4 = inl - uVar9;
                     if (6 < ( inl - uVar9 ) - 1) goto LAB_00100995;
                     goto LAB_001009bb;
                  }

               }

            }

         }
 else {
            ctx[(long)(int)uVar8 + 0x68] = (CMAC_CTX)0x80;
            if (1 < (int)( inl - uVar8 )) {
               memset(ctx + (long)(int)uVar8 + 0x69, 0, (long)(int)( ( inl - uVar8 ) + -1 ));
            }

            if (0 < (int)inl) {
               if (( inl - 1 < 7 ) || ( ( ulong )((long)out - (long)( ctx + 0x29 )) < 0x4f )) {
                  lVar7 = 0;
                  do {
                     out[lVar7] = (byte)ctx[lVar7 + 0x68] ^ (byte)ctx[lVar7 + 0x28];
                     lVar7 = lVar7 + 1;
                  }
 while ( lVar7 != (int)inl );
               }
 else if (inl - 1 < 0xf) {
                  uVar6 = 0;
                  uVar4 = 0;
                  uVar8 = inl;
                  LAB_001007cc:*(ulong*)( out + uVar6 ) = *(ulong*)( ctx + uVar6 + 0x68 ) ^ *(ulong*)( ctx + uVar6 + 0x28 );
                  uVar4 = uVar4 + ( uVar8 & 0xfffffff8 );
                  if (( uVar8 & 7 ) != 0) {
                     LAB_001007f2:out[(int)uVar4] = (byte)ctx[(long)(int)uVar4 + 0x68] ^ (byte)ctx[(long)(int)uVar4 + 0x28];
                     iVar3 = uVar4 + 1;
                     if (iVar3 < (int)inl) {
                        out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 0x28];
                        iVar3 = uVar4 + 2;
                        if (iVar3 < (int)inl) {
                           out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 0x28];
                           iVar3 = uVar4 + 3;
                           if (iVar3 < (int)inl) {
                              out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 0x28];
                              iVar3 = uVar4 + 4;
                              if (iVar3 < (int)inl) {
                                 out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 0x28];
                                 iVar3 = uVar4 + 5;
                                 if (iVar3 < (int)inl) {
                                    iVar5 = uVar4 + 6;
                                    out[iVar3] = (byte)ctx[(long)iVar3 + 0x68] ^ (byte)ctx[(long)iVar3 + 0x28];
                                    if (iVar5 < (int)inl) {
                                       out[iVar5] = (byte)ctx[(long)iVar5 + 0x68] ^ (byte)ctx[(long)iVar5 + 0x28];
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }
 else {
                  uVar1 = *(ulong*)( ctx + 0x70 );
                  uVar2 = *(ulong*)( ctx + 0x30 );
                  *(ulong*)out = *(ulong*)( ctx + 0x68 ) ^ *(ulong*)( ctx + 0x28 );
                  *(ulong*)( out + 8 ) = uVar1 ^ uVar2;
                  if (( ( uint )(uVar6 >> 4) & 0xfffffff ) != 1) {
                     uVar6 = *(ulong*)( ctx + 0x80 );
                     uVar1 = *(ulong*)( ctx + 0x40 );
                     *(ulong*)( out + 0x10 ) = *(ulong*)( ctx + 0x78 ) ^ *(ulong*)( ctx + 0x38 );
                     *(ulong*)( out + 0x18 ) = uVar6 ^ uVar1;
                  }

                  uVar4 = inl & 0xfffffff0;
                  uVar6 = (ulong)uVar4;
                  if (inl != uVar4) {
                     uVar8 = inl - uVar4;
                     if (6 < ( inl - uVar4 ) - 1) goto LAB_001007cc;
                     goto LAB_001007f2;
                  }

               }

            }

         }

         iVar3 = EVP_Cipher(*(EVP_CIPHER_CTX**)ctx, out, out, inl);
         if (iVar3 < 1) {
            OPENSSL_cleanse(out, (long)(int)inl);
            goto LAB_001008c0;
         }

      }

      iVar3 = 1;
   }

   return iVar3;
}
int CMAC_resume(CMAC_CTX *ctx) {
   int iVar1;
   if (*(int*)( ctx + 0x88 ) != -1) {
      iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX**)ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, (uchar*)( ctx + 0x48 ));
      return iVar1;
   }

   return 0;
}

