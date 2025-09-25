int X509_CRL_set_version(X509_CRL *x, long version) {
   int iVar1;
   X509_CRL_INFO *a;
   if (x == (X509_CRL*)0x0) {
      return 0;
   }

   a = x.crl;
   if (a == (X509_CRL_INFO*)0x0) {
      a = (X509_CRL_INFO*)ASN1_INTEGER_new();
      x.crl = a;
      if (a == (X509_CRL_INFO*)0x0) {
         return 0;
      }

   }

   iVar1 = ASN1_INTEGER_set((ASN1_INTEGER*)a, version);
   if (iVar1 == 0) {
      return 0;
   }

   x.sha1_hash[8] = '\x01';
   for (int i = 0; i < 3; i++) {
      x.sha1_hash[( i + 9 )] = '\0';
   }

   return 1;
}
int X509_CRL_set_issuer_name(X509_CRL *x, X509_NAME *name) {
   int iVar1;
   if (x == (X509_CRL*)0x0) {
      return 0;
   }

   iVar1 = X509_NAME_set((X509_NAME**)&x.references, name);
   if (iVar1 != 0) {
      x.sha1_hash[8] = '\x01';
      for (int i = 0; i < 3; i++) {
         x.sha1_hash[( i + 9 )] = '\0';
      }

      return 1;
   }

   return 0;
}
undefined8 X509_CRL_set1_lastUpdate(long param_1, long param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( param_2 != 0 )) {
      uVar1 = ossl_x509_set1_time(param_1 + 0x50, param_1 + 0x20, param_2);
      return uVar1;
   }

   return 0;
}
undefined8 X509_CRL_set1_nextUpdate(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_x509_set1_time(param_1 + 0x50, param_1 + 0x28, param_2);
      return uVar1;
   }

   return 0;
}
int X509_CRL_sort(X509_CRL *crl) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   int iVar6;
   iVar6 = 0;
   uVar1._0_4_ = crl.idp_flags;
   uVar1._4_4_ = crl.idp_reasons;
   OPENSSL_sk_sort(uVar1);
   while (true) {
      uVar3._0_4_ = crl.idp_flags;
      uVar3._4_4_ = crl.idp_reasons;
      iVar4 = OPENSSL_sk_num(uVar3);
      if (iVar4 <= iVar6) break;
      uVar2._0_4_ = crl.idp_flags;
      uVar2._4_4_ = crl.idp_reasons;
      lVar5 = OPENSSL_sk_value(uVar2, iVar6);
      *(int*)( lVar5 + 0x34 ) = iVar6;
      iVar6 = iVar6 + 1;
   }
;
   crl.sha1_hash[8] = '\x01';
   for (int i = 0; i < 3; i++) {
      crl.sha1_hash[( i + 9 )] = '\0';
   }

   return 1;
}
bool X509_CRL_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0x80 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}
void X509_CRL_get_version(undefined8 *param_1) {
   ASN1_INTEGER_get((ASN1_INTEGER*)*param_1);
   return;
}
undefined8 X509_CRL_get0_lastUpdate(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}
undefined8 X509_CRL_get0_nextUpdate(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}
undefined8 X509_CRL_get_lastUpdate(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}
undefined8 X509_CRL_get_nextUpdate(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}
undefined8 X509_CRL_get_issuer(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}
undefined8 X509_CRL_get0_extensions(long param_1) {
   return *(undefined8*)( param_1 + 0x38 );
}
undefined8 X509_CRL_get_REVOKED(long param_1) {
   return *(undefined8*)( param_1 + 0x30 );
}
void X509_CRL_get0_signature(long param_1, long *param_2, long *param_3) {
   if (param_2 != (long*)0x0) {
      *param_2 = param_1 + 0x68;
   }

   if (param_3 != (long*)0x0) {
      *param_3 = param_1 + 0x58;
   }

   return;
}
void X509_CRL_get_signature_nid(long param_1) {
   OBJ_obj2nid(*(ASN1_OBJECT**)( param_1 + 0x58 ));
   return;
}
undefined8 X509_REVOKED_get0_revocationDate(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}
int X509_REVOKED_set_revocationDate(X509_REVOKED *r, ASN1_TIME *tm) {
   int iVar1;
   if (( r != (X509_REVOKED*)0x0 ) && ( tm != (ASN1_TIME*)0x0 )) {
      iVar1 = ossl_x509_set1_time(0, &r.issuer, tm);
      return iVar1;
   }

   return 0;
}
undefined8 X509_REVOKED_get0_serialNumber(undefined8 param_1) {
   return param_1;
}
int X509_REVOKED_set_serialNumber(X509_REVOKED *x, ASN1_INTEGER *serial) {
   int iVar1;
   if (x == (X509_REVOKED*)0x0) {
      return 0;
   }

   if (x == (X509_REVOKED*)serial) {
      return 1;
   }

   iVar1 = ASN1_STRING_copy((ASN1_STRING*)x, serial);
   return iVar1;
}
undefined8 X509_REVOKED_get0_extensions(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}
void i2d_re_X509_CRL_tbs(X509_CRL_INFO *param_1, uchar **param_2) {
   *(undefined4*)&param_1[1].version = 1;
   i2d_X509_CRL_INFO(param_1, param_2);
   return;
}

