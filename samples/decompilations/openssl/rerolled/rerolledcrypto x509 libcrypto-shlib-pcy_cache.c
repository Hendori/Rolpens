void policy_data_cmp(long *param_1, long *param_2) {
   OBJ_cmp(*(ASN1_OBJECT**)( *param_1 + 8 ), *(ASN1_OBJECT**)( *param_2 + 8 ));
   return;
}
void ossl_policy_cache_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      ossl_policy_data_free(*param_1);
      OPENSSL_sk_pop_free(param_1[1], ossl_policy_data_free);
      CRYPTO_free(param_1);
      return;
   }

   return;
}
long ossl_policy_cache_set(X509 *param_1) {
   long *plVar1;
   ASN1_INTEGER *pAVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   undefined1(*pauVar6)[16];
   POLICY_CONSTRAINTS *a;
   long lVar7;
   void *pvVar8;
   ASN1_INTEGER *pAVar9;
   undefined8 uVar10;
   ASN1_INTEGER *pAVar11;
   int iVar12;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   lVar7 = param_1[1].ex_pcpathlen;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( lVar7 != 0 ) || ( iVar3 = iVar3 == 0 )) goto LAB_0010009e;
   if (( param_1[1].ex_pcpathlen == 0 ) && ( pauVar6 = (undefined1(*) [16])CRYPTO_malloc(0x28, "crypto/x509/pcy_cache.c", 0x5e) ),pauVar6 != (undefined1(*) [16])0x0) {
      param_1[1].ex_pcpathlen = (long)pauVar6;
      *pauVar6 = (undefined1[16])0x0;
      *(undefined8*)pauVar6[2] = 0xffffffffffffffff;
      *(undefined4*)pauVar6[1] = 0xffffffff;
      for (int i = 0; i < 3; i++) {
         *(undefined4*)( pauVar6[1] + ( 4*i + 4 ) ) = 4294967295;
      }

      a = (POLICY_CONSTRAINTS*)X509_get_ext_d2i(param_1, 0x191, &local_44, (int*)0x0);
      pAVar2 = (ASN1_INTEGER*)0x0;
      pAVar9 = pAVar2;
      if (a == (POLICY_CONSTRAINTS*)0x0) {
         if (local_44 != -1) goto LAB_00100300;
         LAB_001001aa:pvVar8 = X509_get_ext_d2i(param_1, 0x59, &local_44, (int*)0x0);
         iVar3 = local_44;
         if (pvVar8 == (void*)0x0) {
            if (local_44 == -1) goto LAB_001000e7;
            goto LAB_00100300;
         }

         plVar1 = (long*)param_1[1].ex_pcpathlen;
         iVar4 = OPENSSL_sk_num(pvVar8);
         if (iVar4 < 1) {
            ossl_policy_data_free(0);
            OPENSSL_sk_pop_free(pvVar8, &POLICYINFO_free);
            LAB_001002d0:OPENSSL_sk_pop_free(plVar1[1], ossl_policy_data_free);
            plVar1[1] = 0;
            goto LAB_001000e7;
         }

         iVar12 = 0;
         lVar7 = OPENSSL_sk_new(0x100000);
         plVar1[1] = lVar7;
         if (lVar7 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/pcy_cache.c", 0x26, "policy_cache_create");
            uVar10 = 0x8000f;
            LAB_00100424:ERR_set_error(0x22, uVar10, 0);
            OPENSSL_sk_pop_free(pvVar8, &POLICYINFO_free);
            goto LAB_001002d0;
         }

         do {
            uVar10 = OPENSSL_sk_value(pvVar8, iVar12);
            lVar7 = ossl_policy_data_new(uVar10, 0, iVar3);
            if (lVar7 == 0) {
               ERR_new();
               ERR_set_debug("crypto/x509/pcy_cache.c", 0x2d, "policy_cache_create");
               uVar10 = 0x8000b;
               goto LAB_00100424;
            }

            iVar5 = OBJ_obj2nid(*(ASN1_OBJECT**)( lVar7 + 8 ));
            if (iVar5 != 0x2ea) {
               iVar5 = OPENSSL_sk_find(plVar1[1], lVar7);
               if (-1 < iVar5) goto LAB_00100446;
               iVar5 = OPENSSL_sk_push(plVar1[1], lVar7);
               if (iVar5 != 0) goto LAB_0010021d;
               ERR_new();
               ERR_set_debug("crypto/x509/pcy_cache.c", 0x3d, "policy_cache_create");
               ERR_set_error(0x22, 0x8000f, 0);
               LAB_001002b7:ossl_policy_data_free(lVar7);
               OPENSSL_sk_pop_free(pvVar8, &POLICYINFO_free);
               goto LAB_001002d0;
            }

            if (*plVar1 != 0) {
               LAB_00100446:*(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x800;
               goto LAB_001002b7;
            }

            *plVar1 = lVar7;
            LAB_0010021d:iVar12 = iVar12 + 1;
         }
 while ( iVar4 != iVar12 );
         OPENSSL_sk_sort(plVar1[1]);
         ossl_policy_data_free(0);
         OPENSSL_sk_pop_free(pvVar8, &POLICYINFO_free);
         local_44 = 1;
         pvVar8 = X509_get_ext_d2i(param_1, 0x2eb, &local_44, (int*)0x0);
         if (pvVar8 == (void*)0x0) {
            if (local_44 == -1) goto LAB_00100395;
            goto LAB_00100300;
         }

         local_44 = ossl_policy_cache_set_mapping(param_1, pvVar8);
         if (local_44 < 1) goto LAB_00100300;
         LAB_00100395:pAVar9 = (ASN1_INTEGER*)X509_get_ext_d2i(param_1, 0x2ec, &local_44, (int*)0x0);
         if (pAVar9 == (ASN1_INTEGER*)0x0) {
            pAVar9 = pAVar2;
            if (local_44 != -1) goto LAB_00100300;
            pAVar9 = (ASN1_INTEGER*)0x0;
         }
 else {
            if (pAVar9.type == 0x102) goto LAB_00100300;
            lVar7 = ASN1_INTEGER_get(pAVar9);
            *(long*)pauVar6[1] = lVar7;
         }

      }
 else {
         pAVar11 = a.requireExplicitPolicy;
         if (pAVar11 == (ASN1_INTEGER*)0x0) {
            pAVar11 = a.inhibitPolicyMapping;
            if (pAVar11 != (ASN1_INTEGER*)0x0) goto LAB_00100194;
         }
 else if (pAVar11.type != 0x102) {
            lVar7 = ASN1_INTEGER_get(pAVar11);
            *(long*)( pauVar6[1] + 8 ) = lVar7;
            pAVar11 = a.inhibitPolicyMapping;
            if (pAVar11 == (ASN1_INTEGER*)0x0) goto LAB_001001aa;
            LAB_00100194:if (pAVar11.type != 0x102) {
               lVar7 = ASN1_INTEGER_get(pAVar11);
               *(long*)pauVar6[2] = lVar7;
               goto LAB_001001aa;
            }

         }

         LAB_00100300:*(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x800;
      }

      POLICY_CONSTRAINTS_free(a);
      ASN1_INTEGER_free(pAVar9);
   }

   LAB_001000e7:CRYPTO_THREAD_unlock(param_1[1].nc);
   lVar7 = param_1[1].ex_pcpathlen;
   LAB_0010009e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar7;
}
void ossl_policy_cache_find_data(long param_1, undefined8 param_2) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   undefined1 auStack_38[8];
   undefined8 local_30;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_2;
   uVar1 = OPENSSL_sk_find(*(undefined8*)( param_1 + 8 ), auStack_38);
   OPENSSL_sk_value(*(undefined8*)( param_1 + 8 ), uVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

