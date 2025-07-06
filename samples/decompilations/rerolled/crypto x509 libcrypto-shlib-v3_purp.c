int xp_cmp(undefined8 *param_1, undefined8 *param_2) {
   return *(int*)*param_1 - *(int*)*param_2;
}int nid_cmp_BSEARCH_CMP_FN(int *param_1, int *param_2) {
   return *param_1 - *param_2;
}undefined8 no_check_purpose(void) {
   return 1;
}void xptable_free(void *param_1) {
   if (param_1 == (void*)0x0) {
      return;
   }
   if (( *(uint*)( (long)param_1 + 8 ) & 1 ) != 0) {
      if (( *(uint*)( (long)param_1 + 8 ) & 2 ) != 0) {
         CRYPTO_free(*(void**)( (long)param_1 + 0x18 ));
         CRYPTO_free(*(void**)( (long)param_1 + 0x20 ));
      }
      CRYPTO_free(param_1);
      return;
   }
   return;
}uint check_purpose_ns_ssl_server(undefined8 param_1, long param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uVar1 = *(uint*)( param_2 + 0xe8 );
   if (( ( uVar1 & 4 ) == 0 ) || ( uVar2 = 0(*(byte*)( param_2 + 0xf0 ) & 0x11) != 0 )) {
      if (param_3 == 0) {
         if (( ( uVar1 & 8 ) == 0 ) || ( uVar2 = 0(*(byte*)( param_2 + 0xf4 ) & 0x40) != 0 )) {
            uVar2 = 0;
            if (( *(ulong*)( param_2 + 0xe8 ) & 0xa800000002 ) != 2) {
               return ( uint )(( *(ulong*)( param_2 + 0xe8 ) & 0x2000000002 ) != 2);
            }
         }
      } else {
         uVar2 = 0;
         if (( *(ulong*)( param_2 + 0xe8 ) & 0x400000002 ) != 2) {
            if (( uVar1 & 1 ) != 0) {
               return uVar1 >> 4 & 1;
            }
            uVar2 = 1;
            if (( ( ~uVar1 & 0x2040 ) != 0 ) && ( ( uVar1 & 2 ) == 0 )) {
               uVar3 = 0;
               uVar2 = 0;
               if (( uVar1 & 8 ) != 0) {
                  if (( *(uint*)( param_2 + 0xf4 ) & 7 ) != 0) {
                     uVar3 = *(uint*)( param_2 + 0xf4 ) >> 2 & 1;
                  }
                  return uVar3;
               }
            }
         }
      }
   }
   return uVar2;
}uint check_purpose_ocsp_helper(undefined8 param_1, long param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uVar2 = 1;
   if (( param_3 != 0 ) && ( uVar2 = 0(*(ulong*)( param_2 + 0xe8 ) & 0x400000002) != 2 )) {
      uVar1 = *(uint*)( param_2 + 0xe8 );
      if (( uVar1 & 1 ) != 0) {
         return uVar1 >> 4 & 1;
      }
      if (( ~uVar1 & 0x2040 ) == 0) {
         return 3;
      }
      uVar2 = 4;
      if (( ( uVar1 & 2 ) == 0 ) && ( uVar2 = 0(uVar1 & 8) != 0 )) {
         return -(uint)((*(uint *)(param_2 + 0xf4) & 7) != 0) & 5;
      }
   }
   return uVar2;
}uint check_purpose_crl_sign(undefined8 param_1, long param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   if (param_3 == 0) {
      uVar2 = ( uint )(( *(ulong*)( param_2 + 0xe8 ) & 0x200000002 ) != 2);
   } else {
      uVar2 = 0;
      if (( *(ulong*)( param_2 + 0xe8 ) & 0x400000002 ) != 2) {
         uVar1 = *(uint*)( param_2 + 0xe8 );
         if (( uVar1 & 1 ) == 0) {
            if (( ~uVar1 & 0x2040 ) == 0) {
               uVar2 = 3;
            } else {
               uVar2 = 4;
               if (( ( uVar1 & 2 ) == 0 ) && ( uVar2 = 0(uVar1 & 8) != 0 )) {
                  uVar2 = -(uint)((*(uint *)(param_2 + 0xf4) & 7) != 0) & 5;
               }
            }
         } else {
            uVar2 = uVar1 >> 4 & 1;
         }
      }
   }
   return uVar2;
}undefined1[16];check_purpose_smime_sign(undefined8 param_1, long param_2, ulong param_3) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined8 uVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uVar1 = *(uint*)( param_2 + 0xe8 );
   if (( ( uVar1 & 4 ) == 0 ) || ( uVar3 = 0(*(byte*)( param_2 + 0xf0 ) & 4) != 0 )) {
      if ((int)param_3 == 0) {
         if (( ( uVar1 & 8 ) == 0 ) || ( ( *(uint*)( param_2 + 0xf4 ) & 0x20 ) != 0 )) {
            uVar4 = 1;
         } else {
            if (( *(uint*)( param_2 + 0xf4 ) & 0x80 ) == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = param_3;
               return auVar2 << 0x40;
            }
            uVar4 = 2;
         }
         if (( *(ulong*)( param_2 + 0xe8 ) & 0xc000000002 ) == 2) {
            uVar4 = 0;
         }
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar4;
         return auVar6;
      }
      auVar8._8_8_ = *(ulong*)( param_2 + 0xe8 ) & 0x400000002;
      uVar3 = 0;
      param_3 = auVar8._8_8_;
      if (auVar8._8_8_ != 2) {
         if (( uVar1 & 1 ) != 0) {
            auVar8._0_4_ = uVar1 >> 4 & 1;
            auVar8._4_4_ = 0;
            return auVar8;
         }
         if (( ~uVar1 & 0x2040 ) == 0) {
            auVar9._8_8_ = auVar8._8_8_;
            auVar9._0_8_ = 3;
            return auVar9;
         }
         uVar3 = 4;
         if (( uVar1 & 2 ) == 0) {
            uVar3 = 0;
            if (( uVar1 & 8 ) != 0) {
               uVar1 = *(uint*)( param_2 + 0xf4 );
               param_3 = (ulong)uVar1;
               uVar3 = 0;
               if (( uVar1 & 7 ) != 0) {
                  auVar7._8_4_ = -(uVar1 & 2);
                  auVar7._0_4_ = -(uint)((uVar1 & 2) != 0) & 5;
                  auVar7._4_4_ = 0;
                  auVar7._12_4_ = 0;
                  return auVar7;
               }
            }
         }
      }
   }
   auVar5._8_8_ = param_3;
   auVar5._0_8_ = uVar3;
   return auVar5;
}undefined1[16];check_purpose_smime_encrypt(undefined8 param_1, long param_2, ulong param_3) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined8 uVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uVar1 = *(uint*)( param_2 + 0xe8 );
   if (( ( uVar1 & 4 ) == 0 ) || ( uVar3 = 0(*(byte*)( param_2 + 0xf0 ) & 4) != 0 )) {
      if ((int)param_3 == 0) {
         if (( ( uVar1 & 8 ) == 0 ) || ( ( *(uint*)( param_2 + 0xf4 ) & 0x20 ) != 0 )) {
            uVar4 = 1;
         } else {
            if (( *(uint*)( param_2 + 0xf4 ) & 0x80 ) == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = param_3;
               return auVar2 << 0x40;
            }
            uVar4 = 2;
         }
         if (( *(ulong*)( param_2 + 0xe8 ) & 0x2000000002 ) == 2) {
            uVar4 = 0;
         }
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar4;
         return auVar6;
      }
      auVar8._8_8_ = *(ulong*)( param_2 + 0xe8 ) & 0x400000002;
      uVar3 = 0;
      param_3 = auVar8._8_8_;
      if (auVar8._8_8_ != 2) {
         if (( uVar1 & 1 ) != 0) {
            auVar8._0_4_ = uVar1 >> 4 & 1;
            auVar8._4_4_ = 0;
            return auVar8;
         }
         if (( ~uVar1 & 0x2040 ) == 0) {
            auVar9._8_8_ = auVar8._8_8_;
            auVar9._0_8_ = 3;
            return auVar9;
         }
         uVar3 = 4;
         if (( uVar1 & 2 ) == 0) {
            uVar3 = 0;
            if (( uVar1 & 8 ) != 0) {
               uVar1 = *(uint*)( param_2 + 0xf4 );
               param_3 = (ulong)uVar1;
               uVar3 = 0;
               if (( uVar1 & 7 ) != 0) {
                  auVar7._8_4_ = -(uVar1 & 2);
                  auVar7._0_4_ = -(uint)((uVar1 & 2) != 0) & 5;
                  auVar7._4_4_ = 0;
                  auVar7._12_4_ = 0;
                  return auVar7;
               }
            }
         }
      }
   }
   auVar5._8_8_ = param_3;
   auVar5._0_8_ = uVar3;
   return auVar5;
}uint check_purpose_timestamp_sign(undefined8 param_1, X509 *param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   X509_EXTENSION *ex;
   if (param_3 == 0) {
      if (( (ulong)param_2[1].name & 2 ) != 0) {
         if (( (ulong)param_2[1].name & 0xffffff3f00000000 ) != 0) {
            return 0;
         }
         if (( (ulong)param_2[1].name & 0xc000000000 ) == 0) {
            return 0;
         }
      }
      uVar2 = 0;
      if (( ( (ulong)param_2[1].name & 4 ) != 0 ) && ( uVar2 = 0 * (int*)&param_2[1].ex_data.sk == 0x40 )) {
         iVar3 = X509_get_ext_by_NID(param_2, 0x7e, -1);
         uVar2 = 1;
         if (-1 < iVar3) {
            ex = X509_get_ext(param_2, iVar3);
            iVar3 = X509_EXTENSION_get_critical(ex);
            return ( uint )(iVar3 != 0);
         }
      }
   } else {
      uVar2 = 0;
      if (( (ulong)param_2[1].name & 0x400000002 ) != 2) {
         uVar1 = *(uint*)&param_2[1].name;
         if (( uVar1 & 1 ) != 0) {
            return uVar1 >> 4 & 1;
         }
         if (( ~uVar1 & 0x2040 ) == 0) {
            return 3;
         }
         uVar2 = 4;
         if (( ( uVar1 & 2 ) == 0 ) && ( uVar2 = 0(uVar1 & 8) != 0 )) {
            return -(uint)(((ulong)param_2[1].ex_data.sk & 0x700000000) != 0) & 5;
         }
      }
   }
   return uVar2;
}uint check_purpose_code_sign(undefined8 param_1, X509 *param_2, int param_3) {
   uint uVar1;
   stack_st_void *psVar2;
   int iVar3;
   X509_EXTENSION *ex;
   if (param_3 == 0) {
      if (( ( ( ( (ulong)param_2[1].name & 2 ) != 0 ) && ( ( (ulong)param_2[1].name & 0x8000000000 ) != 0 ) ) && ( ( (ulong)param_2[1].name & 0x600000000 ) == 0 ) ) && ( iVar3 = -1 < iVar3 )) {
         ex = X509_get_ext(param_2, iVar3);
         iVar3 = X509_EXTENSION_get_critical(ex);
         if (( ( iVar3 != 0 ) && ( ( (ulong)param_2[1].name & 4 ) != 0 ) ) && ( psVar2 = param_2[1].ex_data.sk((ulong)psVar2 & 8) != 0 )) {
            return ( uint )(( (ulong)psVar2 & 0x101 ) == 0);
         }
      }
   } else if (( (ulong)param_2[1].name & 0x400000002 ) != 2) {
      uVar1 = *(uint*)&param_2[1].name;
      if (( uVar1 & 1 ) != 0) {
         return uVar1 >> 4 & 1;
      }
      if (( ~uVar1 & 0x2040 ) == 0) {
         return 3;
      }
      if (( uVar1 & 2 ) != 0) {
         return 4;
      }
      if (( uVar1 & 8 ) != 0) {
         if (( (ulong)param_2[1].ex_data.sk & 0x700000000 ) != 0) {
            return 5;
         }
         return 0;
      }
   }
   return 0;
}uint check_purpose_ssl_server(undefined8 param_1, long param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uVar1 = *(uint*)( param_2 + 0xe8 );
   if (( ( uVar1 & 4 ) == 0 ) || ( uVar2 = 0(*(byte*)( param_2 + 0xf0 ) & 0x11) != 0 )) {
      if (param_3 == 0) {
         if (( ( uVar1 & 8 ) == 0 ) || ( uVar2 = 0(*(byte*)( param_2 + 0xf4 ) & 0x40) != 0 )) {
            uVar2 = ( uint )(( *(ulong*)( param_2 + 0xe8 ) & 0xa800000002 ) != 2);
         }
      } else {
         uVar2 = 0;
         if (( *(ulong*)( param_2 + 0xe8 ) & 0x400000002 ) != 2) {
            if (( uVar1 & 1 ) == 0) {
               uVar2 = 1;
               if (( ( ( ( ~uVar1 & 0x2040 ) != 0 ) && ( ( uVar1 & 2 ) == 0 ) ) && ( uVar2 = 0(uVar1 & 8) != 0 ) ) && ( ( *(uint*)( param_2 + 0xf4 ) & 7 ) != 0 )) {
                  uVar2 = *(uint*)( param_2 + 0xf4 ) >> 2 & 1;
               }
            } else {
               uVar2 = uVar1 >> 4 & 1;
            }
         }
      }
   }
   return uVar2;
}uint check_purpose_ssl_client(undefined8 param_1, long param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uVar1 = *(uint*)( param_2 + 0xe8 );
   if (( ( uVar1 & 4 ) == 0 ) || ( uVar2 = 0(*(byte*)( param_2 + 0xf0 ) & 2) != 0 )) {
      if (param_3 == 0) {
         uVar2 = 0;
         if (( ( *(ulong*)( param_2 + 0xe8 ) & 0x8800000002 ) != 2 ) && ( uVar2 = 1(uVar1 & 8) != 0 )) {
            return *(uint*)( param_2 + 0xf4 ) >> 7 & 1;
         }
      } else {
         uVar2 = 0;
         if (( *(ulong*)( param_2 + 0xe8 ) & 0x400000002 ) != 2) {
            if (( uVar1 & 1 ) != 0) {
               return uVar1 >> 4 & 1;
            }
            uVar2 = 1;
            if (( ( ( ~uVar1 & 0x2040 ) != 0 ) && ( ( uVar1 & 2 ) == 0 ) ) && ( uVar2 = 0(uVar1 & 8) != 0 )) {
               if (( *(uint*)( param_2 + 0xf4 ) & 7 ) != 0) {
                  uVar2 = *(uint*)( param_2 + 0xf4 ) >> 2 & 1;
               }
               return uVar2;
            }
         }
      }
   }
   return uVar2;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int X509_PURPOSE_get_count(void) {
   int iVar1;
   if (xptable != 0) {
      iVar1 = OPENSSL_sk_num();
      return iVar1 + 10;
   }
   return 10;
}X509_PURPOSE *X509_PURPOSE_get0(int idx) {
   X509_PURPOSE *pXVar1;
   if (idx < 0) {
      return (X509_PURPOSE*)0x0;
   }
   if (idx < 10) {
      return (X509_PURPOSE*)( xstandard + (long)idx * 0x30 );
   }
   pXVar1 = (X509_PURPOSE*)OPENSSL_sk_value(xptable, idx + -10);
   return pXVar1;
}int X509_PURPOSE_get_by_sname(char *sname) {
   int iVar1;
   X509_PURPOSE *pXVar2;
   int idx;
   idx = 0;
   while (true) {
      iVar1 = X509_PURPOSE_get_count();
      if (iVar1 <= idx) {
         return -1;
      }
      pXVar2 = X509_PURPOSE_get0(idx);
      iVar1 = strcmp(pXVar2->sname, sname);
      if (iVar1 == 0) break;
      idx = idx + 1;
   };
   return idx;
}int X509_PURPOSE_get_by_id(int id) {
   uint uVar1;
   int iVar2;
   long in_FS_OFFSET;
   int local_48[14];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = id - 1;
   if (9 < uVar1) {
      if (xptable != 0) {
         local_48[0] = id;
         iVar2 = OPENSSL_sk_find(xptable, local_48);
         if (-1 < iVar2) {
            uVar1 = iVar2 + 10;
            goto LAB_00100911;
         }
      }
      uVar1 = 0xffffffff;
   }
   LAB_00100911:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int X509_PURPOSE_set(int *p, int purpose) {
   int iVar1;
   if (( purpose != 0 ) && ( iVar1 = iVar1 == -1 )) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_purp.c", 0x6d, "X509_PURPOSE_set");
      ERR_set_error(0x22, 0x92, 0);
      return 0;
   }
   *p = purpose;
   return 1;
}int X509_PURPOSE_get_unused_id(void) {
   int iVar1;
   int id;
   id = 0xb;
   while (true) {
      iVar1 = X509_PURPOSE_get_by_id(id);
      if (iVar1 == -1) break;
      id = id + 1;
   };
   return id;
}int X509_PURPOSE_add(int id, int trust, int flags, ck *ck, char *name, char *sname, void *arg) {
   int iVar1;
   int iVar2;
   X509_PURPOSE *ptr;
   char *pcVar3;
   char *pcVar4;
   undefined8 uVar5;
   int local_3c;
   if (id < 1) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_purp.c", 0xb9, "X509_PURPOSE_add");
      ERR_set_error(0x22, 0x92, 0);
      return 0;
   }
   if (( ( ( trust < 0 ) || ( name == (char*)0x0 ) ) || ( sname == (char*)0x0 ) ) || ( ck == (ck*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_purp.c", 0xbd, "X509_PURPOSE_add");
      ERR_set_error(0xb, 0x80106, 0);
      return 0;
   }
   iVar1 = X509_PURPOSE_get_by_sname(sname);
   if (iVar1 == -1) {
      iVar2 = X509_PURPOSE_get_by_id(id);
      if (iVar2 != -1) {
         ERR_new();
         uVar5 = 0xca;
         goto LAB_00100c06;
      }
      ptr = (X509_PURPOSE*)CRYPTO_malloc(0x30, "crypto/x509/v3_purp.c", 0xcd);
      if (ptr == (X509_PURPOSE*)0x0) {
         return 0;
      }
      ptr->flags = 1;
      pcVar3 = CRYPTO_strdup(name, "crypto/x509/v3_purp.c", 0xdf);
      ptr->name = pcVar3;
      pcVar4 = CRYPTO_strdup(sname, "crypto/x509/v3_purp.c", 0xe0);
      pcVar3 = ptr->name;
      ptr->sname = pcVar4;
      if (( pcVar4 == (char*)0x0 ) || ( pcVar3 == (char*)0x0 )) goto LAB_00100d41;
      local_3c = 0;
   } else {
      ptr = X509_PURPOSE_get0(iVar1);
      local_3c = ptr->purpose;
      if (( id != local_3c ) && ( iVar2 = iVar2 != -1 )) {
         ERR_new();
         uVar5 = 0xd4;
         LAB_00100c06:ERR_set_debug("crypto/x509/v3_purp.c", uVar5, "X509_PURPOSE_add");
         ERR_set_error(0x22, 0xad, 0);
         return 0;
      }
      if (( ptr->flags & 2 ) != 0) {
         CRYPTO_free(ptr->name);
         CRYPTO_free(ptr->sname);
      }
      pcVar3 = CRYPTO_strdup(name, "crypto/x509/v3_purp.c", 0xdf);
      ptr->name = pcVar3;
      pcVar3 = CRYPTO_strdup(sname, "crypto/x509/v3_purp.c", 0xe0);
      ptr->sname = pcVar3;
      if (ptr->name == (char*)0x0) {
         return 0;
      }
      if (pcVar3 == (char*)0x0) {
         return 0;
      }
   }
   ptr->purpose = id;
   ptr->trust = trust;
   ptr->check_purpose = (_func_4299*)ck;
   ptr->flags = flags & 0xfffffffeU | ptr->flags & 1U | 2;
   ptr->usr_data = arg;
   if (iVar1 != -1) {
      if (id == local_3c) {
         return 1;
      }
      OPENSSL_sk_set(xptable, iVar1, ptr);
      return 1;
   }
   if (( xptable == 0 ) && ( xptable = xptable == 0 )) {
      ERR_new(0);
      uVar5 = 0xf1;
   } else {
      iVar1 = OPENSSL_sk_push(xptable, ptr);
      if (iVar1 != 0) {
         return 1;
      }
      ERR_new();
      uVar5 = 0xf5;
   }
   ERR_set_debug("crypto/x509/v3_purp.c", uVar5, "X509_PURPOSE_add");
   ERR_set_error(0x22, 0x8000f, 0);
   pcVar3 = ptr->name;
   LAB_00100d41:CRYPTO_free(pcVar3);
   CRYPTO_free(ptr->sname);
   CRYPTO_free(ptr);
   return 0;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */void X509_PURPOSE_cleanup(void) {
   OPENSSL_sk_pop_free(xptable, xptable_free);
   xptable = 0;
   return;
}int X509_PURPOSE_get_id(X509_PURPOSE *param_1) {
   return param_1->purpose;
}char *X509_PURPOSE_get0_name(X509_PURPOSE *xp) {
   return xp->name;
}char *X509_PURPOSE_get0_sname(X509_PURPOSE *xp) {
   return xp->sname;
}int X509_PURPOSE_get_trust(X509_PURPOSE *xp) {
   return xp->trust;
}int X509_supported_extension(X509_EXTENSION *ex) {
   uint uVar1;
   ASN1_OBJECT *o;
   void *pvVar2;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   o = X509_EXTENSION_get_object(ex);
   uVar1 = OBJ_obj2nid(o);
   local_14 = uVar1;
   if (uVar1 != 0) {
      pvVar2 = OBJ_bsearch_(&local_14, supported_nids_2, 0xf, 4, nid_cmp_BSEARCH_CMP_FN);
      uVar1 = ( uint )(pvVar2 != (void*)0x0);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void X509_set_proxy_flag(long param_1) {
   int iVar1;
   iVar1 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0x158 ));
   if (iVar1 == 0) {
      return;
   }
   *(uint*)( param_1 + 0xe8 ) = *(uint*)( param_1 + 0xe8 ) | 0x400;
   CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0x158 ));
   return;
}void X509_set_proxy_pathlen(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe0 ) = param_2;
   return;
}long ossl_x509_signing_allowed(long param_1, long param_2) {
   long lVar1;
   if (( *(byte*)( param_2 + 0xe9 ) & 4 ) != 0) {
      lVar1 = 0x27;
      if (( *(ulong*)( param_1 + 0xe8 ) & 0x8000000002 ) != 2) {
         lVar1 = 0;
      }
      return lVar1;
   }
   return ( ulong )(( *(ulong*)( param_1 + 0xe8 ) & 0x400000002 ) == 2) << 5;
}int X509_check_akid(X509 *issuer, AUTHORITY_KEYID *akid) {
   ASN1_OCTET_STRING *b;
   ASN1_INTEGER *y;
   GENERAL_NAMES *pGVar1;
   X509_NAME *a;
   int iVar2;
   int iVar3;
   ASN1_INTEGER *x;
   int *piVar4;
   X509_NAME *b_00;
   if (akid == (AUTHORITY_KEYID*)0x0) {
      return 0;
   }
   if (( ( akid->keyid != (ASN1_OCTET_STRING*)0x0 ) && ( b = *(ASN1_OCTET_STRING**)&issuer[1].ex_data.dummy ),b != (ASN1_OCTET_STRING*)0x0 )) {
      return 0x1e;
   }
   y = akid->serial;
   if (y != (ASN1_INTEGER*)0x0) {
      x = (ASN1_INTEGER*)X509_get0_serialNumber(issuer);
      iVar2 = ASN1_INTEGER_cmp(x, y);
      if (iVar2 != 0) {
         return 0x1f;
      }
   }
   pGVar1 = akid->issuer;
   iVar2 = 0;
   if (pGVar1 != (GENERAL_NAMES*)0x0) {
      for (; iVar3 = OPENSSL_sk_num(pGVar1),iVar2 < iVar3; iVar2 = iVar2 + 1) {
         piVar4 = (int*)OPENSSL_sk_value(pGVar1, iVar2);
         if (*piVar4 == 4) {
            a = *(X509_NAME**)( piVar4 + 2 );
            if (a == (X509_NAME*)0x0) {
               return 0;
            }
            b_00 = X509_get_issuer_name(issuer);
            iVar2 = X509_NAME_cmp(a, b_00);
            if (iVar2 == 0) {
               return 0;
            }
            return 0x1f;
         }
      }
   }
   return 0;
}uint ossl_x509v3_cache_extensions(X509 *param_1) {
   byte bVar1;
   ASN1_INTEGER *a;
   byte *pbVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   EVP_MD *type;
   long lVar6;
   BASIC_CONSTRAINTS *a_00;
   ASN1_BIT_STRING *pAVar7;
   PROXY_CERT_INFO_EXTENSION *a_01;
   void *pvVar8;
   ASN1_OBJECT *pAVar9;
   X509_NAME *pXVar10;
   X509_NAME *a_02;
   undefined8 *puVar11;
   int *piVar12;
   int *piVar13;
   ASN1_OCTET_STRING *pAVar14;
   X509_EXTENSION *ex;
   char *pcVar15;
   long in_FS_OFFSET;
   int local_38;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)&param_1[1].rfc3779_addr != 0) {
      LAB_0010101b:uVar3 = ( *(uint*)&param_1[1].name >> 7 ^ 1 ) & 1;
      goto LAB_0010102a;
   }
   iVar4 = CRYPTO_THREAD_write_lock(param_1[1].nc);
   if (iVar4 != 0) {
      if (( (ulong)param_1[1].name & 0x100 ) != 0) {
         CRYPTO_THREAD_unlock(param_1[1].nc);
         goto LAB_0010101b;
      }
      ERR_set_mark();
      type = EVP_sha1();
      iVar4 = X509_digest(param_1, type, (uchar*)&param_1[1].akid, (uint*)0x0);
      if (iVar4 == 0) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x100000;
      }
      lVar6 = X509_get_version(param_1);
      if (lVar6 == 0) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x40;
      }
      param_1[1].signature = (ASN1_BIT_STRING*)0xffffffffffffffff;
      a_00 = (BASIC_CONSTRAINTS*)X509_get_ext_d2i(param_1, 0x57, &local_38, (int*)0x0);
      if (a_00 == (BASIC_CONSTRAINTS*)0x0) {
         if (local_38 != -1) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      } else {
         if (a_00->ca != 0) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x10;
         }
         a = a_00->pathlen;
         if (a != (ASN1_INTEGER*)0x0) {
            if (a->type == 0x102) {
               ERR_new();
               ERR_set_debug("crypto/x509/v3_purp.c", 0x1e3, "ossl_x509v3_cache_extensions");
               ERR_set_error(0x22, 0xa8, 0);
               *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
            } else {
               pAVar7 = (ASN1_BIT_STRING*)ASN1_INTEGER_get(a);
               param_1[1].signature = pAVar7;
            }
         }
         BASIC_CONSTRAINTS_free(a_00);
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 1;
      }
      a_01 = (PROXY_CERT_INFO_EXTENSION*)X509_get_ext_d2i(param_1, 0x297, &local_38, (int*)0x0);
      if (a_01 == (PROXY_CERT_INFO_EXTENSION*)0x0) {
         if (local_38 != -1) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      } else {
         uVar3 = *(uint*)&param_1[1].name;
         if (( uVar3 & 0x10 ) == 0) {
            iVar4 = X509_get_ext_by_NID(param_1, 0x55, -1);
            if (( -1 < iVar4 ) || ( iVar4 = -1 < iVar4 )) {
               uVar3 = *(uint*)&param_1[1].name;
               goto LAB_0010114e;
            }
         } else {
            LAB_0010114e:*(uint*)&param_1[1].name = uVar3 | 0x80;
         }
         lVar6 = -1;
         if (a_01->pcPathLengthConstraint != (ASN1_INTEGER*)0x0) {
            lVar6 = ASN1_INTEGER_get(a_01->pcPathLengthConstraint);
         }
         param_1[1].valid = (int)lVar6;
         param_1[1].references = (int)( (ulong)lVar6 >> 0x20 );
         PROXY_CERT_INFO_EXTENSION_free(a_01);
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x400;
      }
      pAVar7 = (ASN1_BIT_STRING*)X509_get_ext_d2i(param_1, 0x53, &local_38, (int*)0x0);
      if (pAVar7 == (ASN1_BIT_STRING*)0x0) {
         if (local_38 != -1) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      } else {
         *(undefined4*)( (long)&param_1[1].name + 4 ) = 0;
         iVar4 = pAVar7->length;
         if (0 < iVar4) {
            pbVar2 = pAVar7->data;
            bVar1 = *pbVar2;
            *(uint*)( (long)&param_1[1].name + 4 ) = (uint)bVar1;
            if (iVar4 != 1) {
               *(uint*)( (long)&param_1[1].name + 4 ) = (uint)CONCAT11(pbVar2[1], bVar1);
            }
         }
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 2;
         ASN1_BIT_STRING_free(pAVar7);
         if (*(int*)( (long)&param_1[1].name + 4 ) == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_purp.c", 0x20c, "ossl_x509v3_cache_extensions");
            ERR_set_error(0x22, 0xa9, 0);
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      }
      *(undefined4*)&param_1[1].ex_data.sk = 0;
      pvVar8 = X509_get_ext_d2i(param_1, 0x7e, &local_38, (int*)0x0);
      if (pvVar8 == (void*)0x0) {
         if (local_38 != -1) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      } else {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 4;
         local_38 = 0;
         while (iVar4 = OPENSSL_sk_num(pvVar8),local_38 < iVar4) {
            pAVar9 = (ASN1_OBJECT*)OPENSSL_sk_value(pvVar8);
            iVar4 = OBJ_obj2nid(pAVar9);
            if (iVar4 < 0xb5) {
               if (iVar4 < 0x81) goto switchD_0010126d_caseD_86;
               switch (iVar4) {
                  case 0x81:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 1;
            local_38 = local_38 + 1;
            break;
                  case 0x82:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 2;
            local_38 = local_38 + 1;
            break;
                  case 0x83:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 8;
            local_38 = local_38 + 1;
            break;
                  case 0x84:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 4;
            local_38 = local_38 + 1;
            break;
                  case 0x85:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x40;
            local_38 = local_38 + 1;
            break;
                  default:
            goto switchD_0010126d_caseD_86;
                  case 0x89:
                  case 0x8b:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x10;
            local_38 = local_38 + 1;
            break;
                  case 0xb4:
            *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x20;
            local_38 = local_38 + 1;
               }
            } else if (iVar4 == 0x129) {
               *(uint*)&param_1[1].ex_data.sk = *(uint*)&param_1[1].ex_data.sk | 0x80;
               local_38 = local_38 + 1;
            } else {
               if (iVar4 == 0x38e) {
                  *(uint*)&param_1[1].ex_data.sk = *(uint*)&param_1[1].ex_data.sk | 0x100;
               }
               switchD_0010126d_caseD_86:local_38 = local_38 + 1;
            }
         };
         OPENSSL_sk_pop_free(pvVar8, &ASN1_OBJECT_free);
      }
      pAVar7 = (ASN1_BIT_STRING*)X509_get_ext_d2i(param_1, 0x47, &local_38, (int*)0x0);
      if (pAVar7 == (ASN1_BIT_STRING*)0x0) {
         if (local_38 != -1) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
         }
      } else {
         uVar3 = 0;
         if (0 < pAVar7->length) {
            uVar3 = ( uint ) * pAVar7->data;
         }
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 8;
         *(uint*)( (long)&param_1[1].ex_data.sk + 4 ) = uVar3;
         ASN1_BIT_STRING_free(pAVar7);
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x52, &local_38, (int*)0x0);
      *(void**)&param_1[1].ex_data.dummy = pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x5a, &local_38, (int*)0x0);
      param_1[1].ex_pathlen = (long)pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      pXVar10 = X509_get_issuer_name(param_1);
      a_02 = X509_get_subject_name(param_1);
      iVar4 = X509_NAME_cmp(a_02, pXVar10);
      if (iVar4 == 0) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x20;
         iVar4 = X509_check_akid(param_1, (AUTHORITY_KEYID*)param_1[1].ex_pathlen);
         if (( iVar4 == 0 ) && ( lVar6 = lVar6 != 0 )) {
            iVar4 = OBJ_obj2nid((ASN1_OBJECT*)param_1->name);
            iVar4 = OBJ_find_sigid_algs(iVar4, (int*)0x0, &local_34);
            if (iVar4 != 0) {
               pcVar15 = OBJ_nid2sn(local_34);
               iVar4 = EVP_PKEY_is_a(lVar6, pcVar15);
               if (( iVar4 != 0 ) || ( ( iVar4 = EVP_PKEY_is_a(lVar6, &_LC1) ),iVar4 != 0 && ( local_34 == 0x390 ) )) {
                  *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x2000;
               }
            }
         }
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x55, &local_38, (int*)0x0);
      param_1[1].ex_kusage = (ulong)pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x29a, &local_38, (int*)0x0);
      param_1[1].ex_xkusage = (ulong)pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x67, &local_34, (int*)0x0);
      param_1[1].ex_flags = (ulong)pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_34 != -1 )) {
         LAB_0010187b:*(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      } else {
         local_34 = 0;
         while (iVar4 = OPENSSL_sk_num(pvVar8),local_34 < iVar4) {
            puVar11 = (undefined8*)OPENSSL_sk_value(param_1[1].ex_flags);
            piVar13 = (int*)*puVar11;
            if (piVar13 == (int*)0x0) {
               iVar4 = OPENSSL_sk_num(puVar11[2]);
               if (iVar4 < 1) {
                  ERR_new();
                  ERR_set_debug("crypto/x509/v3_purp.c", 0x163, "setup_dp");
                  ERR_set_error(0xb, 0x8f, 0);
                  goto LAB_0010187b;
               }
               piVar12 = (int*)puVar11[1];
               piVar13 = (int*)*puVar11;
               if (piVar12 != (int*)0x0) goto LAB_001014b5;
               uVar3 = 0x807f;
               LAB_001014dc:*(uint*)( puVar11 + 3 ) = uVar3;
               if (piVar13 != (int*)0x0) goto LAB_001014e4;
            } else {
               piVar12 = (int*)puVar11[1];
               if (piVar12 != (int*)0x0) {
                  LAB_001014b5:iVar4 = *piVar12;
                  if (iVar4 < 1) {
                     uVar3 = *(uint*)( puVar11 + 3 );
                  } else {
                     pbVar2 = *(byte**)( piVar12 + 2 );
                     bVar1 = *pbVar2;
                     uVar3 = (uint)bVar1;
                     *(uint*)( puVar11 + 3 ) = (uint)bVar1;
                     if (iVar4 != 1) {
                        uVar3 = (uint)CONCAT11(pbVar2[1], bVar1);
                     }
                  }
                  uVar3 = uVar3 & 0x807f;
                  goto LAB_001014dc;
               }
               *(undefined4*)( puVar11 + 3 ) = 0x807f;
               LAB_001014e4:iVar4 = 0;
               if (*piVar13 == 1) {
                  iVar5 = OPENSSL_sk_num(puVar11[2]);
                  if (0 < iVar5) {
                     do {
                        piVar13 = (int*)OPENSSL_sk_value(puVar11[2], iVar4);
                        if (*piVar13 == 4) {
                           pXVar10 = *(X509_NAME**)( piVar13 + 2 );
                           if (pXVar10 != (X509_NAME*)0x0) goto LAB_00101538;
                           break;
                        }
                        iVar4 = iVar4 + 1;
                        iVar5 = OPENSSL_sk_num(puVar11[2]);
                     } while ( iVar4 < iVar5 );
                  }
                  pXVar10 = X509_get_issuer_name(param_1);
                  LAB_00101538:iVar4 = DIST_POINT_set_dpname((DIST_POINT_NAME*)*puVar11, pXVar10);
                  if (iVar4 == 0) break;
               }
            }
            local_34 = local_34 + 1;
            pvVar8 = (void*)param_1[1].ex_flags;
         };
      }
      pvVar8 = X509_get_ext_d2i(param_1, 0x122, &local_38, (int*)0x0);
      param_1[1].ex_nscert = (ulong)pvVar8;
      if (( pvVar8 == (void*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      pAVar14 = (ASN1_OCTET_STRING*)X509_get_ext_d2i(param_1, 0x123, &local_38, (int*)0x0);
      param_1[1].skid = pAVar14;
      if (( pAVar14 == (ASN1_OCTET_STRING*)0x0 ) && ( local_38 != -1 )) {
         *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80;
      }
      local_38 = 0;
      while (iVar4 = X509_get_ext_count(param_1),local_38 < iVar4) {
         ex = X509_get_ext(param_1, local_38);
         pAVar9 = X509_EXTENSION_get_object(ex);
         iVar4 = OBJ_obj2nid(pAVar9);
         if (iVar4 == 0x359) {
            *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x1000;
         }
         iVar5 = X509_EXTENSION_get_critical(ex);
         if (iVar5 != 0) {
            iVar5 = X509_supported_extension(ex);
            if (iVar5 == 0) {
               *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x200;
               break;
            }
            if (iVar4 == 0x57) {
               *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x10000;
            } else if (iVar4 < 0x58) {
               if (iVar4 == 0x52) {
                  *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x40000;
               } else if (iVar4 == 0x55) {
                  *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x80000;
               }
            } else if (iVar4 == 0x5a) {
               *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x20000;
            }
         }
         local_38 = local_38 + 1;
      };
      ossl_x509_init_sig_info(param_1);
      *(uint*)&param_1[1].name = *(uint*)&param_1[1].name | 0x100;
      *(undefined4*)&param_1[1].rfc3779_addr = 1;
      ERR_pop_to_mark();
      if (( (ulong)param_1[1].name & 0x80 ) == 0) {
         CRYPTO_THREAD_unlock(param_1[1].nc);
         uVar3 = 1;
         goto LAB_0010102a;
      }
      CRYPTO_THREAD_unlock(param_1[1].nc);
      ERR_new();
      ERR_set_debug("crypto/x509/v3_purp.c", 0x2a4, "ossl_x509v3_cache_extensions");
      ERR_set_error(0x22, 0x9e, 0);
   }
   uVar3 = 0;
   LAB_0010102a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int X509_check_purpose(X509 *x, int id, int ca) {
   int iVar1;
   X509_PURPOSE *pXVar2;
   iVar1 = ossl_x509v3_cache_extensions();
   if (iVar1 != 0) {
      if (id == -1) {
         return 1;
      }
      iVar1 = X509_PURPOSE_get_by_id(id);
      if (iVar1 != -1) {
         pXVar2 = X509_PURPOSE_get0(iVar1);
         for (int i_211 = 0; i_211 < 2; i_211++) {
            /* WARNING: Could not recover jumptable at 0x00101ad2. Too many branches */
         }
         iVar1 = ( *pXVar2->check_purpose )(pXVar2, x, ca);
         return iVar1;
      }
   }
   return -1;
}int X509_check_ca(X509 *x) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   iVar2 = ossl_x509v3_cache_extensions();
   uVar3 = 0;
   if (( iVar2 != 0 ) && ( ( (ulong)x[1].name & 0x400000002 ) != 2 )) {
      uVar1 = *(uint*)&x[1].name;
      if (( uVar1 & 1 ) != 0) {
         return uVar1 >> 4 & 1;
      }
      if (( ~uVar1 & 0x2040 ) == 0) {
         return 3;
      }
      uVar3 = 4;
      if (( ( uVar1 & 2 ) == 0 ) && ( uVar3 = 0(uVar1 & 8) != 0 )) {
         uVar3 = -(uint)(((ulong)x[1].ex_data.sk & 0x700000000) != 0) & 5;
      }
   }
   return uVar3;
}int ossl_x509_likely_issued(X509 *param_1, X509 *param_2) {
   int iVar1;
   int iVar2;
   X509_NAME *b;
   X509_NAME *a;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   b = X509_get_issuer_name(param_2);
   a = X509_get_subject_name(param_1);
   iVar2 = 0x1d;
   iVar1 = X509_NAME_cmp(a, b);
   if (iVar1 == 0) {
      iVar1 = ossl_x509v3_cache_extensions(param_1);
      if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
         iVar2 = 1;
      } else {
         iVar2 = X509_check_akid(param_1, (AUTHORITY_KEYID*)param_2[1].ex_pathlen);
         if (iVar2 == 0) {
            lVar3 = X509_get0_pubkey(param_1);
            if (lVar3 == 0) {
               iVar2 = 0x18;
            } else {
               iVar1 = OBJ_obj2nid((ASN1_OBJECT*)param_2->name);
               iVar1 = OBJ_find_sigid_algs(iVar1, (int*)0x0, &local_24);
               if (iVar1 == 0) {
                  iVar2 = 0x4c;
               } else {
                  pcVar4 = OBJ_nid2sn(local_24);
                  iVar1 = EVP_PKEY_is_a(lVar3, pcVar4);
                  if (iVar1 == 0) {
                     iVar1 = EVP_PKEY_is_a(lVar3, &_LC1);
                     if (iVar1 == 0) {
                        iVar2 = 0x4d;
                     } else if (local_24 != 0x390) {
                        iVar2 = 0x4d;
                     }
                  }
               }
            }
         }
      }
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int X509_check_issued(X509 *issuer, X509 *subject) {
   int iVar1;
   iVar1 = ossl_x509_likely_issued();
   if (iVar1 != 0) {
      return iVar1;
   }
   iVar1 = ossl_x509_signing_allowed(issuer, subject);
   return iVar1;
}undefined4 X509_get_extension_flags(X509 *param_1) {
   X509_check_purpose(param_1, -1, 0);
   return *(undefined4*)&param_1[1].name;
}undefined4 X509_get_key_usage(X509 *param_1) {
   int iVar1;
   undefined4 uVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   uVar2 = 0;
   if (( iVar1 == 1 ) && ( uVar2 = 0xffffffff((ulong)param_1[1].name & 2) != 0 )) {
      uVar2 = *(undefined4*)( (long)&param_1[1].name + 4 );
   }
   return uVar2;
}undefined4 X509_get_extended_key_usage(X509 *param_1) {
   int iVar1;
   undefined4 uVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   uVar2 = 0;
   if (( iVar1 == 1 ) && ( uVar2 = 0xffffffff((ulong)param_1[1].name & 4) != 0 )) {
      uVar2 = *(undefined4*)&param_1[1].ex_data.sk;
   }
   return uVar2;
}undefined8 X509_get0_subject_key_id(X509 *param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   uVar2 = 0;
   if (iVar1 == 1) {
      uVar2 = *(undefined8*)&param_1[1].ex_data.dummy;
   }
   return uVar2;
}long *X509_get0_authority_key_id(X509 *param_1) {
   int iVar1;
   long *plVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   plVar2 = (long*)0x0;
   if (( iVar1 == 1 ) && ( plVar2 = (long*)param_1[1].ex_pathlen ),plVar2 != (long*)0x0) {
      plVar2 = (long*)*plVar2;
   }
   return plVar2;
}long X509_get0_authority_issuer(X509 *param_1) {
   int iVar1;
   long lVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   lVar2 = 0;
   if (( iVar1 == 1 ) && ( lVar2 = lVar2 != 0 )) {
      lVar2 = *(long*)( lVar2 + 8 );
   }
   return lVar2;
}long X509_get0_authority_serial(X509 *param_1) {
   int iVar1;
   long lVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   lVar2 = 0;
   if (( iVar1 == 1 ) && ( lVar2 = lVar2 != 0 )) {
      lVar2 = *(long*)( lVar2 + 0x10 );
   }
   return lVar2;
}ASN1_BIT_STRING *X509_get_pathlen(X509 *param_1) {
   int iVar1;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   if (( iVar1 == 1 ) && ( ( (ulong)param_1[1].name & 1 ) != 0 )) {
      return param_1[1].signature;
   }
   return (ASN1_BIT_STRING*)0xffffffffffffffff;
}undefined8 X509_get_proxy_pathlen(X509 *param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = X509_check_purpose(param_1, -1, 0);
   if (( iVar1 == 1 ) && ( ( (ulong)param_1[1].name & 0x400 ) != 0 )) {
      uVar2._0_4_ = param_1[1].valid;
      uVar2._4_4_ = param_1[1].references;
      return uVar2;
   }
   return 0xffffffffffffffff;
}
