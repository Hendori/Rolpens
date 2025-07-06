undefined1 *ASRange_it(void) {
   return local_it_6;
}undefined1 *ASIdOrRange_it(void) {
   return local_it_5;
}undefined1 *ASIdentifierChoice_it(void) {
   return local_it_4;
}undefined1 *ASIdentifiers_it(void) {
   return local_it_3;
}void ASIdOrRange_cmp(undefined8 *param_1, undefined8 *param_2) {
   int *piVar1;
   int *piVar2;
   ASN1_INTEGER *y;
   int iVar3;
   ASN1_INTEGER *x;
   piVar1 = (int*)*param_1;
   piVar2 = (int*)*param_2;
   y = *(ASN1_INTEGER**)( piVar2 + 2 );
   x = *(ASN1_INTEGER**)( piVar1 + 2 );
   if (*piVar1 == 0) {
      if (*piVar2 != 0) {
         ASN1_INTEGER_cmp(x, *(ASN1_INTEGER**)y);
         return;
      }
   } else {
      x = *(ASN1_INTEGER**)x;
      if (( *piVar1 == 1 ) && ( *piVar2 == 1 )) {
         iVar3 = ASN1_INTEGER_cmp(x, *(ASN1_INTEGER**)y);
         if (iVar3 != 0) {
            return;
         }
         ASN1_INTEGER_cmp(*(ASN1_INTEGER**)( *(long*)( piVar1 + 2 ) + 8 ), *(ASN1_INTEGER**)( *(long*)( piVar2 + 2 ) + 8 ));
         return;
      }
   }
   ASN1_INTEGER_cmp(x, y);
   return;
}undefined8 asid_contains(long param_1, long param_2) {
   int iVar1;
   int *piVar2;
   int iVar3;
   ASN1_INTEGER *x;
   int iVar4;
   ASN1_INTEGER *x_00;
   ASN1_INTEGER *y;
   ASN1_INTEGER *local_40;
   if (param_2 == 0) {
      return 1;
   }
   if (param_2 != param_1) {
      iVar4 = 0;
      iVar3 = 0;
      if (param_1 == 0) {
         return 0;
      }
      for (; iVar1 = OPENSSL_sk_num(param_2),iVar4 < iVar1; iVar4 = iVar4 + 1) {
         piVar2 = (int*)OPENSSL_sk_value(param_2, iVar4);
         if (piVar2 == (int*)0x0) {
            return 0;
         }
         if (*piVar2 == 0) {
            y = *(ASN1_INTEGER**)( piVar2 + 2 );
            local_40 = y;
         } else {
            if (*piVar2 != 1) {
               return 0;
            }
            y = (ASN1_INTEGER*)( *(undefined8**)( piVar2 + 2 ) )[1];
            local_40 = (ASN1_INTEGER*)**(undefined8**)( piVar2 + 2 );
         }
         iVar1 = OPENSSL_sk_num(param_1);
         if (iVar1 <= iVar3) {
            return 0;
         }
         while (true) {
            piVar2 = (int*)OPENSSL_sk_value(param_1, iVar3);
            if (piVar2 == (int*)0x0) {
               return 0;
            }
            if (*piVar2 == 0) {
               x = *(ASN1_INTEGER**)( piVar2 + 2 );
               x_00 = x;
            } else {
               if (*piVar2 != 1) {
                  return 0;
               }
               x = (ASN1_INTEGER*)( *(undefined8**)( piVar2 + 2 ) )[1];
               x_00 = (ASN1_INTEGER*)**(undefined8**)( piVar2 + 2 );
            }
            iVar1 = ASN1_INTEGER_cmp(x, y);
            if (-1 < iVar1) break;
            iVar3 = iVar3 + 1;
            iVar1 = OPENSSL_sk_num(param_1);
            if (iVar1 <= iVar3) {
               return 0;
            }
         };
         iVar1 = ASN1_INTEGER_cmp(x_00, local_40);
         if (0 < iVar1) {
            return 0;
         }
      }
   }
   return 1;
}bool ASIdentifierChoice_is_canonical_part_0(long param_1) {
   ASN1_INTEGER *y;
   int iVar1;
   int iVar2;
   BIGNUM *pBVar3;
   ASN1_INTEGER *pAVar4;
   int *piVar5;
   int *piVar6;
   BIGNUM *bn;
   bool bVar7;
   ASN1_INTEGER *y_00;
   ASN1_INTEGER *ai;
   ASN1_INTEGER *local_40;
   bn = (BIGNUM*)0x0;
   ai = (ASN1_INTEGER*)0x0;
   iVar2 = 0;
   do {
      iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 8 ));
      if (iVar1 + -1 <= iVar2) {
         iVar2 = OPENSSL_sk_num(*(undefined8*)( param_1 + 8 ));
         bVar7 = true;
         piVar5 = (int*)OPENSSL_sk_value(*(undefined8*)( param_1 + 8 ), iVar2 + -1);
         if (( piVar5 != (int*)0x0 ) && ( *piVar5 == 1 )) {
            iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER*)**(undefined8**)( piVar5 + 2 ), (ASN1_INTEGER*)( *(undefined8**)( piVar5 + 2 ) )[1]);
            bVar7 = iVar2 < 1;
         }
         goto LAB_00100362;
      }
      piVar5 = (int*)OPENSSL_sk_value(*(undefined8*)( param_1 + 8 ), iVar2);
      piVar6 = (int*)OPENSSL_sk_value(*(undefined8*)( param_1 + 8 ), iVar2 + 1);
      if (piVar5 == (int*)0x0) goto LAB_00100360;
      if (*piVar5 == 0) {
         pAVar4 = *(ASN1_INTEGER**)( piVar5 + 2 );
         y = pAVar4;
      } else {
         if (*piVar5 != 1) {
            LAB_00100360:bVar7 = false;
            LAB_00100362:ASN1_INTEGER_free(ai);
            BN_free(bn);
            return bVar7;
         }
         pAVar4 = (ASN1_INTEGER*)**(undefined8**)( piVar5 + 2 );
         y = (ASN1_INTEGER*)( *(undefined8**)( piVar5 + 2 ) )[1];
      }
      if (piVar6 == (int*)0x0) goto LAB_00100360;
      if (*piVar6 == 0) {
         y_00 = *(ASN1_INTEGER**)( piVar6 + 2 );
         local_40 = y_00;
      } else {
         if (*piVar6 != 1) goto LAB_00100360;
         y_00 = (ASN1_INTEGER*)**(undefined8**)( piVar6 + 2 );
         local_40 = (ASN1_INTEGER*)( *(undefined8**)( piVar6 + 2 ) )[1];
      }
      iVar1 = ASN1_INTEGER_cmp(pAVar4, y_00);
      if (( ( -1 < iVar1 ) || ( iVar1 = ASN1_INTEGER_cmp(pAVar4, y) ),0 < iVar1 )) goto LAB_00100360;
      if (( ( bn == (BIGNUM*)0x0 ) && ( bn = BN_new() ),bn == (BIGNUM*)0x0 )) {
         ERR_new();
         bVar7 = false;
         ERR_set_debug("crypto/x509/v3_asid.c", 0x139, "ASIdentifierChoice_is_canonical");
         ERR_set_error(0x22, 0x80003, 0);
         goto LAB_00100362;
      }
      pAVar4 = BN_to_ASN1_INTEGER(bn, ai);
      if (pAVar4 == (ASN1_INTEGER*)0x0) {
         ERR_new();
         bVar7 = false;
         ERR_set_debug("crypto/x509/v3_asid.c", 0x140, "ASIdentifierChoice_is_canonical");
         ERR_set_error(0x22, 0x8000d, 0);
         goto LAB_00100362;
      }
      iVar1 = ASN1_INTEGER_cmp(pAVar4, y_00);
      ai = pAVar4;
      iVar2 = iVar2 + 1;
      if (-1 < iVar1) goto LAB_00100360;
   } while ( true );
}undefined4 i2r_ASIdentifiers(undefined8 param_1, undefined8 *param_2, BIO *param_3, uint param_4) {
   int *piVar1;
   int iVar2;
   int *piVar3;
   char *pcVar4;
   undefined4 uVar5;
   int iVar6;
   piVar1 = (int*)*param_2;
   if (piVar1 == (int*)0x0) {
      LAB_001004f7:piVar1 = (int*)param_2[1];
      if (piVar1 != (int*)0x0) {
         BIO_printf(param_3, "%*s%s:\n", (ulong)param_4, &_LC2, "Routing Domain Identifiers");
         if (*piVar1 != 0) {
            if (*piVar1 == 1) {
               iVar2 = 0;
               iVar6 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 ));
               if (iVar6 < 1) {
                  return 1;
               }
               do {
                  piVar3 = (int*)OPENSSL_sk_value(*(undefined8*)( piVar1 + 2 ), iVar2);
                  if (*piVar3 == 0) {
                     pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, *(ASN1_INTEGER**)( piVar3 + 2 ));
                     if (pcVar4 == (char*)0x0) break;
                     BIO_printf(param_3, "%*s%s\n", ( ulong )(param_4 + 2), &_LC2, pcVar4);
                     CRYPTO_free(pcVar4);
                  } else {
                     if (( *piVar3 != 1 ) || ( pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, (ASN1_INTEGER*)**(undefined8**)( piVar3 + 2 )) ),pcVar4 == (char*)0x0) break;
                     BIO_printf(param_3, "%*s%s-", ( ulong )(param_4 + 2), &_LC2, pcVar4);
                     CRYPTO_free(pcVar4);
                     pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, *(ASN1_INTEGER**)( *(long*)( piVar3 + 2 ) + 8 ));
                     if (pcVar4 == (char*)0x0) break;
                     BIO_printf(param_3, "%s\n", pcVar4);
                     CRYPTO_free(pcVar4);
                  }
                  iVar2 = iVar2 + 1;
                  iVar6 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 ));
                  if (iVar6 <= iVar2) {
                     return 1;
                  }
               } while ( true );
            }
            goto LAB_001004c7;
         }
         BIO_printf(param_3, "%*sinherit\n", ( ulong )(param_4 + 2), &_LC2);
      }
      uVar5 = 1;
   } else {
      BIO_printf(param_3, "%*s%s:\n", (ulong)param_4, &_LC2, "Autonomous System Numbers");
      if (*piVar1 == 0) {
         BIO_printf(param_3, "%*sinherit\n", ( ulong )(param_4 + 2), &_LC2);
         goto LAB_001004f7;
      }
      if (*piVar1 == 1) {
         for (iVar6 = 0; iVar2 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 )),iVar6 < iVar2; iVar6 = iVar6 + 1) {
            piVar3 = (int*)OPENSSL_sk_value(*(undefined8*)( piVar1 + 2 ), iVar6);
            if (*piVar3 == 0) {
               pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, *(ASN1_INTEGER**)( piVar3 + 2 ));
               if (pcVar4 == (char*)0x0) goto LAB_001004c7;
               BIO_printf(param_3, "%*s%s\n", ( ulong )(param_4 + 2), &_LC2, pcVar4);
               CRYPTO_free(pcVar4);
            } else {
               if (( *piVar3 != 1 ) || ( pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, (ASN1_INTEGER*)**(undefined8**)( piVar3 + 2 )) ),pcVar4 == (char*)0x0) goto LAB_001004c7;
               BIO_printf(param_3, "%*s%s-", ( ulong )(param_4 + 2), &_LC2, pcVar4);
               CRYPTO_free(pcVar4);
               pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, *(ASN1_INTEGER**)( *(long*)( piVar3 + 2 ) + 8 ));
               if (pcVar4 == (char*)0x0) goto LAB_001004c7;
               BIO_printf(param_3, "%s\n", pcVar4);
               CRYPTO_free(pcVar4);
            }
         }
         goto LAB_001004f7;
      }
      LAB_001004c7:uVar5 = 0;
   }
   return uVar5;
}ASRange *d2i_ASRange(ASRange **a, uchar **in, long len) {
   ASN1_ITEM *it;
   ASRange *pAVar1;
   it = (ASN1_ITEM*)ASRange_it();
   pAVar1 = (ASRange*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pAVar1;
}int i2d_ASRange(ASRange *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)ASRange_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */ASRange *ASRange_new(void) {
   ASN1_ITEM *it;
   ASRange *pAVar1;
   it = (ASN1_ITEM*)ASRange_it();
   pAVar1 = (ASRange*)ASN1_item_new(it);
   return pAVar1;
}void ASRange_free(ASRange *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)ASRange_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}ASIdOrRange *d2i_ASIdOrRange(ASIdOrRange **a, uchar **in, long len) {
   ASN1_ITEM *it;
   ASIdOrRange *pAVar1;
   it = (ASN1_ITEM*)ASIdOrRange_it();
   pAVar1 = (ASIdOrRange*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pAVar1;
}int i2d_ASIdOrRange(ASIdOrRange *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)ASIdOrRange_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */ASIdOrRange *ASIdOrRange_new(void) {
   ASN1_ITEM *it;
   ASIdOrRange *pAVar1;
   it = (ASN1_ITEM*)ASIdOrRange_it();
   pAVar1 = (ASIdOrRange*)ASN1_item_new(it);
   return pAVar1;
}void ASIdOrRange_free(ASIdOrRange *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)ASIdOrRange_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}bool ASIdentifierChoice_canonize_part_0(int *param_1) {
   int iVar1;
   int iVar2;
   int *piVar3;
   ASIdOrRange *a;
   BIGNUM *pBVar4;
   ASN1_INTEGER *x;
   BIGNUM *bn;
   undefined8 *puVar5;
   ASN1_INTEGER *y;
   int iVar6;
   bool bVar7;
   ASN1_INTEGER *local_60;
   ASN1_INTEGER *local_58;
   ASN1_INTEGER *local_50;
   ASN1_INTEGER *local_40;
   bn = (BIGNUM*)0x0;
   OPENSSL_sk_sort(*(undefined8*)( param_1 + 2 ));
   local_50 = (ASN1_INTEGER*)0x0;
   iVar1 = 0;
   while (true) {
      iVar6 = iVar1;
      iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 2 ));
      if (iVar1 + -1 <= iVar6) break;
      piVar3 = (int*)OPENSSL_sk_value(*(undefined8*)( param_1 + 2 ), iVar6);
      iVar1 = iVar6 + 1;
      a = (ASIdOrRange*)OPENSSL_sk_value(*(undefined8*)( param_1 + 2 ), iVar1);
      if (piVar3 == (int*)0x0) goto LAB_00100b20;
      if (*piVar3 == 0) {
         local_60 = *(ASN1_INTEGER**)( piVar3 + 2 );
         local_58 = local_60;
      } else {
         if (*piVar3 != 1) goto LAB_00100b20;
         local_58 = (ASN1_INTEGER*)**(undefined8**)( piVar3 + 2 );
         local_60 = (ASN1_INTEGER*)( *(undefined8**)( piVar3 + 2 ) )[1];
      }
      if (a == (ASIdOrRange*)0x0) goto LAB_00100b20;
      if (a->type == 0) {
         y = (a->u).id;
         local_40 = y;
      } else {
         if (a->type != 1) goto LAB_00100b20;
         y = ((a->u).range)->min;
         local_40 = (ASN1_INTEGER*)((a->u).range)->max;
      }
      iVar2 = ASN1_INTEGER_cmp(local_58, y);
      if (( ( 0 < iVar2 ) || ( iVar2 = ASN1_INTEGER_cmp(local_58, local_60) ),0 < iVar2 )) goto LAB_00100b20;
      iVar2 = ASN1_INTEGER_cmp(local_60, y);
      if (-1 < iVar2) {
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x1a8, "ASIdentifierChoice_canonize");
         ERR_set_error(0x22, 0x74, 0);
         goto LAB_00100b20;
      }
      if (( ( ( bn == (BIGNUM*)0x0 ) && ( bn = BN_new() ),bn == (BIGNUM*)0x0 ) ) || ( pBVar4 = ASN1_INTEGER_to_BN(local_60, bn) ),pBVar4 == (BIGNUM*)0x0) {
         ERR_new();
         bVar7 = false;
         ERR_set_debug("crypto/x509/v3_asid.c", 0x1b2, "ASIdentifierChoice_canonize");
         ERR_set_error(0x22, 0x80003, 0);
         goto LAB_00100b23;
      }
      x = BN_to_ASN1_INTEGER(bn, local_50);
      if (x == (ASN1_INTEGER*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x1b9, "ASIdentifierChoice_canonize");
         ERR_set_error(0x22, 0x8000d, 0);
         goto LAB_00100b20;
      }
      iVar2 = ASN1_INTEGER_cmp(x, y);
      local_50 = x;
      if (iVar2 == 0) {
         if (*piVar3 == 0) {
            puVar5 = (undefined8*)CRYPTO_malloc(0x10, "crypto/x509/v3_asid.c", 0x1c4);
            if (puVar5 == (undefined8*)0x0) {
               bVar7 = false;
               goto LAB_00100b23;
            }
            *puVar5 = local_58;
            puVar5[1] = local_40;
            *piVar3 = 1;
            *(undefined8**)( piVar3 + 2 ) = puVar5;
            LAB_00100ab0:iVar2 = a->type;
            if (iVar2 != 0) goto LAB_00100aba;
            LAB_00100c1c:(a->u).id = (ASN1_INTEGER*)0x0;
         } else {
            if (*piVar3 != 1) goto LAB_00100ab0;
            ASN1_INTEGER_free(*(ASN1_INTEGER**)( *(long*)( piVar3 + 2 ) + 8 ));
            *(ASN1_INTEGER**)( *(long*)( piVar3 + 2 ) + 8 ) = local_40;
            iVar2 = a->type;
            if (iVar2 == 0) goto LAB_00100c1c;
            LAB_00100aba:if (iVar2 == 1) {
               ((a->u).id)->data = (uchar*)0x0;
            }
         }
         ASIdOrRange_free(a);
         OPENSSL_sk_delete(*(undefined8*)( param_1 + 2 ), iVar1);
         iVar1 = iVar6;
      }
   };
   iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 2 ));
   piVar3 = (int*)OPENSSL_sk_value(*(undefined8*)( param_1 + 2 ), iVar1 + -1);
   if (( ( piVar3 == (int*)0x0 ) || ( *piVar3 != 1 ) ) || ( iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER*)**(undefined8**)( piVar3 + 2 ), (ASN1_INTEGER*)( *(undefined8**)( piVar3 + 2 ) )[1]) ),iVar1 < 1) {
      bVar7 = true;
      if (( *param_1 == 0 ) || ( bVar7 = false * param_1 != 1 )) goto LAB_00100b23;
      iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 2 ));
      if (iVar1 != 0) {
         iVar1 = ASIdentifierChoice_is_canonical_part_0(param_1);
         bVar7 = iVar1 != 0;
         goto LAB_00100b23;
      }
   }
   LAB_00100b20:bVar7 = false;
   LAB_00100b23:ASN1_INTEGER_free(local_50);
   BN_free(bn);
   return bVar7;
}ASIdentifierChoice *d2i_ASIdentifierChoice(ASIdentifierChoice **a, uchar **in, long len) {
   ASN1_ITEM *it;
   ASIdentifierChoice *pAVar1;
   it = (ASN1_ITEM*)ASIdentifierChoice_it();
   pAVar1 = (ASIdentifierChoice*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pAVar1;
}int i2d_ASIdentifierChoice(ASIdentifierChoice *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)ASIdentifierChoice_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */ASIdentifierChoice *ASIdentifierChoice_new(void) {
   ASN1_ITEM *it;
   ASIdentifierChoice *pAVar1;
   it = (ASN1_ITEM*)ASIdentifierChoice_it();
   pAVar1 = (ASIdentifierChoice*)ASN1_item_new(it);
   return pAVar1;
}void ASIdentifierChoice_free(ASIdentifierChoice *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)ASIdentifierChoice_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}ASIdentifiers *d2i_ASIdentifiers(ASIdentifiers **a, uchar **in, long len) {
   ASN1_ITEM *it;
   ASIdentifiers *pAVar1;
   it = (ASN1_ITEM*)ASIdentifiers_it();
   pAVar1 = (ASIdentifiers*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pAVar1;
}int i2d_ASIdentifiers(ASIdentifiers *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)ASIdentifiers_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */ASIdentifiers *ASIdentifiers_new(void) {
   ASN1_ITEM *it;
   ASIdentifiers *pAVar1;
   it = (ASN1_ITEM*)ASIdentifiers_it();
   pAVar1 = (ASIdentifiers*)ASN1_item_new(it);
   return pAVar1;
}void ASIdentifiers_free(ASIdentifiers *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)ASIdentifiers_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}bool X509v3_asid_add_inherit(undefined8 *param_1, int param_2) {
   int *piVar1;
   ASIdentifierChoice *pAVar2;
   ASN1_NULL *pAVar3;
   if (param_1 == (undefined8*)0x0) {
      return false;
   }
   if (param_2 == 0) {
      piVar1 = (int*)*param_1;
   } else {
      if (param_2 != 1) {
         return false;
      }
      piVar1 = (int*)param_1[1];
      param_1 = param_1 + 1;
   }
   if (piVar1 == (int*)0x0) {
      pAVar2 = ASIdentifierChoice_new();
      *param_1 = pAVar2;
      if (pAVar2 != (ASIdentifierChoice*)0x0) {
         pAVar3 = ASN1_NULL_new();
         (pAVar2->u).inherit = pAVar3;
         if (pAVar3 != (ASN1_NULL*)0x0) {
            *(undefined4*)*param_1 = 0;
            return true;
         }
         ASIdentifierChoice_free((ASIdentifierChoice*)*param_1);
         *param_1 = 0;
      }
      return false;
   }
   return *piVar1 == 0;
}undefined8 X509v3_asid_add_id_or_range(long *param_1, int param_2, _union_929 param_3, uchar *param_4) {
   ASIdentifierChoice *a;
   _union_929 *p_Var1;
   int iVar2;
   int *piVar3;
   ASIdentifierChoice *pAVar4;
   ASN1_NULL *pAVar5;
   ASIdOrRange *a_00;
   ASRange *pAVar6;
   if (param_1 == (long*)0x0) {
      return 0;
   }
   if (param_2 == 0) {
      piVar3 = (int*)*param_1;
   } else {
      if (param_2 != 1) {
         return 0;
      }
      piVar3 = (int*)param_1[1];
      param_1 = param_1 + 1;
   }
   if (piVar3 == (int*)0x0) {
      pAVar4 = ASIdentifierChoice_new();
      *param_1 = (long)pAVar4;
      if (pAVar4 == (ASIdentifierChoice*)0x0) {
         return 0;
      }
      pAVar5 = (ASN1_NULL*)OPENSSL_sk_new(ASIdOrRange_cmp);
      a = (ASIdentifierChoice*)*param_1;
      (pAVar4->u).inherit = pAVar5;
      if ((a->u).inherit == (ASN1_NULL*)0x0) {
         ASIdentifierChoice_free(a);
         *param_1 = 0;
         return 0;
      }
      a->type = 1;
   } else if (*piVar3 != 1) {
      return 0;
   }
   a_00 = ASIdOrRange_new();
   if (a_00 == (ASIdOrRange*)0x0) {
      return 0;
   }
   iVar2 = OPENSSL_sk_reserve(*(undefined8*)( *param_1 + 8 ), 1);
   if (iVar2 != 0) {
      if (param_4 == (uchar*)0x0) {
         a_00->type = 0;
         a_00->u = param_3;
      } else {
         a_00->type = 1;
         pAVar6 = ASRange_new();
         (a_00->u).range = pAVar6;
         if (pAVar6 == (ASRange*)0x0) goto LAB_00101040;
         ASN1_INTEGER_free(pAVar6->min);
         p_Var1 = (_union_929*)(a_00->u).range;
         *p_Var1 = param_3;
         ASN1_INTEGER_free(p_Var1[1].id);
         ((a_00->u).id)->data = param_4;
      }
      iVar2 = OPENSSL_sk_push(*(undefined8*)( *param_1 + 8 ), a_00);
      if (iVar2 != 0) {
         return 1;
      }
   }
   LAB_00101040:ASIdOrRange_free(a_00);
   return 0;
}bool X509v3_asid_is_canonical(undefined8 *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (undefined8*)0x0) {
      return true;
   }
   piVar1 = (int*)*param_1;
   if (( ( piVar1 == (int*)0x0 ) || ( *piVar1 == 0 ) ) || ( ( *piVar1 == 1 && ( ( iVar2 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 )) ),iVar2 != 0 && ( iVar2 = ASIdentifierChoice_is_canonical_part_0(piVar1) ),iVar2 != 0 ) ) )) {
      piVar1 = (int*)param_1[1];
      if (( piVar1 == (int*)0x0 ) || ( *piVar1 == 0 )) {
         return true;
      }
      if (( *piVar1 == 1 ) && ( iVar2 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 )) ),iVar2 != 0) {
         iVar2 = ASIdentifierChoice_is_canonical_part_0(piVar1);
         return iVar2 != 0;
      }
   }
   return false;
}/* WARNING: Type propagation algorithm not settling */ulong asid_validate_path_internal(long param_1, long param_2, undefined8 *param_3) {
   bool bVar1;
   bool bVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   ulong uVar7;
   int *piVar8;
   undefined8 *puVar9;
   int *piVar10;
   int *local_48;
   if (( param_2 == 0 ) || ( iVar3 = iVar3 < 1 )) {
      if (param_1 == 0) {
         return 0;
      }
      goto LAB_001011a5;
   }
   if (param_1 == 0 && param_3 == (undefined8*)0x0) {
      return 0;
   }
   if (param_1 == 0) {
      if (param_3 == (undefined8*)0x0) {
         LAB_001011f0:lVar6 = OPENSSL_sk_value(param_2, 0);
         param_3 = *(undefined8**)( lVar6 + 0x130 );
         if (param_3 == (undefined8*)0x0) {
            return 1;
         }
         iVar3 = 1;
         uVar7 = 1;
         iVar5 = X509v3_asid_is_canonical(param_3);
         if (iVar5 == 0) goto LAB_0010122d;
      } else {
         iVar3 = X509v3_asid_is_canonical(param_3);
         if (iVar3 == 0) {
            return 0;
         }
         lVar6 = 0;
         iVar3 = 0;
         uVar7 = 1;
      }
   } else {
      if (*(long*)( param_1 + 0x38 ) == 0) goto LAB_001011a5;
      if (param_3 == (undefined8*)0x0) goto LAB_001011f0;
      iVar3 = X509v3_asid_is_canonical(param_3);
      if (iVar3 != 0) {
         iVar3 = 0;
         lVar6 = 0;
         uVar7 = 1;
         goto LAB_0010125f;
      }
      lVar6 = 0;
      iVar5 = -1;
      iVar3 = 0;
      LAB_0010122d:*(undefined4*)( param_1 + 0xb0 ) = 0x29;
      *(int*)( param_1 + 0xac ) = iVar5;
      *(long*)( param_1 + 0xb8 ) = lVar6;
      uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0) {
         return 0;
      }
   }
   LAB_0010125f:piVar10 = (int*)*param_3;
   bVar1 = false;
   if (piVar10 != (int*)0x0) {
      if (*piVar10 == 0) {
         bVar1 = true;
         piVar10 = (int*)0x0;
      } else if (*piVar10 == 1) {
         piVar10 = *(int**)( piVar10 + 2 );
      } else {
         piVar10 = (int*)0x0;
      }
   }
   local_48 = (int*)param_3[1];
   bVar2 = false;
   if (local_48 != (int*)0x0) {
      if (*local_48 == 0) {
         bVar2 = true;
         local_48 = (int*)0x0;
      } else if (*local_48 == 1) {
         local_48 = *(int**)( local_48 + 2 );
      } else {
         local_48 = (int*)0x0;
      }
   }
   if (param_1 == 0) {
      iVar5 = OPENSSL_sk_num(param_2);
      if (iVar3 < iVar5) {
         do {
            lVar6 = OPENSSL_sk_value(param_2, iVar3);
            if (lVar6 == 0) {
               return 0;
            }
            if (*(long*)( lVar6 + 0x130 ) == 0) {
               if (piVar10 != (int*)0x0 || local_48 != (int*)0x0) {
                  return 0;
               }
               local_48 = (int*)0x0;
               piVar10 = (int*)0x0;
            } else {
               iVar5 = X509v3_asid_is_canonical();
               if (iVar5 == 0) {
                  return 0;
               }
               puVar9 = *(undefined8**)( lVar6 + 0x130 );
               piVar8 = (int*)*puVar9;
               if (piVar8 == (int*)0x0) {
                  if (piVar10 != (int*)0x0) {
                     return 0;
                  }
               } else if (*piVar8 == 1) {
                  if (!bVar1) {
                     iVar5 = asid_contains(*(undefined8*)( piVar8 + 2 ), piVar10);
                     if (iVar5 == 0) {
                        return 0;
                     }
                     puVar9 = *(undefined8**)( lVar6 + 0x130 );
                     piVar8 = (int*)*puVar9;
                  }
                  bVar1 = false;
                  piVar10 = *(int**)( piVar8 + 2 );
               }
               piVar8 = (int*)puVar9[1];
               if (piVar8 == (int*)0x0) {
                  if (local_48 != (int*)0x0) {
                     return 0;
                  }
               } else if (*piVar8 == 1) {
                  if (!bVar2) {
                     iVar5 = asid_contains(*(undefined8*)( piVar8 + 2 ), local_48);
                     if (iVar5 == 0) {
                        return 0;
                     }
                     piVar8 = *(int**)( *(long*)( lVar6 + 0x130 ) + 8 );
                  }
                  local_48 = *(int**)( piVar8 + 2 );
                  bVar2 = false;
               }
            }
            iVar3 = iVar3 + 1;
            iVar5 = OPENSSL_sk_num(param_2);
         } while ( iVar3 < iVar5 );
      }
      if (lVar6 == 0) {
         return 0;
      }
   } else {
      iVar5 = OPENSSL_sk_num(param_2);
      if (iVar3 < iVar5) {
         do {
            lVar6 = OPENSSL_sk_value(param_2, iVar3);
            if (lVar6 == 0) goto LAB_001011a5;
            if (*(long*)( lVar6 + 0x130 ) == 0) {
               if (local_48 == (int*)0x0 && piVar10 == (int*)0x0) {
                  local_48 = (int*)0x0;
                  piVar10 = (int*)0x0;
                  goto LAB_0010135e;
               }
               *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
               *(int*)( param_1 + 0xac ) = iVar3;
               *(long*)( param_1 + 0xb8 ) = lVar6;
               uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
               joined_r0x00101470:uVar7 = (ulong)uVar4;
               if (uVar4 == 0) {
                  return 0;
               }
            } else {
               iVar5 = X509v3_asid_is_canonical();
               if (iVar5 == 0) {
                  *(undefined4*)( param_1 + 0xb0 ) = 0x29;
                  *(int*)( param_1 + 0xac ) = iVar3;
                  *(long*)( param_1 + 0xb8 ) = lVar6;
                  uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
                  uVar7 = (ulong)uVar4;
                  if (uVar4 == 0) {
                     return 0;
                  }
               }
               puVar9 = *(undefined8**)( lVar6 + 0x130 );
               piVar8 = (int*)*puVar9;
               if (piVar8 == (int*)0x0) {
                  if (piVar10 == (int*)0x0) {
                     piVar10 = (int*)0x0;
                     goto LAB_00101348;
                  }
                  *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
                  *(int*)( param_1 + 0xac ) = iVar3;
                  *(long*)( param_1 + 0xb8 ) = lVar6;
                  uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
                  uVar7 = (ulong)uVar4;
                  if (uVar4 == 0) {
                     return 0;
                  }
                  puVar9 = *(undefined8**)( lVar6 + 0x130 );
                  piVar8 = (int*)*puVar9;
                  if (piVar8 != (int*)0x0) {
                     if (*piVar8 == 1) {
                        piVar10 = (int*)0x0;
                        goto LAB_001015f0;
                     }
                     piVar10 = (int*)0x0;
                     bVar1 = false;
                     goto LAB_00101348;
                  }
                  piVar8 = (int*)puVar9[1];
                  bVar1 = false;
                  piVar10 = (int*)0x0;
                  if (piVar8 == (int*)0x0) goto LAB_001014dc;
                  LAB_00101355:if (*piVar8 == 1) {
                     if (!bVar2) {
                        LAB_00101648:iVar5 = asid_contains(*(undefined8*)( piVar8 + 2 ), local_48);
                        if (iVar5 == 0) {
                           *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
                           *(int*)( param_1 + 0xac ) = iVar3;
                           *(long*)( param_1 + 0xb8 ) = lVar6;
                           uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
                           bVar2 = false;
                           goto joined_r0x00101470;
                        }
                        piVar8 = *(int**)( *(long*)( lVar6 + 0x130 ) + 8 );
                     }
                     local_48 = *(int**)( piVar8 + 2 );
                     bVar2 = false;
                  }
               } else {
                  if (*piVar8 == 1) {
                     if (!bVar1) {
                        LAB_001015f0:iVar5 = asid_contains(*(undefined8*)( piVar8 + 2 ), piVar10);
                        if (iVar5 == 0) {
                           *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
                           *(int*)( param_1 + 0xac ) = iVar3;
                           *(long*)( param_1 + 0xb8 ) = lVar6;
                           uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
                           uVar7 = (ulong)uVar4;
                           if (uVar4 == 0) {
                              return 0;
                           }
                           puVar9 = *(undefined8**)( lVar6 + 0x130 );
                           bVar1 = false;
                           goto LAB_00101348;
                        }
                        puVar9 = *(undefined8**)( lVar6 + 0x130 );
                        piVar8 = (int*)*puVar9;
                     }
                     bVar1 = false;
                     piVar10 = *(int**)( piVar8 + 2 );
                  }
                  LAB_00101348:piVar8 = (int*)puVar9[1];
                  if (piVar8 != (int*)0x0) goto LAB_00101355;
                  LAB_001014dc:if (local_48 != (int*)0x0) {
                     *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
                     *(int*)( param_1 + 0xac ) = iVar3;
                     *(long*)( param_1 + 0xb8 ) = lVar6;
                     uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
                     uVar7 = (ulong)uVar4;
                     if (uVar4 == 0) {
                        return 0;
                     }
                     piVar8 = *(int**)( *(long*)( lVar6 + 0x130 ) + 8 );
                     if (piVar8 == (int*)0x0) {
                        bVar2 = false;
                        local_48 = (int*)0x0;
                        goto LAB_0010135e;
                     }
                     if (*piVar8 != 1) {
                        local_48 = (int*)0x0;
                        bVar2 = false;
                        goto LAB_0010135e;
                     }
                     local_48 = (int*)0x0;
                     goto LAB_00101648;
                  }
               }
            }
            LAB_0010135e:iVar3 = iVar3 + 1;
            iVar5 = OPENSSL_sk_num(param_2);
         } while ( iVar3 < iVar5 );
      }
      if (lVar6 == 0) {
         LAB_001011a5:*(undefined4*)( param_1 + 0xb0 ) = 1;
         return 0;
      }
   }
   puVar9 = *(undefined8**)( lVar6 + 0x130 );
   if (puVar9 == (undefined8*)0x0) {
      return uVar7;
   }
   if (( (int*)*puVar9 != (int*)0x0 ) && ( *(int*)*puVar9 == 0 )) {
      if (param_1 == 0) {
         return 0;
      }
      *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
      *(int*)( param_1 + 0xac ) = iVar3;
      *(long*)( param_1 + 0xb8 ) = lVar6;
      uVar4 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0) {
         return 0;
      }
      puVar9 = *(undefined8**)( lVar6 + 0x130 );
   }
   if ((int*)puVar9[1] == (int*)0x0) {
      return uVar7;
   }
   if (*(int*)puVar9[1] == 0) {
      if (param_1 == 0) {
         return 0;
      }
      *(int*)( param_1 + 0xac ) = iVar3;
      *(undefined4*)( param_1 + 0xb0 ) = 0x2e;
      *(long*)( param_1 + 0xb8 ) = lVar6;
      for (int i_423 = 0; i_423 < 2; i_423++) {
         /* WARNING: Could not recover jumptable at 0x00101424. Too many branches */
      }
      uVar7 = ( **(code**)( param_1 + 0x38 ) )(0, param_1);
      return uVar7;
   }
   return uVar7;
}bool X509v3_asid_canonize(undefined8 *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (undefined8*)0x0) {
      return true;
   }
   piVar1 = (int*)*param_1;
   if (( piVar1 != (int*)0x0 ) && ( *piVar1 != 0 )) {
      if (( *piVar1 != 1 ) || ( iVar2 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 )) ),iVar2 == 0) goto LAB_00101898;
      iVar2 = ASIdentifierChoice_canonize_part_0(piVar1);
      if (iVar2 == 0) {
         return false;
      }
   }
   piVar1 = (int*)param_1[1];
   if (( piVar1 == (int*)0x0 ) || ( *piVar1 == 0 )) {
      return true;
   }
   if (( *piVar1 == 1 ) && ( iVar2 = OPENSSL_sk_num(*(undefined8*)( piVar1 + 2 )) ),iVar2 != 0) {
      iVar2 = ASIdentifierChoice_canonize_part_0(piVar1);
      return iVar2 != 0;
   }
   LAB_00101898:ERR_new();
   ERR_set_debug("crypto/x509/v3_asid.c", 0x180, "ASIdentifierChoice_canonize");
   ERR_set_error(0x22, 0x74, 0);
   return false;
}ASIdentifiers *v2i_ASIdentifiers(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   ASIdentifiers *a;
   size_t sVar3;
   char *pcVar4;
   ASN1_INTEGER *y;
   CONF_VALUE *value;
   undefined8 uVar5;
   undefined4 uVar6;
   int iVar7;
   long in_FS_OFFSET;
   ASN1_INTEGER *local_48;
   long local_40;
   iVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (ASN1_INTEGER*)0x0;
   a = ASIdentifiers_new();
   if (a != (ASIdentifiers*)0x0) {
      LAB_00101abf:iVar2 = OPENSSL_sk_num(param_3);
      if (iVar2 <= iVar7) goto LAB_00101c38;
      value = (CONF_VALUE*)OPENSSL_sk_value(param_3, iVar7);
      iVar2 = ossl_v3_name_cmp(value->name, &_LC9);
      if (iVar2 != 0) {
         iVar2 = ossl_v3_name_cmp(value->name, &_LC10);
         if (iVar2 == 0) {
            pcVar4 = value->value;
            uVar6 = 1;
            goto joined_r0x00101b22;
         }
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x21f, "v2i_ASIdentifiers");
         uVar5 = 0x73;
         goto LAB_00101bdf;
      }
      pcVar4 = value->value;
      uVar6 = 0;
      joined_r0x00101b22:if (pcVar4 == (char*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x225, "v2i_ASIdentifiers");
         ERR_set_error(0x22, 0x74, 0);
         goto LAB_00101b60;
      }
      iVar2 = strcmp(pcVar4, "inherit");
      if (iVar2 == 0) {
         iVar2 = X509v3_asid_add_inherit(a, uVar6);
         if (iVar2 != 0) goto LAB_00101abb;
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x22f, "v2i_ASIdentifiers");
         uVar5 = 0xa5;
      } else {
         sVar3 = strspn(pcVar4, "0123456789");
         iVar2 = (int)sVar3;
         if (pcVar4[iVar2] == '\0') {
            iVar2 = X509V3_get_value_int(value, &local_48);
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/x509/v3_asid.c", 0x251, "v2i_ASIdentifiers");
               ERR_set_error(0x22, 0x80022, 0);
               goto LAB_00101b60;
            }
            y = (ASN1_INTEGER*)0x0;
            LAB_00101a97:iVar2 = X509v3_asid_add_id_or_range(a, uVar6, local_48, y);
            if (iVar2 == 0) {
               ERR_new();
               uVar5 = 0x266;
               LAB_00101c61:ERR_set_debug("crypto/x509/v3_asid.c", uVar5, "v2i_ASIdentifiers");
               ERR_set_error(0x22, 0x80022, 0);
               goto LAB_00101b62;
            }
            local_48 = (ASN1_INTEGER*)0x0;
            LAB_00101abb:iVar7 = iVar7 + 1;
            goto LAB_00101abf;
         }
         sVar3 = strspn(pcVar4 + iVar2, " \t");
         iVar1 = (int)sVar3 + iVar2;
         if (pcVar4[iVar1] != '-') {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_asid.c", 0x23e, "v2i_ASIdentifiers");
            uVar5 = 0xa2;
            goto LAB_00101bdf;
         }
         iVar1 = iVar1 + 1;
         sVar3 = strspn(pcVar4 + iVar1, " \t");
         iVar1 = iVar1 + (int)sVar3;
         sVar3 = strspn(pcVar4 + iVar1, "0123456789");
         if (pcVar4[iVar1 + (int)sVar3] == '\0') {
            pcVar4 = CRYPTO_strdup(pcVar4, "crypto/x509/v3_asid.c", 0x255);
            if (pcVar4 == (char*)0x0) goto LAB_00101b60;
            pcVar4[iVar2] = '\0';
            local_48 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, pcVar4);
            y = s2i_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, pcVar4 + iVar1);
            CRYPTO_free(pcVar4);
            if (( local_48 == (ASN1_INTEGER*)0x0 ) || ( y == (ASN1_INTEGER*)0x0 )) {
               ERR_new();
               uVar5 = 0x25d;
               goto LAB_00101c61;
            }
            iVar2 = ASN1_INTEGER_cmp(local_48, y);
            if (iVar2 < 1) goto LAB_00101a97;
            ERR_new();
            ERR_set_debug("crypto/x509/v3_asid.c", 0x261, "v2i_ASIdentifiers");
            ERR_set_error(0x22, 0x74, 0);
            goto LAB_00101b62;
         }
         ERR_new();
         ERR_set_debug("crypto/x509/v3_asid.c", 0x246, "v2i_ASIdentifiers");
         uVar5 = 0xa3;
      }
      LAB_00101bdf:ERR_set_error(0x22, uVar5, 0);
      ERR_add_error_data(4, "name=", value->name, ", value=", value->value);
      goto LAB_00101b60;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_asid.c", 0x20f, "v2i_ASIdentifiers");
   ERR_set_error(0x22, 0x80022, 0);
   LAB_00101b7c:a = (ASIdentifiers*)0x0;
   LAB_00101b7f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return a;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00101c38:iVar7 = X509v3_asid_canonize(a);
   if (iVar7 != 0) goto LAB_00101b7f;
   LAB_00101b60:y = (ASN1_INTEGER*)0x0;
   LAB_00101b62:ASIdentifiers_free(a);
   ASN1_INTEGER_free(local_48);
   ASN1_INTEGER_free(y);
   goto LAB_00101b7c;
}bool X509v3_asid_inherits(undefined8 *param_1) {
   bool bVar1;
   bVar1 = false;
   if (( param_1 != (undefined8*)0x0 ) && ( ( (int*)*param_1 == (int*)0x0 || ( bVar1 = true * (int*)*param_1 != 0 ) ) )) {
      bVar1 = false;
      if ((int*)param_1[1] != (int*)0x0) {
         bVar1 = *(int*)param_1[1] == 0;
      }
   }
   return bVar1;
}bool X509v3_asid_subset(long *param_1, long *param_2) {
   int iVar1;
   if (param_1 == (long*)0x0) {
      return true;
   }
   if (param_1 == param_2) {
      return true;
   }
   if (( ( ( param_2 != (long*)0x0 ) && ( iVar1 = X509v3_asid_inherits() ),iVar1 == 0 ) ) && ( iVar1 = iVar1 == 0 )) &&( ( *param_1 == 0 || ( ( *param_2 != 0 && ( iVar1 = asid_contains(*(undefined8*)( *param_2 + 8 ), *(undefined8*)( *param_1 + 8 )) ),iVar1 != 0 ) ) ) )(param_1[1] == 0);
   {
      return true;
   }
   if (param_2[1] != 0) {
      iVar1 = asid_contains(*(undefined8*)( param_2[1] + 8 ), *(undefined8*)( param_1[1] + 8 ));
      return iVar1 != 0;
   }
}return false;}undefined8 X509v3_asid_validate_path(long param_1) {
   int iVar1;
   undefined8 uVar2;
   if (*(long*)( param_1 + 0x98 ) != 0) {
      iVar1 = OPENSSL_sk_num();
      if (( iVar1 != 0 ) && ( *(long*)( param_1 + 0x38 ) != 0 )) {
         uVar2 = asid_validate_path_internal(param_1, *(undefined8*)( param_1 + 0x98 ), 0);
         return uVar2;
      }
   }
   *(undefined4*)( param_1 + 0xb0 ) = 1;
   return 0;
}undefined8 X509v3_asid_validate_resource_set(long param_1, long param_2, int param_3) {
   int iVar1;
   undefined8 uVar2;
   if (param_2 == 0) {
      return 1;
   }
   if (( param_1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      if (( param_3 == 0 ) && ( iVar1 = iVar1 != 0 )) {
         return 0;
      }
      uVar2 = asid_validate_path_internal(0, param_1, param_2);
      return uVar2;
   }
   return 0;
}
