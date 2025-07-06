undefined8 equal_nocase(char *param_1, ulong param_2, long param_3, ulong param_4, uint param_5) {
   char cVar1;
   ulong uVar2;
   char cVar3;
   char *pcVar4;
   if (( ( param_5 & 0x8000 ) == 0 ) || ( param_2 <= param_4 )) {
      if (param_4 == param_2) goto LAB_00100067;
   } else {
      pcVar4 = param_1 + ( param_2 - param_4 );
      do {
         if (( *param_1 == '\0' ) || ( ( ( param_5 >> 4 & 1 ) != 0 && ( *param_1 == '.' ) ) )) {
            if (param_4 != param_2) {
               return 0;
            }
            goto LAB_0010006c;
         }
         param_1 = param_1 + 1;
         param_2 = param_2 - 1;
      } while ( param_1 != pcVar4 );
      if (param_4 == param_2) {
         LAB_00100067:if (param_2 != 0) {
            LAB_0010006c:uVar2 = 0;
            do {
               cVar1 = param_1[uVar2];
               cVar3 = *(char*)( param_3 + uVar2 );
               if (cVar1 == '\0') {
                  return 0;
               }
               if (cVar1 != cVar3) {
                  if (( byte )(cVar1 + 0xbfU) < 0x1a) {
                     cVar1 = cVar1 + ' ';
                     if (( byte )(cVar3 + 0xbfU) < 0x1a) goto LAB_00100076;
                  } else {
                     if (0x19 < ( byte )(cVar3 + 0xbfU)) {
                        return 0;
                     }
                     LAB_00100076:cVar3 = cVar3 + ' ';
                  }
                  if (cVar3 != cVar1) {
                     return 0;
                  }
               }
               uVar2 = uVar2 + 1;
            } while ( uVar2 != param_2 );
         }
         return 1;
      }
   }
   return 0;
}void str_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void sk_strcmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}char *strip_spaces(char *param_1) {
   char cVar1;
   int iVar2;
   size_t sVar3;
   char *pcVar4;
   cVar1 = *param_1;
   while (true) {
      if (cVar1 == '\0') {
         return (char*)0x0;
      }
      iVar2 = ossl_ctype_check((int)cVar1, 8);
      if (iVar2 == 0) break;
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
   };
   if (*param_1 == '\0') {
      return (char*)0x0;
   }
   sVar3 = strlen(param_1);
   pcVar4 = param_1 + ( sVar3 - 1 );
   if (pcVar4 == param_1) {
      return param_1;
   }
   do {
      iVar2 = ossl_ctype_check((int)*pcVar4, 8);
      if (iVar2 == 0) {
         if (param_1 != pcVar4) {
            pcVar4[1] = '\0';
         }
         break;
      }
      pcVar4 = pcVar4 + -1;
   } while ( pcVar4 != param_1 );
   if (*param_1 == '\0') {
      return (char*)0x0;
   }
   return param_1;
}bool equal_case(char *param_1, size_t param_2, void *param_3, ulong param_4, uint param_5) {
   int iVar1;
   char *pcVar2;
   if (( ( param_5 & 0x8000 ) == 0 ) || ( param_2 <= param_4 )) {
      if (param_4 == param_2) {
         LAB_00100207:iVar1 = memcmp(param_1, param_3, param_2);
         return iVar1 == 0;
      }
   } else {
      pcVar2 = param_1 + ( param_2 - param_4 );
      do {
         if (( *param_1 == '\0' ) || ( ( ( param_5 >> 4 & 1 ) != 0 && ( *param_1 == '.' ) ) )) break;
         param_1 = param_1 + 1;
         param_2 = param_2 - 1;
      } while ( param_1 != pcVar2 );
      if (param_4 == param_2) goto LAB_00100207;
   }
   return false;
}undefined8 equal_wildcard(byte *param_1, long param_2, char *param_3, byte *param_4, uint param_5) {
   byte bVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   byte *pbVar7;
   byte *pbVar8;
   byte *pbVar9;
   uint uVar10;
   byte bVar11;
   bool bVar12;
   if (( ( (byte*)0x1 < param_4 ) && ( *param_3 == '.' ) ) || ( param_2 == 0 )) {
      switchD_001002a5_caseD_2b:uVar5 = equal_nocase(param_1, param_2, param_3, param_4, param_5);
      return uVar5;
   }
   iVar3 = 0;
   pbVar9 = (byte*)0x0;
   uVar10 = 1;
   bVar2 = false;
   lVar6 = 0;
   pbVar8 = param_1;
   do {
      bVar11 = *pbVar8;
      if (bVar11 < 0x5b) {
         if (bVar11 < 0x2a) goto switchD_001002a5_caseD_2b;
         switch (bVar11) {
            case 0x2a:
        bVar12 = true;
        if (param_2 + -1 != lVar6) {
          bVar12 = pbVar8[1] == 0x2e;
        }
        if ((pbVar9 != (byte *)0x0) || (iVar3 != 0 || bVar2)) goto switchD_001002a5_caseD_2b;
        if ((param_5 & 4) == 0) {
          if ((uVar10 & 1) == 0 && !bVar12) goto switchD_001002a5_caseD_2b;
        }
        else if ((uVar10 & 1) != 1 || !bVar12) goto switchD_001002a5_caseD_2b;
        uVar10 = uVar10 & 0xfffffffe;
        iVar3 = 0;
        pbVar9 = pbVar8;
        break;
            default:
        goto switchD_001002a5_caseD_2b;
            case 0x2d:
        if ((uVar10 & 1) != 0) goto switchD_001002a5_caseD_2b;
        uVar10 = uVar10 | 4;
        break;
            case 0x2e:
        if (uVar10 != 0) goto switchD_001002a5_caseD_2b;
        iVar3 = iVar3 + 1;
        uVar10 = 1;
        bVar2 = false;
        break;
            for (int i_2336 = 0; i_2336 < 10; i_2336++) {
               case 0x30:
            }
            for (int i_2335 = 0; i_2335 < 25; i_2335++) {
               case 0x41:
            }
            case 0x5a:
        goto switchD_001002a5_caseD_30;
         }
      } else {
         if (0x19 < ( byte )(bVar11 + 0x9f)) goto switchD_001002a5_caseD_2b;
         switchD_001002a5_caseD_30:if (( ( uVar10 & 1 ) != 0 ) && ( 3 < ( ulong )(param_2 - lVar6) )) {
            iVar4 = OPENSSL_strncasecmp(pbVar8, &_LC1, 4);
            if (iVar4 == 0) {
               bVar2 = true;
            }
         }
         uVar10 = 0;
      }
      lVar6 = lVar6 + 1;
      pbVar8 = pbVar8 + 1;
   } while ( param_2 != lVar6 );
   if (( iVar3 < 2 || pbVar9 == (byte*)0x0 ) || ( uVar10 != 0 )) goto switchD_001002a5_caseD_2b;
   lVar6 = (long)pbVar9 - (long)param_1;
   pbVar8 = param_1 + ( param_2 - (long)pbVar9 ) + -1;
   if (( param_4 < pbVar8 + lVar6 ) || ( iVar3 = equal_nocase(param_1, lVar6, param_3, lVar6, param_5) ),iVar3 == 0) {
      return 0;
   }
   pbVar7 = (byte*)( param_3 + ( (long)param_4 - (long)pbVar8 ) );
   iVar3 = equal_nocase(pbVar7, pbVar8, pbVar9 + 1, pbVar8, param_5);
   if (iVar3 == 0) {
      return 0;
   }
   pbVar8 = (byte*)( param_3 + lVar6 );
   if (( lVar6 == 0 ) && ( pbVar9[1] == 0x2e )) {
      if (pbVar8 == pbVar7) {
         return 0;
      }
      bVar11 = ( byte )(param_5 >> 3) & 1;
      if (pbVar7 != (byte*)( param_3 + 1 )) goto LAB_001003bd;
   } else {
      if (( (byte*)0x3 < param_4 ) && ( iVar3 = iVar3 == 0 )) {
         return 0;
      }
      bVar11 = 0;
      bVar1 = 0;
      if (pbVar7 != pbVar8 + 1) goto joined_r0x00100559;
   }
   bVar1 = bVar11;
   if (*pbVar8 == 0x2a) {
      return 1;
   }
   joined_r0x00100559:do {
      bVar11 = bVar1;
      if (pbVar8 == pbVar7) {
         return 1;
      }
      LAB_001003bd:bVar1 = *pbVar8;
      if (( ( 0x19 < ( byte )(( bVar1 & 0xdf ) + 0xbf) ) && ( 9 < ( byte )(bVar1 - 0x30) ) ) && ( bVar1 != 0x2d )) {
         if (bVar1 != 0x2e) {
            return 0;
         }
         if (bVar11 != 1) {
            return 0;
         }
      }
      pbVar8 = pbVar8 + 1;
      bVar1 = bVar11;
   } while ( true );
}int do_check_string(ASN1_STRING *param_1, int param_2, code *param_3, undefined4 param_4, void *param_5, size_t param_6, long *param_7) {
   uchar *__s1;
   bool bVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   uchar *local_38;
   long local_30;
   __s1 = param_1->data;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (__s1 == (uchar*)0x0) goto LAB_001005c8;
   iVar2 = param_1->length;
   if (iVar2 == 0) goto LAB_001005ca;
   if (param_2 < 1) {
      iVar3 = ASN1_STRING_to_UTF8(&local_38, param_1);
      if (-1 < iVar3) {
         iVar2 = ( *param_3 )(local_38, (long)iVar3, param_5, param_6, param_4);
         if (( 0 < iVar2 ) && ( param_7 != (long*)0x0 )) {
            lVar4 = CRYPTO_strndup(local_38, (long)iVar3, "crypto/x509/v3_utl.c", 0x361);
            *param_7 = lVar4;
            if (lVar4 == 0) {
               CRYPTO_free(local_38);
               goto LAB_001006cb;
            }
         }
         CRYPTO_free(local_38);
         goto LAB_001005ca;
      }
   } else {
      if (param_1->type != param_2) {
         LAB_001005c8:iVar2 = 0;
         goto LAB_001005ca;
      }
      if (param_2 == 0x16) {
         iVar2 = ( *param_3 )(__s1, (long)iVar2, param_5, param_6, param_4);
         bVar1 = 0 < iVar2;
      } else {
         if (iVar2 != (int)param_6) goto LAB_001005c8;
         iVar2 = 0;
         iVar3 = memcmp(__s1, param_5, param_6);
         if (iVar3 != 0) goto LAB_001005ca;
         bVar1 = true;
         iVar2 = 1;
      }
      if (( param_7 == (long*)0x0 ) || ( !bVar1 )) goto LAB_001005ca;
      lVar4 = CRYPTO_strndup(param_1->data, (long)param_1->length, "crypto/x509/v3_utl.c", 0x350);
      *param_7 = lVar4;
      if (lVar4 != 0) goto LAB_001005ca;
   }
   LAB_001006cb:iVar2 = -1;
   LAB_001005ca:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}ulong do_x509_check(X509 *param_1, char *param_2, ulong param_3, uint param_4, int param_5, undefined8 param_6) {
   bool bVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   GENERAL_NAMES *a;
   X509_NAME *name;
   X509_NAME_ENTRY *ne;
   ASN1_STRING *pAVar5;
   ulong uVar6;
   int *piVar7;
   undefined8 uVar8;
   uint uVar9;
   code *pcVar10;
   size_t local_60;
   undefined4 local_4c;
   int local_3c;
   uVar9 = param_4 & 0xffff7fff;
   local_60 = param_3;
   if (param_5 == 1) {
      local_4c = 0x16;
      pcVar10 = equal_email;
      local_3c = 0x30;
   } else {
      local_4c = 4;
      pcVar10 = equal_case;
      local_3c = 0;
      if (param_5 == 2) {
         param_4 = param_4 & 2;
         if (1 < param_3) {
            if (*param_2 == '.') {
               uVar9 = uVar9 | 0x8000;
               pcVar10 = equal_nocase;
               local_4c = 0x16;
               local_3c = 0xd;
               if (param_4 == 0) {
                  pcVar10 = equal_wildcard;
               }
            } else {
               pcVar10 = equal_wildcard;
               local_4c = 0x16;
               local_3c = 0xd;
               if (param_4 != 0) {
                  pcVar10 = equal_nocase;
               }
            }
            goto LAB_0010079f;
         }
         pcVar10 = equal_nocase;
         local_4c = 0x16;
         local_3c = 0xd;
         if (param_4 == 0) {
            pcVar10 = equal_wildcard;
         }
      }
   }
   if (param_3 == 0) {
      local_60 = strlen(param_2);
   }
   LAB_0010079f:a = (GENERAL_NAMES*)X509_get_ext_d2i(param_1, 0x55, (int*)0x0, (int*)0x0);
   if (a != (GENERAL_NAMES*)0x0) {
      bVar1 = false;
      iVar3 = 0;
      if (param_5 == 1) {
         iVar2 = OPENSSL_sk_num(a);
         if (0 < iVar2) {
            do {
               piVar7 = (int*)OPENSSL_sk_value(a, iVar3);
               if (*piVar7 == 0) {
                  iVar2 = OBJ_obj2nid((ASN1_OBJECT*)**(undefined8**)( piVar7 + 2 ));
                  if (( iVar2 == 0x4b8 ) && ( **(int**)( *(long*)( piVar7 + 2 ) + 8 ) == 0xc )) {
                     local_4c = 0;
                     uVar8 = *(undefined8*)( *(int**)( *(long*)( piVar7 + 2 ) + 8 ) + 2 );
                     LAB_001009f5:uVar4 = do_check_string(uVar8, local_4c, pcVar10, uVar9, param_2, local_60, param_6);
                     if (uVar4 != 0) {
                        LAB_00100a78:GENERAL_NAMES_free(a);
                        return (ulong)uVar4;
                     }
                     bVar1 = true;
                  }
               } else if (*piVar7 == 1) {
                  uVar8 = *(undefined8*)( piVar7 + 2 );
                  goto LAB_001009f5;
               }
               iVar3 = iVar3 + 1;
               iVar2 = OPENSSL_sk_num(a);
            } while ( iVar3 < iVar2 );
         }
      } else {
         for (; iVar2 = OPENSSL_sk_num(a),iVar3 < iVar2; iVar3 = iVar3 + 1) {
            piVar7 = (int*)OPENSSL_sk_value(a, iVar3);
            iVar2 = *piVar7;
            if (iVar2 == 2) {
               if (param_5 == 2) {
                  LAB_00100942:uVar4 = do_check_string(*(undefined8*)( piVar7 + 2 ), local_4c, pcVar10, uVar9, param_2, local_60, param_6);
                  if (uVar4 != 0) goto LAB_00100a78;
                  bVar1 = true;
               }
            } else if (iVar2 == 7) {
               if (param_5 == 7) goto LAB_00100942;
            } else if (iVar2 == 0) {
               OBJ_obj2nid((ASN1_OBJECT*)**(undefined8**)( piVar7 + 2 ));
            }
         }
      }
      GENERAL_NAMES_free(a);
      if (( bVar1 ) && ( ( uVar9 & 1 ) == 0 )) {
         return 0;
      }
   }
   if (( local_3c != 0 ) && ( ( uVar9 & 0x20 ) == 0 )) {
      name = X509_get_subject_name(param_1);
      iVar3 = -1;
      while (iVar3 = X509_NAME_get_index_by_NID(name, local_3c, iVar3),-1 < iVar3) {
         ne = X509_NAME_get_entry(name, iVar3);
         pAVar5 = X509_NAME_ENTRY_get_data(ne);
         uVar6 = do_check_string(pAVar5, 0xffffffff, pcVar10, uVar9, param_2, local_60, param_6);
         if ((int)uVar6 != 0) {
            return uVar6;
         }
      };
   }
   return 0;
}void X509V3_conf_free(CONF_VALUE *val) {
   if (val != (CONF_VALUE*)0x0) {
      CRYPTO_free(val->name);
      CRYPTO_free(val->value);
      CRYPTO_free(val->section);
      CRYPTO_free(val);
      return;
   }
   return;
}void *bignum_to_string_part_0(BIGNUM *param_1) {
   long lVar1;
   char *__s;
   size_t sVar2;
   void *pvVar3;
   __s = BN_bn2hex(param_1);
   if (__s != (char*)0x0) {
      sVar2 = strlen(__s);
      lVar1 = sVar2 + 3;
      pvVar3 = CRYPTO_malloc((int)lVar1, "crypto/x509/v3_utl.c", 0x94);
      if (pvVar3 != (void*)0x0) {
         if (*__s == '-') {
            OPENSSL_strlcpy(pvVar3, &_LC2, lVar1);
            OPENSSL_strlcat(pvVar3, __s + 1, lVar1);
         } else {
            OPENSSL_strlcpy(pvVar3, &_LC3, lVar1);
            OPENSSL_strlcat(pvVar3, __s, lVar1);
         }
         CRYPTO_free(__s);
         return pvVar3;
      }
      CRYPTO_free(__s);
   }
   return (void*)0x0;
}bool equal_email(void *param_1, size_t param_2, void *param_3, size_t param_4) {
   int iVar1;
   size_t sVar2;
   char cVar3;
   long lVar4;
   char cVar5;
   sVar2 = param_2;
   if (param_2 != param_4) {
      return false;
   }
   do {
      if (sVar2 == 0) goto LAB_00100c45;
      sVar2 = sVar2 - 1;
   } while ( ( *(char*)( (long)param_1 + sVar2 ) != '@' ) && ( *(char*)( (long)param_3 + sVar2 ) != '@' ) );
   if (param_2 != sVar2) {
      lVar4 = 0;
      do {
         cVar3 = *(char*)( (long)param_1 + lVar4 + sVar2 );
         cVar5 = *(char*)( (long)param_3 + lVar4 + sVar2 );
         if (cVar3 == '\0') {
            return false;
         }
         if (cVar3 != cVar5) {
            if (( byte )(cVar3 + 0xbfU) < 0x1a) {
               cVar3 = cVar3 + ' ';
               if (( byte )(cVar5 + 0xbfU) < 0x1a) goto LAB_00100ca7;
            } else {
               if (0x19 < ( byte )(cVar5 + 0xbfU)) {
                  return false;
               }
               LAB_00100ca7:cVar5 = cVar5 + ' ';
            }
            if (cVar3 != cVar5) {
               return false;
            }
         }
         lVar4 = lVar4 + 1;
      } while ( param_2 - sVar2 != lVar4 );
   }
   if (sVar2 != 0) {
      param_2 = sVar2;
   }
   LAB_00100c45:iVar1 = memcmp(param_1, param_3, param_2);
   return iVar1 == 0;
}bool ipv4_from_asc(undefined1 *param_1, char *param_2) {
   char *pcVar1;
   int iVar2;
   char *pcVar3;
   uint uVar4;
   uVar4 = 0;
   while (true) {
      iVar2 = ossl_isdigit((int)*param_2);
      if (iVar2 == 0) {
         return false;
      }
      uVar4 = *param_2 + -0x30 + uVar4 * 10;
      if (0xff < uVar4) break;
      if (( param_2[1] == '.' ) || ( param_2[1] == '\0' )) {
         *param_1 = (char)uVar4;
         if (param_2[1] != '.') {
            return false;
         }
         uVar4 = 0;
         pcVar3 = param_2 + 2;
         while (true) {
            iVar2 = ossl_isdigit((int)*pcVar3);
            if (iVar2 == 0) {
               return false;
            }
            uVar4 = *pcVar3 + -0x30 + uVar4 * 10;
            if (0xff < uVar4) break;
            if (( pcVar3[1] == '.' ) || ( pcVar3[1] == '\0' )) {
               param_1[1] = (char)uVar4;
               if (pcVar3[1] != '.') {
                  return false;
               }
               uVar4 = 0;
               pcVar3 = pcVar3 + 2;
               while (true) {
                  iVar2 = ossl_isdigit((int)*pcVar3);
                  if (iVar2 == 0) {
                     return false;
                  }
                  uVar4 = *pcVar3 + -0x30 + uVar4 * 10;
                  if (0xff < uVar4) break;
                  if (( pcVar3[1] == '.' ) || ( pcVar3[1] == '\0' )) {
                     param_1[2] = (char)uVar4;
                     if (pcVar3[1] != '.') {
                        return false;
                     }
                     pcVar3 = pcVar3 + 2;
                     uVar4 = 0;
                     while (true) {
                        iVar2 = ossl_isdigit((int)*pcVar3);
                        if (iVar2 == 0) {
                           return false;
                        }
                        uVar4 = *pcVar3 + -0x30 + uVar4 * 10;
                        if (0xff < uVar4) break;
                        pcVar1 = pcVar3 + 1;
                        pcVar3 = pcVar3 + 1;
                        if (( *pcVar1 == '.' ) || ( *pcVar1 == '\0' )) {
                           param_1[3] = (char)uVar4;
                           return *pcVar3 == '\0';
                        }
                        if (uVar4 == 0) {
                           return false;
                        }
                     };
                     return false;
                  }
                  pcVar3 = pcVar3 + 1;
                  if (uVar4 == 0) {
                     return false;
                  }
               };
               return false;
            }
            pcVar3 = pcVar3 + 1;
            if (uVar4 == 0) {
               return false;
            }
         };
         return false;
      }
      param_2 = param_2 + 1;
      if (uVar4 == 0) {
         return false;
      }
   };
   return false;
}undefined8 ipv6_cb(undefined1 *param_1, uint param_2, long param_3) {
   undefined1 *puVar1;
   undefined1 uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   iVar3 = *(int*)( param_3 + 0x10 );
   if (iVar3 == 0x10) {
      return 0;
   }
   if (param_2 == 0) {
      if (*(int*)( param_3 + 0x14 ) == -1) {
         *(int*)( param_3 + 0x14 ) = iVar3;
      } else if (iVar3 != *(int*)( param_3 + 0x14 )) {
         return 0;
      }
      *(int*)( param_3 + 0x18 ) = *(int*)( param_3 + 0x18 ) + 1;
   } else if ((int)param_2 < 5) {
      uVar5 = 0;
      puVar1 = param_1 + param_2;
      do {
         uVar2 = *param_1;
         param_1 = param_1 + 1;
         iVar4 = OPENSSL_hexchar2int(uVar2);
         if (iVar4 < 0) {
            return 0;
         }
         uVar5 = uVar5 << 4 | (int)(char)iVar4;
      } while ( param_1 != puVar1 );
      *(ushort*)( param_3 + iVar3 ) = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
      *(int*)( param_3 + 0x10 ) = *(int*)( param_3 + 0x10 ) + 2;
   } else {
      if (0xc < iVar3) {
         return 0;
      }
      if (param_1[(int)param_2] != '\0') {
         return 0;
      }
      iVar3 = ipv4_from_asc(iVar3 + param_3, param_1);
      if (iVar3 == 0) {
         return 0;
      }
      *(int*)( param_3 + 0x10 ) = *(int*)( param_3 + 0x10 ) + 4;
   }
   return 1;
}int X509V3_add_value(char *name, char *value, stack_st_CONF_VALUE **extlist) {
   stack_st_CONF_VALUE *psVar1;
   int iVar2;
   size_t __n;
   void *pvVar3;
   stack_st_CONF_VALUE *ptr;
   stack_st_CONF_VALUE *psVar4;
   psVar1 = *extlist;
   if (value == (char*)0x0) {
      pvVar3 = (void*)0x0;
      if (( name != (char*)0x0 ) && ( name = CRYPTO_strdup(name, "crypto/x509/v3_utl.c", 0x2f) ),(char**)name == (char**)0x0) goto LAB_001010ac;
      LAB_00101023:ptr = (stack_st_CONF_VALUE*)CRYPTO_malloc(0x18, "crypto/x509/v3_utl.c", 0x39);
      if (ptr == (stack_st_CONF_VALUE*)0x0) goto LAB_00100fb5;
      if (psVar1 != (stack_st_CONF_VALUE*)0x0) {
         *(undefined8*)&ptr->stack = 0;
         psVar1 = *extlist;
         (ptr->stack).data = (char**)name;
         *(void**)&(ptr->stack).sorted = pvVar3;
         iVar2 = OPENSSL_sk_push(psVar1, ptr);
         if (iVar2 != 0) {
            return 1;
         }
         goto LAB_00100fc1;
      }
      psVar4 = (stack_st_CONF_VALUE*)OPENSSL_sk_new_null();
      *extlist = psVar4;
      psVar1 = ptr;
      if (psVar4 == (stack_st_CONF_VALUE*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/x509/v3_utl.c", 0x3c, "x509v3_add_len_value");
         ERR_set_error(0x22, 0x8000f, 0);
      } else {
         *(undefined8*)&ptr->stack = 0;
         (ptr->stack).data = (char**)name;
         *(void**)&(ptr->stack).sorted = pvVar3;
         iVar2 = OPENSSL_sk_push(psVar4, ptr);
         if (iVar2 != 0) {
            return 1;
         }
      }
   } else {
      __n = strlen(value);
      if (( name == (char*)0x0 ) || ( name = CRYPTO_strdup(name, "crypto/x509/v3_utl.c", 0x2f) ),(char**)name != (char**)0x0) {
         pvVar3 = memchr(value, 0, __n);
         if (( pvVar3 == (void*)0x0 ) && ( pvVar3 = (void*)CRYPTO_strndup(value, __n, "crypto/x509/v3_utl.c", 0x35) ),pvVar3 != (void*)0x0) goto LAB_00101023;
         pvVar3 = (void*)0x0;
      } else {
         LAB_001010ac:pvVar3 = (void*)0x0;
         name = (char*)0x0;
      }
      LAB_00100fb5:ptr = (stack_st_CONF_VALUE*)0x0;
      if (psVar1 != (stack_st_CONF_VALUE*)0x0) goto LAB_00100fc1;
   }
   ptr = psVar1;
   OPENSSL_sk_free(*extlist);
   *extlist = (stack_st_CONF_VALUE*)0x0;
   LAB_00100fc1:CRYPTO_free(ptr);
   CRYPTO_free(name);
   CRYPTO_free(pvVar3);
   return 0;
}int X509V3_add_value_uchar(char *name, uchar *value, stack_st_CONF_VALUE **extlist) {
   stack_st_CONF_VALUE *psVar1;
   int iVar2;
   size_t __n;
   void *pvVar3;
   stack_st_CONF_VALUE *ptr;
   stack_st_CONF_VALUE *psVar4;
   psVar1 = *extlist;
   if (value == (uchar*)0x0) {
      pvVar3 = (void*)0x0;
      if (( name != (char*)0x0 ) && ( name = CRYPTO_strdup(name, "crypto/x509/v3_utl.c", 0x2f) ),(char**)name == (char**)0x0) goto LAB_001012b4;
      LAB_0010122b:ptr = (stack_st_CONF_VALUE*)CRYPTO_malloc(0x18, "crypto/x509/v3_utl.c", 0x39);
      if (ptr == (stack_st_CONF_VALUE*)0x0) goto LAB_001011b2;
      if (psVar1 != (stack_st_CONF_VALUE*)0x0) {
         *(undefined8*)&ptr->stack = 0;
         psVar1 = *extlist;
         (ptr->stack).data = (char**)name;
         *(void**)&(ptr->stack).sorted = pvVar3;
         iVar2 = OPENSSL_sk_push(psVar1, ptr);
         if (iVar2 != 0) {
            return 1;
         }
         goto LAB_001011be;
      }
      psVar4 = (stack_st_CONF_VALUE*)OPENSSL_sk_new_null();
      *extlist = psVar4;
      psVar1 = ptr;
      if (psVar4 == (stack_st_CONF_VALUE*)0x0) {
         ERR_new(0);
         ERR_set_debug("crypto/x509/v3_utl.c", 0x3c, "x509v3_add_len_value");
         ERR_set_error(0x22, 0x8000f, 0);
      } else {
         *(undefined8*)&ptr->stack = 0;
         (ptr->stack).data = (char**)name;
         *(void**)&(ptr->stack).sorted = pvVar3;
         iVar2 = OPENSSL_sk_push(psVar4, ptr);
         if (iVar2 != 0) {
            return 1;
         }
      }
   } else {
      __n = strlen((char*)value);
      if (( name == (char*)0x0 ) || ( name = CRYPTO_strdup(name, "crypto/x509/v3_utl.c", 0x2f) ),(char**)name != (char**)0x0) {
         pvVar3 = memchr(value, 0, __n);
         if (( pvVar3 == (void*)0x0 ) && ( pvVar3 = (void*)CRYPTO_strndup(value, __n, "crypto/x509/v3_utl.c", 0x35) ),pvVar3 != (void*)0x0) goto LAB_0010122b;
         pvVar3 = (void*)0x0;
      } else {
         LAB_001012b4:pvVar3 = (void*)0x0;
         name = (char*)0x0;
      }
      LAB_001011b2:ptr = (stack_st_CONF_VALUE*)0x0;
      if (psVar1 != (stack_st_CONF_VALUE*)0x0) goto LAB_001011be;
   }
   ptr = psVar1;
   OPENSSL_sk_free(*extlist);
   *extlist = (stack_st_CONF_VALUE*)0x0;
   LAB_001011be:CRYPTO_free(ptr);
   CRYPTO_free(name);
   CRYPTO_free(pvVar3);
   return 0;
}undefined8 x509v3_add_len_value_uchar(char *param_1, void *param_2, size_t param_3, long *param_4) {
   undefined8 *puVar1;
   int iVar2;
   void *pvVar3;
   undefined8 *ptr;
   long lVar4;
   puVar1 = (undefined8*)*param_4;
   if (( param_1 == (char*)0x0 ) || ( param_1 = CRYPTO_strdup(param_1, "crypto/x509/v3_utl.c", 0x2f) ),param_1 != (char*)0x0) {
      if (param_2 != (void*)0x0) {
         pvVar3 = memchr(param_2, 0, param_3);
         if (pvVar3 != (void*)0x0) goto LAB_001013b0;
         param_2 = (void*)CRYPTO_strndup(param_2, param_3, "crypto/x509/v3_utl.c", 0x35);
         if (param_2 != (void*)0x0) goto LAB_0010141b;
         goto LAB_001013b2;
      }
      LAB_0010141b:ptr = (undefined8*)CRYPTO_malloc(0x18, "crypto/x509/v3_utl.c", 0x39);
      if (ptr == (undefined8*)0x0) goto LAB_001013b2;
      if (puVar1 != (undefined8*)0x0) {
         *ptr = 0;
         lVar4 = *param_4;
         ptr[1] = param_1;
         ptr[2] = param_2;
         iVar2 = OPENSSL_sk_push(lVar4, ptr);
         if (iVar2 != 0) {
            return 1;
         }
         goto LAB_001013be;
      }
      lVar4 = OPENSSL_sk_new_null();
      *param_4 = lVar4;
      puVar1 = ptr;
      if (lVar4 == 0) {
         ERR_new(0);
         ERR_set_debug("crypto/x509/v3_utl.c", 0x3c, "x509v3_add_len_value");
         ERR_set_error(0x22, 0x8000f, 0);
      } else {
         *ptr = 0;
         ptr[1] = param_1;
         ptr[2] = param_2;
         iVar2 = OPENSSL_sk_push(lVar4, ptr);
         if (iVar2 != 0) {
            return 1;
         }
      }
   } else {
      LAB_001013b0:param_2 = (void*)0x0;
      LAB_001013b2:ptr = (undefined8*)0x0;
      if (puVar1 != (undefined8*)0x0) goto LAB_001013be;
   }
   ptr = puVar1;
   OPENSSL_sk_free(*param_4);
   *param_4 = 0;
   LAB_001013be:CRYPTO_free(ptr);
   CRYPTO_free(param_1);
   CRYPTO_free(param_2);
   return 0;
}int X509V3_add_value_bool(char *name, int asn1_bool, stack_st_CONF_VALUE **extlist) {
   int iVar1;
   if (asn1_bool == 0) {
      iVar1 = X509V3_add_value(name, "FALSE", extlist);
      return iVar1;
   }
   iVar1 = X509V3_add_value(name, "TRUE", extlist);
   return iVar1;
}int X509V3_add_value_bool_nf(char *name, int asn1_bool, stack_st_CONF_VALUE **extlist) {
   int iVar1;
   if (asn1_bool == 0) {
      return 1;
   }
   iVar1 = X509V3_add_value(name, "TRUE", extlist);
   return iVar1;
}char *i2s_ASN1_ENUMERATED(X509V3_EXT_METHOD *meth, ASN1_ENUMERATED *aint) {
   int iVar1;
   BIGNUM *a;
   char *pcVar2;
   if (aint != (ASN1_ENUMERATED*)0x0) {
      a = ASN1_ENUMERATED_to_BN(aint, (BIGNUM*)0x0);
      if (a == (BIGNUM*)0x0) {
         ERR_new();
         pcVar2 = (char*)0x0;
         ERR_set_debug("crypto/x509/v3_utl.c", 0xae, "i2s_ASN1_ENUMERATED");
         ERR_set_error(0x22, 0x8000d, 0);
      } else {
         iVar1 = BN_num_bits(a);
         if (iVar1 < 0x80) {
            pcVar2 = BN_bn2dec(a);
         } else {
            pcVar2 = (char*)bignum_to_string_part_0();
         }
         if (pcVar2 == (char*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_utl.c", 0xb0, "i2s_ASN1_ENUMERATED");
            ERR_set_error(0x22, 0x80022, 0);
         }
      }
      BN_free(a);
      return pcVar2;
   }
   return (char*)0x0;
}char *i2s_ASN1_INTEGER(X509V3_EXT_METHOD *meth, ASN1_INTEGER *aint) {
   int iVar1;
   BIGNUM *a;
   char *pcVar2;
   if (aint != (ASN1_INTEGER*)0x0) {
      a = ASN1_INTEGER_to_BN(aint, (BIGNUM*)0x0);
      if (a == (BIGNUM*)0x0) {
         ERR_new();
         pcVar2 = (char*)0x0;
         ERR_set_debug("crypto/x509/v3_utl.c", 0xbd, "i2s_ASN1_INTEGER");
         ERR_set_error(0x22, 0x8000d, 0);
      } else {
         iVar1 = BN_num_bits(a);
         if (iVar1 < 0x80) {
            pcVar2 = BN_bn2dec(a);
         } else {
            pcVar2 = (char*)bignum_to_string_part_0();
         }
         if (pcVar2 == (char*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_utl.c", 0xbf, "i2s_ASN1_INTEGER");
            ERR_set_error(0x22, 0x80022, 0);
         }
      }
      BN_free(a);
      return pcVar2;
   }
   return (char*)0x0;
}ASN1_INTEGER *s2i_ASN1_INTEGER(X509V3_EXT_METHOD *meth, char *value) {
   char cVar1;
   int iVar2;
   ASN1_INTEGER *pAVar3;
   long in_FS_OFFSET;
   bool bVar4;
   BIGNUM *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (BIGNUM*)0x0;
   if (value == (char*)0x0) {
      ERR_new();
      pAVar3 = (ASN1_INTEGER*)0x0;
      ERR_set_debug("crypto/x509/v3_utl.c", 0xcc, "s2i_ASN1_INTEGER");
      ERR_set_error(0x22, 0x6d, 0);
   } else {
      local_28 = BN_new();
      if (local_28 == (BIGNUM*)0x0) {
         ERR_new();
         pAVar3 = (ASN1_INTEGER*)0x0;
         ERR_set_debug("crypto/x509/v3_utl.c", 0xd1, "s2i_ASN1_INTEGER");
         ERR_set_error(0x22, 0x80003, 0);
      } else {
         cVar1 = *value;
         bVar4 = cVar1 == '-';
         if (bVar4) {
            cVar1 = value[1];
            value = value + 1;
         }
         if (( cVar1 == '0' ) && ( ( value[1] & 0xdfU ) == 0x58 )) {
            value = value + 2;
            iVar2 = BN_hex2bn(&local_28, value);
         } else {
            iVar2 = BN_dec2bn(&local_28, value);
         }
         if (( iVar2 == 0 ) || ( value[iVar2] != '\0' )) {
            BN_free(local_28);
            pAVar3 = (ASN1_INTEGER*)0x0;
            ERR_new();
            ERR_set_debug("crypto/x509/v3_utl.c", 0xe9, "s2i_ASN1_INTEGER");
            ERR_set_error(0x22, 100, 0);
         } else {
            if (bVar4) {
               iVar2 = BN_is_zero();
               pAVar3 = BN_to_ASN1_INTEGER(local_28, (ASN1_INTEGER*)0x0);
               BN_free(local_28);
               if (pAVar3 != (ASN1_INTEGER*)0x0) {
                  if (iVar2 == 0) {
                     pAVar3->type = pAVar3->type | 0x100;
                  }
                  goto LAB_001017d8;
               }
            } else {
               pAVar3 = BN_to_ASN1_INTEGER(local_28, (ASN1_INTEGER*)0x0);
               BN_free(local_28);
               if (pAVar3 != (ASN1_INTEGER*)0x0) goto LAB_001017d8;
            }
            ERR_new();
            pAVar3 = (ASN1_INTEGER*)0x0;
            ERR_set_debug("crypto/x509/v3_utl.c", 0xf3, "s2i_ASN1_INTEGER");
            ERR_set_error(0x22, 0x65, 0);
         }
      }
   }
   LAB_001017d8:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pAVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int X509V3_add_value_int(char *name, ASN1_INTEGER *aint, stack_st_CONF_VALUE **extlist) {
   int iVar1;
   char *value;
   iVar1 = 1;
   if (aint != (ASN1_INTEGER*)0x0) {
      iVar1 = 0;
      value = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, aint);
      if (value != (char*)0x0) {
         iVar1 = X509V3_add_value(name, value, extlist);
         CRYPTO_free(value);
      }
   }
   return iVar1;
}int X509V3_get_value_bool(CONF_VALUE *value, int *asn1_bool) {
   char cVar1;
   char *__s1;
   int iVar2;
   __s1 = value->value;
   if (__s1 != (char*)0x0) {
      iVar2 = strcmp(__s1, "TRUE");
      if (( ( ( iVar2 == 0 ) || ( iVar2 = strcmp(__s1, "true") ),iVar2 == 0 ) ) || ( ( cVar1 = *__s1 ),cVar1 == 'Y' && ( __s1[1] == '\0' ) )) {
         *asn1_bool = 0xff;
      } else {
         iVar2 = strcmp(__s1, "FALSE");
         if (( ( ( ( iVar2 != 0 ) && ( iVar2 = strcmp(__s1, "false") ),iVar2 != 0 ) ) && ( ( cVar1 != 'N' || ( __s1[1] != '\0' ) ) ) ) && ( ( ( cVar1 != 'n' || ( __s1[1] != '\0' ) ) && ( ( *__s1 != 'N' || ( ( __s1[1] != 'O' || ( __s1[2] != '\0' ) ) ) ) ) ) )) goto LAB_00101af0;
         *asn1_bool = 0;
      }
      return 1;
   }
   LAB_00101af0:ERR_new();
   ERR_set_debug("crypto/x509/v3_utl.c", 0x123, "X509V3_get_value_bool");
   ERR_set_error(0x22, 0x68, 0);
   ERR_add_error_data(4, "name=", value->name, ", value=", value->value);
   return 0;
}int X509V3_get_value_int(CONF_VALUE *value, ASN1_INTEGER **aint) {
   ASN1_INTEGER *pAVar1;
   pAVar1 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, value->value);
   if (pAVar1 == (ASN1_INTEGER*)0x0) {
      ERR_add_error_data(4, "name=", value->name, ", value=", value->value);
   } else {
      *aint = pAVar1;
   }
   return ( uint )(pAVar1 != (ASN1_INTEGER*)0x0);
}stack_st_CONF_VALUE *X509V3_parse_list(char *line) {
   char *pcVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   char *ptr;
   char *name;
   char *pcVar5;
   stack_st_CONF_VALUE *psVar6;
   char *pcVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   stack_st_CONF_VALUE *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (stack_st_CONF_VALUE*)0x0;
   ptr = CRYPTO_strdup(line, "crypto/x509/v3_utl.c", 0x144);
   if (ptr == (char*)0x0) goto LAB_00101d80;
   cVar2 = *ptr;
   pcVar5 = ptr;
   if (cVar2 == '\0') {
      LAB_00101c99:pcVar5 = (char*)strip_spaces(pcVar5);
      if (pcVar5 == (char*)0x0) {
         ERR_new();
         uVar8 = 0x185;
         LAB_00101d65:ERR_set_debug("crypto/x509/v3_utl.c", uVar8, "X509V3_parse_list");
         ERR_set_error(0x22, 0x6c, 0);
      } else {
         iVar4 = X509V3_add_value(pcVar5, (char*)0x0, &local_48);
         if (iVar4 != 0) goto LAB_00101cbc;
      }
   } else {
      iVar4 = 1;
      name = (char*)0x0;
      pcVar1 = ptr + 1;
      do {
         while (true) {
            pcVar7 = pcVar1;
            if (( cVar2 == '\r' ) || ( cVar2 == '\n' )) goto LAB_00101c90;
            if (iVar4 == 1) break;
            if (( iVar4 == 2 ) && ( cVar2 == ',' )) {
               pcVar7[-1] = '\0';
               pcVar5 = (char*)strip_spaces(pcVar5);
               if (pcVar5 == (char*)0x0) {
                  ERR_new();
                  uVar8 = 0x16c;
                  goto LAB_00101de3;
               }
               iVar4 = X509V3_add_value(name, pcVar5, &local_48);
               if (iVar4 == 0) goto LAB_00101d80;
               iVar4 = 1;
               name = (char*)0x0;
               pcVar5 = pcVar7;
            }
            LAB_00101c2d:cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            if (cVar2 == '\0') goto LAB_00101c90;
         };
         if (cVar2 == ':') {
            pcVar7[-1] = '\0';
            name = (char*)strip_spaces(pcVar5);
            if (name != (char*)0x0) {
               iVar4 = 2;
               pcVar5 = pcVar7;
               goto LAB_00101c2d;
            }
            ERR_new();
            uVar8 = 0x154;
            goto LAB_00101d65;
         }
         if (cVar2 != ',') goto LAB_00101c2d;
         pcVar7[-1] = '\0';
         name = (char*)strip_spaces(pcVar5);
         if (name == (char*)0x0) {
            ERR_new();
            uVar8 = 0x15d;
            goto LAB_00101d65;
         }
         iVar3 = X509V3_add_value(name, (char*)0x0, &local_48);
         if (iVar3 == 0) goto LAB_00101d80;
         cVar2 = *pcVar7;
         pcVar1 = pcVar7 + 1;
         pcVar5 = pcVar7;
      } while ( cVar2 != '\0' );
      LAB_00101c90:if (iVar4 != 2) goto LAB_00101c99;
      pcVar5 = (char*)strip_spaces(pcVar5);
      if (pcVar5 != (char*)0x0) {
         iVar4 = X509V3_add_value(name, pcVar5, &local_48);
         if (iVar4 == 0) goto LAB_00101d80;
         LAB_00101cbc:CRYPTO_free(ptr);
         psVar6 = local_48;
         goto LAB_00101cd0;
      }
      ERR_new();
      uVar8 = 0x17c;
      LAB_00101de3:ERR_set_debug("crypto/x509/v3_utl.c", uVar8, "X509V3_parse_list");
      ERR_set_error(0x22, 0x6d, 0);
   }
   LAB_00101d80:CRYPTO_free(ptr);
   OPENSSL_sk_pop_free(local_48, X509V3_conf_free);
   psVar6 = (stack_st_CONF_VALUE*)0x0;
   LAB_00101cd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return psVar6;
}uint ossl_v3_name_cmp(char *param_1, char *param_2) {
   uint uVar1;
   size_t sVar2;
   sVar2 = strlen(param_2);
   uVar1 = strncmp(param_1, param_2, (long)(int)sVar2);
   if (uVar1 == 0) {
      uVar1 = ( uint )(param_1[(int)sVar2] != '\0' && param_1[(int)sVar2] != '.');
   }
   return uVar1;
}void X509_email_free(stack_st_OPENSSL_STRING *sk) {
   OPENSSL_sk_pop_free(sk, str_free);
   return;
}undefined8 append_ia5(long *param_1, int *param_2) {
   int iVar1;
   void *pvVar2;
   void *pvVar3;
   long lVar4;
   size_t __n;
   if (param_2[1] != 0x16) {
      return 1;
   }
   pvVar3 = *(void**)( param_2 + 2 );
   if (pvVar3 == (void*)0x0) {
      return 1;
   }
   if (*param_2 == 0) {
      return 1;
   }
   __n = (size_t)*param_2;
   pvVar2 = memchr(pvVar3, 0, __n);
   if (pvVar2 == (void*)0x0) {
      if (*param_1 == 0) {
         lVar4 = OPENSSL_sk_new(sk_strcmp);
         *param_1 = lVar4;
         if (lVar4 == 0) {
            return 0;
         }
         __n = (size_t)*param_2;
         pvVar3 = *(void**)( param_2 + 2 );
      }
      pvVar3 = (void*)CRYPTO_strndup(pvVar3, __n, "crypto/x509/v3_utl.c", 0x225);
      if (pvVar3 != (void*)0x0) {
         iVar1 = OPENSSL_sk_find(*param_1, pvVar3);
         if (iVar1 != -1) {
            CRYPTO_free(pvVar3);
            return 1;
         }
         iVar1 = OPENSSL_sk_push(*param_1, pvVar3);
         if (iVar1 != 0) {
            return 1;
         }
         CRYPTO_free(pvVar3);
      }
      X509_email_free((stack_st_OPENSSL_STRING*)*param_1);
      *param_1 = 0;
      return 0;
   }
   return 1;
}stack_st_OPENSSL_STRING *X509_get1_ocsp(X509 *x) {
   int iVar1;
   AUTHORITY_INFO_ACCESS *a;
   undefined8 *puVar2;
   int iVar3;
   long in_FS_OFFSET;
   AUTHORITY_INFO_ACCESS *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (AUTHORITY_INFO_ACCESS*)0x0;
   a = (AUTHORITY_INFO_ACCESS*)X509_get_ext_d2i(x, 0xb1, (int*)0x0, (int*)0x0);
   if (a != (AUTHORITY_INFO_ACCESS*)0x0) {
      iVar3 = 0;
      while (true) {
         iVar1 = OPENSSL_sk_num(a);
         if (iVar1 <= iVar3) break;
         puVar2 = (undefined8*)OPENSSL_sk_value(a, iVar3);
         iVar1 = OBJ_obj2nid((ASN1_OBJECT*)*puVar2);
         if (( iVar1 == 0xb2 ) && ( *(int*)puVar2[1] == 6 )) {
            iVar1 = append_ia5(&local_38, *(undefined8*)( (int*)puVar2[1] + 2 ));
            if (iVar1 == 0) break;
         }
         iVar3 = iVar3 + 1;
      };
      AUTHORITY_INFO_ACCESS_free(a);
      a = local_38;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (stack_st_OPENSSL_STRING*)a;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}stack_st_OPENSSL_STRING *get_email(X509_NAME *param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   X509_NAME_ENTRY *ne;
   ASN1_STRING *pAVar3;
   void *pvVar4;
   int *piVar5;
   stack_st_OPENSSL_STRING *psVar6;
   uchar *__s;
   size_t __n;
   long in_FS_OFFSET;
   stack_st_OPENSSL_STRING *local_48;
   long local_40;
   iVar1 = -1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (stack_st_OPENSSL_STRING*)0x0;
   do {
      while (true) {
         do {
            do {
               iVar1 = X509_NAME_get_index_by_NID(param_1, 0x30, iVar1);
               if (iVar1 < 0) {
                  iVar1 = 0;
                  goto LAB_001021a3;
               }
               ne = X509_NAME_get_entry(param_1, iVar1);
               pAVar3 = X509_NAME_ENTRY_get_data(ne);
            } while ( pAVar3->length == 0 );
            __n = (size_t)pAVar3->length;
            pvVar4 = memchr(__s, 0, __n);
         } while ( pvVar4 != (void*)0x0 );
         if (local_48 == (stack_st_OPENSSL_STRING*)0x0) {
            local_48 = (stack_st_OPENSSL_STRING*)OPENSSL_sk_new(sk_strcmp);
            if (local_48 == (stack_st_OPENSSL_STRING*)0x0) goto LAB_001021ce;
            __n = (size_t)pAVar3->length;
            __s = pAVar3->data;
         }
         psVar6 = local_48;
         pvVar4 = (void*)CRYPTO_strndup(__s, __n, "crypto/x509/v3_utl.c", 0x225);
         if (pvVar4 == (void*)0x0) goto LAB_00102205;
         iVar2 = OPENSSL_sk_find(psVar6, pvVar4);
         if (iVar2 == -1) break;
         CRYPTO_free(pvVar4);
      };
      iVar2 = OPENSSL_sk_push(psVar6, pvVar4);
   } while ( iVar2 != 0 );
   CRYPTO_free(pvVar4);
   LAB_00102205:X509_email_free(psVar6);
   psVar6 = (stack_st_OPENSSL_STRING*)0x0;
   LAB_0010221d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return psVar6;
   LAB_001021a3:iVar2 = OPENSSL_sk_num(param_2);
   psVar6 = local_48;
   if (iVar2 <= iVar1) goto LAB_0010221d;
   piVar5 = (int*)OPENSSL_sk_value(param_2, iVar1);
   if (( *piVar5 == 1 ) && ( iVar2 = append_ia5(&local_48, *(undefined8*)( piVar5 + 2 )) ),iVar2 == 0) goto LAB_001021ce;
   iVar1 = iVar1 + 1;
   goto LAB_001021a3;
   LAB_001021ce:psVar6 = (stack_st_OPENSSL_STRING*)0x0;
   goto LAB_0010221d;
}stack_st_OPENSSL_STRING *X509_get1_email(X509 *x) {
   void *pvVar1;
   X509_NAME *pXVar2;
   stack_st_OPENSSL_STRING *psVar3;
   pvVar1 = X509_get_ext_d2i(x, 0x55, (int*)0x0, (int*)0x0);
   pXVar2 = X509_get_subject_name(x);
   psVar3 = (stack_st_OPENSSL_STRING*)get_email(pXVar2, pvVar1);
   OPENSSL_sk_pop_free(pvVar1, &GENERAL_NAME_free);
   return psVar3;
}stack_st_OPENSSL_STRING *X509_REQ_get1_email(X509_REQ *x) {
   stack_st_X509_EXTENSION *x_00;
   void *pvVar1;
   undefined8 uVar2;
   stack_st_OPENSSL_STRING *psVar3;
   x_00 = X509_REQ_get_extensions(x);
   pvVar1 = X509V3_get_d2i(x_00, 0x55, (int*)0x0, (int*)0x0);
   uVar2 = X509_REQ_get_subject_name(x);
   psVar3 = (stack_st_OPENSSL_STRING*)get_email(uVar2, pvVar1);
   OPENSSL_sk_pop_free(pvVar1, &GENERAL_NAME_free);
   OPENSSL_sk_pop_free(x_00, &X509_EXTENSION_free);
   return psVar3;
}undefined8 X509_check_host(undefined8 param_1, char *param_2, size_t param_3, undefined4 param_4, undefined8 param_5) {
   void *pvVar1;
   undefined8 uVar2;
   size_t __n;
   if (param_2 == (char*)0x0) {
      return 0xfffffffe;
   }
   if (param_3 == 0) {
      param_3 = strlen(param_2);
      __n = param_3 - 1;
      if (1 < param_3) goto LAB_0010237b;
   } else {
      if (param_3 == 1) {
         pvVar1 = memchr(param_2, 0, 1);
         if (pvVar1 != (void*)0x0) {
            return 0xfffffffe;
         }
         __n = 1;
         goto LAB_00102386;
      }
      __n = param_3 - 1;
      pvVar1 = memchr(param_2, 0, __n);
      if (pvVar1 != (void*)0x0) {
         return 0xfffffffe;
      }
      LAB_0010237b:if (param_2[__n] == '\0') goto LAB_00102386;
   }
   __n = param_3;
   LAB_00102386:uVar2 = do_x509_check(param_1, param_2, __n, param_4, 2, param_5);
   return uVar2;
}undefined8 X509_check_email(undefined8 param_1, char *param_2, size_t param_3, undefined4 param_4) {
   void *pvVar1;
   undefined8 uVar2;
   size_t __n;
   if (param_2 == (char*)0x0) {
      return 0xfffffffe;
   }
   if (param_3 == 0) {
      param_3 = strlen(param_2);
      __n = param_3 - 1;
      if (1 < param_3) goto LAB_00102452;
   } else {
      if (param_3 == 1) {
         pvVar1 = memchr(param_2, 0, 1);
         if (pvVar1 != (void*)0x0) {
            return 0xfffffffe;
         }
         __n = 1;
         goto LAB_0010245d;
      }
      __n = param_3 - 1;
      pvVar1 = memchr(param_2, 0, __n);
      if (pvVar1 != (void*)0x0) {
         return 0xfffffffe;
      }
      LAB_00102452:if (param_2[__n] == '\0') goto LAB_0010245d;
   }
   __n = param_3;
   LAB_0010245d:uVar2 = do_x509_check(param_1, param_2, __n, param_4, 1, 0);
   return uVar2;
}undefined8 X509_check_ip(undefined8 param_1, long param_2) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = do_x509_check();
      return uVar1;
   }
   return 0xfffffffe;
}void ossl_ipaddr_to_asc(ushort *param_1, uint param_2) {
   ushort *puVar1;
   int iVar2;
   ulong uVar3;
   int iVar4;
   char *buf;
   long in_FS_OFFSET;
   char acStack_68[40];
   long local_40;
   buf = acStack_68;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 4) {
      BIO_snprintf(acStack_68, 0x28, "%d.%d.%d.%d", ( ulong )(byte) * param_1, ( ulong ) * (byte*)( (long)param_1 + 1 ), (ulong)(byte)param_1[1], ( ulong ) * (byte*)( (long)param_1 + 3 ));
   } else if (param_2 == 0x10) {
      puVar1 = param_1 + 7;
      iVar4 = 0x28;
      do {
         uVar3 = ( ulong )(ushort)(*param_1 << 8 | *param_1 >> 8);
         if (param_1 == puVar1) {
            BIO_snprintf(buf, (long)iVar4, "%X", uVar3);
            break;
         }
         param_1 = param_1 + 1;
         iVar2 = BIO_snprintf(buf, (long)iVar4, "%X:", uVar3);
         iVar4 = iVar4 - iVar2;
         buf = buf + iVar2;
      } while ( -1 < iVar2 );
   } else {
      BIO_snprintf(acStack_68, 0x28, "<invalid length=%d>", (ulong)param_2);
   }
   CRYPTO_strdup(acStack_68, "crypto/x509/v3_utl.c", 0x445);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long ossl_a2i_ipadd(undefined8 *param_1, char *param_2) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   size_t sVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   int local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar3 = strchr(param_2, 0x3a);
   if (pcVar3 == (char*)0x0) {
      iVar2 = ipv4_from_asc(param_1, param_2);
      lVar4 = ( ulong )(iVar2 != 0) << 2;
      goto LAB_0010273a;
   }
   local_40 = 0;
   local_48 = _LC16;
   iVar2 = CONF_parse_list(param_2, 0x3a, 0, ipv6_cb, &local_58);
   if (iVar2 != 0) {
      iVar1 = local_48._4_4_;
      sVar5 = (size_t)local_48._4_4_;
      iVar2 = (int)local_48;
      if (local_48._4_4_ == -1) {
         if ((int)local_48 == 0x10) {
            LAB_00102785:*param_1 = local_58;
            param_1[1] = uStack_50;
            LAB_0010278e:lVar4 = 0x10;
            goto LAB_0010273a;
         }
      } else if (( (int)local_48 != 0x10 ) && ( local_40 < 4 )) {
         if (local_40 == 3) {
            if ((int)local_48 < 1) {
               if (local_48 < 0) goto LAB_00102785;
               LAB_0010279d:sVar5 = (size_t)local_48._4_4_;
               memcpy(param_1, &local_58, sVar5);
               memset((void*)( (long)param_1 + sVar5 ), 0, (long)( 0x10 - iVar2 ));
               if (iVar1 == iVar2) goto LAB_0010278e;
               LAB_0010270a:memcpy((void*)( (long)param_1 + ( (long)iVar1 - (long)iVar2 ) + 0x10 ), (void*)( (long)&local_58 + (long)iVar1 ), (long)( iVar2 - iVar1 ));
               goto LAB_0010278e;
            }
         } else if (local_40 == 2) {
            if (local_48._4_4_ == 0) goto LAB_0010279d;
            if (local_48._4_4_ == (int)local_48) {
               if (local_48 < 0) goto LAB_00102785;
               memcpy(param_1, &local_58, sVar5);
               memset((void*)( (long)param_1 + sVar5 ), 0, (long)( 0x10 - iVar2 ));
               goto LAB_0010278e;
            }
         } else if (( local_48._4_4_ != 0 ) && ( local_48._4_4_ != (int)local_48 )) {
            if (local_48 < 0) goto LAB_00102785;
            sVar5 = (size_t)local_48._4_4_;
            memcpy(param_1, &local_58, sVar5);
            memset((void*)( (long)param_1 + sVar5 ), 0, (long)( 0x10 - iVar2 ));
            goto LAB_0010270a;
         }
      }
   }
   lVar4 = 0;
   LAB_0010273a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar4;
}undefined8 X509_check_ip_asc(undefined8 param_1, long param_2, undefined4 param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined1 auStack_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      iVar1 = ossl_a2i_ipadd(auStack_38);
      if ((long)iVar1 != 0) {
         uVar2 = do_x509_check(param_1, auStack_38, (long)iVar1, param_3, 7, 0);
         goto LAB_0010285f;
      }
   }
   uVar2 = 0xfffffffe;
   LAB_0010285f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ASN1_OCTET_STRING *a2i_IPADDRESS(char *ipasc) {
   int iVar1;
   ASN1_OCTET_STRING *str;
   long in_FS_OFFSET;
   uchar auStack_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_a2i_ipadd(auStack_38, ipasc);
   if (iVar1 != 0) {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING*)0x0) {
         iVar1 = ASN1_OCTET_STRING_set(str, auStack_38, iVar1);
         if (iVar1 != 0) goto LAB_001028de;
         ASN1_OCTET_STRING_free(str);
      }
   }
   str = (ASN1_OCTET_STRING*)0x0;
   LAB_001028de:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return str;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ASN1_OCTET_STRING *a2i_IPADDRESS_NC(char *ipasc) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   char *ptr;
   ASN1_OCTET_STRING *str;
   long in_FS_OFFSET;
   uchar auStack_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar3 = strchr(ipasc, 0x2f);
   if (( pcVar3 != (char*)0x0 ) && ( ptr = CRYPTO_strdup(ipasc, "crypto/x509/v3_utl.c", 0x46e) ),ptr != (char*)0x0) {
      ptr[(long)pcVar3 - (long)ipasc] = '\0';
      iVar1 = ossl_a2i_ipadd(auStack_68, ptr);
      if (iVar1 == 0) {
         str = (ASN1_OCTET_STRING*)0x0;
      } else {
         iVar2 = ossl_a2i_ipadd(auStack_68 + iVar1, ptr + ( (long)pcVar3 - (long)ipasc ) + 1);
         CRYPTO_free(ptr);
         if (( ( iVar2 == 0 ) || ( iVar1 != iVar2 ) ) || ( str = ASN1_OCTET_STRING_new() ),str == (ASN1_OCTET_STRING*)0x0) {
            ptr = (char*)0x0;
            str = (ASN1_OCTET_STRING*)0x0;
         } else {
            ptr = (char*)0x0;
            iVar1 = ASN1_OCTET_STRING_set(str, auStack_68, iVar1 + iVar2);
            if (iVar1 != 0) goto LAB_00102a16;
         }
      }
      CRYPTO_free(ptr);
      ASN1_OCTET_STRING_free(str);
   }
   str = (ASN1_OCTET_STRING*)0x0;
   LAB_00102a16:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return str;
}int X509V3_NAME_from_section(X509_NAME *nm, stack_st_CONF_VALUE *dn_sk, ulong chtype) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   long lVar4;
   byte *pbVar5;
   int iVar6;
   byte *field;
   byte bVar7;
   if (nm == (X509_NAME*)0x0) {
      return 0;
   }
   iVar6 = 0;
   iVar3 = OPENSSL_sk_num(dn_sk);
   if (0 < iVar3) {
      do {
         lVar4 = OPENSSL_sk_value(dn_sk, iVar6);
         field = *(byte**)( lVar4 + 8 );
         bVar7 = *field;
         pbVar5 = field;
         bVar1 = bVar7;
         if (bVar7 == 0) {
            iVar3 = 0;
         } else {
            do {
               pbVar5 = pbVar5 + 1;
               bVar2 = *pbVar5;
               if (( bVar1 < 0x3b ) && ( ( 0x400500000000000U >> ( (ulong)bVar1 & 0x3f ) & 1 ) != 0 )) {
                  if (bVar2 != 0) {
                     field = pbVar5;
                     bVar7 = bVar2;
                  }
                  break;
               }
               bVar1 = bVar2;
            } while ( bVar2 != 0 );
            iVar3 = 0;
            if (bVar7 == 0x2b) {
               field = field + 1;
               iVar3 = -1;
            }
         }
         iVar3 = X509_NAME_add_entry_by_txt(nm, (char*)field, (int)chtype, *(uchar**)( lVar4 + 0x10 ), -1, -1, iVar3);
         if (iVar3 == 0) {
            return 0;
         }
         iVar6 = iVar6 + 1;
         iVar3 = OPENSSL_sk_num(dn_sk);
      } while ( iVar6 < iVar3 );
   }
   return 1;
}undefined8 OSSL_GENERAL_NAMES_print(BIO *param_1, undefined8 param_2, int param_3) {
   int iVar1;
   GENERAL_NAME *gen;
   int iVar2;
   iVar1 = OPENSSL_sk_num(param_2);
   iVar2 = 0;
   if (0 < iVar1) {
      while (true) {
         BIO_printf(param_1, "%*s", ( ulong )(param_3 + 2), &_LC18);
         gen = (GENERAL_NAME*)OPENSSL_sk_value(param_2, iVar2);
         GENERAL_NAME_print(param_1, gen);
         iVar1 = OPENSSL_sk_num(param_2);
         if (iVar1 <= iVar2 + 1) break;
         BIO_puts(param_1, "\n");
         iVar2 = iVar2 + 1;
      };
   }
   return 1;
}bool ossl_bio_print_hex(BIO *param_1, undefined8 param_2, int param_3) {
   int iVar1;
   char *buf;
   bool bVar2;
   bVar2 = true;
   if (param_3 != 0) {
      bVar2 = false;
      buf = (char*)OPENSSL_buf2hexstr(param_2, (long)param_3);
      if (buf != (char*)0x0) {
         iVar1 = BIO_puts(param_1, buf);
         CRYPTO_free(buf);
         return 0 < iVar1;
      }
   }
   return bVar2;
}
