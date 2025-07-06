int ossl_rsa_multiprime_derive(long param_1) {
   int iVar1;
   undefined4 uVar2;
   BN_CTX *ctx;
   long lVar3;
   BIGNUM *pBVar4;
   BIGNUM *pBVar5;
   BIGNUM *pBVar6;
   BIGNUM *pBVar7;
   BIGNUM *pBVar8;
   BIGNUM *b;
   BIGNUM *pBVar9;
   undefined8 in_R8;
   undefined8 in_R9;
   int iVar10;
   undefined8 in_stack_00000008;
   long local_70;
   BIGNUM *local_68;
   BIGNUM *local_60;
   ctx = (BN_CTX*)BN_CTX_new_ex();
   if (ctx != (BN_CTX*)0x0) {
      BN_CTX_start(ctx);
      lVar3 = OPENSSL_sk_new_null();
      if (lVar3 != 0) {
         local_70 = OPENSSL_sk_new_null();
         if (local_70 == 0) {
            local_60 = (BIGNUM*)0x0;
            pBVar9 = (BIGNUM*)0x0;
            pBVar5 = (BIGNUM*)0x0;
            pBVar6 = (BIGNUM*)0x0;
            local_68 = (BIGNUM*)0x0;
            pBVar4 = (BIGNUM*)0x0;
            pBVar7 = (BIGNUM*)0x0;
            iVar1 = 0;
            goto LAB_00100295;
         }
         pBVar4 = BN_CTX_get(ctx);
         pBVar5 = BN_CTX_get(ctx);
         pBVar6 = BN_CTX_get(ctx);
         if (pBVar6 == (BIGNUM*)0x0) {
            LAB_001006d8:iVar1 = 0;
            pBVar9 = (BIGNUM*)0x0;
            pBVar5 = (BIGNUM*)0x0;
         } else {
            BN_set_flags(pBVar4, 4);
            BN_set_flags(pBVar5, 4);
            BN_set_flags(pBVar6, 4);
            pBVar7 = BN_copy(pBVar5, *(BIGNUM**)( param_1 + 0x28 ));
            if (pBVar7 == (BIGNUM*)0x0) {
               LAB_00100318:pBVar5 = (BIGNUM*)0x0;
               LAB_0010031d:pBVar9 = (BIGNUM*)0x0;
               local_60 = (BIGNUM*)0x0;
               pBVar6 = (BIGNUM*)0x0;
               pBVar4 = (BIGNUM*)0x0;
               iVar1 = 0;
               local_68 = (BIGNUM*)0x0;
               goto LAB_00100295;
            }
            pBVar8 = (BIGNUM*)OPENSSL_sk_value(in_R8, 0);
            b = (BIGNUM*)OPENSSL_sk_value(in_R8, 1);
            iVar1 = OPENSSL_sk_num(in_R8);
            if (iVar1 < 1) {
               LAB_0010037a:pBVar7 = BN_value_one();
               iVar1 = BN_sub(pBVar5, pBVar8, pBVar7);
               if (iVar1 != 0) {
                  pBVar7 = BN_value_one();
                  iVar1 = BN_sub(pBVar6, b, pBVar7);
                  if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
                     for (iVar1 = 2; iVar10 = OPENSSL_sk_num(),iVar1 < iVar10; iVar1 = iVar1 + 1) {
                        pBVar9 = (BIGNUM*)OPENSSL_sk_value(in_R8, iVar1);
                        pBVar7 = BN_new();
                        if (pBVar7 == (BIGNUM*)0x0) goto LAB_001006d8;
                        BN_set_flags(pBVar7, 4);
                        pBVar8 = BN_value_one();
                        iVar10 = BN_sub(pBVar7, pBVar9, pBVar8);
                        if (( iVar10 == 0 ) || ( iVar10 = iVar10 == 0 )) {
                           LAB_001006ee:iVar1 = 0;
                           pBVar9 = (BIGNUM*)0x0;
                           local_60 = (BIGNUM*)0x0;
                           pBVar5 = (BIGNUM*)0x0;
                           pBVar6 = (BIGNUM*)0x0;
                           pBVar4 = (BIGNUM*)0x0;
                           local_68 = (BIGNUM*)0x0;
                           goto LAB_00100295;
                        }
                        uVar2 = OPENSSL_sk_num(local_70);
                        iVar10 = OPENSSL_sk_insert(local_70, pBVar7, uVar2);
                        if (iVar10 == 0) goto LAB_001006ee;
                     }
                     local_68 = (BIGNUM*)BN_secure_new();
                     if (local_68 != (BIGNUM*)0x0) {
                        local_60 = (BIGNUM*)BN_secure_new();
                        if (local_60 == (BIGNUM*)0x0) {
                           pBVar9 = (BIGNUM*)0x0;
                           pBVar5 = (BIGNUM*)0x0;
                           pBVar6 = (BIGNUM*)0x0;
                           pBVar4 = (BIGNUM*)0x0;
                           pBVar7 = (BIGNUM*)0x0;
                           iVar1 = 0;
                           goto LAB_00100295;
                        }
                        iVar1 = BN_div((BIGNUM*)0x0, local_68, *(BIGNUM**)( param_1 + 0x38 ), pBVar5, ctx);
                        if (iVar1 != 0) {
                           uVar2 = OPENSSL_sk_num(in_R9);
                           iVar1 = OPENSSL_sk_insert(in_R9, local_68, uVar2);
                           if (iVar1 != 0) {
                              iVar1 = BN_div((BIGNUM*)0x0, local_60, *(BIGNUM**)( param_1 + 0x38 ), pBVar6, ctx);
                              if (iVar1 != 0) {
                                 uVar2 = OPENSSL_sk_num(in_R9);
                                 iVar1 = OPENSSL_sk_insert(in_R9, local_60, uVar2);
                                 if (iVar1 != 0) {
                                    for (iVar1 = 2; iVar10 = OPENSSL_sk_num(),iVar1 < iVar10; iVar1 = iVar1 + 1) {
                                       pBVar7 = (BIGNUM*)OPENSSL_sk_value(local_70, iVar1 + -2);
                                       pBVar4 = BN_new();
                                       if (pBVar4 == (BIGNUM*)0x0) {
                                          pBVar9 = (BIGNUM*)0x0;
                                          pBVar5 = (BIGNUM*)0x0;
                                          pBVar6 = (BIGNUM*)0x0;
                                          local_60 = (BIGNUM*)0x0;
                                          pBVar7 = (BIGNUM*)0x0;
                                          iVar1 = 0;
                                          local_68 = (BIGNUM*)0x0;
                                          goto LAB_00100295;
                                       }
                                       iVar10 = BN_div((BIGNUM*)0x0, pBVar4, *(BIGNUM**)( param_1 + 0x38 ), pBVar7, ctx);
                                       if (iVar10 == 0) {
                                          LAB_0010075a:iVar1 = 0;
                                          pBVar9 = (BIGNUM*)0x0;
                                          pBVar5 = (BIGNUM*)0x0;
                                          local_60 = (BIGNUM*)0x0;
                                          pBVar7 = (BIGNUM*)0x0;
                                          local_68 = (BIGNUM*)0x0;
                                          pBVar6 = (BIGNUM*)0x0;
                                          goto LAB_00100295;
                                       }
                                       uVar2 = OPENSSL_sk_num(in_R9);
                                       iVar10 = OPENSSL_sk_insert(in_R9, pBVar4, uVar2);
                                       if (iVar10 == 0) goto LAB_0010075a;
                                    }
                                    pBVar5 = BN_new();
                                    if (pBVar5 == (BIGNUM*)0x0) goto LAB_001006d8;
                                    pBVar7 = (BIGNUM*)OPENSSL_sk_value(in_R8, 0);
                                    pBVar9 = (BIGNUM*)OPENSSL_sk_value(in_R8, 1);
                                    pBVar7 = BN_mod_inverse(pBVar5, pBVar9, pBVar7, ctx);
                                    if (pBVar7 != (BIGNUM*)0x0) {
                                       uVar2 = OPENSSL_sk_num(in_stack_00000008);
                                       iVar1 = OPENSSL_sk_insert(in_stack_00000008, pBVar5, uVar2);
                                       if (iVar1 == 0) {
                                          pBVar9 = (BIGNUM*)0x0;
                                          iVar1 = 0;
                                       } else {
                                          for (iVar1 = 2; iVar10 = OPENSSL_sk_num(),iVar1 < iVar10; iVar1 = iVar1 + 1) {
                                             pBVar7 = (BIGNUM*)OPENSSL_sk_value(lVar3, iVar1 + -2);
                                             pBVar6 = BN_new();
                                             if (pBVar6 == (BIGNUM*)0x0) {
                                                pBVar9 = (BIGNUM*)0x0;
                                                pBVar5 = (BIGNUM*)0x0;
                                                local_60 = (BIGNUM*)0x0;
                                                pBVar4 = (BIGNUM*)0x0;
                                                pBVar7 = (BIGNUM*)0x0;
                                                local_68 = (BIGNUM*)0x0;
                                                iVar1 = 0;
                                                goto LAB_00100295;
                                             }
                                             pBVar9 = (BIGNUM*)OPENSSL_sk_value(in_R8, iVar1);
                                             pBVar7 = BN_mod_inverse(pBVar6, pBVar7, pBVar9, ctx);
                                             if (pBVar7 == (BIGNUM*)0x0) {
                                                LAB_00100794:iVar1 = 0;
                                                pBVar9 = (BIGNUM*)0x0;
                                                local_60 = (BIGNUM*)0x0;
                                                pBVar5 = (BIGNUM*)0x0;
                                                pBVar4 = (BIGNUM*)0x0;
                                                pBVar7 = (BIGNUM*)0x0;
                                                local_68 = (BIGNUM*)0x0;
                                                goto LAB_00100295;
                                             }
                                             uVar2 = OPENSSL_sk_num(in_stack_00000008);
                                             iVar10 = OPENSSL_sk_insert(in_stack_00000008, pBVar6, uVar2);
                                             if (iVar10 == 0) goto LAB_00100794;
                                          }
                                          iVar1 = 1;
                                          pBVar9 = (BIGNUM*)0x0;
                                          pBVar5 = (BIGNUM*)0x0;
                                       }
                                       goto LAB_00100245;
                                    }
                                    pBVar7 = (BIGNUM*)0x0;
                                    goto LAB_0010031d;
                                 }
                              }
                              pBVar9 = (BIGNUM*)0x0;
                              pBVar5 = (BIGNUM*)0x0;
                              pBVar6 = (BIGNUM*)0x0;
                              local_68 = (BIGNUM*)0x0;
                              pBVar4 = (BIGNUM*)0x0;
                              pBVar7 = (BIGNUM*)0x0;
                              goto LAB_00100295;
                           }
                        }
                        pBVar9 = (BIGNUM*)0x0;
                        pBVar5 = (BIGNUM*)0x0;
                        pBVar6 = (BIGNUM*)0x0;
                        pBVar4 = (BIGNUM*)0x0;
                        pBVar7 = (BIGNUM*)0x0;
                        goto LAB_00100295;
                     }
                  }
               }
               goto LAB_001006d8;
            }
            pBVar7 = BN_value_one();
            iVar1 = BN_sub(pBVar6, pBVar8, pBVar7);
            if (iVar1 == 0) {
               pBVar9 = (BIGNUM*)0x0;
               pBVar5 = (BIGNUM*)0x0;
               iVar1 = 0;
            } else {
               BN_set_flags(pBVar6, 4);
               pBVar7 = BN_mod_inverse(pBVar5, pBVar6, *(BIGNUM**)( param_1 + 0x30 ), ctx);
               if (pBVar7 == (BIGNUM*)0x0) goto LAB_00100318;
               iVar1 = OPENSSL_sk_num(in_R8);
               if (iVar1 < 2) goto LAB_0010037a;
               iVar1 = BN_mul(pBVar5, pBVar8, b, ctx);
               if (( iVar1 == 0 ) || ( pBVar9 = BN_dup(pBVar5) ),pBVar9 == (BIGNUM*)0x0) goto LAB_001006d8;
               uVar2 = OPENSSL_sk_num(lVar3);
               iVar1 = OPENSSL_sk_insert(lVar3, pBVar9, uVar2);
               if (iVar1 != 0) {
                  iVar10 = 1;
                  do {
                     iVar10 = iVar10 + 1;
                     iVar1 = OPENSSL_sk_num(in_R8);
                     if (iVar1 <= iVar10) goto LAB_0010037a;
                     pBVar7 = (BIGNUM*)OPENSSL_sk_value(in_R8, iVar10);
                     iVar1 = BN_mul(pBVar5, pBVar5, pBVar7, ctx);
                     if (( iVar1 == 0 ) || ( pBVar9 = BN_dup(pBVar5) ),pBVar9 == (BIGNUM*)0x0) goto LAB_001006d8;
                     uVar2 = OPENSSL_sk_num(lVar3);
                     iVar1 = OPENSSL_sk_insert(lVar3, pBVar9, uVar2);
                  } while ( iVar1 != 0 );
               }
               pBVar5 = (BIGNUM*)0x0;
            }
         }
         LAB_00100245:local_60 = (BIGNUM*)0x0;
         pBVar6 = (BIGNUM*)0x0;
         pBVar4 = (BIGNUM*)0x0;
         pBVar7 = (BIGNUM*)0x0;
         local_68 = (BIGNUM*)0x0;
         goto LAB_00100295;
      }
   }
   local_60 = (BIGNUM*)0x0;
   iVar1 = 0;
   pBVar9 = (BIGNUM*)0x0;
   pBVar5 = (BIGNUM*)0x0;
   pBVar6 = (BIGNUM*)0x0;
   pBVar4 = (BIGNUM*)0x0;
   pBVar7 = (BIGNUM*)0x0;
   lVar3 = 0;
   local_68 = (BIGNUM*)0x0;
   local_70 = 0;
   LAB_00100295:BN_free(pBVar6);
   BN_free(pBVar4);
   BN_free(pBVar7);
   BN_free(pBVar9);
   OPENSSL_sk_pop_free(lVar3, BN_free);
   OPENSSL_sk_pop_free(local_70, BN_free);
   BN_CTX_end(ctx);
   BN_CTX_free(ctx);
   BN_clear_free(local_68);
   BN_clear_free(local_60);
   BN_clear_free(pBVar5);
   return iVar1;
}undefined8 RSA_generate_multi_prime_key(long param_1, ulong param_2, int param_3, BIGNUM *param_4, BN_GENCB *param_5) {
   code *UNRECOVERED_JUMPTABLE_00;
   int iVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   BIGNUM *pBVar8;
   BIGNUM *pBVar9;
   BIGNUM *r;
   undefined8 *puVar10;
   BIGNUM *pBVar11;
   undefined8 *puVar12;
   BIGNUM *pBVar13;
   ulong uVar14;
   long lVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   long in_FS_OFFSET;
   long local_d0;
   BN_CTX *local_c8;
   long local_c0;
   int local_98;
   int local_94;
   int local_7c;
   int local_78;
   int local_58[4];
   int local_48;
   long local_40;
   iVar17 = (int)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x70 );
   if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i_74 = 0; i_74 < 2; i_74++) {
            /* WARNING: Could not recover jumptable at 0x0010085c. Too many branches */
         }
         uVar5 = ( *UNRECOVERED_JUMPTABLE_00 )(param_1, param_2, param_3);
         return uVar5;
      }
      goto LAB_00100dea;
   }
   UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x68 );
   if (UNRECOVERED_JUMPTABLE_00 == (code*)0x0) {
      if (( param_3 == 2 ) && ( 0x7ff < iVar17 )) {
         if (( param_4 == (BIGNUM*)0x0 ) || ( iVar1 = 0x10 < iVar1 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = ossl_rsa_sp800_56b_generate_key(param_1, param_2 & 0xffffffff, param_4, param_5);
               return uVar5;
            }
            goto LAB_00100dea;
         }
         iVar1 = ossl_rsa_check_public_exponent(param_4);
         if (iVar1 == 0) goto LAB_00100cfb;
         LAB_00100933:iVar1 = ossl_rsa_multip_cap(iVar17);
         if (iVar1 < param_3) {
            LAB_00100c8d:ERR_new();
            uVar5 = 0;
            ERR_set_debug("crypto/rsa/rsa_gen.c", 0x126, "rsa_multiprime_keygen");
            ERR_set_error(4, 0xa5, 0);
            goto LAB_00100871;
         }
         local_d0 = OPENSSL_sk_new_null();
         if (local_d0 == 0) goto LAB_00100c59;
         lVar6 = OPENSSL_sk_new_null();
         if (lVar6 == 0) {
            local_c8 = (BN_CTX*)0x0;
            lVar7 = 0;
         } else {
            lVar7 = OPENSSL_sk_new_null();
            if (lVar7 == 0) {
               local_c8 = (BN_CTX*)0x0;
            } else {
               local_c8 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 8 ));
               if (local_c8 != (BN_CTX*)0x0) {
                  BN_CTX_start(local_c8);
                  pBVar8 = BN_CTX_get(local_c8);
                  pBVar9 = BN_CTX_get(local_c8);
                  r = BN_CTX_get(local_c8);
                  if (r != (BIGNUM*)0x0) {
                     iVar1 = iVar17 / param_3;
                     iVar17 = iVar17 % param_3;
                     if (iVar17 < 1) {
                        iVar17 = 0;
                        iVar16 = 1;
                        local_58[0] = iVar1;
                        LAB_001009fa:local_58[iVar16] = iVar1;
                        if (iVar17 + 2 < param_3) {
                           local_58[iVar17 + 2] = iVar1;
                           if (iVar17 + 3 < param_3) {
                              local_58[iVar17 + 3] = iVar1;
                              if (iVar17 + 4 < param_3) {
                                 local_58[iVar17 + 4] = iVar1;
                              }
                           }
                        }
                     } else {
                        local_58[0] = iVar1 + 1;
                        if (param_3 <= iVar17) {
                           iVar17 = param_3;
                        }
                        if (iVar17 == 1) {
                           LAB_00100d67:local_58[iVar17] = iVar1;
                           iVar16 = iVar17 + 1;
                           if (iVar16 < param_3) goto LAB_001009fa;
                        } else {
                           if (( ( iVar17 != 2 ) && ( local_58[2] = local_58[0] ),iVar17 != 3 )) {
                              iVar17 = 5;
                              local_48 = local_58[0];
                           }
                           local_58[1] = local_58[0];
                           if (iVar17 < param_3) goto LAB_00100d67;
                        }
                     }
                     *(int*)( param_1 + 0xd8 ) = *(int*)( param_1 + 0xd8 ) + 1;
                     if (*(long*)( param_1 + 0x28 ) == 0) {
                        pBVar11 = BN_new();
                        *(BIGNUM**)( param_1 + 0x28 ) = pBVar11;
                        if (pBVar11 == (BIGNUM*)0x0) goto LAB_00100b78;
                     }
                     lVar15 = *(long*)( param_1 + 0x38 );
                     if (lVar15 == 0) {
                        lVar15 = BN_secure_new();
                        *(long*)( param_1 + 0x38 ) = lVar15;
                        if (lVar15 == 0) goto LAB_00100b78;
                     }
                     BN_set_flags(lVar15, 4);
                     if (*(long*)( param_1 + 0x30 ) == 0) {
                        pBVar11 = BN_new();
                        *(BIGNUM**)( param_1 + 0x30 ) = pBVar11;
                        if (pBVar11 == (BIGNUM*)0x0) goto LAB_00100b78;
                     }
                     if (*(long*)( param_1 + 0x40 ) == 0) {
                        lVar15 = BN_secure_new();
                        *(long*)( param_1 + 0x40 ) = lVar15;
                        if (lVar15 == 0) goto LAB_00100b78;
                     }
                     BN_set_flags(*(undefined8*)( param_1 + 0x40 ), 4);
                     if (*(long*)( param_1 + 0x48 ) == 0) {
                        lVar15 = BN_secure_new();
                        *(long*)( param_1 + 0x48 ) = lVar15;
                        if (lVar15 == 0) goto LAB_00100b78;
                     }
                     BN_set_flags(*(undefined8*)( param_1 + 0x48 ), 4);
                     if (param_3 == 2) {
                        puVar10 = (undefined8*)0x0;
                        local_c0 = 0;
                     } else {
                        *(undefined4*)( param_1 + 0x10 ) = 1;
                        local_c0 = OPENSSL_sk_new_reserve(0, param_3 + -2);
                        if (local_c0 == 0) goto LAB_00100b78;
                        if (*(long*)( param_1 + 0x88 ) != 0) {
                           OPENSSL_sk_pop_free(*(long*)( param_1 + 0x88 ), &ossl_rsa_multip_info_free);
                        }
                        iVar17 = 2;
                        *(long*)( param_1 + 0x88 ) = local_c0;
                        do {
                           puVar10 = (undefined8*)ossl_rsa_multip_info_new();
                           if (puVar10 == (undefined8*)0x0) goto LAB_00100b78;
                           iVar17 = iVar17 + 1;
                           OPENSSL_sk_push(local_c0, puVar10);
                        } while ( iVar17 < param_3 );
                     }
                     pBVar11 = BN_copy(*(BIGNUM**)( param_1 + 0x30 ), param_4);
                     if (pBVar11 != (BIGNUM*)0x0) {
                        iVar17 = 0;
                        local_98 = 0;
                        local_7c = 0;
                        LAB_00100e5d:if (iVar17 == 0) {
                           pBVar11 = *(BIGNUM**)( param_1 + 0x40 );
                        } else if (iVar17 == 1) {
                           pBVar11 = *(BIGNUM**)( param_1 + 0x48 );
                        } else {
                           puVar10 = (undefined8*)OPENSSL_sk_value(local_c0, iVar17 + -2);
                           pBVar11 = (BIGNUM*)*puVar10;
                        }
                        BN_set_flags(pBVar11, 4);
                        iVar16 = local_58[iVar17];
                        local_78 = 0;
                        iVar1 = 0;
                        local_7c = local_7c + iVar16;
                        local_94 = iVar16;
                        LAB_00100ea4:while (true) {
                           iVar2 = BN_generate_prime_ex2(pBVar11, local_94, 0, 0, 0, param_5, local_c8);
                           if (iVar2 == 0) goto LAB_00100b78;
                           if (iVar17 < 1) break;
                           iVar3 = BN_cmp(pBVar11, *(BIGNUM**)( param_1 + 0x40 ));
                           iVar2 = 0;
                           while (iVar3 != 0) {
                              iVar18 = iVar2 + 1;
                              if (iVar18 == iVar17) goto LAB_00100f1b;
                              if (iVar18 == 1) {
                                 pBVar13 = *(BIGNUM**)( param_1 + 0x48 );
                              } else {
                                 puVar12 = (undefined8*)OPENSSL_sk_value(local_c0, iVar2 + -1);
                                 pBVar13 = (BIGNUM*)*puVar12;
                              }
                              iVar3 = BN_cmp(pBVar11, pBVar13);
                              iVar2 = iVar18;
                           };
                        };
                        LAB_00100f1b:pBVar13 = BN_value_one();
                        iVar2 = BN_sub(r, pBVar11, pBVar13);
                        if (iVar2 == 0) goto LAB_00100b78;
                        ERR_set_mark();
                        BN_set_flags(r, 4);
                        pBVar13 = BN_mod_inverse(pBVar9, r, *(BIGNUM**)( param_1 + 0x30 ), local_c8);
                        if (pBVar13 == (BIGNUM*)0x0) {
                           uVar14 = ERR_peek_last_error();
                           if (( ( ( uVar14 & 0x80000000 ) != 0 ) || ( (char)( uVar14 >> 0x17 ) != '\x03' ) ) || ( ( (uint)uVar14 & 0x7fffff ) != 0x6c )) goto LAB_00100b78;
                           ERR_pop_to_mark();
                           iVar2 = BN_GENCB_call(param_5, 2, local_98);
                           local_98 = local_98 + 1;
                           if (iVar2 == 0) goto LAB_00100b78;
                           goto LAB_00100ea4;
                        }
                        if (iVar17 == 1) {
                           iVar2 = BN_mul(pBVar9, *(BIGNUM**)( param_1 + 0x40 ), *(BIGNUM**)( param_1 + 0x48 ), local_c8);
                        } else {
                           if (iVar17 == 0) {
                              iVar17 = BN_GENCB_call(param_5, 3, 0);
                              if (( iVar17 == 0 ) || ( pBVar11 = BN_dup(pBVar11) ),pBVar11 == (BIGNUM*)0x0) goto LAB_00100b78;
                              uVar4 = OPENSSL_sk_num(local_d0);
                              iVar17 = OPENSSL_sk_insert(local_d0, pBVar11, uVar4);
                              if (iVar17 == 0) goto LAB_00100b78;
                              iVar17 = 0;
                              goto LAB_001011ea;
                           }
                           iVar2 = BN_mul(pBVar9, *(BIGNUM**)( param_1 + 0x28 ), pBVar11, local_c8);
                        }
                        if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00100b78;
                        uVar14 = BN_get_word(r);
                        if (uVar14 - 9 < 7) {
                           pBVar13 = *(BIGNUM**)( param_1 + 0x28 );
                           if (1 < iVar17) {
                              pBVar13 = BN_copy((BIGNUM*)puVar10[3], pBVar13);
                              if (pBVar13 == (BIGNUM*)0x0) goto LAB_00100b78;
                              pBVar13 = *(BIGNUM**)( param_1 + 0x28 );
                           }
                           pBVar13 = BN_copy(pBVar13, pBVar9);
                           if (( ( pBVar13 == (BIGNUM*)0x0 ) || ( iVar1 = BN_GENCB_call(param_5, 3, iVar17) ),iVar1 == 0 )) goto LAB_00100b78;
                           uVar4 = OPENSSL_sk_num(local_d0);
                           iVar1 = OPENSSL_sk_insert(local_d0, pBVar11, uVar4);
                           if (iVar1 == 0) goto LAB_00100b78;
                           iVar17 = iVar17 + 1;
                           if (iVar17 < param_3) goto LAB_00100e5d;
                           iVar17 = BN_cmp(*(BIGNUM**)( param_1 + 0x40 ), *(BIGNUM**)( param_1 + 0x48 ));
                           if (iVar17 < 0) {
                              uVar5 = *(undefined8*)( param_1 + 0x40 );
                              *(undefined8*)( param_1 + 0x40 ) = *(undefined8*)( param_1 + 0x48 );
                              *(undefined8*)( param_1 + 0x48 ) = uVar5;
                              uVar5 = OPENSSL_sk_delete(local_d0, 0);
                              iVar17 = OPENSSL_sk_insert(local_d0, uVar5, 1);
                              if (iVar17 == 0) goto LAB_00100b78;
                           }
                           pBVar11 = BN_value_one();
                           iVar17 = BN_sub(pBVar9, *(BIGNUM**)( param_1 + 0x40 ), pBVar11);
                           if (iVar17 == 0) goto LAB_00100b78;
                           pBVar11 = BN_value_one();
                           iVar17 = BN_sub(r, *(BIGNUM**)( param_1 + 0x48 ), pBVar11);
                           if (( iVar17 == 0 ) || ( iVar17 = iVar17 == 0 )) goto LAB_00100b78;
                           iVar17 = 2;
                           goto LAB_00101382;
                        }
                        iVar2 = BN_GENCB_call(param_5, 2, local_98);
                        if (iVar2 == 0) goto LAB_00100b78;
                        if (param_3 == 5) {
                           if (uVar14 < 9) {
                              iVar1 = iVar1 + 1;
                              local_94 = iVar1 + iVar16;
                           } else {
                              iVar1 = iVar1 + -1;
                              local_94 = iVar1 + iVar16;
                           }
                        } else if (local_78 == 4) goto LAB_001011b5;
                        local_78 = local_78 + 1;
                        local_98 = local_98 + 1;
                        goto LAB_00100ea4;
                     }
                  }
               }
            }
         }
         LAB_00100b78:uVar5 = 0;
         OPENSSL_sk_free(local_d0);
         OPENSSL_sk_free(lVar6);
         OPENSSL_sk_free(lVar7);
         ERR_new();
         ERR_set_debug("crypto/rsa/rsa_gen.c", 600, "rsa_multiprime_keygen");
         ERR_set_error(4, 0x80003, 0);
         goto LAB_00100bc6;
      }
      if (iVar17 < 0x200) {
         ERR_new();
         ERR_set_debug("crypto/rsa/rsa_gen.c", 0x118, "rsa_multiprime_keygen");
         ERR_set_error(4, 0x78, 0);
         LAB_00100c59:uVar5 = 0;
      } else if (param_4 == (BIGNUM*)0x0) {
         ERR_new();
         uVar5 = 0;
         ERR_set_debug("crypto/rsa/rsa_gen.c", 0x11c, "rsa_multiprime_keygen");
         ERR_set_error(4, 0x65, 0);
      } else {
         iVar1 = ossl_rsa_check_public_exponent(param_4);
         if (iVar1 != 0) {
            if (1 < param_3) goto LAB_00100933;
            goto LAB_00100c8d;
         }
         LAB_00100cfb:ERR_new();
         uVar5 = 0;
         ERR_set_debug("crypto/rsa/rsa_gen.c", 0x121, "rsa_multiprime_keygen");
         ERR_set_error(4, 0xb2, 0);
      }
   } else {
      uVar5 = 0;
      if (param_3 == 2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_75 = 0; i_75 < 2; i_75++) {
               /* WARNING: Could not recover jumptable at 0x001008ce. Too many branches */
            }
            uVar5 = ( *UNRECOVERED_JUMPTABLE_00 )(param_1, param_2, param_4, param_5);
            return uVar5;
         }
         goto LAB_00100dea;
      }
   }
   goto LAB_00100871;
   LAB_00101382:if (param_3 <= iVar17) goto code_r0x00101387;
   puVar10 = (undefined8*)OPENSSL_sk_value(local_c0, iVar17 + -2);
   pBVar9 = BN_value_one();
   iVar1 = BN_sub((BIGNUM*)puVar10[1], (BIGNUM*)*puVar10, pBVar9);
   if (( iVar1 == 0 ) || ( iVar1 = BN_mul(pBVar8, pBVar8, (BIGNUM*)puVar10[1], local_c8) ),iVar1 == 0) goto LAB_00100b78;
   iVar17 = iVar17 + 1;
   goto LAB_00101382;
   LAB_001011b5:OPENSSL_sk_pop_free(local_d0);
   local_d0 = OPENSSL_sk_new_null();
   if (local_d0 == 0) goto LAB_00100b78;
   iVar17 = -1;
   local_7c = 0;
   local_98 = local_98 + 1;
   LAB_001011ea:iVar17 = iVar17 + 1;
   goto LAB_00100e5d;
   code_r0x00101387:BN_set_flags(pBVar8, 4);
   pBVar8 = BN_mod_inverse(*(BIGNUM**)( param_1 + 0x38 ), *(BIGNUM**)( param_1 + 0x30 ), pBVar8, local_c8);
   if (( pBVar8 == (BIGNUM*)0x0 ) || ( lVar15 = lVar7 ),iVar17 = ossl_rsa_multiprime_derive(param_1, param_2 & 0xffffffff, param_3, param_4, local_d0, lVar6),iVar17 == 0) goto LAB_00100b78;
   pBVar8 = (BIGNUM*)OPENSSL_sk_delete(local_d0, 0, lVar15, pBVar8);
   BN_clear_free(pBVar8);
   pBVar8 = (BIGNUM*)OPENSSL_sk_delete(local_d0, 0);
   BN_clear_free(pBVar8);
   uVar5 = OPENSSL_sk_delete(lVar6, 0);
   *(undefined8*)( param_1 + 0x50 ) = uVar5;
   uVar5 = OPENSSL_sk_delete(lVar6, 0);
   *(undefined8*)( param_1 + 0x58 ) = uVar5;
   uVar5 = OPENSSL_sk_delete(lVar7, 0);
   *(undefined8*)( param_1 + 0x60 ) = uVar5;
   for (iVar17 = 2; iVar17 < param_3; iVar17 = iVar17 + 1) {
      puVar10 = (undefined8*)OPENSSL_sk_value(local_c0, iVar17 + -2);
      pBVar8 = (BIGNUM*)OPENSSL_sk_delete(local_d0, 0);
      BN_copy((BIGNUM*)*puVar10, pBVar8);
      BN_clear_free(pBVar8);
      pBVar8 = (BIGNUM*)OPENSSL_sk_delete(lVar6, 0);
      pBVar9 = BN_copy((BIGNUM*)puVar10[1], pBVar8);
      BN_clear_free(pBVar8);
      if (pBVar9 == (BIGNUM*)0x0) goto LAB_00100b78;
      pBVar8 = (BIGNUM*)OPENSSL_sk_delete(lVar7, 0);
      pBVar9 = BN_copy((BIGNUM*)puVar10[2], pBVar8);
      BN_clear_free(pBVar8);
      if (pBVar9 == (BIGNUM*)0x0) goto LAB_00100b78;
   }
   uVar5 = 1;
   OPENSSL_sk_free(local_d0);
   OPENSSL_sk_free(lVar6);
   OPENSSL_sk_free(lVar7);
   LAB_00100bc6:BN_CTX_end(local_c8);
   BN_CTX_free(local_c8);
   LAB_00100871:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   LAB_00100dea:/* WARNING: Subroutine does not return */__stack_chk_fail();
}int RSA_generate_key_ex(RSA *rsa, int bits, BIGNUM *e, BN_GENCB *cb) {
   int iVar1;
   if (*(code**)( rsa->engine + 0x68 ) != (code*)0x0) {
      for (int i_76 = 0; i_76 < 2; i_76++) {
         /* WARNING: Could not recover jumptable at 0x001015b1. Too many branches */
      }
      iVar1 = ( **(code**)( rsa->engine + 0x68 ) )();
      return iVar1;
   }
   iVar1 = RSA_generate_multi_prime_key(rsa, bits, 2, e, cb);
   return iVar1;
}
