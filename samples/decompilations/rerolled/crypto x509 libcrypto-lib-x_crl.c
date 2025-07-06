undefined1 *X509_REVOKED_it(void) {
   return local_it_3;
}undefined1 *X509_CRL_INFO_it(void) {
   return local_it_2;
}undefined8 crl_inf_cb(int param_1, long *param_2) {
   long lVar1;
   if (( ( *param_2 != 0 ) && ( lVar1 = *(long*)( *param_2 + 0x30 ) ),param_1 == 5 )) {
      OPENSSL_sk_set_cmp_func(lVar1, X509_REVOKED_cmp);
      return 1;
   }
   return 1;
}void X509_REVOKED_cmp(undefined8 *param_1, undefined8 *param_2) {
   ASN1_STRING_cmp((ASN1_STRING*)*param_1, (ASN1_STRING*)*param_2);
   return;
}void def_crl_verify(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar1 = *(undefined8*)( param_1 + 0xf0 );
   uVar2 = *(undefined8*)( param_1 + 0xe8 );
   uVar3 = X509_CRL_INFO_it();
   ASN1_item_verify_ex(uVar3, param_1 + 0x58, param_1 + 0x68, param_1, 0, param_2, uVar2, uVar1);
   return;
}char def_crl_lookup(long param_1, undefined8 *param_2, ASN1_INTEGER *param_3, X509_NAME *param_4) {
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   ASN1_INTEGER *x;
   int *piVar6;
   X509_NAME *pXVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_78;
   uchar *puStack_70;
   long local_68;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0x30 ) != 0) {
      iVar2 = OPENSSL_sk_is_sorted();
      if (iVar2 == 0) {
         iVar2 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0xe0 ));
         if (iVar2 == 0) goto LAB_00100118;
         OPENSSL_sk_sort(*(undefined8*)( param_1 + 0x30 ));
         CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xe0 ));
      }
      local_78._0_4_ = param_3->length;
      local_78._4_4_ = param_3->type;
      puStack_70 = param_3->data;
      local_68 = param_3->flags;
      iVar2 = OPENSSL_sk_find(*(undefined8*)( param_1 + 0x30 ), &local_78);
      if (( -1 < iVar2 ) && ( iVar3 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x30 )) ),iVar2 < iVar3) {
         do {
            x = (ASN1_INTEGER*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0x30 ), iVar2);
            iVar4 = ASN1_INTEGER_cmp(x, param_3);
            if (iVar4 != 0) break;
            lVar8 = x[1].flags;
            if (lVar8 == 0) {
               if (param_4 != (X509_NAME*)0x0) {
                  pXVar7 = (X509_NAME*)X509_CRL_get_issuer(param_1);
                  iVar4 = X509_NAME_cmp(param_4, pXVar7);
                  if (iVar4 != 0) goto LAB_00100250;
               }
               LAB_00100208:if (param_2 != (undefined8*)0x0) {
                  *param_2 = x;
               }
               cVar1 = ( x[2].length == 8 ) + '\x01';
               goto LAB_0010011a;
            }
            iVar4 = 0;
            pXVar7 = param_4;
            if (param_4 == (X509_NAME*)0x0) {
               pXVar7 = (X509_NAME*)X509_CRL_get_issuer(param_1);
               lVar8 = x[1].flags;
            }
            for (; iVar5 = OPENSSL_sk_num(lVar8),iVar4 < iVar5; iVar4 = iVar4 + 1) {
               piVar6 = (int*)OPENSSL_sk_value(x[1].flags, iVar4);
               if (( *piVar6 == 4 ) && ( iVar5 = X509_NAME_cmp(pXVar7, *(X509_NAME**)( piVar6 + 2 )) ),iVar5 == 0) goto LAB_00100208;
               lVar8 = x[1].flags;
            }
            LAB_00100250:iVar2 = iVar2 + 1;
         } while ( iVar3 != iVar2 );
      }
   }
   LAB_00100118:cVar1 = '\0';
   LAB_0010011a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return cVar1;
}undefined1 *X509_CRL_it(void) {
   return local_it_1;
}X509_REVOKED *d2i_X509_REVOKED(X509_REVOKED **a, uchar **in, long len) {
   ASN1_ITEM *it;
   X509_REVOKED *pXVar1;
   it = (ASN1_ITEM*)X509_REVOKED_it();
   pXVar1 = (X509_REVOKED*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pXVar1;
}int i2d_X509_REVOKED(X509_REVOKED *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)X509_REVOKED_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */X509_REVOKED *X509_REVOKED_new(void) {
   ASN1_ITEM *it;
   X509_REVOKED *pXVar1;
   it = (ASN1_ITEM*)X509_REVOKED_it();
   pXVar1 = (X509_REVOKED*)ASN1_item_new(it);
   return pXVar1;
}void X509_REVOKED_free(X509_REVOKED *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)X509_REVOKED_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}void X509_REVOKED_dup(void *param_1) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)X509_REVOKED_it();
   ASN1_item_dup(it, param_1);
   return;
}X509_CRL_INFO *d2i_X509_CRL_INFO(X509_CRL_INFO **a, uchar **in, long len) {
   ASN1_ITEM *it;
   X509_CRL_INFO *pXVar1;
   it = (ASN1_ITEM*)X509_CRL_INFO_it();
   pXVar1 = (X509_CRL_INFO*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pXVar1;
}int i2d_X509_CRL_INFO(X509_CRL_INFO *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)X509_CRL_INFO_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */X509_CRL_INFO *X509_CRL_INFO_new(void) {
   ASN1_ITEM *it;
   X509_CRL_INFO *pXVar1;
   it = (ASN1_ITEM*)X509_CRL_INFO_it();
   pXVar1 = (X509_CRL_INFO*)ASN1_item_new(it);
   return pXVar1;
}void X509_CRL_INFO_free(X509_CRL_INFO *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)X509_CRL_INFO_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}X509_CRL *d2i_X509_CRL(X509_CRL **a, uchar **in, long len) {
   ASN1_ITEM *it;
   X509_CRL *pXVar1;
   it = (ASN1_ITEM*)X509_CRL_it();
   pXVar1 = (X509_CRL*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pXVar1;
}int i2d_X509_CRL(X509_CRL *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)X509_CRL_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */X509_CRL *X509_CRL_new(void) {
   ASN1_ITEM *it;
   X509_CRL *pXVar1;
   it = (ASN1_ITEM*)X509_CRL_it();
   pXVar1 = (X509_CRL*)ASN1_item_new(it);
   return pXVar1;
}void X509_CRL_free(X509_CRL *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)X509_CRL_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}X509_CRL *X509_CRL_dup(X509_CRL *crl) {
   ASN1_ITEM *it;
   X509_CRL *pXVar1;
   it = (ASN1_ITEM*)X509_CRL_it();
   pXVar1 = (X509_CRL*)ASN1_item_dup(it, crl);
   return pXVar1;
}int X509_CRL_add0_revoked(X509_CRL *crl, X509_REVOKED *rev) {
   int iVar1;
   long lVar2;
   lVar2._0_4_ = crl->idp_flags;
   lVar2._4_4_ = crl->idp_reasons;
   if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_new(X509_REVOKED_cmp);
      crl->idp_flags = (int)lVar2;
      crl->idp_reasons = (int)( (ulong)lVar2 >> 0x20 );
      if (lVar2 == 0) goto LAB_00100512;
   }
   iVar1 = OPENSSL_sk_push(lVar2, rev);
   if (iVar1 != 0) {
      for (int i_1134 = 0; i_1134 < 4; i_1134++) {
         crl->sha1_hash[( i_1134 + 8 )] = '\x01';
      }
      return 1;
   }
   LAB_00100512:ERR_new();
   ERR_set_debug("crypto/x509/x_crl.c", 0x171, "X509_CRL_add0_revoked");
   ERR_set_error(0xd, 0x8000f, 0);
   return 0;
}int X509_CRL_verify(X509_CRL *a, EVP_PKEY *r) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( a[1].sha1_hash + 0x10 ) + 0x20 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_1135 = 0; i_1135 < 2; i_1135++) {
         /* WARNING: Could not recover jumptable at 0x00100564. Too many branches */
      }
      iVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return iVar1;
   }
   return 0;
}int X509_CRL_get0_by_serial(X509_CRL *crl, X509_REVOKED **ret, ASN1_INTEGER *serial) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( crl[1].sha1_hash + 0x10 ) + 0x18 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_1136 = 0; i_1136 < 2; i_1136++) {
         /* WARNING: Could not recover jumptable at 0x00100596. Too many branches */
      }
      iVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return iVar1;
   }
   return 0;
}int X509_CRL_get0_by_cert(X509_CRL *crl, X509_REVOKED **ret, X509 *x) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   X509_NAME *pXVar2;
   undefined8 uVar3;
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( crl[1].sha1_hash + 0x10 ) + 0x18 );
   if (UNRECOVERED_JUMPTABLE == (code*)0x0) {
      return 0;
   }
   pXVar2 = X509_get_issuer_name(x);
   uVar3 = X509_get0_serialNumber(x);
   for (int i_1137 = 0; i_1137 < 2; i_1137++) {
      /* WARNING: Could not recover jumptable at 0x00100613. Too many branches */
   }
   iVar1 = ( *UNRECOVERED_JUMPTABLE )(crl, ret, uVar3, pXVar2);
   return iVar1;
}void X509_CRL_set_default_method(undefined1 *param_1) {
   if (param_1 == (undefined*)0x0) {
      param_1 = int_crl_meth;
   }
   default_crl_method = param_1;
   return;
}void X509_CRL_METHOD_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)CRYPTO_malloc(0x28, "crypto/x509/x_crl.c", 0x1eb);
   if (puVar1 != (undefined4*)0x0) {
      *(undefined8*)( puVar1 + 2 ) = param_1;
      *(undefined8*)( puVar1 + 4 ) = param_2;
      *(undefined8*)( puVar1 + 6 ) = param_3;
      *(undefined8*)( puVar1 + 8 ) = param_4;
      *puVar1 = 1;
   }
   return;
}void X509_CRL_METHOD_free(byte *param_1) {
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 1 ) != 0 )) {
      CRYPTO_free(param_1);
      return;
   }
   return;
}void X509_CRL_set_meth_data(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xd8 ) = param_2;
   return;
}undefined8 X509_CRL_get_meth_data(long param_1) {
   return *(undefined8*)( param_1 + 0xd8 );
}bool ossl_x509_crl_set0_libctx(long param_1, undefined8 param_2, char *param_3) {
   char *pcVar1;
   bool bVar2;
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0xe8 ) = param_2;
      CRYPTO_free(*(void**)( param_1 + 0xf0 ));
      bVar2 = true;
      *(undefined8*)( param_1 + 0xf0 ) = 0;
      if (param_3 != (char*)0x0) {
         pcVar1 = CRYPTO_strdup(param_3, "crypto/x509/x_crl.c", 0x210);
         bVar2 = pcVar1 != (char*)0x0;
         *(char**)( param_1 + 0xf0 ) = pcVar1;
      }
      return bVar2;
   }
   return true;
}bool crl_cb(undefined4 param_1, undefined8 *param_2, undefined8 param_3, long param_4) {
   uint *puVar1;
   byte bVar2;
   X509_CRL *data;
   int *piVar3;
   byte *pbVar4;
   undefined8 uVar5;
   code *pcVar6;
   undefined *puVar7;
   AUTHORITY_KEYID *pAVar8;
   int iVar9;
   uint uVar10;
   uint uVar11;
   int iVar12;
   EVP_MD *type;
   undefined8 *puVar13;
   X509_NAME *iname;
   ASN1_BIT_STRING *pAVar14;
   ISSUING_DIST_POINT *pIVar15;
   void *pvVar16;
   X509_EXTENSION *pXVar17;
   ASN1_OBJECT *pAVar18;
   undefined8 uVar19;
   X509_REVOKED *x;
   ASN1_INTEGER *a;
   ASN1_ENUMERATED *a_00;
   long lVar20;
   ASN1_INTEGER *pAVar21;
   int iVar22;
   long in_FS_OFFSET;
   bool bVar23;
   int local_48;
   int local_44;
   long local_40;
   data = (X509_CRL*)*param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_1) {
      case 3:
    if (((*(long *)(data[1].sha1_hash + 0x10) != 0) &&
        (pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 0x10), pcVar6 != (code *)0x0)) &&
       (iVar9 = (*pcVar6)(data), iVar9 == 0)) {
LAB_00100ce8:
      bVar23 = false;
      goto LAB_00100864;
    }
    AUTHORITY_KEYID_free((AUTHORITY_KEYID *)data[1].signature);
    ISSUING_DIST_POINT_free(*(ISSUING_DIST_POINT **)&data[1].references);
    ASN1_INTEGER_free((ASN1_INTEGER *)data[1].idp);
    ASN1_INTEGER_free(*(ASN1_INTEGER **)&data[1].idp_flags);
    OPENSSL_sk_pop_free(data[1].crl_number,GENERAL_NAMES_free);
    CRYPTO_free(data[2].crl);
    break;
      case 4:
    pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 0x10);
    if ((pcVar6 != (code *)0x0) && (iVar9 = (*pcVar6)(data), iVar9 == 0)) goto LAB_00100ce8;
    AUTHORITY_KEYID_free((AUTHORITY_KEYID *)data[1].signature);
    ISSUING_DIST_POINT_free(*(ISSUING_DIST_POINT **)&data[1].references);
    ASN1_INTEGER_free((ASN1_INTEGER *)data[1].idp);
    ASN1_INTEGER_free(*(ASN1_INTEGER **)&data[1].idp_flags);
    OPENSSL_sk_pop_free(data[1].crl_number,GENERAL_NAMES_free);
      case 1:
    pAVar8 = _LC1;
    *(undefined4 *)((long)&data[1].sig_alg + 4) = 0;
    data[1].issuers = (stack_st_GENERAL_NAMES *)0x0;
    data[1].akid = pAVar8;
    puVar7 = default_crl_method;
    data[1].crl_number = (ASN1_INTEGER *)0x0;
    *(undefined **)(data[1].sha1_hash + 0x10) = puVar7;
    data[1].signature = (ASN1_BIT_STRING *)0x0;
    data[1].references = 0;
    data[1].flags = 0;
    data[1].idp = (ISSUING_DIST_POINT *)0x0;
    data[1].idp_flags = 0;
    data[1].idp_reasons = 0;
    break;
      case 5:
    type = EVP_sha1();
    iVar9 = X509_CRL_digest(data,type,(uchar *)&data[1].base_crl_number,(uint *)0x0);
    if (iVar9 == 0) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x100000;
    }
    puVar13 = (undefined8 *)X509_CRL_get_ext_d2i(data,0x302,&local_48,(int *)0x0);
    *(undefined8 **)&data[1].references = puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      if (local_48 != -1) goto LAB_00100a42;
    }
    else {
      uVar11 = *(uint *)&data[1].akid;
      iVar9 = *(int *)(puVar13 + 1);
      iVar22 = 1;
      uVar10 = uVar11 | 1;
      *(uint *)&data[1].akid = uVar10;
      if (0 < iVar9) {
        iVar22 = 2;
        uVar10 = uVar11 | 5;
        *(uint *)&data[1].akid = uVar10;
      }
      if (*(int *)((long)puVar13 + 0xc) < 1) {
        if (0 < *(int *)((long)puVar13 + 0x1c)) {
          uVar10 = uVar10 | 0x10;
          goto LAB_00100d6a;
        }
      }
      else {
        if (*(int *)((long)puVar13 + 0x1c) < 1) {
          uVar10 = uVar10 | 8;
LAB_00100d6a:
          *(uint *)&data[1].akid = uVar10;
          if (iVar22 != 2) goto LAB_00100947;
        }
        else {
          uVar10 = uVar10 | 0x18;
        }
        uVar10 = uVar10 | 2;
        *(uint *)&data[1].akid = uVar10;
      }
LAB_00100947:
      if (0 < *(int *)(puVar13 + 3)) {
        uVar10 = uVar10 | 0x20;
        *(uint *)&data[1].akid = uVar10;
      }
      piVar3 = (int *)puVar13[2];
      if (piVar3 != (int *)0x0) {
        iVar9 = *piVar3;
        *(uint *)&data[1].akid = uVar10 | 0x40;
        if (iVar9 < 1) {
          uVar11 = *(uint *)((long)&data[1].akid + 4);
        }
        else {
          pbVar4 = *(byte **)(piVar3 + 2);
          bVar2 = *pbVar4;
          uVar11 = (uint)bVar2;
          *(uint *)((long)&data[1].akid + 4) = (uint)bVar2;
          if (iVar9 != 1) {
            uVar11 = (uint)CONCAT11(pbVar4[1],bVar2);
          }
        }
        *(uint *)((long)&data[1].akid + 4) = uVar11 & 0x807f;
      }
      iname = (X509_NAME *)X509_CRL_get_issuer(data);
      iVar9 = DIST_POINT_set_dpname((DIST_POINT_NAME *)*puVar13,iname);
      if (iVar9 == 0) {
LAB_00100a42:
        puVar1 = (uint *)((long)&data[1].sig_alg + 4);
        *puVar1 = *puVar1 | 0x80;
      }
    }
    pAVar14 = (ASN1_BIT_STRING *)X509_CRL_get_ext_d2i(data,0x5a,&local_48,(int *)0x0);
    data[1].signature = pAVar14;
    if ((pAVar14 == (ASN1_BIT_STRING *)0x0) && (local_48 != -1)) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pIVar15 = (ISSUING_DIST_POINT *)X509_CRL_get_ext_d2i(data,0x58,&local_48,(int *)0x0);
    data[1].idp = pIVar15;
    if ((pIVar15 == (ISSUING_DIST_POINT *)0x0) && (local_48 != -1)) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pvVar16 = X509_CRL_get_ext_d2i(data,0x8c,&local_48,(int *)0x0);
    *(void **)&data[1].idp_flags = pvVar16;
    if (pvVar16 == (void *)0x0) {
      if (local_48 != -1) goto LAB_00100d24;
    }
    else if (data[1].idp == (ISSUING_DIST_POINT *)0x0) {
LAB_00100d24:
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pAVar21 = data->crl_number;
    iVar22 = 0;
    iVar9 = OPENSSL_sk_num(pAVar21);
    if (0 < iVar9) {
      do {
        pXVar17 = (X509_EXTENSION *)OPENSSL_sk_value(pAVar21,iVar22);
        pAVar18 = X509_EXTENSION_get_object(pXVar17);
        iVar9 = OBJ_obj2nid(pAVar18);
        if (iVar9 == 0x359) {
          puVar1 = (uint *)((long)&data[1].sig_alg + 4);
          *puVar1 = *puVar1 | 0x1000;
          iVar9 = X509_EXTENSION_get_critical(pXVar17);
          if (iVar9 != 0) goto LAB_00100d0a;
        }
        else {
          iVar12 = X509_EXTENSION_get_critical(pXVar17);
          if (((iVar12 != 0) && (iVar9 != 0x302 && iVar9 != 0x5a)) && (iVar9 != 0x8c)) {
LAB_00100d0a:
            puVar1 = (uint *)((long)&data[1].sig_alg + 4);
            *puVar1 = *puVar1 | 0x200;
            break;
          }
        }
        iVar22 = iVar22 + 1;
        iVar9 = OPENSSL_sk_num(pAVar21);
      } while (iVar22 < iVar9);
    }
    uVar19 = X509_CRL_get_REVOKED(data);
    pAVar21 = (ASN1_INTEGER *)0x0;
    for (iVar9 = 0; iVar22 = OPENSSL_sk_num(uVar19), iVar9 < iVar22; iVar9 = iVar9 + 1) {
      x = (X509_REVOKED *)OPENSSL_sk_value(uVar19,iVar9);
      a = (ASN1_INTEGER *)X509_REVOKED_get_ext_d2i(x,0x303,&local_44,(int *)0x0);
      if (a != (ASN1_INTEGER *)0x0) {
        pAVar21 = data[1].crl_number;
        if (pAVar21 == (ASN1_INTEGER *)0x0) {
          pAVar21 = (ASN1_INTEGER *)OPENSSL_sk_new_null();
          data[1].crl_number = pAVar21;
          if (pAVar21 != (ASN1_INTEGER *)0x0) goto LAB_00100bb7;
        }
        else {
LAB_00100bb7:
          iVar22 = OPENSSL_sk_push(pAVar21,a);
          if (iVar22 != 0) goto LAB_00100bca;
        }
        GENERAL_NAMES_free((GENERAL_NAMES *)a);
        goto LAB_00100ce8;
      }
      a = pAVar21;
      if (local_44 != -1) {
LAB_00100c93:
        puVar1 = (uint *)((long)&data[1].sig_alg + 4);
        *puVar1 = *puVar1 | 0x80;
        break;
      }
LAB_00100bca:
      x[1].serialNumber = a;
      a_00 = (ASN1_ENUMERATED *)X509_REVOKED_get_ext_d2i(x,0x8d,&local_44,(int *)0x0);
      if (a_00 == (ASN1_ENUMERATED *)0x0) {
        if (local_44 != -1) goto LAB_00100c93;
        *(undefined4 *)&x[1].revocationDate = 0xffffffff;
      }
      else {
        lVar20 = ASN1_ENUMERATED_get(a_00);
        *(int *)&x[1].revocationDate = (int)lVar20;
        ASN1_ENUMERATED_free(a_00);
      }
      uVar5._0_4_ = x->reason;
      uVar5._4_4_ = x->sequence;
      local_44 = 0;
      while (iVar22 = OPENSSL_sk_num(uVar5), local_44 < iVar22) {
        pXVar17 = (X509_EXTENSION *)OPENSSL_sk_value(uVar5);
        iVar22 = X509_EXTENSION_get_critical(pXVar17);
        if (iVar22 != 0) {
          pAVar18 = X509_EXTENSION_get_object(pXVar17);
          iVar22 = OBJ_obj2nid(pAVar18);
          if (iVar22 != 0x303) {
            puVar1 = (uint *)((long)&data[1].sig_alg + 4);
            *puVar1 = *puVar1 | 0x200;
            break;
          }
        }
        local_44 = local_44 + 1;
      }
      pAVar21 = a;
    }
    pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 8);
    if ((pcVar6 != (code *)0x0) && (iVar9 = (*pcVar6)(data), iVar9 == 0)) goto LAB_00100ce8;
    puVar1 = (uint *)((long)&data[1].sig_alg + 4);
    *puVar1 = *puVar1 | 0x100;
    break;
      case 0xf:
    iVar9 = ossl_x509_crl_set0_libctx
                      (data,*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0xf0));
    bVar23 = iVar9 != 0;
    goto LAB_00100864;
   }
   bVar23 = true;
   LAB_00100864:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar23;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}X509_CRL *X509_CRL_new_ex(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ASN1_ITEM *it;
   X509_CRL *a;
   it = (ASN1_ITEM*)X509_CRL_it();
   a = (X509_CRL*)ASN1_item_new(it);
   iVar1 = ossl_x509_crl_set0_libctx(a, param_1, param_2);
   if (iVar1 != 0) {
      return a;
   }
   X509_CRL_free(a);
   return (X509_CRL*)0x0;
}
