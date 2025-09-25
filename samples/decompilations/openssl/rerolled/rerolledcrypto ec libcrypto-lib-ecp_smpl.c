undefined8 ossl_ec_GFp_simple_group_init(long param_1) {
   BIGNUM *pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x40 ) = pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x60 ) = pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x68 ) = pBVar1;
   if (( ( *(BIGNUM**)( param_1 + 0x40 ) != (BIGNUM*)0x0 ) && ( *(long*)( param_1 + 0x60 ) != 0 ) ) && ( pBVar1 != (BIGNUM*)0x0 )) {
      *(undefined4*)( param_1 + 0x70 ) = 0;
      return 1;
   }

   BN_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_free(*(BIGNUM**)( param_1 + 0x68 ));
   return 0;
}
void ossl_ec_GFp_simple_group_finish(long param_1) {
   BN_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_free(*(BIGNUM**)( param_1 + 0x68 ));
   return;
}
undefined8 ossl_ec_GFp_simple_point_init(long param_1) {
   BIGNUM *pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x10 ) = pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x18 ) = pBVar1;
   pBVar1 = BN_new();
   *(undefined4*)( param_1 + 0x28 ) = 0;
   *(BIGNUM**)( param_1 + 0x20 ) = pBVar1;
   if (( ( *(BIGNUM**)( param_1 + 0x10 ) != (BIGNUM*)0x0 ) && ( *(long*)( param_1 + 0x18 ) != 0 ) ) && ( pBVar1 != (BIGNUM*)0x0 )) {
      return 1;
   }

   for (int i = 0; i < 3; i++) {
      BN_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   return 0;
}
void ossl_ec_GFp_simple_point_finish(long param_1) {
   for (int i = 0; i < 3; i++) {
      BN_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   return;
}
void ossl_ec_GFp_simple_group_clear_finish(long param_1) {
   BN_clear_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_clear_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_clear_free(*(BIGNUM**)( param_1 + 0x68 ));
   return;
}
void ossl_ec_GFp_simple_point_clear_finish(long param_1) {
   for (int i = 0; i < 3; i++) {
      BN_clear_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   *(undefined4*)( param_1 + 0x28 ) = 0;
   return;
}
undefined8 ossl_ec_GFp_simple_group_copy(long param_1, long param_2) {
   BIGNUM *pBVar1;
   pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x40 ), *(BIGNUM**)( param_2 + 0x40 ));
   if (pBVar1 != (BIGNUM*)0x0) {
      pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x60 ), *(BIGNUM**)( param_2 + 0x60 ));
      if (pBVar1 != (BIGNUM*)0x0) {
         pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x68 ), *(BIGNUM**)( param_2 + 0x68 ));
         if (pBVar1 != (BIGNUM*)0x0) {
            *(undefined4*)( param_1 + 0x70 ) = *(undefined4*)( param_2 + 0x70 );
            return 1;
         }

      }

   }

   return 0;
}
undefined8 ossl_ec_GFp_simple_point_copy(long param_1, long param_2) {
   BIGNUM *pBVar1;
   pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x10 ), *(BIGNUM**)( param_2 + 0x10 ));
   if (pBVar1 != (BIGNUM*)0x0) {
      pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x18 ), *(BIGNUM**)( param_2 + 0x18 ));
      if (pBVar1 != (BIGNUM*)0x0) {
         pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x20 ), *(BIGNUM**)( param_2 + 0x20 ));
         if (pBVar1 != (BIGNUM*)0x0) {
            *(undefined4*)( param_1 + 0x28 ) = *(undefined4*)( param_2 + 0x28 );
            *(undefined4*)( param_1 + 8 ) = *(undefined4*)( param_2 + 8 );
            return 1;
         }

      }

   }

   return 0;
}
void ossl_ec_GFp_simple_group_get_degree(long param_1) {
   BN_num_bits(*(BIGNUM**)( param_1 + 0x40 ));
   return;
}
undefined8 ossl_ec_GFp_simple_group_set_curve(long *param_1, BIGNUM *param_2, BIGNUM *param_3, BIGNUM *param_4, BN_CTX *param_5) {
   int iVar1;
   BIGNUM *r;
   BIGNUM *pBVar2;
   undefined8 uVar3;
   BN_CTX *local_40;
   iVar1 = BN_num_bits(param_2);
   if (( iVar1 < 3 ) || ( iVar1 = iVar1 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_smpl.c", 0x97, "ossl_ec_GFp_simple_group_set_curve");
      ERR_set_error(0x10, 0x67, 0);
      return 0;
   }

   local_40 = (BN_CTX*)0x0;
   if (( param_5 == (BN_CTX*)0x0 ) && ( param_5 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]) ),local_40 = param_5,param_5 == (BN_CTX*)0x0) {
      return 0;
   }

   BN_CTX_start(param_5);
   r = BN_CTX_get(param_5);
   if (( r != (BIGNUM*)0x0 ) && ( pBVar2 = BN_copy((BIGNUM*)param_1[8], param_2) ),pBVar2 != (BIGNUM*)0x0) {
      BN_set_negative((BIGNUM*)param_1[8], 0);
      iVar1 = BN_nnmod(r, param_3, param_2, param_5);
      if (iVar1 != 0) {
         if (*(code**)( *param_1 + 0x118 ) == (code*)0x0) {
            pBVar2 = BN_copy((BIGNUM*)param_1[0xc], r);
            if (pBVar2 != (BIGNUM*)0x0) goto LAB_0010036a;
         }
 else {
            iVar1 = ( **(code**)( *param_1 + 0x118 ) )(param_1, (BIGNUM*)param_1[0xc], r, param_5);
            if (iVar1 != 0) {
               LAB_0010036a:iVar1 = BN_nnmod((BIGNUM*)param_1[0xd], param_4, param_2, param_5);
               if (( iVar1 != 0 ) && ( ( ( *(code**)( *param_1 + 0x118 ) == (code*)0x0 || ( iVar1 = ( **(code**)( *param_1 + 0x118 ) )(param_1, param_1[0xd], param_1[0xd], param_5) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 ) )) {
                  uVar3 = 1;
                  iVar1 = BN_cmp(r, (BIGNUM*)param_1[8]);
                  *(uint*)( param_1 + 0xe ) = ( uint )(iVar1 == 0);
                  goto LAB_00100432;
               }

            }

         }

      }

   }

   uVar3 = 0;
   LAB_00100432:BN_CTX_end(param_5);
   BN_CTX_free(local_40);
   return uVar3;
}
uint ossl_ec_GFp_simple_group_get_curve(long *param_1, BIGNUM *param_2, BIGNUM *param_3, BIGNUM *param_4, BN_CTX *param_5) {
   uint uVar1;
   int iVar2;
   BIGNUM *pBVar3;
   code *pcVar4;
   BN_CTX *c;
   if (( param_2 != (BIGNUM*)0x0 ) && ( pBVar3 = BN_copy(param_2, (BIGNUM*)param_1[8]) ),pBVar3 == (BIGNUM*)0x0) {
      return 0;
   }

   if (param_4 == (BIGNUM*)0x0 && param_3 == (BIGNUM*)0x0) {
      LAB_00100556:c = (BN_CTX*)0x0;
      uVar1 = 1;
   }
 else {
      pcVar4 = *(code**)( *param_1 + 0x120 );
      if (pcVar4 != (code*)0x0) {
         c = (BN_CTX*)0x0;
         if (param_5 == (BN_CTX*)0x0) {
            param_5 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]);
            if (param_5 == (BN_CTX*)0x0) {
               return 0;
            }

            pcVar4 = *(code**)( *param_1 + 0x120 );
            c = param_5;
         }

         if (param_3 != (BIGNUM*)0x0) {
            uVar1 = ( *pcVar4 )(param_1, param_3, param_1[0xc], param_5);
            if (( uVar1 == 0 ) || ( uVar1 = param_4 == (BIGNUM*)0x0 )) goto LAB_0010051e;
            pcVar4 = *(code**)( *param_1 + 0x120 );
         }

         iVar2 = ( *pcVar4 )(param_1, param_4, param_1[0xd], param_5);
         uVar1 = ( uint )(iVar2 != 0);
         goto LAB_0010051e;
      }

      if (param_3 != (BIGNUM*)0x0) {
         pBVar3 = BN_copy(param_3, (BIGNUM*)param_1[0xc]);
         if (pBVar3 == (BIGNUM*)0x0) {
            uVar1 = 0;
            c = (BN_CTX*)0x0;
            goto LAB_0010051e;
         }

         if (param_4 == (BIGNUM*)0x0) goto LAB_00100556;
      }

      pBVar3 = BN_copy(param_4, (BIGNUM*)param_1[0xd]);
      uVar1 = ( uint )(pBVar3 != (BIGNUM*)0x0);
      c = (BN_CTX*)0x0;
   }

   LAB_0010051e:BN_CTX_free(c);
   return uVar1;
}
void ossl_ec_GFp_simple_is_at_infinity(undefined8 param_1, long param_2) {
   BN_is_zero(*(undefined8*)( param_2 + 0x20 ));
   return;
}
void ossl_ec_GFp_simple_field_sqr(long param_1, BIGNUM *param_2, BIGNUM *param_3, BN_CTX *param_4) {
   BN_mod_sqr(param_2, param_3, *(BIGNUM**)( param_1 + 0x40 ), param_4);
   return;
}
void ossl_ec_GFp_simple_field_mul(long param_1, BIGNUM *param_2, BIGNUM *param_3, BIGNUM *param_4, BN_CTX *param_5) {
   BN_mod_mul(param_2, param_3, param_4, *(BIGNUM**)( param_1 + 0x40 ), param_5);
   return;
}
uint ossl_ec_GFp_simple_group_check_discriminant(long *param_1, BN_CTX *param_2) {
   BIGNUM *m;
   uint uVar1;
   int iVar2;
   BIGNUM *a;
   BIGNUM *a_00;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *pBVar3;
   BN_CTX *c;
   m = (BIGNUM*)param_1[8];
   c = (BN_CTX*)0x0;
   if (( param_2 == (BN_CTX*)0x0 ) && ( param_2 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]) ),c = param_2,param_2 == (BN_CTX*)0x0) {
      ERR_new();
      uVar1 = 0;
      ERR_set_debug("crypto/ec/ecp_smpl.c", 0x105, "ossl_ec_GFp_simple_group_check_discriminant");
      ERR_set_error(0x10, 0x80003, 0);
      goto LAB_00100723;
   }

   BN_CTX_start(param_2);
   a = BN_CTX_get(param_2);
   a_00 = BN_CTX_get(param_2);
   r = BN_CTX_get(param_2);
   r_00 = BN_CTX_get(param_2);
   pBVar3 = BN_CTX_get(param_2);
   if (pBVar3 != (BIGNUM*)0x0) {
      if (*(code**)( *param_1 + 0x120 ) == (code*)0x0) {
         pBVar3 = BN_copy(a, (BIGNUM*)param_1[0xc]);
         if (( pBVar3 != (BIGNUM*)0x0 ) && ( pBVar3 = BN_copy(a_00, (BIGNUM*)param_1[0xd]) ),pBVar3 != (BIGNUM*)0x0) {
            LAB_001006d9:iVar2 = BN_is_zero(a);
            if (iVar2 != 0) {
               iVar2 = BN_is_zero(a_00);
               uVar1 = ( uint )(iVar2 == 0);
               goto LAB_00100723;
            }

            uVar1 = 1;
            iVar2 = BN_is_zero(a_00);
            if (iVar2 != 0) goto LAB_00100723;
            iVar2 = BN_mod_sqr(r, a, m, param_2);
            if (( ( ( iVar2 != 0 ) && ( iVar2 = BN_mod_mul(r_00, r, a, m, param_2) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )) {
               iVar2 = BN_is_zero(a);
               uVar1 = ( uint )(iVar2 == 0);
               goto LAB_00100723;
            }

         }

      }
 else {
         uVar1 = ( **(code**)( *param_1 + 0x120 ) )(param_1, a, (BIGNUM*)param_1[0xc], param_2);
         if (uVar1 == 0) goto LAB_00100723;
         iVar2 = ( **(code**)( *param_1 + 0x120 ) )(param_1, a_00, param_1[0xd], param_2);
         if (iVar2 != 0) goto LAB_001006d9;
      }

   }

   uVar1 = 0;
   LAB_00100723:BN_CTX_end(param_2);
   BN_CTX_free(c);
   return uVar1;
}
undefined8 ossl_ec_GFp_simple_point_set_to_infinity(undefined8 param_1, long param_2) {
   *(undefined4*)( param_2 + 0x28 ) = 0;
   BN_zero_ex(*(undefined8*)( param_2 + 0x20 ));
   return 1;
}
bool ossl_ec_GFp_simple_point_get_affine_coordinates(EC_GROUP *param_1, EC_POINT *param_2, BIGNUM *param_3, BIGNUM *param_4, BN_CTX *param_5) {
   code *pcVar1;
   int iVar2;
   BIGNUM *pBVar3;
   BIGNUM *a;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *pBVar4;
   bool bVar5;
   BN_CTX *local_60;
   iVar2 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar2 == 0) {
      local_60 = (BN_CTX*)0x0;
      bVar5 = false;
      if (( param_5 != (BN_CTX*)0x0 ) || ( param_5 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),local_60 = param_5,param_5 != (BN_CTX*)0x0) {
         BN_CTX_start(param_5);
         pBVar3 = BN_CTX_get(param_5);
         a = BN_CTX_get(param_5);
         r = BN_CTX_get(param_5);
         r_00 = BN_CTX_get(param_5);
         if (r_00 != (BIGNUM*)0x0) {
            pBVar4 = *(BIGNUM**)( param_2 + 0x20 );
            if (( *(code**)( *(long*)param_1 + 0x120 ) == (code*)0x0 ) || ( iVar2 = ( **(code**)( *(long*)param_1 + 0x120 ) )(param_1, pBVar3, pBVar4, param_5) ),pBVar4 = pBVar3,iVar2 != 0) {
               iVar2 = BN_is_one(pBVar4);
               if (iVar2 == 0) {
                  iVar2 = ( **(code**)( *(long*)param_1 + 0x110 ) )(param_1, a, pBVar4, param_5);
                  if (iVar2 == 0) {
                     ERR_new();
                     ERR_set_debug("crypto/ec/ecp_smpl.c", 0x232, "ossl_ec_GFp_simple_point_get_affine_coordinates");
                     ERR_set_error(0x10, 0x80003, 0);
                     goto LAB_001009e0;
                  }

                  if (*(long*)( *(long*)param_1 + 0x118 ) == 0) {
                     iVar2 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, r, a, param_5);
                  }
 else {
                     iVar2 = BN_mod_sqr(r, a, *(BIGNUM**)( param_1 + 0x40 ), param_5);
                  }

                  if (( iVar2 == 0 ) || ( ( param_3 != (BIGNUM*)0x0 && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, param_3, *(undefined8*)( param_2 + 0x10 ), r, param_5) ),iVar2 == 0 ) )) goto LAB_001009e0;
                  if (param_4 != (BIGNUM*)0x0) {
                     if (*(long*)( *(long*)param_1 + 0x118 ) == 0) {
                        iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r_00, r, a, param_5);
                     }
 else {
                        iVar2 = BN_mod_mul(r_00, r, a, *(BIGNUM**)( param_1 + 0x40 ), param_5);
                     }

                     if (iVar2 != 0) {
                        iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, param_4, *(undefined8*)( param_2 + 0x18 ), r_00, param_5);
                        bVar5 = iVar2 != 0;
                     }

                     goto LAB_001009e0;
                  }

               }
 else {
                  pcVar1 = *(code**)( *(long*)param_1 + 0x120 );
                  if (pcVar1 == (code*)0x0) {
                     if (( param_3 != (BIGNUM*)0x0 ) && ( pBVar3 = BN_copy(param_3, *(BIGNUM**)( param_2 + 0x10 )) ),pBVar3 == (BIGNUM*)0x0) goto LAB_001009e0;
                     if (param_4 != (BIGNUM*)0x0) {
                        pBVar3 = BN_copy(param_4, *(BIGNUM**)( param_2 + 0x18 ));
                        bVar5 = pBVar3 != (BIGNUM*)0x0;
                        goto LAB_001009e0;
                     }

                  }
 else {
                     if (( param_3 != (BIGNUM*)0x0 ) && ( iVar2 = ( *pcVar1 )(param_1, param_3, *(undefined8*)( param_2 + 0x10 ), param_5) ),iVar2 == 0) goto LAB_001009e0;
                     if (param_4 != (BIGNUM*)0x0) {
                        iVar2 = ( **(code**)( *(long*)param_1 + 0x120 ) )(param_1, param_4, *(undefined8*)( param_2 + 0x18 ), param_5);
                        bVar5 = iVar2 != 0;
                        goto LAB_001009e0;
                     }

                  }

               }

               bVar5 = true;
            }

         }

         LAB_001009e0:BN_CTX_end(param_5);
         BN_CTX_free(local_60);
         return bVar5;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_smpl.c", 0x200, "ossl_ec_GFp_simple_point_get_affine_coordinates");
      ERR_set_error(0x10, 0x6a, 0);
   }

   return false;
}
bool ossl_ec_GFp_simple_dbl(EC_GROUP *param_1, long param_2, EC_POINT *param_3, BN_CTX *param_4) {
   code *pcVar1;
   code *pcVar2;
   BIGNUM *m;
   undefined8 uVar3;
   int iVar4;
   BIGNUM *a;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *r_01;
   BIGNUM *pBVar5;
   bool bVar6;
   BN_CTX *local_68;
   iVar4 = EC_POINT_is_at_infinity(param_1, param_3);
   if (iVar4 != 0) {
      BN_zero_ex(*(undefined8*)( param_2 + 0x20 ));
      *(undefined4*)( param_2 + 0x28 ) = 0;
      return true;
   }

   local_68 = (BN_CTX*)0x0;
   bVar6 = false;
   pcVar1 = *(code**)( *(long*)param_1 + 0xf8 );
   pcVar2 = *(code**)( *(long*)param_1 + 0x100 );
   m = *(BIGNUM**)( param_1 + 0x40 );
   if (( param_4 == (BN_CTX*)0x0 ) && ( param_4 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),local_68 = param_4,param_4 == (BN_CTX*)0x0) {
      return false;
   }

   BN_CTX_start(param_4);
   a = BN_CTX_get(param_4);
   r = BN_CTX_get(param_4);
   r_00 = BN_CTX_get(param_4);
   r_01 = BN_CTX_get(param_4);
   if (r_01 != (BIGNUM*)0x0) {
      if (*(int*)( param_3 + 0x28 ) == 0) {
         if (*(int*)( param_1 + 0x70 ) == 0) {
            iVar4 = ( *pcVar2 )(param_1, a, *(undefined8*)( param_3 + 0x10 ), param_4);
            if (( ( ( iVar4 == 0 ) || ( iVar4 = BN_mod_lshift1_quick(r, a, m) ),iVar4 == 0 ) ) || ( iVar4 = iVar4 == 0 )) goto LAB_00100d10;
            iVar4 = BN_mod_add_quick(r, r, a, m);
         }
 else {
            iVar4 = ( *pcVar2 )(param_1, r, *(undefined8*)( param_3 + 0x20 ), param_4);
            if (( ( iVar4 == 0 ) || ( iVar4 = BN_mod_add_quick(a, *(BIGNUM**)( param_3 + 0x10 ), r, m) ),iVar4 == 0 )) goto LAB_00100d10;
            iVar4 = BN_mod_add_quick(r, a, r, m);
         }

      }
 else {
         iVar4 = ( *pcVar2 )(param_1, a, *(undefined8*)( param_3 + 0x10 ), param_4);
         if (( ( iVar4 == 0 ) || ( iVar4 = iVar4 == 0 ) ) || ( iVar4 = iVar4 == 0 )) goto LAB_00100d10;
         iVar4 = BN_mod_add_quick(r, a, *(BIGNUM**)( param_1 + 0x60 ), m);
      }

      if (iVar4 != 0) {
         if (*(int*)( param_3 + 0x28 ) == 0) {
            iVar4 = ( *pcVar1 )(param_1, a, *(BIGNUM**)( param_3 + 0x18 ), *(undefined8*)( param_3 + 0x20 ), param_4);
            if (iVar4 == 0) goto LAB_00100d10;
         }
 else {
            pBVar5 = BN_copy(a, *(BIGNUM**)( param_3 + 0x18 ));
            if (pBVar5 == (BIGNUM*)0x0) goto LAB_00100d10;
         }

         iVar4 = BN_mod_lshift1_quick(*(BIGNUM**)( param_2 + 0x20 ), a, m);
         if (iVar4 != 0) {
            uVar3 = *(undefined8*)( param_3 + 0x18 );
            *(undefined4*)( param_2 + 0x28 ) = 0;
            iVar4 = ( *pcVar2 )(param_1, r_01, uVar3, param_4);
            if (( ( iVar4 != 0 ) && ( iVar4 = ( *pcVar1 )(param_1, r_00, *(undefined8*)( param_3 + 0x10 ), r_01, param_4) ),iVar4 != 0 )) {
               iVar4 = BN_mod_sub_quick(*(BIGNUM**)( param_2 + 0x18 ), a, r_01, m);
               bVar6 = iVar4 != 0;
            }

         }

      }

   }

   LAB_00100d10:BN_CTX_end(param_4);
   BN_CTX_free(local_68);
   return bVar6;
}
bool ossl_ec_GFp_simple_ladder_step(long *param_1, long param_2, long param_3, long param_4, BN_CTX *param_5) {
   int iVar1;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *r_01;
   BIGNUM *a;
   BIGNUM *b;
   BIGNUM *r_02;
   BIGNUM *a_00;
   bool bVar2;
   BN_CTX_start(param_5);
   r = BN_CTX_get(param_5);
   r_00 = BN_CTX_get(param_5);
   r_01 = BN_CTX_get(param_5);
   a = BN_CTX_get(param_5);
   b = BN_CTX_get(param_5);
   r_02 = BN_CTX_get(param_5);
   a_00 = BN_CTX_get(param_5);
   if (a_00 != (BIGNUM*)0x0) {
      iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, a_00, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_3 + 0x10 ), param_5);
      if (iVar1 != 0) {
         iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_3 + 0x20 ), param_5);
         if (iVar1 != 0) {
            iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, b, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_3 + 0x20 ), param_5);
            if (iVar1 != 0) {
               iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, a, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_3 + 0x10 ), param_5);
               if (iVar1 != 0) {
                  iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r_02, param_1[0xc], r, param_5);
                  if (iVar1 != 0) {
                     iVar1 = BN_mod_add_quick(r_02, a_00, r_02, (BIGNUM*)param_1[8]);
                     if (iVar1 != 0) {
                        iVar1 = BN_mod_add_quick(a_00, a, b, (BIGNUM*)param_1[8]);
                        if (iVar1 != 0) {
                           iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r_02, a_00, r_02, param_5);
                           if (iVar1 != 0) {
                              iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, r, r, param_5);
                              if (iVar1 != 0) {
                                 iVar1 = BN_mod_lshift_quick(r_01, (BIGNUM*)param_1[0xd], 2, (BIGNUM*)param_1[8]);
                                 if (iVar1 != 0) {
                                    iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r, r_01, r, param_5);
                                    if (iVar1 != 0) {
                                       iVar1 = BN_mod_lshift1_quick(r_02, r_02, (BIGNUM*)param_1[8]);
                                       if (iVar1 != 0) {
                                          iVar1 = BN_mod_sub_quick(a, b, a, (BIGNUM*)param_1[8]);
                                          if (iVar1 != 0) {
                                             iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, *(undefined8*)( param_3 + 0x20 ), a, param_5);
                                             if (iVar1 != 0) {
                                                iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, b, *(undefined8*)( param_3 + 0x20 ), *(undefined8*)( param_4 + 0x10 ), param_5);
                                                if (iVar1 != 0) {
                                                   iVar1 = BN_mod_add_quick(r, r, r_02, (BIGNUM*)param_1[8]);
                                                   if (iVar1 != 0) {
                                                      iVar1 = BN_mod_sub_quick(*(BIGNUM**)( param_3 + 0x10 ), r, b, (BIGNUM*)param_1[8]);
                                                      if (iVar1 != 0) {
                                                         iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, b, *(undefined8*)( param_2 + 0x10 ), param_5);
                                                         if (iVar1 != 0) {
                                                            iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, r_02, *(undefined8*)( param_2 + 0x20 ), param_5);
                                                            if (iVar1 != 0) {
                                                               iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, a_00, r_02, param_1[0xc], param_5);
                                                               if (iVar1 != 0) {
                                                                  iVar1 = BN_mod_add_quick(r_00, *(BIGNUM**)( param_2 + 0x10 ), *(BIGNUM**)( param_2 + 0x20 ), (BIGNUM*)param_1[8]);
                                                                  if (iVar1 != 0) {
                                                                     iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, r_00, r_00, param_5);
                                                                     if (iVar1 != 0) {
                                                                        iVar1 = BN_mod_sub_quick(r_00, r_00, b, (BIGNUM*)param_1[8]);
                                                                        if (iVar1 != 0) {
                                                                           iVar1 = BN_mod_sub_quick(r_00, r_00, r_02, (BIGNUM*)param_1[8]);
                                                                           if (iVar1 != 0) {
                                                                              iVar1 = BN_mod_sub_quick(a, b, a_00, (BIGNUM*)param_1[8]);
                                                                              if (iVar1 != 0) {
                                                                                 iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, a, a, param_5);
                                                                                 if (iVar1 != 0) {
                                                                                    iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r, r_02, r_00, param_5);
                                                                                    if (iVar1 != 0) {
                                                                                       iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r, r_01, r, param_5);
                                                                                       if (iVar1 != 0) {
                                                                                          iVar1 = BN_mod_sub_quick(*(BIGNUM**)( param_2 + 0x10 ), a, r, (BIGNUM*)param_1[8]);
                                                                                          if (iVar1 != 0) {
                                                                                             iVar1 = BN_mod_add_quick(a, b, a_00, (BIGNUM*)param_1[8]);
                                                                                             if (iVar1 != 0) {
                                                                                                iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, b, r_02, param_5);
                                                                                                if (iVar1 != 0) {
                                                                                                   iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, b, b, r_01, param_5);
                                                                                                   if (iVar1 != 0) {
                                                                                                      iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r_00, r_00, a, param_5);
                                                                                                      if (iVar1 != 0) {
                                                                                                         iVar1 = BN_mod_lshift1_quick(r_00, r_00, (BIGNUM*)param_1[8]);
                                                                                                         if (iVar1 != 0) {
                                                                                                            iVar1 = BN_mod_add_quick(*(BIGNUM**)( param_2 + 0x20 ), b, r_00, (BIGNUM*)param_1[8]);
                                                                                                            bVar2 = iVar1 != 0;
                                                                                                            goto LAB_001012aa;
                                                                                                         }

                                                                                                      }

                                                                                                   }

                                                                                                }

                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar2 = false;
   LAB_001012aa:BN_CTX_end(param_5);
   return bVar2;
}
undefined8 ossl_ec_GFp_simple_ladder_pre(long *param_1, long param_2, long param_3, long param_4, undefined8 param_5) {
   BIGNUM *r;
   BIGNUM *a;
   BIGNUM *r_00;
   BIGNUM *r_01;
   BIGNUM *r_02;
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   r = *(BIGNUM**)( param_3 + 0x20 );
   a = *(BIGNUM**)( param_3 + 0x10 );
   r_00 = *(BIGNUM**)( param_2 + 0x20 );
   r_01 = *(BIGNUM**)( param_2 + 0x10 );
   r_02 = *(BIGNUM**)( param_3 + 0x18 );
   if (( ( ( ( ( *(int*)( param_4 + 0x28 ) != 0 ) && ( iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, a, *(undefined8*)( param_4 + 0x10 ), param_5) ),iVar1 != 0 ) ) && ( iVar1 = BN_mod_sub_quick(r_01, a, (BIGNUM*)param_1[0xc], (BIGNUM*)param_1[8]) ),iVar1 != 0 ) ) && ( ( ( iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, r_01, r_01, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, r_02, *(undefined8*)( param_4 + 0x10 ), param_1[0xd], param_5) ),iVar1 != 0 ) ) && ( ( iVar1 = BN_mod_lshift_quick(r_02, r_02, 3, (BIGNUM*)param_1[8]) ),iVar1 != 0 && ( ( iVar1 = BN_mod_sub_quick(*(BIGNUM**)( param_2 + 0x10 ), r_01, r_02, (BIGNUM*)param_1[8]) ),iVar1 != 0 && ( iVar1 = BN_mod_add_quick(r, a, (BIGNUM*)param_1[0xc], (BIGNUM*)param_1[8]) ),iVar1 != 0 ) )) {
      do {
         iVar1 = BN_priv_rand_range_ex(*(undefined8*)( param_2 + 0x18 ), param_1[8], 0, param_5);
         if (iVar1 == 0) {
            return 0;
         }

         iVar1 = BN_is_zero(*(undefined8*)( param_2 + 0x18 ));
      }
 while ( iVar1 != 0 );
      do {
         iVar1 = BN_priv_rand_range_ex(*(undefined8*)( param_3 + 0x20 ), param_1[8], 0, param_5);
         if (iVar1 == 0) {
            return 0;
         }

         iVar1 = BN_is_zero(*(undefined8*)( param_3 + 0x20 ));
      }
 while ( iVar1 != 0 );
      lVar2 = *param_1;
      uVar3 = *(undefined8*)( param_2 + 0x18 );
      if (*(code**)( lVar2 + 0x118 ) != (code*)0x0) {
         iVar1 = ( **(code**)( lVar2 + 0x118 ) )(param_1, uVar3, uVar3, param_5);
         if (iVar1 == 0) {
            return 0;
         }

         iVar1 = ( **(code**)( *param_1 + 0x118 ) )(param_1, *(undefined8*)( param_3 + 0x20 ), *(undefined8*)( param_3 + 0x20 ), param_5);
         if (iVar1 == 0) {
            return 0;
         }

         lVar2 = *param_1;
         uVar3 = *(undefined8*)( param_2 + 0x18 );
      }

      iVar1 = ( **(code**)( lVar2 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_2 + 0x20 ), uVar3, param_5);
      if (( ( iVar1 != 0 ) && ( iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x18 ), param_5) ),iVar1 != 0 )) {
         *(undefined4*)( param_2 + 0x28 ) = 0;
         *(undefined4*)( param_3 + 0x28 ) = 0;
         return 1;
      }

   }

   return 0;
}
bool ossl_ec_GFp_simple_field_inv(long *param_1, BIGNUM *param_2, undefined8 param_3, BN_CTX *param_4) {
   int iVar1;
   BIGNUM *pBVar2;
   BIGNUM *pBVar3;
   BN_CTX *c;
   bool bVar4;
   c = (BN_CTX*)0x0;
   if (( param_4 == (BN_CTX*)0x0 ) && ( param_4 = (BN_CTX*)BN_CTX_secure_new_ex(param_1[0x15]) ),c = param_4,param_4 == (BN_CTX*)0x0) {
      return false;
   }

   BN_CTX_start(param_4);
   pBVar2 = BN_CTX_get(param_4);
   if (pBVar2 != (BIGNUM*)0x0) {
      do {
         iVar1 = BN_priv_rand_range_ex(pBVar2, param_1[8], 0, param_4);
         if (iVar1 == 0) goto LAB_0010196a;
         iVar1 = BN_is_zero(pBVar2);
      }
 while ( iVar1 != 0 );
      iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, param_2, param_3, pBVar2, param_4);
      if (iVar1 != 0) {
         pBVar3 = BN_mod_inverse(param_2, param_2, (BIGNUM*)param_1[8], param_4);
         if (pBVar3 == (BIGNUM*)0x0) {
            ERR_new();
            bVar4 = false;
            ERR_set_debug("crypto/ec/ecp_smpl.c", 0x580, "ossl_ec_GFp_simple_field_inv");
            ERR_set_error(0x10, 0xa5, 0);
         }
 else {
            iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, param_2, param_2, pBVar2, param_4);
            bVar4 = iVar1 != 0;
         }

         goto LAB_001019c5;
      }

   }

   LAB_0010196a:bVar4 = false;
   LAB_001019c5:BN_CTX_end(param_4);
   BN_CTX_free(c);
   return bVar4;
}
int ossl_ec_GFp_simple_blind_coordinates(long *param_1, long param_2, BN_CTX *param_3) {
   int iVar1;
   int iVar2;
   BIGNUM *pBVar3;
   BIGNUM *pBVar4;
   long lVar5;
   BN_CTX_start(param_3);
   pBVar3 = BN_CTX_get(param_3);
   pBVar4 = BN_CTX_get(param_3);
   if (pBVar4 == (BIGNUM*)0x0) {
      ERR_new();
      iVar2 = 0;
      ERR_set_debug("crypto/ec/ecp_smpl.c", 0x5a1, "ossl_ec_GFp_simple_blind_coordinates");
      ERR_set_error(0x10, 0x80003, 0);
   }
 else {
      do {
         ERR_set_mark();
         iVar2 = BN_priv_rand_range_ex(pBVar3, param_1[8], 0, param_3);
         ERR_pop_to_mark();
         if (iVar2 == 0) goto LAB_00101ac5;
         iVar1 = BN_is_zero(pBVar3);
      }
 while ( iVar1 != 0 );
      lVar5 = *param_1;
      if (*(code**)( lVar5 + 0x118 ) != (code*)0x0) {
         iVar1 = ( **(code**)( lVar5 + 0x118 ) )(param_1, pBVar3, pBVar3, param_3);
         if (iVar1 == 0) goto LAB_00101aca;
         lVar5 = *param_1;
      }

      iVar1 = ( **(code**)( lVar5 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_2 + 0x20 ), pBVar3, param_3);
      if (iVar1 != 0) {
         iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, pBVar4, pBVar3, param_3);
         if (iVar1 != 0) {
            iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), pBVar4, param_3);
            if (iVar1 != 0) {
               iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, pBVar4, pBVar4, pBVar3, param_3);
               if (iVar1 != 0) {
                  iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_2 + 0x18 ), pBVar4, param_3);
                  if (iVar1 != 0) {
                     *(undefined4*)( param_2 + 0x28 ) = 0;
                     LAB_00101ac5:iVar2 = 1;
                  }

               }

            }

         }

      }

   }

   LAB_00101aca:BN_CTX_end(param_3);
   return iVar2;
}
int ossl_ec_GFp_simple_point_set_affine_coordinates(EC_GROUP *param_1, EC_POINT *param_2, BIGNUM *param_3, BIGNUM *param_4, BN_CTX *param_5) {
   int iVar1;
   BIGNUM *z;
   if (( param_3 != (BIGNUM*)0x0 ) && ( param_4 != (BIGNUM*)0x0 )) {
      z = BN_value_one();
      iVar1 = EC_POINT_set_Jprojective_coordinates_GFp(param_1, param_2, param_3, param_4, z, param_5);
      return iVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/ec/ecp_smpl.c", 0x1ed, "ossl_ec_GFp_simple_point_set_affine_coordinates");
   ERR_set_error(0x10, 0xc0102, 0);
   return 0;
}
uint ossl_ec_GFp_simple_cmp(EC_GROUP *param_1, EC_POINT *param_2, EC_POINT *param_3, BN_CTX *param_4) {
   code *pcVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   BIGNUM *pBVar5;
   BIGNUM *pBVar6;
   BIGNUM *pBVar7;
   BIGNUM *pBVar8;
   BIGNUM *b;
   BN_CTX *local_68;
   BIGNUM *local_48;
   iVar3 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar3 != 0) {
      iVar3 = EC_POINT_is_at_infinity(param_1, param_3);
      return ( uint )(iVar3 == 0);
   }

   iVar3 = EC_POINT_is_at_infinity(param_1, param_3);
   if (iVar3 != 0) {
      return 1;
   }

   if (( *(int*)( param_2 + 0x28 ) != 0 ) && ( *(int*)( param_3 + 0x28 ) != 0 )) {
      iVar3 = BN_cmp(*(BIGNUM**)( param_2 + 0x10 ), *(BIGNUM**)( param_3 + 0x10 ));
      if (iVar3 != 0) {
         return 1;
      }

      iVar3 = BN_cmp(*(BIGNUM**)( param_2 + 0x18 ), *(BIGNUM**)( param_3 + 0x18 ));
      return ( uint )(iVar3 != 0);
   }

   local_68 = (BN_CTX*)0x0;
   pcVar1 = *(code**)( *(long*)param_1 + 0xf8 );
   pcVar2 = *(code**)( *(long*)param_1 + 0x100 );
   if (( param_4 == (BN_CTX*)0x0 ) && ( param_4 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),local_68 = param_4,param_4 == (BN_CTX*)0x0) {
      return 0xffffffff;
   }

   BN_CTX_start(param_4);
   pBVar5 = BN_CTX_get(param_4);
   pBVar6 = BN_CTX_get(param_4);
   pBVar7 = BN_CTX_get(param_4);
   pBVar8 = BN_CTX_get(param_4);
   if (pBVar8 == (BIGNUM*)0x0) {
      LAB_00101e00:uVar4 = 0xffffffff;
   }
 else {
      if (*(int*)( param_3 + 0x28 ) == 0) {
         iVar3 = ( *pcVar2 )(param_1, pBVar8, *(undefined8*)( param_3 + 0x20 ), param_4);
         if (( iVar3 == 0 ) || ( iVar3 = ( *pcVar1 )(param_1, pBVar5, *(undefined8*)( param_2 + 0x10 ), pBVar8, param_4) ),local_48 = pBVar5,iVar3 == 0) goto LAB_00101e00;
      }
 else {
         local_48 = *(BIGNUM**)( param_2 + 0x10 );
      }

      if (*(int*)( param_2 + 0x28 ) == 0) {
         iVar3 = ( *pcVar2 )(param_1, pBVar7, *(undefined8*)( param_2 + 0x20 ), param_4);
         if (( iVar3 == 0 ) || ( iVar3 = ( *pcVar1 )(param_1, pBVar6, *(undefined8*)( param_3 + 0x10 ), pBVar7, param_4) ),b = pBVar6,iVar3 == 0) goto LAB_00101e00;
      }
 else {
         b = *(BIGNUM**)( param_3 + 0x10 );
      }

      iVar3 = BN_cmp(local_48, b);
      uVar4 = 1;
      if (iVar3 != 0) goto LAB_00101e05;
      if (*(int*)( param_3 + 0x28 ) == 0) {
         iVar3 = ( *pcVar1 )(param_1, pBVar8, pBVar8, *(undefined8*)( param_3 + 0x20 ), param_4);
         if (( iVar3 == 0 ) || ( iVar3 = ( *pcVar1 )(param_1, pBVar5, *(undefined8*)( param_2 + 0x18 ), pBVar8, param_4) ),iVar3 == 0) goto LAB_00101e00;
      }
 else {
         local_48 = *(BIGNUM**)( param_2 + 0x18 );
      }

      if (*(int*)( param_2 + 0x28 ) == 0) {
         iVar3 = ( *pcVar1 )(param_1, pBVar7, pBVar7, *(undefined8*)( param_2 + 0x20 ), param_4);
         if (( iVar3 == 0 ) || ( iVar3 = ( *pcVar1 )(param_1, pBVar6, *(undefined8*)( param_3 + 0x18 ), pBVar7, param_4) ),iVar3 == 0) goto LAB_00101e00;
      }
 else {
         b = *(BIGNUM**)( param_3 + 0x18 );
      }

      iVar3 = BN_cmp(local_48, b);
      uVar4 = ( uint )(iVar3 != 0);
   }

   LAB_00101e05:BN_CTX_end(param_4);
   BN_CTX_free(local_68);
   return uVar4;
}
uint ossl_ec_GFp_simple_add(EC_GROUP *param_1, EC_POINT *param_2, EC_POINT *param_3, EC_POINT *param_4, BN_CTX *param_5) {
   code *pcVar1;
   code *pcVar2;
   BIGNUM *m;
   int iVar3;
   uint uVar4;
   BIGNUM *a;
   BIGNUM *a_00;
   BIGNUM *a_01;
   BIGNUM *a_02;
   BIGNUM *a_03;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *pBVar5;
   EC_POINT *src;
   BN_CTX *local_88;
   if (param_3 == param_4) {
      uVar4 = EC_POINT_dbl(param_1, param_2, param_3, param_5);
      return uVar4;
   }

   iVar3 = EC_POINT_is_at_infinity(param_1, param_3);
   src = param_4;
   if (( iVar3 != 0 ) || ( iVar3 = EC_POINT_is_at_infinity(param_1, param_4) ),src = param_3,iVar3 != 0) {
      uVar4 = EC_POINT_copy(param_2, src);
      return uVar4;
   }

   local_88 = (BN_CTX*)0x0;
   pcVar1 = *(code**)( *(long*)param_1 + 0xf8 );
   pcVar2 = *(code**)( *(long*)param_1 + 0x100 );
   m = *(BIGNUM**)( param_1 + 0x40 );
   uVar4 = 0;
   if (( param_5 == (BN_CTX*)0x0 ) && ( param_5 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),local_88 = param_5,param_5 == (BN_CTX*)0x0) {
      return 0;
   }

   BN_CTX_start(param_5);
   a = BN_CTX_get(param_5);
   a_00 = BN_CTX_get(param_5);
   a_01 = BN_CTX_get(param_5);
   a_02 = BN_CTX_get(param_5);
   a_03 = BN_CTX_get(param_5);
   r = BN_CTX_get(param_5);
   r_00 = BN_CTX_get(param_5);
   if (r_00 == (BIGNUM*)0x0) goto LAB_00102250;
   if (*(int*)( param_4 + 0x28 ) == 0) {
      iVar3 = ( *pcVar2 )(param_1, a, *(undefined8*)( param_4 + 0x20 ), param_5);
      if (( iVar3 == 0 ) || ( ( ( iVar3 = ( *pcVar1 )(param_1, a_00, *(undefined8*)( param_3 + 0x10 ), a, param_5) ),iVar3 == 0 || ( iVar3 = ( *pcVar1 )(param_1, a, a, *(undefined8*)( param_4 + 0x20 ), param_5) ),iVar3 == 0 ) ) || ( iVar3 = ( *pcVar1 )(param_1, a_01, *(undefined8*)( param_3 + 0x18 ), a, param_5) ),iVar3 == 0) goto LAB_00102250;
   }
 else {
      pBVar5 = BN_copy(a_00, *(BIGNUM**)( param_3 + 0x10 ));
      if (( pBVar5 == (BIGNUM*)0x0 ) || ( pBVar5 = BN_copy(a_01, *(BIGNUM**)( param_3 + 0x18 )) ),pBVar5 == (BIGNUM*)0x0) goto LAB_00102250;
   }

   if (*(int*)( param_3 + 0x28 ) == 0) {
      iVar3 = ( *pcVar2 )(param_1, a, *(undefined8*)( param_3 + 0x20 ), param_5);
      if (( ( iVar3 == 0 ) || ( ( iVar3 = ( *pcVar1 )(param_1, a_02, *(undefined8*)( param_4 + 0x10 ), a, param_5) ),iVar3 == 0 || ( iVar3 = ( *pcVar1 )(param_1, a, a, *(undefined8*)( param_3 + 0x20 ), param_5) ),iVar3 == 0 ) )) goto LAB_00102250;
   }
 else {
      pBVar5 = BN_copy(a_02, *(BIGNUM**)( param_4 + 0x10 ));
      if (( pBVar5 == (BIGNUM*)0x0 ) || ( pBVar5 = BN_copy(a_03, *(BIGNUM**)( param_4 + 0x18 )) ),pBVar5 == (BIGNUM*)0x0) goto LAB_00102250;
   }

   iVar3 = BN_mod_sub_quick(r, a_00, a_02, m);
   if (( iVar3 == 0 ) || ( iVar3 = iVar3 == 0 )) goto LAB_00102250;
   iVar3 = BN_is_zero(r);
   if (iVar3 != 0) {
      iVar3 = BN_is_zero(r_00);
      if (iVar3 == 0) {
         uVar4 = 1;
         BN_zero_ex(*(undefined8*)( param_2 + 0x20 ));
         *(undefined4*)( param_2 + 0x28 ) = 0;
      }
 else {
         BN_CTX_end(param_5);
         uVar4 = EC_POINT_dbl(param_1, param_2, param_3, param_5);
         param_5 = (BN_CTX*)0x0;
      }

      goto LAB_00102250;
   }

   iVar3 = BN_mod_add_quick(a_00, a_00, a_02, m);
   if (iVar3 == 0) goto LAB_00102250;
   iVar3 = BN_mod_add_quick(a_01, a_01, a_03, m);
   if (iVar3 == 0) {
      uVar4 = 0;
      goto LAB_00102250;
   }

   if (*(int*)( param_3 + 0x28 ) == 0) {
      if (*(int*)( param_4 + 0x28 ) != 0) {
         pBVar5 = BN_copy(a, *(BIGNUM**)( param_3 + 0x20 ));
         goto joined_r0x001025dc;
      }

      iVar3 = ( *pcVar1 )(param_1, a, *(BIGNUM**)( param_3 + 0x20 ), *(undefined8*)( param_4 + 0x20 ), param_5);
      if (iVar3 == 0) goto LAB_00102250;
      LAB_001023a9:iVar3 = ( *pcVar1 )(param_1, *(undefined8*)( param_2 + 0x20 ), a, r, param_5);
      if (iVar3 == 0) goto LAB_00102250;
   }
 else {
      if (*(int*)( param_4 + 0x28 ) == 0) {
         pBVar5 = BN_copy(a, *(BIGNUM**)( param_4 + 0x20 ));
         joined_r0x001025dc:if (pBVar5 == (BIGNUM*)0x0) goto LAB_00102250;
         goto LAB_001023a9;
      }

      pBVar5 = BN_copy(*(BIGNUM**)( param_2 + 0x20 ), r);
      if (pBVar5 == (BIGNUM*)0x0) goto LAB_00102250;
   }

   *(undefined4*)( param_2 + 0x28 ) = 0;
   iVar3 = ( *pcVar2 )(param_1, a, r_00, param_5);
   if (( ( ( ( ( iVar3 != 0 ) && ( iVar3 = ( *pcVar2 )(param_1, a_03, r, param_5) ),iVar3 != 0 ) ) && ( iVar3 = ( *pcVar1 )(param_1, a_02, a_00, a_03, param_5) ),iVar3 != 0 ) ) && ( ( iVar3 = BN_mod_sub_quick(*(BIGNUM**)( param_2 + 0x10 ), a, a_02, m) ),iVar3 != 0 && ( iVar3 = BN_mod_lshift1_quick(a, *(BIGNUM**)( param_2 + 0x10 ), m) ),iVar3 != 0 )) {
      iVar3 = BN_rshift1(*(BIGNUM**)( param_2 + 0x18 ), a);
      uVar4 = ( uint )(iVar3 != 0);
   }

   LAB_00102250:BN_CTX_end(param_5);
   BN_CTX_free(local_88);
   return uVar4;
}
ulong ossl_ec_GFp_simple_is_on_curve(EC_GROUP *param_1, EC_POINT *param_2, BN_CTX *param_3) {
   code *pcVar1;
   code *pcVar2;
   BIGNUM *m;
   int iVar3;
   BIGNUM *r;
   BIGNUM *r_00;
   BIGNUM *pBVar4;
   BIGNUM *pBVar5;
   ulong uVar6;
   BN_CTX *local_60;
   iVar3 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar3 != 0) {
      return 1;
   }

   local_60 = (BN_CTX*)0x0;
   pcVar1 = *(code**)( *(long*)param_1 + 0xf8 );
   pcVar2 = *(code**)( *(long*)param_1 + 0x100 );
   m = *(BIGNUM**)( param_1 + 0x40 );
   if (( param_3 == (BN_CTX*)0x0 ) && ( param_3 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),local_60 = param_3,param_3 == (BN_CTX*)0x0) {
      return 0xffffffff;
   }

   BN_CTX_start(param_3);
   r = BN_CTX_get(param_3);
   r_00 = BN_CTX_get(param_3);
   pBVar4 = BN_CTX_get(param_3);
   pBVar5 = BN_CTX_get(param_3);
   if (( pBVar5 != (BIGNUM*)0x0 ) && ( iVar3 = ( *pcVar2 )(param_1, r, *(undefined8*)( param_2 + 0x10 ), param_3) ),iVar3 != 0) {
      if (*(int*)( param_2 + 0x28 ) == 0) {
         iVar3 = ( *pcVar2 )(param_1, r_00, *(undefined8*)( param_2 + 0x20 ), param_3);
         if (( ( iVar3 != 0 ) && ( iVar3 = ( *pcVar2 )(param_1, pBVar4, r_00, param_3) ),iVar3 != 0 )) {
            if (*(int*)( param_1 + 0x70 ) == 0) {
               iVar3 = ( *pcVar1 )(param_1, r_00, pBVar4, *(undefined8*)( param_1 + 0x60 ), param_3);
               if (iVar3 != 0) {
                  iVar3 = BN_mod_add_quick(r, r, r_00, m);
                  joined_r0x001028de:if (( ( iVar3 != 0 ) && ( iVar3 = ( *pcVar1 )(param_1, r, r, *(undefined8*)( param_2 + 0x10 ), param_3) ),iVar3 != 0 )) &&( iVar3 = ( *pcVar1 )(param_1, r_00, *(undefined8*)( param_1 + 0x68 ), pBVar5, param_3) ),pBVar4 = r_00,iVar3 != 0;
               }

            }
 else {
               iVar3 = BN_mod_lshift1_quick(r_00, pBVar4, m);
               if (( iVar3 != 0 ) && ( iVar3 = iVar3 != 0 )) {
                  iVar3 = BN_mod_sub_quick(r, r, r_00, m);
                  goto joined_r0x001028de;
               }

            }

         }

      }
 else {
         iVar3 = BN_mod_add_quick(r, r, *(BIGNUM**)( param_1 + 0x60 ), m);
         if (( iVar3 != 0 ) && ( iVar3 = ( *pcVar1 )(param_1, r, r, *(undefined8*)( param_2 + 0x10 ), param_3) ),iVar3 != 0) {
            pBVar4 = *(BIGNUM**)( param_1 + 0x68 );
            LAB_001027a8:iVar3 = BN_mod_add_quick(r, r, pBVar4, m);
            if (( iVar3 != 0 ) && ( iVar3 = ( *pcVar2 )(param_1, r_00, *(undefined8*)( param_2 + 0x18 ), param_3) ),iVar3 != 0) {
               iVar3 = BN_ucmp(r_00, r);
               uVar6 = ( ulong )(iVar3 == 0);
               goto LAB_00102836;
            }

         }

      }

   }

   uVar6 = 0xffffffff;
   LAB_00102836:BN_CTX_end(param_3);
   BN_CTX_free(local_60);
   return uVar6;
}
undefined4 ossl_ec_GFp_simple_make_affine(EC_GROUP *param_1, EC_POINT *param_2, BN_CTX *param_3) {
   int iVar1;
   BIGNUM *pBVar2;
   BIGNUM *pBVar3;
   undefined4 uVar4;
   BN_CTX *c;
   if (( *(int*)( param_2 + 0x28 ) == 0 ) && ( iVar1 = iVar1 == 0 )) {
      uVar4 = 0;
      c = (BN_CTX*)0x0;
      if (( param_3 != (BN_CTX*)0x0 ) || ( param_3 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),c = param_3,param_3 != (BN_CTX*)0x0) {
         BN_CTX_start(param_3);
         pBVar2 = BN_CTX_get(param_3);
         pBVar3 = BN_CTX_get(param_3);
         if (( ( pBVar3 != (BIGNUM*)0x0 ) && ( iVar1 = EC_POINT_get_affine_coordinates(param_1, param_2, pBVar2, pBVar3, param_3) ),iVar1 != 0 )) {
            if (*(int*)( param_2 + 0x28 ) == 0) {
               ERR_new();
               ERR_set_debug("crypto/ec/ecp_smpl.c", 0x4aa, "ossl_ec_GFp_simple_make_affine");
               ERR_set_error(0x10, 0xc0103, 0);
            }
 else {
               uVar4 = 1;
            }

         }

         BN_CTX_end(param_3);
         BN_CTX_free(c);
      }

   }
 else {
      uVar4 = 1;
   }

   return uVar4;
}
undefined8 ossl_ec_GFp_simple_points_make_affine(long *param_1, long param_2, long *param_3, BN_CTX *param_4) {
   long lVar1;
   undefined8 *puVar2;
   int iVar3;
   BIGNUM *b;
   BIGNUM *pBVar4;
   undefined8 *ptr;
   BIGNUM *pBVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   undefined8 uVar10;
   bool bVar11;
   BN_CTX *local_78;
   BN_CTX *local_68;
   if (param_2 == 0) {
      return 1;
   }

   local_68 = (BN_CTX*)0x0;
   local_78 = param_4;
   if (( param_4 == (BN_CTX*)0x0 ) && ( local_78 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]) ),local_68 = local_78,local_78 == (BN_CTX*)0x0) {
      return 0;
   }

   BN_CTX_start(local_78);
   b = BN_CTX_get(local_78);
   pBVar4 = BN_CTX_get(local_78);
   if (( pBVar4 == (BIGNUM*)0x0 ) || ( ptr = (undefined8*)CRYPTO_malloc((int)param_2 * 8, "crypto/ec/ecp_smpl.c", 0x4ce) ),ptr == (undefined8*)0x0) {
      BN_CTX_end(local_78);
      BN_CTX_free(local_68);
      return 0;
   }

   lVar7 = 0;
   do {
      lVar8 = lVar7;
      pBVar5 = BN_new();
      ptr[lVar8] = pBVar5;
      if (pBVar5 == (BIGNUM*)0x0) goto LAB_00102b03;
      lVar7 = lVar8 + 1;
   }
 while ( param_2 != lVar7 );
   iVar3 = BN_is_zero(*(undefined8*)( *param_3 + 0x20 ));
   if (iVar3 == 0) {
      pBVar5 = BN_copy((BIGNUM*)*ptr, *(BIGNUM**)( *param_3 + 0x20 ));
      if (pBVar5 != (BIGNUM*)0x0) goto LAB_00102bb9;
      LAB_00102cc8:BN_CTX_end(local_78);
      BN_CTX_free(local_68);
   }
 else {
      if (*(code**)( *param_1 + 0x128 ) == (code*)0x0) {
         iVar3 = BN_set_word((BIGNUM*)*ptr, 1);
         if (iVar3 != 0) goto LAB_00102bb9;
         goto LAB_00102cc8;
      }

      iVar3 = ( **(code**)( *param_1 + 0x128 ) )(param_1, (BIGNUM*)*ptr, local_78);
      if (iVar3 == 0) goto LAB_00102cc8;
      LAB_00102bb9:plVar6 = param_3 + 1;
      puVar2 = ptr;
      if (lVar7 != 1) {
         do {
            puVar9 = puVar2 + 1;
            iVar3 = BN_is_zero(*(undefined8*)( *plVar6 + 0x20 ));
            if (iVar3 == 0) {
               iVar3 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *puVar9, *puVar2, *(undefined8*)( *plVar6 + 0x20 ), local_78);
               if (iVar3 == 0) goto LAB_00102b03;
            }
 else {
               pBVar5 = BN_copy((BIGNUM*)*puVar9, (BIGNUM*)*puVar2);
               if (pBVar5 == (BIGNUM*)0x0) goto LAB_00102b03;
            }

            plVar6 = plVar6 + 1;
            puVar2 = puVar9;
         }
 while ( param_3 + param_2 != plVar6 );
      }

      iVar3 = ( **(code**)( *param_1 + 0x110 ) )(param_1, b, ptr[param_2 + -1], local_78);
      if (iVar3 != 0) {
         lVar7 = lVar8;
         if (( *(code**)( *param_1 + 0x118 ) == (code*)0x0 ) || ( ( iVar3 = ( **(code**)( *param_1 + 0x118 ) )(param_1, b, b, local_78) ),iVar3 != 0 && ( iVar3 = ( **(code**)( *param_1 + 0x118 ) )(param_1, b, b, local_78) ),iVar3 != 0 )) {
            for (; lVar7 != 0; lVar7 = lVar7 + -1) {
               iVar3 = BN_is_zero(*(undefined8*)( param_3[lVar7] + 0x20 ));
               if (( iVar3 == 0 ) && ( ( ( iVar3 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, pBVar4, ptr[lVar7 + -1], b, local_78) ),iVar3 == 0 || ( iVar3 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, b, b, *(undefined8*)( param_3[lVar7] + 0x20 ), local_78) ),iVar3 == 0 ) ) || ( pBVar5 = BN_copy(*(BIGNUM**)( param_3[lVar7] + 0x20 ), pBVar4) ),pBVar5 == (BIGNUM*)0x0) goto LAB_00102b03;
            }

            iVar3 = BN_is_zero(*(undefined8*)( *param_3 + 0x20 ));
            if (( iVar3 != 0 ) || ( pBVar4 = BN_copy(*(BIGNUM**)( *param_3 + 0x20 ), b) ),pBVar4 != (BIGNUM*)0x0) {
               lVar7 = 0;
               do {
                  lVar1 = param_3[lVar7];
                  iVar3 = BN_is_zero(*(undefined8*)( lVar1 + 0x20 ));
                  if (iVar3 == 0) {
                     iVar3 = ( **(code**)( *param_1 + 0x100 ) )(param_1, b, *(undefined8*)( lVar1 + 0x20 ), local_78);
                     if (( ( iVar3 == 0 ) || ( iVar3 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( lVar1 + 0x10 ), *(undefined8*)( lVar1 + 0x10 ), b, local_78) ),iVar3 == 0 )) goto LAB_00102b03;
                     if (*(code**)( *param_1 + 0x128 ) == (code*)0x0) {
                        iVar3 = BN_set_word(*(BIGNUM**)( lVar1 + 0x20 ), 1);
                     }
 else {
                        iVar3 = ( **(code**)( *param_1 + 0x128 ) )(param_1, *(BIGNUM**)( lVar1 + 0x20 ), local_78);
                     }

                     if (iVar3 == 0) goto LAB_00102b03;
                     *(undefined4*)( lVar1 + 0x28 ) = 1;
                  }

                  bVar11 = lVar7 != lVar8;
                  lVar7 = lVar7 + 1;
               }
 while ( bVar11 );
               uVar10 = 1;
               goto LAB_00102b06;
            }

         }

         goto LAB_00102cc8;
      }

      ERR_new();
      ERR_set_debug("crypto/ec/ecp_smpl.c", 0x4fb, "ossl_ec_GFp_simple_points_make_affine");
      ERR_set_error(0x10, 0x80003, 0);
      BN_CTX_end(local_78);
      BN_CTX_free(local_68);
   }

   uVar10 = 0;
   LAB_00102b19:lVar7 = 0;
   do {
      if ((BIGNUM*)ptr[lVar7] == (BIGNUM*)0x0) break;
      BN_clear_free((BIGNUM*)ptr[lVar7]);
      lVar7 = lVar7 + 1;
   }
 while ( param_2 != lVar7 );
   CRYPTO_free(ptr);
   return uVar10;
   LAB_00102b03:uVar10 = 0;
   LAB_00102b06:BN_CTX_end(local_78);
   BN_CTX_free(local_68);
   goto LAB_00102b19;
}
uint ossl_ec_GFp_simple_ladder_post(EC_GROUP *param_1, EC_POINT *param_2, long param_3, EC_POINT *param_4, BN_CTX *param_5) {
   int iVar1;
   uint uVar2;
   BIGNUM *b;
   BIGNUM *r;
   BIGNUM *b_00;
   BIGNUM *pBVar3;
   BIGNUM *r_00;
   BIGNUM *pBVar4;
   BIGNUM *b_01;
   long lVar5;
   iVar1 = BN_is_zero(*(undefined8*)( param_2 + 0x20 ));
   if (iVar1 != 0) {
      uVar2 = EC_POINT_set_to_infinity(param_1, param_2);
      return uVar2;
   }

   iVar1 = BN_is_zero(*(undefined8*)( param_3 + 0x20 ));
   if (iVar1 != 0) {
      iVar1 = EC_POINT_copy(param_2, param_4);
      if (iVar1 == 0) {
         return 0;
      }

      iVar1 = EC_POINT_invert(param_1, param_2, param_5);
      return ( uint )(iVar1 != 0);
   }

   BN_CTX_start(param_5);
   b = BN_CTX_get(param_5);
   r = BN_CTX_get(param_5);
   b_00 = BN_CTX_get(param_5);
   pBVar3 = BN_CTX_get(param_5);
   r_00 = BN_CTX_get(param_5);
   pBVar4 = BN_CTX_get(param_5);
   b_01 = BN_CTX_get(param_5);
   uVar2 = 0;
   if (( ( ( ( ( ( ( ( b_01 != (BIGNUM*)0x0 ) && ( iVar1 = BN_mod_lshift1_quick(r_00, *(BIGNUM**)( param_4 + 0x18 ), *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 ) ) && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b_01, *(undefined8*)( param_2 + 0x10 ), r_00, param_5) ),iVar1 != 0 ) ) && ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b_01, *(undefined8*)( param_3 + 0x20 ), b_01, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar4, *(undefined8*)( param_2 + 0x20 ), b_01, param_5) ),iVar1 != 0 ) ) ) ) && ( iVar1 = BN_mod_lshift1_quick(r, *(BIGNUM**)( param_1 + 0x68 ), *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0) ( ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r, *(undefined8*)( param_3 + 0x20 ), r, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, pBVar3, *(undefined8*)( param_2 + 0x20 ), param_5) ),iVar1 != 0 ) ) && ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b_00, pBVar3, r, param_5) ),iVar1 != 0 && ( ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b_01, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_1 + 0x60 ), param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r, *(undefined8*)( param_4 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), param_5) ),iVar1 != 0 ) ) && ( iVar1 = BN_mod_add_quick(r, r, b_01, *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 ) && ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r, *(undefined8*)( param_3 + 0x20 ), r, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b, *(undefined8*)( param_4 + 0x10 ), *(undefined8*)( param_2 + 0x20 ), param_5) ),iVar1 != 0 ) && ( ( iVar1 = BN_mod_add_quick(b_01, *(BIGNUM**)( param_2 + 0x10 ), b, *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 && ( ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b_01, b_01, r, param_5) ),iVar1 != 0 && ( iVar1 = BN_mod_add_quick(b_01, b_01, b_00, *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 ) ) && ( ( iVar1 = BN_mod_sub_quick(b, b, *(BIGNUM**)( param_2 + 0x10 ), *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 && ( ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, b, b, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, b, b, *(undefined8*)( param_3 + 0x10 ), param_5) ),iVar1 != 0 ) ) && ( iVar1 = BN_mod_sub_quick(b, b_01, b, *(BIGNUM**)( param_1 + 0x40 )) ),iVar1 != 0 ) ) && ( ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r, *(undefined8*)( param_3 + 0x20 ), r_00, param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, r, pBVar3, r, param_5) ),iVar1 != 0 ) * (long*)param_1;
   if (*(code**)( lVar5 + 0x120 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar5 + 0x120 ) )(param_1, r, r, param_5);
      if (iVar1 == 0) goto LAB_00103110;
      lVar5 = *(long*)param_1;
   }

   iVar1 = ( **(code**)( lVar5 + 0x110 ) )(param_1, r, r, param_5);
   if (iVar1 != 0) {
      lVar5 = *(long*)param_1;
      if (*(code**)( lVar5 + 0x118 ) != (code*)0x0) {
         iVar1 = ( **(code**)( lVar5 + 0x118 ) )(param_1, r, r, param_5);
         if (iVar1 == 0) goto LAB_00103110;
         lVar5 = *(long*)param_1;
      }

      iVar1 = ( **(code**)( lVar5 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), pBVar4, r, param_5);
      if (( iVar1 != 0 ) && ( iVar1 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x18 ), b, r, param_5) ),iVar1 != 0) {
         if (*(code**)( *(long*)param_1 + 0x128 ) == (code*)0x0) {
            iVar1 = BN_set_word(*(BIGNUM**)( param_2 + 0x20 ), 1);
         }
 else {
            iVar1 = ( **(code**)( *(long*)param_1 + 0x128 ) )(param_1, *(BIGNUM**)( param_2 + 0x20 ), param_5);
         }

         if (iVar1 != 0) {
            *(undefined4*)( param_2 + 0x28 ) = 1;
            uVar2 = 1;
         }

      }

   }

}
LAB_00103110:BN_CTX_end(param_5);return uVar2;}int ossl_ec_GFp_simple_invert(EC_GROUP *param_1, EC_POINT *param_2) {
   int iVar1;
   iVar1 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar1 == 0) {
      iVar1 = BN_is_zero(*(undefined8*)( param_2 + 0x18 ));
      if (iVar1 == 0) {
         iVar1 = BN_usub(*(BIGNUM**)( param_2 + 0x18 ), *(BIGNUM**)( param_1 + 0x40 ), *(BIGNUM**)( param_2 + 0x18 ));
         return iVar1;
      }

   }

   return 1;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */EC_METHOD *EC_GFp_simple_method(void) {
   return (EC_METHOD*)ret_8;
}
undefined8 ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp(long *param_1, long param_2, BIGNUM *param_3, BIGNUM *param_4, BIGNUM *param_5, BN_CTX *param_6) {
   code *pcVar1;
   code *pcVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   BN_CTX *c;
   c = (BN_CTX*)0x0;
   if (( param_6 == (BN_CTX*)0x0 ) && ( param_6 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]) ),c = param_6,param_6 == (BN_CTX*)0x0) {
      return 0;
   }

   if (( ( param_3 == (BIGNUM*)0x0 ) || ( ( iVar3 = BN_nnmod(*(BIGNUM**)( param_2 + 0x10 ), param_3, (BIGNUM*)param_1[8], param_6) ),iVar3 != 0 && ( ( *(code**)( *param_1 + 0x118 ) == (code*)0x0 || ( iVar3 = ( **(code**)( *param_1 + 0x118 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), param_6) ),iVar3 != 0 ) ) ) )) {
      if (param_5 != (BIGNUM*)0x0) {
         iVar3 = BN_nnmod(*(BIGNUM**)( param_2 + 0x20 ), param_5, (BIGNUM*)param_1[8], param_6);
         if (iVar3 == 0) goto LAB_0010363a;
         iVar3 = BN_is_one(*(undefined8*)( param_2 + 0x20 ));
         pcVar1 = *(code**)( *param_1 + 0x118 );
         if (pcVar1 != (code*)0x0) {
            uVar5 = *(undefined8*)( param_2 + 0x20 );
            if (( iVar3 == 0 ) || ( pcVar2 = *(code**)( *param_1 + 0x128 ) ),pcVar2 == (code*)0x0) {
               iVar4 = ( *pcVar1 )(param_1, uVar5, uVar5, param_6);
            }
 else {
               iVar4 = ( *pcVar2 )(param_1, uVar5, param_6);
            }

            if (iVar4 == 0) goto LAB_0010363a;
         }

         *(int*)( param_2 + 0x28 ) = iVar3;
      }

      uVar5 = 1;
   }
 else {
      LAB_0010363a:uVar5 = 0;
   }

   BN_CTX_free(c);
   return uVar5;
}
uint ossl_ec_GFp_simple_get_Jprojective_coordinates_GFp(long *param_1, long param_2, BIGNUM *param_3, BIGNUM *param_4, BIGNUM *param_5, BN_CTX *param_6) {
   uint uVar1;
   int iVar2;
   BIGNUM *pBVar3;
   BN_CTX *c;
   if (*(long*)( *param_1 + 0x120 ) == 0) {
      if (( ( param_3 != (BIGNUM*)0x0 ) && ( pBVar3 = BN_copy(param_3, *(BIGNUM**)( param_2 + 0x10 )) ),pBVar3 == (BIGNUM*)0x0 )) {
         uVar1 = 0;
         c = (BN_CTX*)0x0;
         goto LAB_001037a7;
      }

      if (param_5 != (BIGNUM*)0x0) {
         pBVar3 = BN_copy(param_5, *(BIGNUM**)( param_2 + 0x20 ));
         uVar1 = ( uint )(pBVar3 != (BIGNUM*)0x0);
         c = (BN_CTX*)0x0;
         goto LAB_001037a7;
      }

      c = (BN_CTX*)0x0;
   }
 else {
      c = (BN_CTX*)0x0;
      if (( param_6 == (BN_CTX*)0x0 ) && ( param_6 = (BN_CTX*)BN_CTX_new_ex(param_1[0x15]) ),c = param_6,param_6 == (BN_CTX*)0x0) {
         return 0;
      }

      if (( ( param_3 != (BIGNUM*)0x0 ) && ( uVar1 = ( **(code**)( *param_1 + 0x120 ) )(param_1, param_3, *(undefined8*)( param_2 + 0x10 ), param_6) ),uVar1 == 0 )) goto LAB_001037a7;
      if (param_5 != (BIGNUM*)0x0) {
         iVar2 = ( **(code**)( *param_1 + 0x120 ) )(param_1, param_5, *(undefined8*)( param_2 + 0x20 ), param_6);
         uVar1 = ( uint )(iVar2 != 0);
         goto LAB_001037a7;
      }

   }

   uVar1 = 1;
   LAB_001037a7:BN_CTX_free(c);
   return uVar1;
}

