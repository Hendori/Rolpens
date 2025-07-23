int strip_eol(long param_1, int *param_2, uint param_3) {
   char cVar1;
   int iVar2;
   char *pcVar3;
   int iVar4;
   iVar2 = *param_2;
   if (( param_3 & 0x80 ) != 0) {
      iVar4 = 0;
      if (( 0 < iVar2 ) && ( *(char*)( param_1 + -1 + (long)iVar2 ) == '\n' )) {
         if (( param_3 & 0x800 ) != 0) {
            if (iVar2 == 1) {
               return 0;
            }

            if (*(char*)( param_1 + -2 + (long)iVar2 ) != '\r') {
               return 0;
            }

            iVar2 = iVar2 + -1;
         }

         iVar4 = 1;
         *param_2 = iVar2 + -1;
      }

      return iVar4;
   }

   pcVar3 = (char*)( param_1 + -1 + (long)iVar2 );
   iVar4 = 0;
   if (0 < iVar2) {
      do {
         while (cVar1 = *pcVar3,cVar1 != '\n') {
            if (( ( ( iVar4 == 0 ) || ( ( param_3 >> 0x13 & 1 ) == 0 ) ) || ( cVar1 != ' ' ) ) && ( cVar1 != '\r' )) goto LAB_00100086;
            pcVar3 = pcVar3 + -1;
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) goto LAB_00100086;
         }
;
         iVar4 = 1;
         pcVar3 = pcVar3 + -1;
         iVar2 = iVar2 + -1;
      }
 while ( iVar2 != 0 );
   }

   LAB_00100086:*param_2 = iVar2;
   return iVar4;
}
void mime_param_free(undefined8 *param_1) {
   CRYPTO_free((void*)*param_1);
   CRYPTO_free((void*)param_1[1]);
   CRYPTO_free(param_1);
   return;
}
int mime_hdr_cmp(undefined8 *param_1, undefined8 *param_2) {
   char *__s1;
   char *__s2;
   int iVar1;
   __s1 = *(char**)*param_1;
   __s2 = *(char**)*param_2;
   if (( __s1 != (char*)0x0 ) && ( __s2 != (char*)0x0 )) {
      iVar1 = strcmp(__s1, __s2);
      return iVar1;
   }

   return ( ( __s1 != (char*)0x0 ) - 1 ) + ( uint )(__s2 == (char*)0x0);
}
int mime_param_cmp(undefined8 *param_1, undefined8 *param_2) {
   char *__s1;
   char *__s2;
   int iVar1;
   __s1 = *(char**)*param_1;
   __s2 = *(char**)*param_2;
   if (( __s1 != (char*)0x0 ) && ( __s2 != (char*)0x0 )) {
      iVar1 = strcmp(__s1, __s2);
      return iVar1;
   }

   return ( ( __s1 != (char*)0x0 ) - 1 ) + ( uint )(__s2 == (char*)0x0);
}
undefined8 *mime_hdr_new(char *param_1, char *param_2) {
   char *pcVar1;
   char cVar2;
   undefined8 *ptr;
   long lVar3;
   if (param_1 != (char*)0x0) {
      param_1 = CRYPTO_strdup(param_1, "crypto/asn1/asn_mime.c", 0x35f);
      if (param_1 == (char*)0x0) {
         return (undefined8*)0x0;
      }

      cVar2 = *param_1;
      pcVar1 = param_1;
      while (cVar2 != '\0') {
         cVar2 = ossl_tolower();
         *pcVar1 = cVar2;
         cVar2 = pcVar1[1];
         pcVar1 = pcVar1 + 1;
      }
;
   }

   if (param_2 != (char*)0x0) {
      param_2 = CRYPTO_strdup(param_2, "crypto/asn1/asn_mime.c", 0x365);
      if (param_2 == (char*)0x0) {
         ptr = (undefined8*)0x0;
         goto LAB_00100240;
      }

      cVar2 = *param_2;
      pcVar1 = param_2;
      while (cVar2 != '\0') {
         cVar2 = ossl_tolower();
         *pcVar1 = cVar2;
         cVar2 = pcVar1[1];
         pcVar1 = pcVar1 + 1;
      }
;
   }

   ptr = (undefined8*)CRYPTO_malloc(0x18, "crypto/asn1/asn_mime.c", 0x36a);
   if (ptr != (undefined8*)0x0) {
      *ptr = param_1;
      ptr[1] = param_2;
      lVar3 = OPENSSL_sk_new(mime_param_cmp);
      ptr[2] = lVar3;
      if (lVar3 != 0) {
         return ptr;
      }

   }

   LAB_00100240:CRYPTO_free(param_1);
   CRYPTO_free(param_2);
   CRYPTO_free(ptr);
   return (undefined8*)0x0;
}
long b64_read_asn1(BIO *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   BIO_METHOD *type;
   BIO *b;
   BIO *bp;
   long lVar1;
   type = BIO_f_base64();
   b = BIO_new(type);
   if (b == (BIO*)0x0) {
      ERR_new();
      lVar1 = 0;
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x91, "b64_read_asn1");
      ERR_set_error(0xd, 0x80020, 0);
   }
 else {
      bp = BIO_push(b, param_1);
      lVar1 = ASN1_item_d2i_bio_ex(param_2, bp, param_3, param_4, param_5);
      if (lVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x97, "b64_read_asn1");
         ERR_set_error(0xd, 0x6e, 0);
      }

      BIO_ctrl(bp, 0xb, 0, (void*)0x0);
      BIO_pop(bp);
      BIO_free(b);
   }

   return lVar1;
}
undefined8 multi_split_constprop_0(undefined8 param_1, uint param_2, char *param_3, long *param_4) {
   bool bVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   size_t sVar5;
   long lVar6;
   BIO_METHOD *pBVar7;
   BIO *b;
   undefined8 uVar8;
   char cVar9;
   long in_FS_OFFSET;
   int local_460;
   int local_44c;
   short local_448;
   char local_446[1030];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar5 = strlen(param_3);
   lVar6 = OPENSSL_sk_new_null();
   *param_4 = lVar6;
   if (lVar6 != 0) {
      cVar9 = '\0';
      bVar1 = true;
      b = (BIO*)0x0;
      iVar4 = (int)sVar5;
      local_460 = 0;
      if (iVar4 == -1) {
         LAB_001005e0:iVar4 = BIO_get_line(param_1, &local_448, 0x400);
         local_44c = iVar4;
         if (0 < iVar4) {
            sVar5 = strlen(param_3);
            if (( (int)sVar5 + 1 < iVar4 ) && ( local_448 == 0x2d2d )) {
               sVar5 = (size_t)(int)sVar5;
               iVar4 = strncmp(local_446, param_3, sVar5);
               if (iVar4 == 0) {
                  if (( local_446[sVar5] == '-' ) && ( local_446[sVar5 + 1] == '-' )) goto LAB_00100522;
                  bVar1 = true;
                  cVar9 = cVar9 + '\x01';
                  goto LAB_001005e0;
               }

            }

            if (cVar9 != '\0') {
               iVar4 = strip_eol(&local_448, &local_44c, param_2);
               if (bVar1) {
                  if (( b != (BIO*)0x0 ) && ( iVar2 = iVar2 == 0 )) goto LAB_001005b8;
                  pBVar7 = BIO_s_mem();
                  b = BIO_new(pBVar7);
                  if (b == (BIO*)0x0) goto LAB_001005c0;
                  BIO_ctrl(b, 0x82, 0, (void*)0x0);
               }
 else if (local_460 != 0) {
                  if (( param_2 & 0x880 ) == 0x80) {
                     BIO_write(b, &_LC1, 1);
                  }
 else {
                     BIO_write(b, &_LC2, 2);
                  }

               }

               if (0 < local_44c) {
                  BIO_write(b, &local_448, local_44c);
               }

               bVar1 = false;
               local_460 = iVar4;
            }

            goto LAB_001005e0;
         }

      }
 else {
         sVar5 = (size_t)iVar4;
         while (local_44c = BIO_get_line(param_1, &local_448, 0x400),0 < local_44c) {
            if (( ( iVar4 + 1 < local_44c ) && ( local_448 == 0x2d2d ) ) && ( iVar2 = iVar2 == 0 )) {
               if (( local_446[sVar5] == '-' ) && ( local_446[sVar5 + 1] == '-' )) goto LAB_00100522;
               bVar1 = true;
               cVar9 = cVar9 + '\x01';
            }
 else if (cVar9 != '\0') {
               iVar2 = strip_eol(&local_448, &local_44c, param_2);
               if (bVar1) {
                  if (( b != (BIO*)0x0 ) && ( iVar3 = iVar3 == 0 )) break;
                  pBVar7 = BIO_s_mem();
                  b = BIO_new(pBVar7);
                  if (b == (BIO*)0x0) goto LAB_001005c0;
                  BIO_ctrl(b, 0x82, 0, (void*)0x0);
               }
 else if (local_460 != 0) {
                  if (( param_2 & 0x880 ) == 0x80) {
                     BIO_write(b, &_LC1, 1);
                  }
 else {
                     BIO_write(b, &_LC2, 2);
                  }

               }

               if (0 < local_44c) {
                  BIO_write(b, &local_448, local_44c);
               }

               bVar1 = false;
               local_460 = iVar2;
            }

         }
;
      }

      goto LAB_001005b8;
   }

   goto LAB_001005c0;
   LAB_00100522:iVar4 = OPENSSL_sk_push(lVar6, b);
   uVar8 = 1;
   if (iVar4 != 0) goto LAB_0010053a;
   LAB_001005b8:BIO_free(b);
   LAB_001005c0:uVar8 = 0;
   LAB_0010053a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
void mime_hdr_addparam_isra_0(long param_1, char *param_2, char *param_3) {
   undefined8 uVar1;
   char *pcVar2;
   char cVar3;
   int iVar4;
   undefined8 *ptr;
   if (param_2 != (char*)0x0) {
      param_2 = CRYPTO_strdup(param_2, "crypto/asn1/asn_mime.c", 0x380);
      if (param_2 == (char*)0x0) {
         ptr = (undefined8*)0x0;
         param_3 = (char*)0x0;
         goto LAB_00100820;
      }

      cVar3 = *param_2;
      pcVar2 = param_2;
      while (cVar3 != '\0') {
         cVar3 = ossl_tolower();
         *pcVar2 = cVar3;
         cVar3 = pcVar2[1];
         pcVar2 = pcVar2 + 1;
      }
;
   }

   if (( param_3 == (char*)0x0 ) || ( param_3 = CRYPTO_strdup(param_3, "crypto/asn1/asn_mime.c", 0x387) ),param_3 != (char*)0x0) {
      ptr = (undefined8*)CRYPTO_malloc(0x10, "crypto/asn1/asn_mime.c", 0x38c);
      if (ptr != (undefined8*)0x0) {
         *ptr = param_2;
         uVar1 = *(undefined8*)( param_1 + 0x10 );
         ptr[1] = param_3;
         iVar4 = OPENSSL_sk_push(uVar1, ptr);
         if (iVar4 != 0) {
            return;
         }

      }

   }
 else {
      ptr = (undefined8*)0x0;
   }

   LAB_00100820:CRYPTO_free(param_2);
   CRYPTO_free(param_3);
   CRYPTO_free(ptr);
   return;
}
void mime_hdr_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      CRYPTO_free((void*)*param_1);
      CRYPTO_free((void*)param_1[1]);
      if (param_1[2] != 0) {
         OPENSSL_sk_pop_free(param_1[2], mime_param_free);
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
long mime_parse_hdr(BIO *param_1) {
   char cVar1;
   char cVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   undefined8 *ptr;
   long lVar6;
   size_t sVar7;
   char *pcVar8;
   char *pcVar9;
   char *__s;
   char *pcVar10;
   long in_FS_OFFSET;
   long local_460;
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_460 = OPENSSL_sk_new(mime_hdr_cmp);
   if (local_460 != 0) {
      ptr = (undefined8*)0x0;
      LAB_00100930:iVar4 = BIO_gets(param_1, local_448, 0x400);
      if (0 < iVar4) {
         if (( ptr == (undefined8*)0x0 ) || ( iVar4 = iVar4 == 0 )) {
            iVar4 = 1;
         }
 else {
            iVar4 = 3;
         }

         if (local_448[0] != '\0') {
            __s = (char*)0x0;
            pcVar9 = local_448;
            pcVar10 = local_448;
            cVar3 = local_448[0];
            LAB_00100987:if (( cVar3 != '\r' ) && ( cVar3 != '\n' )) {
               pcVar8 = pcVar9;
               /* WARNING: Could not find normalized switch variable to match jumptable */
               switch (iVar4) {
                  default:
            break;
                  case 1:
            while (pcVar9 = pcVar8 + 1, cVar3 != ':') {
              cVar3 = *pcVar9;
              if (((cVar3 == '\0') || (cVar3 == '\r')) || (pcVar8 = pcVar9, cVar3 == '\n'))
              goto LAB_00100e40;
            }
            *pcVar8 = '\0';
            cVar3 = *pcVar10;
            __s = pcVar10;
            while (cVar3 != '\0') {
              if (cVar3 == '\"') {
                if (__s[1] != '\0') {
                  __s = __s + 1;
LAB_00100c7d:
                  sVar7 = strlen(__s);
                  pcVar10 = __s + (sVar7 - 1);
                  if (__s <= pcVar10) goto LAB_00100cb7;
                }
                break;
              }
              iVar4 = ossl_ctype_check((int)cVar3,8);
              if (iVar4 == 0) goto LAB_00100c7d;
              pcVar10 = __s + 1;
              __s = __s + 1;
              cVar3 = *pcVar10;
            }
            goto LAB_00101060;
                  case 2:
            goto switchD_001009a9_caseD_2;
                  case 3:
            __s = pcVar10;
            goto joined_r0x00100b45;
               }

               goto LAB_001011a0;
            }

            goto LAB_00100ee2;
         }

      }

      goto LAB_00100e4d;
   }

   LAB_00100dc3:local_460 = 0;
   LAB_00100dcc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_460;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar10, 8);
      if (iVar4 == 0) goto LAB_00100cd5;
      *pcVar10 = '\0';
      pcVar10 = pcVar10 + -1;
      if (pcVar10 < __s) break;
      LAB_00100cb7:if (*pcVar10 == '\"') {
         if (__s != pcVar10 + -1) {
            *pcVar10 = '\0';
            goto LAB_00100cd5;
         }

         break;
      }

   }
;
   LAB_00101060:__s = (char*)0x0;
   LAB_00100cd5:cVar3 = *pcVar9;
   pcVar10 = pcVar9;
   if (( ( cVar3 == '\0' ) || ( cVar3 == '\n' ) ) || ( cVar3 == '\r' )) goto LAB_00100d30;
   switchD_001009a9_caseD_2:while (cVar3 != ';') {
      pcVar9 = pcVar9 + 1;
      if (cVar3 == '(') {
         cVar3 = *pcVar9;
         if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( cVar3 == '\n' )) goto LAB_00100e40;
         iVar4 = 2;
         goto LAB_00100ea0;
      }

      cVar3 = *pcVar9;
      if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( cVar3 == '\n' )) goto LAB_00100d30;
   }
;
   *pcVar9 = '\0';
   cVar3 = *pcVar10;
   while (cVar3 != '\0') {
      if (cVar3 == '\"') {
         if (pcVar10[1] != '\0') {
            pcVar10 = pcVar10 + 1;
            LAB_00100f85:sVar7 = strlen(pcVar10);
            pcVar8 = pcVar10 + ( sVar7 - 1 );
            if (pcVar10 <= pcVar8) goto LAB_00100fbf;
         }

         break;
      }

      iVar4 = ossl_ctype_check((int)cVar3, 8);
      if (iVar4 == 0) goto LAB_00100f85;
      pcVar8 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar8;
   }
;
   LAB_00101080:pcVar10 = (char*)0x0;
   LAB_00100fda:ptr = (undefined8*)mime_hdr_new(__s, pcVar10);
   if (ptr != (undefined8*)0x0) {
      iVar4 = OPENSSL_sk_push(local_460, ptr);
      if (iVar4 != 0) {
         cVar3 = pcVar9[1];
         pcVar9 = pcVar9 + 1;
         if (cVar3 != '\0') {
            LAB_00100b29:if (( cVar3 != '\r' ) && ( __s = cVar3 != '\n' )) {
               joined_r0x00100b45:while (pcVar10 = pcVar9 + 1,cVar3 != '=') {
                  cVar3 = *pcVar10;
                  pcVar9 = pcVar10;
                  if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( cVar3 == '\n' )) goto LAB_00100e40;
               }
;
               *pcVar9 = '\0';
               cVar3 = *__s;
               while (cVar3 != '\0') {
                  if (cVar3 == '\"') {
                     if (__s[1] != '\0') {
                        __s = __s + 1;
                        LAB_00100bb7:sVar7 = strlen(__s);
                        pcVar9 = __s + ( sVar7 - 1 );
                        if (__s <= pcVar9) goto LAB_00100bee;
                     }

                     break;
                  }

                  iVar4 = ossl_ctype_check((int)cVar3, 8);
                  if (iVar4 == 0) goto LAB_00100bb7;
                  pcVar9 = __s + 1;
                  __s = __s + 1;
                  cVar3 = *pcVar9;
               }
;
               goto LAB_00101050;
            }

         }

         goto LAB_00100e40;
      }

      goto LAB_00100d64;
   }

   goto LAB_00100db2;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar8, 8);
      if (iVar4 == 0) goto LAB_00100fda;
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
      if (pcVar8 < pcVar10) break;
      LAB_00100fbf:if (*pcVar8 == '\"') {
         if (pcVar10 != pcVar8 + -1) {
            *pcVar8 = '\0';
            goto LAB_00100fda;
         }

         break;
      }

   }
;
   goto LAB_00101080;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar9, 8);
      if (iVar4 == 0) goto LAB_00100c07;
      *pcVar9 = '\0';
      pcVar9 = pcVar9 + -1;
      if (pcVar9 < __s) break;
      LAB_00100bee:if (*pcVar9 == '\"') {
         if (__s != pcVar9 + -1) {
            *pcVar9 = '\0';
            goto LAB_00100c07;
         }

         break;
      }

   }
;
   LAB_00101050:__s = (char*)0x0;
   LAB_00100c07:cVar3 = *pcVar10;
   pcVar9 = pcVar10;
   if (( cVar3 != '\0' ) && ( cVar3 != '\r' )) {
      while (pcVar8 = pcVar9,cVar3 != '\n') {
         while (true) {
            pcVar9 = pcVar8 + 1;
            if (cVar3 == ';') {
               *pcVar8 = '\0';
               cVar3 = *pcVar10;
               goto joined_r0x00100a7e;
            }

            if (cVar3 == '\"') break;
            if (cVar3 == '(') {
               cVar3 = *pcVar9;
               if (( ( cVar3 == '\0' ) || ( cVar3 == '\n' ) ) || ( cVar3 == '\r' )) goto LAB_00100e40;
               iVar4 = 4;
               goto LAB_00100ea0;
            }

            cVar3 = *pcVar9;
            if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( pcVar8 = cVar3 == '\n' )) goto LAB_00100e20;
         }
;
         cVar1 = *pcVar9;
         if (( ( cVar1 == '\0' ) || ( cVar1 == '\r' ) ) || ( cVar1 == '\n' )) goto LAB_00100e40;
         pcVar9 = pcVar9 + 1;
         cVar2 = *pcVar9;
         while (cVar3 = cVar2,cVar1 != '\"') {
            if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( cVar3 == '\n' )) goto LAB_00100e40;
            pcVar9 = pcVar9 + 1;
            cVar2 = *pcVar9;
            cVar1 = cVar3;
         }
;
         if (( cVar3 == '\0' ) || ( cVar3 == '\r' )) break;
      }
;
   }

   goto LAB_00100e20;
   joined_r0x00100a7e:if (cVar3 == '\0') goto LAB_00101070;
   if (cVar3 == '\"') {
      if (pcVar10[1] != '\0') {
         pcVar10 = pcVar10 + 1;
         LAB_00100abd:sVar7 = strlen(pcVar10);
         pcVar8 = pcVar10 + ( sVar7 - 1 );
         if (pcVar10 <= pcVar8) goto LAB_00100af6;
      }

      goto LAB_00101070;
   }

   iVar4 = ossl_ctype_check((int)cVar3, 8);
   if (iVar4 == 0) goto LAB_00100abd;
   cVar3 = pcVar10[1];
   pcVar10 = pcVar10 + 1;
   goto joined_r0x00100a7e;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar8, 8);
      if (iVar4 == 0) goto LAB_00100b0f;
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
      if (pcVar8 < pcVar10) break;
      LAB_00100af6:if (*pcVar8 == '\"') {
         if (pcVar10 != pcVar8 + -1) {
            *pcVar8 = '\0';
            goto LAB_00100b0f;
         }

         break;
      }

   }
;
   LAB_00101070:pcVar10 = (char*)0x0;
   LAB_00100b0f:mime_hdr_addparam_isra_0(ptr, __s, pcVar10);
   cVar3 = *pcVar9;
   if (cVar3 == '\0') goto LAB_00100e40;
   goto LAB_00100b29;
   LAB_00100ea0:pcVar9 = pcVar9 + 1;
   if (cVar3 == ')') goto LAB_00100ed0;
   cVar3 = *pcVar9;
   if (( ( cVar3 == '\0' ) || ( cVar3 == '\r' ) ) || ( cVar3 == '\n' )) goto LAB_00100e40;
   goto LAB_00100ea0;
   LAB_00100ed0:cVar3 = *pcVar9;
   if (cVar3 == '\0') goto LAB_00100ee2;
   goto LAB_00100987;
   while (cVar3 != '\r') {
      LAB_001011a0:cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
      if (( cVar3 == '\0' ) || ( cVar3 == '\n' )) break;
   }
;
   LAB_00100ee2:if (iVar4 == 2) {
      LAB_00100d30:do {
         cVar3 = *pcVar10;
         if (cVar3 == '\0') goto LAB_00100d39;
         if (cVar3 == '\"') {
            if (pcVar10[1] != '\0') {
               pcVar10 = pcVar10 + 1;
               LAB_00101097:sVar7 = strlen(pcVar10);
               pcVar8 = pcVar10 + ( sVar7 - 1 );
               if (pcVar10 <= pcVar8) goto LAB_001010d2;
            }

            goto LAB_00100d39;
         }

         iVar4 = ossl_ctype_check((int)cVar3, 8);
         if (iVar4 == 0) goto LAB_00101097;
         pcVar10 = pcVar10 + 1;
      }
 while ( true );
   }

   if (iVar4 == 4) {
      LAB_00100e20:do {
         cVar3 = *pcVar10;
         if (cVar3 == '\0') goto LAB_00100e29;
         if (cVar3 == '\"') {
            if (pcVar10[1] != '\0') {
               pcVar10 = pcVar10 + 1;
               LAB_001010ff:sVar7 = strlen(pcVar10);
               pcVar8 = pcVar10 + ( sVar7 - 1 );
               if (pcVar10 <= pcVar8) goto LAB_00101142;
            }

            goto LAB_00100e29;
         }

         iVar4 = ossl_ctype_check((int)cVar3, 8);
         if (iVar4 == 0) goto LAB_001010ff;
         pcVar10 = pcVar10 + 1;
      }
 while ( true );
   }

   goto LAB_00100e40;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar8, 8);
      if (iVar4 == 0) goto LAB_00100d3c;
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
      if (pcVar8 < pcVar10) break;
      LAB_001010d2:if (*pcVar8 == '\"') {
         if (pcVar10 != pcVar8 + -1) {
            *pcVar8 = '\0';
            goto LAB_00100d3c;
         }

         break;
      }

   }
;
   LAB_00100d39:pcVar10 = (char*)0x0;
   LAB_00100d3c:ptr = (undefined8*)mime_hdr_new(__s, pcVar10);
   if (ptr != (undefined8*)0x0) {
      iVar4 = OPENSSL_sk_push(local_460, ptr);
      if (iVar4 != 0) goto LAB_00100e40;
      LAB_00100d64:CRYPTO_free((void*)*ptr);
      CRYPTO_free((void*)ptr[1]);
      if (ptr[2] != 0) {
         OPENSSL_sk_pop_free(ptr[2], mime_param_free);
      }

      CRYPTO_free(ptr);
   }

   LAB_00100db2:OPENSSL_sk_pop_free(local_460, mime_hdr_free);
   goto LAB_00100dc3;
   while (true) {
      iVar4 = ossl_ctype_check((int)*pcVar8, 8);
      if (iVar4 == 0) goto LAB_00100e2c;
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
      if (pcVar8 < pcVar10) break;
      LAB_00101142:if (*pcVar8 == '\"') {
         if (pcVar10 != pcVar8 + -1) {
            *pcVar8 = '\0';
            goto LAB_00100e2c;
         }

         break;
      }

   }
;
   LAB_00100e29:pcVar10 = (char*)0x0;
   LAB_00100e2c:mime_hdr_addparam_isra_0(ptr, __s, pcVar10);
   LAB_00100e40:if (pcVar9 == local_448) goto LAB_00100e4d;
   goto LAB_00100930;
   LAB_00100e4d:OPENSSL_sk_sort(local_460);
   for (iVar4 = 0; iVar5 = OPENSSL_sk_num(local_460),iVar4 < iVar5; iVar4 = iVar4 + 1) {
      lVar6 = OPENSSL_sk_value(local_460, iVar4);
      if (( lVar6 != 0 ) && ( *(long*)( lVar6 + 0x10 ) != 0 )) {
         OPENSSL_sk_sort();
      }

   }

   goto LAB_00100dcc;
}
long SMIME_read_ASN1_ex(undefined8 param_1, undefined4 param_2, undefined8 *param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   char *pcVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   BIO *a;
   undefined8 uVar8;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   if (param_3 != (undefined8*)0x0) {
      *param_3 = 0;
   }

   lVar5 = mime_parse_hdr(param_1);
   if (lVar5 == 0) {
      ERR_new();
      lVar7 = 0;
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x19f, "SMIME_read_ASN1_ex");
      ERR_set_error(0xd, 0xcf, 0);
      goto LAB_001012fd;
   }

   local_50 = 0;
   local_58 = "content-type";
   local_48 = 0;
   uVar3 = OPENSSL_sk_find(lVar5, &local_58);
   lVar6 = OPENSSL_sk_value(lVar5, uVar3);
   if (( lVar6 == 0 ) || ( pcVar1 = *(char**)( lVar6 + 8 ) ),pcVar1 == (char*)0x0) {
      lVar7 = 0;
      OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x1a6, "SMIME_read_ASN1_ex");
      ERR_set_error(0xd, 0xd1, 0);
      goto LAB_001012fd;
   }

   iVar4 = strcmp(pcVar1, "multipart/signed");
   if (iVar4 != 0) {
      iVar4 = strcmp(pcVar1, "application/x-pkcs7-mime");
      if (iVar4 != 0) {
         iVar4 = strcmp(pcVar1, "application/pkcs7-mime");
         if (iVar4 != 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/asn_mime.c", 0x1ed, "SMIME_read_ASN1_ex");
            lVar7 = 0;
            ERR_set_error(0xd, 0xcd, "type: %s", *(undefined8*)( lVar6 + 8 ));
            OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
            goto LAB_001012fd;
         }

      }

      OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
      lVar7 = b64_read_asn1(param_1, param_4, param_5, param_6, param_7);
      if (lVar7 == 0) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x1f6, "SMIME_read_ASN1_ex");
         ERR_set_error(0xd, 0xcb, 0);
      }

      goto LAB_001012fd;
   }

   local_50 = 0;
   local_58 = "boundary";
   uVar3 = OPENSSL_sk_find(*(undefined8*)( lVar6 + 0x10 ), &local_58);
   lVar7 = OPENSSL_sk_value(*(undefined8*)( lVar6 + 0x10 ), uVar3);
   if (( lVar7 == 0 ) || ( *(long*)( lVar7 + 8 ) == 0 )) {
      lVar7 = 0;
      OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x1b1, "SMIME_read_ASN1_ex");
      ERR_set_error(0xd, 0xd3, 0);
      goto LAB_001012fd;
   }

   iVar4 = multi_split_constprop_0(param_1, param_2, *(long*)( lVar7 + 8 ), &local_60);
   OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
   uVar2 = local_60;
   if (iVar4 == 0) {
      LAB_001014b0:ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x1b7, "SMIME_read_ASN1_ex");
      uVar8 = 0xd2;
   }
 else {
      iVar4 = OPENSSL_sk_num(local_60);
      if (iVar4 != 2) goto LAB_001014b0;
      a = (BIO*)OPENSSL_sk_value(uVar2, 1);
      lVar5 = mime_parse_hdr(a);
      if (lVar5 == 0) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x1c0, "SMIME_read_ASN1_ex");
         uVar8 = 0xd0;
      }
 else {
         local_58 = "content-type";
         local_50 = 0;
         local_48 = 0;
         uVar3 = OPENSSL_sk_find(lVar5, &local_58);
         lVar7 = OPENSSL_sk_value(lVar5, uVar3);
         if (( lVar7 == 0 ) || ( pcVar1 = *(char**)( lVar7 + 8 ) ),pcVar1 == (char*)0x0) {
            OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
            ERR_new();
            ERR_set_debug("crypto/asn1/asn_mime.c", 0x1ca, "SMIME_read_ASN1_ex");
            uVar8 = 0xd4;
         }
 else {
            iVar4 = strcmp(pcVar1, "application/x-pkcs7-signature");
            if (iVar4 != 0) {
               iVar4 = strcmp(pcVar1, "application/pkcs7-signature");
               if (iVar4 != 0) {
                  ERR_new();
                  ERR_set_debug("crypto/asn1/asn_mime.c", 0x1d1, "SMIME_read_ASN1_ex");
                  ERR_set_error(0xd, 0xd5, "type: %s", *(undefined8*)( lVar7 + 8 ));
                  lVar7 = 0;
                  OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
                  OPENSSL_sk_pop_free(uVar2, &BIO_vfree);
                  goto LAB_001012fd;
               }

            }

            OPENSSL_sk_pop_free(lVar5, mime_hdr_free);
            lVar7 = b64_read_asn1(a, param_4, param_5, param_6, param_7);
            if (lVar7 != 0) {
               if (param_3 == (undefined8*)0x0) {
                  OPENSSL_sk_pop_free(uVar2, &BIO_vfree);
               }
 else {
                  uVar8 = OPENSSL_sk_value(uVar2, 0);
                  *param_3 = uVar8;
                  BIO_free(a);
                  OPENSSL_sk_free(uVar2);
               }

               goto LAB_001012fd;
            }

            ERR_new();
            ERR_set_debug("crypto/asn1/asn_mime.c", 0x1da, "SMIME_read_ASN1_ex");
            uVar8 = 0xcc;
         }

      }

   }

   lVar7 = 0;
   ERR_set_error(0xd, uVar8, 0);
   OPENSSL_sk_pop_free(uVar2, &BIO_vfree);
   LAB_001012fd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ASN1_VALUE *SMIME_read_ASN1(BIO *bio, BIO **bcont, ASN1_ITEM *it) {
   ASN1_VALUE *pAVar1;
   pAVar1 = (ASN1_VALUE*)SMIME_read_ASN1_ex(bio, 0, bcont, it, 0, 0, 0);
   return pAVar1;
}
int SMIME_crlf_copy(BIO *in, BIO *out, int flags) {
   int len;
   char cVar1;
   uint uVar2;
   BIO_METHOD *type;
   BIO *b;
   BIO *b_00;
   long lVar3;
   int iVar4;
   int iVar5;
   long in_FS_OFFSET;
   int local_44c;
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( in == (BIO*)0x0 ) || ( out == (BIO*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x20b, "SMIME_crlf_copy");
      ERR_set_error(0xd, 0xc0102, 0);
      uVar2 = 0;
   }
 else {
      type = BIO_f_buffer();
      b = BIO_new(type);
      if (b == (BIO*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x215, "SMIME_crlf_copy");
         ERR_set_error(0xd, 0x80020, 0);
         uVar2 = 0;
      }
 else {
         b_00 = BIO_push(b, out);
         if (( flags & 0x80U ) == 0) {
            if (( flags & 1U ) != 0) {
               BIO_printf(b_00, "Content-Type: text/plain\r\n\r\n");
            }

            iVar5 = 0;
            while (local_44c = BIO_gets(in, local_448, 0x400),0 < local_44c) {
               cVar1 = strip_eol(local_448, &local_44c, flags);
               len = local_44c;
               if (local_44c < 1) {
                  if (( flags & 0x80000U ) == 0) goto joined_r0x0010195d;
                  iVar5 = iVar5 + 1;
               }
 else {
                  if (( flags & 0x80000U ) != 0) {
                     iVar4 = 0;
                     if (0 < iVar5) {
                        do {
                           iVar4 = iVar4 + 1;
                           BIO_write(b_00, &_LC2, 2);
                        }
 while ( iVar5 != iVar4 );
                     }

                     iVar5 = 0;
                  }

                  BIO_write(b_00, local_448, len);
                  joined_r0x0010195d:if (cVar1 != '\0') {
                     BIO_write(b_00, &_LC2, 2);
                  }

               }

            }
;
         }
 else {
            while (local_44c = BIO_read(in, local_448, 0x400),0 < local_44c) {
               BIO_write(b_00, local_448, local_44c);
            }
;
         }

         lVar3 = BIO_ctrl(b_00, 0xb, 0, (void*)0x0);
         BIO_pop(b_00);
         BIO_free(b);
         uVar2 = ( uint )(0 < (int)lVar3);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
int i2d_ASN1_bio_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags, ASN1_ITEM *it) {
   int iVar1;
   BIO *out_00;
   BIO *pBVar2;
   uint uVar3;
   if (( flags & 0x1000U ) != 0) {
      out_00 = BIO_new_NDEF(out, val, it);
      if (out_00 == (BIO*)0x0) {
         ERR_new();
         uVar3 = 0;
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x4f, "i2d_ASN1_bio_stream");
         ERR_set_error(0xd, 0x80007, 0);
      }
 else {
         iVar1 = SMIME_crlf_copy(in, out_00, flags);
         uVar3 = ( uint )(iVar1 != 0);
         BIO_ctrl(out_00, 0xb, 0, (void*)0x0);
         do {
            pBVar2 = BIO_pop(out_00);
            BIO_free(out_00);
            out_00 = pBVar2;
         }
 while ( out != pBVar2 );
      }

      return uVar3;
   }

   iVar1 = ASN1_item_i2d_bio(it, out, val);
   return iVar1;
}
int PEM_write_bio_ASN1_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags, char *hdr, ASN1_ITEM *it) {
   int iVar1;
   BIO_METHOD *type;
   BIO *b;
   BIO *out_00;
   BIO_printf(out, "-----BEGIN %s-----\n", hdr);
   type = BIO_f_base64();
   b = BIO_new(type);
   if (b == (BIO*)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x70, "B64_write_ASN1");
      ERR_set_error(0xd, 0x80020, 0);
   }
 else {
      out_00 = BIO_push(b, out);
      iVar1 = i2d_ASN1_bio_stream(out_00, val, in, flags, it);
      BIO_ctrl(out_00, 0xb, 0, (void*)0x0);
      BIO_pop(out_00);
      BIO_free(b);
   }

   BIO_printf(out, "-----END %s-----\n", hdr);
   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 SMIME_write_ASN1_ex(BIO *param_1, ASN1_VALUE *param_2, BIO *param_3, uint param_4, int param_5, int param_6, undefined8 param_7, ASN1_ITEM *param_8, undefined8 param_9) {
   void *pvVar1;
   bool bVar2;
   bool bVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   char *pcVar8;
   undefined8 *puVar9;
   EVP_MD *pEVar10;
   BIO_METHOD *pBVar11;
   BIO *pBVar12;
   BIO *pBVar13;
   undefined8 uVar14;
   undefined *puVar15;
   int iVar16;
   char *pcVar17;
   char *pcVar18;
   long in_FS_OFFSET;
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   ASN1_VALUE *local_90;
   BIO *local_88;
   BIO *local_80;
   undefined8 local_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48;
   long local_40;
   puVar15 = &_LC1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar8 = "application/x-pkcs7-";
   if (( param_4 & 0x400 ) == 0) {
      pcVar8 = "application/pkcs7-";
   }

   if (( param_4 & 0x800 ) != 0) {
      puVar15 = &_LC2;
   }

   if (( ( param_4 & 0x40 ) == 0 ) || ( param_3 == (BIO*)0x0 )) {
      if (param_5 == 0x17) {
         pcVar18 = "enveloped-data";
         pcVar17 = "smime.p7m";
         LAB_00102056:BIO_printf(param_1, "MIME-Version: 1.0%s", puVar15);
         BIO_printf(param_1, "Content-Disposition: attachment;");
         BIO_printf(param_1, " filename=\"%s\"%s", pcVar17, puVar15);
         BIO_printf(param_1, "Content-Type: %smime;", pcVar8);
         BIO_printf(param_1, " smime-type=%s;", pcVar18);
      }
 else {
         if (param_5 == 0x423) {
            pcVar18 = "authEnveloped-data";
            pcVar17 = "smime.p7m";
            goto LAB_00102056;
         }

         if (param_5 == 0x16) {
            pcVar18 = "signed-receipt";
            pcVar17 = "smime.p7m";
            if (param_6 != 0xcc) {
               pcVar18 = "certs-only";
               iVar6 = OPENSSL_sk_num(param_7);
               if (-1 < iVar6) {
                  pcVar18 = "signed-data";
               }

            }

            goto LAB_00102056;
         }

         if (param_5 == 0x312) {
            pcVar18 = "compressed-data";
            pcVar17 = "smime.p7z";
            goto LAB_00102056;
         }

         BIO_printf(param_1, "MIME-Version: 1.0%s", puVar15);
         pcVar17 = "smime.p7m";
         BIO_printf(param_1, "Content-Disposition: attachment;");
         BIO_printf(param_1, " filename=\"%s\"%s", "smime.p7m", puVar15);
         BIO_printf(param_1, "Content-Type: %smime;", pcVar8);
      }

      BIO_printf(param_1, " name=\"%s\"%s", pcVar17, puVar15);
      BIO_printf(param_1, "Content-Transfer-Encoding: base64%s%s", puVar15, puVar15);
      pBVar11 = BIO_f_base64();
      pBVar12 = BIO_new(pBVar11);
      if (pBVar12 == (BIO*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x70, "B64_write_ASN1");
         ERR_set_error(0xd, 0x80020, 0);
      }
 else {
         pBVar13 = BIO_push(pBVar12, param_1);
         iVar6 = i2d_ASN1_bio_stream(pBVar13, param_2, param_3, param_4, param_8);
         BIO_ctrl(pBVar13, 0xb, 0, (void*)0x0);
         BIO_pop(pBVar13);
         BIO_free(pBVar12);
         if (iVar6 != 0) {
            BIO_printf(param_1, "%s", puVar15);
            goto LAB_0010216b;
         }

      }

   }
 else {
      iVar6 = RAND_bytes_ex(param_9, local_68, 0x20, 0);
      if (0 < iVar6) {
         iVar16 = 0;
         local_68[0] = local_68[0] & _LC25;
         local_68[1] = local_68[1] & UNK_00102bb1;
         local_68[2] = local_68[2] & UNK_00102bb2;
         local_68[3] = local_68[3] & UNK_00102bb3;
         local_68[4] = local_68[4] & UNK_00102bb4;
         local_68[5] = local_68[5] & UNK_00102bb5;
         local_68[6] = local_68[6] & UNK_00102bb6;
         local_68[7] = local_68[7] & UNK_00102bb7;
         local_68[8] = local_68[8] & UNK_00102bb8;
         local_68[9] = local_68[9] & UNK_00102bb9;
         local_68[10] = local_68[10] & UNK_00102bba;
         local_68[0xb] = local_68[0xb] & UNK_00102bbb;
         local_68[0xc] = local_68[0xc] & UNK_00102bbc;
         local_68[0xd] = local_68[0xd] & UNK_00102bbd;
         local_68[0xe] = local_68[0xe] & UNK_00102bbe;
         local_68[0xf] = local_68[0xf] & UNK_00102bbf;
         local_58[0] = _LC25 & local_58[0];
         local_58[1] = UNK_00102bb1 & local_58[1];
         local_58[2] = UNK_00102bb2 & local_58[2];
         local_58[3] = UNK_00102bb3 & local_58[3];
         local_58[4] = UNK_00102bb4 & local_58[4];
         local_58[5] = UNK_00102bb5 & local_58[5];
         local_58[6] = UNK_00102bb6 & local_58[6];
         local_58[7] = UNK_00102bb7 & local_58[7];
         local_58[8] = UNK_00102bb8 & local_58[8];
         local_58[9] = UNK_00102bb9 & local_58[9];
         local_58[10] = UNK_00102bba & local_58[10];
         local_58[0xb] = UNK_00102bbb & local_58[0xb];
         local_58[0xc] = UNK_00102bbc & local_58[0xc];
         local_58[0xd] = UNK_00102bbd & local_58[0xd];
         local_58[0xe] = UNK_00102bbe & local_58[0xe];
         local_58[0xf] = UNK_00102bbf & local_58[0xf];
         local_48 = 0;
         auVar24[0] = local_68[0] + _LC27;
         auVar24[1] = local_68[1] + UNK_00102bd1;
         auVar24[2] = local_68[2] + UNK_00102bd2;
         auVar24[3] = local_68[3] + UNK_00102bd3;
         auVar24[4] = local_68[4] + UNK_00102bd4;
         auVar24[5] = local_68[5] + UNK_00102bd5;
         auVar24[6] = local_68[6] + UNK_00102bd6;
         auVar24[7] = local_68[7] + UNK_00102bd7;
         auVar24[8] = local_68[8] + UNK_00102bd8;
         auVar24[9] = local_68[9] + UNK_00102bd9;
         auVar24[10] = local_68[10] + UNK_00102bda;
         auVar24[0xb] = local_68[0xb] + UNK_00102bdb;
         auVar24[0xc] = local_68[0xc] + UNK_00102bdc;
         auVar24[0xd] = local_68[0xd] + UNK_00102bdd;
         auVar24[0xe] = local_68[0xe] + UNK_00102bde;
         auVar24[0xf] = local_68[0xf] + UNK_00102bdf;
         for (int i = 0; i < 16; i++) {
            auVar20[i] = -(SUB161(__LC26,0) < (char)local_68[0]);
         }

         auVar22[0] = _LC27 + local_58[0];
         auVar22[1] = UNK_00102bd1 + local_58[1];
         auVar22[2] = UNK_00102bd2 + local_58[2];
         auVar22[3] = UNK_00102bd3 + local_58[3];
         auVar22[4] = UNK_00102bd4 + local_58[4];
         auVar22[5] = UNK_00102bd5 + local_58[5];
         auVar22[6] = UNK_00102bd6 + local_58[6];
         auVar22[7] = UNK_00102bd7 + local_58[7];
         auVar22[8] = UNK_00102bd8 + local_58[8];
         auVar22[9] = UNK_00102bd9 + local_58[9];
         auVar22[10] = UNK_00102bda + local_58[10];
         auVar22[0xb] = UNK_00102bdb + local_58[0xb];
         auVar22[0xc] = UNK_00102bdc + local_58[0xc];
         auVar22[0xd] = UNK_00102bdd + local_58[0xd];
         auVar22[0xe] = UNK_00102bde + local_58[0xe];
         auVar22[0xf] = UNK_00102bdf + local_58[0xf];
         auVar23[0] = local_68[0] + _LC28;
         auVar23[1] = local_68[1] + UNK_00102be1;
         auVar23[2] = local_68[2] + UNK_00102be2;
         auVar23[3] = local_68[3] + UNK_00102be3;
         auVar23[4] = local_68[4] + UNK_00102be4;
         auVar23[5] = local_68[5] + UNK_00102be5;
         auVar23[6] = local_68[6] + UNK_00102be6;
         auVar23[7] = local_68[7] + UNK_00102be7;
         auVar23[8] = local_68[8] + UNK_00102be8;
         auVar23[9] = local_68[9] + UNK_00102be9;
         auVar23[10] = local_68[10] + UNK_00102bea;
         auVar23[0xb] = local_68[0xb] + UNK_00102beb;
         auVar23[0xc] = local_68[0xc] + UNK_00102bec;
         auVar23[0xd] = local_68[0xd] + UNK_00102bed;
         auVar23[0xe] = local_68[0xe] + UNK_00102bee;
         auVar23[0xf] = local_68[0xf] + UNK_00102bef;
         auVar21[0] = _LC28 + local_58[0];
         auVar21[1] = UNK_00102be1 + local_58[1];
         auVar21[2] = UNK_00102be2 + local_58[2];
         auVar21[3] = UNK_00102be3 + local_58[3];
         auVar21[4] = UNK_00102be4 + local_58[4];
         auVar21[5] = UNK_00102be5 + local_58[5];
         auVar21[6] = UNK_00102be6 + local_58[6];
         auVar21[7] = UNK_00102be7 + local_58[7];
         auVar21[8] = UNK_00102be8 + local_58[8];
         auVar21[9] = UNK_00102be9 + local_58[9];
         auVar21[10] = UNK_00102bea + local_58[10];
         auVar21[0xb] = UNK_00102beb + local_58[0xb];
         auVar21[0xc] = UNK_00102bec + local_58[0xc];
         auVar21[0xd] = UNK_00102bed + local_58[0xd];
         auVar21[0xe] = UNK_00102bee + local_58[0xe];
         auVar21[0xf] = UNK_00102bef + local_58[0xf];
         for (int i = 0; i < 16; i++) {
            auVar19[i] = -(SUB161(__LC26,0) < (char)local_58[0]);
         }

         local_68 = ~auVar20 & auVar24 | auVar23 & auVar20;
         local_58 = ~auVar19 & auVar22 | auVar21 & auVar19;
         BIO_printf(param_1, "MIME-Version: 1.0%s", puVar15);
         BIO_printf(param_1, "Content-Type: multipart/signed;");
         bVar2 = false;
         BIO_printf(param_1, " protocol=\"%ssignature\";", pcVar8);
         BIO_puts(param_1, " micalg=\"");
         bVar3 = false;
         iVar6 = OPENSSL_sk_num(param_7);
         if (0 < iVar6) {
            do {
               if (bVar2) {
                  BIO_write(param_1, &_LC33, 1);
               }

               puVar9 = (undefined8*)OPENSSL_sk_value(param_7, iVar16);
               iVar6 = OBJ_obj2nid((ASN1_OBJECT*)*puVar9);
               pcVar17 = OBJ_nid2sn(iVar6);
               pEVar10 = EVP_get_digestbyname(pcVar17);
               if (( pEVar10 == (EVP_MD*)0x0 ) || ( *(code**)pEVar10->required_pkey_type == (code*)0x0 )) {
                  LAB_00101ea3:if (iVar6 == 0x2a2) {
                     BIO_puts(param_1, "sha-512");
                     goto LAB_00101ef8;
                  }

                  if (iVar6 < 0x2a3) {
                     if (iVar6 == 0x2a0) {
                        BIO_puts(param_1, "sha-256");
                     }
 else if (iVar6 == 0x2a1) {
                        BIO_puts(param_1, "sha-384");
                     }
 else if (iVar6 == 4) {
                        BIO_puts(param_1, "md5");
                     }
 else {
                        if (iVar6 != 0x40) goto LAB_00102430;
                        BIO_puts(param_1, "sha1");
                     }

                     goto LAB_00101ef8;
                  }

                  if (iVar6 == 0x3d6) {
                     BIO_puts(param_1, "gostr3411-2012-256");
                     break;
                  }

                  if (iVar6 == 0x3d7) {
                     BIO_puts(param_1, "gostr3411-2012-512");
                     break;
                  }

                  if (iVar6 == 0x329) {
                     BIO_puts(param_1, "gostr3411-94");
                     break;
                  }

                  LAB_00102430:bVar2 = false;
                  if (!bVar3) {
                     bVar2 = true;
                     BIO_puts(param_1, "unknown");
                     bVar3 = true;
                  }

               }
 else {
                  iVar5 = ( **(code**)pEVar10->required_pkey_type )(0, 2, 0, &local_88);
                  if (iVar5 < 1) {
                     if (iVar5 == -2) goto LAB_00101ea3;
                     break;
                  }

                  BIO_puts(param_1, (char*)local_88);
                  CRYPTO_free(local_88);
                  LAB_00101ef8:bVar2 = true;
               }

               iVar16 = iVar16 + 1;
               iVar6 = OPENSSL_sk_num(param_7);
            }
 while ( iVar16 < iVar6 );
         }

         BIO_printf(param_1, "\"; boundary=\"----%s\"%s%s", local_68, puVar15, puVar15);
         BIO_printf(param_1, "This is an S/MIME signed message%s%s", puVar15, puVar15);
         BIO_printf(param_1, "------%s%s", local_68, puVar15);
         pvVar1 = param_8->funcs;
         local_90 = param_2;
         if (( param_4 & 0x8040 ) == 0x40) {
            if (( pvVar1 == (void*)0x0 ) || ( *(code**)( (long)pvVar1 + 0x18 ) == (code*)0x0 )) {
               ERR_new();
               ERR_set_debug("crypto/asn1/asn_mime.c", 0x168, "asn1_output_data");
               ERR_set_error(0xd, 0xca, 0);
               uVar14 = 0;
               goto LAB_00102170;
            }

            local_80 = (BIO*)0x0;
            local_78 = 0;
            local_88 = param_1;
            iVar6 = ( **(code**)( (long)pvVar1 + 0x18 ) )(0xc, &local_90, param_8, &local_88);
            if (iVar6 < 1) goto LAB_001021e8;
            iVar6 = SMIME_crlf_copy(param_3, local_80, param_4);
            iVar16 = ( **(code**)( (long)pvVar1 + 0x18 ) )(0xd, &local_90, param_8, &local_88);
            if (iVar16 < 1) {
               uVar4 = 0;
               if (param_1 == local_80) {
                  uVar14 = 0;
                  goto LAB_00102170;
               }

            }
 else {
               uVar7 = ( uint )(iVar6 != 0);
               uVar4 = ( uint )(iVar6 != 0);
               if (param_1 == local_80) goto LAB_001022e3;
            }

            do {
               uVar7 = uVar4;
               pBVar12 = BIO_pop(local_80);
               BIO_free(local_80);
               uVar4 = uVar7;
               local_80 = pBVar12;
            }
 while ( param_1 != pBVar12 );
         }
 else {
            uVar7 = SMIME_crlf_copy(param_3, param_1, param_4);
         }

         LAB_001022e3:if (uVar7 != 0) {
            BIO_printf(param_1, "%s------%s%s", puVar15, local_68, puVar15);
            BIO_printf(param_1, "Content-Type: %ssignature;", pcVar8);
            BIO_printf(param_1, " name=\"smime.p7s\"%s", puVar15);
            BIO_printf(param_1, "Content-Transfer-Encoding: base64%s", puVar15);
            BIO_printf(param_1, "Content-Disposition: attachment;");
            BIO_printf(param_1, " filename=\"smime.p7s\"%s%s", puVar15);
            pBVar11 = BIO_f_base64();
            pBVar12 = BIO_new(pBVar11);
            if (pBVar12 == (BIO*)0x0) {
               ERR_new();
               ERR_set_debug("crypto/asn1/asn_mime.c", 0x70, "B64_write_ASN1");
               ERR_set_error(0xd, 0x80020, 0);
            }
 else {
               pBVar13 = BIO_push(pBVar12, param_1);
               i2d_ASN1_bio_stream(pBVar13, param_2, (BIO*)0x0, 0, param_8);
               BIO_ctrl(pBVar13, 0xb, 0, (void*)0x0);
               BIO_pop(pBVar13);
               BIO_free(pBVar12);
            }

            BIO_printf(param_1, "%s------%s--%s%s", puVar15, local_68, puVar15, puVar15);
            LAB_0010216b:uVar14 = 1;
            goto LAB_00102170;
         }

      }

   }

   LAB_001021e8:uVar14 = 0;
   LAB_00102170:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar14;
}
int SMIME_write_ASN1(BIO *bio, ASN1_VALUE *val, BIO *data, int flags, int ctype_nid, int econt_nid, stack_st_X509_ALGOR *mdalgs, ASN1_ITEM *it) {
   int iVar1;
   iVar1 = SMIME_write_ASN1_ex();
   return iVar1;
}
int SMIME_text(BIO *in, BIO *out) {
   undefined4 uVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   char *local_1058;
   undefined8 local_1050;
   undefined8 local_1048;
   undefined1 local_1038[4104];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = mime_parse_hdr();
   if (lVar4 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c", 0x246, "SMIME_text");
      ERR_set_error(0xd, 0xcf, 0);
      uVar3 = 0;
   }
 else {
      local_1050 = 0;
      local_1058 = "content-type";
      local_1048 = 0;
      uVar1 = OPENSSL_sk_find(lVar4, &local_1058);
      lVar5 = OPENSSL_sk_value(lVar4, uVar1);
      if (( lVar5 == 0 ) || ( *(char**)( lVar5 + 8 ) == (char*)0x0 )) {
         ERR_new();
         ERR_set_debug("crypto/asn1/asn_mime.c", 0x24b, "SMIME_text");
         ERR_set_error(0xd, 0xce, 0);
         OPENSSL_sk_pop_free(lVar4, mime_hdr_free);
         uVar3 = 0;
      }
 else {
         iVar2 = strcmp(*(char**)( lVar5 + 8 ), "text/plain");
         if (iVar2 == 0) {
            OPENSSL_sk_pop_free(lVar4, mime_hdr_free);
            while (true) {
               iVar2 = BIO_read(in, local_1038, 0x1000);
               if (iVar2 < 1) break;
               BIO_write(out, local_1038, iVar2);
            }
;
            uVar3 = ( uint )(iVar2 == 0);
         }
 else {
            ERR_new();
            ERR_set_debug("crypto/asn1/asn_mime.c", 0x250, "SMIME_text");
            ERR_set_error(0xd, 0xcd, "type: %s", *(undefined8*)( lVar5 + 8 ));
            OPENSSL_sk_pop_free(lVar4, mime_hdr_free);
            uVar3 = 0;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

