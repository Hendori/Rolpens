undefined8 ossl_ec_GF2m_simple_points_make_affine(long *param_1, long param_2, long param_3, undefined8 param_4) {
   undefined8 uVar1;
   long lVar2;
   if (param_2 == 0) {
      return 1;
   }

   lVar2 = 0;
   do {
      uVar1 = ( **(code**)( *param_1 + 0xd0 ) )(param_1, *(undefined8*)( param_3 + lVar2 * 8 ), param_4);
      if ((int)uVar1 == 0) {
         return uVar1;
      }

      lVar2 = lVar2 + 1;
   }
 while ( param_2 != lVar2 );
   return 1;
}
undefined8 ossl_ec_GF2m_simple_group_init(long param_1) {
   BIGNUM *pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x40 ) = pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x60 ) = pBVar1;
   pBVar1 = BN_new();
   *(BIGNUM**)( param_1 + 0x68 ) = pBVar1;
   if (( ( *(BIGNUM**)( param_1 + 0x40 ) != (BIGNUM*)0x0 ) && ( *(long*)( param_1 + 0x60 ) != 0 ) ) && ( pBVar1 != (BIGNUM*)0x0 )) {
      return 1;
   }

   BN_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_free(*(BIGNUM**)( param_1 + 0x68 ));
   return 0;
}
void ossl_ec_GF2m_simple_group_finish(long param_1) {
   BN_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_free(*(BIGNUM**)( param_1 + 0x68 ));
   return;
}
undefined8 ossl_ec_GF2m_simple_point_init(long param_1) {
   BIGNUM *pBVar1;
   for (int i = 0; i < 3; i++) {
      pBVar1 = BN_new();
      *(BIGNUM**)( param_1 + ( 8*i + 16 ) ) = pBVar1;
   }

   if (( ( *(BIGNUM**)( param_1 + 0x10 ) != (BIGNUM*)0x0 ) && ( *(long*)( param_1 + 0x18 ) != 0 ) ) && ( pBVar1 != (BIGNUM*)0x0 )) {
      return 1;
   }

   for (int i = 0; i < 3; i++) {
      BN_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   return 0;
}
void ossl_ec_GF2m_simple_point_finish(long param_1) {
   for (int i = 0; i < 3; i++) {
      BN_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   return;
}
void ossl_ec_GF2m_simple_group_clear_finish(long param_1) {
   undefined8 uVar1;
   BN_clear_free(*(BIGNUM**)( param_1 + 0x40 ));
   BN_clear_free(*(BIGNUM**)( param_1 + 0x60 ));
   BN_clear_free(*(BIGNUM**)( param_1 + 0x68 ));
   uVar1 = _LC0;
   *(undefined1(*) [16])( param_1 + 0x48 ) = (undefined1[16])0x0;
   *(undefined8*)( param_1 + 0x58 ) = uVar1;
   return;
}
void ossl_ec_GF2m_simple_point_clear_finish(long param_1) {
   for (int i = 0; i < 3; i++) {
      BN_clear_free(*(BIGNUM**)( param_1 + ( 8*i + 16 ) ));
   }

   *(undefined4*)( param_1 + 0x28 ) = 0;
   return;
}
bool ossl_ec_GF2m_simple_group_get_curve(long param_1, BIGNUM *param_2, BIGNUM *param_3, BIGNUM *param_4) {
   BIGNUM *pBVar1;
   bool bVar2;
   if (( param_2 != (BIGNUM*)0x0 ) && ( pBVar1 = BN_copy(param_2, *(BIGNUM**)( param_1 + 0x40 )) ),pBVar1 == (BIGNUM*)0x0) {
      return false;
   }

   if (( param_3 != (BIGNUM*)0x0 ) && ( pBVar1 = BN_copy(param_3, *(BIGNUM**)( param_1 + 0x60 )) ),pBVar1 == (BIGNUM*)0x0) {
      return false;
   }

   bVar2 = true;
   if (param_4 != (BIGNUM*)0x0) {
      pBVar1 = BN_copy(param_4, *(BIGNUM**)( param_1 + 0x68 ));
      bVar2 = pBVar1 != (BIGNUM*)0x0;
   }

   return bVar2;
}
undefined8 ossl_ec_GF2m_simple_point_copy(long param_1, long param_2) {
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
undefined8 ossl_ec_GF2m_simple_group_copy(long param_1, long param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   BIGNUM *pBVar5;
   long lVar6;
   pBVar5 = BN_copy(*(BIGNUM**)( param_1 + 0x40 ), *(BIGNUM**)( param_2 + 0x40 ));
   if (pBVar5 != (BIGNUM*)0x0) {
      pBVar5 = BN_copy(*(BIGNUM**)( param_1 + 0x60 ), *(BIGNUM**)( param_2 + 0x60 ));
      if (pBVar5 != (BIGNUM*)0x0) {
         pBVar5 = BN_copy(*(BIGNUM**)( param_1 + 0x68 ), *(BIGNUM**)( param_2 + 0x68 ));
         if (pBVar5 != (BIGNUM*)0x0) {
            uVar1 = *(undefined8*)( param_2 + 0x48 );
            uVar2 = *(undefined8*)( param_2 + 0x50 );
            *(undefined8*)( param_1 + 0x48 ) = uVar1;
            *(undefined8*)( param_1 + 0x50 ) = uVar2;
            *(undefined8*)( param_1 + 0x58 ) = *(undefined8*)( param_2 + 0x58 );
            iVar3 = (int)uVar1;
            iVar4 = iVar3 + 0x3f;
            iVar3 = iVar3 + 0x7e;
            if (-1 < iVar4) {
               iVar3 = iVar4;
            }

            lVar6 = bn_wexpand(*(undefined8*)( param_1 + 0x60 ), iVar3 >> 6);
            if (lVar6 != 0) {
               iVar4 = *(int*)( param_1 + 0x48 ) + 0x3f;
               iVar3 = *(int*)( param_1 + 0x48 ) + 0x7e;
               if (-1 < iVar4) {
                  iVar3 = iVar4;
               }

               lVar6 = bn_wexpand(*(undefined8*)( param_1 + 0x68 ), iVar3 >> 6);
               if (lVar6 != 0) {
                  bn_set_all_zero(*(undefined8*)( param_1 + 0x60 ));
                  bn_set_all_zero(*(undefined8*)( param_1 + 0x68 ));
                  return 1;
               }

            }

         }

      }

   }

   return 0;
}
undefined8 ossl_ec_GF2m_simple_group_set_curve(long param_1, BIGNUM *param_2, undefined8 param_3, undefined8 param_4) {
   uint uVar1;
   int iVar2;
   int iVar3;
   BIGNUM *pBVar4;
   long lVar5;
   long lVar6;
   pBVar4 = BN_copy(*(BIGNUM**)( param_1 + 0x40 ), param_2);
   if (pBVar4 != (BIGNUM*)0x0) {
      lVar6 = param_1 + 0x48;
      uVar1 = BN_GF2m_poly2arr(*(undefined8*)( param_1 + 0x40 ), lVar6, 6);
      if (( uVar1 & 0xfffffffd ) == 4) {
         iVar2 = BN_GF2m_mod_arr(*(undefined8*)( param_1 + 0x60 ), param_3, lVar6);
         if (iVar2 != 0) {
            iVar3 = *(int*)( param_1 + 0x48 ) + 0x3f;
            iVar2 = *(int*)( param_1 + 0x48 ) + 0x7e;
            if (-1 < iVar3) {
               iVar2 = iVar3;
            }

            lVar5 = bn_wexpand(*(undefined8*)( param_1 + 0x60 ), iVar2 >> 6);
            if (lVar5 != 0) {
               bn_set_all_zero(*(undefined8*)( param_1 + 0x60 ));
               iVar2 = BN_GF2m_mod_arr(*(undefined8*)( param_1 + 0x68 ), param_4, lVar6);
               if (iVar2 != 0) {
                  iVar3 = *(int*)( param_1 + 0x48 ) + 0x3f;
                  iVar2 = *(int*)( param_1 + 0x48 ) + 0x7e;
                  if (-1 < iVar3) {
                     iVar2 = iVar3;
                  }

                  lVar6 = bn_wexpand(*(undefined8*)( param_1 + 0x68 ), iVar2 >> 6);
                  if (lVar6 != 0) {
                     bn_set_all_zero(*(undefined8*)( param_1 + 0x68 ));
                     return 1;
                  }

               }

            }

         }

      }
 else {
         ERR_new();
         ERR_set_debug("crypto/ec/ec2_smpl.c", 0x70, "ossl_ec_GF2m_simple_group_set_curve");
         ERR_set_error(0x10, 0x83, 0);
      }

   }

   return 0;
}
int ossl_ec_GF2m_simple_group_get_degree(long param_1) {
   int iVar1;
   iVar1 = BN_num_bits(*(BIGNUM**)( param_1 + 0x40 ));
   return iVar1 + -1;
}
void ossl_ec_GF2m_simple_is_at_infinity(undefined8 param_1, long param_2) {
   BN_is_zero(*(undefined8*)( param_2 + 0x20 ));
   return;
}
uint ossl_ec_GF2m_simple_group_check_discriminant(long param_1, BN_CTX *param_2) {
   uint uVar1;
   int iVar2;
   BIGNUM *pBVar3;
   BN_CTX *c;
   c = (BN_CTX*)0x0;
   if (param_2 == (BN_CTX*)0x0) {
      param_2 = BN_CTX_new();
      c = param_2;
      if (param_2 == (BN_CTX*)0x0) {
         ERR_new();
         uVar1 = 0;
         ERR_set_debug("crypto/ec/ec2_smpl.c", 0xbf, "ossl_ec_GF2m_simple_group_check_discriminant");
         ERR_set_error(0x10, 0x80003, 0);
         goto LAB_0010055a;
      }

   }

   uVar1 = 0;
   BN_CTX_start(param_2);
   pBVar3 = BN_CTX_get(param_2);
   if (pBVar3 != (BIGNUM*)0x0) {
      uVar1 = BN_GF2m_mod_arr(pBVar3, *(undefined8*)( param_1 + 0x68 ), param_1 + 0x48);
      if (uVar1 != 0) {
         iVar2 = BN_is_zero(pBVar3);
         uVar1 = ( uint )(iVar2 == 0);
      }

   }

   LAB_0010055a:BN_CTX_end(param_2);
   BN_CTX_free(c);
   return uVar1;
}
undefined8 ossl_ec_GF2m_simple_point_set_to_infinity(undefined8 param_1, long param_2) {
   *(undefined4*)( param_2 + 0x28 ) = 0;
   BN_zero_ex(*(undefined8*)( param_2 + 0x20 ));
   return 1;
}
undefined8 ossl_ec_GF2m_simple_point_set_affine_coordinates(undefined8 param_1, long param_2, BIGNUM *param_3, BIGNUM *param_4) {
   BIGNUM *pBVar1;
   if (( param_3 == (BIGNUM*)0x0 ) || ( param_4 == (BIGNUM*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec2_smpl.c", 0x128, "ossl_ec_GF2m_simple_point_set_affine_coordinates");
      ERR_set_error(0x10, 0xc0102, 0);
   }
 else {
      pBVar1 = BN_copy(*(BIGNUM**)( param_2 + 0x10 ), param_3);
      if (pBVar1 != (BIGNUM*)0x0) {
         BN_set_negative(*(BIGNUM**)( param_2 + 0x10 ), 0);
         pBVar1 = BN_copy(*(BIGNUM**)( param_2 + 0x18 ), param_4);
         if (pBVar1 != (BIGNUM*)0x0) {
            BN_set_negative(*(BIGNUM**)( param_2 + 0x18 ), 0);
            pBVar1 = BN_value_one();
            pBVar1 = BN_copy(*(BIGNUM**)( param_2 + 0x20 ), pBVar1);
            if (pBVar1 != (BIGNUM*)0x0) {
               BN_set_negative(*(BIGNUM**)( param_2 + 0x20 ), 0);
               *(undefined4*)( param_2 + 0x28 ) = 1;
               return 1;
            }

         }

      }

   }

   return 0;
}
undefined8 ossl_ec_GF2m_simple_point_get_affine_coordinates(EC_GROUP *param_1, EC_POINT *param_2, BIGNUM *param_3, BIGNUM *param_4) {
   int iVar1;
   BIGNUM *pBVar2;
   iVar1 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar1 == 0) {
      pBVar2 = BN_value_one();
      iVar1 = BN_cmp(*(BIGNUM**)( param_2 + 0x20 ), pBVar2);
      if (iVar1 == 0) {
         if (param_3 != (BIGNUM*)0x0) {
            pBVar2 = BN_copy(param_3, *(BIGNUM**)( param_2 + 0x10 ));
            if (pBVar2 == (BIGNUM*)0x0) {
               return 0;
            }

            BN_set_negative(param_3, 0);
         }

         if (param_4 != (BIGNUM*)0x0) {
            pBVar2 = BN_copy(param_4, *(BIGNUM**)( param_2 + 0x18 ));
            if (pBVar2 == (BIGNUM*)0x0) {
               return 0;
            }

            BN_set_negative(param_4, 0);
         }

         return 1;
      }

      ERR_new();
      ERR_set_debug("crypto/ec/ec2_smpl.c", 0x14d, "ossl_ec_GF2m_simple_point_get_affine_coordinates");
      ERR_set_error(0x10, 0xc0101, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("crypto/ec/ec2_smpl.c", 0x148, "ossl_ec_GF2m_simple_point_get_affine_coordinates");
      ERR_set_error(0x10, 0x6a, 0);
   }

   return 0;
}
bool ec_GF2m_simple_ladder_step(long *param_1, long param_2, long param_3, long param_4, undefined8 param_5) {
   int iVar1;
   iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_3 + 0x10 ));
   if (( ( ( ( iVar1 != 0 ) && ( iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_3 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_3 + 0x20 ), param_5) ),iVar1 != 0 ) ) && ( iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, *(undefined8*)( param_3 + 0x18 ), *(undefined8*)( param_2 + 0x20 ), param_5) ),iVar1 != 0 )) {
      iVar1 = BN_GF2m_add(*(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_3 + 0x18 ));
      return iVar1 != 0;
   }

   return false;
}
bool ossl_ec_GF2m_simple_add(EC_GROUP *param_1, EC_POINT *param_2, EC_POINT *param_3, EC_POINT *param_4, BN_CTX *param_5) {
   int iVar1;
   BIGNUM *a;
   BIGNUM *a_00;
   BIGNUM *a_01;
   BIGNUM *a_02;
   BIGNUM *pBVar2;
   BIGNUM *pBVar3;
   BIGNUM *pBVar4;
   BIGNUM *pBVar5;
   BIGNUM *pBVar6;
   EC_POINT *src;
   bool bVar7;
   BN_CTX *local_80;
   iVar1 = EC_POINT_is_at_infinity(param_1, param_3);
   src = param_4;
   if (( iVar1 != 0 ) || ( iVar1 = EC_POINT_is_at_infinity(param_1, param_4) ),src = param_3,iVar1 != 0) {
      iVar1 = EC_POINT_copy(param_2, src);
      return iVar1 != 0;
   }

   local_80 = (BN_CTX*)0x0;
   bVar7 = false;
   if (( param_5 == (BN_CTX*)0x0 ) && ( param_5 = BN_CTX_new() ),local_80 = param_5,param_5 == (BN_CTX*)0x0) {
      return false;
   }

   BN_CTX_start(param_5);
   a = BN_CTX_get(param_5);
   a_00 = BN_CTX_get(param_5);
   a_01 = BN_CTX_get(param_5);
   a_02 = BN_CTX_get(param_5);
   pBVar2 = BN_CTX_get(param_5);
   pBVar3 = BN_CTX_get(param_5);
   pBVar4 = BN_CTX_get(param_5);
   pBVar5 = BN_CTX_get(param_5);
   if (pBVar5 == (BIGNUM*)0x0) goto LAB_00100c58;
   if (*(int*)( param_3 + 0x28 ) == 0) {
      iVar1 = EC_POINT_get_affine_coordinates(param_1, param_3, a, a_00, param_5);
      if (iVar1 == 0) goto LAB_00100c58;
   }
 else {
      pBVar6 = BN_copy(a, *(BIGNUM**)( param_3 + 0x10 ));
      if (( pBVar6 == (BIGNUM*)0x0 ) || ( pBVar6 = BN_copy(a_00, *(BIGNUM**)( param_3 + 0x18 )) ),pBVar6 == (BIGNUM*)0x0) goto LAB_00100c58;
   }

   if (*(int*)( param_4 + 0x28 ) == 0) {
      iVar1 = EC_POINT_get_affine_coordinates(param_1, param_4, a_01, a_02, param_5);
      if (iVar1 == 0) goto LAB_00100c58;
   }
 else {
      pBVar6 = BN_copy(a_01, *(BIGNUM**)( param_4 + 0x10 ));
      if (( pBVar6 == (BIGNUM*)0x0 ) || ( pBVar6 = BN_copy(a_02, *(BIGNUM**)( param_4 + 0x18 )) ),pBVar6 == (BIGNUM*)0x0) goto LAB_00100c58;
   }

   iVar1 = BN_ucmp(a, a_01);
   if (iVar1 == 0) {
      iVar1 = BN_ucmp(a_00, a_02);
      if (( iVar1 != 0 ) || ( iVar1 = iVar1 != 0 )) {
         iVar1 = EC_POINT_set_to_infinity(param_1, param_2);
         bVar7 = iVar1 != 0;
         goto LAB_00100c58;
      }

      iVar1 = ( **(code**)( *(long*)param_1 + 0x108 ) )(param_1, pBVar4, a_02, a_01, param_5);
      if (( ( ( iVar1 == 0 ) || ( iVar1 = BN_GF2m_add(pBVar4, pBVar4, a_01) ),iVar1 == 0 ) ) || ( iVar1 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, pBVar2, pBVar4, param_5) ),iVar1 == 0) goto LAB_00100c58;
      iVar1 = BN_GF2m_add(pBVar2, pBVar2, *(undefined8*)( param_1 + 0x60 ));
   }
 else {
      iVar1 = BN_GF2m_add(pBVar5, a, a_01);
      if (( ( ( ( iVar1 == 0 ) || ( iVar1 = BN_GF2m_add(pBVar4, a_00, a_02) ),iVar1 == 0 ) ) || ( iVar1 = ( **(code**)( *(long*)param_1 + 0x108 ) )(param_1, pBVar4, pBVar4, pBVar5, param_5) ),iVar1 == 0 )) goto LAB_00100c58;
      iVar1 = BN_GF2m_add(pBVar2, pBVar2, pBVar5);
   }

   if (( ( iVar1 != 0 ) && ( iVar1 = BN_GF2m_add(pBVar3, a_01, pBVar2) ),iVar1 != 0 )) {
      iVar1 = EC_POINT_set_affine_coordinates(param_1, param_2, pBVar2, pBVar3, param_5);
      bVar7 = iVar1 != 0;
   }

   LAB_00100c58:BN_CTX_end(param_5);
   BN_CTX_free(local_80);
   return bVar7;
}
void ossl_ec_GF2m_simple_dbl(void) {
   ossl_ec_GF2m_simple_add();
   return;
}
void ossl_ec_GF2m_simple_field_mul(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   BN_GF2m_mod_mul_arr(param_2, param_3, param_4, param_1 + 0x48);
   return;
}
void ossl_ec_GF2m_simple_field_sqr(long param_1, undefined8 param_2, undefined8 param_3) {
   BN_GF2m_mod_sqr_arr(param_2, param_3, param_1 + 0x48);
   return;
}
void ossl_ec_GF2m_simple_field_div(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   BN_GF2m_mod_div(param_2, param_3, param_4, *(undefined8*)( param_1 + 0x40 ));
   return;
}
undefined8 ec_GF2m_simple_ladder_pre(long *param_1, long param_2, long param_3, long param_4, undefined8 param_5) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   if (*(int*)( param_4 + 0x28 ) == 0) {
      return 0;
   }

   do {
      iVar1 = BN_num_bits((BIGNUM*)param_1[8]);
      iVar1 = BN_priv_rand_ex(*(undefined8*)( param_3 + 0x20 ), iVar1 + -1, 0xffffffff, 0, 0, param_5);
      if (iVar1 == 0) {
         ERR_new();
         uVar3 = 0x2de;
         goto LAB_00100ef4;
      }

      iVar1 = BN_is_zero(*(undefined8*)( param_3 + 0x20 ));
   }
 while ( iVar1 != 0 );
   lVar2 = *param_1;
   uVar3 = *(undefined8*)( param_3 + 0x20 );
   if (*(code**)( lVar2 + 0x118 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar2 + 0x118 ) )(param_1, uVar3, uVar3, param_5);
      if (iVar1 == 0) {
         return 0;
      }

      lVar2 = *param_1;
      uVar3 = *(undefined8*)( param_3 + 0x20 );
   }

   iVar1 = ( **(code**)( lVar2 + 0xf8 ) )(param_1, *(undefined8*)( param_3 + 0x10 ), *(undefined8*)( param_4 + 0x10 ), uVar3, param_5);
   if (iVar1 != 0) {
      do {
         iVar1 = BN_num_bits((BIGNUM*)param_1[8]);
         iVar1 = BN_priv_rand_ex(*(undefined8*)( param_2 + 0x18 ), iVar1 + -1, 0xffffffff, 0, 0, param_5);
         if (iVar1 == 0) {
            ERR_new();
            uVar3 = 0x2ed;
            LAB_00100ef4:ERR_set_debug("crypto/ec/ec2_smpl.c", uVar3, "ec_GF2m_simple_ladder_pre");
            ERR_set_error(0x10, 0x80003, 0);
            return 0;
         }

         iVar1 = BN_is_zero(*(undefined8*)( param_2 + 0x18 ));
      }
 while ( iVar1 != 0 );
      lVar2 = *param_1;
      if (*(code**)( lVar2 + 0x118 ) != (code*)0x0) {
         iVar1 = ( **(code**)( lVar2 + 0x118 ) )(param_1, *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_2 + 0x18 ), param_5);
         if (iVar1 == 0) {
            return 0;
         }

         lVar2 = *param_1;
      }

      iVar1 = ( **(code**)( lVar2 + 0x100 ) )(param_1, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_4 + 0x10 ), param_5);
      if (( ( ( iVar1 != 0 ) && ( iVar1 = ( **(code**)( *param_1 + 0x100 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x20 ), param_5) ),iVar1 != 0 ) ) && ( iVar1 = BN_GF2m_add(*(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), param_1[0xd]) ),iVar1 != 0) ( ( iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_2 + 0x18 ), param_5) ),iVar1 != 0 && ( iVar1 = ( **(code**)( *param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x18 ), param_5) ),iVar1 != 0 ) * (undefined4*)( param_3 + 0x28 ) = 0;
      *(undefined4*)( param_2 + 0x28 ) = 0;
      return 1;
   }

}
return 0;}ulong ossl_ec_GF2m_simple_cmp(EC_GROUP *param_1, EC_POINT *param_2, EC_POINT *param_3, BN_CTX *param_4) {
   int iVar1;
   BIGNUM *a;
   BIGNUM *a_00;
   BIGNUM *b;
   BIGNUM *b_00;
   ulong uVar2;
   BN_CTX *c;
   iVar1 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar1 != 0) {
      iVar1 = EC_POINT_is_at_infinity(param_1, param_3);
      return ( ulong )(iVar1 == 0);
   }

   iVar1 = EC_POINT_is_at_infinity(param_1, param_3);
   if (iVar1 == 0) {
      if (( *(int*)( param_2 + 0x28 ) == 0 ) || ( *(int*)( param_3 + 0x28 ) == 0 )) {
         c = (BN_CTX*)0x0;
         if (( param_4 == (BN_CTX*)0x0 ) && ( param_4 = BN_CTX_new() ),c = param_4,param_4 == (BN_CTX*)0x0) {
            return 0xffffffff;
         }

         BN_CTX_start(param_4);
         a = BN_CTX_get(param_4);
         a_00 = BN_CTX_get(param_4);
         b = BN_CTX_get(param_4);
         b_00 = BN_CTX_get(param_4);
         if (( ( b_00 == (BIGNUM*)0x0 ) || ( iVar1 = EC_POINT_get_affine_coordinates(param_1, param_2, a, a_00, param_4) ),iVar1 == 0 )) {
            uVar2 = 0xffffffff;
         }
 else {
            uVar2 = 1;
            iVar1 = BN_cmp(a, b);
            if (iVar1 == 0) {
               iVar1 = BN_cmp(a_00, b_00);
               uVar2 = ( ulong )(iVar1 != 0);
            }

         }

         BN_CTX_end(param_4);
         BN_CTX_free(c);
         return uVar2;
      }

      iVar1 = BN_cmp(*(BIGNUM**)( param_2 + 0x10 ), *(BIGNUM**)( param_3 + 0x10 ));
      if (iVar1 == 0) {
         iVar1 = BN_cmp(*(BIGNUM**)( param_2 + 0x18 ), *(BIGNUM**)( param_3 + 0x18 ));
         return ( ulong )(iVar1 != 0);
      }

   }

   return 1;
}
undefined4 ossl_ec_GF2m_simple_is_on_curve(EC_GROUP *param_1, EC_POINT *param_2, BN_CTX *param_3) {
   code *pcVar1;
   code *pcVar2;
   int iVar3;
   undefined4 uVar4;
   BIGNUM *pBVar5;
   BIGNUM *pBVar6;
   BN_CTX *c;
   uVar4 = 1;
   iVar3 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar3 == 0) {
      pcVar1 = *(code**)( *(long*)param_1 + 0xf8 );
      pcVar2 = *(code**)( *(long*)param_1 + 0x100 );
      if (( *(int*)( param_2 + 0x28 ) == 0 ) || ( ( c = (BN_CTX*)0x0 ),param_3 == (BN_CTX*)0x0 && ( param_3 = BN_CTX_new() ),c = param_3,param_3 == (BN_CTX*)0x0 )) {
         uVar4 = 0xffffffff;
      }
 else {
         BN_CTX_start(param_3);
         pBVar5 = BN_CTX_get(param_3);
         pBVar6 = BN_CTX_get(param_3);
         if (( ( ( ( pBVar6 == (BIGNUM*)0x0 ) || ( iVar3 = BN_GF2m_add(pBVar6, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_1 + 0x60 )) ),iVar3 == 0 ) ) || ( iVar3 = ( *pcVar1 )(param_1, pBVar6, pBVar6, *(undefined8*)( param_2 + 0x10 ), param_3) ),iVar3 == 0 )) {
            uVar4 = 0xffffffff;
         }
 else {
            uVar4 = BN_is_zero(pBVar6);
         }

         BN_CTX_end(param_3);
         BN_CTX_free(c);
      }

   }

   return uVar4;
}
undefined4 ossl_ec_GF2m_simple_make_affine(EC_GROUP *param_1, EC_POINT *param_2, BN_CTX *param_3) {
   int iVar1;
   BIGNUM *pBVar2;
   BIGNUM *b;
   undefined4 uVar3;
   BN_CTX *c;
   if (( *(int*)( param_2 + 0x28 ) == 0 ) && ( iVar1 = iVar1 == 0 )) {
      uVar3 = 0;
      c = (BN_CTX*)0x0;
      if (( param_3 != (BN_CTX*)0x0 ) || ( param_3 = BN_CTX_new() ),c = param_3,param_3 != (BN_CTX*)0x0) {
         BN_CTX_start(param_3);
         pBVar2 = BN_CTX_get(param_3);
         b = BN_CTX_get(param_3);
         if (( ( ( b != (BIGNUM*)0x0 ) && ( iVar1 = EC_POINT_get_affine_coordinates(param_1, param_2, pBVar2, b, param_3) ),iVar1 != 0 ) ) && ( pBVar2 = BN_copy(*(BIGNUM**)( param_2 + 0x10 ), pBVar2) ),pBVar2 != (BIGNUM*)0x0) {
            *(undefined4*)( param_2 + 0x28 ) = 1;
            uVar3 = 1;
         }

         BN_CTX_end(param_3);
         BN_CTX_free(c);
      }

   }
 else {
      uVar3 = 1;
   }

   return uVar3;
}
int ec_GF2m_simple_ladder_post(EC_GROUP *param_1, EC_POINT *param_2, long param_3, EC_POINT *param_4, BN_CTX *param_5) {
   int iVar1;
   int iVar2;
   BIGNUM *pBVar3;
   BIGNUM *pBVar4;
   BIGNUM *pBVar5;
   iVar1 = BN_is_zero(*(undefined8*)( param_2 + 0x20 ));
   if (iVar1 != 0) {
      iVar1 = EC_POINT_set_to_infinity(param_1, param_2);
      return iVar1;
   }

   iVar1 = BN_is_zero(*(undefined8*)( param_3 + 0x20 ));
   if (iVar1 == 0) {
      BN_CTX_start(param_5);
      pBVar3 = BN_CTX_get(param_5);
      pBVar4 = BN_CTX_get(param_5);
      pBVar5 = BN_CTX_get(param_5);
      iVar1 = 0;
      if (pBVar5 == (BIGNUM*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/ec/ec2_smpl.c", 0x33d, "ec_GF2m_simple_ladder_post");
         ERR_set_error(0x10, 0x80003, 0);
      }
 else {
         iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar3, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_3 + 0x20 ), param_5);
         if (( ( ( ( ( ( iVar2 != 0 ) && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar4, *(undefined8*)( param_4 + 0x10 ), *(undefined8*)( param_2 + 0x20 ), param_5) ),iVar2 != 0 ) ) && ( iVar2 = BN_GF2m_add(pBVar4, *(undefined8*)( param_2 + 0x10 )) ),iVar2 != 0 ) ) && ( ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar5, *(undefined8*)( param_4 + 0x10 ), *(undefined8*)( param_3 + 0x20 ), param_5) ),iVar2 != 0 && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x20 ), *(undefined8*)( param_2 + 0x10 ), pBVar5, param_5) ),iVar2 != 0 ) )) ( ( ( iVar2 = BN_GF2m_add(pBVar5, pBVar5, *(undefined8*)( param_3 + 0x10 )) ),iVar2 != 0 && ( ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar4, pBVar4, pBVar5, param_5) ),iVar2 != 0 && ( iVar2 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, pBVar5, *(undefined8*)( param_4 + 0x10 ), param_5) ),iVar2 != 0 ) ) ) && ( iVar2 = iVar2 != 0 ) && ( ( ( ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar5, pBVar5, pBVar3, param_5) ),iVar2 != 0 && ( iVar2 = BN_GF2m_add(pBVar4, pBVar5, pBVar4) ),iVar2 != 0 ) ) && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar5, *(undefined8*)( param_4 + 0x10 ), pBVar3, param_5) ),iVar2 != 0 ) && ( ( ( iVar2 = ( **(code**)( *(long*)param_1 + 0x110 ) )(param_1, pBVar5, pBVar5, param_5) ),iVar2 != 0 && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar4, pBVar4, pBVar5, param_5) ),iVar2 != 0 ) ) && ( ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x20 ), pBVar5, param_5) ),iVar2 != 0 && ( ( iVar2 = BN_GF2m_add(pBVar5, *(undefined8*)( param_4 + 0x10 ), *(undefined8*)( param_2 + 0x10 )) ),iVar2 != 0 && ( iVar2 = ( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1, pBVar5, pBVar5, pBVar4, param_5) ),iVar2 != 0 ) ) && ( ( iVar2 = BN_GF2m_add(*(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_4 + 0x18 ), pBVar5) ),iVar2 != 0 && ( iVar2 = BN_set_word(*(BIGNUM**)( param_2 + 0x20 ), 1) ),iVar2 != 0 ) * (undefined4*)( param_2 + 0x28 ) = 1;
         iVar1 = 1;
         BN_set_negative(*(BIGNUM**)( param_2 + 0x10 ), 0);
         BN_set_negative(*(BIGNUM**)( param_2 + 0x18 ), 0);
      }

   }

   BN_CTX_end(param_5);
}
else{iVar1 = EC_POINT_copy(param_2, param_4);if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
   return 1;
}
ERR_new();iVar1 = 0;ERR_set_debug("crypto/ec/ec2_smpl.c", 0x332, "ec_GF2m_simple_ladder_post");ERR_set_error(0x10, 0x80010, 0);}return iVar1;}int ec_GF2m_simple_field_inv(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = BN_GF2m_mod_inv(param_2, param_3, *(undefined8*)( param_1 + 0x40 ));
   if (iVar1 != 0) {
      return iVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/ec/ec2_smpl.c", 0x3a7, "ec_GF2m_simple_field_inv");
   ERR_set_error(0x10, 0xa5, 0);
   return 0;
}
ulong ec_GF2m_simple_points_mul(EC_GROUP *param_1, EC_POINT *param_2, long param_3, ulong param_4, undefined8 *param_5, long *param_6, BN_CTX *param_7) {
   int iVar1;
   ulong uVar2;
   EC_POINT *a;
   undefined8 uVar3;
   uint uVar4;
   if (1 < param_4) {
      LAB_001019a1:uVar2 = ossl_ec_wNAF_mul(param_1, param_2, param_3, param_4, param_5);
      return uVar2;
   }

   iVar1 = BN_is_zero(*(undefined8*)( param_1 + 0x10 ));
   if (iVar1 != 0) goto LAB_001019a1;
   iVar1 = BN_is_zero(*(undefined8*)( param_1 + 0x18 ));
   if (iVar1 != 0) goto LAB_001019a1;
   if (param_3 != 0) {
      if (( param_4 & 1 ) == 0) {
         uVar3 = 0;
         goto LAB_00101a76;
      }

      if (param_3 != 0) goto LAB_001019f7;
   }

   if (( param_4 & 1 ) == 0) {
      LAB_001019f7:a = EC_POINT_new(param_1);
      uVar4 = 0;
      if (a == (EC_POINT*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/ec/ec2_smpl.c", 0x38c, "ec_GF2m_simple_points_mul");
         ERR_set_error(0x10, 0x80010, 0);
      }
 else {
         iVar1 = ossl_ec_scalar_mul_ladder(param_1, a, param_3, 0, param_7);
         if (iVar1 != 0) {
            iVar1 = ossl_ec_scalar_mul_ladder(param_1, param_2, *param_6, *param_5, param_7);
            if (iVar1 != 0) {
               iVar1 = EC_POINT_add(param_1, param_2, a, param_2, param_7);
               uVar4 = ( uint )(iVar1 != 0);
            }

         }

         EC_POINT_free(a);
      }

      return (ulong)uVar4;
   }

   uVar3 = *param_5;
   param_3 = *param_6;
   LAB_00101a76:uVar2 = ossl_ec_scalar_mul_ladder(param_1, param_2, param_3, uVar3, param_7);
   return uVar2;
}
ulong ossl_ec_GF2m_simple_invert(EC_GROUP *param_1, EC_POINT *param_2, undefined8 param_3) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   iVar1 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar1 == 0) {
      uVar2 = BN_is_zero(*(undefined8*)( param_2 + 0x18 ));
      if (uVar2 == 0) {
         if (*(code**)( *(long*)param_1 + 0xd0 ) == (code*)0x0) {
            return (ulong)uVar2;
         }

         iVar1 = ( **(code**)( *(long*)param_1 + 0xd0 ) )(param_1, param_2, param_3);
         if (iVar1 == 0) {
            return (ulong)uVar2;
         }

         uVar3 = BN_GF2m_add(*(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_2 + 0x10 ), *(undefined8*)( param_2 + 0x18 ));
         return uVar3;
      }

   }

   return 1;
}
undefined1 *EC_GF2m_simple_method(void) {
   return ret_4;
}

