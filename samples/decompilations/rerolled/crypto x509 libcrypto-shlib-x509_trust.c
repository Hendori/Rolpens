int tr_cmp(undefined8 *param_1, undefined8 *param_2) {
   return *(int*)*param_1 - *(int*)*param_2;
}undefined8 trust_compat(undefined8 param_1, X509 *param_2, uint param_3) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = X509_check_purpose(param_2, -1, 0);
   if (( iVar1 == 1 ) && ( ( param_3 & 4 ) == 0 )) {
      uVar2 = 1;
      if (( (ulong)param_2[1].name & 0x2000 ) == 0) {
         uVar2 = 3;
      }
      return uVar2;
   }
   return 3;
}void trtable_free(void *param_1) {
   if (param_1 == (void*)0x0) {
      return;
   }
   if (( *(uint*)( (long)param_1 + 4 ) & 1 ) != 0) {
      if (( *(uint*)( (long)param_1 + 4 ) & 2 ) != 0) {
         CRYPTO_free(*(void**)( (long)param_1 + 0x10 ));
      }
      CRYPTO_free(param_1);
      return;
   }
   return;
}undefined8 obj_trust(int param_1, X509 *param_2, uint param_3) {
   stack_st_GENERAL_NAME *psVar1;
   int iVar2;
   ASN1_OBJECT *pAVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   char **ppcVar7;
   psVar1 = param_2[1].altname;
   if (psVar1 != (stack_st_GENERAL_NAME*)0x0) {
      ppcVar7 = (psVar1->stack).data;
      if (ppcVar7 != (char**)0x0) {
         uVar4 = param_3 & 0x10;
         if (( param_3 & 0x10 ) == 0) {
            for (; iVar5 = OPENSSL_sk_num(ppcVar7),(int)uVar4 < iVar5; uVar4 = uVar4 + 1) {
               pAVar3 = (ASN1_OBJECT*)OPENSSL_sk_value((psVar1->stack).data, uVar4);
               iVar5 = OBJ_obj2nid(pAVar3);
               if (param_1 == iVar5) {
                  return 2;
               }
               ppcVar7 = (psVar1->stack).data;
            }
            lVar6 = *(long*)&psVar1->stack;
            if (lVar6 == 0) goto LAB_001001e8;
            goto LAB_00100145;
         }
         for (iVar5 = 0; iVar2 = OPENSSL_sk_num(ppcVar7),iVar5 < iVar2; iVar5 = iVar5 + 1) {
            pAVar3 = (ASN1_OBJECT*)OPENSSL_sk_value((psVar1->stack).data, iVar5);
            iVar2 = OBJ_obj2nid(pAVar3);
            if (iVar2 == param_1) {
               return 2;
            }
            if (iVar2 == 0x38e) {
               return 2;
            }
            ppcVar7 = (psVar1->stack).data;
         }
      }
      lVar6 = *(long*)&psVar1->stack;
      if (lVar6 != 0) {
         iVar5 = 0;
         if (( param_3 & 0x10 ) != 0) {
            while (true) {
               iVar2 = OPENSSL_sk_num(lVar6);
               if (iVar2 <= iVar5) {
                  return 2;
               }
               pAVar3 = (ASN1_OBJECT*)OPENSSL_sk_value(*(undefined8*)&psVar1->stack, iVar5);
               iVar2 = OBJ_obj2nid(pAVar3);
               if (param_1 == iVar2) break;
               if (iVar2 == 0x38e) {
                  return 1;
               }
               lVar6 = *(long*)&psVar1->stack;
               iVar5 = iVar5 + 1;
            };
            return 1;
         }
         LAB_00100145:iVar5 = 0;
         while (true) {
            iVar2 = OPENSSL_sk_num(lVar6);
            if (iVar2 <= iVar5) {
               return 2;
            }
            pAVar3 = (ASN1_OBJECT*)OPENSSL_sk_value(*(undefined8*)&psVar1->stack, iVar5);
            iVar2 = OBJ_obj2nid(pAVar3);
            if (param_1 == iVar2) break;
            lVar6 = *(long*)&psVar1->stack;
            iVar5 = iVar5 + 1;
         };
         return 1;
      }
   }
   LAB_001001e8:if (( ( ( ( param_3 & 8 ) != 0 ) && ( iVar5 = X509_check_purpose(param_2, -1, 0) ),iVar5 == 1 ) ) && ( ( param_3 & 4 ) == 0 )) {
      return 1;
   }
   return 3;
}void trust_1oid(long param_1, undefined8 param_2, uint param_3) {
   obj_trust(*(undefined4*)( param_1 + 0x18 ), param_2, param_3 & 0xffffffe7);
   return;
}void trust_1oidany(long param_1, undefined8 param_2, uint param_3) {
   obj_trust(*(undefined4*)( param_1 + 0x18 ), param_2, param_3 | 0x18);
   return;
}int X509_TRUST_set_default(int param_1, X509 *param_2, int param_3) {
   undefined *puVar1;
   undefined4 in_register_0000003c;
   puVar1 = default_trust;
   default_trust = (undefined*)CONCAT44(in_register_0000003c, param_1);
   return (int)puVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int X509_TRUST_get_count(void) {
   int iVar1;
   if (trtable != 0) {
      iVar1 = OPENSSL_sk_num();
      return iVar1 + 8;
   }
   return 8;
}X509_TRUST *X509_TRUST_get0(int idx) {
   X509_TRUST *pXVar1;
   if (idx < 0) {
      return (X509_TRUST*)0x0;
   }
   if (idx < 8) {
      return (X509_TRUST*)( trstandard + (long)idx * 0x28 );
   }
   pXVar1 = (X509_TRUST*)OPENSSL_sk_value(trtable, idx + -8);
   return pXVar1;
}int X509_TRUST_get_by_id(int id) {
   uint uVar1;
   int iVar2;
   long in_FS_OFFSET;
   int local_38[10];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = id - 1;
   if (7 < uVar1) {
      if (trtable != 0) {
         local_38[0] = id;
         OPENSSL_sk_sort(trtable);
         iVar2 = OPENSSL_sk_find(trtable, local_38);
         if (-1 < iVar2) {
            uVar1 = iVar2 + 8;
            goto LAB_0010036d;
         }
      }
      uVar1 = 0xffffffff;
   }
   LAB_0010036d:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int X509_check_trust(X509 *x, int id, int flags) {
   int iVar1;
   X509_TRUST *pXVar2;
   if (id == 0) {
      iVar1 = obj_trust(0x38e, x, flags | 8);
      return iVar1;
   }
   iVar1 = X509_TRUST_get_by_id(id);
   if (-1 < iVar1) {
      pXVar2 = X509_TRUST_get0(iVar1);
      for (int i_1226 = 0; i_1226 < 2; i_1226++) {
         /* WARNING: Could not recover jumptable at 0x001003d7. Too many branches */
      }
      iVar1 = ( *pXVar2->check_trust )(pXVar2, x, flags);
      return iVar1;
   }
   for (int i_1225 = 0; i_1225 < 2; i_1225++) {
      /* WARNING: Could not recover jumptable at 0x001003ec. Too many branches */
   }
   iVar1 = ( *(code*)default_trust )(id, x, flags);
   return iVar1;
}int X509_TRUST_set(int *t, int trust) {
   int iVar1;
   iVar1 = X509_TRUST_get_by_id(trust);
   if (-1 < iVar1) {
      *t = trust;
      return 1;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/x509_trust.c", 0x77, "X509_TRUST_set");
   ERR_set_error(0xb, 0x7b, 0);
   return 0;
}int X509_TRUST_add(int id, int flags, ck *ck, char *name, int arg1, void *arg2) {
   int iVar1;
   X509_TRUST *pXVar2;
   char *pcVar3;
   int *ptr;
   long lVar4;
   undefined8 uVar5;
   iVar1 = X509_TRUST_get_by_id(id);
   if (iVar1 < 0) {
      ptr = (int*)CRYPTO_malloc(0x28, "crypto/x509/x509_trust.c", 0x8d);
      if (ptr != (int*)0x0) {
         ptr[1] = 1;
         pcVar3 = CRYPTO_strdup(name, "crypto/x509/x509_trust.c", 0x97);
         *(char**)( ptr + 4 ) = pcVar3;
         if (pcVar3 != (char*)0x0) {
            *ptr = id;
            lVar4 = trtable;
            *(ck**)( ptr + 2 ) = ck;
            ptr[6] = arg1;
            *(void**)( ptr + 8 ) = arg2;
            ptr[1] = ptr[1] & 1U | flags & 0xfffffffeU | 2;
            if (( lVar4 == 0 ) && ( lVar4 = OPENSSL_sk_new(0x100000) ),trtable = lVar4,lVar4 == 0) {
               ERR_new(0);
               uVar5 = 0xa7;
            } else {
               iVar1 = OPENSSL_sk_push(lVar4, ptr);
               if (iVar1 != 0) {
                  return 1;
               }
               ERR_new();
               uVar5 = 0xab;
            }
            ERR_set_debug("crypto/x509/x509_trust.c", uVar5, "X509_TRUST_add");
            ERR_set_error(0xb, 0x8000f, 0);
         }
         CRYPTO_free(*(void**)( ptr + 4 ));
         CRYPTO_free(ptr);
      }
   } else {
      pXVar2 = X509_TRUST_get0(iVar1);
      if (( pXVar2->flags & 2 ) != 0) {
         CRYPTO_free(pXVar2->name);
      }
      pcVar3 = CRYPTO_strdup(name, "crypto/x509/x509_trust.c", 0x97);
      pXVar2->name = pcVar3;
      if (pcVar3 != (char*)0x0) {
         pXVar2->trust = id;
         pXVar2->check_trust = (_func_1814*)ck;
         pXVar2->arg1 = arg1;
         pXVar2->arg2 = arg2;
         pXVar2->flags = pXVar2->flags & 1U | flags & 0xfffffffeU | 2;
         return 1;
      }
   }
   return 0;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */void X509_TRUST_cleanup(void) {
   OPENSSL_sk_pop_free(trtable, trtable_free);
   trtable = 0;
   return;
}int X509_TRUST_get_flags(X509_TRUST *xp) {
   return xp->flags;
}char *X509_TRUST_get0_name(X509_TRUST *xp) {
   return xp->name;
}int X509_TRUST_get_trust(X509_TRUST *xp) {
   return xp->trust;
}
